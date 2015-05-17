// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_149/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte ch, Eq_71 * ds)
{
	bios_video_set_mode(0x13);
	__outb(0x03C8, 0x00);
	byte Eq_37::*di_118 = &Eq_37::b0000;
	word16 ax_18 = 0x0000;
	byte al_10 = 0x00;
	word16 cx_122 = DPB(cx, 0x40, 0, 8);
	do
	{
		__outb(0x03C9, al_10);
		__outb(0x03C9, al_10);
		__outb(0x03C9, al_10);
		ax_18 = ax_18 + 0x0001;
		al_10 = (byte) ax_18;
		cx_122 = cx_122 - 0x0001;
	} while (cx_122 != 0x0000);
	while (true)
	{
		Mem52[ss:fp - 0x0006:word16] = 0xA000;
		word16 cx_46 = DPB(cx_122, 0xFA, 8, 8);
		di_58 = di_118;
		do
		{
			byte Eq_37::*di_58;
			byte al_63 = 0xA000->*di_58;
			byte al_129 = al_63;
			if (al_63 != 0x00)
				al_129 = al_63 - 0x01;
			0xA000->*di_58 = al_129;
			di_58 = di_58 + 1;
			cx_46 = cx_46 - 0x0001;
		} while (cx_46 != 0x0000);
		cx_122 = DPB(cx_46, 0x02, 8, 8);
		do
		{
			0xA000->*di_118 = 0x3F;
			word16 di_93 = di_118 + 1;
			uint16 dx_98 = SEQ(0x0000, di_93 - 0x0001) % ds->w0179;
			uint16 ax_100 = SEQ(dx_98, di_93 - 0x0001) /u ds->w0179;
			if (dx_98 == 0x0000)
				ds->w017B = 0x0001;
			if (dx_98 == 0x013F)
				ds->w017B = 0xFFFF;
			if (ax_100 == 0x0000)
				ds->w017D = 0x0140;
			if (ax_100 == 0x00C7)
				ds->w017D = 0xFEC0;
			di_118 = di_93 - 0x0001 + ds->w017B + ds->w017D;
			if (__inb(0x60) == 0x01)
				return;
			cx_122 = cx_122 - 0x0001;
		} while (cx_122 != 0x0000);
	}
}

