// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_302/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(selector ds)
{
	bios_video_set_mode(0x13);
	byte al_122 = 0x13;
	word16 wLoc04_11 = 0x0064;
	do
	{
		Mem30[ds:0x01B9:word16] = 0x0000;
		__syscall(0x16);
		if ((al_122 & 0x04) != 0x00)
			Mem156[ds:0x01B9:word16] = Mem30[ds:0x01B9:word16] + 0x0001;
		if ((al_122 & 0x08) != 0x00)
		{
			Mem153[ds:0x01B9:word16] = Mem30[ds:0x01B9:word16] - 0x0001;
			goto l0C00_0128;
		}
l0C00_0128:
		do
			;
		while ((__inb(0x03DA) & 0x08) != 0x00);
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		byte al_58;
		byte dl_59;
		byte ah_60;
		fn0C00_01C1(wLoc04_11, 0x00A0, 0x00, 0xA000, ds, out al_58, out dl_59, out ah_60);
		word16 bx_65 = Mem30[ds:0x01B7:word16];
		word16 ax_144 = wLoc04_11;
		byte bl_140 = (byte) bx_65;
		if (false)
		{
			word16 ax_134 = DPB(wLoc04_11, al_58 - 0x05, 0, 8);
			if (ax_134 != bx_65)
				if (ax_134 <= bx_65)
					bl_140 = (byte) (bx_65 - 0x0001);
				else
					bl_140 = (byte) (bx_65 + 0x0001);
			ax_144 = DPB(wLoc04_11, al_58, 0, 8);
		}
		word16 bx_72 = fn0C00_01E5(bl_140);
		Mem74[ds:0x01B7:word16] = bx_72;
		word16 ax_75 = ax_144 + Mem74[ds:0x01BD:word16];
		byte al_76 = (byte) ax_75;
		if (al_76 == 0x01)
			Mem130[ds:0x01BD:word16] = -Mem74[ds:0x01BD:word16];
		if (al_76 == 0xC6)
			Mem126[ds:0x01BD:word16] = -Mem74[ds:0x01BD:word16];
		word16 cx_86;
		word16 ax_87 = fn0C00_01F4(ax_75, Mem74[ds:0x01BB:word16] + 0x00A0, 0x013F, bx_72, ds, out cx_86);
		word16 bx_92 = fn0C00_01E5((byte) (Mem74[ds:0x01B5:word16] + Mem74[ds:0x01B9:word16]));
		Mem93[ds:0x01B5:word16] = bx_92;
		word16 cx_97;
		word16 ax_98 = fn0C00_01F4(ax_87, cx_86, 0x0000, bx_92, ds, out cx_97);
		byte al_103;
		byte dl_104;
		byte ah_105;
		fn0C00_01C1(ax_98, 0x00A0, 0x0F, 0xA000, ds, out al_103, out dl_104, out ah_105);
		Mem108[ss:fp - 0x0002:word16] = 0x00A0;
		fn0C00_01D1(Mem108[ds:0x01B5:word16], 0x0000, dl_104, 0xA000, ds);
		byte Z_121 = fn0C00_01D1(Mem108[ds:0x01B7:word16], 0x013F, 0x0F, 0xA000, ds);
		bios_kbd_check_keystroke(out al_122);
		wLoc04_11 = ax_98;
	} while (Z_121);
	msdos_terminate_program20();
}

bool fn0C00_01C1(word16 ax, word16 bx, byte dl, selector es, selector ds, ptr16 alOut, ptr16 dlOut, ptr16 ahOut)
{
	word16 bx_15 = bx + (word16) (Mem0[ds:0x01BF:word16] *u ax);
	byte dl_19 = (byte) dx;
	*dlOut = dl_19;
	Mem21[es:bx_15 + 0x0000:byte] = dl_19;
	byte al_27;
	*alOut = (byte) ax;
	byte ah_28;
	*ahOut = SLICE(ax, byte, 8);
	return cond(bx_15);
}

bool fn0C00_01D1(word16 ax, word16 bx, byte dl, selector es, selector ds)
{
	word16 cx_19 = 0x000A;
	do
	{
		byte al_11;
		byte ah_13;
		fn0C00_01C1(ax, bx, dl, es, ds, out al_11, out dl, out ah_13);
		ax = ax + 0x0001;
		cx_19 = cx_19 - 0x0001;
	} while (cx_19 != 0x0000);
	byte al_23;
	byte dl_24;
	byte ah_25;
	fn0C00_01C1(ax, bx, 0x00, es, ds, out al_23, out dl_24, out ah_25);
	byte al_31;
	byte dl_32;
	byte ah_33;
	return fn0C00_01C1(DPB(ax, al_23 - 0x0B, 0, 8), bx, dl_24, es, ds, out al_31, out dl_32, out ah_33);
}

word16 fn0C00_01E5(byte bl)
{
	if (bl == 0x00)
		bx = DPB(bx, 0x01, 0, 8);
	if (false)
		bx = DPB(bx, 0xBD, 0, 8);
	return bx;
}

word16 fn0C00_01F4(word16 ax, word16 cx, word16 dx, word16 bx, selector ds, ptr16 cxOut)
{
	*cxOut = cx;
	if (cx != dx)
		goto l0C00_0213;
	else if (ax >= bx && ax < DPB(bx, bl + 0x0A, 0, 8))
	{
		Mem47[ds:0x01BB:word16] = -Mem0[ds:0x01BB:word16];
		return ax;
	}
	else
	{
		ax = (DPB(ax, al + 0x61, 0, 8) & 0x007F) + 0x0024;
		word16 cx_39;
		*cxOut = 0x00A0;
l0C00_0213:
		return ax;
	}
}

