
;
; Oh Shade! 256b
; Coded by Skate/Clash & Ragnor/Clash
; Release date: 03/12/2006 (dd/mm/yyyy)
;

	org	100h
codestart:
	mov	al,13h
	int	10h

	push	word 0xa000
	pop	es

	mov	ah,9h
	mov	dx,scroll
	int	0x21

	mov	bx,320*8
lp1:
	mov	byte al,[es:bx]
	mov	byte [sctextbf+320+bx],al
	dec	bx
	jnz	lp1

mainloop:
;
; SHADEBOB
;
	mov	cl,70
bob:
	mov	bx,word [y]
	imul	bx,319
	add	bx,word [x]
	add	byte [buffer+31328+bx],24
	add	byte [buffer+31328+1+bx],16
	add	byte [buffer+31328-320+bx],16

	fld	[a]
	fsin
	fimul	word [xa]
	fistp	[x]

	fld	dword [b]
	fcos
	fimul	[ya]
	fistp	[y]

	add	word [a],91
	add	word [b],158

	loop	bob

	sub	word [a],91*70+1
	sub	word [b],158*70+3

	mov	bx,320*160
buf2vga:
	mov	al,[buffer+bx]
	cmp	al,16
	je	just2vga
	dec	ax
	mov	[buffer+bx],al
just2vga:
	dec	bx
	mov	[es:bx],al
	jnz	buf2vga
dypp:
;
; DYPP
;
	mov	eax,[sb]
	mov	[sa],eax
	mov	cl,255
lp3:
	fld	[sa]
	fsin
	fimul	[l]
	fistp	[sx]

	mov	di,[sx]
	imul	di,322 ;effect 1

	mov	dl,11
lp2:
	mov	bx,dx
	imul	bx,321 ;effect 2
	add	bx,cx
	mov	byte al,[sctextbf-320-8+bx]
	add	bx,320*180
	add	bx,di
	add	bx,word [posx]
	mov	byte [es:bx],al

	inc	word [sa]

	dec	dx
	jne	lp2

	loop	lp3

	add	word [sb],3

	mov	al,byte [sb]
	and	al,7
	jnz	cont

	dec	word [posx]
;	jnz	cont
;	mov	[posx],320
cont:
	in	ax,60h
	dec	ax
	jnz	mainloop

xa	dw	195;	ret
ya	dw	92
a	dd	40000.0
b	dd	17452.0
l	dw	10
sb	dd	50000.0
scroll	db	"CLASH IS BORN$"

x	dw	?
y	dw	?
sx	dw	?
sa	dd	?
buffer	db	320*200 dup (?)

buf2st		= 320*191
sctextbf	= buffer+buf2st
posx		= codestart+15
