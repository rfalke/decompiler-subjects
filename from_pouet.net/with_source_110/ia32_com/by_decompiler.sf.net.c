// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_110/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_9 bx, Eq_7 Eq_8::*si, Eq_8 * ds)
{
	bios_video_set_mode(0x13);
	ptr32 ds_cx_8 = Mem0[ds:bx + 0x0000:segptr32];
	Eq_8 * ds_9 = SLICE(ds_cx_8, selector, 16);
	word16 cx_10 = (word16) ds_cx_8;
	do
	{
		uint8 al_15 = (byte) cx_10;
		__outb(0x03C9, al_15);
		__outb(0x03C9, al_15 >>u 0x01);
		__outb(0x03C9, al_15 >>u 0x02);
		cx_10 = cx_10 - 0x0001;
		word16 ax_14 = cx_10;
		uint8 cl_21 = (byte) cx_10;
	} while (cx_10 != 0x0000);
	do
	{
		byte al_35 = Mem0[ds_9:si + 0x0000:byte];
		ax_14 = DPB(ax_14, al_35, 0, 8);
		Eq_45 cl_37 = cl_21 >>u cl_21;
		if (cl_37 <u 0x00)
		{
			bx = 0x0000 - (cl_37 <u 0x00);
			byte cl_73 = cl_37 + al_35;
			if (cl_73 * 0x02 >= 0x00)
				bx.u0 = 0x0140;
			if (cl_73 * 0x02 <u 0x00)
				bx = -bx;
			Mem87[ds_9:si + 0x0000:byte] = Mem0[ds_9:si + 0x0000:byte] - 0x01;
		}
		Mem54[ds_9:bx + si:byte] = al_35;
		word16 si_55 = si + cx_10;
		cx_10 = cx_10 - 0x0001;
		si = (word16) (SEQ(si_55, si_55) + SEQ(ax_14, cx_10));
		cl_21 = (byte) cx_10;
		if (cx_10 != 0x0000)
			continue;
		int16 ax_66 = (int16) __inb(0x60);
		ax_14 = ax_66 - 0x0001;
	} while (ax_66 != 0x0001);
	bios_video_set_mode(0x03);
	return;
}

