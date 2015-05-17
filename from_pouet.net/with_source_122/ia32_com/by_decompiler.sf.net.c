// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_122/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte cl, byte ah, byte ch)
{
	__cli();
	do
	{
		do
		{
			byte al_26 = __inb(0x03DA);
			ax = DPB(ax, al_26 & 0x08, 0, 8);
		} while ((al_26 & 0x08) == 0x00);
		cl = cl + 0x01;
		word16 bx_34 = 0x018F;
		uint8 bl_35 = 0x8F;
		do
		{
			do
			{
				byte al_47 = __inb(0x03DA);
				ax = DPB(ax, al_47 & 0x01, 0, 8);
			} while ((al_47 & 0x01) != 0x00);
			do
			{
				byte al_54 = __inb(0x03DA);
				ax = DPB(ax_84, al_54 & 0x01, 0, 8);
				word16 ax_84 = ax;
			} while ((al_54 & 0x01) == 0x00);
			__outb(0x03C8, 0x00);
			__outb(0x03C9, cl);
			Eq_50 al_65 = bl_35 >>u 0x01;
			__outb(0x03C9, al_65);
			ch = ch + al_65;
			__outb(0x03C9, ch);
			bx_34 = bx_34 - 0x0001;
			ax = DPB(ax_84, ch, 0, 8);
			bl_35 = (byte) bx_34;
		} while (bx_34 != 0x0000);
		word16 ax_75 = DPB(ax_84, __inb(0x60), 0, 8);
		ax = ax_75 - 0x0001;
		byte al_77 = (byte) (ax_75 - 0x0001);
	} while (ax_75 != 0x0001);
	__outb(0x03C8, al_77);
	__outb(0x03C9, al_77);
	__outb(0x03C9, al_77);
	__outb(0x03C9, al_77);
	return;
}

