// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_033/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100()
{
	sp = fp;
	al.u0 = 0x13;
	bios_video_set_mode(0x13);
	bh = 0xA0;
	bx = DPB(bx, bh, 8, 8);
	es = bx;
}

