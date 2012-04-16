BITS 16
org 100h

height EQU 128

%include "vga.inc"

	vga_init
;	vga_clrscr

	push es
	pop ds

	mov di, 36*320+159
	xor cx, cx
	call finishline

nextline:
	push di
	push cx
	inc di
	inc di
nextpixel:
	lodsw
	xor ax, [si]
	stosw
	loop nextpixel

	pop cx
	pop di
	call finishline
	cmp cl, height
	je end
	jmp short nextline

end:
	xor ah,ah
	int 16h
	vga_end

	ret

finishline:
	mov si, di
	mov word [di], 0F0Fh
	add di, 319
	inc cx
	ret
