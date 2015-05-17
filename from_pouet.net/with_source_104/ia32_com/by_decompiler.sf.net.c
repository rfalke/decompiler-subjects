// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_104/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 di, Eq_19 * fs)
{
	bios_video_set_mode(0x13);
	msdos_write_console_char(0x0E);
	__outb(0x0331, 0x3F);
	do
	{
		__outb(0x0330, 0x99);
		byte bl_16 = (byte) di;
		__outb(0x0330, (bl_16 & 0x0B) + 0x27);
		__outb(0x0330, 0x7F);
		di = di + 0x0001;
		int16 ax_27 = fs->w046C;
		do
			;
		while (ax_27 + 0x0002 >= fs->w046C);
		__outb(0x0330, 0x99);
		__outb(0x0330, (bl_16 & 0x0B) + 0x27);
		__outb(0x0330, 0x00);
	} while (__inb(0x60) != 0x01);
	return;
}

