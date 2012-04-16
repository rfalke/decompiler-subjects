
; 
; Watch with some proper red/blue 3D glasses.
;


code    SEGMENT PARA PUBLIC 'code'
	ASSUME cs:code, ds:code, es:code, ss:code
 	org     100h
	.386
start:
	mov     al, 013h                
 	int     10h	
 	push	0a000h
	pop	es
@main:  imul    ax, 03	
	cmp     ax, -10923
	jl      @calc
        mov     cl, 160
        add     bp, cx
     	cmp     ax, 10923
 	jg      @next
 	inc     ax	
        add     bp, cx                  ;add 320 to  X.
 	jmp     @calc
@next:  add     bx, 200                 ;add 200 to  Y.
@calc: 	shr     bp, 1			;original formula: 		;       S := ((S + X[R]) DIV 2);
 	shr     bx, 1	             	;original formula:		;       T := ((T + Y[R]) DIV 2);
	imul	di, bx, 320
        mov     byte ptr es:[di+bp], 9
        mov     byte ptr es:[di+bp-4], 4
        push    ax                      
 	in      al, 060h
	dec	ax
 	pop     ax
 	jne     @main
@quit:	mov    al, 03
 	int    10h
 	retn
code    ENDS
END     start
