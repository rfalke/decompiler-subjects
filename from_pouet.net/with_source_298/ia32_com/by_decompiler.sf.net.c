// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_298/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte bl, Eq_38 * ds)
{
fn0C00_0100_entry:
l0C00_0100:
	__outb(0x43, 0x36)
	__outb(0x40, 0x13)
	__outb(0x40, 0x13)
	bios_video_set_mode(0x13)
	up32 ecx_16 = 0x0036->dw010C - 0x0036->dw010C
	Eq_26 Eq_38::*bx_8 = DPB(bx, 0x02, 8, 8)
	word16 cx_105 = (word16) ecx_16
	branch ecx_16 <=u 0x00000000 l0C00_012C
l0C00_0124:
l0C00_0127:
	cx_105 = cx_105 - 0x0001;
	branch cx_105 != 0x0000 l0C00_0127
l0C00_012C:
	Eq_34 rLoc2_55 = (real64) 0x0036->dw010C * (ds->*bx_8).w0000
	(ds->*bx_8).w0000 = 0x0064;
	real64 rLoc3_57 = (real64) (ds->*bx_8).w0000
	(ds->*bx_8).w0000 = 0x00A0;
	real64 rLoc4_59 = (real64) (ds->*bx_8).w0000
	real64 rLoc5_61 = rLoc4_59 * rLoc4_59
	real64 rLoc3_73 = rLoc3_57 * (rLoc2_55 + sqrt(rLoc5_61 + rLoc5_61 * rLoc5_61) * (sin(rLoc3_57) * (ds->*bx_8).w0000))
	cos(rLoc3_73)
	sin(rLoc3_73)
fn0C00_0100_exit:
}

