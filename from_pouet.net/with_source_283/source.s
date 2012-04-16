.386

ASSUME CS:CODE,DS:CODE

CODE	SEGMENT USE16
	org	100h
Start:
	db 0DBh,0E3h		; finit
	mov	al,13h
	int	10h
;---------------------------
	push	8000h
	pop	gs
	push	0a000h
	pop	es
;---------------------------
	mov	si,offset xtab
	mov	cx,320
	fild	word ptr ds:[ttf]
MkTab:
	fist	word ptr [si]
	fadd	dword ptr ds:[ttx]
	lodsw
	loop	MkTab
;---------------------
	mov	dx,3c8h
	xor	ax,ax
	out	dx,al
	inc	dx
Pal:
	mov	al,ah
	shr	al,2
	out	dx,al
	out	dx,al

	add	al,al
	cmp	al,63
	jbe	NoPal1
	mov	al,63
NoPal1:

	out	dx,al
	inc	ah
	jnz	Pal
	
;þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ Main loop þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ
MainLoop:
	mov	si,offset temp
	mov	dh,2
;	mov	dh,1
	fldz
DoPix:
	fld	st
	fsincos
	fld	st(2)
	fadd	st,st	
	fadd	st,st(4)
;	fsin
;	fmul	st,st

	fsincos
	fmulp	st(2),st
	fmul	st,st

	fimul	word ptr ds:[si+offset t70-offset temp]
	fmul	st(1),st
	fmulp	st(2),st
	fistp	word ptr ds:[si]
	mov	bx,word ptr ds:[si]
	imul	bx,320
	fistp	word ptr ds:[si]
	add	bx,word ptr ds:[si]
	mov	word ptr ds:[bx+offset buffer+32160],250+250*256
;	fadd	dword ptr ds:[si+offset tminor-offset temp]
	fadd	dword ptr ds:[si+offset tmajor-offset temp]
	dec	dx
	jnz	DoPix	

	fstp	st
	fadd	dword ptr ds:[si+offset tmajor-offset temp]
	

;---------------------------------------------
	xor	di,di
	mov	cl,200
YScale:
	lodsw
	push	si
	mov	si,ds:[si+60*2]
	imul	si,320
	mov	bp,offset xtab
XScale:	
	mov	bx,[bp]
	inc	bp
	mov	al,gs:[di-1]
	inc	bp
	mov	dl,ds:[si+bx+1-320*60+offset buffer]
	add	ax,dx
	mov	dl,gs:[di-320]
	add	ax,dx
	mov	dl,ds:[si+bx+320-320*60+offset buffer]
	add	ax,dx
	shr	ax,2
	sub	ax,3
	jge	Oki
	xor	ax,ax
Oki:
	mov	gs:[di],al	
	inc	di
	cmp	bp,offset xtab+320*2
	jnz	XScale
	pop	si
	loop	YScale
;---------------
	mov	dx,3dah
Vert:
	in	al,dx
	and	al,8
	jz	Vert
;---------
	mov	di,320*5
	mov	cl,200-10
Draw1:
	mov	dx,320
Draw2:
	mov	al,gs:[di]
	mov	ds:[di+offset buffer],al
	mov	bl,al
	shr	bl,3
	mov	bh,bl
	add	bl,dl
	add	bh,cl
	and	bl,bh
	add	al,bl
	jnc	NoOver2
	mov	al,-1
NoOver2:
	stosb
	dec	dx
	jnz	Draw2
	loop	Draw1
;---------------
	in	al,60h
;	das
;	jc	MainLoop
	cmp	al,1
	jnz	MainLoop
	ret
;------------

ttx	dd 0.95611283
ttf	dw 7

;tmajor	dd 0.05
tmajor	dd 0.035
t70	dw 120
temp	dw ?

xtab	dw 320 dup (?)

buffer	db 64002 dup (?)

CODE 	ENDS

END	Start
