// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_255/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word32 ecx, word16 si, byte bl, byte bh)
{
	bios_video_set_mode(0x13);
	__outw(0x03D4, DPB(ax, 0x20, 8, 8));
	word16 dx_27 = 0x03D4;
	do
	{
		cx = DPB(cx, 0x02, 0, 8);
		ecx = DPB(ecx, 0x02, 0, 8);
		do
		{
			byte al_52 = bl & 0x3F;
			word16 ax_54 = (al_52 - 0x20) *s (al_52 - 0x20);
			cx = cx - 0x0001;
			dx_27 = ax_54;
			bl = bh;
			bh = bl;
			bx = DPB(bx, bl, 8, 8);
			ecx = DPB(ecx, cx, 0, 16);
			word16 dx_395 = dx_27;
		} while (cx != 0x0000);
		Mem72[0x6000:bx + 0x0000:byte] = (byte) (dx_395 + ax_54 >>u 0x0003);
		int32 dx_ax_78 = (int32) (int16) (byte) (bx + 0x0040);
		byte al_79 = (byte) dx_ax_78;
		word16 ax_83 = al_79 *s al_79;
		dx_27 = SLICE(dx_ax_78, word16, 16);
		word16 ax_87 = DPB(ax_83, SLICE(ax_83, byte, 8) - 0x40, 8, 8) ^ dx_27;
		SEQ(0x7000, 
// Exception Object reference not set to an instance of an object. when writing procedure.
