// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_252/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 si, Eq_28 * ds)
{
	bios_video_set_mode(0x13);
	__outw(0x03D4, 0x2013);
	uint8 al_14 = 0x13;
	Eq_13 Eq_28::*bx_12 = &Eq_28::t0000;
	byte bl_13 = 0x00;
	byte bh_220 = 0x00;
	do
	{
		Eq_19 al_15 = al_14 >>u 0x03;
		int16 ax_17 = (al_15 << 0x05) *s (al_15 << 0x05);
		(ds->*bx_12).b0400 = SLICE(ax_17, byte, 8);
		bl_13 = bl_13 + 0x01;
		al_14 = (byte) ax_17;
		bx_12 = DPB(bx_12, bl_13, 0, 8);
	} while (bl_13 != 0x00);
	do
	{
		int16 bp_214 = fn0C00_01EA(si);
		word16 wLoc02_144 = si;
		int16 ax_70 = fn0C00_01EA(si + 0x0040);
		do
		{
			int16 ax_85 = (int16) bl_13;
			ds->w01A2 = ((word16) (ax_70 *s ax_85) >> 0x0007) + bp_214 << 0x0001;
			int16 ax_104 = (int16) (bh_220 - 0x64);
			int16 ax_100 = -((word16) (bp_214 *s ax_85) >> 0x0007) + ax_70;
			ds->w019E = ((word16) (bp_214 *s ax_100) >> 0x0007) + ((word16) (ax_70 *s ax_104) >> 0x0007) << 0x0001;
			int32 dx_ax_132 = ax_70 *s ax_100;
			ds->w01A6 = ((word16) dx_ax_132 >> 0x0007) + -((word16) (bp_214 *s ax_104) >> 0x0007) << 0x0001;
			ui16 cx_145 = wLoc02_244 << 0x0009;
			word16 dx_133 = SLICE(dx_ax_132, word16, 16);
			byte dh_135 = SLICE(dx_ax_132, byte, 24);
			wLoc02_144 = wLoc02_244;
			byte ch_146 = SLICE(cx_145, byte, 8);
			uint16 bp_151 = 0x0000;
			uint16 di_154 = 0x0200;
			do
			{
				byte Eq_28::*bx_167 = DPB(bp_151 >>u 0x0008, 0x04, 8, 8);
				if (Mem140[ds:bx_167 + 0x0000:byte] + Mem140[ds:bx_167 + 0x0000:byte] + Mem140[ds:DPB(bx_167, dh_135, 0, 8):byte] >u 0x65)
					break;
				dx_133 = dx_133 + 0xFFFF;
				cx_145 = cx_145 + 0xFFFF;
				dh_135 = SLICE(dx_133, byte, 8);
				ch_146 = SLICE(cx_145, byte, 8);
				bp_151 = bp_151 + 0xFFFF;
				di_154 = di_154 - 0x0001;
			} while (di_154 != 0x0000);
			Eq_38 al_184 = dh_135 << 0x03;
			Eq_42 al_189 = ch_146 << 0x03;
			uint16 ax_191 = al_189 *s al_189 + al_184 *s al_184;
			int16 ax_198 = DPB(ax_191 >>u 0x0007, ~(byte) (ax_191 >>u 0x0007), 0, 8) - 0x00FF + (di_154 >>u 0x0001);
			uint8 al_199 = (byte) ax_198;
			if (ax_198 < 0x0000)
			{
				ax_198 = 0x0000;
				al_199 = 0x00;
			}
			(0xA000->*bx_12).wFFFFFFA0 = DPB(ax_198, (al_199 >>u 0x04) + 0x10, 8, 8);
			word16 bx_217 = &bx_12->wFFFFFFA0;
			bx_12 = bx_217 + 0x0001;
			bl_13 = (byte) (bx_217 + 0x0001);
			bh_220 = SLICE(bx_217 + 0x0001, byte, 8);
			word16 wLoc02_244 = wLoc02_144;
		} while (bx_217 != 0x0001);
		si = wLoc02_244 + 0x0001;
	} while (__inb(0x60) != 0x01);
	return;
}

word16 fn0C00_01EA(word16 si)
{
	int8 al_11 = (byte) (si << 0x0001);
	int16 ax_12 = al_11 *s al_11;
	return (DPB(ax_12, SLICE(ax_12, byte, 8) - 0x40, 8, 8) ^ SLICE((int32) ((int16) ((byte) (si + 0x0040))), word16, 16)) >> 0x0007;
}

