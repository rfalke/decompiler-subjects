// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_111/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_7 Eq_8::*bx, word16 si, byte Eq_13::*di, Eq_8 * ds)
{
	bios_video_set_mode(0x13);
	ptr32 ds_cx_8 = Mem0[ds:bx + 0x0000:segptr32];
	Eq_13 * ds_9 = SLICE(ds_cx_8, selector, 16);
	uint16 cx_10 = (word16) ds_cx_8;
	do
	{
		__outb(0x03C9, (byte) cx_10);
		uint16 ax_16 = cx_10 >>u 0x0001;
		__outb(0x03C9, (byte) ax_16);
		__outb(0x03C9, (byte) (ax_16 >>u 0x0001));
		cx_10 = cx_10 - 0x0001;
		uint16 ax_18 = ax_16 >>u 0x0001;
		bool C_23 = cond(ax_16 >>u 0x0001);
		uint8 cl_27 = (byte) cx_10;
	} while (cx_10 != 0x0000);
	do
	{
		Eq_45 si_37 = si + ax_18 + C_23 + cx_10;
		word16 ax_45 = DPB(ax_18, (Mem0[ds_9:si_37 + 0x0000:byte] - Mem0[ds_9:si_37 + 0x0001:byte] - (si_37 <u 0x0000) >> 0x01) + Mem0[ds_9:si_37 + 0x0001:byte], 0, 8);
		byte al_48 = (byte) (ax_45 - 0x0001);
		Eq_71 cl_49 = cl_27 >>u cl_27;
		Eq_73 cl_52 = cl_49 + al_48 + (cl_49 <u 0x00);
		si = si_37 + 0x0001;
		ax_18 = ax_45 - 0x0001;
		C_23 = cond(cl_52 * 0x02);
		byte Eq_13::*bx_61 = di;
		if (cl_52 * 0x02 >= 0x00)
			bx_61 = &Eq_13::bFFFFFEC0;
		if (cl_52 * 0x02 >=u 0x00)
		{
			bx_61 = bx_61 ^ di;
			C_23 = false;
		}
		Mem69[ds_9:bx_61 + (si_37 + 0x0001):byte] = al_48;
		cx_10 = cx_10 - 0x0001;
		cl_27 = (byte) cx_10;
		if (cx_10 != 0x0000)
			continue;
		int16 ax_77 = (int16) __inb(0x60);
		ax_18 = ax_77 - 0x0001;
		byte al_79 = (byte) (ax_77 - 0x0001);
	} while (ax_77 != 0x0001);
	bios_video_set_mode(al_79);
	return;
}

