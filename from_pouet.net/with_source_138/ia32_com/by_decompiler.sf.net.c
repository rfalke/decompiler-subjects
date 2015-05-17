// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_138/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, word16 bx, word16 di, byte al)
{
	bios_video_set_mode(0x13);
	word16 ax_4 = DPB(ax, 0xA0, 8, 8);
	do
	{
		Mem14[ax_4 * 0x0002:di + 0x0000:word16] = 0x0013;
		di = di - 0x0001;
	} while (di != 0x0000);
	do
	{
		__outb(0x03C9, 0x00);
		__outb(0x03C9, 0x00);
		byte al_25 = bl >>u 0x02;
		__outb(0x03C9, al_25);
		bx = bx + 0x0001;
		word16 ax_26 = (word16) al_25;
		bl = (byte) bx;
	} while (bx != 0x0000);
	do
	{
		word16 bx_40 = 0x0000;
		word16 dx_44 = 0x0003;
		word16 si_45 = di;
		do
		{
			si_45 = si_45 + 0x0001;
			ax_26 = DPB(ax_97, Mem14[ax_4 * 0x0002:si_45 - 0x0002:byte], 0, 8);
			bx_40 = bx_40 + DPB(ax_97, Mem14[ax_4 * 0x0002:si_45 - 0x0142:byte], 0, 8) + DPB(ax_97, Mem14[ax_4 * 0x0002:si_45 + 0x013E:byte], 0, 8) + ax_26;
			dx_44 = dx_44 - 0x0001;
			word16 ax_97 = ax_26;
		} while (dx_44 != 0x0000);
		word16 ax_66 = DPB(ax_97, Mem14[ax_4 * 0x0002:di + 0x0000:byte], 0, 8);
		word16 bx_69 = bx_40 - ax_66 - (ax_66 << 0x0002);
		Mem77[ax_4 * 0x0002:di + 0x0000:byte] = (byte) ((bx_69 >>u 0x0002) - (bx_69 >>u 0x0009));
		ax_26 = bx_69 >>u 0x0009;
		di = di + 0x0001;
		cx = cx - 0x0001;
		if (cx != 0x0000)
			continue;
		cx = cx - 0x0001;
		while (cx != 0x0000)
		{
			Mem87[ax_4:di + 0x0000:byte] = Mem77[ax_4 * 0x0002:si_45 + 0x0000:byte];
			si_45 = si_45 + 0x0001;
			di = di + 0x0001;
			cx = cx - 0x0001;
		}
		byte al_91 = __inb(0x60);
		ax_26 = DPB(bx_69 >>u 0x0009, al_91 - 0x01, 0, 8);
	} while (al_91 != 0x01);
	bios_video_set_mode(0x03);
	return;
}

