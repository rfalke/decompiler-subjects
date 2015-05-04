// subject.c
// Generated on 5/4/2015 12:02:13 AM by decompiling from_boomerang/hello_cpp/ia32_pe_by_boomerang_release/subject.exe
// using Decompiler version 0.4.2.0.

#include "subject.h"

word32 fn00401000(word32 ebx, word32 ebp, word32 dwArg04, word32 dwArg10, ptr32 ebpOut)
{
	*ebpOut = ebp;
	LoadStringA(dwArg04, 0x00000067, 0x004054F4, 0x00000064);
	LoadStringA(dwArg04, 0x0000006D, 0x00405490, 0x00000064);
	fn004010C0(dwArg04);
	word32 eax_41 = fn00401150(dwArg04, dwArg10);
	if (eax_41 == 0x00000000)
		return eax_41;
	else
	{
		word32 esi_121 = LoadAcceleratorsA(dwArg04, 0x0000006D);
		word32 edi_120 = GetMessageA;
		word32 esp_102 = fp - 0x00000024;
		if (GetMessageA(fp - 0x0000001C, 0x00000000, 0x00000000, 0x00000000) != 0x00000000)
		{
			Mem112[fp - 0x00000028:word32] = ebx;
			Mem115[fp - 0x0000002C:word32] = ebp;
			word32 esp_114 = fp - 0x0000002C;
			do
			{
				word32 eax_124 = Mem115[esp_114 + 0x00000010:word32];
				word32 edx_125 = esp_114 + 0x00000010;
				word32 esp_126 = esp_114 - 0x00000004;
				Mem127[esp_126 + 0x00000000:word32] = edx_125;
				Mem129[esp_126 - 0x00000004:word32] = esi_121;
				Mem131[esp_126 - 0x00000008:word32] = eax_124;
				word32 esp_133 = esp_126 + 0x00000004;
				if (TranslateAcceleratorA(Mem131[esp_126 - 0x00000008:HWND], Mem131[esp_126 - 4:HACCEL], Mem131[esp_126 + 0x00000000:LPMSG]) == 0x00000000)
				{
					Mem156[esp_126 + 0x00000000:word32] = esp_126 + 0x00000014;
					TranslateMessage(Mem156[esp_126 + 0x00000000:(ptr MSG)]);
					Mem161[esp_126 + 0x00000000:word32] = esp_126 + 0x00000014;
					DispatchMessageA(Mem161[esp_126 + 0x00000000:(ptr MSG)]);
					esp_133 = esp_126 + 0x00000004;
				}
				word32 esp_138 = esp_133 - 0x00000004;
				Mem139[esp_138 + 0x00000000:word32] = 0x00000000;
				Mem141[esp_138 - 0x00000004:word32] = 0x00000000;
				Mem144[esp_138 - 0x00000008:word32] = 0x00000000;
				Mem146[esp_138 - 0x0000000C:word32] = esp_138 + 0x00000014;
				esp_114 = esp_138 - 0x0000000C;
				edi_120();
			} while (esp_138 != 0x00000014);
			word32 ebp_150;
			*ebpOut = Mem146[esp_138 - 0x0000000C:word32];
			esp_102 = esp_138 - 0x00000004;
		}
		return Mem0[esp_102 + 0x00000010:word32];
	}
}

void fn004010C0(word32 dwArg04)
{
	LoadIconA(dwArg04, 0x0000006B);
	LoadCursorA(0x00000000, 0x00007F00);
	LoadIconA(dwArg04, 0x0000006C);
	RegisterClassExA(fp - 0x00000030);
	return;
}

word32 fn00401150(word32 dwArg04, word32 dwArg08)
{
	Mem31[0x00405558:word32] = dwArg04;
	word32 eax_32 = CreateWindowExA(0x00000000, 0x00405490, 0x004054F4, 0x00CF0000, 0x80000000, 0x00000000, 0x80000000, 0x00000000, 0x00000000, 0x00000000, dwArg04, 0x00000000);
	if (eax_32 == 0x00000000)
		return eax_32;
	else
	{
		Mem47[fp - 0x00000008:word32] = dwArg08;
		ShowWindow(eax_32, 0x00000000);
		Mem53[fp - 0x00000008:word32] = eax_32;
		UpdateWindow(0x00000000);
		return 0x00000001;
	}
}

void fn00401350(word32 ebx, word32 ebp, word32 edi, selector fs)
{
	Mem17[fs:0x00000000:word32] = fp - 0x00000014;
	word32 eax_29 = GetVersion();
	word32 edx_33 = (word32) SLICE(eax_29, byte, 8);
	Mem34[0x00405580:word32] = edx_33;
	Mem37[0x0040557C:word32] = eax_29 & 0x000000FF;
	Mem40[0x00405578:word32] = ((eax_29 & 0x000000FF) << 0x00000008) + edx_33;
	Mem42[0x00405574:word32] = eax_29 >>u 0x00000010;
	word32 esi_121 = 0x00000000;
	word32 ecx_124 = 0x00000000;
	word32 esp_125 = fp - 0x00000078;
	if (fn00401D50(0x00000000) == 0x00000000)
	{
		Mem119[fp - 0x0000007C:word32] = 0x0000001C;
		ebx = fn0040146B(fp - 0x00000004, edi, dwLoc80, out esi_121, out edi);
		ecx_124 = 0x00000000;
		esp_125 = fp - 0x00000078;
	}
	word32 eax_111;
	Mem59[fp - 0x00000008:word32] = esi_121;
	fn00401BA5(fp - 0x00000004, edi);
	Mem61[0x00405A78:word32] = GetCommandLineA();
	Mem63[0x0040555C:word32] = fn00401A73(ebx);
	fn0040176D(fn00401826(ecx_124, fs), ebx, fp - 0x00000004, fs);
	fn0040148F();
	Mem65[fp - 0x00000034:word32] = esi_121;
	word32 esp_67 = esp_125 - 0x00000004;
	Mem68[esp_67 + 0x00000000:word32] = fp - 0x00000060;
	GetStartupInfoA(Mem68[esp_67 + 0x00000000:LPSTARTUPINFOA]);
	Mem71[fp - 0x00000068:word32] = fn00401715(fs);
	word32 esp_117 = esp_67 + 0x00000004;
	if ((Mem71[fp - 0x00000034:byte] & 0x01) != 0x00)
		eax_111 = (word32) Mem71[fp - 0x00000030:word16];
	else
	{
		Mem114[esp_67 + 0x00000000:word32] = 0x0000000A;
		eax_111 = Mem114[esp_67 + 0x00000000:word32];
		esp_117 = esp_67 + 0x00000004;
	}
	word32 esp_78 = esp_117 - 0x00000004;
	Mem79[esp_78 + 0x00000000:word32] = eax_111;
	Mem81[esp_78 - 0x00000004:word32] = Mem79[fp - 0x00000068:word32];
	Mem83[esp_78 - 0x00000008:word32] = esi_121;
	Mem85[esp_78 - 0x0000000C:word32] = esi_121;
	Mem89[esp_78 - 0x0000000C:word32] = GetModuleHandleA(Mem85[esp_78 - 0x0000000C:LPCSTR]);
	word32 ebp_92;
	word32 eax_93 = fn00401000(ebx, fp - 0x00000004, dwArg00, dwArg0C, out ebp_92);
	Mem95[ebp_92 - 0x00000060:word32] = eax_93;
	Mem97[esp_78 + 0x00000000:word32] = eax_93;
	fn004014BC(ebp);
	word32 eax_98 = Mem97[ebp_92 - 0x00000014:word32];
	word32 ecx_100 = Mem97[Mem97[eax_98 + 0x00000000:word32]:word32];
	Mem101[ebp_92 - 0x00000068:word32] = ecx_100;
	Mem103[esp_78 - 0x00000004:word32] = eax_98;
	Mem105[esp_78 - 0x00000008:word32] = ecx_100;
	fn00401591(dwArg00, dwArg04);
	return;
}

word32 fn00401446(word32 ebp, word32 edi, word32 dwArg00, ptr32 ebxOut, ptr32 esiOut, ptr32 ediOut)
{
	*esiOut = esi;
	if (Mem0[0x00405564:word32] == 0x00000001)
		edi = fn00401F5C(ebp, edi);
	word32 ebx_11;
	word32 edi_12;
	word32 eax_13 = fn00401F95(ebp, edi, dwArg00, out ebx_11, out edi_12);
	Mem0[0x00405030:word32]();
	return eax_13;
}

word32 fn0040146B(word32 ebp, word32 edi, word32 dwArg00, ptr32 esiOut, ptr32 ediOut)
{
	*esiOut = esi;
	if (Mem0[0x00405564:word32] == 0x00000001)
		edi = fn00401F5C(ebp, edi);
	word32 ebx_11;
	word32 edi_12;
	fn00401F95(ebp, edi, dwArg00, out ebx_11, out edi_12);
	ExitProcess(0x000000FF);
	return ebx_11;
}

void fn0040148F()
{
	word32 eax_3 = Mem0[0x00405A74:word32];
	if (eax_3 != 0x00000000)
		eax_3();
	fn00401577(0x00405008, 0x00405010);
	fn00401577(0x00405000, 0x00405004);
	return;
}

void fn004014BC(word32 dwArg00)
{
	fn004014DE(dwLoc10, 0x00000000, 0x00000000);
	return;
}

void fn004014DE(word32 dwArg00, word32 dwArg08, word32 dwArg0C)
{
	if (Mem0[0x004055B0:word32] == 0x00000001)
	{
		Mem119[fp - 0x00000008:word32] = dwArg00;
		TerminateProcess(GetCurrentProcess(), 0x00000001);
	}
	Mem25[0x004055AC:word32] = 0x00000001;
	Mem26[0x004055A8:byte] = (byte) dwArg0C;
	word32 ebx_112 = dwArg0C;
	if (dwArg08 == 0x00000000)
	{
		word32 eax_57 = Mem26[0x00405A70:word32];
		if (eax_57 != 0x00000000)
		{
			word32 ecx_78 = Mem26[0x00405A6C:word32];
			word32 esi_108 = ecx_78 - 0x00000004;
			if (ecx_78 - 0x00000004 >=u eax_57)
				do
				{
					word32 eax_102 = Mem26[esi_108 + 0x00000000:word32];
					if (eax_102 != 0x00000000)
						eax_102();
					esi_108 = esi_108 - 0x00000004;
				} while (esi_108 >=u Mem26[0x00405A70:word32]);
		}
		fn00401577(0x00405014, 0x00405018);
		dwLoc10 = 0x00405014;
	}
	Mem39[fp - 0x00000010:word32] = 0x0040501C;
	fn00401577(dwLoc10, 0x00405020);
	if (ebx_112 == 0x00000000)
	{
		Mem55[0x004055B0:word32] = 0x00000001;
		ExitProcess(dwArg00);
	}
	return;
}

void fn00401577(word32 dwArg04, word32 dwArg08)
{
	word32 esi_14 = dwArg04;
	while (esi_14 <u dwArg08)
	{
		word32 eax_19 = Mem0[esi_14 + 0x00000000:word32];
		if (eax_19 != 0x00000000)
			eax_19();
		esi_14 = esi_14 + 0x00000004;
	}
	return;
}

void fn00401591(word32 dwArg04, word32 dwArg08)
{
	word32 eax_12 = fn004016D2(dwArg04);
	if (eax_12 != 0x00000000)
	{
		word32 ebx_51 = Mem0[eax_12 + 0x00000008:word32];
		if (ebx_51 == 0x00000000)
		{
l004016C6:
			UnhandledExceptionFilter(dwArg08);
		}
		else if (ebx_51 == 0x00000005)
			Mem58[eax_12 + 0x00000008:word32] = Mem0[eax_12 + 0x00000008:word32] & 0x00000000;
		else if (ebx_51 != 0x00000001)
		{
			word32 ecx_84 = Mem0[0x004055B4:word32];
			Mem87[0x004055B4:word32] = dwArg08;
			word32 ecx_88 = Mem87[eax_12 + 0x00000004:word32];
			if (ecx_88 == 0x00000008)
			{
				word32 ecx_107 = Mem87[0x004050B0:word32];
				word32 edx_109 = Mem87[0x004050B4:word32] + ecx_107;
				if (ecx_107 < edx_109)
				{
					word32 edx_154 = edx_109 - ecx_107;
					word32 esi_156 = ecx_107 * 0x00000003 * 0x00000004 + 0x00405040;
					do
					{
						Mem160[esi_156 + 0x00000000:word32] = Mem87[esi_156 + 0x00000000:word32] & 0x00000000;
						esi_156 = esi_156 + 0x0000000C;
						edx_154 = edx_154 - 0x00000001;
					} while (edx_154 != 0x00000000);
				}
				word32 eax_116 = Mem87[eax_12 + 0x00000000:word32];
				word32 esi_117 = Mem87[0x004050BC:word32];
				if (eax_116 == 0xC000008E)
					Mem134[0x004050BC:word32] = 0x00000083;
				else if (eax_116 == 0xC0000090)
					Mem137[0x004050BC:word32] = 0x00000081;
				else if (eax_116 == 0xC0000091)
					Mem140[0x004050BC:word32] = 0x00000084;
				else if (eax_116 == 0xC0000093)
					Mem143[0x004050BC:word32] = 0x00000085;
				else if (eax_116 == 0xC000008D)
					Mem146[0x004050BC:word32] = 0x00000082;
				else if (eax_116 == 0xC000008F)
					Mem149[0x004050BC:word32] = 0x00000086;
				else if (eax_116 == 0xC0000092)
					Mem152[0x004050BC:word32] = 0x0000008A;
				ebx_51();
				Mem129[0x004050BC:word32] = esi_117;
			}
			else
			{
				word32 v16_167 = Mem87[eax_12 + 0x00000008:word32] & 0x00000000;
				Mem168[eax_12 + 0x00000008:word32] = v16_167;
				ebx_51();
			}
			Mem106[0x004055B4:word32] = ecx_84;
		}
	}
	else
		goto l004016C6;
	return;
}

word32 fn004016D2(word32 dwArg04)
{
	word32 ecx_5 = Mem0[0x004050B8:word32];
	word32 eax_11 = 0x00405038;
	if (Mem0[0x00405038:word32] != dwArg04)
	{
		word32 esi_34 = ecx_5 * 0x00000003 * 0x00000004 + 0x00405038;
		do
			eax_11 = eax_11 + 0x0000000C;
		while (eax_11 >=u esi_34 || Mem0[eax_11 + 0x00000000:word32] == dwArg04);
	}
	if (eax_11 >=u (ecx_5 * 0x00000003) * 0x00000004 + 0x00405038 || Mem0[eax_11 + 0x00000000:word32] != dwArg04)
		eax_11 = 0x00000000;
	return eax_11;
}

