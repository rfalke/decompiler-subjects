// subject.c
// Generated on TIMESTAMP by decompiling from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe
// using Decompiler version VERSION

#include "subject.h"

word32 fn00401000(word32 esi, word32 edi, word32 dwArg04, ptr32 ebxOut, ptr32 ebpOut)
{
	if (dwArg04 <=u 0xFFFFFFF9)
		switch (dwArg04 + 0xFFFFFFFE)
		{
		case 0:
			word32 ebp_20;
			word32 ebx_21;
			*ebxOut = fn004010A0(esi, edi, 0x00406060, out ebp_20);
			return 0x00000000;
			break;
		case 1:
			word32 ebp_28;
			word32 ebx_29;
			*ebxOut = fn004010A0(esi, edi, 0x00406058, out ebp_28);
			return 0x00000000;
			break;
		case 2:
			word32 ebp_36;
			word32 ebx_37;
			*ebxOut = fn004010A0(esi, edi, 0x00406050, out ebp_36);
			return 0x00000000;
			break;
		case 3:
			word32 ebp_44;
			word32 ebx_45;
			*ebxOut = fn004010A0(esi, edi, 0x00406048, out ebp_44);
			return 0x00000000;
			break;
		case 4:
			word32 ebp_52;
			word32 ebx_53;
			*ebxOut = fn004010A0(esi, edi, 0x00406040, out ebp_52);
			return 0x00000000;
			break;
		case 5:
			word32 ebp_60;
			word32 ebx_61;
			*ebxOut = fn004010A0(esi, edi, 0x00406038, out ebp_60);
			return 0x00000000;
			break;
		}
	else
	{
		word32 ebp_68;
		word32 ebx_69;
		*ebxOut = fn004010A0(esi, edi, 0x00406030, out ebp_68);
		return 0x00000000;
	}
}

word32 fn004010A0(word32 esi, word32 edi, word32 dwArg04, ptr32 ebpOut)
{
	fn00401230(0x00406098);
	word32 ebp_24;
	word32 esi_25;
	word32 ebx_26 = fn00401330(dwLoc18, 0x00406098, dwArg04, fp + 0x00000008, dwArg04, out ebp_24, out esi_25);
	Mem31[fp - 0x0000000C:word32] = 0x00406098;
	Mem33[fp - 0x00000010:word32] = esi_25;
	fn004012D0(dwArg00, dwArg04);
	return ebx_26;
}

void fn004010E0(word32 ebp, word32 edi, selector fs)
{
	Mem17[fs:0x00000000:word32] = fp - 0x00000014;
	word32 eax_29 = GetVersion();
	word32 edx_33 = (word32) SLICE(eax_29, byte, 8);
	Mem34[0x0040892C:word32] = edx_33;
	Mem37[0x00408928:word32] = eax_29 & 0x000000FF;
	Mem40[0x00408924:word32] = ((eax_29 & 0x000000FF) << 0x00000008) + edx_33;
	Mem43[0x00408920:word32] = eax_29 >>u 0x00000010;
	word32 ebp_121 = fp - 0x00000004;
	word32 esp_112 = fp + 0xFFFFFFD0;
	if (fn00402B80() == 0x00000000)
	{
		word32 esi_122;
		fn00401200(edi, out ebx, out ebp_121, out esi_122, out edi);
		esp_112 = fp + 0xFFFFFFD0;
	}
	Mem57[ebp_121 - 0x00000004:word32] = 0x00000000;
	fn00402980(edi);
	fn00402970();
	Mem59[0x00409D04:word32] = GetCommandLineA();
	word32 eax_60 = fn00402540();
	Mem61[0x004088F8:word32] = eax_60;
	if (eax_60 == 0x00000000 || Mem61[0x00409D04:word32] == 0x00000000)
	{
		word32 esp_109 = esp_112 - 0x00000004;
		Mem110[esp_109 + 0x00000000:word32] = 0xFFFFFFFF;
		fn00401F00(ebx, dwArg00);
		esp_112 = esp_109 + 0x00000004;
	}
	fn004021A0(fn00402290(), edi);
	word32 edi_70;
	word32 esi_71 = fn00401ED0(out edi_70);
	word32 eax_72 = Mem61[0x0040893C:word32];
	Mem73[0x00408940:word32] = eax_72;
	word32 esp_74 = esp_112 - 0x00000004;
	Mem75[esp_74 + 0x00000000:word32] = eax_72;
	Mem78[esp_74 - 0x00000004:word32] = Mem75[0x00408934:word32];
	Mem81[esp_74 - 0x00000008:word32] = Mem78[0x00408930:word32];
	word32 ebx_83;
	word32 ebp_84;
	word32 eax_85 = fn00401000(esi_71, edi_70, dwArg00, out ebx_83, out ebp_84);
	Mem88[ebp_84 - 0x0000001C:word32] = eax_85;
	Mem90[esp_74 + 0x00000000:word32] = eax_85;
	word32 ebp_91 = fn00401F00(ebx_83, dwArg00);
	Mem94[ebp_91 - 0x00000004:word32] = 0xFFFFFFFF;
	Mem96[fs:0x00000000:word32] = Mem94[ebp_91 - 0x00000010:word32];
	return;
}

word32 fn00401200(word32 edi, ptr32 ebxOut, ptr32 ebpOut, ptr32 esiOut, ptr32 ediOut)
{
	*ediOut = edi;
	*ebxOut = ebx;
	*ebpOut = ebp;
	*esiOut = esi;
	if (Mem0[0x00408900:word32] != 0x00000002)
		*ediOut = fn00402D90(edi);
	word32 eax_7 = Mem0[fp + 0x00000004:word32];
	Mem9[fp - 0x00000004:word32] = eax_7;
	word32 ecx_11 = fn00402DD0(edi, dwArg00);
	Mem15[fp - 0x00000004:word32] = 0x000000FF;
	Mem15[0x00406068:word32]();
	return ecx_11;
}

void fn00401230(word32 dwArg04)
{
	if (fn00403060(Mem0[dwArg04 + 0x00000010:word32]) != 0x00000000)
	{
		word32 edi_45;
		if (dwArg04 == 0x00406098)
		{
			edi_45 = 0x00000000;
l00401263:
			Mem48[0x00408910:word32] = Mem0[0x00408910:word32] + 0x00000001;
			if ((Mem48[dwArg04 + 0x0000000C:word32] & 0x0000010C) != 0x00000000)
				goto l004012CA;
			else if (0x00408908[edi_45 * 0x00000004] == 0x00000000)
			{
				word32 ecx_77;
				word32 eax_78 = fn00402FB0(0x00001000, out ecx_77);
				0x00408908[edi_45 * 0x00000004] = eax_78;
				if (eax_78 != 0x00000000)
				{
l0040129D:
					word32 eax_60 = 0x00408908[edi_45 * 0x00000004];
					Mem61[dwArg04 + 0x00000018:word32] = 0x00001000;
					Mem62[dwArg04 + 0x00000008:word32] = eax_60;
					Mem63[dwArg04 + 0x00000000:word32] = eax_60;
					word32 eax_64 = Mem63[dwArg04 + 0x0000000C:word32];
					Mem65[dwArg04 + 0x00000004:word32] = 0x00001000;
					Mem69[dwArg04 + 0x0000000C:word32] = eax_64 | 0x00001102;
					return;
				}
				else
				{
l004012CA:
					return;
				}
			}
			else
				goto l0040129D;
		}
		else if (dwArg04 == 0x004060B8)
		{
			edi_45 = 0x00000001;
			goto l00401263;
		}
		else
			goto l004012CA;
	}
	else
		goto l004012CA;
}

void fn004012D0(word32 dwArg04, word32 dwArg08)
{
	if (dwArg04 == 0x00000000)
		if ((SLICE(Mem0[dwArg08 + 0x0000000C:word32], byte, 8) & 0x10) != 0x00)
			fn004030E0(dwArg08);
	else if ((SLICE(Mem0[dwArg08 + 0x0000000C:word32], byte, 8) & 0x10) != 0x00)
	{
		fn004030E0(dwArg08);
		word32 eax_46 = Mem0[dwArg08 + 0x0000000C:word32];
		Mem53[dwArg08 + 0x00000018:word32] = 0x00000000;
		Mem54[dwArg08 + 0x0000000C:word32] = DPB(eax_46, SLICE(eax_46, byte, 8) & 0xEE, 8, 8);
		Mem55[dwArg08 + 0x00000000:word32] = 0x00000000;
		Mem56[dwArg08 + 0x00000008:word32] = 0x00000000;
		return;
	}
	else
	{
l00401322:
		return;
	}
}

word32 fn00401330(word32 dwArg00, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg1C, ptr32 ebpOut, ptr32 esiOut)
{
// def fp
// def ebx
// def ebp
// def esi
// def edi
// def dwArg08
// def Mem0
// def dwLoc0224
// def dwLoc022C
// def bLoc0239
// def dwLoc0204
// def dwArg0C
// def dwLoc0210
// def dwLoc020C
// def dwLoc0270
// def dh
// def bLoc0200
// def dwLoc0248
// def bLoc023A
// def wLoc0260
// def dwLoc026C
// def dwLoc0220
// def SO
// def edx_eax
// def ah
// def ax
// def CZ
// def al
// def dwLoc0218
// def dwLoc0228
// def dwLoc0234
// def dwLoc0238
// def dwLoc024C
// def dwLoc0244
// def dwLoc0230
// def edx
// def dwLoc0260
// def dwLoc0264
// def dwLoc0268
// def dwArg1C
// def dwArg00
// def dwArg04
// def ebpOut
// def esiOut
// def bh
// def dwLoc021C
// def bLoc024C
// def bLoc0224
// def wLoc0240
	esp_1 = fp;
	esp_2 = fp - 0x0000024C;
	esp_3 = fp - 0x00000250;
	dwLoc0250_5 = ebx;
	esp_6 = fp - 0x00000254;
	dwLoc0254_8 = ebp;
	esp_9 = fp - 0x00000258;
	dwLoc0258_11 = esi;
	esp_12 = fp - 0x0000025C;
	dwLoc025C_14 = edi;
	edi_16 = dwArg08;
	ecx_17 = 0x00000000;
	cl_18 = (byte) ecx_17;
	cx_19 = (word16) ecx_17;
	ch_20 = SLICE(ecx_17, byte, 8);
	ebp_21 = 0x00000000;
	dwLoc0240_22 = 0x00000000;
	bl_24 = Mem0[edi_16 + 0x00000000:byte];
	ebx_25 = DPB(ebx, bl_24, 0, 8);
	edi_26 = edi_16 + 0x00000001;
	SZO_27 = cond(bl_24 & bl_24);
	Z_28 = SZO_27;
	C_29 = false;
	bLoc021C_30 = bl_24;
	dwArg08_31 = edi_26;
	if ((bl_24 & bl_24) != 0x00)
	{
		esi_133 = dwLoc0234;
// dwLoc0224_135 = PHI(dwLoc0224, dwLoc0224_199)
// dwLoc022C_136 = PHI(dwLoc022C, dwLoc022C_200)
// bLoc0239_137 = PHI(bLoc0239, bLoc0239_201)
// dwLoc0204_138 = PHI(dwLoc0204, dwLoc0204_202)
// dwArg0C_139 = PHI(dwArg0C, dwArg0C_203)
// dwLoc0210_140 = PHI(dwLoc0210, dwLoc0210_204)
// dwLoc020C_141 = PHI(dwLoc020C, dwLoc020C_205)
// dwLoc0270_142 = PHI(dwLoc0270, dwLoc0270_206)
// bLoc0200_143 = PHI(bLoc0200, bLoc0200_208)
// dwLoc0248_144 = PHI(dwLoc0248, dwLoc0248_209)
// bLoc023A_145 = PHI(bLoc023A, bLoc023A_210)
// wLoc0260_146 = PHI(wLoc0260, wLoc0260_211)
// dwLoc026C_147 = PHI(dwLoc026C, dwLoc026C_212)
// dwLoc0220_148 = PHI(dwLoc0220, dwLoc0220_213)
// ah_149 = PHI(ah, ah_216)
// ax_150 = PHI(ax, ax_217)
// CZ_151 = PHI(CZ, CZ_218)
// al_152 = PHI(al, al_219)
// dwLoc0218_153 = PHI(dwLoc0218, dwLoc0218_220)
// dwLoc0228_154 = PHI(dwLoc0228, dwLoc0228_221)
// dwLoc0234_155 = PHI(dwLoc0234, dwLoc0234_222)
// dwLoc0238_156 = PHI(dwLoc0238, dwLoc0238_223)
// dwLoc024C_157 = PHI(dwLoc024C, dwLoc024C_224)
// dwLoc0244_158 = PHI(dwLoc0244, dwLoc0244_225)
// dwLoc0230_159 = PHI(dwLoc0230, dwLoc0230_226)
// dwLoc0260_160 = PHI(dwLoc0260, dwLoc0260_228)
// dwLoc0264_161 = PHI(dwLoc0264, dwLoc0264_229)
// dwLoc0268_162 = PHI(dwLoc0268, dwLoc0268_230)
// SZO_163 = PHI(SZO_27, SZO_247)
// Z_164 = PHI(Z_28, Z_248)
// C_165 = PHI(C_29, C_249)
// bLoc021C_166 = PHI(bLoc021C_30, bLoc021C_250)
// dwArg08_167 = PHI(dwArg08_31, dwArg08_251)
// ecx_168 = PHI(ecx_17, ecx_253)
// cl_169 = PHI(cl_18, cl_254)
// cx_170 = PHI(cx_19, cx_255)
// ch_171 = PHI(ch_20, ch_256)
// edi_172 = PHI(edi_26, edi_246)
// esi_173 = PHI(esi_133, esi_252)
// ebp_174 = PHI(ebp_21, ebp_238)
// ebx_175 = PHI(ebx_25, ebx_245)
// bl_176 = PHI(bl_24, bl_244)
// bh_177 = PHI(bh, bh_240)
// esp_178 = PHI(esp_12, esp_241)
		eax_179 = 0x00000000;
		edx_180 = 0x00000000;
		edx_eax_181 = SEQ(edx_180, eax_179);
		dh_182 = SLICE(edx_180, byte, 8);
		SCZO_183 = cond(0x00000000);
		SO_184 = SCZO_183;
	}
}

