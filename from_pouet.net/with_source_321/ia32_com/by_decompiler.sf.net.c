// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_321/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(selector ds)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	byte ah_11 = 0x00
	word16 cx_10 = 0x0800
l0C00_010C:
	fn0C00_0222(cx_10, ah_11, ds, out ah_11)
	cx_10 = cx_10 - 0x0001
	branch cx_10 != 0x0000 l0C00_010C
l0C00_0111:
	Mem21[ss:fp - 0x0002:word16] = 0x1000
	Mem25[ds:0x6308:byte] = 0x00
	word16 si_23 = 0xA000
	byte ah_26 = fn0C00_027E(0xA000, 0xA000, ds)
	branch Mem25[ds:0x02FD:byte] >=u 0x04 l0C00_0134
l0C00_0129:
	word16 v12_44 = Mem25[ds:0x32FE:word16] - 0x0001
	Mem45[ds:0x32FE:word16] = v12_44
	branch v12_44 != 0x0000 l0C00_0143
l0C00_012F:
	byte ah_48
	si_23 = fn0C00_0222(0x0800, ah_26, ds, out ah_48)
	goto l0C00_0143
l0C00_0134:
	Mem51[ds:0x32FE:word16] = Mem25[ds:0x32FE:word16] + 0x0001
	branch Mem51[ds:0x32FE:word16] <u 0x00C8 l0C00_0143
l0C00_0140:
	byte ah_55
	si_23 = fn0C00_0222(0x0800, ah_26, ds, out ah_55)
l0C00_0143:
	branch Mem25[ds:si_23 + 0x32FE:byte] == 0x28 l0C00_014E
l0C00_014A:
	Mem42[ds:si_23 + 0x32FE:byte] = Mem25[ds:si_23 + 0x32FE:byte] + 0x01
l0C00_014E:
	Mem38[ss:fp - 0x0002:word16] = Mem25[ds:si_23 + 0x32FE:word16]
	Mem39[ds:0x6308:word16] = 0x1000
fn0C00_0100_exit:
}

byte fn0C00_020F(byte ah, selector ds)
{
	__inb(0x40);
	__inb(0x40);
	word16 bx_11 = Mem0[ds:0x6309:word16];
	word16 dx_12 = SEQ(0x0000, ax) % bx_11;
	Mem18[ds:0x6309:word16] = dx_12;
	return SLICE(SEQ(dx_12, ax) / bx_11, byte, 8);
}

word16 fn0C00_0222(word16 cx, byte ah, selector ds, ptr16 ahOut)
{
	SEQ(ds, 0x32FE)[cx * 0x0002] = 0x10;
	Mem11[ds:0x6309:word16] = 0x00A0;
	byte ah_13 = fn0C00_020F(ah, ds);
	Mem15[ds:0x6309:word16] = Mem11[ds:0x6309:word16] - 0x0050;
	SEQ(ds, 0x02FE)[cx * 0x0002] = Mem15[ds:0x6309:word16];
	Mem21[ds:0x6309:word16] = 0x0064;
	byte ah_22 = fn0C00_020F(ah_13, ds);
	Mem24[ds:0x6309:word16] = Mem21[ds:0x6309:word16] - 0x0032;
	SEQ(ds, 0x12FE)[cx * 0x0002] = Mem24[ds:0x6309:word16];
	Mem30[ds:0x6309:word16] = 0x0064;
	byte ah_31 = fn0C00_020F(ah_22, ds);
	*ahOut = ah_31;
	Mem33[ds:0x6309:word16] = Mem30[ds:0x6309:word16] + 0x0064;
	if (Mem33[ds:0x02FD:byte] >=u 0x04)
	{
		Mem42[ds:0x6309:word16] = 0x000F;
		byte ah_43;
		*ahOut = fn0C00_020F(ah_31, ds);
	}
	SEQ(ds, 0x22FE)[cx * 0x0002] = Mem33[ds:0x6309:word16];
	return cx << 0x0001;
}

byte fn0C00_027E(word16 si, selector es, selector ds)
{
	if (Mem0[ds:si + 0x22FE:word16] == 0x0000)
		Mem70[ds:si + 0x22FE:word16] = Mem0[ds:si + 0x22FE:word16] + 0x0001;
	word16 bx_12 = Mem0[ds:si + 0x22FE:word16];
	Mem17[ds:0x6304:word16] = SEQ(Mem0[ds:si + 0x42FE:word16] *s 0x0064 % bx_12, 0x0064) / bx_12 + 0x00A0;
	word16 bx_21 = Mem17[ds:si + 0x22FE:word16];
	Mem26[ds:0x6306:word16] = SEQ(Mem17[ds:si + 0x52FE:word16] *s 0x0064 % bx_21, 0x0064) / bx_21 + 0x0064;
	word16 ax_31 = (word16) (Mem26[ds:0x6306:word16] *s 0x0140) + Mem26[ds:0x6304:word16];
	byte ah_33 = SLICE(ax_31, byte, 8);
	if (Mem26[ds:0x6304:word16] <=u 0x013F && Mem26[ds:0x6306:word16] <=u 0x00C7)
	{
		byte al_47 = Mem26[ds:0x6308:byte];
		Mem50[es:ax_31 + 0x0000:byte] = al_47;
		if (Mem50[ds:0x02FD:byte] != 0x00 && (Mem50[ds:0x02FD:byte] != 0x03 && (Mem50[ds:0x02FD:byte] != 0x04 && Mem50[ds:0x02FD:byte] != 0x07)))
		{
			Mem61[es:ax_31 + 0x0001:byte] = al_47;
			Mem65[es:ax_31 + 0x0140:byte] = al_47;
			Mem67[es:ax_31 + 0x0141:byte] = al_47;
		}
	}
	return ah_33;
}

