// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_131/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(segptr32 Eq_8::*bx, Eq_8 * ds)
{
	bios_video_set_mode(0x13);
	Eq_7 * es_7 = SLICE(ds->*bx, selector, 16);
	byte al_15 = 0x00;
	byte ah_10 = 0x00;
	word16 dx_13 = 0x03C9;
	word16 cx_14 = 0x0100;
	do
	{
		__outb(0x03C9, al_15);
		__outb(0x03C9, al_15);
		__outb(0x03C9, al_15);
		al_15 = al_15 + 0x04;
		cx_14 = cx_14 - 0x0001;
	} while (cx_14 != 0x0000);
l0C00_0115:
	byte Eq_7::*di_33 = &Eq_7::b0010;
	bl = bl + 0x02;
	byte bh_35 = 0x00;
	dx_13 = DPB(dx_13, 0xDA, 0, 8);
	do
		;
	while ((__inb(dx_13) & 0x08) == 0x00);
	if (__inb(0x60) != 0x01)
		while (true)
		{
			if (bl > 0x00)
				ah_10 = ah_10 + bh_35;
			else
				ah_10 = ah_10 - bl;
			bh_35 = bh_35 + 0x01;
			if (bh_35 == 0xC8)
				goto l0C00_0115;
			word16 cx_67 = 0x0140;
			do
			{
				es_7->*di_33 = ah_10;
				di_33 = di_33 + 1;
				ah_10 = ah_10 + bh_35;
				cx_67 = cx_67 - 0x0001;
			} while (cx_67 != 0x0000);
		}
	bios_video_set_mode(0x03);
	return;
}

