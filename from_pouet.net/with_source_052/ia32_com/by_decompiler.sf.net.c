// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_052/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_40 Eq_51::*bx, word16 si, byte ch, Eq_51 * ds)
{
	bios_video_set_mode(0x13);
	word16 ax_21 = DPB(ax, 0x20, 8, 8);
	__outw(0x03D4, ax_21);
	while (true)
	{
		Eq_50 es_di_34 = (ds->*bx).t0000;
		Eq_24 * es_35 = SLICE(es_di_34, selector, 16);
		byte Eq_24::*di_36 = (word16) es_di_34;
		do
		{
			word16 bx_49 = &bx->t0000;
			byte bl_50 = (byte) bx_49;
			byte bh_51 = SLICE(bx_49, byte, 8);
			do
			{
				cx = DPB(cx, bl_50, 0, 8);
				ax_21 = SEQ((int32) ax_21 % cx, ax_21) / cx + si;
				es_35->*di_36 = (byte) ax_21;
				bl_50 = bl_50 + 0x01;
				di_36 = di_36 + 1;
				bx_49 = DPB(bx_49, bl_50, 0, 8);
			} while (bl_50 != 0x00);
			bx = DPB(bx_49, bh_51 + 0x01, 8, 8);
		} while (bh_51 != 0x01);
		si = si + 0x0001;
	}
}

