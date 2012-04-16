;
;       Boxes
;       256b intro by Grenhald
;
;       grenhald@gmail.com
;
;       compiled with: fasm 1.66
;       June 2006


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

       ;setup palette
	xor	al, al
	mov	dx, 03C8h
	out	dx, al
	inc	dx

palette_loop:
	out	dx, al		; gray scale
	out	dx, al
	out	dx, al

	; and clear buffer
	inc	di
	mov	byte [fs:di], 0

	inc	ax
	jnz	palette_loop

;---------------------------------

	mov	si, x ; si - smaller than bp for integer fpu instructions
	xor	dx, dx
main_loop:

	inc	bp

;---rotate angle-------------------
	finit
	fld	dword [si-8]
	fadd	dword [si-4]
	fst	dword [si-8]
	fsincos

;---render background------------------
; 2 times slower
	test	bp, 10000000000b
	jz	.no_bg

	mov	di, si
	inc	di
	call	render
.no_bg:

;---blur1-------------------------------
	xor	di, di ;without xor di,di there are artefacts after second part
	xor	cx, cx
.blur:
	mov	al, [fs:di]
	add	al, [fs:di+1]
	adc	ah, 0
	add	al, [fs:di+320+1]
	adc	ah, 0
	add	al, [fs:di+320]
	adc	ah, 0
	shr	ax, 2
	jz	.nxt	;
	dec	al	;
.nxt:			;
	mov	[fs:di], al
	inc	di
	loop	.blur

;---render boxes------------------------

	mov	di, si
	call	render

;---draw buf-----------------------------
	mov	ch, 0ffh
	xor	di, di
draw:
	mov	ax, [fs:di]
	stosb
	loop	draw

;----------------------------------------

	;key Esc
	in	al, 60h
	dec	al
	jnz	main_loop

	ret


;---render boxes----------------------------
render:
; bx - x
; ax - y
; dx - z
; cl - color

	mov	al, 95
.y_loop:
	mov	bl, 95
.x_loop:
	mov	dl, 63

	mov	[si], bx     ; x
	sub	word [di], 47	 ;sub     word [si+1], 47 - background
	mov	[y], ax
	sub	word [si+2], 47

	;--- rotate x,y ---------
				; cos sin
	fild	word [si]	; x cos sin
	fild	word [si+2]	; y x cos sin
	fld	st1		; x y x cos sin
	fmul	st, st3 	; x*cos y x cos sin
	fld	st1		; y x*cos y x cos sin
	fmul	st, st5 	; y*sin x*cos y x cos sin
	fsubp			; x*cos-y*sin y x cos sin
	fistp	word [si]	; y x cos sin
	fmul	st, st2 	; y*cos x cos sin
	fxch	st1		; x y*cos cos sin
	fmul	st, st3 	; x*sin y*cos cos sin
	faddp			; y*cos+x*sin cos sin
	fistp	word [si+2]	; cos sin
	;------------------------

.z_loop:
	mov	cl, dl
	xor	cl, bl
	xor	cl, al

	;---put pixel--------
	; bx - x
	; ax - y
	; dx - z
	; cl - color
	pusha

	shr	bp, 1	; shr   bp, 2 - slower color changing
	xor	cx, bp
	and	cl, 00111111b

	cmp	cl, 32
	jb	.next

	shr	dx, 1
	mov	bp, dx

	mov	ax, [y]
	mov	bx, [si]

	add	ax, 65+47

	sub	ax, dx
	add	bx, dx
	add	bx, 100+47
	mov	dx, 320
	mul	dx
	add	ax, bx

	sub	cx, bp	; z-shading

	cmp	di, si
	je	.no_bg
	shr	cl, 1
.no_bg:

	xchg	ax, di
	mov	[fs:di], byte cl
.next:
	popa
	;------------------------------------

	dec	dl
	jnz	.z_loop

	dec	bl
	jnz	.x_loop

	dec	al
	jnz	.y_loop
	ret

a	dd	0.0	; -8
da	dd	0.01	; -4
x	dw	?	; si
y	dw	?	; +2

