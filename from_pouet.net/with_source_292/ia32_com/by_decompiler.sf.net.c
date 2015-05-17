// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_292/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(uint16 cx, Eq_56 * ds)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	word16 ax_4 = DPB(ax, 0x13, 0, 8)
	__outb(0x03C8, (byte) (ax_4 | 0x0EFA))
l0C00_010D:
	__outb(0x03C9, (byte) (cx >>u 0x0002))
	ui16 ax_22 = cx << 0x0001
	byte al_23 = (byte) ax_22
	__outb(0x03C9, al_23)
	word16 ax_25 = DPB(ax_22, al_23 & 0x3F, 0, 8)
	branch (al_23 & 0x3F) <=u 0x1F l0C00_0120
l0C00_011E:
	ax_25 = DPB(ax_22, 0x1F, 0, 8);
l0C00_0120:
	__outb(0x03C9, (byte) (ax_25 << 0x0001))
	cx = cx - 0x0001;
	branch cx != 0x0000 l0C00_010D
l0C00_0125:
	__outb(0x61, (byte) ax_4)
	ds->wFA04 = 0x0019;
fn0C00_0100_exit:
}

