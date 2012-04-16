.386
JUMPS

ASSUME cs:kod

a 	equ offset temp
b	equ 3DAh

kod	SEGMENT USE16
	org	100h
Start:
	push	7000h
	pop	fs
	push	8000h
	pop	gs
	db 0DBh,0E3h			; finit
	mov	al,13h
	int	10h
	mov	dx,offset temp
	mov	si,dx
	mov	ah,9
	int	21h

	push	0a000h
	pop	es

	push	gs
	pop	ds
	xor	bx,bx
Tex1:
	mov	ax,bx
	and	ax,31+31*256
	cmp	al,28
	jae	NoPlot1
	cmp	ah,28
	jae	NoPlot1
	mov	al,bl
	xor	al,bh
NoPlot1:
	shr	al,2
	mov	[bx],al
	inc	bx
	jnz	Tex1
	mov	cx,17
Blur1:
	mov	al,[bx]
	add	al,[bx+1]
	add	al,[bx+256]
	add	al,[bx+257]
	shr	al,2
	mov	[bx],al
	inc	bx
	jnz	Blur1
	loop	Blur1
	push	cs
	pop	ds


	mov	bp,b

;	mov	si,offset temp
	fild	word ptr [si+offset t25-a]
	mov	ch,1024/256
Loop1:
	fist	word ptr [si]
	mov	dl,byte ptr [si]

	fld	st			;yd
	fidivr	word ptr [si+offset tg-a]
	fiadd	word ptr [si+offset t100-a]	

	fld	st(1)			;yd
	fiadd	word ptr [si+offset t25-a]		;r
	fldz
Circle:
	fld	st
	fsincos

	fmul	st,st(3)		;r
	fiadd	word ptr [si+offset t320a+2-a]
	fidivr	word ptr [si+offset t256+2-a]
	fmul	st(1),st		;x*256/(320+z)
	fmul	st,st(4)		;ys*256/(320+z)
	fistp	word ptr [si]
	mov	ax,word ptr [si]	

	fmul	st,st(2)		;xs=x*r
	fistp	word ptr [si]
	mov	di,word ptr [si]

	sub	ax,40
	add	di,160
	cmp	ax,199-8
	ja	NoPlot
	cmp	di,319
	ja	NoPlot
t320a:	imul	ax,320
	add	di,ax

	mov	fs:[di],dl
	mov	[di+bp],bh
NoPlot:
	fadd	dword ptr [si+offset k2-a]
	add	bx,32
	jnz	Circle

	fcompp
	fstp	st

	fmul	dword ptr [si+offset t031-a]
	loop	Loop1

;-------------------------
MainLoop:
	mov	dx,bp
Vert:	
	in	al,dx
	and	al,8
	jz	Vert
;---- pal ----
	mov	dl,0c8h
	xor	ax,ax
	out	dx,al
	inc	dx
Pal:
	out	dx,al
	out	dx,al
	out	dx,al
;	inc	al
	dec	al
	jnz	Pal
;--- effect ---

	mov	di,320*8
	mov	ch,(64000-320*16)/256
Tunel:
	mov	bl,fs:[di]
	mov	bh,[di+bp]
	mov	al,gs:[bx+si]
	not	al
	stosb
	loop	Tunel
t256:	sub	si,101h

	in	al,60h
	dec	ax
	jnz	MainLoop
	ret

temp	db ' wormy$'
k2	dd 0.003067962
t25	dw 25
tg	dw 4762
t100	dw 100
t031	dd 1.003125
buffer	db 65000 dup (?)

kod	ENDS

END	Start  