word32 fn00401715(selector fs)
{
	if (Mem0[0x00405A68:word32] == 0x00000000)
		fn004024EE(fs);
	word32 esi_10 = Mem0[0x00405A78:word32];
	byte al_11 = Mem0[esi_10 + 0x00000000:byte];
	if (al_11 == 0x22)
	{
l00401730:
		byte al_58 = Mem0[esi_10 + 0x00000001:byte];
		esi_10 = esi_10 + 0x00000001;
		while (al_58 != 0x22 && al_58 != 0x00)
		{
			if (fn004020E8(dwLoc0C) == 0x00000000)
				continue;
			esi_10 = esi_10 + 0x00000001;
			al_58 = Mem0[esi_10 + 0x00000001:byte];
			esi_10 = esi_10 + 0x00000001;
		}
		if (Mem0[esi_10 + 0x00000000:byte] == 0x22)
		{
l00401752:
			esi_10 = esi_10 + 0x00000001;
l0040175F:
			byte al_26 = Mem0[esi_10 + 0x00000000:byte];
			if (al_26 != 0x00 && al_26 <=u 0x20)
				goto l00401752;
		}
		else
			goto l0040175F;
	}
	else if (al_11 >u 0x20)
		do
			esi_10 = esi_10 + 0x00000001;
		while (Mem0[esi_10 + 0x00000000:byte] >u 0x20);
	return esi_10;
}

void fn0040176D(word32 eax, word32 ebx, word32 ebp, selector fs)
{
	word32 ebx_113 = 0x00000000;
	if (Mem0[0x00405A68:word32] == 0x00000000)
		eax = fn004024EE(fs);
	word32 esi_20 = Mem0[0x0040555C:word32];
	word32 edi_21 = 0x00000000;
	byte al_33 = Mem0[esi_20 + 0x00000000:byte];
	word32 eax_34 = DPB(eax, al_33, 0, 8);
	while (al_33 != 0x00)
	{
		if (al_33 != 0x3D)
			edi_21 = edi_21 + 0x00000001;
		eax = fn004026B0(eax_34, esi_20);
		esi_20 = esi_20 + 0x00000001 + eax;
		al_33 = Mem0[esi_20 + 0x00000000:byte];
		eax_34 = DPB(eax, al_33, 0, 8);
	}
	word32 eax_100 = fn00402630(dwLoc14);
	Mem61[0x00405590:word32] = eax_100;
	word32 esi_102 = eax_100;
	word32 esp_124 = fp - 0x0000000C;
	if (eax_100 == 0x00000000)
	{
		word32 edi_162;
		eax_100 = fn00401446(ebp, edi_21, dwLoc14, out ebx_113, out esi_102, out edi_162);
		esp_124 = fp - 0x0000000C;
	}
	word32 edi_114 = Mem61[0x0040555C:word32];
	if (Mem61[edi_114 + 0x00000000:byte] != 0x00)
	{
		word32 esp_101 = fp - 0x00000010;
		do
		{
			word32 esp_103 = esp_101 - 0x00000004;
			Mem104[esp_103 + 0x00000000:word32] = edi_114;
			word32 eax_105 = fn004026B0(eax_100, dwArg00);
			esp_101 = esp_103 + 0x00000004;
			eax_100 = eax_105;
			if (Mem104[edi_114 + 0x00000000:byte] != 0x3D)
			{
				Mem126[esp_103 + 0x00000000:word32] = eax_105 + 0x00000001;
				word32 eax_127 = fn00402630(ebx);
				Mem132[esi_102 + 0x00000000:word32] = eax_127;
				word32 esp_131 = esp_103 + 0x00000004;
				if (eax_127 == ebx_113)
				{
					Mem151[esp_103 + 0x00000000:word32] = 0x00000009;
					fn00401446(eax_105 + 0x00000001, edi_114, ebx, out ebx_113, out esi_102, out edi_114);
					esp_131 = esp_103 + 0x00000004;
				}
				word32 esp_137 = esp_131 - 0x00000004;
				Mem138[esp_137 + 0x00000000:word32] = edi_114;
				Mem140[esp_137 - 0x00000004:word32] = Mem138[esi_102 + 0x00000000:word32];
				eax_100 = fn00402540(edi_114, dwArg00, out edi_114);
				esi_102 = esi_102 + 0x00000004;
				esp_101 = esp_137 + 0x00000004;
			}
			edi_114 = edi_114 + (eax_105 + 0x00000001);
		} while (Mem104[edi_114 + 0x00000000:byte] != 0x00);
		esp_124 = esp_101 + 0x00000004;
	}
	Mem82[esp_124 - 0x00000004:word32] = Mem61[0x0040555C:word32];
	word32 ebx_84 = fn0040250A(dwArg00);
	Mem87[0x0040555C:word32] = ebx_84;
	Mem88[esi_102 + 0x00000000:word32] = ebx_84;
	Mem93[0x00405A64:word32] = 0x00000001;
	return;
}

word32 fn00401826(word32 ecx, selector fs)
{
	if (Mem0[0x00405A68:word32] == 0x00000000)
		fn004024EE(fs);
	GetModuleFileNameA(0x00000000, 0x004055B8, 0x00000104);
	word32 eax_34 = Mem0[0x00405A78:word32];
	Mem35[0x004055A0:word32] = 0x004055B8;
	word32 edi_103 = 0x004055B8;
	if (Mem35[eax_34 + 0x00000000:byte] != 0x00)
		edi_103 = eax_34;
	Mem42[fp - 0x0000001C:word32] = fp - 0x0000000C;
	Mem45[fp - 0x00000020:word32] = fp - 0x00000008;
	Mem47[fp - 0x00000024:word32] = 0x00000000;
	fn004018BF(edi_103, 0x00000000, 0x00000000, 0x004055B8, 0x00000104);
	word32 eax_58 = fn00402630(dwLoc34);
	word32 esi_59 = eax_58;
	if (eax_58 == 0x00000000)
	{
		word32 ebx_97;
		fn00401446(fp - 0x00000004, edi_103, 0x004055B8, out ebx_97, out esi_59, out edi_103);
	}
	Mem75[fp - 0x00000024:word32] = esi_59 + ecx * 0x00000004;
	Mem77[fp - 0x00000028:word32] = esi_59;
	fn004018BF(edi_103, 0x00000000, 0x00000000, fp - 0x00000008, fp - 0x0000000C);
	Mem85[0x00405588:word32] = esi_59;
	Mem90[0x00405584:word32] = ecx - 0x00000001;
	return ecx - 0x00000001;
}

void fn004018BF(word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, word32 dwArg14)
{
	Mem18[dwArg14 + 0x00000000:word32] = Mem0[dwArg14 + 0x00000000:word32] & 0x00000000;
	Mem27[dwArg10 + 0x00000000:word32] = 0x00000001;
	word32 esi_122 = dwArg0C;
	word32 edi_109 = dwArg08;
	word32 eax_119 = dwArg04 + 0x00000001;
	if (dwArg08 != 0x00000000)
	{
		Mem407[dwArg08 + 0x00000000:word32] = dwArg0C;
		edi_109 = dwArg08 + 0x00000004;
		dwArg08 = dwArg08 + 0x00000004;
	}
	if (Mem27[dwArg04 + 0x00000000:byte] == 0x22)
	{
l004018EE:
		byte dl_290 = Mem27[eax_119 + 0x00000001:byte];
		eax_119 = eax_119 + 0x00000001;
		while (dl_290 != 0x22 && dl_290 != 0x00)
		{
			if ((Mem27[(word32) dl_290 + 0x00405841:byte] & 0x04) != 0x00)
			{
				Mem333[dwArg14 + 0x00000000:word32] = Mem27[dwArg14 + 0x00000000:word32] + 0x00000001;
				if (esi_122 != 0x00000000)
				{
					Mem338[esi_122 + 0x00000000:byte] = Mem333[eax_119 + 0x00000000:byte];
					esi_122 = esi_122 + 0x00000001;
					eax_119 = eax_119 + 0x00000001;
				}
			}
			Mem324[dwArg14 + 0x00000000:word32] = Mem27[dwArg14 + 0x00000000:word32] + 0x00000001;
			if (esi_122 == 0x00000000)
				continue;
			Mem329[esi_122 + 0x00000000:byte] = Mem324[eax_119 + 0x00000000:byte];
			esi_122 = esi_122 + 0x00000001;
			dl_290 = Mem27[eax_119 + 0x00000001:byte];
			eax_119 = eax_119 + 0x00000001;
		}
		Mem296[dwArg14 + 0x00000000:word32] = Mem27[dwArg14 + 0x00000000:word32] + 0x00000001;
		if (esi_122 != 0x00000000)
		{
			Mem308[esi_122 + 0x00000000:byte] = Mem296[esi_122 + 0x00000000:byte] & 0x00;
			esi_122 = esi_122 + 0x00000001;
		}
		if (Mem296[eax_119 + 0x00000000:byte] == 0x22)
			eax_119 = eax_119 + 0x00000001;
	}
	else
	{
		do
		{
			Mem350[dwArg14 + 0x00000000:word32] = Mem27[dwArg14 + 0x00000000:word32] + 0x00000001;
			if (esi_122 != 0x00000000)
			{
				Mem404[esi_122 + 0x00000000:byte] = Mem350[eax_119 + 0x00000000:byte];
				esi_122 = esi_122 + 0x00000001;
			}
			byte dl_355 = Mem350[eax_119 + 0x00000000:byte];
			eax_119 = eax_119 + 0x00000000;
			if ((Mem350[(word32) dl_355 + 0x00405841:byte] & 0x04) != 0x00)
			{
				Mem391[dwArg14 + 0x00000000:word32] = Mem350[dwArg14 + 0x00000000:word32] + 0x00000001;
				if (esi_122 != 0x00000000)
				{
					Mem400[esi_122 + 0x00000000:byte] = Mem391[eax_119 + 0x00000000:byte];
					esi_122 = esi_122 + 0x00000001;
				}
				eax_119 = eax_119 + 0x00000001;
			}
			if (dl_355 == 0x20)
				break;
			if (dl_355 == 0x00)
				goto l0040196A;
		} while (dl_355 != 0x09);
		if (dl_355 == 0x00)
		{
l0040196A:
			eax_119 = eax_119 - 0x00000001;
		}
		else if (esi_122 != 0x00000000)
			Mem382[esi_122 - 0x00000001:byte] = Mem350[esi_122 - 0x00000001:byte] & 0x00;
	}
	word32 dwArg14_116 = dwArg14 & 0x00000000;
	while (Mem27[eax_119 + 0x00000000:byte] != 0x00)
	{
		byte dl_93 = Mem27[eax_119 + 0x00000000:byte];
		while (dl_93 == 0x20 || dl_93 == 0x09)
		{
			eax_119 = eax_119 + 0x00000001;
			dl_93 = Mem27[eax_119 + 0x00000000:byte];
		}
		if (Mem27[eax_119 + 0x00000000:byte] == 0x00)
			break;
		if (edi_109 != 0x00000000)
		{
			Mem281[edi_109 + 0x00000000:word32] = esi_122;
			edi_109 = edi_109 + 0x00000004;
			dwArg08 = edi_109;
		}
		Mem113[dwArg10 + 0x00000000:word32] = Mem27[dwArg10 + 0x00000000:word32] + 0x00000001;
		while (true)
		{
			word32 ebx_124 = 0x00000000;
			byte bl_125 = 0x00;
			while (Mem113[eax_119 + 0x00000000:byte] == 0x5C)
			{
				ebx_124 = ebx_124 + 0x00000001;
				eax_119 = eax_119 + 0x00000001;
				bl_125 = (byte) ebx_124;
			}
			if (Mem113[eax_119 + 0x00000000:byte] == 0x22)
			{
				if ((bl_125 & 0x01) == 0x00)
				{
					if (dwArg14_116 != 0x00000000)
					{
						word32 edx_278 = eax_119 + 0x00000001;
						if (Mem113[eax_119 + 0x00000001:byte] == 0x22)
							eax_119 = edx_278;
						else
						{
l004019DB:
							Mem275[fp + 0x00000004:word32] = 0x00000000;
						}
					}
					else
						goto l004019DB;
					edi_109 = dwArg08;
					dwArg14_116 = (word32) (dwArg14_116 == 0x00000000);
				}
				ebx_124 = ebx_124 >>u 0x00000001;
			}
			word32 ebx_147 = ebx_124 - 0x00000001;
			if (ebx_124 != 0x00000000)
			{
				word32 ebx_229 = ebx_147 + 0x00000001;
				do
				{
					if (esi_122 != 0x00000000)
					{
						Mem245[esi_122 + 0x00000000:byte] = 0x5C;
						esi_122 = esi_122 + 0x00000001;
					}
					Mem240[dwArg14 + 0x00000000:word32] = Mem113[dwArg14 + 0x00000000:word32] + 0x00000001;
					ebx_229 = ebx_229 - 0x00000001;
				} while (ebx_229 != 0x00000000);
			}
			byte dl_155 = Mem113[eax_119 + 0x00000000:byte];
			if (dl_155 == 0x00 || dwArg14_116 == 0x00000000 && (dl_155 == 0x20 || dl_155 == 0x09))
			{
				if (esi_122 != 0x00000000)
				{
					Mem170[esi_122 + 0x00000000:byte] = Mem113[esi_122 + 0x00000000:byte] & 0x00;
					esi_122 = esi_122 + 0x00000001;
				}
				Mem167[dwArg14 + 0x00000000:word32] = Mem113[dwArg14 + 0x00000000:word32] + 0x00000001;
			}
			if (0x00000001 != 0x00000000)
			{
				if (esi_122 != 0x00000000)
				{
					if ((Mem113[(word32) dl_155 + 0x00405841:byte] & 0x04) != 0x00)
					{
						Mem211[esi_122 + 0x00000000:byte] = dl_155;
						Mem215[dwArg14 + 0x00000000:word32] = Mem211[dwArg14 + 0x00000000:word32] + 0x00000001;
						esi_122 = esi_122 + 0x00000001;
						eax_119 = eax_119 + 0x00000001;
					}
					Mem208[esi_122 + 0x00000000:byte] = Mem113[eax_119 + 0x00000000:byte];
					esi_122 = esi_122 + 0x00000001;
				}
				else if ((Mem113[(word32) dl_155 + 0x00405841:byte] & 0x04) != 0x00)
				{
					Mem223[dwArg14 + 0x00000000:word32] = Mem113[dwArg14 + 0x00000000:word32] + 0x00000001;
					eax_119 = eax_119 + 0x00000001;
				}
				Mem199[dwArg14 + 0x00000000:word32] = Mem113[dwArg14 + 0x00000000:word32] + 0x00000001;
			}
			eax_119 = eax_119 + 0x00000001;
		}
	}
	if (edi_109 != 0x00000000)
		Mem87[edi_109 + 0x00000000:word32] = Mem27[edi_109 + 0x00000000:word32] & 0x00000000;
	Mem82[dwArg10 + 0x00000000:word32] = Mem27[dwArg10 + 0x00000000:word32] + 0x00000001;
	return;
}

