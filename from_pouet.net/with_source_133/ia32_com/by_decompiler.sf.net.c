// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_133/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte bh)
{
	bios_video_set_mode(0x13);
	int16 cx_19 = 0x0000;
	uint16 bx_11 = DPB(bx, 0x14, 0, 8) << 0x0007;
	do
	{
		cx_19 = cx_19 + 0x000F;
		uint16 bx_27 = bx_11 + cx_19;
		bx_11 = bx_27;
		if ((byte) (bx_27 >>u 0x0007) >u 0xC7)
		{
			cx_19 = -cx_19;
			bx_11 = DPB(bx_27, 0xC6, 0, 8) << 0x0007;
		}
		Eq_15 Eq_26::*di_44 = (bx_27 >>u 0x0007 << 0x0006) + ((bx_27 >>u 0x0007) << 0x0008);
		(0xA000->*di_44).b00A0 = 0x0F;
		do
			;
		while ((__inb(0x03DA) & 0x08) != 0x00);
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		(0xA000->*di_44).b00A0 = 0x00;
	} while (__inb(0x60) != 0x01);
	bios_video_set_mode(0x03);
	msdos_terminate_program20();
}

