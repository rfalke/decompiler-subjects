// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_177/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, Eq_17 * ds)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
l0C00_010B:
	__outb(0x03C9, (byte) cx)
	cx = cx - 0x0001;
	branch cx != 0x0000 l0C00_010B
l0C00_0110:
	ds->dw0186 = 0xC00CCCCD;
fn0C00_0100_exit:
}

