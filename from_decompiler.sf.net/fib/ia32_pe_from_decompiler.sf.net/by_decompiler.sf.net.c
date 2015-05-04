// subject.c
// Generated on 5/4/2015 12:04:58 AM by decompiling from_decompiler.sf.net/fib/ia32_pe_from_decompiler.sf.net/subject.exe
// using Decompiler version 0.4.2.0.

#include "subject.h"

word32 fn00401000(word32 dwArg04)
{
	if (dwArg04 < 0x00000001)
		return 0x00000001;
	else
		return fn00401000(dwArg04 - 0x00000001) + fn00401000(dwArg04 - 0x00000002);
}

void fn00401050(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	Eq_18 * ecx_25 = dwArg08;
	Eq_18 * edi_9 = dwArg08 - 0x00000001 + dwArg0C;
	if (dwArg08 <u edi_9)
	{
		uint32 esi_38 = dwArg04;
		do
		{
			uint32 edx_43 = SLICE(esi_38 *u 0xCCCCCCCD, word32, 32);
			ecx_25->b0000 = (byte) (esi_38 - ((edx_43 >>u 0x00000003) + (edx_43 >>u 0x00000003) * 0x00000004) * 0x00000002) + 0x30;
			ecx_25 = ecx_25 + 1;
			esi_38 = edx_43 >>u 0x00000003;
		} while (ecx_25 <u edi_9);
	}
	ecx_25->b0000 = 0x00;
	return;
}

void fn004010A0()
{
	fn00401050(fn00401000(0x00000009) + fn00401000(0x00000008), fp - 0x00000064, 0x00000064);
	return;
}

