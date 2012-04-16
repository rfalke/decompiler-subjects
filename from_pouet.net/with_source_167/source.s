	org 0x100		; .COM

	mov al,0x12		; \ 640x480x16
	int 0x10		; /

	push dword 0.0001	; [si+10] = dt
	push 200		; [si+8]
	push ax 		; [si+6] = 18
	push 40 		; [si+4]
	push 49 		; [si+2]
	push ax 		; [si], buf
	mov si,sp		; si <- sp

	mov ah,0x0B		; \ set gray background
	mov bl,7		; |
	int 0x10		; /

	mov bl,5		; bl - color
	xor cx,cx		; cx = 0
	fldz			; t
here:	push cx
	fld st0 		; t, t
	fimul word [si+6]	; 18t, t
	fsin			; sin(18t), t
	fimul word [si+8]	; 200sin(18t)[r], t
	fld st1 		; t, r, t
	fimul word [si+2]	; 49t, r, t
	fsin			; sin(49t), r, t
	fmul st0,st1		; rsin(49t)[y], r, t
	fistp word [si] 	; r, t
	mov dx,[si]		; \ dx = y + 240
	add dx,240		; /
	fld st1 		; t, r, t
	fimul word [si+4]	; 40t, r, t
	fcos			; cos(40t), r, t
	fmulp st1,st0		; rcos(40t)[x], t
	fistp word [si] 	; t
	fadd dword [si+10]	; t+dt[t]
	mov cx,[si]		; \ cx = x + 320
	add cx,320		; /
	mov ah,0x0C		; \ putpixel( cx, dx, bl );
	mov al,bl		; |
	int 0x10		; /

	pop cx			; \ if( cx % 3491 == 0 ) bl ^= 3;
	pusha			; | bl = MAGENTA || bl = BROWN
	mov ax,cx		; |
	xor dx,dx		; |
	mov bx,3491		; |
	div bx			; |
	test dx,dx		; |
	popa			; |
	jnz notyet		; |
	xor bl,3		; /

notyet: in al,0x60		; \ } while( ! esc && ++cx != 0 )
	cmp al,1		; |
	je there		; |
	inc cx			; |
	jnz here		; /

there:	xor ah,ah		; \ getch();
	int 0x16		; /

	mov ax,3
	int 0x10
	add sp,14
	ret