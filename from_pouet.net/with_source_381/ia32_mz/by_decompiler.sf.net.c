// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_381/ia32_mz/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0800_0001()
{
	int16 ax_2 = 0x01F1;
	Eq_4 * dx_34 = &cs->t01F1;
	word16 cx_27 = 0x003C;
	Eq_10 * bp_31 = ss;
	do
	{
		word16 Eq_4::*si_38 = Eq_4::a0032;
		word16 Eq_10::*di_39 = Eq_10::a0000;
		bp_31 = bp_31 - 0x0001;
		dx_34 = dx_34 - 0x0001;
		cx_27 = DPB(cx_27, 0x08, 0, 8);
		while (cx_27 != 0x0000)
		{
			bp_31->*di_39 = dx_34->*si_38;
			si_38 = si_38 + 1;
			di_39 = di_39 + 1;
			cx_27 = cx_27 - 0x0001;
		}
		ax_2 = ax_2 - 0x0001;
	} while (ax_2 >= 0x0000);
	return;
}

