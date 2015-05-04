// subject.c
// Generated on 5/4/2015 12:12:25 AM by decompiling from_pouet.net/with_source_397/ia32_le/subject.exe
// using Decompiler version 0.4.2.0.

#include "subject.h"

word16 fn0800_0008(word16 bp, selector ds, ptr16 bpOut, ptr16 esOut)
{
	word16 ax_34;
	word16 cx_17;
	word16 bp_18;
	word16 si_19;
	word16 di_20;
	selector es_21;
	word16 ax_22 = fn0800_00BA(0x0022, bp, ds, out cx_17, out bp_18, out si_19, out di_20, out es_21);
	if (ax_22 != 0x0000)
	{
		Mem79[ss:fp - 0x000A:word16] = 0x03EC;
		word16 di_76 = 0x03EC;
		word16 si_77 = ax_22;
		do
		{
			byte al_82 = Mem79[ds:si_77 + 0x0000:byte];
			Mem84[ds:di_76 + 0x0000:byte] = al_82;
			si_77 = si_77 + 0x0001;
			di_76 = di_76 + 0x0001;
		} while (al_82 != 0x00);
		word16 di_88 = Mem84[ss:fp - 0x000A:word16];
		fn0800_011B(di_88, ds);
		fn0800_0140(di_88, 0x0031, ds);
		if (di_88 != 0x0000)
			ax_34 = di_88;
		else
		{
l0800_003A:
			word16 si_56 = 0x01EE;
			do
			{
				selector es_65;
				*esOut = fn0800_01EC(0x0036, Mem0[ds:si_56 + 0x0000:word16], 0x03EC, ds);
				if (Mem0[ds:0x03EC:byte] != 0x00)
				{
					ax_34 = 0x03EC;
					goto l0800_005F;
				}
				word16 si_70 = si_56 + 0x0001;
				si_56 = si_70 + 0x0001;
			} while (si_70 < 0xFE0F);
			ax_34 = 0x0036;
		}
	}
	else
		goto l0800_003A;
l0800_005F:
	return ax_34;
}

void fn0800_0064(selector ds)
{
	word16 bp_15;
	selector es_16;
	word16 ax_17 = fn0800_0008(fp - 0x0084, ds, out bp_15, out es_16);
	Mem18[ss:bp_15 + 0x0078:word16] = ax_17;
	Mem21[ss:bp_15 + 0x007A:word16] = Mem18[ds:dx + 0x0000:word16];
	fn0800_031E(bp_15 - 0x0008, ds);
	Mem24[ss:bp_15 + 0x007C:word16] = bp_15 - 0x0008;
	word16 ax_25 = Mem24[ss:bp_15 + 0x0078:word16];
	Mem26[ss:bp_15 + 0x007E:word16] = 0x0000;
	word16 bp_28 = fn0800_032D(ax_25, di, es_16, ds);
	fn0800_0337(0x0041, ds);
	fn0800_0337(Mem26[ss:bp_28 + 0x0078:word16], ds);
	fn0800_035A();
	fn0800_0337(fn0800_0362(Mem26[ds:0x043C:word16], ds), ds);
	fn0800_037C(0x0001);
	return;
}

word16 fn0800_00BA(word16 ax, word16 bp, selector ds, ptr16 cxOut, ptr16 bpOut, ptr16 siOut, ptr16 diOut, ptr16 esOut)
{
	word16 ax_146;
	word16 si_117 = Mem0[ds:0x0220:word16];
	if (si_117 != 0x0000 && ax != 0x0000)
	{
		word16 di_103 = ax;
		word16 cx_104 = 0xFFFF;
		do
		{
			if (cx_104 == 0x0000)
				;
			di_103 = di_154 + 0x0001;
			cx_104 = cx_104 - 0x0001;
			word16 di_154 = di_103;
		} while (0x00 != Mem0[ds:di_154 + 0x0000:byte]);
		word16 cx_108 = ~cx_104;
		word16 cx_120 = Mem0[ds:si_117 + 0x0000:word16];
		while (cx_120 != 0x0000)
		{
			word16 ax_127 = fn0800_05FE(cx_120, ax, cx_108 - 0x0001, ds);
			if (ax_127 == 0x0000 && DPB(ax_127, 0x00, 8, 8) == 0x003D)
				;
			si_117 = si_117 + 0x0002;
			cx_120 = Mem0[ds:si_117 + 0x0000:word16];
		}
l0800_010F:
		ax_146 = 0x0000;
	}
	else
		goto l0800_010F;
l0800_0111:
}

void fn0800_011B(word16 ax, selector ds)
{
	word16 bx_13 = ax;
	byte al_25 = Mem0[ds:bx_13 + 0x0000:byte];
	while (al_25 != 0x00)
	{
		dx = DPB(dx, 0x00, 8, 8);
		if (dx <= 0x0019)
			Mem43[ds:bx_13 + 0x0000:byte] = al_25 + 0x20;
		bx_13 = bx_13 + 0x0001;
		al_25 = Mem0[ds:bx_13 + 0x0000:byte];
	}
	return;
}

void fn0800_0140(word16 ax, word16 dx, selector ds)
{
	word16 si_138 = ax;
	if (Mem0[ds:dx + 0x0000:byte] == 0x00)
		goto l0800_0176;
	else if (Mem0[ds:dx + 0x0001:byte] == 0x00)
	{
		byte dl_70 = Mem0[ds:dx + 0x0000:byte];
		do
		{
			byte al_74 = Mem0[ds:si_138 + 0x0000:byte];
			if (al_74 == dl_70)
				goto l0800_0174;
			if (al_74 == 0x00)
				break;
			word16 si_90 = si_138 + 0x0001;
			byte al_91 = Mem0[ds:si_90 + 0x0000:byte];
			if (al_91 == dl_70)
				;
			si_138 = si_90 + 0x0001;
		} while (al_91 != 0x00);
l0800_0176:
	}
	else
	{
		word16 di_109;
		word16 cx_238 = 0xFFFF;
		word16 di_246 = ax;
		byte Z_103 = cond(0x00);
		if (0xFFFF != 0x0000)
		{
			do
			{
				if (cx_238 == 0x0000)
					break;
				Z_103 = cond(0x00 - Mem0[ds:di_246 + 0x0000:byte]);
				di_246 = di_246 + 0x0001;
				cx_238 = cx_238 - 0x0001;
			} while (0x00 != Mem0[ds:di_246 + 0x0000:byte]);
			if (!Z_103)
				di_109 = di_246 - 0x0001;
			else
			{
l0800_018B:
				di_109 = cx_238;
			}
		}
		else
			goto l0800_018B;
		word16 di_111 = dx;
		word16 cx_114 = 0xFFFF;
		do
		{
			if (cx_114 == 0x0000)
				break;
			di_111 = di_263 + 0x0001;
			cx_114 = cx_114 - 0x0001;
			word16 di_263 = di_111;
		} while (0x00 != Mem0[ds:di_263 + 0x0000:byte]);
		word16 cx_127 = ~cx_114;
		word16 cx_140 = di_109 - si_138;
		byte Z_142 = cond(cx_140 - (cx_127 - 0x0001));
		while (cx_140 >=u cx_127 - 0x0001)
		{
			word16 di_161;
			word16 di_156 = si_138;
			byte al_157 = Mem0[ds:dx + 0x0000:byte];
			if (cx_140 != 0x0000)
			{
				do
				{
					if (cx_140 == 0x0000)
						break;
					Z_142 = cond(al_157 - Mem0[ds:di_156 + 0x0000:byte]);
					di_156 = di_156 + 0x0001;
					cx_140 = cx_140 - 0x0001;
				} while (al_157 != Mem0[ds:di_156 + 0x0000:byte]);
				if (!Z_142)
					di_161 = di_156 - 0x0001;
				else
				{
l0800_01BD:
					di_161 = cx_140;
				}
			}
			else
				goto l0800_01BD;
			if (di_161 == 0x0000)
				break;
			word16 cx_168 = cx_127 - 0x0001;
			word16 di_170 = dx;
			word16 si_172 = di_161;
			do
			{
				if (cx_168 == 0x0000)
					break;
				si_172 = si_265 + 0x0001;
				di_170 = di_264 + 0x0001;
				cx_168 = cx_168 - 0x0001;
				word16 di_264 = di_170;
				word16 si_265 = si_172;
			} while (Mem0[ds:si_265 + 0x0000:byte] != Mem0[ds:di_264 + 0x0000:byte]);
			if ((FPUF & 0x40) != 0x00)
				goto l0800_01E3;
			si_138 = di_161 + 0x0001;
			cx_140 = di_109 - si_138;
			Z_142 = cond(cx_140 - (cx_127 - 0x0001));
		}
	}
l0800_01E3:
	return;
}

selector fn0800_01EC(word16 ax, word16 dx, word16 bx, selector ds)
{
	fn0800_035A();
	word16 dx_34;
	byte cl_132;
	word16 ax_36 = fn0800_0651((byte) Mem0[ds:0x043C:word16], 0x00, ds, out dx_34, out cl_132);
	if (ax_36 == 0x0000)
	{
		byte al_63 = Mem0[ds:ax + 0x0000:byte];
		word16 ax_65 = DPB(ax_36, 0x00, 8, 8);
		word16 bx_66 = bx;
		if (ax_65 != 0x005C && (ax_65 != 0x002E && (ax_65 != 0x002F && (al_63 == 0x00 || DPB(ax_65, Mem0[ds:ax + 0x0001:byte], 0, 8) != 0x003A))))
		{
			fn0800_0674(bx, 0x0090, ds);
			word16 ax_90 = fn0800_06F2(bx, ds);
			bx_66 = bx + ax_90;
			if (DPB(ax_90, 0x00, 8, 8) != 0x005C)
			{
				Mem97[ds:bx_66 + 0x0000:byte] = 0x5C;
				bx_66 = bx_66 + 0x0001;
			}
		}
		fn0800_070B(bx_66, ax, ds);
	}
	else
	{
		word16 cx_105;
		word16 bp_106;
		word16 si_107;
		word16 di_108;
		word16 ax_110 = fn0800_00BA(dx, fp - 0x0008, ds, out cx_105, out bp_106, out si_107, out di_108, out es);
		word16 si_111 = ax_110;
		if (ax_110 != 0x0000)
		{
l0800_0265:
			while (Mem0[ds:si_111 + 0x0000:byte] != 0x00)
			{
				word16 bx_143 = Mem0[ss:bp_106 - 0x0002:word16] + 0x0001;
				while (Mem0[ds:si_111 + 0x0000:byte] != 0x00)
				{
					byte al_202 = Mem0[ds:si_111 + 0x0000:byte];
					ax_110 = DPB(ax_110, 0x00, 8, 8);
					if (ax_110 == 0x003B)
						break;
					Mem208[ds:bx_143 + 0x0000:byte] = al_202;
					si_111 = si_111 + 0x0001;
					bx_143 = bx_143 + 0x0001;
				}
				if (bx_143 != Mem0[ss:bp_106 - 0x0002:word16])
				{
					word16 ax_172 = DPB(ax_110, 0x00, 8, 8);
					if (ax_172 != 0x005C && (ax_172 != 0x002F && ax_172 != 0x003A))
					{
						Mem199[ds:bx_143 + 0x0000:byte] = 0x5C;
						bx_143 = bx_143 + 0x0000;
					}
					Mem179[ds:bx_143 + 0x0000:byte] = 0x00;
					fn0800_074A(bx_143, di_108, ds);
					word16 dx_185;
					ax_110 = fn0800_0651(cl_132, 0x00, ds, out dx_185, out cl_132);
					if (ax_110 == 0x0000)
					{
						word16 bx_192;
						fn0800_0780(cx_105, dx_185, ds, out bx_192);
						goto l0800_02C9;
					}
				}
l0800_02BB:
				if (Mem0[ds:si_111 + 0x0000:byte] == 0x00)
					break;
				si_111 = si_111 + 0x0001;
			}
l0800_02C3:
			Mem130[ds:Mem0[ss:bp_106 - 0x0002:word16]:byte] = 0x00;
		}
		else
			goto l0800_02C3;
	}
l0800_02C9:
	return es;
}

void fn0800_02D0(word16 ax, word16 dx, selector ds)
{
	word16 dx_27 = DPB(dx, 0x00, 8, 8);
	selector es_24 = Mem0[ds:0x0226:selector];
	word16 si_28 = 0x0081;
	word16 ax_29 = dx_27;
	if (ax != 0x0000)
		if (dx < 0x0002)
			Mem59[ds:ax + 0x0000:byte] = 0x00;
		else
		{
			word16 bx_60 = ax;
			if (dx_27 >= dx)
			{
				ax_29 = dx - 0x0001;
				goto l0800_0302;
			}
l0800_0302:
			ax_29 = ax_29 - 0x0001;
			while (ax_29 != 0xFFFF)
			{
				Mem74[ds:bx_60 + 0x0000:byte] = Mem0[es_24:si_28 + 0x0000:byte];
				si_28 = si_28 + 0x0001;
				bx_60 = bx_60 + 0x0001;
				ax_29 = ax_29 - 0x0001;
			}
			Mem78[ds:bx_60 + 0x0000:byte] = 0x00;
		}
	return;
}

void fn0800_031E(word16 ax, selector ds)
{
	fn0800_02D0(ax, 0x7FFF, ds);
	return;
}

word16 fn0800_032D(word16 ax, word16 di, selector es, selector ds)
{
	fn0800_07A6(ax, Mem0[ds:0x0220:word16], di, es, ds);
	return bp;
}

byte fn0800_0337(word16 ax, selector ds)
{
	word16 ax_11 = fn0800_08B4(ax, 0x025C, ds);
	byte Z_14 = cond(ax_11 - 0xFFFF);
	if (ax_11 != 0xFFFF)
	{
		word16 cx_30;
		word16 bx_31;
		word16 si_32;
		word16 ax_33 = fn0800_0924(0x000A, 0x025C, ds, out cx_30, out bx_31, out si_32);
		Z_14 = cond(ax_33 - 0x000A);
		if (ax_33 == 0x000A)
			;
	}
	return Z_14;
}

word16 fn0800_035A()
{
	return 0x043C;
}

word16 fn0800_035E()
{
	return 0x043E;
}

word16 fn0800_0362(word16 ax, selector ds)
{
	if (ax >= 0x0000 && ax <= 0x000F)
		return SEQ(ds, 0x01F4)[ax * 0x0002];
	else
		return 0x0183;
}

void fn0800_037C(word16 ax)
{
	SEQ(cs, Mem0[ds:0x0214:word16])();
	SEQ(cs, Mem0[ds:0x0216:word16])();
	fn0800_038E(ax);
	return;
}

void fn0800_038E(word16 ax)
{
	SEQ(cs, Mem0[ds:0x0216:word16])();
	SEQ(cs, Mem0[ds:0x0218:word16])();
	fn0800_059C(ax);
	return;
}

