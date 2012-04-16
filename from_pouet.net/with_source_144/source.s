[org 100h]
	x		equ 0x02
	y		equ 0x00

[segment .text]
	mov		al, 0x13
	int		0x10

	mov		al, 0
	PAL:
	mov		dx, 0x3c9
	out		dx, al
	out		dx, al
	out		dx, al
	inc		ax
	jnz		PAL

	mov		bh, 0xa0
	mov		es, bx
	mov		si, 0x046c

	FRAME:
	fninit
	mov		cl, 0x03
	mov		byte [bx], 81

	ANIMATE:
	fild	word [gs:si]
	fidiv	word [bx]
	mov		word [si+y], cx
	fiadd	word [si+y]
	fsin
	fimul	word [bx]
	fisub	word [bx]
	Loop	ANIMATE
	
	xor		di, di
	mov		byte [si+y], 200
	
	SCANY:
	mov		dx, 320
	
	SCANX:
	mov		word [si+x], dx
	fldz
	mov		cl, 0x03
	
	BLOB:
	fild	word [si+x]
	fadd	st3
	fmul	st0
	fild	word [si+y]
	fadd	st3
	fmul	st0
	faddp	st1
	fld1
	fadd	st1, st0
	fdivrp	st1, st0
	faddp	st1
	fld		st3
	fxch
	ffree	st4
	loop	BLOB

	fimul	word [CONS_5555]
	fistp	word [bx]
	mov		al, 0x3f
	cmp		ax, [bx]
	cmova	ax, [bx]
	CONS_5555:
	stosb

	dec		dx
	jnz		SCANX
	dec		byte [si+y]
	jnz		SCANY

	in		al, 60h
	dec		ax
	jnz		FRAME

	ret
