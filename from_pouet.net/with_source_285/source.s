;indian summer - party version
;by adok/hugi^5711

code segment
assume cs:code,ds:code
org 100h

program:
	push	0a000h
	pop	es

	mov	al,13h
	int	10h

	mov	di,320*(199-159)/2

	mov	dx,3c8h
	xor	ax,ax
	out	dx,al
	inc	dx
	mov	cl,64
pal_l1:
	out	dx,al
	push	ax
	xor	ax,ax
	out	dx,al
	out	dx,al
	pop	ax
	inc	ax
	loop	pal_l1
	mov	cl,64
	xor	ax,ax
pal_l2:
	push	ax
	mov	al,63
	out	dx,al
	pop	ax
	out	dx,al
	push	ax
	xor	ax,ax
	out	dx,al
	pop	ax
	inc	ax
	loop	pal_l2
	mov	cl,64
	xor	ax,ax
pal_l3:
	push	ax
	mov	bx,ax
	mov	al,63
	sub	al,bl
	out	dx,al
	out	dx,al
	pop	ax
	out	dx,al
	inc	ax
	loop	pal_l3
	mov	cl,64
	xor	ax,ax
pal_l4:
	out	dx,al
	push	ax
	mov	al,63
	out	dx,al
	out	dx,al
	pop	ax
	inc	ax
	loop	pal_l4
	xor	bp,bp

	mov	al,255

outer_loop:
	mov	ch,2

inner_loop:
	inc	bp
	jne	inner_loop_l1
	not	ax

inner_loop_l1:
	stosb
	dec	di

	push	ax

	xor	dx,dx
	mov	ax,di
	div	word ptr xscreen + 4		; 320
	or	dx,dx
	jnz	not_left_border_reached
	mov	[x_dir],1
not_left_border_reached:
	cmp	dx,319
	jnz	not_right_border_reached
	mov	[x_dir],-1
not_right_border_reached:
	cmp	ax,(199-159)/2
	jnz	not_top_border_reached
xscreen:
	mov	[y_dir],320
not_top_border_reached:
	cmp	ax,199-(199-159)/2
	jnz	not_bottom_border_reached
	mov	[y_dir],-320
not_bottom_border_reached:

	add	di,[x_dir]
	add	di,[y_dir]

	in	al,60h
	cmp	al,1
	je	ende
	pop	ax
	loop	inner_loop

	push	ax

	push	cx
	push	di

blur0:
	push	ds
	push	es

	push	es
	pop	ds
	mov	ax,cs
	add	ah,10h
	mov	es,ax

	xor	ax,ax

	mov	ch,250
blur1:
	mov	si,cx
	dec	si
	lodsb
	mov	dx,ax
	inc	si
	lodsb
	add	dx,ax
	xchg	ax,dx
	shr	ax,1
	mov	di,si
	dec	di
	dec	di
	stosb
	loop	blur1

	push	es
	pop	ds
	pop	es

	xor	di,di
	xor	si,si
	mov	ch,125

	mov	dx,3dah
waitretrace0:
	in	al,dx
	test	al,8
	jnz	waitretrace0
waitretrace1:
	in	al,dx
	test	al,8
	jz	waitretrace1

	rep	movsw

	pop	ds

	pop	di
	pop	cx

	pop	ax
	jmp	outer_loop

ende:
	pop	ax
	mov	ax,3
	int	10h
	ret

credits	db ' adok/hugi'

; variables
x_dir	dw ?
y_dir	dw ?

code ends
end program