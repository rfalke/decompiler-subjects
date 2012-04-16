; Cevval Strikes Back by anesthetic

; Assemble with Nasm

		org		0x0100

		mov		al,0x13
		int		0x10
		
		push	word 0xa000
		pop		es

MAIN	mov		ch,250

FILL	mov		bx,cx

		mov		dx,cx
		add		dl,dh
		add		ah,dl
		mov		byte [es:bx-1],ah

		loop	FILL

		in		al,0x60
		dec		al
		jnz		MAIN

EXIT	int		0x20
