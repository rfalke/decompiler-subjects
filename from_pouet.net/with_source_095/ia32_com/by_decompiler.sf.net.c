// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_095/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, word16 bx, byte ah, selector ds)
{
	bios_video_set_mode(0x13);
	ptr32 es_di_6 = Mem0[ds:bx + 0x0000:segptr32];
	__outb(0x03C8, 0x20);
	selector es_7 = SLICE(es_di_6, selector, 16);
	word16 di_101 = (word16) es_di_6;
	byte al_10 = 0x20;
	word16 ax_12 = DPB(ax, 0x20, 0, 8);
	bx_22 = bx;
	do
	{
		word16 bx_22;
		__outb(0x03C9, al_10);
		byte al_25 = (byte) bx_22;
		__outb(0x03C9, al_25);
		__outb(0x03C9, al_25);
		word16 ax_31 = ax_12 + 0x0001;
		byte al_32 = (byte) ax_31;
		byte bl_30 = (byte) bx_22;
		al_10 = al_32 & 0x7F;
		ax_12 = DPB(ax_31, al_32 & 0x7F, 0, 8);
		if ((al_32 & 0x7F) == 0x00)
			__outb(0x03C9, al_32 & 0x7F);
		cx = cx - 0x0001;
	} while (cx != 0x0000);
	while (true)
	{
		word16 dx_56 = 0x00CC;
		byte dl_57 = 0xCC;
		do
		{
			word16 cx_69 = 0x013F;
			byte cl_70 = 0x3F;
			do
			{
				byte al_103;
				if ((bl_30 & 0x40) == 0x00)
					al_103 = cl_70 | dl_57;
				else
					al_103 = cl_70 ^ dl_57;
				Mem89[es_7:di_101 + 0x0000:byte] = al_103 ^ bl_30;
				cx_69 = cx_69 - 0x0001;
				di_101 = di_101 + 0x0001;
				cl_70 = (byte) cx_69;
			} while (cx_69 != 0x0000);
			dx_56 = dx_56 - 0x0001;
			dl_57 = (byte) dx_56;
		} while (dx_56 >= 0x0000);
		bl_30 = Mem89[bx:0x046C:byte];
		bx_22 = DPB(bx_22, bl_30, 0, 8);
		di_101 = ~bx_22;
	}
}

