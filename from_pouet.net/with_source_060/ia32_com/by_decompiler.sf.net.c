// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_060/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100()
{
	bios_video_set_mode(0x13);
	word16 cx_11 = 0x0FFF;
	byte Eq_12::*si_10 = &Eq_12::b0FFF;
	do
	{
		0xA000->*si_10 = 0x28;
		si_10 = si_10 + 343 ^ 0x0934;
		cx_11 = cx_11 - 0x0001;
	} while (cx_11 != 0x0000);
	byte al_22 = 0xA000->b0000;
	Eq_27 Eq_12::*si_19 = &Eq_12::b0000;
	word16 ax_24 = DPB(ax, al_22, 0, 8);
	while (true)
	{
		byte ah_28 = (0xA000->*si_19).b0140;
		(0xA000->*si_19).b0140 = al_22;
		ax_24 = DPB(ax_24, ah_28, 0, 8);
		al_22 = ah_28;
		si_19 = si_19 + ax_24 + 0x0001;
	}
}

