// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_204/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

real64 fn0C00_0100(word16 bp, Eq_19 * ds)
{
	bios_video_set_mode(0x13);
	word16 cx_11 = 0x0800;
	uint8 cl_12 = 0x00;
	Eq_12 Eq_19::*di_10 = Eq_19::a01FC;
	Eq_14 rLoc1_19 = 0;
	do
	{
		rLoc2 = sin(rLoc2) * ds->t01ED;
		(ds->*di_10).dw0000 = (int32) rLoc2;
		rLoc1_19 = rLoc1_19 + ds->t01E9;
		__outb(0x03C8, cl_12);
		Eq_33 al_24 = cl_12 >>u 0x02;
		__outb(0x03C9, al_24 ^ 0x3F);
		__outb(0x03C9, al_24 ^ 0x3F);
		__outb(0x03C9, (al_24 ^ 0x3F) - 0x0E);
		cx_11 = cx_11 - 0x0001;
		di_10 = di_10 + 1;
		cl_12 = (byte) cx_11;
	} while (cx_11 != 0x0000);
	do
	{
		word16 di_115 = 0x0000;
		word16 cx_178 = 0x0140;
		do
		{
			ax = DPB(ax, (0x0C00->*((cx_178 + bp) + 0x0200 & 0x07FF)).b01FC, 8, 8);
			ds->t01F8 = ds->t01F4;
			word16 cx_105 = 0x00FE;
			byte cl_106 = 0xFE;
			Eq_80 si_107 = 0x00C7;
			do
			{
				word16 dx_132 = (word16) ((ds->b01F9 ^ ds->b01FB) & 0x1F ^ 0x3F);
				int16 cx_126 = DPB(cx_105, (cl_106 ^ 0xFF) + 0x01, 0, 8);
				Eq_80 bx_144 = 0xFFE3 - -(SEQ(SEQ(0x0000, dx_132 << 0x0008) % cx_126, dx_132 << 0x0008) / cx_126);
				byte bl_146 = (byte) bx_144;
				if (bx_144 <= si_107)
				{
					byte Eq_86::*di_196 = di_115 + (word16) (si_107 *u 0x0140);
					do
					{
						0xA000->*di_196 = bl_146;
						si_107 = si_107 - 0x0001;
						di_196 = di_196 + 1 - 0x0141;
					} while (bx_144 <= si_107);
				}
				ds->t01F8 = Mem109[ds:0x01F8:word16] + (int16) ((byte) ax);
				ds->w01FA = ds->w01FA + (int16) SLICE(ax, byte, 8);
				cx_105 = cx_105 - 0x0001;
				cl_106 = (byte) cx_105;
			} while (cx_105 != 0x0000);
			di_115 = di_115 + 0x0001;
			cx_178 = cx_178 - 0x0001;
		} while (cx_178 != 0x0000);
		ds->t01F4.u0 = Mem165[ds:0x01F4:word16].u0;
		bp = bp + 0x0001;
	} while (__inb(0x60) != 0x01);
	bios_video_set_mode(0x03);
	return rLoc1_19;
}

