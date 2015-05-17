// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_250/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 si, Eq_155 * ds)
{
	bios_video_set_mode(0x13);
	byte al_228 = (byte) &cs->a2000[0];
	do
	{
		word16 di_54 = 0x0000;
		do
		{
			Eq_12 al_61 = al_228 << 0x02;
			byte bh_60 = SLICE(di_54, byte, 8);
			(cs + 0x1000)->*di_54 = SLICE((bh_60 << 0x02) *s (bh_60 << 0x02) + al_61 *s al_61, byte, 8);
			byte word16::*bx_71 = di_54 & 0xF8F8;
			int8 al_73 = (cs + 0x1000)->*bx_71 + bx_71[si];
			int16 ax_74 = al_73 *s al_73;
			(cs + 0x2000)->*di_54 = SLICE(ax_74, byte, 8);
			al_228 = (byte) ax_74;
			di_54 = di_54 + 1;
		} while (di_54 != 0x0000);
		si = si + 0x0001 + 0x0040;
		byte Eq_99::*bp_201 = &Eq_99::b0140;
		do
		{
			int16 ax_98 = fn0C00_01E8(si);
			word16 si_102 = si + 0x0000;
			int16 ax_104 = fn0C00_01E8(si_102);
			int16 ax_109 = bp_201 - 0x00A0;
			ds->w01C2 = ((word16) (ax_104 *s ax_109) >> 0x0007) + ax_98;
			int32 dx_ax_120 = ax_98 *s ax_109;
			ds->w01C6 = -((word16) dx_ax_120 >> 0x0007) + ax_104;
			byte bl_107 = (byte) ax_104;
			word16 dx_122 = SLICE(dx_ax_120, word16, 16);
			byte dh_123 = SLICE(dx_ax_120, byte, 24);
			ui16 si_130 = si_102 << 0x0009;
			int16 cx_131 = 0x0000;
			bcu8 bh_135 = 0xC7;
			do
			{
				uint8 word16::*ax_152 = DPB(si_130, dh_123, 0, 8);
				cx_131 = cx_131 + 0x0001;
				word16 ax_159 = DPB(ax_152, (cs + 0x2000)->*ax_152, 8, 8);
				Eq_76 ax_167 = SEQ(SEQ(0x0000, ax_159 + 0x1900) % cx_131, ax_159 + 0x1900) / cx_131;
				byte dh_171 = SLICE(ax_159, byte, 8);
				bcu8 ch_149 = SLICE(cx_131, byte, 8);
				bcu8 al_168 = (byte) ax_167;
				byte ah_169 = SLICE(ax_167, byte, 8);
				bl_107 = dh_171;
				if (ax_167 <=u 0x00C7 && al_168 <u bh_135)
				{
					bh_135 = al_168;
					word16 si_244 = (ax_167 << 0x0006) + DPB(ax_167, ah_169, 0, 8) + 0x03E8;
					byte dl_245 = bh_135 - al_168;
					if (bl_107 == dh_171)
					{
						byte al_252 = ((cs + 0x1000)->*ax_152 >>u 0x04) + 0x13;
						do
						{
							bp_201[si_244] = al_252;
							si_244 = si_244 + 0x0140;
							dl_245 = dl_245 - 0x01;
						} while (dl_245 != 0x00);
					}
				}
				dx_122 = dx_122 + 0xFFFF;
				dh_123 = SLICE(dx_122, byte, 8);
				si_130 = si_130 + 0xFFFF;
			} while (ch_149 <u 0x02);
			bp_201 = bp_201 - 0x0001;
		} while (bp_201 != &Eq_99::b0000);
		Eq_174 Eq_155::*di_204 = Eq_155::a0000;
		word16 cx_208 = DPB(cx_131, 0xFA, 8, 8);
		do
		{
			Eq_179 v34_216 = (ds->*di_204).t03E8;
			(ds->*di_204).t03E8.u0 = 0x00;
			(0xA000->*di_204).t0000 = v34_216;
			word16 ax_219 = (word16) v34_216;
			di_204 = di_204 + 1;
			cx_208 = cx_208 - 0x0001;
		} while (cx_208 != 0x0000);
		word16 ax_226 = DPB(ax_219, __inb(0x60), 0, 8);
		al_228 = (byte) (ax_226 - 0x0001);
	} while (ax_226 != 0x0001);
	return;
}

word16 fn0C00_01E8(word16 si)
{
	int8 al_11 = (byte) (si << 0x0001);
	int16 ax_12 = al_11 *s al_11;
	return (DPB(ax_12, SLICE(ax_12, byte, 8) - 0x40, 8, 8) ^ SLICE((int32) ((int16) ((byte) (si + 0x0040))), word16, 16)) >> 0x0007;
}