word32 fn00401A73(word32 ebx)
{
	word32 eax_140;
	word32 eax_250 = Mem0[0x004056BC:word32];
	word32 ebp_15 = GetEnvironmentStringsW;
	word32 ebx_134 = 0x00000000;
	word16 bx_23 = 0x0000;
	word32 esi_191 = 0x00000000;
	word32 edi_195 = 0x00000000;
	if (eax_250 == 0x00000000)
	{
		eax_250 = GetEnvironmentStringsW();
		esi_191 = eax_250;
		if (eax_250 != 0x00000000)
		{
			Mem254[0x004056BC:word32] = 0x00000001;
l00401ACA:
			if (esi_191 == 0x00000000)
			{
				ebp_15();
				esi_191 = eax_250;
				if (eax_250 != 0x00000000)
				{
l00401ADA:
					word32 eax_182 = esi_191;
					if (Mem0[esi_191 + 0x00000000:word16] != bx_23)
						do
						{
							word32 eax_183 = eax_182 + 0x00000001;
							eax_182 = eax_183 + 0x00000001;
							if (Mem0[eax_183 + 0x00000001:word16] != bx_23)
								continue;
							eax_182 = eax_183 + 0x00000003;
						} while (Mem0[eax_183 + 0x00000003:word16] != bx_23);
					word32 eax_120 = WideCharToMultiByte(0x00000000, 0x00000000, esi_191, (eax_182 - esi_191 >> 0x00000001) + 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					if (eax_120 != 0x00000000)
					{
						Mem142[fp - 0x0000001C:word32] = eax_120;
						word32 eax_143 = fn00402630(0x00000000);
						word32 dwLoc08_148 = eax_143;
						if (eax_143 != 0x00000000)
						{
							Mem152[fp - 0x00000020:word32] = 0x00000000;
							Mem154[fp - 0x00000024:word32] = eax_120;
							Mem156[fp - 0x00000028:word32] = eax_143;
							Mem162[fp - 0x00000034:word32] = 0x00000000;
							Mem164[fp - 0x00000038:word32] = 0x00000000;
							if (WideCharToMultiByte(0x00000000, 0x00000000, esi_191, eax_143, 0x00000000, 0x00000000, 0x00000000, 0x00000000) == 0x00000000)
							{
								Mem177[fp - 0x0000001C:word32] = ebx;
								dwLoc08_148 = fn0040250A(0x00000000);
							}
							ebx_134 = dwLoc08_148;
						}
					}
					FreeEnvironmentStringsW(esi_191);
					eax_140 = ebx_134;
				}
				else
				{
l00401B9C:
					eax_140 = 0x00000000;
				}
			}
			else
				goto l00401ADA;
		}
		else
		{
			word32 eax_255 = GetEnvironmentStrings();
			edi_195 = eax_255;
			if (eax_255 != 0x00000000)
			{
				Mem259[0x004056BC:word32] = 0x00000002;
l00401B50:
				if (edi_195 == 0x00000000)
				{
					word32 eax_246 = GetEnvironmentStrings();
					edi_195 = eax_246;
					if (eax_246 != 0x00000000)
					{
l00401B60:
						word32 eax_202 = edi_195;
						if (Mem0[edi_195 + 0x00000000:byte] != 0x00)
							do
							{
								eax_202 = eax_202 + 0x00000001;
								if (Mem0[eax_202 + 0x00000000:byte] != 0x00)
									continue;
								eax_202 = eax_202 + 0x00000001;
							} while (Mem0[eax_202 + 0x00000001:byte] != 0x00);
						word32 eax_211 = fn00402630(dwLoc20);
						word32 eax_204 = eax_202 - edi_195;
						word32 esi_212 = eax_211;
						if (eax_211 == 0x00000000)
							esi_212 = 0x00000000;
						else
							fn00402730(eax_211, edi_195, eax_204 + 0x00000001);
						FreeEnvironmentStringsA(edi_195);
						eax_140 = esi_212;
					}
					else
						goto l00401B9C;
				}
				else
					goto l00401B60;
			}
			else
				goto l00401B9C;
		}
	}
	else if (eax_250 == 0x00000001)
		goto l00401ACA;
	else if (eax_250 == 0x00000002)
		goto l00401B50;
	else
		goto l00401B9C;
	return eax_140;
}

void fn00401BA5(word32 ebp, word32 edi)
{
	word32 eax_19 = fn00402630(dwLoc5C);
	word32 esi_20 = eax_19;
	if (eax_19 == 0x00000000)
	{
		Mem288[fp - 0x00000058:word32] = 0x0000001B;
		word32 ebx_289;
		word32 edi_291;
		fn00401446(ebp, edi, dwLoc5C, out ebx_289, out esi_20, out edi_291);
	}
	Mem31[0x00405960:word32] = esi_20;
	Mem32[0x00405A60:word32] = 0x00000020;
	word32 eax_33 = esi_20 + 0x00000100;
	while (esi_20 <u eax_33)
	{
		Mem40[esi_20 + 0x00000004:byte] = Mem32[esi_20 + 0x00000004:byte] & 0x00;
		Mem43[esi_20 + 0x00000000:word32] = Mem40[esi_20 + 0x00000000:word32] | 0xFFFFFFFF;
		Mem45[esi_20 + 0x00000005:byte] = 0x0A;
		esi_20 = esi_20 + 0x00000008;
		eax_33 = Mem45[0x00405960:word32] + 0x00000100;
	}
	GetStartupInfoA(fp - 0x00000044);
	if (wLoc12 != 0x0000 && dwLoc10 != 0x00000000)
	{
		word32 esi_168 = Mem32[dwLoc10 + 0x00000000:word32];
		word32 ebp_169 = dwLoc10 + 0x00000004;
		word32 ebx_173 = esi_168 + (dwLoc10 + 0x00000004);
		if (esi_168 >= 0x00000800)
			esi_168 = 0x00000800;
		if (Mem32[0x00405A60:word32] < esi_168)
		{
			word32 edi_245 = 0x00405964;
			do
			{
				word32 eax_252 = fn00402630(dwLoc5C);
				if (eax_252 == 0x00000000)
				{
					esi_168 = Mem32[0x00405A60:word32];
					goto l00401C89;
				}
				Mem259[0x00405A60:word32] = Mem32[0x00405A60:word32] + 0x00000020;
				Mem261[edi_245 + 0x00000000:word32] = eax_252;
				word32 ecx_262 = eax_252 + 0x00000100;
				while (eax_252 <u ecx_262)
				{
					Mem271[eax_252 + 0x00000004:byte] = Mem261[eax_252 + 0x00000004:byte] & 0x00;
					Mem274[eax_252 + 0x00000000:word32] = Mem271[eax_252 + 0x00000000:word32] | 0xFFFFFFFF;
					Mem276[eax_252 + 0x00000005:byte] = 0x0A;
					eax_252 = eax_252 + 0x00000008;
					ecx_262 = Mem276[edi_245 + 0x00000000:word32] + 0x00000100;
				}
				edi_245 = edi_245 + 0x00000004;
			} while (Mem261[0x00405A60:word32] < esi_168);
		}
l00401C89:
		word32 edi_186 = 0x00000000;
		if (esi_168 > 0x00000000)
			do
			{
				word32 eax_199 = Mem32[ebx_173 + 0x00000000:word32];
				if (eax_199 != 0xFFFFFFFF)
				{
					byte cl_215 = Mem32[ebp_169 + 0x00000000:byte];
					if ((cl_215 & 0x01) != 0x00 && ((cl_215 & 0x08) != 0x00 || GetFileType(eax_199) != 0x00000000))
					{
						word32 eax_233 = 0x00405960[(edi_186 >> 0x00000005) * 0x00000004] + (edi_186 & 0x0000001F) * 0x00000008;
						Mem235[eax_233 + 0x00000000:word32] = Mem32[ebx_173 + 0x00000000:word32];
						Mem237[eax_233 + 0x00000004:byte] = Mem235[ebp_169 + 0x00000000:byte];
					}
				}
				edi_186 = edi_186 + 0x00000001;
				ebp_169 = ebp_169 + 0x00000001;
				ebx_173 = ebx_173 + 0x00000004;
			} while (edi_186 < esi_168);
	}
	word32 ebx_71 = 0x00000000;
	do
	{
		word32 eax_81 = Mem32[0x00405960:word32];
		word32 esi_84 = eax_81 + ebx_71 * 0x00000008;
		if (eax_81[ebx_71 * 0x00000008] == 0xFFFFFFFF)
		{
			word32 eax_114;
			Mem112[esi_84 + 0x00000004:byte] = 0x81;
			if (ebx_71 == 0x00000000)
				eax_114 = 0xFFFFFFF6;
			else
				eax_114 = 0x00000000 - (-(ebx_71 - 0x00000001) == 0x00000000) + 0xFFFFFFF5;
			word32 eax_117 = GetStdHandle(eax_114);
			if (eax_117 != 0xFFFFFFFF)
			{
				word32 eax_133 = GetFileType(eax_117);
				if (eax_133 != 0x00000000)
				{
					Mem139[esi_84 + 0x00000000:word32] = eax_117;
					if ((eax_133 & 0x000000FF) == 0x00000002)
					{
l00401D21:
						Mem128[esi_84 + 0x00000004:byte] = Mem112[esi_84 + 0x00000004:byte] | 0x40;
					}
					else if ((eax_133 & 0x000000FF) == 0x00000003)
						Mem145[esi_84 + 0x00000004:byte] = Mem139[esi_84 + 0x00000004:byte] | 0x08;
				}
				else
					goto l00401D21;
			}
			else
				goto l00401D21;
		}
		else
			Mem160[esi_84 + 0x00000004:byte] = Mem32[esi_84 + 0x00000004:byte] | 0x80;
		ebx_71 = ebx_71 + 0x00000001;
	} while (ebx_71 < 0x00000003);
	SetHandleCount(Mem32[0x00405A60:word32]);
	return;
}

word32 fn00401D50(word32 dwArg04)
{
	word32 eax_14 = HeapCreate((word32) (dwArg04 == 0x00000000), 0x00001000, 0x00000000);
	Mem19[0x00405948:word32] = eax_14;
	if (eax_14 == 0x00000000)
		goto l00401D85;
	else if (fn00402A65() == 0x00000000)
	{
		Mem37[fp - 0x00000004:word32] = Mem19[0x00405948:word32];
		HeapDestroy(0x00000000);
l00401D85:
		return 0x00000000;
	}
	else
	{
		Mem41[fp - 0x00000004:word32] = 0x00000001;
		return 0x00000000;
	}
}

word32 fn00401F5C(word32 ebp, word32 edi)
{
	word32 eax_3 = Mem0[0x00405564:word32];
	if (eax_3 == 0x00000001 || eax_3 == 0x00000000 && Mem0[0x00405034:word32] == 0x00000001)
	{
		word32 ebx_22;
		word32 edi_23;
		fn00401F95(ebp, edi, 0x000000FC, out ebx_22, out edi_23);
		word32 eax_25 = Mem0[0x004056C0:word32];
		if (eax_25 != 0x00000000)
			eax_25();
		Mem38[fp - 0x00000004:word32] = 0x000000FF;
		word32 ebx_39;
		fn00401F95(ebp, edi_23, 0x000000FC, out ebx_39, out edi);
	}
	return edi;
}

word32 fn00401F95(word32 ebp, word32 edi, word32 dwArg04, ptr32 ebxOut, ptr32 ediOut)
{
	*ebxOut = ebx;
	*ediOut = edi;
	word32 ecx_15 = 0x00000000;
	word32 eax_12 = 0x004050E0;
	do
	{
		if (dwArg04 == Mem0[eax_12 + 0x00000000:word32])
			break;
		eax_12 = eax_12 + 0x00000008;
		ecx_15 = ecx_15 + 0x00000001;
	} while (eax_12 < 0x00405170);
	word32 esi_123 = ecx_15 << 0x00000003;
	if (dwArg04 == Mem0[esi_123 + 0x004050E0:word32])
	{
		eax_12 = Mem0[0x00405564:word32];
		if (eax_12 != 0x00000001 && (eax_12 != 0x00000000 || Mem0[0x00405034:word32] != 0x00000001))
			if (dwArg04 != 0x000000FC)
			{
				word32 esp_102 = fp - 0x000001AC;
				if (GetModuleFileNameA(0x00000000, fp + 0xFFFFFE58, 0x00000104) == 0x00000000)
				{
					Mem185[fp - 0x000001B0:word32] = 0x004043D4;
					fn00402540(edi, fp + 0xFFFFFE58, out edi);
					esp_102 = fp - 0x000001AC;
				}
				word32 esp_110 = esp_102 - 0x00000004;
				Mem111[esp_110 + 0x00000000:word32] = edi;
				Mem113[esp_110 - 0x00000004:word32] = fp + 0xFFFFFE58;
				word32 edi_114 = fp + 0xFFFFFE58;
				word32 esp_119 = esp_110;
				if (fn004026B0(fp + 0xFFFFFE58, dwArg00) >u 0xFFFFFFC5)
				{
					Mem165[esp_110 - 0x00000004:word32] = fp + 0xFFFFFE58;
					word32 eax_166 = fn004026B0(fp + 0xFFFFFE58, dwArg00);
					Mem171[esp_110 - 0x00000008:word32] = 0x00000003;
					Mem175[esp_110 - 0x0000000C:word32] = 0x004043D0;
					edi_114 = eax_166 + (fp + 0xFFFFFE1D);
					Mem177[esp_110 - 0x00000010:word32] = edi_114;
					esi_123 = fn00403340(ebp, dwArg00, dwArg04, dwArg08, dwArg0C);
					esp_119 = esp_110;
				}
				word32 esp_126 = esp_119 - 0x00000004;
				Mem127[esp_126 + 0x00000000:word32] = 0x004043B4;
				Mem129[esp_126 - 0x00000004:word32] = fp + 0xFFFFFF5C;
				word32 edi_130;
				fn00402540(edi_114, dwArg00, out edi_130);
				Mem134[esp_126 - 0x00000008:word32] = edi_130;
				Mem136[esp_126 - 0x0000000C:word32] = fp + 0xFFFFFF5C;
				word32 edi_137 = fn00402550(edi_130, dwArg00);
				Mem140[esp_126 - 0x00000010:word32] = 0x004043B0;
				Mem142[esp_126 - 0x00000014:word32] = fp + 0xFFFFFF5C;
				word32 edi_143 = fn00402550(edi_137, dwArg00);
				Mem145[esp_126 - 0x00000018:word32] = Mem142[esi_123 + 0x004050E4:word32];
				Mem148[esp_126 - 0x0000001C:word32] = fp + 0xFFFFFF5C;
				fn00402550(edi_143, dwArg00);
				Mem151[esp_126 - 0x00000020:word32] = 0x00012010;
				Mem154[esp_126 - 0x00000024:word32] = 0x00404388;
				Mem156[esp_126 - 0x00000028:word32] = fp + 0xFFFFFF5C;
				word32 ebx_157;
				eax_12 = fn004032AE(out ebx_157);
				word32 edi_161;
				*ediOut = Mem156[esp_126 + 0x00000004:word32];
			}
		else
			eax_12 = WriteFile(GetStdHandle(0xFFFFFFF4), Mem0[esi_123 + 0x004050E4:word32], fn004026B0(fp + 0x00000004, Mem0[esi_123 + 0x004050E4:word32]), fp + 0x00000004, 0x00000000);
	}
	return eax_12;
}

word32 fn004020E8(word32 dwArg00)
{
	return fn004020F9((byte) dwArg00, 0x00000000, 0x04);
}

word32 fn004020F9(byte bArg04, word32 dwArg08, byte bArg0C)
{
	word32 eax_3 = (word32) bArg04;
	if ((Mem0[eax_3 + 0x00405841:byte] & bArg0C) == 0x00)
	{
		word32 eax_29;
		if (dwArg08 != 0x00000000)
			eax_29 = (word32) 0x0040528A[eax_3 * 0x0002] & dwArg08;
		else
			eax_29 = 0x00000000;
		if (eax_29 == 0x00000000)
			return eax_29;
		else
		{
l00402126:
			return 0x00000001;
		}
	}
	else
		goto l00402126;
}

word32 fn0040212A(selector fs, word32 dwArg04)
{
	word32 eax_248;
	word32 eax_20 = fn004022C3(dwArg04);
	if (eax_20 == Mem0[0x0040571C:word32])
		goto l004022B7;
	else if (eax_20 != 0x00000000)
	{
		word32 edx_111 = 0x00000000;
		word32 eax_115 = 0x00405178;
		do
		{
			if (Mem0[eax_115 + 0x00000000:word32] == eax_20)
			{
				word32 ecx_258 = 0x00000040;
				word32 edi_260 = 0x00405840;
				while (ecx_258 != 0x00000000)
				{
					Mem263[edi_260 + 0x00000000:word32] = 0x00000000;
					edi_260 = edi_260 + 0x00000004;
					ecx_258 = ecx_258 - 0x00000001;
				}
				Mem270[edi_260 + 0x00000000:byte] = 0x00;
				word32 esi_266 = edx_111 * 0x00000003;
				word32 dwLoc08_267 = 0x00405170;
				word32 ebx_272 = (esi_266 << 0x00000004) + 0x00405188;
				do
				{
					word32 ecx_285 = ebx_272 + 0x00000001;
					if (Mem270[ebx_272 + 0x00000000:byte] != 0x00)
						do
						{
							byte dl_330 = Mem270[ecx_285 + 0x00000000:byte];
							if (dl_330 == 0x00)
								break;
							word32 eax_335 = (word32) Mem270[ecx_285 + 0x00000000:byte];
							word32 edi_337 = (word32) dl_330;
							if (eax_335 <=u edi_337)
							{
								byte dl_351 = Mem270[dwLoc08_267 + 0x00000000:byte];
								do
								{
									Mem355[eax_335 + 0x00405841:byte] = Mem270[eax_335 + 0x00405841:byte] | dl_351;
									eax_335 = eax_335 + 0x00000001;
								} while (eax_335 <=u edi_337);
							}
							word32 ecx_346 = ecx_285 + 0x00000001;
							ecx_285 = ecx_346 + 0x00000001;
						} while (Mem270[ecx_346 + 0x00000001:byte] != 0xFFFFFFFF);
					word32 v21_295 = dwLoc08_267 + 0x00000001;
					dwLoc08_267 = v21_295;
					ebx_272 = ebx_272 + 0x00000008;
				} while (v21_295 <u 0xFFBFAE94);
				Mem301[0x0040572C:word32] = 0x00000001;
				Mem303[fp - 0x0000002C:word32] = eax_20;
				Mem304[0x0040571C:word32] = eax_20;
				word32 eax_305 = fn0040230D(0x00000040);
				word32 esi_306 = (esi_266 << 0x00000004) + 0x0040517C;
				Mem309[0x00405720:word32] = Mem304[esi_306 + 0x00000000:word32];
				Mem313[0x00405724:word32] = Mem309[esi_306 + 0x00000004:word32];
				Mem318[0x00405944:word32] = eax_305;
				Mem320[0x00405728:word32] = Mem318[esi_306 + 0x00000008:word32];
				goto l004022B2;
			}
			eax_115 = eax_115 + 0x00000030;
			edx_111 = edx_111 + 0x00000001;
		} while (eax_115 < 0x00405268);
		word32 eax_135 = GetCPInfo(eax_20, fp - 0x0000001C);
		if (eax_135 == 0x00000001)
		{
			Mem154[0x0040571C:word32] = eax_20;
			word32 ecx_144 = 0x00000040;
			word32 edi_146 = 0x00405840;
			while (ecx_144 != 0x00000000)
			{
				Mem157[edi_146 + 0x00000000:word32] = 0x00000000;
				edi_146 = edi_146 + 0x00000004;
				ecx_144 = ecx_144 - 0x00000001;
			}
			Mem160[edi_146 + 0x00000000:byte] = 0x00;
			Mem162[0x00405944:word32] = 0x00000000;
			if (dwLoc1C >u 0x00000001)
			{
				if (bLoc16 != 0x00)
				{
					word32 ecx_212 = fp - 0x00000015;
					do
					{
						byte dl_219 = Mem162[ecx_212 + 0x00000000:byte];
						if (dl_219 == 0x00)
							break;
						word32 eax_224 = (word32) Mem162[ecx_212 - 0x00000001:byte];
						word32 edx_226 = (word32) dl_219;
						while (eax_224 <=u edx_226)
						{
							Mem235[eax_224 + 0x00405841:byte] = Mem162[eax_224 + 0x00405841:byte] | 0x04;
							eax_224 = eax_224 + 0x00000001;
						}
						word32 ecx_241 = ecx_212 + 0x00000001;
						ecx_212 = ecx_241 + 0x00000001;
					} while (Mem162[ecx_241 + 0x00000000:byte] != 0x00);
				}
				Mem193[fp - 0x0000002C:word32] = 0x00000001;
				word32 eax_194 = 0x00000040;
				do
				{
					Mem199[eax_194 + 0x00405841:byte] = Mem193[eax_194 + 0x00405841:byte] | 0x08;
					eax_194 = eax_194 + 0x00000001;
				} while (eax_194 <u 0x000000FF);
				Mem206[fp - 0x0000002C:word32] = eax_20;
				Mem210[0x00405944:word32] = fn0040230D(0x00000040);
				Mem211[0x0040572C:word32] = 0x00000001;
			}
			else
				Mem245[0x0040572C:word32] = 0x00000000;
			Mem175[0x00405720:word32] = 0x00000000;
			Mem177[0x00405724:word32] = 0x00000000;
			Mem179[0x00405728:word32] = 0x00000000;
l004022B2:
			fn00402369(fs);
l004022B7:
			eax_248 = 0x00000000;
		}
		else if (Mem0[0x004056C4:word32] != 0x00000000)
		{
l004022AD:
			fn00402340();
			goto l004022B2;
		}
		else
			eax_248 = eax_135 | 0xFFFFFFFF;
	}
	else
		goto l004022AD;
	return eax_248;
}

word32 fn004022C3(word32 dwArg04)
{
fn004022C3_entry:
l004022C3:
	Mem6[0x004056C4:word32] = Mem0[0x004056C4:word32] & 0x00000000
	word32 eax_16 = dwArg04
	branch dwArg04 != 0xFFFFFFFE l004022E3
l004022D3:
	Mem10[0x004056C4:word32] = 0x00000001
l004022E3:
	branch dwArg04 != 0xFFFFFFFD l004022F8
l004022E8:
	Mem13[0x004056C4:word32] = 0x00000001
l004022F8:
	branch dwArg04 != 0xFFFFFFFC l0040230C
l004022FD:
	eax_16 = Mem6[0x004056EC:word32]
	Mem18[0x004056C4:word32] = 0x00000001
l0040230C:
	return eax_16
fn004022C3_exit:
}

word32 fn0040230D(word32 dwArg04)
{
	if (dwArg04 == 0x000003A4)
		return 0x00000411;
	else if (dwArg04 == 0x000003A8)
		return 0x00000804;
	else if (dwArg04 == 0x000003B5)
		return 0x00000412;
	else if (dwArg04 != 0x000003B6)
		return 0x00000000;
	else
		return 0x00000404;
}

void fn00402340()
{
	word32 ecx_15 = 0x00000040;
	word32 edi_13 = 0x00405840;
	while (ecx_15 != 0x00000000)
	{
		Mem16[edi_13 + 0x00000000:word32] = 0x00000000;
		edi_13 = edi_13 + 0x00000004;
		ecx_15 = ecx_15 - 0x00000001;
	}
	Mem19[edi_13 + 0x00000000:byte] = 0x00;
	Mem24[0x0040571C:word32] = 0x00000000;
	Mem25[0x0040572C:word32] = 0x00000000;
	Mem26[0x00405944:word32] = 0x00000000;
	Mem27[0x00405720:word32] = 0x00000000;
	Mem29[0x00405724:word32] = 0x00000000;
	Mem31[0x00405728:word32] = 0x00000000;
	return;
}

void fn00402369(selector fs)
{
	if (GetCPInfo(Mem0[0x0040571C:word32], fp - 0x00000018) == 0x00000001)
	{
		word32 eax_64 = 0x00000000;
		byte al_65 = 0x00;
		do
		{
			Mem71[fp + 0xFFFFFEE8 + eax_64:byte] = al_65;
			eax_64 = eax_64 + 0x00000001;
			al_65 = (byte) eax_64;
		} while (eax_64 <u 0x00000100);
		byte al_224 = bLoc12;
		if (bLoc12 != 0x00)
		{
			word32 edx_215 = fp - 0x00000011;
			do
			{
				word32 ecx_227 = (word32) Mem71[edx_215 + 0x00000000:byte];
				word32 eax_229 = (word32) al_224;
				if (eax_229 <=u ecx_227)
				{
					word32 ecx_252 = ecx_227 - eax_229;
					word32 edi_253 = fp + 0xFFFFFEE8 + eax_229;
					word32 ecx_257 = ecx_252 + 0x00000001 >>u 0x00000002;
					while (ecx_257 != 0x00000000)
					{
						Mem263[edi_253 + 0x00000000:word32] = 0x20202020;
						edi_253 = edi_253 + 0x00000004;
						ecx_257 = ecx_257 - 0x00000001;
					}
					word32 ecx_268 = ecx_252 + 0x00000001 & 0x00000003;
					while (ecx_268 != 0x00000000)
					{
						Mem275[edi_253 + 0x00000000:byte] = 0x20;
						edi_253 = edi_253 + 0x00000001;
						ecx_268 = ecx_268 - 0x00000001;
					}
				}
				word32 edx_239 = edx_215 + 0x00000001;
				edx_215 = edx_239 + 0x00000001;
				al_224 = Mem71[edx_239 + 0x00000000:byte];
			} while (al_224 != 0x00);
		}
		fn0040368D(fp - 0x00000004, fs, 0x00000001, fp + 0xFFFFFEE8, 0x00000100, fp + 0xFFFFFAE8, Mem71[0x0040571C:word32], Mem71[0x00405944:word32], 0x00000000);
		fn0040343E(fp - 0x00000004, fs, Mem71[0x00405944:word32], 0x00000100, 0x01, fp + 0xFFFFFEE8, 0x00000100, fp + 0xFFFFFDE8, 0x00000100, Mem71[0x0040571C:word32], 0x00000000);
		fn0040343E(fp - 0x00000004, fs, Mem71[0x00405944:word32], 0x00000200, 0x02, fp + 0xFFFFFEE8, 0x00000100, fp + 0xFFFFFCE8, 0x00000100, Mem71[0x0040571C:word32], 0x00000000);
		word32 eax_153 = 0x00000000;
		word32 ecx_157 = fp + 0xFFFFFAE8;
		do
		{
			byte dl_185;
			byte dl_167 = (byte) Mem71[ecx_157 + 0x00000000:word16];
			if ((dl_167 & 0x01) != 0x00)
			{
				Mem191[eax_153 + 0x00405841:byte] = Mem71[eax_153 + 0x00405841:byte] | 0x10;
				dl_185 = Mem191[fp + 0xFFFFFDE8 + eax_153:byte];
l00402475:
				Mem189[eax_153 + 0x00405740:byte] = dl_185;
			}
			else if ((dl_167 & 0x02) != 0x00)
			{
				Mem201[eax_153 + 0x00405841:byte] = Mem71[eax_153 + 0x00405841:byte] | 0x20;
				dl_185 = Mem201[fp + 0xFFFFFCE8 + eax_153:byte];
				goto l00402475;
			}
			else
				Mem208[eax_153 + 0x00405740:byte] = Mem71[eax_153 + 0x00405740:byte] & 0x00;
			eax_153 = eax_153 + 0x00000001;
			ecx_157 = ecx_157 + 0x00000001 + 0x00000001;
		} while (eax_153 <u 0x00000100);
	}
	else
	{
		word32 eax_279 = 0x00000000;
		byte al_280 = 0x00;
		do
		{
			byte cl_331;
			if (eax_279 >=u 0x00000041 && eax_279 <=u 0x0000005A)
			{
				Mem354[eax_279 + 0x00405841:byte] = Mem0[eax_279 + 0x00405841:byte] | 0x10;
				cl_331 = al_280 + 0x20;
l004024BF:
				Mem332[eax_279 + 0x00405740:byte] = cl_331;
			}
			else if (eax_279 >=u 0x00000061 && eax_279 <=u 0x0000007A)
			{
				Mem345[eax_279 + 0x00405841:byte] = Mem0[eax_279 + 0x00405841:byte] | 0x20;
				cl_331 = al_280 - 0x20;
				goto l004024BF;
			}
			else
				Mem339[eax_279 + 0x00405740:byte] = Mem0[eax_279 + 0x00405740:byte] & 0x00;
			eax_279 = eax_279 + 0x00000001;
			al_280 = (byte) eax_279;
		} while (eax_279 <u 0x00000100);
	}
	return;
}

word32 fn004024EE(selector fs)
{
	if (Mem0[0x00405A68:word32] == 0x00000000)
	{
		eax = fn0040212A(fs, 0xFFFFFFFD);
		Mem18[0x00405A68:word32] = 0x00000001;
	}
	return eax;
}

word32 fn0040250A(word32 dwArg04)
{
	if (dwArg04 != 0x00000000)
	{
		word32 eax_38 = fn00402AA3(dwArg04);
		if (eax_38 != 0x00000000)
		{
			fn00402ACE(eax_38, dwArg04, bLoc05);
			return ebx;
		}
		else
		{
			HeapFree(Mem0[0x00405948:word32], 0x00000000, dwArg04);
l00402537:
			return ebx;
		}
	}
	else
		goto l00402537;
}

word32 fn00402540(word32 edi, word32 dwArg04, ptr32 ediOut)
{
	word32 edi_8;
	return fn004025B1(dwArg04, edi, dwArg04, dwArg08, out edi_8);
}

word32 fn00402550(word32 edi, word32 dwArg04)
{
	word32 ecx_22 = dwArg04;
	if ((dwArg04 & 0x00000003) != 0x00000000)
	{
l0040255D:
		do
		{
			ecx_22 = ecx_22 + 0x00000001;
			if (Mem0[ecx_22 + 0x00000000:byte] == 0x00)
			{
				word32 edi_29 = ecx_22 - 0x00000001;
				word32 edi_31;
				fn004025B1(edi_29, edi, dwArg04, dwArg08, out edi_31);
				return edi_31;
			}
		} while ((ecx_22 & 0x00000003) != 0x00000000);
l0040256C:
		while (true)
		{
			word32 eax_37 = Mem0[ecx_22 + 0x00000000:word32];
			ecx_22 = ecx_22 + 0x00000004;
			if (((eax_37 ^ 0xFFFFFFFF ^ eax_37 + 0x7EFEFEFF) & 0x81010100) == 0x00000000)
				continue;
			word32 eax_46 = Mem0[ecx_22 - 0x00000004:word32];
			byte ah_48 = SLICE(eax_46, byte, 8);
			if ((byte) eax_46 == 0x00)
			{
				word32 edi_68;
				fn004025B1(ecx_22 - 0x00000004, edi, dwArg04, dwArg08, out edi_68);
				return edi_68;
			}
			if (ah_48 == 0x00)
			{
				word32 edi_65;
				fn004025B1(ecx_22 - 0x00000003, edi, dwArg04, dwArg08, out edi_65);
				return edi_65;
			}
			if ((eax_46 & 0x00FF0000) == 0x00000000)
			{
				word32 edi_62;
				fn004025B1(ecx_22 - 0x00000002, edi, dwArg04, dwArg08, out edi_62);
				return edi_62;
			}
			if ((eax_46 & 0xFF000000) == 0x00000000)
				;
		}
	}
	else
		goto l0040256C;
fn00402550_exit:
}

word32 fn004025B1(word32 edi, word32 dwArg00, word32 dwArg08, word32 dwArg0C, ptr32 ediOut)
{
	byte dl_23;
	word32 ecx_1 = dwArg0C;
	if ((dwArg0C & 0x00000003) != 0x00000000)
	{
l004025BD:
		do
		{
			dl_23 = Mem0[ecx_1 + 0x00000000:byte];
			ecx_1 = ecx_1 + 0x00000001;
			if (dl_23 == 0x00)
			{
l00402628:
				Mem32[edi + 0x00000000:byte] = dl_23;
				word32 edi_36;
				*ediOut = dwArg00;
				return dwArg08;
			}
			Mem99[edi + 0x00000000:byte] = dl_23;
			edi = edi + 0x00000001;
		} while ((ecx_1 & 0x00000003) != 0x00000000);
l004025D6:
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
					goto l00402628;
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
				goto l004025D1;
			}
l004025D1:
			Mem59[edi + 0x00000000:word32] = edx_48;
			edi = edi + 0x00000004;
		}
	}
	else
		goto l004025D6;
fn004025B1_exit:
}

word32 fn00402630(word32 dwArg00)
{
	return fn00402642(dwLoc0C, dwArg00, Mem0[0x004056FC:word32]);
}

word32 fn00402642(word32 dwArg00, word32 dwArg04, word32 dwArg08)
{
	word32 eax_13;
	if (dwArg04 <=u 0xFFFFFFE0)
	{
l00402649:
		do
		{
			eax_13 = fn0040266E(dwArg00);
			if (eax_13 != 0x00000000 || dwArg08 == eax_13)
				goto l0040266D;
		} while (fn004037D6(dwLoc08) != 0x00000000);
l0040266B:
		eax_13 = 0x00000000;
	}
	else
		goto l0040266B;
	return eax_13;
}

word32 fn0040266E(word32 dwArg04)
{
	word32 eax_22;
	word32 esi_33 = dwArg04;
	if (dwArg04 <=u Mem0[0x00405270:word32])
	{
		eax_22 = fn00402DF9(dwArg04, dwArg04, SLICE(dwArg04, byte, 24));
		if (eax_22 == 0x00000000)
		{
l00402686:
			if (dwArg04 == 0x00000000)
				esi_33 = 0x00000001;
			eax_22 = HeapAlloc(Mem0[0x00405948:word32], 0x00000000, esi_33 + 0x0000000F & 0xFFFFFFF0);
		}
	}
	else
		goto l00402686;
	return eax_22;
}

