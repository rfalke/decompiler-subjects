// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_068/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_7 Eq_8::*bx, Eq_31 bp, byte ah, Eq_8 * ds)
{
	bios_video_set_mode(0x13);
	ptr32 es_bx_8 = Mem0[ds:bx + 0x0000:segptr32];
	int16 ax_14 = DPB(ax, 0x13, 0, 8);
	Eq_17 * es_9 = SLICE(es_bx_8, selector, 16);
	Eq_19 bx_10 = (word16) es_bx_8;
	while (true)
	{
		uint16 bx_30;
		word16 dx_26 = -bx_10 + bp;
		int16 ax_19 = ax_14 *s 0x0003;
		word16 bx_23 = bx_10 + bp;
		uint16 dx_27 = dx_26 + 0x004B;
		if (ax_19 <= 0x0000)
			bx_30 = bx_23 + 0x0050;
		else
		{
			bx_30 = bx_23 - 0x0050;
			dx_27 = dx_26 + 0x007D;
		}
		Eq_31 dx_37 = dx_27 >>u 0x0001;
		bx_10 = bx_30 >>u 0x0001;
		word16 di_40 = dx_37 *s 0x0140 - 0x0069;
		Mem42[es_9:bx_10 + di_40:byte] = 0x04;
		(bx_10 - 0x0004)[di_40] = 0x14;
		ax_14 = ax_19 + bx_30;
		bp = dx_37;
	}
}

