// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_099/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(uint16 bx, uint16 bp, byte ah)
{
	bios_video_set_mode(0x13);
	int16 ax_23 = DPB(ax, 0x13, 0, 8);
	do
	{
		int16 ax_24 = ax_23 *s 0x0003;
		if (ax_24 >= 0xC000)
		{
			if (ax_24 <= 0x4000)
			{
				if (ax_24 <= 0x0000)
					bx = bx - 0x00C8;
				bp = bp + 0x0140;
			}
			bx = bx + 0x00C8;
		}
		bp = bp >>u 0x0001;
		bx = bx >>u 0x0001;
		SEQ(0xA000, bp)[bx * 0x0140] = 0x0A;
		ax_23 = ax_24;
	} while (DPB(ax_24, __inb(0x60), 0, 8) != 0x0001);
	bios_video_set_mode(0x03);
	return;
}

