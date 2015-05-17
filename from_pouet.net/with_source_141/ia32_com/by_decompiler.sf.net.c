// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_141/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte al)
{
	bios_video_set_mode(al);
	byte Eq_40::*bx_20 = &Eq_40::b0000;
	do
	{
		word16 cx_26 = 0xFA00;
		do
		{
			0x0C00->w0166 = 0x0C00->w0162;
			0x0C00->w0162 = 0x0C00->w0162 + 0x0C00->w0164;
			0x0C00->w0164 = 0x0C00->w0166;
			word16 ax_39 = __ror(0x0C00->w0162, 0x08);
			0x0C00->w0162 = ax_39;
			byte al_54 = Mem40[0x0C00:SEQ(0x0000, ax_39) % 0x0004 + 0x0168:byte];
			0xA000->*bx_20 = al_54;
			bx_20 = bx_20 + 1;
			cx_26 = cx_26 - 0x0001;
		} while (cx_26 != 0x0000);
		msdos_get_stdin_status();
	} while (al_54 == 0x00);
	__syscall(0x21);
	bios_video_set_mode(0x03);
	msdos_terminate(0x03);
}

