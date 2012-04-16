; 1KB intro  -  Copyright 1999 Kasper Rönning
;
; Author:
;   Kasper Rönning
; Email:
;   kasper_ronning@hotmail.com
; Home page:
;   home7.swipnet.se/~w-72351

IDEAL
MODEL TINY
P386
NOJUMPS


; Enable/disable these to add/remove things in the intro.
USESTROBO       EQU 0
USEPLASMA       EQU 0

VSCREEN         EQU 06000h
TMPDATASEG1     EQU 07000h
TMPDATASEG2     EQU 08000h
TEXTURESEG      EQU 09000h

TUNNEL_DIST     EQU 2800
; TUNNEL_ANGLE    EQU 81.48147086
TUNNEL_ANGLE    EQU 40.74043543

PLASMA_DEPTH    EQU 1
PLASMA_MAXCOLOR EQU 127

BALL_RADIUS_CONST       EQU 60
BALL_LATITUDE_INC       EQU 15
BALL_LONGITUDE_INC      EQU 15

COL1            EQU 0fdh
COL2            EQU 0feh
COL3            EQU 0ffh


UDATASEG
tnl_temp DD ?
x DW ?
y DW ?
z DW ?
stupidtemp DD ?
pl_w DW ?
pl_c1 DB ?
pl_c2 DB ?
pl_c3 DB ?
pl_c4 DB ?

ball_xcoords DW 3000 DUP(?)
ball_ycoords DW 3000 DUP(?)
ball_zcoords DW 3000 DUP(?)
ball_numpoints DW ?
ball_ypos DW 256 DUP(?)

latitude DW ?

newx DW 4 DUP(?)
newy DW 4 DUP(?)

; To be zeroed!
LABEL startzero

radius DD 4 DUP(?)
angle DD 4 DUP (?)

xangle DD ?                            ; CAUTION: must be in this order!
yangle DD ?                            ; *
zangle DD ?                            ; *

LABEL endzero

dummydata DB 20 DUP (?)
longitudetemp DD ?
latitudetemp DD ?


DATASEG
longitude DW 0
framenum DW 0
deg2rad DD 0.11745329252
tnl_dist_const DW TUNNEL_DIST
tnl_angle_const DD TUNNEL_ANGLE
ball_xpos DW 160
ball_zpos DW 1256
xangleadder DD 0.01
yangleadder DD 0.015
zangleadder DD 0.008
ball_movement_const1 DD 0.024543692606   ;   0.012271846303
ball_movement_const2 DD 75.0             ;   200-2*BALL_RADIUS_CONST
ball_going_right DB 1

ball_radius DW BALL_RADIUS_CONST

balldots DB COL1, COL2, COL1
         DB COL2, COL3, COL2
         DB COL1, COL2, COL1

boppixels DB 3, 4, 3,   4, 5, 4,   3, 4, 3
radius_inc DD 0.001, 0.0005, 0.0001, 0.001
angle_inc DD 0.5, 1.2, 2.4, 4.8

IF USEPLASMA
nextrand DW 6789h, 2345h
ENDIF


NIN DB 'Fragile'


CODESEG
        ORG 100h

_main:
; *************************  INIT  *****************************
        mov di, offset startzero
        xor al, al
        mov cx, endzero-startzero+1
        rep stosb

        finit

        ; calculate 3d ball
        ;     x := round(r*sin(i*rad)*cos(j*rad));
        ;     y := round(r*sin(i*rad)*sin(j*rad));
        ;     z := round(r*cos(i*rad));

; WARNING:
        xor di, di
        xor cx, cx
@@longitudeloop:
        mov [latitude], 0
@@latitudeloop:
        fild [longitude]
        fmul [deg2rad]
        fst [longitudetemp]
        fsin
        fimul [ball_radius]
        fld st(0)                     ; st(0) = st(1) = r*sin(i*rad)
        fild [latitude]
        fmul [deg2rad]
        fst [latitudetemp]
        fcos
        fmulp st(1)
        fistp [ball_xcoords+di]       ; st(0) = r*sin(i*rad)*cos(j*rad)

        fld [latitudetemp]            ; st(0) = r*sin(i*rad)
        fsin
        fmulp st(1)
        fistp [ball_ycoords+di]       ; st(0) = r*sin(i*rad)*sin(j*rad)

        fld [longitudetemp]
        fcos
        fimul [ball_radius]
        fistp [ball_zcoords+di]       ; st(0) = r*cos(i*rad)

        inc di
        inc di
        inc cx

        add [latitude], BALL_LATITUDE_INC
        cmp [latitude], 360
        jbe short @@latitudeloop
        add [longitude], BALL_LONGITUDE_INC
        cmp [longitude], 180
        jbe short @@longitudeloop

        mov [ball_numpoints], cx

        ; calculate ball movement
