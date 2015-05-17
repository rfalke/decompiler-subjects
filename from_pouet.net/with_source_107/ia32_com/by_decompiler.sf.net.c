// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_107/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 bx, byte ah, Eq_15 * es, selector ds)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	word16 ax_12 = DPB(ax, 0x13, 0, 8)
	word16 Eq_15::*di_14 = Eq_15::a0140
	word16 cx_13 = 0x046C
l0C00_010D:
	es->*di_14 = ax_12;
	di_14 = di_14 + 1;
	ax_12 = ax_12 + di_14;
	cx_13 = cx_13 - 0x0001;
	branch cx_13 != 0x0000 l0C00_010D
l0C00_0112:
fn0C00_0100_exit:
}

