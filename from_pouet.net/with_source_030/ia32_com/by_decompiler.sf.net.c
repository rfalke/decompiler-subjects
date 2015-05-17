// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_030/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_9 bx, Eq_41 Eq_8::*si, Eq_8 * ds)
{
	bios_video_set_mode(0x13);
	ptr32 ss_di_6 = Mem0[ds:bx + 0x0000:segptr32];
	Eq_13 * ss_7 = SLICE(ss_di_6, selector, 16);
	word16 di_8 = (word16) ss_di_6;
	while (true)
	{
		bx = bx + 0x0001;
		Eq_19 al_15 = (ss_7.*di_8)[bx * 0x0050] + 0x0B + (bx *s 0x0140 <u 0x0000);
		SEQ(ss_7, di_8)[bx * 0x0140] = al_15 & 0x0F;
		if ((al_15 & 0x0F) == 0x00)
			continue;
		(ds->*si).b0007 = al_15 & 0x0F | 0x43;
	}
}

