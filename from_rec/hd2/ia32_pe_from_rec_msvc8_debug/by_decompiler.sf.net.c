// subject.c
// Generated on TIMESTAMP by decompiling from_rec/hd2/ia32_pe_from_rec_msvc8_debug/subject.exe
// using Decompiler version VERSION

#include "subject.h"

word32 fn00411023(word32 eax, word32 ecx, word32 edx, word32 ebx, word32 ebp, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs, ptr32 ebpOut)
{
	word32 ebp_14;
	return fn00411970(eax, ecx, edx, ebx, ebp, esi, edi, es, ds, fs, gs, dwLoc04, out ebp_14);
}

word32 fn0041103C()
{
	return fn00412CA0();
}

void fn00411055()
{
	fn00413000();
	return;
}

word32 fn00411096(word32 ecx, word32 edx, word32 ebp, selector es, selector ds, selector fs, selector gs)
{
	word32 esp_17 = fp - 0x00000014;
	word32 edi_19 = 0x00000000;
	if (Mem0[edx + 0x00000000:word32] > 0x00000000)
		do
		{
			word32 eax_57 = Mem0[edx + 0x00000004:word32];
			word32 ecx_58 = Mem0[eax_57 + edi_19:word32];
			word32 eax_59 = eax_57 + edi_19;
			if (Mem0[ecx_58 - 0x00000004 + ecx:word32] != 0xCCCCCCCC || Mem0[(Mem0[eax_59 + 0x00000004:word32] + ecx_58) + ecx:word32] != 0xCCCCCCCC)
			{
				word32 edx_75 = Mem0[fp + 0x00000000:word32];
				word32 esp_76 = esp_17 - 0x00000004;
				Mem77[esp_76 + 0x00000000:word32] = Mem0[Mem0[edx + 0x00000004:word32] + 0x00000008 + edi_19:word32];
				Mem79[esp_76 - 0x00000004:word32] = edx_75;
				fn004110F0(edx_75, ecx, edx, edi_19, es, ds, fs, gs, dwArg00, dwArg04);
				esp_17 = esp_76 + 0x00000004;
			}
			word32 eax_66 = Mem0[fp - 0x00000008:word32];
			Mem71[fp - 0x00000008:word32] = eax_66 + 0x00000001;
			edi_19 = edi_19 + 0x0000000C;
		} while (eax_66 + 0x00000001 < Mem0[edx + 0x00000000:word32]);
	word32 ebp_43 = Mem0[fp - 0x00000004:word32];
}

void fn004110AA()
{
fn004110AA_entry:
l004110AA:
fn004110AA_exit:
}

void fn004110B9()
{
fn004110B9_entry:
l004110B9:
l004133AC:
fn004110B9_exit:
}

void fn004110BE()
{
fn004110BE_entry:
l004110BE:
fn004110BE_exit:
}

void fn004110C3(selector es, selector ds, selector fs, selector gs, word32 dwArg08)
{
	word32 edi_17 = fp + 0xFFFFFEC4;
	word32 ecx_18 = 0x0000004E;
	while (ecx_18 != 0x00000000)
	{
		Mem24[edi_17 + 0x00000000:word32] = 0xCCCCCCCC;
		edi_17 = edi_17 + 0x00000004;
		ecx_18 = ecx_18 - 0x00000001;
	}
	MSVCR90D.dll!sprintf();
	word32 edx_50;
	word32 ebp_51;
	fn00411168(es, ds, fs, gs, out edx_50, out ebp_51);
	word32 esp_101 = fp + 0xFFFFFEB4;
	if (Mem0[ebp_51 + 0x00000010:word32] > 0x00000010)
		Mem241[ebp_51 + 0x00000010:word32] = 0x00000010;
	Mem56[ebp_51 - 0x00000064:word32] = 0x00000000;
	while (Mem56[ebp_51 - 0x00000064:word32] < Mem56[ebp_51 + 0x00000010:word32])
	{
		word32 esp_80 = esp_101 - 0x00000004;
		Mem81[esp_80 + 0x00000000:word32] = (word32) Mem56[Mem56[ebp_51 + 0x00000008:word32] + Mem56[ebp_51 - 0x00000064:word32]:byte];
		Mem83[esp_80 - 0x00000004:word32] = 0x0041574C;
		Mem89[esp_80 - 0x00000008:word32] = ebp_51 - 0x0000004F + Mem83[ebp_51 - 0x00000064:word32] *s 0x00000003;
		MSVCR90D.dll!sprintf();
		word32 edx_92;
		fn00411168(es, ds, fs, gs, out edx_92, out ebp_51);
		esp_101 = esp_80;
		Mem99[ebp_51 - 0x00000064:word32] = Mem89[ebp_51 - 0x00000064:word32] + 0x00000001;
	}
	while (true)
	{
		word32 eax_102 = Mem56[ebp_51 - 0x00000064:word32];
		Mem105[ebp_51 - 0x00000064:word32] = Mem56[ebp_51 - 0x00000064:word32] + 0x00000001;
		if (eax_102 < 0x00000010)
			Mem239[ebp_51 + 0xFFFFFEC8:word32] = 0x00000001;
		else
			Mem240[ebp_51 + 0xFFFFFEC8:word32] = 0x00000000;
		if (Mem105[ebp_51 + 0xFFFFFEC8:word32] == 0x00000000)
		{
			word32 eax_117 = ebp_51 - 0x00000058;
			word32 esp_118 = esp_101 - 0x00000004;
			Mem119[esp_118 + 0x00000000:word32] = eax_117;
			fn004110BE();
			Mem122[ebp_51 - 0x00000070:word32] = eax_117;
			Mem124[esp_118 + 0x00000000:word32] = 0x00415744;
			Mem128[esp_118 - 0x00000004:word32] = ebp_51 - 0x00000058 + Mem124[ebp_51 - 0x00000070:word32];
			fn004110C8();
			Mem133[ebp_51 - 0x00000070:word32] = Mem128[ebp_51 - 0x00000070:word32] + 0x00000003;
			Mem134[ebp_51 - 0x00000064:word32] = 0x00000000;
			while (Mem134[ebp_51 - 0x00000064:word32] < Mem134[ebp_51 + 0x00000010:word32])
			{
				if ((word32) Mem134[Mem134[ebp_51 + 0x00000008:word32] + Mem134[ebp_51 - 0x00000064:word32]:byte] >= 0x00000020 && (word32) Mem134[Mem134[ebp_51 + 0x00000008:word32] + Mem134[ebp_51 - 0x00000064:word32]:byte] <= 0x0000007E)
					Mem173[ebp_51 + 0xFFFFFEC8:word32] = (word32) Mem134[Mem134[ebp_51 + 0x00000008:word32] + Mem134[ebp_51 - 0x00000064:word32]:byte];
				else
					Mem163[ebp_51 + 0xFFFFFEC8:word32] = 0x0000002E;
				Mem154[ebp_51 - 0x00000058 + (Mem134[ebp_51 - 0x00000070:word32] + Mem134[ebp_51 - 0x00000064:word32]):byte] = Mem134[ebp_51 + 0xFFFFFEC8:byte];
				Mem158[ebp_51 - 0x00000064:word32] = Mem154[ebp_51 - 0x00000064:word32] + 0x00000001;
			}
			while (Mem134[ebp_51 - 0x00000064:word32] < 0x00000010)
			{
				Mem180[ebp_51 - 0x00000058 + (Mem134[ebp_51 - 0x00000070:word32] + Mem134[ebp_51 - 0x00000064:word32]):byte] = 0x20;
				Mem184[ebp_51 - 0x00000064:word32] = Mem180[ebp_51 - 0x00000064:word32] + 0x00000001;
			}
			Mem186[esp_118 + 0x00000000:word32] = 0x00415740;
			Mem192[esp_118 - 0x00000004:word32] = ebp_51 - 0x00000058 + Mem186[ebp_51 - 0x00000070:word32] + Mem186[ebp_51 - 0x00000064:word32];
			fn004110C8();
			Mem198[esp_118 + 0x00000000:word32] = ebp_51 - 0x00000058;
			Mem200[esp_118 - 0x00000004:word32] = 0x0041573C;
			MSVCR90D.dll!printf();
			word32 edx_203;
			word32 ebp_204;
			word32 eax_205 = fn00411168(es, ds, fs, gs, out edx_203, out ebp_204);
			Mem208[esp_118 - 0x00000004:word32] = edx_203;
			Mem211[esp_118 - 0x00000008:word32] = eax_205;
			word32 ebp_213 = fn00411096(ebp_204, 0x00411600, ebp_204, es, ds, fs, gs);
			word32 ebp_228;
			fn00411023(Mem211[esp_118 - 0x00000008:word32], Mem211[ebp_213 - 0x00000004:word32] ^ ebp_213, Mem211[esp_118 - 0x00000004:word32], Mem211[esp_118 + 0x00000008:word32], ebp_213, Mem211[esp_118 + 0x00000004:word32], Mem211[esp_118 + 0x00000000:word32], es, ds, fs, gs, out ebp_228);
			word32 edx_233;
			word32 ebp_234;
			fn00411168(es, ds, fs, gs, out edx_233, out ebp_234);
			return;
		}
		word32 esp_110 = esp_101 - 0x00000004;
		Mem111[esp_110 + 0x00000000:word32] = 0x00415748;
		Mem114[esp_110 - 0x00000004:word32] = ebp_51 - 0x00000058;
		fn004110AA();
		esp_101 = esp_110 + 0x00000004;
	}
}