word32 fn004026B0(word32 eax, word32 dwArg04)
{
	word32 ecx_24 = dwArg04;
	if ((dwArg04 & 0x00000003) != 0x00000000)
	{
l004026BC:
		do
		{
			ecx_24 = ecx_24 + 0x00000001;
			if (Mem0[ecx_24 + 0x00000000:byte] == 0x00)
				return ecx_24 - 0x00000001 - dwArg04;
		} while ((ecx_24 & 0x00000003) != 0x00000000);
l004026D0:
		while (true)
		{
			word32 eax_36 = Mem0[ecx_24 + 0x00000000:word32];
			ecx_24 = ecx_24 + 0x00000004;
			if (((eax_36 ^ 0xFFFFFFFF ^ eax_36 + 0x7EFEFEFF) & 0x81010100) == 0x00000000)
				continue;
			word32 eax_45 = Mem0[ecx_24 - 0x00000004:word32];
			byte ah_47 = SLICE(eax_45, byte, 8);
			if ((byte) eax_45 == 0x00)
				return ecx_24 - 0x00000004 - dwArg04;
			if (ah_47 == 0x00)
				return ecx_24 - 0x00000003 - dwArg04;
			if ((eax_45 & 0x00FF0000) == 0x00000000)
				return ecx_24 - 0x00000002 - dwArg04;
			if ((eax_45 & 0xFF000000) == 0x00000000)
				;
		}
	}
	else
		goto l004026D0;
fn004026B0_exit:
}

void fn00402730(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
fn00402730_entry:
l00402730:
	word32 esi_13 = dwArg08
	word32 edi_17 = dwArg04
	word32 eax_20 = dwArg0C + dwArg08
	branch dwArg04 <=u dwArg08 || dwArg04 >=u eax_20 l00402750
	goto l004028C8
l00402748:
l00402750:
	branch (dwArg04 & 0x00000003) != 0x00000000 l0040276C
l00402758:
	word32 ecx_39 = dwArg0C >>u 0x00000002
	branch dwArg0C >>u 0x00000002 <u 0x00000008 l0040278C
l00402763:
	branch ecx_39 == 0x00000000 l00402765
l00402763_1:
	Mem57[edi_17 + 0x00000000:word32] = Mem0[esi_13 + 0x00000000:word32]
	esi_13 = esi_13 + 0x00000004
	edi_17 = edi_17 + 0x00000004
	ecx_39 = ecx_39 - 0x00000001
	goto l00402763
l00402765:
	switch (dwArg0C & 0x00000003) { l00402888 }
	goto l00402888
l0040276C:
	branch dwArg0C <u 0x00000004 l00402784
l00402778:
	switch (dwArg04 & 0x00000003) { }
l00402784:
	switch (dwArg0C - 0x00000004) { }
l0040278C:
	switch (dwArg0C >>u 0x00000002) { l0040286F }
l0040286F:
	switch (dwArg0C & 0x00000003) { l00402888 }
l00402888:
	return
l004028C8:
	word32 esi_71 = dwArg0C - 0x00000004 + dwArg08
	word32 edi_72 = dwArg0C - 0x00000004 + dwArg04
	branch (edi_72 & 0x00000003) != 0x00000000 l004028FC
l004028D8:
	word32 ecx_100 = dwArg0C >>u 0x00000002
	branch dwArg0C >>u 0x00000002 <u 0x00000008 l004028F0
l004028E3:
l004028E4:
	branch ecx_100 == 0x00000000 l004028E6
l004028E4_1:
	Mem97[edi_72 + 0x00000000:word32] = Mem0[esi_71 + 0x00000000:word32]
	esi_71 = esi_71 - 0x00000004
	edi_72 = edi_72 - 0x00000004
	ecx_100 = ecx_100 - 0x00000001
	goto l004028E4
l004028E6:
	switch (dwArg0C & 0x00000003) { l00402A20 }
	goto l00402A20
l004028F0:
l004028FC:
	branch dwArg0C <u 0x00000004 l00402914
l00402908:
	switch (edi_72 & 0x00000003) { }
l00402914:
	switch (dwArg0C) { l00402A20 }
l00402A20:
	return
fn00402730_exit:
}

word32 fn00402A65()
{
	word32 eax_9 = HeapAlloc(Mem0[0x00405948:word32], 0x00000000, 0x00000140);
	Mem14[0x00405718:word32] = eax_9;
	if (eax_9 == 0x00000000)
		return eax_9;
	else
	{
		Mem20[0x00405710:word32] = Mem14[0x00405710:word32] & 0x00000000;
		Mem23[0x00405714:word32] = Mem20[0x00405714:word32] & 0x00000000;
		Mem27[fp - 0x00000004:word32] = 0x00000001;
		Mem28[0x0040570C:word32] = eax_9;
		Mem29[0x00405704:word32] = 0x00000010;
		return 0x00000140;
	}
}

word32 fn00402AA3(word32 dwArg04)
{
	word32 eax_15 = Mem0[0x00405718:word32];
	word32 ecx_6 = eax_15 + (Mem0[0x00405714:word32] * 0x00000005) * 0x00000004;
	while (eax_15 <u ecx_6)
	{
		if (dwArg04 - Mem0[eax_15 + 0x0000000C:word32] <u 0x00100000)
			goto l00402ACD;
		eax_15 = eax_15 + 0x00000014;
	}
	eax_15 = 0x00000000;
	return eax_15;
}

void fn00402ACE(word32 dwArg04, word32 dwArg08, byte bArg0B)
{
	word32 dwArg08_347;
	word32 ebx_21 = Mem0[dwArg08 - 0x00000004:word32];
	word32 esi_20 = dwArg08 - Mem0[dwArg04 + 0x0000000C:word32];
	word32 eax_18 = Mem0[dwArg04 + 0x00000010:word32];
	word32 ecx_35 = Mem0[ebx_21 - 0x00000001 + (dwArg08 + 0xFFFFFFFC):word32];
	word32 edx_22 = dwArg08 + 0xFFFFFFFC;
	word32 esi_140 = esi_20 >>u 0x0000000F;
	word32 edi_28 = Mem0[dwArg08 + 0xFFFFFFF8:word32];
	word32 ebx_295 = ebx_21 - 0x00000001;
	word32 ecx_32 = (esi_20 >>u 0x0000000F) *s 0x00000204 + 0x00000144 + eax_18;
	word32 dwLoc10_33 = ebx_21 - 0x00000001;
	dwArg08_347 = dwArg08;
	if (((byte) ecx_35 & 0x01) == 0x00)
	{
		word32 ecx_437 = (ecx_35 >> 0x00000004) - 0x00000001;
		dwArg08_347 = ecx_437;
		if (ecx_437 >u 0x0000003F)
			dwArg08_347 = 0x0000003F;
		if (Mem0[ebx_21 + 0x00000003 + (dwArg08 + 0xFFFFFFFC):word32] == Mem0[(ebx_21 + 0x00000007) + (dwArg08 + 0xFFFFFFFC):word32])
		{
			byte cl_461 = (byte) dwArg08_347;
			if (dwArg08_347 <u 0x00000020)
			{
				word32 edi_467 = ~(0x80000000 >>u cl_461);
				(eax_18 + 0x00000044)[(esi_20 >>u 0x0000000F) * 0x00000004] = (eax_18 + 0x00000044)[(esi_20 >>u 0x0000000F) * 0x00000004] & edi_467;
				word32 ecx_466 = dwArg08_347 + 0x00000004 + eax_18;
				byte v17_472 = Mem469[ecx_466 + 0x00000000:byte] - 0x01;
				Mem473[ecx_466 + 0x00000000:byte] = v17_472;
				if (v17_472 == 0x00)
					Mem478[dwArg04 + 0x00000000:word32] = Mem473[dwArg04 + 0x00000000:word32] & edi_467;
			}
			else
			{
				word32 edi_487 = ~(0x80000000 >>u (byte) (dwArg08_347 + 0xFFFFFFE0));
				(eax_18 + 0x000000C4)[(esi_20 >>u 0x0000000F) * 0x00000004] = (eax_18 + 0x000000C4)[(esi_20 >>u 0x0000000F) * 0x00000004] & edi_487;
				word32 ecx_486 = dwArg08_347 + 0x00000004 + eax_18;
				byte v20_492 = Mem489[ecx_486 + 0x00000000:byte] - 0x01;
				Mem493[ecx_486 + 0x00000000:byte] = v20_492;
				if (v20_492 == 0x00)
					Mem498[dwArg04 + 0x00000004:word32] = Mem493[dwArg04 + 0x00000004:word32] & edi_487;
			}
		}
		Mem453[Mem0[ebx_21 + 0x00000007 + (dwArg08 + 0xFFFFFFFC):word32] + 0x00000004:word32] = Mem0[ebx_21 + 0x00000003 + (dwArg08 + 0xFFFFFFFC):word32];
		Mem458[Mem453[ebx_21 + 0x00000003 + (dwArg08 + 0xFFFFFFFC):word32] + 0x00000008:word32] = Mem453[ebx_21 + 0x00000007 + (dwArg08 + 0xFFFFFFFC):word32];
		ebx_295 = ebx_21 - 0x00000001 + ecx_35;
		dwLoc10_33 = ebx_295;
	}
	word32 edi_53 = ebx_295 >> 0x00000004;
	word32 edi_355 = edi_53 - 0x00000001;
	if (edi_53 >u 0x00000040)
	{
		Mem431[fp - 0x00000028:word32] = 0x0000003F;
		edi_355 = 0x0000003F;
	}
	if ((edi_28 & 0x00000001) == 0x00000000)
	{
		Mem339[fp - 0x00000028:word32] = 0x0000003F;
		word32 ecx_341 = (edi_28 >> 0x00000004) - 0x00000001;
		word32 edx_335 = dwArg08 + 0xFFFFFFFC - edi_28;
		dwArg08_347 = ecx_341;
		if (ecx_341 >u 0x0000003F)
		{
			dwArg08_347 = 0x0000003F;
			ecx_341 = 0x0000003F;
		}
		ebx_295 = ebx_295 + edi_28;
		dwLoc10_33 = ebx_295;
		edi_355 = (ebx_295 >> 0x00000004) - 0x00000001;
		if (edi_355 >u 0x0000003F)
			edi_355 = 0x0000003F;
		if (ecx_341 != edi_355)
		{
			if (Mem339[edx_335 + 0x00000004:word32] == Mem339[edx_335 + 0x00000008:word32])
			{
				byte cl_386 = (byte) dwArg08_347;
				if (dwArg08_347 <u 0x00000020)
				{
					word32 edx_392 = ~(0x80000000 >>u cl_386);
					(eax_18 + 0x00000044)[(esi_20 >>u 0x0000000F) * 0x00000004] = (eax_18 + 0x00000044)[(esi_20 >>u 0x0000000F) * 0x00000004] & edx_392;
					word32 ecx_391 = dwArg08_347 + 0x00000004 + eax_18;
					byte v23_397 = Mem394[ecx_391 + 0x00000000:byte] - 0x01;
					Mem398[ecx_391 + 0x00000000:byte] = v23_397;
					if (v23_397 == 0x00)
						Mem403[dwArg04 + 0x00000000:word32] = Mem398[dwArg04 + 0x00000000:word32] & edx_392;
				}
				else
				{
					word32 edx_412 = ~(0x80000000 >>u (byte) (dwArg08_347 + 0xFFFFFFE0));
					(eax_18 + 0x000000C4)[(esi_20 >>u 0x0000000F) * 0x00000004] = (eax_18 + 0x000000C4)[(esi_20 >>u 0x0000000F) * 0x00000004] & edx_412;
					word32 ecx_411 = dwArg08_347 + 0x00000004 + eax_18;
					byte v26_417 = Mem414[ecx_411 + 0x00000000:byte] - 0x01;
					Mem418[ecx_411 + 0x00000000:byte] = v26_417;
					if (v26_417 == 0x00)
						Mem423[dwArg04 + 0x00000004:word32] = Mem418[dwArg04 + 0x00000004:word32] & edx_412;
				}
			}
			Mem380[Mem339[edx_335 + 0x00000008:word32] + 0x00000004:word32] = Mem339[edx_335 + 0x00000004:word32];
			Mem384[Mem380[edx_335 + 0x00000004:word32] + 0x00000008:word32] = Mem380[edx_335 + 0x00000008:word32];
		}
		edx_22 = edx_335;
	}
	if ((edi_28 & 0x00000001) != 0x00000000 || dwArg08_347 != edi_355)
	{
		Mem268[edx_22 + 0x00000004:word32] = Mem0[ecx_32 + edi_355 * 0x00000008 + 0x00000004:word32];
		word32 ecx_270 = ecx_32 + edi_355 * 0x00000008;
		Mem271[edx_22 + 0x00000008:word32] = ecx_270;
		Mem272[ecx_270 + 0x00000004:word32] = edx_22;
		Mem274[Mem272[edx_22 + 0x00000004:word32] + 0x00000008:word32] = edx_22;
		if (Mem274[edx_22 + 0x00000004:word32] == Mem274[edx_22 + 0x00000008:word32])
		{
			byte cl_279 = Mem274[edi_355 + 0x00000004 + eax_18:byte];
			Mem286[edi_355 + 0x00000004 + eax_18:byte] = cl_279 + 0x01;
			if (edi_355 <u 0x00000020)
			{
				if (cl_279 == 0x00)
					Mem311[dwArg04 + 0x00000000:word32] = Mem286[dwArg04 + 0x00000000:word32] | 0x80000000 >>u cl_279 + 0x01;
				word32 eax_302 = eax_18 + 0x00000044 + (esi_20 >>u 0x0000000F) * 0x00000004;
				Mem304[eax_302 + 0x00000000:word32] = Mem286[eax_302 + 0x00000000:word32] | 0x80000000 >>u (byte) edi_355;
			}
			else
			{
				if (cl_279 == 0x00)
					Mem330[dwArg04 + 0x00000004:word32] = Mem286[dwArg04 + 0x00000004:word32] | 0x80000000 >>u cl_279 + 0x01;
				word32 eax_321 = eax_18 + 0x000000C4 + (esi_20 >>u 0x0000000F) * 0x00000004;
				Mem323[eax_321 + 0x00000000:word32] = Mem286[eax_321 + 0x00000000:word32] | 0x80000000 >>u (byte) (edi_355 - 0x00000020);
			}
			ebx_295 = dwLoc10_33;
		}
	}
	Mem87[edx_22 + 0x00000000:word32] = ebx_295;
	Mem88[ebx_295 - 0x00000004 + edx_22:word32] = ebx_295;
	word32 v31_89 = Mem88[ecx_32 + 0x00000000:word32] - 0x00000001;
	Mem90[ecx_32 + 0x00000000:word32] = v31_89;
	if (v31_89 == 0x00000000)
	{
		word32 eax_136;
		word32 eax_121 = Mem90[0x00405710:word32];
		if (eax_121 != 0x00000000)
		{
			word32 ecx_162 = (Mem90[0x00405708:word32] << 0x0000000F) + Mem90[eax_121 + 0x0000000C:word32];
			Mem165[fp - 0x00000028:word32] = 0x00004000;
			VirtualFree(ecx_162, 0x00008000, 0x0000003F);
			byte cl_173 = (byte) Mem165[0x00405708:word32];
			word32 eax_174 = Mem165[0x00405710:word32];
			word32 edx_176 = 0x80000000 >>u cl_173;
			word32 v32_177 = Mem165[eax_174 + 0x00000008:word32] | edx_176;
			Mem178[eax_174 + 0x00000008:word32] = v32_177;
			word32 ecx_181 = Mem178[0x00405708:word32];
			word32 eax_182 = Mem178[Mem178[0x00405710:word32] + 0x00000010:word32];
			word32 v33_183 = (eax_182 + 0x000000C4)[ecx_181 * 0x00000004] & 0x00000000;
			(eax_182 + 0x000000C4)[ecx_181 * 0x00000004] = v33_183;
			word32 eax_187 = Mem184[Mem184[0x00405710:word32] + 0x00000010:word32];
			byte v34_188 = Mem184[eax_187 + 0x00000043:byte] - 0x01;
			Mem189[eax_187 + 0x00000043:byte] = v34_188;
			word32 eax_190 = Mem189[0x00405710:word32];
			word32 edi_160 = VirtualFree;
			word32 ecx_191 = Mem189[eax_190 + 0x00000010:word32];
			if (Mem189[ecx_191 + 0x00000043:byte] == 0x00)
			{
				Mem261[eax_190 + 0x00000004:word32] = Mem189[eax_190 + 0x00000004:word32] & 0xFFFFFFFE;
				eax_190 = Mem261[0x00405710:word32];
			}
			if (Mem189[eax_190 + 0x00000008:word32] == 0xFFFFFFFF)
			{
				Mem200[fp - 0x00000028:word32] = 0x00008000;
				Mem202[fp - 0x0000002C:word32] = 0x00000000;
				edi_160();
				HeapFree(Mem202[0x00405948:word32], 0x00000000, Mem202[Mem202[0x00405710:word32] + 0x00000010:word32]);
				word32 eax_237 = Mem202[0x00405710:word32];
				fn00403800(eax_237, eax_237 + 0x00000014, Mem202[0x00405714:word32] * 0x00000014 - eax_237 - 0x00000014 + Mem202[0x00405718:word32]);
				Mem251[0x00405714:word32] = Mem202[0x00405714:word32] - 0x00000001;
				eax_136 = dwArg04;
				if (dwArg04 >u Mem251[0x00405710:word32])
					eax_136 = dwArg04 - 0x00000014;
				Mem257[0x0040570C:word32] = Mem251[0x00405718:word32];
			}
			else
			{
l00402DE6:
				eax_136 = dwArg04;
			}
		}
		else
			goto l00402DE6;
		Mem144[0x00405710:word32] = eax_136;
		Mem145[0x00405708:word32] = esi_140;
	}
	return;
}

