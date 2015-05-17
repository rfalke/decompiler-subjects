// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_134/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_42 Eq_58::*di, byte ch)
{
	bios_video_set_mode(0x13);
	__outb(0x03C8, 0x00);
	word16 dx_27 = 0x03C9;
	byte cl_11 = 0xFF;
	word16 cx_13 = DPB(cx, 0xFF, 0, 8);
	do
	{
		byte al_17 = ~cl_11;
		__outb(0x03C9, al_17);
		__outb(0x03C9, al_17 & 0x0F);
		__outb(0x03C9, al_17 & 0x0F);
		cx_13 = cx_13 - 0x0001;
		cl_11 = (byte) cx_13;
	} while (cx_13 != 0x0000);
	do
	{
		word16 cx_39 = DPB(cx_13, 0x06, 8, 8);
		do
		{
			word16 di_44 = &di->b0140;
			dx_27 = __ror(dx_27 ^ di_44, 0x0B);
			byte dh_48 = SLICE(dx_27, byte, 8);
			byte Eq_58::*di_51 = __rol(di_44, 0x07) + dx_27;
			0xA000->*di_51 = dh_48 & 0x5F;
			Eq_62 al_53 = dh_48 & 0x5F;
			di = di_51 + 0x0001;
			cx_39 = cx_39 - 0x0001;
		} while (cx_39 != 0x0000);
		cx_13 = DPB(cx_39, 0xFA, 8, 8);
		di = &Eq_58::t0000;
		do
		{
			byte al_73 = al_53 + Mem57[0xA000:di + 0x0000:byte] + Mem57[0xA000:di + 0x0140:byte] + Mem57[0xA000:di - 0x0140:byte];
			(0xA000->*di).t0000 = al_73 >>u 0x02;
			al_53 = al_73 >>u 0x02;
			di = di + 1;
			cx_13 = cx_13 - 0x0001;
		} while (cx_13 != 0x0000);
	} while (__inb(0x60) != 0x81);
	bios_video_set_mode(0x03);
	msdos_terminate_program20();
}

