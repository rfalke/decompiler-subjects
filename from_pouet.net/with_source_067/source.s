	org 100h
	mov al, 0x13
	int 0x10
	les di, [bx]
o:	xor bx, bx
	mov di, 320*100 + 16			; center of Y
r:	mov cx, 320
	inc bx
l:	mov ax, cx
	sub ax, 160				; center of X
	shl ax, 6				; velocity (higher <-> lower)
	cwd					; dx = 0xFFFF or dx = 0
	idiv bx
	add ax, bp				; moving for x
	push ax
	 mov ax, 0x3800 			; stretch K for y
	 cwd
	 idiv bx
	 xchg ax, dx
	pop ax
	xor al, dl				; texture
	shr al, 4				; [-] grayscale
	or al, 0x10				; [-] std. palette
	stosb
	;xor di, 0x8000                          ; [-] maybe deleted
	loop l
	cmp bx, 100
	jne r
	dec bp
	in al, 0x60				; \
	dec al					; |
	jne o					; |-> or [jmp o], infinity loop
	ret					; /

; --------------- 50b -----------