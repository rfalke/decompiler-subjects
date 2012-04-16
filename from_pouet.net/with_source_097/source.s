;Ripples.asm	18-Dec-2006		Boreal		loren_blaney@idcomm.com
;Soothing Ripples for the Hugi 64b Xmas Compo
;Assemble with: tasm /m; tlink /t
;Assumes VESA window granularity = 64K. (Some older, inferior displays use 4K.)

debug	equ	0
	.486
cseg	segment dword public use16 'code'
	assume	cs:cseg, ds:cseg, es:cseg, ss:cseg

;Register usage:
; ax = scratch
; bx = 111h, 0
; cx = X coordinate
; dx = video page (and high word of multiplies)
; si = Y coordinate
; di = video pointer
; bp = change factor
; es = A000h

	org	100h
start:	push	0A000h		;point to video memory
	pop	es

	mov	ax, 4F02h	;set VESA graphics to 640x480x16
	mov	bx, 0111h
	int	10h

@@10:	mov	dx, -1		;initialize to current video page
	xor	di, di		;set up video pointer
	mov	si, 480-1	;for Y:= 480-1 downto 0...
@@20:	mov	cx, 640-1	;for X:= 640-1 downto 0...

@@30:	test	di, di		;pointer = 0?
	jne	@@40		;skip if not
	 inc	dx		;else set up window for next page
	 mov	ax, 4F05h
	 xor	bx, bx		;bx = 0 = window A
	 int	10h
@@40:
	push	dx		;preserve video page
	mov	ax, cx		;X^2
	mul	cx		;(dx is destroyed)
	xchg	bx, ax		;save partial result in bx
	mov	ax, si		;Y^2
	mul	si		;(dx is destroyed)
	add	ax, bx		;+ partial result
	add	ax, bp		;+ change factor
;	and	ax, not 18h	;make red-greenish color

	shr	ax, 5


	stosw			;plot pixel;  es:[di++]:= ax
	pop	dx		;restore video page

	loop	@@30		;next X (cx--)

	dec	si		;next Y
	jns	@@20

	sub	bp, 127	;3364	;47		;adjust change factor with magic number

	if	debug
	mov	ah, 01h		;loop until keystroke
	int	16h
	je	@@10
	mov	ax, 0003h	;restore normal text mode
	int	10h
	ret
	endif

	jmp	@@10		;loop forever...

cseg	ends
	end	start
