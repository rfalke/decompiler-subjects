// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_063/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100()
{
	bios_video_set_mode(0x13);
	word16 cx_10 = 0x0FFF;
	byte Eq_12::*si_11 = &Eq_12::b0FFF;
	do
	{
		0xA000->*si_11 = 0x28;
		si_11 = si_11 + 343 ^ 0x0934;
		cx_10 = cx_10 - 0x0001;
	} while (cx_10 != 0x0000);
	byte al_21 = 0xA000->b0000;
	Eq_27 Eq_12::*si_18 = &Eq_12::b0000;
	word16 ax_23 = DPB(ax, al_21, 0, 8);
	while (true)
	{
		byte ah_27 = (0xA000->*si_18).b0140;
		(0xA000->*si_18).b0140 = al_21;
		word16 ax_31 = DPB(ax_23, ah_27, 0, 8);
		Eq_41 Eq_12::*si_32 = si_18 + ax_31;
		ax_23 = DPB(ax_31, (0xA000->*si_32).bFFFFFEC0, 8, 8);
		(0xA000->*si_32).bFFFFFEC0 = ah_27;
		al_21 = ah_27;
		si_18 = si_32 + 0x0002;
	}
}

