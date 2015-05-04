// subject.c
// Generated on 5/4/2015 12:04:31 AM by decompiling from_dcc/benchlng/ia32_mz_from_dcc/subject.exe
// using Decompiler version 0.4.2.0.

#include "subject.h"

void fn0800_0000(word16 si, selector es, selector ds)
{
fn0800_0000_entry:
l0800_0000:
	sp = fp
	dx = 0x09EF
	Mem0[0x0800:0x01F8:word16] = 0x09EF
	ah = 0x30
	al = msdos_get_dos_version(out ah)
	ax = DPB(ax, al, 0, 8) (alias)
	bp = Mem0[ds:0x0002:word16]
	bx = Mem0[ds:0x002C:word16]
	ds = 0x09EF
	Mem0[0x09EF:0x0092:word16] = ax
	Mem0[0x09EF:0x0090:word16] = es
	Mem0[0x09EF:0x008C:word16] = bx
	Mem0[0x09EF:0x00AC:word16] = bp
	Mem0[0x09EF:0x0096:word16] = 0xFFFF
	fn0800_0162(al, ds)
	es_di = Mem0[0x09EF:0x008A:segptr32]
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
	v20 = Mem0[0x09EF:0x0096:word16] + 0x0001
	Mem0[0x09EF:0x0096:word16] = v20
	SCZO = cond(dh - 0x59)
	Z = SCZO (alias)
	branch Test(NE,Z) l0800_0059
l0800_0055:
	v21 = Mem0[0x09EF:0x0096:word16] + 0x0001
	Mem0[0x09EF:0x0096:word16] = v21
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
	branch cx == 0x0000 l0800_00BE
l0800_005D:
	bx = bx + 0x0001
	SCZO = cond(Mem0[es:di + 0x0000:byte] - al)
	Z = SCZO (alias)
	branch Test(NE,Z) l0800_0039
l0800_0063:
	ch = ch | 0x80
	cx = DPB(cx, ch, 8, 8) (alias)
	cx = -cx
	Mem0[0x09EF:0x008A:word16] = cx
	cx = 0x0001
	cl = (byte) cx (alias)
	bx = bx << cl
	bx = bx + 0x0008
	bx = bx & 0xFFF8
	Mem0[0x09EF:0x008E:word16] = bx
	dx = 0x09EF
	bp = bp - 0x09EF
	di = Mem0[0x09EF:0x0224:word16]
	es_di = SEQ(es, di) (alias)
	SCZO = cond(di - 0x0200)
	C = SCZO (alias)
	branch Test(UGE,C) l0800_0090
l0800_0089:
	di = 0x0200
	es_di = SEQ(es, di) (alias)
	Mem0[0x09EF:0x0224:word16] = 0x0200
l0800_0090:
	di = di + 0x0616
	es_di = SEQ(es, di) (alias)
	SCZO = cond(di)
	C = SCZO (alias)
	branch Test(ULT,C) l0800_00BE
l0800_0096:
	di = di + Mem0[0x09EF:0x0222:word16]
	es_di = SEQ(es, di) (alias)
	SCZO = cond(di)
	C = SCZO (alias)
	branch Test(ULT,C) l0800_00BE
l0800_009C:
	cl = 0x04
	di = di >>u 0x04
	di = di + 0x0001
	es_di = SEQ(es, di) (alias)
	SCZO = cond(bp - di)
	C = SCZO (alias)
	branch Test(ULT,C) l0800_00BE
l0800_00A5:
	SCZO = cond(Mem0[0x09EF:0x0224:word16] - 0x0000)
	Z = SCZO (alias)
	branch Test(EQ,Z) l0800_00B3
l0800_00AC:
	SCZO = cond(Mem0[0x09EF:0x0222:word16] - 0x0000)
	Z = SCZO (alias)
	branch Test(NE,Z) l0800_00C1
l0800_00B3:
	di = 0x1000
	es_di = SEQ(es, di) (alias)
	SCZO = cond(bp - 0x1000)
	CZ = SCZO (alias)
	branch Test(UGT,CZ) l0800_00C1
l0800_00BA:
	di = bp
	es_di = SEQ(es, di) (alias)
	goto l0800_00C1
l0800_00BE:
	fn0800_01E2(si, di)
	return
l0800_00C1:
	bx = di
	bx = bx + 0x09EF
	Mem0[0x09EF:0x00A4:word16] = bx
	Mem0[0x09EF:0x00A8:word16] = bx
	ax = Mem0[0x09EF:0x0090:word16]
	bx = bx - ax
	es = ax
	ah = 0x4A
	sp = fp - 0x0002
	wLoc02 = di
	C = msdos_resize_memory_block(es, bx, out bx)
	di = wLoc02
	di = di << 0x04
	__cli()
	ss = 0x09EF
	sp = di
	ax = 0x0000
	al = (byte) ax (alias)
	es = Mem0[0x0800:0x01F8:selector]
	di = 0x05D0
	es_di = SEQ(es, di) (alias)
	cx = 0x0616
	cx = 0x0046
	ch = SLICE(cx, byte, 8) (alias)
	cl = (byte) cx (alias)
	SCZO = cond(0x0046)
l0800_00F1:
	branch cx == 0x0000 l0800_00F3
l0800_00F1_1:
	Mem0[es:di + 0x0000:byte] = al
	di = di + 0x0001
	es_di = SEQ(es, di) (alias)
	cx = cx - 0x0001
	ch = SLICE(cx, byte, 8) (alias)
	cl = (byte) cx (alias)
	goto l0800_00F1
l0800_00F3:
	sp = sp - 0x0002
	call SEQ(cs, Mem0[ds:0x05C2:word16]) (retsize: 2; depth: 2)
	si = fn0800_03CA(ds, wLoc02, out ds)
	bx = fn0800_04B5(si, ds, out di)
	sp = sp + 0x0002
	ah = 0x00
	cx = bios_get_system_time(out dx)
	Mem0[ds:0x0098:word16] = dx
	Mem0[ds:0x009A:word16] = cx
	call SEQ(cs, Mem0[ds:0x05C6:word16]) (retsize: 2; depth: 2)
	sp = sp - 0x0002
	Mem0[0x09EF:sp + 0x0000:word16] = Mem0[ds:0x0088:word16]
	sp = sp - 0x0002
	Mem0[0x09EF:sp + 0x0000:word16] = Mem0[ds:0x0086:word16]
	sp = sp - 0x0002
	Mem0[0x09EF:sp + 0x0000:word16] = Mem0[ds:0x0084:word16]
	ax = fn0800_01FA(bx, di, ds)
	al = (byte) ax (alias)
	sp = sp - 0x0002
	Mem0[0x09EF:sp + 0x0000:word16] = ax
	fn0800_0395(ds, wArg00)
l0800_011E_thunk_fn0800_0121:
	fn0800_0121(al, bArg00)
	return
fn0800_0000_exit:
}

