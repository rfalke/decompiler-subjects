// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_316/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word32 eax, word32 ecx, word32 ebx, Eq_46 * ds)
{
	bios_video_set_mode(0x13);
	__outb(0x03C8, 0x00);
	word32 eax_17 = DPB(eax, 0x00, 0, 8);
	byte cl_11 = 0xFF;
	word16 cx_13 = DPB(cx, 0xFF, 0, 8);
	word32 ecx_134 = DPB(ecx, 0xFF, 0, 8);
	do
	{
		byte al_22 = ~cl_11;
		__outb(0x03C9, al_22);
		__outb(0x03C9, al_22);
		__outb(0x03C9, 0x00);
		cx_13 = cx_13 - 0x0001;
		eax_17 = DPB(eax_17, 0x00, 0, 8);
		cl_11 = (byte) cx_13;
		ecx_134 = DPB(ecx_134, cx_13, 0, 16);
	} while (cx_13 != 0x0000);
	word32 eax_155 = DPB(eax_17, &ds->t0064, 0, 16);
	Eq_50 * es_151 = &ds->t0064;
	while (true)
	{
		ds->w02E9 = 0x0000;
		ds->w02E5 = 0x0000;
		ds->w02E7 = 0x0000;
		word16 Eq_50::*di_53 = Eq_50::a0000;
		word16 cx_54 = 0x7B0C;
		word32 ecx_56 = DPB(ecx_134, 0x7B0C, 0, 16);
		word32 eax_59 = DPB(eax_155, 0x0000, 0, 16);
		while (cx_54 != 0x0000)
		{
			es_151->*di_53 = 0x0000;
			cx_54 = cx_54 - 0x0001;
			di_53 = di_53 + 1;
			ecx_56 = DPB(ecx_56, cx_54, 0, 16);
		}
		ds->w02CF = 0x0009;
		ds->w02D7 = ds->w02D7 + 0x0004;
		ds->w02D9 = ds->w02D9 + 0x0006;
		ds->w02DB = ds->w02DB + 0x0003;
		do
		{
			ds->w02E7 = ds->w02E7 + 0x00B3;
			ds->w02E9 = ds->w02E9 + 0x007D;
			word16 bp_110 = 0x044C;
			do
			{
				ds->w02E5 = ds->w02E5 + 0x0003;
				fn0C00_01E1(eax_59, ecx_56, ebx, es_151, ds);
				fn0C00_01E1(eax_59, ecx_56, ebx, es_151, ds);
				bp_110 = bp_110 - 0x0001;
			} while (bp_110 != 0x0000);
			word16 v24_113 = ds->w02CF - 0x0001;
			ds->w02CF = v24_113;
		} while (v24_113 != 0x0000);
		word16 Eq_50::*si_121 = Eq_50::a0000;
		word16 Eq_146::*di_122 = Eq_146::a0000;
		word32 eax_130 = DPB(eax_155, 0xA000, 0, 16);
		word16 cx_132 = 0x7B0C;
		ecx_134 = DPB(ecx_56, 0x7B0C, 0, 16);
		while (cx_132 != 0x0000)
		{
			0xA000->*di_122 = es_151->*si_121;
			cx_132 = cx_132 - 0x0001;
			si_121 = si_121 + 1;
			di_122 = di_122 + 1;
			ecx_134 = DPB(ecx_134, cx_132, 0, 16);
		}
		byte al_153 = __inb(0x60);
		eax_155 = DPB(eax_130, al_153, 0, 8);
		if (al_153 == 0x81)
			msdos_terminate_program20();
	}
}

void fn0C00_019C(word32 eax, word32 ecx, word32 ebx, Eq_46 * ds)
{
	Eq_177 Eq_183::*esp_3 = DPB(esp, fp, 0, 16);
	int16 Eq_46::*eax_8 = DPB(eax, (ss->*esp_3).w0004, 0, 16);
	int16 Eq_46::*ebx_11 = DPB(ebx, (ss->*esp_3).w0006, 0, 16);
	real64 rLoc1_16 = (real64) (ds->*eax_8);
	real64 rLoc2_18 = (real64) (ds->*ebx_11);
	int16 Eq_46::*ecx_14 = DPB(ecx, (ss->*esp_3).w0002, 0, 16);
	ds->t02EB = sqrt(rLoc1_16 * rLoc1_16 + rLoc2_18 * rLoc2_18);
	real64 rLoc1_28 = atan((real64) (ds->*eax_8), (real64) (ds->*ebx_11)) + (real64) (ds->*ecx_14) / (real64) ds->w02CD;
	Eq_238 rLoc1_30 = cos(rLoc1_28);
	ds->*ebx_11 = (int16) (sin(rLoc1_28) * ds->t02EB);
	ds->*eax_8 = (int16) (rLoc1_30 * ds->t02EB);
	return;
}

void fn0C00_01E1(word32 eax, word32 ecx, word32 ebx, Eq_50 * es, Eq_46 * ds)
{
	Eq_257 Eq_262::*esp_3 = DPB(esp, fp, 0, 16);
	Eq_261 rLoc1_8 = (real64) (ss->*esp_3).w0002 / (real64) ds->w02D5;
	Eq_271 rLoc1_10 = cos(rLoc1_8);
	ds->w02DF = (int16) (sin(rLoc1_8) * (real64) ds->w02CD);
	ds->w02E3 = (int16) (rLoc1_10 * (real64) ds->w02CD);
	Eq_290 rLoc1_17 = (real64) (ss->*esp_3).w0004 / (real64) ds->w02D5;
	Eq_299 rLoc1_19 = cos(rLoc1_17);
	ds->w02E1 = (int16) (sin(rLoc1_17) * (real64) ds->w02E3);
	ds->w02E3 = (int16) (rLoc1_19 * (real64) ds->w02E3);
	fn0C00_019C(eax, ecx, ebx, ds);
	fn0C00_019C(eax, ecx, ebx, ds);
	fn0C00_019C(eax, ecx, ebx, ds);
	Eq_325 rLoc2_52 = (real64) ds->w02DF - (real64) ds->w02C1;
	Eq_333 rLoc3_55 = (real64) ds->w02E1 - (real64) ds->w02C3;
	Eq_341 rLoc4_58 = (real64) ds->w02E3 - (real64) ds->w02C5;
	ds->w02DD = (int16) ((real64) ds->w02C7 / ((rLoc2_52 * rLoc2_52 + (rLoc3_55 * rLoc3_55 + rLoc4_58 * rLoc4_58)) / (real64) ds->w02C9 + (real64) ds->w02CB));
	Eq_369 rLoc3_69 = (real64) ds->w02E3 / (real64) ds->w02D5;
	Eq_377 rLoc2_67 = (real64) ds->w02E1;
	Eq_381 rLoc1_74 = (real64) ds->w02DF / (rLoc2_67 / (rLoc3_69 + (rLoc3_69 + 1)));
	ds->w02E1 = (int16) -rLoc2_67;
	ds->w02DF = (int16) (rLoc1_74 * ds->t02D1);
	bcu8 Eq_50::*bx_86 = (word16) ((ds->w02E1 + 0x0062) *u 0x0140) + 0x00A0 + ds->w02DF;
	if (SLICE(ds->w02DD, byte, 8) != 0x00)
		;
	if (es->*bx_86 <=u 0xFA)
		es->*bx_86 = 0xFA;
	return;
}

