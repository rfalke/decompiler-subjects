// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_287/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 bx, byte cl, byte ch, Eq_48 * ds)
{
	bios_video_set_mode(0x13);
	__outb(0x03C8, (byte) bx);
	word16 ax_12 = bx;
	word32 dx_ax_17 = SEQ(0x03C9, bx);
	uint8 dh_18 = 0x03;
	word16 cx_23 = DPB(cx, ch + 0x01, 8, 8);
	do
	{
		uint16 dx_35 = dx_ax_17 % dh_18;
		dh_18 = SLICE(dx_35, byte, 8);
		uint16 ax_39 = SEQ(dx_35, ax_12) /u dh_18;
		bcu8 al_43 = (byte) (SLICE(ax_39, byte, 8) *u (byte) ax_39);
		if (al_43 >u 0x3F)
			al_43 = 0x3F;
		__outb(dx_35, al_43);
		ax_12 = ax_12 + 0x0001;
		dx_ax_17 = SEQ(dx_35, ax_12);
		cx_23 = cx_23 - 0x0001;
	} while (cx_23 != 0x0000);
	ds->w02FE = 0x4040;
	Eq_51 bx_58 = 0x4000;
	Eq_51 ax_138 = 0x3FFB;
	Eq_51 si_133 = 0x3FFB;
	Eq_57 Eq_48::*di_68 = Eq_48::a0300;
	word16 cx_70 = DPB(cx_23, 0xFE, 0, 8);
	do
	{
		int32 dx_ax_76 = ax_138 *s 0x3FFB;
		ax_138 = __shrd((word16) dx_ax_76, SLICE(dx_ax_76, word16, 16), 0x0D) - bx_58;
		byte ah_83 = SLICE(ax_138, byte, 8);
		(ds->*di_68).b0000 = ah_83;
		(ds->*di_68).b0000 = ah_83;
		bx_58 = si_133;
		si_133 = ax_138;
		di_68 = di_68 + 1;
		cx_70 = cx_70 - 0x0001;
	} while (cx_70 != 0x0000);
	do
	{
		Eq_85 Eq_48::*di_143 = Eq_48::a03FE;
		Eq_51 si_144 = si_133.u0;
		word16 bx_146 = 0x008C;
		do
		{
			word16 cx_175 = 0x0140;
			do
			{
				word32 dx_ax_211 = (word32) ax_138;
				word16 bp_194 = cx_175;
				word16 dx_212 = SLICE(dx_ax_211, word16, 16);
				byte dl_213 = SLICE(dx_ax_211, byte, 16);
				word16 cx_214 = 0x0600;
				uint8 cl_216 = 0x00;
				ax_223 = ax_138;
				do
				{
					word16 bx_220;
					Eq_51 ax_223;
					word16 cx_253 = cx_214 + 0x0001;
					Eq_98 Eq_48::*bx_234 = DPB((bx_220 << cl_216) - si_460, 0x00, 8, 8);
					Eq_51 bx_239 = DPB((bp_194 << cl_216) + si_460, 0x00, 8, 8);
					cl_216 = (byte) cx_253;
					dl_213 = dl_213 + (Mem89[ds:DPB(DPB(ax_223, (Mem89[ds:bx_234 + 0x02BE:byte] - Mem89[ds:bx_234 + 0x02FE:byte]) + Mem89[ds:bx_239 + 0x02BE:byte], 0, 8), 0x00, 8, 8) + 0x02BE:byte] >> cl_216);
					byte ch_254 = SLICE(cx_253, byte, 8);
					ax_223 = bx_239;
					bp_194 = bx_220;
					bx_220 = bp_194;
					dx_212 = DPB(dx_212, dl_213, 0, 8);
					cx_214 = DPB(cx_253, ch_254 - 0x01, 8, 8);
				} while (ch_254 != 0x01);
				int8 al_267 = (byte) dx_212;
				Eq_143 al_269 = al_267 >> 0x01;
				if (al_267 >> 0x01 < 0x00)
					al_269 = -(al_267 >> 0x01);
				(ds->*di_143).t0000 = al_269;
				si_144 = si_460;
				bx_146 = bx_220;
				di_143 = di_143 + 1;
				cx_175 = cx_175 - 0x0001;
				Eq_51 si_460 = si_144;
				bx_220 = bx_146;
			} while (cx_175 != 0x0000);
			bx_146 = bx_220 - 0x0001;
		} while (bx_146 != 0x0000);
		Eq_172 cx_323 = DPB(cx_175, 0x02, 8, 8) + 0x01FE;
		do
		{
			Mem342[ss:fp - 0x0018:word16] = 0x0141;
			word16 si_357 = (cx_323 >>u 0x0001) + si_144;
			int16 cx_363 = (int16) (ds->*(si_357 & 0x00FF)).b02BE;
			word16 di_366 = ((int16) Mem342[ds:cx_323 + 0x0000:byte] - cx_363 >> 0x0001) + (word16) (((int16) Mem342[ds:(si_357 & 0x00FF) + 0x02FE:byte] >> 0x0001) *s 0x0141);
			word16 cx_369 = DPB(cx_363, 0x08, 0, 8);
			do
			{
				byte ch_376 = 0x08;
				word16 cx_377 = DPB(cx_369, 0x08, 8, 8);
				do
				{
					(ds->*di_366).b5C1E = (ds->*di_366).b5C1E + 0x01;
					ch_376 = ch_376 - 0x01;
					di_366 = di_366 + 1;
					cx_377 = DPB(cx_377, ch_376, 8, 8);
				} while (ch_376 != 0x00);
				di_366 = di_366 + 312;
				cx_369 = cx_377 - 0x0001;
			} while (cx_377 != 0x0001);
			cx_323 = cx_323 - 0x0001;
		} while (cx_323 != 0xFE02);
		word16 cx_411 = DPB(cx_323, 0xAF, 8, 8);
		Eq_249 Eq_256::*di_412 = Eq_256::a2580;
		byte Eq_48::*si_413 = Eq_48::a03FE;
		do
		{
			(0xA000->*di_412).t0000 = ds->*si_413 + (0xA000->*di_412).t0000 >>u 0x01;
			si_413 = si_413 + 1;
			di_412 = di_412 + 1;
			cx_411 = cx_411 - 0x0001;
		} while (cx_411 != 0x0000);
		int16 ax_444 = (int16) __inb(0x60);
		si_133 = si_460;
		ax_138 = ax_444 - 0x0001;
	} while (ax_444 != 0x0001);
	__syscall(0x10);
	return;
}

