; telos for asmcompo#12
; written by dila in 2005
; http://dila.mine.nu

[org 100h]

mov al, 13h
int 10h

main:

push 09000h
pop es
xor ax, ax
xor di, di
mov cx, 32000
rep stosw

fld dword [sizi]
fstp dword [size]

mov word [scale], 10

fld dword [radd]
fadd dword [radi]
fstp dword [radd]

mov cx, 6
populate:

push cx

mov word [nullw], 0
xor di, di

mov ax, [ypos]
sub ax, [scale]

mov cx, [scale]
imul cx, 2
sideloop:

mov bx, [xpos]
sub bx, [nullw]

mov di, ax
imul di, 320
add di, bx
mov [es:di], cl

add bx, [nullw]
add bx, [nullw]

mov di, ax
imul di, 320
add di, bx
mov [es:di], cl

mov bx, [nullw]
inc bx
mov [nullw], bx
inc ax

loop sideloop

mov bx, [xpos]
add bx, [nullw]

mov cx, [nullw]
imul cx, 2
inc cx
baseloop:

mov di, ax
imul di, 320
add di, bx
mov [es:di], cl

dec bx

loop baseloop

pop cx

fld dword [size]
fadd dword [sizi]
fstp dword [size]

add word [scale], 4

fld dword [radd]
fsincos
fmul dword [size]
fadd dword [ymid]
fistp word [ypos]

fmul dword [size]
fadd dword [xmid]
fistp word [xpos]

dec cx
cmp cx, 0
jnz populate

push ds
push 0a000h
push 09000h
pop ds
pop es
xor di, di
xor si, si
mov cx, 32000
rep movsw
pop ds

mov ah, 01h
int 16h
jz main

ret


size  dd 0.0
sizi  dd 8.0
radi  dd 0.006
radd  dd 0.0
ymid  dd 100.0
xmid  dd 160.0

scale dw 0
xpos  dw 0
ypos  dw 0

nullw  dw 0