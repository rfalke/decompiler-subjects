// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_227/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

real64 fn0C00_0100(word16 di, selector ds, real64 rArg0)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	byte ah_6 = SLICE(cs, byte, 8)
	byte al_18 = (byte) cs
	word16 ax_8 = DPB(cs, ah_6 + 0x10, 8, 8)
	word16 ax_11 = DPB(cs, ah_6 + 0x20, 8, 8)
	word16 cx_13 = 0x0000
	byte cl_14 = 0x00
l0C00_0112:
	__outb(0x03C8, al_18)
	word16 ax_26 = al_18 *u al_18
	byte dh_25 = 0x03
	word16 ax_143 = ax_26 >>u 0x0005
	byte al_142 = (byte) (ax_26 >>u 0x0005)
	branch al_142 <u 0x40 l0C00_0124
l0C00_0122:
	al_142 = 0x3F
	ax_143 = DPB(ax_26 >>u 0x0005, 0x3F, 0, 8) (alias)
l0C00_0124:
	__outb(0x03C9, al_142)
	byte al_139 = cl_14
	word16 ax_138 = DPB(ax_143, cl_14, 0, 8)
	branch cl_14 <u 0x40 l0C00_012C
l0C00_012B:
	ax_138 = ax_138 - 0x0001
	al_139 = (byte) (ax_138 - 0x0001) (alias)
l0C00_012C:
	__outb(0x03C9, al_139)
	word16 ax_41 = ax_138 >>u 0x0001
	al_18 = (byte) ax_41 (alias)
	__outb(0x03C9, al_18)
	Mem46[ax_8:di + 0x0000:byte] = al_18
	cx_13 = cx_13 - 0x0001 + 0x007E
	byte C_45 = cond(ax_41)
	di = di + 0x0001
	cl_14 = (byte) cx_13 (alias)
	branch cx_13 != 0x0000 l0C00_0112
l0C00_0133:
l0C00_0135:
	dh_25 = __rcl(dh_25, cl_14, C_45)
	byte al_67 = al_18 + (dh_25 >> 0x03) + (dh_25 >> 0x03 <u 0x00)
	byte al_70 = al_67 + Mem46[ax_8:cx_13 + 0x0000:byte] + (al_67 <u 0x00)
	Mem76[ax_8:cx_13 + 0x0000:byte] = al_70 >>u 0x01
	Mem79[ax_8:DPB(cx_13, ~SLICE(cx_13, byte, 8), 8, 8):byte] = al_70 >>u 0x01
	cx_13 = cx_13 - 0x0001
	al_18 = al_70 >>u 0x01
	C_45 = cond(al_70 >>u 0x01) (alias)
	cl_14 = (byte) cx_13 (alias)
	branch cx_13 != 0xFF82 l0C00_0135
l0C00_0150:
	word16 bx_126 = 0x0000
	byte bh_127 = 0x00
	byte bl_128 = 0x00
	byte C_105 = false
	word16 cx_101 = cx_13 - 0x0001
l0C00_0153:
	Mem103[ds:0x03C9:byte] = bl_128
l0C00_0155:
	real64 rLoc1_108 = sin((real64) Mem103[ds:0x03C9:int16] * Mem103[ds:0x01FB:real32])
	Mem109[ds:0x03C9:byte] = bh_127
	C_105 = !C_105
	branch C_105 l0C00_0155
l0C00_0162:
	Mem113[ds:0x03C9:word16] = 0x0012
	real64 rArg0_115 = rArg0 * rLoc1_108 * (real64) Mem113[ds:0x03C9:word16] + (real64) Mem113[ds:0x03C9:word16]
	Mem118[ax_11:bx_126 + 0x0000:int16] = (int16) (rArg0_115 - 3)
	byte v25_122 = Mem118[ax_11:bx_126 + 0x0000:byte] + ((bl_128 & bh_127) & 0x08)
	Mem123[ax_11:bx_126 + 0x0000:byte] = v25_122
	bx_126 = bx_126 + 0x0001
	rArg0 = rArg0_115 - 3
	C_105 = cond(v25_122) (alias)
	bh_127 = SLICE(bx_126, byte, 8) (alias)
	bl_128 = (byte) bx_126 (alias)
	cx_101 = cx_101 - 0x0001
	branch cx_101 != 0x0000 l0C00_0153
l0C00_017F:
fn0C00_0100_exit:
}

