// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_140/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_7 Eq_8::*bx, byte ah, Eq_8 * ds)
{
	bios_video_set_mode(0x13);
	ptr32 es_cx_8 = Mem0[ds:bx + 0x0000:segptr32];
	byte al_16 = 0x13;
	word16 ax_15 = DPB(ax, 0x13, 0, 8);
	Eq_19 * es_9 = SLICE(es_cx_8, selector, 16);
	word16 cx_10 = (word16) es_cx_8;
	while (true)
	{
		SEQ(es_9, (int16) (cos((real64) cx_10 + ds->t0064) * cos((real64) cx_10 * ds->r015F) * 80) + 0x00AA)[((int16) (sin((real64) cx_10 + ds->t0064) * 100) + 0x0064) * 0x0140] = al_16;
		cx_10 = cx_10 - 0x0001;
		if (cx_10 != 0x0000)
			continue;
		ds->t0064 = ds->t0064 + ds->r0157;
		ax_15 = ax_15 + 0x0001;
		al_16 = (byte) ax_15;
	}
}

