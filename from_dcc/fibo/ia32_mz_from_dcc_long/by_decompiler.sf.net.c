// subject.c
// Generated on TIMESTAMP by decompiling from_dcc/fibo/ia32_mz_from_dcc_long/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0800_0000(word16 si, selector es, selector ds)
{
fn0800_0000_entry:
l0800_0000:
	sp = fp
	dx = 0x0A6B
	Mem0[0x0800:0x01C7:word16] = 0x0A6B
	ah = 0x30
	al = msdos_get_dos_version(out ah)
	ax = DPB(ax, al, 0, 8) (alias)
	bp = Mem0[ds:0x0002:word16]
	bx = Mem0[ds:0x002C:word16]
	ds = 0x0A6B
	Mem0[0x0A6B:0x007D:word16] = ax
	Mem0[0x0A6B:0x007B:word16] = es
	Mem0[0x0A6B:0x0077:word16] = bx
	Mem0[0x0A6B:0x0091:word16] = bp
	Mem0[0x0A6B:0x0081:word16] = 0xFFFF
	fn0800_012F(al, ds)
	es_di = Mem0[0x0A6B:0x0075:segptr32]
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
	v20 = Mem0[0x0A6B:0x0081:word16] + 0x0001
	Mem0[0x0A6B:0x0081:word16] = v20
	SCZO = cond(dh - 0x59)
	Z = SCZO (alias)
	branch Test(NE,Z) l0800_0059
l0800_0055:
	v21 = Mem0[0x0A6B:0x0081:word16] + 0x0001
	Mem0[0x0A6B:0x0081:word16] = v21
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
	Mem0[0x0A6B:0x0075:word16] = cx
	cx = 0x0002
	cl = (byte) cx (alias)
	bx = bx << cl
	bx = bx + 0x0010
	bx = bx & 0xFFF0
	Mem0[0x0A6B:0x0079:word16] = bx
	dx = ss
	dl = (byte) dx (alias)
	dh = SLICE(dx, byte, 8) (alias)
	bp = bp - dx
	di = Mem0[0x0A6B:0x0142:word16]
	es_di = SEQ(es, di) (alias)
	SCZO = cond(di - 0x0200)
	C = SCZO (alias)
	branch Test(UGE,C) l0800_0090
l0800_0089:
	di = 0x0200
	es_di = SEQ(es, di) (alias)
	Mem0[0x0A6B:0x0142:word16] = 0x0200
l0800_0090:
	cl = 0x04
	di = di >>u 0x04
	di = di + 0x0001
	es_di = SEQ(es, di) (alias)
	SCZO = cond(bp - di)
	C = SCZO (alias)
	branch Test(UGE,C) l0800_009C
l0800_0099:
	fn0800_01AF(si, wArg00)
	return
l0800_009C:
	bx = di
	bx = bx + dx
	Mem0[0x0A6B:0x0089:word16] = bx
	Mem0[0x0A6B:0x008D:word16] = bx
	ax = Mem0[0x0A6B:0x007B:word16]
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
	di = 0x0554
	es_di = SEQ(es, di) (alias)
	cx = 0x05D4
	cx = 0x0080
	ch = SLICE(cx, byte, 8) (alias)
	cl = (byte) cx (alias)
	SCZO = cond(0x0080)
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
	call SEQ(cs, Mem0[ds:0x053E:word16]) (retsize: 2; depth: 2)
	bp = fn0800_01D1(ds, wLoc04, wLoc02, out si, out ds)
	al = fn0800_02CF(si, ds)
	sp = sp + 0x0004
	ah = 0x00
	ax = DPB(ax, ah, 8, 8) (alias)
	cx = bios_get_system_time(out dx)
	Mem0[ds:0x0083:word16] = dx
	Mem0[ds:0x0085:word16] = cx
	sp = sp - 0x0002
	call SEQ(cs, Mem0[ds:0x0542:word16]) (retsize: 2; depth: 2)
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
	fn083C_0002(bp, ds)
	sp = sp - 0x0002
	Mem0[ss:sp + 0x0000:word16] = ax
	fn084A_000A(ds)
l0800_0108_thunk_fn0800_010D:
	fn0800_010D(al, bArg02)
	return
fn0800_0000_exit:
}