void fn00401CC0(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	word32 eax_16;
	word32 eax_5 = Mem0[dwArg08 + 0x00000004:word32];
	Mem9[dwArg08 + 0x00000004:word32] = eax_5 - 0x00000001;
	if (eax_5 >= 0x00000001)
	{
		Mem34[Mem9[dwArg08 + 0x00000000:word32]:byte] = (byte) dwArg04;
		Mem41[dwArg08 + 0x00000000:word32] = Mem34[dwArg08 + 0x00000000:word32] + 0x00000001;
		eax_16 = dwArg04 & 0x000000FF;
	}
	else
		eax_16 = fn00403350(dwArg04, dwArg08);
	if (eax_16 == 0xFFFFFFFF)
	{
		Mem25[dwArg0C + 0x00000000:word32] = eax_16;
		return;
	}
	else
	{
		Mem28[dwArg0C + 0x00000000:word32] = Mem9[dwArg0C + 0x00000000:word32] + 0x00000001;
		return;
	}
}

void fn00401D10(word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10)
{
	word32 ebp_14 = dwArg08 - 0x00000001;
	if (dwArg08 > 0x00000000)
		do
		{
			fn00401CC0(dwArg04, dwArg0C, dwArg10);
			if (Mem0[dwArg10 + 0x00000000:word32] == 0xFFFFFFFF)
				break;
			ebp_14 = ebp_68 - 0x00000001;
			word32 ebp_68 = ebp_14;
		} while (ebp_68 > 0x00000000);
	return;
}

word32 fn00401D50(word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10)
{
	word32 eax_13 = dwArg08;
	word32 ebp_14 = dwArg08 - 0x00000001;
	if (dwArg08 > 0x00000000)
	{
		word32 esi_48 = dwArg04;
		do
		{
			fn00401CC0((int32) Mem0[esi_48 + 0x00000000:byte], dwArg0C, dwArg10);
			esi_48 = esi_48 + 0x00000001;
			eax_13 = Mem0[dwArg10 + 0x00000000:word32];
			if (eax_13 == 0xFFFFFFFF)
				break;
			ebp_14 = ebp_71 - 0x00000001;
			word32 ebp_71 = ebp_14;
		} while (ebp_71 > 0x00000000);
	}
	return eax_13;
}

word32 fn00401D90(word32 dwArg04, ptr32 ecxOut)
{
	word32 ecx_5 = Mem0[dwArg04 + 0x00000000:word32];
	Mem8[dwArg04 + 0x00000000:word32] = ecx_5 + 0x00000004;
	word32 ecx_6;
	*ecxOut = ecx_5 + 0x00000004;
	return Mem8[ecx_5 + 0x00000000:word32];
}

word32 fn00401DB0(word32 dwArg04, ptr32 edxOut)
{
	word32 ecx_5 = Mem0[dwArg04 + 0x00000000:word32];
	Mem8[dwArg04 + 0x00000000:word32] = ecx_5 + 0x00000008;
	word32 edx_10;
	*edxOut = Mem8[ecx_5 + 0x00000004:word32];
	return Mem8[ecx_5 + 0x00000000:word32];
}

word32 fn00401DD0(word32 dwArg04)
{
	word32 ecx_5 = Mem0[dwArg04 + 0x00000000:word32];
	Mem8[dwArg04 + 0x00000000:word32] = ecx_5 + 0x00000004;
	return DPB(ecx_5 + 0x00000004, Mem8[ecx_5 + 0x00000000:word16], 0, 16);
}

word32 fn00401ED0(ptr32 ediOut)
{
	word32 eax_3 = Mem0[0x00408CEC:word32];
	if (eax_3 != 0x00000000)
		eax_3();
	word32 edi_16;
	fn00401FF0(dwLoc0C, 0x00406008, 0x00406010, out edi_16);
	Mem21[fp - 0x00000004:word32] = 0x00406004;
	Mem23[fp - 0x00000008:word32] = 0x00406000;
	word32 edi_26;
	return fn00401FF0(0x00406010, dwArg00, dwArg04, out edi_26);
}

word32 fn00401F00(word32 ebx, word32 dwArg04)
{
	fn00401F40(ebx, dwArg04, 0x00000000, 0x00000000);
	return ebp;
}

void fn00401F40(word32 ebx, word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	word32 ebp_103 = dwArg04;
	word32 esp_130 = fp - 0x0000000C;
	if (Mem0[0x0040895C:word32] == 0x00000001)
	{
		TerminateProcess(GetCurrentProcess(), dwArg04);
		esp_130 = fp - 0x0000000C;
	}
	Mem30[0x00408958:word32] = 0x00000001;
	Mem31[0x00408954:byte] = (byte) dwArg0C;
	word32 ebx_104 = dwArg0C;
	if (dwArg08 == 0x00000000)
	{
		word32 ecx_112 = Mem31[0x00408CE8:word32];
		if (ecx_112 != 0x00000000)
		{
			word32 esi_93 = Mem31[0x00408CE4:word32];
			word32 esi_102 = esi_93 - 0x00000004;
			if (esi_93 - 0x00000004 >=u ecx_112)
				do
				{
					word32 eax_106 = Mem31[esi_102 + 0x00000000:word32];
					if (eax_106 != 0x00000000)
					{
						eax_106();
						ecx_112 = Mem31[0x00408CE8:word32];
					}
					esi_102 = esi_102 - 0x00000004;
				} while (esi_102 >=u ecx_112);
		}
		word32 edi_81;
		fn00401FF0(dwLoc18, 0x00406014, 0x0040601C, out edi_81);
		Mem86[fp - 0x00000010:word32] = 0x0040601C;
		Mem88[fp - 0x00000014:word32] = 0x00406014;
		word32 edi_89;
		fn00401FF0(ebx, dwArg00, dwArg04, out edi_89);
		esp_130 = fp - 0x0000000C;
	}
	word32 esp_42 = esp_130 - 0x00000004;
	Mem43[esp_42 + 0x00000000:word32] = 0x00406024;
	Mem45[esp_42 - 0x00000004:word32] = 0x00406020;
	word32 edi_47;
	fn00401FF0(ebx, dwArg00, dwArg04, out edi_47);
	if (ebx_104 == 0x00000000)
	{
		Mem61[esp_42 + 0x00000000:word32] = ebp_103;
		Mem62[0x0040895C:word32] = 0x00000001;
		ExitProcess(Mem62[esp_42 + 0x00000000:UINT]);
	}
	return;
}

word32 fn00401FF0(word32 dwArg00, word32 dwArg04, word32 dwArg08, ptr32 ediOut)
{
	word32 esi_34 = dwArg04;
	word32 edi_11 = dwArg08;
	if (dwArg04 <u dwArg08)
		do
		{
			word32 eax_37 = Mem0[esi_34 + 0x00000000:word32];
			if (eax_37 != 0x00000000)
				eax_37();
			esi_34 = esi_34 + 0x00000004;
		} while (esi_34 <u edi_11);
}

void fn004021A0(word32 ecx, word32 edi)
{
	word32 edx_239 = Mem0[0x004088F8:word32];
	byte al_17 = Mem0[edx_239 + 0x00000000:byte];
	word32 esi_20 = 0x00000000;
	if (al_17 != 0x00)
		do
		{
			if (al_17 != 0x3D)
				esi_20 = esi_20 + 0x00000001;
			edi = edx_239;
			word32 ecx_250 = ecx | 0xFFFFFFFF;
			do
			{
				if (ecx_250 == 0x00000000)
					break;
				edi = edi + 0x00000001;
				ecx_250 = ecx_250 - 0x00000001;
			} while (0x00 != Mem0[edi + 0x00000000:byte]);
			word32 ecx_262 = ~ecx_250;
			ecx = ecx_262 - 0x00000001;
			al_17 = Mem0[edx_239 + 0x00000001 + (ecx_262 - 0x00000001):byte];
			edx_239 = edx_239 + 0x00000001 + (ecx_262 - 0x00000001);
		} while (al_17 != 0x00);
	word32 ecx_37;
	word32 eax_38 = fn00402FB0(esi_20 * 0x00000004 + 0x00000004, out ecx_37);
	Mem45[0x0040893C:word32] = eax_38;
	if (eax_50 == 0x00000000)
	{
		word32 ebx_221;
		word32 ebp_222;
		word32 esi_223;
		word32 edi_224;
		fn00401200(edi, out ebx_221, out ebp_222, out esi_223, out edi_224);
		Mem229[fp - 0x00000018:word32] = 0x00000009;
		word32 ebx_230;
		word32 ebp_231;
		word32 edi_233;
		ecx_106 = fn00401200(edi_224, out ebx_230, out ebp_231, out esi_105, out edi_233);
		esp_104 = fp - 0x00000014;
	}
	word32 ebp_102 = Mem57[0x004088F8:word32];
	byte dl_135 = Mem57[ebp_102 + 0x00000000:byte];
	if (dl_135 != 0x00)
		do
		{
			word32 edi_107 = ebp_102;
			word32 ecx_108 = ecx_106 | 0xFFFFFFFF;
			do
			{
				if (ecx_108 == 0x00000000)
					break;
				edi_107 = edi_107 + 0x00000001;
				ecx_108 = ecx_108 - 0x00000001;
			} while (0x00 != Mem57[edi_107 + 0x00000000:byte]);
			word32 ecx_119 = ~ecx_108;
			ecx_106 = ecx_119 - 0x00000001;
			word32 ebx_122 = ecx_119;
			if (dl_135 != 0x3D)
			{
				word32 esp_141 = esp_104 - 0x00000004;
				Mem142[esp_141 + 0x00000000:word32] = ecx_119;
				word32 ecx_143;
				word32 eax_144 = fn00402FB0(dwArg00, out ecx_143);
				Mem146[esi_105 + 0x00000000:word32] = eax_144;
				esp_104 = esp_141 + 0x00000004;
				if (eax_144 == 0x00000000)
				{
					Mem207[esp_141 + 0x00000000:word32] = 0x00000009;
					word32 esi_210;
					word32 edi_211;
					ecx_143 = fn00401200(edi_107, out ebx_122, out ebp_102, out esi_210, out edi_211);
					esp_104 = esp_141 + 0x00000004;
				}
				word32 edi_156 = ebp_102;
				word32 ecx_157 = ecx_143 | 0xFFFFFFFF;
				do
				{
					if (ecx_157 == 0x00000000)
						break;
					edi_156 = edi_156 + 0x00000001;
					ecx_157 = ecx_157 - 0x00000001;
				} while (0x00 != Mem146[edi_156 + 0x00000000:byte]);
				word32 ecx_171 = ~ecx_157;
				word32 eax_169 = Mem146[esp_104 + 0x00000010:word32];
				word32 esi_175 = edi_156 - ecx_171;
				word32 edi_176 = Mem146[eax_169 + 0x00000000:word32];
				word32 ecx_177 = ecx_171 >>u 0x00000002;
				while (ecx_177 != 0x00000000)
				{
					Mem183[edi_176 + 0x00000000:word32] = Mem146[esi_175 + 0x00000000:word32];
					esi_175 = esi_175 + 0x00000004;
					edi_176 = edi_176 + 0x00000004;
					ecx_177 = ecx_177 - 0x00000001;
				}
				ecx_106 = ecx_171 & 0x00000003;
				while (ecx_106 != 0x00000000)
				{
					Mem196[edi_176 + 0x00000000:byte] = Mem146[esi_175 + 0x00000000:byte];
					esi_175 = esi_175 + 0x00000001;
					edi_176 = edi_176 + 0x00000001;
					ecx_106 = ecx_106 - 0x00000001;
				}
				Mem200[esp_104 + 0x00000010:word32] = eax_169 + 0x00000004;
				esi_105 = eax_169 + 0x00000004;
			}
			dl_135 = Mem57[ebp_102 + ebx_122:byte];
			ebp_102 = ebp_102 + ebx_122;
		} while (dl_135 != 0x00);
	Mem82[esp_104 - 0x00000004:word32] = Mem57[0x004088F8:word32];
	fn00403590(ecx_106, dwArg00);
	Mem86[0x004088F8:word32] = 0x00000000;
	Mem87[esi_105 + 0x00000000:word32] = 0x00000000;
	return;
}

word32 fn00402290()
{
	GetModuleFileNameA(0x00000000, 0x00408968, 0x00000104);
	word32 edi_100 = Mem0[0x00409D04:word32];
	Mem19[0x0040894C:word32] = 0x00408968;
	if (Mem19[edi_100 + 0x00000000:byte] == 0x00)
		edi_100 = 0x00408968;
	Mem26[fp - 0x00000014:word32] = fp - 0x00000004;
	Mem28[fp - 0x00000018:word32] = fp - 0x00000008;
	Mem30[fp - 0x0000001C:word32] = 0x00000000;
	fn00402330(fp - 0x00000008, edi_100, 0x00000000, 0x00000000, 0x00408968, 0x00000104);
	Mem44[fp - 0x00000014:word32] = dwLoc04 + dwLoc08 * 0x00000004;
	word32 ecx_45;
	word32 eax_46 = fn00402FB0(0x00000104, out ecx_45);
	word32 esi_47 = eax_46;
	word32 esp_48 = fp - 0x00000010;
	if (eax_46 == 0x00000000)
	{
		word32 ebx_93;
		word32 ebp_94;
		fn00401200(edi_100, out ebx_93, out ebp_94, out esi_47, out edi_100);
		esp_48 = fp - 0x00000010;
	}
	word32 ecx_60 = Mem44[esp_48 + 0x00000008:word32];
	word32 esp_62 = esp_48 - 0x00000004;
	Mem63[esp_62 + 0x00000000:word32] = esp_48 + 0x0000000C;
	Mem67[esp_62 - 0x00000004:word32] = esp_62 + 0x0000000C;
	Mem69[esp_62 - 0x00000008:word32] = esi_47 + ecx_60 * 0x00000004;
	Mem71[esp_62 - 0x0000000C:word32] = esi_47;
	Mem73[esp_62 - 0x00000010:word32] = edi_100;
	word32 ecx_79 = fn00402330(ecx_60, dwArg00, dwArg04, dwArg08, dwArg0C, dwArg10);
	word32 eax_80 = Mem73[esp_62 + 0x0000000C:word32];
	Mem83[0x00408934:word32] = esi_47;
	Mem86[0x00408930:word32] = eax_80 - 0x00000001;
	return ecx_79;
}

