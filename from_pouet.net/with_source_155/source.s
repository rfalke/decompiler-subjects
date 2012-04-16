; Rotozoomer in 128 bytes (final version!)
; 20 Feb 2000, Mikael Kalms <mikael@kalms.org>
;
; This version is not exitable.
;
; Keypresses and text mode restoring are removed.
; The zero-word at the top of the stack is removed,
;  and SP is used as scroll position counter without clearing any
;  interrupts! (This works as long as no interrupt handlers push more than
;  approximately 200h bytes -- shouldn't be any problem)
;
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
	;	sp	0fffeh
	
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
	;	sp	0fffeh

	; Generate sine table

		fldz
@@gensine:
		fld	st
		fsin
		fimul	w @@sinescale-2	; Scale by 140h
		fistp	w gs:[bx]
		fadd	sinestep-2	; Next sine value
		mov	fs:[bx],si	; Clear two texels in texture
		inc	bx
		inc	bx
		jnz	@@gensine
					; Leave counter on FPU stack
	
	;	ax	13h
	;	bx	0
	;	cx	0
	;	dx	80xxh
	;	si	0
	;	di	?
	;	bp	?
	;	sp	0fffeh

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


		pop	di		; Zero di (first word on stack is 0)

	;	ax	?
	;	bx	0
	;	cx	0
	;	dx	80xxh
	;	si	26h
	;	di	0
	;	bp	?
	;	sp	0

	; Mainloop
@@frame:

		mov	ax,320		; 320 pixels per line
@@sinescale:				;  (also serves as sinetable-scale)
		pusha
		mov	si,gs:[bx]	; Get texture gradients for
		mov	bp,gs:[bx+60h]	;  current rotation angle

		mov	cl,200		; 200 lines high (ch = 0)
@@y:
		pusha
		xchg	cx,ax		; 320 pixels wide
@@x:
		add	bx,bp		; Step horizontally in texture
		add	dx,si

		pusha
		mov	bl,dh
		mov	si,sp		; Get scroll position

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
	;	bx	angle (n*2)
	;	cx	0
	;	dx	80xxh
	;	si	?
	;	di	0
	;	bp	?
	;	sp	texturescroll (n*400h)

		inc	bx		; Increase rotation angle
		inc	bx
		add	sp,400h		; Increase scroll position

		jmp	@@frame

sinestep	LABEL	DWORD
		db	49h,3ch		; roughly 0.012314
	
		END	start
