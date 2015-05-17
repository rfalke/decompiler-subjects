// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_038/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, segptr32 Eq_3::*bx, byte Eq_2::*di, Eq_3 * ds)
{
	Eq_2 * es_6 = SLICE(ds->*bx, selector, 16);
	bios_video_set_mode(0x13);
	uint16 bx_9 = DPB(bx, 0x0F, 0, 8);
	do
	{
		ax = DPB(ax, (byte) __rdtsc() & 0x01, 0, 8);
		es_6->*di = (byte) (bx_9 *u ax);
		di = di + 1;
		cx = cx - 0x0001;
	} while (cx != 0x0000 || __inb(0x60) != 0x01);
	bios_video_set_mode(0x03);
	return;
}

