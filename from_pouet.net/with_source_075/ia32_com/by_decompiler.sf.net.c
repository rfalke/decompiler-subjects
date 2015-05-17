// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_075/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_20 bx, word16 di, byte ah)
{
	bios_video_set_mode(0x12);
	uint16 ax_27 = DPB(ax, 0x12, 0, 8);
	word16 bp_28 = 0x0000;
	word16 cx_10 = 0x01E0;
	do
	{
		word16 wLoc02_34 = cx_10;
		word16 cx_35 = 0x027F;
		bp_28 = bp_28 - 0x027F + 0x0001;
		do
		{
			word16 cx_113 = 0x0000;
			byte cl_112 = 0x00;
			word16 dx_108 = SLICE(bx *u ax_27, word16, 16);
			do
			{
				Eq_20 ax_71 = (word16) ((dx_108 + bx) *s (bx - dx_108)) + bp_28;
				bx = ax_71;
				if (ax_71 > 0x0000)
					break;
				cl_112 = ~cl_112;
				dx_108 = dx_108 + di;
				cx_113 = DPB(cx_113, cl_112, 0, 8);
			} while (dx_108 != 0x0000);
			__syscall(0x10);
			wLoc02_34 = wLoc02_114;
			bx.u0 = 0x0000;
			ax_27 = DPB(cx_113, 0x0C, 8, 8);
			bp_28 = bp_28 + 0x0000;
			cx_35 = cx_35 - 0x0001;
			word16 wLoc02_114 = wLoc02_34;
		} while (cx_35 != 0x0000);
		di = di + 0x0001;
		cx_10 = wLoc02_114 - 0x0001;
	} while (cx_10 != 0x0000);
	__syscall(0x16);
	return;
}

