// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_071/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(uint16 bx, uint16 bp, byte ah, byte ch)
{
	bios_video_set_mode(0x13);
	int16 ax_24 = DPB(ax, 0x13, 0, 8);
	do
	{
		int16 ax_26 = ax_24 *s 0x0003;
		if (ax_26 >= 0xD555)
		{
			cx = DPB(cx, 0xA0, 0, 8);
			bp = bp + cx;
			if (ax_26 <= 0x2AAB)
			{
				ax_26 = ax_26 + 0x0001;
				bp = bp + cx;
			}
			else
				bx = bx + 0x00C8;
		}
		bp = bp >>u 0x0001;
		bx = bx >>u 0x0001;
		SEQ(0xA000, bp)[bx * 0x0140] = 0x09;
		SEQ(0xA000, bp - 0x0004)[bx * 0x0140] = 0x04;
		ax_24 = ax_26;
	} while (DPB(ax_26, __inb(0x60), 0, 8) != 0x0001);
	bios_video_set_mode(0x03);
	return;
}

