// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_304/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(selector ds)
{
	bios_video_set_mode(0x13);
	byte al_115 = 0x13;
	word16 wLoc02_104 = 0x0064;
	do
	{
		Mem28[ds:0x01C0:word16] = 0x0000;
		__syscall(0x16);
		if ((al_115 & 0x04) != 0x00)
			Mem149[ds:0x01C0:word16] = Mem28[ds:0x01C0:word16] + 0x0001;
		if ((al_115 & 0x08) != 0x00)
		{
			Mem146[ds:0x01C0:word16] = Mem28[ds:0x01C0:word16] - 0x0001;
			goto l0C00_0125;
		}
l0C00_0125:
		do
			;
		while ((__inb(0x03DA) & 0x08) != 0x00);
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		word16 bx_51 = Mem28[ds:0x01C2:word16];
		byte al_55;
		byte dl_56;
		byte ah_57;
		fn0C00_01CA(wLoc02_104, bx_51, 0x00, 0xA000, ds, out al_55, out dl_56, out ah_57);
		word16 bx_61 = Mem28[ds:0x01BE:word16];
		word16 ax_137 = wLoc02_104;
		byte bl_133 = (byte) bx_61;
		if (bx_51 >= 0x00E6)
		{
			word16 ax_127 = DPB(wLoc02_104, al_55 - 0x05, 0, 8);
			if (ax_127 != bx_61)
				if (ax_127 <= bx_61)
					bl_133 = (byte) (bx_61 - 0x0001);
				else
					bl_133 = (byte) (bx_61 + 0x0001);
			ax_137 = DPB(wLoc02_104, al_55, 0, 8);
		}
		word16 bx_68 = fn0C00_01EE(bl_133);
		Mem70[ds:0x01BE:word16] = bx_68;
		word16 ax_71 = ax_137 + Mem70[ds:0x01C6:word16];
		byte al_72 = (byte) ax_71;
		if (al_72 == 0x01)
			Mem123[ds:0x01C6:word16] = -Mem70[ds:0x01C6:word16];
		if (al_72 == 0xC6)
			Mem119[ds:0x01C6:word16] = -Mem70[ds:0x01C6:word16];
		word16 cx_80 = Mem70[ds:0x01C2:word16] + Mem70[ds:0x01C4:word16];
		Mem82[ds:0x01C2:word16] = cx_80;
		word16 ax_84 = fn0C00_01FD(ax_71, cx_80, 0x013F, bx_68, ds);
		word16 bx_89 = fn0C00_01EE((byte) (Mem82[ds:0x01BC:word16] + Mem82[ds:0x01C0:word16]));
		Mem90[ds:0x01BC:word16] = bx_89;
		word16 ax_94 = fn0C00_01FD(ax_84, cx_80, 0x0000, bx_89, ds);
		byte al_99;
		byte dl_100;
		byte ah_101;
		fn0C00_01CA(ax_94, Mem90[ds:0x01C2:word16], 0x0F, 0xA000, ds, out al_99, out dl_100, out ah_101);
		fn0C00_01DA(Mem90[ds:0x01BC:word16], 0x0000, dl_100, 0xA000, ds);
		byte Z_114 = fn0C00_01DA(Mem90[ds:0x01BE:word16], 0x013F, 0x0F, 0xA000, ds);
		bios_kbd_check_keystroke(out al_115);
		wLoc02_104 = ax_94;
	} while (Z_114);
	msdos_terminate_program20();
}

bool fn0C00_01CA(word16 ax, word16 bx, byte dl, selector es, selector ds, ptr16 alOut, ptr16 dlOut, ptr16 ahOut)
{
	word16 bx_15 = bx + (word16) (Mem0[ds:0x01C8:word16] *u ax);
	byte dl_19 = (byte) dx;
	*dlOut = dl_19;
	Mem21[es:bx_15 + 0x0000:byte] = dl_19;
	byte al_27;
	*alOut = (byte) ax;
	byte ah_28;
	*ahOut = SLICE(ax, byte, 8);
	return cond(bx_15);
}

bool fn0C00_01DA(word16 ax, word16 bx, byte dl, selector es, selector ds)
{
	word16 cx_19 = 0x000A;
	do
	{
		byte al_11;
		byte ah_13;
		fn0C00_01CA(ax, bx, dl, es, ds, out al_11, out dl, out ah_13);
		ax = ax + 0x0001;
		cx_19 = cx_19 - 0x0001;
	} while (cx_19 != 0x0000);
	byte al_23;
	byte dl_24;
	byte ah_25;
	fn0C00_01CA(ax, bx, 0x00, es, ds, out al_23, out dl_24, out ah_25);
	byte al_31;
	byte dl_32;
	byte ah_33;
	return fn0C00_01CA(DPB(ax, al_23 - 0x0B, 0, 8), bx, dl_24, es, ds, out al_31, out dl_32, out ah_33);
}

word16 fn0C00_01EE(byte bl)
{
	if (bl == 0x00)
		bx = DPB(bx, 0x01, 0, 8);
	if (false)
		bx = DPB(bx, 0xBD, 0, 8);
	return bx;
}

word16 fn0C00_01FD(word16 ax, word16 cx, word16 dx, word16 bx, selector ds)
{
	if (cx != dx)
		goto l0C00_021F;
	else if (ax >= bx && ax < DPB(bx, bl + 0x0A, 0, 8))
	{
		Mem44[ds:0x01C4:word16] = -Mem0[ds:0x01C4:word16];
		return ax;
	}
	else
	{
		Mem36[ds:0x01C2:word16] = 0x00A0;
		ax = (DPB(ax, al + 0x61, 0, 8) & 0x007F) + 0x0024;
l0C00_021F:
		return ax;
	}
}

