// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_374/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_27 * es, Eq_7 * ds)
{
	if (0x26BC <u fp)
	{
		word16 Eq_27::*di_24 = fp - 0x0344 & 0xFFF0;
		word16 cx_25 = 0x00A2;
		word16 Eq_7::*si_27 = Eq_7::a017E;
		while (cx_25 != 0x0000)
		{
			es->*di_24 = ds->*si_27;
			si_27 = si_27 + 1;
			di_24 = di_24 + 1;
			cx_25 = cx_25 - 0x0001;
		}
		return;
	}
	else
	{
		msdos_display_string(ds, 0x0161);
		msdos_terminate_program20();
	}
}

