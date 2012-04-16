;       Caleido5kope by rebels
;       coder lord Kelvin
;       great design help - Pasy
;
;       remember: sqrt( 3 ) = 7 / 4
;                 shr != sar
;
;       Palette procedure is from Rrrola`s intro. Greets Rrrola!
;

	org 0x100		; .COM

	mov al,0x13		; \ MCGA
	int 0x10		; /
	push 0xA000		; \ Video Memory
	pop es			; /

	mov dx,0x3C9		; 14b
pal:	mov ax,cx		; ax = cx
	out dx,al		; R[ i ] = cx & 0xFF;
	shr ax,1		; \ G[ i ] = ( cx >> 1 ) & 0xFF;
	out dx,al		; /
	shr ax,1		; \ B[ i ] = ( cx >> 2 ) & 0xFF;
	out dx,al		; /
	loop pal		; while( --cx (;

	xor di,di		; Start from the first pixel
	nop			; \ nothing
	nop			; /

curse:	push jungle
	mov ax,di		; \ ax = di / 320 - 57; [ y ]
	xor dx,dx		; | dx = abs( di % 320 - 160 ); [ x ]
	div word [insect+2]	; |
	sub dx,160		; |
	jg $+4			; |
	neg dx			; |
	sub ax,57		; /
	cmp ax,43		; \ if( y > 43 )
	jle damn		; / {
	sub ax,87+57		; \     [es:di] = [es:( x + 160 + 320u * ( 87 - y + 57 ) ];
	imul bx,ax,-320 	; | }
	add bx,dx		; |
	mov al,[es:bx+160]	; |
	ret			; /

damn:	imul bx,dx,7		; \ if( y < x * 7 / 4 )
	sar bx,2		; | {
	cmp ax,bx		; | // bx = x * 7 / 4;
	jge desert		; /

	add bx,ax		; \ y' = 320u * ( ( x * 7 / 4 + y ) / 2 + 57 );
	sar bx,1		; |
	add bx,57		; |
insect: imul bx,320		; /
	imul ax,7		; \ x' = ( y * 7 / 4 - x ) / 2;
	sar ax,2		; |
	sub ax,dx		; |
	sar ax,1		; /
	add bx,ax		; \ [es:di] = [es:( x' + 160 + y' ];
	mov al,[es:bx+160]	; |
	ret			; /

desert: add dx,bp		; \ color = x + k ^ y + k;
	add ax,bp		; |
	xor ax,dx		; /
	pop dx			; recover the stack
jungle: stosb			; putpixel
	loop curse		; draw screen

	inc bp			; on step
	in ax,0x60		; \ if( !Esc ) continue;
	dec ax			; | else return;
	jne curse		; |
	mov al,3		; |
	int 0x10		; |
	ret			; /