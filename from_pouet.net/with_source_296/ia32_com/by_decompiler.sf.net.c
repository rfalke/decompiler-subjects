// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_296/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, byte Eq_17::*di, Eq_63 * ds)
{
	bios_video_set_mode(0x13);
	byte ah_253 = 0x00;
	do
	{
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		do
		{
			byte al_65 = 0x9000->*di;
			0x9000->*di = ah_253;
			0xA00A->*di = al_65;
			di = di + 1;
			cx = cx - 0x0001;
		} while (cx != 0x0000);
		di = &Eq_17::b0000;
		do
		{
			cx = DPB(cx, 0x30, 0, 8);
			do
			{
				int16 bp_119 = 0x0020;
				do
				{
					int16 cx_135 = (cx_303 - 0x0018) *s bp_119;
					int16 bx_139 = bp_119 *s 0x0018;
					int16 dx_142 = bp_119 *s 0xFFF4;
					uint8 al_146 = (byte) di;
					int16 cx_136 = cx_135 >> 0x0005;
					int16 bx_140 = bx_139 >> 0x0005;
					int16 dx_144 = (dx_142 >> 0x0005) + 0x0024;
					Eq_61 al_147 = al_146 >>u 0x02;
					if (al_146 >>u 0x02 >= 0x03)
					{
						cx_136 = -(cx_135 >> 0x0005);
						bx_140 = -(bx_139 >> 0x0005);
						dx_144 = -((dx_142 >> 0x0005) + 0x0024);
						al_147 = (al_146 >>u 0x02) - 0x03;
					}
					if (!__bt(di, 0x01))
						bx_140 = -bx_140;
					ds->w03DA = cx_136;
					ds->w03DC = bx_140;
					ds->w03DE = dx_144;
					real64 rLoc1_165 = (real64) ds->w03DE;
					real64 rLoc2_166 = (real64) ds->w03DC;
					real64 rLoc3_167 = (real64) ds->w03DA;
					if (!__bt(di, 0x00))
					{
						rLoc3_167 = rLoc2_166;
						rLoc2_166 = rLoc3_167;
					}
					if (al_147 != 0x01)
					{
						rLoc3_167 = rLoc2_166;
						rLoc2_166 = rLoc3_167;
					}
					if (al_147 >= 0x01)
					{
						rLoc3_167 = rLoc1_165;
						rLoc1_165 = rLoc3_167;
					}
					if (al_147 == 0x02)
					{
						rLoc3_167 = rLoc2_166;
						rLoc2_166 = rLoc3_167;
					}
					byte al_183 = 0x03;
					do
					{
						real64 rLoc4_190 = (real64) ds->w03D8;
						real64 rLoc4_192 = cos(rLoc4_190);
						real64 rLoc5_193 = sin(rLoc4_190);
						real64 rLoc3_207 = rLoc5_193 * rLoc2_166 + rLoc4_192 * rLoc3_167;
						real64 rLoc6_198 = rLoc4_192 * rLoc5_193 - rLoc3_167 * rLoc4_192;
						rLoc1_165 = rLoc3_207;
						rLoc3_167 = rLoc6_198;
						rLoc2_166 = rLoc1_304;
						al_183 = al_183 - 0x01;
						real64 rLoc1_304 = rLoc1_165;
					} while (al_183 != 0x00);
					ds->w03DE = (int16) rLoc6_198;
					ds->w03DC = (int16) rLoc1_304;
					ds->w03DA = (int16) rLoc3_207;
					byte al_225 = (byte) di;
					Eq_128 Eq_17::*bx_223 = ds->w03DC *s 0x0140 + ds->w03DA;
					byte al_226 = al_225 & 0x01;
					if (ds->w03DE <= DPB(di, al_225 & 0x01, 0, 8))
						if ((al_225 & 0x01) >>u 0x01 >=u 0x00)
						{
							al_226 = 0x02;
l0C00_01CD:
							byte al_258 = al_226 + 0x40;
							word16 cx_261 = 0x0002;
							do
							{
								(0x9000->*bx_223).b7D00 = (0x9000->*bx_223).b7D00 | al_258;
								(0x9000->*bx_223).b7E40 = (0x9000->*bx_223).b7E40 | al_258;
								bx_223 = bx_223 + 1;
								cx_261 = cx_261 - 0x0001;
							} while (cx_261 != 0x0000);
						}
					else
						goto l0C00_01CD;
					cx = cx_303;
					bp_119 = bp_119 - 0x0001;
					word16 cx_303 = cx;
				} while (bp_119 != 0x0000);
				cx = cx_303 - 0x0001;
			} while (cx != 0x0000);
			di = di + 1;
		} while (di != &Eq_17::b0018);
		int16 v40_248 = ds->w03D8 + 0x00DC;
		ds->w03D8 = v40_248;
		byte al_252;
		ah_253 = bios_kbd_check_keystroke(out al_252);
	} while (v40_248 == 0x0000);
	return;
}

