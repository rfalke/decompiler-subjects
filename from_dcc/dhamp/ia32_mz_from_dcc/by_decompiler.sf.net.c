// subject.c
// Generated on TIMESTAMP by decompiling from_dcc/dhamp/ia32_mz_from_dcc/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0800_0000(word16 si, selector es, selector ds)
{
fn0800_0000_entry:
l0800_0000:
	sp = fp
	dx = 0x0DB6
	Mem0[0x0800:0x01C7:word16] = 0x0DB6
	ah = 0x30
	al = msdos_get_dos_version(out ah)
	ax = DPB(ax, al, 0, 8) (alias)
	bp = Mem0[ds:0x0002:word16]
	bx = Mem0[ds:0x002C:word16]
	ds = 0x0DB6
	Mem0[0x0DB6:0x007D:word16] = ax
	Mem0[0x0DB6:0x007B:word16] = es
	Mem0[0x0DB6:0x0077:word16] = bx
	Mem0[0x0DB6:0x0091:word16] = bp
	Mem0[0x0DB6:0x0081:word16] = 0xFFFF
	fn0800_012F(al, ds)
	es_di = Mem0[0x0DB6:0x0075:segptr32]
	es = SLICE(es_di, selector, 16) (alias)
	di = (word16) es_di (alias)
	ax = di
	al = (byte) ax (alias)
	bx = ax
	cx = 0x7FFF
	ch = SLICE(cx, byte, 8) (alias)
	cl = (byte) cx (alias)
l0800_0039:
	SCZO = cond(Mem0[es:di + 0x0000:word16] - 0x3738)
	Z = SCZO (alias)
	branch Test(NE,Z) l0800_0059
l0800_0040:
	dx = Mem0[es:di + 0x0002:word16]
	dl = (byte) dx (alias)
	dh = SLICE(dx, byte, 8) (alias)
	SCZO = cond(dl - 0x3D)
	Z = SCZO (alias)
	branch Test(NE,Z) l0800_0059
l0800_0049:
	dh = dh & 0xDF
	v20 = Mem0[0x0DB6:0x0081:word16] + 0x0001
	Mem0[0x0DB6:0x0081:word16] = v20
	SCZO = cond(dh - 0x59)
	Z = SCZO (alias)
	branch Test(NE,Z) l0800_0059
l0800_0055:
	v21 = Mem0[0x0DB6:0x0081:word16] + 0x0001
	Mem0[0x0DB6:0x0081:word16] = v21
	SZO = cond(v21)
l0800_0059:
	branch cx == 0x0000 l0800_005B
l0800_0059_1:
	SCZO = cond(al - Mem0[es:di + 0x0000:byte])
	Z = SCZO (alias)
	di = di + 0x0001
	es_di = SEQ(es, di) (alias)
	cx = cx - 0x0001
	ch = SLICE(cx, byte, 8) (alias)
	cl = (byte) cx (alias)
	branch Test(NE,Z) l0800_0059
l0800_005B:
	branch cx == 0x0000 l0800_0099
l0800_005D:
	bx = bx + 0x0001
	SCZO = cond(Mem0[es:di + 0x0000:byte] - al)
	Z = SCZO (alias)
	branch Test(NE,Z) l0800_0039
l0800_0063:
	ch = ch | 0x80
	cx = DPB(cx, ch, 8, 8) (alias)
	cx = -cx
	Mem0[0x0DB6:0x0075:word16] = cx
	cx = 0x0002
	cl = (byte) cx (alias)
	bx = bx << cl
	bx = bx + 0x0010
	bx = bx & 0xFFF0
	Mem0[0x0DB6:0x0079:word16] = bx
	dx = ss
	dl = (byte) dx (alias)
	dh = SLICE(dx, byte, 8) (alias)
	bp = bp - dx
	di = Mem0[0x0DB6:0x0376:word16]
	es_di = SEQ(es, di) (alias)
	SCZO = cond(di - 0x0200)
	C = SCZO (alias)
	branch Test(UGE,C) l0800_0090
l0800_0089:
	di = 0x0200
	es_di = SEQ(es, di) (alias)
	Mem0[0x0DB6:0x0376:word16] = 0x0200
l0800_0090:
	cl = 0x04
	di = di >>u 0x04
	di = di + 0x0001
	es_di = SEQ(es, di) (alias)
	SCZO = cond(bp - di)
	C = SCZO (alias)
	branch Test(UGE,C) l0800_009C
l0800_0099:
	fn0800_01AF(si)
	return
l0800_009C:
	bx = di
	bx = bx + dx
	Mem0[0x0DB6:0x0089:word16] = bx
	Mem0[0x0DB6:0x008D:word16] = bx
	ax = Mem0[0x0DB6:0x007B:word16]
	bx = bx - ax
	es = ax
	ah = 0x4A
	sp = fp - 0x0002
	wLoc02 = di
	C = msdos_resize_memory_block(es, bx, out bx)
	di = wLoc02
	di = di << 0x04
	__cli()
	ss = dx
	sp = di
	ax = 0x0000
	al = (byte) ax (alias)
	es = Mem0[0x0800:0x01C7:selector]
	di = 0x0618
	es_di = SEQ(es, di) (alias)
	cx = 0x06C2
	cx = 0x00AA
	ch = SLICE(cx, byte, 8) (alias)
	cl = (byte) cx (alias)
	SCZO = cond(0x00AA)
l0800_00CC:
	branch cx == 0x0000 l0800_00CE
l0800_00CC_1:
	Mem0[es:di + 0x0000:byte] = al
	di = di + 0x0001
	es_di = SEQ(es, di) (alias)
	cx = cx - 0x0001
	ch = SLICE(cx, byte, 8) (alias)
	cl = (byte) cx (alias)
	goto l0800_00CC
l0800_00CE:
	sp = sp - 0x0002
	call SEQ(cs, Mem0[ds:0x05FE:word16]) (retsize: 2; depth: 2)
	si = fn0800_05CF(ds, wLoc04, wLoc02, out ds)
	fn0800_06CD(si, ds)
	sp = sp + 0x0004
	ah = 0x00
	cx = bios_get_system_time(out dx)
	Mem0[ds:0x0083:word16] = dx
	Mem0[ds:0x0085:word16] = cx
	sp = sp - 0x0002
	call SEQ(cs, Mem0[ds:0x0602:word16]) (retsize: 2; depth: 2)
	sp = sp - 0x0002
	Mem0[ss:sp + 0x0000:word16] = Mem0[ds:0x0073:word16]
	sp = sp - 0x0002
	Mem0[ss:sp + 0x0000:word16] = Mem0[ds:0x0071:word16]
	sp = sp - 0x0002
	Mem0[ss:sp + 0x0000:word16] = Mem0[ds:0x006F:word16]
	sp = sp - 0x0002
	Mem0[ss:sp + 0x0000:word16] = Mem0[ds:0x006D:word16]
	sp = sp - 0x0002
	Mem0[ss:sp + 0x0000:word16] = Mem0[ds:0x006B:word16]
	ax = fn087B_0004(ds)
	al = (byte) ax (alias)
	sp = sp - 0x0002
	Mem0[ss:sp + 0x0000:word16] = ax
	fn0BCA_0002(ds)
l0800_0108_thunk_fn0800_010D:
	fn0800_010D(al, bArg02)
	return
fn0800_0000_exit:
}

