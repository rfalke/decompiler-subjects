// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_024/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte Eq_7::*di)
{
	bios_video_set_mode(0x13);
	do
	{
		0xA000->*di = 0xA000->*di + 0x01;
		di = di + 1 + 0x0140;
	} while (__inb(0x60) != 0x01);
	return;
}

