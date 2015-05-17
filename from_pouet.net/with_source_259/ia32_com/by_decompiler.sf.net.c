// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_259/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte Eq_59::*di, Eq_23 * ds, Eq_12 * fs)
{
	__syscall(0x10);
	word16 cx_15 = 0x00B7;
	byte Eq_23::*si_10 = Eq_23::a0149;
	do
	{
		msdos_write_console_char(ds->*si_10);
		si_10 = si_10 + 1;
		int16 ax_25 = fs->w046C;
		do
			;
		while (ax_25 + 0x0001 >= fs->w046C);
		cx_15 = cx_15 - 0x0001;
	} while (cx_15 != 0x0000);
	byte al_37;
	bios_kbd_get_keystroke(out al_37);
	bios_video_set_mode(0x13);
	do
	{
		word32 dx_ax_52 = SEQ(0x0000, di);
		0xA000->*di = ((byte) (SEQ(dx_ax_52 % 0x0140, di) /u 0x0140 ^ dx_ax_52 % 0x0140) & 0x1F) + 0x20;
		di = di + 1;
	} while (__inb(0x60) != 0x01);
	return;
}