void fn0800_010D(byte al, byte bArg02)
{
	selector ds_3 = Mem0[0x0800:0x01C7:selector];
	fn0800_0172(al, ds_3);
	SEQ(cs, Mem0[ds_3:0x0600:word16])();
	msdos_terminate(bArg02);
}

void fn0800_012F(byte al, selector ds)
{
	word32 es_bx_6 = msdos_get_interrupt_vector(al);
	Mem9[ds:0x005B:word16] = (word16) es_bx_6;
	Mem10[ds:0x005D:word16] = SLICE(es_bx_6, selector, 16);
	word32 es_bx_11 = msdos_get_interrupt_vector(al);
	Mem14[ds:0x005F:word16] = (word16) es_bx_11;
	Mem15[ds:0x0061:word16] = SLICE(es_bx_11, selector, 16);
	word32 es_bx_16 = msdos_get_interrupt_vector(al);
	Mem19[ds:0x0063:word16] = (word16) es_bx_16;
	Mem20[ds:0x0065:word16] = SLICE(es_bx_16, selector, 16);
	word32 es_bx_21 = msdos_get_interrupt_vector(al);
	Mem24[ds:0x0067:word16] = (word16) es_bx_21;
	Mem25[ds:0x0069:word16] = SLICE(es_bx_21, selector, 16);
	msdos_set_interrupt_vector(0x00, SEQ(cs, 0x0125));
	return;
}

void fn0800_0172(byte al, selector ds)
{
	msdos_set_interrupt_vector(al, Mem0[ds:0x005B:segptr32]);
	msdos_set_interrupt_vector(al, Mem0[ds:0x005F:segptr32]);
	msdos_set_interrupt_vector(al, Mem0[ds:0x0063:segptr32]);
	msdos_set_interrupt_vector(0x06, Mem0[ds:0x0067:segptr32]);
	return;
}

word16 fn0800_01A7(word16 cx, word16 dx, selector ds)
{
	word16 ax_8;
	msdos_write_file(0x0002, cx, ds_dx, out ax_8);
	return 0x0002;
}

void fn0800_01AF(word16 si)
{
fn0800_01AF_entry:
l0800_01AF:
	selector ds_3 = Mem0[0x0800:0x01C7:selector]
	word16 bx_4 = fn0800_01A7(0x001E, 0x003D, ds_3)
	fn0800_010D(0x03, bLoc04)
	Mem13[ds_3:bx_4 + si:byte] = Mem0[ds_3:bx_4 + si:byte] + 0x03
	branch fp - 0x0008 != fp - 0x0006 l0800_0208
l0800_01D5:
	__syscall(0x11)
	branch (fp - 0x0008 & 0x0002) == 0x0000 l0800_0240
l0800_01DC:
	__outb(0xF0, 0x00)
l0800_0208:
	__outb(0xF0, 0x00)
l0800_0240:
	return
fn0800_01AF_exit:
}

