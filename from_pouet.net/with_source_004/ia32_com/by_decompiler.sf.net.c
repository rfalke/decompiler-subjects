// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_004/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(segptr32 Eq_3::*bx, byte Eq_2::*di, Eq_3 * ds)
{
	Eq_2 * es_6 = SLICE(ds->*bx, selector, 16);
	bios_video_set_mode(0x13);
	while (true)
	{
		es_6->*di = 0x13;
		byte al_12;
		__daa(0x13, &al_12);
		di = di + 1;
	}
}

