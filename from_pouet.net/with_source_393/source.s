******************************************
*COPPERCREW AND THE BAND COOPERATIONINTRO*
*(c) 	ALL CODING BY MEGATRON		 *
*					 *
*   WRITE IN YOUR SCROLLTEXT		 *
* scroll has 6speeds			 *
* to use it :				 *
* "Greetings :",2,"ACKERLIGHT",4,"ACS"	 *
* and so on 				 *
*					 *
*INSTRUCTIONS:				 *
*ASSEMBLE SOURCE			 *
*LOAD "lo3" to "logoplane" using ri      *
*LOAD "kl"  to "fontplane" using ri      *
*LOAD "ripped" to "muzakdata"  "  "      *
*LOAD ripped songs instruments to 	 *
*  snd1-snd8				 *
*at last type wo to save the intro then  *
*you can start it from cli		 *
*USE HQC-PACKER TO PACK IT BECAUSE THIS  *
*INTRO ONLY RUNS ON AMIGAS WITH 512K	 *
* OK THATS ALL 	BYE MEGATRON		 *
******************************************

mt_speed=$1f4

>extern "lo3",logoplane,-1
>extern "kl",fontplane,-1
>extern "hymn to yezz",mt_sampleinfo,-1

jmp $50000
org $50000
load $50000

strt:
jmp start

mt_init:
move.l		#s1,mt_sample1
move.l		#s2,mt_sample2
move.l		#s3,mt_sample3
move.l		#s4,mt_sample4
move.l		#s5,mt_sample5
move.l		#s6,mt_sample6
move.l		#s7,mt_sample7
move.l		#s8,mt_sample8
move.l		#s9,mt_sample9
move.l		#sa,mt_sample10
move.l		#sb,mt_sample11
move.l		#sc,mt_sample12
move.l		#sd,mt_sample13
move.l		#se,mt_sample14
move.l		#sf,mt_sample15

move.l		#mt_sample1,a0
clr.l		d0
mt_clear:
move.l		(a0,d0),a1
clr.l		(a1)
addq		#4,d0
cmp.l		#$3c,d0
bne.s		mt_clear

move.w		#0,$dff0a8
move.w		#0,$dff0b8
move.w		#0,$dff0c8
move.w		#0,$dff0d8
eor.w		#$c000,mt_voice0+12
clr.l		mt_partnrplay
clr.l		mt_partnote
clr.l		mt_partpoint

move.b		mt_sampleinfo+$1d6,mt_maxpart+1
move.b		mt_sampleinfo+$1d7,mt_kn1+1
rts

mt_end:
move.w		#0,$dff0a8
move.w		#0,$dff0b8
move.w		#0,$dff0c8
move.w		#0,$dff0d8
move.w		#$f,$dff096
rts

mt_music:
addq.l		#1,mt_counter
move.l		mt_tempo,d0
cmp.l		mt_counter,d0
bne.s		mt_notsix
clr.l		mt_counter
bra.L		mt_rout2

mt_notsix:
lea		mt_aud1temp,a6
tst.b		3(a6)
beq.s		mt_arp1
move.l		#$dff0a0,a5		
bsr.s		mt_arprout

mt_arp1:
lea		mt_aud2temp,a6
tst.b		3(a6)
beq.s		mt_arp2
move.l		#$dff0b0,a5
bsr.s		mt_arprout

mt_arp2:
lea		mt_aud3temp,a6
tst.b		3(a6)
beq.s		mt_arp3
move.l		#$dff0c0,a5
bsr.s		mt_arprout

mt_arp3:
lea		mt_aud4temp,a6
tst.b		3(a6)
beq.s		mt_arp4
move.l		#$dff0d0,a5
bsr.s		mt_arprout
mt_arp4:
bra.L		mt_stop


mt_arprout:
tst.w	24(a6)
beq.s	mt_noslide

clr.w	d0
move.b	25(a6),d0
lsr.b	#4,d0
tst.b	d0
beq.s	mt_voldwn2
bsr.L	mt_pushvol1
bra.s	mt_noslide

mt_voldwn2:
clr.w	d0
move.b	25(a6),d0
bsr.L	mt_pushvol2

mt_noslide:
move.b	2(a6),d0
and.b	#$0f,d0
tst.b	d0
beq.L	mt_arpegrt
cmp.b	#3,d0
beq.L	mt_arpegrt
cmp.b	#4,d0
beq.L	mt_arpegrt
cmp.b	#5,d0
beq.L	mt_arpegrt
cmp.b	#1,d0
beq.s	mt_portup
cmp.b	#6,d0
beq.s	mt_portup
cmp.b	#7,d0
beq.s	mt_portup
cmp.b	#8,d0
beq.s	mt_portup
cmp.b	#2,d0
beq.s	mt_portdwn
cmp.b	#9,d0
beq.s	mt_portdwn
cmp.b	#10,d0
beq.s	mt_portdwn
cmp.b	#11,d0
beq.s	mt_portdwn
cmp.b	#13,d0
beq.s	mt_volup
rts

