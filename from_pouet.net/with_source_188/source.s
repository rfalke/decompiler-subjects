;indian summer - final version
;by adok/hugi

.286
code segment
assume cs:code,ds:code
org 100h

program:
	push	0a000h + 400
	pop	es

	mov	al,13h
	int	10h

	xor	di,di

	xor	ax,ax
	mov	dx,3c9h
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
	or	ax,ax
	jnz	not_top_border_reached
xscreen:
	mov	[y_dir],320
not_top_border_reached:
	cmp	ax,159
	jnz	not_bottom_border_reached
	mov	[y_dir],-320
not_bottom_border_reached:

	add	di,[x_dir]
	add	di,[y_dir]

	in	al,60h
	dec	ax
	je	ende
	pop	ax
	loop	inner_loop

	push	ax

	push	cx
	push	di

blur0:
	push	ds

	push	es
	pop	ds

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

	pop	ds

	pop	di
	pop	cx

	pop	ax
	jmp	outer_loop

ende:
	pop	ax
	ret

; variables
x_dir	dw ?
y_dir	dw ?

code ends
end program