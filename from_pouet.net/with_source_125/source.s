;  ___
; (___) woest 2002 64 byte surprise code compo
; |   | avoozl^ecfh + warp^bliss. 
; |   |
; |___|ivhkdwgrdh.exe
;
		
; hmm. public domain dan maar. (--warp te lui om COPYING op te zoeken).
	
; aargh. emacs asm mode sucks for intel syntax x86 asm.
; so, here's some kludges:
; (progn (defun wrp-asm-comment () "ugh." (interactive) (progn (beginning-of-line) (insert-char 59 1) (beginning-of-line 2)))  (global-set-key (kbd "<f7>") 'wrp-asm-comment)  (defun wrp-asm-uncomment () "ugh." (interactive) (progn (beginning-of-line) (delete-char 1) (beginning-of-line 2))) (global-set-key (kbd "<f8>") 'wrp-asm-uncomment))

; ps. visit #demoscene on openprojects irc.

org 0x100
	nop
	cli
	push word 0xb800
	pop es

;	mov dx, 0x3d4
;	mov al, 0x18
;	out dx,al
	
;	inc dx
;	out dx,al

;	ret
	
mainloop

	
	mov dx,0x3da
	in al,dx
	push ax
;	bswap eax		
	mov dx,0x3c8
	mov al,0
	out dx,al
	inc dx
	pop ax
;	bswap eax
	
	test al, 0x8
	jz skip
;	cmovnz bx,dx		; per scherm
	mov bx,dx
;
;	mov dl, [di]
;	xchg ax,cx
	stosb
;	xchg ax,cx
;	mov [ds:di], cl
;	inc di
	inc di
	and di,0x1fff
;	or dl, 0x31
;	inc si
;	int 0x21
	
skip	
	
	test al, 0x1
	cmovnz cx,dx		; per scanline
;	jz skip2
;	mov cx,dx
;skip2
	add cl,5
	
	shl al, 2
	out dx,al
	
;	rol al,2
	mov al,cl
	out dx,al
	
	inc bx
	mov ax,bx
	shr ax,6
	out dx,al

	push dx
	mov dx, 0x60
	in al,dx
	pop dx

;	cmp al,1
	dec ax
	jne mainloop

	int 0x18
;	jmp mainloop

	




