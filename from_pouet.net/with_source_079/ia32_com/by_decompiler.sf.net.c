// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_079/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte al)
{
	bios_video_set_mode(al);
	word16 Eq_16::*di_11 = Eq_16::a0040;
	Eq_9 al_20 = 0x80;
	word16 cx_10 = 0x0064;
	while (cx_10 != 0x0000)
	{
		0xA000->*di_11 = 0x0080;
		di_11 = di_11 + 1;
		cx_10 = cx_10 - 0x0001;
	}
	word16 dx_16 = 0x00C8;
	do
	{
		Eq_26 Eq_16::*di_26 = &Eq_16::tFFFFF8C0;
		do
		{
			Eq_26 Eq_16::*di_30 = di_26 - 0x0001;
			uint8 al_36 = (al_20 >>u 0x03) + (0xA000->*di_30).b0000 + (0xA000->*di_30).b0001 + (0xA000->*di_30).b0001 + (0xA000->*di_30).t0140;
			(0xA000->*di_30).t0140 = al_36 >>u 0x02;
			al_20 = al_36 >>u 0x02;
			di_26 = di_30;
		} while (di_30 != &Eq_16::t0000);
		dx_16 = dx_16 - 0x0001;
	} while (dx_16 != 0x0000);
	while (true)
		;
}