mt_portup:
clr.w	d0
move.b	3(a6),d0
sub.w	d0,22(a6)
cmp.w	#$71,22(a6)
bpl.s	mt_ok1
move.w	#$71,22(a6)
mt_ok1:
move.w	22(a6),6(a5)
rts

mt_portdwn:
clr.w	d0
move.b	3(a6),d0
add.w	d0,22(a6)
cmp.w	#$358,22(a6)
bmi.s	mt_ok2
move.w	#$358,22(a6)
mt_ok2:
move.w	22(a6),6(a5)
rts

mt_volup:
clr.w	d0
move.b	3(a6),d0
lsr.b	#4,d0
tst.b	d0
beq.s	mt_voldwn
mt_pushvol1:
add.w	d0,$12(a6)
cmp.w	#$40,$12(a6)
bmi.s	mt_ok3
move.w	#$40,$12(a6)
mt_ok3:
move.w	$12(a6),8(a5)
rts

mt_voldwn:
clr.w	d0
move.b	3(a6),d0
mt_pushvol2:
and.b	#$0f,d0
sub.w	d0,$12(a6)
bpl.s	mt_ok4
clr.w	$12(a6)
mt_ok4:
move.w	$12(a6),8(a5)
rts

mt_arpegrt:
cmp.l		#1,mt_counter
beq.s		mt_loop2
cmp.l		#2,mt_counter
beq.s		mt_loop3
cmp.l		#3,mt_counter
beq.s		mt_loop4
cmp.l		#4,mt_counter
beq.s		mt_loop2
cmp.l		#5,mt_counter
beq.s		mt_loop3
rts

mt_loop2:
clr.l		d0
move.b		3(a6),d0
lsr.b		#4,d0
bra.s		mt_cont

mt_loop3:
clr.l		d0
move.b		3(a6),d0
and.b		#$0f,d0
bra.s		mt_cont

mt_loop4:
move.w		16(a6),d2
bra.s		mt_endpart

mt_cont:
lsl.w		#1,d0
clr.l		d1
move.w		16(a6),d1
lea		mt_arpeggio,a0
mt_loop5:
move.w		(a0,d0),d2
cmp.w		(a0),d1
beq.s		mt_endpart
addq.l		#2,a0
bra.s		mt_loop5

mt_endpart:
move.w		d2,6(a5)
rts

mt_rout2:
lea		mt_sampleinfo,a0
move.l		a0,a3
add.l		#$0c,a3
move.l		a0,a2
add.l		#$1d8,a2
add.l		#$258,a0
move.l		mt_partnrplay,d0
clr.l		d1
move.b		(a2,d0),d1
mulu		#$0400,d1
add.l		mt_partnote,d1
move.l		d1,mt_partpoint
clr.w		mt_dmacon

move.l		#$dff0a0,a5
lea		mt_aud1temp,a6
bsr.L		mt_playit

move.l		#$dff0b0,a5
lea		mt_aud2temp,a6
bsr.L		mt_playit

move.l		#$dff0c0,a5
lea		mt_aud3temp,a6
bsr.L		mt_playit

move.l		#$dff0d0,a5
lea		mt_aud4temp,a6
bsr.L		mt_playit

move.l		#mt_speed,d0
mt_rls:
dbf		d0,mt_rls

move.l		#$8000,d0
add.w		mt_dmacon,d0
move.w		d0,$dff096

move.l		#mt_aud4temp,a6
cmp.w		#1,14(a6)
bne.s		mt_voice3
move.l		10(a6),$dff0d0
move.w		#1,$dff0d4
mt_voice3:
move.l		#mt_aud3temp,a6
cmp.w		#1,14(a6)
bne.s		mt_voice2
move.l		10(a6),$dff0c0
move.w		#1,$dff0c4
mt_voice2:
move.l		#mt_aud2temp,a6
cmp.w		#1,14(a6)
bne.s		mt_voice1
move.l		10(a6),$dff0b0
move.w		#1,$dff0b4
mt_voice1:
move.l		#mt_aud1temp,a6
cmp.w		#1,14(a6)
bne.s		mt_voice0
move.l		10(a6),$dff0a0
move.w		#1,$dff0a4

mt_voice0:
lea		mt_modulate,a0
move.l		mt_partnote,d0
lsl.b		#7,d0
add.l		#$10,d0
move.l		d0,mt_partnote
cmp.l		#$400,d0
bne.s		mt_stop
clr.l		mt_partnote
addq.l		#1,mt_partnrplay
clr.l		d0
move.w		mt_maxpart,d0
move.l		mt_partnrplay,d1
cmp.l		d0,d1
bne.s		mt_stop
clr.l		mt_partnrplay
mt_stop:
rts


mt_playit:
move.l		(a0,d1),(a6)
addq.l		#4,d1
clr.l		d2
move.b		2(a6),d2
and.b		#$f0,d2
lsr.b		#4,d2
tst.b		d2
beq.s		mt_nosamplechange

