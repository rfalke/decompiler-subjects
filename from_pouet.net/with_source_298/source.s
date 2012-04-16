        org 100h
        section .text
        timer equ 10ch
        ; variables (relative to bx)
        varbase equ 200h
        tmp   equ 0         ; usually word but prepare for using dword temp variables
        zl    equ 4         ; dword
        angle equ 8
        vbuf  equ 12         ; this must be last variable, size 64000
start:
        mov ax,36h
        mov fs,ax
        out 43h,al
        mov al,13h
        out 40h,al
        out 40h,al
        int 10h
        mov bh,2
        ;push 0a000h
        ;pop es

        fld1                                                                                        ; zoom
        mov edx,dword [fs:timer]
mainloop:
        mov ecx,dword [fs:timer]
        ;mov [bx],ecx
        sub ecx,edx
        ; ha ez negativ vagy 0 akkor skip_mult
        jna skip_mult
        add edx,ecx         ; edx=edx+(timer-edx)=ecx
multloop:
        fmul dword [byte bx + zoomfactor-varbase]
        loop multloop
skip_mult:
        pushad                                      ; used in this stack frame: edx
        ;xor di,di
        lea di,[byte bx+vbuf]
        push ds
        pop es
        mov bp,100
lp_y:
        mov dx,160
lp_x:
        fild dword [fs:timer]                           ; angle, zoom
        fmul dword [byte bx + timescale - varbase]

        mov [bx],bp
        fild word [bx]                            ; y,angle,zoom

        mov [bx],dx
        fild word [bx]

        fld st1
        fmul st0,st0
        fld st1
        fmul st0,st0
        faddp st1
        fsqrt                           ;d,x,y,angle
        fld st3
        fsin
        fmul dword [byte bx+whirlamp]
        fmulp st1
        faddp st3,st0    ;x,y,angle+d*whirlscale*sin(angle*timescale)

        ; do the scaling with zoom:
        fmul st0,st3
        fld st3
        fmulp st2,st0
        ; transform x,y here (st0,st1)
        ; x'=cos*x-sin*y
        ; y'=sin*x+cos*y
        ; target stack: sx,sy,cx,cy
        fld st1             ;y,x,y,a
        fld st1             ;x,y,x,y,a
        fld st4; st4             ;a,x,y,x,y,a
        fsincos             ;c,s,x,y,x,y,a,zoom
        fmul st4,st0
        fmulp st5,st0       ; s,x,y,cx,cy,a,zoom
        fmul st1,st0
        fmulp st2,st0

        faddp st3,st0       ; sy,cx,sx+cy,a
        fsubp st1,st0       ; cx-sy,sx+cy,a

        ; adding xorig and yorig
        fadd qword [byte bx+xorig-varbase]
        fld qword [byte bx+yorig-varbase]
        faddp st2,st0
        
        fldz
        fldz            ;                           zr,zi,cr,ci
        mov cx,100h
fractal:
; code with some strange hack
        fld st0         ;                           zr,zr,zi,cr,ci
        fmul st1,st0    ;                           zr,zr*zr,zi,cr,ci
        fmul st0,st2    ;                           zr*zi,zr*zr,zi,cr,ci
        fadd st0,st0    ;                           2zrzi,zrzr,zi,cr,ci
        fadd st0,st4    ;                           2zrzi+ci,zrzr,zi,cr,ci
        fxch st0,st2    ;                           zi,zrzr,2zrzi+ci,cr,ci
        fmul st0,st0    ;                           zizi,zrzr,2zrzi+ci,cr,ci
        fist dword [byte bx+zl]
        fsubp st1,st0   ;                           zrzr-zizi,2zrzi+ci,cr,ci
        fadd st0,st2    ;                           zrzr-zizi+cr,2zrzi+ci,cr,ci

        cmp dword [byte bx+zl],4
        jge near fractal_out
        loop    fractal
fractal_out:
        xchg ax,cx
        and al,63
        add al,10h
        stosb

        fstp st0
        fstp st0
        fstp st0
        fstp st0
        fstp st0

        dec dx
        cmp dx,-160
        jne lp_x

        dec bp
        cmp bp,-100
        jne lp_y

        xor di,di
        lea si,[byte bx+vbuf]
        mov cx,16000
        push 0a000h
        pop es
        rep movsd

        popad
        in al,60h
        cmp al,1
        jnz  mainloop

        ret

section .data
;h2 dw 100
;ratio dd 1.6
;size2   dd 1.0
xorig dq 0.001643721971153
yorig dq -0.822467633298876
;xorig dq 0.0
;yorig dq 0.0
zoomfactor dd 0.999
timescale dd -0.0017
whirlamp dd 0.01
