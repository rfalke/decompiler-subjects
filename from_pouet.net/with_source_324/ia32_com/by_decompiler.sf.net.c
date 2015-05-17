// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_324/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_12 * ds)
{
	bios_video_set_mode(0x13);
	ds->ptr040C = DPB(cs, SLICE(cs, byte, 8) + 0x20, 8, 8);
}

