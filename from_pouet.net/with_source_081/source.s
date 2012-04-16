org 100h

mov al,13h
int 10h

	push word 09000h
	pop ds
	xor di,di
	mov si,395
Singen:
	mov [di],ch
	add cx,si
	mov ax,40
	imul cx
	sub si,dx
	inc di
	jnz Singen

push word 0A000h
pop es

xchg ax,dx
aloop:
xor si,si

mov bl,200
yloop:
mov cx,320
xloop:

mov al,[bx]
mov di,cx
add al,[di]
add di,dx
add al,[di]
and al,dh

mov [es:si],al
inc si

loop xloop
dec bl
jnz yloop

inc dx
jmp aloop