word32 fn00402330(word32 ecx, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, word32 dwArg14)
{
	Mem25[dwArg14 + 0x00000000:word32] = 0x00000000;
	Mem26[dwArg10 + 0x00000000:word32] = 0x00000001;
	word32 ebp_11 = dwArg08;
	word32 esi_118 = dwArg0C;
	word32 eax_119 = dwArg04 + 0x00000001;
	if (dwArg08 != 0x00000000)
	{
		Mem447[dwArg08 + 0x00000000:word32] = dwArg0C;
		ebp_11 = dwArg08 + 0x00000004;
		dwArg08 = dwArg08 + 0x00000004;
	}
	dwArg14_380 = dwArg14;
	if (Mem26[dwArg04 + 0x00000000:byte] == 0x22)
	{
		byte cl_295 = Mem26[dwArg04 + 0x00000001:byte];
		word32 ecx_296 = DPB(ecx, cl_295, 0, 8);
		eax_119 = dwArg04 + 0x00000001;
		if (cl_295 != 0x22)
			do
			{
				if (cl_295 == 0x00)
					break;
				word32 ecx_339 = ecx_296 & 0x000000FF;
				if ((Mem26[ecx_339 + 0x00408A79:byte] & 0x04) != 0x00)
				{
					Mem371[dwArg14 + 0x00000000:word32] = Mem26[dwArg14 + 0x00000000:word32] + 0x00000001;
					if (esi_118 != 0x00000000)
					{
						byte cl_372 = Mem371[eax_119 + 0x00000000:byte];
						Mem374[esi_118 + 0x00000000:byte] = cl_372;
						ecx_339 = DPB(ecx_339, cl_372, 0, 8);
						esi_118 = esi_118 + 0x00000001;
						eax_119 = eax_119 + 0x00000001;
					}
				}
				Mem353[dwArg14 + 0x00000000:word32] = Mem26[dwArg14 + 0x00000000:word32] + 0x00000001;
				if (esi_118 != 0x00000000)
				{
					Mem363[esi_118 + 0x00000000:byte] = Mem353[eax_119 + 0x00000000:byte];
					esi_118 = esi_118 + 0x00000001;
				}
				cl_295 = Mem353[eax_119 + 0x00000001:byte];
				ecx_296 = DPB(ecx_339, cl_295, 0, 8);
				eax_119 = eax_119 + 0x00000001;
			} while (cl_295 != 0x22);
		Mem311[dwArg14 + 0x00000000:word32] = Mem26[dwArg14 + 0x00000000:word32] + 0x00000001;
		if (esi_118 != 0x00000000)
		{
			Mem324[esi_118 + 0x00000000:byte] = 0x00;
			word32 esi_325 = esi_118 + 0x00000001;
			Mem326[esi_325 + 0x00000000:byte] = 0x00;
			esi_118 = esi_325 + 0x00000001;
		}
		if (Mem317[eax_119 + 0x00000000:byte] == 0x22)
			eax_119 = eax_119 + 0x00000001;
	}
	else
	{
		do
		{
			word32 dwArg14_380;
			Mem391[dwArg14 + 0x00000000:word32] = Mem26[dwArg14 + 0x00000000:word32] + 0x00000001;
			if (esi_118 != 0x00000000)
			{
				Mem444[esi_118 + 0x00000000:byte] = Mem391[eax_119 + 0x00000000:byte];
				esi_118 = esi_118 + 0x00000001;
			}
			byte cl_393 = Mem391[eax_119 + 0x00000000:byte];
			eax_119 = eax_119 + 0x00000000;
			dwArg14_380 = DPB(dwArg14_380, cl_393, 0, 8);
			if ((Mem391[(dwArg14_380 & 0x000000FF) + 0x00408A79:byte] & 0x04) != 0x00)
			{
				Mem434[dwArg14 + 0x00000000:word32] = Mem391[dwArg14 + 0x00000000:word32] + 0x00000001;
				if (esi_118 != 0x00000000)
				{
					Mem440[esi_118 + 0x00000000:byte] = Mem434[eax_119 + 0x00000000:byte];
					esi_118 = esi_118 + 0x00000001;
				}
				eax_119 = eax_119 + 0x00000001;
			}
			if (cl_393 == 0x20)
				break;
			if (cl_393 == 0x00)
				goto l00402409;
		} while (cl_393 != 0x09);
		if (cl_393 == 0x00)
		{
l00402409:
			eax_119 = eax_119 - 0x00000001;
		}
		else if (esi_118 != 0x00000000)
			Mem423[esi_118 - 0x00000001:byte] = 0x00;
	}
	word32 edx_114 = 0x00000000;
	word32 dwArg14_115 = 0x00000000;
	while (Mem26[eax_119 + 0x00000000:byte] != 0x00)
	{
		byte cl_91 = Mem26[eax_119 + 0x00000000:byte];
		while (cl_91 == 0x20 || cl_91 == 0x09)
		{
			eax_119 = eax_119 + 0x00000001;
			cl_91 = Mem26[eax_119 + 0x00000000:byte];
		}
		if (Mem26[eax_119 + 0x00000000:byte] == 0x00)
			break;
		if (ebp_11 != 0x00000000)
		{
			Mem291[ebp_11 + 0x00000000:word32] = esi_118;
			dwArg08 = ebp_11 + 0x00000004;
		}
		Mem111[dwArg10 + 0x00000000:word32] = Mem26[dwArg10 + 0x00000000:word32] + 0x00000001;
		while (true)
		{
			word32 ecx_122 = 0x00000000;
			byte cl_123 = 0x00;
			word32 ebp_126 = 0x00000001;
			if (Mem111[eax_119 + 0x00000000:byte] == 0x5C)
				do
				{
					ecx_122 = ecx_122 + 0x00000001;
					eax_119 = eax_451 + 0x00000001;
					cl_123 = (byte) ecx_122;
					word32 eax_451 = eax_119;
				} while (Mem111[eax_451 + 0x00000001:byte] == 0x5C);
			if (Mem111[eax_119 + 0x00000000:byte] == 0x22)
			{
				if ((cl_123 & 0x01) == 0x00)
				{
					if (edx_114 != 0x00000000 && Mem111[eax_119 + 0x00000001:byte] == 0x22)
						eax_119 = eax_119 + 0x00000001;
					else
						ebp_126 = 0x00000000;
					edx_114 = (word32) (dwArg14_115 == 0x00000000);
					dwArg14_115 = edx_114;
				}
				ecx_122 = ecx_122 >>u 0x00000001;
			}
			word32 ecx_141 = ecx_122 - 0x00000001;
			if (ecx_122 != 0x00000000)
			{
				ecx_141 = ecx_141 + 0x00000001;
				do
				{
					if (esi_118 != 0x00000000)
					{
						Mem242[esi_118 + 0x00000000:byte] = 0x5C;
						esi_118 = esi_118 + 0x00000001;
					}
					Mem241[dwArg14 + 0x00000000:word32] = Mem111[dwArg14 + 0x00000000:word32] + 0x00000001;
					ecx_141 = ecx_141 - 0x00000001;
				} while (ecx_141 != 0x00000000);
			}
			byte cl_149 = Mem111[eax_119 + 0x00000000:byte];
			word32 ecx_150 = DPB(ecx_141, cl_149, 0, 8);
			if (cl_149 == 0x00 || edx_114 == 0x00000000 && (cl_149 == 0x20 || cl_149 == 0x09))
			{
				if (esi_118 != 0x00000000)
				{
					Mem165[esi_118 + 0x00000000:byte] = 0x00;
					esi_118 = esi_118 + 0x00000001;
				}
				Mem164[dwArg14 + 0x00000000:word32] = Mem111[dwArg14 + 0x00000000:word32] + 0x00000001;
				ebp_11 = dwArg08;
			}
			if (ebp_126 == 0x00000000)
				goto l00402505;
			else if (esi_118 != 0x00000000)
			{
				if ((Mem111[(ecx_150 & 0x000000FF) + 0x00408A79:byte] & 0x04) != 0x00)
				{
					Mem199[esi_118 + 0x00000000:byte] = cl_149;
					Mem205[dwArg14 + 0x00000000:word32] = Mem199[dwArg14 + 0x00000000:word32] + 0x00000001;
					esi_118 = esi_118 + 0x00000001;
					eax_119 = eax_119 + 0x00000001;
				}
				Mem192[esi_118 + 0x00000000:byte] = Mem111[eax_119 + 0x00000000:byte];
				Mem196[dwArg14 + 0x00000000:word32] = Mem192[dwArg14 + 0x00000000:word32] + 0x00000001;
				esi_118 = esi_118 + 0x00000001;
				eax_119 = eax_119 + 0x00000001;
			}
			else
			{
				if ((Mem111[(ecx_150 & 0x000000FF) + 0x00408A79:byte] & 0x04) != 0x00)
				{
					Mem219[dwArg14 + 0x00000000:word32] = Mem111[dwArg14 + 0x00000000:word32] + 0x00000001;
					eax_119 = eax_119 + 0x00000001;
				}
				Mem213[dwArg14 + 0x00000000:word32] = Mem111[dwArg14 + 0x00000000:word32] + 0x00000001;
l00402505:
				eax_119 = eax_119 + 0x00000001;
			}
		}
	}
	if (ebp_11 != 0x00000000)
		Mem87[ebp_11 + 0x00000000:word32] = 0x00000000;
	word32 ecx_80 = Mem26[dwArg10 + 0x00000000:word32];
	Mem86[dwArg10 + 0x00000000:word32] = ecx_80 + 0x00000001;
	return ecx_80 + 0x00000001;
}

