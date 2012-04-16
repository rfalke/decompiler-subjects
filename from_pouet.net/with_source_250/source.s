;Cthulhu Dreaming 
;y0bi / wAMMA
;21.6.2006
org 100h

section .text

    mov al,13h
    int 10h
    mov ax,cs
    add ax,1000h
    mov fs,ax
    mov es,ax
    add ax,1000h
    mov gs,ax
    push 0a000h
    pop es
a:
    xor di,di
b:
    mov bx,di
    mov ax,bx
    shl al,2
    imul al
    xchg cx,ax
    mov al,bh
    shl al,2
    imul al
    add ax,cx
    mov [fs:bx],ah
    and bx,0xf8f8
    mov al,[fs:bx]
    add al,[fs:bx+si]
    imul al
    mov [gs:di],ah
    inc di
    jnz b
    inc si 
    mov bp,320
c:
    push si
    call j
    xchg cx,ax
    add si,64
    call j
    xchg bx,ax
    mov ax,bp
    sub ax,160
    push ax
    imul bx
    sar ax,7
    add ax,cx
    mov [d-2],ax
    pop ax
    imul cx
    sar ax,7
    neg ax
    add ax,bx
    mov [e-2],ax
    shl si,9
    xor cx,cx
    mov bh,199
f:
    inc cx
    mov ax,si
    mov al,dh
    mov di,ax
    push dx
    push si
    mov ah,[gs:di]
    push ax
    add ax,25*256
    xor dx,dx
    idiv cx
    pop dx
    xchg dh,bl
    cmp ax,199
    ja g
    cmp al,bh
    jae g
    mov dl,bh
    mov bh,al
    mov si,ax
    xchg al,ah
    shl si,6
    add si,ax
    add si,1000
    sub dl,ah
    cmp dh,bl
    jne g
    mov al,[fs:di]
    shr al,4
    add al,19
h:
    mov [si+bp],al
    add si,320
    dec dl
    jnz h
g:
    pop si
    pop dx
    add dx,0ffffh
d:
    add si,0ffffh
e:
    cmp ch,2
    jb f
    pop si
    dec bp
    jnz c
    xor di,di
    mov ch,0xfa
i:
    xor ax,ax
    xchg al,[di+1000]
    stosb 
    loop i
    in al,60h
    dec ax
    jnz a
    ret
j:
    mov ax,si
    add ax,64
    cbw
    cwd
    mov ax,si
    shl ax,1
    imul al
    sub ah,64
    xor ax,dx
    sar ax,7
    ret
    db '4','2'