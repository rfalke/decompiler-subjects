// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_074/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_20 bx, word16 di, byte ah)
{
	bios_video_set_mode(0x12);
	uint16 ax_27 = DPB(ax, 0x12, 0, 8);
	word16 bp_100 = 0x0000;
	word16 cx_10 = 0x01E0;
	do
	{
		word16 wLoc02_34 = cx_10;
		word16 cx_102 = 0x027F;
		bp_100 = bp_100 - 0x027F + 0x0001;
		do
		{
			word16 cx_114 = 0x0000;
			byte cl_113 = 0x00;
			word16 dx_110 = SLICE(bx *u ax_27, word16, 16);
			do
			{
				int32 dx_ax_67 = (dx_110 + bx) *s (bx - dx_110);
				Eq_20 ax_75 = __rcr((word16) dx_ax_67, 0x08, cond(dx_ax_67)) + bp_100;
				bx = ax_75;
				if (ax_75 > 0x0000)
					break;
				cl_113 = cl_113 + 0x01;
				dx_110 = dx_110 + di;
				cx_114 = DPB(cx_114, cl_113, 0, 8);
			} while (cl_113 != 0x00);
			__syscall(0x10);
			wLoc02_34 = wLoc02_117;
			bx.u0 = 0x0000;
			ax_27 = DPB(cx_114, 0x0C, 8, 8);
			bp_100 = bp_100 + 0x0000;
			cx_102 = cx_102 - 0x0001;
			word16 wLoc02_117 = wLoc02_34;
		} while (cx_102 != 0x0000);
		di = di + 0x0001;
		cx_10 = wLoc02_117 - 0x0001;
	} while (cx_10 != 0x0000);
	while (true)
		;
}

