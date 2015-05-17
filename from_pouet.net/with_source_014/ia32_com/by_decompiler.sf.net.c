// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_014/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte Eq_13::*bx, byte ah)
{
	bios_video_set_mode(0x13);
	byte al_11 = 0x13;
	word16 ax_12 = DPB(ax, 0x13, 0, 8);
	while (true)
	{
		0xA000->*bx = 0xA000->*bx + 0x01;
		al_11 = al_11 - 0x01;
		bx = bx - ax_12;
		ax_12 = DPB(ax_12, al_11, 0, 8);
	}
}

