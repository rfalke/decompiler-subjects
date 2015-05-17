// subject.c
// Generated on TIMESTAMP by decompiling from_boomerang/typetest/ia32_pe_by_boomerang/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn004019E0(word32 ebp, Eq_3 * fs)
{
	word32 * eax_14 = fs->ptr0000;
	fs->ptr0000 = fp - 0x00000014;
	__set_app_type();
	globals->dw40312C = 0xFFFFFFFF;
	globals->dw403130 = 0xFFFFFFFF;
	__p__fmode();
	*eax_14 = globals->dw403120;
	__p__commode();
	*eax_14 = globals->dw40311C;
	Mem46[0x00403128:word32] = Mem43[_adjust_fdiv:word32];
	fn00401BE0();
	word32 esp_193 = fp + 0xFFFFFF6C;
	if (globals->dw403040 == 0x00000000)
	{
		__setusermatherr();
		esp_193 = fp + 0xFFFFFF68;
	}
	fn00401BB0();
	Eq_51 * esp_54 = esp_193 - 0x00000004;
	esp_54->dw0000 = 0x00403014;
	esp_54->dw0000 = 0x00403010;
	_initterm();
	esp_54->dw0000 = fp - 0x00000070;
	esp_54->dw0000 = globals->dw403114;
	esp_54->dw0000 = fp - 0x00000068;
	Mem74[esp_54 - 0x00000010:word32] = fp - 0x00000074;
	esp_54->dw0000 = fp - 0x00000064;
	__getmainargs();
	esp_54->dwFFFFFFF8 = 0x0040300C;
	esp_54->dwFFFFFFF4 = 0x00403000;
	_initterm();
	__p__acmdln();
	Eq_85 * esi_161 = dwLoc74;
	if (dwLoc74->b0000 == 0x22)
	{
		do
		{
			esi_161 = esi_161 + 1;
			bcu8 al_169 = esi_161->b0000;
		} while (al_169 == 0x00 || al_169 == 0x22);
		if (esi_161->b0000 == 0x22)
		{
			esi_161 = esi_161 + 1;
			goto l00401AEE;
		}
	}
	while (esi_161->b0000 >u 0x20)
		esi_161 = esi_161 + 1;
l00401AEE:
	bcu8 al_99 = esi_161->b0000;
	while (al_99 != 0x00 && al_99 <=u 0x20)
	{
		esi_161 = esi_161 + 1;
		al_99 = esi_161->b0000;
	}
	Eq_80 eax_117;
	esp_54->tFFFFFFF0 = fp - 0x00000060;
	GetStartupInfoA(esp_54->tFFFFFFF0);
	if (0x00 != 0x00)
		eax_117 = dwLoc30 & 0x0000FFFF;
	else
		eax_117.u0 = 0x0000000A;
	esp_54->tFFFFFFF0 = eax_117;
	esp_54->ptrFFFFFFEC = esi_161;
	esp_54->dwFFFFFFE8 = 0x00000000;
	esp_54->tFFFFFFE4.u0 = 0x00000000;
	Eq_80 eax_127 = GetModuleHandleA(esp_54->tFFFFFFE4);
	esp_54->tFFFFFFE4 = eax_127;
	fn00401BFC(ebp, dwArg00, dwArg04, dwArg08);
	esp_54->tFFFFFFF0 = eax_127;
	exit(esp_54->tFFFFFFF0);
	fp->dwFFFFFFF8 = 0xFFFFFFFF;
	fs->ptr0000 = eax_14;
	return;
}

void fn00401BB0()
{
	_controlfp();
	return;
}

void fn00401BE0()
{
	return;
}

void fn00401BFC(word32 dwArg00, word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	MFC42.DLL!Ordinal_1576();
	return;
}

