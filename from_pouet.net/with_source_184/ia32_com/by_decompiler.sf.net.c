// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_184/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_4 * ds)
{
	msdos_display_string(ds, 0x0178);
	word16 di_11 = 0x0168;
	byte Eq_4::*si_12 = ds->ptr0168;
	do
	{
		byte al_19 = ds->*si_12;
		word16 ax_20 = (word16) al_19;
		si_12 = si_12 + 1;
		if (al_19 == 0x00)
		{
			Eq_29 Eq_4::*di_54 = di_11 + 0x0001;
			di_11 = &di_54->ptr0001;
			si_12 = (ds->*di_54).ptr0001;
			if (si_12 == &Eq_4::b0000)
				break;
		}
l0C00_011E:
		fn0C00_0184(ax_20 << 0x0004);
		__syscall(0x15);
	} while (__inb(0x60) != 0x01);
l0C00_013A:
	__outb(0x61, __inb(0x61) & 0xFC);
	msdos_terminate(0x00);
}

void fn0C00_0184(uint16 ax)
{
	if (0x0012 <u ax)
	{
		uint16 ax_26 = SEQ(0x001234DD % ax, 0x34DD) /u ax;
		byte bl_28 = (byte) ax_26;
		byte bh_29 = SLICE(ax_26, byte, 8);
		byte al_30 = __inb(0x61);
		if ((al_30 & 0x03) == 0x00)
		{
			__outb(0x61, al_30 | 0x03);
			__outb(0x43, 0xB6);
		}
		__outb(0x42, bl_28);
		__outb(0x42, bh_29);
	}
	return;
}

