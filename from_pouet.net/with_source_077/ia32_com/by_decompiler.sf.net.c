// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_077/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte Eq_42::*bp, byte cl)
{
	bios_video_set_mode(0x13);
	do
	{
		word16 Eq_12::*si_28 = Eq_12::a013F;
		byte Eq_12::*di_29 = &Eq_12::b0000;
		word16 cx_33 = DPB(cx, 0xFC, 8, 8);
		do
		{
			Eq_7 Eq_12::*si_39 = si_28 + 1;
			word16 ax_41 = 0xA000->*si_28 + (0xA000->*si_39).wFFFFFFFF;
			0xA000->*di_29 = (byte) (DPB(ax_41, SLICE(ax_41, byte, 8) + (byte) ax_41, 8, 8) >>u 0x000A);
			si_28 = si_39 - 0x0001;
			di_29 = di_29 + 1;
			cx_33 = cx_33 - 0x0001;
		} while (cx_33 != 0x0000);
		cx = DPB(cx_33, 0x02, 8, 8);
		do
		{
			0xA000->*di_29 = ss->*bp & 0x0F | 0x10;
			bp = bp + 1;
			di_29 = di_29 + 1;
			cx = cx - 0x0001;
		} while (cx != 0x0000);
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
	} while (__inb(0x60) != 0x01);
	bios_video_set_mode(0x03);
	return;
}

