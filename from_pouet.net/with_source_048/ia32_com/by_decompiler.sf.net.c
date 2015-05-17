// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_048/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 bx)
{
	bios_video_set_mode(0x13);
	while (true)
	{
		byte Eq_13::*di_16 = &Eq_13::b0000;
		word16 dx_19 = 0x00C7;
		do
		{
			word16 cx_27 = 0x0140;
			do
			{
				0xA000->*di_16 = (byte) (dx_19 + bx ^ cx_27);
				di_16 = di_16 + 1;
				cx_27 = cx_27 - 0x0001;
			} while (cx_27 != 0x0000);
			dx_19 = dx_19 - 0x0001;
		} while (dx_19 != 0x0000);
		bx = bx + 0x0001;
	}
}

