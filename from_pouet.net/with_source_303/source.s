
	org $100

xspacing	equ	16		; pixels between each alien
yspacing equ 8		; pixels between each alien line
lines	equ	20		; number of alien lines on screen

;%define showcols

;%define	delay	15
; slow down game this much (5 bytes) define properretrace as well

;%define	canexit
; make it possible to exit the game with the right mouse button (5 bytes)

;%define	properretrace
; wait for retrace to finish before waiting for it to begin (5 bytes)

;%define	textmode
; restore text mode on exit (5 bytes)

%macro setcol 3
%ifdef showcols
	pusha
	pushf
	mov		ah,%1
	mov		bx,(%2 << 8) | (%3)
	call	setcolfunc
	popf
	popa
%endif
%endmacro

begin:

;	assume ah=0
	mov     al,$13
	int     10h				; set graphics mode

	mov		al,7
;	assume CX = 0 (left edge)
	xor		cx,cx
	mov		dx,255			; DX = right edge of screen
	int		33h				; set mouse boundary

init:
; initialize work data and aliens
	mov		di,bss
	xor		ax,ax
	mov		cl,8 + (lastline-bss)/2			;7 empty alien lines + "lastline"
	rep stosw
	mov		cl,lines-6
	mov		ax,$07fe		; alien formation
	rep	stosw

	; aliens begin with moving right and are expected to hit the right edge
	mov		bx,$0102

;;;;;;;;;;;;;;;;;; THE MAIN LOOP

mainloop:
	setcol	30,30,30

	pusha

;;;;;;;;;;;;;;;;;;;;;;;;;;;;

%ifdef	delay
	mov		cx,delay
%endif
extrawait:
	mov		dx,$3da
%ifdef properretrace
wait2:							; wait until retrace ends
	in		al,dx
	and		ax,byte 8
	jnz		wait2
%endif
wait1:							; wait for retrace
	in		al,dx
	and		ax,byte 8
	jz		wait1
%ifdef delay
	loop	extrawait
%endif

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; copy back buffer to screen
	push	ds					; save DS, will be popped into ES below
	push	word 0a002h			; screen segment + 32 pixels
	pop		es

;	mov		cx,320*200/2
	mov		ch,(320*200/2)>>8 ; if CL is not zero, we may copy up to 510 bytes too much
	mov		si,screen
	xor		di,di

	xor		bx,bx			; BX = screen background colour
copyloop:
	lodsw
	stosw					; copy back buffer to screen
	mov		[si-2],bx		; clear back buffer
	loop	copyloop
	pop		es				; set ES to DS
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;;;;;;;;;; DRAW BULLETS

	mov		di,screen + 320*12
	mov		si,bulletx+lines			; SI = pointer to bullet pos
	mov		cl,lines			;assume CH=0

.bulletloop:
	mov		[si],al
	dec		si
;	xor		bx,bx				; BH should already be zero
	mov		bl,[si]
	mov		[si+1],bl
	test	bl,bl
	jz		.nobull
;	mov		byte [di+bx],3
	inc		byte [di+bx]
.nobull:
	add		di,320*yspacing
	loop	.bulletloop

;	AH assumed to be zero
	mov		al,3				; read mouse status
	int		33h					; CX = ship position

%ifdef	canexit
	test	bl,2
	jz		.noexit
	jmp		popandexit
.noexit:
%endif

;	BL contains the state of the mouse buttons. Any change of this state will fire a bullet.
;	Note that this will fire when a button is released as well as when it's pressed.

	mov		bh,bl
	xchg	bh,[lastfire]		; store last button state
	xor		bl,bh
	jz		nonewbull			; same button state as last time
	mov		bl,cl				; new bullet position = ship position
nonewbull:
	mov		[si],bl				; store bullet position

	add		di,cx
	sub		di,byte 4
;			    --------        --------        -
	mov		ebx,01111110001111000001100000011000b		;the spaceship sprite
	call	drawsprite

	popa

;;;;;;;;; HERE BEGINS THE ALIEN PART !
; registers:
;	AH =
;	AL =
;	BH = direction the aliens are moving: 1 or -1
;	BL = next edge to hit: 1 for left edge, 2 for right edge
;	CH = all alien rows OR:ed together, rotated 1 step right (used for edge collision detection)
;	CL = 0, 1 or 15 depending on if and in what direction alien bits are shifted
;	DH = 15, used for masking
;	DL = horizontal offset, 0-15 pixels
;	BP = pointer to where in the screen buffer to draw the current alien
;	SI = points to the current line of alien bits
;	DI = same as SI unless aliens are moving down one line (then it's SI-2)

	mov		si,lastline
	lodsw
	push	ax					; save first alien line, should be 0 or earth has been conquered
	mov		di,si
	xor		cl,cl				; CL = shift value

	mov		dh,15
	add		dl,bh
	test	dl,$00f0			; check if DL is negative or greater than 15
	jz		noshift				; DL hasn't wrapped: it's not time to shift the aliens

	setcol	63,0,0

	mov		cl,bh
	and		cl,dh				; I don't know why this AND is necessary, I thought ROR ignores all but the 4 lowest bits

	and		ch,bl				; check if current edge was hit
	jz		nohitedge

	; an alien has hit the left or right edge
	setcol	63,63,63

	mov		bl,ch				; save this hit, so it doesn't happen again
	xor		bl,3

	sub		dl,bh				; move the aliens one pixel back

	neg		bh					; change direction
	dec		di					; move aliens down one line
	dec		di
	xor		cl,cl				; no shift this time
nohitedge:
	and		dl,dh				; DH=15
noshift:
	mov		bp,screen - xspacing + 320*yspacing*lines
	add		bp,dx
	; this add moves the aliens 0-15 pixels to the right
	; and 12 pixels down (because DH contains 15, so (DH<<8)/320 = 12)

	push	bx
	mov		bx,bulletx
	push	dx
	xor		dx,dx		; in the following loop, DX is or:ed with all alien lines
drawloop:
	lodsw						; get this line of aliens
	ror		ax,cl				; shift bits right or left or not at all
	xchg	cx,[bx]				; get position of bullet on this line

	push	cx
	sub		cl,8
	jb		nobull				; no bullet here
	not		cl
	shr		cl,4
	btr		ax,cx				; kill alien
nobull:
	pop		cx
	jnc		nohit				; no alien hit
	xor		cl,cl
nohit:
	xchg	cx,[bx]				; restore CL

	or		dx,ax
	stosw						; store the possibly altered line

	pusha
	mov		dx,ax

; DRAW ALIENS
;  bp = screen address minus xspacing
;  dx = alien bits, a set bit is an alien
	push	bp
	stc					; insert a set bit (the "end" bit) into DX (ADC below)
drawalienloop:
	pop		di
bitlp:
	lea		di,[di+xspacing]		; lea because it doesn't affect the carry flag
	adc		dx,dx
	jnc		bitlp				; loop until set bit found
	jz		enddraw				; this was the "end" bit

	push	di
;			    --------        --------        -
	mov		ebx,01100110111111111001100101111110b
	call	drawsprite

;	or		dx,dx		;clear carry flag (done by drawsprite)
	jmp		short drawalienloop

enddraw:
	popa

	sub		bp,(320*yspacing)			; next row above

	inc		bl
	jnz		drawloop			; bulletx ends on a 256 byte boundary

	rol		dx,1
	test	dx,dx
	mov		ch,dl
	pop		dx
	pop		bx
	pop		ax					; get first alien line

	jz		madeit				; all aliens seem to be dead

	stosw						; clear highest alien line

	test	ax,ax
	jnz		gameover
	jmp		mainloop

madeit:
	jmp		init
gameover:
%ifdef	textmode
	mov		ax,3		; text mode
	int		$10			; 5 bytes
%endif
aret:
	ret

drawsprite:
byteloop:
	mov		cx,8
bitloop:
	shr		ebx,1
	setc	al
	stosb
	loop	bitloop
	add		di,320-8
	and		bx,bx
	jnz		byteloop
	ret

%ifdef	canexit
popandexit:
	popa
	ret
%endif

%ifdef showcols
setcolfunc:
	mov		dx,$03c8
	xor		al,al			; palette index
	out		dx,al
	inc		dx

	mov		al,ah
	out		dx,al
	mov		al,bh
	out		dx,al
	mov		al,bl
	out		dx,al
	ret
%endif

lastfire:

bsspage	equ	3
bss		equ bsspage*256		; work data starts at this offset

bulletx		equ (bsspage+1)*256 - lines
lastline	equ	bulletx+lines+2
alienbits	equ	lastline+2
screen		equ lines*2 + alienbits + 2
xxxxxx		equ screen+320*200+512

