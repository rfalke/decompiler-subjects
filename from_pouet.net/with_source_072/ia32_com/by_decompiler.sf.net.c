// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_072/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(uint16 cx, uint16 Eq_12::*si, int8 Eq_35::*di, byte bh, Eq_12 * ds)
{
	bios_video_set_mode(0x13);
	uint16 bx_23 = DPB(bx, 0x04, 0, 8);
	do
	{
		bx_23 = bx_23 + 0x0001;
		do
		{
			word32 dx_ax_56 = SEQ(0x0000, di);
			uint16 dx_134 = dx_ax_56 % 0x0140;
			uint16 ax_61 = SEQ(dx_ax_56 % 0x0140, di) /u 0x0140;
			do
			{
				uint16 ax_77 = SEQ(ds->*si *u ax_61 % bx_23, ax_61) /u bx_23;
				cx = ax_77;
				byte cl_100 = (byte) ax_77;
				ax_61 = dx_143;
				dx_134 = cx;
				byte dl_135 = (byte) cx;
				uint16 dx_143 = dx_134;
			} while (P);
			int8 al_104 = 0x10;
			word16 ax_105 = DPB(dx_143, 0x10, 0, 8);
			do
			{
				if ((cl_100 & dl_135) < 0x00)
					break;
				ui16 dx_128 = dx_134 * 0x0002;
				uint16 cx_132 = cx + bx_23;
				uint16 dx_131 = DPB(dx_128, (byte) dx_128 + 0xC0, 0, 8);
				ax_105 = ax_105 + 0x0001;
				dx_134 = cx_132;
				dl_135 = (byte) cx_132;
				cx = dx_131;
				cl_100 = (byte) dx_131;
				al_104 = (byte) ax_105;
			} while (al_104 < 0x1F);
			0xA000->*di = al_104;
			di = di + 1;
		} while (di != &Eq_35::b0000);
	} while ((int16) __inb(0x60) != 0x0001);
	return;
}

