;       Is it wrong to be half
;       by lord Kelvin
;
;       This intro has a kickass palette!


	org 0x100		; .COM file

	mov al,0x13		; \ 320 x 200 x 256 video mode
	int 0x10		; /
	lds bx,[bx]		; ds: - video memory, ds is default for di


	mov dx,0x3C9		; dx = palette-change port
pal:	mov al,cl		; \ al = abs( cl / 2 - 64 );
	shr al,1		; |
	sub al,64		; |
	jl bla			; |
	not al			; /
bla:	out dx,al		; \ R = G = B = al
	out dx,al		; |
	out dx,al		; /
	loop pal		; while( --cx );

here:	sub cx,bx		; \ x = ( x - y ) / 2;
	sar cx,1		; /
	add bx,cx		; y = ( x + y ) / 2;
	rdtsc			; \ if( random( 2 ) == 1 ) goto there;
	test al,4		; |
	je there		; /

	xchg bx,cx		; \ x = ( x + y + 127 ) / 2;
	neg bx			; | y = ( y - x + 127 ) / 2;
	add cx,64		; |
	add bx,64		; /

there:	imul di,bx,-320 	; \ di = ( x + 100 ) + 320 * ( y + 150 ) + 16 ( because of lds trick )
	add di,48100+16 	; |
	add di,cx		; /
	inc byte [di]		; Update current pixel

	in al,0x60		; \ Check input for <Esc>.
	dec ax			; does work, but it`s strange. rdtsc should have unzeroed ah.
	jnz here		; If not Esc - continue.

	ret			; Goodbye.