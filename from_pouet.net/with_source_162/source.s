;dented 
;y0bi / wAMMA 24.10.2006
org 100h

section .text
    
    mov al,13h
    int 10h
;-----------;   
   mov dx,03d4h
   mov ah,0x20
   out dx,ax          
;---------
    mov ds,ax
    push 0xa000
    pop es
MainLoop:
    inc si
    mov di,256 
DrawDentsLoop:
    mov bx,di
    mov cl,bl
    and bl,31
    shr cx,5
    mov dx,20
    sub dx,cx
    div bx
    add ax,si
    and al,31
    sub al,16
    imul al
    xchg bp,ax
    lea ax,[bx-16]
    imul al
    add ax,bp
    shr ax,5
    cmp al,cl
    jb NoPixel
    mov [bx],al
NoPixel:  
    inc di
    jnz DrawDentsLoop
;--------------    
    xchg ax,bx
DrawPolarLoop:
    mov al,bh
    cbw
    xor al,ah
    cbw         
    xchg cx,ax
    mov al,bl
    cbw
    xor al,ah
    add cl,al
    inc cx
    mov ah,al
    cwd
    idiv cx
    shr ax,2
    and ax,31
    push bx
    xchg ax,bx
;---
    mov bp,ax
    imul al
    xchg bp,ax
    imul ax
    add bp,dx
    xor ax,ax
SqrtLoop:
    inc ax
    sub bp,ax
    sub bp,ax
    jns SqrtLoop
    xchg bh,al
    xlatb
    add al,16
    pop bx
    mov [es:bx+256*100+128+31],al
    inc bx
    jnz DrawPolarLoop

    jmp MainLoop
    
;And you don't stop.
;in al,60h
;dec ax
;jne MainLoop
;retn
