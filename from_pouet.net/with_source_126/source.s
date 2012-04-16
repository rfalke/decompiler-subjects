; 'a'
; by edwin jakobs
; a.k.a mnemonix/kaleido
;
; thanks to warp.

org 0x100

mov al,0x13
int 0x10

mov ax,0xa000
mov es,ax

pal_loop:
mov dx,0x3c8
out dx,al
inc dx
mov bl,al
shr ax,2

out dx,al
out dx,al
out dx,al
;mov al,bl
xchg ax,bx
dec ax
jnz pal_loop

mov ah,0xfa
fill_loop:
stosb
dec ax
jnz fill_loop

demo_loop:

mov cx,63680
image_loop:
mov di,cx
mov al,[es:di+320]
mov dl,[es:di+1]
add ax,dx
add al,bl
shr ax,1

stosb
loop image_loop

inc bx

mov dx,0x60
in  al,dx
dec ax
jnz demo_loop

ret
