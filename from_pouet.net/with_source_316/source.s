;;; by devreci <:-)

org 100h

mov al,13h
int 10h
mov al,0
mov dx,3c8h
out dx,al
inc dx
mov cl,255
djgdgfd:
mov al,cl
not al
out dx,al
out dx,al
mov al,0
out dx,al
loop djgdgfd
mov ax,ds
add ax,100
mov es,ax
sdfeee:
mov edi,0
mov cx,31500
xor ax,ax
mov [ac3],ax
mov [ac1],ax
mov [ac2],ax
rep stosw
mov [syc],9
add [ac4],4
add [ac5],6
add [ac6],3
sdkfjshd:
add [ac2],179
add [ac3],125
mov bp,1100
sdfgdsf:
add [ac1],3
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
drcx:
mov ax,[esp+4]
mov bx,[esp+6]
mov cx,[esp+2]
fild word [eax]
fmul st0,st0
fild word [ebx]
fmul st0,st0
faddp st1,st0
fsqrt
fstp [kpp]
fild word [eax]
fild word [ebx]
fpatan
fild word [ecx]
fidiv [hpp]
faddp st1,st0
fsincos
fmul [kpp]
fistp word [ebx]
fmul [kpp]
fistp word [eax]
ret 6
draw:
fild word [esp+2]
fidiv [uzk]
fsincos
fimul [hpp]
fistp [kr]
fimul [hpp]
fistp [kr+4]
fild word [esp+4]
fidiv [uzk]
fsincos
fimul  [kr+4]
fistp [kr+2]
fimul  [kr+4]
fistp [kr+4]
push kr
push kr+2
push ac4
call drcx
push kr
push kr+4
push ac5
call drcx
push kr+2
push kr+4
push ac6
call drcx
fild [lgyuk]
fild [kr]
fisub [lght]
fmul st0,st0
fild [kr+2]
fisub [lght+2]
fmul st0,st0
fild [kr+4]
fisub [lght+4]
fmul st0,st0
faddp st1,st0
faddp st1,st0
fidiv [lgyuk+2]
fiadd [lgyuk+4]
fdivp st1,st0
fistp [rnk]
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
mov ax,[rnk]
cmp ah,0
je sdgfsd
mov al,250
sdgfsd:
cmp byte [es:bx],al
ja sdlsdf
mov byte [es:bx],al
sdlsdf:
ret 4

lght dw 80,-70,-100
lgyuk dw 252,2100,4
hpp dw 170
syc dw 0
xvur dd 1.25f
uzk dw 400
ac4 dw 0
ac5 dw 0
ac6 dw 0
rnk dw ?
kr dw ?,?,?
ac1 dw ?
ac2 dw ?
ac3 dw ?
kpp dd ?









