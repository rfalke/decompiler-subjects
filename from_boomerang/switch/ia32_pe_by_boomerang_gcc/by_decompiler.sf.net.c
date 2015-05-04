// subject.c
// Generated on 5/4/2015 12:03:55 AM by decompiling from_boomerang/switch/ia32_pe_by_boomerang_gcc/subject.exe
// using Decompiler version 0.4.2.0.

#include "subject.h"

void fn00401000(word32 edi)
{
	if (globals->dw403000 != 0x00000000)
		int3();
	__fldcw((word16) ((word32) (word16) ((word32) __fstcw() & 0xFFFFF0C0) | 0x0000033F));
	fn00401470(fp - 0x00000004, edi, 0x00401080);
	return;
}

void fn00401470(word32 ebp, word32 edi, word32 dwArg04)
{
	word32 ebp_29 = fp - 0x00000004;
	word32 esi_11 = dwArg04;
	word32 esp_19 = fp - 0x0000001C;
	if (fn00401530(fp - 0x00000004, edi, dwArg04, 0x00000000) != 0x00000000)
	{
l0040149D:
		cygwin1.dll!dll_crt0__FP11per_process();
l004014A3:
		Eq_52 * esp_31 = esp_19 - 0x000000B0;
		esp_31->dw0008 = 0x00000000;
		esp_31->dw0004 = &esp_31->dw0008;
		esp_31->dw0000 = esi_11;
		fn00401530(ebp_29, edi, dwArg00, dwArg04);
		esp_31->dw0000 = &esp_31->dw0008;
		goto l0040149D;
	}
	else
		goto l004014A3;
}

word32 fn00401530(word32 ebp, word32 edi, word32 dwArg04, word32 dwArg08)
{
	word32 eax_27;
	word32 eax_35 = 0x00000000;
	word32 * esp_10 = fp - 0x0000000C;
	Eq_83 * ebx_12 = dwArg08;
	if (dwArg08 != null)
	{
l00401544:
		ebx_12->dw0004 = 0x000000A8;
		ebx_12->dw0008 = 0x000003ED;
		ebx_12->dw000C = 0x00000009;
		ebx_12->dw0080 = 0x00000000;
		ebx_12->dw0084 = 0x00000070;
		ebx_12->dw002C = 0x004017A0;
		ebx_12->dw0030 = 0x004017AC;
		ebx_12->dw0014 = 0x00403020;
		if (eax_35 != 0x00000000)
			globals->dw403024 = ebx_12->dw00A4;
		else
			ebx_12->dw0010 = 0x00403024;
		ebx_12->dw0078 = 0x00000000;
		ebx_12->dw0048 = 0x00401730;
		ebx_12->dw004C = 0x00401720;
		ebx_12->dw0028 = dwArg04;
		ebx_12->dw0050 = 0x00401710;
		ebx_12->dw0054 = 0x00401700;
		ebx_12->dw0024 = 0x00403028;
		ebx_12->dw0000 = ebp;
		ebx_12->dw0018 = 0x00401510;
		ebx_12->dw001C = 0x004014F0;
		ebx_12->dw0020 = 0x004016F0;
		ebx_12->dw0044 = 0x004016E0;
		*esp_10 = 0x00000000;
		ebx_12->dw007C = GetModuleHandleA(0x00000008);
		ebx_12->dw0034 = 0x00402000;
		ebx_12->dw0038 = 0x00402010;
		ebx_12->dw003C = 0x00403000;
		ebx_12->dw0040 = 0x00403080;
		fn004016B0(edi);
		eax_27 = 0x00000001;
	}
	else
	{
		cygwin1.dll!cygwin_internal();
		eax_27 = 0x00000000;
		if (0x00000001 != 0x00000000)
		{
			ebx_12 = null;
			eax_35 = 0x00000001;
			goto l00401544;
		}
	}
	return eax_27;
}

void fn00401670(word32 edi, word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	word32 ecx_37 = dwArg04 + 0x00000004;
	if (dwArg04 <u dwArg08)
		do
		{
			word32 * edx_41 = dwArg0C + ecx_37->dw0000;
			*edx_41 = *edx_41 + ecx_37->dw0000;
			ecx_37 = ecx_37 + 1;
		} while (ecx_37 <u dwArg08);
	return;
}

void fn004016B0(word32 edi)
{
	fn00401670(edi, 0x00403000, 0x00403000, 0x00400000);
	return;
}

