// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_348/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_7 * es)
{
fn0C00_0100_entry:
l0C00_0100:
	byte Eq_7::*di_11 = Eq_7::a4D78
	word16 cx_12 = 0x002D
l0C00_0108:
	branch cx_12 == 0x0000 l0C00_010A
l0C00_0108_1:
	es->*di_11 = 0x00;
	di_11 = di_11 + 1;
	cx_12 = cx_12 - 0x0001;
	goto l0C00_0108
l0C00_010A:
fn0C00_0100_exit:
}

