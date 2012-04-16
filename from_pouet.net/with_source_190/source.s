; Rotozoomer in 204 bytes (final version is 128 bytes)
; 20 Feb 2000, Mikael Kalms <mikael@kalms.org>
;
; Clean implementation, no particular tricks are used.
; A sine table is generated, then a texture is rendered
; by drawing a few circles with pseudorandom positions.
; After that, the program performs 2d rotation and parallax
; scrolling over the texture.
; 
; Assembles with TASM.


b		EQU	byte ptr
w		EQU	word ptr
d		EQU	dword ptr

		LOCALS	@@
		.MODEL	TINY
		.CODE
		.386

		ORG	100h


start:
	; Set screenmode (320x200x256) and palette (greyscale)
	
		mov	ax,13h
		int	10h

		mov	dx,03c8h
		xor	ax,ax
		out	dx,al
		inc	dx
@@pal:
		out	dx,al
		inc	al
		jnz	@@pal

	; Setup auxiliary segments
	
		mov	ax,cs
		add	ah,10h
		mov	fs,ax		; Texture
		add	ah,10h
		mov	gs,ax		; Sine table
		push	0a000h
		pop	es		; Graphics memory

	; Generate sine table and clear texture

		xor	bx,bx
		fldz
@@gensine:
		fld	st
		fsin
		fimul	w sinescale
		fistp	w gs:[bx]
		mov	w fs:[bx],0
		fadd	sinestep
		inc	bx
		inc	bx
		jnz	@@gensine
		fstp	st	

	; Generate texture
	
		mov	di,5*2
@@circle:	mov	si,[di+100h]
	
		xor	bx,bx
@@pix:
		mov	al,bl
		imul	al
		xchg	cx,ax
		mov	al,bh
		imul	al
		add	ax,cx
		cmp	ax,50*50-1
		ja	@@outside
		mov	b fs:[bx+si],dl
@@outside:	inc	bx
		jnz	@@pix

		dec	di
		dec	di	
		jnz	@@circle

	; Mainloop
@@frame:
		call	drawrot2d	; Draw the magic

		mov	ah,1		; Check for keypress
		int	16h
		jz	@@frame

	; Set 80x25 textmode

		mov	ax,3
		int	10h

	; Return to DOS

		ret


drawrot2d:
		mov	bx,angle	; Get texture gradients for
		mov	ax,gs:[bx]	;  current rotation angle
		mov	dudx,ax
		mov	si,gs:[bx+4000h]

		xor	dx,dx
		xor	bp,bp
		xor	di,di
		mov	cx,200
@@y:	
		pusha
		mov	cx,320
@@x:
		add	bp,si		; Step horizontally in texture
		add	dx,dudx

		mov	bx,bp
		mov	bl,dh

		mov	al,5*4		; Iterate through layers,
@@miss:					;  looking for a hit
		push	bx
		add	bx,scroll
		cmp	b fs:[bx],0
		pop	bx
		jnz	@@hit
		add	bx,bx		; Next layer is twice as
		sub	al,1*4		;  far away
		jnz	@@miss
@@hit:
		stosb
		loop	@@x

		popa
		add	di,320

		sub	bp,dudx		; Step vertically in texture
		add	dx,si

		loop	@@y

	 	add	b angle+1,1
		add	b scroll+1,4
		ret

angle		LABEL	WORD	
sinescale	dw	0100h
sinestep	dd	0.0001917476

scroll		dw	?
dudx		dw	?
	
		END	start
