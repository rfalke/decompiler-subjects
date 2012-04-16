;
; TV2
;


code    SEGMENT PARA PUBLIC 'code'
	ASSUME cs:code, ds:code, es:code, ss:code
 	org     100h
	.386
start:	mov     al, 013h                
	int     10h			
        push    0a000h              
        pop     es
@main:  lea	eax, [eax + eax * 2]	
	add	ax, cx
	cmp	ax, -16384
	jg	@next1
	inc	bp
	inc	bx
	jmp	@calc
@next1:	cmp	ax, 0
	jg	@next2
	inc	cx
	inc	bp
	jmp	@next4		
@next2:	cmp	ax, 16384
	jg	@next3
	dec	bp
	inc	bx
	jmp	@calc
@next3:	dec	bp
@next4:	dec	bx
@calc:	inc	ax
        imul    di, bx,320
        add     di, bp
 	stosb	
	stosb
	jmp	@main
code    ENDS
END     start
