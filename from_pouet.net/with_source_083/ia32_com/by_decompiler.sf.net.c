// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_083/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte dh, Eq_24 * ds)
{
	bios_video_set_mode(0x13);
	do
	{
		byte Eq_28::*bx_28 = &Eq_28::b32A0;
		dh = dh + 0x01;
		byte dl_31 = 0xA0;
		do
		{
			bcu8 ah_43 = dh + dl_31;
			word16 ax_44 = DPB(ax, ah_43, 8, 8);
			if (ah_43 >=u 0xA0)
				ax_44 = DPB(ax, ah_43 - 0xA0, 8, 8);
			ax = DPB(ax_44, 0x00, 0, 8);
			bcu8 al_49 = 0x00;
			byte Eq_24::*si_51 = ax + 0x0140;
			byte Eq_28::*di_53 = bx_28;
			int16 cx_54 = 0x00FF;
			do
			{
				al_49 = al_49 + dl_31;
				ax = DPB(ax, al_49, 0, 8);
				if (al_49 <u 0x00)
				{
					si_51 = si_51 + 1;
					cx_54 = cx_54 - 0x0001;
				}
				0xA000->*di_53 = ds->*si_51;
				si_51 = si_51 + 1;
				di_53 = di_53 + 1;
				cx_54 = cx_54 - 0x0001;
			} while (cx_54 >= 0x0000);
			bx_28 = bx_28 + 0x013F;
			dl_31 = dl_31 - 0x01;
		} while (dl_31 != 0x00);
	} while (__inb(0x60) != 0x01);
	return;
}

