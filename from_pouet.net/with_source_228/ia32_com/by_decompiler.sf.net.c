// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_228/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, word16 bx, selector ds)
{
	bios_video_set_mode(0x13);
	selector es_7 = SLICE(Mem0[ds:bx + 0x0000:segptr32], selector, 16);
	do
	{
		byte al_14 = (byte) (~cx >>u 0x0002);
		__outb(0x03C9, al_14);
		__outb(0x03C9, al_14);
		__outb(0x03C9, al_14);
		cx = cx - 0x0001;
	} while (cx != 0x0000);
	do
	{
		word16 cx_48 = 0x2328;
		do
		{
			Mem59[ds:0x01FF:word16] = 0x0032;
			Mem63[ds:0x01FF:word16] = Mem59[ds:0x01FF:word16] - (cx_48 >>u 0x0003);
			real64 rLoc1_64 = Mem63[ds:0x01C6:real32];
			rLoc3 = sin(rLoc3) * (real64) Mem63[ds:0x01FF:word16];
			Mem69[ds:0x0203:int16] = (int16) rLoc3;
			rLoc2 = cos(rLoc2) * (real64) Mem69[ds:0x01FF:word16];
			Mem72[ds:0x0205:int16] = (int16) rLoc2;
			Mem74[ds:0x01C6:real32] = rLoc1_64 + Mem72[ds:0x01CA:real32];
			Mem76[ds:0x0203:word16] = Mem74[ds:0x0203:word16] + 0x00A0;
			Mem78[ds:0x0205:word16] = Mem76[ds:0x0205:word16] + 0x0064;
			word16 ax_135 = Mem78[ds:0x0203:word16] + 0x0140;
			if (SLICE(ax_135, byte, 8) <=u 0xFA)
			{
				Mem142[ds:ax_135 + 0x0207:byte] = (byte) Mem78[ds:0x01FF:word16];
				ax_135 = bx;
				bx = ax_135;
			}
			cx_48 = cx_48 - 0x0001;
			byte ch_95 = SLICE(cx_48, byte, 8);
		} while (cx_48 != 0x0000);
		Mem99[ds:0x01C6:real32] = Mem78[ds:0x01C6:real32] - Mem78[ds:0x01CE:real32];
		word16 bx_100;
		byte cl_101;
		word16 bx_103;
		byte cl_104;
		byte cl_107;
		fn0C00_019B(fn0C00_019B(fn0C00_019B(ax_135, ch_95, ds, out bx_100, out cl_101), ch_95, ds, out bx_103, out cl_104), ch_95, ds, out bx, out cl_107);
		word16 si_109 = 0x0207;
		word16 di_110 = 0x0000;
		word16 cx_114 = DPB(cx_48, 0x7D, 8, 8);
		while (cx_114 != 0x0000)
		{
			Mem121[es_7:di_110 + 0x0000:word16] = Mem99[ds:si_109 + 0x0000:word16];
			si_109 = si_109 + 0x0002;
			di_110 = di_110 + 0x0002;
			cx_114 = cx_114 - 0x0001;
		}
	} while (__inb(0x60) != 0x01);
	bios_video_set_mode(0x03);
	msdos_display_string(ds, 0x01D2);
	return;
}

word16 fn0C00_019B(word16 ax, byte ch, selector ds, ptr16 bxOut, ptr16 clOut)
{
	word16 bx_19 = 0x0000;
	word16 si_12 = 0xF780;
	do
	{
		byte cl_20 = Mem0[ds:si_12 + 0x0208:byte];
		*clOut = cl_20;
		bx_19 = DPB(bx_19, Mem0[ds:si_12 + 0x00C7:byte], 0, 8);
		*bxOut = bx_19;
		cx = DPB(cx, cl_20, 0, 8);
		dx = DPB(dx, Mem0[ds:si_12 + 0x0206:byte], 0, 8);
		word16 ax_29 = ((word16) Mem0[ds:si_12 + 0x0347:byte] + bx_19 + cx + dx >>u 0x0002) - 0x0001;
		Mem32[ds:si_12 + 0x0207:byte] = (byte) ax_29;
		si_12 = si_12 - 0x0001;
	} while (si_12 != 0x0000);
	return ax_29;
}

