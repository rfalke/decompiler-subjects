// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_069/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte ch, byte dh)
{
	bios_video_set_mode(0x13);
	int16 dx_24 = DPB(dx, 0x40, 0, 8);
	int16 bp_10 = dx_24;
	Eq_12 si_11 = 0x6F0C;
	while (true)
	{
		byte Eq_14::*di_30 = bp_10 *s 0x0140 + dx_24;
		cx = DPB(cx, 0x1E, 0, 8);
		do
		{
			0xA000->*di_30 = 0xA000->*di_30 + 0x01;
			di_30 = di_30 + 1;
			cx = cx - 0x0001;
		} while (cx != 0x0000);
		int16 ax_44 = si_11 *s 0x4E6D;
		uint16 ax_52 = -((ax_44 << 0x0001) + 0x0061 + (ax_44 << 0x0001 <u 0x0000) >>u 0x0001) << 0x0001 & 0x7FFE;
		si_11 = ax_52 >>u 0x0001;
		if ((byte) (ax_52 >>u 0x0001) >=u 0x80)
			dx_24 = dx_24 + 0x0001 + 0x0001;
		dx_24 = dx_24 - 0x0001;
		bp_10 = bp_10 + 0x0001;
	}
}

