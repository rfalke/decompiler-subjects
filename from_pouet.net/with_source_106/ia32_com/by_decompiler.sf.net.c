// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_106/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte ch, byte bh)
{
	bios_video_set_mode(0x13);
	byte bl_118 = 0x03;
	word16 bx_119 = DPB(bx, 0x03, 0, 8);
	do
	{
		cx = DPB(cx, 0xC8, 0, 8);
		byte Eq_25::*di_35 = &Eq_25::b0000;
		do
		{
			uint32 dx_ax_47 = cx *u cx;
			uint16 ax_110 = (word16) dx_ax_47;
			uint16 dx_112 = SLICE(dx_ax_47, word16, 16);
			word16 si_53 = 0x0280;
			do
			{
				uint16 dx_61 = SEQ(dx_112, ax_110 + 0x0281 - si_53) % bx_119;
				0xA000->*di_35 = (byte) dx_61 & 0x0F;
				word16 si_77 = si_53 - 0x0001;
				di_35 = di_35 + 1;
				ax_110 = dx_61;
				dx_112 = 0x0000;
				si_53 = si_77 - 0x0001;
			} while (si_77 != 0x0001);
			cx = cx - 0x0001;
		} while (cx != 0x0000);
		do
		{
			word16 ax_90 = DPB(ax_110, __inb(0x60), 0, 8);
			if (ax_90 == 0x0001)
				goto l0C00_013F;
			uint16 ax_108 = DPB(ax_90 - 0x0001, 0x0000->b046C & 0x0F, 0, 8);
			ax_110 = dx_122;
			dx_112 = ax_108;
			uint16 dx_122 = dx_112;
		} while ((byte) dx_122 - (byte) ax_108 <=u 0x00);
		bl_118 = bl_118 + 0x01;
		bx_119 = DPB(bx_119, bl_118, 0, 8);
	} while (bl_118 != 0x00);
	return;
}

