
fn0800_0000()
	mov	dx,0907
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
	mov	di,[0208]
	cmp	di,0200
	jnc	0090

l0800_0089:
	mov	di,0200
	mov	[0208],di

l0800_0090:
	add	di,0474
	jc	00BE

l0800_0096:
	add	di,[0206]
	jc	00BE

l0800_009C:
	mov	cl,04
	shr	di,cl
	inc	di
	cmp	bp,di
	jc	00BE

l0800_00A5:
	cmp	word ptr [0208],00
	jz	00B3

l0800_00AC:
	cmp	word ptr [0206],00
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
	mov	di,042E
	mov	cx,0474
	sub	cx,di

l0800_00F1:
	rep	
	stosb	

l0800_00F3:
	push	cs
	call	word ptr [0420]
	call	02ED
	call	03D8
	mov	ah,00
	int	1A
	mov	[0098],dx
	mov	[009A],cx
	call	word ptr [0424]
	push	word ptr [0088]
	push	word ptr [0086]
	push	word ptr [0084]
	call	01FA
	push	ax
	call	02B8

fn0800_0121()
	mov	ds,cs:[01F8]
	call	01A5
	push	cs
	call	word ptr [0422]
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
	sub	sp,02
	mov	byte ptr [bp-02],FF
	mov	byte ptr [bp-01],8F
	mov	al,[bp-02]
	add	al,[bp-01]
	mov	[bp-01],al
	mov	al,[bp-02]
	sub	al,[bp-01]
	mov	[bp-02],al
	mov	al,[bp-02]
	mov	ah,00
	mov	dl,[bp-01]
	mov	dh,00
	mul	dx
	mov	[bp-02],al
	mov	al,[bp-01]
	mov	ah,00
	mov	dl,[bp-02]
	mov	dh,00
	mov	bx,dx
	cwd	
	idiv	bx
	mov	[bp-01],al
	mov	al,[bp-01]
	mov	ah,00
	mov	dl,[bp-02]
	mov	dh,00
	mov	bx,dx
	cwd	
	idiv	bx
	mov	[bp-01],dl
	mov	al,[bp-02]
	mov	cl,05
	shl	al,cl
	mov	[bp-02],al
	mov	al,[bp-01]
	mov	cl,[bp-02]
	shr	al,cl
	mov	[bp-01],al
	mov	al,[bp-01]
	mov	ah,00
	push	ax
	mov	al,[bp-02]
	mov	ah,00
	push	ax
	mov	ax,0194
	push	ax
	call	0920
	add	sp,06
	mov	sp,bp
	pop	bp
	ret	
0800:027C                                     55 8B EC 56             U..V
0800:0280 8B 76 04 0B F6 7C 14 83 FE 58 76 03 BE 57 00 89 .v...|...Xv..W..
0800:0290 36 A4 01 8A 84 A6 01 98 96 EB 0D F7 DE 83 FE 23 6..............#
0800:02A0 77 EA C7 06 A4 01 FF FF 8B C6 A3 94 00 B8 FF FF w...............
0800:02B0 EB 00 5E 5D C2 02 00 C3                         ..^]....       

fn0800_02B8()
	push	bp
	mov	bp,sp
	jmp	02C7

l0800_02BD:
	mov	bx,[020A]
	shl	bx,01
	call	word ptr [bx+042E]

l0800_02C7:
	mov	ax,[020A]
	dec	word ptr [020A]
	or	ax,ax
	jnz	02BD

l0800_02D2:
	call	word ptr [0200]
	call	word ptr [0202]
	call	word ptr [0204]
	push	word ptr [bp+04]
	call	0121
	pop	cx
	pop	bp
	ret	
0800:02E7                      00 00 00 00 00 00                 ......  

fn0800_02ED()
	pop	word ptr cs:[02E7]
	mov	cs:[02E9],ds
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
	jc	032B

l0800_031A:
	mov	es,[008C]
	mov	di,si
	mov	cl,7F
	xor	al,al

l0800_0324:
	repne	
	scasb	

l0800_0326:
	jcxz	039E

l0800_0328:
	xor	cl,7F

l0800_032B:
	sub	sp,02
	mov	ax,0001
	add	ax,bx
	add	ax,cx
	and	ax,FFFE
	mov	di,sp
	sub	di,ax
	jc	039E

l0800_033E:
	mov	sp,di
	mov	ax,es
	mov	ds,ax
	mov	ax,ss
	mov	es,ax
	push	cx
	dec	cx

l0800_034A:
	rep	
	movsb	

l0800_034C:
	xor	al,al
	stosb	
	mov	ds,bp
	xchg	dx,si
	xchg	cx,bx
	mov	ax,bx
	mov	dx,ax
	inc	bx

l0800_035A:
	call	0376
	ja	0366

l0800_035F:
	jc	03A1

l0800_0361:
	call	0376
	ja	035F

l0800_0366:
	cmp	al,20
	jz	0372

l0800_036A:
	cmp	al,0D
	jz	0372

l0800_036E:
	cmp	al,09
	jnz	035A

l0800_0372:
	xor	al,al
	jmp	035A

fn0800_0376()
	or	ax,ax
	jz	0381

l0800_037A:
	inc	dx
	stosb	
	or	al,al
	jnz	0381

l0800_0380:
	inc	bx

l0800_0381:
	xchg	al,ah
	xor	al,al
	stc	
	jcxz	039D

l0800_0388:
	lodsb	
	dec	cx
	sub	al,22
	jz	039D

l0800_038E:
	add	al,22
	cmp	al,5C
	jnz	039B

