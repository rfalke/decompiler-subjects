// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_340/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word32 ebx, word32 ebp, word16 ax, byte cl, selector es, selector ds, real64 rArg0)
{
	byte bh_4 = SLICE(cs, byte, 8);
	word16 bx_9 = DPB(cs, bh_4 + 0x10, 8, 8);
	word32 ebx_11 = DPB(ebx, bh_4 + 0x10, 8, 8);
	word16 di_14 = 0x0000;
	word16 cx_19 = DPB(cx, 0x7D, 8, 8);
	while (cx_19 != 0x0000)
	{
		Mem26[bx_9:di_14 + 0x0000:word16] = ax;
		di_14 = di_14 + 0x0002;
		cx_19 = cx_19 - 0x0001;
	}
	selector es_31 = es;
	word16 di_33 = 0x04E5;
	word16 cx_35 = DPB(cx_19, 0x0C, 0, 8);
	while (cx_35 != 0x0000)
	{
		Mem41[es:di_33 + 0x0000:byte] = al;
		di_33 = di_33 + 0x0001;
		cx_35 = cx_35 - 0x0001;
	}
	bios_video_set_mode(0x13);
	word16 ax_103 = DPB(ax, 0x13, 0, 8);
	bx_113 = bx_9;
	do
	{
		word16 bx_113;
		word16 di_108 = 0x04F1;
		word16 cx_109 = DPB(cx_35, 0x04, 0, 8);
		do
		{
			byte ch_111 = 0x08;
			word16 cx_112 = DPB(cx_109, 0x08, 8, 8);
			do
			{
				Mem120[es_31:di_108 + 0x0000:word16] = ax_103;
				word16 di_121 = di_108 + 0x0002;
				Mem127[es_31:di_121 + 0x0000:word16] = bx_895;
				ch_111 = ch_111 - 0x01;
				di_108 = di_121 + 0x0002;
				ax_103 = ax_103 + 0x002D;
				bx_113 = bx_895;
				ebx_11 = DPB(ebx_896, bx_895, 0, 16);
				cx_112 = DPB(cx_112, ch_111, 8, 8);
				word16 bx_895 = bx_113;
				word32 ebx_896 = ebx_11;
			} while (ch_111 != 0x00);
			bx_113 = bx_895 + 0x002D;
			ebx_11 = DPB(ebx_896, bx_113, 0, 16);
			cx_109 = cx_112 - 0x0001;
		} while (cx_112 != 0x0001);
		byte cl_148 = 0xFF;
		word16 cx_149 = DPB(cx_112 - 0x0001, 0xFF, 0, 8);
		do
		{
			__outb(0x03C8, cl_148);
			__outb(0x03C9, 0x00);
			__outb(0x03C9, cl_148);
			byte al_160 = cl_148 << 0x01;
			if (al_160 >=u 0x3F)
				al_160 = 0x3F;
			__outb(0x03C9, al_160);
			cx_149 = cx_149 - 0x0001;
			cl_148 = (byte) cx_149;
		} while (cx_149 != 0x0000);
		word16 di_171 = 0x059F;
		word16 si_172 = 0x04C4;
		word32 ebp_174 = DPB(ebp, 0x057D, 0, 16);
		word16 cx_176 = DPB(cx_149, 0x04, 0, 8);
		do
		{
			Mem189[ds:0x057D:word32] = (word32) Mem127[ds:si_172 + 0x0000:word16];
			word16 si_188 = si_172 + 0x0002;
			real64 rLoc1_191 = (real64) Mem189[ss:0x057D:int32];
			byte ch_192 = 0x06;
			word16 cx_193 = DPB(cx_176, 0x06, 8, 8);
			do
			{
				Mem198[ds:di_171 + 0x0000:real32] = rLoc1_191;
				ch_192 = ch_192 - 0x01;
				di_171 = di_171 + 0x0004;
				rLoc1_191 = rLoc1_191 * (real64) Mem198[ss:0x057D:word32];
				cx_193 = DPB(cx_193, ch_192, 8, 8);
			} while (ch_192 != 0x00);
			si_172 = si_188 + 0x0002;
			cx_176 = cx_193 - 0x0001;
		} while (cx_193 != 0x0001);
		Mem211[ss:0x057D:word16] = cx_193 - 0x0001;
		Mem215[ds:0x05FF:real32] = (real64) Mem211[ss:0x057D:int32];
		word16 si_212 = 0x059F;
		word16 di_216 = 0x0603;
		word16 cx_219 = DPB(cx_193 - 0x0001, 0x06, 0, 8);
		do
		{
			real64 rLoc2_230 = 0;
			byte ch_231 = 0x04;
			word16 cx_232 = DPB(cx_219, 0x04, 8, 8);
			si_234 = si_212;
			do
			{
				word16 si_234;
				ch_231 = ch_231 - 0x01;
				rLoc2_230 = rLoc2_230 + Mem215[ds:si_234 + 0x0000:real32];
				si_234 = si_234 + 0x0018;
				cx_232 = DPB(cx_232, ch_231, 8, 8);
			} while (ch_231 != 0x00);
			Mem244[ds:di_216 + 0x0000:real32] = rLoc2_230;
			di_216 = di_216 + 0x0004;
			si_212 = si_212 + 0x0004;
			cx_219 = cx_232 - 0x0001;
		} while (cx_232 != 0x0001);
		word16 di_254 = 0x061B;
		word16 si_255 = 0x05FF;
		byte dl_256 = 0x04;
		do
		{
			cx_219 = DPB(cx_219, 0x04, 0, 8);
			si_270 = si_255;
			word16 si_270;
			while (cx_219 != 0x0000)
			{
				Mem276[es_31:di_254 + 0x0000:word32] = Mem244[ds:si_270 + 0x0000:word32];
				si_270 = si_270 + 0x0004;
				di_254 = di_254 + 0x0004;
				cx_219 = cx_219 - 0x0001;
			}
			Mem285[es_31:di_254 + 0x0000:word32] = Mem244[ds:si_255 + 0x0000:word32];
			si_255 = si_255 + 0x0004;
			di_254 = di_254 + 0x0004;
			dl_256 = dl_256 - 0x01;
		} while (dl_256 != 0x00);
		word16 si_292 = 0x04C8;
		word32 eax_293 = 0x00000000;
		real64 rLoc2_299 = 0;
		word16 cx_301 = DPB(cx_219, 0x04, 0, 8);
		do
		{
			Mem309[ss:0x057D:word32] = DPB(eax_293, Mem285[ds:si_292 + 0x0000:word16], 0, 16);
			word16 si_308 = si_292 + 0x0000;
			rLoc2_299 = rLoc2_299 + (real64) Mem309[ss:0x057D:word32];
			eax_293 = DPB(eax_293, Mem309[ds:si_308 + 0x0000:word16], 0, 16);
			si_292 = si_308 + 0x0002;
			cx_301 = cx_301 - 0x0001;
		} while (cx_301 != 0x0000);
		Mem319[ds:0x062B:real32] = rLoc2_299;
		byte cl_320 = 0x00;
		word16 cx_321 = DPB(cx_301, 0x00, 0, 8);
		do
		{
			Mem337[ds:0x0581:real32] = 0;
			word16 bx_341 = cx_321 << 0x0002;
			word16 si_338 = 0x04C6;
			ebx_11 = DPB(ebx_897, bx_341, 0, 16);
			word16 bp_344 = bx_341 + 0x059F;
			ebp_174 = DPB(ebp_174, bx_341 + 0x059F, 0, 16);
			byte ch_347 = 0x04;
			word16 cx_348 = DPB(cx_321, 0x04, 8, 8);
			do
			{
				Mem357[ds:0x0581:real32] = (real64) Mem337[ds:si_338 + 0x0000:int16] * Mem337[ss:bp_344 + 0x0000:real32] + Mem337[ds:0x0581:real32];
				bp_344 = bp_344 + 0x0018;
				ch_347 = ch_347 - 0x01;
				si_338 = si_338 + 0x0004;
				ebp_174 = DPB(ebp_174, bp_344, 0, 16);
				cx_348 = DPB(cx_348, ch_347, 8, 8);
			} while (ch_347 != 0x00);
			word16 di_367 = 0x063F;
			word16 ax_368 = cx_348;
			while (ax_368 != 0x0000)
			{
				di_367 = di_367 + 0x0014;
				ax_368 = ax_368 - 0x0001;
			}
			Mem391[es_31:di_367 + 0x0000:word32] = Mem357[ds:0x0581:word32];
			cl_320 = cl_320 + 0x01;
			cx_321 = DPB(cx_348, cl_320, 0, 8);
			word32 ebx_897 = ebx_11;
		} while (cl_320 != 0x03);
		ebx_11 = DPB(ebx_897, 0x061B, 0, 16);
		byte cl_400 = 0x01;
		word16 cx_401 = DPB(cx_348, 0x00, 0, 8);
		do
		{
			word16 ax_418 = cl_400 *u 0x05;
			word16 si_425 = (ax_418 << 0x0002) + 0x061B + (DPB(ax_418 << 0x0002, cl_400, 0, 8) << 0x0002);
			byte ch_428 = 0x04;
			word16 cx_429 = DPB(cx_401, 0x04, 8, 8);
			do
			{
				word16 ax_433 = cl_400 *u 0x05;
				word16 si_440 = (ax_433 << 0x0002) + 0x061B + (DPB(ax_433 << 0x0002, ch_428, 0, 8) << 0x0002);
				Mem444[ds:si_440 + 0x0000:real32] = Mem391[ds:si_440 + 0x0000:real32] / Mem391[ds:si_425 + 0x0000:real32];
				ch_428 = ch_428 - 0x01;
				cx_429 = DPB(cx_898, ch_428, 8, 8);
				word16 cx_898 = cx_429;
			} while (ch_428 != 0x00);
			byte ch_450 = cl_400 + 0x00;
			word16 cx_451 = DPB(cx_898, ch_450, 8, 8);
			do
			{
				word16 ax_462 = ch_450 *u 0x05;
				word16 si_465 = (ax_462 << 0x0002) + 0x061B;
				Mem472[ds:0x0571:word32] = SEQ(ds, si_465)[DPB(ax_462 << 0x0002, cl_400, 0, 8) * 0x0004];
				byte dh_473 = 0x00;
				do
				{
					word16 si_483 = si_465 + ((word16) dh_473 << 0x0002);
					Mem485[ds:0x0581:word32] = Mem472[ds:si_483 + 0x0000:word32];
					word16 ax_489 = cl_400 *u 0x05;
					real64 rLoc2_498 = SEQ(ds, (ax_489 << 0x0002) + 0x061B)[DPB(ax_489 << 0x0002, dh_473, 0, 8) * 0x0004] * Mem485[ds:0x0571:real32];
					Mem500[ds:0x0581:real32] = Mem485[ds:0x0581:real32] - rLoc2_498;
					Mem501[ss:si_483 + 0x0000:real32] = rLoc2_498;
					ebp_174 = DPB(ebp_899, si_483, 0, 16);
					dh_473 = dh_473 + 0x01;
					word32 ebp_899 = ebp_174;
				} while (dh_473 != 0x05);
				ch_450 = ch_450 + 0x01;
				cx_451 = DPB(cx_451, ch_450, 8, 8);
			} while (ch_450 != 0x04);
			cl_400 = cl_400 + 0x01;
			cx_401 = DPB(cx_451, cl_400, 0, 8);
		} while (cl_400 != 0x02);
		Mem517[es_31:0x057D:word32] = Mem501[ds:0x0667:word32];
		Mem523[ds:0x0677:real32] = Mem517[ds:0x057D:real32] / Mem517[ds:0x0663:real32];
		byte cl_526 = 0x02;
		word16 cx_527 = DPB(cx_451, 0x02, 0, 8);
		do
		{
			word16 ax_537 = cl_526 *u 0x05;
			Mem547[es_31:0x057D:word32] = Mem523[ds:(ax_537 << 0x0002) + 0x061B + DPB(ax_537 << 0x0002, 0x10, 0, 8):word32];
			byte ch_550 = 0x03;
			word16 cx_551 = DPB(cx_527, 0x03, 8, 8);
			do
			{
				word16 ax_556 = cl_526 *u 0x05;
				Mem564[es_31:0x0581:word32] = SEQ(ds, (ax_556 << 0x0002) + 0x061B)[ax_556 * 0x0010];
				word16 ax_566 = DPB(ax_556 << 0x0004, ch_550, 0, 8);
				Mem574[es_31:0x0571:word32] = SEQ(ds, 0x066B)[ax_566 * 0x0004];
				real64 rLoc2_578 = Mem574[ds:0x0581:real32] * Mem574[ds:0x0571:real32];
				Mem580[ds:0x057D:real32] = Mem574[ds:0x057D:real32] - rLoc2_578;
				Mem581[ds:0x057D:real32] = rLoc2_578;
				ch_550 = ch_550 - 0x01;
				cx_551 = DPB(cx_551, ch_550, 8, 8);
			} while (ch_550 != cl_526);
			SEQ(ds, 0x066B)[DPB(ax_566 << 0x0002, cl_526, 0, 8) * 0x0004] = Mem581[ds:0x057D:word32];
			cl_526 = cl_526 - 0x01;
			cx_527 = DPB(cx_551, cl_526, 0, 8);
		} while (cl_526 >= 0x00);
		word16 bp_599 = 0x0064;
		ebp = DPB(ebp_899, 0x0064, 0, 16);
		do
		{
			Mem624[ds:0x057D:word32] = ebp;
			word16 si_623 = 0x0677;
			real64 rLoc2_625 = 0;
			word16 cx_627 = DPB(cx_527, 0x03, 0, 8);
			do
			{
				Mem633[ds:0x0581:word32] = Mem624[ds:si_623 + 0x0000:word32];
				si_623 = si_623 - 0x0004;
				rLoc2_625 = (rLoc2_625 + Mem633[ds:0x0581:real32]) * (real64) Mem633[ds:0x057D:word32];
				cx_627 = cx_627 - 0x0001;
			} while (cx_627 != 0x0000);
			word32 eax_639 = Mem633[ds:si_623 + 0x0000:word32];
			Mem643[ds:0x0581:word32] = eax_639;
			Mem645[ds:0x0571:int32] = (int32) (rLoc2_625 + Mem643[ds:0x0581:real32]);
			word16 si_650 = 0x04F3;
			cx_527 = DPB(cx_627, 0x20, 0, 8);
			do
			{
				word16 bx_661 = Mem645[ds:si_650 + 0x0000:word16];
				Mem662[ds:0x0579:word32] = ebp;
				Mem665[ds:0x0575:word32] = DPB(ebx_11, bx_661 + Mem662[ds:0x04ED:word16], 0, 16);
				real64 rLoc2_667 = Mem665[ds:0x04D4:real32] * (real64) Mem665[ds:0x0575:word32];
				real64 rLoc2_669 = cos(rLoc2_667);
				real64 rLoc3_670 = sin(rLoc2_667);
				Mem673[ds:0x057D:real32] = rLoc3_670 * (real64) Mem665[ds:0x0579:word32];
				real64 rLoc2_677 = rLoc2_669 * ((real64) Mem673[ds:0x0571:int32] - (real64) Mem673[ds:0x04D2:word16]);
				Mem679[ds:0x057D:real32] = Mem673[ds:0x057D:real32] - rLoc2_677;
				Mem680[ds:0x057D:real32] = rLoc2_677;
				Mem684[ds:0x0581:real32] = rLoc3_670 * ((real64) Mem680[ds:0x0571:int32] - (real64) Mem680[ds:0x04D2:word16]);
				Mem687[ds:0x0581:int32] = (int32) (rLoc2_669 * (real64) Mem684[ds:0x0579:word32] + Mem684[ds:0x0581:real32]);
				ebx_11 = DPB(ebx_11, Mem687[ds:si_650 + 0x0000:word16] + Mem687[ds:0x04EF:word16], 0, 16);
				Mem692[ds:0x0575:word32] = ebx_11;
				Mem697[ds:0x057D:int32] = (int32) (cos(Mem692[ds:0x04D4:real32] * (real64) Mem692[ds:0x0575:word32]) * Mem692[ds:0x057D:real32]);
				word16 ax_699 = Mem697[ds:0x0581:word16];
				word16 di_698 = Mem697[ds:0x057D:word16];
				eax_639 = DPB(eax_639, ax_699 + 0x0063, 0, 16);
				if (ax_699 <u 0xFF9D)
				{
					word16 di_881 = di_698 + 0x00A0 + eax_639 * 0x0140;
					Mem886[bx_9:di_881 + 0x0000:word16] = 0x3F3F;
					Mem890[bx_9:di_881 + 0x0140:word16] = 0x3F3F;
					eax_639 = DPB(eax_639, 0x3F3F, 0, 16);
				}
				si_650 = si_650 + 0x0004;
				cx_527 = cx_527 - 0x0001;
			} while (cx_527 != 0x0000);
			bp_599 = bp_599 - 0x0001;
			ebp = DPB(ebp, bp_599, 0, 16);
		} while (bp_599 != 0x0000);
		Mem724[ds:0x04EF:word16] = Mem697[ds:0x04EF:word16] + 0x0002;
		Mem727[ds:0x04ED:word16] = Mem724[ds:0x04ED:word16] + 0x0001;
		word16 di_729 = 0xFA00;
		do
		{
			bx_113 = Mem727[bx_9:di_729 + 0x0000:word16];
			word16 ax_738 = Mem727[bx_9:di_729 - 0x0141:word16] + bx_113;
			byte ah_740 = SLICE(ax_738, byte, 8);
			ebx_11 = DPB(ebx_11, bx_113, 0, 16);
			byte al_743 = ((byte) ax_738 + ah_740 >>u 0x02) - 0x04;
			if (al_743 <u 0x00)
				al_743 = 0x00;
			Mem752[bx_9:di_729 + 0x0000:byte] = al_743;
			di_729 = di_729 + 0x0001;
		} while (di_729 >=u 0x0144);
		do
		{
			Mem757[bx_9:di_729 + 0x0000:byte] = ah_740;
			di_729 = di_729 - 0x0001;
		} while (di_729 >= 0x0000);
		word16 si_762 = 0x0000;
		word16 di_764 = di_729 + 0x0001;
		cx_35 = DPB(cx_527, 0x7D, 8, 8);
		while (cx_35 != 0x0000)
		{
			Mem782[0xA000:di_764 + 0x0000:word16] = Mem757[bx_9:si_762 + 0x0000:word16];
			si_762 = si_762 + 0x0002;
			di_764 = di_764 + 0x0002;
			cx_35 = cx_35 - 0x0001;
		}
		ds = cs;
		es_31 = cs;
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		word16 si_796 = Mem757[cs:0x04E6:word16];
		Mem798[cs:0x04E8:byte] = Mem757[cs:0x04E8:byte] + 0x01;
		byte v51_799 = Mem798[cs:0x04E8:byte] + 0x01;
		Mem800[cs:0x04E8:byte] = v51_799;
		if (v51_799 == 0x00)
			si_796 = si_796 + 0x0001;
		Mem804[cs:0x04E6:word16] = si_796;
		word16 si_805 = si_796 + 0x04D8;
		byte al_806 = Mem804[cs:si_805 + 0x0000:byte];
		if (al_806 == 0x00)
			goto l0C00_04A9;
		word16 ax_825 = (int16) al_806;
		if (Mem804[cs:0x04CA:word16] != ax_825)
			if (Mem804[cs:0x04CA:word16] <u ax_825)
				Mem867[cs:0x04CA:word16] = Mem804[cs:0x04CA:word16] + 0x0001;
			else
				Mem870[cs:0x04CA:word16] = Mem804[cs:0x04CA:word16] - 0x0001;
		word16 ax_834 = DPB(ax_825, Mem804[cs:si_805 + 0x0001:byte], 0, 8);
		byte Z_838 = cond(Mem804[cs:0x04CE:word16] - ax_834);
		if (Mem804[cs:0x04CE:word16] != ax_834)
			if (Mem804[cs:0x04CE:word16] <u ax_834)
			{
				word16 v54_854 = Mem804[cs:0x04CE:word16] + 0x0001;
				Mem855[cs:0x04CE:word16] = v54_854;
				Z_838 = cond(v54_854);
			}
			else
			{
				word16 v55_860 = Mem804[cs:0x04CE:word16] - 0x0001;
				Mem861[cs:0x04CE:word16] = v55_860;
				Z_838 = cond(v55_860);
			}
		byte al_845;
		ax_103 = DPB(ax_834, bios_kbd_check_keystroke(out al_845), 8, 8);
	} while (Z_838);
	byte al_852;
	bios_kbd_get_keystroke(out al_852);
	bios_video_set_mode(0x03);
	msdos_display_string(cs, 0x04B6);
	return;
}

