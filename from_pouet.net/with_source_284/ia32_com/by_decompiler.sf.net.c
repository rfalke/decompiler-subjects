// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_284/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

real64 fn0C00_0100(word16 bp, byte ch, Eq_15 * ds, ptr16 rLoc1Out)
{
	bios_video_set_mode(0x13);
	word16 cx_10 = DPB(cx, 0xC8, 0, 8);
	Eq_12 Eq_15::*di_11 = &Eq_15::t0000;
	real64 rLoc2_17 = (real64) ds->w01FE;
	do
	{
		real64 rLoc3_31 = (real64) ds->w01FC;
		word16 dx_32 = 0x0140;
		do
		{
			real64 rLoc4_38 = rLoc3_31 * rLoc3_31;
			Eq_22 rLoc4_44 = sqrt(rLoc4_38 + rLoc4_38 * rLoc4_38) / (real64) ds->w01FC + ds->t01F8;
			(0x7000->*di_11).w0000 = (int16) (rLoc4_44 / rLoc4_44 + rLoc3_31);
			(ds->*di_11).w01FE = (int16) (rLoc2_17 / rLoc4_44 + rLoc2_17);
			rLoc3_31 = rLoc3_31 + 1;
			di_11 = di_11 + 1;
			dx_32 = dx_32 - 0x0001;
		} while (dx_32 != 0x0000);
		real64 rLoc2_59 = rLoc2_17 + 1;
		rLoc2_17 = rLoc2_59 + 1;
		cx_10 = cx_10 - 0x0001;
	} while (cx_10 != 0x0000);
	Mem65[ss:fp - 0x0002:word16] = 0x8000;
	Mem70[ss:fp - 0x0002:word16] = 0xA000;
	do
	{
		__outb(0x03C8, 0x00);
		word16 ax_103 = 0x0000;
		byte al_104 = 0x00;
		do
		{
			cx_10 = DPB(cx_10, 0x03, 0, 8);
			do
			{
				Mem148[ss:fp - 0x0006:word16] = 0x03C9;
				Mem150[ss:fp - 0x0008:word16] = 0x01FE;
				int16 ax_161 = (int16) al_104;
				byte al_162 = (byte) ax_161;
				uint8 cl_160 = (byte) (cx_10 - 0x0001);
				byte ah_163 = SLICE(ax_161, byte, 8);
				byte al_164 = al_162 & 0x7F;
				if ((al_162 & 0x7F & 0x40) != 0x00)
				{
					al_164 = al_162 & 0x7F & 0x3F;
					cl_160 = cl_160 >>u 0x01 ^ 0x01;
				}
				Eq_79 al_175 = al_164 << cl_160;
				Eq_83 al_176 = al_175 >>u 0x01;
				if (al_175 >>u 0x01 >u 0x3F)
					al_176.u1 = 0x3F;
				if (!ah_163)
					al_176 = al_176 + 0xBF >>u 0x02;
				__outb(0x03C9, al_176);
				bp = bp_355;
				ax_103 = ax_356;
				al_104 = (byte) ax_356;
				cx_10 = cx_10 - 0x0001;
				word16 bp_355 = bp;
				word16 ax_356 = ax_103;
			} while (cx_10 != 0x0000);
			al_104 = al_104 + 0x01;
			ax_103 = DPB(ax_356, al_104 + 0x01, 0, 8);
		} while (al_104 != 0x01);
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		Eq_153 Eq_179::*di_216 = &Eq_179::t0000;
		Eq_155 Eq_15::*si_219 = &Eq_15::t0000;
		bcu8 cl_220 = 0xC8;
		cx_10 = DPB(cx_10, 0xC8, 0, 8);
		do
		{
			cups16 dx_234 = 0x0140;
			bcu8 dl_235 = 0x40;
			if ((cl_220 & 0x01) != 0x00)
			{
				si_219 = si_219 - 0x0140;
				goto l0C00_019C;
			}
l0C00_019C:
			do
			{
				word16 ax_256 = DPB(ax_103, (ds->*si_219).b01FE, 8, 8) + bp_355;
				uint8 al_259 = (byte) ax_256 | SLICE(ax_256, byte, 8);
				Eq_171 al_260 = al_259 >>u 0x01;
				ax_103 = DPB(ax_256, al_259 >>u 0x01, 0, 8);
				(0x8000->*di_216).t0000 = al_259 >>u 0x01;
				if (dx_234 <u 0x0047 && dl_235 >u 0x08)
				{
					if ((((byte) (cx_10 + bp_355) ^ dl_235) & 0x10) != 0x00)
					{
						al_260 = al_259 >>u 0x01 | 0x80;
						ax_103 = DPB(ax_256, al_260, 0, 8);
					}
					cl_220 = (byte) cx_10;
				}
				if ((cl_220 >=u 0xC6 || cl_220 <=u 0x03) && (dl_235 & 0x04) == 0x00)
				{
					ax_103 = 0x0000;
					al_260.u1 = 0x00;
				}
				(0xA000->*di_216).t0000 = al_260;
				dx_234 = dx_234 - 0x0001;
				di_216 = di_216 + 1;
				si_219 = PTRADD(si_219,1);
				dl_235 = (byte) dx_234;
			} while (dx_234 != 0x0000);
			ds->b01A1 = ds->b01A1 ^ 0x28;
			cx_10 = cx_10 - 0x0001;
			cl_220 = (byte) cx_10;
		} while (cx_10 != 0x0000);
		ds->b01A8 = dl_235;
		bp = bp_355 + 0x0101;
	} while (DPB(ax_103, __inb(0x60), 0, 8) != 0x0001);
	return rLoc2_59 + 1;
}

