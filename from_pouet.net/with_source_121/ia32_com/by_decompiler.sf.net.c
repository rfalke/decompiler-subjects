// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_121/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte dl, byte bl, byte dh, byte bh, Eq_18 * ds)
{
	bios_video_set_mode(0x13);
	bios_video_set_cursor_position(bh, dh, dl);
	msdos_display_string(ds, 0x0136);
	word16 cx_15 = 0x013F;
	byte cl_16 = 0x3F;
	do
	{
		if ((cl_16 & 0x10) != 0x00)
			;
		__syscall(0x10);
		bios_video_set_CGA_palette(bh, bl);
		__syscall(0x10);
		cx_15 = cx_15 - 0x0001;
		cl_16 = (byte) cx_15;
	} while (cx_15 != 0x0000);
	bios_video_set_mode(0x03);
	return;
}

