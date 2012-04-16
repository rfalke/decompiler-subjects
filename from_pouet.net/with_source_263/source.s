; Darth Scroller
; by Rebels
; code: lord Kelvin

	org 0x100		; .COM

	mov al,0x13		; \ MCGA
	int 0x10		; /

	push 0xA000		; \ es ~ video memory
	pop es			; /

	mov dx,msg		; \ Output text.
	mov ah,9		; |
	int 0x21		; /

	mov dx,0x331		; \ [331h] <- 3Fh
	mov al,0x3F		; |
	out dx,al		; /

	mov dl,0xC9		; \ first 8 colors ( including LIGHTGRAY ) will be BLACK in 8b
	xchg ax,bx		; |
	mov cl,8*3		; |
	out dx,al		; |
	loop $-1		; /

	mov si,di		; si = 0xFFFE. Midi player initialization. si must be more than time label

; cx here is allways 0 ( 65535 iterations ) and di is -2 ( aproximately 0 ). I Just love this trick!

here:	mov ax,di		; \ ax = di / 320 + 1; [y + 1]
	xor dx,dx		; | dx = di % 320; [x]
	div word [for320+2]	; |
	inc ax			; /

	sub dx,160		; dx = x - 160;
	push dx 		; preserve x - 160
	neg dx			; \ dx = abs( dx );
	jl $-2			; /
	cmp dx,ax		; \ if( abs( x - 160 ) > y ) continue;
	jl there		; |
	inc di			; |
	pop ax			; |
	loop here		; /

there:	xchg ax,bp		; bp = y + 1;
	mov ah,0x10		; Who cares of al?
	cwd			; dx = 0;
	idiv bp 		; ax = 4096 / ( y + 1 ) - dc; [oy]
smc:	add ax,word 0		;
	neg ax			; \ instead of checking of oy.
	and ax,63		; /
for320: imul bx,ax,320		; bx = ( -oy & 63 ) * 320;
	pop ax			; ax = x - 160;
	cwd			; dx = 0;
	imul ax,50		; ax = ( x - 160 ) * 50;
	idiv bp 		; ax = ( x - 160 ) * 50 / ( y + 1 ); [ox]
	add bx,ax		; bx = ( -oy & 63 ) * 320 + ox;
	mov al,[es:bx+48]	; getpixel
	shl al,1		; be YELLOW!

	stosb			; putpixel
	loop here		;

	dec word [smc+1]	; Haha! Self Modifying Code

	pusha			; preserve all registers. Sorry for flags.
;        mov ah,0
	cbw			; \ cx:dx - clock ticks since midnight.
	int 0x1A		; /
	mov bx,time		; [bx] ~ [time]
	cmp word [bx],dx	; \ if( time <= currenttime )
	ja ihere		; / {

	mov [bx],dx		; [time] = currenttime
	mov dx,0x330		; port #
	mov al,0x80		; \ Self Modifying Code. This operators must be togeather.
	xor byte [$-1],0x10	; /
	out dx,al		; write to port 0x90 or 0x80
	lodsb			; Get melody packed byte.
	cmp si,bx		; \ If melody is over - start from the beginning.
	jnae ithere		; |
	mov si,midi		; /
ithere: pop di			; \ Modify si, that was saved in stack
	pop bp			; |
	push si 		; |
	push di 		; /
	mov bp,ax		; \ bp = ax & 0000`0000`0000`1111b; It`s time delay x 0.055 msec.
	and bp,0xF		; /
	shr al,4		; \ al = note.
	or al,0x30		; /
	out dx,al		; write to port note.
	mov al,0x7F		; \ write to port velocity
	out dx,al		; /
	add [bx],bp		; Increase [time] by delay.
ihere:	popa			; recall all registers.

	in ax,0x60		; \ If user pushed esc, then we better exit.
	dec ax			; |
	jne here		; /

	ret			; But the music still works.

msg db	'It`s a',13,10,\
	'period of',13,10,\
	'civil war.',13,10,\
	'Rebel',13,10,\
	'spaceships',13,10,\
	'have won',13,10,\
	'their 1st',13,10,\
	'victory.$'

midi db 0x75,0x75,\		; It`s packed Imperial March melody. 18b
	0x75,0x75,\
	0x75,0x75,\
	0x35,0x34,\
	0xA2,0xA2,\
	0x72,0x75,\
	0x35,0x34,\
	0xA2,0xA2,\
	0x72,0x78
time dw 0			; It must be zero, not "?".