// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_025/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(segptr32 Eq_8::*bx, Eq_21 Eq_7::*di, byte cl, byte ah, Eq_8 * ds)
{
	bios_video_set_mode(0x13);
	Eq_7 * es_7 = SLICE(ds->*bx, selector, 16);
	Eq_14 al_11 = __rcl(0x13, cl, C);
	Eq_14 v14_15 = (es_7->*di).t0000;
	(es_7->*di).t0000 = al_11;
	int16 ax_19 = DPB(ax, v14_15, 0, 8);
	Eq_14 al_25 = (byte) (ax_19 >> 0x0001) + SLICE(di, byte, 8) + (ax_19 >> 0x0001 <u 0x0000);
	word16 ax_26 = DPB(ax_19 >> 0x0001, al_25, 0, 8);
	bool C_29 = false;
	while (true)
	{
		Eq_14 v19_35 = (es_7->*di).t0000;
		(es_7->*di).t0000 = al_25;
		ax_26 = DPB(ax_26, v19_35, 0, 8) + di + C_29;
		al_25 = (byte) ax_26;
		C_29 = cond(ax_26);
		di = di - 0x0001;
	}
}

