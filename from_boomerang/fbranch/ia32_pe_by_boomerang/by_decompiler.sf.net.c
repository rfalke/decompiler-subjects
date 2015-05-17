// subject.c
// Generated on TIMESTAMP by decompiling from_boomerang/fbranch/ia32_pe_by_boomerang/subject.exe
// using Decompiler version VERSION

#include "subject.h"

word32 fn00401000(word32 ebx, word32 ebp, word32 esi, word32 edi, selector fs, ptr32 ediOut)
{
	*ediOut = edi;
	word32 ebp_19;
	word32 ebx_20 = fn00401114(ebx, esi, edi, fs, dwLoc18, out ebp_19);
	Mem25[fp - 0x00000014:real64] = Mem0[ebp_19 - 0x00000008:real32];
	Mem29[fp - 0x0000001C:real64] = Mem25[ebp_19 - 0x00000004:real32];
	Mem31[fp - 0x00000020:word32] = 0x0040B044;
	word32 ebp_100 = fn004010E3(ebx_20, fs, ebp);
	word32 esp_101 = fp - 0x0000000C;
	if (Mem31[ebp_100 - 0x00000004:real32] == Mem31[ebp_100 - 0x00000008:real32])
	{
		Mem99[fp - 0x00000010:word32] = 0x0040B058;
		ebp_100 = fn004010E3(ebx_20, fs, ebp);
		esp_101 = fp - 0x0000000C;
	}
	if (Mem31[ebp_100 - 0x00000004:real32] != Mem31[ebp_100 - 0x00000008:real32])
	{
		word32 esp_93 = esp_101 - 0x00000004;
		Mem94[esp_93 + 0x00000000:word32] = 0x0040B060;
		ebp_100 = fn004010E3(ebx_20, fs, ebp);
		esp_101 = esp_93 + 0x00000004;
	}
	if (Mem31[ebp_100 - 0x00000004:real32] < Mem31[ebp_100 - 0x00000008:real32])
	{
		word32 esp_88 = esp_101 - 0x00000004;
		Mem89[esp_88 + 0x00000000:word32] = 0x0040B06C;
		ebp_100 = fn004010E3(ebx_20, fs, ebp);
		esp_101 = esp_88 + 0x00000004;
	}
	if (Mem31[ebp_100 - 0x00000004:real32] < Mem31[ebp_100 - 0x00000008:real32])
	{
		word32 esp_83 = esp_101 - 0x00000004;
		Mem84[esp_83 + 0x00000000:word32] = 0x0040B078;
		ebp_100 = fn004010E3(ebx_20, fs, ebp);
		esp_101 = esp_83 + 0x00000004;
	}
	if (Mem31[ebp_100 - 0x00000004:real32] <= Mem31[ebp_100 - 0x00000008:real32])
	{
		word32 esp_78 = esp_101 - 0x00000004;
		Mem79[esp_78 + 0x00000000:word32] = 0x0040B088;
		ebp_100 = fn004010E3(ebx_20, fs, ebp);
		esp_101 = esp_78 + 0x00000004;
	}
	if (Mem31[ebp_100 - 0x00000004:real32] > Mem31[ebp_100 - 0x00000008:real32])
	{
		Mem74[esp_101 - 0x00000004:word32] = 0x0040B09C;
		fn004010E3(ebx_20, fs, ebp);
	}
	return 0x00000000;
}

word32 fn004010E3(word32 ebx, selector fs, word32 dwArg00)
{
	word32 edx_14;
	word32 eax_15 = fn0040136E(0x0040B0E8, out edx_14);
	word32 esi_26;
	word32 edi_27;
	word32 edx_28 = fn004014C0(edx_14, 0x0040B0E8, eax_15, fs, dwArg00, out esi_26, out edi_27);
	Mem30[fp - 0x00000020:word32] = esi_26;
	Mem32[fp - 0x00000024:word32] = edi_27;
	return fn004013F6(edx_28, fs, dwArg00, dwArg04);
}

word32 fn00401114(word32 ebx, word32 esi, word32 edi, selector fs, word32 dwArg00, ptr32 ebpOut)
{
	word32 ebp_14;
	return fn00401DBC(ebx, esi, edi, fs, out ebp_14);
}

word32 fn00401182(word32 ebx, word32 ebp, word32 edi, selector fs, ptr32 ebpOut)
{
	*ebpOut = ebp;
	if (Mem0[0x0040BA30:word32] != 0x00000002)
		*ebpOut = fn00403391(ebx, ebp, edi, fs);
	Mem8[fp - 0x00000004:word32] = Mem0[fp + 0x00000000:word32];
	word32 eax_13 = fn0040321A(ebx, ebp, edi, fs, dwArg00);
	Mem15[fp - 0x00000008:word32] = 0x000000FF;
	Mem15[0x0040B0B8:word32]();
	return eax_13;
}

void fn004011A7(word32 ebx, word32 esi, word32 edi, selector fs)
{
	word32 ebp_11 = fn00403BD0(ebx, esi, edi, fs, dwLoc0C, 0x004090D8, 0x00000018);
	fn00403D30(0x00000094, 0x00000018);
	Mem14[ebp_11 - 0x00000018:word32] = fp - 0x00000008;
	Mem16[fp - 0x00000008:word32] = 0x00000094;
	Mem18[fp - 0x0000000C:word32] = fp - 0x00000008;
	GetVersionExA(Mem18[fp - 0x0000000C:LPOSVERSIONINFOA]);
	word32 ecx_21 = Mem18[fp + 0x00000008:word32];
	Mem22[0x0040BA5C:word32] = ecx_21;
	word32 eax_23 = Mem22[fp - 0x00000004:word32];
	Mem25[0x0040BA68:word32] = eax_23;
	word32 edx_26 = Mem25[fp + 0x00000000:word32];
	Mem27[0x0040BA6C:word32] = edx_26;
	word32 esi_28 = Mem27[fp + 0x00000004:word32];
	Mem30[0x0040BA60:word32] = esi_28 & 0x00007FFF;
	word32 esi_235 = esi_28 & 0x00007FFF;
	if (ecx_21 != 0x00000002)
	{
		esi_235 = esi_28 & 0x00007FFF | 0x00008000;
		Mem238[0x0040BA60:word32] = esi_235;
	}
	Mem40[0x0040BA64:word32] = (eax_23 << 0x00000008) + edx_26;
	Mem43[fp - 0x0000000C:word32] = 0x00000000;
	word32 eax_44 = GetModuleHandleA(Mem43[fp - 0x0000000C:LPCSTR]);
	if (Mem43[eax_44 + 0x00000000:word16] == 0x5A4D)
	{
		word32 ecx_195 = Mem43[eax_44 + 0x0000003C:word32] + eax_44;
		if (Mem43[ecx_195 + 0x00000000:word32] == 0x00004550)
		{
			word32 eax_209;
			byte Z_206;
			word32 eax_199 = (word32) Mem43[ecx_195 + 0x00000018:word16];
			if (eax_199 == 0x0000010B)
				if (Mem43[ecx_195 + 0x00000074:word32] >u 0x0000000E)
				{
					eax_209 = 0x00000000;
					Z_206 = cond(Mem43[ecx_195 + 0x000000E8:word32]);
					goto l00401266;
				}
				else
					goto l00401240;
			else if (eax_199 != 0x0000020B || Mem43[ecx_195 + 0x00000084:word32] <=u 0x0000000E)
			{
l00401240:
				Mem192[ebp_11 - 0x0000001C:word32] = 0x00000000;
			}
			else
			{
				eax_209 = 0x00000000;
				Z_206 = cond(Mem43[ecx_195 + 0x000000F8:word32]);
l00401266:
				Mem212[ebp_11 - 0x0000001C:word32] = DPB(eax_209, Z_206, 0, 8);
			}
		}
		else
			goto l00401240;
	}
	else
		goto l00401240;
	Mem57[fp - 0x0000000C:word32] = 0x00000000;
	word32 esp_100 = fp - 0x00000008;
	if (fn00403B7F(dwArg00) == 0x00000000)
	{
		if (Mem57[0x0040BA30:word32] != 0x00000002)
			ebp_11 = fn00403391(ebx, ebp_11, 0x00000000, fs);
		Mem175[fp - 0x0000000C:word32] = 0x0000001C;
		fn0040321A(ebx, ebp_11, 0x00000000, fs, dwArg00);
		Mem178[fp - 0x00000010:word32] = 0x000000FF;
		fn0040307F(0x00000018);
		esp_100 = fp - 0x00000008;
	}
	word32 ebp_70;
	word32 edi_71;
	word32 ebx_72 = fn00403ADD(ebx, esi_235, 0x00000000, fs, out ebp_70, out edi_71);
	Mem73[ebp_70 - 0x00000004:word32] = edi_71;
	word32 ebp_101;
	if (fn00403932(ebx_72, out ebp_101) < 0x00000000)
	{
		word32 esp_165 = esp_100 - 0x00000004;
		Mem166[esp_165 + 0x00000000:word32] = 0x0000001B;
		fn00401182(ebx_72, ebp_101, edi_71, fs, out ebp_101);
		esp_100 = esp_165 + 0x00000004;
	}
	Mem83[0x0040D004:word32] = GetCommandLineA();
	Mem85[0x0040BA28:word32] = fn00403810(ebx_72);
	word32 eax_161 = fn0040376E(ebp_101, fs);
	if (eax_161 < 0x00000000)
	{
		word32 esp_158 = esp_100 - 0x00000004;
		Mem159[esp_158 + 0x00000000:word32] = 0x00000008;
		eax_161 = fn00401182(ebx_72, ebp_101, edi_71, fs, out ebp_101);
		esp_100 = esp_158 + 0x00000004;
	}
	if (fn0040353B(eax_161, ebx_72, ebp_101, edi_71, fs) < 0x00000000)
	{
		word32 esp_152 = esp_100 - 0x00000004;
		Mem153[esp_152 + 0x00000000:word32] = 0x00000009;
		fn00401182(ebx_72, ebp_101, edi_71, fs, out ebp_101);
		esp_100 = esp_152 + 0x00000004;
	}
	word32 esp_102 = esp_100 - 0x00000004;
	Mem103[esp_102 + 0x00000000:word32] = 0x00000001;
	word32 eax_104 = fn004030AF();
	Mem108[ebp_101 - 0x00000024:word32] = eax_104;
	word32 esp_107 = esp_102 + 0x00000004;
	if (eax_104 != edi_71)
	{
		Mem147[esp_102 + 0x00000000:word32] = eax_104;
		fn00401182(ebx_72, ebp_101, edi_71, fs, out ebp_101);
		esp_107 = esp_102 + 0x00000004;
	}
	word32 eax_114 = Mem108[0x0040BA7C:word32];
	Mem115[0x0040BA80:word32] = eax_114;
	word32 esp_116 = esp_107 - 0x00000004;
	Mem117[esp_116 + 0x00000000:word32] = eax_114;
	Mem119[esp_116 - 0x00000004:word32] = Mem117[0x0040BA74:word32];
	Mem121[esp_116 - 0x00000008:word32] = Mem119[0x0040BA70:word32];
	word32 edi_122;
	word32 eax_123 = fn00401000(ebx_72, ebp_101, esi_235, edi_71, fs, out edi_122);
	Mem126[ebp_101 - 0x00000028:word32] = eax_123;
	if (Mem126[ebp_101 - 0x0000001C:word32] == edi_122)
	{
		Mem145[esp_116 + 0x00000000:word32] = eax_123;
		fn004031DA(edi_122, 0x00000018);
	}
	word32 ebp_130 = fn004031FC(edi_122);
	Mem132[ebp_130 - 0x00000004:word32] = Mem126[ebp_130 - 0x00000004:word32] | 0xFFFFFFFF;
	word32 ebp_139;
	word32 esi_140;
	word32 edi_141;
	word16 cx_142;
	fn00403C0B(ebp_130, fs, 0x00000018, dwArg00, dwArg04, dwArg08, out ebp_139, out esi_140, out edi_141, out cx_142);
	return;
}

word32 fn0040136E(word32 dwArg04, ptr32 edxOut)
{
	*edxOut = edx;
	if (fn00403DF1(Mem0[dwArg04 + 0x00000010:word32]) != 0x00000000)
	{
		word32 eax_111;
		if (dwArg04 == 0x0040B0E8)
		{
			eax_111 = 0x00000000;
l00401397:
			Mem49[0x0040BA3C:word32] = Mem0[0x0040BA3C:word32] + 0x00000001;
			if ((Mem49[dwArg04 + 0x0000000C:word16] & 0x010C) == 0x0000)
			{
				word32 edi_57 = eax_111 * 0x00000004 + 0x0040BA34;
				if (Mem49[edi_57 + 0x00000000:word32] == 0x00000000)
				{
					word32 edx_94;
					word32 eax_95 = fn00403DDF(dwLoc14, out edx_94);
					Mem101[edi_57 + 0x00000000:word32] = eax_95;
					if (eax_95 == 0x00000000)
					{
						Mem104[fp - 0x00000010:word32] = 0x00000002;
						Mem105[dwArg04 + 0x00000008:word32] = dwArg04 + 0x00000014;
						Mem106[dwArg04 + 0x00000000:word32] = dwArg04 + 0x00000014;
						Mem109[dwArg04 + 0x00000018:word32] = 0x00001000;
						Mem110[dwArg04 + 0x00000004:word32] = 0x00001000;
					}
					else
					{
l004013D8:
						word32 edi_86 = Mem49[edi_57 + 0x00000000:word32];
						Mem87[dwArg04 + 0x00000008:word32] = edi_86;
						Mem88[dwArg04 + 0x00000000:word32] = edi_86;
						Mem89[dwArg04 + 0x00000018:word32] = 0x00001000;
						Mem90[dwArg04 + 0x00000004:word32] = 0x00001000;
					}
				}
				else
					goto l004013D8;
				Mem66[dwArg04 + 0x0000000C:word16] = Mem49[dwArg04 + 0x0000000C:word16] | 0x1102;
				return 0x00000001;
			}
			else
			{
l004013F2:
				return 0x00000000;
			}
		}
		else if (dwArg04 == 0x0040B108)
		{
			eax_111 = 0x00000001;
			goto l00401397;
		}
		else
			goto l004013F2;
	}
	else
		goto l004013F2;
}

word32 fn004013F6(word32 edx, selector fs, word32 dwArg04, word32 dwArg08)
{
	if (dwArg04 != 0x00000000)
		if ((Mem0[dwArg08 + 0x0000000D:byte] & 0x10) != 0x00)
		{
			ebp = fn00403E18(edx, fs, dwArg08);
			Mem44[dwArg08 + 0x0000000D:byte] = Mem0[dwArg08 + 0x0000000D:byte] & 0xEE;
			Mem47[dwArg08 + 0x00000018:word32] = Mem44[dwArg08 + 0x00000018:word32] & 0x00000000;
			Mem50[dwArg08 + 0x00000000:word32] = Mem47[dwArg08 + 0x00000000:word32] & 0x00000000;
			Mem53[dwArg08 + 0x00000008:word32] = Mem50[dwArg08 + 0x00000008:word32] & 0x00000000;
l0040142F:
		}
	else if ((Mem0[dwArg08 + 0x0000000D:byte] & 0x10) != 0x00)
	{
		ebp = fn00403E18(edx, fs, dwArg08);
		goto l0040142F;
	}
	return ebp;
}

word32 fn00401432(word32 ecx, word32 edx, word32 esi, byte al, selector fs, ptr32 ebpOut, ptr32 ediOut)
{
	*ebpOut = ebp;
	*ediOut = edi;
	if ((Mem0[ecx + 0x0000000C:byte] & 0x40) != 0x00 && Mem0[ecx + 0x00000008:word32] == 0x00000000)
	{
l00401462:
		Mem36[esi + 0x00000000:word32] = Mem0[esi + 0x00000000:word32] + 0x00000001;
		return edx;
	}
	else
	{
		word32 eax_49;
		word32 v8_40 = Mem0[ecx + 0x00000004:word32] - 0x00000001;
		Mem41[ecx + 0x00000004:word32] = v8_40;
		if (v8_40 >= 0x00000000)
		{
			edx = Mem41[ecx + 0x00000000:word32];
			Mem60[edx + 0x00000000:byte] = al;
			Mem62[ecx + 0x00000000:word32] = Mem60[ecx + 0x00000000:word32] + 0x00000001;
			eax_49 = (word32) al;
		}
		else
			eax_49 = fn00403F26(edx, fs, ecx, out edx);
		if (eax_49 == 0xFFFFFFFF)
		{
			Mem55[esi + 0x00000000:word32] = Mem41[esi + 0x00000000:word32] | eax_49;
			return edx;
		}
		else
			goto l00401462;
	}
}

word32 fn004014C0(word32 edx, word32 esi, word32 edi, selector fs, word32 dwArg08, ptr32 esiOut, ptr32 ediOut)
{
	word32 ebp_130 = fp + 0xFFFFFE28;
	word32 esp_108 = fp - 0x0000025C;
	byte bl_132 = Mem0[dwArg08 + 0x00000000:byte];
	word32 ecx_137 = 0x00000000;
	if (bl_132 != 0x00)
	{
		word32 esp_100 = fp - 0x00000264;
		word32 edi_131 = dwArg08;
		Mem86[ebp_130 + 0x000001E0:word32] = edi_131 + 0x00000001;
		while (Mem0[ebp_130 - 0x0000004C:word32] >= 0x00000000)
		{
			word32 eax_113;
			if (bl_132 >= 0x20 && bl_132 <= 0x78)
				eax_113 = (int32) Mem86[(int32) bl_132 + 0x004090C8:byte] & 0x0000000F;
			else
				eax_113 = 0x00000000;
			word32 eax_114 = (int32) (ecx_137 + 0x004090E8)[eax_113 * 0x08];
			word32 esp_115 = esp_100 - 0x00000004;
			Mem116[esp_115 + 0x00000000:word32] = 0x00000007;
			word32 ecx_119 = Mem116[esp_115 + 0x00000000:word32];
			Mem123[ebp_130 - 0x00000070:word32] = eax_114 >> 0x00000004;
			esp_100 = esp_115 + 0x00000004;
			if (eax_114 >> 0x00000004 <=u ecx_119)
			{
				word32 ecx_138 = Mem123[0x0040B490:word32];
				Mem140[ebp_130 - 0x0000005C:word32] = Mem123[ebp_130 - 0x0000005C:word32] & 0x00000000;
				if (((ecx_138 + 0x00000001)[(word32) bl_132 * 0x02] & 0x80) != 0x00)
				{
					word32 edi_161;
					edx = fn00401432(Mem140[ebp_130 + 0x000001DC:word32], edx, ebp_130 - 0x0000004C, bl_132, fs, out ebp_130, out edi_161);
					bl_132 = Mem140[edi_161 + 0x00000000:byte];
					Mem167[ebp_130 + 0x000001E0:word32] = edi_161 + 0x00000001;
				}
				word32 edi_155;
				edx = fn00401432(Mem140[ebp_130 + 0x000001DC:word32], edx, ebp_130 - 0x0000004C, bl_132, fs, out ebp_130, out edi_155);
			}
			edi_131 = Mem123[ebp_130 + 0x000001E0:word32];
			bl_132 = Mem123[edi_131 + 0x00000000:byte];
			if (bl_132 == 0x00)
				break;
			ecx_137 = Mem123[ebp_130 - 0x00000070:word32];
			Mem86[ebp_130 + 0x000001E0:word32] = edi_131 + 0x00000001;
		}
		word32 esp_102 = esp_100 + 0x00000004;
		edi = Mem86[esp_102 + 0x00000004:word32];
		esi = Mem86[esp_102 + 0x00000008:word32];
		esp_108 = esp_102 + 0x0000000C;
	}
	word32 edx_50;
	word32 ebx_51;
	word32 ebp_52;
	word32 esi_53;
	word32 edi_54;
	fn004041A2(Mem0[ebp_130 + 0x000001D0:word32], Mem0[esp_108 + 0x00000000:word32], esi, edi, fs, out edx_50, out ebx_51, out ebp_52, out esi_53, out edi_54);
	return edx_50;
}

word32 fn00401D74(word32 eax, word32 ebx, word32 edi, selector fs, ptr32 ebpOut, ptr32 ediOut)
{
	*ebpOut = ebp;
	*ediOut = edi;
	word32 eax_15;
	word32 esi_21 = eax;
	if (Mem0[0x0040B4A0:word32] > 0x00000001)
	{
		word32 ebx_38;
		word32 edi_39;
		eax_15 = fn00404318(ebx, eax, edi, fs, eax, out ebx_38, out edi_39);
	}
	else
		eax_15 = (word32) Mem0[0x0040B490:word32][eax * 0x02] & 0x00000004;
	if (eax_15 == 0x00000000)
		esi_21 = (eax & 0xFFFFFFDF) - 0x00000007;
	return esi_21;
}

word32 fn00401DA6(word32 edx)
{
	word32 v4_4 = Mem0[edx + 0x00000004:word32] - 0x00000001;
	Mem5[edx + 0x00000004:word32] = v4_4;
	if (v4_4 >= 0x00000000)
	{
		word32 ecx_13 = Mem5[edx + 0x00000000:word32];
		word32 eax_14 = (word32) Mem5[ecx_13 + 0x00000000:byte];
		Mem17[edx + 0x00000000:word32] = ecx_13 + 0x00000001;
		return eax_14;
	}
	else
		return fn00404396(edx);
}

