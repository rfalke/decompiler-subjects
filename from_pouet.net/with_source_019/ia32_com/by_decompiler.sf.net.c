// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_019/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_36 Eq_13::*di, word16 wArg00)
{
	bios_video_set_mode(0x13);
	word16 cx_18 = (ss->*wArg00).w0002;
	Eq_13 * ds_10 = (ss->*wArg00).ptr0004;
	int16 Eq_8::*sp_11 = &wArg00->ptr0004;
l0C00_0107:
	int16 ax_20 = ss->*sp_11;
	byte ah_25;
	Eq_25 al_24;
	__aaa((byte) ax_20, SLICE(ax_20, byte, 8), &al_24, &ah_25);
	sp_11 = sp_11 + 1;
	Eq_25 v10_33 = (ds_10->*di).t0000;
	(ds_10->*di).t0000 = al_24;
	di = di + DPB(ax_20, v10_33, 0, 8);
	cx_18 = cx_18 - 0x0001;
	while (cx_18 == 0x0000)
	{
		ax_20 = (int16) v10_33;
		di = di + 1;
		al_24 = (byte) ax_20;
		cx_18 = cx_18 + 0x0001;
		v10_33 = (ds_10->*di).t0000;
		(ds_10->*di).t0000 = al_24;
		di = di + DPB(ax_20, v10_33, 0, 8);
		cx_18 = cx_18 - 0x0001;
	}
}

