// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_196/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, word16 bp, Eq_61 * es, Eq_88 * ds)
{
	__syscall(0x10);
	word16 ax_11 = 0x4F02;
	byte al_10 = 0x02;
	do
	{
		__outb(0x03C9, al_10);
		__outb(0x03C9, al_10);
		__outb(0x03C9, al_10);
		ax_11 = ax_11 + 0x0001;
		al_10 = (byte) ax_11;
		cx = cx - 0x0001;
	} while (cx != 0x0000);
	__syscall(0x10);
	do
	{
		byte Eq_30::*di_118 = &Eq_30::bFFFFFFFF;
		uint16 bx_112 = 0x01E0;
		do
		{
			uint16 cx_110 = 0x0280;
			do
			{
				word16 bx_84 = bx_112 - 0x00F0;
				int16 bx_87 = DPB(bx_84, (byte) bx_84 | 0x01, 0, 8);
				byte al_115 = (byte) (SEQ(63 % bx_87, 0x003F) / bx_87) & 0x3F ^ 0x3F;
				if (bx_112 >=u 0x003C && (bx_112 <u 0x017C && (cx_110 >=u 0x0032 && cx_110 <u 0x01F4)))
				{
					al_115 = (byte) (bx_112 >>u 0x0003);
					if (bx_112 >=u 0x0050 && (bx_112 <u 0x0168 && (cx_110 >=u 0x003C && cx_110 <u 0x01EA)))
					{
						byte bl_199 = 0x00;
						if ((((bx_112 >>u 0x0002 & 0x0007) + bp)[(bx_112 ^ 0x0C00->w0400 ^ cx_110) & 0x03C0] & 0x01 << ((byte) (cx_110 >>u 0x0001) & 0x07)) != 0x00)
							bl_199 = 0x10;
						Eq_87 ax_208 = ((word16) (ds->w0116 *s ds->t0200) >>u 0x0001) + ds->w0204;
						ds->w0204 = ds->w0204 - 0x0001;
						ds->t0200 = ax_208;
						al_115 = (byte) (ax_208 >>u 0x000C) + bl_199;
					}
				}
				0xA000->*di_118 = al_115;
				byte Eq_30::*di_117 = di_118 + 1;
				di_118 = di_117;
				if (di_117 == &Eq_30::b0000)
					__syscall(0x10);
				cx_110 = cx_110 - 0x0001;
			} while (cx_110 != 0x0000);
			bx_112 = bx_112 - 0x0001;
		} while (bx_112 != 0x0000);
		0x0C00->w0400 = 0x0C00->w0400 + 0x0001;
	} while (__inb(0x60) != 0x01);
	return;
}