clr.l		d3
lea		mt_samples,a1
move.l		d2,d4
mulu		#4,d2
mulu		#$1e,d4
move.l		(a1,d2),4(a6)
move.w		(a3,d4),8(a6)
move.w		2(a3,d4),18(a6)
move.w		4(a3,d4),d3
tst.w		d3
beq.s		mt_displace
move.l		4(a6),d2
add.l		d3,d2
move.l		d2,4(a6)
move.l		d2,10(a6)
move.w		6(a3,d4),8(a6)
move.w		6(a3,d4),14(a6)
move.w		18(a6),8(a5)
bra.s		mt_nosamplechange
mt_displace:
move.l		4(a6),d2
add.l		d3,d2
move.l		d2,10(a6)
move.w		6(a3,d4),14(a6)
move.w		18(a6),8(a5)
mt_nosamplechange:
tst.w		(a6)
beq.s		mt_retrout
move.w		(a6),16(a6)
move.w		20(a6),$dff096
move.l		4(a6),(a5)
move.w		8(a6),4(a5)
move.w		(a6),6(a5)
move.w		20(a6),d0
or.w		d0,mt_dmacon

mt_retrout:
move.w	20(a6),d0
lsl.w	#4,d0
add.w	20(a6),d0
move.w	d0,$dff09e

tst.w	(a6)
beq.s	mt_nonewper
move.w	(a6),22(a6)
mt_nonewper:

move.b	2(a6),d0
and.b	#$0f,d0
cmp.b	#14,d0
beq.s	mt_zx1
cmp.b	#15,d0
bne.s	mt_noset

move.w	2(a6),d0
and.l	#$f,d0
move.l	d0,mt_tempo
rts

mt_zx1:
move.w	2(a6),24(a6)
rts
mt_noset:
tst.b	3(a6)
bne.s	mt_noclr
clr.w	24(a6)
mt_noclr:
cmp.b	#3,d0
beq.s	mt_modvol
cmp.b	#6,d0
beq.s	mt_modvol
cmp.b	#9,d0
beq.s	mt_modvol
cmp.b	#4,d0
beq.s	mt_modper
cmp.b	#7,d0
beq.s	mt_modper
cmp.b	#10,d0
beq.s	mt_modper
cmp.b	#5,d0
beq.s	mt_modvolper
cmp.b	#8,d0
beq.s	mt_modvolper
cmp.b	#11,d0
beq.s	mt_modvolper
cmp.b	#12,d0
bne.s	mt_nochnge
move.b	3(a6),8(a5)
mt_nochnge:
rts

mt_modvol:
move.w	20(a6),d0
bra.s	mt_push

mt_modper:
move.w	20(a6),d0
lsl.w	#4,d0
bra.s	mt_push

mt_modvolper:
move.w	20(a6),d0
lsl.w	#4,d0
add.w	20(a6),d0

mt_push:
add.w	#$8000,d0
move.w	d0,$dff09e
rts


mt_aud1temp:
dc.w $0000,$0000,$0000,$0000,$0000,$0000,$0000,$0000
dc.w $0000,$0000,$0001,$0000,$0000
mt_aud2temp:
dc.w $0000,$0000,$0000,$0000,$0000,$0000,$0000,$0000
dc.w $0000,$0000,$0002,$0000,$0000
mt_aud3temp:
dc.w $0000,$0000,$0000,$0000,$0000,$0000,$0000,$0000
dc.w $0000,$0000,$0004,$0000,$0000
mt_aud4temp:
dc.w $0000,$0000,$0000,$0000,$0000,$0000,$0000,$0000
dc.w $0000,$0000,$0008,$0000,$0000
mt_partnote:
dc.l 0
mt_partnrplay:
dc.l 0
mt_counter:
dc.l 0
mt_tempo:
dc.l 6
mt_partpoint:
dc.l 0
mt_samples:
dc.w $0000,$0000
mt_sample1:
dc.l 0
mt_sample2:
dc.l 0
mt_sample3:
dc.l 0
mt_sample4:
dc.l 0
mt_sample5:
dc.l 0
mt_sample6:
dc.l 0
mt_sample7:
dc.l 0
mt_sample8:
dc.l 0
mt_sample9:
dc.l 0
mt_sample10:
dc.l 0
mt_sample11:
dc.l 0
mt_sample12:
dc.l 0
mt_sample13:
dc.l 0
mt_sample14:
dc.l 0
mt_sample15:
dc.l 0
mt_maxpart:
dc.w $0000
mt_kn1:
dc.w $0000
mt_dmacon:
dc.w $0000

mt_modulate:
dc.w $0c39,$0039,$00bf,$ec01,$6630,$0839,$0007,$00bf
dc.w $e001,$6626,$2c79,$0000,$0004,$43fa,$0020,$4eae
dc.w $fe68,$2c40,$4280,$41fa,$0026,$223c,$0000,$0032
dc.w $4eae,$ffa6,$60ee,$0000,$0000,$4e75,$696e,$7475
dc.w $6974,$696f,$6e2e,$6c69,$6272,$6172,$7900,$0104
dc.w $1753,$6f75,$6e64,$5472,$6163,$6b65,$7220,$5632
dc.w $0063,$00f0,$20a9,$2054,$6865,$204a,$756e,$676c
dc.w $6520,$436f,$6d6d,$616e,$6400,$0000

