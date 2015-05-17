// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_047/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(bool Eq_7::*cx, segptr32 Eq_8::*bx, byte dl, byte dh, Eq_8 * ds)
{
	bios_video_set_mode(0x13);
	Eq_7 * ds_7 = SLICE(ds->*bx, selector, 16);
	while (true)
	{
		ds_7->*cx = (dl & ch) < 0x00;
		byte bh_21 = SLICE(cx, byte, 8);
		dl = dl - bh_21;
		byte bl_22 = (byte) cx;
		Eq_28 bh_28 = bh_21 | bl_22;
		dx = DPB(dx, dl, 0, 8);
		word16 bx_29 = DPB(cx, bh_28, 8, 8);
		if (bh_28 < 0x00)
			bx_29 = DPB(cx, -(bh_28 >>u 0x01), 8, 8);
		Mem39[ds_7:DPB(bx_29, bl_22 + dh, 0, 8):byte] = dl;
		cx = cx - 0x0001;
		ch = SLICE(cx, byte, 8);
		if (cx != Eq_7::a0000)
			continue;
		dx = dx + 0x0001;
		dl = (byte) (dx + 0x0001);
		dh = SLICE(dx + 0x0001, byte, 8);
	}
}

