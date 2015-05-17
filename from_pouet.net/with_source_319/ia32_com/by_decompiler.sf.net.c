// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_319/ia32_com/subject.exe
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
	fn0C00_024A(cx_10, ah_11, ds, out ah_11)
	cx_10 = cx_10 - 0x0001
	branch cx_10 != 0x0000 l0C00_010C
l0C00_0111:
	word16 si_18 = 0x1000
	branch Mem0[ds:0x02F8:byte] >=u 0x04 l0C00_0127
l0C00_011F:
	word16 v12_45 = Mem0[ds:0x32FC:word16] - 0x0001
	Mem46[ds:0x32FC:word16] = v12_45
	branch v12_45 != 0x0000 l0C00_0136
l0C00_0125:
	goto l0C00_0133
l0C00_0127:
	Mem50[ds:0x32FC:word16] = Mem0[ds:0x32FC:word16] + 0x0001
	branch Mem50[ds:0x32FC:word16] <u 0x00C8 l0C00_0136
l0C00_0133:
	byte ah_41
	fn0C00_024A(0x0800, ah_11, ds, out ah_41)
	byte ah_43
	si_18 = fn0C00_024A(0x0800, ah_41, ds, out ah_43)
l0C00_0136:
	branch Mem0[ds:si_18 + 0x32FC:byte] == 0x28 l0C00_0141
l0C00_013D:
	Mem35[ds:si_18 + 0x32FC:byte] = Mem0[ds:si_18 + 0x32FC:byte] + 0x01
l0C00_0141:
	Mem30[ss:fp - 0x0002:word16] = Mem0[ds:si_18 + 0x32FC:word16]
	Mem32[ds:0x6306:word16] = 0x9000
fn0C00_0100_exit:
}

word16 fn0C00_023C(byte ah, ptr16 ahOut)
{
	__inb(0x40);
	__inb(0x40);
	word32 dx_ax_8 = SEQ(0x0000, ax);
	byte ah_13;
	*ahOut = SLICE(SEQ(dx_ax_8 % 0x0064, ax) / 0x0064, byte, 8);
	return dx_ax_8 % 0x0064;
}

word16 fn0C00_024A(word16 cx, byte ah, selector ds, ptr16 ahOut)
{
	SEQ(ds, 0x32FC)[cx * 0x0002] = 0x0F;
	byte ah_12;
	SEQ(ds, 0x02FC)[cx * 0x0002] = fn0C00_023C(ah, out ah_12) - 0x0032;
	byte ah_17;
	SEQ(ds, 0x12FC)[cx * 0x0002] = fn0C00_023C(ah_12, out ah_17) - 0x0032;
	byte ah_22;
	word16 dx_23 = fn0C00_023C(ah_17, out ah_22);
	if (Mem21[ds:0x02F8:byte] <u 0x04)
		dx_23 = dx_23 + 0x0064;
	SEQ(ds, 0x22FC)[cx * 0x0002] = dx_23;
	return cx << 0x0001;
}

