// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_267/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_51 * ds)
{
	bios_video_set_mode(0x13);
	__outb(0x03C8, 0x00);
	byte al_11 = 0x00;
	word16 ax_12 = 0x0000;
	word16 dx_114 = 0x03C9;
	do
	{
		__outb(0x03C9, al_11);
		word16 ax_22 = __ror(ax_12, 0x08);
		byte al_23 = (byte) ax_22;
		__outb(0x03C9, al_23);
		byte al_25 = al_23 | SLICE(ax_22, byte, 8);
		__outb(0x03C9, al_25);
		word16 ax_28 = __ror(DPB(ax_22, al_25, 0, 8), 0x08);
		word16 ax_31 = DPB(ax_28, (byte) ax_28 + 0x01, 0, 8);
		ax_12 = ax_31 + 0x0002;
		al_11 = (byte) (ax_31 + 0x0002);
	} while (ax_31 != 0x0002);
	while (true)
	{
		ds->w01A5 = dx_114;
		ds->t01A7.u0 = 0x00;
		byte Eq_72::*si_102 = &Eq_72::b7D00;
		byte cl_103 = 0x00;
		do
		{
			ds->t01A7.u0 = Mem58[ds:0x01A7:byte].u0;
			ds->w01A5 = ds->w01A5 - ds->t01A7;
			ds->w01A9 = 0x0078;
			word16 dx_76 = 0x0000;
			byte dl_78 = 0x00;
			do
			{
				0xA3FC->*si_102 = dl_78 - ds->b01AC ^ (byte) __ror(ds->w01A9, 0x08);
				ds->w01A9 = ds->w01A9 - dx_76;
				dx_76 = dx_76 + 0x0001;
				si_102 = si_102 + 1;
				dl_78 = (byte) dx_76;
			} while (dx_76 != 0x0140);
			si_102 = si_102 - 0x0280;
			cl_103 = cl_103 + 0x01;
		} while (cl_103 != 0x64);
		byte al_109;
		bios_kbd_check_keystroke(out al_109);
		if (cl_103 != 0x64)
		{
			bios_video_set_mode(0x03);
			msdos_display_string(ds, 0x01AD);
			return;
		}
		ds->w01AB = ds->w01AB + 0x0200;
		dx_114 = 0x03DA;
		do
			;
		while ((__inb(0x03DA) & 0x08) != 0x00);
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
	}
}

