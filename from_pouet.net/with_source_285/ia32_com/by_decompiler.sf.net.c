// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_285/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte ch, Eq_131 * ds)
{
	bios_video_set_mode(0x13);
	__outb(0x03C8, 0x00);
	byte Eq_119::*di_15 = &Eq_119::b1900;
	word16 ax_17 = 0x0000;
	byte al_18 = 0x00;
	word16 cx_26 = DPB(cx, 0x40, 0, 8);
	do
	{
		__outb(0x03C9, al_18);
		__outb(0x03C9, 0x00);
		__outb(0x03C9, 0x00);
		ax_17 = ax_17 + 0x0001;
		al_18 = (byte) ax_17;
		cx_26 = cx_26 - 0x0001;
	} while (cx_26 != 0x0000);
	word16 cx_45 = DPB(cx_26, 0x40, 0, 8);
	word16 ax_46 = 0x0000;
	do
	{
		__outb(0x03C9, 0x3F);
		__outb(0x03C9, (byte) ax_46);
		__outb(0x03C9, 0x00);
		ax_46 = ax_46 + 0x0001;
		cx_45 = cx_45 - 0x0001;
	} while (cx_45 != 0x0000);
	word16 cx_75 = DPB(cx_45, 0x40, 0, 8);
	word16 ax_76 = 0x0000;
	do
	{
		byte al_89 = 0x3F - (byte) ax_76;
		__outb(0x03C9, al_89);
		__outb(0x03C9, al_89);
		__outb(0x03C9, (byte) ax_76);
		ax_76 = ax_76 + 0x0001;
		cx_75 = cx_75 - 0x0001;
	} while (cx_75 != 0x0000);
	word16 cx_103 = DPB(cx_75, 0x40, 0, 8);
	word16 ax_104 = 0x0000;
	byte al_106 = 0x00;
	do
	{
		__outb(0x03C9, al_106);
		__outb(0x03C9, 0x3F);
		__outb(0x03C9, 0x3F);
		ax_104 = ax_104 + 0x0001;
		al_106 = (byte) ax_104;
		cx_103 = cx_103 - 0x0001;
	} while (cx_103 != 0x0000);
	word16 bp_126 = 0x0000;
	byte al_129 = 0xFF;
	word16 ax_130 = DPB(ax_104, 0xFF, 0, 8);
	while (true)
	{
		word16 cx_161 = DPB(cx_103, 0x02, 8, 8);
		do
		{
			bp_126 = bp_126 + 0x0001;
			if (bp_126 == 0x0000)
			{
				ax_130 = ~ax_130;
				al_129 = (byte) ax_130;
			}
			0xA000->*di_15 = al_129;
			word16 di_182 = di_15 + 1;
			uint16 dx_189 = SEQ(0x0000, di_182 - 0x0001) % ds->w018C;
			uint16 ax_191 = SEQ(dx_189, di_182 - 0x0001) /u ds->w018C;
			if (dx_189 == 0x0000)
				ds->w0200 = 0x0001;
			if (dx_189 == 0x013F)
				ds->w0200 = 0xFFFF;
			if (ax_191 == 0x0014)
				ds->w0202 = 0x0140;
			if (ax_191 == 0x00B3)
				ds->w0202 = 0xFEC0;
			di_15 = di_182 - 0x0001 + ds->w0200 + ds->w0202;
			if (__inb(0x60) == 0x01)
			{
				bios_video_set_mode(0x03);
				return;
			}
			al_129 = (byte) ax_130;
			cx_161 = cx_161 - 0x0001;
		} while (cx_161 != 0x0000);
		Mem226[ss:fp - 0x000A:word16] = 0xA000;
		Eq_119 * ax_236 = DPB(cs, SLICE(cs, byte, 8) + 0x10, 8, 8);
		uint16 ax_238 = 0x0000;
		word16 cx_244 = DPB(cx_161, 0xFA, 8, 8);
		do
		{
			Eq_203 Eq_119::*si_248 = cx_244 - 0x0001;
			uint16 dx_257 = DPB(ax_238, (0xA000->*si_248).b0000, 0, 8) + DPB(ax_238, (0xA000->*si_248).b0002, 0, 8);
			(ax_236->*si_248).b0001 = (byte) (dx_257 >>u 0x0001);
			ax_238 = dx_257 >>u 0x0001;
			cx_244 = cx_244 - 0x0001;
		} while (cx_244 != 0x0000);
		Mem276[ss:fp - 0x000C:word16] = ax_236;
		word16 Eq_119::*di_281 = Eq_119::a0000;
		word16 Eq_119::*si_282 = Eq_119::a0000;
		word16 cx_286 = DPB(cx_244, 0x7D, 8, 8);
		do
			;
		while ((__inb(0x03DA) & 0x08) != 0x00);
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		while (cx_286 != 0x0000)
		{
			0xA000->*di_281 = 0xA000->*si_282;
			si_282 = si_282 + 1;
			di_281 = di_281 + 1;
			cx_286 = cx_286 - 0x0001;
		}
		cx_103 = cx_161;
		al_129 = (byte) ax_130;
	}
}

