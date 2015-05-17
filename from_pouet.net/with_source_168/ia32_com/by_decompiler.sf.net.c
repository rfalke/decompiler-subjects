// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_168/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte ah)
{
	bios_video_set_mode(0x13);
	word16 ax_26 = DPB(ax, 0x13, 0, 8);
	int16 dx_18 = SLICE((int32) ax_26, word16, 16);
	do
	{
		Eq_21 rLoc2_28 = rLoc2 / 32;
		Eq_25 rLoc2_30 = cos(rLoc2_28);
		int16 wLoc06_33 = (int16) (sin(rLoc2_28) * 60);
		word16 ax_41 = DPB(ax_26, fn0C00_0160(wLoc06_33 + 0x0096, dx_18, 0x01), 0, 8);
		fn0C00_0160(-wLoc06_33 + 0x008C, dx_18, (byte) (ax_41 + 0x0001));
		fn0C00_0160((int16) (rLoc2_30 * 60) + 0x00A0, dx_18, 0x04);
		ax_26 = ax_41 + 0x0001;
		rLoc2.u1 = 1;
		if (__inb(0x60) == 0x01)
			goto l0C00_015E;
		dx_18 = dx_18 + 0x0001;
	} while (dx_18 < 0x00C8);
	byte al_83;
	bios_kbd_get_keystroke(out al_83);
	msdos_terminate_program20();
}

byte fn0C00_0160(word16 cx, int16 dx, byte al)
{
	do
	{
		__syscall(0x10);
		__syscall(0x10);
		__syscall(0x10);
		__syscall(0x10);
		byte al_15 = al ^ 0x08;
		al = al_15 ^ 0x08;
		dx = dx + 0x0001;
	} while (dx < 0x00C8);
	return al_15 ^ 0x08;
}

