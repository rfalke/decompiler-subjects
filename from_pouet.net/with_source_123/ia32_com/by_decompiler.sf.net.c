// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_123/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte bl, byte ch, Eq_9 * ds)
{
	bios_video_set_mode(0x13);
	msdos_display_string(ds, 0x0134);
	Eq_14 * bx_4 = DPB(bx, 0xA0, 8, 8);
	word16 ax_10 = DPB(ax, 0x09, 8, 8);
	bx_21 = bx_4;
	while (true)
	{
		Eq_14 * bx_21;
		bx_21 = bx_21 + 0x0001;
		int16 bp_35 = 0x0A00;
		do
		{
			bx_21 = DPB(bx_21, 0x1E, 8, 8);
			Eq_24 di_50 = (bp_35 << 0x0002) + bx_21;
			uint32 dx_ax_51 = di_50 *u DPB(ax_10, (bx_4->a0000)[bp_35], 0, 8);
			byte al_52 = (byte) dx_ax_51;
			ax_10 = (word16) dx_ax_51;
			word16 cx_57 = DPB(cx, 0x08, 0, 8);
			while (cx_57 != 0x0000)
			{
				Mem62[bx_4:di_50 + 0x0000:byte] = al_52;
				di_50 = di_50 + 0x0001;
				cx_57 = cx_57 - 0x0001;
			}
			word16 di_68 = di_50 + bx_21 << 0x0001;
			cx = DPB(cx_57, 0x08, 0, 8);
			while (cx != 0x0000)
			{
				Mem76[bx_4:di_68 + 0x0000:byte] = al_52;
				di_68 = di_68 + 0x0001;
				cx = cx - 0x0001;
			}
			bp_35 = bp_35 - 0x0001;
		} while (bp_35 >= 0x0000);
	}
}

