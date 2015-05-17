// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_167/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

real64 fn0C00_0100(byte ah, byte bh)
{
	bios_video_set_mode(0x12);
	bios_video_set_CGA_palette(bh, 0x07);
	word16 ax_4 = DPB(ax, 0x12, 0, 8);
	word16 cx_125 = 0x0000;
	Eq_21 rLoc1_27 = 0;
	do
	{
		Eq_42 rLoc2_45 = sin(rLoc2 * (real64) ax_4);
		sin(rLoc2_45 * 200 * 49);
		rLoc2 = rLoc2_45 * 200 * cos((rLoc2_45 * 200) * 40);
		__syscall(0x10);
		rLoc1_27 = rLoc1_27 + 0x38D1B717;
		if (SEQ(0x0000, cx_132) % 0x0DA3 == 0x0000)
			;
		if (__inb(0x60) == 0x01)
			break;
		cx_125 = cx_132 + 0x0001;
		word16 cx_132 = cx_125;
	} while (cx_132 != 0x0001);
	byte al_120;
	bios_kbd_get_keystroke(out al_120);
	bios_video_set_mode(0x03);
	return rLoc1_27;
}

