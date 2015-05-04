// subject.c
// Generated on 5/4/2015 12:11:48 AM by decompiling from_pouet.net/with_source_388/ia32_com/subject.exe
// using Decompiler version 0.4.2.0.

#include "subject.h"

void fn07F0_0100(Eq_3 * ds)
{
	if (0x319D >=u ds->w0002)
	{
		msdos_display_string(ds, 0x011C);
		msdos_terminate(0x01);
	}
	else
	{
		word16 cx_51 = 0x0124;
		word16 Eq_27::*di_52 = Eq_27::a0000;
		word16 Eq_3::*si_57 = Eq_3::a0154;
		while (cx_51 != 0x0000)
		{
			0x3158->*di_52 = ds->*si_57;
			si_57 = si_57 + 1;
			di_52 = di_52 + 1;
			cx_51 = cx_51 - 0x0001;
		}
		return;
	}
}

