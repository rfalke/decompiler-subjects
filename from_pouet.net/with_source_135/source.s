;a shadebob in 96b
;by adok
	org	100h

	push	0a000h
	pop	es

	mov	al,13h
	int	10h

	xor	di,di

	mov	dx,3c9h
pal_l1:
	out	dx,al
	inc	ax
	loop	pal_l1

main_loop:
	push	ds

	push	es
	pop	ds

	mov	si,di
	lodsb
	inc	al
	stosb
	dec	di

	pop	ds

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
	jne	main_loop

	ret

;constants
xscreen	dw 320

;variables
x_dir	dw ?
y_dir	dw ?

