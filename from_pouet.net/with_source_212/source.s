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

;////////////// enter 320x400 mode..............

 	mov	dx,3D4h
	mov	al,9
	out	dx,al
	inc	dx
	xor	ax,ax
	out	dx,al
	mov	dl,0CEh
	mov	al,6
	out	dx,al
	inc	dx
	mov	al,1
	out	dx,al

;///////////// palette................
; First 64 colors (orange) i=0..63:   r=min(i*2,63), g=i, b=i/2
; Next 64 colors (blue)    i=0..63:   r=i/2, g=i, b=i
; Next 128 colors are a intact.
	mov	dl,0C8h
	dec	ax
	out	dx,al
	inc	dx

MkPalette0:
	mov	cl,3
MkPalette1:
	pusha				; I need only "push cx; push ax"
	dec	cx

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

	out	dx,al			; send color component to palette port

	popa				; I need only "pop ax; pop cx"
	loop	MkPalette1		; next color component

	inc	al
	jns	MkPalette0		; next palette entry

;////////// generate tunnel..................
;////////////////// great thanks to mrock/hellcore...............
;/////////////////////////// for letting me use his tunel patterns............

	push	7000h
	pop	fs
	mov	bx,offset t100
	mov	cl,200		
	xor	di,di		
	fld1			
	fild	word ptr ds:[bx]	
MkTabY:
	fild	word ptr ds:[bx+offset t160 - offset t100]	
	mov	dx,320		;320 linii
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
	loop	MkTabY
;þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ Main loop þþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþþ
MainLoop:
	mov	dx,3DAh			;// wait for vertical retrace
Vert:
	in	al,dx
	and	al,8
	jz	Vert

;////////////////// draw effect......
	push	0a000h
	pop	es
	push	08000h
	pop	gs

	xor	di,di
	mov	si,di
	mov	cx,400
Dotunel:
	mov	dx,320
	test	cl,1
	jz	NoAdd
	sub	si,dx
NoAdd:
DoLine:

	mov	al,fs:[si]
	mov	ah,ds:[si+bx]
	add	ax,bp
	or	al,ah
	shr	al,1

MotionBlurJump:
	jmp	NoMotionBlur	;// no motion blur in the first frame to get rid of nasty artifacts from random memory. We will modify this intruction to "jmp +0" after the first frame.
	mov	ah,gs:[di]	;// do motion blur
	sub	al,ah
	;rcr	al,1
	;sar	al,2
	sar	al,3
	add	al,ah
NoMotionBlur:

	cmp	cx,400-3	;// draw some patterns one the screen edges
	jae	Grid
	cmp	cx,4
	ja	oki
Grid:
	test	dl,4
	jnz	oki
	xor	ax,ax
oki:

	mov	gs:[di],al	;//store to blur-buffer
	mov	es:[di],al	;//store to screen
	inc	di
	jnz	NoBankSwap
	push	0B000h
	pop	es
	push	09000h
	pop	gs
NoBankSwap:
	inc	si
	dec	dx
	jnz	DoLine

	not	bp
	loop	Dotunel

	add	bp,101h		;// move tunnel

	mov	ds:[bx + offset MotionBlurJump + 1 - offset t100],dl	;// a nasty code modification hack, change jmp intruction so each next frame gets motion blurred. ds = cs. dl = 0.

	in	al,60h
	dec	ax
	jnz	MainLoop

	ret

;//////////////////////////////////////////////////////////////////////////////
tb	dd -0.1
t160	dw -160
t100	dw -100
Buffer	db 64000+512 dup (?)

CODE 	ENDS

END	Start
