*** WritePixelArray8 test ***

	opt	c+,d+

	include	system.gs
*	incdir	dh2:include/
	include	dos/dos.i
	include	dos/dos_lib.i
	include	exec/exec_lib.i
	include	intuition/intuition.i
	include	intuition/intuition_lib.i
	include	graphics/graphics_lib.i

;-------------------------------------------------------

	section	test,code
	
start:	move.l	sp,oldstack

	bsr	gfxopen
	bsr	intuiopen

	sub.l	a0,a0
	lea	screentaglist(pc),a1
	CALLINT OpenScreenTagList
	move.l	d0,screen
	tst.l	d0
	beq	error

	move.l	#640,d0
	move.l	#1,d1
	move.l	#8,d2
	move.l	#BMF_INTERLEAVED|BMF_DISPLAYABLE,d3
	sub.l	a0,a0
	CALLGRAF AllocBitMap
	move.l	d0,bmap
	tst.l	d0
	beq.s	error

	lea	tmprp,a1
	CALLGRAF InitRastPort
	lea	tmprp,a1
	move.l	bmap(pc),rp_BitMap(a1)

	clr.w	cnt
loop:	bsr	line
	bsr	WPA8
	addq.w	#1,cnt
	cmp.w	#10,cnt
	blt.s	loop

error:	move.l	screen(pc),a0
	move.l	a0,d0
	beq.s	.nocl
	CALLINT	CloseScreen
.nocl:
	move.l	bmap(pc),a0
	move.l	a0,d0
	beq.s	.nof
	CALLGRAF FreeBitMap
.nof:
	move.l	oldstack(pc),sp
	moveq	#0,d0
	rts

;------------------------------------------

gfxopen:
	lea	gfxname(pc),a1
	moveq	#0,d0
	CALLEXEC OpenLibrary
	move.l	d0,_GfxBase
	tst.l	d0
	beq	error
	rts

intuiopen:
	lea	intuiname(pc),a1
	moveq	#39,d0
	CALLEXEC OpenLibrary
	move.l	d0,_IntuitionBase
	tst.l	d0
	beq	error
	rts
	
	dc.b	'$VER: TestWPA8 1.0 (23.8.95) by Pawel Hernik',0

intuiname:	INTNAME
gfxname:	GRAFNAME

	even
_IntuitionBase	dc.l	0
_GfxBase	dc.l	0
oldstack:	dc.l	0
screen:		dc.l	0
cnt:		dc.w	0
bmap:		dc.l	0
tmprp:		dcb.b	rp_SIZEOF*2

screentaglist:
	dc.l	SA_Width,640, SA_Height,480, SA_Depth,8
	dc.l	SA_DisplayID,$8004
	dc.l	SA_Colors32,cols
	dc.l	SA_Quiet,-1
	dc.l	SA_Overscan,0
	dc.l	SA_Interleaved,-1
	dc.l	TAG_END

cols:	dc.w	11,0
	dc.l	$00000000,$00000000,$00000000
	dc.l	$ff000000,$ff000000,$ff000000
	dc.l	$00000000,$ff000000,$ff000000
	dc.l	$ff000000,$ff000000,$00000000
	dc.l	$00000000,$ff000000,$00000000
	dc.l	$ff000000,$00000000,$ff000000
	dc.l	$ff000000,$00000000,$00000000
	dc.l	$00000000,$33000000,$ff000000
	dc.l	$ff000000,$7f000000,$00000000
	dc.l	$ff000000,$ff000000,$00000000
	dc.l	$ff000000,$00000000,$7f000000
	dc.l	0

;------------------------------------------

line:	lea	chunky,a0
	move.w	cnt(pc),d0
	addq.w	#1,d0
	move.w	d0,d1
	lsl.w	#5,d0
	add.w	d0,a0
	move.w	#480-1,d2
.loop:	move.b	d1,(a0)
	add.w	#640,a0
	dbra	d2,.loop
	rts
	
;--------------------------------------

WPA8:	move.l	screen(pc),a6
	lea	sc_RastPort(a6),a0
	lea	tmprp(pc),a1
	lea	chunky,a2
	moveq	#0,d0
	moveq	#0,d1
	move.w	#639,d2
	move.w	#479,d3
	CALLGRAF WritePixelArray8
	rts

;---------------------------------------------------------

	section	chunky,bss
chunky:	ds.l	640*480/4
