// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_186/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word32 edx, byte bl, Eq_27 * ds)
{
	bios_video_set_mode(0x13);
	Eq_7 Eq_27::*bx_6 = DPB(bx, 0xF0, 8, 8) + 0x0001;
	word32 ebx_13 = DPB(ebx, 0xF0, 8, 8);
	int16 cx_15 = 0x0100;
	bx_14 = bx_6;
	do
	{
		Eq_7 Eq_27::*bx_14;
		ss->w0200 = cx_15;
		(ds->*bx_14).w0000 = (int16) (sin((real64) ss->w0200 * ds->t01AA) * ds->t01AC);
		word16 bx_24 = &bx_14->w0000;
		cx_15 = cx_15 - 0x0001;
		bx_14 = bx_24 + 0x0001;
		ebx_13 = DPB(ebx_188, bx_24 + 0x0001, 0, 16);
		bcu8 cl_32 = (byte) cx_15;
		word32 ebx_188 = ebx_13;
	} while (cx_15 != 0x0000);
	__outb(0x03C8, 0x00);
	ui32 edx_109 = DPB(edx, 0x03C9, 0, 16);
	word16 cx_39 = DPB(cx_15, 0x01, 8, 8);
	word16 di_40 = 0x0000;
	byte bh_180 = 0x00;
	word32 ebx_101 = DPB(ebx_188, 0x0000, 0, 16);
	byte bl_183 = 0x00;
	do
	{
		word16 di_56 = di_40 & 0x003F;
		byte al_58 = (byte) di_56;
		byte ah_186 = SLICE(di_56, byte, 8);
		di_40 = di_56 + 0x0002;
		if (cl_32 <=u 0xC1)
			ah_186 = al_58;
		else if (cl_32 >=u 0xE1)
		{
			bh_180 = al_58;
			ebx_101 = DPB(ebx_101, al_58, 8, 8);
		}
		else
		{
			bl_183 = al_58;
			ebx_101 = DPB(ebx_101, al_58, 0, 8);
		}
		__outb(0x03C9, bh_180);
		__outb(0x03C9, bl_183);
		__outb(0x03C9, ah_186);
		cx_39 = cx_39 - 0x0001;
		cl_32 = (byte) cx_39;
	} while (cx_39 != 0x0000);
	do
	{
		Eq_105 Eq_104::*di_107 = &Eq_104::t0000;
		word16 dx_108 = 0x00C8;
		edx_109 = DPB(edx_109, 0x00C8, 0, 16);
		do
		{
			word16 cx_113 = 0x0140;
			do
			{
				ebx_101 = DPB(ebx_101, (ds.*bx_6)[DPB(cx_113 + ss->w0200, 0x00, 8, 8) * 0x0002 / 0x0004], 0, 16) + edx_109 * 0x00000008;
				word16 ax_139 = (cx_113 << 0x0003) + (ds.*bx_6)[(DPB(dx_108 + ss->w0200, 0x00, 8, 8) * 0x0002) / 0x0004] ^ (word16) ebx_101;
				byte al_140 = (byte) ax_139;
				byte al_142 = al_140 & 0x40;
				word16 ax_143 = DPB(ax_139, al_140 & 0x40, 0, 8);
				if ((al_140 & 0x40) != 0x00)
				{
					ax_143 = ax_143 - 0x0001;
					al_142 = (byte) (ax_143 - 0x0001);
				}
				(0xA000->*di_107).b0000 = (byte) (DPB(ax_143, al_142 + (0xA000->*di_107).b0000 + (0xA000->*di_107).b0001 + (0xA000->*di_107).b0002 >>u 0x02, 0, 8) + 0x0001);
				di_107 = di_107 + 1;
				cx_113 = cx_113 - 0x0001;
			} while (cx_113 != 0x0000);
			dx_108 = dx_108 - 0x0001;
			edx_109 = DPB(edx_109, dx_108, 0, 16);
		} while (dx_108 != 0x0000);
		ss->w0200 = ss->w0200 - 0x0001;
	} while (__inb(0x60) != 0x01);
	return;
}

