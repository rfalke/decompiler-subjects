// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_093/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(int16 Eq_29::*di, byte ah, Eq_29 * ds)
{
	byte al_18 = 0x12;
	word16 ax_4 = DPB(ax, 0x12, 0, 8);
	while (true)
	{
		bios_video_set_mode(al_18);
		Eq_12 rLoc2_21 = sin(rLoc2 * (real64) ax_4);
		Mem28[ds:di + 0x0000:int16] = (int16) (sin(rLoc2_21 * 240 * 49) * (rLoc2_21 * 240) + 240);
		Mem37[ds:di + 0x0000:int16] = (int16) (rLoc2_21 * 240 * cos((rLoc2_21 * 240) * 40) + 240);
		rLoc2.u1 = 1;
		al_18 = 0x01;
	}
}

