; 64b Intro by Adok/Hugi, 2006

; Assumptions at start:
; AH = 0
; BH = 0
; CH = 0
; DL = 0 (not so important though, just concerns the speed)

; Currently at 59 bytes (after some optimizing - just for fun ;-))

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

; switch direction and loop
nextround:
	mov bl,100
	mov di,320*50+79
	mov si,160
	inc ax
	test al,1
	jz vertical_l1
	mov di,320*50+79 + 320*99
	mov si,-(160+320)

vertical_l1:
	mov cl,160
	rep stosb

; delay
	mov dh,16
delay_l1:
	loop delay_l1
	mov cx,dx
	dec dx
	jnz delay_l1

	add di,si
	dec bx
	jnz vertical_l1

; quit if a key has been pressed
	xchg ax,cx
	in al,60h
	xchg ax,cx
	jcxz nextround
	ret

code ends
end beginning
