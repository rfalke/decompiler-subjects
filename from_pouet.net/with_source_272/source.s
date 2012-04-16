; Blub! II - 256 Byte intro by Spin/Abyss
; Feel free to contact me at: PhilippGraf@web.de
;
; Compile with NASM: nasmw Blub!_II.asm -o Blub!_II.com
; 

[org 100h]
[segment .text]

;%define DEBUG

BALLNUM 	EQU 18
SCALEVAL	EQU (256*12)


Entry:   

%ifdef DEBUG
	mov ax,0
	mov bx,0
	mov cx,0x00ff
	mov dx,cs
	mov si,0x0100
	mov di,0xfffe
%endif

	mov	al,13h			; switch to mode 13h
	int	10h

	fninit				;int fpu

	;init segments
	push	word 0xa000-(320/16)
	pop	es			;es->screen
;	mov dx,cs			;!!assume dx=cs
	add dh,0x10
	mov fs,dx			;fs->xtable

;---------------------------------------------------------------------
; calc palette
;---------------------------------------------------------------------
;	mov cl,0		;!!assume cx=0x00ff
PalLoop:

	mov dx,0x3c8
	mov al,cl
	out dx,al
	inc dx

	out dx,al
	sub al,0x80
	jnc .do1
	add al,0x84
.do1
	out dx,al

	sub al,0x40
	jnc .do2
	add al,0x44
.do2
	out dx,al

	loop PalLoop


;---------------------------------------------------------------------
; precalc table: c(x,y)=(pi/s)*sin(pi/s*r)/r 	;x,y in range [0,127]
;---------------------------------------------------------------------
PreTable:
;	xor bx,bx		;!!assume bx=0x0000

	fld dword [XYINIT]	;63.5
	fld st0			;63.5 63.5
	fchs			;-63.5 63.5
	fld st0			;-63.5 -63.5  63.5
				;x y bd
.ploop:
	fld st0			;x x y bd
	fmul st0		;x^2 x y bd
	fld st2			;y x^2 x y bd
	fmul st0		;y^2 x^2 x y bd
	faddp st1		;x^2+y^2 x y  bd
	fsqrt			;r x y bd
	
	fdiv st3		;r/S x y bd

	fldpi			;pi r/S x y bd
	fmul st1,st0		;pi pi*r/S x y bd
		
	fucomip st1		;r*pi/S x y bd
	jc .nextPix
	
	fcos			;cos(r*pi/S) x y bd
	fld1
	faddp st1		;1+cos() x y bd
;ILLPOINT equ ($)
	fimul word [SCALE]	;sc*(1+cos(r*pi/S)) x y bd
.nextPix:
	fistp word [fs:bx]	;x y bd
	fucomi st2   		;x=63.5?
	fld1			;1 x y bd
	jnz .noOverX

	faddp st2		;x y bd
	fchs 			;x=-63.5 y bd
	jmp short .overX
.noOverX:
	faddp st1,st0		;x y bd
.overX:
	inc bx
	inc bx
	jnz .ploop
	
	;leaves with [x y bd] on fstack. who cares?

;---------------------------------------------------------------------
; main loop
;---------------------------------------------------------------------

Main:
	;-------- movement
	mov di,MOVEMENT
	inc word [di]

;	fldln2
;	fldlg2
;	fld1
;	fldln2
;	fldl2t

	fldl2e

	mov bx,di	
	mov cx,(2*BALLNUM)
MovLoop:
	inc bx
	inc bx

	fadd st0		;ad x y bd
	fld st0
	fiadd word [di]		;m ad x y bd
	fdiv st4		;m/bd ad x y bd
	fsin			;sinm ad x y bd
	fmul st4		;trick! c*sinm ad x y bd

	fistp word [bx]		;ad x y bd
	add word [bx],160-64
	loop MovLoop

	fucomp st0		;x y bd


	;----- draw

	mov bx,320		;x
	mov cl,200-160-32	;y
	
;	mov si,0		;!!Could be removed - would trash 1st frame!

PixLoop:
	mov di,4*(BALLNUM-1)
	xor ax,ax		;!! not deletable


	; add height values from all balls 
BLoop:
	push bx

	 sub bx,[di+BPOS]
	 sal bx,1
	 or bh,bh
ILLPOINT equ ($)
	 jne .nextBlop	;cl xxxxxxx0
		
	 push cx
	  sub cx,[di+BPOS+2]	;dy
	  mov bh,cl
	  add ax,[fs:bx]	;height
	 pop cx

.nextBlop:
	pop bx
	sub di,4
	jge BLoop


	; cut off values below a step-value to get "meta-balls"
	sub ax,(SCALEVAL/2)
	jnc .nocutlo
	xor ax,ax
.nocutlo:

	; now calc dx=(h(x,y)-h(x-1,y)) and dy=(h(x,y)-h(x,y-1)).
	push bx

	 shl bx,1

	 mov dx,ax
	 xchg dx,[bx+HTABLE]
	 neg dx
	 add dx,ax		;dy

	 sub ax,[bx+HTABLE-2]	;dx


	; shading is c=dx+dy with the values clamped to [0x00,0x37]
	 sar ax,4
	 add al,0x20

	 jns .nounder
	 xor al,al
.nounder:
	 cmp al,0x37
	 jb .noover
	 mov al,0x37	
.noover:
	pop bx
	
	; now add the "stripes" as bits 6 and 7 of the color
	sar dx,5
	add dx,bx
	and dl,0x60
	shl dl,1
	or al,dl

	mov [es:si],al		; set pixel


	; adjust (x,y)
	dec bx
	jnz .noXUnder
	dec cx
	mov bx,320
.noXUnder
	inc si
	jnz PixLoop

	; check for key	
	in	al,60h			; read port keyboard
;	cbw				; byte->word - without it work SOMETIMES ;)
	dec	ax
	jnz	near Main		; ->0 if escape


	; clean exit now
;	mov	al,03h			; return to text mode 0h - 40columns/line rule!	
	int	10h
	ret


;---------------------------------------------------------------------
; data
;---------------------------------------------------------------------

AMPLITUDE
XYINIT		
		dd 63.5


	; we make double usage of some "constants" which lie in the binary...
MOVEMENT	equ XYINIT+2

SCALE		equ ILLPOINT		;Ouch! = 0x0EDE

	; "bss" section

BPOS		equ MOVEMENT+2			;(x,y) positions of the balls
BPOSEND		equ BPOS+2*BALLNUM*2

HTABLE		equ BPOSEND			;table for computation of dy values. saves previous row.
HTABLEEND	equ HTABLE+(320+1)*2
