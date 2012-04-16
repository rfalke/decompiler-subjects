; Rotozoomer in 176 bytes (final version is 128 bytes)
; 20 Feb 2000, Mikael Kalms <mikael@kalms.org>
;
; Some register zero-loads have been eliminated.
; Rotozoomer fits entirely into registers now.
; Animation is handled via SMC.
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

	;	ax	0
	;	bx	?
	;	cx	?
	;	dx	3c8h
	;	si	?
	;	di	?
	;	bp	?
	
	; Setup auxiliary segments
	
		mov	bh,60h
		mov	fs,bx		; Texture
		mov	bh,70h
		mov	gs,bx		; Sine table
		push	0a000h
		pop	es		; Graphics memory

	;	ax	0
	;	bx	70xxh
	;	cx	?
	;	dx	3c8h
	;	si	?
	;	di	?
	;	bp	?

	; Generate sine table and clear texture

		xor	bx,bx
		fldz
@@gensine:
		fld	st
		fsin
		fimul	w sinescale
		fistp	w gs:[bx]
		fadd	sinestep
		mov	w fs:[bx],ax
		inc	bx
		inc	bx
		jnz	@@gensine
		fstp	st	

	;	ax	0
	;	bx	0
	;	cx	?
	;	dx	3c8h
	;	si	?
	;	di	?
	;	bp	?

	; Generate texture
	
		mov	di,5*2
@@circle:
		mov	si,[di]
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

		mov	bx,0000h	; Rotation angle is SMCed
@@anglesmc:	
		mov	si,gs:[bx]	; Get texture gradients for
		mov	bp,gs:[bx+4000h] ; current rotation angle

		xor	dx,dx
		xor	di,di
		mov	cx,200
@@y:
		mov	ax,320
		pusha
		xchg	cx,ax
@@x:

		add	bx,bp		; Step horizontally in texture
		add	dx,si

		push	bx
		mov	bl,dh

		mov	al,5*4		; Iterate through layers,
@@miss:					;  looking for a hit
		push	bx
		add	bx,0000h	; Scroll position is SMCed
@@scrollsmc:
		cmp	b fs:[bx],al
		pop	bx
		ja	@@hit
		add	bx,bx		; Next layer is twice as far away
		sub	al,1*4
		jnz	@@miss
@@hit:
		stosb
		pop	bx
		loop	@@x

		popa
		add	di,ax

		sub	bx,si		; Step horizontally in texture
		add	dx,bp

		loop	@@y

	 	inc	b @@anglesmc-1
 		add	b @@scrollsmc-1,4

		mov	ah,1		; Check for keypress
		int	16h
		jz	@@frame

	; Set 80x25 textmode

		mov	ax,3
		int	10h

	; Return to DOS

		ret


sinescale	dw	0100h
sinestep	dd	0.0001917476
	
		END	start