word16 fn0800_05CF(selector ds, word16 wArg00, word16 wArg02, ptr16 dsOut)
{
	*dsOut = ds;
	selector es_238;
	Mem3[0x0800:0x05C7:word16] = wArg00;
	Mem6[0x0800:0x05C9:word16] = wArg02;
	Mem9[0x0800:0x05CB:word16] = ds;
	word16 si_26 = Mem9[ds:0x0075:word16];
	selector es_11 = Mem9[ds:0x007B:selector];
	word16 ax_16 = DPB(ax, Mem9[ds:0x0080:byte], 0, 8);
	word16 si_100 = si_26 + 0x0002;
	word16 cx_257 = 0x0001;
	es_238 = es_11;
	if (Mem9[ds:0x007D:byte] >=u 0x03)
	{
		es_238 = Mem9[ds:0x0077:selector];
		word16 di_239 = si_26 + 0x0002;
		byte cl_240 = 0x7F;
		word16 cx_241 = 0x007F;
		do
		{
			if (cx_241 == 0x0000)
				break;
			cx_241 = cx_241 - 0x0001;
			di_239 = di_267 + 0x0001;
			cl_240 = (byte) cx_241;
			word16 di_267 = di_239;
		} while (0x00 != Mem9[es_238:di_267 + 0x0000:byte]);
		if (cx_241 != 0x0000)
		{
			cx_257 = DPB(cx_241, cl_240 ^ 0x7F, 0, 8);
l0800_0612:
			word16 di_86 = fp + 0x0002 - ((ax_16 + 0x0002) + cx_257 & 0xFFFE) + 0x0001;
			if (di_86 >=u 0x0000)
			{
				Mem96[ss:di_86 - 0x0002:word16] = cx_257;
				word16 cx_102 = cx_257 - 0x0001 + 0x0001;
				di_101 = di_86;
				word16 di_101;
				while (cx_102 != 0xFFFF)
				{
					Mem105[ss:di_101 + 0x0000:byte] = Mem96[es_238:si_100 + 0x0000:byte];
					si_100 = si_100 + 0x0001;
					di_101 = di_101 + 0x0001;
					cx_102 = cx_102 - 0x0001;
				}
				Mem112[ss:di_101 + 0x0000:byte] = 0x00;
				word16 di_113 = di_101 + 0x0000;
				word16 si_116 = 0x0081;
				word16 cx_118 = ax_16 + 0x0001;
				word16 ax_121 = cx_102;
				byte al_123 = (byte) cx_102;
				word16 dx_124 = cx_102;
				word16 bx_125 = cx_102 + 0x0000;
				while (true)
				{
					byte CZ_140 = fn0800_065D(ax_121, cx_118, dx_124, bx_125, si_116, di_113, ss, es_11, out ax_121, out cx_118, out dx_124, out bx_125, out si_116, out di_113);
					byte C_141 = CZ_140;
					if (!CZ_140)
						do
						{
							if (C_141)
							{
								word16 cx_190 = Mem112[ss:di_86 - 0x0002:word16] + dx_124;
								selector ds_192 = Mem112[0x0800:0x05CB:selector];
								*dsOut = ds_192;
								Mem193[ds_192:0x006B:word16] = bx_125;
								word16 bx_196 = (bx_125 + 0x0001) * 0x0002 * 0x0002;
								si_100 = di_86;
								word16 bp_199 = di_86 - bx_196 + 0x0002;
								if (bp_199 >=u 0x0000)
								{
									Mem203[ds_192:0x006D:word16] = bp_199;
									Mem204[ds_192:0x006F:word16] = ss;
									do
									{
										if (cx_190 == 0x0000)
											break;
										Mem222[ss:bp_199 + 0x0000:word16] = si_100;
										Mem223[ss:bp_199 + 0x0000:word16] = ss;
										bp_199 = bp_199 + 0x0004;
										do
										{
											byte al_228 = Mem223[ds_192:si_100 + 0x0000:byte];
											si_100 = si_100 + 0x0001;
											cx_190 = cx_190 - 0x0001;
										} while (al_228 != 0x00 && cx_190 != 0x0000);
									} while (al_228 == 0x00);
									Mem219[ss:bp_199 + 0x0000:word16] = 0x0000;
									Mem220[ss:bp_199 + 0x0002:word16] = 0x0000;
									Mem220[0x0800:0x05C7:ptr32]();
									return si_100;
								}
								else
									goto l0800_0685;
							}
							byte CZ_183 = fn0800_065D(ax_121, cx_118, dx_124, bx_125, si_116, di_113, ss, es_11, out ax_121, out cx_118, out dx_124, out bx_125, out si_116, out di_113);
							C_141 = CZ_183;
						} while (CZ_183);
l0800_064D:
					if (al_123 != 0x20 && (al_123 != 0x0D && al_123 != 0x09))
						continue;
					al_123 = 0x00;
					ax_121 = DPB(ax_121, 0x00, 0, 8);
				}
			}
			else
			{
l0800_0685:
				fn0800_01AF(si_100);
				return si_100;
			}
		}
		else
			goto l0800_0685;
	}
	else
		goto l0800_0612;
fn0800_05CF_exit:
}