l0800_0394:
	cmp	byte ptr [si],22
	jnz	039B

l0800_0399:
	lodsb	
	dec	cx

l0800_039B:
	or	si,si

l0800_039D:
	ret	

l0800_039E:
	jmp	01E2

l0800_03A1:
	pop	cx
	add	cx,dx
	mov	ds,cs:[02E9]
	mov	[0084],bx
	inc	bx
	add	bx,bx
	mov	si,sp
	mov	bp,sp
	sub	bp,bx
	jc	039E

l0800_03B8:
	mov	sp,bp
	mov	[0086],bp

l0800_03BE:
	jcxz	03CE

l0800_03C0:
	mov	[bp+00],si
	add	bp,02

l0800_03C6:
	lodsb	
	or	al,al
	loopne	03C6

l0800_03CC:
	jz	03BE

l0800_03CE:
	xor	ax,ax
	mov	[bp+00],ax
	jmp	word ptr cs:[02E7]

fn0800_03D8()
	mov	cx,[008A]
	push	cx
	call	0527
	pop	cx
	mov	di,ax
	or	ax,ax
	jz	040B

l0800_03E7:
	push	ds
	push	ds
	pop	es
	mov	ds,[008C]
	xor	si,si
	cld	

l0800_03F1:
	rep	
	movsb	

l0800_03F3:
	pop	ds
	mov	di,ax
	push	es
	push	word ptr [008E]
	call	0527
	add	sp,02
	mov	bx,ax
	pop	es
	mov	[0088],ax
	or	ax,ax
	jnz	040E

l0800_040B:
	jmp	01E2

l0800_040E:
	xor	ax,ax
	mov	cx,FFFF

l0800_0413:
	mov	[bx],di
	add	bx,02

l0800_0418:
	repne	
	scasb	

l0800_041A:
	cmp	es:[di],al
	jnz	0413

l0800_041F:
	mov	[bx],ax
	ret	
0800:0422       55 8B EC 83 3E 0A 02 20 75 05 B8 01 00 EB   U...>.. u.....
0800:0430 15 8B 46 04 8B 1E 0A 02 D1 E3 89 87 2E 04 FF 06 ..F.............
0800:0440 0A 02 33 C0 EB 00 5D C3                         ..3...].       

fn0800_0448()
	push	bp
	mov	bp,sp
	push	si
	push	di
	mov	di,[bp+04]
	mov	ax,[di+06]
	mov	[0470],ax
	cmp	ax,di
	jnz	0462

l0800_045A:
	mov	word ptr [0470],0000
	jmp	0472

l0800_0462:
	mov	si,[di+04]
	mov	bx,[0470]
	mov	[bx+04],si
	mov	ax,[0470]
	mov	[si+06],ax

l0800_0472:
	pop	di
	pop	si
	pop	bp
	ret	

fn0800_0476()
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
	mov	ax,[046E]
	cmp	ax,di
	jnz	049D

l0800_0497:
	mov	[046E],si
	jmp	04A5

l0800_049D:
	mov	di,si
	add	di,[bp+06]
	mov	[di+02],si

l0800_04A5:
	mov	ax,si
	add	ax,0004
	jmp	04AC

l0800_04AC:
	pop	di
	pop	si
	pop	bp
	ret	

fn0800_04B0()
	push	bp
	mov	bp,sp
	push	si
	mov	ax,[bp+04]
	xor	dx,dx
	and	ax,FFFF
	and	dx,0000
	push	dx
	push	ax
	call	05BE
	pop	cx
	pop	cx
	mov	si,ax
	cmp	si,FF
	jnz	04D2

l0800_04CE:
	xor	ax,ax
	jmp	04EA

l0800_04D2:
	mov	ax,[046E]
	mov	[si+02],ax
	mov	ax,[bp+04]
	inc	ax
	mov	[si],ax
	mov	[046E],si
	mov	ax,[046E]
	add	ax,0004
	jmp	04EA

l0800_04EA:
	pop	si
	pop	bp
	ret	

fn0800_04ED()
	push	bp
	mov	bp,sp
	push	si
	mov	ax,[bp+04]
	xor	dx,dx
	and	ax,FFFF
	and	dx,0000
	push	dx
	push	ax
	call	05BE
	pop	cx
	pop	cx
	mov	si,ax
	cmp	si,FF
	jnz	050F

l0800_050B:
	xor	ax,ax
	jmp	0524

l0800_050F:
	mov	[0472],si
	mov	[046E],si
	mov	ax,[bp+04]
	inc	ax
	mov	[si],ax
	mov	ax,si
	add	ax,0004
	jmp	0524

l0800_0524:
	pop	si
	pop	bp
	ret	

fn0800_0527()
	push	bp
	mov	bp,sp
	push	si
	push	di
	mov	di,[bp+04]
	or	di,di
	jz	0538

l0800_0533:
	cmp	di,F4
	jbe	053C

l0800_0538:
	xor	ax,ax
	jmp	0596

l0800_053C:
	mov	ax,di
	add	ax,000B
	and	ax,FFF8
	mov	di,ax
	cmp	word ptr [0472],00
	jnz	0554

l0800_054D:
	push	di
	call	04ED
	pop	cx
	jmp	0596

l0800_0554:
	mov	si,[0470]
	mov	ax,si
	or	ax,ax
	jz	058F

l0800_055E:
	mov	ax,[si]
	mov	dx,di
	add	dx,28
	cmp	ax,dx
	jc	0572

l0800_0569:
	push	di
	push	si
	call	0476
	pop	cx
	pop	cx
	jmp	0596

