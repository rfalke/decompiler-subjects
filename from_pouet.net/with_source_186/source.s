; XorGegga v3
; /mic, 2008 | micol972@gmail.com | http://jiggawatt.org/badc0de
;
; No vsync. Draws directly to video memory (=slow). Different colors.
;
; Press [ESC] to exit the program.
;
; How to compile:
;  nasm -o xorgegg3.com xorgegg3.asm
;

[org 0x100]		

start:
mov 	al,0x13	
int 	0x10

mov	bp,0x200
mov	bh,0xF0
mov 	cx,0x100
mov 	si,bx
@@setup_sine:
	mov 	word [bp],cx
	fild 	word [bp]
	fmul 	dword [foo]
	fsin
	fmul 	dword [foo+2]
	fistp 	word [bx]
	inc bx
	inc bx
	loop 	@@setup_sine

mov 	dx,0x3C8
xor 	ax,ax
out 	dx,al
inc 	dx
mov 	ch,1
xor 	di,di
xor 	bx,bx
@@palloop:
	and 	di,63
	mov 	ax,di	
	inc 	di
	inc 	di
	cmp 	cl,193
	jbe 	short @@2
	cmp 	cl,225
	jb 	short @@3
	mov 	bh,al
	jmp 	short @@store
	@@3:
	mov 	bl,al
	jmp 	short @@store
	@@2:
	mov 	ah,al
	@@store:
	mov 	al,bh
	out 	dx,al
	mov 	al,bl
	out 	dx,al
	mov 	al,ah
	out 	dx,al
	loop	@@palloop

	push	0xa000
	pop	es

@@mainloop:
	xor 	di,di
	mov 	dx,200
	@@yloop:
		mov cx,320
		@@xloop:
			mov 	ax,cx
			shl 	ax,3
			mov 	bx,dx
			add 	bx,[bp]
			xor	bh,bh
			shl 	bx,1
			add 	ax,[bx+si]
	
			mov 	bx,cx
			add 	bx,[bp]
			xor	bh,bh
			shl 	bx,1
			mov 	bx,[bx+si]
			lea	ebx,[ebx+edx*8]
			
			xor 	ax,bx 
			and 	al,0x40
			jz	$+3
			dec	ax
			add 	al,[es:di]
			add	al,[es:di+1]
			add	al,[es:di+2]
			shr 	al,2
			inc 	ax
			stosb
			loop 	@@xloop
		dec 	dx
		jnz 	@@yloop
	dec 	word [bp]                       
	in 	al,0x60
	dec 	al
	jnz 	@@mainloop

ret

foo:
dd 0x3CC90FDB
dw 0x4380 
