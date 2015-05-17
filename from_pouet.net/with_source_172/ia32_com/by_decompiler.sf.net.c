// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_172/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_39 Eq_34::*di, byte bl, Eq_9 * ds)
{
	bios_video_set_mode(0x13);
	msdos_display_string(ds, 0x017C);
	word16 cx_15 = 0x0300;
	do
	{
		real64 rLoc1_20 = sin((real64) cx_15 * 21167);
		__outb(0x03C9, (byte) (int16) (rLoc1_20 * rLoc1_20 * 63));
		cx_15 = cx_15 - 0x0001;
	} while (cx_15 != 0x0000);
	Eq_34 bx_28 = DPB(bx, 0xA0, 8, 8);
	do
	{
		word16 ax_36 = di - 0x0530;
		word32 dx_ax_38 = SEQ(0x0000, ax_36);
		uint32 dx_ax_41 = SEQ(dx_ax_38 % 0x0140, ax_36);
		int16 dx_43 = dx_ax_38 % 0x0140 >> 0x0005;
		word32 dx_ax_44 = SEQ(dx_43, dx_ax_41 /u 0x0140);
		Eq_57 ax_53 = (int16) (byte) (SEQ(dx_ax_44 % 0x0D, dx_ax_41 /u 0x0140) /u 0x0D);
		(bx_28->*di).t0000 = SEQ(bx_28, ax_53)[dx_43 * 0x0050] << 0x05;
		byte dl_50 = (byte) (dx_ax_44 % 0x0D);
		di = di - 0x0001;
		cx_15 = cx_15 - 0x0001;
	} while (cx_15 != 0x0000);
	do
	{
		bcu8 al_71 = (bx_28->*di).b0140 + (bx_28->*di).b0001;
		bcu8 al_75 = al_71 + (bx_28->*di).b0001;
		uint16 ax_83 = DPB(ax_53, (al_71 <u 0x00) + dl_50 + (al_75 <u 0x00) + dl_50 + (al_75 + (bx_28->*di).b0140 <u 0x00), 8, 8);
		(bx_28->*di).t0000 = (byte) (ax_83 >>u 0x0002);
		ax_53 = ax_83 >>u 0x0002;
		di = di - 0x0001;
		cx_15 = cx_15 - 0x0001;
	} while (cx_15 != 0x0000 || __inb(0x60) != 0x01);
	msdos_terminate_program20();
}