l0800_0572:
	mov	ax,[si]
	cmp	ax,di
	jc	0586

l0800_0578:
	push	si
	call	0448
	pop	cx
	inc	word ptr [si]
	mov	ax,si
	add	ax,0004
	jmp	0596

l0800_0586:
	mov	si,[si+06]
	cmp	si,[0470]
	jnz	055E

l0800_058F:
	push	di
	call	04B0
	pop	cx
	jmp	0596

l0800_0596:
	pop	di
	pop	si
	pop	bp
	ret	
0800:059A                               55 8B EC 8B 46 04           U...F.
0800:05A0 8B D4 81 EA 00 01 3B C2 73 07 A3 9E 00 33 C0 EB ......;.s....3..
0800:05B0 0B C7 06 94 00 08 00 B8 FF FF EB 00 5D C3       ............]. 

fn0800_05BE()
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
	jnz	05E5

l0800_05DB:
	cmp	cx,sp
	jnc	05E5

l0800_05DF:
	xchg	[009E],ax
	jmp	05F0

l0800_05E5:
	mov	word ptr [0094],0008
	mov	ax,FFFF
	jmp	05F0

l0800_05F0:
	pop	bp
	ret	
0800:05F2       55 8B EC FF 76 04 E8 9F FF 59 EB 00 5D C3   U...v....Y..].
0800:0600 55 8B EC 8B 46 04 99 52 50 E8 B2 FF 8B E5 EB 00 U...F..RP.......
0800:0610 5D C3 55 8B EC 81 EC 8A 00 56 57 8B 46 08 40 3D ].U......VW.F.@=
0800:0620 02 00 73 05 33 C0 E9 F6 00 8B 5E 04 D1 E3 F7 87 ..s.3.....^.....
0800:0630 4C 03 00 80 74 12 FF 76 08 FF 76 06 FF 76 04 E8 L...t..v..v..v..
0800:0640 E3 00 83 C4 06 E9 D7 00 8B 5E 04 D1 E3 81 A7 4C .........^.....L
0800:0650 03 FF FD 8B 46 06 89 86 7C FF 8B 46 08 89 86 78 ....F...|..F...x
0800:0660 FF 8D B6 7E FF EB 6D FF 8E 78 FF 8B 9E 7C FF FF ...~..m..x...|..
0800:0670 86 7C FF 8A 07 88 86 7B FF 3C 0A 75 04 C6 04 0D .|.....{.<.u....
0800:0680 46 8A 86 7B FF 88 04 46 8D 86 7E FF 8B D6 2B D0 F..{...F..~...+.
0800:0690 81 FA 80 00 7C 3E 8D 86 7E FF 8B FE 2B F8 57 8D ....|>..~...+.W.
0800:06A0 86 7E FF 50 FF 76 04 E8 7B 00 83 C4 06 89 86 76 .~.P.v..{......v
0800:06B0 FF 3B C7 74 1B 83 BE 76 FF 00 73 05 B8 FF FF EB .;.t...v..s.....
0800:06C0 0D 8B 46 08 2B 86 78 FF 03 86 76 FF 2B C7 EB 4F ..F.+.x...v.+..O
0800:06D0 8D B6 7E FF 83 BE 78 FF 00 74 03 E9 89 FF 8D 86 ..~...x..t......
0800:06E0 7E FF 8B FE 2B F8 8B C7 0B C0 76 2E 57 8D 86 7E ~...+.....v.W..~
0800:06F0 FF 50 FF 76 04 E8 2D 00 83 C4 06 89 86 76 FF 3B .P.v..-......v.;
0800:0700 C7 74 17 83 BE 76 FF 00 73 05 B8 FF FF EB 09 8B .t...v..s.......
0800:0710 46 08 03 86 76 FF 2B C7 EB 05 8B 46 08 EB 00 5F F...v.+....F..._
0800:0720 5E 8B E5 5D C3 55 8B EC 8B 5E 04 D1 E3 F7 87 4C ^..].U...^.....L
0800:0730 03 00 08 74 10 B8 02 00 50 33 C0 50 50 FF 76 04 ...t....P3.PP.v.
0800:0740 E8 28 00 8B E5 B4 40 8B 5E 04 8B 4E 08 8B 56 06 .(....@.^..N..V.
0800:0750 CD 21 72 0F 50 8B 5E 04 D1 E3 81 8F 4C 03 00 10 .!r.P.^.....L...
0800:0760 58 EB 06 50 E8 15 FB EB 00 5D C3 55 8B EC 8B 5E X..P.....].U...^
0800:0770 04 D1 E3 81 A7 4C 03 FF FD B4 42 8A 46 0A 8B 5E .....L....B.F..^
0800:0780 04 8B 4E 08 8B 56 06 CD 21 72 02 EB 07 50 E8 EB ..N..V..!r...P..
0800:0790 FA 99 EB 00 5D C3 55 8B EC 83 EC 22 56 57 06 8B ....].U...."VW..
0800:07A0 7E 0A 1E 07 8B 5E 08 83 FB 24 77 58 80 FB 02 72 ~....^...$wX...r
0800:07B0 53 8B 46 0C 8B 4E 0E 0B C9 7D 11 80 7E 06 00 74 S.F..N...}..~..t
0800:07C0 0B C6 05 2D 47 F7 D9 F7 D8 83 D9 00 8D 76 DE E3 ...-G........v..
0800:07D0 0F 91 2B D2 F7 F3 91 F7 F3 88 14 46 E3 09 EB F1 ..+........F....
0800:07E0 2B D2 F7 F3 88 14 46 0B C0 75 F5 8D 4E DE F7 D9 +.....F..u..N...
0800:07F0 03 CE FC 4E 8A 04 2C 0A 73 04 04 3A EB 03 02 46 ...N..,.s..:...F
0800:0800 04 AA E2 EF B0 00 AA 07 8B 46 0A EB 00 5F 5E 8B .........F..._^.
0800:0810 E5 5D C2 0C 00 55 8B EC 83 7E 08 0A 75 06 8B 46 .]...U...~..u..F
0800:0820 04 99 EB 05 8B 46 04 33 D2 52 50 FF 76 06 FF 76 .....F.3.RP.v..v
0800:0830 08 B0 01 50 B0 61 50 E8 5C FF EB 00 5D C3 55 8B ...P.aP.\...].U.
0800:0840 EC FF 76 06 FF 76 04 FF 76 08 FF 76 0A B0 00 50 ..v..v..v..v...P
0800:0850 B0 61 50 E8 40 FF EB 00 5D C3 55 8B EC FF 76 06 .aP.@...].U...v.
0800:0860 FF 76 04 FF 76 08 FF 76 0A 83 7E 0A 0A 75 05 B8 .v..v..v..~..u..
0800:0870 01 00 EB 02 33 C0 50 B0 61 50 E8 19 FF EB 00 5D ....3.P.aP.....]
0800:0880 C3 BA 74 03 EB 03 BA 79 03 B9 05 00 90 B4 40 BB ..t....y......@.
0800:0890 02 00 CD 21 B9 27 00 90 BA 7E 03 B4 40 CD 21 E9 ...!.'...~..@.!.
0800:08A0 40 F9 55 8B EC 56 57 8B 76 04 8B 44 0E 3B C6 74 @.U..VW.v..D.;.t
0800:08B0 05 B8 FF FF EB 66 83 3C 00 7C 2D F7 44 02 08 00 .....f.<.|-.D...
0800:08C0 75 0C 8B 44 0A 8B D6 83 C2 05 3B C2 75 16 C7 04 u..D......;.u...
0800:08D0 00 00 8B 44 0A 8B D6 83 C2 05 3B C2 75 06 8B 44 ...D......;.u..D
0800:08E0 08 89 44 0A 33 C0 EB 34 8B 7C 06 03 3C 47 29 3C ..D.3..4.|..<G)<
0800:08F0 57 8B 44 08 89 44 0A 50 8A 44 04 98 50 E8 12 FD W.D..D.P.D..P...
0800:0900 83 C4 06 3B C7 74 11 F7 44 02 00 02 75 0A 81 4C ...;.t..D...u..L
0800:0910 02 10 00 B8 FF FF EB 04 33 C0 EB 00 5F 5E 5D C3 ........3..._^].

