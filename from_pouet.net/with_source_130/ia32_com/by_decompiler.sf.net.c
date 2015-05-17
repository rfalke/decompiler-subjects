// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_130/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100()
{
	bios_video_set_mode(0x13);
	word16 ax_11 = 0x0000;
	byte al_10 = 0x00;
	do
	{
		__outb(0x03C9, al_10);
		__outb(0x03C9, al_10);
		__outb(0x03C9, al_10);
		ax_11 = ax_11 + 0x0001;
		al_10 = (byte) ax_11;
	} while (ax_11 != 0x0000);
	word16 ax_16 = 0xA000;
	byte Eq_38::*bx_19 = &Eq_38::b7D00;
l0C00_0119:
	bx_19 = bx_19 + 1;
	if (bx_19 == &Eq_38::b7E40)
		bx_19 = &Eq_38::b7D00;
	word16 ax_35 = DPB(ax_16, __inb(0x60), 0, 8);
	if (ax_35 != 0x0001)
	{
		0xA000->*bx_19 = 0x40;
		ax_16 = DPB(ax_35 - 0x0001, 0x40, 0, 8);
		do
		{
			byte al_45 = __inb(0x03DA);
			ax_16 = DPB(ax_16, al_45 & 0x08, 0, 8);
		} while ((al_45 & 0x08) == 0x00);
		byte Eq_38::*di_51 = &Eq_38::b7D00;
		di_51 = di_51 + 1;
		while (di_51 != &Eq_38::b7E40)
		{
			byte al_60 = 0xA000->*di_51;
			ax_16 = DPB(ax_16, al_60, 0, 8);
			if (al_60 == 0x00)
				continue;
			0xA000->*di_51 = (byte) (ax_16 - 0x0001);
			ax_16 = ax_16 - 0x0001;
			di_51 = di_51 + 1;
		}
	}
	return;
}

