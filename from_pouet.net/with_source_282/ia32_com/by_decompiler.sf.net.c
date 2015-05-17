// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_282/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte bl, Eq_14 * ds)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	int16 Eq_14::*bx_10 = DPB(bx, 0x03, 8, 8)
l0C00_010F:
	rLoc2 = sin(rLoc2) * (real64) ds->w01D0 + (real64) ds->w01D0;
	ds->*bx_10 = (int16) rLoc2;
	bl = bl + 0x01;
	bx_10 = DPB(bx_10, bl, 0, 8);
	branch bl != 0x00 l0C00_010F
l0C00_0120:
	__outb(0x03C8, 0x00)
	ui8 ah_32 = 0x00
l0C00_0127:
	uint8 al_42 = ah_32 * 0x02
	branch al_42 <=u 0x3F l0C00_0131
l0C00_012F:
	al_42 = 0x3F;
l0C00_0131:
	__outb(0x03C9, al_42)
	__outb(0x03C9, ah_32)
	__outb(0x03C9, 0x00)
	ah_32 = ah_32 + 0x01;
	branch ah_32 != 0x00 l0C00_0127
l0C00_013C:
l0C00_013E:
	branch (__inb(0x03DA) & 0x08) == 0x00 l0C00_013E
l0C00_0143:
	ds->w0200 = 0x00C8;
	Eq_69 rLoc2_67 = rLoc2 - ds->t01F6
	Eq_73 rLoc2_69 = cos(rLoc2_67)
	sin(rLoc2_67)
	Eq_78 rLoc4_72 = rLoc2_69 + ds->t01F6
	cos(rLoc4_72)
	sin(rLoc4_72)
	branch false l0C00_0166
l0C00_0164:
l0C00_0166:
fn0C00_0100_exit:
}

