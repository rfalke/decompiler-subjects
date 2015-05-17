// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_256/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100()
{
	bios_video_set_mode(0x13);
	__outw(0x03D4, DPB(ax, 0x20, 8, 8));
	word16 cx_11 = 0x0040;
	byte cl_12 = 0x40;
	do
	{
		Eq_21 bx_101 = 0x0030;
		byte bl_31 = 0x30;
		do
		{
			int8 al_42 = __rol(bl_31, 0x01);
			int8 al_273 = ((byte) (al_42 *s al_42) & 0x1F) + 0x20 - cl_12;
			if (al_273 < 0x00)
				al_273 = 0x00;
			__outb(0x03C9, al_273);
			bx_101 = bx_101 - 0x0001;
			bl_31 = (byte) bx_101;
		} while (bx_101 != 0x0000);
		word16 cx_61 = cx_11 - 0x0001;
		cx_11 = cx_61 - 0x0003;
		cl_12 = (byte) (cx_61 - 0x0003);
	} while (cx_61 != 0x0003);
	do
	{
		int32 dx_ax_78 = (int32) (int16) (byte) ((bx_101 >>u 0x0001) + 0x0040);
		int8 al_79 = (byte) dx_ax_78;
		int16 ax_81 = al_79 *s al_79;
		Mem88[0x8000:bx_101 + 0x0000:word16] = (DPB(ax_81, SLICE(ax_81, byte, 8) - 0x40, 8, 8) ^ SLICE(dx_ax_78, word16, 16)) >> 0x0008;
		word16 bx_89 = bx_101 + 0x0001;
		bx_101 = bx_89 + 0x0001;
		int8 bl_102 = (byte) (bx_89 + 0x0001);
		int8 bh_103 = SLICE(bx_89 + 0x0001, byte, 8);
	} while (bx_89 != 0x0001);
	Mem96[ss:fp - 0x0002:word16] = 0x7000;
	do
	{
		int16 bp_112 = bl_102 *s bl_102 + bh_103 *s bh_103;
		word16 ax_113 = 0x0000;
		do
		{
			ax_113 = ax_113 + 0x0001;
			byte al_122 = (byte) ax_113;
			bp_112 = bp_112 - ax_113 - ax_113;
		} while (bp_112 >= 0x0000);
		int16 ax_130 = (al_122 << 0x02) *s (al_122 << 0x02);
		Mem134[0x7000:bx_101 + 0x0000:byte] = SLICE(ax_130, byte, 8) << 0x01;
		bx_101 = bx_101 + 0x0001;
		bl_102 = (byte) bx_101;
		bh_103 = SLICE(bx_101, byte, 8);
	} while (bx_101 != 0x0000);
	Mem141[ss:fp - 0x0002:word16] = 0xA000;
	Mem145[ss:fp - 0x0002:word16] = 0x6000;
	Eq_136 Eq_73::*si_148 = &Eq_73::t0000;
	do
	{
		word16 ax_169 = DPB(ax_130, (0x8000->*si_148).b0080, 0, 8);
		word16 si_173 = (0x8000->*si_148).w0000;
		byte Eq_114::*bp_174 = &Eq_114::bFFFF9CC0;
		do
		{
			int8 al_180 = bp_174[ax_169] + bp_174[si_173];
			int16 ax_181 = al_180 *s al_180;
			Eq_149 ax_185 = DPB(ax_181, SLICE(ax_181, byte, 8), 0, 8);
			Mem186[0x6000:bx_101 + 0x0000:word16] = ax_185;
			Mem187[0x6000:bx_101 + 0x0100:word16] = ax_185;
			byte bl_189 = bl_102 + 0x01;
			bp_174 = bp_174 + 1;
			bl_102 = bl_189 + 0x01;
			bx_101 = DPB(bx_101, bl_189 + 0x01, 0, 8);
			if (bl_189 != 0x01)
				continue;
			bh_103 = bh_103 + 0x01;
			bp_174 = bp_174 + 128;
			bx_101 = DPB(bx_101, bh_103, 8, 8);
		} while (bh_103 != 0x00);
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		do
			;
		while ((__inb(0x03DA) & 0x08) != 0x00);
		do
		{
			word16 cx_223 = DPB(cx_11, Mem187[0x6000:bx_101 + 0x0000:byte], 8, 8) + bx_101;
			int8 ch_225 = SLICE(cx_223, byte, 8);
			int8 cl_226 = (byte) cx_223 + ch_225;
			byte cl_238 = SLICE(cl_226 *s cl_226, byte, 8) + SLICE(ch_225 *s ch_225, byte, 8) >>u 0x02 & 0x0F;
			ax_130 = ((int16) (Mem187[0x6000:bx_101 - 0x0404:byte] - Mem187[0x6000:bx_101 + 0x0404:byte]) << 0x0001) + 0x0080;
			cx_11 = DPB(cx_223, cl_238, 0, 8);
			byte al_245 = (byte) ax_130;
			if (ax_130 < 0x0000)
			{
				ax_130 = 0x0000;
				al_245 = 0x00;
			}
			Mem256[0xA000:bx_101 + 0x0020:byte] = (al_245 & 0xF0) + cl_238;
			bx_101 = bx_101 + 0x0001;
			bl_102 = (byte) bx_101;
			bh_103 = SLICE(bx_101, byte, 8);
		} while (bx_101 != 0x0000);
		si_148 = &si_148->w0000 + 0x0001;
	} while (__inb(0x60) != 0x01);
	return;
}

