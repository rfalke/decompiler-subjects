// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_234/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte cl, Eq_27 * es, Eq_27 * ds)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	byte Eq_27::*di_10 = Eq_27::a0200
	word16 cx_11 = DPB(cx, 0xFD, 8, 8)
	word16 ax_28 = 0x3F00
	byte al_27 = 0x00
l0C00_010C:
	branch cx_11 == 0x0000 l0C00_010E
l0C00_010C_1:
	es->*di_10 = 0x00;
	di_10 = di_10 + 1;
	cx_11 = cx_11 - 0x0001;
	goto l0C00_010C
l0C00_010E:
	__outb(0x03C8, 0x00)
	word16 di_23 = 0x0340
	word16 cx_26 = DPB(cx_11, 0x20, 0, 8)
l0C00_011A:
	Eq_37 Eq_27::*di_31 = di_23 + 0x0001
	(es->*di_31).b0000 = al_27;
	(ds->*di_31).w005F = ax_28;
	(ds->*di_31).b0061 = al_27;
	al_27 = al_27 + 0x02;
	di_23 = &di_31->b0000;
	ax_28 = DPB(ax_28, al_27, 0, 8);
	cx_26 = cx_26 - 0x0001;
	branch cx_26 != 0x0000 l0C00_011A
l0C00_0127:
	word16 cx_45 = DPB(cx_26, 0xC0, 0, 8)
l0C00_0129:
	branch cx_45 == 0x0000 l0C00_012B
l0C00_0129_1:
	__outb(0x03C9, al_27)
	cx_45 = cx_45 - 0x0001;
	goto l0C00_0129
l0C00_012B:
	real64 rLoc1_54 = (real64) ds->w01FB
	real64 rLoc4_62 = sin(0 / rLoc1_54) * rLoc1_54
	cos(rLoc4_62 + 0)
	sin(rLoc4_62 + 0)
	sin(0)
fn0C00_0100_exit:
}

