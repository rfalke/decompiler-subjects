// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_031/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_9 Eq_8::*bx, byte Eq_13::*di, Eq_8 * ds)
{
	bios_video_set_mode(0x13);
	Eq_7 es_cx_6 = (ds->*bx).t0000;
	Eq_13 * es_7 = SLICE(es_cx_6, selector, 16);
	word16 cx_11 = (word16) es_cx_6;
	do
	{
		byte al_13 = (byte) cx_11;
		__outb(0x03C9, al_13);
		__outb(0x03C9, al_13);
		__outb(0x03C9, al_13);
		cx_11 = cx_11 - 0x0001;
		byte ch_16 = SLICE(cx_11, byte, 8);
	} while (cx_11 != 0x0000);
	while (true)
	{
		bx = bx + 1;
		byte bh_28 = SLICE(bx, byte, 8);
		C = !C;
		do
		{
			al_13 = al_13 + ch_16 + C & 0x7F ^ bh_28;
			es_7->*di = al_13;
			cx_11 = cx_11 - 0x0001;
			C = false;
			di = di + 1;
			ch_16 = SLICE(cx_11, byte, 8);
		} while (cx_11 != 0x0000);
	}
}

