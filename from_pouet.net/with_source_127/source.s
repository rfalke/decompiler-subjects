
; "Microbrot" by Sir_Lagsalot

org 100h
mov al,13h
int 10h

les ax,[bx]

FillLoop:
cwd
mov ax,di
mov cx,320
div cx
sub ax,100
dec dh

xor bx,bx
xor si,si

MandelLoop:
mov bp,si
imul si,bx
add si,si
imul bx,bx
jo MandelBreak
imul bp,bp
jo MandelBreak
add bx,bp
jo MandelBreak
sub bx,bp
sub bx,bp

sar bx,6
add bx,dx
sar si,6
add si,ax

loop MandelLoop

MandelBreak:
xchg ax,cx
stosb
jmp FillLoop