fn0800_0920()
	push	bp
	mov	bp,sp
	mov	ax,0A56
	push	ax
	mov	ax,021C
	push	ax
	push	word ptr [bp+04]
	lea	ax,[bp+06]
	push	ax
	call	0B48
	jmp	0937

l0800_0937:
	pop	bp
	ret	
0800:0939                            55 8B EC 8B 5E 06 FF          U...^..
0800:0940 0F FF 76 06 8A 46 04 98 50 E8 06 00 8B E5 EB 00 ..v..F..P.......
0800:0950 5D C3 55 8B EC 83 EC 02 56 8B 76 06 8A 46 04 88 ].U.....V.v..F..
0800:0960 46 FF FF 04 7D 36 8A 46 FF FF 44 0A 8B 5C 0A 88 F...}6.F..D..\..
0800:0970 47 FF F7 44 02 08 00 74 1B 80 7E FF 0A 74 06 80 G..D...t..~..t..
0800:0980 7E FF 0D 75 0F 56 E8 19 FF 59 0B C0 74 06 B8 FF ~..u.V...Y..t...
0800:0990 FF E9 A7 00 8A 46 FF B4 00 E9 9F 00 FF 0C F7 44 .....F.........D
0800:09A0 02 90 00 75 07 F7 44 02 02 00 75 0B 81 4C 02 10 ...u..D...u..L..
0800:09B0 00 B8 FF FF E9 84 00 81 4C 02 00 01 83 7C 06 00 ........L....|..
0800:09C0 74 24 83 3C 00 74 10 56 E8 D7 FE 59 0B C0 74 05 t$.<.t.V...Y..t.
0800:09D0 B8 FF FF EB 66 EB 0A 8B 44 06 BA FF FF 2B D0 89 ....f...D....+..
0800:09E0 14 E9 7E FF EB 55 80 7E FF 0A 75 1F F7 44 02 40 ..~..U.~..u..D.@
0800:09F0 00 75 18 B8 01 00 50 B8 A6 03 50 8A 44 04 98 50 .u....P...P.D..P
0800:0A00 E8 22 FD 83 C4 06 3D 01 00 75 18 B8 01 00 50 8D ."....=..u....P.
0800:0A10 46 04 50 8A 44 04 98 50 E8 0A FD 83 C4 06 3D 01 F.P.D..P......=.
0800:0A20 00 74 11 F7 44 02 00 02 75 0A 81 4C 02 10 00 B8 .t..D...u..L....
0800:0A30 FF FF EB 07 8A 46 FF B4 00 EB 00 5E 8B E5 5D C3 .....F.....^..].
0800:0A40 55 8B EC 56 8B 76 04 B8 1C 02 50 56 E8 03 FF 59 U..V.v....PV...Y
0800:0A50 59 EB 00 5E 5D C3 55 8B EC 83 EC 02 56 57 8B 76 Y..^].U.....VW.v
0800:0A60 04 8B 7E 06 89 7E FE F7 44 02 08 00 74 26 EB 1A ..~..~..D...t&..
0800:0A70 56 8B 5E 08 FF 46 08 8A 07 98 50 E8 D4 FE 59 59 V.^..F....P...YY
0800:0A80 3D FF FF 75 05 33 C0 E9 87 00 8B C7 4F 0B C0 75 =..u.3......O..u
0800:0A90 DF E9 78 00 F7 44 02 40 00 74 38 83 7C 06 00 74 ..x..D.@.t8.|..t
0800:0AA0 32 8B 44 06 3B C7 73 2B 83 3C 00 74 0D 56 E8 F1 2.D.;.s+.<.t.V..
0800:0AB0 FD 59 0B C0 74 04 33 C0 EB 57 57 FF 76 08 8A 44 .Y..t.3..WW.v..D
0800:0AC0 04 98 50 E8 5F FC 83 C4 06 3B C7 73 04 33 C0 EB ..P._....;.s.3..
0800:0AD0 40 EB 39 EB 30 FF 04 7D 15 8B 5E 08 FF 46 08 8A @.9.0..}..^..F..
0800:0AE0 07 FF 44 0A 8B 5C 0A 88 47 FF B4 00 EB 0E 56 8B ..D..\..G.....V.
0800:0AF0 5E 08 FF 46 08 FF 37 E8 3F FE 59 59 3D FF FF 75 ^..F..7.?.YY=..u
0800:0B00 04 33 C0 EB 0C 8B C7 4F 0B C0 75 C9 8B 46 FE EB .3.....O..u..F..
0800:0B10 00 5F 5E 8B E5 5D C2 06 00 FF 26 26 04 55 8B EC ._^..]....&&.U..
0800:0B20 8B 56 04 B9 04 0F BB AF 03 FC 8A C6 D2 E8 D7 AA .V..............
0800:0B30 8A C6 22 C5 D7 AA 8A C2 D2 E8 D7 AA 8A C2 22 C5 .."...........".
0800:0B40 D7 AA EB 00 5D C2 02 00                         ....]...       

