// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_016/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(segptr32 Eq_10::*bx, Eq_20 Eq_9::*di, byte cl, byte ch, byte dh, Eq_10 * ds)
{
	bios_video_set_mode(0x13);
	Eq_7 al_14 = 0x13;
	Eq_9 * es_7 = SLICE(ds->*bx, selector, 16);
	while (true)
	{
		dx = dx + 0x0001;
		byte dh_20 = SLICE(dx, byte, 8);
		cx = DPB(cx, ch | al_14, 8, 8);
		bool C_24 = false;
		do
		{
			al_14 = al_14 + dh_20 + C_24;
			(es_7->*di).t0000 = al_14;
			cx = cx - 0x0001;
			C_24 = cond(al_14);
			di = di + 1;
			ch = SLICE(cx, byte, 8);
		} while (cx != 0x0000);
	}
}

