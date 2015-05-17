// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_054/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, byte Eq_30::*bx)
{
	bios_video_set_mode(0x13);
	do
	{
		__outb(0x03C8, cl);
		__outb(0x03C9, cl);
		__outb(0x03C9, 0x00);
		__outb(0x03C9, 0x00);
		cx = cx - 0x0001;
		cl = (byte) cx;
	} while (cx != 0x0000);
	while (true)
	{
		bx = bx + cx;
		0xA000->*bx = cl;
		cx = cx + 0x0012;
		cl = (byte) cx;
	}
}

