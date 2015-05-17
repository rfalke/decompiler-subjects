// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_363/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_8 * ds)
{
fn0C00_0100_entry:
l0C00_0100:
l0C00_065E:
	bios_video_set_mode(0x13)
	ds->t0109.u0 = 0x00;
	ds->t0105.u0 = 0x00;
l0C00_066C:
	ds->t010B.u0 = 0x00;
	Eq_7 cx_15 = 0x0040
l0C00_067A:
	byte al_24 = (byte) (ds->t0105 *u 0x40)
	ds->t0103 = cx_15;
	__outb(0x03C8, al_24 + ds->t0103)
	Eq_7 al_193 = ds->t0103
	branch ds->t0105 != 0x02 l0C00_0699
l0C00_0694:
	ds->t010B = al_193;
	al_193.u0 = 0x00;
l0C00_0699:
	byte al_36 = (byte) (ds->t0109 *u al_193)
	__outb(0x03C9, al_36)
	Eq_7 al_189 = al_36 + ds->t010B
	branch ds->t0105 != 0x00 l0C00_06AC
l0C00_06A9:
	al_189 = ds->t0103;
l0C00_06AC:
	__outb(0x03C9, al_189)
	Eq_7 al_44 = ds->t010B
	__outb(0x03C9, al_44)
	cx_15 = cx_15 - 0x0001;
	branch cx_15 != 0x0000 l0C00_067A
l0C00_06B4:
	ds->t0109.u0 = 0x01;
	Mem52[ds:0x0105:byte] = Mem50[ds:0x0105:byte] + 0x01
	branch ds->t0105 != 0x03 l0C00_066C
l0C00_06C4:
	word16 cx_55 = 0x0040
l0C00_06C7:
	__outb(0x03C8, al_44 + 0xBF)
	__outb(0x03C9, 0x3F)
	al_44 = (byte) (cx_55 - 0x0001);
	__outb(0x03C9, al_44)
	__outb(0x03C9, al_44)
	cx_55 = cx_55 - 0x0001;
	branch cx_55 != 0x0000 l0C00_06C7
l0C00_06D8:
	fn0C00_0D73(0xA000, ds)
	ds->b0113 = 0x26;
	Eq_7 bx_116 = 0x0000
l0C00_06E7:
	ds->t010B.u0 = 0x0028;
	ds->t0109 = bx_116;
	ds->t0109 = (int16) (sin((real64) ds->t0109 / (real64) ds->t010B) * (real64) ds->t010F);
	Mem87[ds:0x0109:word16] = Mem85[ds:0x0109:word16] + 0x008C
	ds->t0103 = bx_116;
	ds->t0105 = ds->t0109;
	Eq_7 ax_91 = ds->t0109
	ds->t010B.u0 = 0x0140;
	Eq_126 Eq_112::*di_101 = (word16) (ds->t010B *u ax_91) + bx_116
l0C00_0724:
	Mem100[ds:0x0109:word16] = Mem92[ds:0x0109:word16] + 0x0001
	di_101 = di_101 + 1;
	(0xA000->*di_101).b0000 = 0x1E;
	branch ds->t0109 <= 0x00C8 l0C00_0724
l0C00_0738:
	ds->t0109 = bx_116;
	ds->t010B.u0 = 0x0067;
	Eq_142 rLoc1_109 = sin((real64) ds->t0109 / (real64) ds->t010B)
	ds->t010B.u0 = 0x0005;
	ds->w0107 = (int16) (rLoc1_109 * (real64) ds->t010B);
	ds->w0107 = ds->w0107 + 0x0006;
	fn0C00_0D73(0xA000, ds)
	bx_116.u0 = bx_116.u0;
	branch bx_116 < 0x0140 l0C00_06E7
l0C00_076C:
	ds->b0113 = 0x7F;
	ds->t0103.u0 = 0x002B;
	ds->t0105.u0 = 0x0026;
	ds->w0107 = 0x001E;
	fn0C00_0D73(0xA000, ds)
	ds->t0103.u0 = 0x004F;
	ds->t0105.u0 = 0x0026;
	ds->t0109.u0 = 0x006C;
	ds->t010B.u0 = 0x0026;
	fn0C00_0DCF(0xA000, ds)
	ds->t0103.u0 = 0x004A;
	ds->t0105.u0 = 0x0038;
	ds->t0109.u0 = 0x0063;
	ds->t010B.u0 = 0x0047;
	fn0C00_0DCF(0xA000, ds)
	ds->t0103.u0 = 0x003D;
	ds->t0105.u0 = 0x0045;
	ds->t0109.u0 = 0x004C;
	ds->t010B.u0 = 0x005E;
	fn0C00_0DCF(0xA000, ds)
	ds->t0103.u0 = 0x002B;
	ds->t0105.u0 = 0x004A;
	ds->t0109.u0 = 0x002B;
	ds->t010B.u0 = 0x0067;
	fn0C00_0DCF(0xA000, ds)
	ds->t0103.u0 = 0x0019;
	ds->t0105.u0 = 0x0045;
	ds->t0109.u0 = 0x000B;
	ds->t010B.u0 = 0x005E;
	fn0C00_0DCF(0xA000, ds)
	ds->t0103.u0 = 0x000C;
	ds->t0105.u0 = 0x0038;
	ds->t0109.u0 = 0x0000;
	ds->t010B.u0 = 0x003F;
	fn0C00_0DCF(0xA000, ds)
	ds->t0103.u0 = 0x0007;
	ds->t0105.u0 = 0x0026;
	ds->t0109.u0 = 0x0000;
	ds->t010B.u0 = 0x0026;
	fn0C00_0DCF(0xA000, ds)
	ds->t0103.u0 = 0x000C;
	ds->t0105.u0 = 0x0014;
	ds->t0109.u0 = 0x0000;
	ds->t010B.u0 = 0x000D;
	fn0C00_0DCF(0xA000, ds)
	ds->t0103.u0 = 0x0019;
	ds->t0105.u0 = 0x0007;
	ds->t0109.u0 = 0x0015;
	ds->t010B.u0 = 0x0000;
	fn0C00_0DCF(0xA000, ds)
	ds->t0103.u0 = 0x002B;
	ds->t0105.u0 = 0x0002;
	ds->t0109.u0 = 0x002B;
	ds->t010B.u0 = 0x0000;
	fn0C00_0DCF(0xA000, ds)
	ds->t0103.u0 = 0x003D;
	ds->t0105.u0 = 0x0007;
	ds->t0109.u0 = 0x0041;
	ds->t010B.u0 = 0x0000;
	fn0C00_0DCF(0xA000, ds)
	ds->t0103.u0 = 0x004A;
	ds->t0105.u0 = 0x0014;
	ds->t0109.u0 = 0x0063;
	ds->t010B.u0 = 0x0007;
	fn0C00_0DCF(0xA000, ds)
	ds->b0113 = 0x00;
	ds->w0107 = 0x0004;
	ds->t0105.u0 = 0x0027;
	ds->t0103.u0 = 0x002B;
	fn0C00_0D73(0xA000, ds)
	ds->w0107 = 0x0004;
	ds->t0103.u0 = 0x0020;
	ds->t0105.u0 = 0x001E;
	fn0C00_0D73(0xA000, ds)
	ds->w0107 = 0x0004;
	ds->t0103.u0 = 0x0036;
	fn0C00_0D73(0xA000, ds)
	ds->b0113 = 0xC0;
	ds->t0103.u0 = 0x0020;
	ds->t0109.u0 = 0x0000;
	ds->t010B.u0 = 0x0007;
	ds->t0105.u0 = 0x0005;
	sin((real64) ds->t0109 / (real64) ds->t010B)
fn0C00_0100_exit:
}

