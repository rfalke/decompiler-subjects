// subject.c
// Generated on TIMESTAMP by decompiling from_boomerang/switch/ia32_elf_by_boomerang_gcc/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn08048810(code * * edx, word32 dwArg00)
{
fn08048810_entry:
l08048810:
	branch 0x08048780 == 0x00000000 l0804882D
l08048820:
	atexit(&globals->ptr8048780)
l0804882D:
	branch 0x0804A4C0 == 0x00000000 l0804883B
l08048836:
	atexit(edx)
l0804883B:
	fp->dwFFFFFFF0 = 0x08049440;
	atexit(&globals->ptr8048780)
	globals->dw804AA88 = &fp->dwFFFFFFF0 + dwArg00 * 0x00000004;
	__fpstart()
	fp->dwFFFFFFF0 = fn08048918(fn08049410(fp - 0x00000008), dwArg00);
	exit(fp->dwFFFFFFF0)
	fp->dwFFFFFFF0 = 0x00000000;
fn08048810_exit:
}

word32 fn080488D8(word32 ebp)
{
	word32 ebp_10 = fn080488E1(fp - 0x00000004, dwLoc0C);
	return fn080488E1(ebp_10, ebp);
}

word32 fn080488E1(word32 ebp, word32 dwArg00)
{
	return Mem0[fn08049170(ebp):word32];
}

word32 fn08048918(word32 ebp, ui32 dwArg04)
{
	char * dwLoc08_11;
	if (dwArg04 <=u 0xFFFFFFF9)
		switch (dwArg04 + 0xFFFFFFFE)
		{
		case 0:
			dwLoc08_11 = &globals->b8049458;
			break;
		case 1:
			dwLoc08_11 = &globals->b804945E;
			break;
		case 2:
			dwLoc08_11 = &globals->b8049466;
			break;
		case 3:
			dwLoc08_11 = &globals->b804946D;
			break;
		case 4:
			dwLoc08_11 = &globals->b8049474;
			break;
		case 5:
			dwLoc08_11 = &globals->b804947A;
			break;
		}
	else
		dwLoc08_11 = &globals->b8049482;
	printf(dwLoc08_11, tLoc04);
	return 0x00000000;
}

word32 fn08049170(word32 ebp)
{
	Eq_96 * ebp_10 = fn08049179(fp - 0x00000004, dwLoc0C);
	return fn08049179(ebp_10, ebp);
}

Eq_96 * fn08049179(Eq_96 * ebp, word32 dwArg00)
{
	Eq_108 * edx_9 = ebp->ptr000C;
	edx_9->dw0008 = ebp->dw0008;
	edx_9->dw0004 = 0x00000000;
	edx_9->dw0000 = 0x00000000;
	edx_9->dw000C = 0x00000000;
	edx_9->dw0010 = 0x00000000;
	edx_9->ptr0014 = dwArg00->ptr190B;
	dwArg00->ptr190B = edx_9;
	return ebp->dw0000;
}

word32 fn080493C0(word32 ebp)
{
	word32 * ebp_13 = fn080493CA(fp - 0x00000004, dwLoc10);
	return fn080493CA(ebp_13, ebp);
}

word32 * fn080493CA(word32 * ebp, word32 dwArg00)
{
	Eq_160 * esi_23 = &dwArg00->u1192;
	if (dwArg00->u1192 != 0xFFFFFFFF)
		do
		{
			code * eax_24 = esi_23->ptr0000;
			eax_24();
			esi_23 = esi_23 + 1;
		} while (esi_23->ptr0000 != (code *) 0xFFFFFFFF);
	return *ebp;
}

word32 fn08049410(word32 ebp)
{
	return fn080493C0(fn080488D8(ebp));
}

