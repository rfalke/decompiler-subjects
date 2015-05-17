// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_144/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte ah)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	byte al_10 = 0x00
	word16 ax_5 = DPB(ax, 0x00, 0, 8)
l0C00_0106:
	__outb(0x03C9, al_10)
	__outb(0x03C9, al_10)
	__outb(0x03C9, al_10)
	ax_5 = ax_5 + 0x0001;
	al_10 = (byte) ax_5;
	branch ax_5 != 0x0000 l0C00_0106
l0C00_010F:
fn0C00_0100_exit:
}

