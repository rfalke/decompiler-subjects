// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_027/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100()
{
	bios_video_set_mode(0x13);
	word16 ax_12 = 0x0013;
	Eq_9 Eq_17::*di_13 = &Eq_17::t0000;
	do
	{
		word16 ax_14 = ax_12 + di_13;
		Eq_13 al_17 = (byte) ax_14 + SLICE(ax_14, byte, 8);
		(0xA000->*di_13).t0000 = al_17;
		Eq_9 Eq_17::*di_20 = di_13 + 1;
		ax_12 = DPB(ax_14, al_17, 0, 8);
		di_13 = di_20;
	} while (di_20 != &Eq_17::t0000);
	Mem26[ss:fp - 0x0002:word16] = 0xA000;
	Eq_13 Eq_17::*si_30 = Eq_17::a002D;
	while (true)
	{
		Mem34[0xA000:di_13 + 0x0000:word16] = Mem26[0xA000:si_30 + 0x0000:word16];
		si_30 = si_30 + 1;
		di_13 = di_13 + 2;
	}
}

