// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_306/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(selector ds)
{
	bios_video_set_mode(0x13);
	byte al_109 = 0x13;
	do
	{
		Mem24[ds:0x01C3:word16] = 0x0000;
		__syscall(0x16);
		if ((al_109 & 0x04) != 0x00)
			Mem137[ds:0x01C3:word16] = Mem24[ds:0x01C3:word16] + 0x0001;
		if ((al_109 & 0x08) != 0x00)
		{
			Mem134[ds:0x01C3:word16] = Mem24[ds:0x01C3:word16] - 0x0001;
			goto l0C00_0123;
		}
l0C00_0123:
		do
			;
		while ((__inb(0x03DA) & 0x08) != 0x00);
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		word16 ax_43 = Mem24[ds:0x01C7:word16];
		word16 bx_46 = Mem24[ds:0x01C5:word16];
		byte al_50;
		byte dl_51;
		byte ah_52;
		fn0C00_01CF(ax_43, bx_46, 0x00, 0xA000, ds, out al_50, out dl_51, out ah_52);
		word16 bx_56 = Mem24[ds:0x01C1:word16];
		byte bl_128 = (byte) bx_56;
		if (bx_46 >= 0x00E6)
		{
			word16 ax_121 = DPB(ax_43, al_50 - 0x05, 0, 8);
			if (ax_121 != bx_56)
				if (ax_121 <= bx_56)
					bl_128 = (byte) (bx_56 - 0x0001);
				else
					bl_128 = (byte) (bx_56 + 0x0001);
		}
		word16 bx_62 = fn0C00_01F3(bl_128);
		Mem64[ds:0x01C1:word16] = bx_62;
		word16 ax_66 = Mem64[ds:0x01C7:word16] + Mem64[ds:0x01CB:word16];
		Mem69[ds:0x01C7:word16] = ax_66;
		byte al_67 = (byte) ax_66;
		if (al_67 == 0x01)
			Mem117[ds:0x01CB:word16] = -Mem69[ds:0x01CB:word16];
		if (al_67 == 0xC6)
			Mem113[ds:0x01CB:word16] = -Mem69[ds:0x01CB:word16];
		word16 cx_76 = Mem69[ds:0x01C5:word16] + Mem69[ds:0x01C9:word16];
		Mem78[ds:0x01C5:word16] = cx_76;
		word16 ax_80 = fn0C00_0202(ax_66, cx_76, 0x013F, bx_62, ds);
		word16 bx_85 = fn0C00_01F3((byte) (Mem78[ds:0x01BF:word16] + Mem78[ds:0x01C3:word16]));
		Mem86[ds:0x01BF:word16] = bx_85;
		byte al_95;
		byte dl_96;
		byte ah_97;
		fn0C00_01CF(fn0C00_0202(ax_80, cx_76, 0x0000, bx_85, ds), Mem86[ds:0x01C5:word16], 0x0F, 0xA000, ds, out al_95, out dl_96, out ah_97);
		fn0C00_01DF(Mem86[ds:0x01BF:word16], 0x0000, dl_96, 0xA000, ds);
		byte Z_108 = fn0C00_01DF(Mem86[ds:0x01C1:word16], 0x013F, 0x0F, 0xA000, ds);
		bios_kbd_check_keystroke(out al_109);
	} while (Z_108);
	msdos_terminate_program20();
}

bool fn0C00_01CF(word16 ax, word16 bx, byte dl, selector es, selector ds, ptr16 alOut, ptr16 dlOut, ptr16 ahOut)
{
	word16 bx_15 = bx + (word16) (Mem0[ds:0x01CD:word16] *u ax);
	byte dl_19 = (byte) dx;
	*dlOut = dl_19;
	Mem21[es:bx_15 + 0x0000:byte] = dl_19;
	byte al_27;
	*alOut = (byte) ax;
	byte ah_28;
	*ahOut = SLICE(ax, byte, 8);
	return cond(bx_15);
}

bool fn0C00_01DF(word16 ax, word16 bx, byte dl, selector es, selector ds)
{
	word16 cx_19 = 0x000A;
	do
	{
		byte al_11;
		byte ah_13;
		fn0C00_01CF(ax, bx, dl, es, ds, out al_11, out dl, out ah_13);
		ax = ax + 0x0001;
		cx_19 = cx_19 - 0x0001;
	} while (cx_19 != 0x0000);
	byte al_23;
	byte dl_24;
	byte ah_25;
	fn0C00_01CF(ax, bx, 0x00, es, ds, out al_23, out dl_24, out ah_25);
	byte al_31;
	byte dl_32;
	byte ah_33;
	return fn0C00_01CF(DPB(ax, al_23 - 0x0B, 0, 8), bx, dl_24, es, ds, out al_31, out dl_32, out ah_33);
}

word16 fn0C00_01F3(byte bl)
{
	if (bl == 0x00)
		bx = DPB(bx, 0x01, 0, 8);
	if (false)
		bx = DPB(bx, 0xBD, 0, 8);
	return bx;
}

word16 fn0C00_0202(word16 ax, word16 cx, word16 dx, word16 bx, selector ds)
{
	if (cx != dx)
		goto l0C00_022B;
	else if (ax >= bx)
	{
		bx = DPB(bx, bl + 0x0A, 0, 8);
		if (ax < bx)
		{
			Mem46[ds:0x01C9:word16] = -Mem0[ds:0x01C9:word16];
			return ax;
		}
		else
		{
l0C00_0216:
			ax = ((word16) (Mem0[ds:0x36D1:word16] *u (ax + bx)) & 0x007F) + 0x0024;
			Mem39[ds:0x01C7:word16] = ax;
			Mem40[ds:0x01C5:word16] = 0x00A0;
l0C00_022B:
			return ax;
		}
	}
	else
		goto l0C00_0216;
}

