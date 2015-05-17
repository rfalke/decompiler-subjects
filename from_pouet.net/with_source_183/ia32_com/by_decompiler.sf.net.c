// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_183/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 bx, word16 si, byte dl, selector ds)
{
	bios_video_set_mode(0x13);
	word16 bx_7 = DPB(bx, 0x80, 8, 8);
	bx_17 = bx_7;
	do
	{
		word16 bx_17;
		rLoc2 = sin(rLoc2) * (real64) Mem0[ds:0x014B:word16];
		Mem23[bx_7:bx_17 + 0x0000:int16] = (int16) rLoc2;
		Mem26[bx:bx_17 + 0x0000:word16] = si;
		word16 bx_27 = bx_17 + 0x0001;
		bx_17 = bx_27 + 0x0001;
		byte bh_29 = SLICE(bx_27 + 0x0001, byte, 8);
		byte bl_30 = (byte) (bx_27 + 0x0001);
	} while (!OVERFLOW(bx_27 + 0x0001));
	word16 di_34 = 0x000A;
	do
	{
		word16 si_51 = Mem26[ds:di_34 + 0x0000:word16];
		do
		{
			if (bh_29 *s bh_29 + bl_30 *s bl_30 <=u 0x09C3)
				Mem236[bx:bx_17 + si_51:byte] = dl;
			bx_17 = bx_17 + 0x0001;
			bh_29 = SLICE(bx_17, byte, 8);
			bl_30 = (byte) bx_17;
		} while (!OVERFLOW(bx_17));
		word16 di_71 = di_34 - 0x0001;
		di_34 = di_71 - 0x0001;
	} while (di_71 != 0x0001);
	do
	{
		word16 bx_102 = 0x0100;
		word16 si_105 = Mem26[bx_7:0x0100:word16];
		word16 bp_106 = Mem26[bx_7:0x2100:word16];
		word16 dx_107 = 0x0000;
		word16 di_110 = 0x0000;
		word16 cx_113 = 0x00C8;
		do
		{
			word16 cx_149 = 0x0140;
			di_152 = di_110;
			bx_153 = bx_102;
			dx_154 = dx_107;
			do
			{
				word16 di_152;
				word16 bx_153;
				word16 dx_154;
				dx_154 = dx_154 + si_105;
				word16 bx_158 = bx_153 + bp_106;
				word16 bx_167 = DPB(bx_158, SLICE(dx_154, byte, 8), 0, 8);
				byte al_168 = 0x0F;
				do
				{
					if (Mem26[bx:bx_167 + 0x0000:byte] >u al_168)
						break;
					bx_167 = bx_167 * 0x0002;
					al_168 = al_168 - 0x03;
				} while (al_168 != 0x00);
				Mem188[0xA000:di_152 + 0x0000:byte] = al_168 + 0x10;
				di_152 = di_152 + 0x0001;
				bx_153 = bx_158;
				cx_149 = cx_149 - 0x0001;
			} while (cx_149 != 0x0000);
			di_110 = di_110 + 0x0140;
			bx_102 = bx_102 - si_105;
			dx_107 = dx_107 + bp_106;
			cx_113 = cx_113 - 0x0001;
		} while (cx_113 != 0x0000);
		Mem220[ds:0x014C:byte] = Mem188[ds:0x014C:byte] + 0x01;
		byte v31_221 = Mem220[ds:0x016D:byte] + 0x04;
		Mem222[ds:0x016D:byte] = v31_221;
		byte al_225;
		bios_kbd_check_keystroke(out al_225);
	} while (v31_221 == 0x00);
	bios_video_set_mode(0x03);
	return;
}

