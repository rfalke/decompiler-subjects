// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_222/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 bp, byte Eq_30::*di, byte ah)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	__outb(0x03C8, 0x00)
	byte al_11 = 0x00
	word16 ax_13 = DPB(ax, 0x00, 0, 8)
l0C00_0114:
	__outb(0x03C9, al_11)
	__outb(0x03C9, al_11)
	__outb(0x03C9, al_11)
	di = di + 1;
	0x9000->*di = 0x00;
	ax_13 = ax_13 + 0x0001;
	al_11 = (byte) ax_13;
	branch ax_13 != 0x0000 l0C00_0114
l0C00_011F:
fn0C00_0100_exit:
}

