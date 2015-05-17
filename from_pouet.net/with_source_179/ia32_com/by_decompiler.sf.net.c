// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_179/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(int16 dx, segptr32 Eq_13::*bx, byte ah, byte ch, Eq_13 * ds)
{
	bios_video_set_mode(0x13);
	byte al_104 = 0x13;
	word16 ax_103 = DPB(ax, 0x13, 0, 8);
	Eq_13 * es_9 = SLICE(ds->*bx, selector, 16);
	do
	{
		Eq_20 Eq_13::*di_35 = Eq_13::a0000;
		word16 cx_40 = DPB(cx, 0x03, 0, 8);
		do
		{
			(ds->*di_35).w0179 = (ds->*di_35).w0179 + 0x0001;
			Eq_29 rLoc1_47 = (real64) (ds->*di_35).w0179 / (real64) ds->w017F;
			Eq_38 rLoc1_49 = cos(rLoc1_47);
			(ds->*di_35).w0183 = (int16) (sin(rLoc1_47) * (real64) ds->w0181);
			(ds->*di_35).w018B = (int16) (rLoc1_49 * (real64) ds->w017F);
			(es_9->*di_35).w0000 = ax_103;
			di_35 = di_35 + 1;
			cx_40 = cx_40 - 0x0001;
		} while (cx_40 != 0x0000);
		byte Eq_13::*si_60 = Eq_13::a019A;
		byte Eq_13::*di_61 = Eq_13::a019A;
		word16 cx_63 = DPB(cx_40, 0xF6, 8, 8);
		while (cx_63 != 0x0000)
		{
			es_9->*di_61 = ds->*si_60;
			si_60 = si_60 + 1;
			di_61 = di_61 + 1;
			cx_63 = cx_63 - 0x0001;
		}
		cx = DPB(cx_63, 0xF7, 8, 8);
		byte Eq_13::*di_107 = Eq_13::a019A;
		do
		{
			ds->*di_107 = 0x00;
			di_107 = di_107 + 1;
			cx = cx - 0x0001;
		} while (cx != 0x0000);
		do
		{
			(ds->*(dx *s 0x0140 + bx)).bFFFFBC30 = al_104;
			ax_103 = __rol(ax_103 + di_107, 0x02);
			word16 di_106 = di_107 + ax_103;
			al_104 = (byte) ax_103;
			di_107 = di_106 & 0x0006;
			bx = bx + (Mem98[ds:(di_106 & 0x0006) + 0x0183:word16] - bx >> 0x0001);
			dx = dx + ((ds->*(di_106 & 0x0006)).w018B - dx >> 0x0001);
			cx = cx - 0x0001;
		} while (cx != 0x0000);
		byte al_123 = __inb(0x60);
		al_104 = al_123 - 0x01;
		ax_103 = DPB(ax_103, al_123 - 0x01, 0, 8);
	} while (al_123 != 0x01);
	return;
}

