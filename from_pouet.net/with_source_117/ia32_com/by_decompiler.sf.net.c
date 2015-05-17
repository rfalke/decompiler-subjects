// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_117/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, word16 bp, byte Eq_44::*di, byte ah)
{
	bios_video_set_mode(0x13);
	do
	{
		bp = bp + 0x0001;
		do
		{
			int32 dx_ax_43 = SEQ(dx, di);
			Eq_8 dx_ax_46 = SEQ(dx_ax_43 % 0x0140, di);
			int16 dx_51 = dx_ax_43 % 0x0140 - 0x00A0;
			if (dx_51 <= 0x0000)
				dx_51 = 0x00A0 - dx_ax_43 % 0x0140;
			int16 ax_60 = dx_ax_46 /u 0x0140 - 0x0078 + dx_51;
			int32 dx_ax_61 = ax_60 *s ax_60;
			word16 ax_62 = (word16) dx_ax_61;
			word16 bx_63 = (dx_ax_46 /u 0x0140 - 0x0078) *s (dx_ax_46 /u 0x0140 - 0x0078) + ax_62;
			dx = DPB(dx_ax_61, 0x09, 16, 8) % (bx_63 + 0x000A);
			0xA000->*di = ((byte) (SEQ(dx, ax_62) /u (bx_63 + 0x000A) + bp >>u 0x0001) & 0x3F) + 0x20;
			di = di + 1;
			cx = cx - 0x0001;
		} while (cx != 0x0000);
	} while (__inb(0x60) != 0x01);
	return;
}

