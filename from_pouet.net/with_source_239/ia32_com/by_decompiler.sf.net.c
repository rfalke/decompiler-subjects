// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_239/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_8 * ds)
{
	bios_video_set_mode(0x13);
	do
	{
		Mem28[ss:fp - 0x0002:word16] = cs;
		byte Eq_21::*di_32 = Eq_21::a020D;
		word16 cx_33 = 0xFA00;
		while (cx_33 != 0x0000)
		{
			0xA000->*di_32 = 0x00;
			di_32 = di_32 + 1;
			cx_33 = cx_33 - 0x0001;
		}
		Eq_7 rLoc1_49 = ds->t01FB + ds->t01F3;
		ds->t01FB = rLoc1_49;
		ds->t01FF = rLoc1_49;
		int16 cx_133 = 0x015E;
		do
		{
			ds->w0207 = cx_133;
			Eq_67 rLoc1_64 = ds->t01FB - ds->t01FF - ds->t01FF;
			real64 rLoc1_66 = cos(rLoc1_64);
			ds->t0203 = sin(rLoc1_64);
			Eq_7 rLoc2_70 = ds->t01FF - ds->r01F7;
			ds->t01FF = rLoc2_70;
			Eq_91 rLoc2_72 = rLoc2_70 * (real64) ds->w01EF;
			Eq_96 rLoc2_74 = cos(rLoc2_72);
			ds->w020B = (int16) ((sin(rLoc2_72) * (real64) ds->w01ED - (real64) ds->w0207 / (real64) ds->w01EF) * ds->t0203 + (real64) ds->w01EB);
			ds->w0209 = (int16) (rLoc1_66 * (rLoc2_74 * (real64) ds->w01ED - (real64) ds->w0207 / (real64) ds->w01F1) + (real64) ds->w01E9);
			byte Eq_8::*di_107 = ds->w020B *s 0x0140 + ds->w0209 + 0x020D;
			byte Eq_8::*si_106 = &Eq_8::b01D0;
			byte dh_129 = 0x05;
			do
			{
				byte dl_108 = 0x05;
				do
				{
					byte al_115 = ds->*si_106;
					si_106 = si_106 + 1;
					if (al_115 != 0x00)
						ds->*di_107 = al_115;
					di_107 = di_107 + 1;
					dl_108 = dl_108 - 0x01;
				} while (dl_108 != 0x00);
				di_107 = di_107 + 315;
				dh_129 = dh_129 - 0x01;
			} while (dh_129 != 0x00);
			cx_133 = cx_133 - 0x0001;
		} while (cx_133 != 0x0000);
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		byte Eq_21::*di_141 = Eq_21::a0000;
		byte Eq_8::*si_144 = Eq_8::a020D;
		word16 cx_145 = 0xFA00;
		while (cx_145 != 0x0000)
		{
			0xA000->*di_141 = ds->*si_144;
			si_144 = si_144 + 1;
			di_141 = di_141 + 1;
			cx_145 = cx_145 - 0x0001;
		}
	} while (__inb(0x60) != 0x01);
	bios_video_set_mode(0x03);
	return;
}

