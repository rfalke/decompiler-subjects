// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_187/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100()
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	__outb(0x03C8, 0x00)
	byte al_10 = 0x00
	word16 cx_16 = 0x0040
l0C00_0114:
	__outb(0x03C9, al_10)
	__outb(0x03C9, al_10)
	__outb(0x03C9, al_10)
	al_10 = al_10 + 0x01;
	cx_16 = cx_16 - 0x0001;
	branch cx_16 != 0x0000 l0C00_0114
l0C00_011B:
fn0C00_0100_exit:
}

