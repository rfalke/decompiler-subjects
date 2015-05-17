// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_290/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

real64 fn0C00_0100(word16 bx, Eq_31 * ds)
{
	bios_video_set_mode(0x13);
	__outb(0x03C8, 0x00);
	word16 ax_147 = 0x0000;
	byte al_14 = 0x00;
	do
	{
		__outb(0x03C9, al_14);
		__outb(0x03C9, al_14);
		__outb(0x03C9, al_14);
		al_14 = al_14 + 0x01;
		ax_147 = DPB(ax_147, al_14, 0, 8);
	} while (al_14 != 0x00);
	Eq_30 rLoc1_159 = ds->t01F4;
	do
	{
		int16 bx_52 = bx + 0x0001;
		Eq_128 Eq_127::*di_145 = &Eq_127::t0000;
		bx = bx_52 + 0x0001;
		byte bl_54 = (byte) (bx_52 + 0x0001);
		int16 dx_152 = 0x0032;
		do
		{
			ds->w020A = dx_152;
			int16 cx_148 = 0x0050;
			do
			{
				real64 rLoc2_76 = (real64) ds->w020A;
				ds->w0208 = cx_148;
				real64 rLoc3_78 = (real64) ds->w0208;
				Eq_45 rLoc4_79 = ds->t01F8;
				real64 rLoc5_81 = sin(rLoc2_76);
				real64 rLoc6_83 = cos(rLoc2_76);
				real64 rLoc3_96 = rLoc3_78 * rLoc5_81;
				real64 rLoc7_88 = rLoc4_79 * rLoc6_83 - rLoc5_81 * rLoc5_81;
				real64 rLoc4_100 = rLoc4_79 * rLoc6_83 + rLoc3_96;
				Eq_63 rLoc4_112 = rLoc4_100 / (rLoc7_88 / (rLoc2_76 / sqrt((rLoc3_96 * rLoc3_96 + rLoc7_88 * rLoc7_88) + rLoc4_100 * rLoc4_100)));
				Eq_74 rLoc6_118 = ds->t01EC;
				real64 rLoc5_122 = sqrt(rLoc6_118 * rLoc6_118) / (rLoc7_88 * rLoc7_88 + rLoc4_112 * rLoc4_112);
				ds->w0200 = (int16) (ds->t01FC / rLoc5_122);
				ds->t0204 = (int16) (rLoc4_112 + (real64) ds->w0202);
				ds->t0206 = (int16) (atan(rLoc2_76 * ((rLoc5_122 * rLoc4_112) * rLoc7_88), rLoc7_88) * ds->t01F0);
				Eq_109 ax_138 = DPB(ax_147, ds->t0206 - bl_54 ^ ds->t0204, 0, 8) *s ds->w0200;
				word16 ax_142 = DPB(ax_138 >>u 0x000A, (byte) (ax_138 >>u 0x000A), 8, 8);
				(0xA000->*di_145).w0140 = ax_142;
				(0xA000->*di_145).w0000 = ax_142;
				di_145 = PTRADD(di_145,2);
				ax_147 = DPB(ax_142, 0x00, 8, 8);
				cx_148 = cx_148 - 0x0001;
			} while (cx_148 != 0xFFB0);
			di_145 = di_145 + 1;
			dx_152 = dx_152 - 0x0001;
		} while (dx_152 != 0xFFCE);
		ds->w0202 = ds->w0202 + 0x0005;
		if (bx_52 >= 0xFF9D)
			rLoc1_159 = rLoc1_159 + ds->t01F4;
		byte al_160 = __inb(0x60);
		ax_147 = DPB(ax_147, al_160, 0, 8);
	} while (al_160 != 0x01);
	return rLoc1_159;
}

