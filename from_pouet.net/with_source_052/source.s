	org 100h
	mov al, 0x13
	int 0x10
	mov dx, 0x3D4
	mov ah, 0x20
	out dx, ax
a:	les di, [bx]
r:	inc bx
e:	;mov ax, bx			       ; plane2
	cwd
	mov cl, bl
	idiv cx
	add ax, si
	stosb
	inc bl
	jne e
	inc bh
	jne r
	inc si
	jmp a
