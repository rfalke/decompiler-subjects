.MODEL TINY
.586
.DATA
 fAngle dd -2000.0
 fStep dd 0.0175
 fCorrector dd 157.0796327
 Msg db " TanTeFrieDa\BrainWanK",0dh,0ah,"<-www.Brainwank.de->$"
 wRadius dw ?
 wCount dw ?
 dwX dw ?
 dwY dw ?
 Buffer db 320*200 DUP (?)
 dwTmp dw ?
.CODE
ORG 100h
Start:
 mov	al,0013h
 int	10h
; finit				; you will need to init under pure dos,
				; winbloze wonït need it

 les	bp,[bx]

 mov	dx,3c9h
; xor	ax,ax			; my GF3 Ti-200 doesnït need
; out	dx,al			; to init the color-dac
; inc	dx
; dec	cl
Pal:
 mov	ax,cx
 not	ax
 shr	ax,2
 out	dx,al
 out	dx,al 
 out	dx,al 

 loop	Pal

MainLoop:
 mov	cx,36000/4
Circle:
 mov	si,OFFSET wRadius
 mov	WORD PTR [si],50
 mov	dx,cx
 shr	dx,3
 sub	[si],dx			; SI = OFFSET wRadius
 fld	[fAngle]
 fld	ST(0)
 fld	ST(0)

 fsin
 fimul	WORD PTR [si]		; SI = OFFSET wRadius
 fistp	[dwX]
 fcos
 fimul	WORD PTR [si]		; SI = OFFSET wRadius
 fistp	[dwY]

 fadd	[fStep]
 
 fstp	[fAngle]

 add	[dwX],160
 add	[dwY],100
 mov	ax,320
 mul	[dwY]
 add	ax,[dwX]
 cmp	ah,0fah
 ja	Out_Of_Sight
 xchg	ax,bx
 mov	dx,[si]			; SI = OFFSET wRadius
 mov	[Buffer+bx],dl
Out_Of_Sight:
 loop	Circle

 fld	[fAngle]
 fsub	[fCorrector]
 fstp	[fAngle]
 
 call	Smooth
 call	Smooth
 call	Smooth

 mov	si,OFFSET Buffer
 xor	di,di
 mov	ch,7dh
 rep	movsw
 in	al,60h
 dec	al
 jnz	MainLoop
 
 mov	ax,0003h
 int	10h

 mov	ah,9
 mov	dx,OFFSET Msg
 int	21h

 ret

Smooth PROC
 xor	bx,bx
 mul	bx			; AX*0 = 0 -> DX = 0,AX = 0
; xor	cx,cx			; is still Zero from loop
; xor	dx,dx			; clear it tricky :)
 mov	si,320*198
@Smooth_Loop:
 xor	ax,ax
 mov	al,[Buffer+si+320]
 mov	bl,[Buffer+si-320]
 mov	cl,[Buffer+si+1]
 mov	dl,[Buffer+si-1]
 add	ax,bx
 add	ax,cx
 add	ax,dx
 shr	ax,2
 dec	ax
 mov	[Buffer+si],al
 dec	si
 jnz	@Smooth_Loop
 ret
Smooth ENDP

END Start
