// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_202/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, Eq_49 Eq_40::*si, word16 di, byte ah, Eq_40 * ds)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	word16 ax_4 = DPB(ax, 0x13, 0, 8)
l0C00_0109:
	__outb(0x03C8, cl)
	Eq_15 al_20 = cl >>u 0x02
	__outb(0x03C9, al_20)
	__outb(0x03C9, al_20 >>u 0x01)
	__outb(0x03C9, al_20 >>u 0x01)
	cx = cx - 0x0001;
	cl = (byte) cx;
	branch cx != 0x0000 l0C00_0109
l0C00_011A:
	uint16 dx_32 = SEQ(0x0000, di) % ds->w01E7
	uint16 ax_34 = SEQ(dx_32, di) /u ds->w01E7
	Mem38[ds:si + 0x0000:word16] = ax_4 + 0x0001
	real64 rLoc1_40 = (real64) Mem38[ds:si + 0x0000:int16]
	Mem41[ds:si + 0x0000:word16] = dx_32 - 0x00A0
	real64 rLoc2_43 = (real64) Mem41[ds:si + 0x0000:int16] / (real64) Mem41[ds:0x01E5:word16]
	Mem44[ds:si + 0x0000:word16] = ax_34 - 0x0064
	real64 rLoc3_46 = (real64) Mem44[ds:si + 0x0000:int16] / (real64) Mem44[ds:0x01E5:word16]
	Eq_87 rLoc5_49 = rLoc2_43 / (real64) ds->w01EB
	real64 rLoc5_51 = cos(rLoc5_49)
	Mem53[ds:si + 0x0000:real32] = sin(rLoc5_49)
	real64 rLoc6_62 = rLoc5_51 * rLoc2_43 + Mem53[ds:si + 0x0000:real32] * 1
	branch 0x0B == 0x00 l0C00_0196
l0C00_016C:
	cos(rLoc3_46 * 0)
	cos(rLoc6_62 * 0)
	cos(0 * 0 + rLoc1_40)
l0C00_0196:
	sin(rLoc3_46 * 0)
fn0C00_0100_exit:
}

