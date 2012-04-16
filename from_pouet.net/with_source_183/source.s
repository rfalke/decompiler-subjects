; Rotozoomer in 161 bytes (final version is 128 bytes)
; 20 Feb 2000, Mikael Kalms <mikael@kalms.org>
;
; Palette setting removed, as there is a greyscale gradient in
;  the default palette.
; The FPU constants have been 'integrated' a bit with the code.
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
	; Set screenmode (320x200x256)
	
		mov	ax,13h
		int	10h

	;	ax	13h
	;	bx	0
	;	cx	0
	;	dx	?
	;	si	0
	;	di	?
	;	bp	?
	
	; Setup auxiliary segments
	
		mov	bh,70h
		mov	fs,bx		; Texture
		mov	bh,80h
		mov	gs,bx		; Sine table
		push	0a000h
		pop	es		; Graphics memory

	;	ax	13h
	;	bx	8000h
	;	cx	0
	;	dx	?
	;	si	0
	;	di	?
	;	bp	?

	; Generate sine table and clear texture

		fldz
@@gensine:
		fld	st
		fsin
		fimul	w @@sinescale-2
		fistp	w gs:[bx]
		fadd	sinestep
		mov	w fs:[bx],si
		inc	bx
		inc	bx
		jno	@@gensine
		fstp	st	

	;	ax	13h
	;	bx	8000h
	;	cx	0
	;	dx	?
	;	si	0
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
		jno	@@pix

		dec	di
		dec	di	
		jnz	@@circle

	;	ax	?
	;	bx	8000h
	;	cx	?
	;	dx	?
	;	si	?
	;	di	0
	;	bp	?

	; Mainloop
@@frame:

		mov	bx,0100h	; Rotation angle is SMCed
@@anglesmc:				;  (also serves as sinetable-scale)
@@sinescale:
		mov	si,gs:[bx]	; Get texture gradients for
		mov	bp,gs:[bx+2000h] ; current rotation angle

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

		mov	al,5*3		; Iterate through layers,
@@miss:					;  looking for a hit
		push	bx
		add	bx,0000h	; Scroll position is SMCed
@@scrollsmc:
		cmp	b fs:[bx],al
		pop	bx
		ja	@@hit
		add	bx,bx		; Next layer is twice as far away
		sub	al,1*3
		jnz	@@miss
@@hit:
		add	al,16
		stosb
		pop	bx
		loop	@@x

		popa
		add	di,ax		; Step screenptr down one line

		sub	bx,si		; Step vertically in texture
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

sinestep	LABEL	DWORD		; slightly less than 0.0001917476
		ret
		db	0fh,49h,39h
	
		END	start
