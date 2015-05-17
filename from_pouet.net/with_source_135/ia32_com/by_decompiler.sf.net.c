// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_135/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, byte ah, Eq_48 * ds)
{
	bios_video_set_mode(0x13);
	byte al_17 = 0x13;
	word16 ax_16 = DPB(ax, 0x13, 0, 8);
	byte Eq_26::*di_27 = Eq_26::a0000;
	do
	{
		__outb(0x03C9, al_17);
		ax_16 = ax_16 + 0x0001;
		al_17 = (byte) ax_16;
		cx = cx - 0x0001;
	} while (cx != 0x0000);
	do
	{
		Mem32[ss:fp - 0x0004:word16] = 0xA000;
		0xA000->*di_27 = 0xA000->*di_27 + 0x01;
		word16 di_41 = di_27 + 1;
		uint16 dx_48 = SEQ(0x0000, di_41 - 0x0001) % ds->w015E;
		uint16 ax_50 = SEQ(dx_48, di_41 - 0x0001) /u ds->w015E;
		if (dx_48 == 0x0000)
			ds->w0160 = 0x0001;
		if (dx_48 == 0x013F)
			ds->w0160 = 0xFFFF;
		if (ax_50 == 0x0000)
			ds->w0162 = 0x0140;
		if (ax_50 == 0x00C7)
			ds->w0162 = 0xFEC0;
		di_27 = di_41 - 0x0001 + ds->w0160 + ds->w0162;
	} while (__inb(0x60) != 0x01);
	return;
}

