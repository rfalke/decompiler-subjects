// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_020/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 dx, Eq_20 Eq_9::*bx, byte Eq_26::*di, byte ah, Eq_9 * ds)
{
	byte al_14 = 0x13;
	word16 ax_13 = DPB(ax, 0x13, 0, 8);
	while (true)
	{
		bios_video_set_mode(al_14);
		Eq_26 * es_26 = SLICE((ds->*bx).ptr0000, selector, 16);
		do
		{
			cups16 ax_33 = DPB(ax_13, ds->b0103, 0, 8) + di + C;
			ax_13 = __aam((byte) ax_33) - bx - (ax_33 <u 0x0000);
			al_14 = (byte) ax_13;
			es_26->*di = al_14;
			C = cond(ax_13);
			di = di + 1;
			dx = dx - 0x0001;
		} while (dx != 0x0000);
		bx = bx - 0x0001;
	}
}

