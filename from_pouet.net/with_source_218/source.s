;dented2 
;y0bi / wAMMA
;17.1.2007

org 100h

section .text

	mov al,13h
	int 10h
    
	mov dx,03d4h
	mov ah,20h
	out dx,ax

	mov es,ax
	push 0x7000
	pop ds
	push 0xa000
	pop fs
;----------------
	mov cx,15
MakeTopoOuterLoop:
	imul dx
	inc ax
	xchg ax,dx
DrawPatternLoop:
	cmp cl,15-2
	jb whut
	mov [bx],cl
whut:				
	mov al,dl
	imul al
	xchg si,ax
	mov al,dh
	imul al
	add ax,si
	cmp ah,63
	ja ok
	add [bx],ah
ok:
	inc dx
	inc bx
	jnz DrawPatternLoop
	loop MakeTopoOuterLoop
;-----------------
	mov cl,5
BlurLoopO:
BlurLoopI:
	mov al,[di-2]
	mov bl,[di]
	add ax,bx
	mov bl,[di+255]
	add ax,bx
	mov bl,[di-257]
	add ax,bx
	shr ax,2
	mov [di],al
	inc di
	jnz BlurLoopI
	loop BlurLoopO
;---------------
MainLoop:
    inc si
;---------
ProjectScapeLoop:
	cmp bl,0
	jne NoReset
	mov cl,255
NoReset:	
	xor ax,ax
	mov al,bl
	xchg bp,ax
	inc bp
	mov al,[bx+si]
	add ax,64
	shl ax,6
	xor dx,dx
	div bp
	shr ax,3

	cmp ax,255
	jbe ok2
	mov al,255
ok2:
	cmp al,cl
	jae DontDraw
	mov ch,al
	mov ah,bh
	xchg di,ax
	mov al,[bx+si-1]
	sub al,[bx+si+1]
	cbw
	sal ax,4
	shl bp,1
	sub ax,bp
	add ax,128
	jns ok4
	xor ax,ax
ok4:
	dec ah
	js ok3
	mov al,255
ok3:
	shr al,4
	add al,16
DrawLineLoop:
	stosb
	dec cx
	cmp ch,cl
	jb DrawLineLoop
DontDraw:
	inc bx
	jnz ProjectScapeLoop
;---------
DrawPolarLoop:
	mov al,bh
	cbw
	push ax
	xor al,ah
	cbw
	xchg cx,ax
	mov al,bl
	cbw
	push ax
	xor al,ah
	add cl,al
	inc cx
	pop ax
	shl ax,6
	cwd
	idiv cx
	xchg ax,cx
	pop ax
	xor cl,ah
	shr ah,1    
	add ah,cl   
	xchg ax,cx
;----    
	mov al,bl
	imul al
	xchg bp,ax
	mov al,bh
	imul al
	add ax,bp
	cwd
SqrtLoop:    
	inc dx
	sub ax,dx
	sub ax,dx
	jns SqrtLoop
	mov cl,dl
	mov bp,cx
	mov al,[es:bp]  
	mov [fs:bx+256*100+128+32],al
	inc bx
	jnz DrawPolarLoop    
;-------------    
	in al,60h
	cmp al,1
	jne MainLoop
	ret
