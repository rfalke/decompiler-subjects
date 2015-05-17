// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_081/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(int16 cx, byte bh)
{
	bios_video_set_mode(0x13);
	byte Eq_12::*di_13 = Eq_12::a0000;
	word16 si_10 = 0x018B;
	do
	{
		0x9000->*di_13 = ch;
		cx = cx + si_10;
		ch = SLICE(cx, byte, 8);
		si_10 = si_10 - SLICE(cx *s 0x0028, word16, 16);
		di_13 = di_13 + 1;
	} while (di_13 != Eq_12::a0000);
	Mem29[ss:fp - 0x0002:word16] = 0xA000;
	word16 dx_35 = 0x0028;
	byte dh_37 = 0x00;
	while (true)
	{
		byte Eq_50::*si_48 = &Eq_50::b0000;
		byte bl_51 = 0xC8;
		bx = DPB(bx, 0xC8, 0, 8);
		do
		{
			byte Eq_12::*cx_62 = &Eq_12::b0140;
			do
			{
				0xA000->*si_48 = 0x9000->*bx + 0x9000->*cx_62 + cx_62[dx_35] & dh_37;
				si_48 = si_48 + 1;
				cx_62 = cx_62 - 0x0001;
			} while (cx_62 != Eq_12::a0000);
			bl_51 = bl_51 - 0x01;
			bx = DPB(bx, bl_51, 0, 8);
		} while (bl_51 != 0x00);
		dx_35 = dx_35 + 0x0001;
		dh_37 = SLICE(dx_35, byte, 8);
	}
}