byte fn0800_065D(word16 ax, word16 cx, word16 dx, word16 bx, word16 si, word16 di, selector es, selector ds, ptr16 axOut, ptr16 cxOut, ptr16 dxOut, ptr16 bxOut, ptr16 siOut, ptr16 diOut)
{
	*dxOut = dx;
	*diOut = di;
	*bxOut = bx;
	*cxOut = cx;
	*siOut = si;
	word16 ax_15 = ax;
	byte al_4 = (byte) ax;
	if (ax != 0x0000)
	{
		Mem78[es:di + 0x0000:byte] = al_4;
		word16 dx_77;
		*dxOut = dx + 0x0001;
		word16 di_80;
		*diOut = di + 0x0001;
		ax_15 = DPB(ax, al_4, 0, 8);
		if (al_4 == 0x00)
		{
			word16 bx_86;
			*bxOut = bx + 0x0001;
		}
	}
	word16 ax_21;
	*axOut = DPB(ax_15, 0x00, 0, 8);
	byte CZ_26 = true;
	if (cx != 0x0000)
	{
		byte al_46 = Mem0[ds:si + 0x0000:byte];
		word16 si_47 = si + 0x0001;
		*siOut = si_47;
		word16 cx_48 = cx - 0x0001;
		*cxOut = cx_48;
		word16 ax_50;
		*axOut = DPB(ax_15, al_46 - 0x22, 0, 8);
		CZ_26 = cond(al_46 - 0x22);
		if (al_46 != 0x22)
		{
			word16 ax_57;
			*axOut = DPB(ax_15, al_46, 0, 8);
			if (al_46 == 0x5C && Mem0[ds:si + 0x0001:byte] == 0x22)
			{
				word16 ax_73;
				*axOut = DPB(ax_15, Mem0[ds:si + 0x0001:byte], 0, 8);
				si_47 = si + 0x0002;
				word16 cx_75;
				*cxOut = cx - 0x0002;
			}
			word16 si_64;
			*siOut = si_47;
			CZ_26 = false;
		}
	}
	return CZ_26;
}

void fn0800_06CD(word16 si, selector ds)
{
	selector es_4 = Mem0[ds:0x0077:selector];
	word16 dx_12;
	word16 ax_13 = fn0BD0_0004(ds, Mem0[ds:0x0079:word16], out dx_12);
	Mem18[ds:0x0071:word16] = ax_13;
	Mem19[ds:0x0073:word16] = dx_12;
	word16 di_48 = 0x0000;
	word16 bx_15 = ax_13 + 0x0002;
	if ((ax_13 | dx_12) == 0x0000)
	{
		fn0800_01AF(si);
		return;
	}
	else
	{
		word16 cx_46 = 0xFFFF;
		do
		{
			Mem51[dx_12:bx_15 + 0x0000:word16] = di_48;
			Mem52[dx_12:bx_15 + 0x0000:word16] = es_4;
			bx_15 = bx_15 + 0x0004;
			do
			{
				if (cx_46 == 0x0000)
					break;
				di_48 = di_48 + 0x0001;
				cx_46 = cx_46 - 0x0001;
			} while (0x00 != Mem52[es_4:di_48 + 0x0000:byte]);
		} while (Mem52[es_4:di_48 + 0x0000:byte] != 0x00);
		Mem63[dx_12:bx_15 + 0x0000:word16] = 0x0000;
		Mem64[dx_12:bx_15 + 0x0002:word16] = 0x0000;
		return;
	}
}

word16 fn0800_0711(word16 ax, word16 cx, word16 dx, word16 bx, ptr16 dxOut)
{
	byte cl_7 = (byte) cx;
	if (cx < 0x0000)
	{
		word16 bx_33 = (word16) (SEQ(~cx, ~bx + 0x0001) + 0x00000001);
		word16 ax_39 = ax - bx_33;
		byte al_40 = (byte) ax_39;
		if (ax_39 <u 0x0000)
			dx = dx - 0x1000;
		word16 dx_54;
		*dxOut = dx - DPB(bx_33, 0x00, 0, 8) + (ax_39 >>u 0x04);
		return DPB(ax_39 >>u 0x04, al_40, 0, 8) & 0x000F;
	}
	else
	{
		word16 ax_65 = ax + bx;
		byte al_66 = (byte) ax_65;
		if (ax_65 <u 0x0000)
		{
			dx = dx + 0x1000;
			dh = SLICE(dx + 0x1000, byte, 8);
		}
		word16 dx_80;
		*dxOut = DPB(dx, dh + (cl_7 << 0x04), 8, 8) + (ax_65 >>u 0x04);
		return DPB(ax_65 >>u 0x04, al_66, 0, 8) & 0x000F;
	}
}

byte fn0800_076C(word16 ax, word16 cx, word16 dx, word16 bx)
{
	word16 dx_11 = dx + (ax >>u 0x04);
	word16 cx_20 = cx + (bx >>u 0x04);
	word16 ax_15 = DPB(ax >>u 0x04, bl, 8, 8);
	word16 bx_22 = DPB(bx >>u 0x04, bl, 0, 8);
	byte CZ_32 = cond(dx_11 - cx_20);
	if (dx_11 == cx_20)
		CZ_32 = cond((ax_15 & 0x000F) - (bx_22 & 0x000F));
	return CZ_32;
}

word16 fn087B_0004(selector ds)
{
fn087B_0004_entry:
l087B_0004:
	word16 si_22
	fn0CFE_0002(ds, 0x0098, ds, out si_22)
	goto l087B_01A6
l087B_0022:
	branch si_22 <=u 0x0005 l087B_002C
l087B_0029:
	goto l087B_01A3
l087B_002C:
l087B_01A3:
l087B_01A5:
	si_22 = si_22 + 0x0001
l087B_01A6:
	branch si_22 >= 0x0006 l087B_01AE
l087B_01AB:
	goto l087B_0022
l087B_01AE:
	Mem43[ss:fp - 0x00DA:word16] = 0x0007
	Mem49[ss:fp - 0x00DE:word16] = 0x011C
	word16 si_50
	return fn0CFE_0002(ds, 0x0098, ds, out si_50)
fn087B_0004_exit:
}

