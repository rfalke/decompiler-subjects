// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_210/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte bl, Eq_20 * ds)
{
	bios_video_set_mode(0x13);
	int16 Eq_20::*bx_20 = DPB(bx, 0xF0, 8, 8);
	int16 cx_10 = 0x0100;
	do
	{
		ss->w0200 = cx_10;
		ds->*bx_20 = (int16) (sin((real64) ss->w0200 * ds->t01EE) * ds->t01F2);
		bx_20 = PTRADD(bx_20,1) + 0x0001;
		cx_10 = cx_10 - 0x0001;
	} while (cx_10 != 0x0000);
	__outb(0x03C8, 0x00);
	byte ah_28 = 0x00;
	word16 bx_29 = 0x0000;
	uint8 bl_31 = 0x00;
	word16 cx_35 = 0x0100;
	do
	{
		__outb(0x03C9, bl_31 >>u 0x02);
		__outb(0x03C9, ah_28);
		bcu8 al_215 = (byte) bx_29;
		ah_28 = SLICE(bx_29, byte, 8);
		if (al_215 >u 0x3F)
			al_215 = 0x3F;
		__outb(0x03C9, al_215);
		bx_29 = bx_29 + 0x0001;
		bl_31 = (byte) bx_29;
		cx_35 = cx_35 - 0x0001;
	} while (cx_35 != 0x0000);
	do
	{
		Eq_76 ax_84 = ds->t0304;
		ds->t0302 = ax_84;
		ds->w0300 = ax_84 << 0x0008;
		do
			;
		while (((byte) __inw(0x03DA) & 0x08) != 0x00);
		do
			;
		while (((byte) __inw(0x03DA) & 0x08) == 0x00);
		Eq_101 Eq_109::*di_103 = &Eq_109::t0000;
		word16 cx_106 = 0x00C8;
		Eq_105 cl_107 = 0xC8;
		do
		{
			word16 bx_118 = (word16) ds->t0302;
			int16 ax_117 = (&ds->t0304)[(word16) ds->b0301 * 0x0002 / 0x0004];
			word16 bp_127 = (&ds->t0304)[(word16) ds->t0304 * 0x0002 / 0x0004] + (&ds->t0304)[(DPB(bx_118, (byte) bx_118 + 0x40, 0, 8) * 0x0002) / 0x0004];
			word16 cx_140 = (ax_117 >> 0x0005) + 0x0080;
			int16 bp_132 = bp_127 + (bp_127 << 0x0001) + (bp_127 << 0x0002);
			word16 ax_136 = DPB(ax_117, cl_107, 0, 8);
			word16 dx_143 = 0x0140 - cx_140;
			while (cx_140 != 0x0000)
			{
				(0xA000->*di_103).t0000 = cl_107;
				di_103 = di_103 + 1;
				cx_140 = cx_140 - 0x0001;
			}
			word16 cx_152 = 0x0040;
			do
			{
				int8 al_162 = (byte) (bp_132 >> 0x0008 & 0x000F);
				byte al_163 = al_162 - 0x07;
				if (al_162 < 0x07)
					al_163 = 0x07 - al_162;
				(0xA000->*di_103).t0000 = (al_163 ^ 0x07) << 0x03;
				di_103 = di_103 + 1;
				bp_132 = bp_132 + 0x0055;
				cx_152 = cx_152 - 0x0001;
			} while (cx_152 != 0x0000);
			word16 cx_180 = dx_143 - 0x0040;
			Eq_105 al_183 = (byte) ax_136;
			while (cx_180 != 0x0000)
			{
				(0xA000->*di_103).t0000 = al_183;
				di_103 = di_103 + 1;
				cx_180 = cx_180 - 0x0001;
			}
			ds->t0302.u0 = Mem172[ds:0x0302:byte].u0;
			ds->w0300 = ds->w0300 + ds->w01F6;
			cx_106 = cx_106 - 0x0001;
			cl_107 = (byte) cx_106;
		} while (cx_106 != 0x0000);
		ds->t0304.u1 = Mem196[ds:0x0304:word16].u1;
		ds->w01F6 = bp_132 >> 0x0001;
	} while (__inb(0x60) != 0x01);
	return;
}

