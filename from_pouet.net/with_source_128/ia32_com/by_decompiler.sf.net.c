// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_128/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100()
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	word16 cx_16 = 0x0000
	byte cl_17 = 0x00
l0C00_0107:
	__outb(0x03C8, cl_17)
	__outb(0x03C9, cl_17)
	__outb(0x03C9, cl_17)
	__outb(0x03C9, cl_17 & 0x88)
	cx_16 = cx_16 - 0x0001;
	cl_17 = (byte) cx_16;
	branch cx_16 != 0x0000 l0C00_0107
l0C00_0115:
fn0C00_0100_exit:
}

