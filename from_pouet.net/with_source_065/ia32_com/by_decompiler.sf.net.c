// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_065/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte ah, byte bh)
{
	bios_video_set_mode(0x13);
	word16 ax_11 = DPB(ax, 0x00, 0, 8);
	__outw(0x03C8, ax_11);
	uint8 al_10 = 0x00;
	do
	{
		Eq_16 al_14 = al_10 >>u 0x02;
		__outb(0x03C9, al_14);
		__outb(0x03C9, al_14 << 0x01);
		__outb(0x03C9, al_14 << 0x01 >>u 0x01);
		byte al_19 = (byte) ax_11;
		al_10 = al_19 + 0x01;
		ax_11 = DPB(ax_11, al_19 + 0x01, 0, 8);
	} while (al_19 != 0x01);
	do
	{
		byte bl_38 = bh;
		Eq_43 Eq_42::*cx_39 = &Eq_42::tFFFFFA00;
		do
		{
			(0xA000->*cx_39).bFFFFFFFF = bl_38;
			bl_38 = bl_38 + 0x01;
			cx_39 = cx_39 - 0x0001;
		} while (cx_39 != &Eq_42::t0000);
		byte al_51;
		bios_kbd_check_keystroke(out al_51);
		bh = bh + 0x01;
	} while (bh == 0x00);
	msdos_terminate(0x00);
}

