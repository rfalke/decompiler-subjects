;code by unic0rn/Asm Force

        org 100h
        segment .code
        mov al,13h
        int 10h
        xor ax,ax
        mov dx,03C8h
        out dx,al
        inc dx
        mov cl,0FFh
pal:    mov al,0FFh
        sub al,cl
        cmp al,40h
        jc skip
        mov al,3Fh
skip:   out dx,al
        mov al,0FFh
        sub al,cl
        shr al,1
        cmp al,40h
        jc skip2
        mov al,3Fh
skip2:  out dx,al
        xor al,al
        out dx,al
        loop pal
burn:   push 8000h
        pop ds
        push ds
        pop es
        mov ch,2
        mov di,320*198
spark:  xor dl,dh
        add dh,42
        ror dl,1
        xor dh,dl
        mov ax,dx
        stosw
        loop spark
        not cx
        xor di,di
flame:  movzx ax,byte [di]
        mov bl,[di+319]
        add ax,bx
        mov bl,[di+640]
        add ax,bx
        mov bl,[di+321]
        add ax,bx
        shr ax,2
        dec al
        jne cont
        inc al
cont:   stosb
        loop flame
        std
        mov si,di
        push 0A000h
        pop es
        not cx
        rep movsb
        cld
        in al,60h
        dec al
        jnz burn
        ret
        db '<uni>'

