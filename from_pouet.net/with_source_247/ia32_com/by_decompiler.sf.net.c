// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_247/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte ch, Eq_14 * ds)
{
	bios_video_set_mode(0x13);
	do
	{
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		ds->b0206 = ds->b0206 + 0x01;
		ds->b0206 = ds->b0206 & 0x0F;
		word16 bx_166 = 0x0206;
		if (ds->b0206 == 0x00)
		{
			Mem230[ds:0x01FC:word16] = Mem55[ds:0x01FC:word16] + 0x0001;
			if (ds->ptr01FC == &Eq_14::ptr01FC)
				ds->ptr01FC = ds->ptr01FC - 0x001C;
			Eq_55 Eq_83::*si_237 = ((word16) (ds->*ds->ptr01FC) << 0x0003) + 0xFA6E;
			Mem240[ss:fp - 0x0002:word16] = 0xF000;
			Eq_70 Eq_90::*di_233 = &Eq_90::t0140;
			ds = 0x5000;
			word16 dx_243 = 0x0008;
			do
			{
				cx = DPB(cx, 0x08, 0, 8);
				do
				{
					ax = DPB(ax, __bt((0xF000->*si_237).w0000, cx), 8, 8);
					(0x5000->*di_233).ptr0150 = ax;
					(0x5000->*di_233).ptr0000 = ax;
					di_233 = di_233 + 1;
					cx = cx - 0x0001;
				} while (cx != 0x0000);
				si_237 = si_237 + 1;
				di_233 = di_233 + 328;
				dx_243 = dx_243 - 0x0001;
			} while (dx_243 != 0x0000);
		}
		ds->dw0202 = ds->dw0202 - 0x00000001;
		byte Eq_90::*si_73 = Eq_90::a0000;
		byte Eq_90::*di_76 = Eq_90::aFFFFFFFF;
		word16 cx_77 = 0x1500;
		while (cx_77 != 0x0000)
		{
			0x5000->*di_76 = 0x5000->*si_73;
			si_73 = si_73 + 1;
			di_76 = di_76 + 1;
			cx_77 = cx_77 - 0x0001;
		}
		Mem93[ss:fp - 0x0002:word16] = 0x6000;
		byte Eq_142::*di_105 = Eq_142::a0000;
		word16 cx_102 = 0xFA00;
		while (cx_102 != 0x0000)
		{
			0x6000->*di_105 = 0x00;
			di_105 = di_105 + 1;
			cx_102 = cx_102 - 0x0001;
		}
		Eq_176 Eq_90::*si_114 = Eq_90::a0000;
		word16 di_117 = 0x7440;
		word16 dx_118 = 0x0010;
		do
		{
			word16 cx_129 = 0x0140;
			do
			{
				0x0C00->w0200 = (int16) (cos(rLoc2 / (real64) 0x0C00->w01FE) * (real64) 0x0C00->w01FE);
				int16 ax_143 = 0x0C00->w0200 *s 0x0140;
				Eq_176 Eq_142::*di_144 = di_117 + ax_143;
				Mem146[0x6000:di_144 + 0x0000:byte] = Mem142[0x5000:si_114 + 0x0000:byte];
				si_114 = PTRADD(si_114,1);
				rLoc2.u1 = 1;
				di_117 = di_144 + 0x0001 - ax_143;
				cx_129 = cx_129 - 0x0001;
			} while (cx_129 != 0x0000);
			si_114 = si_114 + 8;
			dx_118 = dx_118 - 0x0001;
		} while (dx_118 != 0x0000);
		word16 cx_164 = DPB(cx_129, 0xC8, 0, 8);
		do
		{
			word16 dx_169 = dx_118 & 0x0003;
			Mem173[0x5000:si_114 + 0x0000:word16] = Mem146[0x5000:si_114 + 0x0000:word16] + (dx_169 + 0x0001);
			ax = Mem173[0x5000:si_114 + 0x0000:word16] + bx_166;
			0x6000->*ax = ((byte) (dx_169 + 0x0001) + 0x0A) * 0x02;
			dx_118 = dx_169 + 0x0001;
			si_114 = si_114 + 1;
			bx_166 = __rol(bx_166 + 0x0001 + 0x0001, 0x02);
			cx_164 = cx_164 - 0x0001;
		} while (cx_164 != 0x0000);
		Mem193[ss:fp - 0x0002:word16] = 0x6000;
		Mem197[ss:fp - 0x0002:word16] = 0xA000;
		word16 Eq_142::*si_200 = Eq_142::a0000;
		word16 Eq_264::*di_201 = Eq_264::a0000;
		cx = 0x7D00;
		while (cx != 0x0000)
		{
			0xA000->*di_201 = 0x6000->*si_200;
			si_200 = si_200 + 1;
			di_201 = di_201 + 1;
			cx = cx - 0x0001;
		}
		Mem221[ss:fp - 0x0002:word16] = cs;
		ds = 0xA000;
	} while (__inb(0x60) != 0x01);
	return;
}

