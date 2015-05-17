// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_342/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_5 * es, Eq_11 * ds)
{
	Eq_2 * fs_3 = fn0C00_012B(es);
	fn0C00_0344(es, ds);
	Eq_14 * es_5 = fn0C00_0138(ds);
	fn0C00_01CE();
	do
	{
		fn0C00_01AF(es_5, ds);
		fn0C00_01FE(ds);
		fn0C00_0251(es_5, ds);
		es_5 = fn0C00_02D9(ds, fs_3);
		fn0C00_02A6(es_5, ds);
		fn0C00_01A4(ds);
	} while (__inb(0x60) != 0x01);
	bios_video_set_mode(0x03);
	msdos_terminate_program20();
}

Eq_63 * fn0C00_012B(Eq_5 * es)
{
	byte Eq_5::*di_12 = Eq_5::a04E8;
	word16 cx_13 = 0x2FC9;
	while (cx_13 != 0x0000)
	{
		es->*di_12 = 0x00;
		di_12 = di_12 + 1;
		cx_13 = cx_13 - 0x0001;
	}
	return 0x0000;
}

Eq_79 * fn0C00_0138(Eq_11 * ds)
{
	bios_video_set_mode(0x13);
	__outb(0x03C8, 0x00);
	word16 cx_10 = 0x0300;
	do
	{
		__outb(0x03C9, 0x00);
		cx_10 = cx_10 - 0x0001;
	} while (cx_10 != 0x0000);
	__outw(0x03C9, 0x0604);
	__outw(0x03C9, 0x0014);
	__outw(0x03C9, 0xE317);
	__outw(0x03C9, 0x4013);
	__outw(0x03C4, 0x0F02);
	word32 Eq_130::*di_22 = Eq_130::a0000;
	word16 cx_23 = 0x4000;
	while (cx_23 != 0x0000)
	{
		0xA000->*di_22 = 0x00000000;
		di_22 = di_22 + 1;
		cx_23 = cx_23 - 0x0001;
	}
	fn0C00_017F(0x0000, ds);
	ds->t04E8.u0 = 0x8000;
	return 0xA000;
}

void fn0C00_017F(Eq_123 ax, Eq_11 * ds)
{
	ds->t04EA = ax;
	do
	{
		byte al_7 = __inb(0x03DA);
		ax = DPB(ax, al_7, 0, 8);
	} while ((al_7 & 0x08) == 0x00);
	do
	{
		byte al_13 = __inb(0x03DA);
		ax = DPB(ax_30, al_13, 0, 8);
		Eq_123 ax_30 = ax;
	} while ((al_13 & 0x08) != 0x00);
	__cli();
	word16 ax_19 = DPB(ax_30, 0x0C, 0, 8);
	__outw(0x03DA, ax_19);
	__outw(0x03DA, DPB(ax_19 + 0x0001, ds->t04EA, 8, 8));
	do
		;
	while ((__inb(0x03DA) & 0x08) == 0x00);
	return;
}

void fn0C00_01A4(Eq_11 * ds)
{
	Eq_123 v5_5 = ds->t04E8;
	ds->t04E8 = ds->t04EA;
	fn0C00_017F(v5_5, ds);
	return;
}

void fn0C00_01AF(Eq_14 * es, Eq_11 * ds)
{
	__outw(0x03C4, 0x0F02);
	word16 cx_21 = DPB(cx, 0x00, 8, 8);
	Eq_123 di_11 = ds->t04E8;
	byte dl_12 = 0xC8;
	do
	{
		cx_21 = DPB(cx_21, 0x14, 0, 8);
		while (cx_21 != 0x0000)
		{
			Mem32[es:di_11 + 0x0000:word32] = 0x00000000;
			di_11 = di_11 + 0x0004;
			cx_21 = cx_21 - 0x0001;
		}
		di_11 = di_11 + 0x0030;
		dl_12 = dl_12 - 0x01;
	} while (dl_12 != 0x00);
	return;
}

void fn0C00_01CE()
{
	__outb(0x03C8, 0x00);
	byte ah_13 = 0x00;
	word16 bx_17 = 0x0000;
	byte bl_16 = 0x00;
	byte bh_15 = 0x00;
	word16 cx_12 = 0x0040;
	do
	{
		fn0C00_01F4(0x03C9, bl_16, ah_13, bh_15);
		bx_17 = bx_17 + 0x0101;
		bl_16 = (byte) bx_17;
		bh_15 = SLICE(bx_17, byte, 8);
		ah_13 = ah_13 + 0x01;
		cx_12 = cx_12 - 0x0001;
	} while (cx_12 != 0x0000);
	byte bl_30 = 0x00;
	word16 cx_34 = 0x0040;
	do
	{
		fn0C00_01F4(0x03C9, bl_30, 0x00, 0x00);
		bl_30 = bl_30 + 0x01;
		cx_34 = cx_34 - 0x0001;
	} while (cx_34 != 0x0000);
	return;
}

void fn0C00_01F4(word16 dx, byte bl, byte ah, byte bh)
{
	__outb(dx, ah);
	__outb(dx, bh);
	__outb(dx, bl);
	return;
}

void fn0C00_01FE(Eq_11 * ds)
{
	Mem5[ds:0x04EC:word16] = Mem0[ds:0x04EC:word16] + 0x0006;
	ds->ptr04EC = ds->ptr04EC & 0x007F;
	Eq_278 Eq_11::*bx_10 = ds->ptr04EC;
	ui16 Eq_11::*di_11 = Eq_11::a04F0;
	word16 cx_12 = 0x0080;
	do
	{
		ds->*di_11 = (int16) (byte) ((int16) (ds->*bx_10).b0461 *s 0x0008 >>u 0x0007) << 0x0007;
		di_11 = di_11 + 1;
		bx_10 = bx_10 + 0x0001 & 0x007F;
		cx_12 = cx_12 - 0x0001;
	} while (cx_12 != 0x0000);
	word16 bx_33 = Mem23[ds:0x04EC:word16] + 0x0020 & 0x007F;
	byte Eq_11::*di_36 = Eq_11::a05F0;
	word16 cx_38 = DPB(cx_12, 0x80, 0, 8);
	do
	{
		ds->*di_36 = (byte) (int16) (byte) ((int16) (ds->*bx_33).b0461 *s 0x0016 >>u 0x0007);
		di_36 = di_36 + 1;
		bx_33 = bx_33 + 0x0001 & 0x007F;
		cx_38 = cx_38 - 0x0001;
	} while (cx_38 != 0x0000);
	return;
}

void fn0C00_0251(Eq_14 * es, Eq_11 * ds)
{
	word16 di_25 = Mem0[ds:0x04E8:word16] + 0x0A18;
	Eq_360 ah_103 = 0x01;
	word16 ax_104 = DPB(ax, 0x01, 8, 8);
	word16 bp_10 = 0x0004;
	byte Eq_11::*si_11 = &Eq_11::b0670;
	Eq_370 bx_102 = 0x0000;
	do
	{
		Mem37[ss:fp - 0x0004:word16] = 0x0670;
		word16 ax_42 = DPB(ax_104, 0x02, 0, 8);
		__outw(0x03C4, ax_42);
		word16 cx_44 = 0x0020;
		di_48 = di_25;
		bx_50 = bx_102;
		do
		{
			word16 di_48;
			Eq_370 bx_50;
			word16 di_61 = di_48 + Mem37[ds:bx_50 + 0x04F0:word16];
			byte dl_63 = Mem37[ds:(bx_50 >>u 0x0001) + 0x05F0:byte];
			word16 cx_67 = 0x0048;
			si_70 = si_11;
			do
			{
				byte Eq_11::*si_70;
				byte al_74 = ds->*si_70 + dl_63;
				es->*di_61 = al_74;
				si_70 = si_70 + 1;
				ax_42 = DPB(ax_42, al_74, 0, 8);
				di_61 = di_61 + 1 + 0x007F;
				cx_67 = cx_67 - 0x0001;
			} while (cx_67 != 0x0000);
			si_11 = si_11 + 0x0120;
			bx_50 = bx_50 + 0x0008;
			di_48 = di_48 + 0x0001;
			cx_44 = cx_44 - 0x0001;
		} while (cx_44 != 0x0000);
		ah_103 = ah_103 << 0x01;
		si_11 = &Eq_11::b0670;
		bx_102 = bx_102 + 0x0002;
		ax_104 = DPB(ax_42, ah_103, 8, 8);
		bp_10 = bp_10 - 0x0001;
	} while (bp_10 != 0x0000);
	return;
}

