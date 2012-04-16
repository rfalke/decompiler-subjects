model tiny
.586
codeseg
startupcode



		; fs: height field
		add dh, 10h
		mov fs, dx

		; gs: tex coords
		add dh, 10h
		mov gs, dx

		mov al, 13h
		int 10h


        pusha

        restart:

        popa
        inc ax
        pusha


		; create height field
create_loop:
			imul ax, 65
			inc ax
			mov [si], ax
			fild word ptr [si]
			fimul data_32
			fstp dword ptr fs:[bx]

			add bx, 4
			jnz create_loop

        inc cx
		; smooth height field, create palette
        smooth_loop:
				fld dword ptr fs:[bx - 200h]
				fadd dword ptr fs:[bx + 200h]
				fadd dword ptr fs:[bx - 4]
				fadd dword ptr fs:[bx + 4]
				fidiv data_4
				fstp dword ptr fs:[bx]

				; create s, t
				imul ax, bx, 64
				mov gs:[bx], ax

				movzx ax, bh
				shl ax, 7
				mov gs:[bx + 2], ax

				add bx, 4
				jnz smooth_loop


			mov dx, 3c9h
			mov al, cl
			shr al, 2
			out dx, al
			out dx, al
			out dx, al
			loop smooth_loop


		push 0a000h
		pop es



main_loop:

pixel_loop:
			mov ax, di
			xor dx, dx
			mov cx, 320
			div cx

			mov bh, al
			mov bl, dl
			add bl, bl
			add bx, bx

			mov cl, gs:[bx + 1]
			add cl, cl
			mov ch, gs:[bx + 3]

			cmp ax, 128
            jge skip
			cmp dx, 128
            jge skip
			imul bp, cx, 2
			fld dword ptr fs:[bp]
			fld st(0)
			fsub dword ptr fs:[bp - 4]
			fistp word ptr [si]
			mov ax, gs:[bx + 2]
			add ax, [si]
			mov gs:[bx + 2], ax
			fsub dword ptr fs:[bp - 512]
			fistp word ptr [si]
			mov ax, gs:[bx]
			sub ax, [si]
			mov gs:[bx], ax

skip:
			; texture
			fldpi
			mov [si], cx
			fimul word ptr [si]
			fidiv data_128
			fld st(0)
			fsin
			fxch st(1)
			fidiv data_128
			fsin
			fmulp st(1), st(0)
			fimul data_127
			fistp word ptr [si]

			mov al, [si]
			add al, 128
			stosb

			test di, di
			jnz pixel_loop


        add counter, 2
        jz restart


		in al, 60h
		cbw
		dec ax
		jnz main_loop

        int 20h


    data_4      dw 4
    data_32     dw 32
    data_127    dw 127
    data_128    dw 128
    counter     db 0

end
