;       xor tutorial
;       by lord Kelvin

	org 0x100		; .COM

	mov ah,6		; \ ax = 0x600 - clear screen
	mov bh,0x71		; | background 7 (light gray), text 1 (blue)
	xor cx,cx		; | from 0:0 (upper left corner of the screen)
	mov dh,0x19		; | to somwhere after lower right corner.=)
	int 0x10		; /

	mov cl,all-msg		; Length of program.
	mov si,msg		; For lodsb.
here:	lodsb			; Get one letter of message.
	mov dl,al		; \ Output it on the screen.
	mov ah,2		; |
	int 0x21		; /

	mov ax,[fs:0x046C]	; \ [0000:046C] - here is timer's value,
	inc ax			; |  so we wait for 2 ticks
waitin: cmp ax,[fs:0x046C]	; |
	jge waitin		; /

	loop here		; Repeat typing, while cx.

	xor ah,ah		; \ Wait for a keystroke
	int 0x16		; /
	xor ah,ah		; ...
	;ret

	push 0xA000		; \ es points to video memory
	pop es			; /
	mov al,0x13		; \ MCGA video mode.
	int 0x10		; /
	mov ax,di		; \ ax = di / 320;
	mov bx,0x140		; | dx = di % 320;
	xor dx,dx		; | 'cos di points to current pixel - ax becomes y
	div bx			; /  and dx - x.
	xor ax,dx		; ax = y ^ x;
	and al,0x1F		; \ al = al % 32 + 32;
	add al,0x20		; /
	stosb			; [es:di] = al, di++;
	in al,0x60		; \ Continue, while not <Esc>.
	dec al			; |
	jnz $-0x14		; /
	ret			; die.

msg:
db 'push A000h',13,10,'pop es',13,10,'mov al,13h',13,10,'int 10h',13,10,\
'mov ax,di',13,10,'mov bx,140h',13,10,'xor dx,dx',13,10,'div bx',13,10,\
'xor ax,dx',13,10,'and al,1Fh',13,10,'add al,20h',13,10,'stosb',13,10,\
'in al,60h',13,10,'dec al',13,10,'jnz $-14h',13,10,'ret',13,10,';Press any key to run.'
all: