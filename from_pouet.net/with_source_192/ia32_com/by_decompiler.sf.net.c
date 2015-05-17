// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_192/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, word16 bp, Eq_61 * es)
{
	__syscall(0x10);
	word16 ax_14 = 0x4F02;
	byte al_16 = 0x02;
	do
	{
		__outb(0x03C9, al_16);
		__outb(0x03C9, al_16);
		__outb(0x03C9, al_16);
		ax_14 = ax_14 + 0x0001;
		al_16 = (byte) ax_14;
		cx = cx - 0x0001;
	} while (cx != 0x0000);
	__syscall(0x10);
	do
	{
		Eq_31 di_136 = 0xFFFF;
		uint16 bx_106 = 0x01E0;
		do
		{
			uint16 cx_128 = 0x0280;
			do
			{
				word16 bx_98 = bx_106 - 0x00F0;
				int16 bx_101 = DPB(bx_98, (byte) bx_98 | 0x01, 0, 8);
				byte al_111 = (byte) (SEQ(63 % bx_101, 0x003F) / bx_101) & 0x3F ^ 0x3F;
				if (bx_106 >=u 0x003C && (bx_106 <u 0x017C && (cx_128 >=u 0x0032 && cx_128 <u 0x01F4)))
				{
					al_111 = (byte) (bx_106 >>u 0x0003);
					if (bx_106 >=u 0x0050 && (bx_106 <u 0x0168 && (cx_128 >=u 0x003C && cx_128 <u 0x01EA)))
					{
						byte bl_219 = 0x00;
						if ((((bx_106 >>u 0x0002 & 0x0007) + bp)[(bx_106 ^ 0x0C00->w0400 ^ cx_128) & 0x03C0] & 0x01 << ((byte) (cx_128 >>u 0x0001) & 0x07)) != 0x00)
							bl_219 = 0x10;
						al_111 = (byte) ((word16) (di_136 *u (word16) __rdtsc()) >>u 0x000C) + bl_219;
					}
				}
				Mem134[0xA000:di_136 + 0x0000:byte] = al_111;
				word16 di_135 = di_136 + 0x0001;
				di_136 = di_135;
				if (di_135 == 0x0000)
					__syscall(0x10);
				cx_128 = cx_128 - 0x0001;
			} while (cx_128 != 0x0000);
			bx_106 = bx_106 - 0x0001;
		} while (bx_106 != 0x0000);
		0x0C00->w0400 = 0x0C00->w0400 + 0x0001;
	} while (__inb(0x60) != 0x01);
	return;
}

