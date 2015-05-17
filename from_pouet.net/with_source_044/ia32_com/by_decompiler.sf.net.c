// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_044/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_7 Eq_8::*bx, word16 si, word16 di, Eq_19 cl, byte ah, Eq_8 * ds)
{
	bios_video_set_mode(0x13);
	ptr32 ds_bx_6 = Mem0[ds:bx + 0x0000:segptr32];
	Eq_13 * ds_7 = SLICE(ds_bx_6, selector, 16);
	Eq_15 bx_11 = (word16) ds_bx_6;
	do
	{
		Mem16[ds_7:bx_11 + 0x0000:byte] = Mem0[ds_7:bx_11 + 0x0000:byte] + ah + (Mem0[ds_7:bx_11 + 0x0000:byte] <u cl);
		Eq_31 bx_17 = bx_11 *s 0xFFE5;
		cl = Mem16[ds_7:bx_17 + 0x0000:byte] + Mem16[ds_7:bx_17 + di:byte] + Mem16[ds_7:bx_17 - 0x0141:byte] + Mem16[ds_7:(bx_17 + 0x003F) + si:byte];
		bx_11 = bx_17 - 0x0001;
	} while (__inb(0x60) != 0x01);
	return;
}

