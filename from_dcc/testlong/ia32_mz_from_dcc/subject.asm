
fn0800_0000()
	mov	dx,09D3
	mov	cs:[01F8],dx
	mov	ah,30
	int	21
	mov	bp,[0002]
	mov	bx,[002C]
	mov	ds,dx
	mov	[0092],ax
	mov	[0090],es
	mov	[008C],bx
	mov	[00AC],bp
	mov	word ptr [0096],FFFF
	call	0162
	les	di,[008A]
	mov	ax,di
	mov	bx,ax
	mov	cx,7FFF

l0800_0039:
	cmp	word ptr es:[di],3738
	jnz	0059

l0800_0040:
	mov	dx,es:[di+02]
	cmp	dl,3D
	jnz	0059

l0800_0049:
	and	dh,DF
	inc	word ptr [0096]
	cmp	dh,59
	jnz	0059

l0800_0055:
	inc	word ptr [0096]

l0800_0059:
	repne	
	scasb	

l0800_005B:
	jcxz	00BE

l0800_005D:
	inc	bx
	cmp	es:[di],al
	jnz	0039

l0800_0063:
	or	ch,80
	neg	cx
	mov	[008A],cx
	mov	cx,0001
	shl	bx,cl
	add	bx,08
	and	bx,F8
	mov	[008E],bx
	mov	dx,ds
	sub	bp,dx
	mov	di,[020C]
	cmp	di,0200
	jnc	0090

l0800_0089:
	mov	di,0200
	mov	[020C],di

l0800_0090:
	add	di,05FE
	jc	00BE

l0800_0096:
	add	di,[020A]
	jc	00BE

l0800_009C:
	mov	cl,04
	shr	di,cl
	inc	di
	cmp	bp,di
	jc	00BE

l0800_00A5:
	cmp	word ptr [020C],00
	jz	00B3

l0800_00AC:
	cmp	word ptr [020A],00
	jnz	00C1

l0800_00B3:
	mov	di,1000
	cmp	bp,di
	ja	00C1

l0800_00BA:
	mov	di,bp
	jmp	00C1

l0800_00BE:
	jmp	01E2

l0800_00C1:
	mov	bx,di
	add	bx,dx
	mov	[00A4],bx
	mov	[00A8],bx
	mov	ax,[0090]
	sub	bx,ax
	mov	es,ax
	mov	ah,4A
	push	di
	int	21
	pop	di
	shl	di,cl
	cli	
	mov	ss,dx
	mov	sp,di
	sti	
	xor	ax,ax
	mov	es,cs:[01F8]
	mov	di,05B8
	mov	cx,05FE
	sub	cx,di

l0800_00F1:
	rep	
	stosb	

l0800_00F3:
	push	cs
	call	word ptr [05AA]
	call	02B7
	call	03A2
	mov	ah,00
	int	1A
	mov	[0098],dx
	mov	[009A],cx
	call	word ptr [05AE]
	push	word ptr [0088]
	push	word ptr [0086]
	push	word ptr [0084]
	call	01FA
	push	ax
	call	0282

fn0800_0121()
	mov	ds,cs:[01F8]
	call	01A5
	push	cs
	call	word ptr [05AC]
	xor	ax,ax
	mov	si,ax
	mov	cx,002F
	nop	
	cld	

l0800_0137:
	add	al,[si]
	adc	ah,00
	inc	si
	loop	0137

l0800_013F:
	sub	ax,0D37
	nop	
	jz	014F

l0800_0145:
	mov	cx,0019
	nop	
	mov	dx,002F
	call	01DA

l0800_014F:
	mov	bp,sp
	mov	ah,4C
	mov	al,[bp+02]
	int	21
	mov	cx,000E
	nop	
	mov	dx,0048
	jmp	01E9

fn0800_0162()
	push	ds
	mov	ax,3500
	int	21
	mov	[0074],bx
	mov	[0076],es
	mov	ax,3504
	int	21
	mov	[0078],bx
	mov	[007A],es
	mov	ax,3505
	int	21
	mov	[007C],bx
	mov	[007E],es
	mov	ax,3506
	int	21
	mov	[0080],bx
	mov	[0082],es
	mov	ax,2500
	mov	dx,cs
	mov	ds,dx
	mov	dx,0158
	int	21
	pop	ds
	ret	

fn0800_01A5()
	push	ds
	mov	ax,2500
	lds	dx,[0074]
	int	21
	pop	ds
	push	ds
	mov	ax,2504
	lds	dx,[0078]
	int	21
	pop	ds
	push	ds
	mov	ax,2505
	lds	dx,[007C]
	int	21
	pop	ds
	push	ds
	mov	ax,2506
	lds	dx,[0080]
	int	21
	pop	ds
	ret	
0800:01D2       C7 06 96 00 00 00 CB C3                     ........     

fn0800_01DA()
	mov	ah,40
	mov	bx,0002
	int	21
	ret	

l0800_01E2:
	mov	cx,001E
	nop	
	mov	dx,0056
	mov	ds,cs:[01F8]
	call	01DA
	mov	ax,0003
	push	ax
	call	0121
	add	[bx+si],al

fn0800_01FA()
	push	bp
	mov	bp,sp
	sub	sp,08
	lea	ax,[bp-04]
	push	ax
	mov	ax,0194
	push	ax
	call	1655
	pop	cx
	pop	cx
	lea	ax,[bp-08]
	push	ax
	mov	ax,0197
	push	ax
	call	1655
	pop	cx
	pop	cx
	lea	ax,[bp-04]
	push	ax
	lea	ax,[bp-08]
	push	ax
	mov	ax,019A
	push	ax
	call	1655
	add	sp,06
	push	word ptr [bp-02]
	push	word ptr [bp-04]
	push	word ptr [bp-06]
	push	word ptr [bp-08]
	mov	ax,01A0
	push	ax
	call	0DCC
	add	sp,0A
	mov	sp,bp
	pop	bp
	ret	
0800:0246                   55 8B EC 56 8B 76 04 0B F6 7C       U..V.v...|
0800:0250 14 83 FE 58 76 03 BE 57 00 89 36 A8 01 8A 84 AA ...Xv..W..6.....
0800:0260 01 98 96 EB 0D F7 DE 83 FE 23 77 EA C7 06 A8 01 .........#w.....
0800:0270 FF FF 8B C6 A3 94 00 B8 FF FF EB 00 5E 5D C2 02 ............^]..
0800:0280 00 C3                                           ..             

fn0800_0282()
	push	bp
	mov	bp,sp
	jmp	0291

l0800_0287:
	mov	bx,[020E]
	shl	bx,01
	call	word ptr [bx+05B8]

l0800_0291:
	mov	ax,[020E]
	dec	word ptr [020E]
	or	ax,ax
	jnz	0287

l0800_029C:
	call	word ptr [0204]
	call	word ptr [0206]
	call	word ptr [0208]
	push	word ptr [bp+04]
	call	0121
	pop	cx
	pop	bp
	ret	
0800:02B1    00 00 00 00 00 00                             ......        

fn0800_02B7()
	pop	word ptr cs:[02B1]
	mov	cs:[02B3],ds
	cld	
	mov	es,[0090]
	mov	si,0080
	xor	ah,ah
	lodsb	
	inc	ax
	mov	bp,es
	xchg	si,dx
	xchg	ax,bx
	mov	si,[008A]
	add	si,02
	mov	cx,0001
	cmp	byte ptr [0092],03
	jc	02F5

l0800_02E4:
	mov	es,[008C]
	mov	di,si
	mov	cl,7F
	xor	al,al

l0800_02EE:
	repne	
	scasb	

l0800_02F0:
	jcxz	0368

l0800_02F2:
	xor	cl,7F

l0800_02F5:
	sub	sp,02
	mov	ax,0001
	add	ax,bx
	add	ax,cx
	and	ax,FFFE
	mov	di,sp
	sub	di,ax
	jc	0368

l0800_0308:
	mov	sp,di
	mov	ax,es
	mov	ds,ax
	mov	ax,ss
	mov	es,ax
	push	cx
	dec	cx

l0800_0314:
	rep	
	movsb	

l0800_0316:
	xor	al,al
	stosb	
	mov	ds,bp
	xchg	dx,si
	xchg	cx,bx
	mov	ax,bx
	mov	dx,ax
	inc	bx

l0800_0324:
	call	0340
	ja	0330

l0800_0329:
	jc	036B

l0800_032B:
	call	0340
	ja	0329

l0800_0330:
	cmp	al,20
	jz	033C

l0800_0334:
	cmp	al,0D
	jz	033C

l0800_0338:
	cmp	al,09
	jnz	0324

l0800_033C:
	xor	al,al
	jmp	0324

fn0800_0340()
	or	ax,ax
	jz	034B

l0800_0344:
	inc	dx
	stosb	
	or	al,al
	jnz	034B

l0800_034A:
	inc	bx

l0800_034B:
	xchg	al,ah
	xor	al,al
	stc	
	jcxz	0367

l0800_0352:
	lodsb	
	dec	cx
	sub	al,22
	jz	0367

l0800_0358:
	add	al,22
	cmp	al,5C
	jnz	0365

l0800_035E:
	cmp	byte ptr [si],22
	jnz	0365

l0800_0363:
	lodsb	
	dec	cx

l0800_0365:
	or	si,si

l0800_0367:
	ret	

l0800_0368:
	jmp	01E2

l0800_036B:
	pop	cx
	add	cx,dx
	mov	ds,cs:[02B3]
	mov	[0084],bx
	inc	bx
	add	bx,bx
	mov	si,sp
	mov	bp,sp
	sub	bp,bx
	jc	0368

l0800_0382:
	mov	sp,bp
	mov	[0086],bp

l0800_0388:
	jcxz	0398

l0800_038A:
	mov	[bp+00],si
	add	bp,02

l0800_0390:
	lodsb	
	or	al,al
	loopne	0390

l0800_0396:
	jz	0388

l0800_0398:
	xor	ax,ax
	mov	[bp+00],ax
	jmp	word ptr cs:[02B1]

fn0800_03A2()
	mov	cx,[008A]
	push	cx
	call	04F1
	pop	cx
	mov	di,ax
	or	ax,ax
	jz	03D5

l0800_03B1:
	push	ds
	push	ds
	pop	es
	mov	ds,[008C]
	xor	si,si
	cld	

l0800_03BB:
	rep	
	movsb	

l0800_03BD:
	pop	ds
	mov	di,ax
	push	es
	push	word ptr [008E]
	call	04F1
	add	sp,02
	mov	bx,ax
	pop	es
	mov	[0088],ax
	or	ax,ax
	jnz	03D8

l0800_03D5:
	jmp	01E2

l0800_03D8:
	xor	ax,ax
	mov	cx,FFFF

l0800_03DD:
	mov	[bx],di
	add	bx,02

l0800_03E2:
	repne	
	scasb	

l0800_03E4:
	cmp	es:[di],al
	jnz	03DD

l0800_03E9:
	mov	[bx],ax
	ret	
0800:03EC                                     55 8B EC 83             U...
0800:03F0 3E 0E 02 20 75 05 B8 01 00 EB 15 8B 46 04 8B 1E >.. u.......F...
0800:0400 0E 02 D1 E3 89 87 B8 05 FF 06 0E 02 33 C0 EB 00 ............3...
0800:0410 5D C3                                           ].             

fn0800_0412()
	push	bp
	mov	bp,sp
	push	si
	push	di
	mov	di,[bp+04]
	mov	ax,[di+06]
	mov	[05FA],ax
	cmp	ax,di
	jnz	042C

l0800_0424:
	mov	word ptr [05FA],0000
	jmp	043C

l0800_042C:
	mov	si,[di+04]
	mov	bx,[05FA]
	mov	[bx+04],si
	mov	ax,[05FA]
	mov	[si+06],ax

l0800_043C:
	pop	di
	pop	si
	pop	bp
	ret	

fn0800_0440()
	push	bp
	mov	bp,sp
	push	si
	push	di
	mov	di,[bp+04]
	mov	ax,[bp+06]
	sub	[di],ax
	mov	si,[di]
	add	si,di
	mov	ax,[bp+06]
	inc	ax
	mov	[si],ax
	mov	[si+02],di
	mov	ax,[05F8]
	cmp	ax,di
	jnz	0467

l0800_0461:
	mov	[05F8],si
	jmp	046F

l0800_0467:
	mov	di,si
	add	di,[bp+06]
	mov	[di+02],si

l0800_046F:
	mov	ax,si
	add	ax,0004
	jmp	0476

l0800_0476:
	pop	di
	pop	si
	pop	bp
	ret	

fn0800_047A()
	push	bp
	mov	bp,sp
	push	si
	mov	ax,[bp+04]
	xor	dx,dx
	and	ax,FFFF
	and	dx,0000
	push	dx
	push	ax
	call	0588
	pop	cx
	pop	cx
	mov	si,ax
	cmp	si,FF
	jnz	049C

l0800_0498:
	xor	ax,ax
	jmp	04B4

l0800_049C:
	mov	ax,[05F8]
	mov	[si+02],ax
	mov	ax,[bp+04]
	inc	ax
	mov	[si],ax
	mov	[05F8],si
	mov	ax,[05F8]
	add	ax,0004
	jmp	04B4

l0800_04B4:
	pop	si
	pop	bp
	ret	

fn0800_04B7()
	push	bp
	mov	bp,sp
	push	si
	mov	ax,[bp+04]
	xor	dx,dx
	and	ax,FFFF
	and	dx,0000
	push	dx
	push	ax
	call	0588
	pop	cx
	pop	cx
	mov	si,ax
	cmp	si,FF
	jnz	04D9

l0800_04D5:
	xor	ax,ax
	jmp	04EE

l0800_04D9:
	mov	[05FC],si
	mov	[05F8],si
	mov	ax,[bp+04]
	inc	ax
	mov	[si],ax
	mov	ax,si
	add	ax,0004
	jmp	04EE

l0800_04EE:
	pop	si
	pop	bp
	ret	

fn0800_04F1()
	push	bp
	mov	bp,sp
	push	si
	push	di
	mov	di,[bp+04]
	or	di,di
	jz	0502

l0800_04FD:
	cmp	di,F4
	jbe	0506

l0800_0502:
	xor	ax,ax
	jmp	0560

l0800_0506:
	mov	ax,di
	add	ax,000B
	and	ax,FFF8
	mov	di,ax
	cmp	word ptr [05FC],00
	jnz	051E

l0800_0517:
	push	di
	call	04B7
	pop	cx
	jmp	0560

l0800_051E:
	mov	si,[05FA]
	mov	ax,si
	or	ax,ax
	jz	0559

l0800_0528:
	mov	ax,[si]
	mov	dx,di
	add	dx,28
	cmp	ax,dx
	jc	053C

l0800_0533:
	push	di
	push	si
	call	0440
	pop	cx
	pop	cx
	jmp	0560

l0800_053C:
	mov	ax,[si]
	cmp	ax,di
	jc	0550

l0800_0542:
	push	si
	call	0412
	pop	cx
	inc	word ptr [si]
	mov	ax,si
	add	ax,0004
	jmp	0560

l0800_0550:
	mov	si,[si+06]
	cmp	si,[05FA]
	jnz	0528

l0800_0559:
	push	di
	call	047A
	pop	cx
	jmp	0560

l0800_0560:
	pop	di
	pop	si
	pop	bp
	ret	
0800:0564             55 8B EC 8B 46 04 8B D4 81 EA 00 01     U...F.......
0800:0570 3B C2 73 07 A3 9E 00 33 C0 EB 0B C7 06 94 00 08 ;.s....3........
0800:0580 00 B8 FF FF EB 00 5D C3                         ......].       

fn0800_0588()
	push	bp
	mov	bp,sp
	mov	ax,[bp+04]
	mov	dx,[bp+06]
	add	ax,[009E]
	adc	dx,00
	mov	cx,ax
	add	cx,0100
	adc	dx,00
	or	dx,dx
	jnz	05AF

l0800_05A5:
	cmp	cx,sp
	jnc	05AF

l0800_05A9:
	xchg	[009E],ax
	jmp	05BA

l0800_05AF:
	mov	word ptr [0094],0008
	mov	ax,FFFF
	jmp	05BA

l0800_05BA:
	pop	bp
	ret	
0800:05BC                                     55 8B EC FF             U...
0800:05C0 76 04 E8 9F FF 59 EB 00 5D C3 55 8B EC 8B 46 04 v....Y..].U...F.
0800:05D0 99 52 50 E8 B2 FF 8B E5 EB 00 5D C3 55 8B EC 83 .RP.......].U...
0800:05E0 EC 02 56 57 8B 5E 04 8B 37 8B C6 89 46 FE 8B 5E ..VW.^..7...F..^
0800:05F0 04 F7 47 02 40 00 74 04 8B C6 EB 1F 8B 5E 04 8B ..G.@.t......^..
0800:0600 7F 0A EB 0B 8B DF 47 80 3F 0A 75 03 FF 46 FE 8B ......G.?.u..F..
0800:0610 C6 4E 0B C0 75 EE 8B 46 FE EB 00 5F 5E 8B E5 5D .N..u..F..._^..]
0800:0620 C2 02 00 55 8B EC 56 8B 76 04 56 E8 20 07 59 0B ...U..V.v.V. .Y.
0800:0630 C0 74 05 B8 FF FF EB 4C 83 7E 0A 01 75 10 83 3C .t.....L.~..u..<
0800:0640 00 7E 0B 56 E8 95 FF 99 29 46 06 19 56 08 81 64 .~.V....)F..V..d
0800:0650 02 5F FE C7 04 00 00 8B 44 08 89 44 0A FF 76 0A ._......D..D..v.
0800:0660 FF 76 08 FF 76 06 8A 44 04 98 50 E8 3B 05 83 C4 .v..v..D..P.;...
0800:0670 08 83 FA FF 75 0A 3D FF FF 75 05 B8 FF FF EB 02 ....u.=..u......
0800:0680 33 C0 EB 00 5E 5D C3 55 8B EC 83 EC 04 56 8B 76 3...^].U.....V.v
0800:0690 04 56 E8 B9 06 59 0B C0 74 08 BA FF FF B8 FF FF .V...Y..t.......
0800:06A0 EB 35 8A 44 04 98 50 E8 25 16 59 89 56 FE 89 46 .5.D..P.%.Y.V..F
0800:06B0 FC 83 3C 00 7E 19 8B 56 FE 8B 46 FC 52 50 56 E8 ..<.~..V..F.RPV.
0800:06C0 1A FF 99 8B D8 8B CA 58 5A 2B C3 1B D1 EB 06 8B .......XZ+......
0800:06D0 56 FE 8B 46 FC EB 00 5E 8B E5 5D C3 56 57 BF 14 V..F...^..].VW..
0800:06E0 00 BE 12 03 EB 13 8B 44 02 25 00 03 3D 00 03 75 .......D.%..=..u
0800:06F0 05 56 E8 59 06 59 83 C6 10 8B C7 4F 0B C0 75 E6 .V.Y.Y.....O..u.
0800:0700 5F 5E C3 55 8B EC 56 8B 76 04 F7 44 02 00 02 74 _^.U..V.v..D...t
0800:0710 03 E8 C8 FF FF 74 06 8B 44 08 89 44 0A 50 8A 44 .....t..D..D.P.D
0800:0720 04 98 50 E8 52 02 83 C4 06 89 04 0B C0 7E 0B 81 ..P.R........~..
0800:0730 64 02 DF FF 33 C0 EB 23 EB 1C 83 3C 00 75 0E 8B d...3..#...<.u..
0800:0740 44 02 25 7F FE 0D 20 00 89 44 02 EB 09 C7 04 00 D.%... ..D......
0800:0750 00 81 4C 02 10 00 B8 FF FF EB 00 5E 5D C2 02 00 ..L........^]...
0800:0760 55 8B EC 56 8B 76 04 FF 04 56 E8 06 00 59 EB 00 U..V.v...V...Y..
0800:0770 5E 5D C3 55 8B EC 83 EC 02 56 8B 76 04 FF 0C 7C ^].U.....V.v...|
0800:0780 0E FF 44 0A 8B 5C 0A 8A 47 FF B4 00 E9 D4 00 FF ..D..\..G.......
0800:0790 04 7C 07 F7 44 02 10 01 74 0B 81 4C 02 10 00 B8 .|..D...t..L....
0800:07A0 FF FF E9 BE 00 81 4C 02 80 00 83 7C 06 00 74 13 ......L....|..t.
0800:07B0 56 E8 4F FF 0B C0 74 06 B8 FF FF E9 A5 00 EB BD V.O...t.........
0800:07C0 E9 A0 00 83 3E 7A 04 00 75 38 B8 12 03 3B C6 75 ....>z..u8...;.u
0800:07D0 31 8A 44 04 98 50 E8 9A 00 59 0B C0 75 05 81 64 1.D..P...Y..u..d
0800:07E0 02 FF FD B8 00 02 50 F7 44 02 00 02 74 05 B8 01 ......P.D...t...
0800:07F0 00 EB 02 33 C0 50 33 C0 50 56 E8 88 00 83 C4 08 ...3.P3.PV......
0800:0800 EB A3 F7 44 02 00 02 74 03 E8 D0 FE B8 01 00 50 ...D...t.......P
0800:0810 8D 46 FF 50 8A 44 04 98 50 E8 18 02 83 C4 06 3D .F.P.D..P......=
0800:0820 01 00 74 26 8A 44 04 98 50 E8 B4 04 59 3D 01 00 ..t&.D..P...Y=..
0800:0830 74 07 81 4C 02 10 00 EB 0C 8B 44 02 25 7F FE 0D t..L......D.%...
0800:0840 20 00 89 44 02 B8 FF FF EB 19 80 7E FF 0D 75 07  ..D.......~..u.
0800:0850 F7 44 02 40 00 74 AB 81 64 02 DF FF 8A 46 FF B4 .D.@.t..d....F..
0800:0860 00 EB 00 5E 8B E5 5D C3 B8 12 03 50 E8 04 FF 59 ...^..]....P...Y
0800:0870 EB 00 C3 55 8B EC B8 00 44 8B 5E 04 CD 21 8B C2 ...U....D.^..!..
0800:0880 25 80 00 5D C3 55 8B EC 56 57 8B 7E 0A 8B 76 04 %..].U..VW.~..v.
0800:0890 8B 44 0E 3B C6 75 0C 83 7E 08 02 7F 06 81 FF FF .D.;.u..~.......
0800:08A0 7F 76 06 B8 FF FF E9 AA 00 83 3E 7C 04 00 75 0F .v........>|..u.
0800:08B0 B8 22 03 3B C6 75 08 C7 06 7C 04 01 00 EB 14 83 .".;.u...|......
0800:08C0 3E 7A 04 00 75 0D B8 12 03 3B C6 75 06 C7 06 7A >z..u....;.u...z
0800:08D0 04 01 00 83 3C 00 74 0F B8 01 00 50 33 C0 50 50 ....<.t....P3.PP
0800:08E0 56 E8 3F FD 83 C4 08 F7 44 02 04 00 74 07 FF 74 V.?.....D...t..t
0800:08F0 08 E8 3A 0D 59 81 64 02 F3 FF C7 44 06 00 00 8B ..:.Y.d....D....
0800:0900 C6 05 05 00 89 44 08 89 44 0A 83 7E 08 02 74 3F .....D..D..~..t?
0800:0910 0B FF 76 3B C7 06 04 02 57 09 83 7E 06 00 75 18 ..v;....W..~..u.
0800:0920 57 E8 CD FB 59 89 46 06 0B C0 74 07 81 4C 02 04 W...Y.F...t..L..
0800:0930 00 EB 05 B8 FF FF EB 1B 8B 46 06 89 44 0A 89 44 .........F..D..D
0800:0940 08 89 7C 06 83 7E 08 01 75 05 81 4C 02 08 00 33 ..|..~..u..L...3
0800:0950 C0 EB 00 5F 5E 5D C3 56 57 BF 04 00 BE 12 03 EB ..._^].VW.......
0800:0960 10 F7 44 02 03 00 74 05 56 E8 E2 03 59 4F 83 C6 ..D...t.V...YO..
0800:0970 10 0B FF 75 EC 5F 5E C3 55 8B EC 83 EC 04 56 57 ...u._^.U.....VW
0800:0980 8B 46 08 40 3D 02 00 72 0D 8B 5E 04 D1 E3 F7 87 .F.@=..r..^.....
0800:0990 52 04 00 02 74 05 33 C0 E9 93 00 FF 76 08 FF 76 R...t.3.....v..v
0800:09A0 06 FF 76 04 E8 8D 00 83 C4 06 89 46 FC 8B 46 FC ..v........F..F.
0800:09B0 40 3D 02 00 72 0D 8B 5E 04 D1 E3 F7 87 52 04 00 @=..r..^.....R..
0800:09C0 80 74 06 8B 46 FC EB 66 90 8B 4E FC 8B 76 06 1E .t..F..f..N..v..
0800:09D0 07 8B FE 8B DE FC AC 3C 1A 74 2D 3C 0D 74 05 AA .......<.t-<.t..
0800:09E0 E2 F4 EB 1C E2 F0 06 53 B8 01 00 50 8D 46 FF 50 .......S...P.F.P
0800:09F0 FF 76 04 E8 3E 00 83 C4 06 5B 07 FC 8A 46 FF AA .v..>....[...F..
0800:0A00 3B FB 75 02 EB 95 EB 20 53 B8 02 00 50 F7 D9 1B ;.u.... S...P...
0800:0A10 C0 50 51 FF 76 04 E8 90 01 83 C4 08 8B 5E 04 D1 .PQ.v........^..
0800:0A20 E3 81 8F 52 04 00 02 5B 8B C7 2B C3 EB 00 5F 5E ...R...[..+..._^
0800:0A30 8B E5 5D C3 55 8B EC B4 3F 8B 5E 04 8B 4E 08 8B ..].U...?.^..N..
0800:0A40 56 06 CD 21 72 02 EB 06 50 E8 FA F7 EB 00 5D C3 V..!r...P.....].
0800:0A50 55 8B EC 81 EC 8A 00 56 57 8B 46 08 40 3D 02 00 U......VW.F.@=..
0800:0A60 73 05 33 C0 E9 F6 00 8B 5E 04 D1 E3 F7 87 52 04 s.3.....^.....R.
0800:0A70 00 80 74 12 FF 76 08 FF 76 06 FF 76 04 E8 E3 00 ..t..v..v..v....
0800:0A80 83 C4 06 E9 D7 00 8B 5E 04 D1 E3 81 A7 52 04 FF .......^.....R..
0800:0A90 FD 8B 46 06 89 86 7C FF 8B 46 08 89 86 78 FF 8D ..F...|..F...x..
0800:0AA0 B6 7E FF EB 6D FF 8E 78 FF 8B 9E 7C FF FF 86 7C .~..m..x...|...|
0800:0AB0 FF 8A 07 88 86 7B FF 3C 0A 75 04 C6 04 0D 46 8A .....{.<.u....F.
0800:0AC0 86 7B FF 88 04 46 8D 86 7E FF 8B D6 2B D0 81 FA .{...F..~...+...
0800:0AD0 80 00 7C 3E 8D 86 7E FF 8B FE 2B F8 57 8D 86 7E ..|>..~...+.W..~
0800:0AE0 FF 50 FF 76 04 E8 7B 00 83 C4 06 89 86 76 FF 3B .P.v..{......v.;
0800:0AF0 C7 74 1B 83 BE 76 FF 00 73 05 B8 FF FF EB 0D 8B .t...v..s.......
0800:0B00 46 08 2B 86 78 FF 03 86 76 FF 2B C7 EB 4F 8D B6 F.+.x...v.+..O..
0800:0B10 7E FF 83 BE 78 FF 00 74 03 E9 89 FF 8D 86 7E FF ~...x..t......~.
0800:0B20 8B FE 2B F8 8B C7 0B C0 76 2E 57 8D 86 7E FF 50 ..+.....v.W..~.P
0800:0B30 FF 76 04 E8 2D 00 83 C4 06 89 86 76 FF 3B C7 74 .v..-......v.;.t
0800:0B40 17 83 BE 76 FF 00 73 05 B8 FF FF EB 09 8B 46 08 ...v..s.......F.
0800:0B50 03 86 76 FF 2B C7 EB 05 8B 46 08 EB 00 5F 5E 8B ..v.+....F..._^.
0800:0B60 E5 5D C3 55 8B EC 8B 5E 04 D1 E3 F7 87 52 04 00 .].U...^.....R..
0800:0B70 08 74 10 B8 02 00 50 33 C0 50 50 FF 76 04 E8 28 .t....P3.PP.v..(
0800:0B80 00 8B E5 B4 40 8B 5E 04 8B 4E 08 8B 56 06 CD 21 ....@.^..N..V..!
0800:0B90 72 0F 50 8B 5E 04 D1 E3 81 8F 52 04 00 10 58 EB r.P.^.....R...X.
0800:0BA0 06 50 E8 A1 F6 EB 00 5D C3 55 8B EC 8B 5E 04 D1 .P.....].U...^..
0800:0BB0 E3 81 A7 52 04 FF FD B4 42 8A 46 0A 8B 5E 04 8B ...R....B.F..^..
0800:0BC0 4E 08 8B 56 06 CD 21 72 02 EB 07 50 E8 77 F6 99 N..V..!r...P.w..
0800:0BD0 EB 00 5D C3 55 8B EC 83 EC 22 56 57 06 8B 7E 0A ..].U...."VW..~.
0800:0BE0 1E 07 8B 5E 08 83 FB 24 77 58 80 FB 02 72 53 8B ...^...$wX...rS.
0800:0BF0 46 0C 8B 4E 0E 0B C9 7D 11 80 7E 06 00 74 0B C6 F..N...}..~..t..
0800:0C00 05 2D 47 F7 D9 F7 D8 83 D9 00 8D 76 DE E3 0F 91 .-G........v....
0800:0C10 2B D2 F7 F3 91 F7 F3 88 14 46 E3 09 EB F1 2B D2 +........F....+.
0800:0C20 F7 F3 88 14 46 0B C0 75 F5 8D 4E DE F7 D9 03 CE ....F..u..N.....
0800:0C30 FC 4E 8A 04 2C 0A 73 04 04 3A EB 03 02 46 04 AA .N..,.s..:...F..
0800:0C40 E2 EF B0 00 AA 07 8B 46 0A EB 00 5F 5E 8B E5 5D .......F..._^..]
0800:0C50 C2 0C 00 55 8B EC 83 7E 08 0A 75 06 8B 46 04 99 ...U...~..u..F..
0800:0C60 EB 05 8B 46 04 33 D2 52 50 FF 76 06 FF 76 08 B0 ...F.3.RP.v..v..
0800:0C70 01 50 B0 61 50 E8 5C FF EB 00 5D C3 55 8B EC FF .P.aP.\...].U...
0800:0C80 76 06 FF 76 04 FF 76 08 FF 76 0A B0 00 50 B0 61 v..v..v..v...P.a
0800:0C90 50 E8 40 FF EB 00 5D C3 55 8B EC FF 76 06 FF 76 P.@...].U...v..v
0800:0CA0 04 FF 76 08 FF 76 0A 83 7E 0A 0A 75 05 B8 01 00 ..v..v..~..u....
0800:0CB0 EB 02 33 C0 50 B0 61 50 E8 19 FF EB 00 5D C3 BA ..3.P.aP.....]..
0800:0CC0 7E 04 EB 03 BA 83 04 B9 05 00 90 B4 40 BB 02 00 ~...........@...
0800:0CD0 CD 21 B9 27 00 90 BA 88 04 B4 40 CD 21 E9 02 F5 .!.'......@.!...
0800:0CE0 55 8B EC 83 EC 04 8B 5E 04 D1 E3 F7 87 52 04 00 U......^.....R..
0800:0CF0 02 74 06 B8 01 00 EB 52 90 B8 00 44 8B 5E 04 CD .t.....R...D.^..
0800:0D00 21 72 41 F6 C2 80 75 38 B8 01 42 33 C9 33 D2 CD !rA...u8..B3.3..
0800:0D10 21 72 31 52 50 B8 02 42 33 C9 33 D2 CD 21 89 46 !r1RP..B3.3..!.F
0800:0D20 FC 89 56 FE 5A 59 72 1C B8 00 42 CD 21 72 15 3B ..V.ZYr...B.!r.;
0800:0D30 56 FE 72 0C 77 05 3B 46 FC 72 05 B8 01 00 EB 0A V.r.w.;F.r......
0800:0D40 33 C0 EB 06 50 E8 FE F4 EB 00 8B E5 5D C3 55 8B 3...P.......].U.
0800:0D50 EC 56 57 8B 76 04 8B 44 0E 3B C6 74 05 B8 FF FF .VW.v..D.;.t....
0800:0D60 EB 66 83 3C 00 7C 2D F7 44 02 08 00 75 0C 8B 44 .f.<.|-.D...u..D
0800:0D70 0A 8B D6 83 C2 05 3B C2 75 16 C7 04 00 00 8B 44 ......;.u......D
0800:0D80 0A 8B D6 83 C2 05 3B C2 75 06 8B 44 08 89 44 0A ......;.u..D..D.
0800:0D90 33 C0 EB 34 8B 7C 06 03 3C 47 29 3C 57 8B 44 08 3..4.|..<G)<W.D.
0800:0DA0 89 44 0A 50 8A 44 04 98 50 E8 A4 FC 83 C4 06 3B .D.P.D..P......;
0800:0DB0 C7 74 11 F7 44 02 00 02 75 0A 81 4C 02 10 00 B8 .t..D...u..L....
0800:0DC0 FF FF EB 04 33 C0 EB 00 5F 5E 5D C3             ....3..._^].   

fn0800_0DCC()
	push	bp
	mov	bp,sp
	mov	ax,0F02
	push	ax
	mov	ax,0322
	push	ax
	push	word ptr [bp+04]
	lea	ax,[bp+06]
	push	ax
	call	0FF4
	jmp	0DE3

l0800_0DE3:
	pop	bp
	ret	
0800:0DE5                55 8B EC 8B 5E 06 FF 0F FF 76 06      U...^....v.
0800:0DF0 8A 46 04 98 50 E8 06 00 8B E5 EB 00 5D C3 55 8B .F..P.......].U.
0800:0E00 EC 83 EC 02 56 8B 76 06 8A 46 04 88 46 FF FF 04 ....V.v..F..F...
0800:0E10 7D 36 8A 46 FF FF 44 0A 8B 5C 0A 88 47 FF F7 44 }6.F..D..\..G..D
0800:0E20 02 08 00 74 1B 80 7E FF 0A 74 06 80 7E FF 0D 75 ...t..~..t..~..u
0800:0E30 0F 56 E8 19 FF 59 0B C0 74 06 B8 FF FF E9 A7 00 .V...Y..t.......
0800:0E40 8A 46 FF B4 00 E9 9F 00 FF 0C F7 44 02 90 00 75 .F.........D...u
0800:0E50 07 F7 44 02 02 00 75 0B 81 4C 02 10 00 B8 FF FF ..D...u..L......
0800:0E60 E9 84 00 81 4C 02 00 01 83 7C 06 00 74 24 83 3C ....L....|..t$.<
0800:0E70 00 74 10 56 E8 D7 FE 59 0B C0 74 05 B8 FF FF EB .t.V...Y..t.....
0800:0E80 66 EB 0A 8B 44 06 BA FF FF 2B D0 89 14 E9 7E FF f...D....+....~.
0800:0E90 EB 55 80 7E FF 0A 75 1F F7 44 02 40 00 75 18 B8 .U.~..u..D.@.u..
0800:0EA0 01 00 50 B8 B0 04 50 8A 44 04 98 50 E8 B4 FC 83 ..P...P.D..P....
0800:0EB0 C4 06 3D 01 00 75 18 B8 01 00 50 8D 46 04 50 8A ..=..u....P.F.P.
0800:0EC0 44 04 98 50 E8 9C FC 83 C4 06 3D 01 00 74 11 F7 D..P......=..t..
0800:0ED0 44 02 00 02 75 0A 81 4C 02 10 00 B8 FF FF EB 07 D...u..L........
0800:0EE0 8A 46 FF B4 00 EB 00 5E 8B E5 5D C3 55 8B EC 56 .F.....^..].U..V
0800:0EF0 8B 76 04 B8 22 03 50 56 E8 03 FF 59 59 EB 00 5E .v..".PV...YY..^
0800:0F00 5D C3 55 8B EC 83 EC 02 56 57 8B 76 04 8B 7E 06 ].U.....VW.v..~.
0800:0F10 89 7E FE F7 44 02 08 00 74 26 EB 1A 56 8B 5E 08 .~..D...t&..V.^.
0800:0F20 FF 46 08 8A 07 98 50 E8 D4 FE 59 59 3D FF FF 75 .F....P...YY=..u
0800:0F30 05 33 C0 E9 87 00 8B C7 4F 0B C0 75 DF E9 78 00 .3......O..u..x.
0800:0F40 F7 44 02 40 00 74 38 83 7C 06 00 74 32 8B 44 06 .D.@.t8.|..t2.D.
0800:0F50 3B C7 73 2B 83 3C 00 74 0D 56 E8 F1 FD 59 0B C0 ;.s+.<.t.V...Y..
0800:0F60 74 04 33 C0 EB 57 57 FF 76 08 8A 44 04 98 50 E8 t.3..WW.v..D..P.
0800:0F70 F1 FB 83 C4 06 3B C7 73 04 33 C0 EB 40 EB 39 EB .....;.s.3..@.9.
0800:0F80 30 FF 04 7D 15 8B 5E 08 FF 46 08 8A 07 FF 44 0A 0..}..^..F....D.
0800:0F90 8B 5C 0A 88 47 FF B4 00 EB 0E 56 8B 5E 08 FF 46 .\..G.....V.^..F
0800:0FA0 08 FF 37 E8 3F FE 59 59 3D FF FF 75 04 33 C0 EB ..7.?.YY=..u.3..
0800:0FB0 0C 8B C7 4F 0B C0 75 C9 8B 46 FE EB 00 5F 5E 8B ...O..u..F..._^.
0800:0FC0 E5 5D C2 06 00 FF 26 B0 05 55 8B EC 8B 56 04 B9 .]....&..U...V..
0800:0FD0 04 0F BB B9 04 FC 8A C6 D2 E8 D7 AA 8A C6 22 C5 ..............".
0800:0FE0 D7 AA 8A C2 D2 E8 D7 AA 8A C2 22 C5 D7 AA EB 00 ..........".....
0800:0FF0 5D C2 02 00                                     ]...           

fn0800_0FF4()
	push	bp
	mov	bp,sp
	sub	sp,0098
	push	si
	push	di
	mov	word ptr [bp-58],0000
	mov	byte ptr [bp-55],50
	mov	word ptr [bp-02],0000
	jmp	104E
0800:100D                                        57 B9 FF              W..
0800:1010 FF 32 C0 F2 AE F7 D1 49 5F C3                   .2.....I_.     

fn0800_101A()
	mov	[di],al
	inc	di
	dec	byte ptr [bp-55]
	jle	104D

fn0800_1022()
	push	bx
	push	cx
	push	dx
	push	es
	lea	ax,[bp-54]
	sub	di,ax
	lea	ax,[bp-54]
	push	ax
	push	di
	push	word ptr [bp+08]
	call	word ptr [bp+0A]
	or	ax,ax
	jnz	103F

l0800_103A:
	mov	word ptr [bp-02],0001

l0800_103F:
	mov	byte ptr [bp-55],50
	add	[bp-58],di
	lea	di,[bp-54]
	pop	es
	pop	dx
	pop	cx
	pop	bx

l0800_104D:
	ret	

l0800_104E:
	push	es
	cld	
	lea	di,[bp-54]
	mov	[bp+FF6A],di
	mov	di,[bp+FF6A]
	mov	si,[bp+06]

l0800_105E:
	lodsb	
	or	al,al
	jz	1074

l0800_1063:
	cmp	al,25
	jz	1077

l0800_1067:
	mov	[di],al
	inc	di
	dec	byte ptr [bp-55]
	jg	105E

l0800_106F:
	call	1022
	jmp	105E

l0800_1074:
	jmp	14F3

l0800_1077:
	mov	[bp+FF76],si
	lodsb	
	cmp	al,25
	jz	1067

l0800_1080:
	mov	[bp+FF6A],di
	xor	cx,cx
	mov	[bp+FF74],cx
	mov	[bp+FF68],cx
	mov	[bp+FF73],cl
	mov	word ptr [bp+FF6E],FFFF
	mov	word ptr [bp+FF70],FFFF
	jmp	10A1
0800:10A0 AC                                              .              

l0800_10A1:
	xor	ah,ah
	mov	dx,ax
	mov	bx,ax
	sub	bl,20
	cmp	bl,60
	jnc	10F6

l0800_10AF:
	mov	bl,[bx+04C9]
	mov	ax,bx
	cmp	ax,0017
	jbe	10BD

l0800_10BA:
	jmp	14E1

l0800_10BD:
	mov	bx,ax
	shl	bx,01
	jmp	word ptr cs:[bx+10C6]
0800:10C6                   11 11 F9 10 52 11 05 11 77 11       ....R...w.
0800:10D0 81 11 C3 11 CD 11 DD 11 38 11 12 12 ED 11 F1 11 ........8.......
0800:10E0 F5 11 97 12 49 13 EA 12 0A 13 B4 14 E1 14 E1 14 ....I...........
0800:10F0 E1 14 24 11 2E 11                               ..$...         

l0800_10F6:
	jmp	14E1
0800:10F9                            80 FD 00 77 F8 83 8E          ...w...
0800:1100 68 FF 01 EB 9B 80 FD 00 77 EC 83 8E 68 FF 02 EB h.......w...h...
0800:1110 8F 80 FD 00 77 E0 80 BE 73 FF 2B 74 04 88 96 73 ....w...s.+t...s
0800:1120 FF E9 7C FF 83 A6 68 FF DF B5 05 E9 72 FF 83 8E ..|...h.....r...
0800:1130 68 FF 20 B5 05 E9 68 FF 80 FD 00 77 44 F7 86 68 h. ...h....wD..h
0800:1140 FF 02 00 75 21 83 8E 68 FF 08 B5 01 E9 51 FF E9 ...u!..h.....Q..
0800:1150 8F 03 8B 7E 04 8B 05 83 46 04 02 80 FD 02 73 09 ...~....F.....s.
0800:1160 89 86 6E FF B5 03 E9 37 FF 80 FD 04 75 E1 89 86 ..n....7....u...
0800:1170 70 FF FE C5 E9 29 FF 80 FD 04 73 D3 B5 04 E9 1F p....)....s.....
0800:1180 FF 92 2C 30 98 80 FD 02 77 1B B5 02 87 86 6E FF ..,0....w.....n.
0800:1190 0B C0 7C D2 D1 E0 8B D0 D1 E0 D1 E0 03 C2 01 86 ..|.............
0800:11A0 6E FF E9 FB FE 80 FD 04 75 A5 87 86 70 FF 0B C0 n.......u...p...
0800:11B0 7C B4 D1 E0 8B D0 D1 E0 D1 E0 03 C2 01 86 70 FF |.............p.
0800:11C0 E9 DD FE 83 8E 68 FF 10 B5 05 E9 D3 FE 81 8E 68 .....h.........h
0800:11D0 FF 00 01 83 A6 68 FF EF B5 05 E9 C3 FE 83 A6 68 .....h.........h
0800:11E0 FF EF 81 8E 68 FF 80 00 B5 05 E9 B3 FE B7 08 EB ....h...........
0800:11F0 0A B7 0A EB 0B B7 10 B3 E9 02 DA C6 86 73 FF 00 .............s..
0800:1200 C6 86 6D FF 00 88 96 6C FF 8B 7E 04 8B 05 33 D2 ..m....l..~...3.
0800:1210 EB 11 B7 0A C6 86 6D FF 01 88 96 6C FF 8B 7E 04 ......m....l..~.
0800:1220 8B 05 99 47 47 89 76 06 F7 86 68 FF 10 00 74 04 ...GG.v...h...t.
0800:1230 8B 15 47 47 89 7E 04 8D BE 79 FF 0B C0 75 33 0B ..GG.~...y...u3.
0800:1240 D2 75 2F 83 BE 70 FF 00 75 2D 8B BE 6A FF 8B 8E .u/..p..u-..j...
0800:1250 6E FF E3 1B 83 F9 FF 74 16 8B 86 68 FF 25 08 00 n......t...h.%..
0800:1260 74 04 B2 30 EB 02 B2 20 8A C2 E8 AD FD E2 F9 E9 t..0... ........
0800:1270 E9 FD 83 8E 68 FF 04 52 50 57 8A C7 98 50 8A 86 ....h..RPW...P..
0800:1280 6D FF 50 53 E8 4D F9 16 07 8B 96 70 FF 0B D2 7F m.PS.M.....p....
0800:1290 03 E9 14 01 E9 21 01 88 96 6C FF 89 76 06 8D BE .....!...l..v...
0800:12A0 78 FF 8B 5E 04 FF 37 43 43 89 5E 04 F7 86 68 FF x..^..7CC.^...h.
0800:12B0 20 00 74 0F FF 37 43 43 89 5E 04 16 07 E8 09 FD  .t..7CC.^......
0800:12C0 B0 3A AA 16 07 E8 01 FD C6 05 00 C6 86 6D FF 00 .:...........m..
0800:12D0 83 A6 68 FF FB 8D 8E 78 FF 2B F9 87 CF 8B 96 70 ..h....x.+.....p
0800:12E0 FF 3B D1 7F 02 8B D1 E9 BE 00 89 76 06 88 96 6C .;.........v...l
0800:12F0 FF 8B 7E 04 8B 05 83 46 04 02 16 07 8D BE 79 FF ..~....F......y.
0800:1300 32 E4 89 05 B9 01 00 E9 DF 00 89 76 06 88 96 6C 2..........v...l
0800:1310 FF 8B 7E 04 F7 86 68 FF 20 00 75 0C 8B 3D 83 46 ..~...h. .u..=.F
0800:1320 04 02 1E 07 0B FF EB 0A C4 3D 83 46 04 04 8C C0 .........=.F....
0800:1330 0B C7 75 05 1E 07 BF B2 04 E8 D1 FC 3B 8E 70 FF ..u.........;.p.
0800:1340 76 04 8B 8E 70 FF E9 A0 00 89 76 06 88 96 6C FF v...p.....v...l.
0800:1350 8B 7E 04 8B 8E 70 FF 0B C9 7D 03 B9 06 00 57 51 .~...p...}....WQ
0800:1360 8D 9E 79 FF 53 52 B8 01 00 23 86 68 FF 50 8B 86 ..y.SR...#.h.P..
0800:1370 68 FF A9 80 00 74 0A B8 02 00 C7 46 FC 04 00 EB h....t.....F....
0800:1380 17 A9 00 01 74 0A B8 08 00 C7 46 FC 0A 00 EB 08 ....t.....F.....
0800:1390 C7 46 FC 08 00 B8 06 00 50 E8 29 FC 8B 46 FC 01 .F......P.)..F..
0800:13A0 46 04 16 07 8D BE 79 FF F7 86 68 FF 08 00 74 1A F.....y...h...t.
0800:13B0 8B 96 6E FF 0B D2 7E 12 E8 52 FC 26 80 3D 2D 75 ..n...~..R.&.=-u
0800:13C0 01 49 2B D1 7E 04 89 96 74 FF 8A 86 73 FF 0A C0 .I+.~...t...s...
0800:13D0 74 14 26 80 3D 2D 74 0E 83 AE 74 FF 01 83 96 74 t.&.=-t...t....t
0800:13E0 FF 00 4F 26 88 05 E8 24 FC 8B F7 8B BE 6A FF 8B ..O&...$.....j..
0800:13F0 9E 6E FF B8 05 00 23 86 68 FF 3D 05 00 75 16 8A .n....#.h.=..u..
0800:1400 A6 6C FF 80 FC 6F 75 10 83 BE 74 FF 00 7F 06 C7 .l...ou...t.....
0800:1410 86 74 FF 01 00 EB 1F 90 80 FC 78 74 05 80 FC 58 .t........xt...X
0800:1420 75 14 83 8E 68 FF 40 4B 4B 83 AE 74 FF 02 7D 06 u...h.@KK..t..}.
0800:1430 C7 86 74 FF 00 00 03 8E 74 FF F7 86 68 FF 02 00 ..t.....t...h...
0800:1440 75 0C EB 06 B0 20 E8 D1 FB 4B 3B D9 7F F6 F7 86 u.... ...K;.....
0800:1450 68 FF 40 00 74 0C B0 30 E8 BF FB 8A 86 6C FF E8 h.@.t..0.....l..
0800:1460 B8 FB 8B 96 74 FF 0B D2 7E 27 2B CA 2B DA 26 8A ....t...~'+.+.&.
0800:1470 04 3C 2D 74 08 3C 20 74 04 3C 2B 75 07 26 AC E8 .<-t.< t.<+u.&..
0800:1480 98 FB 49 4B 87 CA E3 07 B0 30 E8 8D FB E2 F9 87 ..IK.....0......
0800:1490 CA E3 11 2B D9 26 AC 88 05 47 FE 4E AB 7F 03 E8 ...+.&...G.N....
0800:14A0 80 FB E2 F1 0B DB 7E 09 8B CB B0 20 E8 6B FB E2 ......~.... .k..
0800:14B0 F9 E9 A7 FB 89 76 06 8B 7E 04 F7 86 68 FF 20 00 .....v..~...h. .
0800:14C0 75 0A 8B 3D 83 46 04 02 1E 07 EB 06 C4 3D 83 46 u..=.F.......=.F
0800:14D0 04 04 B8 50 00 2A 46 AB 03 46 A8 26 89 05 E9 76 ...P.*F..F.&...v
0800:14E0 FB                                              .              

l0800_14E1:
	mov	si,[bp+FF76]
	mov	di,[bp+FF6A]
	mov	al,25

l0800_14EB:
	call	101A
	lodsb	
	or	al,al
	jnz	14EB

l0800_14F3:
	cmp	byte ptr [bp-55],50
	jge	14FC

l0800_14F9:
	call	1022

l0800_14FC:
	pop	es
	cmp	word ptr [bp-02],00
	jz	150A

l0800_1503:
	mov	ax,FFFF
	jmp	150F
0800:1508                         EB 05                           ..     

l0800_150A:
	mov	ax,[bp-58]
	jmp	150F

l0800_150F:
	pop	di
	pop	si
	mov	sp,bp
	pop	bp
	ret	0008
0800:1517                      55 8B EC 56 57 8B 76 04 83        U..VW.v..
0800:1520 3E FA 05 00 74 1C 8B 1E FA 05 8B 7F 06 8B 1E FA >...t...........
0800:1530 05 89 77 06 89 75 04 89 7C 06 A1 FA 05 89 44 04 ..w..u..|.....D.
0800:1540 EB 0A 89 36 FA 05 89 74 04 89 74 06 5F 5E 5D C3 ...6...t..t._^].
0800:1550 55 8B EC 83 EC 02 56 57 8B 76 06 8B 7E 04 8B 04 U.....VW.v..~...
0800:1560 01 05 A1 F8 05 3B C6 75 06 89 3E F8 05 EB 0D 8B .....;.u..>.....
0800:1570 04 03 C6 89 46 FE 8B 5E FE 89 7F 02 56 E8 92 EE ....F..^....V...
0800:1580 59 5F 5E 8B E5 5D C3 56 A1 FC 05 3B 06 F8 05 75 Y_^..].V...;...u
0800:1590 12 FF 36 FC 05 E8 24 F0 59 33 C0 A3 F8 05 A3 FC ..6...$.Y3......
0800:15A0 05 EB 3B 8B 1E F8 05 8B 77 02 F7 04 01 00 75 22 ..;.....w.....u"
0800:15B0 56 E8 5E EE 59 3B 36 FC 05 75 0A 33 C0 A3 F8 05 V.^.Y;6..u.3....
0800:15C0 A3 FC 05 EB 06 8B 44 02 A3 F8 05 56 E8 ED EF 59 ......D....V...Y
0800:15D0 EB 0C FF 36 F8 05 E8 E3 EF 59 89 36 F8 05 5E C3 ...6.....Y.6..^.
0800:15E0 55 8B EC 83 EC 02 56 57 8B 76 04 FF 0C 8B 04 03 U.....VW.v......
0800:15F0 C6 89 46 FE 8B 7C 02 F7 05 01 00 75 14 3B 36 FC ..F..|.....u.;6.
0800:1600 05 74 0E 8B 04 01 05 8B 5E FE 89 7F 02 8B F7 EB .t......^.......
0800:1610 05 56 E8 02 FF 59 8B 5E FE F7 07 01 00 75 09 FF .V...Y.^.....u..
0800:1620 76 FE 56 E8 2A FF 59 59 5F 5E 8B E5 5D C3 55 8B v.V.*.YY_^..].U.
0800:1630 EC 56 8B 76 04 0B F6 75 02 EB 17 8B C6 05 FC FF .V.v...u........
0800:1640 8B F0 3B 36 F8 05 75 05 E8 3C FF EB 05 56 E8 8F ..;6..u..<...V..
0800:1650 FF 59 5E 5D C3                                  .Y^].          

fn0800_1655()
	push	bp
	mov	bp,sp
	lea	ax,[bp+06]
	push	ax
	push	word ptr [bp+04]
	mov	ax,0312
	push	ax
	mov	ax,1CE6
	push	ax
	mov	ax,0773
	push	ax
	call	1674
	mov	sp,bp
	jmp	1672

l0800_1672:
	pop	bp
	ret	

fn0800_1674()
	push	bp
	mov	bp,sp
	sub	sp,2A
	push	si
	push	di
	mov	word ptr [bp-28],0000
	mov	word ptr [bp-26],0000
	jmp	16A2
0800:1688                         90 8B 7E 0C F6 46 D7 20         ..~..F. 
0800:1690 74 07 C4 3D 83 46 0C 04 C3 8B 3D 1E 07 83 46 0C t..=.F....=...F.
0800:16A0 02 C3                                           ..             

l0800_16A2:
	push	es
	cld	
	mov	si,[bp+0A]

l0800_16A7:
	lodsb	
	or	al,al
	jz	1709

l0800_16AC:
	cmp	al,25
	jz	170C

l0800_16B0:
	cbw	
	xchg	ax,di
	inc	word ptr [bp-26]
	push	word ptr [bp+08]
	call	word ptr [bp+04]
	pop	cx
	or	ax,ax
	jl	16E5

l0800_16C0:
	or	di,di
	js	16F6

l0800_16C4:
	cmp	byte ptr [di+052A],01
	jnz	16F6

l0800_16CB:
	xchg	ax,bx
	or	bl,bl
	js	16E8

l0800_16D0:
	cmp	byte ptr [bx+052A],01
	jnz	16E8

l0800_16D7:
	inc	word ptr [bp-26]
	push	word ptr [bp+08]
	call	word ptr [bp+04]
	pop	cx
	or	ax,ax
	jg	16CB

l0800_16E5:
	jmp	1A6C

l0800_16E8:
	push	word ptr [bp+08]
	push	bx
	call	word ptr [bp+06]
	pop	cx
	pop	cx
	dec	word ptr [bp-26]
	jmp	16A7

l0800_16F6:
	cmp	ax,di
	jz	16A7

l0800_16FA:
	push	word ptr [bp+08]
	push	ax
	call	word ptr [bp+06]
	pop	cx
	pop	cx
	dec	word ptr [bp-26]
	jmp	1A80

l0800_1709:
	jmp	1A80

l0800_170C:
	mov	word ptr [bp-22],FFFF
	mov	byte ptr [bp-29],00
	lodsb	
	cbw	
	mov	[bp+0A],si
	xchg	ax,di
	or	di,di
	jl	1767

l0800_171F:
	mov	bl,[di+052A]
	xor	bh,bh
	mov	ax,bx
	cmp	ax,0015
	jbe	172F

l0800_172C:
	jmp	1A6C

l0800_172F:
	mov	bx,ax
	shl	bx,01
	jmp	word ptr cs:[bx+1738]
0800:1738                         67 17 67 17 67 17 64 17         g.g.g.d.
0800:1740 6A 17 70 17 49 19 B8 17 B8 17 C2 17 89 18 84 17 j.p.I...........
0800:1750 90 17 8A 17 B3 17 ED 18 87 19 A5 17 BD 17 16 18 ................
0800:1760 97 17 9E 17 E9 49 FF                            .....I.        

l0800_1767:
	jmp	1A80
0800:176A                               80 4E D7 01 EB A5           .N....
0800:1770 83 EF 30 87 7E DE 0B FF 7C 9B B8 0A 00 F7 E7 01 ..0.~...|.......
0800:1780 46 DE EB 91 80 4E D7 08 EB 8B 80 4E D7 04 EB 85 F....N.....N....
0800:1790 80 4E D7 02 E9 7E FF 80 66 D7 DF E9 77 FF 80 4E .N...~..f...w..N
0800:17A0 D7 20 E9 70 FF 8B 46 DA 2B D2 F6 46 D7 01 74 4F . .p..F.+..F..tO
0800:17B0 E9 62 FF BE 08 00 EB 0D BE 0A 00 EB 08 BE 10 00 .b..............
0800:17C0 EB 03 BE 00 00 F7 C7 20 00 75 04 80 4E D7 04 8D ....... .u..N...
0800:17D0 46 DC 50 8D 46 DA 50 8B 46 DE 25 FF 7F 50 8B C6 F.P.F.P.F.%..P..
0800:17E0 50 FF 76 08 FF 76 06 FF 76 04 E8 60 03 83 C4 0E P.v..v..v..`....
0800:17F0 83 7E DC 00 7E 18 F6 46 D7 01 75 0F FF 46 D8 E8 .~..~..F..u..F..
0800:1800 87 FE AB F6 46 D7 04 74 02 92 AB E9 96 FE 7C 03 ....F..t......|.
0800:1810 E9 6D 02 E9 56 02 E8 00 00 E9 6B 02 FF 76 08 50 .m..V.....k..v.P
0800:1820 FF 56 06 59 59 FF 4E DA 81 66 DE FF 7F E8 00 00 .V.YY.N..f......
0800:1830 E9 7A 02 52 3C 3A 74 15 0B C0 7E 0C FF 76 08 50 .z.R<:t...~..v.P
0800:1840 FF 56 06 59 59 FF 4E DA 5A 8C DB EB 1B E8 00 00 .V.YY.N.Z.......
0800:1850 E9 5A 02 5B 0B C0 7E 10 52 53 FF 76 08 50 FF 56 .Z.[..~.RS.v.P.V
0800:1860 06 59 59 FF 4E DA 5B 5A F6 46 D7 01 75 10 E8 18 .YY.N.[Z.F..u...
0800:1870 FE FF 46 D8 92 AB F6 46 D7 20 74 02 93 AB E9 23 ..F....F. t....#
0800:1880 FE 7C 03 E9 FA 01 E9 E3 01 8D 46 DC 50 8D 46 DA .|........F.P.F.
0800:1890 50 B8 FF 7F 23 46 DE 50 FF 76 08 FF 76 06 FF 76 P...#F.P.v..v..v
0800:18A0 04 E8 6F 02 83 C4 0C 83 7E DC 00 7E 38 F6 46 D7 ..o.....~..~8.F.
0800:18B0 01 74 03 EB 2A 90 E8 D0 FD FF 46 D8 F6 46 D7 04 .t..*.....F..F..
0800:18C0 74 05 B8 04 00 EB 0D F6 46 D7 08 74 05 B8 08 00 t.......F..t....
0800:18D0 EB 02 33 C0 50 57 E8 3E 02 83 C4 04 E9 C5 FD E8 ..3.PW.>........
0800:18E0 39 02 E9 BF FD E8 33 02 7C 9C E9 93 01 E8 00 00 9.....3.|.......
0800:18F0 E9 94 01 F6 46 D7 01 75 06 E8 8D FD FF 46 D8 81 ....F..u.....F..
0800:1900 66 DE FF 7F 74 29 F6 46 D7 01 75 01 AA FF 46 DA f...t).F..u...F.
0800:1910 06 FF 76 08 FF 56 04 59 07 0B C0 7E 12 0A C0 78 ..v..V.Y...~...x
0800:1920 09 93 80 BF 2A 05 01 93 7E 05 FF 4E DE 7F D7 06 ....*...~..N....
0800:1930 FF 76 08 50 FF 56 06 59 59 07 FF 4E DA F6 46 D7 .v.P.V.YY..N..F.
0800:1940 01 75 03 B0 00 AA E9 5B FD F6 46 D7 01 75 03 E8 .u.....[..F..u..
0800:1950 37 FD 8B 76 DE 0B F6 7D 03 BE 01 00 74 1A FF 46 7..v...}....t..F
0800:1960 DA 06 FF 76 08 FF 56 04 59 07 F6 46 D7 01 75 01 ...v..V.Y..F..u.
0800:1970 AA 0B C0 7C 0F 4E 7F E6 F6 46 D7 01 75 03 FF 46 ...|.N...F..u..F
0800:1980 D8 E9 20 FD E9 E5 00 2B C0 FC 16 07 8D 7E E0 B9 .. ....+.....~..
0800:1990 10 00 F3 AB AC 80 66 D7 EF 3C 5E 75 05 80 4E D7 ......f..<^u..N.
0800:19A0 10 AC B4 00 8A D0 8B F8 B1 03 D3 EF B9 07 01 22 ..............."
0800:19B0 CA D2 E5 08 6B E0 AC 3C 00 74 26 3C 5D 74 25 3C ....k..<.t&<]t%<
0800:19C0 2D 75 E1 3A 14 77 DD 80 3C 5D 74 D8 AC 2A C2 74 -u.:.w..<]t..*.t
0800:19D0 E5 02 D0 D0 C5 83 D7 00 08 6B E0 FE C8 75 F4 EB .........k...u..
0800:19E0 D5 E9 9C 00 89 76 0A 81 66 DE FF 7F 8B 76 DE F6 .....v..f....v..
0800:19F0 46 D7 01 75 03 E8 91 FC 4E 7C 50 FF 46 DA 06 FF F..u....N|P.F...
0800:1A00 76 08 FF 56 04 59 07 0B C0 7C 4F 96 8B DE B1 03 v..V.Y...|O.....
0800:1A10 D3 EE B9 07 01 22 CB D2 E5 84 6A E0 96 93 74 08 ....."....j...t.
0800:1A20 F6 46 D7 10 74 08 EB 0F F6 46 D7 10 74 09 F6 46 .F..t....F..t..F
0800:1A30 D7 01 75 C4 AA EB C1 06 FF 76 08 50 FF 56 06 59 ..u......v.P.V.Y
0800:1A40 59 07 FF 4E DA 46 3B 76 DE 7D 09 F6 46 D7 01 75 Y..N.F;v.}..F..u
0800:1A50 06 FF 46 D8 B0 00 AA E9 4A FC 46 3B 76 DE 7D 0C ..F.....J.F;v.}.
0800:1A60 F6 46 D7 01 75 06 B0 00 AA FF 46 D8             .F..u.....F.   

l0800_1A6C:
	push	word ptr [bp+08]
	mov	ax,FFFF
	push	ax
	call	word ptr [bp+06]
	pop	cx
	pop	cx
	cmp	word ptr [bp-28],01
	sbb	word ptr [bp-28],00

l0800_1A80:
	pop	es
	mov	ax,[bp-28]
	jmp	1B0D
0800:1A87                      FF 46 DA FF 76 08 FF 56 04        .F..v..V.
0800:1A90 59 0B C0 7E 13 0A C0 78 09 93 80 BF 2A 05 01 93 Y..~...x....*...
0800:1AA0 74 E5 59 83 C1 03 FF E1 74 F8 59 EB BF 2B D2 B9 t.Y.....t.Y..+..
0800:1AB0 04 00 FF 4E DE 7C 45 52 51 FF 46 DA FF 76 08 FF ...N.|ERQ.F..v..
0800:1AC0 56 04 59 59 5A 0B C0 7E 35 FE C9 7C 31 8A E8 80 V.YYZ..~5..|1...
0800:1AD0 ED 30 72 2A 80 FD 0A 72 17 80 ED 11 72 20 80 FD .0r*...r....r ..
0800:1AE0 06 72 0A 80 ED 20 72 16 80 FD 06 73 11 80 C5 0A .r... r....s....
0800:1AF0 D1 E2 D1 E2 D1 E2 D1 E2 02 D5 EB B6 2B C0 80 F9 ............+...
0800:1B00 04 74 06 59 83 C1 03 FF E1 59 E9 5F FF          .t.Y.....Y._.  

l0800_1B0D:
	pop	di
	pop	si
	mov	sp,bp
	pop	bp
	ret	
0800:1B13          FF 26 B2 05 FF 26 B4 05 FF 26 B6 05 53    .&...&...&..S
0800:1B20 80 EB 30 72 23 80 FB 09 76 12 80 FB 2A 77 05 80 ..0r#...v...*w..
0800:1B30 EB 07 EB 03 80 EB 27 80 FB 09 76 0C 3A D9 73 08 ......'...v.:.s.
0800:1B40 83 C4 02 F8 B7 00 EB 04 5B F9 EB FA C3 55 8B EC ........[....U..
0800:1B50 83 EC 06 56 57 C6 46 FB 00 C7 46 FC 00 00 C7 46 ...VW.F...F....F
0800:1B60 FE 01 00 06 BF 11 02 FF 46 FC FF 76 08 FF 56 04 ........F..v..V.
0800:1B70 59 0B C0 7C 66 98 93 F6 C3 80 75 05 F6 01 01 75 Y..|f.....u....u
0800:1B80 E6 93 FF 4E 0C 7C 5B 3C 2B 74 07 3C 2D 75 16 FE ...N.|[<+t.<-u..
0800:1B90 46 FB FF 4E 0C 7C 4B FF 46 FC FF 76 08 FF 56 04 F..N.|K.F..v..V.
0800:1BA0 59 0B C0 7C 36 2B F6 8B FE 8B 4E 0A E3 4E 83 F9 Y..|6+....N..N..
0800:1BB0 24 77 2F 80 F9 02 72 2A 3C 30 75 6C 80 F9 10 75 $w/...r*<0ul...u
0800:1BC0 65 FF 4E 0C 7C 33 FF 46 FC FF 76 08 FF 56 04 59 e.N.|3.F..v..V.Y
0800:1BD0 3C 78 74 52 3C 58 74 4E EB 74 90 C7 46 FE FF FF <xtR<XtN.t..F...
0800:1BE0 EB 05 C7 46 FE 00 00 FF 76 08 50 FF 56 06 59 59 ...F....v.P.V.YY
0800:1BF0 FF 4E FC 2B C0 99 E9 A7 00 E9 94 00 3C 30 C7 46 .N.+........<0.F
0800:1C00 0A 0A 00 75 23 FF 4E 0C 7C EF FF 46 FC FF 76 08 ...u#.N.|..F..v.
0800:1C10 FF 56 04 59 C7 46 0A 08 00 3C 78 74 04 3C 58 75 .V.Y.F...<xt.<Xu
0800:1C20 2D C7 46 0A 10 00 EB 17 8B 4E 0A 93 E8 F0 FE 93 -.F......N......
0800:1C30 72 B0 96 EB 0A 96 F7 66 0A 03 F0 13 FA 75 2C FF r......f.....u,.
0800:1C40 4E 0C 7C 4C FF 46 FC FF 76 08 FF 56 04 59 8B 4E N.|L.F..v..V.Y.N
0800:1C50 0A 93 E8 CA FE 93 73 DD EB 2A 96 F7 E1 97 87 CA ......s..*......
0800:1C60 F7 E2 03 F7 13 C1 97 12 D6 75 48 FF 4E 0C 7C 20 .........uH.N.| 
0800:1C70 FF 46 FC FF 76 08 FF 56 04 59 8B 4E 0A 93 E8 9E .F..v..V.Y.N....
0800:1C80 FE 93 73 D6 FF 76 08 50 FF 56 06 59 59 FF 4E FC ..s..v.P.V.YY.N.
0800:1C90 8B D7 96 80 7E FB 00 74 07 F7 DA F7 D8 83 DA 00 ....~..t........
0800:1CA0 8B 7E 0E 8B 5E FC 01 1D 8B 7E 10 8B 5E FE 89 1D .~..^....~..^...
0800:1CB0 07 EB 16 B8 FF FF BA FF 7F 02 46 FB 80 D4 00 83 ..........F.....
0800:1CC0 D2 00 C7 46 FE 02 00 EB D7 5F 5E 8B E5 5D C3 55 ...F....._^..].U
0800:1CD0 8B EC B8 01 00 50 33 C0 50 50 FF 76 04 E8 C9 EE .....P3.PP.v....
0800:1CE0 8B E5 EB 00 5D C3 55 8B EC 56 8B 76 06 83 7E 04 ....].U..V.v..~.
0800:1CF0 FF 74 35 FF 04 8B 04 3D 01 00 7E 11 8A 46 04 FF .t5....=..~..F..
0800:1D00 4C 0A 8B 5C 0A 88 07 B4 00 EB 22 EB 1B 83 3C 01 L..\......"...<.
0800:1D10 75 14 8B C6 05 05 00 89 44 0A 8A 46 04 88 44 05 u.......D..F..D.
0800:1D20 B4 00 EB 09 EB 02 FF 0C B8 FF FF EB 00 5E 5D C3 .............^].
09D3:0000 00 00 00 00 54 75 72 62 6F 2D 43 20 2D 20 43 6F ....Turbo-C - Co
09D3:0010 70 79 72 69 67 68 74 20 28 63 29 20 31 39 38 38 pyright (c) 1988
09D3:0020 20 42 6F 72 6C 61 6E 64 20 49 6E 74 6C 2E 00 4E  Borland Intl..N
09D3:0030 75 6C 6C 20 70 6F 69 6E 74 65 72 20 61 73 73 69 ull pointer assi
09D3:0040 67 6E 6D 65 6E 74 0D 0A 44 69 76 69 64 65 20 65 gnment..Divide e
09D3:0050 72 72 6F 72 0D 0A 41 62 6E 6F 72 6D 61 6C 20 70 rror..Abnormal p
09D3:0060 72 6F 67 72 61 6D 20 74 65 72 6D 69 6E 61 74 69 rogram terminati
09D3:0070 6F 6E 0D 0A 00 00 00 00 00 00 00 00 00 00 00 00 on..............
09D3:0080 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:0090 00 00 00 00 00 00 00 00 00 00 00 00 FE 05 FE 05 ................
09D3:00A0 FE 05 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:00B0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:00C0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:00D0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:00E0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:00F0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:0100 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:0110 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:0120 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:0130 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:0140 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:0150 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:0160 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:0170 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:0180 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:0190 00 00 00 00 25 64 00 25 64 00 25 64 20 25 64 00 ....%d.%d.%d %d.
09D3:01A0 25 6C 64 20 25 6C 64 00 00 00 00 13 02 02 04 05 %ld %ld.........
09D3:01B0 06 08 08 08 14 15 05 13 FF 16 05 11 02 FF FF FF ................
09D3:01C0 FF FF FF FF FF FF FF FF FF FF 05 05 FF FF FF FF ................
09D3:01D0 FF FF FF FF FF FF FF FF FF FF FF FF 0F FF 23 02 ..............#.
09D3:01E0 FF 0F FF FF FF FF 13 FF FF 02 02 05 0F 02 FF FF ................
09D3:01F0 FF 13 FF FF FF FF FF FF FF FF 23 FF FF FF FF 23 ..........#....#
09D3:0200 FF 13 FF 00 81 02 81 02 81 02 00 00 00 10 00 00 ................
09D3:0210 00 20 20 20 20 20 20 20 20 20 21 21 21 21 21 20 .         !!!!! 
09D3:0220 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20                 
09D3:0230 20 01 40 40 40 40 40 40 40 40 40 40 40 40 40 40  .@@@@@@@@@@@@@@
09D3:0240 40 02 02 02 02 02 02 02 02 02 02 40 40 40 40 40 @..........@@@@@
09D3:0250 40 40 14 14 14 14 14 14 04 04 04 04 04 04 04 04 @@..............
09D3:0260 04 04 04 04 04 04 04 04 04 04 04 04 40 40 40 40 ............@@@@
09D3:0270 40 40 18 18 18 18 18 18 08 08 08 08 08 08 08 08 @@..............
09D3:0280 08 08 08 08 08 08 08 08 08 08 08 08 40 40 40 40 ............@@@@
09D3:0290 20 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00  ...............
09D3:02A0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:02B0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:02C0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:02D0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:02E0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:02F0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:0300 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:0310 00 00 00 00 09 02 00 00 00 00 00 00 00 00 00 00 ................
09D3:0320 12 03 00 00 0A 02 01 00 00 00 00 00 00 00 00 00 ................
09D3:0330 22 03 00 00 02 02 02 00 00 00 00 00 00 00 00 00 "...............
09D3:0340 32 03 00 00 43 02 03 00 00 00 00 00 00 00 00 00 2...C...........
09D3:0350 42 03 00 00 42 02 04 00 00 00 00 00 00 00 00 00 B...B...........
09D3:0360 52 03 00 00 00 00 FF 00 00 00 00 00 00 00 00 00 R...............
09D3:0370 62 03 00 00 00 00 FF 00 00 00 00 00 00 00 00 00 b...............
09D3:0380 72 03 00 00 00 00 FF 00 00 00 00 00 00 00 00 00 r...............
09D3:0390 82 03 00 00 00 00 FF 00 00 00 00 00 00 00 00 00 ................
09D3:03A0 92 03 00 00 00 00 FF 00 00 00 00 00 00 00 00 00 ................
09D3:03B0 A2 03 00 00 00 00 FF 00 00 00 00 00 00 00 00 00 ................
09D3:03C0 B2 03 00 00 00 00 FF 00 00 00 00 00 00 00 00 00 ................
09D3:03D0 C2 03 00 00 00 00 FF 00 00 00 00 00 00 00 00 00 ................
09D3:03E0 D2 03 00 00 00 00 FF 00 00 00 00 00 00 00 00 00 ................
09D3:03F0 E2 03 00 00 00 00 FF 00 00 00 00 00 00 00 00 00 ................
09D3:0400 F2 03 00 00 00 00 FF 00 00 00 00 00 00 00 00 00 ................
09D3:0410 02 04 00 00 00 00 FF 00 00 00 00 00 00 00 00 00 ................
09D3:0420 12 04 00 00 00 00 FF 00 00 00 00 00 00 00 00 00 ................
09D3:0430 22 04 00 00 00 00 FF 00 00 00 00 00 00 00 00 00 "...............
09D3:0440 32 04 00 00 00 00 FF 00 00 00 00 00 00 00 00 00 2...............
09D3:0450 42 04 01 20 02 20 02 20 04 A0 02 A0 FF FF FF FF B.. . . ........
09D3:0460 FF FF FF FF FF FF FF FF FF FF FF FF FF FF FF FF ................
09D3:0470 FF FF FF FF FF FF FF FF FF FF 00 00 00 00 70 72 ..............pr
09D3:0480 69 6E 74 20 73 63 61 6E 66 20 3A 20 66 6C 6F 61 int scanf : floa
09D3:0490 74 69 6E 67 20 70 6F 69 6E 74 20 66 6F 72 6D 61 ting point forma
09D3:04A0 74 73 20 6E 6F 74 20 6C 69 6E 6B 65 64 0D 0A 00 ts not linked...
09D3:04B0 0D 00 28 6E 75 6C 6C 29 00 30 31 32 33 34 35 36 ..(null).0123456
09D3:04C0 37 38 39 41 42 43 44 45 46 00 14 14 01 14 15 14 789ABCDEF.......
09D3:04D0 14 14 14 02 00 14 03 04 14 09 05 05 05 05 05 05 ................
09D3:04E0 05 05 05 14 14 14 14 14 14 14 14 14 14 14 0F 17 ................
09D3:04F0 0F 08 14 14 14 07 14 16 14 14 14 14 14 14 14 14 ................
09D3:0500 14 0D 14 14 14 14 14 14 14 14 14 14 10 0A 0F 0F ................
09D3:0510 0F 08 0A 14 14 06 14 12 0B 0E 14 14 11 14 0C 14 ................
09D3:0520 14 0D 14 14 14 14 14 14 14 00 00 02 02 02 02 02 ................
09D3:0530 02 02 02 01 01 01 01 01 02 02 02 02 02 02 02 02 ................
09D3:0540 02 02 02 02 02 02 02 02 02 02 01 02 02 02 02 03 ................
09D3:0550 02 02 02 02 04 02 02 02 02 02 05 05 05 05 05 05 ................
09D3:0560 05 05 05 05 02 02 02 02 02 02 02 02 02 02 07 0A ................
09D3:0570 15 0A 0C 09 02 02 0B 02 14 0E 02 02 02 02 02 08 ................
09D3:0580 02 02 12 02 02 10 02 10 02 02 02 02 02 06 07 0A ................
09D3:0590 0A 0A 0C 09 02 02 0D 02 11 0E 13 02 02 0F 02 08 ................
09D3:05A0 02 02 12 02 02 02 02 02 02 02 D2 01 D2 01 D9 01 ................
09D3:05B0 BF 0C C4 0C C4 0C C4 0C 00 00 00 00 00 00 00 00 ................
09D3:05C0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:05D0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:05E0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:05F0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:0600 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:0610 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:0620 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:0630 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:0640 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:0650 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:0660 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:0670 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
09D3:0680 FB 52 08 02 33 05 00 00 98 00 1B 00 00 00 6E 00 .R..3.........n.
09D3:0690 6A 00 27 00 00 00 02 00 06 00 01 00 01 00 01 00 j.'.............
09D3:06A0 E8 24 00 00 00 00 00 00 01 00 00 00 00 00 00 00 .$..............
09D3:06B0 01 00 00 00 00 00 00 00 01 02 00 00 00 21 01 00 .............!..
09D3:06C0 00 00 03 00 00 00 A5 01 00 00 00 04 00 00 00 E2 ................
