;       Cheshire Cat.
;       by lord Kelvin.
;       specially for incube.

	org 0x100		;  0b  ; .COM

	mov al,0x13		;  2b  ; \ Video mode 320 x 200 x 256.
	int 0x10		;  2b  ; /

	mov dx,txt		;  3b  ; \ 21nd interrupt, 9th function - text output.
	mov ah,9		;  2b  ; |
	int 0x21		;  2b  ; /

	push 63 		;  2b  ; [si+4] = 63
	push 21167		;  3b  ; [si+2] = 21167
	push bx 		;  1b  ; [si] = 0
	mov si,sp		;  2b  ; Address stack with si.
	mov dx,0x3C9		;  3b  ; dx - palette change port number.
	mov cx,3*256		;  3b  ; 256 times 3 colors, cx - counter.
pal:	mov [si],cx		;  2b  ; \ st0 = cx
	fild word [si]		;  2b  ; /
	fimul word [si+2]	;  3b  ; st0 = cx * 21167
	fsin			;  2b  ; st0 = sin( cx * 21167 )
	fmul st0,st0		;  2b  ; st0 = sin( cx * 21167 ) ^ 2
	fimul word [si+4]	;  3b  ; st0 = 63 * sin( cx * 21167 ) ^ 2
	fistp word [si] 	;  2b  ; [si] = int( st0 )
	mov ax,[si]		;  2b  ; \ Output red, green or blue.
	out dx,al		;  1b  ; /
	loop pal		;  2b  ; while( --cx );

	mov bh,0xA0		;  2b  ; bx = 0 + bh = 0xA0 => bx = 0xA000
	mov es,bx		;  2b  ; \ es = ds = 0xA000
	mov ds,bx		;  2b  ; / 0xA0000000L - address of video memory.
	std			;  1b  ;

frame:	mov ax,di		;  2b  ; di - pixel`s number, es:di - points to current pixel
	sub ax,1328		;  3b  ; Offset of the image: x += 48, y += 4.
	xor dx,dx		;  2b  ; \ Here: ax = di / 320
	mov bx,320		;  3b  ; |       dx = di % 320
	div bx			;  2b  ; /
	sar dx,5		;  3b  ; dx /= 32
	mov si,dx		;  2b  ; \ si = 320 * dx
	imul si,320		;  4b  ; /  dx - y coordinate
	mov bl,13		;  2b  ; \ al = ax / 13
	div bl			;  2b  ; / ah = ax % 13
	cbw			;  1b  ; ax = al
	add si,ax		;  2b  ; si += ax - x coordinate
	lodsb			;  1b  ; al = [ds:si], si++
	shl al,5		;  3b  ; al *= 32
	stosb			;  1b  ; [es:di] = al,
	loop frame		;  2b  ;

lust:	xor ah,ah		;  2b  ; \ [di] = ( [di-320] + [di-1] + [di+1] + [di+320] ) / 4;
	mov al,[di-320] 	;  4b  ; |  the most simple smooth
	add al,[di-1]		;  3b  ; |
	adc ah,ah		;  2b  ; |
	add al,[di+1]		;  3b  ; |
	adc ah,dl		;  2b  ; |
	add al,[di+320] 	;  4b  ; |
	adc ah,dl		;  2b  ; |
	shr ax,2		;  3b  ; |
	stosb			;  1b  ; /
	loop lust		;  2b  ;

	in al,0x60		;  2b  ; \ If Esc is pressed - exit.
	cmp al,1		;  2b  ; |
	jne lust		;  2b  ; /
	int 0x20		;  2b  ; 

txt db 'BH$'			;  3b  ;
db 3				;  1b  ; Heart.=)