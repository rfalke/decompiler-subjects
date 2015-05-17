// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_132/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, Eq_25 Eq_14::*bx, word16 bp, cups16 si, word16 di, byte dl, byte dh)
{
	bios_video_set_mode(0x13);
	word16 ax_16 = DPB(ax, 0x20, 8, 8);
	__outw(0x03D4, ax_16);
	Eq_14 * dx_6 = DPB(dx, dh + 0x13, 8, 8);
	do
	{
		word16 ax_56 = (word16) (int32) ax_16;
		cups16 si_57 = si - ax_56;
		Mem69[ss:fp - 0x0006:word16] = 0x03D4;
		word16 di_60 = di - 0x03D4 - (si_57 <u 0x0000);
		word16 cx_62 = cx - 0x0001;
		word16 ax_61 = ax_56 + di_60;
		byte ch_124 = SLICE(cx_62, byte, 8);
		word16 di_156 = __shld(di_60, si_57, 0x03);
		bp_176 = bp;
		bx_179 = bx;
		cx_174 = cx_62;
		do
		{
			word16 bp_176;
			Eq_25 Eq_14::*bx_179;
			word16 cx_174;
			Mem108[ss:fp - 0x0016:word16] = 0x03D4;
			bp_120 = bp_176;
			bx_121 = bx_179;
			cx_123 = cx_174;
			do
			{
				word16 bp_120;
				Eq_25 Eq_14::*bx_121;
				word16 cx_123;
				byte al_132 = ch_124 & SLICE(bp_120, byte, 8);
				byte Eq_14::*ax_129 = DPB(bp_120, ch_124, 0, 8);
				word16 ax_133 = DPB(bp_120, al_132, 0, 8);
				if ((al_132 & 0x40) == 0x00)
					ax_133 = DPB(bp_120, dx_6->*ax_129, 0, 8);
				uint8 al_143 = (byte) (ax_133 - 0x0001);
				(dx_6->*bx_121).b0000 = al_143;
				(0xA000->*bx_121).b0000 = (al_143 >>u 0x03) + 0x10;
				cx_123 = cx_123 + di_156;
				bl = bl + 0x01;
				ch_124 = SLICE(cx_123, byte, 8);
				bp_120 = bp_120 + 0x03D4;
				bx_121 = DPB(bx_121, bl, 0, 8);
			} while (bl != 0x00);
			cx_174 = cx_174 - 0x03D4;
			byte bh_166 = SLICE(bx_179, byte, 8);
			bl = (byte) bx_179;
			ch_124 = SLICE(cx_174, byte, 8);
			bp_176 = bp_176 + di_156;
			bx_179 = DPB(bx_179, bh_166 + 0x01, 8, 8);
		} while (bh_166 != 0x01);
		di = di_60;
		si = si_57;
		bl = (byte) bx;
		cx = cx_62;
		ax_16 = ax_61;
	} while (__inb(0x60) != 0x01);
	return;
}

