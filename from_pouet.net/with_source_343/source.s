
; Kalms/C-Lous/Appendix/TBL's contribution to Icing'98 1k-effect-coding-compo.
; all done from scratch in DOS' Edit and TASM 4.0!
; As always, contact me at mikael@kalms.org :)

GRIDSHIFT EQU   3
GRIDSQUARE EQU  (1 SHL GRIDSHIFT)
GRIDXSIZE EQU   (320 / GRIDSQUARE)
GRIDYSIZE EQU   (200 / GRIDSQUARE)
PERSP   EQU     0.85

        P586
        P587
        LOCALS  @@

CODE    SEGMENT PARA PUBLIC USE16 'CODE'
        ASSUME  CS:CODE,DS:CODE,SS:CODE
        ORG     100h

start:
        mov     ax,cs                   ; Memory layout:
        add     ax,1000h                ; 64k cs,ds  Program, Data .... Stack
        mov     scrbuf,ax               ; 64k es     Screen Buffer
        mov     es,ax                   ; 64k gs     Texture
        add     ax,1000h
        mov     gs,ax

        mov     ax,13h
        int     10h

;--------- SET PALETTE ----------

        mov     dx,3c8h
        xor     ax,ax
        out     dx,al
        inc     dx
@@col:
        mov     al,ah
        shr     al,2
        out     dx,al
        out     dx,al
        mov     bl,al
        shr     al,1
        neg     al
        add     al,bl
        out     dx,al
        inc     ah
        jnz     @@col

;--------- INIT FPU CONSTANTS ----------

        finit

        fild    i_gridxsize
        fdivr   f_1
        fstp    f_1_over_gridxsize
        fild    i_gridysize
        fdivr   f_1
        fstp    f_1_over_gridysize
        fldpi
        fadd    st,st
        fild    i_texwidth
        fdivrp  st(1),st
        fstp    f_2pi_to_texwidth

;-------- GENERATE & SMOOTH TEXTURE -----------------

        call    gentexture

        xor     di,di
@@val:  mov     al,gs:[di+1]
        add     al,gs:[di-1]
        rcr     al,1
        mov     bl,gs:[di+256]
        add     bl,gs:[di-256]
        rcr     bl,1
        add     al,bl
        rcr     al,1
        mov     gs:[di],al
        inc     di
        jnz     @@val

;*********************** MAIN LOOP *****************************

@@mainloop:

        fld     f_flowermorphsinpos
        fadd    f_flowermorphsinpos_add
        fst     f_flowermorphsinpos
        fsin
        fmul    f_0_75
        fstp    flowersinscale

;------------- DRAW TUNNEL ---------------

        call    tracerays
        call    drawgrid

;------------- UPDATE VIDEOMEM -------------

        push    ds
        push    es
        mov     ds,scrbuf
        mov     ax,0a000h
        mov     es,ax
        mov     cx,320*200/4
        xor     si,si
        xor     di,di
        rep     movsd
        pop     es
        pop     ds

;------------ VSYNC -------------------

        mov     dx,3dah
        mov     ah,8
@@v1:   in      al,dx
        test    al,ah
        jz      @@v1
@@v2:   in      al,dx
        test    al,ah
        jnz     @@v2

;------ MOVE & SCROLL TUNNEL ----------------

        call    rotvects
        add     uscroll,100h
        add     vscroll,300h

        mov     ah,1
        int     16h
        jz      @@mainloop

; --------- THE END --------------

        xor     ah,ah
        int     16h

        mov     ax,3
        int     10h

        lea     dx,message
        mov     ah,9
        int     21h

        mov     ax,4c00h
        int     21h

;******** SOME VECTOR OPERATORS ***************

; si    v0
; di    v1
; bx    v

v3add   PROC
        fld     dword ptr [si]
        fadd    dword ptr [di]
        fstp    dword ptr [bx]
        fld     dword ptr [si+4]
        fadd    dword ptr [di+4]
        fstp    dword ptr [bx+4]
        fld     dword ptr [si+8]
        fadd    dword ptr [di+8]
        fstp    dword ptr [bx+8]
        ret
v3add   ENDP

; si    v0
; di    v1
; bx    v

v3sub   PROC
        fld     dword ptr [si]
        fsub    dword ptr [di]
        fstp    dword ptr [bx]
        fld     dword ptr [si+4]
        fsub    dword ptr [di+4]
        fstp    dword ptr [bx+4]
        fld     dword ptr [si+8]
        fsub    dword ptr [di+8]
        fstp    dword ptr [bx+8]
        ret
