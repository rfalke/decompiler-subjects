;       lord Kelvin`s
;       Copper Tapes
;       Thanx to Demo Design FAQ for an image.;)

	; dx - y, cx - x, al = color
	org 0x100		; .COM

	mov al,0x13		; \ MCGA
	int 0x10		; /

	push 0xA000		; \ es: - video memory
	pop es			; /

	push 60 		; [bp+4]
	push 32 		; [bp+2]
	push ax 		; [bp]
	mov bp,sp		; address through bp

	fldz			; st0=0, y too
	cwd			; y = 0

row:	fld st0 		; st0=y,st1=y
	fidiv word [bp+2]	; st0=y/32,st1=y
	fsincos 		; st0=sin(y/32),st1=cos(y/32),st2=y
	fimul word [bp+4]	; st0=60*sin(y/32)[x1],st1=cos(y/32),st2=y
	fistp word [bp] 	; \ cx = x1
	mov cx,[bp]		; / st0=cos(y/32),st1=y
	push cx 		; save x1
	add cx,150		; cx = centered x1
	mov al,1		; \ blue column
	call column		; /

	inc ax
	pop cx			; recall x1
	neg cx			; \ make centered x2
	add cx,140		; /
	call column		; ..column

	fimul word [bp+4]	; st0=60*cos(y/32)[x3],st1=y
	fistp word [bp] 	; \ cx = centered x3
	mov cx,[bp]		; | st0=y
	add cx,160		; /
	mov al,4		; \ red column
	call column		; /

	fld1			; \ st0=y+1
	faddp st1,st0		; /

	in al,0x60		; \ If user is bored and Esc is pressed - exit
	cmp al,1		; |
	jz bye			; /

	inc dx			; \ if( ++y < 200 ) goto row
	cmp dx,200		; |
	jl row			; /

	xor ax,ax		; \ Wait for keypress
	int 0x16		; /

bye:	int 0x20		; Exit.

column: mov ah,0x0C		; ( ah = 0x0C ) + int 0x10 = putpixel
	push dx 		; preserve y
cycle1: push cx 		; and x
	int 0x10		; \ putpixel( x, y, al );
	inc cx			; | putpixel( x+1, y, al );
	int 0x10		; | putpixel( x+2, y, al^8 );
	inc cx			; | putpixel( x+3, y, al^8 );
	xor al,8		; |
	int 0x10		; | When you add third bit to "dark" ( less then 8 ) color, it becomes lighter (mmm more light=) )
	inc cx			; |
	int 0x10		; |
	xor al,8		; /
	pop cx			; recall x
	inc dx			; \ increase y and cycle, while y doesn`t reach bottom
	cmp dx,200		; |
	jl cycle1		; /
	pop dx			; recall y
	ret			; return;
 db 'I',3,'U'