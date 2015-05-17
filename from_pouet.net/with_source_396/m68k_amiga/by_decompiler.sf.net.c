// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_396/m68k_amiga/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn00001000(word32 d3, word32 d4)
{
fn00001000_entry:
l00001000:
	word32 a6_3 = (word32 *) 0x00000004
	(a6_3 + -150)()
	Eq_7 * a5_33 = 0x00DFF096
l0000101E:
	branch __btst(a5_33->bFFFFFF6F, 0x0000) l0000101E
l00001026:
	branch __btst(a5_33->bFFFFFF6F, 0x0000) l00001026
l0000102E:
	word32 d4_36 = DPB(d4, 0x7FFF, 0, 16)
	a5_33->w0000 = (word16) d4_36;
	a5_33->w0004 = (word16) d4_36;
	a5_33->w0006 = (word16) d4_36;
	a5_33->dw00AA = 0;
	a5_33->dw00EA = 0;
	a5_33->w0146 = 0x0020;
	Eq_49 * a0_52 = 0x0000106E
	ptr32 a2_53 = 0x000106A4
	Eq_53 * a1_54 = 0x000004B2
l00001062:
	a1_54->b0000 = a0_52->b0000;
	a0_52 = a0_52 + 1;
	a1_54 = a1_54 + 1;
	branch a0_52 - a2_53 <u 0x00000000 l00001062
l00001068:
fn00001000_exit:
}

