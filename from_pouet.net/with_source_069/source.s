;
; SIG
;

code    SEGMENT PARA PUBLIC 'code'
	ASSUME cs:code, ds:code, es:code, ss:code
	org     100h
.386
start: 	mov	al, 13h
        int     10h                             
	push	0a000h
	pop	es
	mov	dl, 00040h
	mov	bp, dx
	mov	si, 06f0ch
PutPix: imul	di, bp, 320
	add	di, dx
        mov     cl, 01eh
IncPal: inc     byte ptr es:[di]
	inc	di
        loop    IncPal
        imul    ax, si, 04E6Dh
        shl     ax, 1
        adc     ax, 0061h
        shr     ax, 1
        neg     ax
        shl     ax, 1
        and     ax, 7FFEh
        shr     ax, 1
        mov     si, ax
        cmp     al, 80h
        jb      @@_1
        inc     dx
	inc	dx
@@_1: 	dec     dx                              ;decrease X
	inc     bp                              ;increase Y
        jmp     PutPix

   code    ENDS
END     start
