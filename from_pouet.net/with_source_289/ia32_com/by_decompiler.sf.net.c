// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_289/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(uint8 cl, Eq_33 * ds)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	__outb(0x03C8, 0x00)
	uint8 ah_13 = 0x00
l0C00_010F:
	Eq_13 al_16 = ah_13 >>u 0x02
	__outb(0x03C9, al_16)
	__outb(0x03C9, al_16)
	__outb(0x03C9, al_16 >>u 0x01)
	ah_13 = ah_13 + 0x01;
	branch ah_13 != 0x00 l0C00_010F
l0C00_011D:
	Eq_31 rLoc3_30 = rLoc3 / (real64) ds->w01FE
	Eq_38 rLoc3_34 = (1 + 1) / (real64) ds->w01FC
	Eq_46 Eq_33::*di_124 = &Eq_33::t0000
	word16 bp_130 = 0x00C8
	real64 rLoc4_129 = 1
l0C00_0138:
	real64 rLoc5_100 = 1
	word16 dx_125 = 0x0140
l0C00_013D:
	real64 rLoc6_68 = (real64) ds->w01FC
	ds->w0204 = (int16) ((rLoc8 + 0 - rLoc4_129) * rLoc6_68);
	real64 rLoc8_80 = rLoc6_68 * rLoc6_68
	ds->w0206 = (int16) (sin(rLoc6_68 * rLoc4_129 + 0) * rLoc6_68 + rLoc8_80);
	int16 bx_83 = ds->w0204
	int16 ax_84 = ds->w0206
	ds->w0204 = (int16) ((rLoc8_80 + 0 - rLoc4_129) * rLoc6_68);
	rLoc8 = rLoc5_100 * rLoc6_68;
	ds->w0206 = (int16) (cos(rLoc6_68 - rLoc4_129 + 0) * rLoc6_68 + rLoc8);
	word16 bx_106 = DPB(bx_83 & ds->w0204, 0x00, 8, 8)
	ds->w0204 = DPB(ax_84 ^ ds->w0206, 0x00, 8, 8) - bx_106;
	ds->w0206 = (int16) ((real64) ds->w0204 * ds->t0200);
	word16 ax_113 = (word16) (ds->*di_124).b02F0
	(ds->*di_124).b02F0 = (byte) ((bx_106 + ds->w0206 - ax_113 >> cl) + ax_113);
	(0xA000->*di_124).b0000 = (byte) ax_113;
	rLoc5_100 = rLoc5_100 - rLoc3_34;
	di_124 = di_124 + 1;
	dx_125 = dx_125 - 0x0001;
	branch dx_125 != 0x0000 l0C00_013D
l0C00_01C4:
	rLoc4_129 = rLoc4_129 - rLoc3_30;
	bp_130 = bp_130 - 0x0001;
	branch bp_130 != 0x0000 l0C00_0138
l0C00_01CD:
	cos(rLoc4_129 + rLoc4_129)
fn0C00_0100_exit:
}

