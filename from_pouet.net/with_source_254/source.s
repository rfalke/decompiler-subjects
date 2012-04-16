;                        _         ___    _
;   ___  _ _  ___  ___  | |_  ___ |_  | _| |
;  | _ || | || __|| __| |   || __|| _ || _ |
;  |___| \_/ |___||_|   |_|_||___||___||___|
; [ +++ | +++ | +++ | +++ | +++ | +++ | +++ ]

;  A spinny overhead voxel implementation in 256 bytes!
;  (C) 2006 Jake Taylor [Thygrion/YouthUprising/DarkBitFactory/Gravity]
;  Beefs to Baze/3SC for help and inspiration!!

[org 100h]
[section .text]
		mov al,13h
		int 10h
		
		push 0a000h
		pop es
		mov ax,cs
		add ah,10h
		mov fs,ax
		
		mov dx,3c8h
		xor ax,ax
		out dx,al
		inc dx
		mov cl,255
PAL		mov al,cl
		add al,al
		push ax
		shr al,2
		out dx,al
		pop ax
		shr al,3
		add al,31
		out dx,al
		mov al,63
		out dx,al
		loop PAL
		
HMAP	fninit
		fldpi
		mov al,bh
		mov [si],ax
		fild word [si]
		mov cl,bl
		mov [si],cx
		fild word [si]
		mov [si],word 64
		fidiv word [si]
		fmul st2
		fsin
		fld st1
		fidiv word [si]
		fmul st3
		fsin
		fmulp st1
		fabs
		mov [si],word 63
		fimul word [si]
		fistp word [si]
		mov cx,[si]
		and al,bl
		shr al,3
		and al,1
		add al,1
		mul cl
		mov [fs:bx],al
		inc bx
		jnz HMAP
		
		mov [si + 18],word 480
		
MAIN	mov [si],bx
		fild word [si]
		fst qword [si + 2]
		mov [si],word 128
		fidiv word [si]
		fldpi
		fmulp st1
		fsincos
		fstp qword [si + 28]
		fstp qword [si + 20]
		
		xor di,di
		mov dx,-100
YLOOP	mov bp,-160
XLOOP	fninit
		
		mov [si],dx
		fild word [si]
		fidiv word [si + 18]
		mov [si],bp
		fild word [si]
		fidiv word [si + 18]
		
		fld qword [si + 28]
		fmul st2
		fld qword [si + 20]
		fmul st2
		faddp st1
		fld qword [si + 28]
		fmul st2
		fld qword [si + 20]
		fmul st4
		fsubp st1
		
		fld qword [si + 2]
		fldz
		push bx
		mov al,116
		
RAYC	fld st3
		faddp st2,st0
		fadd st0,st2
		
		fld st1
		fistp word [si]
		mov bx,[si]
		mov bh,bl
		fist word [si]
		mov cx,[si]
		add cl,32
		mov bl,cl
		mov cl,[fs:bx]
		cmp al,cl
		jbe RAYH
		dec al
		jnz RAYC
		
RAYH	stosb
		pop bx
		inc bp
		cmp bp,160
		jnz XLOOP
		inc dx
		cmp dx,byte 100
		jnz YLOOP
		
		dec bl
		mov ah,01
		int 16h
		jz MAIN
		
		retn
		
;EXTR	db "Ø"