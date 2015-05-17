// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_203/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_7 Eq_8::*bp, Eq_56 * ds)
{
	bios_video_set_mode(0x13);
	do
	{
		ds->w0100 = ds->w0100 + 0x0001;
		ds->t01DA = ds->t01DE + ds->t01DA;
		Eq_178 rLoc1_25 = ds->t01E6;
		Eq_181 rLoc2_26 = (real64) ds->w0100;
		Mem27[ss:bp + 0x0000:word16] = 0x0028;
		Mem33[ds:0x01E2:real32] = sin(rLoc2_26 / (real64) Mem27[ss:bp + 0x0000:word16]) * rLoc1_25;
		word16 dx_106 = 0x00C8;
		byte Eq_145::*di_102 = &Eq_145::b0000;
		do
		{
			word16 cx_103 = 0x0140;
			do
			{
				Mem53[ss:bp + 0x0000:word16] = 0x0064;
				Mem55[ss:bp + 0x0000:word16] = Mem53[ss:bp + 0x0000:word16] - dx_106;
				real64 rLoc1_56 = (real64) Mem55[ss:bp + 0x0000:int16];
				Mem57[ss:bp + 0x0000:word16] = 0x00A0;
				Mem59[ss:bp + 0x0000:word16] = Mem57[ss:bp + 0x0000:word16] - cx_103;
				Mem62[ss:bp + 0x0000:real32] = atan(rLoc1_56, (real64) Mem59[ss:bp + 0x0000:int16]);
				real64 rLoc1_63 = Mem62[ss:bp + 0x0000:real32];
				real64 rLoc2_68 = sin(Mem62[ss:bp + 0x0000:real32] * (real64) Mem62[ds:0x01D8:word16] + Mem62[ds:0x01DA:real32]) * Mem62[ds:0x01E2:real32];
				Mem69[ss:bp + 0x0000:word16] = 0x0001;
				Mem71[ds:0x0103:real32] = rLoc2_68 + (real64) Mem69[ss:bp + 0x0000:word16];
				Mem73[ss:bp + 0x0000:int16] = (int16) (rLoc1_63 * ds->t01EA);
				word16 bx_74 = Mem73[ss:bp + 0x0000:word16];
				Mem77[ss:bp + 0x0000:word16] = 0x00A0 - cx_103;
				real64 rLoc1_78 = (real64) Mem77[ss:bp + 0x0000:int16];
				Mem82[ss:bp + 0x0000:word16] = 0x0064 - dx_106;
				real64 rLoc2_83 = (real64) Mem82[ss:bp + 0x0000:int16];
				Eq_110 rLoc2_87 = sqrt(rLoc2_83 * rLoc2_83 + rLoc1_78 * rLoc1_78) * ds->t0103;
				Mem88[ss:bp + 0x0000:word16] = 0x0800;
				Mem91[ss:bp + 0x0000:int16] = (int16) ((real64) Mem88[ss:bp + 0x0000:int16] / rLoc2_87);
				Mem101[0xA000:di_102 + 0x0000:byte] = (byte) (Mem91[ss:bp + 0x0000:word16] + Mem91[ds:0x0100:word16] ^ bx_74 + Mem91[ds:0x0100:word16]) & 0x1F;
				di_102 = di_102 + 1;
				cx_103 = cx_103 - 0x0001;
			} while (cx_103 != 0x0000);
			dx_106 = dx_106 - 0x0001;
		} while (dx_106 != 0x0000);
	} while (__inb(0x60) != 0x01);
	return;
}

