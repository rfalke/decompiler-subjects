// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_217/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_8 * ds)
{
	bios_video_set_mode(0x13);
	Eq_7 * es_17 = &ds->t0064;
	while (true)
	{
		ds->w0207 = 0x0000;
		ds->w0203 = 0x0000;
		word16 Eq_7::*di_23 = Eq_7::a0000;
		word16 cx_24 = 0x7B0C;
		while (cx_24 != 0x0000)
		{
			es_17->*di_23 = 0x0000;
			di_23 = di_23 + 1;
			cx_24 = cx_24 - 0x0001;
		}
		ds->w01F5 = 0x0009;
		do
		{
			ds->w0205 = ds->w0205 + 0x00B3;
			ds->w0207 = ds->w0207 + 0x007D;
			word16 bp_49 = 0x04E8;
			do
			{
				ds->w0203 = ds->w0203 + 0x0001;
				ds->w0203 = ds->w0203 + 0x0001;
				fn0C00_0179(es_17, ds);
				fn0C00_0179(es_17, ds);
				bp_49 = bp_49 - 0x0001;
			} while (bp_49 != 0x0000);
			word16 v20_69 = ds->w01F5 - 0x0001;
			ds->w01F5 = v20_69;
		} while (v20_69 != 0x0000);
		word16 Eq_7::*si_77 = Eq_7::a0000;
		word16 Eq_81::*di_78 = Eq_81::a0000;
		word16 cx_86 = 0x7B0C;
		while (cx_86 != 0x0000)
		{
			0xA000->*di_78 = es_17->*si_77;
			si_77 = si_77 + 1;
			di_78 = di_78 + 1;
			cx_86 = cx_86 - 0x0001;
		}
		if (__inb(0x60) == 0x81)
			msdos_terminate_program20();
	}
}

void fn0C00_0179(Eq_7 * es, Eq_8 * ds)
{
	Eq_104 Eq_109::*esp_3 = DPB(esp, fp, 0, 16);
	Eq_108 rLoc1_8 = (real64) (ss->*esp_3).w0002 / (real64) ds->w01FB;
	Eq_118 rLoc1_10 = cos(rLoc1_8);
	ds->w01FF = (int16) (sin(rLoc1_8) * (real64) ds->w01F3);
	ds->w0201 = (int16) (rLoc1_10 * (real64) ds->w01F3);
	Eq_137 rLoc1_17 = (real64) (ss->*esp_3).w0004 / (real64) ds->w01FB;
	Eq_146 rLoc1_19 = cos(rLoc1_17);
	ds->w01FD = (int16) (sin(rLoc1_17) * (real64) ds->w0201);
	ds->w0201 = (int16) (rLoc1_19 * (real64) ds->w0201);
	Eq_165 rLoc3_28 = (real64) ds->w0201 / (real64) ds->w01FB;
	Eq_173 rLoc2_26 = (real64) ds->w01FF;
	Eq_177 rLoc1_33 = (real64) ds->w01FD / (rLoc2_26 / (rLoc3_28 + (rLoc3_28 + 1)));
	ds->w01FF = (int16) -rLoc2_26;
	ds->w01FD = (int16) (rLoc1_33 * ds->t01F7);
	((word16) ((ds->w01FF + 0x0062) *u 0x0140) + 0x00A0)[ds->w01FD] = 0x0E;
	return;
}

