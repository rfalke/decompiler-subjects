;
;       Astroids 2 - The noise within
;       256b intro by Grenhald/Asenses
;
;       www:    grenhald.unterground.net
;       e-mail: grenhald@gmail.com
;
;       compiled with: fasm 1.66
;       October 2006


;assumed:       AX=0000 BX=0000 CX=00FF DX>0080
;               SI=0100 DI=FFFE BP=09xx SP=FFFE
;               CS=SS=DS=ES


	org	100h

	mov	al, 13h
	int	10h

	push	0a000h
	pop	es
	push	09000h
	pop	fs
	; es - screen
	; fs - pixel buf

	mov	si, star_x
	mov	[si], word -2500

;---setup palette-----------------------------------------
	xchg	ax, bx
	mov	dx, 03C8h
	out	dx, al
	inc	dx

palette_loop:
	out	dx, al		; gray scale
	out	dx, al
	out	dx, al
	inc	ax
	jnz	palette_loop

	xchg	ax, bp		; bp:=0

main_loop:

;---------------------------------------------------------
; z = 50-0    ( -= 1 )
; x = R*cos^3(a)
; y = R*sin^3(a)
; a = 0-2pi   ( += 2pi/200 )
; R = 50*b^2
; b = 0-2pi   ( += 2pi/50 )

	mov	bl, 50
	fldz			; 0
.b_loop:
	mov	cl, 200
	fldz			; 0 b
.a_loop:
	; R - here, bit slower but smaler
				; a b
	mov	[si+10], bx
	fild	word [si+10]   ; z a b

	fld	st2		; b z a b
	fmul	st, st		; b*b z a b
	fimul	word [si-8]	; 50*b^2 a b

	fld	st2		; a R z a b
	fsincos 		; cos sin R z a b
	fld	st		; cos cos sin R z a b
	fmul	st, st		; cos^2 cos sin R z a b
	fmulp			; cos^3 sin R z a b
	fmul	st, st2 	; R*cos^3 sin R z a b
	fxch	st1		; sin x R z a b
	fld	st		; sin sin x R z a b
	fmul	st, st		; sin^2 sin x R z a b
	fmulp			; sin^3 x R z a b
	fmulp	st2, st 	; x R*sin^3 z a b

	fld	st2		; z x y z a b
	fld	st2		; y z x y z a b
	fld	st2		; x y z x y z a b

	mov	[si+4], word -75
	call	star
				; x y z a b
	mov	[si+4], word -25
	call	star
				; a b
	fadd	dword [si-16]	; a+da b
	loop	.a_loop

	ffreep	st		; b
	fadd	dword [si-12]	; b+db

	dec	bx
	jnz	.b_loop

	; move
	inc	word [si]
	cmp	word [si], 5050
	jne	draw

	; reset and change direction
	mov	word [si], -2500
	not	bp

;---draw blur and clear buf-------------------------------
draw:
	pusha
	xor	di, di
.blur:
	mov	al, [fs:di]
	add	al, [fs:di+1]
	adc	ah, 0
	add	al, [fs:di+320+1]
	adc	ah, 0

	mov	bx, 160
	test	byte [si+1], 2
	jnz	.b2
	shl	bx, 1
.b2:
	add	al, [fs:di+bx]

	adc	ah, 0
	shr	ax, 2
	mov	[es:di], al
	mov	[fs:di], ah	; 0
	inc	di
	jnz	.blur
	popa

;---key ESC-----------------------------------------------
	in	al, 60h
	dec	al
	jnz	main_loop

	ret


;---render star point----------------------------------------

star:
				; x y z
	fiadd	word [si]	; x+star_x y z
	fxch	st1		; y x z
	fiadd	word [si]	; y+star_x x z
	fxch	st2		; z y x
	fiadd	word [si+4]	; z+star_z y x

	;z  form [0; 100] to [0.5; 1]
	fiadd	word [si-6]	; z+za y x
	fidiv	word [si-4]	; (z+za)/zb y x

	fmul	st2, st 	; per y x*per
	fmulp			; y*per x*per

	fiadd	word [si-6]	; y*per+100 x*per
	fistp	word [si+8]	; x*per
	fiadd	word [si-2]	; x*per+160

	or	bp, bp
	jz	.next
	fchs			; -x
.next:
	fistp	word [si+6]	;

	; put pixel
	mov	ax, [si+8]
	mul	word [si-2]
	shl	ax, 1
	add	ax, [si+6]
	xchg	di, ax
	mov	[fs:di], bl	; z-shading
	ret


d_a	dd	0.0314	;-16
d_b	dd	0.1256	;-12
r	dw	50	;-8

za	dw	100	;-6
zb	dw	200	;-4

sw	dw	160	;-2

star_x	dw	?	; si
star_y	dw	?	;+2
star_z	dw	?	;+4

xs	dw	?	;+6
ys	dw	?	;+8

tmp	dw	?	;+10
