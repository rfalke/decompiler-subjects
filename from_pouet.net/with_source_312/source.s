         .model tiny
        .386
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
        .code
        org 100h
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
start:
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
        mov di,offset zeros
;        mov cl,zeros_end-zeros
        rep stosb
; Full Sinus Table Generation
        mov si,offset sine_table
        mov di,offset sine + 1
        mov cl,32
gen:
        mov bl,[si]
        inc si

        mov ch,4
gen1:
        xor bh,bh
        shl bx,2
        add al,bh
        stosb
        dec ch

        jnz short gen1

        loop gen

        mov si,offset ended-1
        mov di,offset ended
        mov cl,128
loc1:
        std
        lodsb
        cld
        stosb
        loop loc1

        inc si
        inc ch
        cld
loc2:
        lodsb
        neg al
        stosb
        loop loc2
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
        mov ax,013h
        int 10h
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
        mov cl,63
st1:
        mov dx,03c8h
        mov al,cl
        out dx,al
        inc dx
        xor al,al
        out dx,al
        mov al,cl
        out dx,al
        xor al,al
        out dx,al
        loop st1
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
        mov ah,4ah
        mov bx,1000h
        int 21h

        mov ah,48h
        mov bx,65536/16
        int 21h
        mov fs,ax               ;Allocate buffer #1
        mov es,ax

        mov ch,0fah
        xor al,al
        xor di,di
        rep stosb

        mov ah,48h
        mov bx,65536/16
        int 21h
        jc exit

        mov gs,ax               ;Allocate buffer #2
        mov es,ax

        mov ch,0fah
        xor al,al
        xor di,di
        rep stosb
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
main:
        push gs
        pop es
;-*-*-*-*-*

;*-*-*-*-*-
        mov bp,2000
draw:
        xor bx,bx
        mov si,offset xa

        lodsw
        mov dx,ax
        lodsw
        add dx,ax
        lodsw
        adc ax,bx
        mov [xa],dx
        and ax,01ffh
        mov [x],ax

        mov cx,ax

        lodsw
        mov dx,ax
        lodsw
        add dx,ax
        lodsw
        adc ax,bx
        mov [ya],dx
        and ax,01ffh
        mov [y],ax
;-*-*-*-
        mov si,ax
        add si,offset sine
        lodsb
        add al,128
        call zoomer
        mov di,ax

        add di,[coor]

        mov si,cx
        add si,offset sine
        lodsb
        add al,128
        call zoomer
        mov cx,320
        xchg ax,cx
        xor ch,ch
        mul cx
        add di,ax

        mov ax,01f3fh
        stosw
        add di,320-2
        stosw

        dec bp
        jnz short draw

; Smooth & Перенос кадра в видео буфер

        mov di,64000
sm1:
        mov ax,es:[di-321]
        mov bx,es:[di]

        add ax,bx
        add al,ah
        shr al,2

        dec al
        dec al
        jns short nodec
        xor al,al
nodec:
        mov es:[di],al
        dec di
        cmp di,324
        jnc short sm1
        xor al,al
smo:
        mov es:[di],al
        dec di
        jns short smo

        push 0a000h
        pop es

        push gs
        pop ds

;        xor di,di
        inc di
        xor si,si

        mov cx,16000
        rep movsd

        push cs
        pop ds

        mov si,offset zoom
        lodsw
        and ax,ax
        jnz short no_new

        mov coor,32160
        add byte ptr num,2

        mov si,offset figures-2
        add si,num
        lodsw

        and al,al
        jz short exit

        mov byte ptr (ddx+1),al
        mov byte ptr (ddy+1),ah

        mov byte ptr ddy,20H
no_new:
        mov ax,zoom
        inc ax
        cmp ax,190h
        jc short no_zero
        xor ax,ax
no_zero:
        mov zoom,ax

        mov al,coora
        inc al
        and al,11b
        jnz short no_line
        sub coor,321
no_line:
        mov coora,al

        mov dx,03dah
vert1:
        in al,dx
        test al,8
        jz short vert1

        in al,060h
        dec al
        jnz main
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
exit:
        mov ax,3
        int 10h
;        mov dx,offset copyr
;        mov ah,9
;        int 21h
        ret
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
;copyr db 'shur`99$'
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
zoomer:
        mov bl,al
        mov ax,[zoom]
        shl eax,8
        mul ebx
        shr eax,17
        ret
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
figures equ $
        db 002h,001h
        db 0f0h,0f0h
        db 0ffh,07fh
        db 020h,060h
        db 090h,060h
        db 0a0h,060h
        db 060h,080h
        db 060h,0e0h
        db 0c0h,020h
        db 0a0h,040h
        db 0
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
sine_table:
        db 10011001b
        db 10011010b
        db 01100110b
        db 01100110b
        db 10011001b
        db 10011001b
        db 10011001b
        db 10011001b
        db 01100110b
        db 01100101b
        db 10010110b
        db 01011001b
        db 01100101b
        db 10010101b
        db 01100101b
        db 01010110b
        db 01010101b
        db 01010101b
        db 01010101b
        db 01010100b
        db 01010101b
        db 01000101b
        db 01000101b
        db 00010100b
        db 01000101b
        db 00010000b
        db 01000100b
        db 01000001b
        db 00000001b
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
zeros   equ $
        db ?,?,?
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
xa      dw ?
ddx     dw ?
x       dw ?
ya      dw ?
ddy     dw ?
y       dw ?
zoom    dw ?
coora   db ?
coor    dw ?
num     dw ?
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
sine    equ $
        db ?
zeros_end equ $
ended   equ $+127
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
        end start
;*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
