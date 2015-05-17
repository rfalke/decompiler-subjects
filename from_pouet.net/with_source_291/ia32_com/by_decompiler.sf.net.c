// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_291/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_38 * ds)
{
	bios_video_set_mode(0x13);
	uint8 al_17 = 0x13;
	word16 cx_19 = 0x0000;
	do
	{
		__outb(0x03C8, al_17);
		Eq_14 al_12 = al_17 >>u 0x02;
		__outb(0x03C9, al_12);
		uint16 ax_13 = al_12 *u al_12;
		__outb(0x03C9, (byte) (ax_13 >>u 0x0006));
		al_17 = (byte) (ax_13 >>u 0x0007);
		__outb(0x03C9, al_17);
		cx_19 = cx_19 - 0x0001;
	} while (cx_19 != 0x0000);
	do
	{
		Mem48[ss:fp - 0x0002:word16] = ds;
		word16 dx_127 = 0x0052;
		byte Eq_38::*di_125 = Eq_38::a0200;
		do
		{
			word16 cx_126 = 0x0140;
			do
			{
				ds->w01F8 = 0x00A0 - cx_126;
				real64 rLoc1_74 = (real64) ds->w01F8;
				ds->w01F8 = dx_127 + 0x0000;
				real64 rLoc2_78 = (real64) ds->w01F8;
				ds->w01F8 = (int16) (cos(sqrt(sqrt(rLoc2_78 * rLoc2_78 + rLoc2_78 * rLoc2_78)) * 3 + sin(atan(rLoc2_78, rLoc1_74) * __rndint((real64) ds->t01F6 / (real64) ds->w01FA) + (real64) ds->t01F6 / (real64) ds->w01FD) * __rndint((real64) ds->t01F6 / (real64) ds->w01FB) + -((real64) ds->t01F6)) * (real64) ds->w0188);
				word16 bx_117 = (word16) (ds->*di_125);
				uint16 ax_120 = (ds->w01F8 + 0x007F + bx_117 >>u 0x0001) + bx_117;
				byte al_122 = (byte) (ax_120 >>u 0x0001);
				0xA000->*di_125 = al_122;
				di_125 = di_125 + 1;
				cx_126 = cx_126 - 0x0001;
			} while (cx_126 != 0x0000);
			dx_127 = dx_127 - 0x0001;
		} while (dx_127 != 0x0078);
		Mem131[ds:0x01F6:word16] = Mem124[ds:0x01F6:word16] + 0x0001;
		__outb(0x61, al_122);
		__outb(0x43, 0xB6);
		byte al_138 = (byte) (ax_120 >>u 0x0001) + ds->t01F6;
		__outb(0x42, al_138);
		__outb(0x42, al_138);
		Eq_179 Eq_38::*di_140 = Eq_38::a0200;
		word16 cx_141 = 0xFC80;
		do
		{
			(0xA000->*di_140).b0000 = (byte) (((word16) (ds->*di_140).b0000 << 0x0002) + (word16) (ds->*di_140).b0001 + (word16) (ds->*di_140).b0001 + (word16) (ds->*di_140).b0140 + (word16) (ds->*di_140).b0140 >>u 0x0003);
			di_140 = di_140 + 1;
			cx_141 = cx_141 - 0x0001;
		} while (cx_141 != 0x0000);
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		word16 Eq_38::*si_169 = Eq_38::a0340;
		word16 Eq_38::*di_170 = Eq_38::a0000;
		word16 cx_175 = 0x7D00;
		while (cx_175 != 0x0000)
		{
			0xA000->*di_170 = ds->*si_169;
			si_169 = si_169 + 1;
			di_170 = di_170 + 1;
			cx_175 = cx_175 - 0x0001;
		}
		byte al_184;
		bios_kbd_check_keystroke(out al_184);
	} while (0x0000 == 0x0000);
	return;
}

