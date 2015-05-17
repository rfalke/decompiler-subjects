// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_051/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 si, word16 di, byte bh, selector ds)
{
	word16 cx_10 = 0x0029;
	word16 bx_13 = DPB(bx, 0x50, 0, 8);
	word16 ax_11 = 0x0202;
	do
	{
		bx_13 = bx_13 - 0x0001;
		if (bx_13 < 0x0000)
			goto l0C00_011F;
		__syscall(0x29);
		cx_10 = cx_10 - 0x0001;
		if (bx_13 != 0x0000 && cx_10 != 0x0000)
			continue;
		ax_11 = ax_11 - 0x0001;
	} while (P);
	__syscall(0x16);
	word16 ax_41 = di ^ ax_11;
	Mem51[ds:si + 0x0001:word16] = Mem0[ds:si + 0x0001:word16] + SLICE((int32) (ax_41 << 0x000F), word16, 16) + (ax_41 << 0x000F <u 0x0000);
	return;
}

