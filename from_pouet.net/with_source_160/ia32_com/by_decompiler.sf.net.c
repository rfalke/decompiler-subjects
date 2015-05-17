// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_160/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, word16 bx, Eq_37 ui16::*di, byte al)
{
	bios_video_set_mode(0x13);
	ui16 ax_4 = DPB(ax, 0xA0, 8, 8);
	uint16 ax_114 = 0x0013;
	do
	{
		Eq_13 al_19 = bl >>u 0x02;
		__outb(0x03C9, al_19);
		__outb(0x03C9, al_19);
		__outb(0x03C9, al_19);
		bx = bx + 0x0001;
		ax_114 = DPB(ax_114, al_19, 0, 8);
		bl = (byte) bx;
	} while (bx != 0x0000);
	do
	{
		word16 bx_35 = 0x0000;
		word16 dx_39 = 0x0003;
		Eq_37 ui16::*si_40 = di;
		do
		{
			si_40 = si_40 + 1;
			ax_114 = DPB(ax_118, ((ax_4 * 0x0002)->*si_40).b0000, 0, 8);
			bx_35 = bx_35 + DPB(ax_118, ((ax_4 * 0x0002)->*si_40).b013E, 0, 8) + DPB(ax_118, ((ax_4 * 0x0002)->*si_40).b013E, 0, 8) + ax_114;
			dx_39 = dx_39 - 0x0001;
			uint16 ax_118 = ax_114;
		} while (dx_39 != 0x0000);
		word16 ax_62 = DPB(ax_118, ((ax_4 * 0x0002)->*di).b0000, 0, 8);
		uint16 bx_65 = bx_35 - ax_62 - (ax_62 << 0x0002);
		((ax_4 * 0x0002)->*di).b0000 = (byte) ((bx_65 >>u 0x0002) - (bx_65 >>u 0x000A));
		ax_114 = bx_65 >>u 0x000A;
		di = di + 1;
		cx = cx - 0x0001;
		if (cx != 0x0000)
			continue;
		do
		{
			Eq_94 ui16::*si_104 = &di->b0000;
			ax_114 = DPB(ax_119, ((ax_4 * 0x0002)->*si_104).b0140, 0, 8);
			((ax_4 * 0x0002)->*di).b0000 = (byte) (DPB(ax_119, ((ax_4 * 0x0002)->*si_104).b0140, 0, 8) + DPB(ax_119, ((ax_4 * 0x0002)->*si_104).b0001, 0, 8) + DPB(ax_119, ((ax_4 * 0x0002)->*si_104).b0001, 0, 8) + ax_114 >>u 0x0002);
			di = di + 1;
			cx = cx - 0x0001;
			uint16 ax_119 = ax_114;
		} while (cx != 0x0000);
		cx = cx - 0x0001;
		while (cx != 0x0000)
		{
			(ax_4->*di).b0000 = ((ax_4 * 0x0002)->*si_104).b0000;
			si_104 = si_104 + 1;
			di = di + 1;
			cx = cx - 0x0001;
		}
		byte al_112 = __inb(0x60);
		ax_114 = DPB(ax_119, al_112 - 0x01, 0, 8);
	} while (al_112 != 0x01);
	bios_video_set_mode(0x03);
	return;
}