word32 fn00402DF9(word32 esi, word32 dwArg04, byte bArg07)
{
	word32 esi_350;
	word32 dwLoc0C_33;
	word32 dwLoc10_32;
	word32 ecx_25 = dwArg04 + 0x00000017 & 0xFFFFFFF0;
	word32 edx_9 = Mem0[0x00405718:word32];
	word32 ecx_28 = (ecx_25 >> 0x00000004) - 0x00000001;
	word32 edi_20 = edx_9 + (Mem0[0x00405714:word32] * 0x00000005) * 0x00000004;
	byte cl_29 = (byte) ecx_28;
	if (ecx_28 < 0x00000020)
	{
		esi_350 = (esi | 0xFFFFFFFF) >>u cl_29;
		dwLoc0C_33 = dwLoc0C | 0xFFFFFFFF;
		dwLoc10_32 = esi_350;
	}
	else
	{
		esi_350 = 0x00000000;
		dwLoc10_32 = 0x00000000;
		dwLoc0C_33 = (dwArg04 | 0xFFFFFFFF) >>u (byte) (ecx_28 + 0xFFFFFFE0);
	}
	word32 eax_38 = Mem0[0x0040570C:word32];
	word32 ebx_142 = eax_38;
	word32 dwArg04_390 = eax_38;
	if (eax_38 <u edi_20)
		do
		{
			if ((Mem0[ebx_142 + 0x00000004:word32] & dwLoc0C_33 | Mem0[ebx_142 + 0x00000000:word32] & esi_350) != 0x00000000)
				break;
			ebx_142 = ebx_142 + 0x00000014;
			dwArg04_390 = ebx_142;
		} while (ebx_142 <u edi_20);
	word32 eax_162;
	if (ebx_142 == edi_20)
	{
		ebx_142 = edx_9;
		byte Z_388 = cond(ebx_142 - eax_38);
		dwArg04_390 = ebx_142;
		while (ebx_142 <u eax_38)
		{
			if ((Mem0[ebx_142 + 0x00000004:word32] & dwLoc0C_33 | Mem0[ebx_142 + 0x00000000:word32] & esi_350) != 0x00000000)
			{
				Z_388 = cond(ebx_142 - eax_38);
				goto l00402E93;
			}
			ebx_142 = ebx_142 + 0x00000014;
			Z_388 = cond(ebx_142 - eax_38);
			dwArg04_390 = ebx_142;
		}
l00402E93:
		if (!Z_388)
		{
l00402E95:
			byte Z_403 = cond(ebx_142 - edi_20);
			while (ebx_142 <u edi_20)
			{
				if (Mem0[ebx_142 + 0x00000008:word32] != 0x00000000)
				{
					Z_403 = cond(ebx_142 - edi_20);
					goto l00402EAB;
				}
				ebx_142 = ebx_142 + 0x00000014;
				dwArg04_390 = ebx_142;
				Z_403 = cond(ebx_142 - edi_20);
			}
l00402EAB:
			if (!Z_403)
			{
				ebx_142 = edx_9 + 0x00000008;
				byte Z_441 = cond(ebx_142 - eax_38);
				dwArg04_390 = ebx_142;
				while (ebx_142 <u eax_38)
				{
					if (Mem0[ebx_142 + 0x00000000:word32] != 0x00000000)
					{
						Z_441 = cond(ebx_142 - eax_38);
						goto l00402EC3;
					}
					ebx_142 = ebx_142 + 0x00000014;
					Z_441 = cond(ebx_142 - eax_38);
					dwArg04_390 = ebx_142;
				}
l00402EC3:
				if (!Z_441)
				{
					word32 eax_449 = fn00403102();
					ebx_142 = eax_449;
					dwArg04_390 = eax_449;
					if (eax_449 != 0x00000000)
					{
l00402ED3:
						Mem432[Mem0[ebx_142 + 0x00000010:word32]:word32] = fn004031B3(ebx_142);
						if (Mem432[Mem432[ebx_142 + 0x00000010:word32]:word32] == 0xFFFFFFFF)
						{
l00402EE7:
							eax_162 = 0x00000000;
						}
						else
						{
l00402EEE:
							Mem85[0x0040570C:word32] = ebx_142;
							word32 eax_86 = Mem85[ebx_142 + 0x00000010:word32];
							word32 edx_358 = Mem85[eax_86 + 0x00000000:word32];
							word32 dwLoc08_342 = edx_358;
							if (edx_358 == 0xFFFFFFFF || ((eax_86 + 0x000000C4)[edx_358 * 0x00000004] & dwLoc0C_33 | (eax_86 + 0x00000044)[edx_358 * 0x00000004] & esi_350) == 0x00000000)
							{
								dwLoc08_342 = edx_358 & 0x00000000;
								word32 ecx_344 = eax_86 + 0x00000044;
								esi_350 = dwLoc10_32;
								if ((Mem85[eax_86 + 0x000000C4:word32] & dwLoc0C_33 | Mem85[eax_86 + 0x00000044:word32] & dwLoc10_32) == 0x00000000)
									do
									{
										ecx_344 = ecx_521 + 0x00000004;
										dwLoc08_342 = dwLoc08_342 + 0x00000001;
										word32 ecx_521 = ecx_344;
									} while ((Mem85[ecx_521 + 0x00000084:word32] & dwLoc0C_33 | dwLoc10_32 & Mem85[ecx_344 + 0x00000000:word32]) == 0x00000000);
								edx_358 = dwLoc08_342;
							}
							word32 edi_108 = 0x00000000;
							word32 ecx_97 = edx_358 *s 0x00000204 + 0x00000144 + eax_86;
							word32 ecx_100 = (eax_86 + 0x00000044)[edx_358 * 0x00000004] & esi_350;
							if (ecx_100 == 0x00000000)
							{
								ecx_100 = (eax_86 + 0x000000C4)[edx_358 * 0x00000004] & dwLoc0C_33;
								edi_108 = 0x00000020;
								goto l00402F75;
							}
l00402F75:
							while (ecx_100 >= 0x00000000)
							{
								ecx_100 = ecx_100 << 0x00000001;
								edi_108 = edi_108 + 0x00000001;
							}
							word32 edx_120 = (ecx_97 + 0x00000004)[edi_108 * 0x00000008];
							word32 ecx_122 = Mem85[edx_120 + 0x00000000:word32] - ecx_25;
							word32 esi_127 = (ecx_122 >> 0x00000004) - 0x00000001;
							if (esi_127 > 0x0000003F)
								esi_127 = 0x0000003F;
							if (esi_127 != edi_108)
							{
								word32 ecx_186 = Mem85[edx_120 + 0x00000004:word32];
								byte cl_187 = (byte) ecx_186;
								if (ecx_186 == Mem85[edx_120 + 0x00000008:word32])
									if (edi_108 < 0x00000020)
									{
										word32 ebx_287 = ~(0x80000000 >>u cl_187);
										(eax_86 + 0x00000044)[dwLoc08_342 * 0x00000004] = ebx_287 & (eax_86 + 0x00000044)[dwLoc08_342 * 0x00000004];
										word32 edi_286 = eax_86 + 0x00000004 + edi_108;
										byte v19_292 = Mem291[edi_286 + 0x00000000:byte] - 0x01;
										Mem293[edi_286 + 0x00000000:byte] = v19_292;
										if (v19_292 == 0x00)
										{
											Mem299[dwArg04_390 + 0x00000000:word32] = Mem293[dwArg04_390 + 0x00000000:word32] & ebx_287;
											ebx_142 = dwArg04_390;
										}
										else
										{
l00403009:
											ebx_142 = dwArg04_390;
										}
									}
									else
									{
										word32 ecx_306 = eax_86 + 0x000000C4 + dwLoc08_342 * 0x00000004;
										word32 ebx_307 = ~(0x80000000 >>u cl_187);
										Mem309[ecx_306 + 0x00000000:word32] = Mem85[ecx_306 + 0x00000000:word32] & ebx_307;
										word32 edi_305 = eax_86 + 0x00000004 + edi_108;
										byte v22_312 = Mem309[edi_305 + 0x00000000:byte] - 0x01;
										Mem313[edi_305 + 0x00000000:byte] = v22_312;
										if (v22_312 == 0x00)
										{
											Mem320[dwArg04_390 + 0x00000004:word32] = Mem313[dwArg04_390 + 0x00000004:word32] & ebx_307;
											ebx_142 = dwArg04_390;
										}
										else
											goto l00403009;
									}
								Mem199[Mem85[edx_120 + 0x00000008:word32] + 0x00000004:word32] = Mem85[edx_120 + 0x00000004:word32];
								Mem202[Mem199[edx_120 + 0x00000004:word32] + 0x00000008:word32] = Mem199[edx_120 + 0x00000008:word32];
								if (ecx_122 != 0x00000000)
								{
									Mem206[edx_120 + 0x00000004:word32] = (ecx_97 + 0x00000004)[esi_127 * 0x00000008];
									word32 ecx_205 = ecx_97 + esi_127 * 0x00000008;
									Mem207[edx_120 + 0x00000008:word32] = ecx_205;
									Mem208[ecx_205 + 0x00000004:word32] = edx_120;
									Mem210[Mem208[edx_120 + 0x00000004:word32] + 0x00000008:word32] = edx_120;
									if (Mem210[edx_120 + 0x00000004:word32] == Mem210[edx_120 + 0x00000008:word32])
									{
										byte cl_224 = Mem210[esi_127 + 0x00000004 + eax_86:byte];
										if (esi_127 < 0x00000020)
										{
											Mem233[esi_127 + 0x00000004 + eax_86:byte] = cl_224 + 0x01;
											byte cl_229 = cl_224 + 0x01;
											if (cl_224 == 0x00)
											{
												cl_229 = (byte) esi_127;
												Mem247[ebx_142 + 0x00000000:word32] = Mem233[ebx_142 + 0x00000000:word32] | 0x80000000 >>u cl_229;
											}
											(eax_86 + 0x00000044)[dwLoc08_342 * 0x00000004] = (eax_86 + 0x00000044)[dwLoc08_342 * 0x00000004] | 0x80000000 >>u cl_229;
										}
										else
										{
											Mem253[esi_127 + 0x00000004 + eax_86:byte] = cl_224 + 0x01;
											if (cl_224 == 0x00)
												Mem269[ebx_142 + 0x00000004:word32] = Mem253[ebx_142 + 0x00000004:word32] | 0x80000000 >>u (byte) (esi_127 - 0x00000020);
											word32 edi_255 = eax_86 + 0x000000C4 + dwLoc08_342 * 0x00000004;
											Mem261[edi_255 + 0x00000000:word32] = Mem253[edi_255 + 0x00000000:word32] | 0x80000000 >>u (byte) (esi_127 - 0x00000020);
										}
									}
l004030B0:
									if (ecx_122 != 0x00000000)
									{
										Mem184[edx_120 + 0x00000000:word32] = ecx_122;
										Mem185[ecx_122 - 0x00000004 + edx_120:word32] = ecx_122;
									}
								}
							}
							else
								goto l004030B0;
							word32 edx_145 = edx_120 + ecx_122;
							Mem147[edx_145 + 0x00000000:word32] = ecx_25 + 0x00000001;
							Mem148[edx_145 - 0x00000004 + ecx_25:word32] = ecx_25 + 0x00000001;
							word32 ecx_150 = Mem148[ecx_97 + 0x00000000:word32];
							Mem155[ecx_97 + 0x00000000:word32] = ecx_150 + 0x00000001;
							if (ecx_150 == 0x00000000 && (ebx_142 == Mem155[0x00405710:word32] && dwLoc08_342 == Mem155[0x00405708:word32]))
								Mem169[0x00405710:word32] = Mem155[0x00405710:word32] & 0x00000000;
							Mem161[eax_86 + 0x00000000:word32] = dwLoc08_342;
							eax_162 = edx_145 + 0x00000004;
						}
					}
					else
						goto l00402EE7;
				}
				else
					goto l00402ED3;
			}
			else
				goto l00402ED3;
		}
		else
			goto l00402EEE;
	}
	else
		goto l00402EEE;
	return eax_162;
}

