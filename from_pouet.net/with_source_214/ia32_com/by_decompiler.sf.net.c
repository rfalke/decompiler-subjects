// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_214/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte ch)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	__outb(0x03C8, 0x00)
	int8 cl_12 = 0x40
	word16 cx_10 = DPB(cx, 0x40, 0, 8)
l0C00_010D:
	__outb(0x03C9, -cl_12)
	__outb(0x03C9, 0x00)
	__outb(0x03C9, 0x00)
	cx_10 = cx_10 - 0x0001;
	cl_12 = (byte) cx_10;
	branch cx_10 != 0x0000 l0C00_010D
l0C00_0118:
	byte cl_21 = 0x40
	word16 cx_22 = DPB(cx_10, 0x40, 0, 8)
l0C00_011A:
	__outb(0x03C9, 0x00)
	__outb(0x03C9, 0x00)
	__outb(0x03C9, cl_21 - 0x01)
	cx_22 = cx_22 - 0x0001;
	cl_21 = (byte) cx_22;
	branch cx_22 != 0x0000 l0C00_011A
l0C00_0125:
	int8 cl_33 = 0x40
	word16 cx_34 = DPB(cx_22, 0x40, 0, 8)
l0C00_0127:
	__outb(0x03C9, 0x00)
	__outb(0x03C9, -cl_33)
	__outb(0x03C9, 0x00)
	cx_34 = cx_34 - 0x0001;
	cl_33 = (byte) cx_34;
	branch cx_34 != 0x0000 l0C00_0127
l0C00_0134:
	byte cl_46 = 0x40
	word16 cx_47 = DPB(cx_34, 0x40, 0, 8)
l0C00_0136:
	byte al_51 = cl_46 - 0x01
	__outb(0x03C9, al_51)
	__outb(0x03C9, al_51)
	__outb(0x03C9, 0x00)
	cx_47 = cx_47 - 0x0001;
	cl_46 = (byte) cx_47;
	branch cx_47 != 0x0000 l0C00_0136
l0C00_0141:
fn0C00_0100_exit:
}