void fn0800_039E(word16 bp, selector ds)
{
	Mem9[0x0A91:0x022C:word16] = 0x0450;
	Mem11[0x0A91:0x0226:word16] = ds;
	word16 bx_16 = DPB(fp + 0x045F, (byte) (fp + 0x045F) & 0xF0, 0, 8);
	Mem19[0x0A91:0x022E:word16] = bx_16;
	word16 cx_2 = 0x0A91;
	word16 dx_222 = bx_16 >>u 0x0004;
	byte Z_210 = cond(Mem19[0x0A91:0x022A:byte]);
	if (Mem19[0x0A91:0x022A:byte] == 0x00)
	{
		word16 cx_217 = Mem19[ds:0x0002:word16];
		cx_2 = cx_217 - 0x0A91;
		if (bx_16 >>u 0x0004 >=u cx_217 - 0x0A91)
		{
			word16 ax_254;
			fn0800_0A5A(0x042D, cs, 0x0001, ds, out ax_254);
			dx_222 = cs;
		}
		word16 bx_226 = dx_222 << 0x0001;
		word16 bx_229 = bx_226 << 0x0003;
		if (bx_226 << 0x0003 == 0x0000)
			bx_229 = 0xFFFE;
		Mem235[0x0A91:0x0224:word16] = bx_229;
		word16 ax_238 = Mem235[0x0A91:0x0226:word16];
		word16 bx_240 = dx_222 + 0x0A91 - ax_238;
		word16 bx_245;
		msdos_resize_memory_block(ax_238, bx_240, out bx_245);
		Z_210 = cond(bx_240);
	}
	word16 di_213 = 0x0081;
	word16 cx_214 = DPB(cx_2, 0x00, 8, 8);
	do
	{
		if (cx_214 == 0x0000)
			break;
		Z_210 = cond(0x20 - Mem19[ds:di_213 + 0x0000:byte]);
		di_213 = di_213 + 0x0001;
		cx_214 = cx_214 - 0x0001;
	} while (0x20 != Mem19[ds:di_213 + 0x0000:byte]);
	word16 di_197 = Mem19[0x0A91:0x022C:word16];
	Mem73[0x0A91:0x0246:word16] = di_197;
	Mem74[0x0A91:0x0248:word16] = 0x0A91;
	word16 si_196 = di_213 - 0x0001;
	if (!Z_210)
	{
		word16 cx_192 = cx_214 + 0x0001;
		while (cx_192 != 0x0000)
		{
			Mem202[0x0A91:di_197 + 0x0000:byte] = Mem74[ds:si_196 + 0x0000:byte];
			si_196 = si_196 + 0x0001;
			di_197 = di_197 + 0x0001;
			cx_192 = cx_192 - 0x0001;
		}
	}
	Mem79[0x0A91:di_197 + 0x0000:byte] = 0x00;
	word16 di_80 = di_197 + 0x0001;
	Mem82[0x0A91:di_80 + 0x0000:byte] = 0x00;
	byte ah_86;
	byte al_87 = msdos_get_dos_version(out ah_86);
	Mem88[0x0A91:0x0228:byte] = al_87;
	Mem89[0x0A91:0x0229:byte] = ah_86;
	word16 di_100 = di_80;
	if (al_87 >=u 0x03)
	{
		selector ds_151 = Mem89[ds:0x002C:selector];
		word16 si_152 = 0x0000;
		bp = 0x0000;
		do
		{
			if ((Mem89[ds_151:si_152 + 0x0000:word16] | 0x2020) == 0x6F6E && Mem89[ds_151:si_152 + 0x0002:word16] == 0x3738)
			{
				bp = bp + 0x0001;
				goto l0800_0523;
			}
l0800_0523:
			do
			{
				si_152 = si_257 + 0x0001;
				word16 si_257 = si_152;
			} while (Mem89[ds_151:si_257 + 0x0000:byte] != 0x00);
		} while (Mem89[ds_151:si_152 + 0x0000:byte] != 0x00);
		word16 si_177 = si_152 + 0x0003;
		do
		{
			Mem184[0x0A91:di_100 + 0x0000:byte] = Mem89[ds_151:si_258 + 0x0000:byte];
			si_177 = si_258 + 0x0001;
			di_100 = di_100 + 0x0001;
			word16 si_258 = si_177;
		} while (Mem89[ds_151:si_258 + 0x0000:byte] != 0x00);
	}
	Mem102[0x0A91:0x024A:word16] = di_80;
	Mem103[0x0A91:0x024C:word16] = 0x0A91;
	Mem109[0x0A91:0x0234:word16] = bp;
	Mem110[0x0A91:0x022C:word16] = di_100;
	word16 di_112 = 0x03EC;
	word16 cx_113 = 0x0062;
	while (cx_113 != 0x0000)
	{
		Mem122[0x0A91:di_112 + 0x0000:byte] = 0x00;
		di_112 = di_112 + 0x0001;
		cx_113 = cx_113 - 0x0001;
	}
	if (Mem110[0x0A91:0x0236:word16] == 0x0000)
	{
		Mem145[0x0A91:0x0236:word16] = 0x05FD;
		Mem146[0x0A91:0x0238:word16] = cs;
		Mem147[0x0A91:0x023A:word16] = 0x05FD;
		Mem148[0x0A91:0x023C:word16] = cs;
		Mem149[0x0A91:0x023E:word16] = 0x05FD;
		Mem150[0x0A91:0x0240:word16] = cs;
	}
	Mem133[0x0A91:0x0242:word16] = 0x05FC;
	Mem135[0x0A91:0x0244:word16] = cs;
	word16 ax_139;
	fn0800_0A18(out ax_139);
	fn0800_09AC(0x0A91);
	fn0800_059C(ax_139);
	return;
}

void fn0800_059C(word16 ax)
{
	word16 di_16 = 0x0000;
	word16 cx_10 = 0x0010;
	do
	{
		if (cx_10 == 0x0000)
			break;
		Z = cond(0x0101 - Mem0[0x0A91:di_40 + 0x0000:word16]);
		di_16 = di_40 + 0x0002;
		cx_10 = cx_10 - 0x0001;
		word16 di_40 = di_16;
	} while (0x0101 != Mem0[0x0A91:di_40 + 0x0000:word16]);
	byte al_23 = (byte) ax;
	if (!Z)
	{
		fn0800_05BB(0x040C, cs, ax);
		return;
	}
	else
	{
		fn0800_05E5(al_23);
		return;
	}
}

void fn0800_05BB(word16 ax, word16 dx, word16 bx)
{
	Mem3[ss:0x04CC:word16] = bx;
	Mem7[ss:0x04CA:word16] = ax;
	Mem10[ss:0x04C8:word16] = dx;
	word16 ax_17;
	msdos_open_file(0800:0441, 0x01, out ax_17);
	selector ds_20 = Mem10[ss:0x04C8:selector];
	word16 dx_22 = Mem10[ss:0x04CA:word16];
	word32 ds_dx_23 = SEQ(ds_20, dx_22);
	word16 si_25 = dx_22;
	do
	{
		si_25 = si_46 + 0x0001;
		word16 si_46 = si_25;
	} while (Mem10[ds_20:si_46 + 0x0000:byte] != 0x00);
	word16 ax_39;
	msdos_write_file(0x3D01, si_25 - dx_22 - 0x0001, ds_dx_23, out ax_39);
	byte al_43 = (byte) Mem10[ss:0x04CC:word16];
	fn0800_05E5(al_43);
	return;
}

void fn0800_05E5(byte al)
{
	sp = fp;
	sp = fp - 0x0002;
	wLoc02 = ax;
	ax = 0x0000;
	dx = 0x00FF;
	CZ = fn0800_0A36(out dx);
	ax = wLoc02;
	al = (byte) ax;
	sp = fp;
	ah = 0x4C;
	ax = DPB(ax, ah, 8, 8);
	msdos_terminate(al);
}

selector fn0800_05F4()
{
	return 0x0A91;
}

word16 fn0800_05FE(word16 ax, word16 dx, word16 bx, selector ds)
{
	word16 di_28 = ax;
	word16 si_11 = dx;
	while (bx != 0x0000)
	{
		byte ah_107 = Mem0[ds:si_11 + 0x0000:byte];
		byte al_112 = Mem0[ds:di_28 + 0x0000:byte];
		ax = DPB(ax, ah_107, 8, 8);
		word16 dx_63 = DPB(dx, 0x00, 8, 8);
		if (dx_63 >= 0x0041 && dx_63 <= 0x005A)
		{
			al_112 = al_112 + 0x20;
			ax = DPB(ax, al_112 + 0x20, 0, 8);
		}
		dx = DPB(dx_63, 0x00, 8, 8);
		if (dx >= 0x0041 && dx <= 0x005A)
		{
			ah_107 = ah_107 + 0x20;
			ax = DPB(ax, ah_107 + 0x20, 8, 8);
		}
		if (al_112 != ah_107)
			return DPB(dx, 0x00, 8, 8) - DPB(ax, 0x00, 8, 8);
		if (ah_107 == 0x00)
			return ax;
		di_28 = di_28 + 0x0001;
		si_11 = si_11 + 0x0001;
		bx = bx - 0x0001;
	}
	return 0x0000;
}

word16 fn0800_0651(byte cl, byte dl, selector ds, ptr16 dxOut, ptr16 clOut)
{
	msdos_unknown_2143();
	byte bl_10 = (byte) dx;
	byte al_14 = 0x00;
	if (!C)
	{
		C = false;
		if ((bl_10 & 0x02) != 0x00)
		{
			C = false;
			if ((cl & 0x01) != 0x00)
			{
				al_14 = 0x00;
				C = true;
			}
		}
	}
	word16 dx_26;
	word16 ax_27 = fn0800_0CD5(0x0000 - C, al_14, ds, out dx_26);
	byte cl_32;
	*clOut = (byte) Mem0[ss:fp - 0x0004:word16];
	return ax_27;
}

void fn0800_0674(word16 ax, word16 dx, selector ds)
{
	word16 ax_140;
	word16 wLoc9E_126 = ax;
	word16 bx_130 = dx;
	word16 dx_121 = 0x0000 - msdos_get_current_directory(0x00, ds, DPB(dx, 0x00, 0, 8));
	if (dx_121 < 0x0000)
	{
		ax_140 = 0x0001;
l0800_0699:
		word16 bx_81;
		fn0800_0780(ax_140, dx_121, ds, out bx_81);
	}
	else
	{
		msdos_get_current_default_drive();
		word16 di_101 = fp - 0x009C;
		word16 cx_105 = 0xFFFF;
		do
		{
			if (cx_105 == 0x0000)
				break;
			di_101 = di_150 + 0x0001;
			cx_105 = cx_105 - 0x0001;
			word16 di_150 = di_101;
		} while (0x00 != Mem0[ds:di_150 + 0x0000:byte]);
		word16 cx_118 = ~cx_105;
		dx_121 = cx_118;
		if (ax == 0x0000)
		{
			byte cl_134;
			word16 ax_135 = fn0800_0D39(cx_118, ds, out cl_134);
			wLoc9E_126 = ax_135;
			if (ax_135 == 0x0000)
			{
				ax_140 = 0x0005;
				goto l0800_0699;
			}
			else
			{
				bx_130 = cx_118;
l0800_06DE:
				fn0800_0DE6(wLoc9E_126, fp - 0x009C, bx_130, ds);
			}
		}
		else
			goto l0800_06DE;
	}
	return;
}

word16 fn0800_06F2(word16 ax, selector ds)
{
	word16 di_12 = ax;
	word16 cx_16 = 0xFFFF;
	do
	{
		if (cx_16 == 0x0000)
			break;
		di_12 = di_46 + 0x0001;
		cx_16 = cx_16 - 0x0001;
		word16 di_46 = di_12;
	} while (0x00 != Mem0[ds:di_46 + 0x0000:byte]);
	return ~cx_16 - 0x0001;
}

void fn0800_070B(word16 ax, word16 dx, selector ds)
{
	word16 di_31 = ax;
	word16 si_11 = dx;
	if ((dx & 0x0001) != 0x0000)
	{
		byte al_69 = Mem0[ds:dx + 0x0000:byte];
		Mem71[ds:ax + 0x0000:byte] = al_69;
		si_11 = dx + 0x0001;
		di_31 = ax + 0x0001;
		if (al_69 != 0x00)
		{
l0800_0720:
			do
			{
				word16 ax_35 = Mem0[ds:si_11 + 0x0000:word16];
				byte al_36 = (byte) ax_35;
				byte ah_37 = SLICE(ax_35, byte, 8);
				if (al_36 == 0x00)
					goto l0800_0744;
				Mem51[ds:di_31 + 0x0000:word16] = ax_35;
				di_31 = di_31 + 0x0002;
				if (ah_37 == 0x00)
					goto l0800_0746;
				word16 ax_56 = Mem51[ds:si_11 + 0x0002:word16];
				al_36 = (byte) ax_56;
				byte ah_58 = SLICE(ax_56, byte, 8);
				if (al_36 == 0x00)
					;
				Mem62[ds:di_31 + 0x0000:word16] = ax_56;
				si_11 = si_11 + 0x0004;
				di_31 = di_31 + 0x0002;
			} while (ah_58 != 0x00);
			if (ah_58 != 0x00)
				Mem50[ds:di_31 + 0x0000:byte] = al_36;
		}
	}
	else
		goto l0800_0720;
	return;
}

void fn0800_074A(word16 ax, word16 dx, selector ds)
{
	word16 si_15 = dx + 0x0001;
	word16 di_17 = ax;
	word16 cx_25 = 0xFFFF;
	do
	{
		if (cx_25 == 0x0000)
			break;
		di_17 = di_17 + 0x0001;
		cx_25 = cx_25 - 0x0001;
	} while (0x00 != Mem0[ds:di_17 + 0x0000:byte]);
	word16 di_37 = di_17 - 0x0001 + 0x0001;
	do
	{
		byte al_42 = Mem0[ds:si_15 + 0x0000:byte];
		Mem43[ds:di_37 + 0x0000:byte] = al_42;
		if (al_42 == 0x00)
			break;
		byte al_60 = Mem43[ds:si_15 + 0x0000:byte];
		Mem62[ds:di_37 + 0x0000:byte] = al_60;
		si_15 = si_15 + 0x0002;
		di_37 = di_37 + 0x0002;
	} while (al_60 != 0x00);
	return;
}

word16 fn0800_0780(word16 ax, word16 dx, selector ds, ptr16 bxOut)
{
	word16 ax_10 = fn0800_035A();
	word16 bx_13;
	return fn0800_0787(ax_10, ax, ds, wLoc06, dx, out bx_13);
}

word16 fn0800_0787(word16 ax, word16 dx, selector ds, word16 wArg00, word16 wArg02, ptr16 bxOut)
{
	Mem5[ds:ax + 0x0000:word16] = dx;
	word16 bx_11;
	*bxOut = wArg02;
	return wArg00;
}

word16 fn0800_079D(word16 ax, word16 dx, selector ds, ptr16 bxOut)
{
	word16 ax_10 = fn0800_035E();
	word16 bx_13;
	return fn0800_0787(ax_10, ax, ds, wLoc06, dx, out bx_13);
}

void fn0800_07A6(word16 ax, word16 bx, word16 di, selector es, selector ds)
{
	fn0800_0E0F(ax, bx, fp - 0x0088, ax, di, es, ds);
	if (0x0000 != 0x0000)
	{
l0800_07C5:
l0800_08A9:
	}
	else
	{
		word16 ax_209 = fn0800_035A();
		if (Mem0[ds:0x043C:word16] != 0x0001)
		{
			ax_209 = fn0800_035A();
			if (Mem0[ds:0x043C:word16] == 0x0009)
			{
l0800_07DC:
				byte al_97 = Mem0[ds:ax + 0x0000:byte];
				word16 ax_99 = DPB(ax_209, 0x00, 8, 8);
				if (ax_99 != 0x005C && (al_97 != 0x00 && DPB(ax_99, Mem0[ds:ax + 0x0001:byte], 0, 8) != 0x003A))
				{
					word16 cx_110;
					word16 bp_111;
					word16 si_112;
					word16 di_113;
					selector es_114;
					word16 ax_115 = fn0800_00BA(0x0192, fp - 0x0088, ds, out cx_110, out bp_111, out si_112, out di_113, out es_114);
					word16 di_116 = ax_115;
					if (ax_115 != 0x0000)
					{
						Mem123[ss:bp_111 + 0x007C:word16] = fn0800_06F2(si_112, ds) + 0x0001;
						Mem127[ss:bp_111 + 0x0078:word16] = 0x0090 - Mem123[ss:bp_111 + 0x007C:word16];
						while (Mem127[ds:di_116 + 0x0000:byte] != 0x00)
						{
							fn0800_1285(di_116, 0x3B, ds);
							Mem143[ss:bp_111 + 0x007E:word16] = di_116;
							if (di_116 == 0x0000)
								Mem208[ss:bp_111 + 0x007E:word16] = di_116 + fn0800_06F2(di_116, ds);
							word16 bx_149 = Mem143[ss:bp_111 + 0x007E:word16] - di_116;
							Mem150[ss:bp_111 + 0x0076:word16] = bx_149;
							if (bx_149 >u Mem150[ss:bp_111 + 0x0078:word16])
							{
								word16 bx_154;
								word16 bx_158;
								fn0800_079D(0x000A, fn0800_0780(0x0002, 0x003B, ds, out bx_154), ds, out bx_158);
								goto l0800_08AB;
							}
							word16 di_165 = bp_111 - 0x001A + Mem150[ss:bp_111 + 0x0076:word16];
							fn0800_129E(bp_111 - 0x001A, di_116, bx_149, ds);
							if (DPB(bp_111 - 0x001A, 0x00, 8, 8) != 0x005C)
							{
								Mem200[ds:di_165 + 0x0000:byte] = 0x5C;
								di_165 = di_165 + 0x0001;
							}
							fn0800_129E(di_165, si_112, Mem150[ss:bp_111 + 0x007C:word16], ds);
							fn0800_0E0F(bp_111 - 0x001A, cx_110, bp_111, si_112, di_165, es_114, ds);
							if (false)
								goto l0800_08A9;
							word16 ax_183 = fn0800_035A();
							if (Mem150[ds:0x043C:word16] != 0x0001)
							{
								ax_183 = fn0800_035A();
								if (Mem150[ds:0x043C:word16] != 0x0009)
									goto l0800_08A9;
							}
l0800_0899:
							word16 di_188 = Mem150[ss:bp_111 + 0x007E:word16];
							if (DPB(ax_183, 0x00, 8, 8) != 0x003B)
								;
							di_116 = di_188 + 0x0001;
						}
					}
					else
						goto l0800_07C5;
				}
				else
					goto l0800_07C5;
			}
			else
				goto l0800_07C5;
		}
		else
			goto l0800_07DC;
	}
l0800_08AB:
	return;
}

word16 fn0800_08B4(word16 ax, word16 dx, selector ds)
{
	word16 ax_103;
	word16 si_102 = ax;
	word16 bx_101 = dx;
	ax_103 = ax;
	if (Mem0[ds:dx + 0x0004:word16] == 0x0000)
	{
		fn0800_12BE(dx, ds);
		ax_103 = dx;
	}
	word16 di_112 = 0x0000;
	if ((Mem0[ds:dx + 0x0007:byte] & 0x04) != 0x00)
	{
		Mem110[ds:dx + 0x0007:byte] = Mem0[ds:dx + 0x0007:byte] & 0xF9;
		Mem114[ds:dx + 0x0007:byte] = Mem110[ds:dx + 0x0007:byte] | 0x02;
		di_112 = 0x0001;
	}
	word16 cx_100 = 0x0000;
	do
	{
		word16 ax_46 = DPB(ax_103, 0x00, 8, 8);
		if (ax_46 == 0x0000)
			goto l0800_08FA;
		ax_103 = fn0800_0924(ax_46, bx_101, ds, out cx_100, out bx_101, out si_102);
	} while (ax_103 != 0xFFFF);
	cx_100 = ax_103;
	if (di_112 != 0x0000)
	{
		Mem86[ds:bx_101 + 0x0007:byte] = Mem0[ds:bx_101 + 0x0007:byte] & 0xF9;
		Mem89[ds:bx_101 + 0x0007:byte] = Mem86[ds:bx_101 + 0x0007:byte] | 0x04;
		if (cx_100 == 0x0000)
			cx_100 = fn0800_131B(bx_101, ds);
	}
	if (cx_100 == 0x0000)
		cx_100 = si_102 - ax;
	return cx_100;
}

