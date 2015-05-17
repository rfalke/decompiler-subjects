// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_188/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte ch, Eq_127 * ds)
{
	bios_video_set_mode(0x13);
	byte Eq_115::*di_133 = &Eq_115::b0000;
	word16 ax_18 = 0x0000;
	byte al_19 = 0x00;
	word16 cx_16 = DPB(cx, 0x40, 0, 8);
	do
	{
		__outb(0x03C9, al_19);
		__outb(0x03C9, 0x00);
		__outb(0x03C9, 0x00);
		ax_18 = ax_18 + 0x0001;
		al_19 = (byte) ax_18;
		cx_16 = cx_16 - 0x0001;
	} while (cx_16 != 0x0000);
	word16 cx_34 = DPB(cx_16, 0x40, 0, 8);
	word16 ax_35 = 0x0000;
	do
	{
		__outb(0x03C9, 0x3F);
		__outb(0x03C9, (byte) ax_35);
		__outb(0x03C9, 0x00);
		ax_35 = ax_35 + 0x0001;
		cx_34 = cx_34 - 0x0001;
	} while (cx_34 != 0x0000);
	word16 cx_62 = DPB(cx_34, 0x40, 0, 8);
	word16 ax_63 = 0x0000;
	do
	{
		byte al_75 = 0x3F - (byte) ax_63;
		__outb(0x03C9, al_75);
		__outb(0x03C9, al_75);
		__outb(0x03C9, (byte) ax_63);
		ax_63 = ax_63 + 0x0001;
		cx_62 = cx_62 - 0x0001;
	} while (cx_62 != 0x0000);
	word16 cx_106 = DPB(cx_62, 0x40, 0, 8);
	word16 ax_102 = 0x0000;
	byte al_103 = 0x00;
	do
	{
		__outb(0x03C9, al_103);
		__outb(0x03C9, 0x3F);
		__outb(0x03C9, 0x3F);
		ax_102 = ax_102 + 0x0001;
		al_103 = (byte) ax_102;
		cx_106 = cx_106 - 0x0001;
	} while (cx_106 != 0x0000);
	word16 bp_109 = 0x0000;
	byte al_112 = 0xFF;
	word16 ax_113 = DPB(ax_102, 0xFF, 0, 8);
	while (true)
	{
		word16 cx_141 = DPB(cx_106, 0x02, 8, 8);
		do
		{
			bp_109 = bp_109 + 0x0001;
			if (bp_109 == 0x0000)
			{
				ax_113 = ~ax_113;
				al_112 = (byte) ax_113;
			}
			0xA190->*di_133 = al_112;
			word16 di_161 = di_133 + 1;
			uint16 dx_168 = SEQ(0x0000, di_161 - 0x0001) % ds->w0181;
			uint16 ax_170 = SEQ(dx_168, di_161 - 0x0001) /u ds->w0181;
			if (dx_168 == 0x0000)
				ds->w01C4 = 0x0001;
			if (dx_168 == 0x013F)
				ds->w01C4 = 0xFFFF;
			if (ax_170 == 0x0000)
				ds->w01C6 = 0x0140;
			if (ax_170 == 0x009F)
				ds->w01C6 = 0xFEC0;
			di_133 = di_161 - 0x0001 + ds->w01C4 + ds->w01C6;
			if (DPB(ax_170, __inb(0x60), 0, 8) == 0x0001)
				return;
			al_112 = (byte) ax_113;
			cx_141 = cx_141 - 0x0001;
		} while (cx_141 != 0x0000);
		Mem211[ss:fp - 0x000A:word16] = 0xA190;
		uint16 ax_215 = 0x0000;
		word16 cx_219 = DPB(cx_141, 0xFA, 8, 8);
		do
		{
			Eq_191 Eq_115::*si_223 = cx_219 - 0x0001;
			uint16 dx_232 = DPB(ax_215, (0xA190->*si_223).b0000, 0, 8) + DPB(ax_215, (0xA190->*si_223).b0002, 0, 8);
			(0xA190->*si_223).b0001 = (byte) (dx_232 >>u 0x0001);
			ax_215 = dx_232 >>u 0x0001;
			cx_219 = cx_219 - 0x0001;
		} while (cx_219 != 0x0000);
		cx_106 = cx_141;
		al_112 = (byte) ax_113;
	}
}

