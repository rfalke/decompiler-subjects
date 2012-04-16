;                 FASM-ART.NAROD.RU
;~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~=>
;~ ___ . -=\_/=-/~|~||\/|  _     ~=>
;~  / / /\/ |   \_|_||  | / |/\/ ~=>
;~~~~~~~~~~~~~~~~~~~~|~~  ``` ~~~~~~
; .[32/64/128/256b]. `- pouet.net ->
;
; Improved planet.asm
; Add palette, remove ESC-key for exit :(

	org 100h
	mov al, 0x13
	int 0x10
	push 0xa000
	pop es
	mov si, 29500
	mov dx, 969

	mov cx, sp
C4:	out dx, al
	dec ax
	out dx, al
	loop C4

C3:	xor di, di
	mov bx, -99
C2:	mov cx, -160
C1:	mov ax, bx
	cwd
	imul bx
	push ax
	mov ax, cx
	cwd
	imul cx
	pop dx
	add ax, dx
	add ax, 4096			; a = x*x + y*y + 4096
	mov [si+4], ax
	mov word [si+6], 0		; for dword
	mul si
	ror eax, 16
	xchg ax, dx
	ror eax, 16
	sub eax, 0x17D78400
	neg eax 			; d = C1 - a*C2
	shr ax, 1			; WOW! I take this effect accidentally!
	js nx

	  mov [si], eax 		; [si] = d
	  fild dword [si]
	  fsqrt
	  fistp word [si]
	  sub word [si], 20000
	  fild word [si]
	  fidiv dword [si+4]		; k = (sqrt(d) - 20000) / a
	  mov [si], cx
	  fild word [si]
	  fmul st, st1
	  fistp word [si]		; x
	  finit 			; release FPU
	  mov ax, [si]
	  add ax, bp

nx:	stosb
	inc cx
	cmp cx, 160
	jne C1
	inc bx
	cmp bl, 100
	jne C2

	dec bp
	;in al, 0x60
	;dec al
	;jne C3
	;ret
	jmp C3
