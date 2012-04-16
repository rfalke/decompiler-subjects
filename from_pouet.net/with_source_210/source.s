; Twoerl v2 (with vsync and different palette)
; /mic, 2008 | micol972@gmail.com | http://jiggawatt.org/badc0de
;
; Press [ESC] to exit the program.
;
; How to compile:
;  nasm -o twoerl_v2.com twoerl_v2.asm
;


%define delta bp
%define temp bp+4
%define p1 0x300
%define p2 0x302
%define pos 0x304

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
	inc	bx
	inc	bx
	loop 	@@setup_sine

mov 	dx,0x3C8
xor 	ax,ax
xor 	bx,bx
out 	dx,al
inc 	dx
mov 	cx,0x100
@@1:
	mov	al,bl
	shr	al,2
	out 	dx,al
	xchg	al,ah
	out 	dx,al
	mov 	ax,bx
	cmp 	al,63
	jna 	@@2
	mov 	al,63
	@@2:
	out 	dx,al
	inc 	bx
	loop 	@@1
		
@@mainloop:
	push	0xa000
	pop	es

	mov 	ax,[pos]
	mov 	[p2],ax
	shl 	ax,8
	mov 	[p1],ax

	mov 	dx,0x3DA
	@@wait1:
		in 	ax,dx
		and 	al,8
		jnz 	short @@wait1
	@@wait2:
		in 	ax,dx
		and 	al,8
		jz 	short @@wait2
			
	mov 	si,0xF000
	xor 	di,di
	mov 	cx,200
	@@yloop:
		push 	cx

		movzx 	bx,byte [p1+1]
		add 	bx,bx
		mov 	ax,[bx+si]	; sa
		
		movzx 	bx,byte [p2]
		add 	bl,64
		add 	bx,bx
		mov 	dx,[bx+si]	; ca
		
		movzx 	bx,byte [pos]
		add 	bx,bx
		mov 	bp,[bx+si]	; t
		add 	bp,dx
		mov 	dx,bp
		sal 	dx,1
		add 	bp,dx
		sal 	dx,1
		add 	bp,dx

		mov	dx,ax
		sar 	dx,5

		mov 	al,cl
		push 	ax
		mov 	cx,128
		add     cx,dx
		mov	dx,320
		sub	dx,cx
		rep 	stosb
		
		mov 	cx,64
		@@xloop:
			mov 	ax,bp
			sar 	ax,8
			and 	ax,15
			sub 	al,7
			jns 	@@3
			neg 	al
			@@3:
			xor 	al,7
			shl 	al,3
			stosb
			add 	bp,0x55
			loop 	@@xloop
		
		sub 	dx,64
		mov 	cx,dx
		pop 	ax
		rep 	stosb
		
		inc 	byte [p2]
		mov 	ax,[ddp]
		add 	word [p1],ax
		pop 	cx
		loop 	@@yloop
		
        inc 	word [pos]
	sar	bp,1
	mov 	[ddp],bp
 
	in 	al,60h
	dec 	al
	jnz 	@@mainloop

ret

foo:
dd 0x3CC90FDB
dd 0x43800000 

ddp:
dw 0x100
