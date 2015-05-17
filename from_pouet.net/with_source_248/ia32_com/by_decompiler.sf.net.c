// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_248/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 ax, word16 dx, word16 bx, byte cl, selector es)
{
	word16 di_14 = 0x0200;
	word16 cx_15 = DPB(cx, 0x10, 8, 8);
	while (cx_15 != 0x0000)
	{
		Mem12[es:di_14 + 0x0000:word16] = ax;
		di_14 = di_14 + 0x0002;
		cx_15 = cx_15 - 0x0001;
	}
	bios_video_set_mode(0x03);
	word16 ax_19 = DPB(ax, 0x03, 0, 8);
	word16 bp_111 = 0x06D1;
	byte cl_23 = 0xFF;
	word16 cx_100 = DPB(cx_15, 0xFF, 0, 8);
	word16 si_28 = Mem0[bx:0x046C:word16];
	do
	{
		word16 si_46 = __rcl(si_28 + 0x0001, cl_23, C) + dx;
		word32 dx_ax_51 = SEQ(0x0000, si_46);
		word16 di_59 = dx_ax_51 % 0x06D1 + 0x0251;
		si_28 = ax_19;
		dx = dx_ax_51 % 0x06D1;
		ax_19 = DPB(SEQ(dx_ax_51 % 0x06D1, si_46) /u 0x06D1, 0x01, 0, 8);
		C = cond(Mem0[cs:di_59 + 0x0000:byte] - 0x01);
		if (Mem0[cs:di_59 + 0x0000:byte] == 0x01)
			continue;
		Mem67[es:di_59 + 0x0000:byte] = 0x01;
		cx_100 = cx_100 - 0x0001;
		cl_23 = (byte) cx_100;
	} while (cx_100 != 0x0000);
	word16 di_76 = 0x0000;
	word16 dx_103 = DPB(dx_ax_51 % 0x06D1, 0x19, 0, 8);
	do
	{
		cx_100 = DPB(cx_100, 0x50, 0, 8);
		while (cx_100 != 0x0000)
		{
			Mem98[0xB800:di_76 + 0x0000:word16] = 0x072D;
			di_76 = di_76 + 0x0002;
			cx_100 = cx_100 - 0x0001;
		}
		dx_103 = dx_103 - 0x0001;
		byte dl_105 = (byte) dx_103;
		byte dh_106 = SLICE(dx_103, byte, 8);
	} while (dx_103 != 0x0000);
	do
	{
		byte ah_119;
		word16 di_118;
		word16 si_120 = fn0C00_01E8(dx_103, out di_118, out ah_119);
		bios_video_set_cursor_position(bh, dh_106, dl_105);
		word16 ax_123 = (int16) msdos_character_input_without_echo();
		byte al_124 = (byte) ax_123;
		word16 ax_127 = DPB(ax_123, al_124 - 0x31, 0, 8);
		if (al_124 == 0x31)
		{
			dx_103 = dx_103 - 0x0001;
			dl_105 = (byte) dx_103;
			dh_106 = SLICE(dx_103, byte, 8);
		}
		if (ax_127 == 0x0001)
		{
			dh_106 = dh_106 + 0x01;
			dx_103 = DPB(dx_103, dh_106, 8, 8);
		}
		if (ax_127 == 0x0002)
		{
			dx_103 = dx_103 + 0x0001;
			dl_105 = (byte) dx_103;
			dh_106 = SLICE(dx_103, byte, 8);
		}
		word16 ax_151 = ax_127 - 0x0003;
		if (ax_127 == 0x0003)
			ax_151 = fn0C00_0181(dx_103, bp_111, bh, 0xB800, cs, out bp_111, out si_120, out di_118, out dh_106, out bh);
		word16 ax_163 = ax_151 - 0x0001;
		if (ax_163 == 0x0000)
		{
			dh_106 = dh_106 - 0x01;
			dx_103 = DPB(dx_103, dh_106, 8, 8);
		}
		byte al_173 = (byte) (ax_163 - 0x0001);
		if (ax_163 == 0x0001)
		{
			byte al_185 = Mem67[cs:si_120 + 0x0000:byte];
			word16 si_188 = si_120 + 0x0001;
			if ((al_185 & 0x40) != 0x00)
				continue;
			Mem193[cs:si_188 - 0x0001:byte] = Mem67[cs:si_188 - 0x0001:byte] ^ 0x80;
			byte al_196 = al_185 >> 0x07 & 0x0A;
			Mem201[0xB800:di_118 + 0x0000:byte] = al_196 + 0x23;
			al_173 = al_196 + 0x23;
			goto l0C00_017B;
		}
l0C00_017B:
	} while (al_173 != 0xE5);
	msdos_terminate_program20();
}

