// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_244/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, byte bl, Eq_52 * ds)
{
	bios_video_set_mode(0x13);
	do
	{
		cx = cx - 0x0001;
		uint8 cl_13 = (byte) cx;
	} while (cx != 0x0000);
	do
	{
		__outb(0x03C8, cl_13);
		Eq_17 al_17 = cl_13 >>u 0x01;
		__outb(0x03C9, al_17);
		uint16 ax_18 = al_17 *u al_17;
		ui8 al_20 = (byte) (ax_18 >>u 0x0007);
		__outb(0x03C9, al_20);
		Eq_32 al_24 = al_20 * 0x02 + (ax_18 >>u 0x0007 <u 0x0000);
		__outb(0x03C9, al_24);
		cx = cx - 0x0001;
		word16 ax_104 = DPB(ax_18 >>u 0x0007, al_24, 0, 8);
		cl_13 = (byte) cx;
		byte ch_261 = SLICE(cx, byte, 8);
	} while (cx != 0x0000);
	do
	{
		word16 Eq_52::*si_106 = &Eq_52::w01FE;
		byte Eq_52::*bx_79 = DPB(bx, 0x03, 8, 8);
		do
		{
			ds->*bx_79 = ch_261;
			bx_79 = bx_79 + 1;
		} while (bx_79 != &Eq_52::b0000);
		do
		{
			int32 dx_ax_111 = (int32) DPB(ax_104, ds->b013F, 0, 8);
			int8 bl_107 = 0xE2;
			uint16 dx_113 = SLICE(dx_ax_111, word16, 16);
			word16 cx_118 = 0x0C0C;
			Eq_72 cl_119 = 0x0C;
			uint8 ch_120 = 0x0C;
			int16 di_121 = (byte) dx_ax_111 *s 0xE2;
			do
			{
				int16 bx_135 = (int16) bl_107;
				word16 dx_139 = dx_113 - bx_135 - bx_135;
				uint16 dx_142 = SEQ(dx_139, dx_139) % ch_120;
				uint8 ch_146 = __xadd(ch_120, (byte) (SEQ(dx_142, dx_139) /u ch_120));
				Eq_85 bh_168 = -(ch_146 >>u 0x01);
				int16 di_138 = di_121 + 0xFFF6;
				word16 cx_148 = DPB(cx_118, ch_146 >>u 0x01, 8, 8);
				word16 si_165 = 0x0000;
				word16 bx_169 = DPB(bx_135, bh_168, 8, 8) + 0x9660;
				word16 di_171 = di_138 + bh_168 *s ds->b0160;
				do
				{
					int16 dx_181 = (int16) bh_168;
					si_165 = si_165 - dx_181 - dx_181;
					uint8 cl_191 = __xadd(cl_119, (byte) (SEQ(SEQ(dx_181, si_165) % cl_119, si_165) /u cl_119));
					di_171 = di_171 + 0x0019;
					word16 ax_196 = (cl_191 >>u 0x01) *s ds->b018E + di_171;
					cl_119 = cl_191 >>u 0x01;
					byte ah_199 = SLICE(ax_196 << 0x0003, byte, 8);
					if (ax_196 << 0x0003 <u 0x0000)
						ah_199 = ah_199 & cl_191 >>u 0x01;
					ds->b0000 = ah_199;
					bh_168.u0 = bh_168.u0;
					bx_169 = DPB(bx_169, bh_168, 8, 8);
				} while (bh_168 < ch_146 >>u 0x01);
				di_121 = di_138;
				si_106 = si_320;
				dx_113 = dx_142;
				cx_118 = cx_148;
				cl_119 = (byte) cx_148;
				ch_120 = SLICE(cx_148, byte, 8);
				bl_107 = (byte) (bx_135 + 0x0001);
				word16 Eq_52::*si_320 = si_106;
			} while (bl_107 < 0x1E);
			word16 ax_235 = ds->*si_320;
			ds->w017C = ax_235 + 0x0CCE;
			si_106 = si_320 + 1;
			ax_104 = ax_235 + 0x0CCE;
		} while (si_106 != &Eq_52::w01EC);
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		Eq_183 di_253 = 0xF9E0;
		word16 Eq_52::*si_254 = &Eq_52::wFFFFF9E0;
		do
		{
			word16 cx_259 = 0x0080;
			ch_261 = 0x00;
			while (cx_259 != 0x0000)
			{
				Mem268[0xA000:di_253 + 0x0000:word16] = Mem244[ds:si_254 + 0x0000:word16];
				cx_259 = cx_259 - 0x0001;
				si_254 = si_254 + 1;
				di_253 = di_253 + 0x0002;
				ch_261 = SLICE(cx_259, byte, 8);
			}
			di_253 = di_253 - 0x0040;
		} while (di_253 >=u 0x0000);
		word16 ax_280 = ds->w013E;
		int8 ah_281 = SLICE(ax_280, byte, 8);
		ds->b013F = (byte) (DPB(0x03DA, ah_281, 0, 8) - DPB(ax_280, fn0C00_01E7(&Eq_52::b018E, 0x05, ah_281 >> 0x02, ds), 0, 8));
		word16 ax_297 = ds->w015F;
		ds->b0160 = ds->b0160 - fn0C00_01E7(&Eq_52::b018D, 0x05, SLICE(ax_297, byte, 8) >> 0x05, ds);
		byte al_305 = __inb(0x60);
		bx = 0x018D;
		ax_104 = DPB(ax_297, al_305 - 0x01, 0, 8);
	} while (al_305 != 0x01);
	bios_video_set_mode(0x03);
	fn0C00_01E7(&Eq_52::b018D, 0x05, 0x00, ds);
	return;
}

byte fn0C00_01E7(int8 Eq_52::*bx, uint8 cl, Eq_221 ah, Eq_52 * ds)
{
	ds->*bx = ds->*bx + ah;
	return ds->*bx >> cl;
}

