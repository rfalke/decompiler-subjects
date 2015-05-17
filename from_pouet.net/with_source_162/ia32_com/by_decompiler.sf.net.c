// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_162/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 si, byte ch)
{
	bios_video_set_mode(0x13);
	uint16 ax_6 = DPB(ax, 0x20, 8, 8);
	__outw(0x03D4, ax_6);
	ax_164 = ax_6;
	while (true)
	{
		uint16 ax_164;
		si = si + 0x0001;
		word16 di_47 = 0x0100;
		do
		{
			byte bl_54 = (byte) di_47;
			uint16 cx_57 = DPB(cx, bl_54, 0, 8);
			Eq_21 bx_59 = DPB(di_47, bl_54 & 0x1F, 0, 8);
			int8 al_72 = ((byte) (SEQ(SEQ(0x0014 - (cx_57 >>u 0x0005), ax_164) % bx_59, ax_164) /u bx_59 + si) & 0x1F) - 0x10;
			int16 ax_73 = al_72 *s al_72;
			int8 al_74 = (byte) ax_73;
			uint16 ax_78 = al_74 *s al_74 + ax_73;
			cx = cx_57 >>u 0x0005;
			ax_164 = ax_78 >>u 0x0005;
			bcu8 al_80 = (byte) (ax_78 >>u 0x0005);
			if (al_80 >=u (byte) (cx_57 >>u 0x0005))
				Mem175[ax_6:bx_59 + 0x0000:byte] = al_80;
			di_47 = di_47 + 0x0001;
		} while (di_47 != 0x0000);
		byte ah_151 = SLICE(bx_59, byte, 8);
		Eq_66 bx_170 = (ax_78 >>u 0x0005) + 0x649F;
		byte bl_171 = (byte) (ax_78 >>u 0x0005);
		byte bh_100 = SLICE(ax_78 >>u 0x0005, byte, 8);
		do
		{
			int16 ax_109 = (int16) bl_171;
			int16 ax_104 = (int16) (bh_100 ^ ah_151);
			byte al_112 = (byte) ax_109 ^ SLICE(ax_109, byte, 8);
			word16 cx_114 = DPB(ax_104, (byte) ax_104 + al_112, 0, 8);
			word16 ax_118 = DPB(ax_109, al_112, 8, 8);
			word16 ax_124 = SEQ((word32) ax_118 % (cx_114 + 0x0001), ax_118) / (cx_114 + 0x0001) >>u 0x0002 & 0x001F;
			int8 al_129 = (byte) bx_170;
			cx = cx_114 + 0x0001;
			byte bh_132 = SLICE(ax_124, byte, 8);
			int16 bp_140 = al_129 *s al_129 + SLICE(bx_170 *s bx_170, word16, 16);
			word16 ax_141 = 0x0000;
			do
			{
				ax_141 = ax_141 + 0x0001;
				byte al_150 = (byte) ax_141;
				ah_151 = SLICE(ax_141, byte, 8);
				bp_140 = bp_140 - ax_141 - ax_141;
			} while (bp_140 >= 0x0000);
			byte al_162 = DPB(ax_124, al_150, 8, 8)[(uint16) bh_132];
			Mem169[0xA000:bx_170 + 0x0000:byte] = al_162 + 0x10;
			bx_170 = bx_170 + 0x0001;
			ax_164 = DPB(ax_141, al_162 + 0x10, 0, 8);
			bl_171 = (byte) bx_170;
			bh_100 = SLICE(bx_170, byte, 8);
		} while (bx_170 != 0x9B61);
	}
}