word16 fn0800_0924(word16 ax, word16 dx, selector ds, ptr16 cxOut, ptr16 bxOut, ptr16 siOut)
{
	word16 ax_24;
	word16 sp_29 = fp - 0x0006;
	word16 cx_12 = ax;
	byte cl_125 = (byte) ax;
	if ((Mem0[ds:dx + 0x0006:byte] & 0x02) == 0x00)
	{
		word16 bx_42;
		fn0800_0780(0x0004, dx, ds, out bx_42);
		Mem49[ds:bx_42 + 0x0006:byte] = Mem0[ds:bx_42 + 0x0006:byte] | 0x20;
		sp_29 = fp - 0x0008;
		ax_24 = 0xFFFF;
	}
	else
	{
		if (Mem0[ds:dx + 0x0004:word16] == 0x0000)
		{
			cx_12 = fn0800_12BE(dx, ds);
			cl_125 = (byte) cx_12;
		}
		word16 dx_102 = 0x0400;
		if (cx_12 == 0x000A)
		{
			dx_102 = 0x0600;
			if ((Mem0[ds:dx + 0x0006:byte] & 0x40) == 0x00)
			{
				word16 si_106 = Mem0[ds:dx + 0x0000:word16];
				Mem108[ds:dx + 0x0007:byte] = Mem0[ds:dx + 0x0007:byte] | 0x10;
				Mem110[ds:si_106 + 0x0000:byte] = 0x0D;
				Mem112[ds:dx + 0x0000:word16] = Mem110[ds:dx + 0x0000:word16] + 0x0001;
				Mem114[ds:dx + 0x0002:word16] = Mem112[ds:dx + 0x0002:word16] + 0x0001;
				if (Mem114[ds:dx + 0x0002:word16] == Mem114[ds:dx + 0x000A:word16] && fn0800_131B(dx, ds) != 0x0000)
				{
l0800_097C:
					ax_24 = 0xFFFF;
				}
				else
				{
l0800_0981:
					word16 ax_87;
					word16 si_73 = Mem0[ds:dx + 0x0000:word16];
					Mem75[ds:dx + 0x0007:byte] = Mem0[ds:dx + 0x0007:byte] | 0x10;
					Mem77[ds:si_73 + 0x0000:byte] = cl_125;
					Mem79[ds:dx + 0x0000:word16] = Mem77[ds:dx + 0x0000:word16] + 0x0001;
					Mem81[ds:dx + 0x0002:word16] = Mem79[ds:dx + 0x0002:word16] + 0x0001;
					if ((Mem81[ds:dx + 0x0006:word16] & dx_102) == 0x0000)
					{
						ax_87 = Mem81[ds:dx + 0x0002:word16];
						if (ax_87 == Mem81[ds:dx + 0x000A:word16])
						{
l0800_099B:
							ax_87 = fn0800_131B(dx, ds);
							if (ax_87 == 0x0000)
							{
l0800_09A4:
								ax_24 = DPB(ax_87, 0x00, 8, 8);
							}
							else
								goto l0800_097C;
						}
						else
							goto l0800_09A4;
					}
					else
						goto l0800_099B;
				}
			}
			else
				goto l0800_0981;
		}
		else
			goto l0800_0981;
	}
	word16 sp_32 = sp_29 + 0x0002;
	word16 si_31;
	*siOut = Mem0[ss:sp_29 + 0x0000:word16];
	word16 cx_33;
	*cxOut = Mem0[ss:sp_32 + 0x0000:word16];
	word16 bx_36;
	*bxOut = Mem0[ss:sp_32 + 0x0002:word16];
	return ax_24;
}

void fn0800_09AC(selector ds)
{
	word16 ax_8 = Mem0[ds:0x0444:word16];
	Mem9[ds:0x0386:word16] = 0x2000;
	fn0800_0064(ds);
	fn0800_037C(ax_8);
	return;
}

byte fn0800_09C2(word16 si, word16 di, ptr16 axOut)
{
fn0800_09C2_entry:
l0800_09C2:
	selector ds_120 = fn0800_05F4()
l0800_09C7:
	word16 bx_122 = di
	word16 ax_46
	*axOut = DPB(ax, dl, 0, 8)
	si_63 = si
l0800_09CC:
	word16 si_63
	branch si_63 >=u di l0800_09E5
l0800_09D0:
	branch Mem0[ds_120:si_63 + 0x0000:byte] == 0x02 l0800_09E0
l0800_09D5:
	byte ah_92 = Mem0[ds_120:si_63 + 0x0001:byte]
	ax_46 = DPB(ax_46, ah_92, 8, 8) (alias)
	*axOut = ax_46
	call SEQ(cs, cx) (retsize: 2; depth: 8)
	branch Mem0[ds_120:si_63 + 0x0000:byte] >u 0x02 l0800_09E0
l0800_09DC:
	bx_122 = si_63
	*axOut = DPB(ax_46, ah_92, 0, 8)
l0800_09E0:
	si_63 = si_63 + 0x0006
	goto l0800_09CC
l0800_09E5:
	byte SCZO_99 = cond(bx_122 - di)
	branch bx_122 == di l0800_0A12
l0800_09EA:
	ax = DPB(ax_46, dh, 8, 8) (alias)
	call SEQ(cs, cx) (retsize: 2; depth: 6)
	branch bx_122 >u di l0800_0A0D
l0800_09F0:
	word16 ax_128 = Mem0[ds_120:bx_122 + 0x0002:word16]
	branch Mem0[ds_120:bx_122 + 0x0000:byte] != 0x01 l0800_0A04
l0800_09FA:
	ax = ax_128 | Mem0[ds_120:bx_122 + 0x0004:word16]
	branch ax == 0x0000 l0800_0A02
l0800_09FF:
l0800_0A02:
	goto l0800_0A0B
l0800_0A04:
	ax = ax_128
	branch ax_128 == 0x0000 l0800_0A0B
l0800_0A08:
	call SEQ(cs, Mem0[ds_120:bx_122 + 0x0002:word16]) (retsize: 2; depth: 10)
l0800_0A0B:
	dl = (byte) dx (alias)
	dh = SLICE(dx, byte, 8) (alias)
l0800_0A0D:
	Mem127[ds_120:bx_122 + 0x0000:byte] = 0x02
	goto l0800_09C7
l0800_0A12:
	return SCZO_99
fn0800_09C2_exit:
}

bool fn0800_0A18(ptr16 axOut)
{
	word16 ax_20;
	return fn0800_09C2(0x03C8, 0x03E6, out ax_20);
}

byte fn0800_0A36(ptr16 dxOut)
{
	word16 dx_19;
	*dxOut = DPB(dx, al, 0, 8);
	word16 ax_20;
	return fn0800_09C2(0x03E6, 0x03EC, out ax_20);
}

byte fn0800_0A5A(word16 ax, word16 dx, word16 bx, selector ds, ptr16 axOut)
{
	word16 ax_13 = fn0800_13DB(ds);
	*axOut = ax_13;
	if (ax_13 == 0x0000)
	{
		fn0800_05BB(ax, dx, bx);
		word16 ax_25;
		*axOut = ax;
	}
	return false;
}

word16 fn0800_0CD5(word16 dx, byte al, selector ds, ptr16 dxOut)
{
	*dxOut = dx;
	if (dx == 0x0000)
	{
		ax = 0x0000;
l0800_0CDB:
		return ax;
	}
	else if (dx != 0x0000)
	{
		word16 dx_33;
		return fn0800_0CE0(al, dh, ds, out dx_33);
	}
	else
		goto l0800_0CDB;
}

word16 fn0800_0CE0(byte al, byte dh, selector ds, ptr16 dxOut)
{
	word16 ax_34;
	word16 ax_16 = DPB(ax, 0x00, 8, 8);
	word16 bx_20;
	word16 dx_21 = fn0800_079D(ax_16, DPB(dx, al, 0, 8), ds, out bx_20);
	if (bx_20 <u 0x0100)
	{
		word16 ax_53 = DPB(ax_16, 0x00, 8, 8);
		if (ax_53 >= 0x0003)
		{
			bx_20 = DPB(bx_20, 0x00, 8, 8);
			if (bx_20 == 0x0050)
				dx_21 = DPB(dx_21, 0x0E, 0, 8);
			else if (bx_20 >= 0x0022)
				dx_21 = DPB(dx_21, 0x13, 0, 8);
			else if (bx_20 >= 0x0020)
				dx_21 = DPB(dx_21, 0x05, 0, 8);
		}
		if (DPB(ax_53, 0x00, 8, 8) > 0x0013)
			dx_21 = DPB(dx_21, 0x13, 0, 8);
		ax_34 = (int16) Mem0[ds:DPB(bx_20, 0x00, 8, 8) + 0x036C:byte];
	}
	else
		ax_34 = DPB(ax_16, 0x00, 8, 8);
	word16 bx_36;
	fn0800_0780(ax_34, dx_21, ds, out bx_36);
	word16 dx_44;
	*dxOut = Mem0[ss:fp - 0x0008:word16];
	return 0xFFFF;
}

word16 fn0800_0D39(word16 ax, selector ds, ptr16 clOut)
{
	word16 ax_105;
	word16 cx_109 = ax;
	if (ax != 0x0000 && ax <=u 0xFFEA)
	{
		byte bLoc10_114 = 0x00;
		word16 dx_101 = 0x0000;
		word16 di_69 = ax + 0x0001 & 0xFFFE;
		while (true)
		{
			word16 ax_147 = di_69;
			if (di_69 <u 0x0006)
				ax_147 = 0x0006;
			word16 si_135;
			if (ax_147 >u Mem0[ds:0x0384:word16])
			{
				si_135 = Mem0[ds:0x0382:word16];
				if (si_135 == 0x0000)
				{
					Mem145[ds:0x0384:word16] = si_135;
					goto l0800_0D7D;
				}
			}
			Mem146[ds:0x0384:word16] = 0x0000;
l0800_0D7D:
			si_135 = Mem0[ds:0x0380:word16];
l0800_0DAD:
			while (si_135 != 0x0000)
			{
				Mem126[ds:0x0382:word16] = si_135;
				word16 ax_127 = fn0800_144E(cx_109, ds, si_135);
				dx_101 = ax_127;
				if (ax_127 != 0x0000)
				{
l0800_0DD5:
					Mem104[ds:0x044C:byte] = 0x00;
					ax_105 = dx_101;
					goto l0800_0DDC;
				}
				word16 ax_132 = Mem126[ds:si_135 + 0x000A:word16];
				if (ax_132 >u Mem126[ds:0x0384:word16])
					Mem136[ds:0x0384:word16] = ax_132;
				si_135 = Mem126[ds:si_135 + 0x0004:word16];
			}
			if (bLoc10_114 != 0x00 || fn0800_1689(cx_109, ds, out cx_109, out dx_101) == 0x0000)
			{
				fn0800_179B();
				if (0x0000 != 0x0000)
				{
					bLoc10_114 = 0x00;
					continue;
				}
			}
			bLoc10_114 = 0x01;
		}
	}
	else
		ax_105 = 0x0000;
l0800_0DDC:
	byte cl_52;
	*clOut = (byte) cx;
	return ax_105;
}

void fn0800_0DE6(word16 ax, word16 dx, word16 bx, selector ds)
{
	word16 si_15 = dx;
	if (bx != 0x0000)
	{
		word16 cx_42 = bx;
		word16 di_43 = ax;
		do
		{
			byte al_51 = Mem0[ds:si_15 + 0x0000:byte];
			Mem53[ds:di_43 + 0x0000:byte] = al_51;
			si_15 = si_15 + 0x0001;
			di_43 = di_43 + 0x0001;
			cx_42 = cx_42 - 0x0001;
		} while (al_51 != 0x00 && cx_42 != 0x0000);
		word16 cx_60 = cx_42 >>u 0x0001;
		while (cx_60 != 0x0000)
		{
			Mem67[ds:di_43 + 0x0000:word16] = 0x0000;
			di_43 = di_43 + 0x0002;
			cx_60 = cx_60 - 0x0001;
		}
		word16 cx_70 = cx_60 * 0x0002 + (cx_42 >>u 0x0001 <u 0x0000);
		while (cx_70 != 0x0000)
		{
			Mem74[ds:di_43 + 0x0000:byte] = 0x00;
			di_43 = di_43 + 0x0001;
			cx_70 = cx_70 - 0x0001;
		}
	}
	return;
}

