// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_190/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_36 * ds)
{
	bios_video_set_mode(0x13);
	__outb(0x03C8, 0x00);
	byte al_11 = 0x00;
	do
	{
		__outb(0x03C9, al_11);
		al_11 = al_11 + 0x01;
	} while (al_11 != 0x00);
	byte ah_19 = SLICE(cs, byte, 8);
	Eq_23 * ax_21 = DPB(cs, ah_19 + 0x10, 8, 8);
	Eq_23 * ax_24 = DPB(cs, ah_19 + 0x20, 8, 8);
	Eq_31 Eq_23::*bx_30 = Eq_23::a0000;
	do
	{
		rLoc2 = sin(rLoc2) * (real64) ds->ptr01C6;
		(ax_24->*bx_30).w0000 = (int16) rLoc2;
		(ax_21->*bx_30).w0000 = 0x0000;
		word16 bx_48 = &bx_30->w0000;
		bx_30 = bx_48 + 0x0001;
	} while (bx_48 != 0x0001);
	Eq_56 Eq_36::*di_55 = &Eq_36::t010A;
	do
	{
		word16 si_66 = (ds->*di_55).w0000;
		byte Eq_23::*bx_67 = Eq_23::a0000;
		int8 bl_68 = 0x00;
		int8 bh_69 = 0x00;
		do
		{
			if (bh_69 *s bh_69 + bl_68 *s bl_68 <=u 0x09C3)
				bx_67[si_66] = 0xC9;
			bx_67 = bx_67 + 1;
			bl_68 = (byte) bx_67;
			bh_69 = SLICE(bx_67, byte, 8);
		} while (bx_67 != Eq_23::a0000);
		word16 di_91 = di_55 - 0x0001;
		di_55 = di_91 - 0x0001;
	} while (di_91 != 0xFF01);
	do
	{
		byte Z_95 = fn0C00_0171(0xA000, ds, ax_21, ax_24);
		byte al_96;
		bios_kbd_check_keystroke(out al_96);
	} while (Z_95);
	bios_video_set_mode(0x03);
	return;
}

byte fn0C00_0171(Eq_92 * es, Eq_36 * ds, Eq_23 * fs, Eq_23 * gs)
{
	Eq_38 Eq_23::*bx_4 = ds->ptr01C6;
	ds->w01CE = (gs->*bx_4).w0000;
	word16 si_24 = (gs->*bx_4).w4000;
	word16 dx_107 = 0x0000;
	word16 bp_106 = 0x0000;
	byte Eq_92::*di_105 = &Eq_92::b0000;
	word16 cx_110 = 0x00C8;
	do
	{
		word16 cx_50 = 0x0140;
		di_54 = di_105;
		bp_55 = bp_106;
		dx_56 = dx_107;
		do
		{
			byte Eq_92::*di_54;
			word16 bp_55;
			word16 dx_56;
			dx_56 = dx_56 + ds->w01CE;
			bp_55 = bp_55 + si_24;
			Eq_140 bx_119 = DPB(bp_55, SLICE(dx_56, byte, 8), 0, 8);
			byte al_121 = 0x14;
			do
			{
				if (Mem7[fs:bx_119 + Mem7[ds:0x01CC:word16]:byte] != 0x00)
					break;
				bx_119 = bx_119 * 0x0002;
				al_121 = al_121 - 0x04;
			} while (al_121 != 0x00);
			es->*di_54 = al_121;
			di_54 = di_54 + 1;
			cx_50 = cx_50 - 0x0001;
		} while (cx_50 != 0x0000);
		di_105 = di_105 + 0x0140;
		bp_106 = bp_106 - ds->w01CE;
		dx_107 = dx_107 + si_24;
		cx_110 = cx_110 - 0x0001;
	} while (cx_110 != 0x0000);
	ds->b01C7 = ds->b01C7 + 0x01;
	byte v23_113 = ds->b01CD + 0x04;
	ds->b01CD = v23_113;
	return cond(v23_113);
}

