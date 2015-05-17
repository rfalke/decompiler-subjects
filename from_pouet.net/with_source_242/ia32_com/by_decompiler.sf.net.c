// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_242/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, segptr32 Eq_37::*bx, word16 bp, Eq_37 * ds)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	word16 cx_15 = cx + 0x0001
	uint8 cl_16 = (byte) (cx + 0x0001)
l0C00_0105:
	__outb(0x03C8, cl_16)
	Eq_17 al_12 = cl_16 >>u 0x02
	__outb(0x03C9, al_12)
	__outb(0x03C9, al_12)
	__outb(0x03C9, al_12.u1)
	cx_15 = cx_15 - 0x0001;
	cl_16 = (byte) cx_15;
	branch cx_15 != 0x0000 l0C00_0105
l0C00_0116:
	Eq_36 * es_21 = SLICE(ds->*bx, selector, 16)
	word16 cx_26 = 0xFA00
	byte Eq_36::*di_28 = Eq_36::a0000
	Eq_47 Eq_37::*si_32 = Eq_37::a0206
l0C00_0125:
	es_21->*di_28 = (ds->*si_32).b0000;
	word16 ax_43 = cx_26 + bp
	si_32 = si_32 + 1;
	(ds->*si_32).b0000 = ((byte) ax_43 ^ SLICE(ax_43, byte, 8)) & 0x1F;
	di_28 = di_28 + 1;
	cx_26 = cx_26 - 0x0001;
	branch cx_26 != 0x0000 l0C00_0125
l0C00_0134:
fn0C00_0100_exit:
}

