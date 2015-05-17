// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_369/ia32_mz/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0800_0000()
{
	word16 dx_10 = 0x0105;
	Eq_4 * bx_11 = &cs->t0105;
	do
	{
		word16 Eq_4::*si_18 = Eq_4::a0000;
		word16 di_19 = 0x0000;
		bx_11 = bx_11 - 0x0001;
		word16 cx_26 = 0x0008;
		while (cx_26 != 0x0000)
		{
			(bx_11 + 0x0630)->*di_19 = bx_11->*si_18;
			si_18 = si_18 + 1;
			di_19 = di_19 + 1;
			cx_26 = cx_26 - 0x0001;
		}
		dx_10 = dx_10 - 0x0001;
	} while (dx_10 != 0x0000);
	return;
}