word32 fn00402540()
{
	word32 eax_3 = Mem0[0x00408A70:word32];
	word32 ebp_10 = GetEnvironmentStrings;
	word32 esi_14 = 0x00000000;
	word32 ebx_15 = 0x00000000;
	if (eax_3 == 0x00000000)
	{
		word32 eax_303 = GetEnvironmentStringsW();
		esi_14 = eax_303;
		if (eax_303 != 0x00000000)
		{
			eax_3 = 0x00000001;
l0040257D:
			Mem313[0x00408A70:word32] = eax_3;
l00402582:
			if (eax_3 != 0x00000001)
				if (eax_3 != 0x00000002)
					goto l0040268F;
				else if (ebx_15 == 0x00000000)
				{
					ebp_10();
					ebx_15 = eax_3;
					if (eax_3 != 0x00000000)
					{
l00402633:
						word32 eax_206 = ebx_15;
						if (Mem0[ebx_15 + 0x00000000:byte] != 0x00)
							do
							{
								eax_206 = eax_322 + 0x00000001;
								word32 eax_322 = eax_206;
								if (Mem0[eax_322 + 0x00000001:byte] != 0x00)
									continue;
								eax_206 = eax_206 + 0x00000001;
							} while (Mem0[eax_206 + 0x00000001:byte] != 0x00);
						word32 eax_212 = eax_206 - ebx_15;
						word32 ecx_219;
						word32 eax_220 = fn00402FB0(eax_212 + 0x00000001, out ecx_219);
						if (eax_220 == 0x00000000)
						{
							FreeEnvironmentStringsA(ebx_15);
							return 0x00000000;
						}
						else
						{
							word32 esi_242 = ebx_15;
							word32 edi_244 = eax_220;
							word32 ecx_245 = eax_212 + 0x00000001 >>u 0x00000002;
							while (ecx_245 != 0x00000000)
							{
								Mem253[edi_244 + 0x00000000:word32] = Mem0[esi_242 + 0x00000000:word32];
								esi_242 = esi_242 + 0x00000004;
								edi_244 = edi_244 + 0x00000004;
								ecx_245 = ecx_245 - 0x00000001;
							}
							word32 ecx_261 = eax_212 + 0x00000001 & 0x00000003;
							while (ecx_261 != 0x00000000)
							{
								Mem270[edi_244 + 0x00000000:byte] = Mem0[esi_242 + 0x00000000:byte];
								esi_242 = esi_242 + 0x00000001;
								edi_244 = edi_244 + 0x00000001;
								ecx_261 = ecx_261 - 0x00000001;
							}
							FreeEnvironmentStringsA(ebx_15);
							return eax_220;
						}
					}
					else
						goto l0040268F;
				}
				else
					goto l00402633;
			else if (esi_14 == 0x00000000)
			{
				word32 eax_188 = GetEnvironmentStringsW();
				esi_14 = eax_188;
				if (eax_188 != 0x00000000)
				{
l0040259B:
					word32 eax_181 = esi_14;
					if (Mem0[esi_14 + 0x00000000:word16] != 0x0000)
						do
						{
							eax_181 = eax_181 + 0x00000002;
							if (Mem0[eax_181 + 0x00000000:word16] != 0x0000)
								continue;
							eax_181 = eax_181 + 0x00000002;
						} while (Mem0[eax_181 + 0x00000002:word16] != 0x0000);
					word32 eax_88 = (eax_181 - esi_14 >> 0x00000001) + 0x00000001;
					word32 eax_104 = WideCharToMultiByte(0x00000000, 0x00000000, esi_14, eax_88, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					if (eax_104 != 0x00000000)
					{
						Mem130[fp - 0x00000014:word32] = eax_104;
						word32 ecx_131;
						word32 eax_132 = fn00402FB0(0x00000000, out ecx_131);
						word32 ebx_133 = eax_132;
						if (eax_132 != 0x00000000)
						{
							Mem141[fp - 0x00000018:word32] = 0x00000000;
							Mem143[fp - 0x0000001C:word32] = eax_104;
							Mem145[fp - 0x00000020:word32] = eax_132;
							Mem151[fp - 0x0000002C:word32] = 0x00000000;
							Mem153[fp - 0x00000030:word32] = 0x00000000;
							if (WideCharToMultiByte(0x00000000, 0x00000000, esi_14, eax_88, 0x00000000, 0x00000000, 0x00000000, 0x00000000) == 0x00000000)
							{
								Mem176[fp - 0x00000014:word32] = eax_132;
								fn00403590(ecx_131, 0x00000000);
								ebx_133 = 0x00000000;
							}
							FreeEnvironmentStringsW(esi_14);
							return ebx_133;
						}
						else
						{
l00402614:
							FreeEnvironmentStringsW(esi_14);
							return 0x00000000;
						}
					}
					else
						goto l00402614;
				}
				else
				{
l0040268F:
					return 0x00000000;
				}
			}
			else
				goto l0040259B;
		}
		else
		{
			word32 eax_315 = GetEnvironmentStrings();
			ebx_15 = eax_315;
			if (eax_315 != 0x00000000)
			{
				eax_3 = 0x00000002;
				goto l0040257D;
			}
			else
				goto l0040268F;
		}
	}
	else
		goto l00402582;
}

void fn004026A0(word32 dwArg04)
{
	word32 eax_20 = fn00402890(dwArg04);
	if (eax_20 == Mem0[0x00408B7C:word32])
		return;
	else if (eax_20 == 0x00000000)
	{
		fn00402940();
		return;
	}
	else
	{
		word32 edx_82 = 0x00000000;
		word32 eax_86 = 0x00406388;
		do
		{
			if (Mem0[eax_86 + 0x00000000:word32] == eax_20)
			{
				word32 ecx_253 = 0x00000040;
				word32 edi_259 = 0x00408A78;
				word32 ebx_260 = edx_82 * 0x00000003;
				while (ecx_253 != 0x00000000)
				{
					Mem265[edi_259 + 0x00000000:word32] = 0x00000000;
					edi_259 = edi_259 + 0x00000004;
					ecx_253 = ecx_253 - 0x00000001;
				}
				Mem269[edi_259 + 0x00000000:byte] = 0x00;
				word32 edi_271 = 0x00406380;
				word32 ebp_275 = (ebx_260 << 0x00000004) + 0x00406398;
				do
				{
					word32 esi_286 = ebp_275;
					if (Mem269[ebp_275 + 0x00000000:byte] != 0x00)
						do
						{
							byte cl_337 = Mem269[esi_370 + 0x00000001:byte];
							ecx_253 = DPB(ecx_253, cl_337, 0, 8);
							if (cl_337 == 0x00)
								break;
							ecx_253 = ecx_253 & 0x000000FF;
							word32 eax_346 = (word32) Mem269[esi_370 + 0x00000000:byte];
							if (eax_346 <=u (ecx_253 & 0x000000FF))
							{
								byte dl_359 = Mem269[edi_271 + 0x00000000:byte];
								do
								{
									Mem363[eax_346 + 0x00408A79:byte] = Mem269[eax_346 + 0x00408A79:byte] | dl_359;
									eax_346 = eax_346 + 0x00000001;
								} while (eax_346 <=u (ecx_253 & 0x000000FF));
							}
							esi_286 = esi_370 + 0x00000002;
							word32 esi_370 = esi_286;
						} while (Mem269[esi_370 + 0x00000002:byte] != 0x00);
					edi_271 = edi_271 + 0x00000001;
					ebp_275 = ebp_275 + 0x00000008;
				} while (edi_271 <u 0xFFBF9C84);
				Mem307[0x00408B7C:word32] = eax_20;
				word32 eax_308 = fn004028E0(eax_20);
				word32 ecx_309 = 0x0040638C[ebx_260 * 0x00000010];
				word32 edx_310 = 0x00406390[ebx_260 * 0x00000010];
				Mem311[0x00408B80:word32] = eax_308;
				Mem314[0x00408B88:word32] = ecx_309;
				word32 eax_315 = Mem314[(ebx_260 << 0x00000004) + 0x0040638C + 0x00000008:word32];
				Mem316[0x00408B8C:word32] = edx_310;
				Mem321[0x00408B90:word32] = eax_315;
				return;
			}
			eax_86 = eax_86 + 0x00000030;
			edx_82 = edx_82 + 0x00000001;
		} while (eax_86 <u 0x00406478);
		if (GetCPInfo(eax_20, fp - 0x00000014) == 0x00000001)
		{
			word32 ecx_111 = 0x00000040;
			word32 edi_117 = 0x00408A78;
			while (ecx_111 != 0x00000000)
			{
				Mem121[edi_117 + 0x00000000:word32] = 0x00000000;
				edi_117 = edi_117 + 0x00000004;
				ecx_111 = ecx_111 - 0x00000001;
			}
			Mem125[edi_117 + 0x00000000:byte] = 0x00;
			if (dwLoc14 >u 0x00000001)
			{
				if (bLoc0E != 0x00)
				{
					word32 edx_187 = fp - 0x0000000D + 0x00000001;
					do
					{
						byte cl_197 = Mem125[edx_369 + 0x00000000:byte];
						word32 ecx_198 = DPB(ecx_111, cl_197, 0, 8);
						if (cl_197 == 0x00)
							break;
						ecx_111 = ecx_198 & 0x000000FF;
						word32 eax_206 = (word32) Mem125[edx_369 - 0x00000001:byte];
						if (eax_206 <=u (ecx_198 & 0x000000FF))
							do
							{
								Mem222[eax_206 + 0x00408A79:byte] = Mem125[eax_206 + 0x00408A79:byte] | 0x04;
								eax_206 = eax_206 + 0x00000001;
							} while (eax_206 <=u (ecx_198 & 0x000000FF));
						edx_187 = edx_369 + 0x00000002;
						word32 edx_369 = edx_187;
					} while (Mem125[edx_369 + 0x00000000:byte] != 0x00);
				}
				word32 eax_170 = 0x00000001;
				do
				{
					Mem175[eax_170 + 0x00408A79:byte] = Mem125[eax_170 + 0x00408A79:byte] | 0x08;
					eax_170 = eax_170 + 0x00000001;
				} while (eax_170 <u 0x000000FF);
				Mem182[0x00408B7C:word32] = eax_20;
				Mem186[0x00408B80:word32] = fn004028E0(eax_20);
			}
			else
			{
				Mem227[0x00408B7C:word32] = 0x00000000;
				Mem228[0x00408B80:word32] = 0x00000000;
			}
			Mem142[0x00408B88:word32] = 0x00000000;
			Mem143[0x00408B8C:word32] = 0x00000000;
			Mem144[0x00408B90:word32] = 0x00000000;
			return;
		}
		else if (Mem0[0x00408B94:word32] != 0x00000000)
		{
			fn00402940();
			return;
		}
		else
			return;
	}
fn004026A0_exit:
}

word32 fn00402890(word32 dwArg04)
{
fn00402890_entry:
l00402890:
	Mem4[0x00408B94:word32] = 0x00000000
	word32 eax_13 = dwArg04
	branch dwArg04 != 0xFFFFFFFE l004028B3
l004028A3:
	Mem7[0x00408B94:word32] = 0x00000001
l004028B3:
	branch dwArg04 != 0xFFFFFFFD l004028C8
l004028B8:
	Mem10[0x00408B94:word32] = 0x00000001
l004028C8:
	branch dwArg04 != 0xFFFFFFFC l004028DC
l004028CD:
	eax_13 = Mem4[0x00408BB8:word32]
	Mem15[0x00408B94:word32] = 0x00000001
l004028DC:
	return eax_13
fn00402890_exit:
}

word32 fn004028E0(word32 dwArg04)
{
	if (dwArg04 >u 0xFFFFFC4A)
		;
}

void fn00402940()
{
	word32 ecx_12 = 0x00000040;
	word32 edi_10 = 0x00408A78;
	while (ecx_12 != 0x00000000)
	{
		Mem13[edi_10 + 0x00000000:word32] = 0x00000000;
		edi_10 = edi_10 + 0x00000004;
		ecx_12 = ecx_12 - 0x00000001;
	}
	Mem16[edi_10 + 0x00000000:byte] = 0x00;
	Mem22[0x00408B7C:word32] = 0x00000000;
	Mem23[0x00408B80:word32] = 0x00000000;
	Mem24[0x00408B88:word32] = 0x00000000;
	Mem25[0x00408B8C:word32] = 0x00000000;
	Mem26[0x00408B90:word32] = 0x00000000;
	return;
}

void fn00402970()
{
	fn004026A0(0xFFFFFFFD);
	return;
}

void fn00402980(word32 edi)
{
	word32 ecx_18;
	word32 eax_19 = fn00402FB0(0x00000100, out ecx_18);
	word32 esi_20 = eax_19;
	word32 esp_21 = fp - 0x00000058;
	if (eax_19 == 0x00000000)
	{
		Mem327[fp - 0x0000005C:word32] = 0x0000001B;
		word32 ebx_328;
		word32 ebp_329;
		word32 edi_331;
		fn00401200(edi, out ebx_328, out ebp_329, out esi_20, out edi_331);
		esp_21 = fp - 0x00000058;
	}
	Mem32[0x00408BE0:word32] = esi_20;
	Mem35[0x00408CE0:word32] = 0x00000020;
	if (esi_20 <u esi_20 + 0x00000100)
		do
		{
			Mem318[esi_20 + 0x00000004:byte] = 0x00;
			Mem319[esi_20 + 0x00000000:word32] = 0xFFFFFFFF;
			Mem320[esi_20 + 0x00000005:byte] = 0x0A;
			esi_20 = esi_20 + 0x00000008;
		} while (esi_20 <u Mem320[0x00408BE0:word32] + 0x00000100);
	word32 esp_41 = esp_21 - 0x00000004;
	Mem42[esp_41 + 0x00000000:word32] = esp_21 + 0x00000014;
	GetStartupInfoA(Mem42[esp_41 + 0x00000000:LPSTARTUPINFOA]);
	word32 esp_129 = esp_41 + 0x00000004;
	if (Mem42[esp_41 + 0x0000004A:word16] != 0x0000)
	{
		word32 eax_190 = Mem42[esp_41 + 0x0000004C:word32];
		if (eax_190 != 0x00000000)
		{
			word32 ecx_195 = Mem42[eax_190 + 0x00000000:word32];
			Mem199[esp_41 + 0x00000014:word32] = ecx_195;
			word32 edi_196 = eax_190 + 0x00000004;
			word32 ebp_200 = eax_190 + 0x00000004 + ecx_195;
			if (ecx_195 >= 0x00000800)
				Mem316[esp_41 + 0x00000014:word32] = 0x00000800;
			if (Mem199[0x00408CE0:word32] < Mem199[esp_41 + 0x00000014:word32])
			{
				word32 esi_273 = 0x00408BE4;
				do
				{
					word32 esp_279 = esp_129 - 0x00000004;
					Mem280[esp_279 + 0x00000000:word32] = 0x00000100;
					word32 ecx_282;
					word32 eax_283 = fn00402FB0(dwArg00, out ecx_282);
					esp_129 = esp_279 + 0x00000004;
					if (eax_283 == 0x00000000)
					{
						Mem315[esp_279 + 0x00000014:word32] = Mem280[0x00408CE0:word32];
						goto l00402A96;
					}
					word32 ecx_289 = Mem280[0x00408CE0:word32];
					Mem290[esi_273 + 0x00000000:word32] = eax_283;
					Mem292[0x00408CE0:word32] = ecx_289 + 0x00000020;
					if (eax_283 <u eax_283 + 0x00000100)
						do
						{
							Mem305[eax_283 + 0x00000004:byte] = 0x00;
							Mem306[eax_283 + 0x00000000:word32] = 0xFFFFFFFF;
							Mem307[eax_283 + 0x00000005:byte] = 0x0A;
							eax_283 = eax_283 + 0x00000008;
						} while (eax_283 <u Mem307[esi_273 + 0x00000000:word32] + 0x00000100);
					esi_273 = esi_273 + 0x00000004;
				} while (Mem292[0x00408CE0:word32] < Mem292[esp_279 + 0x00000014:word32]);
			}
l00402A96:
			word32 esi_213 = 0x00000000;
			if (Mem199[esp_129 + 0x00000010:word32] > 0x00000000)
				do
				{
					word32 ecx_226 = Mem199[ebp_200 + 0x00000000:word32];
					if (ecx_226 != 0xFFFFFFFF)
					{
						byte al_244 = Mem199[edi_196 + 0x00000000:byte];
						if ((al_244 & 0x01) != 0x00)
							if ((al_244 & 0x08) == 0x00)
							{
								word32 esp_266 = esp_129 - 0x00000004;
								Mem267[esp_266 + 0x00000000:word32] = ecx_226;
								esp_129 = esp_266 + 0x00000004;
								if (GetFileType(Mem267[esp_266 + 0x00000000:HANDLE]) != 0x00000000)
								{
l00402ABD:
									word32 eax_257 = esi_213 & 0x0000001F;
									word32 ecx_260 = 0x00408BE0[(esi_213 >> 0x00000005) * 0x00000004];
									ecx_260[eax_257 * 0x00000008] = Mem199[ebp_200 + 0x00000000:word32];
									Mem265[ecx_260 + eax_257 * 0x00000008 + 0x00000004:byte] = Mem262[edi_196 + 0x00000000:byte];
								}
							}
							else
								goto l00402ABD;
					}
					esi_213 = esi_213 + 0x00000001;
					edi_196 = edi_196 + 0x00000001;
					ebp_200 = ebp_200 + 0x00000004;
				} while (esi_213 < Mem199[esp_129 + 0x00000010:word32]);
		}
	}
	word32 ebp_127 = GetStdHandle;
	word32 ebx_128 = 0x00000000;
	do
	{
		byte al_119;
		word32 edx_78 = Mem42[0x00408BE0:word32];
		word32 esi_126 = edx_78 + ebx_128 * 0x00000008;
		if (edx_78[ebx_128 * 0x00000008] == 0xFFFFFFFF)
		{
			word32 eax_136;
			Mem135[esi_126 + 0x00000004:byte] = 0x81;
			if (ebx_128 == 0x00000000)
				eax_136 = 0xFFFFFFF6;
			else
				eax_136 = 0x00000000 - (-(ebx_128 - 0x00000001) == 0x00000000) + 0xFFFFFFF5;
			esp_129 = esp_129 - 0x00000004;
			Mem138[esp_129 + 0x00000000:word32] = eax_136;
			ebp_127();
			if (eax_136 != 0xFFFFFFFF)
			{
				Mem151[esp_129 - 0x00000004:word32] = eax_136;
				word32 eax_152 = GetFileType(Mem151[esp_129 - 0x00000004:HANDLE]);
				if (eax_152 != 0x00000000)
				{
					Mem160[esi_126 + 0x00000000:word32] = eax_136;
					if ((eax_152 & 0x000000FF) == 0x00000002)
					{
						al_119 = Mem160[esi_126 + 0x00000004:byte] | 0x40;
l00402B5B:
						Mem131[esi_126 + 0x00000004:byte] = al_119;
					}
					else if ((eax_152 & 0x000000FF) == 0x00000003)
					{
						al_119 = Mem160[esi_126 + 0x00000004:byte] | 0x08;
						goto l00402B5B;
					}
				}
				else
				{
l00402B4F:
					al_119 = Mem138[esi_126 + 0x00000004:byte] | 0x40;
					goto l00402B5B;
				}
			}
			else
				goto l00402B4F;
		}
		else
		{
			al_119 = Mem42[esi_126 + 0x00000004:byte] | 0x80;
			goto l00402B5B;
		}
		ebx_128 = ebx_128 + 0x00000001;
	} while (ebx_128 < 0x00000003);
	word32 esp_101 = esp_129 - 0x00000004;
	Mem102[esp_101 + 0x00000000:word32] = Mem42[0x00408CE0:word32];
	SetHandleCount(Mem102[esp_101 + 0x00000000:UINT]);
	return;
}

word32 fn00402B80()
{
	word32 eax_8 = HeapCreate(0x00000001, 0x00001000, 0x00000000);
	Mem13[0x00408BD4:word32] = eax_8;
	if (eax_8 == 0x00000000)
		return eax_8;
	else if (fn004035E0() == 0x00000000)
	{
		Mem25[fp - 0x00000004:word32] = Mem13[0x00408BD4:word32];
		HeapDestroy(0x00000000);
		return 0x00000000;
	}
	else
		return 0x00000001;
}

word32 fn00402D90(word32 edi)
{
	word32 eax_3 = Mem0[0x00408900:word32];
	if (eax_3 == 0x00000001 || eax_3 == 0x00000000 && Mem0[0x0040606C:word32] == 0x00000001)
	{
		word32 ecx_19 = fn00402DD0(edi, 0x000000FC);
		word32 eax_20 = Mem0[0x00408B98:word32];
		word32 esp_21 = fp;
		if (eax_20 != 0x00000000)
			eax_20();
		Mem32[esp_21 - 0x00000004:word32] = 0x000000FF;
		fn00402DD0(edi, dwArg00);
	}
	return edi;
}

word32 fn00402DD0(word32 edi, word32 dwArg04)
{
	word32 ecx_118 = dwArg04;
	word32 eax_23 = 0x00406498;
	word32 ebp_19 = 0x00000000;
	do
	{
		if (dwArg04 == Mem0[eax_23 + 0x00000000:word32])
			break;
		eax_23 = eax_23 + 0x00000008;
		ebp_19 = ebp_19 + 0x00000001;
	} while (eax_23 <u 0x00406528);
	if (dwArg04 == 0x00406498[ebp_19 * 0x00000008])
	{
		word32 eax_83 = Mem0[0x00408900:word32];
		if (eax_83 == 0x00000001 || eax_83 == 0x00000000 && Mem0[0x0040606C:word32] == 0x00000001)
		{
			word32 esi_138;
			word32 eax_88 = Mem0[0x00408BE0:word32];
			if (eax_88 != 0x00000000)
			{
				esi_138 = Mem0[eax_88 + 0x00000010:word32];
				if (esi_138 == 0xFFFFFFFF)
				{
l00402F6E:
					esi_138 = GetStdHandle(0xFFFFFFF4);
				}
			}
			else
				goto l00402F6E;
			word32 edx_97 = 0x0040649C[ebp_19 * 0x00000008];
			Mem100[fp - 0x000001BC:word32] = 0x00000000;
			word32 edi_103 = edx_97;
			word32 ecx_104 = fp - 0x000001A8 | 0xFFFFFFFF;
			do
			{
				if (ecx_104 == 0x00000000)
					break;
				edi_103 = edi_458 + 0x00000001;
				ecx_104 = ecx_104 - 0x00000001;
				word32 edi_458 = edi_103;
			} while (0x00 != Mem100[edi_458 + 0x00000000:byte]);
			word32 ecx_117 = ~ecx_104;
			WriteFile(esi_138, edx_97, ecx_117 - 0x00000001, fp - 0x000001A8, 0x00000000);
			ecx_118 = ecx_117 - 0x00000001;
			goto l00402F9B;
		}
		else if (dwArg04 != 0x000000FC)
		{
			word32 esp_155 = fp - 0x000001B8;
			if (GetModuleFileNameA(0x00000000, fp - 0x00000104, 0x00000104) == 0x00000000)
			{
				ecx_118 = 0x00000005;
				word32 esi_433 = 0x0040535E;
				word32 edi_434 = fp - 0x00000104 + 0x00000002;
				while (ecx_118 != 0x00000000)
				{
					Mem439[edi_434 + 0x00000000:word32] = Mem0[esi_433 + 0x00000000:word32];
					esi_433 = esi_433 + 0x00000004;
					edi_434 = edi_434 + 0x00000004;
					ecx_118 = ecx_118 - 0x00000001;
				}
				Mem444[edi_434 + 0x00000000:word16] = Mem0[esi_433 + 0x00000000:word16];
				Mem448[edi_434 + 0x00000000:byte] = Mem444[esi_433 + 0x00000000:byte];
			}
			word32 edi_161 = fp - 0x00000104;
			word32 ecx_162 = ecx_118 | 0xFFFFFFFF;
			word32 ebx_167 = fp - 0x00000104;
			do
			{
				if (ecx_162 == 0x00000000)
					break;
				edi_161 = edi_459 + 0x00000001;
				ecx_162 = ecx_162 - 0x00000001;
				word32 edi_459 = edi_161;
			} while (0x00 != Mem0[edi_459 + 0x00000000:byte]);
			word32 ecx_175 = ~ecx_162;
			if (ecx_175 >u 0x0000003C)
			{
				word32 edi_397 = fp - 0x00000104;
				word32 ecx_398 = ecx_175 | 0xFFFFFFFF;
				do
				{
					if (ecx_398 == 0x00000000)
						break;
					edi_397 = edi_466 + 0x00000001;
					ecx_398 = ecx_398 - 0x00000001;
					word32 edi_466 = edi_397;
				} while (0x00 != Mem0[edi_466 + 0x00000000:byte]);
				Mem411[fp - 0x000001BC:word32] = 0x00000003;
				Mem420[fp - 0x000001C4:word32] = ~ecx_398 - 0x00000001 + (fp - 0x0000013F);
				ebx_167 = fn00403D90(dwLoc01C8, 0x00000000, 0x00405358, 0x00000104, edi);
				esp_155 = fp - 0x000001B8;
			}
			word32 ecx_183 = 0x00000006;
			word32 esi_184 = 0x0040533C;
			word32 edi_185 = esp_155 + 0x00000014;
			while (ecx_183 != 0x00000000)
			{
				Mem194[edi_185 + 0x00000000:word32] = Mem0[esi_184 + 0x00000000:word32];
				esi_184 = esi_184 + 0x00000004;
				edi_185 = edi_185 + 0x00000004;
				ecx_183 = ecx_183 - 0x00000001;
			}
			Mem199[edi_185 + 0x00000000:word16] = Mem0[esi_184 + 0x00000000:word16];
			word32 ecx_201 = ecx_183 | 0xFFFFFFFF;
			word32 edi_204 = ebx_167;
			do
			{
				if (ecx_201 == 0x00000000)
					break;
				edi_204 = edi_204 + 0x00000001;
				ecx_201 = ecx_201 - 0x00000001;
			} while (0x00 != Mem199[edi_204 + 0x00000000:byte]);
			word32 ecx_213 = ~ecx_201;
			word32 esi_217 = edi_204 - ecx_213;
			word32 ecx_218 = ecx_213 | 0xFFFFFFFF;
			word32 edi_221 = esp_155 + 0x00000014;
			do
			{
				if (ecx_218 == 0x00000000)
					break;
				edi_221 = edi_221 + 0x00000001;
				ecx_218 = ecx_218 - 0x00000001;
			} while (0x00 != Mem199[edi_221 + 0x00000000:byte]);
			word32 edi_229 = edi_221 - 0x00000001;
			word32 ecx_230 = ecx_213 >>u 0x00000002;
			while (ecx_230 != 0x00000000)
			{
				Mem236[edi_229 + 0x00000000:word32] = Mem199[esi_217 + 0x00000000:word32];
				esi_217 = esi_217 + 0x00000004;
				edi_229 = edi_229 + 0x00000004;
				ecx_230 = ecx_230 - 0x00000001;
			}
			word32 esp_245 = esp_155 - 0x00000004;
			Mem246[esp_245 + 0x00000000:word32] = 0x00012010;
			word32 edx_241 = esp_155 + 0x00000014;
			word32 ecx_242 = ecx_213 & 0x00000003;
			while (ecx_242 != 0x00000000)
			{
				Mem251[edi_229 + 0x00000000:byte] = Mem246[esi_217 + 0x00000000:byte];
				esi_217 = esi_217 + 0x00000001;
				edi_229 = edi_229 + 0x00000001;
				ecx_242 = ecx_242 - 0x00000001;
			}
			word32 edi_255 = 0x00405338;
			word32 ecx_256 = ecx_242 | 0xFFFFFFFF;
			do
			{
				if (ecx_256 == 0x00000000)
					break;
				edi_255 = edi_255 + 0x00000001;
				ecx_256 = ecx_256 - 0x00000001;
			} while (0x00 != Mem246[edi_255 + 0x00000000:byte]);
			Mem270[esp_245 - 0x00000004:word32] = 0x00405310;
			word32 ecx_267 = ~ecx_256;
			word32 esi_271 = edi_255 - ecx_267;
			word32 edi_273 = edx_241;
			word32 ecx_274 = ecx_267 | 0xFFFFFFFF;
			do
			{
				if (ecx_274 == 0x00000000)
					break;
				edi_273 = edi_273 + 0x00000001;
				ecx_274 = ecx_274 - 0x00000001;
			} while (0x00 != Mem270[edi_273 + 0x00000000:byte]);
			word32 edi_284 = edi_273 - 0x00000001;
			word32 ecx_285 = ecx_267 >>u 0x00000002;
			while (ecx_285 != 0x00000000)
			{
				Mem291[edi_284 + 0x00000000:word32] = Mem270[esi_271 + 0x00000000:word32];
				esi_271 = esi_271 + 0x00000004;
				edi_284 = edi_284 + 0x00000004;
				ecx_285 = ecx_285 - 0x00000001;
			}
			word32 ecx_297 = ecx_267 & 0x00000003;
			while (ecx_297 != 0x00000000)
			{
				Mem304[edi_284 + 0x00000000:byte] = Mem270[esi_271 + 0x00000000:byte];
				esi_271 = esi_271 + 0x00000001;
				edi_284 = edi_284 + 0x00000001;
				ecx_297 = ecx_297 - 0x00000001;
			}
			word32 edi_308 = 0x0040649C[ebp_19 * 0x00000008];
			word32 ecx_309 = ecx_297 | 0xFFFFFFFF;
			do
			{
				if (ecx_309 == 0x00000000)
					break;
				edi_308 = edi_308 + 0x00000001;
				ecx_309 = ecx_309 - 0x00000001;
			} while (0x00 != Mem270[edi_308 + 0x00000000:byte]);
			word32 ecx_320 = ~ecx_309;
			word32 esi_322 = edi_308 - ecx_320;
			word32 edi_324 = esp_245 + 0x00000018;
			word32 ecx_325 = ecx_320 | 0xFFFFFFFF;
			do
			{
				if (ecx_325 == 0x00000000)
					break;
				edi_324 = edi_324 + 0x00000001;
				ecx_325 = ecx_325 - 0x00000001;
			} while (0x00 != Mem270[edi_324 + 0x00000000:byte]);
			word32 edi_335 = edi_324 - 0x00000001;
			word32 ecx_336 = ecx_320 >>u 0x00000002;
			while (ecx_336 != 0x00000000)
			{
				Mem342[edi_335 + 0x00000000:word32] = Mem270[esi_322 + 0x00000000:word32];
				esi_322 = esi_322 + 0x00000004;
				edi_335 = edi_335 + 0x00000004;
				ecx_336 = ecx_336 - 0x00000001;
			}
			Mem352[esp_245 - 0x00000008:word32] = esp_245 + 0x00000018;
			word32 ecx_348 = ecx_320 & 0x00000003;
			while (ecx_348 != 0x00000000)
			{
				Mem357[edi_335 + 0x00000000:byte] = Mem352[esi_322 + 0x00000000:byte];
				esi_322 = esi_322 + 0x00000001;
				edi_335 = edi_335 + 0x00000001;
				ecx_348 = ecx_348 - 0x00000001;
			}
			return fn00403D00();
		}
		else
		{
l00402F9B:
			return ecx_118;
		}
	}
	else
		goto l00402F9B;
}

word32 fn00402FB0(word32 dwArg04, ptr32 ecxOut)
{
	word32 ecx_10;
	return fn00402FD0(dwArg04, Mem0[0x00408BCC:word32], out ecx_10);
}

word32 fn00402FD0(word32 dwArg04, word32 dwArg08, ptr32 ecxOut)
{
	*ecxOut = ecx;
	word32 eax_20;
	word32 esi_43 = dwArg04;
	if (dwArg04 <=u 0xFFFFFFE0)
	{
		if (dwArg04 == 0x00000000)
			esi_43 = 0x00000001;
		do
		{
			if (esi_43 <=u 0xFFFFFFE0)
			{
				word32 ecx_77;
				eax_20 = fn00403020(esi_43, out ecx_77);
			}
			else
				eax_20 = 0x00000000;
			if (eax_20 != 0x00000000 || dwArg08 == 0x00000000)
				goto l00403011;
			word32 ecx_69;
		} while (fn00403E90(esi_43, out ecx_69) != 0x00000000);
l0040300F:
		eax_20 = 0x00000000;
	}
	else
		goto l0040300F;
	return eax_20;
}

word32 fn00403020(word32 dwArg04, ptr32 ecxOut)
{
	*ecxOut = ecx;
	word32 eax_26;
	word32 esi_10 = dwArg04 + 0x0000000F & 0xFFFFFFF0;
	if (esi_10 <=u Mem0[0x00408774:word32])
	{
		word32 ecx_49;
		eax_26 = fn00403940(esi_10 >>u 0x00000004, out ecx_49);
		if (eax_26 == 0x00000000)
		{
l00403046:
			eax_26 = HeapAlloc(Mem0[0x00408BD4:word32], 0x00000000, esi_10);
		}
	}
	else
		goto l00403046;
	return eax_26;
}

word32 fn00403060(word32 dwArg04)
{
	if (dwArg04 >=u Mem0[0x00408CE0:word32])
		return 0x00000000;
	else
		return DPB(dwArg04 & 0x0000001F, (0x00408BE0[(dwArg04 >> 0x00000005) * 0x00000004] + 0x00000004)[(dwArg04 & 0x0000001F) * 0x08], 0, 8) & 0x00000040;
}

void fn004030E0(word32 dwArg04)
{
	word32 eax_15 = Mem0[dwArg04 + 0x0000000C:word32];
	if ((byte) (eax_15 & 0x00000003) == 0x02 && (eax_15 & 0x00000108) != 0x00000000)
	{
		word32 eax_65 = Mem0[dwArg04 + 0x00000008:word32];
		word32 edi_68 = Mem0[dwArg04 + 0x00000000:word32] - eax_65;
		if (edi_68 > 0x00000000)
		{
			word32 eax_78 = fn00403F10(Mem0[dwArg04 + 0x00000010:word32], eax_65, edi_68);
			word32 eax_82 = Mem0[dwArg04 + 0x0000000C:word32];
			byte al_83 = (byte) eax_82;
			if (eax_78 != edi_68)
			{
				Mem107[dwArg04 + 0x0000000C:word32] = DPB(eax_82, al_83 | 0x20, 0, 8);
				goto l0040313C;
			}
			else if ((al_83 & 0x80) != 0x00)
			{
				Mem91[dwArg04 + 0x00000004:word32] = 0x00000000;
				Mem92[dwArg04 + 0x0000000C:word32] = DPB(eax_82, al_83 & 0xFD, 0, 8);
				Mem94[dwArg04 + 0x00000000:word32] = Mem92[dwArg04 + 0x00000008:word32];
				return;
			}
			else
			{
l0040313C:
				word32 eax_52 = Mem0[dwArg04 + 0x00000008:word32];
				Mem53[dwArg04 + 0x00000004:word32] = 0x00000000;
				Mem54[dwArg04 + 0x00000000:word32] = eax_52;
				return;
			}
		}
		else
			goto l0040313C;
	}
	else
		goto l0040313C;
}

word32 fn004031E0(word32 dwArg04, word16 wArg08)
{
	word32 eax_117 = dwArg04;
	if (dwArg04 == 0x00000000)
		return dwArg04;
	else if (Mem0[0x00408BA8:word32] == 0x00000000)
	{
		byte cl_91 = (byte) wArg08;
		if (wArg08 <=u 0x00FF)
		{
			Mem94[dwArg04 + 0x00000000:byte] = cl_91;
			return 0x00000001;
		}
		else
		{
l00403243:
			Mem84[0x00408914:word32] = 0x0000002A;
			eax_117 = eax_117 | 0xFFFFFFFF;
l00403250:
			return eax_117;
		}
	}
	else
	{
		eax_117 = WideCharToMultiByte(Mem0[0x00408BB8:word32], 0x00000220, fp + 0x00000008, 0x00000001, dwArg04, Mem0[0x00408780:word32], 0x00000000, fp + 0x00000004);
		if (eax_117 == 0x00000000 || 0x00000000 != 0x00000000)
			goto l00403243;
	}
}

word32 fn00403260(word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, ptr32 edxOut)
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

word32 fn004032D0(word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10)
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

word32 fn00403350(word32 dwArg04, word32 dwArg08)
{
	word32 eax_17 = Mem0[dwArg08 + 0x0000000C:word32];
	byte al_18 = (byte) eax_17;
	word32 ebp_19 = Mem0[dwArg08 + 0x00000010:word32];
	if ((al_18 & 0x82) != 0x00 && (al_18 & 0x40) == 0x00)
	{
		word32 ebx_150 = 0x00000000;
		if ((al_18 & 0x01) != 0x00)
		{
			Mem227[dwArg08 + 0x00000004:word32] = 0x00000000;
			if ((al_18 & 0x10) != 0x00)
			{
				Mem233[dwArg08 + 0x00000000:word32] = Mem227[dwArg08 + 0x00000008:word32];
				Mem234[dwArg08 + 0x0000000C:word32] = DPB(eax_17, al_18 & 0xFE, 0, 8);
l00403389:
				word32 eax_69 = Mem0[dwArg08 + 0x0000000C:word32];
				Mem71[dwArg08 + 0x00000004:word32] = 0x00000000;
				word32 eax_74 = DPB(eax_69, (byte) eax_69 & 0xEF | 0x02, 0, 8);
				Mem78[dwArg08 + 0x0000000C:word32] = eax_74;
				if ((eax_74 & 0x0000010C) == 0x00000000 && (dwArg08 != 0x00406098 && dwArg08 != 0x004060B8 || fn00403060(ebp_19) == 0x00000000))
					fn00404200(dwArg08);
				word32 edi_135;
				if ((Mem78[dwArg08 + 0x0000000C:word32] & 0x00000108) != 0x00000000)
				{
					word32 eax_131 = Mem78[dwArg08 + 0x00000008:word32];
					word32 ecx_134 = Mem78[dwArg08 + 0x00000018:word32];
					edi_135 = Mem78[dwArg08 + 0x00000000:word32] - eax_131;
					Mem140[dwArg08 + 0x00000000:word32] = eax_131 + 0x00000001;
					Mem141[dwArg08 + 0x00000004:word32] = ecx_134 - 0x00000001;
					if (edi_135 > 0x00000000)
					{
						word32 eax_148 = fn00403F10(ebp_19, eax_131, edi_135);
						Mem155[Mem141[dwArg08 + 0x00000008:word32]:byte] = bArg04;
						ebx_150 = eax_148;
					}
					else
					{
						word32 eax_160;
						if (ebp_19 != 0xFFFFFFFF)
							eax_160 = 0x00408BE0[(ebp_19 >> 0x00000005) * 0x00000004] + (ebp_19 & 0x0000001F) * 0x00000008;
						else
							eax_160 = 0x00406478;
						if ((Mem141[eax_160 + 0x00000004:byte] & 0x20) != 0x00)
							fn00404140(ebp_19, 0x00000000, 0x00000002);
						Mem172[Mem141[dwArg08 + 0x00000008:word32]:byte] = bArg04;
					}
				}
				else
				{
					edi_135 = 0x00000001;
					ebx_150 = fn00403F10(ebp_19, fp + 0x00000004, 0x00000001);
				}
				if (ebx_150 != edi_135)
				{
					word32 eax_100 = Mem78[dwArg08 + 0x0000000C:word32];
					word32 eax_103 = DPB(eax_100, (byte) eax_100 | 0x20, 0, 8);
					Mem104[dwArg08 + 0x0000000C:word32] = eax_103;
					return eax_103 | 0xFFFFFFFF;
				}
				else
					return dwArg04 & 0x000000FF;
			}
			else
			{
l00403470:
				word32 eax_41 = DPB(eax_17, al_18 | 0x20, 0, 8);
				Mem44[dwArg08 + 0x0000000C:word32] = eax_41;
				return eax_41 | 0xFFFFFFFF;
			}
		}
		else
			goto l00403389;
	}
	else
		goto l00403470;
}

void fn00403590(word32 ecx, word32 dwArg04)
{
	if (dwArg04 != 0x00000000)
	{
		word32 eax_50 = fn00403880(dwArg04, fp - 0x00000004, fp + 0x00000004);
		if (eax_50 != 0x00000000)
		{
			fn004038E0(ecx, dwArg04, eax_50);
			return;
		}
		else
		{
			HeapFree(Mem0[0x00408BD4:word32], 0x00000000, dwArg04);
l004035D7:
			return;
		}
	}
	else
		goto l004035D7;
}

word32 fn004035E0()
{
	word32 ebp_194;
	if (Mem0[0x00406760:word32] == 0xFFFFFFFF)
	{
		ebp_194 = 0x00406750;
l00403611:
		Mem58[fp - 0x00000010:word32] = 0x00000004;
		Mem60[fp - 0x00000014:word32] = 0x00002000;
		word32 eax_65 = VirtualAlloc(0x00000000, 0x00400000, 0x00000000, 0x00002020);
		word32 esi_160 = eax_65;
		if (eax_65 != 0x00000000)
		{
			Mem87[fp - 0x00000010:word32] = 0x00000004;
			Mem89[fp - 0x00000014:word32] = 0x00001000;
			Mem91[fp - 0x00000018:word32] = 0x00010000;
			Mem93[fp - 0x0000001C:word32] = eax_65;
			if (VirtualAlloc(0x00000000, 0x00400000, 0x00002000, 0x00000004) == 0x00000000)
			{
				Mem187[fp - 0x00000010:word32] = 0x00008000;
				Mem189[fp - 0x00000014:word32] = 0x00000000;
				Mem191[fp - 0x00000018:word32] = eax_65;
				VirtualFree(0x00010000, 0x00001000, 0x00000004);
l00403725:
				if (ebp_194 != 0x00406750)
					HeapFree(Mem60[0x00408BD4:word32], 0x00000000, ebp_194);
l0040373C:
				return 0x00000000;
			}
			else
			{
				if (ebp_194 == 0x00406750)
				{
					if (Mem93[0x00406750:word32] == 0x00000000)
						Mem179[0x00406750:word32] = 0x00406750;
					if (Mem93[0x00406754:word32] == 0x00000000)
						Mem178[0x00406754:word32] = 0x00406750;
				}
				else
				{
					Mem180[ebp_194 + 0x00000000:word32] = 0x00406750;
					Mem182[ebp_194 + 0x00000004:word32] = Mem180[0x00406754:word32];
					Mem183[0x00406754:word32] = ebp_194;
					Mem185[Mem183[ebp_194 + 0x00000004:word32]:word32] = ebp_194;
				}
				Mem105[ebp_194 + 0x00000014:word32] = eax_65 + 0x00400000;
				Mem106[ebp_194 + 0x00000010:word32] = eax_65;
				word32 ecx_103 = ebp_194 + 0x00000018;
				Mem107[ebp_194 + 0x00000008:word32] = ecx_103;
				Mem108[ebp_194 + 0x0000000C:word32] = ebp_194 + 0x00000098;
				word32 eax_109 = 0x00000000;
				do
				{
					ecx_103 = ecx_103 + 0x00000008;
					Mem127[ecx_103 - 0x00000008:word32] = ((word32) (eax_109 >= 0x00000010) - 0x00000001 & 0x000000F1) - 0x00000001;
					Mem128[ecx_103 - 0x00000004:word32] = 0x000000F1;
					eax_109 = eax_109 + 0x00000001;
				} while (eax_109 < 0x00000400);
				word32 ecx_131 = 0x00004000;
				word32 edi_136 = eax_65;
				while (ecx_131 != 0x00000000)
				{
					Mem139[edi_136 + 0x00000000:word32] = 0x00000000;
					edi_136 = edi_136 + 0x00000004;
					ecx_131 = ecx_131 - 0x00000001;
				}
				if (eax_65 <u Mem128[ebp_194 + 0x00000010:word32] + 0x00010000)
					do
					{
						Mem162[esi_160 + 0x00000004:word32] = 0x000000F0;
						Mem163[esi_160 + 0x00000000:word32] = esi_160 + 0x00000008;
						Mem164[esi_160 + 0x000000F8:byte] = 0xFF;
						esi_160 = esi_160 + 0x00001000;
					} while (esi_160 <u Mem164[ebp_194 + 0x00000010:word32] + 0x00010000);
				return ebp_194;
			}
		}
		else
			goto l00403725;
	}
	else
	{
		word32 eax_204 = HeapAlloc(Mem0[0x00408BD4:word32], 0x00000000, 0x00002020);
		ebp_194 = eax_204;
		if (eax_204 != 0x00000000)
			goto l00403611;
		else
			goto l0040373C;
	}
}

void fn00403750(word32 dwArg04)
{
	VirtualFree(Mem0[dwArg04 + 0x00000010:word32], 0x00000000, 0x00008000);
	if (Mem0[0x00408770:word32] == dwArg04)
		Mem51[0x00408770:word32] = Mem0[dwArg04 + 0x00000004:word32];
	if (dwArg04 != 0x00406750)
	{
		word32 edx_29 = Mem0[dwArg04 + 0x00000004:word32];
		word32 eax_30 = Mem0[dwArg04 + 0x00000000:word32];
		Mem32[fp - 0x00000008:word32] = dwArg04;
		Mem34[fp - 0x0000000C:word32] = 0x00000000;
		Mem35[edx_29 + 0x00000000:word32] = eax_30;
		Mem38[Mem35[dwArg04 + 0x00000000:word32] + 0x00000004:word32] = Mem35[dwArg04 + 0x00000004:word32];
		HeapFree(Mem38[0x00408BD4:word32], 0x00000000, 0x00008000);
		return;
	}
	else
	{
		Mem46[0x00406760:word32] = 0xFFFFFFFF;
		return;
	}
}

void fn004037B0(word32 dwArg04)
{
	word32 edi_106 = Mem0[0x00406754:word32];
	do
		if (Mem0[edi_106 + 0x00000010:word32] != 0xFFFFFFFF)
		{
			word32 ebp_102 = 0x00000000;
			word32 esi_143 = edi_106 + 0x00002010;
			word32 ebx_142 = 0x003FF000;
			do
			{
				if (Mem0[esi_143 + 0x00000000:word32] == 0x000000F0)
				{
					word32 eax_150 = Mem0[edi_106 + 0x00000010:word32] + ebx_142;
					Mem152[fp - 0x00000018:word32] = 0x00001000;
					if (VirtualFree(eax_150, 0x00001000, 0x00004000) != 0x00000000)
					{
						Mem160[esi_143 + 0x00000000:word32] = 0xFFFFFFFF;
						Mem163[0x00408BBC:word32] = Mem160[0x00408BBC:word32] - 0x00000001;
						word32 eax_164 = Mem163[edi_106 + 0x0000000C:word32];
						if (eax_164 == 0x00000000 || eax_164 >u esi_143)
							Mem178[edi_106 + 0x0000000C:word32] = esi_143;
						word32 eax_172 = dwArg04 - 0x00000001;
						ebp_102 = ebp_102 + 0x00000001;
						dwArg04 = eax_172;
						if (eax_172 == 0x00000000)
							break;
					}
				}
l00403820:
				ebx_142 = ebx_142 - 0x00001000;
				esi_143 = esi_143 - 0x00000008;
			} while (ebx_142 >= 0x00000000);
l0040382D:
			edi_106 = Mem0[edi_106 + 0x00000004:word32];
			if (ebp_102 != 0x00000000 && Mem0[edi_106 + 0x00000018:word32] == 0xFFFFFFFF)
			{
				word32 eax_112 = 0x00000001;
				word32 ecx_113 = edi_106 + 0x00000020;
				do
				{
					if (Mem0[ecx_113 + 0x00000000:word32] != 0xFFFFFFFF)
						break;
					eax_112 = eax_112 + 0x00000001;
					ecx_113 = ecx_113 + 0x00000008;
				} while (eax_112 < 0x00000400);
				if (eax_112 == 0x00000400)
					fn00403750(edi_106);
			}
		}
	while (edi_106 == Mem0[0x00406754:word32] || dwArg04 <= 0x00000000);
	return;
}

word32 fn00403880(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	byte cl_4 = (byte) dwArg04;
	word32 eax_28 = 0x00406750;
	while (dwArg04 <=u Mem0[eax_28 + 0x00000010:word32] || dwArg04 >=u Mem0[eax_28 + 0x00000014:word32])
	{
		eax_28 = Mem0[eax_28 + 0x00000000:word32];
		if (eax_28 == 0x00406750)
			goto l004038D6;
	}
	if ((cl_4 & 0x0F) == 0x00 && (dwArg04 & 0x00000FFF) >=u 0x00000100)
	{
		Mem43[dwArg08 + 0x00000000:word32] = eax_28;
		Mem49[dwArg0C + 0x00000000:word32] = dwArg04 & 0xFFFFF000;
		return (dwArg04 - (dwArg04 & 0xFFFFF000) - 0x00000100 >> 0x00000004) + 0x00000008 + (dwArg04 & 0xFFFFF000);
	}
	else
		return 0x00000000;
}

void fn004038E0(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	word32 ecx_11 = dwArg08 - Mem0[dwArg04 + 0x00000010:word32];
	word32 eax_14 = dwArg04 + 0x00000018 + (ecx_11 >> 0x0000000C) * 0x00000008;
	Mem20[eax_14 + 0x00000000:word32] = (dwArg04 + 0x00000018)[(ecx_11 >> 0x0000000C) * 0x00000008] + (word32) Mem0[dwArg0C + 0x00000000:byte];
	Mem21[dwArg0C + 0x00000000:byte] = 0x00;
	word32 ecx_22 = Mem21[eax_14 + 0x00000000:word32];
	Mem23[eax_14 + 0x00000004:word32] = 0x000000F1;
	if (ecx_22 == 0x000000F0)
	{
		word32 eax_33 = Mem23[0x00408BBC:word32];
		Mem37[0x00408BBC:word32] = eax_33 + 0x00000001;
		if (eax_33 == 0xFFFFFFE1)
			fn004037B0(0x00000010);
	}
	return;
}

word32 fn00403940(word32 dwArg04, ptr32 ecxOut)
{
	word32 ecx_301 = Mem0[0x00408770:word32];
	byte bl_12 = (byte) dwArg04;
	word32 dwLoc04_104 = ecx_301;
	while (true)
	{
		word32 eax_43 = Mem0[ecx_301 + 0x00000010:word32];
		if (eax_43 != 0xFFFFFFFF)
		{
			word32 edi_283 = Mem0[ecx_301 + 0x00000008:word32];
			word32 ebp_284 = ecx_301 + 0x00002018;
			word32 esi_290 = (edi_283 - ecx_301 - 0x00000018 >> 0x00000003 << 0x0000000C) + eax_43;
			if (edi_283 <u ebp_284)
				do
				{
					word32 eax_378 = Mem0[edi_283 + 0x00000000:word32];
					if (eax_378 >= dwArg04 && Mem0[edi_283 + 0x00000004:word32] >u dwArg04)
					{
						word32 eax_402 = fn00403B80(esi_290, eax_378, dwArg04);
						if (eax_402 != 0x00000000)
						{
							Mem410[0x00408770:word32] = dwLoc04_104;
							Mem414[edi_283 + 0x00000000:word32] = Mem410[edi_283 + 0x00000000:word32] - dwArg04;
							Mem415[dwLoc04_104 + 0x00000008:word32] = edi_283;
							word32 ecx_424;
							*ecxOut = dwLoc04_104;
							return eax_402;
						}
						Mem408[edi_283 + 0x00000004:word32] = dwArg04;
						ecx_301 = dwLoc04_104;
						goto l0040399C;
					}
l0040399C:
					edi_283 = edi_283 + 0x00000008;
					esi_290 = esi_290 + 0x00001000;
				} while (edi_283 <u ebp_284);
l004039A9:
			word32 ebp_303 = Mem0[ecx_301 + 0x00000008:word32];
			word32 edi_304 = Mem0[ecx_301 + 0x00000010:word32];
			word32 esi_305 = ecx_301 + 0x00000018;
			if (esi_305 <u ebp_303)
				do
				{
					word32 eax_319 = Mem0[esi_305 + 0x00000000:word32];
					if (eax_319 >= dwArg04 && Mem0[esi_305 + 0x00000004:word32] >u dwArg04)
					{
						word32 eax_343 = fn00403B80(edi_304, eax_319, dwArg04);
						if (eax_343 != 0x00000000)
						{
							Mem351[0x00408770:word32] = dwLoc04_104;
							Mem355[esi_305 + 0x00000000:word32] = Mem351[esi_305 + 0x00000000:word32] - dwArg04;
							Mem356[dwLoc04_104 + 0x00000008:word32] = esi_305;
							word32 ecx_365;
							*ecxOut = dwLoc04_104;
							return eax_343;
						}
						Mem349[esi_305 + 0x00000004:word32] = dwArg04;
						ecx_301 = dwLoc04_104;
						goto l004039D7;
					}
l004039D7:
					esi_305 = esi_305 + 0x00000008;
					edi_304 = edi_304 + 0x00001000;
				} while (esi_305 <u ebp_303);
		}
l004039E4:
		word32 ecx_79 = Mem0[ecx_301 + 0x00000000:word32];
		if (ecx_301 == Mem0[0x00408770:word32])
		{
			word32 ebp_125 = 0x00406750;
			while (Mem0[ebp_125 + 0x00000010:word32] == (ecx_301 | 0xFFFFFFFF) || Mem0[ebp_125 + 0x0000000C:word32] == 0x00000000)
			{
				ebp_125 = Mem0[ebp_125 + 0x00000000:word32];
				if (ebp_125 == 0x00406750)
				{
					word32 eax_128 = fn004035E0();
					if (eax_128 != 0x00000000)
					{
						word32 ecx_134 = Mem0[eax_128 + 0x00000010:word32];
						Mem135[ecx_134 + 0x00000008:byte] = bl_12;
						Mem137[0x00408770:word32] = eax_128;
						Mem138[ecx_134 + 0x00000000:word32] = ecx_134 + 0x00000008 + dwArg04;
						Mem142[ecx_134 + 0x00000004:word32] = 0x000000F0 - dwArg04;
						Mem146[eax_128 + 0x00000018:word32] = Mem142[eax_128 + 0x00000018:word32] - (dwArg04 & 0x000000FF);
						word32 ecx_156;
						*ecxOut = ecx_301;
						return ecx_134 + 0x00000100;
					}
					else
						goto l00403B6B;
				}
			}
			word32 eax_162 = Mem0[ebp_125 + 0x0000000C:word32] + 0x00000008;
			word32 edi_171 = (eax_162 - ebp_125 - 0x00000018 >> 0x00000003 << 0x0000000C) + Mem0[ebp_125 + 0x00000010:word32];
			word32 esi_172 = 0x00000000;
			eax_274 = eax_162;
			if (Mem0[eax_162 + 0x00000000:word32] == (ecx_301 | 0xFFFFFFFF))
				do
				{
					word32 eax_274;
					if (esi_172 >= 0x00000010)
						break;
					eax_274 = eax_426 + 0x00000008;
					esi_172 = esi_172 + 0x00000001;
					word32 eax_426 = eax_274;
				} while (Mem0[eax_426 + 0x00000000:word32] == (ecx_301 | 0xFFFFFFFF));
			word32 eax_181 = esi_172 << 0x0000000C;
			dwLoc04_104 = eax_181;
			if (VirtualAlloc(edi_171, eax_181, 0x00001000, 0x00000004) == edi_171)
			{
				word32 edx_193 = eax_162;
				word32 ecx_198 = eax_162 + 0x00000004;
				if (esi_172 > 0x00000000)
				{
					word32 eax_255 = edi_171 + 0x00000004;
					do
					{
						Mem260[eax_255 + 0x00000000:word32] = 0x000000F0;
						Mem261[eax_255 - 0x00000004:word32] = eax_255 + 0x00000004;
						Mem262[eax_255 + 0x000000F4:byte] = 0xFF;
						Mem263[ecx_198 + 0x00000000:word32] = 0x000000F0;
						Mem264[ecx_198 + 0x00000000:word32] = 0x000000F1;
						eax_255 = eax_255 + 0x00001000;
						ecx_198 = ecx_198 + 0x00000008;
						esi_172 = esi_172 - 0x00000001;
					} while (esi_172 != 0x00000000);
					edx_193 = eax_162;
				}
				Mem203[0x00408770:word32] = ebp_125;
				word32 eax_202 = ebp_125 + 0x00002018;
				byte C_208 = cond(ecx_198 - eax_202);
				if (ecx_198 <u eax_202)
				{
					do
					{
						if (Mem203[ecx_198 + 0x00000000:word32] == 0xFFFFFFFF)
							break;
						ecx_198 = ecx_198 + 0x00000008;
					} while (ecx_198 <u eax_202);
					C_208 = cond(ecx_198 - eax_202);
				}
				Mem218[ebp_125 + 0x0000000C:word32] = 0x00000000 - C_208 & ecx_198;
				Mem219[edi_171 + 0x00000008:byte] = bl_12;
				Mem220[ebp_125 + 0x00000008:word32] = edx_193;
				Mem223[edx_193 + 0x00000000:word32] = Mem220[edx_193 + 0x00000000:word32] - dwArg04;
				Mem228[edi_171 + 0x00000004:word32] = Mem223[edi_171 + 0x00000004:word32] - dwArg04;
				Mem229[edi_171 + 0x00000000:word32] = edi_171 + 0x00000008 + dwArg04;
				word32 ecx_239;
				*ecxOut = eax_181;
				return edi_171 + 0x00000100;
			}
			else
			{
l00403B6B:
				word32 ecx_120;
				*ecxOut = dwLoc04_104;
				return 0x00000000;
			}
fn00403940_exit:
		}
	}
}

word32 fn00403B80(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	word32 ecx_22 = Mem0[dwArg04 + 0x00000000:word32];
	byte dl_4 = (byte) dwArg0C;
	word32 eax_20 = Mem0[dwArg04 + 0x00000004:word32];
	word32 esi_103 = ecx_22;
	if (eax_20 >=u dwArg0C)
	{
		Mem42[ecx_22 + 0x00000000:byte] = dl_4;
		if (ecx_22 + dwArg0C <u dwArg04 + 0x000000F8)
		{
			word32 eax_66 = Mem42[dwArg04 + 0x00000004:word32] - dwArg0C;
			Mem68[dwArg04 + 0x00000000:word32] = Mem42[dwArg04 + 0x00000000:word32] + dwArg0C;
			Mem69[dwArg04 + 0x00000004:word32] = eax_66;
		}
		else
		{
			Mem71[dwArg04 + 0x00000004:word32] = 0x00000000;
			Mem72[dwArg04 + 0x00000000:word32] = dwArg04 + 0x00000008;
		}
		return (ecx_22 + 0x00000008 << 0x00000004) - (dwArg04 * 0x00000003 + (dwArg04 * 0x00000003) * 0x00000004);
	}
	else
	{
		word32 eax_73 = eax_20 + ecx_22;
		if (Mem0[eax_73 + 0x00000000:byte] != 0x00)
			esi_103 = eax_73;
		word32 ecx_132;
		word32 eax_211 = esi_103 + dwArg0C;
		word32 ebx_136 = dwArg08;
		ecx_132 = ecx_22;
		ecx_132 = ecx_22;
		if (eax_211 <u dwArg04 + 0x000000F8)
		{
l00403BEF:
			do
			{
				byte al_216 = Mem0[esi_103 + 0x00000000:byte];
				word32 eax_217 = DPB(eax_211, al_216, 0, 8);
				if (al_216 == 0x00)
				{
					word32 eax_232 = esi_103 + 0x00000001;
					word32 ecx_234 = 0x00000001;
					if (Mem0[esi_103 + 0x00000001:byte] == 0x00)
						do
						{
							eax_232 = eax_232 + 0x00000001;
							ecx_234 = ecx_234 + 0x00000001;
						} while (Mem0[eax_232 + 0x00000000:byte] == 0x00);
					if (ecx_234 >=u dwArg0C)
					{
						word32 eax_252 = esi_103 + dwArg0C;
						if (eax_252 <u dwArg04 + 0x000000F8)
						{
							Mem259[dwArg04 + 0x00000000:word32] = eax_252;
							Mem260[dwArg04 + 0x00000004:word32] = ecx_234 - dwArg0C;
						}
						else
						{
							Mem262[dwArg04 + 0x00000000:word32] = dwArg04 + 0x00000008;
l00403CCF:
							Mem130[dwArg04 + 0x00000004:word32] = 0x00000000;
						}
l00403CD6:
						Mem105[esi_103 + 0x00000000:byte] = dl_4;
						return (esi_103 + 0x00000008 << 0x00000004) - (dwArg04 * 0x00000003 + (dwArg04 * 0x00000003) * 0x00000004);
					}
					if (esi_103 != ecx_22)
					{
						ebx_136 = ebx_136 - ecx_234;
						if (ebx_136 >=u dwArg0C)
						{
							ecx_132 = ecx_22;
							esi_103 = eax_232;
							goto l00403C38;
						}
						else
							goto l00403CEB;
					}
					Mem244[dwArg04 + 0x00000004:word32] = ecx_234;
					esi_103 = eax_232;
					ecx_132 = ecx_22;
					goto l00403C38;
				}
				esi_103 = esi_103 + (eax_217 & 0x000000FF);
l00403C38:
				eax_211 = dwArg04 + 0x000000F8;
			} while (esi_103 + dwArg0C <u dwArg04 + 0x000000F8);
l00403C64:
			esi_103 = dwArg04 + 0x00000008;
			if (dwArg04 + 0x00000008 <u ecx_132)
			{
l00403C6D:
				do
				{
					if (esi_103 + dwArg0C >=u dwArg04 + 0x000000F8)
						goto l00403CEB;
					byte al_150 = Mem0[esi_103 + 0x00000000:byte];
					word32 eax_151 = DPB(dwArg04 + 0x000000F8, al_150, 0, 8);
					if (al_150 == 0x00)
					{
						word32 eax_177 = esi_103 + 0x00000001;
						word32 ecx_179 = 0x00000001;
						if (Mem0[esi_103 + 0x00000001:byte] == 0x00)
							do
							{
								eax_177 = eax_177 + 0x00000001;
								ecx_179 = ecx_179 + 0x00000001;
							} while (Mem0[eax_177 + 0x00000000:byte] == 0x00);
						if (ecx_179 >=u dwArg0C)
						{
							word32 eax_190 = esi_103 + dwArg0C;
							if (eax_190 <u dwArg04 + 0x000000F8)
							{
								Mem197[dwArg04 + 0x00000000:word32] = eax_190;
								Mem198[dwArg04 + 0x00000004:word32] = ecx_179 - dwArg0C;
							}
							else
							{
								Mem199[dwArg04 + 0x00000000:word32] = dwArg04 + 0x00000008;
								goto l00403CCF;
							}
						}
						ebx_136 = ebx_136 - ecx_179;
						if (ebx_136 <u dwArg0C)
							goto l00403CEB;
						esi_103 = eax_177;
						goto l00403CAA;
					}
					esi_103 = esi_103 + (eax_151 & 0x000000FF);
l00403CAA:
				} while (esi_103 <u ecx_22);
				return 0x00000000;
			}
			else
			{
l00403CEB:
				return 0x00000000;
			}
		}
		else
			goto l00403C64;
	}
fn00403B80_exit:
}

word32 fn00403D00()
{
	word32 ebx_47 = 0x00000000;
	word32 esp_121 = fp - 0x0000000C;
	if (Mem0[0x00408BC0:word32] == 0x00000000)
	{
		word32 eax_81 = LoadLibraryA(0x004053A4);
		if (eax_81 != 0x00000000)
		{
			Mem100[fp - 0x00000010:word32] = 0x00405398;
			word32 eax_103 = GetProcAddress(eax_81, 0x004053A4);
			Mem108[0x00408BC0:word32] = eax_103;
			if (eax_103 != 0x00000000)
			{
				Mem110[fp - 0x00000010:word32] = 0x00405388;
				word32 eax_113 = GetProcAddress(eax_81, 0x00405398);
				Mem116[fp - 0x00000010:word32] = 0x00405374;
				Mem119[0x00408BC4:word32] = eax_113;
				Mem122[0x00408BC8:word32] = GetProcAddress(eax_81, 0x00405398);
				esp_121 = fp - 0x0000000C;
l00403D50:
				word32 eax_36 = Mem0[0x00408BC4:word32];
				if (eax_36 != 0x00000000)
				{
					eax_36();
					ebx_47 = eax_36;
				}
				if (ebx_47 != 0x00000000)
				{
					word32 eax_71 = Mem0[0x00408BC8:word32];
					if (eax_71 != 0x00000000)
					{
						Mem76[fp - 0x00000010:word32] = ebx_47;
						esp_121 = fp - 0x00000010;
						eax_71();
						ebx_47 = eax_71;
					}
				}
				word32 eax_54 = Mem0[esp_121 + 0x00000018:word32];
				word32 ecx_55 = Mem0[esp_121 + 0x00000014:word32];
				word32 edx_56 = Mem0[esp_121 + 0x00000010:word32];
				word32 esp_57 = esp_121 - 0x00000004;
				Mem58[esp_57 + 0x00000000:word32] = eax_54;
				Mem60[esp_57 - 0x00000004:word32] = ecx_55;
				Mem62[esp_57 - 0x00000008:word32] = edx_56;
				Mem64[esp_57 - 0x0000000C:word32] = ebx_47;
				Mem64[0x00408BC0:word32]();
				return ecx_55;
			}
			else
			{
l00403D89:
				return ecx;
			}
		}
		else
			goto l00403D89;
	}
	else
		goto l00403D50;
}

word32 fn00403D90(word32 dwArg00, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10)
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
l00403DD5:
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
l00403DE2:
			}
		}
	}
}

