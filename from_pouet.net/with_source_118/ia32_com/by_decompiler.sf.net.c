// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_118/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 bx, word16 si, byte ah, selector ds)
{
	bios_video_set_mode(0x13);
	word16 sp_1 = fp;
	selector ds_11 = SLICE(Mem0[ds:bx + 0x0000:segptr32], selector, 16);
	do
	{
		int32 dx_ax_33 = SEQ(dx, bx);
		int32 dx_ax_35 = SEQ(dx_ax_33 % 0x0140, bx);
		dx = dx_ax_33 % 0x0140;
		word16 ax_116 = dx_ax_35 / 0x0140;
		cx = DPB(cx, 0x22, 0, 8);
		word16 bp_105 = dx_ax_35 / 0x0140;
		word16 di_101 = sp_1 + 0x0140;
		do
		{
			word16 sp_58 = sp_1 - 0x0002;
			Mem59[ss:sp_58 + 0x0000:word16] = ax_116;
			Mem62[ss:sp_58 - 0x0002:word16] = cx;
			Mem64[ss:sp_58 - 0x0004:word16] = dx;
			Mem66[ss:sp_58 - 0x0006:word16] = bx;
			Mem68[ss:sp_58 - 0x0008:word16] = sp_58 - 0x0008;
			word16 bp_57 = bp_105 + ax_116;
			Mem70[ss:sp_58 - 0x000A:word16] = bp_57;
			Mem72[ss:sp_58 - 0x000C:word16] = si;
			word16 di_56 = di_101 + dx;
			Mem74[ss:sp_58 - 0x000E:word16] = di_56;
			int32 dx_ax_77 = bp_57 *s (di_56 *s 0x0002);
			Mem81[ss:sp_58 - 0x0009:word16] = SLICE(dx_ax_77, word16, 16);
			Mem83[ss:sp_58 - 0x000B:word16] = (word16) dx_ax_77;
			int32 dx_ax_86 = (di_56 - bp_57) *s (bp_57 + di_56);
			Mem90[ss:sp_58 - 0x000D:word16] = SLICE(dx_ax_86, word16, 16);
			Mem92[ss:sp_58 - 0x000F:word16] = (word16) dx_ax_86;
			bx = Mem92[ss:sp_58 - 0x0006:word16];
			word16 cx_114 = Mem92[ss:sp_58 - 0x0002:word16];
			di_101 = Mem92[ss:sp_58 - 0x000E:word16];
			si = Mem92[ss:sp_58 - 0x000C:word16];
			bp_105 = Mem92[ss:sp_58 - 0x000A:word16];
			bl = (byte) bx;
			dx = Mem92[ss:sp_58 - 0x0004:word16];
			ax_116 = Mem92[ss:sp_58 + 0x0000:word16];
			sp_1 = sp_58 + 0x0002;
			cx = cx_114 - 0x0001;
			byte cl_123 = (byte) (cx_114 - 0x0001);
			byte bl_139 = bl;
		} while ((SLICE(bp_57 *s bp_57, byte, 24) & bl_139) == 0x00 && cx_114 != 0x0001);
		Mem124[ds_11:bx + 0x0000:byte] = cl_123;
		bx = bx - 0x0001;
		bl = (byte) (bx - 0x0001);
		if (bx != 0x0001)
			continue;
		word16 ax_130 = DPB(ax_116, __inb(0x60), 0, 8);
		Mem138[ss:sp_58 + 0x0000:word16] = ax_130 - 0x0001;
		sp_1 = sp_58;
	} while (ax_130 != 0x0001);
	return;
}

