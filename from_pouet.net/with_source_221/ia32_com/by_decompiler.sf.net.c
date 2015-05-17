// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_221/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(int16 bx, Eq_5 * ds)
{
	do
	{
		rLoc2 = cos(rLoc2) * (real64) ds->w0125;
		Mem14[ds:bx + 0x0202:int16] = (int16) rLoc2;
		bx = bx + 0x0001;
	} while (bx >= 0x0000);
	bios_video_set_mode(0x13);
	msdos_terminate_program();
}

