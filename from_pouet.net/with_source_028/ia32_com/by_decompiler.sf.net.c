// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_028/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, segptr32 Eq_8::*bx, byte Eq_7::*di, Eq_8 * ds)
{
	bios_video_set_mode(0x12);
	Eq_7 * ds_7 = SLICE(ds->*bx, selector, 16);
	while (true)
	{
		word32 dx_ax_16 = SEQ(0x0000, di);
		di = di + 1;
		ds_7->*di = ds_7->*di ^ (byte) ((SEQ(dx_ax_16 % 0x0002, di) /u 0x0002 + 0x0002 & dx_ax_16 % 0x0002) >>u cl);
		if (ds_7->*di != 0x00)
			continue;
		cx = cx + 0x0001;
		cl = (byte) cx;
	}
}

