// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_199/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte bl, selector ds)
{
	bios_video_set_mode(0x13);
	word16 bx_10 = DPB(bx, 0xF0, 8, 8);
	word16 cx_11 = 0x0100;
	do
	{
		Mem12[ss:0x0200:word16] = cx_11;
		Mem19[ds:bx_10 + 0x0000:int16] = (int16) (sin((real64) Mem12[ss:0x0200:int16] * Mem12[ds:0x01DC:real32]) * Mem12[ds:0x01E0:real32]);
		Mem21[ds:bx_10 + 0x0000:word32] = (int32) Mem19[ds:bx_10 + 0x0000:word16];
		cx_11 = cx_11 - 0x0001;
		bx_10 = bx_10 + 0x0004;
		byte cl_28 = (byte) cx_11;
	} while (cx_11 != 0x0000);
	__outb(0x03C8, 0x00);
	word16 cx_33 = DPB(cx_11, 0x01, 8, 8);
	word16 si_34 = 0x0000;
	byte bh_217 = 0x00;
	byte bl_219 = 0x00;
	do
	{
		word16 si_49 = si_34 & 0x003F;
		byte al_51 = (byte) si_49;
		byte ah_221 = SLICE(si_49, byte, 8);
		si_34 = si_49 + 0x0002;
		if (cl_28 <=u 0xC1)
			ah_221 = al_51;
		else if (cl_28 >=u 0xE1)
			bh_217 = al_51;
		else
			bl_219 = al_51;
		__outb(0x03C9, ah_221);
		__outb(0x03C9, bl_219);
		__outb(0x03C9, bh_217);
		cx_33 = cx_33 - 0x0001;
		cl_28 = (byte) cx_33;
	} while (cx_33 != 0x0000);
	do
	{
		word16 ax_90 = DPB(cs, SLICE(cs, byte, 8) + 0x10, 8, 8);
		word16 di_108 = 0x0000;
		word16 dx_102 = 0x00C8;
		do
		{
			word16 cx_109 = 0x0140;
			do
			{
				Mem126[ss:0x0204:word16] = (cx_109 << 0x0003) + SEQ(ds, 0xF000)[DPB(dx_102 + Mem21[ss:0x0200:word16], 0x00, 8, 8) * 0x0004];
				word16 ax_135 = (dx_102 << 0x0003) + SEQ(ds, 0xF000)[DPB(cx_109 + Mem126[ss:0x0200:word16], 0x00, 8, 8) * 0x0004] ^ Mem126[ss:0x0204:word16];
				byte al_136 = (byte) ax_135;
				byte al_138 = al_136 & 0x40;
				word16 ax_140 = DPB(ax_135, al_136 & 0x40, 0, 8);
				if ((al_136 & 0x40) != 0x00)
					al_138 = (byte) (ax_140 - 0x0001);
				Mem153[ax_90:di_108 + 0x0000:byte] = al_138 + Mem126[ax_90:di_108 + 0x0000:byte] + Mem126[ax_90:di_108 + 0x0001:byte] + Mem126[ax_90:di_108 + 0x0002:byte] >>u 0x02;
				di_108 = di_108 + 0x0001;
				cx_109 = cx_109 - 0x0001;
			} while (cx_109 != 0x0000);
			dx_102 = dx_102 - 0x0001;
		} while (dx_102 != 0x0000);
		do
			;
		while (((byte) __inw(0x03DA) & 0x08) != 0x00);
		do
			;
		while (((byte) __inw(0x03DA) & 0x08) == 0x00);
		Mem177[ss:fp - 0x0004:word16] = ax_90;
		Mem181[ss:fp - 0x0004:word16] = 0xA000;
		word16 si_184 = 0x0000;
		word16 di_185 = 0x0000;
		word16 cx_188 = 0x3E80;
		while (cx_188 != 0x0000)
		{
			Mem197[0xA000:di_185 + 0x0000:word32] = Mem181[0xA000:si_184 + 0x0000:word32];
			si_184 = si_184 + 0x0004;
			di_185 = di_185 + 0x0004;
			cx_188 = cx_188 - 0x0001;
		}
		Mem206[ss:0x0200:word32] = Mem181[ss:0x0200:word32] + 0x00000001;
	} while (__inb(0x60) != 0x01);
	return;
}

