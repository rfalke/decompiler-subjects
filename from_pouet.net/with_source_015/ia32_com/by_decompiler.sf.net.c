// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_015/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, segptr32 Eq_3::*bx, byte Eq_2::*di, byte ah, Eq_3 * ds)
{
	Eq_2 * es_6 = SLICE(ds->*bx, selector, 16);
	bios_video_set_mode(0x13);
	word16 ax_13 = DPB(ax, 0x13, 0, 8);
	while (true)
	{
		ax_13 = ax_13 + 0x0001;
		di = di - 0x0001;
		do
		{
			ax_13 = ax_13 + di + C;
			es_6->*di = (byte) ax_13;
			C = !cond(ax_13);
			di = di + 1;
			cx = cx - 0x0001;
		} while (cx != 0x0000);
	}
}

