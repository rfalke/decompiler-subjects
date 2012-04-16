
Slength	equ	3000

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
        push    0a000h              
        pop     es
			
@main: imul    si, 3
        add     si, cx
inc	ax
	cmp	si, -16384
	jg	@next1
	inc	bp
	inc	bx
        jmp     @calc
@next1: and     si, si 
	jg	@next2
	inc	cx			;add some amount for Mr RND().
	inc	bp
        jmp     @next4          
@next2:	cmp	si, 16384
	jg	@next3
	dec	bp
	inc	bx
        jmp     @calc
@next3:	dec	bp
@next4:	dec	bx
@calc:  imul     di, bx,320
        add     di, bp
 	stosb				;plot the pixel.
        stosb
	mov	al, 4
	stosb
	stosb
	stosb
        mov     al,0
        stosb
	stosb
	stosb	
	jmp	@main

code    ENDS
END     start