void fn0800_0121(byte al, byte bArg00)
{
	selector ds_3 = Mem0[0x0800:0x01F8:selector];
	fn0800_01A5(al, ds_3);
	SEQ(cs, Mem0[ds_3:0x05C4:word16])();
	word16 ax_20 = 0x0000;
	byte al_21 = 0x00;
	byte ah_22 = 0x00;
	word16 si_25 = 0x0000;
	word16 cx_26 = 0x002F;
	do
	{
		al_21 = al_21 + Mem0[ds_3:si_25 + 0x0000:byte];
		ah_22 = ah_22 + (al_21 <u 0x00);
		ax_20 = DPB(ax_20, ah_22, 8, 8);
		si_25 = si_25 + 0x0001;
		cx_26 = cx_26 - 0x0001;
	} while (cx_26 != 0x0000);
	if (ax_20 != 0x0D37)
		fn0800_01DA(0x0019, 0x002F, ds_3);
	msdos_terminate(bArg00);
}

void fn0800_0162(byte al, selector ds)
{
	word32 es_bx_6 = msdos_get_interrupt_vector(al);
	Mem9[ds:0x0074:word16] = (word16) es_bx_6;
	Mem10[ds:0x0076:word16] = SLICE(es_bx_6, selector, 16);
	word32 es_bx_11 = msdos_get_interrupt_vector(al);
	Mem14[ds:0x0078:word16] = (word16) es_bx_11;
	Mem15[ds:0x007A:word16] = SLICE(es_bx_11, selector, 16);
	word32 es_bx_16 = msdos_get_interrupt_vector(al);
	Mem19[ds:0x007C:word16] = (word16) es_bx_16;
	Mem20[ds:0x007E:word16] = SLICE(es_bx_16, selector, 16);
	word32 es_bx_21 = msdos_get_interrupt_vector(al);
	Mem24[ds:0x0080:word16] = (word16) es_bx_21;
	Mem25[ds:0x0082:word16] = SLICE(es_bx_21, selector, 16);
	msdos_set_interrupt_vector(0x00, SEQ(cs, 0x0158));
	return;
}

void fn0800_01A5(byte al, selector ds)
{
	msdos_set_interrupt_vector(al, Mem0[ds:0x0074:segptr32]);
	msdos_set_interrupt_vector(al, Mem0[ds:0x0078:segptr32]);
	msdos_set_interrupt_vector(al, Mem0[ds:0x007C:segptr32]);
	msdos_set_interrupt_vector(0x06, Mem0[ds:0x0080:segptr32]);
	return;
}

word16 fn0800_01DA(word16 cx, word16 dx, selector ds)
{
	word16 ax_8;
	msdos_write_file(0x0002, cx, ds_dx, out ax_8);
	return 0x0002;
}

void fn0800_01E2(word16 si, word16 di)
{
	selector ds_3 = Mem0[0x0800:0x01F8:selector];
	word16 bx_4 = fn0800_01DA(0x001E, 0x0056, ds_3);
	fn0800_0121(0x03, bLoc04);
	Mem13[ds_3:bx_4 + si:byte] = Mem0[ds_3:bx_4 + si:byte] + 0x03;
	fn0800_1768(bx_4, di, ds_3, 0x0194);
	word16 bx_41;
	word16 si_42;
	word16 di_43;
	fn0800_0EDF(ds_3, 0x0198, out bx_41, out si_42, out di_43);
	fn0800_1768(fn0800_1768(bx_41, di_43, ds_3, 0x01B2), di_43, ds_3, 0x01B6);
	word16 bx_71;
	word16 si_72;
	word16 di_73;
	fn0800_032D(fp - 0x0004, ds_3, out bx_71, out si_72, out di_73);
	return;
}