mt_arpeggio:
dc.w $0358,$0328,$02fa,$02d0,$02a6,$0280,$025c
dc.w $023a,$021a,$01fc,$01e0,$01c5,$01ac,$0194,$017d
dc.w $0168,$0153,$0140,$012e,$011d,$010d,$00fe,$00f0
dc.w $00e2,$00d6,$00ca,$00be,$00b4,$00aa,$00a0,$0097
dc.w $008f,$0087,$007f,$0078,$0071,$0000,$0000,$0000

mt_sampleinfo:	
	blk.b	53520,0
s1=mt_sampleinfo+5720
s2=s1+2600
s3=s2+9900
s4=s3+2300
s5=s4+4000
s6=s5+3400
s7=s6+6500
s8=s7+9400
s9=s8+9700
sa=s9+0
sb=sa+0
sc=sb+0
sd=sc+0
se=sd+0
sf=se+0

Alloc: MACRO
        MOVE.L #?1,D0
        MOVE.L #$00010002,D1
	MOVE.L 4,A6
        JSR    -198(A6)
        MOVE.L D0,?2
       ENDM

Free:  MACRO
        MOVE.L ?1,a1
        MOVE.L #?2,d0
        MOVE.L 4,a6
        JSR    -210(a6)
       ENDM

CInsert: MACRO
	  MOVE.L ?1,d0
          LEA    ?2,a0
          MOVE.W d0,6(a0)
          SWAP   d0
          MOVE.W d0,2(a0)
         ENDM   

RestoreCopList: MACRO
                 LEA    gfxname,a1
                 CLR.W  d0
                 MOVE.L 4,a6
                 JSR    -552(a6)
                 MOVE.L d0,a0
                 MOVE.L a0,a1
                 MOVE.L 38(a0),a0
                 MOVE.L a0,$dff080
                 CLR.W  $dff088
                 MOVE.L 4,a6
                 JSR    -414(a6)
                 MOVE.W #$8020,$dff096
                ENDM

SetCopperList:  MACRO
                 MOVE.W #$83a0,$dff096
                 MOVE.L ?1,$dff080
                 CLR.W  $dff088
                ENDM
Capture:
START:
	Alloc	13264,PLANE1
	ALLOC	13264,PLANE2
	ALLOC	13264,PLANE3
	ALLOC	13264,PLANE4
	ALLOC	13264,PLANE5
	Alloc	4096,COPMEM
	ALLOC	40,LOGOMAP
	Alloc   40,fontmap
	CInsert	PLANE1,PL1LC
	CINSERT	PLANE2,PL2LC
	CINSERT	PLANE3,PL3LC
	CINSERT PLANE4,PL4LC
	CINSERT	PLANE5,PL5LC
	CInsert #spritele,spr4
	BSR	OPEN_GFX
	BSR	MAKE_DISPLAY
	BSR	INIT_LOGOMAP
	Bsr	INIT_FONTMAP
	BSR  	BLIT_STUFF
	BSR	COPY_COP
	BSR	GETCHAR
	SetCopperList COPMEM
	jsr	MT_INIT
	move.l	4.w,a6
	jsr	-132(a6)
	MOVE.W	#$4000,$DFF09A
	MOVE.L	$6C,OLDIRQ
	MOVE.L	#LEVEL3,$6C
	MOVE.W	#$C000,$DFF09A	
l:
	BTST    #6,$BFE001
	BNE	L
	jsr     MT_END
	RestoreCopList
	MOVE.W	#$4000,$DFF09A
	MOVE.L	OLDIRQ,$6C
	MOVE.W  #$C000,$DFF09A
	move.l	4.w,a6
	jsr	-138(a6)

Give_up:
	FREE	PLANE1,13264
	FREE    PLANE2,13264
	FREE	PLANE3,13264
	FREE	PLANE4,13264
	FREE	PLANE5,13264
	FREE	RASTPORT,256
	FREE	BITMAP,40
	FREE    LOGOMAP,40
	Free	Fontmap,40
	FREE	COPMEM,4096
	BSR	CLOSE_GFX
	RTS

Init_LOGOmap:
	move.l	LOGOmap,a0
	move.l	#4,d0
	move.l	#319,d1
	move.l  #102,d2
	move.l  gfxbase,a6
	jsr	-390(a6)
	lea 	LOGOplane+78,a0
	moveq   #3,d0
	move.l  LOGOmap,a1
	lea	8(a1),a1 	;a1 = a1+8
schl:	move.l  a0,(a1)+
	add.l   #4120,a0
	dbf     d0,schl	
	rts

Init_Fontmap:
	move.l	Fontmap,a0
	move.l	#4,d0
	move.l	#320,d1
	move.l  #42,d2
	move.l  gfxbase,a6
	jsr	-390(a6)
	lea 	Fontplane,a0
	moveq   #3,d0
	move.l  Fontmap,a1
	lea	8(a1),a1 	;a1 = a1+8
