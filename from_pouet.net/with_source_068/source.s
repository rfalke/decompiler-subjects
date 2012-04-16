;
; 'Dragon' 
;

code    SEGMENT PARA PUBLIC 'code'
	ASSUME cs:code, ds:code, es:code, ss:code
 	org     100h
	.386
start:  mov     al, 013h   
 	int     10h
	les	bx, [bx]
@main:  imul    ax, 03			
        mov     dx, bx
        add     bx, bp
        neg     dx
        add     dx, bp
        add     dx, 75
        test    ax, ax
        jg      @@_1
        add     bx, 80          		;newx:=((0.5*x)+(0.5*y)+80);
        jmp     @@_2
@@_1:   sub     bx, 80          		;newx:=((0.5*x)+(0.5*y)-80);
        add     dx, 50          		;newy:=((0.5*-x)+(0.5*y)+125);
@@_2:	add     ax, bx
	shr     bx, 1
        shr     dx, 1
        mov     bp, dx
	imul	di, dx, 320
        sub     di, 105         		;Centre it!
	mov	byte ptr es:[di+bx], 4
	mov	byte ptr es:[di+bx-4], 20
 	jmp	@main

code    ENDS
END     start



