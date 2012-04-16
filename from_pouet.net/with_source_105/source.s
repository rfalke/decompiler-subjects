;       lord Kelvin`s
;       Square gorge
;       Proudly presents
;        * Palette change
;        * Dinamic image
;        * Esc support
;        * 3 free bytes
;
;       Created on 19.12.06

	org 0x100	; .COM

	mov al,0x13	; \ MCGA video mode
	int 0x10	; /

	push 0xA000	; es: - video memory
	pop es		;

	mov dx,0x3C9	; \ Create very simple palette.
pallp:	out dx,al	; |
	inc ax		; |
	jnz pallp	; /

here:	mov ax,di	; \ ax = di / 320; ( y )
	xor dx,dx	; | dx = di % 320; ( x )
	mov bx,320	; |
	div bx		; /

	sub ax,100	; ax -= 100;
nonegy: sub dx,160	; \ dx = abs( dx - 160 );
	jg nonegx	; |
	neg dx		; /
nonegx: cmp ax,dx	; \ ax = max( ax, dx );
	jg noxchg	; |
	xchg ax,dx	; /
noxchg: inc ax		; \
	xchg ax,bx	; | ax = 8000 / ( ax + 1 );
	mov ax,4000	; |
	cwd		; |
	div bx		; /
	add ax,si	; ax += si;
	stosb		; [es:di++]=al

	loop here	; if( --cx ) foto here;
	inc si		; si++; increase color-shifter

	in al,0x60	; \ While not esc - continue
	cmp al,1	; |
	jne here	; /

	ret		; Goodbye.
db '64b'