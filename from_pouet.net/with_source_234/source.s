;############################################
;## Ultra - coded by Khamoon of TUBE27 '97 ##
;############################################

col	equ	55

.MODEL TINY
.386c

UDATASEG 
buffer	db 64768 dup (?)

CODESEG
	org	100h
LOCALS
.STARTUP
	;db	0DBh,0E3h

	mov	al,13h
	int	10h

	mov	di,offset buffer
	mov	ch,253
	mov	ax,63*256
	rep	stosb


	mov	dx,3c8h
	out	dx,al
	inc	dx
	mov	di,offset buffer+320
	mov	si,di
	mov	cl,32
Pal:
	inc	di
	stosb
	mov	[di+32*3-2],ax
	mov	[di+32*3],al
	inc	di
	add	al,2
	loop	Pal
	mov	cl,64*3
	rep	outsb

;###########################	

	fild	ds:[t6]
	fldz
MainLoop:

	inc	ch

	fldz
Dew:
	fld	st(1)
	fdiv	st,st(3)
	fsin
	fmul	st,st(3)
	fadd	st,st(1)
	fsincos
	fld	st(3)
	fsin
	fimul	ds:[t45]
	fist	word ptr ds:[kr+1]
	fld	st(3)
	fmul	st,st(6)
	fsin
	fmulp	st(1),st
	fiadd	ds:[t45]
	fmul	st(1),st
	fmulp	st(2),st
	fistp	word ptr ds:[X+1]
	fistp	word ptr ds:[Y+1]
	fadd	ds:[Dk]

Y:	mov	si,1234h
X:	mov	bx,1234h
	imul	si,320
	mov	word ptr [bx+si+32160+offset buffer+320],col+col*256

	loop	Dew

	fstp	st
	fadd	ds:[Dk1]

;Wait fo vertical retrace
	mov	dl,0DAh		;Now dx=3DAh
WaitV:
	in	al,dx
	and	al,8
	jz	WaitV


	mov	di,63999
Blur:
	mov	al,[di+1+offset buffer+320]
	add	al,[di-1+offset buffer+320]
	add	al,[di+320+offset buffer+320]
	add	al,[di-320+offset buffer+320]
	shr	al,2
	mov	[di+offset buffer+320],al
	dec	di
	jnz	Blur

;### TV
	push	ds
	pop	es
kr:	mov	di,1234h
	add	di,di
	add	di,offset buffer + 320 +120*320+120
	mov	si,offset buffer+320
	mov	cl,50
TV@1:
	mov	al,80
TV@2:
	movsb
	add	si,3
	dec	al
	jnz	TV@2
	
	add	si,(320-80)*4
	add	di,320-80
	loop	TV@1
	


	push	0a000h
	pop	es
	xor	di,di
	mov	ch,0FAh
Copy:
	mov	al,[di+offset buffer+320]
	and	bl,111b
	add	al,bl
	add	bx,bp
	ror	bp,3
	add	bp,bx
	stosb
	dec	cx
	jnz	Copy


	in	al,60h
	cmp	al,1
	jnz	MainLoop
	;das
	;jc	MainLoop

;	mov	ah,1
;	int	16h
;	jz	MainLoop

	mov	ax,3	;if ...das... then here mov al,3 (-1b)
	int	10h
	ret
;#############################################################

Dk1	dd	0.05
Dk	dd 	0.024543693
t6	dw 	6
t45	dw 	45


END