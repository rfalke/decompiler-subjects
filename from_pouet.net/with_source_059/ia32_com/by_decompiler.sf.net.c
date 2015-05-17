// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_059/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte Eq_11::*si, byte bl, byte dh, Eq_11 * ds)
{
	bios_video_set_mode(0x12);
	byte ::*bx_5 = DPB(bx, 0xA0, 8, 8);
l0C00_0108:
	byte ::*di_22 = bx_5;
	dx = DPB(dx, 0xC0, 0, 8);
	while (true)
	{
		word16 cx_34 = 0x0146;
		do
		{
			bx_5->*di_22 = ds->*si;
			si = si + 1;
			di_22 = di_22 + 1;
			cx_34 = cx_34 - 0x0001;
		} while (cx_34 != 0x0000);
		if (__inb(0x60) == 0x01)
		{
			bios_video_set_mode(0x03);
			return;
		}
		dx = dx - 0x0001;
		if (dx == 0x0000)
			goto l0C00_0108;
	}
}

