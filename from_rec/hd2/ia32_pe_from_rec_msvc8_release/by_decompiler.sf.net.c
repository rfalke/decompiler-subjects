// subject.c
// Generated on TIMESTAMP by decompiling from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe
// using Decompiler version VERSION

#include "subject.h"

word32 fn00401000(word32 ebx, word32 ebp, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg08, ptr32 edxOut)
{
	MSVCR90.dll!sprintf();
	word32 eax_5 = Mem0[0x00403000:word32] ^ fp - 0x00000058;
	word32 ebx_14 = MSVCR90.dll!sprintf;
	word32 ebp_189 = dwArg08;
	if (dwArg08 > 0x00000010)
		ebp_189 = 0x00000010;
	word32 esi_188 = 0x00000000;
	if (ebp_189 > 0x00000000)
	{
		do
		{
			ebx_14();
			esi_188 = esi_188 + 0x00000001;
		} while (esi_188 < ebp_189);
		if (esi_188 < 0x00000010)
		{
l00401071:
			word32 edx_201 = Mem0[0x00402114:word32];
			word32 ecx_203 = 0x00000010 - esi_188;
			do
			{
				word32 edi_214 = fp - 0x00000055 + 0x00000001;
				do
				{
					edi_214 = edi_248 + 0x00000001;
					word32 edi_248 = edi_214;
				} while (Mem0[edi_248 + 0x00000000:byte] != 0x00);
				Mem226[edi_214 + 0x00000000:word32] = edx_201;
				ecx_203 = ecx_203 - 0x00000001;
			} while (ecx_203 != 0x00000000);
		}
	}
	else
		goto l00401071;
	word32 eax_71 = fp - 0x00000054;
	word32 edx_74;
	*edxOut = fp - 0x00000053;
	do
	{
		eax_71 = eax_247 + 0x00000001;
		word32 eax_247 = eax_71;
	} while (Mem0[eax_247 + 0x00000000:byte] != 0x00);
	word32 eax_83 = eax_71 - (fp - 0x00000053);
	Mem85[fp - 0x00000054 + eax_83:word32] = 0x007C2020;
	word32 esi_125 = 0x00000000;
	if (ebp_189 > 0x00000000)
	{
		word32 ecx_144 = fp - 0x00000054 + (eax_83 + 0x00000003);
		do
		{
			byte al_159;
			byte al_152 = Mem85[dwArg04 + esi_125:byte];
			if (al_152 >=u 0x20)
			{
				al_159 = (byte) (word32) al_152;
				if (al_152 >u 0x7E)
				{
l004010D2:
					al_159 = 0x2E;
				}
			}
			else
				goto l004010D2;
			Mem161[ecx_144 + esi_125:byte] = al_159;
			esi_125 = esi_125 + 0x00000001;
		} while (esi_125 < ebp_189);
		if (esi_125 < 0x00000010)
		{
l004010E4:
			word32 edi_131 = 0x00000010 - esi_125;
			memset(fp - 0x00000054 + ((eax_83 + 0x00000003) + esi_125), 0x00000020, edi_131);
			esi_125 = esi_125 + edi_131;
		}
	}
	else
		goto l004010E4;
	Mem101[fp - 0x00000054 + ((eax_83 + 0x00000003) + esi_125):word16] = 0x007C;
	MSVCR90.dll!printf();
	return fn0040123B(0x0000007C, eax_5 ^ fp - 0x00000058, fp - 0x00000053, ebx, ebp, esi, edi, es, ds, fs, gs, ebx);
}

