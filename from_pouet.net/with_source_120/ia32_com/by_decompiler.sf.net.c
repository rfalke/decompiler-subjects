// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_120/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte al, byte cl, byte bl, byte bh, Eq_21 * es, Eq_15 * ds)
{
	word16 cx_15 = DPB(cx, 0xFA, 8, 8);
	byte Eq_21::*di_14 = Eq_21::a0140;
	while (cx_15 != 0x0000)
	{
		es->*di_14 = al;
		di_14 = di_14 + 1;
		cx_15 = cx_15 - 0x0001;
	}
	bios_video_set_mode(0x13);
	msdos_display_string(ds, 0x013B);
	while (true)
	{
		Mem40[ss:fp - 0x0002:word16] = 0x0140;
		Mem43[ss:fp - 0x0004:word16] = ds;
		Eq_32 Eq_15::*di_38 = Eq_15::a0140;
		word16 cx_47 = DPB(cx_15, 0xC8, 8, 8);
		do
		{
			word16 ax_51 = Mem43[ds:di_38 + 0x0000:word16] - Mem43[ds:di_38 + 0x0140:word16];
			Mem58[0xA12C:di_38 + 0x0000:byte] = (byte) ax_51 + SLICE(ax_51, byte, 8) + 0xFD >>u 0x02;
			di_38 = PTRADD(di_38,1);
			cx_47 = cx_47 - 0x0001;
		} while (cx_47 != 0x0000);
		word16 Eq_15::*di_67 = Eq_15::a0000;
		Eq_32 Eq_15::*si_70 = Eq_15::a0140;
		cx_15 = DPB(cx_47, 0x64, 8, 8);
		while (cx_15 != 0x0000)
		{
			Mem80[0xA12C:di_67 + 0x0000:word16] = Mem58[ds:si_70 + 0x0000:word16];
			si_70 = si_70 + 1;
			di_67 = di_67 + 1;
			cx_15 = cx_15 - 0x0001;
		}
		bios_video_set_CGA_palette(bh, bl);
	}
}