word16 fn0800_01FA(word16 bx, word16 di, selector ds)
{
	fn0800_1768(bx, di, ds, 0x0194);
	word16 bx_31;
	word16 si_32;
	word16 di_33;
	fn0800_0EDF(ds, 0x0198, out bx_31, out si_32, out di_33);
	fn0800_1768(fn0800_1768(bx_31, di_33, ds, 0x01B2), di_33, ds, 0x01B6);
	word16 bx_61;
	word16 si_62;
	word16 di_63;
	return fn0800_032D(fp - 0x0002, ds, out bx_61, out si_62, out di_63);
}

word16 fn0800_032D(word16 bp, selector ds, ptr16 bxOut, ptr16 siOut, ptr16 diOut)
{
	while (true)
	{
		word16 dx_11 = Mem0[ss:bp - 0x0006:word16];
		word16 ax_12 = Mem0[ss:bp - 0x0008:word16];
		if (dx_11 < Mem0[ss:bp - 0x0002:word16])
			goto l0800_0244;
		if (dx_11 > Mem0[ss:bp - 0x0002:word16] || ax_12 >u Mem0[ss:bp - 0x0004:word16])
		{
			Mem181[ss:fp - 0x0004:word16] = Mem0[ss:bp - 0x0014:word16];
			word16 bx_186;
			word16 si_187;
			word16 di_188;
			return fn0800_0EDF(ds, 0x01BA, out bx_186, out si_187, out di_188);
		}
l0800_0244:
		Mem22[ss:bp - 0x000A:word16] = 0x0000;
		Mem23[ss:bp - 0x000C:word16] = 0x0001;
		while (true)
		{
			if (Mem23[ss:bp - 0x000A:word16] < 0x0000)
			{
l0800_0251:
				word16 ax_159;
				word16 ax_40 = Mem23[ss:bp - 0x0014:word16] + Mem23[ss:bp - 0x0010:word16];
				word16 ax_44 = ax_40 + Mem23[ss:bp - 0x000C:word16];
				Mem48[ss:bp - 0x0012:word16] = Mem23[ss:bp - 0x0012:word16] + Mem23[ss:bp - 0x000E:word16] + (ax_40 <u 0x0000) + Mem23[ss:bp - 0x000A:word16] + (ax_44 <u 0x0000);
				Mem49[ss:bp - 0x0014:word16] = ax_44;
				word16 dx_50 = Mem49[ss:bp - 0x0012:word16];
				word16 ax_56 = __rcr(Mem49[ss:bp - 0x0014:word16], 0x01, cond(dx_50 >> 0x0001));
				Mem57[ss:bp - 0x000E:word16] = dx_50 >> 0x0001;
				Mem58[ss:bp - 0x0010:word16] = ax_56;
				Mem67[ss:fp - 0x0004:word16] = 0x000A;
				word16 dx_73;
				word16 ax_74 = fn0800_1DEB(Mem67[ss:bp - 0x0010:word16], Mem67[ss:bp - 0x000E:word16], wLoc04, 0x0000, out dx_73);
				Mem76[ss:bp - 0x0012:word16] = dx_73;
				Mem77[ss:bp - 0x0014:word16] = ax_74;
				word16 ax_79 = Mem77[ss:bp - 0x0010:word16];
				if (Mem77[ss:bp - 0x000E:word16] == Mem77[ss:bp - 0x000A:word16] && ax_79 == Mem77[ss:bp - 0x000C:word16])
					ax_159 = 0x0001;
				else
					ax_159 = 0x0000;
				word16 ax_101;
				int32 dx_ax_85 = (int32) ax_159;
				Mem88[ss:bp - 0x0012:word16] = SLICE(dx_ax_85, word16, 16);
				Mem89[ss:bp - 0x0014:word16] = (word16) dx_ax_85;
				word16 ax_92 = Mem89[ss:bp - 0x0014:word16] | Mem89[ss:bp - 0x000C:word16];
				Mem94[ss:bp - 0x000E:word16] = Mem89[ss:bp - 0x0012:word16] | Mem89[ss:bp - 0x000A:word16];
				Mem95[ss:bp - 0x0010:word16] = ax_92;
				if ((Mem95[ss:bp - 0x0010:word16] | Mem95[ss:bp - 0x000E:word16]) == 0x0000)
					ax_101 = 0x0001;
				else
					ax_101 = 0x0000;
				word16 ax_126;
				int32 dx_ax_102 = (int32) ax_101;
				Mem105[ss:bp - 0x0012:word16] = SLICE(dx_ax_102, word16, 16);
				Mem106[ss:bp - 0x0014:word16] = (word16) dx_ax_102;
				word16 ax_109 = Mem106[ss:bp - 0x0014:word16] + Mem106[ss:bp - 0x000C:word16];
				Mem113[ss:bp - 0x000E:word16] = Mem106[ss:bp - 0x0012:word16] + Mem106[ss:bp - 0x000A:word16] + (ax_109 <u 0x0000);
				Mem114[ss:bp - 0x0010:word16] = ax_109;
				word16 dx_115 = Mem114[ss:bp - 0x000E:word16];
				word16 ax_116 = Mem114[ss:bp - 0x0010:word16];
				if (dx_115 >= Mem114[ss:bp - 0x000A:word16] && (dx_115 > Mem114[ss:bp - 0x000A:word16] || ax_116 >u Mem114[ss:bp - 0x000C:word16]))
					ax_126 = 0x0001;
				else
					ax_126 = 0x0000;
				int32 dx_ax_127 = (int32) ax_126;
				Mem130[ss:bp - 0x0012:word16] = SLICE(dx_ax_127, word16, 16);
				Mem131[ss:bp - 0x0014:word16] = (word16) dx_ax_127;
				word16 v17_132 = Mem131[ss:bp - 0x000C:word16] + 0x0001;
				Mem133[ss:bp - 0x000C:word16] = v17_132;
				Mem137[ss:bp - 0x000A:word16] = Mem133[ss:bp - 0x000A:word16] + (v17_132 <u 0x0000);
			}
			if (Mem23[ss:bp - 0x000A:word16] > 0x0000 || Mem23[ss:bp - 0x000C:word16] >u 0x0028)
			{
				word16 v15_168 = Mem23[ss:bp - 0x0008:word16] + 0x0001;
				Mem169[ss:bp - 0x0008:word16] = v15_168;
				Mem173[ss:bp - 0x0006:word16] = Mem169[ss:bp - 0x0006:word16] + (v15_168 <u 0x0000);
			}
			goto l0800_0251;
		}
	}
}

