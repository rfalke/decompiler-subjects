// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_064/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte al, byte cl, byte bl, uint8 dh, Eq_35 bh, Eq_14 * es, Eq_25 * ds)
{
	word16 cx_15 = DPB(cx, 0xFA, 8, 8);
	byte Eq_14::*di_14 = Eq_14::a013B;
	while (cx_15 != 0x0000)
	{
		es->*di_14 = al;
		di_14 = di_14 + 1;
		cx_15 = cx_15 - 0x0001;
	}
	bios_video_set_mode(0x13);
	while (true)
	{
		Mem42[ss:fp - 0x0002:word16] = 0x013B;
		Mem46[ss:fp - 0x0004:word16] = ds;
		Eq_26 Eq_25::*di_40 = Eq_25::a013B;
		word16 cx_50 = DPB(cx_15, 0xFA, 8, 8);
		do
		{
			word16 ax_54 = Mem46[ds:di_40 + 0x0000:word16] + Mem46[ds:di_40 + 0x0140:word16];
			Mem61[0xA000:di_40 + 0x0000:byte] = (byte) ax_54 + bh + SLICE(ax_54, byte, 8) >>u 0x02;
			di_40 = PTRADD(di_40,1);
			cx_50 = cx_50 - 0x0001;
		} while (cx_50 != 0x0000);
		word16 Eq_25::*di_70 = Eq_25::a0000;
		Eq_26 Eq_25::*si_73 = Eq_25::a013B;
		cx_15 = DPB(cx_50, 0x78, 8, 8);
		while (cx_15 != 0x0000)
		{
			Mem83[0xA000:di_70 + 0x0000:word16] = Mem61[ds:si_73 + 0x0000:word16];
			si_73 = si_73 + 1;
			di_70 = di_70 + 1;
			cx_15 = cx_15 - 0x0001;
		}
		dh = dh + 0x01;
		bios_video_set_CGA_palette(dh >>u 0x04, bl);
		bh = dh >>u 0x04;
	}
}

