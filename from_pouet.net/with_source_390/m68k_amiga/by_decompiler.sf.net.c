// subject.c
// Generated on 5/4/2015 12:11:52 AM by decompiling from_pouet.net/with_source_390/m68k_amiga/subject.exe
// using Decompiler version 0.4.2.0.

#include "subject.h"

void fn00001000(word32 d0, Eq_18 * a1, Eq_22 * a6)
{
	ui32 * a4_119 = 0x00000FFC;
	Eq_4 * a3_53 = *a4_119 * 0x00000002 * 0x00000002;
	(a3_53 + 4)();
	if (d0 != 0x00000000)
	{
		ui32 d2_108 = a1->dwFFFFFFFC;
		(a6 + -210)();
		word32 d0_113 = a6->ptr0114->dw00AC;
		if (d0_113 != 0x00000000)
		{
			*a4_119 = 0x00000000;
			a3_53->dw0000 = a4_119 >>u 0x00000002;
			a4_119 = (d0_113 << 0x00000002) + 60;
		}
		*a4_119 = d2_108;
	}
	return;
}

