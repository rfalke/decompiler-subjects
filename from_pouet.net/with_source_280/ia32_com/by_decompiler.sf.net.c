// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_280/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte bl, Eq_41 * ds)
{
	bios_video_set_mode(0x13);
	Eq_7 Eq_41::*bx_6 = DPB(bx, 0xF0, 8, 8);
	Eq_11 cx_15 = 0x0100;
	bx_14 = bx_6;
	do
	{
		Eq_7 Eq_41::*bx_14;
		ss->t0200 = cx_15;
		Eq_17 rLoc1_19 = (real64) ss->t0200 * ss->t01F8;
		Eq_24 rLoc2_22 = sin(rLoc2) * (real64) ss->w01FC;
		rLoc2 = sin(rLoc1_19 + rLoc1_19) * (real64) ss->w01FE;
		(ds->*bx_14).w0000 = (int16) (rLoc2_22 + rLoc2);
		word16 bx_32 = &bx_14->w0000;
		cx_15 = cx_15 - 0x0001;
		bx_14 = bx_32 + 0x0001;
		uint8 bl_35 = (byte) (bx_32 + 0x0001);
		uint8 ch_39 = SLICE(cx_15, byte, 8);
	} while (cx_15 != 0x0000);
	__outb(0x03C8, 0x13);
	uint8 ah_41 = 0x00;
	Eq_65 Eq_41::*si_47 = Eq_41::a01E9;
	byte bh_48 = 0x04;
	ui16 bx_105 = DPB(bx_32 + 0x0001, 0x04, 8, 8);
	do
	{
		byte cl_64 = 0x40;
		do
		{
			__outb(0x03C9, bl_35 >>u 0x01);
			__outb(0x03C9, ah_41 >>u 0x01);
			__outb(0x03C9, ch_39 >>u 0x01);
			bl_35 = bl_35 + (ds->*si_47).b0000;
			bx_105 = DPB(bx_105, bl_35, 0, 8);
			ah_41 = ah_41 + (ds->*si_47).b0001;
			ch_39 = ch_39 + (ds->*si_47).b0002;
			cl_64 = cl_64 - 0x01;
		} while (cl_64 != 0x00);
		bh_48 = bh_48 - 0x01;
		ch_39 = ch_39 - (ds->*si_47).b0002;
		ah_41 = ah_41 - (ds->*si_47).b0001;
		bl_35 = bl_35 - (ds->*si_47).b0000;
		si_47 = si_47 + 1;
		bx_105 = DPB(bx_105, bh_48, 8, 8);
	} while (bh_48 != 0x00);
	do
	{
		do
			;
		while (((byte) __inw(0x03DA) & 0x08) != 0x00);
		do
			;
		while (((byte) __inw(0x03DA) & 0x08) == 0x00);
		byte Eq_213::*di_133 = &Eq_213::b0000;
		word16 dx_136 = 0x00C8;
		do
		{
			word16 cx_150 = 0x0140;
			do
			{
				word16 ax_171 = cx_150 + (word16) ss->t01F8;
				word16 wLoc02_168 = (ds.*bx_6)[DPB(dx_136 - ((word16) ss->t01F8 * 0x0002 - bx_105) + cx_150 - (word16) ss->t0200, 0x00, 8, 8) * 0x0002 / 0x0004];
				word16 ax_175 = __rcl(ax_171, 0x01, cond(ax_171));
				ui16 bx_189 = DPB(cx_150, 0x00, 8, 8);
				ui16 bx_196 = DPB(bx_189 * 0x0002 + (ds.*bx_6)[(bx_189 * 0x0002) / 0x0004] + dx_136 - cx_150 + ss->t0204, 0x00, 8, 8);
				0xA000->*di_133 = (byte) (wLoc02_168 + (ds.*bx_6)[(DPB(((word16) ss->t0200 + dx_136) - ax_175, 0x00, 8, 8) * 0x0002) / 0x0004] + (ds.*bx_6)[(bx_196 * 0x0002) / 0x0004] >>u 0x0003);
				bx_105 = bx_196 * 0x0002;
				di_133 = di_133 + 1;
				cx_150 = cx_150 - 0x0001;
			} while (cx_150 != 0x0000);
			dx_136 = dx_136 - 0x0001;
		} while (dx_136 != 0x0000);
		ss->t0204 = ss->t0204 - 0x00000001;
		ss->t0200.u1 = Mem212[ss:0x0200:byte].u1;
		ss->t01F8 = ss->t01F8 - 0x01;
	} while (__inb(0x60) != 0x01);
	return;
}

