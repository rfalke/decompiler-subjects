;       Only a Cube
;	by lord Kelvin

	org 0x100		; .COM

	mov al,0x13		; \ MCGA
	int 0x10		; /

;        mov dx,0x3C9            ; \ colors[ i ] = RGB( -i / 2, -i / 3, -i / 4 );
;        mov cx,256              ; |  i = 256 ... 1
;pal:    mov ax,cx               ; |
;        neg ax                  ; |
;        shr al,2                ; |
;        out dx,al               ; |
;        shr al,1                ; |
;        out dx,al               ; |
;        shr al,1                ; |
;        out dx,al               ; |
;        loop pal                ; / Sorry, no pal.:(

	fldz			; st0=a

	; clear z buffer
here:	mov ch,0xFA		; cx = 320 * 200
	mov di,zbuf		; di = start of z buffer
	xor al,al		; al = 0
	rep stosb		; clear

	; loop through all points of the cube
points: mov ax,cx		; \ ax = cx / 40;
	xor dx,dx		; | dx = cx % 40;
	mov bx,40		; |
	div bx			; /
	push dx 		; push firstt coordinate
	xor dx,dx		; \ dx = ax % 40;
	div bx			; / ax = ax / 40;
	push ax 		; push second coordinate
	push dx 		; push third coordinate

	mov bx,sp		; address stack with bx
	fild word [bx+4]	; \ load coordinates of current point
	fild word [bx+2]	; |
	fild word [bx]		; /

	call turn		; :D
	call turn		; :D

	fistp word [bx] 	; \ di = ( y + 100 ) * 320;
	add word [bx],100	; |
	imul di,[bx],320	; /
	fistp word [bx] 	; \ di += x;
	add di,[bx]		; /
	add di,160+zbuf+16	; centerize.
	fistp word [bx] 	; \ ax = z + 128
	mov al,128		; |
	add ax,[bx]		; /
	cmp al,[es:di]		; \ if ax is less than value in z buffer - do nothing
	jna no			; | else replace value
	stosb			; /
no:
	add sp,6		; return stack to normal state
	loop points		; while( --cx ) goto points;

	; show cube
	push es 		; preserve ex
	mov si,zbuf		; si = from
	xor di,di		; di = to
	les bx,[di]		; es ~ video memory segment
	dec cx			; cx = 0xFFFF
	rep movsb		; copy z buffer to the screen
	pop es			; recall es

	fiadd word [two]	; change angle

;        in al,0x60              ; \
;        cmp al,1                ; |
;        jne here                ; |
;        ret                     ; / Sorry, no esc & exit support.
	jmp here		; loop forever

two dw 88

	; void turn( float &x, float &y, float a ); 25b
	; st0=x, st1=y, st2, st3=a.
turn:	fld st3 		; st0=a, st1=x, st2=y, st3=z, st4=a
	fsincos 		; st0=cos(a), st1=sin(a), st2=x, st3=y, st4=z, st5=a
	fmul st0,st2		; st0=x*cos(a), st1=sin(a), st2=x, st3=y, st4=z, st5=a
	fxch st1		; st0=sin(a), st1=x*cos(a), st2=x, st3=y, st4=z, st5=a
	fmul st0,st3		; st0=y*sin(a), st1=x*cos(a), st2=x, st3=y, st4=z, st5=a
	faddp st1,st0		; st0=y*sin(a)+x*cos(a)[x'], st1=x, st2=y, st3=z, st4=a
	fld st4 		; st0=a, st1=x', st2=x, st3=y, st4=z, st5=a
	fsincos 		; st0=cos(a), st1=sin(a), st2=x', st3=x, st4=y, st5=z, st6=a
	fmulp st4,st0		; st0=sin(a), st1=x', st2=x, st3=y*cos(a), st4=z, st5=a
	fmulp st2,st0		; st0=x', st1=x*sin(a), st2=y*cos(a), st3=z, st4=a
	fxch st1		; st0=x*sin(a), st1=x', st2=y*cos(a), st3=z, st4=a
	fsubp st2,st0		; st0=x', st1=y*cos(a)-x*sin(a)[y'], st2=z, st3=a
	fxch st2		; st0=z, st1=y', st2=x', st3=a
	ret
zbuf: