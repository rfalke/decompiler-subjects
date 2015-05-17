// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_253/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte ch)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	__outb(0x03C8, 0x00)
	word16 ax_14 = 0x0000
	ui8 cl_18 = 0xFF
	word16 cx_20 = DPB(cx, 0xFF, 0, 8)
l0C00_0118:
	__outb(0x03C9, 0x3F)
	uint8 al_26 = cl_18 * 0x02
	__outb(0x03C9, (al_26 >>u 0x03) + 0x1F)
	word16 ax_27 = DPB(ax_14, al_26, 0, 8)
	__outb(0x03C9, (byte) ax_27 >>u 0x02)
	cx_20 = cx_20 - 0x0001;
	ax_14 = ax_27;
	cl_18 = (byte) cx_20;
	branch cx_20 != 0x0000 l0C00_0118
l0C00_012D:
fn0C00_0100_exit:
}

