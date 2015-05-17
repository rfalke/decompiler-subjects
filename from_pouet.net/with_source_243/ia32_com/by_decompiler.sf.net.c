// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_243/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 bx, word16 di, byte ch)
{
	bios_video_set_mode(0x13);
	__outb(0x03C8, 0x01);
	word16 sp_1 = fp;
	byte ah_13 = 0x00;
	word16 cx_11 = DPB(cx, 0x80, 0, 8);
	do
	{
		__outb(0x03C9, ah_13 + 0x00);
		__outb(0x03C9, 0x00);
		__outb(0x03C9, 0x00);
		ah_13 = ah_13 + 0x01;
		if (ah_13 == 0xC1)
			Mem209[0x0C00:0x0119:byte] = 0xCC;
		cx_11 = cx_11 - 0x0001;
	} while (cx_11 != 0x0000);
	byte ch_31 = SLICE(cs, byte, 8);
	word16 cx_33 = DPB(cs, ch_31 + 0x30, 8, 8);
	selector es_174 = cx_33;
	word16 cx_38 = DPB(cs, ch_31 + 0x31, 8, 8);
	word16 cx_177 = 0x0200;
	do
	{
		bx = bx + 0x067F;
		Mem55[cx_33:di + 0x0000:word16] = bx & 0x067F;
		cx_177 = cx_177 - 0x0001;
		di = di + 0x0002;
		byte ch_198 = SLICE(cx_177, byte, 8);
	} while (cx_177 != 0x0000);
	do
	{
		__syscall(0x10);
		word16 si_76 = 0x0000;
		word16 di_100 = 0x0000;
		word16 cx_101 = DPB(cx_177, ch_198 + 0x01, 8, 8);
		do
		{
			word16 ax_87 = Mem55[cx_33:si_76 + 0x0000:word16];
			byte ah_89 = SLICE(ax_87, byte, 8);
			byte al_91 = (byte) ax_87 + ah_89;
			si_76 = si_76 + 0x0002;
			word16 ax_207 = DPB(ax_87, al_91, 0, 8);
			if (al_91 >=u 0xC8)
				ax_207 = DPB(ax_87, al_91 + -ah_89, 0, 8);
			Mem99[es_174:di_100 + 0x0000:word16] = ax_207;
			di_100 = di_100 + 0x0002;
			cx_101 = cx_101 - 0x0001;
		} while (cx_101 != 0x0000);
		word16 si_104 = 0x0000;
		do
		{
			word16 cx_122 = DPB(cx_101, 0x06, 0, 8);
			do
			{
				word16 ax_130 = DPB(Mem99[cx_33:si_104 + 0x0000:word16], 0x00, 8, 8);
				sp_1 = sp_1 - 0x0002;
				Mem134[ss:sp_1 + 0x0000:word16] = ax_130;
				si_104 = si_104 + 0x0002;
				cx_122 = cx_122 - 0x0001;
			} while (cx_122 != 0x0000);
			Mem140[ss:sp_1 - 0x0002:word16] = 0x0005;
			word16 bx_150;
			word16 bp_151;
			word16 di_153;
			word16 dx_149;
			fn0C00_01A4(ax_130, cx_38, wArg00, wArg02, wArg04, wArg06, wArg08, wArg0A, wArg0C, out cx_101, out dx_149, out bx_150, out bp_151, out si_104, out di_153);
			sp_1 = sp_1 + 0x000C;
		} while (si_104 <u 0x01F8);
		Mem159[ss:sp_1 + 0x000A:word16] = es_174;
		Mem161[ss:sp_1 + 0x0008:word16] = 0xA000;
		selector es_162 = Mem161[ss:sp_1 + 0x0008:selector];
		word16 cx_165 = DPB(cx_101, 0xFF, 8, 8);
		do
		{
			Mem169[es_162:di_153 + 0x0000:word16] = Mem161[cx_38:di_153 + 0x0000:word16];
			di_153 = di_153 + 0x0002 + 0x013F;
			cx_165 = cx_165 - 0x0001;
		} while (cx_165 != 0x0000);
		es_174 = Mem169[ss:sp_1 + 0x000A:selector];
		sp_1 = sp_1 + 0x000C;
		word16 bx_176 = 0x0140;
		cx_177 = cx_165 - 0x0001;
		do
		{
			bx_176 = -bx_176;
			word16 dx_188 = DPB(dx_149, Mem169[cx_38:bx_176 + di_153:byte] + Mem169[cx_38:di_153 + 0x0000:byte], 0, 8);
			byte dl_190 = (byte) (dx_188 >>u 0x0001);
			Mem192[cx_38:di_153 - 0x013F:byte] = dl_190;
			Mem193[cx_38:di_153 + 0x0000:byte] = dl_190;
			cx_177 = cx_177 - 0x0001;
			dx_149 = dx_188 >>u 0x0001;
			di_153 = di_153 + 0x0001;
			ch_198 = SLICE(cx_177, byte, 8);
		} while (cx_177 != 0x0000);
	} while (__inb(DPB(dx_188 >>u 0x0001, 0x60, 0, 8)) != 0x01);
	bios_video_set_mode(0x03);
	return;
}

