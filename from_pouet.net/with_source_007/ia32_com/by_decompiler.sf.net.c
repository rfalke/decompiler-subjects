// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_007/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(segptr32 Eq_12::*bx, word16 di, Eq_12 * ds)
{
	bios_video_set_mode(0x13);
	word16 ax_13 = 0x0013;
	byte al_12 = 0x13;
	Eq_11 * es_8 = SLICE(ds->*bx, selector, 16);
	while (true)
	{
		byte Eq_11::*di_15 = di + ax_13 + C;
		al_12 = al_12 - 0x01;
		es_8->*di_15 = al_12;
		C = cond(di_15);
		ax_13 = DPB(ax_13, al_12, 0, 8);
		di = di_15 + 1;
	}
}

