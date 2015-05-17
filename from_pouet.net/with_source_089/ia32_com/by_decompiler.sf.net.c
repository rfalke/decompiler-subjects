// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_089/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte ah, Eq_16 * ds)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	word16 ax_16 = DPB(ax, 0x13, 0, 8)
	Eq_11 Eq_16::*di_10 = Eq_16::aFFFFF93F
	word16 cx_12 = 0xF800
l0C00_010D:
	Eq_15 al_21 = (ds->*di_10).t0000
	Eq_15 al_22 = al_21 >>u 0x01
	ax_16 = DPB(ax_16, al_21 >>u 0x01, 0, 8);
	branch (cx_12 & 0xFE2F) != 0x0000 l0C00_0119
l0C00_0117:
	al_22.u0 = 0x5B;
	ax_16 = DPB(ax_16, 0x5B, 0, 8);
l0C00_0119:
	(ds->*di_10).t0000 = al_22;
	di_10 = di_10 + 1;
	branch al_22 != 0x5B l0C00_012C
l0C00_0120:
	ax_16 = DPB(ax_16, __inb(0x40) >>u 0x06, 0, 8);
	(ds->*(di_10 + ax_16)).b0140 = 0xB7;
l0C00_012C:
	cx_12 = cx_12 - 0x0001;
	branch cx_12 != 0x0000 l0C00_010D
l0C00_012E:
	__hlt()
fn0C00_0100_exit:
}