void fn0800_010D(byte al, byte bArg02)
{
	selector ds_3 = Mem0[0x0800:0x01C7:selector];
	fn0800_0172(al, ds_3);
	SEQ(cs, Mem0[ds_3:0x0540:word16])();
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

void fn0800_01AF(word16 si, word16 wArg00)
{
	selector ds_3 = Mem0[0x0800:0x01C7:selector];
	word16 bx_4 = fn0800_01A7(0x001E, 0x003D, ds_3);
	fn0800_010D(0x03, bLoc04);
	Mem13[ds_3:bx_4 + si:byte] = Mem0[ds_3:bx_4 + si:byte] + 0x03;
	Mem15[ds_3:bx_4 + si:byte] = Mem13[ds_3:bx_4 + si:byte] + 0x03;
	Mem17[ds_3:bx_4 + si:byte] = Mem15[ds_3:bx_4 + si:byte] + 0x03;
	Mem19[ds_3:bx_4 + si:byte] = Mem17[ds_3:bx_4 + si:byte] + 0x03;
	Mem21[ds_3:bx_4 + si:byte] = Mem19[ds_3:bx_4 + si:byte] + 0x03;
	Mem22[0x0800:0x01C9:word16] = 0x0003;
	Mem25[0x0800:0x01CB:word16] = wArg00;
	Mem27[0x0800:0x01CD:word16] = ds_3;
	selector es_29 = Mem27[ds_3:0x007B:selector];
	word16 ax_33 = DPB(0x0003, Mem27[ds_3:0x0080:byte], 0, 8);
	word16 si_42 = Mem27[ds_3:0x0075:word16];
	if (Mem27[ds_3:0x007D:byte] >=u 0x03)
	{
		word16 bx_55;
		word16 bp_56;
		word16 si_57;
		byte al_58;
		byte ch_59;
		selector ds_60;
		fn0800_0203(0x0081, ax_33 + 0x0001, es_29, si_42 + 0x0002, 0x00, ds_3, out bx_55, out bp_56, out si_57, out al_58, out ch_59, out ds_60);
		return;
	}
	else
	{
		word16 bx_62;
		word16 bp_63;
		word16 si_64;
		byte al_65;
		byte ch_66;
		selector ds_67;
		fn0800_0214(0x0001, 0x0081, ax_33 + 0x0001, es_29, si_42 + 0x0002, es_29, out bx_62, out bp_63, out si_64, out al_65, out ch_66, out ds_67);
		return;
	}
}

word16 fn0800_01D1(selector ds, word16 wArg00, word16 wArg02, ptr16 siOut, ptr16 dsOut)
{
	Mem3[0x0800:0x01C9:word16] = wArg00;
	Mem6[0x0800:0x01CB:word16] = wArg02;
	Mem9[0x0800:0x01CD:word16] = ds;
	selector es_11 = Mem9[ds:0x007B:selector];
	word16 ax_16 = DPB(ax, Mem9[ds:0x0080:byte], 0, 8);
	word16 si_26 = Mem9[ds:0x0075:word16];
	if (Mem9[ds:0x007D:byte] >=u 0x03)
	{
		word16 bx_41;
		word16 bp_42;
		word16 si_43;
		byte al_44;
		byte ch_45;
		selector ds_46;
		word16 dx_47 = fn0800_0203(0x0081, ax_16 + 0x0001, es_11, si_26 + 0x0002, 0x00, ds, out bx_41, out bp_42, out si_43, out al_44, out ch_45, out ds_46);
	}
}

word16 fn0800_0203(word16 dx, word16 bx, word16 bp, word16 si, byte ch, selector ds, ptr16 bxOut, ptr16 bpOut, ptr16 siOut, ptr16 alOut, ptr16 chOut, ptr16 dsOut)
{
	*dsOut = ds;
	*siOut = si;
	*chOut = ch;
	*bxOut = bx;
	*bpOut = bp;
	selector es_2 = Mem0[ds:0x0077:selector];
	word16 di_16 = si;
	byte cl_17 = 0x7F;
	word16 cx_18 = DPB(cx, 0x7F, 0, 8);
	byte al_8;
	*alOut = 0x00;
	do
	{
		if (cx_18 == 0x0000)
			break;
		cx_18 = cx_18 - 0x0001;
		di_16 = di_63 + 0x0001;
		cl_17 = (byte) cx_18;
		byte ch_62;
		*chOut = SLICE(cx_18, byte, 8);
		word16 di_63 = di_16;
	} while (0x00 != Mem0[es_2:di_63 + 0x0000:byte]);
	if (cx_18 != 0x0000)
	{
		word16 cx_44 = DPB(cx_18, cl_17 ^ 0x7F, 0, 8);
		word16 bx_50;
		word16 bp_51;
		word16 si_52;
		byte al_53;
		byte ch_54;
		selector ds_55;
		return fn0800_0214(cx_44, dx, bx, bp, si, es_2, out bx_50, out bp_51, out si_52, out al_53, out ch_54, out ds_55);
	}
	else
	{
		fn0800_0287(si);
		return dx;
	}
}

word16 fn0800_0214(word16 cx, word16 dx, word16 bx, word16 bp, word16 si, selector es, ptr16 bxOut, ptr16 bpOut, ptr16 siOut, ptr16 alOut, ptr16 chOut, ptr16 dsOut)
{
	*bxOut = bx;
	*siOut = si;
	*bpOut = bp;
	*dsOut = ds;
	*chOut = ch;
	word16 ax_6 = bx + 0x0001 + cx;
	byte al_8;
	*alOut = (byte) (ax_6 & 0xFFFE);
	word16 di_10 = fp - 0x0002 - (ax_6 & 0xFFFE) + 0x0001;
	if (di_10 >=u 0x0000)
	{
		Mem45[ss:di_10 - 0x0002:word16] = cx;
		word16 cx_46 = cx - 0x0001 + 0x0001;
		di_51 = di_10;
		word16 di_51;
		while (cx_46 != 0xFFFF)
		{
			Mem55[ss:di_51 + 0x0000:byte] = Mem45[es:si + 0x0000:byte];
			si = si + 0x0001;
			di_51 = di_51 + 0x0001;
			cx_46 = cx_46 - 0x0001;
		}
		Mem62[ss:di_51 + 0x0000:byte] = 0x00;
		word16 di_103 = di_51 + 0x0000;
		word16 si_102 = dx;
		word16 cx_104 = bx;
		word16 ax_110 = cx_46;
		byte al_109;
		*alOut = (byte) cx_46;
		word16 dx_117 = cx_46;
		word16 bx_118 = cx_46 + 0x0000;
		while (true)
		{
			byte CZ_91 = fn0800_025F(ax_110, cx_104, dx_117, bx_118, si_102, di_103, ss, bp, out ax_110, out cx_104, out dx_117, out bx_118, out si_102, out di_103);
			byte C_124 = CZ_91;
			if (!CZ_91)
				do
				{
					if (C_124)
					{
						word16 cx_141 = Mem62[ss:di_10 - 0x0002:word16] + dx_117;
						selector ds_143 = Mem62[0x0800:0x01CD:selector];
						*dsOut = ds_143;
						Mem144[ds_143:0x006B:word16] = bx_118;
						word16 bx_147 = (bx_118 + 0x0001) * 0x0002 * 0x0002;
						*bxOut = bx_147;
						byte ch_142 = SLICE(cx_141, byte, 8);
						*chOut = ch_142;
						word16 si_148 = di_10;
						*siOut = si_148;
						word16 bp_150 = di_10 - bx_147 + 0x0002;
						*bpOut = bp_150;
						if (bp_150 >=u 0x0000)
						{
							Mem154[ds_143:0x006D:word16] = bp_150;
							Mem155[ds_143:0x006F:word16] = ss;
							do
							{
								if (cx_141 == 0x0000)
									break;
								Mem174[ss:bp_150 + 0x0000:word16] = si_148;
								Mem175[ss:bp_150 + 0x0000:word16] = ss;
								*bpOut = bp_150 + 0x0004;
								do
								{
									cx_141 = cx_141 - 0x0001;
									byte al_180 = Mem175[ds_143:si_148 + 0x0000:byte];
									si_148 = si_148 + 0x0001;
									*siOut = si_148;
									byte ch_189;
									*chOut = SLICE(cx_141, byte, 8);
								} while (al_180 != 0x00 && cx_141 != 0x0000);
							} while (al_180 == 0x00);
							Mem171[ss:bp_150 + 0x0000:word16] = 0x0000;
							Mem172[ss:bp_150 + 0x0002:word16] = 0x0000;
							byte al_168 = 0x00;
							*alOut = al_168;
							Mem172[0x0800:0x01C9:ptr32]();
							return dx_117;
						}
						else
						{
							fn0800_0287(di_10);
							return dx_117;
						}
					}
					byte CZ_134 = fn0800_025F(ax_110, cx_104, dx_117, bx_118, si_102, di_103, ss, bp, out ax_110, out cx_104, out dx_117, out bx_118, out si_102, out di_103);
					C_124 = CZ_134;
				} while (CZ_134);
l0800_024F:
			if (al_109 != 0x20 && (al_109 != 0x0D && al_109 != 0x09))
				continue;
			*alOut = 0x00;
			ax_110 = DPB(ax_110, 0x00, 0, 8);
		}
	}
	else
	{
		fn0800_0287(si);
		return dx;
	}
fn0800_0214_exit:
}

byte fn0800_025F(word16 ax, word16 cx, word16 dx, word16 bx, word16 si, word16 di, selector es, selector ds, ptr16 axOut, ptr16 cxOut, ptr16 dxOut, ptr16 bxOut, ptr16 siOut, ptr16 diOut)
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

void fn0800_0287(word16 si)
{
	fn0800_01AF(si, wArg00);
	return;
}

byte fn0800_02CF(word16 si, selector ds)
{
	selector es_4 = Mem0[ds:0x0077:selector];
	word16 dx_12;
	word16 ax_13 = fn0850_000C(ds, Mem0[ds:0x0079:word16], out dx_12);
	Mem18[ds:0x0071:word16] = ax_13;
	Mem19[ds:0x0073:word16] = dx_12;
	word16 ax_23 = ax_13 | dx_12;
	word16 di_48 = 0x0000;
	word16 bx_15 = ax_13 + 0x0002;
	byte al_24 = (byte) ax_23;
	if (ax_23 == 0x0000)
	{
		fn0800_01AF(si, ds);
		return al_24;
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
		return 0x00;
	}
}

word16 fn0800_0313(word16 ax, word16 cx, word16 dx, word16 bx, ptr16 dxOut)
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

byte fn0800_036E(word16 ax, word16 cx, word16 dx, word16 bx)
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

void fn083C_0002(word16 bp, selector ds)
{
	fn093D_000E(ds, 0x0094, ds);
	fn09F1_0007(ds, 0x00B1, ds);
	word16 bp_43 = fp - 0x0002;
	word16 sp_103 = fp - 0x000A;
	word16 si_105 = 0x0001;
	while (si_105 <= Mem0[ss:bp_43 - 0x0004:word16])
	{
		word16 sp_61 = sp_103 - 0x0002;
		Mem62[ss:sp_61 + 0x0000:word16] = ds;
		Mem65[ss:sp_61 - 0x0002:word16] = 0x00B4;
		fn093D_000E(ds, wArg00, wArg02);
		Mem74[ss:sp_61 + 0x0000:word16] = ss;
		Mem77[ss:sp_61 - 0x0002:word16] = bp_43 - 0x0002;
		Mem79[ss:sp_61 - 0x0004:word16] = ds;
		Mem82[ss:sp_61 - 0x0006:word16] = 0x00C3;
		fn09F1_0007(ds, wArg00, wArg02);
		Mem86[ss:sp_61 + 0x0000:word16] = Mem82[ss:bp_43 - 0x0002:word16];
		word16 si_88;
		Mem94[ss:sp_61 + 0x0000:word16] = fn083C_007C(bp_43, wArg00, out bp_43, out si_88);
		Mem96[ss:sp_61 - 0x0002:word16] = Mem94[ss:bp_43 - 0x0002:word16];
		Mem98[ss:sp_61 - 0x0004:word16] = ds;
		Mem101[ss:sp_61 - 0x0006:word16] = 0x00C6;
		sp_103 = sp_61 + 0x0002;
		si_105 = fn093D_000E(ds, wArg00, wArg02) + 0x0001;
	}
	Mem52[ss:sp_103 - 0x0002:word16] = 0x0000;
	fn084A_000A(ds);
	return;
}

word16 fn083C_007C(word16 bp, word16 wArg04, ptr16 bpOut, ptr16 siOut)
{
	word16 ax_17;
	word16 sp_19 = fp - 0x0004;
	if (wArg04 > 0x0002)
	{
		word16 bp_34;
		word16 si_35;
		Mem40[ss:fp - 0x0008:word16] = fn083C_007C(fp - 0x0002, wArg04 - 0x0001, out bp_34, out si_35);
		Mem45[ss:fp - 0x000A:word16] = si_35 + 0xFFFE;
		sp_19 = fp - 0x0008;
		word16 bp_48;
		word16 si_49;
		ax_17 = Mem45[ss:fp - 0x000A:word16] + fn083C_007C(bp_34, wArg02, out bp_48, out si_49);
	}
	else
		ax_17 = 0x0001;
	word16 si_22;
	*siOut = Mem0[ss:sp_19 + 0x0000:word16];
	word16 bp_24;
	*bpOut = Mem0[ss:sp_19 + 0x0002:word16];
	return ax_17;
}

void fn0846_000E(selector ds, word16 wArg04)
{
	word16 si_18;
	word16 si_11 = wArg04;
	if (wArg04 >= 0x0000)
	{
		if (wArg04 >u 0x0058)
		{
l0846_001E:
			si_11 = 0x0057;
		}
		Mem30[ds:0x00DA:word16] = si_11;
		si_18 = (int16) Mem30[ds:si_11 + 0x00DC:byte];
	}
	else
	{
		si_18 = -wArg04;
		if (si_18 <=u 0x0023)
			Mem44[ds:0x00DA:word16] = 0xFFFF;
		else
			goto l0846_001E;
	}
	Mem20[ds:0x007F:word16] = si_18;
	return;
}

void fn084A_000A(selector ds)
{
fn084A_000A_entry:
l084A_000A:
	goto l084A_001B
l084A_000F:
l084A_001B:
	word16 ax_8 = Mem0[ds:0x0144:word16]
	Mem10[ds:0x0144:word16] = Mem0[ds:0x0144:word16] - 0x0001
	branch ax_8 != 0x0000 l084A_000F
l084A_0026:
fn084A_000A_exit:
}

word16 fn0850_000C(selector ds, word16 wArg04, ptr16 dxOut)
{
	word16 dx_16;
	word16 ax_17 = fn0850_020D(ds, wArg04, 0x0000, out dx_16);
	return ax_17;
}

void fn0850_0021(selector ds, segptr32 ptrArg04, word16 wArg06)
{
	selector es_10 = SLICE(ptrArg04, selector, 16);
	word16 bx_11 = (word16) ptrArg04;
	word16 dx_13 = Mem0[es_10:bx_11 + 0x000E:word16];
	word16 ax_14 = Mem0[es_10:bx_11 + 0x000C:word16];
	Mem15[ds:0x0150:word16] = dx_13;
	Mem17[ds:0x014E:word16] = ax_14;
	if (!fn0800_036E(ax_14, wArg06, dx_13, wArg04))
	{
		Mem35[ds:0x0150:word16] = 0x0000;
		Mem36[ds:0x014E:word16] = 0x0000;
	}
	else
	{
		ptr32 es_bx_43 = Mem17[SLICE(ptrArg04, selector, 16):(word16) ptrArg04 + 0x0008:segptr32];
		ptr32 es_bx_51 = Mem17[ds:0x014E:segptr32];
		selector es_52 = SLICE(es_bx_51, selector, 16);
		word16 bx_53 = (word16) es_bx_51;
		Mem54[es_52:bx_53 + 0x000A:word16] = SLICE(es_bx_43, selector, 16);
		word16 bx_45 = (word16) es_bx_43;
		Mem55[es_52:bx_53 + 0x0008:word16] = bx_45;
		segptr32 ptrLoc06_48 = DPB(ptrLoc06, bx_45, 0, 16);
		word16 ax_57 = Mem55[ds:0x014E:word16];
		selector es_59 = SLICE(ptrLoc06_48, selector, 16);
		word16 bx_60 = (word16) ptrLoc06_48;
		Mem61[es_59:bx_60 + 0x000E:word16] = Mem55[ds:0x0150:word16];
		Mem62[es_59:bx_60 + 0x000C:word16] = ax_57;
	}
	return;
}

word16 fn0850_0089(selector ds, segptr32 ptrArg04, word16 wArg06, word16 wArg08, word16 wArg0A, ptr16 dxOut)
{
	selector es_13 = SLICE(ptrArg04, selector, 16);
	word16 bx_14 = (word16) ptrArg04;
	word16 v11_16 = Mem0[es_13:bx_14 + 0x0000:word16] - wArg08;
	Mem17[es_13:bx_14 + 0x0000:word16] = v11_16;
	Mem21[es_13:bx_14 + 0x0002:word16] = Mem17[es_13:bx_14 + 0x0002:word16] - wArg0A - (v11_16 <u 0x0000);
	selector es_24 = SLICE(ptrArg04, selector, 16);
	word16 bx_25 = (word16) ptrArg04;
	word16 dx_32;
	word16 ax_33 = fn0800_0313(wArg04, Mem21[es_24:bx_25 + 0x0002:word16], wArg06, Mem21[es_24:bx_25 + 0x0000:word16], out dx_32);
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
	if (!fn0800_036E(Mem58[ds:0x014A:word16], wArg06, Mem58[ds:0x014C:word16], wArg04))
	{
		Mem85[ds:0x014C:word16] = SLICE(ptrLoc06_37, selector, 16);
		Mem86[ds:0x014A:word16] = (word16) ptrLoc06_37;
	}
	else
	{
		word16 dx_91;
		segptr32 ptrArg04_95 = DPB(ptrArg04, fn0800_0313(ax_33, wArg0A, dx_32, wArg08, out dx_91), 0, 16);
		selector es_99 = SLICE(ptrArg04_95, selector, 16);
		word16 bx_100 = (word16) ptrArg04_95;
		Mem101[es_99:bx_100 + 0x0006:word16] = dx_32;
		Mem102[es_99:bx_100 + 0x0004:word16] = ax_33;
	}
	word16 dx_73;
	*dxOut = dx_32;
	return ax_33 + 0x0008;
}

word16 fn0850_0139(selector ds, word16 wArg04, word16 wArg06, ptr16 dxOut)
{
	word16 ax_31;
	word16 dx_15;
	word16 ax_16 = fn0881_00E3(ds, wArg04, wArg06, out dx_15);
	if (dx_15 == 0xFFFF && ax_16 == 0xFFFF)
	{
		word16 dx_76;
		*dxOut = 0x0000;
		ax_31 = 0x0000;
	}
	else
	{
		word16 ax_42 = Mem0[ds:0x014A:word16];
		selector es_45 = SLICE(ptrLoc06, selector, 16);
		word16 bx_46 = (word16) ptrLoc06;
		Mem47[es_45:bx_46 + 0x0006:word16] = Mem0[ds:0x014C:word16];
		Mem48[es_45:bx_46 + 0x0004:word16] = ax_42;
		ui32 dx_ax_52 = SEQ(wArg06, wArg04 + 0x0001);
		selector es_58 = SLICE(ptrLoc06, selector, 16);
		word16 bx_59 = (word16) ptrLoc06;
		Mem60[es_58:bx_59 + 0x0002:word16] = SLICE(dx_ax_52 + 0x00000001, word16, 16);
		Mem61[es_58:bx_59 + 0x0000:word16] = (word16) (dx_ax_52 + 0x00000001);
		Mem65[ds:0x014C:word16] = SLICE(ptrLoc06, selector, 16);
		Mem66[ds:0x014A:word16] = (word16) ptrLoc06;
		word16 dx_67;
		*dxOut = Mem66[ds:0x014C:word16];
		ax_31 = Mem66[ds:0x014A:word16] + 0x0008;
	}
	return ax_31;
}

word16 fn0850_01A7(selector ds, word16 wArg04, word16 wArg06, ptr16 dxOut)
{
	word16 ax_31;
	word16 dx_15;
	word16 ax_16 = fn0881_00E3(ds, wArg04, wArg06, out dx_15);
	if (dx_15 == 0xFFFF && ax_16 == 0xFFFF)
	{
		word16 dx_73;
		*dxOut = 0x0000;
		ax_31 = 0x0000;
	}
	else
	{
		Mem44[ds:0x0148:word16] = SLICE(ptrLoc06, selector, 16);
		Mem45[ds:0x0146:word16] = (word16) ptrLoc06;
		Mem49[ds:0x014C:word16] = SLICE(ptrLoc06, selector, 16);
		Mem50[ds:0x014A:word16] = (word16) ptrLoc06;
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

word16 fn0850_020D(selector ds, word16 wArg04, word16 wArg06, ptr16 dxOut)
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
		if (!fn0800_036E(Mem0[ds:0x0146:word16], 0x0000, Mem0[ds:0x0148:word16], 0x0000))
		{
			word16 dx_88;
			ax_122 = fn0850_01A7(ds, ax_67 & 0xFFF0, dx_68 & 0xFFFF, out dx_88);
		}
		else
		{
			word16 dx_95 = Mem0[ds:0x0150:word16];
			word16 ax_96 = Mem0[ds:0x014E:word16];
			word16 wLoc04_128 = dx_95;
			word16 wLoc06_129 = ax_96;
			if (!fn0800_036E(ax_96, 0x0000, dx_95, 0x0000))
			{
l0850_030A:
				word16 dx_121;
				ax_122 = fn0850_0139(ds, ax_67 & 0xFFF0, dx_68 & 0xFFFF, out dx_121);
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
						fn0850_0021(ds, DPB(ptrLoc0A, wLoc06_129, 0, 16), wLoc04_128);
						word16 bx_189 = (word16) ptrLoc06;
						selector es_190 = SLICE(ptrLoc06, selector, 16);
						word16 v16_191 = Mem0[es_190:bx_189 + 0x0000:word16] + 0x0001;
						Mem192[es_190:bx_189 + 0x0000:word16] = v16_191;
						Mem196[es_190:bx_189 + 0x0002:word16] = Mem192[es_190:bx_189 + 0x0002:word16] + (v16_191 <u 0x0000);
						word16 dx_197;
						*dxOut = wLoc04_128;
						ax_122 = wLoc06_129 + 0x0008;
						goto l0850_0318;
					}
					ptr32 es_bx_167 = Mem0[SLICE(ptrLoc06, selector, 16):(word16) ptrLoc06 + 0x000C:segptr32];
					selector es_169 = SLICE(es_bx_167, selector, 16);
					word16 bx_168 = (word16) es_bx_167;
					wLoc04_128 = es_169;
					wLoc06_129 = bx_168;
					if (fn0800_036E(bx_168, Mem0[ds:0x0150:word16], es_169, Mem0[ds:0x014E:word16]))
						goto l0850_030A;
					bx_132 = (word16) ptrLoc06;
					es_133 = SLICE(ptrLoc06, selector, 16);
					cx_bx_141 = SEQ(dx_68 & 0xFFFF, (ax_67 & 0xFFF0) + 0x0030);
					dx_134 = Mem0[es_133:bx_132 + 0x0002:word16];
					ax_135 = Mem0[es_133:bx_132 + 0x0000:word16];
					cx_144 = SLICE(cx_bx_141 + 0x00000030, word16, 16);
					bx_145 = (word16) (cx_bx_141 + 0x00000030);
				}
				word16 dx_215;
				ax_122 = fn0850_0089(ds, DPB(ptrLoc0E, wLoc06_129, 0, 16), wLoc04_128, ax_67 & 0xFFF0, dx_68 & 0xFFFF, out dx_215);
			}
		}
	}
