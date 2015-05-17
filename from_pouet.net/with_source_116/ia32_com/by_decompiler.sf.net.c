// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_116/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(int16 cx, Eq_7 Eq_8::*bx, Eq_8 * ds)
{
	bios_video_set_mode(0x13);
	ptr32 ds_bx_6 = Mem0[ds:bx + 0x0000:segptr32];
	Eq_13 * ds_7 = SLICE(ds_bx_6, selector, 16);
	int16 bx_36 = (word16) ds_bx_6;
	do
	{
		Eq_34 al_21 = cl >>u 0x01;
		byte al_22 = al_21 - 0x40;
		ax = DPB(ax, al_21 - 0x40, 0, 8);
		if (al_21 >= 0x40)
		{
			al_22 = ~(al_21 - 0x40);
			ax = DPB(ax, al_22, 0, 8);
		}
		__outb(0x03C9, al_22);
		__outb(0x03C9, al_22);
		__outb(0x03C9, al_22);
		cx = cx - 0x0001;
		cl = (byte) cx;
	} while (cx != 0x0000);
	do
	{
		int16 cx_40 = cx - bx_36;
		cx = cx_40 >> 0x0001;
		bx_36 = bx_36 + (cx_40 >> 0x0001);
		if (((byte) __rdtsc() & 0x04) != 0x00)
		{
			cx = bx_36 + 0x0040;
			bx_36 = -(cx_40 >> 0x0001) + 0x0040;
		}
		byte Eq_13::*di_56 = bx_36 *s 0xFEC0 + 0xBBF4 + cx;
		ds_7->*di_56 = ds_7->*di_56 + 0x01;
		word16 ax_61 = DPB(ax, __inb(0x60), 0, 8);
		ax = ax_61 - 0x0001;
	} while (ax_61 != 0x0001);
	return;
}