schl2:	move.l  a0,(a1)+
	add.l   #1680,a0
	dbf     d0,schl2	
	rts

COPY_COP:	
	LEA		COPPERLIST,a0	;Adr Copperlist in a0
	MOVE.L		COPMEM,a1	;Adr copmem in a1
C1:
	CMP.L		#$FFFFFFFE,(a0) ;copperlist schon $fffffffe?
	BEQ		COPY_COP2	;ja dann copy_cop2
	MOVE.L		(a0)+,(a1)+	;wenn nich dann copy copinst
	BRA		C1		;springe immer c1
Copy_Cop2:
	move.l		#$250ffffe,d1
	move.l		#$00000101,d4
	bsr		wo
	bsr		Vorbereit
	move.l		#$01020000,(a1)+
	move.l		#$01820fcb,(a1)+
	move.l		#$01840544,(a1)+
	move.l		#$01860765,(a1)+
	move.l		#$01880876,(a1)+
	move.l		#$018a0a87,(a1)+
	move.l		#$018c0b98,(a1)+
	move.l		#$018e0dba,(a1)+
	move.l		#$01900eba,(a1)+
	move.l		#$01920fcb,(a1)+
	move.l		#$01940544,(a1)+
	move.l		#$01960654,(a1)+
	move.l		#$01980876,(a1)+
	move.l		#$019a0a87,(a1)+
	move.l		#$019c0ca9,(a1)+
	move.l		#$019e0dba,(a1)+
	move.l		#$ffdffffe,(a1)+
	move.l		#$100ffffe,d1
 	move.l		#$00000101,d4
	bsr		wo
	move.l		#$fffffffe,(a1)+
	rts

BLIT_STUFF:
	move.l		LOGOmap,a0
	move.l		#0,d0
	move.l		#0,d1
	move.l		bitmap,a1
	move.l		#10,d2
	move.l          #50,d3
	move.l		#319,d4
	move.l		#103,d5
	move.l		#$c0,d6
	move.l		#$ff,d7
	move.l		#0,a2
	move.l		gfxbase,a6
	jsr		-30(a6)
	rts

	

OPEN_GFX:
	MOVE.L		4,A6
	LEA		GFXNAME,A1
	MOVEQ		#0,D0
	JSR		-408(A6)
	MOVE.L		D0,GFXBASE
	RTS


CLOSE_GFX:
	MOVE.L		4,A6
	MOVE.L		GFXBASE,A1
	JSR		-414(A6)
	RTS


wo:	move.l		#$1800000,d2
	move.l		#$01000000,d3
	move.l		#7,d6
ha:	move.l		d1,(a1)+
	move.l		d2,(a1)+
	add.l		d3,d1
	add.l		d4,d2
	move.l		d1,(a1)+
	move.l		d2,(a1)+
	dbf		d6,ha
	move.l		#7,d6
ha2:	move.l		d1,(a1)+
	move.l		d2,(a1)+
	add.l		d3,d1
	sub.l		d4,d2
	move.l		d1,(a1)+
	move.l		d2,(a1)+
	dbf		d6,ha2
	move.l		#$01800000,(a1)+
	rts





POSSPRITE2:	MOVE.W 		d2,d0
		ADD.W		#1,d0
		CLR.W		d3
		CLR.W		d4
		LSR.W		#1,d1
		BCC		PS22
		BSET		#0,d4
PS22:		ANDI.W		#$ff,d1
		OR.W		d1,d3
		LSL.W		#8,d2
		BCC		PS32
		BSET		#2,d4
PS32:		OR.W		d2,d3
		LSL.W		#8,d0
		BCC		PS42
		BSET		#1,d4
PS42:	 	OR.W		d0,d4
		MOVE.W		d3,(a0)
		MOVE.W		d4,2(a0)
		RTS

VBLANK:		bsr		FischletsMove
		bsr		Hauptwaschgang
		bsr		Farz
		bsr		Pfuschscroll
		BRA		BACK1

LEVEL3:
		MOVEM.L	A0-A6/D0-D7,-(SP)
		MOVE.W 	$DFF01E,D0
		BTST	#5,D0
		BNE	VBLANK
BACK1:		JSR	MT_MUSIC
		MOVEM.L	(SP)+,A0-A6/D0-D7
		dc.w	$4ef9
oldirq:		dc.l	0


Vorbereit:
	move.l		#149,d0
	move.l		#$500ffffe,d1
	move.l		#$01800000,d2
	move.l		#$01000000,d3	; Step
	move.l		a1,AnfangFuerWaschen
lala:	move.l		d1,(a1)+
	move.l		d2,(a1)+ ;AB HIER GROSSCHREIBUNG
	move.l		#$01020000,(a1)+ ; na und ?
	ADD.L		D3,D1
	dbf 		d0,lala
	move.l		#SchwabTab,SchwabPtr
	rts

