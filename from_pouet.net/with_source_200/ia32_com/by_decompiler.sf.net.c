// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_200/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

real64 fn0C00_0100(word16 cx, word16 bp, Eq_70 * ds)
{
	bios_video_set_mode(0x13);
	word16 cx_16 = cx + 0x0001;
	uint8 cl_17 = (byte) (cx + 0x0001);
	do
	{
		__outb(0x03C8, cl_17);
		Eq_18 al_12 = cl_17 >>u 0x02;
		__outb(0x03C9, al_12);
		__outb(0x03C9, al_12.u1);
		__outb(0x03C9, al_12.u1);
		cx_16 = cx_16 - 0x0001;
		cl_17 = (byte) cx_16;
	} while (cx_16 != 0x0000);
	do
	{
		Eq_130 rLoc1_63 = (real64) 0x0040->w006C * ds->t01DA;
		ds->t01EC = cos(rLoc2) / (real64) ds->w01E2;
		ds->t01E8 = sin(rLoc1_63) / (real64) ds->w01E2;
		byte Eq_62::*di_103 = &Eq_62::b0000;
		Eq_69 rLoc1_171 = ds->t01DE;
		word16 cx_174 = 0x00C8;
		do
		{
			word16 cx_106 = 0x0140;
			rLoc2 = ds->t01DE;
			do
			{
				Eq_69 rLoc4_114 = rLoc2;
				word16 cx_115 = 0x001F;
				byte cl_116 = 0x1F;
				do
				{
					real64 rLoc7_130 = rLoc4_114 * rLoc4_114;
					real64 rLoc5_124 = ds->t01E8 + rLoc4_114 * rLoc3;
					Eq_69 rLoc6_132 = ds->t01EC + (rLoc7_130 + rLoc7_130);
					real64 rLoc5_127 = rLoc5_124 - rLoc5_124 * rLoc4_114;
					ds->dw01E4 = (int32) (rLoc5_127 * rLoc5_127 + rLoc6_132 * rLoc6_132);
					rLoc4_114 = rLoc6_132;
					rLoc3 = rLoc5_127;
					if (ds->dw01E4 > 0x00000064)
						break;
					cx_115 = cx_115 - 0x0001;
					cl_116 = (byte) cx_115;
				} while (cx_115 != 0x0000);
				0xA000->*di_103 = (byte) (((word16) ((cx_174 - 0x0064) *s (cx_106 - 0x00A0)) >> 0x0007 & 0x001F | DPB(cx_115, cl_116 ^ 0x1F, 0, 8) << 0x0004) + bp);
				di_103 = di_103 + 1;
				rLoc2 = rLoc2 + ds->t01D6;
				cx_106 = cx_106 - 0x0001;
			} while (cx_106 != 0x0000);
			rLoc1_171 = rLoc1_171 + ds->t01DA;
			cx_174 = cx_174 - 0x0001;
		} while (cx_174 != 0x0000);
		bp = bp - 0x0004;
	} while (__inb(0x60) != 0x01);
	return rLoc1_171;
}

