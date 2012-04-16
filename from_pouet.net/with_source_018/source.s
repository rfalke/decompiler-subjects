
.model tiny
.stack
.code

start:	mov	al,13h
	int	10h
	mov	ax,0A000h
	mov	es,ax

floop:	lodsb
	cmp al,0
	jz floop
	dec ax
	stosb
	inc di
	jmp short floop

end
