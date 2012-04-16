;       non-hyperbolic
;       by lord Kelvin

	org 0x100		; .COM

	mov al,0x13		; \ MCGA
	int 0x10		; /
	push 0xA000		; \ es points to video memory segment
	pop es			; /
here:	inc bx			; to change colors
	dec cx			; cx = 65535, that is something near 320 * 200
scene:	mov ax,di		; \ ax = di / 320;
	xor dx,dx		; | dx = di % 320;
	mov bp,320		; |
	div bp			; /
	pusha			; \ This circle-checking procedure with integer
	add dx,127		; |  overflow produces rings
	imul ax,ax		; |
	imul dx,dx		; |
	add ax,dx		; |
	a equ 100		; |
	cmp ax,a*a		; |
	popa			; |
	jna there		; /
	imul dx 		; \ al = abs( ( ax * dx + bp ) / 4 % 32 - 16 ) + 32;
there:	add ax,bx		; |
	shr ax,2		; |
	and al,31		; |
	sub al,16		; |
	jge plus		; |
	neg al			; |
plus:	add al,32		; /
	stosb			; putpixel
	loop scene		; draw all the screen
	in al,0x60		; \ Continue while not esc.
	cmp al,1		; |
	jne here		; /
	ret			; exit