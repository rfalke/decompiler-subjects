;*****************************************************************************
; Часть исходника к XFactor
; (c) Alex Maloshtan `99-00
;*****************************************************************************

        .model tiny
        .386
        .387
jumps
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
num_points equ 3
deg      equ 4
ccc      equ 8
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
include gauss.res
include macroses.res
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
        .code
        org 100h
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
start:
;db 'Shur'
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
;        int 11h                         ; FPU detection
;        and al,2                        ;
;        jnz short fpu_ok                ;
;        int 20h
;        mov dx,offset errortxt          ;
;        jmp error                       ;
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
;fpu_ok:
;        finit
        mov bx,cs
        push es
        add bh,010h
        mov es,bx
        mov fs,bx
        xor di,di
;        xor ax,ax
        mov ch,07dh
        rep stosw
        pop es
        mov di,offset zeros
        mov cl,zeroses-zeros
        rep stosb
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
        mov al,013h
        int 10h
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
; Set Angles
real_begin:
        mov di,offset angles
;        xor bl,bl
        mov cl,4
set_an:
;        xor ax,ax
        mov ch,8
set_an1:
        stosw
        add ax,45
        xchg ax,bx
        stosw
        xchg ax,bx
        dec ch
        jnz short set_an1
        add bx,45
        loop short set_an
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
        setpal
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
main1:
;        and bl,bl
;        jz render
include matrix.res
        gauss 4,system,result
;render:
        std
        mov bp,100;last_x;points
draw:
        mov si,offset result + 4*(deg-1)

        mov x,ebp
        fldz

        mov cl,3
cl_apx:
        lodsd
        mov Y,eax
        fadd y
        fimul x
        loop short cl_apx

        lodsd
        mov y,eax
        fadd y
        fistp t

;        mov ax,fs
;        mov es,ax
        push fs
        pop es

        mov si,offset angles
        mov cl,32
lll:
;        call set_point
;set_point:                              ; ax - x ; t - y
        mov bx,[si];alpha
        mov r,ebp                       ; R - x

        add bx,adda
        mov f,ebx                       ; F - angle (int)
                                        ; R - x     (int)
                                        ; T - y     (int)
; Calc x`= x*cos(f) - y*sin(f)

        fld c180
;        fldpi
        fimul f
;        fidiv c180

        fsincos
        fst st(2)

        fimul r
        fstp x

        fst st(2)
        fild t
        fisub word ptr c100
        fmul
        fsubr x
        fstp x                          ; X - x (real)

; Calc y`= x*sin(f) + y*cos(f)

        fild t
        fisub word ptr c100
        fmul
        fstp y

        fimul r
        fadd y
        fistp y

; Calc x``= x` * cos(y)

        mov bx,[si+2];gamma
        add bx,addg
        mov f,ebx

        fld c180
;        fldpi
        fimul f
;        fidiv c180
        fcos
        fmul x
        fistp x

        mov di,word ptr x
        mov ax,word ptr y

        add di,160
        add ax,99

        cmp ax,200-2
        jnc short no_point

        lea ax,[eax+eax*4]     ; Y*5
        shl ax,6               ; Y*64
        add di,ax

        mov ax,03f3fh
        stosw
        add di,320+2
        stosw
no_point:
;        ret

        add si,4
;        loop lll
        dec cx
        jnz lll
        dec bp
;        cmp bp,20
        jnz draw

        add_angles

include smooth.res
        remove

        vret

        mov si,ycount
        inc byte ptr frames
        inc byte ptr frames
        jnz short no_yc
;        inc esi
        inc si
;        lodsw
no_yc:
        mov ycount,si
;        shl si,1
        add si,offset ygriks
        lodsb
;        mov al,[si]
        and al,al
        jz short quit
mr1:
        cbw
        cmp no_y,ax
        jz short mr2
        jnc short mr3
        inc no_y
        jmp short mr2
mr3:
        dec no_y
mr2:
        lodsb
        cmp last_y,ax
        jz short mr4
        jnc short mr5
        inc last_y
        jmp short mr4
mr5:
        dec last_y
mr4:
;----
        mov ah,1
        int 16h
        jz real_begin;main1
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
exit:
        xor ah,ah
        int 16h
quit:
        mov ax,03h
        int 10h
        mov dx,offset copyr
;error:
        mov ah,9
        int 21h
        ret
;        int 20h
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
copyr   db '[bsu physfac]$'
;errortxt db 'no FPU$'
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
;align 128
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
first_x equ $
points  dw 0,100
        dw 33
no_y    dw 100
        dw 66
last_y  dw 100
last_x  dw 100-2;,100
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
c100    dw 0100
c180    dd 0.01744444444444444444
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
y_table label word
ygriks  equ $
        db 100,100            ;  db 100,100
        db 125,100            ;  db 125,125
        db 75,125             ;  db 75,125
        db 75                 ;  db 125,100
        db 5                  ;  db 95,185
        db 75                 ;  db 125,75
        db 120                ;  db 50,180
        db 70                 ;  db 75,180
        db 125                ;  db 50,200
        db 100                ;  db 100,200
;        db 1                  ;  db 5,75
;        db 1                  ;  db 120,70
;        db 125                ;  db 25,100
;        db 1
;        db 10                ;  db 50,25
;        db 100                ;  db 100,150
;        db 100                ;  db 50,75
;        db 100                  ;  db 001,001
                              ;  db 75,150
                              ;  db 1,200
                              ;  db 100,100
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
zeros   db ?
ycount  dw ?
frames  db ?
timer   dd ?
adda    dw ?
addg    dw ?
;aaa     dw ?
;bbb     dw ?
zeroses equ $
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
Angles  equ $
        dw 16*4 dup(?)
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
t       dd ?
f       dd ?
r       dd ?
x       dd ?
y       dd ?
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
virt    dw ?
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
degree  dd 2*(deg-1) dup (?)
x1d     dd 2*(deg-1) dup (?)
x2d     dd 2*(deg-1) dup (?)
x3d     dd 2*(deg-1) dup (?)
x4d     dd 2*(deg-1) dup (?)
xsums   dd 2*(deg-1)+1 dup (?)
system  dd ?,?,?,?,?
        dd ?,?,?,?,?
        dd ?,?,?,?,?
        dd ?,?,?,?,?
result  dd 10 dup (?)
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
        end start