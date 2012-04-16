;Yikes!.asm	18-Dec-2006	Boreal		loren_blaney@idcomm.com
;For the Hugi Xmas Compo
;Assemble with: tasm /m; tlink /t

	.486
cseg	segment dword public use16 'code'
	assume	cs:cseg, ds:cseg, es:cseg, ss:cseg
	;assume ah=0, bh=0, ch=0

	org	100h
start:	mov	al, 13h		;set 320x200x256 graphic mode
	int	10h

	les	di, [bx]	;es:= 9FC0h (close enough to A000h)
	mov	ds, bx


;Set up color registers with red, green and blue gradients
; blue	00h-1Dh
; varies 1Eh
; white	1Fh
; red	20h-3Fh and 40h-7Fh
; green	80h-BFh and C0h-FFh

	mov	al, 20h		;start right after bright white (=1Fh)
	mov	dx, 3C8h
	out	dx, al
	inc	dx

;(ax=20h, bx=0, cx=00FFh)
@@03:	out	dx, al		;red
	xchg	ax, bx		;get a zero
	out	dx, al		;green
	out	dx, al		;blue
	xchg	bx, ax
	inc	ax
	and	al, 7Fh		;switch from red to green at al=80h
	jne	@@05		;switch from green to blue second time
	 out	dx, al		;third time gives some blue up to 1Eh
@@05:	loop	@@03		;loop 255 times; cx--


@@10:	mov	dx, 200+4	;for all the lines, plus extras to hide glitches
@@20:	mov	cx, 320-1	; for all but one pixel on the line...
@@30:	mov	al, cl		;  plot an interesting color

	test	bl, 40h		;  alternate between 'or' and 'xor' patterns
	jne	@@33
	or	al, dl
	db	3Dh		;  skip 2 bytes
@@33:	xor	al, dl
	xor	al, bl

	stosb			;  es:[di++]:= al
	loop	@@30		; next pixel
	dec	dx		;next line
	jns	@@20		;loop until dx becomes negative (-1)

	mov	bl, ds:[46Ch]	;get change byte from system timer
	mov	di, bx		;set index into screen so image pans
	not	di		;scroll to the left instead of right
	jmp	@@10		;loop forever...

cseg	ends
	end	start
