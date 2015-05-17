// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_119/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 bx, word16 si, selector ds)
{
	bios_video_set_mode(0x13);
	ptr32 ds_cx_10 = Mem0[ds:bx + 0x0000:segptr32];
	byte al_17 = 0x13;
	selector ds_11 = SLICE(ds_cx_10, selector, 16);
	word16 cx_12 = (word16) ds_cx_10;
	byte cl_13 = (byte) ds_cx_10;
	do
	{
		word16 ax_22 = cl_13 *u al_17;
		byte ah_23 = SLICE(ax_22, byte, 8);
		__outb(0x03C9, ah_23);
		__outb(0x03C9, ah_23);
		word16 ax_125 = __shrd(DPB(ax_22, ah_23, 0, 8), cx_12, 0x12);
		al_17 = (byte) ax_125;
		__outb(0x03C9, al_17);
		cx_12 = cx_12 - 0x0001;
		byte C_107 = cond(ax_22);
		cl_13 = (byte) cx_12;
	} while (cx_12 != 0x0000);
	do
	{
		bx = DPB(bx, 0xFC, 8, 8);
		do
		{
			Mem59[ds_11:bx + 0x0000:byte] = bl;
			bx = bx + 0x0001;
			bl = (byte) bx;
		} while (bx != 0xFFC0);
		do
		{
			word16 ax_71 = ax_125 + 0x0001;
			byte al_73 = (byte) ax_71 + Mem59[ds_11:bx - 0x0141:byte] + C_107;
			byte al_77 = __rcr(al_73, 0x01, cond(al_73));
			Mem82[ds_11:bx + 0x0000:byte] = al_77;
			ax_125 = DPB(ax_71, al_77, 0, 8);
			C_107 = (al_73 & 0x02) != 0x00;
			bx = bx - 0x0001;
		} while (bx != 0x0000);
		byte cl_112 = 0x48;
		cx_12 = DPB(cx_12, 0x48, 0, 8);
		do
		{
			word16 ax_98 = (word16) __rdtsc();
			bx = bx + ax_98 + 0x0040;
			C_107 = cond(bx);
			cx_111 = cx_12;
			do
			{
				word16 cx_111;
				Mem113[ds_11:bx + 0x0000:byte] = cl_112;
				bx = bx + 0x0000 + si;
				cx_111 = cx_111 - 0x0001;
				bl = (byte) bx;
				cl_112 = (byte) cx_111;
			} while (cx_111 != 0x0000);
			word16 ax_124 = DPB(ax_98, __inb(0x60), 0, 8);
			cx_12 = cx_12 - 0x0001;
			ax_125 = ax_124 - 0x0001;
			cl_112 = (byte) cx_12;
		} while (ax_124 != 0x0001 && cx_12 != 0x0000);
	} while (ax_124 != 0x0001);
	return;
}

