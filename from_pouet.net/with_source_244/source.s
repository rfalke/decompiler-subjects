;***************************************************************************;
;*			   l a m e r O S				   *;
;***************************************************************************;								    
;* Toto intro napisal loveC pocas februara roku 2000
;* Mail: matejice@decef.elf.stuba.sk,matejice@redbull.dcs.fmph.uniba.sk
;* 3sc dakujem pomoc a podporu
;* bEETLE - ratanie polohy svetelneho zdroja, pomoc pri ladeni palety
;* -baze-> moralna podpora, dobre napady, ako spestrit demo
;**************************************************************************
;odporucam kompilovat pod nasmom ;)
;odkaz na nasm: www.web-sites.co.uk/nasm/

[ORG 100h]
R	equ	30
XS	equ	128
YS	equ	100

OFFSET	equ	32+256+320*199
CONST	equ	200*256-OFFSET
TS	equ	256*YS+XS-CONST
XJ	equ	-10
YJ	equ	25
ZJ	equ	100
QJ	equ	-50

%define param(x,y) (256*y)+x+TS
%define par(x1,y1,x2,y2) 256*((y1+y2)/2)+(x1+x2)/2+TS

	std
	mov	ax,13h
	int	10h
XXX	loop	XXX
initPal mov	dx,3C8h
	mov	al,cl
	out	dx,al
	inc	dx
	shr	al,1
	out	dx,al
	mul	al
	shr	ax,7
	out	dx,al
	adc	al,al
	out	dx,al
	loop	initPal

        push	word 0A000h		;do es adresa obrazovky
	pop	es
	
ALL	mov	si,ENDTABLE-2	     	; Znulujeme "buducu" obrazovku
	mov	bh,3
NULL	mov	[bx],ch
	inc	bx
	jnz	NULL


KRUH 	mov	bl,-R
	mov	al,[XN]
	cwd
	imul	bl
	mov	cx,12+12*256
	mov	di,ax

FOR	movsx	bx,bl		;dx= x	
	sub	dx,bx
	add	di,byte XJ

XN	equ	$-1
	sub	dx,bx           ;dx=R*R-x*x

	mov	ax,dx                  
	div	ch		;yres=sqrt(R*R-x*x)=(yresOld+(R*R+x*x))/2*yresOld

	xadd	ch,al
	shr	ch,1

	pusha
	xor	si,si
	mov	bh,ch
	mov	al,[YN]
	neg	bh
	imul	bh
	add	di,ax

FOR2	movsx	dx,bh
	sub	si,dx
	add	di,byte YJ

YN	equ	$-1
	sub	si,dx
	mov	ax,si
	div	cl
	xadd	cl,al
	shr	cl,1
	mov	al,[ZN]
	imul	cl
	add	ax,di
	shl	ax,3
	jnc	short OK
;	neg	ah
	and	ah,cl
OK	mov	[bx+TS],ah
OVER	equ	$-2
	inc	bh
	cmp	bh,ch
	jl	FOR2
	popa
	inc	bx
	cmp	bl,R
	jl	FOR

	lodsw
	mov	cx,QJ+ZJ*256
QN	equ	$-2
ZN	equ	$-1
	sar	cl,1
	sar	ch,3
	add	ax,cx
	mov	[OVER],ax
	cmp	si,TABLE-2
	jnz	KRUH

	mov	dx,3DAh
FRAM	in	al,dx
	and	al,8
	jz	FRAM

PICT    mov	di,OFFSET
	mov	si,di
DRAW	mov	cx,128
	rep	movsw
	sub	di,320-256
	jnc	short DRAW
        mov	cl,5

	mov	bx,ZN

	mov	ax,[XN-1]
	mov	dl,ah
	sar	ah,2
	call	UTIL
	xchg	dx,ax
	sub	ax,dx
	mov	[XN],al

;	mov	bl,QN-256
	dec	bx
	mov	ax,[YN-1]
	sar	ah,cl
	call	UTIL
	sub     [YN],al
	
KEYWAIT in	al,60h
	dec	al
	jnz	near ALL
	mov	ax,3
	int	10h
UTIL	add	[bx],ah
	mov	al,[bx]
	sar	al,cl
	ret

X4	equ	60
Y4	equ	30
X3	equ	-70
Y3	equ	40
X2	equ	10
Y2	equ	-60
X1	equ	-5
Y1	equ	55

LASTY	equ	(param(X4,Y4)) / 256

TABLE	dw	param(X4,Y4)
	dw	param(X1,Y1)
	dw	par(X1,Y1,X2,Y2)
	dw	par(X1,Y1,X3,Y3)
	dw	par(X1,Y1,X4,Y4)
	dw	param(X2,Y2)
	dw	par(X2,Y2,X3,Y3)
	dw	par(X2,Y2,X4,Y4)
	dw	param(X3,Y3)	
;	dw	par(X3,Y3,X4,Y4)
ENDTABLE
