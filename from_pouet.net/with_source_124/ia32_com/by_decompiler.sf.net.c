// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_124/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_7 Eq_8::*bx, Eq_8 * ds)
{
	bios_video_set_mode(0x13);
	ptr32 es_bx_6 = Mem0[ds:bx + 0x0000:segptr32];
	Eq_13 * es_7 = SLICE(es_bx_6, selector, 16);
	byte bl_19 = (byte) es_bx_6;
	int8 al_10 = 0x01;
	word16 ax_12 = DPB(ax, 0x01, 0, 8);
	while (true)
	{
		if (bl_19 + al_10 == 0x00)
		{
			al_10 = -al_10;
			ax_12 = DPB(ax_12, al_10, 0, 8);
		}
		byte Eq_13::*di_38 = &Eq_13::b0000;
		byte dl_39 = 0xC8;
		bl_19 = bl_19 + al_10;
		do
		{
			word16 cx_54 = 0x0140;
			byte cl_55 = 0x40;
			do
			{
				bcu8 al_62 = cl_55 + bl_19;
				if (al_62 >=u 0xA0)
					al_62 = al_62 - bl_19 - bl_19 + dl_39 & dl_39;
				es_7->*di_38 = (al_62 & 0x1F) + 0x10;
				cx_54 = cx_54 - 0x0001;
				di_38 = di_38 + 1;
				cl_55 = (byte) cx_54;
			} while (cx_54 != 0x0000);
			dl_39 = dl_39 - 0x01;
		} while (dl_39 != 0x00);
		al_10 = (byte) ax_12;
	}
}

