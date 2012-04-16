;	aero grimo
;	by lord Kelvin

	org 0x100	; 0b ; .COM

max equ 32		; 0b ; Width of bar

	nop		; 1b ; Nice start.
	mov al,0x13	; 2b ; \ MCGA
	int 0x10	; 2b ; /
	lds bx,[bx]	; 2b ; ds points aproximately to video segment

	mov dx,0x3C9	; 3b ; \ Crappy paletta suitable for 64b
pal:	out dx,al	; 1b ; |
	inc ax		; 1b ; |
	jnz pal 	; 2b ; /

	mov si,321	; 3b ; si is our delta x and delta y at the same time
	mov bp,320	; 3b ; bp is 320. Allways.

here:	push di 	; 1b ; preserve di
	mov cl,max	; 2b ;
bar:	pusha		; 1b ; Instead of push di \ push cx
	mov cl,max	; 2b ;
line:	inc byte [di]	; 2b ; update color in current pixel
	inc di		; 1b ; move along
	loop line	; 2b ; vertical cycle
	popa		; 1b ; Recall all registers
	add di,bp	; 2b ; move one line down
	loop bar	; 2b ; horizontal cycle
	pop di		; 1b ; recall di

	add di,si	; 2b ; add our deltas

	xor dx,dx	; 2b ; \ ax = di / 320;
	mov ax,di	; 2b ; | dx = di % 320;
	div bp		; 2b ; /

	test ax,127	; 3b ; Try to catch two moments ( y == -1 and y == 128  ) at the same time.
	jnz nody	; 2b ;
	xor si,0x7E	; 3b ; and change delta y
nody:	test dx,255	; 3b ; -"- for x
	jnz nodx	; 2b ; -"- for x
	xor si,0xFF80	; 3b ; -"- for x

nodx:	jmp here	; 2b ; Continue, if user havn`t pressed alt+enter.=)