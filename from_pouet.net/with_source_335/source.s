
GRIDSHIFT EQU   2
GRIDSQUARE EQU  (1 SHL GRIDSHIFT)
GRIDXSIZE EQU   (320 / GRIDSQUARE)
GRIDYSIZE EQU   (200 / GRIDSQUARE)

        P586
        P587
        LOCALS  @@

CODE    SEGMENT PARA PUBLIC USE16 'CODE'
        ASSUME  CS:CODE,DS:CODE,SS:CODE
        ORG     100h

start:
        mov     ax,cs
        add     ax,2000h
        mov     es,ax
        xor     di,di
        xor     ax,ax
        mov     cx,7fffh
        rep     stosw
        stosw


        mov     ax,cs
        add     ax,1000h
        mov     scrbuf,ax
        mov     es,ax
        mov     ax,cs
        add     ax,2000h
        mov     gs,ax

        mov     ax,13h
        int     10h

        mov     dx,3c8h
        xor     ax,ax
        out     dx,al
        inc     dx
@@col:
        mov     al,ah
        shr     al,2
        out     dx,al
        out     dx,al
        out     dx,al
        inc     ah
        jnz     @@col

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

        call    gentexture

@@mainloop:
        call    cls
        call    test
        call    updatescreen
        call    vsync

        add     uscroll,100h
        add     vscroll,100h

        mov     ah,1
        int     16h
        jz      @@mainloop

        xor     ah,ah
        int     16h

        mov     ax,3
        int     10h

        mov     ax,4c00h
        int     21h

cls     PROC
        mov     cx,320*200/4
        xor     di,di
        xor     eax,eax
        rep     stosd
        ret
cls     ENDP

updatescreen PROC
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
        ret
updatescreen ENDP

vsync   PROC
        mov     dx,3dah
        mov     ah,8
@@v1:   in      al,dx
        test    al,ah
        jz      @@v1
@@v2:   in      al,dx
        test    al,ah
        jnz     @@v2
        ret
vsync   ENDP

; ax    x
; bx    y
; cl    c

putpixel PROC
        cmp     ax,320
        jae     @@skip
        cmp     bx,200
        jae     @@skip
        imul    bx,320
        add     bx,ax
        mov     es:[bx],cl
@@skip:
        ret
putpixel ENDP



test    PROC
        call    tracerays
        call    drawgrid
        ret
test    ENDP

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

        mov     tuntaboffs,OFFSET tunnelgrid

        mov     cx,GRIDYSIZE+1
@@y:
        push    cx

        lea     si,v_current_vert
        lea     di,v_current_horiz
        call    v3copy

        mov     cx,GRIDXSIZE+1
@@x:
        push    cx
        call    intersect

        lea     si,v_current_horiz
        lea     di,v_delta_right
        lea     bx,v_current_horiz
        call    v3add
        pop     cx
        loop    @@x
        lea     si,v_current_vert
        lea     di,v_delta_down
        lea     bx,v_current_vert
        call    v3add
        pop     cx
        loop    @@y

        ret
tracerays ENDP

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

intersect PROC

        fld     v_current_horiz
        fmul    st,st
        fld     v_current_horiz+4
        fmul    st,st
        faddp   st(1),st
        fsqrt
        fdivr   tunnelradius
        fmul    v_current_horiz+8
        fmul    f_256
        fistp   tempd1
        mov     di,tuntaboffs
        mov     eax,tempd1
        add     ax,vscroll
        mov     [di],ax
        fld     v_current_horiz
        fld     v_current_horiz+4
        fpatan
        fmul    f_2pi_to_texwidth
        fistp   tempd1
        mov     eax,tempd1
        add     ax,uscroll
        mov     [di+2],ax
        add     tuntaboffs,4
        ret
intersect ENDP

drawgrid PROC
        lea     si,tunnelgrid
        xor     di,di
        mov     cx,GRIDYSIZE
@@y:    push    cx
        mov     cx,GRIDXSIZE
@@x:    push    cx
        mov     eax,[si]
        mov     ebp,[si+(GRIDXSIZE+1)*4]
        mov     ebx,[si+4]
        mov     edx,[si+(GRIDXSIZE+1)*4+4]
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

        mov     ch,GRIDSQUARE
@@sqry:
        push    eax
        push    ebx
        sub     ebx,eax
        rol     ebx,16
        sar     bx,GRIDSHIFT
        rol     ebx,16
        sar     bx,GRIDSHIFT
        mov     edx,ebx
        mov     cl,GRIDSQUARE
@@sqrx:
        mov     bl,ah
        rol     eax,16
        mov     bh,ah
        rol     eax,16
        mov     bl,gs:[bx]
        mov     es:[di],bl
        inc     di
        add     eax,edx
        dec     cl
        jnz     @@sqrx
        pop     ebx
        pop     eax
        add     di,320-GRIDSQUARE
        add     eax,lvslope
        add     ebx,rvslope
        dec     ch
        jnz     @@sqry
        sub     di,320*GRIDSQUARE-GRIDSQUARE

        add     si,4
        pop     cx
        dec     cx
        jnz     @@x
        add     si,4
        add     di,(GRIDSQUARE-1)*320
        pop     cx
        dec     cx
        jnz     @@y
        ret
drawgrid ENDP

addrand PROC
        xor     ah,ah
        in      al,40h
        cbw
        shl     al,cl
        sar     ax,4
        add     dx,ax
        jns     @@nclip1
        xor     dx,dx
@@nclip1:
        test    dh,dh
        jz      @@nclip2
        mov     dl,-1
@@nclip2:
        ret
addrand ENDP


;14342434
;44444444
;34343434
;44444444
;24342424
;44444444
;34343434
;44444444


gentexture PROC
        mov     byte ptr gs:[0],080h
        mov     byte ptr gs:[80h],080h
        mov     byte ptr gs:[8000h],080h
        mov     byte ptr gs:[8080h],080h
        xor     bx,bx

        mov     cx,80h

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
        xor     ax,ax
        mov     al,gs:[bx]
        add     bh,ch
        add     bh,ch
        add     bl,cl
        add     bl,cl
        xor     dx,dx
        mov     dl,gs:[bx]
        add     dx,ax
        shr     dx,1
        call    addrand
        sub     bh,ch
        sub     bl,cl
        mov     gs:[bx],dl
        sub     bh,ch
        sub     bl,cl
        ret

gentexture ENDP

f_1             dd      1.0
f_256           dd      256.0
i_gridxsize     dw      GRIDXSIZE
i_gridysize     dw      GRIDYSIZE
i_texwidth      dd      256 SHL 8

uscroll         dw      0
vscroll         dw      0

v_upper_left    dd      -1.0
                dd      0.7
                dd      1.0

v_upper_right   dd      1.0
                dd      0.7
                dd      1.0

v_lower_left    dd      -1.0
                dd      -0.7
                dd      1.0

tunnelradius    dd      50.0

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

tunnelgrid      dw      2*(GRIDXSIZE+1)*(GRIDYSIZE+1)

lvslope         dd      ?
rvslope         dd      ?

CODE    ENDS

        end     start


