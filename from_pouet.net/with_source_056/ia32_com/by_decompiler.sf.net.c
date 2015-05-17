// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_056/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, Eq_7 Eq_8::*bx, byte Eq_17::*si, byte Eq_17::*di, byte ah, Eq_8 * ds)
{
	bios_video_set_mode(0x13);
	ptr32 ds_bx_8 = Mem0[ds:bx + 0x0000:segptr32];
	word16 ax_22 = DPB(ax, 0x13, 0, 8);
	Eq_17 * ds_9 = SLICE(ds_bx_8, selector, 16);
	Eq_19 Eq_17::*bx_10 = (word16) ds_bx_8;
	while (true)
	{
		word16 dx_28 = (ds_9->*bx_10).w0000;
		(ds_9->*bx_10).w0140 = (ds_9->*bx_10).w0140 | dx_28;
		(ds_9->*bx_10).w0001 = (ds_9->*bx_10).w0001 | dx_28;
		bx_10 = bx_10 - 0x0001;
		if (bx_10 == &Eq_17::t0000)
			bx_10 = &Eq_17::tFFFFFEB0;
		cx = cx - 0x0001;
		if (cx != 0x0000)
			continue;
		word16 ax_45 = DPB(ax_22, ds_9->*si, 0, 8);
		ds_9->*di = (byte) (ax_45 + 0x0001);
		si = si + 1;
		ax_22 = ax_45 + 0x0001;
		di = di + 1;
		cx = DPB(cx, 0x1F, 0, 8);
	}
}

