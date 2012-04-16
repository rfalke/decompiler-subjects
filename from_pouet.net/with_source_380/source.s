Include FMHSC.INC
;	NumberOfSplashes	equ	1
;	Fading			equ	13
;	ChangeColorNumber	equ	2
	GreetsOffset	equ	5*320+22


IDEAL
DOSSEG
Model Small
p386n
Stack 400h
Assume CS:@CODE, DS:@CODE, SS:@STACK
CodeSeg

Extrn Music:Byte


;org 100h

Watery:

;Speed up the timer
	cli
	mov al,36h
	out 43h, al
	nop
;	mov ax,32768
	mov ax,32768+8192;+16384
	out 40h,al
	nop
	mov al,ah
	out 40h,al
	sti

	push cs
	pop ds

;Generate sine
	mov bx,798fh
	xor cx,cx
	mov bp,256
ILoop:
	mov ax,-39
	imul bx
	add cx,dx
	add bx,cx
	mov al,bh
	cbw
	add ax,ax
	mov di,bp
	add di,di
	mov [cs:Sin256+di],ax
	dec bp
	jns ILoop

;	push cs
;	pop es
	mov ax,cs
	sub ax,10h
	mov es,ax
	mov ah,4ah
	mov bx,2000h
	int 21h

	mov ah,48h
	mov bx,1000h
	int 21h
	jc NotEnoughMemory
	mov [TextSegment],ax
	mov fs,ax
	mov es,ax
	xor di,di
	xor eax,eax
	mov cx,65536/4	;64640/4
	rep stosd

	mov ah,48h
	mov bx,1000h
	int 21h
	jc NotEnoughMemory
	mov [WaterSegment],ax
	mov es,ax
	xor di,di
	xor eax,eax
	mov cx,65536/4	;64640/4
	rep stosd


	call InitScreenBuffers
	jnc EnoughMemory
NotEnoughMemory:
	mov ah,9
	mov dx,offset NoMemory
	int 21h
	call DeinitMusic
	mov ax,4c01h
	int 21h
;	ret
EnoughMemory:

;Load font from BiOS
	mov ax,1130h
	mov bh,06h
	int 10h
	push es
	pop ds
	push cs
	pop es
	mov si,bp
	mov cx,4096/2
	mov di,offset Font
	rep movsw



	push cs
	pop ds

	mov ax,13h
	int 10h


	call StartMusic

	push cs
	push ds
	push cs
	push es
Include "Faugh1.Asm"
Include "Faugh2.Asm"
Include "Faugh5.Asm"
Include "Faugh3.Asm"
Include "Faugh4.Asm"
Include "Faugh7.Asm"
	call FadeOutMusic
Include "Faugh6.Asm"

	call DeinitMusic

;Restore timer speed
	cli
	mov al,36h
	out 43h,al
	nop
	mov ax,0
	out 40h,al
	nop
	mov al,ah
	out 40h,al
	sti

	mov ax,3h
	int 10h
	mov ax,4c00h
	int 21h
Include "SBuffer.inc"
Include "Random.inc"
Include "Text.Asm"
Include "Line.Asm"
Include "BobLine.Asm"
Include "Triangle.Inc"
Include "TrisDraw.Inc"
Include "F_Proc.Inc"
Include "F_Proc2.Inc"
Include "HSC.Inc"

;DataSeg

Splashes	db	0FFh
SplashesTime	dd	0
NoMemory	db	'No memory. =(',0dh,0ah,'$'
Text1		db	  'T-Rex presents',0,3
		db	2,' an 8k intro',0,3
		db	2,'  called...',1
Greets		db	2,'   Greets:',0,3
		db	  '           BPC',0,3
		db	  'DDT',0,3
		db	  '           fOG',0,3
		db	  'QMG        ',0,3
		db	  '           ROi',1
NumberOfFlameDots	dw	0
Text1Brightness		db	0
Text1BrightnessSpeed	db	0
Text2Brightness		db	0
Text2BrightnessSpeed	db	0
Text3Brightness		db	0
Text3BrightnessSpeed	db	0
;GreetsBrightness	db	0,0,0,0,0,0,0
GreetsBrightness	db	62,62,62,62,62,62,62
GreetsBrightnessSpeed	db	-1,-1,-1,-1,-1,-1,-1
GreetsBrightnessTime	dw	-1,40,60,80,100,120,140
Sharpness		db	0
SharpnessSpeed		db	1
Time			dd	0
FlameX		dd	0
FlameY		dd	0
FlameXVel	dd	0
FlameYVel	dd	0
FlameVertex	dw	0
FlameIntensity	dw	25
BlowRadius	dd	1
BlowRadiusSpeed	dd	100h
BlowBrightness	dw	2000h
BlowScreenBrightness	db	0
Angle		dw	0
StopSize	dw	1
StopSizeSpeed	dw	1
Label	FlameVertexes	Word
Include "Faugh_D.Inc"
Label	ContourVertexes	Word
Include "1_Contur.Inc"			;Stop sign
Label	SignVertexes	Word
Include "2_Sign.Inc"
;Include	"Music.Inc"			;Music
;Include	"Bomb.Bin"
StopX1	dw	?
StopY1	dw	?
StopX2	dw	?
StopY2	dw	?
StopX3	dw	?
StopY3	dw	?
WarpingX	dw	?
WarpingY	dw	?
StartTime	dd	?
Sin256	dw	256 dup (?)
Palette	db	768 dup (?)
;Triangle's data
LinesStart	dw	200 dup (?)
LinesEnd	dw	200 dup (?)
TextSegment	dw	?
WaterSegment	dw	?
Font	db	4096 dup (?)
Texture	db	TextureSize*320 dup (?)
Moon	db	MoonXS*MoonYS dup (?)
IncludeLib	"MUSIC.OBJ"
IncludeLib	"HSCOBJ.OBJ"
End Watery
