// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_057/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_9 Eq_8::*bx, byte Eq_8::*si, byte Eq_8::*di, byte ah, Eq_8 * ds)
{
	bios_video_set_mode(0x13);
	Eq_7 ds_cx_8 = (ds->*bx).t0000;
	word16 ax_24 = DPB(ax, 0x13, 0, 8);
	Eq_8 * ds_9 = SLICE(ds_cx_8, selector, 16);
	word16 cx_10 = (word16) ds_cx_8;
	do
	{
		Eq_7 dx_27 = (ds_9->*bx).t0000;
		(ds_9->*bx).w0140 = (ds_9->*bx).w0140 | dx_27;
		(ds_9->*bx).w0001 = (ds_9->*bx).w0001 | dx_27;
		bx = bx - 0x0001;
		cx_10 = cx_10 - 0x0001;
		if (cx_10 != 0x0000)
			continue;
		word16 ax_40 = DPB(ax_24, ds_9->*si, 0, 8);
		ds_9->*di = (byte) (ax_40 + 0x0001);
		word16 ax_49 = DPB(ax_40 + 0x0001, __inb(0x60), 0, 8);
		si = si + 1;
		di = di + 1;
		cx_10 = 0x0065;
		ax_24 = ax_49 - 0x0001;
	} while (ax_49 != 0x0001);
	return;
}

