// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_113/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, byte Eq_30::*di, byte bl)
{
	bios_video_set_mode(0x13);
	do
	{
		bx = bx + 0x0001;
		cx = cx - 0x0001;
		do
		{
			Mem76[ss:fp - 0x000C:word16] = 0x0140;
			word32 dx_ax_60 = SEQ(0x0000, di);
			uint32 dx_ax_63 = SEQ(dx_ax_60 % 0x0140, di);
			int16 dx_82 = dx_ax_60 % 0x0140 + 0x007F;
			uint16 ax_102 = dx_ax_63 /u 0x0140;
			if (dx_ax_63 /u 0x0140 *s (dx_ax_63 /u 0x0140) + dx_82 *s dx_82 >u 0x2710)
				ax_102 = (word16) (dx_ax_60 % 0x0140 *s (dx_ax_63 /u 0x0140));
			int8 al_112 = ((byte) (ax_102 + bx >>u 0x0002) & 0x1F) - 0x10;
			if (al_112 < 0x00)
				al_112 = -al_112;
			0xA000->*di = al_112 + 0x20;
			di = di + 1;
			cx = cx_138 - 0x0001;
			word16 cx_138 = cx;
		} while (cx_138 != 0x0001);
	} while (__inb(0x60) != 0x01);
	return;
}

