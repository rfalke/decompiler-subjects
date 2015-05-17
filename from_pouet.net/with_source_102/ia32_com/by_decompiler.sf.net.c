// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_102/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, int16 bp, int16 si, int16 di, byte dl, Eq_28 * ds)
{
	bios_video_set_mode(0x13);
	while (true)
	{
		cx = cx + 0x0001;
		bp = bp + 0x0001;
		byte ch_46 = SLICE(cx, byte, 8);
		do
		{
			SEQ(0xA000, di >> 0x0006)[(si >> 0x0006) * 0x0140] = ch_46;
			int16 bp_95 = bp >> 0x0002;
			byte dl_86 = (byte) dx;
			ch_46 = SLICE(cx, byte, 8);
			di = di + (int16) (ds->*(bp_95 & 0x000F)).b0137;
			si = si + (int16) (ds->*(bp_95 & 0x000F)).b013B;
			dx = DPB(dx, dl_86 - 0x01, 0, 8);
		} while (dl_86 != 0x01);
	}
}

