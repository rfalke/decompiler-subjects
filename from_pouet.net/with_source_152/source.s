; 14:39 23.05.2006
; Gingerbread Man, by lord Kelvin
; A little trick, to create your own gingerbread man:
; in MS Excel on a new sheet set cell A1 to -0.1, cell B1 to 0, cell A2 to 1-B1+ABS(A1) and cell B2 to A1.
; Now drag selection of A2 and B2 down to make 2 columns over 20000 rows high.
; Select this two columns and create a diagram, with only dots, not lines. Soon you'll see a pretty G/B Man.

; X = [bp-4] T = [bp-8] Y = [bp-C] buf = [bp-0x12]

	org 0x100	     ; It's a com file

	les bp,[bx]	     ; Make es = 0xA000 (approximately)
	enter 0xE,0	     ; Create 14 bytes of space for variables
	mov al,0x13	     ; \ Mode 320 x 200 x 256
	int 0x10	     ; /
	mov dword [bp-0x4],\ ; \ X = -0.1
	    0xBDCCCCCD	     ; /
			     ;
	mov dx,0x3C9	     ; \ Create palette.
	mov cx,768	     ; | for ( int i = 0 ; i < 256 * 3 ; i ++ )
pal:	mov [bp-0xE],cx      ; |  outp ( 0x3C9, byte ( sqr ( sin ( i * 21167. ) ) * 63. ) );
	fild word [bp-0xE]   ; |
	fmul dword [mlt]     ; |
	fsin		     ; |
	fmul st0,st0	     ; |
	fimul word [amp]     ; |
	fistp word [bp-0xE]  ; |
	mov ax,[bp-0xE]      ; |
	out dx,al	     ; |
	loop pal	     ; /

here:	fld dword [bp-0x4]   ; \ X = T
	fstp dword [bp-0x8]  ; /
	fld dword [n15]      ; st0 = 15.
	fsub dword [bp-0xC]  ; st0 = 15. - Y
	fld dword [bp-0x4]   ; st0 = X, st1 = 15. - Y
	fabs		     ; st0 = |X|, st1 = 15. - Y
	faddp st1,st	     ; st0 = 15. - Y + |X|
	fist word [bp-0xE]   ; \ di = short ( X )
	mov di,[bp-0xE]      ; /
	fstp dword [bp-0x4]  ; X = 15-Y+|X|
	fld dword [bp-0x8]   ; \ Y = T
	fist word [bp-0xE]   ; | \ ax = short ( Y )
	mov ax,[bp-0xE]      ; | /
	fstp dword [bp-0xC]  ; /
	add ax,60	     ; Y + 60
	imul ax,ax,320	     ; ( Y + 60 ) * 320
	add di,ax	     ; ( Y + 60 ) * 320 + X
	add di,130	     ; ( Y + 60 ) * 320 + X + 130
	inc byte [es:di]     ; putpixel ( X , Y , getpixel ( X , Y ) + 1 );
	in al,0x60	     ; \ While not Esc, draw...
	cmp al,1	     ; |
	jne here	     ; /
	leave		     ; \ Die.
	ret		     ; /

mlt dd 21167.0		     ; Constants.
amp dw 63		     ;
n15 dd 15.0		     ;