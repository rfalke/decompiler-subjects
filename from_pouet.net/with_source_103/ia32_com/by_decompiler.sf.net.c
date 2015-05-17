// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_103/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, byte ah, byte bh)
{
	bios_video_set_mode(0x13);
	__outb(0x03C8, 0x03);
	word16 ax_4 = DPB(ax, 0x13, 0, 8);
	word16 dx_36 = 0x03C9;
	do
	{
		__outb(0x03C9, 0x00);
		__outb(0x03C9, 0x00);
		__outb(0x03C9, cl >>u 0x02);
		cx = cx - 0x0001;
		cl = (byte) cx;
	} while (cx != 0x0000);
	word16 bx_22 = DPB(bx, 0x64, 0, 8);
	while (true)
	{
		word16 di_37 = 0x0000;
		word16 si_40 = dx_36;
		word16 cx_41 = 0xFA00;
		while (cx_41 != 0x0000)
		{
			Mem49[0xA000:di_37 + 0x0000:byte] = Mem0[ax_4:si_40 + 0x0000:byte];
			si_40 = si_40 + 0x0001;
			di_37 = di_37 + 0x0001;
			cx_41 = cx_41 - 0x0001;
		}
		byte al_54 = __inb(0x60);
		if (al_54 == 0x48)
			bx_22 = bx_22 - 0x0001;
		if (al_54 == 0x50)
			bx_22 = bx_22 + 0x0001;
		SEQ(0xA000, 0x0050)[bx_22 * 0x0140] = 0x02;
		dx_36 = dx_36 + 0x0001;
	}
}

