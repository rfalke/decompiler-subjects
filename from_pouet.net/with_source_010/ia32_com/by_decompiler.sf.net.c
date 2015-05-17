// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_010/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, segptr32 Eq_3::*bx, byte Eq_2::*di, byte ah, Eq_3 * ds)
{
	Eq_2 * es_6 = SLICE(ds->*bx, selector, 16);
	bios_video_set_mode(0x13);
	word16 ax_16 = DPB(ax, 0x13, 0, 8);
	while (true)
	{
		ax_16 = ax_16 - di - C;
		es_6->*di = (byte) ax_16;
		C = !cond(ax_16);
		di = di + 1;
		cx = cx - 0x0001;
		if (cx != 0x0000)
			continue;
		ax_16 = ax_16 + 0x0001;
	}
}

