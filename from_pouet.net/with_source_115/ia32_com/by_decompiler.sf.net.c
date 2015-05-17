// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_115/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte Eq_7::*bx, word16 si, Eq_31 Eq_7::*di)
{
	bios_video_set_mode(0x13);
	Eq_7 * ax_6 = DPB(ax, 0x20, 8, 8);
	__outw(0x03D4, ax_6);
	ax_22 = ax_6;
	while (true)
	{
		Eq_7 * ax_22;
		word16 cx_32 = (word16) bh;
		uint16 dx_34 = (int32) ax_22 % (cx_32 + 0x0001);
		Eq_24 ax_36 = SEQ(dx_34, ax_22) /u (cx_32 + 0x0001);
		int16 ax_48 = SLICE(ax_36 *s DPB(cx_32 + 0x0001, bl, 8, 8), byte, 16) *s (byte) (ax_36 + si);
		cups16 ax_52 = DPB(ax_48, SLICE(ax_48, byte, 8) & 0x1C, 8, 8);
		byte dh_57 = 0x10;
		cups16 dx_58 = DPB(dx_34, 0x10, 8, 8);
		bx_62 = bx;
		do
		{
			byte Eq_7::*bx_62;
			ax_6->*bx_62 = dh_57;
			bh = bh - 0x01;
			dx_58 = dx_58 + ax_36;
			bx_62 = DPB(bx_62, bh, 8, 8);
			dh_57 = SLICE(dx_58, byte, 8);
		} while (dx_58 <u ax_52);
		byte al_75 = (ax_6->*di).b0060;
		(0xA000->*di).b0000 = al_75;
		bx = bx + 0x0001;
		ax_22 = DPB(ax_52, al_75, 0, 8);
		di = di + 1;
		bh = SLICE(bx, byte, 8);
		bl = (byte) bx;
		if (bx != &Eq_7::b0000)
			continue;
		si = si + 0x0001;
	}
}

