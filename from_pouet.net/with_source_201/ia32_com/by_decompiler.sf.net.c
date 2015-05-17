// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_201/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_39 * ds)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	word16 cx_13 = 0x0000
	Eq_9 cl_14 = 0x00
l0C00_0106:
	__outb(0x03C8, cl_14)
	Eq_9 al_18 = cl_14
	branch cl_14 >= 0x00 l0C00_0113
l0C00_0111:
	al_18 = ~cl_14;
l0C00_0113:
	Eq_11 al_24 = al_18 >>u 0x01
	__outb(0x03C9, al_24)
	__outb(0x03C9, al_24)
	__outb(0x03C9, SLICE(cl_14 *u al_24, byte, 8) + 0x13)
	cx_13 = cx_13 - 0x0001;
	cl_14 = (byte) cx_13;
	branch cx_13 != 0x0000 l0C00_0106
l0C00_0120:
	ds->w0100 = ds->w0100 + 0x0001;
fn0C00_0100_exit:
}

