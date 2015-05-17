// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_288/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, word16 bx)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	word16 dx_24 = 0x03C8
l0C00_0108:
	Eq_9 al_32 = bl
l0C00_010A:
	branch P l0C00_0113
l0C00_010E:
	al_32 = (byte) (al_32 *s al_32 >>u 0x0007);
l0C00_0113:
	Eq_9 ah_51 = SLICE(bl *u al_32, byte, 8)
	__outb(dx_24, ah_51)
	al_32 = ah_51;
	dx_24 = DPB(dx_24, 0xC9, 0, 8);
	cx = cx - 0x0001;
	branch cx != 0x0000 l0C00_0108
l0C00_011C:
	bx = bx - 0x0001;
	cx = DPB(cx, 0x03, 0, 8);
	bl = (byte) bx;
	branch bx != 0x0000 l0C00_010A
l0C00_0121:
fn0C00_0100_exit:
}

