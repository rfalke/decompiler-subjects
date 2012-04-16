; "snowing", by phant, 2006

;%define DEBUG

org 0x100

snowing	mov	al,0x13
	int	0x10

	; init

	mov	di,pos		; 0x100 + 64 is also 320
	mov	cx,1132		; 1132 flakes (0x046c, used in timer)
	mov	bp,di
	push	cx

.loop1	stosw
	add	ax,di
	loop	.loop1

	les	ax,[bx]		; this should load 0xa000 into es when bx=0
	pop	bx

.loop2	; erase, move, draw

	mov	si,bp
	mov	cx,bx

	%ifdef DEBUG
	sub	bp,bpsub
	%endif

.loop3	mov	di,[si]
	salc			; al = 0
	stosb

	in	ax,0x40		; random value
	dec	ax		; get flags
	jnp	.x
	dec	di
	dec	di
.x	jp	.y
	add	di,bp
.y	add	di,bp

	mov	[si],di
	lodsw

	mov	al,cl		; color value from 16 to 31
	and	al,1111b
	add	al,16
	stosb

	loop	.loop3

	%ifdef DEBUG
	add	bp,bpsub
	%endif

.wait	; wait

	mov	al,[fs:bx]
	cmp	al,dl
	je	.wait

	xchg	dx,ax

	; loop

%ifndef DEBUG

	jmp	.loop2

%else

	mov	ah,0x01
	int	0x16
	jz	.loop2

	mov	ax,0x0003
	int	0x10

	ret

%endif

bpsub equ $-0x140

section .bss align=1

pos	resw	1132