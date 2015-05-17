// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_229/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, selector ds)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
l0C00_010A:
	__outb(0x03C8, cl)
	__outb(0x03C9, cl)
	Eq_14 al_17 = cl >>u 0x02
	__outb(0x03C9, al_17)
	__outb(0x03C9, al_17)
	cx = cx - 0x0001;
	cl = (byte) cx;
	branch cx != 0x0000 l0C00_010A
l0C00_0119:
fn0C00_0100_exit:
}

