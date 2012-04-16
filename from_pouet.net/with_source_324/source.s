;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;              Compo: 512 bytes intro        Name: Glass                    ;;
;;                  code by Doctor Max^Global Corporation 		     ;;
;;                                Aug-2003                                   ;;
;;                      2:6037/1.27 dr_max3@mail.ru                          ;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

.model	tiny
.386

locals

.code
	org	0100h
start:	mov	al,13h
	int	10h

	mov	cx,cs
	add	ch,10h
	mov	gs,cx		;segment for sinus table
	add	ch,10h
	mov	[bckseg],cx     ;segment for background texture
	add	ch,10h
	mov	fs,cx		;segment for frame buffer
				;+10h Z-buffer zegment

;make sine table (256*256)
	finit
	fldz
@@sin:	fld	st(0)
	fsin
	fstp	dword ptr gs:[bx]
	fadd	[pi2]
	add	bx,4
	jnz	@@sin

;calculate edge
var_a	equ bp+2
var_b	equ bp+4
var_x	equ bp+6
var_dist equ bp+8
var_ret equ bp+10

	mov	bp,sp
	mov	si,offset points
	mov	di,offset edge
	xor	bx,bx
	mov	dx,7
@@lp1:	xor	ah,ah
	mov	al,[si+1]
	mov	[var_a],ax
	mov	al,[si+3]
	mov	[var_b],ax
	mov	cl,[si+2]
	sub	cl,[si]
	xor	ch,ch
	mov	[var_dist],cx
	mov	[var_x],word ptr 0
@@lp:	call	interpolate
	mov	ax,bx		;x
	sub	ax,175/2
	stosw
	mov	ax,[var_ret]	;y
	stosw
	inc	word ptr [var_x]
	inc	bx
	loop	@@lp
	add	si,2
	dec	dx
	jnz	@@lp1

;make palette
	mov	dx,03c8h
	xor	ax,ax
	out	dx,al
	inc	dx
@@pal:	out	dx,al
	out	dx,al
	out	dx,al
	inc	al
	cmp	al,64
	jnz	@@pal
@@pal1:	dec	al
	out	dx,al
	out	dx,al
	out	dx,al
	jnz	@@pal1

;make background texture
	mov	ax,[bckseg]
	mov	es,ax
	push	0a000h
	pop	ds
	mov	di,64000
	xor	cx,cx
@@1:	add	bl,[di-318]
	add	bl,[di-319]
	add	bl,[di-639]
	shr	bl,2
	sub	dl,dh
	ror	dx,3
	xor	dx,3a36h
	mov	ax,dx
	shr	al,6
	add	al,bl
	dec	ax
	mov	bl,al
	mov	[di],al
	stosb
	loop	@@1

MainLoop:
	push	cs
	pop	ds

;wait for vertical retrace
	mov	dx,03dah
@@vs0:	in	al,dx
	test	al,8
	jz	@@vs0
@@vs1:	in	al,dx
	test	al,8
	jnz	@@vs1

;copy texture to framebuffer
	dec	cx		;now cx=65535
	mov	ax,[bckseg]
	mov	ds,ax
	push	fs
	pop	es
	mov	si,di
	rep	movsb

	push	cs
	pop	ds

;drawing figure
	mov	cx,175
	mov	si,offset edge
@@lp1:	lodsw
	mov	[xxx],ax
	lodsw
	mov	[yyy],ax
	pusha
	xor	bx,bx
@@lp:	pusha
	mov	ax,[xxx]
	mov	[xx],ax
	mov	ax,[yyy]
	mov	[yy],ax
	xor	ax,ax
	mov	[zz],ax
	mov	si,offset yy
	mov	di,offset zz
	call	Rotate

	mov	bx,[angle]
	call	Rotate
	dec	si
	dec	si
	call	Rotate
	dec	di
	dec	di
	mov	bx,[angle1]
	call	Rotate

