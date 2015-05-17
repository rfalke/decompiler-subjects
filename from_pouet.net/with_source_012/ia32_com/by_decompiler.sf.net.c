// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_012/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, segptr32 Eq_3::*bx, byte Eq_2::*di, byte ah, Eq_3 * ds)
{
	Eq_2 * es_6 = SLICE(ds->*bx, selector, 16);
	bios_video_set_mode(0x13);
	byte al_16 = 0x13;
	cups16 ax_15 = DPB(ax, 0x13, 0, 8);
	while (true)
	{
		es_6->*di = al_16;
		di = di + 1;
		ax_15 = ax_15 - di - C;
		al_16 = (byte) ax_15;
		C = cond(ax_15);
		cx = cx - 0x0001;
		if (cx != 0x0000)
			continue;
		ax_15 = ax_15 + di + (ax_15 <u 0x0000);
		al_16 = (byte) ax_15;
		C = cond(ax_15);
	}
}

