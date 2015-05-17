// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_326/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_12 Eq_11::*bx, Eq_11 * ds)
{
	bios_video_set_mode(0x13);
	(ds->*bx).b0683 = (byte) __aam(0x13);
}