fn0800_0B48()
	push	bp
	mov	bp,sp
	sub	sp,0098
	push	si
	push	di
	mov	word ptr [bp-58],0000
	mov	byte ptr [bp-55],50
	mov	word ptr [bp-02],0000
	jmp	0BA2
0800:0B61    57 B9 FF FF 32 C0 F2 AE F7 D1 49 5F C3        W...2.....I_. 

fn0800_0B6E()
	mov	[di],al
	inc	di
	dec	byte ptr [bp-55]
	jle	0BA1

fn0800_0B76()
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
	jnz	0B93

l0800_0B8E:
	mov	word ptr [bp-02],0001

l0800_0B93:
	mov	byte ptr [bp-55],50
	add	[bp-58],di
	lea	di,[bp-54]
	pop	es
	pop	dx
	pop	cx
	pop	bx

l0800_0BA1:
	ret	

l0800_0BA2:
	push	es
	cld	
	lea	di,[bp-54]
	mov	[bp+FF6A],di
	mov	di,[bp+FF6A]
	mov	si,[bp+06]

l0800_0BB2:
	lodsb	
	or	al,al
	jz	0BC8

l0800_0BB7:
	cmp	al,25
	jz	0BCB

l0800_0BBB:
	mov	[di],al
	inc	di
	dec	byte ptr [bp-55]
	jg	0BB2

l0800_0BC3:
	call	0B76
	jmp	0BB2

l0800_0BC8:
	jmp	1047

l0800_0BCB:
	mov	[bp+FF76],si
	lodsb	
	cmp	al,25
	jz	0BBB

l0800_0BD4:
	mov	[bp+FF6A],di
	xor	cx,cx
	mov	[bp+FF74],cx
	mov	[bp+FF68],cx
	mov	[bp+FF73],cl
	mov	word ptr [bp+FF6E],FFFF
	mov	word ptr [bp+FF70],FFFF
	jmp	0BF5
0800:0BF4             AC                                      .          

l0800_0BF5:
	xor	ah,ah
	mov	dx,ax
	mov	bx,ax
	sub	bl,20
	cmp	bl,60
	jnc	0C4A

l0800_0C03:
	mov	bl,[bx+03BF]
	mov	ax,bx
	cmp	ax,0017
	jbe	0C11

l0800_0C0E:
	jmp	1035

l0800_0C11:
	mov	bx,ax
	shl	bx,01
	jmp	word ptr cs:[bx+0C1A]
0800:0C1A                               65 0C 4D 0C A6 0C           e.M...
0800:0C20 59 0C CB 0C D5 0C 17 0D 21 0D 31 0D 8C 0C 66 0D Y.......!.1...f.
0800:0C30 41 0D 45 0D 49 0D EB 0D 9D 0E 3E 0E 5E 0E 08 10 A.E.I.....>.^...
0800:0C40 35 10 35 10 35 10 78 0C 82 0C                   5.5.5.x...     

l0800_0C4A:
	jmp	1035
