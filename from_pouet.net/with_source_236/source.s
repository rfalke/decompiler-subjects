.386

ASSUME CS:CODE,DS:CODE

CODE	SEGMENT USE16
	org	100h
Start:
	finit
	mov	al,13h
	int	10h

	mov	cx,32000
	mov	di,500h
	xor	ax,ax
	rep	stosw
;---------------------------
	push	7000h		;rezerwujemy sobie pamiec, a dokladniej po 
	pop	fs		;prostu ja bierzemy i niech odpalajacy sie
	push	8000h		;modli , by w segmentach 7000h i 8000h nie 
	pop	gs		;bylo niczego wznego dla systemu , czy
	push	0a000h		;jakiegos TSR-a
	pop	es		;tradycja - 0a000h do es
;---------------------------
	mov	cl,200		;liczenie tablicy tunel , to ci tlumaczylem
	xor	di,di		;
	fld1			;zalduj 1 na szczyt koporc.
	fild	ds:[t100]	;zaladuj zmienna zwylka t100 na szczyt
MkTabY:
	fild	ds:[t160]	;to samo , tylko zmienna spod adresu t160
	mov	dx,320		;320 linii
MkTabX:
	fld	st(1)
	fmul	st,st
	fld	st(1)
	fmul	st,st
	faddp	st(1),st
	fsqrt
	fidivr	ds:[t3600]
	fistp	word ptr fs:[di]
	fld	st(1)
	fld	st(1)
	fpatan
	fdiv	ds:[tpi128]
	fistp	word ptr gs:[di]
	fadd	st,st(2)
	inc	di
	dec	dx
	jnz	MkTabX
	fstp	st
	fadd	st,st(1)
	loop	MkTabY
;---------------------------
	mov	dx,3c8h
	xor	ax,ax
	out	dx,al
	inc	dx
Pal:
	mov	al,ah
	shr	al,2
	push	ax
	shr	al,1
	out	dx,al	
	out	dx,al	
	pop	ax
	out	dx,al	
	inc	ah
	jnz	Pal
;---------------------------
	fldz
	mov	bx,300h
MkSine:
	fld	st
	fsin	
	fimul	[t128]
	fiadd	[t128]
	fistp	word ptr [bx]
	fadd	[tpi128]
	inc	bl
	jnz	MkSine
;þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ Main loop þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ
MainLoop:
	mov	dx,3dah
Vert:
	in	al,dx
	and	al,8
	jz	Vert
	
	xor	di,di
DrawTunnel:
	mov	bl,fs:[di]
	mov	bh,gs:[di]
	mov	ax,bx

	xor	bh,bh
	mov	bh,[bx+300h]
	add	bh,ah

	add	ax,bp
	xor	al,ah

	sub	bx,bp
	xor	bl,bh
	test	bl,32
	jz	ok
	and	bl,31
ok:

	
	xor	ah,ah
	xor	bh,bh
	sub	ax,bx
	imul	ax,cx
	add	bl,ah
	
	mov	al,ds:[di+500h]
	xor	ah,ah
	sub	bx,ax
	shr	bx,3
	add	bx,ax
	mov	ds:[di+500h],bl	

	mov	es:[di],bl
	inc	di
	cmp	di,64000
	jnz	DrawTunnel

	add	bp,101h
	push	bp
	and	bp,0FFh
	mov	cl,[bp+300h]
	pop	bp

	

	in	al,60h
	cmp	al,1
	jnz	MainLoop

;	mov	ax,3
;	int	10h
	ret
;------------
t160	dw -160
t100	dw -100
tpi128	dd 0.024543693
t3600	dw 3600
t128	dw 127

sine	db 560 dup (?)
buffer 	db 64000 dup (?)
CODE 	ENDS

END	Start
