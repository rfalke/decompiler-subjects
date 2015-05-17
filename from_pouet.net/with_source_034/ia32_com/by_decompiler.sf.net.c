// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_034/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, segptr32 Eq_8::*bx, byte Eq_7::*di, Eq_8 * ds)
{
	bios_video_set_mode(0x13);
	Eq_7 * ds_7 = SLICE(ds->*bx, selector, 16);
	while (true)
	{
		word32 dx_ax_16 = SEQ(0x0000, di);
		ds_7->*di = ds_7->*di ^ (byte) ((SEQ(dx_ax_16 % 0x0140, di) /u 0x0140 + cx & dx_ax_16 % 0x0140 + cx) >>u cl);
		di = di + 1;
		if (di != &Eq_7::b0000)
			continue;
		cx = cx + 0x0001;
		cl = (byte) cx;
	}
}

