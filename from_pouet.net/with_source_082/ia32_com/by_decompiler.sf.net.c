// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_082/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word32 eax, Eq_13 Eq_11::*bx, byte cl, Eq_11 * ds, word16 wArg00)
{
	bios_video_set_mode(0x13);
	word32 eax_102 = DPB(eax, 0x13, 0, 8);
	Eq_11 * ds_10 = SLICE((ds->*bx).t0000, selector, 16);
	word16 cx_16 = DPB(cx, 0x03, 8, 8);
	do
	{
		eax_102 = __ror(eax_102, 0x08);
		bcu8 al_29 = (byte) eax_102;
		byte ah_31 = SLICE(eax_102, byte, 8);
		if (al_29 >=u 0x3F)
		{
			al_29 = 0x3F;
			eax_102 = DPB(eax_102, ah_31 + 0x01, 8, 8);
		}
		if ((cl & 0x03) != 0x00)
			__outb(0x03C9, al_29);
		cx_16 = cx_16 - 0x0001;
		cl = (byte) cx_16;
	} while (cx_16 != 0x0000);
	do
	{
		Eq_16 al_63 = __inb(0x40);
		do
		{
			(ds_10->*bx).t0000 = al_63;
			bx = bx + 1;
			cx_16 = DPB(cx_16, (ds_10->*bx).b0280, 0, 8);
			word16 dx_80 = (word16) (ds_10->*bx).t0000 + cx_16;
			Eq_67 bh_74 = SLICE(bx, byte, 8);
			wArg00 = dx_80;
			al_63 = (byte) (wArg00 - 0x0001 + dx_80 >>u 0x0002);
		} while (bh_74 <u 0xFD);
		byte al_96;
		__das(__inb(0x60), &al_96);
	} while (bh_74 >= 0xFD);
	return;
}

