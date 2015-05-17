// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_161/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(int16 cx, int16 bx, word16 si, Eq_9 * ds, Eq_64 * fs)
{
	bios_video_set_mode(0x13);
	msdos_display_string(ds, 0x0172);
	__outb(0x0331, 0x3F);
	int16 ax_13 = 0x0000;
	do
	{
		__outb(0x0330, 0x99);
		__outb(0x0330, 0x28);
		__outb(0x0330, 0x7F);
		int16 ax_40 = ax_13;
		int16 bp_46 = fs->w046C;
		do
		{
			int16 bx_56 = bx *s 0x660D;
			bx = bx_56 + 0xF35F;
			if ((SLICE(bx_56 + 0xF35F, byte, 8) & 0x80) != 0x00)
			{
				int16 cx_88 = cx - ax_40;
				cx = cx_88 >> 0x0001;
				ax_40 = ax_40 + (cx_88 >> 0x0001);
			}
			else
			{
				word16 ax_94 = ax_40 + 0x0080;
				int16 cx_95 = cx + ax_94;
				cx = cx_95 >> 0x0001;
				ax_40 = ax_94 - (cx_95 >> 0x0001);
			}
			Eq_37 Eq_41::*di_68 = ax_40 *s 0xFEC0 + cx;
			(0xA000->*di_68).bFFFFBBE4 = (0xA000->*di_68).bFFFFBBE4 + 0x01;
			(0xA000->*di_68).bFFFFBBE4 = (0xA000->*di_68).bFFFFBBE4 & 0x0F;
			(0xA000->*di_68).bFFFFBBE4 = (0xA000->*di_68).bFFFFBBE4 + 0x10;
		} while (bp_46 + 0x0003 > fs->w046C);
		ax_13 = ax_40;
	} while (__inb(0x60) != 0x01);
	return;
}

