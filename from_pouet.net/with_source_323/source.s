;^^^^^^^^^^^^^^^^^^^^^^\ /^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\ /^^^^^^^^^^^^^^^^^^\
;                       V ___ |\   _  /-\ _  _ |  |  _   V       Coded        |
; compile with tasm /m5 )  |  | | ( ) |   | /  |\/| / \  (      in 2000       |
;    link with tlink /t (  |  |/  }-{ |   |{   |  | | |  )   by DailyHacking  |
;                       )  I  I \ I I \-/ I \_ I  I \-/  (    2:5000/256.31   |
;______________________/^\______________________________/^\__________________/
;                                                                            \
; + two minutes of good MIDI music                                            |
; + nice effect (spiral shade blobs + smart palette rotation + laced text)    |
; + cool synchronization                                                      |
; + video and sound fadeout on exit via ESC                                   |
; + 512 bytes                                                                 |
; + 99% correct MIDI _initialization_ and operating                           |
;                                                                             |
; - stupid label names in source code (I try! to change the style after BP70) |
; - Requires fast cpu, sound and video (optimized in size, not in speed)      |
; - Instrument Ins1=96 is not nice on all sound cards (try changing to 1)     |
; - Haltdowns on some machines (the reason is out to midi port with no midi)  |
; - uses 64K of memory at 8000h:0000h                                         |
; - non-full midi init (no Fx sequences) (I'm so sorry, "It's my size!")      |
;                                                                             |
;                             (C) 2000 DailyHacking                           |
;____________________________________________________________________________/


Ins1    equ     96		; main instrument
;Ins1	equ	2
Ins2	equ	24h		; drum
Ins3	equ	26h		; snare
Base	equ	44		; base midi note
;Base	equ	32
oxor1	equ	(offset @@XOR1)+1-(80h+offset palro)	; music direction code
onot	equ	(offset Notes)-(offset WrByte)		; notes
onov	equ	(offset NOTOV)-1-(80h+offset palro)	; flashing code
onyx	equ	(80h+offset palro)-(offset WrByte)	; palette rotation code
ofix	equ	(offset @@FIX)-(offset WrByte)		; midi init->write
onyxn	equ	-80h					; palette rotation fix
ostu    equ     (offset stup)+1-(80h+offset palro)	; volume code
omtk	equ	(offset @@MTK)-(80h+offset palro)	; disable flash code
opri	equ	(offset PRIO)+1-(80h+offset palro)	; disable bolbs code


.model	tiny
.code
org	100h
.startup
.486
	dw	0e3dbh		; finit
	pop	ax		; one-byte way to get zero
        lea     di,Enddd
        mov     cx,3d00h
	mov	sp,cx
        rep     stosb		; clear memory
        popa			; clear registers
	lea	bp,WrByte	; midi out proc
	pusha
	fldpi
	fidiv	word ptr [bp-14]	; fld 2*PI / (divide value)
	fld	dword ptr [bp-18]	; fld <rotation speed>
	fldpi
	fadd	st,st			; fld 2*PI
	fldz				; fld 0
	mov	al,0ffh			;\
	call	bp			; \
	mov	al,3fh			;  | 
	call	bp			;   \ midi initialization 
	mov	byte ptr [bp+ofix],4Ah	;   /
	mov	al,0ffh			;  |
	call	bp			; /
	call	init			;/
	mov	al,13h
	int	10h			; set mode 320x200x8
	xchg	ah,al
        mov     bl,0FFh
        mov     cl,(offset WrByte)-(offset Msg)
	mov	dx,0604h
	sub	bp,cx
	int	10h		; output text with standard 8x8 font

	mov	cx,0A000h
	push	cx
	mov	ds,cx
	mov	ch,80h			; use double buffer at 8000h:0
	mov	es,cx
	push	cx
@@Q1:	lodsb				; make text interlaced
	stosb
	stosb
	loop	@@Q1
	pop	ds
	pop	es

MAINLOOP:
	popa
	pusha
	mov	dx,3DAh
MAINL2:	in	al,dx
	and	al,8	; wait for VBlank start
	jz	MAINL2	; (a bit dirty because should wait for VBlank end first)
	xchg	ax,bx
	mov	dl,0C8h
	out	dx,al	; reset palette counter
	inc	dx
	dec	cx
PALINI:	add	al,80h
	adc	al,0

palro:  nop			; update palette (NOPs are for rotation)
	shr	al,1		
        out     dx,al
	out	dx,al
	adc	al,al
        out	dx,al

	xchg	ax,cx
	out	dx,al
	out	dx,al
	xchg	ax,cx
	out	dx,al
	cmp	al,40h
	jnz	PALINI
FLOOP:	mov	al,[di]		; fade out
	sub	al,2
	jnc	NOTOV
	and	al,1
@@MTK:	jnz	NOTOV
        or      al,0		; flash
NOTOV:	mov	[di],al
	stosb
	loop	FLOOP
@@A3:	fadd	st,st(2)	; if (>2*PI) then -=2*PI
	fprem
	fld	st
	fsincos			; calculate sine and cosine
	fild	word ptr [bp+onot+10h]
	fmul	st,st(6)
	fsin
	fmul	st(2),st
	fmulp	st(1),st
	fld1
	fadd	st(2),st
	faddp	st(1),st
	fxch	st(1)
	fimul	word ptr [bp-22]
	frndint
	fild	word ptr [bp-20]
	fmulp	st(2),st
	fimul	word ptr [bp-24]
	faddp	st(1),st
	fistp	dword ptr [bp-6]

	mov	di,[bp-6]
	inc	di
PRIO:	mov	ax,0FEFEh		; blobs color
	mov	cx,09001h		; blobs corners mask
	and	ch,ah
@@A1:	add	di,3C0h
	or	[di],ch		; draw dots
	or	[di+1],ax
	or	[di+2],ch
	dec	cl
	jns	@@A1
@@A2:	sub	di,[bp-24]
	or	[di],ax
	or	[di+2],ax
	inc	cl
	jle	@@A2
	dec	dh
	jns	@@A3

	mov	di,onyx
        mov     ax,[bp+onot+10h]	; synchro count register
	mov	dx,3
	cmp	ah,20
	jc	@@MP1
	mov	ah,8			; overflow control
	xor	byte ptr [bp+di+oxor1],dl	; change music direction
@@MP1:  push	ax
	inc	ax
	mov     [bp+onot+10h],ax	; increment count register
        in      al,60h
        and     ax,7Eh
	jnz	NOMA				; check ESC key
	mov	byte ptr [bp+di+omtk],0EBh	; disable flashing
        dec     byte ptr [bp+di+ostu]		; volume fadeout
	mov	word ptr [bp+di+opri],ax	; disable dots
NOMA:   pop     ax
        jns     NOMAIN
	xchg	ax,dx				; set text mode
	int	10h
	popa
INIT:   mov     al,0C1h				; set midi instrument
	mov	cl,Ins1
@@I1:   call    bp
	xchg	ax,cx
        call    bp
	xchg	ax,cx
	inc	ax
	cmp	al,0C5h
	jc	@@I1
        ret
NOMAIN: mov     si,ax		
        shr     si,2		; divide by 4
        and     ah,dl		
	mov     cx,si
        test    al,15
        jnz     @@MPF		; music delay control
	shl	al,2		; here starts music decoder
	shr	ax,6		; (too lazy to comment it)
	xchg	si,ax
	and	al,1Ch
	sub	ax,1Ch
	jz	@@MPN
	add	al,0ch
	jz	@@MPN
@@NSKN:	push	si
@@XOR1:	js	@@MP3-1
	dec	si
	xor	si,dx
@@MP3:  mov     al,[bp+si+onot]
	pop	si
@@MPN:	and	si,dx
stup:   mov     bh,70h	; note volume (it's really a push speed, but...)
	mov	ah,ch	; number of octaves to push
	call	PushNew ; release last note and push new
@@SKN:	test	cl,1
	jnz	@@MPF
	mov	ax,Ins3	; here starts rythm generator
	test	cl,8
	jnz	@@MP5
	xor	al,Ins3 xor Ins2
@@MP5:	dec	ch
	js	@@MPF
	xor	byte ptr [bp+di+onov],0deh ; enable flashing
	test	cl,6
	jnz	@@MPF
	cmp	cx,3Fh
	ja	@@ROK
	and	bh,cl
	add	bh,bh
@@ROK:	or	bh,1fh
	mov	si,8		; drum channel-1
	call	PushNew		; drum it!
	mov	al,[bp+di+onyxn]	; palette rotation
        xchg    al,[bp+di+onyxn+3]
        xchg    al,[bp+di+onyxn+7]
	mov	[bp+di+onyxn],al

@@MPF:  jmp     MAINLOOP		; start new main loop iteration

PushNew:			; this proc releases old note and pushes new
	push	ax		; BH - release/press speed
	mov	bl,80h		; AH - number of following octaves to push too
	inc	si		; AL - note number
	add	bx,si		; SI - note channel-1
	add	si,si
	xchg	ax,[bp+si+onot+14h]
	call	PushNote
	add	bl,10h
	pop	ax
PushNote:
	or	al,al
	jz	@@R
	dec	ah
@@P1:	xchg	ax,bx
        call    bp
	xchg	ax,bx
        call    bp
	xchg	al,bh
        call    bp
	xchg	al,bh
	add	ax,0FF0Ch
	jg	@@P1
@@R:	ret


	dw	320
	dw	95
	dw	156
	dd	03f8785cch
	dw	128
Msg	db	'DAILYHACKING'

WrByte	proc	near		; write byte to midi device
	push	ax
	cbw
@@W0:   mov     dx,331h
	in      al,dx
	add	al,al
	jnc	@@WIN
	jns	@@WOUT
	jmp	@@W2
@@WIN:	jmp	$+2
	dec	dx
	in	al,dx
@@W2:	dec	ah
	jnz	@@W0
@@WOUT:	pop	ax
@@FIX:	nop		; here will be dec_dx (for initialization by out_331)
	out	dx,al
	ret
WrByte	endp
	
Notes	db	Base+2,Base+5,Base+9, Base+12 ; Encoded music (main notes)
	db	Base+4,Base+7,Base+11,Base+14
	db	Base+4,Base+9,Base+12,Base+16
	db	Base+4,Base+7,Base+11,Base+14
Enddd   label   byte				; preloaded memory ends here
        end                                     ; any source has an end, anyway
;==============================================================================