0800:0C4D                                        80 FD 00              ...
0800:0C50 77 F8 83 8E 68 FF 01 EB 9B 80 FD 00 77 EC 83 8E w...h.......w...
0800:0C60 68 FF 02 EB 8F 80 FD 00 77 E0 80 BE 73 FF 2B 74 h.......w...s.+t
0800:0C70 04 88 96 73 FF E9 7C FF 83 A6 68 FF DF B5 05 E9 ...s..|...h.....
0800:0C80 72 FF 83 8E 68 FF 20 B5 05 E9 68 FF 80 FD 00 77 r...h. ...h....w
0800:0C90 44 F7 86 68 FF 02 00 75 21 83 8E 68 FF 08 B5 01 D..h...u!..h....
0800:0CA0 E9 51 FF E9 8F 03 8B 7E 04 8B 05 83 46 04 02 80 .Q.....~....F...
0800:0CB0 FD 02 73 09 89 86 6E FF B5 03 E9 37 FF 80 FD 04 ..s...n....7....
0800:0CC0 75 E1 89 86 70 FF FE C5 E9 29 FF 80 FD 04 73 D3 u...p....)....s.
0800:0CD0 B5 04 E9 1F FF 92 2C 30 98 80 FD 02 77 1B B5 02 ......,0....w...
0800:0CE0 87 86 6E FF 0B C0 7C D2 D1 E0 8B D0 D1 E0 D1 E0 ..n...|.........
0800:0CF0 03 C2 01 86 6E FF E9 FB FE 80 FD 04 75 A5 87 86 ....n.......u...
0800:0D00 70 FF 0B C0 7C B4 D1 E0 8B D0 D1 E0 D1 E0 03 C2 p...|...........
0800:0D10 01 86 70 FF E9 DD FE 83 8E 68 FF 10 B5 05 E9 D3 ..p......h......
0800:0D20 FE 81 8E 68 FF 00 01 83 A6 68 FF EF B5 05 E9 C3 ...h.....h......
0800:0D30 FE 83 A6 68 FF EF 81 8E 68 FF 80 00 B5 05 E9 B3 ...h....h.......
0800:0D40 FE B7 08 EB 0A B7 0A EB 0B B7 10 B3 E9 02 DA C6 ................
0800:0D50 86 73 FF 00 C6 86 6D FF 00 88 96 6C FF 8B 7E 04 .s....m....l..~.
0800:0D60 8B 05 33 D2 EB 11 B7 0A C6 86 6D FF 01 88 96 6C ..3.......m....l
0800:0D70 FF 8B 7E 04 8B 05 99 47 47 89 76 06 F7 86 68 FF ..~....GG.v...h.
0800:0D80 10 00 74 04 8B 15 47 47 89 7E 04 8D BE 79 FF 0B ..t...GG.~...y..
0800:0D90 C0 75 33 0B D2 75 2F 83 BE 70 FF 00 75 2D 8B BE .u3..u/..p..u-..
0800:0DA0 6A FF 8B 8E 6E FF E3 1B 83 F9 FF 74 16 8B 86 68 j...n......t...h
0800:0DB0 FF 25 08 00 74 04 B2 30 EB 02 B2 20 8A C2 E8 AD .%..t..0... ....
0800:0DC0 FD E2 F9 E9 E9 FD 83 8E 68 FF 04 52 50 57 8A C7 ........h..RPW..
0800:0DD0 98 50 8A 86 6D FF 50 53 E8 BB F9 16 07 8B 96 70 .P..m.PS.......p
0800:0DE0 FF 0B D2 7F 03 E9 14 01 E9 21 01 88 96 6C FF 89 .........!...l..
0800:0DF0 76 06 8D BE 78 FF 8B 5E 04 FF 37 43 43 89 5E 04 v...x..^..7CC.^.
0800:0E00 F7 86 68 FF 20 00 74 0F FF 37 43 43 89 5E 04 16 ..h. .t..7CC.^..
0800:0E10 07 E8 09 FD B0 3A AA 16 07 E8 01 FD C6 05 00 C6 .....:..........
0800:0E20 86 6D FF 00 83 A6 68 FF FB 8D 8E 78 FF 2B F9 87 .m....h....x.+..
0800:0E30 CF 8B 96 70 FF 3B D1 7F 02 8B D1 E9 BE 00 89 76 ...p.;.........v
0800:0E40 06 88 96 6C FF 8B 7E 04 8B 05 83 46 04 02 16 07 ...l..~....F....
0800:0E50 8D BE 79 FF 32 E4 89 05 B9 01 00 E9 DF 00 89 76 ..y.2..........v
0800:0E60 06 88 96 6C FF 8B 7E 04 F7 86 68 FF 20 00 75 0C ...l..~...h. .u.
0800:0E70 8B 3D 83 46 04 02 1E 07 0B FF EB 0A C4 3D 83 46 .=.F.........=.F
0800:0E80 04 04 8C C0 0B C7 75 05 1E 07 BF A8 03 E8 D1 FC ......u.........
0800:0E90 3B 8E 70 FF 76 04 8B 8E 70 FF E9 A0 00 89 76 06 ;.p.v...p.....v.
0800:0EA0 88 96 6C FF 8B 7E 04 8B 8E 70 FF 0B C9 7D 03 B9 ..l..~...p...}..
0800:0EB0 06 00 57 51 8D 9E 79 FF 53 52 B8 01 00 23 86 68 ..WQ..y.SR...#.h
0800:0EC0 FF 50 8B 86 68 FF A9 80 00 74 0A B8 02 00 C7 46 .P..h....t.....F
0800:0ED0 FC 04 00 EB 17 A9 00 01 74 0A B8 08 00 C7 46 FC ........t.....F.
0800:0EE0 0A 00 EB 08 C7 46 FC 08 00 B8 06 00 50 E8 29 FC .....F......P.).
0800:0EF0 8B 46 FC 01 46 04 16 07 8D BE 79 FF F7 86 68 FF .F..F.....y...h.
0800:0F00 08 00 74 1A 8B 96 6E FF 0B D2 7E 12 E8 52 FC 26 ..t...n...~..R.&
0800:0F10 80 3D 2D 75 01 49 2B D1 7E 04 89 96 74 FF 8A 86 .=-u.I+.~...t...
0800:0F20 73 FF 0A C0 74 14 26 80 3D 2D 74 0E 83 AE 74 FF s...t.&.=-t...t.
0800:0F30 01 83 96 74 FF 00 4F 26 88 05 E8 24 FC 8B F7 8B ...t..O&...$....
0800:0F40 BE 6A FF 8B 9E 6E FF B8 05 00 23 86 68 FF 3D 05 .j...n....#.h.=.
0800:0F50 00 75 16 8A A6 6C FF 80 FC 6F 75 10 83 BE 74 FF .u...l...ou...t.
0800:0F60 00 7F 06 C7 86 74 FF 01 00 EB 1F 90 80 FC 78 74 .....t........xt
0800:0F70 05 80 FC 58 75 14 83 8E 68 FF 40 4B 4B 83 AE 74 ...Xu...h.@KK..t
0800:0F80 FF 02 7D 06 C7 86 74 FF 00 00 03 8E 74 FF F7 86 ..}...t.....t...
0800:0F90 68 FF 02 00 75 0C EB 06 B0 20 E8 D1 FB 4B 3B D9 h...u.... ...K;.
0800:0FA0 7F F6 F7 86 68 FF 40 00 74 0C B0 30 E8 BF FB 8A ....h.@.t..0....
0800:0FB0 86 6C FF E8 B8 FB 8B 96 74 FF 0B D2 7E 27 2B CA .l......t...~'+.
0800:0FC0 2B DA 26 8A 04 3C 2D 74 08 3C 20 74 04 3C 2B 75 +.&..<-t.< t.<+u
0800:0FD0 07 26 AC E8 98 FB 49 4B 87 CA E3 07 B0 30 E8 8D .&....IK.....0..
0800:0FE0 FB E2 F9 87 CA E3 11 2B D9 26 AC 88 05 47 FE 4E .......+.&...G.N
0800:0FF0 AB 7F 03 E8 80 FB E2 F1 0B DB 7E 09 8B CB B0 20 ..........~.... 
0800:1000 E8 6B FB E2 F9 E9 A7 FB 89 76 06 8B 7E 04 F7 86 .k.......v..~...
0800:1010 68 FF 20 00 75 0A 8B 3D 83 46 04 02 1E 07 EB 06 h. .u..=.F......
0800:1020 C4 3D 83 46 04 04 B8 50 00 2A 46 AB 03 46 A8 26 .=.F...P.*F..F.&
0800:1030 89 05 E9 76 FB                                  ...v.          

