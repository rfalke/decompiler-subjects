// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_173/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(uint16 cx, word16 bp, Eq_63 * ds)
{
	bios_video_set_mode(0x13);
	do
	{
		__outb(0x03C9, (byte) cx);
		uint16 ax_12 = cx >>u 0x0001;
		__outb(0x03C9, (byte) ax_12);
		__outb(0x03C9, (byte) (ax_12 >>u 0x0001));
		cx = cx - 0x0001;
	} while (cx != 0x0000);
	byte Eq_51::*di_18 = &Eq_51::b0000;
	do
	{
		Eq_35 dx_39 = SEQ(0x0000, di_18) % ds->w0157;
		Eq_31 ax_41 = SEQ(dx_39, di_18) /u ds->w0157;
		int16 dx_104 = dx_39 - 0x00A0;
		if (dx_39 <= 0x00A0)
			dx_104 = 0x00A0 - dx_39;
		if (ax_41 > 0x0064)
			return;
		if (ax_41 - 0x0039 < dx_104 *s 0x0007 >> 0x0002)
			return;
		0xA000->*di_18 = (byte) (ax_41 - 0x0039 + bp ^ dx_104 + bp);
		di_18 = di_18 + 1;
		cx = cx - 0x0001;
		if (cx != 0x0000)
			continue;
		bp = bp + 0x0001;
	} while (__inw(0x60) != 0x0001);
	bios_video_set_mode(0x03);
	return;
}

