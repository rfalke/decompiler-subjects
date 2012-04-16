	org 0x100		; We are a .com file

	les bx,[bx]		; es:dx = dword [bx]
	mov al,0x13		; \
	int 0x10		; / 320 x 200 x 256 graph mode

	push 15 		; 15  = [bp+0xA]
	push cx 		; \
	push cx 		; / y = [bp+0x6]
	push 0xBDCC		; \
	push cx 		; / x = [bp+0x2]
	push cx 		; buf = [bp+0x0]
	mov si,sp

here:	fild word [si+0xA]	; st0 <- 15                             | newy = x
	fsub dword [si+0x6]	; st0 = 15 - y                          | newx = C - y + |x|
	fld dword [si+0x2]	; st0 <- x                              |  C = 15
	fist word [si]		; buf = int( x )                        | then - iterate
	mov di,[si]		; di = newy                             |
	imul di,320		; di = newy * 320                       |
	fst dword [si+0x6]	; save y = x                            |
	fabs			; st0 = |x|                             |
	faddp st1,st0		; st0 <- 15 - y + |x|                   |
	fst dword [si+0x2]	; save x = 15 - y + |x|                 |
	fistp word [si] 	; buf <- newx                           |
	add di,[si]		; di = newy * 320 + newx                |
	add di,19330		; di = ( newy + 60) * 320 + newx + 130  |

	inc byte [es:di]	; increase current color
	in al,0x60		; get current keyboard state
	dec al			; if AL is not 1 ( and AL - 1 is not 0 )
	jnz here		;  then - continue iterating
	int 0x21		; exit program without cureing the stack
	nop			; The mainest operation, pure art.=)