word32 fn00401140(word32 ecx, word32 edx, word32 ebp, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs, ptr32 edxOut, ptr32 ebxOut, ptr32 ebpOut, ptr32 esiOut, ptr32 ediOut)
{
	*edxOut = edx;
	_stat64i32();
	word32 esi_23 = ecx;
	if ((fp - 0x0000004C & fp - 0x0000004C) != 0x00000000)
	{
l00401167:
		perror(esi_23);
		word32 edi_78;
		*ediOut = fp - 0x0000004C;
		word32 esi_80;
		*esiOut = edi;
		word32 ebp_82;
		*ebpOut = esi;
		word32 ebx_84;
		*ebxOut = ebp;
		return fn0040123B(0x00000001, dwLoc0C ^ fp + 0xFFFFFFB0, edx, ebp, esi, edi, fp - 0x0000004C, es, ds, fs, gs, ebp);
	}
	else
	{
		MSVCR90.dll!fopen();
		if ((fp - 0x0000004C & fp - 0x0000004C) != 0x00000000)
		{
			if (dwLoc3C >u 0x00000000)
			{
				word32 ebx_129 = MSVCR90.dll!fread;
				do
				{
					Mem137[fp + 0xFFFFFF94:word32] = 0x00000001;
					MSVCR90.dll!fread();
					if (fp == 0x0000004C)
						break;
					Mem149[fp + 0xFFFFFF98:word32] = fp + 0xFFFFFFE4;
					word32 edx_151;
					fn00401000(ebx_129, 0x00000000, fp - 0x0000004C, fp - 0x0000004C, es, ds, fs, gs, 0x00000010, fp - 0x0000004C, out edx_151);
				} while (fp - 0x0000004C <u dwLoc3C);
			}
			MSVCR90.dll!fclose();
			word32 edi_114;
			*ediOut = fp - 0x0000004C;
			word32 esi_116;
			*esiOut = edi;
			word32 ebp_118;
			*ebpOut = esi;
			word32 ebx_120;
			*ebxOut = ebp;
			return fn0040123B(0x00000000, dwLoc0C ^ fp + 0xFFFFFFB0, edx, ebp, esi, edi, fp - 0x0000004C, es, ds, fs, gs, ebp);
		}
		else
			goto l00401167;
	}
}

word32 fn00401200(word32 edx, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 ebxOut, ptr32 ebpOut)
{
	__align(fp - 0x00000004);
	word32 ebp_32 = fp - 0x00000004;
	word32 edi_20 = 0x00000000;
	word32 esi_21 = 0x00000001;
	if (dwArg04 > 0x00000001)
		do
		{
			word32 ebx_64;
			word32 esi_66;
			word32 edi_67;
			eax = fn00401140(Mem0[ebp_32 + 0x0000000C:word32][esi_21 * 0x00000004], edx, ebp_32, esi_21, edi_20, es, ds, fs, gs, out edx, out ebx_64, out ebp_32, out esi_66, out edi_67);
			esi_21 = esi_66 + 0x00000001;
			edi_20 = edi_67 + eax;
		} while (esi_66 + 0x00000001 < ebx_64);
	word32 edi_34 = Mem0[fp - 0x00000014:word32];
	word32 ebp_40 = Mem0[ebp_32 + 0x00000000:word32];
	word32 esp_41 = ebp_32 + 0x00000004;
}

word32 fn0040123B(word32 eax, word32 ecx, word32 edx, word32 ebx, word32 ebp, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs, word32 dwArg00)
{
	if (ecx == Mem0[0x00403000:word32] && ecx != 0x00000000)
		return eax;
	else
	{
		Mem39[0x00403140:word32] = eax;
		Mem40[0x0040313C:word32] = ecx;
		Mem42[0x00403138:word32] = edx;
		Mem44[0x00403134:word32] = ebx;
		Mem46[0x00403130:word32] = esi;
		Mem47[0x0040312C:word32] = edi;
		Mem49[0x00403158:word16] = ss;
		Mem51[0x0040314C:word16] = cs;
		Mem53[0x00403128:word16] = ds;
		Mem55[0x00403124:word16] = es;
		Mem57[0x00403120:word16] = fs;
		Mem59[0x0040311C:word16] = gs;
		Mem62[0x00403150:word32] = cond(fp - 0x0000032C);
		Mem65[0x00403144:word32] = ebp;
		Mem68[0x00403148:word32] = dwArg00;
		Mem70[0x00403154:word32] = fp + 0x00000004;
		Mem73[0x00403090:word32] = 0x00010001;
		Mem75[0x00403044:word32] = Mem73[0x00403148:word32];
		Mem76[0x00403038:word32] = 0xC0000409;
		Mem77[0x0040303C:word32] = 0x00000001;
		Mem83[0x00403088:word32] = IsDebuggerPresent();
		_crt_debugger_hook();
		SetUnhandledExceptionFilter(0x00000000);
		UnhandledExceptionFilter(0x004020FC);
		word32 esp_115 = fp + 0xFFFFFCD0;
		if (Mem83[0x00403088:word32] == 0x00000000)
		{
			Mem126[fp + 0xFFFFFCCC:word32] = 0x00000001;
			_crt_debugger_hook();
			esp_115 = fp + 0xFFFFFCCC;
		}
		word32 esp_116 = esp_115 - 0x00000004;
		Mem117[esp_116 + 0x00000000:word32] = 0xC0000409;
		Mem120[esp_116 - 0x00000004:word32] = GetCurrentProcess();
		return TerminateProcess(Mem120[esp_116 - 0x00000004:HANDLE], Mem120[esp_116 + 0x00000000:UINT]);
	}
}

