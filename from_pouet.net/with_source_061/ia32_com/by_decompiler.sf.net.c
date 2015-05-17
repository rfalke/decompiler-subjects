// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_061/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx)
{
	bios_video_set_mode(0x13);
	do
	{
		Eq_24 al_17 = cl >>u 0x01;
		byte al_18 = al_17 - 0x40;
		if (al_17 >= 0x40)
			al_18 = ~(al_17 - 0x40);
		__outb(0x03C9, al_18);
		__outb(0x03C9, al_18);
		__outb(0x03C9, al_18);
		cx = cx - 0x0001;
		cl = (byte) cx;
	} while (cx != 0x0000);
	byte Eq_40::*di_29 = Eq_40::a0000;
	do
	{
		0xA000->*di_29 = (byte) (SEQ(0x0000, di_29) % 0x0140);
		di_29 = di_29 + 1;
	} while (di_29 != Eq_40::a0000);
	byte al_50;
	bios_kbd_get_keystroke(out al_50);
	msdos_terminate_program20();
}

