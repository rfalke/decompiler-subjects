;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; 256b Intro by mrTony/PeonyGarden                ;
; The code is just a mess.
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
[org 100h]
[segment .text]

SCREEN	equ	192
PIXBUF	equ	304h
STARTX  equ  40
STARTY  equ  40 



	mov	al,13h
	int	10h

	push	word 0A000h
	pop	es
	mov	ax,cs
	add	ah,10h
	mov	fs,ax

; mov  ah,0Ah
; mov  ah,93h
mov ah,22

  mov  cx,0
  
PAL	mov	al,cl
	mov	dx,03C8h
	out	dx,al
	inc	dx
	shl	al,1
	out	dx,al
	shl	al,1
	out	dx,al
	mov	al,0
	out	dx,al
	loop	PAL

TEX	mov	bx,cx
	add	ax,cx
	rol	ax,cl
	mov	dh,al
	sar	dh,5
	adc	dl,dh
	adc	dl,[fs:bx+255]
	shr	dl,1
	mov	[fs:bx],dl
	not	bh
	mov	[fs:bx],dl
	loop	TEX

mov ch,10h

MAIN
	mov	di,PIXBUF
	push	di
  
	mov	dx,-100
Y	mov	bp,-160
X   mov	ax,dx
    add     ax,100
    mov     bx,bp
    add     bx,160
    mov     bh,al  
	mov	al,[fs:bx]
    mov     [di],al
	inc	di
	inc	bp
	cmp	bp,160
	jnz	X
	inc	dx
	cmp	dx,byte 100
	jnz	Y

    push  ds
    pop   es
    mov     ax,1300h        
    mov     cl,TITLE_END-TITLE
    mov     dx,0h
    mov     bx,10
    mov     bp,TITLE
    int     0x10
	push	word 0A000h
	pop	 es
  
   mov cx,64
   mov di,PIXBUF+320*50+50 
LEVI0: 
   mov bl,127
LEVI1: 
   mov byte[di],16
   inc di 
   sub bl,1
   jg LEVI1  
   add di,193
   loop LEVI0  
   

	pop	si
	mov	di,(8)*320
	mov	ch,(SCREEN/2)*320/256
	rep	movsw

	in	al,60h
	cbw
	dec	ax
	jz near EXT
  
    mov ah,2Ch
    int 21h
  
    shr dh,2
    and dh,2
    jnz S
    mov ch,10h 
   jmp  MAIN
S:  
   mov ch,0   
   jmp MAIN

EXT:
	mov	al,03h
	int	10h
	ret
	
TITLE   db      "---------<1949-2009>--------------------"         
TITLE_END
AUTHOR  db  "mrTony/PeonyGarden"