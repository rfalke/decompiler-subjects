// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_070/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 bx, word16 si, byte ah, byte ch, Eq_13 * ds)
{
	bios_video_set_mode(0x13);
	int16 Eq_13::*si_11 = ~si;
	ds->*si_11 = DPB(cx, 0xCC, 0, 8);
	int16 ax_8 = DPB(ax, 0x13, 0, 8);
	ds->*si_11 = ds->*si_11 + ax_8;
	Eq_28 rLoc1_21 = (real64) (ds->*si_11);
	ds->*si_11 = ax_8;
	sin(rLoc1_21 / (real64) (ds->*si_11));
	ds->*si_11 = 0x0140;
}

