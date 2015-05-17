// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_018/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte Eq_10::*si, byte Eq_23::*di, Eq_10 * ds)
{
	bios_video_set_mode(0x13);
	word16 ax_15 = 0xA000;
	while (true)
	{
		byte al_14 = ds->*si;
		ax_15 = DPB(ax_15, al_14, 0, 8);
		si = si + 1;
		if (al_14 == 0x00)
			continue;
		0xA000->*di = (byte) (ax_15 - 0x0001);
		ax_15 = ax_15 - 0x0001;
		di = di + 1 + 0x0001;
	}
}

