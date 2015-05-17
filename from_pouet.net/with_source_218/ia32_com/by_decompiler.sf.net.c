// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_218/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 bx, word16 bp, word16 di)
{
	bios_video_set_mode(0x13);
	word16 ax_8 = DPB(ax, 0x20, 8, 8);
	__outw(0x03D4, ax_8);
	word16 dx_3 = 0x03D4;
	word16 cx_20 = 0x000F;
	byte cl_21 = 0x0F;
	ax_102 = ax_8;
	do
	{
		word16 ax_102;
		word16 ax_46 = (word16) (dx_3 *s ax_102);
		dx_3 = ax_46 + 0x0001;
		byte dl_54 = (byte) (ax_46 + 0x0001);
		byte dh_55 = SLICE(ax_46 + 0x0001, byte, 8);
		do
		{
			if (cl_21 >=u 0x0D)
				Mem421[0x7000:bx + 0x0000:byte] = cl_21;
			word16 ax_73 = dl_54 *s dl_54;
			ax_102 = dh_55 *s dh_55 + ax_73;
			word16 si_133 = ax_73;
			byte ah_80 = SLICE(ax_102, byte, 8);
			if (ah_80 <=u 0x3F)
				Mem419[0x7000:bx + 0x0000:byte] = Mem0[0x7000:bx + 0x0000:byte] + ah_80;
			dx_3 = dx_3 + 0x0001;
			bx = bx + 0x0001;
			dl_54 = (byte) dx_3;
			dh_55 = SLICE(dx_3, byte, 8);
			byte bh_153 = SLICE(bx, byte, 8);
		} while (bx != 0x0000);
		cx_20 = cx_20 - 0x0001;
		cl_21 = (byte) cx_20;
	} while (cx_20 != 0x0000);
	word16 cx_104 = DPB(cx_20, 0x05, 0, 8);
	do
	{
		byte bl_115 = Mem0[0x7000:di - 0x0101:byte];
		bx = DPB(bx, bl_115, 0, 8);
		word16 ax_117 = DPB(ax_102, Mem0[0x7000:di - 0x0002:byte], 0, 8) + DPB(bx, Mem0[0x7000:di + 0x0000:byte], 0, 8) + DPB(bx, Mem0[0x7000:di + 0x00FF:byte], 0, 8) + bx;
		Mem123[0x7000:di + 0x0000:byte] = (byte) (ax_117 >>u 0x0002);
		ax_102 = ax_117 >>u 0x0002;
		di = di + 0x0001;
		if (di != 0x0000)
			continue;
		cx_104 = cx_104 - 0x0001;
		byte cl_128 = (byte) cx_104;
	} while (cx_104 != 0x0000);
	do
	{
		si_133 = si_133 + 0x0001;
		do
		{
			if (bl_115 == 0x00)
			{
				cl_128 = 0xFF;
				cx_104 = DPB(cx_104, 0xFF, 0, 8);
			}
			word16 ax_188 = DPB(bp, Mem123[0x7000:bx + si_133:byte], 0, 8) + 0x0040 << 0x0006;
			word16 ax_194 = SEQ(SEQ(0x0000, ax_188) % 0x0001, ax_188) /u 0x0001 >>u 0x0003;
			bp = 0x0001;
			byte al_195 = (byte) ax_194;
			if (ax_194 >u 0x00FF)
			{
				al_195 = 0xFF;
				ax_194 = DPB(ax_194, 0xFF, 0, 8);
			}
			if (al_195 <u cl_128)
			{
				word16 ax_370 = ((int16) (Mem123[0x7000:bx - 0x0001 + si_133:byte] - Mem123[0x7000:(bx + 0x0001) + si_133:byte]) << 0x0004) - 0x0002;
				cx_104 = DPB(cx_104, al_195, 8, 8);
				word16 di_364 = DPB(ax_194, bh_153, 8, 8);
				bp = 0x0002;
				byte al_372 = (byte) (ax_370 + 0x0080);
				byte ah_373 = SLICE(ax_370 + 0x0080, byte, 8);
				if (ax_370 < 0x0080)
				{
					al_372 = 0x00;
					ah_373 = 0x00;
				}
				if (ah_373 - 0x01 >= 0x00)
					al_372 = 0xFF;
				byte al_390 = al_372 >>u 0x04;
				do
				{
					Mem397[ax_8:di_364 + 0x0000:byte] = al_390 + 0x10;
					cx_104 = cx_104 - 0x0001;
					di_364 = di_364 + 0x0001;
					cl_128 = (byte) cx_104;
				} while (SLICE(cx_104, byte, 8) <u cl_128);
			}
			word16 bx_216 = bx + 0x0001;
		} while (bx_216 != 0x0001);
		do
		{
			word16 ax_279 = (int16) bh_153;
			word16 ax_285 = (int16) ((byte) ax_279 ^ SLICE(ax_279, byte, 8));
			word16 ax_290 = (int16) bl_115;
			word16 cx_297 = DPB(ax_285, (byte) ax_285 + ((byte) ax_290 ^ SLICE(ax_290, byte, 8)), 0, 8);
			byte ah_310 = SLICE(ax_279, byte, 8);
			word32 dx_ax_327 = (word32) (bh_153 *s bh_153 + bl_115 *s bl_115);
			word16 ax_315 = DPB(ax_279, (ah_310 >>u 0x01) + ((byte) (SEQ((word32) (ax_290 << 0x0006) % (cx_297 + 0x0001), ax_290 << 0x0006) / (cx_297 + 0x0001)) ^ ah_310), 8, 8);
			word16 dx_329 = SLICE(dx_ax_327, word16, 16);
			word16 ax_331 = (word16) dx_ax_327;
			do
			{
				dx_329 = dx_329 + 0x0001;
				byte dl_337 = (byte) dx_329;
				ax_331 = ax_331 - dx_329 - dx_329;
			} while (ax_331 >= 0x0000);
			cx_104 = DPB(ax_315, dl_337, 0, 8);
			Mem350[0xA000:bx + 0x64A0:byte] = Mem123[ax_8:cx_104 + 0x0000:byte];
			bx = bx + 0x0001;
			cl_128 = dl_337;
			bp = cx_104;
			bl_115 = (byte) bx;
			bh_153 = SLICE(bx, byte, 8);
		} while (bx != 0x0000);
	} while (__inb(0x60) != 0x01);
	return;
}

