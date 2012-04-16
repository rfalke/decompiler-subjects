.model tiny
.386
.code
org     100h
main:
	mov     al,13h
	int     10h
push 0a000h
pop ds
starto:
mov cx, 0fffh
mov si,cx
mov al,40
loopo:
  mov ds:[si],al 
  add si,343
  xor si,00934h
loop loopo
xor si,si
mov al,ds:[si]
x2:
mov ah,ds:[si+320]
mov ds:[si+320],al
xchg al,ah
  add si,ax
mov ah,ds:[si-320]
mov ds:[si-320],al
add si,2
jmp x2
end     main
