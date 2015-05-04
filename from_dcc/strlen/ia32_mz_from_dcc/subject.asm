
fn0800_0000()
	mov	dx,0858
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
	mov	di,[01A2]
	cmp	di,0200
	jnc	0090

l0800_0089:
	mov	di,0200
	mov	[01A2],di

l0800_0090:
	add	di,01F2
	jc	00BE

l0800_0096:
	add	di,[01A0]
	jc	00BE

l0800_009C:
	mov	cl,04
	shr	di,cl
	inc	di
	cmp	bp,di
	jc	00BE

l0800_00A5:
	cmp	word ptr [01A2],00
	jz	00B3

l0800_00AC:
	cmp	word ptr [01A0],00
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
	mov	di,01AC
	mov	cx,01F2
	sub	cx,di

l0800_00F1:
	rep	
	stosb	

l0800_00F3:
	push	cs
	call	word ptr [01A6]
	call	0256
	call	0341
	mov	ah,00
	int	1A
	mov	[0098],dx
	mov	[009A],cx
	call	word ptr [01AA]
	push	word ptr [0088]
	push	word ptr [0086]
	push	word ptr [0084]
	call	01FA
	push	ax
	call	0221

fn0800_0121()
	mov	ds,cs:[01F8]
	call	01A5
	push	cs
	call	word ptr [01A8]
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
	push	si
	mov	si,0194
	push	si
	call	0205
	pop	cx
	pop	si
	ret	

fn0800_0205()
	push	bp
	mov	bp,sp
	push	si
	xor	si,si
	jmp	020E

l0800_020D:
	inc	si

l0800_020E:
	mov	bx,[bp+04]
	inc	word ptr [bp+04]
	cmp	byte ptr [bx],00
	jnz	020D

l0800_0219:
	mov	ax,si
	jmp	021D

l0800_021D:
	pop	si
	pop	bp
	ret	
0800:0220 C3                                              .              

fn0800_0221()
	push	bp
	mov	bp,sp
	jmp	0230

l0800_0226:
	mov	bx,[01A4]
	shl	bx,01
	call	word ptr [bx+01AC]

l0800_0230:
	mov	ax,[01A4]
	dec	word ptr [01A4]
	or	ax,ax
	jnz	0226

l0800_023B:
	call	word ptr [019A]
	call	word ptr [019C]
	call	word ptr [019E]
	push	word ptr [bp+04]
	call	0121
	pop	cx
	pop	bp
	ret	
0800:0250 00 00 00 00 00 00                               ......         

fn0800_0256()
	pop	word ptr cs:[0250]
	mov	cs:[0252],ds
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
	jc	0294

l0800_0283:
	mov	es,[008C]
	mov	di,si
	mov	cl,7F
	xor	al,al

l0800_028D:
	repne	
	scasb	

l0800_028F:
	jcxz	0307

l0800_0291:
	xor	cl,7F

l0800_0294:
	sub	sp,02
	mov	ax,0001
	add	ax,bx
	add	ax,cx
	and	ax,FFFE
	mov	di,sp
	sub	di,ax
	jc	0307

l0800_02A7:
	mov	sp,di
	mov	ax,es
	mov	ds,ax
	mov	ax,ss
	mov	es,ax
	push	cx
	dec	cx

l0800_02B3:
	rep	
	movsb	

l0800_02B5:
	xor	al,al
	stosb	
	mov	ds,bp
	xchg	dx,si
	xchg	cx,bx
	mov	ax,bx
	mov	dx,ax
	inc	bx

l0800_02C3:
	call	02DF
	ja	02CF

l0800_02C8:
	jc	030A

l0800_02CA:
	call	02DF
	ja	02C8

l0800_02CF:
	cmp	al,20
	jz	02DB

l0800_02D3:
	cmp	al,0D
	jz	02DB

l0800_02D7:
	cmp	al,09
	jnz	02C3

l0800_02DB:
	xor	al,al
	jmp	02C3

fn0800_02DF()
	or	ax,ax
	jz	02EA

l0800_02E3:
	inc	dx
	stosb	
	or	al,al
	jnz	02EA

l0800_02E9:
	inc	bx

l0800_02EA:
	xchg	al,ah
	xor	al,al
	stc	
	jcxz	0306

l0800_02F1:
	lodsb	
	dec	cx
	sub	al,22
	jz	0306

l0800_02F7:
	add	al,22
	cmp	al,5C
	jnz	0304

l0800_02FD:
	cmp	byte ptr [si],22
	jnz	0304

