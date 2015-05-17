// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_230/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte ch, Eq_37 * ds)
{
	bios_video_set_mode(0x13);
	__outb(0x03D4, 0x11);
	__outb(0x03D5, __inb(0x03D5) & 0x7F);
	word16 dx_15 = 0x03D5;
	byte Eq_37::*si_12 = Eq_37::a01A0;
	byte al_19 = ds->*si_12;
	byte Eq_37::*si_20 = si_12 + 1;
	while (al_19 != 0x00)
	{
		dx_15 = DPB(dx_15, al_19, 0, 8);
		__outb(dx_15, ds->*si_20);
		si_12 = si_20 + 1;
		al_19 = ds->*si_12;
		si_20 = si_12 + 1;
	}
	byte ah_178 = 0x00;
	word16 dx_35 = DPB(dx_15, 0xC8, 0, 8);
	byte cl_36 = 0x7F;
	word16 cx_38 = DPB(cx, 0x7F, 0, 8);
	do
	{
		byte bl_177 = cl_36 & 0x1F;
		byte bh_51 = 0x1F - bl_177;
		if ((cl_36 & 0x20) != 0x00)
			bl_177 = bh_51;
		if ((cl_36 & 0x40) != 0x00)
		{
			bl_177 = ah_178;
			ah_178 = bl_177;
		}
		__outb(dx_35, cl_36);
		word16 dx_64 = dx_35 + 0x0001;
		__outb(dx_64, bl_177);
		__outb(dx_64, bl_177);
		__outb(dx_64, ah_178);
		cx_38 = cx_38 - 0x0001;
		byte al_100 = ah_178;
		dx_35 = dx_64 - 0x0001;
		cl_36 = (byte) cx_38;
	} while (cx_38 != 0x0000);
	word16 dx_80 = DPB(dx_64 - 0x0001, 0xDA, 0, 8);
	do
	{
		byte Eq_92::*di_104 = &Eq_92::b0000;
		byte ch_120 = 0x00;
		do
		{
			byte cl_101 = 0x00;
			do
			{
				byte al_108 = al_100 & 0x3F;
				0xA000->*di_104 = al_108;
				word16 di_110 = di_104 + 1;
				di_104 = di_110 + 0x0001;
				al_100 = al_108 + ds->b01C0;
				cl_101 = cl_101 + 0x01;
			} while (cl_101 != 0x00);
			di_104 = di_110 + 0x0002;
			ch_120 = ch_120 + 0x01;
		} while (ch_120 != 0x00);
		ds->b01C0 = ds->b01C0 + 0x01;
		byte Eq_92::*di_127 = &Eq_92::b0001;
		byte ch_128 = 0x00;
		do
		{
			byte cl_138 = 0x00;
			do
			{
				byte al_145 = al_100 & 0x3F;
				0xA000->*di_127 = al_145 | 0x40;
				byte Eq_92::*di_148 = di_127 + 1;
				di_127 = di_148 + 0x0001;
				al_100 = (al_145 | 0x40) - ds->b01C1;
				cl_138 = cl_138 + 0x01;
			} while (cl_138 != 0x00);
			di_127 = di_148;
			ch_128 = ch_128 + 0x01;
		} while (ch_128 != 0x00);
		ds->b01C1 = ds->b01C1 + 0x01;
		do
			;
		while ((__inb(dx_80) & 0x08) == 0x00);
		byte al_169 = __inb(0x60);
		al_100 = al_169 - 0x01;
	} while (al_169 != 0x01);
	bios_video_set_mode(0x03);
	msdos_terminate(0x03);
}

