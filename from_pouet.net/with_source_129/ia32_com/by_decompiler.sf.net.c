// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_129/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, segptr32 Eq_14::*bx, byte Eq_14::*si, byte ah, Eq_14 * ds)
{
	bios_video_set_mode(0x13);
	byte al_15 = 0x13;
	word16 ax_14 = DPB(ax, 0x13, 0, 8);
	Eq_13 * es_9 = SLICE(ds->*bx, selector, 16);
	while (true)
	{
		real64 rLoc1_24 = (real64) ds->w0139;
		real64 rLoc3_26 = (real64) cx;
		real64 rLoc2_25 = (real64) ds->w0137;
		real64 rLoc4_29 = (real64) ax_14 / rLoc1_24 + rLoc3_26;
		real64 rLoc4_31 = cos(rLoc4_29);
		real64 rLoc5_32 = sin(rLoc4_29);
		int16 wLoc04_46 = (int16) (rLoc1_24 + (rLoc2_25 + (rLoc4_31 * cos((rLoc3_26 * rLoc2_25) / rLoc1_24)) * rLoc2_25));
		ds->*si = ds->*si + ah;
		SEQ(es_9, wLoc04_46)[(int16) (rLoc5_32 * rLoc1_24 + rLoc1_24) * 0x0140] = al_15;
		cx = cx - 0x0001;
		if (cx != 0x0000)
			continue;
		ax_14 = ax_14 + 0x0001;
		al_15 = (byte) ax_14;
		ah = SLICE(ax_14, byte, 8);
	}
}

