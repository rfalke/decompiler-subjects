;This is Open Source
;
;MZ1453 / Gunnars Farvebio april 2010
;

	.386p
code	segment use16
	org 0100h
	assume  cs:code, ds:code;, es:code, ss:code
d	equ	dword ptr
w	equ	word ptr
b	equ	byte ptr
hx=320
hy=200
n=128

size = 24
topz = -size/2;-12

npolshift=5
npol=32

nfaces=24


_deg = -2
_x = 0
_y = 2
_z = 4

start:

	mov	ax,13h
	int	10h

	push	0a00ah		;160pixels center.. 
	pop	es
	push	09000h
	pop	fs




     
igen:
	mov     dx,3dah
r1:     in      al,dx          
        test    al,8
        jz      r1


;cls
;	xor	di,di	;!! assumed=0!!! :D
;	mov	cx,di	;!! assumed=0!!! 8>
	;ah=0 from rastertest!!!;	mov	ax,di
cls:	mov	al,fs:[di]
	mov	fs:[di],ah
	stosb
	loop	cls








	;guess dx...  stinks.. ;)
	mov	si,dx	;offset temp


	xor	di,di
faceloop:

	mov	cl,size*2
baselineloop:

	mov	bp,npol
interpolloop:
	push	cx


	;;;;;;;;;;;;;;;;;;;;;;;;
	;xyz in triangle
	sub	cx,size
	imul	cx,bp
	sar	cx,npolshift

	mov	bx,size
	imul	bx,bp
	sar	bx,npolshift

	mov	dx,topz
	imul	dx,bp
	sar	dx,npolshift
	add	dx,size*3/2
	;;;;;;;;;;;;;;;;;;;;;;;;

	;;;;;;;;;;;;;;;;;;;;;;;;
	;6 face groups.. invert?
	mov	ax,di
	shr	al,2

	cmp	al,3
	jl	noneg
	neg	cx
	neg	bx
	neg	dx
	sub	al,3
noneg:


	;;;;;;;;;;;;;;;;;;;;;;;;
	;4 local faces
	bt	di,1
	jc	face2
	neg	bx
face2:

	mov	w [si+_x],cx
	mov	w [si+_y],bx
	mov	w [si+_z],dx

	fild	w [si+_z]
	fild	w [si+_y]
	fild	w [si+_x]

	bt	di,0
	jnc	face1
	fxch	st(1)
face1:
	;;;;;;;;;;;;;;;;;;;;;;;;






	;6 face group again... 
	;0 2
	cmp	al,1
	je	faceg1
	fxch	st(1)
faceg1:
	;1 2
	cmp	al,1
	jl	faceg12
	fxch	st(2)
faceg12:
	;2
	cmp	al,2
	jne	faceg2
	fxch	st(1)
faceg2:
	;;;;;;;;;;;;;;;;;;;;;;;;



	;;;;;;;;;;;;;;;;;;;;;;;;
	;Rotate
	mov	al,3
rol:	fild 	w [si+_deg]	;v x y z
roter:	fsincos			;c s x y z
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
	fxch	st(2)		;z y x
	fxch	st(1)		;y z x
	dec	al
	jne	rol
	fistp w [si+_z]
	fistp w [si+_y]
	fistp w [si+_x]
	;;;;;;;;;;;;;;;;;;;;;;;;


	;;;;;;;;;;;;;;;;;;;;;;;;
	;plot..
	mov	bx,w [si+_y]
	imul	bx,hx
	add	bx,w [si+_x]
	;;;;;;;;;;;;;;;;;;;;;;;;

	;;;;;;;;;;;;;;;;;;;;;;;;
	;color mask, hidden
	mov	ax,di
	and	al,1
	cmp	w [si+_z],ax	;ax=0....?
	jg	nohidden
	shr	al,1
	jc	hidden
	mov	al,2
nohidden:
	add	al,040h

	;;;;;;;;;;;;;;;;;;;;;;;;

	mov	cx,2
pll:	or	fs:[bx+hy/2*hx],al
	or	fs:[bx+hy/2*hx+hx],al
	inc	bx
	loop	pll

hidden:
	pop	cx
	dec	bp
	jne	interpolloop

	dec	cx
	jnz	baselineloop

	inc	di
	cmp	di,nfaces
	jne	faceloop



	;not float... ;)
	add	w [si+_deg],220


        mov     ah,01H                              ;get keyboard buffer status
        int     16H
	jz      igen
	ret
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;




;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
deg:	dw	?
temp:	dd	?,?,?;	equ	640
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

code	ends      
       	end start


