.model tiny
.386
.code
org     100h
main:
	mov     al,13h
	int     10h
push 0a000h
pop ds
mov al,40
mov cx, 0fffh
mov si,cx
loopo:
  mov ds:[si],al 
  add si,343
loop loopo
xor si,si
mov al,ds:[si]
x2:
mov ah,ds:[si+320]
mov ds:[si+320],al
xchg al,ah
  add si,ax
inc si
jmp x2
end     main
