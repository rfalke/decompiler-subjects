// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_273/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte bl, selector ds)
{
	bios_video_set_mode(0x13);
	word16 bp_101 = 0x0200;
	word16 bx_20 = DPB(bx, 0xF0, 8, 8);
	word16 cx_10 = 0x0100;
	do
	{
		Mem11[ss:0x0200:word16] = cx_10;
		Mem18[ds:bx_20 + 0x0000:int16] = (int16) (sin((real64) Mem11[ss:0x0200:int16] * Mem11[ds:0x01F2:real32]) * Mem11[ds:0x01F4:real32]);
		bx_20 = bx_20 + 0x0001 + 0x0001;
		cx_10 = cx_10 - 0x0001;
	} while (cx_10 != 0x0000);
	do
	{
		__outb(0x03C8, 0x00);
		Mem59[ss:0x0200:word32] = 0x00000000;
		Mem60[ss:0x0204:word16] = 0x0000;
		word16 cx_102 = DPB(cx_10, 0x01, 8, 8);
		do
		{
			word16 bx_71 = 0x01FC;
			do
			{
				byte al_246 = Mem60[ss:bp_101 + 0x0001:byte];
				if (al_246 >u 0x3F)
					al_246 = 0x3F;
				__outb(0x03C9, al_246);
				Mem91[ss:bp_101 + 0x0000:word16] = Mem60[ss:bp_101 + 0x0000:word16] + Mem60[ds:bx_71 + 0x0000:word16];
				word16 bx_95 = bx_71 - 0x0001;
				bp_101 = bp_101 + 0x0001 + 0x0001;
				bx_71 = bx_95 - 0x0001;
			} while (bx_95 != 0xFE0B);
			bp_101 = 0x0200;
			cx_102 = cx_102 - 0x0001;
		} while (cx_102 != 0x0000);
		word16 ax_104 = Mem91[ds:0x01FE:word16];
		Mem106[ds:0x01F8:word16] = Mem91[ds:0x01F8:word16] + ax_104;
		word16 ax_107 = -ax_104;
		Mem112[ds:0x01FC:word16] = Mem106[ds:0x01FC:word16] + ax_107;
		if (Mem112[ds:0x01F8:word16] == 0x01E0 || Mem112[ds:0x01FC:word16] == 0x01E0)
			Mem243[ds:0x01FE:word16] = ax_107;
		word16 ax_121 = DPB(cs, SLICE(cs, byte, 8) + 0x10, 8, 8);
		word16 di_123 = 0x0000;
		word16 dx_127 = 0x00C8;
		do
		{
			word16 cx_140 = 0x0140;
			do
			{
				Mem155[ss:0x0200:word16] = (cx_140 << 0x0003) + SEQ(ds, 0xF000)[DPB(dx_127 + Mem112[ss:0x0210:word16], 0x00, 8, 8) * 0x0002];
				word16 ax_164 = (dx_127 << 0x0003) + SEQ(ds, 0xF000)[DPB(cx_140 + Mem155[ss:0x0210:word16], 0x00, 8, 8) * 0x0002] ^ Mem155[ss:0x0200:word16];
				byte al_165 = (byte) ax_164;
				byte al_167 = al_165 & 0x40;
				word16 ax_169 = DPB(ax_164, al_165 & 0x40, 0, 8);
				if ((al_165 & 0x40) != 0x00)
					al_167 = (byte) (ax_169 - 0x0001);
				Mem182[ax_121:di_123 + 0x0000:byte] = al_167 + Mem155[ax_121:di_123 + 0x0000:byte] + Mem155[ax_121:di_123 + 0x0001:byte] + Mem155[ax_121:di_123 + 0x0002:byte] >>u 0x02;
				di_123 = di_123 + 0x0001;
				cx_140 = cx_140 - 0x0001;
			} while (cx_140 != 0x0000);
			dx_127 = dx_127 - 0x0001;
		} while (dx_127 != 0x0000);
		do
			;
		while (((byte) __inw(0x03DA) & 0x08) != 0x00);
		do
			;
		while (((byte) __inw(0x03DA) & 0x08) == 0x00);
		Mem205[ss:fp - 0x0004:word16] = ax_121;
		Mem209[ss:fp - 0x0004:word16] = 0xA000;
		word16 si_212 = 0x0000;
		word16 di_213 = 0x0000;
		cx_10 = DPB(cx_140, 0x3F, 8, 8);
		while (cx_10 != 0x0000)
		{
			Mem223[0xA000:di_213 + 0x0000:word32] = Mem209[0xA000:si_212 + 0x0000:word32];
			si_212 = si_212 + 0x0004;
			di_213 = di_213 + 0x0004;
			cx_10 = cx_10 - 0x0001;
		}
		Mem231[ss:0x0210:word16] = Mem209[ss:0x0210:word16] + 0x0001;
	} while (__inb(0x60) != 0x01);
	msdos_terminate(0x00);
}