l0850_0318:
	return ax_122;
}

word16 fn0881_000C(selector ds, segptr32 ptrArg02, word16 wArg04)
{
	word16 ax_101;
	word16 ax_21 = wArg04 + 0x0001 - Mem0[ds:0x007B:word16] + 0x003F >>u 0x06;
	if (ax_21 == Mem0[ds:0x0152:word16])
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
		word16 ax_74 = fn0898_0004(al_66, ds, Mem0[ds:0x007B:word16], si_109);
		if (ax_74 == 0xFFFF)
		{
			Mem86[ds:0x0152:word16] = si_109 >>u 0x06;
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

word16 fn0881_00E3(selector ds, word16 wArg04, word16 wArg06, ptr16 dxOut)
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
		word16 ax_45 = fn0800_0313(Mem0[ds:0x008B:word16], wArg06, Mem0[ds:0x008D:word16], wArg04, out dx_44);
		if (!fn0800_036E(ax_45, Mem0[ds:0x0089:word16], dx_44, Mem0[ds:0x0087:word16]) && fn0800_036E(ax_45, Mem0[ds:0x0091:word16], dx_44, Mem0[ds:0x008F:word16]))
		{
			ptr32 es_bx_71 = Mem0[ds:0x008B:segptr32];
			word16 bx_72 = (word16) es_bx_71;
			selector es_73 = SLICE(es_bx_71, selector, 16);
			if (fn0881_000C(ds, DPB(ptrLoc0E, ax_45, 0, 16), dx_44) == 0x0000)
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

word16 fn0898_0004(byte al, selector ds, selector psegArg04, word16 wArg06)
{
	word16 ax_17;
	word16 ax_8 = DPB(ax, 0x4A, 8, 8);
	word16 bx_13;
	if (!msdos_resize_memory_block(psegArg04, wArg06, out bx_13))
		ax_17 = 0xFFFF;
	else
	{
		fn0846_000E(ds, ax_8);
		ax_17 = bx_13;
	}
	return ax_17;
}

word16 fn093D_000E(selector ds, word16 wArg04, word16 wArg06)
{
	fn0967_0037(ds, DPB(ptrLoc0E, wArg04, 0, 16), wArg06);
	return si;
}

void fn0967_0037(selector ds, segptr32 ptrArg08, selector psegArg0A)
{
fn0967_0037_entry:
l0967_0037:
	byte bLoc57_15 = 0x50
l0967_0096:
	word16 di_137 = fp - 0x0056
	word16 si_104 = (word16) ptrArg08
l0967_00A6:
	byte al_37 = Mem0[ds:si_104 + 0x0000:byte]
	si_104 = si_104 + 0x0001
	byte al_102 = al_37
	ax = DPB(ax, al_37, 0, 8) (alias)
	branch al_37 == 0x00 l0967_00BE
l0967_00AC:
	branch al_37 == 0x25 l0967_00C1
l0967_00B0:
	Mem96[ss:di_137 + 0x0000:byte] = al_102
	byte v16_98 = bLoc57_15 - 0x01
	di_137 = di_137 + 0x0001
	bLoc57_15 = v16_98
	branch v16_98 > 0x00 l0967_00A6
l0967_00B9:
	fn0967_0066(fp - 0x0002, di_137)
	goto l0967_00A6
l0967_00BE:
	goto l0967_055C
l0967_00C1:
	al_102 = Mem0[ds:si_104 + 0x0000:byte]
	ax = DPB(ax, al_102, 0, 8) (alias)
	si_104 = si_104 + 0x0001
	branch al_102 == 0x25 l0967_00B0
l0967_00CB:
l0967_00EF:
	word16 ax_119 = DPB(ax, 0x00, 8, 8)
	byte bl_122 = (byte) ax_119
	word16 bx_124 = DPB(ax_119, bl_122 - 0x20, 0, 8)
	branch bl_122 >=u 0x80 l0967_0144
l0967_00FD:
	branch DPB(ax_119, Mem0[ds:bx_124 + 0x045D:byte], 0, 8) <=u 0x0017 l0967_010B
l0967_0108:
	goto l0967_0546
l0967_010B:
l0967_0144:
l0967_0546:
	word16 si_133 = si_104
	byte al_138 = 0x25
l0967_0553:
	di_137 = fn0967_005D(fp - 0x0002, di_137, al_138)
	byte al_147 = Mem0[ds:si_133 + 0x0000:byte]
	si_133 = si_133 + 0x0001
	al_138 = al_147
	branch al_147 != 0x00 l0967_0553
l0967_055C:
	branch bLoc57_15 >= 0x50 l0967_0565
	branch bLoc57_15 >= 0x50 l0967_0565
l0967_0562:
	fn0967_0066(fp - 0x0002, di_137)
	fn0967_0066(fp - 0x0002, di_137)
l0967_0565:
	branch 0x0000 == 0x0000 l0967_0573
l0967_056C:
	goto l0967_0578
l0967_0573:
l0967_0578:
	return
fn0967_0037_exit:
}

word16 fn0967_005D(word16 bp, word16 di, byte al)
{
	Mem3[ss:di + 0x0000:byte] = al;
	byte v8_8 = Mem3[ss:bp - 0x0055:byte] - 0x01;
	Mem9[ss:bp - 0x0055:byte] = v8_8;
	if (v8_8 > 0x00)
		fn0967_0066(bp, di + 0x0001);
}

void fn0967_0066(word16 bp, word16 di)
{
fn0967_0066_entry:
l0967_0066:
fn0967_0066_exit:
}

void fn0967_0095()
{
	return;
}

void fn09F1_0007(selector ds, word16 wArg04, word16 wArg06)
{
	fn09F4_0005(ds, 0x0256, ds, wArg04, wArg06);
	return;
}

void fn09F4_0005(selector ds, word16 wArg0C, word16 wArg0E, word16 wArg10, selector psegArg12)
{
fn09F4_0005_entry:
l09F4_0005:
l09F4_0035:
	byte al_26 = Mem0[ds:wArg10 + 0x0000:byte]
	branch al_26 == 0x00 l09F4_00B0
l09F4_0043:
	branch al_26 == 0x25 l09F4_00B3
l09F4_0047:
	Mem61[ss:fp - 0x0028:word16] = 0x0001
l09F4_00B0:
	goto l09F4_0478
l09F4_00B3:
	branch (int16) Mem0[ds:wArg10 + 0x0001:byte] < 0x0000 l09F4_0112
l09F4_00CA:
	branch DPB(bx, 0x00, 8, 8) <=u 0x0015 l09F4_00DA
l09F4_00D7:
	goto l09F4_0460
l09F4_00DA:
l09F4_0112:
	goto l09F4_0478
l09F4_0460:
l09F4_0478:
l09F4_050D:
	return
fn09F4_0005_exit:
}

