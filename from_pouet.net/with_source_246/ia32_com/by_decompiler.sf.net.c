// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_246/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte bl, byte ah, byte ch, byte bh, Eq_7 * ds)
{
fn0C00_0100_entry:
l0C00_0100:
	fn0C00_0196(0x13, ah, ch, ds)
	word16 cx_12 = DPB(cx, 0x06, 0, 8)
l0C00_010F:
	msdos_display_string(ds, 0x01EF)
	cx_12 = cx_12 - 0x0001;
	branch cx_12 != 0x0000 l0C00_010F
l0C00_0113:
	Eq_27 Eq_29::*di_17 = Eq_29::aFFFFA000
l0C00_0118:
	(0xA000->*di_17).t0000 = (0xA000->*di_17).t0000 << 0x01;
	di_17 = di_17 + 1;
	branch di_17 != &Eq_29::t0000 l0C00_0118
l0C00_0122:
	branch ((byte) DPB(bx, bl + 0x01, 0, 8) & 0xEF & 0x0F & 0x03) != 0x03 l0C00_013F
l0C00_013E:
l0C00_013F:
	SEQ(cs, 0x01B0)()
	SEQ(cs, 0x01B0)()
	SEQ(cs, 0x01B0)()
	__hlt()
fn0C00_0100_exit:
}

byte fn0C00_0196(byte al, byte ah, byte ch, Eq_7 * ds)
{
	bios_video_set_mode(al);
	word16 ax_5 = DPB(ax, 0xF4, 0, 8);
	do
		SEQ(cs, bp)();
	while (ax_5 != 0x0001);
	word16 cx_23 = DPB(cx, 0x07, 0, 8);
	do
	{
		SEQ(cs, bp)();
		SEQ(cs, bp)();
		SEQ(cs, bp)();
		byte ch_35 = SLICE(cx_23 - 0x0001, byte, 8);
	} while (cx_23 != 0x0001);
	return ch_35;
}

