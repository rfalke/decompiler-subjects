// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_362/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_27 * es, Eq_7 * ds)
{
	if (0x26E1 <u fp)
	{
		word16 Eq_27::*di_27 = fp - 0x0346 & 0xFFF0;
		word16 cx_28 = 0x00A2;
		word16 Eq_7::*si_30 = Eq_7::a017E;
		while (cx_28 != 0x0000)
		{
			es->*di_27 = ds->*si_30;
			si_30 = si_30 + 1;
			di_27 = di_27 + 1;
			cx_28 = cx_28 - 0x0001;
		}
		return;
	}
	else
	{
		msdos_display_string(ds, 0x0161);
		msdos_terminate_program20();
	}
}

