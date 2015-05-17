// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_105/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, word16 si, byte Eq_52::*di, byte ah)
{
	bios_video_set_mode(0x13);
	byte al_12 = 0x13;
	word16 ax_11 = DPB(ax, 0x13, 0, 8);
	do
	{
		__outb(0x03C9, al_12);
		ax_11 = ax_11 + 0x0001;
		al_12 = (byte) ax_11;
	} while (ax_11 != 0x0000);
	do
	{
		word32 dx_ax_30 = SEQ(0x0000, di);
		int16 ax_35 = SEQ(dx_ax_30 % 0x0140, di) /u 0x0140 - 0x0064;
		int16 dx_38 = dx_ax_30 % 0x0140 - 0x00A0;
		if (dx_38 <= 0x0000)
			dx_38 = -dx_38;
		if (ax_35 <= dx_38)
			ax_35 = dx_38;
		uint16 ax_49 = ax_35 + 0x0001;
		0xA000->*di = (byte) (SEQ(0x00000FA0 % ax_49, 0x0FA0) /u ax_49 + si);
		di = di + 1;
		cx = cx - 0x0001;
		if (cx != 0x0000)
			continue;
		si = si + 0x0001;
	} while (__inb(0x60) != 0x01);
	return;
}

