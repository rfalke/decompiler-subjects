// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_205/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100()
{
	bios_video_set_mode(0x13);
	while (true)
	{
		int16 di_226 = 0x00C7;
		while (di_226 > 0x0000)
		{
			Eq_13 ax_88 = SEQ(10000 % di_226, 0x2710) / di_226;
			uint16 ax_92 = (ax_88 + wLoc14 & 0x001F) + 0xFFF0;
			int16 si_113 = 0xFF60;
			while (si_113 < 0x01E0)
			{
				if (di_226 == 0x00C7)
					(fp - 0x0154)[si_113] = 0xC7;
				word16 ax_124 = (word16) (ax_88 *u (si_113 + 0x0000)) >> 0x0008 & 0x001F;
				int16 dx_137 = (word16) (ax_92 *u ax_92) + (word16) ((ax_124 + 0xFFF0) *u (ax_124 + 0xFFF0));
				ui16 ax_141 = dx_137 >> 0x0001 << 0x0004;
				int16 ax_146 = SEQ((int32) ax_141 % ax_88, ax_141) / ax_88 + di_226;
				if (DPB(ax_146, 0x00, 8, 8) > ax_146)
				{
					if ((dx_137 >> 0x0001) - (ax_88 >> 0x0002) < 0x0000)
						;
					int16 ax_186 = ax_146;
					int16 wLoc08_187 = ax_146;
					int16 ax_197 = DPB(ax_186, 0x00, 8, 8);
					while (ax_197 > wLoc08_187)
					{
						int16 ax_205 = DPB(ax_197, bLoc0C, 0, 8);
						SEQ(SLICE(ptrLoc06, selector, 16), (word16) ptrLoc06 + si_113)[wLoc08_187 * 0x0140] = (byte) ax_205;
						ax_186 = ax_205;
						wLoc08_187 = wLoc08_187 + 0x0001;
						ax_197 = DPB(ax_186, 0x00, 8, 8);
					}
					(fp - 0x0154)[si_113] = bLoc0A;
				}
				si_113 = si_113 + 0x0001;
			}
			di_226 = di_226 - 0x0001;
		}
		wLoc14 = wLoc14 + 0x0001;
	}
}

