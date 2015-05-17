// subject.c
// Generated on TIMESTAMP by decompiling from_boomerang/callchain/ia32_elf_by_boomerang/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn08048878(code * * edx, word32 dwArg00)
{
fn08048878_entry:
l08048878:
	branch 0x080487E8 == 0x00000000 l08048895
l08048888:
	atexit(&globals->ptr80487E8)
l08048895:
	branch 0x0804A500 == 0x00000000 l080488A3
l0804889E:
	atexit(edx)
l080488A3:
	fp->dwFFFFFFF0 = 0x080494A0;
	atexit(&globals->ptr80487E8)
	globals->dw804AAC8 = &fp->dwFFFFFFF0 + dwArg00 * 0x00000004;
	fn08049470(fp - 0x00000008)
	__fpstart()
	fp->dwFFFFFFF0 = fn080489C4();
	exit(fp->dwFFFFFFF0)
	fp->dwFFFFFFF0 = 0x00000000;
fn08048878_exit:
}

word32 fn08048940(word32 ebp)
{
	word32 ebp_10 = fn08048949(fp - 0x00000004, dwLoc0C);
	return fn08048949(ebp_10, ebp);
}

word32 fn08048949(word32 ebp, word32 dwArg00)
{
	return Mem0[fn080491C8(ebp):word32];
}

word32 fn08048980(word32 dwArg04)
{
	return dwArg04 + 0x00000005;
}

word32 fn08048990(word32 dwArg04)
{
	return dwArg04 + 0x0000000A;
}

word32 fn080489A0(word32 dwArg04)
{
	return dwArg04 + 0x0000000F;
}

void fn080489B0(word32 dwArg04)
{
	dwLoc0C_10 = &globals->b80494B8;
	tLoc08_11 = SLICE(0x080494B8, <unknown>, 32);
	printf(dwLoc0C_10, tLoc08_11);
	return;
}

word32 fn080489C4()
{
	fn080489B0(fn08048980(fn08048990(fn080489A0(0x00000019))));
	return 0x00000000;
}

word32 fn080491C8(word32 ebp)
{
	Eq_114 * ebp_10 = fn080491D1(fp - 0x00000004, dwLoc0C);
	return fn080491D1(ebp_10, ebp);
}

Eq_114 * fn080491D1(Eq_114 * ebp, word32 dwArg00)
{
	Eq_126 * edx_9 = ebp->ptr000C;
	edx_9->dw0008 = ebp->dw0008;
	edx_9->dw0004 = 0x00000000;
	edx_9->dw0000 = 0x00000000;
	edx_9->dw000C = 0x00000000;
	edx_9->dw0010 = 0x00000000;
	edx_9->ptr0014 = dwArg00->ptr18F3;
	dwArg00->ptr18F3 = edx_9;
	return ebp->dw0000;
}

void fn08049418(word32 ebp)
{
	word32 * ebp_13 = fn08049422(fp - 0x00000004, dwLoc10);
	fn08049422(ebp_13, ebp);
	return;
}

word32 * fn08049422(word32 * ebp, word32 dwArg00)
{
	Eq_178 * esi_23 = &dwArg00->u117A;
	if (dwArg00->u117A != 0xFFFFFFFF)
		do
		{
			code * eax_24 = esi_23->ptr0000;
			eax_24();
			esi_23 = esi_23 + 1;
		} while (esi_23->ptr0000 != (code *) 0xFFFFFFFF);
	return *ebp;
}

void fn08049470(word32 ebp)
{
	fn08049418(fn08048940(ebp));
	return;
}

