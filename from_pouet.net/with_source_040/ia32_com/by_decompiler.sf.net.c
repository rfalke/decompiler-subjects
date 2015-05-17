// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_040/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte Eq_26::*cx, segptr32 Eq_7::*bx, byte Eq_26::*di, Eq_7 * ds)
{
	bios_video_set_mode(0x13);
	while (true)
	{
		ds->b011F = ds->b011F + 0x01;
		msdos_display_string(ds, 0x011D);
		di = di + cx;
		SLICE(Mem10[ds:bx:segptr32], selector, 16)->*di = ds->b011F;
		cx = di;
	}
}

