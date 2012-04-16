;okay, i've learnt my lesson - here's a real shadebob
;by adok
	org	100h

	push	0a000h
	pop	es

	mov	al,13h
	int	10h

	xor	di,di

	mov	dx,3c8h
	xor	ax,ax
	out	dx,al
	inc	dx
	mov	cl,64
pal_l1:
	out	dx,al
	out	dx,al
	out	dx,al
	inc	ax
	loop	pal_l1

outer_loop:
	mov	ch,250

	push	di
	push	ds

	push	es
	pop	ds

l1:
	mov	si,di
	lodsb
	or	al,al
	jz	l2
	dec	al
l2:
	stosb
	loop	l1

	pop	ds
	pop	di

	mov	ch,2

inner_loop:
	mov	al,63
	stosb
	dec	di

	xor	dx,dx
	mov	ax,di
	div	[xscreen]
	or	dx,dx
	jnz	not_left_border_reached
	mov	[x_dir],1
not_left_border_reached:
	cmp	dx,319
	jnz	not_right_border_reached
	mov	[x_dir],-1
not_right_border_reached:
	or	ax,ax
	jnz	not_top_border_reached
	mov	[y_dir],320
not_top_border_reached:
	cmp	ax,199
	jnz	not_bottom_border_reached
	mov	[y_dir],-320
not_bottom_border_reached:

	add	di,[x_dir]
	add	di,[y_dir]

	in	al,60h
	cmp	al,1
	je	ende
	loop	inner_loop
	jmp	outer_loop

ende:
	ret

;constants
xscreen	dw 320

;variables
x_dir	dw ?
y_dir	dw ?