word32 fn00401DBC(word32 ebx, word32 esi, word32 edi, selector fs, ptr32 ebpOut)
{
	word32 ebp_101 = fn00403BD0(ebx, esi, edi, fs, dwLoc0C, 0x00409160, 0x000001CC);
	Mem14[ebp_101 - 0x0000001C:word32] = Mem0[0x0040B498:word32];
	Mem18[ebp_101 + 0xFFFFFE44:word32] = 0x00000000;
	Mem19[ebp_101 + 0xFFFFFE28:word32] = 0x00000000;
	Mem20[ebp_101 + 0xFFFFFE50:word32] = 0x00000000;
	Mem21[ebp_101 + 0xFFFFFE6C:word32] = 0x00000000;
	Mem22[ebp_101 + 0xFFFFFE6B:byte] = 0x00;
	Mem23[ebp_101 + 0xFFFFFE7C:word32] = 0x00000000;
	Mem24[ebp_101 + 0xFFFFFE48:word32] = 0x00000000;
	word32 esp_1004 = fp - 0x00000008;
l00401DFF:
	word32 esi_102 = Mem24[ebp_101 + 0x0000000C:word32];
l00401E02:
	byte al_81 = Mem24[esi_102 + 0x00000000:byte];
	if (al_81 != 0x00)
	{
		word32 eax_181;
		word32 eax_171 = (word32) al_81;
		if (Mem24[0x0040B4A0:word32] > 0x00000001)
		{
			word32 esp_2454 = esp_1004 - 0x00000004;
			Mem2455[esp_2454 + 0x00000000:word32] = 0x00000008;
			Mem2457[esp_2454 - 0x00000004:word32] = eax_171;
			word32 edi_2459;
			eax_181 = fn00404318(ebx, esi_102, edi, fs, dwArg00, out ebx, out edi_2459);
			esp_1004 = esp_2454 + 0x00000004;
		}
		else
			eax_181 = (word32) Mem24[0x0040B490:word32][eax_171 * 0x02] & 0x00000008;
		edi = 0x00000000;
		if (eax_181 != 0x00000000)
		{
			Mem190[ebp_101 + 0xFFFFFE7C:word32] = Mem24[ebp_101 + 0xFFFFFE7C:word32] - 0x00000001;
			do
			{
				Mem197[ebp_101 + 0xFFFFFE7C:word32] = Mem190[ebp_101 + 0xFFFFFE7C:word32] + 0x00000001;
				word32 eax_200 = fn00401DA6(Mem197[ebp_101 + 0x00000008:word32]);
				word32 esp_202 = esp_1004 - 0x00000004;
				Mem203[esp_202 + 0x00000000:word32] = eax_200;
				word32 esi_206;
				word32 eax_208 = fn004044E0(ebx, eax_200, edi, fs, 0x000001CC, dwArg00, out ebx, out ebp_101, out esi_206, out edi);
				esp_1004 = esp_202 + 0x00000004;
			} while (eax_208 != 0x00000000);
			if (esi_206 != 0xFFFFFFFF)
			{
				Mem242[esp_202 + 0x00000000:word32] = Mem203[ebp_101 + 0x00000008:word32];
				Mem244[esp_202 - 0x00000004:word32] = esi_206;
				fn00404474(eax_208, dwArg00, dwArg04);
				esp_1004 = esp_202 + 0x00000004;
				goto l00401E68;
			}
l00401E68:
			do
			{
				Mem225[ebp_101 + 0x0000000C:word32] = Mem203[ebp_101 + 0x0000000C:word32] + 0x00000001;
				word32 esp_229 = esp_1004 - 0x00000004;
				Mem230[esp_229 + 0x00000000:word32] = (word32) Mem225[Mem225[ebp_101 + 0x0000000C:word32]:byte];
				esp_1004 = esp_229 + 0x00000004;
				word32 ebx_2476 = ebx;
				word32 esi_2477 = esi_206;
				word32 edi_2478 = edi;
			} while (fn004044E0(ebx_2476, esi_2477, edi_2478, fs, 0x000001CC, dwArg00, out ebx, out ebp_101, out esi_206, out edi) != 0x00000000);
			goto l00401DFF;
		}
		else
		{
			word32 eax_1217;
			byte Z_2416;
			esi_102 = Mem24[ebp_101 + 0x0000000C:word32];
			if (Mem24[esi_102 + 0x00000000:byte] == 0x25)
			{
				Mem310[ebp_101 + 0xFFFFFE60:word32] = 0x00000000;
				Mem311[ebp_101 + 0xFFFFFE68:byte] = 0x00;
				Mem312[ebp_101 + 0xFFFFFE64:word32] = 0x00000000;
				Mem313[ebp_101 + 0xFFFFFE4C:word32] = 0x00000000;
				Mem314[ebp_101 + 0xFFFFFE74:word32] = 0x00000000;
				Mem315[ebp_101 + 0xFFFFFE5F:byte] = 0x00;
				Mem316[ebp_101 + 0xFFFFFE69:byte] = 0x00;
				Mem317[ebp_101 + 0xFFFFFE72:byte] = 0x00;
				Mem318[ebp_101 + 0xFFFFFE83:byte] = 0x00;
				Mem319[ebp_101 + 0xFFFFFE6A:byte] = 0x00;
				Mem320[ebp_101 + 0xFFFFFE7B:byte] = 0x00;
				Mem321[ebp_101 + 0xFFFFFE73:byte] = 0x01;
				Mem322[ebp_101 + 0xFFFFFE38:word32] = 0x00000000;
				do
				{
					esi_102 = esi_102 + 0x00000001;
					word32 ebx_2371 = (word32) Mem322[esi_102 + 0x00000000:byte];
					word32 eax_336 = (word32) (byte) ebx_2371;
					if (Mem322[0x0040B4A0:word32] > 0x00000001)
					{
						word32 esp_2367 = esp_1004 - 0x00000004;
						Mem2368[esp_2367 + 0x00000000:word32] = 0x00000004;
						Mem2370[esp_2367 - 0x00000004:word32] = eax_336;
						eax_1217 = fn00404318(ebx_2371, esi_102, edi, fs, dwArg00, out ebx_2371, out edi);
						esp_1004 = esp_2367 + 0x00000004;
					}
					else
						eax_1217 = (word32) Mem322[0x0040B490:word32][eax_336 * 0x02] & 0x00000004;
					if (eax_1217 != 0x00000000)
					{
						Mem2259[ebp_101 + 0xFFFFFE4C:word32] = Mem322[ebp_101 + 0xFFFFFE4C:word32] + 0x00000001;
						eax_1217 = edi * 0x00000005;
						edi = ebx_2371 - 0x00000030 + eax_1217 * 0x00000002;
					}
					else if (ebx_2371 <= 0x0000004E)
						if (ebx_2371 != 0x0000004E)
							if (ebx_2371 != 0x0000002A)
								if (ebx_2371 != 0x00000046)
									if (ebx_2371 == 0x00000049)
									{
										byte cl_2297 = Mem322[esi_102 + 0x00000001:byte];
										if (cl_2297 == 0x36)
										{
											eax_1217 = esi_102 + 0x00000002;
											if (Mem322[esi_102 + 0x00000002:byte] == 0x34)
											{
												Mem2337[ebp_101 + 0xFFFFFE38:word32] = Mem322[ebp_101 + 0xFFFFFE38:word32] + 0x00000001;
												Mem2339[ebp_101 + 0xFFFFFE54:word32] = Mem2337[ebp_101 + 0xFFFFFE54:word32] & 0x00000000;
												Mem2342[ebp_101 + 0xFFFFFE58:word32] = Mem2339[ebp_101 + 0xFFFFFE58:word32] & 0x00000000;
												esi_102 = esi_102 + 0x00000002;
											}
											else
											{
l00401F79:
												if (cl_2297 == 0x33)
												{
													eax_1217 = esi_102 + 0x00000002;
													if (Mem322[esi_102 + 0x00000002:byte] == 0x32)
														esi_102 = esi_102 + 0x00000002;
													else
													{
l00401F8A:
														if (cl_2297 != 0x64 && (cl_2297 != 0x69 && (cl_2297 != 0x6F && cl_2297 != 0x78)))
															if (cl_2297 == 0x58)
																;
															else
																goto l00401FBC;
													}
												}
												else
													goto l00401F8A;
											}
										}
										else
											goto l00401F79;
									}
									else if (ebx_2371 == 0x0000004C)
										Mem2295[ebp_101 + 0xFFFFFE73:byte] = Mem322[ebp_101 + 0xFFFFFE73:byte] + 0x01;
									else
									{
l00401FBC:
										Mem2282[ebp_101 + 0xFFFFFE83:byte] = Mem322[ebp_101 + 0xFFFFFE83:byte] + 0x01;
										Mem2284[ebp_101 + 0xFFFFFE83:byte] = Mem2282[ebp_101 + 0xFFFFFE83:byte] + 0x01;
									}
							else
								Mem2346[ebp_101 + 0xFFFFFE72:byte] = Mem322[ebp_101 + 0xFFFFFE72:byte] + 0x01;
					else if (ebx_2371 == 0x00000068)
					{
						Mem2363[ebp_101 + 0xFFFFFE73:byte] = Mem322[ebp_101 + 0xFFFFFE73:byte] - 0x01;
						Mem2365[ebp_101 + 0xFFFFFE7B:byte] = Mem2363[ebp_101 + 0xFFFFFE7B:byte] - 0x01;
					}
					else if (ebx_2371 == 0x0000006C)
					{
						Mem2360[ebp_101 + 0xFFFFFE73:byte] = Mem322[ebp_101 + 0xFFFFFE73:byte] + 0x01;
						goto l00401FCA;
					}
					else if (ebx_2371 != 0x00000077)
						goto l00401FBC;
					else
					{
l00401FCA:
						Mem2355[ebp_101 + 0xFFFFFE7B:byte] = Mem322[ebp_101 + 0xFFFFFE7B:byte] + 0x01;
					}
				} while (Mem322[ebp_101 + 0xFFFFFE83:byte] == 0x00);
				Mem368[ebp_101 + 0xFFFFFE74:word32] = edi;
				Mem369[ebp_101 + 0x0000000C:word32] = esi_102;
				if (Mem369[ebp_101 + 0xFFFFFE72:byte] == 0x00)
				{
					word32 eax_2245 = Mem369[ebp_101 + 0x00000010:word32];
					Mem2246[ebp_101 + 0xFFFFFE24:word32] = eax_2245;
					Mem2252[ebp_101 + 0x00000010:word32] = eax_2245 + 0x00000004;
					ebx = Mem2252[eax_2245 + 0x00000000:word32];
					Mem2255[ebp_101 + 0xFFFFFE50:word32] = ebx;
					eax_1217 = eax_2245 + 0x00000004;
				}
				else
					ebx = Mem369[ebp_101 + 0xFFFFFE50:word32];
				Mem378[ebp_101 + 0xFFFFFE83:byte] = 0x00;
				if (Mem378[ebp_101 + 0xFFFFFE7B:byte] == 0x00)
				{
					byte al_2233 = Mem378[esi_102 + 0x00000000:byte];
					eax_1217 = DPB(eax_1217, al_2233, 0, 8);
					if (al_2233 != 0x53)
					{
						Mem2244[ebp_101 + 0xFFFFFE7B:byte] = 0xFF;
						if (al_2233 == 0x43)
						{
l0040203E:
							Mem2241[ebp_101 + 0xFFFFFE7B:byte] = 0x01;
						}
					}
					else
						goto l0040203E;
				}
				word32 edi_385 = (word32) Mem378[esi_102 + 0x00000000:byte];
				Mem387[ebp_101 + 0xFFFFFE40:word32] = edi_385 | 0x00000020;
				edi = edi_385 | 0x00000020;
				if ((edi_385 | 0x00000020) != 0x0000006E)
					if ((edi_385 | 0x00000020) != 0x00000063 && (edi_385 | 0x00000020) != 0x0000007B)
					{
l00402060:
						do
						{
							Mem2211[ebp_101 + 0xFFFFFE7C:word32] = Mem387[ebp_101 + 0xFFFFFE7C:word32] + 0x00000001;
							word32 eax_2214 = fn00401DA6(Mem2211[ebp_101 + 0x00000008:word32]);
							word32 esp_2216 = esp_1004 - 0x00000004;
							Mem2217[esp_2216 + 0x00000000:word32] = eax_2214;
							word32 esi_2220;
							eax_1217 = fn004044E0(ebx, eax_2214, edi, fs, 0x000001CC, dwArg00, out ebx, out ebp_101, out esi_2220, out edi);
							esp_1004 = esp_2216 + 0x00000004;
						} while (eax_1217 != 0x00000000);
						Mem2231[ebp_101 + 0xFFFFFE6C:word32] = esi_2220;
						esi_102 = Mem2231[ebp_101 + 0x0000000C:word32];
					}
					else
					{
						Mem2196[ebp_101 + 0xFFFFFE7C:word32] = Mem387[ebp_101 + 0xFFFFFE7C:word32] + 0x00000001;
						eax_1217 = fn00401DA6(Mem2196[ebp_101 + 0x00000008:word32]);
						Mem2203[ebp_101 + 0xFFFFFE6C:word32] = eax_1217;
					}
				word32 ecx_401 = Mem387[ebp_101 + 0xFFFFFE4C:word32];
				if (ecx_401 != 0x00000000 && Mem387[ebp_101 + 0xFFFFFE74:word32] == 0x00000000)
				{
l004023DD:
					Z_2416 = cond(Mem387[ebp_101 + 0xFFFFFE6C:word32] - 0xFFFFFFFF);
l00402BA3:
					if (!Z_2416)
					{
						word32 esp_301 = esp_1004 - 0x00000004;
						Mem302[esp_301 + 0x00000000:word32] = Mem24[ebp_101 + 0x00000008:word32];
						Mem304[esp_301 - 0x00000004:word32] = Mem302[ebp_101 + 0xFFFFFE6C:word32];
						fn00404474(eax_1217, dwArg00, dwArg04);
						esp_1004 = esp_301 + 0x00000004;
					}
				}
				else
				{
					word32 eax_1440;
					word16 ax_1443;
					if (edi > 0x0000006F)
					{
						word32 eax_1958 = edi - 0x00000070;
						if (eax_1958 != 0x00000000)
						{
							eax_1217 = eax_1958 - 0x00000003;
							if (eax_1958 == 0x00000003)
								goto l00402393;
							else if (eax_1958 == 0x00000005)
								goto l004027CF;
							else if (eax_1958 == 0x00000008)
								goto l00402106;
							else if (eax_1958 != 0x0000000B)
								goto l004023D2;
							else
							{
								if (Mem387[ebp_101 + 0xFFFFFE7B:byte] > 0x00)
									Mem2187[ebp_101 + 0xFFFFFE6A:byte] = 0x01;
								word32 edi_1988 = Mem387[ebp_101 + 0x0000000C:word32];
								Mem1990[ebp_101 + 0x0000000C:word32] = edi_1988 + 0x00000001;
								Mem1991[ebp_101 + 0xFFFFFE30:word32] = edi_1988 + 0x00000001;
								edi = edi_1988 + 0x00000001;
								if (Mem1991[edi_1988 + 0x00000001:byte] == 0x5E)
								{
									Mem2185[ebp_101 + 0xFFFFFE30:word32] = edi_1988 + 0x00000002;
									Mem2186[ebp_101 + 0xFFFFFE5F:byte] = 0xFF;
									edi = edi_1988 + 0x00000002;
								}
								ebx = Mem1991[ebp_101 + 0xFFFFFE44:word32];
								if (ebx == 0x00000000)
								{
									Mem2168[ebp_101 - 0x00000004:word32] = Mem1991[ebp_101 - 0x00000004:word32] & ebx;
									word32 esp_2171 = esp_1004 - 0x00000004;
									Mem2172[esp_2171 + 0x00000000:word32] = 0x00000020;
									fn00403D30(Mem2172[esp_2171 + 0x00000000:word32], 0x000001CC);
									Mem2175[ebp_101 - 0x00000018:word32] = esp_2171 + 0x00000004;
									Mem2178[ebp_101 + 0xFFFFFE44:word32] = esp_2171 + 0x00000004;
									Mem2180[ebp_101 - 0x00000004:word32] = Mem2178[ebp_101 - 0x00000004:word32] | 0xFFFFFFFF;
									esp_1004 = esp_2171 + 0x00000004;
									ebx = esp_2171 + 0x00000004;
								}
								byte dl_2034;
								word32 esp_2005 = esp_1004 - 0x00000004;
								Mem2006[esp_2005 + 0x00000000:word32] = 0x00000020;
								Mem2008[esp_2005 - 0x00000004:word32] = 0x00000000;
								Mem2010[esp_2005 - 0x00000008:word32] = ebx;
								word32 eax_2012 = fn004045E0(dwArg00, bArg04, dwArg08);
								esp_1004 = esp_2005 + 0x00000004;
								if (Mem2010[ebp_101 + 0xFFFFFE40:word32] == 0x0000007B && Mem2010[edi + 0x00000000:byte] == 0x5D)
								{
									Mem2166[ebx + 0x0000000B:byte] = 0x20;
									dl_2034 = 0x5D;
									edi = edi + 0x00000001;
									goto l00402534;
								}
l0040252E:
								dl_2034 = Mem2010[ebp_101 + 0xFFFFFE68:byte];
l00402534:
								byte al_2050 = Mem2010[edi + 0x00000000:byte];
								eax_1217 = DPB(eax_2012, al_2050, 0, 8);
								while (al_2050 != 0x5D)
								{
									edi = edi + 0x00000001;
									if (al_2050 == 0x2D && dl_2034 != 0x00)
									{
										byte cl_2090 = Mem2010[edi + 0x00000000:byte];
										if (cl_2090 != 0x5D)
										{
											byte al_2101;
											edi = edi + 0x00000001;
											if (dl_2034 <u cl_2090)
											{
												al_2101 = cl_2090;
												eax_2012 = DPB(eax_2012, cl_2090, 0, 8);
											}
											else
											{
												al_2101 = dl_2034;
												eax_2012 = DPB(eax_2012, dl_2034, 0, 8);
												dl_2034 = cl_2090;
											}
											if (dl_2034 <=u al_2101)
											{
												Mem2126[ebp_101 + 0xFFFFFE2C:word32] = (word32) (al_2101 - dl_2034 + 0x01);
												esi_102 = (word32) dl_2034;
												do
												{
													eax_2012 = (esi_102 >>u 0x00000003) + ebx;
													Mem2141[eax_2012 + 0x00000000:byte] = Mem2126[eax_2012 + 0x00000000:byte] | 0x01 << (byte) (esi_102 & 0x00000007);
													word32 v89_2145 = Mem2141[ebp_101 + 0xFFFFFE2C:word32] - 0x00000001;
													Mem2146[ebp_101 + 0xFFFFFE2C:word32] = v89_2145;
													esi_102 = esi_102 + 0x00000001;
												} while (v89_2145 != 0x00000000);
											}
											dl_2034 = 0x00;
										}
										else
										{
l00402515:
											Mem2071[ebp_101 + 0xFFFFFE68:byte] = al_2050;
											word32 ecx_2072 = (word32) al_2050;
											eax_2012 = (ecx_2072 >>u 0x00000003) + ebx;
											Mem2084[eax_2012 + 0x00000000:byte] = Mem2071[eax_2012 + 0x00000000:byte] | 0x01 << (byte) (ecx_2072 & 0x00000007);
											goto l0040252E;
										}
									}
									else
										goto l00402515;
									al_2050 = Mem2010[edi + 0x00000000:byte];
									eax_1217 = DPB(eax_2012, al_2050, 0, 8);
								}
								if (al_2050 != 0x00)
								{
									ebx = Mem2010[ebp_101 + 0xFFFFFE50:word32];
									if (Mem2010[ebp_101 + 0xFFFFFE40:word32] == 0x0000007B)
										Mem2064[ebp_101 + 0x0000000C:word32] = edi;
									edi = Mem2010[ebp_101 + 0xFFFFFE40:word32];
									goto l0040255A;
								}
							}
						}
						else
						{
							Mem2188[ebp_101 + 0xFFFFFE73:byte] = 0x01;
							goto l004027CF;
						}
					}
					else if (edi == 0x0000006F)
						goto l004027CF;
					else if (edi == 0x00000063)
					{
						if (ecx_401 == 0x00000000)
						{
							Mem1953[ebp_101 + 0xFFFFFE4C:word32] = 0x00000001;
							Mem1955[ebp_101 + 0xFFFFFE74:word32] = Mem1953[ebp_101 + 0xFFFFFE74:word32] + 0x00000001;
						}
l00402393:
						if (Mem387[ebp_101 + 0xFFFFFE7B:byte] > 0x00)
							Mem1425[ebp_101 + 0xFFFFFE6A:byte] = 0x01;
l0040255A:
						Mem1224[ebp_101 + 0xFFFFFE7C:word32] = Mem387[ebp_101 + 0xFFFFFE7C:word32] - 0x00000001;
						esi_102 = ebx;
						if (Mem1224[ebp_101 + 0xFFFFFE6C:word32] != 0xFFFFFFFF)
						{
							word32 esp_1408 = esp_1004 - 0x00000004;
							Mem1409[esp_1408 + 0x00000000:word32] = Mem1224[ebp_101 + 0x00000008:word32];
							Mem1411[esp_1408 - 0x00000004:word32] = Mem1409[ebp_101 + 0xFFFFFE6C:word32];
							fn00404474(eax_1217, dwArg00, dwArg04);
							esp_1004 = esp_1408 + 0x00000004;
							goto l0040257B;
						}
l0040257B:
						while (true)
						{
							if (Mem1224[ebp_101 + 0xFFFFFE4C:word32] != 0x00000000)
							{
								word32 eax_1402 = Mem1224[ebp_101 + 0xFFFFFE74:word32];
								Mem1404[ebp_101 + 0xFFFFFE74:word32] = Mem1224[ebp_101 + 0xFFFFFE74:word32] - 0x00000001;
								if (eax_1402 == 0x00000000)
									goto l00402780;
							}
l00402598:
							Mem1277[ebp_101 + 0xFFFFFE7C:word32] = Mem1224[ebp_101 + 0xFFFFFE7C:word32] + 0x00000001;
							word32 eax_1280 = fn00401DA6(Mem1277[ebp_101 + 0x00000008:word32]);
							Mem1284[ebp_101 + 0xFFFFFE6C:word32] = eax_1280;
							byte al_1282 = (byte) eax_1280;
							if (eax_1280 == 0xFFFFFFFF)
							{
l0040276A:
								Mem1296[ebp_101 + 0xFFFFFE7C:word32] = Mem1284[ebp_101 + 0xFFFFFE7C:word32] - 0x00000001;
								if (eax_1280 != 0xFFFFFFFF)
								{
									word32 esp_1299 = esp_1004 - 0x00000004;
									Mem1300[esp_1299 + 0x00000000:word32] = Mem1296[ebp_101 + 0x00000008:word32];
									Mem1302[esp_1299 - 0x00000004:word32] = eax_1280;
									fn00404474(eax_1280, dwArg00, dwArg04);
									esp_1004 = esp_1299 + 0x00000004;
								}
								if (esi_102 != ebx)
									if (Mem1224[ebp_101 + 0xFFFFFE72:byte] == 0x00)
									{
										Mem1261[ebp_101 + 0xFFFFFE48:word32] = Mem1224[ebp_101 + 0xFFFFFE48:word32] + 0x00000001;
										if (Mem1261[ebp_101 + 0xFFFFFE40:word32] != 0x00000063)
										{
											word32 eax_1264 = Mem1261[ebp_101 + 0xFFFFFE50:word32];
											if (Mem1261[ebp_101 + 0xFFFFFE6A:byte] != 0x00)
												Mem1271[eax_1264 + 0x00000000:word16] = Mem1261[eax_1264 + 0x00000000:word16] & 0x0000;
											else
												Mem1274[eax_1264 + 0x00000000:byte] = 0x00;
										}
									}
							}
							if (edi != 0x00000063 && ((edi != 0x00000073 || eax_1280 >= 0x00000009 && eax_1280 <= 0x0000000D) || eax_1280 == 0x00000020))
							{
								if (edi != 0x0000007B)
									goto l0040276A;
								edi = (int32) Mem1284[ebp_101 + 0xFFFFFE5F:byte];
								if ((((int32) Mem1284[(eax_1280 >> 0x00000003) + Mem1284[ebp_101 + 0xFFFFFE44:word32]:byte] ^ edi) & 0x00000001 << (byte) (eax_1280 & 0x00000007)) == 0x00000000)
									;
								edi = Mem1284[ebp_101 + 0xFFFFFE40:word32];
								goto l00402607;
							}
l00402607:
							if (Mem1284[ebp_101 + 0xFFFFFE72:byte] != 0x00)
								esi_102 = esi_102 + 0x00000001;
							else
							{
								if (Mem1284[ebp_101 + 0xFFFFFE6A:byte] != 0x00)
								{
									Mem1335[ebp_101 + 0xFFFFFE3C:byte] = al_1282;
									if (((Mem1335[0x0040B490:word32] + 0x00000001)[(word32) al_1282 * 0x02] & 0x80) != 0x00)
									{
										Mem1360[ebp_101 + 0xFFFFFE7C:word32] = Mem1335[ebp_101 + 0xFFFFFE7C:word32] + 0x00000001;
										Mem1365[ebp_101 + 0xFFFFFE3D:byte] = (byte) fn00401DA6(Mem1360[ebp_101 + 0x00000008:word32]);
									}
									word32 esp_1343 = esp_1004 - 0x00000004;
									Mem1344[esp_1343 + 0x00000000:word32] = Mem1335[0x0040B4A0:word32];
									Mem1347[esp_1343 - 0x00000004:word32] = ebp_101 + 0xFFFFFE3C;
									Mem1350[esp_1343 - 0x00000008:word32] = ebp_101 + 0xFFFFFE34;
									fn00404509(dwArg00, dwArg04, dwArg08);
									Mem1354[ebx + 0x00000000:word16] = Mem1350[ebp_101 + 0xFFFFFE34:word16];
									esp_1004 = esp_1343 + 0x00000004;
									ebx = ebx + 0x00000001 + 0x00000001;
								}
								else
								{
									Mem1366[ebx + 0x00000000:byte] = al_1282;
									ebx = ebx + 0x00000001;
								}
								Mem1334[ebp_101 + 0xFFFFFE50:word32] = ebx;
							}
						}
					}
					else if (edi == 0x00000064)
					{
l004027CF:
						ebx = Mem387[ebp_101 + 0xFFFFFE6C:word32];
						if (ebx == 0x0000002D)
						{
							Mem1203[ebp_101 + 0xFFFFFE69:byte] = 0x01;
l004027E8:
							word32 v74_1179 = Mem387[ebp_101 + 0xFFFFFE74:word32] - 0x00000001;
							Mem1180[ebp_101 + 0xFFFFFE74:word32] = v74_1179;
							if (v75_1183 != 0x00000000)
								goto l004027FD;
							else if (ecx_401 != 0x00000000)
							{
								Mem1201[ebp_101 + 0xFFFFFE83:byte] = 0x01;
								Mem1202[ebp_101 + 0xFFFFFE83:byte] = 0x01;
							}
							else
							{
l004027FD:
								Mem1190[ebp_101 + 0xFFFFFE7C:word32] = Mem1184[ebp_101 + 0xFFFFFE7C:word32] + 0x00000001;
								ebx = fn00401DA6(Mem1190[ebp_101 + 0x00000008:word32]);
								goto l0040280D;
							}
						}
						else if (ebx == 0x0000002B)
							goto l004027E8;
					}
					else if (edi <= 0x00000064)
						goto l004023D2;
					else if (edi <= 0x00000067)
					{
						ebx = Mem387[ebp_101 + 0xFFFFFE6C:word32];
						esi_102 = ebp_101 + 0xFFFFFE84;
						byte bl_1452 = (byte) ebx;
						if (ebx == 0x0000002D)
						{
							Mem1945[ebp_101 + 0xFFFFFE84:byte] = bl_1452;
							esi_102 = ebp_101 + 0xFFFFFE85;
l00402145:
							Mem1925[ebp_101 + 0xFFFFFE74:word32] = Mem387[ebp_101 + 0xFFFFFE74:word32] - 0x00000001;
							Mem1927[ebp_101 + 0xFFFFFE7C:word32] = Mem1925[ebp_101 + 0xFFFFFE7C:word32] + 0x00000001;
							Mem1933[ebp_101 + 0xFFFFFE6C:word32] = fn00401DA6(Mem1927[ebp_101 + 0x00000008:word32]);
							Mem1935[ebp_101 + 0xFFFFFE74:word32] = Mem1933[ebp_101 + 0xFFFFFE74:word32] - 0x00000001;
							Mem1937[ebp_101 + 0xFFFFFE7C:word32] = Mem1935[ebp_101 + 0xFFFFFE7C:word32] + 0x00000001;
							edi = Mem1937[ebp_101 + 0x00000008:word32];
							word32 eax_1941 = fn00401DA6(edi);
							Mem1944[ebp_101 + 0xFFFFFE6C:word32] = eax_1941;
							ebx = eax_1941;
							bl_1452 = (byte) eax_1941;
						}
						else if (ebx == 0x0000002B)
							goto l00402145;
						else
							edi = Mem387[ebp_101 + 0x00000008:word32];
						if (Mem387[ebp_101 + 0xFFFFFE4C:word32] != 0x00000000 && Mem387[ebp_101 + 0xFFFFFE74:word32] <= 0x0000015D)
							goto l00402187;
						Mem1918[ebp_101 + 0xFFFFFE74:word32] = 0x0000015D;
						while (true)
						{
							word32 eax_1484;
							if (Mem387[0x0040B4A0:word32] > 0x00000001)
							{
								word32 esp_1894 = esp_1004 - 0x00000004;
								Mem1895[esp_1894 + 0x00000000:word32] = 0x00000004;
								Mem1897[esp_1894 - 0x00000004:word32] = ebx;
								eax_1484 = fn00404318(ebx, esi_102, edi, fs, dwArg00, out ebx, out edi);
								esp_1004 = esp_1894 + 0x00000004;
							}
							else
								eax_1484 = (word32) Mem387[0x0040B490:word32][ebx * 0x02] & 0x00000004;
							if (eax_1484 == 0x00000000)
							{
								if (Mem387[0x0040B4A4:byte] == bl_1452)
								{
									eax_1484 = Mem387[ebp_101 + 0xFFFFFE74:word32];
									Mem1789[ebp_101 + 0xFFFFFE74:word32] = Mem387[ebp_101 + 0xFFFFFE74:word32] - 0x00000001;
									if (eax_1484 != 0x00000000)
									{
										Mem1794[ebp_101 + 0xFFFFFE7C:word32] = Mem1789[ebp_101 + 0xFFFFFE7C:word32] + 0x00000001;
										word32 eax_1797 = fn00401DA6(edi);
										Mem1801[esi_102 + 0x00000000:byte] = Mem1794[0x0040B4A4:byte];
										ebx = eax_1797;
										byte bl_1799 = (byte) eax_1797;
										esi_102 = esi_102 + 0x00000001;
										while (true)
										{
											Mem1817[ebp_101 + 0xFFFFFE6C:word32] = ebx;
											if (Mem1817[0x0040B4A0:word32] > 0x00000001)
											{
												word32 esp_1851 = esp_1004 - 0x00000004;
												Mem1852[esp_1851 + 0x00000000:word32] = 0x00000004;
												Mem1854[esp_1851 - 0x00000004:word32] = ebx;
												eax_1484 = fn00404318(ebx, esi_102, edi, fs, dwArg00, out ebx, out edi);
												esp_1004 = esp_1851 + 0x00000004;
											}
											else
												eax_1484 = (word32) Mem1817[0x0040B490:word32][ebx * 0x02] & 0x00000004;
											if (eax_1484 == 0x00000000)
												goto l00402260;
											eax_1484 = Mem1817[ebp_101 + 0xFFFFFE74:word32];
											Mem1836[ebp_101 + 0xFFFFFE74:word32] = Mem1817[ebp_101 + 0xFFFFFE74:word32] - 0x00000001;
											if (eax_1484 == 0x00000000)
												;
											Mem1841[ebp_101 + 0xFFFFFE64:word32] = Mem1836[ebp_101 + 0xFFFFFE64:word32] + 0x00000001;
											Mem1842[esi_102 + 0x00000000:byte] = bl_1799;
											Mem1845[ebp_101 + 0xFFFFFE7C:word32] = Mem1842[ebp_101 + 0xFFFFFE7C:word32] + 0x00000001;
											word32 eax_1848 = fn00401DA6(edi);
											esi_102 = esi_102 + 0x00000001;
											ebx = eax_1848;
											bl_1799 = (byte) eax_1848;
										}
									}
								}
								if (Mem387[ebp_101 + 0xFFFFFE64:word32] != 0x00000000 && (ebx == 0x00000065 || ebx == 0x00000045))
								{
									eax_1484 = Mem387[ebp_101 + 0xFFFFFE74:word32];
									Mem1655[ebp_101 + 0xFFFFFE74:word32] = Mem387[ebp_101 + 0xFFFFFE74:word32] - 0x00000001;
									if (eax_1484 != 0x00000000)
									{
										Mem1659[esi_102 + 0x00000000:byte] = 0x65;
										Mem1662[ebp_101 + 0xFFFFFE7C:word32] = Mem1659[ebp_101 + 0xFFFFFE7C:word32] + 0x00000001;
										word32 eax_1665 = fn00401DA6(edi);
										Mem1671[ebp_101 + 0xFFFFFE6C:word32] = eax_1665;
										esi_102 = esi_102 + 0x00000001;
										byte al_1667 = (byte) eax_1665;
										ebx = eax_1665;
										byte bl_1670 = (byte) eax_1665;
										if (eax_1665 == 0x0000002D)
										{
											Mem1777[esi_102 + 0x00000000:byte] = al_1667;
											esi_102 = esi_102 + 0x00000001;
l004022B7:
											word32 eax_1756 = Mem1671[ebp_101 + 0xFFFFFE74:word32];
											Mem1758[ebp_101 + 0xFFFFFE74:word32] = Mem1671[ebp_101 + 0xFFFFFE74:word32] - 0x00000001;
											if (eax_1761 == 0x00000000)
											{
												Mem1771[ebp_101 + 0xFFFFFE74:word32] = Mem1766[ebp_101 + 0xFFFFFE74:word32] & eax_1761;
												Mem1774[ebp_101 + 0xFFFFFE74:word32] = Mem1771[ebp_101 + 0xFFFFFE74:word32] & eax_1761;
											}
											else
											{
l004022CF:
												Mem1686[ebp_101 + 0xFFFFFE7C:word32] = Mem1671[ebp_101 + 0xFFFFFE7C:word32] + 0x00000001;
												word32 eax_1688 = fn00401DA6(edi);
												Mem1691[ebp_101 + 0xFFFFFE6C:word32] = eax_1688;
												ebx = eax_1688;
												bl_1670 = (byte) eax_1688;
											}
										}
										else if (eax_1665 == 0x0000002B)
											goto l004022B7;
										if (Mem1671[0x0040B4A0:word32] > 0x00000001)
										{
											word32 esp_1732 = esp_1004 - 0x00000004;
											Mem1733[esp_1732 + 0x00000000:word32] = 0x00000004;
											Mem1735[esp_1732 - 0x00000004:word32] = ebx;
											eax_1484 = fn00404318(ebx, esi_102, edi, fs, dwArg00, out ebx, out edi);
											esp_1004 = esp_1732 + 0x00000004;
										}
										else
											eax_1484 = (word32) Mem1671[0x0040B490:word32][ebx * 0x02] & 0x00000004;
										if (eax_1484 != 0x00000000)
										{
											eax_1484 = Mem1671[ebp_101 + 0xFFFFFE74:word32];
											Mem1723[ebp_101 + 0xFFFFFE74:word32] = Mem1671[ebp_101 + 0xFFFFFE74:word32] - 0x00000001;
											if (eax_1484 != 0x00000000)
											{
												Mem1728[ebp_101 + 0xFFFFFE64:word32] = Mem1723[ebp_101 + 0xFFFFFE64:word32] + 0x00000001;
												Mem1729[esi_102 + 0x00000000:byte] = bl_1670;
												esi_102 = esi_102 + 0x00000001;
												goto l004022CF;
											}
										}
									}
								}
								word32 v101_1526 = Mem387[ebp_101 + 0xFFFFFE7C:word32] - 0x00000001;
								Mem1527[ebp_101 + 0xFFFFFE7C:word32] = v101_1526;
								if (ebx != 0xFFFFFFFF)
								{
									word32 esp_1638 = esp_1004 - 0x00000004;
									Mem1639[esp_1638 + 0x00000000:word32] = edi;
									Mem1641[esp_1638 - 0x00000004:word32] = ebx;
									fn00404474(eax_1484, dwArg00, dwArg04);
									esp_1004 = esp_1638 + 0x00000004;
								}
								if (Mem1527[ebp_101 + 0xFFFFFE64:word32] != 0x00000000)
									if (Mem1527[ebp_101 + 0xFFFFFE72:byte] == 0x00)
									{
										word32 v104_1537 = Mem1527[ebp_101 + 0xFFFFFE48:word32] + 0x00000001;
										Mem1538[ebp_101 + 0xFFFFFE48:word32] = v104_1537;
										Mem1539[esi_102 + 0x00000000:byte] = 0x00;
										word32 esp_1541 = esp_1004 - 0x00000004;
										Mem1542[esp_1541 + 0x00000000:word32] = ebp_101 + 0xFFFFFE84;
										Mem1544[esp_1541 - 0x00000004:word32] = Mem1542[ebp_101 + 0xFFFFFE50:word32];
										Mem1549[esp_1541 - 0x00000008:word32] = (int32) Mem1544[ebp_101 + 0xFFFFFE73:byte] - 0x00000001;
										Mem1549[0x0040B350:word32]();
										esp_1004 = esp_1541 + 0x00000004;
									}
							}
							eax_1484 = Mem387[ebp_101 + 0xFFFFFE74:word32];
							Mem1878[ebp_101 + 0xFFFFFE74:word32] = Mem387[ebp_101 + 0xFFFFFE74:word32] - 0x00000001;
							if (eax_1484 == 0x00000000)
								;
							Mem1883[ebp_101 + 0xFFFFFE64:word32] = Mem1878[ebp_101 + 0xFFFFFE64:word32] + 0x00000001;
							Mem1884[esi_102 + 0x00000000:byte] = bl_1452;
							Mem1887[ebp_101 + 0xFFFFFE7C:word32] = Mem1884[ebp_101 + 0xFFFFFE7C:word32] + 0x00000001;
							word32 eax_1890 = fn00401DA6(edi);
							Mem1893[ebp_101 + 0xFFFFFE6C:word32] = eax_1890;
							esi_102 = esi_102 + 0x00000001;
							ebx = eax_1890;
							bl_1452 = (byte) eax_1890;
						}
					}
					else if (edi == 0x00000069)
					{
						word32 esp_1446 = esp_1004 - 0x00000004;
						Mem1447[esp_1446 + 0x00000000:word32] = 0x00000064;
						edi = Mem1447[esp_1446 + 0x00000000:word32];
						esp_1004 = esp_1446 + 0x00000004;
l00402106:
						ebx = Mem387[ebp_101 + 0xFFFFFE6C:word32];
						if (ebx == 0x0000002D)
						{
							Mem1163[ebp_101 + 0xFFFFFE69:byte] = 0x01;
l0040267D:
							word32 v33_1138 = Mem387[ebp_101 + 0xFFFFFE74:word32] - 0x00000001;
							Mem1139[ebp_101 + 0xFFFFFE74:word32] = v33_1138;
							if (v34_1142 != 0x00000000)
								goto l00402692;
							else if (ecx_401 != 0x00000000)
							{
								Mem1161[ebp_101 + 0xFFFFFE83:byte] = 0x01;
								Mem1162[ebp_101 + 0xFFFFFE83:byte] = 0x01;
							}
							else
							{
l00402692:
								Mem1149[ebp_101 + 0xFFFFFE7C:word32] = Mem1143[ebp_101 + 0xFFFFFE7C:word32] + 0x00000001;
								word32 eax_1152 = fn00401DA6(Mem1149[ebp_101 + 0x00000008:word32]);
								Mem1155[ebp_101 + 0xFFFFFE6C:word32] = eax_1152;
								ebx = eax_1152;
							}
						}
						else if (ebx == 0x0000002B)
							goto l0040267D;
						if (ebx == 0x00000030)
						{
							word32 esp_1071;
							Mem1053[ebp_101 + 0xFFFFFE7C:word32] = Mem387[ebp_101 + 0xFFFFFE7C:word32] + 0x00000001;
							word32 eax_1056 = fn00401DA6(Mem1053[ebp_101 + 0x00000008:word32]);
							Mem1062[ebp_101 + 0xFFFFFE6C:word32] = eax_1056;
							ebx = eax_1056;
							byte bl_1061 = (byte) eax_1056;
							if (bl_1061 != 0x78 && bl_1061 != 0x58)
							{
								Mem1100[ebp_101 + 0xFFFFFE64:word32] = 0x00000001;
								if (edi != 0x00000078)
								{
									if (Mem1100[ebp_101 + 0xFFFFFE4C:word32] != 0x00000000)
									{
										word32 v36_1109 = Mem1100[ebp_101 + 0xFFFFFE74:word32] - 0x00000001;
										Mem1110[ebp_101 + 0xFFFFFE74:word32] = v36_1109;
										if (v36_1109 == 0x00000000)
											Mem1114[ebp_101 + 0xFFFFFE83:byte] = Mem1110[ebp_101 + 0xFFFFFE83:byte] + 0x01;
									}
									esp_1071 = esp_1004 - 0x00000004;
									Mem1108[esp_1071 + 0x00000000:word32] = 0x0000006F;
l004026F9:
									edi = Mem1062[esp_1071 + 0x00000000:word32];
									esp_1004 = esp_1071 + 0x00000004;
								}
								else
								{
									Mem1117[ebp_101 + 0xFFFFFE7C:word32] = Mem1100[ebp_101 + 0xFFFFFE7C:word32] - 0x00000001;
									if (eax_1056 != 0xFFFFFFFF)
									{
										word32 esp_1128 = esp_1004 - 0x00000004;
										Mem1129[esp_1128 + 0x00000000:word32] = Mem1117[ebp_101 + 0x00000008:word32];
										Mem1131[esp_1128 - 0x00000004:word32] = eax_1056;
										fn00404474(eax_1056, dwArg00, dwArg04);
										esp_1004 = esp_1128 + 0x00000004;
									}
									word32 esp_1123 = esp_1004 - 0x00000004;
									Mem1124[esp_1123 + 0x00000000:word32] = 0x00000030;
									ebx = Mem1124[esp_1123 + 0x00000000:word32];
									esp_1004 = esp_1123 + 0x00000004;
l0040280D:
									Mem1029[ebp_101 + 0xFFFFFE6C:word32] = ebx;
								}
							}
							else
							{
								Mem1077[ebp_101 + 0xFFFFFE7C:word32] = Mem1062[ebp_101 + 0xFFFFFE7C:word32] + 0x00000001;
								word32 eax_1080 = fn00401DA6(Mem1077[ebp_101 + 0x00000008:word32]);
								Mem1083[ebp_101 + 0xFFFFFE6C:word32] = eax_1080;
								ebx = eax_1080;
								if (Mem1083[ebp_101 + 0xFFFFFE4C:word32] != 0x00000000)
								{
									Mem1092[ebp_101 + 0xFFFFFE74:word32] = Mem1083[ebp_101 + 0xFFFFFE74:word32] - 0x00000002;
									if (Mem1092[ebp_101 + 0xFFFFFE74:word32] < 0x00000001)
										Mem1096[ebp_101 + 0xFFFFFE83:byte] = Mem1092[ebp_101 + 0xFFFFFE83:byte] + 0x01;
								}
								esp_1071 = esp_1004 - 0x00000004;
								Mem1090[esp_1071 + 0x00000000:word32] = 0x00000078;
								goto l004026F9;
							}
						}
l00402813:
						if (Mem387[ebp_101 + 0xFFFFFE38:word32] != 0x00000000)
						{
							if (Mem387[ebp_101 + 0xFFFFFE83:byte] == 0x00)
							{
								esi_102 = 0x00000080;
								do
								{
									word32 eax_607;
									if (edi == 0x00000078 || edi == 0x00000070)
									{
										if (Mem387[0x0040B4A0:word32] > 0x00000001)
										{
											word32 esp_710 = esp_1004 - 0x00000004;
											Mem711[esp_710 + 0x00000000:word32] = 0x00000080;
											Mem713[esp_710 - 0x00000004:word32] = ebx;
											eax_607 = fn00404318(ebx, 0x00000080, edi, fs, dwArg00, out ebx, out edi);
											esp_1004 = esp_710 + 0x00000004;
										}
										else
											eax_607 = (word32) Mem387[0x0040B490:word32][ebx * 0x02] & 0x00000080;
										if (eax_607 != 0x00000000)
										{
											word32 eax_694 = Mem387[ebp_101 + 0xFFFFFE54:word32];
											word32 ecx_696 = __shld(Mem387[ebp_101 + 0xFFFFFE58:word32], eax_694, 0x04);
											Mem699[ebp_101 + 0xFFFFFE54:word32] = eax_694 << 0x00000004;
											Mem700[ebp_101 + 0xFFFFFE58:word32] = ecx_696;
											eax_607 = fn00401D74(ebx, ebx, edi, fs, out ebp_101, out edi);
											ebx = eax_607;
										}
										else
											goto l00402908;
									}
									else
									{
										if (Mem387[0x0040B4A0:word32] > 0x00000001)
										{
											word32 esp_778 = esp_1004 - 0x00000004;
											Mem779[esp_778 + 0x00000000:word32] = 0x00000004;
											Mem781[esp_778 - 0x00000004:word32] = ebx;
											eax_607 = fn00404318(ebx, 0x00000080, edi, fs, dwArg00, out ebx, out edi);
											esp_1004 = esp_778 + 0x00000004;
										}
										else
											eax_607 = (word32) Mem387[0x0040B490:word32][ebx * 0x02] & 0x00000004;
										if (eax_607 == 0x00000000)
											goto l00402908;
										else if (edi != 0x0000006F)
										{
											word32 esp_761 = esp_1004 - 0x00000004;
											Mem762[esp_761 + 0x00000000:word32] = 0x00000000;
											Mem764[esp_761 - 0x00000004:word32] = 0x0000000A;
											Mem766[esp_761 - 0x00000008:word32] = Mem764[ebp_101 + 0xFFFFFE58:word32];
											Mem768[esp_761 - 0x0000000C:word32] = Mem766[ebp_101 + 0xFFFFFE54:word32];
											word32 edx_770;
											eax_607 = fn00404730(dwArg00, dwArg04, dwArg08, dwArg0C, out edx_770);
											Mem776[ebp_101 + 0xFFFFFE54:word32] = eax_607;
											Mem777[ebp_101 + 0xFFFFFE58:word32] = edx_770;
											esp_1004 = esp_761 + 0x00000004;
										}
										else if (ebx < 0x00000038)
										{
											word32 eax_751 = Mem387[ebp_101 + 0xFFFFFE54:word32];
											word32 ecx_753 = __shld(Mem387[ebp_101 + 0xFFFFFE58:word32], eax_751, 0x03);
											Mem759[ebp_101 + 0xFFFFFE54:word32] = eax_751 << 0x00000003;
											Mem760[ebp_101 + 0xFFFFFE58:word32] = ecx_753;
											eax_607 = eax_751 << 0x00000003;
										}
										else
										{
l00402908:
											Mem678[ebp_101 + 0xFFFFFE83:byte] = Mem387[ebp_101 + 0xFFFFFE83:byte] + 0x01;
										}
									}
									if (Mem387[ebp_101 + 0xFFFFFE83:byte] == 0x00)
									{
										Mem627[ebp_101 + 0xFFFFFE64:word32] = Mem387[ebp_101 + 0xFFFFFE64:word32] + 0x00000001;
										Mem632[ebp_101 + 0xFFFFFE54:word32] = Mem627[ebp_101 + 0xFFFFFE54:word32] + (word32) ((int64) (ebx - 0x00000030));
										Mem636[ebp_101 + 0xFFFFFE58:word32] = v48;
										if (Mem636[ebp_101 + 0xFFFFFE4C:word32] != 0x00000000)
										{
											word32 v49_647 = Mem636[ebp_101 + 0xFFFFFE74:word32] - 0x00000001;
											Mem648[ebp_101 + 0xFFFFFE74:word32] = v49_647;
											if (v49_647 == 0x00000000)
												Mem651[ebp_101 + 0xFFFFFE83:byte] = 0x01;
											else
											{
l00402947:
												Mem641[ebp_101 + 0xFFFFFE7C:word32] = Mem636[ebp_101 + 0xFFFFFE7C:word32] + 0x00000001;
												ebx = fn00401DA6(Mem641[ebp_101 + 0x00000008:word32]);
											}
										}
										else
											goto l00402947;
									}
									else
									{
										Mem653[ebp_101 + 0xFFFFFE7C:word32] = Mem387[ebp_101 + 0xFFFFFE7C:word32] - 0x00000001;
										if (ebx != 0xFFFFFFFF)
										{
											word32 esp_656 = esp_1004 - 0x00000004;
											Mem657[esp_656 + 0x00000000:word32] = Mem653[ebp_101 + 0x00000008:word32];
											Mem659[esp_656 - 0x00000004:word32] = ebx;
											fn00404474(eax_607, dwArg00, dwArg04);
											esp_1004 = esp_656 + 0x00000004;
										}
									}
								} while (Mem387[ebp_101 + 0xFFFFFE83:byte] == 0x00);
								Mem625[ebp_101 + 0xFFFFFE6C:word32] = ebx;
							}
							if (Mem387[ebp_101 + 0xFFFFFE69:byte] != 0x00)
							{
								word32 eax_571 = -Mem387[ebp_101 + 0xFFFFFE54:word32];
								word32 ecx_575 = -(Mem387[ebp_101 + 0xFFFFFE58:word32] + (eax_571 == 0x00000000));
								Mem578[ebp_101 + 0xFFFFFE54:word32] = eax_571;
								Mem579[ebp_101 + 0xFFFFFE58:word32] = ecx_575;
							}
						}
						else
						{
							if (Mem387[ebp_101 + 0xFFFFFE83:byte] == 0x00)
							{
								esi_102 = 0x00000080;
								do
								{
									word32 eax_1007;
									if (edi == 0x00000078 || edi == 0x00000070)
									{
										if (Mem387[0x0040B4A0:word32] > 0x00000001)
										{
											word32 esp_939 = esp_1004 - 0x00000004;
											Mem940[esp_939 + 0x00000000:word32] = 0x00000080;
											Mem942[esp_939 - 0x00000004:word32] = ebx;
											eax_1007 = fn00404318(ebx, 0x00000080, edi, fs, dwArg00, out ebx, out edi);
											esp_1004 = esp_939 + 0x00000004;
										}
										else
											eax_1007 = (word32) Mem387[0x0040B490:word32][ebx * 0x02] & 0x00000080;
										if (eax_1007 != 0x00000000)
										{
											Mem928[ebp_101 + 0xFFFFFE60:word32] = Mem387[ebp_101 + 0xFFFFFE60:word32] << 0x00000004;
											eax_1007 = fn00401D74(ebx, ebx, edi, fs, out ebp_101, out edi);
											ebx = eax_1007;
										}
										else
											goto l00402A4F;
									}
									else
									{
										if (Mem387[0x0040B4A0:word32] > 0x00000001)
										{
											word32 esp_991 = esp_1004 - 0x00000004;
											Mem992[esp_991 + 0x00000000:word32] = 0x00000004;
											Mem994[esp_991 - 0x00000004:word32] = ebx;
											eax_1007 = fn00404318(ebx, 0x00000080, edi, fs, dwArg00, out ebx, out edi);
											esp_1004 = esp_991 + 0x00000004;
										}
										else
											eax_1007 = (word32) Mem387[0x0040B490:word32][ebx * 0x02] & 0x00000004;
										if (eax_1007 == 0x00000000)
											goto l00402A4F;
										else if (edi != 0x0000006F)
										{
											word32 eax_983 = Mem387[ebp_101 + 0xFFFFFE60:word32];
											Mem990[ebp_101 + 0xFFFFFE60:word32] = eax_983 * 0x0000000A;
											eax_1007 = eax_983 * 0x0000000A;
										}
										else if (ebx < 0x00000038)
											Mem981[ebp_101 + 0xFFFFFE60:word32] = Mem387[ebp_101 + 0xFFFFFE60:word32] << 0x00000003;
										else
										{
l00402A4F:
											Mem911[ebp_101 + 0xFFFFFE83:byte] = Mem387[ebp_101 + 0xFFFFFE83:byte] + 0x01;
										}
									}
									if (Mem387[ebp_101 + 0xFFFFFE83:byte] == 0x00)
									{
										Mem866[ebp_101 + 0xFFFFFE64:word32] = Mem387[ebp_101 + 0xFFFFFE64:word32] + 0x00000001;
										Mem869[ebp_101 + 0xFFFFFE60:word32] = Mem866[ebp_101 + 0xFFFFFE60:word32] - 0x00000030 + ebx;
										if (Mem869[ebp_101 + 0xFFFFFE4C:word32] != 0x00000000)
										{
											word32 v58_880 = Mem869[ebp_101 + 0xFFFFFE74:word32] - 0x00000001;
											Mem881[ebp_101 + 0xFFFFFE74:word32] = v58_880;
											if (v58_880 == 0x00000000)
												Mem884[ebp_101 + 0xFFFFFE83:byte] = 0x01;
											else
											{
l00402A8E:
												Mem874[ebp_101 + 0xFFFFFE7C:word32] = Mem869[ebp_101 + 0xFFFFFE7C:word32] + 0x00000001;
												ebx = fn00401DA6(Mem874[ebp_101 + 0x00000008:word32]);
											}
										}
										else
											goto l00402A8E;
									}
									else
									{
										Mem886[ebp_101 + 0xFFFFFE7C:word32] = Mem387[ebp_101 + 0xFFFFFE7C:word32] - 0x00000001;
										if (ebx != 0xFFFFFFFF)
										{
											word32 esp_889 = esp_1004 - 0x00000004;
											Mem890[esp_889 + 0x00000000:word32] = Mem886[ebp_101 + 0x00000008:word32];
											Mem892[esp_889 - 0x00000004:word32] = ebx;
											fn00404474(eax_1007, dwArg00, dwArg04);
											esp_1004 = esp_889 + 0x00000004;
										}
									}
								} while (Mem387[ebp_101 + 0xFFFFFE83:byte] == 0x00);
								Mem864[ebp_101 + 0xFFFFFE6C:word32] = ebx;
							}
							if (Mem387[ebp_101 + 0xFFFFFE69:byte] != 0x00)
								Mem820[ebp_101 + 0xFFFFFE60:word32] = -Mem387[ebp_101 + 0xFFFFFE60:word32];
						}
						if (edi == 0x00000046)
							Mem547[ebp_101 + 0xFFFFFE64:word32] = Mem387[ebp_101 + 0xFFFFFE64:word32] & 0x00000000;
						if (Mem387[ebp_101 + 0xFFFFFE64:word32] != 0x00000000)
							if (Mem387[ebp_101 + 0xFFFFFE72:byte] == 0x00)
							{
								Mem538[ebp_101 + 0xFFFFFE48:word32] = Mem387[ebp_101 + 0xFFFFFE48:word32] + 0x00000001;
								eax_1440 = Mem538[ebp_101 + 0xFFFFFE60:word32];
								ebx = Mem538[ebp_101 + 0xFFFFFE50:word32];
								ax_1443 = (word16) eax_1440;
								goto l00402B0C;
							}
					}
					else if (edi == 0x0000006E)
					{
						eax_1440 = Mem387[ebp_101 + 0xFFFFFE7C:word32];
						ax_1443 = (word16) eax_1440;
						if (Mem387[ebp_101 + 0xFFFFFE72:byte] != 0x00)
							;
						else
						{
l00402B0C:
							if (Mem387[ebp_101 + 0xFFFFFE38:word32] != 0x00000000)
							{
								Mem471[ebx + 0x00000000:word32] = Mem387[ebp_101 + 0xFFFFFE54:word32];
								Mem473[ebx + 0x00000004:word32] = Mem471[ebp_101 + 0xFFFFFE58:word32];
							}
							else if (Mem387[ebp_101 + 0xFFFFFE73:byte] != 0x00)
								Mem476[ebx + 0x00000000:word32] = eax_1440;
							else
								Mem477[ebx + 0x00000000:word16] = ax_1443;
						}
l00402B38:
						Mem446[ebp_101 + 0xFFFFFE6B:byte] = Mem387[ebp_101 + 0xFFFFFE6B:byte] + 0x01;
						Mem448[ebp_101 + 0x0000000C:word32] = Mem446[ebp_101 + 0x0000000C:word32] + 0x00000001;
						esi_102 = Mem448[ebp_101 + 0x0000000C:word32];
l00402BBD:
						if (Mem24[ebp_101 + 0xFFFFFE6C:word32] != 0xFFFFFFFF)
							goto l00401E02;
						if (Mem24[esi_102 + 0x00000000:byte] == 0x25 && Mem24[Mem24[ebp_101 + 0x0000000C:word32] + 0x00000001:byte] == 0x6E)
							goto l00401DFF;
					}
					else
					{
l004023D2:
						if (eax_1217 != Mem387[ebp_101 + 0xFFFFFE6C:word32])
							goto l004023DD;
						else
						{
							Mem492[ebp_101 + 0xFFFFFE6B:byte] = Mem387[ebp_101 + 0xFFFFFE6B:byte] - 0x01;
							if (Mem492[ebp_101 + 0xFFFFFE72:byte] == 0x00)
								Mem496[ebp_101 + 0x00000010:word32] = Mem492[ebp_101 + 0xFFFFFE24:word32];
						}
					}
				}
			}
			else
			{
				Mem2390[ebp_101 + 0xFFFFFE7C:word32] = Mem24[ebp_101 + 0xFFFFFE7C:word32] + 0x00000001;
				word32 eax_2393 = fn00401DA6(Mem2390[ebp_101 + 0x00000008:word32]);
				Mem2396[ebp_101 + 0xFFFFFE6C:word32] = eax_2393;
				eax_1217 = (word32) Mem2396[esi_102 + 0x00000000:byte];
				Mem2402[ebp_101 + 0x0000000C:word32] = esi_102 + 0x00000001;
				ebx = eax_2393;
				byte bl_2395 = (byte) eax_2393;
				esi_102 = esi_102 + 0x00000001;
				if (eax_1217 != eax_2393)
					goto l00402BA0;
				else if (((Mem2402[0x0040B490:word32] + 0x00000001)[(word32) bl_2395 * 0x02] & 0x80) != 0x00)
				{
					Mem2425[ebp_101 + 0xFFFFFE7C:word32] = Mem2402[ebp_101 + 0xFFFFFE7C:word32] + 0x00000001;
					eax_1217 = fn00401DA6(Mem2425[ebp_101 + 0x00000008:word32]);
					word32 ecx_2432 = (word32) Mem2425[esi_102 + 0x00000001:byte];
					Mem2434[ebp_101 + 0x0000000C:word32] = esi_102 + 0x00000002;
					esi_102 = esi_102 + 0x00000002;
					if (ecx_2432 != eax_1217)
					{
						if (eax_1217 != 0xFFFFFFFF)
						{
							word32 esp_2439 = esp_1004 - 0x00000004;
							Mem2440[esp_2439 + 0x00000000:word32] = Mem2434[ebp_101 + 0x00000008:word32];
							Mem2442[esp_2439 - 0x00000004:word32] = eax_1217;
							eax_1217 = fn00404474(eax_1217, dwArg00, dwArg04);
							esp_1004 = esp_2439 + 0x00000004;
						}
l00402BA0:
						Z_2416 = cond(eax_2393 - 0xFFFFFFFF);
						goto l00402BA3;
					}
					else
					{
						Mem2452[ebp_101 + 0xFFFFFE7C:word32] = Mem2434[ebp_101 + 0xFFFFFE7C:word32] - 0x00000001;
						goto l00402BBD;
					}
				}
				else
					goto l00402BBD;
			}
		}
	}
l00402BDC:
	if (Mem24[ebp_101 + 0xFFFFFE28:word32] == 0x00000001)
	{
		word32 esp_155 = esp_1004 - 0x00000004;
		Mem156[esp_155 + 0x00000000:word32] = Mem24[ebp_101 + 0xFFFFFE44:word32];
		word32 edx_157;
		word32 ebx_158;
		word32 edi_159;
		fn0040403C(dwArg00, out edx_157, out ebx_158, out edi_159);
		Mem164[esp_155 + 0x00000000:word32] = Mem156[ebp_101 + 0xFFFFFE44:word32];
		word32 edx_165;
		fn0040403C(dwArg00, out edx_165, out ebx, out edi);
	}
	word32 eax_118 = Mem24[ebp_101 + 0xFFFFFE48:word32];
	byte al_120 = (byte) eax_118;
	if (Mem24[ebp_101 + 0xFFFFFE6C:word32] == 0xFFFFFFFF && (eax_118 == 0x00000000 && Mem24[ebp_101 + 0xFFFFFE6B:byte] == al_120))
		;
	word32 edx_131;
	word32 ebx_132;
	word32 ebp_133;
	word32 esi_134;
	word32 edi_135;
	fn004041A2(Mem24[ebp_101 - 0x0000001C:word32], ebx, esi_102, edi, fs, out edx_131, out ebx_132, out ebp_133, out esi_134, out edi_135);
	word32 ebp_140;
	word32 esi_141;
	word32 edi_142;
	word16 cx_143;
	return fn00403C0B(ebp_133, fs, 0x000001CC, dwArg00, dwArg04, dwArg08, out ebp_140, out esi_141, out edi_142, out cx_143);
}

