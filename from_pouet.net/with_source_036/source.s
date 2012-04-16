; -------------------------
; Distort by Knights' Storm
; -------------------------

org 100h
mov al, 12h
int 10h
lds ax,[bx]
@Loop:
mov ax,di
xor dx,dx
mov bx,2
div bx
add ax,bx
and ax,dx
xor ax,cx
shr ax,cl
inc di
xor [di],al 
jnz @Loop
inc cx
jmp @Loop

; -------------------------
; 	   2005
; -------------------------