void fn004014EC(word32 edx, word32 ebx, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs)
{
	fn00401968();
	word32 ebp_11 = fn004018BC(ebx, esi, edi, fs, dwLoc0C, 0x004021D8, 0x00000010);
	Mem15[ebp_11 - 0x00000004:word32] = 0x00000000;
	word32 esi_17 = Mem15[Mem15[fs:0x00000018:word32] + 0x00000004:word32];
	Mem18[ebp_11 - 0x0000001C:word32] = 0x00000000;
	word32 esp_20 = fp - 0x00000008;
	word32 esi_235;
	word32 esp_21 = esp_20 - 0x00000004;
	Mem22[esp_21 + 0x00000000:word32] = 0x00000000;
	Mem24[esp_21 - 0x00000004:word32] = esi_17;
	Mem26[esp_21 - 0x00000008:word32] = 0x00403374;
	word32 eax_27 = InterlockedCompareExchange(Mem26[esp_21 - 0x00000008:(ptr LONG)], Mem26[esp_21 - 4:LONG], Mem26[esp_21 + 0x00000000:LONG]);
	word32 esp_102 = esp_21 + 0x00000004;
	while (eax_27 != 0x00000000)
	{
		if (eax_27 == esi_17)
		{
			Mem237[ebp_11 - 0x0000001C:word32] = 0x00000001;
			esi_235 = 0x00000001;
			goto l004012E0;
		}
		Mem239[esp_21 + 0x00000000:word32] = 0x000003E8;
		Sleep(Mem239[esp_21 + 0x00000000:DWORD]);
		esp_20 = esp_21 + 0x00000004;
		esp_21 = esp_20 - 0x00000004;
		Mem22[esp_21 + 0x00000000:word32] = 0x00000000;
		Mem24[esp_21 - 0x00000004:word32] = esi_17;
		Mem26[esp_21 - 0x00000008:word32] = 0x00403374;
		eax_27 = InterlockedCompareExchange(Mem26[esp_21 - 0x00000008:(ptr LONG)], Mem26[esp_21 - 4:LONG], Mem26[esp_21 + 0x00000000:LONG]);
		esp_102 = esp_21 + 0x00000004;
	}
	esi_235 = 0x00000001;
l004012E0:
	if (Mem26[0x00403370:word32] == esi_235)
	{
		Mem202[esp_21 + 0x00000000:word32] = 0x0000001F;
		_amsg_exit();
		esp_102 = esp_21;
l0040132E:
		if (Mem26[0x00403370:word32] == esi_235)
		{
			word32 esp_191 = esp_102 - 0x00000004;
			Mem192[esp_191 + 0x00000000:word32] = 0x004020CC;
			Mem194[esp_191 - 0x00000004:word32] = 0x004020C4;
			_initterm();
			Mem200[0x00403370:word32] = 0x00000002;
			esp_102 = esp_191;
		}
		if (Mem26[ebp_11 - 0x0000001C:word32] == 0x00000000)
		{
			word32 esp_185 = esp_102 - 0x00000004;
			Mem186[esp_185 + 0x00000000:word32] = 0x00000000;
			Mem188[esp_185 - 0x00000004:word32] = 0x00403374;
			InterlockedExchange(Mem188[esp_185 - 0x00000004:(ptr LONG)], Mem188[esp_185 + 0x00000000:LONG]);
			esp_102 = esp_185 + 0x00000004;
		}
		if (Mem26[0x00403380:word32] != 0x00000000)
		{
			word32 esp_170 = esp_102 - 0x00000004;
			Mem171[esp_170 + 0x00000000:word32] = 0x00403380;
			word32 eax_173 = fn004017F0(fs, dwArg00, out edx);
			esp_102 = esp_170 + 0x00000004;
			if (eax_173 != 0x00000000)
			{
				Mem180[esp_170 + 0x00000000:word32] = 0x00000000;
				Mem182[esp_170 - 0x00000004:word32] = 0x00000002;
				Mem184[esp_170 - 0x00000008:word32] = 0x00000000;
				esp_102 = esp_170 - 0x00000008;
				Mem184[0x00403380:word32]();
			}
		}
		Mem121[__initenv:word32] = Mem26[0x0040301C:word32];
		word32 esp_122 = esp_102 - 0x00000004;
		Mem123[esp_122 + 0x00000000:word32] = Mem121[0x0040301C:word32];
		Mem125[esp_122 - 0x00000004:word32] = Mem123[0x00403020:word32];
		Mem127[esp_122 - 0x00000008:word32] = Mem125[0x00403018:word32];
		word32 ebx_128;
		word32 eax_130 = fn00401200(edx, es, ds, fs, gs, dwArg00, out ebx_128, out ebp_11);
		Mem132[0x00403030:word32] = eax_130;
		if (Mem132[0x00403024:word32] == ebx_128)
		{
			Mem136[esp_122 + 0x00000000:word32] = eax_130;
			exit(Mem136[esp_122 + 0x00000000:int32]);
			word32 eax_137 = Mem136[ebp_11 - 0x00000014:word32];
			word32 ecx_139 = Mem136[Mem136[eax_137 + 0x00000000:word32]:word32];
			Mem140[ebp_11 - 0x00000020:word32] = ecx_139;
			Mem142[esp_122 - 0x00000004:word32] = eax_137;
			Mem144[esp_122 - 0x00000008:word32] = ecx_139;
			_XcptFilter();
			return;
		}
		else
		{
			if (Mem132[0x00403034:word32] == ebx_128)
				_cexit();
			Mem167[ebp_11 - 0x00000004:word32] = 0xFFFFFFFE;
l00401405:
			fn00401901(ebp_11, fs, 0x00000010, dwArg00, dwArg04, dwArg08, dwArg0C);
			return;
		}
	}
	else
	{
		word32 eax_210 = Mem26[0x00403370:word32];
		if (eax_210 == 0x00000000)
		{
			Mem214[0x00403370:word32] = esi_235;
			Mem216[esp_21 + 0x00000000:word32] = 0x004020DC;
			Mem218[esp_21 - 0x00000004:word32] = 0x004020D0;
			_initterm_e();
			esp_102 = esp_21;
			if (eax_210 != 0x00000000)
			{
				Mem227[ebp_11 - 0x00000004:word32] = 0xFFFFFFFE;
				goto l00401405;
			}
			else
				goto l0040132E;
		}
		else
		{
			Mem229[0x00403034:word32] = esi_235;
			goto l0040132E;
		}
	}
}

