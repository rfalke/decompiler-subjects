// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_050/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, Eq_13 Eq_14::*bx, byte Eq_21::*di, Eq_14 * ds)
{
	bios_video_set_mode(0x13);
	__outw(0x03D4, DPB(ax, 0x20, 8, 8));
	ptr32 es_ax_12 = Mem0[ds:bx + 0x0000:segptr32];
	Eq_19 al_13 = (byte) es_ax_12;
	Eq_21 * es_15 = SLICE(es_ax_12, selector, 16);
	do
	{
		__outb(0x03C9, al_13);
		al_13 = al_13 + 0x95 + C;
		C = cond(al_13);
		if (al_13 != 0x00)
			continue;
		do
		{
			es_15->*di = (byte) cx_57 ^ SLICE(cx_57, byte, 8);
			C = false;
			di = di + 1;
			cx = cx_57 - 0x0001;
			word16 cx_57 = cx;
		} while (cx != 0x0000);
		word16 ax_50 = DPB(cx_57, __inb(0x60), 0, 8);
		al_13 = (byte) (ax_50 - 0x0001);
	} while (ax_50 != 0x0001);
	return;
}

