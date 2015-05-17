// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_264/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

real64 fn0C00_0100(Eq_40 * es, Eq_40 * ds)
{
	bios_video_set_mode(0x13);
	int16 cx_14 = 0x0100;
	do
	{
		uint8 al_9 = (byte) -cx_14;
		__outb(0x03C9, al_9 >>u 0x03);
		__outb(0x03C9, al_9 >>u 0x04);
		__outb(0x03C9, al_9 >>u 0x04 << 0x02);
		cx_14 = cx_14 - 0x0001;
	} while (cx_14 != 0x0000);
	Eq_33 rLoc1_16 = 0;
	do
	{
		word16 cx_139 = DPB(cx_14, 0xFA, 8, 8);
		bcu8 Eq_40::*di_58 = Eq_40::a0200;
		do
		{
			bcu8 al_224;
			bcu8 al_68 = ds->*di_58;
			if (al_68 >u 0x08)
				al_224 = al_68 - 0x08;
			else
				al_224 = 0x00;
			es->*di_58 = al_224;
			di_58 = di_58 + 1;
			cx_139 = cx_139 - 0x0001;
		} while (cx_139 != 0x0000);
		do
		{
			word32 dx_ax_95 = SEQ(0x0000, cx_139);
			uint32 dx_ax_98 = SEQ(dx_ax_95 % 0x0028, cx_139);
			word32 dx_ax_104 = SEQ(0x0000, dx_ax_98 /u 0x0028);
			int16 dx_109 = dx_ax_104 % 0x0028 - 0x0014;
			int16 ax_108 = SEQ(dx_ax_104 % 0x0028, dx_ax_98 /u 0x0028) /u 0x0028 - 0x0014;
			int16 dx_100 = dx_ax_95 % 0x0028 - 0x0014;
			uint16 ax_120 = dx_100 *s dx_100 + (dx_109 *s dx_109 + ax_108 *s ax_108);
			if (ax_120 <u 0x0085 || ax_120 >=u 0x0280)
			{
				real64 rLoc2_199 = (real64) dx_100;
				real64 rLoc3_200 = (real64) ax_108;
				ax_120 = DPB(ax_120, 0x80, 0, 8) + (int16) rLoc2_199;
				Eq_103 Eq_40::*di_209 = ((int16) fn0C00_01D5(fn0C00_01D5((real64) dx_109, rLoc3_200, rLoc2_199), rLoc3_200, rLoc2_199) + 0x0064) *s 0x0140 + (int16) rLoc3_200;
				bcu8 al_216 = (byte) ax_120;
				if (al_216 >u (ds->*di_209).b02B0)
					(es->*di_209).b02B0 = al_216;
			}
			cx_139 = cx_139 - 0x0001;
		} while (cx_139 != 0x0000);
		Eq_134 Eq_40::*di_141 = Eq_40::a0340;
		word16 cx_142 = 0xF8C0;
		do
		{
			bcu8 al_149 = (ds->*di_141).b0140 + (ds->*di_141).b0001;
			bcu8 al_153 = al_149 + (ds->*di_141).b0001;
			uint16 ax_161 = DPB(ax_120, (al_149 <u 0x00) + (al_153 <u 0x00) + (al_153 + (ds->*di_141).b0140 <u 0x00), 8, 8);
			(es->*di_141).b0000 = (byte) (ax_161 >>u 0x0002);
			ax_120 = ax_161 >>u 0x0002;
			di_141 = di_141 + 1;
			cx_142 = cx_142 - 0x0001;
		} while (cx_142 != 0x0000);
		bcu8 Eq_40::*si_171 = Eq_40::a0200;
		bcu8 Eq_196::*di_172 = Eq_196::a0000;
		cx_14 = cx_142 - 0x0001;
		while (cx_14 != 0x0000)
		{
			0xA000->*di_172 = ds->*si_171;
			si_171 = si_171 + 1;
			di_172 = di_172 + 1;
			cx_14 = cx_14 - 0x0001;
		}
		rLoc1_16 = rLoc1_16 + (real64) ds->w01D3;
	} while (__inw(0x60) != 0x0001);
	return rLoc1_16;
}

real64 fn0C00_01D5(real64 rArg0, real64 rArg1, real64 rArg2)
{
	real64 rLoc1_14 = sin(rArg2) * rArg0 + cos(rArg2) * rArg1;
	real64 rArg1_24 = rArg1 * sin(rArg2) - rArg0 * cos(rArg2);
	real64 rLoc1_30 = cos(sin(rLoc1_14));
	return rArg2 * (((rLoc1_30 + rLoc1_30) * rLoc1_14) * rArg1_24);
}

