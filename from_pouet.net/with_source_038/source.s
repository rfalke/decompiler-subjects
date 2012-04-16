;;; by valium!design
;;; greetings to ODD and DXM
	bits	16
	org	0x100

	les	bp, [bx]
	mov	al, 0x13
	int 	0x10
	mov	bl, 15
pouet:
	rdtsc
%ifdef MULTICOLOR
	and	al, 5
%else	
	and	al, 1
%endif	
	mul	bx
	stosb
	loop	pouet
	
	in	al, 0x60
	test	al, al
	dec	al
	jnz	pouet
	
	mov	ax, 0x03
	int	0x10
	ret
