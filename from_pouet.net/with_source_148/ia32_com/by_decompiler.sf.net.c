// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_148/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

real64 fn0C00_0100(byte ah, byte ch, Eq_4 * ds)
{
	real64 rLoc1_4 = (real64) ds->w0108;
	bios_video_set_mode(0x13);
	byte al_10 = 0xFF;
	uint16 ax_12 = DPB(ax, 0xFF, 0, 8);
	do
	{
		__outb(0x03C8, al_10);
		__outb(0x03C9, al_10);
		byte al_22 = (byte) (ax_12 >>u 0x0002);
		__outb(0x03C9, al_22);
		__outb(0x03C9, al_22);
		ax_12 = ax_12 - 0x0001;
		al_10 = (byte) ax_12;
	} while (ax_12 != 0x0000);
	do
	{
		Eq_40 Eq_4::*si_58 = Eq_4::a0100;
		word16 cx_60 = DPB(cx, 0x02, 0, 8);
		do
		{
			real64 rLoc2_64 = sqrt((real64) (ds->*si_58).w0000);
			real64 rLoc2_66 = cos(rLoc2_64);
			(ds->*si_58).w0004 = (int16) (sin(rLoc2_64) * rLoc1_4 + rLoc1_4);
			(ds->*si_58).w0002 = (int16) (rLoc2_66 * rLoc1_4 + rLoc1_4);
			(ds->*si_58).w0000 = (ds->*si_58).w0000 + cx_60;
			si_58 = si_58 + 1;
			cx_60 = cx_60 - 0x0001;
		} while (cx_60 != 0x0000);
		byte Eq_117::*di_108 = &Eq_117::b0000;
		word16 bp_151 = 0x00C8;
		do
		{
			word16 bx_101 = 0x0140;
			do
			{
				byte cl_115 = 0x02;
				byte ch_116 = 0x00;
				word16 si_117 = 0x0100;
				do
				{
					Eq_87 Eq_4::*si_122 = si_117 + 0x0002;
					uint16 ax_125 = (ds->*si_122).w0000 - bx_101;
					uint16 ax_132 = (ds->*si_122).w0002 - bp_151;
					si_117 = &si_122->w0002;
					ch_116 = ch_116 ^ SLICE((word16) (ax_132 *u ax_132) + (word16) (ax_125 *u ax_125), byte, 8);
					cl_115 = cl_115 - 0x01;
				} while (cl_115 != 0x00);
				0xA000->*di_108 = ch_116;
				di_108 = di_108 + 1;
				bx_101 = bx_101 - 0x0001;
			} while (bx_101 != 0x0000);
			bp_151 = bp_151 - 0x0001;
		} while (bp_151 != 0x0000);
		cx = 0x0000;
	} while (__inb(0x60) != 0x01);
	return rLoc1_4;
}

