code:
	org 0100h

	mov al, 13h                 	;MCGA mode (320x200x256).
	int 10h                    	;Video interrupt request.

	les bp,[bx]		;2b	;video mem offset trick, is slightly off though [-16]

;	push word 0xa000	;3b	;Video memory
;	pop es			;1b

ROT	xor di, di		;2b
	mov cx, 3		;3b

ROTT	inc word [di+@Buffer]	;4b	;increase attr angle
	fild word [di+@Buffer]	;4b	;load attr angle
	fidiv word [@Buffer+6]	;4b	;scale 0 - rad - 6.3
	fsincos			;2b	; angle sin - st1 | cos - st0

	fimul word [@Buffer+8]		;4b	;scale_x * radius
	fistp word [di+@Buffer+10]	;4b	;attr_x = radius * cos (angle)
	fimul word [@Buffer+6]		;4b	;scale_y * radius
	fistp word [di+@Buffer+18]	;4b	;attr_y = radius * sin (angle)

	stosw			;1b	;increment di by 2
	loop ROTT		;2b

	dec cx			;1b	;0 -> 0xFFFF
;	xor ax, ax		;2b
	rep stosb		;2b	;clear everything else

DRAW	push di			;1b

	imul di, dx, 320	;7b	; di = x + (y * 320)
	add di, bx		;2b	;

	add di, 0xBC30		;4b	; offset to center [0,0 @ 160,150]
					; bc20 = (150*320+160) + 16 for les offset

	stosb			;1b	; draw pixel

	pop di			;1b

RAND3	add ax, di		;2b
	rol ax, 2		;5b	; Psudo-random		[fast, big :( compatable]
	add di, ax		;2b

	and di, 6		;2b	;[mask 00000110]

	mov bp, word [di+@Buffer+10]	;4b	; Load Attractor
	mov si, word [di+@Buffer+18]	;4b
	
ATTR	sub bp, bx		;2b	; (DI - x)
	sar bp, 1		;4b	; ((DI - x) / 2)
	add bx, bp		;2b	; x + ((DI - x) / 2)

	sub si, dx		;2b	; (DX - y)
	sar si, 1		;4b	; ((DX - y) / 2)
	add dx, si		;2b	; y + ((DX - y) / 2)

	dec cx			;1b
	jne DRAW 		;2b

DRAWEND	in al, 60h		;2b	;Read value from port 60h (keyboard)
	dec al			;2b	;ESC key (scancode 1) 	[dec ax saves a byte but]
	jnz ROT			;2b	;Zero, END		[doesnt work outside windows]

END	ret			;1b	;DIE

data:
@Buffer		dw 0,105,210, 49,99, 0,-100,100,0, 0,45,45,-150