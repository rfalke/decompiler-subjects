// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_299/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(selector ds)
{
	bios_video_set_mode(0x13);
	byte al_133 = 0x13;
	word16 wLoc02_10 = 0x005F;
	word16 wLoc06_122 = 0x0064;
	do
	{
		__syscall(0x16);
		word16 bx_166 = 0x0000;
		byte bl_164 = 0x00;
		if ((al_133 & 0x04) != 0x00)
		{
			bx_166 = 0x0001;
			bl_164 = 0x01;
		}
		if ((al_133 & 0x08) != 0x00)
			bl_164 = (byte) (bx_166 - 0x0001);
		Mem45[ds:0x01B2:byte] = bl_164;
		do
			;
		while ((__inb(0x03DA) & 0x08) != 0x00);
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		byte dl_66;
		byte ah_67;
		byte al_154;
		fn0C00_01B3(wLoc06_122, 0x00A0, 0x00, 0xA000, ds, out al_154, out dl_66, out ah_67);
		word16 bx_72 = Mem45[ds:0x01AD:word16];
		word16 ax_155 = wLoc06_122;
		byte bl_151 = (byte) bx_72;
		if (false)
		{
			word16 ax_145 = DPB(wLoc06_122, al_154 - 0x05, 0, 8);
			if (ax_145 != bx_72)
				if (ax_145 <= bx_72)
					bl_151 = (byte) (bx_72 - 0x0001);
				else
					bl_151 = (byte) (bx_72 + 0x0001);
			ax_155 = DPB(wLoc06_122, al_154, 0, 8);
		}
		word16 bx_80 = fn0C00_01D7(bl_151);
		Mem82[ds:0x01AD:word16] = bx_80;
		byte al_83 = al_154 + Mem82[ds:0x01B1:byte];
		word16 ax_84 = DPB(ax_155, al_83, 0, 8);
		if (al_83 == 0x01)
			Mem141[ds:0x01B1:byte] = -Mem82[ds:0x01B1:byte];
		if (al_83 == 0xC6)
			Mem137[ds:0x01B1:byte] = -Mem82[ds:0x01B1:byte];
		word16 cx_93;
		word16 ax_94 = fn0C00_01E6(ax_84, Mem82[ds:0x01AF:word16] + 0x00A0, 0x013F, bx_80, ds, out cx_93);
		word16 bx_100 = fn0C00_01D7((byte) wLoc02_10 + Mem82[ds:0x01B2:byte]);
		word16 cx_106;
		word16 ax_107 = fn0C00_01E6(ax_94, cx_93, 0x0000, bx_100, ds, out cx_106);
		byte al_114;
		byte dl_115;
		byte ah_116;
		fn0C00_01B3(ax_107, 0x00A0, 0x0F, 0xA000, ds, out al_114, out dl_115, out ah_116);
		Mem119[ss:fp - 0x0004:word16] = 0x00A0;
		fn0C00_01C3(bx_100, 0x0000, dl_115, 0xA000, ds);
		byte Z_132 = fn0C00_01C3(Mem119[ds:0x01AD:word16], 0x013F, 0x0F, 0xA000, ds);
		bios_kbd_check_keystroke(out al_133);
		wLoc02_10 = bx_100;
		wLoc06_122 = ax_107;
	} while (Z_132);
	msdos_terminate_program20();
}

bool fn0C00_01B3(word16 ax, word16 bx, byte dl, selector es, selector ds, ptr16 alOut, ptr16 dlOut, ptr16 ahOut)
{
	word16 bx_15 = bx + (word16) (Mem0[ds:0x01AB:word16] *u ax);
	byte dl_19 = (byte) dx;
	*dlOut = dl_19;
	Mem21[es:bx_15 + 0x0000:byte] = dl_19;
	byte al_27;
	*alOut = (byte) ax;
	byte ah_28;
	*ahOut = SLICE(ax, byte, 8);
	return cond(bx_15);
}

bool fn0C00_01C3(word16 ax, word16 bx, byte dl, selector es, selector ds)
{
	word16 cx_19 = 0x000A;
	do
	{
		byte al_11;
		byte ah_13;
		fn0C00_01B3(ax, bx, dl, es, ds, out al_11, out dl, out ah_13);
		ax = ax + 0x0001;
		cx_19 = cx_19 - 0x0001;
	} while (cx_19 != 0x0000);
	byte al_23;
	byte dl_24;
	byte ah_25;
	fn0C00_01B3(ax, bx, 0x00, es, ds, out al_23, out dl_24, out ah_25);
	byte al_31;
	byte dl_32;
	byte ah_33;
	return fn0C00_01B3(DPB(ax, al_23 - 0x0B, 0, 8), bx, dl_24, es, ds, out al_31, out dl_32, out ah_33);
}

word16 fn0C00_01D7(byte bl)
{
	if (bl == 0x00)
		bx = DPB(bx, 0x01, 0, 8);
	if (false)
		bx = DPB(bx, 0xBD, 0, 8);
	return bx;
}

word16 fn0C00_01E6(word16 ax, word16 cx, word16 dx, word16 bx, selector ds, ptr16 cxOut)
{
	*cxOut = cx;
	if (cx != dx)
		goto l0C00_0207;
	else if (ax >= bx && ax < DPB(bx, bl + 0x0A, 0, 8))
	{
		Mem58[ds:0x01AF:word16] = -Mem0[ds:0x01AF:word16];
		return ax;
	}
	else
	{
		ax = (DPB(ax, al + 0x61, 0, 8) & 0x007F) + 0x0024;
		word16 cx_46;
		*cxOut = 0x00A0;
l0C00_0207:
		return ax;
	}
}

