
;
; Waving waves 64b
; Coded by Skate/Clash
; Date: 10/12/2006 (dd/mm/yyyy)
; No ESC support. Sorry.
;

	org 100h
;
; Set 13h Mode
;
	mov	al,13h
	int	10h
	push	0a000h
	pop	ds
;
; Prepare Palette
;
	mov	dx,3c9h
palette:
	mov	al,cl
	shr	al,2
	out	dx,al
	out	dx,al
	xor	ax,dx
	out	dx,al
	loop	palette
;
; Main
;
main:
	mov	dx,320
loop1:
	mov	cl,200
loop2:
	mov	ax,cx
	mul	al
	mov	bx,dx
	imul	bx,bx
	add	ax,bx
	mov	bx,cx
	imul	bx,320
	add	bx,dx
	shr	al,3
	add	ax,di
	add	ah,al
	mov	[ds:bx],ah

	loop	loop2

	dec	dx
	jnz	loop1

	inc	di
	jmp	main
