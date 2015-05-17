// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_176/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word32 eax, word16 bp, Eq_49 * ds)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	byte al_16 = 0x13
	word16 ax_15 = DPB(ax, 0x13, 0, 8)
	Eq_13 eax_101 = DPB(eax, 0x13, 0, 8)
	ptr16 cx_14 = fp
l0C00_0110:
	__outb(0x03C9, al_16)
	ax_15 = ax_15 - 0x0001;
	al_16 = (byte) ax_15;
	__outb(0x03C9, al_16)
	eax_101 = DPB(eax_101, ax_15, 0, 16);
	cx_14 = cx_14 - 0x0001;
	branch cx_14 != 0x0000 l0C00_0110
l0C00_0115:
	byte Eq_38::*di_118 = &Eq_38::b0000
	int16 bx_122 = 0xFF9D
l0C00_011A:
	Eq_13 cx_119 = 0xFF60
l0C00_011D:
	word16 ax_78 = (word16) (cx_119 *s (word16) ((int32) cx_119)) + (word16) (bx_122 *s (word16) ((int32) bx_122))
	ds->t7340 = ax_78 + 0x1000;
	ds->w7342 = 0x0000;
	word32 eax_96 = 0x17D78400 - __ror(DPB(__ror(DPB(eax_101, ax_78 + 0x1000, 0, 16), 0x10), SLICE((ax_78 + 0x1000) *u 0x733C, word16, 16), 0, 16), 0x10)
	uint16 ax_97 = (word16) eax_96
	byte al_99 = (byte) (ax_97 >>u 0x0001)
	eax_101 = DPB(eax_96, ax_97 >>u 0x0001, 0, 16);
	branch ax_97 >>u 0x0001 < 0x0000 l0C00_016F
l0C00_014E:
	ds->t733C = eax_101;
	ds->t733C = (int16) sqrt((real64) ds->t733C);
	ds->t733C = ds->t733C - 0x4E20;
	Eq_66 rLoc1_112 = (real64) ds->t733C / (real64) ds->t7340
	ds->t733C = cx_119;
	ds->t733C = (int16) ((real64) ds->t733C * rLoc1_112);
l0C00_016F:
	0xA000->*di_118 = al_99;
	di_118 = di_118 + 1;
	cx_119.u0 = cx_119.u0;
	branch cx_119 != 0x00A0 l0C00_011D
l0C00_0177:
	bx_122 = bx_122 + 0x0001;
	branch (byte) bx_122 != 0x64 l0C00_011A
l0C00_017D:
	goto l0C00_0115
fn0C00_0100_exit:
}

