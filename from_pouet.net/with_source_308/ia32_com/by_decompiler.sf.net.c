// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_308/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 ax, word16 cx, segptr32 Eq_15::*bx, byte dl, byte dh, Eq_15 * ds, selector psegArg00, selector psegArg02, Eq_101 rArg0)
{
	do
	{
		dh = dh + 0x10;
		dx = DPB(dx, dh, 8, 8);
	} while (P);
	bios_video_set_mode(0x13);
	msdos_display_string(ds, 0x023A);
	Eq_20 * es_25 = psegArg02;
	do
	{
		__outb(0x03C8, cl);
		int16 ax_38 = (int16) cl;
		uint8 al_39 = (byte) ax_38;
		__outb(0x03C9, al_39 >>u 0x01);
		__outb(0x03C9, al_39 >>u 0x01);
		__outb(0x03C9, al_39 >>u 0x01 & SLICE(ax_38, byte, 8));
		cx = cx - 0x0001;
		cl = (byte) cx;
		byte ch_47 = SLICE(cx, byte, 8);
	} while (cx != 0x0000);
	Eq_53 * ds_53 = SLICE(ds->*bx, selector, 16);
	byte Eq_20::*di_54 = Eq_20::a088E;
	do
	{
		Mem63[psegArg02:di_54 + 0x0000:byte] = SEQ(ds_53, cx)[(word16) ch_47 * 0x0040];
		cx = cx - 0x0001;
		di_54 = di_54 + 1;
		ch_47 = SLICE(cx, byte, 8);
	} while (cx != 0x0000);
	do
	{
		ds->w0238 = ds->w0238 - 0x0001;
		Eq_157 Eq_5::*bx_105 = Eq_5::a0000;
		byte bl_106 = 0x00;
		byte bh_107 = 0x00;
		do
		{
			Eq_81 Eq_15::*di_125 = Eq_15::a0402;
			byte al_126 = bl_106;
			int16 dx_128 = 0xF200;
			do
			{
				int16 ax_137 = (int16) (al_126 - 0x80);
				(ds->*di_125).w0000 = ax_137;
				int8 al_138 = (byte) ax_137;
				dx_128 = dx_128 - al_138 *s al_138;
				bcu8 dh_142 = SLICE(dx_128, byte, 8);
				real64 rLoc1_145 = (real64) (ds->*di_125).w0000;
				al_126 = bh_107;
				di_125 = di_125 + 1;
			} while (P);
			rArg0 = atan(rArg0, rLoc1_145) * (real64) ds->w0236;
			(ds->*di_125).w0000 = (int16) rArg0;
			int16 ax_154 = (ds->*di_125).w0000;
			(ds->*di_125).w0000 = dx_128;
			word16 ax_156 = ax_154 + ds->w0237;
			word16 ax_162 = DPB(ax_156, dh_142, 0, 8);
			uint8 ah_157 = SLICE(ax_156, byte, 8);
			Eq_126 cl_159 = 0x00;
			cx = DPB(cx, 0x00, 0, 8);
			byte dh_171 = (byte) (ax_162 & 0x0707) + SLICE(ax_162 & 0x0707, byte, 8) + dh_142;
			if (dh_142 <=u 0xEC && dh_142 >=u 0xEB)
			{
				cl_159 = ah_157 >>u 0x01;
				cx = DPB(cx, ah_157 >>u 0x01, 0, 8);
				dh_171 = SLICE((ds->*di_125).w0000 << 0x0005, byte, 8) + 0x60;
			}
			if (dh_142 <=u 0xE6)
			{
				cx = DPB(cx, ah_157 & 0x1F, 8, 8);
				if ((ah_157 & 0x1F) <=u 0x03)
				{
					if (dh_142 >=u 0xE5)
					{
						dh_171 = __ror(dh_142, 0x03) + 0x1E;
						cx = cx - 0x0001;
						cl_159 = (byte) (cx - 0x0001);
					}
					dh_171 = dh_171 - 0x14;
				}
				if (dh_142 <=u 0xB2)
				{
					cx = cx - 0x0001;
					cl_159 = (byte) cx;
				}
			}
			(psegArg00->*bx_105).t0000 = cl_159;
			(dx->*bx_105).t0000 = dh_171 + 0x80;
			bx_105 = bx_105 + 1;
			bl_106 = (byte) bx_105;
			bh_107 = SLICE(bx_105, byte, 8);
		} while (bx_105 != Eq_5::a0000);
		int8 Eq_15::*di_201 = Eq_15::a0384;
		word16 si_202 = 0x0064;
		do
		{
			word16 bp_228 = 0xFF60;
			do
			{
				int32 dx_ax_248 = (int32) (int16) (byte) (ds->w0238 << 0x0001);
				int8 al_252 = ((byte) dx_ax_248 & 0x7F) - 0x40;
				int16 ax_253 = al_252 *s al_252;
				ui16 ax_256 = DPB(ax_253, SLICE(ax_253, byte, 8) - 0x10, 8, 8);
				word16 dx_257 = SLICE(dx_ax_248, word16, 16) ^ ax_256;
				word16 ax_263 = DPB(ax_256 * 0x0002, SLICE(ax_256 * 0x0002, byte, 8) - 0x01, 8, 8);
				word16 cx_241 = 0x7F40;
				word16 dx_265 = DPB(dx_257, SLICE(dx_257, byte, 8) + 0x20, 8, 8);
				word16 di_268 = ax_263;
				do
				{
					cx_241 = cx_241 + bp_228;
					di_268 = di_268 - 0x0096;
					int8 Eq_5::*bx_284 = DPB(di_268, SLICE(cx_241, byte, 8), 0, 8);
					dx_265 = dx_265 + si_202;
					int8 al_286 = dx->*bx_284;
					uint8 dh_279 = SLICE(dx_265, byte, 8);
					int8 ah_285 = psegArg00->*bx_284;
					ax_263 = DPB(ax_263, al_286, 0, 8);
					if (ah_285 < 0x00)
						break;
					if (ah_285 != 0x00 && (Mem195[es_25:DPB(bx_284, dh_279 >>u 0x01, 8, 8):byte] & 0xFF) != 0x00)
					{
						al_286 = al_286 + 0x80;
						ax_263 = DPB(ax_263, al_286 + 0x80, 0, 8);
						goto l0C00_020D;
					}
				} while (dh_279 <=u 0x46);
l0C00_020D:
				ds->*di_201 = al_286;
				di_201 = di_201 + 1;
				bp_228 = bp_228 + 0x0001;
			} while (bp_228 != 0x00A0);
			si_202 = si_202 - 0x0001;
		} while (si_202 != 0xFF9C);
		Mem318[ss:fp + 0x0000:word16] = 0xA000;
		word16 Eq_315::*di_322 = Eq_315::a0000;
		word16 Eq_15::*si_323 = Eq_15::a0384;
		cx = DPB(cx_241, 0x7D, 8, 8);
		while (cx != 0x0000)
		{
			0xA000->*di_322 = ds->*si_323;
			si_323 = si_323 + 1;
			di_322 = di_322 + 1;
			cx = cx - 0x0001;
		}
	} while (DPB(ax_263, __inb(0x60), 0, 8) != 0x0001);
	return;
}

