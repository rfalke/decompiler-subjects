// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_375/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word32 eax, word16 bx, byte Eq_21::*bp, byte cl, Eq_21 * es, Eq_38 * ds)
{
	byte Eq_21::*di_14 = Eq_21::a1574;
	word16 cx_15 = DPB(cx, 0xD6, 8, 8);
	while (cx_15 != 0x0000)
	{
		es->*di_14 = al;
		di_14 = di_14 + 1;
		cx_15 = cx_15 - 0x0001;
	}
	msdos_multiplex(0x16, 0x87);
	if ((bx & 0x1688) == 0x0000)
	{
		msdos_display_string(ds, 0x0119);
		return;
	}
	else
	{
		__syscall(0x10);
		byte Eq_38::*bx_67 = Eq_38::a1BF9;
		do
		{
			ds->*bx_67 = es->*bp;
			bp = bp + 1;
			bx_67 = bx_67 + 1;
		} while (bx_67 != &Eq_38::bFFFFDC07);
		fn0C00_0181(0x019C, ds);
		ds->w158B = 0x0230;
		fn0C00_0181(0x01D4, ds);
		return;
	}
}

byte fn0C00_0181(word16 dx, Eq_38 * ds)
{
	msdos_display_string(ds, dx);
	byte al_7;
	byte ah_8 = bios_kbd_get_keystroke(out al_7);
	byte al_10;
	byte ah_11;
	__aaa(al_7, ah_8, &al_10, &ah_11);
	ds->b1589 = al_10;
	return al_10;
}

