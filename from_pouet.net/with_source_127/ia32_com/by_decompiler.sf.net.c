// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_127/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(segptr32 Eq_8::*bx, byte Eq_7::*di, Eq_8 * ds)
{
	bios_video_set_mode(0x13);
	Eq_7 * es_10 = SLICE(ds->*bx, selector, 16);
	while (true)
	{
		int32 dx_ax_25 = SEQ(dx, di);
		word16 cx_26 = 0x0140;
		Eq_44 dx_ax_28 = SEQ(dx_ax_25 % 0x0140, di);
		dx = DPB(dx_ax_25 % 0x0140, SLICE(dx_ax_25 % 0x0140, byte, 8) - 0x01, 8, 8);
		int16 bx_37 = 0x0000;
		int16 si_38 = 0x0000;
		do
		{
			int16 si_45 = si_38 *s bx_37;
			int16 bx_47 = bx_37 *s bx_37;
			if (OVERFLOW(bx_47))
				break;
			int16 bp_64 = si_38 *s si_38;
			if (OVERFLOW(bp_64))
				;
			word16 bx_67 = bx_47 + bp_64;
			if (OVERFLOW(bx_67))
				;
			bx_37 = (bx_67 - bp_64 - bp_64 >> 0x0006) + dx;
			si_38 = (si_45 * 0x0002 >> 0x0006) + (dx_ax_28 /u 0x0140 - 0x0064);
			cx_26 = cx_26 - 0x0001;
		} while (cx_26 != 0x0000);
		es_10->*di = (byte) cx_26;
		di = di + 1;
	}
}

