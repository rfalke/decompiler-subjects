// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_067/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(segptr32 Eq_8::*bx, word16 bp, Eq_8 * ds)
{
	bios_video_set_mode(0x13);
	Eq_7 * es_7 = SLICE(ds->*bx, selector, 16);
	do
	{
		int16 bx_28 = 0x0000;
		byte Eq_7::*di_31 = &Eq_7::b7D10;
		do
		{
			word16 cx_46 = 0x0140;
			bx_28 = bx_28 + 0x0001;
			do
			{
				word16 ax_52 = cx_46 - 0x00A0;
				es_7->*di_31 = ((byte) (SEQ((int32) (ax_52 << 0x0006) % bx_28, ax_52 << 0x0006) / bx_28 + bp) ^ (byte) (SEQ(14336 % bx_28, 0x3800) / bx_28)) >>u 0x04 | 0x10;
				di_31 = di_31 + 1;
				cx_46 = cx_46 - 0x0001;
			} while (cx_46 != 0x0000);
		} while (bx_28 != 0x0064);
		bp = bp - 0x0001;
	} while (__inb(0x60) != 0x01);
	return;
}