void fn0800_0E0F(word16 ax, word16 cx, word16 bp, word16 si, word16 di, selector es, selector ds)
{
	word16 cx_12;
	word16 dx_13;
	word16 bx_14;
	word16 bp_15;
	word16 si_16;
	word16 di_17;
	selector es_18;
	fn0800_17A3(0x0116, cx, bp, si, di, es, ds, out cx_12, out dx_13, out bx_14, out bp_15, out si_16, out di_17, out es_18);
	word16 ax_22 = Mem0[ss:fp - 0x0002:word16];
	Mem25[ss:fp - 0x0002:word16] = cx_12;
	Mem27[ss:fp - 0x0004:word16] = si_16;
	Mem29[ss:fp - 0x0006:word16] = di_17;
	Mem31[ss:fp - 0x0008:word16] = es_18;
	Mem33[ss:fp - 0x000A:word16] = bp_15;
	Mem37[ss:fp - 0x0102:word16] = ax_22;
	Mem39[ss:fp - 0x0104:word16] = dx_13;
	Mem41[ss:fp - 0x0106:word16] = bx_14;
	fn0800_0DE6(fp - 0x0080, ax_22, 0x004B, ds);
	selector es_107;
	word16 di_277;
	word16 ax_360 = fn0800_17D7(fp - 0x0080, cx_12, di_17, 0x5C, es_18, ds, out di_277, out es_107);
	if (ax_360 == 0x0000)
		ax_360 = fp - 0x0080;
	word16 sp_278;
	word16 sp_111;
	word16 si_109;
	fn0800_1285(ax_360, 0x2E, ds);
	if (ax_360 != 0x0000)
	{
		Mem297[ss:fp - 0x0108:word16] = 0x0000;
		Mem300[ss:fp - 0x010A:word16] = 0x0200;
		Mem303[ss:fp - 0x010C:word16] = fp - 0x0080;
		sp_278 = fp - 0x010C;
l0800_0E9A:
		word16 cx_279;
		word16 dx_280;
		word16 di_281;
		word16 ax_282 = fn0800_17FB(di_277, ds, wArg00, wArg02, wArg04, out cx_279, out dx_280, out di_281);
		word16 bx_288;
		fn0800_0780(0x0001, dx_280, ds, out bx_288);
		si_109 = ax_282;
		sp_111 = sp_278 + 0x0006 + 0xFFFE;
		if (ax_282 != 0xFFFF)
		{
l0800_0EAF:
			word16 dx_116;
			if (fn0800_19D8(si_109, fp - 0x0030, 0x001C, ds, out dx_116) == 0xFFFF)
			{
				word16 dx_122;
				word16 bx_123;
				fn0800_1AA6(si_109, dx_116, ds, out dx_122, out bx_123);
				word16 bx_126;
				word16 bx_130;
				fn0800_079D(0x000B, fn0800_0780(0x0003, dx_122, ds, out bx_126), ds, out bx_130);
l0800_0ED0:
			}
			else
			{
				word16 ax_137;
				if (Mem41[ss:fp - 0x0030:word16] != 0x5A4D && Mem41[ss:fp - 0x0030:word16] != 0x4D5A)
					ax_137 = 0x0000;
				else
					ax_137 = 0x0001;
				word16 di_148;
				word16 dx_147;
				Mem138[ss:fp - 0x000C:word16] = ax_137;
				if (ax_137 != 0x0000)
				{
					dx_147 = (Mem138[ss:fp - 0x002C:word16] << 0x05) - 0x0020;
					di_148 = (Mem138[ss:fp - 0x002E:word16] + 0x000F >>u 0x04) + dx_147 + Mem138[ss:fp - 0x0026:word16] - Mem138[ss:fp - 0x0028:word16];
				}
				else
				{
					word16 dx_246;
					word16 ax_247 = fn0800_1ABD(si_109, 0x0000, 0x0000, 0x02, ds, out dx_246);
					ui32 dx_ax_250 = SEQ(dx_246, ax_247 + 0x008F);
					di_148 = fn0800_1AFA((word16) (dx_ax_250 + 0x0000008F), 0x0000, SLICE(dx_ax_250 + 0x0000008F, word16, 16), 0x0010, out dx_147);
				}
				word16 dx_151;
				word16 bx_152;
				fn0800_1AA6(si_109, dx_147, ds, out dx_151, out bx_152);
				Mem155[ds:bx_152 + 0x0000:word16] = fp - 0x0080;
				word16 sp_158 = sp_111 - 0x0002;
				Mem159[ss:sp_158 + 0x0000:word16] = 0x0001;
				word16 dx_161 = Mem159[ss:fp - 0x0106:word16];
				Mem163[ss:sp_158 - 0x0002:word16] = fp - 0x0010;
				Mem167[ss:sp_158 - 0x0004:word16] = fp - 0x0014;
				word16 ax_172 = fn0800_1BEC(Mem167[ss:fp - 0x0104:word16], fp - 0x0012, dx_161, fp - 0x000E, ds, wArg00, wArg02, wArg04);
				if (ax_172 != 0xFFFF)
				{
					word16 di_189 = di_148 + ((fn0800_06F2(Mem167[ss:fp - 0x0102:word16], ds) + 0x000F >>u 0x04) + (Mem167[ds:0x038E:word16] + 0x0010));
					fn0800_1D16(0x0000, Mem167[ss:fp - 0x0104:word16], fp - 0x0100, ds);
					selector ds_195;
					if (fn0800_1087(di_189, 0x0000, fp - 0x008A, ax_172, di_189, es_107, ds, out ds_195) != 0x0000)
						fn0800_11F1(0x0000, fp - 0x008A, ax_172, di_189, es_107, ds_195);
					Mem201[ss:sp_158 + 0x0000:word16] = Mem167[ss:fp - 0x001C:word16];
					Mem203[ss:sp_158 - 0x0002:word16] = Mem201[ss:fp - 0x001A:word16];
					Mem205[ss:sp_158 - 0x0004:word16] = Mem203[ss:fp - 0x0020:word16];
					Mem207[ss:sp_158 - 0x0006:word16] = Mem205[ss:fp - 0x0022:word16];
					Mem209[ss:sp_158 - 0x0008:word16] = Mem207[ss:fp - 0x000C:word16];
					Mem212[ss:sp_158 - 0x000A:word16] = fp - 0x0100;
					Mem215[ss:sp_158 - 0x000C:word16] = fp - 0x0080;
					fn0800_1E9E(wArg02, wArg04, wArg06, wArg08, wArg0A, wArg0C, wArg0E);
					fn0800_13F7(Mem215[ss:fp - 0x000E:word16], ds_195);
				}
			}
		}
		else
			goto l0800_0ED0;
	}
	else
	{
		fn0800_074A(fp - 0x0080, 0x0198, ds);
		Mem310[ss:fp - 0x0108:word16] = 0x0000;
		Mem313[ss:fp - 0x010A:word16] = 0x0200;
		Mem316[ss:fp - 0x010C:word16] = fp - 0x0080;
		word16 cx_317;
		word16 dx_318;
		word16 di_319;
		word16 ax_320 = fn0800_17FB(di_277, ds, wArg00, wArg02, wArg04, out cx_317, out dx_318, out di_319);
		sp_111 = fp - 0x0106;
		si_109 = ax_320;
		if (ax_320 == 0xFFFF)
		{
			word16 di_328;
			selector es_329;
			word16 ax_330 = fn0800_17D7(fp - 0x0080, cx_317, di_319, 0x2E, es_107, ds, out di_328, out es_329);
			Mem336[ss:fp - 0x0108:word16] = 0x0000;
			Mem339[ss:fp - 0x010A:word16] = ds;
			es_107 = Mem339[ss:fp - 0x010A:selector];
			Mem343[ss:fp - 0x010A:word16] = 0x0200;
			Mem347[ss:fp - 0x010C:word16] = fp - 0x0080;
			Mem349[es_107:ax_330 + 0x0000:word16] = Mem347[ds:0x019D:word16];
			Mem353[es_107:ax_330 + 0x0002:word16] = Mem349[ds:0x019F:word16];
			Mem357[es_107:ax_330 + 0x0004:byte] = Mem353[ds:0x01A1:byte];
			sp_278 = fp - 0x010C;
			di_277 = ax_330 + 0x0005;
			goto l0800_0E9A;
		}
		else
			goto l0800_0EAF;
	}
	return;
}

word16 fn0800_0FC1(word16 cx, word16 bp, word16 si, word16 di, selector es, selector ds, ptr16 siOut, ptr16 diOut, ptr16 dsOut)
{
	word16 cx_9;
	word16 dx_10;
	word16 bx_11;
	word16 bp_12;
	word16 si_13;
	word16 di_14;
	selector es_15;
	fn0800_17A3(0x0022, cx, bp, si, di, es, ds, out cx_9, out dx_10, out bx_11, out bp_12, out si_13, out di_14, out es_15);
	Mem18[ss:fp - 0x0002:word16] = bx_11;
	Mem21[ss:fp - 0x0004:word16] = cx_9;
	Mem23[ss:fp - 0x0006:word16] = dx_10;
	Mem25[ss:fp - 0x0008:word16] = es_15;
	Mem27[ss:fp - 0x000A:word16] = bp_12;
	Mem36[ss:fp - 0x001F:byte] = 0x52;
	selector ds_37;
	*dsOut = fn0800_1FA2(fp - 0x0012, fp - 0x0020, 0x21, ds);
	word16 ax_50 = Mem36[SLICE(SEQ(Mem36[ss:fp - 0x0012:word16], fp - 0x0020) - 0x00000002, word16, 16):Mem36[ss:fp - 0x001E:word16] - 0x0002:word16];
	return ax_50 + 0x0001;
}

word16 fn0800_1000(word16 cx, word16 bp, word16 si, word16 di, selector es, selector ds, ptr16 bpOut, ptr16 siOut, ptr16 diOut)
{
	word16 cx_12;
	word16 dx_13;
	word16 bx_14;
	word16 bp_15;
	word16 si_16;
	word16 di_17;
	selector es_18;
	fn0800_17A3(0x0008, cx, bp, si, di, es, ds, out cx_12, out dx_13, out bx_14, out bp_15, out si_16, out di_17, out es_18);
	word16 ax_22 = Mem0[ss:fp - 0x0002:word16];
	Mem25[ss:fp - 0x0002:word16] = bx_14;
	Mem27[ss:fp - 0x0004:word16] = dx_13;
	Mem29[ss:fp - 0x0006:word16] = es_18;
	word16 bx_34;
	msdos_resize_memory_block(ax_22, 0xFFFF, out bx_34);
	word16 bx_38;
	msdos_resize_memory_block(ax_22, bx_34, out bx_38);
	return cx_12;
}

word16 fn0800_1022(word16 cx, word16 bp, word16 si, word16 di, selector es, selector ds, ptr16 cxOut, ptr16 bpOut, ptr16 siOut, ptr16 diOut, ptr16 esOut)
{
	word16 cx_12;
	word16 dx_13;
	word16 bx_14;
	word16 bp_15;
	word16 si_16;
	word16 di_17;
	selector es_18;
	fn0800_17A3(0x0006, cx, bp, si, di, es, ds, out cx_12, out dx_13, out bx_14, out bp_15, out si_16, out di_17, out es_18);
	word16 ax_22 = Mem0[ss:fp - 0x0002:word16];
	Mem25[ss:fp - 0x0002:word16] = bx_14;
	Mem27[ss:fp - 0x0004:word16] = dx_13;
	word16 dx_33 = DPB(ax_22, 0x48, 8, 8);
	if (0x0000 - msdos_allocate_memory_block(ax_22) < 0x0000)
		dx_33 = 0x0000;
	else
	{
		word16 bp_58;
		word16 si_59;
		word16 di_60;
		word16 cx_61;
		*cxOut = fn0800_1000(cx_12, bp_15, si_16, di_17, es_18, ds, out bp_58, out si_59, out di_60);
	}
	return dx_33;
}

word16 fn0800_1046(word16 cx, word16 bp, word16 si, word16 di, selector es, selector ds, ptr16 bpOut, ptr16 siOut, ptr16 diOut)
{
	word16 ax_44;
	word16 cx_12;
	word16 dx_13;
	word16 bx_14;
	word16 bp_15;
	word16 si_16;
	word16 di_17;
	selector es_18;
	fn0800_17A3(0x0008, cx, bp, si, di, es, ds, out cx_12, out dx_13, out bx_14, out bp_15, out si_16, out di_17, out es_18);
	word16 ax_22 = Mem0[ss:fp - 0x0002:word16];
	Mem26[ss:fp - 0x0002:word16] = bx_14;
	Mem28[ss:fp - 0x0004:word16] = cx_12;
	Mem30[ss:fp - 0x0006:word16] = es_18;
	word16 cx_35 = Mem30[ax_22 - 0x0001:0x0003:word16];
	if (cx_35 <u dx_13 + 0x0001)
		ax_44 = 0x0000;
	else
	{
		word16 cx_61 = cx_35 - (dx_13 + 0x0001);
		word16 bx_65;
		msdos_resize_memory_block(ax_22, cx_61, out bx_65);
		word16 cx_70;
		word16 bp_71;
		word16 si_72;
		word16 di_73;
		selector es_74;
		ax_44 = fn0800_1022(cx_61, bp_15, si_16, di_17, ax_22, ds, out cx_70, out bp_71, out si_72, out di_73, out es_74);
	}
	return ax_44;
}

word16 fn0800_107C(word16 cx, word16 bp, word16 si, word16 di, selector es, selector ds, ptr16 bpOut, ptr16 siOut, ptr16 diOut, ptr16 esOut)
{
	word16 cx_9;
	word16 dx_10;
	word16 bx_11;
	word16 bp_12;
	word16 si_13;
	word16 di_14;
	selector es_15;
	word16 ax_16 = fn0800_17A3(0x0002, cx, bp, si, di, es, ds, out cx_9, out dx_10, out bx_11, out bp_12, out si_13, out di_14, out es_15);
	SEQ(cs, Mem0[ds:0x0216:word16])();
	return cx_9;
}

word16 fn0800_1087(word16 ax, word16 cx, word16 bp, word16 si, word16 di, selector es, selector ds, ptr16 dsOut)
{
	*dsOut = ds;
	word16 cx_12;
	word16 dx_13;
	word16 bx_14;
	word16 bp_15;
	word16 si_16;
	word16 di_17;
	selector es_18;
	fn0800_17A3(0x0014, cx, bp, si, di, es, ds, out cx_12, out dx_13, out bx_14, out bp_15, out si_16, out di_17, out es_18);
	word16 ax_22 = Mem0[ss:fp - 0x0002:word16];
	Mem25[ss:fp - 0x0002:word16] = cx_12;
	Mem27[ss:fp - 0x0004:word16] = si_16;
	Mem29[ss:fp - 0x0006:word16] = di_17;
	Mem31[ss:fp - 0x0008:word16] = es_18;
	Mem33[ss:fp - 0x000A:word16] = bp_15;
	Mem36[ss:fp - 0x000C:word16] = ax_22;
	Mem38[ss:fp - 0x000E:word16] = dx_13;
	Mem40[ss:fp - 0x0010:word16] = bx_14;
	word16 bp_188 = fp - 0x000A;
	word16 si_134 = 0x0000;
	word16 di_133 = 0x0000;
	word16 cx_414 = 0x0000;
	word16 cx_155;
	selector es_201;
	word16 ax_62 = fn0800_1022(cx_414, bp_188, si_134, di_133, es_18, ds, out cx_155, out bp_188, out si_134, out di_133, out es_201);
	while (ax_62 != 0x0000)
	{
		Mem413[ax_62:0x0000:word16] = cx_155;
		es_18 = ax_62;
		cx_414 = ax_62;
		ax_62 = fn0800_1022(cx_414, bp_188, si_134, di_133, es_18, ds, out cx_155, out bp_188, out si_134, out di_133, out es_201);
	}
	word16 ax_112;
	if (DPB(ax_62, 0x00, 8, 8) != 0x0002)
		goto l0800_10D0;
	else if (cx_155 != 0x0000)
	{
		word16 di_403;
		word16 ax_404 = fn0800_1046(cx_155, bp_188, si_134, di_133, es_201, ds, out bp_188, out si_134, out di_403);
		di_133 = ax_404;
		if (ax_404 != 0x0000)
		{
l0800_10D0:
			word16 bx_193 = cx_155;
			while (bx_193 != 0x0000)
			{
				word16 si_380;
				word16 ax_382 = fn0800_1046(cx_155, bp_188, si_134, di_133, es_201, ds, out bp_188, out si_380, out di_133);
				si_134 = ax_382;
				if (ax_382 != 0x0000)
					break;
				es_201 = bx_193;
				bx_193 = Mem40[bx_193:ax_382 + 0x0000:word16];
			}
			if (si_134 != 0x0000)
			{
				word16 ax_220 = Mem40[ds:0x0226:word16];
				while (ax_220 <u si_134)
				{
					word16 dx_354 = ax_220 - 0x0001;
					word16 dx_359 = Mem40[dx_354:0x0001:word16];
					if (dx_359 != Mem40[ds:0x0226:word16])
						break;
					word16 ax_362 = ax_220 + Mem40[dx_354:0x0003:word16];
					if (0x0000 != 0x004D)
						if (ax_362 - dx_359 >=u Mem40[ss:bp_188 - 0x0002:word16])
							goto l0800_1126;
						else
							goto l0800_110D;
					ax_220 = ax_362 + 0x0001;
				}
l0800_1126:
				word16 ax_242 = Mem40[ss:bp_188 - 0x0006:word16];
				selector es_243 = Mem40[ds:0x0226:selector];
				Mem247[es_243:0x002C:word16] = si_134;
				Mem249[ss:fp - 0x0012:word16] = ax_242 << 0x04;
				word16 bp_258;
				selector es_261;
				word16 di_260;
				word16 si_259;
				word16 cx_262 = fn0800_107C(fn0800_2045(Mem249[ss:bp_188 - 0x0004:word16], 0x0000, 0x0000, si_134, wArg00), bp_188, si_134, di_133, es_243, ds, out bp_258, out si_259, out di_260, out es_261);
				while (true)
				{
					word16 ax_283 = fn0800_0FC1(cx_262, bp_258, si_259, di_260, es_261, ds, out si_259, out di_260, out ds);
					cx_262 = ax_283 - 0x0001;
					word16 dx_298 = Mem249[cx_262:0x0001:word16];
					while (dx_298 != Mem249[ds:0x0226:word16] || (ax_283 == dx_298 || ax_283 == si_259))
					{
						word16 dx_302 = ax_283 - 0x0001;
						word16 cx_309 = DPB(ax_283 - 0x0001, 0x00, 8, 8);
						if (cx_309 != 0x004D)
						{
							word16 bp_313;
							word16 si_314;
							word16 di_315;
							fn0800_1000(cx_309, bp_258, si_259, di_260, dx_302, ds, out bp_313, out si_314, out di_315);
							word16 ax_317 = Mem249[ds:0x0226:word16];
							Mem325[ax_317:0x0002:word16] = Mem249[ax_317 - 0x0001:0x0003:word16] + ax_317;
							if (Mem325[ax_317 - 0x0001:0x0003:word16] <u Mem325[ss:bp_313 - 0x0002:word16])
							{
								fn0800_0337(0x01A2, ds);
								msdos_terminate(0xFF);
							}
							else
							{
								ax_112 = 0x0001;
								goto l0800_11EC;
							}
						}
						ax_283 = ax_283 + Mem249[dx_302:0x0003:word16] + 0x0001;
						cx_262 = ax_283 - 0x0001;
						dx_298 = Mem249[cx_262:0x0001:word16];
					}
					msdos_free_memory_block(ax_283);
					es_261 = ax_283;
				}
			}
			else
			{
l0800_110D:
				if (di_133 != 0x0000)
					msdos_free_memory_block(di_133);
				if (si_134 != 0x0000)
				{
					msdos_free_memory_block(si_134);
					goto l0800_11E6;
				}
l0800_11E6:
				while (cx_155 != 0x0000)
				{
					word16 bx_167 = Mem40[cx_155:0x0000:word16];
					msdos_free_memory_block(cx_155);
					cx_155 = bx_167;
				}
				ax_112 = 0x0000;
l0800_11EC:
				return ax_112;
			}
		}
		else
			goto l0800_110D;
	}
	else
		goto l0800_110D;
fn0800_1087_exit:
}

