// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_155/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 dx, word16 bx, word16 si, byte ah, selector ds, word16 wArg00)
{
	bios_video_set_mode(0x13);
	word16 ax_4 = DPB(ax, 0x13, 0, 8);
	word16 dx_8 = DPB(dx, 0x80, 8, 8);
	do
	{
		rLoc2 = sin(rLoc2) * (real64) Mem0[ds:0x0143:word16];
		Mem25[dx_8:bx + 0x0000:int16] = (int16) rLoc2;
		Mem28[dx:bx + 0x0000:word16] = si;
		word16 bx_29 = bx + 0x0001;
		bx = bx_29 + 0x0001;
		byte bl_31 = (byte) (bx_29 + 0x0001);
		byte bh_32 = SLICE(bx_29 + 0x0001, byte, 8);
	} while (bx_29 != 0x0001);
	word16 cx_282 = ax_4;
	byte ch_39 = SLICE(ax_4, byte, 8);
	do
	{
		word16 ax_59 = Mem28[ds:si + 0x0000:word16];
		si = si + 0x0002;
		do
		{
			word16 ax_68 = bl_31 *s bl_31;
			Mem78[dx:bx + ax_59:byte] = Mem28[dx:bx + ax_59:byte] - ch_39 - (bh_32 *s bh_32 + ax_68 <u 0x0383);
			bx = bx + 0x0001;
			word16 bp_274 = ax_68;
			bl_31 = (byte) bx;
			bh_32 = SLICE(bx, byte, 8);
		} while (bx != 0x0000);
		cx_282 = cx_282 - 0x0001;
		ch_39 = SLICE(cx_282, byte, 8);
	} while (cx_282 != 0x0000);
	word16 di_131 = wArg00;
	word16 sp_103 = fp + 0x0002;
	dx_134 = dx_8;
	while (true)
	{
		word16 dx_134;
		word16 sp_108 = sp_103 - 0x0002;
		Mem109[ss:sp_108 + 0x0000:word16] = 0x0140;
		Mem112[ss:sp_108 - 0x0002:word16] = cx_282;
		Mem114[ss:sp_108 - 0x0004:word16] = dx_134;
		Mem116[ss:sp_108 - 0x0006:word16] = bx;
		Mem118[ss:sp_108 - 0x0008:word16] = sp_108 - 0x0008;
		Mem120[ss:sp_108 - 0x000A:word16] = bp_274;
		Mem122[ss:sp_108 - 0x000C:word16] = si;
		Mem124[ss:sp_108 - 0x000E:word16] = di_131;
		word16 ax_105 = 0x0140;
		word16 sp_123 = sp_108 - 0x000E;
		word16 si_125 = Mem124[dx_8:bx + 0x0000:word16];
		word16 bp_126 = Mem124[dx_8:bx + 0x0060:word16];
		word16 cx_128 = DPB(cx_282, 0xC8, 0, 8);
		do
		{
			word16 sp_143 = sp_123 - 0x0002;
			Mem144[ss:sp_143 + 0x0000:word16] = ax_105;
			Mem146[ss:sp_143 - 0x0002:word16] = cx_128;
			Mem148[ss:sp_143 - 0x0004:word16] = dx_134;
			Mem150[ss:sp_143 - 0x0006:word16] = bx;
			Mem152[ss:sp_143 - 0x0008:word16] = sp_143 - 0x0008;
			Mem154[ss:sp_143 - 0x000A:word16] = bp_126;
			Mem156[ss:sp_143 - 0x000C:word16] = si_125;
			Mem158[ss:sp_143 - 0x000E:word16] = di_131;
			word16 sp_157 = sp_143 - 0x000E;
			word16 ax_160 = cx_128;
			word16 cx_163 = ax_105;
			do
			{
				word16 sp_184 = sp_157 - 0x0002;
				Mem185[ss:sp_184 + 0x0000:word16] = ax_160;
				Mem187[ss:sp_184 - 0x0002:word16] = cx_163;
				word16 dx_181 = dx_134 + si_125;
				Mem189[ss:sp_184 - 0x0004:word16] = dx_181;
				word16 bx_179 = bx + bp_126;
				Mem191[ss:sp_184 - 0x0006:word16] = bx_179;
				Mem193[ss:sp_184 - 0x0008:word16] = sp_184 - 0x0008;
				Mem195[ss:sp_184 - 0x000A:word16] = bp_126;
				Mem197[ss:sp_184 - 0x000C:word16] = si_125;
				Mem199[ss:sp_184 - 0x000E:word16] = di_131;
				word16 bx_201 = DPB(bx_179, SLICE(dx_181, byte, 8), 0, 8);
				byte al_203 = 0x12;
				do
				{
					bx_201 = bx_201 * 0x0002;
					al_203 = al_203 - 0x03;
				} while (Mem199[dx:bx_201 + (sp_184 - 0x000E):byte] <u al_203);
				Mem217[0xA000:di_131 + 0x0000:byte] = al_203 + 0x10;
				word16 cx_232 = Mem217[ss:sp_184 - 0x0002:word16];
				si_125 = Mem217[ss:sp_184 - 0x000C:word16];
				bp_126 = Mem217[ss:sp_184 - 0x000A:word16];
				bx = Mem217[ss:sp_184 - 0x0006:word16];
				dx_134 = Mem217[ss:sp_184 - 0x0004:word16];
				ax_160 = Mem217[ss:sp_184 + 0x0000:word16];
				sp_157 = sp_184 + 0x0002;
				di_131 = Mem217[ss:sp_184 - 0x000E:word16] + 0x0001;
				cx_163 = cx_232 - 0x0001;
			} while (cx_232 != 0x0001);
			ax_105 = Mem217[ss:sp_184 + 0x0010:word16];
			si_125 = Mem217[ss:sp_184 + 0x0004:word16];
			bp_126 = Mem217[ss:sp_184 + 0x0006:word16];
			word16 cx_254 = Mem217[ss:sp_184 + 0x000E:word16];
			sp_123 = sp_184 + 0x0012;
			di_131 = Mem217[ss:sp_184 + 0x0002:word16] + ax_105;
			bx = Mem217[ss:sp_184 + 0x000A:word16] - si_125;
			dx_134 = Mem217[ss:sp_184 + 0x000C:word16] + bp_126;
			cx_128 = cx_254 - 0x0001;
		} while (cx_254 != 0x0001);
		word16 bx_277 = Mem217[ss:sp_184 + 0x001A:word16];
		di_131 = Mem217[ss:sp_184 + 0x0012:word16];
		si = Mem217[ss:sp_184 + 0x0014:word16];
		bp_274 = Mem217[ss:sp_184 + 0x0016:word16];
		dx_134 = Mem217[ss:sp_184 + 0x001C:word16];
		cx_282 = Mem217[ss:sp_184 + 0x001E:word16];
		bx = bx_277 + 0x0002;
		sp_103 = sp_184 + 0x0422;
	}
}

