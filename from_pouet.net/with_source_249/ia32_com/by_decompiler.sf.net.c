// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_249/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte Eq_17::*di, byte bl, Eq_9 * ds)
{
	bios_video_set_mode(0x13);
	msdos_display_string(ds, 0x01EA);
	byte ah_8 = SLICE(cs, byte, 8);
	Eq_17 * ax_10 = DPB(cs, ah_8 + 0x10, 8, 8);
	Eq_17 * ax_13 = DPB(cs, ah_8 + 0x20, 8, 8);
	Eq_17 * ds_11 = ax_10;
	Eq_17 * es_139 = ax_13;
	byte Eq_17::*wLoc02_16 = &Eq_17::bFFFFA000;
	word16 ax_19 = 0x0000;
	uint8 ah_21 = 0x00;
	word16 cx_22 = 0x0000;
	do
	{
		ax_10->*di = 0x00;
		ax_13->*di = 0x00;
		di = di + 1;
		cx_22 = cx_22 - 0x0001;
	} while (cx_22 != 0x0000);
	__outb(0x03C8, 0x00);
	do
	{
		__outb(0x03C9, 0x00);
		Eq_58 al_43 = ah_21 >>u 0x02;
		__outb(0x03C9, al_43);
		__outb(0x03C9, -al_43 + 0x01);
		ah_21 = ah_21 + 0x01;
		ax_19 = DPB(ax_19, ah_21, 8, 8);
	} while (ah_21 != 0x00);
	Mem52[ss:fp - 0x0002:word16] = ax_19;
	word16 wLoc04_215 = cx_22;
	word16 wLoc08_219 = bx;
	do
	{
		Eq_84 Eq_17::*di_105 = Eq_17::a0000;
		cui16 cx_108 = 0x8000;
		do
		{
			int16 ax_118 = ((ds_11->*di_105).w0200 + (ds_11->*di_105).w0200 + (ds_11->*di_105).w0002 + (ds_11->*di_105).w0002 >> 0x0001) - (es_139->*di_105).w0000;
			(es_139->*di_105).w0000 = ax_118 - (ax_118 >> 0x0005);
			cx_108 = cx_108 - 0x0001;
			di_105 = di_105 + 1;
			byte ch_126 = SLICE(cx_108, byte, 8) + 0x01;
		} while (cx_108 != 0x0000);
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		ds_11 = es_139;
		es_139 = ds_11;
		word16 Eq_17::*si_141 = Eq_17::a0000;
		byte Eq_141::*di_144 = &Eq_141::b2D20;
		do
		{
			cx_108 = DPB(cx_108, ch_126 + 0x00, 8, 8);
			do
			{
				si_141 = si_141 + 1;
				int16 dx_169 = 0x0080 - (es_139->*si_141 - es_139->*si_141);
				byte dl_170 = (byte) dx_169;
				if (dx_169 < 0x0000)
				{
					dl_170 = 0x00;
					dx_169 = DPB(dx_169, 0x00, 0, 8);
				}
				if (dx_169 > 0x00FF)
					dl_170 = 0xFF;
				0xA000->*di_144 = dl_170;
				cx_108 = cx_108 - 0x0001;
				di_144 = di_144 + 1;
				ch_126 = SLICE(cx_108, byte, 8);
			} while (cx_108 != 0xFFFF);
			di_144 = di_144 + 64;
		} while (si_141 != Eq_17::a0000);
		word16 ax_206 = __rol(wLoc02_16 + 0x6784, 0x01);
		Mem217[ss:fp - 0x0006:word16] = 0x03C9;
		word16 cx_209 = wLoc04_215 + 0x0001;
		byte al_207 = (byte) ax_206;
		byte ch_210 = SLICE(cx_209, byte, 8);
		bcu8 cl_211 = (byte) cx_209;
		wLoc02_16 = ax_206;
		wLoc04_215 = cx_209;
		if ((cl_211 & 0x03) == 0x00)
			es_139->*ax_206 = es_139->*ax_206 + (al_207 & 0x07);
		byte Eq_141::*bx_237 = DPB(wLoc08_219, (byte) ((ch_210 & 0x03) *u 0x0A), 8, 8);
		if (cl_211 <=u 0x64)
		{
			Eq_221 di_258 = 0x6041;
			do
			{
				word16 cx_268 = 0x0040;
				do
				{
					if (0xA000->*bx_237 != 0x00)
						Mem297[ds_11:di_258 + 0x0000:byte] = Mem217[ds_11:di_258 + 0x0000:byte] + 0x01;
					bx_237 = bx_237 + 1;
					byte bh_284 = SLICE(bx_237, byte, 8);
					di_258 = di_258 + 0x0008;
					cx_268 = cx_268 - 0x0001;
				} while (cx_268 != 0x0000);
				bx_237 = DPB(bx_237, bh_284 + 0x01, 8, 8);
				di_258 = di_258 + 0x0600;
			} while (di_258 <u 0x65BF);
		}
	} while ((int16) __inb(0x60) != 0x0001);
	bios_video_set_mode(0x03);
	msdos_terminate_program20();
}

