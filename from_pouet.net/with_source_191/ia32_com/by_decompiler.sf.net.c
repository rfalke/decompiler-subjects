// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_191/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte Eq_81::*bx, byte al, uint8 ch)
{
	bios_video_set_mode(al);
	__outb(0x03D4, 0x11);
	__outb(0x03D5, __inb(0x03D5) & 0x7F);
	byte Eq_31::*si_10 = Eq_31::a016E;
	word16 dx_17 = 0x03D5;
	byte al_24 = cs->*si_10;
	byte Eq_31::*si_25 = si_10 + 1;
	while (al_24 != 0x00)
	{
		dx_17 = DPB(dx_17, al_24, 0, 8);
		__outb(dx_17, cs->*si_25);
		si_10 = si_25 + 1;
		al_24 = cs->*si_10;
		si_25 = si_10 + 1;
	}
	word16 dx_36 = DPB(dx_17, 0xC8, 0, 8);
	int8 cl_37 = 0x3F;
	do
	{
		__outb(dx_36, cl_37);
		word16 dx_41 = dx_36 + 0x0001;
		__outb(dx_41, cl_37);
		__outb(dx_41, 0x00);
		__outb(dx_41, cl_37);
		dx_36 = dx_41 - 0x0001;
		cl_37 = cl_37 - 0x01;
	} while (cl_37 >= 0x00);
	word16 dx_55 = DPB(dx_41 - 0x0001, 0xDA, 0, 8);
	do
	{
		0xA000->*bx = (byte) (ch *u bh >>u 0x0004 ^ ch *u bl >>u 0x0004) & 0x3F;
		byte Eq_81::*bx_75 = bx + 1;
		bx = bx_75;
		bl = (byte) bx_75;
		bh = SLICE(bx_75, byte, 8);
		if (bx_75 != &Eq_81::b0000)
			continue;
		ch = ch + 0x01;
		do
			;
		while ((__inb(dx_55) & 0x08) != 0x00);
	} while (__inb(0x60) != 0x01);
	return;
}

