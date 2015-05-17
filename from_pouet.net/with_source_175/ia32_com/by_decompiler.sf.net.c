// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_175/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte ch, byte bh)
{
	bios_video_set_mode(0x13);
	__outb(0x03C8, 0x00);
	word16 dx_47 = 0x03C9;
	byte dl_45 = 0xC9;
	byte dh_46 = 0x03;
	byte cl_10 = 0xFF;
	word16 cx_12 = DPB(cx, 0xFF, 0, 8);
	do
	{
		bcu8 al_158 = 0xFF - cl_10;
		if (al_158 >=u 0x40)
			al_158 = 0x3F;
		__outb(0x03C9, al_158);
		uint8 al_27 = 0xFF - cl_10;
		Eq_30 al_156 = al_27 >>u 0x01;
		if (al_27 >>u 0x01 >=u 0x40)
			al_156.u1 = 0x3F;
		__outb(0x03C9, al_156);
		__outb(0x03C9, 0x00);
		cx_12 = cx_12 - 0x0001;
		cl_10 = (byte) cx_12;
	} while (cx_12 != 0x0000);
	do
	{
		Mem61[ss:fp - 0x0002:word16] = 0x8000;
		Mem66[ss:fp - 0x0002:word16] = 0xA000;
		word16 cx_70 = DPB(cx_12, 0x02, 8, 8);
		word16 Eq_60::*di_71 = Eq_60::aFFFFF780;
		do
		{
			dl_45 = __ror(dl_45 ^ dh_46, 0x01);
			dh_46 = dh_46 + 0x2A ^ dl_45;
			dx_47 = DPB(dx_47, dh_46, 8, 8);
			0x8000->*di_71 = dx_47;
			di_71 = di_71 + 1;
			cx_70 = cx_70 - 0x0001;
		} while (cx_70 != 0x0000);
		word16 cx_124 = ~cx_70;
		Eq_89 Eq_60::*di_123 = &Eq_60::t0000;
		do
		{
			bx = DPB(bx, (0x8000->*di_123).b0141, 0, 8);
			byte al_113 = (byte) ((word16) (0x8000->*di_123).b0000 + DPB(bx, (0x8000->*di_123).b013F, 0, 8) + DPB(bx, (0x8000->*di_123).b0280, 0, 8) + bx >>u 0x0002);
			byte al_115 = al_113 - 0x01;
			if (al_113 == 0x01)
				al_115 = al_113;
			(0x8000->*di_123).b0000 = al_115;
			di_123 = di_123 + 1;
			cx_124 = cx_124 - 0x0001;
		} while (cx_124 != 0x0000);
		Mem130[ss:fp - 0x0002:word16] = 0xA000;
		Eq_89 Eq_60::*si_128 = di_123;
		cx_12 = ~cx_124;
		while (cx_12 != 0x0000)
		{
			(0xA000->*di_123).b0000 = (0x8000->*si_128).b0000;
			si_128 = si_128 - 0x0001;
			di_123 = di_123 - 0x0001;
			cx_12 = cx_12 - 0x0001;
		}
	} while (__inb(0x60) != 0x01);
	return;
}

