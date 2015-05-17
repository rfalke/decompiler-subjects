// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_223/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, word16 si, word16 di, Eq_38 * ds)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
l0C00_010C:
	__outb(0x03C8, cl)
	__outb(0x03C9, cl)
	__outb(0x03C9, cl)
	int8 al_20 = (byte) ((cl >>u 0x01) *u 0x03)
	branch al_20 < 0x3F l0C00_0123
l0C00_0121:
	al_20 = 0x3F;
l0C00_0123:
	__outb(0x03C9, al_20)
	cx = cx - 0x0001;
	cl = (byte) cx;
	branch cx != 0x0000 l0C00_010C
l0C00_0126:
	ss->t0202 = ss->t01F6 / (real64) ds->w01F0;
	ss->t0206 = (ss->r01FA - ss->t01F2) / (real64) ds->w01F0;
	ds->w01F0 = ds->w01F0 + 0x0014;
	ds->w01EA = di;
	ss->t020A = ss->t0202 * (real64) ds->w01EA;
	ds->w01EA = si;
	ss->t020E = ss->t0206 * (real64) ds->w01EA + ss->t01F2;
	ss->dw0212 = 0x00000000;
	ss->dw0216 = 0x00000000;
fn0C00_0100_exit:
}

