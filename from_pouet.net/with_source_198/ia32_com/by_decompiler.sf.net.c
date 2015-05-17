// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_198/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_37 * ds)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	uint8 cl_16 = (byte) cs
	word16 cx_15 = DPB(cs, SLICE(cs, byte, 8) + 0x10, 8, 8)
l0C00_0110:
	__outb(0x03C8, cl_16)
	Eq_18 al_21 = cl_16 >>u 0x01
	__outb(0x03C9, al_21)
	__outb(0x03C9, al_21)
	__outb(0x03C9, al_21 >>u 0x01)
	cx_15 = cx_15 - 0x0001;
	cl_16 = (byte) cx_15;
	branch cx_15 != 0x0000 l0C00_0110
l0C00_0122:
	ds->w0100 = ds->w0100 + 0x0002;
	Eq_44 rLoc1_34 = (real64) ds->w0100 / (real64) ds->w0135
	real64 rLoc1_36 = cos(rLoc1_34)
	real64 rLoc2_37 = sin(rLoc1_34)
	Mem41[ss:fp - 0x0002:word16] = 0x0140
	real64 rLoc3_51 = (real64) -0x0140
	real64 rLoc4_53 = fn0C00_01BE(40960, rLoc3_51, rLoc2_37, rLoc1_36)
	fn0C00_01BE(65336, rLoc3_51, rLoc1_36, rLoc2_37)
	fn0C00_01BE(rLoc4_53, rLoc3_51, rLoc1_36, rLoc2_37)
fn0C00_0100_exit:
}

real64 fn0C00_01BE(real64 rArg0, real64 rArg1, real64 rArg2, real64 rArg3)
{
	return rArg1 * rArg2 - rArg0 * rArg3;
}

