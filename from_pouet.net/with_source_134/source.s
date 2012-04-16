;; Coded By Devreci  www.devreci.tk

org 100h

mov al,13h
int 10h
mov ax,0a000h
mov es,ax
mov ds,ax
mov al,0
mov dx,3c8h
out dx,al
inc dx
mov cl,255
djgdgfd:
mov al,cl
not al
out dx,al
and al,0x0f
out dx,al
out dx,al
loop djgdgfd
resen:
mov ch,6
sdfsdf:
add di,14478
xor dx,di
ror dx,11
rol di,7
add di,dx
mov al,dh
and al,0x5f
stosb
loop sdfsdf
mov ch,250
xor di,di
sdfsdd:
add al,[di]
add al,[di+320]
add al,[di-320]
shr al,2
mov [di],al
inc di
loop sdfsdd
in al,60h
cmp al,81h
jne resen
mov ax,3
int 10h
int 20h




