;/////////////////////////////////////////////////////////////////////////////
;//////////// this are sources for hicolor 256b intro...
;//////////// there are some comments , but not to many...
;//////////// written and released by khamoon / tube27
;//////////// contact : khamoon@poczta.onet.pl
;/////////////////////////////////////////////////////////////////////////////

.386

ASSUME CS:CODE,DS:CODE

CODE	SEGMENT USE16
	org	100h
Start:
	;db	0DBh,0E3h		;// finit (no fwait so pentium only)
	mov	al,13h
	int	10h

;////////// generate tunnel..................

	push	7000h
	pop	fs

	mov	bx,offset t100
	mov	cl,200		
	xor	di,di		
	fld1			
	fild	word ptr ds:[bx]	
MkTabY:
	fild	word ptr ds:[bx+offset t160 - offset t100]	
	mov	dx,320
MkTabX:
	fld	st(1)
	fmul	st,st
	fld	st(1)
	fmul	st,st
	faddp	st(1),st
	fsqrt

	fidiv	word ptr ds:[bx+offset t160-offset t100]
	fadd	dword ptr ds:[bx+offset tb-offset t100]
	
	fld	st(1)
	fdiv	st,st(1)
	fadd	st,st(2)
	fistp	word ptr fs:[di]

	fdivr	st,st(2)
	fadd	st,st(2)
	fistp	word ptr ds:[di+bx]

	fadd	st,st(2)
	inc	di
	dec	dx
	jnz	MkTabX
	fstp	st
	fadd	st,st(1)
	fadd	st,st(1)
	loop	MkTabY

;////////////////// set up buffers...

	push	08000h
	pop	gs

	push	0a000h
	pop	es

;///////////////////// Main loop ////////////////////////////////////////////
MainLoop:

;///////////// palette................
; First 64 colors (orange) i=0..63:   r=min(i*2,63), g=i, b=i/2
; Next 64 colors (blue)    i=0..63:   r=i/2, g=i, b=i
; Next 128 colors are a copy of the first 128 colors, but with a shift to white.

	mov	dx,3C8h
	xor	ax,ax
	out	dx,al
	inc	dx

MkPalette0:
	mov	cl,3
MkPalette1:
	pusha				; I need only "push cx; push ax"
	dec	cx

	cbw				; Save most significant bit (bit 7) of al in ah
	and	al,127

	test	al,64
	jz	MkPalette2
	and	al,63
	shr	cl,1
	xor	cl,1
MkPalette2:
	shl	al,cl
	shr	al,1

	cmp	al,63
	jbe	MkPaletteNoSat
	mov	al,63
MkPaletteNoSat:

	sahf				; test previously saved most significant bit (bit 7) of al
	jnz	MkPaletteNoWhiten
	add	al,191
	shr	al,2
	;add	al,63
	;shr	al,1
MkPaletteNoWhiten:

	out	dx,al			; send color component to palette port

	popa				; I need only "pop ax; pop cx"
	loop	MkPalette1		; next color component

	inc	al
	jnz	MkPalette0		; next palette entry


;////////////////// wait for vertical retrace

	;mov	dx,3DAh	
	mov	dl,0DAh			; we know dh=03h
Vert:
	in	al,dx
	and	al,8
	jz	Vert

;////////////////// draw effect......

	xor	di,di
	mov	si,di
	mov	cl,200
Dotunel:
	mov	dx,320
	test	cl,1
	jz	NoAdd
	sub	si,dx
NoAdd:
DoLine:

	mov	al,fs:[si]	;// sample tunnel table
	mov	ah,ds:[si+bx]
AddOffset:
	add	ax,bp
	or	al,ah
	shr	al,1

;//////// do motion blur

MotionBlurJump:
	jmp	NoMotionBlur	;// no motion blur in the first frame to get rid of nasty artifacts from random memory. We will modify this intruction to "jmp +0" after the first frame.
	mov	ah,gs:[di]
	sub	al,ah
	;rcr	al,1
	;sar	al,2
	sar	al,3		; we can get away with simpler blurring, since we do not use the whole 8bit color precision
	add	al,ah
NoMotionBlur:
	mov	gs:[di],al	;//store to blur-buffer

;//////// a moving bar with whitening grid on the right side

	cmp	dx,52+3+16
	jae	NoBar
	cmp	dl,11-3
	jbe	NoBar

	push	cx
	add	cx,bp
	xor	cl,dl
	test	cl,16
	jz	NoBar0
	or	al,128
NoBar0:
	pop	cx
NoBar:

;//////// draw some patterns one the screen edges

	cmp	cl,200-2
	jae	Grid
	cmp	cl,3
	ja	NoGrid
Grid:
	test	dl,4
	jnz	NoGrid
	xor	ax,ax
NoGRid:


;/////// TEMP: just to visualize palette

;	cmp	cl,30
;	jae	tmp1
;	or	dh,dh
;	jnz	tmp1
;	mov	al,dl
tmp1:

	stosb			;// store to screen
	inc	si
	dec	dx
	jnz	DoLine

	;not	bp
	xor	byte ptr ds:[bx + offset AddOffset - offset t100], 028h	;// a nasty code modification hack, change "add	ax,bp" intruction to "sub ax,bp" and vice versa
	loop	Dotunel


	mov	ds:[bx + offset MotionBlurJump + 1 - offset t100],dl	;// a nasty code modification hack, change jmp intruction so each next frame gets motion blurred. ds = cs. dl = 0.

	add	bp,101h		;// move tunnel

	in	al,60h
	dec	ax		;// should be "cmp al,1" but this works too (ah=0 after the frame drawing)
	jnz	MainLoop

	ret

;//////////////////////////////////////////////////////////////////////////////
tb	dd -0.1
t160	dw -160
t100	dw -100
Buffer	db 64000 dup (?)

CODE 	ENDS

END	Start
