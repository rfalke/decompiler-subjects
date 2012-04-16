;  ______ ______  ______  ______  __  ______  ______  ______ ______
; /\  ___/\  __ \/\  == \/\  == \/\ \/\  ___\/\  __ \/\__  _/\  ___\
; \ \  __\ \  __ \ \  __<\ \  __<\ \ \ \ \___\ \  __ \/_/\ \\ \  __\
;  \ \_\  \ \_\ \_\ \_____\ \_\ \_\ \_\ \_____\ \_\ \_\ \ \_\\ \_____\
;   \/_/   \/_/\/_/\/_____/\/_/ /_/\/_/\/_____/\/_/\/_/  \/_/ \/_____/

;  ..AKA "Hackalicious" :P

; [c] 2009 Jake Taylor [ Ferris / YUP ]

[org 100h]
[section .text]
NOTES:	mov al,13h
		int 10h
		push ax
		or ax,0efah
		mov dx,3c8h
		out dx,al
		inc dx
PAL:		mov ax,cx
			push ax
			shr ax,byte 2
			out dx,al
			pop ax
			shl ax,1
			out dx,al
			and al,63
			cmp al,byte 31
			jbe PAL2
				mov al,31
PAL2:		shl ax,1
			out dx,al
		loop PAL
		pop ax
		out 61h,al
MAIN:		push 0a140h
			pop es
			mov si,0fa00h
			mov word [si + 4],25
			xor di,di
			mov dx,-80
YLOOP:			mov bp,-160
XLOOP:				fninit
					mov word [si],4
					fild word [si]
					mov [si],dx
					fild word [si]
					fidiv word [si + 4]
					mov [si],bp
					fild word [si]
					fidiv word [si + 4]
					mov [si],bx
					fild word [si]
					mov word [si],82
					fidiv word [si]
					fld st0
					fiadd word [si]
					fcos
					mov cl,2
RLOOP:					fsincos
						fld st3
						fmul st1
						fld st5
						fmul st3
						faddp st1
						fstp dword [si]
						fmul st4
						fld st3
						fmulp st2
						fsubp st1
						fstp st3
						fld dword [si]
						fstp st2
					loop RLOOP
					fldz
					mov byte [si],128
					fild word [si]
					fldz
					push dx
					mov cl,112
RAYC:					fadd st3
						fld st4
						faddp st2
						fld st5
						faddp st3
						fld st1
						fistp word [si]
						mov dx,[si]
						fld st2
						fistp word [si]
						mov ax,[si]
						sub ax,bx
						fist word [si]
						xor ax,[si]
						shr al,byte 2
						cmp dl,al
						jbe RAYH
						mov ah,255
						sub ah,dl
						cmp ah,al
						jbe RAYH
					loop RAYC
RAYH:				mov dl,cl
					shr dl,byte 2
					mov al,bl
					shl al,byte 3
					and al,224
					or al,dl
					stosb
					pop dx
				inc bp
				cmp bp,160
				jnz XLOOP
			inc dx
			cmp dx,byte 80
			jnz YLOOP
			mov si,bx
			shr si,byte 4
			and si,byte 6
			add si,NOTES
			lodsw
			mov cx,bx
			and cl,1
			shr ax,cl
			out 42h,al
			mov al,ah
			out 42h,al
			inc bx
		mov ah,1
		int 16h
		jz MAIN
		retn
