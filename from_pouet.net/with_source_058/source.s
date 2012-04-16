BITS 16
org 100h

height EQU 128
startx EQU 159
starty EQU 36

%include "vga.inc"

	vga_start
	push 0A000h+starty*20
	pop es
	push es
	pop ds

	xor si, si
	mov di, 321
;	mov cx, (height-1)*160
	mov cx, 4F51h
;	mov word [si+startx], 0F0Fh
	mov word [si+startx], cx

nextpixel:
	lodsw
	xor ax, [si]
	stosw
	loop nextpixel

end:
;	xor ah,ah
	int 16h
;	vga_end

	ret