word16 fn0C00_0181(word16 dx, word16 bp, byte bh, selector es, selector ds, ptr16 bpOut, ptr16 siOut, ptr16 diOut, ptr16 dhOut, ptr16 bhOut)
{
	*siOut = si;
	*bhOut = bh;
	*bpOut = bp;
	*dhOut = dh;
	*diOut = di;
	if (dl <u 0x50 && dh <u 0x19)
	{
		byte ah_68;
		word16 di_110;
		word16 si_69 = fn0C00_01E8(dx, out di_110, out ah_68);
		word16 ax_73 = DPB(ax, Mem0[ds:si_69 + 0x0000:byte], 0, 8);
		word16 si_74;
		*siOut = si_69 + 0x0001;
		word16 ax_109 = ax_73 & 0x00FF;
		if ((ax_73 & 0x00FF) == 0x0000)
		{
			Mem132[ds:si_69 + 0x0000:byte] = Mem0[ds:si_69 + 0x0000:byte] | 0x40;
			byte al_135 = Mem132[ds:si_69 - 0x0001:byte] + Mem132[ds:si_69 + 0x0001:byte];
			word16 ax_136 = DPB(ax_73 & 0x00FF, al_135, 0, 8);
			word16 bx_139 = DPB(bx, 0x50, 0, 8);
			do
			{
				al_135 = al_135 + Mem132[ds:bx_139 + (si_69 + 0x0001):byte] + Mem132[ds:(bx_139 - 0x0001) + (si_69 + 0x0001):byte] + Mem132[ds:(bx_139 - 0x0002) + (si_69 + 0x0001):byte];
				bx_139 = -bx_139;
				ax_136 = DPB(ax_255, al_135, 0, 8);
				byte bh_149 = SLICE(bx_139, byte, 8);
				*bhOut = bh_149;
				word16 ax_255 = ax_136;
			} while (bx_139 < 0x0000);
			if ((al_135 & 0x0F) == 0x00)
			{
				Mem173[es:di_110 + 0x0000:byte] = 0x20;
				word16 bp_178;
				word16 si_179;
				word16 di_180;
				byte dh_181;
				byte bh_182;
				fn0C00_0181(dx - 0x0001, bp, bh_149, es, ds, out bp_178, out si_179, out di_180, out dh_181, out bh_182);
				word16 dx_185 = DPB(dx - 0x0001, dh_181 - 0x01, 8, 8);
				word16 bp_187;
				word16 si_188;
				word16 di_189;
				byte dh_190;
				byte bh_191;
				fn0C00_0181(dx_185, bp_178, bh_182, es, ds, out bp_187, out si_188, out di_189, out dh_190, out bh_191);
				word16 bp_196;
				word16 si_197;
				word16 di_198;
				byte dh_199;
				byte bh_200;
				fn0C00_0181(dx_185 + 0x0001, bp_187, bh_191, es, ds, out bp_196, out si_197, out di_198, out dh_199, out bh_200);
				word16 bp_205;
				word16 si_206;
				word16 di_207;
				byte dh_208;
				byte bh_209;
				fn0C00_0181(dx_185 + 0x0002, bp_196, bh_200, es, ds, out bp_205, out si_206, out di_207, out dh_208, out bh_209);
				word16 dx_212 = DPB(dx_185 + 0x0002, dh_208 + 0x01, 8, 8);
				word16 bp_214;
				word16 si_215;
				word16 di_216;
				byte dh_217;
				byte bh_218;
				fn0C00_0181(dx_212, bp_205, bh_209, es, ds, out bp_214, out si_215, out di_216, out dh_217, out bh_218);
				word16 dx_221 = DPB(dx_212, dh_217 + 0x01, 8, 8);
				word16 bp_223;
				word16 si_224;
				word16 di_225;
				byte dh_226;
				byte bh_227;
				fn0C00_0181(dx_221, bp_214, bh_218, es, ds, out bp_223, out si_224, out di_225, out dh_226, out bh_227);
				word16 bp_232;
				word16 si_233;
				word16 di_234;
				byte dh_235;
				byte bh_236;
				fn0C00_0181(dx_221 - 0x0001, bp_223, bh_227, es, ds, out bp_232, out si_233, out di_234, out dh_235, out bh_236);
				word16 si_243;
				byte dh_245;
				byte bh_246;
				ax_109 = fn0C00_0181(dx_221 - 0x0002, bp_232, bh_236, es, ds, out bp, out si_243, out di_110, out dh_245, out bh_246);
			}
			else
			{
				byte al_250 = (al_135 & 0x0F) + 0x30;
				Mem253[es:di_110 + 0x0000:byte] = al_250;
				ax_109 = DPB(ax_255, al_250, 0, 8);
				*diOut = di_110 + 0x0001;
			}
			word16 bp_169 = bp - 0x0001;
			*bpOut = bp_169;
			if (bp_169 != 0x0000)
			{
l0C00_01E0:
				word16 ax_111 = ax_109 - 0x0001;
				if (ax_111 == 0x0001)
				{
					Mem120[es:di_110 + 0x0000:byte] = 0x2A;
					word16 di_122 = di_110 + 0x0001;
					Mem125[es:di_122 + 0x0000:byte] = 0x2A;
					word16 di_126;
					*diOut = di_122 + 0x0001;
l0C00_01E6:
					msdos_terminate_program20();
				}
				else
				{
					byte dh_129;
					*dhOut = SLICE(dx, byte, 8);
l0C00_01D9:
					return ax;
				}
			}
			else
				goto l0C00_01E6;
		}
		else
			goto l0C00_01E0;
	}
	else
		goto l0C00_01D9;
}

word16 fn0C00_01E8(word16 dx, ptr16 diOut, ptr16 ahOut)
{
	word16 ax_4 = (int16) dh;
	word16 ax_10 = ax_4 *s 0x0050 + dx;
	word16 di_8;
	*diOut = (ax_4 *s 0xFF50 + dx) * 0x0002;
	byte ah_19;
	*ahOut = SLICE(si, byte, 8);
	return DPB(ax_10, SLICE(ax_10, byte, 8) - dh, 8, 8) + 0x0251;
}

