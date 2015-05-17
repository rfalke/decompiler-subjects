// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_388/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 Eq_6::*bx, word16 bp, word16 si, byte al, Eq_6 * ds, word16 wArg00)
{
	word16 ax_8 = __aam(al);
	bx[si] = bx[si] + DPB(ax_8, (byte) ax_8, 0, 8);
}

