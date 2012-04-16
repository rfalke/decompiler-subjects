
; "Follow the light" by Digimind
;
;  for 64b Hugi Xmas Compo 2006
;
;    e-mail: digimind@aha.ru
;       ICQ:     33792281


model tiny
.586
codeseg
startupcode

; bx  frame counter
; cx  x coordinate
; dx  y coordinate
; di  pixel address

	mov bl, 04h

	mov al, 13h
	int 10h

	push 0a000h
	pop es

	frame_loop:
		inc bx					; update frame counter

		pixel_loop:
			mov ax, di
			xor dx, dx
			mov bp, 320
			div bp				; convert pixel address to x, y

			for_x_and_y:
				push dx
				mul word ptr [si]	; scale up by word at cs:[100h] (4b3h)
				div bx			; scale down by frame count for zooming in
				pop dx

				xchg ax, cx
				xchg ax, dx

				dec bp			; 320 -> 319 -> 318
			jp for_x_and_y			; use parity flag to loop 2 times

			mov al, 16			; start with black pixel

			inner_loop:
				test dl, cl
				js write		; stop looping if both x and y have bit 7 set

				add dx, dx		; scale y
				add dl, 192		; shift y
				add cx, bx		; shift x with frame count for panning
				xchg cx, dx		; swap x and y

				inc ax			; use brighter pixel
				cmp al, 31
			jl inner_loop			; go deeper

		write:
			stosb

			test di, di
		jnz pixel_loop

		in al, 60h
		cbw
		dec ax
	jnz frame_loop

	ret
end
