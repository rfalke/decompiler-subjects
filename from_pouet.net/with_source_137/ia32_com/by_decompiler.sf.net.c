// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_137/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_7 Eq_8::*bx, word32 Eq_8::*si, Eq_109 di, Eq_8 * ds, word16 wArg00)
{
	bios_video_set_mode(0x13);
	ptr32 es_bp_6 = Mem0[ds:bx + 0x0000:segptr32];
	__outb(0x03C8, (byte) wArg00);
	Eq_18 * es_7 = SLICE(es_bp_6, selector, 16);
	int16 bp_64 = (word16) es_bp_6;
	uint16 ax_10 = wArg00;
	word16 sp_12 = fp + 0x0002;
	do
	{
		Eq_54 Eq_57::*sp_34 = sp_12 - 0x0002;
		Mem35[ss:sp_34 + 0x0000:word16] = sp_34;
		(ss->*sp_34).ptr0000 = sp_34 - 0x0002;
		uint16 cx_101 = 0x4E30;
		byte cl_32 = 0x30;
		sp_12 = sp_34 - 0x0002;
		do
		{
			ax_10 = __shrd(ax_10, bx, cl_32);
			Eq_29 al_100 = (byte) ax_10;
			if (al_100 >=u 0x3F)
			{
				al_100.u0 = 0x3F;
				ax_10 = DPB(ax_10, 0x3F, 0, 8);
			}
			__outb(0x03C9, al_100);
			cx_101 = cx_101 >>u 0x0005;
			cl_32 = (byte) cx_101;
			Eq_29 ch_102 = SLICE(cx_101, byte, 8);
		} while (cx_101 != 0x0000);
		bl = bl + 0x01;
		bx = DPB(bx, bl, 0, 8);
	} while (bl != 0x00);
	do
	{
		Eq_68 Eq_8::*bx_131 = Eq_8::a03C9;
		byte bh_133 = 0x03;
		do
		{
			bp_64 = bp_64 + bx_131;
			if (bp_64 >= 0x0000)
			{
				al_100 = Mem38[ds:bx_131 + 0x0001 + di:byte];
				ch_102 = Mem38[ds:bx_131 + 0x0040 + si:byte];
				ax_10 = DPB(ax_10, al_100, 0, 8);
				cx_101 = DPB(cx_101, ch_102, 8, 8);
			}
			byte al_103 = al_100 + ch_102;
			byte al_107 = __rcr(al_103, 0x01, cond(al_103));
			(ds->*(bx_131 | sp_34 - 0x0002)).wFFFFFFFF = bp_64;
			Eq_29 v24_116 = (ds->*bx_131).t0000;
			(ds->*bx_131).t0000 = (byte) (SEQ(al_107 - 0x01, al_107 - 0x01) - 0x0001);
			uint16 ax_121 = DPB(ax_10, v24_116.u1 - bh_133, 0, 8);
			ax_10 = ax_121 >>u 0x0005;
			al_100 = (byte) (ax_121 >>u 0x0005);
			di = (ax_121 >>u 0x0005) *s 0x0140;
			if (di != 0x0000)
			{
				al_100 = Mem117[ds:bx_131 + di:byte];
				ax_10 = DPB(ax_121 >>u 0x0005, al_100, 0, 8);
			}
			bx_131 = bx_131 + 1;
			ch_102 = (ds->*bx_131).t0000;
			bh_133 = SLICE(bx_131, byte, 8);
			cx_101 = DPB(cx_101, ch_102, 8, 8);
		} while (bx_131 != &Eq_8::t0000);
		di = sp_34 - 0x0002;
		ch_102.u0 = 0x40;
		cx_101 = DPB(cx_101, 0x40, 8, 8);
		while (cx_101 != 0x0000)
		{
			Mem147[es_7:di + 0x0000:word32] = Mem117[ds:si + 0x0000:word32];
			cx_101 = cx_101 - 0x0001;
			si = si + 1;
			di = di + 0x0004;
			ch_102 = SLICE(cx_101, byte, 8);
		}
		word16 ax_154 = DPB(ax_10, __inb(0x60), 0, 8);
		ax_10 = ax_154 - 0x0001;
		al_100 = (byte) (ax_154 - 0x0001);
	} while (ax_154 != 0x0001);
	(ss->*sp_34).ptr0000 = ax_154 - 0x0001;
	return;
}

