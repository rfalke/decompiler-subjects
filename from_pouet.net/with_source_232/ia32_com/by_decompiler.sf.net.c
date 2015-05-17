// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_232/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte ch, Eq_9 * ds)
{
	bios_video_set_mode(0x13);
	msdos_display_string(ds, 0x01F1);
	word16 ax_148 = DPB(ax, 0x09, 8, 8);
	int16 dx_105 = 0x01F1;
	byte Eq_9::*bx_14 = &Eq_9::bFFFFFC09;
	do
	{
		byte al_19 = 0xA000->*bx_14;
		ds->*bx_14 = al_19;
		ax_148 = DPB(ax_148, al_19, 0, 8);
		bx_14 = bx_14 - 0x0001;
	} while (bx_14 != &Eq_9::b0DF7);
	do
	{
		word16 cx_49 = DPB(cx, 0x46, 0, 8);
		do
		{
			Eq_39 Eq_9::*bx_53 = ds->w0201 *s 0x013F + ds->w01FF;
			(ds->*bx_53).b7C69 = (ds->*bx_53).b7C69 + 0x18;
			(ds->*bx_53).b7C6A = (ds->*bx_53).b7C6A + 0x10;
			(ds->*bx_53).b7B29 = (ds->*bx_53).b7B29 + 0x10;
			ds->w01FF = (int16) (sin(ds->t01E3) * (real64) ds->w01DF);
			ds->w0201 = (int16) (cos(ds->t01E7) * (real64) ds->w01E1);
			ds->t01E3.u1 = Mem67[ds:0x01E3:word16].u1;
			ds->t01E7.u1 = Mem69[ds:0x01E7:word16].u1;
			cx_49 = cx_49 - 0x0001;
		} while (cx_49 != 0x0000);
		ds->t01E3 = ds->t01E3 - 0x18E3;
		ds->t01E7 = ds->t01E7 - 0x2B37;
		Eq_117 Eq_9::*bx_81 = &Eq_9::tFFFFC800;
		do
		{
			byte al_157 = (ds->*bx_81).b0209;
			ax_148 = DPB(ax_148, al_157, 0, 8);
			if (al_157 != 0x10)
			{
				al_157 = (byte) (ax_148 - 0x0001);
				(ds->*bx_81).b0209 = al_157;
				ax_148 = ax_148 - 0x0001;
			}
			bx_81 = bx_81 - 0x0001;
			(0xA000->*bx_81).b0000 = al_157;
		} while (bx_81 != Eq_9::a0000);
		ds->t0205 = ds->t01ED;
		cx = DPB(cx_49, 0xFF, 0, 8);
		do
		{
			ds->w0203 = (int16) (sin(ds->t0205) * (real64) ds->w01EB);
			int16 di_116 = ds->w0203;
			dx_105 = DPB(dx_105, 0x0B, 0, 8);
			do
			{
				Eq_146 Eq_9::*bx_124 = dx_105 *s 0x0141 + cx;
				(&bx_124->bFFFFEF81 + di_116 *s 0x0142)[ds->w010F] = (ds->*bx_124).bFFFFEF81;
				ds->t0205.u2 = Mem130[ds:0x0205:word16].u2;
				dx_105 = dx_105 - 0x0001;
			} while (dx_105 != 0x0000);
			cx = cx - 0x0001;
		} while (cx != 0x0000);
		ds->t01ED.u2 = Mem132[ds:0x01ED:word16].u2;
		if ((ds->t01ED & 0x07) == 0x00)
			ds->w010F = ds->w010F - 0x0001;
		word16 ax_147 = __inw(0x60);
		ax_148 = ax_147 - 0x0001;
	} while (ax_147 != 0x0001);
	return;
}

