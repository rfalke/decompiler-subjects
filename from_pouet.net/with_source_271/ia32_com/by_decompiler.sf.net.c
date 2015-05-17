// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_271/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 di)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	word16 ax_7 = DPB(cs, SLICE(cs, byte, 8) + 0x10, 8, 8)
	word16 cx_14 = 0x0000
	byte cl_10 = 0x00
l0C00_0110:
	__outb(0x03C8, cl_10)
	__outb(0x03C9, cl_10)
	__outb(0x03C9, (byte) (cl_10 *u cl_10 >>u 0x0006))
	__outb(0x03C9, 0x00)
	Mem29[ax_7:di + 0x0000:byte] = 0x00
	cx_14 = cx_14 - 0x0001 + 0x0080
	byte dh_20 = 0x03
	byte al_25 = 0x00
	byte C_27 = false
	di = di + 0x0001
	cl_10 = (byte) cx_14 (alias)
	branch cx_14 != 0x0000 l0C00_0110
l0C00_0124:
	dh_20 = __rcl(dh_20, cl_10, C_27)
	byte al_49 = al_25 + (dh_20 >> 0x03) + (dh_20 >> 0x03 <u 0x00)
	byte al_52 = al_49 + Mem29[ax_7:cx_14 + 0x0000:byte] + (al_49 <u 0x00)
	Mem58[ax_7:cx_14 + 0x0000:byte] = al_52 >>u 0x01
	Mem61[ax_7:DPB(cx_14, ~SLICE(cx_14, byte, 8), 8, 8):byte] = al_52 >>u 0x01
	cx_14 = cx_14 - 0x0001
	al_25 = al_52 >>u 0x01
	C_27 = cond(al_52 >>u 0x01) (alias)
	cl_10 = (byte) cx_14 (alias)
	branch cx_14 != 0xFF80 l0C00_0124
l0C00_0140:
fn0C00_0100_exit:
}

