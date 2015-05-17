// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_158/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, word16 bp, Eq_77 Eq_63::*di)
{
	bios_video_set_mode(0x13);
	word16 ax_110 = 0x0013;
	do
	{
		__outb(0x03C8, cl);
		__outb(0x03C9, 0x00);
		__outb(0x03C9, 0x00);
		__outb(0x03C9, cl << 0x04);
		cx = cx - 0x0001;
		cl = (byte) cx;
	} while (cx != 0x0000);
l0C00_011C:
	ax_110 = DPB(ax_110, __inb(0x40), 0, 8);
	bp = bp + ax_110;
	Eq_38 dx_46 = 0x0005;
	do
	{
		word16 si_101 = bp + 0x0140;
		if (dx_46 == 0x0014)
			goto l0C00_011C;
		dx_46 = dx_46 + 0x0001;
		bp = bp - 0x0140;
		Eq_38 cx_102 = -dx_46;
		do
		{
			ss->wFFFC = (int16) sqrt((real64) ss->wFFFC);
			ax_110 = (word16) (cx_102 *s cx_102);
			Eq_57 bx_88 = (word16) (dx_134 *u dx_134) - ax_110;
			Mem98[0xA000:bx_88 + si_101:byte] = 0x0F;
			Eq_67 bx_108 = -bx_88;
			Mem100[0xA000:bx_108 + si_101:byte] = 0x0F;
			dx_46 = dx_134;
			si_101 = si_101 + 0x0000;
			cx_102.u0 = cx_102.u0;
			Eq_38 dx_134 = dx_46;
		} while (cx_102 <= dx_134);
		do
		{
			byte al_111 = Mem100[0xA000:di + 0x0000:byte];
			ax_110 = DPB(ax_110, al_111, 0, 8);
			if (al_111 != 0xFEC0)
				Mem133[0xA000:di + 0x0000:byte] = al_111 - 0x01;
			di = di - bx_108;
			bx_108 = bx_108 - 0x0001;
		} while (bx_108 != 0x0000);
	} while ((__inb(0x60) & 0x01) == 0x00);
	bios_video_set_mode(0x03);
	return;
}

