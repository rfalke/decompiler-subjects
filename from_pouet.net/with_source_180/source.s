; Rotozoomer in 150 bytes (final version is 128 bytes)
; 20 Feb 2000, Mikael Kalms <mikael@kalms.org>
;
; Texture generation and rotozoomer innerloop tightened up a little.
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
	
		mov	al,13h
		int	10h

	;	ax	13h
	;	bx	0
	;	cx	0
	;	dx	?
	;	si	0
	;	di	?
	;	bp	?
	
	; Setup auxiliary segments
	
		mov	dh,70h
		mov	fs,dx		; Texture
		mov	dh,80h
		mov	gs,dx		; Sine table
		push	0a000h
		pop	es		; Graphics memory

	;	ax	13h
	;	bx	0
	;	cx	0
	;	dx	80xxh
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
		mov	fs:[bx],si
		inc	bx
		inc	bx
		jnz	@@gensine
		fstp	st	

	;	ax	13h
	;	bx	0
	;	cx	0
	;	dx	80xxh
	;	si	0
	;	di	?
	;	bp	?

	; Generate texture
	
		xchg	cx,ax
@@circle:
		lodsw
		xchg	di,ax
@@pix:
		mov	al,bl
		imul	al
		xchg	bp,ax
		mov	al,bh
		imul	al
		add	ax,bp
		cmp	ax,30*30-1
		ja	@@outside
		mov	fs:[bx+di],dl
@@outside:	inc	bx
		jnz	@@pix

		loop	@@circle

	;	ax	?
	;	bx	0
	;	cx	0
	;	dx	80xxh
	;	si	26h
	;	di	?
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
		mov	ax,320
		mov	cl,200
@@y:
		pusha
		xchg	cx,ax
@@x:
		add	bx,bp		; Step horizontally in texture
		add	dx,si

		pusha
		mov	bl,dh
		mov	si,0000h	; Scroll position is SMCed
@@scrollsmc:

		mov	al,6*3		; Iterate through layers,
@@miss:					;  looking for a hit
		add	bx,bx		; Next layer is twice as far away
		sub	al,1*3
		cmp	fs:[bx+si],al
		jb	@@miss

		add	al,16
		stosb
		popa
		inc	di
		loop	@@x

		popa
		add	di,ax		; Step screenptr down one line

		sub	bx,si		; Step vertically in texture
		add	dx,bp

		loop	@@y

	;	ax	140h
	;	bx	?
	;	cx	0
	;	dx	?
	;	si	?
	;	di	0fa00h
	;	bp	?
	
	 	inc	b @@anglesmc-1
 		add	b @@scrollsmc-1,4

		int	16h			; Check for keypress
		jz	@@frame

	; Set 80x25 textmode

		mov	ax,3
		int	10h

	; Return to DOS

sinestep	LABEL	DWORD		; slightly less than 0.0001917476
		ret
		db	0fh,49h,39h
	
		END	start
