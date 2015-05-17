// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_257/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 bx, byte ch, Eq_8 * ds)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	ds->w0200 = 0xF63C;
	byte al_19 = (byte) bx
	__outb(0x03C8, al_19)
	word16 ax_18 = bx
l0C00_011A:
	__outb(0x03C9, al_19)
	__outb(0x03C9, al_19)
	__outb(0x03C9, al_19)
	ax_18 = ax_18 + 0x0001;
	al_19 = (byte) ax_18;
	branch ax_18 != 0x0000 l0C00_011A
l0C00_0120:
	int16 bx_35 = DPB(ax, 0x32, 0, 8)
	word16 cx_39 = DPB(cx, 0xC8, 0, 8)
	Eq_40 rLoc2_40 = 0
l0C00_0129:
	ds->w020A = bx_35;
	Eq_44 rLoc3_46 = (real64) ds->w020A
	Eq_48 rLoc4_49 = rLoc2_40 * rLoc2_40 * (real64) ds->w01F8
	real64 rLoc5_52 = cos(rLoc3_46)
	real64 rLoc7_55 = rLoc7 * rLoc7
	Eq_44 rLoc6_57 = sin(rLoc3_46) * rLoc7_55 * rLoc4_49
	ds->w0204 = 0xFFB5;
	Eq_44 rLoc4_64 = rLoc4_49 * (rLoc5_52 * (rLoc7_55 * rLoc7_55))
	fn0C00_01B9(ax_18, &Eq_8::w0200, 0x32, ds, 0x9000, rLoc4_64, rLoc6_57, rLoc4_64)
	ds->w0204 = 0xFFE7;
	fn0C00_01B9(ax_18, &Eq_8::w0200, 0x32, ds, 0x9000, rLoc6_57, rLoc4_64, rLoc3_46)
	rLoc7 = rLoc6_57;
	rLoc2_40 = rLoc2_40 + ds->t01F0;
	cx_39 = cx_39 - 0x0001;
	branch cx_39 != 0x0000 l0C00_0129
l0C00_0167:
fn0C00_0100_exit:
}

void fn0C00_01B9(word16 bp, Eq_75 Eq_8::*si, byte bl, Eq_8 * ds, Eq_78 * fs, Eq_44 rArg0, Eq_44 rArg1, Eq_44 rArg2)
{
	Eq_100 rArg0_11 = rArg1 + (real64) (ds->*si).w0000;
	(ds->*si).t0008 = (int16) ((rArg0 + (real64) (ds->*si).w0000) * ((((rArg2 + (real64) (ds->*si).w0004) + (real64) (ds->*si).w0006) / (real64) (ds->*si).w0004) * rArg0_11) + (real64) (ds->*si).w0006);
	Eq_137 rArg2_23 = rArg0_11 + (real64) (ds->*si).w0000;
	if (bp != 0x0000)
		rArg2_23 = -rArg2_23;
	(ds->*si).w0006 = (int16) rArg2_23;
	SEQ(fs, Mem30[ds:si + 0x0006:word16])[(word16) ((ds->*si).w0000 *u (ds->*si).t0008) * 0x0002] = bl;
	return;
}

