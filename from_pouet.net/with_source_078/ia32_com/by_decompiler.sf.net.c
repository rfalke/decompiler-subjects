// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_078/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, word16 bx, word16 si)
{
	bios_video_set_mode(0x13);
	word16 ax_15 = si;
	do
	{
		__outb(0x03C9, (byte) bx);
		Eq_14 al_30 = (byte) ax_15;
		__outb(0x03C9, al_30);
		__outb(0x03C9, al_30);
		bx = bx + 0x0001;
		cx = cx - 0x0001;
	} while (cx != 0x0000);
	do
	{
		Eq_29 Eq_34::*cx_50 = DPB(cx, 0x7F, 8, 8);
		Eq_29 Eq_34::*di_51 = cx_50;
		do
		{
			uint8 al_59 = al_30 + Mem0[0xA000:di_51 + 0x013E:byte] + (0xA000->*di_51).b0142 + (0xA000->*di_51).b0282;
			(0xA000->*di_51).t0000 = al_59 >>u 0x02;
			al_30 = al_59 >>u 0x02;
			di_51 = di_51 + 1;
			cx_50 = cx_50 - 0x0001;
		} while (cx_50 != &Eq_34::t0000);
		cx = DPB(cx_50, 0xA0, 0, 8);
		while (cx != 0x0000)
		{
			(0xA000->*di_51).t0000 = __in(0x0040);
			di_51 = di_51 + 2;
			cx = cx - 0x0001;
		}
		bios_kbd_check_keystroke(out al_30);
	} while (al_59 >>u 0x02 == 0x00);
	bios_video_set_mode(0x03);
	return;
}

