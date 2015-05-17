// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_164/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte ch)
{
	bios_video_set_mode(0x13);
	int16 wLoc02_190 = 0x0001;
	int16 wLoc04_10 = 0x0140;
	word16 cx_14 = DPB(cx, 0xFE, 0, 8);
	do
	{
		__outb(0x03C9, 0x00);
		int16 ax_24 = cx_14 - 0x007F;
		Eq_17 al_210 = (byte) ax_24;
		if (ax_24 <= 0x0000)
			al_210 = -al_210;
		byte al_34 = 0x3F - (al_210 >>u 0x01);
		__outb(0x03C9, al_34);
		__outb(0x03C9, al_34);
		cx_14 = cx_14 - 0x0001;
	} while (cx_14 != 0x0000);
	Eq_42 Eq_45::*di_172 = &Eq_45::t0000;
	do
	{
		word16 cx_100 = 0x0027;
		di_101 = di_172;
		do
		{
			Eq_42 Eq_45::*di_101;
			word16 cx_123 = 0x0027;
			di_127 = di_101;
			do
			{
				Eq_42 Eq_45::*di_127;
				(0xA000->*di_127).b0000 = (0xA000->*di_127).b0000 + 0x01;
				di_127 = PTRADD(di_127,1);
				cx_123 = cx_123 - 0x0001;
			} while (cx_123 != 0x0000);
			di_101 = di_101 + 0x0140;
			cx_100 = cx_100 - 0x0001;
		} while (cx_100 != 0x0000);
		di_172 = di_172 + wLoc02_190 + wLoc04_10;
		word32 dx_ax_176 = SEQ(0x0000, di_172);
		uint32 dx_ax_178 = SEQ(dx_ax_176 % 0x0140, di_172);
		if (dx_ax_178 /u 0x0140 > 0x0000 && dx_ax_178 /u 0x0140 < 0x00A1)
			;
		else
			wLoc04_10 = -Mem130[ss:fp - 0x0004:word16];
		if (dx_ax_176 % 0x0140 > 0x0000 && dx_ax_176 % 0x0140 < 0x0119)
			;
		else
			wLoc02_190 = -Mem130[ss:fp - 0x0002:word16];
	} while (__inb(0x60) != 0x01);
	msdos_terminate_program20();
}

