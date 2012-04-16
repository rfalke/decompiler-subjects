; Put `%if 0' for another pattern
%if 1
%define SCALE	34	; and al,[bx+si]
%define DELTA	256
%else
%define SCALE	26	; sbb al,[bx+si]
%define DELTA	128
%define OFFSET	58
%endif

	org	100h

	dw	SCALE	; data needed below

	mov	bh, 0fah	; Point BX/DI to off-screen area and
	mov	di, bx		; to begin of sine table

; Note: we overwrite the stack and the first two PSP
; bytes.  This means as well that interrupts might
; overwrite the sine table.  However the table is
; oversized and the overwritten area is not used.

	fninit
	fldz
sine:				; Construct a sine table
	fldpi			; PI
	fidiv	word [byte si+delta-$$]	; PI/DELTA
	fld	st1		; angle PI/DELTA
	fsin			; angle PI/DELTA sin(angle)
	fimul	word [si]	; angle PI/DELTA sin(angle)*SCALE
%ifdef OFFSET
	fiadd	word [byte si+offset-$$]	; angle PI/DELTA sin(angle)*SCALE+OFFSET
%else
	fiadd	word [si]	; angle PI/DELTA (sin(angle)+1)*SCALE
	fiadd	word [si]	; angle PI/DELTA (sin(angle)+2)*SCALE
%endif
	fistp	word [di]	; angle PI/DELTA
	faddp	st1,st0 	; newangle
	inc	di
	jnz	sine

	mov	al, 13h	; Set 320x200x256
	int	10h

	push	word 0a000h	; ES points to VRAM
	pop	es

frame:
	inc	ax		; Adjust AL for next frame
	pusha
line:
	mov	si, ax		; Save AX
	xlatb			; Compute sin(AL) = sin (y + t)
	mov	ah, bh		; Add base of sine table
	xchg	si, ax		; Put it in SI, get back old AX
	inc	ax		; Adjust for next line

	mov	cl, 160
	rep	movsw		; Draw sin (x + sin (y + t))
	cmp	di, bx		; Done 200 lines?
	jb	line		; No, go on
	
	popa
	jmp	short frame

delta:
	dw	DELTA
	
%ifdef OFFSET
offset:
	dw	OFFSET
%else
	db	'64'			; how cool! :-)
%endif