void fn004110C8()
{
fn004110C8_entry:
l004110C8:
fn004110C8_exit:
}

word32 fn004110E1(word32 dwArg04, word32 dwArg08)
{
	word32 ecx_13 = dwArg04 + Mem0[dwArg04 + 0x0000003C:word32];
	word32 dwLoc0C_16 = 0x00000000;
	word32 dwLoc10_21 = ecx_13 + 0x00000018 + (word32) Mem0[ecx_13 + 0x00000014:word16];
	word32 eax_34;
	while (dwLoc0C_16 <u (word32) Mem0[ecx_13 + 0x00000006:word16])
	{
		if (dwArg08 >=u Mem0[dwLoc10_21 + 0x0000000C:word32] && dwArg08 <u Mem0[dwLoc10_21 + 0x0000000C:word32] + Mem0[dwLoc10_21 + 0x00000008:word32])
		{
			eax_34 = dwLoc10_21;
			goto l00413221;
		}
		dwLoc0C_16 = dwLoc0C_16 + 0x00000001;
		dwLoc10_21 = dwLoc10_21 + 0x00000028;
	}
	eax_34 = 0x00000000;
l00413221:
	return eax_34;
}

void fn004110F0(word32 edx, word32 ebx, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg08)
{
	word32 edi_3 = edi;
	word32 eax_138 = dwArg08;
	if (Mem0[0x00417010:word32] != 0xFFFFFFFF)
	{
		word32 ebx_106;
		if (Mem0[dwArg08 + 0x00000000:byte] != 0x00)
		{
			word32 ecx_107 = dwArg08;
			do
			{
				ecx_107 = ecx_238 + 0x00000001;
				word32 ecx_238 = ecx_107;
			} while (Mem0[ecx_238 + 0x00000000:byte] != 0x00);
			if (ecx_107 - (dwArg08 + 0x00000001) <=u 0xFFFFFC2D)
			{
				ebx_106 = fp + 0xFFFFFBF8;
				word32 ecx_123 = 0x00415B94;
				do
				{
					byte dl_129 = Mem0[ecx_123 + 0x00000000:byte];
					Mem130[fp + 0xFFFFFBF8 + ecx_123:byte] = dl_129;
					ecx_123 = ecx_123 + 0x00000001;
				} while (dl_129 != 0x00);
				do
				{
					eax_138 = eax_239 + 0x00000001;
					word32 eax_239 = eax_138;
				} while (Mem130[eax_239 + 0x00000000:byte] != 0x00);
				word32 eax_147 = eax_138 - dwArg08;
				word32 edi_149 = fp + 0xFFFFFBF7 + 0x00000001;
				do
				{
					edi_149 = edi_240 + 0x00000001;
					word32 edi_240 = edi_149;
				} while (Mem130[edi_240 + 0x00000000:byte] != 0x00);
				word32 ecx_158 = eax_147 >>u 0x00000002;
				word32 esi_161 = dwArg08;
				while (ecx_158 != 0x00000000)
				{
					Mem167[edi_149 + 0x00000000:word32] = Mem130[esi_161 + 0x00000000:word32];
					esi_161 = esi_161 + 0x00000004;
					edi_149 = edi_149 + 0x00000004;
					ecx_158 = ecx_158 - 0x00000001;
				}
				word32 ecx_173 = eax_147 & 0x00000003;
				word32 eax_177 = 0x00415BB0;
				while (ecx_173 != 0x00000000)
				{
					Mem183[edi_149 + 0x00000000:byte] = Mem130[esi_161 + 0x00000000:byte];
					esi_161 = esi_161 + 0x00000001;
					edi_149 = edi_149 + 0x00000001;
					ecx_173 = ecx_173 - 0x00000001;
				}
				do
				{
					eax_177 = eax_241 + 0x00000001;
					word32 eax_241 = eax_177;
				} while (Mem130[eax_241 + 0x00000000:byte] != 0x00);
				word32 esi_198 = 0x00415BB0;
				word32 edi_199 = fp + 0xFFFFFBF7 + 0x00000001;
				do
				{
					edi_199 = edi_242 + 0x00000001;
					word32 edi_242 = edi_199;
				} while (Mem130[edi_242 + 0x00000000:byte] != 0x00);
				word32 ecx_208 = eax_177 - 0x00415BB0 >>u 0x00000002;
				while (ecx_208 != 0x00000000)
				{
					Mem216[edi_199 + 0x00000000:word32] = Mem130[esi_198 + 0x00000000:word32];
					esi_198 = esi_198 + 0x00000004;
					edi_199 = edi_199 + 0x00000004;
					ecx_208 = ecx_208 - 0x00000001;
				}
				word32 ecx_222 = eax_177 - 0x00415BB0 & 0x00000003;
				while (ecx_222 != 0x00000000)
				{
					Mem231[edi_199 + 0x00000000:byte] = Mem130[esi_198 + 0x00000000:byte];
					esi_198 = esi_198 + 0x00000001;
					edi_199 = edi_199 + 0x00000001;
					ecx_222 = ecx_222 - 0x00000001;
				}
			}
			else
			{
l0041281F:
				ebx_106 = 0x00415D4C;
			}
		}
		else
			goto l0041281F;
		eax_138 = fn004123F0(fp - 0x00000004, es, ds, fs, gs, dwArg04, 0x00000002, ebx_106, out edx, out edi_3);
		esi = Mem0[fp - 0x00000414:word32];
		ebx = Mem0[fp - 0x00000410:word32];
	}
	word32 ebp_56;
	fn00411023(eax_138, Mem0[fp - 0x00000008:word32] ^ fp - 0x00000004, edx, ebx, fp - 0x00000004, esi, edi_3, es, ds, fs, gs, out ebp_56);
	return;
}

void fn004110FF()
{
fn004110FF_entry:
l004110FF:
l004133F4:
fn004110FF_exit:
}

word32 fn00411104(word32 dwArg04)
{
	word32 eax_23;
	if ((word32) Mem0[dwArg04 + 0x00000000:word16] != 0x00005A4D)
		eax_23 = 0x00000000;
	else
	{
		word32 ecx_36 = dwArg04 + Mem0[dwArg04 + 0x0000003C:word32];
		if (Mem0[ecx_36 + 0x00000000:word32] != 0x00004550)
			eax_23 = 0x00000000;
		else if ((word32) Mem0[ecx_36 + 0x00000018:word16] != 0x0000010B)
			eax_23 = 0x00000000;
		else
			eax_23 = 0x00000001;
	}
	return eax_23;
}

word32 fn0041111D(selector fs)
{
	return fn00412050(fs);
}

void fn00411136(selector es, selector ds, selector fs, selector gs)
{
	fn00411055();
	fn00411D70(fp - 0x00000004, es, ds, fs, gs);
	return;
}

