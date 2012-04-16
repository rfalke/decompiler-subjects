;somewhere else
;24.7.2007
;y0bi / wAMMA
org 100h

section .text

	mov al,13h
	int 10h
;-----------
	mov dx,03d4h
	mov ah,0x20
	out dx,ax
;	mov ds,ax
	push 06000h
	pop ds
;------------
	mov dl,0c9h
	xor cx,cx
PalLoop:
	mov al,cl
	shl al,2
	out dx,al
	mov ch,cl
	shr ch,4
	mov al,cl
	and al,15
	add al,ch
	shl al,1
	out dx,al
	mov al,ch
	shl al,2
	out dx,al
	inc cl
	jnz PalLoop
;-----------
	mov cx,40
MakeTopoOuterLoop:
	mov dx,'ab'
	imul dx
	inc ax
	xchg ax,dx
DrawPatternLoop:
	cmp cl,40-2
	jb whut
	mov [bx],cl
whut:
	mov al,dl
	imul al
	xchg si,ax
	mov al,dh
	imul al
	add ax,si
	shr ax,4
	test ah,ah
	jz ok
	mov al,255
ok:
	not al
	add [bx],al
	inc dx
	inc bx
	jnz DrawPatternLoop
	xchg ax,dx
	loop MakeTopoOuterLoop
;------------	
	mov cl,7
BlurLoopO:
BlurLoopI:
	mov al,[di]
	add al,[di+1]
	mov bl,[di+255]
	add bl,[di-257]
	add ax,bx
	shr ax,2
	mov [di],al
	inc di
	jnz BlurLoopI
	loop BlurLoopO
;-----------------
	push 0a000h
	pop es
	push 07000h
	pop gs
MainLoop:

RenderLoop:
	mov ah,64
	xor dx,dx
	movzx si,bh
	add si,32
	div si
	xchg si,ax
	mov ah,bl
	imul si
	lea ax,[bp+si]
	mov ah,dl
	xchg al,ah
	xchg di,ax
	push bx
	mov al,[di]
	add al,[ds:di+bp]
	shl al,2
	imul al
	shr ah,2
	add bl,ah
	mov al,[bx]
	mov ah,[gs:bx]
	and ax,0ff0h
	add al,ah
	pop bx
	mov [gs:bx],al
	mov al,[di]
	mov ah,al
	sub ah,64
	js NoLand
	shl si,2
	cwd
	push bx
	mov cl,[di]
	mov di,bx
VLineLoop:
	mov al,dh
	add al,cl
	shr al,4
	mov [gs:bx],al
	mov [gs:di],al
	sub di,256
	inc bh
	jz Jaa
	add dx,si
	cmp dh,ah
	jb VLineLoop
Jaa:
	pop bx
NoLand:
    inc bx
	jnz RenderLoop

FlipLoop:
	xor ax,ax
	xchg al,[gs:bx]
	mov [es:bx-128+32],al
	inc bx
	jnz FlipLoop
	
	inc bp
	
	in al,60h
	dec ax
	jnz MainLoop
	ret
