// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_275/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, Eq_54 Eq_55::*bx, Eq_55 * ds)
{
	bios_video_set_mode(0x13);
	__outb(0x03C8, 0x00);
	word16 ax_14 = 0x0000;
	do
	{
		word16 ax_30 = __ror(ax_14, 0x02);
		byte al_20 = (byte) (ax_14 + 0x0001);
		byte al_295 = (byte) ax_30;
		if ((al_20 & 0x0F) != 0x00)
		{
			ax_30 = __ror(ax_30, 0x01);
			al_295 = (byte) ax_30;
		}
		__outb(0x03C9, al_295);
		__outb(0x03C9, al_295);
		if ((al_20 & 0x0F) != 0x00)
			al_295 = (byte) __rol(ax_30, 0x01);
		__outb(0x03C9, al_295);
		byte al_49 = (byte) ax_14;
		ax_14 = DPB(ax_14, al_49 + 0x01, 0, 8);
	} while (al_49 != 0x01);
	ptr32 es_bp_61 = Mem0[ds:bx + 0x0000:segptr32];
	word16 bp_63 = (word16) es_bp_61;
	Eq_62 * es_62 = SLICE(es_bp_61, selector, 16);
	Eq_64 bp_147 = bp_63 << 0x0001;
	do
	{
		bcu8 Eq_55::*si_103 = ds->ptr01FC;
		do
		{
			if (Mem0[ss:bp_147 + si_103:byte] == cl)
			{
				Eq_72 Eq_55::*di_264 = (si_103 << 0x0004) + ds->ptr01FC;
				word32 eax_267 = (word32) __rdtsc() ^ ds->dw020A;
				(ds->*di_264).w0000 = (int16) (byte) eax_267;
				int16 ax_278 = (int16) SLICE((word16) eax_267, byte, 8);
				(ds->*di_264).w0002 = ax_278;
				(ds->*di_264).dw0004 = 0x43800000;
				word16 ax_284 = DPB(ax_278, 0x00, 8, 8);
				word32 eax_286 = DPB(__bswap(DPB(eax_267, ax_278, 0, 16)), ax_284 + 0x0001, 0, 16);
				(ds->*di_264).w0008 = ax_284 + 0x0001;
				Mem289[ss:bp_147 + si_103:byte] = Mem287[ss:bp_147 + si_103:byte] + 0x01;
				ds->dw020A = ds->dw020A + eax_286;
			}
			si_103 = si_103 - 0x0001;
		} while (si_103 != &Eq_55::b0000);
		do
		{
			bcu8 v29_133 = (bp_63 << 0x0001)->*si_103 - 0x11;
			(bp_63 << 0x0001)->*si_103 = v29_133;
			if (v29_133 <u 0x00)
				(bp_63 << 0x0001)->*si_103 = 0x01;
			cx = cx - 0x0001;
			si_103 = si_103 + 1;
			byte cl_140 = (byte) cx;
		} while (cx != 0x0000);
		ds->dw0200 = ds->dw0200 + 0x00000001;
		bcu8 Eq_55::*si_144 = ds->ptr01FC;
		do
		{
			Eq_192 Eq_55::*di_155 = (si_144 << 0x0004) + ds->ptr01FC;
			Eq_200 rLoc1_159 = (ds->*di_155).t0004 - (real64) (ds->*di_155).w0008 * ds->t01F8;
			(ds->*di_155).t0004 = rLoc1_159;
			int16 Eq_115::*bp_163 = Eq_115::a0204;
			bool C_168 = false;
			do
			{
				real64 rLoc2_180 = (real64) Mem160[ss:bp_163 + di_155:int16] * (real64) Mem160[ds:0x01FC:word16] / rLoc1_159;
				Eq_169 rLoc3_182 = (real64) ds->dw0200 * ds->t01F8;
				if (!C_168)
					rLoc3_182 = cos(rLoc3_182);
				Mem189[ss:bp_163 + 0x0000:int16] = (int16) (rLoc2_180 + (sin(rLoc3_182) + 1) * (real64) ds->w01FE);
				int16 bp_190 = PTRADD(bp_163,1);
				bp_163 = bp_190 + 0x0001;
				C_168 = !C_168;
			} while (C_168);
			ds->t0208 = (int16) rLoc1_159;
			uint16 di_202 = ds->w0206;
			if (bp_190 >= 0xFDFD && di_202 <u 0x00C8)
			{
				Eq_220 dx_244 = ds->t0204;
				if (dx_244 >= 0x003C && dx_244 <u 0xFEFC)
					SEQ(bp_63 << 0x0001, dx_244 + 0x003C)[di_202 * 0x0140] = 0x00 - Mem201[ds:0x0208:byte] | 0x0F;
				else
				{
l0C00_01E3:
					Mem240[ss:bp_147 + si_144:byte] = cl_140;
				}
			}
			else
				goto l0C00_01E3;
			si_144 = si_144 - 0x0001;
		} while (si_144 != &Eq_55::b0000);
		cx = cx - 0x0001;
		cl = (byte) (cx - 0x0001);
		bcu8 Eq_62::*di_217 = Eq_62::a0010;
		while (cx != 0x0000)
		{
			es_62->*di_217 = ds->*si_144;
			cx = cx - 0x0001;
			si_144 = si_144 + 1;
			di_217 = di_217 + 1;
			cl = (byte) cx;
		}
	} while (__inb(0x60) != 0x01);
	return;
}

