// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_346/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_5 * ds)
{
fn0C00_0100_entry:
l0C00_0100:
	Mem5[ds:0x0530:word16] = cs + 0x1000
	bios_video_set_mode(0x13)
	__outb(0x03C8, 0x00)
	uint8 ah_15 = 0x00
l0C00_011B:
	Eq_19 al_22 = ah_15 >>u 0x02
	__outb(0x03C9, al_22)
	__outb(0x03C9, al_22)
	__outb(0x03C9, -(al_22 >>u 0x01) + al_22)
	ah_15 = ah_15 + 0x01;
	branch ah_15 != 0x00 l0C00_011B
l0C00_012F:
fn0C00_0100_exit:
}

