// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_189/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 ax, word16 si, Eq_9 Eq_17::*di)
{
	bios_video_set_mode(0x13);
	word16 cx_16 = ax;
	do
	{
		(0x8000->*di).t0000 = (((byte) di ^ SLICE(di, byte, 8)) & 0x3F) << 0x02;
		cx_16 = cx_16 - 0x0001;
		di = di + 1;
		byte cl_27 = (byte) cx_16;
		byte ch_28 = SLICE(cx_16, byte, 8);
	} while (cx_16 != 0x0000);
	__outb(0x03C8, 0x40);
	word16 bx_33 = 0x0040;
	uint8 bl_34 = 0x40;
	do
	{
		__outb(0x03C9, 0x00);
		Eq_43 al_39 = bl_34 >>u 0x01;
		__outb(0x03C9, al_39);
		__outb(0x03C9, al_39 >>u 0x01);
		bl_34 = bl_34 + 0x01;
		bx_33 = DPB(bx_271, bl_34, 0, 8);
		word16 bx_271 = bx_33;
	} while (bl_34 != 0x00);
	byte bl_46 = 0x40;
	word16 bx_110 = DPB(bx_271, 0x40, 0, 8);
	do
	{
		bl_46 = bl_46 - 0x01;
		__outb(0x03C9, cl_27);
		__outb(0x03C9, cl_27);
		__outb(0x03C9, bl_46);
		bx_110 = DPB(bx_110, bl_46, 0, 8);
	} while (bl_46 != 0x00);
	Mem60[ss:fp - 0x0002:word16] = 0x9000;
	Mem65[ss:fp - 0x0002:word16] = 0xA000;
	Eq_89 di_105 = 0x0000;
	do
	{
		Mem73[0x9000:di_105 + 0x0000:byte] = ch_28;
		cx_16 = cx_16 + si;
		ch_28 = SLICE(cx_16, byte, 8);
		si = si - 0x03C9;
		di_105 = di_105 + 0x0001;
	} while (di_105 != 0x0000);
	do
	{
		di_105 = di_105 + 0x0004;
		Eq_106 Eq_173::*si_106 = &Eq_173::t0000;
		byte bl_109 = 0xC8;
		bx_110 = DPB(bx_110, 0xC8, 0, 8);
		do
		{
			word16 cx_130 = 0x0140;
			byte cl_131 = 0x40;
			do
			{
				Eq_106 Eq_173::*wLoc02_148 = si_106;
				Eq_89 wLoc04_150 = di_105;
				word16 si_151 = 0x0003;
				uint8 Eq_17::*bp_152 = &Eq_17::b0000;
				di_156 = di_105;
				do
				{
					Eq_89 di_156;
					di_156 = di_156 >>u 0x0001;
					byte al_160 = bl_109 - 0x64 - Mem73[0x9000:di_156 + 0x0000:byte];
					byte al_166 = cl_131 - 0xA0 - Mem73[0x9000:di_156 + 0x0040:byte];
					word16 ax_168 = al_166 *s al_166 + al_160 *s al_160;
					int16 ax_173 = DPB(ax_168, (byte) ax_168 | 0x03, 0, 8);
					bp_152 = bp_152 + SEQ(0xFFFFFFFF % ax_173, 0xFFFF) / ax_173;
					si_151 = si_151 - 0x0001;
				} while (si_151 != 0x0000);
				uint8 Eq_17::*ax_188 = bp_152;
				Eq_152 al_190 = (byte) bp_152;
				byte ah_191 = SLICE(bp_152, byte, 8);
				if ((al_190 & 0x80) == 0x00)
				{
					byte al_258 = Mem73[0x8000:bp_152 + si_106:byte];
					al_190 = al_258 >>u 0x02;
					ax_188 = DPB(bp_152, al_258 >>u 0x02, 0, 8);
					wLoc02_148 = si_106;
					wLoc04_150 = di_105;
				}
				word16 ax_207 = DPB(ax_188, ah_191, 8, 8);
				if (ah_191 != 0x00)
				{
					al_190.u1 = 0xFF;
					ax_207 = DPB(ax_207, 0xFF, 0, 8);
				}
				(0xA000->*wLoc02_148).t0000 = al_190;
				cx_130 = cx_130 - 0x0001;
				di_105 = wLoc04_150;
				si_106 = wLoc02_148 + 1;
				cl_131 = (byte) cx_130;
			} while (cx_130 != 0x0000);
			bx_110 = bx_110 - 0x0001;
			bl_109 = (byte) bx_110;
		} while (bx_110 != 0x0000);
		do
		{
			byte al_234 = __inb(0x03DA);
			ax_207 = DPB(ax_272, al_234 & 0x08, 0, 8);
			word16 ax_272 = ax_207;
		} while ((al_234 & 0x08) == 0x00);
	} while (DPB(ax_272, __inb(0x60), 0, 8) != 0x0001);
	__syscall(0x10);
	return;
}

