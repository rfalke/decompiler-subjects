// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_152/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 bx, Eq_12 * ds)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	word16 cx_14 = 0x0300
l0C00_0118:
	real64 rLoc1_19 = sin((real64) cx_14 * ds->t0174)
	__outb(0x03C9, (byte) (int16) (rLoc1_19 * rLoc1_19 * (real64) ds->w0178))
	cx_14 = cx_14 - 0x0001;
	branch cx_14 != 0x0000 l0C00_0118
l0C00_0133:
fn0C00_0100_exit:
}

