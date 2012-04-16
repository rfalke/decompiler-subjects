;Death Rattle
;24.9.2006
;y0bi/wAMMA

;0x7000 - sinetable
;0x6000 - topo
;0x5000 - projected image

org 100h

section .text
    
    mov al,13h
    int 10h
    
    mov dx,03d4h
    mov ah,20h
    out dx,ax

    push 0x6000
    pop fs
    push 0x7000
    pop ds

GenTopoLoop:

    mov cl,2
Gah:
    mov al,bl
    and al,63
    sub al,32
    imul al
    xchg dx,ax
    xchg bh,bl
    loop Gah
    add ax,dx
    shr ax,3
    mov [fs:bx],al
;------------
    mov di,bx
    mov ax,di
    add ax,64
    cbw
    cwd
    shl di,1
    mov ax,di
    imul al
    sub ah,64
    xor ax,dx
    sar ax,6
    mov [di],ax
    
    inc bx
    jnz GenTopoLoop
;-----------------
    push 0x5000
    pop es
MainLoop:
    inc si
;------------
    xor di,di
    mov cx,32768
    rep stosw

    mov bh,2
AngleLoop:

    mov cx,si
    shl cx,7
    mov dx,cx

    xor bp,bp
    xor ax,ax
RadiusLoop:
    push cx
    mov cl,dh
    mov al,[fs:ecx]
    push ax
    push bx
    mov bl,ah
    test si,1000000000b
    jnz Plane
    shl bx,1
    mul byte [bx+128+2]
    shr ax,1
    jmp Ball
Plane:    
    neg al
    mul bl
    add ah,bl
Ball:
    shr ax,8
    pop bx
    cmp ax,bp
    jbe DontDraw

    mov di,bx
    shl di,7
    add di,bp
    xchg bp,ax
    mov cx,bp
    sub cx,ax
    pop ax
    push ax
    shr al,4
    add al,16

    rep stosb
    
DontDraw:
    pop ax
    pop cx
    add dx,[bx]
    add cx,[bx+128]
    inc ah
    jns RadiusLoop
    dec bx
    dec bx
    jnz AngleLoop
;---------
    push 0xa000
    pop gs
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
    add cx,si
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
    mov al,[es:ecx]
    mov [gs:bx+256*100+128+32],al
    inc bx
    jnz DrawPolarLoop
;-------------
    in al,60h
    cmp al,1
    jne MainLoop

    ret