word32 fn00403E90(word32 dwArg04, ptr32 ecxOut)
{
	*ecxOut = ecx;
	word32 eax_3 = Mem0[0x00408BD0:word32];
	if (eax_3 != 0x00000000)
	{
		word32 ecx_28 = dwArg04;
		*ecxOut = ecx_28;
		eax_3();
		if (eax_3 != 0x00000000)
			return 0x00000001;
		else
		{
l00403EAD:
			return 0x00000000;
		}
	}
	else
		goto l00403EAD;
}

word32 fn00403F10(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	word32 eax_171 = dwArg04;
	if (dwArg04 <u Mem0[0x00408CE0:word32])
	{
		word32 esi_110 = (dwArg04 & 0x0000001F) << 0x00000003;
		word32 edi_109 = (dwArg04 >> 0x00000005) * 0x00000004 + 0x00408BE0;
		byte cl_113 = Mem0[esi_110 + 0x00000004 + 0x00408BE0[(dwArg04 >> 0x00000005) * 0x00000004]:byte];
		if ((cl_113 & 0x01) != 0x00)
		{
			word32 dwLoc041C_123 = 0x00000000;
			word32 dwLoc040C_124 = 0x00000000;
			if (dwArg0C == 0x00000000)
				return 0x00000000;
			else
			{
				if ((cl_113 & 0x20) != 0x00)
					fn00404140(dwArg04, 0x00000000, 0x00000002);
				word32 ebp_164;
				word32 dwLoc0414_149;
				word32 eax_145 = Mem0[edi_109 + 0x00000000:word32] + esi_110;
				if ((Mem0[eax_145 + 0x00000004:byte] & 0x80) != 0x00)
				{
					ebp_164 = dwArg08;
					dwLoc0414_149 = 0x00000000;
					word32 edi_243 = dwArg08;
					if (true)
					{
						do
						{
							word32 eax_262 = fp - 0x00000404;
							do
							{
								if (edi_243 - dwArg08 >=u dwArg0C)
									break;
								byte cl_326 = Mem0[edi_243 + 0x00000000:byte];
								edi_243 = edi_243 + 0x00000001;
								if (cl_326 == 0x0A)
								{
									Mem343[eax_262 + 0x00000000:byte] = 0x0D;
									eax_262 = eax_262 + 0x00000001;
									dwLoc040C_124 = dwLoc040C_124 + 0x00000001;
								}
								Mem335[eax_262 + 0x00000000:byte] = cl_326;
								eax_262 = eax_262 + 0x00000001;
							} while (eax_262 - (fp - 0x00000404) < 0x00000400);
							word32 esi_285 = eax_262 - (fp - 0x00000404);
							if (WriteFile(Mem0[esi_110 + Mem0[edi_109 + 0x00000000:word32]:word32], fp - 0x00000404, esi_285, fp - 0x00000410, 0x00000000) == 0x00000000)
							{
								Mem325[fp - 0x00000414:word32] = GetLastError();
								goto l00404035;
							}
							dwLoc041C_123 = dwLoc041C_123 + dwLoc0410;
						} while (dwLoc0410 < esi_285 || edi_243 - dwArg08 >=u dwArg0C);
l00404035:
					}
				}
				else
				{
					word32 edx_348 = Mem0[eax_145 + 0x00000000:word32];
					Mem351[fp - 0x00000430:word32] = 0x00000000;
					Mem354[fp - 0x00000434:word32] = fp - 0x00000410;
					ebp_164 = dwArg08;
					if (WriteFile(edx_348, dwArg08, dwArg0C, 0x00000000, 0x00000002) != 0x00000000)
					{
						Mem368[fp - 0x0000041C:word32] = dwLoc0410;
						dwLoc0414_149 = 0x00000000;
					}
					else
						dwLoc0414_149 = GetLastError();
				}
				if (dwLoc041C_123 == 0x00000000)
				{
					eax_171 = dwLoc0414_149;
					if (dwLoc0414_149 == 0x00000000)
						if ((Mem0[esi_110 + 0x00000004 + Mem0[edi_109 + 0x00000000:word32]:byte] & 0x40) != 0x00 && Mem0[ebp_164 + 0x00000000:byte] == 0x1A)
							return 0x00000000;
						else
						{
							Mem212[0x00408914:word32] = 0x0000001C;
l004040C7:
							Mem77[0x00408918:word32] = 0x00000000;
							return eax_171 | 0xFFFFFFFF;
						}
					else if (dwLoc0414_149 == 0x00000005)
					{
						Mem177[0x00408918:word32] = dwLoc0414_149;
						Mem178[0x00408914:word32] = 0x00000009;
						return dwLoc0414_149 | 0xFFFFFFFF;
					}
					else
						return fn004043D0(dwLoc0414_149) | 0xFFFFFFFF;
				}
				else
					return dwLoc041C_123 - dwLoc040C_124;
			}
		}
		else
		{
l004040BD:
			Mem93[0x00408914:word32] = 0x00000009;
			goto l004040C7;
		}
	}
	else
		goto l004040BD;
}

