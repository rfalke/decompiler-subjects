
; { ######### }-{            A 64b intro by the Youth Uprising             }
; { # LINIS # }-{                  coded by Thygrion / YU                  }
; { ######### }-{ Thanks to Baze / 3SC for all his help!! You rule dude :D }

mov al,13h
int 10h

mov dx,3c8h
xor al,al
out dx,ax
inc dx
PAL
push ax
shr al,2
out dx,al
shl al,1
out dx,al
shr al,1
out dx,al
pop ax
inc al
jnz PAL

push 0a000h
pop es

MAIN
mov bl,bh
mov cx,64000
PIXEL
mov di,cx
dec di
mov [es:di],bl
inc bl
loop PIXEL
inc bh
mov ah,01
int 16h
jz MAIN

mov ax,4c00h
int 21h