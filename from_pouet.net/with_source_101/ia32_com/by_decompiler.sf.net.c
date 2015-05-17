// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_101/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word32 eax, word16 cx, int16 bx, word16 bp)
{
	bios_video_set_mode(0x13);
	ui32 eax_19 = DPB(eax, 0x13, 0, 8);
	while (true)
	{
		ui32 eax_20 = eax_19 * 0x00000003;
		int16 ax_22 = (word16) eax_20 + cx;
		word32 eax_24 = DPB(eax_20, ax_22, 0, 16);
		if (ax_22 <= 0xC000)
		{
			bp = bp + 0x0001;
			bx = bx + 0x0001;
		}
		else if (ax_22 <= 0x0000)
		{
			cx = cx + 0x0001;
			bp = bp + 0x0001;
l0C00_012B:
			bx = bx - 0x0001;
		}
		else if (ax_22 <= 0x4000)
		{
			bp = bp - 0x0001;
			bx = bx + 0x0001;
		}
		else
		{
			bp = bp - 0x0001;
			goto l0C00_012B;
		}
		byte al_32 = (byte) (ax_22 + 0x0001);
		Eq_24 Eq_28::*di_34 = bx *s 0x0140 + bp;
		(0xA000->*di_34).b0000 = al_32;
		(0xA000->*di_34).b0001 = al_32;
		eax_19 = DPB(eax_24, 0x00, 0, 8);
	}
}

