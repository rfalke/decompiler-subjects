; XorGegga v2
; /mic, 2008 | micol972@gmail.com | http://jiggawatt.org/badc0de
;
; Vsync. Draws to offscreen buffer. Palette fade.
;
; Press [ESC] to exit the program.
;
; How to compile:
;  nasm -o xorgegg2.com xorgegg2.asm
;


%define temp bp
%define delta bp+16
%define palmax 0x1E0

[org 0x100]		

start:
mov 	al,0x13	
int 	0x10


mov	bp,0x200
mov	bh,0xF0
mov 	cx,0x100
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


@@mainloop:
	mov 	dx,0x3C8
	xor 	eax,eax
	out 	dx,al
	inc 	dx
	mov 	ch,1 
	mov 	[bp],eax
	mov 	[bp+4],ax
	@@palloop:
	mov	bx,6
	@@pal_inner:
		mov	al,[bp+1]
		cmp	al,63
		jna	@@1
		mov	al,63
		@@1:
		out	dx,al
		mov	ax,[bx+pal-2]
		add	[bp],ax
	
		inc 	bp
		inc 	bp
		dec 	bx
		dec 	bx
		jnz 	short @@pal_inner
		mov 	bp,0x200
		loop	@@palloop

	mov 	ax,[pal+6]
	add 	[pal],ax
	neg 	ax
	add 	[pal+4],ax
	cmp 	word [pal],palmax 
	je 	short @@swap
	cmp 	word [pal+4],palmax
	jne 	short @@noswap
	@@swap:
	mov 	[pal+6],ax
	@@noswap:
	
	mov	ax,cs
	add	ah,0x10
	mov	es,ax
	
	xor 	di,di
	mov 	si,0xF000
	mov 	dx,200
	@@yloop:
		mov cx,320
		@@xloop:
			mov 	ax,cx
			shl 	ax,3
			mov 	bx,dx
			add 	bx,[delta]
			xor	bh,bh
			shl 	bx,1
			add 	ax,[bx+si]
			mov 	[temp],ax
			
			mov	ax,dx
			shl	ax,3
			mov 	bx,cx
			add 	bx,[delta]
			xor	bh,bh
			shl 	bx,1
			add 	ax,[bx+si]
			
			xor 	ax,[temp]
			and 	al,0x40
			jz 	@@zero
			dec 	ax
			@@zero:
			add 	al,[es:di]
			add	al,[es:di+1]
			add	al,[es:di+2]
			shr 	al,2
			stosb
			loop 	@@xloop
		dec 	dx
		jnz 	@@yloop

		mov 	dx,0x3DA
		@@wait1:
			in 	ax,dx
			and 	al,8
			jnz 	short @@wait1
		@@wait2:
			in 	ax,dx
			and 	al,8
			jz 	short @@wait2
			
		push	ds
		push	es
		pop	ds
		push	0xa000
		pop	es
		xor 	si,si
		xor	di,di
		mov	ch,0x3F
		rep	movsd
		pop ds
		
		inc 	word [delta]

	in 	al,60h
	dec 	al
	jnz 	@@mainloop

mov 	ax,0x4C00	
int 	0x21
ret

foo:
dd 0x3CC90FDB
dw 0x4380  
pal:
dw 0x40,0xC0,palmax,2

