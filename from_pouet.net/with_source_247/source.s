; -----------------------------------------
; The 256 bytes cracktro (final version)
; Written by hitchhikr/Neural
; -----------------------------------------
; Oldschool is becoming a lame excuse to release
; shit and dashed off stuff and certainly not
; a hideout for talentlessness.
; It's also about the insane size of certain cracktros.
; -----------------------------------------
; buildblock RELEASE
; CAPT "c:\nasm\nasmw.exe" -f bin "%2" -o "%1.com" -s -O9
; buildblockend

; -----------------------------------------
LARG_SCROLL	equ	(320 + 16)
LONG_SCROLL	equ	16
NBR_STARS	equ	200

; -----------------------------------------
		bits	16
		org	0x100

; -----------------------------------------
start:		mov	al, 0x13
		int	0x10

Main_Loop:     	; -----------------------------------------
		; Wait the sync
		mov	dx, 0x3da
Wait_Loop:	in	al, dx
		test	al, 8
		jz	Wait_Loop

		; -----------------------------------------
		; Scrolltext
		push	0x5000			; Scroll buffer
		pop	es

		mov	bx, Pause_Scroll

		inc	byte [bx]
		and	byte [bx], 0xf
		jnz	Next_Letter

		mov	si, PtrScrollText
		inc	word [si]
		cmp	word [si], si
		jne	Reset_Scroll
		sub	word [si], fScrollText - ScrollText
Reset_Scroll:
		mov	di, LARG_SCROLL - 16
		mov	si, [si]
		movzx	si, byte [si]
		shl	si, 3
		add	si, 0xfa6e
		push	0xf000			; Font
		pop	ds

		mov	dx, 8
Create_Char_Y:	mov	cl, 8
Create_Char_X:	bt	[si], cx
		setc	al
		mov	ah, al
		mov	[es:di + LARG_SCROLL], ax
		stosw
		loop	Create_Char_X
		inc	si
		add	di, (LARG_SCROLL * 2) - (2 * 8)
		dec	dx
		jnz	Create_Char_Y
Next_Letter:
		; -----------------------------------------
		dec	dword [bx - (Pause_Scroll - Pos_Bar_Sin)]

		push	es		; Scroll buffer as source
		pop	ds

		; Scroll the text
		xor	si, si
		lea	di, [si - 1]
		mov	cx, (LARG_SCROLL * LONG_SCROLL)
		rep	movsb

		; -----------------------------------------
		; Clear the background
		push	0x6000		; Video buffer as dest
		pop	es

		xor	di, di
		xor	ax, ax
		mov	cx, (320 * 200)
		rep	stosb

		; -----------------------------------------
		; Make the sine
		xor	si, si
		mov	di, 320 * 93
		mov	dx, LONG_SCROLL
Make_Sin_Y:	mov	cx, 320
		fild	dword [cs:bx - (Pause_Scroll - Pos_Bar_Sin)]
Make_Sin_X:	fld	st0
		fidiv	word [cs:bx - (Pause_Scroll - Max_Bar)]
		fcos
		fimul	word [cs:bx - (Pause_Scroll - Max_Bar)]
		fistp	word [cs:bx - (Pause_Scroll - iTemp_Value)]
		imul	ax, [cs:bx - (Pause_Scroll - iTemp_Value)], 320
		add	di, ax
		movsb
		fld1
		faddp	st1, st0
		sub	di, ax
		loop	Make_Sin_X
		add	si, (LARG_SCROLL - 320)
		fstp	st0
		dec	dx
		jnz	Make_Sin_Y

		; -----------------------------------------
		; Starfield
		mov	cl, NBR_STARS
Display_Stars:	and	dx, 3
		inc	dx
		add	[si], dx
		lodsw
		add	ax, bx
		mov	di, ax
		mov	al, 10
		add	al, dl
		add	al, al
		stosb
		inc	bx
		inc	bx
		rol	bx, 2
		loop	Display_Stars

		; -----------------------------------------
		; Clear the background
		push	es
		pop	ds
		push	0xa000		; Video buffer as dest
		pop	es
		xor	si, si
		xor	di, di
		mov	cx, (320 * 200) / 2
		rep	movsw

		push	cs
		pop	ds

		in	al, 0x60
        	dec	al
		jnz	Main_Loop
		;mov	al,3
		;int	0x10
		ret

; -----------------------------------------
ScrollText:	db	" "
		; ----
		db	"OLDSKOOL IS A LAME EXCUSE -"
		; ----
fScrollText:
PtrScrollText:	dw	ScrollText

Max_Bar:	dw	90

iTemp_Value:
Pos_Bar_Sin:	equ	iTemp_Value + 2
Pause_Scroll:	equ	Pos_Bar_Sin + 4
Pos_Stars:	equ	Pause_Scroll + 0x3000