word32 fn00411163(word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 ebpOut)
{
	word32 edi_17 = fp + 0xFFFFFEC4;
	word32 ecx_18 = 0x0000004E;
	while (ecx_18 != 0x00000000)
	{
		Mem22[edi_17 + 0x00000000:word32] = 0xCCCCCCCC;
		edi_17 = edi_17 + 0x00000004;
		ecx_18 = ecx_18 - 0x00000001;
	}
	word32 esp_124;
	word32 ebp_122;
	word32 eax_125;
	word32 edx_121;
	if (fn00411860(es, ds, fs, gs, dwArg04, fp - 0x0000006C) != 0x00000000)
	{
		Mem92[fp - 0x0000014C:word32] = Mem0[fp + 0x00000004:word32];
		perror(Mem92[fp - 0x0000014C:(ptr char)]);
		fn00411168(es, ds, fs, gs, out edx_121, out ebp_122);
		esp_124 = fp + 0xFFFFFEB4;
		eax_125 = 0x00000001;
	}
	else
	{
		Mem102[fp - 0x0000014C:word32] = 0x0041575C;
		Mem105[fp - 0x00000150:word32] = Mem102[fp + 0x00000004:word32];
		MSVCR90D.dll!fopen();
		word32 edx_108;
		word32 ebp_109;
		word32 eax_110 = fn00411168(es, ds, fs, gs, out edx_108, out ebp_109);
		Mem112[ebp_109 - 0x00000030:word32] = eax_110;
		word32 esp_111 = fp + 0xFFFFFEB4;
		if (Mem112[ebp_109 - 0x00000030:word32] == 0x00000000)
		{
			Mem118[fp + 0xFFFFFEB0:word32] = Mem112[ebp_109 + 0x00000008:word32];
			perror(Mem118[fp + 0xFFFFFEB0:(ptr char)]);
			fn00411168(es, ds, fs, gs, out edx_121, out ebp_122);
			esp_124 = fp + 0xFFFFFEB0;
			eax_125 = 0x00000001;
		}
		else
		{
			Mem126[ebp_109 - 0x00000024:word32] = 0x00000000;
			while (Mem126[ebp_109 - 0x00000024:word32] <u Mem126[ebp_109 - 0x00000054:word32])
			{
				word32 esp_160 = esp_111 - 0x00000004;
				Mem161[esp_160 + 0x00000000:word32] = Mem126[ebp_109 - 0x00000030:word32];
				Mem163[esp_160 - 0x00000004:word32] = 0x00000010;
				Mem165[esp_160 - 0x00000008:word32] = 0x00000001;
				Mem168[esp_160 - 0x0000000C:word32] = ebp_109 - 0x00000018;
				MSVCR90D.dll!fread();
				word32 edx_171;
				word32 eax_173 = fn00411168(es, ds, fs, gs, out edx_171, out ebp_109);
				Mem175[ebp_109 - 0x00000074:word32] = eax_173;
				esp_111 = esp_160;
				if (Mem175[ebp_109 - 0x00000074:word32] == 0x00000000)
					goto l00411794;
				Mem180[esp_160 - 0x00000004:word32] = Mem175[ebp_109 - 0x00000074:word32];
				Mem183[esp_160 - 0x00000008:word32] = Mem180[ebp_109 - 0x00000024:word32];
				Mem186[esp_160 - 0x0000000C:word32] = ebp_109 - 0x00000018;
				fn004110C3(es, ds, fs, gs, dwArg04);
				Mem191[ebp_109 - 0x00000024:word32] = Mem186[ebp_109 - 0x00000024:word32] + Mem186[ebp_109 - 0x00000074:word32];
				esp_111 = esp_160;
			}
l00411794:
			word32 esp_147 = esp_111 - 0x00000004;
			Mem148[esp_147 + 0x00000000:word32] = Mem126[ebp_109 - 0x00000030:word32];
			MSVCR90D.dll!fclose();
			fn00411168(es, ds, fs, gs, out edx_121, out ebp_122);
			esp_124 = esp_147;
			eax_125 = 0x00000000;
		}
	}
	word32 esp_56 = esp_124 - 0x00000004;
	Mem57[esp_56 + 0x00000000:word32] = edx_121;
	Mem60[esp_56 - 0x00000004:word32] = eax_125;
	word32 ebp_62 = fn00411096(ebp_122, 0x004117DC, ebp_122, es, ds, fs, gs);
	word32 ebp_77;
	fn00411023(Mem60[esp_56 - 0x00000004:word32], Mem60[ebp_62 - 0x00000004:word32] ^ ebp_62, Mem60[esp_56 + 0x00000000:word32], Mem60[esp_56 + 0x0000000C:word32], ebp_62, Mem60[esp_56 + 0x00000008:word32], Mem60[esp_56 + 0x00000004:word32], es, ds, fs, gs, out ebp_77);
	word32 edx_82;
	word32 ebp_83;
	word32 eax_84 = fn00411168(es, ds, fs, gs, out edx_82, out ebp_83);
	word32 ebp_86;
	*ebpOut = Mem60[ebp_83 + 0x00000000:word32];
	return eax_84;
}

word32 fn00411168(selector es, selector ds, selector fs, selector gs, ptr32 edxOut, ptr32 ebpOut)
{
	*edxOut = edx;
	*ebpOut = ebp;
	fn00411990(es, ds, fs, gs, dwLoc04);
	return eax;
}

word32 fn0041116D(word32 ebp, selector es, selector ds, selector fs, selector gs)
{
	word32 ebp_29 = fp - 0x00000004;
	word32 esp_14 = fp - 0x000000E8;
	word32 edi_17 = fp + 0xFFFFFF24;
	word32 ecx_18 = 0x00000036;
	while (ecx_18 != 0x00000000)
	{
		Mem22[edi_17 + 0x00000000:word32] = 0xCCCCCCCC;
		edi_17 = edi_17 + 0x00000004;
		ecx_18 = ecx_18 - 0x00000001;
	}
	while (Mem0[ebp_29 - 0x00000008:word32] < Mem0[ebp_29 + 0x00000008:word32])
	{
		word32 esp_39 = esp_14 - 0x00000004;
		Mem40[esp_39 + 0x00000000:word32] = Mem0[ebp_29 + 0x0000000C:word32][Mem0[ebp_29 - 0x00000008:word32] * 0x00000004];
		word32 eax_47 = fn00411163(ebp_29, es, ds, fs, gs, dwArg00, out ebp_29);
		Mem51[ebp_29 - 0x00000014:word32] = eax_47 + Mem40[ebp_29 - 0x00000014:word32];
		esp_14 = esp_39 + 0x00000004;
		Mem55[ebp_29 - 0x00000008:word32] = Mem51[ebp_29 - 0x00000008:word32] + 0x00000001;
	}
	word32 edx_65;
	word32 ebp_66;
	return fn00411168(es, ds, fs, gs, out edx_65, out ebp_66);
}

void fn00411190(selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg08, word32 dwArg10, word32 dwArg14, word32 dwArg18)
{
	Mem18[dwArg10 + 0x00000000:word32] = 0x00000000;
	Mem29[dwArg08 + 0x00000000:word16] = 0x0000;
	word32 ebp_202 = fp - 0x00000004;
	if (VirtualQuery(dwArg04 - 0x00000001, fp - 0x00000048, 0x0000001C) == 0x00000000)
	{
l0041342F:
		return;
	}
	else
	{
		Mem87[fp - 0x00000050:word32] = dwArg18;
		if (GetModuleFileNameW(dwLoc44, dwArg14, 0x0000001C) != 0x00000000)
		{
			word32 edx_126 = dwLoc44;
			if (Mem87[dwLoc44 + 0x00000000:word16] == 0x5A4D)
			{
				word32 eax_102 = Mem87[dwLoc44 + 0x0000003C:word32];
				if (eax_102 > 0x00000000)
				{
					word32 eax_106 = eax_102 + dwLoc44;
					if (Mem87[eax_106 + 0x00000000:word32] == 0x00004550)
					{
						word32 ecx_110 = (word32) Mem87[eax_106 + 0x00000006:word16];
						word32 eax_117 = (word32) Mem87[eax_106 + 0x00000014:word16] + 0x00000018 + eax_106;
						word32 esi_119 = dwArg04 - 0x00000001 - dwLoc44;
						word32 edi_120 = 0x00000000;
						word32 ebx_121 = 0x00000000;
						if (true)
						{
							word32 eax_450 = eax_117 + 0x0000000C;
							do
							{
								edx_126 = Mem87[eax_450 + 0x00000000:word32];
								if (esi_119 >=u edx_126)
								{
									edi_120 = esi_119 - edx_126;
									if (esi_119 <u Mem87[eax_450 - 0x00000004:word32])
										break;
								}
l00413494:
								ebx_121 = ebx_121 + 0x00000001;
								eax_450 = eax_450 + 0x00000028;
							} while (ebx_121 <u ecx_110);
						}
l0041349C:
						if (ebx_121 != ecx_110)
						{
							word32 eax_160;
							word32 ebx_157 = ebx_121 + 0x00000001;
							if (Mem87[0x00417558:byte] != 0x00)
							{
								eax_160 = Mem87[0x00417554:word32];
								goto l004134CF;
							}
							else if (Mem87[0x00417554:word32] == 0x00000000)
							{
								eax_160 = fn00413770(edx_126, ebx_157, esi_119, edi_120, es, ds, fs, gs);
								Mem443[0x00417554:word32] = eax_160;
								if (eax_160 != 0x00000000)
								{
									Mem447[0x00417558:byte] = 0x01;
l004134CF:
									Mem164[fp - 0x00000058:word32] = 0x00416158;
									Mem166[fp - 0x0000005C:word32] = eax_160;
									word32 eax_167 = GetProcAddress(Mem166[fp - 0x0000005C:HMODULE], Mem166[fp - 88:LPCSTR]);
									word32 esi_170 = 0x00000000;
									if (eax_167 != 0x00000000)
									{
										Mem175[fp - 0x00000058:word32] = fp - 0x00000014;
										word32 edx_176 = Mem175[fp + 0x00000014:word32];
										Mem178[fp - 0x0000005C:word32] = 0x00000000;
										Mem180[fp - 0x00000060:word32] = 0x00000000;
										Mem183[fp - 0x00000064:word32] = fp - 0x0000002C;
										Mem185[fp - 0x00000068:word32] = 0x00000000;
										Mem187[fp - 0x0000006C:word32] = 0x00000000;
										Mem189[fp - 0x00000070:word32] = 0x00000000;
										Mem191[fp - 0x00000074:word32] = edx_176;
										eax_167();
										if (eax_167 == 0x00000000)
										{
l004134FB:
											return;
										}
										else
										{
											word32 ecx_196 = Mem191[fp - 0x00000014:word32];
											word32 eax_197 = Mem191[ecx_196 + 0x00000000:word32];
											word32 edx_198 = Mem191[eax_197 + 0x00000000:word32];
											Mem199[fp - 0x00000020:word32] = 0x00000000;
											edx_198();
											if (eax_197 == 0x0131A5B5)
											{
												word32 ecx_215 = Mem199[fp - 0x00000014:word32];
												word32 eax_217 = Mem199[Mem199[ecx_215 + 0x00000000:word32] + 0x0000001C:word32];
												Mem220[fp - 0x00000058:word32] = fp - 0x0000001C;
												Mem222[fp - 0x0000005C:word32] = 0x00416154;
												Mem224[fp - 0x00000060:word32] = 0x00000000;
												eax_217();
												if (eax_217 != 0x00000000)
												{
													word32 ecx_228 = Mem224[fp - 0x0000001C:word32];
													word32 edx_230 = Mem224[Mem224[ecx_228 + 0x00000000:word32] + 0x00000020:word32];
													Mem232[fp - 0x00000064:word32] = 0x00000000;
													Mem234[fp - 0x00000068:word32] = 0x00000000;
													Mem236[fp - 0x0000006C:word32] = 0x00000000;
													Mem239[fp - 0x00000070:word32] = fp - 0x00000010;
													Mem241[fp - 0x00000074:word32] = edi_120;
													Mem243[fp - 0x00000078:word32] = ebx_157;
													edx_230();
													if (fp != 0x00000010)
													{
														word32 ecx_251 = Mem243[fp - 0x00000010:word32];
														Mem252[fp - 0x00000008:word32] = 0x00000000;
														word32 eax_254 = Mem252[Mem252[ecx_251 + 0x00000000:word32] + 0x00000068:word32];
														Mem258[fp - 0x0000007C:word32] = fp - 0x00000008;
														byte al_255 = (byte) eax_254;
														word32 esp_257 = fp - 0x0000007C;
														eax_254();
														if (al_255 != 0x00)
														{
															word32 ecx_266 = Mem258[fp - 0x00000008:word32];
															if (ecx_266 != 0x00000000)
															{
																word32 esp_296;
																word32 esi_294;
																word32 edx_270 = Mem258[ecx_266 + 0x00000000:word32];
																word32 eax_271 = Mem258[edx_270 + 0x00000008:word32];
																eax_271();
																esi_294 = esi_170;
																esp_296 = esp_257;
																esp_296 = esp_257;
																if (eax_271 != 0x00000000)
																{
l00413585:
																	do
																	{
																		word32 ecx_308 = Mem258[ebp_202 - 0x00000004:word32];
																		word32 edx_310 = Mem258[Mem258[ecx_308 + 0x00000000:word32] + 0x0000000C:word32];
																		word32 esp_311 = esp_296 - 0x00000004;
																		Mem312[esp_311 + 0x00000000:word32] = 0x00000000;
																		Mem315[esp_311 - 0x00000004:word32] = ebp_202 - 0x00000008;
																		Mem318[esp_311 - 0x00000008:word32] = ebp_202 - 0x00000020;
																		Mem321[esp_311 - 0x0000000C:word32] = ebp_202 + 0x00000008;
																		word32 eax_322 = ebp_202 - 0x00000014;
																		Mem325[esp_311 - 0x00000010:word32] = eax_322;
																		Mem327[esp_311 - 0x00000014:word32] = 0x00000000;
																		byte al_323 = (byte) eax_322;
																		esp_296 = esp_311 - 0x00000014;
																		edx_310();
																		if (al_323 == 0x00)
																			goto l0041368F;
																		if ((word32) Mem327[ebp_202 + 0x00000008:word16] == ebx_157)
																		{
																			word32 eax_340 = Mem327[ebp_202 - 0x00000014:word32];
																			if (eax_340 <=u edi_120 && edi_120 <u eax_340 + Mem327[ebp_202 - 0x00000020:word32])
																			{
																				word32 eax_348 = Mem327[ebp_202 - 0x00000008:word32];
																				if (eax_348 != 0x00000000 && eax_348 <u 0x1FFFFFFF)
																				{
																					Mem357[esp_311 - 0x00000018:word32] = eax_348 * 0x00000008;
																					Mem359[esp_311 - 0x0000001C:word32] = 0x00000000;
																					Mem362[esp_311 - 0x00000020:word32] = GetProcessHeap();
																					word32 eax_363 = HeapAlloc(Mem362[esp_311 - 0x00000020:HANDLE], Mem362[esp_311 - 28:DWORD], Mem362[esp_311 - 24:SIZE_T]);
																					esi_294 = eax_363;
																					if (eax_363 != 0x00000000)
																					{
																						word32 ecx_369 = Mem362[ebp_202 - 0x00000004:word32];
																						word32 edx_371 = Mem362[Mem362[ecx_369 + 0x00000000:word32] + 0x0000000C:word32];
																						Mem373[esp_311 - 0x00000018:word32] = eax_363;
																						Mem376[esp_311 - 0x0000001C:word32] = ebp_202 - 0x00000008;
																						Mem378[esp_311 - 0x00000020:word32] = 0x00000000;
																						Mem380[esp_311 - 0x00000024:word32] = 0x00000000;
																						Mem382[esp_311 - 0x00000028:word32] = 0x00000000;
																						word32 eax_383 = ebp_202 - 0x00000024;
																						Mem386[esp_311 - 0x0000002C:word32] = eax_383;
																						byte al_384 = (byte) eax_383;
																						esp_296 = esp_311 - 0x0000002C;
																						edx_371();
																						if (al_384 != 0x00)
																						{
																							word32 edi_390 = edi_120 - Mem386[ebp_202 - 0x00000014:word32];
																							if (edi_390 >=u Mem386[eax_363 + 0x00000000:word32])
																							{
																								word32 ecx_393 = Mem386[ebp_202 - 0x00000008:word32];
																								word32 eax_395 = 0x00000001;
																								if (ecx_393 >u 0x00000001)
																									do
																									{
																										if (edi_390 <u eax_363[eax_395 * 0x00000008])
																											break;
																										eax_395 = eax_395 + 0x00000001;
																									} while (eax_395 <u ecx_393);
																								word32 eax_400 = (eax_363 - 0x00000004)[eax_395 * 0x00000008];
																								word32 ecx_401 = Mem386[ebp_202 + 0x00000014:word32];
																								Mem403[esp_311 - 0x00000030:word32] = 0x00000000;
																								Mem407[ecx_401 + 0x00000000:word32] = eax_400 & 0x00FFFFFF;
																								word32 ecx_408 = Mem407[ebp_202 - 0x0000000C:word32];
																								word32 edx_410 = Mem407[Mem407[ecx_408 + 0x00000000:word32] + 0x00000070:word32];
																								Mem412[esp_311 - 0x00000034:word32] = 0x00000000;
																								Mem414[esp_311 - 0x00000038:word32] = 0x00000000;
																								Mem417[esp_311 - 0x0000003C:word32] = ebp_202 + 0x00000010;
																								Mem420[esp_311 - 0x00000040:word32] = Mem417[ebp_202 + 0x0000000C:word32];
																								word32 eax_421 = Mem420[ebp_202 - 0x00000024:word32];
																								Mem424[esp_311 - 0x00000044:word32] = eax_421;
																								byte al_422 = (byte) eax_421;
																								esp_296 = esp_311 - 0x00000044;
																								edx_410();
																								if (al_422 != 0x00)
																									Mem428[ebp_202 - 0x0000001C:word32] = 0x00000001;
																							}
																						}
																					}
																				}
																			}
																		}
l004135C3:
																		word32 ecx_334 = Mem327[ebp_202 - 0x00000004:word32];
																		word32 edx_335 = Mem327[ecx_334 + 0x00000000:word32];
																		word32 eax_336 = Mem327[edx_335 + 0x00000008:word32];
																		eax_336();
																	} while (eax_336 != 0x00000000);
																	esi_294 = esi_170;
l0041367F:
																	word32 esp_297 = esp_296 - 0x00000004;
																	Mem298[esp_297 + 0x00000000:word32] = esi_294;
																	Mem300[esp_297 - 0x00000004:word32] = 0x00000000;
																	Mem303[esp_297 - 0x00000008:word32] = GetProcessHeap();
																	HeapFree(Mem303[esp_297 - 0x00000008:HANDLE], Mem303[esp_297 - 4:DWORD], Mem303[esp_297 + 0x00000000:LPVOID]);
																}
																else
																	goto l0041367F;
l0041368F:
																word32 ecx_276 = Mem258[ebp_202 - 0x00000004:word32];
																word32 eax_277 = Mem258[ecx_276 + 0x00000000:word32];
																word32 edx_278 = Mem258[eax_277 + 0x00000000:word32];
																edx_278();
															}
														}
														word32 ecx_263 = Mem258[ebp_202 - 0x0000000C:word32];
														word32 eax_264 = Mem258[ecx_263 + 0x00000000:word32];
														word32 edx_265 = Mem258[eax_264 + 0x00000040:word32];
														edx_265();
													}
													word32 ecx_248 = Mem243[ebp_202 - 0x00000018:word32];
													word32 eax_249 = Mem243[ecx_248 + 0x00000000:word32];
													word32 edx_250 = Mem243[eax_249 + 0x00000038:word32];
													edx_250();
												}
											}
											word32 ecx_203 = Mem199[ebp_202 - 0x00000010:word32];
											word32 eax_204 = Mem199[ecx_203 + 0x00000000:word32];
											word32 edx_205 = Mem199[eax_204 + 0x00000028:word32];
											edx_205();
											return;
										}
									}
									else
										goto l004134FB;
								}
								else
									goto l004134FB;
							}
							else
								goto l004134FB;
						}
						else
							goto l004134FB;
					}
					else
						goto l0041342F;
				}
				else
					goto l0041342F;
			}
			else
				goto l0041342F;
		}
		else
			goto l0041342F;
	}
}

