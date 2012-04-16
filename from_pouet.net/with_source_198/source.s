
org 100h
mov al,13h
int 10h
mov cx,cs
add ch,010h
mov es,cx
push 0a000h
pop fs
__QZ:
mov dx,3c8h
mov al,cl
out dx,al
inc dx
mov al,cl
shr al,1
out dx,al
out dx,al
shr al,1
out dx,al
loop  __QZ
___Az:
xor di,di
mov bx,100h
add word [bx],2
fild word [bx]
fidiv word [bx+35h]
fsincos
mov ax,320
mov dx,-200
push ax
__lpY:
neg ax
push dx
__lpX:
push ax
mov si,sp
fild word [si]
fild word [si+4]
call _xOl
fxch st3
fxch st1
fild word [si+2]
call _xOl
fxch st4
call _xOl
fabs
fchs
mov si,106h
fistp word [si]
fistp word [si+2]
fxch st2
fistp word [si+4]
mov al,0x7f
push di
mov bx,[si-7]
mov bp,bx
xor cx,cx
mov di,bx
dec word [si]
_Qa:
add cx,[si]
add bp,[si+2]
add di,[si+4]
mov ah,0xe4
call _Vx
push dx
mov ah,[si-5]
add ah,0x27
and ah,0xf8
call _Vx
pop bx
adc dh,bh
jz _Out
dec al
jne _Qa
_Out:
pop di
stosb
pop ax
inc ax
inc ax
cmp ax,320
jne __lpX
pop dx
inc dx
inc dx
cmp dx,200
jne __lpY
___aaa:
mov ax,[es:di]
mov  [fs:di],ax
dec di
dec di
jne ___aaa
pop ax
in al,60h
cmp al,81h
jnz  ___Az
ret
_xOl:
fld st0
fmul st0,st3
fxch st2
fld st0
fmul st0,st5
faddp st3,st0
fmul st0,st3
fxch st1
fmul st0,st4
fsubp st1,st0
ret
_Vx:
mov bx,bp
add bh,ah
mov dx,di
add dh,ah
and dx,bx
and dx,cx
and dh,ah
ret