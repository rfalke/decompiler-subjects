// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_023/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100()
{
	byte al_2 = 0x03;
	do
	{
		bios_video_set_mode(al_2);
		__syscall(0x15);
		Eq_11 bh_8 = 0x0000 - C;
		C = !cond(bh_8);
		al_2 = 0x00;
	} while (__inb(0x60) != 0x01 || bh_8 <u 0x00);
	return;
}

