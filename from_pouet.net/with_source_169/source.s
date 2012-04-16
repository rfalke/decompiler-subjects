;       lord Kelvin`s
;       Return Of The Copper Tapes

	org 0x100		; .COM

	mov al,0x13		; \ MCGA
	int 0x10		; /

	push 60 		; [bx+4]
	push 32 		; [bx+2]
	push ax 		; [bx]
	mov bx,sp		; address through bx
	mov bp,1024+320*200	;

	fldz			; st0=0, y too
again:	mov di,1024		; not to touch program`s code & stack
	push di 		; \ [ds:1024 ... ds:1024+320*200]=0
	mov ch,0xFA		; |
	rep stosb		; |
	pop di			; /

row:	fld st0 		; st0=y,st1=y
	fidiv word [bx+2]	; st0=y/32,st1=y
	fsincos 		; st0=sin(y/32),st1=cos(y/32),st2=y
	push di 		; preserve y*320
	inc ax			; blue column...
	call fproc		;

	pop di			; recall y*320
	push di 		; preserve y*320
	neg word [bx]		; [bx]=x2
	add di,150		; center2
	inc ax			; \ green column
	call column		; /

	pop di			; recall y*320
	push di 		; preserve y*320
	mov al,4		; red column...
	call fproc		;
	pop di			; recall y*320

	fld1			; \ st0=y+1
	faddp st1,st0		; /

	in al,0x60		; \ If user is bored and Esc is pressed - exit
	cmp al,1		; |
	jz bye			; /

	add di,320		; go to next line, di = 320 * ( y + 1 );
	cmp di,bp		; \ while not ended screen
	jb row			; /

	push es 		; preserve es, that points to code segment
	push 0xA000		; \ make es a "video segment", you know
	pop es			; /
	mov ch,0xFA		; cx = 320 * 200
	mov si,1024		; (ds:si)
	xor di,di		; di = 0 (es:di)
	rep movsb		; while( cx ) [es:di]=[ds:si], cx--;
	pop es			; recall es
	jmp again		; Start all over again

bye:	int 0x20		; Exit.

column: add di,[bx]		; di += x
loop1:	stosb			; \ putpixel( x, y, al );
	stosb			; | putpixel( x + 1, y, al );
	xor al,8		; | putpixel( x + 2, y, al ^ 8 );
	stosb			; | putpixel( x + 3, y, al ^ 8 );
	stosb			; |
	xor al,8		; /
	add di,320-4		; x -= 4, y++;
	cmp di,bp		; \ while not reached boorom
	jb loop1		; /
	ret			; return

fproc:	fimul word [bx+4]	; \ [bx] = st0 * 60
	fistp word [bx] 	; /
	add di,170		; center
	call column		; column :)
	ret			; return

db 3,'U'			;