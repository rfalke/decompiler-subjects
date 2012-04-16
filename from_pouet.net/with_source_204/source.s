%define DEBUG

%define SINTABSIZE (256*8)

org 100h

mov al, 13h
int 10h

mov cx,SINTABSIZE
mov di,sintab
fldz
sintabloop:
  fld st0
  fsin
  fmul dword [sintabmul]
  fistp dword [di]
  fadd dword [sintabinc]
  inc di

%if 1
  mov al,cl
  mov dx,0x3c8
  out dx,al
  inc dx
  shr al,2
  xor al,63
  out dx,al
 ; shr al,3
  out dx,al
 ; shr al,1
  sub al,14
  out dx,al
%endif
loop sintabloop

%if 0
les di,[bx]
%else
push word 0a000h
pop es
%endif

ide:
%if 0
    mov dx,3DAh
l1:
    in al,dx
    and al,08h
    jnz l1
l2:
    in al,dx
    and al,08h
    jz  l2
%endif

%if 0
  xor di,di
  mov cx,320*200
  xor al,al
  rep stosb
%endif

  xor di,di

  mov cx,320
  oszlop:

    xor dx,dx
    mov bx,sintab
    add dx,cx
    add dx,bp
    and dx,(SINTABSIZE - 1)
    add bx,dx
    mov al,byte[cs:bx]    
;    xchg ah,al

    xor dx,dx
    mov bx,sintab
    add dx,cx
    add dx,bp
    add dx,(SINTABSIZE / 4)
    and dx,(SINTABSIZE - 1)
    add bx,dx
    mov ah,byte[cs:bx]    

    ; sx = al
    ; sy = ah

    push cx
    
    ;and cl,1
    ;add ah,cl
    
    mov cx,254
    mov si,199
    mov ebx,dword [tx]
    mov dword [px],ebx
    stepper:
      push cx
      push ax

      ; step for Z-projection
      xor cl,255
      inc cl

      ; tex2D lol
      xor dx,dx
      mov dl,byte [px+1] ; +1  ->  x>>8
      xor dl,byte [py+1]
      and dl,0x1f

      ; (height - eye) * 256 / z
      ; ->
      ; (eye - height) * 256 / z * -1
      xor dl,63
      xchg ax,dx
      xor dx,dx
      sal ax,8
      idiv cx
      neg ax

      ;mov bx,(199-199)
      mov bx,-29
      sub bx,ax

      ; scany = si
      cmp bx,si
      jg dontdraw
        push di

        mov ax,si
        mov cx,320
        mul cx
        add di,ax

        mov al,bl
        ;mul al
        ;shl ax,1
        vlineloop:
          stosb
          dec si
          sub di,321
          cmp bx,si
        jng vlineloop

        ;mov si,bx
        pop di
      dontdraw:

      pop ax
      mov dx,ax
      xor ah,ah
      movsx ax,al
      add word [px],ax
      mov al,dh
      movsx ax,al
      add word [py],ax
      mov ax,dx
      pop cx
    loop stepper
    pop cx
    inc di

;  loop oszlop
  dec cx
  test cx,cx
  jnz oszlop

  ;add bp,1
  inc bp
  add word [tx],64
%if 1
  in al,60h
  cmp al,1
jnz ide
%else
jmp short ide
%endif

%ifdef DEBUG
mov ax,3
int 10h
%endif

ret

sintabinc dd 0.0030679615757712824594361751785

sintabmul dd 127.0

section .bss

tx resw 1
ty resw 1
px resw 1
py resw 1

sintab resb SINTABSIZE