void fn0800_0395(selector ds, word16 wArg02)
{
	word16 ax_21 = Mem0[ds:0x0226:word16];
	word16 v7_22 = Mem0[ds:0x0226:word16] - 0x0001;
	Mem23[ds:0x0226:word16] = v7_22;
	byte al_25 = (byte) ax_21;
	while (ax_21 != 0x0000)
	{
		SEQ(cs, SEQ(ds, 0x05D0)[Mem23[ds:0x0226:word16] * 0x0002])();
		ax_21 = Mem0[ds:0x0226:word16];
		v7_22 = Mem0[ds:0x0226:word16] - 0x0001;
		Mem23[ds:0x0226:word16] = v7_22;
		al_25 = (byte) ax_21;
	}
	SEQ(cs, Mem23[ds:0x021C:word16])();
	SEQ(cs, Mem23[ds:0x021E:word16])();
	SEQ(cs, Mem23[ds:0x0220:word16])();
	fn0800_0121(al_25, bLoc06);
	return;
}

word16 fn0800_03CA(selector ds, word16 wArg00, ptr16 dsOut)
{
	*dsOut = ds;
	word16 di_110;
	selector es_231;
	Mem3[0x0800:0x03C4:word16] = wArg00;
	Mem6[0x0800:0x03C6:word16] = ds;
	word16 si_23 = Mem6[ds:0x008A:word16];
	selector es_8 = Mem6[ds:0x0090:selector];
	word16 ax_13 = DPB(ax, Mem6[ds:0x0080:byte], 0, 8);
	word16 si_103 = si_23 + 0x0002;
	word16 cx_25 = 0x0001;
	es_231 = es_8;
	if (Mem6[ds:0x0092:byte] >=u 0x03)
	{
		es_231 = Mem6[ds:0x008C:selector];
		di_110 = si_23 + 0x0002;
		byte cl_233 = 0x7F;
		word16 cx_234 = 0x007F;
		do
		{
			if (cx_234 == 0x0000)
				break;
			cx_234 = cx_234 - 0x0001;
			di_110 = di_110 + 0x0001;
			cl_233 = (byte) cx_234;
		} while (0x00 != Mem6[es_231:di_110 + 0x0000:byte]);
		if (cx_234 != 0x0000)
		{
			cx_25 = DPB(cx_234, cl_233 ^ 0x7F, 0, 8);
l0800_0408:
			di_110 = fp - (((ax_13 + 0x0002) + cx_25 & 0xFFFE) & 0xFFFE) + 0x0001;
			if (di_110 >=u 0x0000)
			{
				Mem93[ss:di_110 - 0x0002:word16] = cx_25;
				word16 cx_105 = cx_25 - 0x0001 + 0x0001;
				di_104 = di_110;
				word16 di_104;
				while (cx_105 != 0xFFFF)
				{
					Mem102[ss:di_104 + 0x0000:byte] = Mem93[es_231:si_103 + 0x0000:byte];
					si_103 = si_103 + 0x0001;
					di_104 = di_104 + 0x0001;
					cx_105 = cx_105 - 0x0001;
				}
				Mem109[ss:di_104 + 0x0000:byte] = 0x00;
				di_110 = di_104 + 0x0000;
				word16 si_113 = 0x0081;
				word16 cx_115 = ax_13 + 0x0001;
				word16 ax_118 = cx_105;
				byte al_120 = (byte) cx_105;
				word16 dx_121 = cx_105;
				word16 bx_122 = cx_105 + 0x0000;
				while (true)
				{
					byte CZ_137 = fn0800_0453(ax_118, cx_115, dx_121, bx_122, si_113, di_110, ss, es_8, out ax_118, out cx_115, out dx_121, out bx_122, out si_113, out di_110);
					byte C_138 = CZ_137;
					if (!CZ_137)
						do
						{
							if (C_138)
							{
								word16 cx_187 = Mem109[ss:di_110 - 0x0002:word16] + dx_121;
								selector ds_189 = Mem109[0x0800:0x03C6:selector];
								*dsOut = ds_189;
								Mem190[ds_189:0x0084:word16] = bx_122;
								si_103 = di_110;
								word16 bp_195 = di_110 - (bx_122 + 0x0001) * 0x0002;
								if (bp_195 >=u 0x0000)
								{
									Mem199[ds_189:0x0086:word16] = bp_195;
									do
									{
										if (cx_187 == 0x0000)
											break;
										Mem216[ss:bp_195 + 0x0000:word16] = si_103;
										bp_195 = bp_195 + 0x0002;
										do
										{
											byte al_221 = Mem216[ds_189:si_103 + 0x0000:byte];
											si_103 = si_103 + 0x0001;
											cx_187 = cx_187 - 0x0001;
										} while (al_221 != 0x00 && cx_187 != 0x0000);
									} while (al_221 == 0x00);
									Mem214[ss:bp_195 + 0x0000:word16] = 0x0000;
									Mem214[0x0800:0x03C4:word16]();
									return si_103;
								}
								else
									goto l0800_047B;
							}
							byte CZ_180 = fn0800_0453(ax_118, cx_115, dx_121, bx_122, si_113, di_110, ss, es_8, out ax_118, out cx_115, out dx_121, out bx_122, out si_113, out di_110);
							C_138 = CZ_180;
						} while (CZ_180);
l0800_0443:
					if (al_120 != 0x20 && (al_120 != 0x0D && al_120 != 0x09))
						continue;
					al_120 = 0x00;
					ax_118 = DPB(ax_118, 0x00, 0, 8);
				}
			}
			else
			{
l0800_047B:
				fn0800_01E2(si_103, di_110);
				return si_103;
			}
		}
		else
			goto l0800_047B;
	}
	else
		goto l0800_0408;
fn0800_03CA_exit:
}

