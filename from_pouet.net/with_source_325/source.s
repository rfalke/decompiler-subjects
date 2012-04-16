;-----------------------------------------------------------------------------;
;		Compo: 512 bytes intro        Name: Torus512                  ;
;                       Computer Art Festival 2002
;		   code by Doctor Max^Global Corporation		      ;
;				2:6037/1.27				      ;
;-----------------------------------------------------------------------------;

.model	tiny
.386
.387
locals

GMport	=	330h		;General Midi port

.code
	org	0100h
start:	mov	al,13h
	int	10h

	mov	ax,cs
	add	ah,10h
	mov	bp,ax		;background segment
	mov	es,ax
	add	ah,10h
	mov	gs,ax		;segment for sinus table
	add	ah,10h
	mov	fs,ax		;framebuffer segment
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

;make palette
	mov	dx,03c8h
	xor	ax,ax
	out	dx,al
	inc	dx
	mov	cx,64
@@pal:	out	dx,al
	out	dx,al
	out	dx,al
	inc	al
	loop	@@pal
	call	Pal
	mov	[Pal_m1+1],0c3h
	mov	[Pal_m2+1],0c0h
	call	Pal

;make background texture
	push	0a000h
	pop	ds
	mov	di,64000
@@1:	add	bl,[di-320]
	add	bl,[di-319]
	add	bl,[di-318]
	shr	bl,2
	sub	dl,dh
	ror	dx,3
	xor	dx,3636h
	mov	ax,dx
	shr	al,6
	add	al,bl
	dec	ax
	mov	bl,al
	mov	[di],al
	stosb
	loop	@@1

MainLoop:
;wait for vertical retrace
	push	dx
	mov	dx,03dah
@@vs:	in	al,dx
	test	al,8
	jz	@@vs

;copy texture to framebuffer
	push	bp
	pop	ds
	push	fs
	pop	es
	mov	si,di
	dec	cx		;now CX=65535
	rep	movsb

	push	cs
	pop	ds

	dec	byte ptr [muscnt]
	jnz	@@nomus

	mov	dx,GMport
	mov	al,0c9h
	out	dx,al
	mov	al,1
	out	dx,al
	mov	al,99h
	out	dx,al

	db	0beh		;mov si,offset music
musptr	dw	offset music
	lodsb
	test	al,al
	jnz	@@nlp
	mov	si,offset music
	lodsb
@@nlp:	mov	[musptr],si
	out	dx,al
	mov	al,7fh
	out	dx,al
	mov	[muscnt],3

@@nomus:
	pop	dx

	xor	ax,ax
@@lp:	mov	si,offset x
	mov	di,offset z
	mov	[si],dword ptr 0
	mov	[di],word ptr 60
	mov	bx,ax
	call	Rotate
	dec	di
	dec	di
	call	RotateXYZ

	mov	si,offset c_x
	mov	di,offset c_y
	mov	[si],word ptr 128
	mov	[di],dword ptr 0
	call	RotateXYZ
	call	PutPixels

	inc	ah
	jnz	@@lp
	add	cx,80h
	jnz	@@lp
	dec	dh
	dec	dh

;shadow
;clear Z-buffer
;copy framebuffer to screen
	xor	di,di
@@shd:	push	bp
	pop	es
	mov	al,[di]
	cmp	al,127
	je	@@nosh
	mov	al,[di+(320*8)+16]
	cmp	al,127
	jne	@@nosh
	mov	al,es:[di]
	sub	al,8
	mov	fs:[di+(320*8)+16],al
@@nosh:	mov	[di],byte ptr 127
	mov	al,fs:[di]
	push	0a000h
	pop	es
	stosb
	loop	@@shd

	in	al,60h
	dec	al
	jnz	MainLoop

	mov	ax,3
	int	10h
	ret

PutPixels:
	pusha

;chess texture
	xor	ch,ah
	and	ch,20h
	add	ch,ch

;calc Z
;	current di = c_z
	mov	bx,[di-6]	;z
	add	bx,[di]		;c_z
	shr	bx,1

;calc screen offset
;	current si = c_y
	mov	ax,[y]
	add	ax,[si]		;c_y
	sar	ax,1
	imul	di,ax,320
	mov	ax,[x]
	add	ax,[c_x]
	sar	ax,1
	add	ax,160+(100*320)
	add	di,ax

;calc color
	mov	ax,[x]
	imul	ax
	mov	bp,ax
	mov	ax,[y]
	imul	ax
	add	ax,bp
	not	ax
	shr	ax,6
	add	ax,128
	add	al,ch

	mov	cx,fs
	add	ch,10h
	mov	ds,cx
	call	PutZ
	call	PutZ
	add	di,320-2
	call	PutZ
	call	PutZ
	popa
	ret

PutZ:	cmp	[di],bl
	jl	@@ret
	mov	[di],bl
	mov	fs:[di],al
@@ret:	inc	di
	ret

;;;---------------------; Rotate XYZ axis ;------------------;;;
;; input:                                                     ;;
; 	cx - X (YZ)                                            ;
;;	dx - Y (XZ)                                           ;;
;;;----------------------------------------------------------;;;
RotateXYZ:
	mov	bx,cx
	call	Rotate
	inc	di
	inc	di
	mov	bx,dx
	call	Rotate
	inc	si
	inc	si
	mov	bx,dx
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

Pal:	xor	bx,bx
@@pal1:	mov	al,bl
	out	dx,al
Pal_m1	db	8ah,0c7h	;mov	al,bh
	out	dx,al
	mov	al,bh
	out	dx,al
	add	bl,2
	cmp	bl,64
	jnz	@@pal1

@@pal2:	mov	al,63
	out	dx,al
Pal_m2	db	8ah,0c7h	;mov	al,bh
	out	dx,al
	mov	al,bh
	out	dx,al
	add	bh,2
	cmp	bh,64
	jnz	@@pal2
	ret

pi2	dd	39C9FFDBh

music	db	24h,2ch,33h,26h,33h,33h,26h,33h,24h,2ch,24h,33h,26h
muscnt	db	1

	org	0370h
x	dw	?
y	dw	?
z	dw	?
c_x	dw	?
c_y	dw	?
c_z	dw	?

end	start