void fn00404140(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	if (dwArg04 <u Mem0[0x00408CE0:word32])
	{
		word32 ebx_59 = (dwArg04 >> 0x00000005) * 0x00000004 + 0x00408BE0;
		word32 esi_60 = (dwArg04 & 0x0000001F) << 0x00000003;
		if ((Mem0[0x00408BE0[(dwArg04 >> 0x00000005) * 0x00000004] + 0x00000004 + esi_60:byte] & 0x01) != 0x00)
		{
			word32 eax_66 = fn00404380(dwArg04);
			if (eax_66 == 0xFFFFFFFF)
			{
				Mem70[0x00408914:word32] = 0x00000009;
				return;
			}
			else
			{
				word32 eax_128;
				if (SetFilePointer(eax_66, dwArg08, 0x00000000, dwArg0C) == 0xFFFFFFFF)
					eax_128 = GetLastError();
				else
					eax_128 = 0x00000000;
				if (eax_128 != 0x00000000)
				{
					fn004043D0(eax_128);
					return;
				}
				else
				{
					word32 eax_114 = Mem0[ebx_59 + 0x00000000:word32];
					Mem120[eax_114 + 0x00000004 + esi_60:byte] = Mem0[eax_114 + 0x00000004 + esi_60:byte] & 0xFD;
					return;
				}
			}
		}
		else
		{
l004041E2:
			Mem42[0x00408914:word32] = 0x00000009;
			Mem43[0x00408918:word32] = 0x00000000;
			return;
		}
	}
	else
		goto l004041E2;
}

