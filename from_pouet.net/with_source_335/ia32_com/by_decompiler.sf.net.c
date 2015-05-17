// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_335/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_15 * ds)
{
fn0C00_0100_entry:
l0C00_0100:
	word16 di_13 = 0x0000
	word16 cx_12 = 0x7FFF
l0C00_010E:
	branch cx_12 == 0x0000 l0C00_0110
l0C00_010E_1:
	(cs + 0x2000)->*di_13 = 0x0000;
	di_13 = di_13 + 1;
	cx_12 = cx_12 - 0x0001;
	goto l0C00_010E
l0C00_0110:
	(cs + 0x2000)->*di_13 = 0x0000;
	Mem22[ds:0x04B4:word16] = cs + 0x1000
	bios_video_set_mode(0x13)
	__outb(0x03C8, 0x00)
	uint8 ah_33 = 0x00
l0C00_012E:
	Eq_40 al_40 = ah_33 >>u 0x02
	__outb(0x03C9, al_40)
	__outb(0x03C9, al_40)
	__outb(0x03C9, al_40)
	ah_33 = ah_33 + 0x01;
	branch ah_33 != 0x00 l0C00_012E
l0C00_013A:
fn0C00_0100_exit:
}