word32 fn0040307F(word32 dwArg00)
{
	word32 eax_4 = GetModuleHandleA(0x004091D0);
	word32 esp_20 = fp;
	if (eax_4 != 0x00000000)
	{
		Mem38[fp - 0x00000004:word32] = 0x004091C0;
		word32 eax_41 = GetProcAddress(eax_4, 0x004091D0);
		esp_20 = fp;
		if (eax_41 != 0x00000000)
		{
			Mem47[fp - 0x00000004:word32] = dwArg00;
			esp_20 = fp - 0x00000004;
			eax_41();
		}
	}
	word32 esp_22 = esp_20 - 0x00000004;
	Mem24[esp_22 + 0x00000000:word32] = Mem0[esp_22 + 0x00000004:word32];
	ExitProcess(Mem24[esp_22 + 0x00000000:UINT]);
	int3();
	if (Mem24[0x0040B0AC:word32] != 0x00000000)
	{
		word32 edx_33;
		fn004030B8(dwArg00, out edx_33);
		return edx_33;
	}
	else
	{
		word32 edx_35;
		fn004030BF(out edx_35);
		return edx_35;
	}
}

word32 fn004030AF()
{
	if (Mem0[0x0040B0AC:word32] != 0x00000000)
		word32 edx_10;
}

word32 fn004030B8(word32 dwArg00, ptr32 edxOut)
{
	eax();
	word32 edx_9;
	return fn004030BF(out edx_9);
}

word32 fn004030BF(ptr32 edxOut)
{
	*edxOut = edx;
	word32 eax_105 = 0x00000000;
	word32 esi_108 = 0x0040B00C;
	if (false)
	{
l004030D3:
		do
		{
			if (false)
				goto l00403116;
			word32 ecx_98 = Mem0[esi_108 + 0x00000000:word32];
			if (ecx_98 != 0x00000000)
				ecx_98();
			esi_108 = esi_108 + 0x00000004;
		} while (esi_108 <u 0x0040B01C);
		if (true)
		{
l004030EA:
			fn004053B0(dwLoc10);
			if (false)
				do
				{
					if (eax_72 != 0x00000000)
					{
						eax_72();
						eax_72();
					}
					esi_45 = esi_45 + 0x00000004;
				} while (esi_45 <u 0x0040B008);
			eax_105 = 0x00000000;
		}
	}
	else
		goto l004030EA;
	return eax_105;
}

word32 fn00403119(word32 edi, word32 dwArg04, word32 dwArg08, word32 dwArg0C, ptr32 ebpOut)
{
	if (Mem0[0x0040BA9C:word32] == 0x00000001)
		TerminateProcess(GetCurrentProcess(), dwArg04);
	Mem29[0x0040BA98:word32] = 0x00000001;
	Mem30[0x0040BA94:byte] = bArg0C;
	if (dwArg08 == 0x00000000)
	{
		word32 ecx_103 = Mem30[0x0040BFE8:word32];
		if (ecx_103 != 0x00000000)
		{
			word32 eax_151 = Mem30[0x0040BFE4:word32];
			word32 eax_152 = eax_151 - 0x00000004;
			byte C_155 = cond(eax_151 - 0x00000004 - ecx_103);
			Mem170[0x0040BFE4:word32] = eax_152;
			while (C_155)
			{
				word32 eax_171 = Mem170[eax_152 + 0x00000000:word32];
				if (eax_171 != 0x00000000)
					eax_171();
				word32 eax_181 = Mem170[0x0040BFE4:word32];
				eax_152 = eax_181 - 0x00000004;
				C_155 = cond(eax_181 - 0x00000004 - Mem170[0x0040BFE8:word32]);
				Mem170[0x0040BFE4:word32] = eax_152;
			}
		}
		if (false)
			do
			{
				if (eax_134 != 0x00000000)
				{
					eax_134();
					eax_134();
				}
				edi_122 = edi_122 + 0x00000004;
			} while (edi_122 <u 0x0040B028);
	}
	if (false)
		do
		{
			if (eax_86 != 0x00000000)
			{
				eax_86();
				eax_86();
			}
			edi_100 = edi_100 + 0x00000004;
		} while (edi_100 <u 0x0040B030);
	word32 esp_63 = fp - 0x00000004;
	if (dwArg0C == 0x00000000)
	{
		Mem73[0x0040BA9C:word32] = 0x00000001;
		esp_63 = fp - 0x00000008;
		edx = fn0040307F(edi);
	}
	word32 ebp_67;
	*ebpOut = Mem30[esp_63 + 0x00000000:word32];
	return edx;
}

void fn004031DA(word32 edi, word32 dwArg00)
{
	word32 ebp_10;
	fn00403119(edi, dwArg00, 0x00000000, 0x00000000, out ebp_10);
	return;
}

word32 fn004031EB(word32 edi, word32 dwArg00, ptr32 ebpOut)
{
	word32 ebp_10;
	return fn00403119(edi, dwArg00, 0x00000001, 0x00000000, out ebp_10);
}

word32 fn004031FC(word32 edi)
{
	word32 ebp_9;
	fn00403119(edi, 0x00000000, 0x00000000, 0x00000001, out ebp_9);
	return ebp_9;
}

word32 fn0040321A(word32 ebx, word32 ebp, word32 edi, selector fs, word32 dwArg04)
{
	word32 eax_8 = Mem0[0x0040B498:word32];
	word32 eax_22 = 0x00000000;
	do
	{
		if (dwArg04 == 0x0040B360[eax_22 * 0x00000008])
			break;
		eax_22 = eax_22 + 0x00000001;
	} while (eax_22 <u 0x00000013);
	word32 esi_137 = eax_22 << 0x00000003;
	if (dwArg04 == Mem0[esi_137 + 0x0040B360:word32])
	{
		word32 eax_76 = Mem0[0x0040BA30:word32];
		if (eax_76 != 0x00000001 && (eax_76 != 0x00000000 || Mem0[0x0040B0BC:word32] != 0x00000001))
			if (dwArg04 != 0x000000FC)
			{
				word32 esp_118 = fp - 0x0000011C;
				if (GetModuleFileNameA(0x00000000, fp + 0xFFFFFEF0, 0x00000104) == 0x00000000)
				{
					Mem212[fp - 0x00000120:word32] = 0x004095CC;
					word32 edi_215;
					fn00404F20(edi, fp + 0xFFFFFEF0, out edi_215);
					esp_118 = fp - 0x0000011C;
				}
				word32 esp_126 = esp_118 - 0x00000004;
				Mem127[esp_126 + 0x00000000:word32] = fp + 0xFFFFFEF0;
				word32 eax_129 = fn00404080(fp + 0xFFFFFEF0, dwArg00);
				word32 edi_124 = fp + 0xFFFFFEF0;
				word32 eax_130 = eax_129 + 0x00000001;
				word32 esp_134 = esp_126 + 0x00000004;
				if (eax_129 >u 0xFFFFFFC5)
				{
					Mem191[esp_126 + 0x00000000:word32] = fp + 0xFFFFFEF0;
					word32 eax_192 = fn00404080(fp + 0xFFFFFEF0, dwArg00);
					Mem197[esp_126 - 0x00000004:word32] = 0x00000003;
					Mem201[esp_126 - 0x00000008:word32] = 0x004095C8;
					edi_124 = eax_192 + (fp + 0xFFFFFEB5);
					Mem203[esp_126 - 0x0000000C:word32] = edi_124;
					word32 ebx_205;
					eax_130 = fn004054F0(ebp, dwArg00, dwArg04, dwArg08, dwArg0C, out ebx_205, out esi_137);
					esp_134 = esp_126 + 0x00000004;
				}
				word32 esp_139 = esp_134 - 0x00000004;
				Mem140[esp_139 + 0x00000000:word32] = edi_124;
				word32 eax_141 = fn00404080(eax_130, dwArg00);
				Mem143[esp_139 - 0x00000004:word32] = Mem140[esi_137 + 0x0040B364:word32];
				fn00403D30(eax_141 + 0x0000001C + fn00404080(eax_141, dwArg00) + 0x00000003 & 0xFFFFFFFC, ebp);
				Mem157[esp_139 + 0x00000000:word32] = 0x004095AC;
				Mem159[esp_139 - 0x00000004:word32] = esp_139 + 0x00000004;
				word32 edi_160;
				fn00404F20(edi_124, dwArg00, out edi_160);
				Mem163[esp_139 - 0x00000008:word32] = edi_160;
				Mem165[esp_139 - 0x0000000C:word32] = esp_139 + 0x00000004;
				word32 edi_166 = fn00404F30(edi_160, dwArg00);
				Mem168[esp_139 - 0x00000010:word32] = 0x004095A8;
				Mem170[esp_139 - 0x00000014:word32] = esp_139 + 0x00000004;
				word32 edi_171 = fn00404F30(edi_166, dwArg00);
				Mem173[esp_139 - 0x00000018:word32] = Mem170[esi_137 + 0x0040B364:word32];
				Mem175[esp_139 - 0x0000001C:word32] = esp_139 + 0x00000004;
				edi = fn00404F30(edi_171, dwArg00);
				Mem178[esp_139 - 0x00000020:word32] = 0x00012010;
				Mem180[esp_139 - 0x00000024:word32] = 0x00409580;
				Mem182[esp_139 - 0x00000028:word32] = esp_139 + 0x00000004;
				ebx = DPB(esp_139 + 0x00000004, fn004053EA(dwArg00, dwArg04, dwArg08, bArg0A), 0, 8);
			}
		else
		{
			WriteFile(GetStdHandle(0xFFFFFFF4), Mem0[esi_137 + 0x0040B364:word32], fn00404080(fp + 0x00000004, Mem0[esi_137 + 0x0040B364:word32]), fp + 0x00000004, 0x00000000);
			esi_137 = esi_137 + 0x0040B364;
		}
	}
	word32 edx_60;
	word32 ebx_61;
	word32 ebp_62;
	word32 esi_63;
	word32 edi_64;
	return fn004041A2(eax_8, ebx, esi_137, edi, fs, out edx_60, out ebx_61, out ebp_62, out esi_63, out edi_64);
}

word32 fn00403391(word32 ebx, word32 ebp, word32 edi, selector fs)
{
	word32 eax_3 = Mem0[0x0040BA30:word32];
	if (eax_3 == 0x00000001 || eax_3 == 0x00000000 && Mem0[0x0040B0BC:word32] == 0x00000001)
	{
		fn0040321A(ebx, ebp, edi, fs, 0x000000FC);
		word32 eax_26 = Mem0[0x0040BAA0:word32];
		word32 esp_31 = fp;
		if (eax_26 != 0x00000000)
			eax_26();
		Mem42[esp_31 - 0x00000004:word32] = 0x000000FF;
		fn0040321A(ebx, ebp, edi, fs, dwArg00);
	}
	return ebp;
}

word32 fn0040353B(word32 eax, word32 ebx, word32 ebp, word32 edi, selector fs)
{
	word32 ebx_188 = 0x00000000;
	word32 esp_13 = fp - 0x0000000C;
	if (Mem0[0x0040BFEC:word32] == 0x00000000)
	{
		word32 edi_190;
		eax = fn004059DE(edi, fs, out ebx_188, out ebp, out edi_190);
	}
	word32 eax_117;
	word32 esi_184 = Mem0[0x0040BA28:word32];
	word32 edi_177 = 0x00000000;
	if (esi_184 == ebx_188)
	{
l0040358B:
		eax_117 = eax | 0xFFFFFFFF;
	}
	else
	{
		byte al_64 = Mem0[esi_184 + 0x00000000:byte];
		word32 eax_65 = DPB(eax, al_64, 0, 8);
		while (al_64 != 0x00)
		{
			if (al_64 != 0x3D)
				edi_177 = edi_177 + 0x00000001;
			word32 esp_178 = esp_13 - 0x00000004;
			Mem179[esp_178 + 0x00000000:word32] = esi_184;
			eax = fn00404080(eax_65, dwArg00);
			esp_13 = esp_178 + 0x00000004;
			esi_184 = esi_184 + 0x00000001 + eax;
			al_64 = Mem0[esi_184 + 0x00000000:byte];
			eax_65 = DPB(eax, al_64, 0, 8);
		}
		word32 esp_69 = esp_13 - 0x00000004;
		Mem70[esp_69 + 0x00000000:word32] = edi_177 * 0x00000004 + 0x00000004;
		word32 edx_71;
		eax = fn00403DDF(ebx, out edx_71);
		Mem79[0x0040BA7C:word32] = eax;
		word32 edi_136 = eax;
		if (eax == ebx_188)
			goto l0040358B;
		else
		{
			word32 esi_138 = Mem79[0x0040BA28:word32];
			Mem82[esp_69 + 0x00000000:word32] = ebp;
			word32 esp_130 = esp_69;
			while (Mem82[esi_138 + 0x00000000:byte] != 0x00)
			{
				word32 esp_121 = esp_130 - 0x00000004;
				Mem122[esp_121 + 0x00000000:word32] = esi_138;
				word32 eax_123 = fn00404080(eax, dwArg00);
				esp_130 = esp_121 + 0x00000004;
				eax = eax_123;
				if (Mem122[esi_138 + 0x00000000:byte] != 0x3D)
				{
					Mem141[esp_121 + 0x00000000:word32] = eax_123 + 0x00000001;
					word32 edx_142;
					word32 eax_143 = fn00403DDF(ebx, out edx_142);
					Mem149[edi_136 + 0x00000000:word32] = eax_143;
					if (eax_143 == ebx_188)
					{
						Mem164[esp_121 + 0x00000000:word32] = Mem149[0x0040BA7C:word32];
						word32 edx_165;
						word32 ebx_166;
						word32 edi_167;
						word32 eax_168 = fn0040403C(dwArg00, out edx_165, out ebx_166, out edi_167);
						Mem169[0x0040BA7C:word32] = ebx_166;
						eax_117 = eax_168 | 0xFFFFFFFF;
						goto l004035E6;
					}
					Mem151[esp_121 + 0x00000000:word32] = esi_138;
					Mem153[esp_121 - 0x00000004:word32] = eax_143;
					word32 edi_154;
					eax = fn00404F20(edi_136, dwArg00, out edi_154);
					esp_130 = esp_121 + 0x00000004;
					edi_136 = edi_154 + 0x00000004;
					goto l004035C1;
				}
l004035C1:
				esi_138 = esi_138 + (eax_123 + 0x00000001);
			}
			Mem108[esp_130 - 0x00000004:word32] = Mem82[0x0040BA28:word32];
			word32 edx_110;
			word32 ebx_111;
			word32 edi_112;
			fn0040403C(dwArg00, out edx_110, out ebx_111, out edi_112);
			Mem114[0x0040BA28:word32] = ebx_111;
			Mem115[edi_112 + 0x00000000:word32] = ebx_111;
			Mem116[0x0040BFE0:word32] = 0x00000001;
			eax_117 = 0x00000000;
l004035E6:
		}
	}
	return eax_117;
}

void fn00403602(word32 eax, word32 ecx, word32 esi, word32 dwArg04, word32 dwArg08)
{
	Mem23[esi + 0x00000000:word32] = 0x00000000;
	Mem26[dwArg08 + 0x00000000:word32] = 0x00000001;
	word32 ebx_13 = dwArg08;
	word32 edx_15 = 0x00000000;
	word32 edi_121 = ecx;
	if (dwArg04 != 0x00000000)
	{
		Mem395[dwArg04 + 0x00000000:word32] = ecx;
		dwArg04 = dwArg04 + 0x00000004;
		goto l00403625;
	}
l00403625:
	do
	{
		byte cl_319;
		if (Mem26[eax + 0x00000000:byte] == 0x22)
		{
			eax = eax + 0x00000001;
			edx_15 = 0x00000000;
			cl_319 = 0x22;
			goto l00403665;
		}
		Mem353[esi + 0x00000000:word32] = Mem26[esi + 0x00000000:word32] + 0x00000001;
		if (edi_121 != 0x00000000)
		{
			Mem388[edi_121 + 0x00000000:byte] = Mem353[eax + 0x00000000:byte];
			edi_121 = edi_121 + 0x00000001;
		}
		cl_319 = Mem353[eax + 0x00000000:byte];
		eax = eax + 0x00000001;
		if ((Mem353[(word32) cl_319 + 0x0040BCA1:byte] & 0x04) != 0x00)
		{
			Mem375[esi + 0x00000000:word32] = Mem353[esi + 0x00000000:word32] + 0x00000001;
			if (edi_121 != 0x00000000)
			{
				Mem384[edi_121 + 0x00000000:byte] = Mem375[eax + 0x00000000:byte];
				edi_121 = edi_121 + 0x00000001;
			}
			eax = eax + 0x00000001;
		}
		ebx_13 = dwArg08;
		if (cl_319 == 0x00)
		{
			eax = eax - 0x00000001;
			goto l0040367B;
		}
l00403665:
		if (edx_15 != 0x00000000)
			continue;
		if (cl_319 == 0x20)
			break;
	} while (cl_319 != 0x09);
	if (edi_121 != 0x00000000)
	{
		Mem337[edi_121 - 0x00000001:byte] = 0x00;
		Mem338[edi_121 - 0x00000001:byte] = 0x00;
	}
l0040367B:
	word32 dwLoc08_116 = ecx & 0x00000000;
	while (Mem26[eax + 0x00000000:byte] != 0x00)
	{
		byte cl_96 = Mem26[eax + 0x00000000:byte];
		while (cl_96 == 0x20 || cl_96 == 0x09)
		{
			eax = eax + 0x00000001;
			cl_96 = Mem26[eax + 0x00000000:byte];
		}
		if (Mem26[eax + 0x00000000:byte] == 0x00)
			break;
		if (dwArg04 != 0x00000000)
		{
			Mem313[dwArg04 + 0x00000000:word32] = edi_121;
			dwArg04 = dwArg04 + 0x00000004;
		}
		Mem114[ebx_13 + 0x00000000:word32] = Mem26[ebx_13 + 0x00000000:word32] + 0x00000001;
		while (true)
		{
			word32 ebx_124 = 0x00000001;
			word32 edx_126 = 0x00000000;
			byte dl_127 = 0x00;
			while (Mem114[eax + 0x00000000:byte] == 0x5C)
			{
				edx_126 = edx_126 + 0x00000001;
				eax = eax + 0x00000001;
				dl_127 = (byte) edx_126;
			}
			if (Mem114[eax + 0x00000000:byte] == 0x22)
			{
				if ((dl_127 & 0x01) == 0x00)
				{
					if (dwLoc08_116 != 0x00000000)
					{
						word32 ecx_300 = eax + 0x00000001;
						if (Mem114[ecx_300 + 0x00000000:byte] == 0x22)
							eax = ecx_300;
						else
						{
l004036DE:
							ebx_124 = 0x00000000;
						}
					}
					else
						goto l004036DE;
					dwLoc08_116 = (word32) (dwLoc08_116 == 0x00000000);
				}
				edx_126 = edx_126 >>u 0x00000001;
			}
			if (edx_126 != 0x00000000)
				do
				{
					if (edi_121 != 0x00000000)
					{
						Mem261[edi_121 + 0x00000000:byte] = 0x5C;
						edi_121 = edi_121 + 0x00000001;
					}
					Mem256[esi + 0x00000000:word32] = Mem114[esi + 0x00000000:word32] + 0x00000001;
					edx_126 = edx_126 - 0x00000001;
				} while (edx_126 != 0x00000000);
			if (cl_156 == 0x00)
			{
l0040374C:
				if (edi_121 != 0x00000000)
				{
					Mem171[edi_121 + 0x00000000:byte] = 0x00;
					edi_121 = edi_121 + 0x00000001;
				}
				Mem167[esi + 0x00000000:word32] = Mem114[esi + 0x00000000:word32] + 0x00000001;
				ebx_13 = dwArg08;
			}
			if (dwLoc08_116 == 0x00000000)
			{
				if (cl_156 == 0x20)
					goto l0040374C;
				if (cl_156 == 0x09)
					;
			}
l00403714:
			if (ebx_124 != 0x00000000)
			{
				if (edi_121 != 0x00000000)
				{
					if ((Mem114[(word32) cl_156 + 0x0040BCA1:byte] & 0x04) != 0x00)
					{
						Mem221[edi_121 + 0x00000000:byte] = cl_156;
						Mem225[esi + 0x00000000:word32] = Mem221[esi + 0x00000000:word32] + 0x00000001;
						word32 edi_222 = edi_121 + 0x00000001;
						Mem226[edi_222 + 0x00000000:byte] = cl_156;
						Mem230[esi + 0x00000000:word32] = Mem226[esi + 0x00000000:word32] + 0x00000001;
						edi_121 = edi_222 + 0x00000001;
						eax = eax + 0x00000001 + 0x00000001;
					}
					Mem218[edi_121 + 0x00000000:byte] = Mem114[eax + 0x00000000:byte];
					edi_121 = edi_121 + 0x00000001;
				}
				else if ((Mem114[(word32) cl_156 + 0x0040BCA1:byte] & 0x04) != 0x00)
				{
					Mem238[esi + 0x00000000:word32] = Mem114[esi + 0x00000000:word32] + 0x00000001;
					eax = eax + 0x00000001;
				}
				Mem206[esi + 0x00000000:word32] = Mem114[esi + 0x00000000:word32] + 0x00000001;
			}
			eax = eax + 0x00000001;
		}
	}
	if (dwArg04 != 0x00000000)
		Mem90[dwArg04 + 0x00000000:word32] = Mem26[dwArg04 + 0x00000000:word32] & 0x00000000;
	Mem81[ebx_13 + 0x00000000:word32] = Mem26[ebx_13 + 0x00000000:word32] + 0x00000001;
	return;
}

word32 fn0040376E(word32 ebp, selector fs)
{
	word32 ebp_111 = fp - 0x00000004;
	word32 edi_112 = 0x00000000;
	if (Mem0[0x0040BFEC:word32] == 0x00000000)
	{
		word32 ebx_110;
		fn004059DE(0x00000000, fs, out ebx_110, out ebp_111, out edi_112);
	}
	word32 ebx_105;
	Mem28[fp - 0x0000001C:word32] = 0x00000104;
	Mem31[fp - 0x00000020:word32] = 0x0040BAA8;
	Mem33[fp - 0x00000024:word32] = edi_112;
	Mem34[0x0040BBAC:byte] = 0x00;
	GetModuleFileNameA(Mem34[fp - 0x00000024:HMODULE], Mem34[fp - 32:LPSTR], Mem34[fp - 28:DWORD]);
	word32 eax_37 = Mem34[0x0040D004:word32];
	Mem40[0x0040BA8C:word32] = 0x0040BAA8;
	if (eax_37 != edi_112)
	{
		ebx_105 = eax_37;
		if (Mem40[eax_37 + 0x00000000:byte] == 0x00)
		{
l004037B4:
			ebx_105 = 0x0040BAA8;
		}
	}
	else
		goto l004037B4;
	word32 eax_100;
	Mem44[fp - 0x0000001C:word32] = ebp_111 - 0x00000004;
	Mem46[fp - 0x00000020:word32] = edi_112;
	fn00403602(ebx_105, 0x00000000, ebp_111 - 0x00000008, dwArg00, dwArg04);
	word32 esi_54 = Mem46[ebp_111 - 0x00000004:word32];
	Mem60[fp - 0x00000024:word32] = Mem46[ebp_111 - 0x00000008:word32] + (esi_54 << 0x00000002);
	word32 edx_61;
	word32 eax_62 = fn00403DDF(ebp, out edx_61);
	if (eax_62 == 0x00000000)
		eax_100 = eax_62 | 0xFFFFFFFF;
	else
	{
		Mem86[fp - 0x0000001C:word32] = ebp_111 - 0x00000004;
		Mem89[fp - 0x00000020:word32] = eax_62;
		fn00403602(ebx_105, (esi_54 << 0x00000002) + eax_62, ebp_111 - 0x00000008, dwArg00, dwArg04);
		Mem96[0x0040BA70:word32] = Mem89[ebp_111 - 0x00000004:word32] - 0x00000001;
		Mem99[0x0040BA74:word32] = eax_62;
		eax_100 = 0x00000000;
	}
	return eax_100;
}

word32 fn00403810(word32 ebx)
{
	word32 eax_149;
	word32 eax_208 = Mem0[0x0040BBB0:word32];
	word32 edi_21 = GetEnvironmentStringsW;
	word32 ebx_143 = 0x00000000;
	word16 bx_23 = 0x0000;
	word32 esi_205 = 0x00000000;
	if (eax_208 == 0x00000000)
	{
		eax_208 = GetEnvironmentStringsW();
		esi_205 = eax_208;
		if (eax_208 != 0x00000000)
		{
			Mem270[0x0040BBB0:word32] = 0x00000001;
l0040385E:
			if (esi_205 == 0x00000000)
			{
				edi_21();
				esi_205 = eax_208;
				if (eax_208 != 0x00000000)
				{
l0040386A:
					word32 eax_104 = esi_205;
					if (Mem0[esi_205 + 0x00000000:word16] != bx_23)
						do
						{
							eax_104 = eax_104 + 0x00000002;
							if (Mem0[eax_104 + 0x00000000:word16] != bx_23)
								continue;
							eax_104 = eax_104 + 0x00000002;
						} while (Mem0[eax_104 + 0x00000002:word16] != bx_23);
					Mem108[fp - 0x0000001C:word32] = 0x00000000;
					word32 eax_127 = WideCharToMultiByte(0x00000000, 0x00000000, esi_205, (eax_104 - esi_205 >> 0x00000001) + 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000002);
					if (eax_127 != 0x00000000)
					{
						Mem151[fp - 0x0000001C:word32] = eax_127;
						word32 edx_152;
						word32 eax_153 = fn00403DDF(0x00000000, out edx_152);
						word32 dwLoc08_158 = eax_153;
						if (eax_153 != 0x00000000)
						{
							Mem162[fp - 0x00000020:word32] = 0x00000000;
							Mem164[fp - 0x00000024:word32] = eax_127;
							Mem166[fp - 0x00000028:word32] = eax_153;
							Mem172[fp - 0x00000034:word32] = 0x00000000;
							Mem174[fp - 0x00000038:word32] = 0x00000000;
							if (WideCharToMultiByte(0x00000000, 0x00000000, esi_205, eax_153, 0x00000000, 0x00000000, 0x00000000, 0x00000000) == 0x00000000)
							{
								Mem190[fp - 0x0000001C:word32] = ebx;
								word32 edx_191;
								word32 ebx_192;
								word32 edi_193;
								fn0040403C(0x00000000, out edx_191, out ebx_192, out edi_193);
								dwLoc08_158 = ebx_192;
							}
							ebx_143 = dwLoc08_158;
						}
					}
					FreeEnvironmentStringsW(esi_205);
					eax_149 = ebx_143;
				}
				else
				{
l004038E3:
					eax_149 = 0x00000000;
				}
			}
			else
				goto l0040386A;
		}
		else
		{
			if (GetLastError() == 0x00000078)
			{
				Mem275[0x0040BBB0:word32] = 0x00000002;
				eax_208 = 0x00000002;
			}
			else
				eax_208 = Mem0[0x0040BBB0:word32];
l00403859:
			if (eax_208 == 0x00000001)
				goto l0040385E;
			else if (eax_208 != 0x00000002 && eax_208 != 0x00000000)
				goto l004038E3;
			else
			{
				word32 eax_214 = GetEnvironmentStrings();
				if (eax_214 != 0x00000000)
				{
					word32 eax_220;
					eax_220 = eax_214;
					eax_220 = eax_214;
					if (Mem0[eax_214 + 0x00000000:byte] != 0x00)
						do
						{
							eax_220 = eax_220 + 0x00000001;
							if (Mem0[eax_220 + 0x00000000:byte] != 0x00)
								continue;
							eax_220 = eax_220 + 0x00000001;
						} while (Mem0[eax_220 + 0x00000001:byte] != 0x00);
					word32 eax_221 = eax_220 - eax_214;
					Mem227[fp - 0x0000001C:word32] = eax_221 + 0x00000001;
					word32 edx_228;
					word32 eax_229 = fn00403DDF(dwLoc20, out edx_228);
					word32 edi_230 = eax_229;
					if (eax_229 == 0x00000000)
						edi_230 = 0x00000000;
					else
						fn00405A00(eax_229, eax_214, eax_221 + 0x00000001);
					FreeEnvironmentStringsA(eax_214);
					eax_149 = edi_230;
				}
				else
					goto l004038E3;
			}
		}
	}
	else
		goto l00403859;
	return eax_149;
}

word32 fn00403932(word32 ebx, ptr32 ebpOut)
{
	*ebpOut = ebp;
	word32 eax_112;
	word32 edx_7;
	word32 eax_318 = fn00403DDF(dwLoc4C, out edx_7);
	if (eax_318 == 0x00000000)
		eax_112 = eax_318 | 0xFFFFFFFF;
	else
	{
		Mem46[0x0040BEE0:word32] = eax_318;
		Mem47[0x0040BEC8:word32] = 0x00000020;
		word32 ecx_319 = eax_318 + 0x00000100;
		while (eax_318 <u ecx_319)
		{
			Mem313[eax_318 + 0x00000000:word32] = Mem47[eax_318 + 0x00000000:word32] | 0xFFFFFFFF;
			Mem315[eax_318 + 0x00000004:byte] = 0x00;
			Mem316[eax_318 + 0x00000005:byte] = 0x0A;
			eax_318 = eax_318 + 0x00000008;
			ecx_319 = Mem316[0x0040BEE0:word32] + 0x00000100;
		}
		Mem57[fp - 0x00000048:word32] = ebx;
		GetStartupInfoA(fp - 0x00000044);
		word32 esp_100 = fp - 0x00000050;
		if (wLoc12 != 0x0000 && dwLoc10 != 0x00000000)
		{
			word32 esi_176 = Mem57[dwLoc10 + 0x00000000:word32];
			word32 ebp_179 = dwLoc10 + 0x00000004;
			word32 ebx_183 = esi_176 + (dwLoc10 + 0x00000004);
			if (esi_176 >= 0x00000800)
				esi_176 = 0x00000800;
			if (Mem57[0x0040BEC8:word32] < esi_176)
			{
				word32 edi_270 = 0x0040BEE4;
				do
				{
					Mem276[fp - 0x00000058:word32] = 0x00000100;
					word32 edx_278;
					word32 eax_279 = fn00403DDF(dwLoc5C, out edx_278);
					if (eax_279 == 0x00000000)
					{
						esi_176 = Mem276[0x0040BEC8:word32];
						goto l00403A15;
					}
					Mem286[0x0040BEC8:word32] = Mem276[0x0040BEC8:word32] + 0x00000020;
					Mem288[edi_270 + 0x00000000:word32] = eax_279;
					word32 ecx_289 = eax_279 + 0x00000100;
					while (eax_279 <u ecx_289)
					{
						Mem301[eax_279 + 0x00000000:word32] = Mem288[eax_279 + 0x00000000:word32] | 0xFFFFFFFF;
						Mem303[eax_279 + 0x00000004:byte] = 0x00;
						Mem304[eax_279 + 0x00000005:byte] = 0x0A;
						eax_279 = eax_279 + 0x00000008;
						ecx_289 = Mem304[edi_270 + 0x00000000:word32] + 0x00000100;
					}
					edi_270 = edi_270 + 0x00000004;
				} while (Mem288[0x0040BEC8:word32] < esi_176);
			}
l00403A15:
			word32 edi_196 = 0x00000000;
			if (esi_176 > 0x00000000)
				do
				{
					word32 eax_224 = Mem57[ebx_183 + 0x00000000:word32];
					if (eax_224 != 0xFFFFFFFF)
					{
						byte cl_240 = Mem57[ebp_179 + 0x00000000:byte];
						if ((cl_240 & 0x01) != 0x00 && ((cl_240 & 0x08) != 0x00 || GetFileType(eax_224) != 0x00000000))
						{
							word32 eax_258 = 0x0040BEE0[(edi_196 >> 0x00000005) * 0x00000004] + (edi_196 & 0x0000001F) * 0x00000008;
							Mem260[eax_258 + 0x00000000:word32] = Mem57[ebx_183 + 0x00000000:word32];
							Mem262[eax_258 + 0x00000004:byte] = Mem260[ebp_179 + 0x00000000:byte];
						}
					}
					edi_196 = edi_196 + 0x00000001;
					ebp_179 = ebp_179 + 0x00000001;
					ebx_183 = ebx_183 + 0x00000004;
				} while (edi_196 < esi_176);
			word32 ebp_212;
			*ebpOut = edi;
			esp_100 = fp - 0x0000004C;
		}
		word32 ebx_101 = 0x00000000;
		do
		{
			word32 esi_92 = Mem57[0x0040BEE0:word32] + ebx_101 * 0x00000008;
			if (Mem57[esi_92 + 0x00000000:word32] == 0xFFFFFFFF)
			{
				word32 eax_121;
				Mem120[esi_92 + 0x00000004:byte] = 0x81;
				if (ebx_101 == 0x00000000)
				{
					word32 esp_156 = esp_100 - 0x00000004;
					Mem157[esp_156 + 0x00000000:word32] = 0xFFFFFFF6;
					eax_121 = Mem157[esp_156 + 0x00000000:word32];
					esp_100 = esp_156 + 0x00000004;
				}
				else
					eax_121 = 0x00000000 - (-(ebx_101 - 0x00000001) == 0x00000000) + 0xFFFFFFF5;
				word32 esp_124 = esp_100 - 0x00000004;
				Mem125[esp_124 + 0x00000000:word32] = eax_121;
				word32 eax_126 = GetStdHandle(Mem125[esp_124 + 0x00000000:DWORD]);
				esp_100 = esp_124 + 0x00000004;
				if (eax_126 != 0xFFFFFFFF)
				{
					Mem140[esp_124 + 0x00000000:word32] = eax_126;
					word32 eax_141 = GetFileType(Mem140[esp_124 + 0x00000000:HANDLE]);
					esp_100 = esp_124 + 0x00000004;
					if (eax_141 != 0x00000000)
					{
						Mem149[esi_92 + 0x00000000:word32] = eax_126;
						if ((eax_141 & 0x000000FF) == 0x00000002)
						{
l00403AAD:
							Mem136[esi_92 + 0x00000004:byte] = Mem125[esi_92 + 0x00000004:byte] | 0x40;
						}
						else if ((eax_141 & 0x000000FF) == 0x00000003)
							Mem153[esi_92 + 0x00000004:byte] = Mem149[esi_92 + 0x00000004:byte] | 0x08;
					}
					else
						goto l00403AAD;
				}
				else
					goto l00403AAD;
			}
			else
				Mem168[esi_92 + 0x00000004:byte] = Mem57[esi_92 + 0x00000004:byte] | 0x80;
			ebx_101 = ebx_101 + 0x00000001;
		} while (ebx_101 < 0x00000003);
		word32 esp_104 = esp_100 - 0x00000004;
		Mem105[esp_104 + 0x00000000:word32] = Mem57[0x0040BEC8:word32];
		SetHandleCount(Mem105[esp_104 + 0x00000000:UINT]);
		eax_112 = 0x00000000;
	}
	return eax_112;
}

