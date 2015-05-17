// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_274/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte bl, Eq_20 * ds)
{
	bios_video_set_mode(0x13);
	int16 Eq_20::*bx_19 = DPB(bx, 0xF0, 8, 8);
	int16 cx_10 = 0x0100;
	do
	{
		ss->w0200 = cx_10;
		ds->*bx_19 = (int16) (sin((real64) ss->w0200 * ds->t01F6) * ds->t01FA);
		bx_19 = bx_19 + 1;
		cx_10 = cx_10 - 0x0001;
	} while (cx_10 != 0x0000);
	__outb(0x03C8, 0x00);
	word16 bx_27 = 0x0000;
	word16 cx_33 = 0x0100;
	do
	{
		bcu8 al_203 = (byte) bx_27;
		byte ah_43 = SLICE(bx_27, byte, 8);
		if (al_203 >u 0x3F)
			al_203 = 0x3F;
		__outb(0x03C9, al_203);
		__outb(0x03C9, ah_43);
		__outb(0x03C9, (byte) bx_27 >>u 0x02);
		bx_27 = bx_27 + 0x0001;
		cx_33 = cx_33 - 0x0001;
	} while (cx_33 != 0x0000);
	do
	{
		Eq_71 ax_76 = ds->t0304;
		ds->t0302 = ax_76;
		ds->w0300 = ax_76 << 0x0008;
		Eq_80 Eq_88::*di_126 = &Eq_88::t0000;
		word16 cx_181 = 0x00C8;
		Eq_84 cl_182 = 0xC8;
		do
		{
			int16 ax_96 = (&ds->t0304)[(ds->w0300 >>u 0x0008) * 0x0002 / 0x0004];
			word16 bp_108 = (&ds->t0304)[DPB(ds->t0304, 0x00, 8, 8) * 0x0002 / 0x0004] + (&ds->t0304)[(DPB(Mem79[ds:0x0302:word16].u1, 0x00, 8, 8) * 0x0002) / 0x0004];
			word16 cx_121 = (ax_96 >> 0x0005) + 0x0080;
			int16 bp_113 = bp_108 + (bp_108 << 0x0001) + (bp_108 << 0x0002);
			word16 ax_117 = DPB(ax_96, cl_182, 0, 8);
			word16 dx_124 = 0x0140 - cx_121;
			while (cx_121 != 0x0000)
			{
				(0xA000->*di_126).t0000 = cl_182;
				di_126 = di_126 + 1;
				cx_121 = cx_121 - 0x0001;
			}
			word16 cx_133 = 0x0040;
			do
			{
				int8 al_143 = (byte) (bp_113 >> 0x0008 & 0x000F);
				byte al_144 = al_143 - 0x07;
				if (al_143 < 0x07)
					al_144 = 0x07 - al_143;
				(0xA000->*di_126).t0000 = (al_144 ^ 0x07) << 0x03;
				di_126 = di_126 + 1;
				bp_113 = bp_113 + 0x0055;
				cx_133 = cx_133 - 0x0001;
			} while (cx_133 != 0x0000);
			word16 cx_161 = dx_124 - 0x0040;
			Eq_84 al_164 = (byte) ax_117;
			while (cx_161 != 0x0000)
			{
				(0xA000->*di_126).t0000 = al_164;
				di_126 = di_126 + 1;
				cx_161 = cx_161 - 0x0001;
			}
			ds->t0302.u0 = Mem153[ds:0x0302:byte].u0;
			ds->w0300 = ds->w0300 + ds->w01FE;
			cx_181 = cx_181 - 0x0001;
			cl_182 = (byte) cx_181;
		} while (cx_181 != 0x0000);
		ds->t0304.u1 = Mem177[ds:0x0304:word16].u1;
		ds->w01FE = (&ds->t0304)[DPB(ds->t0304, 0x00, 8, 8) * 0x0002 / 0x0004] + 0x0160 + bp_113 >>u 0x0001;
	} while (__inb(0x60) != 0x01);
	return;
}

