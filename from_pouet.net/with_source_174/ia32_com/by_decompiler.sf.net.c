// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_174/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 Eq_8::*bp, Eq_12 word16::*si, Eq_54 Eq_88::*di, byte dl, byte ah, byte dh)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	Mem15[ss:bp + 0x0003 + si:word16] = 0x3838
	word16 ax_25 = DPB(ax, 0x13, 0, 8)
	word16 dx_8 = DPB(dx, dh + 0x13, 8, 8)
	word16 dx_19 = 0x03C8
	word16 cx_22 = 0x2000
l0C00_0117:
	word16 ax_27 = __shrd(ax_25, cx_22, 0x13)
	int8 al_30 = -(byte) ax_27
	__outb(dx_19, al_30)
	ax_25 = DPB(ax_27, al_30, 0, 8);
	dx_19 = DPB(dx_19, 0xC9, 0, 8);
	cx_22 = cx_22 - 0x0001;
	branch cx_22 != 0x0000 l0C00_0117
l0C00_0122:
	Eq_45 bx_38 = 0x0141
l0C00_0125:
l0C00_0126:
	si = si - 0x0001;
	byte v18_58 = Mem15[dx_8:bx_38 + si:byte] + Mem15[dx_8:si + 0x0000:byte]
	Mem59[dx_8:bx_38 + si:byte] = v18_58
	Mem63[dx_8:bx_38 + si:byte] = __rcr(Mem59[dx_8:bx_38 + si:byte], 0x01, cond(v18_58))
	cx_22 = cx_22 - 0x0001;
	branch cx_22 != 0x0000 l0C00_0126
l0C00_012D:
	bx_38 = -bx_38;
	branch bx_38 < 0x0000 l0C00_0126
l0C00_0132:
	bx_38 = bx_38 >>u 0x0007;
	branch bx_38 >>u 0x0007 != 0x0000 l0C00_0125
l0C00_0137:
	word16 cx_76 = DPB(cx_22, 0x80, 8, 8)
l0C00_0139:
	branch cx_76 == 0x0000 l0C00_013B
l0C00_0139_1:
	Mem83[0xA000:di + 0x0000:word16] = Mem63[dx_8:si + 0x0000:word16]
	si = si + 2;
	di = di + 1;
	cx_76 = cx_76 - 0x0001;
	goto l0C00_0139
l0C00_013B:
	Mem89[ss:bp + di:word16] = 0xFFE8
fn0C00_0100_exit:
}

