;
; TV#1.
;        Written by mistake

code    SEGMENT PARA PUBLIC 'code'
	ASSUME cs:code, ds:code, es:code, ss:code
	org     100h
start: 	mov	al, 012h
	int	10h
	mov	bh, 0a0h
	mov	es, bx
@01:  	mov	di, bx
  	mov	dl, 0c0h
@02:    mov     cx, 0146h
@03:  	movsb
        loop    @03
  	in	al, 060h
  	cmp 	al, 01
  	je 	@04
  	dec 	dx
        jz      @01
        jmp     @02
@04:  	mov 	ax, 0003h
  	int	10h
  	ret
   code    ENDS
END     start
