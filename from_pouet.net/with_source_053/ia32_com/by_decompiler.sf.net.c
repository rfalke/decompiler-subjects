// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_053/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100()
{
	bios_video_set_mode(0x13);
	byte al_16 = 0x13;
	byte Eq_11::*di_20 = &Eq_11::b0000;
l0C00_010B:
	word16 dx_22 = 0x00C8;
	while (true)
	{
		word16 cx_31 = 0x0028;
		while (cx_31 != 0x0000)
		{
			0xA000->*di_20 = al_16;
			di_20 = di_20 + 1;
			cx_31 = cx_31 - 0x0001;
		}
		do
			;
		while (di_20 == &Eq_11::bFFFFFA00);
		dx_22 = dx_22 - 0x0001;
		if (dx_22 == 0x0000)
			goto l0C00_010B;
		al_16 = al_16 ^ 0x1C;
	}
}

