// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_108/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(ui16 cx, word16 di, byte ah)
{
	bios_video_set_mode(0x13);
	word16 ax_12 = DPB(ax, 0x13, 0, 8);
	do
	{
		Eq_11 al_16 = cl >>u 0x02;
		__outb(0x03C9, al_16);
		__outb(0x03C9, al_16);
		word16 ax_17 = DPB(ax_12, al_16, 0, 8);
		uint8 al_19 = (byte) (ax_17 ^ 0x03C9);
		__outb(0x03C9, al_19);
		cx = cx - 0x0001;
		ax_12 = ax_17 ^ 0x03C9;
		cl = (byte) cx;
	} while (cx != 0x0000);
	while (true)
	{
		int16 dx_39 = 0x0140;
		do
		{
			cx = DPB(cx, 0xC8, 0, 8);
			do
			{
				word16 ax_56 = al_19 *u al_19 + dx_39 *s dx_39;
				word16 ax_63 = DPB(ax_56, (byte) ax_56 >>u 0x03, 0, 8) + di;
				al_19 = (byte) ax_63;
				SEQ(0xA000, dx_39)[cx * 0x0140] = SLICE(ax_63, byte, 8) + al_19;
				cx = cx - 0x0001;
			} while (cx != 0x0000);
			dx_39 = dx_39 - 0x0001;
		} while (dx_39 != 0x0000);
		di = di + 0x0001;
	}
}

