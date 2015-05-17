// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_092/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_15 Eq_14::*bx, uint16 si)
{
	bios_video_set_mode(0x13);
	__outw(0x03D4, DPB(ax, 0x20, 8, 8));
	while (true)
	{
		int8 al_25 = (byte) (si >>u 0x0001);
		word16 ax_27 = ~(al_25 *s al_25);
		word16 ax_30 = DPB(ax_27, SLICE(ax_27, byte, 8) - 0x8C, 8, 8);
		word16 cx_34 = (word16) bh;
		Eq_43 ax_38 = SEQ((int32) ax_30 % (cx_34 + 0x0001), ax_30) /u (cx_34 + 0x0001);
		word16 ax_48 = ax_38 + si;
		int8 al_55 = (byte) (DPB(ax_48, ((byte) ax_48 ^ SLICE(ax_38 *s DPB(cx_34 + 0x0001, bl, 8, 8), byte, 16)) & 0x20, 0, 8) - 0x0001) - SLICE(ax_38, byte, 8);
		if (al_55 < 0x10)
			al_55 = 0x10;
		(0xA000->*bx).bFFFFFFA0 = al_55;
		bx = bx + 1;
		bh = SLICE(bx, byte, 8);
		bl = (byte) bx;
		if (bx != &Eq_14::t0000)
			continue;
		si = si + 0x0001;
	}
}

