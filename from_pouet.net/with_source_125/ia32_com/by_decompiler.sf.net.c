// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_125/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(uint16 bx, byte Eq_9::*di, byte cl)
{
fn0C00_0100_entry:
l0C00_0100:
	__cli()
l0C00_0106:
	word16 ax_20 = DPB(ax, __inb(0x03DA), 0, 8)
	__outb(0x03C8, 0x00)
	byte al_27 = (byte) ax_20
	branch (al_27 & 0x08) == 0x00 l0C00_011F
l0C00_0117:
	0xB800->*di = al_27;
	bx = 0x03C9;
	di = di + 1 + 0x0001 & 0x1FFF;
l0C00_011F:
	branch (al_27 & 0x01) == 0x00 l0C00_0124
l0C00_0121_1:
	cl = 0xC9;
l0C00_0124:
	__outb(0x03C9, al_27 << 0x02)
	cl = cl + 0x05;
	__outb(0x03C9, cl)
	bx = bx + 0x0001;
	__outb(0x03C9, (byte) (bx >>u 0x0006))
	word16 ax_52 = DPB(bx >>u 0x0006, __inb(0x0060), 0, 8)
	ax = ax_52 - 0x0001;
	branch ax_52 != 0x0001 l0C00_0106
l0C00_013E:
	__syscall(0x18)
fn0C00_0100_exit:
}