word32 fn00403ADD(word32 ebx, word32 esi, word32 edi, selector fs, ptr32 ebpOut, ptr32 ediOut)
{
	word32 ebp_11 = fn00403BD0(ebx, esi, edi, fs, dwLoc0C, 0x004095E8, 0x0000000C);
	Mem12[ebp_11 - 0x0000001C:word32] = 0x00409DFC;
	while (Mem12[ebp_11 - 0x0000001C:word32] <u 0x00409DFC)
	{
		word32 v6_29 = Mem12[ebp_11 - 0x00000004:word32] & 0x00000000;
		Mem30[ebp_11 - 0x00000004:word32] = v6_29;
		word32 eax_33 = Mem30[Mem30[ebp_11 - 0x0000001C:word32]:word32];
		if (eax_33 != 0x00000000)
			eax_33();
		Mem48[ebp_11 - 0x00000004:word32] = Mem30[ebp_11 - 0x00000004:word32] | 0xFFFFFFFF;
		Mem51[ebp_11 - 0x0000001C:word32] = Mem48[ebp_11 - 0x0000001C:word32] + 0x00000004;
	}
	word32 ebp_58;
	word32 esi_59;
	word32 edi_60;
	word16 cx_61;
	return fn00403C0B(ebp_11, fs, 0x0000000C, dwArg00, dwArg04, dwArg08, out ebp_58, out esi_59, out edi_60, out cx_61);
}

word32 fn00403B65()
{
	if (Mem0[0x0040BA5C:word32] == 0x00000002 && Mem0[0x0040BA68:word32] >=u 0x00000005)
		return 0x00000001;
	else
		return 0x00000003;
}

word32 fn00403B7F(word32 dwArg04)
{
	word32 eax_14 = HeapCreate((word32) (dwArg04 == 0x00000000), 0x00001000, 0x00000000);
	Mem19[0x0040BEC0:word32] = eax_14;
	if (eax_14 != 0x00000000)
	{
		word32 eax_37 = fn00403B65();
		Mem40[0x0040BEC4:word32] = eax_37;
		if (eax_37 == 0x00000003)
		{
			Mem50[fp - 0x00000004:word32] = 0x000003F8;
			if (fn00405D3D(0x00000000) == 0x00000000)
			{
				Mem58[fp - 0x00000004:word32] = Mem50[0x0040BEC0:word32];
				HeapDestroy(0x000003F8);
l00403BC9:
				return 0x00000000;
			}
			else
			{
l00403BCC:
				return 0x00000001;
			}
		}
		else
			goto l00403BCC;
	}
	else
		goto l00403BC9;
}

word32 fn00403BD0(word32 ebx, word32 esi, word32 edi, selector fs, word32 dwArg00, word32 dwArg04, word32 dwArg08)
{
	word32 esp_14 = fp - 0x00000008 - dwArg08;
	Mem18[esp_14 - 0x00000004:word32] = ebx;
	Mem21[esp_14 - 0x00000008:word32] = esi;
	Mem24[esp_14 - 0x0000000C:word32] = edi;
	Mem29[esp_14 - 0x00000010:word32] = dwArg00;
	Mem35[fs:0x00000000:word32] = fp - 0x00000008;
	return fp + 0x00000008;
}

word32 fn00403C0B(word32 ebp, selector fs, word32 dwArg00, word32 dwArg04, word32 dwArg08, word32 dwArg0C, ptr32 ebpOut, ptr32 esiOut, ptr32 ediOut, ptr32 cxOut)
{
	Mem5[fs:0x00000000:word32] = Mem0[ebp - 0x00000010:word32];
	word32 ebp_20;
	*ebpOut = Mem5[ebp + 0x00000000:word32];
	Mem23[ebp + 0x00000000:word32] = dwArg00;
	word16 cx_9;
	*cxOut = (word16) dwArg00;
	word32 edi_12;
	*ediOut = dwArg04;
	word32 esi_15;
	*esiOut = dwArg08;
	return dwArg0C;
}

void fn00403D30(word32 eax, word32 dwArg00)
{
	if (eax <u 0x00001000)
	{
		Mem24[-eax + fp:word32] = dwArg00;
		return;
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
		return;
	}
}

word32 fn00403D6D(word32 dwArg04, ptr32 edxOut)
{
	*edxOut = edx;
	word32 eax_27;
	word32 esi_43 = dwArg04;
	if (Mem0[0x0040BEC4:word32] == 0x00000003 && dwArg04 <=u Mem0[0x0040BC84:word32])
	{
		word32 edx_68;
		eax_27 = fn00406564(dwArg04, dwArg04, SLICE(dwArg04, byte, 24), out edx_68);
		if (eax_27 == 0x00000000)
		{
l00403D8E:
			if (dwArg04 == 0x00000000)
				esi_43 = dwArg04 + 0x00000001;
			if (Mem0[0x0040BEC4:word32] != 0x00000001)
				esi_43 = esi_43 + 0x0000000F & 0xFFFFFFF0;
			eax_27 = HeapAlloc(Mem0[0x0040BEC0:word32], 0x00000000, esi_43);
		}
	}
	else
		goto l00403D8E;
	return eax_27;
}

word32 fn00403DB3(word32 dwArg00, word32 dwArg04, word32 dwArg08, ptr32 edxOut)
{
	*edxOut = edx;
	word32 eax_15;
	if (dwArg04 <=u 0xFFFFFFE0)
	{
l00403DBA:
		do
		{
			word32 edx_32;
			eax_15 = fn00403D6D(dwArg00, out edx_32);
			if (eax_15 != 0x00000000 || dwArg08 == eax_15)
				goto l00403DDE;
		} while (fn00406B77(dwLoc08) != 0x00000000);
l00403DDC:
		eax_15 = 0x00000000;
	}
	else
		goto l00403DDC;
	return eax_15;
}

word32 fn00403DDF(word32 dwArg00, ptr32 edxOut)
{
	word32 edx_9;
	return fn00403DB3(dwLoc0C, dwArg00, Mem0[0x0040BC48:word32], out edx_9);
}

word32 fn00403DF1(word32 dwArg04)
{
	if (dwArg04 >=u Mem0[0x0040BEC8:word32])
		return 0x00000000;
	else
		return (int32) (0x0040BEE0[(dwArg04 >> 0x00000005) * 0x00000004] + 0x00000004)[(dwArg04 & 0x0000001F) * 0x08] & 0x00000040;
}

word32 fn00403E18(word32 edx, selector fs, word32 dwArg04)
{
	word32 eax_11 = Mem0[dwArg04 + 0x0000000C:word32];
	word16 ax_12 = (word16) eax_11;
	if (((byte) eax_11 & 0x03) == 0x02 && (ax_12 & 0x0108) != 0x0000)
	{
		word32 eax_55 = Mem0[dwArg04 + 0x00000008:word32];
		word32 edi_61 = Mem0[dwArg04 + 0x00000000:word32] - eax_55;
		if (edi_61 > 0x00000000)
		{
			word32 edx_87;
			if (fn00406B92(edx, 0x00000000, dwArg04, edi_61, fs, Mem0[dwArg04 + 0x00000010:word32], eax_55, edi_61, out edx_87) == edi_61)
			{
				word32 eax_92 = Mem0[dwArg04 + 0x0000000C:word32];
				if ((byte) eax_92 < 0x00)
					Mem101[dwArg04 + 0x0000000C:word32] = eax_92 & 0xFFFFFFFD;
			}
			else
				Mem103[dwArg04 + 0x0000000C:word32] = Mem0[dwArg04 + 0x0000000C:word32] | 0x00000020;
		}
	}
	word32 eax_40 = Mem0[dwArg04 + 0x00000008:word32];
	Mem42[dwArg04 + 0x00000004:word32] = Mem0[dwArg04 + 0x00000004:word32] & 0x00000000;
	Mem45[dwArg04 + 0x00000000:word32] = eax_40;
	return ebp;
}

word32 fn00403F26(word32 edx, selector fs, word32 dwArg08, ptr32 edxOut)
{
	*edxOut = edx;
	word32 eax_117;
	word32 eax_132;
	word32 eax_15 = Mem0[dwArg08 + 0x0000000C:word32];
	byte al_16 = (byte) eax_15;
	word32 ebx_21 = Mem0[dwArg08 + 0x00000010:word32];
	if ((al_16 & 0x82) == 0x00 || (al_16 & 0x40) != 0x00)
		goto l0040402F;
	else if ((al_16 & 0x01) != 0x00)
	{
		Mem258[dwArg08 + 0x00000004:word32] = Mem0[dwArg08 + 0x00000004:word32] & 0x00000000;
		if ((al_16 & 0x10) != 0x00)
		{
			Mem267[dwArg08 + 0x00000000:word32] = Mem258[dwArg08 + 0x00000008:word32];
			Mem268[dwArg08 + 0x0000000C:word32] = eax_15 & 0xFFFFFFFE;
l00403F5F:
			word32 eax_87 = Mem0[dwArg08 + 0x0000000C:word32];
			Mem89[dwArg08 + 0x00000004:word32] = Mem0[dwArg08 + 0x00000004:word32] & 0x00000000;
			word32 eax_95 = eax_87 & 0xFFFFFFEF | 0x00000002;
			Mem100[dwArg08 + 0x0000000C:word32] = eax_95;
			if (((word16) eax_95 & 0x010C) == 0x0000 && (dwArg08 != 0x0040B0E8 && dwArg08 != 0x0040B108 || fn00403DF1(ebx_21) == 0x00000000))
				fn00406E65(dwArg08, out edx);
			word32 edi_116;
			if ((Mem100[dwArg08 + 0x0000000C:word16] & 0x0108) != 0x0000)
			{
				word32 eax_137 = Mem100[dwArg08 + 0x00000008:word32];
				word32 edi_140 = Mem100[dwArg08 + 0x00000000:word32];
				Mem142[dwArg08 + 0x00000000:word32] = eax_137 + 0x00000001;
				Mem148[dwArg08 + 0x00000004:word32] = Mem142[dwArg08 + 0x00000018:word32] - 0x00000001;
				edi_116 = edi_140 - eax_137;
				if (edi_116 > 0x00000000)
				{
					word32 edx_185;
					Mem187[fp + 0x00000008:word32] = fn00406B92(edx, ebx_21, dwArg08, edi_116, fs, ebx_21, eax_137, edi_116, out edx_185);
l00403FF8:
				}
				else
				{
					word32 eax_191;
					if (ebx_21 != 0xFFFFFFFF)
						eax_191 = 0x0040BEE0[(ebx_21 >> 0x00000005) * 0x00000004] + (ebx_21 & 0x0000001F) * 0x00000008;
					else
						eax_191 = 0x0040B480;
					if ((Mem148[eax_191 + 0x00000004:byte] & 0x20) != 0x00)
					{
						fn00406DD9(ebx_21, 0x00000000);
						goto l00403FF8;
					}
				}
				eax_117 = Mem148[dwArg08 + 0x00000008:word32];
				Mem163[eax_117 + 0x00000000:byte] = Mem148[fp + 0x00000004:byte];
			}
			else
			{
				word32 edx_227;
				eax_117 = fn00406B92(edx, ebx_21, dwArg08, 0x00000001, fs, ebx_21, fp + 0x00000004, 0x00000001, out edx_227);
				Mem233[fp + 0x00000008:word32] = eax_117;
				edi_116 = 0x00000001;
			}
			if (Mem100[fp + 0x00000008:word32] != edi_116)
			{
				Mem128[dwArg08 + 0x0000000C:word32] = Mem100[dwArg08 + 0x0000000C:word32] | 0x00000020;
l00404035:
				eax_132 = eax_117 | 0xFFFFFFFF;
			}
			else
				eax_132 = Mem100[fp + 0x00000004:word32] & 0x000000FF;
		}
		else
		{
l0040402F:
			Mem70[dwArg08 + 0x0000000C:word32] = eax_15 | 0x00000020;
			eax_117 = eax_15 | 0x00000020;
			goto l00404035;
		}
	}
	else
		goto l00403F5F;
	return eax_132;
}

word32 fn0040403C(word32 dwArg04, ptr32 edxOut, ptr32 ebxOut, ptr32 ediOut)
{
	*edxOut = edx;
	*ebxOut = ebx;
	*ediOut = edi;
	if (dwArg04 != 0x00000000)
	{
		word32 dwLoc08_52 = dwArg04;
		if (Mem0[0x0040BEC4:word32] == 0x00000003)
		{
			word32 edx_65;
			word32 eax_66 = fn00405D85(dwArg04, out edx_65);
			dwLoc08_52 = dwArg04;
			if (eax_66 != 0x00000000)
			{
				word32 edx_77;
				byte bl_78;
				return fn00405DB0(eax_66, dwArg04, bLoc05, out edx_77, out bl_78);
			}
			else
			{
l00404064:
				eax = HeapFree(Mem0[0x0040BEC0:word32], 0x00000000, dwLoc08_52);
l00404072:
				return eax;
			}
		}
		else
			goto l00404064;
	}
	else
		goto l00404072;
}

word32 fn00404080(word32 eax, word32 dwArg04)
{
	word32 ecx_26 = dwArg04;
	if ((dwArg04 & 0x00000003) != 0x00000000)
	{
l0040408C:
		do
		{
			ecx_26 = ecx_26 + 0x00000001;
			if (Mem0[ecx_26 + 0x00000000:byte] == 0x00)
				return ecx_26 - 0x00000001 - dwArg04;
		} while ((ecx_26 & 0x00000003) != 0x00000000);
l004040B0:
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
		goto l004040B0;
fn00404080_exit:
}

word32 fn004041A2(word32 ecx, word32 ebx, word32 esi, word32 edi, selector fs, ptr32 edxOut, ptr32 ebxOut, ptr32 ebpOut, ptr32 esiOut, ptr32 ediOut)
{
	*edxOut = edx;
	*ebxOut = ebx;
	*ebpOut = ebp;
	*esiOut = esi;
	*ediOut = edi;
	while (ecx != Mem0[0x0040B498:word32])
	{
		Mem27[fp - 0x00000004:word32] = 0x00000008;
		Mem29[fp - 0x00000008:word32] = 0x00409B10;
		word32 ebp_34 = fn00403BD0(ebx, esi, edi, fs, dwLoc0C, dwLoc08, dwLoc04);
		Mem36[ebp_34 - 0x00000004:word32] = Mem29[ebp_34 - 0x00000004:word32] & 0x00000000;
		Mem40[fp - 0x0000000C:word32] = 0x00000000;
		Mem42[fp - 0x00000010:word32] = 0x00000001;
		word32 edx_43;
		word32 ebp_45;
		eax = fn00406F0F(ebx, esi, edi, fs, out edx_43, out ebx, out ebp_45);
		ecx = Mem42[fp - 0x0000000C:word32];
		Mem52[ebp_45 - 0x00000004:word32] = Mem42[ebp_45 - 0x00000004:word32] | 0xFFFFFFFF;
		Mem56[fp - 0x0000000C:word32] = 0x00000003;
		ExitProcess(Mem56[fp - 0x0000000C:UINT]);
		int3();
	}
	return eax;
}

word32 fn00404245(word32 dwArg04, word32 dwArg08)
{
	word32 esi_101;
	word32 esi_11 = dwArg04 *s dwArg08;
	esi_101 = esi_11;
	if (esi_11 == 0x00000000)
	{
		esi_101 = esi_11 + 0x00000001;
		goto l00404258;
	}
l00404258:
	do
	{
		word32 eax_45;
		word32 edi_110 = 0x00000000;
		if (esi_101 <=u 0xFFFFFFE0)
		{
			if (Mem0[0x0040BEC4:word32] == 0x00000003)
			{
				word32 esi_114 = esi_101 + 0x0000000F;
				esi_101 = esi_114 & 0xFFFFFFF0;
				if (esi_11 <=u Mem0[0x0040BC84:word32])
				{
					word32 edx_121;
					word32 eax_122 = fn00406564(esi_114 & 0xFFFFFFF0, esi_11, SLICE(esi_11, byte, 24), out edx_121);
					edi_110 = eax_122;
					if (eax_122 != 0x00000000)
					{
						Mem132[fp - 0x00000014:word32] = 0x00000000;
						fn004045E0(eax_122, bLoc14, esi_11);
						goto l004042BA;
					}
				}
			}
l00404283:
			Mem105[fp - 0x00000014:word32] = 0x00000008;
			word32 eax_108 = HeapAlloc(Mem105[0x0040BEC0:word32], 0x00000008, esi_101);
			edi_110 = eax_108;
			if (eax_108 != 0x00000000)
				;
		}
l00404298:
		if (Mem0[0x0040BC48:word32] == 0x00000000)
		{
l004042BA:
			eax_45 = edi_110;
			goto l004042BC;
		}
		eax_45 = fn00406B77(dwLoc14);
	} while (eax_45 != 0x00000000);
l004042BC:
	return eax_45;
}

word32 fn00404318(word32 ebx, word32 esi, word32 edi, selector fs, word32 dwArg04, ptr32 ebxOut, ptr32 ediOut)
{
	*ebxOut = ebx;
	*ediOut = edi;
	word32 eax_137;
	word32 ebp_124 = fp - 0x00000004;
	if (dwArg04 <=u 0xFFFFFF01)
	{
		eax_137 = (word32) Mem0[0x0040B490:word32][dwArg04 * 0x0002];
l00404391:
		return eax_137 & Mem0[ebp_124 + 0x0000000C:word32];
	}
	else
	{
		if (((Mem0[0x0040B490:word32] + 0x00000001)[(word32) (byte) (dwArg04 >> 0x00000008) * 0x02] & 0x80) != 0x00)
			;
		word32 ebx_123;
		word32 esi_125;
		word32 edi_126;
		word16 cx_127;
		word32 eax_128 = fn004070AD(ebx, esi, edi, (word16) (fp + 0x00000006), fs, out ebx_123, out ebp_124, out esi_125, out edi_126, out cx_127);
		if (eax_128 == 0x00000000)
			return eax_128;
		else
		{
			eax_137 = (word32) Mem0[ebp_124 + 0x0000000A:word16];
			goto l00404391;
		}
	}
}

word32 fn00404396(word32 dwArg04)
{
	word32 eax_45 = Mem0[dwArg04 + 0x0000000C:word32];
	byte al_9 = (byte) eax_45;
	if ((al_9 & 0x83) == 0x00 || (al_9 & 0x40) != 0x00)
		goto l0040446F;
	else if ((al_9 & 0x02) != 0x00)
	{
		Mem68[dwArg04 + 0x0000000C:word32] = eax_45 | 0x00000020;
		eax_45 = eax_45 | 0x00000020;
l0040446F:
		return eax_45 | 0xFFFFFFFF;
	}
	else
	{
		word32 eax_183;
		Mem74[dwArg04 + 0x0000000C:word32] = eax_45 | 0x00000001;
		if (((word16) (eax_45 | 0x00000001) & 0x010C) == 0x0000)
		{
			word32 edx_182;
			eax_183 = fn00406E65(dwArg04, out edx_182);
		}
		else
		{
			eax_183 = Mem74[dwArg04 + 0x00000008:word32];
			Mem191[dwArg04 + 0x00000000:word32] = eax_183;
		}
		word32 eax_84 = fn00407267(eax_183, Mem74[dwArg04 + 0x00000010:word32], Mem74[dwArg04 + 0x00000008:word32], Mem74[dwArg04 + 0x00000018:word32]);
		Mem91[dwArg04 + 0x00000004:word32] = eax_84;
		if (eax_84 != 0x00000000 && eax_84 != 0xFFFFFFFF)
		{
			word32 edx_110 = Mem91[dwArg04 + 0x0000000C:word32];
			if (((byte) edx_110 & 0x82) == 0x00)
			{
				word32 edi_158;
				word32 ecx_151 = Mem91[dwArg04 + 0x00000010:word32];
				if (ecx_151 != 0xFFFFFFFF)
					edi_158 = 0x0040BEE0[(ecx_151 >> 0x00000005) * 0x00000004] + (ecx_151 & 0x0000001F) * 0x00000008;
				else
					edi_158 = 0x0040B480;
				if ((Mem91[edi_158 + 0x00000004:byte] & 0x82) == 0x82)
					Mem171[dwArg04 + 0x0000000C:word32] = edx_110 | 0x00002000;
			}
			if (Mem91[dwArg04 + 0x00000018:word32] == 0x00000200)
			{
				word32 ecx_141 = Mem91[dwArg04 + 0x0000000C:word32];
				byte ch_143 = SLICE(ecx_141, byte, 8);
				if (((byte) ecx_141 & 0x08) != 0x00 && (ch_143 & 0x04) == 0x00)
					Mem150[dwArg04 + 0x00000018:word32] = 0x00001000;
			}
			word32 ecx_130 = Mem91[dwArg04 + 0x00000000:word32];
			Mem132[dwArg04 + 0x00000004:word32] = eax_84 - 0x00000001;
			word32 eax_133 = (word32) Mem132[ecx_130 + 0x00000000:byte];
			Mem138[dwArg04 + 0x00000000:word32] = ecx_130 + 0x00000001;
			return eax_133;
		}
		else
		{
			eax_45 = (0x00000000 - (-eax_84 == 0x00000000) & 0x00000010) + 0x00000010;
			Mem102[dwArg04 + 0x0000000C:word32] = Mem91[dwArg04 + 0x0000000C:word32] | eax_45;
			Mem105[dwArg04 + 0x00000004:word32] = Mem102[dwArg04 + 0x00000004:word32] & 0x00000000;
			goto l0040446F;
		}
	}
}

word32 fn00404474(word32 eax, word32 dwArg04, word32 dwArg08)
{
	word32 eax_24;
	byte bl_7 = (byte) dwArg04;
	if (dwArg04 != 0xFFFFFFFF)
	{
		eax = Mem0[dwArg08 + 0x0000000C:word32];
		byte al_49 = (byte) eax;
		if ((al_49 & 0x01) == 0x00 && (al_49 >= 0x00 || (al_49 & 0x02) != 0x00))
		{
l004044C0:
			eax_24 = eax | 0xFFFFFFFF;
		}
		else
		{
			if (Mem0[dwArg08 + 0x00000008:word32] == 0x00000000)
			{
				word32 edx_101;
				fn00406E65(dwArg08, out edx_101);
			}
			eax = Mem0[dwArg08 + 0x00000000:word32];
			if (eax != Mem0[dwArg08 + 0x00000008:word32])
				goto l004044AF;
			else if (Mem0[dwArg08 + 0x00000004:word32] == 0x00000000)
			{
				Mem98[dwArg08 + 0x00000000:word32] = eax + 0x00000001;
l004044AF:
				Mem68[dwArg08 + 0x00000000:word32] = Mem0[dwArg08 + 0x00000000:word32] - 0x00000001;
				word32 eax_72 = Mem68[dwArg08 + 0x00000000:word32];
				if ((Mem68[dwArg08 + 0x0000000C:byte] & 0x40) == 0x00)
				{
					Mem93[eax_72 + 0x00000000:byte] = bl_7;
					goto l004044C8;
				}
				else if (Mem68[eax_72 + 0x00000000:byte] != bl_7)
				{
					Mem92[dwArg08 + 0x00000000:word32] = eax_72 + 0x00000001;
					eax = eax_72 + 0x00000001;
					goto l004044C0;
				}
				else
				{
l004044C8:
					word32 eax_76 = Mem68[dwArg08 + 0x0000000C:word32];
					Mem78[dwArg08 + 0x00000004:word32] = Mem68[dwArg08 + 0x00000004:word32] + 0x00000001;
					Mem81[dwArg08 + 0x0000000C:word32] = eax_76 & 0xFFFFFFEF | 0x00000001;
					eax_24 = dwArg04 & 0x000000FF;
				}
			}
			else
				goto l004044C0;
		}
	}
	else
		goto l004044C0;
	return eax_24;
}

word32 fn004044E0(word32 ebx, word32 esi, word32 edi, selector fs, word32 dwArg00, word32 dwArg04, ptr32 ebxOut, ptr32 ebpOut, ptr32 esiOut, ptr32 ediOut)
{
	*ebpOut = ebp;
	*esiOut = esi;
	*ebxOut = ebx;
	*ediOut = edi;
	if (Mem0[0x0040B4A0:word32] > 0x00000001)
	{
		word32 ebx_28;
		word32 edi_29;
		return fn00404318(ebx, esi, edi, fs, dwArg00, out ebx_28, out edi_29);
	}
	else
		return (word32) Mem0[0x0040B490:word32][dwArg04 * 0x02] & 0x00000008;
}

void fn00404509(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	if (dwArg08 != 0x00000000 && dwArg0C != 0x00000000)
	{
		byte al_63 = Mem0[dwArg08 + 0x00000000:byte];
		if (al_63 == 0x00)
		{
			if (dwArg04 != 0x00000000)
				Mem75[dwArg04 + 0x00000000:word16] = 0x0000;
l0040452C:
		}
		else if (Mem0[0x0040BC54:word32] == 0x00000000)
		{
			if (dwArg04 != 0x00000000)
				Mem100[dwArg04 + 0x00000000:word16] = (word16) al_63;
l00404548:
		}
		else if (((Mem0[0x0040B490:word32] + 0x00000001)[(word32) al_63 * 0x02] & 0x80) != 0x00)
		{
			byte C_145;
			word32 eax_125 = Mem0[0x0040B4A0:word32];
			if (eax_125 > 0x00000001)
			{
				C_145 = cond(dwArg0C - eax_125);
				if (dwArg0C >= eax_125)
				{
					word32 eax_188 = MultiByteToWideChar(Mem0[0x0040BC64:word32], 0x00000009, dwArg08, eax_125, dwArg04, (word32) (dwArg04 != 0x00000000));
					eax_125 = Mem0[0x0040B4A0:word32];
					if (eax_188 == 0x00000000)
					{
l00404591:
						C_145 = cond(dwArg0C - eax_125);
l00404594:
						if (C_145 || Mem0[dwArg08 + 0x00000001:byte] == 0x00)
						{
l0040459B:
							Mem121[0x0040BA50:word32] = 0x0000002A;
						}
					}
				}
				else
					goto l00404594;
			}
			else
				goto l00404591;
		}
		else if (MultiByteToWideChar(Mem0[0x0040BC64:word32], 0x00000009, dwArg08, 0x00000001, dwArg04, (word32) (dwArg04 != 0x00000000)) == 0x00000000)
			goto l0040459B;
		else
			goto l00404548;
	}
	else
		goto l0040452C;
	return;
}

word32 fn004045E0(word32 dwArg04, byte bArg08, word32 dwArg0C)
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
l00404625:
				while (ecx_68 != 0x00000000)
				{
					Mem73[edi_27 + 0x00000000:word32] = eax_64;
					edi_27 = edi_27 + 0x00000004;
					ecx_68 = ecx_68 - 0x00000001;
				}
				if (edx_3 != 0x00000000)
				{
l0040462B:
					do
					{
						Mem47[edi_27 + 0x00000000:byte] = al_22;
						edi_27 = edi_27 + 0x00000001;
						edx_3 = edx_3 - 0x00000001;
					} while (edx_3 != 0x00000000);
				}
			}
			else
				goto l0040462B;
		}
		else
			goto l0040462B;
		return dwArg04;
	}
	else
		return dwArg04;
}

word32 fn00404730(word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, ptr32 edxOut)
{
	if ((dwArg10 | dwArg08) == 0x00000000)
	{
		word64 edx_eax_24 = dwArg0C *u dwArg04;
		word32 edx_26;
		*edxOut = SLICE(edx_eax_24, word32, 32);
		return (word32) edx_eax_24;
	}
	else
	{
		word64 edx_eax_40 = dwArg0C *u dwArg04;
		word32 edx_43;
		*edxOut = SLICE(edx_eax_40, word32, 32) + ((word32) (dwArg0C *u dwArg08) + (word32) (dwArg10 *u dwArg04));
		return (word32) edx_eax_40;
	}
}

word32 fn00404BE0(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
fn00404BE0_entry:
l00404BE0:
	word32 esi_13 = dwArg08
	word32 edi_17 = dwArg04
	word32 eax_20 = dwArg0C + dwArg08
	branch dwArg04 <=u dwArg08 || dwArg04 >=u eax_20 l00404C00
	goto l00404D7C
l00404BF8:
l00404C00:
	branch (dwArg04 & 0x00000003) != 0x00000000 l00404C1C
l00404C08:
	word32 ecx_39 = dwArg0C >>u 0x00000002
	branch dwArg0C >>u 0x00000002 <u 0x00000008 l00404C3C
l00404C13:
	branch ecx_39 == 0x00000000 l00404C15
l00404C13_1:
	Mem57[edi_17 + 0x00000000:word32] = Mem0[esi_13 + 0x00000000:word32]
	esi_13 = esi_13 + 0x00000004
	edi_17 = edi_17 + 0x00000004
	ecx_39 = ecx_39 - 0x00000001
	goto l00404C13
l00404C15:
	switch (dwArg0C & 0x00000003) { l00404D3C }
	goto l00404D3C
l00404C1C:
	branch dwArg0C <u 0x00000004 l00404C34
l00404C28:
	switch (dwArg04 & 0x00000003) { }
l00404C34:
	switch (dwArg0C - 0x00000004) { }
l00404C3C:
	switch (dwArg0C >>u 0x00000002) { l00404D23 }
l00404D23:
	switch (dwArg0C & 0x00000003) { l00404D3C }
l00404D3C:
	return dwArg0C & 0x00000003
l00404D7C:
	word32 edx_106
	word32 esi_71 = dwArg0C - 0x00000004 + dwArg08
	word32 edi_72 = dwArg0C - 0x00000004 + dwArg04
	branch (edi_72 & 0x00000003) != 0x00000000 l00404DB0
l00404D8C:
	word32 ecx_100 = dwArg0C >>u 0x00000002
	edx_106 = dwArg0C & 0x00000003
	branch dwArg0C >>u 0x00000002 <u 0x00000008 l00404DA4
l00404D97:
l00404D98:
	branch ecx_100 == 0x00000000 l00404D9A
l00404D98_1:
	Mem97[edi_72 + 0x00000000:word32] = Mem0[esi_71 + 0x00000000:word32]
	esi_71 = esi_71 - 0x00000004
	edi_72 = edi_72 - 0x00000004
	ecx_100 = ecx_100 - 0x00000001
	goto l00404D98
l00404D9A:
	switch (dwArg0C & 0x00000003) { l00404ED8 }
	goto l00404ED8
l00404DA4:
l00404DB0:
	edx_106 = 0x00000003
	branch dwArg0C <u 0x00000004 l00404DC8
l00404DBC:
	switch (edi_72 & 0x00000003) { }
l00404DC8:
	switch (dwArg0C) { l00404ED8 }
l00404ED8:
	return edx_106
fn00404BE0_exit:
}

word32 fn00404F20(word32 edi, word32 dwArg04, ptr32 ediOut)
{
	word32 edi_8;
	return fn00404F95(dwArg04, edi, dwArg04, dwArg08, out edi_8);
}

word32 fn00404F30(word32 edi, word32 dwArg04)
{
	word32 ecx_22 = dwArg04;
	if ((dwArg04 & 0x00000003) != 0x00000000)
	{
l00404F3D:
		do
		{
			ecx_22 = ecx_22 + 0x00000001;
			if (Mem0[ecx_22 + 0x00000000:byte] == 0x00)
			{
				word32 edi_29 = ecx_22 - 0x00000001;
				word32 edi_31;
				fn00404F95(edi_29, edi, dwArg04, dwArg08, out edi_31);
				return edi_31;
			}
		} while ((ecx_22 & 0x00000003) != 0x00000000);
l00404F50:
		while (true)
		{
			word32 eax_38 = Mem0[ecx_22 + 0x00000000:word32];
			ecx_22 = ecx_22 + 0x00000004;
			if (((eax_38 ^ 0xFFFFFFFF ^ eax_38 + 0x7EFEFEFF) & 0x81010100) == 0x00000000)
				continue;
			word32 eax_47 = Mem0[ecx_22 - 0x00000004:word32];
			byte ah_49 = SLICE(eax_47, byte, 8);
			if ((byte) eax_47 == 0x00)
			{
				word32 edi_69;
				fn00404F95(ecx_22 - 0x00000004, edi, dwArg04, dwArg08, out edi_69);
				return edi_69;
			}
			if (ah_49 == 0x00)
			{
				word32 edi_66;
				fn00404F95(ecx_22 - 0x00000003, edi, dwArg04, dwArg08, out edi_66);
				return edi_66;
			}
			if ((eax_47 & 0x00FF0000) == 0x00000000)
			{
				word32 edi_63;
				fn00404F95(ecx_22 - 0x00000002, edi, dwArg04, dwArg08, out edi_63);
				return edi_63;
			}
			if ((eax_47 & 0xFF000000) == 0x00000000)
				;
		}
	}
	else
		goto l00404F50;
fn00404F30_exit:
}

word32 fn00404F95(word32 edi, word32 dwArg00, word32 dwArg08, word32 dwArg0C, ptr32 ediOut)
{
	byte dl_23;
	word32 ecx_1 = dwArg0C;
	if ((dwArg0C & 0x00000003) != 0x00000000)
	{
l00404FA1:
		do
		{
			dl_23 = Mem0[ecx_1 + 0x00000000:byte];
			ecx_1 = ecx_1 + 0x00000001;
			if (dl_23 == 0x00)
			{
l00405010:
				Mem32[edi + 0x00000000:byte] = dl_23;
				word32 edi_36;
				*ediOut = dwArg00;
				return dwArg08;
			}
			Mem99[edi + 0x00000000:byte] = dl_23;
			edi = edi + 0x00000001;
		} while ((ecx_1 & 0x00000003) != 0x00000000);
l00404FBE:
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
					goto l00405010;
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
				goto l00404FB9;
			}
l00404FB9:
			Mem59[edi + 0x00000000:word32] = edx_48;
			edi = edi + 0x00000004;
		}
	}
	else
		goto l00404FBE;
fn00404F95_exit:
}

word32 fn0040532E(word32 dwArg04, ptr32 edxOut)
{
	word32 eax_9 = fn00408240(dwLoc0C, Mem0[0x0040BFE8:word32]);
	word32 ecx_12 = Mem0[0x0040BFE4:word32];
	word32 eax_14 = Mem0[0x0040BFE8:word32];
	word32 edx_16 = ecx_12 - eax_14;
	word32 edx_17;
	*edxOut = edx_16 + 0x00000004;
	if (eax_9 <u edx_16 + 0x00000004)
	{
		word32 ecx_101 = 0x00000800;
		if (eax_9 <u 0x00000800)
			ecx_101 = eax_9;
		word32 edx_59;
		word32 eax_60 = fn004080DE(eax_14, ecx_101 + eax_9, out edx_59);
		if (eax_60 == 0x00000000)
		{
			word32 edx_90;
			eax_60 = fn004080DE(Mem0[0x0040BFE8:word32], eax_9 + 0x00000010, out edx_90);
			if (eax_60 == 0x00000000)
				return eax_60;
			else
			{
l00405384:
				word32 ecx_78 = Mem0[0x0040BFE4:word32] - Mem0[0x0040BFE8:word32];
				Mem79[0x0040BFE8:word32] = eax_60;
				ecx_12 = eax_60 + (ecx_78 >> 0x00000002) * 0x00000004;
				Mem83[0x0040BFE4:word32] = ecx_12;
l004053A1:
				Mem43[ecx_12 + 0x00000000:word32] = dwArg04;
				Mem45[0x0040BFE4:word32] = Mem43[0x0040BFE4:word32] + 0x00000004;
				return dwArg04;
			}
		}
		else
			goto l00405384;
	}
	else
		goto l004053A1;
}

word32 fn004053B0(word32 dwArg00)
{
	word32 edx_5;
	fn0040532E(dwArg00, out edx_5);
	return edx_5;
}

