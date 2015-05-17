// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_100/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, int16 bx, word16 bp, int16 si, byte ah)
{
	bios_video_set_mode(0x13);
	word16 ax_20 = DPB(ax, 0x13, 0, 8);
	while (true)
	{
		word16 ax_24 = ax_20 + 0x0001;
		si = si *s 0x0003 + cx;
		byte al_25 = (byte) ax_24;
		if (si <= 0xC000)
		{
			bp = bp + 0x0001;
			bx = bx + 0x0001;
		}
		else if (si <= 0x0000)
		{
			cx = cx + 0x0001;
			bp = bp + 0x0001;
l0C00_012B:
			bx = bx - 0x0001;
		}
		else if (si <= 0x4000)
		{
			bp = bp - 0x0001;
			bx = bx + 0x0001;
		}
		else
		{
			bp = bp - 0x0001;
			goto l0C00_012B;
		}
		Eq_20 Eq_25::*di_36 = bx *s 0x0140 + bp;
		(0xA000->*di_36).b0000 = al_25;
		(0xA000->*di_36).b0001 = al_25;
		(0xA000->*di_36).b0002 = 0x04;
		(0xA000->*di_36).b0003 = 0x04;
		(0xA000->*di_36).b0004 = 0x04;
		(0xA000->*di_36).b0005 = 0x00;
		(0xA000->*di_36).b0006 = 0x00;
		(0xA000->*di_36).b0007 = 0x00;
		ax_20 = DPB(ax_24, 0x00, 0, 8);
	}
}

