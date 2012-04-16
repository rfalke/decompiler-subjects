	org 0x100	; 32b

	push 0xA000
	pop es

	mov al,0x13
	int 0x10


;        push 63                 ; 35b + ( ret -> int 0x20 )
;        push 21167
;        push cx
;        mov dx,0x3C9
;        mov si,sp
;        mov cx,256*3
;pal:    mov [si],cx
;        fild word [si]
;        fimul word [si+2]
;        fsin
;        fmul st0,st0
;        fimul word [si+4]
;        fistp word [si]
;        mov ax,[si]
;        out dx,al
;        loop pal

;        mov cl,254              ; 27b
;        mov dx,0x3C9
;pal:    xor al,al
;        out dx,al
;        mov ax,cx
;        sub ax,127
;        jg module
;        neg al
;module: shr al,1
;        sub al,63
;        neg al
;        out dx,al
;        out dx,al
;        loop pal

;        xor ax,ax               ; 9b
;        mov dx,0x3C9
;pallp:  out dx,al
;        out dx,al
;        out dx,al
;        inc ax
;        jnz pallp

;        xor ax,ax               ; 15b
;        mov dx,0x3C9            ;
;pallp:  out dx,al               ;
;        out dx,al               ;
;        push ax                 ;
;        ror al,cl               ;
;        out dx,al               ;
;        pop ax                  ;
;        inc ax                  ;
;        jnz pallp               ;

;        mov dx,0x3C9
;        mov cx,256
;pal:    mov ax,cx
;        neg ax
;        shr al,2
;        out dx,al
;        shr al,1
;        out dx,al
;        shr al,1
;        out dx,al
;        loop pal

;        mov dx,0x3C9            ; 14b
;P:      mov ax,cx               ; ax = cx
;        out dx,al               ; R[ i ] = cx & 0xFF;
;        shr ax,1                ; \ G[ i ] = ( cx >> 1 ) & 0xFF;
;        out dx,al               ; /
;        shr ax,1                ; \ B[ i ] = ( cx >> 2 ) & 0xFF;
;        out dx,al               ; /
;        loop P                  ; while( --cx (;

;        mov dx,0x3C9
;pal:    out dx,al
;        inc ax
;        jnz pal

	mov dx,0x3C9		; 18b
pal:	mov al,cl
	shr al,1
	sub al,64
	jl bla
	not al
bla:	out dx,al
	out dx,al
	out dx,al
	loop pal

	mov bx,320
	xor di,di
show:	mov ax,di
	xor dx,dx
	div bx
	mov al,dl
	stosb
	test di,di
	jnz show

	xor ax,ax
	int 0x16

	int 0x20