void fn0800_11F1(word16 cx, word16 bp, word16 si, word16 di, selector es, selector ds)
{
	word16 cx_9;
	word16 dx_10;
	word16 bx_11;
	word16 bp_12;
	word16 si_13;
	word16 di_14;
	selector es_15;
	word16 ax_16 = fn0800_17A3(0x0012, cx, bp, si, di, es, ds, out cx_9, out dx_10, out bx_11, out bp_12, out si_13, out di_14, out es_15);
	Mem18[ss:fp - 0x0002:word16] = bx_11;
	Mem21[ss:fp - 0x0004:word16] = cx_9;
	Mem23[ss:fp - 0x0006:word16] = dx_10;
	Mem25[ss:fp - 0x0008:word16] = si_13;
	Mem27[ss:fp - 0x000A:word16] = di_14;
	Mem29[ss:fp - 0x000C:word16] = es_15;
	Mem31[ss:fp - 0x000E:word16] = bp_12;
	Mem34[ss:fp - 0x0010:word16] = ax_16;
	word16 dx_35 = Mem34[ds:0x0226:word16];
	word16 bx_36 = 0x0000;
	word16 cx_38 = Mem34[dx_35:0x0036:word16];
	word16 ax_39 = Mem34[dx_35:0x0034:word16];
	if (cx_38 != dx_35 || ax_39 != 0x0018)
	{
		Mem74[ss:fp - 0x0010:word16] = cx_38;
		word16 si_73 = ax_39;
		do
		{
			bx_36 = bx_36 + 0x0001;
			Mem83[Mem74[ds:0x0226:word16]:bx_36 + 0x0017:byte] = Mem74[Mem74[ss:fp - 0x0010:selector]:si_73 + 0x0000:byte];
			si_73 = si_73 + 0x0001;
		} while (bx_36 < 0x0014);
		word16 dx_115 = 0x0014;
		word16 ax_98 = Mem83[ds:0x0226:word16];
		while (dx_115 <u Mem83[ax_98:0x0032:word16])
		{
			if (DPB(ax_98, 0x00, 8, 8) != 0x00FF)
			{
				word16 bx_124;
				fn0800_1AA6(dx_115, dx_115, ds, out dx_115, out bx_124);
			}
			dx_115 = dx_115 + 0x0001;
			ax_98 = Mem83[ds:0x0226:word16];
		}
		Mem105[ax_98:0x0032:word16] = 0x0014;
		Mem106[ax_98:0x0034:word16] = 0x0018;
		Mem107[ax_98:0x0036:word16] = ax_98;
	}
	return;
}

void fn0800_1285(word16 ax, byte dl, selector ds)
{
	word16 bx_14 = ax;
	do
	{
		if (dl == Mem0[ds:bx_38 + 0x0000:byte])
			goto l0800_1299;
		bx_14 = bx_38 + 0x0001;
		word16 bx_38 = bx_14;
	} while (Mem0[ds:bx_38 + 0x0000:byte] != 0x00);
	return;
}

void fn0800_129E(word16 ax, word16 dx, word16 bx, selector ds)
{
	word16 si_17 = dx;
	word16 di_19 = ax;
	word16 cx_25 = bx >>u 0x0001;
	while (cx_25 != 0x0000)
	{
		Mem33[ds:di_19 + 0x0000:word16] = Mem0[ds:si_17 + 0x0000:word16];
		si_17 = si_17 + 0x0002;
		di_19 = di_19 + 0x0002;
		cx_25 = cx_25 - 0x0001;
	}
	word16 cx_37 = cx_25 * 0x0002 + (bx >>u 0x0001 <u 0x0000);
	while (cx_37 != 0x0000)
	{
		Mem43[ds:di_19 + 0x0000:byte] = Mem0[ds:si_17 + 0x0000:byte];
		si_17 = si_17 + 0x0001;
		di_19 = di_19 + 0x0001;
		cx_37 = cx_37 - 0x0001;
	}
	return;
}

word16 fn0800_12BE(word16 ax, selector ds)
{
	fn0800_211E(ax, ds);
	if (Mem0[ds:ax + 0x000A:word16] == 0x0000)
		if ((Mem0[ds:ax + 0x0007:byte] & 0x02) != 0x00)
			Mem43[ds:ax + 0x000A:word16] = 0x0086;
		else if ((Mem0[ds:ax + 0x0007:byte] & 0x04) != 0x00)
			Mem47[ds:ax + 0x000A:word16] = 0x0001;
		else
			Mem48[ds:ax + 0x000A:word16] = 0x0200;
	byte cl_12;
	word16 ax_13 = fn0800_0D39(Mem0[ds:ax + 0x000A:word16], ds, out cl_12);
	Mem14[ds:ax + 0x0004:word16] = ax_13;
	if (ax_13 == 0x0000)
	{
		Mem26[ds:ax + 0x000A:word16] = 0x0001;
		Mem29[ds:ax + 0x0007:byte] = Mem26[ds:ax + 0x0007:byte] & 0xF8;
		Mem31[ds:ax + 0x0004:word16] = ax + 0x000C;
		Mem33[ds:ax + 0x0007:byte] = Mem31[ds:ax + 0x0007:byte] | 0x04;
	}
	else
		Mem37[ds:ax + 0x0006:byte] = Mem14[ds:ax + 0x0006:byte] | 0x08;
	word16 ax_20 = Mem14[ds:ax + 0x0004:word16];
	Mem21[ds:ax + 0x0002:word16] = 0x0000;
	Mem22[ds:ax + 0x0000:word16] = ax_20;
	return cx;
}

word16 fn0800_131B(word16 ax, selector ds)
{
	word16 wLoc0E_111 = 0x0000;
	if ((Mem0[ds:ax + 0x0007:byte] & 0x10) != 0x00)
	{
		Mem55[ds:ax + 0x0007:byte] = Mem0[ds:ax + 0x0007:byte] & 0xEF;
		if ((Mem55[ds:ax + 0x0006:byte] & 0x02) != 0x00 && Mem55[ds:ax + 0x0004:word16] != 0x0000)
		{
			word16 di_114 = Mem55[ds:ax + 0x0004:word16];
			word16 cx_115 = Mem55[ds:ax + 0x0002:word16];
			while (cx_115 != 0x0000 && wLoc0E_111 == 0x0000)
			{
				word16 ax_98 = fn0800_2141(Mem55[ds:ax + 0x0008:word16], di_114, cx_115, ds);
				word16 dx_107 = ax_98;
				if (ax_98 == 0xFFFF)
				{
					wLoc0E_111 = ax_98;
l0800_1378:
					Mem126[ds:ax + 0x0006:byte] = Mem55[ds:ax + 0x0006:byte] | 0x20;
				}
				else if (ax_98 == 0x0000)
				{
					wLoc0E_111 = 0xFFFF;
					word16 bx_135;
					dx_107 = fn0800_0780(0x000C, ax_98, ds, out bx_135);
					goto l0800_1378;
				}
				di_114 = di_114 + dx_107;
				cx_115 = cx_115 - dx_107;
			}
		}
	}
	else if (Mem0[ds:ax + 0x0004:word16] != 0x0000)
	{
		Mem143[ds:ax + 0x0006:byte] = Mem0[ds:ax + 0x0006:byte] & 0xEF;
		if ((Mem143[ds:ax + 0x0007:byte] & 0x20) == 0x00)
		{
			int32 dx_ax_149 = (int32) Mem143[ds:ax + 0x0002:word16];
			word16 dx_150 = SLICE(dx_ax_149, word16, 16);
			word16 ax_151 = (word16) dx_ax_149;
			if ((dx_150 | ax_151) != 0x0000)
			{
				word16 bx_181 = -ax_151;
				ax_151 = fn0800_1ABD(Mem143[ds:ax + 0x0008:word16], -dx_150 - (bx_181 == 0x0000), bx_181, 0x01, ds, out dx_150);
			}
			if (dx_150 == 0xFFFF && ax_151 == 0xFFFF)
			{
				Mem169[ss:fp - 0x000E:word16] = 0xFFFF;
				Mem172[ds:ax + 0x0006:byte] = Mem169[ds:ax + 0x0006:byte] | 0x20;
			}
		}
	}
	word16 ax_36 = Mem0[ds:ax + 0x0004:word16];
	Mem37[ds:ax + 0x0002:word16] = 0x0000;
	Mem38[ds:ax + 0x0000:word16] = ax_36;
	return wLoc0E_111;
}

word16 fn0800_13DB(selector ds)
{
	if (Mem0[ds:0x0388:byte] != 0x00)
	{
		cpu_debug_break();
		return 0x0001;
	}
	else
		return 0x0000;
}

void fn0800_13F7(word16 ax, selector ds)
{
	if (ax != 0x0000)
	{
		word16 si_31 = Mem0[ds:0x044A:word16];
		if (si_31 == 0x0000 || (si_31 >u ax || ax >=u Mem0[ds:si_31 + 0x0004:word16]))
		{
			si_31 = Mem0[ds:0x0380:word16];
			while (Mem0[ds:si_31 + 0x0004:word16] != 0x0000 && (si_31 >u ax || ax >=u Mem0[ds:si_31 + 0x0004:word16]))
				si_31 = Mem0[ds:si_31 + 0x0004:word16];
		}
		fn0800_14F2(ax, ds, si_31);
		Mem40[ds:0x044A:word16] = si_31;
		if (si_31 <u Mem40[ds:0x0382:word16])
		{
			word16 ax_47 = Mem40[ds:si_31 + 0x000A:word16];
			if (ax_47 >u Mem40[ds:0x0384:word16])
				Mem50[ds:0x0384:word16] = ax_47;
		}
		Mem46[ds:0x044C:byte] = 0x00;
	}
	return;
}

word16 fn0800_144E(word16 ax, word16 dx, word16 bx)
{
	word16 ax_107;
	if (ax != 0x0000)
	{
		byte al_52 = (byte) (ax + 0x0003);
		if (ax >=u 0x0003)
		{
			word16 ax_56 = DPB(ax + 0x0003, al_52 & 0xFE, 0, 8);
			word16 ax_63 = ax_56 - 0x0006 & 0x0000 - (ax_56 >=u 0x0006);
			if (ax_63 + 0x0006 <=u Mem0[dx:bx + 0x000A:word16])
			{
				word16 si_102 = Mem0[dx:bx + 0x0006:word16];
				word16 di_133 = Mem0[dx:bx + 0x0008:word16];
				if (ax_63 + 0x0006 <=u di_133)
				{
					si_102 = Mem0[dx:bx + 0x0014:word16];
					di_133 = 0x0000;
					goto l0800_147F;
				}
l0800_147F:
				do
				{
					word16 dx_78 = Mem0[dx:si_102 + 0x0000:word16];
					if (ax_63 + 0x0006 <=u dx_78)
					{
						Mem94[dx:bx + 0x0008:word16] = di_133;
						Mem96[dx:bx + 0x000C:word16] = Mem94[dx:bx + 0x000C:word16] + 0x0001;
						word16 dx_93 = dx_78 - (ax_63 + 0x0006);
						word16 cx_97 = Mem96[dx:si_102 + 0x0004:word16];
						if (dx_93 >=u 0x0006)
						{
							word16 di_111 = si_102 + (ax_63 + 0x0006);
							Mem113[dx:bx + 0x0006:word16] = di_111;
							Mem114[dx:di_111 + 0x0000:word16] = dx_93;
							Mem115[dx:si_102 + 0x0000:word16] = ax_63 + 0x0006;
							word16 bx_116 = Mem115[dx:si_102 + 0x0002:word16];
							Mem117[dx:di_111 + 0x0002:word16] = bx_116;
							Mem118[dx:di_111 + 0x0004:word16] = cx_97;
							Mem119[dx:bx_116 + 0x0004:word16] = di_111;
							Mem121[dx:cx_97 + 0x0002:word16] = di_111;
						}
						else
						{
							Mem123[dx:bx + 0x000E:word16] = Mem96[dx:bx + 0x000E:word16] - 0x0001;
							word16 si_127 = Mem123[dx:si_102 + 0x0002:word16];
							Mem128[dx:si_127 + 0x0004:word16] = cx_97;
							Mem129[dx:cx_97 + 0x0002:word16] = si_127;
							Mem130[dx:bx + 0x0006:word16] = si_127;
						}
						Mem104[dx:si_102 + 0x0000:word16] = Mem96[dx:si_102 + 0x0000:word16] | 0x0001;
						ax_107 = si_102 + 0x0002;
						goto l0800_14EA;
					}
					word16 di_81 = di_133 - dx_78;
					di_133 = (di_81 & 0x0000 - (di_81 >=u 0x0000)) + dx_78;
					si_102 = Mem0[dx:si_102 + 0x0004:word16];
				} while (si_102 != bx + 0x0010);
				Mem92[dx:bx + 0x000A:word16] = di_133;
l0800_149B:
				ax_107 = 0x0000;
			}
			else
				goto l0800_149B;
		}
		else
			goto l0800_149B;
	}
	else
		goto l0800_149B;
l0800_14EA:
	return ax_107;
}

void fn0800_14F2(word16 ax, word16 dx, word16 bx)
{
	if (ax != 0x0000)
	{
		word16 ax_58 = Mem0[dx:ax - 0x0002:word16];
		word16 si_110 = ax - 0x0002;
		byte al_60 = (byte) ax_58;
		if ((al_60 & 0x01) != 0x00)
		{
			word16 di_128;
			word16 ax_65 = DPB(ax_58, al_60 & 0xFE, 0, 8);
			word16 di_68 = ax - 0x0002 + ax_65;
			if ((Mem0[dx:di_68 + 0x0000:word16] & 0x0001) == 0x0000)
			{
				if (di_68 == Mem0[dx:bx + 0x0006:word16])
					Mem136[dx:bx + 0x0006:word16] = ax - 0x0002;
				Mem124[dx:ax - 0x0002:word16] = ax_65 + Mem0[dx:di_68 + 0x0000:word16];
				word16 bx_127 = Mem124[dx:di_68 + 0x0002:word16];
				di_128 = Mem124[dx:di_68 + 0x0004:word16];
				Mem129[dx:bx_127 + 0x0004:word16] = di_128;
				Mem130[dx:di_128 + 0x0002:word16] = bx_127;
				Mem134[dx:bx + 0x000E:word16] = Mem130[dx:bx + 0x000E:word16] - 0x0001;
			}
			else
			{
				Mem137[dx:ax - 0x0002:word16] = ax_65;
				di_128 = Mem137[dx:bx + 0x0006:word16];
				if (ax - 0x0002 <u di_128)
					if (ax - 0x0002 <=u Mem137[dx:di_128 + 0x0002:word16])
					{
						di_128 = Mem137[dx:bx + 0x0014:word16];
						if (ax - 0x0002 >=u di_128)
						{
l0800_1558:
							word16 ax_144 = Mem137[dx:bx + 0x000C:word16];
							word16 cx_146 = Mem137[dx:bx + 0x000E:word16];
							if (ax_161 <u cx_157)
							{
								if (Mem137[dx:bx + 0x000C:word16] - cx_157 <=u cx_157)
									ax_196 = 0x0000;
								di_128 = ax - 0x0002 + Mem137[dx:ax - 0x0002:word16];
								do
								{
									word16 dx_211 = Mem137[dx:di_128 + 0x0000:word16];
									byte dl_213 = (byte) dx_211;
									if ((dl_213 & 0x01) == 0x00)
										goto l0800_15AE;
									if (dx_211 == 0xFFFF)
										break;
									di_128 = di_128 + DPB(dx_211, dl_213 & 0xFE, 0, 8);
									ax_196 = ax_196 - 0x0001;
								} while (ax_196 != 0x0000);
l0800_158D:
								di_128 = Mem137[dx:bx + 0x0006:word16];
								if (ax - 0x0002 <u di_128)
								{
									di_128 = Mem137[dx:bx + 0x0014:word16];
									goto l0800_1597;
								}
l0800_1597:
								while (ax - 0x0002 >=u di_128)
								{
									di_128 = Mem137[dx:di_128 + 0x0004:word16];
									if (ax - 0x0002 <u di_128)
										;
									di_128 = Mem137[dx:di_128 + 0x0004:word16];
									if (ax - 0x0002 <u di_128)
										;
									di_128 = Mem137[dx:di_128 + 0x0004:word16];
								}
							}
							else
								goto l0800_158D;
						}
					}
				else
				{
					di_128 = Mem137[dx:di_128 + 0x0004:word16];
					if (ax - 0x0002 >=u di_128)
					{
						di_128 = bx + 0x0010;
						if (ax - 0x0002 <=u Mem137[dx:bx + 0x0012:word16])
							goto l0800_1558;
					}
				}
			}
			word16 dx_80 = Mem0[dx:di_128 + 0x0002:word16];
			word16 cx_106 = Mem0[dx:ax - 0x0002:word16];
			if (dx_80 + Mem0[dx:dx_80 + 0x0000:word16] == ax - 0x0002)
			{
				cx_106 = cx_106 + Mem0[dx:dx_80 + 0x0000:word16];
				Mem107[dx:dx_80 + 0x0000:word16] = cx_106;
				if (ax - 0x0002 == Mem107[dx:bx + 0x0006:word16])
					Mem111[dx:bx + 0x0006:word16] = dx_80;
				si_110 = dx_80;
			}
			else
			{
				Mem113[dx:bx + 0x000E:word16] = Mem0[dx:bx + 0x000E:word16] + 0x0001;
				Mem115[dx:ax + 0x0002:word16] = di_128;
				Mem116[dx:ax + 0x0000:word16] = dx_80;
				Mem117[dx:dx_80 + 0x0004:word16] = ax - 0x0002;
				Mem119[dx:di_128 + 0x0002:word16] = ax - 0x0002;
			}
			Mem97[dx:bx + 0x000C:word16] = Mem0[dx:bx + 0x000C:word16] - 0x0001;
			if (si_110 <u Mem97[dx:bx + 0x0006:word16] && cx_106 >u Mem97[dx:bx + 0x0008:word16])
				Mem105[dx:bx + 0x0008:word16] = cx_106;
			if (cx_106 >u Mem97[dx:bx + 0x000A:word16])
				Mem102[dx:bx + 0x000A:word16] = cx_106;
		}
		else
l0800_14EF:
	}
	else
		goto l0800_14EF;
	return;
}

