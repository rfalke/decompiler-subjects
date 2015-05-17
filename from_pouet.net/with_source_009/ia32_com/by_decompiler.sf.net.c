// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_009/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(segptr32 Eq_10::*bx, word16 di, Eq_10 * ds)
{
	bios_video_set_mode(0x13);
	Eq_7 al_11 = 0x13;
	Eq_9 * es_8 = SLICE(ds->*bx, selector, 16);
	while (true)
	{
		al_11 = al_11 + 0x10 + C;
		Eq_7 Eq_9::*di_15 = di + 0x0001;
		Mem22[es_8:di_15 + 0x0000:byte] = al_11;
		C = cond(al_11);
		di = di_15 + 0x0001;
	}
}

