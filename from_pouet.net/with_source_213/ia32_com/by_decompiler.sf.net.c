// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_213/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_9 * ds)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	msdos_display_string(ds, 0x01CF)
	__outb(0x03C8, 0x00)
	byte Eq_37::*di_15 = Eq_37::a0000
l0C00_0119:
	uint8 al_20 = (byte) di_15
	__outb(0x03C9, al_20 >>u 0x02)
	__outb(0x03C9, al_20 >>u 0x03)
	__outb(0x03C9, al_20 >>u 0x02)
	byte al_28 = (0xA000->*di_15 << 0x03) + 0x40
	0xA000->*di_15 = al_28;
	di_15 = di_15 + 1;
	branch al_28 != 0x00 l0C00_0119
l0C00_0132:
fn0C00_0100_exit:
}