l0800_0302:
	lodsb	
	dec	cx

l0800_0304:
	or	si,si

l0800_0306:
	ret	

l0800_0307:
	jmp	01E2

l0800_030A:
	pop	cx
	add	cx,dx
	mov	ds,cs:[0252]
	mov	[0084],bx
	inc	bx
	add	bx,bx
	mov	si,sp
	mov	bp,sp
	sub	bp,bx
	jc	0307

l0800_0321:
	mov	sp,bp
	mov	[0086],bp

l0800_0327:
	jcxz	0337

l0800_0329:
	mov	[bp+00],si
	add	bp,02

l0800_032F:
	lodsb	
	or	al,al
	loopne	032F

l0800_0335:
	jz	0327

l0800_0337:
	xor	ax,ax
	mov	[bp+00],ax
	jmp	word ptr cs:[0250]

fn0800_0341()
	mov	cx,[008A]
	push	cx
	call	0490
	pop	cx
	mov	di,ax
	or	ax,ax
	jz	0374

l0800_0350:
	push	ds
	push	ds
	pop	es
	mov	ds,[008C]
	xor	si,si
	cld	

l0800_035A:
	rep	
	movsb	

l0800_035C:
	pop	ds
	mov	di,ax
	push	es
	push	word ptr [008E]
	call	0490
	add	sp,02
	mov	bx,ax
	pop	es
	mov	[0088],ax
	or	ax,ax
	jnz	0377

l0800_0374:
	jmp	01E2

l0800_0377:
	xor	ax,ax
	mov	cx,FFFF

l0800_037C:
	mov	[bx],di
	add	bx,02

l0800_0381:
	repne	
	scasb	

l0800_0383:
	cmp	es:[di],al
	jnz	037C

l0800_0388:
	mov	[bx],ax
	ret	
0800:038B                                  55 8B EC 83 3E            U...>
0800:0390 A4 01 20 75 05 B8 01 00 EB 15 8B 46 04 8B 1E A4 .. u.......F....
0800:03A0 01 D1 E3 89 87 AC 01 FF 06 A4 01 33 C0 EB 00 5D ...........3...]
0800:03B0 C3                                              .              

fn0800_03B1()
	push	bp
	mov	bp,sp
	push	si
	push	di
	mov	di,[bp+04]
	mov	ax,[di+06]
	mov	[01EE],ax
	cmp	ax,di
	jnz	03CB

l0800_03C3:
	mov	word ptr [01EE],0000
	jmp	03DB

l0800_03CB:
	mov	si,[di+04]
	mov	bx,[01EE]
	mov	[bx+04],si
	mov	ax,[01EE]
	mov	[si+06],ax

l0800_03DB:
	pop	di
	pop	si
	pop	bp
	ret	

fn0800_03DF()
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
	mov	ax,[01EC]
	cmp	ax,di
	jnz	0406

l0800_0400:
	mov	[01EC],si
	jmp	040E

l0800_0406:
	mov	di,si
	add	di,[bp+06]
	mov	[di+02],si

l0800_040E:
	mov	ax,si
	add	ax,0004
	jmp	0415

l0800_0415:
	pop	di
	pop	si
	pop	bp
	ret	

fn0800_0419()
	push	bp
	mov	bp,sp
	push	si
	mov	ax,[bp+04]
	xor	dx,dx
	and	ax,FFFF
	and	dx,0000
	push	dx
	push	ax
	call	0527
	pop	cx
	pop	cx
	mov	si,ax
	cmp	si,FF
	jnz	043B

l0800_0437:
	xor	ax,ax
	jmp	0453

l0800_043B:
	mov	ax,[01EC]
	mov	[si+02],ax
	mov	ax,[bp+04]
	inc	ax
	mov	[si],ax
	mov	[01EC],si
	mov	ax,[01EC]
	add	ax,0004
	jmp	0453

l0800_0453:
	pop	si
	pop	bp
	ret	

fn0800_0456()
	push	bp
	mov	bp,sp
	push	si
	mov	ax,[bp+04]
	xor	dx,dx
	and	ax,FFFF
	and	dx,0000
	push	dx
	push	ax
	call	0527
	pop	cx
	pop	cx
	mov	si,ax
	cmp	si,FF
	jnz	0478

l0800_0474:
	xor	ax,ax
	jmp	048D

l0800_0478:
	mov	[01F0],si
	mov	[01EC],si
	mov	ax,[bp+04]
	inc	ax
	mov	[si],ax
	mov	ax,si
	add	ax,0004
	jmp	048D

