// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_073/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, word16 dx, int16 si, word16 di, bcu8 bl)
{
	bios_video_set_mode(0x13);
	do
	{
		int16 ax_21 = DPB(0x00D2, 0xD2 - bl, 0, 8);
		word16 ax_35 = DPB(si, (byte) si - (byte) (bx - (di & 0x000F) >>u 0x0001), 0, 8);
		si = ax_21;
		bx = ax_35;
		bl = (byte) ax_35;
		dx = dx - 0x0001;
		if (dx == 0x0000)
		{
			di = di + 0x0001;
			dx = 0x1F40;
		}
		if ((byte) ax_21 <u 0xC8)
		{
			byte Eq_28::*ax_60 = ax_21 *s 0x0140 + ax_35;
			byte al_63 = (byte) di;
			0xA000->*ax_60 = al_63;
			if (bl <u 0x40)
				(ax_60 + 1)[cx] = al_63;
		}
	} while (__inb(0x60) != 0x01);
	return;
}

