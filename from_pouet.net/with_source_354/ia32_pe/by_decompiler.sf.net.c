// subject.c
// Generated on 5/4/2015 12:08:35 AM by decompiling from_pouet.net/with_source_354/ia32_pe/subject.exe
// using Decompiler version 0.4.2.0.

#include "subject.h"

void fn00401000()
{
fn00401000_entry:
l00401000:
	Eq_2 eax_4 = LoadLibraryA(0x00403000)
	globals->t403009 = eax_4;
	branch eax_4 == 0x00000000 l00401089
l00401013:
	fp->tFFFFFFFC.u0 = 0x0040300D;
	word32 eax_54 = GetProcAddress(globals->t403009, 0x00403000)
	globals->dw403015 = eax_54;
	branch eax_54 == 0x00000000 l00401089
l0040102C:
	fp->tFFFFFFFC.u0 = 0x00000000;
	Eq_2 eax_74 = CreateFileA(0x00403041, 0x40000000, 0x00000000, 0x00000000, 0x00000003, 0x00000080, 0x0040300D)
	globals->t40304E = eax_74;
	branch eax_74 == 0x00000001 l00401089
l00401052:
	fp->tFFFFFFFC.u0 = 0x00000000;
	fp->tFFFFFFFC.u0 = 0x00000000;
	fp->tFFFFFFFC.u0 = 0x00000031;
	fp->tFFFFFFFC = globals->t40304E;
	SetFilePointer(0x00000000, 0x00000003, 0x00000080, 0x00000000)
	fp->tFFFFFFFC.u0 = 0x00000000;
	fp->tFFFFFFFC.u0 = 0x00403052;
	fp->tFFFFFFFC.u0 = 0x00000004;
	fp->tFFFFFFFC.u0 = 0x00403015;
	fp->tFFFFFFFC = globals->t40304E;
	WriteFile(0x00000000, 0x00000000, 0x00000003, 0x00000080, 0x00000000)
	fp->tFFFFFFFC = globals->t40304E;
	CloseHandle(0x00000000)
	goto l0040109E
l00401089:
	fp->tFFFFFFFC.u0 = 0x00403034;
	fp->tFFFFFFFC.u0 = 0x00000000;
	MessageBoxA(0x00000000, 0x00000003, 0x00403019, 0x00000000)
	goto l004010B1
l0040109E:
	fp->tFFFFFFFC.u0 = 0x00403019;
	fp->tFFFFFFFC.u0 = 0x00403028;
	fp->tFFFFFFFC.u0 = 0x00000000;
	MessageBoxA(0x00403015, 0x00000004, 0x00403052, 0x00000000)
l004010B1:
	fp->tFFFFFFFC = globals->t403009;
	FreeLibrary(0x00000000)
	fp->tFFFFFFFC.u0 = 0x00000000;
	ExitProcess(0x00000000)
	int3()
fn00401000_exit:
}

