;       "Party Eye",
;       by lord Kelvin

	org 0x100	; .com

	mov al,0x13	; \ MCGA
	int 0x10	; /

	push 0xA000	; \ es points to video memory segment
	pop es		; /

	mov bl,5	; bx = 5; // r

here:	xor di,di
	mov cx,320*200	; to loop through all the screen
there:	call getxy	;
	imul ax,ax	; ax = y * y;
	add dx,ax	; dx = x * x + y * y;
	mov al,0	; \ if( dx < r ) { color = BLACK; ppixel(); }
	cmp dx,si	; |
	jb ppixel	; /
	mov al,9	; \ else if( dx < 2500 ) { color = LIGHTBLUE; ppixel(); }
	cmp dx,50*50	; |
	jb ppixel	; /
	call getxy	;
	add ax,70	; \ ax = ( y + 70 ) * ( y + 70 );
	imul ax,ax	; /
	add dx,ax	; dx = x * x + ( y + 70 ) * ( y + 70 );
	mov al,15	; \ else if( dx < 121*121 ) { color = WHITE; ppixel(); }
	cmp dx,121*121	; |
	jb ppixel	; /
	mov al,12	; else color = LIGHTRED;

ppixel: stosb		; [es:di++] = al;
	loop there	; while( --cx ) ...
	add si,bx	; r += dr;
	cmp si,1	; \ if( si <= 1 || si >= 2400 ) dr = -dr;
	jle change	; |
	cmp si,2400	; |
	jae change	; |
	jmp nthng	; |
change: neg bx		; /

nthng:	in al,0x60	; \ if( esc ) exit;
	cmp al,1	; |
	jne here	; /

	mov cx,100	; repeat 100 times
	push es 	; \ ds = es
	pop ds		; /
bla:	push cx 	; preserve cx
	xor di,di	; start from first pixel (0,0)
	mov si,320*2	; move up by 2 lines at a time
	mov cx,320*200	; with all pixels on the screen
	rep movsb	; move...
	pop cx		; recall cx
	loop bla	; do it

	ret		; bye

getxy:	mov ax,di	; \ ax = abs( di / 320 - 100 );
	xor dx,dx	; | dx = di % 320 - 160;
	mov bp,320	; |
	div bp		; |
	sub dx,160	; |
	sub ax,100	; |
	jns module	; |
	neg ax		; /
module: imul dx,dx	; dx = x * x;
	ret		; return;