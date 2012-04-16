	org 100h

	db 0xdb, 0xe3				; finit (without 'wait')
	mov al, 0x13
	int 0x10

	mov dx,0x331				; initialize soundsystem
	mov al,0x3F
	out dx,al

	; PALSET1
	mov cl, 0x40				; cx = 63
	xchg ax, bx				; ax = 0x0000
	mov dx, 969
P1:	out dx, al				; grayscale pal
	out dx, al
	out dx, al
	inc ax
	loop P1

	; PALSET2
	mov cl, 0x40
P2:	out dx, al				; blue-yellow pal
	out dx, al
	push ax
	mov al, 0x3F
	out dx, al
	pop ax
	inc ax
	loop P2

	push 0x8000				; generate "sky" texture
	pop es

	xor cx, cx
T1:	mul cx
	inc ax
	mov dx, ax
	xchg ax, bx
	sar dx, 12
	add al, dl
	jns T2
	xor ax, ax				; if sign, ax = 0
T2:	stosb
	xchg ax, bx
	loop T1

	; 1 rechange segment order
	push es
	 push 0x7000
	 pop es
	pop fs

	; generate rotorfade
	xor di, di
	mov bx, -100
C2:	mov cx, -160
C1:	mov [si], bx
	fild word [si]
	mov [si], cx
	fild word [si]
	fpatan
	fmul dword [factor]
	fistp word [es:di]
	inc di					; directly save in videomemory
	inc cx
	cmp cx, 160
	jne C1
	inc bx
	cmp bx, 100
	jne C2

	; 2 rechange segment order
	push 0xA000
	push es
	pop ds
	pop es

C5:	xor si, si
	xor di, di
	mov bx, -100
C4:	mov cx, -160
C3:	mov ax, bx
	imul bx
	push ax
	mov ax, cx
	imul cx
	pop dx
	add ax, dx
	inc si				; no skip no one

	mov dx, cx			; gradiental
	add dx, bx
	add dx, 200
	shr dx, 3
	cmp ah, 0x23
	jnc S1				; out of sector?

	mov dl, [ds:si]
	sub dx, bp
	and dl, 0x3F
	cmp ah, 0x1C
	jnc S1				; sector C

	xor dx, dx
	cmp ah, 0x19
	jnc S4				; sector B

	mov dx, ax
	shr dx, 4
	xor dl, 0x3F
	cmp ah, 0x2			; sector A
	jc S1

	; -----------
	dec si
	lodsb				; sector 0
	add ax, bp
	and al, 0x2E			; rotor detect
	add al, 0x10			; +brightness
	test al, 0x20			; if Z = 1, innerrotor
	mov dl, al
	jne S1

S4:	add dl, [fs:di+bp]		; moving sky
	and dl, 0x7F
	shr dl, 1
	or dl, 0x40

S1:	xchg ax, dx
	stosb
	inc cx
	cmp cx, 160
	jne C3
	inc bx
	cmp bl, 100
	jne C4

	inc bp
	mov dx, 0x330
	mov al, 0x99			; instrument 0x99
	out dx, al
	add ax, bp
	test al, 0x1F
	jne cc
	mov al, 51			; kick
cc:	and al, 0x70
	out dx, al			; note
	out dx, al			; volume = note "pitch"

	in al, 0x60			; wait key
	dec al
	jne C5

	ret

; ----------------------------------
factor	dd 40.4253555453		; secret factor :D