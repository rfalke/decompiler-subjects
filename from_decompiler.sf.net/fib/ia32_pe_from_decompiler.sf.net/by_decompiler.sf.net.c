// fib.c
// Generated on 16.03.2012 05:48:57 by decompiling ...\Samples\fib.exe
// using Decompiler.

#include "fib.h"

word32 fn00401000(word32 dwArg00)
{
	if (dwArg00 < 0x00000001)
		return 0x00000001;
	else
		return fn00401000(dwArg00 - 0x00000001) + fn00401000(dwArg00 - 0x00000002);
}

void fn00401050(word32 dwArg00, word32 * dwArg04, word32 dwArg08)
{
	byte * ecx_18 = dwArg04;
	byte * edi_21 = dwArg04 - 0x00000001 + dwArg08;
	if (dwArg04 <u edi_21)
	{
		uint32 esi_26 = dwArg00;
		do
		{
			uint32 edx_33 = SLICE(esi_26 *u 0xCCCCCCCD, word32, 32) >>u 0x00000003;
			*ecx_18 = (byte) (esi_26 - edx_33 * 0x00000005 * 0x00000002) + 0x30;
			ecx_18 = ecx_18 + 1;
			esi_26 = edx_33;
		}
		while (ecx_18 <u edi_21);
	}
	*ecx_18 = 0x00;
	return;
}

void fn004010A0()
{
	fn00401050(fn00401000(0x00000009) + fn00401000(0x00000008), &dwLoc68, 0x00000064);
	return;
}