Hauptwaschgang:
	lea		faab,a0
	move.l		AnfangFuerWaschen,a1
	move.l		SchwabPtr,a2
	move.w		#149,d0
HWG2:	move.w		(a0)+,6(a1)	; COLOR00 copins
	move.b		(a2)+,d1
	bpl.s		HWG2b
	lea		SchwabTab,a2
	move.b		(a2)+,d1
HWG2b:	moveq		#0,d2		; BPLCON errechnen
	move.b		d1,d2		; 000000000000!@#$ Shiftoffs
	lsl.w		#4,d2		; 00000000!@#$0000
	or.b		d1,d2		; 00000000!@#$!@#$ 2*ShiftOffs
					; fuer beide Planes

	move.w		d2,10(a1)	; BPLCON1 copins
	add.w		#12,a1
	dbf		d0,HWG2
	move.l		SchwabPtr,a2
	addq.l		#2,a2
	tst.w		(a2)
	bpl.s		HWG3
	lea		SchwabTab,a2
HWG3:	move.l		a2,SchwabPtr
	rts

Farz:
	lea		faab,a0
	move.w		#149,d5
ff1:	clr.w		(a0)+
	dbf		d5,ff1
	lea		faab,a1
	lea		MyPointerles,a2
	moveq		#8,d0			; 8 Balken
FarzII:	move.l		(a2),a0			; Adr von SinWert
	move.w		(a0)+,d1		; SinWert holen
	bpl.s		F3			; wenn Negativ
	lea		PseudoSinus,a0		; Anfang von Tabelle
	move.w		(a0)+,d1		; erster Wert holen
F3:	move.l		a0,(a2)+		; Merken des Pointers
	add.w		d1,d1			; SinWert * 2
						; wegen Pos in Faab
	lea		(a1,d1.w),a3		; Pos in Faab in a3
	bsr		MachBalk
	dbf		d0,FarzII
	rts

MachBalk:
	lea		Farbe,a0
	add.w		d0,a0
	add.w		d0,a0			; a0=Farbe+2*d0
	moveq		#9,d3			; jetzt 10 Linien
MB2:	move.w		(a0),(a3)+		; Kopieren nach faab
	add.l		#10,a0
	dbf		d3,MB2
	rts


Pfuschscroll:
	move.l	rastport,a1
	move.l	scrspeed,d0
	moveq	#0,d1
	moveq	#0,d2
	move.l	#185,d3
	move.l  #351,d4
	move.l  #205,d5
	move.l	gfxbase,a6
	jsr	-396(a6)
	move.l	fontmap,a0
	move.l	srcx,d0
	move.l	srcy,d1
	move.l	bitmap,a1
	move.l  #352,d2
	sub.l	scrspeed,d2
	move.l	#185,d3
	move.l	scrspeed,d4
	moveq   #21,d5
	move.l  #$c0,d6
	move.l  #$ff,d7
	sub.l	a2,a2
	move.l	gfxbase,a6
	jsr	-30(a6)
	move.l	count,d0
	add.l	scrspeed,d0
	move.l	srcx,d1
	add.l	scrspeed,d1
	move.l	d1,srcx
	cmp.l 	#20,d0
	blt.s	hulahup
	bsr	GetChar
	moveq	#0,d0
hulahup:move.l  d0,count
	rts
		
GetChar:
	move.l	textptr,a5
	moveq	#31,d1		; SPACE falls kein erkannter BuchStabe
	moveq	#0,d0
gc0:	move.b	(a5)+,d0
	bne.s	gc1
	lea	msg1,a5
	bra.s	gc0
gc1:	cmp.b	#32,d0		; Steuerz? Wenn,ja dann Geschw
	bge.s	gc2
	move.l	d0,scrspeed
	bra.s	gc0
gc2:	cmp.b	#58,d0		; DoppelPunkt
	bne.s	gc2a
	moveq	#26,d1
	bra.s	gcGUT
gc2a:	cmp.b	#46,d0		; Punkt
	bne.s	gc2b
	moveq	#27,d1
	bra.s	gcGUT
gc2b:	cmp.b	#42,d0		; Sternchen=TM
	bne.s	gc2c
	moveq	#28,d1
	bra.s	gcGUT
gc2c:	cmp.b	#47,d0		; Schraegschtrich
	bne.s	gc2d
	moveq	#29,d1
	bra.s	gcGUT
gc2d:	cmp.b	#33,d0		; Auschrufezeichnen
	bne.s	gc2e
	moveq	#30,d1
	bra.s	gcGUT
gc2e:	cmp.b	#65,d0		; "A"
	blt.s	gcGUT
	cmp.b	#90,d0		; "Z"
	bgt.s	gcGUT
	move.l	d0,d1
	sub.l	#65,d1
gcGUT:	move.l	d1,d2
	move.l	d1,d0		; d0 -srcx, d1 - srcy  d2- buchsta
	and.l	#15,d0		; xpos 0..15
	mulu	#20,d0		; xpos = xpos * 20 ; Buchsta-XPos
	lsr.l	#4,d1		; ypos 0..1 (ypos=d1/16)
	mulu	#21,d1		; ypos = ypos * 21 ; Buchsta-YPos
	move.l	d0,srcx
	move.l	d1,srcy
	move.l	a5,textptr
	rts