word32 fn0041119F(selector fs, word32 dwArg04)
{
	word32 eax_101;
	word32 eax_16 = Mem0[fs:0x00000000:word32];
	Mem38[fs:0x00000000:word32] = fp - 0x00000014;
	if (fn00411104(0x00400000) == 0x00000000)
	{
		Mem74[fp - 0x00000008:word32] = 0xFFFFFFFE;
		eax_101 = 0x00000000;
	}
	else
	{
		Mem90[fp + 0xFFFFFFB0:word32] = dwArg04 - 0x00400000;
		word32 eax_94 = fn004110E1(0x00400000, 0x00400000);
		if (eax_94 == 0x00000000)
		{
			Mem100[fp - 0x00000008:word32] = 0xFFFFFFFE;
			eax_101 = 0x00000000;
		}
		else
		{
			word32 edx_108 = 0x00000000 - (-(Mem90[eax_94 + 0x00000024:word32] & 0x80000000) == 0x00000000);
			Mem112[fp - 0x00000008:word32] = 0xFFFFFFFE;
			eax_101 = edx_108 + 0x00000001;
		}
	}
	Mem62[fs:0x00000000:word32] = eax_16;
	return eax_101;
}

void fn004111A9()
{
fn004111A9_entry:
l004111A9:
l00412FF0:
fn004111A9_exit:
}

void fn004111E0(selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg08)
{
	if (dwArg08 <=u 0x00000004)
	{
		word32 edx_26 = 0x00415B64[dwArg08 * 0x00000004];
		if (0x00417008[dwArg08 * 0x00000004] != 0xFFFFFFFF)
		{
			word32 edx_58;
			word32 edi_59;
			fn004123F0(fp - 0x00000004, es, ds, fs, gs, dwArg04, dwArg08, edx_26, out edx_58, out edi_59);
		}
		return;
	}
	else
	{
		word32 edx_75;
		word32 edi_76;
		fn004123F0(fp - 0x00000004, es, ds, fs, gs, dwArg04, 0x00000005, 0x00415844, out edx_75, out edi_76);
		return;
	}
}

void fn004111FE()
{
fn004111FE_entry:
l004111FE:
l004133B2:
fn004111FE_exit:
}

word32 fn00411203()
{
	return fn00412C90();
}

word32 fn00411860(selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg08)
{
	word32 edi_17 = fp + 0xFFFFFF3C;
	word32 ecx_18 = 0x00000030;
	while (ecx_18 != 0x00000000)
	{
		Mem22[edi_17 + 0x00000000:word32] = 0xCCCCCCCC;
		edi_17 = edi_17 + 0x00000004;
		ecx_18 = ecx_18 - 0x00000001;
	}
	_stat64i32();
	word32 edx_41;
	word32 ebp_42;
	fn00411168(es, ds, fs, gs, out edx_41, out ebp_42);
	word32 edx_54;
	word32 ebp_55;
	return fn00411168(es, ds, fs, gs, out edx_54, out ebp_55);
}

