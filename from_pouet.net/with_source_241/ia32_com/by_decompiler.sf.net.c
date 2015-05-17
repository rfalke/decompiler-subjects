// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_241/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, byte dl, byte dh, Eq_48 * ds, Eq_89 rArg0)
{
	bios_video_set_mode(0x13);
	ptr16 sp_1 = fp;
	byte * dx_5[1] = DPB(dx, dh + 0x10, 8, 8);
	byte * dx_8[1] = DPB(dx, dh + 0x20, 8, 8);
	do
	{
		__outb(0x03C8, cl);
		int16 ax_19 = (int16) cl;
		uint8 al_20 = (byte) ax_19;
		__outb(0x03C9, al_20 >>u 0x01);
		__outb(0x03C9, al_20 >>u 0x01);
		__outb(0x03C9, al_20 >>u 0x01 & SLICE(ax_19, byte, 8));
		cx = cx - 0x0001;
		cl = (byte) cx;
	} while (cx != 0x0000);
	do
	{
		ds->w01FD = ds->w01FD - 0x0001;
		word16 bx_160 = 0x0000;
		byte bl_161 = 0x00;
		byte bh_162 = 0x00;
		Eq_60 * es_73 = SLICE(ds->ptr0000, selector, 16);
		do
		{
			Eq_69 Eq_48::*di_100 = &Eq_48::t0402;
			byte al_111 = bl_161;
			word16 dx_106 = 0xF400;
			do
			{
				Eq_64 ax_102 = (int16) (al_111 - 0x80);
				(ds->*di_100).t0000 = ax_102;
				int8 al_103 = (byte) ax_102;
				dx_106 = dx_106 - al_103 *s al_103;
				bcu8 dh_107 = SLICE(dx_106, byte, 8);
				real64 rLoc1_110 = (real64) (ds->*di_100).t0000;
				al_111 = bh_162;
				di_100 = di_100 + 1;
			} while (P);
			rArg0 = atan(rArg0, rLoc1_110) * (real64) ds->w01FB;
			(ds->*di_100).t0000 = (int16) rArg0;
			word16 ax_121 = Mem119[ds:di_100 + 0x0000:word16] + Mem119[ds:0x01FC:word16];
			word16 ax_128 = DPB(ax_121, dh_107, 0, 8);
			byte ah_122 = SLICE(ax_121, byte, 8);
			byte cl_124 = 0x00;
			cx = DPB(cx, 0x00, 0, 8);
			byte dh_137 = (byte) (ax_128 & 0x0707) + SLICE(ax_128 & 0x0707, byte, 8) + dh_107;
			if (dh_107 >=u 0xEF)
			{
				cl_124 = 0x50;
				cx = DPB(cx, 0x50, 0, 8);
			}
			if (dh_107 <=u 0xEA)
			{
				cx = DPB(cx, ah_122 & 0x1F, 8, 8);
				if ((ah_122 & 0x1F) <=u 0x03)
				{
					if (dh_107 >=u 0xE9)
					{
						dh_137 = __ror(dh_107, 0x03) + 0x9B;
						cx = cx - 0x0001;
						cl_124 = (byte) (cx - 0x0001);
					}
					dh_137 = dh_137 - 0x14;
				}
				if (dh_107 <=u 0xB4)
				{
					cx = cx - 0x0001;
					cl_124 = (byte) cx;
				}
			}
			dx_8->*bx_160 = cl_124;
			dx_5->*bx_160 = dh_137 + 0x80;
			bx_160 = bx_160 + 1;
			bl_161 = (byte) bx_160;
			bh_162 = SLICE(bx_160, byte, 8);
		} while (bx_160 != 0x0000);
		word16 si_165 = 0xFF9C;
		do
		{
			word16 bp_189 = 0xFF60;
			do
			{
				Eq_170 Eq_169::*sp_200 = sp_1 - 0x0002;
				(ss->*sp_200).ptr0000 = di_100;
				int32 dx_ax_211 = (int32) (int16) (byte) (ds->w01FD << 0x0001);
				int8 al_215 = ((byte) dx_ax_211 & 0x7F) - 0x40;
				int16 ax_216 = al_215 *s al_215;
				ui16 ax_219 = DPB(ax_216, SLICE(ax_216, byte, 8) - 0x10, 8, 8);
				word16 dx_220 = SLICE(dx_ax_211, word16, 16) ^ ax_219;
				word16 ax_229 = DPB(ax_219 * 0x0002, SLICE(ax_219 * 0x0002, byte, 8) - 0x01, 8, 8);
				word16 cx_203 = 0x7F40;
				word16 dx_226 = DPB(dx_220, SLICE(dx_220, byte, 8) + 0x24, 8, 8);
				word16 di_232 = ax_229;
				do
				{
					cx_203 = cx_203 + bp_189;
					di_232 = di_232 - 0x0096;
					Eq_64 ::*bx_248 = DPB(di_232, SLICE(cx_203, byte, 8), 0, 8);
					dx_226 = dx_226 + si_165;
					byte al_250 = Mem201[dx_5:bx_248 + 0x0000:byte];
					Eq_64 dh_243 = SLICE(dx_226, byte, 8);
					byte ah_249 = Mem201[dx_8:bx_248 + 0x0000:byte];
					ax_229 = DPB(ax_385, al_250, 0, 8);
					if (ah_249 < 0x00)
						break;
					if (ah_249 != 0x00)
					{
						word16 ax_385 = ax_229;
						if (dh_243 <u ah_249)
							continue;
						if (dh_243 >= ah_249)
						{
							al_250 = al_250 + ah_249;
							ax_229 = DPB(ax_385, al_250, 0, 8);
						}
					}
l0C00_01D4:
				} while (dh_243 <=u 0x46);
				Mem270[ds:Mem201[ss:sp_200 + 0x0000:word16]:byte] = al_250;
				word16 bp_272 = bp_189 + 0x0001;
			} while (bp_272 != 0xFF61);
			word16 si_282 = si_165 + 0x0001;
		} while (si_282 != 0xFF9D);
		word16 Eq_60::*di_289 = Eq_60::a0000;
		word16 Eq_48::*si_292 = Eq_48::a0404;
		cx = DPB(cx_203, 0x7D, 8, 8);
		while (cx != 0x0000)
		{
			es_73->*di_289 = ds->*si_292;
			si_292 = si_292 + 1;
			di_289 = di_289 + 1;
			cx = cx - 0x0001;
		}
	} while (DPB(ax_229, __inb(0x60), 0, 8) != 0x0001);
	return;
}

