; Blob140
; by Optimus/Dirty Minds^Nasty Bugs
; compiled with Nasm
;
; for the Korillaclub competition

org 100h
	xchg ax,cx
	mov al,13h
	int 10h

	push word 08000h
	pop es

maincyc:
	mov ax,di
	xor al,ah
	and al,63
	shl al,2

	stosb
	loop maincyc

	mov dx,3c8h
	mov ax,64
	out dx,al
	inc dx

	mov bx,ax
times256:
	xor al,al
	out dx,al
	mov al,bl
	shr al,1
	out dx,al
	shr al,1
	out dx,al
	inc bl
	jnz times256

	mov bl,64
times257:
	dec bl
	mov al,cl
	out dx,al
	out dx,al
	mov al,bl
	out dx,al
	jnz times257

; ----------- Sinegen ------------


	XOR	DI,DI
	push word 09000h
	pop ds
	push word 0a000h
	pop es

Singen:
	MOV	[DI],CH
	ADD	CX,SI
	MOV	AX,40
	IMUL	CX
	SUB	SI,DX
	INC	DI
	JNZ	Singen

main:
	add di,4
	xor si,si
	mov bl,200
yloop:
	mov cx,320
xloop:

	push si
	push di
	mov si,3
	xor bp,bp
nblobs:
	mov al,bl
	sub al,100
	sub al,[di]
	imul al
	mov dx,ax

	mov al,cl
	sub al,160
	shr di,1
	sub al,[di+64]
	imul al
	add ax,dx

	push bp
	or al,3
	mov bp,ax
	xor dx,dx
	mov ax,65535
	idiv bp
	pop bp

	add bp,ax

	dec si
	jnz nblobs

	mov ax,bp

	test al,128
	jnz below256
	push word 08000h
	pop es
	pop di
	pop si
	mov al,[es:si+bp]
	shr al,2
	push si
	push di
	push word 0A000h
	pop es

below256:
	or ah,ah
	jz olala
	mov al,255
olala:
	pop di
	pop si
	mov [es:si],al

	inc si
	dec cx
	jnz xloop

	dec bx
	jnz yloop


	MOV	DX,3DAh
Vsync:
	IN	AL,DX
	AND	AL,8
	JZ	Vsync

	in al,60h
	dec ax
	jnz main

	mov al,03h
	int 10h
RET
