
.model tiny
.stack
.code
.386

	mov al,13h
	int 10h
	mov dx, 3C9h
	xor ax, ax
pal_loop:
	out dx, al
	out dx, al
	out dx, al
	inc ax
	jnz pal_loop
	mov ax,0A000h
	mov es,ax
	mov bp,32000
	mov bx,bp
demo_loop:
	inc bx
	cmp bx,32320
	jne skip
	mov bx,bp
skip:
	mov ah,0
	in al,60h
	dec ax
	jnz continue
	ret
continue:
	mov al,64
	mov es:[bx],al
	mov dx,3DAh
sync:
	in al,dx
	and al,8
	jz sync
	mov di,bp
fade:
	inc di
	cmp di,32320
	je demo_loop
	mov al,es:[di]
	cmp al,0
	je fade
	dec ax
	mov es:[di],al
	jmp fade

end
