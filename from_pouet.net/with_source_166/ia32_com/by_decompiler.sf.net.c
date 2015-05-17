// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_166/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte ah, byte ch, Eq_12 * ds)
{
	bios_video_set_mode(0x13);
	word16 ax_23 = DPB(ax, 0x13, 0, 8);
	do
	{
		cx = DPB(cx, 0x46, 0, 8);
		do
		{
			Eq_11 Eq_12::*bx_34 = ds->w0182 *s 0x013F + ds->w0180;
			(ds->*bx_34).bFFFF8225 = (ds->*bx_34).bFFFF8225 + 0x18;
			(ds->*bx_34).bFFFF8225 = (ds->*bx_34).bFFFF8225 + 0x10;
			(ds->*bx_34).bFFFF8225 = (ds->*bx_34).bFFFF8225 + 0x10;
			ds->w0180 = (int16) (sin(ds->t0178) * (real64) ds->w015A);
			ds->w0182 = (int16) (cos(ds->t017C) * (real64) ds->w0176);
			ds->t0178.u1 = Mem48[ds:0x0178:word16].u1;
			ds->t017C.u1 = Mem50[ds:0x017C:word16].u1;
			cx = cx - 0x0001;
		} while (cx != 0x0000);
		ds->t0178 = ds->t0178 - 0x1ACD;
		ds->t017C = ds->t017C - 0x2B37;
		Eq_91 Eq_12::*bx_62 = &Eq_12::tFFFFFA00;
		do
		{
			byte al_67 = (ds->*bx_62).b0184;
			ax_23 = DPB(ax_23, al_67, 0, 8);
			if (al_67 != 0x10)
			{
				al_67 = (byte) (ax_23 - 0x0001);
				(ds->*bx_62).b0184 = al_67;
				ax_23 = ax_23 - 0x0001;
			}
			(0xA000->*bx_62).b0000 = al_67;
			bx_62 = bx_62 - 0x0001;
		} while (bx_62 != Eq_12::a0000);
		word16 ax_78 = __inw(0x60);
		ax_23 = ax_78 - 0x0001;
	} while (ax_78 != 0x0001);
	return;
}

