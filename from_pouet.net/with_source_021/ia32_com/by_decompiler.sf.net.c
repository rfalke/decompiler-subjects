// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_021/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 dx, Eq_27 Eq_9::*bx, byte Eq_33::*di, byte ah, Eq_9 * ds)
{
	byte al_15 = 0x13;
	word16 ax_14 = DPB(ax, 0x13, 0, 8);
	while (true)
	{
		bios_video_set_mode(al_15);
		Eq_33 * es_26 = SLICE((ds->*bx).ptr0000, selector, 16);
		do
		{
			byte al_31 = ds->b0103;
			byte al_33;
			byte ah_34;
			int8 al_37 = (byte) (DPB(ax_14, al_31, 0, 8) + di + __aaa(al_31, ah, &al_33, &ah_34));
			Eq_25 ax_38 = al_37 *s al_37;
			ax_14 = ax_38 - bx - (ax_38 <u 0x0000);
			al_15 = (byte) ax_14;
			es_26->*di = al_15;
			ah = SLICE(ax_14, byte, 8);
			di = di + 1;
			dx = dx - 0x0001;
		} while (dx != 0x0000);
		bx = bx - 0x0001;
	}
}

