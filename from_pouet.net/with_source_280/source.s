; Thinner
; /mic, 2008 | micol972@gmail.com | http://jiggawatt.org/badc0de
;
; Press [ESC] to exit the program.
;
; How to compile:
;  nasm -o thinner.com thinner.asm
;


%define delta bp+12
%define delta2 bp+8
%define delta3 bp

[org 0x100]		

start:
	mov 	al,0x13	
	int 	0x10

	mov	bp,foo 
	mov	bh,0xF0
	push 	bx
	mov 	cx,0x100
@@setup_sine:
	mov 	word [bp+8],cx
	fild 	word [bp+8]
	fmul 	dword [bp] 
	fld 	st0
	fsin
	fimul 	word [bp+4]
	fxch
	fadd 	st0,st0
	fsin
	fimul 	word [bp+6]
	faddp
	fistp 	word [bx]
	inc 	bx
	inc 	bx
	loop 	@@setup_sine

	mov 	dx,0x3C8
	xor 	ah,ah
	out 	dx,al
	inc 	dx
	mov 	si,pal+1
	mov 	bh,4
@@1:
	mov 	cl,64
@@palloop:
	mov 	al,bl
	shr 	al,1
	out 	dx,al
	mov 	al,ah
	shr 	al,1
	out 	dx,al
	mov 	al,ch
	shr 	al,1
	out 	dx,al
	add 	bl,[si]
	add 	ah,[si+1]
	add 	ch,[si+2]
	dec 	cl
	jnz 	short @@palloop
	sub 	ch,[si+2]
	sub 	ah,[si+1]
	sub 	bl,[si]
	add 	si,4
	dec 	bh
	jnz 	short @@1

	pop 	si
@@mainloop:
	push	0xa000
	pop	es

	mov 	dx,0x3DA
@@wait1:
	in 	ax,dx
	and 	al,8
	jnz 	short @@wait1
@@wait2:
	in 	ax,dx
	and 	al,8
	jz 	short @@wait2
			
	xor 	di,di
	mov 	dx,200
@@yloop:
	mov 	cx,320
@@xloop:
	movzx 	ax,byte [delta3]
	add 	ax,ax
	sub 	ax,bx
	mov 	bx,dx
	sub 	bx,ax
	add 	bx,cx
	movzx 	ax,byte[delta2]
	sub 	bx,ax
	xor 	bh,bh
	add 	bx,bx
	push 	word [bx+si]

	movzx 	bx,byte[delta3]
	mov 	ax,cx
	add 	ax,bx
	rcl 	ax,1
	movzx 	bx,byte [delta2]
	add 	bx,dx
	sub 	bx,ax
	xor 	bh,bh
	add 	bx,bx
	pop 	ax
	add 	ax,[bx+si]

	movzx 	bx,byte [delta3]
	neg 	bx
	mov 	bx,cx
	xor 	bh,bh
	add 	bx,bx
	add 	bx,[bx+si]
	add 	bx,dx
	sub 	bx,cx
	add 	bx,[delta]
	xor 	bh,bh
	add 	bx,bx
	add 	ax,[bx+si]
	
	shr 	ax,3
	stosb
	loop 	@@xloop
	dec 	dx
	jnz 	short @@yloop

	dec 	dword [delta]
	inc	byte [delta2]
	dec	byte [delta3]
        
	in 	al,60h
	dec 	al
	jnz 	short @@mainloop

pal:
db 0xC3,2,1,2
db 0,0,1,0
db 0,-1,-1,0
db 0,-1,-1,-2

foo:
dd 0x3CC90FDA
dw 208 
dw 124 