;put pixels
	push	ds

	mov	ax,[di]		;yy
	mov	cl,al
	add	ax,-108
	imul	di,ax,320
	mov	ax,[si]		;xx
	add	ax,-90
	add	di,ax

	mov	dx,[si+4]	;zz

	mov	cx,fs
	add	ch,10h
	mov	ds,cx
	call	PutZ
	call	PutZ
	call	PutZ
	add	di,320-3
	call	PutZ
	call	PutZ
	call	PutZ

	pop	ds

	popa

	add	bx,80h
	jnz	@@lp
	popa
	loop	@@lp1

	add	[angle],0200h
	add	[angle1],0160h

;clear Z-buffer
;copy framebuffer to screen

	dec	cx	;now cx=65535

	mov	ax,fs
	add	ah,10h
	mov	ds,ax

	push	0a000h
	pop	es
@@copy:	mov	[di],byte ptr 127
	mov	al,fs:[di]
	stosb
	loop	@@copy

	in	al,60h
	dec	al
	jnz	MainLoop

Exit:	mov	ax,3
	int	10h
	mov	ax,4c00h
	int	21h

PutZ:	cmp	[di],dl
	jl	@@ret
	mov	[di],dl
	mov	al,dl
	and	al,7fh
	mov	fs:[di],al
@@ret:	inc	di
	ret

;;;;;;;;;;;;;;;;;;;cosine interpolation
;	P = (x/distance) * PI
;	Q = (1-cos(P))*0.5
;	return  a*(1-Q) + (b*Q)
interpolate:
	fild	word ptr [var_b]	;st(0)=b
	fld1				;st(0)=1 st(1)=b
	fild	word ptr [var_x]        ;st(0)=x st(1)=1 st(2)=b
	fidiv	word ptr [var_dist]     ;st(0)=x/dist st(1)=1 st(2)=b
	fldpi				;st(0)=pi st(1)=x/dist st(2)=1 st(3)=b
	fmul                            ;st(0)=pi*x/dist st(1)=1 st(2)=b
	fcos                            ;st(0)=cos(x/dist*pi) st(1)=1 st(2)=b
	fld1				;st(0)=1 st(1)=cos(x/dist*pi) st(1)=1 st(2)=b
	fsubr                           ;st(0)=1-cos(x/dist*pi) st(1)=1 st(2)=b
	fmul	[halfone]               ;st(0)=(1-cos(x/dist*pi))*0.5 st(1)=1 st(2)=b
	fsub	st(1),st                ;st(0)=Q st(1)=1-Q st(2)=b
	fmulp	st(2),st		;st(0)=1-Q st(1)=b*Q
	fimul	word ptr [var_a]	;st(0)=a*(1-Q) st(1)=b*Q
	faddp	st(1),st		;st(0)=a*(1-Q)+(b*Q)
	fistp	word ptr [var_ret]
	ret

;;;-----------------------; Rotate axis ;--------------------;;;
;; input:                                                     ;;
; 	si - pointer to 1-st coord                             ;
;	di - pointer to 2-nd coord                             ;
;;	bx - angle to rotation                                ;;
;;;----------------------------------------------------------;;;
Rotate:	fld	dword ptr gs:[bx+4096*4]
	fild	word ptr [si]
	fld	st(0)
	fmul	dword ptr gs:[bx]
	fild	word ptr [di]
	fmul	st,st(3)
	fsubp
	fistp	word ptr [si]
	fmulp
	fild	word ptr [di]
	fmul	dword ptr gs:[bx]
	faddp
	fistp	word ptr [di]
	ret

angle	dw	0
angle1	dw	0

halfone dd	0.5
pi2	dd	39C9FFDBh	;pi/8192
points	db	0,32,38,45,100,3,107,8,116,2,145,2,160,10,175,30

	db	0,0,0,0

	org	0400h
xx	dw	?
yy	dw	?
zz	dw	?
xxx	dw	?
yyy	dw	?
zzz	dw	?
bckseg	dw	?

edge	dw	175*2 dup(?)

end	start
