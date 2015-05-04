// subject.c
// Generated on 5/4/2015 12:12:22 AM by decompiling from_pouet.net/with_source_396/m68k_amiga/subject.exe
// using Decompiler version 0.4.2.0.

#include "subject.h"

void fn00001000(word32 d3, word32 d4)
{
fn00001000_entry:
l00001000:
	word32 a6_3 = Mem0[0x00000004:word32]
	call a6_3 + -150 (retsize: 4; depth: 4)
	word32 a5_33 = 0x00DFF096
l0000101E:
	branch __btst(Mem0[a5_33 + -145:byte], 0x0000) l0000101E
l00001026:
	branch __btst(Mem0[a5_33 + -145:byte], 0x0000) l00001026
l0000102E:
	word32 d4_36 = DPB(d4, 0x7FFF, 0, 16)
	Mem38[a5_33 + 0x00000000:word16] = (word16) d4_36
	Mem40[a5_33 + 4:word16] = (word16) d4_36
	Mem42[a5_33 + 6:word16] = (word16) d4_36
	Mem45[a5_33 + 170:word32] = 0
	Mem47[a5_33 + 234:word32] = 0
	Mem49[a5_33 + 326:word16] = 0x0020
	word32 a0_52 = 0x0000106E
	word32 a2_53 = 0x000106A4
	word32 a1_54 = 0x000004B2
l00001062:
	Mem61[a1_54 + 0x00000000:byte] = Mem49[a0_52 + 0x00000000:byte]
	a0_52 = a0_52 + 0x00000001
	a1_54 = a1_54 + 0x00000001
	branch a0_52 - a2_53 <u 0x00000000 l00001062
l00001068:
fn00001000_exit:
}

