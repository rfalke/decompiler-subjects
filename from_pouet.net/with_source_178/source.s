; Rotozoomer in 143 bytes (final version is 128 bytes)
; 20 Feb 2000, Mikael Kalms <mikael@kalms.org>
;
; Well-commented version :)
; Texture generation is slightly shorter.
; Rotozoomer has one of the formerly SMCed parameters in a register now.
; Rotozoomer innerloop is slightly transformed (smaller, but loses one layer).
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
		mov	fs,dx		; Texture at 70xxh
		mov	dh,80h
		mov	gs,dx		; Sine table at 80xxh
		push	0a000h
		pop	es		; Graphics memory at 0a000h

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
		fimul	w @@sinescale-2	; Scale by 100h
		fistp	w gs:[bx]
		fadd	sinestep	; Next sine value
		mov	fs:[bx],si	; Clear two texels in texture
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
	
		xchg	cx,ax		; Draw 26h circles
@@circle:
		lodsw			; Get pseudorandom position
		xchg	di,ax		;  of circle

@@pix:					; Evaluate circle function over
					;  entire texture
		mov	al,bl
		imul	al
		xchg	bp,ax
		mov	al,bh
		imul	al
		add	ax,bp		; Calculate x^2 + y^2

		sub	ax,30*30-1	; Radius less than 30 pixels?
		sbb	fs:[bx+di],ch	; If so, set (decrease) texel
		inc	bx
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
		mov	si,gs:[bx]	; Get texture gradients for
		mov	bp,gs:[bx+2000h] ; current rotation angle

		mov	ax,320

		pusha
		xor	di,di
		mov	cl,200		; 200 lines high (ch = 0)
@@y:
		pusha
		xchg	cx,ax		; 320 pixels wide
@@x:
		add	bx,bp		; Step horizontally in texture
		add	dx,si

		pusha
		mov	bl,dh
		mov	si,0100h	; Scroll position is SMCed
@@scrollsmc:				;  (also serves as sinetable-scale)
@@sinescale:
		mov	al,6*3		; Iterate through layers,
@@miss:					;  looking for a hit
		add	bx,bx		; Next layer is twice as far away
		sub	al,1*3
		cmp	fs:[bx+si],al	; Hit? (always true when al = 0)
		jb	@@miss

		add	al,16		; Use grey gradient in default pal
		stosb			; Draw pixel
		popa

		inc	di		; Next pixel on screen
		loop	@@x

		popa
		add	di,ax		; Next line on screen

		sub	bx,si		; Step vertically in texture
		add	dx,bp

		loop	@@y

		popa
	
	;	ax	140h
	;	bx	angle
	;	cx	0
	;	dx	80xxh
	;	si	?
	;	di	?
	;	bp	?
	
	 	inc	bh		; Increase rotation angle
 		add	b @@scrollsmc-1,4 ; Increase scroll position

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
