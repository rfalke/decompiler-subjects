// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_328/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(int8 cl, Eq_18 * es)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	byte Eq_18::*di_17 = Eq_18::a0300
	word16 cx_18 = DPB(cx, 0xA0, 8, 8)
l0C00_0110:
	branch cx_18 == 0x0000 l0C00_0112
l0C00_0110_1:
	es->*di_17 = 0x00;
	cx_18 = cx_18 - 0x0001;
	di_17 = di_17 + 1;
	cl = (byte) cx_18;
	goto l0C00_0110
l0C00_0112:
	__outb(0x03C8, 0x00)
l0C00_0117:
	Eq_30 al_33 = -cl
	__outb(0x03C9, al_33 >>u 0x02)
	__outb(0x03C9, al_33 >>u 0x03)
	__outb(0x03C9, al_33 >>u 0x04)
	cx_18 = cx_18 - 0x0001;
	cl = (byte) cx_18;
	branch cx_18 != 0x0000 l0C00_0117
l0C00_0127:
	Mem52[ss:fp - 0x0002:word16] = 0x0337
	ss->b0302 = 0x21;
	ss->b0304 = 0x41;
	ss->b0302 = ss->b0302 - 0x01;
fn0C00_0100_exit:
}