PseudoSinus:
	dc.w    0,0,0,0,0
	dc.w	1,1,3,3,6,6,10,10,14,14,19,19,25,25,32,32,39,39
        dc.w    47,47,56,56,65,65,75,75,85,85,96,96,107,107,118
	dc.w 	118,107,107,96,96,85,85,75,75,65,65,56,56,47
        dc.w    47,39,39,32,32,25,25,19,19,14,14,10,10,6,6
	dc.w    3,3,1,1,0,0,0,-1



MyPointerles:
	dc.l	PseudoSinus
	dc.l	PseudoSinus+2
	dc.l	PseudoSinus+4
	dc.l    PseudoSinus+6
	dc.l	Pseudosinus+8
        dc.l    pseudosinus+10
        dc.l    pseudosinus+12
        dc.l    pseudosinus+14
        dc.l    pseudosinus+16


Farbe:	dc.w $004,$004,$004,$004,$004
        dc.w $005,$005,$005,$005,$005
	dc.w $006,$006,$006,$006,$006
	dc.w $007,$007,$007,$007,$007
	dc.w $008,$008,$008,$008,$008
	dc.w $008,$008,$008,$008,$008
	dc.w $007,$007,$007,$007,$007
	dc.w $006,$006,$006,$006,$006
	dc.w $005,$005,$005,$005,$005
        dc.w $004,$004,$004,$004,$004

faab:	blk.w	200,0
AnfangFuerWaschen:	blk.l 1
AlterL3IRQ:		blk.l 1


Make_Display:
	Alloc  40,Bitmap
	Alloc  256,Rastport
	move.l Bitmap,a0
	moveq  #5,d0
	move.l #352,d1
	move.l #256,d2
	move.l gfxbase,a6
	jsr    -390(a6)
	move.l rastport,a1
	move.l gfxbase,a6
	jsr    -198(a6)
	move.l rastport,a0
	move.l Bitmap,4(a0)
	move.l Bitmap,a0
	move.l plane1,8(a0)
	move.l plane2,12(a0)
	move.l plane3,16(a0)
	move.l plane4,20(a0)
	move.l plane5,24(a0)
	rts


FischLetsMove:
	lea	spritele,a1
	lea	spddaten,a2
	lea	posdaten,a3
	move.w	#54,d6		; erste Zeile == erster Stern
	move.w	#42,d0		; ZWEI Sprites
FLM2:	move	(a3),d1		; x-Pos Fisch holen
	move	d6,d2		; y-Pos von d6 (^^^)
	move.l  a1,a0		; wo reinschreiben ?
	movem	d0-d2/d6,-(sp)
	bsr	PosSprite2
	movem	(sp)+,d0-d2/d6
	add	(a2),d1		; Geschw. zu d1 dazu
	cmpi.l	#470,d1		; immer schoen im Bild
	blt	FLM3
	move	#60,d1
FLM3:	move	d1,(a3)		; x-Pos retten
	addq	#5,d6		; 3 Zeilen abstand
	addq	#8,a1
	addq	#2,a2
	addq	#2,a3
	dbf	d0,FLM2
	rts

even
posdaten:	dc.w	100,200,50,150,250,300,12,24,47,39,75,111,215
		dc.w    198,162,219,239,313,231,98,109,60,82,10,310
		dc.w    143,271,183,107,319,10,20,36,37,16,20,45,110
		dc.w    90,26,16,118,281		
spddaten:	dc.w	1,2,3,4,1,2,3,4,1,2,3,4,2,3,1,4,2,3,1,4,2,1
		dc.w    3,4,2,1,2,4,1,3,1,2,3,4,3,1,2,4,3,1,2,1,4,2
		dc.w    4,2,3,1,2,4,1,3,1,2,4,3,1,2,3,4,1,2,3,4,4,3
		dc.w    2,1,3,1,4,2
spritele:
	dc.w $0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0
	dc.w $1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1
	dc.w $0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0
	dc.w $1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0
	dc.w $1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1
	dc.w $0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0
	dc.w $1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1
	dc.w $0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0
	dc.w $1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1
	dc.w $0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0
	dc.w $0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0
	dc.w $1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1
	dc.w $0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0
	dc.w $1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1
	dc.w $0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0
	dc.w $1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1
	dc.w $0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0
	dc.w $0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0
	dc.w $1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1
	dc.w $0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0
	dc.w $1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1,$0,$0,$1,$1
	
	dc.w ,0,0


