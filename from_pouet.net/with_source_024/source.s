;simplest shadebob in 27 bytes
;by adok

	org	100h

	push	0a000h
	pop	es

	push	es
	pop	ds

	mov	al,13h
	int	10h

main_loop:
	mov	si,di
	lodsb
	inc	al
	stosb

	add	di,320

	in	al,60h
	cmp	al,1
	jne	main_loop

	ret
