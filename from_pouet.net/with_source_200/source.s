%define BLOCKSIZE 10

bits 16 

org 0x100

mov al, 0x13
int 0x10

%if 1
inc cx
sintabloop:
  mov al,cl
  mov dx,0x3c8
  out dx,al
  inc dx
  shr al,2
  out dx,al
  add al,2
  out dx,al
  add al,4
  out dx,al
loop sintabloop
%endif

;les di,[bx]
push word 0xa000
pop es

push word 0x0040
pop fs

mainloop:
  xor di,di

  fild word [fs:0x6C]
  fmul dword [incy]
  fld st0
  fcos
  fidiv word [chop]
  fstp dword [ey]
  fsin
  fidiv word [chop]
  fstp dword [ex]
  
  fld dword [initx]
  mov cx, 200
  pix_y:
    push cx
    mov bx, cx
    sub bx, 100
    mov cx, 320
    fld dword [initx]
    pix_x:
      push cx             ; px py
      mov dx, cx
      fld st0             ; tx px py
      fld st2             ; ty tx px py
      mov cx, 31
      iterate:
        fld dword [ex]    ; ex ty tx px py
        fld st2           ; tx ex ty tx px py
        fmul st0,st3      ; tx^2 ex ty tx px py
        faddp st1,st0     ; ex+tx^2 ty tx px py
        fld st1           ; ty ex+tx^2 ty tx px py
        fmul st0,st2      ; ty^2 ex+tx^2 ty tx px py
        fsubp st1,st0     ; ex+tx^2-ty^2 ty tx px py

        fld dword [ey]    ; ey ex+tx^2-ty^2 ty tx px py
        fld st3           ; tx ey ex+tx^2-ty^2 ty tx px py
        fmul st0,st3      ; ty*tx ey ex+tx^2-ty^2 ty tx px py
        fadd st0,st0      ; 2*ty*tx ey ex+tx^2-ty^2 ty tx px py
        faddp st1,st0     ; ey+2*ty*tx ex+tx^2-ty^2 ty tx px py

        fst st2             
        fxch st1
        fst st3

        fmul st0,st0
        fxch st1
        fmul st0,st0
        faddp st1,st0
      
        fistp dword [d]
        cmp dword [d],100
        jg doneiterate

      loop iterate
      doneiterate:
      
      fcomp st1
      fcomp st1

      xor cl, 31
      sub dx,160
      mov ax,dx
      imul bx
      sar ax, 7
      and ax,31
      shl cx, 4
      or ax,cx
      add ax,bp
            
      stosb
      fadd dword [incx]
      pop cx
    loop pix_x

    fcomp st1
    fadd dword [incy]

    pop cx
  loop pix_y

  sub bp, 4
  
  in al,0x60
  cmp al,1
jnz mainloop

ret

incx dd 0.0125 ; 4/320
incy dd 0.0200 ; 4/200
initx dd -2.0
chop dw 2

section .bss

d  resd 1
ex resd 1
ey resd 1
