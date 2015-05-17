// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_195/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_12 * ds)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	word16 Eq_16::*di_18 = Eq_16::a0000
	word16 cx_21 = 0x6400
l0C00_0119:
	branch cx_21 == 0x0000 l0C00_011B
l0C00_0119_1:
	0x4000->*di_18 = 0x5151;
	di_18 = di_18 + 1;
	cx_21 = cx_21 - 0x0001;
	goto l0C00_0119
l0C00_011B:
	ds->w01D5 = 0x0040;
fn0C00_0100_exit:
}

