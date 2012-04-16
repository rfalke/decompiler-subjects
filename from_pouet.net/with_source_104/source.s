; Intro "Melody", by lord Kelvin
;  for "64b Hugi Xmas Compo"
;  11.12.06

	org 0x100		;

	mov al,0x13		;
	int 0x10		;

	mov dl,14		;
	mov ah,2		;
	int 0x21		;

	mov dx,0x331		;
	mov al,0x3F		;
	out dx,al		;
	dec dx			;

here:	mov bx,di		;
	inc di			;
	and bl,8+2+1		;
	add bl,39		;


	mov al,0x99		;
	out dx,al		;
	mov al,bl		;
	out dx,al		;
	mov al,0x7F		;
	out dx,al		;

	mov ax,[fs:0x046C]	;
	inc ax			;
	inc ax
delay:	cmp ax,[fs:0x046C]	;
	jge delay		;

	mov al,0x99		;
	out dx,al		;
	mov al,bl		;
	out dx,al		;
	mov al,0x00		;
	out dx,al		;

	in al,0x60		;
	cmp al,1		;
	jne here		;
	ret			;