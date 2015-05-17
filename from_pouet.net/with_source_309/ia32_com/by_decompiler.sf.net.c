// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_309/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte ah, selector ds)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	word16 cx_16 = 0x04B0
l0C00_010B:
	ah = fn0C00_0274(cx_16 << 0x0001, ah, ds)
	cx_16 = cx_16 - 0x0001
	branch cx_16 != 0x0000 l0C00_010B
l0C00_0114:
	byte Z_24
	branch Mem0[ds:0x029F:byte] >=u 0x04 l0C00_0128
l0C00_0122:
	byte v11_33 = Mem0[ds:0x2C02:byte] - 0x01
	Mem34[ds:0x2C02:byte] = v11_33
	Z_24 = cond(v11_33) (alias)
	goto l0C00_012C
l0C00_0128:
	byte v14_38 = Mem0[ds:0x2C02:byte] + 0x01
	Mem39[ds:0x2C02:byte] = v14_38
	Z_24 = cond(v14_38) (alias)
l0C00_012C:
	branch Z_24 l0C00_0131
l0C00_012E:
	fn0C00_0274(0x0960, ah, ds)
l0C00_0131:
	Mem30[ds:0x3C02:byte] = Mem0[ds:0x3C02:byte] + (Mem0[ds:0x3C02:byte] <u 0x28)
fn0C00_0100_exit:
}

word16 fn0C00_026C(word16 bx, byte ah, ptr16 ahOut)
{
	__inb(0x40);
	word16 dx_7 = SEQ(0x0000, ax) % bx;
	byte ah_10;
	*ahOut = SLICE(SEQ(dx_7, ax) / bx, byte, 8);
	return dx_7 + 0x0001;
}

byte fn0C00_0274(word16 si, byte ah, selector ds)
{
	Mem2[ds:si + 0x32A2:byte] = 0x0F;
	byte ah_7;
	Mem11[ds:si + 0x02A2:word16] = fn0C00_026C(0x0064, ah, out ah_7) - 0x0032;
	byte ah_12;
	Mem16[ds:si + 0x12A2:word16] = fn0C00_026C(0x0064, ah_7, out ah_12) - 0x0032;
	byte ah_18;
	Mem20[ds:si + 0x22A2:word16] = fn0C00_026C(0x00FE, ah_12, out ah_18);
	return ah_18;
}