void fn0BC6_0006(selector ds, word16 wArg04)
{
	word16 si_18;
	word16 si_11 = wArg04;
	if (wArg04 >= 0x0000)
	{
		if (wArg04 >u 0x0058)
		{
l0BC6_0016:
			si_11 = 0x0057;
		}
		Mem30[ds:0x030E:word16] = si_11;
		si_18 = (int16) Mem30[ds:si_11 + 0x0310:byte];
	}
	else
	{
		si_18 = -wArg04;
		if (si_18 <=u 0x0023)
			Mem44[ds:0x030E:word16] = 0xFFFF;
		else
			goto l0BC6_0016;
	}
	Mem20[ds:0x007F:word16] = si_18;
	return;
}

void fn0BCA_0002(selector ds)
{
fn0BCA_0002_entry:
l0BCA_0002:
	goto l0BCA_0013
l0BCA_0007:
l0BCA_0013:
	word16 ax_8 = Mem0[ds:0x0378:word16]
	Mem10[ds:0x0378:word16] = Mem0[ds:0x0378:word16] - 0x0001
	branch ax_8 != 0x0000 l0BCA_0007
l0BCA_001E:
fn0BCA_0002_exit:
}

word16 fn0BD0_0004(selector ds, word16 wArg04, ptr16 dxOut)
{
	word16 dx_16;
	word16 ax_17 = fn0BD0_0205(ds, wArg04, 0x0000, out dx_16);
	return ax_17;
}

void fn0BD0_0019(selector ds, segptr32 ptrArg04, word16 wArg06)
{
	selector es_10 = SLICE(ptrArg04, selector, 16);
	word16 bx_11 = (word16) ptrArg04;
	word16 dx_13 = Mem0[es_10:bx_11 + 0x000E:word16];
	word16 ax_14 = Mem0[es_10:bx_11 + 0x000C:word16];
	Mem15[ds:0x0384:word16] = dx_13;
	Mem17[ds:0x0382:word16] = ax_14;
	if (!fn0800_076C(ax_14, wArg06, dx_13, wArg04))
	{
		Mem35[ds:0x0384:word16] = 0x0000;
		Mem36[ds:0x0382:word16] = 0x0000;
	}
	else
	{
		ptr32 es_bx_43 = Mem17[SLICE(ptrArg04, selector, 16):(word16) ptrArg04 + 0x0008:segptr32];
		ptr32 es_bx_51 = Mem17[ds:0x0382:segptr32];
		selector es_52 = SLICE(es_bx_51, selector, 16);
		word16 bx_53 = (word16) es_bx_51;
		Mem54[es_52:bx_53 + 0x000A:word16] = SLICE(es_bx_43, selector, 16);
		word16 bx_45 = (word16) es_bx_43;
		Mem55[es_52:bx_53 + 0x0008:word16] = bx_45;
		segptr32 ptrLoc06_48 = DPB(ptrLoc06, bx_45, 0, 16);
		word16 ax_57 = Mem55[ds:0x0382:word16];
		selector es_59 = SLICE(ptrLoc06_48, selector, 16);
		word16 bx_60 = (word16) ptrLoc06_48;
		Mem61[es_59:bx_60 + 0x000E:word16] = Mem55[ds:0x0384:word16];
		Mem62[es_59:bx_60 + 0x000C:word16] = ax_57;
	}
	return;
}

word16 fn0BD0_0081(selector ds, segptr32 ptrArg04, word16 wArg06, word16 wArg08, word16 wArg0A, ptr16 dxOut)
{
	selector es_13 = SLICE(ptrArg04, selector, 16);
	word16 bx_14 = (word16) ptrArg04;
	word16 v11_16 = Mem0[es_13:bx_14 + 0x0000:word16] - wArg08;
	Mem17[es_13:bx_14 + 0x0000:word16] = v11_16;
	Mem21[es_13:bx_14 + 0x0002:word16] = Mem17[es_13:bx_14 + 0x0002:word16] - wArg0A - (v11_16 <u 0x0000);
	selector es_24 = SLICE(ptrArg04, selector, 16);
	word16 bx_25 = (word16) ptrArg04;
	word16 dx_32;
	word16 ax_33 = fn0800_0711(wArg04, Mem21[es_24:bx_25 + 0x0002:word16], wArg06, Mem21[es_24:bx_25 + 0x0000:word16], out dx_32);
	segptr32 ptrLoc06_37 = DPB(ptrLoc06, ax_33, 0, 16);
	ui32 dx_ax_41 = SEQ(wArg0A, wArg08 + 0x0001);
	selector es_48 = SLICE(ptrLoc06_37, selector, 16);
	word16 bx_49 = (word16) ptrLoc06_37;
	Mem50[es_48:bx_49 + 0x0002:word16] = SLICE(dx_ax_41 + 0x00000001, word16, 16);
	Mem51[es_48:bx_49 + 0x0000:word16] = (word16) (dx_ax_41 + 0x00000001);
	selector es_55 = SLICE(ptrLoc06_37, selector, 16);
	word16 bx_56 = (word16) ptrLoc06_37;
	Mem57[es_55:bx_56 + 0x0006:word16] = wArg06;
	Mem58[es_55:bx_56 + 0x0004:word16] = wArg04;
	if (!fn0800_076C(Mem58[ds:0x037E:word16], wArg06, Mem58[ds:0x0380:word16], wArg04))
	{
		Mem85[ds:0x0380:word16] = SLICE(ptrLoc06_37, selector, 16);
		Mem86[ds:0x037E:word16] = (word16) ptrLoc06_37;
	}
	else
	{
		word16 dx_91;
		segptr32 ptrArg04_95 = DPB(ptrArg04, fn0800_0711(ax_33, wArg0A, dx_32, wArg08, out dx_91), 0, 16);
		selector es_99 = SLICE(ptrArg04_95, selector, 16);
		word16 bx_100 = (word16) ptrArg04_95;
		Mem101[es_99:bx_100 + 0x0006:word16] = dx_32;
		Mem102[es_99:bx_100 + 0x0004:word16] = ax_33;
	}
	word16 dx_73;
	*dxOut = dx_32;
	return ax_33 + 0x0008;
}