; WARNING:
        xor bx, bx                      ; BX is already zero
        mov si, offset stupidtemp
        mov di, offset ball_ypos
ballmovement:
        mov [si], bx
        fild [word si]
        fmul [ball_movement_const1]
        fsin
        fmul [ball_movement_const2]
        fistp [word si]
        mov ax, [si]
        neg ax
        add ax, 140   ; 200-BALL_RADIUS
        mov [di], ax
        inc di
        inc di
        inc bx
        cmp bx, 256                        ; change to bl?
        jne ballmovement

        ; texture init

        xor al, al
        mov dx, TEXTURESEG
        call clear

        push TEXTURESEG
        pop es

IF USEPLASMA
        call plasma PASCAL, 0, 0, 255, 255
ELSE
        xor ecx, ecx
rendertextureloop:
        push ecx
        call othertexture
        pop ecx
        inc ecx
        cmp ecx, 200000
        jne short rendertextureloop
ENDIF

        ; tunnel init

;        finit
        push TMPDATASEG1
        pop es
        push TMPDATASEG2
        pop fs
        xor di, di
        mov [y], -100
tnl_yloop:
        mov [x], -160
tnl_xloop:
        fild [x]
        fild [y]
        fpatan
        fmul [tnl_angle_const]
        fistp [tnl_temp]
        mov ax, [WORD tnl_temp]
;        test ah, 1
;        jz @@distok1
;        mov ah, 255
;        sub ah, al
;        mov al, ah
;@@distok1:
        mov [fs:di], al

        fild [y]
        fmul st(0), st(0)
        fild [x]
        fmul st(0), st(0)
        faddp st(1)
        fsqrt
        fidivr [tnl_dist_const]
        fistp [tnl_temp]
        fdecstp
        mov al, [BYTE tnl_temp]
        stosb

        inc [x]
        cmp [x], 160
        jne short tnl_xloop
        inc [y]
        cmp [y], 100
        jne short tnl_yloop

IF USESTROBO
        call strobo
ENDIF

        mov ax, 13h
        int 10h

        ; set palette
        xor ebx, ebx
setpal:
        mov cx, 4
setpalrepeat:
        mov eax, ebx
        call setcol
        inc bl
        loop short setpalrepeat
        add ebx, 01000100h
        or bl, bl
        jnz short setpal

        mov eax, 1a1a00FDh
        call setcol
        mov eax, 252500FEh
        call setcol
        mov eax, 393900FFh
        call setcol

; ************************* MAIN ****************************

        xor si, si
@@mainloop:
        add si, 102h
        pusha
        call tunnel
        call dotball
        call vsync
        call flip
        inc [framenum]
@@notok:
        mov al, [ball_going_right]
        or al, al
        jz short @@left
        cmp [ball_xpos], 255          ; 320-BALL_RADIUS-little
        jb short @@ok
        mov [ball_going_right], 0
        jmp short @@notok
@@ok:
        inc [ball_xpos]
        jmp short @@balldone
@@left:
        cmp [ball_xpos], 65          ; BALL_RADIUS+little
        ja short @@ok2
        mov [ball_going_right], 1
        jmp short @@notok
@@ok2:
        dec [ball_xpos]
@@balldone:
        popa
        mov ah, 1
        int 16h
        jz short @@mainloop

; ************************ UNINIT ***************************
IF USESTROBO
        call strobo
ENDIF
        mov ax, 3
        int 10h

        ret

PROC setcol
        mov dx, 3c8h
        out dx, al
        inc dx
        mov al, ah
        out dx, al
        shr eax, 16
        out dx, al
        mov al, ah
        out dx, al
        ret
ENDP

IF USESTROBO ;---------------------------------------------------------------

PROC strobo
        mov dx, 0a000h
        xor al, al
        call clear
        mov ch, 10
@@1:
        call vsync
        xor eax, eax
        call setcol
        mov cl, 5
@@2:
        call vsync
        dec cl
        jnz short @@2
        xor eax, eax
        dec eax
        inc al
        call setcol
        dec ch
        jnz short @@1
        xor eax, eax
        call setcol
        ret
        jmp setcol
ENDP

ENDIF ;----------------------------------------------------------------------

PROC vsync
        mov dx, 3dah
@@1:
        in al, dx
        test al, 8
        jnz short @@1
@@2:
        in al, dx
        test al, 8
        jz short @@2
        ret
