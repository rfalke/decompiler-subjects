// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_178/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 dx, word16 bx, word16 si, byte ah, selector ds)
{
	bios_video_set_mode(0x13);
	word16 ax_4 = DPB(ax, 0x13, 0, 8);
	word16 dx_8 = DPB(dx, 0x80, 8, 8);
	do
	{
		rLoc2 = sin(rLoc2) * (real64) Mem0[ds:0x015D:word16];
		Mem25[dx_8:bx + 0x0000:int16] = (int16) rLoc2;
		Mem28[dx:bx + 0x0000:word16] = si;
		word16 bx_29 = bx + 0x0001;
		bx = bx_29 + 0x0001;
		byte bl_31 = (byte) (bx_29 + 0x0001);
		byte bh_32 = SLICE(bx_29 + 0x0001, byte, 8);
	} while (bx_29 != 0x0001);
	word16 cx_124 = ax_4;
	byte ch_40 = SLICE(ax_4, byte, 8);
	do
	{
		word16 ax_60 = Mem28[ds:si + 0x0000:word16];
		si = si + 0x0002;
		do
		{
			Mem79[dx:bx + ax_60:byte] = Mem28[dx:bx + ax_60:byte] - ch_40 - (bh_32 *s bh_32 + bl_31 *s bl_31 <u 0x0383);
			bx = bx + 0x0001;
			bl_31 = (byte) bx;
			bh_32 = SLICE(bx, byte, 8);
		} while (bx != 0x0000);
		cx_124 = cx_124 - 0x0001;
		ch_40 = SLICE(cx_124, byte, 8);
		dx_122 = dx_8;
	} while (cx_124 != 0x0000);
	do
	{
		word16 dx_122;
		word16 si_132 = Mem79[dx_8:bx + 0x0000:word16];
		word16 bp_133 = Mem79[dx_8:bx + 0x2000:word16];
		word16 di_151 = 0x0000;
		word16 cx_155 = DPB(cx_124, 0xC8, 0, 8);
		dx_170 = dx_122;
		bx_174 = bx;
		do
		{
			word16 dx_170;
			word16 bx_174;
			Mem178[ss:fp - 0x0012:word16] = 0x0140;
			word16 cx_196 = 0x0140;
			di_201 = di_151;
			si_202 = si_132;
			bp_203 = bp_133;
			dx_204 = dx_170;
			bx_208 = bx_174;
			do
			{
				word16 di_201;
				word16 si_202;
				word16 bp_203;
				word16 dx_204;
				word16 bx_208;
				word16 dx_212 = dx_204 + si_202;
				word16 bx_210 = bx_208 + bp_203;
				word16 bx_232 = DPB(bx_210, SLICE(dx_212, byte, 8), 0, 8);
				byte al_234 = 0x12;
				do
				{
					bx_232 = bx_232 * 0x0002;
					al_234 = al_234 - 0x03;
				} while (Mem178[dx:bx_232 + 0x0100:byte] <u al_234);
				Mem248[0xA000:di_201 + 0x0000:byte] = al_234 + 0x10;
				bx_208 = bx_210;
				dx_204 = dx_212;
				di_201 = di_201 + 0x0001;
				cx_196 = cx_196 - 0x0001;
			} while (cx_196 != 0x0000);
			di_151 = di_151 + 0x0140;
			bx_174 = bx_174 - si_132;
			dx_170 = dx_170 + bp_133;
			cx_155 = cx_155 - 0x0001;
		} while (cx_155 != 0x0000);
		byte v32_320 = Mem248[ds:0x015E:byte] + 0x04;
		Mem321[ds:0x015E:byte] = v32_320;
		byte al_324;
		bios_kbd_check_keystroke(out al_324);
		bx = DPB(bx, SLICE(bx, byte, 8) + 0x01, 8, 8);
	} while (v32_320 == 0x00);
	bios_video_set_mode(0x03);
	return;
}