word16 fn0BD0_0131(selector ds, word16 wArg04, word16 wArg06, ptr16 dxOut)
{
	word16 ax_31;
	word16 dx_15;
	word16 ax_16 = fn0C01_00DB(ds, wArg04, wArg06, out dx_15);
	if (dx_15 == 0xFFFF && ax_16 == 0xFFFF)
	{
		word16 dx_76;
		*dxOut = 0x0000;
		ax_31 = 0x0000;
	}
	else
	{
		word16 ax_42 = Mem0[ds:0x037E:word16];
		selector es_45 = SLICE(ptrLoc06, selector, 16);
		word16 bx_46 = (word16) ptrLoc06;
		Mem47[es_45:bx_46 + 0x0006:word16] = Mem0[ds:0x0380:word16];
		Mem48[es_45:bx_46 + 0x0004:word16] = ax_42;
		ui32 dx_ax_52 = SEQ(wArg06, wArg04 + 0x0001);
		selector es_58 = SLICE(ptrLoc06, selector, 16);
		word16 bx_59 = (word16) ptrLoc06;
		Mem60[es_58:bx_59 + 0x0002:word16] = SLICE(dx_ax_52 + 0x00000001, word16, 16);
		Mem61[es_58:bx_59 + 0x0000:word16] = (word16) (dx_ax_52 + 0x00000001);
		Mem65[ds:0x0380:word16] = SLICE(ptrLoc06, selector, 16);
		Mem66[ds:0x037E:word16] = (word16) ptrLoc06;
		word16 dx_67;
		*dxOut = Mem66[ds:0x0380:word16];
		ax_31 = Mem66[ds:0x037E:word16] + 0x0008;
	}
	return ax_31;
}

word16 fn0BD0_019F(selector ds, word16 wArg04, word16 wArg06, ptr16 dxOut)
{
	word16 ax_31;
	word16 dx_15;
	word16 ax_16 = fn0C01_00DB(ds, wArg04, wArg06, out dx_15);
	if (dx_15 == 0xFFFF && ax_16 == 0xFFFF)
	{
		word16 dx_73;
		*dxOut = 0x0000;
		ax_31 = 0x0000;
	}
	else
	{
		Mem44[ds:0x037C:word16] = SLICE(ptrLoc06, selector, 16);
		Mem45[ds:0x037A:word16] = (word16) ptrLoc06;
		Mem49[ds:0x0380:word16] = SLICE(ptrLoc06, selector, 16);
		Mem50[ds:0x037E:word16] = (word16) ptrLoc06;
		ui32 dx_ax_54 = SEQ(wArg06, wArg04 + 0x0001);
		selector es_60 = SLICE(ptrLoc06, selector, 16);
		word16 bx_61 = (word16) ptrLoc06;
		Mem62[es_60:bx_61 + 0x0002:word16] = SLICE(dx_ax_54 + 0x00000001, word16, 16);
		Mem63[es_60:bx_61 + 0x0000:word16] = (word16) (dx_ax_54 + 0x00000001);
		word16 dx_64;
		*dxOut = dx_15;
		ax_31 = ax_16 + 0x0008;
	}
	return ax_31;
}