void fn0C00_0D73(Eq_112 * es, Eq_8 * ds)
{
	ds->t0118 = (real64) ds->w0107 - ds->r0114;
	ds->t0111.u0 = 0x00C8;
	byte Eq_112::*di_10 = &Eq_112::bFFFFF9FF;
	do
	{
		Eq_7 cx_29 = 0x0140;
		do
		{
			ds->t0109 = cx_29;
			ds->t010B = ds->t0111;
			Eq_489 rLoc1_38 = (real64) ds->t0103 - (real64) ds->t0109;
			Eq_497 rLoc2_41 = (real64) ds->t0105 - (real64) ds->t010B;
			if (sqrt(rLoc1_38 * rLoc1_38 + rLoc2_41 * rLoc2_41) <=u ds->t0118)
				es->*di_10 = ds->b0113;
			di_10 = di_10 - 0x0001;
			cx_29 = cx_29 - 0x0001;
		} while (cx_29 != 0x0000);
		ds->t0111 = ds->t0111 - 0x0001;
	} while (ds->t0111 != 0x0000);
	return;
}

void fn0C00_0DCF(Eq_112 * es, Eq_8 * ds)
{
	ds->t0111.u0 = 0x0000;
	int16 ax_10 = ds->t0103 - ds->t0109;
	do
		ax_10 = -ax_10;
	while (ax_10 < 0x0000);
	int16 ax_20 = ds->t0105 - ds->t010B;
	do
		ax_20 = -ax_20;
	while (ax_20 < 0x0000);
	if (ax_20 > ax_10)
	{
		Mem150[ds:0x0111:word16] = Mem2[ds:0x0111:word16] + 0x0001;
		Eq_7 ax_155 = ds->t0105;
		ds->t0105 = ds->t0103;
		ds->t0103 = ax_155;
		Eq_7 ax_162 = ds->t010B;
		ds->t010B = ds->t0109;
		ds->t0109 = ax_162;
	}
	if (ds->t0103 > ds->t0109)
	{
		Eq_7 ax_138 = ds->t0109;
		ds->t0109 = ds->t0103;
		ds->t0103 = ax_138;
		Eq_7 ax_145 = ds->t010B;
		ds->t010B = ds->t0105;
		ds->t0105 = ax_145;
	}
	word16 ax_41 = ds->t0109 - ds->t0103;
	int16 ax_45 = ds->t010B - ds->t0105;
	do
		ax_45 = -ax_45;
	while (ax_45 < 0x0000);
	ds->t010F.u0 = 0x02;
	uint16 dx_102 = SEQ(ax_45, ax_41) % ds->t010F;
	ds->t010F = (byte) (SEQ(dx_102, ax_41) /u ds->t010F);
	word16 ax_105 = ax_41;
	if (ds->t0105 < ds->t010B)
		ds->t010B.u0 = 0x0001;
	else
		ds->t010B.u0 = 0xFFFF;
	Eq_7 bx_114 = ds->t0103;
	do
	{
		Eq_7 ax_125;
		Eq_7 di_123;
		if (ds->t0111 != 0x0001)
		{
			di_123 = bx_114;
			ax_125 = ds->t0105;
		}
		else
		{
			di_123 = ds->t0105;
			ax_125 = bx_114;
		}
		Mem100[es:di_123 + (word16) (ax_125 *u 0x0140):byte] = Mem68[ds:0x0113:byte];
		ds->t010F = ds->t010F - (byte) dx_102;
		byte al_107 = (byte) ax_105;
		if (ds->t010F < 0x00)
		{
			Mem119[ds:0x0105:word16] = Mem110[ds:0x0105:word16] + Mem110[ds:0x010B:word16];
			ds->t010F = Mem119[ds:0x010F:byte] + al_107;
		}
		bx_114.u0 = bx_114.u0;
	} while (bx_114 <= ds->t0109);
	return;
}

