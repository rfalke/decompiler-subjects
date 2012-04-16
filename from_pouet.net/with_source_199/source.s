; XorGegga
; /mic, 2008 | micol972@gmail.com | http://jiggawatt.org/badc0de
;
; Vsync. Draws to offscreen buffer.
;
; Press [ESC] to exit the program.
;
; How to compile:
;  nasm -o xorgegga.com xorgegga.asm
;


%define delta bp
%define temp bp+4

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
	fmul 	dword [foo+4]
	fistp 	word [bx]
	movsx	eax,word [bx]
	mov	[bx],eax
	add	bx,4
	loop 	@@setup_sine

mov 	dx,0x3C8
xor 	ax,ax
out 	dx,al
inc 	dx
mov 	ch,1
xor 	si,si
xor 	bx,bx
@@palloop:
	and 	si,63
	mov 	ax,si	
	inc 	si
	inc 	si
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
	mov 	al,ah
	out 	dx,al
	mov 	al,bl
	out 	dx,al
	mov 	al,bh
	out 	dx,al
	loop	@@palloop
	

@@mainloop:
	mov	ax,cs
	add	ah,0x10
	mov	es,ax
	
	xor 	di,di
	mov 	si,0xF000
	mov 	dx,200
	@@yloop:
		mov cx,320
		@@xloop:
			mov ax,cx
			shl ax,3
			mov 	bx,dx
			add 	bx,[delta]
			xor	bh,bh
			shl 	bx,2
			add 	ax,[bx+si]
			mov 	[temp],ax
			
			mov	ax,dx
			shl	ax,3
			mov 	bx,cx
			add 	bx,[delta]
			xor	bh,bh
			shl 	bx,2
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
		mov	cx,16000
		rep	movsd
		pop	ds
		
		inc 	dword [delta]
                                              
	in 	al,60h
	dec 	al
	jnz 	@@mainloop

ret

foo:
dd 0x3CC90FDB
dd 0x43800000 
