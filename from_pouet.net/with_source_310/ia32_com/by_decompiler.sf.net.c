// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_310/ia32_com/subject.exe
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
	byte al_131 = 0x12;
	while (cx_18 != 0x0000)
	{
		0xA000->*di_13 = 0x12;
		di_13 = di_13 + 1;
		cx_18 = cx_18 - 0x0001;
	}
	do
	{
		ds->w023A = 0x0000;
		__syscall(0x16);
		if ((al_131 & 0x04) != 0x00)
			ds->w023A = ds->w023A + 0x0001;
		if ((al_131 & 0x08) != 0x00)
			ds->w023A = ds->w023A - 0x0001;
		Eq_56 bx_168 = ds->t0238;
		if (ds->t023C >= 0x00E6)
		{
			Eq_56 ax_161 = ds->t023E;
			if (ax_161 - 0x0005 >= bx_168)
				if (ax_161 - 0x0005 <= bx_168)
					;
				else
					bx_168.u0 = bx_168.u0;
			else
				bx_168 = bx_168 - 0x0001;
		}
		ds->t0238 = fn0C00_029C(bx_168);
		Eq_56 bx_63 = fn0C00_029C(Mem59[ds:0x0236:word16] + Mem59[ds:0x023A:word16]);
		ds->t0236 = bx_63;
		if (ds->w0248 != 0x0000)
		{
			ds->w0248 = ds->w0248 - 0x0001;
			goto l0C00_01CB;
		}
		Eq_56 ax_138 = Mem64[ds:0x023E:word16] + Mem64[ds:0x0242:word16];
		ds->t023E = ax_138;
		if (ax_138 == 0x0002)
			ds->w0242 = 0x0001;
		if (ax_138 == 0x00C6)
			ds->w0242 = 0xFFFF;
		Eq_60 cx_147 = Mem141[ds:0x023C:word16] + Mem141[ds:0x0240:word16];
		ds->t023C = cx_147;
		fn0C00_02AE(ax_138, cx_147, 0x0001, bx_63, ds);
		fn0C00_02AE(ax_138, cx_147, 0x013E, ds->t0238, ds);
		if (cx_147 == 0x0000)
		{
			fn0C00_0275(ax_138, &Eq_27::w024C, ds);
			goto l0C00_01CB;
		}
		if (cx_147 == 0x013F)
		{
			fn0C00_0275(ax_138, &Eq_27::w024A, ds);
			goto l0C00_01CB;
		}
l0C00_01CB:
		do
			;
		while ((__inb(0x03DA) & 0x08) != 0x00);
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		fn0C00_0250(ds->t0246, ds->t0244, 0x12, 0xA000, ds);
		Eq_56 ax_85 = ds->t023E;
		ds->t0246 = ax_85;
		Eq_60 bx_87 = ds->t023C;
		ds->t0244 = bx_87;
		fn0C00_0250(ax_85, bx_87, 0x0E, 0xA000, ds);
		fn0C00_0260(ds->t0236, 0x0001, 0x0A, 0xA000, ds);
		fn0C00_0260(ds->t0238, 0x013E, 0x0C, 0xA000, ds);
		byte dl_106 = 0x0F;
		Eq_60 bx_102 = 0x0000;
		word16 cx_105 = ds->w024A;
		do
		{
			dl_106 = fn0C00_0250(0x0000, bx_102, dl_106, 0xA000, ds);
			bx_102 = bx_102 + 0x0001 + 0x0001;
			cx_105 = cx_105 - 0x0001;
		} while (cx_105 != 0x0000);
		Eq_60 bx_116 = 0x013F;
		word16 cx_117 = ds->w024C;
		do
		{
			word16 bx_124 = bx_116 - 0x0001;
			dl_106 = fn0C00_0250(0x0000, bx_116, dl_106, 0xA000, ds);
			bx_116 = bx_124 - 0x0001;
			cx_117 = cx_117 - 0x0001;
		} while (cx_117 != 0x0000);
		bios_kbd_check_keystroke(out al_131);
	} while (bx_124 == 0x0001);
	msdos_terminate_program20();
}

byte fn0C00_0250(Eq_56 ax, Eq_60 bx, byte dl, Eq_16 * es, Eq_27 * ds)
{
	byte dl_18 = (byte) dx;
	Mem20[es:bx + (word16) (ds->w024E *u ax):byte] = dl_18;
	return dl_18;
}

void fn0C00_0260(Eq_56 ax, Eq_60 bx, byte dl, Eq_16 * es, Eq_27 * ds)
{
	word16 cx_14 = 0x000A;
	do
	{
		dl = fn0C00_0250(ax, bx, dl, es, ds);
		ax = ax + 0x0001;
		cx_14 = cx_14 - 0x0001;
	} while (cx_14 != 0x0000);
	fn0C00_0250(ax - 0x000B, bx, fn0C00_0250(ax, bx, 0x12, es, ds), es, ds);
	return;
}

void fn0C00_0275(Eq_56 ax, int16 Eq_27::*bx, Eq_27 * ds)
{
	if (ds->*bx < 0x0050)
		ds->*bx = ds->*bx + 0x0001;
	Mem17[ds:0x023E:word16] = ((word16) (Mem0[ds:0x36D1:word16] *u (ax + Mem0[ds:0x0236:word16])) & 0x007F) + 0x0024;
	ds->t023C.u0 = 0x00A0;
	ds->w0248 = 0x001E;
	return;
}

Eq_56 fn0C00_029C(Eq_56 bx)
{
	if (bx <= 0x0002)
		bx.u0 = 0x0002;
	if (false)
		bx.u0 = 0x00BD;
	return bx;
}

void fn0C00_02AE(Eq_56 ax, Eq_60 cx, Eq_60 dx, Eq_56 bx, Eq_27 * ds)
{
	if (cx == dx && (ax >= bx && ax < bx.u0))
		ds->w0240 = -ds->w0240;
	return;
}