byte fn0800_0453(word16 ax, word16 cx, word16 dx, word16 bx, word16 si, word16 di, selector es, selector ds, ptr16 axOut, ptr16 cxOut, ptr16 dxOut, ptr16 bxOut, ptr16 siOut, ptr16 diOut)
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
	word16 ax_21 = DPB(ax_15, 0x00, 0, 8);
	*axOut = ax_21;
	byte CZ_26 = true;
	if (cx != 0x0000)
	{
		byte al_46 = Mem0[ds:si + 0x0000:byte];
		word16 si_47 = si + 0x0001;
		*siOut = si_47;
		word16 cx_48 = cx - 0x0001;
		*cxOut = cx_48;
		word16 ax_50 = DPB(ax_21, al_46 - 0x22, 0, 8);
		*axOut = ax_50;
		CZ_26 = cond(al_46 - 0x22);
		if (al_46 != 0x22)
		{
			word16 ax_57 = DPB(ax_50, al_46, 0, 8);
			*axOut = ax_57;
			if (al_46 == 0x5C && Mem0[ds:si + 0x0001:byte] == 0x22)
			{
				word16 ax_73;
				*axOut = DPB(ax_57, Mem0[ds:si + 0x0001:byte], 0, 8);
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

word16 fn0800_04B5(word16 si, selector ds, ptr16 diOut)
{
	word16 cx_4 = Mem0[ds:0x008A:word16];
	word16 bx_100;
	word16 ax_8 = fn0800_0604(ds, cx_4, out bx_100);
	word16 cx_66 = cx_4;
	word16 di_104 = ax_8;
	*diOut = di_104;
	if (ax_8 != 0x0000)
	{
		selector ds_59 = Mem0[ds:0x008C:selector];
		si = 0x0000;
		while (cx_66 != 0x0000)
		{
			Mem68[ds:di_104 + 0x0000:byte] = Mem0[ds_59:si + 0x0000:byte];
			si = si + 0x0001;
			di_104 = di_104 + 0x0001;
			cx_66 = cx_66 - 0x0001;
		}
		word16 bx_79;
		word16 ax_80 = fn0800_0604(ds, Mem0[ds:0x008E:word16], out bx_79);
		Mem85[ds:0x0088:word16] = ax_80;
		di_104 = ax_8;
		*diOut = di_104;
		bx_100 = ax_80;
		if (ax_80 == 0x0000)
		{
l0800_04E8:
			while (true)
				;
		}
		else
		{
			word16 cx_105 = 0xFFFF;
			do
			{
				Mem99[ds:bx_100 + 0x0000:word16] = di_104;
				bx_100 = bx_100 + 0x0002;
				do
				{
					if (cx_105 == 0x0000)
						break;
					*diOut = di_115 + 0x0001;
					cx_105 = cx_105 - 0x0001;
					word16 di_115 = di_104;
				} while (0x00 != Mem99[ds:di_115 + 0x0000:byte]);
			} while (Mem99[ds:di_104 + 0x0000:byte] != 0x00);
			Mem110[ds:bx_100 + 0x0000:word16] = 0x0000;
			return bx_100;
		}
	}
	else
		goto l0800_04E8;
fn0800_04B5_exit:
}

word16 fn0800_0525(selector ds, word16 wArg02)
{
	word16 ax_16 = Mem0[ds:wArg02 + 0x0006:word16];
	Mem17[ds:0x0612:word16] = ax_16;
	if (ax_16 == wArg02)
		Mem28[ds:0x0612:word16] = 0x0000;
	else
	{
		word16 si_30 = Mem17[ds:wArg02 + 0x0004:word16];
		bx = Mem17[ds:0x0612:word16];
		Mem32[ds:bx + 0x0004:word16] = si_30;
		Mem34[ds:si_30 + 0x0006:word16] = Mem32[ds:0x0612:word16];
	}
	return bx;
}

word16 fn0800_0553(selector ds, word16 wArg02, word16 wArg04)
{
	Mem19[ds:wArg02 + 0x0000:word16] = Mem0[ds:wArg02 + 0x0000:word16] - wArg04;
	word16 si_21 = Mem19[ds:wArg02 + 0x0000:word16] + wArg02;
	Mem24[ds:si_21 + 0x0000:word16] = wArg04 + 0x0001;
	Mem25[ds:si_21 + 0x0002:word16] = wArg02;
	if (Mem25[ds:0x0610:word16] == wArg02)
		Mem39[ds:0x0610:word16] = si_21;
	else
		Mem43[ds:si_21 + wArg04 + 0x0002:word16] = si_21;
	return si_21 + 0x0004;
}

word16 fn0800_058D(selector ds, word16 wArg02)
{
	word16 ax_30;
	word16 ax_21 = fn0800_069B(ds, wArg02 & 0xFFFF, 0x0000);
	if (ax_21 == 0xFFFF)
		ax_30 = 0x0000;
	else
	{
		Mem42[ds:ax_21 + 0x0002:word16] = Mem0[ds:0x0610:word16];
		Mem45[ds:ax_21 + 0x0000:word16] = wArg02 + 0x0001;
		Mem46[ds:0x0610:word16] = ax_21;
		ax_30 = Mem46[ds:0x0610:word16] + 0x0004;
	}
	return ax_30;
}

word16 fn0800_05CA(selector ds, word16 wArg02)
{
	word16 ax_30;
	word16 ax_21 = fn0800_069B(ds, wArg02 & 0xFFFF, 0x0000);
	if (ax_21 == 0xFFFF)
		ax_30 = 0x0000;
	else
	{
		Mem40[ds:0x0614:word16] = ax_21;
		Mem41[ds:0x0610:word16] = ax_21;
		Mem44[ds:ax_21 + 0x0000:word16] = wArg02 + 0x0001;
		ax_30 = ax_21 + 0x0004;
	}
	return ax_30;
}

word16 fn0800_0604(selector ds, word16 wArg02, ptr16 bxOut)
{
	*bxOut = bx;
	word16 ax_111;
	if (wArg02 != 0x0000 && wArg02 <=u 0xFFF4)
	{
		word16 ax_52 = wArg02 + 0x000B & 0xFFF8;
		if (Mem0[ds:0x0614:word16] == 0x0000)
			ax_111 = fn0800_05CA(ds, ax_52);
		else
		{
			word16 si_113 = Mem0[ds:0x0612:word16];
			if (si_113 != 0x0000)
			{
l0800_063B:
				do
				{
					if (Mem0[ds:si_113 + 0x0000:word16] >=u ax_52 + 0x0028)
					{
						ax_111 = fn0800_0553(ds, si_113, ax_52);
						goto l0800_0673;
					}
					if (Mem0[ds:si_113 + 0x0000:word16] >=u ax_52)
					{
						word16 bx_105;
						*bxOut = fn0800_0525(ds, si_113);
						Mem109[ds:si_113 + 0x0000:word16] = Mem0[ds:si_113 + 0x0000:word16] + 0x0001;
						ax_111 = si_113 + 0x0004;
						goto l0800_0673;
					}
					si_113 = Mem0[ds:si_113 + 0x0006:word16];
				} while (si_113 != Mem0[ds:0x0612:word16]);
l0800_066C:
				fn0800_058D(ds, ax_52);
				ax_111 = fn0800_058D(ds, ax_52);
			}
			else
				goto l0800_066C;
		}
	}
	else
		ax_111 = 0x0000;
l0800_0673:
	return ax_111;
}

word16 fn0800_069B(selector ds, word16 wArg02, word16 wArg04)
{
	word16 ax_31;
	word16 ax_12 = wArg02 + Mem0[ds:0x009E:word16];
	ui32 dx_cx_18 = SEQ(wArg04 + (ax_12 <u 0x0000), ax_12 + 0x0100);
	word16 cx_22 = (word16) (dx_cx_18 + 0x00000100);
	if (SEQ(SLICE(dx_cx_18 + 0x00000100, word16, 16), cx_22) == 0x00000000 && cx_22 <u fp - 0x0002)
	{
		word16 v13_42 = Mem0[ds:0x009E:word16];
		Mem43[ds:0x009E:word16] = ax_12;
		ax_31 = v13_42;
	}
	else
	{
		Mem37[ds:0x0094:word16] = 0x0008;
		ax_31 = 0xFFFF;
	}
	return ax_31;
}

word16 fn0800_0EDF(selector ds, word16 wArg02, ptr16 bxOut, ptr16 siOut, ptr16 diOut)
{
	word16 bx_19;
	word16 si_20;
	word16 di_21;
	word16 ax_22 = fn0800_1107(ds, wArg02, out bx_19, out si_20, out di_21);
	return ax_22;
}

word16 fn0800_1107(selector ds, word16 wArg04, ptr16 bxOut, ptr16 siOut, ptr16 diOut)
{
fn0800_1107_entry:
	*bxOut = bx
l0800_1107:
	byte bLoc57_115 = 0x50
l0800_1161:
	word16 sp_158 = fp - 0x00A0
	word16 di_113 = fp - 0x0056
	word16 si_111 = wArg04
l0800_1171:
	byte al_40 = Mem0[ds:si_111 + 0x0000:byte]
	si_111 = si_111 + 0x0001
	byte al_110 = al_40
	ax = DPB(ax, al_40, 0, 8) (alias)
	branch al_40 == 0x00 l0800_1187
l0800_1176:
	branch al_40 == 0x25 l0800_118A
l0800_117A:
	Mem112[ds:di_113 + 0x0000:byte] = al_110
	byte v15_114 = bLoc57_115 - 0x01
	di_113 = di_113 + 0x0001
	bLoc57_115 = v15_114
	branch v15_114 > 0x00 l0800_1171
l0800_1182:
	word16 bx_118
	*bxOut = fn0800_1135(fp - 0x0002, di_113, out di_113)
	goto l0800_1171
l0800_1187:
	goto l0800_1606
l0800_118A:
	al_110 = Mem0[ds:si_111 + 0x0000:byte]
	ax = DPB(ax, al_110, 0, 8) (alias)
	si_111 = si_111 + 0x0001
	branch al_110 == 0x25 l0800_117A
l0800_1193:
l0800_11B4:
	word16 ax_137 = DPB(ax, 0x00, 8, 8)
	byte bl_140 = (byte) ax_137
	word16 bx_142 = DPB(ax_137, bl_140 - 0x20, 0, 8)
	branch bl_140 >=u 0x80 l0800_1209
l0800_11C2:
	branch DPB(bx_142, Mem0[ds:bx_142 + 0x04E1:byte], 0, 8) <=u 0x0017 l0800_11D0
l0800_11CD:
	goto l0800_15F4
l0800_11D0:
l0800_1209:
l0800_15F4:
	word16 si_151 = si_111
	byte al_153 = 0x25
l0800_15FE:
	word16 bx_161
	*bxOut = fn0800_112D(fp - 0x0002, di_113, al_153, ds, out di_113)
	byte al_164 = Mem0[ds:si_151 + 0x0000:byte]
	sp_158 = sp_158 + 0xFFFE
	si_151 = si_151 + 0x0001
	al_153 = al_164
	branch al_164 != 0x00 l0800_15FE
l0800_1606:
	branch bLoc57_115 >= 0x50 l0800_160F
	branch bLoc57_115 >= 0x50 l0800_160F
l0800_160C:
	word16 di_99
	fn0800_1135(fp - 0x0002, di_113, out di_99)
	word16 di_101
	word16 bx_102
	*bxOut = fn0800_1135(fp - 0x0002, di_99, out di_101)
l0800_160F:
	word16 ax_81
	word16 sp_78 = sp_158 + 0x0002
	branch 0x0000 == 0x0000 l0800_161D
l0800_1616:
	ax_81 = 0xFFFF
	goto l0800_1622
l0800_161D:
	ax_81 = 0x0000
l0800_1622:
	word16 di_84
	*diOut = Mem0[ss:sp_78 + 0x0000:word16]
	word16 si_86
	*siOut = Mem0[ss:sp_78 + 0x0002:word16]
	return ax_81
fn0800_1107_exit:
}

word16 fn0800_112D(word16 bp, word16 di, byte al, selector ds, ptr16 diOut)
{
	Mem3[ds:di + 0x0000:byte] = al;
	byte v9_9 = Mem3[ss:bp - 0x0055:byte] - 0x01;
	Mem10[ss:bp - 0x0055:byte] = v9_9;
	word16 di_6;
	*diOut = di + 0x0001;
	if (v9_9 > 0x00)
		word16 di_15;
}

word16 fn0800_1135(word16 bp, word16 di, ptr16 diOut)
{
	word16 di_17 = di - (bp - 0x0054);
	SEQ(cs, Mem0[ss:bp + 0x000A:word16])();
	if (bp == 0x0054)
		Mem51[ss:bp - 0x0002:word16] = 0x0001;
	Mem37[ss:bp - 0x0055:byte] = 0x50;
	Mem39[ss:bp - 0x0058:word16] = Mem37[ss:bp - 0x0058:word16] + di_17;
	word16 di_41;
	*diOut = bp - 0x0054;
	return es;
}

word16 fn0800_1768(word16 bx, word16 di, selector ds, word16 wArg02)
{
	word16 bx_24 = fn0800_1787(bx, di, ds, 0x032A, wArg02);
	return bx_24;
}

word16 fn0800_1787(word16 bx, word16 di, selector ds, word16 wArg06, word16 wArg08)
{
fn0800_1787_entry:
l0800_1787:
	word16 bp_204 = fp - 0x0002
l0800_17B5:
	word16 si_203 = wArg08
l0800_17BA:
	byte al_57 = Mem0[ds:si_203 + 0x0000:byte]
	si_203 = si_203 + 0x0001
	branch al_57 == 0x00 l0800_181C
l0800_17BF:
	branch al_57 == 0x25 l0800_181F
l0800_17C3:
	call SEQ(cs, Mem0[ss:bp_204 + 0x0004:word16]) (retsize: 2; depth: 54)
	word16 ax_127 = (int16) al_57
	word16 ax_138 = di_264
	branch di_264 < 0x0000 l0800_17F8
l0800_17D3:
	di = ax_127
	branch ax_127 < 0x0000 || Mem0[ds:ax_127 + 0x0542:byte] != 0x01 l0800_1809
	goto l0800_17DE
l0800_17D7:
l0800_17DE:
	byte bl_210 = (byte) ax_138
	bx = DPB(ax_138, bl_210, 0, 8) (alias)
	branch bl_210 < 0x00 || Mem0[ds:bx + 0x0542:byte] != 0x01 l0800_17FB
	goto l0800_17EA
l0800_17E3:
l0800_17EA:
	call SEQ(cs, Mem0[ss:bp_204 + 0x0004:word16]) (retsize: 2; depth: 54)
	ax_138 = bx_265
	word16 bx_265 = bx
	branch bx_265 > 0x0000 l0800_17DE
l0800_17F8:
	goto l0800_1B7F
l0800_17FB:
	call SEQ(cs, Mem0[ss:bp_204 + 0x0006:word16]) (retsize: 2; depth: 56)
	goto l0800_17BA
l0800_1809:
	word16 di_264 = di
	branch di_264 == ax_127 l0800_17BA
l0800_180D:
	call SEQ(cs, Mem0[ss:bp_204 + 0x0006:word16]) (retsize: 2; depth: 56)
	goto l0800_1B93
l0800_181C:
	goto l0800_1B93
l0800_181F:
	branch (int16) Mem0[ds:si_203 + 0x0000:byte] < 0x0000 l0800_187A
l0800_1832:
	branch DPB(bx, 0x00, 8, 8) <=u 0x0015 l0800_1842
l0800_183F:
	goto l0800_1B7F
l0800_1842:
l0800_187A:
	goto l0800_1B93
l0800_1B7F:
	call SEQ(cs, Mem0[ss:bp_204 + 0x0006:word16]) (retsize: 2; depth: 56)
	Mem125[ss:bp_204 - 0x0028:word16] = 0x0000
l0800_1B93:
l0800_1C20:
	return bx
fn0800_1787_exit:
}

word16 fn0800_1DEB(word16 wArg04, word16 wArg06, word16 wArg08, word16 wArg0A, ptr16 dxOut)
{
	word16 di_13 = 0x0002;
	word16 ax_101 = wArg04;
	word16 dx_117 = wArg06;
	word16 bx_163 = wArg08;
	word16 cx_158 = wArg0A;
	if (wArg0A == 0x0000)
	{
		dx_117 = wArg06;
		word32 dx_ax_181 = SEQ(wArg06, wArg04);
		if (wArg06 != 0x0000)
		{
			bx_163 = wArg08;
			if (wArg08 != 0x0000)
			{
l0800_1E12:
				if (true)
				{
					if (dx_117 < 0x0000)
					{
						ax_101 = -wArg04;
						dx_117 = -dx_117 - (ax_101 == 0x0000);
						di_13 = 0x000E;
					}
					cx_158 = wArg0A;
					if (wArg0A < 0x0000)
					{
						bx_163 = -bx_163;
						cx_158 = -wArg0A - (bx_163 == 0x0000);
						di_13 = di_13 ^ 0x0004;
					}
				}
				ui32 bp_bx_66 = SEQ(cx_158, bx_163);
				word16 cx_107 = 0x0020;
				word16 di_105 = 0x0000;
				word16 si_106 = 0x0000;
				do
				{
					ax_101 = ax_101 << 0x0001;
					dx_117 = __rcl(dx_117, 0x01, cond(ax_101));
					*dxOut = dx_117;
					si_106 = __rcl(si_106, 0x01, (dx_117 & 0x8000) != 0x0000);
					di_105 = __rcl(di_105, 0x01, (si_106 & 0x8000) != 0x0000);
					if (di_105 >=u cx_158 && (di_105 >u cx_158 || si_106 >=u bx_163))
					{
						ui32 di_si_139 = SEQ(di_105, si_106 - bx_163) - bp_bx_66;
						di_105 = SLICE(di_si_139, word16, 16);
						si_106 = (word16) di_si_139;
						ax_101 = ax_101 + 0x0001;
					}
					cx_107 = cx_107 - 0x0001;
				} while (cx_107 != 0x0000);
				word16 bx_108 = di_13;
				if ((di_13 & 0x0002) != 0x0000)
				{
					ax_101 = si_106;
					*dxOut = di_105;
					bx_108 = di_13 >>u 0x0001;
				}
				if ((bx_108 & 0x0004) != 0x0000)
				{
					ax_101 = -ax_101;
					word16 dx_126;
					*dxOut = -dx_117 - (ax_101 == 0x0000);
				}
			}
			else
			{
l0800_1E77:
				word16 dx_187 = dx_ax_181 % bx_163;
				ax_101 = SEQ(dx_187, wArg04) /u bx_163;
				if (0x0002 != 0x0000)
					ax_101 = dx_187;
				word16 dx_195;
				*dxOut = 0x0000;
			}
		}
		else
			goto l0800_1E77;
	}
	else
		goto l0800_1E12;
	return ax_101;
}

