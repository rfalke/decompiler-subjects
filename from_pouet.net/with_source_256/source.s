;Noise Pollution
;6.10.2006
;y0bi / wAMMA

org 100h

section .text
    
    mov al,13h
    int 10h 
;-----------
    mov dx,03d4h    
    mov ah,0x20 ;13h
    out dx,ax
;---------------    
;dh=03
    mov dl,0xc9
    mov cx,64
PalLoopO:
	mov bx,16*3
PalLoopI:
	mov al,bl
	rol al,1
	imul al
	and al,31
	add al,32
	sub al,cl
	jns ok
	xor ax,ax
ok:	
 	out dx,al
	dec bx
	jnz PalLoopI
	dec cx
	dec cx
	dec cx
	loop PalLoopO
;---------
	push 0x8000
	pop ds
SinGenLoop:
    mov ax,bx
    shr ax,1
    add ax,64
    cbw
    cwd
    mov ax,bx
    imul al
    sub ah,64
    xor ax,dx
    sar ax,8
    mov [bx],ax
    inc bx
    inc bx
    jnz SinGenLoop
;---------
	push 0x7000
	pop gs
CalcPatternLoop:
    mov al,bl
    imul al
    xchg bp,ax
    mov al,bh
    imul al
    add bp,ax
    xor ax,ax
SqrtLoop:
    inc ax
    sub bp,ax
    sub bp,ax
    jns SqrtLoop
    shl al,2
	imul al
	shl ah,1
    mov [gs:bx],ah
    inc bx
    jnz CalcPatternLoop
;----------
    push 0a000h
    pop es
    push 0x6000
    pop fs
    
  ; in al,61h
 ;   or al,3
;    out 61h,al

    xor si,si
MainLoop:

	mov ah,[si]
	mov al,[si+128]
	mov di,ax
	push si
	mov si,[si]

	mov bp,28*256+64+128*256+128
DrawCirclesLoopY:
DrawCirclesLoopX:
	mov al,[gs:bp+di]
	add al,[gs:bp+si]
	imul al
	mov al,ah
	mov [fs:bx],ax
	mov [fs:bx+256],ax
	inc bp
	inc bl
	inc bl
	jnz DrawCirclesLoopX
	add bp,128
	inc bh
	jnz DrawCirclesLoopY
	pop si
;------

    mov dx,3dah
Wait1:
    in al,dx
    and al,00001000b
    jz Wait1
Wait2:
    in al,dx
    and al,00001000b
    jnz Wait2

;    mov al,0d8h
;    out 43h,al
;    mov ax,[es:128*256+128]
;    out 42h,al

DisplayLoop:
	mov cl,[fs:bx]
	mov ch,cl
	add cx,bx
	add cl,ch
	mov al,cl
	imul al
	xchg cl,ah
	mov al,ch
	imul al
	add cl,ah
	shr cl,2
	and cl,0xf
	mov al,[fs:bx-1*4-256*4]
	sub al,[fs:bx+1*4+256*4]		
	cbw
	sal ax,1
	add ax,128
	cmp ax,0
	jge ok2
	xor ax,ax
ok2:
	and al,0xf0
	add al,cl
	mov [es:bx+32],al
	inc bx
	jnz DisplayLoop
	
	inc si
	inc si
	    
    in al,60h
    cmp al,1
    jne MainLoop

    retn