word32 fn00403102()
{
	word32 eax_23;
	word32 eax_111 = Mem0[0x00405714:word32];
	word32 ecx_4 = Mem0[0x00405704:word32];
	if (eax_111 == ecx_4)
	{
		word32 eax_103 = HeapReAlloc(Mem0[0x00405948:word32], 0x00000000, Mem0[0x00405718:word32], ecx_4 + 0x00000050 + ecx_4 * 0x00000004 << 0x00000002);
		if (eax_103 != 0x00000000)
		{
			Mem108[0x00405704:word32] = Mem0[0x00405704:word32] + 0x00000010;
			Mem110[0x00405718:word32] = eax_103;
			eax_111 = Mem110[0x00405714:word32];
l00403145:
			word32 ecx_45 = Mem0[0x00405718:word32];
			Mem52[fp - 0x00000014:word32] = Mem0[0x00405948:word32];
			word32 esi_53 = ecx_45 + (eax_111 * 0x00000005) * 0x00000004;
			word32 eax_54 = HeapAlloc(0x00000000, 0x00000008, 0x000041C4);
			Mem58[esi_53 + 0x00000010:word32] = eax_54;
			if (eax_54 != 0x00000000)
			{
				Mem60[fp - 0x0000000C:word32] = 0x00000004;
				Mem62[fp - 0x00000010:word32] = 0x00002000;
				word32 eax_67 = VirtualAlloc(0x00000000, 0x00100000, 0x00000008, 0x000041C4);
				Mem71[esi_53 + 0x0000000C:word32] = eax_67;
				if (eax_67 == 0x00000000)
				{
					Mem73[fp - 0x0000000C:word32] = Mem71[esi_53 + 0x00000010:word32];
					Mem75[fp - 0x00000010:word32] = 0x00000000;
					Mem77[fp - 0x00000014:word32] = Mem75[0x00405948:word32];
					HeapFree(0x00100000, 0x00002000, 0x00000004);
l00403195:
					eax_23 = 0x00000000;
				}
				else
				{
					Mem81[esi_53 + 0x00000008:word32] = Mem71[esi_53 + 0x00000008:word32] | 0xFFFFFFFF;
					Mem83[esi_53 + 0x00000000:word32] = 0x00000000;
					Mem84[esi_53 + 0x00000004:word32] = 0x00000000;
					Mem86[0x00405714:word32] = Mem84[0x00405714:word32] + 0x00000001;
					word32 eax_87 = Mem86[esi_53 + 0x00000010:word32];
					Mem89[eax_87 + 0x00000000:word32] = Mem86[eax_87 + 0x00000000:word32] | 0xFFFFFFFF;
					eax_23 = esi_53;
				}
			}
			else
				goto l00403195;
		}
		else
			goto l00403195;
	}
	else
		goto l00403145;
	return eax_23;
}

word32 fn004031B3(word32 dwArg04)
{
	word32 esi_22 = Mem0[dwArg04 + 0x00000010:word32];
	word32 eax_23 = Mem0[dwArg04 + 0x00000008:word32];
	word32 ebx_25 = 0x00000000;
	while (eax_23 >= 0x00000000)
	{
		eax_23 = eax_23 << 0x00000001;
		ebx_25 = ebx_25 + 0x00000001;
	}
	word32 edx_46 = 0x0000003F;
	word32 eax_48 = ebx_25 *s 0x00000204 + 0x00000144 + esi_22;
	eax_52 = eax_48;
	do
	{
		word32 eax_52;
		Mem53[eax_52 + 0x00000008:word32] = eax_52;
		Mem54[eax_52 + 0x00000004:word32] = eax_52;
		eax_52 = eax_52 + 0x00000008;
		edx_46 = edx_46 - 0x00000001;
	} while (edx_46 != 0x00000000);
	word32 eax_140;
	Mem63[fp - 0x00000018:word32] = 0x00000004;
	word32 edi_65 = (ebx_25 << 0x0000000F) + Mem63[dwArg04 + 0x0000000C:word32];
	word32 eax_72 = VirtualAlloc(edi_65, 0x00008000, 0x00001000, 0x0000003F);
	if (eax_72 == 0x00000000)
		eax_140 = eax_72 | 0xFFFFFFFF;
	else
	{
		if (edi_65 <=u edi_65 + 0x00007000)
		{
			word32 eax_146 = edi_65 + 0x00000010;
			do
			{
				Mem150[eax_146 - 0x00000008:word32] = Mem63[eax_146 - 0x00000008:word32] | 0xFFFFFFFF;
				Mem153[eax_146 + 0x00000FEC:word32] = Mem150[eax_146 + 0x00000FEC:word32] | 0xFFFFFFFF;
				Mem156[eax_146 - 0x00000004:word32] = 0x00000FF0;
				Mem157[eax_146 + 0x00000000:word32] = eax_146 + 0x00000FFC;
				Mem159[eax_146 + 0x00000004:word32] = eax_146 + 0xFFFFEFFC;
				Mem160[eax_146 + 0x00000FE8:word32] = 0x00000FF0;
				eax_146 = eax_146 + 0x00001000;
			} while (eax_146 - 0x00000010 <=u edi_65 + 0x00007000);
		}
		Mem110[fp - 0x00000018:word32] = 0x00000001;
		Mem113[eax_48 + 0x000001FC:word32] = edi_65 + 0x0000000C;
		Mem114[edi_65 + 0x00000014:word32] = eax_48 + 0x000001F8;
		Mem116[eax_48 + 0x00000200:word32] = edi_65 + 0x0000700C;
		Mem117[edi_65 + 0x00007010:word32] = eax_48 + 0x000001F8;
		(esi_22 + 0x00000044)[ebx_25 * 0x00000004] = (esi_22 + 0x00000044)[ebx_25 * 0x00000004] & 0x00000000;
		(esi_22 + 0x000000C4)[ebx_25 * 0x00000004] = 0x00000004;
		byte al_122 = Mem121[esi_22 + 0x00000043:byte];
		Mem130[esi_22 + 0x00000043:byte] = al_122 + 0x01;
		if (al_122 == 0x00)
			Mem143[dwArg04 + 0x00000004:word32] = Mem130[dwArg04 + 0x00000004:word32] | 0x00000001;
		Mem137[dwArg04 + 0x00000008:word32] = Mem130[dwArg04 + 0x00000008:word32] & ~(0x80000000 >>u (byte) ebx_25);
		eax_140 = ebx_25;
	}
	return eax_140;
}

word32 fn004032AE(ptr32 ebxOut)
{
	word32 esp_24;
	word32 eax_19;
	word32 ebx_42 = 0x00000000;
	word32 esp_100 = fp - 0x0000000C;
	if (Mem0[0x004056C8:word32] == 0x00000000)
	{
		word32 eax_65 = LoadLibraryA(0x0040441C);
		esp_24 = fp - 0x0000000C;
		if (eax_65 != 0x00000000)
		{
			Mem79[fp - 0x00000010:word32] = 0x00404410;
			word32 eax_82 = GetProcAddress(eax_65, 0x0040441C);
			Mem87[0x004056C8:word32] = eax_82;
			esp_24 = fp - 0x0000000C;
			if (eax_82 != 0x00000000)
			{
				Mem89[fp - 0x00000010:word32] = 0x00404400;
				word32 eax_92 = GetProcAddress(eax_65, 0x00404410);
				Mem95[fp - 0x00000010:word32] = 0x004043EC;
				Mem98[0x004056CC:word32] = eax_92;
				Mem101[0x004056D0:word32] = GetProcAddress(eax_65, 0x00404410);
				esp_100 = fp - 0x0000000C;
l004032FD:
				eax_19 = Mem0[0x004056CC:word32];
				if (eax_19 != 0x00000000)
				{
					eax_19();
					ebx_42 = eax_19;
					if (eax_19 != 0x00000000)
					{
						word32 eax_56 = Mem0[0x004056D0:word32];
						if (eax_56 != 0x00000000)
						{
							Mem61[fp - 0x00000010:word32] = eax_19;
							esp_100 = fp - 0x00000010;
							eax_56();
							ebx_42 = eax_56;
						}
					}
				}
				word32 esp_44 = esp_100 - 0x00000004;
				Mem45[esp_44 + 0x00000000:word32] = Mem0[esp_44 + 0x00000018:word32];
				Mem47[esp_44 - 0x00000004:word32] = Mem45[esp_44 + 0x00000014:word32];
				Mem49[esp_44 - 0x00000008:word32] = Mem47[esp_44 + 0x00000010:word32];
				Mem51[esp_44 - 0x0000000C:word32] = ebx_42;
				esp_24 = esp_44 - 0x0000000C;
				Mem51[0x004056C8:word32]();
			}
			else
			{
l00403333:
				eax_19 = 0x00000000;
			}
		}
		else
			goto l00403333;
	}
	else
		goto l004032FD;
	word32 ebx_29;
	*ebxOut = Mem0[esp_24 + 0x00000004 + 0x00000004:word32];
	return eax_19;
}

word32 fn00403340(word32 dwArg00, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10)
{
	word32 ecx_298 = dwArg0C;
	if (dwArg0C != 0x00000000)
	{
		word32 ecx_220;
		word32 ecx_188;
		byte al_111;
		word32 ebx_114 = dwArg0C;
		word32 esi_131 = dwArg08;
		word32 edi_100 = dwArg04;
		if ((dwArg08 & 0x00000003) == 0x00000000)
		{
			ecx_220 = dwArg0C >>u 0x00000002;
			if (dwArg0C >>u 0x00000002 == 0x00000000)
			{
l00403385:
				do
				{
					byte al_134 = Mem0[esi_131 + 0x00000000:byte];
					Mem136[edi_100 + 0x00000000:byte] = al_134;
					word32 esi_135 = esi_131 + 0x00000001;
					word32 edi_137 = edi_100 + 0x00000001;
					if (al_111 == 0x00)
						;
					word32 ebx_148 = ebx_114 - 0x00000001;
				} while (ebx_148 != 0x00000001);
l00403392:
			}
		}
	}
}

