// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_368/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_19 * ds)
{
	Eq_2 * ax_6 = DPB(cs, SLICE(cs, byte, 8) + 0x10, 8, 8);
	word16 cx_10 = 0x0803;
	word16 Eq_19::*si_11 = Eq_19::a0100;
	word16 Eq_2::*di_12 = Eq_2::a0100;
	while (cx_10 != 0x0000)
	{
		ax_6->*di_12 = ds->*si_11;
		si_11 = si_11 + 1;
		di_12 = di_12 + 1;
		cx_10 = cx_10 - 0x0001;
	}
	Mem29[ss:fp - 0x0002:word16] = ax_6;
	return;
}

