// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_126/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte Eq_45::*di, byte bh)
{
	bios_video_set_mode(0x13);
	uint16 ax_10 = 0xA000;
	byte al_24 = 0x00;
	do
	{
		__outb(0x03C8, al_24);
		uint16 ax_15 = ax_10 >>u 0x0002;
		byte al_16 = (byte) ax_15;
		__outb(0x03C9, al_16);
		__outb(0x03C9, al_16);
		__outb(0x03C9, al_16);
		word16 bx_14 = DPB(bx, al_24, 0, 8);
		word16 dx_12 = 0x03C9;
		bx = ax_15;
		byte bl_21 = (byte) ax_15;
		ax_10 = bx_14 - 0x0001;
		al_24 = (byte) (bx_14 - 0x0001);
	} while (bx_14 != 0x0001);
	uint16 ax_29 = DPB(bx_14 - 0x0001, 0xFA, 8, 8);
	do
	{
		0xA000->*di = al_24;
		ax_29 = ax_29 - 0x0001;
		di = di + 1;
		al_24 = (byte) ax_29;
	} while (ax_29 != 0x0000);
	do
	{
		Eq_57 Eq_45::*cx_54 = &Eq_45::tFFFFF8C0;
		do
		{
			dx_12 = DPB(dx_12, (0xA000->*cx_54).b0001, 0, 8);
			word16 ax_63 = DPB(ax_29, (0xA000->*cx_54).b0140, 0, 8) + dx_12;
			uint16 ax_66 = DPB(ax_63, (byte) ax_63 + bl_21, 0, 8);
			(0xA000->*cx_54).b0000 = (byte) (ax_66 >>u 0x0001);
			ax_29 = ax_66 >>u 0x0001;
			cx_54 = cx_54 - 0x0001;
		} while (cx_54 != Eq_45::a0000);
		bx = bx + 0x0001;
		word16 ax_79 = DPB(ax_66 >>u 0x0001, __inb(0x0060), 0, 8);
		bl_21 = (byte) bx;
		dx_12 = 0x0060;
		ax_29 = ax_79 - 0x0001;
	} while (ax_79 != 0x0001);
	return;
}

