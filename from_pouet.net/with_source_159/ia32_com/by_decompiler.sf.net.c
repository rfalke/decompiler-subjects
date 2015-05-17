// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_159/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100()
{
	bios_video_set_mode(0x13);
	word16 cx_11 = 0x0070;
	byte cl_10 = 0x70;
	do
	{
		__outb(0x03C8, (byte) cx_11);
		__outb(0x03C9, 0x00);
		__outb(0x03C9, cl_10);
		__outb(0x03C9, cl_10);
		cx_11 = cx_11 - 0x0001;
		cl_10 = (byte) cx_11;
	} while (cx_11 != 0x0000);
	byte al_30;
	word16 di_31 = fn0C00_0158(0x0000, 0xA000, out al_30);
	do
	{
		word16 cx_40 = 0x84D0;
		do
		{
			byte al_50 = al_30 + Mem0[0xA000:di_31 + 0x0001:byte] + Mem0[0xA000:di_31 - 0x0001:byte] + Mem0[0xA000:di_31 - 0x013F:byte] + Mem0[0xA000:di_31 + 0x013F:byte];
			Mem54[0xA000:di_31 + 0x0000:byte] = al_50 >>u 0x02;
			word16 di_55 = di_31 + 0x0001;
			Mem56[0xA000:di_55 + 0x0000:byte] = al_50 >>u 0x02;
			al_30 = al_50 >>u 0x02;
			di_31 = di_55 + 0x0001;
			cx_40 = cx_40 - 0x0001;
		} while (cx_40 != 0x0000);
		byte al_62 = __inb(0x60);
		di_31 = 0x0140;
		al_30 = al_62 - 0x01;
	} while (al_62 != 0x01);
	bios_video_set_mode(0x03);
	msdos_display_string(cs, 0x0164);
	return;
}

word16 fn0C00_0158(word16 di, selector es, ptr16 alOut)
{
	word16 cx_11 = 0x0140;
	do
	{
		byte al_6 = __inb(0x40);
		*alOut = al_6;
		Mem7[es:di + 0x0000:byte] = al_6;
		di = di + 0x0001;
		cx_11 = cx_11 - 0x0001;
	} while (cx_11 != 0x0000);
	return di;
}

