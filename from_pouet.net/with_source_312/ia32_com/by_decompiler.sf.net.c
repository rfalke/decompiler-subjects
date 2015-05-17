// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_312/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word32 eax, word32 ebx, word16 cx, selector es, selector ds)
{
	word16 di_13 = 0x02CB;
	while (cx != 0x0000)
	{
		Mem11[es:di_13 + 0x0000:byte] = al;
		di_13 = di_13 + 0x0001;
		cx = cx - 0x0001;
	}
	word16 si_17 = 0x02AE;
	word16 di_18 = 0x02E2;
	word16 cx_20 = DPB(cx, 0x20, 0, 8);
	do
	{
		byte bl_46 = Mem0[ds:si_17 + 0x0000:byte];
		bx = DPB(bx, bl_46, 0, 8);
		ebx = DPB(ebx, bl_46, 0, 8);
		si_17 = si_17 + 0x0001;
		byte ch_51 = 0x04;
		word16 cx_52 = DPB(cx_20, 0x04, 8, 8);
		do
		{
			word16 bx_64 = DPB(bx, 0x00, 8, 8);
			al = al + SLICE(bx_64 << 0x0002, byte, 8);
			Mem75[es:di_18 + 0x0000:byte] = al;
			ch_51 = ch_51 - 0x01;
			bx = bx_64 << 0x0002;
			ebx = DPB(ebx_525, bx_64 << 0x0002, 0, 16);
			eax = DPB(eax, al, 0, 8);
			di_18 = di_18 + 0x0001;
			cx_52 = DPB(cx_52, ch_51, 8, 8);
			word32 ebx_525 = ebx;
		} while (ch_51 != 0x00);
		cx_20 = cx_52 - 0x0001;
	} while (cx_52 != 0x0001);
	word16 si_84 = 0x0360;
	word16 di_111 = 0x0361;
	word16 cx_100 = DPB(cx_52 - 0x0001, 0x80, 0, 8);
	do
	{
		byte al_93 = Mem75[ds:si_84 + 0x0000:byte];
		Mem98[es:di_111 + 0x0000:byte] = al_93;
		cx_100 = cx_100 - 0x0001;
		eax = DPB(eax, al_93, 0, 8);
		si_84 = si_84 - 0x0001;
		di_111 = di_111 + 0x0001;
		byte ch_102 = SLICE(cx_100, byte, 8);
	} while (cx_100 != 0x0000);
	word16 si_103 = si_84 + 0x0001;
	word16 cx_105 = DPB(cx_100, ch_102 + 0x01, 8, 8);
	do
	{
		byte al_115 = -Mem98[ds:si_103 + 0x0000:byte];
		Mem120[es:di_111 + 0x0000:byte] = al_115;
		si_103 = si_103 + 0x0001;
		eax = DPB(eax, al_115, 0, 8);
		di_111 = di_111 + 0x0001;
		cx_105 = cx_105 - 0x0001;
	} while (cx_105 != 0x0000);
	bios_video_set_mode(0x13);
	word16 ax_125 = 0x0013;
	word32 eax_127 = DPB(eax, 0x0013, 0, 16);
	byte cl_129 = 0x3F;
	word16 cx_130 = DPB(cx_105, 0x3F, 0, 8);
	do
	{
		__outb(0x03C8, cl_129);
		__outb(0x03C9, 0x00);
		__outb(0x03C9, cl_129);
		__outb(0x03C9, 0x00);
		cx_130 = cx_130 - 0x0001;
		ax_125 = DPB(ax_125, 0x00, 0, 8);
		eax_127 = DPB(eax_526, 0x00, 0, 8);
		cl_129 = (byte) cx_130;
		word32 eax_526 = eax_127;
	} while (cx_130 != 0x0000);
	word16 bx_153;
	msdos_resize_memory_block(es, 0x1000, out bx_153);
	msdos_allocate_memory_block(0x1000);
	word16 ax_156 = DPB(ax_125, 0x48, 8, 8);
	word16 cx_165 = DPB(cx_130, 0xFA, 8, 8);
	byte al_166 = 0x00;
	word16 ax_167 = DPB(ax_156, 0x00, 0, 8);
	word32 eax_169 = DPB(eax_526, 0x00, 0, 8);
	word16 di_171 = 0x0000;
	while (cx_165 != 0x0000)
	{
		Mem178[ax_156:di_171 + 0x0000:byte] = 0x00;
		di_171 = di_171 + 0x0001;
		cx_165 = cx_165 - 0x0001;
	}
	word16 ax_184 = DPB(ax_167, 0x48, 8, 8);
	word32 eax_186 = DPB(eax_169, 0x48, 8, 8);
	word32 ebx_191 = DPB(ebx_525, 0x1000, 0, 16);
	if (!msdos_allocate_memory_block(0x1000))
	{
		word16 cx_227 = DPB(cx_165, 0xFA, 8, 8);
		word32 eax_231 = DPB(eax_186, 0x00, 0, 8);
		word16 di_233 = 0x0000;
		while (cx_227 != 0x0000)
		{
			Mem240[ax_184:di_233 + 0x0000:byte] = 0x00;
			di_233 = di_233 + 0x0001;
			cx_227 = cx_227 - 0x0001;
		}
		do
		{
			word16 bp_271 = 0x07D0;
			do
			{
				word16 dx_285 = Mem120[ds:0x02CE:word16] + Mem120[ds:0x02D0:word16];
				word16 ax_290 = Mem120[ds:0x02D2:word16] + (dx_285 <u 0x0000);
				Mem291[ds:0x02CE:word16] = dx_285;
				Mem293[ds:0x02D2:word16] = ax_290 & 0x01FF;
				word16 dx_300 = Mem293[ds:0x02D4:word16] + Mem293[ds:0x02D6:word16];
				word16 ax_304 = Mem293[ds:0x02D8:word16] + (dx_300 <u 0x0000);
				Mem305[ds:0x02D4:word16] = dx_300;
				Mem307[ds:0x02D8:word16] = ax_304 & 0x01FF;
				ebx_191 = DPB(ebx_191, 0x0000, 0, 16);
				word32 eax_315 = fn0C00_0288(DPB(eax_231, Mem307[ds:(ax_304 & 0x01FF) + 0x02E1:byte] + 0x80, 0, 8), ebx_191, ds);
				word16 di_318 = (word16) eax_315 + Mem307[ds:0x02DD:word16];
				eax_231 = DPB(fn0C00_0288(DPB(eax_315, Mem307[ds:(ax_290 & 0x01FF) + 0x02E1:byte] + 0x80, 0, 8), ebx_191, ds), 0x1F3F, 0, 16);
				Mem340[ax_184:di_318 + 0x0140:word16] = 0x1F3F;
				Mem344[ax_184:di_318 + 0x0280:word16] = 0x1F3F;
				bp_271 = bp_271 - 0x0001;
			} while (bp_271 != 0x0000);
			word16 di_349 = 0xFA00;
			do
			{
				word16 bx_357 = Mem344[ax_184:di_349 + 0x0000:word16];
				word16 ax_361 = Mem344[ax_184:di_349 - 0x0141:word16] + bx_357;
				byte al_367 = ((byte) ax_361 + SLICE(ax_361, byte, 8) >>u 0x02) - 0x01;
				ebx_191 = DPB(ebx_191, bx_357, 0, 16);
				byte al_368 = al_367 - 0x01;
				eax_231 = DPB(eax_231, al_367 - 0x01, 0, 8);
				if (al_367 < 0x01)
				{
					al_368 = 0x00;
					eax_231 = DPB(eax_231, 0x00, 0, 8);
				}
				Mem381[ax_184:di_349 + 0x0000:byte] = al_368;
				di_349 = di_349 - 0x0001;
			} while (di_349 >=u 0x0144);
			word32 eax_388 = DPB(eax_231, 0x00, 0, 8);
			do
			{
				Mem393[ax_184:di_349 + 0x0000:byte] = 0x00;
				di_349 = di_349 - 0x0001;
			} while (di_349 >= 0x0000);
			word16 di_405 = di_349 + 0x0001;
			word16 si_406 = 0x0000;
			word16 cx_409 = 0x3E80;
			while (cx_409 != 0x0000)
			{
				Mem418[0xA000:di_405 + 0x0000:word32] = Mem393[ax_184:si_406 + 0x0000:word32];
				si_406 = si_406 + 0x0004;
				di_405 = di_405 + 0x0004;
				cx_409 = cx_409 - 0x0001;
			}
			word16 ax_430 = Mem393[cs:0x02DA:word16];
			ds = cs;
			word32 eax_434 = DPB(eax_388, ax_430, 0, 16);
			if (ax_430 == 0x0000)
				;
l0C00_0252:
			word16 ax_443 = Mem393[cs:0x02DA:word16];
			word16 ax_444 = ax_443 + 0x0001;
			word32 eax_447 = DPB(eax_434, ax_443 + 0x0001, 0, 16);
			if (ax_443 >=u 0xFE71)
			{
				ax_444 = 0x0000;
				eax_447 = DPB(eax_434, 0x0000, 0, 16);
			}
			Mem457[cs:0x02DA:word16] = ax_444;
			byte al_460 = Mem457[cs:0x02DC:byte] + 0x01 & 0x03;
			word32 eax_463 = DPB(eax_447, al_460, 0, 8);
			if (al_460 == 0x00)
				Mem488[cs:0x02DD:word16] = Mem457[cs:0x02DD:word16] - 0x0141;
			Mem469[cs:0x02DC:byte] = al_460;
			do
			{
				byte al_473 = __inb(0x03DA);
				eax_463 = DPB(eax_527, al_473, 0, 8);
				word32 eax_527 = eax_463;
			} while ((al_473 & 0x08) == 0x00);
			byte al_479 = __inb(0x60);
			al_166 = al_479 - 0x01;
			eax_231 = DPB(eax_527, al_479 - 0x01, 0, 8);
		} while (al_479 != 0x01);
	}
l0C00_0282:
	bios_video_set_mode(al_166);
}

word32 fn0C00_0288(word32 eax, word32 ebx, selector ds)
{
	return (word32) (DPB(ebx, al, 0, 8) *u (DPB(eax, Mem0[ds:0x02DA:word16], 0, 16) << 0x00000008)) >>u 0x00000011;
}

