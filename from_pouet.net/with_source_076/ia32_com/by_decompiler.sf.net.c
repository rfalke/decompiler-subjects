// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_076/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte cl, byte ah, byte bh)
{
	bios_video_set_mode(0x13);
	byte al_24 = 0x13;
	do
	{
		bh = bh + 0x01;
		byte ch_30 = 0xC8;
		cx = DPB(cx, 0xC8, 8, 8);
		do
		{
			uint8 al_40 = (al_24 ^ ah) + bh;
			ah = SLICE(__aam(SLICE(al_40 *u al_40, byte, 8) + ch_30 + bh), byte, 8);
			Eq_22 Eq_29::*di_38 = (cx >>u 0x0002) + cx;
			(0xA000->*di_38).b0000 = ah + 0x20;
			(0xA000->*di_38).b0001 = ah + 0x20;
			cx = cx - 0x0001;
			al_24 = ah + 0x20;
			ch_30 = SLICE(cx, byte, 8);
		} while (cx != 0x0000);
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		al_24 = __inb(0x60);
	} while (al_24 != 0x01);
	bios_video_set_mode(0x03);
	return;
}