l0800_048D:
	pop	si
	pop	bp
	ret	

fn0800_0490()
	push	bp
	mov	bp,sp
	push	si
	push	di
	mov	di,[bp+04]
	or	di,di
	jz	04A1

l0800_049C:
	cmp	di,F4
	jbe	04A5

l0800_04A1:
	xor	ax,ax
	jmp	04FF

l0800_04A5:
	mov	ax,di
	add	ax,000B
	and	ax,FFF8
	mov	di,ax
	cmp	word ptr [01F0],00
	jnz	04BD

l0800_04B6:
	push	di
	call	0456
	pop	cx
	jmp	04FF

l0800_04BD:
	mov	si,[01EE]
	mov	ax,si
	or	ax,ax
	jz	04F8

l0800_04C7:
	mov	ax,[si]
	mov	dx,di
	add	dx,28
	cmp	ax,dx
	jc	04DB

l0800_04D2:
	push	di
	push	si
	call	03DF
	pop	cx
	pop	cx
	jmp	04FF

l0800_04DB:
	mov	ax,[si]
	cmp	ax,di
	jc	04EF

l0800_04E1:
	push	si
	call	03B1
	pop	cx
	inc	word ptr [si]
	mov	ax,si
	add	ax,0004
	jmp	04FF

l0800_04EF:
	mov	si,[si+06]
	cmp	si,[01EE]
	jnz	04C7

l0800_04F8:
	push	di
	call	0419
	pop	cx
	jmp	04FF

l0800_04FF:
	pop	di
	pop	si
	pop	bp
	ret	
0800:0503          55 8B EC 8B 46 04 8B D4 81 EA 00 01 3B    U...F.......;
0800:0510 C2 73 07 A3 9E 00 33 C0 EB 0B C7 06 94 00 08 00 .s....3.........
0800:0520 B8 FF FF EB 00 5D C3                            .....].        

fn0800_0527()
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
	jnz	054E

l0800_0544:
	cmp	cx,sp
	jnc	054E

l0800_0548:
	xchg	[009E],ax
	jmp	0559

l0800_054E:
	mov	word ptr [0094],0008
	mov	ax,FFFF
	jmp	0559

l0800_0559:
	pop	bp
	ret	
0800:055B                                  55 8B EC FF 76            U...v
0800:0560 04 E8 9F FF 59 EB 00 5D C3 55 8B EC 8B 46 04 99 ....Y..].U...F..
0800:0570 52 50 E8 B2 FF 8B E5 EB 00 5D C3 00 00 00 00 00 RP.......]......
0858:0000 00 00 00 00 54 75 72 62 6F 2D 43 20 2D 20 43 6F ....Turbo-C - Co
0858:0010 70 79 72 69 67 68 74 20 28 63 29 20 31 39 38 38 pyright (c) 1988
0858:0020 20 42 6F 72 6C 61 6E 64 20 49 6E 74 6C 2E 00 4E  Borland Intl..N
0858:0030 75 6C 6C 20 70 6F 69 6E 74 65 72 20 61 73 73 69 ull pointer assi
0858:0040 67 6E 6D 65 6E 74 0D 0A 44 69 76 69 64 65 20 65 gnment..Divide e
0858:0050 72 72 6F 72 0D 0A 41 62 6E 6F 72 6D 61 6C 20 70 rror..Abnormal p
0858:0060 72 6F 67 72 61 6D 20 74 65 72 6D 69 6E 61 74 69 rogram terminati
0858:0070 6F 6E 0D 0A 00 00 00 00 00 00 00 00 00 00 00 00 on..............
0858:0080 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0858:0090 00 00 00 00 00 00 00 00 00 00 00 00 F2 01 F2 01 ................
0858:00A0 F2 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0858:00B0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0858:00C0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0858:00D0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0858:00E0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0858:00F0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0858:0100 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0858:0110 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0858:0120 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0858:0130 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0858:0140 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0858:0150 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0858:0160 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0858:0170 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0858:0180 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0858:0190 00 00 00 00 74 65 73 74 00 00 20 02 20 02 20 02 ....test.. . . .
0858:01A0 00 00 00 10 00 00 D2 01 D2 01 D9 01 00 00 00 00 ................
0858:01B0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0858:01C0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0858:01D0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0858:01E0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0858:01F0 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0858:0200 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0858:0210 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0858:0220 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0858:0230 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0858:0240 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0858:0250 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0858:0260 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
0858:0270 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 ................
