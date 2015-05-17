// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_266/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(selector es, selector ds)
{
	bios_video_set_mode(0x13);
	__outb(0x03C8, 0x00);
	byte al_17 = 0x00;
	word16 ax_16 = 0x0000;
	byte cl_11 = 0x00;
	do
	{
		byte al_18 = al_17 >>u 0x01;
		__outb(0x03C9, al_18);
		__outb(0x03C9, al_18);
		al_17 = cl_11 >>u 0x02;
		__outb(0x03C9, al_17);
		ax_16 = DPB(ax_255, al_17, 0, 8);
		cl_11 = cl_11 + 0x01;
		word16 ax_255 = ax_16;
	} while (cl_11 != 0x00);
	word16 cx_27 = 0x1520;
	byte cl_28 = 0x20;
	word16 di_29 = 0x0200;
	word16 ax_31 = DPB(ax_255, __inb(0x40), 0, 8);
	do
	{
		cx_27 = cx_27 - 0x0001;
		ax_31 = fn0C00_01D5(ax_31, di_29, cl_28, es, out di_29);
		cl_28 = (byte) cx_27;
	} while (cx_27 != 0x0000);
	do
	{
		word16 di_64 = 0x0000;
		do
		{
			byte al_72 = Mem0[0xA000:di_64 + 0x0000:byte];
			byte al_251 = al_72 - 0x19;
			if (al_72 <u 0x19)
				al_251 = 0x00;
			Mem80[0xA000:di_64 + 0x0000:byte] = al_251;
			di_64 = di_64 + 0x0001;
		} while (di_64 != 0x0000);
		while (true)
			Mem90[ds:0x0141:word16] = Mem80[ds:0x0141:word16] - 0x0001;
		word16 cx_248 = 0x0101;
		word16 si_244 = 0x0200;
		do
		{
			Mem105[ds:si_244 + 0x0000:word16] = Mem80[ds:si_244 + 0x0000:word16];
			word16 si_107 = si_244 + 0x0002;
			word16 ax_108 = Mem105[ds:si_244 + 0x0000:word16] + Mem105[ds:si_107 + 0x0004:word16];
			byte al_109 = (byte) ax_108;
			if (ax_108 >=u 0x1400)
			{
				word16 cx_202 = cx_248 - 0x0001;
				byte cl_203 = (byte) cx_202;
				if (cx_202 != 0x0000)
				{
					Mem207[ss:fp - 0x0002:word16] = 0x0153;
					word16 ax_210 = DPB(ax_108, __inb(0x40), 0, 8);
					word16 di_211;
					fn0C00_01D5(ax_210, si_244, cl_203, es, out di_211);
					return;
				}
			}
			Mem213[ds:si_107 + 0x0004:word16] = ax_108;
			Mem215[ds:si_107 + 0x0000:word16] = Mem213[ds:si_107 + 0x0000:word16] + 0x0001;
			ax_108 = Mem215[ds:si_107 + 0x0000:word16] + Mem215[ds:si_107 + 0x0006:word16];
			al_109 = (byte) ax_108;
			if (ax_108 >= 0x0C80)
				;
			Mem223[ds:si_107 + 0x0006:word16] = ax_108;
			ax_108 = Mem223[ds:si_107 + 0x0002:word16];
			word16 v23_228 = Mem223[ds:si_107 + 0x0008:word16] + ax_108;
			Mem229[ds:si_107 + 0x0008:word16] = v23_228;
			al_109 = (byte) ax_108;
			if (v23_228 >=u 0x0000)
				;
			word16 ax_236 = Mem229[ds:si_107 + 0x0006:word16];
			word16 di_241 = (Mem229[ds:si_107 + 0x0004:word16] >>u 0x0004) + (ax_236 >>u 0x0004) *s 0x0140;
			al_109 = (byte) Mem229[ds:si_107 + 0x0008:word16];
			si_244 = si_107 + 0x000A;
			if (ax_236 >= 0x0000)
				Mem250[0xA000:di_241 + 0x0000:byte] = al_109;
			cx_248 = cx_248 - 0x0001;
		} while (cx_248 != 0x0000);
l0C00_0193:
		msdos_direct_console_output(0xFF);
		byte al_142 = al_109 - 0x77;
		if (al_142 == 0x00)
			Mem193[ds:0x0167:byte] = Mem105[ds:0x0167:byte] - 0x01;
		if (al_142 == 0xFC)
			Mem190[ds:0x0167:byte] = Mem105[ds:0x0167:byte] + 0x01;
		if (al_142 == 0xEA)
			Mem187[ds:0x015A:byte] = Mem105[ds:0x015A:byte] - 0x01;
		if (al_142 == 0xED)
			Mem184[ds:0x015A:byte] = Mem105[ds:0x015A:byte] + 0x01;
		if (al_142 == 0xB4)
			Mem181[ds:0x0141:word16] = Mem105[ds:0x0141:word16] + 0x0001;
		if (al_142 == 0xB6)
			Mem178[ds:0x0141:word16] = Mem105[ds:0x0141:word16] - 0x0001;
	} while (al_142 != 0xA4);
	return;
}

word16 fn0C00_01D5(word16 ax, word16 di, byte cl, selector es, ptr16 diOut)
{
	word16 ax_7 = (word16) (ax *u 0x0025) + cx;
	word16 ax_11 = (int16) (byte) ax_7;
	Mem17[es:di + 0x0000:word16] = DPB(ax_11, (byte) ax_11 & 0x1F ^ SLICE(ax_11, byte, 8), 0, 8);
	word16 ax_30 = (int16) ((SLICE(ax_7, byte, 8) | 0xF0) - 0x40);
	Mem31[es:di + 0x0002:word16] = ax_30;
	Mem35[es:di + 0x0004:word16] = DPB(ax_30, 0xFF, 0, 8);
	Mem38[es:di + 0x0006:word16] = 0x0A00;
	Mem41[es:di + 0x0008:word16] = 0x0C80;
	Mem44[es:di + 0x000A:word16] = 0x00FF;
	word16 di_45;
	*diOut = di + 0x000C;
	return ax_7;
}

