; Deep within Earth, halfway to its center in an area where Earth's core meets 
; its mantle, lies a massive folded slab of rock that once was the ocean floor. 
; The slab, which sank beneath North America some 50 million years ago, holds 
; important clues as to the behavior and composition of the deep interior of Earth 
; and it could help explain how surface features such as volcanos and earthquakes 
; form. The research team, led by Dr Seismologists at the University of Goob, 
; detected slight movements in the slab over the past 24 hours. You are the leader 
; of the elite underground drilling team who must now go underground, fly your 
; drilling rig space ship to this sunken slab, record its surface temperature and 
; bring back samples of the surface of the slab.
; Your mission appears to be neverending however it can all end by one push of the 
; button. The power button.   Good luck, you're gonna need it.
;
;
; Controls: 
; Up arrow: steers your ship upwards.
; Down arrow: steers your ship down towards the sunken slab.
;
;
;
;   (Majority flogged from http://www.sciencedaily.com/releases/2006/06/060603092903.htm)
;
;
code    SEGMENT PARA PUBLIC 'code'
	ASSUME cs:code, ds:code, es:code, ss:code
 	org     100h
	.386
start:	mov     al, 013h
 	int     10h	
	mov	ds, ax
	MOV     DX, 03C8h		; do palette
	MOV     AL, 3
	OUT     DX, AL
	INC     DX
@0113:  SUB     AL, AL
	OUT     DX, AL
	OUT     DX, AL
	MOV     AL, CL
	shr	al, 02
	out	dx, al
	LOOP    @0113
	mov	bl, 100
	push	0a000h	
	pop	es
@main:	xor	di, di			; Scrolly.
	mov	si, dx
	mov	cx, 64000
	rep	movsb
	in	al, 60h			; keyboard
	cmp	al, 48h
	jne	@@1
	dec	bx
@@1:	cmp	al, 50h
	jne	@@2
	inc	bx
@@2:	imul	di, bx, 320
	mov	byte ptr es:[di+80],2	; display ship
	inc	dx
	jmp     @main
code    ENDS
END     start