word16 fn0BD0_0205(selector ds, word16 wArg04, word16 wArg06, ptr16 dxOut)
{
	word16 ax_122;
	if ((wArg04 | wArg06) == 0x0000)
	{
		word16 dx_41;
		*dxOut = 0x0000;
		ax_122 = 0x0000;
	}
	else
	{
		ui32 dx_ax_64 = SEQ(wArg06, wArg04 + 0x0017);
		word16 ax_67 = (word16) (dx_ax_64 + 0x00000017);
		word16 dx_68 = SLICE(dx_ax_64 + 0x00000017, word16, 16);
		if (!fn0800_076C(Mem0[ds:0x037A:word16], 0x0000, Mem0[ds:0x037C:word16], 0x0000))
		{
			word16 dx_88;
			ax_122 = fn0BD0_019F(ds, ax_67 & 0xFFF0, dx_68 & 0xFFFF, out dx_88);
		}
		else
		{
			word16 dx_95 = Mem0[ds:0x0384:word16];
			word16 ax_96 = Mem0[ds:0x0382:word16];
			word16 wLoc04_128 = dx_95;
			word16 wLoc06_129 = ax_96;
			if (!fn0800_076C(ax_96, 0x0000, dx_95, 0x0000))
			{
l0BD0_0302:
				word16 dx_121;
				ax_122 = fn0BD0_0131(ds, ax_67 & 0xFFF0, dx_68 & 0xFFFF, out dx_121);
			}
			else
			{
				word16 bx_132 = (word16) ptrLoc06;
				selector es_133 = SLICE(ptrLoc06, selector, 16);
				ui32 cx_bx_141 = SEQ(dx_68 & 0xFFFF, (ax_67 & 0xFFF0) + 0x0030);
				word16 dx_134 = Mem0[es_133:bx_132 + 0x0002:word16];
				word16 ax_135 = Mem0[es_133:bx_132 + 0x0000:word16];
				word16 cx_144 = SLICE(cx_bx_141 + 0x00000030, word16, 16);
				word16 bx_145 = (word16) (cx_bx_141 + 0x00000030);
				while (dx_134 <u cx_144 || dx_134 == cx_144 && ax_135 <u bx_145)
				{
					word16 bx_152 = (word16) ptrLoc06;
					selector es_153 = SLICE(ptrLoc06, selector, 16);
					word16 dx_154 = Mem0[es_153:bx_152 + 0x0002:word16];
					word16 ax_155 = Mem0[es_153:bx_152 + 0x0000:word16];
					if (dx_154 >=u (dx_68 & 0xFFFF) && (dx_154 != (dx_68 & 0xFFFF) || ax_155 >=u (ax_67 & 0xFFF0)))
					{
						fn0BD0_0019(ds, DPB(ptrLoc0A, wLoc06_129, 0, 16), wLoc04_128);
						word16 bx_189 = (word16) ptrLoc06;
						selector es_190 = SLICE(ptrLoc06, selector, 16);
						word16 v16_191 = Mem0[es_190:bx_189 + 0x0000:word16] + 0x0001;
						Mem192[es_190:bx_189 + 0x0000:word16] = v16_191;
						Mem196[es_190:bx_189 + 0x0002:word16] = Mem192[es_190:bx_189 + 0x0002:word16] + (v16_191 <u 0x0000);
						word16 dx_197;
						*dxOut = wLoc04_128;
						ax_122 = wLoc06_129 + 0x0008;
						goto l0BD0_0310;
					}
					ptr32 es_bx_167 = Mem0[SLICE(ptrLoc06, selector, 16):(word16) ptrLoc06 + 0x000C:segptr32];
					selector es_169 = SLICE(es_bx_167, selector, 16);
					word16 bx_168 = (word16) es_bx_167;
					wLoc04_128 = es_169;
					wLoc06_129 = bx_168;
					if (fn0800_076C(bx_168, Mem0[ds:0x0384:word16], es_169, Mem0[ds:0x0382:word16]))
						goto l0BD0_0302;
					bx_132 = (word16) ptrLoc06;
					es_133 = SLICE(ptrLoc06, selector, 16);
					cx_bx_141 = SEQ(dx_68 & 0xFFFF, (ax_67 & 0xFFF0) + 0x0030);
					dx_134 = Mem0[es_133:bx_132 + 0x0002:word16];
					ax_135 = Mem0[es_133:bx_132 + 0x0000:word16];
					cx_144 = SLICE(cx_bx_141 + 0x00000030, word16, 16);
					bx_145 = (word16) (cx_bx_141 + 0x00000030);
				}
				word16 dx_215;
				ax_122 = fn0BD0_0081(ds, DPB(ptrLoc0E, wLoc06_129, 0, 16), wLoc04_128, ax_67 & 0xFFF0, dx_68 & 0xFFFF, out dx_215);
			}
		}
	}
l0BD0_0310:
	return ax_122;
}

word16 fn0C01_0004(selector ds, segptr32 ptrArg02, word16 wArg04)
{
	word16 ax_101;
	word16 ax_21 = wArg04 + 0x0001 - Mem0[ds:0x007B:word16] + 0x003F >>u 0x06;
	if (ax_21 == Mem0[ds:0x0386:word16])
	{
		Mem50[ds:0x008D:word16] = SLICE(ptrArg02, selector, 16);
		Mem51[ds:0x008B:word16] = (word16) ptrArg02;
		ax_101 = 0x0001;
	}
	else
	{
		word16 ax_65 = (ax_21 << 0x06) + Mem0[ds:0x007B:word16];
		word16 si_109 = ax_21 << 0x06;
		word16 di_63 = Mem0[ds:0x0091:word16];
		byte al_66 = (byte) ax_65;
		if (ax_65 >u di_63)
			si_109 = di_63 - Mem0[ds:0x007B:word16];
		word16 ax_74 = fn0C17_000C(al_66, ds, Mem0[ds:0x007B:word16], si_109);
		if (ax_74 == 0xFFFF)
		{
			Mem86[ds:0x0386:word16] = si_109 >>u 0x06;
			Mem90[ds:0x008D:word16] = SLICE(ptrArg02, selector, 16);
			Mem91[ds:0x008B:word16] = (word16) ptrArg02;
			ax_101 = 0x0001;
		}
		else
		{
			Mem99[ds:0x0091:word16] = Mem0[ds:0x007B:word16] + ax_74;
			Mem100[ds:0x008F:word16] = 0x0000;
			ax_101 = 0x0000;
		}
	}
	return ax_101;
}