byte fn004053EA(word32 dwArg04, word32 dwArg08, word32 dwArg0C, byte bArg0E)
{
	word32 esp_161;
	word32 ebx_10 = 0x00000000;
	word32 esp_107 = fp - 0x00000020;
	if (Mem0[0x0040BBE0:word32] == 0x00000000)
	{
		word32 eax_160 = LoadLibraryA(0x00409B80);
		esp_161 = fp - 0x00000020;
		if (eax_160 != 0x00000000)
		{
			Mem174[fp - 0x00000024:word32] = 0x00409B74;
			word32 eax_177 = GetProcAddress(eax_160, 0x00409B80);
			Mem182[0x0040BBE0:word32] = eax_177;
			esp_161 = fp - 0x00000020;
			if (eax_177 != 0x00000000)
			{
				Mem184[fp - 0x00000024:word32] = 0x00409B64;
				word32 eax_187 = GetProcAddress(eax_160, 0x00409B74);
				Mem190[fp - 0x00000024:word32] = 0x00409B50;
				Mem193[0x0040BBE4:word32] = eax_187;
				Mem198[0x0040BBE8:word32] = GetProcAddress(eax_160, 0x00409B74);
				esp_107 = fp - 0x00000020;
				if (Mem193[0x0040BA5C:word32] == 0x00000002)
				{
					Mem200[fp - 0x00000024:word32] = 0x00409B34;
					word32 eax_203 = GetProcAddress(eax_160, 0x00409B50);
					Mem208[0x0040BBF0:word32] = eax_203;
					esp_107 = fp - 0x00000020;
					if (eax_203 != 0x00000000)
					{
						Mem210[fp - 0x00000024:word32] = 0x00409B1C;
						Mem215[0x0040BBEC:word32] = GetProcAddress(eax_160, 0x00409B34);
						esp_107 = fp - 0x00000020;
					}
				}
l0040546A:
				word32 eax_51 = Mem0[0x0040BBEC:word32];
				if (eax_51 != 0x00000000)
				{
					eax_51();
					if (eax_51 != 0x00000000)
					{
						esp_107 = fp - 0x00000034;
						Mem0[0x0040BBF0:word32]();
						if (eax_51 != 0x00000000 && (bLoc0C & 0x01) != 0x00)
						{
l004054AF:
							word32 eax_93 = Mem0[0x0040BBE4:word32];
							if (eax_93 != 0x00000000)
							{
								eax_93();
								ebx_10 = eax_93;
								if (eax_93 != 0x00000000)
								{
									word32 eax_103 = Mem0[0x0040BBE8:word32];
									if (eax_103 != 0x00000000)
									{
										esp_107 = esp_107 - 0x00000004;
										Mem108[esp_107 + 0x00000000:word32] = eax_93;
										eax_103();
										ebx_10 = eax_103;
									}
								}
							}
						}
						else
						{
l00405496:
							if (Mem0[0x0040BA68:word32] >=u 0x00000004)
								;
						}
					}
					else
						goto l00405496;
				}
				else
					goto l004054AF;
				word32 esp_67 = esp_107 - 0x00000004;
				Mem69[esp_67 + 0x00000000:word32] = dwArg0C;
				Mem72[esp_67 - 0x00000004:word32] = dwArg08;
				Mem75[esp_67 - 0x00000008:word32] = dwArg04;
				Mem77[esp_67 - 0x0000000C:word32] = ebx_10;
				esp_161 = esp_67 - 0x0000000C;
				Mem77[0x0040BBE0:word32]();
			}
			else
l004054A5:
		}
		else
			goto l004054A5;
	}
	else
		goto l0040546A;
	return (byte) Mem0[esp_161 + 0x00000004 + 0x00000004:word32];
}

word32 fn004054F0(word32 dwArg00, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, ptr32 ebxOut, ptr32 esiOut)
{
	*ebxOut = ebx;
	*esiOut = esi;
	word32 ecx_3 = dwArg0C;
	if (dwArg0C != 0x00000000)
	{
		word32 ecx_219;
		word32 ecx_188;
		byte al_114;
		word32 ebx_115 = dwArg0C;
		word32 esi_132 = dwArg08;
		word32 edi_101 = dwArg04;
		if ((dwArg08 & 0x00000003) == 0x00000000)
		{
			ecx_219 = dwArg0C >>u 0x00000002;
			if (dwArg0C >>u 0x00000002 == 0x00000000)
			{
l00405543:
				do
				{
					byte al_135 = Mem0[esi_132 + 0x00000000:byte];
					Mem137[edi_101 + 0x00000000:byte] = al_135;
					word32 esi_136 = esi_132 + 0x00000001;
					word32 edi_138 = edi_101 + 0x00000001;
					if (al_114 == 0x00)
						;
					word32 ebx_149 = ebx_115 - 0x00000001;
				} while (ebx_149 != 0x00000001);
l00405556:
			}
		}
	}
}

word32 fn00405614(word32 eax)
{
	if (eax == 0x000003A4)
		return 0x00000411;
	else if (eax == 0x000003A8)
		return 0x00000804;
	else if (eax == 0x000003B5)
		return 0x00000412;
	else if (eax != 0x000003B6)
		return 0x00000000;
	else
		return 0x00000404;
}

word16 fn00405643()
{
	word32 ecx_11 = 0x00000040;
	word16 cx_12 = 0x0040;
	word32 edi_14 = 0x0040BCA0;
	while (ecx_11 != 0x00000000)
	{
		Mem18[edi_14 + 0x00000000:word32] = 0x00000000;
		ecx_11 = ecx_11 - 0x00000001;
		edi_14 = edi_14 + 0x00000004;
		cx_12 = (word16) ecx_11;
	}
	Mem22[edi_14 + 0x00000000:byte] = 0x00;
	Mem26[0x0040BDA4:word32] = 0x00000000;
	Mem27[0x0040BC98:word32] = 0x00000000;
	Mem28[0x0040BC94:word32] = 0x00000000;
	Mem30[0x0040BDB0:word32] = 0x00000000;
	Mem32[0x0040BDB4:word32] = 0x00000000;
	Mem34[0x0040BDB8:word32] = 0x00000000;
	return cx_12;
}

word32 fn0040566C(word32 ebx, word32 edi, word16 cx, selector fs)
{
	word32 ebp_153 = fp - 0x00000004;
	word32 esp_158 = fp - 0x00000520;
	if (GetCPInfo(Mem0[0x0040BDA4:word32], fp - 0x0000001C) == 0x00000001)
	{
		word32 eax_56 = 0x00000000;
		byte al_57 = 0x00;
		do
		{
			Mem62[fp + 0xFFFFFEE4 + eax_56:byte] = al_57;
			eax_56 = eax_56 + 0x00000001;
			al_57 = (byte) eax_56;
		} while (eax_56 <u 0x00000100);
		byte al_214 = bLoc16;
		if (bLoc16 != 0x00)
		{
			word32 edx_209 = fp - 0x00000015;
			do
			{
				word32 ecx_219 = (word32) Mem62[edx_209 + 0x00000000:byte];
				cx = (word16) ecx_219;
				word32 eax_222 = (word32) al_214;
				if (eax_222 <=u ecx_219)
				{
					word32 ecx_244 = ecx_219 - eax_222;
					word32 ecx_247 = ecx_244 + 0x00000001 >>u 0x00000002;
					word32 edi_251 = fp + 0xFFFFFEE4 + eax_222;
					while (ecx_247 != 0x00000000)
					{
						Mem257[edi_251 + 0x00000000:word32] = 0x20202020;
						edi_251 = edi_251 + 0x00000004;
						ecx_247 = ecx_247 - 0x00000001;
					}
					word32 ecx_263 = ecx_244 + 0x00000001 & 0x00000003;
					cx = (word16) ecx_263;
					while (ecx_263 != 0x00000000)
					{
						Mem272[edi_251 + 0x00000000:byte] = 0x20;
						ecx_263 = ecx_263 - 0x00000001;
						edi_251 = edi_251 + 0x00000001;
						cx = (word16) ecx_263;
					}
				}
				word32 edx_233 = edx_209 + 0x00000001;
				al_214 = Mem62[edx_233 + 0x00000000:byte];
				edx_209 = edx_233 + 0x00000001;
			} while (al_214 != 0x00);
		}
		word32 ebx_106;
		word32 ebp_107;
		word32 esi_108;
		word32 edi_109;
		word16 cx_110;
		fn004070AD(ebx, 0x00000100, edi, cx, fs, out ebx_106, out ebp_107, out esi_108, out edi_109, out cx_110);
		Mem113[fp - 0x00000540:word32] = 0x00000000;
		Mem115[fp - 0x00000544:word32] = Mem113[0x0040BDA4:word32];
		Mem118[fp - 0x00000548:word32] = esi_108;
		Mem120[fp - 0x0000054C:word32] = ebp_107 + 0xFFFFFDE8;
		Mem122[fp - 0x00000550:word32] = esi_108;
		Mem125[fp - 0x00000554:word32] = ebp_107 + 0xFFFFFEE8;
		Mem127[fp - 0x00000558:word32] = esi_108;
		Mem129[fp - 0x0000055C:word32] = Mem127[0x0040BC94:word32];
		word32 ebp_130;
		word32 esi_131;
		word32 edi_132;
		word16 cx_133;
		word32 ebx_134 = fn00407455(ebx_106, esi_108, edi_109, cx_110, fs, out ebp_130, out esi_131, out edi_132, out cx_133);
		Mem136[fp - 0x00000560:word32] = 0x00000000;
		Mem138[fp - 0x00000564:word32] = Mem136[0x0040BDA4:word32];
		Mem141[fp - 0x00000568:word32] = esi_131;
		Mem143[fp - 0x0000056C:word32] = ebp_130 + 0xFFFFFCE8;
		Mem145[fp - 0x00000570:word32] = esi_131;
		Mem148[fp - 0x00000574:word32] = ebp_130 + 0xFFFFFEE8;
		Mem150[fp - 0x00000578:word32] = 0x00000200;
		Mem152[fp - 0x0000057C:word32] = Mem150[0x0040BC94:word32];
		word32 esi_154;
		word16 cx_156;
		ebx = fn00407455(ebx_134, esi_131, edi_132, cx_133, fs, out ebp_153, out esi_154, out edi, out cx_156);
		esp_158 = fp - 0x00000520;
		word32 eax_159 = 0x00000000;
		do
		{
			byte cl_186;
			byte cl_168 = (byte) (ebp_153 + 0xFFFFFAE8)[eax_159 * 0x0002];
			if ((cl_168 & 0x01) != 0x00)
			{
				Mem190[eax_159 + 0x0040BCA1:byte] = Mem152[eax_159 + 0x0040BCA1:byte] | 0x10;
				cl_186 = Mem190[ebp_153 + 0xFFFFFDE8 + eax_159:byte];
l0040577E:
				Mem188[eax_159 + 0x0040BDC0:byte] = cl_186;
			}
			else if ((cl_168 & 0x02) != 0x00)
			{
				Mem200[eax_159 + 0x0040BCA1:byte] = Mem152[eax_159 + 0x0040BCA1:byte] | 0x20;
				cl_186 = Mem200[ebp_153 + 0xFFFFFCE8 + eax_159:byte];
				goto l0040577E;
			}
			else
				Mem206[eax_159 + 0x0040BDC0:byte] = 0x00;
			eax_159 = eax_159 + 0x00000001;
		} while (eax_159 <u esi_154);
	}
	else
	{
		word32 eax_277 = 0x00000000;
		byte al_278 = 0x00;
		do
		{
			byte cl_310;
			if (eax_277 >=u 0x00000041 && eax_277 <=u 0x0000005A)
			{
				Mem332[eax_277 + 0x0040BCA1:byte] = Mem0[eax_277 + 0x0040BCA1:byte] | 0x10;
				cl_310 = al_278 + 0x20;
l004057C1:
				Mem312[eax_277 + 0x0040BDC0:byte] = cl_310;
			}
			else if (eax_277 >=u 0x00000061 && eax_277 <=u 0x0000007A)
			{
				Mem322[eax_277 + 0x0040BCA1:byte] = Mem0[eax_277 + 0x0040BCA1:byte] | 0x20;
				cl_310 = al_278 - 0x20;
				goto l004057C1;
			}
			else
				Mem318[eax_277 + 0x0040BDC0:byte] = 0x00;
			eax_277 = eax_277 + 0x00000001;
			al_278 = (byte) eax_277;
		} while (eax_277 <u 0x00000100);
	}
	word32 edx_47;
	word32 ebx_48;
	word32 ebp_49;
	word32 esi_50;
	word32 edi_51;
	fn004041A2(Mem0[ebp_153 - 0x00000004:word32], ebx, Mem0[esp_158 + 0x00000000:word32], edi, fs, out edx_47, out ebx_48, out ebp_49, out esi_50, out edi_51);
	return Mem0[ebp_49 + 0x00000000:word32];
}

byte fn004057F8(word32 edi, selector fs, word32 dwArg04)
{
	word32 eax_384;
	Mem25[0x0040BBF4:word32] = 0x00000000;
	word32 ebp_114 = fp - 0x00000004;
	word32 esi_16 = dwArg04;
	word32 ebx_107 = 0x00000000;
	word32 esp_110 = fp - 0x0000002C;
	if (dwArg04 == 0xFFFFFFFE)
	{
		Mem387[0x0040BBF4:word32] = 0x00000001;
		eax_384 = GetOEMCP();
l00405856:
		dwArg04 = eax_384;
		esi_16 = eax_384;
	}
	else if (dwArg04 == 0xFFFFFFFD)
	{
		Mem392[0x0040BBF4:word32] = 0x00000001;
		eax_384 = GetACP();
		goto l00405856;
	}
	else if (dwArg04 == 0xFFFFFFFC)
	{
		eax_384 = Mem25[0x0040BC64:word32];
		Mem400[0x0040BBF4:word32] = 0x00000001;
		goto l00405856;
	}
	if (esi_16 != Mem25[0x0040BDA4:word32])
	{
		word16 cx_113;
		if (esi_16 != 0x00000000)
		{
			word32 edx_128 = 0x00000000;
			word32 eax_130 = 0x0040B4E8;
			do
			{
				if (Mem25[eax_130 + 0x00000000:word32] == esi_16)
				{
					word32 ecx_275 = 0x00000040;
					esp_110 = fp - 0x0000002C;
					word32 edi_278 = 0x0040BCA0;
					while (ecx_275 != 0x00000000)
					{
						Mem282[edi_278 + 0x00000000:word32] = 0x00000000;
						edi_278 = edi_278 + 0x00000004;
						ecx_275 = ecx_275 - 0x00000001;
					}
					word32 ecx_286 = edx_128 * 0x00000003;
					Mem291[edi_278 + 0x00000000:byte] = 0x00;
					cx_113 = (word16) (ecx_286 << 0x00000004);
					word32 dwLoc20_290 = 0x0040B4E0;
					ebx_107 = (ecx_286 << 0x00000004) + 0x0040B4F8;
					do
					{
						byte al_307 = Mem291[ebx_107 + 0x00000000:byte];
						word32 esi_309 = ebx_107;
						while (al_307 != 0x00)
						{
							byte dl_350 = Mem291[esi_309 + 0x00000001:byte];
							if (dl_350 == 0x00)
								break;
							word32 eax_355 = (word32) al_307;
							word32 edi_357 = (word32) dl_350;
							if (eax_355 <=u edi_357)
							{
								byte dl_371 = Mem291[dwLoc20_290 + 0x00000000:byte];
								do
								{
									Mem375[eax_355 + 0x0040BCA1:byte] = Mem291[eax_355 + 0x0040BCA1:byte] | dl_371;
									eax_355 = eax_355 + 0x00000001;
								} while (eax_355 <=u edi_357);
							}
							word32 esi_365 = esi_309 + 0x00000001;
							esi_309 = esi_365 + 0x00000001;
							al_307 = Mem291[esi_365 + 0x00000001:byte];
						}
						word32 v19_325 = dwLoc20_290 + 0x00000001;
						dwLoc20_290 = v19_325;
						ebx_107 = ebx_107 + 0x00000008;
					} while (v19_325 <u 0xFFBF4B24);
					Mem332[0x0040BDA4:word32] = dwArg04;
					Mem333[0x0040BC98:word32] = 0x00000001;
					word32 eax_334 = fn00405614(dwArg04);
					word32 esi_335 = (ecx_286 << 0x00000004) + 0x0040B4EC;
					Mem338[0x0040BDB0:word32] = Mem333[esi_335 + 0x00000000:word32];
					Mem342[0x0040BDB4:word32] = Mem338[esi_335 + 0x00000004:word32];
					Mem345[0x0040BC94:word32] = eax_334;
					Mem347[0x0040BDB8:word32] = Mem345[esi_335 + 0x00000008:word32];
					edi = 0x0040BDBC;
					goto l004059C5;
				}
				eax_130 = eax_130 + 0x00000030;
				edx_128 = edx_128 + 0x00000001;
			} while (eax_130 <u 0xFFBF4C08);
			esp_110 = fp - 0x0000002C;
			if (GetCPInfo(esi_16, fp - 0x0000001C) == 0x00000001)
			{
				word32 ecx_163 = 0x00000040;
				cx_113 = 0x0040;
				esp_110 = fp - 0x0000002C;
				word32 edi_166 = 0x0040BCA0;
				while (ecx_163 != 0x00000000)
				{
					Mem170[edi_166 + 0x00000000:word32] = 0x00000000;
					ecx_163 = ecx_163 - 0x00000001;
					edi_166 = edi_166 + 0x00000004;
					cx_113 = (word16) ecx_163;
				}
				Mem174[edi_166 + 0x00000000:byte] = 0x00;
				Mem181[0x0040BDA4:word32] = esi_16;
				Mem182[0x0040BC94:word32] = 0x00000000;
				if (dwLoc1C >u 0x00000001)
				{
					if (bLoc16 != 0x00)
					{
						word32 ecx_227 = fp - 0x00000015 + 0x00000001;
						cx_113 = (word16) (fp - 0x00000015);
						do
						{
							byte dl_236 = Mem182[ecx_227 + 0x00000000:byte];
							if (dl_236 == 0x00)
								break;
							word32 eax_241 = (word32) Mem182[ecx_227 - 0x00000001:byte];
							word32 edx_243 = (word32) dl_236;
							while (eax_241 <=u edx_243)
							{
								Mem257[eax_241 + 0x0040BCA1:byte] = Mem182[eax_241 + 0x0040BCA1:byte] | 0x04;
								eax_241 = eax_241 + 0x00000001;
							}
							word32 ecx_251 = ecx_227 + 0x00000000;
							ecx_227 = ecx_251 + 0x00000001;
							cx_113 = (word16) (ecx_251 + 0x00000001);
						} while (Mem182[ecx_251 + 0x00000000:byte] != 0x00);
					}
					word32 eax_213 = 0x00000001;
					do
					{
						Mem217[eax_213 + 0x0040BCA1:byte] = Mem182[eax_213 + 0x0040BCA1:byte] | 0x08;
						eax_213 = eax_213 + 0x00000001;
					} while (eax_213 <u 0x000000FF);
					Mem225[0x0040BC94:word32] = fn00405614(esi_16);
					Mem226[0x0040BC98:word32] = 0x00000001;
				}
				else
					Mem263[0x0040BC98:word32] = 0x00000000;
				Mem195[0x0040BDB0:word32] = 0x00000000;
				Mem197[0x0040BDB4:word32] = 0x00000000;
				Mem199[0x0040BDB8:word32] = 0x00000000;
				edi = 0x0040BDBC;
l004059C5:
				ebp_114 = fn0040566C(ebx_107, edi, cx_113, fs);
l004059CA:
			}
			else if (Mem25[0x0040BBF4:word32] != 0x00000000)
			{
l004059C0:
				cx_113 = fn00405643();
				goto l004059C5;
			}
		}
		else
			goto l004059C0;
	}
	else
		goto l004059CA;
	word32 esp_55 = esp_110 + 0x00000004;
	word32 ebx_58 = Mem25[esp_55 + 0x00000004:word32];
	word32 edx_62;
	word32 ebx_63;
	word32 ebp_64;
	word32 esi_65;
	word32 edi_66;
	fn004041A2(Mem25[ebp_114 - 0x00000004:word32], ebx_58, Mem25[esp_55 + 0x00000000:word32], Mem25[esp_110 + 0x00000000:word32], fs, out edx_62, out ebx_63, out ebp_64, out esi_65, out edi_66);
	return (byte) ebx_58;
}

word32 fn004059DE(word32 edi, selector fs, ptr32 ebxOut, ptr32 ebpOut, ptr32 ediOut)
{
	*ebxOut = ebx;
	*ebpOut = ebp;
	*ediOut = edi;
	if (Mem0[0x0040BFEC:word32] == 0x00000000)
	{
		word32 ebx_26;
		*ebxOut = DPB(ebx, fn004057F8(edi, fs, 0xFFFFFFFD), 0, 8);
		Mem29[0x0040BFEC:word32] = 0x00000001;
	}
	return 0x00000000;
}

void fn00405A00(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
fn00405A00_entry:
l00405A00:
	word32 esi_13 = dwArg08
	word32 edi_17 = dwArg04
	word32 eax_20 = dwArg0C + dwArg08
	branch dwArg04 <=u dwArg08 || dwArg04 >=u eax_20 l00405A20
	goto l00405B9C
l00405A18:
l00405A20:
	branch (dwArg04 & 0x00000003) != 0x00000000 l00405A3C
l00405A28:
	word32 ecx_39 = dwArg0C >>u 0x00000002
	branch dwArg0C >>u 0x00000002 <u 0x00000008 l00405A5C
l00405A33:
	branch ecx_39 == 0x00000000 l00405A35
l00405A33_1:
	Mem57[edi_17 + 0x00000000:word32] = Mem0[esi_13 + 0x00000000:word32]
	esi_13 = esi_13 + 0x00000004
	edi_17 = edi_17 + 0x00000004
	ecx_39 = ecx_39 - 0x00000001
	goto l00405A33
l00405A35:
	switch (dwArg0C & 0x00000003) { l00405B5C }
	goto l00405B5C
l00405A3C:
	branch dwArg0C <u 0x00000004 l00405A54
l00405A48:
	switch (dwArg04 & 0x00000003) { }
l00405A54:
	switch (dwArg0C - 0x00000004) { }
l00405A5C:
	switch (dwArg0C >>u 0x00000002) { l00405B43 }
l00405B43:
	switch (dwArg0C & 0x00000003) { l00405B5C }
l00405B5C:
	return
l00405B9C:
	word32 esi_71 = dwArg0C - 0x00000004 + dwArg08
	word32 edi_72 = dwArg0C - 0x00000004 + dwArg04
	branch (edi_72 & 0x00000003) != 0x00000000 l00405BD0
l00405BAC:
	word32 ecx_100 = dwArg0C >>u 0x00000002
	branch dwArg0C >>u 0x00000002 <u 0x00000008 l00405BC4
l00405BB7:
l00405BB8:
	branch ecx_100 == 0x00000000 l00405BBA
l00405BB8_1:
	Mem97[edi_72 + 0x00000000:word32] = Mem0[esi_71 + 0x00000000:word32]
	esi_71 = esi_71 - 0x00000004
	edi_72 = edi_72 - 0x00000004
	ecx_100 = ecx_100 - 0x00000001
	goto l00405BB8
l00405BBA:
	switch (dwArg0C & 0x00000003) { l00405CF8 }
	goto l00405CF8
l00405BC4:
l00405BD0:
	branch dwArg0C <u 0x00000004 l00405BE8
l00405BDC:
	switch (edi_72 & 0x00000003) { }
l00405BE8:
	switch (dwArg0C) { l00405CF8 }
l00405CF8:
	return
fn00405A00_exit:
}

word32 fn00405D3D(word32 dwArg04)
{
	word32 eax_9 = HeapAlloc(Mem0[0x0040BEC0:word32], 0x00000000, 0x00000140);
	Mem14[0x0040BC80:word32] = eax_9;
	if (eax_9 == 0x00000000)
		return eax_9;
	else
	{
		Mem23[0x0040BC78:word32] = Mem14[0x0040BC78:word32] & 0x00000000;
		Mem26[0x0040BC7C:word32] = Mem23[0x0040BC7C:word32] & 0x00000000;
		Mem28[0x0040BC88:word32] = eax_9;
		Mem31[0x0040BC84:word32] = dwArg04;
		Mem32[0x0040BC8C:word32] = 0x00000010;
		return 0x00000001;
	}
}

word32 fn00405D85(word32 dwArg04, ptr32 edxOut)
{
	*edxOut = edx;
	word32 eax_14 = Mem0[0x0040BC80:word32] + 0x0000000C;
	word32 ecx_6 = eax_14 + (Mem0[0x0040BC7C:word32] * 0x00000005) * 0x00000004;
	while (eax_14 <u ecx_6)
	{
		word32 edx_23 = dwArg04 - Mem0[eax_14 + 0x00000000:word32];
		*edxOut = edx_23;
		if (edx_23 <u 0x00100000)
			goto l00405DAF;
		eax_14 = eax_14 + 0x00000014;
	}
	eax_14 = 0x00000000;
	return eax_14;
}

word32 fn00405DB0(word32 dwArg04, word32 dwArg08, byte bArg0B, ptr32 edxOut, ptr32 blOut)
{
	*edxOut = edx;
	*blOut = bl;
	word32 edi_20 = dwArg08 - Mem0[dwArg04 + 0x0000000C:word32];
	word32 eax_10 = Mem0[dwArg04 + 0x00000010:word32];
	word32 ecx_27 = Mem0[dwArg08 + 0xFFFFFFFC:word32];
	word32 esi_134 = dwArg08 + 0xFFFFFFFC;
	word32 edi_198 = edi_20 >>u 0x0000000F;
	word32 ecx_25 = (edi_20 >>u 0x0000000F) *s 0x00000204 + 0x00000144 + eax_10;
	word32 ecx_104 = ecx_27 - 0x00000001;
	word32 dwLoc08_124 = ecx_27 - 0x00000001;
	if (((byte) (ecx_27 - 0x00000001) & 0x01) == 0x00)
	{
		word32 ebx_86 = ecx_27 - 0x00000001 + (dwArg08 + 0xFFFFFFFC);
		word32 edx_88 = Mem0[ebx_86 + 0x00000000:word32];
		word32 esp_107 = fp - 0x00000020;
		word32 edx_90 = Mem0[dwArg08 + 0xFFFFFFF8:word32];
		if (((byte) edx_88 & 0x01) == 0x00)
		{
			word32 edx_473 = (edx_88 >> 0x00000004) - 0x00000001;
			if (edx_473 >u 0x0000003F)
			{
				edx_473 = 0x0000003F;
				esp_107 = fp - 0x00000020;
			}
			word32 ebx_488;
			word32 ecx_481 = Mem0[ebx_86 + 0x00000004:word32];
			byte cl_482 = (byte) ecx_481;
			ebx_488 = ebx_86;
			if (ecx_481 == Mem0[ebx_86 + 0x00000008:word32])
			{
				if (edx_473 <u 0x00000020)
				{
					word32 ebx_513 = ~(0x80000000 >>u cl_482);
					(eax_10 + 0x00000044)[(edi_20 >>u 0x0000000F) * 0x00000004] = (eax_10 + 0x00000044)[(edi_20 >>u 0x0000000F) * 0x00000004] & ebx_513;
					word32 ecx_512 = edx_473 + 0x00000004 + eax_10;
					byte v18_519 = Mem516[ecx_512 + 0x00000000:byte] - 0x01;
					Mem520[ecx_512 + 0x00000000:byte] = v18_519;
					if (v18_519 == 0x00)
						Mem525[dwArg04 + 0x00000000:word32] = Mem520[dwArg04 + 0x00000000:word32] & ebx_513;
				}
				else
				{
					word32 ebx_530 = ~(0x80000000 >>u cl_482);
					(eax_10 + 0x000000C4)[(edi_20 >>u 0x0000000F) * 0x00000004] = (eax_10 + 0x000000C4)[(edi_20 >>u 0x0000000F) * 0x00000004] & ebx_530;
					word32 ecx_529 = edx_473 + 0x00000004 + eax_10;
					byte v21_536 = Mem533[ecx_529 + 0x00000000:byte] - 0x01;
					Mem537[ecx_529 + 0x00000000:byte] = v21_536;
					if (v21_536 == 0x00)
						Mem542[dwArg04 + 0x00000004:word32] = Mem537[dwArg04 + 0x00000004:word32] & ebx_530;
				}
				ebx_488 = ebx_86;
			}
			Mem496[Mem0[ebx_488 + 0x00000008:word32] + 0x00000004:word32] = Mem0[ebx_488 + 0x00000004:word32];
			Mem500[Mem496[ebx_86 + 0x00000004:word32] + 0x00000008:word32] = Mem496[ebx_86 + 0x00000008:word32];
			ecx_104 = ecx_27 - 0x00000001 + edx_88;
			dwLoc08_124 = ecx_104;
		}
		word32 edx_109 = ecx_104 >> 0x00000004;
		word32 edx_110;
		*edxOut = edx_109 - 0x00000001;
		if (edx_109 >u 0x00000040)
		{
			Mem468[fp - 0x00000024:word32] = 0x0000003F;
			*edxOut = 0x0000003F;
			esp_107 = fp - 0x00000020;
		}
		word32 ebx_132;
		if ((edx_90 & 0x00000001) == 0x00000000)
		{
			Mem378[fp - 0x00000024:word32] = 0x0000003F;
			word32 esi_374 = dwArg08 + 0xFFFFFFFC - edx_90;
			ebx_132 = (edx_90 >> 0x00000004) - 0x00000001;
			esp_107 = fp - 0x00000020;
			if (ebx_132 >u 0x0000003F)
				ebx_132 = 0x0000003F;
			word32 ecx_388 = ecx_104 + edx_90;
			edx_110 = (ecx_388 >> 0x00000004) - 0x00000001;
			*edxOut = edx_110;
			dwLoc08_124 = ecx_388;
			if (edx_110 >u 0x0000003F)
				*edxOut = 0x0000003F;
			if (ebx_132 != edx_110)
			{
				if (Mem378[esi_374 + 0x00000004:word32] == Mem378[esi_374 + 0x00000008:word32])
					if (ebx_132 <u 0x00000020)
					{
						word32 esi_430 = ~(0x80000000 >>u (byte) ebx_132);
						(eax_10 + 0x00000044)[(edi_20 >>u 0x0000000F) * 0x00000004] = (eax_10 + 0x00000044)[(edi_20 >>u 0x0000000F) * 0x00000004] & esi_430;
						byte v25_435 = Mem432[ebx_132 + 0x00000004 + eax_10:byte] - 0x01;
						Mem436[ebx_132 + 0x00000004 + eax_10:byte] = v25_435;
						if (v25_435 == 0x00)
							Mem441[dwArg04 + 0x00000000:word32] = Mem436[dwArg04 + 0x00000000:word32] & esi_430;
					}
					else
					{
						word32 esi_447 = ~(0x80000000 >>u (byte) (ebx_132 - 0x00000020));
						(eax_10 + 0x000000C4)[(edi_20 >>u 0x0000000F) * 0x00000004] = (eax_10 + 0x000000C4)[(edi_20 >>u 0x0000000F) * 0x00000004] & esi_447;
						byte v29_452 = Mem449[ebx_132 + 0x00000004 + eax_10:byte] - 0x01;
						Mem453[ebx_132 + 0x00000004 + eax_10:byte] = v29_452;
						if (v29_452 == 0x00)
							Mem458[dwArg04 + 0x00000004:word32] = Mem453[dwArg04 + 0x00000004:word32] & esi_447;
					}
				Mem419[Mem378[esi_374 + 0x00000008:word32] + 0x00000004:word32] = Mem378[esi_374 + 0x00000004:word32];
				Mem423[Mem419[esi_374 + 0x00000004:word32] + 0x00000008:word32] = Mem419[esi_374 + 0x00000008:word32];
			}
			esi_134 = esi_374;
		}
		else
			ebx_132 = dwArg04;
		if ((edx_90 & 0x00000001) != 0x00000000 || ebx_132 != edx_110)
		{
			word32 ecx_317 = ecx_25 + edx_110 * 0x00000008;
			word32 ebx_318 = Mem0[ecx_317 + 0x00000004:word32];
			Mem319[esi_134 + 0x00000008:word32] = ecx_317;
			Mem320[esi_134 + 0x00000004:word32] = ebx_318;
			Mem321[ecx_317 + 0x00000004:word32] = esi_134;
			Mem323[Mem321[esi_134 + 0x00000004:word32] + 0x00000008:word32] = esi_134;
			if (Mem323[esi_134 + 0x00000004:word32] == Mem323[esi_134 + 0x00000008:word32])
			{
				byte cl_327 = Mem323[edx_110 + 0x00000004 + eax_10:byte];
				Mem333[edx_110 + 0x00000004 + eax_10:byte] = cl_327 + 0x01;
				if (edx_110 <u 0x00000020)
				{
					if (cl_327 == 0x00)
						Mem349[dwArg04 + 0x00000000:word32] = Mem333[dwArg04 + 0x00000000:word32] | 0x80000000 >>u cl_327 + 0x01;
					word32 eax_340 = eax_10 + 0x00000044 + (edi_20 >>u 0x0000000F) * 0x00000004;
					Mem342[eax_340 + 0x00000000:word32] = Mem333[eax_340 + 0x00000000:word32] | 0x80000000 >>u (byte) edx_110;
				}
				else
				{
					if (cl_327 == 0x00)
						Mem369[dwArg04 + 0x00000004:word32] = Mem333[dwArg04 + 0x00000004:word32] | 0x80000000 >>u cl_327 + 0x01;
					word32 edx_358 = 0x80000000 >>u (byte) (edx_110 - 0x00000020);
					*edxOut = edx_358;
					word32 eax_360 = eax_10 + 0x000000C4 + (edi_20 >>u 0x0000000F) * 0x00000004;
					Mem362[eax_360 + 0x00000000:word32] = Mem333[eax_360 + 0x00000000:word32] | edx_358;
				}
			}
		}
		Mem147[esi_134 + 0x00000000:word32] = dwLoc08_124;
		Mem148[dwLoc08_124 - 0x00000004 + esi_134:word32] = dwLoc08_124;
		word32 v33_150 = Mem148[ecx_25 + 0x00000000:word32] - 0x00000001;
		Mem151[ecx_25 + 0x00000000:word32] = v33_150;
		eax_10 = ecx_25;
		if (v33_150 == 0x00000000)
		{
			word32 eax_177 = Mem151[0x0040BC78:word32];
			if (eax_177 != 0x00000000)
			{
				word32 ecx_205 = Mem151[0x0040BC90:word32];
				Mem208[fp - 0x00000024:word32] = 0x00004000;
				VirtualFree((ecx_205 << 0x0000000F) + Mem208[eax_177 + 0x0000000C:word32], 0x00008000, 0x0000003F);
				byte cl_219 = (byte) Mem208[0x0040BC90:word32];
				word32 eax_220 = Mem208[0x0040BC78:word32];
				word32 edx_222 = 0x80000000 >>u cl_219;
				*edxOut = edx_222;
				word32 v34_224 = Mem208[eax_220 + 0x00000008:word32] | edx_222;
				Mem225[eax_220 + 0x00000008:word32] = v34_224;
				word32 eax_228 = Mem225[Mem225[0x0040BC78:word32] + 0x00000010:word32];
				word32 ecx_229 = Mem225[0x0040BC90:word32];
				word32 v35_230 = (eax_228 + 0x000000C4)[ecx_229 * 0x00000004] & 0x00000000;
				(eax_228 + 0x000000C4)[ecx_229 * 0x00000004] = v35_230;
				word32 eax_234 = Mem231[Mem231[0x0040BC78:word32] + 0x00000010:word32];
				byte v36_235 = Mem231[eax_234 + 0x00000043:byte] - 0x01;
				Mem236[eax_234 + 0x00000043:byte] = v36_235;
				word32 eax_237 = Mem236[0x0040BC78:word32];
				word32 esi_206 = VirtualFree;
				esp_107 = fp - 0x00000020;
				word32 ecx_238 = Mem236[eax_237 + 0x00000010:word32];
				if (Mem236[ecx_238 + 0x00000043:byte] == 0x00)
				{
					Mem312[eax_237 + 0x00000004:word32] = Mem236[eax_237 + 0x00000004:word32] & 0xFFFFFFFE;
					eax_237 = Mem312[0x0040BC78:word32];
				}
				if (Mem236[eax_237 + 0x00000008:word32] == 0xFFFFFFFF)
				{
					Mem247[fp - 0x00000024:word32] = 0x00008000;
					Mem249[fp - 0x00000028:word32] = 0x00000000;
					esi_206();
					HeapFree(Mem249[0x0040BEC0:word32], 0x00000000, Mem249[Mem249[0x0040BC78:word32] + 0x00000010:word32]);
					word32 eax_285 = Mem249[0x0040BC78:word32];
					word32 edx_296;
					*edxOut = fn00404BE0(eax_285, eax_285 + 0x00000014, Mem249[0x0040BC7C:word32] * 0x00000014 - eax_285 - 0x00000014 + Mem249[0x0040BC80:word32]);
					Mem301[0x0040BC7C:word32] = Mem249[0x0040BC7C:word32] - 0x00000001;
					esp_107 = fp - 0x0000002C;
					if (dwArg04 >u Mem301[0x0040BC78:word32])
						dwArg04 = dwArg04 - 0x00000014;
					Mem307[0x0040BC88:word32] = Mem301[0x0040BC80:word32];
				}
			}
			Mem203[0x0040BC78:word32] = dwArg04;
			Mem204[0x0040BC90:word32] = edi_198;
			eax_10 = dwArg04;
		}
		byte bl_175;
		*blOut = (byte) Mem151[esp_107 + 0x00000000:word32];
	}
	return eax_10;
}

word32 fn004060C8()
{
	word32 eax_122 = Mem0[0x0040BC7C:word32];
	word32 ecx_4 = Mem0[0x0040BC8C:word32];
	if (eax_122 == ecx_4)
	{
		word32 eax_109 = HeapReAlloc(Mem0[0x0040BEC0:word32], 0x00000000, Mem0[0x0040BC80:word32], ecx_4 + 0x00000050 + ecx_4 * 0x00000004 << 0x00000002);
		if (eax_109 == 0x00000000)
			return 0x00000000;
		else
		{
			Mem119[0x0040BC8C:word32] = Mem0[0x0040BC8C:word32] + 0x00000010;
			Mem121[0x0040BC80:word32] = eax_109;
			eax_122 = Mem121[0x0040BC7C:word32];
l0040610E:
			word32 eax_50;
			word32 ecx_28 = Mem0[0x0040BC80:word32];
			Mem35[fp - 0x00000010:word32] = 0x00000008;
			word32 esi_39 = ecx_28 + (eax_122 * 0x00000005) * 0x00000004;
			word32 eax_40 = HeapAlloc(Mem35[0x0040BEC0:word32], 0x00000000, 0x000041C4);
			Mem44[esi_39 + 0x00000010:word32] = eax_40;
			if (eax_40 == 0x00000000)
			{
l00406135:
				eax_50 = 0x00000000;
			}
			else
			{
				Mem66[fp - 0x0000000C:word32] = 0x00000004;
				Mem68[fp - 0x00000010:word32] = 0x00002000;
				word32 eax_73 = VirtualAlloc(0x00000000, 0x00100000, 0x00000008, 0x000041C4);
				Mem77[esi_39 + 0x0000000C:word32] = eax_73;
				if (eax_73 == 0x00000000)
				{
					Mem79[fp - 0x0000000C:word32] = Mem77[esi_39 + 0x00000010:word32];
					Mem81[fp - 0x00000010:word32] = 0x00000000;
					Mem83[fp - 0x00000014:word32] = Mem81[0x0040BEC0:word32];
					HeapFree(0x00100000, 0x00002000, 0x00000004);
					goto l00406135;
				}
				else
				{
					Mem87[esi_39 + 0x00000008:word32] = Mem77[esi_39 + 0x00000008:word32] | 0xFFFFFFFF;
					Mem89[esi_39 + 0x00000000:word32] = 0x00000000;
					Mem90[esi_39 + 0x00000004:word32] = 0x00000000;
					Mem92[0x0040BC7C:word32] = Mem90[0x0040BC7C:word32] + 0x00000001;
					word32 eax_93 = Mem92[esi_39 + 0x00000010:word32];
					Mem95[eax_93 + 0x00000000:word32] = Mem92[eax_93 + 0x00000000:word32] | 0xFFFFFFFF;
					eax_50 = esi_39;
				}
			}
			return eax_50;
		}
	}
	else
		goto l0040610E;
}

