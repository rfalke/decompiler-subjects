; ===========================================
; pissis, a gay colored tunnel intro in 155b for pissis by nystep. 
; compiles with nasm:
; nasm -o pissis.com pissis.asm
; ===========================================
; Looks like i missed the deadline to submit for function 08. :> 
; Shit happens.. But nevermind, i did it just for fun in a weekend... 
; Hope you enjoy & Greetings to my friends, they know who they are.

BITS 16
ORG 0x100

	mov al, 0x13
	int 0x10
	push 0xA000
	pop es

	mov si, threemul
	mov bp, depthmul+2

_mainloop_pre:

	xor cx, cx

_mainloop:

		mov ax, di
		xor dx, dx
		div word [componentmul2]
_const100:
		sub ax, 100
_const128:
		sub dx, 128

		push dx
		fild word [esp]
		fld st0
		fmul st0
		push ax
		fild word [esp]
		fld st0
		fmul st0
_fx0:
		fxch st1
		fxch st2
		faddp st1
		fild dword [depthmul]
		fdivrp st1
		push bx
		fiadd word [esp]
		fidiv word [componentmul2]
		fsincos
		fimul word [si]
		fxch st1
		fimul word [si]
		faddp st1
		fmul st0
_fx1:
		fxch st2
		fxch st1
		fpatan
		fimul word [si]
		fild word [esp]
		fidiv word [_const128+2]
		fld st0
		fsin
		faddp st1
		faddp st1
		fsin
		f2xm1

		; texgen
		fmul st0
		faddp st1
		fsqrt
		fimul word [_const128+2]
		pop ax
		pop ax
		fistp word [esp]
		pop ax
		
		aas
		add al, 12
		
		stosb
		
		loop _mainloop
		
	inc bx
	or bl, bl
	jnz _nofxChange

	xchg bp, si
	
_nofxChange:

	in al, 0x60
	dec al
	jne _mainloop
	
	ret


;twomul: dw 2
threemul: dw 3
componentmul2:
depthmul: dd 0x10140

; text: db "Hi all! So I got plenty of spare  bytes and I have no more ideas... :]    Greetings!"
