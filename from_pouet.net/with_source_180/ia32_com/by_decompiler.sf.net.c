// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_180/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_11 * dx, Eq_24 Eq_11::*bx, Eq_23 si, byte ah, Eq_18 * ds)
{
	bios_video_set_mode(0x13);
	word16 ax_4 = DPB(ax, 0x13, 0, 8);
	Eq_11 * dx_8 = DPB(dx, 0x80, 8, 8);
	do
	{
		rLoc2 = sin(rLoc2) * (real64) ds->w0146;
		(dx_8->*bx).t0000 = (int16) rLoc2;
		(dx->*bx).t0000 = si;
		word16 bx_29 = &bx->t0000;
		bx = bx_29 + 0x0001;
		int8 bl_31 = (byte) (bx_29 + 0x0001);
		int8 bh_32 = SLICE(bx_29 + 0x0001, byte, 8);
	} while (bx_29 != 0x0001);
	word16 cx_117 = ax_4;
	do
	{
		word16 ax_58 = Mem28[ds:si + 0x0000:word16];
		si = si + 0x0002;
		do
		{
			if (bh_32 *s bh_32 + bl_31 *s bl_31 <=u 0x0383)
				(dx->*bx).t0000 = dl;
			bx = bx + 1;
			bl_31 = (byte) bx;
			bh_32 = SLICE(bx, byte, 8);
		} while (bx != &Eq_11::t0000);
		cx_117 = cx_117 - 0x0001;
	} while (cx_117 != 0x0000);
	do
	{
		word16 bx_122 = 0x0100;
		word16 si_125 = dx_8->w0100;
		word16 bp_126 = dx_8->w2100;
		word16 dx_127 = 0x0000;
		byte Eq_96::*di_130 = &Eq_96::b0000;
		cx_117 = DPB(cx_117, 0xC8, 0, 8);
		do
		{
			word16 cx_176 = 0x0140;
			si_180 = si_125;
			bp_181 = bp_126;
			di_182 = di_130;
			bx_183 = bx_122;
			dx_184 = dx_127;
			do
			{
				word16 si_180;
				word16 bp_181;
				byte Eq_96::*di_182;
				word16 bx_183;
				word16 dx_184;
				word16 dx_191 = dx_184 + si_180;
				word16 bx_189 = bx_183 + bp_181;
				Eq_84 bx_211 = DPB(bx_189, SLICE(dx_191, byte, 8), 0, 8);
				bcu8 al_213 = 0x12;
				do
				{
					bx_211 = bx_211 * 0x0002;
					al_213 = al_213 - 0x03;
				} while (Mem28[dx:bx_211 + 0x0000:byte] <u al_213);
				0xA000->*di_182 = al_213 + 0x10;
				bx_183 = bx_189;
				dx_184 = dx_191;
				di_182 = di_182 + 1;
				cx_176 = cx_176 - 0x0001;
			} while (cx_176 != 0x0000);
			di_130 = di_130 + 0x0140;
			bx_122 = bx_122 - si_125;
			dx_127 = dx_127 + bp_126;
			cx_117 = cx_117 - 0x0001;
		} while (cx_117 != 0x0000);
		ds->b0147 = ds->b0147 + 0x01;
		byte v33_278 = ds->b0164 + 0x04;
		ds->b0164 = v33_278;
		byte al_282;
		bios_kbd_check_keystroke(out al_282);
	} while (v33_278 == 0x00);
	bios_video_set_mode(0x03);
	return;
}

