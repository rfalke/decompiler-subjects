;	Corkscrewed
;	by lord Kelvin

	org 0x100

	push 0xA000		; \ es = beginning of video memory
	pop es			; /
	mov al,0x13		; \ Init MCGA video mode.
	int 0x10		; /

	push 63 		; My old palette-generation procedure.
	push 21167		;
	push cx 		; outp( 0x3C8, 0 );
	mov dx,0x3C9		; for( int i = 0; i < 256 * 3; i++ )
	mov si,sp		;  outp( 0x3C9, 63. * sqr( sin( N * M_PI / 192. ) ) );
	mov cx,768		;
pal:	mov [si],cx		; Where sqr() returns argument, multiplied by itself.=)
	fild word [si]		; M_PI is pi, 3.1415...
	fimul word [si+2]	; outp() - writes to port.
	fsin			;
	fmul st0,st0		;
	fimul word [si+4]	;
	fistp word [si] 	;
	mov ax,[si]		;
	out dx,al		;
	loop pal		;

	push 41 		; [si+2], 41
	push cx 		; [si], buf
	mov si,sp

here:	mov ax,di		; \ ax = di / 320 - 100; It's y.
	mov bx,320		; | dx = di % 320 - 160; And it's x.
	xor dx,dx		; |
	div bx			; |
	sub ax,100		; |
	sub dx,160		; /
	mov [si],ax		;
	fild word [si]		; st0 = y
	mov [si],dx
	fild word [si]		; st0 = x, st1 = y
	fld st1 		; st0 = y, st1 = x, st2 = y
	fmul st0,st0		; st0 = y^2, st1 = x st2 = ,y
	fld st1 		; st0 = x, st1 = y^2, st2 = x, st3 = y
	fmul st0,st0		; st0 = x^2, st1 = y^2, st2 = x, st3 = y
	faddp st1,st0		; \ st0 = r, st1 = x, st2 = y
	fsqrt			; /
	fistp word [si] 	; st0 = x, st1 = y
	fpatan			; st0 = a
	fimul word [si+2]	; st0 = 41*a
	fiadd word [si] 	; st0 = r+41*a
	fistp word [si] 	; \ ax = r + 41 * a + bp;
	mov ax,[si]		; |
	add ax,bp		; /
	stosb			; [es:di] = al, di++;
	loop here		; while( --cx );
	dec bp			; bp--'

	in al,0x60		; \ repeat demo until, <Esc> is pressed.
	cmp al,1		; |
	jne here		; /

	mov ax,3		; \ Set text mode
	int 0x10		; /
	mov dx,msg		; \ Output text message
	mov ah,9		; |
	int 0x21		; /
	int 0x20		; Exit.

msg db 'i',3,'u!$'		;