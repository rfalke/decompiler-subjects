// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_098/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100( Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::* Eq_19::*si, byte ah, byte ch, byte bh, selector ds)
{
	bios_video_set_mode(0x12);
	while (true)
	{
		Mem32[0x0035:si + 0x0000:word16] = si;
		do
		{
			cx = DPB(cx, 0x50, 0, 8);
			do
			{
				__syscall(0x29);
				cx = cx - 0x0001;
			} while (cx != 0x0000);
		} while (P);
	}
}

