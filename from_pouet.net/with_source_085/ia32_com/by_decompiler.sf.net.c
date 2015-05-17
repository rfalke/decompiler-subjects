// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_085/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 ax, word16 bx, int16 bp, Eq_22 Eq_21::*di)
{
	bios_video_set_mode(0x13);
	word16 cx_17 = ax;
	do
	{
		int16 ax_18 = bp *s 0x8805;
		uint16 ax_21 = ax_18 + 0x0001 >>u 0x000B;
		(0xA000->*di).t0000 = (byte) ax_21 + 0x09;
		bp = ax_18 + 0x0001;
		di = di + 1;
		cx_17 = cx_17 - 0x0001;
	} while (cx_17 != 0x0000);
	Mem30[ss:fp - 0x0002:word16] = 0xA000;
	word16 cx_35 = DPB(cx_17, 0x05, 0, 8);
	do
	{
		(0xA000->*di).t0000 = (0xA000->*di).b0001 + (0xA000->*di).b0001 + (0xA000->*di).t0000 + (0xA000->*di).b0141 >>u 0x02;
		di = di + 1;
		bx = bx - 0x0001;
		if (bx != 0x0000)
			continue;
		cx_35 = cx_35 - 0x0001;
	} while (cx_35 != 0x0000);
	do
	{
		Eq_20 al_60 = (0xA000->*di).b0001;
		word16 ax_61 = DPB(ax_21, al_60, 0, 8);
		do
		{
			Eq_20 v17_66 = (0xA000->*di).t0000;
			(0xA000->*di).t0000 = al_60;
			al_60 = v17_66;
			ax_61 = DPB(ax_79, v17_66, 0, 8);
			di = di + 1;
			cx_35 = cx_35 - 0x0001;
			word16 ax_79 = ax_61;
		} while (cx_35 != 0x0000);
		word16 ax_75 = DPB(ax_79, __inb(0x60), 0, 8);
		ax_21 = ax_75 - 0x0001;
	} while (ax_75 != 0x0001);
	return;
}

