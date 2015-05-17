// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_370/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_12 * es, Eq_8 * ds)
{
	byte Eq_8::*si_16 = Eq_8::a010D;
	byte Eq_12::*di_17 = Eq_12::a7F00;
	word16 cx_10 = 0x7F00;
	while (cx_10 != 0x0000)
	{
		es->*di_17 = ds->*si_16;
		si_16 = si_16 + 1;
		di_17 = di_17 + 1;
		cx_10 = cx_10 - 0x0001;
	}
	return;
}

