; CurseTro
;  by lord Kelvin

	org 0x100		; .COM

	mov al,0x12		; for mode 640x480x16

	push 240		; [si]
	mov si,sp		; si <- sp
	push ax 		; [si-2] = 18
	push 40 		; [si-4]
	push 49 		; [si-6]

	fldz			; t
here:	int 0x10
	fld st0 		; t, t
	fimul word [si-2]	; 18t, t
	fsin			; sin(18t), t
	fimul word [si] 	; 240sin(18t)[r], t
	fld st1 		; t, r, t
	fimul word [si-6]	; 49t, r, t
	fsin			; sin(49t), r, t
	fmul st0,st1		; rsin(49t), r, t
	fiadd word [si] 	; 240+rsin(49t)[y], r, t
	fistp word [di] 	; r, t
	mov dx,[di]		; dx = y
	fld st1 		; t, r, t
	fimul word [si-4]	; 40t, r, t
	fcos			; cos(40t), r, t
	fmulp st1,st0		; rcos(40t), t
	fiadd word [si] 	; 240+rcos(40t)[x], t
	fistp word [di] 	; t
	mov cx,[di]		;
	fld1			; 1, t
	faddp st1,st0		; t+1[t]
	mov ax,0x0C01		; for putpixel( cx, dx, al );

	jmp here		; ugly loop
;        push ax
;        in al,0x60
;        cmp al,1
;        pop ax
;        jne here

;        int 0x20