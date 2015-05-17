// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_150/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word32 eax, word16 bp, Eq_24 * ds)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	Eq_7 eax_123 = DPB(eax, 0x13, 0, 8)
l0C00_010B:
	byte Eq_12::*di_111 = &Eq_12::b0000
	int16 bx_115 = 0xFF9D
l0C00_0110:
	Eq_7 cx_112 = 0xFF60
l0C00_0113:
	word16 ax_68 = (word16) (cx_112 *s (word16) ((int32) cx_112)) + (word16) (bx_115 *s (word16) ((int32) bx_115))
	ds->t7340 = ax_68 + 0x1000;
	ds->w7342 = 0x0000;
	word32 eax_86 = 0x17D78400 - __ror(DPB(__ror(DPB(eax_123, ax_68 + 0x1000, 0, 16), 0x10), SLICE((ax_68 + 0x1000) *u 0x733C, word16, 16), 0, 16), 0x10)
	uint16 ax_87 = (word16) eax_86
	byte al_89 = (byte) (ax_87 >>u 0x0001)
	eax_123 = DPB(eax_86, ax_87 >>u 0x0001, 0, 16);
	branch ax_87 >>u 0x0001 < 0x0000 l0C00_0167
l0C00_0144:
	ds->t733C = eax_123;
	ds->t733C = (int16) sqrt((real64) ds->t733C);
	ds->t733C = ds->t733C - 0x4E20;
	ds->t733C = -ds->t733C;
	Eq_46 rLoc1_105 = (real64) ds->t733C / (real64) ds->t7340
	ds->t733C = cx_112;
	ds->t733C = (int16) ((real64) ds->t733C * rLoc1_105);
l0C00_0167:
	0xA000->*di_111 = al_89;
	di_111 = di_111 + 1;
	cx_112.u0 = cx_112.u0;
	branch cx_112 != 0x00A0 l0C00_0113
l0C00_016F:
	bx_115 = bx_115 + 0x0001;
	branch (byte) bx_115 != 0x64 l0C00_0110
l0C00_0175:
	byte al_120 = __inb(0x60)
	eax_123 = DPB(eax_123, al_120 - 0x01, 0, 8);
	branch al_120 != 0x01 l0C00_010B
l0C00_017C:
	return
fn0C00_0100_exit:
}

