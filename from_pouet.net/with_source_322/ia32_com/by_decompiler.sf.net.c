// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_322/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte cl, selector ds)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	byte ah_4 = 0x00
l0C00_0109:
	Mem14[ds:0x02F6:byte] = Mem0[ds:0x02F6:byte] + 0x01
	Mem16[ds:0x02F7:byte] = Mem14[ds:0x02F7:byte] + 0x01
	fn0C00_02E0(cl, ds, out cl)
	branch Mem16[ds:0x02F6:byte] <u 0x3F l0C00_0109
l0C00_011B:
	Mem24[ds:0x02F7:byte] = Mem16[ds:0x02F7:byte] - 0x01
	Mem26[ds:0x02F6:byte] = Mem24[ds:0x02F6:byte] - 0x01
	Mem28[ds:0x02F8:byte] = Mem26[ds:0x02F8:byte] + 0x01
	fn0C00_02E0(cl, ds, out cl)
	branch Mem28[ds:0x02F6:byte] >u 0x2D l0C00_011B
l0C00_0131:
	Mem36[ds:0x02F8:byte] = Mem28[ds:0x02F8:byte] + 0x01
	fn0C00_02E0(cl, ds, out cl)
	branch Mem36[ds:0x02F8:byte] <u 0x3F l0C00_0131
l0C00_013F:
	byte cl_84 = cl
	branch fn0C00_02E0(cl_84, ds, out cl) l0C00_013F
l0C00_0144:
	word16 cx_45 = 0x0800
l0C00_0147:
	fn0C00_0227(cx_45, ah_4, ds, out ah_4)
	cx_45 = cx_45 - 0x0001
	branch cx_45 != 0x0000 l0C00_0147
l0C00_014C:
	Mem59[ss:fp - 0x0002:word16] = 0x1000
	Mem63[ds:0x6308:byte] = 0x00
	byte ah_64 = fn0C00_0273(0xA000, 0xA000, ds)
	word16 v21_66 = Mem63[ds:0xC2FE:word16] - 0x0001
	Mem67[ds:0xC2FE:word16] = v21_66
	word16 si_61 = 0xA000
	branch v21_66 != 0x0000 l0C00_0166
l0C00_0163:
	byte ah_82
	si_61 = fn0C00_0227(0x0800, ah_64, ds, out ah_82)
l0C00_0166:
	branch Mem67[ds:si_61 + 0x32FE:byte] == 0xFF l0C00_0171
l0C00_016D:
	Mem80[ds:si_61 + 0x32FE:byte] = Mem67[ds:si_61 + 0x32FE:byte] + 0x01
l0C00_0171:
	Mem76[ss:fp - 0x0002:word16] = Mem67[ds:si_61 + 0x32FE:word16]
	Mem77[ds:0x6308:word16] = 0x1000
fn0C00_0100_exit:
}

byte fn0C00_0214(byte ah, selector ds)
{
	__inb(0x40);
	__inb(0x40);
	word16 bx_11 = Mem0[ds:0x6309:word16];
	word16 dx_12 = SEQ(0x0000, ax) % bx_11;
	Mem18[ds:0x6309:word16] = dx_12;
	return SLICE(SEQ(dx_12, ax) / bx_11, byte, 8);
}

word16 fn0C00_0227(word16 cx, byte ah, selector ds, ptr16 ahOut)
{
	SEQ(ds, 0x32FE)[cx * 0x0002] = 0x00;
	Mem11[ds:0x6309:word16] = 0x00A0;
	byte ah_13 = fn0C00_0214(ah, ds);
	Mem15[ds:0x6309:word16] = Mem11[ds:0x6309:word16] - 0x0050;
	SEQ(ds, 0x02FE)[cx * 0x0002] = Mem15[ds:0x6309:word16];
	Mem21[ds:0x6309:word16] = 0x0064;
	byte ah_22 = fn0C00_0214(ah_13, ds);
	Mem24[ds:0x6309:word16] = Mem21[ds:0x6309:word16] - 0x0032;
	SEQ(ds, 0x12FE)[cx * 0x0002] = Mem24[ds:0x6309:word16];
	Mem30[ds:0x6309:word16] = 0x0064;
	byte ah_31;
	*ahOut = fn0C00_0214(ah_22, ds);
	Mem33[ds:0x6309:word16] = Mem30[ds:0x6309:word16] + 0x0064;
	SEQ(ds, 0x22FE)[cx * 0x0002] = Mem33[ds:0x6309:word16];
	return cx << 0x0001;
}

byte fn0C00_0273(word16 si, selector es, selector ds)
{
	if (Mem0[ds:si + 0x22FE:word16] == 0x0000)
		Mem66[ds:si + 0x22FE:word16] = Mem0[ds:si + 0x22FE:word16] + 0x0001;
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
		if (Mem50[ds:0x02FD:byte] != 0x00 && Mem50[ds:0x02FD:byte] != 0x03)
		{
			Mem57[es:ax_31 + 0x0001:byte] = al_47;
			Mem61[es:ax_31 + 0x0140:byte] = al_47;
			Mem63[es:ax_31 + 0x0141:byte] = al_47;
		}
	}
	return ah_33;
}

bool fn0C00_02E0(byte cl, selector ds, ptr16 clOut)
{
	__outb(0x03C8, cl);
	__outb(0x03C9, Mem0[ds:0x02F6:byte]);
	__outb(0x03C9, Mem0[ds:0x02F7:byte]);
	__outb(0x03C9, Mem0[ds:0x02F8:byte]);
	byte cl_11;
	*clOut = cl + 0x01;
	return cond(cl + 0x01);
}

