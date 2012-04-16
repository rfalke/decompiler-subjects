
;
; Oh Shade! 128b
; Coded by Skate/Clash
; Release date: 03/12/2006 (dd/mm/yyyy)
;

	org	100h
codestart:
	mov	al,13h
	int	10h

	push	word 0xa000
	pop	es
mainloop:
	mov	cl,70
bob:
	mov	bx,word [y]
	imul	bx,319
	add	bx,word [x]
	add	byte [buffer+32928+bx],24
	add	byte [buffer+32928+1+bx],16
	add	byte [buffer+32928-320+bx],16

	fld	[a]
	fsin
	fimul	word [codestart+0x5a]
	fistp	[x]

	fld	dword [b]
	fcos
	fimul	[ya]
	fistp	[y]

	add	word [a],98
	add	word [b],158

	loop	bob

	sub	word [a],98*70+1
	sub	word [b],158*70+3

	mov	bx,64000
buf2vga:
	mov	al,[buffer+bx]
	cmp	al,16
	je	just2vga
	dec	ax
	mov	[buffer+bx],al
just2vga:
	mov	[es:bx],al
	dec	bx
	jnz	buf2vga
	in	ax,60h
	dec	ax
	jnz	mainloop
	ret

ya	dw	98
a	dd	40000.0
b	dd	17452.0

x	dw	?
y	dw	?
buffer	db	320*200 dup (?)
