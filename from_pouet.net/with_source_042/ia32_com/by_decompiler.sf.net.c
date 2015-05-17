// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_042/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte cl, byte ah)
{
	bios_video_set_mode(0x13);
	do
	{
		cx = DPB(cx, 0xFA, 8, 8);
		do
		{
			ah = ah + ((byte) cx + SLICE(cx, byte, 8));
			(0xA000->*cx).bFFFFFFFF = ah;
			cx = cx - 0x0001;
		} while (cx != &Eq_13::t0000);
	} while (__inb(0x60) != 0x01);
	msdos_terminate_program20();
}

