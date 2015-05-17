// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_154/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(int16 dx, segptr32 Eq_13::*bx, byte ah, Eq_13 * ds)
{
	bios_video_set_mode(0x13);
	Eq_7 al_2 = 0x13;
	Eq_7 ax_31 = DPB(ax, 0x13, 0, 8);
	Eq_13 * es_9 = SLICE(ds->*bx, selector, 16);
	do
	{
		Eq_20 Eq_13::*di_33 = &Eq_13::t0000;
		word16 cx_36 = 0x0003;
		do
		{
			(ds->*di_33).w0165 = (ds->*di_33).w0165 + 0x0001;
			Eq_29 rLoc1_43 = (real64) (ds->*di_33).w0165 / (real64) ds->w016B;
			Eq_38 rLoc1_45 = cos(rLoc1_43);
			(ds->*di_33).w016F = (int16) (sin(rLoc1_43) * (real64) ds->w016D);
			(ds->*di_33).w0177 = (int16) (rLoc1_45 * (real64) ds->w016B);
			(es_9->*di_33).t0000 = ax_31;
			di_33 = di_33 + 2;
			cx_36 = cx_36 - 0x0001;
		} while (cx_36 != 0x0000);
		word16 cx_54 = cx_36 - 0x0001;
		while (cx_54 != 0x0000)
		{
			(es_9->*di_33).t0000 = al_2;
			di_33 = di_33 + 1;
			cx_54 = cx_54 - 0x0001;
		}
		do
		{
			(es_9->*(dx *s 0x0140 + bx)).tFFFFBC30 = al_2;
			ax_31 = __rol(ax_31 + di_33, 0x02);
			word16 di_80 = di_33 + ax_31;
			al_2 = (byte) ax_31;
			di_33 = di_80 & 0x0006;
			bx = bx + (Mem72[ds:(di_80 & 0x0006) + 0x016F:word16] - bx >> 0x0001);
			dx = dx + ((ds->*(di_80 & 0x0006)).w0177 - dx >> 0x0001);
			cx_54 = cx_54 - 0x0001;
		} while (cx_54 != 0x0000);
		byte al_95 = __inb(0x60);
		al_2 = al_95 - 0x01;
		ax_31 = DPB(ax_31, al_95 - 0x01, 0, 8);
	} while (al_95 != 0x01);
	return;
}

