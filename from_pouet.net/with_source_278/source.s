; Bolox
; /mic, 2008 | micol972@gmail.com | http://jiggawatt.org/badc0de
;
; Press [ESC] to exit the program.
;
; How to compile:
;  nasm -o bolox.com bolox.asm
;


%define delta 	bp
%define delta2 	bp+8
%define delta3 	bp+9
%define temp 	bp+4

[org 0x100]		

start:
	mov 	al,0x13	
	int 	0x10

	mov	bp,0x200
	mov	bh,0xF0
	push 	bx
	mov 	cx,0x100
@@setup_sine:
	mov 	word [bp],cx
	fild 	word [bp]
	fmul 	dword [foo]
	fsin
	fmul 	dword [foo+4]
	fistp 	word [bx]
	inc 	bx
	inc 	bx
	loop 	@@setup_sine

	mov 	dx,0x3C8
	xor 	ah,ah
	out 	dx,al
	inc 	dx
	xor 	di,di
	mov 	bh,4
@@1:
	mov 	cl,64
@@palloop:
	mov 	si,di
	shr 	si,4
	and 	si,12
	add 	si,pal
	mov 	al,bl
	out 	dx,al
	mov 	al,ah
	out 	dx,al
	mov 	al,ch
	out 	dx,al
	add 	bl,[si]
	inc 	si
	add 	ah,[si]
	inc 	si
	add 	ch,[si]
	inc 	di
	dec 	cl
	jnz 	@@palloop
	sub 	ch,[si]
	dec 	si
	sub 	ah,[si]
	dec 	si
	sub 	bl,[si]
	dec 	bh
	jnz 	short @@1

	pop 	si
@@mainloop:
	push	0xa000
	pop	es

	xor 	di,di
	xor 	dx,dx
@@yloop:
	mov 	cx,320
@@xloop:
	mov 	bx,dx
	shr 	bl,1
	add 	bx,cx
	add 	bx,[delta]
	xor 	bh,bh
	add 	bx,bx
	mov 	ax,[bx+si]
	sar 	ax,2 
	add 	ax,dx
	mov 	[temp],ax

	mov 	bx,dx
	add 	bx,[delta]
	xor 	bh,bh
	add 	bx,bx
	mov 	ax,[bx+si]
	sar 	ax,2 
	add 	ax,cx
	xor 	ax,[temp]
	and 	ax,31

	movzx 	bx,byte [delta2]
	add 	bx,cx
	add 	bx,dx
	xor 	bh,bh
	add 	bx,bx
	add 	ax,[bx+si]
	
	movzx 	bx,byte [delta3]
	add 	bx,cx
	xor 	bh,bh
	add 	bx,bx
	add 	ax,[bx+si]

	movzx 	bx,byte [delta2]
	add 	bl,[delta3]
	add 	bx,cx
	add 	bx,dx
	xor 	bh,bh
	add 	bx,bx
	add 	ax,[bx+si]
	
	shr 	ax,3
	stosb
		
	loop 	@@xloop
	inc 	dx
	cmp	dl,200
	jnz 	@@yloop

	add	byte [delta2],2
	dec	byte [delta3]
	add 	dword [delta],2
                                      
	in 	al,60h
	dec 	al
	jnz 	@@mainloop

ret

pal:
db 0,1,1,0
db 1,0,0,0
db 0,-1,0,0
db -1,0,-1,0


db 0
foo:
dd 0x3CC90FDA
dd 0x43800000


