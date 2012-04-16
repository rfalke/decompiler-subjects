
	.386p
code	segment use16
	org 0100h
	assume  cs:code, ds:code;, es:code, ss:code
d	equ	dword ptr
w	equ	word ptr
b	equ	byte ptr
hx=320
hy=200
vhy=120

start:	mov	ax,13h
	int	10h

	mov	ah,9
	mov	dx,offset text
	int	21h

	push	0a000h;+10*(hy-vhy)
	pop	es




;palette
	xor	ax,ax
	mov	dx,03c8h
	out	dx,al
	inc	dx
	xor	di,di
pal:
	mov	ax,di
	shr	al,2
	out	dx,al
	mov	ah,al
	shr	al,1
	out	dx,al
	mov	al,ah
	out	dx,al
;copy logo
	mov	al,es:[di]
	shl	al,3
	add	al,64
	stosb
	jnz	pal





	finit
	mov	si,offset rot

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;MAIN
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
igen:
	mov     dx,3dah
r1:     in      al,dx          
       	test    al,8
       	jz      r1



	mov	di,(hy-vhy)/2*hx;xor	di,di
	mov 	bp,-vhy/2
ylo:
	mov	w [si+16],bp	;y
	mov 	cx,-hx/2
xlo:
	fild	w [si-4]	;z	k120..	mov	w [si+20],120	;	fild 	w [si+20]
	fild 	w [si+16]
	mov	w [si+12],cx	;x
	fild 	w [si+12]	;x y z

	push	cx bp

	mov	cx,3
rol:	fld 	d [si]		;v x y z
roter:	
	fsin
	fsincos			;c s x y z
	fld	st(2)		;x c s x y z
	fmul	st(0),st(1)	;xc c s x y z
	fld	st(4)		;y xc c s x y z
	fmul	st(0),st(3)	;ys xc.. 
	fsubp	st(1)		;ys-xc c s..
	fxch	st(4)		;y c s x ys-xc z
	fmulp	st(1)		;yc s x ys..
	fxch	st(2)		;x s yc ys..
	fmulp	st(1)		;xs yc ys..
	faddp	st(1)		;xs+ys ys-xc z
	fxch st(2)		;z y x
	fxch st(1)		;y z x
	loop	rol

	mov	ch,1		;nasty.. cl=0.. :) ;	mov	cx,256

	fistp	w [si+24]		;y z
	fistp	w [si+28]		;z
	fistp	w [si+32]		;

	mov	bx,w [si+4]	;xor	bx,bx
	mov	bp,0200h	;xor	bp,bp
	mov	dx,bx		;xor	dx,dx
rayloop:
	add	bx,w [si+24]
	add	bp,w [si+28]
	add	dx,w [si+32]
	mov	ax,dx
	and	ax,bp
	and	ax,bx
	and	ah,0f8h
	jnz	skip
	loop	rayloop
skip:
	mov	al,cl

	pop	bp cx

	stosb
	inc	cx
	cmp	cx,hx/2
	jnz	xlo

	inc	bp
	cmp	bp,vhy/2
	jnz	ylo

	add	w [si+4],bp	;bp = 60...;)


	fld	d [si]
	fiadd	w [si-2]
	fstp	d [si]



	mov     ah,01H                              ;get keyboard buffer status
	int     16H
	jz      igen
	ret


k120	dw	120/2					;-4
drot	dw	377; = 0.012*pi*100*100.. periodic.. :D	;-2
rot:	; :P
text:	db	10,10,'-= MZ1453 / Gunnars Farvebio (c) 2010 =-$'	;0+...
	dd	?,?,?,?,?,?,?,?
posx:	;+4..	dw	0



code	ends      
       	end start


