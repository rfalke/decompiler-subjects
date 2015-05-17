// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_171/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte cl, Eq_57 * es, Eq_84 * ds)
{
	bios_video_set_mode(0x13);
	while (true)
	{
		word16 cx_105 = DPB(cx, 0xFA, 8, 8);
		byte Eq_57::*di_42 = Eq_57::a0180;
		while (cx_105 != 0x0000)
		{
			es->*di_42 = 0x00;
			di_42 = di_42 + 1;
			cx_105 = cx_105 - 0x0001;
		}
		do
		{
			word32 dx_ax_62 = SEQ(0x0000, cx_105);
			uint32 dx_ax_65 = SEQ(dx_ax_62 % 0x0028, cx_105);
			word32 dx_ax_70 = SEQ(0x0000, dx_ax_65 /u 0x0028);
			uint32 dx_ax_72 = SEQ(dx_ax_70 % 0x0028, dx_ax_65 /u 0x0028);
			real64 rLoc2_81 = (real64) (dx_ax_62 % 0x0028);
			real64 rLoc3_82 = (real64) (dx_ax_72 /u 0x0028);
			Eq_32 Eq_57::*di_91 = ((int16) fn0C00_0165(fn0C00_0165((real64) (dx_ax_70 % 0x0028), rLoc3_82, rLoc2_81), rLoc3_82, rLoc2_81) + 0x0064) *s 0x0140 + (int16) rLoc3_82;
			bcu8 al_97 = (byte) (DPB(dx_ax_72 /u 0x0028, 0x80, 0, 8) + (int16) rLoc2_81);
			if (al_97 >u (es->*di_91).b0230)
				(es->*di_91).b0230 = al_97;
			cx_105 = cx_105 - 0x0001;
		} while (cx_105 != 0x0000);
		byte Eq_84::*si_110 = Eq_84::a0180;
		byte Eq_83::*di_111 = Eq_83::a0000;
		Eq_83 * es_115 = SLICE(ds->ptr0000, selector, 16);
		cx = cx_105 - 0x0001;
		while (cx != 0x0000)
		{
			es_115->*di_111 = ds->*si_110;
			si_110 = si_110 + 1;
			di_111 = di_111 + 1;
			cx = cx - 0x0001;
		}
	}
}

real64 fn0C00_0165(real64 rArg0, real64 rArg1, real64 rArg2)
{
	cos(rArg2);
	sin(rArg2);
	cos(rArg2);
	sin(rArg2);
	return rArg2;
}

