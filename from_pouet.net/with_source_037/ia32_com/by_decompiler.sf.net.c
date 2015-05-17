// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_037/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, segptr32 Eq_3::*bx, Eq_15 Eq_2::*di, Eq_3 * ds)
{
	Eq_2 * es_6 = SLICE(ds->*bx, selector, 16);
	bios_video_set_mode(0x13);
	while (true)
	{
		di = &di->b0000 + 0x0001;
		do
		{
			byte al_29 = 0x1E;
			if ((cl & 0x1E) != 0x00 && (ch & 0x1E) != 0x00)
				al_29 = (ch ^ cl) & 0x38;
			(es_6->*di).b0000 = al_29;
			cx = cx - 0x0001;
			di = di;
			cl = (byte) cx;
			ch = SLICE(cx, byte, 8);
		} while (cx != 0x0000);
	}
}

