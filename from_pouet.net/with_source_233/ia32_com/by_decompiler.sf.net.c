// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_233/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_62 Eq_61::*bx, byte Eq_61::*bp, Eq_109 Eq_61::*di)
{
	bios_video_set_mode(0x13);
	Eq_7 ax_118 = DPB(ax, 0x20, 8, 8);
	__outw(0x03D4, ax_118);
	uint8 cl_17 = 0x00;
	do
	{
		__outb(0x03C9, cl_17 << 0x02);
		Eq_21 ch_27 = cl_17 >>u 0x04;
		__outb(0x03C9, (cl_17 & 0x0F) + ch_27 << 0x01);
		__outb(0x03C9, ch_27 << 0x02);
		ax_118 = DPB(ax_118, ch_27 << 0x02, 0, 8);
		cl_17 = cl_17 + 0x01;
	} while (cl_17 != 0x00);
	word16 cx_123 = 0x0028;
	Eq_45 cl_124 = 0x28;
	do
	{
		word16 ax_62 = (word16) (ax_118 *s 0x6261);
		Eq_7 dx_108 = ax_62 + 0x0001 + 0x0001;
		int8 dl_110 = (byte) (ax_62 + 0x0001);
		int8 dh_111 = SLICE(ax_62 + 0x0001, byte, 8);
		do
		{
			if (cl_124 >=u 0x26)
				Mem319[0x6000:bx + 0x0000:byte] = cl_124;
			uint16 ax_93 = dh_111 *s dh_111 + dl_110 *s dl_110;
			byte al_102 = (byte) (ax_93 >>u 0x0004);
			if (SLICE(ax_93 >>u 0x0004, byte, 8) != 0x00)
				al_102 = 0xFF;
			Mem106[0x6000:bx + 0x0000:byte] = Mem0[0x6000:bx + 0x0000:byte] + ~al_102;
			dx_108 = dx_108 + 0x0000;
			bx = PTRADD(bx,1);
			dl_110 = (byte) dx_108;
			dh_111 = SLICE(dx_108, byte, 8);
			byte bh_114 = SLICE(bx, byte, 8);
		} while (bx != &Eq_61::t0000);
		cx_123 = cx_123 - 0x0001;
		ax_118 = dx_108;
		cl_124 = (byte) cx_123;
	} while (cx_123 != 0x0000);
	word16 cx_127 = DPB(cx_123, 0x07, 0, 8);
	do
	{
		byte bl_139 = (0x6000->*di).b00FF + (0x6000->*di).b00FF;
		bx = DPB(bx, bl_139, 0, 8);
		uint16 ax_141 = DPB(ax_118, (0x6000->*di).b0000 + (0x6000->*di).b0001, 0, 8) + bx;
		(0x6000->*di).b0000 = (byte) (ax_141 >>u 0x0002);
		ax_118 = ax_141 >>u 0x0002;
		di = di + 1;
		if (di != &Eq_61::t0000)
			continue;
		cx_127 = cx_127 - 0x0001;
	} while (cx_127 != 0x0000);
	Mem155[ss:fp - 0x0002:word16] = 0xA000;
	Mem160[ss:fp - 0x0002:word16] = 0x7000;
	do
	{
		word16 si_177 = (word16) bh_114;
		uint16 ax_181 = SEQ(SEQ(0x0000, ax_118) % (si_177 + 0x0020), ax_118) /u (si_177 + 0x0020);
		word16 ax_187 = bp + ax_181;
		int8 Eq_61::*ax_192 = DPB(ax_187, (byte) ax_187, 8, 8);
		byte al_198 = Mem160[0x6000:ax_192 + 0x0000:byte] + Mem160[0x6000:bp + ax_192:byte];
		int16 ax_200 = (al_198 << 0x02) *s (al_198 << 0x02);
		word16 ax_207 = DPB(ax_200, Mem160[0x7000:DPB(bx, bl_139 + (SLICE(ax_200, byte, 8) >>u 0x02), 0, 8):byte], 8, 8);
		Mem216[0x7000:bx + 0x0000:byte] = (byte) (ax_207 & 0x0FF0) + SLICE(ax_207 & 0x0FF0, byte, 8);
		int8 al_217 = 0x6000->*ax_192;
		Eq_62 Eq_61::*bx_212 = bx;
		byte bh_214 = SLICE(bx, byte, 8);
		ax_118 = DPB(ax_207 & 0x0FF0, al_217 - 0x40, 8, 8);
		if (al_217 >= 0x40)
		{
			word32 dx_ax_271 = (word32) ax_118;
			word16 dx_272 = SLICE(dx_ax_271, word16, 16);
			bcu8 ah_273 = SLICE(dx_ax_271, byte, 8);
			ax_118 = (word16) dx_ax_271;
			bcu8 dh_275 = SLICE(dx_ax_271, byte, 24);
			int8 cl_278 = 0x6000->*ax_192;
			Eq_62 Eq_61::*di_280 = bx;
			do
			{
				uint8 al_290 = dh_275 + cl_278;
				Mem294[0x7000:bx_212 + 0x0000:byte] = al_290 >>u 0x04;
				Mem295[0x7000:di_280 + 0x0000:byte] = al_290 >>u 0x04;
				bh_214 = bh_214 + 0x01;
				ax_118 = DPB(ax_118, al_290 >>u 0x04, 0, 8);
				di_280 = di_280 - 0x0100;
				bx_212 = DPB(bx_212, bh_214, 8, 8);
				if (bh_214 == 0x00)
					break;
				dx_272 = dx_272 + (ax_181 << 0x0002);
				dh_275 = SLICE(dx_272, byte, 8);
			} while (dh_275 <u ah_273);
			bx_212 = bx;
		}
		bx = PTRADD(bx_212,1);
		bl_139 = (byte) bx;
		bh_114 = SLICE(bx, byte, 8);
		if (bx != &Eq_61::t0000)
			continue;
		do
		{
			word16 v35_249 = Mem216[0x7000:bx + 0x0000:byte];
			Mem250[0x7000:bx + 0x0000:byte] = 0x00;
			Mem254[0xA000:bx - 0x0060:byte] = v35_249;
			bx = PTRADD(bx,1);
			word16 ax_252 = (word16) v35_249;
			bl_139 = (byte) bx;
			bh_114 = SLICE(bx, byte, 8);
		} while (bx != &Eq_61::t0000);
		word16 ax_262 = DPB(ax_252, __inb(0x60), 0, 8);
		bp = bp + 1;
		ax_118 = ax_262 - 0x0001;
	} while (ax_262 != 0x0001);
	return;
}

