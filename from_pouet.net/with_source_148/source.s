; Coded by Frederic Condolo
; fcondolo@yahoo.com
;
; Compiled with nasmw (nasmw Interference.asm -s -t -O0 -oInterference.com)

[org 100h]
[segment .text]


; CIRCLE CENTER STRUCTURE
OFFSET			equ 0						; angle input for cosinus & sinus
X_SCREEN		equ 2						; computed screen x coordinate
Y_SCREEN		equ 4						; computed screen y coordinate
STRUCT_SIZE		equ 6						; size of circle center structure

CIRCLE_COUNT		equ 2					; circles count in scene

DATA

START
	fild	word	[TRIGO]					; st0 = scale to convert sinc / cos into screen space
	mov				al,13h
	int				10h						; initialize video mode
TRIGO

	push	word	0A000h					; copy video segment to es
	pop				es


	mov				al,255
PALETTE_LOOP								; For each color
	mov				dx,3C8h					; Palette register
	out				dx,al					; Color index
	inc				dx

	out				dx,al					; Set red
	push ax
	shr				ax,2
	out				dx,al					; Set green
	out				dx,al					; Set blue
	pop ax	
	dec				ax
	jnz short		PALETTE_LOOP

	
MAIN_LOOP	

	; STEP 1: UPDATE CIRCLES POSITION
	mov				si, DATA
	mov				cl, CIRCLE_COUNT
	
UPD_CIRCLES_LOOP

	
	fild	word	[si + OFFSET]		; st0 = ofs, st1=SCALE
	fsqrt								; kind of degree to radian conversion
	fsincos								; st0 = sin(ofs), st1 = cos(ofs), st2=SCALE

	fmul			st0,st2				; scaling to screen coord
	fadd			st0,st2				; avoid negative coord
	fistp	word	[si + Y_SCREEN]		; store Y. st0 = cos(ofs), st1 = SCALE
	
	fmul			st0,st1				; scaling to screen coord
	fadd			st0,st1				; avoid negative coord
	fistp	word	[si + X_SCREEN]		; store X. st0=SCRX, st1 = SCALE


	add		word	[si + OFFSET], cx	; increment angle input for next frame
	add				si, STRUCT_SIZE		; go to next circle
	
	loop			UPD_CIRCLES_LOOP


	; STEP 2: RENDERING LOOP
	xor				di, di
	mov				bp,200

Y_LOOP
	mov				bx, 320				; Set X to 320
	
X_LOOP

	mov				cx, CIRCLE_COUNT
	mov				si, DATA

SCAN_CIRCLES_LOOP
	add				si, 2				; skip offset data (only used to calculate screen coords)
	lodsw								; retrieve screen X
	sub				ax, bx				; compute delta X
	mul				ax					; square delta x
	push			ax					; save delta X on stack

	lodsw								; retrieve screen Y
	sub				ax, bp				; compute delta Y
	mul				ax					; square delta Y
	
	pop				dx					; Get back delta X
	add				ax, dx				; edx = delta X * delta X + delta Y * delta Y = distance from current pixel to the center of the current circle
	xor				ch, ah				; combine with the results from the other cirlces at the same pixel

	dec				cl					; go to next circle
	jnz near		SCAN_CIRCLES_LOOP

	mov al,ch
	stosb

	dec				bx					; X loop counter
	jnz				X_LOOP
	
	dec				bp					; Y loop counter
	jnz				Y_LOOP

	xor				cx,cx

	in	al,60h
	dec	al
	jnz	near MAIN_LOOP
	ret


