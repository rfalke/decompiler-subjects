
;; "interferencing"
;; 512 byte intro by skurk/depth
;; released 30.05.2011

	auto ?[end-start]\

SCREENWIDTH=432
SCREENHEIGHT=400
SCREENBYTES=[SCREENWIDTH/8]
LOGOADJUST=[SCREENBYTES*[[SCREENHEIGHT-106]/2]]+[[SCREENBYTES-6]/2]-2

	section code,code_c

start:	move.l $4.w,a6
	move.w #[SCREENBYTES*SCREENHEIGHT]*2,d0
	move.l d0,d3
	move.l #$10002,d1
	jsr -198(a6)		; allocmem
	bne.b cont
	rts			; if allocmem fails we end here

	; This is a half sine wave that is being mirrored
	; later.  It will overwrite the logo and some of the code
	; (that has already been executed)

sinus:	DC.B	$00,$00,$00,$00,$01,$01,$02,$02,$03,$03,$04,$05,$06,$07,$08,$09
	DC.B	$0A,$0B,$0C,$0E,$0F,$10,$12,$13,$14,$16,$17,$19,$1B,$1C,$1E,$1F
	DC.B	$21,$22,$24,$25,$27,$29,$2A,$2C,$2D,$2E,$30,$31,$32,$34,$35,$36
	DC.B	$37,$38,$39,$3A,$3B,$3C,$3D,$3D,$3E,$3E,$3F,$3F,$40,$40,$40,$40

	; 32x5 logo

logo:	dc.b %11110000,%11110111,%11011111,%10110011
	dc.b %11011001,%10000110,%01100110,%00110011
	dc.b %11001101,%11100111,%11000110,%00111111
	dc.b %11001101,%10000110,%00000110,%00110011
	dc.b %11111000,%11110110,%00000110,%00110011

	; constants throughout the code:
	; a4=copperlist
	; a5=$dff006
	; d7=alloc'd bitplane pointer

cont:	lea $dff006,a5
	move.w #$4000,$9a-6(a5)		; stop multitasking
	move.l d0,d7
	move.l d0,a1			; a1=bitplane (used in bset later)

	; set first plane

	lea copper(pc),a4
	add.l #[SCREENBYTES*32]+4,d0
	move.w d0,6(a4)
	swap d0
	move.w d0,2(a4)

	; render circles

	move.w #SCREENHEIGHT-1,d4
.yloop:	move.w #SCREENWIDTH-1,d5
.xloop:	move.w d4,d0
	sub.w #SCREENHEIGHT+32,d0	;y adjust
	mulu d4,d0
	move.w d5,d1
	sub.w #SCREENWIDTH+16,d1	;x adjust
	mulu d5,d1
	add.w d1,d0
	and.w #2048,d0
	beq.b .skip
	move.w d5,d0
	lsr.w #3,d0
	move.w d5,d2
	neg.b d2
	subq.b #1,d2
	bset d2,(a1,d0.w)
.skip:	dbf d5,.xloop
	adda.l #SCREENBYTES,a1
	dbf d4,.yloop

	; set third bitplane with logo

	move.l d7,d2
	add.l #SCREENBYTES*SCREENHEIGHT,d2
	move.l d2,a1
	move.w d2,22(a4)
	swap d2
	move.w d2,18(a4)
	lea logo(pc),a0
	move.l a0,a2

	; copy logo to blank bitmap

	moveq #5-1,d6
.copy:	move.l (a0),LOGOADJUST(a1)
	move.l (a0)+,LOGOADJUST+SCREENBYTES(a1)
	adda.l #SCREENBYTES*2,a1
	dbf d6,.copy
	move.l a4,$80-6(a5)

	; mirror sinus curve

	move.l a2,a1
	moveq #64-1,d1
.csin:	move.b -(a2),(a1)+
	dbf d1,.csin

	; from now on, d6 is sinptr1, d5 is sinptr2

	moveq #32,d5		; "cosinus"

	; main loop

wait:	cmpi.b #$e0,$6-6(a5)
	bne.b wait
.w:	cmpi.b #$f0,$6-6(a5)
	bne.b .w

	; move horizontally

	addq.b #1,d6
	and.w #$7f,d6
	lea sinus(pc),a0
	moveq #0,d0
	move.b (a0,d6.w),d0
	move.b d0,d1
	lsr.w #3,d0
	neg.b d1
	subq.b #1,d1
	lsl.b #4,d1
	move.b d1,27(a4)	; $0102 in copperlist

	; move vertically

	moveq #0,d1
	addq.b #1,d5
	and.w #$7f,d5
	move.b (a0,d5.w),d1
	mulu #SCREENBYTES,d1
	add.l d1,d0		; add to calc'd xpos
	add.l d7,d0		; add bitplane ptr
	addq.l #2,d0		; adjust (i *hate* this one)
	move.w d0,14(a4)	; and set bitplane 2
	swap d0
	move.w d0,10(a4)

	; we could save another 30 bytes by skipping the
	; mouse+exit and just 'bra.b loop' instead

	btst #6,$bfe001
	bne.b wait
	move.w #$c000,$9a-6(a5)
	move.l d3,d0		; size
	move.l d7,a1		; ptr
	jsr -210(a6)		; freemem
	move.l 156(a6),a1
	move.l 38(a1),$80-6(a5)
	moveq #0,d0		; super clean exit
	rts

COLOR1=$625
COLOR2=$313
TEXT1=$e9d
TEXT2=$fff

copper:	dc.w $e0,0,$e2,0
	dc.w $e4,0,$e6,0
	dc.w $e8,0,$ea,0
	dc.w $102,0
	dc.w $8e,$1871,$90,$38d1
	dc.w $92,$28,$94,$d8,$1fc,0
	dc.w $108,8,$10a,8
	dc.w $96,$20,$180,COLOR1,$182,COLOR2
	dc.w $184,COLOR2,$186,COLOR1
	dc.w $188,TEXT2,$18c,TEXT1
	dc.w $100,$3200
	dc.w $ffff,$fffe

end:

