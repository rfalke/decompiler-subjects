
fn0800_0000()
	mov	dx,091B
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
	mov	di,[020A]
	cmp	di,0200
	jnc	0090

l0800_0089:
	mov	di,0200
	mov	[020A],di

l0800_0090:
	add	di,0476
	jc	00BE

l0800_0096:
	add	di,[0208]
	jc	00BE

l0800_009C:
	mov	cl,04
	shr	di,cl
	inc	di
	cmp	bp,di
	jc	00BE

l0800_00A5:
	cmp	word ptr [020A],00
	jz	00B3

l0800_00AC:
	cmp	word ptr [0208],00
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
	mov	di,0430
	mov	cx,0476
	sub	cx,di

l0800_00F1:
	rep	
	stosb	

l0800_00F3:
	push	cs
	call	word ptr [0422]
	call	032F
	call	041A
	mov	ah,00
	int	1A
	mov	[0098],dx
	mov	[009A],cx
	call	word ptr [0426]
	push	word ptr [0088]
	push	word ptr [0086]
	push	word ptr [0084]
	call	01FA
	push	ax
	call	02FA

fn0800_0121()
	mov	ds,cs:[01F8]
	call	01A5
	push	cs
	call	word ptr [0424]
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
	mov	word ptr [bp-06],0000
	mov	word ptr [bp-08],00FF
	mov	word ptr [bp-02],0000
	mov	word ptr [bp-04],008F
	mov	dx,[bp-06]
	mov	ax,[bp-08]
	add	ax,[bp-04]
	adc	dx,[bp-02]
	mov	[bp-02],dx
	mov	[bp-04],ax
	mov	dx,[bp-06]
	mov	ax,[bp-08]
	sub	ax,[bp-04]
	sbb	dx,[bp-02]
	mov	[bp-06],dx
	mov	[bp-08],ax
	mov	dx,[bp-06]
	mov	ax,[bp-08]
	mov	cx,[bp-02]
	mov	bx,[bp-04]
	call	far 0800:08C3
	mov	[bp-06],dx
	mov	[bp-08],ax
	push	word ptr [bp-06]
	push	word ptr [bp-08]
	push	word ptr [bp-02]
	push	word ptr [bp-04]
	call	far 0800:10C6
	mov	[bp-02],dx
	mov	[bp-04],ax
	push	word ptr [bp-06]
	push	word ptr [bp-08]
	push	word ptr [bp-02]
	push	word ptr [bp-04]
	call	far 0800:10CF
	mov	[bp-02],dx
	mov	[bp-04],ax
	mov	dx,[bp-06]
	mov	ax,[bp-08]
	mov	cl,05
	call	far 0800:1187
	mov	[bp-06],dx
	mov	[bp-08],ax
	mov	dx,[bp-02]
	mov	ax,[bp-04]
	mov	cl,[bp-08]
	call	far 0800:1169
	mov	[bp-02],dx
	mov	[bp-04],ax
	push	word ptr [bp-02]
	push	word ptr [bp-04]
	push	word ptr [bp-06]
	push	word ptr [bp-08]
	mov	ax,0194
	push	ax
	call	097B
	add	sp,0A
	mov	sp,bp
	pop	bp
	ret	
0800:02BE                                           55 8B               U.
0800:02C0 EC 56 8B 76 04 0B F6 7C 14 83 FE 58 76 03 BE 57 .V.v...|...Xv..W
0800:02D0 00 89 36 A6 01 8A 84 A8 01 98 96 EB 0D F7 DE 83 ..6.............
0800:02E0 FE 23 77 EA C7 06 A6 01 FF FF 8B C6 A3 94 00 B8 .#w.............
0800:02F0 FF FF EB 00 5E 5D C2 02 00 C3                   ....^]....     

fn0800_02FA()
	push	bp
	mov	bp,sp
	jmp	0309

l0800_02FF:
	mov	bx,[020C]
	shl	bx,01
	call	word ptr [bx+0430]

l0800_0309:
	mov	ax,[020C]
	dec	word ptr [020C]
	or	ax,ax
	jnz	02FF

l0800_0314:
	call	word ptr [0202]
	call	word ptr [0204]
	call	word ptr [0206]
	push	word ptr [bp+04]
	call	0121
	pop	cx
	pop	bp
	ret	
0800:0329                            00 00 00 00 00 00             ......

fn0800_032F()
	pop	word ptr cs:[0329]
	mov	cs:[032B],ds
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
	jc	036D

l0800_035C:
	mov	es,[008C]
	mov	di,si
	mov	cl,7F
	xor	al,al

l0800_0366:
	repne	
	scasb	

l0800_0368:
	jcxz	03E0

l0800_036A:
	xor	cl,7F

l0800_036D:
	sub	sp,02
	mov	ax,0001
	add	ax,bx
	add	ax,cx
	and	ax,FFFE
	mov	di,sp
	sub	di,ax
	jc	03E0

l0800_0380:
	mov	sp,di
	mov	ax,es
	mov	ds,ax
	mov	ax,ss
	mov	es,ax
	push	cx
	dec	cx

l0800_038C:
	rep	
	movsb	

l0800_038E:
	xor	al,al
	stosb	
	mov	ds,bp
	xchg	dx,si
	xchg	cx,bx
	mov	ax,bx
	mov	dx,ax
	inc	bx

l0800_039C:
	call	03B8
	ja	03A8

l0800_03A1:
	jc	03E3

l0800_03A3:
	call	03B8
	ja	03A1

l0800_03A8:
	cmp	al,20
	jz	03B4

l0800_03AC:
	cmp	al,0D
	jz	03B4

l0800_03B0:
	cmp	al,09
	jnz	039C

l0800_03B4:
	xor	al,al
	jmp	039C

fn0800_03B8()
	or	ax,ax
	jz	03C3

l0800_03BC:
	inc	dx
	stosb	
	or	al,al
	jnz	03C3

l0800_03C2:
	inc	bx

l0800_03C3:
	xchg	al,ah
	xor	al,al
	stc	
	jcxz	03DF

l0800_03CA:
	lodsb	
	dec	cx
	sub	al,22
	jz	03DF

l0800_03D0:
	add	al,22
	cmp	al,5C
	jnz	03DD

l0800_03D6:
	cmp	byte ptr [si],22
	jnz	03DD

l0800_03DB:
	lodsb	
	dec	cx

l0800_03DD:
	or	si,si

l0800_03DF:
	ret	

l0800_03E0:
	jmp	01E2

l0800_03E3:
	pop	cx
	add	cx,dx
	mov	ds,cs:[032B]
	mov	[0084],bx
	inc	bx
	add	bx,bx
	mov	si,sp
	mov	bp,sp
	sub	bp,bx
	jc	03E0

l0800_03FA:
	mov	sp,bp
	mov	[0086],bp

l0800_0400:
	jcxz	0410

l0800_0402:
	mov	[bp+00],si
	add	bp,02

l0800_0408:
	lodsb	
	or	al,al
	loopne	0408

l0800_040E:
	jz	0400

l0800_0410:
	xor	ax,ax
	mov	[bp+00],ax
	jmp	word ptr cs:[0329]

fn0800_041A()
	mov	cx,[008A]
	push	cx
	call	0569
	pop	cx
	mov	di,ax
	or	ax,ax
	jz	044D

l0800_0429:
	push	ds
	push	ds
	pop	es
	mov	ds,[008C]
	xor	si,si
	cld	

l0800_0433:
	rep	
	movsb	

l0800_0435:
	pop	ds
	mov	di,ax
	push	es
	push	word ptr [008E]
	call	0569
	add	sp,02
	mov	bx,ax
	pop	es
	mov	[0088],ax
	or	ax,ax
	jnz	0450

l0800_044D:
	jmp	01E2

l0800_0450:
	xor	ax,ax
	mov	cx,FFFF

l0800_0455:
	mov	[bx],di
	add	bx,02

l0800_045A:
	repne	
	scasb	

l0800_045C:
	cmp	es:[di],al
	jnz	0455

l0800_0461:
	mov	[bx],ax
	ret	
0800:0464             55 8B EC 83 3E 0C 02 20 75 05 B8 01     U...>.. u...
0800:0470 00 EB 15 8B 46 04 8B 1E 0C 02 D1 E3 89 87 30 04 ....F.........0.
0800:0480 FF 06 0C 02 33 C0 EB 00 5D C3                   ....3...].     

fn0800_048A()
	push	bp
	mov	bp,sp
	push	si
	push	di
	mov	di,[bp+04]
	mov	ax,[di+06]
	mov	[0472],ax
	cmp	ax,di
	jnz	04A4

l0800_049C:
	mov	word ptr [0472],0000
	jmp	04B4

l0800_04A4:
	mov	si,[di+04]
	mov	bx,[0472]
	mov	[bx+04],si
	mov	ax,[0472]
	mov	[si+06],ax

l0800_04B4:
	pop	di
	pop	si
	pop	bp
	ret	

fn0800_04B8()
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
	mov	ax,[0470]
	cmp	ax,di
	jnz	04DF

l0800_04D9:
	mov	[0470],si
	jmp	04E7

l0800_04DF:
	mov	di,si
	add	di,[bp+06]
	mov	[di+02],si

l0800_04E7:
	mov	ax,si
	add	ax,0004
	jmp	04EE

l0800_04EE:
	pop	di
	pop	si
	pop	bp
	ret	

fn0800_04F2()
	push	bp
	mov	bp,sp
	push	si
	mov	ax,[bp+04]
	xor	dx,dx
	and	ax,FFFF
	and	dx,0000
	push	dx
	push	ax
	call	0600
	pop	cx
	pop	cx
	mov	si,ax
	cmp	si,FF
	jnz	0514

l0800_0510:
	xor	ax,ax
	jmp	052C

l0800_0514:
	mov	ax,[0470]
	mov	[si+02],ax
	mov	ax,[bp+04]
	inc	ax
	mov	[si],ax
	mov	[0470],si
	mov	ax,[0470]
	add	ax,0004
	jmp	052C

l0800_052C:
	pop	si
	pop	bp
	ret	

fn0800_052F()
	push	bp
	mov	bp,sp
	push	si
	mov	ax,[bp+04]
	xor	dx,dx
	and	ax,FFFF
	and	dx,0000
	push	dx
	push	ax
	call	0600
	pop	cx
	pop	cx
	mov	si,ax
	cmp	si,FF
	jnz	0551

l0800_054D:
	xor	ax,ax
	jmp	0566

l0800_0551:
	mov	[0474],si
	mov	[0470],si
	mov	ax,[bp+04]
	inc	ax
	mov	[si],ax
	mov	ax,si
	add	ax,0004
	jmp	0566

l0800_0566:
	pop	si
	pop	bp
	ret	

fn0800_0569()
	push	bp
	mov	bp,sp
	push	si
	push	di
	mov	di,[bp+04]
	or	di,di
	jz	057A

l0800_0575:
	cmp	di,F4
	jbe	057E

l0800_057A:
	xor	ax,ax
	jmp	05D8

l0800_057E:
	mov	ax,di
	add	ax,000B
	and	ax,FFF8
	mov	di,ax
	cmp	word ptr [0474],00
	jnz	0596

l0800_058F:
	push	di
	call	052F
	pop	cx
	jmp	05D8

l0800_0596:
	mov	si,[0472]
	mov	ax,si
	or	ax,ax
	jz	05D1

l0800_05A0:
	mov	ax,[si]
	mov	dx,di
	add	dx,28
	cmp	ax,dx
	jc	05B4

l0800_05AB:
	push	di
	push	si
	call	04B8
	pop	cx
	pop	cx
	jmp	05D8

l0800_05B4:
	mov	ax,[si]
	cmp	ax,di
	jc	05C8

l0800_05BA:
	push	si
	call	048A
	pop	cx
	inc	word ptr [si]
	mov	ax,si
	add	ax,0004
	jmp	05D8

l0800_05C8:
	mov	si,[si+06]
	cmp	si,[0472]
	jnz	05A0

l0800_05D1:
	push	di
	call	04F2
	pop	cx
	jmp	05D8

l0800_05D8:
	pop	di
	pop	si
	pop	bp
	ret	
0800:05DC                                     55 8B EC 8B             U...
0800:05E0 46 04 8B D4 81 EA 00 01 3B C2 73 07 A3 9E 00 33 F.......;.s....3
0800:05F0 C0 EB 0B C7 06 94 00 08 00 B8 FF FF EB 00 5D C3 ..............].

fn0800_0600()
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
	jnz	0627

l0800_061D:
	cmp	cx,sp
	jnc	0627

l0800_0621:
	xchg	[009E],ax
	jmp	0632

l0800_0627:
	mov	word ptr [0094],0008
	mov	ax,FFFF
	jmp	0632

l0800_0632:
	pop	bp
	ret	
0800:0634             55 8B EC FF 76 04 E8 9F FF 59 EB 00     U...v....Y..
0800:0640 5D C3 55 8B EC 8B 46 04 99 52 50 E8 B2 FF 8B E5 ].U...F..RP.....
0800:0650 EB 00 5D C3 55 8B EC 81 EC 8A 00 56 57 8B 46 08 ..].U......VW.F.
0800:0660 40 3D 02 00 73 05 33 C0 E9 F6 00 8B 5E 04 D1 E3 @=..s.3.....^...
0800:0670 F7 87 4E 03 00 80 74 12 FF 76 08 FF 76 06 FF 76 ..N...t..v..v..v
0800:0680 04 E8 E3 00 83 C4 06 E9 D7 00 8B 5E 04 D1 E3 81 ...........^....
0800:0690 A7 4E 03 FF FD 8B 46 06 89 86 7C FF 8B 46 08 89 .N....F...|..F..
0800:06A0 86 78 FF 8D B6 7E FF EB 6D FF 8E 78 FF 8B 9E 7C .x...~..m..x...|
0800:06B0 FF FF 86 7C FF 8A 07 88 86 7B FF 3C 0A 75 04 C6 ...|.....{.<.u..
0800:06C0 04 0D 46 8A 86 7B FF 88 04 46 8D 86 7E FF 8B D6 ..F..{...F..~...
0800:06D0 2B D0 81 FA 80 00 7C 3E 8D 86 7E FF 8B FE 2B F8 +.....|>..~...+.
0800:06E0 57 8D 86 7E FF 50 FF 76 04 E8 7B 00 83 C4 06 89 W..~.P.v..{.....
0800:06F0 86 76 FF 3B C7 74 1B 83 BE 76 FF 00 73 05 B8 FF .v.;.t...v..s...
0800:0700 FF EB 0D 8B 46 08 2B 86 78 FF 03 86 76 FF 2B C7 ....F.+.x...v.+.
0800:0710 EB 4F 8D B6 7E FF 83 BE 78 FF 00 74 03 E9 89 FF .O..~...x..t....
0800:0720 8D 86 7E FF 8B FE 2B F8 8B C7 0B C0 76 2E 57 8D ..~...+.....v.W.
0800:0730 86 7E FF 50 FF 76 04 E8 2D 00 83 C4 06 89 86 76 .~.P.v..-......v
0800:0740 FF 3B C7 74 17 83 BE 76 FF 00 73 05 B8 FF FF EB .;.t...v..s.....
0800:0750 09 8B 46 08 03 86 76 FF 2B C7 EB 05 8B 46 08 EB ..F...v.+....F..
0800:0760 00 5F 5E 8B E5 5D C3 55 8B EC 8B 5E 04 D1 E3 F7 ._^..].U...^....
0800:0770 87 4E 03 00 08 74 10 B8 02 00 50 33 C0 50 50 FF .N...t....P3.PP.
0800:0780 76 04 E8 28 00 8B E5 B4 40 8B 5E 04 8B 4E 08 8B v..(....@.^..N..
0800:0790 56 06 CD 21 72 0F 50 8B 5E 04 D1 E3 81 8F 4E 03 V..!r.P.^.....N.
0800:07A0 00 10 58 EB 06 50 E8 15 FB EB 00 5D C3 55 8B EC ..X..P.....].U..
0800:07B0 8B 5E 04 D1 E3 81 A7 4E 03 FF FD B4 42 8A 46 0A .^.....N....B.F.
0800:07C0 8B 5E 04 8B 4E 08 8B 56 06 CD 21 72 02 EB 07 50 .^..N..V..!r...P
0800:07D0 E8 EB FA 99 EB 00 5D C3 55 8B EC 83 EC 22 56 57 ......].U...."VW
0800:07E0 06 8B 7E 0A 1E 07 8B 5E 08 83 FB 24 77 58 80 FB ..~....^...$wX..
0800:07F0 02 72 53 8B 46 0C 8B 4E 0E 0B C9 7D 11 80 7E 06 .rS.F..N...}..~.
0800:0800 00 74 0B C6 05 2D 47 F7 D9 F7 D8 83 D9 00 8D 76 .t...-G........v
0800:0810 DE E3 0F 91 2B D2 F7 F3 91 F7 F3 88 14 46 E3 09 ....+........F..
0800:0820 EB F1 2B D2 F7 F3 88 14 46 0B C0 75 F5 8D 4E DE ..+.....F..u..N.
0800:0830 F7 D9 03 CE FC 4E 8A 04 2C 0A 73 04 04 3A EB 03 .....N..,.s..:..
0800:0840 02 46 04 AA E2 EF B0 00 AA 07 8B 46 0A EB 00 5F .F.........F..._
0800:0850 5E 8B E5 5D C2 0C 00 55 8B EC 83 7E 08 0A 75 06 ^..]...U...~..u.
0800:0860 8B 46 04 99 EB 05 8B 46 04 33 D2 52 50 FF 76 06 .F.....F.3.RP.v.
0800:0870 FF 76 08 B0 01 50 B0 61 50 E8 5C FF EB 00 5D C3 .v...P.aP.\...].
0800:0880 55 8B EC FF 76 06 FF 76 04 FF 76 08 FF 76 0A B0 U...v..v..v..v..
0800:0890 00 50 B0 61 50 E8 40 FF EB 00 5D C3 55 8B EC FF .P.aP.@...].U...
0800:08A0 76 06 FF 76 04 FF 76 08 FF 76 0A 83 7E 0A 0A 75 v..v..v..v..~..u
0800:08B0 05 B8 01 00 EB 02 33 C0 50 B0 61 50 E8 19 FF EB ......3.P.aP....
0800:08C0 00 5D C3                                        .].            

fn0800_08C3()
	push	si
	xchg	ax,si
	xchg	ax,dx
	test	ax,ax
	jz	08CC

l0800_08CA:
	mul	bx

l0800_08CC:
	xchg	ax,cx
	test	ax,ax
	jz	08D5

l0800_08D1:
	mul	si
	add	cx,ax

l0800_08D5:
	xchg	ax,si
	mul	bx
	add	dx,cx
	pop	si
	retf	
0800:08DC                                     BA 76 03 EB             .v..
0800:08E0 03 BA 7B 03 B9 05 00 90 B4 40 BB 02 00 CD 21 B9 ..{......@....!.
0800:08F0 27 00 90 BA 80 03 B4 40 CD 21 E9 E5 F8 55 8B EC '......@.!...U..
0800:0900 56 57 8B 76 04 8B 44 0E 3B C6 74 05 B8 FF FF EB VW.v..D.;.t.....
0800:0910 66 83 3C 00 7C 2D F7 44 02 08 00 75 0C 8B 44 0A f.<.|-.D...u..D.
0800:0920 8B D6 83 C2 05 3B C2 75 16 C7 04 00 00 8B 44 0A .....;.u......D.
0800:0930 8B D6 83 C2 05 3B C2 75 06 8B 44 08 89 44 0A 33 .....;.u..D..D.3
0800:0940 C0 EB 34 8B 7C 06 03 3C 47 29 3C 57 8B 44 08 89 ..4.|..<G)<W.D..
0800:0950 44 0A 50 8A 44 04 98 50 E8 F9 FC 83 C4 06 3B C7 D.P.D..P......;.
0800:0960 74 11 F7 44 02 00 02 75 0A 81 4C 02 10 00 B8 FF t..D...u..L.....
0800:0970 FF EB 04 33 C0 EB 00 5F 5E 5D C3                ...3..._^].    

fn0800_097B()
	push	bp
	mov	bp,sp
	mov	ax,0AB1
	push	ax
	mov	ax,021E
	push	ax
	push	word ptr [bp+04]
	lea	ax,[bp+06]
	push	ax
	call	0BA3
	jmp	0992

l0800_0992:
	pop	bp
	ret	
0800:0994             55 8B EC 8B 5E 06 FF 0F FF 76 06 8A     U...^....v..
0800:09A0 46 04 98 50 E8 06 00 8B E5 EB 00 5D C3 55 8B EC F..P.......].U..
0800:09B0 83 EC 02 56 8B 76 06 8A 46 04 88 46 FF FF 04 7D ...V.v..F..F...}
0800:09C0 36 8A 46 FF FF 44 0A 8B 5C 0A 88 47 FF F7 44 02 6.F..D..\..G..D.
0800:09D0 08 00 74 1B 80 7E FF 0A 74 06 80 7E FF 0D 75 0F ..t..~..t..~..u.
0800:09E0 56 E8 19 FF 59 0B C0 74 06 B8 FF FF E9 A7 00 8A V...Y..t........
0800:09F0 46 FF B4 00 E9 9F 00 FF 0C F7 44 02 90 00 75 07 F.........D...u.
0800:0A00 F7 44 02 02 00 75 0B 81 4C 02 10 00 B8 FF FF E9 .D...u..L.......
0800:0A10 84 00 81 4C 02 00 01 83 7C 06 00 74 24 83 3C 00 ...L....|..t$.<.
0800:0A20 74 10 56 E8 D7 FE 59 0B C0 74 05 B8 FF FF EB 66 t.V...Y..t.....f
0800:0A30 EB 0A 8B 44 06 BA FF FF 2B D0 89 14 E9 7E FF EB ...D....+....~..
0800:0A40 55 80 7E FF 0A 75 1F F7 44 02 40 00 75 18 B8 01 U.~..u..D.@.u...
0800:0A50 00 50 B8 A8 03 50 8A 44 04 98 50 E8 09 FD 83 C4 .P...P.D..P.....
0800:0A60 06 3D 01 00 75 18 B8 01 00 50 8D 46 04 50 8A 44 .=..u....P.F.P.D
0800:0A70 04 98 50 E8 F1 FC 83 C4 06 3D 01 00 74 11 F7 44 ..P......=..t..D
0800:0A80 02 00 02 75 0A 81 4C 02 10 00 B8 FF FF EB 07 8A ...u..L.........
0800:0A90 46 FF B4 00 EB 00 5E 8B E5 5D C3 55 8B EC 56 8B F.....^..].U..V.
0800:0AA0 76 04 B8 1E 02 50 56 E8 03 FF 59 59 EB 00 5E 5D v....PV...YY..^]
0800:0AB0 C3 55 8B EC 83 EC 02 56 57 8B 76 04 8B 7E 06 89 .U.....VW.v..~..
0800:0AC0 7E FE F7 44 02 08 00 74 26 EB 1A 56 8B 5E 08 FF ~..D...t&..V.^..
0800:0AD0 46 08 8A 07 98 50 E8 D4 FE 59 59 3D FF FF 75 05 F....P...YY=..u.
0800:0AE0 33 C0 E9 87 00 8B C7 4F 0B C0 75 DF E9 78 00 F7 3......O..u..x..
0800:0AF0 44 02 40 00 74 38 83 7C 06 00 74 32 8B 44 06 3B D.@.t8.|..t2.D.;
0800:0B00 C7 73 2B 83 3C 00 74 0D 56 E8 F1 FD 59 0B C0 74 .s+.<.t.V...Y..t
0800:0B10 04 33 C0 EB 57 57 FF 76 08 8A 44 04 98 50 E8 46 .3..WW.v..D..P.F
0800:0B20 FC 83 C4 06 3B C7 73 04 33 C0 EB 40 EB 39 EB 30 ....;.s.3..@.9.0
0800:0B30 FF 04 7D 15 8B 5E 08 FF 46 08 8A 07 FF 44 0A 8B ..}..^..F....D..
0800:0B40 5C 0A 88 47 FF B4 00 EB 0E 56 8B 5E 08 FF 46 08 \..G.....V.^..F.
0800:0B50 FF 37 E8 3F FE 59 59 3D FF FF 75 04 33 C0 EB 0C .7.?.YY=..u.3...
0800:0B60 8B C7 4F 0B C0 75 C9 8B 46 FE EB 00 5F 5E 8B E5 ..O..u..F..._^..
0800:0B70 5D C2 06 00 FF 26 28 04 55 8B EC 8B 56 04 B9 04 ]....&(.U...V...
0800:0B80 0F BB B1 03 FC 8A C6 D2 E8 D7 AA 8A C6 22 C5 D7 ............."..
0800:0B90 AA 8A C2 D2 E8 D7 AA 8A C2 22 C5 D7 AA EB 00 5D .........".....]
0800:0BA0 C2 02 00                                        ...            

fn0800_0BA3()
	push	bp
	mov	bp,sp
	sub	sp,0098
	push	si
	push	di
	mov	word ptr [bp-58],0000
	mov	byte ptr [bp-55],50
	mov	word ptr [bp-02],0000
	jmp	0BFD
0800:0BBC                                     57 B9 FF FF             W...
0800:0BC0 32 C0 F2 AE F7 D1 49 5F C3                      2.....I_.      

fn0800_0BC9()
	mov	[di],al
	inc	di
	dec	byte ptr [bp-55]
	jle	0BFC

fn0800_0BD1()
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
	jnz	0BEE

l0800_0BE9:
	mov	word ptr [bp-02],0001

l0800_0BEE:
	mov	byte ptr [bp-55],50
	add	[bp-58],di
	lea	di,[bp-54]
	pop	es
	pop	dx
	pop	cx
	pop	bx

l0800_0BFC:
	ret	

l0800_0BFD:
	push	es
	cld	
	lea	di,[bp-54]
	mov	[bp+FF6A],di
	mov	di,[bp+FF6A]
	mov	si,[bp+06]

l0800_0C0D:
	lodsb	
	or	al,al
	jz	0C23

l0800_0C12:
	cmp	al,25
	jz	0C26

l0800_0C16:
	mov	[di],al
	inc	di
	dec	byte ptr [bp-55]
	jg	0C0D

l0800_0C1E:
	call	0BD1
	jmp	0C0D

l0800_0C23:
	jmp	10A2

l0800_0C26:
	mov	[bp+FF76],si
	lodsb	
	cmp	al,25
	jz	0C16

l0800_0C2F:
	mov	[bp+FF6A],di
	xor	cx,cx
	mov	[bp+FF74],cx
	mov	[bp+FF68],cx
	mov	[bp+FF73],cl
	mov	word ptr [bp+FF6E],FFFF
	mov	word ptr [bp+FF70],FFFF
	jmp	0C50
0800:0C4F                                              AC                .

l0800_0C50:
	xor	ah,ah
	mov	dx,ax
	mov	bx,ax
	sub	bl,20
	cmp	bl,60
	jnc	0CA5

l0800_0C5E:
	mov	bl,[bx+03C1]
	mov	ax,bx
	cmp	ax,0017
	jbe	0C6C

l0800_0C69:
	jmp	1090

l0800_0C6C:
	mov	bx,ax
	shl	bx,01
	jmp	word ptr cs:[bx+0C75]
0800:0C75                C0 0C A8 0C 01 0D B4 0C 26 0D 30      ........&.0
0800:0C80 0D 72 0D 7C 0D 8C 0D E7 0C C1 0D 9C 0D A0 0D A4 .r.|............
0800:0C90 0D 46 0E F8 0E 99 0E B9 0E 63 10 90 10 90 10 90 .F.......c......
0800:0CA0 10 D3 0C DD 0C                                  .....          

l0800_0CA5:
	jmp	1090
0800:0CA8                         80 FD 00 77 F8 83 8E 68         ...w...h
0800:0CB0 FF 01 EB 9B 80 FD 00 77 EC 83 8E 68 FF 02 EB 8F .......w...h....
0800:0CC0 80 FD 00 77 E0 80 BE 73 FF 2B 74 04 88 96 73 FF ...w...s.+t...s.
0800:0CD0 E9 7C FF 83 A6 68 FF DF B5 05 E9 72 FF 83 8E 68 .|...h.....r...h
0800:0CE0 FF 20 B5 05 E9 68 FF 80 FD 00 77 44 F7 86 68 FF . ...h....wD..h.
0800:0CF0 02 00 75 21 83 8E 68 FF 08 B5 01 E9 51 FF E9 8F ..u!..h.....Q...
0800:0D00 03 8B 7E 04 8B 05 83 46 04 02 80 FD 02 73 09 89 ..~....F.....s..
0800:0D10 86 6E FF B5 03 E9 37 FF 80 FD 04 75 E1 89 86 70 .n....7....u...p
0800:0D20 FF FE C5 E9 29 FF 80 FD 04 73 D3 B5 04 E9 1F FF ....)....s......
0800:0D30 92 2C 30 98 80 FD 02 77 1B B5 02 87 86 6E FF 0B .,0....w.....n..
0800:0D40 C0 7C D2 D1 E0 8B D0 D1 E0 D1 E0 03 C2 01 86 6E .|.............n
0800:0D50 FF E9 FB FE 80 FD 04 75 A5 87 86 70 FF 0B C0 7C .......u...p...|
0800:0D60 B4 D1 E0 8B D0 D1 E0 D1 E0 03 C2 01 86 70 FF E9 .............p..
0800:0D70 DD FE 83 8E 68 FF 10 B5 05 E9 D3 FE 81 8E 68 FF ....h.........h.
0800:0D80 00 01 83 A6 68 FF EF B5 05 E9 C3 FE 83 A6 68 FF ....h.........h.
0800:0D90 EF 81 8E 68 FF 80 00 B5 05 E9 B3 FE B7 08 EB 0A ...h............
0800:0DA0 B7 0A EB 0B B7 10 B3 E9 02 DA C6 86 73 FF 00 C6 ............s...
0800:0DB0 86 6D FF 00 88 96 6C FF 8B 7E 04 8B 05 33 D2 EB .m....l..~...3..
0800:0DC0 11 B7 0A C6 86 6D FF 01 88 96 6C FF 8B 7E 04 8B .....m....l..~..
0800:0DD0 05 99 47 47 89 76 06 F7 86 68 FF 10 00 74 04 8B ..GG.v...h...t..
0800:0DE0 15 47 47 89 7E 04 8D BE 79 FF 0B C0 75 33 0B D2 .GG.~...y...u3..
0800:0DF0 75 2F 83 BE 70 FF 00 75 2D 8B BE 6A FF 8B 8E 6E u/..p..u-..j...n
0800:0E00 FF E3 1B 83 F9 FF 74 16 8B 86 68 FF 25 08 00 74 ......t...h.%..t
0800:0E10 04 B2 30 EB 02 B2 20 8A C2 E8 AD FD E2 F9 E9 E9 ..0... .........
0800:0E20 FD 83 8E 68 FF 04 52 50 57 8A C7 98 50 8A 86 6D ...h..RPW...P..m
0800:0E30 FF 50 53 E8 A2 F9 16 07 8B 96 70 FF 0B D2 7F 03 .PS.......p.....
0800:0E40 E9 14 01 E9 21 01 88 96 6C FF 89 76 06 8D BE 78 ....!...l..v...x
0800:0E50 FF 8B 5E 04 FF 37 43 43 89 5E 04 F7 86 68 FF 20 ..^..7CC.^...h. 
0800:0E60 00 74 0F FF 37 43 43 89 5E 04 16 07 E8 09 FD B0 .t..7CC.^.......
0800:0E70 3A AA 16 07 E8 01 FD C6 05 00 C6 86 6D FF 00 83 :...........m...
0800:0E80 A6 68 FF FB 8D 8E 78 FF 2B F9 87 CF 8B 96 70 FF .h....x.+.....p.
0800:0E90 3B D1 7F 02 8B D1 E9 BE 00 89 76 06 88 96 6C FF ;.........v...l.
0800:0EA0 8B 7E 04 8B 05 83 46 04 02 16 07 8D BE 79 FF 32 .~....F......y.2
0800:0EB0 E4 89 05 B9 01 00 E9 DF 00 89 76 06 88 96 6C FF ..........v...l.
0800:0EC0 8B 7E 04 F7 86 68 FF 20 00 75 0C 8B 3D 83 46 04 .~...h. .u..=.F.
0800:0ED0 02 1E 07 0B FF EB 0A C4 3D 83 46 04 04 8C C0 0B ........=.F.....
0800:0EE0 C7 75 05 1E 07 BF AA 03 E8 D1 FC 3B 8E 70 FF 76 .u.........;.p.v
0800:0EF0 04 8B 8E 70 FF E9 A0 00 89 76 06 88 96 6C FF 8B ...p.....v...l..
0800:0F00 7E 04 8B 8E 70 FF 0B C9 7D 03 B9 06 00 57 51 8D ~...p...}....WQ.
0800:0F10 9E 79 FF 53 52 B8 01 00 23 86 68 FF 50 8B 86 68 .y.SR...#.h.P..h
0800:0F20 FF A9 80 00 74 0A B8 02 00 C7 46 FC 04 00 EB 17 ....t.....F.....
0800:0F30 A9 00 01 74 0A B8 08 00 C7 46 FC 0A 00 EB 08 C7 ...t.....F......
0800:0F40 46 FC 08 00 B8 06 00 50 E8 29 FC 8B 46 FC 01 46 F......P.)..F..F
0800:0F50 04 16 07 8D BE 79 FF F7 86 68 FF 08 00 74 1A 8B .....y...h...t..
0800:0F60 96 6E FF 0B D2 7E 12 E8 52 FC 26 80 3D 2D 75 01 .n...~..R.&.=-u.
0800:0F70 49 2B D1 7E 04 89 96 74 FF 8A 86 73 FF 0A C0 74 I+.~...t...s...t
0800:0F80 14 26 80 3D 2D 74 0E 83 AE 74 FF 01 83 96 74 FF .&.=-t...t....t.
0800:0F90 00 4F 26 88 05 E8 24 FC 8B F7 8B BE 6A FF 8B 9E .O&...$.....j...
0800:0FA0 6E FF B8 05 00 23 86 68 FF 3D 05 00 75 16 8A A6 n....#.h.=..u...
0800:0FB0 6C FF 80 FC 6F 75 10 83 BE 74 FF 00 7F 06 C7 86 l...ou...t......
0800:0FC0 74 FF 01 00 EB 1F 90 80 FC 78 74 05 80 FC 58 75 t........xt...Xu
0800:0FD0 14 83 8E 68 FF 40 4B 4B 83 AE 74 FF 02 7D 06 C7 ...h.@KK..t..}..
0800:0FE0 86 74 FF 00 00 03 8E 74 FF F7 86 68 FF 02 00 75 .t.....t...h...u
0800:0FF0 0C EB 06 B0 20 E8 D1 FB 4B 3B D9 7F F6 F7 86 68 .... ...K;.....h
0800:1000 FF 40 00 74 0C B0 30 E8 BF FB 8A 86 6C FF E8 B8 .@.t..0.....l...
0800:1010 FB 8B 96 74 FF 0B D2 7E 27 2B CA 2B DA 26 8A 04 ...t...~'+.+.&..
0800:1020 3C 2D 74 08 3C 20 74 04 3C 2B 75 07 26 AC E8 98 <-t.< t.<+u.&...
0800:1030 FB 49 4B 87 CA E3 07 B0 30 E8 8D FB E2 F9 87 CA .IK.....0.......
0800:1040 E3 11 2B D9 26 AC 88 05 47 FE 4E AB 7F 03 E8 80 ..+.&...G.N.....
0800:1050 FB E2 F1 0B DB 7E 09 8B CB B0 20 E8 6B FB E2 F9 .....~.... .k...
0800:1060 E9 A7 FB 89 76 06 8B 7E 04 F7 86 68 FF 20 00 75 ....v..~...h. .u
0800:1070 0A 8B 3D 83 46 04 02 1E 07 EB 06 C4 3D 83 46 04 ..=.F.......=.F.
0800:1080 04 B8 50 00 2A 46 AB 03 46 A8 26 89 05 E9 76 FB ..P.*F..F.&...v.

l0800_1090:
	mov	si,[bp+FF76]
	mov	di,[bp+FF6A]
	mov	al,25

l0800_109A:
	call	0BC9
	lodsb	
	or	al,al
	jnz	109A

l0800_10A2:
	cmp	byte ptr [bp-55],50
	jge	10AB

l0800_10A8:
	call	0BD1

l0800_10AB:
	pop	es
	cmp	word ptr [bp-02],00
	jz	10B9

l0800_10B2:
	mov	ax,FFFF
	jmp	10BE
0800:10B7                      EB 05                             ..      

l0800_10B9:
	mov	ax,[bp-58]
	jmp	10BE

l0800_10BE:
	pop	di
	pop	si
	mov	sp,bp
	pop	bp
	ret	0008

fn0800_10C6()
	xor	cx,cx
	jmp	10D7
0800:10CA                               B9 01 00 EB 08              .....

fn0800_10CF()
	mov	cx,0002
	jmp	10D7
0800:10D4             B9 03 00                                ...        

fn0800_10D7()
	push	bp
	push	si
	push	di
	mov	bp,sp
	mov	di,cx
	mov	ax,[bp+0A]
	mov	dx,[bp+0C]
	mov	bx,[bp+0E]
	mov	cx,[bp+10]
	or	cx,cx
	jnz	10F6

l0800_10EE:
	or	dx,dx
	jz	115B

l0800_10F2:
	or	bx,bx
	jz	115B

l0800_10F6:
	test	di,0001
	jnz	1118

l0800_10FC:
	or	dx,dx
	jns	110A

l0800_1100:
	neg	dx
	neg	ax
	sbb	dx,00
	or	di,0C

l0800_110A:
	or	cx,cx
	jns	1118

l0800_110E:
	neg	cx
	neg	bx
	sbb	cx,00
	xor	di,04

l0800_1118:
	mov	bp,cx
	mov	cx,0020
	push	di
	xor	di,di
	xor	si,si

l0800_1122:
	shl	ax,01
	rcl	dx,01
	rcl	si,01
	rcl	di,01
	cmp	di,bp
	jc	1139

l0800_112E:
	ja	1134

l0800_1130:
	cmp	si,bx
	jc	1139

l0800_1134:
	sub	si,bx
	sbb	di,bp
	inc	ax

l0800_1139:
	loop	1122

l0800_113B:
	pop	bx
	test	bx,0002
	jz	1148

l0800_1142:
	mov	ax,si
	mov	dx,di
	shr	bx,01

l0800_1148:
	test	bx,0004
	jz	1155

l0800_114E:
	neg	dx
	neg	ax
	sbb	dx,00

l0800_1155:
	pop	di
	pop	si
	pop	bp
	retf	0008

l0800_115B:
	div	bx
	test	di,0002
	jz	1165

l0800_1163:
	mov	ax,dx

l0800_1165:
	xor	dx,dx
	jmp	1155

fn0800_1169()
	cmp	cl,10
	jnc	117E

l0800_116E:
	mov	bx,dx
	shr	ax,cl
	sar	dx,cl
	neg	cl
	add	cl,10
	shl	bx,cl
	or	ax,bx
	retf	

l0800_117E:
	sub	cl,10
	mov	ax,dx
	cwd	
	sar	ax,cl
	retf	

fn0800_1187()
	cmp	cl,10
	jnc	119C

l0800_118C:
	mov	bx,ax
	shl	ax,cl
	shl	dx,cl
	neg	cl
	add	cl,10
	shr	bx,cl
	or	dx,bx
	retf	

l0800_119C:
	sub	cl,10
	mov	dx,ax
	xor	ax,ax
	shl	dx,cl
	retf	
0800:11A6                   00 00 00 00 00 00 00 00 00 00       ..........
091B:0000 00 00 00 00 54 75 72 62 6F 2D 43 20 2D 20 43 6F ....Turbo-C - Co
091B:0010 70 79 72 69 67 68 74 20 28 63 29 20 31 39 38 38 pyright (c) 1988
091B:0020 20 42 6F 72 6C 61 6E 64 20 49 6E 74 6C 2E 00 4E  Borland Intl..N
091B:0030 75 6C 6C 20 70 6F 69 6E 74 65 72 20 61 73 73 69 ull pointer assi
091B:0040 67 6E 6D 65 6E 74 0D 0A 44 69 76 69 64 65 20 65 gnment..Divide e
091B:0050 72 72 6F 72 0D 0A 41 62 6E 6F 72 6D 61 6C 20 70 rror..Abnormal p
091B:0060 72 6F 67 72 61 6D 20 74 65 72 6D 69 6E 61 74 69 rogram terminati
091B:0070 6F 6E 0D 0A 00 00 00 00 00 00 00 00 00 00 00 00 on..............
091B:0080 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
091B:0090 00 00 00 00 00 00 00 00 00 00 00 00 76 04 76 04 ............v.v.
091B:00A0 76 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 v...............
091B:00B0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
091B:00C0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
091B:00D0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
091B:00E0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
091B:00F0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
091B:0100 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
091B:0110 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
091B:0120 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
091B:0130 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
091B:0140 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
091B:0150 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
091B:0160 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
091B:0170 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
091B:0180 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
091B:0190 00 00 00 00 61 20 3D 20 25 6C 64 2C 20 62 20 3D ....a = %ld, b =
091B:01A0 20 25 6C 64 0A 00 00 00 00 13 02 02 04 05 06 08  %ld............
091B:01B0 08 08 14 15 05 13 FF 16 05 11 02 FF FF FF FF FF ................
091B:01C0 FF FF FF FF FF FF FF FF 05 05 FF FF FF FF FF FF ................
091B:01D0 FF FF FF FF FF FF FF FF FF FF 0F FF 23 02 FF 0F ............#...
091B:01E0 FF FF FF FF 13 FF FF 02 02 05 0F 02 FF FF FF 13 ................
091B:01F0 FF FF FF FF FF FF FF FF 23 FF FF FF FF 23 FF 13 ........#....#..
091B:0200 FF 00 F9 02 F9 02 F9 02 00 00 00 10 00 00 00 00 ................
091B:0210 09 02 00 00 00 00 00 00 00 00 00 00 0E 02 00 00 ................
091B:0220 0A 02 01 00 00 00 00 00 00 00 00 00 1E 02 00 00 ................
091B:0230 02 02 02 00 00 00 00 00 00 00 00 00 2E 02 00 00 ................
091B:0240 43 02 03 00 00 00 00 00 00 00 00 00 3E 02 00 00 C...........>...
091B:0250 42 02 04 00 00 00 00 00 00 00 00 00 4E 02 00 00 B...........N...
091B:0260 00 00 FF 00 00 00 00 00 00 00 00 00 5E 02 00 00 ............^...
091B:0270 00 00 FF 00 00 00 00 00 00 00 00 00 6E 02 00 00 ............n...
091B:0280 00 00 FF 00 00 00 00 00 00 00 00 00 7E 02 00 00 ............~...
091B:0290 00 00 FF 00 00 00 00 00 00 00 00 00 8E 02 00 00 ................
091B:02A0 00 00 FF 00 00 00 00 00 00 00 00 00 9E 02 00 00 ................
091B:02B0 00 00 FF 00 00 00 00 00 00 00 00 00 AE 02 00 00 ................
091B:02C0 00 00 FF 00 00 00 00 00 00 00 00 00 BE 02 00 00 ................
091B:02D0 00 00 FF 00 00 00 00 00 00 00 00 00 CE 02 00 00 ................
091B:02E0 00 00 FF 00 00 00 00 00 00 00 00 00 DE 02 00 00 ................
091B:02F0 00 00 FF 00 00 00 00 00 00 00 00 00 EE 02 00 00 ................
091B:0300 00 00 FF 00 00 00 00 00 00 00 00 00 FE 02 00 00 ................
091B:0310 00 00 FF 00 00 00 00 00 00 00 00 00 0E 03 00 00 ................
091B:0320 00 00 FF 00 00 00 00 00 00 00 00 00 1E 03 00 00 ................
091B:0330 00 00 FF 00 00 00 00 00 00 00 00 00 2E 03 00 00 ................
091B:0340 00 00 FF 00 00 00 00 00 00 00 00 00 3E 03 01 20 ............>.. 
091B:0350 02 20 02 20 04 A0 02 A0 FF FF FF FF FF FF FF FF . . ............
091B:0360 FF FF FF FF FF FF FF FF FF FF FF FF FF FF FF FF ................
091B:0370 FF FF FF FF FF FF 70 72 69 6E 74 20 73 63 61 6E ......print scan
091B:0380 66 20 3A 20 66 6C 6F 61 74 69 6E 67 20 70 6F 69 f : floating poi
091B:0390 6E 74 20 66 6F 72 6D 61 74 73 20 6E 6F 74 20 6C nt formats not l
091B:03A0 69 6E 6B 65 64 0D 0A 00 0D 00 28 6E 75 6C 6C 29 inked.....(null)
091B:03B0 00 30 31 32 33 34 35 36 37 38 39 41 42 43 44 45 .0123456789ABCDE
091B:03C0 46 00 14 14 01 14 15 14 14 14 14 02 00 14 03 04 F...............
091B:03D0 14 09 05 05 05 05 05 05 05 05 05 14 14 14 14 14 ................
091B:03E0 14 14 14 14 14 14 0F 17 0F 08 14 14 14 07 14 16 ................
091B:03F0 14 14 14 14 14 14 14 14 14 0D 14 14 14 14 14 14 ................
091B:0400 14 14 14 14 10 0A 0F 0F 0F 08 0A 14 14 06 14 12 ................
091B:0410 0B 0E 14 14 11 14 0C 14 14 0D 14 14 14 14 14 14 ................
091B:0420 14 00 D2 01 D2 01 D9 01 DC 08 E1 08 E1 08 E1 08 ................
091B:0430 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
091B:0440 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
091B:0450 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
091B:0460 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
091B:0470 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
091B:0480 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
091B:0490 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
091B:04A0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
091B:04B0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
091B:04C0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
091B:04D0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
091B:04E0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
091B:04F0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
091B:0500 FB 52 08 02 37 04 00 00 7A 00 1A 00 00 00 5C 00 .R..7...z.....\.
091B:0510 5A 00 1B 00 00 00 02 00 0C 00 01 00 01 00 01 00 Z...............
091B:0520 E0 17 00 00 00 00 00 00 01 00 00 00 00 00 00 00 ................
091B:0530 01 00 00 00 00 00 00 00 01 02 00 00 00 21 01 00 .............!..
091B:0540 00 00 03 00 00 00 A5 01 00 00 00 04 00 00 00 E2 ................
091B:0550 01 00 00 00 05 00 00 00 F8 01 00 00 00 06 00 18 ................
091B:0560 00 FA 01 00 00 18 07 00 00 00 BE 02 00 00 00 08 ................
091B:0570 00 00 00 FA 02 00 00 00 09 00 00 00 2F 03 00 00 ............/...
091B:0580 00 0A 00 00 00 1A 04 00 00 00 0B 00 00 00 64 04 ..............d.
091B:0590 00 00 00 0C 00 00 00 8A 04 00 00 00 0D 00 00 00 ................
091B:05A0 69 05 00 00 00 0E 00 00 00 DC 05 00 00 00 0F 00 i...............
091B:05B0 00 00 00 06 00 00 00 10 00 00 00 34 06 00 00 00 ...........4....
091B:05C0 11 00 00 00 42 06 00 00 00 12 00 00 00 54 06 00 ....B........T..
091B:05D0 00 00 13 00 00 00 67 07 00 00 00 14 00 00 00 AD ......g.........
091B:05E0 07 00 00 00 15 00 00 00 D8 07 00 00 00 16 00 00 ................
091B:05F0 00 57 08 00 00 00 17 00 00 00 80 08 00 00 00 18 .W..............
091B:0600 00 00 00 9C 08 00 00 00 19 00 19 00 C3 08 00 00 ................
091B:0610 00 1A 00 00 00 FD 08 00 00 00 1B 00 18 00 7B 09 ..............{.
091B:0620 00 00 00 1C 00 00 00 94 09 00 00 00 1D 00 00 00 ................
091B:0630 AD 09 00 00 00 1E 00 00 00 9B 0A 00 00 00 1F 00 ................
091B:0640 00 00 B1 0A 00 00 00 20 00 00 00 74 0B 00 00 00 ....... ...t....
