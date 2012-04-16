; Vychazka 64b (1.0)
; 2004-01-18 by Rrrola

org 100h
mov  al,13h
int  10h
lds  cx,[bx]

mov  dx,3C9h
P:
mov  ax,cx
out  dx,al
shr  al,1
out  dx,al
shr  al,1
out  dx,al
loop P

M:
push cx
mov  al,[si]
shr  cl,cl
jnc  L
sbb  bx,bx
add  cl,al
add  cl,cl
js   X
mov  bx,320
X:
jnc  N
neg  bx
N:
dec  byte[si]
L:
pop  cx
mov  [bx+si],al
add  si,cx
adc  si,ax
loop M

in   al,60h
cbw
dec  ax
jnz  M
mov  al,3
int  10h
ret