void fn00404200(word32 dwArg04)
{
	Mem8[0x00408910:word32] = Mem0[0x00408910:word32] + 0x00000001;
	word32 ecx_9;
	word32 eax_10 = fn00402FB0(0x00001000, out ecx_9);
	Mem17[dwArg04 + 0x00000008:word32] = eax_10;
	word32 eax_18 = Mem17[dwArg04 + 0x0000000C:word32];
	byte al_19 = (byte) eax_18;
	if (eax_10 != 0x00000000)
	{
		word32 edx_25 = Mem17[dwArg04 + 0x00000008:word32];
		Mem30[dwArg04 + 0x0000000C:word32] = DPB(eax_18, al_19 | 0x08, 0, 8);
		Mem31[dwArg04 + 0x00000018:word32] = 0x00001000;
		Mem32[dwArg04 + 0x00000000:word32] = edx_25;
		Mem33[dwArg04 + 0x00000004:word32] = 0x00000000;
		return;
	}
	else
	{
		Mem38[dwArg04 + 0x00000018:word32] = 0x00000002;
		Mem39[dwArg04 + 0x0000000C:word32] = DPB(eax_18, al_19 | 0x04, 0, 8);
		Mem42[dwArg04 + 0x00000008:word32] = dwArg04 + 0x00000014;
		Mem43[dwArg04 + 0x00000000:word32] = dwArg04 + 0x00000014;
		Mem44[dwArg04 + 0x00000004:word32] = 0x00000000;
		return;
	}
}