word16 fn0C01_00DB(selector ds, word16 wArg04, word16 wArg06, ptr16 dxOut)
{
	word16 ax_31;
	if (wArg06 >= 0x0010 && (wArg06 > 0x0010 || wArg04 >u 0x0000))
	{
		word16 dx_93;
		*dxOut = 0xFFFF;
		ax_31 = 0xFFFF;
	}
	else
	{
		word16 dx_44;
		word16 ax_45 = fn0800_0711(Mem0[ds:0x008B:word16], wArg06, Mem0[ds:0x008D:word16], wArg04, out dx_44);
		if (!fn0800_076C(ax_45, Mem0[ds:0x0089:word16], dx_44, Mem0[ds:0x0087:word16]) && fn0800_076C(ax_45, Mem0[ds:0x0091:word16], dx_44, Mem0[ds:0x008F:word16]))
		{
			ptr32 es_bx_71 = Mem0[ds:0x008B:segptr32];
			word16 bx_72 = (word16) es_bx_71;
			selector es_73 = SLICE(es_bx_71, selector, 16);
			if (fn0C01_0004(ds, DPB(ptrLoc0E, ax_45, 0, 16), dx_44) == 0x0000)
			{
				word16 dx_87;
				*dxOut = 0xFFFF;
				ax_31 = 0xFFFF;
			}
			else
			{
				word16 dx_89;
				*dxOut = es_73;
				ax_31 = bx_72;
			}
		}
		else
		{
			word16 dx_57;
			*dxOut = 0xFFFF;
			ax_31 = 0xFFFF;
		}
	}
	return ax_31;
}

word16 fn0C17_000C(byte al, selector ds, selector psegArg04, word16 wArg06)
{
	word16 ax_17;
	word16 ax_8 = DPB(ax, 0x4A, 8, 8);
	word16 bx_13;
	if (!msdos_resize_memory_block(psegArg04, wArg06, out bx_13))
		ax_17 = 0xFFFF;
	else
	{
		fn0BC6_0006(ds, ax_8);
		ax_17 = bx_13;
	}
	return ax_17;
}

word16 fn0CFE_0002(selector ds, word16 wArg04, word16 wArg06, ptr16 siOut)
{
	*siOut = si;
	word16 ax_32 = fn0D28_002B(ds, DPB(ptrLoc0E, wArg04, 0, 16), wArg06);
	return ax_32;
}

word16 fn0D28_002B(selector ds, segptr32 ptrArg08, selector psegArg0A)
{
fn0D28_002B_entry:
l0D28_002B:
	byte bLoc57_105 = 0x50
l0D28_008A:
	word16 di_103 = fp - 0x0056
	word16 si_101 = (word16) ptrArg08
l0D28_009A:
	byte al_37 = Mem0[ds:si_101 + 0x0000:byte]
	si_101 = si_101 + 0x0001
	byte al_100 = al_37
	ax = DPB(ax, al_37, 0, 8) (alias)
	branch al_37 == 0x00 l0D28_00B2
l0D28_00A0:
	branch al_37 == 0x25 l0D28_00B5
l0D28_00A4:
	Mem102[ss:di_103 + 0x0000:byte] = al_100
	byte v16_104 = bLoc57_105 - 0x01
	di_103 = di_103 + 0x0001
	bLoc57_105 = v16_104
	branch v16_104 > 0x00 l0D28_009A
l0D28_00AD:
	fn0D28_005A(fp - 0x0002, di_103)
	goto l0D28_009A
l0D28_00B2:
	goto l0D28_0550
l0D28_00B5:
	al_100 = Mem0[ds:si_101 + 0x0000:byte]
	ax = DPB(ax, al_100, 0, 8) (alias)
	si_101 = si_101 + 0x0001
	branch al_100 == 0x25 l0D28_00A4
l0D28_00BF:
l0D28_00E3:
	word16 ax_125 = DPB(ax, 0x00, 8, 8)
	byte bl_128 = (byte) ax_125
	word16 bx_130 = DPB(ax_125, bl_128 - 0x20, 0, 8)
	branch bl_128 >=u 0x80 l0D28_0138
l0D28_00F1:
	branch DPB(ax_125, Mem0[ds:bx_130 + 0x059D:byte], 0, 8) <=u 0x0017 l0D28_00FF
l0D28_00FC:
	goto l0D28_053A
l0D28_00FF:
l0D28_0138:
l0D28_053A:
	word16 si_139 = si_101
	byte al_144 = 0x25
l0D28_0547:
	di_103 = fn0D28_0051(fp - 0x0002, di_103, al_144)
	byte al_153 = Mem0[ds:si_139 + 0x0000:byte]
	si_139 = si_139 + 0x0001
	al_144 = al_153
	branch al_153 != 0x00 l0D28_0547
l0D28_0550:
	branch bLoc57_105 >= 0x50 l0D28_0559
	branch bLoc57_105 >= 0x50 l0D28_0559
l0D28_0556:
	fn0D28_005A(fp - 0x0002, di_103)
	fn0D28_005A(fp - 0x0002, di_103)
l0D28_0559:
	word16 ax_78
	branch 0x0000 == 0x0000 l0D28_0567
l0D28_0560:
	ax_78 = 0xFFFF
	goto l0D28_056C
l0D28_0567:
	ax_78 = 0x0000
l0D28_056C:
	return ax_78
fn0D28_002B_exit:
}

word16 fn0D28_0051(word16 bp, word16 di, byte al)
{
	Mem3[ss:di + 0x0000:byte] = al;
	byte v8_8 = Mem3[ss:bp - 0x0055:byte] - 0x01;
	Mem9[ss:bp - 0x0055:byte] = v8_8;
	if (v8_8 > 0x00)
		fn0D28_005A(bp, di + 0x0001);
}

void fn0D28_005A(word16 bp, word16 di)
{
fn0D28_005A_entry:
l0D28_005A:
fn0D28_005A_exit:
}

void fn0D28_0089()
{
	return;
}

