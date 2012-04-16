ASSUME cs:CODE
JUMPS

include	macros.inc

.386p

seed		equ 456h			;For random number generator
VideoMode	equ 10Dh			;Vesa mode number ( LFB )

NPat		equ 8				;Number of patterns (odd)
NTex		equ 8				;Number of textures

Buffer		equ 0				;Buffer size   = 64000*4
Textures	equ Buffer+40000h		;Textures ( 24bit )
Patterns	equ Textures+NTex*20000h	;Patterns ( for texture maker )
LightMap	equ Patterns+NPat*10000h	;LightMap ( phongmap )
TunelBuffer	equ LightMap+10000h		;Buffer for tunnels (
MemoryEnd	equ TunelBuffer+10000h*6	;End of used memory

MemSize		equ (MemoryEnd-Buffer)/1000+200
;=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
CODE	SEGMENT USE16
	org	100h
Start:
	finit				;Init floating point unit

	mov	ax,1130h		;Get system font table 
	mov	bh,6			;Font number (8x16)
	int	10h			;Call bios function
	mov	cs:[FontOfs],bp		;Save font table offset
	mov	cs:[FontSeg],es		;Save font table segment	

	call	RunFlatMode		;Enter flat voodo mode ( V86 ? )
	push	cs
	pop	ds
	call	XMSInit			;Init XMS Driver ( Check if exists )
	push	cs
	pop	es
	call	InitVesa		;Init vesa mode  ( if possible )

	xor	ax,ax			;Clear selectors :
	mov	fs,ax			; fs = base = 0
;=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
	mov	edi,ds:[TabPtr]		;Clear memory 	
	mov	ecx,MemSize/4*1000	;- Whole reserved memory
	xor	eax,eax			;- by dwords
Clear1:	lstosd				;- using lstosd ( edi instead of di )
	loopd	Clear1			;  instruction using ecx instead of cx

	in	al,21h			;Disable keyboard
	or	al,2		
	out	21h,al

	call	SetTimer		;Set timer at 182 Hz
	call	MakePatterns		;Generate patterns for textures
	call	MkTextures		;Generate all textures
	call	MkTraceTab		;Used in raytracing
;=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
;&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
;&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
;&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
	mov	ds:[FrameCount],0
;>>>>>>>>>>>>>>>>>>>>>>>> Effect no. 1 - double tunnel <<<<<<<<<<<<<<<<<<<<<<<<<
Effect1:
	fild	ds:[FrameCount]
	fmul	ds:[T1]
	fstp	ds:[OriginZ]
	cmp	ds:[FrameCount],182*8
	jb	NoEf1a

	fild	ds:[FrameCount]
	fisub	ds:[dtime]
	fld	ds:[dkx1]
	fmul	st,st(1)
	fstp	ds:[anglex]
	fld	ds:[dky1]
	fmul	st,st(1)
	fstp	ds:[angley]
	fld	ds:[dkz1]
	fmul	st,st(1)
	fstp	ds:[anglez]

	fmul	ds:[dkz1]
	fsin
	fimul	ds:[dxx1]
	fstp	ds:[OriginX]
NoEf1a:
	call	PreRotates
	call	FdTunel
	call	TunelInt1
	call	ColorInt1
	mov	ebx,Textures+20000h*4
	call	SingleShadeTun
	mov	si,offset napis1
	call	PutText
	mov	si,offset napis2
	call	PutText
	mov	cx,182*(8+18)
	call	CopyScreen
	in	al,60h
	cmp	al,1
	jz	EndOfIntro
	cmp	ds:[FrameCount],182*(8+20)+40
	jb	Effect1
;-------------------------------------------------------------------------------
	mov	ds:[FrameCount],0
Effect2:
	mov	edi,ds:[TabPtr]
	lea	ebx,[edi+Textures+20000h]
	add	edi,20000h
	mov	word ptr ds:[ZRLen+1],320
	mov	word ptr ds:[ZRLen2+2],0
	call	ZoomRot
	mov	esi,Patterns+00000h
	call	SineTrace
	call	TunelInt1
	call	ColorInt1
	mov	ebx,Textures+60000h
	call	SingleShadeTun
	call	MixColor
	mov	si,offset napis3
	call	PutText
	mov	cx,182*12
	call	CopyScreen
	in	al,60h
	cmp	al,1
	jz	EndOfIntro
	cmp	ds:[FrameCount],182*12+500
	jb	Effect2
;-------------------------------------------------------------------------------
	mov	ds:[FrameCount],0
	fild	ds:[ZRScale]
	fstp	ds:[OriginZ]
Effect3:
	fild	ds:[FrameCount]
	fld	ds:[dkx1]
	fmul	st,st(1)
	fstp	ds:[anglex]
	fld	ds:[dky1]
	fmul	st,st(1)
	fstp	ds:[angley]
	fld	ds:[dkz1]
	fmul	st,st(1)
	fstp	ds:[anglez]

	fmul	ds:[dkz1]
	fsin
	fimul	ds:[dxx1]
	fstp	ds:[OriginX]

	call	PreRotates
	mov	edi,ds:[TabPtr]
	lea	ebx,[edi+Textures+40000h]
	add	edi,Textures+60000h
	mov	word ptr ds:[ZRLen+1],200
	mov	word ptr ds:[ZRLen2+2],56
	call	ZoomRot
	call	FdPlane
	call	TunelInt1
	call	ColorInt1
	mov	ebx,Textures+60000h
	call	SingleShadeTun
	mov	si,offset napis4
	call	PutText
	mov	si,offset napis5
	call	PutText
	mov	cx,182*18
	call	CopyScreen
	in	al,60h
	cmp	al,1
	jz	EndOfIntro
	cmp	ds:[FrameCount],182*18+500
	jb	Effect3
;-------------------------------------------------------------------------------
	mov	ds:[FrameCount],0
	fldz
	fstp	ds:[OriginZ]
Effect4:
	fild	ds:[FrameCount]
	fisub	ds:[dtime]
	fld	ds:[dkx1]
	fmul	st,st(1)
	fstp	ds:[anglex]
	fld	ds:[dky1]
	fmul	st,st(1)
	fstp	ds:[angley]
	fld	ds:[dkz1]
	fmul	st,st(1)
	fstp	ds:[anglez]
	fmul	ds:[dkz1]
	fsin
	fimul	ds:[dxx1]
	fstp	ds:[OriginX]

	call	PreRotates
	call	FdTunel
	mov	si,offset TraceTab
	mov	di,offset TraceTabZap
	mov	cx,41*26*12/4
	rep	movsd
	fld	ds:[angley]
	fadd	ds:[T1]
	fstp	ds:[angley]
	call	PreRotates
	call	FdTunel

	mov	di,offset TraceTab	
	mov	si,offset TraceTabZap
	mov	cx,41*26
Link:
	mov	eax,[si]
	sub	[di],eax
	mov	eax,[si+4]
	sub	[di+4],eax
	mov	ax,[si+8]
	cmp	ax,[di+8]
	jb	Link1
	mov	[di+8],ax
Link1:
	add	si,12
	add	di,12
	loop	Link

	call	TunelInt1
	call	ColorInt1
	mov	ebx,Textures+40000h
	call	SingleShadeTun
	mov	si,offset napis6
	call	PutText
	mov	si,offset napis7
	call	PutText

	mov	cx,182*(8+18)
	call	CopyScreen
	in	al,60h
	cmp	al,1
	jz	EndOfIntro
	cmp	ds:[FrameCount],182*(18+8)+500
	jb	Effect4
;-------------------------------------------------------------------------------
	mov	ds:[FrameCount],0
Effect5:
	mov	esi,Patterns+20000h
	call	SineTrace
	call	TunelInt1
	call	ColorInt1
	mov	ebx,Textures+80000h
	call	SingleShadeTun
	mov	si,offset napis8
	call	PutText
	mov	cx,182*10
	call	CopyScreen
	in	al,60h
	cmp	al,1
	jz	EndOfIntro
	cmp	ds:[FrameCount],182*10+500
	jb	Effect5
;-------------------------------------------------------------------------------
	inc	word ptr ds:[PutF1+5]
	inc	word ptr ds:[PutF1+5]
	mov	ds:[Sine1],180
	mov	ds:[dxx1],400
	mov	ds:[FrameCount],0
Effect6:
	mov	esi,Patterns+20000h
	call	SineTrace
	call	TunelInt1
	call	ColorInt1
	mov	ebx,Textures+20000h
	call	SingleShadeTun
	mov	esi,ds:[TabPtr]
	lea	edi,[esi+20000h]
	mov	cx,64000*2/4
	rep	lmovsd
	fild	ds:[FrameCount]
	fld	ds:[dkx1]
	fmul	st,st(1)
	fstp	ds:[anglex]
	fld	ds:[dky1]
	fmul	st,st(1)
	fstp	ds:[angley]
	fld	ds:[dkz1]
	fmul	st,st(1)
	fstp	ds:[anglez]

	fmul	ds:[dkz1]
	fsin
	fimul	ds:[dxx1]
	fstp	ds:[OriginX]

	call	PreRotates
	call	FdPlanes
	call	TunelInt1
	call	ColorInt1
	mov	ebx,Textures+40000h
	call	SingleShadeTun
	call	MixColor
	mov	si,offset napis10
	call	PutText
	mov	si,offset napis11
	call	PutText
	mov	cx,182*18
	call	CopyScreen
	in	al,60h
	cmp	al,1
	jz	EndOfIntro
	cmp	ds:[FrameCount],182*18+500
	jb	Effect6
;-------------------------------------------------------------------------------
	mov	ds:[FrameCount],0
	mov	esi,Patterns+20000h
	add	esi,ds:[TabPtr]
	lea	edi,[esi-20000h]
	mov	ds:[FlowTab1],edi
	mov	cx,65536/4
	rep	lmovsd
	mov	ds:[FlowTab2],edi
Effect7:
	call	Flow
	xor	ecx,ecx
	mov	ebx,edi
	mov	bp,1
	call	Blur256
	mov	edi,ds:[TabPtr]		;ebx=FlowTab1
	lea	eax,[edi+Textures]
	shr	eax,1
	mov	edx,ebx
	mov	cx,200
FloCop1:
	inc	dh
	xor	bl,bl
	xor	dl,dl
	mov	bp,320
FloCop2:
	mov	al,[ebx]
	inc	bl
	mov	ah,al
	sub	al,[ebx]
	sub	ah,[edx]
	inc	dl
	add	ax,bx
	add	ax,si
	mov	ax,[eax+eax]
	lstosw
	dec	bp
	jnz	FloCop2
	inc	bh
	loop	FloCop1
	mov	si,offset napis9
	call	PutText
	mov	si,offset napis12
	call	PutText
	mov	cx,25*182
	call	CopyScreen
	in	al,60h
	cmp	al,1
	jz	EndOfIntro
	cmp	ds:[FrameCount],182*25+500
	jb	Effect7
;-------------------------------------------------------------------------------
;-------------------------------------------------------------------------------
EndOfIntro:
	mov	ax,3			;Switch into text mode
	int	10h			;Call bios

	in	al,21h			;Enable keyboard
	and	al,0FDh
	out	21h,al

	call	XMSDealloc		;Free memory ( reserved by XMS Driver )
	call	ResetTimer		;Set old 8h interrupt at 18.2 Hz
	mov	byte ptr cs:[FlatC],0	;Limit 64Kb
	call	DisableFlatMode		;Turn off magic 4Gb segments
	ret				;Ant that's all folks
;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
;ef1data
	dxx1	dw 80
;	doz1	dd 1.0
	dkx1	dd 0.001
	dky1	dd 0.002
	dkz1	dd 0.003
	dtime	dw 182*8
;--------------------------- text's positiones --------------------------------
napis1 	dw 0703h,20+20*320
	db 0
napis2 	dw 0F0Bh,40+160*320
	db 32
napis3 	dw 0603h,20+100*320
	db 64
napis4 	dw 0603h,60+140*320
	db 96
napis5 	dw 0C09h,90+10*320
	db 128
napis6 	dw 0803h,50+100*320
	db 160
napis7 	dw 0D0Ah,10+150*320
	db 192
napis8 	dw 0603h,50+120*320
	db 224
napis9 	dw 0803h,20+160*320
	db 64
napis10	dw 0603h,40+60*320
	db 0
napis11	dw 0A08h,20+10*320
	db 32
napis12	dw 0F09h,20+10*320
	db 96

;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
include	xms.inc
include timer.inc
include flatram.inc
;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
include mkpatern.inc
include plasma.inc

include zoomrot.inc
include ray.inc
include flow.inc
;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
TexMakeTab:
	db 6
	
	db 0
	dw 0
	db 200,90,20
	db 0
	dw 20+20*256
	db 20,92,128
	db 0
	dw 120+120*256
	db 64,128,192
	db 0
	dw 180+40*256
	db 128,128,128
	db 0
	dw 80+80*256
	db 32,84,128
	db 1
	dw 84+200*256
	db 62,64,20
TexMakeTab2:
	db 7

	db 0
	dw 0
	db 60,90,128
	db 0
	dw 140+140*256
	db 0,64,64
	db 0
	dw 200+190*256
	db 0,64,128
	db 1
	dw 32000
	db 128,64,64
	db 0
	dw 80+60*256
	db 0,64,64
	db 0
	dw 220+220*256
	db 0,128,128
	db 0
	dw 128+128*256
	db 0,64,128
TexMakeTab3:
	db 5

	db (1 shl 1)
	dw 0
	db 120,102,90
	db (1 shl 1)
	dw 5+5*256
	db 0,40,50
	db (2 shl 1)
	dw 0
	db 40,80,160
	db (0 shl 1)+1
	dw 0
	db 140,180,100
	db (0 shl 1)
	dw 120+120*256
	db 120,70,70
TexMakeTab4:
	db 5

	db (2 shl 1)
	dw 0
	db 60,120,192
	db (2 shl 1)
	dw 50+50*256
	db 160,90,92
	db (2 shl 1)
	dw 100+100*256
	db 0,40,40
	db (0 shl 1)+1
	dw 0
	db 180,180,180
	db (0 shl 1)
	dw 150+150*256
	db 60,80,0
TexMakeTab5:
	db 6

	db 0
	dw 0
	db 60,90,128
	db 0
	dw 0
	db 64,192,192
	db 0
	dw 40+40*256
	db 0,64,128
	db 0
	dw 80+60*256
	db 128,64,0
	db 0
	dw -40-40*256
	db 66,64,128
	db (4 shl 1)+1
	dw 0
	db 128,128,85
TexMakeTab6:
	db 3
	
	db (5 shl 1)
	dw 0
	db 255,255,255
	db (4 shl 1)+1
	dw 0
	db 0,255,120
	db 1
	dw 20000
	db 0,0,155
TexMakeTab7:
	db 3
	
	db (6 shl 1)
	dw 0
	db 255,255,255
	db (4 shl 1)+1
	dw 0
	db 0,255,120
	db 1
	dw 20000
	db 0,0,155
TexMakeTabEnd:
;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
Sine1	dw 80

SineTrace	PROC
	add	esi,ds:[TabPtr]
	mov	ebx,esi
	mov	ax,ds:[FrameCount]
	mov	si,ax
	shr	si,3
	mov	bx,si
	neg	bx
	shl	bx,8
	sub	bx,si
	mov	di,offset TraceTab
	xor	dx,dx
SineTrace1:
	xor	cx,cx
	mov	bp,41
SineTrace2:
	mov	al,[esi]
	inc	si
	inc	si
	xor	ah,ah
	sub	ax,128
	imul	ax,ds:[Sine1]
	add	ax,cx
	stosw
	stosw
	mov	al,[ebx]
	inc	bx
	inc	bx
	xor	ah,ah
	sub	ax,128
	imul	ax,ds:[Sine1]
	add	ax,dx
	stosw
	stosw
	xor	ax,ax
	stosw
	stosw
	add	ch,8
	dec	bp
	jnz	SineTrace2
	add	si,512-(41*2)
	add	bx,512-(41*2)
	add	dh,8
	cmp	dh,26*8
	jnz	SineTrace1
	ret
SineTrace	ENDP
;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
MixColor	PROC
	mov	esi,ds:[TabPtr]
	shr	esi,1
MixColor1:
	mov	ax,[esi+esi]
	mov	bx,[esi+esi+20000h]
	mov	cx,ax
	mov	dx,bx
	and	ax,111110000011111b
	and	bx,111110000011111b
	and	cx,000001111100000b
	add	ax,bx
	and	dx,000001111100000b
	shr	ax,1
	add	cx,dx
	shr	cx,1
	and	ax,111110000011111b
	and	cx,000001111100000b
	or	ax,cx
	mov	[esi+esi],ax
	inc	si
	cmp	si,64000
	jnz	MixColor1
	ret
MixColor	ENDP
;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
PutText	PROC
	lodsw
	cmp	byte ptr ds:[FrameCount+1],al
	jb	NoPutText
	cmp	byte ptr ds:[FrameCount+1],ah
	ja	NoPutText
	lodsw
	mov	ebx,ds:[TabPtr]
	mov 	edi,ds:[TabPtr]
	shr	edi,1
	mov	di,ax
PutF1:	add	ebx,Textures+0A0000h
	lodsb
	shr	ebx,1
	mov	bh,al
	mov	cx,32
PutText1:
	mov	ax,[ebx+ebx]
	inc	bx
	or	ax,ax
	jz	PutText2
	mov	[edi+edi],ax
PutText2:
	inc	di
	or	bl,bl
	jnz	PutText1
	add	di,64
	loop	PutText1
NoPutText:
	ret
PutText	ENDP
;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
TexAdd	PROC
	xor	ah,ah
	shl	eax,16
	mov	ebx,ds:[TabPtr]
	lea	ebx,[ebx+eax+Patterns]
	lodsw
	mov	bx,ax
	push	edi
	mov	cx,3
TexAdd0:
	push	edi
	xor	bp,bp
TexAdd1:
	mov	al,[ebx]
	inc	bx
	mul	byte ptr [si]
	add	ah,[edi]
	jnc	NoneTexAdd
	mov	ah,255
NoneTexAdd:
	mov	[edi],ah
	add	edi,3
	inc	bp
	jnz	TexAdd1
	pop	edi
	inc	edi
	inc	si
	loop	TexAdd0
	pop	edi
	ret
TexAdd	ENDP
;------------------------------------------------------------------------------
TexSub	PROC
	xor	ah,ah
	shl	eax,16
	mov	ebx,ds:[TabPtr]
	lea	ebx,[ebx+eax+Patterns]
	lodsw
	mov	bx,ax
	push	edi
	mov	cx,3
TexSub0:
	push	edi
	xor	bp,bp
TexSub1:
	mov	al,[ebx]
	inc	bx
	mul	byte ptr [si]
	mov	al,[edi]
	sub	al,ah
	jnc	NoneTexSub
	xor	al,al
NoneTexSub:
	mov	[edi],al
	add	edi,3
	inc	bp
	jnz	TexSub1
	pop	edi
	inc	edi
	inc	si
	loop	TexSub0
	pop	edi
	ret
TexSub	ENDP
;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
MkTextures	PROC
	mov	edi,ds:[TabPtr]
	add	edi,Textures
	mov	si,offset TexMakeTab
MkTex0:
	push	edi
	mov	edi,ds:[TabPtr]
	push	edi		;Clear memory for texture
	mov	cx,(10000h/4)*3
	xor	eax,eax
	rep	lstosd
	pop	edi
	lodsb
	xor	ch,ch
	mov	cl,al
MkTex1:
	push	cx
	lodsb
	shr	al,1
	jnc	TAdd1
	call	TexSub
	jmp	TSub1
TAdd1:
	call	TexAdd
TSub1:
	pop	cx
	loop	MkTex1	
;--- Convert texture to 15 bit color ----------
	pop	edi
	push	si
	mov	esi,ds:[TabPtr]
	xor	bx,bx
C24to15:
	llodsw
	shr	ah,3
	shr	ax,3
	mov	dl,[esi]
	and	dl,11111000b
	shl	dx,2+5
	or	ax,dx
	inc	esi
	lstosw
	inc	bx
	jnz	C24to15
	pop	si
	cmp	si,offset TexMakeTabEnd
	jnz	MkTex0
	ret
MkTextures	ENDP
;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
VesaError 	db 'Vesa 2.0 only !$'

InitVesa	PROC
	mov	di,offset VesaNfo
	mov	cx,VideoMode
	mov	ax,4f01h
	int	10h
	or	ah,ah
	jnz	Error
	mov	ax,4f02h
	mov	bx,VideoMode+16384
	int	10h
	or	ah,ah
	jnz	Error
	cmp	al,4fh
	jnz	Error
	mov	eax,ds:[CodeLinear]
	sub	ds:[VramPtr],eax
	ret
Error:
	mov	dx,offset VesaError
	mov	ah,9
	int	21h
	mov	ah,4ch
	int	21h
InitVesa	ENDP
;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
CopyScreen	PROC
	mov	dx,3dah
@CopySc1:
	in	al,dx
	and	al,8
	jz	@CopySc1

	mov	esi,ds:[TabPtr]
	mov	edi,ds:[VramPtr]
	mov	ax,ds:[FrameCount]
	sub	cx,ax
	neg	cx
	or	cx,cx
	jle	NoFadeOut
	shr	cx,4
	jmp	StartFade
NoFadeOut:
	or	ah,ah
	jnz	NormalCopy
	xor	al,-1
	shr	ax,3
	mov	cx,ax
StartFade:
	shr	esi,1
FadeLoop:
	mov	ax,[esi+esi]
	inc	si
	mov	dx,ax
	and	ax,111110000011111b
	sub	al,cl
	jge	NoBlF
	xor	al,al
NoBlF:	
	shl	cx,2
	and	dx,000001111100000b
	sub	ah,cl
	jge	NoRF
	xor	ah,ah
NoRF:
	shl	cx,3
	sub	dx,cx
	jge	NoGrF
	xor	dx,dx
NoGrF:
	shr	cx,5
	or	ax,dx
	mov	[edi],ax
	cmp	si,64000
	lea	edi,[edi+2]
	jnz	FadeLoop
	ret
;------------------
NormalCopy:
	mov	cx,64000/4*2
	rep	lmovsd
	ret
CopyScreen	ENDP
;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
;------ for vesa initialization -------
VesaNfo:	db 40 		dup (?)
VramPtr		dd ?
		db (256-44)	dup (?)
;------- used in whole intro ----------
TabHandle	dw ?
CodeLinear	dd ?

FontOfs		dw ?
FontSeg		dw ?
;---------- for raytracing ------------
TraceTab	dd 3*41*26 dup (?)
TraceTabSet	dd 3*41*26 dup (?)
TraceTabCol	db 26*41*8 dup (?)
XSine		dd 41 dup (?)
YSine		dd 26 dup (?)
TraceTabZap	dd 3*41*26 dup (?)
;%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
CODE	ENDS

END	Start
