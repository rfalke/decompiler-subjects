// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_262/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_51 si)
{
	bios_video_set_mode(0x13);
	Eq_7 Eq_19::*bx_19 = Eq_19::a0040;
	do
	{
		ui16 ax_25 = bx_19 << 0x0002;
		(0x7000->*bx_19).t0000 = (((byte) ax_25 & SLICE(ax_25, byte, 8)) <u 0xE0) << 0x07;
		Eq_23 ax_41 = bx_19 << 0x0001;
		int8 al_42 = (byte) ax_41;
		int16 ax_44 = al_42 *s al_42;
		Mem51[0x6000:ax_41 + 0x0000:word16] = (DPB(ax_44, SLICE(ax_44, byte, 8) - 0x40, 8, 8) ^ SLICE((int32) ((int16) ((byte) (&bx_19->t0000))), word16, 16)) >> 0x0006;
		bx_19 = bx_19 + 1;
	} while (bx_19 != &Eq_19::tFFFFFFC0);
	do
	{
		si = si + 0x0002;
		Eq_54 Eq_43::*di_151 = &Eq_43::t0280;
		do
		{
			byte dh_100 = SLICE(si << 0x0007, byte, 8);
			word16 bp_121 = Mem51[0x6000:si + 0x0000:word16] << 0x0006;
			byte dh_102 = dh_100 + 0x59;
			word16 dx_103 = DPB(si << 0x0007, dh_100 + 0x59, 8, 8);
			byte ah_105 = 0xFF;
			word16 cx_108 = 0x0080;
			byte cl_109 = 0x80;
			Eq_60 ch_110 = 0x00;
			do
			{
				Eq_60 Eq_19::*bx_125 = DPB(bp_121, dh_102, 0, 8);
				byte al_127 = cl_109 & ah_105;
				if (Mem51[0x7000:bx_125 + 0x0000:byte] == ch_110)
				{
					al_127 = 0x00;
					ah_105 = 0x00;
				}
				Mem138[0x8000:bx_125 + 0x0000:byte] = Mem51[0x8000:bx_125 + 0x0000:byte] + al_127;
				Mem140[0x8000:bx_125 + 0x0000:byte] = Mem138[0x8000:bx_125 + 0x0000:byte] >>u 0x01;
				dx_103 = dx_103 + (0x6000->*di_151).w0000;
				cx_108 = cx_108 - 0x0001;
				dh_102 = SLICE(dx_103, byte, 8);
				bp_121 = bp_121 + (0x6000->*di_151).w0000;
				cl_109 = (byte) cx_108;
				ch_110 = SLICE(cx_108, byte, 8);
			} while (cx_108 != 0x0000);
			word16 di_150 = di_151 - 0x0001;
			di_151 = di_150 - 0x0001;
		} while (di_150 != 0xFF81);
		byte Eq_178::*bp_154 = &Eq_178::b0181;
		do
		{
			word16 dx_168 = Mem140[0x6000:si + 0x0000:word16];
			byte dh_170 = SLICE(dx_168 << 0x0005, byte, 8);
			byte dh_172 = dh_170 + 0x10;
			word16 dx_173 = DPB(dx_168 << 0x0005, dh_170 + 0x10, 8, 8);
			bcu8 bl_175 = 0xC7;
			int16 cx_177 = 0x0000;
			do
			{
				Eq_155 Eq_19::*ax_204 = DPB(si >>u 0x0001, dh_172, 8, 8);
				cx_177 = cx_177 + 0x0001;
				int16 ax_209 = -(int16) (0x7000->*ax_204).b0000;
				int16 ax_214 = SEQ((int32) (ax_209 << 0x0005) % cx_177, ax_209 << 0x0005) / cx_177;
				bcu8 ch_194 = SLICE(cx_177, byte, 8);
				bcu8 al_216 = (byte) (ax_214 + 0x0064);
				byte ah_218 = SLICE(ax_214 + 0x0064, byte, 8);
				if (ax_214 <= 0xFF9D && al_216 <u bl_175)
				{
					bl_175 = (byte) (ax_214 + 0x0064);
					int16 ax_260 = (int16) (((al_216 ^ ah_218) >>u 0x02) + (0x8000->*ax_204).b0000 - 0x40);
					byte dl_253 = bl_175 - bl_175;
					int16 di_255 = (ax_214 + 0x0064) *s 0x0140;
					byte al_266 = (((byte) ax_260 & ~SLICE(ax_260, byte, 8)) >>u 0x03) + 0x10;
					do
					{
						bp_154[di_255] = al_266;
						word16 di_275 = ~di_255;
						bp_154[di_275] = al_266;
						di_255 = ~di_275 + 0x0140;
						dl_253 = dl_253 - 0x01;
					} while (dl_253 != 0x00);
				}
				word16 dx_234 = dx_173 + bp_154 + bp_154;
				dx_173 = dx_234 - 0x0140;
				dh_172 = SLICE(dx_234 - 0x0140, byte, 8);
			} while (ch_194 <u 0x01);
			bp_154 = bp_154 - 0x0001;
		} while (bp_154 != &Eq_178::bFFFFFFBF);
	} while (__inb(0x60) != 0x01);
	return;
}

