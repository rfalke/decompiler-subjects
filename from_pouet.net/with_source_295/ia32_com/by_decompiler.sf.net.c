// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_295/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_37 Eq_9::*cx, byte Eq_55::*bx, Eq_9 * ds, Eq_153 rArg0, Eq_176 rArg1)
{
	bios_video_set_mode(0x13);
	msdos_display_string(ds, 0x01F2);
	uint16 ax_14 = DPB(ax, 0x09, 8, 8);
	do
	{
		__outb(0x03C8, cl);
		uint16 ax_23 = DPB(ax_14, cl, 0, 8);
		byte al_26 = (byte) (ax_23 >>u 0x0002);
		__outb(0x03C9, al_26);
		__outb(0x03C9, al_26);
		__outb(0x03C9, al_26);
		cx = cx - 0x0001;
		ax_14 = ax_23 >>u 0x0002;
		cl = (byte) cx;
	} while (cx != &Eq_9::t0000);
	do
	{
		cx = DPB(cx, 0x02, 0, 8);
		Eq_46 dx_136 = 0x04FB;
		byte dl_137 = 0xFB;
		byte dh_138 = 0x04;
		if (bl <=u 0xFB && (bl >=u 0x04 && true))
		{
			word16 dx_313 = bx & 0x0F0F;
			word16 dx_317 = DPB(dx_313, (byte) dx_313 + SLICE(dx_313, byte, 8), 0, 8);
			dx_136 = dx_317 << 0x02;
			dl_137 = (byte) (dx_317 << 0x02);
			dh_138 = SLICE(dx_317 << 0x02, byte, 8);
		}
		0x8000->*bx = dl_137;
		bx = bx - 0x0001;
		bl = (byte) bx;
	} while (bx != &Eq_55::b0000);
	do
	{
		Eq_82 Eq_9::*bx_103 = &Eq_9::t0400;
		byte bl_104 = 0x00;
		do
		{
			cx = cx + 0x0001;
			(ds->*bx_103).w0000 = (ds->*bx_103).w0000 + cx;
			Eq_95 rLoc1_115 = (real64) (ds->*bx_103).w0000 / (real64) ds->w01FA;
			Eq_104 rLoc1_117 = cos(rLoc1_115);
			(ds->*bx_103).t001F = sin(rLoc1_115);
			(ds->*bx_103).t0023 = rLoc1_117;
			bl_104 = bl_104 + 0x08;
			byte ch_111 = SLICE(cx, byte, 8);
			bx_103 = DPB(bx_103, bl_104, 0, 8);
		} while (P);
		Eq_121 Eq_9::*bx_126 = DPB(bx_103, 0x03, 8, 8);
		do
		{
			int16 bp_151 = 0x0080;
l0C00_0173:
			Eq_124 Eq_9::*di_172 = &Eq_9::t041D;
			byte al_173 = dl_137;
			Eq_131 Eq_9::*bx_176 = DPB(bx_126, ch_111, 0, 8);
			do
			{
				int16 ax_182 = (int16) (al_173 - 0x80);
				(ds->*bx_176).w0000 = ax_182;
				word16 bx_187 = &bx_176->w0000;
				al_173 = dh_138;
				bx_176 = bx_187 + 0x0001;
				if (!P)
					bx_176 = DPB(bx_187 + 0x0001, 0x00, 0, 8);
				di_172 = di_172 + 1;
			} while (P);
			(ds->*bx_176).w0000 = bp_151;
			bx_126 = DPB(bx_176, 0x00, 0, 8);
			do
			{
				Eq_150 Eq_9::*bx_201 = &bx_126->w0000;
				Eq_153 rLoc1_200 = (real64) (ds->*bx_126).w0000;
				bx_126 = bx_201 + 0x0001;
			} while (P);
			do
			{
				Eq_153 rLoc2_214 = rLoc1_323 * (ds->*di_172).t0000 + rArg0 * (ds->*di_172).t0004;
				rArg1 = rArg0 * (ds->*di_172).t0004 - rArg1 * (ds->*di_172).t0000;
				rLoc1_200 = rLoc2_214;
				rArg0 = rLoc1_323;
				di_172 = di_172 + 8;
				Eq_153 rLoc1_323 = rLoc1_200;
			} while (P);
			rArg0 = rLoc1_323 / (rArg1 / ((rLoc2_214 + (real64) ds->w01FC) / (real64) ds->w01FE));
			(ds->*bx_201).w0001 = (int16) rArg0;
			int16 di_234 = (ds->*bx_201).w0001 *s 0x0140;
			(ds->*bx_201).w0001 = (int16) rArg1;
			Eq_205 Eq_9::*di_236 = di_234 + (ds->*bx_201).w0001;
			Mem243[ds:di_236 + 0x7DA0:byte] = Mem235[ds:di_236 + 0x7DA0:byte] + (Mem235[ds:dx_136 + 0x0000:byte] >>u 0x05);
			dx_136 = dx_136 + 0x0001;
			dl_137 = (byte) dx_136;
			dh_138 = SLICE(dx_136, byte, 8);
			byte Z_250 = cond(dx_136);
			do
			{
				if (Z_250)
					goto l0C00_0173;
				bp_151 = -bp_151;
				Z_250 = cond(bp_151);
			} while (bp_151 < 0x0000);
			ch_111 = ch_111 + 0x02;
			cx = DPB(cx_322, ch_111, 8, 8);
			Eq_37 Eq_9::*cx_322 = cx;
		} while (P);
		Eq_37 Eq_9::*di_272 = cx;
		Eq_37 Eq_9::*si_273 = cx;
		cx = DPB(cx_322, 0x78, 8, 8);
		do
		{
			(0xA000->*di_272).w0000 = (ds->*si_273).w0000;
			di_272 = di_272 + 1;
			Mem283[ds:di_272 - 0x0002:word16] = dx_136;
			si_273 = si_273 + 1;
			cx = cx - 0x0001;
		} while (cx != &Eq_9::t0000);
	} while (DPB(ax_182, __inb(0x60), 0, 8) != 0x0001);
	return;
}

