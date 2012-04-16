;Enemy Of Progress
;y0bi/wAMMA
;1.7.2006
org 100h

section .text
    
    mov al,13h
    int 10h
;-----------
    mov dx,03d4h     ;256x256 tiled in 320x200
    mov ax,2013h   
    out dx,ax          
;---------
;dh=3
    xor bx,bx
TableLoop:
    mov ax,bx
    shr al,3
    shl al,5
    imul al
    mov [bx+1024],ah
    inc bl
    jnz TableLoop

    push 0a000h
    pop es

;si==angle, can be whatever.
MainLoop:
    
    push si
    
    call SinGen
    xchg ax,bp
    add si,64
    call SinGen
    xchg ax,si
;bx==0 after first loop
TraceLoop:
    mov al,bl
    cbw         ;causes a slight displacement
    push ax
    imul si
    sar ax,7
    add ax,bp
    sal ax,1
    mov [y-2],ax   ;y1=y*cos+z*sin z=1  Around x  

    pop ax
    imul bp
    sar ax,7
    neg ax
    add ax,si
    mov cx,ax ;z1=-y*sin+z*cos in cx
;-----
    mov al,bh
    sub al,100
    cbw
    push ax
    imul si
    sar ax,7
    xchg ax,cx
    push ax
    imul bp
    sar ax,7
    add ax,cx            
    pop cx
    sal ax,1
    mov [x-2],ax     ;x1=x*cos+z1*sin z1 in cx
    
    pop ax
    imul bp
    sar ax,7
    neg ax
    xchg ax,cx
    imul si
    sar ax,7
    add ax,cx              
    sal ax,1
    mov [z-2],ax    ;z2=-x*sin+z1*cos

    pop cx
    push cx
    shl cx,9
  
    push bp
    push bx
    xor bp,bp
    ;xor dx,dx
 
    mov di,512
PixelTraceLoop:

    mov bx,bp
    shr bx,8
    mov bh,4
    mov al,[bx]
    mov bl,ch
    add al,[bx]
    mov bl,dh
    add al,[bx]
    cmp al,25878/256
    
    ja FoundWall
    add dx,0xffff
x:
    add cx,0xffff
y:
    add bp,0xffff
z:    
    dec di
    jnz PixelTraceLoop
    
FoundWall:
    mov al,dh
    shl al,3
    imul al
    xchg dx,ax
    mov al,ch
    shl al,3
    imul al
    add ax,dx
    shr ax,7
    not al
    sub ax,255
    shr di,1
    add ax,di
  ;  cmp ax,0
    jge ok
    xor ax,ax
ok:    
    
    shr al,4
    add al,16
    mov ah,al 

    pop bx
    pop bp

    mov [es:bx+32-128],ax


    inc bx
    inc bx
    jnz TraceLoop
    
    pop si
    
    inc si
    
    in al,60h
    cmp al,1
    ;dec ax
    jne MainLoop
    
    ;mov ax,3h
    ;int 10h

    retn

SinGen:
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