word16 fn0C00_01A4(word16 ax, selector fs, word16 wArg02, word16 wArg04, word16 wArg06, word16 wArg08, word16 wArg0A, word16 wArg0C, word16 wArg0E, ptr16 cxOut, ptr16 dxOut, ptr16 bxOut, ptr16 bpOut, ptr16 siOut, ptr16 diOut)
{
	word16 sp_136 = fp - 0x0010;
	if (wArg02 == 0x0000)
		Mem71[fs:wArg04 *s 0x0140 + wArg06 + 0x0040:byte] = 0x80;
	else
	{
		word16 ax_92 = wArg0E + wArg0A;
		word16 dx_94 = wArg0C + wArg08;
		word16 ax_104 = (ax_92 >>u 0x0001) + (wArg0A + wArg06 >>u 0x0001);
		word16 cx_117;
		word16 dx_118;
		word16 bx_119;
		word16 bp_120;
		word16 si_121;
		word16 di_122;
		word16 ax_123 = fn0C00_01A4(ax_104 >>u 0x0001, fs, wArg02 - 0x0001, (dx_94 >>u 0x0001) + (wArg08 + wArg04 >>u 0x0001) >>u 0x0001, ax_104 >>u 0x0001, dx_94 >>u 0x0001, ax_92 >>u 0x0001, wArg0C, wArg0E, out cx_117, out dx_118, out bx_119, out bp_120, out si_121, out di_122);
		Mem125[ss:fp - 0x0020:word16] = ax_123;
		Mem127[ss:fp - 0x0022:word16] = dx_118;
		Mem129[ss:fp - 0x0024:word16] = cx_117;
		Mem131[ss:fp - 0x0026:word16] = bx_119;
		Mem133[ss:fp - 0x0028:word16] = Mem131[ss:bp_120 + 0x0016:word16];
		Mem135[ss:fp - 0x002A:word16] = di_122;
		Mem137[ss:fp - 0x002C:word16] = si_121;
		word16 cx_139;
		word16 dx_140;
		word16 bx_141;
		word16 bp_142;
		word16 si_143;
		word16 di_144;
		fn0C00_01A4(ax_123, fs, wArg00, wArg02, wArg04, wArg06, wArg08, wArg0A, wArg0C, out cx_139, out dx_140, out bx_141, out bp_142, out si_143, out di_144);
		sp_136 = fp - 0x002C;
	}
	word16 sp_47 = sp_136 + 0x0002;
	word16 di_46;
	*diOut = Mem0[ss:sp_136 + 0x0000:word16];
	word16 si_48;
	*siOut = Mem0[ss:sp_47 + 0x0000:word16];
	word16 bp_50;
	*bpOut = Mem0[ss:sp_47 + 0x0002:word16];
	word16 bx_53;
	*bxOut = Mem0[ss:sp_47 + 0x0006:word16];
	word16 dx_55;
	*dxOut = Mem0[ss:sp_47 + 0x0008:word16];
	word16 cx_57;
	*cxOut = Mem0[ss:sp_47 + 0x000A:word16];
	return Mem0[ss:sp_47 + 0x000C:word16];
}

