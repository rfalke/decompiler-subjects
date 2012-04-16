;;; by devreci >:-(

org 100h

mov al,13h
int 10h
mov ax,ds
add ax,100
mov es,ax
sdfeee:
mov edi,0
mov cx,31500
xor ax,ax
mov [ac3],ax
mov [ac1],ax
rep stosw
mov [syc],9
sdkfjshd:
add [ac2],179
add [ac3],125
mov bp,1256
sdfgdsf:
inc [ac1]
inc [ac1]
push word [ac2]
push word [ac1]
call draw
push word [ac1]
push word [ac3]
call draw
dec bp
jne  sdfgdsf
dec [syc]
jne sdkfjshd
push es
push ds
xor si,si
xor di,di
mov ax,es
mov ds,ax
mov ax,0a000h
mov es,ax
mov cx,31500
rep movsw
pop ds
pop es
in al,60h
cmp al,81h
je sdgfhs
jmp sdfeee
sdgfhs:
int 20h
draw:
fild word [esp+2]
fidiv [uzk]
fsincos
fimul [hpp]
fistp [kr+2]
fimul [hpp]
fistp [kr+4]
fild word [esp+4]
fidiv [uzk]
fsincos
fimul  [kr+4]
fistp [kr]
fimul  [kr+4]
fistp [kr+4]
fild [kr]
fild [kr+2]
fild [kr+4]
fidiv [uzk]
fld1
fadd st1,st0
faddp st1,st0
fdiv st1,st0
fdivp st2,st0
fchs
fistp [kr+2]
fmul [xvur]
fistp [kr]
mov ax,[kr+2]
add ax,98
mov bx,320
mul bx
mov bx,ax
add bx,160
add bx,[kr]
mov byte [es:bx],14
ret 4

hpp dw 170
syc dw 0
xvur dd 1.25f
uzk dw 400
kr dw ?,?,?
ac1 dw ?
ac2 dw ?
ac3 dw ?









