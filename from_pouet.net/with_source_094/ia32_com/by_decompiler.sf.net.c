// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_094/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, uint16 dx, word16 si, byte Eq_14::*di)
{
	bios_video_set_mode(0x13);
	byte al_2 = 0x13;
	uint16 ax_20 = DPB(ax, 0x13, 0, 8);
	while (true)
	{
		int8 al_27 = al_2 + 0x9C;
		Eq_52 ax_28 = al_27 *s al_27;
		byte al_31 = ~(byte) (ax_28 >>u 0x0007);
		int16 dx_34 = dx - 0x00A0;
		uint16 ax_39 = (word16) (dx_34 *s DPB(ax_28 >>u 0x0007, al_31 & 0x7F, 0, 8)) + si;
		byte al_42 = (byte) (ax_39 >>u 0x0007) ^ (byte) ax_20;
		byte al_43 = al_42 & 0x20;
		word16 ax_44 = DPB(ax_39 >>u 0x0007, al_42 & 0x20, 0, 8);
		if ((al_42 & 0x20) != 0x00)
			al_43 = (byte) (ax_44 - (DPB(ax_20, ~(al_31 & 0x7F), 8, 8) >>u 0x000C));
		0xA000->*di = al_43;
		di = di + 1;
		word32 dx_ax_57 = SEQ(dx_34, di);
		uint32 dx_ax_60 = SEQ(dx_ax_57 % 0x0140, di);
		dx = dx_ax_57 % 0x0140;
		ax_20 = dx_ax_60 /u 0x0140;
		al_2 = (byte) (dx_ax_60 /u 0x0140);
		cx = cx - 0x0001;
		if (cx != 0x0000)
			continue;
		si = si + 0x0040;
	}
}