word32 fn0040617F(word32 dwArg04, ptr32 edxOut)
{
	word32 eax_15 = Mem0[dwArg04 + 0x00000008:word32];
	word32 esi_23 = Mem0[dwArg04 + 0x00000010:word32];
	word32 ebx_178 = 0x00000000;
	while (eax_15 >= 0x00000000)
	{
		eax_15 = eax_15 << 0x00000001;
		ebx_178 = ebx_178 + 0x00000001;
	}
	word32 eax_41 = ebx_178 *s 0x00000204 + 0x00000144 + esi_23;
	word32 edx_46 = 0x0000003F;
	eax_49 = eax_41;
	do
	{
		word32 eax_49;
		Mem50[eax_49 + 0x00000008:word32] = eax_49;
		Mem51[eax_49 + 0x00000004:word32] = eax_49;
		eax_49 = eax_49 + 0x00000008;
		edx_46 = edx_46 - 0x00000001;
		*edxOut = edx_46;
	} while (edx_46 != 0x00000000);
	word32 eax_138;
	Mem59[fp - 0x0000001C:word32] = 0x00000004;
	word32 edi_64 = (ebx_178 << 0x0000000F) + Mem59[dwArg04 + 0x0000000C:word32];
	word32 eax_69 = VirtualAlloc(edi_64, 0x00008000, 0x00001000, 0x0000003F);
	if (eax_69 == 0x00000000)
		eax_138 = eax_69 | 0xFFFFFFFF;
	else
	{
		word32 edx_100 = edi_64 + 0x00007000;
		if (edi_64 <=u edi_64 + 0x00007000)
		{
			word32 eax_148 = edi_64 + 0x00000010;
			word32 ecx_150 = (edi_64 + 0x00007000 - edi_64 >>u 0x0000000C) + 0x00000001;
			do
			{
				Mem156[eax_148 - 0x00000008:word32] = Mem59[eax_148 - 0x00000008:word32] | 0xFFFFFFFF;
				Mem159[eax_148 + 0x00000FEC:word32] = Mem156[eax_148 + 0x00000FEC:word32] | 0xFFFFFFFF;
				Mem162[eax_148 + 0x00000000:word32] = eax_148 + 0x00000FFC;
				Mem164[eax_148 - 0x00000004:word32] = 0x00000FF0;
				Mem165[eax_148 + 0x00000004:word32] = eax_148 + 0xFFFFEFFC;
				Mem166[eax_148 + 0x00000FE8:word32] = 0x00000FF0;
				eax_148 = eax_148 + 0x00001000;
				ecx_150 = ecx_150 - 0x00000001;
			} while (ecx_150 != 0x00000000);
			edx_100 = edi_64 + 0x00007000;
		}
		Mem109[eax_41 + 0x000001FC:word32] = edi_64 + 0x0000000C;
		Mem110[edi_64 + 0x00000014:word32] = eax_41 + 0x000001F8;
		word32 ecx_111 = edx_100 + 0x0000000C;
		Mem112[eax_41 + 0x00000200:word32] = ecx_111;
		Mem113[ecx_111 + 0x00000004:word32] = eax_41 + 0x000001F8;
		(esi_23 + 0x00000044)[ebx_178 * 0x00000004] = (esi_23 + 0x00000044)[ebx_178 * 0x00000004] & 0x00000000;
		(esi_23 + 0x000000C4)[ebx_178 * 0x00000004] = 0x00000001;
		byte al_120 = Mem119[esi_23 + 0x00000043:byte];
		Mem128[esi_23 + 0x00000043:byte] = al_120 + 0x01;
		if (al_120 == 0x00)
			Mem141[dwArg04 + 0x00000004:word32] = Mem128[dwArg04 + 0x00000004:word32] | 0x00000001;
		word32 edx_133 = ~(0x80000000 >>u (byte) ebx_178);
		*edxOut = edx_133;
		Mem135[dwArg04 + 0x00000008:word32] = Mem128[dwArg04 + 0x00000008:word32] & edx_133;
		eax_138 = ebx_178;
	}
	return eax_138;
}

word32 fn00406285(word32 dwArg04, word32 dwArg08, byte bArg0B, word32 dwArg0C, byte bArg0F, ptr32 edxOut)
{
	word32 eax_100;
	word32 ecx_32 = Mem0[dwArg08 - 0x00000004:word32];
	word32 edi_42 = ecx_32 - 0x00000005 + dwArg08;
	word32 edx_25 = dwArg08 - Mem0[dwArg04 + 0x0000000C:word32];
	word32 eax_10 = Mem0[dwArg04 + 0x00000010:word32];
	word32 ebx_43 = Mem0[edi_42 + 0x00000000:word32];
	word32 edx_27 = edx_25 >>u 0x0000000F;
	*edxOut = edx_27;
	word32 ecx_30 = (edx_25 >>u 0x0000000F) *s 0x00000204 + 0x00000144 + eax_10;
	word32 esi_33 = dwArg0C + 0x00000017 & 0xFFFFFFF0;
	byte bl_44 = (byte) ebx_43;
	if (esi_33 <= ecx_32 - 0x00000001)
		if (esi_33 < ecx_32 - 0x00000001)
		{
			word32 v17_294 = ecx_32 - 0x00000001 - esi_33;
			Mem297[dwArg08 - 0x00000004:word32] = esi_33 + 0x00000001;
			word32 ebx_298 = dwArg08 - 0x00000004 + esi_33;
			Mem306[ebx_298 - 0x00000004:word32] = esi_33 + 0x00000001;
			word32 dwArg0C_295 = v17_294;
			word32 esi_302 = (v17_294 >> 0x00000004) - 0x00000001;
			if (esi_302 >u 0x0000003F)
				esi_302 = 0x0000003F;
			if ((bLoc08 & 0x01) == 0x00)
			{
				word32 esi_397 = (ebx_43 >> 0x00000004) - 0x00000001;
				if (esi_397 >u 0x0000003F)
				{
					Mem477[fp - 0x00000020:word32] = 0x0000003F;
					esi_397 = 0x0000003F;
				}
				word32 ecx_402 = Mem306[edi_42 + 0x00000004:word32];
				byte cl_403 = (byte) ecx_402;
				if (ecx_402 == Mem306[edi_42 + 0x00000008:word32])
					if (esi_397 <u 0x00000020)
					{
						word32 ebx_444 = ~(0x80000000 >>u (byte) esi_397);
						(eax_10 + 0x00000044)[(edx_25 >>u 0x0000000F) * 0x00000004] = (eax_10 + 0x00000044)[(edx_25 >>u 0x0000000F) * 0x00000004] & ebx_444;
						word32 esi_443 = esi_397 + 0x00000004 + eax_10;
						byte v23_450 = Mem447[esi_443 + 0x00000000:byte] - 0x01;
						Mem451[esi_443 + 0x00000000:byte] = v23_450;
						if (v23_450 == 0x00)
							Mem456[dwArg04 + 0x00000000:word32] = Mem451[dwArg04 + 0x00000000:word32] & ebx_444;
					}
					else
					{
						word32 ebx_461 = ~(0x80000000 >>u cl_403);
						(eax_10 + 0x000000C4)[(edx_25 >>u 0x0000000F) * 0x00000004] = (eax_10 + 0x000000C4)[(edx_25 >>u 0x0000000F) * 0x00000004] & ebx_461;
						word32 ecx_460 = esi_397 + 0x00000004 + eax_10;
						byte v29_467 = Mem464[ecx_460 + 0x00000000:byte] - 0x01;
						Mem468[ecx_460 + 0x00000000:byte] = v29_467;
						if (v29_467 == 0x00)
							Mem473[dwArg04 + 0x00000004:word32] = Mem468[dwArg04 + 0x00000004:word32] & ebx_461;
					}
				Mem414[Mem306[edi_42 + 0x00000008:word32] + 0x00000004:word32] = Mem306[edi_42 + 0x00000004:word32];
				Mem417[Mem414[edi_42 + 0x00000004:word32] + 0x00000008:word32] = Mem414[edi_42 + 0x00000008:word32];
				word32 esi_419 = v17_294 + ebx_43;
				dwArg0C_295 = esi_419;
				esi_302 = (esi_419 >> 0x00000004) - 0x00000001;
				if (esi_302 >u 0x0000003F)
				{
					Mem426[fp - 0x00000020:word32] = 0x0000003F;
					esi_302 = 0x0000003F;
				}
			}
			word32 ecx_324 = ecx_30 + esi_302 * 0x00000008;
			word32 edi_325 = Mem306[ecx_324 + 0x00000004:word32];
			Mem326[ebx_298 + 0x00000008:word32] = ecx_324;
			Mem327[ebx_298 + 0x00000004:word32] = edi_325;
			Mem328[ecx_324 + 0x00000004:word32] = ebx_298;
			Mem330[Mem328[ebx_298 + 0x00000004:word32] + 0x00000008:word32] = ebx_298;
			if (Mem330[ebx_298 + 0x00000004:word32] == Mem330[ebx_298 + 0x00000008:word32])
			{
				word32 eax_357;
				byte cl_355;
				byte cl_346 = Mem330[esi_302 + 0x00000004 + eax_10:byte];
				Mem352[esi_302 + 0x00000004 + eax_10:byte] = cl_346 + 0x01;
				if (esi_302 <u 0x00000020)
				{
					if (cl_346 == 0x00)
						Mem377[dwArg04 + 0x00000000:word32] = Mem352[dwArg04 + 0x00000000:word32] | 0x80000000 >>u cl_346 + 0x01;
					eax_357 = eax_10 + 0x00000044 + (edx_25 >>u 0x0000000F) * 0x00000004;
					cl_355 = (byte) esi_302;
				}
				else
				{
					if (cl_346 == 0x00)
						Mem392[dwArg04 + 0x00000004:word32] = Mem352[dwArg04 + 0x00000004:word32] | 0x80000000 >>u cl_346 + 0x01;
					eax_357 = eax_10 + 0x000000C4 + (edx_25 >>u 0x0000000F) * 0x00000004;
					cl_355 = (byte) (esi_302 - 0x00000020);
				}
				word32 edx_360 = 0x80000000 >>u cl_355;
				*edxOut = edx_360;
				Mem362[eax_357 + 0x00000000:word32] = Mem352[eax_357 + 0x00000000:word32] | edx_360;
			}
			Mem344[ebx_298 + 0x00000000:word32] = dwArg0C_295;
			Mem345[dwArg0C_295 - 0x00000004 + ebx_298:word32] = dwArg0C_295;
		}
	else if ((bl_44 & 0x01) == 0x00 && esi_33 <= ebx_43 + (ecx_32 - 0x00000001))
	{
		word32 ecx_112 = (ebx_43 >> 0x00000004) - 0x00000001;
		byte cl_113 = (byte) ecx_112;
		word32 dwLoc0C_116 = ecx_112;
		if (ecx_112 >u 0x0000003F)
		{
			ecx_112 = 0x0000003F;
			cl_113 = 0x3F;
			dwLoc0C_116 = 0x0000003F;
		}
		if (Mem0[edi_42 + 0x00000004:word32] == Mem0[edi_42 + 0x00000008:word32])
			if (ecx_112 <u 0x00000020)
			{
				word32 ebx_252 = ~(0x80000000 >>u cl_113);
				(eax_10 + 0x00000044)[(edx_25 >>u 0x0000000F) * 0x00000004] = (eax_10 + 0x00000044)[(edx_25 >>u 0x0000000F) * 0x00000004] & ebx_252;
				word32 ecx_251 = dwLoc0C_116 + 0x00000004 + eax_10;
				byte v20_258 = Mem255[ecx_251 + 0x00000000:byte] - 0x01;
				Mem259[ecx_251 + 0x00000000:byte] = v20_258;
				if (v20_258 == 0x00)
					Mem264[dwArg04 + 0x00000000:word32] = Mem259[dwArg04 + 0x00000000:word32] & ebx_252;
			}
			else
			{
				word32 ebx_272 = ~(0x80000000 >>u (byte) (ecx_112 + 0xFFFFFFE0));
				(eax_10 + 0x000000C4)[(edx_25 >>u 0x0000000F) * 0x00000004] = (eax_10 + 0x000000C4)[(edx_25 >>u 0x0000000F) * 0x00000004] & ebx_272;
				word32 ecx_271 = dwLoc0C_116 + 0x00000004 + eax_10;
				byte v26_278 = Mem275[ecx_271 + 0x00000000:byte] - 0x01;
				Mem279[ecx_271 + 0x00000000:byte] = v26_278;
				if (v26_278 == 0x00)
					Mem284[dwArg04 + 0x00000004:word32] = Mem279[dwArg04 + 0x00000004:word32] & ebx_272;
			}
		word32 edx_147;
		Mem131[Mem0[edi_42 + 0x00000008:word32] + 0x00000004:word32] = Mem0[edi_42 + 0x00000004:word32];
		Mem134[Mem131[edi_42 + 0x00000004:word32] + 0x00000008:word32] = Mem131[edi_42 + 0x00000008:word32];
		word32 v31_137 = ebx_43 + ((ecx_32 - 0x00000001) - esi_33);
		if (v31_137 > 0x00000000)
		{
			word32 edi_160 = (v31_137 >> 0x00000004) - 0x00000001;
			word32 ecx_163 = dwArg08 - 0x00000004 + esi_33;
			if (edi_160 >u 0x0000003F)
			{
				Mem242[fp - 0x00000020:word32] = 0x0000003F;
				edi_160 = 0x0000003F;
			}
			word32 ebx_168 = ecx_30 + edi_160 * 0x00000008;
			Mem171[ecx_163 + 0x00000004:word32] = Mem134[ebx_168 + 0x00000004:word32];
			Mem173[ecx_163 + 0x00000008:word32] = ebx_168;
			Mem174[ebx_168 + 0x00000004:word32] = ecx_163;
			Mem176[Mem174[ecx_163 + 0x00000004:word32] + 0x00000008:word32] = ecx_163;
			if (Mem176[ecx_163 + 0x00000004:word32] == Mem176[ecx_163 + 0x00000008:word32])
			{
				word32 eax_203;
				byte cl_201;
				byte cl_192 = Mem176[edi_160 + 0x00000004 + eax_10:byte];
				Mem198[edi_160 + 0x00000004 + eax_10:byte] = cl_192 + 0x01;
				if (edi_160 <u 0x00000020)
				{
					if (cl_192 == 0x00)
						Mem223[dwArg04 + 0x00000000:word32] = Mem198[dwArg04 + 0x00000000:word32] | 0x80000000 >>u cl_192 + 0x01;
					eax_203 = eax_10 + 0x00000044 + (edx_25 >>u 0x0000000F) * 0x00000004;
					cl_201 = (byte) edi_160;
				}
				else
				{
					if (cl_192 == 0x00)
						Mem238[dwArg04 + 0x00000004:word32] = Mem198[dwArg04 + 0x00000004:word32] | 0x80000000 >>u cl_192 + 0x01;
					eax_203 = eax_10 + 0x000000C4 + (edx_25 >>u 0x0000000F) * 0x00000004;
					cl_201 = (byte) (edi_160 - 0x00000020);
				}
				Mem208[eax_203 + 0x00000000:word32] = Mem198[eax_203 + 0x00000000:word32] | 0x80000000 >>u cl_201;
			}
			word32 eax_189 = dwArg08 - 0x00000004 + esi_33;
			Mem190[eax_189 + 0x00000000:word32] = v31_137;
			Mem191[v31_137 - 0x00000004 + eax_189:word32] = v31_137;
			*edxOut = dwArg08;
		}
		else
			*edxOut = dwArg08;
		Mem155[edx_147 - 0x00000004:word32] = esi_33 + 0x00000001;
		Mem156[edx_147 - 0x00000008 + esi_33:word32] = esi_33 + 0x00000001;
l0040655C:
		eax_100 = 0x00000001;
	}
	else
		eax_100 = 0x00000000;
	return eax_100;
}

word32 fn00406564(word32 esi, word32 dwArg04, byte bArg07, ptr32 edxOut)
{
	word32 esi_101;
	word32 dwLoc0C_32;
	word32 ecx_13 = dwArg04 + 0x00000017 & 0xFFFFFFF0;
	word32 ecx_26 = (ecx_13 >> 0x00000004) - 0x00000001;
	word32 eax_10 = Mem0[0x0040BC7C:word32];
	word32 edx_11 = Mem0[0x0040BC80:word32];
	*edxOut = edx_11;
	byte cl_27 = (byte) ecx_26;
	word32 edi_30 = edx_11 + (eax_10 * 0x00000005) * 0x00000004;
	if (ecx_26 < 0x00000020)
	{
		esi_101 = (esi | 0xFFFFFFFF) >>u cl_27;
		dwLoc0C_32 = dwLoc0C | 0xFFFFFFFF;
	}
	else
	{
		esi_101 = 0x00000000;
		dwLoc0C_32 = (eax_10 * 0x00000005 | 0xFFFFFFFF) >>u (byte) (ecx_26 + 0xFFFFFFE0);
	}
	word32 eax_36 = Mem0[0x0040BC88:word32];
	word32 ebx_146 = eax_36;
	byte C_43 = cond(eax_36 - edi_30);
	word32 dwArg04_393 = ebx_146;
	while (C_43 && (Mem0[ebx_146 + 0x00000004:word32] & dwLoc0C_32 | Mem0[ebx_146 + 0x00000000:word32] & esi_101) == 0x00000000)
	{
		ebx_146 = ebx_146 + 0x00000014;
		C_43 = cond(ebx_146 - edi_30);
		dwArg04_393 = ebx_146;
	}
	word32 eax_165;
	if (ebx_146 == edi_30)
	{
		ebx_146 = edx_11;
		dwArg04_393 = ebx_146;
		while (ebx_146 <u eax_36 && (Mem0[ebx_146 + 0x00000004:word32] & dwLoc0C_32 | Mem0[ebx_146 + 0x00000000:word32] & esi_101) == 0x00000000)
		{
			ebx_146 = ebx_146 + 0x00000014;
			dwArg04_393 = ebx_146;
		}
		if (ebx_146 != eax_36)
		{
l004065FE:
			Mem93[0x0040BC88:word32] = ebx_146;
			word32 eax_94 = Mem93[ebx_146 + 0x00000010:word32];
			word32 edx_100 = Mem93[eax_94 + 0x00000000:word32];
			word32 dwLoc08_344 = edx_100;
			if (edx_100 == 0xFFFFFFFF || ((eax_94 + 0x000000C4)[edx_100 * 0x00000004] & dwLoc0C_32 | (eax_94 + 0x00000044)[edx_100 * 0x00000004] & esi_101) == 0x00000000)
			{
				dwLoc08_344 = edx_100 & 0x00000000;
				word32 ecx_346 = eax_94 + 0x00000044 + 0x00000084;
				if ((Mem93[eax_94 + 0x000000C4:word32] & dwLoc0C_32 | Mem93[eax_94 + 0x00000044:word32] & esi_101) == 0x00000000)
					do
					{
						ecx_346 = ecx_506 + 0x00000004;
						dwLoc08_344 = dwLoc08_344 + 0x00000001;
						word32 ecx_506 = ecx_346;
					} while ((Mem93[ecx_506 + 0x00000000:word32] & dwLoc0C_32 | Mem93[ecx_346 + 0x00000000:word32] & esi_101) == 0x00000000);
				edx_100 = dwLoc08_344;
			}
			word32 ecx_104 = edx_100 *s 0x00000204 + 0x00000144 + eax_94;
			word32 edi_107 = 0x00000000;
			word32 ecx_108 = (eax_94 + 0x00000044)[edx_100 * 0x00000004] & esi_101;
			if (ecx_108 == 0x00000000)
			{
				ecx_108 = (eax_94 + 0x000000C4)[edx_100 * 0x00000004] & dwLoc0C_32;
				edi_107 = 0x00000020;
				goto l004066E4;
			}
l004066E4:
			while (ecx_108 >= 0x00000000)
			{
				ecx_108 = ecx_108 << 0x00000001;
				edi_107 = edi_107 + 0x00000001;
			}
			word32 edx_123 = (ecx_104 + 0x00000004)[edi_107 * 0x00000008];
			word32 ecx_125 = Mem93[edx_123 + 0x00000000:word32] - ecx_13;
			word32 esi_129 = (ecx_125 >> 0x00000004) - 0x00000001;
			if (esi_129 > 0x0000003F)
				esi_129 = 0x0000003F;
			if (esi_129 != edi_107)
			{
				word32 ecx_189 = Mem93[edx_123 + 0x00000004:word32];
				byte cl_190 = (byte) ecx_189;
				if (ecx_189 == Mem93[edx_123 + 0x00000008:word32])
					if (edi_107 < 0x00000020)
					{
						word32 ebx_287 = ~(0x80000000 >>u cl_190);
						(eax_94 + 0x00000044)[dwLoc08_344 * 0x00000004] = ebx_287 & (eax_94 + 0x00000044)[dwLoc08_344 * 0x00000004];
						word32 edi_286 = eax_94 + 0x00000004 + edi_107;
						byte v19_292 = Mem291[edi_286 + 0x00000000:byte] - 0x01;
						Mem293[edi_286 + 0x00000000:byte] = v19_292;
						if (v19_292 == 0x00)
						{
							Mem299[dwArg04_393 + 0x00000000:word32] = Mem293[dwArg04_393 + 0x00000000:word32] & ebx_287;
							ebx_146 = dwArg04_393;
						}
						else
						{
l0040676E:
							ebx_146 = dwArg04_393;
						}
					}
					else
					{
						word32 ecx_304 = eax_94 + 0x000000C4 + dwLoc08_344 * 0x00000004;
						word32 ebx_306 = ~(0x80000000 >>u cl_190);
						Mem308[ecx_304 + 0x00000000:word32] = Mem93[ecx_304 + 0x00000000:word32] & ebx_306;
						word32 edi_305 = eax_94 + 0x00000004 + edi_107;
						byte v23_311 = Mem308[edi_305 + 0x00000000:byte] - 0x01;
						Mem312[edi_305 + 0x00000000:byte] = v23_311;
						if (v23_311 == 0x00)
						{
							Mem319[dwArg04_393 + 0x00000004:word32] = Mem312[dwArg04_393 + 0x00000004:word32] & ebx_306;
							ebx_146 = dwArg04_393;
						}
						else
							goto l0040676E;
					}
				Mem202[Mem93[edx_123 + 0x00000008:word32] + 0x00000004:word32] = Mem93[edx_123 + 0x00000004:word32];
				Mem205[Mem202[edx_123 + 0x00000004:word32] + 0x00000008:word32] = Mem202[edx_123 + 0x00000008:word32];
				if (ecx_125 != 0x00000000)
				{
					word32 ecx_207 = ecx_104 + esi_129 * 0x00000008;
					word32 edi_208 = Mem205[ecx_207 + 0x00000004:word32];
					Mem209[edx_123 + 0x00000008:word32] = ecx_207;
					Mem210[edx_123 + 0x00000004:word32] = edi_208;
					Mem211[ecx_207 + 0x00000004:word32] = edx_123;
					Mem213[Mem211[edx_123 + 0x00000004:word32] + 0x00000008:word32] = edx_123;
					if (Mem213[edx_123 + 0x00000004:word32] == Mem213[edx_123 + 0x00000008:word32])
					{
						byte cl_227 = Mem213[esi_129 + 0x00000004 + eax_94:byte];
						Mem233[esi_129 + 0x00000004 + eax_94:byte] = cl_227 + 0x01;
						byte cl_229 = cl_227 + 0x01;
						if (esi_129 < 0x00000020)
						{
							if (cl_227 == 0x00)
							{
								cl_229 = (byte) esi_129;
								Mem249[ebx_146 + 0x00000000:word32] = Mem233[ebx_146 + 0x00000000:word32] | 0x80000000 >>u cl_229;
							}
							(eax_94 + 0x00000044)[dwLoc08_344 * 0x00000004] = (eax_94 + 0x00000044)[dwLoc08_344 * 0x00000004] | 0x80000000 >>u cl_229;
						}
						else
						{
							if (cl_227 == 0x00)
								Mem269[ebx_146 + 0x00000004:word32] = Mem233[ebx_146 + 0x00000004:word32] | 0x80000000 >>u (byte) (esi_129 - 0x00000020);
							word32 edi_255 = eax_94 + 0x000000C4 + dwLoc08_344 * 0x00000004;
							Mem261[edi_255 + 0x00000000:word32] = Mem233[edi_255 + 0x00000000:word32] | 0x80000000 >>u (byte) (esi_129 - 0x00000020);
						}
					}
l0040680E:
					if (ecx_125 != 0x00000000)
					{
						Mem187[edx_123 + 0x00000000:word32] = ecx_125;
						Mem188[ecx_125 - 0x00000004 + edx_123:word32] = ecx_125;
					}
				}
			}
			else
				goto l0040680E;
			word32 edx_148 = edx_123 + ecx_125;
			*edxOut = edx_148;
			Mem150[edx_148 + 0x00000000:word32] = ecx_13 + 0x00000001;
			Mem151[edx_148 - 0x00000004 + ecx_13:word32] = ecx_13 + 0x00000001;
			word32 ecx_153 = Mem151[ecx_104 + 0x00000000:word32];
			Mem158[ecx_104 + 0x00000000:word32] = ecx_153 + 0x00000001;
			if (ecx_153 == 0x00000000 && (ebx_146 == Mem158[0x0040BC78:word32] && dwLoc08_344 == Mem158[0x0040BC90:word32]))
				Mem172[0x0040BC78:word32] = Mem158[0x0040BC78:word32] & 0x00000000;
			Mem164[eax_94 + 0x00000000:word32] = dwLoc08_344;
			eax_165 = edx_148 + 0x00000004;
		}
		else
		{
			while (ebx_146 <u edi_30 && Mem0[ebx_146 + 0x00000008:word32] == 0x00000000)
			{
				ebx_146 = ebx_146 + 0x00000014;
				dwArg04_393 = ebx_146;
			}
			if (ebx_146 == edi_30)
			{
				ebx_146 = edx_11 + 0x00000008;
				dwArg04_393 = ebx_146;
				while (ebx_146 <u eax_36 && Mem0[ebx_146 + 0x00000000:word32] == 0x00000000)
				{
					ebx_146 = ebx_146 + 0x00000014;
					dwArg04_393 = ebx_146;
				}
				if (ebx_146 == eax_36)
				{
					word32 eax_453 = fn004060C8();
					ebx_146 = eax_453;
					dwArg04_393 = eax_453;
					if (eax_453 != 0x00000000)
					{
l004066C2:
						word32 edx_425;
						Mem430[Mem0[ebx_146 + 0x00000010:word32]:word32] = fn0040617F(ebx_146, out edx_425);
						if (Mem441[Mem441[ebx_146 + 0x00000010:word32]:word32] == 0xFFFFFFFF)
						{
l004066DA:
							eax_165 = 0x00000000;
						}
						else
							goto l004065FE;
					}
					else
						goto l004066DA;
				}
				else
					goto l004066C2;
			}
			else
				goto l004066C2;
		}
	}
	else
		goto l004065FE;
	return eax_165;
}

word32 fn00406B77(word32 dwArg00)
{
	word32 eax_3 = Mem0[0x0040BC44:word32];
	if (eax_3 != 0x00000000)
	{
		eax_3();
		if (eax_3 != 0x00000000)
			return 0x00000001;
		else
		{
l00406B8F:
			return 0x00000000;
		}
	}
	else
		goto l00406B8F;
}

word32 fn00406B92(word32 edx, word32 ebx, word32 esi, word32 edi, selector fs, word32 dwArg04, word32 dwArg08, word32 dwArg0C, ptr32 edxOut)
{
	word32 eax_12 = Mem0[0x0040B498:word32];
	if (dwArg04 <u Mem0[0x0040BEC8:word32])
	{
		word32 ebx_139 = (dwArg04 >> 0x00000005) * 0x00000004 + 0x0040BEE0;
		word32 esi_143 = (dwArg04 & 0x0000001F) << 0x00000003;
		byte al_144 = Mem0[Mem0[ebx_139 + 0x00000000:word32] + 0x00000004 + esi_143:byte];
		if ((al_144 & 0x01) != 0x00)
		{
			word32 edi_150 = 0x00000000;
			word32 dwLoc0414_154 = 0x00000000;
			if (dwArg0C == 0x00000000)
l00406BF5:
			else
			{
				if ((al_144 & 0x20) != 0x00)
				{
					fn004082D7(edx, dwArg04, 0x00000000, 0x00000000, 0x00000002);
					dwLoc0430 = 0x00000002;
				}
				word32 dwArg04_229;
				word32 eax_189 = Mem0[ebx_139 + 0x00000000:word32] + esi_143;
				if ((Mem0[eax_189 + 0x00000004:byte] & 0x80) != 0x00)
				{
					word32 dwLoc0410_272 = dwArg08;
					dwArg04_229 = 0x00000000;
					if (dwArg0C >u 0x00000000)
					{
l00406C36:
						do
						{
							word32 ecx_292 = dwLoc0410_272 - dwArg08;
							word32 eax_294 = fp + 0xFFFFFBF4;
							do
							{
								if (ecx_292 >=u dwArg0C)
									break;
								dwLoc0410_272 = dwLoc0410_272 + 0x00000001;
								byte dl_364 = Mem0[dwLoc0410_272 + 0x00000000:byte];
								ecx_292 = ecx_292 + 0x00000001;
								if (dl_364 == 0x0A)
								{
									Mem382[eax_294 + 0x00000000:byte] = 0x0D;
									eax_294 = eax_294 + 0x00000001;
									edi_150 = edi_150 + 0x00000001;
								}
								Mem374[eax_294 + 0x00000000:byte] = dl_364;
								eax_294 = eax_294 + 0x00000001;
								edi_150 = edi_150 + 0x00000001;
							} while (edi_150 < 0x00000400);
							word32 edi_322 = eax_294 - (fp + 0xFFFFFBF4);
							dwLoc0430 = 0x00000000;
							if (WriteFile(Mem0[Mem0[ebx_139 + 0x00000000:word32] + esi_143:word32], fp + 0xFFFFFBF4, edi_322, fp + 0xFFFFFBE8, 0x00000000) == 0x00000000)
							{
								Mem360[fp + 0x00000004:word32] = GetLastError();
								edi_150 = 0x00000000;
								goto l00406CBD;
							}
							dwLoc0414_154 = dwLoc0414_154 + dwLoc0418;
							if (dwLoc0418 < edi_322)
								goto l00406CBB;
							edi_150 = 0x00000000;
						} while (dwLoc0410_272 - dwArg08 <u dwArg0C);
l00406CBD:
						if (dwLoc0414_154 != edi_150)
							;
						else if (dwArg04_229 != edi_150)
						{
							Mem254[fp - 0x00000430:word32] = 0x00000005;
							if (dwArg04_229 == 0x00000000)
							{
								Mem260[0x0040BA54:word32] = 0x00000005;
l00406D5F:
								Mem114[0x0040BA50:word32] = 0x00000009;
							}
							else
							{
								Mem262[fp - 0x00000430:word32] = dwArg04_229;
								fn00408278(dwLoc0430);
							}
l00406D69:
						}
						else
						{
l00406D29:
							if ((Mem0[Mem0[ebx_139 + 0x00000000:word32] + 0x00000004 + esi_143:byte] & 0x40) != 0x00 && Mem0[dwArg08 + 0x00000000:byte] == 0x1A)
								goto l00406BF5;
							else
							{
								Mem221[0x0040BA50:word32] = 0x0000001C;
								Mem222[0x0040BA54:word32] = edi_150;
								goto l00406D69;
							}
						}
					}
					else
						goto l00406D29;
				}
				else
				{
					Mem388[fp - 0x00000430:word32] = 0x00000000;
					Mem391[fp - 0x00000434:word32] = fp + 0xFFFFFBE8;
					Mem393[fp - 0x00000438:word32] = dwArg0C;
					if (WriteFile(Mem393[eax_189 + 0x00000000:word32], dwArg08, 0x00000000, 0x00000000, 0x00000002) != 0x00000000)
					{
						Mem405[fp + 0xFFFFFBEC:word32] = dwLoc0418;
						dwArg04_229 = 0x00000000;
					}
					else
						dwArg04_229 = GetLastError();
				}
			}
		}
		else
		{
l00406D58:
			Mem122[0x0040BA54:word32] = Mem0[0x0040BA54:word32] & 0x00000000;
			goto l00406D5F;
		}
	}
	else
		goto l00406D58;
	word32 edx_50;
	word32 ebx_51;
	word32 ebp_52;
	word32 esi_53;
	word32 edi_54;
	return fn004041A2(eax_12, ebx, esi, edi, fs, out edx_50, out ebx_51, out ebp_52, out esi_53, out edi_54);
}

void fn00406DD9(word32 dwArg04, word32 dwArg08)
{
	if (dwArg04 <u Mem0[0x0040BEC8:word32])
	{
		word32 edi_76 = (dwArg04 >> 0x00000005) * 0x00000004 + 0x0040BEE0;
		word32 esi_78 = (dwArg04 & 0x0000001F) << 0x00000003;
		if ((Mem0[Mem0[edi_76 + 0x00000000:word32] + 0x00000004 + esi_78:byte] & 0x01) != 0x00)
		{
			word32 eax_84 = fn004083F0(dwArg04);
			if (eax_84 != 0xFFFFFFFF)
			{
				word32 eax_103;
				if (SetFilePointer(eax_84, dwArg04, 0x00000000, dwArg08) == 0xFFFFFFFF)
					eax_103 = GetLastError();
				else
					eax_103 = 0x00000000;
				if (eax_103 != 0x00000000)
				{
					fn00408278(eax_103);
l00406E5E:
				}
				else
				{
					word32 eax_113 = Mem0[edi_76 + 0x00000000:word32] + 0x00000004 + esi_78;
					Mem115[eax_113 + 0x00000000:byte] = Mem0[eax_113 + 0x00000000:byte] & 0xFD;
				}
			}
			else
			{
l00406E54:
				Mem59[0x0040BA50:word32] = 0x00000009;
				goto l00406E5E;
			}
		}
		else
		{
l00406E4D:
			Mem68[0x0040BA54:word32] = Mem0[0x0040BA54:word32] & 0x00000000;
			goto l00406E54;
		}
	}
	else
		goto l00406E4D;
	return;
}

word32 fn00406E65(word32 dwArg04, ptr32 edxOut)
{
	Mem4[0x0040BA3C:word32] = Mem0[0x0040BA3C:word32] + 0x00000001;
	word32 edx_9;
	word32 eax_10 = fn00403DDF(dwLoc08, out edx_9);
	Mem18[dwArg04 + 0x00000008:word32] = eax_10;
	if (eax_10 != 0x00000000)
	{
		Mem27[dwArg04 + 0x0000000C:word32] = Mem18[dwArg04 + 0x0000000C:word32] | 0x00000008;
		Mem30[dwArg04 + 0x00000018:word32] = 0x00001000;
	}
	else
	{
		Mem32[dwArg04 + 0x0000000C:word32] = Mem18[dwArg04 + 0x0000000C:word32] | 0x00000004;
		Mem36[dwArg04 + 0x00000008:word32] = dwArg04 + 0x00000014;
		Mem37[dwArg04 + 0x00000018:word32] = 0x00000002;
	}
	word32 eax_19 = Mem18[dwArg04 + 0x00000008:word32];
	Mem21[dwArg04 + 0x00000004:word32] = Mem18[dwArg04 + 0x00000004:word32] & 0x00000000;
	Mem24[dwArg04 + 0x00000000:word32] = eax_19;
	return eax_19;
}

