;RRXing.asm	14-Dec-2006		Boreal		loren_blaney@idcomm.com
;Train Toy for the Hugi 64b Compo
;Assumes 80-column display
;Assemble with: tasm /m; tlink /t

debug	equ	0
	.486
cseg	segment dword public use16 'code'
	assume	cs:cseg, ds:cseg, es:cseg, ss:cseg
	;assume ah=0, bh=0, ch=0, si=0100h

	org	100h
start:	mov	al, 12h		;640x480 graphics (forces WinXP into full-
	int	10h		; screen mode and eliminates flashing cursor)

	push	35h		;to access BIOS cursor and system timer
	pop	es

@@00:	cwd			;dx:= 0; (ah<80h)
	mov	es:[si], si	;cursor(0,1); [0350h+0100h]:= 0100h
	mov	di, offset car	;point to RR car image

	mov	bl, es:[si+46Ch-350h-100h] ;get system ticks
	shr	bl, 1		;divide them by two to slow things down
@@10:	mov	cl, 10*8	;10 cars per line times 8 characters per car

@@20:	and	bl, 07h		;index modulo 8
	mov	al, [bx+di]	;fetch character from car table
	inc	bx		;next car character
	int	29h		;output car character
	loop	@@20		;loop for 10 cars of 8 characters each

	add	di, 8		;next line of characters
	inc	dx		;execute loop 3 times (dx= 1, 2, 3)
	jnp	@@10		;loop if parity is odd (loop on dx = 1 and 2)

	if	debug
	mov	ah, 01h		;loop until keystroke
	int	16h
	je	@@00
	mov	ax, 0003h	;restore normal text mode
	int	10h
	ret
	endif

	jmp	@@00		;loop forever...

car	db	'_______ '
	db	'ÛÛÛ±ÛÛÛ '
	db	'øø   øø~'

cseg	ends
	end	start
