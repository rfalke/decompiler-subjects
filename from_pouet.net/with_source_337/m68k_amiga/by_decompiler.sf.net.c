// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_337/m68k_amiga/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn00001000()
{
	globals->ptr114E = fp;
	fn000010BE();
	word32 d0_5 = fn000010DA();
	int32 a6_9 = globals->dw1146;
	(a6_9 + -612)();
	globals->dw1152 = d0_5;
	if (d0_5 != 0x00000000)
	{
		int32 a6_52 = globals->dw114A;
		(a6_52 + -918)();
		globals->dw1158 = 0x00000280;
		if (0x00000280 != 0x00000000)
		{
			int32 a6_60 = globals->dw114A;
			(a6_60 + -198)();
			0x0000115C->dw0004 = globals->dw1158;
			globals->w1156 = 0x0000;
			do
			{
				fn000012F4();
				fn00001316();
				globals->w1156 = globals->w1156 + 0x0001;
			} while (globals->w1156 - 0x000A < 0x0000);
			fn00001092();
		}
	}
}

word32 fn00001092()
{
	word32 a0_3 = globals->dw1152;
	if (a0_3 != 0x00000000)
	{
		int32 a6_21 = globals->dw1146;
		(a6_21 + -66)();
	}
	word32 a0_10 = globals->dw1158;
	if (a0_10 != 0x00000000)
	{
		int32 a6_20 = globals->dw114A;
		(a6_20 + -924)();
	}
	return 0;
}

void fn000010BE()
{
	word32 a6_6 = (word32 *) 0x00000004;
	(a6_6 + -552)();
	globals->dw114A = 0;
	if (0 != 0)
		return;
	else
	{
		fn00001092();
		return;
	}
}

word32 fn000010DA()
{
	word32 a6_6 = (word32 *) 0x00000004;
	(a6_6 + -552)();
	globals->dw1146 = 39;
	if (39 != 0)
		return 39;
	else
		return fn00001092();
}

void fn000012F4()
{
	word32 d0_5 = DPB(0x00000280, globals->w1156, 0, 16);
	word32 d0_7 = DPB(d0_5, (word16) d0_5 + 0x0001, 0, 16);
	ptr32 a0_2 = 0x00001340;
	word32 d1_9 = DPB(0x00000001, (word16) d0_7, 0, 16);
	byte * a0_14 = DPB(a0_2, (word16) a0_2 + (word16) DPB(d0_5, (word16) d0_7 << 0x0005, 0, 16), 0, 16);
	word32 d2_15 = 0x000001DF;
	do
	{
		*a0_14 = (byte) d1_9;
		a0_14 = DPB(a0_14, (word16) a0_14 + 0x0280, 0, 16);
		d2_15 = d2_15 - 0x00000001;
	} while (d2_15 != 0xFFFFFFFF);
	return;
}

void fn00001316()
{
	int32 a6_12 = globals->dw114A;
	(a6_12 + -786)();
	return;
}