void fn0C00_02A6(Eq_14 * es, Eq_11 * ds)
{
	__outw(0x03C4, 0x0102);
	byte Eq_11::*si_2 = &Eq_11::b2A70;
	word16 ax_18 = 0x0102;
	Eq_448 ah_17 = 0x01;
	word16 di_16 = Mem0[ds:0x04E8:word16] + 0x5500;
	word16 bp_11 = 0x0004;
	do
	{
		word16 cx_28 = 0x0008;
		di_30 = di_16;
		si_32 = si_2;
		do
		{
			byte Eq_14::*di_30;
			byte Eq_11::*si_32;
			word16 cx_35 = 0x0052;
			do
			{
				es->*di_30 = ds->*si_32;
				di_30 = di_30 + 1;
				si_32 = si_32 + 1 + 0x0003;
				cx_35 = cx_35 - 0x0001;
			} while (cx_35 != 0x0000);
			di_30 = di_30 + 46;
			cx_28 = cx_28 - 0x0001;
		} while (cx_28 != 0x0000);
		ah_17 = ah_17 << 0x01;
		ax_18 = DPB(ax_18, ah_17, 8, 8);
		__outw(0x03C4, ax_18);
		si_2 = si_2 + 0x0001;
		bp_11 = bp_11 - 0x0001;
	} while (bp_11 != 0x0000);
	return;
}

Eq_497 * fn0C00_02D9(Eq_11 * ds, Eq_2 * fs)
{
	byte Eq_515::*di_11 = Eq_515::a2A70;
	byte Eq_11::*si_10 = Eq_11::a2A72;
	word16 cx_12 = 0x0A40;
	while (cx_12 != 0x0000)
	{
		cs->*di_11 = ds->*si_10;
		si_10 = si_10 + 1;
		di_11 = di_11 + 1;
		cx_12 = cx_12 - 0x0001;
	}
	word16 v11_20 = ds->w045F - 0x0001;
	ds->w045F = v11_20;
	if (v11_20 != 0x0000)
		return 0xA000;
	else
	{
		ds->w045F = 0x0004;
		Eq_530 gs_ax_59 = fs->t010C;
		Eq_533 * gs_60 = SLICE(gs_ax_59, selector, 16);
		word16 bx_62 = ((word16) Mem54[ds:Mem54[ds:0x04EE:word16] + 0x03BB:byte] << 0x0003) + (word16) gs_ax_59;
		Eq_546 Eq_515::*di_64 = &Eq_515::t2BB0;
		word16 cx_65 = 0x0008;
		do
		{
			int16 dx_75 = 0x0007;
			do
			{
				(cs->*di_64).t0000 = __bt((gs_60->*bx_62).w0000, dx_75) << 0x05;
				di_64 = di_64 + 1;
				dx_75 = dx_75 - 0x0001;
			} while (dx_75 >= 0x0000);
			di_64 = di_64 + 320;
			bx_62 = bx_62 + 1;
			cx_65 = cx_65 - 0x0001;
		} while (cx_65 != 0x0000);
		Mem95[ds:0x04EE:word16] = Mem84[ds:0x04EE:word16] + 0x0001;
		if (ds->t04EE >u 0x00A3)
			ds->t04EE.u0 = 0x0000;
		return 0xA000;
	}
}

void fn0C00_0344(Eq_5 * es, Eq_11 * ds)
{
	byte Eq_5::*di_16 = &Eq_5::b0670;
	word16 bp_18 = 0x0080;
	do
	{
		word16 cx_21 = 0x0048;
		do
		{
			es->*di_16 = ((((&ds->a0387[0])[-((cx_21 - 0x0001 >>u 0x0003) - 0x0008)] & 0x80000000 >>u (byte) (-((bp_18 - 0x0001 >>u 0x0002) - 0x001F))) == 0x00000000 ^ 0x01) << 0x06) + 0x29;
			di_16 = di_16 + 1;
			cx_21 = cx_21 - 0x0001;
		} while (cx_21 != 0x0000);
		bp_18 = bp_18 - 0x0001;
	} while (bp_18 != 0x0000);
	return;
}

