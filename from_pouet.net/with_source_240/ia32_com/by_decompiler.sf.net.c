// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_240/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte ch, Eq_17 * ds)
{
	bios_video_set_mode(0x13);
	int8 Eq_17::*si_11 = &Eq_17::b01FF;
	int8 Eq_17::*bx_10 = &Eq_17::b01FF;
	word16 cx_12 = DPB(cx, 0x10, 0, 8);
	do
	{
		si_11 = si_11 - 0x0001;
		ds->*bx_10 = ds->*si_11;
		bx_10 = bx_10 + 1;
		cx_12 = cx_12 - 0x0001;
	} while (cx_12 != 0x0000);
	word16 cx_247 = DPB(cx_12, 0x20, 0, 8);
	do
	{
		ds->*bx_10 = -(ds->*si_11);
		si_11 = si_11 + 1;
		bx_10 = bx_10 + 1;
		cx_247 = cx_247 - 0x0001;
	} while (cx_247 != 0x0000);
	do
	{
		byte ah_75 = 0x0040->b006C;
		word16 ax_213 = DPB(ax, ah_75, 8, 8);
		do
			;
		while (ah_75 == 0x0040->b006C);
		word16 bx_79 = bx_10 + 1;
		byte bl_81 = (byte) (bx_79 & 0x003F);
		word16 cx_86 = DPB(cx_247, 0x80 - (ds->*(bx_79 & 0x003F)).b01EF, 0, 8);
		byte Eq_74::*di_102 = &Eq_74::bFFFFAA00;
		while (cx_86 != 0x0000)
		{
			0xA000->*di_102 = 0x1D;
			di_102 = di_102 + 1;
			cx_86 = cx_86 - 0x0001;
		}
		word16 cx_101 = DPB(cx_86, 0x0F, 0, 8);
		while (cx_101 != 0x0000)
		{
			0xA000->*di_102 = 0x16;
			di_102 = di_102 + 1;
			cx_101 = cx_101 - 0x0001;
		}
		byte al_113 = (bl_81 & 0x04) + 0x16;
		0xA000->*di_102 = al_113;
		byte Eq_74::*di_116 = di_102 + 1;
		0xA000->*di_116 = al_113;
		byte Eq_74::*di_118 = di_116 + 1;
		word16 cx_121 = DPB(cx_101, 0x0F, 0, 8);
		while (cx_121 != 0x0000)
		{
			0xA000->*di_118 = 0x16;
			di_118 = di_118 + 1;
			cx_121 = cx_121 - 0x0001;
		}
		word16 cx_132 = 0xAB40 - di_118;
		while (cx_132 != 0x0000)
		{
			0xA000->*di_118 = 0x1D;
			di_118 = di_118 + 1;
			cx_132 = cx_132 - 0x0001;
		}
		byte Eq_74::*di_152 = &Eq_74::bFFFFF8C0;
		word16 cx_154 = DPB(cx_132, 0x3F, 0, 8);
		do
		{
			word16 cx_167 = 0x0140;
			Eq_142 Eq_74::*si_170 = di_152 - 0x0140;
			di_173 = di_152;
			byte Eq_74::*di_173;
			while (cx_167 != 0x0000)
			{
				0xA000->*di_173 = (0xA000->*si_170).b0000;
				si_170 = si_170 + 1;
				di_173 = di_173 + 1;
				cx_167 = cx_167 - 0x0001;
			}
			(0xA000->*si_170).b0000 = (0xA000->*si_170).b0000 | 0x00;
			if ((0xA000->*si_170).b0000 != 0x00)
			{
				do
				{
					si_170 = si_321 + 1;
					Eq_142 Eq_74::*si_321 = si_170;
				} while (0x16 != (0xA000->*si_321).b0000);
				(0xA000->*si_170).b0000 = 0x16;
				(0xA000->*si_170).b0000 = 0x16;
				Eq_194 Eq_74::*si_312 = &si_170->b0000;
				do
				{
					si_312 = si_322 - 0x0001;
					Eq_194 Eq_74::*si_322 = si_312;
				} while (0x16 != (0xA000->*si_322).b0000);
				(0xA000->*si_312).b0002 = 0x16;
				(0xA000->*si_312).b0003 = 0x16;
			}
			di_152 = di_152 - 0x0140;
			cx_154 = cx_154 - 0x0001;
		} while (cx_154 != 0x0000);
		byte Eq_74::*bx_209 = &Eq_74::b013F;
		do
		{
			bcu8 al_219 = __inb(0x40);
			byte ah_218 = 0x00;
			ax_213 = DPB(ax_213, al_219, 0, 8);
			if (al_219 >=u 0xF8)
			{
				ah_218 = al_219 & 0x0F | 0x10;
				ax_213 = DPB(ax_213, ah_218, 8, 8);
			}
			0xA000->*bx_209 = ah_218;
			bx_209 = bx_209 - 0x0001;
		} while (bx_209 != Eq_74::a0000);
		bx_10 = bx_79 & 0x003F;
		ax = DPB(ax_213, 0x00, 8, 8);
		cx_247 = DPB(cx_154, 0x87, 0, 8);
		byte Eq_74::*di_248 = &Eq_74::bFFFFA8C0;
		do
		{
			ax = DPB(ax, __inb(0x40) & 0x03, 0, 8);
			word16 cx_255 = 0x0140;
			byte Eq_74::*si_263 = di_248 - 0x0140 - 0x0001 + ax;
			while (cx_255 != 0x0000)
			{
				0xA000->*di_248 = 0xA000->*si_263;
				si_263 = si_263 + 1;
				di_248 = di_248 + 1;
				cx_255 = cx_255 - 0x0001;
			}
			di_248 = di_248 - 0x0280;
			cx_247 = cx_247 - 0x0001;
		} while (cx_247 != 0x0000);
	} while (__inb(0x60) != 0x01);
	byte al_290;
	bios_kbd_get_keystroke(out al_290);
	byte bl_294;
	byte ch_295;
	byte cl_296;
	bios_video_get_EGA_info(out bl_294, out ch_295, out cl_296);
	return;
}