msg1:	dc.b "COPPER CREW AND THE BAND PRESENTS    NEW STUFF     "
	dc.b "ALL CODING BY MEGATRON."
	dc.b " THE GREETINGS ARE COMMING UP IN A FEW "
	dc.b "OF MOMENTS .  ......    HERE THEY ARE "
	dc.b " GREETINGS TO:ACKERLIGHT,AMIGA INDUSTRIES,ALPHA FLIGHT"
	dc.b ",AMERICAN WILDCATS,ANC EUROPE,ATOM,ANIMATORS OF ECE,"
	dc.b "ANTITRAX,THE BAND,"
	dc.b "BAMIGA SECTOR ONE AND THE KENT TEAM,BFBS,BITSTOPPERS,"
	dc.b "BLACKFLASH,BROS,CBC,DEADLINE,DEF JAM,DELTA FORCE,DYN"
	dc.b "AMIC SYSTEMS AND RAGE,D.O.C,DUTCH USA TEAM,"
	dc.b "DOMINATORS,DIRAC SYSTEMS,ERRORSOFT,FAIRLIGHT,"
	dc.b "FUNX CRACK BAND,"
	dc.b "FUTURE WORLD,FREAK FACTORY,GENERATION X,GOLDEN DELTA,"
	dc.b "HOTLINE,ITALIAN BAD BOYS,JUNGLE COMMAND,GHETTO SHARK,"
	dc.b "PETER KUEHN,KNIGHT HAWKS,"
	dc.b "LEVEL FOUR,MARK II OF QUADLITE,MAGNIFICENT FORCE,"
	dc.b "MEGAFORCE,METALLWAR,MOVERS,NORTHSTAR,OOHOO TROOPS,"
	dc.b "OKS IMPORT DIVISION,PLASMA FORCE,"
	dc.b "POWERSTATION,POWER PROJECT,POWERSLAVES,PHR CREW,RDAP,"
	dc.b "SAXXONS CREW,SHARKS,SINNERS,SCIENCE,SILICON LEAGUE,"
	dc.b "STEEL PULSE "
	dc.b "SWISS COPY FORCE,THE ENFORCERS,TGM CREW,THE GOONIES,"
	dc.b "TRISTAR,TSK CREW,TNM,THE NEW ACES,THE YOUNG ONES,"
	dc.b "TERMINATOR,"
	dc.b "UNIT A,VISITORS,VISION FACTORY AND ALL OTHERS WHO"
	dc.b " KNOWS US........." 
	dc.b ".............                                          "
	dc.b 0

gfxname:	dc.b "graphics.library",0


EVEN
COPPERLIST:
PL1LC:	DC.W $00E0,$0000,$00E2,$0000
PL2LC:	DC.W $00E4,$0000,$00E6,$0000
PL3LC:	DC.W $00E8,$0000,$00EA,$0000
PL4LC:	DC.W $00EC,$0000,$00EE,$0000
PL5LC:	DC.W $00F0,$0000,$00F2,$0000
	DC.W $008E,$2c71,$0090,$2cd1,$0092,$0030
	DC.W $0094,$00D8,$0100,$5200,$0102,$0000
	DC.W $0104,$0000,$0108,$0000,$010A,$0000
	DC.W $0180,$0000,$0182,$0FFF
SPR0:	DC.W $0120,$0000,$0122,$0000
SPR1:	DC.W $0124,$0000,$0126,$0000
SPR2:	DC.W $0128,$0000,$012A,$0000
SPR3:	DC.W $012C,$0000,$012E,$0000
SPR4:	DC.W $0130,$0000,$0132,$0000
SPR5:	DC.W $0134,$0000,$0136,$0000
SPR6:	DC.W $0138,$0000,$013A,$0000
SPR7:	DC.W $013C,$0000,$013E,$0000,$01a6,$0888,$01A2,$0444
	dc.w $0180,$0000,$0182,$0108,$0184,$00f3,$0186,$01c0
	dc.w $0188,$00a0,$018a,$0090,$018c,$0070,$018e,$0060
	dc.w $0190,$0050,$0192,$022f,$0194,$045f,$0196,$067f
	dc.w $0198,$099f,$019a,$0bbf,$019c,$0ddf,$019e,$0fff
	dc.w $01A4,$0666,$01aa,$0444,$01ac,$0666,$01ae,$0888
	DC.W $FFFF,$FFFE

SchwabTab:
	dc.b 0,0,0,1,1,2,3,4,5,6,8,10,11,12,13,14,14,15,15,15
	dc.b 15,15,14,14,13,12,11,10,8,6,5,4,3,2,1,1,0,0,-1
	
	even

PLANE1:		BLK.L 1
PLANE2:		BLK.L 1
PLANE3:		BLK.L 1
PLANE4:		BLK.L 1
PLANE5:		BLK.L 1
GFXBASE:	BLK.L 1
COPMEM:		BLK.L 1
BITMAP:		BLK.L 1
LOGOPLANE:	BLK.B 16558
Fontplane:	BLK.B 8400
Fontmap:	BLK.L 1
LOGOMAP:	BLK.L 1
RASTPORT:	BLK.L 1
schwabptr:	BLK.L 1
scrspeed:	DC.l  2
srcx:		BLK.l 1,0
srcy:		BLK.l 1,0
count:		dc.l  0
textptr:	DC.L  MSG1
end: