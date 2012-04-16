; Intro "Half of the Melody", by lord Kelvin
;  06.01.07

	org 0x100		; .COM

	mov dx,0x331		; \ outp( 0x331, 0x3F );
	mov al,0x3F		; |
	out dx,al		; /
	dec dx			; dx = 0x330

here:	mov al,0x99		; \ outp( 0x330, 0x99 );
	out dx,al		; /
	mov ax,di		; \ outp( 0x330, ( ( i++ ) & 11 ) + 39 );
	inc di			; |
	and al,8+2+1		; |
	add al,39		; |
	out dx,al		; /
	mov al,0x7F		; \ outp( 0x330, 0x7À );
	out dx,al		; /

	xor ax,ax		; \ interactive delay
	int 0x16		; /

	in al,0x60		; \ if it was esc - break
	cmp al,1		; |
	jne here		; /
	ret			; return