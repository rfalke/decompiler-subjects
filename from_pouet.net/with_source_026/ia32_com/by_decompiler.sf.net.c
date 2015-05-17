// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_026/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_9 bx, byte Eq_7::*di, Eq_8 * ds, Eq_14 * fs)
{
	bios_video_set_mode(0x13);
	selector es_7 = SLICE(Mem0[ds:bx + 0x0000:segptr32], selector, 16);
	do
	{
		es_7->*di = fs->b046C;
		bx = bx + 0x0001;
		di = bx *s 0x0140 *s bx + bx;
	} while (__inb(0x60) != 0x01);
	return;
}

