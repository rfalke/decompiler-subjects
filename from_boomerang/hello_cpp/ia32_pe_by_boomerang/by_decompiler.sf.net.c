// subject.c
// Generated on TIMESTAMP by decompiling from_boomerang/hello_cpp/ia32_pe_by_boomerang/subject.exe
// using Decompiler version VERSION

#include "subject.h"

word32 fn0041100A(word32 ebp, word32 edi, selector fs, word32 dwArg0C, ptr32 ediOut)
{
	word32 ebp_118 = fp - 0x00000004;
	word32 esp_121 = fp - 0x00000034;
	if (dwArg0C == 0x00000000)
	{
		esp_121 = fp - 0x00000034;
		word32 ecx_134;
		if (fn0041119F(fp - 0x00000004, edi, fs, out ecx_134, out ebp_118, out edi) == 0x00000001)
			int3();
	}
	if (Mem0[ebp_118 + 0x00000008:word32] == 0x00000000)
	{
		word32 esp_107 = esp_121 - 0x00000004;
		Mem108[esp_107 + 0x00000000:word32] = 0x00426A40;
		Mem110[esp_107 - 0x00000004:word32] = 0x00000000;
		Mem112[esp_107 - 0x00000008:word32] = 0x0000005E;
		Mem114[esp_107 - 0x0000000C:word32] = 0x00426A54;
		Mem116[esp_107 - 0x00000010:word32] = 0x00000002;
		esp_121 = esp_107 + 0x00000004;
		word32 ecx_117;
		if (fn0041119F(ebp_118, edi, fs, out ecx_117, out ebp_118, out edi) == 0x00000001)
			int3();
	}
	Mem38[Mem0[ebp_118 - 0x0000000C:word32] + 0x00000004:word32] = Mem0[ebp_118 + 0x0000000C:word32];
	Mem40[Mem38[ebp_118 - 0x0000000C:word32] + 0x0000000C:word32] = 0x00000042;
	Mem43[Mem40[ebp_118 - 0x0000000C:word32] + 0x00000008:word32] = Mem40[ebp_118 + 0x00000008:word32];
	Mem46[Mem43[ebp_118 - 0x0000000C:word32]:word32] = Mem43[ebp_118 + 0x00000008:word32];
	word32 esp_48 = esp_121 - 0x00000004;
	Mem49[esp_48 + 0x00000000:word32] = Mem46[ebp_118 - 0x00000004:word32];
	Mem52[esp_48 - 0x00000004:word32] = Mem49[ebp_118 + 0x00000010:word32];
	Mem55[esp_48 - 0x00000008:word32] = Mem52[ebp_118 - 0x0000000C:word32];
	word32 ebp_57;
	word32 edi_58;
	word32 eax_59 = fn0041134D(ebp_118, edi, fs, out ebp_57, out edi_58);
	Mem62[ebp_57 - 0x00000008:word32] = eax_59;
	if (Mem62[ebp_57 + 0x00000008:word32] != 0x00000000)
	{
		Mem80[Mem62[ebp_57 - 0x0000000C:word32] + 0x00000004:word32] = Mem62[Mem62[ebp_57 - 0x0000000C:word32] + 0x00000004:word32] - 0x00000001;
		if (Mem80[Mem80[ebp_57 - 0x0000000C:word32] + 0x00000004:word32] >= 0x00000000)
		{
			Mem86[Mem80[Mem80[ebp_57 - 0x0000000C:word32]:word32]:byte] = 0x00;
			Mem89[ebp_57 - 0x00000030:word32] = 0x00000000;
			Mem95[Mem89[ebp_57 - 0x0000000C:word32]:word32] = Mem89[Mem89[ebp_57 - 0x0000000C:word32]:word32] + 0x00000001;
		}
		else
		{
			Mem98[esp_48 - 0x00000004:word32] = Mem80[ebp_57 - 0x0000000C:word32];
			Mem100[esp_48 - 0x00000008:word32] = 0x00000000;
			word32 edi_102;
			Mem106[ebp_57 - 0x00000030:word32] = fn004114AB(edi_58, fs, dwArg04, out edi_102);
		}
	}
	return Mem62[ebp_57 - 0x00000008:word32];
}

word32 fn0041100F(word32 ebp, word32 edi, selector fs, ptr32 ediOut)
{
	*ediOut = edi;
	word32 ebp_105 = fp - 0x00000004;
	word32 dwLoc0C_183 = 0x00000000;
	if (Mem0[0x004297D4:word32] == 0x00000000)
	{
		Mem296[fp - 0x0000000C:word32] = GetEnvironmentStringsW();
		if (0x00000000 != 0x00000000)
			Mem299[0x004297D4:word32] = 0x00000001;
		else if (GetLastError() == 0x00000078)
			Mem303[0x004297D4:word32] = 0x00000002;
	}
	word32 eax_112;
	if (Mem0[0x004297D4:word32] != 0x00000001)
		if (Mem0[0x004297D4:word32] != 0x00000002 && Mem0[0x004297D4:word32] != 0x00000000)
			eax_112 = 0x00000000;
		else if (true)
		{
			Mem284[fp - 0x0000001C:word32] = GetEnvironmentStrings();
			if (true)
				eax_112 = 0x00000000;
			else
			{
l0041413F:
				word32 dwLoc14_209 = 0x00000000;
				while ((int32) Mem0[dwLoc14_209 + 0x00000000:byte] != 0x00000000)
				{
					word32 eax_219 = dwLoc14_209 + 0x00000001;
					dwLoc14_209 = eax_219;
					if ((int32) Mem0[eax_219 + 0x00000000:byte] == 0x00000000)
						dwLoc14_209 = eax_219 + 0x00000001;
				}
				word32 ebp_247;
				word32 edi_248;
				word32 eax_249 = fn00411064(edi, fs, out ebp_247, out edi_248);
				Mem252[ebp_247 - 0x00000010:word32] = eax_249;
				if (Mem252[ebp_247 - 0x00000010:word32] == 0x00000000)
				{
					Mem257[fp + 0xFFFFFFDC:word32] = Mem252[ebp_247 - 0x00000018:word32];
					FreeEnvironmentStringsA(Mem257[fp + 0xFFFFFFDC:LPCH]);
					eax_112 = 0x00000000;
				}
				else
				{
					Mem265[fp + 0xFFFFFFDC:word32] = Mem252[ebp_247 - 0x00000004:word32];
					Mem268[fp + 0xFFFFFFD8:word32] = Mem265[ebp_247 - 0x00000018:word32];
					Mem271[fp + 0xFFFFFFD4:word32] = Mem268[ebp_247 - 0x00000010:word32];
					fn00411352(dwArg00, dwArg04, dwArg08);
					Mem279[fp + 0xFFFFFFDC:word32] = Mem271[ebp_247 - 0x00000018:word32];
					FreeEnvironmentStringsA(Mem279[fp + 0xFFFFFFDC:LPCH]);
					eax_112 = Mem279[ebp_247 - 0x00000010:word32];
				}
			}
		}
		else
			goto l0041413F;
	else if (true)
	{
		word32 eax_182 = GetEnvironmentStringsW();
		dwLoc0C_183 = eax_182;
		if (eax_182 == 0x00000000)
			eax_112 = 0x00000000;
		else
		{
l00414036:
			word32 dwLoc10_48 = dwLoc0C_183;
			while ((word32) Mem0[dwLoc10_48 + 0x00000000:word16] != 0x00000000)
			{
				word32 eax_58 = dwLoc10_48 + 0x00000002;
				dwLoc10_48 = eax_58;
				if ((word32) Mem0[eax_58 + 0x00000000:word16] == 0x00000000)
					dwLoc10_48 = eax_58 + 0x00000002;
			}
			word32 eax_95 = WideCharToMultiByte(0x00000000, 0x00000000, dwLoc0C_183, (dwLoc10_48 - dwLoc0C_183 >> 0x00000001) + 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
			word32 esp_106 = fp - 0x0000001C;
			if (eax_95 != 0x00000000)
			{
				Mem117[fp - 0x00000020:word32] = 0x00000061;
				Mem119[fp - 0x00000024:word32] = 0x004256B0;
				Mem121[fp - 0x00000028:word32] = 0x00000002;
				Mem124[fp - 0x0000002C:word32] = eax_95;
				word32 edi_127;
				word32 eax_128 = fn00411064(edi, fs, out ebp_105, out edi_127);
				Mem131[ebp_105 - 0x00000018:word32] = eax_128;
				esp_106 = fp + 0xFFFFFFE0;
				if (Mem131[ebp_105 - 0x00000018:word32] == 0x00000000)
				{
l004140B3:
					word32 esp_108 = esp_106 - 0x00000004;
					Mem109[esp_108 + 0x00000000:word32] = Mem0[ebp_105 - 0x00000008:word32];
					FreeEnvironmentStringsW(Mem109[esp_108 + 0x00000000:LPWCH]);
					eax_112 = 0x00000000;
				}
				else
				{
					Mem135[fp + 0xFFFFFFDC:word32] = 0x00000000;
					Mem137[fp + 0xFFFFFFD8:word32] = 0x00000000;
					Mem140[fp + 0xFFFFFFD4:word32] = Mem137[ebp_105 - 0x00000004:word32];
					Mem143[fp + 0xFFFFFFD0:word32] = Mem140[ebp_105 - 0x00000018:word32];
					Mem146[fp + 0xFFFFFFCC:word32] = Mem143[ebp_105 - 0x00000014:word32];
					Mem149[fp + 0xFFFFFFC8:word32] = Mem146[ebp_105 - 0x00000008:word32];
					Mem151[fp + 0xFFFFFFC4:word32] = 0x00000000;
					Mem153[fp + 0xFFFFFFC0:word32] = 0x00000000;
					word32 eax_154 = WideCharToMultiByte(Mem153[fp + 0xFFFFFFC0:UINT], Mem153[fp + -60:DWORD], Mem153[fp + -56:LPCWSTR], Mem153[fp + -52:int32], Mem153[fp + -48:LPSTR], Mem153[fp + -44:int32], Mem153[fp + -40:LPCSTR], Mem153[fp + -36:LPBOOL]);
					word32 esp_155 = fp + 0xFFFFFFE0;
					if (eax_154 == 0x00000000)
					{
						Mem171[fp + 0xFFFFFFDC:word32] = 0x00000002;
						Mem174[fp + 0xFFFFFFD8:word32] = Mem171[ebp_105 - 0x00000018:word32];
						word32 edi_176;
						fn0041141A(eax_154, ebp_105, edi_127, fs, out ebp_105, out edi_176);
						Mem181[ebp_105 - 0x00000018:word32] = 0x00000000;
						esp_155 = fp + 0xFFFFFFDC;
					}
					word32 esp_165 = esp_155 - 0x00000004;
					Mem166[esp_165 + 0x00000000:word32] = Mem153[ebp_105 - 0x00000008:word32];
					FreeEnvironmentStringsW(Mem166[esp_165 + 0x00000000:LPWCH]);
					eax_112 = Mem166[ebp_105 - 0x00000018:word32];
				}
			}
			else
				goto l004140B3;
		}
	}
	else
		goto l00414036;
	return eax_112;
}

word32 fn00411023(word32 edi, selector fs)
{
	return fn00419680(edi, fs, dwArg00);
}

word32 fn00411032(word32 ebp, word32 edi, selector fs, ptr32 ediOut)
{
	word32 ebp_12 = fp - 0x00000004;
	word32 esp_126 = fp - 0x00000018;
	if (Mem0[0x0042B0F8:word32] == 0x00000000)
	{
		ebp_12 = fn0041109B(edi, fs, out edi);
		esp_126 = fp + 0xFFFFFFE4;
	}
	Mem14[0x0042979C:byte] = 0x00;
	word32 esp_15 = esp_126 - 0x00000004;
	Mem16[esp_15 + 0x00000000:word32] = 0x00000104;
	Mem18[esp_15 - 0x00000004:word32] = 0x00429698;
	Mem20[esp_15 - 0x00000008:word32] = 0x00000000;
	GetModuleFileNameA(Mem20[esp_15 - 0x00000008:HMODULE], Mem20[esp_15 - 4:LPSTR], Mem20[esp_15 + 0x00000000:DWORD]);
	Mem23[0x00429668:word32] = 0x00429698;
	if (Mem23[0x0042B100:word32] != 0x00000000 && (int32) Mem23[Mem23[0x0042B100:word32]:byte] != 0x00000000)
		Mem123[ebp_12 - 0x00000014:word32] = Mem23[0x0042B100:word32];
	else
		Mem116[ebp_12 - 0x00000014:word32] = Mem23[0x00429668:word32];
	word32 eax_108;
	Mem32[ebp_12 - 0x0000000C:word32] = Mem23[ebp_12 - 0x00000014:word32];
	Mem35[esp_15 + 0x00000000:word32] = ebp_12 - 0x00000010;
	Mem38[esp_15 - 0x00000004:word32] = ebp_12 - 0x00000008;
	Mem40[esp_15 - 0x00000008:word32] = 0x00000000;
	Mem42[esp_15 - 0x0000000C:word32] = 0x00000000;
	Mem45[esp_15 - 0x00000010:word32] = Mem42[ebp_12 - 0x0000000C:word32];
	fn00413B80(dwArg00, dwArg04, dwArg08, dwArg0C, dwArg10);
	Mem54[esp_15 + 0x00000000:word32] = 0x00000082;
	Mem56[esp_15 - 0x00000004:word32] = 0x004256A4;
	Mem58[esp_15 - 0x00000008:word32] = 0x00000002;
	Mem63[esp_15 - 0x0000000C:word32] = Mem58[ebp_12 - 0x00000010:word32] + Mem58[ebp_12 - 0x00000008:word32] * 0x00000004;
	word32 ebp_65;
	word32 edi_66;
	word32 eax_67 = fn00411064(edi, fs, out ebp_65, out edi_66);
	Mem70[ebp_65 - 0x00000004:word32] = eax_67;
	if (Mem70[ebp_65 - 0x00000004:word32] == 0x00000000)
		eax_108 = eax_67 | 0xFFFFFFFF;
	else
	{
		Mem87[esp_15 - 0x00000004:word32] = ebp_65 - 0x00000010;
		Mem90[esp_15 - 0x00000008:word32] = ebp_65 - 0x00000008;
		Mem95[esp_15 - 0x0000000C:word32] = Mem90[ebp_65 - 0x00000004:word32] + Mem90[ebp_65 - 0x00000008:word32] * 0x00000004;
		Mem98[esp_15 - 0x00000010:word32] = Mem95[ebp_65 - 0x00000004:word32];
		Mem101[esp_15 - 0x00000014:word32] = Mem98[ebp_65 - 0x0000000C:word32];
		fn00413B80(dwArg00, dwArg04, dwArg08, dwArg0C, dwArg10);
		Mem105[0x0042964C:word32] = Mem101[ebp_65 - 0x00000008:word32] - 0x00000001;
		Mem107[0x00429650:word32] = Mem105[ebp_65 - 0x00000004:word32];
		eax_108 = 0x00000000;
	}
	return eax_108;
}

void fn00411037()
{
	fn00414FE0();
	return;
}

word32 fn00411064(word32 edi, selector fs, ptr32 ebpOut, ptr32 ediOut)
{
	*ebpOut = ebp;
	word32 edi_8;
	return fn004168D0(edi, fs, dwArg00, dwArg04, dwArg08, dwArg0C, out edi_8);
}

word32 fn0041106E(word32 dwArg04)
{
	word32 eax_27;
	if (Mem0[0x0042AF90:word32] == 0x00000003 && dwArg04 <=u Mem0[0x0042ACA4:word32])
	{
		word32 eax_72 = fn00411528(fp - 0x00000004, dwArg04);
		if (eax_72 != 0x00000000)
			eax_27 = eax_72;
		else
		{
l0041DE72:
			if (dwArg04 == 0x00000000)
				dwArg04 = 0x00000001;
			if (Mem0[0x0042AF90:word32] != 0x00000001)
				Mem64[fp + 0x00000004:word32] = 0x00000010;
			eax_27 = HeapAlloc(Mem0[0x0042AF80:word32], 0x00000000, dwArg04);
		}
	}
	else
		goto l0041DE72;
	return eax_27;
}

word32 fn00411078(word32 dwArg04)
{
	word32 eax_26;
	Mem20[0x0042AF80:word32] = HeapCreate((word32) (dwArg04 == 0x00000000), 0x00001000, 0x00000000);
	if (Mem20[0x0042AF80:word32] == 0x00000000)
		eax_26 = 0x00000000;
	else
	{
		Mem38[0x0042AF90:word32] = fn00411442();
		if (Mem38[0x0042AF90:word32] == 0x00000003)
		{
			Mem50[fp - 0x00000008:word32] = 0x000003F8;
			if (fn00411497(0x00000000) == 0x00000000)
			{
				Mem58[fp - 0x00000008:word32] = Mem50[0x0042AF80:word32];
				HeapDestroy(0x000003F8);
				eax_26 = 0x00000000;
			}
			else
			{
l00414881:
				eax_26 = 0x00000001;
			}
		}
		else
			goto l00414881;
	}
	return eax_26;
}

word32 fn0041107D(word32 eax, word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	word32 eax_171;
	word32 ebp_135 = fp - 0x00000004;
	word32 esp_110 = fp - 0x00000024;
	word32 dwLoc18_118 = 0x00000000;
	if (Mem0[0x004298C4:word32] == 0x00000000)
	{
		word32 eax_162 = LoadLibraryA(0x00425C90);
		if (eax_162 != 0x00000000)
		{
			Mem175[fp - 0x00000028:word32] = 0x00426A1C;
			Mem181[0x004298C4:word32] = GetProcAddress(eax_162, 0x00425C90);
			if (Mem181[0x004298C4:word32] == 0x00000000)
			{
l0041CE02:
				eax_171 = 0x00000000;
			}
			else
			{
				Mem185[fp - 0x00000028:word32] = 0x00426A08;
				Mem191[0x004298C8:word32] = GetProcAddress(eax_162, 0x00426A1C);
				Mem193[fp - 0x00000028:word32] = 0x004269F0;
				eax = GetProcAddress(eax_162, 0x00426A1C);
				Mem199[0x004298CC:word32] = eax;
				esp_110 = fp - 0x00000024;
				if (Mem199[0x00429638:word32] == 0x00000002)
				{
					Mem203[fp - 0x00000028:word32] = 0x004269D0;
					eax = GetProcAddress(eax_162, 0x004269F0);
					Mem209[0x004298D4:word32] = eax;
					esp_110 = fp - 0x00000024;
					if (Mem209[0x004298D4:word32] != 0x00000000)
					{
						Mem213[fp - 0x00000028:word32] = 0x004269B4;
						eax = GetProcAddress(eax_162, 0x004269D0);
						Mem219[0x004298D0:word32] = eax;
						esp_110 = fp - 0x00000024;
					}
				}
l0041CE6B:
				if (Mem0[0x004298D0:word32] != 0x00000000)
				{
					Mem0[0x004298D0:word32]();
					if (eax != 0x00000000)
					{
						eax = fp - 0x00000010;
						esp_110 = fp - 0x00000038;
						Mem0[0x004298D4:word32]();
						if ((fp - 0x00000010 & fp - 0x00000010) == 0x00000000 || (dwLoc08 & 0x00000001) == 0x00000000)
						{
l0041CEA5:
							Mem137[ebp_135 - 0x0000001C:word32] = 0x00000001;
						}
					}
					else
						goto l0041CEA5;
				}
				if (0x00000000 == 0x00000000)
				{
					if (Mem0[0x004298C8:word32] != 0x00000000)
					{
						Mem0[0x004298C8:word32]();
						Mem119[ebp_135 - 0x00000014:word32] = eax;
					}
					if (0x00000000 != 0x00000000 && Mem0[0x004298CC:word32] != 0x00000000)
					{
						esp_110 = esp_110 - 0x00000004;
						Mem117[esp_110 + 0x00000000:word32] = 0x00000000;
						Mem117[0x004298CC:word32]();
						dwLoc18_118 = eax;
					}
				}
				else if (Mem0[0x00429644:word32] >=u 0x00000004)
					dwArg0C = dwArg0C | 0x00200000;
				else
					dwArg0C = dwArg0C | 0x00040000;
				word32 esp_71 = esp_110 - 0x00000004;
				Mem72[esp_71 + 0x00000000:word32] = dwArg0C;
				Mem76[esp_71 - 0x00000004:word32] = dwArg08;
				Mem80[esp_71 - 0x00000008:word32] = dwArg04;
				Mem83[esp_71 - 0x0000000C:word32] = dwLoc18_118;
				eax_171 = dwLoc18_118;
				Mem83[0x004298C4:word32]();
			}
		}
		else
			goto l0041CE02;
	}
	else
		goto l0041CE6B;
	return eax_171;
}

word32 fn00411087(word32 ecx, word32 edi, selector fs, ptr32 ecxOut, ptr32 ediOut)
{
	*ecxOut = ecx;
	*ediOut = edi;
	if (ecx == Mem0[0x00428EB0:word32])
		return eax;
	else
	{
		Mem56[fs:0x00000000:word32] = fp - 0x00000014;
		word32 ebp_71;
		word32 eax_72 = fn004111F4(fp - 0x00000004, edi, fs, out ebp_71);
		Mem76[ebp_71 - 0x00000004:word32] = 0xFFFFFFFF;
		Mem78[fp + 0xFFFFFFD0:word32] = 0x00000003;
		ExitProcess(Mem78[fp + 0xFFFFFFD0:UINT]);
		word32 ecx_80 = Mem78[ebp_71 - 0x00000010:word32];
		*ecxOut = ecx_80;
		Mem81[fs:0x00000000:word32] = ecx_80;
		word32 edi_82;
		*ediOut = Mem81[fp + 0xFFFFFFD4:word32];
		return eax_72;
	}
}

word32 fn00411096(word32 ebp, word32 edi, selector fs, ptr32 ebpOut, ptr32 ediOut)
{
	*ebpOut = ebp;
	word32 edi_5;
	return fn00417DB0(ebp, edi, fs, out edi_5);
}

word32 fn0041109B(word32 edi, selector fs, ptr32 ediOut)
{
	word32 edi_4;
	return fn0041A010(edi, fs, out edi_4);
}

word32 fn004110A5(word32 ebp)
{
	return fn0041DDD0(ebp, dwArg00, dwArg04);
}

word32 fn004110AF(word32 dwArg04)
{
	word32 ecx_11 = Mem0[dwArg04 + 0x00000010:word32];
	word32 dwLoc30_15 = Mem0[dwArg04 + 0x00000008:word32];
	word32 dwLoc2C_16 = 0x00000000;
	while (dwLoc30_15 >= 0x00000000)
	{
		dwLoc30_15 = dwLoc30_15 << 0x00000001;
		dwLoc2C_16 = dwLoc2C_16 + 0x00000001;
	}
	word32 edx_34 = ecx_11 + 0x00000144 + dwLoc2C_16 *s 0x00000204;
	word32 dwLoc18_36 = 0x00000000;
	while (dwLoc18_36 < 0x0000003F)
	{
		word32 eax_47 = edx_34 + dwLoc18_36 * 0x00000008;
		Mem51[eax_47 + 0x00000008:word32] = eax_47;
		Mem54[eax_47 + 0x00000004:word32] = eax_47;
		dwLoc18_36 = dwLoc18_36 + 0x00000001;
	}
	word32 eax_198;
	word32 edx_62 = (dwLoc2C_16 << 0x0000000F) + Mem0[dwArg04 + 0x0000000C:word32];
	word32 eax_73 = VirtualAlloc(edx_62, 0x00008000, 0x00001000, 0x00000004);
	if (eax_73 == 0x00000000)
		eax_198 = eax_73 | 0xFFFFFFFF;
	else
	{
		word32 dwLoc14_112 = edx_62;
		while (dwLoc14_112 <=u edx_62 + 0x00007000)
		{
			Mem122[dwLoc14_112 + 0x00000008:word32] = 0xFFFFFFFF;
			Mem124[dwLoc14_112 + 0x00000FFC:word32] = 0xFFFFFFFF;
			word32 edx_126 = dwLoc14_112 + 0x0000000C;
			Mem129[edx_126 + 0x00000000:word32] = 0x00000FF0;
			Mem133[edx_126 + 0x00000004:word32] = edx_126 + 0x00001000;
			Mem137[edx_126 + 0x00000008:word32] = edx_126 - 0x00001000;
			Mem143[edx_126 + 0x00000FEC:word32] = 0x00000FF0;
			dwLoc14_112 = dwLoc14_112 + 0x00001000;
		}
		Mem154[edx_34 + 0x000001FC:word32] = edx_62 + 0x0000000C;
		Mem160[Mem154[edx_34 + 0x000001FC:word32] + 0x00000008:word32] = edx_34 + 0x000001F8;
		Mem164[edx_34 + 0x00000200:word32] = edx_62 + 0x0000700C;
		Mem170[Mem164[edx_34 + 0x00000200:word32] + 0x00000004:word32] = edx_34 + 0x000001F8;
		(ecx_11 + 0x00000044)[dwLoc2C_16 * 0x00000004] = 0x00000000;
		(ecx_11 + 0x000000C4)[dwLoc2C_16 * 0x00000004] = 0x00000001;
		word32 ecx_178 = (int32) Mem176[ecx_11 + 0x00000043:byte];
		Mem183[ecx_11 + 0x00000043:byte] = Mem176[ecx_11 + 0x00000043:byte] + 0x01;
		if (ecx_178 == 0x00000000)
			Mem206[dwArg04 + 0x00000004:word32] = Mem183[dwArg04 + 0x00000004:word32] | 0x00000001;
		Mem197[dwArg04 + 0x00000008:word32] = ~(0x80000000 >>u (byte) dwLoc2C_16) & Mem183[dwArg04 + 0x00000008:word32];
		eax_198 = dwLoc2C_16;
	}
	return eax_198;
}

word32 fn004110BE(word32 dwArg04, word32 dwArg08)
{
	word32 eax_22;
	if (dwArg08 >u 0xFFFFFFE0)
		eax_22 = 0x00000000;
	else
	{
		if (Mem0[0x0042AF90:word32] == 0x00000003)
		{
			word32 eax_63 = fn004111C7(dwArg04);
			if (eax_63 != 0x00000000)
			{
				dwLoc08 = 0x00000000;
				if (dwArg08 <=u Mem0[0x0042ACA4:word32] && fn004111E5(eax_63, dwArg04, dwArg08) != 0x00000000)
					Mem140[fp - 0x00000008:word32] = dwArg04;
			}
			if (eax_63 == 0x00000000)
			{
				if (dwArg08 == 0x00000000)
					;
				Mem105[fp + 0x00000008:word32] = 0x00000010;
				dwLoc08 = HeapReAlloc(Mem105[0x0042AF80:word32], 0x00000010, dwArg04, 0x00000001);
			}
		}
		else
		{
			if (dwArg08 == 0x00000000)
				;
			dwLoc08 = HeapReAlloc(Mem0[0x0042AF80:word32], 0x00000010, dwArg04, 0x00000001);
		}
		eax_22 = dwLoc08;
	}
	return eax_22;
}

word32 fn004110C8(word32 edi, selector fs, ptr32 ebpOut, ptr32 ediOut)
{
	*ebpOut = ebp;
	word32 edi_5;
	return fn0041E5C0(edi, fs, dwArg00, out edi_5);
}

word32 fn00411113(word32 dwArg04, ptr32 edxOut)
{
	*edxOut = edx;
	Mem11[0x00429630:word32] = dwArg04;
	word32 eax_10 = dwArg04;
	word32 dwLoc08_12 = 0x00000000;
	while (dwLoc08_12 <u 0x0000002D)
	{
		word32 edx_33;
		*edxOut = dwLoc08_12;
		eax_10 = dwArg04;
		if (dwArg04 == 0x00429220[dwLoc08_12 * 0x00000008])
		{
			word32 edx_38 = 0x00429224[dwLoc08_12 * 0x00000008];
			*edxOut = edx_38;
			Mem39[0x0042962C:word32] = edx_38;
			goto l004221C7;
		}
		dwLoc08_12 = dwLoc08_12 + 0x00000001;
	}
	if (dwArg04 >=u 0x00000013 && dwArg04 <=u 0x00000024)
		Mem58[0x0042962C:word32] = 0x0000000D;
	else if (dwArg04 >=u 0x000000BC && dwArg04 <=u 0x000000CA)
		Mem55[0x0042962C:word32] = 0x00000008;
	else
		Mem52[0x0042962C:word32] = 0x00000016;
l004221C7:
	return eax_10;
}

word32 fn00411118(word32 edi, selector fs, ptr32 ebpOut, ptr32 ediOut)
{
	*ebpOut = ebp;
	word32 edi_5;
	return fn00422BD0(edi, fs, dwArg00, out edi_5);
}

word32 fn00411127(word32 dwArg04)
{
	return fn004110A5(fp - 0x00000004);
}

void fn00411131(word32 eax)
{
	fn00414C20(eax, dwLoc04);
	return;
}

word32 fn0041114F()
{
	return fn00418190(dwArg00);
}

word32 fn00411154(word32 edi, selector fs, ptr32 ebpOut, ptr32 ediOut)
{
	*ebpOut = ebp;
	word32 edi_7;
	return fn00421780(edi, fs, dwArg00, dwArg04, dwArg08, out edi_7);
}

void fn0041115E(word32 edi, selector fs)
{
	fn004132B0(edi, fs, 0x00000000, 0x00000000, 0x00000001);
	return;
}

void fn0041116D()
{
	fn00421650(dwArg00, dwArg04, dwArg08);
	return;
}

word32 fn00411181(word32 edi, selector fs, word32 dwArg04)
{
	word32 edi_12;
	fn0041136B(fp - 0x00000004, edi, fs, out edi_12);
	return edi_12;
}

word32 fn00411195()
{
	return fn0041DD20(dwArg00, bArg04, dwArg08);
}

word32 fn0041119F(word32 ebp, word32 edi, selector fs, ptr32 ecxOut, ptr32 ebpOut, ptr32 ediOut)
{
	*ebpOut = ebp;
	*ediOut = edi;
	word32 ecx_9;
	return fn00415390(ebp, edi, fs, dwArg00, dwArg04, dwArg08, dwArg10, out ecx_9);
}

word32 fn004111C7(word32 dwArg04)
{
	word32 eax_10 = Mem0[0x0042AC9C:word32] *s 0x00000014 + Mem0[0x0042ACA0:word32];
	word32 dwLoc0C_14 = Mem0[0x0042ACA0:word32] + 0x0000000C;
	word32 eax_28;
	while (dwLoc0C_14 <u eax_10)
	{
		if (dwArg04 - Mem0[dwLoc0C_14 + 0x00000000:word32] <u 0x00100000)
		{
			eax_28 = dwLoc0C_14;
			goto l0041A7BF;
		}
		dwLoc0C_14 = dwLoc0C_14 + 0x00000014;
	}
	eax_28 = 0x00000000;
l0041A7BF:
	return eax_28;
}

word32 fn004111D1(word32 ecx, word32 edx, word32 ebp, selector fs, word32 dwArg00, word32 dwArg04, word32 dwArg08)
{
	word32 edi_22 = 0x00000000;
	word32 dwLoc08_26 = 0x00000000;
	if (Mem0[edx + 0x00000000:word32] > 0x00000000)
		do
		{
			word32 eax_65 = Mem0[edx + 0x00000004:word32];
			word32 ecx_66 = Mem0[eax_65 + edi_22:word32];
			word32 eax_68 = eax_65 + edi_22;
			if (Mem0[ecx_66 - 0x00000004 + ecx:word32] != 0xCCCCCCCC || Mem0[(Mem0[eax_68 + 0x00000004:word32] + ecx_66) + ecx:word32] != 0xCCCCCCCC)
				fn004112AD(fp - 0x00000004, fs, dwArg00, Mem0[Mem0[edx + 0x00000004:word32] + 0x00000008 + edi_22:word32]);
			word32 eax_78 = dwLoc08_26 + 0x00000001;
			edi_22 = edi_22 + 0x0000000C;
			dwLoc08_26 = eax_78;
		} while (eax_78 < Mem0[edx + 0x00000000:word32]);
}

word32 fn004111D6()
{
	word32 eax_147;
	word32 eax_15 = IsBadWritePtr(Mem0[0x0042ACA0:word32], Mem0[0x0042AC9C:word32] *s 0x00000014);
	if (eax_15 != 0x00000000)
		eax_147 = eax_15 | 0xFFFFFFFF;
	else
	{
		word32 dwLoc3C_598 = Mem0[0x0042ACA0:word32];
		word32 dwLoc0170_602 = 0x00000000;
		while (dwLoc0170_602 < Mem0[0x0042AC9C:word32])
		{
			word32 eax_135 = Mem0[dwLoc3C_598 + 0x00000010:word32];
			if (IsBadWritePtr(eax_135, 0x000041C4) != 0x00000000)
			{
				eax_147 = 0xFFFFFFFE;
				goto l0041C76C;
			}
			word32 dwLoc14_150 = Mem0[dwLoc3C_598 + 0x0000000C:word32] + 0x00008000;
			word32 dwLoc48_154 = eax_135 + 0x00000144;
			word32 dwLoc0160_157 = Mem0[dwLoc3C_598 + 0x00000008:word32];
			word32 dwLoc38_158 = 0x00000000;
			word32 dwLoc54_159 = 0x00000000;
			word32 dwLoc20_160 = 0x00000000;
			while (dwLoc20_160 < 0x00000020)
			{
				word32 dwLoc10_196 = 0x00000000;
				word32 dwLoc08_197 = 0x00000000;
				word32 dwLoc18_198 = 0x00000000;
				word32 dwLoc016C_199 = 0x00000000;
				while (dwLoc016C_199 < 0x00000040)
				{
					(fp + 0xFFFFFEA4)[dwLoc016C_199 * 0x00000004] = 0x00000000;
					dwLoc016C_199 = dwLoc016C_199 + 0x00000001;
				}
				if (dwLoc0160_157 >= 0x00000000)
				{
					if (IsBadWritePtr(dwLoc14_150, 0x00008000) != 0x00000000)
					{
						eax_147 = 0xFFFFFFFC;
						goto l0041C76C;
					}
					word32 dwLoc2C_280 = dwLoc14_150 + 0x0000000C;
					word32 dwLoc1C_281 = 0x00000000;
					while (dwLoc1C_281 < 0x00000008)
					{
						word32 ecx_299 = dwLoc2C_280 + 0x00000000;
						word32 dwLoc28_300 = ecx_299;
						if (Mem0[ecx_299 - 0x00000004:word32] != 0xFFFFFFFF || Mem0[ecx_299 + 0x00000FF0:word32] != 0xFFFFFFFF)
						{
							eax_147 = 0xFFFFFFFB;
							goto l0041C76C;
						}
						do
						{
							word32 eax_320 = Mem0[dwLoc28_300 + 0x00000000:word32];
							word32 dwLoc40_321 = eax_320;
							if ((eax_320 & 0x00000001) != 0x00000000)
							{
								dwLoc40_321 = eax_320 - 0x00000001;
								if (eax_320 > 0x00000401)
								{
									eax_147 = 0xFFFFFFFA;
									goto l0041C76C;
								}
								dwLoc18_198 = dwLoc18_198 + 0x00000001;
								goto l0041C47C;
							}
							word32 edx_386 = (eax_320 >> 0x00000004) - 0x00000001;
							word32 dwLoc016C_387 = edx_386;
							if (edx_386 > 0x0000003F)
								dwLoc016C_387 = 0x0000003F;
							(fp + 0xFFFFFEA4)[dwLoc016C_387 * 0x00000004] = (fp + 0xFFFFFEA4)[dwLoc016C_387 * 0x00000004] + 0x00000001;
l0041C47C:
							if (dwLoc40_321 < 0x00000010 || ((dwLoc40_321 & 0x0000000F) != 0x00000000 || dwLoc40_321 > 0x00000FF0))
							{
								eax_147 = 0xFFFFFFF9;
								goto l0041C76C;
							}
							if (Mem0[dwLoc28_300 + dwLoc40_321 - 0x00000004:word32] != eax_320)
							{
								eax_147 = 0xFFFFFFF8;
								goto l0041C76C;
							}
							word32 eax_357 = dwLoc28_300 + dwLoc40_321;
							dwLoc28_300 = eax_357;
						} while (eax_357 <u ecx_299 + 0x00000FF0);
						if (eax_357 != ecx_299 + 0x00000FF0)
						{
							eax_147 = 0xFFFFFFF8;
							goto l0041C76C;
						}
						dwLoc2C_280 = dwLoc2C_280 + 0x00001000;
						dwLoc1C_281 = dwLoc1C_281 + 0x00000001;
					}
					if (Mem0[dwLoc48_154 + 0x00000000:word32] != dwLoc18_198)
					{
						eax_147 = 0xFFFFFFF7;
						goto l0041C76C;
					}
					word32 dwLoc44_404 = dwLoc48_154 + 0x00000008;
					word32 dwLoc0168_405 = 0x00000000;
					while (dwLoc0168_405 < 0x00000040)
					{
						word32 dwLoc58_428 = 0x00000000;
						word32 dwLoc28_430 = dwLoc44_404;
						word32 ecx_440 = Mem0[dwLoc28_430 + 0x00000004:word32];
						while (ecx_440 != dwLoc44_404 && dwLoc58_428 != (fp + 0xFFFFFEA4)[dwLoc0168_405 * 0x00000004])
						{
							if (ecx_440 <u dwLoc14_150 || ecx_440 >=u dwLoc14_150 + 0x00000000)
							{
								eax_147 = 0xFFFFFFF6;
								goto l0041C76C;
							}
							word32 edx_533 = (ecx_440 & 0xFFFFF000) + 0x0000000C;
							word32 dwLoc30_534 = edx_533;
							while (dwLoc30_534 != edx_533 + 0x00000FF0)
							{
								if (dwLoc30_534 == ecx_440)
									goto l0041C5CA;
								dwLoc30_534 = (Mem0[dwLoc30_534 + 0x00000000:word32] & 0xFFFFFFFE) + dwLoc30_534;
							}
l0041C5CA:
							if (dwLoc30_534 == edx_533 + 0x00000FF0)
							{
								eax_147 = 0xFFFFFFF5;
								goto l0041C76C;
							}
							word32 ecx_552 = (Mem0[ecx_440 + 0x00000000:word32] >> 0x00000004) - 0x00000001;
							word32 dwLoc016C_553 = ecx_552;
							if (ecx_552 > 0x0000003F)
								dwLoc016C_553 = 0x0000003F;
							if (dwLoc016C_553 != dwLoc0168_405)
							{
								eax_147 = 0xFFFFFFF4;
								goto l0041C76C;
							}
							if (Mem0[ecx_440 + 0x00000008:word32] != dwLoc28_430)
							{
								eax_147 = 0xFFFFFFF3;
								goto l0041C76C;
							}
							dwLoc28_430 = ecx_440;
							dwLoc58_428 = dwLoc58_428 + 0x00000001;
							ecx_440 = Mem0[dwLoc28_430 + 0x00000004:word32];
						}
						if (dwLoc58_428 != 0x00000000)
							if (dwLoc0168_405 < 0x00000020)
							{
								dwLoc10_196 = 0x80000000 >>u (byte) dwLoc0168_405 | dwLoc10_196;
								dwLoc38_158 = 0x80000000 >>u (byte) dwLoc0168_405 | dwLoc38_158;
							}
							else
							{
								dwLoc08_197 = 0x80000000 >>u (byte) (dwLoc0168_405 - 0x00000020) | dwLoc08_197;
								dwLoc54_159 = 0x80000000 >>u (byte) (dwLoc0168_405 - 0x00000020) | dwLoc54_159;
							}
						if (Mem0[dwLoc28_430 + 0x00000004:word32] != dwLoc44_404 || dwLoc58_428 != (fp + 0xFFFFFEA4)[dwLoc0168_405 * 0x00000004])
						{
							eax_147 = 0xFFFFFFF2;
							goto l0041C76C;
						}
						if (Mem0[dwLoc44_404 + 0x00000000:word32] != dwLoc28_430)
						{
							eax_147 = 0xFFFFFFF1;
							goto l0041C76C;
						}
						dwLoc44_404 = dwLoc44_404 + 0x00000008;
						dwLoc0168_405 = dwLoc0168_405 + 0x00000001;
					}
				}
l0041C6EE:
				if (dwLoc10_196 != (eax_135 + 0x00000044)[dwLoc20_160 * 0x00000004] || dwLoc08_197 != (eax_135 + 0x000000C4)[dwLoc20_160 * 0x00000004])
				{
					eax_147 = 0xFFFFFFF0;
					goto l0041C76C;
				}
				dwLoc14_150 = dwLoc14_150 + 0x00008000;
				dwLoc48_154 = dwLoc48_154 + 0x00000204;
				dwLoc0160_157 = dwLoc0160_157 << 0x00000001;
				dwLoc20_160 = dwLoc20_160 + 0x00000001;
			}
			if (dwLoc38_158 != Mem0[dwLoc3C_598 + 0x00000000:word32] || dwLoc54_159 != Mem0[dwLoc3C_598 + 0x00000004:word32])
			{
				eax_147 = 0xFFFFFFEF;
				goto l0041C76C;
			}
			dwLoc3C_598 = dwLoc3C_598 + 0x00000014;
			dwLoc0170_602 = dwLoc0170_602 + 0x00000001;
		}
		eax_147 = 0x00000000;
	}
l0041C76C:
	return eax_147;
}

word32 fn004111E0(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	if (dwArg0C == 0x0000000A && dwArg04 < 0x00000000)
		fn0041D200(dwArg04, dwArg08, dwArg0C, 0x00000001);
	else
		fn0041D200(dwArg04, dwArg08, dwArg0C, 0x00000000);
	return dwArg08;
}

word32 fn004111E5(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	word32 eax_61;
	word32 edx_34 = Mem0[dwArg08 - 0x00000004:word32];
	word32 ecx_20 = dwArg08 - Mem0[dwArg04 + 0x0000000C:word32];
	word32 edx_15 = Mem0[dwArg04 + 0x00000010:word32];
	word32 eax_38 = dwArg08 - 0x00000004 + (edx_34 - 0x00000001);
	word32 eax_10 = dwArg0C + 0x00000017 & 0xFFFFFFF0;
	word32 edx_28 = edx_15 + 0x00000144 + (ecx_20 >>u 0x0000000F) *s 0x00000204;
	word32 edx_41 = Mem0[eax_38 + 0x00000000:word32];
	if (eax_10 <= edx_34 - 0x00000001)
		if (eax_10 < edx_34 - 0x00000001)
		{
			Mem371[dwArg08 - 0x00000004:word32] = eax_10 + 0x00000001;
			Mem376[dwArg08 - 0x00000004 + eax_10 - 0x00000004:word32] = eax_10 + 0x00000001;
			word32 ecx_381 = edx_34 - 0x00000001 - eax_10;
			word32 edx_385 = (ecx_381 >> 0x00000004) - 0x00000001;
			word32 eax_378 = dwArg08 - 0x00000004 + eax_10;
			word32 dwLoc34_382 = ecx_381;
			word32 dwLoc30_386 = edx_385;
			if (edx_385 >u 0x0000003F)
				dwLoc30_386 = 0x0000003F;
			if ((edx_41 & 0x00000001) == 0x00000000)
			{
				word32 ecx_515 = (edx_41 >> 0x00000004) - 0x00000001;
				word32 dwLoc0C_516 = ecx_515;
				if (ecx_515 >u 0x0000003F)
					dwLoc0C_516 = 0x0000003F;
				if (Mem376[eax_38 + 0x00000004:word32] == Mem376[eax_38 + 0x00000008:word32])
					if (dwLoc0C_516 <u 0x00000020)
					{
						(edx_15 + 0x00000044)[(ecx_20 >>u 0x0000000F) * 0x00000004] = ~(0x80000000 >>u (byte) dwLoc0C_516) & (edx_15 + 0x00000044)[(ecx_20 >>u 0x0000000F) * 0x00000004];
						Mem569[edx_15 + dwLoc0C_516 + 0x00000004:byte] = Mem562[edx_15 + dwLoc0C_516 + 0x00000004:byte] - 0x01;
						if ((int32) Mem569[edx_15 + dwLoc0C_516 + 0x00000004:byte] == 0x00000000)
							Mem592[dwArg04 + 0x00000000:word32] = ~(0x80000000 >>u (byte) dwLoc0C_516) & Mem569[dwArg04 + 0x00000000:word32];
					}
					else
					{
						(edx_15 + 0x000000C4)[(ecx_20 >>u 0x0000000F) * 0x00000004] = ~(0x80000000 >>u (byte) (dwLoc0C_516 - 0x00000020)) & (edx_15 + 0x000000C4)[(ecx_20 >>u 0x0000000F) * 0x00000004];
						Mem611[edx_15 + dwLoc0C_516 + 0x00000004:byte] = Mem604[edx_15 + dwLoc0C_516 + 0x00000004:byte] - 0x01;
						if ((int32) Mem611[edx_15 + dwLoc0C_516 + 0x00000004:byte] == 0x00000000)
							Mem629[dwArg04 + 0x00000004:word32] = ~(0x80000000 >>u (byte) (dwLoc0C_516 - 0x00000020)) & Mem611[dwArg04 + 0x00000004:word32];
					}
				Mem534[Mem376[eax_38 + 0x00000008:word32] + 0x00000004:word32] = Mem376[eax_38 + 0x00000004:word32];
				Mem539[Mem534[eax_38 + 0x00000004:word32] + 0x00000008:word32] = Mem534[eax_38 + 0x00000008:word32];
				word32 ecx_541 = ecx_381 + edx_41;
				word32 edx_545 = (ecx_541 >> 0x00000004) - 0x00000001;
				dwLoc34_382 = ecx_541;
				dwLoc30_386 = edx_545;
				if (edx_545 >u 0x0000003F)
					dwLoc30_386 = 0x0000003F;
			}
			word32 edx_405 = edx_28 + dwLoc30_386 * 0x00000008;
			Mem410[eax_378 + 0x00000004:word32] = Mem376[edx_405 + 0x00000004:word32];
			Mem413[eax_378 + 0x00000008:word32] = edx_405;
			Mem416[edx_405 + 0x00000004:word32] = eax_378;
			Mem420[Mem416[eax_378 + 0x00000004:word32] + 0x00000008:word32] = eax_378;
			if (Mem420[eax_378 + 0x00000004:word32] == Mem420[eax_378 + 0x00000008:word32])
				if (dwLoc30_386 <u 0x00000020)
				{
					word32 edx_443 = (int32) Mem420[edx_15 + dwLoc30_386 + 0x00000004:byte];
					Mem450[edx_15 + dwLoc30_386 + 0x00000004:byte] = Mem420[edx_15 + dwLoc30_386 + 0x00000004:byte] + 0x01;
					if (edx_443 == 0x00000000)
						Mem475[dwArg04 + 0x00000000:word32] = 0x80000000 >>u (byte) dwLoc30_386 | Mem450[dwArg04 + 0x00000000:word32];
					(edx_15 + 0x00000044)[(ecx_20 >>u 0x0000000F) * 0x00000004] = 0x80000000 >>u (byte) dwLoc30_386 | (edx_15 + 0x00000044)[(ecx_20 >>u 0x0000000F) * 0x00000004];
				}
				else
				{
					word32 eax_478 = (int32) Mem420[edx_15 + dwLoc30_386 + 0x00000004:byte];
					Mem485[edx_15 + dwLoc30_386 + 0x00000004:byte] = Mem420[edx_15 + dwLoc30_386 + 0x00000004:byte] + 0x01;
					if (eax_478 == 0x00000000)
						Mem512[dwArg04 + 0x00000004:word32] = 0x80000000 >>u (byte) (dwLoc30_386 - 0x00000020) | Mem485[dwArg04 + 0x00000004:word32];
					(edx_15 + 0x000000C4)[(ecx_20 >>u 0x0000000F) * 0x00000004] = 0x80000000 >>u (byte) (dwLoc30_386 - 0x00000020) | (edx_15 + 0x000000C4)[(ecx_20 >>u 0x0000000F) * 0x00000004];
				}
			Mem433[eax_378 + 0x00000000:word32] = dwLoc34_382;
			Mem438[eax_378 + dwLoc34_382 - 0x00000004:word32] = dwLoc34_382;
		}
	else if ((edx_41 & 0x00000001) == 0x00000000 && eax_10 <= (edx_34 - 0x00000001) + edx_41)
	{
		word32 eax_111 = (edx_41 >> 0x00000004) - 0x00000001;
		word32 dwLoc0C_112 = eax_111;
		if (eax_111 >u 0x0000003F)
			dwLoc0C_112 = 0x0000003F;
		if (Mem0[eax_38 + 0x00000004:word32] == Mem0[eax_38 + 0x00000008:word32])
			if (dwLoc0C_112 <u 0x00000020)
			{
				(edx_15 + 0x00000044)[(ecx_20 >>u 0x0000000F) * 0x00000004] = ~(0x80000000 >>u (byte) dwLoc0C_112) & (edx_15 + 0x00000044)[(ecx_20 >>u 0x0000000F) * 0x00000004];
				Mem301[edx_15 + dwLoc0C_112 + 0x00000004:byte] = Mem294[edx_15 + dwLoc0C_112 + 0x00000004:byte] - 0x01;
				if ((int32) Mem301[edx_15 + dwLoc0C_112 + 0x00000004:byte] == 0x00000000)
					Mem324[dwArg04 + 0x00000000:word32] = ~(0x80000000 >>u (byte) dwLoc0C_112) & Mem301[dwArg04 + 0x00000000:word32];
			}
			else
			{
				(edx_15 + 0x000000C4)[(ecx_20 >>u 0x0000000F) * 0x00000004] = ~(0x80000000 >>u (byte) (dwLoc0C_112 - 0x00000020)) & (edx_15 + 0x000000C4)[(ecx_20 >>u 0x0000000F) * 0x00000004];
				Mem343[edx_15 + dwLoc0C_112 + 0x00000004:byte] = Mem336[edx_15 + dwLoc0C_112 + 0x00000004:byte] - 0x01;
				if ((int32) Mem343[edx_15 + dwLoc0C_112 + 0x00000004:byte] == 0x00000000)
					Mem361[dwArg04 + 0x00000004:word32] = ~(0x80000000 >>u (byte) (dwLoc0C_112 - 0x00000020)) & Mem343[dwArg04 + 0x00000004:word32];
			}
		Mem130[Mem0[eax_38 + 0x00000008:word32] + 0x00000004:word32] = Mem0[eax_38 + 0x00000004:word32];
		Mem135[Mem130[eax_38 + 0x00000004:word32] + 0x00000008:word32] = Mem130[eax_38 + 0x00000008:word32];
		word32 ecx_138 = edx_34 - 0x00000001 + edx_41 - eax_10;
		if (ecx_138 > 0x00000000)
		{
			word32 eax_166 = (ecx_138 >> 0x00000004) - 0x00000001;
			word32 edx_162 = dwArg08 - 0x00000004 + eax_10;
			word32 dwLoc0C_167 = eax_166;
			if (eax_166 >u 0x0000003F)
				dwLoc0C_167 = 0x0000003F;
			word32 eax_173 = edx_28 + dwLoc0C_167 * 0x00000008;
			Mem178[edx_162 + 0x00000004:word32] = Mem135[eax_173 + 0x00000004:word32];
			Mem181[edx_162 + 0x00000008:word32] = eax_173;
			Mem184[eax_173 + 0x00000004:word32] = edx_162;
			Mem188[Mem184[edx_162 + 0x00000004:word32] + 0x00000008:word32] = edx_162;
			if (Mem188[edx_162 + 0x00000004:word32] == Mem188[edx_162 + 0x00000008:word32])
				if (dwLoc0C_167 <u 0x00000020)
				{
					word32 eax_211 = (int32) Mem188[edx_15 + dwLoc0C_167 + 0x00000004:byte];
					Mem218[edx_15 + dwLoc0C_167 + 0x00000004:byte] = Mem188[edx_15 + dwLoc0C_167 + 0x00000004:byte] + 0x01;
					if (eax_211 == 0x00000000)
						Mem243[dwArg04 + 0x00000000:word32] = 0x80000000 >>u (byte) dwLoc0C_167 | Mem218[dwArg04 + 0x00000000:word32];
					(edx_15 + 0x00000044)[(ecx_20 >>u 0x0000000F) * 0x00000004] = 0x80000000 >>u (byte) dwLoc0C_167 | (edx_15 + 0x00000044)[(ecx_20 >>u 0x0000000F) * 0x00000004];
				}
				else
				{
					word32 eax_246 = (int32) Mem188[edx_15 + dwLoc0C_167 + 0x00000004:byte];
					Mem253[edx_15 + dwLoc0C_167 + 0x00000004:byte] = Mem188[edx_15 + dwLoc0C_167 + 0x00000004:byte] + 0x01;
					if (eax_246 == 0x00000000)
						Mem280[dwArg04 + 0x00000004:word32] = 0x80000000 >>u (byte) (dwLoc0C_167 - 0x00000020) | Mem253[dwArg04 + 0x00000004:word32];
					(edx_15 + 0x000000C4)[(ecx_20 >>u 0x0000000F) * 0x00000004] = 0x80000000 >>u (byte) (dwLoc0C_167 - 0x00000020) | (edx_15 + 0x000000C4)[(ecx_20 >>u 0x0000000F) * 0x00000004];
				}
			Mem201[edx_162 + 0x00000000:word32] = ecx_138;
			Mem206[edx_162 + ecx_138 - 0x00000004:word32] = ecx_138;
		}
		Mem154[dwArg08 - 0x00000004:word32] = eax_10 + 0x00000001;
		Mem160[dwArg08 - 0x00000004 + eax_10 - 0x00000004:word32] = eax_10 + 0x00000001;
l0041BF5D:
		eax_61 = 0x00000001;
	}
	else
		eax_61 = 0x00000000;
	return eax_61;
}

word32 fn004111EA(word32 dwArg04)
{
	word32 eax_102;
	if (dwArg04 == 0x00000000)
		eax_102 = 0x00000000;
	else if (fn004112F8(dwArg04 - 0x00000020, 0x00000020, 0x00000000) == 0x00000000)
		eax_102 = 0x00000000;
	else if (Mem0[0x0042AF90:word32] == 0x00000003)
	{
		Mem57[fp - 0x0000000C:word32] = dwArg04 - 0x00000020;
		word32 eax_58 = fn004111C7(0x00000000);
		if (eax_58 != 0x00000000)
		{
			Mem70[fp - 0x00000010:word32] = eax_58;
			eax_102 = fn00411221(0x00000020, dwArg04 - 0x00000020);
		}
		else if ((Mem57[0x0042963C:word32] & 0x00008000) != 0x00000000)
			eax_102 = 0x00000001;
		else
		{
			Mem86[fp - 0x00000010:word32] = 0x00000000;
			eax_102 = HeapValidate(Mem86[0x0042AF80:word32], 0x00000020, dwArg04 - 0x00000020);
		}
	}
	else
	{
		Mem96[fp - 0x0000000C:word32] = dwArg04 - 0x00000020;
		Mem98[fp - 0x00000010:word32] = 0x00000000;
		eax_102 = HeapValidate(Mem98[0x0042AF80:word32], 0x00000020, 0x00000000);
	}
	return eax_102;
}

word32 fn004111F4(word32 ebp, word32 edi, selector fs, ptr32 ebpOut)
{
	*ebpOut = ebp;
	return fn0041F640(ebp, edi, fs, dwArg00, dwArg04);
}

void fn004111F9()
{
	word32 edi_17 = fp + 0xFFFFFF3C;
	word32 ecx_18 = 0x00000030;
	while (ecx_18 != 0x00000000)
	{
		Mem22[edi_17 + 0x00000000:word32] = 0xCCCCCCCC;
		edi_17 = edi_17 + 0x00000004;
		ecx_18 = ecx_18 - 0x00000001;
	}
	return;
}

word32 fn004111FE()
{
	return fn0041E360();
}

word32 fn00411203(word32 ebp, word32 dwArg04, word32 dwArg08)
{
	word32 eax_105;
	word32 esp_101 = fp - 0x0000001C;
	if (dwArg04 == 0x00000000)
		eax_105 = fn00411127(dwArg08);
	else if (dwArg08 == 0x00000000)
	{
		fn004113E8(dwArg04);
		eax_105 = 0x00000000;
	}
	else if (Mem0[0x0042AF90:word32] == 0x00000003)
	{
l0041E029:
		while (true)
		{
			word32 dwLoc08_123 = 0x00000000;
			if (dwArg08 <=u 0xFFFFFFE0)
			{
				word32 esp_109 = esp_101 - 0x00000004;
				Mem110[esp_109 + 0x00000000:word32] = dwArg04;
				word32 eax_112 = fn004111C7(dwArg00);
				esp_101 = esp_109 + 0x00000004;
				word32 dwLoc14_114 = eax_112;
				if (eax_112 != 0x00000000)
				{
					if (dwArg08 <=u Mem110[0x0042ACA4:word32])
					{
						Mem225[esp_109 + 0x00000000:word32] = dwArg08;
						Mem228[esp_109 - 0x00000004:word32] = dwArg04;
						Mem231[esp_109 - 0x00000008:word32] = eax_112;
						esp_101 = esp_109 + 0x00000004;
						if (fn004111E5(dwArg00, dwArg04, dwArg08) != 0x00000000)
							Mem238[fp - 0x00000008:word32] = dwArg04;
						else
						{
							Mem241[esp_109 + 0x00000000:word32] = dwArg08;
							Mem244[fp - 0x00000008:word32] = fn00411528(fp - 0x00000004, dwArg00);
							esp_101 = esp_109 + 0x00000004;
							if (0x00000000 != 0x00000000)
							{
								word32 dwLoc18_254;
								word32 edx_248 = Mem244[dwArg04 - 0x00000004:word32];
								if (edx_248 - 0x00000001 <u dwArg08)
									dwLoc18_254 = edx_248 - 0x00000001;
								else
									dwLoc18_254 = dwArg08;
								Mem257[esp_109 + 0x00000000:word32] = dwLoc18_254;
								Mem260[esp_109 - 0x00000004:word32] = dwArg04;
								Mem263[esp_109 - 0x00000008:word32] = 0x00000000;
								fn00411352(dwArg00, dwArg04, dwArg08);
								Mem268[esp_109 + 0x00000000:word32] = dwArg04;
								word32 eax_269 = fn004111C7(dwArg00);
								Mem275[esp_109 + 0x00000000:word32] = dwArg04;
								Mem278[esp_109 - 0x00000004:word32] = eax_269;
								fn0041149C(dwArg00, dwArg04);
								dwLoc14_114 = eax_269;
								esp_101 = esp_109 + 0x00000004;
							}
						}
					}
					if (true)
					{
						if (dwArg08 == 0x00000000)
							dwArg08 = 0x00000001;
						word32 eax_174 = dwArg08 + 0x0000000F;
						word32 esp_178 = esp_101 - 0x00000004;
						Mem179[esp_178 + 0x00000000:word32] = eax_174 & 0xFFFFFFF0;
						Mem181[esp_178 - 0x00000004:word32] = 0x00000000;
						Mem184[esp_178 - 0x00000008:word32] = Mem181[0x0042AF80:word32];
						word32 eax_185 = HeapAlloc(Mem184[esp_178 - 0x00000008:HANDLE], Mem184[esp_178 - 4:DWORD], Mem184[esp_178 + 0x00000000:SIZE_T]);
						dwArg08 = eax_174 & 0xFFFFFFF0;
						esp_101 = esp_178 + 0x00000004;
						dwLoc08_123 = eax_185;
						if (eax_185 != 0x00000000)
						{
							word32 dwLoc1C_197;
							word32 ecx_191 = Mem184[dwArg04 - 0x00000004:word32];
							if (ecx_191 - 0x00000001 <u (eax_174 & 0xFFFFFFF0))
								dwLoc1C_197 = ecx_191 - 0x00000001;
							else
								dwLoc1C_197 = eax_174 & 0xFFFFFFF0;
							Mem200[esp_178 + 0x00000000:word32] = dwLoc1C_197;
							Mem203[esp_178 - 0x00000004:word32] = dwArg04;
							Mem206[esp_178 - 0x00000008:word32] = eax_185;
							fn00411352(dwArg00, dwArg04, eax_174 & 0xFFFFFFF0);
							Mem211[esp_178 + 0x00000000:word32] = dwArg04;
							Mem214[esp_178 - 0x00000004:word32] = dwLoc14_114;
							fn0041149C(dwArg00, dwArg04);
							esp_101 = esp_178 + 0x00000004;
						}
					}
				}
				if (dwLoc14_114 == 0x00000000)
				{
					if (dwArg08 == 0x00000000)
						dwArg08 = 0x00000001;
					word32 ecx_136 = dwArg08 + 0x0000000F;
					word32 esp_142 = esp_101 - 0x00000004;
					Mem143[esp_142 + 0x00000000:word32] = ecx_136 & 0xFFFFFFF0;
					Mem146[esp_142 - 0x00000004:word32] = dwArg04;
					Mem148[esp_142 - 0x00000008:word32] = 0x00000000;
					Mem151[esp_142 - 0x0000000C:word32] = Mem148[0x0042AF80:word32];
					dwArg08 = ecx_136 & 0xFFFFFFF0;
					esp_101 = esp_142 + 0x00000004;
					dwLoc08_123 = HeapReAlloc(Mem151[esp_142 - 0x0000000C:HANDLE], Mem151[esp_142 - 8:DWORD], Mem151[esp_142 - 4:LPVOID], Mem151[esp_142 + 0x00000000:SIZE_T]);
				}
			}
			if (dwLoc08_123 != 0x00000000 || Mem0[0x004298F4:word32] == 0x00000000)
			{
				eax_105 = dwLoc08_123;
				goto l0041E231;
			}
			word32 esp_97 = esp_101 - 0x00000004;
			Mem98[esp_97 + 0x00000000:word32] = dwArg08;
			esp_101 = esp_97;
			if (fn004113D9() == 0x00000000)
			{
				eax_105 = 0x00000000;
				goto l0041E231;
			}
		}
	}
	else
		while (true)
		{
			if (true)
			{
				if (false)
					Mem335[fp + 0x00000008:word32] = 0x00000001;
				word32 esp_322 = esp_101 - 0x00000004;
				Mem323[esp_322 + 0x00000000:word32] = 0x00000001;
				Mem326[esp_322 - 0x00000004:word32] = dwArg04;
				Mem328[esp_322 - 0x00000008:word32] = 0x00000000;
				Mem331[esp_322 - 0x0000000C:word32] = Mem328[0x0042AF80:word32];
				Mem334[fp - 0x00000008:word32] = HeapReAlloc(Mem331[esp_322 - 0x0000000C:HANDLE], Mem331[esp_322 - 8:DWORD], Mem331[esp_322 - 4:LPVOID], Mem331[esp_322 + 0x00000000:SIZE_T]);
				esp_101 = esp_322 + 0x00000004;
			}
			if (false || Mem0[0x004298F4:word32] == 0x00000000)
			{
				eax_105 = 0x00000000;
				goto l0041E231;
			}
			word32 esp_308 = esp_101 - 0x00000004;
			Mem309[esp_308 + 0x00000000:word32] = 0x00000001;
			esp_101 = esp_308;
			if (fn004113D9() == 0x00000000)
			{
				eax_105 = 0x00000000;
				goto l0041E231;
			}
		}
l0041E231:
	return eax_105;
}

word32 fn0041120D(word32 edi, word32 dwArg04, ptr32 ediOut)
{
	word32 ecx_23 = dwArg04;
	if ((dwArg04 & 0x00000003) != 0x00000000)
	{
l0041A05D:
		do
		{
			ecx_23 = ecx_23 + 0x00000001;
			if (Mem0[ecx_23 + 0x00000000:byte] == 0x00)
			{
				word32 edi_30 = ecx_23 - 0x00000001;
				word32 edi_32;
				return fn0041A0B5(edi_30, edi, dwArg04, dwArg08, out edi_32);
			}
		} while ((ecx_23 & 0x00000003) != 0x00000000);
l0041A070:
		while (true)
		{
			word32 eax_41 = Mem0[ecx_23 + 0x00000000:word32];
			ecx_23 = ecx_23 + 0x00000004;
			if (((eax_41 ^ 0xFFFFFFFF ^ eax_41 + 0x7EFEFEFF) & 0x81010100) == 0x00000000)
				continue;
			word32 eax_50 = Mem0[ecx_23 - 0x00000004:word32];
			byte ah_52 = SLICE(eax_50, byte, 8);
			if ((byte) eax_50 == 0x00)
			{
				word32 edi_76;
				return fn0041A0B5(ecx_23 - 0x00000004, edi, dwArg04, dwArg08, out edi_76);
			}
			if (ah_52 == 0x00)
			{
				word32 edi_71;
				return fn0041A0B5(ecx_23 - 0x00000003, edi, dwArg04, dwArg08, out edi_71);
			}
			if ((eax_50 & 0x00FF0000) == 0x00000000)
			{
				word32 edi_66;
				return fn0041A0B5(ecx_23 - 0x00000002, edi, dwArg04, dwArg08, out edi_66);
			}
			if ((eax_50 & 0xFF000000) == 0x00000000)
				;
		}
	}
	else
		goto l0041A070;
fn0041120D_exit:
}

void fn00411212(word32 edi, selector fs, word32 dwArg04)
{
	fn004132B0(edi, fs, dwArg04, 0x00000001, 0x00000000);
	return;
}

word32 fn00411221(word32 dwArg04, word32 dwArg08)
{
	word32 dwLoc10_30;
	word32 ecx_12 = dwArg08 - Mem0[dwArg04 + 0x0000000C:word32];
	if ((0x80000000 >>u (byte) (ecx_12 >>u 0x0000000F) & Mem0[dwArg04 + 0x00000008:word32]) == 0x00000000 && ((ecx_12 & 0x0000000F) == 0x00000000 && (ecx_12 & 0x00000FFF) != 0x00000000))
		dwLoc10_30 = 0x00000001;
	else
		dwLoc10_30 = 0x00000000;
	return dwLoc10_30;
}

void fn0041122B()
{
	fn004133D0(dwArg00);
	return;
}

word32 fn00411230(word32 ebp, word32 edi, selector fs, ptr32 ediOut)
{
	word32 edi_6;
	*ediOut = fn00414CD0(ebp, edi, fs, dwArg00);
	return ebp;
}

word32 fn00411235(word32 eax, word32 dwArg04)
{
	word32 ecx_26 = dwArg04;
	if ((dwArg04 & 0x00000003) != 0x00000000)
	{
l0041A18C:
		do
		{
			ecx_26 = ecx_26 + 0x00000001;
			if (Mem0[ecx_26 + 0x00000000:byte] == 0x00)
				return ecx_26 - 0x00000001 - dwArg04;
		} while ((ecx_26 & 0x00000003) != 0x00000000);
l0041A1B0:
		while (true)
		{
			word32 eax_39 = Mem0[ecx_26 + 0x00000000:word32];
			ecx_26 = ecx_26 + 0x00000004;
			if (((eax_39 ^ 0xFFFFFFFF ^ eax_39 + 0x7EFEFEFF) & 0x81010100) == 0x00000000)
				continue;
			word32 eax_48 = Mem0[ecx_26 - 0x00000004:word32];
			byte ah_50 = SLICE(eax_48, byte, 8);
			if ((byte) eax_48 == 0x00)
				return ecx_26 - 0x00000004 - dwArg04;
			if (ah_50 == 0x00)
				return ecx_26 - 0x00000003 - dwArg04;
			if ((eax_48 & 0x00FF0000) == 0x00000000)
				return ecx_26 - 0x00000002 - dwArg04;
			if ((eax_48 & 0xFF000000) == 0x00000000)
				;
		}
	}
	else
		goto l0041A1B0;
fn00411235_exit:
}

word32 fn0041124E(word32 edi, selector fs, ptr32 ebpOut, ptr32 ediOut)
{
	*ebpOut = ebp;
	word32 edi_6;
	return fn0041E610(edi, fs, dwArg00, dwArg04, out edi_6);
}

void fn00411253(word32 edi, selector fs, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10)
{
fn00411253_entry:
l00411253:
l00421300:
	Mem17[fs:0x00000000:word32] = fp - 0x00000014
	word32 ebp_102 = fp - 0x00000004
	word32 esp_103 = fp + 0xFFFFFFA4
	word32 eax_100 = dwArg10
	word32 ecx_35 = Mem17[dwArg10 + 0x00000000:word32]
	branch dwArg04 == dwArg08 l00421569
l00421357:
	word32 dwLoc60_125 = fp - 0x0000004C
	word32 eax_129 = GetCPInfo(dwArg04, fp - 0x0000004C)
	word32 esp_130 = fp + 0xFFFFFFA4
	branch eax_129 == 0x00000000 || dwLoc4C != 0x00000001 l0042138E
	goto l0042136F
l00421369:
l0042136F:
	dwLoc60_125 = fp - 0x0000004C
	eax_129 = GetCPInfo(dwArg08, fp - 0x0000004C)
	esp_130 = fp + 0xFFFFFFA4
	branch eax_129 == 0x00000000 || dwLoc4C != 0x00000001 l0042138E
	goto l00421387
l00421381:
l00421387:
	Mem414[fp - 0x00000028:word32] = 0x00000001
l0042138E:
	branch 0x00000000 == 0x00000000 l004213B4
l00421394:
	branch ecx_35 == 0xFFFFFFFF l004213A2
l0042139A:
	dwLoc2C = ecx_35
	goto l004213B4
l004213A2:
	dwLoc60_125 = dwArg0C
	esp_130 = fp + 0xFFFFFFA4
	dwLoc2C = fn00411235(eax_129, dwArg0C) + 0x00000001
l004213B4:
	branch false l004213E2
l004213BA:
	word32 eax_378 = MultiByteToWideChar(dwArg04, 0x00000001, dwArg0C, ecx_35, 0x00000000, 0x00000000)
	dwLoc60_125 = 0x00000000
	esp_130 = fp + 0xFFFFFFA4
	dwLoc2C = eax_378
	branch eax_378 != 0x00000000 l004213E2
l004213DB:
	goto l00421580
l004213E2:
	Mem160[fp - 0x00000008:word32] = 0x00000000
	fn00414C20((dwLoc2C << 0x00000001) + 0x00000003 & 0xFFFFFFFC, dwLoc60_125)
	word32 esp_175 = esp_130 - 0x00000004
	Mem176[esp_175 + 0x00000000:word32] = dwLoc2C << 0x00000001
	Mem178[esp_175 - 0x00000004:word32] = 0x00000000
	Mem181[esp_175 - 0x00000008:word32] = esp_130
	fn00411195()
	Mem186[fp - 0x00000008:word32] = 0xFFFFFFFF
	word32 esp_184 = esp_175
l0042143E:
	branch esp_130 != 0x00000000 l00421474
l00421444:
	Mem337[esp_175 - 0x00000004:word32] = 0x0000007E
	Mem339[esp_175 - 0x00000008:word32] = 0x00427484
	Mem341[esp_175 - 0x0000000C:word32] = 0x00000002
	Mem344[esp_175 - 0x00000010:word32] = dwLoc2C
	Mem346[esp_175 - 0x00000014:word32] = 0x00000002
	word32 eax_349 = fn00411564(edi, fs, out ebp_102, out edi)
	Mem352[ebp_102 - 0x00000030:word32] = eax_349
	esp_184 = esp_175 + 0xFFFFFFFC
	branch Mem352[ebp_102 - 0x00000030:word32] != 0x00000000 l0042146B
l00421464:
	goto l00421580
l0042146B:
	Mem361[ebp_102 - 0x0000002C:word32] = Mem352[ebp_102 - 0x0000002C:word32] + 0x00000001
l00421474:
	word32 esp_194 = esp_184 - 0x00000004
	Mem195[esp_194 + 0x00000000:word32] = Mem186[ebp_102 - 0x00000028:word32]
	Mem198[esp_194 - 0x00000004:word32] = Mem195[ebp_102 - 0x00000030:word32]
	Mem201[esp_194 - 0x00000008:word32] = Mem198[ebp_102 - 0x0000001C:word32]
	Mem204[esp_194 - 0x0000000C:word32] = Mem201[ebp_102 + 0x00000010:word32]
	Mem206[esp_194 - 0x00000010:word32] = 0x00000001
	Mem209[esp_194 - 0x00000014:word32] = Mem206[ebp_102 + 0x00000008:word32]
	eax_100 = MultiByteToWideChar(Mem209[esp_194 - 0x00000014:UINT], Mem209[esp_194 - 16:DWORD], Mem209[esp_194 - 12:LPCSTR], Mem209[esp_194 - 8:int32], Mem209[esp_194 - 4:LPWSTR], Mem209[esp_194 + 0x00000000:int32])
	esp_103 = esp_194 + 0x00000004
	branch eax_100 == 0x00000000 l00421569
l00421498:
	branch Mem209[ebp_102 + 0x00000018:word32] == 0x00000000 l004214CD
l0042149E:
	Mem218[esp_194 + 0x00000000:word32] = 0x00000000
	Mem220[esp_194 - 0x00000004:word32] = 0x00000000
	Mem223[esp_194 - 0x00000008:word32] = Mem220[ebp_102 + 0x0000001C:word32]
	Mem226[esp_194 - 0x0000000C:word32] = Mem223[ebp_102 + 0x00000018:word32]
	Mem229[esp_194 - 0x00000010:word32] = Mem226[ebp_102 - 0x00000028:word32]
	Mem232[esp_194 - 0x00000014:word32] = Mem229[ebp_102 - 0x00000030:word32]
	Mem234[esp_194 - 0x00000018:word32] = 0x00000000
	Mem237[esp_194 - 0x0000001C:word32] = Mem234[ebp_102 + 0x0000000C:word32]
	eax_100 = WideCharToMultiByte(Mem237[esp_194 - 0x0000001C:UINT], Mem237[esp_194 - 24:DWORD], Mem237[esp_194 - 20:LPCWSTR], Mem237[esp_194 - 16:int32], Mem237[esp_194 - 12:LPSTR], Mem237[esp_194 - 8:int32], Mem237[esp_194 - 4:LPCSTR], Mem237[esp_194 + 0x00000000:LPBOOL])
	esp_103 = esp_194 + 0x00000004
	branch eax_100 == 0x00000000 l004214C8
l004214C2:
	eax_100 = Mem237[ebp_102 + 0x00000018:word32]
	Mem245[ebp_102 - 0x00000020:word32] = eax_100
l004214C8:
	goto l00421569
l004214CD:
	branch Mem209[ebp_102 - 0x00000024:word32] != 0x00000000 l004214F8
l004214D3:
	Mem313[esp_194 + 0x00000000:word32] = 0x00000000
	Mem315[esp_194 - 0x00000004:word32] = 0x00000000
	Mem317[esp_194 - 0x00000008:word32] = 0x00000000
	Mem319[esp_194 - 0x0000000C:word32] = 0x00000000
	Mem322[esp_194 - 0x00000010:word32] = Mem319[ebp_102 - 0x00000028:word32]
	Mem325[esp_194 - 0x00000014:word32] = Mem322[ebp_102 - 0x00000030:word32]
	Mem327[esp_194 - 0x00000018:word32] = 0x00000000
	Mem330[esp_194 - 0x0000001C:word32] = Mem327[ebp_102 + 0x0000000C:word32]
	eax_100 = WideCharToMultiByte(Mem330[esp_194 - 0x0000001C:UINT], Mem330[esp_194 - 24:DWORD], Mem330[esp_194 - 20:LPCWSTR], Mem330[esp_194 - 16:int32], Mem330[esp_194 - 12:LPSTR], Mem330[esp_194 - 8:int32], Mem330[esp_194 - 4:LPCSTR], Mem330[esp_194 + 0x00000000:LPBOOL])
	Mem333[ebp_102 - 0x00000028:word32] = eax_100
	esp_103 = esp_194 + 0x00000004
	branch Mem333[ebp_102 - 0x00000028:word32] == 0x00000000 l00421569
l004214F8:
	word32 esp_250 = esp_103 - 0x00000004
	Mem251[esp_250 + 0x00000000:word32] = 0x000000A1
	Mem253[esp_250 - 0x00000004:word32] = 0x00427484
	Mem255[esp_250 - 0x00000008:word32] = 0x00000002
	Mem258[esp_250 - 0x0000000C:word32] = Mem255[ebp_102 - 0x00000028:word32]
	Mem260[esp_250 - 0x00000010:word32] = 0x00000001
	eax_100 = fn00411564(edi, fs, out ebp_102, out edi)
	Mem266[ebp_102 - 0x00000020:word32] = eax_100
	esp_103 = esp_250
	branch Mem266[ebp_102 - 0x00000020:word32] == 0x00000000 l00421569
l0042151B:
	Mem270[esp_250 - 0x00000004:word32] = 0x00000000
	Mem272[esp_250 - 0x00000008:word32] = 0x00000000
	Mem275[esp_250 - 0x0000000C:word32] = Mem272[ebp_102 - 0x00000028:word32]
	Mem278[esp_250 - 0x00000010:word32] = Mem275[ebp_102 - 0x00000020:word32]
	Mem281[esp_250 - 0x00000014:word32] = Mem278[ebp_102 - 0x00000028:word32]
	Mem284[esp_250 - 0x00000018:word32] = Mem281[ebp_102 - 0x00000030:word32]
	Mem286[esp_250 - 0x0000001C:word32] = 0x00000000
	Mem289[esp_250 - 0x00000020:word32] = Mem286[ebp_102 + 0x0000000C:word32]
	eax_100 = WideCharToMultiByte(Mem289[esp_250 - 0x00000020:UINT], Mem289[esp_250 - 28:DWORD], Mem289[esp_250 - 24:LPCWSTR], Mem289[esp_250 - 20:int32], Mem289[esp_250 - 16:LPSTR], Mem289[esp_250 - 12:int32], Mem289[esp_250 - 8:LPCSTR], Mem289[esp_250 - 4:LPBOOL])
	Mem292[ebp_102 - 0x00000028:word32] = eax_100
	esp_103 = esp_250
	branch Mem292[ebp_102 - 0x00000028:word32] != 0x00000000 l0042155B
l00421544:
	Mem296[esp_250 - 0x00000004:word32] = 0x00000002
	Mem299[esp_250 - 0x00000008:word32] = Mem296[ebp_102 - 0x00000020:word32]
	eax_100 = fn0041141A(eax_100, ebp_102, edi, fs, out ebp_102, out edi)
	Mem306[ebp_102 - 0x00000020:word32] = 0x00000000
	esp_103 = esp_250 + 0xFFFFFFFC
	goto l00421569
l0042155B:
	branch Mem292[ebp_102 - 0x0000001C:word32] == 0xFFFFFFFF l00421569
l00421561:
	eax_100 = Mem292[ebp_102 - 0x00000028:word32]
	Mem311[Mem292[ebp_102 + 0x00000014:word32]:word32] = eax_100
l00421569:
	branch Mem17[ebp_102 - 0x0000002C:word32] == 0x00000000 l0042157D
l0042156F:
	word32 esp_112 = esp_103 - 0x00000004
	Mem113[esp_112 + 0x00000000:word32] = 0x00000002
	Mem116[esp_112 - 0x00000004:word32] = Mem113[ebp_102 - 0x00000030:word32]
	fn0041141A(eax_100, ebp_102, edi, fs, out ebp_102, out edi)
l0042157D:
l00421580:
	Mem73[fs:0x00000000:word32] = Mem17[ebp_102 - 0x00000010:word32]
	word32 ecx_75
	word32 edi_76
	fn00411087(Mem73[ebp_102 - 0x00000034:word32], edi, fs, out ecx_75, out edi_76)
	return
fn00411253_exit:
}

word32 fn00411258(word32 edi, ptr32 ediOut)
{
	word32 edi_4;
	return fn0041A040(edi, dwArg00, out edi_4);
}

word32 fn00411262()
{
	return fn00421E40(dwArg00, wArg04);
}

word32 fn0041127B(word32 ebp, word32 edi, selector fs, word32 dwArg0C, ptr32 ediOut)
{
	word32 ebp_109 = fp - 0x00000004;
	word32 esp_112 = fp - 0x00000030;
	if (dwArg0C == 0x00000000)
	{
		esp_112 = fp - 0x00000030;
		word32 ecx_108;
		if (fn0041119F(fp - 0x00000004, edi, fs, out ecx_108, out ebp_109, out edi) == 0x00000001)
			int3();
	}
	Mem29[Mem0[ebp_109 - 0x00000008:word32] + 0x00000004:word32] = Mem0[ebp_109 + 0x0000000C:word32];
	Mem31[Mem29[ebp_109 - 0x00000008:word32] + 0x0000000C:word32] = 0x00000042;
	Mem34[Mem31[ebp_109 - 0x00000008:word32] + 0x00000008:word32] = Mem31[ebp_109 + 0x00000008:word32];
	Mem37[Mem34[ebp_109 - 0x00000008:word32]:word32] = Mem34[ebp_109 + 0x00000008:word32];
	word32 esp_39 = esp_112 - 0x00000004;
	Mem40[esp_39 + 0x00000000:word32] = Mem37[ebp_109 + 0x00000014:word32];
	Mem43[esp_39 - 0x00000004:word32] = Mem40[ebp_109 + 0x00000010:word32];
	Mem46[esp_39 - 0x00000008:word32] = Mem43[ebp_109 - 0x00000008:word32];
	word32 ebp_48;
	word32 edi_49;
	word32 eax_50 = fn0041134D(ebp_109, edi, fs, out ebp_48, out edi_49);
	Mem53[ebp_48 - 0x00000004:word32] = eax_50;
	if (Mem53[ebp_48 + 0x00000008:word32] != 0x00000000)
	{
		Mem71[Mem53[ebp_48 - 0x00000008:word32] + 0x00000004:word32] = Mem53[Mem53[ebp_48 - 0x00000008:word32] + 0x00000004:word32] - 0x00000001;
		if (Mem71[Mem71[ebp_48 - 0x00000008:word32] + 0x00000004:word32] >= 0x00000000)
		{
			Mem77[Mem71[Mem71[ebp_48 - 0x00000008:word32]:word32]:byte] = 0x00;
			Mem80[ebp_48 - 0x0000002C:word32] = 0x00000000;
			Mem86[Mem80[ebp_48 - 0x00000008:word32]:word32] = Mem80[Mem80[ebp_48 - 0x00000008:word32]:word32] + 0x00000001;
		}
		else
		{
			Mem89[esp_39 - 0x00000004:word32] = Mem71[ebp_48 - 0x00000008:word32];
			Mem91[esp_39 - 0x00000008:word32] = 0x00000000;
			word32 edi_93;
			Mem97[ebp_48 - 0x0000002C:word32] = fn004114AB(edi_49, fs, dwArg04, out edi_93);
		}
	}
	return Mem53[ebp_48 - 0x00000004:word32];
}

word32 fn0041128A(word32 ebp, word32 edi, selector fs, ptr32 ediOut)
{
	*ediOut = edi;
	word32 ebp_101 = fp - 0x00000004;
	word32 esp_115 = fp - 0x0000000C;
	if (Mem0[0x00429858:word32] >u 0x00000000)
		if (Mem0[0x00429848:word32] == Mem0[0x00429858:word32] - 0x00000001)
		{
			esp_115 = fp + 0xFFFFFFF0;
			if (fn00411096(fp - 0x00000004, edi, fs, out ebp_101, out edi) == 0x00000000)
			{
				Mem128[fp + 0xFFFFFFEC:word32] = 0x004260EC;
				Mem130[fp + 0xFFFFFFE8:word32] = 0x00000000;
				Mem132[fp + 0xFFFFFFE4:word32] = 0x000004FB;
				Mem134[fp + 0xFFFFFFE0:word32] = 0x004260E0;
				Mem136[fp + 0xFFFFFFDC:word32] = 0x00000002;
				esp_115 = fp + 0xFFFFFFEC;
				word32 ecx_137;
				if (fn0041119F(ebp_101, edi, fs, out ecx_137, out ebp_101, out edi) == 0x00000001)
					int3();
			}
			Mem126[0x00429848:word32] = 0x00000000;
		}
		else
			Mem148[0x00429848:word32] = Mem0[0x00429848:word32] + 0x00000001;
	word32 esp_20 = esp_115 - 0x00000004;
	Mem21[esp_20 + 0x00000000:word32] = Mem0[ebp_101 + 0x00000008:word32];
	word32 esp_105 = esp_20 + 0x00000004;
	if (fn004111EA(dwArg00) == 0x00000000)
	{
		Mem91[esp_20 + 0x00000000:word32] = 0x004261D4;
		Mem93[esp_20 - 0x00000004:word32] = 0x00000000;
		Mem95[esp_20 - 0x00000008:word32] = 0x0000050B;
		Mem97[esp_20 - 0x0000000C:word32] = 0x004260E0;
		Mem99[esp_20 - 0x00000010:word32] = 0x00000002;
		esp_105 = esp_20;
		word32 ecx_100;
		if (fn0041119F(ebp_101, edi, fs, out ecx_100, out ebp_101, out edi) == 0x00000001)
			int3();
	}
	Mem33[ebp_101 - 0x00000008:word32] = Mem21[ebp_101 + 0x00000008:word32] - 0x00000020;
	if ((Mem33[Mem33[ebp_101 - 0x00000008:word32] + 0x00000014:word32] & 0x0000FFFF) != 0x00000004 && (Mem33[Mem33[ebp_101 - 0x00000008:word32] + 0x00000014:word32] != 0x00000001 && ((Mem33[Mem33[ebp_101 - 0x00000008:word32] + 0x00000014:word32] & 0x0000FFFF) != 0x00000002 && Mem33[Mem33[ebp_101 - 0x00000008:word32] + 0x00000014:word32] != 0x00000003)))
	{
		word32 esp_71 = esp_105 - 0x00000004;
		Mem72[esp_71 + 0x00000000:word32] = 0x00426410;
		Mem74[esp_71 - 0x00000004:word32] = 0x00000000;
		Mem76[esp_71 - 0x00000008:word32] = 0x00000511;
		Mem78[esp_71 - 0x0000000C:word32] = 0x004260E0;
		Mem80[esp_71 - 0x00000010:word32] = 0x00000002;
		word32 ecx_82;
		word32 edi_84;
		if (fn0041119F(ebp_101, edi, fs, out ecx_82, out ebp_101, out edi_84) == 0x00000001)
			int3();
	}
	if (Mem33[Mem33[ebp_101 - 0x00000008:word32] + 0x00000014:word32] == 0x00000002 && Mem33[ebp_101 + 0x0000000C:word32] == 0x00000001)
		Mem59[ebp_101 + 0x0000000C:word32] = 0x00000002;
	Mem51[ebp_101 - 0x00000004:word32] = Mem33[Mem33[ebp_101 - 0x00000008:word32] + 0x00000010:word32];
	return Mem51[ebp_101 - 0x00000004:word32];
}

word32 fn00411294(word32 edi, selector fs, word32 dwArg04)
{
	word32 ebp_108 = fp - 0x00000004;
	word32 esp_109 = fp - 0x0000000C;
	if (dwArg04 == 0x00000000)
	{
		word32 ecx_46;
		word32 ebp_47;
		if (fn0041119F(fp - 0x00000004, edi, fs, out ecx_46, out ebp_47, out edi) == 0x00000001)
			int3();
	}
	else
	{
		Mem61[dwArg04 + 0x00000000:word32] = Mem0[0x00429850:word32];
		word32 dwLoc08_62 = 0x00000000;
		while (dwLoc08_62 < 0x00000005)
		{
			(dwArg04 + 0x00000018)[dwLoc08_62 * 0x00000004] = 0x00000000;
			(dwArg04 + 0x00000004)[dwLoc08_62 * 0x00000004] = 0x00000000;
			dwLoc08_62 = dwLoc08_62 + 0x00000001;
		}
		while (Mem61[ebp_108 - 0x00000008:word32] != 0x00000000)
		{
			if ((Mem61[Mem61[ebp_108 - 0x00000008:word32] + 0x00000014:word32] & 0x0000FFFF) >= 0x00000000 && (Mem61[Mem61[ebp_108 - 0x00000008:word32] + 0x00000014:word32] & 0x0000FFFF) < 0x00000005)
			{
				(Mem61[ebp_108 + 0x00000008:word32] + 0x00000004)[(Mem61[Mem61[ebp_108 - 0x00000008:word32] + 0x00000014:word32] & 0x0000FFFF) * 0x00000004] = (Mem61[ebp_108 + 0x00000008:word32] + 0x00000004)[(Mem61[Mem61[ebp_108 - 0x00000008:word32] + 0x00000014:word32] & 0x0000FFFF) * 0x00000004] + 0x00000001;
				(Mem149[ebp_108 + 0x00000008:word32] + 0x00000018)[(Mem149[Mem149[ebp_108 - 0x00000008:word32] + 0x00000014:word32] & 0x0000FFFF) * 0x00000004] = (Mem149[ebp_108 + 0x00000008:word32] + 0x00000018)[(Mem149[Mem149[ebp_108 - 0x00000008:word32] + 0x00000014:word32] & 0x0000FFFF) * 0x00000004] + Mem149[Mem149[ebp_108 - 0x00000008:word32] + 0x00000010:word32];
			}
			else
			{
				word32 esp_115 = esp_109 - 0x00000004;
				Mem116[esp_115 + 0x00000000:word32] = Mem61[ebp_108 - 0x00000008:word32];
				Mem118[esp_115 - 0x00000004:word32] = 0x00426628;
				Mem120[esp_115 - 0x00000008:word32] = 0x00000000;
				Mem122[esp_115 - 0x0000000C:word32] = 0x00000000;
				Mem124[esp_115 - 0x00000010:word32] = 0x00000000;
				Mem126[esp_115 - 0x00000014:word32] = 0x00000000;
				esp_109 = esp_115 + 0x00000004;
				word32 ecx_127;
				if (fn0041119F(ebp_108, edi, fs, out ecx_127, out ebp_108, out edi) == 0x00000001)
					int3();
			}
			Mem112[ebp_108 - 0x00000008:word32] = Mem61[Mem61[ebp_108 - 0x00000008:word32]:word32];
		}
		Mem166[Mem61[ebp_108 + 0x00000008:word32] + 0x0000002C:word32] = Mem61[0x0042984C:word32];
		Mem169[Mem166[ebp_108 + 0x00000008:word32] + 0x00000030:word32] = Mem166[0x00429840:word32];
	}
	return edi;
}

void fn004112AD(word32 ebp, selector fs, word32 dwArg04, word32 dwArg08)
{
	word32 eax_10 = Mem0[0x00428B68:word32];
	if (eax_10 != 0xFFFFFFFF)
	{
		word32 eax_48 = dwArg08;
		do
		{
			eax_48 = eax_167 + 0x00000001;
			word32 eax_167 = eax_48;
		} while (Mem0[eax_167 + 0x00000000:byte] != 0x00);
		fn00414C20(eax_48 - (dwArg08 + 0x00000001) + 0x00000053 & 0xFFFFFFFC, dwLoc18);
		word32 ecx_66 = 0x00000007;
		word32 esi_68 = 0x004255A8;
		word32 edi_69 = fp - 0x00000014;
		word32 eax_70 = dwArg08;
		while (ecx_66 != 0x00000000)
		{
			Mem77[edi_69 + 0x00000000:word32] = Mem0[esi_68 + 0x00000000:word32];
			esi_68 = esi_68 + 0x00000004;
			edi_69 = edi_69 + 0x00000004;
			ecx_66 = ecx_66 - 0x00000001;
		}
		word32 esi_106 = dwArg08;
		do
		{
			eax_70 = eax_168 + 0x00000001;
			word32 eax_168 = eax_70;
		} while (Mem0[eax_168 + 0x00000000:byte] != 0x00);
		word32 eax_91 = eax_70 - dwArg08;
		word32 edi_107 = fp - 0x00000015 + 0x00000001;
		do
		{
			edi_107 = edi_169 + 0x00000001;
			word32 edi_169 = edi_107;
		} while (Mem0[edi_169 + 0x00000000:byte] != 0x00);
		word32 ecx_103 = eax_91 >>u 0x00000002;
		while (ecx_103 != 0x00000000)
		{
			Mem111[edi_107 + 0x00000000:word32] = Mem0[esi_106 + 0x00000000:word32];
			esi_106 = esi_106 + 0x00000004;
			edi_107 = edi_107 + 0x00000004;
			ecx_103 = ecx_103 - 0x00000001;
		}
		word32 ecx_117 = eax_91 & 0x00000003;
		while (ecx_117 != 0x00000000)
		{
			Mem126[edi_107 + 0x00000000:byte] = Mem0[esi_106 + 0x00000000:byte];
			esi_106 = esi_106 + 0x00000001;
			edi_107 = edi_107 + 0x00000001;
			ecx_117 = ecx_117 - 0x00000001;
		}
		word32 edi_132 = fp - 0x00000015 + 0x00000001;
		do
		{
			edi_132 = edi_170 + 0x00000001;
			word32 edi_170 = edi_132;
		} while (Mem0[edi_170 + 0x00000000:byte] != 0x00);
		Mem142[edi_132 + 0x00000000:word32] = Mem0[0x00425594:word32];
		Mem144[edi_132 + 0x00000004:word32] = Mem142[0x00425598:word32];
		Mem146[edi_132 + 0x00000008:word32] = Mem144[0x0042559C:word32];
		word32 ecx_147 = Mem146[0x004255A0:word32];
		Mem149[fp - 0x00000018:word32] = fp - 0x00000014;
		Mem152[edi_132 + 0x0000000C:word32] = ecx_147;
		byte al_154 = Mem152[0x004255A4:byte];
		Mem156[fp - 0x0000001C:word32] = 0x00000002;
		Mem158[fp - 0x00000020:word32] = eax_10;
		Mem160[fp - 0x00000024:word32] = dwArg04;
		Mem161[edi_132 + 0x00000010:byte] = al_154;
		fn00412930(fp - 0x00000004, fs, dwArg00, dwArg04, dwArg08, dwArg0C);
	}
	return;
}

word32 fn004112CB()
{
	return fn0041B5E0();
}

word32 fn004112F8(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	word32 dwLoc08_26;
	if (dwArg04 != 0x00000000 && (IsBadReadPtr(dwArg04, dwArg08) == 0x00000000 && (dwArg0C == 0x00000000 || IsBadWritePtr(dwArg04, dwArg08) == 0x00000000)))
		dwLoc08_26 = 0x00000001;
	else
		dwLoc08_26 = 0x00000000;
	return dwLoc08_26;
}

void fn004112FD(word32 edx, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10)
{
	if (dwArg04 <u Mem0[0x0042AF94:word32] && ((int32) (0x0042AFE0[(dwArg04 >> 0x00000005) * 0x00000004] + 0x00000004)[(dwArg04 & 0x0000001F) * 0x08] & 0x00000001) != 0x00000000)
	{
		word32 edx_72;
		word32 eax_73 = fn00411375(dwArg04, out edx_72);
		if (eax_73 == 0xFFFFFFFF)
			Mem78[0x0042962C:word32] = 0x00000009;
		else if (SetFilePointer(eax_73, dwArg08, fp - 0x00000008, dwArg10) == 0xFFFFFFFF)
		{
			word32 eax_122 = GetLastError();
			if (eax_122 != 0x00000000)
			{
				word32 edx_129;
				fn00411113(eax_122, out edx_129);
			}
			else
			{
l004227D2:
				(0x0042AFE0[(dwArg04 >> 0x00000005) * 0x00000004] + 0x00000004)[(dwArg04 & 0x0000001F) * 0x08] = (byte) ((int32) (0x0042AFE0[(dwArg04 >> 0x00000005) * 0x00000004] + 0x00000004)[(dwArg04 & 0x0000001F) * 0x08] & 0xFFFFFFFD);
			}
		}
		else
			goto l004227D2;
	}
	else
	{
		Mem38[0x0042962C:word32] = 0x00000009;
		Mem39[0x00429630:word32] = 0x00000000;
	}
	return;
}

void fn00411334(word32 ebp, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, word32 dwArg14)
{
	fn00414C20(0x00000400, dwLoc48);
	Mem29[dwArg10 + 0x00000000:word32] = 0x00000000;
	Mem31[dwArg08 + 0x00000000:byte] = 0x00;
	Mem33[fp - 0x00000048:word32] = dwArg04;
	Mem35[dwArg14 + 0x00000000:word32] = 0x00000000;
	word32 eax_37 = fn004160C0(fp - 0x00000004, dwArg00);
	word32 esp_108 = fp - 0x00000044;
	if (eax_37 != 0x00000000)
	{
		word32 eax_98 = Mem35[0x00429838:word32];
		word32 esi_100 = dwArg04 - Mem35[eax_37 + 0x00000004:word32];
		Mem104[dwArg14 + 0x00000000:word32] = Mem35[eax_37 + 0x00000018:word32];
		Mem105[fp - 0x00000020:word32] = 0x00000001;
		if (eax_98 != 0x00000000)
			goto l00415D81;
		else if (Mem105[0x004297E0:word32] == 0x00000000)
		{
			word32 eax_496 = fn00416570();
			Mem500[0x004297E0:word32] = eax_496;
			if (eax_496 != 0x00000000)
			{
				Mem503[fp - 0x00000048:word32] = 0x00425E80;
				Mem505[fp - 0x0000004C:word32] = eax_496;
				word32 eax_506 = GetProcAddress(Mem505[fp - 0x0000004C:HMODULE], Mem505[fp - 72:LPCSTR]);
				Mem511[0x004297F0:word32] = eax_506;
				if (eax_506 != 0x00000000)
				{
					word32 eax_527 = Mem511[0x004297E0:word32];
					Mem529[fp - 0x00000048:word32] = 0x00425E70;
					Mem531[fp - 0x0000004C:word32] = eax_527;
					word32 eax_532 = GetProcAddress(Mem531[fp - 0x0000004C:HMODULE], Mem531[fp - 72:LPCSTR]);
					Mem537[0x004297F4:word32] = eax_532;
					if (eax_532 != 0x00000000)
					{
						word32 ecx_538 = Mem537[0x004297E0:word32];
						Mem540[fp - 0x00000048:word32] = 0x00425E58;
						Mem542[fp - 0x0000004C:word32] = ecx_538;
						word32 eax_543 = GetProcAddress(Mem542[fp - 0x0000004C:HMODULE], Mem542[fp - 72:LPCSTR]);
						Mem548[0x004297F8:word32] = eax_543;
						if (eax_543 != 0x00000000)
						{
							word32 edx_549 = Mem548[0x004297E0:word32];
							Mem551[fp - 0x00000048:word32] = 0x00425E48;
							Mem553[fp - 0x0000004C:word32] = edx_549;
							word32 eax_554 = GetProcAddress(Mem553[fp - 0x0000004C:HMODULE], Mem553[fp - 72:LPCSTR]);
							Mem559[0x004297FC:word32] = eax_554;
							if (eax_554 != 0x00000000)
							{
								word32 eax_560 = Mem559[0x004297E0:word32];
								Mem562[fp - 0x00000048:word32] = 0x00425E3C;
								Mem564[fp - 0x0000004C:word32] = eax_560;
								word32 eax_565 = GetProcAddress(Mem564[fp - 0x0000004C:HMODULE], Mem564[fp - 72:LPCSTR]);
								Mem570[0x00429800:word32] = eax_565;
								if (eax_565 != 0x00000000)
								{
									word32 ecx_571 = Mem570[0x004297E0:word32];
									Mem573[fp - 0x00000048:word32] = 0x00425E30;
									Mem575[fp - 0x0000004C:word32] = ecx_571;
									word32 eax_576 = GetProcAddress(Mem575[fp - 0x0000004C:HMODULE], Mem575[fp - 72:LPCSTR]);
									Mem581[0x00429804:word32] = eax_576;
									if (eax_576 != 0x00000000)
									{
										word32 edx_582 = Mem581[0x004297E0:word32];
										Mem584[fp - 0x00000048:word32] = 0x00425E24;
										Mem586[fp - 0x0000004C:word32] = edx_582;
										word32 eax_587 = GetProcAddress(Mem586[fp - 0x0000004C:HMODULE], Mem586[fp - 72:LPCSTR]);
										Mem592[0x00429808:word32] = eax_587;
										esp_108 = fp - 0x00000044;
										if (eax_587 == 0x00000000)
										{
l00415D6B:
											return;
										}
										else
										{
											Mem593[0x00429838:word32] = 0x00000001;
l00415D81:
											word16 dx_111 = Mem105[Mem105[eax_37 + 0x00000010:word32] + 0x00000006:word16];
											word32 edx_112 = (word32) dx_111;
											word32 ebx_114 = 0x00000001;
											word16 bx_115 = 0x0000;
											if (true)
											{
												word32 ecx_120 = Mem105[eax_37 + 0x00000014:word32];
												do
												{
													word32 eax_126 = (word32) bx_115;
													if ((ecx_120 + 0x0000000C)[eax_126 * 0x00000028] <u esi_100)
													{
														word32 eax_150 = eax_126 * 0x00000028 + Mem105[eax_37 + 0x00000014:word32];
														if (esi_100 - Mem105[eax_150 + 0x0000000C:word32] <u Mem105[eax_150 + 0x00000010:word32])
														{
															word32 esi_160 = esi_100 - (ecx_120 + 0x0000000C)[((word32) bx_115 * 0x00000005) * 0x00000008];
															if (esi_160 != 0xFFFFFFFF)
															{
																fn00414C20(0x00000104, ebp);
																word32 esp_168 = esp_108 - 0x00000004;
																Mem169[esp_168 + 0x00000000:word32] = fp - 0x0000001C;
																Mem172[esp_168 - 0x00000004:word32] = fp - 0x0000002C;
																Mem176[esp_168 - 0x00000008:word32] = fp - 0x00000030;
																word32 ecx_177 = Mem176[eax_37 + 0x00000018:word32];
																Mem179[esp_168 - 0x0000000C:word32] = esp_108;
																Mem181[esp_168 - 0x00000010:word32] = fp - 0x00000044;
																Mem184[esp_168 - 0x00000014:word32] = fp - 0x00000034;
																Mem186[esp_168 - 0x00000018:word32] = 0x004250EC;
																Mem188[esp_168 - 0x0000001C:word32] = ecx_177;
																Mem188[0x004297F0:word32]();
																if ((fp - 0x00000034 & fp - 0x00000034) != 0x00000000)
																{
																	Mem197[esp_168 + 0x00000000:word32] = fp - 0x00000018;
																	Mem199[esp_168 - 0x00000004:word32] = 0x00000000;
																	Mem201[esp_168 - 0x00000008:word32] = 0x00425E20;
																	Mem203[esp_168 - 0x0000000C:word32] = dwLoc1C;
																	Mem203[0x004297F4:word32]();
																	word32 esp_204 = esp_168 + 0x00000004;
																	if (dwLoc1C != 0x00000000)
																	{
																		Mem220[esp_168 + 0x00000000:word32] = fp - 0x00000008;
																		Mem223[esp_168 - 0x00000004:word32] = fp - 0x00000038;
																		Mem228[esp_168 - 0x00000008:word32] = fp + 0x00000016;
																		Mem231[esp_168 - 0x0000000C:word32] = fp - 0x0000000C;
																		Mem233[esp_168 - 0x00000010:word32] = esi_160;
																		word32 ebx_234 = ebx_114 + 0x00000000;
																		Mem237[esp_168 - 0x00000014:word32] = ebx_234;
																		Mem239[esp_168 - 0x00000018:word32] = dwLoc18;
																		Mem239[0x004297F8:word32]();
																		word32 esp_240 = esp_168 + 0x00000004;
																		if ((fp + 0x00000016 & fp + 0x00000016) != 0x00000000)
																		{
																			Mem258[esp_168 + 0x00000000:word32] = fp - 0x00000008;
																			Mem260[esp_168 - 0x00000004:word32] = 0x00000000;
																			Mem262[esp_168 - 0x00000008:word32] = dwLoc0C;
																			Mem262[0x004297FC:word32]();
																			word32 esp_263 = esp_168 + 0x00000004;
																			if ((fp - 0x00000008 & fp - 0x00000008) != 0x00000000 && dwLoc08 != 0x00000000)
																			{
																				Mem283[esp_168 + 0x00000000:word32] = dwLoc08;
																				Mem285[esp_168 - 0x00000004:word32] = 0x00000000;
																				Mem288[esp_168 - 0x00000008:word32] = GetProcessHeap();
																				word32 eax_289 = HeapAlloc(Mem288[esp_168 - 0x00000008:HANDLE], Mem288[esp_168 - 4:DWORD], Mem288[esp_168 + 0x00000000:SIZE_T]);
																				Mem295[esp_168 + 0x00000000:word32] = fp - 0x00000008;
																				Mem297[esp_168 - 0x00000004:word32] = eax_289;
																				Mem299[esp_168 - 0x00000008:word32] = dwLoc0C;
																				word32 edi_291 = eax_289;
																				Mem299[0x004297FC:word32]();
																				esp_263 = esp_168 + 0x00000004;
																				if (dwLoc0C != 0x00000000)
																				{
																					word32 ebx_306 = 0x00000000;
																					word32 dwLoc10_310 = 0x00000000;
																					if ((word32) Mem299[eax_289 + 0x00000000:word16] > 0x00000000)
																						do
																						{
																							word32 eax_345 = (eax_289 + 0x00000004)[ebx_306 * 0x00000004];
																							word32 edx_346 = (word32) Mem299[eax_345 + eax_289:word16];
																							word32 eax_349 = eax_345 + eax_289;
																							word32 esi_350 = eax_349 + 0x00000004 + edx_346 * 0x00000004;
																							word32 ecx_351 = esi_350 + edx_346 * 0x00000008;
																							word32 ecx_353 = 0x00000000;
																							if (edx_346 > 0x00000000)
																							{
																								do
																								{
																									if (esi_350[ecx_353 * 0x00000008] <=u esi_160 && esi_160 <=u (esi_350 + 0x00000004)[ecx_353 * 0x00000008])
																									{
																										word32 eax_381 = (eax_349 + 0x00000004)[ecx_353 * 0x00000004];
																										word32 esi_382 = (word32) Mem299[eax_381 + 0x00000002 + eax_289:word16];
																										word32 eax_383 = eax_381 + eax_289;
																										word32 edx_384 = eax_383 + 0x00000004 + esi_382 * 0x00000004;
																										word32 edi_386 = eax_289 | 0xFFFFFFFF;
																										word32 edx_387 = 0x00000000;
																										word32 dwLoc10_392 = eax_289 | 0xFFFFFFFF;
																										if (esi_382 > 0x00000000)
																										{
																											do
																											{
																												word32 ecx_413 = esi_160 - (eax_383 + 0x00000004)[edx_387 * 0x00000004];
																												if (ecx_413 <u edi_386)
																												{
																													dwLoc10_392 = edx_387;
																													edi_386 = ecx_413;
																												}
																												edx_387 = edx_387 + 0x00000001;
																											} while (edx_387 < esi_382);
																											if (dwLoc10_392 >= 0x00000000)
																											{
																												Mem432[dwArg10 + 0x00000000:word32] = (word32) edx_384[dwLoc10_392 * 0x0002];
																												word32 edi_431 = dwArg0C;
																												word32 eax_433 = ecx_351 + 0x00000001;
																												word32 ecx_435 = 0x00000000;
																												if (Mem432[ecx_351 + 0x00000000:byte] != 0x00)
																												{
																													word32 esi_471 = dwArg08 - ecx_351;
																													edi_431 = dwArg0C;
																													do
																													{
																														if (ecx_435 >= dwArg0C)
																															goto l00415F86;
																														Mem483[esi_471 + eax_594:byte] = Mem432[eax_594 + 0x00000000:byte];
																														ecx_435 = ecx_435 + 0x00000001;
																														eax_433 = eax_594 + 0x00000001;
																														word32 eax_594 = eax_433;
																													} while (Mem483[eax_594 + 0x00000000:byte] != 0x00);
l00415F82:
																													if (ecx_435 >= edi_431)
																														ecx_435 = edi_431 - 0x00000001;
																												}
																												else
																													goto l00415F82;
																												Mem449[ecx_435 + dwArg08:byte] = 0x00;
																											}
																										}
																										edi_291 = eax_289;
																										goto l00415F93;
																									}
																									ecx_353 = ecx_353 + 0x00000001;
																								} while (ecx_353 < edx_346);
																								ebx_306 = dwLoc10_310;
																								goto l00415F06;
																							}
l00415F06:
																							ebx_306 = ebx_306 + 0x00000001;
																							dwLoc10_310 = ebx_306;
																						} while (ebx_306 < (word32) Mem299[eax_289 + 0x00000000:word16]);
l00415F93:
																					word32 esp_329 = esp_263 - 0x00000004;
																					Mem330[esp_329 + 0x00000000:word32] = edi_291;
																					Mem332[esp_329 - 0x00000004:word32] = 0x00000000;
																					Mem335[esp_329 - 0x00000008:word32] = GetProcessHeap();
																					HeapFree(Mem335[esp_329 - 0x00000008:HANDLE], Mem335[esp_329 - 4:DWORD], Mem335[esp_329 + 0x00000000:LPVOID]);
																					esp_263 = esp_329 + 0x00000004;
																				}
																			}
																			word32 esp_273 = esp_263 - 0x00000004;
																			Mem274[esp_273 + 0x00000000:word32] = dwLoc0C;
																			Mem274[0x00429800:word32]();
																			esp_240 = esp_273 + 0x00000004;
																		}
																		word32 esp_250 = esp_240 - 0x00000004;
																		Mem251[esp_250 + 0x00000000:word32] = dwLoc18;
																		Mem251[0x00429804:word32]();
																		esp_204 = esp_250 + 0x00000004;
																	}
																	word32 esp_214 = esp_204 - 0x00000004;
																	Mem215[esp_214 + 0x00000000:word32] = dwLoc1C;
																	Mem215[0x00429808:word32]();
																}
															}
														}
														dx_111 = (word16) edx_112;
														goto l00415DC1;
													}
l00415DC1:
													ebx_114 = ebx_114 + 0x00000001;
													bx_115 = (word16) ebx_114;
												} while (bx_115 <u dx_111);
												return;
											}
											else
											{
l00415FCA:
												return;
											}
										}
									}
									else
										goto l00415D6B;
								}
								else
									goto l00415D6B;
							}
							else
								goto l00415D6B;
						}
						else
							goto l00415D6B;
					}
					else
						goto l00415D6B;
				}
				else
					goto l00415D6B;
			}
			else
				goto l00415FCA;
		}
		else
			goto l00415FCA;
	}
	else
		goto l00415FCA;
}

word32 fn0041133E(selector fs, word32 dwArg04, word32 dwArg08)
{
	word32 edi_17 = fp + 0xFFFFFF30;
	word32 ecx_18 = 0x00000033;
	while (ecx_18 != 0x00000000)
	{
		Mem22[edi_17 + 0x00000000:word32] = 0xCCCCCCCC;
		edi_17 = edi_17 + 0x00000004;
		ecx_18 = ecx_18 - 0x00000001;
	}
	word32 eax_102;
	Mem27[0x004295CC:word32] = dwArg04;
	word32 eax_54 = CreateWindowExA(0x00000000, 0x00429500, 0x00429568, 0x00CF0000, 0x80000000, 0x00000000, 0x80000000, 0x00000000, 0x00000000, 0x00000000, dwArg04, 0x00000000);
	fn00411424(fs);
	if (eax_54 == 0x00000000)
		eax_102 = 0x00000000;
	else
	{
		Mem89[fp + 0xFFFFFF18:word32] = eax_54;
		ShowWindow(0x00000000, dwArg08);
		fn00411424(fs);
		Mem97[fp + 0xFFFFFF18:word32] = eax_54;
		UpdateWindow(0x00000000);
		fn00411424(fs);
		eax_102 = 0x00000001;
	}
	fn00411424(fs);
	return eax_102;
}

void fn00411343(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
fn00411343_entry:
l00411343:
l0041F170:
	word32 esi_13 = dwArg08
	word32 edi_17 = dwArg04
	word32 eax_20 = dwArg0C + dwArg08
	branch dwArg04 <=u dwArg08 || dwArg04 >=u eax_20 l0041F190
	goto l0041F30C
l0041F188:
l0041F190:
	branch (dwArg04 & 0x00000003) != 0x00000000 l0041F1AC
l0041F198:
	word32 ecx_39 = dwArg0C >>u 0x00000002
	branch dwArg0C >>u 0x00000002 <u 0x00000008 l0041F1CC
l0041F1A3:
	branch ecx_39 == 0x00000000 l0041F1A5
l0041F1A3_1:
	Mem57[edi_17 + 0x00000000:word32] = Mem0[esi_13 + 0x00000000:word32]
	esi_13 = esi_13 + 0x00000004
	edi_17 = edi_17 + 0x00000004
	ecx_39 = ecx_39 - 0x00000001
	goto l0041F1A3
l0041F1A5:
	switch (dwArg0C & 0x00000003) { l0041F2CC }
	goto l0041F2CC
l0041F1AC:
	branch dwArg0C <u 0x00000004 l0041F1C4
l0041F1B8:
	switch (dwArg04 & 0x00000003) { }
l0041F1C4:
	switch (dwArg0C - 0x00000004) { }
l0041F1CC:
	switch (dwArg0C >>u 0x00000002) { l0041F2B3 }
l0041F2B3:
	switch (dwArg0C & 0x00000003) { l0041F2CC }
l0041F2CC:
	return
l0041F30C:
	word32 esi_71 = dwArg0C - 0x00000004 + dwArg08
	word32 edi_72 = dwArg0C - 0x00000004 + dwArg04
	branch (edi_72 & 0x00000003) != 0x00000000 l0041F340
l0041F31C:
	word32 ecx_100 = dwArg0C >>u 0x00000002
	branch dwArg0C >>u 0x00000002 <u 0x00000008 l0041F334
l0041F327:
l0041F328:
	branch ecx_100 == 0x00000000 l0041F32A
l0041F328_1:
	Mem97[edi_72 + 0x00000000:word32] = Mem0[esi_71 + 0x00000000:word32]
	esi_71 = esi_71 - 0x00000004
	edi_72 = edi_72 - 0x00000004
	ecx_100 = ecx_100 - 0x00000001
	goto l0041F328
l0041F32A:
	switch (dwArg0C & 0x00000003) { l0041F468 }
	goto l0041F468
l0041F334:
l0041F340:
	branch dwArg0C <u 0x00000004 l0041F358
l0041F34C:
	switch (edi_72 & 0x00000003) { }
l0041F358:
	switch (dwArg0C) { l0041F468 }
l0041F468:
	return
fn00411343_exit:
}

word32 fn0041134D(word32 ebp, word32 edi, selector fs, ptr32 ebpOut, ptr32 ediOut)
{
	*ebpOut = ebp;
	word32 edi_5;
	return fn0041FD80(ebp, edi, fs, out edi_5);
}

void fn00411352(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
fn00411352_entry:
l00411352:
l0041A230:
	word32 esi_13 = dwArg08
	word32 edi_17 = dwArg04
	word32 eax_20 = dwArg0C + dwArg08
	branch dwArg04 <=u dwArg08 || dwArg04 >=u eax_20 l0041A250
	goto l0041A3CC
l0041A248:
l0041A250:
	branch (dwArg04 & 0x00000003) != 0x00000000 l0041A26C
l0041A258:
	word32 ecx_39 = dwArg0C >>u 0x00000002
	branch dwArg0C >>u 0x00000002 <u 0x00000008 l0041A28C
l0041A263:
	branch ecx_39 == 0x00000000 l0041A265
l0041A263_1:
	Mem57[edi_17 + 0x00000000:word32] = Mem0[esi_13 + 0x00000000:word32]
	esi_13 = esi_13 + 0x00000004
	edi_17 = edi_17 + 0x00000004
	ecx_39 = ecx_39 - 0x00000001
	goto l0041A263
l0041A265:
	switch (dwArg0C & 0x00000003) { l0041A38C }
	goto l0041A38C
l0041A26C:
	branch dwArg0C <u 0x00000004 l0041A284
l0041A278:
	switch (dwArg04 & 0x00000003) { }
l0041A284:
	switch (dwArg0C - 0x00000004) { }
l0041A28C:
	switch (dwArg0C >>u 0x00000002) { l0041A373 }
l0041A373:
	switch (dwArg0C & 0x00000003) { l0041A38C }
l0041A38C:
	return
l0041A3CC:
	word32 esi_71 = dwArg0C - 0x00000004 + dwArg08
	word32 edi_72 = dwArg0C - 0x00000004 + dwArg04
	branch (edi_72 & 0x00000003) != 0x00000000 l0041A400
l0041A3DC:
	word32 ecx_100 = dwArg0C >>u 0x00000002
	branch dwArg0C >>u 0x00000002 <u 0x00000008 l0041A3F4
l0041A3E7:
l0041A3E8:
	branch ecx_100 == 0x00000000 l0041A3EA
l0041A3E8_1:
	Mem97[edi_72 + 0x00000000:word32] = Mem0[esi_71 + 0x00000000:word32]
	esi_71 = esi_71 - 0x00000004
	edi_72 = edi_72 - 0x00000004
	ecx_100 = ecx_100 - 0x00000001
	goto l0041A3E8
l0041A3EA:
	switch (dwArg0C & 0x00000003) { l0041A528 }
	goto l0041A528
l0041A3F4:
l0041A400:
	branch dwArg0C <u 0x00000004 l0041A418
l0041A40C:
	switch (edi_72 & 0x00000003) { }
l0041A418:
	switch (dwArg0C) { l0041A528 }
l0041A528:
	return
fn00411352_exit:
}

word32 fn0041136B(word32 ebp, word32 edi, selector fs, ptr32 ediOut)
{
	word32 eax_111;
	word32 edi_16;
	Mem19[fp - 0x0000000C:word32] = fn0041128A(fp - 0x00000004, edi, fs, out edi_16);
	if (Mem19[fp - 0x0000000C:word32] >=u (Mem19[0x0042B0F0:word32] - Mem19[0x0042B0F4:word32]) + 0x00000004)
		goto l004167C2;
	else
	{
		if (Mem19[fp - 0x0000000C:word32] <u 0x00000800)
			Mem115[fp - 0x00000010:word32] = Mem19[fp - 0x0000000C:word32];
		else
			Mem116[fp - 0x00000010:word32] = 0x00000800;
		Mem55[fp - 0x00000014:word32] = 0x0000007D;
		Mem57[fp - 0x00000018:word32] = 0x00425FDC;
		Mem59[fp - 0x0000001C:word32] = 0x00000002;
		Mem64[fp - 0x00000020:word32] = Mem59[fp - 0x0000000C:word32] + Mem59[fp - 0x00000010:word32];
		Mem67[fp - 0x00000024:word32] = Mem64[0x0042B0F4:word32];
		word32 edi_73;
		Mem76[fp - 0x00000008:word32] = fn004114EC(edi_16, fs, dwArg00, dwArg04, dwArg08, dwArg0C, dwArg10, out edi_73);
		if (Mem76[fp - 0x00000008:word32] == 0x00000000)
		{
			Mem92[fp - 0x00000014:word32] = 0x00000083;
			Mem94[fp - 0x00000018:word32] = 0x00425FDC;
			Mem96[fp - 0x0000001C:word32] = 0x00000002;
			Mem101[fp - 0x00000020:word32] = Mem96[fp - 0x0000000C:word32] + 0x00000010;
			Mem104[fp - 0x00000024:word32] = Mem101[0x0042B0F4:word32];
			word32 edi_105;
			Mem108[fp - 0x00000008:word32] = fn004114EC(edi_73, fs, dwArg00, dwArg04, dwArg08, dwArg0C, dwArg10, out edi_105);
			if (Mem108[fp - 0x00000008:word32] == 0x00000000)
				eax_111 = 0x00000000;
			else
			{
l0041679F:
				Mem88[0x0042B0F0:word32] = Mem76[fp - 0x00000008:word32] + (Mem76[0x0042B0F0:word32] - Mem76[0x0042B0F4:word32] >> 0x00000002) * 0x00000004;
				Mem90[0x0042B0F4:word32] = Mem88[fp - 0x00000008:word32];
l004167C2:
				Mem44[Mem19[0x0042B0F0:word32]:word32] = Mem19[fp + 0x00000004:word32];
				Mem48[0x0042B0F0:word32] = Mem44[0x0042B0F0:word32] + 0x00000004;
				eax_111 = Mem48[fp + 0x00000004:word32];
			}
		}
		else
			goto l0041679F;
	}
	return eax_111;
}

word32 fn00411375(word32 dwArg04, ptr32 edxOut)
{
	*edxOut = edx;
	word32 eax_19;
	word32 eax_26 = dwArg04;
	if (dwArg04 <u Mem0[0x0042AF94:word32])
	{
		eax_26 = 0x0042AFE0[(dwArg04 >> 0x00000005) * 0x00000004];
		word32 edx_35;
		*edxOut = dwArg04 & 0x0000001F;
		if (((int32) (eax_26 + 0x00000004)[(dwArg04 & 0x0000001F) * 0x08] & 0x00000001) != 0x00000000)
		{
			word32 edx_43;
			*edxOut = dwArg04 >> 0x00000005;
			eax_19 = 0x0042AFE0[(dwArg04 >> 0x00000005) * 0x00000004][(dwArg04 & 0x0000001F) * 0x00000008];
		}
		else
		{
l00422593:
			Mem27[0x0042962C:word32] = 0x00000009;
			Mem28[0x00429630:word32] = 0x00000000;
			eax_19 = eax_26 | 0xFFFFFFFF;
		}
	}
	else
		goto l00422593;
	return eax_19;
}

word32 fn00411384(word32 ebp, word32 edi, selector fs, ptr32 ebpOut, ptr32 ediOut)
{
	*ebpOut = ebp;
	word32 edi_5;
	return fn004169C0(ebp, edi, fs, out edi_5);
}

word32 fn004113C0(word32 ebp, word32 edi, selector fs, word32 dwArg08, word32 dwArg0C, word32 dwArg14, word32 dwArg18, word32 dwArg1C)
{
	Mem17[fs:0x00000000:word32] = fp - 0x00000014;
	word32 ebp_139 = fp - 0x00000004;
	if (Mem17[0x00429928:word32] == 0x00000000)
		if (GetStringTypeW(0x00000001, 0x00427128, 0x00000001, fp - 0x00000020) != 0x00000000)
			Mem363[0x00429928:word32] = 0x00000001;
		else if (GetLastError() == 0x00000078)
			Mem367[0x00429928:word32] = 0x00000002;
	word32 eax_102;
	if (Mem17[0x00429928:word32] == 0x00000002 || Mem17[0x00429928:word32] == 0x00000000)
	{
		if (dwArg18 == 0x00000000)
			;
		if (dwArg14 == 0x00000000)
			;
		word32 edi_95;
		word32 eax_96 = fn00411578(edi, fs, out ebp_139, out edi_95);
		Mem99[ebp_139 - 0x00000024:word32] = eax_96;
		word32 esp_116 = fp + 0xFFFFFFAC;
		if (Mem99[ebp_139 - 0x00000024:word32] == 0xFFFFFFFF)
			eax_102 = 0x00000000;
		else if (Mem99[ebp_139 - 0x00000024:word32] != Mem99[ebp_139 + 0x00000018:word32])
		{
			Mem154[fp + 0xFFFFFFA8:word32] = 0x00000000;
			Mem156[fp + 0xFFFFFFA4:word32] = 0x00000000;
			Mem159[fp + 0xFFFFFFA0:word32] = ebp_139 + 0x00000010;
			word32 eax_160 = Mem159[ebp_139 + 0x0000000C:word32];
			Mem162[fp + 0xFFFFFF9C:word32] = eax_160;
			Mem165[fp + 0xFFFFFF98:word32] = Mem162[ebp_139 - 0x00000024:word32];
			Mem168[fp + 0xFFFFFF94:word32] = Mem165[ebp_139 + 0x00000018:word32];
			fn00411253(edi_95, fs, dwArg00, dwArg04, dwArg08, dwArg0C);
			Mem174[ebp_139 - 0x00000020:word32] = eax_160;
			esp_116 = fp + 0xFFFFFFAC;
			if (Mem174[ebp_139 - 0x00000020:word32] == 0x00000000)
				eax_102 = 0x00000000;
			else
			{
				Mem181[ebp_139 + 0x0000000C:word32] = Mem174[ebp_139 - 0x00000020:word32];
l0041EF28:
				word32 esp_118 = esp_116 - 0x00000004;
				Mem119[esp_118 + 0x00000000:word32] = Mem99[ebp_139 + 0x00000014:word32];
				Mem122[esp_118 - 0x00000004:word32] = Mem119[ebp_139 + 0x00000010:word32];
				Mem125[esp_118 - 0x00000008:word32] = Mem122[ebp_139 + 0x0000000C:word32];
				Mem128[esp_118 - 0x0000000C:word32] = Mem125[ebp_139 + 0x00000008:word32];
				Mem131[esp_118 - 0x00000010:word32] = Mem128[ebp_139 + 0x0000001C:word32];
				Mem134[ebp_139 - 0x00000028:word32] = GetStringTypeA(Mem131[esp_118 - 0x00000010:LCID], Mem131[esp_118 - 12:DWORD], Mem131[esp_118 - 8:LPCSTR], Mem131[esp_118 - 4:int32], Mem131[esp_118 + 0x00000000:LPWORD]);
				if (Mem134[ebp_139 - 0x00000020:word32] != 0x00000000)
				{
					Mem143[esp_118 + 0x00000000:word32] = 0x00000002;
					word32 eax_144 = Mem143[ebp_139 - 0x00000020:word32];
					Mem146[esp_118 - 0x00000004:word32] = eax_144;
					word32 edi_148;
					fn0041141A(eax_144, ebp_139, edi_95, fs, out ebp_139, out edi_148);
				}
				eax_102 = Mem134[ebp_139 - 0x00000028:word32];
			}
		}
		else
			goto l0041EF28;
	}
	else if (Mem17[0x00429928:word32] == 0x00000001)
	{
		if (dwArg14 == 0x00000000)
			dwArg14 = Mem17[0x00429914:word32];
		Mem198[fp + 0xFFFFFFA8:word32] = 0x00000000;
		Mem201[fp + 0xFFFFFFA4:word32] = dwArg0C;
		Mem204[fp + 0xFFFFFFA0:word32] = dwArg08;
		word32 eax_217 = MultiByteToWideChar(dwArg14, (word32) (dwArg1C != 0x00000000) * 0x00000008 + 0x00000001, 0x00000001, 0x00427128, 0x00000001, 0x00000000);
		if (eax_217 == 0x00000000)
			eax_102 = 0x00000000;
		else
		{
			Mem226[fp - 0x00000008:word32] = 0x00000000;
			fn00414C20((eax_217 << 0x00000001) + 0x00000003 & 0xFFFFFFFC, 0x00000000);
			Mem242[fp + 0xFFFFFFAC:word32] = eax_217 << 0x00000001;
			Mem244[fp + 0xFFFFFFA8:word32] = 0x00000000;
			Mem247[fp + 0xFFFFFFA4:word32] = fp + 0xFFFFFFB0;
			fn00411195();
			Mem252[fp - 0x00000008:word32] = 0xFFFFFFFF;
			word32 esp_250 = fp + 0xFFFFFFAC;
			if (fp == 0xFFFFFFB0)
			{
				Mem319[fp + 0xFFFFFFA8:word32] = 0x000000A6;
				Mem321[fp + 0xFFFFFFA4:word32] = 0x0042715C;
				Mem323[fp + 0xFFFFFFA0:word32] = 0x00000002;
				Mem326[fp + 0xFFFFFF9C:word32] = eax_217;
				Mem328[fp + 0xFFFFFF98:word32] = 0x00000002;
				word32 eax_331 = fn00411564(edi, fs, out ebp_139, out edi);
				Mem334[ebp_139 - 0x0000003C:word32] = eax_331;
				esp_250 = fp + 0xFFFFFFA8;
				if (Mem334[ebp_139 - 0x0000003C:word32] == 0x00000000)
					eax_102 = 0x00000000;
				else
				{
					Mem343[ebp_139 - 0x00000038:word32] = Mem334[ebp_139 - 0x00000038:word32] + 0x00000001;
l0041F054:
					word32 esp_259 = esp_250 - 0x00000004;
					Mem260[esp_259 + 0x00000000:word32] = Mem252[ebp_139 - 0x00000034:word32];
					Mem263[esp_259 - 0x00000004:word32] = Mem260[ebp_139 - 0x0000003C:word32];
					Mem266[esp_259 - 0x00000008:word32] = Mem263[ebp_139 + 0x00000010:word32];
					Mem269[esp_259 - 0x0000000C:word32] = Mem266[ebp_139 + 0x0000000C:word32];
					Mem271[esp_259 - 0x00000010:word32] = 0x00000001;
					Mem274[esp_259 - 0x00000014:word32] = Mem271[ebp_139 + 0x00000018:word32];
					word32 eax_275 = MultiByteToWideChar(Mem274[esp_259 - 0x00000014:UINT], Mem274[esp_259 - 16:DWORD], Mem274[esp_259 - 12:LPCSTR], Mem274[esp_259 - 8:int32], Mem274[esp_259 - 4:LPWSTR], Mem274[esp_259 + 0x00000000:int32]);
					Mem277[ebp_139 - 0x00000030:word32] = eax_275;
					word32 esp_276 = esp_259 + 0x00000004;
					if (Mem277[ebp_139 - 0x00000030:word32] != 0x00000000)
					{
						Mem305[esp_259 + 0x00000000:word32] = Mem277[ebp_139 + 0x00000014:word32];
						Mem308[esp_259 - 0x00000004:word32] = Mem305[ebp_139 - 0x00000030:word32];
						Mem311[esp_259 - 0x00000008:word32] = Mem308[ebp_139 - 0x0000003C:word32];
						Mem314[esp_259 - 0x0000000C:word32] = Mem311[ebp_139 + 0x00000008:word32];
						eax_275 = GetStringTypeW(Mem314[esp_259 - 0x0000000C:DWORD], Mem314[esp_259 - 8:LPCWSTR], Mem314[esp_259 - 4:int32], Mem314[esp_259 + 0x00000000:LPWORD]);
						Mem317[ebp_139 - 0x0000002C:word32] = eax_275;
						esp_276 = esp_259 + 0x00000004;
					}
					if (Mem277[ebp_139 - 0x00000038:word32] != 0x00000000)
					{
						word32 esp_292 = esp_276 - 0x00000004;
						Mem293[esp_292 + 0x00000000:word32] = 0x00000002;
						Mem296[esp_292 - 0x00000004:word32] = Mem293[ebp_139 - 0x0000003C:word32];
						word32 edi_298;
						fn0041141A(eax_275, ebp_139, edi, fs, out ebp_139, out edi_298);
					}
					eax_102 = Mem277[ebp_139 - 0x0000002C:word32];
				}
			}
			else
				goto l0041F054;
		}
	}
	else
		eax_102 = 0x00000000;
	Mem69[fs:0x00000000:word32] = Mem17[ebp_139 - 0x00000010:word32];
	return eax_102;
}

word32 fn004113D9()
{
	return fn0041DCE0(dwArg00);
}

void fn004113DE(word32 edi, selector fs)
{
fn004113DE_entry:
l004113DE:
l00418C90:
	word32 edi_13 = fn00411294(edi, fs, fp - 0x00000038)
	branch Mem0[fp - 0x00000024:word32] != 0x00000000 || (Mem0[fp - 0x00000030:word32] != 0x00000000 || (Mem0[0x00428D4C:word32] & 0x00000010) != 0x00000000 && Mem0[fp - 0x0000002C:word32] != 0x00000000) l00418CBF
	goto l00418CF0
l00418CA8:
l00418CAE:
l00418CB9:
l00418CBF:
	Mem34[fp - 0x0000003C:word32] = 0x004267DC
	Mem36[fp - 0x00000040:word32] = 0x00426074
	Mem38[fp - 0x00000044:word32] = 0x00000000
	Mem40[fp - 0x00000048:word32] = 0x00000000
	Mem42[fp - 0x0000004C:word32] = 0x00000000
	Mem44[fp - 0x00000050:word32] = 0x00000000
	word32 ecx_45
	word32 ebp_46
	word32 edi_47
	branch fn0041119F(fp - 0x00000004, edi_13, fs, out ecx_45, out ebp_46, out edi_47) != 0x00000001 l00418CDF
l00418CDE:
	int3()
l00418CDF:
	Mem53[fp - 0x0000003C:word32] = 0x00000000
	fn004114B0(ebp_46, edi_47, fs)
	goto l00418CF2
l00418CF0:
l00418CF2:
	return
fn004113DE_exit:
}

word32 fn004113E8(word32 dwArg04)
{
	if (dwArg04 == 0x00000000)
		;
	else if (Mem0[0x0042AF90:word32] == 0x00000003)
	{
		word32 eax_35 = fn004111C7(dwArg04);
		eax = eax_35;
		if (eax_35 != 0x00000000)
			eax = fn0041149C(eax_35, dwArg04);
		if (eax_35 == 0x00000000)
			eax = HeapFree(Mem0[0x0042AF80:word32], 0x00000000, dwArg04);
	}
	else
		eax = HeapFree(Mem0[0x0042AF80:word32], 0x00000000, dwArg04);
	return eax;
}

void fn004113ED(word32 ebp, word32 edi, selector fs, word32 dwArg04, word32 dwArg0C, word32 dwArg10, word32 dwArg1C, word32 dwArg20)
{
	Mem17[fs:0x00000000:word32] = fp - 0x00000014;
	word32 ebp_107 = fp - 0x00000004;
	if (Mem17[0x00429924:word32] == 0x00000000)
	{
		dwLoc6C = 0x00000000;
		dwLoc70 = 0x00000000;
		if (LCMapStringW(0x00000000, 0x00000100, 0x00427128, 0x00000001, 0x00000000, 0x00000000) != 0x00000000)
			Mem753[0x00429924:word32] = 0x00000001;
		else if (GetLastError() == 0x00000078)
			Mem757[0x00429924:word32] = 0x00000002;
	}
	if (dwArg10 > 0x00000000)
	{
		Mem728[fp + 0xFFFFFF94:word32] = dwArg10;
		Mem731[fp + 0xFFFFFF90:word32] = dwArg0C;
		dwArg10 = fn0041EDD0(dwLoc70, dwLoc6C);
	}
	if (Mem17[0x00429924:word32] != 0x00000002 && Mem17[0x00429924:word32] != 0x00000000)
		if (Mem17[0x00429924:word32] == 0x00000001)
		{
			if (dwArg1C == 0x00000000)
				dwArg1C = Mem17[0x00429914:word32];
			Mem391[fp + 0xFFFFFF8C:word32] = dwArg10;
			Mem394[fp + 0xFFFFFF88:word32] = dwArg0C;
			Mem403[fp + 0xFFFFFF84:word32] = (word32) (dwArg20 != 0x00000000) * 0x00000008 + 0x00000001;
			Mem406[fp + 0xFFFFFF80:word32] = dwArg1C;
			word32 eax_407 = MultiByteToWideChar(0x00000000, 0x00000100, 0x00427128, 0x00000001, 0x00000000, 0x00000000);
			word32 esp_408 = fp + 0xFFFFFF98;
			if (eax_407 == 0x00000000)
				;
			else
			{
				Mem418[fp - 0x00000008:word32] = 0x00000001;
				fn00414C20((eax_407 << 0x00000001) + 0x00000003 & 0xFFFFFFFC, 0x00000000);
				Mem430[fp - 0x00000008:word32] = 0xFFFFFFFF;
				if (fp == 0xFFFFFF98)
				{
					Mem696[fp + 0xFFFFFF94:word32] = 0x00000101;
					Mem698[fp + 0xFFFFFF90:word32] = 0x0042711C;
					Mem700[fp + 0xFFFFFF8C:word32] = 0x00000002;
					Mem705[fp + 0xFFFFFF88:word32] = eax_407 << 0x00000001;
					word32 eax_708 = fn00411064(edi, fs, out ebp_107, out edi);
					Mem711[ebp_107 - 0x00000040:word32] = eax_708;
					esp_408 = fp + 0xFFFFFF94;
					if (Mem711[ebp_107 - 0x00000040:word32] == 0x00000000)
						;
					else
					{
						Mem720[ebp_107 - 0x0000003C:word32] = Mem711[ebp_107 - 0x0000003C:word32] + 0x00000001;
l0041EAA1:
						word32 esp_438 = esp_408 - 0x00000004;
						Mem439[esp_438 + 0x00000000:word32] = Mem430[ebp_107 - 0x00000044:word32];
						Mem442[esp_438 - 0x00000004:word32] = Mem439[ebp_107 - 0x00000040:word32];
						Mem445[esp_438 - 0x00000008:word32] = Mem442[ebp_107 + 0x00000014:word32];
						Mem448[esp_438 - 0x0000000C:word32] = Mem445[ebp_107 + 0x00000010:word32];
						Mem450[esp_438 - 0x00000010:word32] = 0x00000001;
						Mem453[esp_438 - 0x00000014:word32] = Mem450[ebp_107 + 0x00000020:word32];
						word32 eax_454 = MultiByteToWideChar(Mem453[esp_438 - 0x00000014:UINT], Mem453[esp_438 - 16:DWORD], Mem453[esp_438 - 12:LPCSTR], Mem453[esp_438 - 8:int32], Mem453[esp_438 - 4:LPWSTR], Mem453[esp_438 + 0x00000000:int32]);
						word32 esp_456 = esp_438 + 0x00000004;
						if (eax_454 == 0x00000000)
							;
						else
						{
							Mem509[esp_438 + 0x00000000:word32] = 0x00000000;
							Mem511[esp_438 - 0x00000004:word32] = 0x00000000;
							Mem514[esp_438 - 0x00000008:word32] = Mem511[ebp_107 - 0x00000044:word32];
							Mem517[esp_438 - 0x0000000C:word32] = Mem514[ebp_107 - 0x00000040:word32];
							Mem520[esp_438 - 0x00000010:word32] = Mem517[ebp_107 + 0x0000000C:word32];
							Mem523[esp_438 - 0x00000014:word32] = Mem520[ebp_107 + 0x00000008:word32];
							eax_454 = LCMapStringW(Mem523[esp_438 - 0x00000014:LCID], Mem523[esp_438 - 16:DWORD], Mem523[esp_438 - 12:LPCWSTR], Mem523[esp_438 - 8:int32], Mem523[esp_438 - 4:LPWSTR], Mem523[esp_438 + 0x00000000:int32]);
							Mem527[ebp_107 - 0x00000038:word32] = eax_454;
							esp_456 = esp_438 + 0x00000004;
							if (Mem527[ebp_107 - 0x00000038:word32] == 0x00000000)
								;
							else if ((Mem527[ebp_107 + 0x0000000C:word32] & 0x00000400) == 0x00000000)
							{
								Mem575[ebp_107 - 0x00000048:word32] = Mem527[ebp_107 - 0x00000038:word32];
								Mem576[ebp_107 - 0x00000004:word32] = 0x00000002;
								fn00414C20((Mem576[ebp_107 - 0x00000048:word32] << 0x00000001) + 0x00000003 & 0xFFFFFFFC, ebp);
								Mem584[ebp_107 - 0x00000058:word32] = esp_438 + 0x00000004;
								Mem585[ebp_107 - 0x00000018:word32] = esp_438 + 0x00000004;
								Mem587[ebp_107 - 0x00000034:word32] = Mem585[ebp_107 - 0x00000058:word32];
								Mem588[ebp_107 - 0x00000004:word32] = 0xFFFFFFFF;
								if (Mem588[ebp_107 - 0x00000034:word32] == 0x00000000)
								{
									Mem672[esp_438 + 0x00000000:word32] = 0x0000013A;
									Mem674[esp_438 - 0x00000004:word32] = 0x0042711C;
									Mem676[esp_438 - 0x00000008:word32] = 0x00000002;
									Mem681[esp_438 - 0x0000000C:word32] = Mem676[ebp_107 - 0x00000048:word32] << 0x00000001;
									eax_454 = fn00411064(edi, fs, out ebp_107, out edi);
									Mem688[ebp_107 - 0x00000034:word32] = eax_454;
									esp_456 = esp_438;
									if (Mem688[ebp_107 - 0x00000034:word32] == 0x00000000)
										;
									else
									{
										Mem694[ebp_107 - 0x0000004C:word32] = Mem688[ebp_107 - 0x0000004C:word32] + 0x00000001;
l0041EBBA:
										word32 esp_596 = esp_456 - 0x00000004;
										Mem597[esp_596 + 0x00000000:word32] = Mem588[ebp_107 - 0x00000048:word32];
										Mem600[esp_596 - 0x00000004:word32] = Mem597[ebp_107 - 0x00000034:word32];
										Mem603[esp_596 - 0x00000008:word32] = Mem600[ebp_107 - 0x00000044:word32];
										Mem606[esp_596 - 0x0000000C:word32] = Mem603[ebp_107 - 0x00000040:word32];
										Mem609[esp_596 - 0x00000010:word32] = Mem606[ebp_107 + 0x0000000C:word32];
										Mem612[esp_596 - 0x00000014:word32] = Mem609[ebp_107 + 0x00000008:word32];
										eax_454 = LCMapStringW(Mem612[esp_596 - 0x00000014:LCID], Mem612[esp_596 - 16:DWORD], Mem612[esp_596 - 12:LPCWSTR], Mem612[esp_596 - 8:int32], Mem612[esp_596 - 4:LPWSTR], Mem612[esp_596 + 0x00000000:int32]);
										esp_456 = esp_596 + 0x00000004;
										if (eax_454 == 0x00000000)
											;
										else if (Mem612[ebp_107 + 0x0000001C:word32] == 0x00000000)
										{
											Mem622[esp_596 + 0x00000000:word32] = 0x00000000;
											Mem624[esp_596 - 0x00000004:word32] = 0x00000000;
											Mem626[esp_596 - 0x00000008:word32] = 0x00000000;
											Mem628[esp_596 - 0x0000000C:word32] = 0x00000000;
											Mem631[esp_596 - 0x00000010:word32] = Mem628[ebp_107 - 0x00000048:word32];
											Mem634[esp_596 - 0x00000014:word32] = Mem631[ebp_107 - 0x00000034:word32];
											Mem636[esp_596 - 0x00000018:word32] = 0x00000000;
											Mem639[esp_596 - 0x0000001C:word32] = Mem636[ebp_107 + 0x00000020:word32];
											eax_454 = WideCharToMultiByte(Mem639[esp_596 - 0x0000001C:UINT], Mem639[esp_596 - 24:DWORD], Mem639[esp_596 - 20:LPCWSTR], Mem639[esp_596 - 16:int32], Mem639[esp_596 - 12:LPSTR], Mem639[esp_596 - 8:int32], Mem639[esp_596 - 4:LPCSTR], Mem639[esp_596 + 0x00000000:LPBOOL]);
											Mem643[ebp_107 - 0x00000038:word32] = eax_454;
											esp_456 = esp_596 + 0x00000004;
											if (Mem643[ebp_107 - 0x00000038:word32] == 0x00000000)
												;
										}
										else
										{
											Mem647[esp_596 + 0x00000000:word32] = 0x00000000;
											Mem649[esp_596 - 0x00000004:word32] = 0x00000000;
											Mem652[esp_596 - 0x00000008:word32] = Mem649[ebp_107 + 0x0000001C:word32];
											Mem655[esp_596 - 0x0000000C:word32] = Mem652[ebp_107 + 0x00000018:word32];
											Mem658[esp_596 - 0x00000010:word32] = Mem655[ebp_107 - 0x00000048:word32];
											Mem661[esp_596 - 0x00000014:word32] = Mem658[ebp_107 - 0x00000034:word32];
											Mem663[esp_596 - 0x00000018:word32] = 0x00000000;
											Mem666[esp_596 - 0x0000001C:word32] = Mem663[ebp_107 + 0x00000020:word32];
											eax_454 = WideCharToMultiByte(Mem666[esp_596 - 0x0000001C:UINT], Mem666[esp_596 - 24:DWORD], Mem666[esp_596 - 20:LPCWSTR], Mem666[esp_596 - 16:int32], Mem666[esp_596 - 12:LPSTR], Mem666[esp_596 - 8:int32], Mem666[esp_596 - 4:LPCSTR], Mem666[esp_596 + 0x00000000:LPBOOL]);
											Mem670[ebp_107 - 0x00000038:word32] = eax_454;
											esp_456 = esp_596 + 0x00000004;
										}
									}
								}
								else
									goto l0041EBBA;
							}
							else if (Mem527[ebp_107 + 0x0000001C:word32] != 0x00000000)
							{
								eax_454 = Mem527[ebp_107 - 0x00000038:word32];
								if (eax_454 > Mem527[ebp_107 + 0x0000001C:word32])
									;
								else
								{
									Mem552[esp_438 + 0x00000000:word32] = Mem527[ebp_107 + 0x0000001C:word32];
									Mem555[esp_438 - 0x00000004:word32] = Mem552[ebp_107 + 0x00000018:word32];
									Mem558[esp_438 - 0x00000008:word32] = Mem555[ebp_107 - 0x00000044:word32];
									Mem561[esp_438 - 0x0000000C:word32] = Mem558[ebp_107 - 0x00000040:word32];
									Mem564[esp_438 - 0x00000010:word32] = Mem561[ebp_107 + 0x0000000C:word32];
									Mem567[esp_438 - 0x00000014:word32] = Mem564[ebp_107 + 0x00000008:word32];
									eax_454 = LCMapStringW(Mem567[esp_438 - 0x00000014:LCID], Mem567[esp_438 - 16:DWORD], Mem567[esp_438 - 12:LPCWSTR], Mem567[esp_438 - 8:int32], Mem567[esp_438 - 4:LPWSTR], Mem567[esp_438 + 0x00000000:int32]);
									esp_456 = esp_438 + 0x00000004;
									if (eax_454 == 0x00000000)
										;
									else
l0041EB33:
								}
							}
							else
								goto l0041EB33;
						}
						if (Mem453[ebp_107 - 0x0000004C:word32] != 0x00000000)
						{
							word32 esp_496 = esp_456 - 0x00000004;
							Mem497[esp_496 + 0x00000000:word32] = 0x00000002;
							Mem500[esp_496 - 0x00000004:word32] = Mem497[ebp_107 - 0x00000034:word32];
							eax_454 = fn0041141A(eax_454, ebp_107, edi, fs, out ebp_107, out edi);
							esp_456 = esp_496;
						}
						if (Mem453[ebp_107 - 0x0000003C:word32] != 0x00000000)
						{
							word32 esp_485 = esp_456 - 0x00000004;
							Mem486[esp_485 + 0x00000000:word32] = 0x00000002;
							Mem489[esp_485 - 0x00000004:word32] = Mem486[ebp_107 - 0x00000040:word32];
							word32 edi_491;
							fn0041141A(eax_454, ebp_107, edi, fs, out ebp_107, out edi_491);
						}
					}
				}
				else
					goto l0041EAA1;
			}
		}
	else
	{
		if (dwArg04 == 0x00000000)
			dwArg04 = Mem17[0x00429904:word32];
		if (dwArg1C == 0x00000000)
			;
		word32 edi_108;
		word32 eax_109 = fn00411578(edi, fs, out ebp_107, out edi_108);
		Mem112[ebp_107 - 0x00000024:word32] = eax_109;
		if (Mem112[ebp_107 - 0x00000024:word32] == 0xFFFFFFFF)
			;
		else
		{
			word32 esp_136;
			word32 eax_130;
			if (Mem112[ebp_107 - 0x00000024:word32] != Mem112[ebp_107 + 0x00000020:word32])
			{
				Mem157[fp + 0xFFFFFF90:word32] = 0x00000000;
				Mem159[fp + 0xFFFFFF8C:word32] = 0x00000000;
				Mem162[fp + 0xFFFFFF88:word32] = ebp_107 + 0x00000014;
				Mem165[fp + 0xFFFFFF84:word32] = Mem162[ebp_107 + 0x00000010:word32];
				Mem168[fp + 0xFFFFFF80:word32] = Mem165[ebp_107 - 0x00000024:word32];
				word32 eax_169 = Mem168[ebp_107 + 0x00000020:word32];
				Mem171[fp + 0xFFFFFF7C:word32] = eax_169;
				fn00411253(edi_108, fs, dwArg00, dwArg04, dwArg08, dwArg0C);
				Mem176[ebp_107 - 0x0000001C:word32] = eax_169;
				if (Mem176[ebp_107 - 0x0000001C:word32] == 0x00000000)
					;
				else
				{
					Mem183[ebp_107 + 0x00000010:word32] = Mem176[ebp_107 - 0x0000001C:word32];
					Mem185[fp + 0xFFFFFF90:word32] = 0x00000000;
					Mem187[fp + 0xFFFFFF8C:word32] = 0x00000000;
					Mem190[fp + 0xFFFFFF88:word32] = Mem187[ebp_107 + 0x00000014:word32];
					Mem193[fp + 0xFFFFFF84:word32] = Mem190[ebp_107 + 0x00000010:word32];
					Mem196[fp + 0xFFFFFF80:word32] = Mem193[ebp_107 + 0x0000000C:word32];
					Mem199[fp + 0xFFFFFF7C:word32] = Mem196[ebp_107 + 0x00000008:word32];
					eax_130 = LCMapStringA(Mem199[fp + 0xFFFFFF7C:LCID], Mem199[fp + -128:DWORD], Mem199[fp + -124:LPCSTR], Mem199[fp + -120:int32], Mem199[fp + -116:LPSTR], Mem199[fp + -112:int32]);
					Mem203[ebp_107 - 0x00000020:word32] = eax_130;
					esp_136 = fp + 0xFFFFFF94;
					if (Mem203[ebp_107 - 0x00000020:word32] == 0x00000000)
						;
					else
					{
						Mem236[ebp_107 - 0x00000004:word32] = 0x00000000;
						fn00414C20(Mem236[ebp_107 - 0x00000020:word32] + 0x00000003 & 0xFFFFFFFC, ebp);
						Mem243[ebp_107 - 0x00000050:word32] = fp + 0xFFFFFF94;
						Mem244[ebp_107 - 0x00000018:word32] = fp + 0xFFFFFF94;
						Mem246[ebp_107 - 0x00000028:word32] = Mem244[ebp_107 - 0x00000050:word32];
						Mem249[fp + 0xFFFFFF90:word32] = Mem246[ebp_107 - 0x00000020:word32];
						Mem251[fp + 0xFFFFFF8C:word32] = 0x00000000;
						Mem254[fp + 0xFFFFFF88:word32] = Mem251[ebp_107 - 0x00000028:word32];
						fn00411195();
						Mem259[ebp_107 - 0x00000004:word32] = 0xFFFFFFFF;
						word32 esp_257 = fp + 0xFFFFFF90;
						if (Mem259[ebp_107 - 0x00000028:word32] == 0x00000000)
						{
							Mem316[fp + 0xFFFFFF8C:word32] = 0x000000A6;
							Mem318[fp + 0xFFFFFF88:word32] = 0x0042711C;
							Mem320[fp + 0xFFFFFF84:word32] = 0x00000002;
							Mem323[fp + 0xFFFFFF80:word32] = Mem320[ebp_107 - 0x00000020:word32];
							eax_130 = fn00411064(edi_108, fs, out ebp_107, out edi_108);
							Mem330[ebp_107 - 0x00000028:word32] = eax_130;
							esp_136 = fp + 0xFFFFFF8C;
							if (Mem330[ebp_107 - 0x00000028:word32] == 0x00000000)
								Mem333[ebp_107 - 0x00000030:word32] = 0x00000000;
							else
							{
								Mem336[fp + 0xFFFFFF88:word32] = Mem330[ebp_107 - 0x00000020:word32];
								Mem338[fp + 0xFFFFFF84:word32] = 0x00000000;
								Mem341[fp + 0xFFFFFF80:word32] = Mem338[ebp_107 - 0x00000028:word32];
								fn00411195();
								Mem348[ebp_107 - 0x0000002C:word32] = Mem341[ebp_107 - 0x0000002C:word32] + 0x00000001;
								esp_257 = fp + 0xFFFFFF88;
l0041E902:
								word32 esp_266 = esp_257 - 0x00000004;
								Mem267[esp_266 + 0x00000000:word32] = Mem259[ebp_107 - 0x00000020:word32];
								Mem270[esp_266 - 0x00000004:word32] = Mem267[ebp_107 - 0x00000028:word32];
								Mem273[esp_266 - 0x00000008:word32] = Mem270[ebp_107 + 0x00000014:word32];
								Mem276[esp_266 - 0x0000000C:word32] = Mem273[ebp_107 + 0x00000010:word32];
								Mem279[esp_266 - 0x00000010:word32] = Mem276[ebp_107 + 0x0000000C:word32];
								Mem282[esp_266 - 0x00000014:word32] = Mem279[ebp_107 + 0x00000008:word32];
								eax_130 = LCMapStringA(Mem282[esp_266 - 0x00000014:LCID], Mem282[esp_266 - 16:DWORD], Mem282[esp_266 - 12:LPCSTR], Mem282[esp_266 - 8:int32], Mem282[esp_266 - 4:LPSTR], Mem282[esp_266 + 0x00000000:int32]);
								Mem286[ebp_107 - 0x00000020:word32] = eax_130;
								esp_136 = esp_266 + 0x00000004;
								if (Mem286[ebp_107 - 0x00000020:word32] == 0x00000000)
									Mem289[ebp_107 - 0x00000030:word32] = 0x00000000;
								else
								{
									Mem292[esp_266 + 0x00000000:word32] = Mem286[ebp_107 + 0x0000001C:word32];
									Mem295[esp_266 - 0x00000004:word32] = Mem292[ebp_107 + 0x00000018:word32];
									Mem298[esp_266 - 0x00000008:word32] = ebp_107 - 0x00000020;
									Mem301[esp_266 - 0x0000000C:word32] = Mem298[ebp_107 - 0x00000028:word32];
									Mem304[esp_266 - 0x00000010:word32] = Mem301[ebp_107 + 0x00000020:word32];
									eax_130 = Mem304[ebp_107 - 0x00000024:word32];
									Mem308[esp_266 - 0x00000014:word32] = eax_130;
									fn00411253(edi_108, fs, dwArg00, dwArg04, dwArg08, dwArg0C);
									esp_136 = esp_266 + 0x00000004;
									if (eax_130 == 0x00000000)
										Mem313[ebp_107 - 0x00000030:word32] = 0x00000000;
									else
										Mem314[ebp_107 - 0x00000030:word32] = 0x00000001;
								}
							}
						}
						else
							goto l0041E902;
					}
					if (Mem203[ebp_107 - 0x0000002C:word32] != 0x00000000)
					{
						word32 esp_224 = esp_136 - 0x00000004;
						Mem225[esp_224 + 0x00000000:word32] = 0x00000002;
						Mem228[esp_224 - 0x00000004:word32] = Mem225[ebp_107 - 0x00000028:word32];
						eax_130 = fn0041141A(eax_130, ebp_107, edi_108, fs, out ebp_107, out edi_108);
						esp_136 = esp_224;
					}
l0041E99D:
					if (Mem112[ebp_107 - 0x0000001C:word32] != 0x00000000)
					{
						word32 esp_145 = esp_136 - 0x00000004;
						Mem146[esp_145 + 0x00000000:word32] = 0x00000002;
						Mem149[esp_145 - 0x00000004:word32] = Mem146[ebp_107 - 0x0000001C:word32];
						word32 edi_151;
						fn0041141A(eax_130, ebp_107, edi_108, fs, out ebp_107, out edi_151);
					}
				}
			}
			else
			{
				Mem351[fp + 0xFFFFFF90:word32] = Mem112[ebp_107 + 0x0000001C:word32];
				Mem354[fp + 0xFFFFFF8C:word32] = Mem351[ebp_107 + 0x00000018:word32];
				Mem357[fp + 0xFFFFFF88:word32] = Mem354[ebp_107 + 0x00000014:word32];
				Mem360[fp + 0xFFFFFF84:word32] = Mem357[ebp_107 + 0x00000010:word32];
				Mem363[fp + 0xFFFFFF80:word32] = Mem360[ebp_107 + 0x0000000C:word32];
				Mem366[fp + 0xFFFFFF7C:word32] = Mem363[ebp_107 + 0x00000008:word32];
				eax_130 = LCMapStringA(Mem366[fp + 0xFFFFFF7C:LCID], Mem366[fp + -128:DWORD], Mem366[fp + -124:LPCSTR], Mem366[fp + -120:int32], Mem366[fp + -116:LPSTR], Mem366[fp + -112:int32]);
				Mem370[ebp_107 - 0x00000030:word32] = eax_130;
				esp_136 = fp + 0xFFFFFF94;
				goto l0041E99D;
			}
		}
	}
	Mem82[fs:0x00000000:word32] = Mem17[ebp_107 - 0x00000010:word32];
	return;
}

word32 fn004113FC()
{
	return fn00419570(dwArg00);
}

void fn00411401(word32 edi, selector fs, word32 dwArg04)
{
	word32 ebp_5 = fp - 0x00000004;
	word32 esp_153 = fp - 0x0000001C;
	if (dwArg04 >u 0x00000016)
		;
}

word32 fn0041140B(word32 edi, selector fs, ptr32 ediOut)
{
	word32 eax_224;
	word32 edi_19;
	word32 ebp_18;
	word32 eax_20 = fn00411064(edi, fs, out ebp_18, out edi_19);
	Mem24[ebp_18 - 0x00000064:word32] = eax_20;
	if (Mem24[ebp_18 - 0x00000064:word32] == 0x00000000)
		eax_224 = eax_20 | 0xFFFFFFFF;
	else
	{
		Mem52[0x0042AFE0:word32] = Mem24[ebp_18 - 0x00000064:word32];
		Mem53[0x0042AF94:word32] = 0x00000020;
		while (Mem53[ebp_18 - 0x00000064:word32] <u Mem53[0x0042AFE0:word32] + 0x00000100)
		{
			Mem61[Mem53[ebp_18 - 0x00000064:word32] + 0x00000004:byte] = 0x00;
			Mem63[Mem61[ebp_18 - 0x00000064:word32]:word32] = 0xFFFFFFFF;
			Mem65[Mem63[ebp_18 - 0x00000064:word32] + 0x00000005:byte] = 0x0A;
			Mem69[ebp_18 - 0x00000064:word32] = Mem65[ebp_18 - 0x00000064:word32] + 0x00000008;
		}
		Mem72[fp + 0xFFFFFF84:word32] = ebp_18 - 0x00000048;
		GetStartupInfoA(Mem72[fp + 0xFFFFFF84:LPSTARTUPINFOA]);
		word32 esp_118 = fp + 0xFFFFFF88;
		if ((word32) Mem72[ebp_18 - 0x00000016:word16] != 0x00000000 && Mem72[ebp_18 - 0x00000014:word32] != 0x00000000)
		{
			Mem232[ebp_18 - 0x00000058:word32] = Mem72[Mem72[ebp_18 - 0x00000014:word32]:word32];
			Mem235[ebp_18 - 0x0000005C:word32] = Mem232[ebp_18 - 0x00000014:word32] + 0x00000004;
			Mem238[ebp_18 - 0x00000068:word32] = Mem235[ebp_18 - 0x0000005C:word32] + Mem235[ebp_18 - 0x00000058:word32];
			if (Mem238[ebp_18 - 0x00000058:word32] < 0x00000800)
				Mem380[ebp_18 - 0x0000006C:word32] = Mem238[ebp_18 - 0x00000058:word32];
			else
				Mem381[ebp_18 - 0x0000006C:word32] = 0x00000800;
			Mem243[ebp_18 - 0x00000058:word32] = Mem238[ebp_18 - 0x0000006C:word32];
			Mem244[ebp_18 - 0x0000004C:word32] = 0x00000001;
			while (Mem244[0x0042AF94:word32] < Mem244[ebp_18 - 0x00000058:word32])
			{
				word32 esp_334 = esp_118 - 0x00000004;
				Mem335[esp_334 + 0x00000000:word32] = 0x000000B7;
				Mem337[esp_334 - 0x00000004:word32] = 0x004256BC;
				Mem339[esp_334 - 0x00000008:word32] = 0x00000002;
				Mem341[esp_334 - 0x0000000C:word32] = 0x00000100;
				word32 eax_344 = fn00411064(edi_19, fs, out ebp_18, out edi_19);
				Mem347[ebp_18 - 0x00000064:word32] = eax_344;
				esp_118 = esp_334;
				if (Mem347[ebp_18 - 0x00000064:word32] == 0x00000000)
				{
					Mem351[ebp_18 - 0x00000058:word32] = Mem347[0x0042AF94:word32];
					goto l004143D6;
				}
				0x0042AFE0[Mem347[ebp_18 - 0x0000004C:word32] * 0x00000004] = Mem347[ebp_18 - 0x00000064:word32];
				Mem358[0x0042AF94:word32] = Mem354[0x0042AF94:word32] + 0x00000020;
				while (Mem358[ebp_18 - 0x00000064:word32] <u 0x0042AFE0[Mem358[ebp_18 - 0x0000004C:word32] * 0x00000004] + 0x00000100)
				{
					Mem366[Mem358[ebp_18 - 0x00000064:word32] + 0x00000004:byte] = 0x00;
					Mem368[Mem366[ebp_18 - 0x00000064:word32]:word32] = 0xFFFFFFFF;
					Mem370[Mem368[ebp_18 - 0x00000064:word32] + 0x00000005:byte] = 0x0A;
					Mem374[ebp_18 - 0x00000064:word32] = Mem370[ebp_18 - 0x00000064:word32] + 0x00000008;
				}
				Mem378[ebp_18 - 0x0000004C:word32] = Mem358[ebp_18 - 0x0000004C:word32] + 0x00000001;
			}
l004143D6:
			Mem262[ebp_18 - 0x00000054:word32] = 0x00000000;
			while (Mem262[ebp_18 - 0x00000054:word32] < Mem262[ebp_18 - 0x00000058:word32])
			{
				if (Mem262[Mem262[ebp_18 - 0x00000068:word32]:word32] != 0xFFFFFFFF && ((int32) Mem262[Mem262[ebp_18 - 0x0000005C:word32]:byte] & 0x00000001) != 0x00000000)
					if (((int32) Mem262[Mem262[ebp_18 - 0x0000005C:word32]:byte] & 0x00000008) == 0x00000000)
					{
						word32 esp_327 = esp_118 - 0x00000004;
						Mem328[esp_327 + 0x00000000:word32] = Mem262[Mem262[ebp_18 - 0x00000068:word32]:word32];
						esp_118 = esp_327 + 0x00000004;
						if (GetFileType(Mem328[esp_327 + 0x00000000:HANDLE]) != 0x00000000)
						{
l00414430:
							Mem316[ebp_18 - 0x00000064:word32] = 0x0042AFE0[(Mem262[ebp_18 - 0x00000054:word32] >> 0x00000005) * 0x00000004] + (Mem262[ebp_18 - 0x00000054:word32] & 0x0000001F) * 0x00000008;
							Mem320[Mem316[ebp_18 - 0x00000064:word32]:word32] = Mem316[Mem316[ebp_18 - 0x00000068:word32]:word32];
							Mem324[Mem320[ebp_18 - 0x00000064:word32] + 0x00000004:byte] = Mem320[Mem320[ebp_18 - 0x0000005C:word32]:byte];
						}
					}
					else
						goto l00414430;
				Mem286[ebp_18 - 0x00000054:word32] = Mem262[ebp_18 - 0x00000054:word32] + 0x00000001;
				Mem289[ebp_18 - 0x0000005C:word32] = Mem286[ebp_18 - 0x0000005C:word32] + 0x00000001;
				Mem293[ebp_18 - 0x00000068:word32] = Mem289[ebp_18 - 0x00000068:word32] + 0x00000004;
			}
		}
		Mem90[ebp_18 - 0x00000054:word32] = 0x00000000;
		while (Mem90[ebp_18 - 0x00000054:word32] < 0x00000003)
		{
			Mem105[ebp_18 - 0x00000064:word32] = Mem90[0x0042AFE0:word32] + Mem90[ebp_18 - 0x00000054:word32] * 0x00000008;
			if (Mem105[Mem105[ebp_18 - 0x00000064:word32]:word32] == 0xFFFFFFFF)
			{
				Mem124[Mem105[ebp_18 - 0x00000064:word32] + 0x00000004:byte] = 0x81;
				if (Mem124[ebp_18 - 0x00000054:word32] == 0x00000000)
					Mem202[ebp_18 - 0x00000070:word32] = 0xFFFFFFF6;
				else
					Mem210[ebp_18 - 0x00000070:word32] = 0x00000000 - (0x00000001 - Mem124[ebp_18 - 0x00000054:word32] == 0x00000000) + 0xFFFFFFF5;
				word32 esp_130 = esp_118 - 0x00000004;
				Mem131[esp_130 + 0x00000000:word32] = Mem124[ebp_18 - 0x00000070:word32];
				Mem134[ebp_18 - 0x00000060:word32] = GetStdHandle(Mem131[esp_130 + 0x00000000:DWORD]);
				esp_118 = esp_130 + 0x00000004;
				if (Mem134[ebp_18 - 0x00000060:word32] != 0xFFFFFFFF)
				{
					Mem160[esp_130 + 0x00000000:word32] = Mem134[ebp_18 - 0x00000060:word32];
					Mem163[ebp_18 - 0x00000050:word32] = GetFileType(Mem160[esp_130 + 0x00000000:HANDLE]);
					esp_118 = esp_130 + 0x00000004;
					if (Mem163[ebp_18 - 0x00000050:word32] != 0x00000000)
					{
						Mem168[Mem163[ebp_18 - 0x00000064:word32]:word32] = Mem163[ebp_18 - 0x00000060:word32];
						if ((Mem168[ebp_18 - 0x00000050:word32] & 0x000000FF) == 0x00000002)
							Mem189[Mem168[ebp_18 - 0x00000064:word32] + 0x00000004:byte] = (byte) ((int32) Mem168[Mem168[ebp_18 - 0x00000064:word32] + 0x00000004:byte] | 0x00000040);
						else if ((Mem168[ebp_18 - 0x00000050:word32] & 0x000000FF) == 0x00000003)
							Mem201[Mem168[ebp_18 - 0x00000064:word32] + 0x00000004:byte] = (byte) ((int32) Mem168[Mem168[ebp_18 - 0x00000064:word32] + 0x00000004:byte] | 0x00000008);
					}
					else
					{
l0041452E:
						Mem157[Mem134[ebp_18 - 0x00000064:word32] + 0x00000004:byte] = (byte) ((int32) Mem134[Mem134[ebp_18 - 0x00000064:word32] + 0x00000004:byte] | 0x00000040);
					}
				}
				else
					goto l0041452E;
			}
			else
				Mem218[Mem105[ebp_18 - 0x00000064:word32] + 0x00000004:byte] = (byte) ((int32) Mem105[Mem105[ebp_18 - 0x00000064:word32] + 0x00000004:byte] | 0x00000080);
			Mem122[ebp_18 - 0x00000054:word32] = Mem105[ebp_18 - 0x00000054:word32] + 0x00000001;
		}
		word32 esp_220 = esp_118 - 0x00000004;
		Mem221[esp_220 + 0x00000000:word32] = Mem90[0x0042AF94:word32];
		SetHandleCount(Mem221[esp_220 + 0x00000000:UINT]);
		eax_224 = 0x00000000;
	}
	return eax_224;
}

word32 fn00411415(word32 edi, selector fs, ptr32 ediOut)
{
	word32 edi_5;
	*ediOut = fn00421B60(edi, fs, dwArg00);
	return ebp;
}

word32 fn0041141A(word32 eax, word32 ebp, word32 edi, selector fs, ptr32 ebpOut, ptr32 ediOut)
{
	*ebpOut = ebp;
	word32 edi_6;
	return fn004175B0(eax, ebp, edi, fs, out edi_6);
}

void fn00411424(selector fs)
{
	fn00412320(fs, dwLoc04);
	return;
}

word32 fn0041142E(word32 edi, selector fs)
{
	word32 ebp_104 = fp - 0x00000004;
	word32 esp_105 = fp - 0x00000010;
	if (Mem0[0x0042B0F8:word32] == 0x00000000)
	{
		word32 edi_103;
		ebp_104 = fn0041109B(edi, fs, out edi_103);
		esp_105 = fp + 0xFFFFFFEC;
	}
	if (Mem0[0x0042B100:word32] == 0x00000000)
		Mem98[ebp_104 - 0x0000000C:word32] = 0x004250EC;
	else
		Mem101[ebp_104 - 0x0000000C:word32] = Mem0[0x0042B100:word32];
	Mem19[ebp_104 - 0x00000004:word32] = Mem0[ebp_104 - 0x0000000C:word32];
	while ((word32) Mem19[Mem19[ebp_104 - 0x00000004:word32]:byte] > 0x00000020 || (word32) Mem19[Mem19[ebp_104 - 0x00000004:word32]:byte] != 0x00000000 && Mem19[ebp_104 - 0x00000008:word32] != 0x00000000)
	{
		if ((word32) Mem19[Mem19[ebp_104 - 0x00000004:word32]:byte] == 0x00000022)
			Mem68[ebp_104 - 0x00000008:word32] = (word32) (Mem19[ebp_104 - 0x00000008:word32] == 0x00000000);
		word32 esp_43 = esp_105 - 0x00000004;
		Mem44[esp_43 + 0x00000000:word32] = (word32) Mem19[Mem19[ebp_104 - 0x00000004:word32]:byte];
		esp_105 = esp_43;
		if (fn004113FC() != 0x00000000 && Mem44[ebp_104 - 0x00000004:word32] != 0x00000000)
			Mem62[ebp_104 - 0x00000004:word32] = Mem44[ebp_104 - 0x00000004:word32] + 0x00000001;
		Mem56[ebp_104 - 0x00000004:word32] = Mem44[ebp_104 - 0x00000004:word32] + 0x00000001;
	}
	while ((word32) Mem19[Mem19[ebp_104 - 0x00000004:word32]:byte] != 0x00000000 && (word32) Mem19[Mem19[ebp_104 - 0x00000004:word32]:byte] <= 0x00000020)
		Mem95[ebp_104 - 0x00000004:word32] = Mem19[ebp_104 - 0x00000004:word32] + 0x00000001;
	return Mem19[ebp_104 - 0x00000004:word32];
}

word32 fn0041143D(word32 edi, selector fs, ptr32 ebpOut, ptr32 ediOut)
{
	*ebpOut = ebp;
	word32 edi_4;
	return fn00416940(edi, fs, out edi_4);
}

word32 fn00411442()
{
	word32 eax_16;
	if (Mem0[0x00429638:word32] == 0x00000002 && Mem0[0x00429644:word32] >=u 0x00000005)
		eax_16 = 0x00000001;
	else
		eax_16 = 0x00000003;
	return eax_16;
}

void fn0041144C(word32 edi, selector fs)
{
	word32 eax_14 = Mem0[fs:0x00000000:word32];
	Mem17[fs:0x00000000:word32] = fp - 0x00000014;
	word32 ebp_43 = fp - 0x00000004;
	word32 esi_29 = 0x00427828;
	word32 edi_30 = edi | 0xFFFFFFFF;
	while (esi_29 <u 0x00427A2C)
	{
		word32 eax_50 = Mem17[esi_29 + 0x00000000:word32];
		if (eax_50 != 0x00000000)
			eax_50();
		Mem65[ebp_43 - 0x00000004:word32] = edi_30;
		esi_29 = esi_29 + 0x00000004;
	}
	Mem69[fs:0x00000000:word32] = eax_14;
	return;
}

word32 fn00411456(word32 ebp, word32 edi, selector fs, word32 dwArg08)
{
	word32 ebp_116 = fp - 0x00000004;
	word32 esp_119 = fp - 0x00000034;
	if (dwArg08 == 0x00000000)
	{
		esp_119 = fp - 0x00000034;
		word32 ecx_132;
		if (fn0041119F(fp - 0x00000004, edi, fs, out ecx_132, out ebp_116, out edi) == 0x00000001)
			int3();
	}
	if (Mem0[ebp_116 + 0x00000008:word32] == 0x00000000)
	{
		word32 esp_105 = esp_119 - 0x00000004;
		Mem106[esp_105 + 0x00000000:word32] = 0x00426A40;
		Mem108[esp_105 - 0x00000004:word32] = 0x00000000;
		Mem110[esp_105 - 0x00000008:word32] = 0x0000005E;
		Mem112[esp_105 - 0x0000000C:word32] = 0x00426ADC;
		Mem114[esp_105 - 0x00000010:word32] = 0x00000002;
		esp_119 = esp_105 + 0x00000004;
		word32 ecx_115;
		if (fn0041119F(ebp_116, edi, fs, out ecx_115, out ebp_116, out edi) == 0x00000001)
			int3();
	}
	Mem37[Mem0[ebp_116 - 0x0000000C:word32] + 0x00000004:word32] = 0x7FFFFFFF;
	Mem39[Mem37[ebp_116 - 0x0000000C:word32] + 0x0000000C:word32] = 0x00000042;
	Mem42[Mem39[ebp_116 - 0x0000000C:word32] + 0x00000008:word32] = Mem39[ebp_116 + 0x00000008:word32];
	Mem45[Mem42[ebp_116 - 0x0000000C:word32]:word32] = Mem42[ebp_116 + 0x00000008:word32];
	word32 esp_47 = esp_119 - 0x00000004;
	Mem48[esp_47 + 0x00000000:word32] = Mem45[ebp_116 - 0x00000004:word32];
	Mem51[esp_47 - 0x00000004:word32] = Mem48[ebp_116 + 0x0000000C:word32];
	Mem54[esp_47 - 0x00000008:word32] = Mem51[ebp_116 - 0x0000000C:word32];
	word32 ebp_56;
	word32 edi_100;
	word32 eax_58 = fn0041134D(ebp_116, edi, fs, out ebp_56, out edi_100);
	Mem61[ebp_56 - 0x00000008:word32] = eax_58;
	if (Mem61[ebp_56 + 0x00000008:word32] != 0x00000000)
	{
		Mem78[Mem61[ebp_56 - 0x0000000C:word32] + 0x00000004:word32] = Mem61[Mem61[ebp_56 - 0x0000000C:word32] + 0x00000004:word32] - 0x00000001;
		if (Mem78[Mem78[ebp_56 - 0x0000000C:word32] + 0x00000004:word32] >= 0x00000000)
		{
			Mem84[Mem78[Mem78[ebp_56 - 0x0000000C:word32]:word32]:byte] = 0x00;
			Mem87[ebp_56 - 0x00000030:word32] = 0x00000000;
			Mem93[Mem87[ebp_56 - 0x0000000C:word32]:word32] = Mem87[Mem87[ebp_56 - 0x0000000C:word32]:word32] + 0x00000001;
		}
		else
		{
			Mem96[esp_47 - 0x00000004:word32] = Mem78[ebp_56 - 0x0000000C:word32];
			Mem98[esp_47 - 0x00000008:word32] = 0x00000000;
			Mem104[ebp_56 - 0x00000030:word32] = fn004114AB(edi_100, fs, dwArg04, out edi_100);
		}
	}
	return edi_100;
}

void fn0041145B(word32 ebp, word32 edi, selector fs)
{
	Mem17[fs:0x00000000:word32] = fp - 0x00000014;
	fn00414C20(0x00000094, dwLoc94);
	Mem38[fp + 0xFFFFFF70:word32] = 0x00000094;
	Mem41[fp + 0xFFFFFF6C:word32] = fp + 0xFFFFFF70;
	GetVersionExA(Mem41[fp + 0xFFFFFF6C:LPOSVERSIONINFOA]);
	Mem46[0x00429638:word32] = Mem41[fp + 0xFFFFFF80:word32];
	Mem49[0x00429644:word32] = Mem46[fp + 0xFFFFFF74:word32];
	Mem52[0x00429648:word32] = Mem49[fp + 0xFFFFFF78:word32];
	Mem56[0x0042963C:word32] = Mem52[fp + 0xFFFFFF7C:word32] & 0x00007FFF;
	word32 ebp_100 = fp - 0x00000004;
	if (Mem56[0x00429638:word32] != 0x00000002)
		Mem217[0x0042963C:word32] = Mem56[0x0042963C:word32] | 0x00008000;
	Mem64[0x00429640:word32] = (Mem56[0x00429644:word32] << 0x00000008) + Mem56[0x00429648:word32];
	fn004126E0();
	Mem67[fp + 0xFFFFFF6C:word32] = 0x00000000;
	word32 esp_101 = fp + 0xFFFFFF70;
	if (fn00411078(dwArg00) == 0x00000000)
	{
		Mem208[fp + 0xFFFFFF6C:word32] = 0x0000001C;
		ebp_100 = fn004126A0(edi, fs, out edi);
		esp_101 = fp + 0xFFFFFF70;
	}
	fn0041144C(edi, fs);
	Mem78[ebp_100 - 0x00000004:word32] = 0x00000000;
	word32 edi_202;
	if (fn0041140B(edi, fs, out edi_202) < 0x00000000)
	{
		word32 esp_200 = esp_101 - 0x00000004;
		Mem201[esp_200 + 0x00000000:word32] = 0x0000001B;
		ebp_100 = fn004114E2(edi_202, fs, out edi_202);
		esp_101 = esp_200;
	}
	Mem89[0x0042B100:word32] = GetCommandLineA();
	word32 edi_90;
	Mem92[0x004295FC:word32] = fn0041100F(ebp_100, edi_202, fs, out edi_90);
	word32 edi_195;
	if (fn00411032(ebp_100, edi_90, fs, out edi_195) < 0x00000000)
	{
		word32 esp_193 = esp_101 - 0x00000004;
		Mem194[esp_193 + 0x00000000:word32] = 0x00000008;
		ebp_100 = fn004114E2(edi_195, fs, out edi_195);
		esp_101 = esp_193;
	}
	word32 edi_102;
	if (fn00411596(ebp_100, edi_195, fs, out edi_102) < 0x00000000)
	{
		word32 esp_186 = esp_101 - 0x00000004;
		Mem187[esp_186 + 0x00000000:word32] = 0x00000009;
		ebp_100 = fn004114E2(edi_102, fs, out edi_102);
		esp_101 = esp_186;
	}
	word32 esp_110 = esp_101 - 0x00000004;
	Mem111[esp_110 + 0x00000000:word32] = 0x00000001;
	word32 edi_112;
	Mem115[ebp_100 - 0x00000064:word32] = fn00411587(ebp_100, edi_102, fs, dwArg00, out edi_112);
	word32 esp_114 = esp_110 + 0x00000004;
	if (Mem115[ebp_100 - 0x00000064:word32] != 0x00000000)
	{
		Mem180[esp_110 + 0x00000000:word32] = Mem115[ebp_100 - 0x00000064:word32];
		ebp_100 = fn004114E2(edi_112, fs, out edi_112);
		esp_114 = esp_110;
	}
	Mem123[ebp_100 - 0x00000034:word32] = 0x00000000;
	word32 esp_125 = esp_114 - 0x00000004;
	Mem126[esp_125 + 0x00000000:word32] = ebp_100 - 0x00000060;
	GetStartupInfoA(Mem126[esp_125 + 0x00000000:LPSTARTUPINFOA]);
	Mem129[ebp_100 - 0x00000068:word32] = fn0041142E(edi_112, fs);
	if ((Mem129[ebp_100 - 0x00000034:word32] & 0x00000001) != 0x00000000)
		Mem176[ebp_100 - 0x00000080:word32] = (word32) Mem129[ebp_100 - 0x00000030:word16];
	else
		Mem177[ebp_100 - 0x00000080:word32] = 0x0000000A;
	word32 edx_136 = Mem129[ebp_100 - 0x00000080:word32];
	Mem138[esp_125 + 0x00000000:word32] = edx_136;
	Mem141[esp_125 - 0x00000004:word32] = Mem138[ebp_100 - 0x00000068:word32];
	Mem143[esp_125 - 0x00000008:word32] = 0x00000000;
	Mem145[esp_125 - 0x0000000C:word32] = 0x00000000;
	Mem149[esp_125 - 0x0000000C:word32] = GetModuleHandleA(Mem145[esp_125 - 0x0000000C:LPCSTR]);
	word32 ebp_150;
	word32 edi_151;
	word32 eax_152 = fn004114A6(edx_136, ebp_100, fs, dwArg00, out ebp_150, out edi_151);
	Mem154[ebp_150 - 0x00000074:word32] = eax_152;
	if (Mem154[ebp_150 - 0x0000006C:word32] == 0x00000000)
	{
		Mem174[esp_125 + 0x00000000:word32] = Mem154[ebp_150 - 0x00000074:word32];
		fn0041158C(edi_151, fs, dwArg00);
	}
	fn0041115E(edi_151, fs);
	Mem159[ebp_150 - 0x00000004:word32] = 0xFFFFFFFF;
	Mem163[fs:0x00000000:word32] = Mem159[ebp_150 - 0x00000010:word32];
	return;
}

word32 fn00411492(word32 dwArg00, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10)
{
	word32 ecx_298 = dwArg0C;
	if (dwArg0C != 0x00000000)
	{
		word32 ecx_217;
		word32 ecx_186;
		byte al_112;
		word32 ebx_113 = dwArg0C;
		word32 esi_130 = dwArg08;
		word32 edi_103 = dwArg04;
		if ((dwArg08 & 0x00000003) == 0x00000000)
		{
			ecx_217 = dwArg0C >>u 0x00000002;
			if (dwArg0C >>u 0x00000002 == 0x00000000)
			{
l0041CFD3:
				do
				{
					byte al_133 = Mem0[esi_130 + 0x00000000:byte];
					Mem135[edi_103 + 0x00000000:byte] = al_133;
					word32 esi_134 = esi_130 + 0x00000001;
					word32 edi_136 = edi_103 + 0x00000001;
					if (al_112 == 0x00)
						;
					word32 ebx_147 = ebx_113 - 0x00000001;
				} while (ebx_147 != 0x00000001);
l0041CFE6:
			}
		}
	}
}

word32 fn00411497(word32 dwArg04)
{
	word32 eax_21;
	Mem16[0x0042ACA0:word32] = HeapAlloc(Mem0[0x0042AF80:word32], 0x00000000, 0x00000140);
	if (Mem16[0x0042ACA0:word32] == 0x00000000)
		eax_21 = 0x00000000;
	else
	{
		Mem33[0x0042ACA4:word32] = dwArg04;
		Mem35[0x0042ACA8:word32] = Mem33[0x0042ACA0:word32];
		Mem36[0x0042AC98:word32] = 0x00000000;
		Mem37[0x0042AC9C:word32] = 0x00000000;
		Mem38[0x0042ACAC:word32] = 0x00000010;
		eax_21 = 0x00000001;
	}
	return eax_21;
}

word32 fn0041149C(word32 dwArg04, word32 dwArg08)
{
	word32 eax_15 = dwArg08 - Mem0[dwArg04 + 0x0000000C:word32];
	word32 ecx_10 = Mem0[dwArg04 + 0x00000010:word32];
	word32 ecx_30 = Mem0[dwArg08 - 0x00000004:word32];
	word32 ecx_23 = ecx_10 + 0x00000144 + (eax_15 >>u 0x0000000F) *s 0x00000204;
	word32 dwLoc1C_122 = dwArg08 - 0x00000004;
	word32 eax_151 = dwArg08 - 0x00000004;
	word32 dwLoc40_120 = ecx_30 - 0x00000001;
	if ((ecx_30 - 0x00000001 & 0x00000001) != 0x00000000)
		;
	else
	{
		word32 eax_84 = dwArg08 - 0x00000004 + (ecx_30 - 0x00000001);
		word32 edx_87 = Mem0[eax_84 + 0x00000000:word32];
		word32 ecx_90 = Mem0[dwArg08 - 0x00000008:word32];
		if ((edx_87 & 0x00000001) == 0x00000000)
		{
			word32 eax_520 = (edx_87 >> 0x00000004) - 0x00000001;
			word32 dwLoc14_521 = eax_520;
			if (eax_520 >u 0x0000003F)
				dwLoc14_521 = 0x0000003F;
			if (Mem0[eax_84 + 0x00000004:word32] == Mem0[eax_84 + 0x00000008:word32])
				if (dwLoc14_521 <u 0x00000020)
				{
					(ecx_10 + 0x00000044)[(eax_15 >>u 0x0000000F) * 0x00000004] = ~(0x80000000 >>u (byte) dwLoc14_521) & (ecx_10 + 0x00000044)[(eax_15 >>u 0x0000000F) * 0x00000004];
					Mem568[ecx_10 + dwLoc14_521 + 0x00000004:byte] = Mem561[ecx_10 + dwLoc14_521 + 0x00000004:byte] - 0x01;
					if ((int32) Mem568[ecx_10 + dwLoc14_521 + 0x00000004:byte] == 0x00000000)
						Mem591[dwArg04 + 0x00000000:word32] = ~(0x80000000 >>u (byte) dwLoc14_521) & Mem568[dwArg04 + 0x00000000:word32];
				}
				else
				{
					(ecx_10 + 0x000000C4)[(eax_15 >>u 0x0000000F) * 0x00000004] = ~(0x80000000 >>u (byte) (dwLoc14_521 - 0x00000020)) & (ecx_10 + 0x000000C4)[(eax_15 >>u 0x0000000F) * 0x00000004];
					Mem610[ecx_10 + dwLoc14_521 + 0x00000004:byte] = Mem603[ecx_10 + dwLoc14_521 + 0x00000004:byte] - 0x01;
					if ((int32) Mem610[ecx_10 + dwLoc14_521 + 0x00000004:byte] == 0x00000000)
						Mem628[dwArg04 + 0x00000004:word32] = ~(0x80000000 >>u (byte) (dwLoc14_521 - 0x00000020)) & Mem610[dwArg04 + 0x00000004:word32];
				}
			Mem539[Mem0[eax_84 + 0x00000008:word32] + 0x00000004:word32] = Mem0[eax_84 + 0x00000004:word32];
			Mem544[Mem539[eax_84 + 0x00000004:word32] + 0x00000008:word32] = Mem539[eax_84 + 0x00000008:word32];
			dwLoc40_120 = ecx_30 - 0x00000001 + edx_87;
		}
		word32 edx_107 = dwLoc40_120 >> 0x00000004;
		word32 dwLoc3C_109 = edx_107 - 0x00000001;
		if (edx_107 >u 0x00000040)
			dwLoc3C_109 = 0x0000003F;
		if ((ecx_90 & 0x00000001) == 0x00000000)
		{
			word32 edx_386 = (ecx_90 >> 0x00000004) - 0x00000001;
			word32 ecx_382 = dwArg08 - 0x00000004 - ecx_90;
			dwLoc34 = edx_386;
			if (edx_386 >u 0x0000003F)
				dwLoc34 = 0x0000003F;
			word32 eax_392 = dwLoc40_120 + ecx_90;
			word32 ecx_396 = (eax_392 >> 0x00000004) - 0x00000001;
			dwLoc40_120 = eax_392;
			dwLoc3C_109 = ecx_396;
			if (ecx_396 >u 0x0000003F)
				dwLoc3C_109 = 0x0000003F;
			if (dwLoc34 != dwLoc3C_109)
			{
				if (Mem0[ecx_382 + 0x00000004:word32] == Mem0[ecx_382 + 0x00000008:word32])
					if (dwLoc34 <u 0x00000020)
					{
						(ecx_10 + 0x00000044)[(eax_15 >>u 0x0000000F) * 0x00000004] = ~(0x80000000 >>u (byte) dwLoc34) & (ecx_10 + 0x00000044)[(eax_15 >>u 0x0000000F) * 0x00000004];
						Mem454[ecx_10 + dwLoc34 + 0x00000004:byte] = Mem447[ecx_10 + dwLoc34 + 0x00000004:byte] - 0x01;
						if ((int32) Mem454[ecx_10 + dwLoc34 + 0x00000004:byte] == 0x00000000)
							Mem477[dwArg04 + 0x00000000:word32] = ~(0x80000000 >>u (byte) dwLoc34) & Mem454[dwArg04 + 0x00000000:word32];
					}
					else
					{
						(ecx_10 + 0x000000C4)[(eax_15 >>u 0x0000000F) * 0x00000004] = ~(0x80000000 >>u (byte) (dwLoc34 - 0x00000020)) & (ecx_10 + 0x000000C4)[(eax_15 >>u 0x0000000F) * 0x00000004];
						Mem496[ecx_10 + dwLoc34 + 0x00000004:byte] = Mem489[ecx_10 + dwLoc34 + 0x00000004:byte] - 0x01;
						if ((int32) Mem496[ecx_10 + dwLoc34 + 0x00000004:byte] == 0x00000000)
							Mem514[dwArg04 + 0x00000004:word32] = ~(0x80000000 >>u (byte) (dwLoc34 - 0x00000020)) & Mem496[dwArg04 + 0x00000004:word32];
					}
				Mem429[Mem0[ecx_382 + 0x00000008:word32] + 0x00000004:word32] = Mem0[ecx_382 + 0x00000004:word32];
				Mem434[Mem429[ecx_382 + 0x00000004:word32] + 0x00000008:word32] = Mem429[ecx_382 + 0x00000008:word32];
			}
			dwLoc1C_122 = ecx_382;
		}
		if ((ecx_90 & 0x00000001) != 0x00000000 || dwLoc34 != dwLoc3C_109)
		{
			word32 eax_283 = ecx_23 + dwLoc3C_109 * 0x00000008;
			Mem288[dwLoc1C_122 + 0x00000004:word32] = Mem0[eax_283 + 0x00000004:word32];
			Mem291[dwLoc1C_122 + 0x00000008:word32] = eax_283;
			Mem294[eax_283 + 0x00000004:word32] = dwLoc1C_122;
			Mem298[Mem294[dwLoc1C_122 + 0x00000004:word32] + 0x00000008:word32] = dwLoc1C_122;
			if (Mem298[dwLoc1C_122 + 0x00000004:word32] == Mem298[dwLoc1C_122 + 0x00000008:word32])
				if (dwLoc3C_109 <u 0x00000020)
				{
					word32 eax_308 = (int32) Mem298[ecx_10 + dwLoc3C_109 + 0x00000004:byte];
					Mem315[ecx_10 + dwLoc3C_109 + 0x00000004:byte] = Mem298[ecx_10 + dwLoc3C_109 + 0x00000004:byte] + 0x01;
					if (eax_308 == 0x00000000)
						Mem340[dwArg04 + 0x00000000:word32] = 0x80000000 >>u (byte) dwLoc3C_109 | Mem315[dwArg04 + 0x00000000:word32];
					(ecx_10 + 0x00000044)[(eax_15 >>u 0x0000000F) * 0x00000004] = 0x80000000 >>u (byte) dwLoc3C_109 | (ecx_10 + 0x00000044)[(eax_15 >>u 0x0000000F) * 0x00000004];
				}
				else
				{
					word32 eax_343 = (int32) Mem298[ecx_10 + dwLoc3C_109 + 0x00000004:byte];
					Mem350[ecx_10 + dwLoc3C_109 + 0x00000004:byte] = Mem298[ecx_10 + dwLoc3C_109 + 0x00000004:byte] + 0x01;
					if (eax_343 == 0x00000000)
						Mem377[dwArg04 + 0x00000004:word32] = 0x80000000 >>u (byte) (dwLoc3C_109 - 0x00000020) | Mem350[dwArg04 + 0x00000004:word32];
					(ecx_10 + 0x000000C4)[(eax_15 >>u 0x0000000F) * 0x00000004] = 0x80000000 >>u (byte) (dwLoc3C_109 - 0x00000020) | (ecx_10 + 0x000000C4)[(eax_15 >>u 0x0000000F) * 0x00000004];
				}
		}
		Mem141[dwLoc1C_122 + 0x00000000:word32] = dwLoc40_120;
		Mem145[dwLoc1C_122 + dwLoc40_120 - 0x00000004:word32] = dwLoc40_120;
		Mem150[ecx_23 + 0x00000000:word32] = Mem145[ecx_23 + 0x00000000:word32] - 0x00000001;
		eax_151 = ecx_23;
		if (Mem150[ecx_23 + 0x00000000:word32] == 0x00000000)
		{
			if (Mem150[0x0042AC98:word32] != 0x00000000)
			{
				VirtualFree((Mem150[0x0042ACB0:word32] << 0x0000000F) + Mem150[Mem150[0x0042AC98:word32] + 0x0000000C:word32], 0x00008000, 0x00004000);
				Mem196[Mem150[0x0042AC98:word32] + 0x00000008:word32] = 0x80000000 >>u (byte) Mem150[0x0042ACB0:word32] | Mem150[Mem150[0x0042AC98:word32] + 0x00000008:word32];
				(Mem196[Mem196[0x0042AC98:word32] + 0x00000010:word32] + 0x000000C4)[Mem196[0x0042ACB0:word32] * 0x00000004] = 0x00000000;
				Mem207[Mem200[Mem200[0x0042AC98:word32] + 0x00000010:word32] + 0x00000043:byte] = Mem200[Mem200[Mem200[0x0042AC98:word32] + 0x00000010:word32] + 0x00000043:byte] - 0x01;
				if ((int32) Mem207[Mem207[Mem207[0x0042AC98:word32] + 0x00000010:word32] + 0x00000043:byte] == 0x00000000)
					Mem280[Mem207[0x0042AC98:word32] + 0x00000004:word32] = Mem207[Mem207[0x0042AC98:word32] + 0x00000004:word32] & 0xFFFFFFFE;
				if (Mem207[Mem207[0x0042AC98:word32] + 0x00000008:word32] == 0xFFFFFFFF)
				{
					Mem222[fp - 0x00000044:word32] = 0x00008000;
					Mem224[fp - 0x00000048:word32] = 0x00000000;
					VirtualFree(Mem224[Mem224[0x0042AC98:word32] + 0x0000000C:word32], 0x00008000, 0x00004000);
					Mem234[fp - 0x00000044:word32] = Mem224[Mem224[0x0042AC98:word32] + 0x00000010:word32];
					Mem236[fp - 0x00000048:word32] = 0x00000000;
					HeapFree(Mem236[0x0042AF80:word32], 0x00008000, 0x00004000);
					Mem249[fp - 0x00000044:word32] = Mem236[0x0042AC9C:word32] *s 0x00000014 + Mem236[0x0042ACA0:word32] - (Mem236[0x0042AC98:word32] + 0x00000014);
					Mem254[fp - 0x00000048:word32] = Mem249[0x0042AC98:word32] + 0x00000014;
					fn00411343(Mem254[0x0042AC98:word32], 0x00008000, 0x00004000);
					Mem261[0x0042AC9C:word32] = Mem254[0x0042AC9C:word32] - 0x00000001;
					if (dwArg04 >u Mem261[0x0042AC98:word32])
						dwArg04 = dwArg04 - 0x00000014;
					Mem269[0x0042ACA8:word32] = Mem261[0x0042ACA0:word32];
				}
			}
			Mem172[0x0042AC98:word32] = dwArg04;
			Mem174[0x0042ACB0:word32] = eax_15 >>u 0x0000000F;
			eax_151 = dwArg04;
		}
	}
	return eax_151;
}

word32 fn004114A6(word32 edx, word32 ebp, selector fs, word32 dwArg04, ptr32 ebpOut, ptr32 ediOut)
{
	word32 edi_17 = fp + 0xFFFFFF0C;
	word32 ecx_18 = 0x0000003C;
	while (ecx_18 != 0x00000000)
	{
		Mem22[edi_17 + 0x00000000:word32] = 0xCCCCCCCC;
		edi_17 = edi_17 + 0x00000004;
		ecx_18 = ecx_18 - 0x00000001;
	}
	word32 eax_114;
	fn004111F9();
	LoadStringA(dwArg04, 0x00000067, 0x00429568, 0x00000064);
	fn00411424(fs);
	LoadStringA(dwArg04, 0x0000006D, 0x00429500, 0x00000064);
	fn00411424(fs);
	word32 ebp_66;
	word32 edx_128 = fn0041159B(edx, fs, out ebp_66);
	Mem74[fp + 0xFFFFFEF0:word32] = Mem0[ebp_66 + 0x00000014:word32];
	Mem77[fp + 0xFFFFFEEC:word32] = Mem74[ebp_66 + 0x00000008:word32];
	word32 esp_144 = fp + 0xFFFFFEF4;
	if (fn0041133E(fs, dwArg00, dwArg04) == 0x00000000)
		eax_114 = 0x00000000;
	else
	{
		Mem119[fp + 0xFFFFFEF0:word32] = 0x0000006D;
		Mem122[fp + 0xFFFFFEEC:word32] = Mem119[ebp_66 + 0x00000008:word32];
		word32 eax_123 = LoadAcceleratorsA(Mem122[fp + 0xFFFFFEEC:HINSTANCE], Mem122[fp + -272:LPCSTR]);
		fn00411424(fs);
		Mem127[ebp_66 - 0x0000002C:word32] = eax_123;
		word32 esp_126 = fp + 0xFFFFFEF0;
		word32 esp_132 = esp_126 - 0x00000004;
		Mem133[esp_132 + 0x00000000:word32] = 0x00000000;
		Mem135[esp_132 - 0x00000004:word32] = 0x00000000;
		Mem137[esp_132 - 0x00000008:word32] = 0x00000000;
		Mem140[esp_132 - 0x0000000C:word32] = ebp_66 - 0x00000020;
		word32 eax_141 = GetMessageA(Mem140[esp_132 - 0x0000000C:LPMSG], Mem140[esp_132 - 8:HWND], Mem140[esp_132 - 4:UINT], Mem140[esp_132 + 0x00000000:UINT]);
		fn00411424(fs);
		esp_144 = esp_132;
		while (eax_141 != 0x00000000)
		{
			Mem151[esp_132 + 0xFFFFFFFC:word32] = ebp_66 - 0x00000020;
			Mem154[esp_132 + 0xFFFFFFF8:word32] = Mem151[ebp_66 - 0x0000002C:word32];
			edx_128 = Mem154[ebp_66 - 0x00000020:word32];
			Mem157[esp_132 + 0xFFFFFFF4:word32] = edx_128;
			word32 eax_158 = TranslateAcceleratorA(Mem157[esp_132 + 0xFFFFFFF4:HWND], Mem157[esp_132 + -8:HACCEL], Mem157[esp_132 + -4:LPMSG]);
			fn00411424(fs);
			esp_126 = esp_132 + 0xFFFFFFFC;
			if (eax_158 == 0x00000000)
			{
				Mem172[esp_132 + 0xFFFFFFF8:word32] = ebp_66 - 0x00000020;
				TranslateMessage(Mem172[esp_132 + 0xFFFFFFF8:(ptr MSG)]);
				fn00411424(fs);
				Mem180[esp_132 + 0xFFFFFFF4:word32] = ebp_66 - 0x00000020;
				DispatchMessageA(Mem180[esp_132 + 0xFFFFFFF4:(ptr MSG)]);
				fn00411424(fs);
				esp_126 = esp_132 + 0xFFFFFFF4;
			}
			esp_132 = esp_126 - 0x00000004;
			Mem133[esp_132 + 0x00000000:word32] = 0x00000000;
			Mem135[esp_132 - 0x00000004:word32] = 0x00000000;
			Mem137[esp_132 - 0x00000008:word32] = 0x00000000;
			Mem140[esp_132 - 0x0000000C:word32] = ebp_66 - 0x00000020;
			eax_141 = GetMessageA(Mem140[esp_132 - 0x0000000C:LPMSG], Mem140[esp_132 - 8:HWND], Mem140[esp_132 - 4:UINT], Mem140[esp_132 + 0x00000000:UINT]);
			fn00411424(fs);
			esp_144 = esp_132;
		}
		eax_114 = Mem140[ebp_66 - 0x00000018:word32];
	}
	word32 esp_90 = esp_144 - 0x00000004;
	Mem91[esp_90 + 0x00000000:word32] = edx_128;
	Mem94[esp_90 - 0x00000004:word32] = eax_114;
	word32 ebp_96 = fn004111D1(ebp_66, 0x00411CF4, ebp_66, fs, ebp, dwArg00, dwArg04);
	word32 eax_97 = Mem94[esp_90 - 0x00000004:word32];
	word32 edi_101;
	*ediOut = Mem94[esp_90 + 0x00000004:word32];
	fn00411424(fs);
	word32 ebp_110;
	*ebpOut = Mem94[ebp_96 + 0x00000000:word32];
	return eax_97;
}

word32 fn004114AB(word32 edi, selector fs, word32 dwArg08, ptr32 ediOut)
{
	*ediOut = edi;
	word32 ebp_114 = fp - 0x00000004;
	word32 esp_100 = fp - 0x00000018;
	if (dwArg08 == 0x00000000)
	{
		esp_100 = fp - 0x00000018;
		word32 ecx_315;
		if (fn0041119F(fp - 0x00000004, edi, fs, out ecx_315, out ebp_114, out edi) == 0x00000001)
			int3();
	}
	word32 eax_124;
	Mem27[ebp_114 - 0x00000008:word32] = Mem0[ebp_114 + 0x0000000C:word32];
	Mem30[ebp_114 - 0x00000010:word32] = Mem27[Mem27[ebp_114 - 0x00000008:word32] + 0x00000010:word32];
	if ((Mem30[Mem30[ebp_114 - 0x00000008:word32] + 0x0000000C:word32] & 0x00000082) == 0x00000000 || (Mem30[Mem30[ebp_114 - 0x00000008:word32] + 0x0000000C:word32] & 0x00000040) != 0x00000000)
	{
		word32 eax_54 = Mem30[Mem30[ebp_114 - 0x00000008:word32] + 0x0000000C:word32];
		Mem57[Mem30[ebp_114 - 0x00000008:word32] + 0x0000000C:word32] = eax_54 | 0x00000020;
		eax_124 = eax_54 | 0x00000020 | 0xFFFFFFFF;
	}
	else if ((Mem30[Mem30[ebp_114 - 0x00000008:word32] + 0x0000000C:word32] & 0x00000001) != 0x00000000)
	{
		Mem279[Mem30[ebp_114 - 0x00000008:word32] + 0x00000004:word32] = 0x00000000;
		if ((Mem279[Mem279[ebp_114 - 0x00000008:word32] + 0x0000000C:word32] & 0x00000010) != 0x00000000)
		{
			Mem289[Mem279[ebp_114 - 0x00000008:word32]:word32] = Mem279[Mem279[ebp_114 - 0x00000008:word32] + 0x00000008:word32];
			Mem296[Mem289[ebp_114 - 0x00000008:word32] + 0x0000000C:word32] = Mem289[Mem289[ebp_114 - 0x00000008:word32] + 0x0000000C:word32] & 0xFFFFFFFE;
l0041FB4C:
			Mem79[Mem30[ebp_114 - 0x00000008:word32] + 0x0000000C:word32] = Mem30[Mem30[ebp_114 - 0x00000008:word32] + 0x0000000C:word32] | 0x00000002;
			Mem84[Mem79[ebp_114 - 0x00000008:word32] + 0x0000000C:word32] = Mem79[Mem79[ebp_114 - 0x00000008:word32] + 0x0000000C:word32] & 0xFFFFFFEF;
			Mem86[Mem84[ebp_114 - 0x00000008:word32] + 0x00000004:word32] = 0x00000000;
			Mem87[ebp_114 - 0x00000004:word32] = 0x00000000;
			Mem89[ebp_114 - 0x0000000C:word32] = Mem87[ebp_114 - 0x00000004:word32];
			if ((Mem89[Mem89[ebp_114 - 0x00000008:word32] + 0x0000000C:word32] & 0x0000010C) == 0x00000000)
				if (Mem89[ebp_114 - 0x00000008:word32] != 0x00428F20 && Mem89[ebp_114 - 0x00000008:word32] != 0x00428F40)
				{
l0041FBB1:
					word32 esp_259 = esp_100 - 0x00000004;
					Mem260[esp_259 + 0x00000000:word32] = Mem89[ebp_114 - 0x00000008:word32];
					ebp_114 = fn00411415(edi, fs, out edi);
					esp_100 = esp_259;
				}
				else
				{
					word32 esp_268 = esp_100 - 0x00000004;
					Mem269[esp_268 + 0x00000000:word32] = Mem89[ebp_114 - 0x00000010:word32];
					esp_100 = esp_268;
					if (fn004114BA() == 0x00000000)
						goto l0041FBB1;
				}
			if ((Mem89[Mem89[ebp_114 - 0x00000008:word32] + 0x0000000C:word32] & 0x00000108) != 0x00000000)
			{
				if (Mem89[Mem89[ebp_114 - 0x00000008:word32]:word32] - Mem89[Mem89[ebp_114 - 0x00000008:word32] + 0x00000008:word32] < 0x00000000)
				{
					word32 esp_217 = esp_100 - 0x00000004;
					Mem218[esp_217 + 0x00000000:word32] = 0x00427378;
					Mem220[esp_217 - 0x00000004:word32] = 0x00000000;
					Mem222[esp_217 - 0x00000008:word32] = 0x0000009D;
					Mem224[esp_217 - 0x0000000C:word32] = 0x004273C4;
					Mem226[esp_217 - 0x00000010:word32] = 0x00000002;
					esp_100 = esp_217 + 0x00000004;
					word32 ecx_227;
					if (fn0041119F(ebp_114, edi, fs, out ecx_227, out ebp_114, out edi) == 0x00000001)
						int3();
				}
				Mem145[ebp_114 - 0x00000004:word32] = Mem89[Mem89[ebp_114 - 0x00000008:word32]:word32] - Mem89[Mem89[ebp_114 - 0x00000008:word32] + 0x00000008:word32];
				Mem150[Mem145[ebp_114 - 0x00000008:word32]:word32] = Mem145[Mem145[ebp_114 - 0x00000008:word32] + 0x00000008:word32] + 0x00000001;
				Mem155[Mem150[ebp_114 - 0x00000008:word32] + 0x00000004:word32] = Mem150[Mem150[ebp_114 - 0x00000008:word32] + 0x00000018:word32] - 0x00000001;
				if (Mem155[ebp_114 - 0x00000004:word32] > 0x00000000)
				{
					word32 esp_171 = esp_100 - 0x00000004;
					Mem172[esp_171 + 0x00000000:word32] = Mem155[ebp_114 - 0x00000004:word32];
					Mem176[esp_171 - 0x00000004:word32] = Mem172[Mem172[ebp_114 - 0x00000008:word32] + 0x00000008:word32];
					Mem179[esp_171 - 0x00000008:word32] = Mem176[ebp_114 - 0x00000010:word32];
					word32 edi_182;
					word32 eax_183 = fn00411154(edi, fs, out ebp_114, out edi_182);
					Mem187[ebp_114 - 0x0000000C:word32] = eax_183;
				}
				else
				{
					if (Mem155[ebp_114 - 0x00000010:word32] != 0xFFFFFFFF)
						Mem215[ebp_114 - 0x00000014:word32] = 0x0042AFE0[(Mem155[ebp_114 - 0x00000010:word32] >> 0x00000005) * 0x00000004] + (Mem155[ebp_114 - 0x00000010:word32] & 0x0000001F) * 0x00000008;
					else
						Mem216[ebp_114 - 0x00000014:word32] = 0x00428C34;
					if (((int32) Mem155[Mem155[ebp_114 - 0x00000014:word32] + 0x00000004:byte] & 0x00000020) != 0x00000000)
					{
						word32 esp_197 = esp_100 - 0x00000004;
						Mem198[esp_197 + 0x00000000:word32] = 0x00000002;
						Mem200[esp_197 - 0x00000004:word32] = 0x00000000;
						Mem203[esp_197 - 0x00000008:word32] = Mem200[ebp_114 - 0x00000010:word32];
						fn0041116D();
					}
				}
				Mem169[Mem155[Mem155[ebp_114 - 0x00000008:word32] + 0x00000008:word32]:byte] = Mem155[ebp_114 + 0x00000008:byte];
			}
			else
			{
				Mem234[ebp_114 - 0x00000004:word32] = 0x00000001;
				word32 esp_236 = esp_100 - 0x00000004;
				Mem237[esp_236 + 0x00000000:word32] = Mem234[ebp_114 - 0x00000004:word32];
				Mem240[esp_236 - 0x00000004:word32] = ebp_114 + 0x00000008;
				Mem243[esp_236 - 0x00000008:word32] = Mem240[ebp_114 - 0x00000010:word32];
				word32 edi_245;
				word32 eax_246 = fn00411154(edi, fs, out ebp_114, out edi_245);
				Mem250[ebp_114 - 0x0000000C:word32] = eax_246;
			}
			if (Mem89[ebp_114 - 0x0000000C:word32] != Mem89[ebp_114 - 0x00000004:word32])
			{
				word32 eax_122 = Mem89[ebp_114 - 0x00000008:word32];
				Mem123[eax_122 + 0x0000000C:word32] = Mem89[Mem89[ebp_114 - 0x00000008:word32] + 0x0000000C:word32] | 0x00000020;
				eax_124 = eax_122 | 0xFFFFFFFF;
			}
			else
				eax_124 = Mem89[ebp_114 + 0x00000008:word32] & 0x000000FF;
		}
		else
		{
			word32 eax_300 = Mem279[ebp_114 - 0x00000008:word32];
			Mem301[eax_300 + 0x0000000C:word32] = Mem279[Mem279[ebp_114 - 0x00000008:word32] + 0x0000000C:word32] | 0x00000020;
			eax_124 = eax_300 | 0xFFFFFFFF;
		}
	}
	else
		goto l0041FB4C;
	return eax_124;
}

void fn004114B0(word32 ebp, word32 edi, selector fs)
{
	word32 esp_123 = fp - 0x0000000C;
	word32 ecx_23;
	word32 edi_119;
	word32 ebp_122;
	if (fn0041119F(fp - 0x00000004, edi, fs, out ecx_23, out ebp_122, out edi_119) == 0x00000001)
		int3();
	if (Mem0[ebp_122 + 0x00000008:word32] != 0x00000000)
		Mem359[ebp_122 - 0x00000008:word32] = Mem0[Mem0[ebp_122 + 0x00000008:word32]:word32];
	Mem37[ebp_122 - 0x00000004:word32] = Mem0[0x00429850:word32];
	while (Mem37[ebp_122 - 0x00000004:word32] != 0x00000000 && Mem37[ebp_122 - 0x00000004:word32] != Mem37[ebp_122 - 0x00000008:word32])
	{
		if ((Mem37[Mem37[ebp_122 - 0x00000004:word32] + 0x00000014:word32] & 0x0000FFFF) != 0x00000003 && ((Mem37[Mem37[ebp_122 - 0x00000004:word32] + 0x00000014:word32] & 0x0000FFFF) != 0x00000000 && ((Mem37[Mem37[ebp_122 - 0x00000004:word32] + 0x00000014:word32] & 0x0000FFFF) != 0x00000002 || (Mem37[0x00428D4C:word32] & 0x00000010) != 0x00000000)))
		{
			if (Mem37[Mem37[ebp_122 - 0x00000004:word32] + 0x00000008:word32] != 0x00000000)
			{
				word32 esp_290 = esp_123 - 0x00000004;
				Mem291[esp_290 + 0x00000000:word32] = 0x00000000;
				Mem293[esp_290 - 0x00000004:word32] = 0x00000001;
				Mem297[esp_290 - 0x00000008:word32] = Mem293[Mem293[ebp_122 - 0x00000004:word32] + 0x00000008:word32];
				if (fn004112F8(dwArg00, dwArg04, dwArg08) == 0x00000000)
				{
					Mem309[esp_290 + 0x00000000:word32] = Mem297[Mem297[ebp_122 - 0x00000004:word32] + 0x0000000C:word32];
					Mem311[esp_290 - 0x00000004:word32] = 0x00426790;
					Mem313[esp_290 - 0x00000008:word32] = 0x00000000;
					Mem315[esp_290 - 0x0000000C:word32] = 0x00000000;
					Mem317[esp_290 - 0x00000010:word32] = 0x00000000;
					Mem319[esp_290 - 0x00000014:word32] = 0x00000000;
					esp_123 = esp_290 + 0x00000004;
					word32 ecx_320;
					if (fn0041119F(ebp_122, edi_119, fs, out ecx_320, out ebp_122, out edi_119) == 0x00000001)
						int3();
				}
				else
				{
					Mem330[esp_290 + 0x00000000:word32] = Mem297[Mem297[ebp_122 - 0x00000004:word32] + 0x0000000C:word32];
					Mem334[esp_290 - 0x00000004:word32] = Mem330[Mem330[ebp_122 - 0x00000004:word32] + 0x00000008:word32];
					Mem336[esp_290 - 0x00000008:word32] = 0x00426780;
					Mem338[esp_290 - 0x0000000C:word32] = 0x00000000;
					Mem340[esp_290 - 0x00000010:word32] = 0x00000000;
					Mem342[esp_290 - 0x00000014:word32] = 0x00000000;
					Mem344[esp_290 - 0x00000018:word32] = 0x00000000;
					esp_123 = esp_290 + 0x00000004;
					word32 ecx_345;
					if (fn0041119F(ebp_122, edi_119, fs, out ecx_345, out ebp_122, out edi_119) == 0x00000001)
						int3();
				}
			}
			word32 esp_126 = esp_123 - 0x00000004;
			Mem127[esp_126 + 0x00000000:word32] = Mem37[Mem37[ebp_122 - 0x00000004:word32] + 0x00000018:word32];
			Mem129[esp_126 - 0x00000004:word32] = 0x00426778;
			Mem131[esp_126 - 0x00000008:word32] = 0x00000000;
			Mem133[esp_126 - 0x0000000C:word32] = 0x00000000;
			Mem135[esp_126 - 0x00000010:word32] = 0x00000000;
			Mem137[esp_126 - 0x00000014:word32] = 0x00000000;
			esp_123 = esp_126 + 0x00000004;
			word32 ecx_138;
			if (fn0041119F(ebp_122, edi_119, fs, out ecx_138, out ebp_122, out edi_119) == 0x00000001)
				int3();
			if ((Mem137[Mem137[ebp_122 - 0x00000004:word32] + 0x00000014:word32] & 0x0000FFFF) == 0x00000004)
			{
				Mem153[esp_126 + 0x00000000:word32] = Mem137[Mem137[ebp_122 - 0x00000004:word32] + 0x00000010:word32];
				Mem159[esp_126 - 0x00000004:word32] = Mem153[Mem153[ebp_122 - 0x00000004:word32] + 0x00000014:word32] >> 0x00000010 & 0x0000FFFF;
				Mem164[esp_126 - 0x00000008:word32] = Mem159[ebp_122 - 0x00000004:word32] + 0x00000020;
				Mem166[esp_126 - 0x0000000C:word32] = 0x00426738;
				Mem168[esp_126 - 0x00000010:word32] = 0x00000000;
				Mem170[esp_126 - 0x00000014:word32] = 0x00000000;
				Mem172[esp_126 - 0x00000018:word32] = 0x00000000;
				Mem174[esp_126 - 0x0000001C:word32] = 0x00000000;
				word32 ecx_175;
				if (fn0041119F(ebp_122, edi_119, fs, out ecx_175, out ebp_122, out edi_119) == 0x00000001)
					int3();
				if (Mem174[0x0042AF60:word32] != 0x00000000)
				{
					word32 eax_195 = Mem174[ebp_122 - 0x00000004:word32];
					word32 ecx_196 = Mem174[eax_195 + 0x00000010:word32];
					Mem198[esp_126 + 0x00000000:word32] = ecx_196;
					Mem203[esp_126 - 0x00000004:word32] = Mem198[ebp_122 - 0x00000004:word32] + 0x00000020;
					Mem203[0x0042AF60:word32]();
					esp_123 = esp_126 + 0x00000004;
				}
				else
				{
					Mem208[esp_126 + 0x00000000:word32] = Mem174[ebp_122 - 0x00000004:word32];
					edi_119 = fn00418B40(ebp_122, edi_119, fs);
					esp_123 = esp_126 + 0x00000004;
				}
			}
			else if (Mem137[Mem137[ebp_122 - 0x00000004:word32] + 0x00000014:word32] == 0x00000001)
			{
				Mem218[esp_126 + 0x00000000:word32] = Mem137[Mem137[ebp_122 - 0x00000004:word32] + 0x00000010:word32];
				Mem223[esp_126 - 0x00000004:word32] = Mem218[ebp_122 - 0x00000004:word32] + 0x00000020;
				Mem225[esp_126 - 0x00000008:word32] = 0x00426708;
				Mem227[esp_126 - 0x0000000C:word32] = 0x00000000;
				Mem229[esp_126 - 0x00000010:word32] = 0x00000000;
				Mem231[esp_126 - 0x00000014:word32] = 0x00000000;
				Mem233[esp_126 - 0x00000018:word32] = 0x00000000;
				word32 ecx_234;
				word32 edi_236;
				if (fn0041119F(ebp_122, edi_119, fs, out ecx_234, out ebp_122, out edi_236) == 0x00000001)
					int3();
				Mem243[esp_126 + 0x00000000:word32] = Mem233[ebp_122 - 0x00000004:word32];
				edi_119 = fn00418B40(ebp_122, edi_236, fs);
				esp_123 = esp_126 + 0x00000004;
			}
			else if ((Mem137[Mem137[ebp_122 - 0x00000004:word32] + 0x00000014:word32] & 0x0000FFFF) == 0x00000002)
			{
				Mem255[esp_126 + 0x00000000:word32] = Mem137[Mem137[ebp_122 - 0x00000004:word32] + 0x00000010:word32];
				Mem261[esp_126 - 0x00000004:word32] = Mem255[Mem255[ebp_122 - 0x00000004:word32] + 0x00000014:word32] >> 0x00000010 & 0x0000FFFF;
				Mem266[esp_126 - 0x00000008:word32] = Mem261[ebp_122 - 0x00000004:word32] + 0x00000020;
				Mem268[esp_126 - 0x0000000C:word32] = 0x004266CC;
				Mem270[esp_126 - 0x00000010:word32] = 0x00000000;
				Mem272[esp_126 - 0x00000014:word32] = 0x00000000;
				Mem274[esp_126 - 0x00000018:word32] = 0x00000000;
				Mem276[esp_126 - 0x0000001C:word32] = 0x00000000;
				word32 ecx_277;
				word32 edi_279;
				if (fn0041119F(ebp_122, edi_119, fs, out ecx_277, out ebp_122, out edi_279) == 0x00000001)
					int3();
				Mem286[esp_126 + 0x00000000:word32] = Mem276[ebp_122 - 0x00000004:word32];
				edi_119 = fn00418B40(ebp_122, edi_279, fs);
				esp_123 = esp_126 + 0x00000004;
			}
		}
		Mem94[ebp_122 - 0x00000004:word32] = Mem37[Mem37[ebp_122 - 0x00000004:word32]:word32];
	}
	word32 esp_51 = esp_123 - 0x00000004;
	Mem52[esp_51 + 0x00000000:word32] = 0x004266B0;
	Mem54[esp_51 - 0x00000004:word32] = 0x00426074;
	Mem56[esp_51 - 0x00000008:word32] = 0x00000000;
	Mem58[esp_51 - 0x0000000C:word32] = 0x00000000;
	Mem60[esp_51 - 0x00000010:word32] = 0x00000000;
	Mem62[esp_51 - 0x00000014:word32] = 0x00000000;
	word32 ecx_63;
	word32 ebp_64;
	word32 edi_65;
	if (fn0041119F(ebp_122, edi_119, fs, out ecx_63, out ebp_64, out edi_65) == 0x00000001)
		int3();
	return;
}

word32 fn004114BA()
{
	return fn00421C50(dwArg00);
}

word32 fn004114BF(word32 edi, selector fs)
{
	if (Mem0[0x00429604:word32] == 0x00000001 || Mem0[0x00429604:word32] == 0x00000000 && Mem0[0x00428B44:word32] == 0x00000001)
	{
		word32 edi_21;
		word32 ebp_22 = fn00411230(fp - 0x00000004, edi, fs, out edi_21);
		word32 esp_24 = fp + 0xFFFFFFF8;
		if (Mem0[0x004297D8:word32] != 0x00000000)
			Mem0[0x004297D8:word32]();
		Mem33[esp_24 - 0x00000004:word32] = 0x000000FF;
		fn00411230(ebp_22, edi_21, fs, out edi);
	}
	return edi;
}

word32 fn004114E2(word32 edi, selector fs, ptr32 ediOut)
{
	word32 edi_4;
	return fn00412660(edi, fs, out edi_4);
}

word32 fn004114EC(word32 edi, selector fs, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, word32 dwArg14, ptr32 ediOut)
{
	word32 edi_33;
	Mem37[fp - 0x00000008:word32] = fn00416EC0(dwArg08, fp - 0x00000004, edi, fs, dwArg04, dwArg08, dwArg0C, dwArg10, dwArg14, 0x00000001, out edi_33);
	return Mem37[fp - 0x00000008:word32];
}

word32 fn00411528(word32 ebp, word32 dwArg04)
{
	word32 dwLoc34_29;
	word32 dwLoc1C_28;
	word32 ecx_19 = dwArg04 + 0x00000017 & 0xFFFFFFF0;
	word32 esp_479 = fp - 0x00000040;
	word32 eax_13 = Mem0[0x0042AC9C:word32] *s 0x00000014 + Mem0[0x0042ACA0:word32];
	word32 edx_23 = (ecx_19 >> 0x00000004) - 0x00000001;
	if (edx_23 < 0x00000020)
	{
		dwLoc1C_28 = (eax_13 | 0xFFFFFFFF) >>u (byte) edx_23;
		dwLoc34_29 = 0xFFFFFFFF;
	}
	else
	{
		dwLoc1C_28 = 0x00000000;
		dwLoc34_29 = (edx_23 | 0xFFFFFFFF) >>u (byte) (edx_23 - 0x00000020);
	}
	word32 dwLoc20_35 = Mem0[0x0042ACA8:word32];
	while (dwLoc20_35 <u eax_13)
	{
		if ((dwLoc1C_28 & Mem0[dwLoc20_35 + 0x00000000:word32] | dwLoc34_29 & Mem0[dwLoc20_35 + 0x00000004:word32]) != 0x00000000)
			goto l0041B011;
		dwLoc20_35 = dwLoc20_35 + 0x00000014;
	}
l0041B011:
	word32 eax_185;
	if (dwLoc20_35 == eax_13)
	{
		dwLoc20_35 = Mem0[0x0042ACA0:word32];
		while (dwLoc20_35 <u Mem0[0x0042ACA8:word32])
		{
			if ((dwLoc1C_28 & Mem0[dwLoc20_35 + 0x00000000:word32] | dwLoc34_29 & Mem0[dwLoc20_35 + 0x00000004:word32]) != 0x00000000)
				goto l0041B053;
			dwLoc20_35 = dwLoc20_35 + 0x00000014;
		}
l0041B053:
		if (dwLoc20_35 == Mem0[0x0042ACA8:word32])
		{
l0041B062:
			while (dwLoc20_35 <u eax_13)
			{
				if (Mem0[dwLoc20_35 + 0x00000008:word32] != 0x00000000)
					goto l0041B080;
				dwLoc20_35 = dwLoc20_35 + 0x00000014;
			}
l0041B080:
			if (dwLoc20_35 == eax_13)
			{
				dwLoc20_35 = Mem0[0x0042ACA0:word32] + 0x00000008;
				while (dwLoc20_35 <u Mem0[0x0042ACA8:word32])
				{
					if (Mem0[dwLoc20_35 + 0x00000000:word32] != 0x00000000)
						goto l0041B0B2;
					dwLoc20_35 = dwLoc20_35 + 0x00000014;
				}
l0041B0B2:
				if (dwLoc20_35 == Mem0[0x0042ACA8:word32])
				{
					word32 eax_517 = fn004112CB();
					esp_479 = fp + 0xFFFFFFBC;
					dwLoc20_35 = eax_517;
					if (eax_517 == 0x00000000)
						eax_185 = 0x00000000;
					else
					{
l0041B0D2:
						Mem482[esp_479 - 0x00000004:word32] = dwLoc20_35;
						Mem488[Mem482[dwLoc20_35 + 0x00000010:word32]:word32] = fn004110AF(dwArg00);
						if (Mem488[Mem488[dwLoc20_35 + 0x00000010:word32]:word32] == 0xFFFFFFFF)
							eax_185 = 0x00000000;
						else
						{
l0041B0F8:
							Mem84[0x0042ACA8:word32] = dwLoc20_35;
							word32 eax_86 = Mem84[dwLoc20_35 + 0x00000010:word32];
							word32 edx_89 = Mem84[eax_86 + 0x00000000:word32];
							word32 dwLoc18_418 = edx_89;
							if (edx_89 == 0xFFFFFFFF || (dwLoc1C_28 & (eax_86 + 0x00000044)[edx_89 * 0x00000004] | dwLoc34_29 & (eax_86 + 0x000000C4)[edx_89 * 0x00000004]) == 0x00000000)
							{
								dwLoc18_418 = 0x00000000;
								while ((dwLoc1C_28 & (eax_86 + 0x00000044)[dwLoc18_418 * 0x00000004] | dwLoc34_29 & (eax_86 + 0x000000C4)[dwLoc18_418 * 0x00000004]) == 0x00000000)
									dwLoc18_418 = dwLoc18_418 + 0x00000001;
							}
							word32 ecx_105 = dwLoc1C_28 & (eax_86 + 0x00000044)[dwLoc18_418 * 0x00000004];
							word32 ecx_99 = eax_86 + 0x00000144 + dwLoc18_418 *s 0x00000204;
							word32 dwLoc38_101 = 0x00000000;
							word32 dwLoc08_109 = ecx_105;
							if (ecx_105 == 0x00000000)
							{
								Mem403[fp - 0x00000038:word32] = 0x00000020;
								dwLoc08_109 = dwLoc34_29 & (eax_86 + 0x000000C4)[dwLoc18_418 * 0x00000004];
								goto l0041B1B5;
							}
l0041B1B5:
							while (dwLoc08_109 >= 0x00000000)
							{
								dwLoc08_109 = dwLoc08_109 << 0x00000001;
								dwLoc38_101 = dwLoc38_101 + 0x00000001;
							}
							word32 eax_128 = (ecx_99 + 0x00000004)[dwLoc38_101 * 0x00000008];
							word32 edx_132 = Mem84[eax_128 + 0x00000000:word32] - ecx_19;
							word32 eax_136 = (edx_132 >> 0x00000004) - 0x00000001;
							word32 dwLoc14_137 = eax_136;
							if (eax_136 > 0x0000003F)
								dwLoc14_137 = 0x0000003F;
							if (dwLoc14_137 != dwLoc38_101)
							{
								if (Mem84[eax_128 + 0x00000004:word32] == Mem84[eax_128 + 0x00000008:word32])
									if (dwLoc38_101 < 0x00000020)
									{
										(eax_86 + 0x00000044)[dwLoc18_418 * 0x00000004] = ~(0x80000000 >>u (byte) dwLoc38_101) & (eax_86 + 0x00000044)[dwLoc18_418 * 0x00000004];
										Mem341[eax_86 + dwLoc38_101 + 0x00000004:byte] = Mem334[eax_86 + dwLoc38_101 + 0x00000004:byte] - 0x01;
										if ((int32) Mem341[eax_86 + dwLoc38_101 + 0x00000004:byte] == 0x00000000)
											Mem364[dwLoc20_35 + 0x00000000:word32] = ~(0x80000000 >>u (byte) dwLoc38_101) & Mem341[dwLoc20_35 + 0x00000000:word32];
									}
									else
									{
										(eax_86 + 0x000000C4)[dwLoc18_418 * 0x00000004] = ~(0x80000000 >>u (byte) (dwLoc38_101 - 0x00000020)) & (eax_86 + 0x000000C4)[dwLoc18_418 * 0x00000004];
										Mem383[eax_86 + dwLoc38_101 + 0x00000004:byte] = Mem376[eax_86 + dwLoc38_101 + 0x00000004:byte] - 0x01;
										if ((int32) Mem383[eax_86 + dwLoc38_101 + 0x00000004:byte] == 0x00000000)
											Mem401[dwLoc20_35 + 0x00000004:word32] = ~(0x80000000 >>u (byte) (dwLoc38_101 - 0x00000020)) & Mem383[dwLoc20_35 + 0x00000004:word32];
									}
								Mem217[Mem84[eax_128 + 0x00000008:word32] + 0x00000004:word32] = Mem84[eax_128 + 0x00000004:word32];
								Mem222[Mem217[eax_128 + 0x00000004:word32] + 0x00000008:word32] = Mem217[eax_128 + 0x00000008:word32];
								if (edx_132 != 0x00000000)
								{
									word32 eax_227 = ecx_99 + dwLoc14_137 * 0x00000008;
									Mem232[eax_128 + 0x00000004:word32] = Mem222[eax_227 + 0x00000004:word32];
									Mem235[eax_128 + 0x00000008:word32] = eax_227;
									Mem238[eax_227 + 0x00000004:word32] = eax_128;
									Mem242[Mem238[eax_128 + 0x00000004:word32] + 0x00000008:word32] = eax_128;
									if (Mem242[eax_128 + 0x00000004:word32] == Mem242[eax_128 + 0x00000008:word32])
										if (dwLoc14_137 < 0x00000020)
										{
											word32 eax_252 = (int32) Mem242[eax_86 + dwLoc14_137 + 0x00000004:byte];
											Mem259[eax_86 + dwLoc14_137 + 0x00000004:byte] = Mem242[eax_86 + dwLoc14_137 + 0x00000004:byte] + 0x01;
											if (eax_252 == 0x00000000)
												Mem284[dwLoc20_35 + 0x00000000:word32] = 0x80000000 >>u (byte) dwLoc14_137 | Mem259[dwLoc20_35 + 0x00000000:word32];
											(eax_86 + 0x00000044)[dwLoc18_418 * 0x00000004] = 0x80000000 >>u (byte) dwLoc14_137 | (eax_86 + 0x00000044)[dwLoc18_418 * 0x00000004];
										}
										else
										{
											word32 eax_287 = (int32) Mem242[eax_86 + dwLoc14_137 + 0x00000004:byte];
											Mem294[eax_86 + dwLoc14_137 + 0x00000004:byte] = Mem242[eax_86 + dwLoc14_137 + 0x00000004:byte] + 0x01;
											if (eax_287 == 0x00000000)
												Mem321[dwLoc20_35 + 0x00000004:word32] = 0x80000000 >>u (byte) (dwLoc14_137 - 0x00000020) | Mem294[dwLoc20_35 + 0x00000004:word32];
											(eax_86 + 0x000000C4)[dwLoc18_418 * 0x00000004] = 0x80000000 >>u (byte) (dwLoc14_137 - 0x00000020) | (eax_86 + 0x000000C4)[dwLoc18_418 * 0x00000004];
										}
								}
							}
							if (edx_132 != 0x00000000)
							{
								Mem197[eax_128 + 0x00000000:word32] = edx_132;
								Mem202[eax_128 + edx_132 - 0x00000004:word32] = edx_132;
							}
							word32 eax_159 = eax_128 + edx_132;
							Mem164[eax_159 + 0x00000000:word32] = ecx_19 + 0x00000001;
							Mem169[eax_159 + ecx_19 - 0x00000004:word32] = ecx_19 + 0x00000001;
							word32 eax_171 = Mem169[ecx_99 + 0x00000000:word32];
							Mem176[ecx_99 + 0x00000000:word32] = Mem169[ecx_99 + 0x00000000:word32] + 0x00000001;
							if (eax_171 == 0x00000000 && (dwLoc20_35 == Mem176[0x0042AC98:word32] && dwLoc18_418 == Mem176[0x0042ACB0:word32]))
								Mem194[0x0042AC98:word32] = 0x00000000;
							Mem183[eax_86 + 0x00000000:word32] = dwLoc18_418;
							eax_185 = eax_159 + 0x00000004;
						}
					}
				}
				else
					goto l0041B0D2;
			}
			else
				goto l0041B0D2;
		}
		else
			goto l0041B0F8;
	}
	else
		goto l0041B0F8;
	return eax_185;
}

word32 fn00411555(ptr32 edxOut)
{
	word32 edx_6;
	return fn0041F960(dwArg00, dwArg04, dwArg08, dwArg0C, out edx_6);
}

void fn0041155A(selector fs, word32 dwArg04, word32 dwArg08)
{
	if (dwArg08 < 0x00000004 && dwArg08 >= 0x00000000)
	{
		word32 ecx_52 = 0x00428B60[dwArg08 * 0x00000004];
		word32 edx_55 = 0x00428B70[dwArg08 * 0x00000004];
		if (ecx_52 != 0xFFFFFFFF)
			fn00412930(fp - 0x00000004, fs, dwArg04, ecx_52, dwArg08, edx_55);
		return;
	}
	else
	{
		fn00412930(fp - 0x00000004, fs, dwArg04, 0x00000001, 0x00000004, Mem0[0x00428B80:word32]);
		return;
	}
}

word32 fn00411564(word32 edi, selector fs, ptr32 ebpOut, ptr32 ediOut)
{
	*ebpOut = ebp;
	word32 edi_9;
	return fn00416DD0(edi, fs, dwArg00, dwArg04, dwArg08, dwArg0C, dwArg10, out edi_9);
}

word32 fn00411578(word32 edi, selector fs, ptr32 ebpOut, ptr32 ediOut)
{
	*ebpOut = ebp;
	word32 edi_5;
	return fn00421290(edi, fs, dwArg00, out edi_5);
}

word32 fn0041157D(word32 edi, selector fs, ptr32 ebpOut, ptr32 ediOut)
{
	*ebpOut = ebp;
	word32 edi_4;
	return fn00421F00(edi, fs, out edi_4);
}

word32 fn00411587(word32 ebp, word32 edi, selector fs, word32 dwArg04, ptr32 ediOut)
{
	*ediOut = edi;
	if (Mem0[0x0042B0FC:word32] != 0x00000000)
		Mem0[0x0042B0FC:word32]();
	word32 eax_35;
	word32 eax_26 = fn00413460(0x0042830C, 0x00428520);
	if (eax_26 != 0x00000000)
		eax_35 = eax_26;
	else
	{
		Mem42[fp - 0x0000000C:word32] = 0x004110CD;
		word32 edi_43;
		*ediOut = fn00411181(edi, fs, 0x00428520);
		Mem47[fp - 0x0000000C:word32] = 0x00428208;
		Mem49[fp - 0x00000010:word32] = 0x00428000;
		fn00413430(dwArg00, dwArg04);
		eax_35 = 0x00000000;
	}
	return eax_35;
}

void fn0041158C(word32 edi, selector fs, word32 dwArg04)
{
	fn004132B0(edi, fs, dwArg04, 0x00000000, 0x00000000);
	return;
}

word32 fn00411596(word32 ebp, word32 edi, selector fs, ptr32 ediOut)
{
	*ediOut = edi;
	word32 ebp_12 = fp - 0x00000004;
	word32 esp_13 = fp - 0x00000014;
	if (Mem0[0x0042B0F8:word32] == 0x00000000)
	{
		ebp_12 = fn0041109B(edi, fs, out edi);
		esp_13 = fp + 0xFFFFFFE8;
	}
	word32 eax_152;
	Mem14[ebp_12 - 0x00000008:word32] = 0x00000000;
	word32 eax_15 = Mem14[0x004295FC:word32];
	Mem16[ebp_12 - 0x00000004:word32] = eax_15;
	if (Mem16[ebp_12 - 0x00000004:word32] == 0x00000000)
		eax_152 = eax_15 | 0xFFFFFFFF;
	else
	{
		while ((int32) Mem16[Mem16[ebp_12 - 0x00000004:word32]:byte] != 0x00000000)
		{
			if ((int32) Mem16[Mem16[ebp_12 - 0x00000004:word32]:byte] != 0x0000003D)
				Mem62[ebp_12 - 0x00000008:word32] = Mem16[ebp_12 - 0x00000008:word32] + 0x00000001;
			word32 eax_49 = Mem16[ebp_12 - 0x00000004:word32];
			word32 esp_50 = esp_13 - 0x00000004;
			Mem51[esp_50 + 0x00000000:word32] = eax_49;
			Mem58[ebp_12 - 0x00000004:word32] = Mem51[ebp_12 - 0x00000004:word32] + 0x00000001 + fn00411235(eax_49, dwArg00);
			esp_13 = esp_50 + 0x00000004;
		}
		word32 esp_63 = esp_13 - 0x00000004;
		Mem64[esp_63 + 0x00000000:word32] = 0x00000075;
		Mem66[esp_63 - 0x00000004:word32] = 0x00425698;
		Mem68[esp_63 - 0x00000008:word32] = 0x00000002;
		Mem72[esp_63 - 0x0000000C:word32] = Mem68[ebp_12 - 0x00000008:word32] * 0x00000004 + 0x00000004;
		word32 edi_110;
		word32 ebp_116;
		word32 eax_76 = fn00411064(edi, fs, out ebp_116, out edi_110);
		Mem79[ebp_116 - 0x0000000C:word32] = eax_76;
		Mem81[0x00429658:word32] = Mem79[ebp_116 - 0x0000000C:word32];
		word32 esp_103 = esp_63;
		if (Mem81[0x00429658:word32] == 0x00000000)
			eax_152 = eax_76 | 0xFFFFFFFF;
		else
		{
			Mem88[ebp_116 - 0x00000004:word32] = Mem81[0x004295FC:word32];
			word32 eax_95 = (int32) Mem88[Mem88[ebp_116 - 0x00000004:word32]:byte];
			while (eax_95 != 0x00000000)
			{
				word32 esp_100 = esp_103 - 0x00000004;
				Mem101[esp_100 + 0x00000000:word32] = Mem88[ebp_116 - 0x00000004:word32];
				Mem105[ebp_116 - 0x00000010:word32] = fn00411235(eax_95, dwArg00) + 0x00000001;
				esp_103 = esp_100 + 0x00000004;
				if ((int32) Mem105[Mem105[ebp_116 - 0x00000004:word32]:byte] != 0x0000003D)
				{
					Mem123[esp_100 + 0x00000000:word32] = 0x00000082;
					Mem125[esp_100 - 0x00000004:word32] = 0x00425698;
					Mem127[esp_100 - 0x00000008:word32] = 0x00000002;
					Mem130[esp_100 - 0x0000000C:word32] = Mem127[ebp_116 - 0x00000010:word32];
					word32 edi_132;
					word32 eax_133 = fn00411064(edi_110, fs, out ebp_116, out edi_132);
					Mem137[Mem130[ebp_116 - 0x0000000C:word32]:word32] = eax_133;
					word32 eax_138 = Mem137[ebp_116 - 0x0000000C:word32];
					if (Mem137[eax_138 + 0x00000000:word32] == 0x00000000)
					{
						Mem142[esp_100 - 0x00000004:word32] = 0x00000002;
						Mem145[esp_100 - 0x00000008:word32] = Mem142[0x00429658:word32];
						word32 ebp_146;
						word32 edi_147;
						word32 eax_148 = fn0041141A(eax_138, ebp_116, edi_132, fs, out ebp_146, out edi_147);
						Mem151[0x00429658:word32] = 0x00000000;
						eax_152 = eax_148 | 0xFFFFFFFF;
						goto l004139F2;
					}
					Mem157[esp_100 - 0x00000004:word32] = Mem137[ebp_116 - 0x00000004:word32];
					Mem161[esp_100 - 0x00000008:word32] = Mem157[Mem157[ebp_116 - 0x0000000C:word32]:word32];
					fn00411258(edi_132, out edi_110);
					Mem169[ebp_116 - 0x0000000C:word32] = Mem161[ebp_116 - 0x0000000C:word32] + 0x00000004;
					esp_103 = esp_100 + 0xFFFFFFFC;
					goto l004139BE;
				}
l004139BE:
				Mem121[ebp_116 - 0x00000004:word32] = Mem105[ebp_116 - 0x00000004:word32] + Mem105[ebp_116 - 0x00000010:word32];
				eax_95 = (int32) Mem88[Mem88[ebp_116 - 0x00000004:word32]:byte];
			}
			word32 esp_170 = esp_103 - 0x00000004;
			Mem171[esp_170 + 0x00000000:word32] = 0x00000002;
			word32 eax_172 = Mem171[0x004295FC:word32];
			Mem174[esp_170 - 0x00000004:word32] = eax_172;
			word32 ebp_175;
			word32 edi_176;
			fn0041141A(eax_172, ebp_116, edi_110, fs, out ebp_175, out edi_176);
			Mem180[0x004295FC:word32] = 0x00000000;
			Mem182[Mem180[ebp_175 - 0x0000000C:word32]:word32] = 0x00000000;
			Mem183[0x0042B0E0:word32] = 0x00000001;
			eax_152 = 0x00000000;
		}
	}
l004139F2:
	return eax_152;
}

word32 fn0041159B(word32 edx, selector fs, ptr32 ebpOut)
{
	*ebpOut = ebp;
	fn00411D60(edx, fs, dwArg00);
	return edx;
}

word32 fn004115A0()
{
	return fn0041F9F0(dwArg00, dwArg04, dwArg08, dwArg0C);
}

word32 fn004115B4()
{
	return Mem0[0x0042960C:word32];
}

void fn00411D60(word32 edx, selector fs, word32 dwArg04)
{
	word32 edi_17 = fp + 0xFFFFFF04;
	word32 ecx_18 = 0x0000003E;
	while (ecx_18 != 0x00000000)
	{
		Mem22[edi_17 + 0x00000000:word32] = 0xCCCCCCCC;
		edi_17 = edi_17 + 0x00000004;
		ecx_18 = ecx_18 - 0x00000001;
	}
	LoadIconA(dwArg04, 0x0000006B);
	fn00411424(fs);
	LoadCursorA(0x00000000, 0x00007F00);
	fn00411424(fs);
	LoadIconA(dwArg04, 0x0000006C);
	fn00411424(fs);
	word32 eax_73 = RegisterClassExA(fp - 0x00000038);
	fn00411424(fs);
	fn004111D1(fp - 0x00000004, 0x00411E3D, fp - 0x00000004, fs, dwLoc0124, eax_73, edx);
	fn00411424(fs);
	return;
}

void fn00412320(selector fs, word32 dwArg00)
{
	if (!Z)
		return;
	else
	{
		fn0041155A(fs, dwArg00, 0x00000000);
		return;
	}
}

word32 fn00412660(word32 edi, selector fs, ptr32 ediOut)
{
	if (Mem0[0x00429604:word32] == 0x00000001)
		edi = fn004114BF(edi, fs);
	word32 eax_11 = Mem0[fp + 0x00000004:word32];
	Mem13[fp - 0x00000008:word32] = eax_11;
	word32 edi_15;
	word32 ebp_16 = fn00411230(fp - 0x00000004, edi, fs, out edi_15);
	Mem21[fp + 0xFFFFFFF4:word32] = 0x000000FF;
	Mem21[0x00428B40:word32]();
	return Mem21[fp + 0xFFFFFFF8:word32];
}

word32 fn004126A0(word32 edi, selector fs, ptr32 ediOut)
{
	if (Mem0[0x00429604:word32] == 0x00000001)
		edi = fn004114BF(edi, fs);
	Mem13[fp - 0x00000008:word32] = Mem0[fp + 0x00000004:word32];
	word32 edi_15;
	fn00411230(fp - 0x00000004, edi, fs, out edi_15);
	Mem21[fp + 0xFFFFFFF4:word32] = 0x000000FF;
	fn0041122B();
	return Mem21[fp + 0xFFFFFFF4:word32];
}

void fn004126E0()
{
	word32 eax_9 = GetModuleHandleA(0x00000000);
	if ((word32) Mem0[eax_9 + 0x00000000:word16] != 0x00005A4D)
		;
	else
	{
		word32 eax_47 = eax_9 + Mem0[eax_9 + 0x0000003C:word32];
		if (Mem0[eax_47 + 0x00000000:word32] != 0x00004550)
			;
		else
		{
			word32 ecx_59 = (word32) Mem0[eax_47 + 0x00000018:word16];
			if (ecx_59 != 0x0000010B)
				if (ecx_59 != 0x0000020B)
					;
				else if (Mem0[eax_47 + 0x00000084:word32] <=u 0x0000000E)
					;
			else if (Mem0[eax_47 + 0x00000074:word32] <=u 0x0000000E)
				;
		}
	}
	return;
}

void fn00412930(word32 ebp, selector fs, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10)
{
	byte al_180;
	word32 eax_21 = fn004115B4();
	word32 esp_176 = fp - 0x0000001C;
	if (fn00412A60(fs, 0x00001002) != 0x00000000)
	{
		word32 eax_130 = dwArg10;
		do
		{
			eax_130 = eax_201 + 0x00000001;
			word32 eax_201 = eax_130;
		} while (Mem0[eax_201 + 0x00000000:byte] != 0x00);
		word32 eax_141 = eax_130 - (dwArg10 + 0x00000001);
		fn00414C20(eax_141 + 0x00000004 + eax_141 + 0x00000003 & 0xFFFFFFFC, dwArg04);
		byte cl_148 = Mem0[dwArg10 + 0x00000000:byte];
		word32 eax_153 = 0x00000001;
		if (cl_148 != 0x00)
			do
			{
				(fp - 0x0000001C)[eax_153 * 0x0002] = (int16) cl_148;
				cl_148 = Mem188[eax_153 + 0x00000000 + dwArg10:byte];
				eax_153 = eax_153 + 0x00000001;
			} while (cl_148 != 0x00);
		Mem165[fp - 0x00000020:word32] = fp - 0x0000001C;
		(fp - 0x0000001C)[eax_153 * 0x0002] = 0x0000;
		word32 edx_168 = 0x004251F8[dwArg0C * 0x00000004];
		Mem170[fp - 0x00000024:word32] = dwArg04;
		Mem172[fp - 0x00000028:word32] = edx_168;
		Mem174[fp - 0x0000002C:word32] = dwArg0C;
		esp_176 = fp - 0x0000001C;
		if (fn00412B00(fs, dwArg00, dwArg04, dwArg08, dwArg0C) == 0x00000000)
		{
			al_180 = 0x00;
l004129B9:
			if (eax_21 != 0x00000000 && (al_180 == 0x00 || fn004130A0() == 0x00000000))
			{
				fn00414C20(0x00000204, ebp);
				word32 esp_87 = esp_176 - 0x00000004;
				Mem88[esp_87 + 0x00000000:word32] = fp - 0x00000008;
				Mem91[esp_87 - 0x00000004:word32] = fp - 0x0000000C;
				Mem93[esp_87 - 0x00000008:word32] = 0x00000200;
				Mem95[esp_87 - 0x0000000C:word32] = esp_176;
				Mem99[esp_87 - 0x00000010:word32] = dwArg04 + 0xFFFFFFFB;
				fn00411334(fp - 0x00000004, dwArg00, dwArg04, dwArg08, dwArg0C, dwArg10);
				Mem109[esp_87 - 0x00000014:word32] = dwArg10;
				Mem111[esp_87 - 0x00000018:word32] = dwArg0C;
				Mem114[esp_87 - 0x0000001C:word32] = 0x004254FC;
				Mem116[esp_87 - 0x00000020:word32] = dwLoc08;
				Mem118[esp_87 - 0x00000024:word32] = dwLoc0C;
				Mem120[esp_87 - 0x00000028:word32] = esp_176;
				Mem122[esp_87 - 0x0000002C:word32] = dwArg08;
				eax_21();
				if (dwLoc08 == 0x00000001)
				{
l00412A0F:
					DebugBreak();
				}
			}
			else
				goto l00412A0F;
		}
	}
	else
	{
		al_180 = 0x01;
		goto l004129B9;
	}
	return;
}

word32 fn00412A60(selector fs, word32 dwArg04)
{
	word32 eax_14 = Mem0[fs:0x00000000:word32];
	Mem17[fs:0x00000000:word32] = fp - 0x00000014;
	RaiseException(0x406D1388, 0x00000000, 0x00000006, fp - 0x00000038);
	Mem55[fs:0x00000000:word32] = eax_14;
	return 0x00000000;
}

word32 fn00412B00(selector fs, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10)
{
	word32 eax_14 = Mem0[fs:0x00000000:word32];
	Mem17[fs:0x00000000:word32] = fp - 0x00000014;
	RaiseException(0x406D1388, 0x00000000, 0x00000006, fp - 0x00000038);
	Mem64[fs:0x00000000:word32] = eax_14;
	return 0x00000000;
}

word32 fn004130A0()
{
	word32 eax_3 = Mem0[0x00429628:word32];
	if (eax_3 == 0x00000000)
	{
		word32 eax_15 = fn004130E0();
		if (eax_15 == 0x00000000)
			RaiseException(0xC0000135, eax_15, eax_15, eax_15);
		Mem24[0x00429628:word32] = 0x00000001;
	}
	Mem0[0x00429610:word32]();
	return eax_3;
}

word32 fn004130E0()
{
	word32 eax_17 = GetProcAddress(LoadLibraryA(0x00425664), 0x0042564C);
	Mem22[0x00429610:word32] = eax_17;
	if (eax_17 == 0x00000000)
	{
		fn00414C20(0x00000094, 0x0042564C);
		Mem52[fp - 0x0000000C:word32] = fp - 0x00000008;
		Mem53[fp - 0x00000008:word32] = 0x00000094;
		if (GetVersionExA(Mem53[fp - 0x0000000C:LPOSVERSIONINFOA]) != 0x00000000 && (Mem53[fp + 0x00000008:word32] == 0x00000001 && Mem53[fp - 0x00000004:word32] == 0x00000004))
		{
			Mem73[0x00429610:word32] = 0x00413180;
			return 0x00000001;
		}
		else
		{
			eax_17 = Mem53[0x00429610:word32];
l0041314B:
			return (word32) (eax_17 != 0x00000000);
		}
	}
	else
		goto l0041314B;
}

void fn004132B0(word32 edi, selector fs, word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	if (Mem0[0x00429678:word32] == 0x00000001)
		TerminateProcess(GetCurrentProcess(), dwArg04);
	Mem16[0x00429674:word32] = 0x00000001;
	Mem19[0x00429670:byte] = bArg0C;
	if (dwArg08 == 0x00000000)
	{
		if (Mem19[0x0042B0F4:word32] != 0x00000000)
		{
			Mem103[0x0042B0F0:word32] = Mem19[0x0042B0F0:word32] - 0x00000004;
			word32 eax_104 = Mem103[0x0042B0F0:word32];
			while (eax_104 >=u Mem103[0x0042B0F4:word32])
			{
				word32 ecx_107 = Mem103[0x0042B0F0:word32];
				if (Mem103[ecx_107 + 0x00000000:word32] != 0x00000000)
				{
					word32 edx_122 = Mem103[0x0042B0F0:word32];
					Mem103[edx_122 + 0x00000000:word32]();
				}
				Mem103[0x0042B0F0:word32] = Mem19[0x0042B0F0:word32] - 0x00000004;
				eax_104 = Mem103[0x0042B0F0:word32];
			}
		}
		fn00413430(0x00428624, 0x0042882C);
	}
	fn00413430(0x00428930, 0x00428A34);
	word32 esp_42 = fp - 0x00000004;
	if (Mem19[0x0042967C:word32] == 0x00000000)
	{
		Mem66[fp - 0x00000008:word32] = 0xFFFFFFFF;
		esp_42 = fp + 0xFFFFFFF8;
		if ((fn0041114F() & 0x00000020) != 0x00000000)
		{
			Mem74[0x0042967C:word32] = 0x00000001;
			fn004113DE(edi, fs);
		}
	}
	if (dwArg0C != 0x00000000)
		;
	else
	{
		Mem57[0x00429678:word32] = 0x00000001;
		Mem61[esp_42 - 0x00000004:word32] = dwArg04;
		fn0041122B();
	}
	return;
}

void fn004133D0(word32 dwArg04)
{
	word32 eax_9 = GetModuleHandleA(0x00425688);
	word32 esp_10 = fp - 0x0000000C;
	if (eax_9 != 0x00000000)
	{
		Mem32[fp - 0x00000010:word32] = 0x00425674;
		word32 eax_36 = GetProcAddress(eax_9, 0x00425688);
		esp_10 = fp - 0x0000000C;
		if (eax_36 != 0x00000000)
		{
			Mem43[fp - 0x00000010:word32] = dwArg04;
			esp_10 = fp - 0x00000010;
			eax_36();
		}
	}
	word32 esp_26 = esp_10 - 0x00000004;
	Mem27[esp_26 + 0x00000000:word32] = dwArg04;
	ExitProcess(Mem27[esp_26 + 0x00000000:UINT]);
	return;
}

void fn00413430(word32 dwArg04, word32 dwArg08)
{
	while (dwArg04 <u dwArg08)
	{
		if (Mem0[dwArg04 + 0x00000000:word32] != 0x00000000)
			Mem0[dwArg04 + 0x00000000:word32]();
		dwArg04 = dwArg04 + 0x00000004;
	}
	return;
}

word32 fn00413460(word32 dwArg04, word32 dwArg08)
{
	word32 dwLoc08_18 = 0x00000000;
	while (dwArg04 <u dwArg08 && dwLoc08_18 == 0x00000000)
	{
		if (Mem0[dwArg04 + 0x00000000:word32] != 0x00000000)
		{
			Mem0[dwArg04 + 0x00000000:word32]();
			dwLoc08_18 = dwArg04;
		}
		dwArg04 = dwArg04 + 0x00000004;
	}
	return dwLoc08_18;
}

void fn00413B80(word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, word32 dwArg14)
{
	Mem9[dwArg14 + 0x00000000:word32] = 0x00000000;
	Mem12[dwArg10 + 0x00000000:word32] = 0x00000001;
	word32 dwLoc08_139 = dwArg04;
	if (dwArg08 != 0x00000000)
	{
		Mem459[dwArg08 + 0x00000000:word32] = dwArg0C;
		dwArg08 = dwArg08 + 0x00000004;
	}
	word32 dwLoc0C_24 = 0x00000000;
	do
	{
		byte bLoc11_401;
		if ((int32) Mem12[dwLoc08_139 + 0x00000000:byte] == 0x00000022)
		{
			dwLoc0C_24 = (word32) (dwLoc0C_24 == 0x00000000);
			bLoc11_401 = Mem12[dwLoc08_139 + 0x00000000:byte];
			dwLoc08_139 = dwLoc08_139 + 0x00000001;
		}
		else
		{
			Mem410[dwArg14 + 0x00000000:word32] = Mem12[dwArg14 + 0x00000000:word32] + 0x00000001;
			if (dwArg0C != 0x00000000)
			{
				Mem452[dwArg0C + 0x00000000:byte] = Mem410[dwLoc08_139 + 0x00000000:byte];
				dwArg0C = dwArg0C + 0x00000001;
			}
			byte dl_416 = Mem410[dwLoc08_139 + 0x00000000:byte];
			word32 eax_419 = dwLoc08_139 + 0x00000001;
			bLoc11_401 = dl_416;
			dwLoc08_139 = eax_419;
			if (((word32) Mem410[(word32) dl_416 + 0x0042AD41:byte] & 0x00000004) != 0x00000000)
			{
				Mem431[dwArg14 + 0x00000000:word32] = Mem410[dwArg14 + 0x00000000:word32] + 0x00000001;
				if (dwArg0C != 0x00000000)
				{
					Mem444[dwArg0C + 0x00000000:byte] = Mem431[eax_419 + 0x00000000:byte];
					dwArg0C = dwArg0C + 0x00000001;
				}
				dwLoc08_139 = eax_419 + 0x00000001;
			}
		}
	} while ((word32) bLoc11_401 == 0x00000000 || dwLoc0C_24 == 0x00000000 && ((word32) bLoc11_401 == 0x00000020 || (word32) bLoc11_401 == 0x00000009));
	if ((word32) bLoc11_401 == 0x00000000)
		dwLoc08_139 = dwLoc08_139 - 0x00000001;
	else if (dwArg0C != 0x00000000)
		Mem384[dwArg0C - 0x00000001:byte] = 0x00;
	word32 dwLoc0C_128 = 0x00000000;
	while (true)
	{
		if ((int32) Mem12[dwLoc08_139 + 0x00000000:byte] != 0x00000000)
			while ((int32) Mem12[dwLoc08_139 + 0x00000000:byte] == 0x00000020 || (int32) Mem12[dwLoc08_139 + 0x00000000:byte] == 0x00000009)
				dwLoc08_139 = dwLoc08_139 + 0x00000001;
		if ((int32) Mem12[dwLoc08_139 + 0x00000000:byte] == 0x00000000)
		{
			if (dwArg08 != 0x00000000)
				Mem112[dwArg08 + 0x00000000:word32] = 0x00000000;
			Mem107[dwArg10 + 0x00000000:word32] = Mem12[dwArg10 + 0x00000000:word32] + 0x00000001;
			return;
		}
		if (dwArg08 != 0x00000000)
		{
			Mem355[dwArg08 + 0x00000000:word32] = dwArg0C;
			dwArg08 = dwArg08 + 0x00000004;
		}
		Mem125[dwArg10 + 0x00000000:word32] = Mem12[dwArg10 + 0x00000000:word32] + 0x00000001;
		while (true)
		{
			word32 dwLoc18_141 = 0x00000000;
			while ((int32) Mem125[dwLoc08_139 + 0x00000000:byte] == 0x0000005C)
			{
				dwLoc08_139 = dwLoc08_139 + 0x00000001;
				dwLoc18_141 = dwLoc18_141 + 0x00000001;
			}
			if ((int32) Mem125[dwLoc08_139 + 0x00000000:byte] == 0x00000022)
			{
				if (SEQ(0x00000000, dwLoc18_141) % 0x00000002 == 0x00000000)
				{
					if (dwLoc0C_128 == 0x00000000)
						Mem352[fp - 0x00000010:word32] = 0x00000000;
					else if ((int32) Mem125[dwLoc08_139 + 0x00000001:byte] == 0x00000022)
						dwLoc08_139 = dwLoc08_139 + 0x00000001;
					else
						Mem351[fp - 0x00000010:word32] = 0x00000000;
					dwLoc0C_128 = (word32) (dwLoc0C_128 == 0x00000000);
				}
				dwLoc18_141 = dwLoc18_141 >>u 0x00000001;
				goto l00413D92;
			}
l00413D92:
			dwLoc18_141 = dwLoc18_141 - 0x00000001;
			while (dwLoc18_141 != 0x00000000)
			{
				if (dwArg0C != 0x00000000)
				{
					Mem185[dwArg0C + 0x00000000:byte] = 0x5C;
					dwArg0C = dwArg0C + 0x00000001;
				}
				Mem183[dwArg14 + 0x00000000:word32] = Mem125[dwArg14 + 0x00000000:word32] + 0x00000001;
				dwLoc18_141 = dwLoc18_141 - 0x00000001;
			}
			if ((int32) Mem125[dwLoc08_139 + 0x00000000:byte] == 0x00000000 || dwLoc0C_128 == 0x00000000 && ((int32) Mem125[dwLoc08_139 + 0x00000000:byte] == 0x00000020 || (int32) Mem125[dwLoc08_139 + 0x00000000:byte] == 0x00000009))
			{
				if (dwArg0C != 0x00000000)
				{
					Mem210[dwArg0C + 0x00000000:byte] = 0x00;
					dwArg0C = dwArg0C + 0x00000001;
				}
				Mem208[dwArg14 + 0x00000000:word32] = Mem125[dwArg14 + 0x00000000:word32] + 0x00000001;
			}
			if (0x00000001 != 0x00000000)
			{
				if (dwArg0C != 0x00000000)
				{
					if (((word32) Mem125[(word32) Mem125[dwLoc08_139 + 0x00000000:byte] + 0x0042AD41:byte] & 0x00000004) != 0x00000000)
					{
						Mem272[dwArg0C + 0x00000000:byte] = Mem125[dwLoc08_139 + 0x00000000:byte];
						Mem284[dwArg14 + 0x00000000:word32] = Mem272[dwArg14 + 0x00000000:word32] + 0x00000001;
						dwArg0C = dwArg0C + 0x00000001;
						dwLoc08_139 = dwLoc08_139 + 0x00000001;
					}
					Mem264[dwArg0C + 0x00000000:byte] = Mem125[dwLoc08_139 + 0x00000000:byte];
					dwArg0C = dwArg0C + 0x00000001;
				}
				else if (((word32) Mem125[(word32) Mem125[dwLoc08_139 + 0x00000000:byte] + 0x0042AD41:byte] & 0x00000004) != 0x00000000)
				{
					Mem300[dwArg14 + 0x00000000:word32] = Mem125[dwArg14 + 0x00000000:word32] + 0x00000001;
					dwLoc08_139 = dwLoc08_139 + 0x00000001;
				}
				Mem249[dwArg14 + 0x00000000:word32] = Mem125[dwArg14 + 0x00000000:word32] + 0x00000001;
			}
			dwLoc08_139 = dwLoc08_139 + 0x00000001;
		}
	}
}

word32 fn00414C20(word32 eax, word32 dwArg00)
{
	if (eax <u 0x00001000)
	{
		Mem24[-eax + fp:word32] = dwArg00;
		return dwArg00;
	}
	else
	{
		word32 ecx_29 = fp + 0x00000004;
		do
		{
			ecx_29 = ecx_29 - 0x00001000;
			eax = eax - 0x00001000;
		} while (eax >=u 0x00001000);
		Mem45[ecx_29 - eax - 0x00000004:word32] = dwArg00;
		return dwArg00;
	}
}

word32 fn00414CD0(word32 ebp, word32 edi, selector fs, word32 dwArg04)
{
	word32 ebp_257 = fp - 0x00000004;
	word32 esp_11 = fp - 0x0000012C;
	word32 dwLoc08_14 = 0x00000000;
	while (dwLoc08_14 <u 0x00000013)
	{
		if (dwArg04 == 0x00428C60[dwLoc08_14 * 0x00000008])
			goto l00414D0D;
		dwLoc08_14 = dwLoc08_14 + 0x00000001;
	}
l00414D0D:
	if (dwArg04 == 0x00428C60[dwLoc08_14 * 0x00000008])
	{
		if (dwArg04 != 0x000000FC && dwArg04 != 0x000000FF)
		{
			esp_11 = fp + 0xFFFFFED0;
			word32 ecx_256;
			if (fn0041119F(fp - 0x00000004, edi, fs, out ecx_256, out ebp_257, out edi) == 0x00000001)
				int3();
		}
		if (Mem0[0x00429604:word32] != 0x00000001 && (Mem0[0x00429604:word32] != 0x00000000 || Mem0[0x00428B44:word32] != 0x00000001))
			if (Mem0[ebp_257 + 0x00000008:word32] != 0x000000FC)
			{
				Mem109[ebp_257 - 0x0000001C:byte] = 0x00;
				word32 esp_110 = esp_11 - 0x00000004;
				Mem111[esp_110 + 0x00000000:word32] = 0x00000104;
				Mem114[esp_110 - 0x00000004:word32] = ebp_257 + 0xFFFFFEE0;
				Mem116[esp_110 - 0x00000008:word32] = 0x00000000;
				word32 esp_118 = esp_110 + 0x00000004;
				if (GetModuleFileNameA(Mem116[esp_110 - 0x00000008:HMODULE], Mem116[esp_110 - 4:LPSTR], Mem116[esp_110 + 0x00000000:DWORD]) == 0x00000000)
				{
					Mem231[esp_110 + 0x00000000:word32] = 0x00425B7C;
					Mem234[esp_110 - 0x00000004:word32] = ebp_257 + 0xFFFFFEE0;
					fn00411258(edi, out edi);
					esp_118 = esp_110;
				}
				Mem126[ebp_257 - 0x00000010:word32] = ebp_257 + 0xFFFFFEE0;
				word32 eax_127 = Mem126[ebp_257 - 0x00000010:word32];
				word32 esp_128 = esp_118 - 0x00000004;
				Mem129[esp_128 + 0x00000000:word32] = eax_127;
				word32 eax_130 = fn00411235(eax_127, dwArg00);
				word32 esp_131 = esp_128 + 0x00000004;
				word32 eax_132 = eax_130 + 0x00000001;
				if (eax_130 >u 0xFFFFFFC5)
				{
					Mem212[esp_128 + 0x00000000:word32] = ebp_257 + 0xFFFFFEE0;
					Mem218[ebp_257 - 0x00000010:word32] = Mem212[ebp_257 - 0x00000010:word32] - 0x0000003B + fn00411235(eax_130 + 0x00000001, dwArg00);
					Mem220[esp_128 + 0x00000000:word32] = 0x00000003;
					Mem222[esp_128 - 0x00000004:word32] = 0x00425B78;
					Mem225[esp_128 - 0x00000008:word32] = Mem222[ebp_257 - 0x00000010:word32];
					eax_132 = fn00411492(ebp, dwArg00, dwArg04, dwArg08, dwArg0C);
					esp_131 = esp_128 + 0x00000004;
				}
				word32 esp_138 = esp_131 - 0x00000004;
				Mem139[esp_138 + 0x00000000:word32] = Mem129[ebp_257 - 0x00000010:word32];
				word32 eax_140 = fn00411235(eax_132, dwArg00);
				word32 eax_144 = Mem139[ebp_257 - 0x00000004:word32];
				Mem147[esp_138 + 0x00000000:word32] = 0x00428C64[eax_144 * 0x00000008];
				fn00414C20(eax_140 + 0x0000001C + fn00411235(eax_144, dwArg00) + 0x00000003 & 0xFFFFFFFC, ebp);
				Mem156[ebp_257 + 0xFFFFFEDC:word32] = esp_138 + 0x00000004;
				Mem158[ebp_257 - 0x0000000C:word32] = Mem156[ebp_257 + 0xFFFFFEDC:word32];
				Mem160[esp_138 + 0x00000000:word32] = 0x00425B58;
				Mem163[esp_138 - 0x00000004:word32] = Mem160[ebp_257 - 0x0000000C:word32];
				word32 edi_164;
				fn00411258(edi, out edi_164);
				Mem171[esp_138 - 0x00000004:word32] = Mem163[ebp_257 - 0x00000010:word32];
				Mem174[esp_138 - 0x00000008:word32] = Mem171[ebp_257 - 0x0000000C:word32];
				word32 edi_175;
				fn0041120D(edi_164, dwArg00, out edi_175);
				Mem180[esp_138 - 0x00000004:word32] = 0x00425B54;
				Mem183[esp_138 - 0x00000008:word32] = Mem180[ebp_257 - 0x0000000C:word32];
				word32 edi_184;
				fn0041120D(edi_175, dwArg00, out edi_184);
				Mem191[esp_138 - 0x00000004:word32] = 0x00428C64[Mem183[ebp_257 - 0x00000004:word32] * 0x00000008];
				Mem194[esp_138 - 0x00000008:word32] = Mem191[ebp_257 - 0x0000000C:word32];
				word32 eax_196 = fn0041120D(edi_184, dwArg00, out edi);
				Mem200[esp_138 - 0x00000004:word32] = 0x00012010;
				Mem202[esp_138 - 0x00000008:word32] = 0x00425B28;
				Mem205[esp_138 - 0x0000000C:word32] = Mem202[ebp_257 - 0x0000000C:word32];
				fn0041107D(eax_196, dwArg00, dwArg04, dwArg08);
			}
		else
		{
			word32 esp_78 = esp_11 - 0x00000004;
			Mem79[esp_78 + 0x00000000:word32] = 0x00000000;
			Mem82[esp_78 - 0x00000004:word32] = ebp_257 - 0x00000008;
			word32 eax_84 = 0x00428C64[Mem82[ebp_257 - 0x00000004:word32] * 0x00000008];
			Mem86[esp_78 - 0x00000008:word32] = eax_84;
			Mem92[esp_78 - 0x00000008:word32] = fn00411235(eax_84, dwArg00);
			Mem96[esp_78 - 0x0000000C:word32] = 0x00428C64[Mem92[ebp_257 - 0x00000004:word32] * 0x00000008];
			Mem98[esp_78 - 0x00000010:word32] = 0xFFFFFFF4;
			Mem102[esp_78 - 0x00000010:word32] = GetStdHandle(Mem98[esp_78 - 0x00000010:DWORD]);
			WriteFile(Mem102[esp_78 - 0x00000010:HANDLE], Mem102[esp_78 - 12:LPCVOID], Mem102[esp_78 - 8:DWORD], Mem102[esp_78 - 4:LPDWORD], Mem102[esp_78 + 0x00000000:LPOVERLAPPED]);
		}
	}
	word32 ecx_55;
	word32 edi_56;
	fn00411087(Mem0[ebp_257 - 0x00000014:word32], edi, fs, out ecx_55, out edi_56);
	return edi_56;
}

void fn00414FE0()
{
	DebugBreak();
	return;
}

word32 fn00415390(word32 ebp, word32 edi, selector fs, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg14, ptr32 ecxOut)
{
	fn00411131(0x00003038);
	Mem13[fp + 0xFFFFFFF4:word32] = edi;
	word32 ebp_162 = fp - 0x00000004;
	word32 esp_106 = fp + 0xFFFFFFF4;
	word32 ecx_15 = 0x000003FF;
	word32 edi_21 = fp + 0xFFFFDFED + 0x00000002;
	while (ecx_15 != 0x00000000)
	{
		Mem24[edi_21 + 0x00000000:word32] = 0x00000000;
		edi_21 = edi_21 + 0x00000004;
		ecx_15 = ecx_15 - 0x00000001;
	}
	Mem27[edi_21 + 0x00000000:word16] = 0x0000;
	Mem29[edi_21 + 0x00000000:byte] = 0x00;
	word32 ecx_31 = 0x000003FF;
	word32 edi_37 = fp + 0xFFFFEFED + 0x00000002;
	while (ecx_31 != 0x00000000)
	{
		Mem40[edi_37 + 0x00000000:word32] = 0x00000000;
		edi_37 = edi_37 + 0x00000004;
		ecx_31 = ecx_31 - 0x00000001;
	}
	Mem43[edi_37 + 0x00000000:word16] = 0x0000;
	Mem45[edi_37 + 0x00000000:byte] = 0x00;
	word32 ecx_47 = 0x000003FF;
	word32 edi_53 = fp + 0xFFFFCFED + 0x00000002;
	while (ecx_47 != 0x00000000)
	{
		Mem56[edi_53 + 0x00000000:word32] = 0x00000000;
		edi_53 = edi_53 + 0x00000004;
		ecx_47 = ecx_47 - 0x00000001;
	}
	Mem59[edi_53 + 0x00000000:word16] = 0x0000;
	word32 edi_60 = edi_53 + 0x00000000;
	Mem61[edi_60 + 0x00000000:byte] = 0x00;
	word32 edi_116 = edi_60 + 0x00000001;
	if (dwArg04 < 0x00000000 || dwArg04 >= 0x00000003)
		;
	else if (dwArg04 == 0x00000002)
	{
		Mem465[fp + 0xFFFFFFF0:word32] = 0x00428D18;
		esp_106 = fp + 0xFFFFFFF4;
		if (InterlockedIncrement(Mem465[fp + 0xFFFFFFF0:(ptr LONG)]) <= 0x00000000)
		{
l004154B5:
			if (dwArg14 != 0x00000000)
			{
				word32 esp_438 = esp_106 - 0x00000004;
				Mem439[esp_438 + 0x00000000:word32] = fp + 0x00000018;
				Mem442[esp_438 - 0x00000004:word32] = dwArg14;
				Mem444[esp_438 - 0x00000008:word32] = 0x00000FEB;
				Mem447[esp_438 - 0x0000000C:word32] = fp + 0xFFFFCFEC;
				esp_106 = esp_438 + 0x00000004;
				if (fn0041127B(fp - 0x00000004, edi_60 + 0x00000001, fs, dwArg08, out edi_116) < 0x00000000)
				{
					Mem455[esp_438 + 0x00000000:word32] = 0x00425C14;
					Mem458[esp_438 - 0x00000004:word32] = fp + 0xFFFFCFEC;
					fn00411258(edi_116, out edi_116);
					esp_106 = esp_438;
				}
			}
			if (Mem61[fp + 0x00000004:word32] == 0x00000002)
			{
				if (Mem61[fp + 0x00000014:word32] != 0x00000000)
					Mem435[fp + 0xFFFFCFC8:word32] = 0x00425BFC;
				else
					Mem436[fp + 0xFFFFCFC8:word32] = 0x00425BE4;
				word32 esp_425 = esp_106 - 0x00000004;
				Mem426[esp_425 + 0x00000000:word32] = Mem61[fp + 0xFFFFCFC8:word32];
				Mem429[esp_425 - 0x00000004:word32] = fp + 0xFFFFDFEC;
				fn00411258(edi_116, out edi_116);
				esp_106 = esp_425;
			}
			word32 esp_124 = esp_106 - 0x00000004;
			Mem125[esp_124 + 0x00000000:word32] = fp + 0xFFFFCFEC;
			Mem128[esp_124 - 0x00000004:word32] = fp + 0xFFFFDFEC;
			word32 edi_130;
			fn0041120D(edi_116, dwArg00, out edi_130);
			word32 esp_132 = esp_124 + 0x00000004;
			if (Mem128[fp + 0x00000004:word32] == 0x00000002)
			{
				if ((0x00428D1C[Mem128[fp + 0x00000004:word32] * 0x00000004] & 0x00000001) != 0x00000000)
				{
					Mem414[esp_124 + 0x00000000:word32] = 0x00425BE0;
					Mem417[esp_124 - 0x00000004:word32] = fp + 0xFFFFDFEC;
					fn0041120D(edi_130, dwArg00, out edi_130);
					esp_132 = esp_124 + 0x00000004;
				}
				word32 esp_404 = esp_132 - 0x00000004;
				Mem405[esp_404 + 0x00000000:word32] = 0x00425BDC;
				Mem408[esp_404 - 0x00000004:word32] = fp + 0xFFFFDFEC;
				fn0041120D(edi_130, dwArg00, out edi_130);
				esp_132 = esp_404 + 0x00000004;
			}
			word32 esp_149;
			if (Mem128[fp + 0x00000008:word32] != 0x00000000)
			{
				word32 esp_348 = esp_132 - 0x00000004;
				Mem349[esp_348 + 0x00000000:word32] = fp + 0xFFFFDFEC;
				Mem352[esp_348 - 0x00000004:word32] = Mem349[fp + 0x0000000C:word32];
				Mem355[esp_348 - 0x00000008:word32] = Mem352[fp + 0x00000008:word32];
				Mem357[esp_348 - 0x0000000C:word32] = 0x00425BCC;
				Mem359[esp_348 - 0x00000010:word32] = 0x00001000;
				Mem362[esp_348 - 0x00000014:word32] = fp + 0xFFFFEFEC;
				esp_149 = esp_348 + 0x00000004;
				if (fn0041100A(fp - 0x00000004, edi_130, fs, dwArg08, out edi_116) < 0x00000000)
				{
					Mem375[esp_348 + 0x00000000:word32] = 0x00425C14;
					Mem378[esp_348 - 0x00000004:word32] = fp + 0xFFFFEFEC;
					fn00411258(edi_116, out edi_116);
					esp_149 = esp_348;
				}
			}
			else
			{
				word32 esp_385 = esp_132 - 0x00000004;
				Mem386[esp_385 + 0x00000000:word32] = fp + 0xFFFFDFEC;
				Mem389[esp_385 - 0x00000004:word32] = fp + 0xFFFFEFEC;
				fn00411258(edi_130, out edi_116);
				esp_149 = esp_385;
			}
			if (Mem128[0x0042AF7C:word32] != 0x00000000)
			{
				Mem307[fp + 0xFFFFCFE4:word32] = Mem128[0x0042AF7C:word32];
				while (Mem307[ebp_162 + 0xFFFFCFE8:word32] != 0x00000000)
				{
					word32 esp_323 = esp_149 - 0x00000004;
					Mem324[esp_323 + 0x00000000:word32] = ebp_162 - 0x00000008;
					word32 edx_325 = ebp_162 + 0xFFFFEFF0;
					Mem327[esp_323 - 0x00000004:word32] = edx_325;
					word32 eax_328 = Mem327[ebp_162 + 0x00000008:word32];
					Mem330[esp_323 - 0x00000008:word32] = eax_328;
					word32 ecx_331 = Mem330[ebp_162 + 0xFFFFCFE8:word32];
					Mem330[ecx_331 + 0x0000000C:word32]();
					esp_149 = esp_323 + 0x00000004;
					if (eax_328 != 0x00000000)
					{
						if (Mem330[ebp_162 + 0x00000008:word32] == 0x00000002)
						{
							Mem341[esp_323 + 0x00000000:word32] = 0x00428D18;
							InterlockedDecrement(Mem341[esp_323 + 0x00000000:(ptr LONG)]);
						}
						goto l00415772;
					}
					Mem346[ebp_162 + 0xFFFFCFE8:word32] = Mem330[Mem330[ebp_162 + 0xFFFFCFE8:word32] + 0x00000004:word32];
				}
l00415641:
				if (Mem128[0x0042AF6C:word32] != 0x00000000)
				{
					word32 edx_285 = ebp_162 - 0x00000008;
					word32 esp_286 = esp_149 - 0x00000004;
					Mem287[esp_286 + 0x00000000:word32] = edx_285;
					word32 eax_288 = ebp_162 + 0xFFFFEFF0;
					Mem290[esp_286 - 0x00000004:word32] = eax_288;
					word32 ecx_291 = Mem290[ebp_162 + 0x00000008:word32];
					Mem293[esp_286 - 0x00000008:word32] = ecx_291;
					Mem293[0x0042AF6C:word32]();
					esp_149 = esp_286 + 0x00000004;
					if (eax_288 != 0x00000000)
						if (Mem293[ebp_162 + 0x00000008:word32] == 0x00000002)
						{
							Mem303[esp_286 + 0x00000000:word32] = 0x00428D18;
							InterlockedDecrement(Mem303[esp_286 + 0x00000000:(ptr LONG)]);
						}
					else
					{
l0041567F:
						if ((0x00428D1C[Mem128[ebp_162 + 0x00000008:word32] * 0x00000004] & 0x00000001) != 0x00000000 && 0x00428D28[Mem128[ebp_162 + 0x00000008:word32] * 0x00000004] != 0xFFFFFFFF)
						{
							word32 esp_263 = esp_149 - 0x00000004;
							Mem264[esp_263 + 0x00000000:word32] = 0x00000000;
							Mem267[esp_263 - 0x00000004:word32] = ebp_162 + 0xFFFFCFE4;
							word32 eax_268 = ebp_162 + 0xFFFFEFF0;
							Mem270[esp_263 - 0x00000008:word32] = eax_268;
							Mem275[esp_263 - 0x00000008:word32] = fn00411235(eax_268, dwArg00);
							Mem278[esp_263 - 0x0000000C:word32] = ebp_162 + 0xFFFFEFF0;
							Mem282[esp_263 - 0x00000010:word32] = 0x00428D28[Mem278[ebp_162 + 0x00000008:word32] * 0x00000004];
							WriteFile(Mem282[esp_263 - 0x00000010:HANDLE], Mem282[esp_263 - 12:LPCVOID], Mem282[esp_263 - 8:DWORD], Mem282[esp_263 - 4:LPDWORD], Mem282[esp_263 + 0x00000000:LPOVERLAPPED]);
							esp_149 = esp_263 + 0x00000004;
						}
						if ((0x00428D1C[Mem128[ebp_162 + 0x00000008:word32] * 0x00000004] & 0x00000002) != 0x00000000)
						{
							word32 esp_257 = esp_149 - 0x00000004;
							Mem258[esp_257 + 0x00000000:word32] = ebp_162 + 0xFFFFEFF0;
							OutputDebugStringA(Mem258[esp_257 + 0x00000000:LPCSTR]);
							esp_149 = esp_257 + 0x00000004;
						}
						if ((0x00428D1C[Mem128[ebp_162 + 0x00000008:word32] * 0x00000004] & 0x00000004) == 0x00000000)
							if (Mem128[ebp_162 + 0x00000008:word32] == 0x00000002)
							{
								word32 esp_252 = esp_149 - 0x00000004;
								Mem253[esp_252 + 0x00000000:word32] = 0x00428D18;
								InterlockedDecrement(Mem253[esp_252 + 0x00000000:(ptr LONG)]);
							}
						else
						{
							if (Mem128[ebp_162 + 0x00000010:word32] != 0x00000000)
							{
								word32 esp_232 = esp_149 - 0x00000004;
								Mem233[esp_232 + 0x00000000:word32] = 0x0000000A;
								Mem236[esp_232 - 0x00000004:word32] = ebp_162 + 0xFFFFCFD0;
								Mem239[esp_232 - 0x00000008:word32] = Mem236[ebp_162 + 0x00000010:word32];
								Mem244[ebp_162 + 0xFFFFCFC8:word32] = fn004111E0(dwArg00, dwArg04, dwArg08);
								esp_149 = esp_232 + 0x00000004;
							}
							else
								Mem245[ebp_162 + 0xFFFFCFC8:word32] = 0x00000000;
							word32 esp_204 = esp_149 - 0x00000004;
							Mem205[esp_204 + 0x00000000:word32] = ebp_162 + 0xFFFFCFF0;
							Mem208[esp_204 - 0x00000004:word32] = Mem205[ebp_162 + 0x00000014:word32];
							Mem211[esp_204 - 0x00000008:word32] = Mem208[ebp_162 + 0xFFFFCFC8:word32];
							Mem214[esp_204 - 0x0000000C:word32] = Mem211[ebp_162 + 0x0000000C:word32];
							Mem217[esp_204 - 0x00000010:word32] = Mem214[ebp_162 + 0x00000008:word32];
							word32 eax_221 = fn00415880(ebp_162, edi_116, fs, dwArg10, out ebp_162, out edi_116);
							Mem223[ebp_162 - 0x00000008:word32] = eax_221;
							if (Mem223[ebp_162 + 0x00000008:word32] == 0x00000002)
							{
								Mem229[esp_204 + 0x00000000:word32] = 0x00428D18;
								InterlockedDecrement(Mem229[esp_204 + 0x00000000:(ptr LONG)]);
							}
						}
					}
				}
				else
					goto l0041567F;
			}
			else
				goto l00415641;
		}
		else if (Mem465[0x004297DC:word32] == 0x00000000)
		{
			Mem501[fp + 0xFFFFFFF0:word32] = 0x00425C90;
			word32 eax_502 = LoadLibraryA(Mem501[fp + 0xFFFFFFF0:LPCSTR]);
			if (eax_502 != 0x00000000)
			{
				Mem520[fp + 0xFFFFFFF0:word32] = 0x00425C84;
				Mem523[fp + 0xFFFFFFEC:word32] = eax_502;
				Mem528[0x004297DC:word32] = GetProcAddress(Mem523[fp + 0xFFFFFFEC:HMODULE], Mem523[fp + -16:LPCSTR]);
				esp_106 = fp + 0xFFFFFFF4;
				if (Mem528[0x004297DC:word32] == 0x00000000)
l0041546B:
				else
				{
l00415473:
					word32 esp_476 = esp_106 - 0x00000004;
					Mem477[esp_476 + 0x00000000:word32] = dwArg0C;
					Mem480[esp_476 - 0x00000004:word32] = dwArg08;
					Mem482[esp_476 - 0x00000008:word32] = 0x00425C48;
					Mem485[esp_476 - 0x0000000C:word32] = fp + 0xFFFFEFEC;
					Mem485[0x004297DC:word32]();
					Mem490[esp_476 + 0x00000000:word32] = fp + 0xFFFFEFEC;
					OutputDebugStringA(Mem490[esp_476 + 0x00000000:LPCSTR]);
					Mem493[esp_476 + 0x00000000:word32] = 0x00428D18;
					InterlockedDecrement(Mem493[esp_476 + 0x00000000:(ptr LONG)]);
					fn00411037();
				}
			}
			else
				goto l0041546B;
		}
		else
			goto l00415473;
	}
	else
		goto l004154B5;
l00415772:
	word32 ecx_80;
	word32 edi_81;
	return fn00411087(Mem61[ebp_162 - 0x0000000C:word32], edi_116, fs, out ecx_80, out edi_81);
}

word32 fn00415880(word32 ebp, word32 edi, selector fs, word32 dwArg14, ptr32 ebpOut, ptr32 ediOut)
{
	fn00411131(0x00001144);
	word32 ebp_17 = fp - 0x00000004;
	word32 esp_18 = fp + 0xFFFFFFF8;
	if (dwArg14 == 0x00000000)
	{
		Mem280[fp + 0xFFFFFFF4:word32] = 0x00425DF4;
		Mem282[fp + 0xFFFFFFF0:word32] = 0x00000000;
		Mem284[fp + 0xFFFFFFEC:word32] = 0x0000023A;
		Mem286[fp + 0xFFFFFFE8:word32] = 0x00425BC0;
		Mem288[fp + 0xFFFFFFE4:word32] = 0x00000002;
		esp_18 = fp + 0xFFFFFFF8;
		word32 ecx_289;
		if (fn0041119F(fp - 0x00000004, edi, fs, out ecx_289, out ebp_17, out edi) == 0x00000001)
		{
			fn00411037();
			esp_18 = fp + 0xFFFFFFF4;
		}
	}
	Mem19[ebp_17 + 0xFFFFEFEC:byte] = 0x00;
	word32 esp_20 = esp_18 - 0x00000004;
	Mem21[esp_20 + 0x00000000:word32] = 0x00000104;
	Mem24[esp_20 - 0x00000004:word32] = ebp_17 + 0xFFFFEEE8;
	Mem26[esp_20 - 0x00000008:word32] = 0x00000000;
	word32 esp_277 = esp_20 + 0x00000004;
	if (GetModuleFileNameA(Mem26[esp_20 - 0x00000008:HMODULE], Mem26[esp_20 - 4:LPSTR], Mem26[esp_20 + 0x00000000:DWORD]) == 0x00000000)
	{
		Mem270[esp_20 + 0x00000000:word32] = 0x00425B7C;
		Mem273[esp_20 - 0x00000004:word32] = ebp_17 + 0xFFFFEEE8;
		fn00411258(edi, out edi);
		esp_277 = esp_20;
	}
	word32 eax_36 = ebp_17 + 0xFFFFEEE8;
	Mem37[ebp_17 - 0x00000008:word32] = eax_36;
	word32 esp_39 = esp_277 - 0x00000004;
	Mem40[esp_39 + 0x00000000:word32] = Mem37[ebp_17 - 0x00000008:word32];
	word32 eax_266 = fn00411235(eax_36, dwArg00);
	word32 esp_227 = esp_39 + 0x00000004;
	if (eax_266 >u 0x00000040)
	{
		Mem252[esp_39 + 0x00000000:word32] = Mem40[ebp_17 - 0x00000008:word32];
		Mem258[ebp_17 - 0x00000008:word32] = Mem252[ebp_17 - 0x00000008:word32] - 0x00000040 + fn00411235(eax_266, dwArg00);
		Mem260[esp_39 + 0x00000000:word32] = 0x00000003;
		Mem262[esp_39 - 0x00000004:word32] = 0x00425B78;
		Mem265[esp_39 - 0x00000008:word32] = Mem262[ebp_17 - 0x00000008:word32];
		eax_266 = fn00411492(ebp, dwArg00, dwArg04, dwArg08, dwArg0C);
		esp_227 = esp_39 + 0x00000004;
	}
	Mem50[ebp_17 - 0x00000004:word32] = Mem40[ebp_17 + 0x00000014:word32];
	if (Mem50[ebp_17 - 0x00000004:word32] != 0x00000000)
	{
		word32 esp_224 = esp_227 - 0x00000004;
		Mem225[esp_224 + 0x00000000:word32] = Mem50[ebp_17 - 0x00000004:word32];
		esp_227 = esp_224 + 0x00000004;
		if (fn00411235(eax_266, dwArg00) >u 0x00000040)
		{
			word32 eax_230 = Mem225[ebp_17 - 0x00000004:word32];
			Mem232[esp_224 + 0x00000000:word32] = eax_230;
			Mem238[ebp_17 - 0x00000004:word32] = Mem232[ebp_17 - 0x00000004:word32] - 0x00000040 + fn00411235(eax_230, dwArg00);
			Mem240[esp_224 + 0x00000000:word32] = 0x00000003;
			Mem242[esp_224 - 0x00000004:word32] = 0x00425B78;
			Mem245[esp_224 - 0x00000008:word32] = Mem242[ebp_17 - 0x00000004:word32];
			fn00411492(ebp, dwArg00, dwArg04, dwArg08, dwArg0C);
			esp_227 = esp_224 + 0x00000004;
		}
	}
	if (Mem50[ebp_17 + 0x00000008:word32] == 0x00000002)
		Mem221[ebp_17 + 0xFFFFEEE0:word32] = 0x00425D68;
	else
		Mem222[ebp_17 + 0xFFFFEEE0:word32] = 0x004250EC;
	if ((int32) Mem50[Mem50[ebp_17 + 0x00000018:word32]:byte] != 0x00000000)
		Mem219[ebp_17 + 0xFFFFEEDC:word32] = Mem50[ebp_17 + 0x00000018:word32];
	else
		Mem220[ebp_17 + 0xFFFFEEDC:word32] = 0x004250EC;
	if ((int32) Mem50[Mem50[ebp_17 + 0x00000018:word32]:byte] != 0x00000000 && Mem50[ebp_17 + 0x00000008:word32] == 0x00000002)
		Mem217[ebp_17 + 0xFFFFEED8:word32] = 0x00425D58;
	else
		Mem214[ebp_17 + 0xFFFFEED8:word32] = 0x004250EC;
	if ((int32) Mem50[Mem50[ebp_17 + 0x00000018:word32]:byte] != 0x00000000)
		Mem210[ebp_17 + 0xFFFFEED4:word32] = 0x00425B54;
	else
		Mem211[ebp_17 + 0xFFFFEED4:word32] = 0x004250EC;
	if (Mem50[ebp_17 + 0x00000010:word32] != 0x00000000)
		Mem208[ebp_17 + 0xFFFFEED0:word32] = Mem50[ebp_17 + 0x00000010:word32];
	else
		Mem209[ebp_17 + 0xFFFFEED0:word32] = 0x004250EC;
	if (Mem50[ebp_17 + 0x00000010:word32] != 0x00000000)
		Mem205[ebp_17 + 0xFFFFEECC:word32] = 0x00425D4C;
	else
		Mem206[ebp_17 + 0xFFFFEECC:word32] = 0x004250EC;
	if (Mem50[ebp_17 + 0x0000000C:word32] != 0x00000000)
		Mem203[ebp_17 + 0xFFFFEEC8:word32] = Mem50[ebp_17 + 0x0000000C:word32];
	else
		Mem204[ebp_17 + 0xFFFFEEC8:word32] = 0x004250EC;
	if (Mem50[ebp_17 + 0x0000000C:word32] != 0x00000000)
		Mem200[ebp_17 + 0xFFFFEEC4:word32] = 0x00425D40;
	else
		Mem201[ebp_17 + 0xFFFFEEC4:word32] = 0x004250EC;
	if (Mem50[ebp_17 - 0x00000004:word32] != 0x00000000)
		Mem198[ebp_17 + 0xFFFFEEC0:word32] = Mem50[ebp_17 - 0x00000004:word32];
	else
		Mem199[ebp_17 + 0xFFFFEEC0:word32] = 0x004250EC;
	if (Mem50[ebp_17 - 0x00000004:word32] != 0x00000000)
		Mem195[ebp_17 + 0xFFFFEEBC:word32] = 0x00425D34;
	else
		Mem196[ebp_17 + 0xFFFFEEBC:word32] = 0x004250EC;
	word32 esp_93 = esp_227 - 0x00000004;
	Mem94[esp_93 + 0x00000000:word32] = Mem50[ebp_17 + 0xFFFFEEE0:word32];
	Mem97[esp_93 - 0x00000004:word32] = Mem94[ebp_17 + 0xFFFFEEDC:word32];
	Mem100[esp_93 - 0x00000008:word32] = Mem97[ebp_17 + 0xFFFFEED8:word32];
	Mem103[esp_93 - 0x0000000C:word32] = Mem100[ebp_17 + 0xFFFFEED4:word32];
	Mem106[esp_93 - 0x00000010:word32] = Mem103[ebp_17 + 0xFFFFEED0:word32];
	Mem109[esp_93 - 0x00000014:word32] = Mem106[ebp_17 + 0xFFFFEECC:word32];
	Mem112[esp_93 - 0x00000018:word32] = Mem109[ebp_17 + 0xFFFFEEC8:word32];
	Mem115[esp_93 - 0x0000001C:word32] = Mem112[ebp_17 + 0xFFFFEEC4:word32];
	Mem118[esp_93 - 0x00000020:word32] = Mem115[ebp_17 + 0xFFFFEEC0:word32];
	Mem121[esp_93 - 0x00000024:word32] = Mem118[ebp_17 + 0xFFFFEEBC:word32];
	Mem124[esp_93 - 0x00000028:word32] = Mem121[ebp_17 - 0x00000008:word32];
	Mem128[esp_93 - 0x0000002C:word32] = 0x00428D34[Mem124[ebp_17 + 0x00000008:word32] * 0x00000004];
	Mem130[esp_93 - 0x00000030:word32] = 0x00425CD0;
	Mem132[esp_93 - 0x00000034:word32] = 0x00001000;
	Mem135[esp_93 - 0x00000038:word32] = ebp_17 + 0xFFFFEFF0;
	word32 edi_138;
	word32 eax_139 = fn0041100A(ebp_17, edi, fs, dwArg08, out edi_138);
	word32 esp_140 = esp_93 + 0x00000004;
	if (eax_139 < 0x00000000)
	{
		Mem186[esp_93 + 0x00000000:word32] = 0x00425C14;
		Mem189[esp_93 - 0x00000004:word32] = ebp_17 + 0xFFFFEFF0;
		eax_139 = fn00411258(edi_138, out edi_138);
		esp_140 = esp_93;
	}
	word32 esp_148 = esp_140 - 0x00000004;
	Mem149[esp_148 + 0x00000000:word32] = 0x00012012;
	Mem151[esp_148 - 0x00000004:word32] = 0x00425CA0;
	Mem154[esp_148 - 0x00000008:word32] = ebp_17 + 0xFFFFEFF0;
	Mem158[ebp_17 + 0xFFFFEEE4:word32] = fn0041107D(eax_139, dwArg00, dwArg04, dwArg08);
	if (Mem158[ebp_17 + 0xFFFFEEE4:word32] == 0x00000003)
	{
		Mem180[esp_148 + 0x00000000:word32] = 0x00000016;
		fn00411401(edi_138, fs, dwArg00);
		Mem184[esp_148 + 0x00000000:word32] = 0x00000003;
		fn00411212(edi_138, fs, dwArg00);
	}
	if (Mem158[ebp_17 + 0xFFFFEEE4:word32] == 0x00000004)
		;
	word32 ecx_167;
	word32 edi_168;
	word32 eax_169 = fn00411087(Mem158[ebp_17 - 0x0000000C:word32], edi_138, fs, out ecx_167, out edi_168);
	word32 ebp_171;
	*ebpOut = Mem158[ebp_17 + 0x00000000:word32];
	return eax_169;
}

word32 fn004160C0(word32 ebp, word32 dwArg04)
{
fn004160C0_entry:
l004160C0:
	word32 ecx_643 = Mem0[0x00429824:word32]
	word32 eax_109 = ecx_643
	branch ecx_643 == 0x00000000 l00416113
l004160D8:
	word32 edx_631 = Mem0[eax_109 + 0x00000004:word32]
	branch edx_631 >u dwArg04 || dwArg04 - edx_631 >u Mem0[eax_109 + 0x00000008:word32] l004160ED
	goto l0041639C
l004160E2:
l004160ED:
	eax_109 = Mem0[eax_109 + 0x0000001C:word32]
	branch eax_109 != 0x00000000 l004160D8
l004160F4:
	word32 esi_644 = Mem0[ecx_643 + 0x0000001C:word32]
	Mem648[fp - 0x00000828:word32] = 0x00000000
	word32 eax_649 = GetProcessHeap()
	HeapFree(eax_649, 0x00000000, ecx_643)
	Mem659[0x00429824:word32] = esi_644
	dwLoc082C = eax_649
	ecx_643 = esi_644
	branch esi_644 != 0x00000000 l004160F4
l00416113:
	branch Mem0[0x004297E8:word32] != 0x00000000 l00416207
l00416120:
	Mem532[0x004297EC:word32] = LoadLibraryA(0x00425F34)
	word32 eax_533 = LoadLibraryA(0x00425F24)
	word32 ecx_535 = Mem532[0x004297EC:word32]
	Mem540[0x004297E8:word32] = eax_533
	branch ecx_535 == 0x00000000 || eax_533 == 0x00000000 l0041639A
	goto l00416154
l0041614C:
l00416154:
	Mem546[fp - 0x00000824:word32] = 0x00425F14
	Mem548[fp - 0x00000828:word32] = eax_533
	word32 eax_549 = GetProcAddress(0x00000000, 0x00425F24)
	Mem554[0x0042980C:word32] = eax_549
	branch eax_549 == 0x00000000 l0041639A
l0041616F:
	word32 eax_555 = Mem554[0x004297EC:word32]
	Mem557[fp - 0x00000824:word32] = 0x00425EF4
	word32 eax_560 = GetProcAddress(eax_555, 0x00425F14)
	Mem565[0x00429818:word32] = eax_560
	branch eax_560 != 0x00000000 l004161D2
l00416185:
	Mem567[fp - 0x00000824:word32] = 0x00425EE8
	word32 eax_568 = LoadLibraryA(0x00425EF4)
	Mem573[0x004297E4:word32] = eax_568
	branch eax_568 == 0x00000000 l0041639A
l00416199:
	Mem575[fp - 0x00000824:word32] = 0x00425ED0
	word32 eax_578 = GetProcAddress(eax_568, 0x00425EE8)
	Mem583[0x00429814:word32] = eax_578
	branch eax_578 == 0x00000000 l0041639A
l004161AE:
	word32 ecx_584 = Mem583[0x004297E4:word32]
	Mem587[fp - 0x00000824:word32] = 0x00425EB4
	word32 eax_590 = GetProcAddress(ecx_584, 0x00425ED0)
	Mem595[0x00429810:word32] = eax_590
	branch eax_590 != 0x00000000 l00416207
l004161C5:
	return eax_590
l004161D2:
	word32 edx_605 = Mem565[0x004297EC:word32]
	Mem607[fp - 0x00000824:word32] = 0x00425EA4
	word32 eax_610 = GetProcAddress(edx_605, 0x00425EF4)
	Mem615[0x0042981C:word32] = eax_610
	branch eax_610 == 0x00000000 l0041639A
l004161ED:
	word32 eax_616 = Mem615[0x004297EC:word32]
	Mem618[fp - 0x00000824:word32] = 0x00425E94
	word32 eax_621 = GetProcAddress(eax_616, 0x00425EA4)
	Mem626[0x00429820:word32] = eax_621
	branch eax_621 == 0x00000000 l0041639A
l00416207:
	word32 esp_142
	word32 eax_137
	word32 eax_120 = Mem0[0x00429818:word32]
	word32 ebx_124 = HeapAlloc
	branch eax_120 != 0x00000000 l004162BE
l0041621A:
	word32 eax_373 = GetCurrentProcess()
	word32 edi_380 = eax_373
	esp_142 = fp - 0x00000830
	call Mem0[0x00429814:word32] (retsize: 4; depth: 2100)
	branch eax_373 == 0x00000000 l0041639A
l00416241:
	word32 esi_392 = 0x00000000
	branch false l0041633B
l00416254:
	word32 ecx_400 = (fp + 0xFFFFF7EC)[esi_392 * 0x00000004]
	word32 esp_401 = esp_142 - 0x00000004
	Mem402[esp_401 + 0x00000000:word32] = 0x0000000C
	Mem405[esp_401 - 0x00000004:word32] = fp - 0x00000014
	Mem407[esp_401 - 0x00000008:word32] = ecx_400
	Mem409[esp_401 - 0x0000000C:word32] = edi_380
	call Mem409[0x00429810:word32] (retsize: 4; depth: 4)
	branch (fp - 0x00000014 & fp - 0x00000014) == 0x00000000 l0041639A
l00416271:
	Mem414[esp_401 - 0x00000010:word32] = 0x00000020
	Mem416[esp_401 - 0x00000014:word32] = 0x00000000
	Mem419[esp_401 - 0x00000018:word32] = GetProcessHeap()
	eax_137 = HeapAlloc(Mem419[esp_401 - 0x00000018:HANDLE], Mem419[esp_401 - 20:DWORD], Mem419[esp_401 - 16:SIZE_T])
	esp_142 = esp_401 - 0x0000000C
	branch eax_137 == 0x00000000 l00416353
l00416286:
	Mem426[eax_137 + 0x0000000C:word32] = (fp + 0xFFFFF7EC)[esi_392 * 0x00000004]
	Mem429[eax_137 + 0x00000004:word32] = dwLoc14
	word32 ecx_432 = Mem429[0x00429824:word32]
	Mem433[eax_137 + 0x00000008:word32] = dwLoc10
	Mem434[eax_137 + 0x00000018:word32] = 0x00000000
	Mem435[eax_137 + 0x0000001C:word32] = ecx_432
	Mem440[0x00429824:word32] = eax_137
	esi_392 = esi_392 + 0x00000001
	branch esi_392 <u dwLoc08 >>u 0x00000002 l00416254
l004162B9:
	goto l00416340
l004162BE:
	call eax_120 (retsize: 4; depth: 2092)
	word32 edi_445 = eax_120
	branch eax_120 == 0xFFFFFFFF l0041639A
l004162CF:
	word32 eax_450 = fn00414C20(0x00000224, dwLoc082C)
	Mem453[fp - 0x0000082C:word32] = fp - 0x00000828
	Mem455[fp - 0x00000830:word32] = eax_120
	Mem456[fp - 0x00000828:word32] = 0x00000224
	word32 esi_451 = fp - 0x00000828
	word32 esp_454 = fp - 0x00000830
	call Mem456[0x0042981C:word32] (retsize: 4; depth: 4)
	branch eax_450 == 0x00000000 l00416334
l004162ED:
l004162F0:
	word32 esp_492 = esp_454 - 0x00000004
	Mem493[esp_492 + 0x00000000:word32] = 0x00000020
	Mem495[esp_492 - 0x00000004:word32] = 0x00000000
	Mem498[esp_492 - 0x00000008:word32] = GetProcessHeap()
	word32 eax_499 = HeapAlloc(Mem498[esp_492 - 0x00000008:HANDLE], Mem498[esp_492 - 4:DWORD], Mem498[esp_492 + 0x00000000:SIZE_T])
	branch eax_499 == 0x00000000 l0041634C
l00416301:
	Mem505[eax_499 + 0x0000000C:word32] = Mem498[esi_451 + 0x0000001C:word32]
	Mem507[eax_499 + 0x00000004:word32] = Mem505[esi_451 + 0x00000014:word32]
	word32 edx_508 = Mem507[esi_451 + 0x00000018:word32]
	word32 ecx_509 = Mem507[0x00429824:word32]
	Mem511[esp_492 + 0x00000000:word32] = esi_451
	Mem513[esp_492 - 0x00000004:word32] = edi_445
	Mem514[eax_499 + 0x00000008:word32] = edx_508
	Mem515[eax_499 + 0x00000018:word32] = 0x00000000
	Mem516[eax_499 + 0x0000001C:word32] = ecx_509
	Mem517[0x00429824:word32] = eax_499
	esp_454 = esp_492 - 0x00000004
	call Mem517[0x00429820:word32] (retsize: 4; depth: 4)
	branch eax_499 != 0x00000000 l004162F0
l00416334:
	word32 esp_475 = esp_454 - 0x00000004
	Mem476[esp_475 + 0x00000000:word32] = edi_445
	CloseHandle(Mem476[esp_475 + 0x00000000:HANDLE])
	esp_142 = esp_475 + 0x00000004
l0041633B:
	eax_137 = Mem0[0x00429824:word32]
l00416340:
	branch eax_137 == 0x00000000 l00416446
l0041634A:
	goto l004163B0
l0041634C:
	Mem522[esp_492 + 0x00000000:word32] = edi_445
	CloseHandle(Mem522[esp_492 + 0x00000000:HANDLE])
	esp_142 = esp_492 + 0x00000004
l00416353:
	eax_137 = Mem0[0x00429824:word32]
l00416358:
	branch eax_137 == 0x00000000 l0041639A
l0041635C:
	word32 esp_146 = esp_142
l00416360:
	word32 ecx_149 = Mem0[eax_137 + 0x00000018:word32]
	word32 esi_154 = Mem0[eax_137 + 0x0000001C:word32]
	branch ecx_149 == 0x00000000 l0041637F
l0041636A:
	word32 esp_171 = esp_146 - 0x00000004
	Mem172[esp_171 + 0x00000000:word32] = ecx_149
	Mem174[esp_171 - 0x00000004:word32] = 0x00000000
	Mem177[esp_171 - 0x00000008:word32] = GetProcessHeap()
	HeapFree(Mem177[esp_171 - 0x00000008:HANDLE], Mem177[esp_171 - 4:DWORD], Mem177[esp_171 + 0x00000000:LPVOID])
	esp_146 = esp_171 + 0x00000004
	eax_137 = Mem177[0x00429824:word32]
l0041637F:
	word32 esp_157 = esp_146 - 0x00000004
	Mem158[esp_157 + 0x00000000:word32] = eax_137
	Mem160[esp_157 - 0x00000004:word32] = 0x00000000
	Mem163[esp_157 - 0x00000008:word32] = GetProcessHeap()
	HeapFree(Mem163[esp_157 - 0x00000008:HANDLE], Mem163[esp_157 - 4:DWORD], Mem163[esp_157 + 0x00000000:LPVOID])
	Mem170[0x00429824:word32] = esi_154
	esp_146 = esp_157 + 0x00000004
	eax_137 = esi_154
	branch esi_154 != 0x00000000 l00416360
l0041639A:
	eax_109 = 0x00000000
l0041639C:
	return eax_109
l004163A9:
l004163B0:
	word32 edx_271 = Mem0[eax_137 + 0x00000004:word32]
	word32 esp_272 = esp_142 - 0x00000004
	Mem273[esp_272 + 0x00000000:word32] = edx_271
	call Mem273[0x0042980C:word32] (retsize: 4; depth: 4)
	Mem274[eax_137 + 0x00000010:word32] = eax_137
	word32 ecx_275 = (word32) Mem274[eax_137 + 0x00000014:word16]
	word32 edx_276 = ecx_275 + 0x00000018 + eax_137
	Mem278[eax_137 + 0x00000014:word32] = edx_276
	fn00414C20(0x00000204, ebp)
	Mem282[esp_272 - 0x00000004:word32] = 0x00000200
	Mem283[esp_272 + 0x00000200:byte] = 0x00
	word32 eax_284 = Mem283[eax_137 + 0x0000000C:word32]
	Mem286[esp_272 - 0x00000008:word32] = esp_272
	Mem288[esp_272 - 0x0000000C:word32] = eax_284
	esp_142 = esp_272
	branch GetModuleFileNameA(Mem288[esp_272 - 0x0000000C:HMODULE], Mem288[esp_272 - 8:LPSTR], Mem288[esp_272 - 4:DWORD]) == 0x00000000 l00416353
l004163F3:
	byte cl_294 = Mem288[esp_272 + 0x00000000:byte]
	word32 eax_295 = 0x00000001
	branch cl_294 == 0x00 l00416409
l004163FB:
l00416400:
	eax_295 = eax_664 + 0x00000001
	word32 eax_664 = eax_295
	branch Mem288[eax_664 + 0x00000000 + esp_272:byte] != 0x00 l00416400
l00416409:
	Mem303[esp_272 - 0x00000004:word32] = eax_295 + 0x00000001
	Mem305[esp_272 - 0x00000008:word32] = 0x00000000
	word32 eax_306 = GetProcessHeap()
	Mem308[esp_272 - 0x0000000C:word32] = eax_306
	call ebx_124 (retsize: 4; depth: 4)
	Mem312[eax_137 + 0x00000018:word32] = eax_306
	branch eax_306 == 0x00000000 l00416353
	Mem316[esp_272 - 0x00000010:word32] = eax_306 + 0x00000001
	Mem318[esp_272 - 0x00000014:word32] = 0x00000000
	word32 eax_319 = GetProcessHeap()
	Mem321[esp_272 - 0x00000018:word32] = eax_319
	esp_142 = esp_272 - 0x00000018
	call ebx_124 (retsize: 4; depth: 4)
	Mem325[eax_137 + 0x00000018:word32] = eax_319
	branch eax_319 == 0x00000000 l00416353
l00416421:
	word32 eax_327 = 0x00000000
l00416423:
	Mem334[eax_663 + Mem325[eax_137 + 0x00000018:word32]:byte] = Mem325[eax_663 + esp_272:byte]
	eax_327 = eax_663 + 0x00000001
	word32 eax_663 = eax_327
	branch Mem334[eax_663 + esp_272:byte] != 0x00 l00416423
l00416436:
	branch Mem334[eax_137 + 0x0000001C:word32] != 0x00000000 l004163A9
l00416441:
	eax_137 = Mem334[0x00429824:word32]
l00416446:
	word32 ecx_237 = eax_137
	branch eax_137 == 0x00000000 l0041639A
l00416450:
	word32 edx_244 = Mem0[ecx_237 + 0x00000004:word32]
	branch edx_244 >u dwArg04 || dwArg04 - edx_244 >u Mem0[ecx_237 + 0x00000008:word32] l00416461
	goto l0041646D
l0041645A:
l00416461:
	ecx_237 = Mem0[ecx_237 + 0x0000001C:word32]
	branch ecx_237 != 0x00000000 l00416450
l00416468:
	goto l00416358
l0041646D:
	return ecx_237
fn004160C0_exit:
}

word32 fn00416570()
{
	if (Mem0[0x0042983C:word32] == 0x00000000)
	{
		word32 eax_99 = Mem0[0x00428D48:word32];
		Mem103[0x0042983C:word32] = 0x00000001;
		word32 eax_104 = LoadLibraryA(eax_99);
		if (eax_104 == 0x00000000)
		{
			word32 eax_144 = LoadLibraryA(0x00425FCC);
			if (eax_144 != 0x00000000)
			{
				Mem152[fp - 0x00000028:word32] = 0x00425FBC;
				word32 eax_155 = GetProcAddress(eax_144, 0x00425FCC);
				if (eax_155 != 0x00000000)
				{
					Mem162[fp - 0x00000028:word32] = 0x00425FA8;
					word32 eax_165 = GetProcAddress(eax_144, 0x00425FBC);
					if (eax_165 != 0x00000000)
					{
						Mem172[fp - 0x00000028:word32] = 0x00425F98;
						word32 eax_175 = GetProcAddress(eax_144, 0x00425FA8);
						if (eax_175 != 0x00000000)
						{
							Mem184[fp - 0x00000028:word32] = fp - 0x0000000C;
							eax_155();
							if (eax_175 != 0x00000000)
							{
								FreeLibrary(eax_144);
l00416601:
								return 0x00000000;
							}
							else
							{
								eax_165();
								if ((fp - 0x00000014 & fp - 0x00000014) == 0x00000000)
								{
									fn00414C20(dwLoc08 + 0x00000010 & 0xFFFFFFFC, dwLoc54);
									Mem232[fp - 0x00000054:word32] = fp - 0x00000008;
									Mem234[fp - 0x00000058:word32] = fp - 0x00000050;
									Mem237[fp - 0x0000005C:word32] = fp - 0x00000014;
									Mem239[fp - 0x00000060:word32] = 0x00000000;
									Mem241[fp - 0x00000064:word32] = 0x00425F44;
									Mem243[fp - 0x00000068:word32] = dwLoc0C;
									eax_165();
									Mem246[fp - 0x0000006C:word32] = dwLoc0C;
									eax_175();
									Mem249[fp - 0x00000070:word32] = eax_144;
									FreeLibrary(Mem249[fp - 0x00000070:HMODULE]);
									word32 dwLoc08_221 = dwLoc08 + 0x0000000D;
									if ((fp - 0x00000014 & fp - 0x00000014) != 0x00000000)
										goto l00416601;
									else
									{
										if (Mem249[fp - 0x00000052 + (dwLoc08 + 0x0000000D):byte] != 0x5C)
											Mem284[fp - 0x00000051 + (dwLoc08 + 0x0000000D):byte] = 0x5C;
										else
											dwLoc08_221 = dwLoc08 + 0x0000000C;
										word32 eax_263 = fp - 0x00000050;
										word32 ecx_265 = Mem249[0x00428D48:word32] - (fp - 0x00000050);
										word32 edi_268 = 0x0000000C;
										do
										{
											Mem273[eax_263 + dwLoc08_221:byte] = Mem249[ecx_265 + eax_263:byte];
											eax_263 = eax_263 + 0x00000001;
											edi_268 = edi_268 - 0x00000001;
										} while (edi_268 != 0x00000000);
										Mem280[fp - 0x00000070:word32] = fp - 0x00000050;
										eax_104 = LoadLibraryA(Mem280[fp - 0x00000070:LPCSTR]);
l004166A4:
										return eax_104;
									}
								}
								else
									goto l00416601;
							}
						}
						else
							goto l00416601;
					}
					else
						goto l00416601;
				}
				else
					goto l00416601;
			}
			else
				goto l00416601;
		}
		else
			goto l004166A4;
	}
	else
		goto l00416601;
}

word32 fn004168D0(word32 edi, selector fs, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, ptr32 ediOut)
{
	word32 ebp_31;
	word32 edi_32;
	word32 eax_33 = fn0041143D(edi, fs, out ebp_31, out edi_32);
	Mem37[ebp_31 - 0x00000004:word32] = eax_33;
	return Mem37[ebp_31 - 0x00000004:word32];
}

word32 fn00416940(word32 edi, selector fs, ptr32 ediOut)
{
	word32 ebp_15 = fp - 0x00000004;
	word32 esp_16 = fp - 0x00000008;
	word32 eax_44;
	word32 esp_19 = esp_16 - 0x00000004;
	Mem20[esp_19 + 0x00000000:word32] = Mem0[ebp_15 + 0x00000018:word32];
	Mem23[esp_19 - 0x00000004:word32] = Mem20[ebp_15 + 0x00000014:word32];
	Mem26[esp_19 - 0x00000008:word32] = Mem23[ebp_15 + 0x00000010:word32];
	Mem29[esp_19 - 0x0000000C:word32] = Mem26[ebp_15 + 0x00000008:word32];
	word32 eax_33 = fn00411384(ebp_15, edi, fs, out ebp_15, out edi);
	Mem36[ebp_15 - 0x00000004:word32] = eax_33;
	while (Mem36[ebp_15 - 0x00000004:word32] == 0x00000000 && Mem36[ebp_15 + 0x0000000C:word32] != 0x00000000)
	{
		Mem56[esp_19 + 0xFFFFFFFC:word32] = Mem36[ebp_15 + 0x00000008:word32];
		esp_16 = esp_19 + 0xFFFFFFFC;
		if (fn004113D9() == 0x00000000)
		{
			eax_44 = 0x00000000;
			goto l00416986;
		}
		esp_19 = esp_16 - 0x00000004;
		Mem20[esp_19 + 0x00000000:word32] = Mem0[ebp_15 + 0x00000018:word32];
		Mem23[esp_19 - 0x00000004:word32] = Mem20[ebp_15 + 0x00000014:word32];
		Mem26[esp_19 - 0x00000008:word32] = Mem23[ebp_15 + 0x00000010:word32];
		Mem29[esp_19 - 0x0000000C:word32] = Mem26[ebp_15 + 0x00000008:word32];
		eax_33 = fn00411384(ebp_15, edi, fs, out ebp_15, out edi);
		Mem36[ebp_15 - 0x00000004:word32] = eax_33;
	}
	eax_44 = Mem36[ebp_15 - 0x00000004:word32];
l00416986:
	return eax_44;
}

word32 fn004169C0(word32 ebp, word32 edi, selector fs, ptr32 ediOut)
{
	*ediOut = edi;
	word32 ebp_162 = fp - 0x00000004;
	word32 esp_22 = fp - 0x00000014;
	if (Mem0[0x00429858:word32] >u 0x00000000)
		if (Mem0[0x00429848:word32] == Mem0[0x00429858:word32] - 0x00000001)
		{
			esp_22 = fp + 0xFFFFFFE8;
			if (fn00411096(fp - 0x00000004, edi, fs, out ebp_162, out edi) == 0x00000000)
			{
				Mem343[fp + 0xFFFFFFE4:word32] = 0x004260EC;
				Mem345[fp + 0xFFFFFFE0:word32] = 0x00000000;
				Mem347[fp + 0xFFFFFFDC:word32] = 0x0000015A;
				Mem349[fp + 0xFFFFFFD8:word32] = 0x004260E0;
				Mem351[fp + 0xFFFFFFD4:word32] = 0x00000002;
				esp_22 = fp + 0xFFFFFFE8;
				word32 ecx_352;
				if (fn0041119F(ebp_162, edi, fs, out ecx_352, out ebp_162, out edi) == 0x00000001)
					int3();
			}
			Mem341[0x00429848:word32] = 0x00000000;
		}
		else
			Mem362[0x00429848:word32] = Mem0[0x00429848:word32] + 0x00000001;
	Mem24[ebp_162 - 0x0000000C:word32] = Mem0[0x00428D50:word32];
	if (Mem24[0x00428D54:word32] != 0xFFFFFFFF && Mem24[ebp_162 - 0x0000000C:word32] == Mem24[0x00428D54:word32])
		int3();
	word32 eax_150;
	word32 esp_28 = esp_22 - 0x00000004;
	Mem29[esp_28 + 0x00000000:word32] = Mem24[ebp_162 + 0x00000014:word32];
	Mem32[esp_28 - 0x00000004:word32] = Mem29[ebp_162 + 0x00000010:word32];
	word32 ecx_33 = Mem32[ebp_162 - 0x0000000C:word32];
	Mem35[esp_28 - 0x00000008:word32] = ecx_33;
	word32 edx_36 = Mem35[ebp_162 + 0x0000000C:word32];
	Mem38[esp_28 - 0x0000000C:word32] = edx_36;
	word32 eax_39 = Mem38[ebp_162 + 0x00000008:word32];
	Mem41[esp_28 - 0x00000010:word32] = eax_39;
	Mem43[esp_28 - 0x00000014:word32] = 0x00000000;
	Mem45[esp_28 - 0x00000018:word32] = 0x00000001;
	Mem45[0x00428EC0:word32]();
	word32 esp_163 = esp_28 + 0x00000004;
	if (eax_39 != 0x00000000)
	{
		if ((Mem45[ebp_162 + 0x0000000C:word32] & 0x0000FFFF) != 0x00000002 && (Mem45[0x00428D4C:word32] & 0x00000001) == 0x00000000)
			Mem319[ebp_162 - 0x00000004:word32] = 0x00000001;
		if (Mem45[ebp_162 + 0x00000008:word32] <=u 0xFFFFFFE0 && Mem45[ebp_162 + 0x00000008:word32] <=u 0x00000044)
		{
			if ((Mem45[ebp_162 + 0x0000000C:word32] & 0x0000FFFF) != 0x00000004 && (Mem45[ebp_162 + 0x0000000C:word32] != 0x00000001 && ((Mem45[ebp_162 + 0x0000000C:word32] & 0x0000FFFF) != 0x00000002 && Mem45[ebp_162 + 0x0000000C:word32] != 0x00000003)))
			{
				Mem296[esp_28 + 0x00000000:word32] = 0x0042600C;
				Mem298[esp_28 - 0x00000004:word32] = 0x00426074;
				Mem300[esp_28 - 0x00000008:word32] = 0x00000000;
				Mem302[esp_28 - 0x0000000C:word32] = 0x00000000;
				Mem304[esp_28 - 0x00000010:word32] = 0x00000000;
				Mem306[esp_28 - 0x00000014:word32] = 0x00000001;
				esp_163 = esp_28 + 0x00000004;
				word32 ecx_307;
				word32 edi_309;
				if (fn0041119F(ebp_162, edi, fs, out ecx_307, out ebp_162, out edi_309) == 0x00000001)
					int3();
			}
			Mem167[ebp_162 - 0x00000010:word32] = Mem45[ebp_162 + 0x00000008:word32] + 0x00000024;
			word32 esp_169 = esp_163 - 0x00000004;
			Mem170[esp_169 + 0x00000000:word32] = Mem167[ebp_162 - 0x00000010:word32];
			Mem174[ebp_162 - 0x00000008:word32] = fn0041106E(dwArg00);
			if (Mem174[ebp_162 - 0x00000008:word32] == 0x00000000)
				eax_150 = 0x00000000;
			else
			{
				Mem182[0x00428D50:word32] = Mem174[0x00428D50:word32] + 0x00000001;
				if (Mem182[ebp_162 - 0x00000004:word32] != 0x00000000)
				{
					Mem232[Mem182[ebp_162 - 0x00000008:word32]:word32] = 0x00000000;
					Mem234[Mem232[ebp_162 - 0x00000008:word32] + 0x00000004:word32] = 0x00000000;
					Mem236[Mem234[ebp_162 - 0x00000008:word32] + 0x00000008:word32] = 0x00000000;
					Mem238[Mem236[ebp_162 - 0x00000008:word32] + 0x0000000C:word32] = 0xFEDCBABC;
					Mem241[Mem238[ebp_162 - 0x00000008:word32] + 0x00000010:word32] = Mem238[ebp_162 + 0x00000008:word32];
					Mem243[Mem241[ebp_162 - 0x00000008:word32] + 0x00000014:word32] = 0x00000003;
					Mem245[Mem243[ebp_162 - 0x00000008:word32] + 0x00000018:word32] = 0x00000000;
				}
				else
				{
					Mem248[0x00429840:word32] = Mem182[0x00429840:word32] + Mem182[ebp_162 + 0x00000008:word32];
					Mem251[0x00429854:word32] = Mem248[0x00429854:word32] + Mem248[ebp_162 + 0x00000008:word32];
					if (Mem251[0x00429854:word32] >u Mem251[0x0042984C:word32])
						Mem286[0x0042984C:word32] = Mem251[0x00429854:word32];
					if (Mem251[0x00429850:word32] != 0x00000000)
						Mem282[Mem251[0x00429850:word32] + 0x00000004:word32] = Mem251[ebp_162 - 0x00000008:word32];
					else
						Mem284[0x00429844:word32] = Mem251[ebp_162 - 0x00000008:word32];
					Mem260[Mem251[ebp_162 - 0x00000008:word32]:word32] = Mem251[0x00429850:word32];
					Mem262[Mem260[ebp_162 - 0x00000008:word32] + 0x00000004:word32] = 0x00000000;
					Mem265[Mem262[ebp_162 - 0x00000008:word32] + 0x00000008:word32] = Mem262[ebp_162 + 0x00000010:word32];
					Mem268[Mem265[ebp_162 - 0x00000008:word32] + 0x0000000C:word32] = Mem265[ebp_162 + 0x00000014:word32];
					Mem271[Mem268[ebp_162 - 0x00000008:word32] + 0x00000010:word32] = Mem268[ebp_162 + 0x00000008:word32];
					Mem274[Mem271[ebp_162 - 0x00000008:word32] + 0x00000014:word32] = Mem271[ebp_162 + 0x0000000C:word32];
					Mem277[Mem274[ebp_162 - 0x00000008:word32] + 0x00000018:word32] = Mem274[ebp_162 - 0x0000000C:word32];
					Mem279[0x00429850:word32] = Mem277[ebp_162 - 0x00000008:word32];
				}
				Mem188[esp_169 + 0x00000000:word32] = 0x00000004;
				Mem191[esp_169 - 0x00000004:word32] = (word32) Mem188[0x00428D58:byte];
				Mem196[esp_169 - 0x00000008:word32] = Mem191[ebp_162 - 0x00000008:word32] + 0x0000001C;
				fn00411195();
				Mem202[esp_169 - 0x00000004:word32] = 0x00000004;
				Mem205[esp_169 - 0x00000008:word32] = (word32) Mem202[0x00428D58:byte];
				Mem210[esp_169 - 0x0000000C:word32] = Mem205[ebp_162 - 0x00000008:word32] + 0x00000020 + Mem205[ebp_162 + 0x00000008:word32];
				fn00411195();
				Mem216[esp_169 + 0xFFFFFFF8:word32] = Mem210[ebp_162 + 0x00000008:word32];
				Mem219[esp_169 + 0xFFFFFFF4:word32] = (word32) Mem216[0x00428D5A:byte];
				Mem224[esp_169 + 0xFFFFFFF0:word32] = Mem219[ebp_162 - 0x00000008:word32] + 0x00000020;
				fn00411195();
				eax_150 = Mem224[ebp_162 - 0x00000008:word32] + 0x00000020;
			}
		}
		else
		{
			Mem132[esp_28 + 0x00000000:word32] = Mem45[ebp_162 + 0x00000008:word32];
			Mem134[esp_28 - 0x00000004:word32] = 0x00426048;
			Mem136[esp_28 - 0x00000008:word32] = 0x00000000;
			Mem138[esp_28 - 0x0000000C:word32] = 0x00000000;
			Mem140[esp_28 - 0x00000010:word32] = 0x00000000;
			Mem142[esp_28 - 0x00000014:word32] = 0x00000001;
			word32 ecx_143;
			word32 ebp_144;
			word32 edi_145;
			if (fn0041119F(ebp_162, edi, fs, out ecx_143, out ebp_144, out edi_145) == 0x00000001)
				int3();
			eax_150 = 0x00000000;
		}
	}
	else
	{
		if (Mem45[ebp_162 + 0x00000010:word32] != 0x00000000)
		{
			Mem79[esp_28 + 0x00000000:word32] = Mem45[ebp_162 + 0x00000014:word32];
			Mem82[esp_28 - 0x00000004:word32] = Mem79[ebp_162 + 0x00000010:word32];
			Mem84[esp_28 - 0x00000008:word32] = 0x004260A0;
			Mem86[esp_28 - 0x0000000C:word32] = 0x00000000;
			Mem88[esp_28 - 0x00000010:word32] = 0x00000000;
			Mem90[esp_28 - 0x00000014:word32] = 0x00000000;
			Mem92[esp_28 - 0x00000018:word32] = 0x00000000;
			word32 ecx_93;
			word32 ebp_94;
			word32 edi_95;
			if (fn0041119F(ebp_162, edi, fs, out ecx_93, out ebp_94, out edi_95) == 0x00000001)
				int3();
		}
		else
		{
			Mem101[esp_28 + 0x00000000:word32] = 0x00426078;
			Mem103[esp_28 - 0x00000004:word32] = 0x00426074;
			Mem105[esp_28 - 0x00000008:word32] = 0x00000000;
			Mem107[esp_28 - 0x0000000C:word32] = 0x00000000;
			Mem109[esp_28 - 0x00000010:word32] = 0x00000000;
			Mem111[esp_28 - 0x00000014:word32] = 0x00000000;
			word32 ecx_112;
			word32 ebp_113;
			word32 edi_114;
			if (fn0041119F(ebp_162, edi, fs, out ecx_112, out ebp_113, out edi_114) == 0x00000001)
				int3();
		}
		eax_150 = 0x00000000;
	}
	return eax_150;
}

word32 fn00416DD0(word32 edi, selector fs, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, word32 dwArg14, ptr32 ediOut)
{
	word32 ebp_30;
	word32 edi_31;
	word32 eax_32 = fn00411064(edi, fs, out ebp_30, out edi_31);
	Mem35[ebp_30 - 0x00000004:word32] = eax_32;
	if (Mem35[ebp_30 - 0x00000004:word32] != 0x00000000)
	{
		Mem49[ebp_30 - 0x00000008:word32] = Mem35[ebp_30 - 0x00000004:word32];
		Mem53[ebp_30 - 0x0000000C:word32] = Mem49[ebp_30 - 0x00000008:word32] + Mem49[ebp_30 + 0x0000000C:word32];
		while (Mem53[ebp_30 - 0x00000008:word32] <u Mem53[ebp_30 - 0x0000000C:word32])
		{
			Mem60[Mem53[ebp_30 - 0x00000008:word32]:byte] = 0x00;
			Mem64[ebp_30 - 0x00000008:word32] = Mem60[ebp_30 - 0x00000008:word32] + 0x00000001;
		}
	}
	return Mem35[ebp_30 - 0x00000004:word32];
}

word32 fn00416EC0(word32 eax, word32 ebp, word32 edi, selector fs, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, word32 dwArg14, word32 dwArg18, ptr32 ediOut)
{
	*ediOut = edi;
	word32 eax_113;
	word32 ebp_197 = fp - 0x00000004;
	word32 esp_6 = fp - 0x00000018;
	if (dwArg04 == 0x00000000)
	{
		word32 ebp_50;
		word32 edi_51;
		eax_113 = fn00411064(edi, fs, out ebp_50, out edi_51);
	}
	else if (dwArg18 != 0x00000000 && dwArg08 == 0x00000000)
	{
		word32 ebp_668;
		word32 edi_669;
		fn0041141A(eax, fp - 0x00000004, edi, fs, out ebp_668, out edi_669);
		eax_113 = 0x00000000;
	}
	else
	{
		if (Mem0[0x00429858:word32] >u 0x00000000)
			if (Mem0[0x00429848:word32] == Mem0[0x00429858:word32] - 0x00000001)
			{
				esp_6 = fp + 0xFFFFFFE4;
				if (fn00411096(fp - 0x00000004, edi, fs, out ebp_197, out edi) == 0x00000000)
				{
					Mem638[fp + 0xFFFFFFE0:word32] = 0x004260EC;
					Mem640[fp + 0xFFFFFFDC:word32] = 0x00000000;
					Mem642[fp + 0xFFFFFFD8:word32] = 0x00000264;
					Mem644[fp + 0xFFFFFFD4:word32] = 0x004260E0;
					Mem646[fp + 0xFFFFFFD0:word32] = 0x00000002;
					esp_6 = fp + 0xFFFFFFE0;
					word32 ecx_647;
					if (fn0041119F(ebp_197, edi, fs, out ecx_647, out ebp_197, out edi) == 0x00000001)
						int3();
				}
				Mem636[0x00429848:word32] = 0x00000000;
			}
			else
				Mem658[0x00429848:word32] = Mem0[0x00429848:word32] + 0x00000001;
		Mem76[ebp_197 - 0x00000014:word32] = Mem0[0x00428D50:word32];
		if (Mem76[0x00428D54:word32] != 0xFFFFFFFF && Mem76[ebp_197 - 0x00000014:word32] == Mem76[0x00428D54:word32])
			int3();
		word32 esp_80 = esp_6 - 0x00000004;
		Mem81[esp_80 + 0x00000000:word32] = Mem76[ebp_197 + 0x00000018:word32];
		Mem84[esp_80 - 0x00000004:word32] = Mem81[ebp_197 + 0x00000014:word32];
		Mem87[esp_80 - 0x00000008:word32] = Mem84[ebp_197 - 0x00000014:word32];
		word32 edx_542 = Mem87[ebp_197 + 0x00000010:word32];
		Mem91[esp_80 - 0x0000000C:word32] = edx_542;
		word32 eax_92 = Mem91[ebp_197 + 0x0000000C:word32];
		Mem94[esp_80 - 0x00000010:word32] = eax_92;
		word32 ecx_95 = Mem94[ebp_197 + 0x00000008:word32];
		Mem97[esp_80 - 0x00000014:word32] = ecx_95;
		Mem99[esp_80 - 0x00000018:word32] = 0x00000002;
		Mem99[0x00428EC0:word32]();
		if (eax_92 != 0x00000000)
			if (Mem99[ebp_197 + 0x0000000C:word32] >u 0xFFFFFFDB)
			{
				Mem168[esp_80 + 0x00000000:word32] = Mem99[ebp_197 + 0x0000000C:word32];
				Mem170[esp_80 - 0x00000004:word32] = 0x0042625C;
				Mem172[esp_80 - 0x00000008:word32] = 0x00000000;
				Mem174[esp_80 - 0x0000000C:word32] = 0x00000000;
				Mem176[esp_80 - 0x00000010:word32] = 0x00000000;
				Mem178[esp_80 - 0x00000014:word32] = 0x00000001;
				word32 ecx_179;
				word32 ebp_180;
				word32 edi_181;
				if (fn0041119F(ebp_197, edi, fs, out ecx_179, out ebp_180, out edi_181) == 0x00000001)
					int3();
				eax_113 = 0x00000000;
			}
			else
			{
				word32 esp_198;
				if (Mem99[ebp_197 + 0x00000010:word32] != 0x00000001)
				{
					word32 edx_586 = Mem99[ebp_197 + 0x00000010:word32];
					edx_542 = edx_586 & 0x0000FFFF;
					if ((edx_586 & 0x0000FFFF) != 0x00000004 && (Mem99[ebp_197 + 0x00000010:word32] & 0x0000FFFF) != 0x00000002)
					{
						Mem596[esp_80 + 0x00000000:word32] = 0x0042600C;
						Mem598[esp_80 - 0x00000004:word32] = 0x00426074;
						Mem600[esp_80 - 0x00000008:word32] = 0x00000000;
						Mem602[esp_80 - 0x0000000C:word32] = 0x00000000;
						Mem604[esp_80 - 0x00000010:word32] = 0x00000000;
						Mem606[esp_80 - 0x00000014:word32] = 0x00000001;
						esp_198 = esp_80;
						word32 ecx_607;
						if (fn0041119F(ebp_197, edi, fs, out ecx_607, out ebp_197, out edi) == 0x00000001)
							int3();
l004170BB:
						word32 esp_200 = esp_198 - 0x00000004;
						Mem201[esp_200 + 0x00000000:word32] = Mem99[ebp_197 + 0x00000008:word32];
						word32 esp_204 = esp_200 + 0x00000004;
						if (fn004111EA(dwArg00) == 0x00000000)
						{
							Mem525[esp_200 + 0x00000000:word32] = 0x004261D4;
							Mem527[esp_200 - 0x00000004:word32] = 0x00000000;
							Mem529[esp_200 - 0x00000008:word32] = 0x00000297;
							Mem531[esp_200 - 0x0000000C:word32] = 0x004260E0;
							Mem533[esp_200 - 0x00000010:word32] = 0x00000002;
							esp_204 = esp_200;
							word32 ecx_534;
							if (fn0041119F(ebp_197, edi, fs, out ecx_534, out ebp_197, out edi) == 0x00000001)
								int3();
						}
						Mem214[ebp_197 - 0x00000008:word32] = Mem201[ebp_197 + 0x00000008:word32] - 0x00000020;
						if (Mem214[Mem214[ebp_197 - 0x00000008:word32] + 0x00000014:word32] == 0x00000003)
							Mem523[ebp_197 - 0x00000004:word32] = 0x00000001;
						if (Mem214[ebp_197 - 0x00000004:word32] != 0x00000000)
							if (Mem214[Mem214[ebp_197 - 0x00000008:word32] + 0x0000000C:word32] != 0xFEDCBABC || Mem214[Mem214[ebp_197 - 0x00000008:word32] + 0x00000018:word32] != 0x00000000)
							{
								word32 esp_492 = esp_204 - 0x00000004;
								Mem493[esp_492 + 0x00000000:word32] = 0x00426180;
								Mem495[esp_492 - 0x00000004:word32] = 0x00000000;
								Mem497[esp_492 - 0x00000008:word32] = 0x000002A1;
								Mem499[esp_492 - 0x0000000C:word32] = 0x004260E0;
								Mem501[esp_492 - 0x00000010:word32] = 0x00000002;
								esp_204 = esp_492;
								word32 ecx_502;
								if (fn0041119F(ebp_197, edi, fs, out ecx_502, out ebp_197, out edi) == 0x00000001)
									int3();
							}
						else if ((Mem214[Mem214[ebp_197 - 0x00000008:word32] + 0x00000014:word32] & 0x0000FFFF) == 0x00000002 && (Mem214[ebp_197 + 0x00000010:word32] & 0x0000FFFF) == 0x00000001)
							Mem522[ebp_197 + 0x00000010:word32] = 0x00000002;
						word32 esp_230;
						if (Mem214[ebp_197 + 0x0000001C:word32] != 0x00000000)
						{
							word32 esp_451 = esp_204 - 0x00000004;
							Mem452[esp_451 + 0x00000000:word32] = Mem214[ebp_197 + 0x0000000C:word32] + 0x00000024;
							Mem455[esp_451 - 0x00000004:word32] = Mem452[ebp_197 - 0x00000008:word32];
							Mem458[ebp_197 - 0x0000000C:word32] = fn00411203(ebp_197, dwArg00, dwArg04);
							esp_230 = esp_451 + 0x00000004;
							if (Mem458[ebp_197 - 0x0000000C:word32] == 0x00000000)
								eax_113 = 0x00000000;
							else
							{
l004171B6:
								Mem233[0x00428D50:word32] = Mem214[0x00428D50:word32] + 0x00000001;
								if (Mem233[ebp_197 - 0x00000004:word32] == 0x00000000)
								{
									Mem432[0x00429840:word32] = Mem233[0x00429840:word32] - Mem233[Mem233[ebp_197 - 0x0000000C:word32] + 0x00000010:word32];
									Mem435[0x00429840:word32] = Mem432[0x00429840:word32] + Mem432[ebp_197 + 0x0000000C:word32];
									Mem439[0x00429854:word32] = Mem435[0x00429854:word32] - Mem435[Mem435[ebp_197 - 0x0000000C:word32] + 0x00000010:word32];
									Mem442[0x00429854:word32] = Mem439[0x00429854:word32] + Mem439[ebp_197 + 0x0000000C:word32];
									if (Mem442[0x00429854:word32] >u Mem442[0x0042984C:word32])
										Mem447[0x0042984C:word32] = Mem442[0x00429854:word32];
								}
								Mem238[ebp_197 - 0x00000010:word32] = Mem233[ebp_197 - 0x0000000C:word32] + 0x00000020;
								if (Mem238[ebp_197 + 0x0000000C:word32] >u Mem238[Mem238[ebp_197 - 0x0000000C:word32] + 0x00000010:word32])
								{
									word32 esp_414 = esp_230 - 0x00000004;
									Mem415[esp_414 + 0x00000000:word32] = Mem238[ebp_197 + 0x0000000C:word32] - Mem238[Mem238[ebp_197 - 0x0000000C:word32] + 0x00000010:word32];
									Mem418[esp_414 - 0x00000004:word32] = (word32) Mem415[0x00428D5A:byte];
									Mem424[esp_414 - 0x00000008:word32] = Mem418[ebp_197 - 0x00000010:word32] + Mem418[Mem418[ebp_197 - 0x0000000C:word32] + 0x00000010:word32];
									fn00411195();
									esp_230 = esp_414;
								}
								word32 esp_244 = esp_230 - 0x00000004;
								Mem245[esp_244 + 0x00000000:word32] = 0x00000004;
								Mem248[esp_244 - 0x00000004:word32] = (word32) Mem245[0x00428D58:byte];
								Mem253[esp_244 - 0x00000008:word32] = Mem248[ebp_197 - 0x00000010:word32] + Mem248[ebp_197 + 0x0000000C:word32];
								fn00411195();
								word32 esp_256 = esp_244;
								if (Mem253[ebp_197 - 0x00000004:word32] == 0x00000000)
								{
									Mem404[Mem253[ebp_197 - 0x0000000C:word32] + 0x00000008:word32] = Mem253[ebp_197 + 0x00000014:word32];
									Mem407[Mem404[ebp_197 - 0x0000000C:word32] + 0x0000000C:word32] = Mem404[ebp_197 + 0x00000018:word32];
									Mem410[Mem407[ebp_197 - 0x0000000C:word32] + 0x00000018:word32] = Mem407[ebp_197 - 0x00000014:word32];
								}
								Mem262[Mem253[ebp_197 - 0x0000000C:word32] + 0x00000010:word32] = Mem253[ebp_197 + 0x0000000C:word32];
								if (Mem262[ebp_197 + 0x0000001C:word32] == 0x00000000 && (Mem262[ebp_197 + 0x0000001C:word32] != 0x00000000 || Mem262[ebp_197 - 0x0000000C:word32] != Mem262[ebp_197 - 0x00000008:word32]))
								{
									Mem382[esp_244 - 0x00000004:word32] = 0x00426144;
									Mem384[esp_244 - 0x00000008:word32] = 0x00000000;
									Mem386[esp_244 - 0x0000000C:word32] = 0x000002EB;
									Mem388[esp_244 - 0x00000010:word32] = 0x004260E0;
									Mem390[esp_244 - 0x00000014:word32] = 0x00000002;
									esp_256 = esp_244 + 0xFFFFFFFC;
									word32 ecx_391;
									if (fn0041119F(ebp_197, edi, fs, out ecx_391, out ebp_197, out edi) == 0x00000001)
										int3();
								}
								if (Mem262[ebp_197 - 0x0000000C:word32] == Mem262[ebp_197 - 0x00000008:word32] || Mem262[ebp_197 - 0x00000004:word32] != 0x00000000)
									eax_113 = Mem262[ebp_197 - 0x00000010:word32];
								else
								{
									if (Mem262[Mem262[ebp_197 - 0x0000000C:word32]:word32] != 0x00000000)
										Mem348[Mem262[Mem262[ebp_197 - 0x0000000C:word32]:word32] + 0x00000004:word32] = Mem262[Mem262[ebp_197 - 0x0000000C:word32] + 0x00000004:word32];
									else
									{
										if (Mem262[0x00429844:word32] != Mem262[ebp_197 - 0x00000008:word32])
										{
											word32 esp_360 = esp_256 - 0x00000004;
											Mem361[esp_360 + 0x00000000:word32] = 0x00426124;
											Mem363[esp_360 - 0x00000004:word32] = 0x00000000;
											Mem365[esp_360 - 0x00000008:word32] = 0x000002FC;
											Mem367[esp_360 - 0x0000000C:word32] = 0x004260E0;
											Mem369[esp_360 - 0x00000010:word32] = 0x00000002;
											esp_256 = esp_360;
											word32 ecx_370;
											if (fn0041119F(ebp_197, edi, fs, out ecx_370, out ebp_197, out edi) == 0x00000001)
												int3();
										}
										Mem359[0x00429844:word32] = Mem262[Mem262[ebp_197 - 0x0000000C:word32] + 0x00000004:word32];
									}
									if (Mem262[Mem262[ebp_197 - 0x0000000C:word32] + 0x00000004:word32] != 0x00000000)
										Mem314[Mem262[Mem262[ebp_197 - 0x0000000C:word32] + 0x00000004:word32]:word32] = Mem262[Mem262[ebp_197 - 0x0000000C:word32]:word32];
									else
									{
										if (Mem262[0x00429850:word32] != Mem262[ebp_197 - 0x00000008:word32])
										{
											word32 esp_326 = esp_256 - 0x00000004;
											Mem327[esp_326 + 0x00000000:word32] = 0x00426104;
											Mem329[esp_326 - 0x00000004:word32] = 0x00000000;
											Mem331[esp_326 - 0x00000008:word32] = 0x00000307;
											Mem333[esp_326 - 0x0000000C:word32] = 0x004260E0;
											Mem335[esp_326 - 0x00000010:word32] = 0x00000002;
											word32 ecx_336;
											word32 edi_338;
											if (fn0041119F(ebp_197, edi, fs, out ecx_336, out ebp_197, out edi_338) == 0x00000001)
												int3();
										}
										Mem325[0x00429850:word32] = Mem262[Mem262[ebp_197 - 0x0000000C:word32]:word32];
									}
									if (Mem262[0x00429850:word32] != 0x00000000)
										Mem307[Mem262[0x00429850:word32] + 0x00000004:word32] = Mem262[ebp_197 - 0x0000000C:word32];
									else
										Mem309[0x00429844:word32] = Mem262[ebp_197 - 0x0000000C:word32];
									Mem299[Mem262[ebp_197 - 0x0000000C:word32]:word32] = Mem262[0x00429850:word32];
									Mem301[Mem299[ebp_197 - 0x0000000C:word32] + 0x00000004:word32] = 0x00000000;
									Mem303[0x00429850:word32] = Mem301[ebp_197 - 0x0000000C:word32];
									eax_113 = Mem303[ebp_197 - 0x00000010:word32];
								}
							}
						}
						else
						{
							word32 esp_467 = esp_204 - 0x00000004;
							Mem468[esp_467 + 0x00000000:word32] = Mem214[ebp_197 + 0x0000000C:word32] + 0x00000024;
							Mem471[esp_467 - 0x00000004:word32] = Mem468[ebp_197 - 0x00000008:word32];
							Mem474[ebp_197 - 0x0000000C:word32] = fn004110BE(dwArg00, dwArg04);
							esp_230 = esp_467 + 0x00000004;
							if (Mem474[ebp_197 - 0x0000000C:word32] == 0x00000000)
								eax_113 = 0x00000000;
							else
								goto l004171B6;
						}
					}
					else
					{
l00417076:
						Mem544[esp_80 + 0x00000000:word32] = 0x00000004;
						Mem548[esp_80 - 0x00000004:word32] = DPB(edx_542, Mem544[0x00428D5B:byte], 0, 8);
						Mem554[esp_80 - 0x00000008:word32] = (Mem548[ebp_197 + 0x00000008:word32] & 0xFFFFFFFC) - 0x00000004;
						esp_198 = esp_80 + 0x00000004;
						word32 ecx_556;
						if (fn00417D50(dwArg00, bArg04, dwArg08, out ecx_556) != 0x00000000)
						{
							Mem564[esp_80 + 0x00000000:word32] = Mem554[ebp_197 + 0x00000008:word32];
							Mem566[esp_80 - 0x00000004:word32] = 0x00426200;
							Mem568[esp_80 - 0x00000008:word32] = 0x00000000;
							Mem570[esp_80 - 0x0000000C:word32] = 0x00000000;
							Mem572[esp_80 - 0x00000010:word32] = 0x00000000;
							Mem574[esp_80 - 0x00000014:word32] = 0x00000001;
							word32 ecx_575;
							word32 ebp_576;
							word32 edi_577;
							if (fn0041119F(ebp_197, edi, fs, out ecx_575, out ebp_576, out edi_577) == 0x00000001)
								int3();
							eax_113 = 0x00000000;
						}
						else
							goto l004170BB;
					}
				}
				else
					goto l00417076;
			}
		else
		{
			if (Mem99[ebp_197 + 0x00000014:word32] != 0x00000000)
			{
				Mem122[esp_80 + 0x00000000:word32] = Mem99[ebp_197 + 0x00000018:word32];
				Mem125[esp_80 - 0x00000004:word32] = Mem122[ebp_197 + 0x00000014:word32];
				Mem127[esp_80 - 0x00000008:word32] = 0x004262C0;
				Mem129[esp_80 - 0x0000000C:word32] = 0x00000000;
				Mem131[esp_80 - 0x00000010:word32] = 0x00000000;
				Mem133[esp_80 - 0x00000014:word32] = 0x00000000;
				Mem135[esp_80 - 0x00000018:word32] = 0x00000000;
				word32 ecx_136;
				word32 ebp_137;
				word32 edi_138;
				if (fn0041119F(ebp_197, edi, fs, out ecx_136, out ebp_137, out edi_138) == 0x00000001)
					int3();
			}
			else
			{
				Mem145[esp_80 + 0x00000000:word32] = 0x00426294;
				Mem147[esp_80 - 0x00000004:word32] = 0x00426074;
				Mem149[esp_80 - 0x00000008:word32] = 0x00000000;
				Mem151[esp_80 - 0x0000000C:word32] = 0x00000000;
				Mem153[esp_80 - 0x00000010:word32] = 0x00000000;
				Mem155[esp_80 - 0x00000014:word32] = 0x00000000;
				word32 ecx_156;
				word32 ebp_157;
				word32 edi_158;
				if (fn0041119F(ebp_197, edi, fs, out ecx_156, out ebp_157, out edi_158) == 0x00000001)
					int3();
			}
			eax_113 = 0x00000000;
		}
	}
	return eax_113;
}

word32 fn004175B0(word32 eax, word32 ebp, word32 edi, selector fs, ptr32 ediOut)
{
	*ediOut = edi;
	word32 ebp_115 = fp - 0x00000004;
	word32 esp_26 = fp - 0x00000008;
	if (Mem0[0x00429858:word32] >u 0x00000000)
	{
		word32 eax_547 = Mem0[0x00429858:word32];
		eax = eax_547 - 0x00000001;
		if (Mem0[0x00429848:word32] == eax_547 - 0x00000001)
		{
			eax = fn00411096(fp - 0x00000004, edi, fs, out ebp_115, out edi);
			esp_26 = fp + 0xFFFFFFF4;
			if (eax == 0x00000000)
			{
				Mem570[fp + 0xFFFFFFF0:word32] = 0x004260EC;
				Mem572[fp + 0xFFFFFFEC:word32] = 0x00000000;
				Mem574[fp + 0xFFFFFFE8:word32] = 0x0000044C;
				Mem576[fp + 0xFFFFFFE4:word32] = 0x004260E0;
				Mem578[fp + 0xFFFFFFE0:word32] = 0x00000002;
				word32 ecx_579;
				eax = fn0041119F(ebp_115, edi, fs, out ecx_579, out ebp_115, out edi);
				esp_26 = fp + 0xFFFFFFF4;
				if (eax == 0x00000001)
					int3();
			}
			Mem568[0x00429848:word32] = 0x00000000;
		}
		else
			Mem590[0x00429848:word32] = Mem0[0x00429848:word32] + 0x00000001;
	}
	if (Mem0[ebp_115 + 0x00000008:word32] == 0x00000000)
		;
	else if (Mem0[ebp_115 + 0x0000000C:word32] == 0x00000001)
	{
		word32 esp_507 = esp_26 - 0x00000004;
		Mem508[esp_507 + 0x00000000:word32] = 0x00000004;
		Mem512[esp_507 - 0x00000004:word32] = DPB(eax, Mem508[0x00428D5B:byte], 0, 8);
		Mem518[esp_507 - 0x00000008:word32] = (Mem512[ebp_115 + 0x00000008:word32] & 0xFFFFFFFC) - 0x00000004;
		esp_26 = esp_507 + 0x00000004;
		word32 ecx_519;
		if (fn00417D50(dwArg00, bArg04, dwArg08, out ecx_519) != 0x00000000)
		{
			Mem528[esp_507 + 0x00000000:word32] = Mem518[ebp_115 + 0x00000008:word32];
			Mem530[esp_507 - 0x00000004:word32] = 0x00426460;
			Mem532[esp_507 - 0x00000008:word32] = 0x00000000;
			Mem534[esp_507 - 0x0000000C:word32] = 0x00000000;
			Mem536[esp_507 - 0x00000010:word32] = 0x00000000;
			Mem538[esp_507 - 0x00000014:word32] = 0x00000001;
			word32 ecx_539;
			word32 ebp_540;
			word32 edi_541;
			eax = fn0041119F(ebp_115, edi, fs, out ecx_539, out ebp_540, out edi_541);
			if (eax == 0x00000001)
				int3();
		}
		else
		{
l00417665:
			word32 esp_49 = esp_26 - 0x00000004;
			Mem50[esp_49 + 0x00000000:word32] = 0x00000000;
			Mem52[esp_49 - 0x00000004:word32] = 0x00000000;
			Mem54[esp_49 - 0x00000008:word32] = 0x00000000;
			word32 ecx_55 = Mem54[ebp_115 + 0x0000000C:word32];
			Mem57[esp_49 - 0x0000000C:word32] = ecx_55;
			Mem59[esp_49 - 0x00000010:word32] = 0x00000000;
			word32 edx_60 = Mem59[ebp_115 + 0x00000008:word32];
			Mem62[esp_49 - 0x00000014:word32] = edx_60;
			Mem64[esp_49 - 0x00000018:word32] = 0x00000003;
			Mem64[0x00428EC0:word32]();
			if (eax == 0x00000000)
			{
				Mem70[esp_49 + 0x00000000:word32] = 0x00426440;
				Mem72[esp_49 - 0x00000004:word32] = 0x00426074;
				Mem74[esp_49 - 0x00000008:word32] = 0x00000000;
				Mem76[esp_49 - 0x0000000C:word32] = 0x00000000;
				Mem78[esp_49 - 0x00000010:word32] = 0x00000000;
				Mem80[esp_49 - 0x00000014:word32] = 0x00000000;
				word32 ecx_81;
				word32 ebp_82;
				word32 edi_83;
				eax = fn0041119F(ebp_115, edi, fs, out ecx_81, out ebp_82, out edi_83);
				if (eax == 0x00000001)
					int3();
			}
			else
			{
				Mem91[esp_49 + 0x00000000:word32] = Mem64[ebp_115 + 0x00000008:word32];
				word32 esp_100 = esp_49 + 0x00000004;
				if (fn004111EA(dwArg00) == 0x00000000)
				{
					Mem491[esp_49 + 0x00000000:word32] = 0x004261D4;
					Mem493[esp_49 - 0x00000004:word32] = 0x00000000;
					Mem495[esp_49 - 0x00000008:word32] = 0x0000046C;
					Mem497[esp_49 - 0x0000000C:word32] = 0x004260E0;
					Mem499[esp_49 - 0x00000010:word32] = 0x00000002;
					esp_100 = esp_49 + 0x00000004;
					word32 ecx_500;
					if (fn0041119F(ebp_115, edi, fs, out ecx_500, out ebp_115, out edi) == 0x00000001)
						int3();
				}
				word32 eax_101 = Mem91[ebp_115 + 0x00000008:word32];
				Mem104[ebp_115 - 0x00000004:word32] = eax_101 - 0x00000020;
				word32 eax_102 = eax_101 - 0x00000020;
				if ((Mem104[Mem104[ebp_115 - 0x00000004:word32] + 0x00000014:word32] & 0x0000FFFF) != 0x00000004)
				{
					eax_102 = Mem104[ebp_115 - 0x00000004:word32];
					if (Mem104[eax_102 + 0x00000014:word32] != 0x00000001 && (Mem104[Mem104[ebp_115 - 0x00000004:word32] + 0x00000014:word32] & 0x0000FFFF) != 0x00000002)
					{
						eax_102 = Mem104[ebp_115 - 0x00000004:word32];
						if (Mem104[eax_102 + 0x00000014:word32] != 0x00000003)
						{
							word32 esp_472 = esp_100 - 0x00000004;
							Mem473[esp_472 + 0x00000000:word32] = 0x00426410;
							Mem475[esp_472 - 0x00000004:word32] = 0x00000000;
							Mem477[esp_472 - 0x00000008:word32] = 0x00000472;
							Mem479[esp_472 - 0x0000000C:word32] = 0x004260E0;
							Mem481[esp_472 - 0x00000010:word32] = 0x00000002;
							word32 ecx_482;
							eax_102 = fn0041119F(ebp_115, edi, fs, out ecx_482, out ebp_115, out edi);
							esp_100 = esp_472 + 0x00000004;
							if (eax_102 == 0x00000001)
								int3();
						}
					}
				}
				if ((Mem104[0x00428D4C:word32] & 0x00000004) == 0x00000000)
				{
					word32 esp_349 = esp_100 - 0x00000004;
					Mem350[esp_349 + 0x00000000:word32] = 0x00000004;
					Mem354[esp_349 - 0x00000004:word32] = DPB(eax_102, Mem350[0x00428D58:byte], 0, 8);
					Mem359[esp_349 - 0x00000008:word32] = Mem354[ebp_115 - 0x00000004:word32] + 0x0000001C;
					word32 ecx_362;
					word32 eax_363 = fn00417D50(dwArg00, bArg04, dwArg08, out ecx_362);
					word32 esp_365 = esp_349 + 0x00000004;
					if (eax_363 == 0x00000000)
					{
						Mem428[esp_349 + 0x00000000:word32] = Mem359[ebp_115 - 0x00000004:word32] + 0x00000020;
						Mem432[esp_349 - 0x00000004:word32] = Mem428[Mem428[ebp_115 - 0x00000004:word32] + 0x00000018:word32];
						Mem440[esp_349 - 0x00000008:word32] = 0x00428D5C[(Mem432[Mem432[ebp_115 - 0x00000004:word32] + 0x00000014:word32] & 0x0000FFFF) * 0x00000004];
						Mem442[esp_349 - 0x0000000C:word32] = 0x004263DC;
						Mem444[esp_349 - 0x00000010:word32] = 0x00000000;
						Mem446[esp_349 - 0x00000014:word32] = 0x00000000;
						Mem448[esp_349 - 0x00000018:word32] = 0x00000000;
						Mem450[esp_349 - 0x0000001C:word32] = 0x00000001;
						word32 ecx_451;
						eax_363 = fn0041119F(ebp_115, edi, fs, out ecx_451, out ebp_115, out edi);
						esp_365 = esp_349 + 0x00000004;
						if (eax_363 == 0x00000001)
							int3();
					}
					word32 esp_374 = esp_365 - 0x00000004;
					Mem375[esp_374 + 0x00000000:word32] = 0x00000004;
					Mem379[esp_374 - 0x00000004:word32] = DPB(eax_363, Mem375[0x00428D58:byte], 0, 8);
					Mem385[esp_374 - 0x00000008:word32] = Mem379[ebp_115 - 0x00000004:word32] + 0x00000020 + Mem379[Mem379[ebp_115 - 0x00000004:word32] + 0x00000010:word32];
					esp_100 = esp_374 + 0x00000004;
					word32 ecx_386;
					if (fn00417D50(dwArg00, bArg04, dwArg08, out ecx_386) == 0x00000000)
					{
						Mem395[esp_374 + 0x00000000:word32] = Mem385[ebp_115 - 0x00000004:word32] + 0x00000020;
						Mem399[esp_374 - 0x00000004:word32] = Mem395[Mem395[ebp_115 - 0x00000004:word32] + 0x00000018:word32];
						Mem407[esp_374 - 0x00000008:word32] = 0x00428D5C[(Mem399[Mem399[ebp_115 - 0x00000004:word32] + 0x00000014:word32] & 0x0000FFFF) * 0x00000004];
						Mem409[esp_374 - 0x0000000C:word32] = 0x004263AC;
						Mem411[esp_374 - 0x00000010:word32] = 0x00000000;
						Mem413[esp_374 - 0x00000014:word32] = 0x00000000;
						Mem415[esp_374 - 0x00000018:word32] = 0x00000000;
						Mem417[esp_374 - 0x0000001C:word32] = 0x00000001;
						esp_100 = esp_374 + 0x00000004;
						word32 ecx_418;
						if (fn0041119F(ebp_115, edi, fs, out ecx_418, out ebp_115, out edi) == 0x00000001)
							int3();
					}
				}
				if (Mem104[Mem104[ebp_115 - 0x00000004:word32] + 0x00000014:word32] == 0x00000003)
				{
					if (Mem104[Mem104[ebp_115 - 0x00000004:word32] + 0x0000000C:word32] != 0xFEDCBABC || Mem104[Mem104[ebp_115 - 0x00000004:word32] + 0x00000018:word32] != 0x00000000)
					{
						word32 esp_164 = esp_100 - 0x00000004;
						Mem165[esp_164 + 0x00000000:word32] = 0x00426360;
						Mem167[esp_164 - 0x00000004:word32] = 0x00000000;
						Mem169[esp_164 - 0x00000008:word32] = 0x00000489;
						Mem171[esp_164 - 0x0000000C:word32] = 0x004260E0;
						Mem173[esp_164 - 0x00000010:word32] = 0x00000002;
						esp_100 = esp_164 + 0x00000004;
						word32 ecx_174;
						word32 edi_176;
						if (fn0041119F(ebp_115, edi, fs, out ecx_174, out ebp_115, out edi_176) == 0x00000001)
							int3();
					}
					word32 esp_144 = esp_100 - 0x00000004;
					Mem145[esp_144 + 0x00000000:word32] = Mem104[Mem104[ebp_115 - 0x00000004:word32] + 0x00000010:word32] + 0x00000024;
					Mem148[esp_144 - 0x00000004:word32] = (word32) Mem145[0x00428D59:byte];
					Mem151[esp_144 - 0x00000008:word32] = Mem148[ebp_115 - 0x00000004:word32];
					fn00411195();
					Mem158[esp_144 - 0x00000004:word32] = Mem151[ebp_115 - 0x00000004:word32];
					eax = fn004113E8(dwArg00);
				}
				else
				{
					if (Mem104[Mem104[ebp_115 - 0x00000004:word32] + 0x00000014:word32] == 0x00000002 && Mem104[ebp_115 + 0x0000000C:word32] == 0x00000001)
						Mem348[ebp_115 + 0x0000000C:word32] = 0x00000002;
					if (Mem104[Mem104[ebp_115 - 0x00000004:word32] + 0x00000014:word32] != Mem104[ebp_115 + 0x0000000C:word32])
					{
						word32 esp_329 = esp_100 - 0x00000004;
						Mem330[esp_329 + 0x00000000:word32] = 0x0042633C;
						Mem332[esp_329 - 0x00000004:word32] = 0x00000000;
						Mem334[esp_329 - 0x00000008:word32] = 0x00000497;
						Mem336[esp_329 - 0x0000000C:word32] = 0x004260E0;
						Mem338[esp_329 - 0x00000010:word32] = 0x00000002;
						esp_100 = esp_329 + 0x00000004;
						word32 ecx_339;
						if (fn0041119F(ebp_115, edi, fs, out ecx_339, out ebp_115, out edi) == 0x00000001)
							int3();
					}
					Mem198[0x00429854:word32] = Mem104[0x00429854:word32] - Mem104[Mem104[ebp_115 - 0x00000004:word32] + 0x00000010:word32];
					if ((Mem198[0x00428D4C:word32] & 0x00000002) != 0x00000000)
					{
						Mem311[Mem198[ebp_115 - 0x00000004:word32] + 0x00000014:word32] = 0x00000000;
						word32 esp_314 = esp_100 - 0x00000004;
						Mem315[esp_314 + 0x00000000:word32] = Mem311[Mem311[ebp_115 - 0x00000004:word32] + 0x00000010:word32];
						Mem318[esp_314 - 0x00000004:word32] = (word32) Mem315[0x00428D59:byte];
						Mem323[esp_314 - 0x00000008:word32] = Mem318[ebp_115 - 0x00000004:word32] + 0x00000020;
						eax = fn00411195();
					}
					else
					{
						if (Mem198[Mem198[ebp_115 - 0x00000004:word32]:word32] != 0x00000000)
							Mem280[Mem198[Mem198[ebp_115 - 0x00000004:word32]:word32] + 0x00000004:word32] = Mem198[Mem198[ebp_115 - 0x00000004:word32] + 0x00000004:word32];
						else
						{
							if (Mem198[0x00429844:word32] != Mem198[ebp_115 - 0x00000004:word32])
							{
								word32 esp_293 = esp_100 - 0x00000004;
								Mem294[esp_293 + 0x00000000:word32] = 0x00426320;
								Mem296[esp_293 - 0x00000004:word32] = 0x00000000;
								Mem298[esp_293 - 0x00000008:word32] = 0x000004A6;
								Mem300[esp_293 - 0x0000000C:word32] = 0x004260E0;
								Mem302[esp_293 - 0x00000010:word32] = 0x00000002;
								esp_100 = esp_293 + 0x00000004;
								word32 ecx_303;
								if (fn0041119F(ebp_115, edi, fs, out ecx_303, out ebp_115, out edi) == 0x00000001)
									int3();
							}
							Mem292[0x00429844:word32] = Mem198[Mem198[ebp_115 - 0x00000004:word32] + 0x00000004:word32];
						}
						if (Mem198[Mem198[ebp_115 - 0x00000004:word32] + 0x00000004:word32] != 0x00000000)
							Mem246[Mem198[Mem198[ebp_115 - 0x00000004:word32] + 0x00000004:word32]:word32] = Mem198[Mem198[ebp_115 - 0x00000004:word32]:word32];
						else
						{
							if (Mem198[0x00429850:word32] != Mem198[ebp_115 - 0x00000004:word32])
							{
								word32 esp_259 = esp_100 - 0x00000004;
								Mem260[esp_259 + 0x00000000:word32] = 0x00426304;
								Mem262[esp_259 - 0x00000004:word32] = 0x00000000;
								Mem264[esp_259 - 0x00000008:word32] = 0x000004B0;
								Mem266[esp_259 - 0x0000000C:word32] = 0x004260E0;
								Mem268[esp_259 - 0x00000010:word32] = 0x00000002;
								esp_100 = esp_259 + 0x00000004;
								word32 ecx_269;
								word32 edi_271;
								if (fn0041119F(ebp_115, edi, fs, out ecx_269, out ebp_115, out edi_271) == 0x00000001)
									int3();
							}
							Mem258[0x00429850:word32] = Mem198[Mem198[ebp_115 - 0x00000004:word32]:word32];
						}
						word32 esp_223 = esp_100 - 0x00000004;
						Mem224[esp_223 + 0x00000000:word32] = Mem198[Mem198[ebp_115 - 0x00000004:word32] + 0x00000010:word32] + 0x00000024;
						Mem227[esp_223 - 0x00000004:word32] = (word32) Mem224[0x00428D59:byte];
						Mem230[esp_223 - 0x00000008:word32] = Mem227[ebp_115 - 0x00000004:word32];
						fn00411195();
						Mem237[esp_223 - 0x00000004:word32] = Mem230[ebp_115 - 0x00000004:word32];
						eax = fn004113E8(dwArg00);
					}
				}
			}
		}
	}
	else
		goto l00417665;
	return eax;
}

word32 fn00417D50(word32 dwArg04, byte bArg08, word32 dwArg0C, ptr32 ecxOut)
{
	word32 dwLoc08_18 = 0x00000001;
	word32 ecx_21 = dwArg0C - 0x00000001;
	*ecxOut = ecx_21;
	dwArg0C = ecx_21;
	while (dwArg0C != 0x00000000)
	{
		dwArg04 = dwArg04 + 0x00000001;
		if ((word32) Mem0[dwArg04 + 0x00000000:byte] != (word32) bArg08)
			dwLoc08_18 = 0x00000000;
		ecx_21 = dwArg0C - 0x00000001;
		*ecxOut = ecx_21;
		dwArg0C = ecx_21;
	}
	return dwLoc08_18;
}

word32 fn00417DB0(word32 ebp, word32 edi, selector fs, ptr32 ediOut)
{
	*ediOut = edi;
	word32 eax_33;
	word32 ebp_102 = fp - 0x00000004;
	if ((Mem0[0x00428D4C:word32] & 0x00000001) == 0x00000000)
		eax_33 = 0x00000001;
	else
	{
		word32 eax_59 = fn004111FE();
		word32 esp_103 = fp + 0xFFFFFFE0;
		if (eax_59 == 0xFFFFFFFF || eax_59 == 0xFFFFFFFE)
			while (Mem0[ebp_102 - 0x00000004:word32] != 0x00000000)
			{
				word32 eax_113;
				Mem106[ebp_102 - 0x00000010:word32] = 0x00000001;
				if ((Mem106[Mem106[ebp_102 - 0x00000004:word32] + 0x00000014:word32] & 0x0000FFFF) != 0x00000004 && Mem106[Mem106[ebp_102 - 0x00000004:word32] + 0x00000014:word32] != 0x00000001)
				{
					eax_113 = Mem106[ebp_102 - 0x00000004:word32];
					if ((Mem106[eax_113 + 0x00000014:word32] & 0x0000FFFF) != 0x00000002 && Mem106[Mem106[ebp_102 - 0x00000004:word32] + 0x00000014:word32] != 0x00000003)
						Mem379[ebp_102 - 0x00000014:word32] = 0x00426540;
					else
					{
l00417F1E:
						eax_113 = Mem106[ebp_102 - 0x00000004:word32];
						Mem366[ebp_102 - 0x00000014:word32] = 0x00428D5C[(Mem106[eax_113 + 0x00000014:word32] & 0x0000FFFF) * 0x00000004];
					}
				}
				else
					goto l00417F1E;
				word32 esp_114 = esp_103 - 0x00000004;
				Mem115[esp_114 + 0x00000000:word32] = 0x00000004;
				Mem119[esp_114 - 0x00000004:word32] = DPB(eax_113, Mem115[0x00428D58:byte], 0, 8);
				Mem125[esp_114 - 0x00000008:word32] = Mem119[ebp_102 - 0x00000004:word32] + 0x0000001C;
				word32 esp_131 = esp_114 + 0x00000004;
				word32 ecx_129;
				if (fn00417D50(dwArg00, bArg04, dwArg08, out ecx_129) == 0x00000000)
				{
					Mem330[esp_114 + 0x00000000:word32] = Mem125[ebp_102 - 0x00000004:word32] + 0x00000020;
					Mem335[esp_114 - 0x00000004:word32] = Mem330[Mem330[ebp_102 - 0x00000004:word32] + 0x00000018:word32];
					Mem338[esp_114 - 0x00000008:word32] = Mem335[ebp_102 - 0x00000014:word32];
					Mem340[esp_114 - 0x0000000C:word32] = 0x004263DC;
					Mem342[esp_114 - 0x00000010:word32] = 0x00000000;
					Mem344[esp_114 - 0x00000014:word32] = 0x00000000;
					Mem346[esp_114 - 0x00000018:word32] = 0x00000000;
					Mem348[esp_114 - 0x0000001C:word32] = 0x00000000;
					esp_131 = esp_114 + 0x00000004;
					if (fn0041119F(ebp_102, edi, fs, out ecx_129, out ebp_102, out edi) == 0x00000001)
						int3();
					Mem356[ebp_102 - 0x00000010:word32] = 0x00000000;
				}
				word32 esp_140 = esp_131 - 0x00000004;
				Mem141[esp_140 + 0x00000000:word32] = 0x00000004;
				Mem145[esp_140 - 0x00000004:word32] = DPB(ecx_129, Mem141[0x00428D58:byte], 0, 8);
				Mem151[esp_140 - 0x00000008:word32] = Mem145[ebp_102 - 0x00000004:word32] + 0x00000020 + Mem145[Mem145[ebp_102 - 0x00000004:word32] + 0x00000010:word32];
				esp_103 = esp_140 + 0x00000004;
				word32 ecx_152;
				if (fn00417D50(dwArg00, bArg04, dwArg08, out ecx_152) == 0x00000000)
				{
					Mem300[esp_140 + 0x00000000:word32] = Mem151[ebp_102 - 0x00000004:word32] + 0x00000020;
					Mem304[esp_140 - 0x00000004:word32] = Mem300[Mem300[ebp_102 - 0x00000004:word32] + 0x00000018:word32];
					Mem307[esp_140 - 0x00000008:word32] = Mem304[ebp_102 - 0x00000014:word32];
					Mem309[esp_140 - 0x0000000C:word32] = 0x004263AC;
					Mem311[esp_140 - 0x00000010:word32] = 0x00000000;
					Mem313[esp_140 - 0x00000014:word32] = 0x00000000;
					Mem315[esp_140 - 0x00000018:word32] = 0x00000000;
					Mem317[esp_140 - 0x0000001C:word32] = 0x00000000;
					esp_103 = esp_140 + 0x00000004;
					word32 ecx_318;
					if (fn0041119F(ebp_102, edi, fs, out ecx_318, out ebp_102, out edi) == 0x00000001)
						int3();
					Mem325[ebp_102 - 0x00000010:word32] = 0x00000000;
				}
				word32 edx_163 = Mem151[ebp_102 - 0x00000004:word32];
				if (Mem151[edx_163 + 0x00000014:word32] == 0x00000000)
				{
					word32 esp_256 = esp_103 - 0x00000004;
					Mem257[esp_256 + 0x00000000:word32] = Mem151[Mem151[ebp_102 - 0x00000004:word32] + 0x00000010:word32];
					Mem261[esp_256 - 0x00000004:word32] = DPB(edx_163, Mem257[0x00428D59:byte], 0, 8);
					Mem266[esp_256 - 0x00000008:word32] = Mem261[ebp_102 - 0x00000004:word32] + 0x00000020;
					esp_103 = esp_256 + 0x00000004;
					word32 ecx_267;
					if (fn00417D50(dwArg00, bArg04, dwArg08, out ecx_267) == 0x00000000)
					{
						Mem277[esp_256 + 0x00000000:word32] = Mem266[ebp_102 - 0x00000004:word32] + 0x00000020;
						Mem279[esp_256 - 0x00000004:word32] = 0x00426510;
						Mem281[esp_256 - 0x00000008:word32] = 0x00000000;
						Mem283[esp_256 - 0x0000000C:word32] = 0x00000000;
						Mem285[esp_256 - 0x00000010:word32] = 0x00000000;
						Mem287[esp_256 - 0x00000014:word32] = 0x00000000;
						esp_103 = esp_256 + 0x00000004;
						word32 ecx_288;
						if (fn0041119F(ebp_102, edi, fs, out ecx_288, out ebp_102, out edi) == 0x00000001)
							int3();
						Mem295[ebp_102 - 0x00000010:word32] = 0x00000000;
					}
				}
				if (Mem151[ebp_102 - 0x00000010:word32] == 0x00000000)
				{
					if (Mem151[Mem151[ebp_102 - 0x00000004:word32] + 0x00000008:word32] != 0x00000000)
					{
						word32 esp_228 = esp_103 - 0x00000004;
						Mem229[esp_228 + 0x00000000:word32] = Mem151[Mem151[ebp_102 - 0x00000004:word32] + 0x0000000C:word32];
						Mem233[esp_228 - 0x00000004:word32] = Mem229[Mem229[ebp_102 - 0x00000004:word32] + 0x00000008:word32];
						Mem236[esp_228 - 0x00000008:word32] = Mem233[ebp_102 - 0x00000014:word32];
						Mem238[esp_228 - 0x0000000C:word32] = 0x004264E8;
						Mem240[esp_228 - 0x00000010:word32] = 0x00000000;
						Mem242[esp_228 - 0x00000014:word32] = 0x00000000;
						Mem244[esp_228 - 0x00000018:word32] = 0x00000000;
						Mem246[esp_228 - 0x0000001C:word32] = 0x00000000;
						esp_103 = esp_228 + 0x00000004;
						word32 ecx_247;
						if (fn0041119F(ebp_102, edi, fs, out ecx_247, out ebp_102, out edi) == 0x00000001)
							int3();
					}
					word32 esp_197 = esp_103 - 0x00000004;
					Mem198[esp_197 + 0x00000000:word32] = Mem151[Mem151[ebp_102 - 0x00000004:word32] + 0x00000010:word32];
					Mem203[esp_197 - 0x00000004:word32] = Mem198[ebp_102 - 0x00000004:word32] + 0x00000020;
					Mem206[esp_197 - 0x00000008:word32] = Mem203[ebp_102 - 0x00000014:word32];
					Mem208[esp_197 - 0x0000000C:word32] = 0x004264B8;
					Mem210[esp_197 - 0x00000010:word32] = 0x00000000;
					Mem212[esp_197 - 0x00000014:word32] = 0x00000000;
					Mem214[esp_197 - 0x00000018:word32] = 0x00000000;
					Mem216[esp_197 - 0x0000001C:word32] = 0x00000000;
					esp_103 = esp_197 + 0x00000004;
					word32 ecx_218;
					if (fn0041119F(ebp_102, edi, fs, out ecx_218, out ebp_102, out edi) == 0x00000001)
						int3();
					Mem225[ebp_102 - 0x0000000C:word32] = 0x00000000;
				}
				Mem188[ebp_102 - 0x00000004:word32] = Mem151[Mem151[ebp_102 - 0x00000004:word32]:word32];
			}
		else
		{
			if (eax_59 <=u 0x00000003)
				switch (eax_59 + 0x00000006)
				{
				case 0:
					word32 ecx_416;
					word32 edi_418;
					if (fn0041119F(fp - 0x00000004, edi, fs, out ecx_416, out ebp_102, out edi_418) == 0x00000001)
						int3();
					break;
				case 1:
					word32 ecx_435;
					word32 edi_437;
					if (fn0041119F(fp - 0x00000004, edi, fs, out ecx_435, out ebp_102, out edi_437) == 0x00000001)
						int3();
					break;
				case 2:
					word32 ecx_454;
					word32 edi_456;
					if (fn0041119F(fp - 0x00000004, edi, fs, out ecx_454, out ebp_102, out edi_456) == 0x00000001)
						int3();
					break;
				case 3:
					word32 ecx_473;
					word32 edi_475;
					if (fn0041119F(fp - 0x00000004, edi, fs, out ecx_473, out ebp_102, out edi_475) == 0x00000001)
						int3();
					break;
				}
			else
			{
				word32 ecx_492;
				word32 edi_494;
				if (fn0041119F(fp - 0x00000004, edi, fs, out ecx_492, out ebp_102, out edi_494) == 0x00000001)
					int3();
			}
			Mem402[ebp_102 - 0x0000000C:word32] = 0x00000000;
		}
		eax_33 = Mem0[ebp_102 - 0x0000000C:word32];
	}
	return eax_33;
}

word32 fn00418190(word32 dwArg04)
{
	word32 eax_10 = Mem0[0x00428D4C:word32];
	if (dwArg04 != 0xFFFFFFFF)
	{
		if ((dwArg04 & 0x00000004) != 0x00000000)
			Mem38[0x00429858:word32] = 0x00000001;
		else
			Mem44[0x00429858:word32] = dwArg04 >> 0x00000010 & 0x0000FFFF;
		Mem35[0x00429848:word32] = 0x00000000;
		Mem37[0x00428D4C:word32] = dwArg04;
	}
	return eax_10;
}

word32 fn00418B40(word32 ebp, word32 edi, selector fs)
{
	word32 ebp_20 = fp - 0x00000004;
	word32 esp_25 = fp - 0x00000064;
	while (true)
	{
		if (Mem0[Mem0[ebp_20 + 0x00000008:word32] + 0x00000010:word32] < 0x00000010)
			Mem133[ebp_20 - 0x00000058:word32] = Mem0[Mem0[ebp_20 + 0x00000008:word32] + 0x00000010:word32];
		else
			Mem134[ebp_20 - 0x00000058:word32] = 0x00000010;
		if (Mem0[ebp_20 - 0x00000004:word32] >= Mem0[ebp_20 - 0x00000058:word32])
		{
			Mem100[ebp_20 - 0x00000050 + Mem0[ebp_20 - 0x00000004:word32]:byte] = 0x00;
			word32 esp_102 = esp_25 - 0x00000004;
			Mem103[esp_102 + 0x00000000:word32] = ebp_20 - 0x0000003C;
			Mem106[esp_102 - 0x00000004:word32] = ebp_20 - 0x00000050;
			Mem108[esp_102 - 0x00000008:word32] = 0x004267C0;
			Mem110[esp_102 - 0x0000000C:word32] = 0x00000000;
			Mem112[esp_102 - 0x00000010:word32] = 0x00000000;
			Mem114[esp_102 - 0x00000014:word32] = 0x00000000;
			Mem116[esp_102 - 0x00000018:word32] = 0x00000000;
			word32 ecx_117;
			word32 ebp_118;
			word32 edi_119;
			if (fn0041119F(ebp_20, edi, fs, out ecx_117, out ebp_118, out edi_119) == 0x00000001)
				int3();
			word32 ecx_125;
			word32 edi_126;
			fn00411087(Mem116[ebp_118 - 0x00000008:word32], edi_119, fs, out ecx_125, out edi_126);
			return edi_126;
		}
		word32 esp_45;
		word32 edi_44;
		Mem38[ebp_20 - 0x00000051:byte] = Mem0[Mem0[ebp_20 + 0x00000008:word32] + Mem0[ebp_20 - 0x00000004:word32] + 0x00000020:byte];
		if (Mem38[0x00428EC4:word32] > 0x00000001)
		{
			word32 esp_75 = esp_25 - 0x00000004;
			Mem76[esp_75 + 0x00000000:word32] = 0x00000157;
			Mem79[esp_75 - 0x00000004:word32] = (word32) Mem76[ebp_20 - 0x00000051:byte];
			word32 eax_82 = fn0041124E(edi, fs, out ebp_20, out edi_44);
			Mem86[ebp_20 - 0x0000005C:word32] = eax_82;
			esp_45 = esp_75;
		}
		else
		{
			word32 esp_87 = esp_25 - 0x00000004;
			Mem88[esp_87 + 0x00000000:word32] = 0x00000157;
			Mem91[esp_87 - 0x00000004:word32] = (word32) Mem88[ebp_20 - 0x00000051:byte];
			word32 eax_94 = fn004110C8(edi, fs, out ebp_20, out edi_44);
			Mem98[ebp_20 - 0x0000005C:word32] = eax_94;
			esp_45 = esp_87;
		}
		if (Mem38[ebp_20 - 0x0000005C:word32] != 0x00000000)
			Mem73[ebp_20 - 0x00000060:word32] = (word32) Mem38[ebp_20 - 0x00000051:byte];
		else
			Mem74[ebp_20 - 0x00000060:word32] = 0x00000020;
		Mem51[ebp_20 - 0x00000050 + Mem38[ebp_20 - 0x00000004:word32]:byte] = Mem38[ebp_20 - 0x00000060:byte];
		word32 esp_53 = esp_45 - 0x00000004;
		Mem54[esp_53 + 0x00000000:word32] = (word32) Mem51[ebp_20 - 0x00000051:byte];
		Mem56[esp_53 - 0x00000004:word32] = 0x004267D4;
		Mem62[esp_53 - 0x00000008:word32] = ebp_20 - 0x0000003C + Mem56[ebp_20 - 0x00000004:word32] *s 0x00000003;
		edi = fn00411456(ebp_20, edi_44, fs, dwArg04);
		esp_25 = esp_53 + 0x00000004;
		Mem71[ebp_20 - 0x00000004:word32] = Mem62[ebp_20 - 0x00000004:word32] + 0x00000001;
	}
}

word32 fn00419570(word32 dwArg04)
{
	return fn00419600(dwArg04, 0x00000000, 0x00000004);
}

word32 fn00419600(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	word32 dwLoc0C_27;
	word32 eax_8 = (word32) bArg04;
	if (((word32) Mem0[eax_8 + 0x0042AD41:byte] & dwArg0C) == 0x00000000)
	{
		word32 dwLoc08_48;
		if (dwArg08 != 0x00000000)
			dwLoc08_48 = (word32) Mem0[0x00428ED4:word32][eax_8 * 0x0002] & dwArg08;
		else
			dwLoc08_48 = 0x00000000;
		if (dwLoc08_48 == 0x00000000)
			dwLoc0C_27 = 0x00000000;
		else
		{
l0041964D:
			dwLoc0C_27 = 0x00000001;
		}
	}
	else
		goto l0041964D;
	return dwLoc0C_27;
}

word32 fn00419680(word32 edi, selector fs, word32 dwArg04)
{
	word32 eax_15 = fn00419A50(dwArg04);
	if (eax_15 == Mem0[0x0042AE44:word32])
		;
	else if (eax_15 == 0x00000000)
	{
		fn00419B60();
		edi = fn00419C00(fp - 0x00000004, edi, fs);
	}
	else
	{
		word32 dwLoc0C_203 = 0x00000000;
		while (dwLoc0C_203 <u 0x00000005)
		{
			if (0x00428D80[dwLoc0C_203 * 0x00000030] == eax_15)
			{
				word32 dwLoc14_80 = 0x0042AD40;
				while (dwLoc14_80 <u 0xFFBD53C1)
				{
					Mem87[dwLoc14_80 + 0x00000000:byte] = 0x00;
					dwLoc14_80 = dwLoc14_80 + 0x00000001;
				}
				word32 dwLoc08_131 = 0x00428D78;
				while (dwLoc08_131 <u 0xFFBD728C)
				{
					word32 dwLoc10_111 = dwLoc0C_203 *s 0x00000030 + 0x00428D90 + dwLoc08_131 * 0x00000008 + 0x00000001;
					while ((word32) Mem0[dwLoc10_111 + 0x00000000:byte] != 0x00000000 && (word32) Mem0[dwLoc10_111 + 0x00000000:byte] != 0x00000000)
					{
						word32 dwLoc14_139 = (word32) Mem0[dwLoc10_111 + 0x00000000:byte];
						while (dwLoc14_139 <=u (word32) Mem0[dwLoc10_111 + 0x00000001:byte])
						{
							Mem158[dwLoc14_139 + 0x0042AD41:byte] = (byte) ((word32) Mem0[dwLoc14_139 + 0x0042AD41:byte] | (int32) Mem0[dwLoc08_131 + 0x00000000:byte]);
							dwLoc14_139 = dwLoc14_139 + 0x00000001;
						}
						dwLoc10_111 = dwLoc10_111 + 0x00000002;
					}
					dwLoc08_131 = dwLoc08_131 + 0x00000001;
				}
				Mem168[0x0042AE44:word32] = eax_15;
				Mem169[0x0042AD2C:word32] = 0x00000001;
				Mem176[0x0042ACB4:word32] = fn00419AC0(Mem169[0x0042AE44:word32]);
				word32 dwLoc08_177 = 0x00000000;
				while (dwLoc08_177 <u 0x00000006)
				{
					0x0042AE50[dwLoc08_177 * 0x0002] = (dwLoc0C_203 *s 0x00000030 + 0x00428D84)[dwLoc08_177 * 0x0002];
					dwLoc08_177 = dwLoc08_177 + 0x00000001;
				}
				edi = fn00419C00(fp - 0x00000004, edi, fs);
				goto l00419980;
			}
			dwLoc0C_203 = dwLoc0C_203 + 0x00000001;
		}
		if (GetCPInfo(eax_15, fp - 0x0000002C) == 0x00000001)
		{
			word32 dwLoc14_215 = 0x0042AD40;
			while (dwLoc14_215 <u 0xFFBD53C1)
			{
				Mem222[dwLoc14_215 + 0x00000000:byte] = 0x00;
				dwLoc14_215 = dwLoc14_215 + 0x00000001;
			}
			Mem228[0x0042AE44:word32] = eax_15;
			Mem229[0x0042ACB4:word32] = 0x00000000;
			if (dwLoc2C >u 0x00000001)
			{
				word32 dwLoc30_264 = fp - 0x00000026 + 0x00000001;
				while ((word32) Mem229[dwLoc30_264 + 0x00000000:byte] != 0x00000000 && (word32) Mem229[dwLoc30_264 + 0x00000000:byte] != 0x00000000)
				{
					word32 dwLoc14_317 = (word32) Mem229[dwLoc30_264 + 0x00000000:byte];
					while (dwLoc14_317 <=u (word32) Mem229[dwLoc30_264 + 0x00000001:byte])
					{
						Mem334[dwLoc14_317 + 0x0042AD41:byte] = (byte) ((word32) Mem229[dwLoc14_317 + 0x0042AD41:byte] | 0x00000004);
						dwLoc14_317 = dwLoc14_317 + 0x00000001;
					}
					dwLoc30_264 = dwLoc30_264 + 0x00000002;
				}
				word32 dwLoc14_281 = 0x00000001;
				while (dwLoc14_281 <u 0x000000FF)
				{
					Mem297[dwLoc14_281 + 0x0042AD41:byte] = (byte) ((word32) Mem229[dwLoc14_281 + 0x0042AD41:byte] | 0x00000008);
					dwLoc14_281 = dwLoc14_281 + 0x00000001;
				}
				Mem308[0x0042ACB4:word32] = fn00419AC0(Mem229[0x0042AE44:word32]);
				Mem309[0x0042AD2C:word32] = 0x00000001;
			}
			else
				Mem343[0x0042AD2C:word32] = 0x00000000;
			word32 dwLoc08_247 = 0x00000000;
			while (dwLoc08_247 <u 0x00000006)
			{
				0x0042AE50[dwLoc08_247 * 0x0002] = 0x0000;
				dwLoc08_247 = dwLoc08_247 + 0x00000001;
			}
			edi = fn00419C00(fp - 0x00000004, edi, fs);
		}
		else if (Mem0[0x00429864:word32] != 0x00000000)
		{
			fn00419B60();
			edi = fn00419C00(fp - 0x00000004, edi, fs);
		}
	}
l00419980:
	word32 ecx_40;
	word32 edi_41;
	fn00411087(Mem0[fp - 0x00000018:word32], edi, fs, out ecx_40, out edi_41);
	return edi_41;
}

word32 fn00419A50(word32 dwArg04)
{
	word32 eax_12;
	Mem6[0x00429864:word32] = 0x00000000;
	if (dwArg04 == 0xFFFFFFFE)
	{
		Mem15[0x00429864:word32] = 0x00000001;
		eax_12 = GetOEMCP();
	}
	else if (dwArg04 == 0xFFFFFFFD)
	{
		Mem19[0x00429864:word32] = 0x00000001;
		eax_12 = GetACP();
	}
	else if (dwArg04 == 0xFFFFFFFC)
	{
		Mem23[0x00429864:word32] = 0x00000001;
		eax_12 = Mem23[0x00429914:word32];
	}
	else
		eax_12 = dwArg04;
	return eax_12;
}

word32 fn00419AC0(word32 dwArg04)
{
	word32 eax_21;
	if (dwArg04 >u 0x000003B6)
		;
}

void fn00419B60()
{
	word32 dwLoc08_13 = 0x0042AD40;
	while (dwLoc08_13 < 0xFFBD53C1)
	{
		Mem17[dwLoc08_13 + 0x00000000:byte] = 0x00;
		dwLoc08_13 = dwLoc08_13 + 0x00000001;
	}
	Mem22[0x0042AE44:word32] = 0x00000000;
	Mem23[0x0042AD2C:word32] = 0x00000000;
	Mem24[0x0042ACB4:word32] = 0x00000000;
	word32 dwLoc08_25 = 0x00000000;
	while (dwLoc08_25 < 0x00000006)
	{
		0x0042AE50[dwLoc08_25 * 0x0002] = 0x0000;
		dwLoc08_25 = dwLoc08_25 + 0x00000001;
	}
	return;
}

word32 fn00419C00(word32 ebp, word32 edi, selector fs)
{
	if (GetCPInfo(Mem0[0x0042AE44:word32], fp + 0xFFFFFAD4) == 0x00000001)
	{
		word32 dwLoc0518_47 = 0x00000000;
		while (dwLoc0518_47 <u 0x00000100)
		{
			Mem59[fp + 0xFFFFFAEC + dwLoc0518_47:byte] = bLoc0518;
			dwLoc0518_47 = dwLoc0518_47 + 0x00000001;
		}
		Mem64[fp + 0xFFFFFAEC:byte] = 0x20;
		word32 dwLoc0410_66 = fp + 0xFFFFFADA;
		while ((word32) Mem64[dwLoc0410_66 + 0x00000000:byte] != 0x00000000)
		{
			word32 dwLoc0518_80 = (word32) Mem64[dwLoc0410_66 + 0x00000000:byte];
			while (dwLoc0518_80 <=u (word32) Mem64[dwLoc0410_66 + 0x00000001:byte])
			{
				Mem88[fp + 0xFFFFFAEC + dwLoc0518_80:byte] = 0x20;
				dwLoc0518_80 = dwLoc0518_80 + 0x00000001;
			}
			dwLoc0410_66 = dwLoc0410_66 + 0x00000002;
		}
		fn004113C0(fp - 0x00000004, edi, fs, fp + 0xFFFFFAEC, 0x00000100, Mem64[0x0042AE44:word32], Mem64[0x0042ACB4:word32], 0x00000000);
		Mem119[fp - 0x00000530:word32] = 0x00000000;
		Mem122[fp - 0x00000534:word32] = Mem119[0x0042AE44:word32];
		Mem124[fp - 0x00000538:word32] = 0x00000100;
		Mem127[fp - 0x0000053C:word32] = fp + 0xFFFFFCF4;
		Mem129[fp - 0x00000540:word32] = 0x00000100;
		Mem132[fp - 0x00000544:word32] = fp + 0xFFFFFAEC;
		Mem134[fp - 0x00000548:word32] = 0x00000100;
		Mem137[fp - 0x0000054C:word32] = Mem134[0x0042ACB4:word32];
		fn004113ED(fp - 0x00000004, edi, fs, dwArg00, dwArg08, dwArg0C, dwArg18, dwArg1C);
		Mem146[fp - 0x00000530:word32] = 0x00000000;
		Mem149[fp - 0x00000534:word32] = Mem146[0x0042AE44:word32];
		Mem151[fp - 0x00000538:word32] = 0x00000100;
		Mem154[fp - 0x0000053C:word32] = fp + 0xFFFFFBF4;
		Mem156[fp - 0x00000540:word32] = 0x00000100;
		Mem159[fp - 0x00000544:word32] = fp + 0xFFFFFAEC;
		Mem161[fp - 0x00000548:word32] = 0x00000200;
		Mem164[fp - 0x0000054C:word32] = Mem161[0x0042ACB4:word32];
		fn004113ED(fp - 0x00000004, edi, fs, dwArg00, dwArg08, dwArg0C, dwArg18, dwArg1C);
		Mem167[fp + 0xFFFFFAE8:word32] = 0x00000000;
		while (Mem167[fp + 0xFFFFFAE8:word32] <u 0x00000100)
		{
			if (((word32) (fp + 0xFFFFFDF4)[Mem167[fp + 0xFFFFFAE8:word32] * 0x0002] & 0x00000001) != 0x00000000)
			{
				Mem206[Mem167[fp + 0xFFFFFAE8:word32] + 0x0042AD41:byte] = (byte) ((word32) Mem167[Mem167[fp + 0xFFFFFAE8:word32] + 0x0042AD41:byte] | 0x00000010);
				Mem210[Mem206[fp + 0xFFFFFAE8:word32] + 0x0042AE60:byte] = Mem206[fp + 0xFFFFFCF4 + Mem206[fp + 0xFFFFFAE8:word32]:byte];
			}
			else if (((word32) (fp + 0xFFFFFDF4)[Mem167[fp + 0xFFFFFAE8:word32] * 0x0002] & 0x00000002) != 0x00000000)
			{
				Mem224[Mem167[fp + 0xFFFFFAE8:word32] + 0x0042AD41:byte] = (byte) ((word32) Mem167[Mem167[fp + 0xFFFFFAE8:word32] + 0x0042AD41:byte] | 0x00000020);
				Mem228[Mem224[fp + 0xFFFFFAE8:word32] + 0x0042AE60:byte] = Mem224[fp + 0xFFFFFBF4 + Mem224[fp + 0xFFFFFAE8:word32]:byte];
			}
			else
				Mem230[Mem167[fp + 0xFFFFFAE8:word32] + 0x0042AE60:byte] = 0x00;
			Mem198[fp + 0xFFFFFAE8:word32] = Mem167[fp + 0xFFFFFAE8:word32] + 0x00000001;
		}
	}
	else
	{
		word32 dwLoc0518_231 = 0x00000000;
		while (dwLoc0518_231 <u 0x00000100)
		{
			if (dwLoc0518_231 >=u 0x00000041 && dwLoc0518_231 <=u 0x0000005A)
			{
				Mem292[dwLoc0518_231 + 0x0042AD41:byte] = (byte) ((word32) Mem0[dwLoc0518_231 + 0x0042AD41:byte] | 0x00000010);
				Mem298[dwLoc0518_231 + 0x0042AE60:byte] = (byte) (dwLoc0518_231 + 0x00000020);
			}
			else if (dwLoc0518_231 >=u 0x00000061 && dwLoc0518_231 <=u 0x0000007A)
			{
				Mem278[dwLoc0518_231 + 0x0042AD41:byte] = (byte) ((word32) Mem0[dwLoc0518_231 + 0x0042AD41:byte] | 0x00000020);
				Mem284[dwLoc0518_231 + 0x0042AE60:byte] = (byte) (dwLoc0518_231 - 0x00000020);
			}
			else
				Mem270[dwLoc0518_231 + 0x0042AE60:byte] = 0x00;
			dwLoc0518_231 = dwLoc0518_231 + 0x00000001;
		}
	}
	word32 ecx_41;
	word32 edi_42;
	fn00411087(Mem0[fp - 0x00000008:word32], edi, fs, out ecx_41, out edi_42);
	return edi_42;
}

word32 fn0041A010(word32 edi, selector fs, ptr32 ediOut)
{
	*ediOut = edi;
	word32 esp_14 = fp - 0x00000004;
	if (Mem0[0x0042B0F8:word32] == 0x00000000)
	{
		word32 edi_24;
		*ediOut = fn00411023(edi, fs);
		Mem28[0x0042B0F8:word32] = 0x00000001;
		esp_14 = fp + 0xFFFFFFF8;
	}
	return Mem0[esp_14 + 0x00000000:word32];
}

word32 fn0041A040(word32 edi, word32 dwArg04, ptr32 ediOut)
{
	esp = fp;
	esp = fp - 0x00000004;
	dwLoc04 = edi;
	edi = dwArg04;
	eax = fn0041A0B5(edi, dwLoc04, dwArg04, dwArg08, out edi);
	return eax;
}

word32 fn0041A0B5(word32 edi, word32 dwArg00, word32 dwArg08, word32 dwArg0C, ptr32 ediOut)
{
	byte dl_23;
	word32 ecx_1 = dwArg0C;
	if ((dwArg0C & 0x00000003) != 0x00000000)
	{
l0041A0C1:
		do
		{
			dl_23 = Mem0[ecx_1 + 0x00000000:byte];
			ecx_1 = ecx_1 + 0x00000001;
			if (dl_23 == 0x00)
			{
l0041A130:
				Mem32[edi + 0x00000000:byte] = dl_23;
				word32 edi_36;
				*ediOut = dwArg00;
				return dwArg08;
			}
			Mem99[edi + 0x00000000:byte] = dl_23;
			edi = edi + 0x00000001;
		} while ((ecx_1 & 0x00000003) != 0x00000000);
l0041A0DE:
		while (true)
		{
			word32 edx_48 = Mem0[ecx_1 + 0x00000000:word32];
			word32 eax_44 = Mem0[ecx_1 + 0x00000000:word32];
			dl_23 = (byte) edx_48;
			byte dh_50 = SLICE(edx_48, byte, 8);
			word16 dx_51 = (word16) edx_48;
			ecx_1 = ecx_1 + 0x00000004;
			if (((eax_44 ^ 0xFFFFFFFF ^ eax_44 + 0x7EFEFEFF) & 0x81010100) != 0x00000000)
			{
				if (dl_23 == 0x00)
					goto l0041A130;
				if (dh_50 == 0x00)
				{
					Mem83[edi + 0x00000000:word16] = dx_51;
					word32 edi_85;
					*ediOut = dwArg00;
					return dwArg08;
				}
				if ((edx_48 & 0x00FF0000) == 0x00000000)
				{
					Mem78[edi + 0x00000000:word16] = dx_51;
					Mem80[edi + 0x00000002:byte] = 0x00;
					word32 edi_81;
					*ediOut = dwArg00;
					return dwArg08;
				}
				if ((edx_48 & 0xFF000000) == 0x00000000)
				{
					Mem74[edi + 0x00000000:word32] = edx_48;
					word32 edi_76;
					*ediOut = dwArg00;
					return dwArg08;
				}
				goto l0041A0D9;
			}
l0041A0D9:
			Mem59[edi + 0x00000000:word32] = edx_48;
			edi = edi + 0x00000004;
		}
	}
	else
		goto l0041A0DE;
fn0041A0B5_exit:
}

word32 fn0041B5E0()
{
	word32 eax_116;
	if (Mem0[0x0042AC9C:word32] == Mem0[0x0042ACAC:word32])
	{
		word32 eax_111 = HeapReAlloc(Mem0[0x0042AF80:word32], 0x00000000, Mem0[0x0042ACA0:word32], (Mem0[0x0042ACAC:word32] + 0x00000010) *s 0x00000014);
		if (eax_111 == 0x00000000)
			eax_116 = 0x00000000;
		else
		{
			Mem120[0x0042ACA0:word32] = eax_111;
			Mem124[0x0042ACAC:word32] = Mem120[0x0042ACAC:word32] + 0x00000010;
l0041B63B:
			word32 eax_34 = Mem0[0x0042AC9C:word32] *s 0x00000014 + Mem0[0x0042ACA0:word32];
			Mem42[fp - 0x00000014:word32] = Mem0[0x0042AF80:word32];
			Mem46[eax_34 + 0x00000010:word32] = HeapAlloc(0x00000000, 0x00000008, 0x000041C4);
			if (Mem46[eax_34 + 0x00000010:word32] == 0x00000000)
				eax_116 = 0x00000000;
			else
			{
				Mem54[fp - 0x0000000C:word32] = 0x00000004;
				Mem56[fp - 0x00000010:word32] = 0x00002000;
				Mem64[eax_34 + 0x0000000C:word32] = VirtualAlloc(0x00000000, 0x00100000, 0x00000008, 0x000041C4);
				if (Mem64[eax_34 + 0x0000000C:word32] == 0x00000000)
				{
					Mem71[fp - 0x0000000C:word32] = Mem64[eax_34 + 0x00000010:word32];
					Mem73[fp - 0x00000010:word32] = 0x00000000;
					Mem76[fp - 0x00000014:word32] = Mem73[0x0042AF80:word32];
					HeapFree(0x00100000, 0x00002000, 0x00000004);
					eax_116 = 0x00000000;
				}
				else
				{
					Mem83[eax_34 + 0x00000000:word32] = 0x00000000;
					Mem85[eax_34 + 0x00000004:word32] = 0x00000000;
					Mem87[eax_34 + 0x00000008:word32] = 0xFFFFFFFF;
					Mem91[0x0042AC9C:word32] = Mem87[0x0042AC9C:word32] + 0x00000001;
					Mem94[Mem91[eax_34 + 0x00000010:word32]:word32] = 0xFFFFFFFF;
					eax_116 = eax_34;
				}
			}
		}
	}
	else
		goto l0041B63B;
	return eax_116;
}

void fn0041D200(word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10)
{
	word32 dwLoc08_100 = dwArg08;
	if (dwArg10 != 0x00000000)
	{
		Mem102[dwArg08 + 0x00000000:byte] = 0x2D;
		dwLoc08_100 = dwArg08 + 0x00000001;
		dwArg04 = -dwArg04;
	}
	word32 dwLoc14_23 = dwLoc08_100;
	do
	{
		word32 eax_42 = SEQ(SEQ(0x00000000, dwArg04) % dwArg0C, dwArg04) /u dwArg0C;
		word32 edx_33 = SEQ(0x00000000, dwArg04) % dwArg0C;
		dwArg04 = eax_42;
		if (edx_33 >u 0x00000009)
		{
			Mem87[dwLoc08_100 + 0x00000000:byte] = (byte) (edx_33 + 0x00000057);
			dwLoc08_100 = dwLoc08_100 + 0x00000001;
		}
		else
		{
			Mem96[dwLoc08_100 + 0x00000000:byte] = (byte) (edx_33 + 0x00000030);
			dwLoc08_100 = dwLoc08_100 + 0x00000001;
		}
	} while (eax_42 >u 0x00000000);
	Mem54[dwLoc08_100 + 0x00000000:byte] = 0x00;
	word32 dwLoc08_58 = dwLoc08_100 - 0x00000001;
	do
	{
		byte dl_62 = Mem54[dwLoc08_58 + 0x00000000:byte];
		Mem67[dwLoc08_58 + 0x00000000:byte] = Mem54[dwLoc14_23 + 0x00000000:byte];
		Mem70[dwLoc14_23 + 0x00000000:byte] = dl_62;
		word32 edx_72 = dwLoc08_58 - 0x00000001;
		word32 eax_75 = dwLoc14_23 + 0x00000001;
		dwLoc08_58 = edx_72;
		dwLoc14_23 = eax_75;
	} while (eax_75 <u edx_72);
	return;
}

word32 fn0041DC20(word32 dwArg04)
{
	word32 dwLoc08_12 = 0x00428B94;
	while (Mem0[dwLoc08_12 + 0x00000000:word32] != dwArg04)
	{
		word32 edx_51 = dwLoc08_12 + 0x0000000C;
		dwLoc08_12 = edx_51;
		if (edx_51 >=u Mem0[0x00428C10:word32] *s 0x0000000C + 0x00428B90)
			break;
	}
	word32 eax_34;
	if (dwLoc08_12 <u Mem0[0x00428C10:word32] *s 0x0000000C + 0x00428B90 && Mem0[dwLoc08_12 + 0x00000004:word32] == dwArg04)
		eax_34 = dwLoc08_12;
	else
		eax_34 = 0x00000000;
	return eax_34;
}

word32 fn0041DCE0(word32 dwArg04)
{
	word32 eax_19;
	word32 eax_10 = Mem0[0x004298F8:word32];
	if (eax_10 != 0x00000000)
	{
		eax_10();
		if (eax_10 == 0x00000000)
		{
l0041DD00:
			eax_19 = 0x00000000;
		}
		else
			eax_19 = 0x00000001;
	}
	else
		goto l0041DD00;
	return eax_19;
}

word32 fn0041DD20(word32 dwArg04, byte bArg08, word32 dwArg0C)
{
	word32 edx_3 = dwArg0C;
	if (dwArg0C != 0x00000000)
	{
		byte al_22 = bArg08;
		word32 eax_23 = (word32) bArg08;
		word32 edi_27 = dwArg04;
		if (dwArg0C >=u 0x00000004)
		{
			word32 ecx_52 = -dwArg04;
			word32 ecx_53 = ecx_52 & 0x00000003;
			if ((ecx_52 & 0x00000003) != 0x00000000)
			{
				edx_3 = dwArg0C - (ecx_52 & 0x00000003);
				do
				{
					Mem83[edi_27 + 0x00000000:byte] = bArg08;
					edi_27 = edi_27 + 0x00000001;
					ecx_53 = ecx_53 - 0x00000001;
				} while (ecx_53 != 0x00000000);
			}
			word32 eax_61 = (eax_23 << 0x00000008) + eax_23;
			word32 eax_64 = (eax_61 << 0x00000010) + eax_61;
			al_22 = (byte) eax_64;
			edx_3 = edx_3 & 0x00000003;
			word32 ecx_68 = edx_3 >>u 0x00000002;
			if (ecx_68 != 0x00000000)
			{
l0041DD65:
				while (ecx_68 != 0x00000000)
				{
					Mem73[edi_27 + 0x00000000:word32] = eax_64;
					edi_27 = edi_27 + 0x00000004;
					ecx_68 = ecx_68 - 0x00000001;
				}
				if (edx_3 != 0x00000000)
				{
l0041DD6B:
					do
					{
						Mem47[edi_27 + 0x00000000:byte] = al_22;
						edi_27 = edi_27 + 0x00000001;
						edx_3 = edx_3 - 0x00000001;
					} while (edx_3 != 0x00000000);
				}
			}
			else
				goto l0041DD6B;
		}
		else
			goto l0041DD6B;
		return dwArg04;
	}
	else
		return dwArg04;
}

word32 fn0041DDD0(word32 ebp, word32 dwArg04, word32 dwArg08)
{
	word32 eax_21;
	word32 esp_36 = fp - 0x00000008;
	if (dwArg04 >u 0xFFFFFFE0)
		eax_21 = 0x00000000;
	else
		while (true)
		{
			word32 dwLoc08_39;
			if (dwArg04 <=u 0xFFFFFFE0)
			{
				word32 esp_63 = esp_36 - 0x00000004;
				Mem64[esp_63 + 0x00000000:word32] = dwArg04;
				esp_36 = esp_63 + 0x00000004;
				dwLoc08_39 = fn0041106E(dwArg00);
			}
			else
				dwLoc08_39 = 0x00000000;
			if (dwLoc08_39 != 0x00000000 || dwArg08 == 0x00000000)
			{
				eax_21 = dwLoc08_39;
				goto l0041DE23;
			}
			word32 esp_51 = esp_36 - 0x00000004;
			Mem52[esp_51 + 0x00000000:word32] = dwArg04;
			esp_36 = esp_51;
			if (fn004113D9() == 0x00000000)
			{
				eax_21 = 0x00000000;
				goto l0041DE23;
			}
		}
l0041DE23:
	return eax_21;
}

word32 fn0041E360()
{
	word32 dwLoc08_29 = 0xFFFFFFFE;
	if (Mem0[0x0042AF90:word32] == 0x00000003 && fn004111D6() < 0x00000000)
		Mem44[fp - 0x00000008:word32] = 0xFFFFFFFC;
	if (HeapValidate(Mem0[0x0042AF80:word32], 0x00000000, 0x00000000) == 0x00000000)
		if (GetLastError() == 0x00000078)
		{
			Mem37[0x00429630:word32] = 0x00000078;
			Mem38[0x0042962C:word32] = 0x00000028;
		}
		else
			dwLoc08_29 = 0xFFFFFFFC;
	return dwLoc08_29;
}

word32 fn0041E5C0(word32 edi, selector fs, word32 dwArg04, ptr32 ediOut)
{
	*ediOut = edi;
	word32 ebp_28 = fp - 0x00000004;
	if (dwArg04 >u 0xFFFFFF01)
	{
		word32 ecx_51;
		word32 edi_53;
		if (fn0041119F(fp - 0x00000004, edi, fs, out ecx_51, out ebp_28, out edi_53) == 0x00000001)
			int3();
	}
	return (word32) Mem0[0x00428ED4:word32][Mem0[ebp_28 + 0x00000008:word32] * 0x0002] & Mem0[ebp_28 + 0x0000000C:word32];
}

word32 fn0041E610(word32 edi, selector fs, word32 dwArg04, word32 dwArg08, ptr32 ediOut)
{
	*ediOut = edi;
	word32 eax_103;
	if (dwArg04 <=u 0xFFFFFF01)
		eax_103 = (word32) Mem0[0x00428ED4:word32][dwArg04 * 0x0002] & dwArg08;
	else
	{
		word32 dwLoc0C_123;
		if (((word32) Mem0[0x00428ED4:word32][(word32) (byte) (dwArg04 >> 0x00000008 & 0x000000FF) * 0x0002] & 0x00008000) != 0x00000000)
			dwLoc0C_123 = 0x00000002;
		else
			dwLoc0C_123 = 0x00000001;
		if (fn004113C0(fp - 0x00000004, edi, fs, fp - 0x00000010, dwLoc0C_123, Mem0[0x00429914:word32], Mem0[0x00429904:word32], 0x00000001) == 0x00000000)
			eax_103 = 0x00000000;
		else
			eax_103 = (word32) Mem0[fp - 0x00000008:word16] & Mem0[fp + 0x00000008:word32];
	}
	return eax_103;
}

word32 fn0041EDD0(word32 dwArg04, word32 dwArg08)
{
	word32 dwLoc0C_10 = dwArg08;
	word32 dwLoc08_13 = dwArg04;
	word32 eax_20 = dwLoc0C_10 - 0x00000001;
	dwLoc0C_10 = eax_20;
	while (dwLoc0C_10 != 0x00000000 && (int32) Mem0[dwLoc08_13 + 0x00000000:byte] != 0x00000000)
	{
		dwLoc08_13 = dwLoc08_13 + 0x00000001;
		eax_20 = dwLoc0C_10 - 0x00000001;
		dwLoc0C_10 = eax_20;
	}
	return dwArg08 - eax_20 - 0x00000001;
}

word32 fn0041F640(word32 ebp, word32 edi, selector fs, word32 dwArg04, word32 dwArg08)
{
	word32 esp_232;
	Mem17[fs:0x00000000:word32] = fp - 0x00000014;
	word32 ebp_116 = fp - 0x00000004;
	if (Mem17[0x0042992C:word32] != 0x00000000)
	{
		Mem71[fp - 0x00000008:word32] = 0x00000000;
		Mem71[0x0042992C:word32]();
		Mem86[fp - 0x00000008:word32] = 0xFFFFFFFF;
		esp_232 = fp + 0xFFFFFEAC;
	}
	else
	{
		if (dwArg04 != 0x00000001)
			;
		word32 ecx_115;
		word32 edi_117;
		if (fn0041119F(fp - 0x00000004, edi, fs, out ecx_115, out ebp_116, out edi_117) == 0x00000001)
			int3();
		Mem122[ebp_116 - 0x00000034:byte] = 0x00;
		Mem124[fp + 0xFFFFFEA8:word32] = 0x00000104;
		Mem127[fp + 0xFFFFFEA4:word32] = ebp_116 + 0xFFFFFEC8;
		Mem129[fp + 0xFFFFFEA0:word32] = 0x00000000;
		word32 eax_130 = GetModuleFileNameA(Mem129[fp + 0xFFFFFEA0:HMODULE], Mem129[fp + -348:LPSTR], Mem129[fp + -344:DWORD]);
		word32 esp_131 = fp + 0xFFFFFEAC;
		if (eax_130 == 0x00000000)
		{
			Mem255[fp + 0xFFFFFEA8:word32] = 0x00425B7C;
			Mem258[fp + 0xFFFFFEA4:word32] = ebp_116 + 0xFFFFFEC8;
			eax_130 = fn00411258(edi_117, out edi_117);
			esp_131 = fp + 0xFFFFFEA8;
		}
		Mem139[ebp_116 - 0x00000028:word32] = ebp_116 + 0xFFFFFEC8;
		word32 esp_141 = esp_131 - 0x00000004;
		Mem142[esp_141 + 0x00000000:word32] = ebp_116 + 0xFFFFFEC8;
		word32 eax_143 = fn00411235(eax_130, dwArg00);
		word32 esp_144 = esp_141 + 0x00000004;
		word32 eax_145 = eax_143 + 0x0000000B;
		if (eax_143 >u 0xFFFFFFCF)
		{
			Mem236[esp_141 + 0x00000000:word32] = ebp_116 + 0xFFFFFEC8;
			Mem242[ebp_116 - 0x00000028:word32] = Mem236[ebp_116 - 0x00000028:word32] - 0x00000031 + fn00411235(ebp_116 + 0xFFFFFEC8, dwArg00);
			Mem244[esp_141 + 0x00000000:word32] = 0x00000003;
			Mem246[esp_141 - 0x00000004:word32] = 0x00425B78;
			Mem249[esp_141 - 0x00000008:word32] = Mem246[ebp_116 - 0x00000028:word32];
			eax_145 = fn00411492(ebp, dwArg00, dwArg04, dwArg08, dwArg0C);
			esp_144 = esp_141 + 0x00000004;
		}
		word32 esp_151 = esp_144 - 0x00000004;
		Mem152[esp_151 + 0x00000000:word32] = Mem142[ebp_116 - 0x00000028:word32];
		fn00414C20(Mem152[ebp_116 - 0x0000001C:word32] + 0x0000000C + fn00411235(eax_145, dwArg00) + 0x00000003 & 0xFFFFFFFC, ebp);
		Mem162[ebp_116 + 0xFFFFFEBC:word32] = esp_151 + 0x00000004;
		Mem163[ebp_116 - 0x00000018:word32] = esp_151 + 0x00000004;
		Mem165[ebp_116 - 0x00000024:word32] = Mem163[ebp_116 + 0xFFFFFEBC:word32];
		Mem168[esp_151 + 0x00000000:word32] = Mem165[ebp_116 + 0xFFFFFEC4:word32];
		Mem171[esp_151 - 0x00000004:word32] = Mem168[ebp_116 - 0x00000024:word32];
		word32 edi_172;
		fn00411258(edi_117, out edi_172);
		Mem178[esp_151 - 0x00000004:word32] = 0x00425B54;
		Mem181[esp_151 - 0x00000008:word32] = Mem178[ebp_116 - 0x00000024:word32];
		word32 edi_182;
		fn0041120D(edi_172, dwArg00, out edi_182);
		Mem187[esp_151 - 0x00000004:word32] = 0x00427178;
		Mem190[esp_151 - 0x00000008:word32] = Mem187[ebp_116 - 0x00000024:word32];
		word32 edi_191;
		fn0041120D(edi_182, dwArg00, out edi_191);
		Mem197[esp_151 - 0x00000004:word32] = Mem190[ebp_116 - 0x00000028:word32];
		Mem200[esp_151 - 0x00000008:word32] = Mem197[ebp_116 - 0x00000024:word32];
		word32 edi_201;
		fn0041120D(edi_191, dwArg00, out edi_201);
		Mem206[esp_151 - 0x00000004:word32] = 0x00425B54;
		Mem209[esp_151 - 0x00000008:word32] = Mem206[ebp_116 - 0x00000024:word32];
		word32 edi_210;
		fn0041120D(edi_201, dwArg00, out edi_210);
		Mem216[esp_151 - 0x00000004:word32] = Mem209[ebp_116 - 0x00000020:word32];
		Mem219[esp_151 - 0x00000008:word32] = Mem216[ebp_116 - 0x00000024:word32];
		word32 eax_221 = fn0041120D(edi_210, dwArg00, out edi);
		Mem225[esp_151 - 0x00000004:word32] = 0x00012010;
		Mem227[esp_151 - 0x00000008:word32] = 0x00425B28;
		Mem230[esp_151 - 0x0000000C:word32] = Mem227[ebp_116 - 0x00000024:word32];
		fn0041107D(eax_221, dwArg00, dwArg04, dwArg08);
		esp_232 = esp_151;
	}
	Mem54[esp_232 - 0x00000004:word32] = 0x00000003;
	fn00411212(edi, fs, dwArg00);
	Mem58[fs:0x00000000:word32] = Mem54[ebp_116 - 0x00000010:word32];
	word32 ecx_60;
	word32 edi_61;
	return fn00411087(Mem58[ebp_116 - 0x0000002C:word32], edi, fs, out ecx_60, out edi_61);
}

word32 fn0041F960(word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, ptr32 edxOut)
{
	word32 eax_21;
	if (dwArg10 == 0x00000000)
	{
		word32 edx_36 = SEQ(0x00000000, dwArg08) % dwArg0C;
		eax_21 = SEQ(SEQ(edx_36, dwArg04) % dwArg0C, dwArg04) /u dwArg0C;
		word32 edx_47;
		*edxOut = SEQ(edx_36, dwArg08) /u dwArg0C;
	}
	else
	{
		word32 ecx_50 = dwArg10;
		word32 ebx_51 = dwArg0C;
		word32 edx_52 = dwArg08;
		word32 eax_53 = dwArg04;
		do
		{
			word32 ecx_59 = ecx_50 >>u 0x00000001;
			edx_52 = edx_52 >>u 0x00000001;
			ebx_51 = __rcr(ebx_51, 0x01, cond(ecx_59));
			eax_53 = __rcr(eax_53, 0x01, cond(edx_52));
			word64 edx_eax_69 = SEQ(edx_52, eax_53);
			ecx_50 = ecx_59;
		} while (ecx_59 != 0x00000000);
		word32 eax_76 = SEQ(edx_eax_69 % ebx_51, eax_53) /u ebx_51;
		word64 edx_eax_82 = eax_76 *u dwArg0C;
		word32 esi_102 = eax_76;
		word32 eax_83 = (word32) edx_eax_82;
		word32 edx_85 = SLICE(edx_eax_82, word32, 32) + (word32) (dwArg10 *u eax_76);
		if (edx_85 <u 0x00000000 || (edx_85 >u dwArg08 || edx_85 >=u dwArg08 && eax_83 >u dwArg04))
			esi_102 = eax_76 - 0x00000001;
		word32 edx_93;
		*edxOut = 0x00000000;
		eax_21 = esi_102;
	}
	return eax_21;
}

word32 fn0041F9F0(word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10)
{
	word32 eax_17;
	if (dwArg10 == 0x00000000)
		eax_17 = SEQ(SEQ(0x00000000, dwArg08) % dwArg0C, dwArg04) % dwArg0C;
	else
	{
		word32 ecx_46 = dwArg10;
		word32 ebx_47 = dwArg0C;
		word32 edx_48 = dwArg08;
		word32 eax_49 = dwArg04;
		do
		{
			word32 ecx_55 = ecx_46 >>u 0x00000001;
			edx_48 = edx_48 >>u 0x00000001;
			ebx_47 = __rcr(ebx_47, 0x01, cond(ecx_55));
			eax_49 = __rcr(eax_49, 0x01, cond(edx_48));
			word64 edx_eax_65 = SEQ(edx_48, eax_49);
			ecx_46 = ecx_55;
		} while (ecx_55 != 0x00000000);
		word32 eax_72 = SEQ(edx_eax_65 % ebx_47, eax_49) /u ebx_47;
		word64 edx_eax_79 = dwArg0C *u eax_72;
		word32 eax_113 = (word32) edx_eax_79;
		word32 edx_114 = SLICE(edx_eax_79, word32, 32) + (word32) (dwArg10 *u eax_72);
		if (edx_114 <u 0x00000000 || (edx_114 >u dwArg08 || edx_114 >=u dwArg08 && eax_113 >u dwArg04))
		{
			word64 edx_eax_112 = SEQ(edx_114, eax_113 - dwArg0C) - dwArg10_dwArg0C;
			eax_113 = (word32) edx_eax_112;
			edx_114 = SLICE(edx_eax_112, word32, 32);
		}
		eax_17 = -(word32) (SEQ(edx_114, eax_113 - dwArg04) - dwArg08_dwArg04);
	}
	return eax_17;
}

word32 fn0041FD80(word32 ebp, word32 edi, selector fs, ptr32 ediOut)
{
// def fp
// def ebp
// def Mem0
// def fs
// def dl
// def None
// def dx
// def SO
// def CZ
// def cx
// def edx_eax
// def ax
// def ecx
// def al
// def edi
// def ediOut
// def bArg00
// def dwArg04
// def dwArg08
// def dwArg00
// def dwArg0C
	esp_1 = fp;
	esp_2 = fp - 0x00000004;
	dwLoc04_4 = ebp;
	ebp_5 = fp - 0x00000004;
	esp_6 = fp - 0x000002C0;
	SCZO_7 = cond(fp - 0x000002C0);
	eax_9 = Mem0[0x00428EB0:word32];
	dwLoc38_10 = eax_9;
	dwLoc28_11 = 0x00000000;
	dwLoc0240_12 = 0x00000000;
	dwLoc0250_13 = 0x00000000;
	dwLoc24_14 = 0x00000000;
// fs_27 = PHI(fs, fs_84)
// dl_28 = PHI(dl, dl_85)
// None_29 = PHI(None, None_86)
// dx_30 = PHI(dx, dx_87)
// SO_31 = PHI(SO, SO_88)
// CZ_32 = PHI(CZ, CZ_89)
// cx_33 = PHI(cx, cx_90)
// ebp_34 = PHI(ebp_5, ebp_94)
// edx_eax_35 = PHI(edx_eax, edx_eax_95)
// ax_36 = PHI(ax, ax_96)
// ecx_37 = PHI(ecx, ecx_98)
// al_38 = PHI(al, al_100)
// edi_39 = PHI(edi, edi_101)
// esp_40 = PHI(esp_6, esp_103)
// SCZO_41 = PHI(SCZO_7, SCZO_104)
	eax_42 = Mem0[ebp_34 + 0x0000000C:word32];
	cl_43 = Mem0[eax_42 + 0x00000000:byte];
	Mem44[ebp_34 + 0xFFFFFDBF:byte] = cl_43;
	edx_45 = (int32) Mem44[ebp_34 + 0xFFFFFDBF:byte];
	eax_46 = Mem44[ebp_34 + 0x0000000C:word32];
	eax_47 = eax_46 + 0x00000001;
	Mem48[ebp_34 + 0x0000000C:word32] = eax_47;
	SZO_49 = cond(edx_45 & edx_45);
	Z_50 = SZO_49;
	C_51 = false;
}

word32 fn00420EC0(word32 edi, selector fs, byte bArg04, word32 dwArg08, word32 dwArg0C, ptr32 ediOut)
{
	*ediOut = edi;
	word32 eax_23;
	if ((Mem0[dwArg08 + 0x0000000C:word32] & 0x00000040) != 0x00000000 && Mem0[dwArg08 + 0x00000008:word32] == 0x00000000)
	{
		Mem102[dwArg0C + 0x00000000:word32] = Mem0[dwArg0C + 0x00000000:word32] + 0x00000001;
		eax_23 = dwArg0C;
	}
	else
	{
		Mem37[dwArg08 + 0x00000004:word32] = Mem0[dwArg08 + 0x00000004:word32] - 0x00000001;
		if (Mem37[dwArg08 + 0x00000004:word32] >= 0x00000000)
		{
			Mem65[Mem37[dwArg08 + 0x00000000:word32]:byte] = bArg04;
			word32 eax_70 = Mem65[dwArg08 + 0x00000000:word32];
			Mem75[dwArg08 + 0x00000000:word32] = eax_70 + 0x00000001;
			eax_23 = eax_70 + 0x00000001;
		}
		else
		{
			word32 edi_86;
			eax_23 = fn004114AB(edi, fs, dwArg08, out edi_86);
			Mem91[fp - 0x00000008:word32] = eax_23;
		}
		if (Mem37[fp - 0x00000008:word32] == 0xFFFFFFFF)
			Mem53[Mem37[fp + 0x0000000C:word32]:word32] = 0xFFFFFFFF;
		else
		{
			word32 eax_55 = Mem37[Mem37[fp + 0x0000000C:word32]:word32];
			Mem60[Mem37[fp + 0x0000000C:word32]:word32] = eax_55 + 0x00000001;
			eax_23 = eax_55 + 0x00000001;
		}
	}
	return eax_23;
}

word32 fn00420F90(word32 ebp, word32 edi, selector fs)
{
	word32 esp_14 = fp - 0x00000004;
	word32 eax_16 = Mem0[fp + 0x00000008:word32];
	word32 ecx_17 = Mem0[fp + 0x00000008:word32];
	Mem20[fp + 0x00000008:word32] = ecx_17 - 0x00000001;
	while (eax_16 > 0x00000000)
	{
		word32 esp_34 = esp_14 - 0x00000004;
		Mem35[esp_34 + 0x00000000:word32] = Mem20[fp + 0x00000010:word32];
		Mem38[esp_34 - 0x00000004:word32] = Mem35[fp + 0x0000000C:word32];
		Mem42[esp_34 - 0x00000008:word32] = DPB(ecx_17 - 0x00000001, Mem38[fp + 0x00000004:byte], 0, 8);
		fn00420EC0(edi, fs, bArg00, dwArg04, dwArg08, out edi);
		esp_14 = esp_34 + 0x00000004;
		if (Mem42[Mem42[fp + 0x00000010:word32]:word32] == 0xFFFFFFFF)
			goto l00420FC3;
		eax_16 = Mem0[fp + 0x00000008:word32];
		ecx_17 = Mem0[fp + 0x00000008:word32];
		Mem20[fp + 0x00000008:word32] = ecx_17 - 0x00000001;
	}
l00420FC3:
	return edi;
}

word32 fn00420FE0(word32 ebp, word32 edi, selector fs, word32 dwArg08, word32 dwArg0C, word32 dwArg10)
{
	word32 esp_36 = fp - 0x00000008;
	if ((Mem0[dwArg0C + 0x0000000C:word32] & 0x00000040) != 0x00000000 && Mem0[dwArg0C + 0x00000008:word32] == 0x00000000)
		Mem79[dwArg10 + 0x00000000:word32] = Mem0[dwArg10 + 0x00000000:word32] + dwArg08;
	else
	{
		word32 eax_37 = Mem0[fp + 0x00000008:word32];
		Mem41[fp + 0x00000008:word32] = Mem0[fp + 0x00000008:word32] - 0x00000001;
		while (eax_37 > 0x00000000)
		{
			Mem46[fp - 0x00000005:byte] = Mem41[Mem41[fp + 0x00000004:word32]:byte];
			word32 esp_48 = esp_36 - 0x00000004;
			Mem49[esp_48 + 0x00000000:word32] = Mem46[fp + 0x00000010:word32];
			Mem52[esp_48 - 0x00000004:word32] = Mem49[fp + 0x0000000C:word32];
			Mem56[esp_48 - 0x00000008:word32] = DPB(eax_37, Mem52[fp - 0x00000005:byte], 0, 8);
			fn00420EC0(edi, fs, bArg00, dwArg04, dwArg08, out edi);
			Mem66[fp + 0x00000004:word32] = Mem56[fp + 0x00000004:word32] + 0x00000001;
			esp_36 = esp_48 + 0x00000004;
			if (Mem66[Mem66[fp + 0x00000010:word32]:word32] == 0xFFFFFFFF)
				goto l00421048;
			eax_37 = Mem0[fp + 0x00000008:word32];
			Mem41[fp + 0x00000008:word32] = Mem0[fp + 0x00000008:word32] - 0x00000001;
		}
	}
l00421048:
	return edi;
}

word32 fn00421070(word32 dwArg04)
{
	Mem13[dwArg04 + 0x00000000:word32] = Mem0[dwArg04 + 0x00000000:word32] + 0x00000004;
	return Mem13[Mem13[dwArg04 + 0x00000000:word32] - 0x00000004:word32];
}

word32 fn00421090(word32 dwArg04, ptr32 edxOut)
{
	Mem13[dwArg04 + 0x00000000:word32] = Mem0[dwArg04 + 0x00000000:word32] + 0x00000008;
	word32 ecx_15 = Mem13[dwArg04 + 0x00000000:word32];
	word32 edx_17;
	*edxOut = Mem13[ecx_15 - 0x00000004:word32];
	return Mem13[ecx_15 - 0x00000008:word32];
}

word32 fn004210C0(word32 dwArg04, ptr32 axOut)
{
	Mem13[dwArg04 + 0x00000000:word32] = Mem0[dwArg04 + 0x00000000:word32] + 0x00000004;
	word32 ecx_15 = Mem13[dwArg04 + 0x00000000:word32];
	word16 ax_16;
	*axOut = Mem13[ecx_15 - 0x00000004:word16];
	return ecx_15;
}

word32 fn00421290(word32 edi, selector fs, word32 dwArg04, ptr32 ediOut)
{
	word32 ebp_31 = fp - 0x00000004;
	if (GetLocaleInfoA(dwArg04, 0x00001004, fp - 0x00000014, 0x00000006) == 0x00000000)
		;
	else
	{
		Mem48[fp - 0x00000018:word32] = fp - 0x00000014;
		word32 eax_51 = fn0041157D(edi, fs, out ebp_31, out edi);
		Mem55[ebp_31 - 0x00000004:word32] = eax_51;
	}
	word32 ecx_35;
	word32 edi_36;
	return fn00411087(Mem0[ebp_31 - 0x00000008:word32], edi, fs, out ecx_35, out edi_36);
}

void fn00421650(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	if (dwArg04 <u Mem0[0x0042AF94:word32] && ((int32) (0x0042AFE0[(dwArg04 >> 0x00000005) * 0x00000004] + 0x00000004)[(dwArg04 & 0x0000001F) * 0x08] & 0x00000001) != 0x00000000)
	{
		word32 edx_63;
		word32 eax_64 = fn00411375(dwArg04, out edx_63);
		if (eax_64 == 0xFFFFFFFF)
			Mem69[0x0042962C:word32] = 0x00000009;
		else
		{
			word32 dwLoc10_122;
			if (SetFilePointer(eax_64, dwArg08, 0x00000000, dwArg0C) == 0xFFFFFFFF)
				dwLoc10_122 = GetLastError();
			else
				dwLoc10_122 = 0x00000000;
			if (dwLoc10_122 != 0x00000000)
			{
				word32 edx_98;
				fn00411113(dwLoc10_122, out edx_98);
			}
			else
				(0x0042AFE0[(dwArg04 >> 0x00000005) * 0x00000004] + 0x00000004)[(dwArg04 & 0x0000001F) * 0x08] = (byte) ((int32) (0x0042AFE0[(dwArg04 >> 0x00000005) * 0x00000004] + 0x00000004)[(dwArg04 & 0x0000001F) * 0x08] & 0xFFFFFFFD);
		}
	}
	else
	{
		Mem37[0x0042962C:word32] = 0x00000009;
		Mem38[0x00429630:word32] = 0x00000000;
	}
	return;
}

word32 fn00421780(word32 edi, selector fs, word32 dwArg04, word32 dwArg08, word32 dwArg0C, ptr32 ediOut)
{
	word32 eax_8 = Mem0[0x00428EB0:word32];
	if (dwArg04 <u Mem0[0x0042AF94:word32] && ((int32) (0x0042AFE0[(dwArg04 >> 0x00000005) * 0x00000004] + 0x00000004)[(dwArg04 & 0x0000001F) * 0x08] & 0x00000001) != 0x00000000)
	{
		word32 dwLoc041C_120 = 0x00000000;
		if (dwArg0C == 0x00000000)
			;
		else
		{
			word32 edx_92 = 0x0042AFE0[(dwArg04 >> 0x00000005) * 0x00000004];
			if (((int32) (edx_92 + 0x00000004)[(dwArg04 & 0x0000001F) * 0x08] & 0x00000020) != 0x00000000)
				fn004112FD(edx_92, dwArg04, 0x00000000, 0x00000000, 0x00000002);
			word32 dwLoc0420_115;
			if (((int32) (0x0042AFE0[(dwArg04 >> 0x00000005) * 0x00000004] + 0x00000004)[(dwArg04 & 0x0000001F) * 0x08] & 0x00000080) != 0x00000000)
			{
				word32 dwLoc0418_190 = dwArg08;
				dwLoc0420_115 = 0x00000000;
				while (dwLoc0418_190 - dwArg08 <u dwArg0C)
				{
					word32 dwLoc0428_236 = fp + 0xFFFFFBEC;
					while (dwLoc0428_236 - (fp + 0xFFFFFBEC) < 0x00000400 && dwLoc0418_190 - dwArg08 <u dwArg0C)
					{
						byte cl_294 = Mem0[dwLoc0418_190 + 0x00000000:byte];
						dwLoc0418_190 = dwLoc0418_190 + 0x00000001;
						if ((int32) cl_294 == 0x0000000A)
						{
							Mem316[dwLoc0428_236 + 0x00000000:byte] = 0x0D;
							dwLoc0428_236 = dwLoc0428_236 + 0x00000001;
						}
						Mem307[dwLoc0428_236 + 0x00000000:byte] = cl_294;
						dwLoc0428_236 = dwLoc0428_236 + 0x00000001;
					}
					if (WriteFile(0x0042AFE0[(dwArg04 >> 0x00000005) * 0x00000004][(dwArg04 & 0x0000001F) * 0x00000008], fp + 0xFFFFFBEC, dwLoc0428_236 - (fp + 0xFFFFFBEC), fp + 0xFFFFFBDC, 0x00000000) == 0x00000000)
					{
						Mem288[fp + 0xFFFFFBE0:word32] = GetLastError();
						goto l00421994;
					}
					dwLoc041C_120 = dwLoc041C_120 + dwLoc0424;
					if (dwLoc0424 < dwLoc0428_236 - (fp + 0xFFFFFBEC))
						goto l00421994;
				}
l00421994:
			}
			else
			{
				Mem322[fp - 0x00000434:word32] = 0x00000000;
				Mem325[fp - 0x00000438:word32] = fp + 0xFFFFFBDC;
				Mem328[fp - 0x0000043C:word32] = dwArg0C;
				if (WriteFile(0x0042AFE0[(dwArg04 >> 0x00000005) * 0x00000004][(dwArg04 & 0x0000001F) * 0x00000008], dwArg08, 0x00000000, 0x00000000, 0x00000002) != 0x00000000)
				{
					Mem347[fp + 0xFFFFFBE4:word32] = dwLoc0424;
					dwLoc0420_115 = 0x00000000;
				}
				else
					dwLoc0420_115 = GetLastError();
			}
			if (dwLoc041C_120 != 0x00000000)
				;
			else if (dwLoc0420_115 == 0x00000000)
				if (((int32) (0x0042AFE0[(dwArg04 >> 0x00000005) * 0x00000004] + 0x00000004)[(dwArg04 & 0x0000001F) * 0x08] & 0x00000040) != 0x00000000 && (int32) Mem0[dwArg08 + 0x00000000:byte] == 0x0000001A)
					;
				else
				{
					Mem173[0x0042962C:word32] = 0x0000001C;
					Mem174[0x00429630:word32] = 0x00000000;
				}
			else if (dwLoc0420_115 == 0x00000005)
			{
				Mem149[0x0042962C:word32] = 0x00000009;
				Mem151[0x00429630:word32] = dwLoc0420_115;
			}
			else
			{
				word32 edx_155;
				fn00411113(dwLoc0420_115, out edx_155);
			}
		}
	}
	else
	{
		Mem50[0x0042962C:word32] = 0x00000009;
		Mem51[0x00429630:word32] = 0x00000000;
	}
	word32 ecx_39;
	word32 edi_40;
	return fn00411087(eax_8, edi, fs, out ecx_39, out edi_40);
}

word32 fn00421B60(word32 edi, selector fs, word32 dwArg04)
{
	word32 ebp_24 = fp - 0x00000004;
	word32 esp_101 = fp - 0x00000008;
	if (dwArg04 == 0x00000000)
	{
		esp_101 = fp - 0x00000008;
		word32 ecx_97;
		if (fn0041119F(fp - 0x00000004, edi, fs, out ecx_97, out ebp_24, out edi) == 0x00000001)
			int3();
	}
	Mem30[0x00429930:word32] = Mem0[0x00429930:word32] + 0x00000001;
	Mem32[ebp_24 - 0x00000004:word32] = Mem30[ebp_24 + 0x00000008:word32];
	word32 esp_33 = esp_101 - 0x00000004;
	Mem34[esp_33 + 0x00000000:word32] = 0x0000003A;
	Mem36[esp_33 - 0x00000004:word32] = 0x004274A8;
	Mem38[esp_33 - 0x00000008:word32] = 0x00000002;
	Mem40[esp_33 - 0x0000000C:word32] = 0x00001000;
	word32 ebp_42;
	word32 edi_43;
	word32 eax_44 = fn00411064(edi, fs, out ebp_42, out edi_43);
	Mem48[Mem40[ebp_42 - 0x00000004:word32] + 0x00000008:word32] = eax_44;
	if (Mem48[Mem48[ebp_42 - 0x00000004:word32] + 0x00000008:word32] != 0x00000000)
	{
		Mem70[Mem48[ebp_42 - 0x00000004:word32] + 0x0000000C:word32] = Mem48[Mem48[ebp_42 - 0x00000004:word32] + 0x0000000C:word32] | 0x00000008;
		Mem72[Mem70[ebp_42 - 0x00000004:word32] + 0x00000018:word32] = 0x00001000;
	}
	else
	{
		Mem77[Mem48[ebp_42 - 0x00000004:word32] + 0x0000000C:word32] = Mem48[Mem48[ebp_42 - 0x00000004:word32] + 0x0000000C:word32] | 0x00000004;
		Mem82[Mem77[ebp_42 - 0x00000004:word32] + 0x00000008:word32] = Mem77[ebp_42 - 0x00000004:word32] + 0x00000014;
		Mem84[Mem82[ebp_42 - 0x00000004:word32] + 0x00000018:word32] = 0x00000002;
	}
	Mem58[Mem48[ebp_42 - 0x00000004:word32]:word32] = Mem48[Mem48[ebp_42 - 0x00000004:word32] + 0x00000008:word32];
	Mem60[Mem58[ebp_42 - 0x00000004:word32] + 0x00000004:word32] = 0x00000000;
	return edi_43;
}

word32 fn00421C50(word32 dwArg04)
{
	word32 eax_13;
	if (dwArg04 >=u Mem0[0x0042AF94:word32])
		eax_13 = 0x00000000;
	else
		eax_13 = (int32) (0x0042AFE0[(dwArg04 >> 0x00000005) * 0x00000004] + 0x00000004)[(dwArg04 & 0x0000001F) * 0x08] & 0x00000040;
	return eax_13;
}

word32 fn00421E40(word32 dwArg04, word16 wArg08)
{
	esp = fp;
	esp = fp - 0x00000004;
	dwLoc04 = ebp;
	ebp = fp - 0x00000004;
	esp = fp - 0x0000000C;
	SCZO = cond(dwArg04 - 0x00000000);
	Z = SCZO;
	if (Test(EQ,Z))
	{
		eax = 0x00000000;
		SZO = cond(0x00000000);
		C = false;
	}
	else
	{
		SCZO = cond(Mem0[0x00429904:word32] - 0x00000000);
		Z = SCZO;
		if (Test(EQ,Z))
		{
			eax = (word32) wArg08;
			SCZO = cond(eax - 0x000000FF);
			SZO = SCZO;
			if (Test(GT,SZO))
			{
				Mem0[0x0042962C:word32] = 0x0000002A;
				eax = eax | 0xFFFFFFFF;
				SZO = cond(eax);
				C = false;
			}
			else
			{
				ecx = dwArg04;
				dl = bArg08;
				Mem0[ecx + 0x00000000:byte] = dl;
				eax = 0x00000001;
			}
		}
		else
		{
			dwLoc08 = 0x00000000;
			eax = fp - 0x00000008;
			esp = fp - 0x00000010;
			dwLoc10 = fp - 0x00000008;
			esp = fp - 0x00000014;
			dwLoc14 = 0x00000000;
			ecx = Mem0[0x00428EC4:word32];
			esp = fp - 0x00000018;
			dwLoc18 = ecx;
			edx = dwArg04;
			esp = fp - 0x0000001C;
			dwLoc1C = edx;
			esp = fp - 0x00000020;
			dwLoc20 = 0x00000001;
			eax = fp + 0x00000008;
			esp = fp - 0x00000024;
			dwLoc24 = fp + 0x00000008;
			esp = fp - 0x00000028;
			dwLoc28 = 0x00000000;
			ecx = Mem0[0x00429914:word32];
			esp = fp - 0x0000002C;
			dwLoc2C = ecx;
			eax = WideCharToMultiByte(dwLoc2C, dwLoc28, dwLoc24, dwLoc20, dwLoc1C, dwLoc18, dwLoc14, dwLoc10);
			esp = fp - 0x0000000C;
			dwLoc0C = eax;
			SCZO = cond(dwLoc0C - 0x00000000);
			Z = SCZO;
			if (Test(NE,Z))
			{
				SCZO = cond(0x00000000);
				Z = SCZO;
				if (Test(NE,Z))
				{
l00421EC1:
					Mem0[0x0042962C:word32] = 0x0000002A;
					eax = eax | 0xFFFFFFFF;
					SZO = cond(eax);
					C = false;
				}
				else
					eax = dwLoc0C;
			}
			else
				goto l00421EC1;
		}
	}
	esp = fp - 0x00000004;
	ebp = dwLoc04;
	esp = fp;
	return eax;
}

word32 fn00421F00(word32 edi, selector fs, ptr32 ediOut)
{
	word32 ebp_11 = fp - 0x00000004;
	word32 esp_12 = fp - 0x00000014;
	word32 esp_18 = esp_12 - 0x00000004;
	Mem19[esp_18 + 0x00000000:word32] = (word32) Mem0[Mem0[ebp_11 + 0x00000008:word32]:byte];
	esp_12 = esp_18;
	while (fn00411118(edi, fs, out ebp_11, out edi) != 0x00000000)
	{
		Mem32[ebp_11 + 0x00000008:word32] = Mem19[ebp_11 + 0x00000008:word32] + 0x00000001;
		esp_18 = esp_12 - 0x00000004;
		Mem19[esp_18 + 0x00000000:word32] = (word32) Mem0[Mem0[ebp_11 + 0x00000008:word32]:byte];
		esp_12 = esp_18;
	}
	Mem35[ebp_11 - 0x0000000C:word32] = (word32) Mem19[Mem19[ebp_11 + 0x00000008:word32]:byte];
	Mem38[ebp_11 + 0x00000008:word32] = Mem35[ebp_11 + 0x00000008:word32] + 0x00000001;
	Mem40[ebp_11 - 0x00000004:word32] = Mem38[ebp_11 - 0x0000000C:word32];
	if (Mem40[ebp_11 - 0x0000000C:word32] == 0x0000002D || Mem40[ebp_11 - 0x0000000C:word32] == 0x0000002B)
	{
		Mem99[ebp_11 - 0x0000000C:word32] = (word32) Mem40[Mem40[ebp_11 + 0x00000008:word32]:byte];
		Mem103[ebp_11 + 0x00000008:word32] = Mem99[ebp_11 + 0x00000008:word32] + 0x00000001;
	}
	Mem48[ebp_11 - 0x00000008:word32] = 0x00000000;
	while (true)
	{
		if (Mem48[ebp_11 - 0x0000000C:word32] >= 0x00000030 && Mem48[ebp_11 - 0x0000000C:word32] <= 0x00000039)
			Mem95[ebp_11 - 0x00000010:word32] = Mem48[ebp_11 - 0x0000000C:word32] - 0x00000030;
		else
			Mem89[ebp_11 - 0x00000010:word32] = 0xFFFFFFFF;
		Mem59[ebp_11 - 0x0000000C:word32] = Mem48[ebp_11 - 0x00000010:word32];
		if (Mem59[ebp_11 - 0x0000000C:word32] == 0xFFFFFFFF)
		{
			word32 eax_76;
			if (Mem59[ebp_11 - 0x00000004:word32] == 0x0000002D)
				eax_76 = -Mem59[ebp_11 - 0x00000008:word32];
			else
				eax_76 = Mem59[ebp_11 - 0x00000008:word32];
			return eax_76;
		}
		Mem65[ebp_11 - 0x00000008:word32] = Mem59[ebp_11 - 0x00000008:word32] *s 0x0000000A + Mem59[ebp_11 - 0x0000000C:word32];
		Mem68[ebp_11 - 0x0000000C:word32] = (word32) Mem65[Mem65[ebp_11 + 0x00000008:word32]:byte];
		Mem72[ebp_11 + 0x00000008:word32] = Mem68[ebp_11 + 0x00000008:word32] + 0x00000001;
	}
}

word32 fn00422BD0(word32 edi, selector fs, word32 dwArg04, ptr32 ediOut)
{
	*ediOut = edi;
	word32 eax_101;
	if (dwArg04 <=u 0x000000FF)
	{
		word32 ebp_121;
		if (Mem0[0x00428EC4:word32] > 0x00000001)
		{
			word32 edi_140;
			word32 eax_141 = fn0041124E(edi, fs, out ebp_121, out edi_140);
			Mem144[ebp_121 - 0x00000010:word32] = eax_141;
		}
		else
		{
			word32 edi_152;
			word32 eax_153 = fn004110C8(edi, fs, out ebp_121, out edi_152);
			Mem157[ebp_121 - 0x00000010:word32] = eax_153;
		}
		eax_101 = Mem0[ebp_121 - 0x00000010:word32];
	}
	else if (Mem0[0x0042AD2C:word32] == 0x00000000)
		eax_101 = 0x00000000;
	else if (fn004113C0(fp - 0x00000004, edi, fs, fp - 0x0000000C, 0x00000002, Mem0[0x0042AE44:word32], Mem0[0x0042ACB4:word32], 0x00000001) == 0x00000000)
		eax_101 = 0x00000000;
	else
	{
		if ((word32) Mem0[fp - 0x00000006:word16] == 0x00000000 && ((word32) Mem0[fp - 0x00000008:word16] & 0x00000008) != 0x00000000)
			Mem113[fp - 0x00000010:word32] = 0x00000001;
		else
			Mem107[fp - 0x00000010:word32] = 0x00000000;
		eax_101 = Mem0[fp - 0x00000010:word32];
	}
	return eax_101;
}

