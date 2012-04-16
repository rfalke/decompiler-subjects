;meanwhile
;y0bi / wAMMA
;21.1.2007
org 100h

section .text
    
    mov al,13h
    int 10h
;-----------;   
   	mov dx,03d4h 
	mov ah,0x20
   	out dx,ax          
	mov ds,ax
 	push 0a000h
	pop es

MainLoop:
RenderLoop:
	mov ah,64
	cwd
	xor cx,cx
	mov cl,bh
	inc cx
	div cx
	xchg cx,ax
	mov ah,bl
	imul cx
	mov ax,cx
	add ax,si
	imul dl
	and ah,4+8+16
	push bx
	mov dh,16
jaa:
	mov [bx],dh
	dec bh
	add dx,cx
	cmp dx,ax
	jb jaa
	pop bx
	mov al,[di+128-32]
	stosb
    inc bx
	jnz RenderLoop
	inc si
	jmp MainLoop
	
	
		