word16 fn0800_15FB(word16 ax, selector ds)
{
	word16 bx_15 = Mem0[ds:0x0380:word16];
	word16 di_16 = 0x0000;
	while (bx_15 != 0x0000 && ax >=u bx_15)
	{
		di_16 = bx_15;
		bx_15 = Mem0[ds:bx_15 + 0x0004:word16];
	}
	Mem27[ds:ax + 0x0002:word16] = di_16;
	Mem28[ds:ax + 0x0004:word16] = bx_15;
	if (di_16 != 0x0000)
		Mem58[ds:di_16 + 0x0004:word16] = ax;
	else
		Mem59[ds:0x0380:word16] = ax;
	if (bx_15 != 0x0000)
		Mem57[ds:bx_15 + 0x0002:word16] = ax;
	word16 bx_36 = Mem28[ds:ax + 0x0000:word16];
	Mem38[ds:ax + 0x0010:word16] = 0x0000;
	Mem39[ds:ax + 0x0008:word16] = 0x0000;
	Mem40[ds:ax + 0x000C:word16] = 0x0000;
	Mem41[ds:ax + 0x000E:word16] = 0x0000;
	Mem42[ds:ax + 0x0012:word16] = ax + 0x0010;
	Mem43[ds:ax + 0x0014:word16] = ax + 0x0010;
	Mem45[ds:ax + 0x0006:word16] = ax + 0x0010;
	Mem46[ds:ax + 0x0016:word16] = bx_36 - 0x0016;
	Mem50[ds:bx_36 - 0x0016 + (ax + 0x0016):word16] = 0xFFFF;
	return ax + 0x0016;
}

word16 fn0800_1665(selector ds)
{
	if (Mem0[ds:0x0380:word16] != 0x0000)
	{
		word16 bx_24 = Mem0[ds:Mem0[ds:0x0380:word16] + 0x0012:word16];
		if (Mem0[ds:bx_24 + 0x0000:word16] + bx_24 + 0x0002 == Mem0[ds:0x0224:word16])
			return Mem0[ds:bx_24 + 0x0000:word16];
		else
		{
l0800_1685:
			return 0x0000;
		}
	}
	else
		goto l0800_1685;
}

word16 fn0800_1689(word16 ax, selector ds, ptr16 cxOut, ptr16 dxOut)
{
	*cxOut = cx;
	*dxOut = dx;
	word16 ax_117;
	if (Mem0[ds:0x0398:word16] == 0x0000 || Mem0[ds:0x0224:word16] == 0xFFFE)
	{
l0800_1697:
		ax_117 = 0x0000;
	}
	else
	{
		ax_117 = fn0800_175F(fp - 0x000A, ds);
		if (ax_117 != 0x0000)
		{
			word16 bx_158 = ax + Mem0[ds:0x0224:word16];
			if (bx_158 <u Mem0[ds:0x0224:word16])
				bx_158 = 0xFFFE;
			word16 ax_72 = fn0800_21A7(bx_158, ds);
			if (ax_72 != 0xFFFF && (ax_72 <=u 0xFFF8 && bx_158 >u ax_72))
			{
				word16 bx_81 = bx_158 - ax_72;
				if (bx_81 - 0x0002 <=u bx_81)
				{
					word16 bx_105 = Mem0[ds:0x0380:word16];
					while (bx_105 != 0x0000 && (Mem0[ds:bx_105 + 0x0004:word16] != 0x0000 && (bx_105 >u ax_72 || ax_72 >=u Mem0[ds:bx_105 + 0x0004:word16])))
						bx_105 = Mem0[ds:bx_105 + 0x0004:word16];
					word16 si_104;
					word16 wLoc0A_101;
					if (bx_105 != 0x0000)
					{
						word16 ax_136 = Mem0[ds:bx_105 + 0x0000:word16] + bx_105;
						if (ax_72 - 0x0002 == ax_136)
						{
							Mem145[ds:bx_105 + 0x0000:word16] = Mem0[ds:bx_105 + 0x0000:word16] + bx_81;
							Mem148[ds:ax_72 - 0x0002 + bx_81:word16] = 0xFFFF;
							wLoc0A_101 = bx_81;
							si_104 = ax_136;
l0800_1741:
							Mem111[ds:si_104 + 0x0000:word16] = DPB(wLoc0A_101, (byte) wLoc0A_101 | 0x01, 0, 8);
							Mem112[ds:bx_105 + 0x000A:word16] = 0xFFFF;
							Mem115[ds:bx_105 + 0x000C:word16] = Mem112[ds:bx_105 + 0x000C:word16] + 0x0001;
							fn0800_13F7(si_104 + 0x0002, ds);
							ax_117 = 0x0001;
						}
						else
						{
l0800_1723:
							if (bx_81 <u 0x001E)
								goto l0800_1697;
							else
							{
								Mem126[ds:ax_72 + 0x0000:word16] = bx_81 - 0x0002;
								word16 ax_129 = fn0800_15FB(ax_72, ds);
								bx_105 = ax_72;
								si_104 = ax_129;
								wLoc0A_101 = Mem126[ds:ax_129 + 0x0000:word16];
								goto l0800_1741;
							}
						}
					}
					else
						goto l0800_1723;
				}
				else
					goto l0800_1697;
			}
			else
				goto l0800_1697;
		}
	}
	return ax_117;
}

word16 fn0800_175F(word16 ax, selector ds)
{
	word16 dx_12 = Mem0[ds:ax + 0x0000:word16];
	word16 dx_16 = DPB(dx_12 + 0x0003, (byte) (dx_12 + 0x0003) & 0xFE, 0, 8);
	if (dx_16 != 0x0000)
	{
		word16 dx_41 = dx_16 - fn0800_1665(ds);
		Mem42[ds:ax + 0x0000:word16] = dx_41;
		word16 dx_43 = dx_41 + 0x001E;
		if (dx_41 + 0x001E >=u Mem42[ds:ax + 0x0000:word16])
		{
			if (dx_41 + 0x001E <u Mem42[ds:0x0386:word16])
			{
				word16 dx_60 = Mem42[ds:0x0386:word16];
				dx_43 = DPB(dx_60, (byte) dx_60 & 0xFE, 0, 8);
			}
			Mem51[ds:ax + 0x0000:word16] = dx_43;
			if (dx_43 != 0x0000)
				return 0x0001;
			else
			{
l0800_1796:
				return 0x0000;
			}
		}
		else
			goto l0800_1796;
	}
	else
		goto l0800_1796;
}

void fn0800_179B()
{
	return;
}

word16 fn0800_17A3(word16 ax, word16 cx, word16 bp, word16 si, word16 di, selector es, selector ds, ptr16 cxOut, ptr16 dxOut, ptr16 bxOut, ptr16 bpOut, ptr16 siOut, ptr16 diOut, ptr16 esOut)
{
fn0800_17A3_entry:
	*bpOut = bp
	*diOut = di
	*esOut = es
	*siOut = si
	*cxOut = cx
	*dxOut = dx
	*bxOut = bx
l0800_17A3:
	branch ax >=u fp l0800_17BA
l0800_17A7:
	word16 ax_134 = -(ax - fp)
	branch ax_134 >u Mem0[ds:0x022C:word16] l0800_17B9
l0800_17B1:
	ax_134 = ss
	branch ss == Mem0[ds:0x038A:word16] l0800_17BA
l0800_17B9:
	return ax_134
l0800_17BA:
	word16 dx_40
	*dxOut = cs
	byte dl_41 = (byte) cs
	byte dh_42 = SLICE(cs, byte, 8)
	word16 bx_49
	*bxOut = 0x0001
	word16 ax_50
	byte CZ_51 = fn0800_0A5A(0x17C5, cs, 0x0001, ds, out ax_50)
	branch CZ_51 l0800_1829
l0800_17C8:
	__arpl(Mem0[ss:bp + 0x0020 + di:word16], 0x0001, &Mem0[ss:bp + 0x0020 + di:word16])
	branch di <=u 0x0001 l0800_1833
l0800_17CE:
	branch CZ_51 l0800_1836
l0800_17D0:
	Mem69[es:di - 0x0001:byte] = __in(cs)
	__outw(cs, ax_50)
	word16 si_73
	*siOut = si + 0x0002
	branch di >u 0x0001 l0800_17F5
	goto l0800_17D4
l0800_17D2_thunk_fn0800_17E5:
	word16 cx_99
	word16 di_100
	selector es_101
	return fn0800_17E5(cx, di, 0xC5, dl_41, es, 0x0001, wArg00, wArg02, out cx_99, out di_100, out es_101)
l0800_17D4:
l0800_17E3_thunk_fn0800_17E5:
	word16 cx_91
	word16 di_92
	selector es_93
	return fn0800_17E5(0xFFFF, ax_50 | 0x000A, 0x00, dl_41, ds, es, di, cx, out cx_91, out di_92, out es_93)
l0800_1829:
l0800_1829_thunk_fn0800_1828:
	word16 cx_123
	word16 dx_124
	word16 bx_125
	word16 bp_126
	word16 si_127
	word16 di_128
	return fn0800_1828(0x0001, bp, si, di, ds, out cx_123, out dx_124, out bx_125, out bp_126, out si_127, out di_128)
l0800_1833:
	__hlt()
l0800_1836:
	Mem110[ds:si + 0x0001:byte] = Mem0[ds:si + 0x0001:byte] + dh_42 + CZ_51
l0800_1836_thunk_fn0800_1828:
	word16 cx_112
	word16 dx_113
	word16 bx_114
	word16 bp_115
	word16 si_116
	word16 di_117
	return fn0800_1828(0x0001, bp, si, di - 0x0001, ds, out cx_112, out dx_113, out bx_114, out bp_115, out si_116, out di_117)
fn0800_17A3_exit:
}

word16 fn0800_17D7(word16 ax, word16 cx, word16 di, byte dl, selector es, selector ds, ptr16 diOut, ptr16 esOut)
{
	word16 cx_22;
	word16 di_23;
	selector es_24;
	return fn0800_17E5(0xFFFF, ax, 0x00, dl, ds, es, di, cx, out cx_22, out di_23, out es_24);
}

word16 fn0800_17E5(word16 cx, word16 di, byte al, byte dl, selector es, selector psegArg00, word16 wArg02, word16 wArg04, ptr16 cxOut, ptr16 diOut, ptr16 esOut)
{
	do
	{
		if (cx == 0x0000)
			break;
		di = di + 0x0001;
		cx = cx - 0x0001;
	} while (al != Mem0[es:di + 0x0000:byte]);
	word16 di_11 = di - 0x0001;
	word16 cx_10 = ~cx;
	byte Z_14 = cond(di_11);
	do
	{
		if (cx_10 == 0x0000)
			break;
		Z_14 = cond(dl - Mem0[es:di_11 + 0x0000:byte]);
		di_11 = di_11 - 0x0001;
		cx_10 = cx_10 - 0x0001;
	} while (dl != Mem0[es:di_11 + 0x0000:byte]);
	if (!Z_14)
		cx_10 = di_11 + 0x0001;
	selector es_36;
	*esOut = psegArg00;
	word16 di_40;
	*diOut = wArg02;
	word16 cx_43;
	*cxOut = wArg04;
	return cx_10;
}

word16 fn0800_17FB(word16 di, selector ds, word16 wArg02, word16 wArg04, word16 wArg06, ptr16 cxOut, ptr16 dxOut, ptr16 diOut)
{
	word16 cx_27;
	word16 dx_28;
	word16 di_29;
	return fn0800_181A(fp + 0x0008, di, ds, wArg02, out cx_27, out dx_28, out di_29);
}

word16 fn0800_181A(word16 bx, word16 di, selector ds, word16 wArg02, ptr16 cxOut, ptr16 dxOut, ptr16 diOut)
{
	word16 cx_26;
	word16 dx_27;
	word16 bx_28;
	word16 bp_29;
	word16 si_30;
	word16 di_31;
	return fn0800_1828(bx, fp - 0x000C, wArg02, di, ds, out cx_26, out dx_27, out bx_28, out bp_29, out si_30, out di_31);
}

word16 fn0800_1828(word16 bx, word16 bp, word16 si, word16 di, selector ds, ptr16 cxOut, ptr16 dxOut, ptr16 bxOut, ptr16 bpOut, ptr16 siOut, ptr16 diOut)
{
	while (true)
	{
		Mem14[ds:bx + si:byte] = Mem0[ds:bx + si:byte] & __inb(0x3D);
		if (Mem14[ds:bx + si:byte] != 0x00)
		{
			byte al_23 = __inb(0x24);
			Mem26[ds:bx - 0x03BA + di:word16] = Mem14[ds:bx - 0x03BA + di:word16] | 0xFF8A;
			word16 si_28 = si + 0x0001;
			word16 di_119 = 0xFFFF;
			word16 ax_36;
			word16 dx_38 = 0x0000 - msdos_open_file(SEQ(ds, si_28), al_23 | Mem26[ss:bp + 0x0012:byte], out ax_36);
			word16 dx_107 = ax_36;
			byte dh_109 = SLICE(ax_36, byte, 8);
			if (dx_38 > 0x0000 || dx_38 == 0x0000)
				di_119 = ax_36;
			byte al_235;
			word16 ax_188;
			if ((Mem26[ss:bp + 0x0010:byte] & 0x03) == 0x00 || (di_119 == 0xFFFF || fn0800_21FD(di_119) != 0x0000))
				goto l0800_18BC;
			else if ((Mem26[ss:bp + 0x0011:byte] & 0x04) != 0x00 && (Mem26[ss:bp + 0x0010:byte] & 0x20) != 0x00)
			{
				word16 bx_350;
				fn0800_0780(0x0007, 0x0000 - msdos_close_file(di_119), ds, out bx_350);
				ax_188 = 0xFFFF;
			}
			else if ((Mem26[ss:bp + 0x0010:byte] & 0x40) != 0x00)
			{
				dx_107 = ax_320;
				dh_109 = SLICE(ax_320, byte, 8);
				word16 ax_320;
				if (0x0000 - msdos_write_file(di_119, 0x0000, SEQ(ds, bp - 0x0002), out ax_320) < 0x0000)
				{
					dh_109 = SLICE(0x0000 - msdos_close_file(di_119), byte, 8);
					al_235 = (byte) ax_320;
l0800_18B6:
					word16 dx_97;
					ax_188 = fn0800_0CE0(al_235, dh_109, ds, out dx_97);
				}
				else
				{
l0800_18BC:
					if (di_119 != 0xFFFF)
						goto l0800_1928;
					else if ((Mem26[ss:bp + 0x0010:byte] & 0x20) != 0x00 && dx_107 == 0x0002)
					{
						word16 ax_241 = Mem26[ds:bp + 0x0014 + dx_107 - 0x0002:word16];
						if (ax_241 == 0x0000)
							ax_241 = 0x0180;
						al_235 = (byte) (ax_241 & ~Mem26[ds:0x039A:word16]);
						word16 cx_252 = 0x0000;
						if ((al_235 & 0x80) == 0x00)
							cx_252 = 0x0001;
						word16 ax_262;
						word16 dx_264 = 0x0000 - msdos_create_truncate_file(DPB(cx_252, 0x00, 8, 8), ds, si_28, out ax_262);
						dh_109 = SLICE(dx_264, byte, 8);
						if (dx_264 >= 0x0000)
						{
							di_119 = ax_262;
							if (Mem26[ss:bp + 0x0012:word16] != 0x0000)
							{
								word16 dx_277 = 0x0000 - msdos_close_file(ax_262);
								dh_109 = SLICE(dx_277, byte, 8);
								if (dx_277 >= 0x0000)
								{
									al_235 = Mem26[ss:bp - 0x0004:byte] | Mem26[ss:bp + 0x0012:byte];
									word16 ax_289;
									word16 dx_291 = 0x0000 - msdos_open_file(SEQ(ds, si_28), al_235, out ax_289);
									dh_109 = SLICE(dx_291, byte, 8);
									if (dx_291 >= 0x0000)
									{
										di_119 = ax_289;
l0800_1928:
										word16 ax_124 = fn0800_2219(di_119, ds);
										word16 ax_127 = DPB(ax_124, (byte) ax_124 & 0x3C, 0, 8);
										word16 dx_130 = ax_127;
										byte dh_132 = SLICE(ax_127, byte, 8);
										byte dl_133 = (byte) ax_127;
										if (fn0800_21FD(di_119) != 0x0000)
										{
											dh_132 = dh_132 | 0x20;
											dx_130 = DPB(ax_127, dh_132 | 0x20, 8, 8);
										}
										Mem144[ss:bp - 0x0004:byte] = Mem26[ss:bp - 0x0004:byte] & 0x7F;
										if (Mem144[ss:bp - 0x0004:word16] == 0x0002)
										{
											dl_133 = dl_133 | 0x03;
											dx_130 = DPB(dx_130, dl_133 | 0x03, 0, 8);
										}
										if (Mem144[ss:bp - 0x0004:word16] == 0x0000)
										{
											dl_133 = dl_133 | 0x01;
											dx_130 = DPB(dx_130, dl_133, 0, 8);
										}
										if (Mem144[ss:bp - 0x0004:word16] == 0x0001)
										{
											dl_133 = dl_133 | 0x02;
											dx_130 = DPB(dx_130, dl_133, 0, 8);
										}
										if ((Mem144[ss:bp + 0x0010:byte] & 0x10) != 0x00)
										{
											dl_133 = dl_133 | 0x80;
											dx_130 = DPB(dx_130, dl_133, 0, 8);
										}
										word16 ax_175 = DPB(dx_130, (byte) dx_130 | 0x40, 0, 8);
										if ((Mem144[ss:bp + 0x0011:byte] & 0x03) != 0x00)
											if ((Mem144[ss:bp + 0x0011:byte] & 0x02) != 0x00)
											{
l0800_197F:
												dh_132 = SLICE(ax_175, byte, 8);
												dl_133 = (byte) ax_175;
											}
										else if (Mem144[ds:0x0367:word16] == 0x0200)
											goto l0800_197F;
										fn0800_2260(di_119, dl_133, dh_132, ds);
										ax_188 = di_119;
									}
									else
										goto l0800_18B6;
								}
								else
									goto l0800_18B6;
							}
							else
								goto l0800_1928;
						}
						else
							goto l0800_18B6;
					}
					else
					{
						al_235 = (byte) dx_107;
						goto l0800_18B6;
					}
				}
			}
			else
				goto l0800_18BC;
			word16 bp_62;
			*bpOut = Mem26[ss:bp + 0x0000:word16];
			word16 di_64;
			*diOut = Mem26[ss:bp + 0x0002:word16];
			word16 si_66;
			*siOut = Mem26[ss:bp + 0x0004:word16];
			word16 dx_68;
			*dxOut = Mem26[ss:bp + 0x0006:word16];
			word16 cx_73;
			*cxOut = Mem26[ss:bp + 0x0008:word16];
			word16 bx_76;
			*bxOut = Mem26[ss:bp + 0x000A:word16];
			return ax_188;
		}
		si = si + 0x0001;
	}
}

