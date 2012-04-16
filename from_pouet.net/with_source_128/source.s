;
; XOR quickie by -SP-
; Function-X | Sep. 10-12. 2010.
;
; coded at the party, 6 minutes before deadline :P
;
; compile with NASM
;

org 100h

mov ax, 13h
int 10h

xor cx, cx

pal:
mov dx, 3c8h
mov al, cl
out dx, al
inc dx
out dx, al
out dx, al
and al, 0x88
out dx, al
loop pal

push 0xa000
pop es

xor dx, dx
mov bx, 0x3c7

finit
fild dword [bx]

main_loop:
mov ax, bp
add ax, dx
xor ax, dx
fcos
fmul dword [bx+1]
fst dword [bx]
xor ax, [bx]
xchg dl, dh
stosb
dec dx
add word [bx], bp
inc bp

in al, 60h
dec al
jnz main_loop

ret
