// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_096/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 si, byte bl)
{
	bios_video_set_mode(0x13);
	byte Eq_18::*di_16 = &Eq_18::b0000;
	word16 wLoc02_19 = 0x0000;
	int16 si_21 = si + 0x0001;
	while (true)
	{
		__outb(0x03C8, (byte) bx);
		do
		{
			__outb(0x03C9, 0x00);
			__outb(0x03C9, 0x00);
			bx = bx + 0x0001;
			byte al_53 = (byte) bx;
			__outb(0x03C9, al_53);
			word16 cx_54 = 0x0780;
			while (cx_54 != 0x0000)
			{
				0xA000->*di_16 = al_53;
				di_16 = di_16 + 1;
				cx_54 = cx_54 - 0x0001;
			}
		} while (di_16 != &Eq_18::bFFFFE880);
		bx = wLoc02_19 + si_21;
		di_16 = &Eq_18::b0000;
		byte bl_66 = (byte) bx;
		wLoc02_19 = bx;
		if (bl_66 != 0x20)
		{
			bx = DPB(bx, bl_66, 0, 8);
			if (bl_66 != 0x00)
				continue;
		}
l0C00_013C:
		si_21 = -si_21;
	}
}

