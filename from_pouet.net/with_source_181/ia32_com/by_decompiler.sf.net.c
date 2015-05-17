// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_181/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 di, Eq_27 * ds)
{
	bios_video_set_mode(0x13);
	int16 Eq_14::*esp_48 = DPB(esp, fp - 0x0006, 0, 16);
	real64 rLoc1_27 = (real64) Mem0[ss:DPB(esp, fp - 0x0002, 0, 16):int16];
	real64 rLoc3_34 = (real64) Mem0[ss:DPB(esp, fp - 0x0004, 0, 16):int16];
	Eq_26 rLoc3_52 = ((real64) ds->t0197 / (rLoc4 * rLoc4 + rLoc2 * rLoc2) + (real64) (ss->*esp_48)) / (real64) ds->t0197;
	Eq_46 rLoc3_54 = cos(rLoc3_52);
	sin(rLoc3_52);
	sin(atan(rLoc1_27, rLoc3_34) * (real64) ds->w0195 + ((real64) (ss->*esp_48) / (real64) ds->w011D + sin(rLoc3_54 * (real64) ds->w0195)));
}

