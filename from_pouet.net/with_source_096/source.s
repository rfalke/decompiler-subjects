; 64b Intro #2 by Adok/Hugi, 2006

; Assumptions at start:
; AH = 0
; SI = 0

; Currently 64 bytes and blue again

code segment
assume cs:code,ds:code
org 100h

beginning:

; switch to mode 13h
	mov al,13h
	int 10h

; load es
	push 0a000h
	pop es

; init
	xor di,di
	push di
	inc si

; set pointer to beginning of palette
mainloop_init:
	mov dx,3c8h
	mov ax,bx
	out dx,al
	inc dx

nextline_loop:
	inc bx

; set up palette
nextline:
	xor ax,ax
	out dx,al
	out dx,al
	mov ax,bx
	out dx,al

; draw 6 lines
	mov cx,320*6
	rep stosb

; quit if a key has been pressed - this has to be left out to match the 64b limit
;	in al,60h
;	or al,al
;	jz check
;	pop di
;	ret

; next line
check:
	cmp di,320*6*31
	jne nextline_loop
	xor di,di
	pop bx
	add bx,si
	push bx
	cmp bl,32
	je revert
	or bl,bl
	jne mainloop_init
revert:
	neg si
	jmp mainloop_init

code ends
end beginning