l0800_1035:
	mov	si,[bp+FF76]
	mov	di,[bp+FF6A]
	mov	al,25

l0800_103F:
	call	0B6E
	lodsb	
	or	al,al
	jnz	103F

l0800_1047:
	cmp	byte ptr [bp-55],50
	jge	1050

l0800_104D:
	call	0B76

l0800_1050:
	pop	es
	cmp	word ptr [bp-02],00
	jz	105E

l0800_1057:
	mov	ax,FFFF
	jmp	1063
0800:105C                                     EB 05                   .. 

l0800_105E:
	mov	ax,[bp-58]
	jmp	1063

l0800_1063:
	pop	di
	pop	si
	mov	sp,bp
	pop	bp
	ret	0008
0800:106B                                  00 00 00 00 00            .....
0907:0000 00 00 00 00 54 75 72 62 6F 2D 43 20 2D 20 43 6F ....Turbo-C - Co
0907:0010 70 79 72 69 67 68 74 20 28 63 29 20 31 39 38 38 pyright (c) 1988
0907:0020 20 42 6F 72 6C 61 6E 64 20 49 6E 74 6C 2E 00 4E  Borland Intl..N
0907:0030 75 6C 6C 20 70 6F 69 6E 74 65 72 20 61 73 73 69 ull pointer assi
0907:0040 67 6E 6D 65 6E 74 0D 0A 44 69 76 69 64 65 20 65 gnment..Divide e
0907:0050 72 72 6F 72 0D 0A 41 62 6E 6F 72 6D 61 6C 20 70 rror..Abnormal p
0907:0060 72 6F 67 72 61 6D 20 74 65 72 6D 69 6E 61 74 69 rogram terminati
0907:0070 6F 6E 0D 0A 00 00 00 00 00 00 00 00 00 00 00 00 on..............
0907:0080 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0907:0090 00 00 00 00 00 00 00 00 00 00 00 00 74 04 74 04 ............t.t.
0907:00A0 74 04 00 00 00 00 00 00 00 00 00 00 00 00 00 00 t...............
0907:00B0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0907:00C0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0907:00D0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0907:00E0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0907:00F0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0907:0100 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0907:0110 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0907:0120 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0907:0130 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0907:0140 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0907:0150 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0907:0160 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0907:0170 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0907:0180 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0907:0190 00 00 00 00 61 20 3D 20 25 64 2C 20 62 20 3D 20 ....a = %d, b = 
0907:01A0 25 64 0A 00 00 00 00 13 02 02 04 05 06 08 08 08 %d..............
0907:01B0 14 15 05 13 FF 16 05 11 02 FF FF FF FF FF FF FF ................
0907:01C0 FF FF FF FF FF FF 05 05 FF FF FF FF FF FF FF FF ................
0907:01D0 FF FF FF FF FF FF FF FF 0F FF 23 02 FF 0F FF FF ..........#.....
0907:01E0 FF FF 13 FF FF 02 02 05 0F 02 FF FF FF 13 FF FF ................
0907:01F0 FF FF FF FF FF FF 23 FF FF FF FF 23 FF 13 FF 00 ......#....#....
0907:0200 B7 02 B7 02 B7 02 00 00 00 10 00 00 00 00 09 02 ................
0907:0210 00 00 00 00 00 00 00 00 00 00 0C 02 00 00 0A 02 ................
0907:0220 01 00 00 00 00 00 00 00 00 00 1C 02 00 00 02 02 ................
0907:0230 02 00 00 00 00 00 00 00 00 00 2C 02 00 00 43 02 ..........,...C.
0907:0240 03 00 00 00 00 00 00 00 00 00 3C 02 00 00 42 02 ..........<...B.
0907:0250 04 00 00 00 00 00 00 00 00 00 4C 02 00 00 00 00 ..........L.....
0907:0260 FF 00 00 00 00 00 00 00 00 00 5C 02 00 00 00 00 ..........\.....
0907:0270 FF 00 00 00 00 00 00 00 00 00 6C 02 00 00 00 00 ..........l.....
0907:0280 FF 00 00 00 00 00 00 00 00 00 7C 02 00 00 00 00 ..........|.....
0907:0290 FF 00 00 00 00 00 00 00 00 00 8C 02 00 00 00 00 ................
0907:02A0 FF 00 00 00 00 00 00 00 00 00 9C 02 00 00 00 00 ................
0907:02B0 FF 00 00 00 00 00 00 00 00 00 AC 02 00 00 00 00 ................
0907:02C0 FF 00 00 00 00 00 00 00 00 00 BC 02 00 00 00 00 ................
0907:02D0 FF 00 00 00 00 00 00 00 00 00 CC 02 00 00 00 00 ................
0907:02E0 FF 00 00 00 00 00 00 00 00 00 DC 02 00 00 00 00 ................
0907:02F0 FF 00 00 00 00 00 00 00 00 00 EC 02 00 00 00 00 ................
0907:0300 FF 00 00 00 00 00 00 00 00 00 FC 02 00 00 00 00 ................
0907:0310 FF 00 00 00 00 00 00 00 00 00 0C 03 00 00 00 00 ................
0907:0320 FF 00 00 00 00 00 00 00 00 00 1C 03 00 00 00 00 ................
0907:0330 FF 00 00 00 00 00 00 00 00 00 2C 03 00 00 00 00 ..........,.....
0907:0340 FF 00 00 00 00 00 00 00 00 00 3C 03 01 20 02 20 ..........<.. . 
0907:0350 02 20 04 A0 02 A0 FF FF FF FF FF FF FF FF FF FF . ..............
0907:0360 FF FF FF FF FF FF FF FF FF FF FF FF FF FF FF FF ................
0907:0370 FF FF FF FF 70 72 69 6E 74 20 73 63 61 6E 66 20 ....print scanf 
0907:0380 3A 20 66 6C 6F 61 74 69 6E 67 20 70 6F 69 6E 74 : floating point
0907:0390 20 66 6F 72 6D 61 74 73 20 6E 6F 74 20 6C 69 6E  formats not lin
0907:03A0 6B 65 64 0D 0A 00 0D 00 28 6E 75 6C 6C 29 00 30 ked.....(null).0
0907:03B0 31 32 33 34 35 36 37 38 39 41 42 43 44 45 46 00 123456789ABCDEF.
0907:03C0 14 14 01 14 15 14 14 14 14 02 00 14 03 04 14 09 ................
0907:03D0 05 05 05 05 05 05 05 05 05 14 14 14 14 14 14 14 ................
0907:03E0 14 14 14 14 0F 17 0F 08 14 14 14 07 14 16 14 14 ................
0907:03F0 14 14 14 14 14 14 14 0D 14 14 14 14 14 14 14 14 ................
0907:0400 14 14 10 0A 0F 0F 0F 08 0A 14 14 06 14 12 0B 0E ................
0907:0410 14 14 11 14 0C 14 14 0D 14 14 14 14 14 14 14 00 ................
0907:0420 D2 01 D2 01 D9 01 81 08 86 08 86 08 86 08 00 00 ................
0907:0430 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0907:0440 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0907:0450 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0907:0460 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0907:0470 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0907:0480 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0907:0490 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0907:04A0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0907:04B0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0907:04C0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0907:04D0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0907:04E0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0907:04F0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0907:0500 FB 52 08 02 F3 03 00 00 6F 00 19 00 00 00 55 00 .R......o.....U.
0907:0510 53 00 17 00 00 00 02 00 0C 00 01 00 01 00 01 00 S...............
0907:0520 9E 16 00 00 00 00 00 00 01 00 00 00 00 00 00 00 ................
0907:0530 01 00 00 00 00 00 00 00 01 02 00 00 00 21 01 00 .............!..
0907:0540 00 00 03 00 00 00 A5 01 00 00 00 04 00 00 00 E2 ................
0907:0550 01 00 00 00 05 00 00 00 F8 01 00 00 00 06 00 18 ................
0907:0560 00 FA 01 00 00 18 07 00 00 00 7C 02 00 00 00 08 ..........|.....
0907:0570 00 00 00 B8 02 00 00 00 09 00 00 00 ED 02 00 00 ................
0907:0580 00 0A 00 00 00 D8 03 00 00 00 0B 00 00 00 22 04 ..............".
