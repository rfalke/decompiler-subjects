// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_066/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte dl, byte ch, byte bh)
{
	bios_video_set_mode(0x13);
	word16 ax_100 = DPB(ax, 0x13, 0, 8);
	do
	{
		word16 ax_39 = ax_100 + 0x0001;
		bx = DPB(bx, 0x64, 0, 8);
		byte Eq_22::*di_104 = &Eq_22::b3ECF;
		word16 si_105 = 0x00A0;
		byte al_40 = (byte) ax_39;
		if ((al_40 & 0x01) != 0x00)
		{
			di_104 = &Eq_22::bFFFFBA8F;
			si_105 = 0xFE20;
			goto l0C00_0122;
		}
l0C00_0122:
		do
		{
			cx = DPB(cx, 0xA0, 0, 8);
			while (cx != 0x0000)
			{
				0xA000->*di_104 = al_40;
				di_104 = di_104 + 1;
				cx = cx - 0x0001;
			}
			dx = DPB(dx, 0x10, 8, 8);
			do
			{
				cx = cx - 0x0001;
				if (cx != 0x0000)
					continue;
				cx = dx_106;
				dx = dx_106 - 0x0001;
				word16 dx_106 = dx;
			} while (dx != 0x0000);
			di_104 = di_104 + si_105;
			bx = bx - 0x0001;
		} while (bx != 0x0000);
		word16 ax_98 = DPB(dx_106, __inb(0x60), 0, 8);
		ax_100 = ax_39;
		cx = ax_98;
	} while (ax_98 == 0x0000);
	return;
}