word16 fn0800_19D8(word16 ax, word16 dx, word16 bx, selector ds, ptr16 dxOut)
{
	word16 ax_62;
	word16 ax_110;
	word16 ax_24 = fn0800_2219(ax, ds);
	word16 wLoc16_181 = dx;
	byte al_105 = (byte) ax_24;
	if (ax_24 == 0x0000)
	{
		ax_62 = 0x0004;
l0800_19F0:
		word16 bx_63;
		word16 dx_64;
		*dxOut = fn0800_0780(ax_62, dx, ds, out bx_63);
		ax_110 = 0xFFFF;
	}
	else if ((al_105 & 0x01) == 0x00)
	{
		ax_62 = 0x0006;
		goto l0800_19F0;
	}
	else
	{
		word16 di_130;
		byte dh_103;
		if ((al_105 & 0x40) != 0x00)
		{
			word16 ax_164;
			word16 dx_166 = 0x0000 - msdos_read_file(ax, bx, ds_dx, out ax_164);
			*dxOut = dx_166;
			dh_103 = SLICE(dx_166, byte, 8);
			di_130 = ax_164;
			if (dx_166 < 0x0000)
			{
l0800_1A17:
				word16 dx_109;
				ax_110 = fn0800_0CE0(al_105, dh_103, ds, out dx_109);
			}
			else
			{
l0800_1A70:
l0800_1A9D:
				ax_110 = di_130;
			}
		}
		else
		{
			word16 wLoc0A_174 = bx;
			di_130 = 0x0000;
			do
			{
				word16 ax_195;
				word16 dx_197 = 0x0000 - msdos_read_file(ax, wLoc0A_174, SEQ(ds, wLoc16_181), out ax_195);
				*dxOut = dx_197;
				dh_103 = SLICE(dx_197, byte, 8);
				if (dx_197 < 0x0000)
					goto l0800_1A17;
				if (ax_195 == 0x0000)
					break;
				word16 bx_208 = wLoc16_181;
				word16 cx_210 = 0x0000;
				word16 si_212 = wLoc16_181 + ax_195;
				word16 dx_213;
				*dxOut = 0x0000;
				ax_229 = ax_195;
				word16 ax_229;
				while (bx_208 <u si_212)
				{
					al_105 = Mem0[ds:bx_208 + 0x0000:byte];
					ax_229 = DPB(ax_229, 0x00, 8, 8);
					if (ax_229 == 0x001A)
					{
						word16 bx_258 = cx_210 - ax_195;
						ui32 cx_bx_264 = SEQ(0x0000 - DPB(ax_229, 0x00, 0, 8) - (bx_258 <u 0x0000), bx_258 + 0x0001);
						word16 dx_274;
						fn0800_1ABD(ax, SLICE(cx_bx_264 + 0x00000001, word16, 16), (word16) (cx_bx_264 + 0x00000001), 0x01, ds, out dx_274);
						goto l0800_1A70;
					}
					if (ax_229 != 0x000D)
					{
						Mem300[ds:wLoc16_181 + dx_213:byte] = al_105;
						di_130 = di_130 + 0x0001;
						*dxOut = dx_213 + 0x0001;
					}
					bx_208 = bx_208 + 0x0001;
					cx_210 = cx_210 + 0x0001;
				}
				word16 v21_239 = wLoc0A_174 - dx_213;
				wLoc16_181 = wLoc16_181 + dx_213;
				wLoc0A_174 = v21_239;
			} while ((bLoc0B & 0x20) != 0x00 || v21_239 == 0x0000);
		}
	}
	return ax_110;
}

word16 fn0800_1AA6(word16 ax, word16 dx, selector ds, ptr16 dxOut, ptr16 bxOut)
{
	if (ax >= 0x0000 && ax <=u Mem0[ds:0x039C:word16])
	{
		word16 sp_52 = fp - 0x0006;
		word16 dx_58 = 0x0000 - msdos_close_file(ax);
		if (dx_58 <= 0x0000 && dx_58 != 0x0000)
		{
			word16 bx_90;
			fn0800_0780(0x0004, dx_58, ds, out bx_90);
			sp_52 = fp - 0x0008;
		}
		else
			fn0800_2260(ax, 0x00, 0x00, ds);
		word16 sp_75 = sp_52 + 0x0002;
		word16 dx_72;
		*dxOut = Mem0[ss:sp_52 + 0x0000:word16];
		word16 bx_78;
		*bxOut = Mem0[ss:sp_75 + 0x0002:word16];
		return Mem0[ss:sp_75 + 0x0000:word16];
	}
	else
	{
		word16 bx_32;
		word16 dx_33;
		*dxOut = fn0800_0780(0x0004, dx, ds, out bx_32);
		return cx;
	}
}

word16 fn0800_1ABD(word16 ax, word16 cx, word16 bx, byte dl, selector ds, ptr16 dxOut)
{
	word16 ax_40;
	word16 dx_33 = __ror(__rcl(bx, 0x01, msdos_set_file_position(ax, SEQ(cx, bx), dl, DPB(dx_ax, 0x42, 8, 8))), 0x01);
	word16 ax_24 = DPB(ax, 0x42, 8, 8);
	byte dh_36 = SLICE(dx_33, byte, 8);
	if (dx_33 < 0x0000)
	{
		word16 dx_57;
		fn0800_0CE0(dl, dh_36, ds, out dx_57);
		ax_40 = 0xFFFF;
		word16 dx_63;
		*dxOut = 0xFFFF;
	}
	else
	{
		ax_40 = ax_24;
		word16 dx_71;
		*dxOut = bx;
	}
	return ax_40;
}

word16 fn0800_1AFA(word16 ax, word16 cx, word16 dx, word16 bx, ptr16 dxOut)
{
	if (dx < 0x0000)
	{
		word16 ax_41 = -ax;
		word16 dx_43 = -dx - (ax_41 == 0x0000);
		if (cx < 0x0000)
		{
			word16 bx_49 = -bx;
			word16 dx_53;
			word16 bx_54;
			return fn0800_1B47(ax_41, -cx - (bx_49 == 0x0000), dx_43, bx_49, out dx_53, out bx_54);
		}
		else
		{
			word16 dx_61;
			word16 bx_62;
			word16 ax_69 = -fn0800_1B47(ax_41, cx, dx_43, bx, out dx_61, out bx_62);
			word16 dx_71;
			*dxOut = -dx_61 - (ax_69 == 0x0000);
			return ax_69;
		}
	}
	else if (cx >= 0x0000)
	{
		word16 dx_23;
		word16 bx_24;
		return fn0800_1B47(ax, cx, dx, bx, out dx_23, out bx_24);
	}
	else
	{
		word16 bx_28 = -bx;
		word16 dx_32;
		word16 bx_33;
		word16 ax_36 = -fn0800_1B47(ax, -cx - (bx_28 == 0x0000), dx, bx_28, out dx_32, out bx_33);
		word16 dx_38;
		*dxOut = -dx_32 - (ax_36 == 0x0000);
		return ax_36;
	}
}

word16 fn0800_1B47(word16 ax, word16 cx, word16 dx, word16 bx, ptr16 dxOut, ptr16 bxOut)
{
	*dxOut = dx;
	word16 bx_113;
	word16 cx_103 = cx;
	if (cx == 0x0000)
	{
		word16 bx_56;
		*bxOut = bx - 0x0001;
		if (bx != 0x0001)
		{
			bx_113 = bx;
			if (bx != 0x0000)
			{
				if (bx <=u dx)
				{
					word16 dx_96 = SEQ(0x0000, dx) % bx;
					dx_ax = SEQ(dx_96, ax);
					cx_103 = SEQ(dx_96, dx) /u bx;
				}
				word16 dx_83 = dx_ax % bx;
				ax = SEQ(dx_83, ax) /u bx;
				word16 bx_86;
				*bxOut = dx_83;
				word16 dx_87;
				*dxOut = cx_103;
l0800_1B66:
				return ax;
			}
			else
			{
l0800_1B81:
				word16 bx_42;
				*bxOut = ax;
				word16 dx_45;
				*dxOut = cx_103;
				return bx_113;
			}
		}
		else
			goto l0800_1B66;
	}
	else if (cx <u dx)
	{
		word16 si_132 = 0x0000;
		word16 di_134 = 0x0000;
		word16 bp_136 = 0x0000;
		do
		{
			byte C_201;
			ui32 cx_bx_141 = SEQ(cx_103, bx * 0x0002);
			cx_103 = SLICE(cx_bx_141 * 0x00000002, word16, 16);
			bx = (word16) (cx_bx_141 * 0x00000002);
			byte C_147 = cond(cx_bx_141 * 0x00000002);
			if (cx_bx_141 * 0x00000002 <u 0x00000000)
				goto l0800_1BA7;
			bp_136 = bp_136 + 0x0001;
		} while (cx_103 <u dx || cx_103 <=u dx && bx <=u ax);
		C_201 = false;
l0800_1BA0:
		si_132 = si_132 * 0x0002 + C_201;
		di_134 = di_134 * 0x0002 + (si_132 <u 0x0000);
		C_147 = cond(di_134);
		bp_136 = bp_136 - 0x0001;
		if (bp_136 >= 0x0000)
		{
			cx_103 = __rcr(cx_103, 0x01, C_147);
			bx = __rcr(bx, 0x01, (cx_103 & 0x0002) != 0x0000);
			ui32 cx_bx_189 = SEQ(cx_103, bx);
			word32 dx_ax_193 = SEQ(dx, ax - bx) - cx_bx_189;
			dx = SLICE(dx_ax_193, word16, 16);
			ax = (word16) dx_ax_193;
			C_201 = !cond(dx_ax_193);
			if (dx_ax_193 >=u 0x00000000)
				goto l0800_1BA0;
			do
			{
				ui32 di_si_217 = SEQ(di_134, si_132 * 0x0002);
				di_134 = SLICE(di_si_217 * 0x00000002, word16, 16);
				si_132 = (word16) (di_si_217 * 0x00000002);
				bp_136 = bp_136 - 0x0001;
				if (bp_136 < 0x0000)
				{
					ax = (word16) (SEQ(dx, ax + bx) + cx_bx_189);
					goto l0800_1BC9;
				}
				cx_103 = cx_103 >>u 0x0001;
				bx = __rcr(bx, 0x01, cond(cx_103));
				cx_bx_189 = SEQ(cx_103, bx);
				word32 dx_ax_235 = SEQ(dx, ax + bx) + cx_bx_189;
				dx = SLICE(dx_ax_235, word16, 16);
				ax = (word16) dx_ax_235;
				C_201 = cond(dx_ax_235);
			} while (dx_ax_235 >=u 0x00000000);
			goto l0800_1BA0;
		}
l0800_1BC9:
		word16 bx_163;
		*bxOut = ax;
		word16 dx_167;
		*dxOut = di_134;
		return si_132;
	}
	else if (cx == dx && bx <=u ax)
	{
		word16 bx_119;
		*bxOut = ax - bx;
		word16 dx_122;
		*dxOut = 0x0000;
		return 0x0001;
	}
	else
	{
		cx_103 = 0x0000;
		bx_113 = 0x0000;
		goto l0800_1B81;
	}
}

void fn0800_1BD5(word16 ax, word16 dx, selector ds)
{
	word16 bx_12 = ax;
	word16 si_11 = dx;
	byte al_16 = Mem0[ds:si_11 + 0x0000:byte];
	Mem17[ds:bx_12 + 0x0000:byte] = al_16;
	while (al_16 != 0x00)
	{
		bx_12 = bx_12 + 0x0001;
		si_11 = si_11 + 0x0001;
		al_16 = Mem0[ds:si_11 + 0x0000:byte];
		Mem17[ds:bx_12 + 0x0000:byte] = al_16;
	}
	return;
}

word16 fn0800_1BEC(word16 ax, word16 cx, word16 dx, word16 bx, selector ds, word16 wArg02, word16 wArg04, word16 wArg06)
{
	if (dx == 0x0000)
		dx = Mem0[ds:0x0220:word16];
	word16 wLoc08_24 = 0x0000;
	if (dx != 0x0000)
	{
		word16 bx_243 = dx;
		while (Mem0[ds:bx_243 + 0x0000:word16] != 0x0000)
		{
			bx_243 = bx_243 + 0x0001 + 0x0001;
			wLoc08_24 = wLoc08_24 + (fn0800_06F2(Mem0[ds:bx_243 + 0x0000:word16], ds) + 0x0001);
		}
	}
	word16 v16_33 = wLoc08_24 + 0x0001;
	if (wArg06 != 0x0000)
		wLoc08_241 = v16_33 + 0x0001 + (fn0800_06F2(Mem0[ds:ax + 0x0000:word16], ds) + 0x0003) + (fn0800_06F2(Mem0[ds:ax + 0x0000:word16], ds) + 0x0003);
	word16 bx_213;
	word16 ax_165;
	word16 ax_45 = Mem0[ds:0x0386:word16];
	Mem51[ds:0x0386:word16] = 0x0010;
	word16 v21_46 = wLoc08_241 + 0x000F;
	byte cl_52;
	word16 ax_53 = fn0800_0D39(v21_46, ds, out cl_52);
	if (ax_53 == 0x0000)
	{
		byte cl_211;
		word16 ax_212 = fn0800_0D39(v21_46, ds, out cl_211);
		bx_213 = ax_212;
		if (ax_212 == 0x0000)
		{
			word16 bx_219;
			word16 bx_223;
			fn0800_079D(0x0008, fn0800_0780(0x0005, dx, ds, out bx_219), ds, out bx_223);
			Mem227[ds:0x0386:word16] = ax_45;
l0800_1C6D:
			ax_165 = 0xFFFF;
		}
		else
		{
l0800_1C75:
			Mem92[ds:0x0386:word16] = ax_45;
			Mem93[ds:bx + 0x0000:word16] = bx_213;
			word16 bx_94 = bx_213 + 0x000F;
			word16 bx_113 = DPB(bx_94, (byte) bx_94 & 0xF0, 0, 8);
			Mem106[ds:wArg02 + 0x0000:word16] = (bx_113 >>u 0x04) + ds;
			Mem108[ds:cx + 0x0000:word16] = bx_113;
			if (dx != 0x0000)
			{
				word16 di_193 = dx;
				while (Mem108[ds:di_193 + 0x0000:word16] != 0x0000)
				{
					fn0800_1BD5(bx_113, Mem108[ds:di_193 + 0x0000:word16], ds);
					di_193 = di_193 + 0x0001 + 0x0001;
					bx_113 = bx_113 + 0x0001;
				}
			}
			Mem117[ds:bx_113 + 0x0000:byte] = 0x00;
			word16 bx_118 = bx_113 + 0x0001;
			if (wArg06 != 0x0000)
			{
				fn0800_070B(bx_118 + 0x0003, Mem121[ds:ax + 0x0000:word16], ds);
				fn0800_070B(bx_118 + 0x0003, Mem121[ds:ax + 0x0000:word16], ds);
			}
			word16 dx_127 = 0x0000;
			if (Mem121[ds:ax + 0x0000:word16] != 0x0000)
			{
				word16 si_168 = ax + 0x0002;
				word16 ax_173 = Mem121[ds:si_168 + 0x0000:word16];
				while (ax_173 != 0x0000)
				{
					if (dx_127 != 0x0000)
						dx_127 = dx_127 + 0x0001;
					si_168 = si_168 + 0x0001 + 0x0001;
					dx_127 = dx_127 + fn0800_06F2(ax_173, ds);
					ax_173 = Mem121[ds:si_168 + 0x0000:word16];
				}
			}
			if (dx_127 >u 0x007E)
			{
				word16 bx_141;
				word16 bx_146;
				word16 dx_147 = fn0800_079D(0x000A, fn0800_0780(0x0002, dx_127, ds, out bx_141), ds, out bx_146);
				fn0800_13F7(Mem121[ds:bx_146 + 0x0000:word16], ds);
				word16 bx_151;
				word16 bx_156;
				fn0800_079D(0x000A, fn0800_0780(0x0002, dx_147, ds, out bx_151), ds, out bx_156);
				fn0800_13F7(Mem121[ds:bx_156 + 0x0000:word16], ds);
				goto l0800_1C6D;
			}
			else
			{
				Mem164[ds:wArg04 + 0x0000:word16] = 0x0090;
				ax_165 = v21_46 >>u 0x04;
			}
		}
	}
	else
	{
		bx_213 = ax_53;
		goto l0800_1C75;
	}
	return ax_165;
}