word32 fn00401760(word32 dwArg04, ptr32 edxOut)
{
	*edxOut = edx;
	if (Mem0[dwArg04 + 0x00000000:word16] != 0x5A4D)
	{
l00401772:
		return 0x00000000;
	}
	else
	{
		word32 eax_40 = Mem0[dwArg04 + 0x0000003C:word32] + dwArg04;
		if (Mem0[eax_40 + 0x00000000:word32] == 0x00004550)
		{
			word32 edx_50 = (word32) (Mem0[eax_40 + 0x00000018:word16] == 0x010B);
			*edxOut = edx_50;
			return edx_50;
		}
		else
			goto l00401772;
	}
}

word32 fn004017A0(word32 dwArg04, word32 dwArg08, ptr32 edxOut)
{
	word32 ecx_12 = Mem0[dwArg04 + 0x0000003C:word32] + dwArg04;
	word32 esi_20 = (word32) Mem0[ecx_12 + 0x00000006:word16];
	word32 edx_21;
	*edxOut = 0x00000000;
	word32 eax_24 = (word32) Mem0[ecx_12 + 0x00000014:word16] + 0x00000018 + ecx_12 + 0x0000000C;
	if (true)
	{
		do
		{
			word32 ecx_57 = Mem0[eax_24 + 0x00000000:word32];
			if (dwArg08 >=u ecx_57 && dwArg08 <u Mem0[eax_24 + 0x00000008:word32] + ecx_57)
				goto l004017DF;
			edx_21 = edx_21 + 0x00000001;
			*edxOut = edx_21;
			eax_24 = eax_24 + 0x00000028;
		} while (edx_21 <u esi_20);
l004017DD:
		eax_24 = 0x00000000;
	}
	else
		goto l004017DD;
	return eax_24;
}

