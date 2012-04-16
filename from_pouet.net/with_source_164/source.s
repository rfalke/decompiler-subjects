	org 0x100	; We are .com

	push 0xA000	; \ es = video mem`s segment
	pop ds		; /

	mov al,0x13	; \ MCGA video mode
	int 0x10	; /

	push 1		; \ [bp+2], dx
	push 320	; | [bp]  , dy
	mov bp,sp	; /

	mov cl,254	; repeat 254 times
	mov dx,0x3C9	; dx = palete change port #
pal:	xor al,al	; \ outp( 0x3C9, 0 );
	out dx,al	; /
	mov ax,cx	; \ al = 63 - abs( cx - 127 ) / 2;
	sub ax,127	; |
	jg module	; |
	neg al		; |
module: shr al,1	; |
	sub al,63	; |
	neg al		; /
	out dx,al	; outp( 0x3C9, al );
	out dx,al	; outp( 0x3C9, al );
	loop pal	; while cx

	xor di,di	; for some unknown reason di isn't zero here.
bob:	pusha		; save all regiters #1
	mov cx,39	; bob`s height is 39
bar:	pusha		; save all regiters #2
	mov cx,39	; bob`s width is also 39
line:	inc byte [di]	; \ draw line
	inc di		; |
	loop line	; /
	popa		; recall all registers #2
	add di,320	; go to next line, to draw a bar
	loop bar	; draw bar of lines
	popa		; recall all registers #1

	add di,[bp+2]	; di += dx
	add di,[bp]	; di += dy

	mov ax,di	; \ ax = di / 320, y
	mov bx,320	; | dx = di % 320, x
	xor dx,dx	; |
	div bx		; /

	cmp ax,0	; \ if( y <= 0 || y >= 200 - 39 ) dy = -dy;
	jle negy	; |
	cmp ax,200-39	; |
	jge negy	; |
	jmp half	; |
negy:	neg word [bp]	; /

half:	cmp dx,0	; \ if( x <= 0 || x >= 320 - 39 ) dx = -dx;
	jle negx	; |
	cmp dx,320-39	; |
	jge negx	; |
	jmp clear	; |
negx:	neg word [bp+2] ; /

clear:	in al,0x60	; \ while not Esc
	cmp al,1	; |
	jne bob 	; /

	int 0x20	; Run away.
db 'l. Kelvin'