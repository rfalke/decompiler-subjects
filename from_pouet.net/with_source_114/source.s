;
;        A s a h i k a w a
;
;       64b city  landscape
;
;       Mathieu 'p01' Henri
;       http://www.p01.org/
;
;       january  21st, 2007
;

org 100h

mov al,13h
int 10h
mov   bh,0a0h
mov   es,bx
main:
	mov		ax,di
	cdq
	mov		bx,320
	div		bx		; ax = y, dx = x

	sub		dx,160
	mov		bx,dx		; bx = x-160

	inc		ax		;
	xchg		cx,ax		; cx = y+1

	mov		ah,32
	cwd
	div		cx		; ax = perspScale = ~y projected

	imul		bx,ax		; bx = (x-160)*perspScale = ~x projected

	add		ax,si		; frame offset
	and		al,240		; al = v*16
	shr		bx,12		; bx = u


	xlat			       ; buildings 'LUT'
	xor		ax,bp		; al = ~height of the building

	push	di
loop_y:
		or	al,16
		stosb
		sub	di,321
		inc	ax
		and	al,15
	jnz	loop_y

	pop	di
	inc	di

	jnz	main
	inc	si			; next frame
	jnz	main

db	03h				; <3
