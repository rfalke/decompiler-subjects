// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_278/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte bl, Eq_21 * ds)
{
	bios_video_set_mode(0x13);
	Eq_7 Eq_21::*bx_6 = DPB(bx, 0xF0, 8, 8);
	Eq_11 cx_13 = 0x0100;
	bx_12 = bx_6;
	do
	{
		Eq_7 Eq_21::*bx_12;
		ss->t0200 = cx_13;
		(ds->*bx_12).w0000 = (int16) (sin((real64) ss->t0200 * ds->t01F8) * ds->t01FC);
		word16 bx_22 = &bx_12->w0000;
		cx_13 = cx_13 - 0x0001;
		bx_12 = bx_22 + 0x0001;
		byte bl_25 = (byte) (bx_22 + 0x0001);
		byte ch_29 = SLICE(cx_13, byte, 8);
	} while (cx_13 != 0x0000);
	__outb(0x03C8, 0x13);
	byte ah_31 = 0x00;
	uint16 di_35 = 0x0000;
	byte bh_38 = 0x04;
	do
	{
		byte cl_56 = 0x40;
		do
		{
			__outb(0x03C9, bl_25);
			__outb(0x03C9, ah_31);
			__outb(0x03C9, ch_29);
			Eq_66 Eq_21::*si_69 = (di_35 >>u 0x0004 & 0x000C) + 0x01E7;
			bl_25 = bl_25 + (ds->*si_69).b0000;
			ah_31 = ah_31 + (ds->*si_69).b0001;
			ch_29 = ch_29 + (ds->*si_69).b0002;
			di_35 = di_35 + 0x0001;
			cl_56 = cl_56 - 0x01;
		} while (cl_56 != 0x00);
		ch_29 = ch_29 - (ds->*si_69).b0002;
		ah_31 = ah_31 - (ds->*si_69).b0001;
		bl_25 = bl_25 - (ds->*si_69).b0000;
		bh_38 = bh_38 - 0x01;
	} while (bh_38 != 0x00);
	do
	{
		byte Eq_190::*di_114 = &Eq_190::b0000;
		word16 dx_115 = 0x0000;
		do
		{
			word16 cx_129 = 0x0140;
			do
			{
				ss->w0204 = ((ds.*bx_6)[DPB(DPB(dx_115, (byte) dx_115 >>u 0x01, 0, 8) + cx_129 + ss->t0200, 0x00, 8, 8) * 0x0002 / 0x0004] >> 0x0002) + dx_115;
				word16 bx_170 = (word16) ss->b0208;
				0xA000->*di_114 = (byte) (((((ds.*bx_6)[DPB(dx_115 + ss->t0200, 0x00, 8, 8) * 0x0002 / 0x0004] >> 0x0002) + cx_129 ^ ss->w0204) & 0x001F) + (ds.*bx_6)[(DPB(((word16) ss->b0208 + cx_129) + dx_115, 0x00, 8, 8) * 0x0002) / 0x0004] + (ds.*bx_6)[(DPB((word16) ss->b0209 + cx_129, 0x00, 8, 8) * 0x0002) / 0x0004] + (ds.*bx_6)[(DPB((DPB(bx_170, (byte) bx_170 + ss->b0209, 0, 8) + cx_129) + dx_115, 0x00, 8, 8) * 0x0002) / 0x0004] >>u 0x0003);
				di_114 = di_114 + 1;
				cx_129 = cx_129 - 0x0001;
			} while (cx_129 != 0x0000);
			dx_115 = dx_115 + 0x0001;
		} while ((byte) dx_115 != 0xC8);
		ss->b0208 = ss->b0208 + 0x02;
		ss->b0209 = ss->b0209 - 0x01;
		ss->t0200.u1 = Mem195[ss:0x0200:word32].u1;
	} while (__inb(0x60) != 0x01);
	return;
}