void fn0800_1D16(word16 cx, word16 dx, word16 bx, selector ds)
{
	word16 bx_25;
	bx_25 = bx;
	if (cx == 0x0000)
	{
		bx_25 = bx + 0x0001;
		bl = (byte) (bx + 0x0001);
	}
	if (Mem0[ds:dx + 0x0000:word16] != 0x0000)
	{
		word16 si_64 = dx + 0x0002;
		if (Mem0[ds:dx + 0x0002:word16] != 0x0000)
		{
			fn0800_1BD5(bx_25, Mem0[ds:si_64 + 0x0000:word16], ds);
			word16 si_72 = si_64 + 0x0001;
			si_64 = si_72 + 0x0001;
			bl = (byte) bx_25;
			while (Mem0[ds:si_72 + 0x0001:word16] != 0x0000)
			{
				Mem80[ds:bx_25 + 0x0000:byte] = 0x20;
				bx_25 = bx_25 + 0x0001;
				fn0800_1BD5(bx_25, Mem0[ds:si_64 + 0x0000:word16], ds);
				si_72 = si_64 + 0x0001;
				si_64 = si_72 + 0x0001;
				bl = (byte) bx_25;
			}
		}
	}
	if (cx != 0x0000)
		Mem52[ds:bx_25 + 0x0000:byte] = 0x00;
	else
	{
		Mem55[ds:bx_25 + 0x0000:byte] = 0x0D;
		Mem62[ds:bx + 0x0000:byte] = bl - bLoc08 - 0x01;
	}
	return;
}

void fn0800_1E9E(word16 wArg04, word16 wArg06, word16 wArg08, word16 wArg0A, word16 wArg0C, word16 wArg0E, word16 wArg10)
{
fn0800_1E9E_entry:
l0800_1E9E:
	word16 ax_9 = Mem0[ss:0x0226:word16]
	word16 di_14 = 0x005C
	word16 cx_16 = 0x0024
l0800_1EB1:
	branch cx_16 == 0x0000 l0800_1EB3
l0800_1EB1_1:
	Mem22[ax_9:di_14 + 0x0000:byte] = 0x00
	di_14 = di_14 + 0x0001
	cx_16 = cx_16 - 0x0001
	goto l0800_1EB1
l0800_1EB3:
	word16 cx_31 = DPB(cx_16, Mem0[ss:wArg06 + 0x0000:byte], 0, 8)
	word16 si_28 = wArg06
	word16 cx_204 = cx_31 + 0x0002
	branch cx_31 <=u 0xFF82 l0800_1EC3
l0800_1EC0:
	cx_204 = 0x0080
l0800_1EC3:
	branch cx_204 == 0x0000 l0800_1EC5
l0800_1EC3_1:
	Mem44[ax_9:di_14 + 0x0000:byte] = Mem0[ss:si_28 + 0x0000:byte]
	si_28 = si_28 + 0x0001
	di_14 = di_14 + 0x0001
	cx_204 = cx_204 - 0x0001
	goto l0800_1EC3
l0800_1EC5:
	msdos_set_DTA(ax_9, 0x0080)
	word32 ds_si_59 = SEQ(ax_9, 0x0081)
	branch msdos_parse_filename_into_fcb(0x01, ds_si_59, SEQ(ax_9, 0x005C), ds_si_59) == 0xFF l0800_1EE3
l0800_1EE1:
l0800_1EE3:
	branch msdos_parse_filename_into_fcb(0x01, ds_si_59, SEQ(ax_9, 0x006C), ds_si_59) == 0xFF l0800_1EF4
l0800_1EF2:
l0800_1EF4:
	word16 di_194 = wArg04
	word16 cx_196 = ~0x0000
l0800_1F04:
	branch cx_196 == 0x0000 l0800_1F06
l0800_1F04_1:
	di_194 = di_206 + 0x0001
	cx_196 = cx_196 - 0x0001
	word16 di_206 = di_194
	branch 0x00 != Mem0[ss:di_206 + 0x0000:byte] l0800_1F04
l0800_1F06:
	word16 cx_118
	word16 si_117
	word16 cx_100 = ~cx_196
	Mem101[ss:0x0394:word16] = cx_100
	word16 ax_108 = Mem101[Mem101[ss:0x0226:selector]:0x0002:word16] - (cx_100 + 0x000F >>u 0x04)
	Mem111[ss:0x0392:word16] = ax_108 - 0x0013
	word16 di_112 = 0x0000
	branch wArg08 == 0x0000 l0800_1F37
l0800_1F2F:
	si_117 = 0x1D6A
	cx_118 = 0x0093
	goto l0800_1F3D
l0800_1F37:
	si_117 = 0x1DFD
	cx_118 = 0x00A1
l0800_1F3D:
l0800_1F42:
	branch cx_118 == 0x0000 l0800_1F44
l0800_1F42_1:
	Mem133[ax_108 - 0x0013:di_112 + 0x0000:byte] = Mem111[cs:si_117 + 0x0000:byte]
	si_117 = si_117 + 0x0001
	di_112 = di_112 + 0x0001
	cx_118 = cx_118 - 0x0001
	goto l0800_1F42
l0800_1F44:
	word16 di_142 = 0x0130
	word16 si_144 = wArg04
	word16 cx_146 = Mem111[ss:0x0394:word16]
l0800_1F4F:
	branch cx_146 == 0x0000 l0800_1F51
l0800_1F4F_1:
	Mem155[ax_108 - 0x0013:di_142 + 0x0000:byte] = Mem111[ss:si_144 + 0x0000:byte]
	si_144 = si_144 + 0x0001
	di_142 = di_142 + 0x0001
	cx_146 = cx_146 - 0x0001
	goto l0800_1F4F
l0800_1F51:
	word16 cx_162 = Mem111[ss:0x0226:word16]
	branch wArg08 == 0x0000 l0800_1F7E
l0800_1F5E:
	Mem172[ax_108 - 0x0013:0x008B:word16] = wArg0A + (cx_162 + 0x0010)
	Mem175[ax_108 - 0x0013:0x008D:word16] = wArg0C
	Mem180[ax_108 - 0x0013:0x008F:word16] = wArg0E + (cx_162 + 0x0010)
	Mem183[ax_108 - 0x0013:0x0091:word16] = wArg10
l0800_1F7E:
fn0800_1E9E_exit:
}

selector fn0800_1FA2(word16 cx, word16 dx, byte al, selector ds)
{
	selector ds_42;
	word16 bp_43 = fn0800_229B(fp - 0x001A, (byte) ax, ds, out ds_42);
	Mem46[ds_42:bx + 0x0000:word16] = Mem0[ss:bp_43 - 0x0014:word16];
	Mem49[ds_42:bx + 0x0002:word16] = Mem46[ss:bp_43 - 0x0012:word16];
	Mem51[ds_42:bx + 0x0004:word16] = Mem49[ss:bp_43 - 0x0010:word16];
	Mem53[ds_42:bx + 0x0006:word16] = Mem51[ss:bp_43 - 0x000E:word16];
	Mem55[ds_42:bx + 0x0008:word16] = Mem53[ss:bp_43 - 0x000A:word16];
	Mem57[ds_42:bx + 0x000A:word16] = Mem55[ss:bp_43 - 0x0008:word16];
	word16 ax_58 = Mem57[ss:bp_43 - 0x0002:word16];
	Mem65[ds_42:bx + 0x000C:word16] = DPB(ax_58, (byte) ax_58 & 0x01, 0, 8);
	Mem67[ds_42:cx + 0x0006:word16] = Mem65[ss:bp_43 - 0x0006:word16];
	Mem69[ds_42:cx + 0x0000:word16] = Mem67[ss:bp_43 - 0x0004:word16];
	return ds_42;
}

word16 fn0800_2045(word16 ax, word16 cx, word16 dx, word16 bx, word16 wArg02)
{
	word16 di_16 = cx;
	word16 si_22 = dx;
	word16 cx_28 = wArg02 >>u 0x0001;
	while (cx_28 != 0x0000)
	{
		Mem36[bx:di_16 + 0x0000:word16] = Mem0[ax:si_22 + 0x0000:word16];
		si_22 = si_22 + 0x0002;
		di_16 = di_16 + 0x0002;
		cx_28 = cx_28 - 0x0001;
	}
	word16 cx_40 = cx_28 * 0x0002 + (wArg02 >>u 0x0001 <u 0x0000);
	while (cx_40 != 0x0000)
	{
		Mem46[bx:di_16 + 0x0000:byte] = Mem0[ax:si_22 + 0x0000:byte];
		si_22 = si_22 + 0x0001;
		di_16 = di_16 + 0x0001;
		cx_40 = cx_40 - 0x0001;
	}
	return cx_40;
}

void fn0800_211E(word16 ax, selector ds)
{
	if ((Mem0[ds:ax + 0x0007:byte] & 0x20) == 0x00 && fn0800_21FD(Mem0[ds:ax + 0x0008:word16]) != 0x0000)
	{
		Mem24[ds:ax + 0x0007:byte] = Mem0[ds:ax + 0x0007:byte] | 0x20;
		if ((Mem24[ds:ax + 0x0007:byte] & 0x07) == 0x00)
			Mem30[ds:ax + 0x0007:byte] = Mem24[ds:ax + 0x0007:byte] | 0x02;
	}
	return;
}

word16 fn0800_2141(word16 ax, word16 dx, word16 bx, selector ds)
{
	byte dh_119;
	word16 ax_39;
	byte al_102 = (byte) fn0800_2219(ax, ds);
	if ((al_102 & 0x80) != 0x00)
	{
		word16 dx_115 = __ror(__rcl(0x0000, 0x01, msdos_set_file_position(ax, 0x00000000, 0x02, DPB(dx_ax, 0x42, 8, 8))), 0x01);
		al_102 = 0x02;
		dh_119 = SLICE(dx_115, byte, 8);
		if (dx_115 < 0x0000)
		{
l0800_216C:
			word16 dx_62;
			ax_39 = fn0800_0CE0(al_102, dh_119, ds, out dx_62);
		}
		else
		{
l0800_2171:
			word16 ax_76;
			word16 dx_78 = 0x0000 - msdos_write_file(ax, bx, SEQ(ds, dx), out ax_76);
			dh_119 = SLICE(dx_78, byte, 8);
			if (dx_78 >= 0x0000)
			{
				if (ax_76 != bx)
				{
					word16 bx_98;
					fn0800_0780(0x000C, dx_78, ds, out bx_98);
				}
				ax_39 = ax_76;
			}
			else
				goto l0800_216C;
		}
	}
	else
		goto l0800_2171;
	return ax_39;
}

word16 fn0800_21A7(word16 ax, selector ds)
{
	word16 ax_28;
	if (ax <u Mem0[ds:0x022E:word16])
	{
l0800_21B3:
		fn0800_035A();
		Mem48[ds:0x043C:word16] = 0x0005;
		ax_28 = 0xFFFF;
	}
	else
	{
		word16 bx_52 = ax + 0x000F >>u 0x04;
		if (bx_52 == 0x0000)
			bx_52 = 0x1000;
		word16 ax_57 = ds;
		if (Mem0[ds:0x022A:byte] == 0x00)
		{
			bx_52 = bx_52 + (ss - Mem0[ds:0x0226:word16]);
			ax_57 = Mem0[ds:0x0226:word16];
		}
		word16 bx_66;
		if (0x0000 - msdos_resize_memory_block(ax_57, bx_52, out bx_66) == 0x0000)
		{
			ax_28 = Mem0[ds:0x0224:word16];
			Mem74[ds:0x0224:word16] = ax;
		}
		else
			goto l0800_21B3;
	}
	return ax_28;
}

word16 fn0800_21FD(word16 ax)
{
	word16 ax_23;
	word16 dx_14;
	msdos_ioctl_get_device_info(ax, out dx_14);
	if ((dl & 0x80) != 0x00)
		ax_23 = 0x0001;
	else
		ax_23 = 0x0000;
	return ax_23;
}

word16 fn0800_2219(word16 ax, selector ds)
{
	word16 ax_19;
	if (ax >=u Mem0[ds:0x039C:word16])
		ax_19 = 0x0000;
	else
	{
		if (ax <= 0x0005)
		{
			word16 bx_46 = Mem0[ds:0x03C6:word16] + (ax << 0x0001);
			if ((Mem0[ds:bx_46 + 0x0001:byte] & 0x40) == 0x00)
			{
				Mem51[ds:bx_46 + 0x0001:byte] = Mem0[ds:bx_46 + 0x0001:byte] | 0x40;
				if (fn0800_21FD(ax) != 0x0000)
				{
					word16 bx_59 = Mem51[ds:0x03C6:word16] + (ax << 0x0001);
					Mem61[ds:bx_59 + 0x0001:byte] = Mem51[ds:bx_59 + 0x0001:byte] | 0x20;
				}
			}
		}
		ax_19 = SEQ(ds, Mem0[ds:0x03C6:word16])[ax * 0x0002];
	}
	return ax_19;
}

void fn0800_2260(word16 ax, byte dl, byte dh, selector ds)
{
	SEQ(ds, Mem0[ds:0x03C6:word16])[ax * 0x0002] = DPB(dx, dh | 0x40, 8, 8);
	return;
}

word16 fn0800_229B(word16 dx, byte al, selector ds, ptr16 dsOut)
{
	*dsOut = ds;
	fn0800_24D4(dx, ds, (byte) ax);
	return bp;
}

void fn0800_24D4(word16 ax, word16 dx, byte bl)
{
	word16 cx_26;
	word16 dx_27;
	word16 bx_28;
	word16 bp_29;
	word16 si_30;
	word16 di_31;
	selector es_32;
	selector ds_33;
	word16 ax_34 = fn0800_2517(ax, dx, out cx_26, out dx_27, out bx_28, out bp_29, out si_30, out di_31, out es_32, out ds_33);
	Mem36[ss:fp - 0x000A:word16] = bx_28;
	Mem39[ss:fp - 0x000C:word16] = ds_33;
	Mem41[ss:fp - 0x000E:word16] = bp_29;
	word16 bx_16 = DPB(bx, 0x00, 8, 8);
	ptr32 ds_bx_43 = Mem41[ss:fp - 0x0008:segptr32];
	Mem47[ss:fp - 0x0010:word16] = cond((bx_16 << 0x0001) + bx_16 + 0x2539);
	selector ds_44 = SLICE(ds_bx_43, selector, 16);
	word16 bx_45 = (word16) ds_bx_43;
	Mem48[ds_44:bx_45 + 0x0012:word16] = Mem47[ss:fp - 0x0010:word16];
	Mem50[ds_44:bx_45 + 0x0000:word16] = ax_34;
	Mem51[ds_44:bx_45 + 0x0004:word16] = cx_26;
	Mem52[ds_44:bx_45 + 0x0006:word16] = dx_27;
	Mem53[ds_44:bx_45 + 0x000A:word16] = si_30;
	Mem54[ds_44:bx_45 + 0x000C:word16] = di_31;
	Mem55[ds_44:bx_45 + 0x0008:word16] = Mem54[ss:fp - 0x000E:word16];
	Mem57[ds_44:bx_45 + 0x000E:word16] = Mem55[ss:fp - 0x000C:word16];
	Mem59[ds_44:bx_45 + 0x0002:word16] = Mem57[ss:fp - 0x000A:word16];
	Mem61[ds_44:bx_45 + 0x0010:word16] = es_32;
	return;
}

word16 fn0800_2517(word16 ax, word16 dx, ptr16 cxOut, ptr16 dxOut, ptr16 bxOut, ptr16 bpOut, ptr16 siOut, ptr16 diOut, ptr16 esOut, ptr16 dsOut)
{
	word16 cx_16;
	*cxOut = Mem0[dx:ax + 0x0004:word16];
	word16 dx_17;
	*dxOut = Mem0[dx:ax + 0x0006:word16];
	word16 si_18;
	*siOut = Mem0[dx:ax + 0x000A:word16];
	word16 di_19;
	*diOut = Mem0[dx:ax + 0x000C:word16];
	word16 bp_20;
	*bpOut = Mem0[dx:ax + 0x0008:word16];
	selector es_21;
	*esOut = Mem0[dx:ax + 0x0010:selector];
	word16 bx_22;
	*bxOut = Mem0[dx:ax + 0x0002:word16];
	selector ds_23;
	*dsOut = Mem0[dx:ax + 0x000E:word16];
	return Mem0[dx:ax + 0x0000:word16];
}

