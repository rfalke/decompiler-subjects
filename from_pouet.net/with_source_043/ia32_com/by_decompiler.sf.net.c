// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_043/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 di)
{
	__outb(0x0331, 0x3F);
	do
	{
		__outb(0x0330, 0x99);
		__outb(0x0330, ((byte) di & 0x0B) + 0x27);
		__outb(0x0330, 0x7F);
		byte al_17;
		bios_kbd_get_keystroke(out al_17);
		di = di + 0x0001;
	} while (__inb(0x60) != 0x01);
	return;
}

