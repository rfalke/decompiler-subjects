// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_226/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, Eq_45 bx, Eq_77 Eq_49::*si, int16 Eq_49::*di, byte dl, byte dh, Eq_49 * ds, word16 wArg00)
{
fn0C00_0100_entry:
l0C00_0100:
l0C00_0139:
	bios_video_set_mode(0x13)
	word16 dx_13 = DPB(dx, dh + 0x26, 8, 8)
	word16 ax_17 = wArg00
	byte al_18 = (byte) wArg00
	word16 dx_21 = 0x03C8
l0C00_014D:
	__outb(dx_21, al_18)
	dx_21 = DPB(dx_21, 0xC9, 0, 8);
	uint8 al_36 = (byte) __shld(ax_17, cx, 0x0E)
	__outb(dx_21, al_36)
	uint16 ax_37 = cl *u al_36
	byte ah_38 = SLICE(ax_37, byte, 8)
	__outb(dx_21, ah_38)
	cx = cx - 0x0001;
	al_18 = ah_38;
	ax_17 = DPB(ax_37, ah_38, 0, 8);
	cl = (byte) cx;
	branch cx != 0x0000 l0C00_014D
l0C00_015C:
	int32 dx_ax_48 = bx *s bx
	real64 rLoc1_62 = sqrt(-(real64) (ds->*di))
	ds->*di = (int16) (rLoc1_62 + rLoc1_62);
	int8 al_49 = (byte) dx_ax_48
	Mem68[dx_13:bx + 0x0000:byte] = (byte) (al_49 *s al_49 + SLICE(dx_ax_48, word16, 16) - 0x3FC0)
	bx = bx + 0x0001
	branch bx != 0x0000 l0C00_015C
l0C00_017B:
	(ds->*si).wFFFF8484 = (ds->*si).wFFFF8484 + 0x0001;
fn0C00_0100_exit:
}