ENDP

; Input:
;   al - fill color
;   dx - target seg
PROC clear
        mov es, dx
        xor cx, cx
        dec cx
        xor di, di
        rep stosb
        stosb
        ret
ENDP

PROC flip
        push ds
        push 0a000h
        pop es
        push VSCREEN
        pop ds
        xor si, si
        xor di, di
        mov cx, 16000
        rep movsd
        pop ds
        ret
ENDP

PROC tunnel
        push ds
        xor di, di
        push VSCREEN
        pop es
        push TMPDATASEG1
        pop fs
        push TMPDATASEG2
        pop gs
        push TEXTURESEG
        pop ds
        mov cx, 64000
@@1:
        mov bl, [fs:di]
        mov bh, [gs:di]
        mov al, [bx+si]
        stosb
        dec cx
        jnz short @@1
        pop ds
        ret
ENDP

PROC rotate3d
        mov bp, offset rothelper
        mov bx, offset xangle
        mov si, offset y
        mov di, offset z
        call bp

        mov bx, offset yangle
        mov si, di
        mov di, offset x
        call bp

        mov bx, offset zangle
        mov si, di
        mov di, offset y
;        call bp
;        ret
        jmp bp
ENDP

PROC rothelper
; ie ny := y * cos(x_an) - z * sin(x_an);
;    nz := y * sin(x_an) + z * cos(x_an);

        fild [WORD si]
        fld [DWORD bx]
        fsin
        fld [DWORD bx]
        fcos
        fmulp st(2)
        fild [WORD di]
        fmulp st(1)
        fsubp st(1)

        fild [WORD si]
        fld [DWORD bx]
        fcos
        fld [DWORD bx]
        fsin
        fmulp st(2)
        fild [WORD di]
        fmulp st(1)
        faddp st(1)
        fistp [WORD di]
        fistp [WORD si]

        ret
ENDP

PROC dotball
        push VSCREEN
        pop es

        fld [xangle]
        fadd [xangleadder]
        fstp [xangle]
        fld [yangle]
        fadd [zangleadder]
        fstp [yangle]
        fld [zangle]
        fadd [zangleadder]
        fstp [zangle]

        xor si, si
        mov cx, [ball_numpoints]
@@pointloop:
        push cx
        mov ax, [ball_xcoords+si]
        mov [x], ax
        mov ax, [ball_ycoords+si]
        mov [y], ax
        mov ax, [ball_zcoords+si]
        mov [z], ax
        push si
        call rotate3d
        pop si

        mov di, [z]
        add di, [ball_zpos]

        mov ax, [x]
        mov dx, 1256
        imul dx
        idiv di
        add ax, [ball_xpos]
        mov cx, ax

        mov ax, [y]
        mov dx, 1256
        imul dx
        idiv di
        mov bx, [framenum]
        shl bx, 1
        xor bh, bh
        add ax, [ball_ypos+bx]

;       Clipping
;        cmp ax, 200                         ; clips both >200 and <0
;        jae short @@clip
;        cmp cx, 320
;        jae short @@clip

        dec ax
        imul di, ax, 320
        add di, cx
        dec di
        push si
        mov si, offset balldots
        mov cx, 3
@@pixloop:
        movsw
        movsb
        add di, 320-3
        loop short @@pixloop
        pop si

@@clip:
        inc si
        inc si
        pop cx
        dec cx
        jnz @@pointloop

        ret
ENDP

IF NOT USEPLASMA ;-----------------------------------------------------------

PROC othertexture
        mov [newx], 0
        mov [newy], 0

        xor si, si
        xor di, di
        mov cx, 4
@@incs_loop:
        fld [radius+di]
        fadd [radius_inc+di]
        fst [radius+di]

        fld [angle+di]
        fadd [angle_inc+di]
        fst [angle+di]

        dec cx
        jz short @@incs_done

        fmul [deg2rad]
        fld st(0)
        fcos
        fmul st(0), st(2)
        fiadd [newx+si]
        fistp [newx+si+2]

        fsin
        fmulp st(1)
        fiadd [newy+si]
        fistp [newy+si+2]

        add di, 4
        inc si
        inc si
        jmp short @@incs_loop

@@incs_done:
        finit

        mov ax, [newy+6]
        add ax, 128
        cmp ax, -100
        jle short @@skip
        cmp ax, 350
        jg short @@skip
        mov bx, [newx+6]
        add bx, 128
        cmp bx, -100
        jle short @@skip
        cmp bx, 350
        jg short @@skip
        mov bh, al

        mov si, offset boppixels
        dec bh
        dec bl
        mov dx, 3
