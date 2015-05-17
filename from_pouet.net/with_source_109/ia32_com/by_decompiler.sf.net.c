// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_109/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(segptr32 Eq_8::*bx, int16 si, byte Eq_7::*di, Eq_8 * ds)
{
	bios_video_set_mode(0x13);
	Eq_7 * es_7 = SLICE(ds->*bx, selector, 16);
	while (true)
	{
		word32 dx_ax_18 = SEQ(0x0000, di);
		int16 ax_23 = SEQ(dx_ax_18 % 0x0140, di) /u 0x0140 - 0x004B;
		si = ax_23;
		byte al_27 = 0x01;
		word16 ax_28 = DPB(si, 0x01, 0, 8);
		int16 dx_29 = dx_ax_18 % 0x0140 - 0x00B0;
		if (dx_29 <= 0x0000)
		{
			dx_29 = 0x00B0 - dx_ax_18 % 0x0140;
			al_27 = (byte) (ax_28 + 0x0001);
		}
		if (dx_29 > 0x0032)
			goto l0C00_0139;
		else if (dx_29 <= ax_23)
		{
			al_27 = 0x04;
			dx_29 = dx_29 - 0x0064;
			si = -ax_23;
			if (si >= dx_29)
			{
l0C00_0132:
				si = si + 0x0032;
				if (dx_29 >= si)
				{
l0C00_0139:
					al_27 = 0x07;
				}
			}
			else
				goto l0C00_0139;
		}
		else
			goto l0C00_0132;
		es_7->*di = al_27;
		di = di + 1;
	}
}

