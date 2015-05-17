// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_353/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100()
{
fn0C00_0100_entry:
l0C00_0100:
l0C00_059A:
	bios_video_set_mode((byte) cs)
	__outb(0x03C7, 0x00)
	byte Eq_5::*di_15 = Eq_5::a0103
	word16 cx_16 = 0x0300
l0C00_05BC:
	branch cx_16 == 0x0000 l0C00_05BE
l0C00_05BC_1:
	cs->*di_15 = __in(0x03C9);
	di_15 = di_15 + 1;
	cx_16 = cx_16 - 0x0001;
	goto l0C00_05BC
l0C00_05BE:
	0x0C00->dw0409 = cs->dw46C8;
	0x0C00->w0403 = 0x013F;
	0x0C00->w0405 = 0x0C00->w0403 + 0x00C7;
fn0C00_0100_exit:
}

