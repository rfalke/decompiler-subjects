// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_022/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, word16 di, byte bl, byte ah)
{
	bios_video_set_mode(0x13);
	word16 ax_15 = DPB(ax, 0x13, 0, 8);
	word16 bx_7 = DPB(bx, 0xA0, 8, 8);
l0C00_0108:
	byte al_18 = __inb(0x40);
	ax_15 = DPB(ax_15, al_18, 0, 8);
	Eq_20 al_20;
	bool C_22 = __aaa(al_18, ah, &al_20, &ah);
	Eq_28 word16::*di_31 = di - ax_15 - C_22;
	(bx_7->*di_31).t0000 = al_20;
	di = &di_31->t0001;
	cx = cx - 0x0001;
	while (cx == 0x0000)
	{
		Eq_20 v14_39 = (bx_7->*di_31).t0001;
		(bx_7->*di_31).t0001.u0 = 0x00;
		ah = 0x00;
		C_22 = false;
		al_20 = v14_39;
		ax_15 = (word16) v14_39;
		cx = cx + 0x0001;
		di_31 = di - ax_15 - C_22;
		(bx_7->*di_31).t0000 = al_20;
		di = &di_31->t0001;
		cx = cx - 0x0001;
	}
}

