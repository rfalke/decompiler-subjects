// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_331/m68k_amiga/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn00001000(word32 d0, word32 d2, word32 d4, word32 d5)
{
	word32 a6_3 = Mem0[0x00000004:word32];
	word32 d0_5 = DPB(d0, 0xA8C0, 0, 16);
	(a6_3 + -198)();
	if (false)
		return;
	else
	{
		word32 a5_87 = 0x00DFF006;
		Mem89[a5_87 + 148:word16] = 0x4000;
		word32 a4_92 = 0x00001180;
		word16 v15_95 = (word16) (d0_5 + 0x000006C4);
		Mem96[a4_92 + 6:word16] = v15_95;
		word32 d0_112 = __swap(d0_5 + 0x000006C4);
		word16 v19_98 = (word16) d0_112;
		Mem99[a4_92 + 2:word16] = v19_98;
		word32 a1_111 = d0_5;
		word32 d4_100 = DPB(d4, 0x018F, 0, 16);
		do
		{
			d5 = DPB(d5, 0x01AF, 0, 16);
			do
			{
				word16 v22_118 = (word16) d4_100;
				word16 v25_123 = (word16) d5;
				word32 d1_124 = DPB(0x00010002, v25_123, 0, 16);
				word16 v23_120 = (word16) DPB(d0_112, v22_118, 0, 16) - 0x01B0;
				word16 v26_125 = (word16) d1_124 - 0x01C0;
				word32 d0_122 = DPB(d0_112, v23_120, 0, 16) *u (word16) d4_100;
				word16 v27_128 = (word16) d0_122 + (word16) (DPB(d1_124, v26_125, 0, 16) *u (word16) d5);
				word16 v28_131 = (word16) DPB(d0_122, v27_128, 0, 16) & 0x0800;
				d0_112 = DPB(d0_122, v28_131, 0, 16);
				if (v28_131 != 0x0000)
				{
					word32 d2_254 = DPB(d2, (word16) d5, 0, 16);
					d0_112 = DPB(d0_122, (word16) DPB(d0_122, (word16) d5, 0, 16) >>u 0x0003, 0, 16);
					d2 = DPB(d2_254, (byte) DPB(d2_254, -(byte) d2_254, 0, 8) - 0x01, 0, 8);
					__bset(Mem99[a1_111 + d0_112:byte], d2, out Mem99[a1_111 + d0_112:byte]);
				}
				d5 = d5 - 0x00000001;
			} while (d5 != 0xFFFFFFFF);
			a1_111 = a1_111 + 0x00000036;
			d4_100 = d4_100 - 0x00000001;
		} while (d4_100 != 0xFFFFFFFF);
		word16 v35_148 = (word16) (d0_5 + 0x00005460);
		Mem149[a4_92 + 22:word16] = v35_148;
		word16 v36_151 = (word16) __swap(d0_5 + 0x00005460);
		Mem152[a4_92 + 18:word16] = v36_151;
		word32 a0_153 = 0x00001058;
		word32 a1_147 = d0_5 + 0x00005460;
		word32 a2_154 = a0_153;
		word32 d6_155 = 4;
		a0_158 = a0_153;
		do
		{
			word32 a0_158;
			word32 v40_160 = Mem152[a0_158 + 0x00000000:word32];
			Mem161[a1_147 + 7960:word32] = v40_160;
			word32 v41_162 = Mem161[a0_158 + 0x00000000:word32];
			Mem165[a1_147 + 8014:word32] = v41_162;
			a0_158 = a0_158 + 0x00000004;
			a1_147 = a1_147 + 0x0000006C;
			d6_155 = d6_155 - 0x00000001;
		} while (d6_155 != 0xFFFFFFFF);
		Mem170[a5_87 + 122:word32] = a4_92;
		word32 a1_171 = a0_153;
		word32 d1_172 = 63;
		do
		{
			a2_154 = a2_154 - 0x00000001;
			byte v44_178 = Mem170[a2_154 + 0x00000000:byte];
			Mem179[a1_171 + 0x00000000:byte] = v44_178;
			a1_171 = a1_171 + 0x00000001;
			d1_172 = d1_172 - 0x00000001;
		} while (d1_172 != 0xFFFFFFFF);
		word32 d5_183 = 32;
		do
		{
			byte v45_192 = Mem179[a5_87 + 0x00000000:byte] - 0xE0;
			if (v45_192 != 0x00)
				continue;
			do
				byte v46_195 = Mem179[a5_87 + 0x00000000:byte] - 0xF0;
			while (v46_195 != 0x00);
			byte v47_198 = (byte) d6_155 + 0x01;
			word32 d6_199 = DPB(0x00000003, v47_198, 0, 8);
			word16 v48_200 = (word16) d6_199 & 0x007F;
			d6_155 = DPB(d6_199, v48_200, 0, 16);
			word32 a0_202 = 0x00001018;
			byte v49_204 = Mem179[a0_202 + d6_155:byte];
			word32 d0_205 = (word32) v49_204;
			byte v50_206 = (byte) d0_205;
			word32 d1_207 = DPB(0x0000003E, v50_206, 0, 8);
			byte v52_210 = -(byte) d1_207;
			byte v53_212 = (byte) DPB(d1_207, v52_210, 0, 8) - 0x01;
			byte v54_214 = (byte) DPB(d1_207, v53_212, 0, 8) << 0x04;
			byte v55_216 = (byte) DPB(d1_207, v54_214, 0, 8);
			Mem217[a4_92 + 27:byte] = v55_216;
			byte v56_219 = (byte) d5_183 + 0x01;
			word32 d5_220 = DPB(0x00000020, v56_219, 0, 8);
			word16 v57_221 = (word16) d5_220 & 0x007F;
			d5_183 = DPB(d5_220, v57_221, 0, 16);
			word16 v51_208 = (word16) d0_205 >>u 0x0003;
			byte v58_223 = Mem217[a0_202 + d5_183:byte];
			word16 v59_228 = (word16) d0_5 + (word16) (DPB(d0_205, v51_208, 0, 16) + (word32) v58_223 *u 0x0036);
			word32 d2_229 = DPB(d0, v59_228, 0, 16);
			word16 v60_232 = (word16) (d2_229 + 0x00000002);
			Mem233[a4_92 + 14:word16] = v60_232;
			word32 d2_234 = __swap(d2_229 + 0x00000002);
			word16 v61_235 = (word16) d2_234;
			Mem236[a4_92 + 10:word16] = v61_235;
			byte Z_238 = __btst(Mem236[0x00BFE001:byte], 0x0006);
		} while (Z_238);
		Mem240[a5_87 + 148:word16] = 0xC000;
		(a6_3 + -210)();
		Mem246[a5_87 + 122:word32] = Mem240[Mem240[a6_3 + 156:word32] + 38:word32];
		return;
	}
}