v3sub   ENDP

; st(0) scale
; si    v0
; di    v

v3scale PROC
        fld     dword ptr [si]
        fmul    st,st(1)
        fstp    dword ptr [di]
        fld     dword ptr [si+4]
        fmul    st,st(1)
        fstp    dword ptr [di+4]
        fld     dword ptr [si+8]
        fmul    st,st(1)
        fstp    dword ptr [di+8]
        ret
v3scale ENDP

; si    v0
; di    v

v3copy  PROC
        mov     eax,[si]
        mov     ebx,[si+4]
        mov     ecx,[si+8]
        mov     [di],eax
        mov     [di+4],ebx
        mov     [di+8],ecx
        ret
v3copy  ENDP

;******* TRACE TUNNEL INTO TABLE **************

tracerays PROC
        lea     si,v_upper_right
        lea     di,v_upper_left
        lea     bx,v_delta_right
        call    v3sub
        fld     f_1_over_gridxsize
        lea     si,v_delta_right
        mov     di,si
        call    v3scale
        ffree   st

        lea     si,v_lower_left
        lea     di,v_upper_left
        lea     bx,v_delta_down
        call    v3sub
        fld     f_1_over_gridysize
        lea     si,v_delta_down
        mov     di,si
        call    v3scale
        ffree   st

        lea     si,v_upper_left
        lea     di,v_current_vert
        call    v3copy

        lea     bp,tunnelgrid

        mov     cx,GRIDYSIZE+1
@@y:
        push    cx

        lea     si,v_current_vert
        lea     di,v_current_horiz
        call    v3copy

        mov     cx,GRIDXSIZE+1
@@x:
        push    cx

        fld     v_current_horiz
        fld     v_current_horiz+4
        fpatan
        fld     st
        fmul    f_2pi_to_texwidth
        fistp   tempd1
        mov     eax,tempd1
        add     ax,uscroll
        mov     ds:[bp+2],ax

        fmul    f_3
        fsin
        fmul    flowersinscale
        fadd    f_1

        fld     v_current_horiz
        fmul    st,st
        fld     v_current_horiz+4
        fmul    st,st
        faddp   st(1),st
        fsqrt
        fdivr   tunnelradius
        fmul    v_current_horiz+8
        fmulp   st(1),st
        fmul    f_256
        fistp   tempd1
        mov     di,tuntaboffs
        mov     eax,tempd1
        mov     ebx,eax
        add     ax,vscroll
        mov     ds:[bp],ax
        test    ebx,ebx
        jns     @@nflip
        neg     ebx
@@nflip:
        cmp     ebx,256 SHL 8
        jl      @@nclamp
        mov     bx,255 SHL 8
@@nclamp:
        mov     ds:[bp+4],bx

        add     bp,6

        lea     si,v_current_horiz
        lea     di,v_delta_right
        lea     bx,v_current_horiz
        call    v3add
        pop     cx
        dec     cx
        jnz     @@x
        lea     si,v_current_vert
        lea     di,v_delta_down
        lea     bx,v_current_vert
        call    v3add
        pop     cx
        dec     cx
        jnz     @@y

        ret
tracerays ENDP

;*********** INTERPOLATE TUNNELTABLE *****************

drawgrid PROC
        lea     si,tunnelgrid
        xor     di,di
        mov     cx,GRIDYSIZE
@@y:    push    cx
        mov     cx,GRIDXSIZE
@@x:    push    cx
        lodsd
        mov     ebp,[si+(GRIDXSIZE+1)*6-4]
        mov     ebx,[si+6-4]
        mov     edx,[si+(GRIDXSIZE+1)*6+6-4]
        sub     ebp,eax
        sub     edx,ebx
        rol     ebp,16
        rol     edx,16
        sar     bp,GRIDSHIFT
        sar     dx,GRIDSHIFT
        rol     ebp,16
        rol     edx,16
        sar     bp,GRIDSHIFT
        sar     dx,GRIDSHIFT

        mov     lvslope,ebp
        mov     rvslope,edx

        mov     dh,[si+1]

        mov     ch,GRIDSQUARE
@@sqry:
        push    eax
        push    ebx
        sub     ebx,eax
        rol     ebx,16
        sar     bx,GRIDSHIFT
        rol     ebx,16
        sar     bx,GRIDSHIFT
        mov     ebp,ebx
        mov     cl,GRIDSQUARE