word32 fn00411970(word32 eax, word32 ecx, word32 edx, word32 ebx, word32 ebp, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs, word32 dwArg00, ptr32 ebpOut)
{
	*ebpOut = ebp;
	if (ecx == Mem0[0x00417000:word32] && ecx != 0x00000000)
		return eax;
	else
	{
		Mem31[0x00417278:word32] = eax;
		Mem32[0x00417274:word32] = ecx;
		Mem34[0x00417270:word32] = edx;
		Mem36[0x0041726C:word32] = ebx;
		Mem38[0x00417268:word32] = esi;
		Mem39[0x00417264:word32] = edi;
		Mem41[0x00417290:word16] = ss;
		Mem43[0x00417284:word16] = cs;
		Mem45[0x00417260:word16] = ds;
		Mem47[0x0041725C:word16] = es;
		Mem49[0x00417258:word16] = fs;
		Mem51[0x00417254:word16] = gs;
		Mem54[0x00417288:word32] = cond(fp - 0x0000032C);
		Mem57[0x0041727C:word32] = ebp;
		Mem60[0x00417280:word32] = dwArg00;
		Mem62[0x0041728C:word32] = fp + 0x00000004;
		Mem65[0x004171C8:word32] = 0x00010001;
		Mem67[0x0041717C:word32] = Mem65[0x00417280:word32];
		Mem68[0x00417170:word32] = 0xC0000409;
		Mem69[0x00417174:word32] = 0x00000001;
		Mem75[0x004171C0:word32] = IsDebuggerPresent();
		fn004110FF();
		SetUnhandledExceptionFilter(0x00000000);
		UnhandledExceptionFilter(0x00415838);
		word32 esp_102 = fp - 0x0000032C;
		if (Mem75[0x004171C0:word32] == 0x00000000)
		{
			Mem101[fp - 0x00000330:word32] = 0x00000001;
			fn004110FF();
			esp_102 = fp - 0x0000032C;
		}
		word32 esp_91 = esp_102 - 0x00000004;
		Mem92[esp_91 + 0x00000000:word32] = 0xC0000409;
		Mem95[esp_91 - 0x00000004:word32] = GetCurrentProcess();
		word32 eax_96 = TerminateProcess(Mem95[esp_91 - 0x00000004:HANDLE], Mem95[esp_91 + 0x00000000:UINT]);
		word32 ebp_98;
		*ebpOut = Mem95[fp - 0x00000004:word32];
		return eax_96;
	}
}

void fn00411990(selector es, selector ds, selector fs, selector gs, word32 dwArg00)
{
	if (!Z)
		return;
	else
	{
		fn004111E0(es, ds, fs, gs, dwArg00, 0x00000000);
		return;
	}
}

void fn00411D70(word32 ebp, selector es, selector ds, selector fs, selector gs)
{
	Mem38[fs:0x00000000:word32] = fp - 0x00000014;
	word32 ebp_113 = fp - 0x00000004;
	word32 eax_44 = Mem38[fn0041111D(fs) + 0x00000004:word32];
	Mem50[fp + 0xFFFFFFB8:word32] = 0x00000000;
	Mem55[fp + 0xFFFFFFB0:word32] = 0x00417570;
	word32 eax_56 = InterlockedCompareExchange(0x00417570, eax_44, 0x000003E8);
	word32 esp_114 = fp + 0xFFFFFFBC;
	while (eax_56 != 0x00000000)
	{
		if (eax_56 == eax_44)
		{
			Mem233[fp - 0x00000020:word32] = 0x00000001;
			goto l00411DFD;
		}
		Mem235[fp + 0xFFFFFFB8:word32] = 0x000003E8;
		Sleep(0x00000000);
		Mem50[fp + 0xFFFFFFB8:word32] = 0x00000000;
		Mem55[fp + 0xFFFFFFB0:word32] = 0x00417570;
		eax_56 = InterlockedCompareExchange(0x00417570, eax_44, 0x000003E8);
		esp_114 = fp + 0xFFFFFFBC;
	}
l00411DFD:
	if (Mem55[0x00417560:word32] == 0x00000001)
	{
		Mem212[fp + 0xFFFFFFB8:word32] = 0x0000001F;
		fn004111A9();
		esp_114 = fp + 0xFFFFFFBC;
l00411E5D:
		if (Mem55[0x00417560:word32] == 0x00000001)
		{
			word32 esp_204 = esp_114 - 0x00000004;
			Mem205[esp_204 + 0x00000000:word32] = 0x00415208;
			Mem207[esp_204 - 0x00000004:word32] = 0x00415000;
			fn004110B9();
			Mem210[0x00417560:word32] = 0x00000002;
			esp_114 = esp_204 + 0x00000004;
		}
		if (Mem55[0x00417560:word32] != 0x00000002)
		{
			word32 esp_190 = esp_114 - 0x00000004;
			Mem191[esp_190 + 0x00000000:word32] = 0x004157D8;
			Mem193[esp_190 - 0x00000004:word32] = 0x00000000;
			Mem195[esp_190 - 0x00000008:word32] = 0x000001F4;
			Mem197[esp_190 - 0x0000000C:word32] = 0x00415760;
			Mem199[esp_190 - 0x00000010:word32] = 0x00000002;
			_CrtDbgReportW();
			esp_114 = esp_190;
			if (eax_56 == 0x00000001)
				int3();
		}
		if (true)
		{
			word32 esp_184 = esp_114 - 0x00000004;
			Mem185[esp_184 + 0x00000000:word32] = 0x00000000;
			Mem187[esp_184 - 0x00000004:word32] = 0x00417570;
			InterlockedExchange(Mem187[esp_184 - 0x00000004:(ptr LONG)], Mem187[esp_184 + 0x00000000:LONG]);
			esp_114 = esp_184 + 0x00000004;
		}
		if (Mem55[0x00417594:word32] != 0x00000000)
		{
			word32 esp_170 = esp_114 - 0x00000004;
			Mem171[esp_170 + 0x00000000:word32] = 0x00417594;
			word32 eax_173 = fn0041119F(fs, dwArg00);
			esp_114 = esp_170 + 0x00000004;
			if (eax_173 != 0x00000000)
			{
				Mem179[esp_170 + 0x00000000:word32] = 0x00000000;
				Mem181[esp_170 - 0x00000004:word32] = 0x00000002;
				Mem183[esp_170 - 0x00000008:word32] = 0x00000000;
				esp_114 = esp_170 - 0x00000008;
				Mem183[0x00417594:word32]();
			}
		}
		word32 esp_122 = esp_114 - 0x00000004;
		Mem123[esp_122 + 0x00000000:word32] = 0x00000001;
		_CrtSetCheckCount();
		Mem129[__initenv:word32] = Mem123[0x00417148:word32];
		Mem132[esp_122 - 0x00000004:word32] = Mem129[0x00417148:word32];
		Mem135[esp_122 - 0x00000008:word32] = Mem132[0x0041714C:word32];
		Mem138[esp_122 - 0x0000000C:word32] = Mem135[0x00417144:word32];
		Mem141[0x0041715C:word32] = fn0041116D(ebp_113, es, ds, fs, gs);
		if (Mem141[0x00417150:word32] == 0x00000000)
		{
			Mem169[esp_122 - 0x00000004:word32] = Mem141[0x0041715C:word32];
			exit(Mem169[esp_122 - 0x00000004:int32]);
		}
		if (Mem141[0x00417160:word32] == 0x00000000)
			_cexit();
		Mem164[ebp_113 - 0x00000004:word32] = 0xFFFFFFFE;
	}
	else if (Mem55[0x00417560:word32] == 0x00000000)
	{
		Mem217[0x00417560:word32] = 0x00000001;
		Mem219[fp + 0xFFFFFFB8:word32] = 0x00415618;
		fn004111FE();
		esp_114 = fp + 0xFFFFFFBC;
		if (eax_56 != 0x00000000)
		{
			Mem226[fp - 0x00000030:word32] = 0x000000FF;
			Mem227[fp - 0x00000008:word32] = 0xFFFFFFFE;
		}
		else
			goto l00411E5D;
	}
	else
	{
		Mem229[0x00417160:word32] = 0x00000001;
		goto l00411E5D;
	}
	Mem78[fs:0x00000000:word32] = Mem55[ebp_113 - 0x00000010:word32];
	return;
}

word32 fn00412050(selector fs)
{
	return Mem0[fs:0x00000018:word32];
}

word32 fn004122D0(selector fs, word32 dwArg04, ptr32 edxOut)
{
	word32 eax_16 = Mem0[fs:0x00000000:word32];
	Mem36[fs:0x00000000:word32] = fp - 0x00000014;
	word32 eax_38 = fp - 0x00000014 ^ fp - 0x00000014;
	RaiseException(0x406D1388, eax_38, 0x00000006, fp - 0x00000038);
	byte al_39 = (byte) eax_38;
	word32 edx_47;
	*edxOut = fp - 0x0000001D;
	Mem64[fs:0x00000000:word32] = eax_16;
	return (word32) al_39;
}

