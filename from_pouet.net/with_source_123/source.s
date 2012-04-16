; sqrt64
;
; Code by Ctulhu^Headcrash (Hanno Boeck, hanno@hboeck.de)
; released at 0a000h 2008
;
; do whatever you like with that code, consider it public domain

org 100h

mov bh,0a0h
mov es,bx

mov al,13h
int 10h

mov dx,text1
mov ah,09h

int 21h

loop3:

inc bx

mov bp,320*8

loop1:

mov di,bp
mov al,[es:di]
shl di,2
mov bh,30
add di,bx

mul di

mov cl,8
rep stosb

add di,bx
shl di,1


mov cl,8
rep stosb

dec bp

jns loop1

jmp loop3

ret
text1:
db "0a000h",251,"64$"
db 0,0
