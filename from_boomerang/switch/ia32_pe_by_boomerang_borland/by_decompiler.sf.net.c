// subject.c
// Generated on TIMESTAMP by decompiling from_boomerang/switch/ia32_pe_by_boomerang_borland/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn00401000(Eq_26 * fs)
{
	globals->dw40A113 = globals->dw40A10F << 0x00000002;
	word32 eax_12 = GetModuleHandleA(0x00000000);
	fn00402134();
	fn004014D0();
	fn00402138();
	fn00402D50(eax_12, fs, 0x00000000);
	globals->dw40A117 = GetModuleHandleA(0x00000000);
	globals->dw40BBF4 = globals->dw40A0C8 & 0x00000001;
}

void __GetExceptDLLinfo(Eq_26 * fs)
{
	fn00402D9C(fs, dwArg00);
	return;
}

word32 fn00401140(Eq_26 * fs)
{
	return fs->ptr002C[globals->dw40A10F];
}

void fn004014D0()
{
	return;
}

void fn00402134()
{
	return;
}

void fn00402138()
{
	return;
}

void fn0040213C(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	Eq_58 * edi_13 = dwArg04;
	Eq_60 * esi_16 = dwArg08;
	uint32 ecx_21 = dwArg0C >>u 0x00000002;
	while (ecx_21 != 0x00000000)
	{
		edi_13->t0000 = esi_16->t0000;
		esi_16 = esi_16 + 4;
		edi_13 = edi_13 + 4;
		ecx_21 = ecx_21 - 0x00000001;
	}
	word32 ecx_34 = dwArg0C & 0x00000003;
	while (ecx_34 != 0x00000000)
	{
		edi_13->t0000 = esi_16->t0000;
		esi_16 = esi_16 + 1;
		edi_13 = edi_13 + 1;
		ecx_34 = ecx_34 - 0x00000001;
	}
	return;
}

void fn00402BD8()
{
	if (globals->ptr40A57C == 0x00000000)
		globals->ptr40A57C = 0x00402C00;
	if (globals->ptr40A580 == 0x00000000)
		globals->ptr40A580 = 0x00402C50;
	return;
}

void fn00402D50(word32 eax, Eq_26 * fs, word32 dwArg04)
{
	word32 ebx_11 = dwArg04;
	if (dwArg04 == 0x00000000 && dwArg04 == 0x00000000)
	{
		fn00402D9C(fs, fp - 0x0000000C);
		ebx_11 = dwLoc08;
	}
	fn0040213C(fn00401140(fs), ebx_11, 0x0000009C);
	fn00402BD8();
	return;
}

void fn00402D9C(Eq_26 * fs, word32 dwArg04)
{
	globals->dw40A5CC = fn00401140(fs) + 0x0000001C;
	dwArg04->dw0000 = 0x82727349;
	dwArg04->ptr0004 = 0x0040A5B8;
	return;
}