@@yloop:
        mov cx, 3
@@xloop:
        mov al, [es:bx]
        add al, [si]
        cmp al, 250
        jbe short @@pixok
        mov al, 250
@@pixok:
        mov [BYTE es:bx], al
        inc si
        inc bx
        loop short @@xloop
        add bx, 254
        dec dx
        jnz short @@yloop

@@skip:
        ret
ENDP

ENDIF ;----------------------------------------------------------------------

;----------------------------------------------------------------------------
IF USEPLASMA
;----------------------------------------------------------------------------

PROC rand1
        push bx
        push cx
        push dx
        push si
        mov bx, 0e66dh
        mov ax, [nextrand]
        mul bx
        mov bx, ax
        mov si, dx
        imul dx, [nextrand], 5
        add si, dx
        imul ax, [nextrand+2], 0e66dh
        add si, ax
        mov ax, bx
        mov dx, si
        add ax, 11
        adc dx, 0
        mov [nextrand], ax
        mov [nextrand+2], dx
        mov al, ah
        mov ah, dl
        and ax, 7fffh
        pop si
        pop dx
        pop cx
        pop bx
        ret
ENDP

PROC plasma PASCAL
        ARG @@x1, @@y1, @@x2, @@y2 : WORD
        LOCAL @@xm, @@ym : WORD

        mov ax, [@@x2]
        mov [pl_w], ax
        mov bx, [@@x1]
        sub [pl_w], bx
        add ax, bx
        shr ax, 1
        mov [@@xm], ax

        mov ax, [@@y2]
        add ax, [@@y1]
        shr ax, 1
        mov [@@ym], ax

        mov bh, [BYTE @@y1]
        mov bl, [BYTE @@x1]
        mov al, [es:bx]
        mov [pl_c1], al
        xor ah, ah
        mov cx, ax

        mov bl, [BYTE @@x2]
        mov al, [es:bx]
        mov [pl_c2], al
        add cx, ax

        mov bh, [BYTE @@y2]
        mov al, [es:bx]
        mov [pl_c3], al
        add cx, ax

        mov bl, [BYTE @@x1]
        mov al, [es:bx]
        mov [pl_c4], al
        add cx, ax

        mov si, [pl_w]
        shl si, 2

        shr cx, 2
        mov bl, [BYTE @@xm]
        mov bh, [BYTE @@ym]
        call plasmapixel

        cmp [pl_w], PLASMA_DEPTH
        jng @@smallenough

        xor ch, ch
        mov cl, [pl_c1]
        add cl, [pl_c2]
        adc ch, 0
        shr cx, 1
        mov bl, [BYTE @@xm]
        mov bh, [BYTE @@y1]
        call plasmapixel

        xor ch, ch
        mov cl, [pl_c2]
        add cl, [pl_c3]
        adc ch, 0
        shr cx, 1
        mov bl, [BYTE @@x2]
        mov bh, [BYTE @@ym]
        call plasmapixel

        xor ch, ch
        mov cl, [pl_c3]
        add cl, [pl_c4]
        adc ch, 0
        shr cx, 1
        mov bl, [BYTE @@xm]
        mov bh, [BYTE @@y2]
        call plasmapixel

        xor ch, ch
        mov cl, [pl_c4]
        add cl, [pl_c1]
        adc ch, 0
        shr cx, 1
        mov bl, [BYTE @@x1]
        mov bh, [BYTE @@ym]
        call plasmapixel
        
        call plasma PASCAL, [@@x1], [@@y1], [@@xm], [@@ym]
        call plasma PASCAL, [@@xm], [@@y1], [@@x2], [@@ym]
        call plasma PASCAL, [@@xm], [@@ym], [@@x2], [@@y2]
        call plasma PASCAL, [@@x1], [@@ym], [@@xm], [@@y2]

@@smallenough:
        ret
ENDP

; Input:
;   bx - source/dest offset
;   cl - start color
;   si - width
PROC plasmapixel
        test [BYTE es:bx], 0ffh
        jnz short @@skippixel

        call rand1
        cbw
        imul si
        mov al, ah
        mov ah, dl
        xor ch, ch
        add ax, cx
        js short @@less0
        cmp ax, PLASMA_MAXCOLOR
        jbe short @@pixok
        mov al, PLASMA_MAXCOLOR
        jmp short @@pixok
@@less0:
        xor al, al
@@pixok:
        mov [es:bx], al
@@skippixel:
        ret
ENDP

;----------------------------------------------------------------------------
ENDIF
;----------------------------------------------------------------------------

END _main
