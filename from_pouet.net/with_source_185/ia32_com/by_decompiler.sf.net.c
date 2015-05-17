// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_185/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_23 * bx, Eq_32 * ds)
{
	bios_video_set_mode(0x13);
	__outb(0x03C8, 0x00);
	Eq_11 ax_13 = 0x0000;
	byte al_12 = 0x00;
	do
	{
		__outb(0x03C9, al_12);
		al_12 = al_12 + 0x01;
		ax_13 = DPB(ax_13, al_12, 0, 8);
	} while (al_12 != 0x00);
	Eq_23 * bx_21 = DPB(bx, 0x70, 8, 8);
	Eq_27 Eq_23::*bx_27 = &Eq_23::w0000;
	do
	{
		rLoc2 = sin(rLoc2) * (real64) ds->w01AA;
		(bx_21->*bx_27).t0000 = (int16) rLoc2;
		(bx->*bx_27).t0000 = ax_13;
		word16 bx_45 = &bx_27->t0000;
		bx_27 = bx_45 + 0x0001;
		int8 bh_47 = SLICE(bx_45 + 0x0001, byte, 8);
		int8 bl_48 = (byte) (bx_45 + 0x0001);
	} while (bx_45 != 0x0001);
	Eq_57 Eq_32::*di_52 = &Eq_32::t000A;
	do
	{
		word16 si_67 = (ds->*di_52).w0000;
		do
		{
			if (bh_47 *s bh_47 + bl_48 *s bl_48 <=u 0x09C3)
				(bx->*bx_27).t0000.u1 = 0xC9;
			bx_27 = bx_27 + 1;
			bh_47 = SLICE(bx_27, byte, 8);
			bl_48 = (byte) bx_27;
		} while (bx_27 != &Eq_23::w0000);
		word16 di_87 = di_52 - 0x0001;
		di_52 = di_87 - 0x0001;
	} while (di_87 != 0x0001);
	do
	{
		word16 bx_117 = 0x0000;
		word16 si_120 = bx_21->w0000;
		word16 bp_121 = bx_21->w4000;
		word16 dx_122 = 0x0000;
		bcu8 Eq_99::*di_125 = &Eq_99::b0000;
		word16 cx_128 = 0x00C8;
		do
		{
			word16 cx_164 = 0x0140;
			di_167 = di_125;
			bx_168 = bx_117;
			dx_169 = dx_122;
			do
			{
				bcu8 Eq_99::*di_167;
				word16 bx_168;
				word16 dx_169;
				dx_169 = dx_169 + si_120;
				word16 bx_173 = bx_168 + bp_121;
				Eq_113 bx_182 = DPB(bx_173, SLICE(dx_169, byte, 8), 0, 8);
				bcu8 al_183 = 0x14;
				do
				{
					if (Mem44[bx:bx_182 + 0x0000:byte] >u al_183)
						break;
					bx_182 = bx_182 * 0x0002;
					al_183 = al_183 - 0x04;
				} while (al_183 != 0x00);
				0xA000->*di_167 = al_183;
				di_167 = di_167 + 1;
				bx_168 = bx_173;
				cx_164 = cx_164 - 0x0001;
			} while (cx_164 != 0x0000);
			di_125 = di_125 + 0x0140;
			bx_117 = bx_117 - si_120;
			dx_122 = dx_122 + bp_121;
			cx_128 = cx_128 - 0x0001;
		} while (cx_128 != 0x0000);
		ds->b015A = ds->b015A + 0x01;
		byte v30_235 = ds->b017B + 0x04;
		ds->b017B = v30_235;
		byte al_239;
		bios_kbd_check_keystroke(out al_239);
	} while (v30_235 == 0x00);
	bios_video_set_mode(0x03);
	return;
}