word32 fn00406F0F(word32 ebx, word32 esi, word32 edi, selector fs, ptr32 edxOut, ptr32 ebxOut, ptr32 ebpOut)
{
	*ebxOut = ebx;
	word32 esp_141;
	word32 ebp_11 = fn00403BD0(ebx, esi, edi, fs, dwLoc0C, 0x00409D30, 0x00000118);
	Mem14[ebp_11 - 0x0000001C:word32] = Mem0[0x0040B498:word32];
	word32 eax_15 = Mem14[0x0040BC6C:word32];
	if (eax_15 != 0x00000000)
	{
		Mem123[ebp_11 - 0x00000004:word32] = 0x00000000;
		Mem125[fp - 0x0000000C:word32] = Mem123[ebp_11 + 0x0000000C:word32];
		Mem127[fp - 0x00000010:word32] = Mem125[ebp_11 + 0x00000008:word32];
		eax_15();
		Mem143[ebp_11 - 0x00000004:word32] = Mem127[ebp_11 - 0x00000004:word32] | 0xFFFFFFFF;
		esp_141 = fp - 0x00000008;
	}
	else
	{
		word32 esi_151;
		word32 edi_150;
		if (Mem14[ebp_11 + 0x00000008:word32] != 0x00000001)
		{
			Mem276[ebp_11 + 0xFFFFFED8:word32] = 0x00409C58;
			edi_150 = 0x00409D0C;
			esi_151 = 0x000000D4;
		}
		else
		{
			Mem279[ebp_11 + 0xFFFFFED8:word32] = 0x00409B98;
			edi_150 = 0x00409C38;
			esi_151 = 0x000000B9;
		}
		Mem152[ebp_11 - 0x00000020:byte] = 0x00;
		Mem154[fp - 0x0000000C:word32] = 0x00000104;
		Mem157[fp - 0x00000010:word32] = ebp_11 + 0xFFFFFEDC;
		Mem159[fp - 0x00000014:word32] = 0x00000000;
		word32 esp_161 = fp - 0x00000008;
		if (GetModuleFileNameA(Mem159[fp - 0x00000014:HMODULE], Mem159[fp - 16:LPSTR], Mem159[fp - 12:DWORD]) == 0x00000000)
		{
			Mem265[fp - 0x0000000C:word32] = 0x004095CC;
			Mem268[fp - 0x00000010:word32] = ebp_11 + 0xFFFFFEDC;
			fn00404F20(edi_150, dwArg00, out edi_150);
			esp_161 = fp - 0x00000008;
		}
		word32 esp_170 = esp_161 - 0x00000004;
		Mem171[esp_170 + 0x00000000:word32] = ebp_11 + 0xFFFFFEDC;
		word32 eax_172 = fn00404080(ebp_11 + 0xFFFFFEDC, dwArg00);
		word32 ebx_167 = ebp_11 + 0xFFFFFEDC;
		word32 esp_174 = esp_170 + 0x00000004;
		word32 eax_175 = eax_172 + 0x0000000B;
		if (eax_172 >u 0xFFFFFFCF)
		{
			Mem243[esp_170 + 0x00000000:word32] = ebp_11 + 0xFFFFFEDC;
			word32 ebx_248 = fn00404080(ebp_11 + 0xFFFFFEDC, dwArg00) + (ebp_11 + 0xFFFFFEAB);
			Mem252[esp_170 - 0x00000004:word32] = 0x00000003;
			Mem254[esp_170 - 0x00000008:word32] = 0x004095C8;
			Mem256[esp_170 - 0x0000000C:word32] = ebx_248;
			eax_175 = fn004054F0(0x00000118, dwArg00, dwArg04, dwArg08, dwArg0C, out ebx_167, out esi_151);
			esp_174 = esp_170 + 0x00000004;
		}
		word32 esp_184 = esp_174 - 0x00000004;
		Mem185[esp_184 + 0x00000000:word32] = ebx_167;
		fn00403D30(fn00404080(eax_175, dwArg00) + 0x0000000C + esi_151 + 0x00000003 & 0xFFFFFFFC, 0x00000118);
		Mem194[ebp_11 - 0x00000018:word32] = esp_184 + 0x00000004;
		Mem197[esp_184 + 0x00000000:word32] = edi_150;
		Mem199[esp_184 - 0x00000004:word32] = esp_184 + 0x00000004;
		word32 edi_200;
		fn00404F20(edi_150, dwArg00, out edi_200);
		Mem204[esp_184 - 0x00000008:word32] = 0x004095A8;
		Mem206[esp_184 - 0x0000000C:word32] = esp_184 + 0x00000004;
		word32 edi_207 = fn00404F30(0x004095A8, dwArg00);
		Mem209[esp_184 - 0x00000010:word32] = 0x00409B8C;
		Mem211[esp_184 - 0x00000014:word32] = esp_184 + 0x00000004;
		word32 edi_212 = fn00404F30(edi_207, dwArg00);
		Mem214[esp_184 - 0x00000018:word32] = ebx_167;
		Mem216[esp_184 - 0x0000001C:word32] = esp_184 + 0x00000004;
		word32 edi_217 = fn00404F30(edi_212, dwArg00);
		Mem219[esp_184 - 0x00000020:word32] = edi_217;
		Mem221[esp_184 - 0x00000024:word32] = esp_184 + 0x00000004;
		word32 edi_222 = fn00404F30(edi_217, dwArg00);
		Mem224[esp_184 - 0x00000028:word32] = Mem221[ebp_11 + 0xFFFFFED8:word32];
		Mem226[esp_184 - 0x0000002C:word32] = esp_184 + 0x00000004;
		edi = fn00404F30(edi_222, dwArg00);
		Mem229[esp_184 - 0x00000030:word32] = 0x00012010;
		Mem231[esp_184 - 0x00000034:word32] = 0x00409580;
		Mem233[esp_184 - 0x00000038:word32] = esp_184 + 0x00000004;
		esi = esp_184 + 0x00000004;
		word32 ebx_238;
		*ebxOut = DPB(ebx_167, fn004053EA(dwArg00, dwArg04, dwArg08, bArg0A), 0, 8);
		esp_141 = esp_184 + 0x00000004;
	}
	word32 eax_52;
	word32 esp_31 = esp_141 - 0x00000004;
	Mem32[esp_31 + 0x00000000:word32] = 0x00000003;
	word32 ebp_33;
	word32 edx_34 = fn004031EB(edi, 0x00000118, out ebp_33);
	*edxOut = edx_34;
	int3();
	Mem36[esp_31 - 0x00000004:word32] = esi;
	word32 esi_37 = Mem36[esp_31 + 0x00000004:word32];
	word32 eax_38 = Mem36[esi_37 + 0x0000000C:word32];
	Mem41[esp_31 - 0x00000008:word32] = edi;
	byte al_39 = (byte) eax_38;
	word32 edi_103 = edi | 0xFFFFFFFF;
	if ((al_39 & 0x40) != 0x00)
		eax_52 = eax_38 | 0xFFFFFFFF;
	else
	{
		if ((al_39 & 0x83) != 0x00)
		{
			Mem86[esp_31 - 0x0000000C:word32] = esi_37;
			word32 ebp_88;
			*ebpOut = fn00403E18(edx_34, fs, dwArg00);
			Mem90[esp_31 - 0x00000010:word32] = esi_37;
			word32 edx_92;
			word32 ebx_93;
			word32 eax_95 = fn004084DF(dwArg00, out edx_92, out ebx_93, out edi_103);
			Mem97[esp_31 - 0x00000014:word32] = Mem90[esi_37 + 0x00000010:word32];
			if (fn0040842C(eax_95, dwArg00) < 0x00000000)
				edi_103 = edi_103 | 0xFFFFFFFF;
			else
			{
				word32 eax_106 = Mem97[esi_37 + 0x0000001C:word32];
				if (eax_106 != 0x00000000)
				{
					Mem112[esp_31 - 0x0000000C:word32] = eax_106;
					word32 edx_113;
					word32 ebx_114;
					fn0040403C(dwArg00, out edx_113, out ebx_114, out edi_103);
					Mem118[esi_37 + 0x0000001C:word32] = Mem112[esi_37 + 0x0000001C:word32] & 0x00000000;
				}
			}
		}
		eax_52 = edi_103;
	}
	Mem56[esi_37 + 0x0000000C:word32] = Mem41[esi_37 + 0x0000000C:word32] & 0x00000000;
	return eax_52;
}

word32 fn004070AD(word32 ebx, word32 esi, word32 edi, word16 cx, selector fs, ptr32 ebxOut, ptr32 ebpOut, ptr32 esiOut, ptr32 ediOut, ptr32 cxOut)
{
	word32 esp_20 = fp - 0x00000008;
	word32 ebp_11 = fn00403BD0(ebx, esi, edi, fs, dwLoc0C, 0x00409D40, 0x0000001C);
	if (Mem0[0x0040BC70:word32] == 0x00000000)
	{
		Mem278[fp - 0x0000000C:word32] = ebp_11 - 0x0000001C;
		Mem282[fp - 0x00000010:word32] = 0x00000001;
		Mem284[fp - 0x00000014:word32] = 0x00409D3C;
		Mem286[fp - 0x00000018:word32] = 0x00000001;
		esp_20 = fp - 0x00000008;
		if (GetStringTypeW(Mem286[fp - 0x00000018:DWORD], Mem286[fp - 20:LPCWSTR], Mem286[fp - 16:int32], Mem286[fp - 12:LPWORD]) != 0x00000000)
			Mem292[0x0040BC70:word32] = 0x00000001;
		else if (GetLastError() == 0x00000078)
			Mem296[0x0040BC70:word32] = 0x00000002;
	}
	word32 eax_112;
	word32 eax_22 = Mem0[0x0040BC70:word32];
	if (eax_22 == 0x00000002 || eax_22 == 0x00000000)
	{
		word32 ebx_146 = Mem0[ebp_11 + 0x0000001C:word32];
		if (ebx_146 == 0x00000000)
			ebx_146 = Mem0[0x0040BC54:word32];
		word32 edi_145 = Mem0[ebp_11 + 0x00000018:word32];
		if (edi_145 == 0x00000000)
			edi_145 = Mem0[0x0040BC64:word32];
		word32 esp_72 = esp_20 - 0x00000004;
		Mem73[esp_72 + 0x00000000:word32] = ebx_146;
		word32 edi_77;
		word32 esi_140;
		word32 ebx_135;
		word32 eax_78 = fn0040850A(ebx_146, 0x00000000, edi_145, cx, fs, dwArg00, out ebx_135, out esi_140, out edi_77);
		word32 esp_139 = esp_72 + 0x00000004;
		if (eax_78 == 0xFFFFFFFF)
			goto l00407216;
		else if (eax_78 != edi_77)
		{
			Mem123[esp_72 + 0x00000000:word32] = 0x00000000;
			Mem125[esp_72 - 0x00000004:word32] = 0x00000000;
			Mem128[esp_72 - 0x00000008:word32] = ebp_11 + 0x00000010;
			Mem130[esp_72 - 0x0000000C:word32] = Mem128[ebp_11 + 0x0000000C:word32];
			Mem132[esp_72 - 0x00000010:word32] = eax_78;
			Mem134[esp_72 - 0x00000014:word32] = edi_77;
			word32 edi_137;
			word32 eax_138 = fn0040854D(ebx_135, esi_140, edi_77, fs, out ebx_135, out ebp_11, out edi_137);
			esp_139 = esp_72 + 0x00000004;
			esi_140 = eax_138;
			if (eax_138 != 0x00000000)
			{
				Mem144[ebp_11 + 0x0000000C:word32] = eax_138;
l0040723C:
				word32 esp_91 = esp_139 - 0x00000004;
				Mem92[esp_91 + 0x00000000:word32] = Mem73[ebp_11 + 0x00000014:word32];
				Mem94[esp_91 - 0x00000004:word32] = Mem92[ebp_11 + 0x00000010:word32];
				Mem96[esp_91 - 0x00000008:word32] = Mem94[ebp_11 + 0x0000000C:word32];
				Mem98[esp_91 - 0x0000000C:word32] = Mem96[ebp_11 + 0x00000008:word32];
				Mem100[esp_91 - 0x00000010:word32] = ebx_135;
				word32 edi_103 = GetStringTypeA(Mem100[esp_91 - 0x00000010:LCID], Mem100[esp_91 - 12:DWORD], Mem100[esp_91 - 8:LPCSTR], Mem100[esp_91 - 4:int32], Mem100[esp_91 + 0x00000000:LPWORD]);
				if (esi_140 != 0x00000000)
				{
					Mem115[esp_91 + 0x00000000:word32] = esi_140;
					word32 edx_116;
					word32 ebx_117;
					fn0040403C(dwArg00, out edx_116, out ebx_117, out edi_103);
				}
				eax_112 = edi_103;
			}
			else
				goto l00407216;
		}
		else
			goto l0040723C;
	}
	else if (eax_22 == 0x00000001)
	{
		Mem152[ebp_11 - 0x00000024:word32] = 0x00000000;
		Mem153[ebp_11 - 0x00000020:word32] = 0x00000000;
		if (Mem153[ebp_11 + 0x00000018:word32] == 0x00000000)
			Mem275[ebp_11 + 0x00000018:word32] = Mem153[0x0040BC64:word32];
		word32 esp_156 = esp_20 - 0x00000004;
		Mem157[esp_156 + 0x00000000:word32] = 0x00000000;
		Mem159[esp_156 - 0x00000004:word32] = 0x00000000;
		Mem161[esp_156 - 0x00000008:word32] = Mem159[ebp_11 + 0x00000010:word32];
		Mem163[esp_156 - 0x0000000C:word32] = Mem161[ebp_11 + 0x0000000C:word32];
		Mem171[esp_156 - 0x00000010:word32] = (word32) (Mem163[ebp_11 + 0x00000020:word32] != 0x00000000) * 0x00000008 + 0x00000001;
		Mem173[esp_156 - 0x00000014:word32] = Mem171[ebp_11 + 0x00000018:word32];
		word32 eax_174 = MultiByteToWideChar(Mem173[esp_156 - 0x00000014:UINT], Mem173[esp_156 - 16:DWORD], Mem173[esp_156 - 12:LPCSTR], Mem173[esp_156 - 8:int32], Mem173[esp_156 - 4:LPWSTR], Mem173[esp_156 + 0x00000000:int32]);
		Mem177[ebp_11 - 0x00000028:word32] = eax_174;
		if (eax_174 != 0x00000000)
		{
			Mem182[ebp_11 - 0x00000004:word32] = Mem177[ebp_11 - 0x00000004:word32] & 0x00000000;
			fn00403D30(eax_174 * 0x00000002 + 0x00000003 & 0xFFFFFFFC, 0x0000001C);
			Mem190[ebp_11 - 0x00000018:word32] = esp_156 + 0x00000004;
			Mem192[ebp_11 - 0x0000002C:word32] = esp_156 + 0x00000004;
			Mem194[esp_156 + 0x00000000:word32] = eax_174 * 0x00000002;
			Mem196[esp_156 - 0x00000004:word32] = 0x00000000;
			Mem198[esp_156 - 0x00000008:word32] = esp_156 + 0x00000004;
			fn004045E0(dwArg00, bArg04, dwArg08);
			Mem203[ebp_11 - 0x00000004:word32] = Mem198[ebp_11 - 0x00000004:word32] | 0xFFFFFFFF;
			word32 esi_191 = esp_156 + 0x00000004;
			word32 esp_201 = esp_156 + 0x00000004;
			if (esp_156 == 0x00000004)
			{
				Mem261[esp_156 + 0x00000000:word32] = eax_174;
				Mem263[esp_156 - 0x00000004:word32] = 0x00000002;
				word32 eax_264 = fn00404245(dwArg00, dwArg04);
				esp_201 = esp_156 + 0x00000004;
				esi_191 = eax_264;
				if (eax_264 != 0x00000000)
				{
					Mem273[ebp_11 - 0x00000020:word32] = 0x00000001;
l004071B6:
					word32 esp_212 = esp_201 - 0x00000004;
					Mem213[esp_212 + 0x00000000:word32] = eax_174;
					Mem215[esp_212 - 0x00000004:word32] = esi_191;
					Mem217[esp_212 - 0x00000008:word32] = Mem215[ebp_11 + 0x00000010:word32];
					Mem219[esp_212 - 0x0000000C:word32] = Mem217[ebp_11 + 0x0000000C:word32];
					Mem221[esp_212 - 0x00000010:word32] = 0x00000001;
					Mem223[esp_212 - 0x00000014:word32] = Mem221[ebp_11 + 0x00000018:word32];
					word32 eax_224 = MultiByteToWideChar(Mem223[esp_212 - 0x00000014:UINT], Mem223[esp_212 - 16:DWORD], Mem223[esp_212 - 12:LPCSTR], Mem223[esp_212 - 8:int32], Mem223[esp_212 - 4:LPWSTR], Mem223[esp_212 + 0x00000000:int32]);
					word32 esp_226 = esp_212 + 0x00000004;
					if (eax_224 != 0x00000000)
					{
						Mem250[esp_212 + 0x00000000:word32] = Mem223[ebp_11 + 0x00000014:word32];
						Mem252[esp_212 - 0x00000004:word32] = eax_224;
						Mem254[esp_212 - 0x00000008:word32] = esi_191;
						Mem256[esp_212 - 0x0000000C:word32] = Mem254[ebp_11 + 0x00000008:word32];
						Mem259[ebp_11 - 0x00000024:word32] = GetStringTypeW(Mem256[esp_212 - 0x0000000C:DWORD], Mem256[esp_212 - 8:LPCWSTR], Mem256[esp_212 - 4:int32], Mem256[esp_212 + 0x00000000:LPWORD]);
						esp_226 = esp_212 + 0x00000004;
					}
					if (Mem223[ebp_11 - 0x00000020:word32] != 0x00000000)
					{
						Mem242[esp_226 - 0x00000004:word32] = esi_191;
						word32 edx_243;
						word32 ebx_244;
						word32 edi_245;
						fn0040403C(dwArg00, out edx_243, out ebx_244, out edi_245);
					}
					eax_112 = Mem223[ebp_11 - 0x00000024:word32];
				}
				else
				{
l00407216:
					eax_112 = 0x00000000;
				}
			}
			else
				goto l004071B6;
		}
		else
			goto l00407216;
	}
	else
		goto l00407216;
	word32 ebp_39;
	word32 esi_40;
	word32 edi_41;
	word16 cx_42;
	word32 ebx_43;
	*ebxOut = fn00403C0B(ebp_11, fs, 0x0000001C, dwArg00, dwArg04, dwArg08, out ebp_39, out esi_40, out edi_41, out cx_42);
	return eax_112;
}

word32 fn00407267(word32 eax, word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	word32 eax_140;
	if (dwArg04 <u Mem0[0x0040BEC8:word32])
	{
		word32 edi_110 = (dwArg04 >> 0x00000005) * 0x00000004 + 0x0040BEE0;
		word32 esi_113 = (dwArg04 & 0x0000001F) << 0x00000003;
		eax = Mem0[edi_110 + 0x00000000:word32] + esi_113;
		byte dl_116 = Mem0[eax + 0x00000004:byte];
		if ((dl_116 & 0x01) != 0x00)
		{
			word32 dwLoc10_121 = dwLoc10 & 0x00000000;
			word32 ebx_126 = dwArg08;
			word32 ecx_127 = dwArg08;
			if (dwArg0C != 0x00000000 && (dl_116 & 0x02) == 0x00)
			{
				if ((dl_116 & 0x48) != 0x00 && Mem0[eax + 0x00000005:byte] != 0x0A)
				{
					Mem427[dwArg08 + 0x00000000:byte] = Mem0[Mem0[edi_110 + 0x00000000:word32] + 0x00000005 + esi_113:byte];
					Mem431[Mem427[edi_110 + 0x00000000:word32] + 0x00000005 + esi_113:byte] = 0x0A;
					dwArg0C = dwArg0C - 0x00000001;
					ecx_127 = dwArg08 + 0x00000001;
					dwLoc10_121 = 0x00000001;
				}
				if (ReadFile(Mem0[Mem0[edi_110 + 0x00000000:word32] + esi_113:word32], ecx_127, dwArg0C, fp - 0x00000014, 0x00000000) == 0x00000000)
				{
					eax = GetLastError();
					Mem175[fp - 0x00000024:word32] = 0x00000005;
					if (eax == 0x00000000)
					{
						Mem180[0x0040BA54:word32] = 0x00000005;
l00407443:
						Mem89[0x0040BA50:word32] = 0x00000009;
l0040744D:
						eax_140 = eax | 0xFFFFFFFF;
					}
					else if (eax == 0x0000006D)
					{
l00407312:
						eax_140 = 0x00000000;
					}
					else
					{
						Mem184[fp - 0x00000024:word32] = eax;
						eax = fn00408278(0x00000000);
						goto l0040744D;
					}
				}
				else
				{
					word32 v18_193 = dwLoc10_121 + dwLoc14;
					word32 ecx_192 = Mem0[edi_110 + 0x00000000:word32];
					word32 dwLoc10_194 = v18_193;
					if ((Mem0[ecx_192 + 0x00000004 + esi_113:byte] & 0x80) != 0x00)
					{
						if (dwLoc14 != 0x00000000 && Mem0[dwArg08 + 0x00000000:byte] == 0x0A)
						{
							word32 eax_415 = ecx_192 + 0x00000004 + esi_113;
							Mem417[eax_415 + 0x00000000:byte] = Mem0[eax_415 + 0x00000000:byte] | 0x04;
						}
						else
						{
							word32 eax_407 = Mem0[edi_110 + 0x00000000:word32] + 0x00000004 + esi_113;
							Mem409[eax_407 + 0x00000000:byte] = Mem0[eax_407 + 0x00000000:byte] & 0xFB;
						}
						word32 ecx_222 = v18_193 + dwArg08;
						word32 dwLoc0C_225 = dwArg08;
						ecx_251 = ecx_222;
						if (dwArg08 <u ecx_222)
							do
							{
								word32 ecx_251;
								byte al_257 = Mem0[dwLoc0C_225 + 0x00000000:byte];
								if (al_257 == 0x1A)
								{
									word32 eax_394 = Mem0[edi_110 + 0x00000000:word32];
									if ((Mem0[eax_394 + 0x00000004 + esi_113:byte] & 0x40) == 0x00)
									{
										word32 esi_399 = eax_394 + 0x00000004 + esi_113;
										Mem401[esi_399 + 0x00000000:byte] = Mem0[esi_399 + 0x00000000:byte] | 0x02;
									}
								}
								if (al_257 != 0x0D)
								{
									Mem278[ebx_126 + 0x00000000:byte] = al_257;
									ebx_126 = ebx_126 + 0x00000001;
									dwLoc0C_225 = dwLoc0C_225 + 0x00000001;
								}
								else if (dwLoc0C_225 <u ecx_251 - 0x00000001)
								{
									word32 eax_332 = dwLoc0C_225 + 0x00000001;
									if (Mem0[eax_332 + 0x00000000:byte] == 0x0A)
									{
										dwLoc0C_225 = dwLoc0C_225 + 0x00000002;
l004073F5:
										Mem314[ebx_126 + 0x00000000:byte] = 0x0A;
										Mem315[ebx_126 + 0x00000000:byte] = 0x0A;
									}
									else
									{
										dwLoc0C_225 = eax_332;
l0040740F:
										Mem329[ebx_126 + 0x00000000:byte] = 0x0D;
										Mem330[ebx_126 + 0x00000000:byte] = 0x0D;
									}
l00407412:
									ebx_126 = ebx_126 + 0x00000001;
								}
								else
								{
									dwLoc0C_225 = dwLoc0C_225 + 0x00000001;
									if (ReadFile(Mem0[Mem0[edi_110 + 0x00000000:word32] + esi_113:word32], fp - 0x00000005, 0x00000001, fp - 0x00000014, 0x00000000) == 0x00000000 && GetLastError() != 0x00000000 || dwLoc14 == 0x00000000)
										goto l0040740F;
									else if ((Mem0[Mem0[edi_110 + 0x00000000:word32] + 0x00000004 + esi_113:byte] & 0x48) == 0x00)
										if (ebx_126 == dwArg08 && bLoc05 == 0x0A)
											goto l004073F5;
										else
										{
											Mem380[fp - 0x00000024:word32] = 0x00000001;
											Mem384[fp - 0x0000002C:word32] = dwArg04;
											fn00406DD9(0x00000001, 0xFFFFFFFF);
											if (bLoc05 != 0x0A)
												goto l0040740F;
										}
									else if (bLoc05 != 0x0A)
									{
										Mem374[ebx_126 + 0x00000000:byte] = 0x0D;
										Mem376[Mem374[edi_110 + 0x00000000:word32] + 0x00000005 + esi_113:byte] = bLoc05;
									}
									else
										goto l004073F5;
								}
								ecx_251 = ecx_222;
							} while (dwLoc0C_225 <u ecx_222);
l00407431:
						dwLoc10_194 = ebx_126 - dwArg08;
					}
					eax_140 = dwLoc10_194;
				}
			}
			else
				goto l00407312;
		}
		else
		{
l0040743C:
			Mem97[0x0040BA54:word32] = Mem0[0x0040BA54:word32] & 0x00000000;
			goto l00407443;
		}
	}
	else
		goto l0040743C;
	return eax_140;
}

word32 fn00407455(word32 ebx, word32 esi, word32 edi, word16 cx, selector fs, ptr32 ebpOut, ptr32 esiOut, ptr32 ediOut, ptr32 cxOut)
{
	word32 esp_22 = fp - 0x00000008;
	word32 ebp_103 = fn00403BD0(ebx, esi, edi, fs, dwLoc0C, 0x00409D50, 0x00000038);
	word32 ebx_12 = 0x00000000;
	if (Mem0[0x0040BC74:word32] == 0x00000000)
	{
		Mem569[fp - 0x0000000C:word32] = 0x00000000;
		Mem571[fp - 0x00000010:word32] = 0x00000000;
		Mem575[fp - 0x00000014:word32] = 0x00000001;
		Mem577[fp - 0x00000018:word32] = 0x00409D3C;
		Mem579[fp - 0x0000001C:word32] = 0x00000100;
		Mem581[fp - 0x00000020:word32] = 0x00000000;
		esi = 0x00000001;
		esp_22 = fp - 0x00000008;
		if (LCMapStringW(Mem581[fp - 0x00000020:LCID], Mem581[fp - 28:DWORD], Mem581[fp - 24:LPCWSTR], Mem581[fp - 20:int32], Mem581[fp - 16:LPWSTR], Mem581[fp - 12:int32]) != 0x00000000)
			Mem587[0x0040BC74:word32] = 0x00000001;
		else if (GetLastError() == 0x00000078)
			Mem591[0x0040BC74:word32] = 0x00000002;
	}
	if (Mem0[ebp_103 + 0x00000014:word32] > 0x00000000)
	{
		word32 ecx_537 = Mem0[ebp_103 + 0x00000014:word32];
		word32 eax_539 = Mem0[ebp_103 + 0x00000010:word32];
		do
		{
			ecx_537 = ecx_537 - 0x00000001;
			cx = (word16) ecx_537;
			if (Mem0[eax_539 + 0x00000000:byte] == 0x00)
				goto l004074BB;
			eax_539 = eax_539 + 0x00000001;
		} while (ecx_537 != 0x00000000);
		ecx_537 = ecx_537 | 0xFFFFFFFF;
		cx = (word16) (ecx_537 | 0xFFFFFFFF);
		Mem558[ebp_103 + 0x00000014:word32] = Mem0[ebp_103 + 0x00000014:word32] + ((eax_539 | 0xFFFFFFFF) - ecx_537);
	}
	word32 eax_32 = Mem0[0x0040BC74:word32];
	if (eax_32 == 0x00000002 || eax_32 == 0x00000000)
	{
		Mem73[ebp_103 - 0x00000028:word32] = 0x00000000;
		Mem75[ebp_103 - 0x0000003C:word32] = 0x00000000;
		if (Mem75[ebp_103 + 0x00000008:word32] == 0x00000000)
			Mem302[ebp_103 + 0x00000008:word32] = Mem75[0x0040BC54:word32];
		if (Mem75[ebp_103 + 0x00000020:word32] == 0x00000000)
			Mem300[ebp_103 + 0x00000020:word32] = Mem75[0x0040BC64:word32];
		word32 esp_81 = esp_22 - 0x00000004;
		Mem82[esp_81 + 0x00000000:word32] = Mem75[ebp_103 + 0x00000008:word32];
		word32 esi_84;
		word32 edi_85;
		word32 ebx_106;
		word32 eax_86 = fn0040850A(0x00000000, esi, 0x00000000, cx, fs, dwArg00, out ebx_106, out esi_84, out edi_85);
		Mem90[ebp_103 - 0x00000040:word32] = eax_86;
		if (eax_86 == 0xFFFFFFFF)
			goto l004076E0;
		else
		{
			word32 esp_102;
			if (eax_86 != Mem90[ebp_103 + 0x00000020:word32])
			{
				Mem124[esp_81 + 0x00000000:word32] = ebx_106;
				Mem126[esp_81 - 0x00000004:word32] = ebx_106;
				Mem129[esp_81 - 0x00000008:word32] = ebp_103 + 0x00000014;
				Mem131[esp_81 - 0x0000000C:word32] = Mem129[ebp_103 + 0x00000010:word32];
				Mem133[esp_81 - 0x00000010:word32] = eax_86;
				Mem135[esp_81 - 0x00000014:word32] = Mem133[ebp_103 + 0x00000020:word32];
				word32 edi_138;
				word32 eax_139 = fn0040854D(ebx_106, esi_84, edi_85, fs, out ebx_106, out ebp_103, out edi_138);
				Mem142[ebp_103 - 0x00000028:word32] = eax_139;
				if (eax_139 != ebx_106)
				{
					Mem146[esp_81 + 0x00000000:word32] = ebx_106;
					Mem148[esp_81 - 0x00000004:word32] = ebx_106;
					Mem150[esp_81 - 0x00000008:word32] = Mem148[ebp_103 + 0x00000014:word32];
					Mem152[esp_81 - 0x0000000C:word32] = eax_139;
					Mem154[esp_81 - 0x00000010:word32] = Mem152[ebp_103 + 0x0000000C:word32];
					Mem156[esp_81 - 0x00000014:word32] = Mem154[ebp_103 + 0x00000008:word32];
					word32 eax_157 = LCMapStringA(Mem156[esp_81 - 0x00000014:LCID], Mem156[esp_81 - 16:DWORD], Mem156[esp_81 - 12:LPCSTR], Mem156[esp_81 - 8:int32], Mem156[esp_81 - 4:LPSTR], Mem156[esp_81 + 0x00000000:int32]);
					Mem161[ebp_103 - 0x00000024:word32] = eax_157;
					esp_102 = esp_81 + 0x00000004;
					if (eax_157 != ebx_106)
					{
						Mem184[ebp_103 - 0x00000004:word32] = ebx_106;
						fn00403D30(eax_157 + 0x00000003 & 0xFFFFFFFC, 0x00000038);
						Mem189[ebp_103 - 0x00000018:word32] = esp_81 + 0x00000004;
						Mem191[ebp_103 - 0x00000044:word32] = esp_81 + 0x00000004;
						Mem193[esp_81 + 0x00000000:word32] = eax_157;
						Mem195[esp_81 - 0x00000004:word32] = ebx_106;
						Mem197[esp_81 - 0x00000008:word32] = esp_81 + 0x00000004;
						fn004045E0(dwArg00, bArg04, dwArg08);
						edi_138 = esp_81 + 0x00000004;
						word32 esp_200 = esp_81 + 0x00000004;
						Mem203[ebp_103 - 0x00000004:word32] = Mem197[ebp_103 - 0x00000004:word32] | 0xFFFFFFFF;
						if (esp_81 + 0x00000004 == ebx_106)
						{
							Mem265[esp_81 + 0x00000000:word32] = Mem203[ebp_103 - 0x00000024:word32];
							word32 edx_266;
							word32 eax_267 = fn00403DDF(0x00000038, out edx_266);
							esp_102 = esp_81 + 0x00000004;
							edi_138 = eax_267;
							if (eax_267 != ebx_106)
							{
								Mem274[esp_81 + 0x00000000:word32] = Mem265[ebp_103 - 0x00000024:word32];
								Mem276[esp_81 - 0x00000004:word32] = ebx_106;
								Mem278[esp_81 - 0x00000008:word32] = eax_267;
								fn004045E0(dwArg00, bArg04, dwArg08);
								Mem282[ebp_103 - 0x0000003C:word32] = 0x00000001;
								esp_200 = esp_81 + 0x00000004;
l00407789:
								word32 esp_222 = esp_200 - 0x00000004;
								Mem223[esp_222 + 0x00000000:word32] = Mem203[ebp_103 - 0x00000024:word32];
								Mem225[esp_222 - 0x00000004:word32] = edi_138;
								Mem227[esp_222 - 0x00000008:word32] = Mem225[ebp_103 + 0x00000014:word32];
								Mem229[esp_222 - 0x0000000C:word32] = Mem227[ebp_103 - 0x00000028:word32];
								Mem231[esp_222 - 0x00000010:word32] = Mem229[ebp_103 + 0x0000000C:word32];
								Mem233[esp_222 - 0x00000014:word32] = Mem231[ebp_103 + 0x00000008:word32];
								word32 eax_234 = LCMapStringA(Mem233[esp_222 - 0x00000014:LCID], Mem233[esp_222 - 16:DWORD], Mem233[esp_222 - 12:LPCSTR], Mem233[esp_222 - 8:int32], Mem233[esp_222 - 4:LPSTR], Mem233[esp_222 + 0x00000000:int32]);
								Mem236[ebp_103 - 0x00000024:word32] = eax_234;
								esp_102 = esp_222 + 0x00000004;
								if (eax_234 == ebx_106)
l004077A6:
								else
								{
									Mem240[esp_222 + 0x00000000:word32] = Mem236[ebp_103 + 0x0000001C:word32];
									Mem242[esp_222 - 0x00000004:word32] = Mem240[ebp_103 + 0x00000018:word32];
									Mem245[esp_222 - 0x00000008:word32] = ebp_103 - 0x00000024;
									Mem247[esp_222 - 0x0000000C:word32] = edi_138;
									Mem249[esp_222 - 0x00000010:word32] = Mem247[ebp_103 + 0x00000020:word32];
									Mem251[esp_222 - 0x00000014:word32] = Mem249[ebp_103 - 0x00000040:word32];
									fn0040854D(ebx_106, eax_157, edi_138, fs, out ebx_106, out ebp_103, out edi_138);
									esp_102 = esp_222 + 0x00000004;
								}
							}
							else
								goto l004077A6;
						}
						else
							goto l00407789;
					}
					if (Mem161[ebp_103 - 0x0000003C:word32] != ebx_106)
					{
						word32 esp_176 = esp_102 - 0x00000004;
						Mem177[esp_176 + 0x00000000:word32] = edi_138;
						word32 edx_178;
						word32 edi_180;
						fn0040403C(dwArg00, out edx_178, out ebx_106, out edi_180);
						esp_102 = esp_176 + 0x00000004;
					}
l004077F8:
					if (Mem90[ebp_103 - 0x00000028:word32] != ebx_106)
					{
						Mem116[esp_102 - 0x00000004:word32] = Mem90[ebp_103 - 0x00000028:word32];
						word32 edx_117;
						word32 ebx_118;
						word32 edi_119;
						fn0040403C(dwArg00, out edx_117, out ebx_118, out edi_119);
					}
				}
				else
					goto l004076E0;
			}
			else
			{
				Mem285[esp_81 + 0x00000000:word32] = Mem90[ebp_103 + 0x0000001C:word32];
				Mem287[esp_81 - 0x00000004:word32] = Mem285[ebp_103 + 0x00000018:word32];
				Mem289[esp_81 - 0x00000008:word32] = Mem287[ebp_103 + 0x00000014:word32];
				Mem291[esp_81 - 0x0000000C:word32] = Mem289[ebp_103 + 0x00000010:word32];
				Mem293[esp_81 - 0x00000010:word32] = Mem291[ebp_103 + 0x0000000C:word32];
				Mem295[esp_81 - 0x00000014:word32] = Mem293[ebp_103 + 0x00000008:word32];
				LCMapStringA(Mem295[esp_81 - 0x00000014:LCID], Mem295[esp_81 - 16:DWORD], Mem295[esp_81 - 12:LPCSTR], Mem295[esp_81 - 8:int32], Mem295[esp_81 - 4:LPSTR], Mem295[esp_81 + 0x00000000:int32]);
				esp_102 = esp_81 + 0x00000004;
				goto l004077F8;
			}
		}
	}
	else if (eax_32 == 0x00000001)
	{
		Mem308[ebp_103 - 0x0000002C:word32] = 0x00000000;
		Mem309[ebp_103 - 0x00000038:word32] = 0x00000000;
		Mem310[ebp_103 - 0x00000034:word32] = 0x00000000;
		if (Mem310[ebp_103 + 0x00000020:word32] == 0x00000000)
			Mem536[ebp_103 + 0x00000020:word32] = Mem310[0x0040BC64:word32];
		word32 esp_313 = esp_22 - 0x00000004;
		Mem314[esp_313 + 0x00000000:word32] = 0x00000000;
		Mem316[esp_313 - 0x00000004:word32] = 0x00000000;
		Mem318[esp_313 - 0x00000008:word32] = Mem316[ebp_103 + 0x00000014:word32];
		Mem320[esp_313 - 0x0000000C:word32] = Mem318[ebp_103 + 0x00000010:word32];
		Mem328[esp_313 - 0x00000010:word32] = (word32) (Mem320[ebp_103 + 0x00000024:word32] != 0x00000000) * 0x00000008 + 0x00000001;
		Mem330[esp_313 - 0x00000014:word32] = Mem328[ebp_103 + 0x00000020:word32];
		word32 eax_331 = MultiByteToWideChar(Mem330[esp_313 - 0x00000014:UINT], Mem330[esp_313 - 16:DWORD], Mem330[esp_313 - 12:LPCSTR], Mem330[esp_313 - 8:int32], Mem330[esp_313 - 4:LPWSTR], Mem330[esp_313 + 0x00000000:int32]);
		Mem334[ebp_103 - 0x00000030:word32] = eax_331;
		word32 esp_332 = esp_313 + 0x00000004;
		if (eax_331 != 0x00000000)
		{
			Mem337[ebp_103 - 0x00000004:word32] = 0x00000001;
			fn00403D30(eax_331 * 0x00000002 + 0x00000003 & 0xFFFFFFFC, 0x00000038);
			Mem343[ebp_103 - 0x00000018:word32] = esp_313 + 0x00000004;
			Mem345[ebp_103 - 0x0000001C:word32] = esp_313 + 0x00000004;
			Mem347[ebp_103 - 0x00000004:word32] = Mem345[ebp_103 - 0x00000004:word32] | 0xFFFFFFFF;
			if (Mem347[ebp_103 - 0x0000001C:word32] == 0x00000000)
			{
				Mem526[esp_313 + 0x00000000:word32] = eax_331 * 0x00000002;
				word32 edx_527;
				word32 eax_528 = fn00403DDF(0x00000038, out edx_527);
				Mem531[ebp_103 - 0x0000001C:word32] = eax_528;
				esp_332 = esp_313 + 0x00000004;
				if (eax_528 != 0x00000000)
				{
					Mem534[ebp_103 - 0x00000038:word32] = 0x00000001;
l00407587:
					word32 esp_356 = esp_332 - 0x00000004;
					Mem357[esp_356 + 0x00000000:word32] = eax_331;
					Mem359[esp_356 - 0x00000004:word32] = Mem357[ebp_103 - 0x0000001C:word32];
					Mem361[esp_356 - 0x00000008:word32] = Mem359[ebp_103 + 0x00000014:word32];
					Mem363[esp_356 - 0x0000000C:word32] = Mem361[ebp_103 + 0x00000010:word32];
					Mem365[esp_356 - 0x00000010:word32] = 0x00000001;
					Mem367[esp_356 - 0x00000014:word32] = Mem365[ebp_103 + 0x00000020:word32];
					word32 esp_369 = esp_356 + 0x00000004;
					if (MultiByteToWideChar(Mem367[esp_356 - 0x00000014:UINT], Mem367[esp_356 - 16:DWORD], Mem367[esp_356 - 12:LPCSTR], Mem367[esp_356 - 8:int32], Mem367[esp_356 - 4:LPWSTR], Mem367[esp_356 + 0x00000000:int32]) != 0x00000000)
					{
						Mem413[esp_356 + 0x00000000:word32] = 0x00000000;
						Mem415[esp_356 - 0x00000004:word32] = 0x00000000;
						Mem417[esp_356 - 0x00000008:word32] = eax_331;
						Mem419[esp_356 - 0x0000000C:word32] = Mem417[ebp_103 - 0x0000001C:word32];
						Mem421[esp_356 - 0x00000010:word32] = Mem419[ebp_103 + 0x0000000C:word32];
						Mem423[esp_356 - 0x00000014:word32] = Mem421[ebp_103 + 0x00000008:word32];
						word32 eax_424 = LCMapStringW(Mem423[esp_356 - 0x00000014:LCID], Mem423[esp_356 - 16:DWORD], Mem423[esp_356 - 12:LPCWSTR], Mem423[esp_356 - 8:int32], Mem423[esp_356 - 4:LPWSTR], Mem423[esp_356 + 0x00000000:int32]);
						Mem427[ebp_103 - 0x0000002C:word32] = eax_424;
						esp_369 = esp_356 + 0x00000004;
						if (eax_424 != 0x00000000)
							if ((Mem427[ebp_103 + 0x0000000D:byte] & 0x04) != 0x00)
								if (Mem427[ebp_103 + 0x0000001C:word32] != 0x00000000 && eax_424 <= Mem427[ebp_103 + 0x0000001C:word32])
								{
									Mem438[esp_356 + 0x00000000:word32] = Mem427[ebp_103 + 0x0000001C:word32];
									Mem440[esp_356 - 0x00000004:word32] = Mem438[ebp_103 + 0x00000018:word32];
									Mem442[esp_356 - 0x00000008:word32] = eax_331;
									Mem444[esp_356 - 0x0000000C:word32] = Mem442[ebp_103 - 0x0000001C:word32];
									Mem446[esp_356 - 0x00000010:word32] = Mem444[ebp_103 + 0x0000000C:word32];
									Mem448[esp_356 - 0x00000014:word32] = Mem446[ebp_103 + 0x00000008:word32];
									LCMapStringW(Mem448[esp_356 - 0x00000014:LCID], Mem448[esp_356 - 16:DWORD], Mem448[esp_356 - 12:LPCWSTR], Mem448[esp_356 - 8:int32], Mem448[esp_356 - 4:LPWSTR], Mem448[esp_356 + 0x00000000:int32]);
									esp_369 = esp_356 + 0x00000004;
								}
							else
							{
								Mem451[ebp_103 - 0x00000004:word32] = 0x00000002;
								fn00403D30(eax_424 * 0x00000002 + 0x00000003 & 0xFFFFFFFC, 0x00000038);
								Mem457[ebp_103 - 0x00000018:word32] = esp_356 + 0x00000004;
								Mem459[ebp_103 - 0x00000020:word32] = esp_356 + 0x00000004;
								Mem461[ebp_103 - 0x00000004:word32] = Mem459[ebp_103 - 0x00000004:word32] | 0xFFFFFFFF;
								if (Mem461[ebp_103 - 0x00000020:word32] == 0x00000000)
								{
									Mem515[esp_356 + 0x00000000:word32] = eax_424 * 0x00000002;
									word32 edx_516;
									word32 eax_517 = fn00403DDF(0x00000038, out edx_516);
									Mem520[ebp_103 - 0x00000020:word32] = eax_517;
									esp_369 = esp_356 + 0x00000004;
									if (eax_517 != 0x00000000)
									{
										Mem523[ebp_103 - 0x00000034:word32] = 0x00000001;
l00407651:
										word32 esp_470 = esp_369 - 0x00000004;
										Mem471[esp_470 + 0x00000000:word32] = eax_424;
										Mem473[esp_470 - 0x00000004:word32] = Mem471[ebp_103 - 0x00000020:word32];
										Mem475[esp_470 - 0x00000008:word32] = eax_331;
										Mem477[esp_470 - 0x0000000C:word32] = Mem475[ebp_103 - 0x0000001C:word32];
										Mem479[esp_470 - 0x00000010:word32] = Mem477[ebp_103 + 0x0000000C:word32];
										Mem481[esp_470 - 0x00000014:word32] = Mem479[ebp_103 + 0x00000008:word32];
										esp_369 = esp_470 + 0x00000004;
										if (LCMapStringW(Mem481[esp_470 - 0x00000014:LCID], Mem481[esp_470 - 16:DWORD], Mem481[esp_470 - 12:LPCWSTR], Mem481[esp_470 - 8:int32], Mem481[esp_470 - 4:LPWSTR], Mem481[esp_470 + 0x00000000:int32]) != 0x00000000)
										{
											word32 esp_493;
											Mem488[esp_470 + 0x00000000:word32] = 0x00000000;
											Mem490[esp_470 - 0x00000004:word32] = 0x00000000;
											if (Mem490[ebp_103 + 0x0000001C:word32] == 0x00000000)
											{
												Mem506[esp_470 - 0x00000008:word32] = 0x00000000;
												Mem508[esp_470 - 0x0000000C:word32] = 0x00000000;
												esp_493 = esp_470 - 0x0000000C;
											}
											else
											{
												Mem510[esp_470 - 0x00000008:word32] = Mem490[ebp_103 + 0x0000001C:word32];
												Mem512[esp_470 - 0x0000000C:word32] = Mem510[ebp_103 + 0x00000018:word32];
												esp_493 = esp_470 - 0x0000000C;
											}
											word32 esp_494 = esp_493 - 0x00000004;
											Mem495[esp_494 + 0x00000000:word32] = eax_424;
											Mem497[esp_494 - 0x00000004:word32] = Mem495[ebp_103 - 0x00000020:word32];
											Mem499[esp_494 - 0x00000008:word32] = 0x00000000;
											Mem501[esp_494 - 0x0000000C:word32] = Mem499[ebp_103 + 0x00000020:word32];
											WideCharToMultiByte(Mem501[esp_494 - 0x0000000C:UINT], Mem501[esp_494 - 8:DWORD], Mem501[esp_494 - 4:LPCWSTR], Mem501[esp_494 + 0x00000000:int32], Mem501[esp_494 + 4:LPSTR], Mem501[esp_494 + 8:int32], Mem501[esp_494 + 12:LPCSTR], Mem501[esp_494 + 16:LPBOOL]);
											esp_369 = esp_494 + 0x00000014;
										}
									}
								}
								else
									goto l00407651;
							}
					}
					if (Mem367[ebp_103 - 0x00000034:word32] != 0x00000000)
					{
						word32 esp_404 = esp_369 - 0x00000004;
						Mem405[esp_404 + 0x00000000:word32] = Mem367[ebp_103 - 0x00000020:word32];
						word32 edx_406;
						word32 edi_408;
						fn0040403C(dwArg00, out edx_406, out ebx_12, out edi_408);
						esp_369 = esp_404 + 0x00000004;
					}
					if (Mem367[ebp_103 - 0x00000038:word32] != ebx_12)
					{
						Mem397[esp_369 - 0x00000004:word32] = Mem367[ebp_103 - 0x0000001C:word32];
						word32 edx_398;
						word32 ebx_399;
						word32 edi_400;
						fn0040403C(dwArg00, out edx_398, out ebx_399, out edi_400);
					}
				}
				else
l004076E0:
			}
			else
				goto l00407587;
		}
		else
			goto l004076E0;
	}
	else
		goto l004076E0;
	word32 ebp_49;
	word32 esi_50;
	word32 edi_51;
	word16 cx_52;
	return fn00403C0B(ebp_103, fs, 0x00000038, dwArg00, dwArg04, dwArg08, out ebp_49, out esi_50, out edi_51, out cx_52);
}

