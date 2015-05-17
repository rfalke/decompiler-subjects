// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_315/ia32_com/subject.exe
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
	byte al_103 = 0x12;
	while (cx_18 != 0x0000)
	{
		0xA000->*di_13 = 0x12;
		di_13 = di_13 + 1;
		cx_18 = cx_18 - 0x0001;
	}
	do
	{
		ds->w01A5 = 0x0000;
		__syscall(0x16);
		if ((al_103 & 0x04) != 0x00)
			ds->w01A5 = ds->w01A5 + 0x0001;
		if ((al_103 & 0x08) != 0x00)
			ds->w01A5 = ds->w01A5 - 0x0001;
		fn0C00_0219(ds);
		do
			;
		while ((__inb(0x03DA) & 0x08) != 0x00);
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		fn0C00_01BB(ds->t01B1, ds->t01AF, 0x12, 0xA000, ds);
		Eq_81 ax_59 = ds->t01A9;
		ds->t01B1 = ax_59;
		Eq_82 bx_61 = ds->t01A7;
		ds->t01AF = bx_61;
		fn0C00_01BB(ax_59, bx_61, 0x0E, 0xA000, ds);
		fn0C00_01CB(ds->t01A1, 0x0001, 0x0A, 0xA000, ds);
		fn0C00_01CB(ds->t01A3, 0x013E, 0x0C, 0xA000, ds);
		byte dl_71 = 0x0F;
		Eq_82 bx_76 = 0x0000;
		word16 cx_79 = ds->w01B5;
		do
		{
			dl_71 = fn0C00_01BB(0x0000, bx_76, dl_71, 0xA000, ds);
			bx_76 = bx_76 + 0x0001 + 0x0001;
			cx_79 = cx_79 - 0x0001;
		} while (cx_79 != 0x0000);
		Eq_82 bx_90 = 0x013F;
		word16 cx_102 = ds->w01B7;
		do
		{
			word16 bx_98 = bx_90 - 0x0001;
			dl_71 = fn0C00_01BB(0x0000, bx_90, dl_71, 0xA000, ds);
			bx_90 = bx_98 - 0x0001;
			cx_102 = cx_102 - 0x0001;
		} while (cx_102 != 0x0000);
		bios_kbd_check_keystroke(out al_103);
	} while (bx_98 == 0x0001);
	msdos_terminate_program20();
}

byte fn0C00_01BB(Eq_81 ax, Eq_82 bx, byte dl, Eq_16 * es, Eq_27 * ds)
{
	byte dl_18 = (byte) dx;
	Mem20[es:bx + (word16) (ds->w01B9 *u ax):byte] = dl_18;
	return dl_18;
}

void fn0C00_01CB(Eq_81 ax, Eq_82 bx, byte dl, Eq_16 * es, Eq_27 * ds)
{
	word16 cx_14 = 0x000A;
	do
	{
		dl = fn0C00_01BB(ax, bx, dl, es, ds);
		ax = ax + 0x0001;
		cx_14 = cx_14 - 0x0001;
	} while (cx_14 != 0x0000);
	fn0C00_01BB(ax - 0x000B, bx, fn0C00_01BB(ax, bx, 0x12, es, ds), es, ds);
	return;
}

void fn0C00_01E0(Eq_81 ax, int16 Eq_27::*bx, Eq_27 * ds)
{
	if (ds->*bx < 0x0050)
		ds->*bx = ds->*bx + 0x0001;
	Mem17[ds:0x01A9:word16] = ((word16) (Mem0[ds:0x36D1:word16] *u (ax + Mem0[ds:0x01A1:word16])) & 0x007F) + 0x0024;
	ds->t01A7.u0 = 0x00A0;
	ds->w01B3 = 0x001E;
	return;
}

Eq_81 fn0C00_0207(Eq_81 bx)
{
	if (bx <= 0x0002)
		bx.u0 = 0x0002;
	if (false)
		bx.u0 = 0x00BD;
	return bx;
}

void fn0C00_0219(Eq_27 * ds)
{
	Eq_81 bx_11 = ds->t01A3;
	if (ds->t01A7 >= 0x00E6)
	{
		Eq_81 ax_78 = ds->t01A9;
		bx_11 = ds->t01A3;
		if (ax_78 >= bx_11 + 0x0005)
			if (ax_78 <= bx_11 + 0x0005)
				;
			else
				bx_11 = bx_11 + 0x0001;
		else
			bx_11 = bx_11 - 0x0001;
	}
	ds->t01A3 = fn0C00_0207(bx_11);
	Eq_81 bx_18 = fn0C00_0207(Mem14[ds:0x01A1:word16] + Mem14[ds:0x01A5:word16]);
	ds->t01A1 = bx_18;
	if (ds->w01B3 != 0x0000)
	{
		ds->w01B3 = ds->w01B3 - 0x0001;
l0C00_02D5:
		return;
	}
	else
	{
		Eq_81 ax_41 = Mem19[ds:0x01A9:word16] + Mem19[ds:0x01AD:word16];
		ds->t01A9 = ax_41;
		if (ax_41 == 0x0002)
			ds->w01AD = 0x0001;
		if (ax_41 == 0x00C6)
			ds->w01AD = 0xFFFF;
		Eq_82 cx_48 = Mem42[ds:0x01A7:word16] + Mem42[ds:0x01AB:word16];
		ds->t01A7 = cx_48;
		if (cx_48 == 0x0002 && (ax_41 >= bx_18 && ax_41 < bx_18.u0))
			ds->w01AB = 0x0001;
		Eq_81 bx_53 = ds->t01A3;
		if (cx_48 == 0x013D && (ax_41 >= bx_53 && ax_41 < bx_53.u0))
			ds->w01AB = 0xFFFF;
		if (cx_48 == 0x0000)
		{
			fn0C00_01E0(ax_41, &Eq_27::w01B7, ds);
			return;
		}
		else if (cx_48 == 0x013F)
			fn0C00_01E0(ax_41, &Eq_27::w01B5, ds);
	}
}

