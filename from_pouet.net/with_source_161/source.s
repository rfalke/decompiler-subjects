	org 0x100		; .COM file

	mov al,0x13		; \ 320 x 200 x 256 video mode
	int 0x10		; /

	mov dx,msg		; \ Output the text.
	mov ah,9		; |
	int 0x21		; /

	push 0xA000		; \ ds: - video memory, also ds is default for di
	pop ds			; /

	mov dx,0x331		; \ [0x331] <- 3Fh
	mov al,0x3F		; |
	out dx,al		; /
	dec dx			; dx = 0x330

	xor ax,ax		; y = 0

here:	push ax 		; {
	mov al,0x99		; \ midi drums, if I'm right
	out dx,al		; /

	inc si			; \ Very cheap tune : ( i++ % 8 ) + 39
	mov ax,si		; |
	and al,7		; |
	add al,39		; /
	out dx,al		;

	mov al,0x7F		; \ Half of volume, it's default
	out dx,al		; /
	pop ax			; }

	mov bp,[fs:0x046C]	; 0x0000:0x046C - here the timer lies, that changes every 55 msecs
	add bp,3		; add 3, to wait 165 msecs

step:	imul bx,0x660D		; \ random ( Z flag ) in 11 bytes.
	add bx,0xF35F		; |
	test bh,0x80		; /

	jz else1		; Z flag is 1
	sub cx,ax		; \ x = ( x - y ) / 2;
	sar cx,1		; /
	add ax,cx		; y = x + y;
	jmp end1		;

else1:	add ax,128		; \ x = ( x + y + 128 ) / 2;
	add cx,ax		; | y = y - x + 128;
	sar cx,1		; |
	sub ax,cx		; /

end1:	mov di,ax		 ; \ ( x + 100 ) + 320 * ( y + 150 )
	imul di,-320		 ; |
	add di,cx		 ; |
	add di,48100		 ; /

	inc byte [di]
	and byte [di],15	; \ pixel will be from 17th color to 32nd.
	add byte [di],16	; /

	cmp bp,[fs:0x046C]	; \ while there is still time - do only drawing
	jg step 		; /

	push ax 		; {
	in al,0x60		; \ Check for <Esc>
	cmp al,1		; /
	pop ax			; }
	jnz here		;    if there isn't any - continue

	ret			; Goodbye.
msg db 'strong=wrong?$'
