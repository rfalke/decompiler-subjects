// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_058/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100()
{
	bios_video_set_mode(0x13);
	0xA2D0->w009F = 0x4F51;
	word16 Eq_8::*si_12 = Eq_8::a0000;
	word16 Eq_8::*di_15 = Eq_8::a0141;
	word16 cx_16 = 0x4F51;
	do
	{
		si_12 = si_12 + 1;
		0xA2D0->*di_15 = 0xA2D0->*si_12 ^ 0xA2D0->*si_12;
		di_15 = di_15 + 1;
		cx_16 = cx_16 - 0x0001;
	} while (cx_16 != 0x0000);
	byte al_29;
	bios_kbd_get_keystroke(out al_29);
	return;
}