word32 fn004017F0(selector fs, word32 dwArg04, ptr32 edxOut)
{
	word32 eax_16 = Mem0[fs:0x00000000:word32];
	Mem38[fs:0x00000000:word32] = fp - 0x00000014;
	word32 edx_43;
	if (fn00401760(0x00400000, out edx_43) != 0x00000000)
	{
		Mem90[fp - 0x00000030:word32] = dwArg04 - 0x00400000;
		word32 edx_93;
		word32 eax_94 = fn004017A0(0x00400000, 0x00400000, out edx_93);
		if (eax_94 != 0x00000000)
		{
			word32 eax_101 = ~(Mem90[eax_94 + 0x00000024:word32] >>u 0x0000001F);
			Mem105[fp - 0x00000008:word32] = 0xFFFFFFFE;
			Mem107[fs:0x00000000:word32] = eax_16;
			return eax_101 & 0x00000001;
		}
		else
		{
l00401892:
			Mem69[fp - 0x00000008:word32] = 0xFFFFFFFE;
			Mem74[fs:0x00000000:word32] = eax_16;
			return 0x00000000;
		}
	}
	else
		goto l00401892;
}

word32 fn004018BC(word32 ebx, word32 esi, word32 edi, selector fs, word32 dwArg00, word32 dwArg04, word32 dwArg08)
{
	word32 esp_13 = fp - 0x00000008 - dwArg08;
	Mem16[esp_13 - 0x00000004:word32] = ebx;
	Mem19[esp_13 - 0x00000008:word32] = esi;
	Mem22[esp_13 - 0x0000000C:word32] = edi;
	Mem32[esp_13 - 0x00000010:word32] = Mem22[0x00403000:word32] ^ fp + 0x00000008;
	Mem36[esp_13 - 0x00000014:word32] = dwArg00;
	Mem41[fs:0x00000000:word32] = fp - 0x00000008;
	return fp + 0x00000008;
}

void fn00401901(word32 ebp, selector fs, word32 dwArg00, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10)
{
	Mem5[fs:0x00000000:word32] = Mem0[ebp - 0x00000010:word32];
	Mem25[ebp + 0x00000000:word32] = dwArg00;
	return;
}

void fn00401968()
{
	word32 eax_10 = Mem0[0x00403000:word32];
	if (eax_10 != 0xBB40E64E && (eax_10 & 0xFFFF0000) != 0x00000000)
		Mem95[0x00403004:word32] = ~eax_10;
	else
	{
		GetSystemTimeAsFileTime(fp - 0x0000000C);
		word32 esi_59 = dwLoc08 & 0x00000000 ^ dwLoc0C & 0x00000000 ^ GetCurrentProcessId() ^ GetCurrentThreadId() ^ GetTickCount();
		QueryPerformanceCounter(fp - 0x00000014);
		word32 esi_69 = esi_59 ^ (dwLoc10 ^ dwLoc14);
		if (esi_69 == 0xBB40E64E)
			esi_69 = 0xBB40E64F;
		else if ((esi_69 & 0xFFFF0000) == 0x00000000)
			esi_69 = esi_69 | esi_69 << 0x00000010;
		Mem77[0x00403000:word32] = esi_69;
		Mem79[0x00403004:word32] = ~esi_69;
	}
	return;
}

