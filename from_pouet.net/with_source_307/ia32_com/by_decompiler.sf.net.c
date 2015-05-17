// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_307/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(selector ds)
{
	bios_video_set_mode(0x13);
	byte al_110 = 0x13;
	do
	{
		Mem24[ds:0x01C9:word16] = 0x0000;
		__syscall(0x16);
		if ((al_110 & 0x04) != 0x00)
			Mem138[ds:0x01C9:word16] = Mem24[ds:0x01C9:word16] + 0x0001;
		if ((al_110 & 0x08) != 0x00)
		{
			Mem135[ds:0x01C9:word16] = Mem24[ds:0x01C9:word16] - 0x0001;
			goto l0C00_0123;
		}
l0C00_0123:
		do
			;
		while ((__inb(0x03DA) & 0x08) != 0x00);
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		word16 ax_43 = Mem24[ds:0x01CD:word16];
		byte al_50;
		byte dl_51;
		byte ah_52;
		fn0C00_01D5(ax_43, Mem24[ds:0x01CB:word16], 0x00, 0xA000, ds, out al_50, out dl_51, out ah_52);
		word16 bx_56 = Mem24[ds:0x01C7:word16];
		byte bl_129 = (byte) bx_56;
		if (Mem24[ds:0x01CB:word16] >= 0x00E6)
		{
			word16 ax_122 = DPB(ax_43, al_50 - 0x05, 0, 8);
			if (ax_122 != bx_56)
				if (ax_122 <= bx_56)
					bl_129 = (byte) (bx_56 - 0x0001);
				else
					bl_129 = (byte) (bx_56 + 0x0001);
		}
		Mem63[ds:0x01C7:word16] = fn0C00_01F9(bl_129);
		word16 bx_68 = fn0C00_01F9((byte) (Mem63[ds:0x01C5:word16] + Mem63[ds:0x01C9:word16]));
		Mem70[ds:0x01C5:word16] = bx_68;
		word16 ax_72 = Mem70[ds:0x01CD:word16] + Mem70[ds:0x01D1:word16];
		Mem75[ds:0x01CD:word16] = ax_72;
		byte al_73 = (byte) ax_72;
		if (al_73 == 0x01)
			Mem118[ds:0x01D1:word16] = -Mem75[ds:0x01D1:word16];
		if (al_73 == 0xC6)
			Mem114[ds:0x01D1:word16] = -Mem75[ds:0x01D1:word16];
		word16 cx_83 = Mem75[ds:0x01CB:word16] + Mem75[ds:0x01CF:word16];
		Mem84[ds:0x01CB:word16] = cx_83;
		byte al_96;
		byte dl_97;
		byte ah_98;
		fn0C00_01D5(fn0C00_0208(fn0C00_0208(ax_72, cx_83, 0x0000, bx_68, ds), cx_83, 0x013F, Mem84[ds:0x01C7:word16], ds), Mem84[ds:0x01CB:word16], 0x0F, 0xA000, ds, out al_96, out dl_97, out ah_98);
		fn0C00_01E5(Mem84[ds:0x01C5:word16], 0x0000, dl_97, 0xA000, ds);
		byte Z_109 = fn0C00_01E5(Mem84[ds:0x01C7:word16], 0x013F, 0x0F, 0xA000, ds);
		bios_kbd_check_keystroke(out al_110);
	} while (Z_109);
	msdos_terminate_program20();
}

bool fn0C00_01D5(word16 ax, word16 bx, byte dl, selector es, selector ds, ptr16 alOut, ptr16 dlOut, ptr16 ahOut)
{
	word16 bx_15 = bx + (word16) (Mem0[ds:0x01D3:word16] *u ax);
	byte dl_19 = (byte) dx;
	*dlOut = dl_19;
	Mem21[es:bx_15 + 0x0000:byte] = dl_19;
	byte al_27;
	*alOut = (byte) ax;
	byte ah_28;
	*ahOut = SLICE(ax, byte, 8);
	return cond(bx_15);
}

bool fn0C00_01E5(word16 ax, word16 bx, byte dl, selector es, selector ds)
{
	word16 cx_19 = 0x000A;
	do
	{
		byte al_11;
		byte ah_13;
		fn0C00_01D5(ax, bx, dl, es, ds, out al_11, out dl, out ah_13);
		ax = ax + 0x0001;
		cx_19 = cx_19 - 0x0001;
	} while (cx_19 != 0x0000);
	byte al_23;
	byte dl_24;
	byte ah_25;
	fn0C00_01D5(ax, bx, 0x00, es, ds, out al_23, out dl_24, out ah_25);
	byte al_31;
	byte dl_32;
	byte ah_33;
	return fn0C00_01D5(DPB(ax, al_23 - 0x0B, 0, 8), bx, dl_24, es, ds, out al_31, out dl_32, out ah_33);
}

word16 fn0C00_01F9(byte bl)
{
	if (bl == 0x00)
		bx = DPB(bx, 0x01, 0, 8);
	if (false)
		bx = DPB(bx, 0xBD, 0, 8);
	return bx;
}

word16 fn0C00_0208(word16 ax, word16 cx, word16 dx, word16 bx, selector ds)
{
	if (cx != dx)
		goto l0C00_0231;
	else if (ax >= bx)
	{
		bx = DPB(bx, bl + 0x0A, 0, 8);
		if (ax < bx)
		{
			Mem46[ds:0x01CF:word16] = -Mem0[ds:0x01CF:word16];
			return ax;
		}
		else
		{
l0C00_021C:
			ax = ((word16) (Mem0[ds:0x36D1:word16] *u (ax + bx)) & 0x007F) + 0x0024;
			Mem39[ds:0x01CD:word16] = ax;
			Mem40[ds:0x01CB:word16] = 0x00A0;
l0C00_0231:
			return ax;
		}
	}
	else
		goto l0C00_021C;
}

