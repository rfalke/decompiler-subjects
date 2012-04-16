; RGB Cube
; by lord Kelvin

	org 0x100		; .COM

	mov al,0x13		; \ MCGA
	int 0x10		; /

	les bx,[bx]		; es = 0xF999

here:	mov ax,di		; \ ax = di / 320;
	xor dx,dx		; | dx = di % 320;
	mov bp,320		; |
	div bp			; /

	sub ax,75		; \ si = ax - 75
	xchg ax,si		; /
	mov al,1		; blue
	sub dx,160+16		; \ if( ( dx -= 160 ) < 0 ) dx = - dx;
	jg module		; |
	neg dx			; /
	inc ax			; green
module: cmp dx,50		; \ if out of cube
	jg no			; /
	cmp dx,si		; \ maybe inside
	jg yes1 		; /

	mov al,4		; red
	sub dx,100		; \ surely red?
	neg si			; |
	cmp si,dx		; /
	jl no			; no...

yes1:	add si,50		; \ Last chance ro be part of the cube
	cmp dx,si		; |
	jl yes			; /

no:	mov al,7		; \ just background
yes:	stosb			; /
	jmp here		; forever...
db ':)'