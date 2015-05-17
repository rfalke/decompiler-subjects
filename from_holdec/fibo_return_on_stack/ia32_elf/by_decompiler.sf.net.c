// subject.c
// Generated on TIMESTAMP by decompiling from_holdec/fibo_return_on_stack/ia32_elf/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn08048328()
{
	Mem0[0x080497A0:word32]();
	return;
}

void fn08048360(word32 dwArg00)
{
	__align(fp + 0x00000004);
	fn08048328();
	__hlt();
}

