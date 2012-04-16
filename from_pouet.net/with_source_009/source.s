	;; WORLD DOMINATION 2004
	;; tested only with nasm, download it as warez from kazaa

start:	
	mov ax, 0x13
	int 0x10

	les bp, [bx]

.loop:	
	inc di		
	mov cl, 16
	adc al, cl
	stosb
	jmp .loop
