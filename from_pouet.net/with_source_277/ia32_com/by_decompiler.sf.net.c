// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_277/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte bh, Eq_10 * ds)
{
	bios_video_set_mode(0x13);
	Eq_9 Eq_10::*si_18 = &Eq_10::t01BC;
	do
	{
		word16 ax_17 = Mem0[ds:si_18 + 0x0000:word16];
		byte dh_22 = SLICE(ax_17, byte, 8);
		bios_video_set_cursor_position(bh, dh_22, (byte) ax_17);
		si_18 = si_18 + 0x0002 + 0x0001;
		dx = ax_17;
		word16 ax_25 = DPB(dx, 0x02, 8, 8);
		do
		{
			byte al_30 = Mem0[ds:si_18 + 0x0000:byte];
			msdos_write_console_char(al_30);
			ax_25 = DPB(ax_25, al_30, 0, 8);
			si_18 = si_18;
			dx = DPB(dx, al_30, 0, 8);
		} while (al_30 != 0x00);
	} while (dh_22 != 0x00);
	do
	{
		__outb(0x03C9, al_30);
		word16 ax_50 = __rol(DPB(ax_25, ~al_30, 0, 8), 0x01);
		__outb(0x03C9, (byte) ax_50);
		word16 ax_53 = __ror(ax_50, 0x01);
		byte al_54 = (byte) ax_53;
		__outb(0x03C9, al_54);
		word16 ax_57 = DPB(ax_53, ~al_54, 0, 8);
		ax_25 = ax_57 + 0x0001;
		al_30 = (byte) (ax_57 + 0x0001);
	} while (ax_57 != 0x0001);
	Eq_79 Eq_104::*di_111 = Eq_104::a0000;
	byte bl_116 = 0xCC;
	word16 bx_114 = DPB(bx, 0xCC, 0, 8);
	do
	{
		word16 cx_112 = 0x0140;
		byte cl_113 = 0x40;
		do
		{
			Eq_93 al_107;
			if ((0xA000->*di_111).t0000 == 0x00)
			{
				word16 ax_160 = __aam(cl_113 | bl_116);
				al_107 = ((byte) ax_160 | SLICE(ax_160, byte, 8)) & 0x3F;
			}
			else
			{
				Eq_87 al_168 = cl_113 - bl_116;
				al_107 = al_168 - cl_113 - (al_168 <u 0x00);
			}
			(0xA000->*di_111).t0000 = al_107;
			cx_112 = cx_112 - 0x0001;
			di_111 = di_111 + 1;
			cl_113 = (byte) cx_112;
		} while (cx_112 != 0x0000);
		bx_114 = bx_114 - 0x0001;
		bl_116 = (byte) bx_114;
	} while (bx_114 != 0x0000);
	__outb(0x0331, 0x3F);
	Mem129[ss:fp - 0x0002:word16] = 0xFA00;
	byte Eq_104::*si_122 = Eq_104::a0000;
	byte Eq_104::*di_125 = Eq_104::aFFFFFA00;
	word16 cx_126 = 0x0140;
	do
	{
		0xA000->*di_125 = 0xA000->*si_122;
		si_122 = si_122 + 1;
		di_125 = di_125 + 1;
		cx_126 = cx_126 - 0x0001;
	} while (cx_126 != 0x0000);
	Mem151[ss:fp - 0x0002:word16] = 0x0177;
	do
		;
	while (((byte) __inw(0x03DA) & 0x08) == 0x00);
	return;
}

