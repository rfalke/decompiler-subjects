// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_041/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte bl)
{
	bios_video_set_mode(0x03);
	byte bh_11 = 0xB8;
	word16 bx_5 = DPB(bx, 0xB8, 8, 8);
	bx_10 = bx_5;
	while (true)
	{
		word16 bx_10;
		Eq_15 word16::*bx_14 = DPB(bx_10, bh_11 & 0x3F, 8, 8);
		Eq_14 ax_15 = __inw(0x40);
		if ((ax_15 & 0xF5F0) != 0x0000)
		{
			ax_15 = (bx_5->*bx_14).t0000;
			Eq_14 v11_37 = (bx_5->*bx_14).t0000 >>u 0x01;
			(bx_5->*bx_14).t0000 = v11_37;
			if (v11_37 != 0x00)
			{
l0C00_0118:
				(bx_5->*bx_14).t00A0 = ax_15;
			}
		}
		else
			goto l0C00_0118;
		bx_10 = bx_14 - 0x0002;
		bh_11 = SLICE(bx_14 - 0x0002, byte, 8);
	}
}

