org 100h
mov al,13h
int 10h

push word 0A000h
pop es

xortexture:
	mov ax,di
	add ax,bx
	xor al,ah
	and al,bh
	and al,63
	stosb
	loop xortexture
	inc bx

vsync:
MOV DX,3DAh
Vsync1:
	IN	AL,DX
	and	AL,8
	JZ     Vsync1
jmp xortexture

;WTFCIDWO32B