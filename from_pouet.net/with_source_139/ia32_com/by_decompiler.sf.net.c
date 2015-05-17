// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_139/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, Eq_42 Eq_33::*bx, Eq_33 * bp)
{
	bios_video_set_mode(0x13);
	word16 ax_10 = 0x0013;
	Eq_9 al_16 = 0x13;
	do
	{
		__outb(0x03C9, al_16);
		__outb(0x03C9, al_16);
		__outb(0x03C9, al_16 + 0x15);
		al_16 = -(cl >> 0x02);
		cx = cx - 0x0001;
		ax_10 = DPB(ax_10, al_16, 0, 8);
		cl = (byte) cx;
	} while (cx != 0x0000);
	Eq_33 * ax_25 = DPB(ax_10, 0xA0, 8, 8);
	ax_118 = ax_25;
	do
	{
		Eq_33 * ax_118;
		bx = bx + 0x0140;
		word16 cx_45 = 0x0140;
		Eq_42 Eq_33::*si_47 = bx;
		byte bh_49 = SLICE(bx, byte, 8);
		Eq_42 Eq_33::*di_51 = bx;
		do
		{
			uint16 ax_62 = (word16) (bp *u 0x8405);
			si_47 = si_47 + 1;
			byte al_72 = (Mem0[ax_25:si_47 + 0x0000:byte] + Mem0[ax_25:si_47 + 0x0000:byte] >>u 0x01) + SLICE(ax_62 *u 0x0012, byte, 16);
			Eq_48 al_75 = al_72 - 0x08 - (al_72 <u 0x00);
			(ax_25->*di_51).t0000 = al_75;
			bp = ax_118;
			ax_118 = DPB(ax_62, al_75, 0, 8);
			di_51 = di_51 + 1;
			cx_45 = cx_45 - 0x0001;
		} while (cx_45 != 0x0000);
		if (bh_49 != 0xFA)
			continue;
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		do
			;
		while ((__inb(0x03DA) & 0x08) != 0x00);
		Eq_99 Eq_33::*di_107 = di_51 - bx;
		bx = bx - di_107;
		word32 Eq_33::*si_103 = Eq_33::a0280;
		word16 cx_104 = 0x3E30;
		while (cx_104 != 0x0000)
		{
			(ax_25->*di_107).dw0000 = ax_25->*si_103;
			si_103 = si_103 + 1;
			di_107 = di_107 + 4;
			cx_104 = cx_104 - 0x0001;
		}
		byte al_116;
		ax_118 = DPB(ax_118, bios_kbd_check_keystroke(out al_116), 8, 8);
	} while (bx == &Eq_33::t0000);
	bios_video_set_mode(0x03);
	return;
}