word32 fn004123F0(word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg0C, word32 dwArg10, ptr32 edxOut, ptr32 ediOut)
{
	word32 ebp_127 = fp - 0x00000004;
	word32 eax_31 = fn0041103C();
	word32 esp_328 = fp + 0xFFFFF1B0;
	if (eax_31 == 0x00000000)
	{
		Mem330[fp + 0xFFFFF1C4:word32] = fn00411203();
		esp_328 = fp + 0xFFFFF1AC;
	}
	word32 dwLoc0E38_302;
	word32 esp_42 = esp_328 - 0x00000004;
	Mem43[esp_42 + 0x00000000:word32] = 0x00000000;
	Mem45[esp_42 - 0x00000004:word32] = 0x00000000;
	Mem47[esp_42 - 0x00000008:word32] = 0xFFFFFFFF;
	Mem49[esp_42 - 0x0000000C:word32] = dwArg10;
	Mem51[esp_42 - 0x00000010:word32] = 0x00000000;
	Mem53[esp_42 - 0x00000014:word32] = 0x0000FDE9;
	word32 eax_54 = MultiByteToWideChar(Mem53[esp_42 - 0x00000014:UINT], Mem53[esp_42 - 16:DWORD], Mem53[esp_42 - 12:LPCSTR], Mem53[esp_42 - 8:int32], Mem53[esp_42 - 4:LPWSTR], Mem53[esp_42 + 0x00000000:int32]);
	word32 esp_301 = esp_42 + 0x00000004;
	if (eax_54 <u 0x00000200)
	{
		Mem305[esp_42 + 0x00000000:word32] = eax_54;
		Mem308[esp_42 - 0x00000004:word32] = fp + 0xFFFFF1D0;
		Mem310[esp_42 - 0x00000008:word32] = 0xFFFFFFFF;
		Mem312[esp_42 - 0x0000000C:word32] = dwArg10;
		Mem314[esp_42 - 0x00000010:word32] = 0x00000000;
		Mem316[esp_42 - 0x00000014:word32] = 0x0000FDE9;
		esp_301 = esp_42 + 0x00000004;
		if (MultiByteToWideChar(Mem316[esp_42 - 0x00000014:UINT], Mem316[esp_42 - 16:DWORD], Mem316[esp_42 - 12:LPCSTR], Mem316[esp_42 - 8:int32], Mem316[esp_42 - 4:LPWSTR], Mem316[esp_42 + 0x00000000:int32]) != 0x00000000)
			dwLoc0E38_302 = fp + 0xFFFFF1D0;
		else
		{
l00412483:
			dwLoc0E38_302 = 0x00415CC8;
		}
	}
	else
		goto l00412483;
	word32 eax_106;
	byte al_107;
	word32 esp_62 = esp_301 - 0x00000004;
	Mem63[esp_62 + 0x00000000:word32] = 0x00001002;
	word32 edx_103;
	word32 eax_67 = fn004122D0(fs, dwArg00, out edx_103);
	word32 esp_108 = esp_62 + 0x00000004;
	if (eax_67 != 0x00000000)
	{
		word32 eax_274 = 0x00415B7C[dwArg0C * 0x00000004];
		Mem276[esp_62 + 0x00000000:word32] = dwLoc0E38_302;
		Mem278[esp_62 - 0x00000004:word32] = dwArg04;
		Mem280[esp_62 - 0x00000008:word32] = eax_274;
		Mem282[esp_62 - 0x0000000C:word32] = dwArg0C;
		eax_106 = fn00412680(fs, dwArg00, dwArg04, dwArg08, dwArg0C, out edx_103);
		esp_108 = esp_62 + 0x00000004;
		if (eax_106 == 0x00000000)
		{
			al_107 = 0x00;
			eax_106 = DPB(eax_106, 0x00, 0, 8);
l004124C8:
			if (true && eax_31 == 0x00000000)
			{
l004125E0:
				DebugBreak();
			}
			else if (al_107 != 0x00)
			{
				eax_106 = IsDebuggerPresent();
				if (eax_106 == 0x00000000)
				{
l004124F1:
					word32 esp_172;
					word32 esp_133 = esp_108 - 0x00000004;
					Mem134[esp_133 + 0x00000000:word32] = 0x00000104;
					Mem137[esp_133 - 0x00000004:word32] = fp + 0xFFFFFBE8;
					Mem140[esp_133 - 0x00000008:word32] = fp + 0xFFFFF1CC;
					Mem142[esp_133 - 0x0000000C:word32] = 0x00000104;
					Mem145[esp_133 - 0x00000010:word32] = fp + 0xFFFFFDF0;
					Mem149[esp_133 - 0x00000014:word32] = dwArg04 + 0xFFFFFFFB;
					fn00411190(es, ds, fs, gs, dwArg00, dwArg04, dwArg0C, dwArg10, dwArg14);
					if (eax_31 != 0x00000000)
					{
						eax_106 = Mem149[fp + 0xFFFFF1CC:word32];
						Mem180[esp_133 + 0x00000000:word32] = Mem149[fp + 0xFFFFF1C8:word32];
						Mem182[esp_133 - 0x00000004:word32] = dwArg0C;
						Mem184[esp_133 - 0x00000008:word32] = 0x00415C78;
						Mem187[esp_133 - 0x0000000C:word32] = fp + 0xFFFFFBE8;
						edx_103 = Mem187[fp + 0x00000008:word32];
						*edxOut = edx_103;
						Mem190[esp_133 - 0x00000010:word32] = eax_106;
						Mem193[esp_133 - 0x00000014:word32] = fp + 0xFFFFFDF0;
						Mem195[esp_133 - 0x00000018:word32] = edx_103;
						esp_172 = esp_133 - 0x00000018;
						eax_31();
					}
					else
					{
						Mem198[esp_133 + 0x00000000:word32] = 0x00000000;
						Mem200[esp_133 - 0x00000004:word32] = 0x00000000;
						Mem202[esp_133 - 0x00000008:word32] = 0x0000030A;
						Mem205[esp_133 - 0x0000000C:word32] = fp + 0xFFFFF5D0;
						Mem207[esp_133 - 0x00000010:word32] = 0xFFFFFFFF;
						Mem210[esp_133 - 0x00000014:word32] = fp + 0xFFFFFDF0;
						Mem212[esp_133 - 0x00000018:word32] = 0x00000000;
						Mem214[esp_133 - 0x0000001C:word32] = 0x0000FDE9;
						word32 edi_196 = WideCharToMultiByte;
						if (WideCharToMultiByte(Mem214[esp_133 - 0x0000001C:UINT], Mem214[esp_133 - 24:DWORD], Mem214[esp_133 - 20:LPCWSTR], Mem214[esp_133 - 16:int32], Mem214[esp_133 - 12:LPSTR], Mem214[esp_133 - 8:int32], Mem214[esp_133 - 4:LPCSTR], Mem214[esp_133 + 0x00000000:LPBOOL]) != 0x00000000)
							;
						Mem222[esp_133 + 0x00000000:word32] = 0x00000000;
						Mem224[esp_133 - 0x00000004:word32] = 0x00000000;
						Mem226[esp_133 - 0x00000008:word32] = 0x0000030A;
						Mem229[esp_133 - 0x0000000C:word32] = fp + 0xFFFFF8DC;
						Mem231[esp_133 - 0x00000010:word32] = 0xFFFFFFFF;
						Mem234[esp_133 - 0x00000014:word32] = fp + 0xFFFFFBE8;
						Mem236[esp_133 - 0x00000018:word32] = 0x00000000;
						Mem238[esp_133 - 0x0000001C:word32] = 0x0000FDE9;
						word32 esi_239 = 0x00415C48;
						edi_196();
						if (fp != 0xFFFFFBE8)
							esi_239 = fp + 0xFFFFF8DC;
						edx_103 = Mem238[fp + 0x0000000C:word32];
						*edxOut = edx_103;
						eax_106 = Mem238[fp + 0xFFFFF1CC:word32];
						Mem249[esp_133 - 0x00000020:word32] = Mem238[fp + 0xFFFFF1C0:word32];
						word32 ecx_250 = Mem249[fp + 0x00000008:word32];
						Mem252[esp_133 - 0x00000024:word32] = edx_103;
						Mem254[esp_133 - 0x00000028:word32] = 0x00415C20;
						Mem256[esp_133 - 0x0000002C:word32] = esi_239;
						Mem258[esp_133 - 0x00000030:word32] = eax_106;
						Mem260[esp_133 - 0x00000034:word32] = 0x00415C60;
						Mem262[esp_133 - 0x00000038:word32] = ecx_250;
						esp_172 = esp_133 - 0x00000038;
						Mem262[fp + 0xFFFFF1C4:word32]();
					}
					esp_108 = esp_172 + 0x0000001C;
					if (eax_106 == 0x00000001)
						goto l004125E0;
				}
				else
					goto l004125E0;
			}
			else
				goto l004124F1;
		}
	}
	else
	{
		al_107 = 0x01;
		eax_106 = DPB(eax_67, 0x01, 0, 8);
		goto l004124C8;
	}
	word32 esp_87 = esp_108 + 0x00000004;
	word32 edi_86 = Mem63[esp_108 + 0x00000000:word32];
	*ediOut = edi_86;
	word32 ebp_95;
	return fn00411023(eax_106, Mem63[ebp_127 - 0x00000004:word32] ^ ebp_127, edx_103, Mem63[esp_87 + 0x00000004:word32], ebp_127, Mem63[esp_87 + 0x00000000:word32], edi_86, es, ds, fs, gs, out ebp_95);
}

