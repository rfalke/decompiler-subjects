// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_212/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

real64 fn0C00_0100(word16 bp, byte ch, Eq_80 * ds, ptr16 rLoc1Out)
{
	bios_video_set_mode(0x13);
	__outb(0x03D4, 0x09);
	__outb(0x03D5, 0x00);
	__outb(0x03D5, 0x06);
	__outb(0x03D6, 0x01);
	__outb(0x03C8, 0x00);
	word16 ax_123 = 0x0000;
	int8 al_100 = 0x00;
	word16 dx_118 = 0x03C9;
	do
	{
		cx = DPB(cx, 0x03, 0, 8);
		do
		{
			uint8 cl_337 = (byte) (cx - 0x0001);
			if ((al_100 & 0x40) != 0x00)
			{
				al_100 = al_100 & 0x3F;
				cl_337 = cl_337 >>u 0x01 ^ 0x01;
			}
			Eq_34 al_103 = al_100 << cl_337;
			Eq_37 al_104 = al_103 >>u 0x01;
			if (al_103 >>u 0x01 >u 0x3F)
				al_104.u1 = 0x3F;
			__outb(dx_118, al_104);
			ax_123 = ax_341;
			al_100 = (byte) ax_341;
			cx = cx - 0x0001;
			word16 ax_341 = ax_123;
		} while (cx != 0x0000);
		al_100 = al_100 + 0x01;
		ax_123 = DPB(ax_341, al_100 + 0x01, 0, 8);
	} while (al_100 >= 0x01);
	word16 cx_139 = DPB(cx, 0xC8, 0, 8);
	Eq_77 Eq_80::*di_140 = &Eq_80::t0000;
	real64 rLoc2_146 = (real64) ds->w01F8;
	do
	{
		real64 rLoc3_158 = (real64) ds->w01F6;
		word16 dx_159 = 0x0140;
		do
		{
			real64 rLoc4_165 = rLoc3_158 * rLoc3_158;
			Eq_87 rLoc4_171 = sqrt(rLoc4_165 + rLoc4_165 * rLoc4_165) / (real64) ds->w01F6 + ds->t01F2;
			(0x7000->*di_140).w0000 = (int16) (rLoc4_171 / rLoc4_171 + rLoc3_158);
			(ds->*di_140).w01F8 = (int16) (rLoc2_146 / rLoc4_171 + rLoc2_146);
			rLoc3_158 = rLoc3_158 + 1;
			di_140 = di_140 + 1;
			dx_159 = dx_159 - 0x0001;
		} while (dx_159 != 0x0000);
		rLoc2_146 = rLoc2_146 + 1;
		cx_139 = cx_139 - 0x0001;
	} while (cx_139 != 0x0000);
	do
	{
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		Eq_138 * es_220 = 0xA000;
		Eq_138 * gs_224 = 0x8000;
		Eq_142 Eq_138::*di_226 = &Eq_138::t0000;
		Eq_144 Eq_80::*si_229 = &Eq_80::t0000;
		cups16 cx_230 = 0x0190;
		byte cl_231 = 0x90;
		do
		{
			word16 dx_248 = 0x0140;
			byte dl_249 = 0x40;
			if ((cl_231 & 0x01) != 0x00)
			{
				si_229 = si_229 - 0x0140;
				goto l0C00_01A2;
			}
l0C00_01A2:
			do
			{
				word16 ax_269 = DPB(ax_123, (ds->*si_229).b01F8, 8, 8) + bp;
				uint8 al_272 = (byte) ax_269 | SLICE(ax_269, byte, 8);
				Eq_161 al_273 = al_272 >>u 0x01;
				ax_123 = DPB(ax_269, al_272 >>u 0x01, 0, 8);
				if ((cx_230 >=u 0x018D || cx_230 <=u 0x0004) && (dl_249 & 0x04) == 0x00)
				{
					ax_123 = 0x0000;
					al_273.u1 = 0x00;
				}
				(gs_224->*di_226).t0000 = al_273;
				(es_220->*di_226).t0000 = al_273;
				di_226 = di_226 + 1;
				if (di_226 == &Eq_138::t0000)
				{
					es_220 = 0xB000;
					gs_224 = 0x9000;
				}
				dx_248 = dx_248 - 0x0001;
				si_229 = si_229 + 1;
				dl_249 = (byte) dx_248;
			} while (dx_248 != 0x0000);
			cx_230 = cx_230 - 0x0001;
			bp = ~bp;
			cl_231 = (byte) cx_230;
		} while (cx_230 != 0x0000);
		ds->b01AE = dl_249;
		word16 ax_306 = DPB(ax_123, __inb(0x60), 0, 8);
		bp = bp + 0x0101;
		ax_123 = ax_306 - 0x0001;
	} while (ax_306 != 0x0001);
	return rLoc2_146;
}

