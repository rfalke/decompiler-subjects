// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_169/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte cl, byte ah, Eq_15 * es, Eq_49 * ds)
{
	bios_video_set_mode(0x13);
	byte al_2 = 0x13;
	word16 ax_31 = DPB(ax, 0x13, 0, 8);
	while (true)
	{
		Eq_13 di_40 = 0x0400;
		word16 cx_44 = DPB(cx, 0xFA, 8, 8);
		while (cx_44 != 0x0000)
		{
			Mem49[es:di_40 + 0x0000:byte] = al_2;
			di_40 = di_40 + 0x0001;
			cx_44 = cx_44 - 0x0001;
		}
		Eq_13 di_101 = 0x0400;
		do
		{
			Eq_35 rLoc2_62 = rLoc2 / 32;
			Eq_39 rLoc2_64 = cos(rLoc2_62);
			fn0C00_015E(fp - 0x0006, 0xFE00, di_131.u0, (byte) (fn0C00_0171(fp - 0x0006, 0xFE00, di_131, (byte) (ax_31 + 0x0001), es, ds, sin(rLoc2_62)) + 0x0001), es, ds);
			word16 ax_91 = fn0C00_0171(fp - 0x0006, 0xFE00, di_131, 0x04, es, ds, rLoc2_64);
			al_2 = __inb(0x60);
			rLoc2.u1 = 1;
			ax_31 = DPB(ax_91, al_2, 0, 8);
			if (al_2 == 0x01)
				msdos_terminate_program20();
			di_101.u0 = di_131.u0;
			Eq_13 di_131 = di_101;
		} while (di_131 <u 0x0340);
		Mem107[ss:fp - 0x000A:word16] = 0xA000;
		cx = DPB(cx_44, 0xFA, 8, 8);
		byte Eq_49::*si_113 = Eq_49::a0400;
		byte Eq_106::*di_114 = Eq_106::a0000;
		while (cx != 0x0000)
		{
			0xA000->*di_114 = ds->*si_113;
			si_113 = si_113 + 1;
			di_114 = di_114 + 1;
			cx = cx - 0x0001;
		}
	}
}

word16 fn0C00_015E(Eq_44 Eq_49::*bx, cups16 bp, word16 di, byte al, Eq_15 * es, Eq_49 * ds)
{
	byte Eq_15::*di_12 = di + (ds->*bx).w0000;
	do
	{
		es->*di_12 = al;
		Eq_129 Eq_15::*di_15 = di_12 + 1;
		(es->*di_15).b0000 = al;
		byte al_18 = al ^ 0x08;
		(es->*di_15).b0001 = al_18;
		(es->*di_15).b0002 = al_18;
		al = al_18 ^ 0x08;
		ax = DPB(ax, al_18 ^ 0x08, 0, 8);
		di_12 = di_15 + 0x013F;
	} while (&di_15->b0002 <u bp);
	return ax;
}

word16 fn0C00_0171(Eq_44 Eq_49::*bx, cups16 bp, Eq_13 di, byte al, Eq_15 * es, Eq_49 * ds, Eq_39 rArg0)
{
	(ds->*bx).w0000 = (int16) (rArg0 * (real64) (ds->*bx).w0004);
	return fn0C00_015E(bx, bp, di + 0x00AA, al, es, ds);
}

