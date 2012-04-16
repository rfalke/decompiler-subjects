;Underpass
;y0bi / wAMMA
;18.12.2006
org 100h

section .text
    
    mov al,13h
    int 10h
;-----------;   
   push 0a000h
   pop es
MainLoop:
RenderLoop:
	mov bx,ax
	add al,28+128
	imul al
	shr ax,7
	not al
 	and al,127
	sub dx,160
	mov bh,al
	imul dx
	add ax,si
	shr ax,7
	xor al,bl
	and al,32
	jz ok
	not bh
	shr bx,12
	sub ax,bx
ok:	
	stosb
	cwd
	mov ax,di
	mov bp,320
	div bp
	loop RenderLoop
	
	add si,64
;	in al,60h
;	cmp al,1
	jmp MainLoop
;	ret
	
	
