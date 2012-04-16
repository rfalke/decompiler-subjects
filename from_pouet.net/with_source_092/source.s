;Plain Monday 
;y0bi / wAMMA
;30.10.2006

org 100h

section .text
    
    mov al,13h
    int 10h
   	mov dx,03d4h
   	mov ah,0x20
   	out dx,ax
 	push 0a000h
	pop ds
MainLoop:
RenderLoop:
	mov ax,si
	shr ax,1
	imul al
	not ax
	sub ah,140
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
	xor al,dl
	and al,32
	dec ax
	sub al,ch
	cmp al,16
	jge ok
	mov al,16
ok:
	mov [bx-128+32],al
    inc bx
	jnz RenderLoop
	lodsb
	jmp MainLoop
