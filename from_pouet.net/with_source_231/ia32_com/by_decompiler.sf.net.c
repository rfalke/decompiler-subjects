// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_231/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

Eq_2 fn0C00_0100(Eq_8 Eq_9::*bx, byte cl, byte ah, Eq_9 * ds, Eq_2 rArg0)
{
	bios_video_set_mode(0x13);
	ptr32 es_bx_10 = Mem0[ds:bx + 0x0000:segptr32];
	Eq_14 * es_11 = SLICE(es_bx_10, selector, 16);
	word16 bx_106 = (word16) es_bx_10;
	Eq_18 Eq_9::*si_110 = &Eq_9::t015A;
	do
	{
		cups16 ax_63 = (ds->*si_110).w0000;
		byte Eq_9::*si_67 = &si_110->w0000;
		do
			ax_63 = ax_63 + 0x1000;
		while (ax_63 >=u 0x0000);
		byte ah_80 = SLICE(ax_63 << 0x0002, byte, 8);
		word16 ax_89 = __aam(ds->*si_67);
		Eq_36 Eq_14::*di_111 = DPB(ax_63 << 0x0002, ah_80 + (ah_80 << 0x02), 8, 8);
		si_110 = si_67 + 0x0001;
		uint16 ax_108 = DPB(ax_89, cl, 0, 8) >>u 0x0001;
		cx = DPB(cx, (byte) ax_89, 0, 8) + 0x0001 << 0x0007;
		do
		{
			Mem124[ss:fp - 0x000C:word16] = 0x0140;
			real64 rLoc1_131 = (real64) ds->wFFF8;
			Eq_66 rLoc3_134 = (real64) ds->wFFFC / (real64) ds->tFFF2;
			real64 rLoc3_136 = cos(rLoc3_134);
			rLoc2 = __rndint(rLoc2 * sin(rLoc3_134)) * (real64) ds->tFFF2;
			ds->tFFF2 = (int32) (rLoc1_131 * rLoc3_136 + rLoc2);
			(es_11->*di_196).b0140 = SLICE(bx_194, byte, 8);
			cx = cx - 0x0001;
			di_111 = di_196;
			si_110 = si_195;
			bx_106 = bx_194;
			ax_108 = ax_108 + 0x0001;
			cl = (byte) cx;
			word16 bx_194 = bx_106;
			Eq_18 Eq_9::*si_195 = si_110;
			Eq_36 Eq_14::*di_196 = di_111;
		} while (cx != 0x0000);
	} while ((ax_108 ^ 0x0C80) != 0x0000);
	byte al_177;
	word16 ax_179 = DPB(ax_108 ^ 0x0C80, bios_kbd_get_keystroke(out al_177), 8, 8);
	real64 rArg0_181 = rArg0 / Mem161[ds:(bx_194 + 0x1FF9) + di_196:real64];
	ds->b5CC2 = al_177;
	(es_11->*di_196).w0000 = (ds->*si_195).w0000;
	(es_11->*di_196).w0002 = __in(ax_179);
	return rArg0_181;
}

