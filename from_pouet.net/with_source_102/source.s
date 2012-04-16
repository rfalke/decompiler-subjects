;
; Pretty... crap
;

code    SEGMENT PARA PUBLIC 'code'
	ASSUME cs:code, ds:code, es:code, ss:code
	org     100h
	.386
start: 	mov     al,013h
	int     10h
	push	0a000h
	pop	es
@@_1:  	inc     bp
        inc	cx
@@_2:  	pusha
        sar     si, 006h
        imul    bx, si, 0140h
        sar     di, 006h
        mov     es:[BX + di], ch
        popa
        push	bp
        sar     bp, 02
        and     bp, 000fh
        mov     al, ds:[bp + c1]
        cbw
        add     di, ax
        mov	al, ds:[bp + c2]
        cbw
        add	si, ax
        pop	bp
        dec	dl
        jnz     @@_2
	jmp	@@_1


c1 	db 000h, 018h, 02Dh, 03Bh
c2 	db 040h, 03Bh, 02Dh, 018h, 000h

   code    ENDS
END     start
