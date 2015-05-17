// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_029/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte Eq_10::*si, byte Eq_23::*di, Eq_10 * ds)
{
	bios_video_set_mode(0x13);
	word16 ax_12 = 0xA000;
	do
	{
		byte al_16 = ds->*si;
		ax_12 = DPB(ax_12, al_16, 0, 8);
		si = si + 1;
		if (al_16 == 0x00)
			continue;
		0xA000->*di = (byte) (ax_12 - 0x0001);
		ax_12 = ax_12 - 0x0001;
		di = di + 1;
		if (di != &Eq_23::b0000)
			continue;
		word16 ax_30 = (word16) __inb(0x60);
		ax_12 = ax_30 - 0x0001;
	} while (ax_30 != 0x0001);
	return;
}

