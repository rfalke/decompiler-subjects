;        _ __ _ .  _  _  
;  °_ /°  °  °  ° °_ °/  256b intro by baze.||| [baze@stonline.sk, www.3sc.sk]
;  . . . . . . . . . .   requires fast processor ;] thanks to loveC and #z80.

[org 100h]

TEXUV	mov	al,13h
	int	10h

	mov	ax,cs
	add	ah,10h
	mov	es,ax
	db	3Dh
EPSILON	equ	$-4
SCALE	dw	41

	xor	cx,cx
PALETTE	mov	dx,3C8h
ZMOVE	equ	$-2
	mov	al,cl
	out	dx,al
	inc	dx
	out	dx,al
	mul	al
	shr	ax,6
	out	dx,al
	xor	ax,ax
	out	dx,al
	stosb
	loop	PALETTE

TEXTURE	mov	bx,cx
	rcl	dh,cl
	mov	ah,dh
	sar	ah,3
	adc	al,ah
	adc	al,[es:bx+128]
	shr	al,1
	mov	[es:bx],al
	not	bh
	mov	[es:bx],al
	loop	TEXTURE

MAIN	mov	di,200h
	push	di

	mov	dx,-100
DRAWY	mov	bp,-160
DRAWX	mov	si,EYE
EYE	equ	$-2
	fninit

	fldlg2
	mov	[di],bp
	fild	word [di]
	fidiv	word [si]
	mov	[di],dx
	fild	word [di]
	fidiv	word [si]

	mov	cl,2
ROTATE	fild	word [byte si-EYE+ZMOVE]
	fidiv	word [byte si-EYE+SCALE]
	fsincos
	fld	st2
	fmul	st0,st1
	fld	st4
	fmul	st0,st3
	fsubp	st1,st0
	fxch	st0,st3
	fmulp	st2,st0
	fmulp	st3,st0
	faddp	st2,st0
	fxch	st0,st2
	loop	ROTATE

	fldpi
	fidivr	word [byte si-EYE+ZMOVE]
	fldz
	fldz

	mov	cl,32
RAYSTEP	fld	st2
	fcos
	fld	st2
	fcos
	faddp	st1,st0
	fld	st1
	fcos
	faddp	st1,st0
	fldln2
	faddp	st1,st0

	fcom	dword [byte si-EYE+EPSILON]	; 386 version (runs everywhere)
	fnstsw	ax				; ...
	sahf					; ...
;	fld	dword [byte si-EYE+EPSILON]	; p2/athlon version (shorter)
;	fcomip	st0,st1				; ...

	fld	st0
	fmul	st0,st7
	faddp	st4,st0
	fld	st0
	fmul	st0,st6
	faddp	st3,st0
	fmul	st0,st4
	faddp	st1,st0

	jc	short RAYHIT			; 386 version
;	jnc	short RAYHIT			; p2/athlon version
	loop	RAYSTEP

RAYHIT	fpatan
	fimul	word [byte si-EYE+SCALE]
	fistp	word [byte si-EYE+TEXUV]
	fimul	word [byte si-EYE+SCALE]
	fistp	word [byte si-EYE+TEXUV+1]

	mov	si,[byte si-EYE+TEXUV]
	shl	cx,1
	es	lodsb
	neg	al
	mul	cl
	mov	[di],ah
	inc	di

	inc	bp
	cmp	bp,160
	jnz	near DRAWX

	inc	dx
	cmp	dx,byte 100
	jnz	near DRAWY

	dec	word [byte bp-160+ZMOVE]

	pop	si
	push	es
	push	word 0A000h
	pop	es
	xor	di,di
	mov	ch,32000/256
	rep	movsw
	pop	es

	in	al,60h
	cbw
	dec	ax
	jnz	near MAIN

	mov	al,3
	int	10h
	ret
