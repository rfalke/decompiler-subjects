// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_317/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_27 * ds)
{
	bios_video_set_mode(0x13);
	byte Eq_16::*di_13 = &Eq_16::b0000;
	word16 cx_11 = 0x0140;
	while (cx_11 != 0x0000)
	{
		0xA000->*di_13 = 0x00;
		di_13 = di_13 + 1;
		cx_11 = cx_11 - 0x0001;
	}
	word16 cx_18 = 0xF938;
	byte al_105 = 0x12;
	while (cx_18 != 0x0000)
	{
		0xA000->*di_13 = 0x12;
		di_13 = di_13 + 1;
		cx_18 = cx_18 - 0x0001;
	}
	do
	{
		ds->w01A7 = 0x0000;
		__syscall(0x16);
		if ((al_105 & 0x04) != 0x00)
			ds->w01A7 = ds->w01A7 + 0x0001;
		if ((al_105 & 0x08) != 0x00)
			ds->w01A7 = ds->w01A7 - 0x0001;
		fn0C00_0209(ds);
		do
			;
		while ((__inb(0x03DA) & 0x08) != 0x00);
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		fn0C00_01BD(ds->t01B3, ds->t01B1, 0x12, 0xA000, ds);
		Eq_81 ax_61 = ds->t01AB;
		ds->t01B3 = ax_61;
		Eq_82 bx_63 = ds->t01A9;
		ds->t01B1 = bx_63;
		fn0C00_01BD(ax_61, bx_63, 0x0E, 0xA000, ds);
		fn0C00_01CD(ds->t01A3, 0x0001, 0x0A, 0xA000, ds);
		fn0C00_01CD(ds->t01A5, 0x013E, 0x0C, 0xA000, ds);
		byte dl_73 = 0x0F;
		Eq_82 bx_78 = 0x0000;
		word16 cx_81 = ds->w01B7;
		do
		{
			dl_73 = fn0C00_01BD(0x0000, bx_78, dl_73, 0xA000, ds);
			bx_78 = bx_78 + 0x0002;
			cx_81 = cx_81 - 0x0001;
		} while (cx_81 != 0x0000);
		Eq_82 bx_91 = 0x013F;
		word16 cx_104 = ds->w01B9;
		do
		{
			dl_73 = fn0C00_01BD(0x0000, bx_91, dl_73, 0xA000, ds);
			bx_91 = bx_91 - 0x0002;
			cx_104 = cx_104 - 0x0001;
		} while (cx_104 != 0x0000);
		bios_kbd_check_keystroke(out al_105);
	} while (bx_91 == 0x0000);
	msdos_terminate_program20();
}

byte fn0C00_01BD(Eq_81 ax, Eq_82 bx, byte dl, Eq_16 * es, Eq_27 * ds)
{
	byte dl_18 = (byte) dx;
	Mem20[es:bx + (word16) (ds->w01BB *u ax):byte] = dl_18;
	return dl_18;
}

void fn0C00_01CD(Eq_81 ax, Eq_82 bx, byte dl, Eq_16 * es, Eq_27 * ds)
{
	word16 cx_14 = 0x000A;
	do
	{
		dl = fn0C00_01BD(ax, bx, dl, es, ds);
		ax = ax + 0x0001;
		cx_14 = cx_14 - 0x0001;
	} while (cx_14 != 0x0000);
	fn0C00_01BD(ax - 0x000B, bx, fn0C00_01BD(ax, bx, 0x12, es, ds), es, ds);
	return;
}

void fn0C00_01E2(Eq_81 ax, int16 Eq_27::*bx, Eq_27 * ds)
{
	if (ds->*bx < 0x0050)
		ds->*bx = ds->*bx + 0x0001;
	Mem17[ds:0x01AB:word16] = ((word16) (Mem0[ds:0x36D1:word16] *u (ax + Mem0[ds:0x01A3:word16])) & 0x007F) + 0x0024;
	ds->t01A9.u0 = 0x00A0;
	ds->w01B5 = 0x001E;
	return;
}

void fn0C00_0209(Eq_27 * ds)
{
	Eq_81 bx_12 = ds->t01A5;
	if (ds->t01A9 >= 0x00E6)
	{
		Eq_81 ax_84 = ds->t01AB;
		bx_12 = ds->t01A5;
		if (ax_84 >= bx_12.u0)
			if (ax_84 <= bx_12.u0)
				;
			else
			{
				bx_12.u0 = bx_12.u0;
				if (bx_12 >= 0xFF44)
					bx_12.u0 = 0x00BD;
			}
		else
		{
			bx_12 = bx_12 - 0x0001;
			if (bx_12 <= 0x0003)
				bx_12.u0 = 0x0002;
		}
	}
	ds->t01A5 = bx_12;
	Eq_81 bx_16 = ds->w01A7 + ds->t01A3;
	if (bx_16 < 0x0002)
		bx_16.u0 = 0x0002;
	if (bx_16 > 0x00BD)
		bx_16.u0 = 0x00BD;
	ds->t01A3 = bx_16;
	if (ds->w01B5 != 0x0000)
	{
		ds->w01B5 = ds->w01B5 - 0x0001;
l0C00_02E1:
		return;
	}
	else
	{
		Eq_81 ax_45 = Mem23[ds:0x01AB:word16] + Mem23[ds:0x01AF:word16];
		ds->t01AB = ax_45;
		if (ax_45 == 0x0002)
			ds->w01AF = 0x0001;
		if (ax_45 == 0x00C6)
			ds->w01AF = 0xFFFF;
		Eq_82 cx_52 = Mem46[ds:0x01A9:word16] + Mem46[ds:0x01AD:word16];
		ds->t01A9 = cx_52;
		if (cx_52 == 0x0002 && (ax_45 >= bx_16 && ax_45 < bx_16.u0))
			ds->w01AD = 0x0001;
		Eq_81 bx_57 = ds->t01A5;
		if (cx_52 == 0x013D && (ax_45 >= bx_57 && ax_45 < bx_57.u0))
			ds->w01AD = 0xFFFF;
		if (cx_52 == 0x0000)
		{
			fn0C00_01E2(ax_45, &Eq_27::w01B9, ds);
			return;
		}
		else if (cx_52 == 0x013F)
			fn0C00_01E2(ax_45, &Eq_27::w01B7, ds);
	}
}