word32 fn00412680(selector fs, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, ptr32 edxOut)
{
	word32 eax_16 = Mem0[fs:0x00000000:word32];
	Mem36[fs:0x00000000:word32] = fp - 0x00000014;
	word32 eax_38 = fp - 0x00000014 ^ fp - 0x00000014;
	RaiseException(0x406D1388, eax_38, 0x00000006, fp - 0x00000038);
	byte al_39 = (byte) eax_38;
	word32 edx_59;
	*edxOut = fp - 0x00000038;
	Mem73[fs:0x00000000:word32] = eax_16;
	return (word32) al_39;
}

word32 fn00412C90()
{
	return Mem0[0x00417538:word32];
}

word32 fn00412CA0()
{
	return Mem0[0x0041753C:word32];
}

void fn00413000()
{
	if (Mem0[0x00417000:word32] != 0xBB40E64E && (Mem0[0x00417000:word32] & 0xFFFF0000) != 0x00000000)
		Mem92[0x00417004:word32] = ~Mem0[0x00417000:word32];
	else
	{
		GetSystemTimeAsFileTime(fp - 0x0000000C);
		word32 eax_46 = GetTickCount() ^ (GetCurrentThreadId() ^ (GetCurrentProcessId() ^ 0x00000000));
		QueryPerformanceCounter(fp - 0x0000001C);
		word32 ecx_59 = eax_46 ^ dwLoc1C ^ dwLoc18;
		word32 dwLoc10_60 = ecx_59;
		if (ecx_59 == 0xBB40E64E)
			dwLoc10_60 = 0xBB40E64F;
		else if ((ecx_59 & 0xFFFF0000) == 0x00000000)
			dwLoc10_60 = ecx_59 << 0x00000010 | ecx_59;
		Mem69[0x00417000:word32] = dwLoc10_60;
		Mem72[0x00417004:word32] = ~dwLoc10_60;
	}
	return;
}

word32 fn00413770(word32 edx, word32 ebx, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs)
{
	word32 edi_143 = edi;
	word32 ebp_146 = fp - 0x00000004;
	word32 eax_11 = Mem0[0x00417000:word32] ^ fp - 0x00000004;
	if (Mem0[0x0041755C:word32] != 0x00000000)
	{
		word32 ebp_69;
		return fn00411023(0x00000000, eax_11 ^ fp - 0x00000004, edx, ebx, fp - 0x00000004, esi, edi, es, ds, fs, gs, out ebp_69);
	}
	else
	{
		word32 eax_100 = Mem0[0x00417034:word32];
		Mem106[0x0041755C:word32] = 0x00000001;
		word32 eax_107 = LoadLibraryA(eax_100);
		word32 esp_109 = fp - 0x00000120;
		if (eax_107 == 0x00000000)
		{
			word32 eax_162 = LoadLibraryA(0x004161F4);
			word32 esi_165 = eax_162;
			if (eax_162 == 0x00000000)
			{
				word32 ebp_175;
				return fn00411023(eax_162, eax_11 ^ fp - 0x00000004, edx, ebx, fp - 0x00000004, esi, edi, es, ds, fs, gs, out ebp_175);
			}
			else
			{
				Mem182[fp - 0x00000124:word32] = ebx;
				word32 eax_188 = GetProcAddress(eax_162, 0x004161E4);
				if (eax_188 == 0x00000000)
				{
					word32 ebp_203;
					return fn00411023(eax_188, eax_11 ^ fp - 0x00000004, edx, 0x004161F4, fp - 0x00000004, esi, edi, es, ds, fs, gs, out ebp_203);
				}
				else
				{
					Mem210[fp - 0x00000128:word32] = edi;
					word32 eax_215 = GetProcAddress(eax_162, 0x004161D0);
					word32 esp_216 = fp - 0x00000128;
					if (eax_215 != 0x00000000)
					{
						Mem261[fp - 0x0000012C:word32] = 0x004161C0;
						word32 eax_264 = GetProcAddress(eax_162, 0x004161D0);
						esp_216 = fp - 0x00000128;
						if (eax_264 != 0x00000000)
						{
							Mem273[fp - 0x0000012C:word32] = fp + 0xFFFFFEEC;
							word32 esp_280 = fp - 0x0000013C;
							eax_188();
							if (eax_264 == 0x00000000)
							{
								edx = fp + 0xFFFFFEF0;
								esp_280 = fp - 0x00000154;
								eax_215();
								if ((fp + 0xFFFFFEE4 & fp + 0xFFFFFEE4) == 0x00000000)
								{
									edx = 0x7FFFFFFF - dwLoc0110;
									if (edx >=u 0x0000000D && dwLoc0110 <u 0xFFFFFF09)
									{
										edx = fp + 0xFFFFFEE4;
										eax_215();
										eax_264();
										FreeLibrary(eax_162);
										esp_216 = fp - 0x00000170;
										if (dwLoc0114 == 0x00000000)
										{
											word32 ecx_370 = dwLoc0110;
											if (Mem273[fp + 0xFFFFFEF2 + dwLoc0110:byte] != 0x5C)
												Mem412[fp + 0xFFFFFEF3 + dwLoc0110:byte] = 0x5C;
											else
												ecx_370 = dwLoc0110 - 0x00000001;
											word32 esi_376 = Mem273[0x00417034:word32];
											word32 eax_377 = 0x00000000;
											word32 ecx_381 = fp + 0xFFFFFEF4 + ecx_370;
											do
											{
												byte dl_384 = Mem273[esi_376 + eax_377:byte];
												Mem386[ecx_381 + eax_377:byte] = dl_384;
												edx = DPB(edx, dl_384, 0, 8);
												eax_377 = eax_377 + 0x00000001;
											} while (eax_377 <= 0x0000000B);
											word32 ebp_406;
											return fn00411023(LoadLibraryA(fp + 0xFFFFFEF4), eax_11 ^ fp - 0x00000004, edx, dwLoc0114, fp - 0x00000004, 0x0041616C, dwLoc0114, es, ds, fs, gs, out ebp_406);
										}
										else
										{
l00413933:
											word32 esp_253 = esp_216 + 0x00000004;
											edi_143 = Mem210[esp_216 + 0x00000000:word32];
											eax_107 = 0x00000000;
											ebx = Mem210[esp_253 + 0x00000000:word32];
											esp_109 = esp_253 + 0x00000004;
l00413937:
											word32 ebp_154;
											return fn00411023(eax_107, eax_11 ^ fp - 0x00000004, edx, ebx, ebp_146, Mem106[esp_109 + 0x00000000:word32], edi_143, es, ds, fs, gs, out ebp_154);
										}
									}
									else
									{
l0041392C:
										word32 esp_308 = esp_280 - 0x00000004;
										Mem309[esp_308 + 0x00000000:word32] = esi_165;
										FreeLibrary(Mem309[esp_308 + 0x00000000:HMODULE]);
										esp_216 = esp_308 + 0x00000004;
										goto l00413933;
									}
								}
								else
									goto l0041392C;
							}
							else
								goto l0041392C;
						}
						else
							goto l00413933;
					}
					else
						goto l00413933;
				}
			}
		}
		else
			goto l00413937;
	}
}