word32 fn004080DE(word32 dwArg04, word32 dwArg08, ptr32 edxOut)
{
	*edxOut = edx;
	word32 eax_117;
	if (dwArg04 == 0x00000000)
	{
		word32 edx_48;
		eax_117 = fn00403DDF(dwLoc14, out edx_48);
	}
	else
	{
		word32 esi_147 = dwArg08;
		if (dwArg08 == 0x00000000)
		{
			word32 edx_122;
			word32 ebx_123;
			word32 edi_124;
			fn0040403C(dwArg04, out edx_122, out ebx_123, out edi_124);
l00408239:
			eax_117 = 0x00000000;
		}
		else if (Mem0[0x0040BEC4:word32] == 0x00000003)
		{
l0040811A:
			do
			{
				word32 edi_154 = 0x00000000;
				if (esi_147 <=u 0xFFFFFFE0)
				{
					word32 edx_213;
					word32 eax_214 = fn00405D85(dwArg04, out edx_213);
					word32 ebp_215 = eax_214;
					if (eax_214 == 0x00000000)
						goto l004081C6;
					else
					{
						if (esi_147 <=u Mem0[0x0040BC84:word32])
						{
							dwLoc18 = dwArg04;
							word32 edx_376;
							if (fn00406285(eax_214, dwArg04, SLICE(dwArg04, byte, 24), esi_147, SLICE(esi_147, byte, 24), out edx_376) != 0x00000000)
							{
								edi_154 = dwArg04;
l00408182:
								if (edi_154 == 0x00000000)
								{
l00408186:
									if (esi_147 == 0x00000000)
										esi_147 = esi_147 + 0x00000001;
									word32 esi_330 = esi_147 + 0x0000000F;
									word32 eax_338 = HeapAlloc(Mem0[0x0040BEC0:word32], 0x00000000, esi_330 & 0xFFFFFFF0);
									esi_147 = esi_330 & 0xFFFFFFF0;
									dwLoc18 = 0x00000000;
									edi_154 = eax_338;
									if (eax_338 != 0x00000000)
									{
										word32 eax_344 = Mem0[dwArg04 - 0x00000004:word32];
										word32 eax_345 = eax_344 - 0x00000001;
										if (eax_344 - 0x00000001 >=u (esi_330 & 0xFFFFFFF0))
											eax_345 = esi_330 & 0xFFFFFFF0;
										Mem352[fp - 0x00000018:word32] = dwArg04;
										fn00405A00(eax_338, 0x00000000, eax_345);
										word32 edx_360;
										byte bl_361;
										fn00405DB0(ebp_215, dwArg04, SLICE(dwArg04, byte, 24), out edx_360, out bl_361);
									}
								}
							}
							else
							{
								word32 edx_405;
								word32 eax_406 = fn00406564(esi_147, esi_147, SLICE(esi_147, byte, 24), out edx_405);
								edi_154 = eax_406;
								if (eax_406 != 0x00000000)
								{
									word32 eax_413 = Mem0[dwArg04 - 0x00000004:word32];
									word32 eax_414 = eax_413 - 0x00000001;
									if (eax_413 - 0x00000001 >=u esi_147)
										eax_414 = esi_147;
									fn00405A00(eax_406, dwArg04, eax_414);
									word32 edx_426;
									word32 eax_427 = fn00405D85(dwArg04, out edx_426);
									word32 edx_434;
									byte bl_435;
									fn00405DB0(eax_427, dwArg04, SLICE(dwArg04, byte, 24), out edx_434, out bl_435);
									dwLoc18 = dwArg04;
									ebp_215 = eax_427;
									goto l00408182;
								}
								else
									goto l00408186;
							}
						}
						else
							goto l00408186;
						if (ebp_215 == 0x00000000)
						{
l004081C6:
							if (esi_147 == 0x00000000)
								esi_147 = esi_147 + 0x00000001;
							word32 esi_268 = esi_147 + 0x0000000F;
							esi_147 = esi_268 & 0xFFFFFFF0;
							dwLoc18 = dwArg04;
							edi_154 = HeapReAlloc(Mem0[0x0040BEC0:word32], 0x00000000, dwArg04, esi_268 & 0xFFFFFFF0);
						}
					}
					if (edi_154 != 0x00000000)
						;
				}
l004081E7:
				if (Mem0[0x0040BC48:word32] == 0x00000000)
				{
					eax_117 = edi_154;
					goto l0040823B;
				}
			} while (fn00406B77(dwLoc18) != 0x00000000);
			goto l00408239;
		}
		else
			do
			{
				eax_117 = 0x00000000;
				if (esi_147 <=u 0xFFFFFFE0)
				{
					if (esi_147 == 0x00000000)
						esi_147 = esi_147 + 0x00000001;
					Mem479[fp - 0x0000001C:word32] = 0x00000000;
					dwLoc18 = dwArg04;
					eax_117 = HeapReAlloc(Mem479[0x0040BEC0:word32], 0x00000000, dwArg04, esi_147);
					if (eax_117 != 0x00000000)
						;
				}
l00408225:
				if (Mem0[0x0040BC48:word32] == 0x00000000)
					goto l0040823B;
			} while (fn00406B77(dwLoc18) != 0x00000000);
l0040823B:
	}
	return eax_117;
}

word32 fn00408240(word32 dwArg00, word32 dwArg04)
{
	word32 dwLoc08_25;
	if (Mem0[0x0040BEC4:word32] == 0x00000003)
	{
		word32 edx_38;
		if (fn00405D85(dwArg04, out edx_38) != 0x00000000)
			return Mem0[dwArg04 - 0x00000004:word32] - 0x00000009;
		else
		{
			dwLoc08_25 = dwArg04;
l00408268:
			return HeapSize(Mem0[0x0040BEC0:word32], 0x00000000, dwLoc08_25);
		}
	}
	else
	{
		dwLoc08_25 = dwArg00;
		goto l00408268;
	}
}

word32 fn00408278(word32 dwArg04)
{
	Mem4[0x0040BA54:word32] = dwArg04;
	word32 ecx_17 = 0x00000000;
	do
	{
		if (dwArg04 == 0x0040B5F8[ecx_17 * 0x00000008])
		{
			word32 eax_37 = 0x0040B5FC[ecx_17 * 0x00000008];
			Mem38[0x0040BA50:word32] = eax_37;
			return eax_37;
		}
		ecx_17 = ecx_17 + 0x00000001;
	} while (ecx_17 <u 0x0000002D);
	if (dwArg04 >=u 0x00000013 && dwArg04 <=u 0x00000024)
	{
		Mem36[0x0040BA50:word32] = 0x0000000D;
		return dwArg04;
	}
	else
	{
		if (dwArg04 >=u 0x000000BC)
		{
			Mem33[0x0040BA50:word32] = 0x00000008;
			if (dwArg04 >u 0x000000CA)
			{
l004082CC:
				Mem30[0x0040BA50:word32] = 0x00000016;
			}
		}
		else
			goto l004082CC;
		return dwArg04;
	}
fn00408278_exit:
}

void fn004082D7(word32 edx, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10)
{
	if (dwArg04 <u Mem0[0x0040BEC8:word32])
	{
		word32 edi_89 = (dwArg04 >> 0x00000005) * 0x00000004 + 0x0040BEE0;
		word32 esi_91 = (dwArg04 & 0x0000001F) << 0x00000003;
		if ((Mem0[Mem0[edi_89 + 0x00000000:word32] + 0x00000004 + esi_91:byte] & 0x01) != 0x00)
		{
			word32 eax_103 = fn004083F0(dwArg04);
			if (eax_103 == 0xFFFFFFFF)
			{
l00408362:
				Mem72[0x0040BA50:word32] = 0x00000009;
				goto l0040836C;
			}
			else if (SetFilePointer(eax_103, dwArg08, fp - 0x00000008, dwArg10) == 0xFFFFFFFF)
			{
				word32 eax_132 = GetLastError();
				if (eax_132 != 0x00000000)
				{
					fn00408278(eax_132);
l0040836C:
				}
				else
				{
l0040834A:
					word32 eax_125 = Mem0[edi_89 + 0x00000000:word32] + 0x00000004 + esi_91;
					Mem127[eax_125 + 0x00000000:byte] = Mem0[eax_125 + 0x00000000:byte] & 0xFD;
				}
			}
			else
				goto l0040834A;
		}
		else
		{
l0040835B:
			Mem81[0x0040BA54:word32] = Mem0[0x0040BA54:word32] & 0x00000000;
			goto l00408362;
		}
	}
	else
		goto l0040835B;
	return;
}

void fn00408376(word32 eax, word32 dwArg04)
{
	if (dwArg04 <u Mem0[0x0040BEC8:word32])
	{
		word32 edi_44 = (dwArg04 >> 0x00000005) * 0x00000004 + 0x0040BEE0;
		word32 esi_47 = (dwArg04 & 0x0000001F) << 0x00000003;
		word32 eax_48 = Mem0[edi_44 + 0x00000000:word32] + esi_47;
		if ((Mem0[eax_48 + 0x00000004:byte] & 0x01) != 0x00 && Mem0[eax_48 + 0x00000000:word32] != 0xFFFFFFFF)
		{
			if (Mem0[0x0040B0BC:word32] == 0x00000001)
			{
				word32 dwLoc10_76;
				word32 dwLoc0C_75;
				if (dwArg04 == 0x00000000)
				{
					dwLoc0C_75 = 0x00000000;
					dwLoc10_76 = 0xFFFFFFF6;
					goto l004083C9;
				}
				else if (dwArg04 != 0x00000001)
					if (dwArg04 == 0x00000002)
					{
						dwLoc0C_75 = 0x00000000;
						dwLoc10_76 = 0xFFFFFFF4;
l004083C9:
						SetStdHandle(dwLoc10_76, dwLoc0C_75);
					}
				else
				{
					dwLoc0C_75 = 0x00000000;
					dwLoc10_76 = 0xFFFFFFF5;
					goto l004083C9;
				}
			}
			word32 eax_62 = Mem0[edi_44 + 0x00000000:word32];
			Mem64[esi_47 + eax_62:word32] = Mem0[esi_47 + eax_62:word32] | 0xFFFFFFFF;
		}
		else
		{
l004083D9:
			Mem33[0x0040BA54:word32] = Mem0[0x0040BA54:word32] & 0x00000000;
			Mem35[0x0040BA50:word32] = 0x00000009;
		}
	}
	else
		goto l004083D9;
	return;
}

word32 fn004083F0(word32 dwArg04)
{
	word32 eax_16 = dwArg04;
	if (dwArg04 <u Mem0[0x0040BEC8:word32])
	{
		eax_16 = 0x0040BEE0[(dwArg04 >> 0x00000005) * 0x00000004] + (dwArg04 & 0x0000001F) * 0x00000008;
		if ((Mem0[eax_16 + 0x00000004:byte] & 0x01) != 0x00)
			return Mem0[eax_16 + 0x00000000:word32];
		else
		{
l00408417:
			Mem18[0x0040BA54:word32] = Mem0[0x0040BA54:word32] & 0x00000000;
			Mem20[0x0040BA50:word32] = 0x00000009;
			return eax_16 | 0xFFFFFFFF;
		}
	}
	else
		goto l00408417;
}

word32 fn0040842C(word32 eax, word32 dwArg04)
{
	word32 eax_26;
	if (dwArg04 <u Mem0[0x0040BEC8:word32])
	{
		word32 ebx_66 = (dwArg04 >> 0x00000005) * 0x00000004 + 0x0040BEE0;
		eax = Mem0[ebx_66 + 0x00000000:word32];
		word32 esi_68 = (dwArg04 & 0x0000001F) << 0x00000003;
		if ((Mem0[eax + 0x00000004 + esi_68:byte] & 0x01) != 0x00)
		{
			word32 ebp_107;
			word32 eax_105 = fn004083F0(dwArg04);
			if (eax_105 == 0xFFFFFFFF)
				goto l004084A5;
			else if (dwArg04 != 0x00000001 && dwArg04 != 0x00000002)
			{
l00408489:
				eax_105 = CloseHandle(fn004083F0(dwArg04));
				if (eax_105 == 0x00000000)
				{
					eax_105 = GetLastError();
					ebp_107 = eax_105;
				}
				else
				{
l004084A5:
					ebp_107 = 0x00000000;
				}
			}
			else
			{
				word32 eax_131 = fn004083F0(0x00000002);
				eax_105 = fn004083F0(0x00000001);
				if (eax_105 != eax_131)
					goto l00408489;
				else
					goto l004084A5;
			}
			fn00408376(eax_105, dwArg04);
			Mem91[Mem0[ebx_66 + 0x00000000:word32] + 0x00000004 + esi_68:byte] = 0x00;
			if (ebp_107 != 0x00000000)
			{
				eax = fn00408278(ebp_107);
l004084D7:
				eax_26 = eax | 0xFFFFFFFF;
			}
			else
				eax_26 = 0x00000000;
		}
		else
		{
l004084C6:
			Mem55[0x0040BA54:word32] = Mem0[0x0040BA54:word32] & 0x00000000;
			Mem58[0x0040BA50:word32] = 0x00000009;
			goto l004084D7;
		}
	}
	else
		goto l004084C6;
	return eax_26;
}

word32 fn004084DF(word32 dwArg04, ptr32 edxOut, ptr32 ebxOut, ptr32 ediOut)
{
	*edxOut = edx;
	*ebxOut = ebx;
	*ediOut = edi;
	word32 eax_23 = Mem0[dwArg04 + 0x0000000C:word32];
	byte al_9 = (byte) eax_23;
	if ((al_9 & 0x83) != 0x00 && (al_9 & 0x08) != 0x00)
	{
		word32 edx_38;
		word32 ebx_39;
		word32 edi_40;
		fn0040403C(Mem0[dwArg04 + 0x00000008:word32], out edx_38, out ebx_39, out edi_40);
		Mem43[dwArg04 + 0x0000000C:word16] = Mem0[dwArg04 + 0x0000000C:word16] & 0xFBF7;
		Mem51[dwArg04 + 0x00000000:word32] = 0x00000000;
		Mem52[dwArg04 + 0x00000008:word32] = 0x00000000;
		Mem53[dwArg04 + 0x00000004:word32] = 0x00000000;
		eax_23 = 0x00000000;
	}
	return eax_23;
}

word32 fn0040850A(word32 ebx, word32 esi, word32 edi, word16 cx, selector fs, word32 dwArg04, ptr32 ebxOut, ptr32 esiOut, ptr32 ediOut)
{
	word32 ebp_30 = fp - 0x00000004;
	if (GetLocaleInfoA(dwArg04, 0x00001004, fp - 0x00000010, 0x00000006) == 0x00000000)
		;
	else
	{
		Mem53[fp - 0x00000014:word32] = fp - 0x00000010;
		ebx = fn004089CE(ebx, esi, edi, cx, fs, 0x00000006, out ebp_30, out edi);
	}
	word32 edx_34;
	word32 ebx_35;
	word32 ebp_36;
	word32 esi_37;
	word32 edi_38;
	return fn004041A2(Mem0[ebp_30 - 0x00000004:word32], ebx, esi, edi, fs, out edx_34, out ebx_35, out ebp_36, out esi_37, out edi_38);
}

word32 fn0040854D(word32 ebx, word32 esi, word32 edi, selector fs, ptr32 ebxOut, ptr32 ebpOut, ptr32 ediOut)
{
	word32 ebp_11 = fn00403BD0(ebx, esi, edi, fs, dwLoc0C, 0x00409D98, 0x00000038);
	Mem14[ebp_11 - 0x0000001C:word32] = Mem0[0x0040B498:word32];
	Mem16[ebp_11 - 0x00000034:word32] = 0x00000000;
	Mem17[ebp_11 - 0x00000044:word32] = 0x00000000;
	word32 ebx_106 = Mem17[Mem17[ebp_11 + 0x00000014:word32]:word32];
	Mem20[ebp_11 - 0x00000040:word32] = ebx_106;
	Mem21[ebp_11 - 0x0000003C:word32] = 0x00000000;
	word32 esp_156 = fp - 0x00000008;
	word32 edi_15 = 0x00000000;
	word32 eax_22 = Mem21[ebp_11 + 0x00000008:word32];
	if (eax_22 != Mem21[ebp_11 + 0x0000000C:word32])
	{
		Mem79[fp - 0x0000000C:word32] = ebp_11 - 0x00000030;
		Mem81[fp - 0x00000010:word32] = eax_22;
		word32 eax_312 = GetCPInfo(Mem81[fp - 0x00000010:UINT], Mem81[fp - 12:LPCPINFO]);
		word32 esp_112 = fp - 0x00000008;
		if (eax_312 != 0x00000000 && Mem81[ebp_11 - 0x00000030:word32] == 0x00000001)
		{
			Mem309[fp - 0x0000000C:word32] = ebp_11 - 0x00000030;
			Mem311[fp - 0x00000010:word32] = Mem309[ebp_11 + 0x0000000C:word32];
			eax_312 = GetCPInfo(Mem311[fp - 0x00000010:UINT], Mem311[fp - 12:LPCPINFO]);
			esp_112 = fp - 0x00000008;
			if (eax_312 != 0x00000000 && Mem311[ebp_11 - 0x00000030:word32] == 0x00000001)
				Mem319[ebp_11 - 0x0000003C:word32] = 0x00000001;
		}
		if (Mem81[ebp_11 - 0x0000003C:word32] == 0x00000000)
			esi = Mem81[ebp_11 - 0x00000038:word32];
		else
		{
			if (ebx_106 != 0xFFFFFFFF)
				esi = ebx_106;
			else
			{
				word32 esp_296 = esp_112 - 0x00000004;
				Mem297[esp_296 + 0x00000000:word32] = Mem81[ebp_11 + 0x00000010:word32];
				esp_112 = esp_296 + 0x00000004;
				esi = fn00404080(eax_312, dwArg00) + 0x00000001;
			}
			Mem294[ebp_11 - 0x00000038:word32] = esi;
		}
		if (Mem81[ebp_11 - 0x0000003C:word32] == 0x00000000)
		{
			word32 esp_269 = esp_112 - 0x00000004;
			Mem270[esp_269 + 0x00000000:word32] = 0x00000000;
			Mem272[esp_269 - 0x00000004:word32] = 0x00000000;
			Mem274[esp_269 - 0x00000008:word32] = ebx_106;
			Mem276[esp_269 - 0x0000000C:word32] = Mem274[ebp_11 + 0x00000010:word32];
			Mem278[esp_269 - 0x00000010:word32] = 0x00000001;
			Mem280[esp_269 - 0x00000014:word32] = Mem278[ebp_11 + 0x00000008:word32];
			word32 eax_281 = MultiByteToWideChar(Mem280[esp_269 - 0x00000014:UINT], Mem280[esp_269 - 16:DWORD], Mem280[esp_269 - 12:LPCSTR], Mem280[esp_269 - 8:int32], Mem280[esp_269 - 4:LPWSTR], Mem280[esp_269 + 0x00000000:int32]);
			Mem284[ebp_11 - 0x00000038:word32] = eax_281;
			esp_112 = esp_269 + 0x00000004;
			esi = eax_281;
			if (eax_281 != 0x00000000)
			{
l004085F2:
				Mem114[ebp_11 - 0x00000004:word32] = 0x00000000;
				fn00403D30(esi * 0x00000002 + 0x00000003 & 0xFFFFFFFC, 0x00000038);
				Mem120[ebp_11 - 0x00000018:word32] = esp_112;
				Mem122[ebp_11 - 0x00000048:word32] = esp_112;
				word32 esp_124 = esp_112 - 0x00000004;
				Mem125[esp_124 + 0x00000000:word32] = esi * 0x00000002;
				Mem127[esp_124 - 0x00000004:word32] = 0x00000000;
				Mem129[esp_124 - 0x00000008:word32] = esp_112;
				fn004045E0(dwArg00, bArg04, dwArg08);
				Mem134[ebp_11 - 0x00000004:word32] = Mem129[ebp_11 - 0x00000004:word32] | 0xFFFFFFFF;
				ebx_106 = esp_112;
				word32 esp_132 = esp_124 + 0x00000004;
				if (esp_112 == 0x00000000)
				{
					Mem257[esp_124 + 0x00000000:word32] = esi;
					Mem259[esp_124 - 0x00000004:word32] = 0x00000002;
					word32 eax_260 = fn00404245(dwArg00, dwArg04);
					esp_132 = esp_124 + 0x00000004;
					ebx_106 = eax_260;
					if (eax_260 == 0x00000000)
l0040864A:
					else
					{
						Mem268[ebp_11 - 0x00000044:word32] = 0x00000001;
l00408658:
						word32 esp_143 = esp_132 - 0x00000004;
						Mem144[esp_143 + 0x00000000:word32] = esi;
						Mem146[esp_143 - 0x00000004:word32] = ebx_106;
						Mem148[esp_143 - 0x00000008:word32] = Mem146[ebp_11 - 0x00000040:word32];
						Mem150[esp_143 - 0x0000000C:word32] = Mem148[ebp_11 + 0x00000010:word32];
						Mem152[esp_143 - 0x00000010:word32] = 0x00000001;
						Mem154[esp_143 - 0x00000014:word32] = Mem152[ebp_11 + 0x00000008:word32];
						esp_156 = esp_143 + 0x00000004;
						if (MultiByteToWideChar(Mem154[esp_143 - 0x00000014:UINT], Mem154[esp_143 - 16:DWORD], Mem154[esp_143 - 12:LPCSTR], Mem154[esp_143 - 8:int32], Mem154[esp_143 - 4:LPWSTR], Mem154[esp_143 + 0x00000000:int32]) != 0x00000000)
							if (Mem154[ebp_11 + 0x00000018:word32] != 0x00000000)
							{
								Mem164[esp_143 + 0x00000000:word32] = 0x00000000;
								Mem166[esp_143 - 0x00000004:word32] = 0x00000000;
								Mem168[esp_143 - 0x00000008:word32] = Mem166[ebp_11 + 0x0000001C:word32];
								Mem170[esp_143 - 0x0000000C:word32] = Mem168[ebp_11 + 0x00000018:word32];
								Mem172[esp_143 - 0x00000010:word32] = esi;
								Mem174[esp_143 - 0x00000014:word32] = ebx_106;
								Mem176[esp_143 - 0x00000018:word32] = 0x00000000;
								Mem178[esp_143 - 0x0000001C:word32] = Mem176[ebp_11 + 0x0000000C:word32];
								esp_156 = esp_143 + 0x00000004;
								if (WideCharToMultiByte(Mem178[esp_143 - 0x0000001C:UINT], Mem178[esp_143 - 24:DWORD], Mem178[esp_143 - 20:LPCWSTR], Mem178[esp_143 - 16:int32], Mem178[esp_143 - 12:LPSTR], Mem178[esp_143 - 8:int32], Mem178[esp_143 - 4:LPCSTR], Mem178[esp_143 + 0x00000000:LPBOOL]) != 0x00000000)
									Mem185[ebp_11 - 0x00000034:word32] = Mem178[ebp_11 + 0x00000018:word32];
							}
							else if (Mem154[ebp_11 - 0x0000003C:word32] == 0x00000000)
							{
								Mem236[esp_143 + 0x00000000:word32] = 0x00000000;
								Mem238[esp_143 - 0x00000004:word32] = 0x00000000;
								Mem240[esp_143 - 0x00000008:word32] = 0x00000000;
								Mem242[esp_143 - 0x0000000C:word32] = 0x00000000;
								Mem244[esp_143 - 0x00000010:word32] = esi;
								Mem246[esp_143 - 0x00000014:word32] = ebx_106;
								Mem248[esp_143 - 0x00000018:word32] = 0x00000000;
								Mem250[esp_143 - 0x0000001C:word32] = Mem248[ebp_11 + 0x0000000C:word32];
								word32 eax_251 = WideCharToMultiByte(Mem250[esp_143 - 0x0000001C:UINT], Mem250[esp_143 - 24:DWORD], Mem250[esp_143 - 20:LPCWSTR], Mem250[esp_143 - 16:int32], Mem250[esp_143 - 12:LPSTR], Mem250[esp_143 - 8:int32], Mem250[esp_143 - 4:LPCSTR], Mem250[esp_143 + 0x00000000:LPBOOL]);
								esp_156 = esp_143 + 0x00000004;
								esi = eax_251;
								if (eax_251 != 0x00000000)
								{
l004086B3:
									word32 esp_190 = esp_156 - 0x00000004;
									Mem191[esp_190 + 0x00000000:word32] = esi;
									Mem193[esp_190 - 0x00000004:word32] = 0x00000001;
									word32 eax_194 = fn00404245(dwArg00, dwArg04);
									Mem199[ebp_11 - 0x00000034:word32] = eax_194;
									esp_156 = esp_190 + 0x00000004;
									if (eax_194 != 0x00000000)
									{
										Mem203[esp_190 + 0x00000000:word32] = 0x00000000;
										Mem205[esp_190 - 0x00000004:word32] = 0x00000000;
										Mem207[esp_190 - 0x00000008:word32] = esi;
										Mem209[esp_190 - 0x0000000C:word32] = eax_194;
										Mem211[esp_190 - 0x00000010:word32] = esi;
										Mem213[esp_190 - 0x00000014:word32] = ebx_106;
										Mem215[esp_190 - 0x00000018:word32] = 0x00000000;
										Mem217[esp_190 - 0x0000001C:word32] = Mem215[ebp_11 + 0x0000000C:word32];
										word32 eax_218 = WideCharToMultiByte(Mem217[esp_190 - 0x0000001C:UINT], Mem217[esp_190 - 24:DWORD], Mem217[esp_190 - 20:LPCWSTR], Mem217[esp_190 - 16:int32], Mem217[esp_190 - 12:LPSTR], Mem217[esp_190 - 8:int32], Mem217[esp_190 - 4:LPCSTR], Mem217[esp_190 + 0x00000000:LPBOOL]);
										esp_156 = esp_190 + 0x00000004;
										if (eax_218 == 0x00000000)
										{
											Mem223[esp_190 + 0x00000000:word32] = Mem217[ebp_11 - 0x00000034:word32];
											word32 edx_224;
											fn0040403C(dwArg00, out edx_224, out ebx_106, out edi_15);
											Mem230[ebp_11 - 0x00000034:word32] = edi_15;
											esp_156 = esp_190 + 0x00000004;
										}
										else if (Mem217[ebp_11 - 0x00000040:word32] != 0xFFFFFFFF)
											Mem234[Mem217[ebp_11 + 0x00000014:word32]:word32] = eax_218;
									}
								}
							}
							else
								goto l004086B3;
l004086F6:
						if (Mem21[ebp_11 - 0x00000044:word32] != edi_15)
						{
							Mem70[esp_156 - 0x00000004:word32] = ebx_106;
							word32 edx_71;
							fn0040403C(dwArg00, out edx_71, out ebx_106, out edi_15);
						}
					}
				}
				else
					goto l00408658;
			}
			else
				goto l0040864A;
		}
		else
			goto l004085F2;
	}
	else
	{
		ebx_106 = Mem21[ebp_11 - 0x00000048:word32];
		goto l004086F6;
	}
	word32 edx_35;
	word32 ebx_36;
	word32 ebp_37;
	word32 esi_38;
	word32 edi_39;
	word32 eax_40 = fn004041A2(Mem21[ebp_11 - 0x0000001C:word32], ebx_106, esi, edi_15, fs, out edx_35, out ebx_36, out ebp_37, out esi_38, out edi_39);
	word32 ebp_44;
	word32 esi_45;
	word32 edi_46;
	word16 cx_47;
	word32 ebx_48;
	*ebxOut = fn00403C0B(ebp_37, fs, 0x00000038, dwArg00, dwArg04, dwArg08, out ebp_44, out esi_45, out edi_46, out cx_47);
	return eax_40;
}

word32 fn004089CE(word32 ebx, word32 esi, word32 edi, word16 cx, selector fs, word32 dwArg04, ptr32 ebpOut, ptr32 ediOut)
{
	*ediOut = edi;
	*ebpOut = ebp;
	word32 esp_10 = fp - 0x00000004;
	word32 esi_12 = dwArg04;
	word32 esp_15 = esp_10 - 0x00000004;
	Mem16[esp_15 + 0x00000000:word32] = (word32) Mem0[esi_12 + 0x00000000:byte];
	word32 esi_23;
	word32 eax_24 = fn00408A26(ebx, esi_12, edi, cx, fs, dwArg00, bArg02, bArg03, out ebx, out esi_23);
	cx = (word16) Mem16[esp_15 + 0x00000000:word32];
	esp_10 = esp_15 + 0x00000004;
	while (eax_24 != 0x00000000)
	{
		esi_12 = esi_23 + 0x00000001;
		esp_15 = esp_10 - 0x00000004;
		Mem16[esp_15 + 0x00000000:word32] = (word32) Mem0[esi_12 + 0x00000000:byte];
		eax_24 = fn00408A26(ebx, esi_12, edi, cx, fs, dwArg00, bArg02, bArg03, out ebx, out esi_23);
		cx = (word16) Mem16[esp_15 + 0x00000000:word32];
		esp_10 = esp_15 + 0x00000004;
	}
	word32 ecx_39;
	word32 ecx_31 = (word32) Mem16[esi_23 + 0x00000000:byte];
	word32 esi_33 = esi_23 + 0x00000001;
	if (ecx_31 != 0x0000002D)
	{
		ecx_39 = ecx_31;
		if (ecx_31 == 0x0000002B)
		{
l004089F4:
			ecx_39 = (word32) Mem16[esi_23 + 0x00000001:byte];
			esi_33 = esi_23 + 0x00000002;
		}
	}
	else
		goto l004089F4;
	while (true)
	{
		word32 ecx_55;
		if (ecx_39 >= 0x00000030 && ecx_39 <= 0x00000039)
			ecx_55 = ecx_39 - 0x00000030;
		else
			ecx_55 = ecx_39 | 0xFFFFFFFF;
		if (ecx_55 == 0xFFFFFFFF)
		{
			if (ecx_31 == 0x0000002D)
				;
			return ebx;
		}
		ecx_39 = (word32) Mem16[esi_33 + 0x00000000:byte];
		esi_33 = esi_33 + 0x00000001;
	}
}

word32 fn00408A26(word32 ebx, word32 esi, word32 edi, word16 cx, selector fs, word32 dwArg04, byte bArg06, byte bArg07, ptr32 ebxOut, ptr32 esiOut)
{
	*ebxOut = ebx;
	*esiOut = esi;
	word16 cx_12 = (word16) dwArg04;
	if (dwArg04 <=u 0x000000FF)
		if (Mem0[0x0040B4A0:word32] > 0x00000001)
		{
			word32 ebx_140;
			word32 edi_141;
			return fn00404318(ebx, esi, edi, fs, dwArg04, out ebx_140, out edi_141);
		}
		else
			return (word32) Mem0[0x0040B490:word32][dwArg04 * 0x02] & 0x00000008;
	else if (Mem0[0x0040BC98:word32] == 0x00000000)
	{
l00408A57:
		return 0x00000000;
	}
	else
	{
		word32 ebx_110;
		word32 ebp_111;
		word32 esi_112;
		word32 edi_113;
		word16 cx_114;
		if (fn004070AD(ebx, esi, edi, cx_12, fs, out ebx_110, out ebp_111, out esi_112, out edi_113, out cx_114) != 0x00000000 && (Mem0[ebp_111 - 0x00000002:word16] == 0x0000 && (Mem0[ebp_111 - 0x00000004:byte] & 0x08) != 0x00))
			return 0x00000001;
		else
			goto l00408A57;
	}
}