@@sqrx:
        mov     bl,ah
        rol     eax,16
        mov     bh,ah
        rol     eax,16
        mov     bl,gs:[bx]
        sub     bl,dh
        sbb     dl,dl
        not     dl
        and     bl,dl
        mov     es:[di],bl
        inc     di
        add     eax,ebp
        dec     cl
        jnz     @@sqrx
        pop     ebx
        pop     eax
        add     di,320-GRIDSQUARE
        add     eax,lvslope
        add     ebx,rvslope
        dec     ch
        jnz     @@sqry
        inc     si
        inc     si

        sub     di,320*GRIDSQUARE-GRIDSQUARE
        pop     cx
        dec     cx
        jnz     @@x
        add     si,6
        add     di,(GRIDSQUARE-1)*320
        pop     cx
        dec     cx
        jnz     @@y
        ret
drawgrid ENDP

;*********** ROTATE VIEW REFERENCE-VECTORS ***********

rotvects PROC
        lea     si,v_upper_left

        fld     f_rotinc
        fsincos

        mov     cx,3
@@vect:
        fld     dword ptr [si+8]
        fld     dword ptr [si+4]
        fld     st
        fmul    st,st(3)
        fld     st(2)
        fmul    st,st(5)
        fsubp   st(1),st
        fstp    dword ptr [si+4]
        fmul    st,st(3)
        fxch    st(1)
        fmul    st,st(2)
        faddp   st(1),st
        fstp    dword ptr [si+8]

        add     si,3*4
        loop    @@vect

        ffree   st
        ffree   st(1)

        ret
rotvects ENDP

;*************** GENERATE TEXTURE ****************

gentexture PROC
        xor     bx,bx
        mov     cx,80h
        mov     byte ptr gs:[bx],cl

@@depth:
@@y:
@@x:
@@three:
        push    cx
        call    @@genpt
        shl     cx,8
        call    @@genpt
        push    bx
        add     bl,ch
        add     bl,ch
        mov     cl,ch
        neg     cl
        call    @@genpt
        pop     bx
        pop     cx
        add     bl,cl
        add     bl,cl
        jnc     @@x
        add     bh,cl
        add     bh,cl
        jnc     @@y
        shr     cl,1
        jnz     @@depth
        ret

@@genpt:
        xor     ax,ax                   ; Get average of the two "reference
        mov     al,gs:[bx]              ;  corners"
        add     bh,ch
        add     bh,ch
        add     bl,cl
        add     bl,cl
        xor     dx,dx
        mov     dl,gs:[bx]
        add     dx,ax
        shr     dx,1

        xor     ah,ah                   ; Add random factor
        in      al,40h
        cbw
        shl     al,cl
        sar     ax,3
        add     dx,ax                   ; Clamp to colour 0 .. 255
        jns     @@nclip1
        xor     dx,dx
@@nclip1:
        test    dh,dh
        jz      @@nclip2
        mov     dl,-1
@@nclip2:

        sub     bh,ch                   ; And store it out!
        sub     bl,cl
        mov     gs:[bx],dl
        sub     bh,ch
        sub     bl,cl
        ret
gentexture ENDP

;************* CONSTANTS **********************

f_1             dd      1.0
f_0_75          dd      0.75
f_3             dd      3.0
f_256           dd      256.0
i_gridxsize     dw      GRIDXSIZE
i_gridysize     dw      GRIDYSIZE
i_texwidth      dd      256 SHL 8
f_rotinc        dd      0.03

uscroll         dw      0
vscroll         dw      0

v_upper_left    dd      -1.0
                dd      0.7
                dd      PERSP

v_upper_right   dd      1.0
                dd      0.7
                dd      PERSP

v_lower_left    dd      -1.0
                dd      -0.7
                dd      PERSP

tunnelradius    dd      50.0

message         db      'TBLish indeed :)',13,10,'$'

f_flowermorphsinpos dd  0
f_flowermorphsinpos_add dd 0.02

                ALIGN   4

v_delta_right   dd      3 dup (?)

v_delta_down    dd      3 dup (?)

v_current_vert  dd      3 dup (?)

v_current_horiz dd      3 dup (?)

f_1_over_gridxsize dd   ?
f_1_over_gridysize dd   ?
f_2pi_to_texwidth dd    ?

scrbuf          dw      ?       

tempd1          dd      ?

tuntaboffs      dw      ?

tunnelgrid      dw      3*(GRIDXSIZE+1)*(GRIDYSIZE+1) dup (?)

lvslope         dd      ?
rvslope         dd      ?

flowersinscale  dd      ?

CODE    ENDS

        end     start

