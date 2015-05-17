// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_207/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, word16 bx, word16 si, word16 di, byte dl, byte ah, byte dh, selector ds)
{
	bios_video_set_mode(0x13);
	word16 dx_5 = DPB(dx, dh + 0x10, 8, 8);
	word16 dx_8 = DPB(dx, dh + 0x20, 8, 8);
	word16 wLoc02_15 = DPB(ax, 0x13, 0, 8);
	word16 wLoc04_18 = cx;
	word16 wLoc08_23 = bx;
	word16 wLoc0E_31 = si;
	word16 wLoc10_34 = di;
l0C00_010F:
	word16 ax_101 = wLoc02_15 + 0x0001;
	word16 di_158 = wLoc10_34;
	word16 bx_110 = wLoc08_23;
	wLoc02_15 = ax_101;
	wLoc0E_31 = wLoc0E_237;
	do
	{
		word16 ax_100 = ax_101 *s 0x0041;
		Mem105[ds:wLoc0E_237 + 0x0000:word16] = ax_100 + 0x0001;
		Mem109[dx_5:bx_110 + 0x0000:real32] = (real64) Mem105[ds:wLoc0E_237 + 0x0000:int16] * (real64) Mem105[ds:0x01F0:word16];
		bx_110 = bx_110 + 0x0004;
		ax_101 = ax_100 + 0x0001;
		byte bh_111 = SLICE(bx_110, byte, 8);
	} while (bx_110 != 0x0000);
	word16 cx_115 = wLoc04_18 + 0x0001;
	byte cl_116 = (byte) cx_115;
	do
	{
		Mem131[dx_5:bx_110 + 0x0000:real32] = (Mem109[dx_5:bx_110 - 0x0200:real32] + Mem109[dx_5:bx_110 + 0x0200:real32] + Mem109[dx_5:bx_110 - 0x0004:real32] + Mem109[dx_5:bx_110 + 0x0004:real32]) / (real64) Mem109[ds:0x01EE:word16];
		Mem133[dx_8:bx_110 + 0x0000:word16] = bx_110 *s 0x0040;
		Mem136[dx_8:bx_110 + 0x0002:word16] = (word16) bh_111 << 0x0007;
		bx_110 = bx_110 + 0x0004;
		bh_111 = SLICE(bx_110, byte, 8);
		if (bx_110 != 0x0000)
			continue;
		byte al_144 = cl_116 >>u 0x02;
		__outb(0x03C9, al_144);
		__outb(0x03C9, al_144);
		__outb(0x03C9, al_144);
		cx_115 = cx_115 - 0x0001;
		cl_116 = (byte) cx_115;
	} while (cx_115 != 0x0000);
	Mem150[ss:fp - 0x0012:word16] = 0xA000;
	do
	{
		word32 dx_ax_164 = SEQ(0x0000, di_158);
		word16 bx_176 = DPB(bx_110, (byte) (dx_ax_164 % 0x0140) * 0x02, 0, 8);
		bx_110 = bx_176 * 0x0002;
		word16 cx_183 = DPB(0x0140, SEQ(dx_8, 0x0003)[bx_176 * 0x0002], 8, 8);
		if (SEQ(dx_ax_164 % 0x0140, di_158) /u 0x0140 < 0x0080 && dx_ax_164 % 0x0140 < 0x0080)
		{
			real64 rLoc1_224 = SEQ(dx_5, 
// Exception Object reference not set to an instance of an object. when writing procedure.