void fn0040343E(word32 ebp, selector fs, word32 dwArg04, word32 dwArg08, byte bArg09, word32 dwArg0C, word32 dwArg10, word32 dwArg14, word32 dwArg18, word32 dwArg1C, word32 dwArg20)
{
	word32 eax_14 = Mem0[fs:0x00000000:word32];
	Mem17[fs:0x00000000:word32] = fp - 0x00000014;
	if (Mem17[0x004056F4:word32] == 0x00000000)
	{
		dwLoc40 = 0x00000000;
		dwLoc44 = 0x00000000;
		if (LCMapStringW(0x00000000, 0x00000100, 0x0040442C, 0x00000001, 0x00000000, 0x00000000) != 0x00000000)
		{
			Mem354[0x004056F4:word32] = 0x00000001;
l004034B4:
			if (dwArg10 > 0x00000000)
			{
				Mem323[fp - 0x00000040:word32] = dwArg10;
				Mem325[fp - 0x00000044:word32] = dwArg0C;
				dwArg10 = fn00403662(dwLoc44, dwLoc40);
			}
			word32 eax_112 = Mem17[0x004056F4:word32];
			if (eax_112 == 0x00000002)
			{
				Mem123[fp - 0x00000048:word32] = dwArg10;
				Mem129[fp - 0x00000050:word32] = dwArg08;
				Mem132[fp - 0x00000054:word32] = dwArg04;
				LCMapStringA(0x00000000, 0x00000100, dwArg0C, 0x00000001, dwArg14, dwArg18);
			}
			else if (eax_112 == 0x00000001)
			{
				if (dwArg1C == 0x00000000)
					dwArg1C = Mem17[0x004056EC:word32];
				Mem150[fp - 0x00000048:word32] = dwArg10;
				Mem161[fp - 0x00000050:word32] = (0x00000000 - (-dwArg20 == 0x00000000) & 0x00000008) + 0x00000001;
				Mem163[fp - 0x00000054:word32] = dwArg1C;
				word32 eax_164 = MultiByteToWideChar(0x00000000, 0x00000100, dwArg0C, 0x00000001, 0x00000000, 0x00000000);
				if (eax_164 != 0x00000000)
				{
					Mem170[fp - 0x00000008:word32] = 0x00000000;
					word32 eax_172 = eax_164 * 0x00000002 + 0x00000003;
					fn00403B40(DPB(eax_172, (byte) eax_172 & 0xFC, 0, 8), 0x00000000);
					Mem182[fp - 0x00000008:word32] = 0xFFFFFFFF;
					if (fp != 0x0000003C)
					{
						Mem188[fp - 0x00000040:word32] = eax_164;
						Mem190[fp - 0x00000044:word32] = fp - 0x0000003C;
						Mem192[fp - 0x00000048:word32] = dwArg10;
						Mem194[fp - 0x0000004C:word32] = dwArg0C;
						Mem196[fp - 0x00000050:word32] = 0x00000001;
						Mem198[fp - 0x00000054:word32] = dwArg1C;
						if (MultiByteToWideChar(Mem198[fp - 0x00000054:UINT], Mem198[fp - 80:DWORD], Mem198[fp - 76:LPCSTR], Mem198[fp - 72:int32], Mem198[fp - 68:LPWSTR], Mem198[fp - 64:int32]) != 0x00000000)
						{
							Mem205[fp - 0x00000040:word32] = 0x00000000;
							Mem207[fp - 0x00000044:word32] = 0x00000000;
							Mem209[fp - 0x00000048:word32] = eax_164;
							Mem211[fp - 0x0000004C:word32] = fp - 0x0000003C;
							Mem213[fp - 0x00000050:word32] = dwArg08;
							Mem215[fp - 0x00000054:word32] = dwArg04;
							word32 eax_216 = LCMapStringW(Mem215[fp - 0x00000054:LCID], Mem215[fp - 80:DWORD], Mem215[fp - 76:LPCWSTR], Mem215[fp - 72:int32], Mem215[fp - 68:LPWSTR], Mem215[fp - 64:int32]);
							if (eax_216 == 0x00000000)
								goto l004035CC;
							else if ((bArg09 & 0x04) == 0x00)
							{
								Mem258[fp - 0x00000008:word32] = 0x00000001;
								word32 eax_260 = eax_216 * 0x00000002 + 0x00000003;
								fn00403B40(DPB(eax_260, (byte) eax_260 & 0xFC, 0, 8), ebp);
								Mem270[fp - 0x00000008:word32] = 0xFFFFFFFF;
								if (fp != 0x0000003C)
								{
									Mem276[fp - 0x00000040:word32] = eax_216;
									Mem278[fp - 0x00000044:word32] = fp - 0x0000003C;
									Mem280[fp - 0x00000048:word32] = eax_164;
									Mem282[fp - 0x0000004C:word32] = fp - 0x0000003C;
									Mem284[fp - 0x00000050:word32] = dwArg08;
									Mem286[fp - 0x00000054:word32] = dwArg04;
									if (LCMapStringW(Mem286[fp - 0x00000054:LCID], Mem286[fp - 80:DWORD], Mem286[fp - 76:LPCWSTR], Mem286[fp - 72:int32], Mem286[fp - 68:LPWSTR], Mem286[fp - 64:int32]) != 0x00000000)
									{
										word32 esp_298;
										Mem295[fp - 0x00000040:word32] = 0x00000000;
										Mem297[fp - 0x00000044:word32] = 0x00000000;
										if (dwArg18 == 0x00000000)
										{
											Mem313[fp - 0x00000048:word32] = 0x00000000;
											Mem315[fp - 0x0000004C:word32] = 0x00000000;
											esp_298 = fp - 0x0000004C;
										}
										else
										{
											Mem317[fp - 0x00000048:word32] = dwArg18;
											Mem319[fp - 0x0000004C:word32] = dwArg14;
											esp_298 = fp - 0x0000004C;
										}
										word32 esp_299 = esp_298 - 0x00000004;
										Mem300[esp_299 + 0x00000000:word32] = eax_216;
										Mem302[esp_299 - 0x00000004:word32] = fp - 0x0000003C;
										Mem304[esp_299 - 0x00000008:word32] = 0x00000220;
										Mem306[esp_299 - 0x0000000C:word32] = dwArg1C;
										if (WideCharToMultiByte(Mem306[esp_299 - 0x0000000C:UINT], Mem306[esp_299 - 8:DWORD], Mem306[esp_299 - 4:LPCWSTR], Mem306[esp_299 + 0x00000000:int32], Mem306[esp_299 + 4:LPSTR], Mem306[esp_299 + 8:int32], Mem306[esp_299 + 12:LPCSTR], Mem306[esp_299 + 16:LPBOOL]) != 0x00000000)
											goto l0040365B;
										else
											goto l004035CC;
									}
									else
										goto l004035CC;
								}
								else
									goto l004035CC;
							}
							else if (dwArg18 == 0x00000000)
								goto l0040365B;
							else if (eax_216 <= dwArg18)
							{
								Mem242[fp - 0x00000040:word32] = dwArg18;
								Mem244[fp - 0x00000044:word32] = dwArg14;
								Mem246[fp - 0x00000048:word32] = eax_164;
								Mem248[fp - 0x0000004C:word32] = fp - 0x0000003C;
								Mem250[fp - 0x00000050:word32] = dwArg08;
								Mem252[fp - 0x00000054:word32] = dwArg04;
								if (LCMapStringW(Mem252[fp - 0x00000054:LCID], Mem252[fp - 80:DWORD], Mem252[fp - 76:LPCWSTR], Mem252[fp - 72:int32], Mem252[fp - 68:LPWSTR], Mem252[fp - 64:int32]) == 0x00000000)
l004035CC:
								else
l0040365B:
							}
							else
								goto l004035CC;
						}
						else
							goto l004035CC;
					}
					else
						goto l004035CC;
				}
				else
					goto l004035CC;
			}
			else
				goto l004035CC;
		}
		else
		{
			Mem356[fp - 0x00000040:word32] = 0x00000000;
			Mem358[fp - 0x00000044:word32] = 0x00000000;
			Mem360[fp - 0x00000048:word32] = 0x00000001;
			Mem362[fp - 0x0000004C:word32] = 0x00404428;
			Mem364[fp - 0x00000050:word32] = 0x00000100;
			Mem366[fp - 0x00000054:word32] = 0x00000000;
			if (LCMapStringA(0x00000000, 0x00000100, 0x0040442C, 0x00000001, 0x00000000, 0x00000000) != 0x00000000)
			{
				Mem373[0x004056F4:word32] = 0x00000002;
				goto l004034B4;
			}
			else
				goto l004035CC;
		}
	}
	else
		goto l004034B4;
	Mem60[fs:0x00000000:word32] = eax_14;
	return;
}

word32 fn00403662(word32 dwArg04, word32 dwArg08)
{
	word32 eax_16 = dwArg04;
	word32 ecx_12 = dwArg08 - 0x00000001;
	if (dwArg08 != 0x00000000)
		do
		{
			if (Mem0[eax_16 + 0x00000000:byte] == 0x00)
				break;
			eax_16 = eax_16 + 0x00000001;
			ecx_12 = ecx_40 - 0x00000001;
			word32 ecx_40 = ecx_12;
		} while (ecx_40 != 0x00000000);
	if (Mem0[eax_16 + 0x00000000:byte] == 0x00)
		return eax_16 - dwArg04;
	else
		return dwArg08;
}

void fn0040368D(word32 ebp, selector fs, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, word32 dwArg14, word32 dwArg18, word32 dwArg1C)
{
	word32 eax_14 = Mem0[fs:0x00000000:word32];
	Mem17[fs:0x00000000:word32] = fp - 0x00000014;
	word32 eax_239 = Mem17[0x004056F8:word32];
	if (eax_239 != 0x00000000)
		goto l004036FC;
	else if (GetStringTypeW(0x00000001, 0x0040442C, 0x00000001, fp - 0x00000020) != 0x00000000)
	{
		eax_239 = 0x00000001;
l004036F7:
		Mem241[0x004056F8:word32] = eax_239;
l004036FC:
		if (eax_239 == 0x00000002)
		{
			word32 eax_101 = dwArg18;
			if (dwArg18 == 0x00000000)
				eax_101 = Mem17[0x004056DC:word32];
			Mem112[fp - 0x00000040:word32] = dwArg0C;
			Mem118[fp - 0x00000048:word32] = dwArg04;
			Mem120[fp - 0x0000004C:word32] = eax_101;
			GetStringTypeA(0x00000000, 0x00000001, dwArg08, 0x00000001, dwArg10);
		}
		else if (eax_239 == 0x00000001)
		{
			if (dwArg14 == 0x00000000)
				dwArg14 = Mem17[0x004056EC:word32];
			Mem137[fp - 0x00000040:word32] = 0x00000000;
			Mem141[fp - 0x00000048:word32] = dwArg08;
			Mem150[fp - 0x0000004C:word32] = (0x00000000 - (-dwArg1C == 0x00000000) & 0x00000008) + 0x00000001;
			word32 eax_153 = MultiByteToWideChar(dwArg14, 0x00000000, 0x00000001, dwArg0C, 0x00000001, 0x00000000);
			if (eax_153 != 0x00000000)
			{
				Mem159[fp - 0x00000008:word32] = 0x00000000;
				word32 eax_162 = eax_153 * 0x00000002 + 0x00000003;
				fn00403B40(DPB(eax_162, (byte) eax_162 & 0xFC, 0, 8), 0x00000000);
				Mem172[fp - 0x0000003C:word32] = eax_153 * 0x00000002;
				Mem174[fp - 0x00000040:word32] = 0x00000000;
				Mem176[fp - 0x00000044:word32] = fp - 0x00000038;
				fn00403B70(dwArg00, bArg04, dwArg08);
				Mem182[fp - 0x00000008:word32] = 0xFFFFFFFF;
				if (fp != 0x00000038)
				{
					Mem187[fp - 0x0000003C:word32] = eax_153;
					Mem189[fp - 0x00000040:word32] = fp - 0x00000038;
					Mem191[fp - 0x00000044:word32] = dwArg0C;
					Mem193[fp - 0x00000048:word32] = dwArg08;
					Mem195[fp - 0x0000004C:word32] = 0x00000001;
					Mem197[fp - 0x00000050:word32] = dwArg14;
					word32 eax_198 = MultiByteToWideChar(Mem197[fp - 0x00000050:UINT], Mem197[fp - 76:DWORD], Mem197[fp - 72:LPCSTR], Mem197[fp - 68:int32], Mem197[fp - 64:LPWSTR], Mem197[fp - 60:int32]);
					if (eax_198 != 0x00000000)
					{
						Mem204[fp - 0x0000003C:word32] = dwArg10;
						Mem206[fp - 0x00000040:word32] = eax_198;
						Mem208[fp - 0x00000044:word32] = fp - 0x00000038;
						Mem210[fp - 0x00000048:word32] = dwArg04;
						GetStringTypeW(Mem210[fp - 0x00000048:DWORD], Mem210[fp - 68:LPCWSTR], Mem210[fp - 64:int32], Mem210[fp - 60:LPWORD]);
					}
					else
l004037C2:
				}
				else
					goto l004037C2;
			}
			else
				goto l004037C2;
		}
		else
			goto l004037C2;
	}
	else
	{
		Mem248[fp - 0x00000040:word32] = 0x00000001;
		Mem250[fp - 0x00000044:word32] = 0x00404428;
		Mem252[fp - 0x00000048:word32] = 0x00000001;
		if (GetStringTypeA(0x00000000, 0x00000001, 0x0040442C, 0x00000001, fp - 0x00000020) != 0x00000000)
		{
			eax_239 = 0x00000002;
			goto l004036F7;
		}
		else
			goto l004037C2;
	}
	Mem59[fs:0x00000000:word32] = eax_14;
	return;
}

word32 fn004037D6(word32 dwArg00)
{
	word32 eax_3 = Mem0[0x00405700:word32];
	if (eax_3 != 0x00000000)
	{
		eax_3();
		if (eax_3 != 0x00000000)
			return 0x00000001;
		else
		{
l004037EE:
			return 0x00000000;
		}
	}
	else
		goto l004037EE;
}

void fn00403800(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
fn00403800_entry:
l00403800:
	word32 esi_13 = dwArg08
	word32 edi_17 = dwArg04
	word32 eax_20 = dwArg0C + dwArg08
	branch dwArg04 <=u dwArg08 || dwArg04 >=u eax_20 l00403820
	goto l00403998
l00403818:
l00403820:
	branch (dwArg04 & 0x00000003) != 0x00000000 l0040383C
l00403828:
	word32 ecx_39 = dwArg0C >>u 0x00000002
	branch dwArg0C >>u 0x00000002 <u 0x00000008 l0040385C
l00403833:
	branch ecx_39 == 0x00000000 l00403835
l00403833_1:
	Mem57[edi_17 + 0x00000000:word32] = Mem0[esi_13 + 0x00000000:word32]
	esi_13 = esi_13 + 0x00000004
	edi_17 = edi_17 + 0x00000004
	ecx_39 = ecx_39 - 0x00000001
	goto l00403833
l00403835:
	switch (dwArg0C & 0x00000003) { l00403958 }
	goto l00403958
l0040383C:
	branch dwArg0C <u 0x00000004 l00403854
l00403848:
	switch (dwArg04 & 0x00000003) { }
l00403854:
	switch (dwArg0C - 0x00000004) { }
l0040385C:
	switch (dwArg0C >>u 0x00000002) { l0040393F }
l0040393F:
	switch (dwArg0C & 0x00000003) { l00403958 }
l00403958:
	return
l00403998:
	word32 esi_71 = dwArg0C - 0x00000004 + dwArg08
	word32 edi_72 = dwArg0C - 0x00000004 + dwArg04
	branch (edi_72 & 0x00000003) != 0x00000000 l004039CC
l004039A8:
	word32 ecx_100 = dwArg0C >>u 0x00000002
	branch dwArg0C >>u 0x00000002 <u 0x00000008 l004039C0
l004039B3:
l004039B4:
	branch ecx_100 == 0x00000000 l004039B6
l004039B4_1:
	Mem97[edi_72 + 0x00000000:word32] = Mem0[esi_71 + 0x00000000:word32]
	esi_71 = esi_71 - 0x00000004
	edi_72 = edi_72 - 0x00000004
	ecx_100 = ecx_100 - 0x00000001
	goto l004039B4
l004039B6:
	switch (dwArg0C & 0x00000003) { l00403AF0 }
	goto l00403AF0
l004039C0:
l004039CC:
	branch dwArg0C <u 0x00000004 l004039E4
l004039D8:
	switch (edi_72 & 0x00000003) { }
l004039E4:
	switch (dwArg0C) { l00403AF0 }
l00403AF0:
	return
fn00403800_exit:
}

void fn00403B40(word32 eax, word32 dwArg00)
{
	word32 ecx_10 = fp + 0x00000004;
	if (eax >=u 0x00001000)
		do
		{
			ecx_10 = ecx_10 - 0x00001000;
			eax = eax - 0x00001000;
		} while (eax >=u 0x00001000);
	Mem22[ecx_10 - eax - 0x00000004:word32] = dwArg00;
	return;
}

void fn00403B70(word32 dwArg04, byte bArg08, word32 dwArg0C)
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
					Mem84[edi_27 + 0x00000000:byte] = bArg08;
					edi_27 = edi_27 + 0x00000001;
					ecx_53 = ecx_53 - 0x00000001;
				} while (ecx_53 != 0x00000000);
			}
			word32 eax_62 = (eax_23 << 0x00000008) + eax_23;
			word32 eax_65 = (eax_62 << 0x00000010) + eax_62;
			al_22 = (byte) eax_65;
			edx_3 = edx_3 & 0x00000003;
			word32 ecx_69 = edx_3 >>u 0x00000002;
			if (ecx_69 != 0x00000000)
			{
l00403BB1:
				while (ecx_69 != 0x00000000)
				{
					Mem74[edi_27 + 0x00000000:word32] = eax_65;
					edi_27 = edi_27 + 0x00000004;
					ecx_69 = ecx_69 - 0x00000001;
				}
				if (edx_3 != 0x00000000)
				{
l00403BB7:
					do
					{
						Mem47[edi_27 + 0x00000000:byte] = al_22;
						edi_27 = edi_27 + 0x00000001;
						edx_3 = edx_3 - 0x00000001;
					} while (edx_3 != 0x00000000);
				}
			}
			else
				goto l00403BB7;
		}
		else
			goto l00403BB7;
		return;
	}
	else
		return;
}

