// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_311/ia32_com/subject.exe
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
	fn0C00_0216(cx_10, ah_11, ds, out ah_11)
	cx_10 = cx_10 - 0x0001
	branch cx_10 != 0x0000 l0C00_010C
l0C00_0111:
	Mem20[ds:0x62D2:byte] = 0x00
	word16 si_18 = 0x1000
	byte ah_21 = fn0C00_0248(0x1000, 0xA000, ds)
	branch Mem20[ds:0x02C7:byte] >=u 0x04 l0C00_012F
l0C00_0127:
	word16 v12_48 = Mem20[ds:0x32C8:word16] - 0x0001
	Mem49[ds:0x32C8:word16] = v12_48
	branch v12_48 != 0x0000 l0C00_013E
l0C00_012D:
	goto l0C00_013B
l0C00_012F:
	Mem53[ds:0x32C8:word16] = Mem20[ds:0x32C8:word16] + 0x0001
	branch Mem53[ds:0x32C8:word16] <u 0x00C8 l0C00_013E
l0C00_013B:
	byte ah_44
	fn0C00_0216(0x0800, ah_21, ds, out ah_44)
	byte ah_46
	si_18 = fn0C00_0216(0x0800, ah_44, ds, out ah_46)
l0C00_013E:
	branch Mem20[ds:si_18 + 0x32C8:byte] == 0x28 l0C00_0149
l0C00_0145:
	Mem38[ds:si_18 + 0x32C8:byte] = Mem20[ds:si_18 + 0x32C8:byte] + 0x01
l0C00_0149:
	Mem33[ss:fp - 0x0002:word16] = Mem20[ds:si_18 + 0x32C8:word16]
	Mem35[ds:0x62D2:word16] = 0xA000
fn0C00_0100_exit:
}

word16 fn0C00_0208(byte ah, ptr16 ahOut)
{
	__inb(0x40);
	__inb(0x40);
	word32 dx_ax_8 = SEQ(0x0000, ax);
	byte ah_13;
	*ahOut = SLICE(SEQ(dx_ax_8 % 0x0064, ax) / 0x0064, byte, 8);
	return dx_ax_8 % 0x0064;
}

word16 fn0C00_0216(word16 cx, byte ah, selector ds, ptr16 ahOut)
{
	SEQ(ds, 0x32C8)[cx * 0x0002] = 0x00;
	byte ah_12;
	SEQ(ds, 0x02C8)[cx * 0x0002] = fn0C00_0208(ah, out ah_12) - 0x0032;
	byte ah_17;
	SEQ(ds, 0x12C8)[cx * 0x0002] = fn0C00_0208(ah_12, out ah_17) - 0x0032;
	byte ah_22;
	word16 dx_24 = fn0C00_0208(ah_17, out ah_22) + 0x0064;
	if (Mem21[ds:0x02C7:byte] >=u 0x04)
	{
		byte ah_31;
		dx_24 = fn0C00_0208(ah_22, out ah_31);
	}
	SEQ(ds, 0x22C8)[cx * 0x0002] = dx_24;
	return cx << 0x0001;
}

byte fn0C00_0248(word16 si, selector es, selector ds)
{
	if (Mem0[ds:si + 0x22C8:word16] == 0x0000)
		Mem70[ds:si + 0x22C8:word16] = Mem0[ds:si + 0x22C8:word16] + 0x0001;
	word16 bx_12 = Mem0[ds:si + 0x22C8:word16];
	Mem17[ds:0x62CE:word16] = SEQ(Mem0[ds:si + 0x42C8:word16] *s 0x0064 % bx_12, 0x0064) / bx_12 + 0x00A0;
	word16 bx_21 = Mem17[ds:si + 0x22C8:word16];
	Mem26[ds:0x62D0:word16] = SEQ(Mem17[ds:si + 0x52C8:word16] *s 0x0064 % bx_21, 0x0064) / bx_21 + 0x0064;
	word16 ax_31 = (word16) (Mem26[ds:0x62D0:word16] *s 0x0140) + Mem26[ds:0x62CE:word16];
	byte ah_33 = SLICE(ax_31, byte, 8);
	if (Mem26[ds:0x62CE:word16] <=u 0x013F && Mem26[ds:0x62D0:word16] <=u 0x00C7)
	{
		byte al_47 = Mem26[ds:0x62D2:byte];
		Mem50[es:ax_31 + 0x0000:byte] = al_47;
		if (Mem50[ds:0x02C7:byte] != 0x00 && (Mem50[ds:0x02C7:byte] != 0x03 && (Mem50[ds:0x02C7:byte] != 0x04 && Mem50[ds:0x02C7:byte] != 0x07)))
		{
			Mem61[es:ax_31 + 0x0001:byte] = al_47;
			Mem65[es:ax_31 + 0x0140:byte] = al_47;
			Mem67[es:ax_31 + 0x0141:byte] = al_47;
		}
	}
	return ah_33;
}

