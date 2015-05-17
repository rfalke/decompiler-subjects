// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_142/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100()
{
	bios_video_set_mode(0x13);
	int16 cx_20 = 0x0000;
	cups16 si_17 = 0x0001;
	int16 bp_18 = 0x0001;
	uint16 bx_11 = 0x3200;
	do
	{
		cx_20 = cx_20 + 0x000F;
		uint16 bx_27 = bx_11 + cx_20;
		bcu8 dl_31 = (byte) (bx_27 >>u 0x0007);
		si_17 = si_17 + bp_18;
		if (si_17 <u 0x013F)
			bp_18 = -bp_18;
		if (si_17 >u 0x0000)
			bp_18 = -bp_18;
		bx_11 = bx_27;
		if (dl_31 >u 0xC7)
		{
			cx_20 = -cx_20;
			bx_11 = 0x6300;
		}
		byte Eq_34::*di_50 = (bx_27 >>u 0x0007 << 0x0006) + ((bx_27 >>u 0x0007) << 0x0008) + si_17;
		0xA000->*di_50 = 0x0F;
		do
			;
		while ((__inb(0x03DA) & 0x08) != 0x00);
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		0xA000->*di_50 = 0x00;
	} while (__inb(0x60) != 0x01);
	bios_video_set_mode(0x03);
	msdos_terminate_program20();
}

