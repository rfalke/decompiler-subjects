%define BLOCKSIZE 10

org 0x100

mov al, 0x13
int 0x10

inc cx
sintabloop:
  mov al,cl
  mov dx,0x3c8
  out dx,al
  inc dx
  shr al,2
  out dx,al
  out dx,al
  add al,14
  out dx,al
loop sintabloop

les di,[bx]

push word 0x0040
pop fs

mainloop:

  ; epic awesome clean screen + double buffer
  mov cx,320*200 
  xor di,di
  mov si,vidmem
  bg:
    movsb
    mov ax,cx
    add ax,bp
    xor al,ah
    and al,11111b
    mov [ds:si-1],al
  loop bg
  add bp,0x40
  
  fninit

  fldz
  dot:                        ; ST0        ST1        ST2        ST3        ST4        ST5        ST6        ST7
    fld st0                   ; t          t
    fmul dword [ph_mul]       ; ph         t
    fsincos                   ; cos(ph)    sin(ph)    t
    fdiv dword [ph_mul]
    fld1
    faddp st1                 ; q          sin(ph)    t
    fld st2                   ; t          q          sin(ph)    t
    fsincos                   ; cos(t)     sin(t)     q          sin(ph)    t
    fxch st2                  ; q          sin(t)     cos(t)     sin(ph)    t
    fmul st2,st0              ; q          sin(t)     tx         sin(ph)    t
    fmulp st1,st0             ; ty         tx         sin(ph)    t
    fxch st2                  ; sin(ph)    ty         tx         t
    fdiv dword [ph_mul]        ; tz         ty         tx         t

    ; DOS timer ($40:$6C)
    fild word [fs:0x6C]       ; r          tz         ty         tx         t
    fmul dword [t_inc]
    fsincos                   ; cos(r)     sin(r)     tz         ty         tx         t
    fld st3                   ; ty         cos(r)     sin(r)     tz         ty         tx         t
    fmul st1                  ; ty*cos(r)  cos(r)     sin(r)     tz         ty         tx         t
    fld st3                   ; tz         ty*cos(r)  cos(r)     sin(r)     tz         ty         tx         t
    fmul st3                  ; tz*sin(r)  ty*cos(r)  cos(r)     sin(r)     tz         ty         tx         t
    faddp st1                 ; qy         cos(r)     sin(r)     tz         ty         tx         t
    fxch st3                  ; tz         cos(r)     sin(r)     qy         ty         tx         t
    fmulp st1                 ; tz*cos(r)  sin(r)     qy         ty         tx         t
    fxch st3                  ; ty         sin(r)     qy         tz*cos(r)  tx         t
    fmulp st1                 ; ty*sin(r)  qy         tz*cos(r)  tx         t
    fsubp st2,st0             ; qy         qz         tx         t

    fxch st1                  ; qz         qy         qx         t
    fxch st2                  ; qx         qy         qz         t
    fxch st1                  ; qy         qx         qz         t

    fld st2                   ; qz         qy         qx         qz         t
    fiadd word [ycenter]      ; qz+100     qy         qx         qz         t
    fidivr word [zoom]        ; qz+zd*zoom qy         qx         qz         t
    fmul st2,st0              ; qz+zd*zoom qy         cxd        qz         t
    fmulp st1,st0             ; cyd        cxd        qz         t

    fiadd word [ycenter]      ; py         cxd        tz         t
    fistp word [py]           ; cxd        tz         t
    fiadd word [xcenter]      ; px         tz         t
    fistp word [px]           ; tz         t
    fimul word [color]        ; tz*50      t
    fiadd word [ycenter]      ; pz         t
    fistp word [pz]           ; t

    mov ax,word [py]
    mov bx,320
    mul bx
    mov si,ax
    add si,vidmem
    add si,word [px]
    mov al,byte [pz]

    push cx
    mov cx,BLOCKSIZE
    verline:
      push cx
      mov cl,BLOCKSIZE
      horline:
        cmp [ds:si],al
        ja dontprint
          mov [ds:si],al
        dontprint:
        inc si
      loop horline
      pop cx
      add si,(320-BLOCKSIZE)
    loop verline
    pop cx

    fadd dword [t_inc] ; next dot
    inc cx
    test ch,2 ; 512
  jz dot

  in al,0x60
  cmp al,1
jnz mainloop

ret

t_inc   dd 0.0368155389 ; 1 / dots * 3.14 * 2 * loop2
ph_mul  dd 3.6666666    ; 11 / 3
ycenter dw 100
zoom    dw 6400
color   dw -50
xcenter dw 160

section .bss

px resw 1
py resw 1
pz resw 1

vidmem resb 320*200