
;  || _ _   ||__ __   by baze of ||| 2003 a.d. (www.3sc.sk)
;  ||/.| \ /.|. ) _)  thanks to damian trebilco at cgshaders.com
;  |(__||_(__|_/||    from who i got inspired from

; party version, gosh this is ugly ;>

[org 256]

	mov	al,13h
	int	10h

	mov	ax,cs
	add	ah,10h
	mov	es,ax
	add	ah,10h
	mov	fs,ax

	xor	cx,cx
PALETTE	mov	dx,3C8h
	mov	ax,cx
	out	dx,al
	inc	dx
	mul	al
	shr	ax,5
	cmp	al,64
	jc	CLAMP1
	mov	al,63
CLAMP1	out	dx,al
	mov	al,cl
	cmp	al,64
	jc	CLAMP2
	dec	ax
CLAMP2	out	dx,al
	shr	ax,1
	out	dx,al
	stosb
	loop	PALETTE

	mov	si,dx
TEXTURE	mov	bx,cx
	rcl	dh,cl
	mov	ah,dh
	sar	ah,3
	adc	al,ah
	adc	al,[es:bx+126]
	shr	al,1
	mov	[es:bx],al
	not	bh
	mov	[es:bx],al
	loop	TEXTURE

	xor	bx,bx
	dec	cx

MAP1	mov	[si],bl
MAP2	fild	word [si]
	fmul	dword [PERIOD]
	fsin
	mov	[si],bh
	cmc
	jc	short MAP2
	fmulp	st1,st0
	mov	[si],word 18
AMP	equ	$-2
	fimul	word [si]
	fiadd	word [si]
	fldpi
	fsubp	st1,st0
	fistp	word [fs:bx]
	mov	al,bl
	and	al,bh
	and	al,8
	add	[fs:bx],al
	inc	bx
	loop	MAP1
TEXUV	equ	$-4
MOVE	equ	$-6

MAIN	mov	di,400h
	push	di

	mov	dx,-100
SCRY	mov	bp,-160
SCRX	fninit

	mov	bx,TEXUV
	mov	si,EYE

	mov	[bx],dx
	fild	word [bx]
	fidiv	word [si]
	mov	[bx],bp
	fild	word [bx]
	fidiv	word [si]

	fild	word [byte bx-TEXUV+MOVE]
	fld	st0
	fidiv	word [si]
	fsin
	fild	word [byte bx-TEXUV+AMP]

	fmul	st0,st1
	fiadd	word [si]
	fistp	word [bx]
	fimul	word [si]

	mov	al,[bx]
	mov	cx,50
EYE	equ	$-2
RAYCAST	fadd	st0,st2
	fist	word [bx]
	fld	st3
	faddp	st2,st0
	fld	st1
	fistp	word [bx+1]
	mov	si,[bx]
	cmp	al,[fs:si]
	jc	short RAYHIT
	dec	ax
	loop	RAYCAST

RAYHIT	shl	cx,1
	es	lodsb
	shr	byte [di],1
	mul	cl
	add	[di],ah
	inc	di

	inc	bp
	cmp	bp,160
	jnz	short SCRX

	inc	dx
	cmp	dx,byte 100
	jnz	short SCRY

	sub	word [byte bx-TEXUV+MOVE],byte 3

	pop	si
	push	es
	push	word 0A000h
	pop	es
	xor	di,di
	mov	ch,32000/256
	rep	movsw
	pop	es

	in	al,60h
	dec	al
	jnz	short MAIN
	ret

	db	49h,3Dh
PERIOD	equ	$-4
