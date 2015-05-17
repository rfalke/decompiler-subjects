// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_270/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100()
{
	bios_video_set_mode(0x13);
	cs->w01F8 = cs->w01F8 + 0x0001;
	cs->w01FE = cs->w01FE + 0x0001;
	cs->w0200 = 0xFF9C;
	cs->w0202 = cs->w01FE;
}

