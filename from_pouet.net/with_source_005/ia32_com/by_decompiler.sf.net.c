// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_005/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte ch)
{
	__syscall(0x10);
	byte al_9;
	bios_kbd_get_keystroke(out al_9);
}

