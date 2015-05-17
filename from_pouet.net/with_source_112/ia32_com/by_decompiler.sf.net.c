// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_112/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(segptr32 Eq_14::*bx, byte Eq_13::*di, byte ah, byte ch, Eq_14 * ds)
{
	bios_video_set_mode(0x13);
	byte al_12 = 0x13;
	word16 ax_13 = DPB(ax, 0x13, 0, 8);
	Eq_13 * ds_9 = SLICE(ds->*bx, selector, 16);
	do
	{
		__outb(0x03C9, al_12);
		ax_13 = ax_13 + 0x0001;
		al_12 = (byte) ax_13;
	} while (ax_13 != 0x0000);
	word16 si_100 = 0x0141;
	while (true)
	{
		cx = DPB(cx, 0x20, 0, 8);
		di_114 = di;
		do
		{
			byte Eq_13::*di_114;
			Mem81[ss:fp - 0x000E:word16] = 0x0140;
			word16 cx_88 = DPB(cx, 0x20, 0, 8);
			di_90 = di_114;
			do
			{
				byte Eq_13::*di_90;
				ds_9->*di_90 = ds_9->*di_90 + 0x01;
				di_90 = di_90 + 1;
				cx_88 = cx_88 - 0x0001;
			} while (cx_88 != 0x0000);
			si_100 = si_145;
			di_114 = di_114 + 0x0140;
			cx = cx - 0x0001;
			word16 si_145 = si_100;
		} while (cx != 0x0000);
		di = di + si_145;
		word32 dx_ax_124 = SEQ(0x0000, di);
		if ((SEQ(dx_ax_124 % 0x0140, di) /u 0x0140 & 0x007F) == 0x0000)
			si_100 = si_145 ^ 0x007E;
		if ((dx_ax_124 % 0x0140 & 0x00FF) == 0x0000)
			si_100 = si_100 ^ 0xFF80;
	}
}

