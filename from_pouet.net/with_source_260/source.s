; Terapi
; by Anesthetic, 2006
;
; Use NASM to assemble.

		org		0x0100
		
INIT	mov		ax,0x0013
		int		0x10		
		push	word 0xa000
		pop		es
		finit
		fldz					; time = 0

PAL		mov		cx,64
.pstart	mov		al,cl
		mov		dx,0x03c8
		out		dx,al
		inc		dx
		mov		al,cl
		out		dx,al			; palette(i,r) = i
		out		dx,al			; palette(i,g) = i
		shr		al,1
		mov		ah,3
		mul		ah
		cmp		al,63
		jl		.less
		mov		al,63
.less	out		dx,al			; palette(i,b) = min(i*2/3,63)
		loop	.pstart
		
MAIN	mov		ch,250

		fadd	dword [STEP]	; time += step
		mov		bx,X1
		call	ROTAT			; x1 = rotat(time ... CX1)
		mov		bx,Y1
		call	ROTAT			; y1 = rotat(time ... CY1)
		mov		bx,X2
		call	ROTAT			; x2 = rotat(time ... CX2)
		
.fill	mov		ax,cx

		dec		ax
		xor		dx,dx
		mov		bx,320
		div		bx
		mov		[X],dx			; x = pos % 320
		mov		[Y],ax			; y = pos / 320

		fild	word [X]
		fild	word [Y]
		mov		bx,X1
		call	RAD				; intensity1 = rad(x, y, x1, y1)
		fstp	dword [X]
		call	RAD				; intensity2 = rad(x, y, y1, x2)
		fadd	dword [X]		; intensity = intensity1 + intensity2
		fistp	word [X]
		mov		ax,[X]
		
		sub		al,12
		jns		.below
		mov		al,0
		cmp		al,63
		jb		.below
		mov		al,63			; intensity = min(intensity, 63)
.below	mov		bx,cx
	
		mov		[es:bx-1],al	; pixel(pos) = intensity

		fcompp

		loop	.fill
		
.input	in		al,0x60
		dec		al
		jnz		MAIN
		
.exit	int		0x20

RAD		call	SQR
		add		bx,10
		call	SQR
		faddp	ST1,ST0
		fsqrt					; radius = sqrt(dx * dx + dy * dy)

		fidiv	word [WAVE]
		fld1
		fcomp	ST4
		fstsw	ax
		wait
		sahf
		jna		.stop
		fmul	ST3
.stop	fcos
		fimul	word [SCALE]
		fabs
		ret						; intensityn = abs(cos(radius / wave)) * scale

SQR		fld		dword [bx]
		fsub	ST2
		fld		ST0
		fmulp	ST1,ST0
		ret

ROTAT	fild	word [bx+4]
		fmul	ST1
		fsin
		fimul	word [bx+6]
		fiadd	word [bx+8]
		fstp	dword [bx]
		ret						; sin(C1 * time) * C2 + C3

X		dw		0x0000
Y		dw		0x0000
STEP	dd		0.0032
SCALE	dw		32
X1		dd		0.0
		dw		16,15,140
Y1		dd		0.0
		dw		13,18,128
X2		dd		0.0
		dw		18,19,96
WAVE	dw		16
		
		db		"kes"
