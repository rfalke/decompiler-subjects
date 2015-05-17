// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_163/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 bp, byte Eq_61::*di, Eq_83 * ds)
{
	bios_video_set_mode(0x13);
	word16 cx_16 = 0x0300;
	do
	{
		real64 rLoc1_21 = sin((real64) cx_16 * 21167);
		__outb(0x03C9, (byte) (int16) (rLoc1_21 * rLoc1_21 * 63));
		cx_16 = cx_16 - 0x0001;
	} while (cx_16 != 0x0000);
	do
	{
		word32 dx_ax_43 = SEQ(0x0000, di);
		real64 rLoc2_52 = (real64) (dx_ax_43 % 0x0140 - 0x00A0);
		real64 rLoc3_54 = rLoc2_52 * rLoc2_52;
		0xA000->*di = (byte) ((int16) (atan((real64) (SEQ(dx_ax_43 % 0x0140, di) /u 0x0140 - 0x0064), rLoc2_52) * 41 + (real64) ((int16) sqrt(rLoc3_54 + rLoc3_54 * rLoc3_54))) + bp);
		di = di + 1;
		cx_16 = cx_16 - 0x0001;
		if (cx_16 != 0x0000)
			continue;
		bp = bp - 0x0001;
	} while (__inb(0x60) != 0x01);
	bios_video_set_mode(0x03);
	msdos_display_string(ds, 0x017B);
	msdos_terminate_program20();
}