word32 fn00404380(word32 dwArg04)
{
	word32 eax_22 = dwArg04;
	if (dwArg04 <u Mem0[0x00408CE0:word32])
	{
		word32 edx_31 = 0x00408BE0[(dwArg04 >> 0x00000005) * 0x00000004];
		eax_22 = edx_31 + (dwArg04 & 0x0000001F) * 0x00000008;
		if (((edx_31 + 0x00000004)[(dwArg04 & 0x0000001F) * 0x08] & 0x01) != 0x00)
			return Mem0[eax_22 + 0x00000000:word32];
		else
		{
l004043AC:
			Mem23[0x00408914:word32] = 0x00000009;
			Mem24[0x00408918:word32] = 0x00000000;
			return eax_22 | 0xFFFFFFFF;
		}
	}
	else
		goto l004043AC;
}

word32 fn004043D0(word32 dwArg04)
{
	Mem4[0x00408918:word32] = dwArg04;
	word32 ecx_10 = 0x00000000;
	word32 eax_19 = 0x00408790;
	do
	{
		if (dwArg04 == Mem4[eax_19 + 0x00000000:word32])
		{
			word32 eax_40 = 0x00408794[ecx_10 * 0x00000008];
			Mem41[0x00408914:word32] = eax_40;
			return eax_40;
		}
		eax_19 = eax_19 + 0x00000008;
		ecx_10 = ecx_10 + 0x00000001;
	} while (eax_19 <u 0x004088F8);
	if (dwArg04 >=u 0x00000013 && dwArg04 <=u 0x00000024)
	{
		Mem39[0x00408914:word32] = 0x0000000D;
		return eax_19;
	}
	else
	{
		if (dwArg04 >=u 0x000000BC)
		{
			Mem36[0x00408914:word32] = 0x00000008;
			if (dwArg04 >u 0x000000CA)
			{
l0040441F:
				Mem33[0x00408914:word32] = 0x00000016;
			}
		}
		else
			goto l0040441F;
		return eax_19;
	}
fn004043D0_exit:
}

