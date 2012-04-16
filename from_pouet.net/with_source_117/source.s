	org 0x100	; .COM

	mov al,0x13	; \ 320 x 200 x 256
	int 0x10	; /
	push 0xA000	; \ es: - video memory
	pop es		; /
anim:	inc bp		; bp++;

screen: cwd		; \ ax = di / 320 - 120; // y
	mov ax,di	; | dx = di % 320 - 160; // x
	mov bx,320	; |
	div bx		; |
	sub ax,120	; |
	sub dx,160	; /
	jg module	; \ if( dx < 0 ) dx = -dx; // x = abs( x );
	neg dx		; /
module: mov bx,ax	; \ bx = 2 * y ^ 2 + x ^ 2 + 2 * x * y;
	imul bx,bx	; |
	add ax,dx	; |
	imul ax 	; |
	add bx,ax	; /
	add bx,10	; For safety of divivsion
	mov dl,9	; dx:ax ~ 600000
	div bx		; ax = dx:ax / bx;
	add ax,bp	; \ al = ( ( ( ax + bp ) / 4 ) & 63 ) + 32;
	shr ax,1	; |
	and al,63	; |
	add al,32	; /
	stosb		; [es:di] = al, di++
	loop screen	; if( cx ) loop;
	in al,0x60	; \ if( getch() != Esc ) loop;
	cmp al,1	; |
	jnz anim	; /
	ret		; That's all.