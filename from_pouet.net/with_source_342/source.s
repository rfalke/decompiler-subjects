comment		%
   Greetings to everybody, this is Kyknos typing some words to describe
   what the situation is. Now it's 11:00 in the morning. Last night I
   made the decision to stop studing "Data structures", which I take in
   three days, and make something good for you out there. Well, I don't
   know if it is for you; it probably is for me, but anyway, you can 
   also gain something from this proggy.
     Plans : A .com file smaller than 1Kb with a wavy shaddowed Greek
   flag, a scroller at the bottom. (Maybe I'll put an FM soundtrack of
   our e0nikos umnos (how's it in English ?) in a few days, but then
   it will grow to 2Kb) Challenging eh ?
     I decided to give ya the code, as all great coders of famous groups
   do. That's at least something I can do as good as them.  ;-)
     I don't expect you to learn anything new from it, nor I'm helful enough
   as I have so few  comments inside. Sorry 'bout that. Won't happen again.
   Just count on the labels. Anyway, I could never read anyone else's code
   and understand.
     Hmm, and something else... Don't just change the text, and say it is
   yours, cause this is not a good behavior, ok ?
     This code, has n't been tested on any other machine but mine. I have
   a very slow VGA card. So you might just have a very fast flag on screen.
   If you want to slow it down, tasm-it, and tlink-it again after changing
   the WaveSpeed equation to something smaller.
      I would appreciate any comments, suggestions, etc etc. (congratulations
   accepted too !) IN CASE SOMETHING DOES N'T WORK, PLEASE LET ME KNOW !
   Best way to contact me is via e-mail at the following address
   kyknos@socrates.ceid.upatras.gr,             but I beleive that few of you
   may have an Internet acount. So you can also use the home address of mine
   (which will change probably after summer '95)
   Maroulis Chrysanthos	(ãò®¶Á¢û™ ï®Á©ò§ü¶™)
   Norman 52		(åÊ®£ò§ 52)
   Patras		(èò´®ò)
   ã'ò®‚©ú† ß¶¨ ´Ê©û È®ò ö®·≠‡ ©´ò Äöö¢†°·, ¢ú™ °ò† üò ≠´·©ú† ò¨´Ê ´¶ ß®·£ò
   ß¶´‚ ‚•‡ òßÊ ´û§ è·´®ò, ´ú¢¶™ ß·§´‡§.
          Enjoy coding, love, life  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
   		%

		.386
		
ShadePlatos	=	22		; (0..32)
WavePlatos	=	8
WaveSpeed	=	6		; (-128 to 127)		
TextSpeed	=	2		; (1, 2, 4, 8)
Code		segment	public	'CODE'	use16
		assume	cs:Code, ds:Code, es:Code
		org	0100h
Entry:		call	ClearVars		; zero the run time data
		call	MakeFlag		; extract the bitmap to bytes
		call	ModeX			; enter tweaked mode
		call	SetPal			; fix palette, as you wish
MainLoop:	call	ClearPage		; clear working page
		call	CalcFlag		; Make the wave, and the shades
		call	DrawFlag		; put it on
		call	CalcScroller
		call	DrawScroller
		call	SwapVWOffset		; make it visible
		in	al, 60h			; get key
		cmp	al, 1			; if not ESC
		jnz	MainLoop		; then loop back
		
		mov	ax, 0003h		; text mode
		int	10h			; (how complicated eh ?)
		int	20h			; what the hell is this ?

ClearVars	proc	near
; Nulls the memory used for my runtime variables
		mov	di, offset RunTimeData
		mov	cx, (offset EndOfData) - (offset RunTimeData) + 1
		xor	ax, ax
		repz	stosb
		mov	fs, ax
		ret
ClearVars	endp

ModeX		proc	near
; Enters Mode X (320x200x256) with two big pages (512x256)
		mov	al, 13h
		int	10h
		mov	dx, 03C8h
		xor	al, al
		out	dx, al
		inc	dx
		mov	cx, 768
		out	dx, al
		loop	$ - 1
						; No, I have n't found this
		mov	dl, 0C4h		; on my own. 
		mov	ax, 0604h		; Chain mode off
		out	dx, ax
		mov	dl, 0D4h		; double word off
		mov	ax, 0014h
		out	dx, ax
		mov	ax, 0E317h		; byte mode on
		out	dx, ax
		mov	ax, 4013h		; line length=40h words
		out	dx, ax			; (512 pixels)
						; offset = y * 128 + x / 4
						; pretty easy calculations e?
		
		mov	dl, 0C4h		; write to all planes
		mov	ax, 0F02h
		out	dx, ax
		
		push	0A000h
		pop	es
		xor	di, di
		mov	cx, 16384
		xor	eax, eax
		repz	stosd			; and clear whole video ram
		
		mov	ax, 0			; set visual page
		call	SetVoffset
		mov	Woffset, 32768		; set working page
		ret
ModeX		endp
		
SetVOffset	proc	near
; Selects the offset, where the visible screen begins from.
		mov	Voffset, ax
		mov	dx, 03DAh
		in	al, dx
		test	al, 08
		jz	$ - 3
		in	al, dx
		test	al, 08
		jnz	$ - 3
		
		cli
		mov	dl, 0D4h
		mov	al, 0Ch
		out	dx, ax
		inc	ax
		mov	ah, byte ptr Voffset[0]
		out	dx, ax
		sti
		mov	dl, 0DAh
		
		in	al, dx
		test	al, 08
		jz	$ - 3
		
		ret
SetVOffset	endp
		
SwapVWOffset	proc	near
; Exchanges the visual with the working screen
		mov	ax, VOffset
		xchg	ax, Woffset
		call	SetVOffset
		ret
SwapVWOffset	endp

ClearPage	proc	near
; Clear the working page (in fact for speed, clears the 320x200 view of
; the actual 512 * 256 page. If you scrolled around, you should clear it all.
; (just one repz movsd)
		xor	ch, ch
		mov	dx, 03C4h
		mov	ax, 0F02h
		out	dx, ax
		mov	di, WOffset
		mov	dl, 200
AllLines:	mov	cl, 80 / 4
		xor	eax, eax
		repz	stosd
		add	di, 128 - 80
		dec	dl
		jnz	AllLines
		ret
ClearPage	endp

SetPal		proc	near
; Prepares the palette to be used...   0- 63 shades of white low to high
;				      64-127 shades of blue
;					     ( Ti galanoleukh 0a htan ?)
		mov	dx, 03C8h
		xor	ax, ax
		xor	bx, bx
		out	dx, al
		inc	dx
		mov	cx, 64
WhiteL:		call	SetOnePal
		add	bx, 0101h
		inc	ah
		loop	WhiteL
		xor	ah, ah
		xor	bx, bx
		mov	cx, 64
BlueL:		call	SetOnePal
		inc	bl
		loop	BlueL
		ret
SetPal		endp

SetOnePal	proc	near		; mpourda, wste na glytwsw
		mov	al, ah		; telika mono dyo bytes. Twra to
		out	dx, al		; egrapsa, omws. Na to sbhsw ?
		mov	al, bh
		out	dx, al
		mov	al, bl
		out	dx, al
		ret
SetOnePal	endp
		
		
		
CalcFlag	proc	near
; Ypologizei ton kymatismo ths shmaias. Ops sorry, in English please.
; Calculates the sinus wave of the flag. Starts from Angle1 and continues.
; Each time calculates a y-distance from the actual line to be added at
; draw time. (Multiplied epi 128, since each line is 128 bytes long)
		add	StartAngle1, WaveSpeed
		and	StartAngle1, 127
		mov	bx, StartAngle1

		mov	di, offset FlagOffsets
		mov	cx, 128
FillLoop:	movsx	ax, Sinus[bx]
		imul	ax, WavePlatos		; maximum, and -minimum dist.
		shr	ax, 7			; correction, cause the way
		cbw				; sinuses are stored in mem.
		shl	ax, 7
		mov	[di], ax		; store it
		add	di, 2			; next distance
		inc	bx			; next angle
		and	bx, 127			; Circle is divided in 128
		loop	FillLoop		; slices. 1 slice is about
						; (360/128)¯ degrees

		mov	bx, StartAngle1		; now about the shading
		add	bx, 32			; When the flag rises
		and	bx, 127			; the colour rises and the
						; oposite. So if you know
						; some Analysis, all we have
						; to do is take the dy/dx
						; of the function y=sin(x)
						; (dsin(x)/dx = cos(x) right?)
						; and since in my system
						; cosx=sin(x+32) thats why
						; I did this one.
		
		mov	di, offset FlagShades
		mov	cl, 128
ShadeLoop:	movsx	ax, Sinus[bx]
		imul	ax, ShadePlatos
		shr	ax, 7
		cbw
		mov	[di], al
		inc	di
		inc	bx
		and	bx, 127
		loop	ShadeLoop
		
		ret
CalcFlag	endp


DrawFlag	proc	near
; Puts the flag, changed by the previus calculations to the working page
		mov	di, WOffset
		add	di, 128 * 20 + 96 / 4		; x, y = 96, 20
		mov	ah, 0001b
		mov	bp, 4			; for the 4 bitplanes (bp !)
		mov	si, offset FlagBytes	; where to take data from
		
		mov	bx, 0			; where to take distances
						; and shadings from
		
BitPlanes:	push	bx si di
		mov	al, 02h
		mov	dx, 03C4h		; select bit plane (in ah)
		out	dx, ax
		mov	cx, 128 / 4		; flag is 128 pixels wide
DrawHor:	push	cx
		push	si di bx
		add	di, FlagOffsets[bx]	; sinus paramorfosis. ()

		shr	bx, 1			; shade is stored in bytes
		mov	dl, FlagShades[bx]	; get it in dl
		shl	bx, 1			; and restore bx(always artios)
		
		mov	cx, 8 * 9		; flag is 72 pixels high
DrawVert:	lodsb				; get pixel
		add	al, dl			; shade it
		stosb				; put it
		add	di, 128 - 1		; next line (so no bitplane change)
		loop	DrawVert
		pop	bx di si
		add	si, 4 * 8 * 9		; next fourth column
		add	bx, 4 * 2		; and fourth sinus distance
		inc	di			; next byte = next forth pixel
		pop	cx			; (when bitplane is the same)
		loop	DrawHor
		pop	di si bx
		add	bx, 2			; next word
		shl	ah, 1			; next bitplane
		dec	bp			; until they are all done
		jnz	BitPlanes
		
		ret				; few
DrawFlag	endp		

DrawScroller	proc	near
; Now I want go in detail, cause it's pretty simple and boring.
; We have a buffer of 328x8 pixels, and we store it on the working page
; Works as above, but without shading and "sinusing"
		mov	si, offset Scroller
		mov	dx, 03C4h
		mov	ax, 0102h
		out	dx, ax
		mov	di, 170 * 128
		add	di, WOffset
		mov	bp, 4
FourPlanes:	push	di
		push	si
		mov	cx, 8
EightLines:	push	cx		
		mov	cx, 328 / 4
OneLine:	movsb
		add	si, 3
		loop	OneLine
		add	di, 128 - 328 / 4
		pop	cx
		loop	EightLines
		pop	si
		pop	di
		shl	ah, 1
		out	dx, ax
		inc	si
		dec	bp
		jnz	FourPlanes
		ret
DrawScroller	endp

CalcScroller	proc	near
; Scrolls the buffer of the text, TextSpeed pixels left, and if it's time
; brings the next char. Font is taken from BIOS. No more comments cause
; I must hurry. The BBS is off in an hour and I want to upload it today.
		push	cs
		pop	es
		mov	di, offset Scroller
		lea	si, word ptr [di + TextSpeed]
		mov	cx, 328 * 8
		repz	movsb

		dec	CharCount
		jz	NextChar
		
		push	0A000h
		pop	es
		ret
NextChar:	mov	CharCount, 8 / TextSpeed
		mov	bx, CharOffs
		movzx	bx, MyText[bx]
		shl	bx, 3
		lgs	ax, dword ptr fs:[4 * 43h]
		add	bx, ax
		mov	di, offset Scroller + 320
		
		mov	cx, 8
EightLin:	mov	dx, 7
BitLoop:	bt	word ptr gs:[bx], dx		
		setc	al
		shl	al, 5
		stosb
		dec	dx
		jns	BitLoop
		add	di, 328 - 8
		inc	bx
		loop	EightLin

		inc	CharOffs
		cmp	CharOffs, TextLength
		jbe	NoZeroOffs
		mov	CharOffs, 0
NoZeroOffs:
		push	0A000h
		pop	es
		ret
CalcScroller	endp
		
		
		
		


MakeFlag	proc	near
; Ok. One more comment. This one extracts the flag from the BITmap
; and makes it bigger, stored in bytes.
		mov	di, offset FlagBytes
		mov	bp, 32 * 4
Xloop:		mov	cx, 9 * 8
Yloop:		push	cx
		mov	bx, cx
		dec	bx
		shr	bx, 3
		sub	bx, 8
		neg	bx
		shl	bx, 2
		mov	cx, bp
		dec	cx
		shr	cx, 2
		sub	cx, 31
		neg	cx
		mov	edx, 80000000h
		shr	edx, cl
		test	dword ptr Flag[bx], edx
		sete	al
		xor	al, 1
		shl	al, 6
		add	al, 63 - ShadePlatos
		stosb
		pop	cx
		loop	YLoop
		dec	bp
		jnz	Xloop
		ret
MakeFlag	endp

; --------------------------------- STATIC DATA -----------------------------
; 0 = white,  1= blue
Flag		dd	11110011111111111111111111111111b
		dd	11110011110000000000000000000000b
		dd	00000000001111111111111111111111b
		dd	11110011110000000000000000000000b
		dd	11110011111111111111111111111111b
		dd	00000000000000000000000000000000b
		dd	11111111111111111111111111111111b
		dd	00000000000000000000000000000000b
		dd	11111111111111111111111111111111b
		dd	00000000000000000000000000000000b
		dd	11111111111111111111111111111111b
		dd	00000000000000000000000000000000b
		dd	11111111111111111111111111111111b
		
		; Do not follow to the temptation of changing this staff
		; or if you do, don't start uploading it around.
		
MyText		db	'Hey ! This is my first 1K intro. '
		db	'Do you like it ? Watch the shaddows.'
		db	'It took me 7 hours'
		db	' to finish it. :-( I hope I''ll do'
		db	' better next time. Greetings, Kyknos.....   '
TextLength 	equ	$ - MyText - 1

CharCount	dw	8 / TextSpeed		; counter. When zeroed-next one

Sinus		label	byte
; Created by MAKESIN.BAS, and merged in here.
db		 0 , 6 , 13 , 19 , 25 , 31 , 37 , 43 , 49 , 55 
db		 60 , 66 , 71 , 76 , 81 , 86 , 91 , 95 , 99 , 103 
db		 106 , 110 , 113 , 116 , 118 , 121 , 122 , 124 , 126 , 127 
db		 127 , 127 , 127 , 127 , 127 , 127 , 126 , 124 , 122 , 121 
db		 118 , 116 , 113 , 110 , 106 , 103 , 99 , 95 , 91 , 86 
db		 81 , 76 , 71 , 66 , 60 , 55 , 49 , 43 , 37 , 31 
db		 25 , 19 , 13 , 6 , 0 ,-6 ,-13 ,-19 ,-25 ,-31 
db		-37 ,-43 ,-49 ,-55 ,-60 ,-66 ,-71 ,-76 ,-81 ,-86 
db		-91 ,-95 ,-99 ,-103 ,-106 ,-110 ,-113 ,-116 ,-118 ,-121 
db		-122 ,-124 ,-126 ,-127 ,-127 ,-128 ,-128 ,-128 ,-127 ,-127 
db		-126 ,-124 ,-122 ,-121 ,-118 ,-116 ,-113 ,-110 ,-106 ,-103 
db		-99 ,-95 ,-91 ,-86 ,-81 ,-76 ,-71 ,-66 ,-60 ,-55 
db		-49 ,-43 ,-37 ,-31 ,-25 ,-19 ,-13 ,-6 


db		'(íÑäéë)'
; --------------------------------- DYNAMIC DATA ----------------------------

RunTimeData	label	byte

WOffset		dw	?
VOffset		dw	?
StartAngle1	dw	?
CharOffs	dw	?
FlagOffsets	dw	128 DUP (?)
FlagShades	db	128 DUP (?)
FlagBytes	db	128 * 8 * 9 DUP (?)
Scroller	db	328 * 8 DUP (?)


EndOfData	label	byte


Code		ends
		end	Entry

						; ãú òö·ßû, âÁ°§¶™. 