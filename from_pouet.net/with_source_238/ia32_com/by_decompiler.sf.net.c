// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_238/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(selector ds)
{
	bios_video_set_mode(0x13);
	word16 wLoc02_103 = 0x005F;
	word16 wLoc06_12 = 0x0064;
	do
	{
		if ((__inb(0x03DA) & 0x08) != 0x00)
			continue;
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		byte dl_52;
		byte ah_53;
		byte al_160;
		fn0C00_01AA(wLoc06_12, 0x00A0, 0x00, 0xA000, ds, out al_160, out dl_52, out ah_53);
		word16 bx_59 = Mem0[ds:0x01A5:word16];
		word16 ax_161 = wLoc06_12;
		byte bl_157 = (byte) bx_59;
		if (false)
		{
			word16 ax_151 = DPB(wLoc06_12, al_160 - 0x05, 0, 8);
			if (ax_151 != bx_59)
				if (ax_151 <= bx_59)
					bl_157 = (byte) (bx_59 - 0x0001);
				else
					bl_157 = (byte) (bx_59 + 0x0001);
			ax_161 = DPB(wLoc06_12, al_160, 0, 8);
		}
		word16 bx_67 = fn0C00_01CE(bl_157);
		Mem69[ds:0x01A5:word16] = bx_67;
		byte al_70 = al_160 + Mem69[ds:0x01A9:byte];
		word16 ax_71 = DPB(ax_161, al_70, 0, 8);
		if (al_70 == 0x01)
			Mem147[ds:0x01A9:byte] = -Mem69[ds:0x01A9:byte];
		if (al_70 == 0xC6)
			Mem143[ds:0x01A9:byte] = -Mem69[ds:0x01A9:byte];
		word16 cx_80;
		word16 ax_81 = fn0C00_01DD(ax_71, Mem69[ds:0x01A7:word16] + 0x00A0, 0x013F, bx_67, ds, out cx_80);
		__syscall(0x16);
		byte al_82 = (byte) ax_81;
		word16 bx_139 = wLoc02_103;
		byte bl_137 = (byte) wLoc02_103;
		if ((al_82 & 0x04) != 0x00)
		{
			bx_139 = wLoc02_103 + 0x0001;
			bl_137 = (byte) bx_139;
		}
		if ((al_82 & 0x08) != 0x00)
			bl_137 = (byte) (bx_139 - 0x0001);
		word16 bx_101 = fn0C00_01CE(bl_137);
		word16 cx_107;
		word16 ax_108 = fn0C00_01DD(ax_81, cx_80, 0x0000, bx_101, ds, out cx_107);
		byte al_115;
		byte dl_116;
		byte ah_117;
		fn0C00_01AA(ax_108, 0x00A0, 0x0F, 0xA000, ds, out al_115, out dl_116, out ah_117);
		Mem120[ss:fp - 0x0004:word16] = 0x00A0;
		fn0C00_01BA(bx_101, 0x0000, dl_116, 0xA000, ds);
		byte Z_133 = fn0C00_01BA(Mem120[ds:0x01A5:word16], 0x013F, 0x0F, 0xA000, ds);
		byte al_134;
		bios_kbd_check_keystroke(out al_134);
		wLoc02_103 = bx_101;
		wLoc06_12 = ax_108;
	} while (Z_133);
	msdos_terminate_program20();
}

bool fn0C00_01AA(word16 ax, word16 bx, byte dl, selector es, selector ds, ptr16 alOut, ptr16 dlOut, ptr16 ahOut)
{
	word16 bx_15 = bx + (word16) (Mem0[ds:0x01A3:word16] *u ax);
	byte dl_19 = (byte) dx;
	*dlOut = dl_19;
	Mem21[es:bx_15 + 0x0000:byte] = dl_19;
	byte al_27;
	*alOut = (byte) ax;
	byte ah_28;
	*ahOut = SLICE(ax, byte, 8);
	return cond(bx_15);
}

bool fn0C00_01BA(word16 ax, word16 bx, byte dl, selector es, selector ds)
{
	word16 cx_19 = 0x000A;
	do
	{
		byte al_11;
		byte ah_13;
		fn0C00_01AA(ax, bx, dl, es, ds, out al_11, out dl, out ah_13);
		ax = ax + 0x0001;
		cx_19 = cx_19 - 0x0001;
	} while (cx_19 != 0x0000);
	byte al_23;
	byte dl_24;
	byte ah_25;
	fn0C00_01AA(ax, bx, 0x00, es, ds, out al_23, out dl_24, out ah_25);
	byte al_31;
	byte dl_32;
	byte ah_33;
	return fn0C00_01AA(DPB(ax, al_23 - 0x0B, 0, 8), bx, dl_24, es, ds, out al_31, out dl_32, out ah_33);
}

word16 fn0C00_01CE(byte bl)
{
	if (bl == 0x00)
		bx = DPB(bx, 0x01, 0, 8);
	if (false)
		bx = DPB(bx, 0xBD, 0, 8);
	return bx;
}

word16 fn0C00_01DD(word16 ax, word16 cx, word16 dx, word16 bx, selector ds, ptr16 cxOut)
{
	*cxOut = cx;
	if (cx != dx)
		goto l0C00_01FE;
	else if (ax >= bx && ax < DPB(bx, bl + 0x0A, 0, 8))
	{
		Mem58[ds:0x01A7:word16] = -Mem0[ds:0x01A7:word16];
		return ax;
	}
	else
	{
		ax = (DPB(ax, al + 0x61, 0, 8) & 0x007F) + 0x0024;
		word16 cx_46;
		*cxOut = 0x00A0;
l0C00_01FE:
		return ax;
	}
}

