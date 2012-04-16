
; Mandelbrot Set - fasm example program
; optimized by Adok
; now BX and DX are unused in the screen loop, maybe they can be used for something?
; this version looks a bit different from the original one
; the palette code has been removed, so it looks yet more different

; requires FPU

	org	100h

	mov	al,13h
	int	10h
	push	0A000h
	pop	es

	xor	di,di		; here xchg bx,di would work, too
screen:
	mov	cx,320
	mov	[x],-2.2
   row:
	finit
	fldz
	fldz
	mov	al,63		; if xchg bx,di was used, mov al,bl would work, too
    iterate:
	fld	st0
	fmul	st0,st0
	fxch	st1
	fmul	st0,st2
	fadd	st0,st0
	fxch	st2
	fmul	st0,st0
	fsubp	st1,st0
	fxch	st1
	fadd	[y]
	fxch	st1
	fadd	[x]
	fld	st1
	fmul	st0,st0
	fld	st1
	fmul	st0,st0
	faddp	st1,st0
	fistp	[i]
	cmp	[i],ax		; here cmp [i],cx would work, too
	ja	over
	dec	ax
	jne	iterate
    over:
	stosb
	fld	[step]
	fadd	[x]
	fstp	[x]
	loop	row
	fld	[y]
	fsub	[step]
	fstp	[y]
        cmp     di,320*200
	jne	screen

	int	16h
	ret

step dd 0.0125

y dd 1.25
x dd ?

i dw ?
