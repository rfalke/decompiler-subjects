.286
cseg segment 'code'
assume cs:cseg;ds:cseg
org 100h

myproc proc
        mov ax,13h
        int 10h
        mov ax,0A000h
        mov es,ax
        mov bx,0
lab1:   mov cx,64000
lab:	mov ax,a
        mov t,ax
        mov ax,b
        add a,ax
        mov ax,t
        mov b,ax
        mov ax,a
        ror ax,8
        mov a,ax
        push bx
        mov bx,4
        mov dx,0
        div bx
        pop bx
        mov ax,dx
        mov si,ax
        mov al,x[si]
        mov es:[bx],al
        inc bx
        loop lab
        mov ah,0bh
        int 21h
        cmp al,0
        je lab1
        mov ah,01h
        int 21h
        mov ax,0003h
        int 10h
        mov ah,4ch
        int 21h
myproc endp
a dw 0000h
b dw 0a001h
t dw ?
x db 0,15,7,8
cseg ends
end myproc
