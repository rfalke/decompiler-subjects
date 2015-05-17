// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_157/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_4 * ds)
{
	msdos_display_string(ds, 0x0172);
	byte Eq_4::*di_17 = &Eq_4::b0180;
	byte bl_14 = 0x3C;
	byte dl_10 = 0x00;
	word16 cx_12 = 0x000A;
	do
	{
		ds->*di_17 = 0x00;
		Eq_21 Eq_4::*di_19 = di_17 + 1;
		(ds->*di_19).b0180 = bl_14;
		(ds->*di_19).b0181 = dl_10;
		di_17 = di_19 + 0x0002 + 0x0180;
		bl_14 = bl_14 - 0x06;
		dl_10 = dl_10 + 0x06;
		cx_12 = cx_12 - 0x0001;
	} while (cx_12 != 0x0000);
	word16 cx_29 = 0x000A;
	do
	{
		ds->*di_17 = 0x00;
		Eq_48 Eq_4::*di_36 = di_17 + 1;
		(ds->*di_36).b0180 = bl_14;
		(ds->*di_36).b0181 = dl_10;
		di_17 = di_36 + 0x0002;
		dl_10 = dl_10 - 0x06;
		bl_14 = bl_14 + 0x06;
		cx_29 = cx_29 - 0x0001;
	} while (cx_29 != 0x0000);
	int16 di_46 = 0x0000;
	byte Z_48 = cond(0x0000);
	byte al_62;
	bios_kbd_check_keystroke(out al_62);
	while (Z_48)
	{
		__outb(0x03C8, 0x07);
		word16 cx_70 = 0x0003;
		do
		{
			__outb(0x03C9, ds->b0180);
			di_46 = di_46 + 0x0001;
			cx_70 = cx_70 - 0x0001;
		} while (cx_70 != 0x0000);
		Z_48 = cond(di_46 - 0x003C);
		if (di_46 < 0x003C)
			continue;
		di_46 = 0x0000;
		Z_48 = cond(0x0000);
		bios_kbd_check_keystroke(out al_62);
	}
	bios_video_set_mode(al_62);
	msdos_terminate(0x00);
}

