// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_046/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_30 Eq_17::*bx, word16 bp, int16 si, Eq_9 Eq_8::*di, byte ah, byte dh, Eq_8 * ds)
{
	bios_video_set_mode(0x13);
	Eq_7 ds_cx_10 = (ds->*di).t0002;
	word16 ax_23 = DPB(ax, 0x13, 0, 8);
	Eq_17 * ds_11 = SLICE(ds_cx_10, selector, 16);
	int16 cx_12 = (word16) ds_cx_10;
	byte cl_13 = (byte) ds_cx_10;
	do
	{
		word16 ax_29 = ax_23 + 0x0001;
		if (ax_29 != 0x0001)
		{
			(ds_11->*bx).t0000 = (ds_11->*bx).t0000 - dh - C;
			(ds_11->*bx).t0000 = (ds_11->*bx).t0000 | 0x10;
		}
		bp = __rol(bp, cl_13);
		int32 dx_ax_46 = si *s cx_12;
		byte Eq_17::*bx_39 = bx + bp + ((bp & 0x0001 << 0x10 - cl_13) != 0x0000);
		word16 ax_41 = DPB(ax_29 + 0x0001, __inb(0x60), 0, 8);
		byte al_52 = Mem0[ds_11:bx_39 + (uint16) ((byte) dx_ax_46):byte] + Mem0[ds_11:bx_39 + di:byte];
		dh = SLICE(dx_ax_46, byte, 24);
		ax_23 = DPB(cx_12, al_52, 0, 8);
		C = cond(al_52);
		bx = bx_39 - 0x0001;
		cx_12 = ax_41 - 0x0001;
		cl_13 = (byte) (ax_41 - 0x0001);
	} while (ax_41 != 0x0001);
	return;
}

