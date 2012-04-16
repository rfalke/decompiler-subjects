;S_Tec/ND: 0x0f
	mov	al,0x13
	int	0x10
	push	word 0xa000
	pop	ds
again:	inc	byte[bx]
	sub	bx,ax
	dec	al
	jmp	short again