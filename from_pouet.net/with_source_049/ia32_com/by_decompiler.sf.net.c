// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_049/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, word16 bx, selector ds)
{
	bios_video_set_mode(0x13);
	ptr32 es_di_6 = Mem0[ds:bx + 0x0000:segptr32];
	selector es_7 = SLICE(es_di_6, selector, 16);
	word16 di_25 = (word16) es_di_6;
	do
	{
		word16 bx_34 = DPB(bx, 0x1B, 0, 8);
		do
			bx_34 = bx_34 + 0x0001;
		while (bx_34 >u 0x0000);
		Mem52[es_7:di_25 + 0x0000:byte] = (byte) bx_34;
		bx = 0xCCE6;
		di_25 = di_25 + 0x0001;
		cx = cx - 0x0001;
		if (cx != 0x0000)
			continue;
		cx = cx - 0x0001;
	} while (__inb(0x60) != 0x01 && cx != 0x0001);
	return;
}

