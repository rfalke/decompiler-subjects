// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_097/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 bp)
{
	__syscall(0x10);
	while (true)
	{
		uint16 Eq_16::*di_24 = &Eq_16::w0000;
		Eq_5 si_27 = 0x01DF;
		do
		{
			uint16 cx_41 = 0x027F;
			do
			{
				if (di_24 == &Eq_16::w0000)
					__syscall(0x10);
				0xA000->*di_24 = (word16) (si_27 *u si_27) + (word16) (cx_41 *u cx_41) + bp >>u 0x0005;
				di_24 = di_24 + 1;
				cx_41 = cx_41 - 0x0001;
			} while (cx_41 != 0x0000);
			si_27 = si_27 - 0x0001;
		} while (si_27 >= 0x0000);
		bp = bp - 0x007F;
	}
}

