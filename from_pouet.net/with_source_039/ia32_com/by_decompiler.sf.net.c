// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_039/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, word16 bx, byte Eq_18::*di)
{
	bios_video_set_mode(0x13);
	while (true)
	{
		word16 ax_20 = di + bx;
		0xA000->*di = ((byte) ax_20 ^ SLICE(ax_20, byte, 8)) & bh & 0x3F;
		di = di + 1;
		cx = cx - 0x0001;
		if (cx != 0x0000)
			continue;
		bx = bx + 0x0001;
		bh = SLICE(bx, byte, 8);
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
	}
}

