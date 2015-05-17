// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_293/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(selector ds)
{
	word16 si_10 = 0x32C8;
	do
	{
		si_10 = si_10 - 0x0001 + 0x0204;
		Mem7[ds:si_10 + 0x0204:byte] = 0x00;
	} while (si_10 != 0x0000);
	word16 cx_11 = 0x0055;
	do
	{
		word16 bp_15 = si_10 << 0x0002;
		Mem19[ss:bp_15 + 0x0205:real32] = SEQ(ds, 0x01C4)[(word16) Mem7[ds:si_10 + 0x0000:byte] * 0x0004];
		si_10 = si_10 + 0x0001;
		cx_11 = cx_11 - 0x0001;
	} while (cx_11 != 0x0000);
	word16 ax_30;
	msdos_create_truncate_file(0x0000, ds, 0x01BA, out ax_30);
	Mem32[ds:0x0202:word16] = ax_30;
	word16 dx_135 = 0x01D4;
	byte bh_38;
	word16 bx_264 = DPB(ax_30, fn0C00_01B1(0x002C, 0x01D4, ds, out bh_38), 0, 8);
	word16 di_275 = 0x0259;
	word16 cx_100 = 0x0100;
	do
	{
		if ((Mem32[ds:di_275 + 0x0000:byte] & 0x01) != 0x00)
		{
			Mem279[ds:0x05F0:real32] = 1;
			Mem280[ds:0x2534:real32] = 1;
			Mem281[ds:0x1598:real32] = 1;
		}
		Mem110[ss:fp - 0x0006:word16] = 0x01D4;
		word16 cx_121 = 0x189C;
		bx_133 = bx_264;
		di_138 = di_275;
		do
		{
			word16 bx_133;
			word16 di_138;
			word16 bx_141 = DPB(bx_133, Mem110[ds:di_138 + 0x0000:byte], 0, 8);
			Mem155[ss:fp - 0x0016:word16] = 0x01D4;
			word16 bx_145 = DPB(bx_141 + 0x0001, (byte) (bx_141 + 0x0001) << 0x06, 0, 8);
			word16 bx_147 = bx_145 - 0x0001;
			byte bl_148 = (byte) (bx_145 - 0x0001);
			real64 rLoc1_166 = 0;
			word16 bp_167 = 0x05EC;
			word16 cx_168 = 0x0003;
			do
			{
				Mem183[ss:fp - 0x0026:word16] = 0x01D4;
				word16 si_194 = Mem183[ss:bp_167 + 0x0000:word16];
				real64 rLoc2_197 = SEQ(ss, bp_167 + 0x0004)[si_194 * 0x0004];
				word16 si_204 = (word16) SLICE(SEQ(SEQ(dx_135, si_194 + 0x0001) % bl_148, si_194 + 0x0001) /u bl_148, byte, 8);
				Mem205[ss:bp_167 + 0x0000:word16] = si_204;
				real64 rLoc2_208 = (rLoc2_197 - SEQ(ss, bp_167 + 0x0004)[si_204 * 0x0004]) / (real64) Mem205[ds:0x01C2:word16];
				SEQ(ss, bp_167 + 0x0004)[si_204 * 0x0004] = rLoc2_208;
				byte bl_218 = (byte) bx_147;
				dx_135 = 0x01D4;
				bp_167 = bp_167 + 0x0FA0;
				bl_148 = bl_218 >>u 0x01;
				bx_147 = DPB(bx_147, bl_218 >>u 0x01, 0, 8);
				rLoc1_166 = rLoc1_166 + rLoc2_208;
				cx_168 = cx_168 - 0x0001;
			} while (cx_168 != 0x0000);
			Mem234[ds:0x0200:int16] = (int16) (rLoc1_166 * (real64) Mem209[ds:0x01C0:word16]);
			byte bh_237;
			fn0C00_01B1(0x0002, 0x0200, ds, out bh_237);
			bx_133 = bx_145 - 0x0001;
			dx_135 = 0x01D4;
			cx_121 = cx_121 - 0x0001;
		} while (cx_121 != 0x0000);
		dx_135 = 0x01D4;
		di_275 = di_275 + 0x0001;
		cx_100 = cx_100 - 0x0001;
	} while (cx_100 != 0x0000);
	return;
}

byte fn0C00_01B1(word16 cx, word16 dx, selector ds, ptr16 bhOut)
{
	word16 bx_7 = Mem0[ds:0x0202:word16];
	word16 ax_12;
	msdos_write_file(bx_7, cx, ds_dx, out ax_12);
	byte bh_9;
	*bhOut = SLICE(bx_7, byte, 8);
	return (byte) bx_7;
}

