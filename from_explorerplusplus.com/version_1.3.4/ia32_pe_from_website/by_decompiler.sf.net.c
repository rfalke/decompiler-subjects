// subject.c
// Generated on 5/4/2015 12:05:05 AM by decompiling from_explorerplusplus.com/version_1.3.4/ia32_pe_from_website/subject.exe
// using Decompiler version 0.4.2.0.

#include "subject.h"

word32 fn00401000(word32 ecx, word32 ebx, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 ebxOut)
{
	*ebxOut = ebx;
	word32 eax_151 = 0x00000000;
	if (ecx == 0x00000000 || ecx >u 0x7FFFFFFF)
		eax_151 = 0x80070057;
	if (eax_151 >= 0x00000000)
	{
		word32 ebx_102;
		word32 esi_103;
		word32 eax_104 = fn00439580(ecx - 0x00000001, es, ds, fs, gs, ebx, ecx - 0x00000001, dwArg04, fp + 0x00000008, out edx, out ebx_102, out esi_103);
		if (eax_104 < 0x00000000 || eax_104 >u esi_103)
		{
			ebx_102[esi_103 * 0x0002] = 0x0000;
			goto l00401054;
		}
		else if (eax_104 == esi_103)
		{
			ebx_102[esi_103 * 0x0002] = 0x0000;
			return 0x00000000;
		}
		else
		{
l00401054:
l00401058:
			return edx;
		}
	}
	else
		goto l00401058;
}

word32 fn00401310(ptr32 edxOut, ptr32 ebpOut, ptr32 esiOut)
{
	*edxOut = edx;
	*esiOut = esi;
	word32 esp_2 = fp - 0x00000004;
	word32 ebp_34 = fp - 0x00000004;
	word32 eax_7 = Mem0[0x004EF134:word32];
	if (eax_7 == 0x00000000)
	{
		word32 edx_64;
		word32 esi_66;
		word32 edi_67;
		word32 eax_68 = fn004017B0(0x004CB834, 0x004EF11C, 0x004CB79C, out edx_64, out ebp_34, out esi_66, out edi_67);
		esp_2 = fp - 0x00000004;
		if (eax_68 == 0x00000000)
		{
			word32 ebp_75;
			*ebpOut = Mem0[fp - 0x00000004:word32];
			return eax_68;
		}
		else
		{
			Mem78[0x004EF134:word32] = eax_68;
l0040133F:
			word32 ecx_36 = Mem0[ebp_34 + 0x00000008:word32];
			word32 esp_37 = esp_2 - 0x00000004;
			Mem38[esp_37 + 0x00000000:word32] = 0x00000000;
			Mem40[esp_37 - 0x00000004:word32] = 0x00000008;
			Mem42[esp_37 - 0x00000008:word32] = ecx_36;
			Mem44[esp_37 - 0x0000000C:word32] = 0x00000001;
			Mem46[esp_37 - 0x00000010:word32] = 0x00000000;
			Mem48[esp_37 - 0x00000014:word32] = 0x004ECD00;
			Mem50[esp_37 - 0x00000018:word32] = 0x80000010;
			eax_7();
			word32 ebp_55;
			*ebpOut = Mem50[esp_37 - 0x00000018:word32];
			return eax_7;
		}
	}
	else
		goto l0040133F;
}

word32 fn00401360(word32 edx, word32 ebp, selector es, selector ds, selector fs, selector gs, ptr32 edxOut, ptr32 ebpOut, ptr32 ediOut)
{
	*edxOut = edx;
	word32 esi_108;
	Mem36[fs:0x00000000:word32] = fp - 0x00000014;
	word32 ebp_107 = fp - 0x00000004;
	word32 esp_110 = fp - 0x00000294;
	if (Mem36[0x004EF798:word32] == 0x00000000 && Mem36[0x004ECD00:word32] == 0xFFFFFFFF)
	{
		esp_110 = fp - 0x00000294;
		if (fn00401310(out edx, out ebp_107, out esi_108) != 0x00000000)
		{
			word32 eax_115 = Mem36[ebp_107 + 0xFFFFFDC0:word32];
			if (eax_115 == esi_108)
			{
				Mem203[fp - 0x00000298:word32] = 0x004CB7C8;
				Mem205[fp - 0x0000029C:word32] = 0x004EF11C;
				word32 edi_210;
				word32 eax_211 = fn004017B0(0x004CB834, dwArg00, dwArg04, out edx, out ebp_107, out esi_108, out edi_210);
				esp_110 = fp - 0x00000294;
				if (eax_211 != esi_108)
				{
					Mem217[fp - 0x00000298:word32] = ebp_107 + 0xFFFFFDC8;
					Mem219[fp - 0x0000029C:word32] = 0x004ECD00;
					Mem221[fp - 0x000002A0:word32] = 0x00000006;
					esp_110 = fp - 0x000002A0;
					eax_211();
					if (eax_211 != 0x00000000)
					{
						Mem226[ebp_107 - 0x00000028:word32] = 0x00000000;
						Mem228[fp - 0x000002A4:word32] = 0x00000105;
						Mem231[fp - 0x000002A8:word32] = ebp_107 + 0xFFFFFDD0;
						edx = Mem231[ebp_107 + 0xFFFFFDC8:word32];
						*edxOut = edx;
						Mem234[fp - 0x000002AC:word32] = edx;
						esp_110 = fp - 0x000002A0;
						if (GetModuleFileNameW(Mem234[fp - 0x000002AC:HMODULE], Mem234[fp - 680:LPWSTR], Mem234[fp - 676:DWORD]) != esi_108)
							if (Mem234[ebp_107 - 0x00000028:word16] != si)
							{
								Mem242[fp - 0x000002A4:word32] = 0x0000006F;
								SetLastError(Mem242[fp - 0x000002A4:DWORD]);
								esp_110 = fp - 0x000002A0;
							}
							else
							{
								Mem244[ebp_107 + 0xFFFFFDA0:word32] = 0x00000020;
								Mem245[ebp_107 + 0xFFFFFDA4:word32] = 0x00000088;
								Mem247[ebp_107 + 0xFFFFFDA8:word32] = ebp_107 + 0xFFFFFDD0;
								Mem248[ebp_107 + 0xFFFFFDB4:word32] = 0x00000003;
								word32 ecx_249 = Mem248[ebp_107 + 0xFFFFFDC8:word32];
								Mem250[ebp_107 + 0xFFFFFDBC:word32] = ecx_249;
								eax_115 = Mem250[0x004EF130:word32];
								if (eax_115 == esi_108)
								{
									Mem299[fp - 0x000002A4:word32] = 0x004CB74C;
									Mem301[fp - 0x000002A8:word32] = 0x004EF11C;
									word32 edi_306;
									word32 eax_307 = fn004017B0(0x004CB834, dwArg00, dwArg04, out edx, out ebp_107, out esi_108, out edi_306);
									esp_110 = fp - 0x000002A0;
									if (eax_307 == esi_108)
										eax_115 = eax_307 | 0xFFFFFFFF;
									else
									{
										Mem314[0x004EF130:word32] = eax_307;
l004014A7:
										edx = ebp_107 + 0xFFFFFDA0;
										*edxOut = edx;
										esp_110 = esp_110 - 0x00000004;
										Mem297[esp_110 + 0x00000000:word32] = edx;
										eax_115();
									}
								}
								else
									goto l004014A7;
								Mem269[ebp_107 + 0xFFFFFDC0:word32] = eax_115;
								if (eax_115 == 0xFFFFFFFF)
								{
									word32 eax_278 = GetLastError();
									if (eax_278 == 0x00000714 || (eax_278 == 0x00000715 || (eax_278 == 0x00000717 || eax_278 == 0x00000716)))
									{
										Mem286[ebp_107 + 0xFFFFFDC0:word32] = 0x00000000;
										eax_115 = 0x00000000;
l004014E9:
										Mem277[0x004EF79C:word32] = 0x00000001;
l004014F3:
										Mem129[0x004ECD00:word32] = eax_115;
										word32 ecx_130 = ebp_107 + 0xFFFFFDCC;
										word32 esp_131 = esp_110 - 0x00000004;
										Mem132[esp_131 + 0x00000000:word32] = ecx_130;
										Mem134[esp_131 - 0x00000004:word32] = eax_115;
										esp_110 = esp_131 + 0x00000004;
										word32 esi_136;
										if (fn004015A0(out edx, out esi_136) != 0x00000000)
										{
											Mem142[ebp_107 - 0x00000004:word32] = esi_136;
											Mem143[ebp_107 + 0xFFFFFD80:word32] = 0x00000040;
											word32 eax_144 = Mem143[0x004EF12C:word32];
											if (eax_144 == esi_136)
											{
												Mem187[esp_131 + 0x00000000:word32] = 0x004CB780;
												Mem189[esp_131 - 0x00000004:word32] = 0x004EF11C;
												word32 edx_193;
												word32 edi_196;
												word32 eax_197 = fn004017B0(0x004CB834, dwArg00, dwArg04, out edx_193, out ebp_107, out esi_136, out edi_196);
												esp_110 = esp_131 + 0x00000004;
												if (eax_197 != esi_136)
												{
													Mem201[0x004EF12C:word32] = eax_197;
l0040153C:
													word32 edx_169 = ebp_107 + 0xFFFFFD80;
													word32 esp_170 = esp_110 - 0x00000004;
													Mem171[esp_170 + 0x00000000:word32] = edx_169;
													Mem173[esp_170 - 0x00000004:word32] = 0x004CB7DC;
													Mem175[esp_170 - 0x00000008:word32] = 0x00000002;
													Mem177[esp_170 - 0x0000000C:word32] = esi_136;
													Mem179[esp_170 - 0x00000010:word32] = esi_136;
													esp_110 = esp_170 - 0x00000010;
													eax_144();
													if (eax_144 != esi_136)
													{
														Mem183[esp_170 - 0x00000014:word32] = 0x004CB7DC;
														LoadLibraryW(Mem183[esp_170 - 0x00000014:LPCWSTR]);
														esp_110 = esp_170 - 0x00000010;
													}
												}
											}
											else
												goto l0040153C;
											Mem163[ebp_107 - 0x00000004:word32] = 0xFFFFFFFE;
											*edxOut = fn0040158C(ebp_107, out ebp_107);
										}
l00401569:
										esi_108 = 0x00000001;
									}
								}
								else
									goto l004014E9;
							}
					}
				}
			}
			else
				goto l004014F3;
		}
	}
	else
		goto l00401569;
	Mem62[fs:0x00000000:word32] = Mem36[ebp_107 - 0x00000010:word32];
	word32 esp_64 = esp_110 + 0x00000004;
	word32 edi_65 = Mem62[esp_64 + 0x00000000:word32];
	*ediOut = edi_65;
	word32 ecx_75;
	word32 eax_76 = fn004394A0(esi_108, Mem62[ebp_107 - 0x0000001C:word32] ^ ebp_107, edx, Mem62[esp_64 + 0x00000008:word32], ebp_107, Mem62[esp_64 + 0x00000004:word32], edi_65, es, ds, fs, gs, ebp, out ecx_75);
	word32 ebp_78;
	*ebpOut = Mem62[ebp_107 + 0x00000000:word32];
	return eax_76;
}

word32 fn0040158C(word32 ebp, ptr32 ebpOut)
{
	word32 ebp_7;
	return fn00401870(out ebp_7);
}

word32 fn004015A0(ptr32 edxOut, ptr32 esiOut)
{
fn004015A0_entry:
l004015A0:
	branch Mem0[0x004EF128:word32] != 0x00000000 l004015CF
l004015AC:
	word32 edx_39
	word32 ebp_40
	word32 esi_41
	word32 edi_42
	word32 eax_43 = fn004017B0(0x004CB834, 0x004EF11C, 0x004CB75C, out edx_39, out ebp_40, out esi_41, out edi_42)
	branch eax_43 != 0x00000000 l004015CA
l004015C6:
	return eax_43
l004015CA:
	Mem54[0x004EF128:word32] = eax_43
l004015CF:
fn004015A0_exit:
}

word32 fn004015E0(word32 edx, word32 ebp, selector es, selector ds, selector fs, selector gs, ptr32 edxOut)
{
	*edxOut = edx;
	word32 ebp_131 = fp - 0x00000004;
	word32 esp_12 = fp - 0x00000010;
	word32 edi_130 = 0x00000000;
	if (Mem0[0x004EF7A0:word32] != 0x00000000)
	{
		OutputDebugStringA(0x004CB7F8);
		esp_12 = fp - 0x00000010;
	}
	if (Mem0[0x004EF798:word32] != 0x00000000)
	{
l00401603:
		return 0x00000001;
	}
	else if (Mem0[0x004EF7A0:word32] == 0x00000000)
	{
		word32 edx_165;
		if (fn00401360(edx, fp - 0x00000004, es, ds, fs, gs, out edx_165, out ebp_131, out edi_130) != 0x00000000)
		{
l00401620:
			word32 eax_132 = Mem0[0x004EF128:word32];
			word32 esi_133 = Mem0[0x004ECD00:word32];
			if (eax_132 == 0x00000000)
			{
				word32 esp_148 = esp_12 - 0x00000004;
				Mem149[esp_148 + 0x00000000:word32] = 0x004CB75C;
				Mem151[esp_148 - 0x00000004:word32] = 0x004EF11C;
				word32 edx_155;
				word32 eax_159 = fn004017B0(0x004CB834, dwArg00, dwArg04, out edx_155, out ebp_131, out esi_133, out edi_130);
				esp_12 = esp_148 + 0x00000004;
				if (eax_159 != 0x00000000)
				{
					Mem164[0x004EF128:word32] = eax_159;
l0040164C:
					word32 ecx_140 = Mem0[ebp_131 + 0x00000008:word32];
					word32 esp_141 = esp_12 - 0x00000004;
					Mem142[esp_141 + 0x00000000:word32] = ecx_140;
					Mem144[esp_141 - 0x00000004:word32] = esi_133;
					eax_132();
					if (eax_132 == 0x00000000)
					{
l00401657:
						if (eax_87 != 0x0000007F)
							if (eax_87 != 0x0000007E)
								if (eax_87 == 0x00000078)
								{
l0040166C:
									Mem93[0x004EF798:word32] = 0x00000001;
								}
					}
				}
			}
		}
	}
}

word32 fn004016B0(word32 edx, word32 ebp, selector es, selector ds, selector fs, selector gs)
{
	word32 esi_50;
	Mem35[fs:0x00000000:word32] = fp - 0x00000014;
	word32 ebp_5 = fp - 0x00000004;
	word32 esp_32 = fp - 0x00000038;
	word32 edi_36 = 0x00000000;
	if (Mem35[0x004EF798:word32] == 0x00000000)
	{
		word32 edx_96;
		word32 eax_97 = fn004015E0(edx, fp - 0x00000004, es, ds, fs, gs, out edx_96);
		Mem100[fp - 0x00000024:word32] = eax_97;
		esp_32 = fp - 0x00000038;
		esi_50 = eax_97;
		if (eax_97 != 0x00000000)
		{
l0040170A:
			word32 esp_74 = esp_32 - 0x00000004;
			Mem75[esp_74 + 0x00000000:word32] = Mem35[fp + 0x00000004:word32];
			Mem77[esp_74 - 0x00000004:word32] = 0x004EF10C;
			word32 edx_81;
			word32 edi_84;
			word32 eax_85 = fn004017B0(0x004CB878, dwArg00, dwArg04, out edx_81, out ebp_5, out esi_50, out edi_84);
			Mem88[ebp_5 - 0x0000001C:word32] = eax_85;
			edi_36 = eax_85;
		}
	}
	else
		goto l0040170A;
	Mem53[ebp_5 - 0x00000004:word32] = 0xFFFFFFFE;
	word32 edi_54;
	Mem58[fs:0x00000000:word32] = Mem53[fn0040174A(ebp_5, esi_50, edi_36, out edi_54) - 0x00000010:word32];
	return edi_54;
}

word32 fn0040174A(word32 ebp, word32 esi, word32 edi, ptr32 ediOut)
{
	*ediOut = edi;
	word32 esp_1 = fp;
	if (Mem0[0x004EF798:word32] == 0x00000000 && esi != 0x00000000)
	{
		if (edi == 0x00000000)
			Mem81[ebp + 0x00000008:word32] = GetLastError();
		else
			Mem82[ebp + 0x00000008:word32] = 0x00000000;
		word32 esi_35 = Mem0[ebp - 0x00000024:word32];
		word32 eax_36 = Mem0[0x004EF118:word32];
		if (eax_36 == 0x00000000)
		{
			word32 edx_70;
			word32 eax_74 = fn004017B0(0x004CB834, 0x004EF11C, 0x004CB76C, out edx_70, out ebp, out esi_35, out edi);
			esp_1 = fp;
			if (eax_74 != 0x00000000)
			{
				Mem79[0x004EF118:word32] = eax_74;
l00401796:
				word32 esp_61 = esp_1 - 0x00000004;
				Mem62[esp_61 + 0x00000000:word32] = esi_35;
				Mem64[esp_61 - 0x00000004:word32] = 0x00000000;
				esp_1 = esp_61 - 0x00000004;
				eax_36();
			}
		}
		else
			goto l00401796;
		if (edi == 0x00000000)
		{
			word32 esp_54 = esp_1 - 0x00000004;
			Mem55[esp_54 + 0x00000000:word32] = Mem0[ebp + 0x00000008:word32];
			SetLastError(Mem55[esp_54 + 0x00000000:DWORD]);
		}
	}
	return ebp;
}

word32 fn004017B0(word32 ebx, word32 dwArg04, word32 dwArg08, ptr32 edxOut, ptr32 ebpOut, ptr32 esiOut, ptr32 ediOut)
{
	*edxOut = edx;
	word32 esi_104 = 0x00000000;
	word32 esp_10 = fp - 0x0000000C;
	if (Mem0[0x004EF124:word32] == 0x00000000)
	{
		if (GetVersion() < 0x00000000)
		{
			GetFileAttributesW(0x004CB7AC);
			Mem148[0x004EF120:word32] = GetModuleHandleA(0x004CB7BC);
			esp_10 = fp - 0x0000000C;
		}
		Mem139[0x004EF124:word32] = 0x00000001;
	}
	word32 eax_21 = Mem0[0x004EF120:word32];
	word32 edi_22 = GetProcAddress;
	if (eax_21 != 0x00000000)
	{
		Mem122[fp - 0x00000010:word32] = dwArg08;
		word32 eax_125 = GetProcAddress(eax_21, 0x004CB7BC);
		esp_10 = fp - 0x0000000C;
		esi_104 = eax_125;
		if (eax_125 == 0x00000000)
		{
l0040180A:
			word32 edx_71 = dwArg04;
			*edxOut = edx_71;
			word32 eax_101 = Mem0[dwArg04 + 0x00000000:word32];
			if (eax_101 != 0x00000000)
				goto l00401839;
			else
			{
				if (GetVersion() < 0x00000000)
				{
					eax_101 = Mem0[ebx + 0x0000000C:word32];
					word32 ecx_113 = Mem0[ebx + 0x00000008:word32];
					esp_10 = fp - 0x00000010;
					ecx_113();
				}
				else
				{
					word32 edx_116 = Mem0[ebx + 0x00000004:word32];
					*edxOut = edx_116;
					eax_101 = Mem0[ebx + 0x00000000:word32];
					esp_10 = fp - 0x00000010;
					eax_101();
				}
				if (eax_101 != 0x00000000)
				{
					Mem111[dwArg04 + 0x00000000:word32] = eax_101;
l00401839:
					word32 esp_81 = esp_10 - 0x00000004;
					Mem82[esp_81 + 0x00000000:word32] = dwArg08;
					Mem84[esp_81 - 0x00000004:word32] = eax_101;
					word32 edx_80 = dwArg08;
					*edxOut = edx_80;
					edi_22();
					word32 edi_86;
					*ediOut = Mem84[esp_81 - 0x00000004:word32];
					word32 esi_88;
					*esiOut = Mem84[esp_81 + 0x00000000:word32];
					word32 ebp_90;
					*ebpOut = Mem84[esp_81 + 0x00000004:word32];
					return eax_101;
				}
				else
				{
l00401846:
					word32 esp_60 = esp_10 + 0x00000004;
					word32 edi_59;
					*ediOut = Mem0[esp_10 + 0x00000000:word32];
					word32 esi_62;
					*esiOut = Mem0[esp_60 + 0x00000000:word32];
					word32 ebp_64;
					*ebpOut = Mem0[esp_60 + 0x00000004:word32];
					return esi_104;
				}
			}
		}
		else
			goto l00401846;
	}
	else
		goto l0040180A;
}

word32 fn00401870(ptr32 ebpOut)
{
	word32 esp_2 = fp - 0x00000004;
	word32 ebp_32 = fp - 0x00000004;
	word32 eax_7 = Mem0[0x004EF118:word32];
	if (eax_7 == 0x00000000)
	{
		word32 edx_52;
		word32 esi_54;
		word32 edi_55;
		word32 eax_56 = fn004017B0(0x004CB834, 0x004EF11C, 0x004CB76C, out edx_52, out ebp_32, out esi_54, out edi_55);
		esp_2 = fp - 0x00000004;
		if (eax_56 == 0x00000000)
		{
			word32 ebp_63;
			*ebpOut = Mem0[fp - 0x00000004:word32];
			return edx_52;
		}
		else
		{
			Mem66[0x004EF118:word32] = eax_56;
l0040189F:
			word32 ecx_34 = Mem0[ebp_32 + 0x00000008:word32];
			word32 esp_35 = esp_2 - 0x00000004;
			Mem36[esp_35 + 0x00000000:word32] = ecx_34;
			Mem38[esp_35 - 0x00000004:word32] = 0x00000000;
			eax_7();
			word32 ebp_43;
			*ebpOut = Mem38[esp_35 - 0x00000004:word32];
			return edx;
		}
	}
	else
		goto l0040189F;
}

word32 fn004019E0(word32 edx, word32 ebp, selector es, selector ds, selector fs, selector gs)
{
	word32 esi_50;
	Mem35[fs:0x00000000:word32] = fp - 0x00000014;
	word32 ebp_5 = fp - 0x00000004;
	word32 esp_32 = fp - 0x00000038;
	word32 edi_36 = 0x00000000;
	if (Mem35[0x004EF798:word32] == 0x00000000)
	{
		word32 edx_96;
		word32 eax_97 = fn004015E0(edx, fp - 0x00000004, es, ds, fs, gs, out edx_96);
		Mem100[fp - 0x00000024:word32] = eax_97;
		esp_32 = fp - 0x00000038;
		esi_50 = eax_97;
		if (eax_97 != 0x00000000)
		{
l00401A3A:
			word32 esp_74 = esp_32 - 0x00000004;
			Mem75[esp_74 + 0x00000000:word32] = Mem35[fp + 0x00000004:word32];
			Mem77[esp_74 - 0x00000004:word32] = 0x004EF7A8;
			word32 edx_81;
			word32 edi_84;
			word32 eax_85 = fn004017B0(0x004CB8E8, dwArg00, dwArg04, out edx_81, out ebp_5, out esi_50, out edi_84);
			Mem88[ebp_5 - 0x0000001C:word32] = eax_85;
			edi_36 = eax_85;
		}
	}
	else
		goto l00401A3A;
	Mem53[ebp_5 - 0x00000004:word32] = 0xFFFFFFFE;
	word32 edi_54;
	Mem58[fs:0x00000000:word32] = Mem53[fn00401A7A(ebp_5, esi_50, edi_36, out edi_54) - 0x00000010:word32];
	return edi_54;
}

word32 fn00401A7A(word32 ebp, word32 esi, word32 edi, ptr32 ediOut)
{
	*ediOut = edi;
	word32 esp_1 = fp;
	if (Mem0[0x004EF798:word32] == 0x00000000 && esi != 0x00000000)
	{
		if (edi == 0x00000000)
			Mem81[ebp + 0x00000008:word32] = GetLastError();
		else
			Mem82[ebp + 0x00000008:word32] = 0x00000000;
		word32 esi_35 = Mem0[ebp - 0x00000024:word32];
		word32 eax_36 = Mem0[0x004EF118:word32];
		if (eax_36 == 0x00000000)
		{
			word32 edx_70;
			word32 eax_74 = fn004017B0(0x004CB834, 0x004EF11C, 0x004CB76C, out edx_70, out ebp, out esi_35, out edi);
			esp_1 = fp;
			if (eax_74 != 0x00000000)
			{
				Mem79[0x004EF118:word32] = eax_74;
l00401AC6:
				word32 esp_61 = esp_1 - 0x00000004;
				Mem62[esp_61 + 0x00000000:word32] = esi_35;
				Mem64[esp_61 - 0x00000004:word32] = 0x00000000;
				esp_1 = esp_61 - 0x00000004;
				eax_36();
			}
		}
		else
			goto l00401AC6;
		if (edi == 0x00000000)
		{
			word32 esp_54 = esp_1 - 0x00000004;
			Mem55[esp_54 + 0x00000000:word32] = Mem0[ebp + 0x00000008:word32];
			SetLastError(Mem55[esp_54 + 0x00000000:DWORD]);
		}
	}
	return ebp;
}

bool fn00409050(word32 ecx, word32 ebx, word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 ebxOut)
{
	*ebxOut = ebx;
	word32 ebp_141 = fp - 0x00000004;
	word32 eax_12 = Mem0[ecx + 0x00000010:word32];
	word32 ecx_139 = dwArg04;
	word32 esp_143 = fp - 0x0000000C;
	if (eax_12 <u dwArg04)
	{
		eax_12 = fn00426AEB(fp - 0x00000004, es, ds, fs, gs, 0x004CBA94, out ecx_139, out ebx, out ebp_141);
		esp_143 = fp - 0x0000000C;
	}
	word32 edi_132 = Mem0[ebp_141 + 0x0000000C:word32];
	word32 eax_29 = eax_12 - ecx_139;
	if (eax_29 <u edi_132)
		edi_132 = eax_29;
	if (edi_132 != 0x00000000)
	{
		word32 ebx_130;
		word32 edx_70 = Mem0[ecx + 0x00000014:word32];
		word32 esp_72 = esp_143 - 0x00000004;
		Mem73[esp_72 + 0x00000000:word32] = ebx;
		if (edx_70 >=u 0x00000008)
			ebx_130 = Mem73[ecx + 0x00000000:word32];
		else
			ebx_130 = ecx;
		word32 edx_126;
		if (edx_70 >=u 0x00000008)
			edx_126 = Mem73[ecx + 0x00000000:word32];
		else
			edx_126 = ecx;
		Mem85[esp_72 - 0x00000004:word32] = (eax_29 - edi_132) * 0x00000002;
		Mem89[esp_72 - 0x00000008:word32] = ebx_130 + (ecx_139 + edi_132) * 0x00000002;
		Mem92[esp_72 - 0x0000000C:word32] = edx_126 + ecx_139 * 0x00000002;
		word32 esi_95;
		word32 edi_96;
		D = fn00439AB0(ebx_130, dwArg00, dwArg04, dwArg08, out esi_95, out edi_96);
		word32 eax_101 = Mem92[esi_95 + 0x00000010:word32] - edi_96;
		Mem104[esi_95 + 0x00000010:word32] = eax_101;
		word32 ebx_105;
		*ebxOut = Mem104[esp_72 + 0x00000004:word32];
		if (Mem92[esi_95 + 0x00000014:word32] >=u 0x00000008)
		{
			Mem104[esi_95 + 0x00000000:word32][eax_101 * 0x0002] = 0x0000;
			return D;
		}
		else
		{
			esi_95[eax_101 * 0x0002] = 0x0000;
l004090D3:
			return D;
		}
	}
	else
		goto l004090D3;
}

bool fn004090E0(word32 ecx, word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg08)
{
	word32 ebp_130 = fp - 0x00000004;
	word32 ebx_10 = dwArg08;
	word32 esi_128 = ecx;
	word32 ecx_125 = dwArg04;
	word32 esp_131 = fp - 0x00000010;
	word32 edi_23 = Mem0[dwArg04 + 0x00000010:word32];
	if (edi_23 <u dwArg08)
	{
		fn00426AEB(fp - 0x00000004, es, ds, fs, gs, 0x004CBA94, out ecx_125, out ebx_10, out ebp_130);
		esp_131 = fp - 0x00000010;
	}
	word32 eax_32 = Mem0[ebp_130 + 0x00000010:word32];
	word32 edi_127 = edi_23 - ebx_10;
	if (eax_32 <u edi_127)
		edi_127 = eax_32;
	if (ecx == ecx_125)
	{
		word32 esp_55 = esp_131 - 0x00000004;
		Mem56[esp_55 + 0x00000000:word32] = 0xFFFFFFFF;
		Mem60[esp_55 - 0x00000004:word32] = edi_127 + ebx_10;
		word32 ebx_67;
		fn00409050(ecx, ebx_10, ebp_130, es, ds, fs, gs, dwArg00, out ebx_67);
		Mem71[esp_55 + 0x00000000:word32] = ebx_67;
		Mem73[esp_55 - 0x00000004:word32] = 0x00000000;
		word32 ebx_75;
		return fn00409050(ecx, ebx_67, ebp_130, es, ds, fs, gs, dwArg00, out ebx_75);
	}
	else
	{
		if (edi_127 >u 0x7FFFFFFE)
		{
			word32 esp_233 = esp_131 - 0x00000004;
			Mem234[esp_233 + 0x00000000:word32] = 0x004CBAAC;
			word32 edx_235;
			word32 ebx_236;
			ecx_125 = fn00426ABB(ebp_130, es, ds, fs, gs, dwArg00, out edx_235, out ebx_236, out ebp_130);
			esp_131 = esp_233 + 0x00000004;
		}
		bool D_110;
		word32 eax_99 = Mem0[ecx + 0x00000014:word32];
		if (eax_99 <u edi_127)
		{
			word32 esp_184 = esp_131 - 0x00000004;
			Mem185[esp_184 + 0x00000000:word32] = Mem0[ecx + 0x00000010:word32];
			Mem187[esp_184 - 0x00000004:word32] = edi_127;
			word32 ebx_189;
			D_110 = fn00409240(ecx, ebp_130, es, ds, fs, gs, dwArg00, out ebx_189, out ebp_130, out esi_128, out edi_127);
			esp_131 = esp_184 - 0x00000004;
			ecx_125 = Mem187[ebp_130 + 0x00000008:word32];
			if (edi_127 != 0x00000000)
			{
l00409159:
				if (Mem0[ecx_125 + 0x00000014:word32] >=u 0x00000008)
					ecx_125 = Mem0[ecx_125 + 0x00000000:word32];
				word32 eax_139;
				if (Mem0[esi_128 + 0x00000014:word32] >=u 0x00000008)
					eax_139 = Mem0[esi_128 + 0x00000000:word32];
				else
					eax_139 = esi_128;
				word32 edx_140 = Mem0[ebp_130 + 0x0000000C:word32];
				word32 ebx_141 = edi_127 * 0x00000002;
				word32 esp_142 = esp_131 - 0x00000004;
				Mem143[esp_142 + 0x00000000:word32] = ebx_141;
				Mem146[esp_142 - 0x00000004:word32] = ecx_125 + edx_140 * 0x00000002;
				Mem148[esp_142 - 0x00000008:word32] = eax_139;
				word32 ebx_149;
				word32 ebp_150;
				word32 esi_151;
				word32 edi_152;
				D_110 = fn0043B9D0(ebx_141, dwArg00, dwArg04, dwArg08, out ebx_149, out ebp_150, out esi_151, out edi_152);
				Mem157[esi_151 + 0x00000010:word32] = edi_152;
				if (Mem148[esi_151 + 0x00000014:word32] >=u 0x00000008)
				{
					Mem163[ebx_149 + Mem157[esi_151 + 0x00000000:word32]:word16] = 0x0000;
					return D_110;
				}
				else
				{
					Mem178[ebx_149 + esi_151:word16] = 0x0000;
l004091D0:
					return D_110;
				}
			}
			else
				goto l004091D0;
		}
		else if (edi_127 == 0x00000000)
		{
			Mem203[ecx + 0x00000010:word32] = edi_127;
			if (eax_99 >=u 0x00000008)
			{
				Mem212[Mem203[ecx + 0x00000000:word32]:word16] = 0x0000;
				return D;
			}
			else
			{
				Mem228[ecx + 0x00000000:word16] = 0x0000;
				return D;
			}
		}
		else
			goto l00409159;
	}
}

word32 fn004091E0(word32 ebp, word32 esi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 ebxOut, ptr32 esiOut, ptr32 ediOut)
{
	*esiOut = esi;
	*ebxOut = ebx;
	*ediOut = edi;
	word32 ebp_46 = fp - 0x00000004;
	word32 esp_47 = fp - 0x00000010;
	word32 eax_29 = 0x00000000;
	if (dwArg04 != 0x00000000)
		if (dwArg04 <=u 0x7FFFFFFF)
		{
			word32 ebx_73;
			word32 esi_75;
			eax_29 = fn00439774(fp - 0x00000004, esi, es, ds, fs, gs, out ebx_73, out ebp_46, out esi_75);
			esp_47 = fp - 0x00000010;
			if (eax_29 == 0x00000000)
			{
l00409207:
				word32 esp_49 = esp_47 - 0x00000004;
				Mem50[esp_49 + 0x00000000:word32] = ebp_46 + 0x00000008;
				Mem52[ebp_46 + 0x00000008:word32] = 0x00000000;
				word32 ebx_58;
				fn0043987C(ebp_46 - 0x0000000C, es, ds, fs, gs, dwArg00, out ebx_58);
				Mem62[esp_49 + 0x00000000:word32] = 0x004D596C;
				Mem65[esp_49 - 0x00000004:word32] = ebp_46 - 0x0000000C;
				Mem66[ebp_46 - 0x0000000C:word32] = 0x004BDA8C;
				word32 ecx_67;
				eax_29 = fn0043B8E8(dwArg00, dwArg04, out ecx_67);
			}
		}
		else
			goto l00409207;
	return eax_29;
}

bool fn00409240(word32 ecx, word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 ebxOut, ptr32 ebpOut, ptr32 esiOut, ptr32 ediOut)
{
	Mem30[fs:0x00000000:word32] = fp - 0x00000010;
	word32 ebp_102 = fp - 0x00000004;
	*ebpOut = ebp_102;
	word32 esp_103 = fp - 0x00000038;
	word32 edi_116 = ecx;
	word32 esi_100 = dwArg04 | 0x00000007;
	if ((dwArg04 | 0x00000007) >u 0x7FFFFFFE)
		esi_100 = dwArg04;
	else
	{
		word32 ebx_233 = Mem30[ecx + 0x00000014:word32];
		if (ebx_233 >>u 0x00000001 >u SLICE((dwArg04 | 0x00000007) *u 0xAAAAAAAB, word32, 32) >>u 0x00000001)
		{
			esi_100 = (ebx_233 >>u 0x00000001) + ebx_233;
			if (ebx_233 >u 0x7FFFFFFE - (ebx_233 >>u 0x00000001))
				esi_100 = 0x7FFFFFFE;
		}
	}
	Mem49[fp - 0x00000008:word32] = 0x00000000;
	word32 eax_226 = 0x00000000;
	word32 ecx_48 = esi_100 + 0x00000001;
	if (ecx_48 <=u 0x00000000)
		goto l004092CE;
	else if (ecx_48 <=u 0x7FFFFFFF)
	{
		word32 ebx_223;
		eax_226 = fn00439774(fp - 0x00000004, esi_100, es, ds, fs, gs, out ebx_223, out ebp_102, out esi_100);
		esp_103 = fp - 0x00000038;
		if (eax_226 != 0x00000000)
		{
l004092CE:
			word32 ebx_101 = eax_226;
			word32 ecx_107 = Mem49[ebp_102 + 0x0000000C:word32];
			if (ecx_107 != 0x00000000)
			{
				word32 eax_150;
				if (Mem49[ecx + 0x00000014:word32] >=u 0x00000008)
					eax_150 = Mem49[ecx + 0x00000000:word32];
				else
					eax_150 = ecx;
				word32 esp_154 = esp_103 - 0x00000004;
				Mem155[esp_154 + 0x00000000:word32] = ecx_107 * 0x00000002;
				Mem157[esp_154 - 0x00000004:word32] = eax_150;
				Mem159[esp_154 - 0x00000008:word32] = eax_226;
				D = fn0043B9D0(eax_226, dwArg00, dwArg04, dwArg08, out ebx_101, out ebp_102, out esi_100, out edi_116);
				ecx_107 = Mem159[ebp_102 + 0x0000000C:word32];
				esp_103 = esp_154 + 0x00000004;
			}
			if (Mem49[edi_116 + 0x00000014:word32] >=u 0x00000008)
			{
				word32 esp_136 = esp_103 - 0x00000004;
				Mem137[esp_136 + 0x00000000:word32] = Mem49[edi_116 + 0x00000000:word32];
				fn004396BC(ebp_102, esi_100, es, ds, fs, gs, out ebx_101, out esi_100);
				ecx_107 = Mem137[ebp_102 + 0x0000000C:word32];
				esp_103 = esp_136;
			}
			Mem111[edi_116 + 0x00000000:word32] = ebx_101;
			Mem112[edi_116 + 0x00000014:word32] = esi_100;
			Mem113[edi_116 + 0x00000010:word32] = ecx_107;
			if (esi_100 >=u 0x00000008)
				edi_116 = ebx_101;
			edi_116[ecx_107 * 0x0002] = 0x0000;
			Mem123[fs:0x00000000:word32] = Mem121[ebp_102 - 0x0000000C:word32];
			word32 esp_125 = esp_103 + 0x00000004;
			word32 edi_126;
			*ediOut = Mem123[esp_125 + 0x00000000:word32];
			word32 esi_128;
			*esiOut = Mem123[esp_125 + 0x00000004:word32];
			word32 ebx_130;
			*ebxOut = Mem123[esp_125 + 0x00000008:word32];
			word32 ebp_132;
			*ebpOut = Mem123[ebp_102 + 0x00000000:word32];
			return D;
		}
		else
		{
l004092D2:
			word32 esp_185 = esp_103 - 0x00000004;
			Mem186[esp_185 + 0x00000000:word32] = ebp_102 - 0x00000018;
			Mem188[ebp_102 - 0x00000018:word32] = 0x00000000;
			word32 ebx_189;
			fn0043987C(ebp_102 - 0x00000024, es, ds, fs, gs, dwArg00, out ebx_189);
			Mem193[esp_185 + 0x00000000:word32] = 0x004D596C;
			Mem196[esp_185 - 0x00000004:word32] = ebp_102 - 0x00000024;
			Mem197[ebp_102 - 0x00000024:word32] = 0x004BDA8C;
			word32 ecx_198;
			fn0043B8E8(dwArg00, dwArg04, out ecx_198);
			word32 eax_201 = Mem197[ebp_102 + 0x00000008:word32];
			Mem203[ebp_102 + 0x00000008:word32] = eax_201;
			Mem205[ebp_102 - 0x00000010:word32] = esp_185 + 0x00000004;
			Mem207[esp_185 + 0x00000000:word32] = eax_201 + 0x00000001;
			Mem210[ebp_102 - 0x00000004:byte] = 0x02;
			word32 ebx_211;
			word32 esi_212;
			word32 edi_213;
			Mem216[ebp_102 - 0x00000018:word32] = fn004091E0(ebp_102, esi_100, es, ds, fs, gs, dwArg00, out ebx_211, out esi_212, out edi_213);
			return D;
		}
	}
	else
		goto l004092D2;
}

word32 fn004094F0(word32 ecx, word32 ebx, word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg08, ptr32 esiOut)
{
	word32 ebp_146 = fp - 0x00000004;
	word32 esp_11 = fp - 0x0000000C;
	word32 esi_147 = ecx;
	if (dwArg04 != 0x00000000)
	{
		word32 ecx_194;
		word32 edx_190 = Mem0[ecx + 0x00000014:word32];
		ecx_194 = ecx;
		if (edx_190 >=u 0x00000008)
			ecx_194 = Mem0[ecx + 0x00000000:word32];
		if (dwArg04 >=u ecx_194)
		{
			word32 ecx_200;
			if (edx_190 >=u 0x00000008)
				ecx_200 = Mem0[ecx + 0x00000000:word32];
			else
				ecx_200 = ecx;
			if (ecx_200 + Mem0[ecx + 0x00000010:word32] * 0x00000002 >u dwArg04)
			{
				word32 ecx_208;
				if (edx_190 >=u 0x00000008)
					ecx_208 = Mem0[ecx + 0x00000000:word32];
				else
					ecx_208 = ecx;
				fn004090E0(ecx, fp - 0x00000004, es, ds, fs, gs, ecx, dwArg04 - ecx_208 >> 0x00000001);
				word32 esi_224;
				*esiOut = Mem0[fp - 0x00000008:word32];
				return Mem0[fp - 0x00000004:word32];
			}
			else
			{
l00409543:
				word32 edi_148 = dwArg08;
				if (dwArg08 >u 0x7FFFFFFE)
				{
					word32 edx_185;
					fn00426ABB(fp - 0x00000004, es, ds, fs, gs, 0x004CBAAC, out edx_185, out ebx, out ebp_146);
					esp_11 = fp - 0x0000000C;
				}
				word32 eax_57 = Mem0[ecx + 0x00000014:word32];
				if (eax_57 <u dwArg08)
				{
					word32 esp_136 = esp_11 - 0x00000004;
					Mem137[esp_136 + 0x00000000:word32] = Mem0[ecx + 0x00000010:word32];
					Mem139[esp_136 - 0x00000004:word32] = dwArg08;
					fn00409240(ecx, ebp_146, es, ds, fs, gs, dwArg00, out ebx, out ebp_146, out esi_147, out edi_148);
					esp_11 = esp_136 - 0x00000004;
					if (edi_148 != 0x00000000)
					{
l0040956F:
						word32 eax_133;
						if (Mem0[esi_147 + 0x00000014:word32] >=u 0x00000008)
							eax_133 = Mem0[esi_147 + 0x00000000:word32];
						else
							eax_133 = esi_147;
						word32 edx_92 = Mem0[ebp_146 + 0x00000008:word32];
						word32 esp_93 = esp_11 - 0x00000004;
						Mem94[esp_93 + 0x00000000:word32] = ebx;
						word32 ebx_95 = edi_148 * 0x00000002;
						Mem97[esp_93 - 0x00000004:word32] = ebx_95;
						Mem99[esp_93 - 0x00000008:word32] = edx_92;
						Mem101[esp_93 - 0x0000000C:word32] = eax_133;
						word32 ebx_103;
						word32 ebp_104;
						word32 esi_105;
						word32 edi_106;
						fn0043B9D0(ebx_95, dwArg00, dwArg04, dwArg08, out ebx_103, out ebp_104, out esi_105, out edi_106);
						Mem111[esi_105 + 0x00000010:word32] = edi_106;
						if (Mem101[esi_105 + 0x00000014:word32] >=u 0x00000008)
						{
							Mem116[ebx_103 + Mem111[esi_105 + 0x00000000:word32]:word16] = 0x0000;
							word32 esi_122;
							*esiOut = Mem116[esp_93 + 0x00000008:word32];
							return Mem116[esp_93 + 0x0000000C:word32];
						}
						else
						{
							Mem130[ebx_103 + esi_105:word16] = 0x0000;
							esp_11 = esp_93 + 0x00000004;
l004095D8:
							word32 esp_71 = esp_11 + 0x00000004;
							word32 esi_73;
							*esiOut = Mem0[esp_71 + 0x00000000:word32];
							return Mem0[esp_71 + 0x00000004:word32];
						}
					}
					else
						goto l004095D8;
				}
				else if (dwArg08 == 0x00000000)
				{
					Mem157[ecx + 0x00000010:word32] = dwArg08;
					if (eax_57 >=u 0x00000008)
					{
						Mem164[Mem157[ecx + 0x00000000:word32]:word16] = 0x0000;
						word32 esp_166 = esp_11 + 0x00000004;
						word32 esi_168;
						*esiOut = Mem164[esp_166 + 0x00000000:word32];
						return Mem164[esp_166 + 0x00000004:word32];
					}
					else
					{
						Mem178[ecx + 0x00000000:word16] = 0x0000;
						word32 esp_177 = esp_11 + 0x00000004;
						word32 esi_179;
						*esiOut = Mem178[esp_177 + 0x00000000:word32];
						return Mem178[esp_177 + 0x00000004:word32];
					}
				}
				else
					goto l0040956F;
			}
		}
		else
			goto l00409543;
	}
	else
		goto l00409543;
}

word32 fn0040A140(word32 ebx, word32 ebp, selector es, selector ds, selector fs, selector gs, ptr32 ediOut, ptr32 siOut)
{
	*ediOut = edi;
	word32 eax_4 = Mem0[ebx + 0x00000000:word32];
	word32 esi_47 = Mem0[eax_4 + 0x00000000:word32];
	Mem10[eax_4 + 0x00000000:word32] = eax_4;
	word32 eax_11 = Mem10[ebx + 0x00000000:word32];
	Mem12[eax_11 + 0x00000004:word32] = eax_11;
	Mem13[ebx + 0x00000004:word32] = 0x00000000;
	word32 esp_32 = fp - 0x00000004;
	if (esi_47 != Mem13[ebx + 0x00000000:word32])
	{
		word32 esp_39 = fp - 0x00000008;
		do
		{
			word32 edi_52 = Mem13[esi_47 + 0x00000000:word32];
			if (Mem13[esi_47 + 0x0000001C:word32] >=u 0x00000008)
			{
				word32 esp_80 = esp_39 - 0x00000004;
				Mem81[esp_80 + 0x00000000:word32] = Mem13[esi_47 + 0x00000008:word32];
				word32 ebx_82;
				fn004396BC(ebp, esi_47, es, ds, fs, gs, out ebx_82, out esi_47);
				esp_39 = esp_80;
			}
			Mem59[esi_47 + 0x0000001C:word32] = 0x00000007;
			Mem60[esi_47 + 0x00000018:word32] = 0x00000000;
			word32 esp_61 = esp_39 - 0x00000004;
			Mem62[esp_61 + 0x00000000:word32] = esi_47;
			Mem63[esi_47 + 0x00000008:word16] = 0x0000;
			word32 ebx_68;
			word32 esi_69;
			fn004396BC(ebp, esi_47, es, ds, fs, gs, out ebx_68, out esi_69);
			esp_39 = esp_61;
			esi_47 = edi_52;
		} while (edi_52 != Mem63[ebx_68 + 0x00000000:word32]);
		word32 edi_77;
		*ediOut = Mem63[esp_61 + 0x00000000:word32];
		esp_32 = esp_61 + 0x00000004;
	}
	word16 si_34;
	*siOut = (word16) Mem13[esp_32 + 0x00000000:word32];
	return ebp;
}

word32 fn0040A1A0(word32 ebx, word32 edi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 edxOut)
{
	*edxOut = edx;
	word32 esp_52 = fp - 0x00000008;
	word32 esi_10 = dwArg04;
	word32 eax_12 = Mem0[dwArg04 + 0x00000000:word32];
	if (dwArg04 != Mem0[edi + 0x00000000:word32])
	{
		Mem43[Mem0[dwArg04 + 0x00000004:word32]:word32] = Mem0[dwArg04 + 0x00000000:word32];
		Mem46[Mem43[dwArg04 + 0x00000000:word32] + 0x00000004:word32] = Mem43[dwArg04 + 0x00000004:word32];
		if (Mem46[dwArg04 + 0x0000001C:word32] >=u 0x00000008)
		{
			word32 ebx_80;
			fn004396BC(fp - 0x00000004, dwArg04, es, ds, fs, gs, out ebx_80, out esi_10);
			esp_52 = fp + 0xFFFFFFF4;
		}
		Mem57[esi_10 + 0x0000001C:word32] = 0x00000007;
		Mem58[esi_10 + 0x00000018:word32] = 0x00000000;
		Mem60[esp_52 - 0x00000004:word32] = esi_10;
		Mem61[esi_10 + 0x00000008:word16] = 0x0000;
		word32 esi_67;
		word32 edx_68;
		*edxOut = fn004396BC(fp - 0x00000004, esi_10, es, ds, fs, gs, out ebx, out esi_67);
		eax_12 = Mem61[fp + 0x00000004:word32];
		Mem75[edi + 0x00000004:word32] = Mem61[edi + 0x00000004:word32] - 0x00000001;
	}
	Mem34[ebx + 0x00000000:word32] = eax_12;
	return ebx;
}

bool fn0040A200(word32 ebp, word32 esi, selector es, selector ds, selector fs, selector gs, ptr32 eaxOut)
{
	Mem32[fs:0x00000000:word32] = fp - 0x00000010;
	word32 ebx_39;
	word32 ebp_40;
	word32 esi_41;
	word32 eax_42 = fn00439774(fp - 0x00000004, esi, es, ds, fs, gs, out ebx_39, out ebp_40, out esi_41);
	Mem46[ebp_40 - 0x00000014:word32] = eax_42;
	if (eax_42 != 0x00000000)
	{
		Mem68[ebp_40 - 0x00000004:word32] = 0x00000000;
		word32 edx_70 = Mem68[ebp_40 + 0x0000000C:word32];
		Mem71[eax_42 + 0x00000000:word32] = Mem68[ebp_40 + 0x00000008:word32];
		Mem73[eax_42 + 0x00000004:word32] = edx_70;
		Mem74[ebp_40 + 0x00000008:word32] = eax_42 + 0x00000008;
		Mem75[ebp_40 + 0x0000000C:word32] = eax_42 + 0x00000008;
		Mem76[ebp_40 - 0x00000004:byte] = 0x01;
		if (eax_42 != 0x00000008)
		{
			Mem101[fp - 0x00000038:word32] = 0xFFFFFFFF;
			Mem102[eax_42 + 0x00000018:word32] = 0x00000000;
			Mem104[fp - 0x0000003C:word32] = 0x00000000;
			word32 eax_105 = Mem104[ebp_40 + 0x00000010:word32];
			Mem110[eax_42 + 0x0000001C:word32] = 0x00000007;
			Mem112[fp - 0x00000040:word32] = eax_105;
			Mem113[eax_42 + 0x00000008:word16] = 0x0000;
			D = fn004090E0(eax_42 + 0x00000008, ebp_40, es, ds, fs, gs, dwArg00, dwArg04);
		}
		Mem89[fs:0x00000000:word32] = Mem76[ebp_40 - 0x0000000C:word32];
		word32 eax_87;
		*eaxOut = eax_42;
		return D;
	}
	else
	{
		Mem120[fp - 0x00000038:word32] = ebp_40 + 0x00000008;
		Mem122[ebp_40 + 0x00000008:word32] = 0x00000000;
		word32 ebx_123;
		word32 edx_124 = fn0043987C(ebp_40 - 0x00000020, es, ds, fs, gs, dwArg00, out ebx_123);
		Mem128[fp - 0x00000038:word32] = 0x004D596C;
		Mem131[fp - 0x0000003C:word32] = ebp_40 - 0x00000020;
		Mem132[ebp_40 - 0x00000020:word32] = 0x004BDA8C;
		word32 ecx_133;
		fn0043B8E8(dwArg00, dwArg04, out ecx_133);
		int3();
		int3();
		int3();
		int3();
		int3();
		int3();
		int3();
		Mem137[fp - 0x00000038:word32] = ebp_40;
		Mem140[fp - 0x0000003C:word32] = 0xFFFFFFFE;
		Mem142[fp - 0x00000040:word32] = 0x004D97A8;
		Mem144[fp - 0x00000044:word32] = 0x00441E70;
		Mem147[fp - 0x00000048:word32] = Mem144[fs:0x00000000:word32];
		Mem150[fp - 0x00000060:word32] = ebx_123;
		Mem152[fp - 0x00000064:word32] = eax_42;
		Mem154[fp - 0x00000068:word32] = edi;
		word32 eax_155 = Mem154[0x004DEBE0:word32];
		word32 v16_156 = Mem154[fp - 0x00000040:word32] ^ eax_155;
		Mem157[fp - 0x00000040:word32] = v16_156;
		Mem161[fp - 0x0000006C:word32] = eax_155 ^ fp - 0x00000038;
		Mem163[fs:0x00000000:word32] = fp - 0x00000048;
		Mem165[fp - 0x00000054:word32] = 0x00000000;
		word32 esi_166 = Mem165[0x004EF7DC:word32];
		Mem167[fp - 0x00000058:word32] = 0x00000000;
		word32 ebp_138 = fp - 0x00000038;
		word32 esp_160 = fp - 0x0000006C;
		word32 eax_162 = fp - 0x00000048;
		if (Mem167[0x004EF798:word32] == 0x00000000)
		{
			Mem221[fp - 0x00000070:word32] = fp - 0x00000058;
			eax_162 = fn004015E0(edx_124, fp - 0x00000038, es, ds, fs, gs, out edx_124);
			*eaxOut = eax_162;
			esp_160 = fp - 0x0000006C;
			if (eax_162 == 0x00000000)
			{
				Mem229[fs:0x00000000:word32] = Mem221[fp - 0x00000048:word32];
				return D;
			}
			else
			{
l0040A337:
				Mem175[fp - 0x0000003C:word32] = 0x00000000;
				if (esi_166 == 0x00000000)
				{
					word32 esp_211 = esp_160 - 0x00000004;
					Mem212[esp_211 + 0x00000000:word32] = 0x004CBC14;
					word32 eax_213 = fn004019E0(edx_124, fp - 0x00000038, es, ds, fs, gs);
					esp_160 = esp_211 + 0x00000004;
					if (eax_213 != 0x00000000)
					{
						Mem218[0x004EF7DC:word32] = eax_213;
l0040A354:
						word32 ecx_207 = Mem175[fp - 0x00000030:word32];
						word32 esp_208 = esp_160 - 0x00000004;
						Mem209[esp_208 + 0x00000000:word32] = ecx_207;
						esi_166();
						Mem210[fp - 0x00000054:word32] = eax_162;
					}
				}
				else
					goto l0040A354;
				Mem191[ebp_138 - 0x00000004:word32] = 0xFFFFFFFE;
				word32 ebp_192 = fn0040A380(ebp_138);
				word32 eax_193;
				*eaxOut = Mem191[ebp_192 - 0x0000001C:word32];
				Mem195[fs:0x00000000:word32] = Mem191[ebp_192 - 0x00000010:word32];
				return D;
			}
		}
		else
			goto l0040A337;
	}
}

word32 fn0040A380(word32 ebp)
{
	word32 esp_1 = fp;
	if (Mem0[0x004EF798:word32] == 0x00000000)
	{
		byte dl_33 = Mem0[ebp - 0x0000001C:word32] == 0x00000000;
		word32 edx_34 = (word32) dl_33;
		word32 edi_35 = edx_34;
		if (edx_34 != 0x00000000)
			Mem86[ebp + 0x00000008:word32] = GetLastError();
		else
			Mem87[ebp + 0x00000008:word32] = 0x00000000;
		word32 esi_39 = Mem0[ebp - 0x00000020:word32];
		word32 eax_40 = Mem0[0x004EF118:word32];
		if (eax_40 == 0x00000000)
		{
			word32 edx_75;
			word32 eax_79 = fn004017B0(0x004CB834, 0x004EF11C, 0x004CB76C, out edx_75, out ebp, out esi_39, out edi_35);
			esp_1 = fp;
			if (eax_79 != 0x00000000)
			{
				Mem84[0x004EF118:word32] = eax_79;
l0040A3D2:
				word32 esp_66 = esp_1 - 0x00000004;
				Mem67[esp_66 + 0x00000000:word32] = esi_39;
				Mem69[esp_66 - 0x00000004:word32] = 0x00000000;
				esp_1 = esp_66 - 0x00000004;
				eax_40();
			}
		}
		else
			goto l0040A3D2;
		if (edi_35 != 0x00000000)
		{
			word32 esp_59 = esp_1 - 0x00000004;
			Mem60[esp_59 + 0x00000000:word32] = Mem0[ebp + 0x00000008:word32];
			SetLastError(Mem60[esp_59 + 0x00000000:DWORD]);
		}
	}
	return ebp;
}

word32 fn0040A920(word32 edx, selector es, selector ds, selector fs, selector gs, ptr32 edxOut)
{
	Mem35[fs:0x00000000:word32] = fp - 0x00000014;
	word32 esp_32 = fp - 0x00000038;
	if (Mem35[0x004EF798:word32] == 0x00000000)
	{
		word32 edx_91;
		word32 eax_92 = fn004015E0(edx, fp - 0x00000004, es, ds, fs, gs, out edx_91);
		esp_32 = fp - 0x00000038;
		if (eax_92 == 0x00000000)
		{
			Mem98[fs:0x00000000:word32] = Mem35[fp - 0x00000014:word32];
			return eax_92;
		}
		else
		{
l0040A981:
			Mem61[fp - 0x00000008:word32] = 0x00000000;
			word32 esp_63 = esp_32 - 0x00000004;
			Mem64[esp_63 + 0x00000000:word32] = Mem61[fp + 0x00000004:word32];
			Mem67[fp - 0x00000020:word32] = LoadLibraryW(Mem64[esp_63 + 0x00000000:LPCWSTR]);
			Mem68[fp - 0x00000008:word32] = 0xFFFFFFFE;
			word32 ebp_69;
			word32 edx_70;
			*edxOut = fn0040A9B4(fp - 0x00000004, out ebp_69);
			word32 eax_71 = Mem68[ebp_69 - 0x0000001C:word32];
			Mem73[fs:0x00000000:word32] = Mem68[ebp_69 - 0x00000010:word32];
			return eax_71;
		}
	}
	else
		goto l0040A981;
}

word32 fn0040A9B4(word32 ebp, ptr32 ebpOut)
{
	*ebpOut = ebp;
	word32 esp_1 = fp;
	if (Mem0[0x004EF798:word32] == 0x00000000)
	{
		byte dl_34 = Mem0[ebp - 0x0000001C:word32] == 0x00000000;
		edx = (word32) dl_34;
		word32 edi_36 = edx;
		if (edx != 0x00000000)
			Mem87[ebp + 0x00000008:word32] = GetLastError();
		else
			Mem88[ebp + 0x00000008:word32] = 0x00000000;
		word32 esi_40 = Mem0[ebp - 0x00000020:word32];
		word32 eax_41 = Mem0[0x004EF118:word32];
		if (eax_41 == 0x00000000)
		{
			word32 eax_80 = fn004017B0(0x004CB834, 0x004EF11C, 0x004CB76C, out edx, out ebp, out esi_40, out edi_36);
			esp_1 = fp;
			if (eax_80 != 0x00000000)
			{
				Mem85[0x004EF118:word32] = eax_80;
l0040AA06:
				word32 esp_67 = esp_1 - 0x00000004;
				Mem68[esp_67 + 0x00000000:word32] = esi_40;
				Mem70[esp_67 - 0x00000004:word32] = 0x00000000;
				esp_1 = esp_67 - 0x00000004;
				eax_41();
			}
		}
		else
			goto l0040AA06;
		if (edi_36 != 0x00000000)
		{
			word32 esp_60 = esp_1 - 0x00000004;
			Mem61[esp_60 + 0x00000000:word32] = Mem0[ebp + 0x00000008:word32];
			SetLastError(Mem61[esp_60 + 0x00000000:DWORD]);
		}
	}
	return edx;
}

word32 fn00418180(word32 edx, selector es, selector ds, selector fs, selector gs, ptr32 edxOut)
{
	Mem35[fs:0x00000000:word32] = fp - 0x00000014;
	word32 esp_126 = fp - 0x00000034;
	if (Mem35[0x004EF798:word32] == 0x00000000)
	{
		word32 edx_124;
		word32 eax_125 = fn004015E0(edx, fp - 0x00000004, es, ds, fs, gs, out edx_124);
		esp_126 = fp - 0x00000034;
		if (eax_125 == 0x00000000)
		{
			Mem131[fs:0x00000000:word32] = Mem35[fp - 0x00000014:word32];
			return eax_125;
		}
		else
		{
l004181E1:
			Mem61[fp - 0x00000008:word32] = 0x00000000;
			word32 esp_63 = esp_126 - 0x00000004;
			Mem64[esp_63 + 0x00000000:word32] = Mem61[fp + 0x00000028:word32];
			Mem67[esp_63 - 0x00000004:word32] = Mem64[fp + 0x00000024:word32];
			Mem69[esp_63 - 0x00000008:word32] = 0x00000000;
			Mem72[esp_63 - 0x0000000C:word32] = Mem69[fp + 0x00000020:word32];
			Mem75[esp_63 - 0x00000010:word32] = Mem72[fp + 0x0000001C:word32];
			Mem78[esp_63 - 0x00000014:word32] = Mem75[fp + 0x00000018:word32];
			Mem81[esp_63 - 0x00000018:word32] = Mem78[fp + 0x00000014:word32];
			Mem84[esp_63 - 0x0000001C:word32] = Mem81[fp + 0x00000010:word32];
			Mem87[esp_63 - 0x00000020:word32] = Mem84[fp + 0x0000000C:word32];
			Mem90[esp_63 - 0x00000024:word32] = Mem87[fp + 0x00000008:word32];
			Mem93[esp_63 - 0x00000028:word32] = Mem90[fp + 0x00000004:word32];
			Mem95[esp_63 - 0x0000002C:word32] = 0x00000000;
			word32 eax_96 = CreateWindowExW(Mem95[esp_63 - 0x0000002C:DWORD], Mem95[esp_63 - 40:LPCWSTR], Mem95[esp_63 - 36:LPCWSTR], Mem95[esp_63 - 32:DWORD], Mem95[esp_63 - 28:int32], Mem95[esp_63 - 24:int32], Mem95[esp_63 - 20:int32], Mem95[esp_63 - 16:int32], Mem95[esp_63 - 12:HWND], Mem95[esp_63 - 8:HMENU], Mem95[esp_63 - 4:HINSTANCE], Mem95[esp_63 + 0x00000000:LPVOID]);
			Mem99[fp - 0x00000020:word32] = eax_96;
			Mem100[fp - 0x00000008:word32] = 0xFFFFFFFE;
			word32 ebp_101;
			word32 edi_102;
			word32 edx_103;
			*edxOut = fn00418240(fp - 0x00000004, 0x00000000, eax_96, out ebp_101, out edi_102);
			Mem106[fs:0x00000000:word32] = Mem100[ebp_101 - 0x00000010:word32];
			return edi_102;
		}
	}
	else
		goto l004181E1;
}

word32 fn00418240(word32 ebp, word32 esi, word32 edi, ptr32 ebpOut, ptr32 ediOut)
{
	*ebpOut = ebp;
	*ediOut = edi;
	word32 esp_1 = fp;
	if (Mem0[0x004EF798:word32] == esi)
	{
		byte al_37 = edi == esi;
		word32 eax_38 = (word32) al_37;
		Mem39[ebp + 0x00000024:word32] = eax_38;
		if (eax_38 != esi)
			Mem92[ebp + 0x0000002C:word32] = GetLastError();
		else
			Mem93[ebp + 0x0000002C:word32] = esi;
		edx = Mem39[ebp - 0x00000020:word32];
		Mem43[ebp + 0x00000028:word32] = edx;
		word32 eax_44 = Mem43[0x004EF118:word32];
		if (eax_44 == esi)
		{
			word32 edi_84;
			word32 eax_85 = fn004017B0(0x004CB834, 0x004EF11C, 0x004CB76C, out edx, out ebp, out esi, out edi_84);
			esp_1 = fp;
			if (eax_85 != esi)
			{
				Mem90[0x004EF118:word32] = eax_85;
l00418290:
				word32 ecx_71 = Mem43[ebp + 0x00000028:word32];
				word32 esp_72 = esp_1 - 0x00000004;
				Mem73[esp_72 + 0x00000000:word32] = ecx_71;
				Mem75[esp_72 - 0x00000004:word32] = esi;
				esp_1 = esp_72 - 0x00000004;
				eax_44();
			}
		}
		else
			goto l00418290;
		if (Mem43[ebp + 0x00000024:word32] != esi)
		{
			edx = Mem43[ebp + 0x0000002C:word32];
			word32 esp_63 = esp_1 - 0x00000004;
			Mem64[esp_63 + 0x00000000:word32] = edx;
			SetLastError(Mem64[esp_63 + 0x00000000:DWORD]);
		}
	}
	return edx;
}

word32 fn00418400(word32 edx, selector es, selector ds, selector fs, selector gs, ptr32 axOut)
{
	Mem35[fs:0x00000000:word32] = fp - 0x00000014;
	word32 esp_32 = fp - 0x00000038;
	if (Mem35[0x004EF798:word32] == 0x00000000)
	{
		word32 edx_95;
		word32 eax_96 = fn004015E0(edx, fp - 0x00000004, es, ds, fs, gs, out edx_95);
		word16 ax_97;
		*axOut = (word16) eax_96;
		esp_32 = fp - 0x00000038;
		if (eax_96 == 0x00000000)
		{
			Mem103[fs:0x00000000:word32] = Mem35[fp - 0x00000014:word32];
			return edx_95;
		}
		else
		{
l00418461:
			Mem62[fp - 0x00000008:word32] = 0x00000000;
			word32 esp_64 = esp_32 - 0x00000004;
			Mem65[esp_64 + 0x00000000:word32] = Mem62[fp + 0x00000004:word32];
			Mem70[fp - 0x00000020:word32] = (word32) (word16) RegisterClassExW(Mem65[esp_64 + 0x00000000:(ptr WNDCLASSEXW)]);
			Mem71[fp - 0x00000008:word32] = 0xFFFFFFFE;
			word32 ebp_72;
			word32 edx_73 = fn00418498(fp - 0x00000004, out ebp_72);
			word16 ax_74;
			*axOut = Mem71[ebp_72 - 0x0000001C:word16];
			Mem77[fs:0x00000000:word32] = Mem71[ebp_72 - 0x00000010:word32];
			return edx_73;
		}
	}
	else
		goto l00418461;
}

word32 fn00418498(word32 ebp, ptr32 ebpOut)
{
	*ebpOut = ebp;
	word32 esp_1 = fp;
	if (Mem0[0x004EF798:word32] == 0x00000000)
	{
		byte al_39 = Mem0[ebp - 0x0000001C:word16] == 0x0000;
		word32 eax_40 = (word32) al_39;
		word32 edi_41 = eax_40;
		if (eax_40 != 0x00000000)
			Mem96[ebp + 0x00000008:word32] = GetLastError();
		else
			Mem97[ebp + 0x00000008:word32] = 0x00000000;
		word32 esi_45 = Mem0[ebp - 0x00000020:word32];
		word32 eax_46 = Mem0[0x004EF118:word32];
		if (eax_46 == 0x00000000)
		{
			word32 eax_87 = fn004017B0(0x004CB834, 0x004EF11C, 0x004CB76C, out edx, out ebp, out esi_45, out edi_41);
			esp_1 = fp;
			if (eax_87 != 0x00000000)
			{
				Mem94[0x004EF118:word32] = eax_87;
l004184EB:
				word32 esp_74 = esp_1 - 0x00000004;
				Mem75[esp_74 + 0x00000000:word32] = esi_45;
				Mem77[esp_74 - 0x00000004:word32] = 0x00000000;
				esp_1 = esp_74 - 0x00000004;
				eax_46();
			}
		}
		else
			goto l004184EB;
		if (edi_41 != 0x00000000)
		{
			word32 esp_67 = esp_1 - 0x00000004;
			Mem68[esp_67 + 0x00000000:word32] = Mem0[ebp + 0x00000008:word32];
			SetLastError(Mem68[esp_67 + 0x00000000:DWORD]);
		}
	}
	return edx;
}

void fn00418540(word32 edx, selector es, selector ds, selector fs, selector gs)
{
	Mem35[fs:0x00000000:word32] = fp - 0x00000014;
	word32 ebp_5 = fp - 0x00000004;
	word32 esp_108 = fp - 0x00000038;
	word32 eax_117 = fp - 0x00000014;
	word32 esi_38 = Mem35[0x004EF81C:word32];
	if (Mem35[0x004EF798:word32] == 0x00000000)
	{
		eax_117 = fn004015E0(edx, fp - 0x00000004, es, ds, fs, gs, out edx);
		esp_108 = fp - 0x00000038;
		if (eax_117 == 0x00000000)
		{
			Mem123[fs:0x00000000:word32] = Mem35[fp - 0x00000014:word32];
			return;
		}
		else
		{
l004185A7:
			Mem68[fp - 0x00000008:word32] = 0x00000000;
			if (esi_38 == 0x00000000)
			{
				word32 esp_105 = esp_108 - 0x00000004;
				Mem106[esp_105 + 0x00000000:word32] = 0x004CC324;
				word32 eax_107 = fn004016B0(edx, fp - 0x00000004, es, ds, fs, gs);
				esp_108 = esp_105 + 0x00000004;
				if (eax_107 != 0x00000000)
				{
					Mem112[0x004EF81C:word32] = eax_107;
l004185C4:
					word32 ecx_98 = Mem68[fp + 0x00000004:word32];
					word32 esp_99 = esp_108 - 0x00000004;
					Mem100[esp_99 + 0x00000000:word32] = ecx_98;
					esi_38();
					Mem104[fp - 0x00000020:word32] = eax_117;
				}
			}
			else
				goto l004185C4;
			Mem82[ebp_5 - 0x00000004:word32] = 0xFFFFFFFE;
			Mem86[fs:0x00000000:word32] = Mem82[fn004185F0(ebp_5) - 0x00000010:word32];
			return;
		}
	}
	else
		goto l004185A7;
}

word32 fn004185F0(word32 ebp)
{
	word32 esp_1 = fp;
	if (Mem0[0x004EF798:word32] == 0x00000000)
	{
		byte dl_33 = Mem0[ebp - 0x0000001C:word32] == 0x00000000;
		word32 edx_34 = (word32) dl_33;
		word32 edi_35 = edx_34;
		if (edx_34 != 0x00000000)
			Mem86[ebp + 0x00000008:word32] = GetLastError();
		else
			Mem87[ebp + 0x00000008:word32] = 0x00000000;
		word32 esi_39 = Mem0[ebp - 0x00000020:word32];
		word32 eax_40 = Mem0[0x004EF118:word32];
		if (eax_40 == 0x00000000)
		{
			word32 edx_75;
			word32 eax_79 = fn004017B0(0x004CB834, 0x004EF11C, 0x004CB76C, out edx_75, out ebp, out esi_39, out edi_35);
			esp_1 = fp;
			if (eax_79 != 0x00000000)
			{
				Mem84[0x004EF118:word32] = eax_79;
l00418642:
				word32 esp_66 = esp_1 - 0x00000004;
				Mem67[esp_66 + 0x00000000:word32] = esi_39;
				Mem69[esp_66 - 0x00000004:word32] = 0x00000000;
				esp_1 = esp_66 - 0x00000004;
				eax_40();
			}
		}
		else
			goto l00418642;
		if (edi_35 != 0x00000000)
		{
			word32 esp_59 = esp_1 - 0x00000004;
			Mem60[esp_59 + 0x00000000:word32] = Mem0[ebp + 0x00000008:word32];
			SetLastError(Mem60[esp_59 + 0x00000000:DWORD]);
		}
	}
	return ebp;
}

word32 fn00426ABB(word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 edxOut, ptr32 ebxOut, ptr32 ebpOut)
{
	word32 ebx_21;
	fn0043987C(fp - 0x00000010, es, ds, fs, gs, fp + 0x00000004, out ebx_21);
	Mem25[fp - 0x00000014:word32] = 0x004D4148;
	Mem28[fp - 0x00000018:word32] = fp - 0x00000010;
	Mem29[fp - 0x00000010:word32] = 0x004BDA1C;
	word32 ecx_31;
	fn0043B8E8(dwArg00, dwArg04, out ecx_31);
	int3();
	Mem36[fp - 0x00000014:word32] = fp - 0x00000004;
	Mem41[fp - 0x0000000C:word32] = Mem36[fp - 0x0000000C:word32];
	Mem44[fp - 0x00000024:word32] = fp - 0x0000000C;
	word32 ebx_46;
	fn0043987C(fp - 0x00000020, es, ds, fs, gs, dwArg00, out ebx_46);
	Mem50[fp - 0x00000024:word32] = 0x004D4168;
	Mem53[fp - 0x00000028:word32] = fp - 0x00000020;
	Mem54[fp - 0x00000020:word32] = 0x004BDA28;
	word32 ecx_55;
	fn0043B8E8(dwArg00, dwArg04, out ecx_55);
	int3();
	Mem60[fp - 0x00000024:word32] = fp - 0x00000014;
	Mem64[fp - 0x00000028:word32] = esi;
	Mem66[fp - 0x0000002C:word32] = Mem64[fp - 0x0000001C:word32];
	word32 edx_68;
	word32 ebx_69;
	word32 ecx_70 = fn00439928(ecx_55, es, ds, fs, gs, dwArg00, out edx_68, out ebx_69);
	Mem72[ecx_55 + 0x00000000:word32] = 0x004BDA28;
	word32 ebp_76;
	*ebpOut = Mem72[fp - 0x00000024:word32];
	return ecx_70;
}

word32 fn00426AEB(word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 ecxOut, ptr32 ebxOut, ptr32 ebpOut)
{
	word32 ebx_21;
	fn0043987C(fp - 0x00000010, es, ds, fs, gs, fp + 0x00000004, out ebx_21);
	Mem25[fp - 0x00000014:word32] = 0x004D4168;
	Mem28[fp - 0x00000018:word32] = fp - 0x00000010;
	Mem29[fp - 0x00000010:word32] = 0x004BDA28;
	word32 ecx_31;
	fn0043B8E8(dwArg00, dwArg04, out ecx_31);
	int3();
	Mem36[fp - 0x00000014:word32] = fp - 0x00000004;
	Mem40[fp - 0x00000018:word32] = esi;
	Mem42[fp - 0x0000001C:word32] = Mem40[fp - 0x0000000C:word32];
	word32 edx_44;
	word32 ebx_45;
	word32 ecx_46;
	*ecxOut = fn00439928(ecx_31, es, ds, fs, gs, dwArg00, out edx_44, out ebx_45);
	Mem48[ecx_31 + 0x00000000:word32] = 0x004BDA28;
	word32 ebp_52;
	*ebpOut = Mem48[fp - 0x00000014:word32];
	return ecx_31;
}

word32 fn004394A0(word32 eax, word32 ecx, word32 edx, word32 ebx, word32 ebp, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs, word32 dwArg00, ptr32 ecxOut)
{
	*ecxOut = ecx;
	if (ecx == Mem0[0x004DEBE0:word32] && ecx != 0x00000000)
		return eax;
	else
	{
		Mem31[0x004EE4B0:word32] = eax;
		Mem32[0x004EE4AC:word32] = ecx;
		Mem34[0x004EE4A8:word32] = edx;
		Mem36[0x004EE4A4:word32] = ebx;
		Mem38[0x004EE4A0:word32] = esi;
		Mem39[0x004EE49C:word32] = edi;
		Mem41[0x004EE4C8:word16] = ss;
		Mem43[0x004EE4BC:word16] = cs;
		Mem45[0x004EE498:word16] = ds;
		Mem47[0x004EE494:word16] = es;
		Mem49[0x004EE490:word16] = fs;
		Mem51[0x004EE48C:word16] = gs;
		Mem54[0x004EE4C0:word32] = cond(fp - 0x0000032C);
		Mem57[0x004EE4B4:word32] = ebp;
		Mem60[0x004EE4B8:word32] = dwArg00;
		Mem62[0x004EE4C4:word32] = fp + 0x00000004;
		Mem65[0x004EE400:word32] = 0x00010001;
		Mem67[0x004EE3B4:word32] = Mem65[0x004EE4B8:word32];
		Mem68[0x004EE3A8:word32] = 0xC0000409;
		Mem69[0x004EE3AC:word32] = 0x00000001;
		Mem75[0x004EE3F8:word32] = IsDebuggerPresent();
		fn00447EA8();
		SetUnhandledExceptionFilter(0x00000000);
		UnhandledExceptionFilter(0x004BED14);
		word32 ecx_78;
		*ecxOut = 0x00000001;
		if (Mem75[0x004EE3F8:word32] == 0x00000000)
		{
			Mem102[fp - 0x00000330:word32] = 0x00000001;
			fn00447EA8();
			word32 ecx_103;
			*ecxOut = 0x004BED14;
		}
		return TerminateProcess(GetCurrentProcess(), 0xC0000409);
	}
}

word32 fn004394AF(word32 ebp, word32 esi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, word32 dwArg14, ptr32 edxOut, ptr32 esiOut)
{
	word32 ecx_20 = 0x00000007;
	word32 edi_22 = fp - 0x00000020;
	while (ecx_20 != 0x00000000)
	{
		Mem26[edi_22 + 0x00000000:word32] = 0x00000000;
		edi_22 = edi_22 + 0x00000004;
		ecx_20 = ecx_20 - 0x00000001;
	}
	word32 eax_108;
	if (dwArg0C == 0x00000000)
	{
		word32 edx_65;
		word32 ebx_66;
		word32 ebp_67;
		word32 esi_68;
		word32 edi_69;
		Mem71[fn0043D0A3(fp - 0x00000004, esi, es, ds, fs, gs, out edx_65, out ebx_66, out ebp_67, out esi_68, out edi_69):word32] = 0x00000016;
		word32 edx_72;
		word32 ebx_73;
		word32 ebp_74;
		fn004417A9(es, ds, fs, gs, out edx_72, out ebx_73, out ebp_74);
		eax_108 = 0xFFFFFFFF;
	}
	else
	{
		Mem91[fp - 0x00000030:word32] = esi;
		word32 esp_113 = fp - 0x00000030;
		if (dwArg08 != 0x00000000 && dwArg04 == 0x00000000)
		{
			word32 edx_197;
			word32 ebx_198;
			word32 ebp_199;
			word32 esi_200;
			word32 edi_201;
			Mem203[fn0043D0A3(fp - 0x00000004, dwArg04, es, ds, fs, gs, out edx_197, out ebx_198, out ebp_199, out esi_200, out edi_201):word32] = 0x00000016;
			word32 edx_204;
			word32 ebx_205;
			word32 ebp_206;
			fn004417A9(es, ds, fs, gs, out edx_204, out ebx_205, out ebp_206);
			eax_108 = 0xFFFFFFFF;
		}
		else
		{
			Mem121[fp - 0x00000024:word32] = dwArg04;
			if (dwArg08 >u 0x3FFFFFFF)
				Mem191[fp - 0x00000020:word32] = 0x7FFFFFFF;
			else
				Mem194[fp - 0x00000020:word32] = dwArg08 * 0x00000002;
			word32 edx_135;
			byte bl_136;
			eax_108 = fn00440A57(fp - 0x00000004, es, ds, fs, gs, fp - 0x00000024, dwArg0C, dwArg10, dwArg14, out edx_135, out bl_136);
			esp_113 = fp - 0x00000030;
			if (dwArg04 != 0x00000000)
			{
				word32 v14_142 = Mem121[fp - 0x00000020:word32] - 0x00000001;
				Mem143[fp - 0x00000020:word32] = v14_142;
				if (v14_142 >= 0x00000000)
				{
					Mem175[Mem143[fp - 0x00000024:word32]:byte] = bl_136;
					Mem177[fp - 0x00000024:word32] = Mem175[fp - 0x00000024:word32] + 0x00000001;
				}
				else
				{
					Mem181[fp - 0x00000034:word32] = fp - 0x00000024;
					Mem183[fp - 0x00000038:word32] = 0x00000000;
					word32 edx_184;
					fn0044085D(fp - 0x00000004, es, ds, fs, gs, dwArg04, out edx_184, out bl_136);
					esp_113 = fp - 0x00000030;
				}
				word32 v18_151 = Mem143[fp - 0x00000020:word32] - 0x00000001;
				Mem152[fp - 0x00000020:word32] = v18_151;
				if (v18_151 >= 0x00000000)
					Mem161[Mem152[fp - 0x00000024:word32]:byte] = bl_136;
				else
				{
					word32 esp_163 = esp_113 - 0x00000004;
					Mem164[esp_163 + 0x00000000:word32] = fp - 0x00000024;
					Mem166[esp_163 - 0x00000004:word32] = 0x00000000;
					word32 edx_167;
					byte bl_168;
					fn0044085D(fp - 0x00000004, es, ds, fs, gs, dwArg04, out edx_167, out bl_168);
					esp_113 = esp_163 + 0x00000004;
				}
			}
		}
		word32 esi_116;
		*esiOut = Mem91[esp_113 + 0x00000000:word32];
	}
	return eax_108;
}

word32 fn00439580(word32 esi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, ptr32 edxOut, ptr32 ebxOut, ptr32 esiOut)
{
	*ebxOut = ebx;
	word32 edx_27;
	word32 esi_28;
	return fn004394AF(fp - 0x00000004, esi, es, ds, fs, gs, dwArg04, dwArg08, dwArg0C, 0x00000000, dwArg10, out edx_27, out esi_28);
}

word32 fn004395EE(word32 ebp, word32 esi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 edxOut, ptr32 esiOut)
{
	*edxOut = edx;
	word32 eax_165;
	word32 edi_114 = edi;
	word32 ebp_104 = fp - 0x00000004;
	word32 ebx_12 = dwArg04;
	if (dwArg04 <=u 0xFFFFFFE0)
	{
		word32 esp_105 = fp - 0x00000010;
		do
		{
			if (Mem0[0x004EED38:word32] == 0x00000000)
			{
				word32 ebp_138;
				word32 edx_139 = fn00441CE9(esi, es, ds, fs, gs, out ebp_138);
				word32 esp_140 = esp_105 - 0x00000004;
				Mem141[esp_140 + 0x00000000:word32] = 0x0000001E;
				fn00441B3A(edx_139, ebp_138, es, ds, fs, gs, dwArg00);
				Mem144[esp_140 - 0x00000004:word32] = 0x000000FF;
				word32 esi_147;
				word32 edx_148;
				*edxOut = fn00441854(ebx_12, ebp_138, edi_114, es, ds, fs, gs, dwArg00, out ebx_12, out ebp_104, out esi_147);
				esp_105 = esp_140 + 0x00000004;
			}
			word32 eax_133;
			if (ebx_12 != 0x00000000)
				eax_133 = ebx_12;
			else
				eax_133 = 0x00000001;
			word32 esp_66 = esp_105 - 0x00000004;
			Mem67[esp_66 + 0x00000000:word32] = eax_133;
			Mem69[esp_66 - 0x00000004:word32] = 0x00000000;
			Mem71[esp_66 - 0x00000008:word32] = Mem69[0x004EED38:word32];
			word32 eax_72 = HeapAlloc(Mem71[esp_66 - 0x00000008:HANDLE], Mem71[esp_66 - 4:DWORD], Mem71[esp_66 + 0x00000000:SIZE_T]);
			esp_105 = esp_66 + 0x00000004;
			edi_114 = eax_72;
			if (eax_72 != 0x00000000)
				goto l00439665;
			Mem94[esp_66 + 0x00000000:word32] = 0x0000000C;
			esi = Mem94[esp_66 + 0x00000000:word32];
			esp_105 = esp_66 + 0x00000004;
			if (Mem94[0x004EED40:word32] == eax_72)
			{
				word32 edx_126;
				word32 ebx_127;
				word32 edi_130;
				word32 eax_131 = fn0043D0A3(ebp_104, esi, es, ds, fs, gs, out edx_126, out ebx_127, out ebp_104, out esi, out edi_130);
				Mem132[eax_131 + 0x00000000:word32] = esi;
				goto l0043965E;
			}
			Mem118[esp_66 + 0x00000000:word32] = ebx_12;
			esp_105 = esp_66 + 0x00000004;
		} while (fn00441D4F(dwArg00) != 0x00000000);
l0043965E:
		word32 edx_110;
		word32 ebx_111;
		word32 ebp_112;
		word32 esi_113;
		word32 eax_115 = fn0043D0A3(ebp_104, esi, es, ds, fs, gs, out edx_110, out ebx_111, out ebp_112, out esi_113, out edi_114);
		Mem116[eax_115 + 0x00000000:word32] = esi_113;
		eax_165 = edi_114;
		word32 esi_91;
		*esiOut = Mem71[esp_105 + 0x00000004:word32];
	}
	else
	{
		fn00441D4F(dwArg04);
		word32 edx_158;
		word32 ebx_159;
		word32 ebp_160;
		word32 esi_161;
		word32 edi_162;
		Mem164[fn0043D0A3(fp - 0x00000004, esi, es, ds, fs, gs, out edx_158, out ebx_159, out ebp_160, out esi_161, out edi_162):word32] = 0x0000000C;
		eax_165 = 0x00000000;
	}
	return eax_165;
}

word32 fn00439682(word32 ebp, word32 esi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 edxOut, ptr32 ebxOut)
{
	*edxOut = edx;
	*ebxOut = ebx;
	if (dwArg04 != 0x00000000)
	{
		eax = HeapFree(Mem0[0x004EED38:word32], 0x00000000, dwArg04);
		if (eax == 0x00000000)
		{
			word32 edx_56;
			word32 ebx_57;
			word32 ebp_58;
			word32 esi_59;
			word32 edi_60;
			word32 eax_61 = fn0043D0A3(fp - 0x00000004, esi, es, ds, fs, gs, out edx_56, out ebx_57, out ebp_58, out esi_59, out edi_60);
			Mem65[fp - 0x0000000C:word32] = GetLastError();
			eax = fn0043D061(dwArg00);
			Mem70[eax_61 + 0x00000000:word32] = eax;
		}
	}
	return eax;
}

word32 fn004396BC(word32 ebp, word32 esi, selector es, selector ds, selector fs, selector gs, ptr32 ebxOut, ptr32 esiOut)
{
	*esiOut = esi;
	word32 edx_15;
	word32 ebx_16;
	fn00439682(ebp, esi, es, ds, fs, gs, dwArg00, out edx_15, out ebx_16);
	return edx_15;
}

word32 fn004396C7(word32 ebp, word32 esi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg08, ptr32 ebxOut)
{
	*ebxOut = ebx;
	if (dwArg04 == 0x00000000)
	{
		word32 edx_38;
		word32 esi_39;
		return fn004395EE(fp - 0x00000004, esi, es, ds, fs, gs, dwArg08, out edx_38, out esi_39);
	}
	else
	{
		word32 eax_118;
		word32 esi_100 = dwArg08;
		if (dwArg08 == 0x00000000)
		{
			word32 edx_81;
			word32 ebx_82;
			fn00439682(fp - 0x00000004, dwArg08, es, ds, fs, gs, dwArg04, out edx_81, out ebx_82);
			eax_118 = 0x00000000;
		}
		else
		{
			do
			{
				if (esi_100 >u 0xFFFFFFE0)
				{
					fn00441D4F(esi_100);
					word32 edx_147;
					word32 ebx_148;
					word32 ebp_149;
					word32 esi_150;
					word32 edi_151;
					Mem153[fn0043D0A3(fp - 0x00000004, esi_100, es, ds, fs, gs, out edx_147, out ebx_148, out ebp_149, out esi_150, out edi_151):word32] = 0x0000000C;
					Mem155[fp - 0x00000010:word32] = esi_150;
					fn00441D4F(dwArg00);
					word32 edx_160;
					word32 ebx_161;
					word32 ebp_162;
					word32 esi_163;
					word32 edi_164;
					Mem166[fn0043D0A3(ebp_149, esi_150, es, ds, fs, gs, out edx_160, out ebx_161, out ebp_162, out esi_163, out edi_164):word32] = 0x0000000C;
					goto l0043973C;
				}
				if (esi_100 == 0x00000000)
					esi_100 = esi_100 + 0x00000001;
				Mem176[fp - 0x00000018:word32] = 0x00000000;
				word32 eax_179 = HeapReAlloc(Mem176[0x004EED38:word32], 0x00000000, dwArg04, esi_100);
				word32 edi_181 = eax_179;
				if (eax_179 != 0x00000000)
				{
l00439770:
					eax_118 = edi_181;
					goto l0043973E;
				}
				if (Mem176[0x004EED40:word32] == eax_179)
				{
					word32 edx_220;
					word32 ebx_221;
					word32 ebp_222;
					word32 esi_223;
					word32 eax_225 = fn0043D0A3(fp - 0x00000004, esi_100, es, ds, fs, gs, out edx_220, out ebx_221, out ebp_222, out esi_223, out edi_181);
					Mem229[fp - 0x00000010:word32] = GetLastError();
					Mem233[eax_225 + 0x00000000:word32] = fn0043D061(dwArg00);
					goto l00439770;
				}
			} while (fn00441D4F(esi_100) == 0x00000000);
			word32 edx_206;
			word32 ebx_207;
			word32 ebp_208;
			word32 esi_209;
			word32 edi_210;
			word32 eax_211 = fn0043D0A3(fp - 0x00000004, esi_100, es, ds, fs, gs, out edx_206, out ebx_207, out ebp_208, out esi_209, out edi_210);
			Mem215[fp - 0x00000010:word32] = GetLastError();
			Mem219[eax_211 + 0x00000000:word32] = fn0043D061(dwArg00);
l0043973C:
			eax_118 = 0x00000000;
l0043973E:
		}
		return eax_118;
	}
}

word32 fn00439774(word32 ebp, word32 esi, selector es, selector ds, selector fs, selector gs, ptr32 ebxOut, ptr32 ebpOut, ptr32 esiOut)
{
	*ebpOut = ebp;
	*esiOut = esi;
	*ebxOut = ebx;
	word32 ebp_7;
	*ebpOut = fp - 0x00000004;
	word32 esp_111 = fp - 0x00000014;
	do
	{
		word32 esp_13 = esp_111 - 0x00000004;
		Mem15[esp_13 + 0x00000000:word32] = Mem0[fp + 0x00000004:word32];
		word32 edx_21;
		word32 esi_22;
		if (eax_33 != 0x00000000)
			word32 ebp_54 = Mem30[fp - 0x00000004:word32];
		Mem60[esp_13 + 0x00000000:word32] = Mem30[fp + 0x00000004:word32];
		esp_111 = esp_13 + 0x00000004;
	} while (fn00441D4F(dwArg00) == 0x00000000);
	word32 esi_71;
	*esiOut = 0x004BDA8C;
	if ((Mem60[0x004EE384:byte] & 0x01) == 0x00)
	{
		Mem94[0x004EE384:word32] = Mem60[0x004EE384:word32] | 0x00000001;
		Mem98[esp_13 + 0x00000000:word32] = 0x00000001;
		Mem101[esp_13 - 0x00000004:word32] = fp - 0x00000008;
		Mem103[fp - 0x00000008:word32] = 0x004BDBAC;
		fn004397F4(0x004EE378, dwArg00);
		Mem107[esp_13 + 0x00000000:word32] = 0x004BCF03;
		Mem108[0x004EE378:word32] = 0x004BDA8C;
		fn00439A98(ebx, 0x004BDA8C, 0x004EE378, es, ds, fs, gs, dwArg00);
		esp_111 = esp_13 + 0x00000004;
	}
	word32 esp_75 = esp_111 - 0x00000004;
	Mem76[esp_75 + 0x00000000:word32] = 0x004EE378;
	word32 edx_78;
	word32 ebx_79;
	fn00439928(fp - 0x00000014, es, ds, fs, gs, dwArg00, out edx_78, out ebx_79);
	Mem83[esp_75 + 0x00000000:word32] = 0x004D596C;
	Mem86[esp_75 - 0x00000004:word32] = fp - 0x00000014;
	Mem87[fp - 0x00000014:word32] = 0x004BDA8C;
	word32 ecx_89;
	fn0043B8E8(dwArg00, dwArg04, out ecx_89);
	int3();
	return fn004397F4(ecx_89, dwArg00);
}

word32 fn004397F4(word32 ecx, word32 dwArg04)
{
	Mem12[ecx + 0x00000000:word32] = 0x004BE330;
	Mem14[ecx + 0x00000004:word32] = Mem12[dwArg04 + 0x00000000:word32];
	Mem15[ecx + 0x00000008:byte] = 0x00;
	return ecx;
}

word32 fn0043981E(word32 eax, word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 ebxOut)
{
	*ebxOut = ebx;
	if (dwArg04 != 0x00000000)
	{
		word32 edx_47;
		word32 eax_48 = fn0043B940(eax, dwArg04, out edx_47);
		word32 esi_57;
		word32 eax_58 = fn004395EE(fp - 0x00000004, eax_48 + 0x00000001, es, ds, fs, gs, eax_48 + 0x00000001, out edx, out esi_57);
		Mem63[ecx + 0x00000004:word32] = eax_58;
		if (eax_58 != 0x00000000)
		{
			Mem75[fp - 0x00000010:word32] = Mem63[fp + 0x00000004:word32];
			Mem77[fp - 0x00000014:word32] = esi_57;
			Mem79[fp - 0x00000018:word32] = eax_58;
			word32 ebx_83;
			fn00441D77(esi_57, es, ds, fs, gs, dwArg00, dwArg04, dwArg08, out edx, out ebx_83);
			Mem87[ecx + 0x00000008:byte] = 0x01;
		}
	}
	return edx;
}

word32 fn0043985E(word32 ecx, word32 ebp, selector es, selector ds, selector fs, selector gs, ptr32 edxOut, ptr32 ebxOut, ptr32 ebpOut)
{
	*edxOut = edx;
	*ebxOut = ebx;
	*ebpOut = ebp;
	if (Mem0[ecx + 0x00000008:byte] != 0x00)
	{
		word32 edx_39;
		word32 ebx_40;
		eax = fn00439682(ebp, ecx, es, ds, fs, gs, Mem0[ecx + 0x00000004:word32], out edx_39, out ebx_40);
	}
	Mem23[ecx + 0x00000004:word32] = Mem0[ecx + 0x00000004:word32] & 0x00000000;
	Mem26[ecx + 0x00000008:byte] = 0x00;
	return eax;
}

word32 fn0043987C(word32 ecx, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 ebxOut)
{
	Mem17[ecx + 0x00000004:word32] = Mem0[ecx + 0x00000004:word32] & 0x00000000;
	Mem20[ecx + 0x00000000:word32] = 0x004BE330;
	Mem21[ecx + 0x00000008:byte] = 0x00;
	word32 ebx_28;
	return fn0043981E(dwArg04, fp - 0x00000004, es, ds, fs, gs, Mem21[dwArg04 + 0x00000000:word32], out ebx_28);
}

word32 fn004398A3(word32 ecx, word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 ebxOut)
{
	*ebxOut = ebx;
	if (ecx != dwArg04)
	{
		word32 ebx_41;
		word32 ebp_42;
		word32 eax_43 = fn0043985E(ecx, fp - 0x00000004, es, ds, fs, gs, out edx, out ebx_41, out ebp_42);
		if (Mem0[dwArg04 + 0x00000008:byte] != 0x00)
		{
			Mem47[fp - 0x00000010:word32] = Mem0[dwArg04 + 0x00000004:word32];
			word32 ebx_50;
			edx = fn0043981E(eax_43, ebp_42, es, ds, fs, gs, dwArg00, out ebx_50);
		}
		else
			Mem54[ecx + 0x00000004:word32] = Mem0[dwArg04 + 0x00000004:word32];
	}
	return edx;
}

word32 fn00439928(word32 ecx, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 edxOut, ptr32 ebxOut)
{
	Mem18[ecx + 0x00000004:word32] = Mem0[ecx + 0x00000004:word32] & 0x00000000;
	Mem21[ecx + 0x00000000:word32] = 0x004BE330;
	Mem22[ecx + 0x00000008:byte] = 0x00;
	word32 ebx_27;
	word32 edx_28;
	*edxOut = fn004398A3(ecx, fp - 0x00000004, es, ds, fs, gs, dwArg04, out ebx_27);
	return ecx;
}

word32 fn00439975(selector es, selector ds, selector fs, selector gs)
{
	word32 eax_105;
	word32 eax_23 = DecodePointer(Mem0[0x004F35EC:word32]);
	word32 ebp_120 = fp - 0x00000004;
	word32 eax_29 = DecodePointer(Mem0[0x004F35E8:word32]);
	if (eax_29 >=u eax_23)
	{
		word32 edi_65 = eax_29 - eax_23;
		if (edi_65 >=u 0x00000000)
		{
			word32 esi_126;
			word32 eax_76 = fn00441DD6(eax_29, es, ds, fs, gs, eax_23, out esi_126);
			word32 ebx_134 = eax_76;
			word32 esp_121 = fp - 0x00000014;
			if (eax_76 <u edi_65 + 0x00000004)
			{
				word32 eax_106 = 0x00000800;
				if (eax_76 <u 0x00000800)
					eax_106 = eax_76;
				word32 edi_118;
				word32 eax_117;
				word32 eax_110 = eax_106 + eax_76;
				if (eax_110 >=u eax_76)
				{
					Mem156[fp - 0x00000018:word32] = eax_110;
					Mem158[fp - 0x0000001C:word32] = Mem156[fp - 0x00000008:word32];
					eax_117 = fn0043DA2D(fp - 0x00000004, es, ds, fs, gs, out ebx_134, out ebp_120, out edi_118);
					esp_121 = fp - 0x00000014;
					if (eax_117 == 0x00000000)
					{
l004399DF:
						word32 eax_137 = ebx_134 + 0x00000010;
						if (eax_137 >=u ebx_134)
						{
							word32 esp_140 = esp_121 - 0x00000004;
							Mem141[esp_140 + 0x00000000:word32] = eax_137;
							Mem143[esp_140 - 0x00000004:word32] = Mem141[ebp_120 - 0x00000004:word32];
							word32 ebx_144;
							eax_117 = fn0043DA2D(ebp_120, es, ds, fs, gs, out ebx_144, out ebp_120, out edi_118);
							esp_121 = esp_140 + 0x00000004;
							if (eax_117 != 0x00000000)
							{
l004399F5:
								word32 esp_124 = esp_121 - 0x00000004;
								Mem125[esp_124 + 0x00000000:word32] = eax_117;
								Mem129[0x004F35EC:word32] = EncodePointer(Mem125[esp_124 + 0x00000000:PVOID]);
								esi_126 = eax_117 + (edi_118 >> 0x00000002) * 0x00000004;
								esp_121 = esp_124 + 0x00000004;
l00439A07:
								word32 esp_92 = esp_121 - 0x00000004;
								Mem93[esp_92 + 0x00000000:word32] = Mem0[ebp_120 + 0x00000008:word32];
								Mem97[esi_126 + 0x00000000:word32] = EncodePointer(Mem93[esp_92 + 0x00000000:PVOID]);
								Mem101[esp_92 + 0x00000000:word32] = esi_126 + 0x00000004;
								Mem104[0x004F35E8:word32] = EncodePointer(Mem101[esp_92 + 0x00000000:PVOID]);
								eax_105 = Mem104[ebp_120 + 0x00000008:word32];
							}
							else
							{
l00439A24:
								eax_105 = 0x00000000;
							}
						}
						else
							goto l00439A24;
					}
					else
						goto l004399F5;
				}
				else
					goto l004399DF;
			}
			else
				goto l00439A07;
		}
		else
			goto l00439A24;
	}
	else
		goto l00439A24;
	return eax_105;
}

word32 fn00439A5C(word32 ebx, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs, ptr32 ebxOut)
{
	fn00441E10(ebx, esi, edi, fs, dwLoc0C, 0x004D53C0, 0x0000000C);
	word32 ebp_15 = fn0044186C(ebx, edi, es, ds, fs, gs);
	Mem18[ebp_15 - 0x00000004:word32] = Mem0[ebp_15 - 0x00000004:word32] & 0x00000000;
	Mem22[fp - 0x0000000C:word32] = Mem18[ebp_15 + 0x00000008:word32];
	Mem26[ebp_15 - 0x0000001C:word32] = fn00439975(es, ds, fs, gs);
	Mem27[ebp_15 - 0x00000004:word32] = 0xFFFFFFFE;
	fn00439A92();
	word32 eax_28 = Mem27[ebp_15 - 0x0000001C:word32];
	word32 ebp_33;
	word32 esi_34;
	word32 edi_35;
	word32 ebx_36;
	*ebxOut = fn00441E55(ebp_15, fs, 0x0000000C, dwArg00, dwArg04, dwArg08, dwArg0C, out ebp_33, out esi_34, out edi_35);
	return eax_28;
}

void fn00439A92()
{
	fn00441875();
	return;
}

word32 fn00439A98(word32 ebx, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs, word32 dwArg04)
{
	word32 ebx_17;
	fn00439A5C(ebx, esi, edi, es, ds, fs, gs, out ebx_17);
	return ebx_17;
}

byte fn00439AB0(word32 ebx, word32 dwArg04, word32 dwArg08, word32 dwArg0C, ptr32 esiOut, ptr32 ediOut)
{
fn00439AB0_entry:
l00439AB0:
	word32 esi_13 = dwArg08
	word32 edi_17 = dwArg04
	word32 eax_20 = dwArg0C + dwArg08
	branch dwArg04 <=u dwArg08 || dwArg04 >=u eax_20 l00439AD0
	goto l00439C70
l00439AC8:
l00439AD0:
	branch dwArg0C <u 0x00000080 || Mem0[0x004F35E0:word32] == 0x00000000 l00439AF4
	goto l00439AE1
l00439AD8:
l00439AE1:
	esi_13 = dwArg08
	edi_17 = dwArg04
	branch (dwArg04 & 0x0000000F) != (dwArg08 & 0x0000000F) l00439AF4
l00439AEF:
l00439AEF_thunk_fn00441FFF:
	word32 esi_97
	word32 edi_98
	fn00441FFF(dwArg0C, ebx, dwArg08, dwArg04, out esi_97, out edi_98)
	return D
l00439AF4:
	branch (edi_17 & 0x00000003) != 0x00000000 l00439B10
l00439AFC:
	word32 ecx_52 = dwArg0C >>u 0x00000002
	branch dwArg0C >>u 0x00000002 <u 0x00000008 l00439B30
l00439B07:
	branch ecx_52 == 0x00000000 l00439B09
l00439B07_1:
	Mem70[edi_17 + 0x00000000:word32] = Mem0[esi_13 + 0x00000000:word32]
	esi_13 = esi_13 + 0x00000004
	edi_17 = edi_17 + 0x00000004
	ecx_52 = ecx_52 - 0x00000001
	goto l00439B07
l00439B09:
	switch (dwArg0C & 0x00000003) { l00439C30 }
	goto l00439C30
l00439B10:
	branch dwArg0C <u 0x00000004 l00439B28
l00439B1C:
	switch (edi_17 & 0x00000003) { }
l00439B28:
	switch (dwArg0C - 0x00000004) { }
l00439B30:
	switch (dwArg0C >>u 0x00000002) { l00439C17 }
l00439C17:
	switch (dwArg0C & 0x00000003) { l00439C30 }
l00439C30:
	word32 esi_58
	*esiOut = esi
	word32 edi_60
	*ediOut = edi
	return D
l00439C70:
	word32 esi_103 = dwArg0C - 0x00000004 + dwArg08
	word32 edi_104 = dwArg0C - 0x00000004 + dwArg04
	branch (edi_104 & 0x00000003) != 0x00000000 l00439CA4
l00439C80:
	word32 ecx_120 = dwArg0C >>u 0x00000002
	branch dwArg0C >>u 0x00000002 <u 0x00000008 l00439C98
l00439C8B:
l00439C8C:
	branch ecx_120 == 0x00000000 l00439C8E
l00439C8C_1:
	Mem129[edi_104 + 0x00000000:word32] = Mem0[esi_103 + 0x00000000:word32]
	esi_103 = esi_103 - 0x00000004
	edi_104 = edi_104 - 0x00000004
	ecx_120 = ecx_120 - 0x00000001
	goto l00439C8C
l00439C8E:
	D = false
	switch (dwArg0C & 0x00000003) { l00439DCC }
	goto l00439DCC
l00439C98:
l00439CA4:
	branch dwArg0C <u 0x00000004 l00439CBC
l00439CB0:
	switch (edi_104 & 0x00000003) { }
l00439CBC:
	switch (dwArg0C) { l00439DCC }
l00439DCC:
	word32 esi_114
	*esiOut = esi
	word32 edi_116
	*ediOut = edi
	return D
fn00439AB0_exit:
}

word32 fn0043A0B9(word32 ecx, word32 esi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 ebxOut, ptr32 esiOut)
{
	word32 ebx_26;
	word32 esi_27;
	return fn004434D1(ecx, esi, es, ds, fs, gs, dwArg04, 0x00000000, 0x0000000A, out ebx_26, out esi_27);
}

word32 fn0043A4C5(word32 edx, word32 ebp, word32 esi, selector es, selector ds, selector fs, selector gs, ptr32 esiOut)
{
	word32 ebp_13 = fp - 0x00000004;
	if (Mem0[0x004EE398:word32] == 0x00000001)
		edx = fn00441CE9(esi, es, ds, fs, gs, out ebp_13);
	Mem15[fp - 0x00000008:word32] = Mem0[ebp_13 + 0x00000008:word32];
	fn00441B3A(edx, ebp_13, es, ds, fs, gs, dwArg00);
	Mem23[fp - 0x0000000C:word32] = 0x000000FF;
	word32 ebx_25;
	word32 ebp_26;
	word32 esi_27;
	fn00441854(ebx, ebp_13, edi, es, ds, fs, gs, dwArg00, out ebx_25, out ebp_26, out esi_27);
	return ebx_25;
}

void fn0043A65B(word32 edx, word32 ebx, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs)
{
	fn00444172();
	word32 ebp_11 = fn00441E10(ebx, esi, edi, fs, dwLoc0C, 0x004D5440, 0x00000058);
	Mem14[fp - 0x0000000C:word32] = ebp_11 - 0x00000068;
	GetStartupInfoW(Mem14[fp - 0x0000000C:LPSTARTUPINFOW]);
	word32 esp_15 = fp - 0x00000008;
	word32 esi_16 = 0x00000000;
	if (Mem14[0x004F35FC:word32] == 0x00000000)
	{
		Mem243[fp - 0x0000000C:word32] = 0x00000000;
		Mem245[fp - 0x00000010:word32] = 0x00000000;
		Mem247[fp - 0x00000014:word32] = 0x00000001;
		Mem249[fp - 0x00000018:word32] = 0x00000000;
		HeapSetInformation(Mem249[fp - 0x00000018:HANDLE], Mem249[fp - 20:HEAP_INFORMATION_CLASS], Mem249[fp - 16:PVOID], Mem249[fp - 12:SIZE_T]);
		esp_15 = fp - 0x00000008;
	}
	if (Mem14[0x00400000:word16] != 0x5A4D)
	{
l0043A527:
		Mem224[ebp_11 - 0x0000001C:word32] = 0x00000000;
	}
	else
	{
		word32 eax_226 = Mem14[0x0040003C:word32];
		if (Mem14[eax_226 + 0x00400000:word32] == 0x00004550 && (Mem14[eax_226 + 0x00400018:word16] == 0x010B && Mem14[eax_226 + 0x00400074:word32] >u 0x0000000E))
			Mem241[ebp_11 - 0x0000001C:word32] = (word32) (Mem14[eax_226 + 0x004000E8:word32] != 0x00000000);
		else
			goto l0043A527;
	}
	if (fn00441D22() == 0x00000000)
	{
		word32 esp_210 = esp_15 - 0x00000004;
		Mem211[esp_210 + 0x00000000:word32] = 0x0000001C;
		ebx = fn0043A4C5(edx, ebp_11, 0x00000000, es, ds, fs, gs, out esi_16);
		esp_15 = esp_210 + 0x00000004;
	}
	word32 edx_44;
	word32 esi_46;
	word32 ebp_187;
	if (fn00443194(ebx, ebp_11, esi_16, es, ds, fs, gs, out edx_44, out ebp_187, out esi_46) == 0x00000000)
	{
		word32 esp_204 = esp_15 - 0x00000004;
		Mem205[esp_204 + 0x00000000:word32] = 0x00000010;
		word32 esi_206;
		ebx = fn0043A4C5(edx_44, ebp_187, esi_46, es, ds, fs, gs, out esi_206);
		esp_15 = esp_204 + 0x00000004;
	}
	word32 esi_106 = fn00444126(0x00000058, dwArg00);
	Mem56[ebp_187 - 0x00000004:word32] = esi_106;
	if (fn00443EE1(es, ds, fs, gs) < 0x00000000)
	{
		word32 esp_194 = esp_15 - 0x00000004;
		Mem195[esp_194 + 0x00000000:word32] = 0x0000001B;
		word32 edx_196;
		fn00441AF6(ebp_187, esi_106, es, ds, fs, gs, out edx_196, out ebx, out ebp_187, out esi_106);
		esp_15 = esp_194;
	}
	Mem68[0x004F35F8:word32] = GetCommandLineA();
	Mem70[0x004EE390:word32] = fn00443E4A(ebp_187, es, ds, fs, gs);
	word32 eax_189 = fn00443D8F(ebp_187, esi_106, edi, es, ds, fs, gs);
	if (eax_189 < 0x00000000)
	{
		word32 esp_183 = esp_15 - 0x00000004;
		Mem184[esp_183 + 0x00000000:word32] = 0x00000008;
		word32 edx_185;
		eax_189 = fn00441AF6(ebp_187, esi_106, es, ds, fs, gs, out edx_185, out ebx, out ebp_187, out esi_106);
		esp_15 = esp_183;
	}
	word32 ebp_177;
	word32 ebx_176;
	if (fn00443B19(eax_189, ebx, ebp_187, esi_106, edi, es, ds, fs, gs, out ebx_176, out ebp_177) < 0x00000000)
	{
		word32 esp_173 = esp_15 - 0x00000004;
		Mem174[esp_173 + 0x00000000:word32] = 0x00000009;
		word32 edx_175;
		fn00441AF6(ebp_177, esi_106, es, ds, fs, gs, out edx_175, out ebx_176, out ebp_177, out esi_106);
		esp_15 = esp_173;
	}
	word32 esp_95 = esp_15 - 0x00000004;
	Mem96[esp_95 + 0x00000000:word32] = 0x00000001;
	word32 ebx_107;
	word32 eax_98 = fn004418D5(ebx_176, ebp_177, esi_106, edi, es, ds, fs, gs, dwArg00, out ebx_107);
	word32 esp_101 = esp_95 + 0x00000004;
	if (eax_98 != esi_106)
	{
		Mem164[esp_95 + 0x00000000:word32] = eax_98;
		word32 edx_165;
		word32 ebp_167;
		fn00441AF6(ebp_177, esi_106, es, ds, fs, gs, out edx_165, out ebx_107, out ebp_167, out esi_106);
		esp_101 = esp_95;
	}
	word32 ecx_116;
	word32 edx_108;
	word32 ebp_109;
	word32 esi_110;
	word32 eax_111 = fn00443ABA(ebx_107, esi_106, es, ds, fs, gs, out edx_108, out ebp_109, out esi_110);
	if ((Mem96[ebp_109 - 0x0000003C:byte] & 0x01) != 0x00)
		ecx_116 = (word32) Mem96[ebp_109 - 0x00000038:word16];
	else
	{
		word32 esp_157 = esp_101 - 0x00000004;
		Mem158[esp_157 + 0x00000000:word32] = 0x0000000A;
		ecx_116 = Mem158[esp_157 + 0x00000000:word32];
		esp_101 = esp_157 + 0x00000004;
	}
	word32 esp_120 = esp_101 - 0x00000004;
	Mem121[esp_120 + 0x00000000:word32] = ecx_116;
	Mem123[esp_120 - 0x00000004:word32] = eax_111;
	Mem125[esp_120 - 0x00000008:word32] = esi_110;
	Mem127[esp_120 - 0x0000000C:word32] = 0x00400000;
	word32 edi_130;
	word32 esi_129;
	word32 ebx_128;
	word32 eax_131 = fn00474780(edx_108, ebp_109, es, ds, fs, gs, dwArg00, out ebx_128, out esi_129, out edi_130);
	Mem134[ebp_109 - 0x00000020:word32] = eax_131;
	if (Mem134[ebp_109 - 0x0000001C:word32] == esi_129)
	{
		Mem151[esp_120 + 0x00000000:word32] = eax_131;
		ebx_128 = fn00441AAC(ebx_128, esi_129, edi_130, es, ds, fs, gs, dwArg00, out esi_129);
	}
	word32 ebp_140 = fn00441AD8(ebx_128, esi_129, edi_130, es, ds, fs, gs);
	Mem141[ebp_140 - 0x00000004:word32] = 0xFFFFFFFE;
	word32 ebp_146;
	word32 esi_147;
	word32 edi_148;
	fn00441E55(ebp_140, fs, 0x00000058, dwArg00, dwArg04, dwArg08, dwArg0C, out ebp_146, out esi_147, out edi_148);
	return;
}

word32 fn0043A7F1(word32 ecx, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 ebxOut)
{
	*ebxOut = ebx;
	Mem15[ecx + 0x0000000C:byte] = 0x00;
	word32 edi_3 = edi;
	if (dwArg04 == 0x00000000)
	{
		word32 ebp_39;
		word32 ebx_38;
		word32 esi_40;
		edx = fn0044304B(fp - 0x00000004, ecx, es, ds, fs, gs, out ebx_38, out ebp_39, out esi_40);
		Mem42[esi_40 + 0x00000008:word32] = dwArg04;
		Mem44[esi_40 + 0x00000000:word32] = Mem42[dwArg04 + 0x0000006C:word32];
		Mem46[esi_40 + 0x00000004:word32] = Mem44[dwArg04 + 0x00000068:word32];
		if (Mem46[esi_40 + 0x00000000:word32] != Mem46[0x004DEFA8:word32] && (Mem46[dwArg04 + 0x00000070:word32] & Mem46[0x004DED5C:word32]) == 0x00000000)
		{
			word32 eax_95 = fn00442E22(ebx_38, esi_40, edi, es, ds, fs, gs, out edx, out ebx_38, out esi_40, out edi_3);
			Mem96[esi_40 + 0x00000000:word32] = eax_95;
		}
		if (Mem46[esi_40 + 0x00000004:word32] != Mem46[0x004DF438:word32] && (Mem46[Mem46[esi_40 + 0x00000008:word32] + 0x00000070:word32] & Mem46[0x004DED5C:word32]) == 0x00000000)
		{
			word32 ebx_81;
			word32 ebp_82;
			word32 edi_84;
			word32 eax_85 = fn00444430(ebx_38, esi_40, edi_3, es, ds, fs, gs, out edx, out ebx_81, out ebp_82, out esi_40, out edi_84);
			Mem86[esi_40 + 0x00000004:word32] = eax_85;
		}
		word32 eax_66 = Mem46[esi_40 + 0x00000008:word32];
		if ((Mem46[eax_66 + 0x00000070:byte] & 0x02) == 0x00)
		{
			Mem71[eax_66 + 0x00000070:word32] = Mem46[eax_66 + 0x00000070:word32] | 0x00000002;
			Mem74[esi_40 + 0x0000000C:byte] = 0x01;
		}
	}
	else
	{
		Mem98[ecx + 0x00000000:word32] = Mem15[dwArg04 + 0x00000000:word32];
		Mem100[ecx + 0x00000004:word32] = Mem98[dwArg04 + 0x00000004:word32];
	}
	return edx;
}

word32 fn0043A878(word32 esi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 esiOut)
{
	*esiOut = esi;
	if (dwArg04 != 0x00000000 && Mem0[dwArg04 - 0x00000008:word32] == 0x0000DDDD)
	{
		word32 ebx_41;
		fn00439682(fp - 0x00000004, esi, es, ds, fs, gs, dwArg04 - 0x00000008, out edx, out ebx_41);
	}
	return edx;
}

word32 fn0043B7CE(selector es, selector ds, selector fs, selector gs, word32 dwArg08, ptr32 edxOut, ptr32 ebxOut, ptr32 esiOut)
{
	*esiOut = esi;
	word32 ebx_18;
	word32 edx_19;
	*edxOut = fn0043A7F1(fp - 0x00000014, es, ds, fs, gs, dwArg08, out ebx_18);
	word32 eax_25 = (word32) Mem0[Mem0[fp - 0x00000014:word32] + 0x000000C8:word32][(word32) Mem0[fp + 0x00000004:byte] * 0x0002];
	if (Mem0[fp - 0x00000008:byte] != 0x00)
	{
		word32 ecx_41 = Mem0[fp - 0x0000000C:word32];
		Mem43[ecx_41 + 0x00000070:word32] = Mem0[ecx_41 + 0x00000070:word32] & 0xFFFFFFFD;
	}
	return eax_25 & 0x00008000;
}

word32 fn0043B806(selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 edxOut, ptr32 ebxOut, ptr32 esiOut)
{
	word32 edx_17;
	word32 ebx_18;
	word32 esi_19;
	return fn0043B7CE(es, ds, fs, gs, 0x00000000, out edx_17, out ebx_18, out esi_19);
}

word32 fn0043B8E8(word32 dwArg04, word32 dwArg08, ptr32 ecxOut)
{
	word32 ecx_19;
	*ecxOut = 0x00000008;
	word32 esi_21 = 0x004BE364;
	word32 edi_22 = fp - 0x00000024;
	while (ecx_19 != 0x00000000)
	{
		Mem28[edi_22 + 0x00000000:word32] = Mem0[esi_21 + 0x00000000:word32];
		esi_21 = esi_21 + 0x00000004;
		edi_22 = edi_22 + 0x00000004;
		*ecxOut = ecx_19 - 0x00000001;
	}
	if (dwArg08 != 0x00000000 && (Mem0[dwArg08 + 0x00000000:byte] & 0x08) != 0x00)
		;
	Mem56[fp - 0x00000030:word32] = dwLoc20;
	RaiseException(dwLoc24, 0x00000008, dwLoc14, fp - 0x00000010);
	return fp - 0x00000010;
}

word32 fn0043B940(word32 eax, word32 dwArg04, ptr32 edxOut)
{
	*edxOut = edx;
	word32 ecx_27 = dwArg04;
	if ((dwArg04 & 0x00000003) != 0x00000000)
	{
l0043B94C:
		do
		{
			ecx_27 = ecx_27 + 0x00000001;
			if (Mem0[ecx_27 + 0x00000000:byte] == 0x00)
				return ecx_27 - 0x00000001 - dwArg04;
		} while ((ecx_27 & 0x00000003) != 0x00000000);
l0043B970:
		while (true)
		{
			word32 eax_40 = Mem0[ecx_27 + 0x00000000:word32];
			word32 edx_42 = eax_40 + 0x7EFEFEFF;
			*edxOut = edx_42;
			ecx_27 = ecx_27 + 0x00000004;
			if (((eax_40 ^ 0xFFFFFFFF ^ eax_40 + 0x7EFEFEFF) & 0x81010100) == 0x00000000)
				continue;
			word32 eax_49 = Mem0[ecx_27 - 0x00000004:word32];
			byte ah_51 = SLICE(eax_49, byte, 8);
			if ((byte) eax_49 == 0x00)
				return ecx_27 - 0x00000004 - dwArg04;
			if (ah_51 == 0x00)
				return ecx_27 - 0x00000003 - dwArg04;
			if ((eax_49 & 0x00FF0000) == 0x00000000)
				return ecx_27 - 0x00000002 - dwArg04;
			if ((eax_49 & 0xFF000000) == 0x00000000)
				;
		}
	}
	else
		goto l0043B970;
fn0043B940_exit:
}

byte fn0043B9D0(word32 ebx, word32 dwArg04, word32 dwArg08, word32 dwArg0C, ptr32 ebxOut, ptr32 ebpOut, ptr32 esiOut, ptr32 ediOut)
{
fn0043B9D0_entry:
l0043B9D0:
	esp = fp
	esp = fp - 0x00000004
	dwLoc04 = ebp
	ebp = fp - 0x00000004
	esp = fp - 0x00000008
	dwLoc08 = edi
	esp = fp - 0x0000000C
	dwLoc0C = esi
	esi = dwArg08
	ecx = dwArg0C
	edi = dwArg04
	eax = ecx
	edx = ecx
	dl = (byte) edx (alias)
	eax = eax + esi
	al = (byte) eax (alias)
	SCZO = cond(edi - esi)
	CZ = SCZO (alias)
	branch Test(ULE,CZ) l0043B9F0
l0043B9E8:
	SCZO = cond(edi - eax)
	C = SCZO (alias)
	branch Test(ULT,C) l0043BB90
l0043B9F0:
	SCZO = cond(ecx - 0x00000080)
	C = SCZO (alias)
	branch Test(ULT,C) l0043BA14
l0043B9F8:
	SCZO = cond(Mem0[0x004F35E0:word32] - 0x00000000)
	Z = SCZO (alias)
	branch Test(EQ,Z) l0043BA14
l0043BA01:
	esp = fp - 0x00000010
	dwLoc10 = edi
	esp = fp - 0x00000014
	dwLoc14 = esi
	edi = edi & 0x0000000F
	esi = esi & 0x0000000F
	SCZO = cond(edi - esi)
	Z = SCZO (alias)
	esi = dwLoc14
	esp = fp - 0x00000010
	edi = dwLoc10
	esp = fp - 0x0000000C
	branch Test(NE,Z) l0043BA14
l0043BA0F:
	ebp = fn00441FFF(ecx, ebx, esi, edi, out esi, out edi)
	return D
l0043BA14:
	SZO = cond(edi & 0x00000003)
	Z = SZO (alias)
	C = false
	branch Test(NE,Z) l0043BA30
l0043BA1C:
	ecx = ecx >>u 0x00000002
	edx = edx & 0x00000003
	dl = (byte) edx (alias)
	SCZO = cond(ecx - 0x00000008)
	C = SCZO (alias)
	branch Test(ULT,C) l0043BA50
l0043BA27:
	branch ecx == 0x00000000 l0043BA29
l0043BA27_1:
	v14 = Mem0[esi + 0x00000000:word32]
	Mem0[edi + 0x00000000:word32] = v14
	esi = esi + 0x00000004
	edi = edi + 0x00000004
	ecx = ecx - 0x00000001
	goto l0043BA27
l0043BA29:
	switch (edx) { l0043BB50 }
	goto l0043BB50
l0043BA30:
	eax = edi
	al = (byte) eax (alias)
	edx = 0x00000003
	ecx = ecx - 0x00000004
	SCZO = cond(ecx)
	C = SCZO (alias)
	branch Test(ULT,C) l0043BA48
l0043BA3C:
	eax = eax & 0x00000003
	ecx = ecx + eax
	SCZO = cond(ecx)
	switch (eax) { }
l0043BA48:
	switch (ecx) { }
l0043BA50:
	switch (ecx) { l0043BB37 }
l0043BB37:
	switch (edx) { l0043BB50 }
l0043BB50:
	eax = dwArg04
	esi = dwLoc0C
	esp = fp - 0x00000008
	edi = dwLoc08
	esp = fp - 0x00000004
	ebp = dwLoc04
	esp = fp
	return D
l0043BB90:
	esi = ecx - 0x00000004 + esi
	edi = ecx - 0x00000004 + edi
	SZO = cond(edi & 0x00000003)
	Z = SZO (alias)
	C = false
	branch Test(NE,Z) l0043BBC4
l0043BBA0:
	ecx = ecx >>u 0x00000002
	edx = edx & 0x00000003
	dl = (byte) edx (alias)
	SCZO = cond(ecx - 0x00000008)
	C = SCZO (alias)
	branch Test(ULT,C) l0043BBB8
l0043BBAB:
	D = true
l0043BBAC:
	branch ecx == 0x00000000 l0043BBAE
l0043BBAC_1:
	v27 = Mem0[esi + 0x00000000:word32]
	Mem0[edi + 0x00000000:word32] = v27
	esi = esi - 0x00000004
	edi = edi - 0x00000004
	ecx = ecx - 0x00000001
	goto l0043BBAC
l0043BBAE:
	D = false
	switch (edx) { l0043BCEC }
	goto l0043BCEC
l0043BBB8:
	ecx = -ecx
	SCZO = cond(ecx)
	C = ecx == 0x00000000
l0043BBC4:
	eax = edi
	al = (byte) eax (alias)
	edx = 0x00000003
	SCZO = cond(ecx - 0x00000004)
	C = SCZO (alias)
	branch Test(ULT,C) l0043BBDC
l0043BBD0:
	eax = eax & 0x00000003
	ecx = ecx - eax
	SCZO = cond(ecx)
	switch (eax) { }
l0043BBDC:
	switch (ecx) { l0043BCEC }
l0043BCEC:
	eax = dwArg04
	esi = dwLoc0C
	esp = fp - 0x00000008
	edi = dwLoc08
	esp = fp - 0x00000004
	ebp = dwLoc04
	esp = fp
	return D
fn0043B9D0_exit:
	use ebx (=> ebxOut)
	use ebp (=> ebpOut)
	use esi (=> esiOut)
	use edi (=> ediOut)
}

word32 fn0043D061(word32 dwArg04)
{
	word32 ecx_10 = 0x00000000;
	do
	{
		if (dwArg04 == 0x004DEA68[ecx_10 * 0x00000008])
			return 0x004DEA6C[ecx_10 * 0x00000008];
		ecx_10 = ecx_10 + 0x00000001;
	} while (ecx_10 <u 0x0000002D);
	if (dwArg04 <=u 0x00000024)
		return 0x0000000D;
	else
		return (0x00000000 - (0x0000000E <u dwArg04 + 0xFFFFFF44) & 0x0000000E) + 0x00000008;
fn0043D061_exit:
}

word32 fn0043D0A3(word32 ebp, word32 esi, selector es, selector ds, selector fs, selector gs, ptr32 edxOut, ptr32 ebxOut, ptr32 ebpOut, ptr32 esiOut, ptr32 ediOut)
{
	word32 edx_8;
	word32 ebx_9;
	word32 ebp_10;
	word32 esi_11;
	word32 edi_12;
	word32 eax_13 = fn00442FD2(ebp, esi, es, ds, fs, gs, out edx_8, out ebx_9, out ebp_10, out esi_11, out edi_12);
	if (eax_13 == 0x00000000)
		return 0x004DEBD0;
	else
		return eax_13 + 0x00000008;
}

word32 fn0043D0B6(word32 ebp, word32 esi, selector es, selector ds, selector fs, selector gs, ptr32 edxOut, ptr32 ebxOut, ptr32 ebpOut, ptr32 esiOut, ptr32 ediOut)
{
	word32 edx_8;
	word32 ebx_9;
	word32 ebp_10;
	word32 esi_11;
	word32 edi_12;
	word32 eax_13 = fn00442FD2(ebp, esi, es, ds, fs, gs, out edx_8, out ebx_9, out ebp_10, out esi_11, out edi_12);
	if (eax_13 == 0x00000000)
		return 0x004DEBD4;
	else
		return eax_13 + 0x0000000C;
}

word32 fn0043D0C9(word32 ebp, word32 esi, selector es, selector ds, selector fs, selector gs, ptr32 edxOut)
{
	word32 edx_15;
	word32 ebx_16;
	word32 ebp_17;
	word32 esi_18;
	word32 edi_19;
	word32 eax_20 = fn0043D0B6(fp - 0x00000004, esi, es, ds, fs, gs, out edx_15, out ebx_16, out ebp_17, out esi_18, out edi_19);
	word32 ecx_22 = Mem0[ebp_17 + 0x00000008:word32];
	Mem24[fp - 0x0000000C:word32] = ecx_22;
	Mem25[eax_20 + 0x00000000:word32] = ecx_22;
	word32 edx_31;
	word32 ebx_32;
	word32 ebp_33;
	word32 esi_34;
	word32 edi_35;
	word32 eax_36 = fn0043D0A3(ebp_17, fn0043D061(dwArg00), es, ds, fs, gs, out edx_31, out ebx_32, out ebp_33, out esi_34, out edi_35);
	Mem37[eax_36 + 0x00000000:word32] = esi_34;
	return eax_36;
}

word32 fn0043D54A(word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg10, word32 dwArg14, word32 dwArg20, word32 dwArg24, ptr32 blOut)
{
	word32 ebp_169 = fp - 0x00000004;
	word32 edx_115 = dwArg14;
	if (dwArg14 > 0x00000000)
	{
		word32 eax_421 = dwArg10;
		word32 ecx_424 = dwArg14;
		do
		{
			ecx_424 = ecx_424 - 0x00000001;
			if (Mem0[eax_421 + 0x00000000:byte] == 0x00)
				goto l0043D57A;
			eax_421 = eax_421 + 0x00000001;
		} while (ecx_424 != 0x00000000);
		ecx_424 = ecx_424 | 0xFFFFFFFF;
		word32 eax_437 = dwArg14 - ecx_424;
		word32 eax_438 = eax_437 - 0x00000001;
		if (eax_437 - 0x00000001 < dwArg14)
			eax_438 = eax_437;
		dwArg14 = eax_438;
	}
	if (dwArg20 == 0x00000000)
		dwArg20 = Mem0[Mem0[dwArg04 + 0x00000000:word32] + 0x00000004:word32];
	word32 eax_119;
	word32 esi_132 = MultiByteToWideChar;
	word32 eax_66 = MultiByteToWideChar(dwArg20, (word32) (dwArg24 != 0x00000000) * 0x00000008 + 0x00000001, dwArg10, dwArg14, 0x00000000, 0x00000000);
	word32 esp_137 = fp - 0x00000020;
	if (eax_66 == 0x00000000)
	{
l0043D5C6:
		eax_119 = 0x00000000;
	}
	else
	{
		word32 eax_135;
		eax_135 = eax_66;
		if (eax_66 > 0x00000000)
		{
			Mem359[fp - 0x00000024:word32] = 0xFFFFFFE0;
			edx_115 = 0x0000000000000000 % eax_66;
			esp_137 = fp - 0x00000020;
			eax_135 = SEQ(edx_115, 0x00000000) /u eax_66;
			if (eax_135 >=u 0x00000002)
			{
				word32 eax_371 = eax_66 + 0x00000008 + eax_66;
				if (eax_371 <=u 0x00000400)
				{
					fn00444E40(eax_371);
					eax_135 = fp - 0x00000020;
					if (fp != 0x00000020)
					{
						Mem402[fp - 0x00000020:word32] = 0x0000CCCC;
l0043D60A:
						eax_135 = eax_135 + 0x00000008;
					}
				}
				else
				{
					Mem404[fp - 0x00000024:word32] = eax_371;
					eax_135 = fn004395EE(fp - 0x00000004, esi_132, es, ds, fs, gs, 0x00000000, out edx_115, out esi_132);
					esp_137 = fp - 0x00000020;
					if (eax_135 != 0x00000000)
					{
						Mem414[eax_135 + 0x00000000:word32] = 0x0000DDDD;
						goto l0043D60A;
					}
				}
				Mem385[fp - 0x00000010:word32] = eax_135;
			}
			else
l0043D612:
		}
		else
			goto l0043D612;
		if (Mem0[fp - 0x00000010:word32] != 0x00000000)
		{
			word32 esp_140 = esp_137 - 0x00000004;
			Mem141[esp_140 + 0x00000000:word32] = eax_66;
			Mem143[esp_140 - 0x00000004:word32] = Mem141[fp - 0x00000010:word32];
			Mem145[esp_140 - 0x00000008:word32] = Mem143[fp + 0x00000014:word32];
			Mem147[esp_140 - 0x0000000C:word32] = Mem145[fp + 0x00000010:word32];
			Mem149[esp_140 - 0x00000010:word32] = 0x00000001;
			Mem151[esp_140 - 0x00000014:word32] = Mem149[fp + 0x00000020:word32];
			word32 esp_150 = esp_140 - 0x00000014;
			esi_132();
			if (eax_135 != 0x00000000)
			{
				Mem183[esp_140 - 0x00000018:word32] = 0x00000000;
				Mem185[esp_140 - 0x0000001C:word32] = 0x00000000;
				Mem187[esp_140 - 0x00000020:word32] = eax_66;
				Mem189[esp_140 - 0x00000024:word32] = Mem187[fp - 0x00000010:word32];
				Mem191[esp_140 - 0x00000028:word32] = Mem189[fp + 0x0000000C:word32];
				Mem193[esp_140 - 0x0000002C:word32] = Mem191[fp + 0x00000008:word32];
				word32 eax_194 = LCMapStringW(Mem193[esp_140 - 0x0000002C:LCID], Mem193[esp_140 - 40:DWORD], Mem193[esp_140 - 36:LPCWSTR], Mem193[esp_140 - 32:int32], Mem193[esp_140 - 28:LPWSTR], Mem193[esp_140 - 24:int32]);
				Mem198[fp - 0x0000000C:word32] = eax_194;
				esi_132 = LCMapStringW;
				esp_150 = esp_140 - 0x00000014;
				if (eax_194 != 0x00000000)
					if ((Mem198[fp + 0x0000000C:word32] & 0x00000400) != 0x00000000)
					{
						word32 eax_205 = Mem198[fp + 0x0000001C:word32];
						if (eax_205 != 0x00000000 && Mem198[fp - 0x0000000C:word32] <= eax_205)
						{
							Mem213[esp_140 - 0x00000018:word32] = eax_205;
							Mem215[esp_140 - 0x0000001C:word32] = Mem213[fp + 0x00000018:word32];
							Mem217[esp_140 - 0x00000020:word32] = eax_66;
							Mem219[esp_140 - 0x00000024:word32] = Mem217[fp - 0x00000010:word32];
							Mem221[esp_140 - 0x00000028:word32] = Mem219[fp + 0x0000000C:word32];
							Mem223[esp_140 - 0x0000002C:word32] = Mem221[fp + 0x00000008:word32];
							LCMapStringW(Mem223[esp_140 - 0x0000002C:LCID], Mem223[esp_140 - 40:DWORD], Mem223[esp_140 - 36:LPCWSTR], Mem223[esp_140 - 32:int32], Mem223[esp_140 - 28:LPWSTR], Mem223[esp_140 - 24:int32]);
							esp_150 = esp_140 - 0x00000014;
						}
					}
					else
					{
						word32 edi_232;
						word32 edi_226 = Mem198[fp - 0x0000000C:word32];
						if (edi_226 > 0x00000000)
						{
							Mem303[esp_140 - 0x00000018:word32] = 0xFFFFFFE0;
							word32 eax_305 = Mem303[esp_140 - 0x00000018:word32];
							esp_150 = esp_140 - 0x00000014;
							eax_194 = SEQ(SEQ(0x00000000, eax_305) % edi_226, eax_305) /u edi_226;
							if (eax_194 >=u 0x00000002)
							{
								word32 eax_315 = edi_226 + 0x00000008 + edi_226;
								if (eax_315 <=u 0x00000400)
								{
									eax_194 = fn00444E40(eax_315);
									if (esp_140 != 0x00000014)
									{
										Mem326[esp_140 - 0x00000014:word32] = 0x0000CCCC;
										edi_232 = esp_140 - 0x0000000C;
l0043D6D0:
										if (edi_232 != 0x00000000)
										{
											word32 esp_242 = esp_150 - 0x00000004;
											Mem243[esp_242 + 0x00000000:word32] = Mem198[fp - 0x0000000C:word32];
											Mem245[esp_242 - 0x00000004:word32] = edi_232;
											Mem247[esp_242 - 0x00000008:word32] = Mem245[fp - 0x00000014:word32];
											Mem249[esp_242 - 0x0000000C:word32] = Mem247[fp - 0x00000010:word32];
											Mem251[esp_242 - 0x00000010:word32] = Mem249[fp + 0x0000000C:word32];
											Mem253[esp_242 - 0x00000014:word32] = Mem251[fp + 0x00000008:word32];
											word32 esp_252 = esp_242 - 0x00000014;
											esi_132();
											if (eax_194 != 0x00000000)
											{
												word32 esp_273;
												Mem268[esp_242 - 0x00000018:word32] = 0x00000000;
												Mem270[esp_242 - 0x0000001C:word32] = 0x00000000;
												if (Mem270[fp + 0x0000001C:word32] == 0x00000000)
												{
													Mem286[esp_242 - 0x00000020:word32] = 0x00000000;
													Mem288[esp_242 - 0x00000024:word32] = 0x00000000;
													esp_273 = esp_242 - 0x00000024;
												}
												else
												{
													Mem290[esp_242 - 0x00000020:word32] = Mem270[fp + 0x0000001C:word32];
													Mem292[esp_242 - 0x00000024:word32] = Mem290[fp + 0x00000018:word32];
													esp_273 = esp_242 - 0x00000024;
												}
												word32 esp_274 = esp_273 - 0x00000004;
												Mem275[esp_274 + 0x00000000:word32] = Mem270[fp - 0x0000000C:word32];
												Mem277[esp_274 - 0x00000004:word32] = edi_232;
												Mem279[esp_274 - 0x00000008:word32] = 0x00000000;
												Mem281[esp_274 - 0x0000000C:word32] = Mem279[fp + 0x00000020:word32];
												Mem284[fp - 0x0000000C:word32] = WideCharToMultiByte(Mem281[esp_274 - 0x0000000C:UINT], Mem281[esp_274 - 8:DWORD], Mem281[esp_274 - 4:LPCWSTR], Mem281[esp_274 + 0x00000000:int32], Mem281[esp_274 + 4:LPSTR], Mem281[esp_274 + 8:int32], Mem281[esp_274 + 12:LPCSTR], Mem281[esp_274 + 16:LPBOOL]);
												esp_252 = esp_274 + 0x00000014;
											}
											word32 esp_261 = esp_252 - 0x00000004;
											Mem262[esp_261 + 0x00000000:word32] = edi_232;
											fn0043A878(esi_132, es, ds, fs, gs, dwArg00, out esi_132);
											esp_150 = esp_261 + 0x00000004;
										}
									}
								}
								else
								{
									Mem330[esp_140 - 0x00000018:word32] = eax_315;
									word32 edx_331;
									eax_194 = fn004395EE(fp - 0x00000004, esi_132, es, ds, fs, gs, dwArg00, out edx_331, out esi_132);
									esp_150 = esp_140 - 0x00000014;
									if (eax_194 != 0x00000000)
									{
										Mem345[eax_194 + 0x00000000:word32] = 0x0000DDDD;
										eax_194 = eax_194 + 0x00000008;
									}
									edi_232 = eax_194;
									goto l0043D6D0;
								}
							}
							else
							{
l0043D6CE:
								edi_232 = 0x00000000;
								goto l0043D6D0;
							}
						}
						else
							goto l0043D6CE;
					}
			}
			Mem172[esp_150 - 0x00000004:word32] = Mem151[ebp_169 - 0x0000000C:word32];
			word32 esi_174;
			edx_115 = fn0043A878(esi_132, es, ds, fs, gs, dwArg00, out esi_174);
			eax_119 = Mem172[ebp_169 - 0x00000008:word32];
		}
		else
			goto l0043D5C6;
	}
	word32 esp_92 = ebp_169 - 0x0000001C;
	word32 ebx_97 = Mem0[esp_92 + 0x00000008:word32];
	word32 ecx_104;
	fn004394A0(eax_119, Mem0[ebp_169 - 0x00000004:word32] ^ ebp_169, edx_115, ebx_97, ebp_169, Mem0[esp_92 + 0x00000004:word32], Mem0[esp_92 + 0x00000000:word32], es, ds, fs, gs, ebp, out ecx_104);
	byte bl_98;
	*blOut = (byte) ebx_97;
	return edx_115;
}

word32 fn0043D731(word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 ebxOut, ptr32 esiOut)
{
	*esiOut = esi;
	word32 ebx_18;
	fn0043A7F1(fp - 0x00000014, es, ds, fs, gs, dwArg04, out ebx_18);
	Mem23[fp - 0x00000018:word32] = Mem0[fp + 0x00000024:word32];
	Mem26[fp - 0x0000001C:word32] = Mem23[fp + 0x00000020:word32];
	Mem28[fp - 0x00000020:word32] = Mem26[fp + 0x0000001C:word32];
	Mem30[fp - 0x00000024:word32] = Mem28[fp + 0x00000018:word32];
	Mem32[fp - 0x00000028:word32] = Mem30[fp + 0x00000014:word32];
	Mem34[fp - 0x0000002C:word32] = Mem32[fp + 0x00000010:word32];
	Mem36[fp - 0x00000030:word32] = Mem34[fp + 0x0000000C:word32];
	Mem38[fp - 0x00000034:word32] = Mem36[fp + 0x00000008:word32];
	Mem40[fp - 0x00000038:word32] = fp - 0x00000014;
	byte bl_46;
	word32 edx_47 = fn0043D54A(fp - 0x00000004, es, ds, fs, gs, dwArg00, dwArg0C, dwArg10, dwArg1C, dwArg20, out bl_46);
	if (Mem40[fp - 0x00000008:byte] != 0x00)
	{
		word32 ecx_62 = Mem40[fp - 0x0000000C:word32];
		Mem64[ecx_62 + 0x00000070:word32] = Mem40[ecx_62 + 0x00000070:word32] & 0xFFFFFFFD;
	}
	return edx_47;
}

word32 fn0043D99C(word32 ebp, selector es, selector ds, selector fs, selector gs, ptr32 edxOut, ptr32 ebxOut, ptr32 ebpOut, ptr32 esiOut, ptr32 ediOut)
{
	*ebxOut = ebx;
	word32 esp_11 = fp - 0x0000000C;
	word32 esi_13 = 0x00000000;
	do
	{
		word32 esp_22 = esp_11 - 0x00000004;
		Mem24[esp_22 + 0x00000000:word32] = Mem0[fp + 0x00000004:word32];
		word32 edx_30;
		word32 esi_31;
		word32 eax_32 = fn004395EE(fp - 0x00000004, esi_13, es, ds, fs, gs, dwArg00, out edx_30, out esi_31);
		esp_11 = esp_22 + 0x00000004;
		if (eax_32 != 0x00000000 || Mem24[0x004EE3A0:word32] <=u eax_32)
			;
		Mem68[esp_22 + 0x00000000:word32] = esi_31;
		Sleep(Mem68[esp_22 + 0x00000000:DWORD]);
		esp_11 = esp_22 + 0x00000004;
		eax_32 = esi_31 + 0x000003E8;
		if (esi_31 + 0x000003E8 >u Mem68[0x004EE3A0:word32])
			eax_32 = esi_31 + 0x000003E8 | 0xFFFFFFFF;
		esi_13 = eax_32;
	} while (eax_32 != 0xFFFFFFFF);
	word32 edi_46 = Mem24[esp_11 + 0x00000000:word32];
	word32 esp_47 = esp_11 + 0x00000004;
}

word32 fn0043D9E1(word32 ebp, selector es, selector ds, selector fs, selector gs, ptr32 edxOut, ptr32 ebxOut, ptr32 ebpOut, ptr32 esiOut, ptr32 ediOut)
{
	word32 esp_11 = fp - 0x0000000C;
	word32 esi_13 = 0x00000000;
	do
	{
		word32 esp_22 = esp_11 - 0x00000004;
		Mem23[esp_22 + 0x00000000:word32] = 0x00000000;
		Mem25[esp_22 - 0x00000004:word32] = Mem23[fp + 0x00000008:word32];
		Mem27[esp_22 - 0x00000008:word32] = Mem25[fp + 0x00000004:word32];
		word32 edx_35;
		word32 ebx_36;
		word32 eax_37 = fn00446F08(esi_13, es, ds, fs, gs, dwArg00, dwArg04, dwArg08, out edx_35, out ebx_36);
		esp_11 = esp_22 + 0x00000004;
		if (eax_37 != 0x00000000 || Mem27[0x004EE3A0:word32] <=u eax_37)
			;
		Mem71[esp_22 + 0x00000000:word32] = esi_13;
		Sleep(Mem71[esp_22 + 0x00000000:DWORD]);
		esp_11 = esp_22 + 0x00000004;
		eax_37 = esi_13 + 0x000003E8;
		if (eax_37 >u Mem71[0x004EE3A0:word32])
			eax_37 = eax_37 | 0xFFFFFFFF;
		esi_13 = eax_37;
	} while (eax_37 != 0xFFFFFFFF);
	word32 edi_50 = Mem27[esp_11 + 0x00000000:word32];
	word32 esp_51 = esp_11 + 0x00000004;
}

word32 fn0043DA2D(word32 ebp, selector es, selector ds, selector fs, selector gs, ptr32 ebxOut, ptr32 ebpOut, ptr32 ediOut)
{
	word32 esp_11 = fp - 0x0000000C;
	word32 esi_13 = 0x00000000;
	do
	{
		word32 esp_22 = esp_11 - 0x00000004;
		Mem24[esp_22 + 0x00000000:word32] = Mem0[fp + 0x00000008:word32];
		Mem26[esp_22 - 0x00000004:word32] = Mem24[fp + 0x00000004:word32];
		word32 ebx_33;
		word32 eax_34 = fn004396C7(fp - 0x00000004, esi_13, es, ds, fs, gs, dwArg00, dwArg04, out ebx_33);
		esp_11 = esp_22 + 0x00000004;
		if (eax_34 != 0x00000000 || (Mem26[fp + 0x00000008:word32] == eax_34 || Mem26[0x004EE3A0:word32] <=u eax_34))
			;
		Mem71[esp_22 + 0x00000000:word32] = esi_13;
		Sleep(Mem71[esp_22 + 0x00000000:DWORD]);
		esp_11 = esp_22 + 0x00000004;
		eax_34 = esi_13 + 0x000003E8;
		if (eax_34 >u Mem71[0x004EE3A0:word32])
			eax_34 = eax_34 | 0xFFFFFFFF;
		esi_13 = eax_34;
	} while (eax_34 != 0xFFFFFFFF);
	word32 edi_50 = Mem26[esp_11 + 0x00000000:word32];
	word32 esp_51 = esp_11 + 0x00000004;
}

word32 fn004405E0(word32 dwArg00, word32 dwArg04, word32 dwArg08, word32 dwArg0C, ptr32 edxOut, ptr32 ediOut)
{
fn004405E0_entry:
	def fp
	def dwArg0C
	def dwArg04
	def edxOut
	def ediOut
	def bArg08
	def xmm0
	def edi
	def dwArg08
	def dwArg00
	def dwLoc08
	def dwLoc0C
	def bl
	def ebx
	def Mem0
	def dwLoc04
	def SCZO
l004405E0:
	esp_1 = fp
	edx_3 = dwArg0C
	ecx_5 = dwArg04
	SZO_6 = cond(edx_3 & edx_3)
	Z_7 = SZO_6 (alias)
	C_8 = false
	branch (edx_3 & edx_3) == 0x00000000 l00440655
l004405EC:
	eax_27 = 0x00000000
	al_29 = bArg08
	eax_30 = DPB(eax_27, al_29, 0, 8) (alias)
	xmm0_32 = DPB(xmm0, al_29, 0, 8) (alias)
	SZO_33 = cond(al_29 & al_29)
	Z_34 = SZO_33 (alias)
	C_35 = false
	branch (al_29 & al_29) != 0x00 l0044060C
l004405F6:
	SCZO_115 = cond(edx_3 - 0x00000080)
	C_116 = SCZO_115 (alias)
	branch edx_3 <u 0x00000080 l0044060C
l004405FE:
	SCZO_118 = cond(Mem0[0x004F35E0:word32] - 0x00000000)
	Z_119 = SCZO_118 (alias)
	branch Mem0[0x004F35E0:word32] == 0x00000000 l0044060C
l00440607:
	goto l00447BE9
l0044060C:
	Z_36 = PHI(Z_34, Z_34, Z_119)
	esp_37 = fp - 0x00000004
	dwLoc04_39 = edi
	edi_40 = ecx_5
	SCZO_41 = cond(edx_3 - 0x00000004)
	C_42 = SCZO_41 (alias)
	branch edx_3 <u 0x00000004 l00440645
l00440614:
	ecx_79 = -ecx_5
	ecx_80 = ecx_79 & 0x00000003
	SZO_81 = cond(ecx_80)
	Z_82 = SZO_81 (alias)
	C_83 = false
	branch ecx_80 == 0x00000000 l00440627
l0044061B:
	edx_106 = edx_3 - ecx_80
	SCZO_107 = cond(edx_106)
l0044061D:
	edi_108 = PHI(edi_40, edi_111)
	ecx_109 = PHI(ecx_80, ecx_112)
	Mem110[edi_108 + 0x00000000:byte] = al_29
	edi_111 = edi_108 + 0x00000001
	ecx_112 = ecx_109 - 0x00000001
	SCZO_113 = cond(ecx_112)
	Z_114 = SCZO_113 (alias)
	branch ecx_112 != 0x00000000 l0044061D
l00440627:
	edi_84 = PHI(edi_40, edi_111)
	edx_85 = PHI(edx_3, edx_106)
	ecx_86 = eax_30
	eax_87 = eax_30 << 0x00000008
	eax_88 = eax_87 + ecx_86
	ecx_89 = eax_88
	eax_90 = eax_88 << 0x00000010
	eax_91 = eax_90 + ecx_89
	al_92 = (byte) eax_91 (alias)
	ecx_93 = edx_85
	edx_94 = edx_85 & 0x00000003
	ecx_95 = ecx_93 >>u 0x00000002
	SCZO_96 = cond(ecx_95)
	Z_97 = SCZO_96 (alias)
	branch ecx_95 == 0x00000000 l00440645
l0044063F:
	edi_98 = PHI(edi_84, edi_101)
	ecx_99 = PHI(ecx_95, ecx_102)
	branch ecx_99 == 0x00000000 l00440641
l0044063F_1:
	Mem100[edi_98 + 0x00000000:word32] = eax_91
	edi_101 = edi_98 + 0x00000004
	ecx_102 = ecx_99 - 0x00000001
	goto l0044063F
l00440641:
	SZO_103 = cond(edx_94 & edx_94)
	Z_104 = SZO_103 (alias)
	C_105 = false
	branch (edx_94 & edx_94) == 0x00000000 l0044064F
l00440645:
	edi_62 = PHI(edi_40, edi_84, edi_75, edi_98)
	edx_63 = PHI(edx_3, edx_94, edx_76, edx_94)
	C_64 = PHI(C_42, C_83, C_64, C_105)
	ecx_65 = PHI(ecx_5, ecx_95, ecx_65, ecx_99)
	SZO_66 = PHI(SZO_33, SZO_81, SZO_66, SZO_103)
	eax_67 = PHI(eax_30, eax_91, eax_67, eax_91)
	al_68 = PHI(al_29, al_92, al_68, al_92)
	Mem69[edi_62 + 0x00000000:byte] = al_68
	edi_70 = edi_62 + 0x00000001
	edx_71 = edx_63 - 0x00000001
	SCZO_72 = cond(edx_71)
	Z_73 = SCZO_72 (alias)
	branch edx_71 != 0x00000000 l00440645
	Mem74[edi_70 + 0x00000000:byte] = al_68
	edi_75 = edi_70 + 0x00000001
	edx_76 = edx_71 - 0x00000001
	SCZO_77 = cond(edx_76)
	Z_78 = SCZO_77 (alias)
	branch edx_76 != 0x00000000 l00440645
l0044064F:
	SCZO_43 = PHI(SCZO_77, SCZO_96)
	edx_44 = PHI(edx_76, edx_94)
	C_45 = PHI(C_64, C_105)
	ecx_46 = PHI(ecx_65, ecx_99)
	SZO_47 = PHI(SZO_66, SZO_103)
	Z_48 = PHI(Z_78, Z_104)
	eax_49 = dwArg04
	edi_50 = dwLoc04_39
	esp_51 = fp
	return eax_49
	eax_53 = dwArg08
	al_54 = (byte) eax_53 (alias)
	edi_56 = dwArg00
	esp_57 = fp + 0x00000004
	return eax_53
l00440655:
	eax_272 = dwArg04
	al_273 = (byte) eax_272 (alias)
	return eax_272
l00447BE9:
	xmm0_120 = 0x0000000000000000
	esp_121 = fp - 0x00000004
	dwLoc04_122 = ecx_5
	esp_123 = fp - 0x00000008
	dwLoc08_124 = ebx
	eax_125 = ecx_5
	eax_126 = eax_125 & 0x0000000F
	al_127 = (byte) eax_126 (alias)
	SZO_128 = cond(eax_126 & eax_126)
	Z_129 = SZO_128 (alias)
	C_130 = false
	branch (eax_126 & eax_126) != 0x00000000 l00447C77
l00447BF8:
	dwLoc0C_131 = PHI(dwLoc0C, dwLoc0C_237)
	bl_132 = PHI(bl, bl_250)
	edx_133 = PHI(edx_3, edx_255)
	C_134 = PHI(C_130, C_242)
	ecx_135 = PHI(ecx_5, ecx_251)
	SZO_136 = PHI(SZO_128, SZO_252)
	ebx_137 = PHI(ebx, ebx_254)
	esp_138 = PHI(esp_123, esp_256)
	eax_139 = edx_133
	edx_140 = edx_133 & 0x0000007F
	eax_141 = eax_139 >>u 0x00000007
	al_142 = (byte) eax_141 (alias)
	SCZO_143 = cond(eax_141)
	Z_144 = SCZO_143 (alias)
	branch eax_141 == 0x00000000 l00447C39
l00447C02:
	esp_213 = fp - 0x00000008
l00447C09:
	ecx_214 = PHI(ecx_135, ecx_224)
	eax_215 = PHI(eax_141, eax_225)
	Mem216[ecx_214 + 0x00000000:word128] = 0x0000000000000000
	Mem217[ecx_214 + 0x00000010:word128] = 0x0000000000000000
	Mem218[ecx_214 + 0x00000020:word128] = 0x0000000000000000
	Mem219[ecx_214 + 0x00000030:word128] = 0x0000000000000000
	Mem220[ecx_214 + 0x00000040:word128] = 0x0000000000000000
	Mem221[ecx_214 + 0x00000050:word128] = 0x0000000000000000
	Mem222[ecx_214 + 0x00000060:word128] = 0x0000000000000000
	Mem223[ecx_214 + 0x00000070:word128] = 0x0000000000000000
	ecx_224 = ecx_214 + 0x00000080
	eax_225 = eax_215 - 0x00000001
	al_226 = (byte) eax_225 (alias)
	SZO_227 = cond(eax_225)
	Z_228 = SZO_227 (alias)
	branch eax_225 != 0x00000000 l00447C09
l00447C39:
	ecx_145 = PHI(ecx_135, ecx_224)
	eax_146 = PHI(eax_141, eax_225)
	al_147 = PHI(al_142, al_226)
	esp_148 = PHI(esp_138, esp_213)
	SZO_149 = cond(edx_140 & edx_140)
	Z_150 = SZO_149 (alias)
	C_151 = false
	branch (edx_140 & edx_140) == 0x00000000 l00447C74
l00447C3D:
	eax_164 = edx_140
	eax_165 = eax_164 >>u 0x00000004
	al_166 = (byte) eax_165 (alias)
	SCZO_167 = cond(eax_165)
	Z_168 = SCZO_167 (alias)
	branch eax_165 == 0x00000000 l00447C53
l00447C44:
l00447C49:
	ecx_205 = PHI(ecx_145, ecx_208)
	eax_206 = PHI(eax_165, eax_209)
	Mem207[ecx_205 + 0x00000000:word128] = 0x0000000000000000
	ecx_208 = ecx_205 + 0x00000010
	eax_209 = eax_206 - 0x00000001
	al_210 = (byte) eax_209 (alias)
	SZO_211 = cond(eax_209)
	Z_212 = SZO_211 (alias)
	branch eax_209 != 0x00000000 l00447C49
l00447C53:
	ecx_169 = PHI(ecx_145, ecx_208)
	eax_170 = PHI(eax_165, eax_209)
	al_171 = PHI(al_166, al_210)
	edx_172 = edx_140 & 0x0000000F
	SZO_173 = cond(edx_172)
	Z_174 = SZO_173 (alias)
	C_175 = false
	branch edx_172 == 0x00000000 l00447C74
l00447C58:
	eax_176 = edx_172
	al_177 = (byte) eax_176 (alias)
	ebx_178 = 0x00000000
	bl_179 = (byte) ebx_178 (alias)
	edx_180 = edx_172 >>u 0x00000002
	SCZO_181 = cond(edx_180)
	Z_182 = SCZO_181 (alias)
	branch edx_180 == 0x00000000 l00447C69
l00447C61:
	edx_198 = PHI(edx_180, edx_202)
	ecx_199 = PHI(ecx_169, ecx_201)
	Mem200[ecx_199 + 0x00000000:word32] = ebx_178
	ecx_201 = ecx_199 + 0x00000004
	edx_202 = edx_198 - 0x00000001
	SZO_203 = cond(edx_202)
	Z_204 = SZO_203 (alias)
	branch edx_202 != 0x00000000 l00447C61
l00447C69:
	edx_183 = PHI(edx_180, edx_202)
	ecx_184 = PHI(ecx_169, ecx_201)
	eax_185 = eax_176 & 0x00000003
	al_186 = (byte) eax_185 (alias)
	SZO_187 = cond(eax_185)
	Z_188 = SZO_187 (alias)
	C_189 = false
	branch eax_185 == 0x00000000 l00447C74
l00447C6E:
	ecx_190 = PHI(ecx_184, ecx_193)
	eax_191 = PHI(eax_185, eax_194)
	Mem192[ecx_190 + 0x00000000:byte] = bl_179
	ecx_193 = ecx_190 + 0x00000001
	eax_194 = eax_191 - 0x00000001
	al_195 = (byte) eax_194 (alias)
	SZO_196 = cond(eax_194)
	Z_197 = SZO_196 (alias)
	branch eax_194 != 0x00000000 l00447C6E
l00447C74:
	bl_152 = PHI(bl_132, bl_132, bl_179, bl_179)
	SCZO_153 = PHI(SCZO_143, SCZO_167, SCZO_181, SCZO_181)
	edx_154 = PHI(edx_140, edx_172, edx_183, edx_183)
	C_155 = PHI(C_151, C_175, C_189, C_189)
	ecx_156 = PHI(ecx_145, ecx_169, ecx_184, ecx_193)
	SZO_157 = PHI(SZO_149, SZO_173, SZO_187, SZO_196)
	Z_158 = PHI(Z_150, Z_174, Z_188, Z_197)
	ebx_159 = dwLoc08_124
	esp_160 = fp - 0x00000004
	eax_161 = dwLoc04_122
	al_162 = (byte) eax_161 (alias)
	esp_163 = fp
	return eax_161
l00447C77:
	ebx_229 = eax_126
	ebx_230 = -ebx_229
	ebx_231 = ebx_230 + 0x00000010
	bl_232 = (byte) ebx_231 (alias)
	edx_233 = edx_3 - ebx_231
	eax_234 = 0x00000000
	al_235 = (byte) eax_234 (alias)
	esp_236 = fp - 0x0000000C
	dwLoc0C_237 = edx_233
	edx_238 = ebx_231
	edx_239 = edx_238 & 0x00000003
	SZO_240 = cond(edx_239)
	Z_241 = SZO_240 (alias)
	C_242 = false
	branch edx_239 == 0x00000000 l00447C90
l00447C8A:
	edx_265 = PHI(edx_239, edx_269)
	ecx_266 = PHI(ecx_5, ecx_268)
	Mem267[ecx_266 + 0x00000000:byte] = al_235
	ecx_268 = ecx_266 + 0x00000001
	edx_269 = edx_265 - 0x00000001
	SZO_270 = cond(edx_269)
	Z_271 = SZO_270 (alias)
	branch edx_269 != 0x00000000 l00447C8A
l00447C90:
	edx_243 = PHI(edx_239, edx_269)
	ecx_244 = PHI(ecx_5, ecx_268)
	SZO_245 = PHI(SZO_240, SZO_270)
	ebx_246 = ebx_231 >>u 0x00000002
	bl_247 = (byte) ebx_246 (alias)
	SCZO_248 = cond(ebx_246)
	Z_249 = SCZO_248 (alias)
	branch ebx_246 == 0x00000000 l00447C9D
l00447C95:
	ecx_257 = PHI(ecx_244, ecx_260)
	ebx_258 = PHI(ebx_246, ebx_261)
	Mem259[ecx_257 + 0x00000000:word32] = eax_234
	ecx_260 = ecx_257 + 0x00000004
	ebx_261 = ebx_258 - 0x00000001
	bl_262 = (byte) ebx_261 (alias)
	SZO_263 = cond(ebx_261)
	Z_264 = SZO_263 (alias)
	branch ebx_261 != 0x00000000 l00447C95
l00447C9D:
	bl_250 = PHI(bl_247, bl_262)
	ecx_251 = PHI(ecx_244, ecx_260)
	SZO_252 = PHI(SZO_245, SZO_263)
	Z_253 = PHI(Z_249, Z_264)
	ebx_254 = PHI(ebx_246, ebx_261)
	edx_255 = dwLoc0C_237
	esp_256 = fp - 0x00000008
	goto l00447BF8
fn004405E0_exit:
	edi_9 = PHI(edi, edi, edi_56, edi)
	xmm0_10 = PHI(xmm0, xmm0_120, xmm0_32, xmm0)
	dwLoc04_11 = PHI(dwLoc04, dwLoc04_122, dwLoc04_39, dwLoc04)
	dwLoc08_12 = PHI(dwLoc08, dwLoc08_124, dwLoc08, dwLoc08)
	dwLoc0C_13 = PHI(dwLoc0C, dwLoc0C_131, dwLoc0C, dwLoc0C)
	bl_14 = PHI(bl, bl_152, bl, bl)
	SCZO_15 = PHI(SCZO, SCZO_153, SCZO_43, SCZO)
	edx_16 = PHI(edx_3, edx_154, edx_44, edx)
	C_17 = PHI(C_8, C_155, C_45, C)
	ecx_18 = PHI(ecx_5, ecx_156, ecx_46, ecx)
	SZO_19 = PHI(SZO_6, SZO_157, SZO_47, SZO)
	Z_20 = PHI(Z_7, Z_158, Z_48, Z)
	ebx_21 = PHI(ebx, ebx_159, ebx, ebx)
	eax_22 = PHI(eax_272, eax_161, eax_53, eax)
	al_23 = PHI(al_273, al_162, al_54, al)
	esp_24 = PHI(esp_1, esp_163, esp_57, esp)
	use edx_16 (=> edxOut)
	use edi_9 (=> ediOut)
}

word32 fn0044073C(word32 dwArg04)
{
	word32 eax_10 = dwArg04;
	do
	{
		eax_10 = eax_24 + 0x00000002;
		word32 eax_24 = eax_10;
	} while (Mem0[eax_24 + 0x00000000:word16] != 0x0000);
	return (eax_10 - dwArg04 >> 0x00000001) - 0x00000001;
}

word32 fn0044085D(word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg08, ptr32 edxOut, ptr32 blOut)
{
	*blOut = bl;
	word32 eax_103;
	word32 esi_59;
	word32 eax_58;
	word32 edx_22;
	word32 ebx_23;
	word32 esi_128;
	Mem26[fp + 0x00000008:word32] = fn00448A44(dwArg08, es, ds, fs, gs, dwArg08, out edx_22, out ebx_23, out esi_128);
	word32 eax_27 = Mem26[esi_128 + 0x0000000C:word32];
	word32 ebp_178 = fp - 0x00000004;
	byte al_28 = (byte) eax_27;
	if ((al_28 & 0x82) == 0x00)
	{
		word32 edx_71;
		word32 ebx_72;
		word32 ebp_73;
		word32 edi_75;
		eax_58 = fn0043D0A3(fp - 0x00000004, esi_128, es, ds, fs, gs, out edx_71, out ebx_72, out ebp_73, out esi_59, out edi_75);
		Mem78[eax_58 + 0x00000000:word32] = 0x00000009;
l00440883:
		Mem62[esi_59 + 0x0000000C:word32] = Mem26[esi_59 + 0x0000000C:word32] | 0x00000020;
		eax_103 = eax_58 | 0xFFFFFFFF;
	}
	else if ((al_28 & 0x40) != 0x00)
	{
		word32 edx_82;
		word32 ebx_83;
		word32 ebp_84;
		word32 edi_86;
		eax_58 = fn0043D0A3(fp - 0x00000004, esi_128, es, ds, fs, gs, out edx_82, out ebx_83, out ebp_84, out esi_59, out edi_86);
		Mem89[eax_58 + 0x00000000:word32] = 0x00000022;
		goto l00440883;
	}
	else
	{
		Mem91[fp - 0x00000010:word32] = ebx_23;
		word32 esp_109 = fp - 0x00000010;
		word32 ebx_126 = 0x00000000;
		if ((al_28 & 0x01) != 0x00)
		{
			Mem328[esi_128 + 0x00000004:word32] = 0x00000000;
			if ((al_28 & 0x10) != 0x00)
			{
				Mem336[esi_128 + 0x00000000:word32] = Mem328[esi_128 + 0x00000008:word32];
				Mem337[esi_128 + 0x0000000C:word32] = eax_27 & 0xFFFFFFFE;
l004408BD:
				word32 eax_116 = Mem91[esi_128 + 0x0000000C:word32] & 0xFFFFFFEF | 0x00000002;
				Mem117[esi_128 + 0x0000000C:word32] = eax_116;
				Mem118[esi_128 + 0x00000004:word32] = 0x00000000;
				Mem119[fp - 0x00000008:word32] = 0x00000000;
				if ((eax_116 & 0x0000010C) == 0x00000000)
				{
					fn0044888F();
					if (esi_128 != 0x004DF818)
					{
						fn0044888F();
						if (esi_128 == 0x004DF838)
						{
l004408EE:
							Mem314[fp - 0x00000014:word32] = Mem119[fp + 0x00000008:word32];
							esp_109 = fp - 0x00000010;
							word32 edx_316;
							if (fn00448839(esi_128, es, ds, fs, gs, dwArg00, out edx_316, out ebx_126, out esi_128) == 0x00000000)
							{
l004408FB:
								word32 esp_305 = esp_109 - 0x00000004;
								Mem306[esp_305 + 0x00000000:word32] = esi_128;
								word32 edx_309;
								*edxOut = fn004487F0(es, ds, fs, gs, out ebx_126, out esi_128);
								esp_109 = esp_305 + 0x00000004;
							}
						}
						else
							goto l004408FB;
					}
					else
						goto l004408EE;
				}
				word32 edi_172;
				word32 eax_157;
				word32 esp_133 = esp_109 - 0x00000004;
				Mem134[esp_133 + 0x00000000:word32] = edi;
				if ((Mem119[esi_128 + 0x0000000C:word32] & 0x00000108) != 0x00000000)
				{
					word32 eax_187 = Mem134[esi_128 + 0x00000008:word32];
					word32 edi_189 = Mem134[esi_128 + 0x00000000:word32];
					Mem191[esi_128 + 0x00000000:word32] = eax_187 + 0x00000001;
					Mem195[esi_128 + 0x00000004:word32] = Mem191[esi_128 + 0x00000018:word32] - 0x00000001;
					edi_172 = edi_189 - eax_187;
					if (edi_172 > ebx_126)
					{
						Mem217[esp_133 - 0x00000004:word32] = edi_172;
						Mem219[esp_133 - 0x00000008:word32] = eax_187;
						Mem221[esp_133 - 0x0000000C:word32] = Mem219[fp + 0x00000008:word32];
						word32 edx_222;
						word32 ebx_223;
						word32 eax_227 = fn0044871C(ebx_126, esi_128, edi_172, es, ds, fs, gs, out edx_222, out ebx_223, out ebp_178, out esi_128, out edi_172);
						Mem230[ebp_178 - 0x00000004:word32] = eax_227;
l00440986:
						Mem211[Mem195[esi_128 + 0x00000008:word32]:byte] = Mem195[ebp_178 + 0x00000008:byte];
						eax_157 = Mem211[esi_128 + 0x00000008:word32];
						Mem215[eax_157 + 0x00000000:byte] = Mem211[ebp_178 + 0x00000008:byte];
l004409A6:
						if (Mem134[ebp_178 - 0x00000004:word32] != edi_172)
						{
l004409AB:
							Mem162[esi_128 + 0x0000000C:word32] = Mem134[esi_128 + 0x0000000C:word32] | 0x00000020;
							eax_103 = eax_157 | 0xFFFFFFFF;
						}
						else
							eax_103 = Mem134[ebp_178 + 0x00000008:word32] & 0x000000FF;
					}
					else
					{
						word32 eax_237;
						word32 ecx_231 = Mem195[fp + 0x00000008:word32];
						if (ecx_231 != 0xFFFFFFFF && ecx_231 != 0xFFFFFFFE)
						{
							word32 edx_269;
							*edxOut = ecx_231 >> 0x00000005;
							eax_237 = ((ecx_231 & 0x0000001F) << 0x00000006) + 0x004F34E0[(ecx_231 >> 0x00000005) * 0x00000004];
						}
						else
							eax_237 = 0x004DEFD0;
						if ((Mem195[eax_237 + 0x00000004:byte] & 0x20) != 0x00)
						{
							Mem243[esp_133 - 0x00000004:word32] = 0x00000002;
							Mem245[esp_133 - 0x00000008:word32] = ebx_126;
							Mem247[esp_133 - 0x0000000C:word32] = ebx_126;
							Mem249[esp_133 - 0x00000010:word32] = ecx_231;
							word32 edx_250;
							word32 eax_254 = fn00447F35(ebx_126, esi_128, edi_172, es, ds, fs, gs, out edx_250, out ebp_178, out esi_128, out edi_172);
							eax_157 = eax_254 & edx_250;
							if (eax_157 != 0xFFFFFFFF)
								goto l00440986;
							else
								goto l004409AB;
						}
						else
							goto l00440986;
					}
				}
				else
				{
					Mem279[esp_133 - 0x00000004:word32] = 0x00000001;
					Mem282[esp_133 - 0x00000008:word32] = fp + 0x00000004;
					Mem284[esp_133 - 0x0000000C:word32] = Mem282[fp + 0x00000008:word32];
					word32 edx_285;
					word32 ebx_286;
					eax_157 = fn0044871C(ebx_126, esi_128, 0x00000001, es, ds, fs, gs, out edx_285, out ebx_286, out ebp_178, out esi_128, out edi_172);
					Mem294[ebp_178 - 0x00000004:word32] = eax_157;
					goto l004409A6;
				}
				esp_109 = esp_133 + 0x00000004;
			}
			else
			{
				Mem339[esi_128 + 0x0000000C:word32] = eax_27 | 0x00000020;
				eax_103 = eax_27 | 0x00000020 | 0xFFFFFFFF;
			}
		}
		else
			goto l004408BD;
		byte bl_111;
		*blOut = (byte) Mem91[esp_109 + 0x00000000:word32];
	}
	return eax_103;
}

word32 fn004409C1(word32 eax, word32 edx, word32 esi, selector es, selector ds, selector fs, selector gs, word32 dwArg04)
{
	if ((Mem0[eax + 0x0000000C:byte] & 0x40) != 0x00 && Mem0[eax + 0x00000008:word32] == 0x00000000)
	{
l004409EC:
		Mem34[esi + 0x00000000:word32] = Mem0[esi + 0x00000000:word32] + 0x00000001;
		return edx;
	}
	else
	{
		word16 ax_48;
		edx = fn00448A6A(edx, fp - 0x00000004, es, ds, fs, gs, eax, out ax_48);
		if (ax_48 == 0xFFFF)
		{
			Mem58[esi + 0x00000000:word32] = Mem0[esi + 0x00000000:word32] | 0xFFFFFFFF;
			return edx;
		}
		else
			goto l004409EC;
	}
}

word32 fn00440A57(word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, ptr32 edxOut, ptr32 blOut)
{
	word32 edx_122;
	word32 eax_105;
	word32 ebx_49;
	fn0043A7F1(fp + 0xFFFFFBA4, es, ds, fs, gs, dwArg0C, out ebx_49);
	word32 edx_52;
	word32 ebx_53;
	word32 edi_56;
	word32 ebp_54;
	word32 esi_159;
	word32 eax_57 = fn0043D0A3(fp - 0x00000004, dwArg08, es, ds, fs, gs, out edx_52, out ebx_53, out ebp_54, out esi_159, out edi_56);
	Mem58[ebp_54 + 0xFFFFFB9C:word32] = eax_57;
	word32 esp_142 = fp - 0x00000488;
	if (Mem58[ebp_54 + 0xFFFFFBDC:word32] == ebx_53 || esi_159 == ebx_53)
	{
		word32 edx_90;
		word32 ebx_91;
		word32 ebp_92;
		word32 esi_93;
		word32 edi_94;
		Mem96[fn0043D0A3(ebp_54, esi_159, es, ds, fs, gs, out edx_90, out ebx_91, out ebp_92, out esi_93, out edi_94):word32] = 0x00000016;
		word32 ebx_98;
		word32 eax_100 = fn004417A9(es, ds, fs, gs, out edx_122, out ebx_98, out ebp_54);
		if (Mem96[ebp_54 + 0xFFFFFBB4:byte] != 0x00)
		{
			eax_100 = Mem96[ebp_54 + 0xFFFFFBB0:word32];
			Mem115[eax_100 + 0x00000070:word32] = Mem96[eax_100 + 0x00000070:word32] & 0xFFFFFFFD;
		}
		eax_105 = eax_100 | 0xFFFFFFFF;
	}
	else
	{
		word32 ecx_120 = (word32) Mem58[esi_159 + 0x00000000:word16];
		Mem123[ebp_54 + 0xFFFFFBE8:word32] = ebx_53;
		Mem124[ebp_54 + 0xFFFFFBEC:word32] = ebx_53;
		Mem125[ebp_54 + 0xFFFFFBC4:word32] = ebx_53;
		Mem126[ebp_54 + 0xFFFFFBE4:word32] = ecx_120;
		word16 cx_121 = (word16) ecx_120;
		edx_122 = 0x00000000;
		*edxOut = edx_122;
		if (cx_121 != 0x0000)
		{
			word32 esp_166 = esp_142 - 0x00000004;
			Mem167[esp_166 + 0x00000000:word32] = 0x00000002;
			Mem173[ebp_54 + 0xFFFFFBC0:word32] = esi_159 + Mem167[esp_166 + 0x00000000:word32];
			esp_142 = esp_166 + 0x00000004;
			while (Mem167[ebp_54 + 0xFFFFFBE8:word32] >= 0x00000000)
			{
				word32 eax_180;
				if ((word16) (ecx_120 - 0x00000020) <=u 0x0058)
					eax_180 = (int32) Mem173[(word32) cx_121 + 0x004BFB90:byte] & 0x0000000F;
				else
					eax_180 = 0x00000000;
				word32 eax_181 = (int32) (edx_122 + 0x004BFBB0)[eax_180 * 0x08];
				Mem183[esp_166 + 0x00000000:word32] = 0x00000007;
				edx_122 = Mem183[esp_166 + 0x00000000:word32];
				*edxOut = edx_122;
				Mem188[ebp_54 + 0xFFFFFBA0:word32] = eax_181 >> 0x00000004;
				esp_142 = esp_166 + 0x00000004;
				if (eax_181 >> 0x00000004 <=u edx_122)
				{
					word32 eax_205 = Mem188[ebp_54 + 0xFFFFFBDC:word32];
					Mem207[esp_166 + 0x00000000:word32] = ecx_120;
					Mem209[ebp_54 + 0xFFFFFBD4:word32] = 0x00000001;
					*edxOut = fn004409C1(eax_205, edx_122, ebp_54 + 0xFFFFFBE8, es, ds, fs, gs, dwArg00);
					esp_142 = esp_166 + 0x00000004;
				}
				esi_159 = Mem188[ebp_54 + 0xFFFFFBC0:word32];
				word32 eax_195 = (word32) Mem188[esi_159 + 0x00000000:word16];
				Mem197[ebp_54 + 0xFFFFFBE4:word32] = eax_195;
				if ((word16) eax_195 == 0x0000)
					break;
				*edxOut = Mem197[ebp_54 + 0xFFFFFBA0:word32];
				ecx_120 = eax_195;
				cx_121 = (word16) eax_195;
				esp_166 = esp_142 - 0x00000004;
				Mem167[esp_166 + 0x00000000:word32] = 0x00000002;
				Mem173[ebp_54 + 0xFFFFFBC0:word32] = esi_159 + Mem167[esp_166 + 0x00000000:word32];
				esp_142 = esp_166 + 0x00000004;
			}
		}
		if (Mem126[ebp_54 + 0xFFFFFBB4:byte] != 0x00)
		{
			word32 eax_149 = Mem126[ebp_54 + 0xFFFFFBB0:word32];
			Mem151[eax_149 + 0x00000070:word32] = Mem126[eax_149 + 0x00000070:word32] & 0xFFFFFFFD;
		}
		eax_105 = Mem126[ebp_54 + 0xFFFFFBE8:word32];
	}
	word32 esp_72 = esp_142 + 0x00000004;
	word32 ebx_78 = Mem58[esp_72 + 0x00000004:word32];
	byte bl_79;
	*blOut = (byte) ebx_78;
	word32 ecx_82;
	return fn004394A0(eax_105, Mem58[ebp_54 - 0x00000004:word32] ^ ebp_54, edx_122, ebx_78, ebp_54, Mem58[esp_72 + 0x00000000:word32], Mem58[esp_142 + 0x00000000:word32], es, ds, fs, gs, ebp, out ecx_82);
}

void fn0044161F(word32 dwArg04)
{
	Mem10[0x004EE6CC:word32] = dwArg04;
	return;
}

word32 fn0044162E(word32 ebp, word32 esi, selector es, selector ds, selector fs, selector gs, word32 dwArg00, word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	word32 eax_11 = Mem0[0x004DEBE0:word32] ^ fp - 0x00000004;
	if (dwArg04 != 0xFFFFFFFF)
		fn00447EA8();
	word32 edx_40;
	word32 edi_41;
	fn004405E0(dwLoc0344, fp + 0xFFFFFCE0, 0x00000000, 0x0000004C, out edx_40, out edi_41);
	Mem70[fp - 0x00000338:word32] = cond(fp - 0x00000334);
	word32 eax_88 = IsDebuggerPresent();
	Mem90[fp - 0x00000338:word32] = 0x00000000;
	SetUnhandledExceptionFilter(Mem90[fp - 0x00000338:LPTOP_LEVEL_EXCEPTION_FILTER]);
	Mem96[fp - 0x00000338:word32] = fp + 0xFFFFFCD4;
	word32 eax_97 = UnhandledExceptionFilter(Mem96[fp - 0x00000338:(ptr (struct "_EXCEPTION_POINTERS"))]);
	word32 esp_104 = fp - 0x00000334;
	if (eax_97 == 0x00000000 && (eax_88 == 0x00000000 && dwArg04 != 0xFFFFFFFF))
	{
		Mem132[fp - 0x00000338:word32] = dwArg04;
		fn00447EA8();
		esp_104 = fp - 0x00000334;
	}
	word32 ecx_116;
	fn004394A0(eax_97, eax_11 ^ fp - 0x00000004, edx_40, Mem96[esp_104 + 0x00000004:word32], fp - 0x00000004, esi, Mem96[esp_104 + 0x00000000:word32], es, ds, fs, gs, ebp, out ecx_116);
	return edx_40;
}

word32 fn00441757(word32 ebp, selector es, selector ds, selector fs, selector gs, ptr32 ebxOut)
{
	*ebxOut = ebx;
	word32 edx_20 = fn0044162E(ebp, 0xC0000417, es, ds, fs, gs, dwLoc14, 0x00000002, 0xC0000417, 0x00000001);
	TerminateProcess(GetCurrentProcess(), 0xC0000417);
	return edx_20;
}

word32 fn0044177C(selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, word32 dwArg14, ptr32 edxOut, ptr32 ebxOut, ptr32 ebpOut)
{
fn0044177C_entry:
l0044177C:
	branch DecodePointer(Mem0[0x004EE6CC:word32]) == 0x00000000 l00441794
l00441791:
l00441794:
	word32 ebx_37
	fn00441757(fp - 0x00000004, es, ds, fs, gs, out ebx_37)
	int3()
l004417A8_thunk_fn004417A9:
	word32 edx_39
	word32 ebx_40
	word32 ebp_41
	return fn004417A9(es, ds, fs, gs, out edx_39, out ebx_40, out ebp_41)
fn0044177C_exit:
}

word32 fn004417A9(selector es, selector ds, selector fs, selector gs, ptr32 edxOut, ptr32 ebxOut, ptr32 ebpOut)
{
	word32 edx_19;
	word32 ebx_20;
	word32 ebp_21;
	return fn0044177C(es, ds, fs, gs, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, out edx_19, out ebx_20, out ebp_21);
}

void fn00441829(word32 dwArg04)
{
	word32 eax_10 = GetModuleHandleW(0x004BED2C);
	if (eax_10 != 0x00000000)
	{
		Mem27[fp - 0x00000008:word32] = 0x004BED1C;
		word32 eax_30 = GetProcAddress(eax_10, 0x004BED2C);
		if (eax_30 != 0x00000000)
		{
			Mem37[fp - 0x00000008:word32] = dwArg04;
			eax_30();
		}
	}
	return;
}

word32 fn00441854(word32 ebx, word32 ebp, word32 edi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 ebxOut, ptr32 ebpOut, ptr32 esiOut)
{
	*esiOut = esi;
	fn00441829(dwArg04);
	Mem15[fp - 0x00000008:word32] = Mem0[fp + 0x00000004:word32];
	ExitProcess(Mem15[fp - 0x00000008:UINT]);
	int3();
	Mem18[fp - 0x00000008:word32] = 0x00000008;
	word32 ebp_7;
	*ebpOut = fp - 0x00000004;
	word32 ebx_25;
	return fn00446401(ebx, edi, es, ds, fs, gs, dwArg00, out ebx_25);
}

word32 fn0044186C(word32 ebx, word32 edi, selector es, selector ds, selector fs, selector gs)
{
	word32 ebx_10;
	fn00446401(ebx, edi, es, ds, fs, gs, 0x00000008, out ebx_10);
	return ebp;
}

void fn00441875()
{
	fn00446328(0x00000008);
	return;
}

void fn0044187E()
{
	word32 eax_7 = fn00442E9B();
	fn00441D40(eax_7);
	fn0044161F(eax_7);
	fn00443911(eax_7);
	fn00448E92(eax_7);
	fn00447CA3(eax_7);
	fn004436B0();
	return;
}

word32 fn004418B1(word32 dwArg04, word32 dwArg08)
{
	word32 esi_12 = dwArg04;
	word32 eax_13 = 0x00000000;
	while (esi_12 <u dwArg08 && true)
	{
		word32 ecx_40 = Mem0[esi_12 + 0x00000000:word32];
		if (ecx_40 != 0x00000000)
			ecx_40();
		esi_12 = esi_12 + 0x00000004;
	}
	return eax_13;
}

word32 fn004418D5(word32 ebx, word32 ebp, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 ebxOut)
{
	*ebxOut = ebx;
	word32 edi_24 = edi;
	if (Mem0[0x004BECF0:word32] != 0x00000000)
	{
		word32 eax_151 = fn00448F40(fs, 0x004BECF0);
		if (eax_151 != 0x00000000)
		{
			Mem159[fp - 0x00000008:word32] = dwArg04;
			Mem159[0x004BECF0:word32]();
		}
	}
	fn00447AE5();
	word32 eax_100 = fn004418B1(0x004BD76C, 0x004BD78C);
	if (true)
	{
		Mem58[fp - 0x00000008:word32] = esi;
		Mem60[fp - 0x0000000C:word32] = edi_24;
		fn00439A98(ebx, esi, edi_24, es, ds, fs, gs, 0x0044414C);
		*ebxOut = ebx_63;
		word32 esp_128 = fp - 0x0000000C;
		word32 edi_126 = 0x004BD71C;
		if (false)
			do
			{
				word32 eax_129 = Mem60[edi_126 + 0x00000000:word32];
				if (eax_129 != 0x00000000)
					eax_129();
				edi_126 = edi_126 + 0x00000004;
			} while (edi_126 <u 0x004BD768);
		word32 esp_85 = esp_128 + 0x00000004;
		if (Mem60[0x004F35F4:word32] != 0x00000000)
		{
			Mem104[esp_85 + 0x00000000:word32] = 0x004F35F4;
			word32 eax_106 = fn00448F40(fs, dwArg00);
			if (eax_106 != 0x00000000)
			{
				Mem113[esp_85 + 0x00000000:word32] = 0x00000000;
				Mem115[esp_85 - 0x00000004:word32] = 0x00000002;
				Mem117[esp_85 - 0x00000008:word32] = 0x00000000;
				Mem117[0x004F35F4:word32]();
			}
		}
		eax_100 = 0x00000000;
	}
	return eax_100;
}

word32 fn0044196C(word32 ebx, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs, ptr32 ebxOut, ptr32 ebpOut, ptr32 esiOut)
{
	word32 ebp_109 = fn00441E10(ebx, esi, edi, fs, dwLoc0C, 0x004D5620, 0x00000020);
	Mem13[fp - 0x0000000C:word32] = 0x00000008;
	word32 ebx_114;
	word32 edx_100 = fn00446401(ebx, edi, es, ds, fs, gs, dwArg00, out ebx_114);
	word32 v5_22 = Mem13[ebp_109 - 0x00000004:word32] & 0x00000000;
	Mem23[ebp_109 - 0x00000004:word32] = v5_22;
	word32 esp_111 = fp - 0x00000008;
	if (Mem23[0x004EE708:word32] != 0x00000001)
	{
		Mem77[0x004EE704:word32] = 0x00000001;
		Mem79[0x004EE700:byte] = Mem77[ebp_109 + 0x00000010:byte];
		if (Mem79[ebp_109 + 0x0000000C:word32] == 0x00000000)
		{
			Mem144[fp - 0x0000000C:word32] = Mem79[0x004F35EC:word32];
			word32 eax_146 = DecodePointer(Mem144[fp - 0x0000000C:PVOID]);
			Mem149[ebp_109 - 0x00000030:word32] = eax_146;
			word32 esi_145 = DecodePointer;
			esp_111 = fp - 0x00000008;
			ebx_114 = eax_146;
			if (eax_146 != 0x00000000)
			{
				Mem213[fp - 0x0000000C:word32] = Mem149[0x004F35E8:word32];
				word32 eax_214 = DecodePointer(Mem213[fp - 0x0000000C:PVOID]);
				Mem217[ebp_109 - 0x0000002C:word32] = eax_214;
				Mem218[ebp_109 - 0x00000024:word32] = eax_146;
				Mem219[ebp_109 - 0x00000028:word32] = eax_214;
				esp_111 = fp - 0x00000008;
				edi = eax_214;
				edi = edi - 0x00000004;
				Mem236[ebp_109 - 0x0000002C:word32] = edi;
				while (edi >=u ebx_114)
				{
					word32 eax_239 = fn00442E9B();
					if (Mem236[edi + 0x00000000:word32] == eax_239)
						continue;
					if (edi <u ebx_114)
						break;
					word32 esp_244 = esp_111 - 0x00000004;
					Mem245[esp_244 + 0x00000000:word32] = Mem236[edi + 0x00000000:word32];
					esi_145();
					word32 eax_247 = fn00442E9B();
					Mem249[edi + 0x00000000:word32] = eax_247;
					eax_239();
					Mem251[esp_244 - 0x00000004:word32] = Mem249[0x004F35EC:word32];
					esi_145();
					Mem254[esp_244 - 0x00000008:word32] = Mem251[0x004F35E8:word32];
					esp_111 = esp_244 - 0x00000008;
					esi_145();
					if (Mem254[ebp_109 - 0x00000024:word32] != eax_247 || Mem254[ebp_109 - 0x00000028:word32] != eax_247)
					{
						Mem263[ebp_109 - 0x00000024:word32] = eax_247;
						Mem264[ebp_109 - 0x00000030:word32] = eax_247;
						Mem265[ebp_109 - 0x00000028:word32] = eax_247;
						Mem267[ebp_109 - 0x0000002C:word32] = eax_247;
						edi = eax_247;
					}
					ebx_114 = Mem254[ebp_109 - 0x00000030:word32];
					edi = edi - 0x00000004;
					Mem236[ebp_109 - 0x0000002C:word32] = edi;
				}
			}
			Mem170[ebp_109 - 0x0000001C:word32] = 0x004BD790;
			while (Mem170[ebp_109 - 0x0000001C:word32] <u 0x004BD79C)
			{
				word32 eax_189 = Mem170[Mem170[ebp_109 - 0x0000001C:word32]:word32];
				if (eax_189 != 0x00000000)
					eax_189();
				Mem210[ebp_109 - 0x0000001C:word32] = Mem170[ebp_109 - 0x0000001C:word32] + 0x00000004;
			}
		}
		Mem99[ebp_109 - 0x00000020:word32] = 0x004BD7A0;
		while (Mem99[ebp_109 - 0x00000020:word32] <u 0x004BD7A4)
		{
			word32 eax_118 = Mem99[Mem99[ebp_109 - 0x00000020:word32]:word32];
			if (eax_118 != 0x00000000)
				eax_118();
			Mem139[ebp_109 - 0x00000020:word32] = Mem99[ebp_109 - 0x00000020:word32] + 0x00000004;
		}
	}
	Mem46[ebp_109 - 0x00000004:word32] = 0xFFFFFFFE;
	fn00441A97(ebp_109);
	if (Mem46[ebp_109 + 0x00000010:word32] == 0x00000000)
	{
		Mem59[0x004EE708:word32] = 0x00000001;
		word32 esp_60 = esp_111 - 0x00000004;
		Mem61[esp_60 + 0x00000000:word32] = 0x00000008;
		fn00446328(dwArg00);
		Mem65[esp_60 + 0x00000000:word32] = Mem61[ebp_109 + 0x00000008:word32];
		word32 ebx_66;
		word32 ebp_67;
		word32 esi_68;
		word32 edx_69 = fn00441854(ebx_114, ebp_109, edi, es, ds, fs, gs, dwArg00, out ebx_66, out ebp_67, out esi_68);
		fn00441A97(ebp_67);
		return edx_69;
	}
	else
	{
		word32 ebp_73;
		word32 esi_74;
		word32 edi_75;
		word32 ebx_76;
		*ebxOut = fn00441E55(ebp_109, fs, 0x00000020, dwArg00, dwArg04, dwArg08, dwArg0C, out ebp_73, out esi_74, out edi_75);
		return edx_100;
	}
}

void fn00441A97(word32 ebp)
{
	if (Mem0[ebp + 0x00000010:word32] != 0x00000000)
		fn00446328(0x00000008);
	return;
}

word32 fn00441AAC(word32 ebx, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 esiOut)
{
	word32 ebx_21;
	word32 ebp_22;
	word32 esi_23;
	fn0044196C(ebx, esi, edi, es, ds, fs, gs, out ebx_21, out ebp_22, out esi_23);
	return ebx_21;
}

word32 fn00441AC2(word32 ebx, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 ebxOut, ptr32 esiOut)
{
	word32 ebx_21;
	word32 ebp_22;
	word32 esi_23;
	return fn0044196C(ebx, esi, edi, es, ds, fs, gs, out ebx_21, out ebp_22, out esi_23);
}

word32 fn00441AD8(word32 ebx, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs)
{
	word32 ebx_15;
	word32 ebp_16;
	word32 esi_17;
	fn0044196C(ebx, esi, edi, es, ds, fs, gs, out ebx_15, out ebp_16, out esi_17);
	return ebp_16;
}

word32 fn00441AF6(word32 ebp, word32 esi, selector es, selector ds, selector fs, selector gs, ptr32 edxOut, ptr32 ebxOut, ptr32 ebpOut, ptr32 esiOut)
{
	word32 ebp_13;
	word32 edx_14 = fn00441CE9(esi, es, ds, fs, gs, out ebp_13);
	Mem17[fp - 0x00000008:word32] = Mem0[ebp_13 + 0x00000008:word32];
	fn00441B3A(edx_14, ebp_13, es, ds, fs, gs, dwArg00);
	Mem23[fp - 0x00000008:word32] = 0x000000FF;
	word32 ebx_25;
	word32 esi_26;
	word32 edx_27;
	*edxOut = fn00441AC2(ebx, esi, edi, es, ds, fs, gs, dwArg00, out ebx_25, out esi_26);
	int3();
	return fn00441B14(dwArg00);
}

word32 fn00441B14(word32 dwArg04)
{
	word32 eax_11 = 0x00000000;
	do
	{
		if (dwArg04 == 0x004BF5C8[eax_11 * 0x00000008])
			return 0x004BF5CC[eax_11 * 0x00000008];
		eax_11 = eax_11 + 0x00000001;
	} while (eax_11 <u 0x00000016);
	return 0x00000000;
}

word32 fn00441B3A(word32 edx, word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg04)
{
	word32 eax_131 = fn00441B14(dwArg04);
	word32 esp_133 = fp - 0x0000020C;
	if (eax_131 != 0x00000000)
	{
		esp_133 = fp - 0x0000020C;
		word32 esi_75;
		word32 ebx_141;
		if (fn0044930D(dwArg04, es, ds, fs, gs, 0x00000003, out edx, out ebx_141, out esi_75) != 0x00000001)
		{
			Mem139[fp - 0x00000210:word32] = 0x00000003;
			word32 esi_142;
			eax_131 = fn0044930D(esi_75, es, ds, fs, gs, dwArg00, out edx, out ebx_141, out esi_142);
			esp_133 = fp - 0x0000020C;
			if (eax_131 == 0x00000000 && Mem139[0x004DEA50:word32] == 0x00000001)
			{
l00441C86:
				word32 esp_87 = esp_133 - 0x00000004;
				Mem88[esp_87 + 0x00000000:word32] = 0xFFFFFFF4;
				eax_131 = GetStdHandle(Mem88[esp_87 + 0x00000000:DWORD]);
				esp_133 = esp_87 + 0x00000004;
				if (eax_131 != ebx_141 && eax_131 != 0xFFFFFFFF)
				{
					word32 eax_103 = 0x00000000;
					do
					{
						Mem105[fp + 0xFFFFFE04 + eax_103:byte] = eax_131[eax_103 * 0x02];
						if (eax_131[eax_103 * 0x0002] == bx)
							break;
						eax_103 = eax_103 + 0x00000001;
					} while (eax_103 <u 0x000001F4);
					Mem111[esp_87 + 0x00000000:word32] = ebx_141;
					Mem114[esp_87 - 0x00000004:word32] = fp + 0xFFFFFE00;
					Mem117[esp_87 - 0x00000008:word32] = fp + 0xFFFFFE04;
					Mem118[fp - 0x00000009:byte] = bl;
					Mem125[esp_87 - 0x00000008:word32] = fn0043B940(fp + 0xFFFFFE04, dwArg00, out edx);
					Mem128[esp_87 - 0x0000000C:word32] = fp + 0xFFFFFE04;
					Mem130[esp_87 - 0x00000010:word32] = eax_131;
					eax_131 = WriteFile(Mem130[esp_87 - 0x00000010:HANDLE], Mem130[esp_87 - 12:LPCVOID], Mem130[esp_87 - 8:DWORD], Mem130[esp_87 - 4:LPDWORD], Mem130[esp_87 + 0x00000000:LPOVERLAPPED]);
					esp_133 = esp_87 + 0x00000004;
				}
			}
			else if (esi_142 != 0x000000FC)
			{
				word32 esp_175;
				word32 ebx_174;
				Mem153[fp - 0x00000210:word32] = 0x004BF704;
				Mem155[fp - 0x00000214:word32] = 0x00000314;
				Mem158[fp - 0x00000218:word32] = 0x004EE710;
				word32 ebx_160;
				word32 eax_161 = fn004492AA(es, ds, fs, gs, dwArg00, dwArg04, dwArg08, out ebx_160);
				word16 ax_162 = (word16) eax_161;
				if (eax_161 == 0x00000000)
				{
					Mem283[fp - 0x00000210:word32] = 0x00000104;
					Mem286[fp - 0x00000214:word32] = 0x004EE742;
					Mem288[fp - 0x00000218:word32] = ebx_160;
					Mem289[0x004EE94A:word16] = ax_162;
					esi_142 = 0x004EE742;
					esp_175 = fp - 0x0000020C;
					ebx_174 = 0x000002FB;
					if (GetModuleFileNameW(Mem289[fp - 0x00000218:HMODULE], Mem289[fp - 532:LPWSTR], Mem289[fp - 528:DWORD]) == 0x00000000)
					{
						Mem299[fp - 0x00000210:word32] = 0x004BF6D4;
						Mem301[fp - 0x00000214:word32] = 0x000002FB;
						Mem303[fp - 0x00000218:word32] = 0x004EE742;
						esp_175 = fp - 0x0000020C;
						if (fn004492AA(es, ds, fs, gs, dwArg00, dwArg04, dwArg08, out ebx_174) != 0x00000000)
						{
l00441BF8:
							word32 esp_272 = esp_175 - 0x00000004;
							Mem273[esp_272 + 0x00000000:word32] = 0x00000000;
							Mem275[esp_272 - 0x00000004:word32] = 0x00000000;
							Mem277[esp_272 - 0x00000008:word32] = 0x00000000;
							Mem279[esp_272 - 0x0000000C:word32] = 0x00000000;
							Mem281[esp_272 - 0x00000010:word32] = 0x00000000;
							esp_175 = esp_272 - 0x00000010;
l00441BFF:
							fn00441757(fp - 0x00000004, es, ds, fs, gs, out ebx_174);
						}
					}
				}
				else
				{
					Mem311[fp - 0x00000210:word32] = ebx_160;
					Mem313[fp - 0x00000214:word32] = ebx_160;
					Mem315[fp - 0x00000218:word32] = ebx_160;
					Mem317[fp - 0x0000021C:word32] = ebx_160;
					Mem319[fp - 0x00000220:word32] = ebx_160;
					esp_175 = fp - 0x00000220;
					goto l00441BFF;
				}
				word32 esp_176 = esp_175 - 0x00000004;
				Mem177[esp_176 + 0x00000000:word32] = esi_142;
				esp_175 = esp_176 + 0x00000004;
				if (fn0044073C(dwArg00) >u 0xFFFFFFC5)
				{
					Mem224[esp_176 + 0x00000000:word32] = esi_142;
					word32 eax_226 = fn0044073C(dwArg00) * 0x00000002 + 0x004EE6CC;
					Mem230[esp_176 - 0x00000004:word32] = 0x00000003;
					Mem233[esp_176 - 0x00000008:word32] = 0x004BF6CC;
					Mem237[esp_176 - 0x0000000C:word32] = ebx_174 - (eax_226 - esi_142 >> 0x00000001);
					Mem239[esp_176 - 0x00000010:word32] = eax_226;
					esp_175 = esp_176 + 0x00000004;
					if (fn004491DD(esi_142, es, ds, fs, gs, dwArg00, dwArg04, dwArg08, dwArg0C) != 0x00000000)
						goto l00441BF8;
				}
				word32 esp_188 = esp_175 - 0x00000004;
				Mem189[esp_188 + 0x00000000:word32] = 0x004BF6C4;
				Mem192[esp_188 - 0x00000004:word32] = 0x00000314;
				Mem194[esp_188 - 0x00000008:word32] = 0x004EE710;
				esi_142 = 0x00000314;
				esp_175 = esp_188 + 0x00000004;
				word32 edx_195;
				if (fn00449168(es, ds, fs, gs, dwArg00, dwArg04, dwArg08, out edx_195) != 0x00000000)
					goto l00441BF8;
				Mem202[esp_188 + 0x00000000:word32] = Mem194[fp + 0xFFFFFE00:word32];
				Mem204[esp_188 - 0x00000004:word32] = 0x00000314;
				Mem206[esp_188 - 0x00000008:word32] = 0x004EE710;
				esp_175 = esp_188 + 0x00000004;
				if (fn00449168(es, ds, fs, gs, dwArg00, dwArg04, dwArg08, out edx) != 0x00000000)
					goto l00441BF8;
				Mem214[esp_188 + 0x00000000:word32] = 0x00012010;
				Mem216[esp_188 - 0x00000004:word32] = 0x004BF678;
				Mem218[esp_188 - 0x00000008:word32] = 0x004EE710;
				eax_131 = fn00448FFC(edx, fp - 0x00000004, es, ds, fs, gs, dwArg00, dwArg04, dwArg08);
				esp_133 = esp_188 + 0x00000004;
			}
		}
		else
			goto l00441C86;
	}
	word32 esp_54 = esp_133 + 0x00000004;
	word32 ecx_66;
	fn004394A0(eax_131, Mem0[fp - 0x00000008:word32] ^ fp - 0x00000004, edx, Mem0[esp_54 + 0x00000004:word32], fp - 0x00000004, Mem0[esp_54 + 0x00000000:word32], Mem0[esp_133 + 0x00000000:word32], es, ds, fs, gs, ebp, out ecx_66);
	return edx;
}

word32 fn00441CE9(word32 esi, selector es, selector ds, selector fs, selector gs, ptr32 ebpOut)
{
	*ebpOut = ebp;
	word32 esp_15 = fp;
	word32 ebx_10;
	word32 esi_11;
	word32 edx_27;
	if (fn0044930D(esi, es, ds, fs, gs, 0x00000003, out edx_27, out ebx_10, out esi_11) != 0x00000001)
	{
		Mem53[fp - 0x00000004:word32] = 0x00000003;
		esp_15 = fp;
		word32 ebx_55;
		word32 esi_56;
		if (fn0044930D(esi_11, es, ds, fs, gs, dwArg00, out edx_27, out ebx_55, out esi_56) == 0x00000000 && Mem53[0x004DEA50:word32] == 0x00000001)
		{
l00441D0B:
			word32 esp_41 = esp_15 - 0x00000004;
			Mem42[esp_41 + 0x00000000:word32] = 0x000000FC;
			word32 edx_44 = fn00441B3A(edx_27, ebp, es, ds, fs, gs, dwArg00);
			Mem46[esp_41 - 0x00000004:word32] = 0x000000FF;
			edx_27 = fn00441B3A(edx_44, ebp, es, ds, fs, gs, dwArg00);
		}
	}
	else
		goto l00441D0B;
	return edx_27;
}

word32 fn00441D22()
{
	word32 eax_8 = HeapCreate(0x00000000, 0x00001000, 0x00000000);
	Mem16[0x004EED38:word32] = eax_8;
	return (word32) (eax_8 != 0x00000000);
}

void fn00441D40(word32 dwArg04)
{
	Mem10[0x004EED3C:word32] = dwArg04;
	return;
}

word32 fn00441D4F(word32 dwArg04)
{
	word32 eax_11 = DecodePointer(Mem0[0x004EED3C:word32]);
	if (eax_11 != 0x00000000)
	{
		eax_11();
		if (eax_11 != 0x00000000)
			return 0x00000001;
		else
		{
l00441D73:
			return 0x00000000;
		}
	}
	else
		goto l00441D73;
}

word32 fn00441D77(word32 esi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg08, word32 dwArg0C, ptr32 edxOut, ptr32 ebxOut)
{
	*ebxOut = ebx;
	word32 esi_116;
	word32 eax_117;
	word32 edx_9;
	*edxOut = dwArg04;
	if (dwArg04 != 0x00000000)
	{
		word32 edi_100 = dwArg08;
		if (dwArg08 == 0x00000000)
		{
l00441D8C:
			word32 edx_62;
			word32 ebx_63;
			word32 ebp_64;
			word32 esi_65;
			word32 edi_66;
			word32 eax_67 = fn0043D0A3(fp - 0x00000004, esi, es, ds, fs, gs, out edx_62, out ebx_63, out ebp_64, out esi_65, out edi_66);
			Mem69[fp - 0x00000010:word32] = 0x00000016;
			esi_116 = Mem69[fp - 0x00000010:word32];
			Mem72[eax_67 + 0x00000000:word32] = esi_116;
l00441D96:
			word32 edx_52;
			word32 ebx_53;
			word32 ebp_54;
			fn004417A9(es, ds, fs, gs, out edx_52, out ebx_53, out ebp_54);
			eax_117 = esi_116;
		}
		else
		{
			word32 eax_82 = dwArg0C;
			byte al_83 = (byte) dwArg0C;
			if (dwArg0C == 0x00000000)
			{
				Mem87[dwArg04 + 0x00000000:byte] = al_83;
				goto l00441D8C;
			}
			else
			{
				word32 esi_89 = dwArg04 - dwArg0C;
				do
				{
					byte cl_93 = Mem0[eax_82 + 0x00000000:byte];
					Mem94[esi_89 + eax_82:byte] = cl_93;
					eax_82 = eax_82 + 0x00000001;
					if (cl_93 == 0x00)
						break;
					edi_100 = edi_100 - 0x00000001;
				} while (edi_100 != 0x00000000);
				if (edi_100 == 0x00000000)
				{
					Mem104[dwArg04 + 0x00000000:byte] = 0x00;
					word32 edx_105;
					word32 ebx_106;
					word32 ebp_107;
					word32 esi_108;
					word32 edi_109;
					word32 eax_110 = fn0043D0A3(fp - 0x00000004, esi_89, es, ds, fs, gs, out edx_105, out ebx_106, out ebp_107, out esi_108, out edi_109);
					Mem112[fp - 0x00000010:word32] = 0x00000022;
					word32 ecx_113 = Mem112[fp - 0x00000010:word32];
					Mem115[eax_110 + 0x00000000:word32] = ecx_113;
					esi_116 = ecx_113;
					goto l00441D96;
				}
				else
					eax_117 = 0x00000000;
			}
		}
	}
	else
		goto l00441D8C;
	return eax_117;
}

word32 fn00441DD6(word32 esi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 esiOut)
{
	*esiOut = esi;
	if (dwArg04 == 0x00000000)
	{
		word32 edx_29;
		word32 ebx_30;
		word32 ebp_31;
		word32 esi_32;
		word32 edi_33;
		Mem35[fn0043D0A3(fp - 0x00000004, esi, es, ds, fs, gs, out edx_29, out ebx_30, out ebp_31, out esi_32, out edi_33):word32] = 0x00000016;
		word32 edx_36;
		word32 ebx_37;
		word32 ebp_38;
		fn004417A9(es, ds, fs, gs, out edx_36, out ebx_37, out ebp_38);
		return 0xFFFFFFFF;
	}
	else
		return HeapSize(Mem0[0x004EED38:word32], 0x00000000, dwArg04);
}

word32 fn00441E10(word32 ebx, word32 esi, word32 edi, selector fs, word32 dwArg00, word32 dwArg04, word32 dwArg08)
{
	word32 esp_13 = fp - 0x00000008 - dwArg08;
	Mem16[esp_13 - 0x00000004:word32] = ebx;
	Mem19[esp_13 - 0x00000008:word32] = esi;
	Mem22[esp_13 - 0x0000000C:word32] = edi;
	Mem32[esp_13 - 0x00000010:word32] = Mem22[0x004DEBE0:word32] ^ fp + 0x00000008;
	Mem36[esp_13 - 0x00000014:word32] = dwArg00;
	Mem41[fs:0x00000000:word32] = fp - 0x00000008;
	return fp + 0x00000008;
}

word32 fn00441E55(word32 ebp, selector fs, word32 dwArg00, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, ptr32 ebpOut, ptr32 esiOut, ptr32 ediOut)
{
	Mem5[fs:0x00000000:word32] = Mem0[ebp - 0x00000010:word32];
	word32 ebp_22;
	*ebpOut = Mem5[ebp + 0x00000000:word32];
	Mem25[ebp + 0x00000000:word32] = dwArg00;
	word32 edi_14;
	*ediOut = dwArg08;
	word32 esi_17;
	*esiOut = dwArg0C;
	return dwArg10;
}

word32 fn00441FFF(word32 ecx, word32 ebx, word32 esi, word32 edi, ptr32 esiOut, ptr32 ediOut)
{
	Mem3[esp - 0x00000004:word32] = edi;
	word32 esp_1 = esp - 0x00000004;
	if ((esi & 0x0000000F) != 0x00000000)
	{
		word32 edx_156 = 0x00000010 - (esi & 0x0000000F);
		Mem159[esp - 0x00000008:word32] = ecx - edx_156;
		word32 ecx_163 = edx_156 & 0x00000003;
		if ((edx_156 & 0x00000003) != 0x00000000)
			do
			{
				Mem200[edi + 0x00000000:byte] = Mem159[esi + 0x00000000:byte];
				esi = esi + 0x00000001;
				edi = edi + 0x00000001;
				ecx_163 = ecx_163 - 0x00000001;
			} while (ecx_163 != 0x00000000);
		word32 eax_172 = edx_156 >>u 0x00000002;
		if (edx_156 >>u 0x00000002 != 0x00000000)
			do
			{
				Mem189[edi + 0x00000000:word32] = Mem159[esi + 0x00000000:word32];
				esi = esi + 0x00000004;
				edi = edi + 0x00000004;
				eax_172 = eax_172 - 0x00000001;
			} while (eax_172 != 0x00000000);
		ecx = Mem159[esp - 0x00000008:word32];
		esp_1 = esp - 0x00000004;
	}
	word32 ecx_23 = ecx & 0x0000007F;
	word32 edx_131 = ecx >>u 0x00000007;
	if (edx_131 != 0x00000000)
		do
		{
			word128 xmm1_135 = Mem3[esi + 0x00000010:word128];
			word128 xmm2_136 = Mem3[esi + 0x00000020:word128];
			word128 xmm3_137 = Mem3[esi + 0x00000030:word128];
			Mem138[edi + 0x00000000:word128] = Mem3[esi + 0x00000000:word128];
			Mem139[edi + 0x00000010:word128] = xmm1_135;
			Mem140[edi + 0x00000020:word128] = xmm2_136;
			Mem141[edi + 0x00000030:word128] = xmm3_137;
			word128 xmm5_143 = Mem141[esi + 0x00000050:word128];
			word128 xmm6_144 = Mem141[esi + 0x00000060:word128];
			word128 xmm7_145 = Mem141[esi + 0x00000070:word128];
			Mem146[edi + 0x00000040:word128] = Mem141[esi + 0x00000040:word128];
			Mem147[edi + 0x00000050:word128] = xmm5_143;
			Mem148[edi + 0x00000060:word128] = xmm6_144;
			Mem149[edi + 0x00000070:word128] = xmm7_145;
			esi = esi + 0x00000080;
			edi = edi + 0x00000080;
			edx_131 = edx_131 - 0x00000001;
		} while (edx_131 != 0x00000000);
	if (ecx_23 != 0x00000000)
	{
		word32 edx_120 = ecx_23 >>u 0x00000004;
		if (ecx_23 >>u 0x00000004 != 0x00000000)
			do
			{
				Mem124[edi + 0x00000000:word128] = Mem3[esi + 0x00000000:word128];
				esi = esi + 0x00000010;
				edi = edi + 0x00000010;
				edx_120 = edx_120 - 0x00000001;
			} while (edx_120 != 0x00000000);
		if ((ecx_23 & 0x0000000F) != 0x00000000)
		{
			word32 ecx_109 = (ecx_23 & 0x0000000F) >>u 0x00000002;
			if (ecx_109 != 0x00000000)
				do
				{
					Mem113[edi + 0x00000000:word32] = Mem3[esi + 0x00000000:word32];
					esi = esi + 0x00000004;
					edi = edi + 0x00000004;
					ecx_109 = ecx_109 - 0x00000001;
				} while (ecx_109 != 0x00000000);
			word32 ecx_106 = ecx_23 & 0x0000000F & 0x00000003;
			if (ecx_106 != 0x00000000)
				do
				{
					Mem103[edi + 0x00000000:byte] = Mem3[esi + 0x00000000:byte];
					esi = esi + 0x00000001;
					edi = edi + 0x00000001;
					ecx_106 = ecx_106 - 0x00000001;
				} while (ecx_106 != 0x00000000);
		}
	}
	word32 esp_61 = esp_1 + 0x00000004;
	word32 esi_62;
	*esiOut = Mem3[esp_61 + 0x00000000:word32];
	word32 edi_64;
	*ediOut = Mem3[esp_61 + 0x00000004:word32];
	return Mem3[esp_61 + 0x00000008:word32];
}

word32 fn00442B62(word32 dwArg04, ptr32 esiOut, ptr32 ediOut)
{
	InterlockedIncrement(dwArg04);
	word32 esi_14 = InterlockedIncrement;
	word32 edi_18 = dwArg04;
	word32 esp_120 = fp - 0x00000010;
	word32 eax_24 = Mem0[dwArg04 + 0x000000B0:word32];
	if (eax_24 != 0x00000000)
	{
		InterlockedIncrement(eax_24);
		esp_120 = fp - 0x00000010;
	}
	word32 eax_30 = Mem0[dwArg04 + 0x000000B8:word32];
	if (eax_30 != 0x00000000)
	{
		esp_120 = fp - 0x00000014;
		esi_14();
	}
	word32 eax_42 = Mem0[edi_18 + 0x000000B4:word32];
	if (eax_42 != 0x00000000)
	{
		esp_120 = esp_120 - 0x00000004;
		Mem132[esp_120 + 0x00000000:word32] = eax_42;
		esi_14();
	}
	word32 eax_52 = Mem0[edi_18 + 0x000000C0:word32];
	if (eax_52 != 0x00000000)
	{
		esp_120 = esp_120 - 0x00000004;
		Mem130[esp_120 + 0x00000000:word32] = eax_52;
		esi_14();
	}
	word32 ebx_65 = edi_18 + 0x00000050;
	word32 dwArg04_66 = 0x00000006;
	do
	{
		if (Mem0[ebx_65 - 0x00000008:word32] != 0x004DED60)
		{
			word32 eax_123 = Mem0[ebx_65 + 0x00000000:word32];
			if (eax_123 != 0x00000000)
			{
				esp_120 = esp_120 - 0x00000004;
				Mem128[esp_120 + 0x00000000:word32] = eax_123;
				esi_14();
			}
		}
		if (Mem0[ebx_65 - 0x00000004:word32] != 0x00000000)
		{
			word32 eax_116 = Mem0[ebx_65 + 0x00000004:word32];
			if (eax_116 != 0x00000000)
			{
				esp_120 = esp_120 - 0x00000004;
				Mem121[esp_120 + 0x00000000:word32] = eax_116;
				esi_14();
			}
		}
		word32 v12_97 = dwArg04_66 - 0x00000001;
		ebx_65 = ebx_65 + 0x00000010;
		dwArg04_66 = v12_97;
	} while (v12_97 != 0x00000000);
	word32 esp_104 = esp_120 - 0x00000004;
	Mem105[esp_104 + 0x00000000:word32] = Mem0[edi_18 + 0x000000D4:word32] + 0x000000B4;
	esi_14();
	word32 edi_106;
	*ediOut = Mem105[esp_104 + 0x00000000:word32];
	word32 esi_108;
	*esiOut = Mem105[esp_104 + 0x00000004:word32];
	return Mem105[esp_104 + 0x0000000C:word32];
}

word32 fn00442BF1(word32 dwArg04)
{
	word32 edi_106 = dwArg04;
	if (dwArg04 != 0x00000000)
	{
		InterlockedDecrement(dwArg04);
		word32 esi_103 = InterlockedDecrement;
		word32 esp_108 = fp - 0x00000010;
		word32 eax_48 = Mem0[dwArg04 + 0x000000B0:word32];
		if (eax_48 != 0x00000000)
		{
			InterlockedDecrement(eax_48);
			esp_108 = fp - 0x00000010;
		}
		word32 eax_54 = Mem0[dwArg04 + 0x000000B8:word32];
		if (eax_54 != 0x00000000)
		{
			esp_108 = fp - 0x00000014;
			esi_103();
		}
		word32 eax_65 = Mem0[edi_106 + 0x000000B4:word32];
		if (eax_65 != 0x00000000)
		{
			esp_108 = esp_108 - 0x00000004;
			Mem149[esp_108 + 0x00000000:word32] = eax_65;
			esi_103();
		}
		word32 eax_75 = Mem0[edi_106 + 0x000000C0:word32];
		if (eax_75 != 0x00000000)
		{
			esp_108 = esp_108 - 0x00000004;
			Mem147[esp_108 + 0x00000000:word32] = eax_75;
			esi_103();
		}
		word32 ebx_104 = edi_106 + 0x00000050;
		word32 dwArg04_121 = 0x00000006;
		do
		{
			if (Mem0[ebx_104 - 0x00000008:word32] != 0x004DED60)
			{
				word32 eax_140 = Mem0[ebx_104 + 0x00000000:word32];
				if (eax_140 != 0x00000000)
				{
					esp_108 = esp_108 - 0x00000004;
					Mem145[esp_108 + 0x00000000:word32] = eax_140;
					esi_103();
				}
			}
			if (Mem0[ebx_104 - 0x00000004:word32] != 0x00000000)
			{
				word32 eax_133 = Mem0[ebx_104 + 0x00000004:word32];
				if (eax_133 != 0x00000000)
				{
					esp_108 = esp_108 - 0x00000004;
					Mem138[esp_108 + 0x00000000:word32] = eax_133;
					esi_103();
				}
			}
			word32 v12_120 = dwArg04_121 - 0x00000001;
			ebx_104 = ebx_104 + 0x00000010;
			dwArg04_121 = v12_120;
		} while (v12_120 != 0x00000000);
		word32 esp_127 = esp_108 - 0x00000004;
		Mem128[esp_127 + 0x00000000:word32] = Mem0[edi_106 + 0x000000D4:word32] + 0x000000B4;
		esi_103();
		esi = Mem128[esp_127 + 0x00000000:word32];
	}
	return esi;
}

word32 fn00442C8A(word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg04)
{
	word32 eax_17 = Mem0[dwArg04 + 0x000000BC:word32];
	word32 ebx_106 = 0x00000000;
	word32 esp_109 = fp - 0x00000010;
	if (eax_17 != 0x00000000 && eax_17 != 0x004DE9F8)
	{
		word32 eax_171 = Mem0[dwArg04 + 0x000000B0:word32];
		if (eax_171 != 0x00000000 && Mem0[eax_171 + 0x00000000:word32] == 0x00000000)
		{
			word32 eax_176 = Mem0[dwArg04 + 0x000000B8:word32];
			if (eax_176 != 0x00000000 && Mem0[eax_176 + 0x00000000:word32] == 0x00000000)
			{
				word32 edx_221;
				word32 ebx_222;
				fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, eax_176, out edx_221, out ebx_222);
				Mem225[fp - 0x00000018:word32] = Mem0[dwArg04 + 0x000000BC:word32];
				ebx_106 = fn00445E29(fp - 0x00000004, es, ds, fs, gs, dwArg00);
				esp_109 = fp - 0x00000010;
			}
			word32 eax_184 = Mem0[dwArg04 + 0x000000B4:word32];
			if (eax_184 != ebx_106 && Mem0[eax_184 + 0x00000000:word32] == ebx_106)
			{
				word32 esp_206 = esp_109 - 0x00000004;
				Mem207[esp_206 + 0x00000000:word32] = eax_184;
				word32 edx_208;
				word32 ebx_209;
				fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_208, out ebx_209);
				Mem212[esp_206 - 0x00000004:word32] = Mem207[dwArg04 + 0x000000BC:word32];
				fn00445BD0(fp - 0x00000004, es, ds, fs, gs, dwArg00);
				esp_109 = esp_206 + 0x00000004;
			}
			word32 esp_190 = esp_109 - 0x00000004;
			Mem191[esp_190 + 0x00000000:word32] = Mem0[dwArg04 + 0x000000B0:word32];
			word32 edx_192;
			word32 ebx_193;
			fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_192, out ebx_193);
			Mem196[esp_190 - 0x00000004:word32] = Mem191[dwArg04 + 0x000000BC:word32];
			word32 edx_197;
			fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_197, out ebx_106);
			esp_109 = esp_190 + 0x00000004;
		}
	}
	word32 eax_31 = Mem0[dwArg04 + 0x000000C0:word32];
	if (eax_31 != ebx_106 && Mem0[eax_31 + 0x00000000:word32] == ebx_106)
	{
		word32 esp_140 = esp_109 - 0x00000004;
		Mem141[esp_140 + 0x00000000:word32] = Mem0[dwArg04 + 0x000000C4:word32] - 0x000000FE;
		word32 edx_142;
		word32 ebx_143;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_142, out ebx_143);
		Mem150[esp_140 - 0x00000004:word32] = Mem141[dwArg04 + 0x000000CC:word32] - 0x00000080;
		word32 edx_151;
		word32 ebx_152;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_151, out ebx_152);
		Mem158[esp_140 - 0x00000008:word32] = Mem150[dwArg04 + 0x000000D0:word32] - 0x00000080;
		word32 edx_159;
		word32 ebx_160;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_159, out ebx_160);
		Mem163[esp_140 - 0x0000000C:word32] = Mem158[dwArg04 + 0x000000C0:word32];
		word32 edx_164;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_164, out ebx_106);
		esp_109 = esp_140 + 0x00000004;
	}
	word32 eax_38 = Mem0[dwArg04 + 0x000000D4:word32];
	if (eax_38 != 0x004DED68 && Mem0[eax_38 + 0x000000B4:word32] == ebx_106)
	{
		word32 esp_124 = esp_109 - 0x00000004;
		Mem125[esp_124 + 0x00000000:word32] = eax_38;
		fn004457DC(fp - 0x00000004, es, ds, fs, gs, dwArg00);
		Mem127[esp_124 - 0x00000004:word32] = Mem125[dwArg04 + 0x000000D4:word32];
		word32 edx_128;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_128, out ebx_106);
		esp_109 = esp_124 + 0x00000004;
	}
	Mem49[fp + 0x00000004:word32] = 0x00000006;
	word32 edi_48 = dwArg04 + 0x00000050 + 0x00000004;
	do
	{
		if (Mem49[edi_48 - 0x00000008:word32] != 0x004DED5C)
		{
			word32 eax_110 = Mem49[edi_48 + 0x00000000:word32];
			if (eax_110 != ebx_106 && Mem49[eax_110 + 0x00000000:word32] == ebx_106)
			{
				word32 esp_115 = esp_109 - 0x00000004;
				Mem116[esp_115 + 0x00000000:word32] = eax_110;
				word32 edx_117;
				fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_117, out ebx_106);
				esp_109 = esp_115 + 0x00000004;
			}
		}
		if (Mem49[edi_48 - 0x00000004:word32] != ebx_106)
		{
			word32 eax_98 = Mem49[edi_48 + 0x00000000:word32];
			if (eax_98 != ebx_106 && Mem49[eax_98 + 0x00000000:word32] == ebx_106)
			{
				word32 esp_103 = esp_109 - 0x00000004;
				Mem104[esp_103 + 0x00000000:word32] = eax_98;
				word32 edx_105;
				fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_105, out ebx_106);
				esp_109 = esp_103 + 0x00000004;
			}
		}
		word32 v13_74 = Mem49[fp + 0x00000004:word32] - 0x00000001;
		Mem75[fp + 0x00000004:word32] = v13_74;
		edi_48 = edi_48 + 0x00000010;
	} while (v13_74 != 0x00000000);
	Mem79[esp_109 - 0x00000004:word32] = dwArg04;
	word32 edx_85;
	word32 ebx_86;
	fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_85, out ebx_86);
	return edx_85;
}

word32 fn00442DD5(word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg08, ptr32 edxOut)
{
	*edxOut = edx;
	word32 eax_23;
	word32 edi_11 = dwArg08;
	if (dwArg08 != 0x00000000 && dwArg04 != 0x00000000)
	{
		if (Mem0[dwArg04 + 0x00000000:word32] != dwArg08)
		{
			Mem67[dwArg04 + 0x00000000:word32] = dwArg08;
			word32 esi_68;
			word32 ebp_70 = fn00442B62(dwArg08, out esi_68, out edi_11);
			if (esi_68 != 0x00000000)
			{
				Mem77[fp - 0x00000010:word32] = esi_68;
				word32 esi_79 = fn00442BF1(dwArg00);
				if (Mem77[esi_79 + 0x00000000:word32] == 0x00000000 && esi_79 != 0x004DEED0)
				{
					Mem87[fp - 0x00000010:word32] = esi_79;
					word32 edx_92;
					*edxOut = fn00442C8A(ebp_70, es, ds, fs, gs, dwArg00);
				}
			}
		}
		eax_23 = edi_11;
	}
	else
		eax_23 = 0x00000000;
	return eax_23;
}

word32 fn00442E22(word32 ebx, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs, ptr32 edxOut, ptr32 ebxOut, ptr32 esiOut, ptr32 ediOut)
{
	word32 esi_32;
	word32 ebx_15;
	word32 esi_17;
	word32 ebp_16;
	fn0044304B(fn00441E10(ebx, esi, edi, fs, dwLoc0C, 0x004D5660, 0x0000000C), esi, es, ds, fs, gs, out ebx_15, out ebp_16, out esi_17);
	word32 esp_29 = fp - 0x00000008;
	word32 eax_22 = Mem0[0x004DED5C:word32];
	if ((Mem0[eax + 0x00000070:word32] & eax_22) != 0x00000000 && Mem0[eax + 0x0000006C:word32] != 0x00000000)
	{
		word32 ebx_92;
		word32 esi_94;
		word32 edx_95;
		*edxOut = fn0044304B(ebp_16, eax, es, ds, fs, gs, out ebx_92, out ebp_16, out esi_94);
		esi_32 = Mem0[eax_22 + 0x0000006C:word32];
	}
	else
	{
		Mem67[fp - 0x0000000C:word32] = 0x0000000C;
		word32 ebx_68;
		fn00446401(ebx_15, edi, es, ds, fs, gs, dwArg00, out ebx_68);
		Mem73[ebp_16 - 0x00000004:word32] = Mem67[ebp_16 - 0x00000004:word32] & 0x00000000;
		Mem76[fp - 0x0000000C:word32] = Mem73[0x004DEFA8:word32];
		Mem80[fp - 0x00000010:word32] = eax + 0x0000006C;
		word32 edx_81;
		Mem87[ebp_16 - 0x0000001C:word32] = fn00442DD5(ebp_16, es, ds, fs, gs, dwArg00, dwArg04, out edx_81);
		Mem88[ebp_16 - 0x00000004:word32] = 0xFFFFFFFE;
		esp_29 = fp - 0x00000008;
		esi_32 = fn00442E8F(ebp_16);
	}
	if (esi_32 == 0x00000000)
	{
		Mem56[esp_29 - 0x00000004:word32] = 0x00000020;
		word32 edx_57;
		word32 ebx_58;
		fn00441AF6(ebp_16, esi_32, es, ds, fs, gs, out edx_57, out ebx_58, out ebp_16, out esi_32);
	}
	word32 ebp_47;
	word32 esi_48;
	word32 edi_49;
	word32 ebx_50;
	*ebxOut = fn00441E55(ebp_16, fs, 0x0000000C, dwArg00, dwArg04, dwArg08, dwArg0C, out ebp_47, out esi_48, out edi_49);
	return esi_32;
}

word32 fn00442E8F(word32 ebp)
{
	fn00446328(0x0000000C);
	return Mem0[ebp - 0x0000001C:word32];
}

word32 fn00442E9B()
{
	return EncodePointer(0x00000000);
}

word32 fn00442EAD()
{
	word32 eax_10 = TlsGetValue(Mem0[0x004DEFB8:word32]);
	word32 esi_12 = eax_10;
	if (eax_10 == 0x00000000)
	{
		word32 eax_25 = DecodePointer(Mem0[0x004EED48:word32]);
		TlsSetValue(Mem0[0x004DEFB8:word32], eax_25);
		esi_12 = eax_25;
	}
	return esi_12;
}

word32 fn00442EE1(word32 ebx, word32 ebp, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs, ptr32 ebpOut, ptr32 esiOut)
{
	*ebpOut = ebp;
	word32 esp_1 = fp;
	if (Mem0[0x004DEFB4:word32] != 0xFFFFFFFF)
	{
		word32 eax_156 = DecodePointer(Mem0[0x004EED50:word32]);
		esp_1 = fp - 0x00000004;
		eax_156();
		Mem159[0x004DEFB4:word32] = Mem0[0x004DEFB4:word32] | 0xFFFFFFFF;
	}
	word32 eax_37 = Mem0[0x004DEFB8:word32];
	if (eax_37 != 0xFFFFFFFF)
	{
		word32 esp_144 = esp_1 - 0x00000004;
		Mem145[esp_144 + 0x00000000:word32] = eax_37;
		TlsFree(Mem145[esp_144 + 0x00000000:DWORD]);
		Mem149[0x004DEFB8:word32] = Mem145[0x004DEFB8:word32] | 0xFFFFFFFF;
		esp_1 = esp_144 + 0x00000004;
	}
	word32 esp_45 = esp_1 - 0x00000004;
	Mem46[esp_45 + 0x00000000:word32] = ebx;
	Mem49[esp_45 - 0x00000004:word32] = esi;
	Mem52[esp_45 - 0x00000008:word32] = edi;
	word32 ebx_109 = DeleteCriticalSection;
	word32 esi_50 = 0x004DF6A4;
	word32 esp_143 = esp_45 - 0x00000008;
	do
	{
		word32 edi_61 = Mem52[esi_50 + 0x00000000:word32];
		if (edi_61 != 0x00000000 && Mem52[esi_50 + 0x00000000:word32] != 0x00000001)
		{
			word32 esp_129 = esp_143 - 0x00000004;
			Mem130[esp_129 + 0x00000000:word32] = edi_61;
			DeleteCriticalSection(Mem130[esp_129 + 0x00000000:LPCRITICAL_SECTION]);
			Mem133[esp_129 + 0x00000000:word32] = edi_61;
			fn00439682(ebp, esi_50, es, ds, fs, gs, dwArg00, out edx, out ebx_109);
			Mem139[esi_50 + 0x00000000:word32] = Mem133[esi_50 + 0x00000000:word32] & 0x00000000;
			esp_143 = esp_129 + 0x00000004;
		}
		esi_50 = esi_50 + 0x00000008;
	} while (esi_50 < 0x004DF7BC);
	word32 esi_108 = 0x004DF6A0;
	word32 esp_110 = esp_143 + 0x00000004;
	do
	{
		word32 eax_92 = Mem52[esi_108 + 0x00000000:word32];
		if (eax_92 != 0x00000000 && Mem52[esi_108 + 0x00000004:word32] == 0x00000001)
		{
			esp_110 = esp_110 - 0x00000004;
			Mem123[esp_110 + 0x00000000:word32] = eax_92;
			ebx_109();
		}
		esi_108 = esi_108 + 0x00000008;
	} while (esi_108 < 0x004DF7C0);
	word32 esi_114;
	*esiOut = Mem52[esp_110 + 0x00000000:word32];
	return edx;
}

word32 fn00442F1E(word32 ebx, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs, ptr32 ebxOut, ptr32 ebpOut, ptr32 esiOut, ptr32 ediOut)
{
	word32 ebp_11 = fn00441E10(ebx, esi, edi, fs, dwLoc0C, 0x004D5680, 0x00000008);
	Mem13[fp - 0x0000000C:word32] = 0x004BFB50;
	GetModuleHandleW(Mem13[fp - 0x0000000C:LPCWSTR]);
	word32 esi_16 = Mem13[ebp_11 + 0x00000008:word32];
	Mem17[esi_16 + 0x0000005C:word32] = 0x004BFC10;
	Mem19[esi_16 + 0x00000008:word32] = Mem17[esi_16 + 0x00000008:word32] & 0x00000000;
	Mem25[esi_16 + 0x00000014:word32] = 0x00000001;
	Mem26[esi_16 + 0x00000070:word32] = 0x00000001;
	Mem27[esi_16 + 0x000000C8:byte] = 0x43;
	Mem28[esi_16 + 0x0000014B:byte] = 0x43;
	Mem29[esi_16 + 0x00000068:word32] = 0x004DF010;
	Mem31[fp - 0x0000000C:word32] = 0x0000000D;
	word32 ebx_36;
	fn00446401(ebx, 0x00000001, es, ds, fs, gs, dwArg00, out ebx_36);
	Mem41[ebp_11 - 0x00000004:word32] = Mem31[ebp_11 - 0x00000004:word32] & 0x00000000;
	Mem45[fp - 0x0000000C:word32] = Mem41[esi_16 + 0x00000068:word32];
	InterlockedIncrement(Mem45[fp - 0x0000000C:(ptr LONG)]);
	Mem48[ebp_11 - 0x00000004:word32] = 0xFFFFFFFE;
	fn00442FC0();
	Mem50[fp - 0x0000000C:word32] = 0x0000000C;
	word32 ebx_51;
	word32 edx_52 = fn00446401(ebx_36, 0x00000001, es, ds, fs, gs, dwArg00, out ebx_51);
	Mem55[ebp_11 - 0x00000004:word32] = 0x00000001;
	word32 eax_56 = Mem55[ebp_11 + 0x0000000C:word32];
	Mem57[esi_16 + 0x0000006C:word32] = eax_56;
	if (eax_56 == 0x00000000)
		Mem82[esi_16 + 0x0000006C:word32] = Mem57[0x004DEFA8:word32];
	Mem63[fp - 0x0000000C:word32] = Mem57[esi_16 + 0x0000006C:word32];
	word32 esi_64;
	word32 edi_65;
	word32 ebp_66 = fn00442B62(dwArg00, out esi_64, out edi_65);
	Mem69[ebp_66 - 0x00000004:word32] = 0xFFFFFFFE;
	fn00442FC9();
	word32 ebp_73;
	word32 esi_74;
	word32 edi_75;
	word32 ebx_76;
	*ebxOut = fn00441E55(ebp_66, fs, 0x00000008, dwArg00, dwArg04, dwArg08, dwArg0C, out ebp_73, out esi_74, out edi_75);
	return edx_52;
}

void fn00442FC0()
{
	fn00446328(0x0000000D);
	return;
}

void fn00442FC9()
{
	fn00446328(0x0000000C);
	return;
}

word32 fn00442FD2(word32 ebp, word32 esi, selector es, selector ds, selector fs, selector gs, ptr32 edxOut, ptr32 ebxOut, ptr32 ebpOut, ptr32 esiOut, ptr32 ediOut)
{
	*ebpOut = ebp;
	*edxOut = edx;
	*ebxOut = ebx;
	word32 edi_13 = GetLastError();
	word32 esp_10 = fp - 0x0000000C;
	word32 eax_14 = fn00442EAD();
	eax_14();
	word32 esi_118 = eax_14;
	if (eax_14 == 0x00000000)
	{
		word32 edx_66;
		word32 ebx_67;
		word32 ebp_68;
		word32 esi_69;
		word32 eax_71 = fn0043D9E1(ebp, es, ds, fs, gs, out edx_66, out ebx_67, out ebp_68, out esi_69, out edi_13);
		esi_118 = eax_71;
		esp_10 = fp - 0x0000000C;
		if (eax_71 != 0x00000000)
		{
			Mem81[fp - 0x00000010:word32] = eax_71;
			Mem83[fp - 0x00000014:word32] = Mem81[0x004DEFB4:word32];
			Mem85[fp - 0x00000018:word32] = Mem83[0x004EED4C:word32];
			word32 eax_86 = DecodePointer(Mem85[fp - 0x00000018:PVOID]);
			eax_86();
			if (eax_86 != 0x00000000)
			{
				Mem92[fp - 0x00000018:word32] = 0x00000000;
				Mem94[fp - 0x0000001C:word32] = eax_71;
				word32 ebx_95;
				word32 ebp_96;
				word32 edx_99;
				*edxOut = fn00442F1E(ebx_67, eax_71, edi_13, es, ds, fs, gs, out ebx_95, out ebp_96, out esi_118, out edi_13);
				word32 eax_104 = GetCurrentThreadId();
				Mem106[esi_118 + 0x00000004:word32] = Mem94[esi_118 + 0x00000004:word32] | 0xFFFFFFFF;
				Mem109[esi_118 + 0x00000000:word32] = eax_104;
				esp_10 = fp - 0x00000014;
			}
			else
			{
				Mem111[fp - 0x00000018:word32] = eax_71;
				word32 edx_113;
				word32 ebx_114;
				fn00439682(ebp_68, eax_71, es, ds, fs, gs, dwArg00, out edx_113, out ebx_114);
				esp_10 = fp - 0x00000014;
				esi_118 = 0x00000000;
			}
		}
	}
	word32 esp_49 = esp_10 - 0x00000004;
	Mem50[esp_49 + 0x00000000:word32] = edi_13;
	SetLastError(Mem50[esp_49 + 0x00000000:DWORD]);
	word32 edi_52;
	*ediOut = Mem50[esp_49 + 0x00000004:word32];
	word32 esi_55;
	*esiOut = Mem50[esp_49 + 0x00000008:word32];
	return esi_118;
}

word32 fn0044304B(word32 ebp, word32 esi, selector es, selector ds, selector fs, selector gs, ptr32 ebxOut, ptr32 ebpOut, ptr32 esiOut)
{
	word32 esp_28 = fp - 0x00000004;
	word32 ebx_13;
	word32 ebp_14;
	word32 esi_15;
	word32 edi_16;
	word32 edx_12;
	word32 eax_17 = fn00442FD2(ebp, esi, es, ds, fs, gs, out edx_12, out ebx_13, out ebp_14, out esi_15, out edi_16);
	if (eax_17 == 0x00000000)
	{
		Mem37[fp - 0x00000008:word32] = 0x00000010;
		word32 ebx_39;
		word32 ebp_40;
		word32 esi_41;
		fn00441AF6(ebp_14, eax_17, es, ds, fs, gs, out edx_12, out ebx_39, out ebp_40, out esi_41);
		esp_28 = fp + 0xFFFFFFF8;
	}
	word32 esi_31;
	*esiOut = Mem0[esp_28 + 0x00000000:word32];
	return edx_12;
}

word32 fn00443194(word32 ebx, word32 ebp, word32 esi, selector es, selector ds, selector fs, selector gs, ptr32 edxOut, ptr32 ebpOut, ptr32 esiOut)
{
	*ebpOut = ebp;
	*edxOut = edx;
	word32 eax_8 = GetModuleHandleW(0x004BFB50);
	word32 edi_10 = eax_8;
	if (eax_8 == 0x00000000)
	{
		word32 ebp_45;
		word32 esi_46;
		word32 edx_47;
		*edxOut = fn00442EE1(ebx, ebp, esi, eax_8, es, ds, fs, gs, out ebp_45, out esi_46);
		return 0x00000000;
	}
	else
	{
		Mem62[fp - 0x00000008:word32] = esi;
		Mem74[0x004EED44:word32] = GetProcAddress(eax_8, 0x004BFB8C);
		Mem81[0x004EED48:word32] = GetProcAddress(eax_8, 0x004BFB80);
		Mem88[0x004EED4C:word32] = GetProcAddress(eax_8, 0x004BFB74);
		word32 eax_89 = GetProcAddress(eax_8, 0x004BFB6C);
		Mem94[0x004EED50:word32] = eax_89;
		word32 esp_119 = fp - 0x00000008;
		word32 esi_93 = TlsSetValue;
		if (Mem88[0x004EED44:word32] == 0x00000000 || (Mem94[0x004EED48:word32] == 0x00000000 || (Mem94[0x004EED4C:word32] == 0x00000000 || eax_89 == 0x00000000)))
		{
			Mem264[0x004EED48:word32] = TlsGetValue;
			Mem266[0x004EED44:word32] = 0x00442EA4;
			Mem267[0x004EED4C:word32] = esi_93;
			Mem268[0x004EED50:word32] = TlsFree;
		}
		word32 eax_116;
		word32 eax_97 = TlsAlloc();
		Mem98[0x004DEFB8:word32] = eax_97;
		if (eax_97 != 0xFFFFFFFF)
		{
			Mem145[fp - 0x0000000C:word32] = Mem98[0x004EED48:word32];
			esp_119 = fp - 0x00000010;
			esi_93();
			if (eax_97 != 0x00000000)
			{
				fn0044187E();
				word32 eax_155 = EncodePointer(Mem145[0x004EED44:word32]);
				word32 dwLoc14_158 = Mem145[0x004EED48:word32];
				Mem159[0x004EED44:word32] = eax_155;
				word32 eax_160 = EncodePointer(dwLoc14_158);
				word32 dwLoc14_163 = Mem159[0x004EED4C:word32];
				Mem164[0x004EED48:word32] = eax_160;
				word32 eax_165 = EncodePointer(dwLoc14_163);
				word32 dwLoc14_168 = Mem164[0x004EED50:word32];
				Mem169[0x004EED4C:word32] = eax_165;
				Mem172[0x004EED50:word32] = EncodePointer(dwLoc14_168);
				word32 esi_154 = EncodePointer;
				esp_119 = fp - 0x00000010;
				if (fn00446287() != 0x00000000)
				{
					edi_10 = DecodePointer;
					word32 eax_203 = DecodePointer(Mem172[0x004EED44:word32]);
					esp_119 = fp - 0x00000014;
					eax_203();
					Mem205[0x004DEFB4:word32] = eax_203;
					if (eax_203 != 0xFFFFFFFF)
					{
						word32 edx_212;
						word32 esi_215;
						word32 eax_217 = fn0043D9E1(ebp, es, ds, fs, gs, out edx_212, out ebx, out ebp, out esi_215, out edi_10);
						esi_154 = eax_217;
						esp_119 = fp - 0x00000014;
						if (eax_217 != 0x00000000)
						{
							Mem227[fp - 0x00000018:word32] = eax_217;
							Mem229[fp - 0x0000001C:word32] = Mem227[0x004DEFB4:word32];
							Mem231[fp - 0x00000020:word32] = Mem229[0x004EED4C:word32];
							word32 eax_232 = DecodePointer(Mem231[fp - 0x00000020:PVOID]);
							esp_119 = fp - 0x0000001C;
							eax_232();
							if (eax_232 != 0x00000000)
							{
								Mem238[fp - 0x00000020:word32] = 0x00000000;
								Mem240[fp - 0x00000024:word32] = eax_217;
								word32 ebx_241;
								word32 ebp_242;
								word32 esi_243;
								word32 edi_244;
								word32 edx_245;
								*edxOut = fn00442F1E(ebx, eax_217, edi_10, es, ds, fs, gs, out ebx_241, out ebp_242, out esi_243, out edi_244);
								word32 eax_250 = GetCurrentThreadId();
								Mem252[esi_243 + 0x00000004:word32] = Mem240[esi_243 + 0x00000004:word32] | 0xFFFFFFFF;
								Mem254[esi_243 + 0x00000000:word32] = eax_250;
								esp_119 = fp - 0x0000001C;
								eax_116 = 0x00000001;
							}
							else
							{
l00443305:
								word32 ebp_195;
								word32 esi_196;
								word32 edx_197;
								*edxOut = fn00442EE1(ebx, ebp, esi_154, edi_10, es, ds, fs, gs, out ebp_195, out esi_196);
l0044330A:
								eax_116 = 0x00000000;
							}
						}
						else
							goto l00443305;
					}
					else
						goto l00443305;
				}
				else
					goto l00443305;
			}
			else
				goto l0044330A;
		}
		else
			goto l0044330A;
		word32 esi_120;
		*esiOut = Mem98[esp_119 + 0x00000000:word32];
		return eax_116;
	}
}

word32 fn0044330F(word32 ecx, word32 ebp, word32 esi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, ptr32 ebxOut, ptr32 esiOut)
{
	word32 ebp_154 = fp - 0x00000004;
	word32 edi_114 = dwArg04;
	if (dwArg08 != 0x00000000)
		Mem456[dwArg08 + 0x00000000:word32] = dwArg04;
	word32 eax_229;
	if (dwArg04 == 0x00000000 || dwArg0C != 0x00000000 && (dwArg0C < 0x00000002 || dwArg0C > 0x00000024))
	{
		word32 edx_70;
		word32 ebx_71;
		word32 ebp_72;
		word32 esi_73;
		word32 edi_74;
		Mem76[fn0043D0A3(fp - 0x00000004, esi, es, ds, fs, gs, out edx_70, out ebx_71, out ebp_72, out esi_73, out edi_74):word32] = 0x00000016;
		word32 edx_77;
		word32 ebx_78;
		word32 ebp_79;
		fn004417A9(es, ds, fs, gs, out edx_77, out ebx_78, out ebp_79);
		eax_229 = 0x00000000;
	}
	else
	{
		do
		{
			word32 esi_115 = (word32) Mem0[edi_114 + 0x00000000:word16];
			Mem118[fp - 0x0000001C:word32] = 0x00000008;
			word16 si_116 = (word16) esi_115;
			edi_114 = edi_114 + 0x00000002;
			word32 eax_125 = fn00444E6C(ecx, (word16) esi_115, wLoc1C);
			ecx = 0x00000008;
			word32 esp_132 = fp - 0x00000018;
		} while (eax_125 != 0x00000000);
		word32 esi_140;
		if (si_116 == 0x002D)
		{
l0044337E:
			esi_140 = (word32) Mem118[edi_114 + 0x00000000:word16];
			si_116 = (word16) esi_140;
			edi_114 = edi_114 + 0x00000002;
		}
		else
		{
			esi_140 = esi_115;
			if (si_116 == 0x002B)
				goto l0044337E;
		}
		if (dwArg0C == 0x00000000)
		{
			Mem414[fp - 0x0000001C:word32] = esi_140;
			eax_125 = fn0044934F(eax_125, esi_115, wLoc1C, out ebp_154);
			esp_132 = fp - 0x00000018;
			if (eax_125 != 0x00000000)
				Mem425[ebp_154 + 0x00000010:word32] = 0x0000000A;
			else
			{
				eax_125 = (word32) Mem414[edi_114 + 0x00000000:word16];
				if (eax_125 != 0x00000078 && eax_125 != 0x00000058)
					Mem437[ebp_154 + 0x00000010:word32] = 0x00000008;
				else
				{
					Mem434[ebp_154 + 0x00000010:word32] = 0x00000010;
l004433B7:
					if (Mem118[ebp_154 + 0x00000010:word32] == 0x00000010)
					{
						word32 esp_388 = esp_132 - 0x00000004;
						Mem389[esp_388 + 0x00000000:word32] = esi_140;
						eax_125 = fn0044934F(eax_125, ebp, wArg00, out ebp_154);
						esp_132 = esp_388 + 0x00000004;
						if (eax_125 == 0x00000000)
						{
							eax_125 = (word32) Mem389[edi_114 + 0x00000000:word16];
							if (eax_125 == 0x00000078 || eax_125 == 0x00000058)
							{
								esi_140 = (word32) Mem389[edi_114 + 0x00000002:word16];
								si_116 = (word16) esi_140;
								edi_114 = edi_114 + 0x00000004;
							}
						}
					}
				}
			}
		}
		else
			goto l004433B7;
		word32 eax_156 = eax_125 | 0xFFFFFFFF;
		word32 edx_159 = SEQ(0x00000000, eax_156) % Mem118[ebp_154 + 0x00000010:word32];
		word32 eax_161 = SEQ(edx_159, eax_156) /u Mem118[ebp_154 + 0x00000010:word32];
		Mem166[ebp_154 - 0x00000008:word32] = edx_159;
		eax_172 = eax_161;
		while (true)
		{
			word32 eax_172;
			word32 esp_177 = esp_132 - 0x00000004;
			Mem178[esp_177 + 0x00000000:word32] = esi_140;
			word32 ebp_180;
			eax_172 = fn0044934F(eax_172, ebp, wArg00, out ebp_180);
			esp_132 = esp_177 + 0x00000004;
			if (eax_172 == 0xFFFFFFFF)
			{
				Mem343[esp_177 + 0x00000000:word32] = 0x00000041;
				word16 ax_346 = (word16) Mem343[esp_177 + 0x00000000:word32];
				esp_132 = esp_177 + 0x00000004;
				if (ax_346 >u si_116 || si_116 >u 0x005A)
				{
					ax_346 = (word16) (esi_140 - 0x00000061);
					if (ax_346 >u 0x0019)
						;
				}
l0044340C:
				word32 eax_354 = (word32) si_116;
				if (ax_346 <=u 0x0019)
					eax_354 = eax_354 - 0x00000020;
				eax_172 = eax_354 + 0xFFFFFFC9;
				goto l0044341E;
			}
l0044341E:
			if (eax_172 >=u Mem178[ebp_180 + 0x00000010:word32])
			{
l0044343D:
				word32 edi_195 = edi_114 - 0x00000002;
				if ((al_201 & 0x08) == 0x00)
				{
					if (Mem178[ebp_180 + 0x0000000C:word32] != 0x00000000)
						edi_202 = Mem178[ebp_180 + 0x00000008:word32];
					Mem244[ebp_180 - 0x00000004:word32] = Mem178[ebp_180 - 0x00000004:word32] & 0x00000000;
				}
				else if ((al_201 & 0x04) != 0x00 || (al_201 & 0x01) == 0x00 && ((eax_198 & 0x00000002) != 0x00000000 && Mem178[ebp_180 - 0x00000004:word32] >u 0x80000000 || (eax_198 & 0x00000002) == 0x00000000 && Mem178[ebp_180 - 0x00000004:word32] >u 0x7FFFFFFF))
				{
					word32 edx_259;
					word32 ebx_260;
					word32 esi_262;
					Mem268[fn0043D0A3(ebp_180, 0x7FFFFFFF, es, ds, fs, gs, out edx_259, out ebx_260, out ebp_180, out esi_262, out edi_202):word32] = 0x00000022;
					if ((Mem178[ebp_180 + 0x00000014:byte] & 0x01) != 0x00)
						Mem270[ebp_180 - 0x00000004:word32] = Mem268[ebp_180 - 0x00000004:word32] | 0xFFFFFFFF;
					else
					{
						word32 esp_275 = esp_132 - 0x00000004;
						Mem276[esp_275 + 0x00000000:word32] = 0x00000000;
						Mem283[ebp_180 - 0x00000004:word32] = DPB(Mem276[esp_275 + 0x00000000:word32], (Mem268[ebp_180 + 0x00000014:byte] & 0x02) != 0x00, 0, 8) + esi_262;
						esp_132 = esp_275 + 0x00000004;
					}
				}
				word32 eax_212 = Mem178[ebp_180 + 0x0000000C:word32];
				word32 esi_216;
				*esiOut = Mem178[esp_132 + 0x00000000:word32];
				word32 ebx_219;
				*ebxOut = Mem178[esp_132 + 0x00000004:word32];
				if (eax_212 != 0x00000000)
					Mem237[eax_212 + 0x00000000:word32] = edi_202;
				if ((Mem178[ebp_180 + 0x00000014:byte] & 0x02) != 0x00)
					Mem234[ebp_180 - 0x00000004:word32] = -Mem178[ebp_180 - 0x00000004:word32];
				eax_229 = Mem178[ebp_180 - 0x00000004:word32];
				goto l004434CE;
			}
			Mem312[ebp_180 + 0x00000014:word32] = Mem178[ebp_180 + 0x00000014:word32] | 0x00000008;
			if (Mem312[ebp_180 - 0x00000004:word32] >=u eax_161 && (Mem312[ebp_180 - 0x00000004:word32] != eax_161 || eax_172 >u Mem312[ebp_180 - 0x00000008:word32]))
			{
				Mem336[ebp_180 + 0x00000014:word32] = Mem312[ebp_180 + 0x00000014:word32] | 0x00000004;
				if (Mem336[ebp_180 + 0x0000000C:word32] == 0x00000000)
					goto l0044343D;
			}
			Mem333[ebp_180 - 0x00000004:word32] = Mem312[ebp_180 - 0x00000004:word32] *s Mem312[ebp_180 + 0x00000010:word32] + eax_172;
l00443462:
			esi_140 = (word32) Mem312[edi_114 + 0x00000000:word16];
			si_116 = (word16) esi_140;
			edi_114 = edi_114 + 0x00000002;
		}
	}
l004434CE:
	return eax_229;
}

word32 fn004434D1(word32 ecx, word32 esi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg08, word32 dwArg0C, ptr32 ebxOut, ptr32 esiOut)
{
	word32 ebx_25;
	word32 esi_26;
	return fn0044330F(ecx, fp - 0x00000004, esi, es, ds, fs, gs, dwArg04, dwArg08, dwArg0C, 0x00000000, out ebx_25, out esi_26);
}

void fn004436B0()
{
	Mem6[0x004EED54:word32] = EncodePointer(0x0044362C);
	return;
}

void fn00443911(word32 dwArg04)
{
	Mem10[0x004EED58:word32] = dwArg04;
	return;
}

word32 fn00443ABA(word32 ebx, word32 esi, selector es, selector ds, selector fs, selector gs, ptr32 edxOut, ptr32 ebpOut, ptr32 esiOut)
{
	*ebpOut = ebp;
	*edxOut = edx;
	word32 esp_35 = fp - 0x00000008;
	word32 edi_122 = 0x00000000;
	if (Mem0[0x004F35F0:word32] == 0x00000000)
	{
		word32 edx_118;
		word32 ebx_119;
		word32 ebp_120;
		word32 esi_121;
		eax = fn004448D3(ebx, esi, 0x00000000, es, ds, fs, gs, out edx_118, out ebx_119, out ebp_120, out esi_121, out edi_122);
	}
	word32 esi_107 = Mem0[0x004F35F8:word32];
	if (esi_107 == 0x00000000)
	{
		esi_107 = 0x004CB965;
		goto l00443ADC;
	}
l00443ADC:
	while (true)
	{
		byte al_40 = Mem0[esi_107 + 0x00000000:byte];
		word32 eax_106 = DPB(eax, al_40, 0, 8);
		if (al_40 <=u 0x20)
		{
			if (al_40 == 0x00)
			{
l00443B14:
				word32 esp_89 = esp_35 + 0x00000004;
				word32 esi_90 = Mem0[esp_89 + 0x00000000:word32];
			}
			if (edi_122 == 0x00000000)
				;
		}
l00443AEA:
		if (al_40 == 0x22)
			edi_122 = (word32) (edi_122 == 0x00000000);
		word32 esp_51 = esp_35 - 0x00000004;
		Mem52[esp_51 + 0x00000000:word32] = (word32) al_40;
		word32 edx_58;
		byte bl_60;
		word32 esi_59;
		eax = fn0044A491(es, ds, fs, gs, dwArg00, out edx_58, out esi_59, out bl_60);
		esp_35 = esp_51 + 0x00000004;
		if (eax != 0x00000000)
			esi_59 = esi_59 + 0x00000001;
		esi_107 = esi_59 + 0x00000001;
	}
}

word32 fn00443B19(word32 eax, word32 ebx, word32 ebp, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs, ptr32 ebxOut, ptr32 ebpOut)
{
	*ebpOut = ebp;
	*ebxOut = ebx;
	if (Mem0[0x004F35F0:word32] == 0x00000000)
	{
		word32 edx_263;
		word32 ebx_264;
		eax = fn004448D3(ebx, esi, edi, es, ds, fs, gs, out edx_263, out ebx_264, out ebp, out esi, out edi);
	}
	word32 eax_131;
	Mem20[fp - 0x00000004:word32] = esi;
	word32 esi_21 = Mem20[0x004EE390:word32];
	Mem23[fp - 0x00000008:word32] = edi;
	word32 esp_22 = fp - 0x00000008;
	word32 edi_24 = 0x00000000;
	if (esi_21 == 0x00000000)
	{
l00443B35:
		eax_131 = eax | 0xFFFFFFFF;
l00443BCE:
		return eax_131;
	}
	else
	{
		byte al_80 = Mem23[esi_21 + 0x00000000:byte];
		word32 eax_81 = DPB(eax, al_80, 0, 8);
		while (al_80 != 0x00)
		{
			if (al_80 != 0x3D)
				edi_24 = edi_24 + 0x00000001;
			word32 esp_253 = esp_22 - 0x00000004;
			Mem254[esp_253 + 0x00000000:word32] = esi_21;
			word32 edx_255;
			eax = fn0043B940(eax_81, dwArg00, out edx_255);
			esp_22 = esp_253 + 0x00000004;
			esi_21 = esi_21 + 0x00000001 + eax;
			al_80 = Mem23[esi_21 + 0x00000000:byte];
			eax_81 = DPB(eax, al_80, 0, 8);
		}
		word32 esp_85 = esp_22 - 0x00000004;
		Mem86[esp_85 + 0x00000000:word32] = 0x00000004;
		Mem90[esp_85 - 0x00000004:word32] = edi_24 + 0x00000001;
		word32 edx_95;
		word32 ebx_96;
		word32 esi_98;
		word32 edi_99;
		word32 ebp_114;
		eax = fn0043D9E1(ebp, es, ds, fs, gs, out edx_95, out ebx_96, out ebp_114, out esi_98, out edi_99);
		Mem107[0x004EE6E8:word32] = eax;
		word32 edi_102 = eax;
		if (eax != 0x00000000)
		{
			word32 esi_111 = Mem107[0x004EE390:word32];
			Mem113[esp_85 + 0x00000000:word32] = ebx_96;
			word32 esp_112 = esp_85;
			word32 esp_137;
			while (Mem113[esi_111 + 0x00000000:byte] != 0x00)
			{
				word32 esp_159 = esp_112 - 0x00000004;
				Mem160[esp_159 + 0x00000000:word32] = esi_111;
				word32 edx_161;
				eax = fn0043B940(eax, dwArg00, out edx_161);
				esp_112 = esp_159 + 0x00000004;
				word32 ebx_168 = eax + 0x00000001;
				if (Mem160[esi_111 + 0x00000000:byte] != 0x3D)
				{
					Mem184[esp_159 + 0x00000000:word32] = 0x00000001;
					Mem186[esp_159 - 0x00000004:word32] = eax + 0x00000001;
					word32 edx_187;
					word32 ebx_188;
					word32 edi_191;
					word32 eax_192 = fn0043D9E1(ebp_114, es, ds, fs, gs, out edx_187, out ebx_188, out ebp_114, out esi_111, out edi_191);
					Mem198[edi_191 + 0x00000000:word32] = eax_192;
					if (eax_192 == 0x00000000)
					{
						Mem238[esp_159 + 0x00000000:word32] = Mem198[0x004EE6E8:word32];
						word32 edx_239;
						word32 ebx_240;
						word32 eax_241 = fn00439682(ebp_114, esi_111, es, ds, fs, gs, dwArg00, out edx_239, out ebx_240);
						Mem243[0x004EE6E8:word32] = Mem238[0x004EE6E8:word32] & 0x00000000;
						esp_137 = esp_159;
						eax_131 = eax_241 | 0xFFFFFFFF;
						goto l00443BCC;
					}
					Mem203[esp_159 + 0x00000000:word32] = esi_111;
					Mem205[esp_159 - 0x00000004:word32] = ebx_188;
					Mem207[esp_159 - 0x00000008:word32] = eax_192;
					word32 edx_210;
					eax = fn00441D77(esi_111, es, ds, fs, gs, dwArg00, dwArg04, dwArg08, out edx_210, out ebx_168);
					esp_112 = esp_159 + 0x00000004;
					if (eax != 0x00000000)
					{
						Mem224[esp_159 + 0x00000000:word32] = 0x00000000;
						Mem226[esp_159 - 0x00000004:word32] = 0x00000000;
						Mem228[esp_159 - 0x00000008:word32] = 0x00000000;
						Mem230[esp_159 - 0x0000000C:word32] = 0x00000000;
						Mem232[esp_159 - 0x00000010:word32] = 0x00000000;
						word32 ebx_233;
						word32 edx_234 = fn00441757(ebp_114, es, ds, fs, gs, out ebx_233);
						int3();
						return fn00443BF5(edx_234, ebp_114, edi_191, es, ds, fs, gs, dwArg00, dwArg04, dwArg08);
					}
					edi_102 = edi_191 + 0x00000004;
					goto l00443BA4;
				}
l00443BA4:
				esi_111 = esi_111 + ebx_168;
			}
			esp_137 = esp_112 - 0x00000004;
			Mem143[esp_137 + 0x00000000:word32] = Mem113[0x004EE390:word32];
			word32 edx_145;
			word32 ebx_146;
			fn00439682(ebp_114, esi_111, es, ds, fs, gs, dwArg00, out edx_145, out ebx_146);
			Mem149[0x004EE390:word32] = Mem143[0x004EE390:word32] & 0x00000000;
			Mem152[edi_102 + 0x00000000:word32] = Mem149[edi_102 + 0x00000000:word32] & 0x00000000;
			Mem154[0x004F35E4:word32] = 0x00000001;
			eax_131 = 0x00000000;
l00443BCC:
			word32 ebx_140;
			*ebxOut = Mem113[esp_137 + 0x00000004:word32];
			goto l00443BCE;
		}
		else
			goto l00443B35;
	}
fn00443B19_exit:
}

word32 fn00443BF5(word32 edx, word32 ebp, word32 edi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	Mem21[edi + 0x00000000:word32] = 0x00000000;
	Mem26[dwArg0C + 0x00000000:word32] = 0x00000001;
	word32 ecx_12 = dwArg0C;
	word32 esp_124 = fp - 0x00000010;
	word32 esi_101 = edx;
	word32 edx_127 = dwArg08;
	if (dwArg04 != 0x00000000)
		Mem409[dwArg04 + 0x00000000:word32] = dwArg08;
	do
	{
		byte bl_314;
		if (Mem26[esi_101 + 0x00000000:byte] == 0x22)
		{
			Mem352[fp - 0x00000008:word32] = (word32) (Mem26[fp - 0x00000008:word32] == 0x00000000);
			bl_314 = 0x22;
			esi_101 = esi_101 + 0x00000001;
			goto l00443C71;
		}
		Mem354[edi + 0x00000000:word32] = Mem26[edi + 0x00000000:word32] + 0x00000001;
		if (edx_127 != 0x00000000)
		{
			Mem401[edx_127 + 0x00000000:byte] = Mem354[esi_101 + 0x00000000:byte];
			Mem404[fp + 0x00000008:word32] = edx_127 + 0x00000001;
		}
		word32 esp_362 = esp_124 - 0x00000004;
		Mem363[esp_362 + 0x00000000:word32] = (word32) Mem354[esi_101 + 0x00000000:byte];
		esp_124 = esp_362 + 0x00000004;
		word32 edx_366;
		if (fn0044A491(es, ds, fs, gs, dwArg00, out edx_366, out esi_101, out bl_314) != 0x00000000)
		{
			Mem387[edi + 0x00000000:word32] = Mem363[edi + 0x00000000:word32] + 0x00000001;
			if (Mem387[fp + 0x00000008:word32] != 0x00000000)
			{
				word32 ecx_394 = Mem387[fp + 0x00000008:word32];
				byte al_395 = Mem387[esi_101 + 0x00000000:byte];
				Mem397[fp + 0x00000008:word32] = Mem387[fp + 0x00000008:word32] + 0x00000001;
				Mem399[ecx_394 + 0x00000000:byte] = al_395;
			}
			esi_101 = esi_101 + 0x00000001;
		}
		edx_127 = Mem363[fp + 0x00000008:word32];
		ecx_12 = Mem363[fp + 0x0000000C:word32];
		if (bl_314 == 0x00)
		{
			esi_101 = esi_101 - 0x00000001;
			goto l00443C89;
		}
l00443C71:
		if (Mem26[fp - 0x00000008:word32] != 0x00000000)
			continue;
		if (bl_314 == 0x20)
			break;
	} while (bl_314 != 0x09);
	if (edx_127 != 0x00000000)
	{
		Mem337[edx_127 - 0x00000001:byte] = 0x00;
		Mem338[edx_127 - 0x00000001:byte] = 0x00;
	}
l00443C89:
	Mem63[fp - 0x00000008:word32] = Mem26[fp - 0x00000008:word32] & 0x00000000;
	while (Mem63[esi_101 + 0x00000000:byte] != 0x00)
	{
		byte al_103 = Mem63[esi_101 + 0x00000000:byte];
		while (al_103 == 0x20 || al_103 == 0x09)
		{
			esi_101 = esi_101 + 0x00000001;
			al_103 = Mem63[esi_101 + 0x00000000:byte];
		}
		if (Mem63[esi_101 + 0x00000000:byte] == 0x00)
			break;
		if (Mem63[fp + 0x00000004:word32] != 0x00000000)
		{
			word32 eax_307 = Mem63[fp + 0x00000004:word32];
			Mem309[fp + 0x00000004:word32] = Mem63[fp + 0x00000004:word32] + 0x00000004;
			Mem311[eax_307 + 0x00000000:word32] = edx_127;
		}
		Mem120[ecx_12 + 0x00000000:word32] = Mem63[ecx_12 + 0x00000000:word32] + 0x00000001;
		while (true)
		{
			word32 ebx_130 = 0x00000001;
			word32 ecx_132 = 0x00000000;
			byte cl_133 = 0x00;
			while (Mem120[esi_101 + 0x00000000:byte] == 0x5C)
			{
				ecx_132 = ecx_132 + 0x00000001;
				esi_101 = esi_101 + 0x00000001;
				cl_133 = (byte) ecx_132;
			}
			if (Mem120[esi_101 + 0x00000000:byte] == 0x22)
			{
				if ((cl_133 & 0x01) == 0x00)
					if (Mem120[fp - 0x00000008:word32] != 0x00000000)
					{
						word32 eax_298 = esi_101 + 0x00000001;
						if (Mem120[eax_298 + 0x00000000:byte] == 0x22)
							esi_101 = eax_298;
						else
						{
l00443CEA:
							Mem297[fp - 0x00000008:word32] = (word32) (Mem120[fp - 0x00000008:word32] == 0x00000000);
							ebx_130 = 0x00000000;
						}
					}
					else
						goto l00443CEA;
				ecx_132 = ecx_132 >>u 0x00000001;
			}
			if (ecx_132 != 0x00000000)
			{
				do
				{
					ecx_132 = ecx_132 - 0x00000001;
					if (edx_127 != 0x00000000)
					{
						Mem273[edx_127 + 0x00000000:byte] = 0x5C;
						edx_127 = edx_127 + 0x00000001;
					}
					Mem268[edi + 0x00000000:word32] = Mem120[edi + 0x00000000:word32] + 0x00000001;
				} while (ecx_132 != 0x00000000);
				Mem272[fp + 0x00000008:word32] = edx_127;
			}
			byte al_158 = Mem120[esi_101 + 0x00000000:byte];
			if (al_158 == 0x00 || Mem120[fp - 0x00000008:word32] == 0x00000000 && (al_158 == 0x20 || al_158 == 0x09))
			{
				if (edx_127 != 0x00000000)
				{
					Mem173[edx_127 + 0x00000000:byte] = 0x00;
					edx_127 = edx_127 + 0x00000001;
					Mem176[fp + 0x00000008:word32] = edx_127;
				}
				Mem169[edi + 0x00000000:word32] = Mem120[edi + 0x00000000:word32] + 0x00000001;
				ecx_12 = Mem169[fp + 0x0000000C:word32];
			}
			if (ebx_130 != 0x00000000)
			{
				word32 esp_195 = esp_124 - 0x00000004;
				Mem196[esp_195 + 0x00000000:word32] = (int32) al_158;
				if (edx_127 != 0x00000000)
				{
					esp_124 = esp_195 + 0x00000004;
					word32 edx_217;
					byte bl_219;
					if (fn0044A491(es, ds, fs, gs, dwArg00, out edx_217, out esi_101, out bl_219) != 0x00000000)
					{
						byte al_233 = Mem196[esi_101 + 0x00000000:byte];
						word32 ecx_234 = Mem196[fp + 0x00000008:word32];
						Mem236[fp + 0x00000008:word32] = Mem196[fp + 0x00000008:word32] + 0x00000001;
						Mem237[ecx_234 + 0x00000000:byte] = al_233;
						Mem240[edi + 0x00000000:word32] = Mem237[edi + 0x00000000:word32] + 0x00000001;
						esi_101 = esi_101 + 0x00000001;
					}
					word32 ecx_227 = Mem196[fp + 0x00000008:word32];
					byte al_228 = Mem196[esi_101 + 0x00000000:byte];
					Mem230[fp + 0x00000008:word32] = Mem196[fp + 0x00000008:word32] + 0x00000001;
					Mem232[ecx_227 + 0x00000000:byte] = al_228;
				}
				else
				{
					esp_124 = esp_195 + 0x00000004;
					word32 edx_242;
					byte bl_244;
					if (fn0044A491(es, ds, fs, gs, dwArg00, out edx_242, out esi_101, out bl_244) != 0x00000000)
					{
						Mem253[edi + 0x00000000:word32] = Mem196[edi + 0x00000000:word32] + 0x00000001;
						esi_101 = esi_101 + 0x00000001;
					}
				}
				Mem209[edi + 0x00000000:word32] = Mem196[edi + 0x00000000:word32] + 0x00000001;
				edx_127 = Mem209[fp + 0x00000008:word32];
			}
			esi_101 = esi_101 + 0x00000001;
		}
	}
	word32 eax_80 = Mem63[fp + 0x00000004:word32];
	if (eax_80 != 0x00000000)
		Mem97[eax_80 + 0x00000000:word32] = Mem63[eax_80 + 0x00000000:word32] & 0x00000000;
	Mem91[ecx_12 + 0x00000000:word32] = Mem63[ecx_12 + 0x00000000:word32] + 0x00000001;
	return eax_80;
}

word32 fn00443D8F(word32 ebp, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs)
{
	word32 ebp_143 = fp - 0x00000004;
	word32 ebx_12 = 0x00000000;
	if (Mem0[0x004F35F0:word32] == 0x00000000)
	{
		word32 edx_141;
		word32 esi_144;
		word32 edi_145;
		fn004448D3(0x00000000, esi, edi, es, ds, fs, gs, out edx_141, out ebx_12, out ebp_143, out esi_144, out edi_145);
	}
	Mem28[fp - 0x00000020:word32] = 0x00000104;
	Mem31[fp - 0x00000024:word32] = 0x004EED60;
	Mem33[fp - 0x00000028:word32] = ebx_12;
	Mem34[0x004EEE64:byte] = 0x00;
	GetModuleFileNameA(Mem34[fp - 0x00000028:HMODULE], Mem34[fp - 36:LPSTR], Mem34[fp - 32:DWORD]);
	word32 eax_37 = Mem34[0x004F35F8:word32];
	Mem38[0x004EE6F8:word32] = 0x004EED60;
	if (eax_37 != ebx_12)
	{
		Mem138[ebp_143 - 0x00000004:word32] = eax_37;
		if (Mem138[eax_37 + 0x00000000:byte] == 0x00)
		{
l00443DD7:
			Mem137[ebp_143 - 0x00000004:word32] = 0x004EED60;
		}
	}
	else
		goto l00443DD7;
	word32 eax_132;
	word32 edx_42 = Mem38[ebp_143 - 0x00000004:word32];
	Mem45[fp - 0x00000020:word32] = ebp_143 - 0x00000008;
	Mem47[fp - 0x00000024:word32] = ebx_12;
	Mem49[fp - 0x00000028:word32] = ebx_12;
	fn00443BF5(edx_42, ebp_143, ebp_143 - 0x0000000C, es, ds, fs, gs, dwArg00, dwArg04, dwArg08);
	word32 eax_109 = Mem49[ebp_143 - 0x00000008:word32];
	if (eax_109 <u 0x3FFFFFFF)
	{
		word32 ecx_94 = Mem49[ebp_143 - 0x0000000C:word32];
		if (ecx_94 <u 0xFFFFFFFF)
		{
			eax_109 = (eax_109 << 0x00000002) + ecx_94;
			if (eax_109 >=u ecx_94)
			{
				Mem103[fp - 0x00000020:word32] = eax_109;
				word32 edx_104;
				word32 ebx_105;
				word32 ebp_106;
				word32 esi_107;
				word32 edi_108;
				eax_109 = fn0043D99C(ebp_143, es, ds, fs, gs, out edx_104, out ebx_105, out ebp_106, out esi_107, out edi_108);
				if (eax_109 != ebx_105)
				{
					word32 edx_115 = Mem103[ebp_106 - 0x00000004:word32];
					Mem118[fp - 0x00000020:word32] = ebp_106 - 0x00000008;
					Mem122[fp - 0x00000024:word32] = edi_108 + eax_109;
					Mem124[fp - 0x00000028:word32] = eax_109;
					fn00443BF5(edx_115, ebp_106, ebp_106 - 0x0000000C, es, ds, fs, gs, dwArg00, dwArg04, dwArg08);
					Mem130[0x004EE6DC:word32] = Mem124[ebp_106 - 0x00000008:word32] - 0x00000001;
					Mem131[0x004EE6E0:word32] = eax_109;
					eax_132 = 0x00000000;
				}
				else
				{
l00443E42:
					eax_132 = eax_109 | 0xFFFFFFFF;
				}
			}
			else
				goto l00443E42;
		}
		else
			goto l00443E42;
	}
	else
		goto l00443E42;
	return eax_132;
}

word32 fn00443E4A(word32 ebp, selector es, selector ds, selector fs, selector gs)
{
	word32 eax_100;
	word32 eax_15 = GetEnvironmentStringsW();
	word32 ebx_115 = eax_15;
	if (eax_15 == 0x00000000)
		eax_100 = 0x00000000;
	else
	{
		word32 eax_181;
		eax_181 = eax_15;
		eax_181 = eax_15;
		if (Mem0[eax_15 + 0x00000000:word16] != 0x0000)
			do
			{
				eax_181 = eax_181 + 0x00000002;
				if (Mem0[eax_181 + 0x00000000:word16] != 0x0000)
					continue;
				eax_181 = eax_181 + 0x00000002;
			} while (Mem0[eax_181 + 0x00000002:word16] != 0x0000);
		word32 eax_91 = WideCharToMultiByte(0x00000000, 0x00000000, eax_15, (eax_181 - eax_15 >> 0x00000001) + 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
		word32 esp_117 = fp - 0x0000001C;
		if (eax_91 != 0x00000000)
		{
			Mem126[fp - 0x00000020:word32] = eax_91;
			word32 edx_131;
			word32 ebp_133;
			word32 esi_134;
			word32 edi_135;
			word32 eax_136 = fn0043D99C(fp - 0x00000004, es, ds, fs, gs, out edx_131, out ebx_115, out ebp_133, out esi_134, out edi_135);
			Mem139[ebp_133 - 0x00000004:word32] = eax_136;
			esp_117 = fp - 0x0000001C;
			if (eax_136 != esi_134)
			{
				Mem143[fp - 0x00000020:word32] = esi_134;
				Mem145[fp - 0x00000024:word32] = esi_134;
				Mem147[fp - 0x00000028:word32] = Mem145[ebp_133 - 0x00000008:word32];
				Mem149[fp - 0x0000002C:word32] = eax_136;
				Mem151[fp - 0x00000030:word32] = Mem149[ebp_133 - 0x0000000C:word32];
				Mem153[fp - 0x00000034:word32] = ebx_115;
				Mem155[fp - 0x00000038:word32] = esi_134;
				Mem157[fp - 0x0000003C:word32] = esi_134;
				word32 esp_159 = fp - 0x0000001C;
				if (WideCharToMultiByte(Mem157[fp - 0x0000003C:UINT], Mem157[fp - 56:DWORD], Mem157[fp - 52:LPCWSTR], Mem157[fp - 48:int32], Mem157[fp - 44:LPSTR], Mem157[fp - 40:int32], Mem157[fp - 36:LPCSTR], Mem157[fp - 32:LPBOOL]) == 0x00000000)
				{
					Mem173[fp - 0x00000020:word32] = Mem157[ebp_133 - 0x00000004:word32];
					word32 edx_175;
					fn00439682(ebp_133, esi_134, es, ds, fs, gs, dwArg00, out edx_175, out ebx_115);
					Mem180[ebp_133 - 0x00000004:word32] = esi_134;
					esp_159 = fp - 0x0000001C;
				}
				word32 esp_167 = esp_159 - 0x00000004;
				Mem168[esp_167 + 0x00000000:word32] = ebx_115;
				FreeEnvironmentStringsW(Mem168[esp_167 + 0x00000000:LPWCH]);
				eax_100 = Mem168[ebp_133 - 0x00000004:word32];
			}
			else
			{
l00443ED3:
				word32 esp_118 = esp_117 - 0x00000004;
				Mem119[esp_118 + 0x00000000:word32] = ebx_115;
				FreeEnvironmentStringsW(Mem119[esp_118 + 0x00000000:LPWCH]);
				eax_100 = 0x00000000;
			}
		}
		else
			goto l00443ED3;
	}
	return eax_100;
}

word32 fn00443EE1(selector es, selector ds, selector fs, selector gs)
{
	word32 eax_119;
	GetStartupInfoW(fp - 0x00000050);
	word32 edx_29;
	word32 ebx_30;
	word32 esi_32;
	word32 edi_33;
	word32 ebp_279;
	word32 eax_34 = fn0043D9E1(fp - 0x00000004, es, ds, fs, gs, out edx_29, out ebx_30, out ebp_279, out esi_32, out edi_33);
	if (eax_34 == 0x00000000)
		eax_119 = eax_34 | 0xFFFFFFFF;
	else
	{
		Mem71[0x004F34E0:word32] = eax_34;
		Mem72[0x004F34C8:word32] = esi_32;
		if (eax_34 <u eax_34 + 0x00000800)
		{
			word32 eax_427 = eax_34 + 0x00000005;
			do
			{
				Mem432[eax_427 - 0x00000005:word32] = Mem72[eax_427 - 0x00000005:word32] | 0xFFFFFFFF;
				Mem434[eax_427 - 0x00000001:word16] = 0x0A00;
				Mem435[eax_427 + 0x00000003:word32] = 0x00000000;
				Mem436[eax_427 + 0x0000001F:word16] = 0x0A00;
				Mem437[eax_427 + 0x00000021:byte] = 0x0A;
				Mem438[eax_427 + 0x00000033:word32] = 0x00000000;
				Mem439[eax_427 + 0x0000002F:byte] = 0x00;
				eax_427 = eax_427 + 0x00000040;
			} while (eax_427 - 0x00000005 <u Mem439[0x004F34E0:word32] + 0x00000800);
		}
		word32 eax_115;
		Mem83[fp - 0x00000058:word32] = ebx_30;
		Mem85[fp - 0x0000005C:word32] = edi_33;
		word32 esp_135 = fp - 0x0000005C;
		if (Mem85[ebp_279 - 0x0000001A:word16] != 0x0000)
		{
			word32 eax_255 = Mem85[ebp_279 - 0x00000018:word32];
			if (eax_255 != 0x00000000)
			{
				word32 ebx_259 = Mem85[eax_255 + 0x00000000:word32];
				Mem261[ebp_279 - 0x00000004:word32] = eax_255 + 0x00000004;
				Mem264[ebp_279 - 0x00000008:word32] = eax_255 + 0x00000004 + ebx_259;
				if (ebx_259 >= 0x00000800)
					ebx_259 = 0x00000800;
				if (Mem264[0x004F34C8:word32] < ebx_259)
					do
					{
						word32 esp_366 = esp_135 - 0x00000004;
						Mem367[esp_366 + 0x00000000:word32] = 0x00000040;
						Mem369[esp_366 - 0x00000004:word32] = 0x00000020;
						word32 edx_370;
						word32 esi_373;
						word32 edi_374;
						word32 eax_375 = fn0043D9E1(ebp_279, es, ds, fs, gs, out edx_370, out ebx_259, out ebp_279, out esi_373, out edi_374);
						esp_135 = esp_366 + 0x00000004;
						if (eax_375 == 0x00000000)
						{
							ebx_259 = Mem369[0x004F34C8:word32];
							goto l00443FFC;
						}
						Mem385[0x004F34C8:word32] = Mem369[0x004F34C8:word32] + 0x00000020;
						Mem387[edi_374 + 0x00000000:word32] = eax_375;
						if (eax_375 <u eax_375 + 0x00000800)
						{
							word32 eax_399 = eax_375 + 0x00000005;
							do
							{
								Mem404[eax_399 - 0x00000005:word32] = Mem387[eax_399 - 0x00000005:word32] | 0xFFFFFFFF;
								Mem407[eax_399 + 0x00000003:word32] = Mem404[eax_399 + 0x00000003:word32] & 0x00000000;
								Mem410[eax_399 + 0x0000001F:byte] = Mem407[eax_399 + 0x0000001F:byte] & 0x80;
								Mem413[eax_399 + 0x00000033:word32] = Mem410[eax_399 + 0x00000033:word32] & 0x00000000;
								Mem415[eax_399 - 0x00000001:word16] = 0x0A00;
								Mem416[eax_399 + 0x00000020:word16] = 0x0A0A;
								Mem417[eax_399 + 0x0000002F:byte] = 0x00;
								eax_399 = eax_399 + 0x00000040;
							} while (eax_399 - 0x00000005 <u Mem417[edi_374 + 0x00000000:word32] + esi_373);
						}
					} while (Mem387[0x004F34C8:word32] < ebx_259);
l00443FFC:
				word32 edi_281 = 0x00000000;
				if (ebx_259 > 0x00000000)
				{
l00444002:
					do
					{
						word32 eax_294 = Mem264[Mem264[ebp_279 - 0x00000008:word32]:word32];
						if (eax_294 != 0xFFFFFFFF && eax_294 != 0xFFFFFFFE)
						{
							byte cl_318 = Mem264[Mem264[ebp_279 - 0x00000004:word32]:byte];
							if ((cl_318 & 0x01) != 0x00)
							{
								if ((cl_318 & 0x08) == 0x00)
								{
									word32 esp_354 = esp_135 - 0x00000004;
									Mem355[esp_354 + 0x00000000:word32] = eax_294;
									esp_135 = esp_354 + 0x00000004;
									if (GetFileType(Mem355[esp_354 + 0x00000000:HANDLE]) != 0x00000000)
										goto l0044402B;
								}
l0044402B:
								word32 esi_333 = ((edi_281 & 0x0000001F) << 0x00000006) + 0x004F34E0[(edi_281 >> 0x00000005) * 0x00000004];
								Mem336[esi_333 + 0x00000000:word32] = Mem264[Mem264[ebp_279 - 0x00000008:word32]:word32];
								Mem339[esi_333 + 0x00000004:byte] = Mem336[Mem336[ebp_279 - 0x00000004:word32]:byte];
								word32 esp_340 = esp_135 - 0x00000004;
								Mem341[esp_340 + 0x00000000:word32] = 0x00000FA0;
								Mem344[esp_340 - 0x00000004:word32] = esi_333 + 0x0000000C;
								eax_115 = InitializeCriticalSectionAndSpinCount(Mem344[esp_340 - 0x00000004:LPCRITICAL_SECTION], Mem344[esp_340 + 0x00000000:DWORD]);
								esp_135 = esp_340 + 0x00000004;
								if (eax_115 == 0x00000000)
									goto l00444121;
								Mem352[esi_333 + 0x00000008:word32] = Mem344[esi_333 + 0x00000008:word32] + 0x00000001;
								goto l00444068;
							}
						}
l00444068:
						Mem309[ebp_279 - 0x00000008:word32] = Mem264[ebp_279 - 0x00000008:word32] + 0x00000004;
						Mem312[ebp_279 - 0x00000004:word32] = Mem309[ebp_279 - 0x00000004:word32] + 0x00000001;
						edi_281 = edi_281 + 0x00000001;
					} while (edi_281 < ebx_259);
l00444074:
					word32 ebx_137 = 0x00000000;
					do
					{
						word32 esi_148 = (ebx_137 << 0x00000006) + Mem85[0x004F34E0:word32];
						word32 eax_149 = Mem85[esi_148 + 0x00000000:word32];
						if (eax_149 != 0xFFFFFFFF && eax_149 != 0xFFFFFFFE)
						{
							Mem252[esi_148 + 0x00000004:byte] = Mem85[esi_148 + 0x00000004:byte] | 0x80;
							goto l00444104;
						}
						word32 eax_176;
						Mem172[esi_148 + 0x00000004:byte] = 0x81;
						if (ebx_137 == 0x00000000)
						{
							word32 esp_237 = esp_135 - 0x00000004;
							Mem238[esp_237 + 0x00000000:word32] = 0xFFFFFFF6;
							eax_176 = Mem238[esp_237 + 0x00000000:word32];
							esp_135 = esp_237 + 0x00000004;
						}
						else
							eax_176 = 0x00000000 - (-(ebx_137 - 0x00000001) == 0x00000000) + 0xFFFFFFF5;
						word32 esp_180 = esp_135 - 0x00000004;
						Mem181[esp_180 + 0x00000000:word32] = eax_176;
						word32 eax_182 = GetStdHandle(Mem181[esp_180 + 0x00000000:DWORD]);
						esp_135 = esp_180 + 0x00000004;
						if (eax_182 != 0xFFFFFFFF && eax_182 != 0x00000000)
						{
							Mem200[esp_180 + 0x00000000:word32] = eax_182;
							word32 eax_201 = GetFileType(Mem200[esp_180 + 0x00000000:HANDLE]);
							esp_135 = esp_180 + 0x00000004;
							if (eax_201 != 0x00000000)
							{
								Mem209[esi_148 + 0x00000000:word32] = eax_182;
								if ((eax_201 & 0x000000FF) == 0x00000002)
									Mem228[esi_148 + 0x00000004:byte] = Mem209[esi_148 + 0x00000004:byte] | 0x40;
								else if ((eax_201 & 0x000000FF) == 0x00000003)
									Mem234[esi_148 + 0x00000004:byte] = Mem209[esi_148 + 0x00000004:byte] | 0x08;
								Mem214[esp_180 + 0x00000000:word32] = 0x00000FA0;
								Mem217[esp_180 - 0x00000004:word32] = esi_148 + 0x0000000C;
								eax_115 = InitializeCriticalSectionAndSpinCount(Mem217[esp_180 - 0x00000004:LPCRITICAL_SECTION], Mem217[esp_180 + 0x00000000:DWORD]);
								esp_135 = esp_180 + 0x00000004;
								if (eax_115 != 0x00000000)
								{
									Mem225[esi_148 + 0x00000008:word32] = Mem217[esi_148 + 0x00000008:word32] + 0x00000001;
									goto l00444104;
								}
								else
									eax_119 = eax_115 | 0xFFFFFFFF;
							}
						}
l004440FA:
						Mem192[esi_148 + 0x00000004:byte] = Mem181[esi_148 + 0x00000004:byte] | 0x40;
						Mem195[esi_148 + 0x00000000:word32] = 0xFFFFFFFE;
l00444104:
						ebx_137 = ebx_137 + 0x00000001;
					} while (ebx_137 < 0x00000003);
					word32 esp_163 = esp_135 - 0x00000004;
					Mem164[esp_163 + 0x00000000:word32] = Mem85[0x004F34C8:word32];
					SetHandleCount(Mem164[esp_163 + 0x00000000:UINT]);
					eax_119 = 0x00000000;
				}
				else
					goto l00444074;
			}
			else
				goto l00444074;
		}
		else
			goto l00444074;
l0044411C:
	}
	return eax_119;
}

word32 fn00444126(word32 dwArg00, word32 dwArg04)
{
	word32 edi_11 = 0x004D4138;
	if (false)
		do
		{
			word32 eax_36 = Mem0[edi_11 + 0x00000000:word32];
			if (eax_36 != 0x00000000)
				eax_36();
			edi_11 = edi_11 + 0x00000004;
		} while (edi_11 <u 0x004D4138);
}

void fn00444172()
{
	word32 eax_10 = Mem0[0x004DEBE0:word32];
	if (eax_10 != 0xBB40E64E && (eax_10 & 0xFFFF0000) != 0x00000000)
		Mem96[0x004DEBE4:word32] = ~eax_10;
	else
	{
		GetSystemTimeAsFileTime(fp - 0x0000000C);
		word32 esi_59 = dwLoc08 & 0x00000000 ^ dwLoc0C & 0x00000000 ^ GetCurrentProcessId() ^ GetCurrentThreadId() ^ GetTickCount();
		QueryPerformanceCounter(fp - 0x00000014);
		word32 esi_69 = esi_59 ^ (dwLoc10 ^ dwLoc14);
		if (esi_69 == 0xBB40E64E)
			esi_69 = 0xBB40E64F;
		else if ((esi_69 & 0xFFFF0000) == 0x00000000)
			esi_69 = esi_69 | (esi_69 | 0x00004711) << 0x00000010;
		Mem77[0x004DEBE0:word32] = esi_69;
		Mem79[0x004DEBE4:word32] = ~esi_69;
	}
	return;
}

word32 fn0044420D(word32 eax)
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

word32 fn0044423C(word32 eax)
{
	word32 edi_23;
	word32 edx_22;
	fn004405E0(dwLoc18, eax + 0x0000001C, 0x00000000, 0x00000101, out edx_22, out edi_23);
	Mem28[eax + 0x00000004:word32] = edi_23;
	Mem29[eax + 0x00000008:word32] = edi_23;
	Mem30[eax + 0x0000000C:word32] = edi_23;
	Mem34[eax + 0x00000010:word32] = 0x00000000;
	Mem36[eax + 0x00000014:word32] = 0x00000000;
	Mem38[eax + 0x00000018:word32] = 0x00000000;
	word32 eax_41 = eax + 0x0000001C;
	word32 ecx_43 = 0x004DF010 - eax;
	word32 edi_45 = 0x00000101;
	do
	{
		byte dl_49 = Mem38[ecx_43 + eax_41:byte];
		Mem51[eax_41 + 0x00000000:byte] = dl_49;
		edx_22 = DPB(edx_22, dl_49, 0, 8);
		eax_41 = eax_41 + 0x00000001;
		edi_45 = edi_45 - 0x00000001;
	} while (edi_45 != 0x00000000);
	word32 eax_57 = eax + 0x0000011D;
	word32 esi_59 = 0x00000100;
	do
	{
		byte dl_63 = Mem51[eax_57 + ecx_43:byte];
		Mem65[eax_57 + 0x00000000:byte] = dl_63;
		edx_22 = DPB(edx_22, dl_63, 0, 8);
		eax_57 = eax_57 + 0x00000001;
		esi_59 = esi_59 - 0x00000001;
	} while (esi_59 != 0x00000000);
	return edx_22;
}

word32 fn004442A0(word32 ebp, word32 esi, selector es, selector ds, selector fs, selector gs)
{
	word32 edx_158;
	word32 eax_161;
	word32 esp_160 = fp - 0x00000528;
	word32 edi_211 = 0x00000100;
	if (GetCPInfo(Mem0[esi + 0x00000004:word32], fp + 0xFFFFFAE4) != 0x00000000)
	{
		word32 eax_60 = 0x00000000;
		byte al_61 = 0x00;
		do
		{
			Mem66[fp + 0xFFFFFEF8 + eax_60:byte] = al_61;
			eax_60 = eax_60 + 0x00000001;
			al_61 = (byte) eax_60;
		} while (eax_60 <u 0x00000100);
		byte al_210 = bLoc0516;
		if (bLoc0516 != 0x00)
		{
			word32 ebx_204 = fp + 0xFFFFFAEB + 0x00000001;
			do
			{
				word32 ecx_216 = (word32) al_210;
				word32 eax_218 = (word32) Mem66[ebx_204 + 0x00000000:byte];
				if (ecx_216 <=u eax_218)
				{
					word32 esp_238 = esp_160 - 0x00000004;
					Mem239[esp_238 + 0x00000000:word32] = eax_218 - ecx_216 + 0x00000001;
					Mem242[esp_238 - 0x00000004:word32] = 0x00000020;
					Mem244[esp_238 - 0x00000008:word32] = fp + 0xFFFFFEF8 + ecx_216;
					word32 edx_247;
					fn004405E0(ebp, dwArg00, dwArg04, dwArg08, out edx_247, out edi_211);
					esp_160 = esp_238 + 0x00000004;
				}
				al_210 = Mem66[ebx_204 + 0x00000000:byte];
				ebx_204 = ebx_204 + 0x00000002;
			} while (al_210 != 0x00);
		}
		word32 esp_87 = esp_160 - 0x00000004;
		Mem88[esp_87 + 0x00000000:word32] = 0x00000000;
		Mem90[esp_87 - 0x00000004:word32] = Mem88[esi + 0x0000000C:word32];
		Mem93[esp_87 - 0x00000008:word32] = Mem90[esi + 0x00000004:word32];
		Mem95[esp_87 - 0x0000000C:word32] = fp + 0xFFFFFAF8;
		Mem97[esp_87 - 0x00000010:word32] = edi_211;
		Mem100[esp_87 - 0x00000014:word32] = fp + 0xFFFFFEF8;
		Mem102[esp_87 - 0x00000018:word32] = 0x00000001;
		Mem104[esp_87 - 0x0000001C:word32] = 0x00000000;
		word32 esi_106 = fn00446D06(fp - 0x00000004, es, ds, fs, gs, dwArg00);
		Mem112[esp_87 - 0x00000020:word32] = 0x00000000;
		Mem114[esp_87 - 0x00000024:word32] = Mem112[esi_106 + 0x00000004:word32];
		Mem117[esp_87 - 0x00000028:word32] = edi_211;
		Mem119[esp_87 - 0x0000002C:word32] = fp + 0xFFFFFDF8;
		Mem121[esp_87 - 0x00000030:word32] = edi_211;
		Mem124[esp_87 - 0x00000034:word32] = fp + 0xFFFFFEF8;
		Mem126[esp_87 - 0x00000038:word32] = edi_211;
		Mem128[esp_87 - 0x0000003C:word32] = Mem126[esi_106 + 0x0000000C:word32];
		Mem130[esp_87 - 0x00000040:word32] = 0x00000000;
		word32 ebx_131;
		word32 esi_132;
		fn0043D731(fp - 0x00000004, es, ds, fs, gs, dwArg00, out ebx_131, out esi_132);
		Mem137[esp_87 + 0x00000000:word32] = ebx_131;
		Mem139[esp_87 - 0x00000004:word32] = Mem137[esi_132 + 0x00000004:word32];
		Mem142[esp_87 - 0x00000008:word32] = edi_211;
		Mem144[esp_87 - 0x0000000C:word32] = fp + 0xFFFFFCF8;
		Mem146[esp_87 - 0x00000010:word32] = edi_211;
		Mem149[esp_87 - 0x00000014:word32] = fp + 0xFFFFFEF8;
		Mem151[esp_87 - 0x00000018:word32] = 0x00000200;
		Mem153[esp_87 - 0x0000001C:word32] = Mem151[esi_132 + 0x0000000C:word32];
		Mem155[esp_87 - 0x00000020:word32] = ebx_131;
		word32 ebx_156;
		edx_158 = fn0043D731(fp - 0x00000004, es, ds, fs, gs, dwArg00, out ebx_156, out esi);
		esp_160 = esp_87 + 0x00000004;
		eax_161 = 0x00000000;
		do
		{
			byte cl_183;
			byte cl_169 = (byte) (word32) (fp + 0xFFFFFAF8)[eax_161 * 0x0002];
			if ((cl_169 & 0x01) != 0x00)
			{
				Mem189[esi + 0x0000001D + eax_161:byte] = Mem155[esi + 0x0000001D + eax_161:byte] | 0x10;
				cl_183 = Mem189[fp + 0xFFFFFDF8 + eax_161:byte];
l004443B9:
				Mem187[esi + 0x0000011D + eax_161:byte] = cl_183;
			}
			else if ((cl_169 & 0x02) != 0x00)
			{
				Mem198[esi + 0x0000001D + eax_161:byte] = Mem155[esi + 0x0000001D + eax_161:byte] | 0x20;
				cl_183 = Mem198[fp + 0xFFFFFCF8 + eax_161:byte];
				goto l004443B9;
			}
			else
				Mem203[esi + 0x0000011D + eax_161:byte] = 0x00;
			eax_161 = eax_161 + 0x00000001;
		} while (eax_161 <u edi_211);
	}
	else
	{
		word32 ecx_254 = 0x00000020;
		word32 v16_256 = 0xFFFFFF9F - (esi + 0x0000011D);
		do
		{
			byte dl_283;
			eax_161 = esi + 0x0000011D + ecx_254;
			edx_158 = v16_256 + eax_161;
			if (edx_158 <=u 0x00000007)
			{
				Mem289[esi + 0x0000001D + ecx_254:byte] = Mem0[esi + 0x0000001D + ecx_254:byte] | 0x10;
				edx_158 = ecx_254 + 0x00000000;
				dl_283 = (byte) edx_158;
l00444416:
				Mem287[eax_161 + 0x00000000:byte] = dl_283;
			}
			else if (edx_158 <=u 0x00000019)
			{
				Mem297[esi + 0x0000001D + ecx_254:byte] = Mem0[esi + 0x0000001D + ecx_254:byte] | 0x20;
				edx_158 = ecx_254 - 0x00000020;
				dl_283 = (byte) edx_158;
				goto l00444416;
			}
			else
				Mem302[eax_161 + 0x00000000:byte] = 0x00;
			ecx_254 = ecx_254 + 0x00000001;
		} while (ecx_254 <u 0x000000E0);
	}
	word32 ecx_55;
	fn004394A0(eax_161, Mem0[fp - 0x00000008:word32] ^ fp - 0x00000004, edx_158, Mem0[esp_160 + 0x00000004:word32], fp - 0x00000004, esi, Mem0[esp_160 + 0x00000000:word32], es, ds, fs, gs, ebp, out ecx_55);
	return edx_158;
}

word32 fn00444430(word32 ebx, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs, ptr32 edxOut, ptr32 ebxOut, ptr32 ebpOut, ptr32 esiOut, ptr32 ediOut)
{
	word32 esi_102;
	word32 ebx_15;
	word32 esi_17;
	word32 edx_18;
	word32 ebp_16;
	*edxOut = fn0044304B(fn00441E10(ebx, esi, edi, fs, dwLoc0C, 0x004D5710, 0x0000000C), esi, es, ds, fs, gs, out ebx_15, out ebp_16, out esi_17);
	word32 esp_107 = fp - 0x00000008;
	if ((Mem0[eax + 0x00000070:word32] & Mem0[0x004DED5C:word32]) != 0x00000000 && Mem0[eax + 0x0000006C:word32] != 0x00000000)
		esi_102 = Mem0[eax + 0x00000068:word32];
	else
	{
		Mem66[fp - 0x0000000C:word32] = 0x0000000D;
		word32 ebx_67;
		fn00446401(ebx_15, eax, es, ds, fs, gs, dwArg00, out ebx_67);
		*edxOut = edx_68;
		Mem72[ebp_16 - 0x00000004:word32] = Mem66[ebp_16 - 0x00000004:word32] & 0x00000000;
		esi_102 = Mem72[eax + 0x00000068:word32];
		Mem75[ebp_16 - 0x0000001C:word32] = esi_102;
		esp_107 = fp - 0x00000008;
		if (esi_102 != Mem75[0x004DF438:word32])
		{
			if (esi_102 != 0x00000000)
			{
				Mem109[fp - 0x0000000C:word32] = esi_102;
				esp_107 = fp - 0x00000008;
				if (InterlockedDecrement(Mem109[fp - 0x0000000C:(ptr LONG)]) == 0x00000000 && esi_102 != 0x004DF010)
				{
					Mem118[fp - 0x0000000C:word32] = esi_102;
					word32 edx_119;
					word32 ebx_120;
					fn00439682(ebp_16, esi_102, es, ds, fs, gs, dwArg00, out edx_119, out ebx_120);
					esp_107 = fp - 0x00000008;
				}
			}
			Mem101[eax + 0x00000068:word32] = Mem75[0x004DF438:word32];
			esi_102 = Mem101[0x004DF438:word32];
			Mem103[ebp_16 - 0x0000001C:word32] = esi_102;
			word32 esp_104 = esp_107 - 0x00000004;
			Mem105[esp_104 + 0x00000000:word32] = esi_102;
			InterlockedIncrement(Mem105[esp_104 + 0x00000000:(ptr LONG)]);
			esp_107 = esp_104 + 0x00000004;
		}
		Mem88[ebp_16 - 0x00000004:word32] = 0xFFFFFFFE;
		fn004444CB();
	}
	if (esi_102 == 0x00000000)
	{
		Mem56[esp_107 - 0x00000004:word32] = 0x00000020;
		word32 edx_57;
		word32 ebx_58;
		fn00441AF6(ebp_16, esi_102, es, ds, fs, gs, out edx_57, out ebx_58, out ebp_16, out esi_102);
	}
	word32 ebp_46;
	word32 esi_47;
	word32 edi_48;
	word32 ebx_49;
	*ebxOut = fn00441E55(ebp_16, fs, 0x0000000C, dwArg00, dwArg04, dwArg08, dwArg0C, out ebp_46, out esi_47, out edi_48);
	return esi_102;
}

void fn004444CB()
{
	fn00446328(0x0000000D);
	return;
}

word32 fn004444D4(selector es, selector ds, selector fs, selector gs, ptr32 edxOut)
{
	word32 eax_30;
	word32 ebx_23;
	word32 edx_24;
	*edxOut = fn0043A7F1(fp - 0x00000014, es, ds, fs, gs, 0x00000000, out ebx_23);
	Mem26[0x004EEE68:word32] = ebx_23;
	if (esi == 0xFFFFFFFE)
	{
		Mem49[0x004EEE68:word32] = 0x00000001;
		eax_30 = GetOEMCP();
l00444503:
		if (Mem26[fp - 0x00000008:byte] != 0x00)
		{
			word32 ecx_44 = Mem26[fp - 0x0000000C:word32];
			Mem46[ecx_44 + 0x00000070:word32] = Mem26[ecx_44 + 0x00000070:word32] & 0xFFFFFFFD;
		}
	}
	else if (esi == 0xFFFFFFFD)
	{
		Mem53[0x004EEE68:word32] = 0x00000001;
		eax_30 = GetACP();
		goto l00444503;
	}
	else if (esi == 0xFFFFFFFC)
	{
		eax_30 = Mem26[Mem26[fp - 0x00000014:word32] + 0x00000004:word32];
		Mem59[0x004EEE68:word32] = 0x00000001;
		goto l00444503;
	}
	else
	{
		if (Mem26[fp - 0x00000008:byte] != 0x00)
		{
			word32 eax_65 = Mem26[fp - 0x0000000C:word32];
			Mem67[eax_65 + 0x00000070:word32] = Mem26[eax_65 + 0x00000070:word32] & 0xFFFFFFFD;
		}
		eax_30 = esi;
	}
	return eax_30;
}

word32 fn00444550(word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg08, ptr32 edxOut)
{
	word32 eax_140;
	word32 edx_126;
	word32 eax_32 = fn004444D4(es, ds, fs, gs, out edx_126);
	Mem37[fp + 0x00000004:word32] = eax_32;
	word32 esp_122 = fp - 0x00000030;
	word16 di_34 = (word16) eax_32;
	if (eax_32 == 0x00000000)
	{
l0044457B:
		*edxOut = fn0044423C(dwArg08);
l00444582:
		eax_140 = 0x00000000;
	}
	else
	{
		Mem97[fp - 0x00000020:word32] = 0x00000000;
		word32 eax_104 = 0x00000000;
		do
		{
			if (Mem97[eax_104 + 0x004DF440:word32] == eax_32)
			{
				Mem283[fp - 0x00000034:word32] = 0x00000101;
				Mem286[fp - 0x00000038:word32] = 0x00000000;
				Mem288[fp - 0x0000003C:word32] = dwArg08 + 0x0000001C;
				word32 edx_289;
				word32 edi_290;
				fn004405E0(ebp, dwArg00, dwArg04, dwArg08, out edx_289, out edi_290);
				word32 ecx_292 = Mem288[fp - 0x00000020:word32];
				Mem297[fp - 0x00000024:word32] = 0x00000000;
				word32 esi_298 = ecx_292 *s 0x00000030 + 0x004DF450;
				Mem300[fp - 0x00000020:word32] = esi_298;
				do
				{
					if (Mem300[esi_298 + 0x00000000:byte] != 0x00)
					{
						byte al_354 = Mem300[esi_298 + 0x00000001:byte];
						if (al_354 != 0x00)
						{
							word32 edi_360 = (word32) Mem300[esi_298 + 0x00000000:byte];
							word32 eax_362 = (word32) al_354;
							while (edi_360 <=u eax_362)
							{
								Mem382[dwArg08 + 0x0000001D + edi_360:byte] = Mem300[dwArg08 + 0x0000001D + edi_360:byte] | Mem300[Mem300[fp - 0x00000024:word32] + 0x004DF43C:byte];
								eax_362 = (word32) Mem382[esi_298 + 0x00000001:byte];
								edi_360 = edi_360 + 0x00000001;
							}
							edi_290 = Mem300[fp + 0x00000004:word32];
							esi_298 = esi_298 + 0x00000002;
							goto l0044467C;
						}
					}
					word32 esi_318 = Mem300[fp - 0x00000020:word32];
					Mem320[fp - 0x00000024:word32] = Mem300[fp - 0x00000024:word32] + 0x00000001;
					Mem325[fp - 0x00000020:word32] = esi_318 + 0x00000008;
					esi_298 = esi_318 + 0x00000008;
				} while (Mem320[fp - 0x00000024:word32] <u 0x00000004);
				Mem327[dwArg08 + 0x00000004:word32] = edi_290;
				Mem328[dwArg08 + 0x00000008:word32] = 0x00000001;
				word32 eax_329 = fn0044420D(edi_290);
				Mem331[fp - 0x00000034:word32] = 0x00000006;
				Mem332[dwArg08 + 0x0000000C:word32] = eax_329;
				word32 eax_333 = dwArg08 + 0x00000010;
				word32 ecx_336 = ecx_292 *s 0x00000030 + 0x004DF444;
				word32 edx_338 = Mem332[fp - 0x00000034:word32];
				esp_122 = fp - 0x00000030;
				do
				{
					Mem344[eax_333 + 0x00000000:word16] = Mem332[ecx_336 + 0x00000000:word16];
					ecx_336 = ecx_336 + 0x00000002;
					eax_333 = eax_333 + 0x00000002;
					edx_338 = edx_338 - 0x00000001;
				} while (edx_338 != 0x00000000);
			}
			Mem128[fp - 0x00000020:word32] = Mem97[fp - 0x00000020:word32] + 0x00000001;
			eax_104 = eax_104 + 0x00000030;
		} while (eax_104 <u 0x000000F0);
		if (eax_32 != 0x0000FDE8 && eax_32 != 0x0000FDE9)
		{
			Mem149[fp - 0x00000034:word32] = (word32) di_34;
			eax_104 = IsValidCodePage(Mem149[fp - 0x00000034:UINT]);
			esp_122 = fp - 0x00000030;
			if (eax_104 != 0x00000000)
			{
				Mem159[fp - 0x00000034:word32] = fp - 0x0000001C;
				Mem161[fp - 0x00000038:word32] = eax_32;
				eax_104 = GetCPInfo(Mem161[fp - 0x00000038:UINT], Mem161[fp - 52:LPCPINFO]);
				esp_122 = fp - 0x00000030;
				if (eax_104 != 0x00000000)
				{
					Mem170[fp - 0x00000034:word32] = 0x00000101;
					Mem173[fp - 0x00000038:word32] = 0x00000000;
					Mem175[fp - 0x0000003C:word32] = dwArg08 + 0x0000001C;
					word32 edx_177;
					word32 edi_178;
					fn004405E0(ebp, dwArg00, dwArg04, dwArg08, out edx_177, out edi_178);
					Mem183[dwArg08 + 0x00000004:word32] = edi_178;
					Mem184[dwArg08 + 0x0000000C:word32] = 0x00000000;
					esp_122 = fp - 0x00000030;
					if (Mem184[fp - 0x0000001C:word32] >u 0x00000001)
					{
						if (Mem184[fp - 0x00000016:byte] != 0x00)
						{
							word32 esi_240 = fp - 0x00000015;
							do
							{
								byte cl_250 = Mem184[esi_240 + 0x00000000:byte];
								if (cl_250 == 0x00)
									break;
								word32 eax_255 = (word32) Mem184[esi_240 - 0x00000001:byte];
								word32 ecx_258 = (word32) cl_250;
								while (eax_255 <=u ecx_258)
								{
									Mem272[dwArg08 + 0x0000001D + eax_255:byte] = Mem184[dwArg08 + 0x0000001D + eax_255:byte] | 0x04;
									eax_255 = eax_255 + 0x00000001;
								}
								esi_240 = esi_240 + 0x00000002;
							} while (Mem184[esi_240 - 0x00000001:byte] != 0x00);
						}
						word32 eax_218 = dwArg08 + 0x0000001E;
						word32 ecx_221 = 0x000000FE;
						do
						{
							Mem226[eax_218 + 0x00000000:byte] = Mem184[eax_218 + 0x00000000:byte] | 0x08;
							eax_218 = eax_218 + 0x00000001;
							ecx_221 = ecx_221 - 0x00000001;
						} while (ecx_221 != 0x00000000);
						Mem238[dwArg08 + 0x0000000C:word32] = fn0044420D(Mem226[dwArg08 + 0x00000004:word32]);
						Mem239[dwArg08 + 0x00000008:word32] = 0x00000001;
					}
					else
						Mem279[dwArg08 + 0x00000008:word32] = 0x00000000;
					Mem203[dwArg08 + 0x00000010:word32] = 0x00000000;
					Mem205[dwArg08 + 0x00000014:word32] = 0x00000000;
					Mem207[dwArg08 + 0x00000018:word32] = 0x00000000;
l004446C2:
					fn004442A0(fp - 0x00000004, dwArg08, es, ds, fs, gs);
					*edxOut = fn004442A0(fp - 0x00000004, dwArg08, es, ds, fs, gs);
					goto l00444582;
				}
				else if (Mem161[0x004EEE68:word32] == 0x00000000)
				{
l00444727:
					eax_140 = eax_104 | 0xFFFFFFFF;
				}
				else
					goto l0044457B;
			}
			else
				goto l00444727;
		}
		else
			goto l00444727;
	}
	word32 esp_53 = esp_122 + 0x00000004;
	word32 ecx_61;
	return fn004394A0(eax_140, Mem37[fp - 0x00000008:word32] ^ fp - 0x00000004, edx_126, Mem37[esp_53 + 0x00000004:word32], fp - 0x00000004, Mem37[esp_53 + 0x00000000:word32], Mem37[esp_122 + 0x00000000:word32], es, ds, fs, gs, ebp, out ecx_61);
}

word32 fn00444739(word32 ebx, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs, ptr32 ebxOut, ptr32 ebpOut, ptr32 esiOut, ptr32 ediOut)
{
	word32 ebp_11 = fn00441E10(ebx, esi, edi, fs, dwLoc0C, 0x004D5730, 0x00000014);
	word32 v4_13 = Mem0[ebp_11 - 0x00000020:word32] | 0xFFFFFFFF;
	Mem14[ebp_11 - 0x00000020:word32] = v4_13;
	word32 ebx_20;
	word32 ebp_21;
	word32 esi_22;
	fn0044304B(ebp_11, esi, es, ds, fs, gs, out ebx_20, out ebp_21, out esi_22);
	Mem26[ebp_21 - 0x00000024:word32] = eax;
	word32 edx_27;
	word32 ebx_28;
	word32 esi_30;
	word32 edi_31;
	word32 ebp_242;
	fn00444430(ebx_20, esi_22, eax, es, ds, fs, gs, out edx_27, out ebx_28, out ebp_242, out esi_30, out edi_31);
	word32 ebx_33 = Mem26[edi_31 + 0x00000068:word32];
	word32 edx_110;
	word32 eax_36 = fn004444D4(es, ds, fs, gs, out edx_110);
	Mem37[ebp_242 + 0x00000008:word32] = eax_36;
	if (eax_36 != Mem37[ebx_33 + 0x00000004:word32])
	{
		Mem69[fp - 0x0000000C:word32] = 0x00000220;
		word32 ebx_71;
		word32 esi_73;
		word32 edi_74;
		word32 eax_75 = fn0043D99C(ebp_242, es, ds, fs, gs, out edx_110, out ebx_71, out ebp_242, out esi_73, out edi_74);
		word32 ebx_131 = eax_75;
		if (eax_75 != 0x00000000)
		{
			word32 ecx_85 = 0x00000088;
			word32 esi_88 = Mem69[edi_74 + 0x00000068:word32];
			word32 edi_89 = eax_75;
			while (ecx_85 != 0x00000000)
			{
				Mem96[edi_89 + 0x00000000:word32] = Mem69[esi_88 + 0x00000000:word32];
				esi_88 = esi_88 + 0x00000004;
				edi_89 = edi_89 + 0x00000004;
				ecx_85 = ecx_85 - 0x00000001;
			}
			word32 v16_102 = Mem69[eax_75 + 0x00000000:word32] & 0x00000000;
			Mem103[eax_75 + 0x00000000:word32] = v16_102;
			Mem107[fp - 0x0000000C:word32] = eax_75;
			Mem109[fp - 0x00000010:word32] = Mem107[ebp_242 + 0x00000008:word32];
			word32 eax_111 = fn00444550(ebp_242, es, ds, fs, gs, dwArg00, dwArg04, out edx_110);
			Mem116[ebp_242 - 0x00000020:word32] = eax_111;
			if (eax_111 == 0x00000000)
			{
				word32 esi_120 = Mem116[ebp_242 - 0x00000024:word32];
				Mem122[fp - 0x0000000C:word32] = Mem116[esi_120 + 0x00000068:word32];
				word32 esp_124 = fp - 0x00000008;
				if (InterlockedDecrement(Mem122[fp - 0x0000000C:(ptr LONG)]) == 0x00000000)
				{
					word32 eax_224 = Mem122[esi_120 + 0x00000068:word32];
					if (eax_224 != 0x004DF010)
					{
						Mem228[fp - 0x0000000C:word32] = eax_224;
						fn00439682(ebp_242, esi_120, es, ds, fs, gs, dwArg00, out edx_110, out ebx_131);
						esp_124 = fp - 0x00000008;
					}
				}
				Mem133[esi_120 + 0x00000068:word32] = ebx_131;
				word32 esp_134 = esp_124 - 0x00000004;
				Mem135[esp_134 + 0x00000000:word32] = ebx_131;
				InterlockedIncrement(Mem135[esp_134 + 0x00000000:(ptr LONG)]);
				word32 edi_136 = InterlockedIncrement;
				if ((Mem135[esi_120 + 0x00000070:byte] & 0x02) == 0x00 && (Mem135[0x004DED5C:byte] & 0x01) == 0x00)
				{
					Mem146[esp_134 + 0x00000000:word32] = 0x0000000D;
					word32 ebx_147;
					edx_110 = fn00446401(ebx_131, edi_136, es, ds, fs, gs, dwArg00, out ebx_147);
					word32 v17_151 = Mem146[ebp_242 - 0x00000004:word32] & 0x00000000;
					Mem152[ebp_242 - 0x00000004:word32] = v17_151;
					Mem155[0x004EEE78:word32] = Mem152[ebx_147 + 0x00000004:word32];
					Mem157[0x004EEE7C:word32] = Mem155[ebx_147 + 0x00000008:word32];
					Mem159[0x004EEE80:word32] = Mem157[ebx_147 + 0x0000000C:word32];
					word32 eax_160 = 0x00000000;
					Mem166[ebp_242 - 0x0000001C:word32] = eax_160;
					while (eax_160 < 0x00000005)
					{
						0x004EEE6C[eax_160 * 0x0002] = (ebx_147 + 0x00000010)[eax_160 * 0x0002];
						eax_160 = eax_160 + 0x00000001;
						Mem166[ebp_242 - 0x0000001C:word32] = eax_160;
					}
					word32 eax_173 = 0x00000000;
					Mem179[ebp_242 - 0x0000001C:word32] = eax_173;
					while (eax_173 < 0x00000101)
					{
						Mem183[eax_173 + 0x004DF230:byte] = Mem179[eax_173 + 0x0000001C + ebx_147:byte];
						eax_173 = eax_173 + 0x00000001;
						Mem179[ebp_242 - 0x0000001C:word32] = eax_173;
					}
					word32 eax_186 = 0x00000000;
					Mem192[ebp_242 - 0x0000001C:word32] = eax_186;
					while (eax_186 < 0x00000100)
					{
						Mem196[eax_186 + 0x004DF338:byte] = Mem192[eax_186 + 0x0000011D + ebx_147:byte];
						eax_186 = eax_186 + 0x00000001;
						Mem192[ebp_242 - 0x0000001C:word32] = eax_186;
					}
					Mem200[esp_134 + 0x00000000:word32] = Mem192[0x004DF438:word32];
					word32 eax_201 = InterlockedDecrement(Mem200[esp_134 + 0x00000000:(ptr LONG)]);
					word32 esp_202 = esp_134 + 0x00000004;
					if (eax_201 == 0x00000000)
					{
						word32 eax_214 = Mem200[0x004DF438:word32];
						if (eax_214 != 0x004DF010)
						{
							Mem218[esp_134 + 0x00000000:word32] = eax_214;
							word32 edx_219;
							fn00439682(ebp_242, esi_120, es, ds, fs, gs, dwArg00, out edx_219, out ebx_147);
							esp_202 = esp_134 + 0x00000004;
						}
					}
					Mem208[0x004DF438:word32] = ebx_147;
					word32 esp_209 = esp_202 - 0x00000004;
					Mem210[esp_209 + 0x00000000:word32] = ebx_147;
					edi_136();
					Mem213[ebp_242 - 0x00000004:word32] = 0xFFFFFFFE;
					fn0044489A();
				}
			}
			else if (eax_111 == 0xFFFFFFFF)
			{
				if (eax_75 != 0x004DF010)
				{
					Mem248[fp - 0x0000000C:word32] = eax_75;
					word32 edx_249;
					word32 ebx_250;
					fn00439682(ebp_242, esi_88, es, ds, fs, gs, dwArg00, out edx_249, out ebx_250);
				}
				word32 ebx_241;
				word32 esi_243;
				word32 edi_244;
				Mem246[fn0043D0A3(ebp_242, esi_88, es, ds, fs, gs, out edx_110, out ebx_241, out ebp_242, out esi_243, out edi_244):word32] = 0x00000016;
			}
		}
	}
	else
		Mem255[ebp_242 - 0x00000020:word32] = Mem37[ebp_242 - 0x00000020:word32] & 0x00000000;
	word32 ebp_60;
	word32 esi_61;
	word32 edi_62;
	word32 ebx_63;
	*ebxOut = fn00441E55(ebp_242, fs, 0x00000014, dwArg00, dwArg04, dwArg08, dwArg0C, out ebp_60, out esi_61, out edi_62);
	return edx_110;
}

void fn0044489A()
{
	fn00446328(0x0000000D);
	return;
}

word32 fn004448D3(word32 ebx, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs, ptr32 edxOut, ptr32 ebxOut, ptr32 ebpOut, ptr32 esiOut, ptr32 ediOut)
{
	*ebxOut = ebx;
	*ebpOut = ebp;
	*esiOut = esi;
	*ediOut = edi;
	*edxOut = edx;
	if (Mem0[0x004F35F0:word32] == 0x00000000)
	{
		word32 ebx_34;
		word32 ebp_35;
		word32 esi_36;
		word32 edi_37;
		word32 edx_38;
		*edxOut = fn00444739(ebx, esi, edi, es, ds, fs, gs, out ebx_34, out ebp_35, out esi_36, out edi_37);
		Mem41[0x004F35F0:word32] = 0x00000001;
	}
	return 0x00000000;
}

word32 fn00444E40(word32 eax)
{
	word32 eax_9 = eax + ((fp + 0x00000004) - eax & 0x0000000F);
	word32 eax_13 = eax_9 | 0x00000000 - (eax_9 <u 0x00000000);
	return fn0044A550(eax_13, dwArg00);
}

word32 fn00444E6C(word32 ecx, word16 wArg04, word16 wArg08)
{
	if (wArg04 == 0xFFFF)
		return 0x00000000;
	else
	{
		word32 eax_51;
		if (wArg04 <u 0x0100)
			eax_51 = (word32) Mem0[0x004DEBDC:word32][(word32) wArg04 * 0x0002];
		else
		{
			if (GetStringTypeW(0x00000001, fp + 0x00000004, 0x00000001, fp - 0x00000008) == 0x00000000)
				;
			eax_51 = (word32) wLoc08;
		}
		return eax_51 & (word32) wArg08;
	}
}

void fn004457DC(word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg04)
{
	if (dwArg04 != 0x00000000)
	{
		word32 edx_38;
		word32 ebx_39;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, Mem0[dwArg04 + 0x00000004:word32], out edx_38, out ebx_39);
		Mem42[fp - 0x00000010:word32] = Mem0[dwArg04 + 0x00000008:word32];
		word32 edx_44;
		word32 ebx_45;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_44, out ebx_45);
		Mem48[fp - 0x00000014:word32] = Mem42[dwArg04 + 0x0000000C:word32];
		word32 edx_49;
		word32 ebx_50;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_49, out ebx_50);
		Mem53[fp - 0x00000018:word32] = Mem48[dwArg04 + 0x00000010:word32];
		word32 edx_54;
		word32 ebx_55;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_54, out ebx_55);
		Mem58[fp - 0x0000001C:word32] = Mem53[dwArg04 + 0x00000014:word32];
		word32 edx_59;
		word32 ebx_60;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_59, out ebx_60);
		Mem63[fp - 0x00000020:word32] = Mem58[dwArg04 + 0x00000018:word32];
		word32 edx_64;
		word32 ebx_65;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_64, out ebx_65);
		Mem68[fp - 0x00000024:word32] = Mem63[dwArg04 + 0x00000000:word32];
		word32 edx_69;
		word32 ebx_70;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_69, out ebx_70);
		Mem73[fp - 0x00000028:word32] = Mem68[dwArg04 + 0x00000020:word32];
		word32 edx_74;
		word32 ebx_75;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_74, out ebx_75);
		Mem78[fp - 0x0000002C:word32] = Mem73[dwArg04 + 0x00000024:word32];
		word32 edx_79;
		word32 ebx_80;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_79, out ebx_80);
		Mem83[fp - 0x00000030:word32] = Mem78[dwArg04 + 0x00000028:word32];
		word32 edx_84;
		word32 ebx_85;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_84, out ebx_85);
		Mem88[fp - 0x00000034:word32] = Mem83[dwArg04 + 0x0000002C:word32];
		word32 edx_89;
		word32 ebx_90;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_89, out ebx_90);
		Mem93[fp - 0x00000038:word32] = Mem88[dwArg04 + 0x00000030:word32];
		word32 edx_94;
		word32 ebx_95;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_94, out ebx_95);
		Mem98[fp - 0x0000003C:word32] = Mem93[dwArg04 + 0x00000034:word32];
		word32 edx_99;
		word32 ebx_100;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_99, out ebx_100);
		Mem103[fp - 0x00000040:word32] = Mem98[dwArg04 + 0x0000001C:word32];
		word32 edx_104;
		word32 ebx_105;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_104, out ebx_105);
		Mem108[fp - 0x00000044:word32] = Mem103[dwArg04 + 0x00000038:word32];
		word32 edx_109;
		word32 ebx_110;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_109, out ebx_110);
		Mem113[fp - 0x00000048:word32] = Mem108[dwArg04 + 0x0000003C:word32];
		word32 edx_114;
		word32 ebx_115;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_114, out ebx_115);
		Mem120[fp - 0x0000000C:word32] = Mem113[dwArg04 + 0x00000040:word32];
		word32 edx_121;
		word32 ebx_122;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_121, out ebx_122);
		Mem125[fp - 0x00000010:word32] = Mem120[dwArg04 + 0x00000044:word32];
		word32 edx_126;
		word32 ebx_127;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_126, out ebx_127);
		Mem130[fp - 0x00000014:word32] = Mem125[dwArg04 + 0x00000048:word32];
		word32 edx_131;
		word32 ebx_132;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_131, out ebx_132);
		Mem135[fp - 0x00000018:word32] = Mem130[dwArg04 + 0x0000004C:word32];
		word32 edx_136;
		word32 ebx_137;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_136, out ebx_137);
		Mem140[fp - 0x0000001C:word32] = Mem135[dwArg04 + 0x00000050:word32];
		word32 edx_141;
		word32 ebx_142;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_141, out ebx_142);
		Mem145[fp - 0x00000020:word32] = Mem140[dwArg04 + 0x00000054:word32];
		word32 edx_146;
		word32 ebx_147;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_146, out ebx_147);
		Mem150[fp - 0x00000024:word32] = Mem145[dwArg04 + 0x00000058:word32];
		word32 edx_151;
		word32 ebx_152;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_151, out ebx_152);
		Mem155[fp - 0x00000028:word32] = Mem150[dwArg04 + 0x0000005C:word32];
		word32 edx_156;
		word32 ebx_157;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_156, out ebx_157);
		Mem160[fp - 0x0000002C:word32] = Mem155[dwArg04 + 0x00000060:word32];
		word32 edx_161;
		word32 ebx_162;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_161, out ebx_162);
		Mem165[fp - 0x00000030:word32] = Mem160[dwArg04 + 0x00000064:word32];
		word32 edx_166;
		word32 ebx_167;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_166, out ebx_167);
		Mem170[fp - 0x00000034:word32] = Mem165[dwArg04 + 0x00000068:word32];
		word32 edx_171;
		word32 ebx_172;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_171, out ebx_172);
		Mem175[fp - 0x00000038:word32] = Mem170[dwArg04 + 0x0000006C:word32];
		word32 edx_176;
		word32 ebx_177;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_176, out ebx_177);
		Mem180[fp - 0x0000003C:word32] = Mem175[dwArg04 + 0x00000070:word32];
		word32 edx_181;
		word32 ebx_182;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_181, out ebx_182);
		Mem185[fp - 0x00000040:word32] = Mem180[dwArg04 + 0x00000074:word32];
		word32 edx_186;
		word32 ebx_187;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_186, out ebx_187);
		Mem190[fp - 0x00000044:word32] = Mem185[dwArg04 + 0x00000078:word32];
		word32 edx_191;
		word32 ebx_192;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_191, out ebx_192);
		Mem195[fp - 0x00000048:word32] = Mem190[dwArg04 + 0x0000007C:word32];
		word32 edx_196;
		word32 ebx_197;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_196, out ebx_197);
		Mem202[fp - 0x0000000C:word32] = Mem195[dwArg04 + 0x00000080:word32];
		word32 edx_203;
		word32 ebx_204;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_203, out ebx_204);
		Mem207[fp - 0x00000010:word32] = Mem202[dwArg04 + 0x00000084:word32];
		word32 edx_208;
		word32 ebx_209;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_208, out ebx_209);
		Mem212[fp - 0x00000014:word32] = Mem207[dwArg04 + 0x00000088:word32];
		word32 edx_213;
		word32 ebx_214;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_213, out ebx_214);
		Mem217[fp - 0x00000018:word32] = Mem212[dwArg04 + 0x0000008C:word32];
		word32 edx_218;
		word32 ebx_219;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_218, out ebx_219);
		Mem222[fp - 0x0000001C:word32] = Mem217[dwArg04 + 0x00000090:word32];
		word32 edx_223;
		word32 ebx_224;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_223, out ebx_224);
		Mem227[fp - 0x00000020:word32] = Mem222[dwArg04 + 0x00000094:word32];
		word32 edx_228;
		word32 ebx_229;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_228, out ebx_229);
		Mem232[fp - 0x00000024:word32] = Mem227[dwArg04 + 0x00000098:word32];
		word32 edx_233;
		word32 ebx_234;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_233, out ebx_234);
		Mem237[fp - 0x00000028:word32] = Mem232[dwArg04 + 0x0000009C:word32];
		word32 edx_238;
		word32 ebx_239;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_238, out ebx_239);
		Mem242[fp - 0x0000002C:word32] = Mem237[dwArg04 + 0x000000A0:word32];
		word32 edx_243;
		word32 ebx_244;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_243, out ebx_244);
		Mem247[fp - 0x00000030:word32] = Mem242[dwArg04 + 0x000000A4:word32];
		word32 edx_248;
		word32 ebx_249;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_248, out ebx_249);
		Mem252[fp - 0x00000034:word32] = Mem247[dwArg04 + 0x000000A8:word32];
		word32 edx_253;
		word32 ebx_254;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_253, out ebx_254);
		Mem257[fp - 0x00000038:word32] = Mem252[dwArg04 + 0x000000BC:word32];
		word32 edx_258;
		word32 ebx_259;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_258, out ebx_259);
		Mem262[fp - 0x0000003C:word32] = Mem257[dwArg04 + 0x000000C0:word32];
		word32 edx_263;
		word32 ebx_264;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_263, out ebx_264);
		Mem267[fp - 0x00000040:word32] = Mem262[dwArg04 + 0x000000C4:word32];
		word32 edx_268;
		word32 ebx_269;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_268, out ebx_269);
		Mem272[fp - 0x00000044:word32] = Mem267[dwArg04 + 0x000000C8:word32];
		word32 edx_273;
		word32 ebx_274;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_273, out ebx_274);
		Mem277[fp - 0x00000048:word32] = Mem272[dwArg04 + 0x000000CC:word32];
		word32 edx_278;
		word32 ebx_279;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_278, out ebx_279);
		Mem284[fp - 0x0000000C:word32] = Mem277[dwArg04 + 0x000000D0:word32];
		word32 edx_285;
		word32 ebx_286;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_285, out ebx_286);
		Mem289[fp - 0x00000010:word32] = Mem284[dwArg04 + 0x000000B8:word32];
		word32 edx_290;
		word32 ebx_291;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_290, out ebx_291);
		Mem294[fp - 0x00000014:word32] = Mem289[dwArg04 + 0x000000D8:word32];
		word32 edx_295;
		word32 ebx_296;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_295, out ebx_296);
		Mem299[fp - 0x00000018:word32] = Mem294[dwArg04 + 0x000000DC:word32];
		word32 edx_300;
		word32 ebx_301;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_300, out ebx_301);
		Mem304[fp - 0x0000001C:word32] = Mem299[dwArg04 + 0x000000E0:word32];
		word32 edx_305;
		word32 ebx_306;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_305, out ebx_306);
		Mem309[fp - 0x00000020:word32] = Mem304[dwArg04 + 0x000000E4:word32];
		word32 edx_310;
		word32 ebx_311;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_310, out ebx_311);
		Mem314[fp - 0x00000024:word32] = Mem309[dwArg04 + 0x000000E8:word32];
		word32 edx_315;
		word32 ebx_316;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_315, out ebx_316);
		Mem319[fp - 0x00000028:word32] = Mem314[dwArg04 + 0x000000EC:word32];
		word32 edx_320;
		word32 ebx_321;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_320, out ebx_321);
		Mem324[fp - 0x0000002C:word32] = Mem319[dwArg04 + 0x000000D4:word32];
		word32 edx_325;
		word32 ebx_326;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_325, out ebx_326);
		Mem329[fp - 0x00000030:word32] = Mem324[dwArg04 + 0x000000F0:word32];
		word32 edx_330;
		word32 ebx_331;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_330, out ebx_331);
		Mem334[fp - 0x00000034:word32] = Mem329[dwArg04 + 0x000000F4:word32];
		word32 edx_335;
		word32 ebx_336;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_335, out ebx_336);
		Mem339[fp - 0x00000038:word32] = Mem334[dwArg04 + 0x000000F8:word32];
		word32 edx_340;
		word32 ebx_341;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_340, out ebx_341);
		Mem344[fp - 0x0000003C:word32] = Mem339[dwArg04 + 0x000000FC:word32];
		word32 edx_345;
		word32 ebx_346;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_345, out ebx_346);
		Mem349[fp - 0x00000040:word32] = Mem344[dwArg04 + 0x00000100:word32];
		word32 edx_350;
		word32 ebx_351;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_350, out ebx_351);
		Mem354[fp - 0x00000044:word32] = Mem349[dwArg04 + 0x00000104:word32];
		word32 edx_355;
		word32 ebx_356;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_355, out ebx_356);
		Mem359[fp - 0x00000048:word32] = Mem354[dwArg04 + 0x00000108:word32];
		word32 edx_360;
		word32 ebx_361;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_360, out ebx_361);
		Mem366[fp - 0x0000000C:word32] = Mem359[dwArg04 + 0x0000010C:word32];
		word32 edx_367;
		word32 ebx_368;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_367, out ebx_368);
		Mem371[fp - 0x00000010:word32] = Mem366[dwArg04 + 0x00000110:word32];
		word32 edx_372;
		word32 ebx_373;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_372, out ebx_373);
		Mem376[fp - 0x00000014:word32] = Mem371[dwArg04 + 0x00000114:word32];
		word32 edx_377;
		word32 ebx_378;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_377, out ebx_378);
		Mem381[fp - 0x00000018:word32] = Mem376[dwArg04 + 0x00000118:word32];
		word32 edx_382;
		word32 ebx_383;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_382, out ebx_383);
		Mem386[fp - 0x0000001C:word32] = Mem381[dwArg04 + 0x0000011C:word32];
		word32 edx_387;
		word32 ebx_388;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_387, out ebx_388);
		Mem391[fp - 0x00000020:word32] = Mem386[dwArg04 + 0x00000120:word32];
		word32 edx_392;
		word32 ebx_393;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_392, out ebx_393);
		Mem396[fp - 0x00000024:word32] = Mem391[dwArg04 + 0x00000124:word32];
		word32 edx_397;
		word32 ebx_398;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_397, out ebx_398);
		Mem401[fp - 0x00000028:word32] = Mem396[dwArg04 + 0x00000128:word32];
		word32 edx_402;
		word32 ebx_403;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_402, out ebx_403);
		Mem406[fp - 0x0000002C:word32] = Mem401[dwArg04 + 0x0000012C:word32];
		word32 edx_407;
		word32 ebx_408;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_407, out ebx_408);
		Mem411[fp - 0x00000030:word32] = Mem406[dwArg04 + 0x00000130:word32];
		word32 edx_412;
		word32 ebx_413;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_412, out ebx_413);
		Mem416[fp - 0x00000034:word32] = Mem411[dwArg04 + 0x00000134:word32];
		word32 edx_417;
		word32 ebx_418;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_417, out ebx_418);
		Mem421[fp - 0x00000038:word32] = Mem416[dwArg04 + 0x00000138:word32];
		word32 edx_422;
		word32 ebx_423;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_422, out ebx_423);
		Mem426[fp - 0x0000003C:word32] = Mem421[dwArg04 + 0x0000013C:word32];
		word32 edx_427;
		word32 ebx_428;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_427, out ebx_428);
		Mem431[fp - 0x00000040:word32] = Mem426[dwArg04 + 0x00000140:word32];
		word32 edx_432;
		word32 ebx_433;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_432, out ebx_433);
		Mem436[fp - 0x00000044:word32] = Mem431[dwArg04 + 0x00000144:word32];
		word32 edx_437;
		word32 ebx_438;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_437, out ebx_438);
		Mem441[fp - 0x00000048:word32] = Mem436[dwArg04 + 0x00000148:word32];
		word32 edx_442;
		word32 ebx_443;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_442, out ebx_443);
		Mem448[fp - 0x0000000C:word32] = Mem441[dwArg04 + 0x0000014C:word32];
		word32 edx_449;
		word32 ebx_450;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_449, out ebx_450);
		Mem453[fp - 0x00000010:word32] = Mem448[dwArg04 + 0x00000150:word32];
		word32 edx_454;
		word32 ebx_455;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_454, out ebx_455);
		Mem458[fp - 0x00000014:word32] = Mem453[dwArg04 + 0x00000154:word32];
		word32 edx_459;
		word32 ebx_460;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_459, out ebx_460);
		Mem463[fp - 0x00000018:word32] = Mem458[dwArg04 + 0x00000158:word32];
		word32 edx_464;
		word32 ebx_465;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_464, out ebx_465);
		Mem468[fp - 0x0000001C:word32] = Mem463[dwArg04 + 0x0000015C:word32];
		word32 edx_469;
		word32 ebx_470;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_469, out ebx_470);
		Mem473[fp - 0x00000020:word32] = Mem468[dwArg04 + 0x00000160:word32];
		word32 edx_474;
		word32 ebx_475;
		fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_474, out ebx_475);
	}
	return;
}

void fn00445BD0(word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg04)
{
	word32 esp_100 = fp - 0x00000008;
	if (dwArg04 != 0x00000000)
	{
		word32 eax_35 = Mem0[dwArg04 + 0x00000000:word32];
		if (eax_35 != Mem0[0x004DE9F8:word32])
		{
			word32 edx_103;
			word32 ebx_104;
			fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, eax_35, out edx_103, out ebx_104);
			esp_100 = fp - 0x00000008;
		}
		word32 eax_43 = Mem0[dwArg04 + 0x00000004:word32];
		if (eax_43 != Mem0[0x004DE9FC:word32])
		{
			word32 esp_94 = esp_100 - 0x00000004;
			Mem95[esp_94 + 0x00000000:word32] = eax_43;
			word32 edx_96;
			word32 ebx_97;
			fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_96, out ebx_97);
			esp_100 = esp_94 + 0x00000004;
		}
		word32 eax_50 = Mem0[dwArg04 + 0x00000008:word32];
		if (eax_50 != Mem0[0x004DEA00:word32])
		{
			word32 esp_87 = esp_100 - 0x00000004;
			Mem88[esp_87 + 0x00000000:word32] = eax_50;
			word32 edx_89;
			word32 ebx_90;
			fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_89, out ebx_90);
			esp_100 = esp_87 + 0x00000004;
		}
		word32 eax_57 = Mem0[dwArg04 + 0x00000030:word32];
		if (eax_57 != Mem0[0x004DEA28:word32])
		{
			word32 esp_80 = esp_100 - 0x00000004;
			Mem81[esp_80 + 0x00000000:word32] = eax_57;
			word32 edx_82;
			word32 ebx_83;
			fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_82, out ebx_83);
			esp_100 = esp_80 + 0x00000004;
		}
		word32 esi_65 = Mem0[dwArg04 + 0x00000034:word32];
		if (esi_65 != Mem0[0x004DEA2C:word32])
		{
			Mem69[esp_100 - 0x00000004:word32] = esi_65;
			word32 edx_75;
			word32 ebx_76;
			fn00439682(fp - 0x00000004, esi_65, es, ds, fs, gs, dwArg00, out edx_75, out ebx_76);
		}
	}
	return;
}

word32 fn00445E29(word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg04)
{
	word32 esp_105 = fp - 0x00000008;
	if (dwArg04 != 0x00000000)
	{
		word32 eax_35 = Mem0[dwArg04 + 0x0000000C:word32];
		if (eax_35 != Mem0[0x004DEA04:word32])
		{
			word32 edx_215;
			fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, eax_35, out edx_215, out ebx);
			esp_105 = fp - 0x00000008;
		}
		word32 eax_43 = Mem0[dwArg04 + 0x00000010:word32];
		if (eax_43 != Mem0[0x004DEA08:word32])
		{
			word32 esp_206 = esp_105 - 0x00000004;
			Mem207[esp_206 + 0x00000000:word32] = eax_43;
			word32 edx_208;
			fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_208, out ebx);
			esp_105 = esp_206 + 0x00000004;
		}
		word32 eax_50 = Mem0[dwArg04 + 0x00000014:word32];
		if (eax_50 != Mem0[0x004DEA0C:word32])
		{
			word32 esp_199 = esp_105 - 0x00000004;
			Mem200[esp_199 + 0x00000000:word32] = eax_50;
			word32 edx_201;
			fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_201, out ebx);
			esp_105 = esp_199 + 0x00000004;
		}
		word32 eax_57 = Mem0[dwArg04 + 0x00000018:word32];
		if (eax_57 != Mem0[0x004DEA10:word32])
		{
			word32 esp_192 = esp_105 - 0x00000004;
			Mem193[esp_192 + 0x00000000:word32] = eax_57;
			word32 edx_194;
			fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_194, out ebx);
			esp_105 = esp_192 + 0x00000004;
		}
		word32 eax_64 = Mem0[dwArg04 + 0x0000001C:word32];
		if (eax_64 != Mem0[0x004DEA14:word32])
		{
			word32 esp_185 = esp_105 - 0x00000004;
			Mem186[esp_185 + 0x00000000:word32] = eax_64;
			word32 edx_187;
			fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_187, out ebx);
			esp_105 = esp_185 + 0x00000004;
		}
		word32 eax_71 = Mem0[dwArg04 + 0x00000020:word32];
		if (eax_71 != Mem0[0x004DEA18:word32])
		{
			word32 esp_178 = esp_105 - 0x00000004;
			Mem179[esp_178 + 0x00000000:word32] = eax_71;
			word32 edx_180;
			fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_180, out ebx);
			esp_105 = esp_178 + 0x00000004;
		}
		word32 eax_78 = Mem0[dwArg04 + 0x00000024:word32];
		if (eax_78 != Mem0[0x004DEA1C:word32])
		{
			word32 esp_171 = esp_105 - 0x00000004;
			Mem172[esp_171 + 0x00000000:word32] = eax_78;
			word32 edx_173;
			fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_173, out ebx);
			esp_105 = esp_171 + 0x00000004;
		}
		word32 eax_85 = Mem0[dwArg04 + 0x00000038:word32];
		if (eax_85 != Mem0[0x004DEA30:word32])
		{
			word32 esp_164 = esp_105 - 0x00000004;
			Mem165[esp_164 + 0x00000000:word32] = eax_85;
			word32 edx_166;
			fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_166, out ebx);
			esp_105 = esp_164 + 0x00000004;
		}
		word32 eax_92 = Mem0[dwArg04 + 0x0000003C:word32];
		if (eax_92 != Mem0[0x004DEA34:word32])
		{
			word32 esp_157 = esp_105 - 0x00000004;
			Mem158[esp_157 + 0x00000000:word32] = eax_92;
			word32 edx_159;
			fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_159, out ebx);
			esp_105 = esp_157 + 0x00000004;
		}
		word32 eax_99 = Mem0[dwArg04 + 0x00000040:word32];
		if (eax_99 != Mem0[0x004DEA38:word32])
		{
			word32 esp_150 = esp_105 - 0x00000004;
			Mem151[esp_150 + 0x00000000:word32] = eax_99;
			word32 edx_152;
			fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_152, out ebx);
			esp_105 = esp_150 + 0x00000004;
		}
		word32 eax_106 = Mem0[dwArg04 + 0x00000044:word32];
		if (eax_106 != Mem0[0x004DEA3C:word32])
		{
			word32 esp_143 = esp_105 - 0x00000004;
			Mem144[esp_143 + 0x00000000:word32] = eax_106;
			word32 edx_145;
			fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_145, out ebx);
			esp_105 = esp_143 + 0x00000004;
		}
		word32 eax_113 = Mem0[dwArg04 + 0x00000048:word32];
		if (eax_113 != Mem0[0x004DEA40:word32])
		{
			word32 esp_136 = esp_105 - 0x00000004;
			Mem137[esp_136 + 0x00000000:word32] = eax_113;
			word32 edx_138;
			fn00439682(fp - 0x00000004, dwArg04, es, ds, fs, gs, dwArg00, out edx_138, out ebx);
			esp_105 = esp_136 + 0x00000004;
		}
		word32 esi_121 = Mem0[dwArg04 + 0x0000004C:word32];
		if (esi_121 != Mem0[0x004DEA44:word32])
		{
			Mem125[esp_105 - 0x00000004:word32] = esi_121;
			word32 edx_131;
			fn00439682(fp - 0x00000004, esi_121, es, ds, fs, gs, dwArg00, out edx_131, out ebx);
		}
	}
	return ebx;
}

word32 fn00446287()
{
	word32 esi_22 = 0x00000000;
	word32 edi_12 = 0x004EEF40;
	do
	{
		word32 eax_32;
		if (0x004DF6A4[esi_22 * 0x00000008] == 0x00000001)
		{
			word32 eax_52 = esi_22 * 0x00000008 + 0x004DF6A0;
			Mem53[eax_52 + 0x00000000:word32] = edi_12;
			Mem55[fp - 0x0000000C:word32] = 0x00000FA0;
			edi_12 = edi_12 + 0x00000018;
			if (InitializeCriticalSectionAndSpinCount(Mem55[eax_52 + 0x00000000:word32], 0x00000FA0) == 0x00000000)
			{
				0x004DF6A0[esi_22 * 0x00000008] = 0x004DF6A0[esi_22 * 0x00000008] & 0x00000000;
				eax_32 = 0x00000000;
				goto l004462C2;
			}
		}
l004462B9:
		esi_22 = esi_22 + 0x00000001;
	} while (esi_22 < 0x00000024);
	eax_32 = 0x00000001;
l004462C2:
	return eax_32;
}

void fn00446328(word32 dwArg04)
{
	LeaveCriticalSection(0x004DF6A0[dwArg04 * 0x00000008]);
	return;
}

word32 fn0044633F(word32 ebx, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs, ptr32 edxOut, ptr32 ebxOut, ptr32 ebpOut, ptr32 esiOut)
{
	*edxOut = edx;
	word32 ebp_11 = fn00441E10(ebx, esi, edi, fs, dwLoc0C, 0x004D5790, 0x0000000C);
	Mem14[ebp_11 - 0x0000001C:word32] = 0x00000001;
	word32 esp_146 = fp - 0x00000008;
	word32 ebx_139 = 0x00000000;
	if (Mem14[0x004EED38:word32] == 0x00000000)
	{
		word32 ebp_132;
		word32 edx_133 = fn00441CE9(esi, es, ds, fs, gs, out ebp_132);
		Mem135[fp - 0x0000000C:word32] = 0x0000001E;
		fn00441B3A(edx_133, ebp_132, es, ds, fs, gs, dwArg00);
		Mem138[fp - 0x00000010:word32] = 0x000000FF;
		word32 esi_141;
		word32 edx_142;
		*edxOut = fn00441854(0x00000000, ebp_132, 0x00000001, es, ds, fs, gs, dwArg00, out ebx_139, out ebp_11, out esi_141);
		esp_146 = fp - 0x00000008;
	}
	word32 eax_36;
	if (0x004DF6A0[Mem14[ebp_11 + 0x00000008:word32] * 0x00000008] != ebx_139)
		eax_36 = 0x00000001;
	else
	{
		word32 esp_53 = esp_146 - 0x00000004;
		Mem54[esp_53 + 0x00000000:word32] = 0x00000018;
		word32 edx_58;
		word32 ebx_59;
		word32 esi_61;
		word32 edi_62;
		word32 eax_63 = fn0043D99C(ebp_11, es, ds, fs, gs, out edx_58, out ebx_59, out ebp_11, out esi_61, out edi_62);
		if (eax_63 == ebx_59)
		{
			word32 edx_69;
			word32 ebx_70;
			word32 esi_72;
			word32 edi_73;
			Mem75[fn0043D0A3(ebp_11, esi_61, es, ds, fs, gs, out edx_69, out ebx_70, out ebp_11, out esi_72, out edi_73):word32] = 0x0000000C;
			eax_36 = 0x00000000;
		}
		else
		{
			Mem80[esp_53 + 0x00000000:word32] = 0x0000000A;
			word32 ebx_81;
			word32 edx_82;
			*edxOut = fn00446401(ebx_59, eax_63, es, ds, fs, gs, dwArg00, out ebx_81);
			Mem85[ebp_11 - 0x00000004:word32] = ebx_81;
			if (Mem85[esi_61 + 0x00000000:word32] == ebx_81)
			{
				Mem101[esp_53 + 0x00000000:word32] = 0x00000FA0;
				Mem103[esp_53 - 0x00000004:word32] = eax_63;
				if (InitializeCriticalSectionAndSpinCount(Mem103[esp_53 - 0x00000004:LPCRITICAL_SECTION], Mem103[esp_53 + 0x00000000:DWORD]) == 0x00000000)
				{
					Mem110[esp_53 + 0x00000000:word32] = eax_63;
					word32 edx_111;
					word32 ebx_112;
					fn00439682(ebp_11, esi_61, es, ds, fs, gs, dwArg00, out edx_111, out ebx_112);
					word32 edx_116;
					word32 ebx_117;
					word32 esi_119;
					word32 edi_120;
					Mem122[fn0043D0A3(ebp_11, esi_61, es, ds, fs, gs, out edx_116, out ebx_117, out ebp_11, out esi_119, out edi_120):word32] = 0x0000000C;
					Mem123[ebp_11 - 0x0000001C:word32] = ebx_117;
				}
				else
					Mem124[esi_61 + 0x00000000:word32] = eax_63;
			}
			else
			{
				Mem126[esp_53 + 0x00000000:word32] = eax_63;
				word32 edx_127;
				word32 ebx_128;
				fn00439682(ebp_11, esi_61, es, ds, fs, gs, dwArg00, out edx_127, out ebx_128);
			}
			Mem98[ebp_11 - 0x00000004:word32] = 0xFFFFFFFE;
			fn004463F8();
			eax_36 = Mem98[ebp_11 - 0x0000001C:word32];
		}
	}
	word32 ebp_42;
	word32 esi_43;
	word32 edi_44;
	word32 ebx_45;
	*ebxOut = fn00441E55(ebp_11, fs, 0x0000000C, dwArg00, dwArg04, dwArg08, dwArg0C, out ebp_42, out esi_43, out edi_44);
	return eax_36;
}

void fn004463F8()
{
	fn00446328(0x0000000A);
	return;
}

word32 fn00446401(word32 ebx, word32 edi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 ebxOut)
{
	*ebxOut = ebx;
	word32 esp_10 = fp - 0x00000008;
	word32 esi_13 = dwArg04 * 0x00000008 + 0x004DF6A0;
	if (Mem0[esi_13 + 0x00000000:word32] == 0x00000000)
	{
		esp_10 = fp - 0x00000008;
		word32 ebx_48;
		word32 ebp_49;
		if (fn0044633F(ebx, esi_13, edi, es, ds, fs, gs, out edx, out ebx_48, out ebp_49, out esi_13) == 0x00000000)
		{
			Mem58[fp - 0x0000000C:word32] = 0x00000011;
			word32 ebx_60;
			word32 ebp_61;
			fn00441AF6(ebp_49, esi_13, es, ds, fs, gs, out edx, out ebx_60, out ebp_61, out esi_13);
			esp_10 = fp + 0xFFFFFFF4;
		}
	}
	word32 esp_33 = esp_10 - 0x00000004;
	Mem34[esp_33 + 0x00000000:word32] = Mem0[esi_13 + 0x00000000:word32];
	EnterCriticalSection(Mem34[esp_33 + 0x00000000:LPCRITICAL_SECTION]);
	return edx;
}

void fn00446C1F(word32 edx, word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg0C, word32 dwArg10, word32 dwArg18, word32 dwArg1C)
{
	word32 ebp_7 = fp - 0x00000004;
	word32 ebx_110 = 0x00000000;
	if (dwArg18 == 0x00000000)
		dwArg18 = Mem0[Mem0[dwArg04 + 0x00000000:word32] + 0x00000004:word32];
	word32 eax_153;
	word32 esi_109 = MultiByteToWideChar;
	word32 eax_53 = MultiByteToWideChar(dwArg18, (word32) (dwArg1C != 0x00000000) * 0x00000008 + 0x00000001, dwArg0C, dwArg10, 0x00000000, 0x00000000);
	word32 esp_113 = fp - 0x00000018;
	if (eax_53 == 0x00000000)
	{
l00446C71:
		eax_153 = 0x00000000;
	}
	else
	{
		if (eax_53 > 0x00000000 && eax_53 <=u 0x7FFFFFF0)
		{
			word32 eax_180;
			word32 eax_170 = eax_53 + 0x00000008 + eax_53;
			if (eax_170 <=u 0x00000400)
			{
				fn00444E40(eax_170);
				eax_180 = fp - 0x00000018;
				if (fp != 0x00000018)
				{
					Mem197[fp - 0x00000018:word32] = 0x0000CCCC;
l00446CAE:
					eax_180 = eax_180 + 0x00000008;
				}
			}
			else
			{
				Mem199[fp - 0x0000001C:word32] = eax_170;
				eax_180 = fn004395EE(fp - 0x00000004, esi_109, es, ds, fs, gs, 0x00000000, out edx, out esi_109);
				esp_113 = fp - 0x00000018;
				if (eax_180 != 0x00000000)
				{
					Mem208[eax_180 + 0x00000000:word32] = 0x0000DDDD;
					goto l00446CAE;
				}
			}
			ebx_110 = eax_180;
		}
		if (ebx_110 != 0x00000000)
		{
			word32 esp_118 = esp_113 - 0x00000004;
			Mem119[esp_118 + 0x00000000:word32] = eax_53 * 0x00000002;
			Mem121[esp_118 - 0x00000004:word32] = 0x00000000;
			Mem123[esp_118 - 0x00000008:word32] = ebx_110;
			word32 edx_127;
			word32 edi_128;
			word32 eax_129 = fn004405E0(ebp, dwArg00, dwArg04, dwArg08, out edx_127, out edi_128);
			Mem134[esp_118 + 0x00000000:word32] = edi_128;
			Mem136[esp_118 - 0x00000004:word32] = ebx_110;
			Mem138[esp_118 - 0x00000008:word32] = Mem136[fp + 0x00000010:word32];
			Mem140[esp_118 - 0x0000000C:word32] = Mem138[fp + 0x0000000C:word32];
			Mem142[esp_118 - 0x00000010:word32] = 0x00000001;
			Mem144[esp_118 - 0x00000014:word32] = Mem142[fp + 0x00000018:word32];
			word32 esp_143 = esp_118 - 0x00000014;
			esi_109();
			if (eax_129 != 0x00000000)
			{
				Mem158[esp_118 - 0x00000018:word32] = Mem144[fp + 0x00000014:word32];
				Mem160[esp_118 - 0x0000001C:word32] = eax_129;
				Mem162[esp_118 - 0x00000020:word32] = ebx_110;
				Mem164[esp_118 - 0x00000024:word32] = Mem162[fp + 0x00000008:word32];
				Mem167[fp - 0x0000000C:word32] = GetStringTypeW(Mem164[esp_118 - 0x00000024:DWORD], Mem164[esp_118 - 32:LPCWSTR], Mem164[esp_118 - 28:int32], Mem164[esp_118 - 24:LPWORD]);
				esp_143 = esp_118 - 0x00000014;
			}
			Mem150[esp_143 - 0x00000004:word32] = ebx_110;
			word32 esi_151;
			edx = fn0043A878(esi_109, es, ds, fs, gs, dwArg00, out esi_151);
			eax_153 = Mem150[fp - 0x0000000C:word32];
		}
		else
			goto l00446C71;
	}
	word32 esp_73 = ebp_7 - 0x00000014;
	word32 ecx_84;
	fn004394A0(eax_153, Mem0[ebp_7 - 0x00000004:word32] ^ ebp_7, edx, Mem0[esp_73 + 0x00000008:word32], ebp_7, Mem0[esp_73 + 0x00000004:word32], Mem0[esp_73 + 0x00000000:word32], es, ds, fs, gs, ebp, out ecx_84);
	return;
}

word32 fn00446D06(word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg04)
{
	word32 ebx_18;
	word32 edx_19 = fn0043A7F1(fp - 0x00000014, es, ds, fs, gs, dwArg04, out ebx_18);
	Mem23[fp - 0x00000018:word32] = Mem0[fp + 0x00000020:word32];
	Mem26[fp - 0x0000001C:word32] = Mem23[fp + 0x00000018:word32];
	Mem28[fp - 0x00000020:word32] = Mem26[fp + 0x00000014:word32];
	Mem30[fp - 0x00000024:word32] = Mem28[fp + 0x00000010:word32];
	Mem32[fp - 0x00000028:word32] = Mem30[fp + 0x0000000C:word32];
	Mem34[fp - 0x0000002C:word32] = Mem32[fp + 0x00000008:word32];
	Mem36[fp - 0x00000030:word32] = fp - 0x00000014;
	fn00446C1F(edx_19, fp - 0x00000004, es, ds, fs, gs, dwArg00, dwArg08, dwArg0C, dwArg14, dwArg18);
	if (Mem36[fp - 0x00000008:byte] != 0x00)
	{
		word32 ecx_54 = Mem36[fp - 0x0000000C:word32];
		Mem56[ecx_54 + 0x00000070:word32] = Mem36[ecx_54 + 0x00000070:word32] & 0xFFFFFFFD;
	}
	return esi;
}

word32 fn00446F08(word32 esi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg08, word32 dwArg0C, ptr32 edxOut, ptr32 ebxOut)
{
	*edxOut = edx;
	*ebxOut = ebx;
	if (dwArg04 != 0x00000000)
	{
		word32 edx_133 = 0xFFFFFFFFFFFFFFE0 % dwArg04;
		*edxOut = edx_133;
		if (SEQ(edx_133, 0xFFFFFFE0) /u dwArg04 <u dwArg08)
		{
			word32 edx_143;
			word32 ebx_144;
			word32 ebp_145;
			word32 esi_146;
			word32 edi_147;
			Mem149[fn0043D0A3(fp - 0x00000004, esi, es, ds, fs, gs, out edx_143, out ebx_144, out ebp_145, out esi_146, out edi_147):word32] = 0x0000000C;
			return 0x00000000;
		}
		else
		{
l00446F2F:
			Mem46[fp - 0x00000008:word32] = esi;
			word32 ecx_43 = dwArg04 *s dwArg08;
			word32 esi_125 = ecx_43;
			if (ecx_43 == 0x00000000)
			{
				esi_125 = ecx_43 + 0x00000001;
				goto l00446F3B;
			}
l00446F3B:
			do
			{
				word32 eax_103 = 0x00000000;
				if (esi_125 <=u 0xFFFFFFE0)
				{
					Mem116[fp - 0x00000010:word32] = 0x00000008;
					eax_103 = HeapAlloc(Mem116[0x004EED38:word32], 0x00000008, esi_125);
					if (eax_103 != 0x00000000)
						goto l00446F87;
				}
l00446F55:
				if (Mem46[0x004EED40:word32] == 0x00000000)
					if (dwArg0C != 0x00000000)
						Mem112[dwArg0C + 0x00000000:word32] = 0x0000000C;
			} while (fn00441D4F(esi_125) != 0x00000000);
			if (dwArg0C != 0x00000000)
				Mem107[dwArg0C + 0x00000000:word32] = 0x0000000C;
			eax_103 = 0x00000000;
l00446F87:
			return eax_103;
		}
	}
	else
		goto l00446F2F;
}

void fn00447AE5()
{
	word32 edi_12 = 0x00000000;
	do
	{
		Mem18[edi_12 + 0x004DF7C0:word32] = EncodePointer(Mem0[edi_12 + 0x004DF7C0:word32]);
		edi_12 = edi_12 + 0x00000004;
	} while (edi_12 <u 0x00000028);
	return;
}

void fn00447CA3(word32 dwArg04)
{
	Mem10[0x004EF090:word32] = dwArg04;
	Mem11[0x004EF094:word32] = dwArg04;
	Mem12[0x004EF098:word32] = dwArg04;
	Mem13[0x004EF09C:word32] = dwArg04;
	return;
}

void fn00447EA8()
{
	Mem4[0x004F34C4:word32] = Mem0[0x004F34C4:word32] & 0x00000000;
	return;
}

word32 fn00447EB0(selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg08, word32 dwArg0C, ptr32 edxOut)
{
	word32 eax_103;
	word32 esi_32;
	word32 eax_33 = fn0044BEDB(dwArg04, es, ds, fs, gs, dwArg04, out esi_32);
	word32 edi_34 = edi | 0xFFFFFFFF;
	if (eax_33 == (edi | 0xFFFFFFFF))
	{
		word32 edx_69;
		word32 ebx_70;
		word32 ebp_71;
		word32 esi_72;
		Mem75[fn0043D0A3(fp - 0x00000004, esi_32, es, ds, fs, gs, out edx_69, out ebx_70, out ebp_71, out esi_72, out edi_34):word32] = 0x00000009;
l00447EE1:
		eax_103 = edi_34;
		word32 edx_68;
		*edxOut = edi_34;
	}
	else
	{
		Mem79[fp - 0x00000018:word32] = Mem0[fp + 0x00000010:word32];
		Mem82[fp - 0x0000001C:word32] = fp - 0x00000008;
		Mem84[fp - 0x00000020:word32] = Mem82[fp - 0x0000000C:word32];
		Mem86[fp - 0x00000024:word32] = eax_33;
		word32 eax_87 = SetFilePointer(Mem86[fp - 0x00000024:HANDLE], Mem86[fp - 32:LONG], Mem86[fp - 28:PLONG], Mem86[fp - 24:DWORD]);
		Mem89[fp - 0x0000000C:word32] = eax_87;
		if (eax_87 == (edi | 0xFFFFFFFF))
		{
			word32 eax_106 = GetLastError();
			if (eax_106 != 0x00000000)
			{
				Mem111[fp - 0x00000018:word32] = eax_106;
				word32 edx_112;
				fn0043D0C9(fp - 0x00000004, esi_32, es, ds, fs, gs, out edx_112);
				goto l00447EE1;
			}
			else
			{
l00447F12:
				word32 eax_98 = 0x004F34E0[(esi_32 >> 0x00000005) * 0x00000004] + 0x00000004 + ((esi_32 & 0x0000001F) << 0x00000006);
				Mem100[eax_98 + 0x00000000:byte] = Mem89[eax_98 + 0x00000000:byte] & 0xFD;
				eax_103 = Mem100[fp - 0x0000000C:word32];
				word32 edx_104;
				*edxOut = Mem100[fp - 0x00000008:word32];
			}
		}
		else
			goto l00447F12;
	}
	return eax_103;
}

word32 fn00447F35(word32 ebx, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs, ptr32 edxOut, ptr32 ebpOut, ptr32 esiOut, ptr32 ediOut)
{
	word32 ebp_100;
	word32 ebx_49;
	word32 eax_141;
	word32 ebp_11 = fn00441E10(ebx, esi, edi, fs, dwLoc0C, 0x004D57D0, 0x00000014);
	Mem13[ebp_11 - 0x00000024:word32] = ebx | 0xFFFFFFFF;
	Mem14[ebp_11 - 0x00000020:word32] = ebx | 0xFFFFFFFF;
	word32 eax_15 = Mem14[ebp_11 + 0x00000008:word32];
	if (eax_15 == 0xFFFFFFFE)
	{
		word32 edx_55;
		word32 ebx_56;
		word32 ebp_57;
		word32 esi_58;
		word32 edi_59;
		word32 eax_60 = fn0043D0B6(ebp_11, esi, es, ds, fs, gs, out edx_55, out ebx_56, out ebp_57, out esi_58, out edi_59);
		Mem62[eax_60 + 0x00000000:word32] = Mem14[eax_60 + 0x00000000:word32] & 0x00000000;
		word32 edx_65;
		word32 esi_68;
		word32 edi_69;
		Mem71[fn0043D0A3(ebp_57, esi_58, es, ds, fs, gs, out edx_65, out ebx_49, out ebp_100, out esi_68, out edi_69):word32] = 0x00000009;
l00447F65:
		eax_141 = ebx_49;
		word32 edx_51;
		*edxOut = ebx_49;
	}
	else if (eax_15 >= 0x00000000 && eax_15 <u Mem14[0x004F34C8:word32])
	{
		word32 edi_106 = (eax_15 >> 0x00000005) * 0x00000004 + 0x004F34E0;
		esi = (eax_15 & 0x0000001F) << 0x00000006;
		if (((int32) Mem14[Mem14[edi_106 + 0x00000000:word32] + 0x00000004 + esi:byte] & 0x00000001) != 0x00000000)
		{
			Mem117[fp - 0x0000000C:word32] = eax_15;
			word32 ebx_118;
			word32 esi_120;
			word32 edi_121;
			fn0044BF44(ebx | 0xFFFFFFFF, esi, edi_106, es, ds, fs, gs, out ebx_118, out ebp_100, out esi_120, out edi_121);
			Mem126[ebp_100 - 0x00000004:word32] = Mem117[ebp_100 - 0x00000004:word32] & 0x00000000;
			if ((Mem126[Mem126[edi_121 + 0x00000000:word32] + 0x00000004 + esi_120:byte] & 0x01) != 0x00)
			{
				Mem144[fp - 0x0000000C:word32] = Mem126[ebp_100 + 0x00000014:word32];
				Mem146[fp - 0x00000010:word32] = Mem144[ebp_100 + 0x00000010:word32];
				Mem148[fp - 0x00000014:word32] = Mem146[ebp_100 + 0x0000000C:word32];
				Mem150[fp - 0x00000018:word32] = Mem148[ebp_100 + 0x00000008:word32];
				word32 edx_151;
				Mem155[ebp_100 - 0x00000024:word32] = fn00447EB0(es, ds, fs, gs, dwArg00, dwArg04, dwArg08, out edx_151);
				Mem156[ebp_100 - 0x00000020:word32] = edx_151;
			}
			else
			{
				word32 edx_157;
				word32 ebx_158;
				word32 ebp_159;
				word32 esi_160;
				word32 edi_161;
				Mem163[fn0043D0A3(ebp_100, esi_120, es, ds, fs, gs, out edx_157, out ebx_158, out ebp_159, out esi_160, out edi_161):word32] = 0x00000009;
				word32 edx_164;
				word32 ebx_165;
				word32 esi_167;
				word32 edi_168;
				word32 eax_169 = fn0043D0B6(ebp_159, esi_160, es, ds, fs, gs, out edx_164, out ebx_165, out ebp_100, out esi_167, out edi_168);
				Mem171[eax_169 + 0x00000000:word32] = Mem163[eax_169 + 0x00000000:word32] & 0x00000000;
				Mem174[ebp_100 - 0x00000024:word32] = ebx_165;
				Mem175[ebp_100 - 0x00000020:word32] = ebx_165;
			}
			Mem140[ebp_100 - 0x00000004:word32] = 0xFFFFFFFE;
			fn00448015(ebp_100);
			eax_141 = Mem140[ebp_100 - 0x00000024:word32];
			word32 edx_142;
			*edxOut = Mem140[ebp_100 - 0x00000020:word32];
		}
		else
		{
l00447F7A:
			word32 edx_81;
			word32 ebx_82;
			word32 ebp_83;
			word32 esi_84;
			word32 edi_85;
			word32 eax_86 = fn0043D0B6(ebp_11, esi, es, ds, fs, gs, out edx_81, out ebx_82, out ebp_83, out esi_84, out edi_85);
			Mem88[eax_86 + 0x00000000:word32] = Mem14[eax_86 + 0x00000000:word32] & 0x00000000;
			word32 edx_91;
			word32 ebx_92;
			word32 ebp_93;
			word32 esi_94;
			word32 edi_95;
			Mem97[fn0043D0A3(ebp_83, esi_84, es, ds, fs, gs, out edx_91, out ebx_92, out ebp_93, out esi_94, out edi_95):word32] = 0x00000009;
			word32 edx_98;
			fn004417A9(es, ds, fs, gs, out edx_98, out ebx_49, out ebp_100);
			goto l00447F65;
		}
	}
	else
		goto l00447F7A;
	word32 ebp_32;
	word32 esi_33;
	word32 edi_34;
	fn00441E55(ebp_100, fs, 0x00000014, dwArg00, dwArg04, dwArg08, dwArg0C, out ebp_32, out esi_33, out edi_34);
	return eax_141;
}

void fn00448015(word32 ebp)
{
	fn0044BFE3(Mem0[ebp + 0x00000008:word32]);
	return;
}

word32 fn0044801F(word32 edx, word32 ebx, word32 ebp, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg08, word32 dwArg0C, ptr32 edxOut, ptr32 ebpOut)
{
	*edxOut = edx;
	word32 eax_108;
	fn0044A550(0x00001AE4, dwLoc08);
	Mem24[fp - 0x00000004:word32] = esi;
	Mem28[fp - 0x00000008:word32] = edi;
	word32 ebp_106 = fp - 0x00000004;
	word32 esp_156 = fp - 0x00000008;
	if (dwArg0C == 0x00000000)
		eax_108 = 0x00000000;
	else if (dwArg08 == 0x00000000)
	{
		word32 edx_90;
		word32 ebx_91;
		word32 ebp_92;
		word32 esi_93;
		word32 edi_94;
		word32 eax_95 = fn0043D0B6(fp - 0x00000004, dwArg04, es, ds, fs, gs, out edx_90, out ebx_91, out ebp_92, out esi_93, out edi_94);
		Mem96[eax_95 + 0x00000000:word32] = edi_94;
		word32 edx_97;
		word32 ebx_98;
		word32 ebp_99;
		word32 esi_100;
		word32 edi_101;
		Mem103[fn0043D0A3(ebp_92, esi_93, es, ds, fs, gs, out edx_97, out ebx_98, out ebp_99, out esi_100, out edi_101):word32] = 0x00000016;
		fn004417A9(es, ds, fs, gs, out edx, out ebx, out ebp_106);
		eax_108 = 0xFFFFFFFF;
	}
	else
	{
		word32 eax_1193;
		Mem118[fp - 0x0000000C:word32] = ebx;
		word32 eax_120 = 0x004F34E0[(dwArg04 >> 0x00000005) * 0x00000004];
		word32 edi_125 = (dwArg04 & 0x0000001F) << 0x00000006;
		word32 esp_1022 = fp - 0x0000000C;
		byte cl_128 = Mem118[eax_120 + 0x00000024 + edi_125:byte] * 0x02 >> 0x01;
		if (cl_128 != 0x02 && cl_128 != 0x01 || ((byte) (~dwArg0C) & 0x01) != 0x00)
		{
			if ((Mem118[eax_120 + 0x00000004 + edi_125:byte] & 0x20) != 0x00)
			{
				Mem1155[fp - 0x00000010:word32] = 0x00000002;
				Mem1157[fp - 0x00000014:word32] = 0x00000000;
				Mem1159[fp - 0x00000018:word32] = 0x00000000;
				Mem1161[fp - 0x0000001C:word32] = dwArg04;
				word32 edx_1162;
				fn00447EB0(es, ds, fs, gs, dwArg00, dwArg04, dwArg08, out edx_1162);
				esp_1022 = fp - 0x0000000C;
			}
			word32 ecx_359;
			word32 esp_187 = esp_1022 - 0x00000004;
			Mem188[esp_187 + 0x00000000:word32] = dwArg04;
			esp_1022 = esp_187 + 0x00000004;
			word32 ebx_191;
			word32 esi_1019;
			if (fn00448839(dwArg04, es, ds, fs, gs, dwArg00, out edx, out ebx_191, out esi_1019) != 0x00000000)
			{
				word32 eax_813 = Mem188[ebx_191 + 0x00000000:word32];
				if ((Mem188[edi_125 + 0x00000004 + eax_813:byte] & 0x80) != 0x00)
				{
					word32 esi_820;
					fn0044304B(fp - 0x00000004, esi_1019, es, ds, fs, gs, out ebx_191, out ebp_106, out esi_820);
					*edxOut = edx;
					word32 ecx_830 = (word32) (Mem188[Mem188[eax_813 + 0x0000006C:word32] + 0x00000014:word32] == 0x00000000);
					Mem832[esp_187 + 0x00000000:word32] = ebp_106 + 0xFFFFE520;
					Mem835[esp_187 - 0x00000004:word32] = Mem832[edi_125 + Mem832[ebx_191 + 0x00000000:word32]:word32];
					esi_1019 = ecx_830;
					esp_1022 = esp_187 + 0x00000004;
					ecx_359 = 0x00000000;
					if (GetConsoleMode(Mem835[esp_187 - 0x00000004:HANDLE], Mem835[esp_187 + 0x00000000:LPDWORD]) != 0x00000000 && (ecx_830 == 0x00000000 || Mem835[ebp_106 + 0xFFFFE53F:byte] != 0x00))
					{
						word32 eax_847 = GetConsoleCP();
						word32 ebx_1099 = Mem835[ebp_106 + 0xFFFFE534:word32];
						Mem850[ebp_106 + 0xFFFFE520:word32] = eax_847;
						Mem855[ebp_106 + 0xFFFFE52C:word32] = 0x00000000;
						if (Mem855[ebp_106 + 0x00000010:word32] >u 0x00000000)
						{
							Mem858[ebp_106 + 0xFFFFE540:word32] = 0x00000000;
							do
							{
								byte al_873 = Mem858[ebp_106 + 0xFFFFE53F:byte];
								if (al_873 == 0x00)
								{
									word32 esp_1013;
									word32 ebx_1018;
									byte cl_898 = Mem858[ebx_1099 + 0x00000000:byte];
									word32 esi_900 = Mem858[ebp_106 + 0xFFFFE524:word32];
									Mem906[ebp_106 + 0xFFFFE51C:word32] = (word32) (cl_898 == 0x0A);
									word32 eax_908 = Mem906[esi_900 + 0x00000000:word32] + edi_125;
									if (Mem906[eax_908 + 0x00000038:word32] == 0x00000000)
									{
										word32 esp_1038 = esp_1022 - 0x00000004;
										Mem1039[esp_1038 + 0x00000000:word32] = (int32) cl_898;
										esp_1022 = esp_1038 + 0x00000004;
										word32 edx_1040;
										word32 ebx_1041;
										if (fn0043B806(es, ds, fs, gs, dwArg00, out edx_1040, out ebx_1041, out esi_1019) == 0x00000000)
										{
											Mem1092[esp_1038 + 0x00000000:word32] = 0x00000001;
											Mem1094[esp_1038 - 0x00000004:word32] = ebx_1041;
											esp_1013 = esp_1038 - 0x00000004;
											goto l00448206;
										}
										else if (Mem1039[ebp_106 + 0xFFFFE534:word32] - ebx_1041 + Mem1039[ebp_106 + 0x00000010:word32] >u 0x00000001)
										{
											Mem1061[esp_1038 + 0x00000000:word32] = 0x00000002;
											Mem1064[esp_1038 - 0x00000004:word32] = ebx_1041;
											Mem1066[esp_1038 - 0x00000008:word32] = ebp_106 + 0xFFFFE544;
											esp_1022 = esp_1038 + 0x00000004;
											word32 ebx_1068;
											if (fn00448D1D(es, ds, fs, gs, dwArg00, dwArg04, dwArg08, out edx, out ebx_1068, out esi_1019) != 0xFFFFFFFF)
											{
												Mem1078[ebp_106 + 0xFFFFE540:word32] = Mem1066[ebp_106 + 0xFFFFE540:word32] + 0x00000001;
												ebx_1018 = ebx_1068 + 0x00000001;
												goto l0044821E;
											}
										}
										else
										{
											byte dl_1081 = Mem1039[ebx_1041 + 0x00000000:byte];
											word32 ecx_1080 = Mem1039[esi_1019 + 0x00000000:word32];
											Mem1086[ebp_106 + 0xFFFFE538:word32] = Mem1039[ebp_106 + 0xFFFFE538:word32] + 0x00000001;
											Mem1088[edi_125 + 0x00000034 + ecx_1080:byte] = dl_1081;
											Mem1090[edi_125 + 0x00000038 + Mem1088[esi_1019 + 0x00000000:word32]:word32] = 0x00000001;
											*edxOut = DPB(edx_1040, dl_1081, 0, 8);
										}
									}
									Mem1026[ebp_106 - 0x0000000C:byte] = Mem906[eax_908 + 0x00000034:byte];
									Mem1027[ebp_106 - 0x0000000B:byte] = cl_898;
									Mem1029[eax_908 + 0x00000038:word32] = Mem1027[eax_908 + 0x00000038:word32] & 0x00000000;
									word32 esp_1032 = esp_1022 - 0x00000004;
									Mem1033[esp_1032 + 0x00000000:word32] = 0x00000002;
									Mem1036[esp_1032 - 0x00000004:word32] = ebp_106 - 0x0000000C;
									esp_1013 = esp_1032 - 0x00000004;
l00448206:
									word32 esp_1015 = esp_1013 - 0x00000004;
									Mem1016[esp_1015 + 0x00000000:word32] = ebp_106 + 0xFFFFE544;
									esp_1022 = esp_1015 + 0x0000000C;
									if (fn00448D1D(es, ds, fs, gs, dwArg00, dwArg04, dwArg08, out edx, out ebx_1018, out esi_1019) == 0xFFFFFFFF)
										;
l0044821E:
									word32 esp_923 = esp_1022 - 0x00000004;
									Mem924[esp_923 + 0x00000000:word32] = 0x00000000;
									Mem926[esp_923 - 0x00000004:word32] = 0x00000000;
									Mem928[esp_923 - 0x00000008:word32] = 0x00000005;
									Mem931[esp_923 - 0x0000000C:word32] = ebp_106 - 0x0000000C;
									Mem933[esp_923 - 0x00000010:word32] = 0x00000001;
									Mem936[esp_923 - 0x00000014:word32] = ebp_106 + 0xFFFFE544;
									Mem938[esp_923 - 0x00000018:word32] = 0x00000000;
									Mem940[esp_923 - 0x0000001C:word32] = Mem938[ebp_106 + 0xFFFFE520:word32];
									Mem944[ebp_106 + 0xFFFFE540:word32] = Mem940[ebp_106 + 0xFFFFE540:word32] + 0x00000001;
									word32 eax_945 = WideCharToMultiByte(Mem944[esp_923 - 0x0000001C:UINT], Mem944[esp_923 - 24:DWORD], Mem944[esp_923 - 20:LPCWSTR], Mem944[esp_923 - 16:int32], Mem944[esp_923 - 12:LPSTR], Mem944[esp_923 - 8:int32], Mem944[esp_923 - 4:LPCSTR], Mem944[esp_923 + 0x00000000:LPBOOL]);
									ebx_1099 = ebx_1018 + 0x00000001;
									esp_1022 = esp_923 + 0x00000004;
									esi_1019 = eax_945;
									if (eax_945 == 0x00000000)
										;
									Mem953[esp_923 + 0x00000000:word32] = 0x00000000;
									Mem956[esp_923 - 0x00000004:word32] = ebp_106 + 0xFFFFE52C;
									Mem958[esp_923 - 0x00000008:word32] = eax_945;
									Mem961[esp_923 - 0x0000000C:word32] = ebp_106 - 0x0000000C;
									Mem965[esp_923 - 0x00000010:word32] = Mem961[edi_125 + Mem961[Mem961[ebp_106 + 0xFFFFE524:word32]:word32]:word32];
									esp_1022 = esp_923 + 0x00000004;
									if (WriteFile(Mem965[esp_923 - 0x00000010:HANDLE], Mem965[esp_923 - 12:LPCVOID], Mem965[esp_923 - 8:DWORD], Mem965[esp_923 - 4:LPDWORD], Mem965[esp_923 + 0x00000000:LPOVERLAPPED]) == 0x00000000)
										;
									Mem976[ebp_106 + 0xFFFFE538:word32] = Mem965[ebp_106 + 0xFFFFE540:word32] + Mem965[ebp_106 + 0xFFFFE530:word32];
									if (Mem976[ebp_106 + 0xFFFFE52C:word32] < eax_945)
										;
									if (Mem976[ebp_106 + 0xFFFFE51C:word32] != 0x00000000)
									{
										Mem982[esp_923 + 0x00000000:word32] = 0x00000000;
										Mem985[esp_923 - 0x00000004:word32] = ebp_106 + 0xFFFFE52C;
										Mem987[esp_923 - 0x00000008:word32] = 0x00000001;
										Mem990[esp_923 - 0x0000000C:word32] = ebp_106 - 0x0000000C;
										word32 eax_992 = Mem990[Mem990[ebp_106 + 0xFFFFE524:word32]:word32];
										Mem993[ebp_106 - 0x0000000C:byte] = 0x0D;
										Mem995[esp_923 - 0x00000010:word32] = Mem993[edi_125 + eax_992:word32];
										esp_1022 = esp_923 + 0x00000004;
										if (WriteFile(Mem995[esp_923 - 0x00000010:HANDLE], Mem995[esp_923 - 12:LPCVOID], Mem995[esp_923 - 8:DWORD], Mem995[esp_923 - 4:LPDWORD], Mem995[esp_923 + 0x00000000:LPOVERLAPPED]) == 0x00000000)
											goto l00448680;
										if (Mem995[ebp_106 + 0xFFFFE52C:word32] < 0x00000001)
											goto l0044868C;
										Mem1005[ebp_106 + 0xFFFFE530:word32] = Mem995[ebp_106 + 0xFFFFE530:word32] + 0x00000001;
										Mem1007[ebp_106 + 0xFFFFE538:word32] = Mem1005[ebp_106 + 0xFFFFE538:word32] + 0x00000001;
										goto l00448370;
									}
								}
								if (al_873 == 0x01 || al_873 == 0x02)
								{
									esi_1019 = (word32) Mem858[ebx_1099 + 0x00000000:word16];
									Mem1146[ebp_106 + 0xFFFFE540:word32] = Mem858[ebp_106 + 0xFFFFE540:word32] + 0x00000002;
									Mem1148[ebp_106 + 0xFFFFE544:word32] = esi_1019;
									Mem1149[ebp_106 + 0xFFFFE51C:word32] = (word32) (esi_1019 == 0x0000000A);
									ebx_1099 = ebx_1099 + 0x00000002;
								}
								if (al_873 != 0x01 && al_873 != 0x02)
									goto l00448370;
								word32 esp_1104 = esp_1022 - 0x00000004;
								Mem1105[esp_1104 + 0x00000000:word32] = Mem858[ebp_106 + 0xFFFFE544:word32];
								esp_1022 = esp_1104 + 0x00000004;
								if (fn0044C00A(wArg00) != Mem1105[ebp_106 + 0xFFFFE544:word16])
									goto l00448680;
								Mem1114[ebp_106 + 0xFFFFE538:word32] = Mem1105[ebp_106 + 0xFFFFE538:word32] + 0x00000002;
								if (Mem1114[ebp_106 + 0xFFFFE51C:word32] != 0x00000000)
								{
									Mem1118[esp_1104 + 0x00000000:word32] = 0x0000000D;
									word32 eax_1119 = Mem1118[esp_1104 + 0x00000000:word32];
									Mem1122[esp_1104 + 0x00000000:word32] = eax_1119;
									Mem1123[ebp_106 + 0xFFFFE544:word32] = eax_1119;
									esp_1022 = esp_1104 + 0x00000004;
									if (fn0044C00A(wArg00) == Mem1123[ebp_106 + 0xFFFFE544:word16])
									{
										Mem1131[ebp_106 + 0xFFFFE538:word32] = Mem1123[ebp_106 + 0xFFFFE538:word32] + 0x00000001;
										Mem1133[ebp_106 + 0xFFFFE530:word32] = Mem1131[ebp_106 + 0xFFFFE530:word32] + 0x00000001;
										goto l00448370;
									}
									else
										goto l00448680;
								}
l00448370:
							} while (Mem858[ebp_106 + 0xFFFFE540:word32] <u Mem858[ebp_106 + 0x00000010:word32]);
l0044868C:
							if (Mem188[ebp_106 + 0xFFFFE538:word32] == 0x00000000)
							{
l00448695:
								if (Mem188[ebp_106 + 0xFFFFE544:word32] != 0x00000000)
								{
									word32 esp_273 = esp_1022 - 0x00000004;
									Mem274[esp_273 + 0x00000000:word32] = 0x00000005;
									word32 esi_275 = Mem274[esp_273 + 0x00000000:word32];
									esp_1022 = esp_273 + 0x00000004;
									if (Mem274[ebp_106 + 0xFFFFE544:word32] == esi_275)
									{
										word32 edx_279;
										word32 ebx_280;
										word32 ebp_281;
										word32 esi_282;
										word32 edi_283;
										Mem285[fn0043D0A3(ebp_106, esi_275, es, ds, fs, gs, out edx_279, out ebx_280, out ebp_281, out esi_282, out edi_283):word32] = 0x00000009;
										word32 ebx_287;
										word32 esi_289;
										word32 edi_290;
										eax_1193 = fn0043D0B6(ebp_281, esi_282, es, ds, fs, gs, out edx, out ebx_287, out ebp_106, out esi_289, out edi_290);
										Mem295[eax_1193 + 0x00000000:word32] = esi_289;
									}
									else
									{
										Mem297[esp_273 + 0x00000000:word32] = Mem274[ebp_106 + 0xFFFFE544:word32];
										eax_1193 = fn0043D0C9(ebp_106, esi_275, es, ds, fs, gs, out edx);
										esp_1022 = esp_273 + 0x00000004;
									}
l004486FC:
									eax_108 = eax_1193 | 0xFFFFFFFF;
								}
								else
								{
l004486CB:
									if ((Mem188[edi_125 + 0x00000004 + Mem188[Mem188[ebp_106 + 0xFFFFE524:word32]:word32]:byte] & 0x40) != 0x00 && Mem188[Mem188[ebp_106 + 0xFFFFE534:word32]:byte] == 0x1A)
										eax_108 = 0x00000000;
									else
									{
										word32 edx_223;
										word32 ebx_224;
										word32 ebp_225;
										word32 esi_226;
										word32 edi_227;
										Mem229[fn0043D0A3(ebp_106, esi_1019, es, ds, fs, gs, out edx_223, out ebx_224, out ebp_225, out esi_226, out edi_227):word32] = 0x0000001C;
										word32 ebx_231;
										word32 esi_233;
										word32 edi_234;
										eax_1193 = fn0043D0B6(ebp_225, esi_226, es, ds, fs, gs, out edx, out ebx_231, out ebp_106, out esi_233, out edi_234);
										Mem240[eax_1193 + 0x00000000:word32] = Mem229[eax_1193 + 0x00000000:word32] & 0x00000000;
										goto l004486FC;
									}
								}
							}
							else
								eax_108 = Mem188[ebp_106 + 0xFFFFE538:word32] - Mem188[ebp_106 + 0xFFFFE530:word32];
						}
						else
							goto l00448695;
					}
					else
					{
l0044839F:
						word32 eax_362 = Mem188[ebx_191 + 0x00000000:word32];
						if ((Mem188[eax_362 + 0x00000004 + edi_125:byte] & 0x80) != 0x00)
						{
							Mem371[ebp_106 + 0xFFFFE544:word32] = ecx_359;
							if (Mem188[ebp_106 + 0xFFFFE53F:byte] == 0x00)
							{
								word32 ebx_372 = Mem371[ebp_106 + 0xFFFFE534:word32];
								if (Mem371[ebp_106 + 0x00000010:word32] >u ecx_359)
								{
l004483CE:
									do
									{
										word32 esi_387 = 0x00000000;
										word32 ecx_388 = ebx_372 - Mem371[ebp_106 + 0xFFFFE534:word32];
										word32 eax_391 = ebp_106 + 0xFFFFE548;
										do
										{
											if (ecx_388 >=u Mem371[ebp_106 + 0x00000010:word32])
												break;
											byte dl_456 = Mem371[ebx_372 + 0x00000000:byte];
											ebx_372 = ebx_372 + 0x00000001;
											Mem464[ebp_106 + 0xFFFFE520:word32] = ebx_372;
											*edxOut = DPB(edx, dl_456, 0, 8);
											ecx_388 = ecx_388 + 0x00000001;
											if (dl_456 == 0x0A)
											{
												Mem479[ebp_106 + 0xFFFFE530:word32] = Mem464[ebp_106 + 0xFFFFE530:word32] + 0x00000001;
												Mem480[eax_391 + 0x00000000:byte] = 0x0D;
												eax_391 = eax_391 + 0x00000001;
												esi_387 = esi_387 + 0x00000001;
											}
											Mem470[eax_391 + 0x00000000:byte] = dl_456;
											eax_391 = eax_391 + 0x00000001;
											esi_387 = esi_387 + 0x00000001;
										} while (esi_387 <u 0x000013FF);
										word32 esp_425 = esp_1022 - 0x00000004;
										Mem426[esp_425 + 0x00000000:word32] = 0x00000000;
										Mem429[esp_425 - 0x00000004:word32] = ebp_106 + 0xFFFFE528;
										esi_1019 = eax_391 - (ebp_106 + 0xFFFFE548);
										Mem431[esp_425 - 0x00000008:word32] = esi_1019;
										Mem434[esp_425 - 0x0000000C:word32] = ebp_106 + 0xFFFFE548;
										Mem438[esp_425 - 0x00000010:word32] = Mem434[edi_125 + Mem434[Mem434[ebp_106 + 0xFFFFE524:word32]:word32]:word32];
										esp_1022 = esp_425 + 0x00000004;
										if (WriteFile(Mem438[esp_425 - 0x00000010:HANDLE], Mem438[esp_425 - 12:LPCVOID], Mem438[esp_425 - 8:DWORD], Mem438[esp_425 - 4:LPDWORD], Mem438[esp_425 + 0x00000000:LPOVERLAPPED]) == 0x00000000)
											;
										word32 eax_445 = Mem438[ebp_106 + 0xFFFFE528:word32];
										Mem448[ebp_106 + 0xFFFFE538:word32] = Mem438[ebp_106 + 0xFFFFE538:word32] + eax_445;
										if (eax_445 < esi_1019)
											goto l0044868C;
									} while (ebx_372 - Mem448[ebp_106 + 0xFFFFE534:word32] <u Mem448[ebp_106 + 0x00000010:word32]);
									goto l0044868C;
								}
								else
									goto l004486CB;
							}
							else if (Mem371[ebp_106 + 0xFFFFE53F:byte] == 0x02)
							{
								word32 ebx_489 = Mem371[ebp_106 + 0xFFFFE534:word32];
								if (Mem371[ebp_106 + 0x00000010:word32] >u ecx_359)
								{
l00448483:
									do
									{
										Mem503[ebp_106 + 0xFFFFE540:word32] = Mem371[ebp_106 + 0xFFFFE540:word32] & 0x00000000;
										word32 ecx_506 = ebx_489 - Mem503[ebp_106 + 0xFFFFE534:word32];
										word32 esp_509 = esp_1022 - 0x00000004;
										Mem510[esp_509 + 0x00000000:word32] = 0x00000002;
										word32 eax_511 = ebp_106 + 0xFFFFE548;
										word32 esi_515 = Mem510[esp_509 + 0x00000000:word32];
										word32 esp_516 = esp_509 + 0x00000004;
										do
										{
											if (ecx_506 >=u Mem510[ebp_106 + 0x00000010:word32])
												break;
											edx = (word32) Mem510[ebx_489 + 0x00000000:word16];
											*edxOut = edx;
											ebx_489 = ebx_489 + esi_515;
											Mem586[ebp_106 + 0xFFFFE520:word32] = ebx_489;
											word16 dx_581 = (word16) edx;
											ecx_506 = ecx_506 + esi_515;
											if (edx == 0x0000000A)
											{
												Mem603[ebp_106 + 0xFFFFE530:word32] = Mem586[ebp_106 + 0xFFFFE530:word32] + esi_515;
												word32 esp_604 = esp_516 - 0x00000004;
												Mem605[esp_604 + 0x00000000:word32] = 0x0000000D;
												Mem609[eax_511 + 0x00000000:word16] = (word16) Mem605[esp_604 + 0x00000000:word32];
												ebx_489 = Mem609[ebp_106 + 0xFFFFE520:word32];
												Mem617[ebp_106 + 0xFFFFE540:word32] = Mem609[ebp_106 + 0xFFFFE540:word32] + esi_515;
												esp_516 = esp_604 + 0x00000004;
												eax_511 = eax_511 + esi_515;
											}
											Mem594[ebp_106 + 0xFFFFE540:word32] = Mem586[ebp_106 + 0xFFFFE540:word32] + esi_515;
											Mem595[eax_511 + 0x00000000:word16] = dx_581;
											eax_511 = eax_511 + esi_515;
										} while (Mem595[ebp_106 + 0xFFFFE540:word32] <u 0x000013FE);
										word32 esp_547 = esp_516 - 0x00000004;
										Mem548[esp_547 + 0x00000000:word32] = 0x00000000;
										Mem551[esp_547 - 0x00000004:word32] = ebp_106 + 0xFFFFE528;
										esi_1019 = eax_511 - (ebp_106 + 0xFFFFE548);
										Mem553[esp_547 - 0x00000008:word32] = esi_1019;
										Mem556[esp_547 - 0x0000000C:word32] = ebp_106 + 0xFFFFE548;
										Mem560[esp_547 - 0x00000010:word32] = Mem556[edi_125 + Mem556[Mem556[ebp_106 + 0xFFFFE524:word32]:word32]:word32];
										esp_1022 = esp_547 + 0x00000004;
										if (WriteFile(Mem560[esp_547 - 0x00000010:HANDLE], Mem560[esp_547 - 12:LPCVOID], Mem560[esp_547 - 8:DWORD], Mem560[esp_547 - 4:LPDWORD], Mem560[esp_547 + 0x00000000:LPOVERLAPPED]) == 0x00000000)
											;
										word32 eax_567 = Mem560[ebp_106 + 0xFFFFE528:word32];
										Mem570[ebp_106 + 0xFFFFE538:word32] = Mem560[ebp_106 + 0xFFFFE538:word32] + eax_567;
										if (eax_567 < esi_1019)
											;
									} while (ebx_489 - Mem570[ebp_106 + 0xFFFFE534:word32] <u Mem570[ebp_106 + 0x00000010:word32]);
									goto l0044868C;
								}
								else
									goto l004486CB;
							}
							else
							{
								Mem621[ebp_106 + 0xFFFFE52C:word32] = Mem371[ebp_106 + 0xFFFFE534:word32];
								if (Mem621[ebp_106 + 0x00000010:word32] >u ecx_359)
								{
l00448556:
									do
									{
										word32 ecx_632 = Mem621[ebp_106 + 0xFFFFE52C:word32];
										Mem634[ebp_106 + 0xFFFFE540:word32] = Mem621[ebp_106 + 0xFFFFE540:word32] & 0x00000000;
										word32 ecx_636 = ecx_632 - Mem634[ebp_106 + 0xFFFFE534:word32];
										word32 esp_639 = esp_1022 - 0x00000004;
										Mem640[esp_639 + 0x00000000:word32] = 0x00000002;
										word32 eax_641 = ebp_106 + 0xFFFFF948;
										word32 esi_645 = Mem640[esp_639 + 0x00000000:word32];
										word32 esp_646 = esp_639 + 0x00000004;
										do
										{
											if (ecx_636 >=u Mem640[ebp_106 + 0x00000010:word32])
												break;
											word32 edx_746 = (word32) Mem640[Mem640[ebp_106 + 0xFFFFE52C:word32]:word16];
											Mem751[ebp_106 + 0xFFFFE52C:word32] = Mem640[ebp_106 + 0xFFFFE52C:word32] + esi_645;
											word16 dx_749 = (word16) edx_746;
											ecx_636 = ecx_636 + esi_645;
											if (edx_746 == 0x0000000A)
											{
												word32 esp_769 = esp_646 - 0x00000004;
												Mem770[esp_769 + 0x00000000:word32] = 0x0000000D;
												Mem774[eax_641 + 0x00000000:word16] = (word16) Mem770[esp_769 + 0x00000000:word32];
												Mem780[ebp_106 + 0xFFFFE540:word32] = Mem774[ebp_106 + 0xFFFFE540:word32] + esi_645;
												esp_646 = esp_769 + 0x00000004;
												eax_641 = eax_641 + esi_645;
											}
											Mem761[ebp_106 + 0xFFFFE540:word32] = Mem751[ebp_106 + 0xFFFFE540:word32] + esi_645;
											Mem762[eax_641 + 0x00000000:word16] = dx_749;
											eax_641 = eax_641 + esi_645;
										} while (Mem762[ebp_106 + 0xFFFFE540:word32] <u 0x000006A8);
										word32 esp_669 = esp_646 - 0x00000004;
										Mem670[esp_669 + 0x00000000:word32] = 0x00000000;
										Mem672[esp_669 - 0x00000004:word32] = 0x00000000;
										Mem674[esp_669 - 0x00000008:word32] = 0x00000D55;
										Mem677[esp_669 - 0x0000000C:word32] = ebp_106 + 0xFFFFEBF0;
										word32 ecx_678 = ebp_106 + 0xFFFFF948;
										int64 edx_eax_680 = (int64) (eax_641 - ecx_678);
										edx = SLICE(edx_eax_680, word32, 32);
										*edxOut = edx;
										Mem688[esp_669 - 0x00000010:word32] = (word32) edx_eax_680 - edx >> 0x00000001;
										Mem691[esp_669 - 0x00000014:word32] = ecx_678;
										Mem693[esp_669 - 0x00000018:word32] = 0x00000000;
										Mem695[esp_669 - 0x0000001C:word32] = 0x0000FDE9;
										esi_1019 = 0x00000000;
										word32 eax_696 = WideCharToMultiByte(Mem695[esp_669 - 0x0000001C:UINT], Mem695[esp_669 - 24:DWORD], Mem695[esp_669 - 20:LPCWSTR], Mem695[esp_669 - 16:int32], Mem695[esp_669 - 12:LPSTR], Mem695[esp_669 - 8:int32], Mem695[esp_669 - 4:LPCSTR], Mem695[esp_669 + 0x00000000:LPBOOL]);
										esp_1022 = esp_669 + 0x00000004;
										if (eax_696 == 0x00000000)
											;
										do
										{
											word32 esp_706 = esp_1022 - 0x00000004;
											Mem707[esp_706 + 0x00000000:word32] = 0x00000000;
											Mem710[esp_706 - 0x00000004:word32] = ebp_106 + 0xFFFFE528;
											Mem714[esp_706 - 0x00000008:word32] = eax_696 - esi_1019;
											Mem717[esp_706 - 0x0000000C:word32] = ebp_106 + 0xFFFFEBF0 + esi_1019;
											Mem721[esp_706 - 0x00000010:word32] = Mem717[edi_125 + Mem717[Mem717[ebp_106 + 0xFFFFE524:word32]:word32]:word32];
											esp_1022 = esp_706 + 0x00000004;
											if (WriteFile(Mem721[esp_706 - 0x00000010:HANDLE], Mem721[esp_706 - 12:LPCVOID], Mem721[esp_706 - 8:DWORD], Mem721[esp_706 - 4:LPDWORD], Mem721[esp_706 + 0x00000000:LPOVERLAPPED]) == 0x00000000)
											{
												Mem744[ebp_106 + 0xFFFFE544:word32] = GetLastError();
												goto l0044862C;
											}
											esi_1019 = esi_1019 + Mem721[ebp_106 + 0xFFFFE528:word32];
										} while (eax_696 > esi_1019);
l0044862C:
										if (eax_696 > esi_1019)
											;
										word32 eax_734 = Mem721[ebp_106 + 0xFFFFE52C:word32] - Mem721[ebp_106 + 0xFFFFE534:word32];
										Mem736[ebp_106 + 0xFFFFE538:word32] = eax_734;
									} while (eax_734 <u Mem736[ebp_106 + 0x00000010:word32]);
									goto l0044868C;
								}
								else
									goto l004486CB;
							}
						}
						else
						{
							word32 esp_782 = esp_1022 - 0x00000004;
							Mem783[esp_782 + 0x00000000:word32] = ecx_359;
							Mem786[esp_782 - 0x00000004:word32] = ebp_106 + 0xFFFFE528;
							Mem788[esp_782 - 0x00000008:word32] = Mem786[ebp_106 + 0x00000010:word32];
							Mem790[esp_782 - 0x0000000C:word32] = Mem788[ebp_106 + 0xFFFFE534:word32];
							Mem792[esp_782 - 0x00000010:word32] = Mem790[eax_362 + edi_125:word32];
							esp_1022 = esp_782 + 0x00000004;
							if (WriteFile(Mem792[esp_782 - 0x00000010:HANDLE], Mem792[esp_782 - 12:LPCVOID], Mem792[esp_782 - 8:DWORD], Mem792[esp_782 - 4:LPDWORD], Mem792[esp_782 + 0x00000000:LPOVERLAPPED]) != 0x00000000)
							{
								word32 eax_799 = Mem792[ebp_106 + 0xFFFFE528:word32];
								Mem802[ebp_106 + 0xFFFFE544:word32] = Mem792[ebp_106 + 0xFFFFE544:word32] & 0x00000000;
								Mem805[ebp_106 + 0xFFFFE538:word32] = eax_799;
							}
							else
							{
l00448680:
								Mem351[ebp_106 + 0xFFFFE544:word32] = GetLastError();
							}
						}
					}
				}
				else
				{
l0044839D:
					ecx_359 = 0x00000000;
					goto l0044839F;
				}
			}
			else
				goto l0044839D;
		}
		else
		{
			word32 edx_1173;
			word32 ebx_1174;
			word32 ebp_1175;
			word32 esi_1176;
			word32 edi_1177;
			word32 eax_1178 = fn0043D0B6(fp - 0x00000004, dwArg04, es, ds, fs, gs, out edx_1173, out ebx_1174, out ebp_1175, out esi_1176, out edi_1177);
			Mem1180[eax_1178 + 0x00000000:word32] = Mem118[eax_1178 + 0x00000000:word32] & 0x00000000;
			word32 edx_1183;
			word32 ebx_1184;
			word32 ebp_1185;
			word32 esi_1186;
			word32 edi_1187;
			Mem1189[fn0043D0A3(ebp_1175, esi_1176, es, ds, fs, gs, out edx_1183, out ebx_1184, out ebp_1185, out esi_1186, out edi_1187):word32] = 0x00000016;
			word32 ebx_1191;
			eax_1193 = fn004417A9(es, ds, fs, gs, out edx, out ebx_1191, out ebp_106);
			goto l004486FC;
		}
		ebx = Mem118[esp_1022 + 0x00000000:word32];
		esp_156 = esp_1022 + 0x00000004;
	}
	word32 ecx_63;
	word32 eax_64 = fn004394A0(eax_108, Mem28[ebp_106 - 0x00000004:word32] ^ ebp_106, edx, ebx, ebp_106, Mem28[esp_156 + 0x00000004:word32], Mem28[esp_156 + 0x00000000:word32], es, ds, fs, gs, ebp, out ecx_63);
	word32 ebp_69;
	*ebpOut = Mem28[ebp_106 + 0x00000000:word32];
	return eax_64;
}

word32 fn0044871C(word32 ebx, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs, ptr32 edxOut, ptr32 ebxOut, ptr32 ebpOut, ptr32 esiOut, ptr32 ediOut)
{
	word32 ebp_135;
	word32 eax_43;
	word32 eax_140;
	word32 ebp_11 = fn00441E10(ebx, esi, edi, fs, dwLoc0C, 0x004D57F0, 0x00000010);
	word32 ebx_13 = Mem0[ebp_11 + 0x00000008:word32];
	if (ebx_13 == 0xFFFFFFFE)
	{
		word32 edx_55;
		word32 ebx_56;
		word32 ebp_57;
		word32 esi_58;
		word32 edi_59;
		word32 eax_60 = fn0043D0B6(ebp_11, esi, es, ds, fs, gs, out edx_55, out ebx_56, out ebp_57, out esi_58, out edi_59);
		Mem62[eax_60 + 0x00000000:word32] = Mem0[eax_60 + 0x00000000:word32] & 0x00000000;
		word32 edx_65;
		word32 ebx_66;
		word32 esi_68;
		word32 edi_69;
		eax_43 = fn0043D0A3(ebp_57, esi_58, es, ds, fs, gs, out edx_65, out ebx_66, out ebp_135, out esi_68, out edi_69);
		Mem71[eax_43 + 0x00000000:word32] = 0x00000009;
l00448743:
		eax_140 = eax_43 | 0xFFFFFFFF;
	}
	else if (ebx_13 >= 0x00000000 && ebx_13 <u Mem0[0x004F34C8:word32])
	{
		word32 edi_104 = (ebx_13 >> 0x00000005) * 0x00000004 + 0x004F34E0;
		esi = (ebx_13 & 0x0000001F) << 0x00000006;
		if (((int32) Mem0[Mem0[edi_104 + 0x00000000:word32] + 0x00000004 + esi:byte] & 0x00000001) != 0x00000000)
		{
			Mem115[fp - 0x0000000C:word32] = ebx_13;
			word32 ebp_117;
			word32 esi_118;
			word32 edi_119;
			word32 ebx_116;
			word32 edx_120 = fn0044BF44(ebx_13, esi, edi_104, es, ds, fs, gs, out ebx_116, out ebp_117, out esi_118, out edi_119);
			Mem124[ebp_117 - 0x00000004:word32] = Mem115[ebp_117 - 0x00000004:word32] & 0x00000000;
			if ((Mem124[Mem124[edi_119 + 0x00000000:word32] + 0x00000004 + esi_118:byte] & 0x01) != 0x00)
			{
				Mem142[fp - 0x0000000C:word32] = Mem124[ebp_117 + 0x00000010:word32];
				Mem144[fp - 0x00000010:word32] = Mem142[ebp_117 + 0x0000000C:word32];
				Mem146[fp - 0x00000014:word32] = ebx_116;
				word32 edx_147;
				word32 eax_149 = fn0044801F(edx_120, ebx_116, ebp_117, esi_118, edi_119, es, ds, fs, gs, dwArg00, dwArg04, dwArg08, out edx_147, out ebp_135);
				Mem152[ebp_135 - 0x0000001C:word32] = eax_149;
			}
			else
			{
				word32 edx_153;
				word32 ebx_154;
				word32 ebp_155;
				word32 esi_156;
				word32 edi_157;
				Mem159[fn0043D0A3(ebp_117, esi_118, es, ds, fs, gs, out edx_153, out ebx_154, out ebp_155, out esi_156, out edi_157):word32] = 0x00000009;
				word32 edx_160;
				word32 esi_163;
				word32 edi_164;
				word32 eax_165 = fn0043D0B6(ebp_155, esi_156, es, ds, fs, gs, out edx_160, out ebx_116, out ebp_135, out esi_163, out edi_164);
				Mem167[eax_165 + 0x00000000:word32] = Mem159[eax_165 + 0x00000000:word32] & 0x00000000;
				Mem170[ebp_135 - 0x0000001C:word32] = Mem167[ebp_135 - 0x0000001C:word32] | 0xFFFFFFFF;
			}
			Mem139[ebp_135 - 0x00000004:word32] = 0xFFFFFFFE;
			fn004487E8(ebx_116);
			eax_140 = Mem139[ebp_135 - 0x0000001C:word32];
		}
		else
		{
l00448757:
			word32 edx_79;
			word32 ebx_80;
			word32 ebp_81;
			word32 esi_82;
			word32 edi_83;
			word32 eax_84 = fn0043D0B6(ebp_11, esi, es, ds, fs, gs, out edx_79, out ebx_80, out ebp_81, out esi_82, out edi_83);
			Mem86[eax_84 + 0x00000000:word32] = Mem0[eax_84 + 0x00000000:word32] & 0x00000000;
			word32 edx_89;
			word32 ebx_90;
			word32 ebp_91;
			word32 esi_92;
			word32 edi_93;
			Mem95[fn0043D0A3(ebp_81, esi_82, es, ds, fs, gs, out edx_89, out ebx_90, out ebp_91, out esi_92, out edi_93):word32] = 0x00000009;
			word32 edx_96;
			word32 ebx_97;
			eax_43 = fn004417A9(es, ds, fs, gs, out edx_96, out ebx_97, out ebp_135);
			goto l00448743;
		}
	}
	else
		goto l00448757;
	word32 ebp_30;
	word32 esi_31;
	word32 edi_32;
	word32 ebx_33;
	*ebxOut = fn00441E55(ebp_135, fs, 0x00000010, dwArg00, dwArg04, dwArg08, dwArg0C, out ebp_30, out esi_31, out edi_32);
	return eax_140;
}

void fn004487E8(word32 ebx)
{
	fn0044BFE3(ebx);
	return;
}

word32 fn004487F0(selector es, selector ds, selector fs, selector gs, ptr32 ebxOut, ptr32 esiOut)
{
	Mem10[0x004EF0A4:word32] = Mem0[0x004EF0A4:word32] + 0x00000001;
	word32 edx_18;
	word32 ebx_19;
	word32 ebp_20;
	word32 esi_21;
	word32 edi_22;
	word32 eax_23 = fn0043D99C(fp - 0x00000004, es, ds, fs, gs, out edx_18, out ebx_19, out ebp_20, out esi_21, out edi_22);
	word32 ecx_26 = Mem10[ebp_20 + 0x00000008:word32];
	Mem27[ecx_26 + 0x00000008:word32] = eax_23;
	if (eax_23 != 0x00000000)
	{
		Mem42[ecx_26 + 0x0000000C:word32] = Mem27[ecx_26 + 0x0000000C:word32] | 0x00000008;
		Mem45[ecx_26 + 0x00000018:word32] = 0x00001000;
	}
	else
	{
		Mem47[ecx_26 + 0x0000000C:word32] = Mem27[ecx_26 + 0x0000000C:word32] | 0x00000004;
		Mem51[ecx_26 + 0x00000008:word32] = ecx_26 + 0x00000014;
		Mem52[ecx_26 + 0x00000018:word32] = 0x00000002;
	}
	word32 eax_31 = Mem27[ecx_26 + 0x00000008:word32];
	Mem33[ecx_26 + 0x00000004:word32] = Mem27[ecx_26 + 0x00000004:word32] & 0x00000000;
	Mem36[ecx_26 + 0x00000000:word32] = eax_31;
	return edx_18;
}

word32 fn00448839(word32 esi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 edxOut, ptr32 ebxOut, ptr32 esiOut)
{
	*esiOut = esi;
	*edxOut = edx;
	*ebxOut = ebx;
	if (dwArg04 == 0xFFFFFFFE)
	{
		word32 edx_45;
		word32 ebx_46;
		word32 ebp_47;
		word32 esi_48;
		word32 edi_49;
		Mem51[fn0043D0A3(fp - 0x00000004, esi, es, ds, fs, gs, out edx_45, out ebx_46, out ebp_47, out esi_48, out edi_49):word32] = 0x00000009;
l00448851:
		return 0x00000000;
	}
	else if (dwArg04 >= 0x00000000 && dwArg04 <u Mem0[0x004F34C8:word32])
		return (int32) (0x004F34E0[(dwArg04 >> 0x00000005) * 0x00000004] + 0x00000004)[(dwArg04 & 0x0000001F) * 0x00000040] & 0x00000040;
	else
	{
		word32 edx_58;
		word32 ebx_59;
		word32 ebp_60;
		word32 esi_61;
		word32 edi_62;
		Mem64[fn0043D0A3(fp - 0x00000004, esi, es, ds, fs, gs, out edx_58, out ebx_59, out ebp_60, out esi_61, out edi_62):word32] = 0x00000009;
		word32 edx_65;
		word32 ebx_66;
		word32 ebp_67;
		fn004417A9(es, ds, fs, gs, out edx_65, out ebx_66, out ebp_67);
		goto l00448851;
	}
}

void fn0044888F()
{
	return;
}

word32 fn00448A44(word32 esi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 edxOut, ptr32 ebxOut, ptr32 esiOut)
{
	*esiOut = esi;
	*edxOut = edx;
	*ebxOut = ebx;
	if (dwArg04 == 0x00000000)
	{
		word32 edx_30;
		word32 ebx_31;
		word32 ebp_32;
		word32 esi_33;
		word32 edi_34;
		Mem36[fn0043D0A3(fp - 0x00000004, esi, es, ds, fs, gs, out edx_30, out ebx_31, out ebp_32, out esi_33, out edi_34):word32] = 0x00000016;
		word32 edx_37;
		word32 ebx_38;
		word32 ebp_39;
		fn004417A9(es, ds, fs, gs, out edx_37, out ebx_38, out ebp_39);
		return 0xFFFFFFFF;
	}
	else
		return Mem0[dwArg04 + 0x00000010:word32];
}

word32 fn00448A6A(word32 edx, word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg08, ptr32 axOut)
{
	word32 eax_208;
	word32 esi_110 = dwArg08;
	word32 esp_105 = fp - 0x00000020;
	if ((Mem0[dwArg08 + 0x0000000C:byte] & 0x40) == 0x00)
	{
		word32 eax_123;
		esp_105 = fp - 0x00000020;
		word32 ebx_114 = 0x004DEFD0;
		word32 ebx_109;
		if (fn00448A44(dwArg08, es, ds, fs, gs, dwArg08, out edx, out ebx_109, out esi_110) != 0xFFFFFFFF)
		{
			Mem385[fp - 0x00000024:word32] = esi_110;
			esp_105 = fp - 0x00000020;
			if (fn00448A44(esi_110, es, ds, fs, gs, dwArg00, out edx, out ebx_114, out esi_110) != 0xFFFFFFFE)
			{
				Mem395[fp - 0x00000024:word32] = esi_110;
				word32 edx_396;
				word32 ebx_397;
				word32 esi_398;
				word32 eax_399 = fn00448A44(esi_110, es, ds, fs, gs, dwArg00, out edx_396, out ebx_397, out esi_398);
				Mem403[fp - 0x00000028:word32] = esi_398;
				word32 ebx_406;
				eax_123 = ((fn00448A44(esi_398, es, ds, fs, gs, dwArg00, out edx, out ebx_406, out esi_110) & 0x0000001F) << 0x00000006) + 0x004F34E0[(eax_399 >> 0x00000005) * 0x00000004];
				esp_105 = fp - 0x00000020;
			}
			else
			{
l00448ACB:
				eax_123 = ebx_114;
			}
		}
		else
			goto l00448ACB;
		if ((Mem0[eax_123 + 0x00000024:byte] & 0x7F) != 0x02)
		{
			word32 eax_146;
			word32 esp_130 = esp_105 - 0x00000004;
			Mem131[esp_130 + 0x00000000:word32] = esi_110;
			esp_105 = esp_130 + 0x00000004;
			word32 ebx_134;
			if (fn00448A44(esi_110, es, ds, fs, gs, dwArg00, out edx, out ebx_134, out esi_110) != 0xFFFFFFFF)
			{
				Mem340[esp_130 + 0x00000000:word32] = esi_110;
				esp_105 = esp_130 + 0x00000004;
				if (fn00448A44(esi_110, es, ds, fs, gs, dwArg00, out edx, out ebx_134, out esi_110) != 0xFFFFFFFE)
				{
					Mem350[esp_130 + 0x00000000:word32] = esi_110;
					word32 edx_351;
					word32 ebx_352;
					word32 esi_353;
					word32 eax_354 = fn00448A44(esi_110, es, ds, fs, gs, dwArg00, out edx_351, out ebx_352, out esi_353);
					Mem358[esp_130 - 0x00000004:word32] = esi_353;
					word32 ebx_361;
					eax_146 = ((fn00448A44(esi_353, es, ds, fs, gs, dwArg00, out edx, out ebx_361, out esi_110) & 0x0000001F) << 0x00000006) + 0x004F34E0[(eax_354 >> 0x00000005) * 0x00000004];
					esp_105 = esp_130 + 0x00000004;
				}
				else
				{
l00448B14:
					eax_146 = ebx_134;
				}
			}
			else
				goto l00448B14;
			if ((Mem131[eax_146 + 0x00000024:byte] & 0x7F) != 0x01)
			{
				word32 eax_169;
				word32 esp_153 = esp_105 - 0x00000004;
				Mem154[esp_153 + 0x00000000:word32] = esi_110;
				esp_105 = esp_153 + 0x00000004;
				word32 ebx_156;
				if (fn00448A44(esi_110, es, ds, fs, gs, dwArg00, out edx, out ebx_156, out esi_110) != 0xFFFFFFFF)
				{
					Mem295[esp_153 + 0x00000000:word32] = esi_110;
					esp_105 = esp_153 + 0x00000004;
					if (fn00448A44(esi_110, es, ds, fs, gs, dwArg00, out edx, out ebx_156, out esi_110) != 0xFFFFFFFE)
					{
						Mem305[esp_153 + 0x00000000:word32] = esi_110;
						word32 edx_306;
						word32 ebx_307;
						word32 esi_308;
						word32 eax_309 = fn00448A44(esi_110, es, ds, fs, gs, dwArg00, out edx_306, out ebx_307, out esi_308);
						Mem313[esp_153 - 0x00000004:word32] = esi_308;
						word32 ebx_316;
						eax_169 = ((fn00448A44(esi_308, es, ds, fs, gs, dwArg00, out edx, out ebx_316, out esi_110) & 0x0000001F) << 0x00000006) + 0x004F34E0[(eax_309 >> 0x00000005) * 0x00000004];
						esp_105 = esp_153 + 0x00000004;
					}
					else
					{
l00448B5D:
						eax_169 = ebx_156;
					}
				}
				else
					goto l00448B5D;
				if ((Mem154[eax_169 + 0x00000004:byte] & 0x80) != 0x00)
				{
					word32 esp_176 = esp_105 - 0x00000004;
					Mem177[esp_176 + 0x00000000:word32] = Mem154[fp + 0x00000004:word32];
					Mem180[esp_176 - 0x00000004:word32] = 0x00000005;
					Mem182[esp_176 - 0x00000008:word32] = fp - 0x00000010;
					Mem185[esp_176 - 0x0000000C:word32] = fp - 0x00000014;
					word32 esi_188;
					word32 eax_189 = fn00449644(es, ds, fs, gs, dwArg00, dwArg04, dwArg08, dwArg0C, out edx, out esi_188);
					esp_105 = esp_176 + 0x00000004;
					if (eax_189 != 0x00000000)
					{
l00448B7E:
						eax_208 = 0x0000FFFF;
					}
					else
					{
						word32 edi_211 = 0x00000000;
						if (Mem185[fp - 0x00000014:word32] > 0x00000000)
						{
l00448B8C:
							do
							{
								word32 v18_242 = Mem185[esi_188 + 0x00000004:word32] - 0x00000001;
								Mem243[esi_188 + 0x00000004:word32] = v18_242;
								if (v18_242 >= 0x00000000)
								{
									Mem262[Mem243[esi_188 + 0x00000000:word32]:byte] = Mem243[fp - 0x00000010 + edi_211:byte];
									word32 ecx_263 = Mem262[esi_188 + 0x00000000:word32];
									eax_189 = (word32) Mem262[ecx_263 + 0x00000000:byte];
									Mem269[esi_188 + 0x00000000:word32] = ecx_263 + 0x00000001;
								}
								else
								{
									word32 eax_270 = (int32) Mem243[fp - 0x00000010 + edi_211:byte];
									word32 esp_271 = esp_105 - 0x00000004;
									Mem272[esp_271 + 0x00000000:word32] = esi_188;
									Mem274[esp_271 - 0x00000004:word32] = eax_270;
									byte bl_276;
									eax_189 = fn0044085D(fp - 0x00000004, es, ds, fs, gs, dwArg04, out edx, out bl_276);
									esp_105 = esp_271 + 0x00000004;
								}
								if (eax_189 == 0xFFFFFFFF)
									goto l00448B7E;
								edi_211 = edi_211 + 0x00000001;
							} while (edi_211 < Mem243[fp - 0x00000014:word32]);
l00448BBC:
							eax_208 = DPB(eax_189, Mem185[fp + 0x00000004:word16], 0, 16);
						}
						else
							goto l00448BBC;
					}
				}
				else
				{
l00448BC2:
					word32 v13_78 = Mem0[esi_110 + 0x00000004:word32] + 0xFFFFFFFE;
					Mem79[esi_110 + 0x00000004:word32] = v13_78;
					if (v13_78 >= 0x00000000)
					{
						eax_208 = Mem79[fp + 0x00000004:word32];
						Mem86[Mem79[esi_110 + 0x00000000:word32]:word16] = (word16) eax_208;
						Mem88[esi_110 + 0x00000000:word32] = Mem86[esi_110 + 0x00000000:word32] + 0x00000002;
					}
					else
					{
						word32 eax_92 = (word32) Mem79[fp + 0x00000004:word16];
						word32 esp_93 = esp_105 - 0x00000004;
						Mem94[esp_93 + 0x00000000:word32] = esi_110;
						Mem96[esp_93 - 0x00000004:word32] = eax_92;
						eax_208 = fn0044C27B(fp - 0x00000004, es, ds, fs, gs, dwArg04, out edx);
						esp_105 = esp_93 + 0x00000004;
					}
				}
			}
			else
				goto l00448BC2;
		}
		else
			goto l00448BC2;
	}
	else
		goto l00448BC2;
	word32 esp_44 = esp_105 + 0x00000004;
	word32 ecx_56;
	word16 ax_58;
	*axOut = (word16) fn004394A0(eax_208, Mem0[fp - 0x00000008:word32] ^ fp - 0x00000004, edx, Mem0[esp_44 + 0x00000004:word32], fp - 0x00000004, Mem0[esp_44 + 0x00000000:word32], Mem0[esp_105 + 0x00000000:word32], es, ds, fs, gs, ebp, out ecx_56);
	return edx;
}

word32 fn00448C07(word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, ptr32 edxOut)
{
	*edxOut = edx;
	word32 eax_102;
	if (dwArg08 == 0x00000000 || dwArg0C == 0x00000000)
		goto l00448C2F;
	else if (Mem0[dwArg08 + 0x00000000:byte] == 0x00)
	{
		if (dwArg04 != 0x00000000)
			Mem72[dwArg04 + 0x00000000:word16] = 0x0000;
l00448C2F:
		eax_102 = 0x00000000;
	}
	else
	{
		word32 ebx_81;
		word32 edx_82;
		*edxOut = fn0043A7F1(fp - 0x00000014, es, ds, fs, gs, dwArg10, out ebx_81);
		if (Mem0[Mem0[fp - 0x00000014:word32] + 0x00000014:word32] == ebx_81)
		{
			word32 eax_110 = Mem0[fp + 0x00000004:word32];
			if (eax_110 != ebx_81)
				Mem118[eax_110 + 0x00000000:word16] = (word16) (word32) Mem0[dwArg08 + 0x00000000:byte];
l00448C55:
			if (Mem0[fp - 0x00000008:byte] != 0x00)
			{
				word32 eax_105 = Mem0[fp - 0x0000000C:word32];
				Mem107[eax_105 + 0x00000070:word32] = Mem0[eax_105 + 0x00000070:word32] & 0xFFFFFFFD;
			}
			eax_102 = 0x00000001;
		}
		else
		{
			Mem121[fp - 0x00000020:word32] = fp - 0x00000014;
			Mem124[fp - 0x00000024:word32] = (word32) Mem121[dwArg08 + 0x00000000:byte];
			word32 edx_125;
			word32 ebx_126;
			word32 esi_127;
			if (fn0043B7CE(es, ds, fs, gs, dwArg04, out edx_125, out ebx_126, out esi_127) != 0x00000000)
			{
				word32 eax_164 = Mem124[fp - 0x00000014:word32];
				word32 ecx_166 = Mem124[eax_164 + 0x000000AC:word32];
				if (ecx_166 > 0x00000001 && Mem124[fp + 0x0000000C:word32] >= ecx_166)
				{
					word32 edx_206 = (word32) (Mem124[fp + 0x00000004:word32] != ebx_126);
					*edxOut = edx_206;
					Mem208[fp - 0x00000020:word32] = edx_206;
					Mem210[fp - 0x00000024:word32] = Mem208[fp + 0x00000004:word32];
					Mem212[fp - 0x00000028:word32] = ecx_166;
					Mem214[fp - 0x0000002C:word32] = esi_127;
					Mem216[fp - 0x00000030:word32] = 0x00000009;
					Mem218[fp - 0x00000034:word32] = Mem216[eax_164 + 0x00000004:word32];
					word32 eax_219 = MultiByteToWideChar(Mem218[fp - 0x00000034:UINT], Mem218[fp - 48:DWORD], Mem218[fp - 44:LPCSTR], Mem218[fp - 40:int32], Mem218[fp - 36:LPWSTR], Mem218[fp - 32:int32]);
					eax_164 = Mem218[fp - 0x00000014:word32];
					if (eax_219 == 0x00000000)
					{
l00448CAC:
						if (Mem124[fp + 0x0000000C:word32] >=u Mem124[eax_164 + 0x000000AC:word32] && Mem124[esi_127 + 0x00000001:byte] != 0x00)
						{
l00448CBC:
							eax_102 = Mem124[eax_164 + 0x000000AC:word32];
							if (Mem124[fp - 0x00000008:byte] != 0x00)
							{
								word32 ecx_182 = Mem124[fp - 0x0000000C:word32];
								Mem184[ecx_182 + 0x00000070:word32] = Mem124[ecx_182 + 0x00000070:word32] & 0xFFFFFFFD;
							}
						}
						else
						{
l00448CD7:
							word32 edx_143;
							word32 ebx_144;
							word32 ebp_145;
							word32 esi_146;
							word32 edi_147;
							word32 eax_148 = fn0043D0A3(fp - 0x00000004, esi_127, es, ds, fs, gs, out edx_143, out ebx_144, out ebp_145, out esi_146, out edi_147);
							Mem150[eax_148 + 0x00000000:word32] = 0x0000002A;
							if (Mem150[ebp_145 - 0x00000004:byte] != 0x00)
							{
								eax_148 = Mem150[ebp_145 - 0x00000008:word32];
								Mem161[eax_148 + 0x00000070:word32] = Mem150[eax_148 + 0x00000070:word32] & 0xFFFFFFFD;
							}
							eax_102 = eax_148 | 0xFFFFFFFF;
						}
					}
					else
						goto l00448CBC;
				}
				else
					goto l00448CAC;
			}
			else
			{
				Mem232[fp - 0x00000020:word32] = (word32) (Mem124[fp + 0x00000004:word32] != ebx_126);
				Mem234[fp - 0x00000024:word32] = Mem232[fp + 0x00000004:word32];
				word32 eax_235 = Mem234[fp - 0x00000014:word32];
				Mem237[fp - 0x00000028:word32] = 0x00000001;
				Mem239[fp - 0x0000002C:word32] = esi_127;
				Mem241[fp - 0x00000030:word32] = 0x00000009;
				Mem243[fp - 0x00000034:word32] = Mem241[eax_235 + 0x00000004:word32];
				if (MultiByteToWideChar(Mem243[fp - 0x00000034:UINT], Mem243[fp - 48:DWORD], Mem243[fp - 44:LPCSTR], Mem243[fp - 40:int32], Mem243[fp - 36:LPWSTR], Mem243[fp - 32:int32]) == 0x00000000)
					goto l00448CD7;
				else
					goto l00448C55;
			}
		}
	}
	return eax_102;
}

word32 fn00448D1D(selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg08, word32 dwArg0C, ptr32 edxOut, ptr32 ebxOut, ptr32 esiOut)
{
	*ebxOut = ebx;
	*esiOut = esi;
	word32 edx_23;
	return fn00448C07(fp - 0x00000004, es, ds, fs, gs, dwArg04, dwArg08, dwArg0C, 0x00000000, out edx_23);
}

void fn00448E92(word32 dwArg04)
{
	Mem10[0x004EF0E8:word32] = dwArg04;
	return;
}

word32 fn00448EB0(word32 dwArg04)
{
	if (Mem0[dwArg04 + 0x00000000:word16] != 0x5A4D)
	{
l00448EC2:
		return 0x00000000;
	}
	else
	{
		word32 eax_39 = Mem0[dwArg04 + 0x0000003C:word32] + dwArg04;
		if (Mem0[eax_39 + 0x00000000:word32] == 0x00004550)
			return (word32) (Mem0[eax_39 + 0x00000018:word16] == 0x010B);
		else
			goto l00448EC2;
	}
}

word32 fn00448EF0(word32 dwArg04, word32 dwArg08)
{
	word32 ecx_12 = Mem0[dwArg04 + 0x0000003C:word32] + dwArg04;
	word32 esi_20 = (word32) Mem0[ecx_12 + 0x00000006:word16];
	word32 edx_21 = 0x00000000;
	word32 eax_24 = (word32) Mem0[ecx_12 + 0x00000014:word16] + 0x00000018 + ecx_12 + 0x0000000C;
	if (esi_20 != 0x00000000)
	{
		do
		{
			word32 ecx_56 = Mem0[eax_24 + 0x00000000:word32];
			if (dwArg08 >=u ecx_56 && dwArg08 <u Mem0[eax_24 + 0x00000008:word32] + ecx_56)
				goto l00448F2F;
			edx_21 = edx_21 + 0x00000001;
			eax_24 = eax_24 + 0x00000028;
		} while (edx_21 <u esi_20);
l00448F2D:
		eax_24 = 0x00000000;
	}
	else
		goto l00448F2D;
	return eax_24;
}

word32 fn00448F40(selector fs, word32 dwArg04)
{
	word32 eax_16 = Mem0[fs:0x00000000:word32];
	Mem38[fs:0x00000000:word32] = fp - 0x00000014;
	if (fn00448EB0(0x00400000) != 0x00000000)
	{
		Mem86[fp - 0x00000030:word32] = dwArg04 - 0x00400000;
		word32 eax_89 = fn00448EF0(0x00400000, 0x00400000);
		if (eax_89 != 0x00000000)
		{
			word32 eax_96 = ~(Mem86[eax_89 + 0x00000024:word32] >>u 0x0000001F);
			Mem100[fp - 0x00000008:word32] = 0xFFFFFFFE;
			Mem102[fs:0x00000000:word32] = eax_16;
			return eax_96 & 0x00000001;
		}
		else
		{
l00448FE1:
			Mem65[fp - 0x00000008:word32] = 0xFFFFFFFE;
			Mem70[fs:0x00000000:word32] = eax_16;
			return 0x00000000;
		}
	}
	else
		goto l00448FE1;
}

word32 fn00448FFC(word32 edx, word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	word32 esp_122;
	word32 eax_101;
	word32 eax_11 = Mem0[0x004DEBE0:word32] ^ fp - 0x00000004;
	word32 ebp_54 = fp - 0x00000004;
	word32 esp_100 = fp - 0x00000034;
	word32 eax_29 = fn00442E9B();
	word32 dwLoc18_119 = dwLoc18 & 0x00000000;
	if (Mem0[0x004EF0EC:word32] == 0x00000000)
	{
		word32 eax_243 = LoadLibraryW(0x004C0FB0);
		esp_122 = fp - 0x00000034;
		if (eax_243 != 0x00000000)
		{
			Mem252[fp - 0x00000038:word32] = 0x004C0FA4;
			word32 eax_255 = GetProcAddress(eax_243, 0x004C0FB0);
			esp_122 = fp - 0x00000034;
			if (eax_255 != 0x00000000)
			{
				Mem262[fp - 0x00000038:word32] = eax_255;
				word32 eax_263 = EncodePointer(0x004C0FA4);
				Mem266[fp - 0x00000038:word32] = 0x004C0F94;
				Mem269[0x004EF0EC:word32] = eax_263;
				Mem273[fp - 0x00000038:word32] = GetProcAddress(eax_243, 0x004C0FA4);
				word32 eax_274 = EncodePointer(0x004C0FA4);
				Mem277[fp - 0x00000038:word32] = 0x004C0F80;
				Mem280[0x004EF0F0:word32] = eax_274;
				Mem284[fp - 0x00000038:word32] = GetProcAddress(eax_243, 0x004C0FA4);
				word32 eax_285 = EncodePointer(0x004C0FA4);
				Mem288[fp - 0x00000038:word32] = 0x004C0F64;
				Mem291[0x004EF0F4:word32] = eax_285;
				Mem295[fp - 0x00000038:word32] = GetProcAddress(eax_243, 0x004C0FA4);
				word32 eax_296 = EncodePointer(0x004C0FA4);
				Mem298[0x004EF0FC:word32] = eax_296;
				esp_100 = fp - 0x00000034;
				if (eax_296 != 0x00000000)
				{
					Mem312[0x004EF0F8:word32] = EncodePointer(GetProcAddress(eax_243, 0x004C0F4C));
					esp_100 = fp - 0x00000034;
				}
l004490AF:
				eax_101 = Mem0[0x004EF0F8:word32];
				word32 esi_103 = DecodePointer;
				esi_147 = esi_103;
				if (eax_101 != eax_29)
				{
					esi_147 = esi_103;
					if (Mem0[0x004EF0FC:word32] != eax_29)
					{
						word32 eax_182 = DecodePointer(eax_101);
						word32 eax_187 = DecodePointer(Mem0[0x004EF0FC:word32]);
						esp_100 = fp - 0x00000034;
						esi_147 = esi_103;
						if (eax_182 != 0x00000000)
						{
							esi_147 = esi_103;
							if (eax_187 != 0x00000000)
							{
								eax_182();
								if (eax_187 != 0x00000000)
								{
									esp_100 = fp - 0x00000048;
									eax_187();
									if (eax_187 != 0x00000000)
									{
										esi_147 = esi_103;
										if ((bLoc0C & 0x01) == 0x00)
										{
l004490FF:
											dwArg0C = dwArg0C | 0x00200000;
										}
										else
										{
l00449108:
											word32 esi_147;
											word32 eax_154 = Mem0[0x004EF0F0:word32];
											if (eax_154 != eax_29)
											{
												esp_100 = esp_100 - 0x00000004;
												Mem159[esp_100 + 0x00000000:word32] = eax_154;
												esi_147();
												if (eax_154 != 0x00000000)
												{
													eax_154();
													dwLoc18_119 = eax_154;
													if (eax_154 != 0x00000000)
													{
														word32 eax_167 = Mem159[0x004EF0F4:word32];
														if (eax_167 != eax_29)
														{
															Mem171[esp_100 - 0x00000004:word32] = eax_167;
															esp_100 = esp_100 - 0x00000004;
															esi_147();
															if (eax_167 != 0x00000000)
															{
																Mem176[esp_100 - 0x00000008:word32] = eax_154;
																esp_100 = esp_100 - 0x00000008;
																eax_167();
																dwLoc18_119 = eax_167;
															}
														}
													}
												}
											}
										}
									}
									else
										goto l004490FF;
								}
								else
									goto l004490FF;
							}
							else
								goto l00449108;
						}
						else
							goto l00449108;
					}
					else
						goto l00449108;
				}
				else
					goto l00449108;
				esp_122 = esp_100 - 0x00000004;
				Mem123[esp_122 + 0x00000000:word32] = Mem0[0x004EF0EC:word32];
				esi_103();
				if (eax_101 != 0x00000000)
				{
					Mem129[esp_122 - 0x00000004:word32] = dwArg0C;
					Mem131[esp_122 - 0x00000008:word32] = dwArg08;
					Mem133[esp_122 - 0x0000000C:word32] = dwArg04;
					Mem135[esp_122 - 0x00000010:word32] = dwLoc18_119;
					esp_122 = esp_122 - 0x00000010;
					eax_101();
				}
				else
				{
l00449157:
					eax_101 = 0x00000000;
				}
			}
			else
				goto l00449157;
		}
		else
			goto l00449157;
	}
	else
		goto l004490AF;
	word32 esp_58 = esp_122 + 0x00000004;
	word32 ecx_66;
	return fn004394A0(eax_101, eax_11 ^ fp - 0x00000004, edx, Mem0[esp_58 + 0x00000004:word32], ebp_54, Mem0[esp_58 + 0x00000000:word32], Mem0[esp_122 + 0x00000000:word32], es, ds, fs, gs, ebp, out ecx_66);
}

word32 fn00449168(selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg08, word32 dwArg0C, ptr32 edxOut)
{
	word32 esi_136;
	word32 eax_118;
	if (dwArg04 != 0x00000000)
	{
		word32 edi_102 = dwArg08;
		if (dwArg08 == 0x00000000)
		{
l0044917D:
			word32 edx_63;
			word32 ebx_64;
			word32 ebp_65;
			word32 esi_66;
			word32 edi_67;
			word32 eax_68 = fn0043D0A3(fp - 0x00000004, dwArg04, es, ds, fs, gs, out edx_63, out ebx_64, out ebp_65, out esi_66, out edi_67);
			Mem70[fp - 0x00000010:word32] = 0x00000016;
			esi_136 = Mem70[fp - 0x00000010:word32];
			Mem73[eax_68 + 0x00000000:word32] = esi_136;
l00449187:
			word32 edx_51;
			word32 ebx_52;
			word32 ebp_53;
			fn004417A9(es, ds, fs, gs, out edx_51, out ebx_52, out ebp_53);
			eax_118 = esi_136;
		}
		else
		{
			word32 ecx_108 = dwArg0C;
			if (dwArg0C == 0x00000000)
			{
l00449199:
				Mem93[dwArg04 + 0x00000000:word16] = 0x0000;
				goto l0044917D;
			}
			else
			{
				word32 edx_101 = dwArg04;
				do
				{
					if (Mem0[edx_101 + 0x00000000:word16] == 0x0000)
						break;
					edx_101 = edx_101 + 0x00000002;
					edi_102 = edi_102 - 0x00000001;
				} while (edi_102 != 0x00000000);
				if (edi_102 != 0x00000000)
				{
					word32 edx_106 = edx_101 - dwArg0C;
					*edxOut = edx_106;
					do
					{
						word16 ax_111 = (word16) (word32) Mem0[ecx_108 + 0x00000000:word16];
						Mem112[edx_106 + ecx_108:word16] = ax_111;
						ecx_108 = ecx_108 + 0x00000002;
						if (ax_111 == 0x0000)
							break;
						edi_102 = edi_102 - 0x00000001;
					} while (edi_102 != 0x00000000);
					eax_118 = 0x00000000;
					if (edi_102 == 0x00000000)
					{
						Mem124[dwArg04 + 0x00000000:word16] = 0x0000;
						word32 edx_125;
						word32 ebx_126;
						word32 ebp_127;
						word32 esi_128;
						word32 edi_129;
						word32 eax_130 = fn0043D0A3(fp - 0x00000004, dwArg04, es, ds, fs, gs, out edx_125, out ebx_126, out ebp_127, out esi_128, out edi_129);
						Mem132[fp - 0x00000010:word32] = 0x00000022;
						word32 ecx_133 = Mem132[fp - 0x00000010:word32];
						Mem135[eax_130 + 0x00000000:word32] = ecx_133;
						esi_136 = ecx_133;
						goto l00449187;
					}
				}
				else
					goto l00449199;
			}
		}
	}
	else
		goto l0044917D;
	return eax_118;
}

word32 fn004491DD(word32 esi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10)
{
	word32 esi_158;
	word32 eax_143;
	word32 ebx_131 = dwArg10;
	if (dwArg10 != 0x00000000)
		if (dwArg04 != 0x00000000)
			goto l00449203;
		else
			goto l0044920A;
	else if (dwArg04 != 0x00000000)
	{
l00449203:
		word32 edi_129 = dwArg08;
		if (dwArg08 == 0x00000000)
			goto l0044920A;
		else if (dwArg10 == 0x00000000)
		{
			Mem108[dwArg04 + 0x00000000:word16] = 0x0000;
			goto l004491F8;
		}
		else
		{
			word32 ecx_110 = dwArg0C;
			if (dwArg0C == 0x00000000)
			{
				Mem119[dwArg04 + 0x00000000:word16] = 0x0000;
				goto l0044920A;
			}
			else
			{
				word32 esi_130;
				word32 eax_120 = dwArg04;
				if (dwArg10 == 0xFFFFFFFF)
				{
					esi_130 = dwArg04 - dwArg0C;
					do
					{
						word16 ax_165 = (word16) (word32) Mem0[ecx_110 + 0x00000000:word16];
						Mem166[esi_130 + ecx_110:word16] = ax_165;
						ecx_110 = ecx_110 + 0x00000002;
						if (ax_165 == 0x0000)
							goto l00449277;
						edi_129 = edi_129 - 0x00000001;
					} while (edi_129 != 0x00000000);
				}
				else
				{
					esi_130 = dwArg0C - dwArg04;
					do
					{
						word16 cx_182 = (word16) (word32) Mem0[esi_130 + eax_120:word16];
						Mem183[eax_120 + 0x00000000:word16] = cx_182;
						eax_120 = eax_120 + 0x00000002;
						if (cx_182 == 0x0000)
							break;
						edi_129 = edi_129 - 0x00000001;
						if (edi_129 == 0x00000000)
							;
						ebx_131 = ebx_131 - 0x00000001;
					} while (ebx_131 != 0x00000000);
					if (ebx_131 == 0x00000000)
						Mem198[eax_120 + 0x00000000:word16] = 0x0000;
				}
				if (edi_129 != 0x00000000)
					goto l004491F8;
				else if (ebx_131 == 0xFFFFFFFF)
				{
					(dwArg04 - 0x00000002)[dwArg08 * 0x0002] = 0x0000;
					eax_143 = 0x00000050;
				}
				else
				{
					Mem146[dwArg04 + 0x00000000:word16] = 0x0000;
					word32 edx_147;
					word32 ebx_148;
					word32 ebp_149;
					word32 esi_150;
					word32 edi_151;
					word32 eax_152 = fn0043D0A3(fp - 0x00000004, esi_130, es, ds, fs, gs, out edx_147, out ebx_148, out ebp_149, out esi_150, out edi_151);
					Mem154[fp - 0x00000014:word32] = 0x00000022;
					word32 ecx_155 = Mem154[fp - 0x00000014:word32];
					Mem157[eax_152 + 0x00000000:word32] = ecx_155;
					esi_158 = ecx_155;
					goto l00449214;
				}
			}
		}
	}
	else if (dwArg08 == dwArg04)
	{
l004491F8:
		eax_143 = 0x00000000;
	}
	else
	{
l0044920A:
		word32 edx_81;
		word32 ebx_82;
		word32 ebp_83;
		word32 esi_84;
		word32 edi_85;
		word32 eax_86 = fn0043D0A3(fp - 0x00000004, esi, es, ds, fs, gs, out edx_81, out ebx_82, out ebp_83, out esi_84, out edi_85);
		Mem88[fp - 0x00000014:word32] = 0x00000016;
		esi_158 = Mem88[fp - 0x00000014:word32];
		Mem91[eax_86 + 0x00000000:word32] = esi_158;
l00449214:
		word32 edx_68;
		word32 ebx_69;
		word32 ebp_70;
		fn004417A9(es, ds, fs, gs, out edx_68, out ebx_69, out ebp_70);
		eax_143 = esi_158;
	}
	return eax_143;
}

word32 fn004492AA(selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg08, word32 dwArg0C, ptr32 ebxOut)
{
	*ebxOut = ebx;
	word32 esi_119;
	word32 eax_101;
	if (dwArg04 != 0x00000000)
	{
		word32 edi_100 = dwArg08;
		if (dwArg08 == 0x00000000)
		{
l004492BF:
			word32 edx_61;
			word32 ebx_62;
			word32 ebp_63;
			word32 esi_64;
			word32 edi_65;
			word32 eax_66 = fn0043D0A3(fp - 0x00000004, dwArg04, es, ds, fs, gs, out edx_61, out ebx_62, out ebp_63, out esi_64, out edi_65);
			Mem68[fp - 0x00000010:word32] = 0x00000016;
			esi_119 = Mem68[fp - 0x00000010:word32];
			Mem71[eax_66 + 0x00000000:word32] = esi_119;
l004492C9:
			word32 edx_51;
			word32 ebx_52;
			word32 ebp_53;
			fn004417A9(es, ds, fs, gs, out edx_51, out ebx_52, out ebp_53);
			eax_101 = esi_119;
		}
		else
		{
			word32 eax_81 = dwArg0C;
			word16 ax_82 = (word16) dwArg0C;
			if (dwArg0C == 0x00000000)
			{
				Mem86[dwArg04 + 0x00000000:word16] = ax_82;
				goto l004492BF;
			}
			else
			{
				word32 edx_88 = dwArg04 - dwArg0C;
				do
				{
					word16 cx_93 = (word16) (word32) Mem0[eax_81 + 0x00000000:word16];
					Mem94[edx_88 + eax_81:word16] = cx_93;
					eax_81 = eax_81 + 0x00000002;
					if (cx_93 == 0x0000)
						break;
					edi_100 = edi_100 - 0x00000001;
				} while (edi_100 != 0x00000000);
				eax_101 = 0x00000000;
				if (edi_100 == 0x00000000)
				{
					Mem107[dwArg04 + 0x00000000:word16] = 0x0000;
					word32 edx_108;
					word32 ebx_109;
					word32 ebp_110;
					word32 esi_111;
					word32 edi_112;
					word32 eax_113 = fn0043D0A3(fp - 0x00000004, dwArg04, es, ds, fs, gs, out edx_108, out ebx_109, out ebp_110, out esi_111, out edi_112);
					Mem115[fp - 0x00000010:word32] = 0x00000022;
					word32 ecx_116 = Mem115[fp - 0x00000010:word32];
					Mem118[eax_113 + 0x00000000:word32] = ecx_116;
					esi_119 = ecx_116;
					goto l004492C9;
				}
			}
		}
	}
	else
		goto l004492BF;
	return eax_101;
}

word32 fn0044930D(word32 esi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 edxOut, ptr32 ebxOut, ptr32 esiOut)
{
	*esiOut = esi;
	*edxOut = edx;
	*ebxOut = ebx;
	if (dwArg04 < 0x00000000)
		goto l00449337;
	else if (dwArg04 <= 0x00000002)
	{
		word32 eax_62 = Mem0[0x004EE398:word32];
		Mem63[0x004EE398:word32] = dwArg04;
		return eax_62;
	}
	else if (dwArg04 == 0x00000003)
		return Mem0[0x004EE398:word32];
	else
	{
l00449337:
		word32 edx_36;
		word32 ebx_37;
		word32 ebp_38;
		word32 esi_39;
		word32 edi_40;
		Mem42[fn0043D0A3(fp - 0x00000004, esi, es, ds, fs, gs, out edx_36, out ebx_37, out ebp_38, out esi_39, out edi_40):word32] = 0x00000016;
		word32 edx_43;
		word32 ebx_44;
		word32 ebp_45;
		fn004417A9(es, ds, fs, gs, out edx_43, out ebx_44, out ebp_45);
		return 0xFFFFFFFF;
	}
}

word32 fn0044934F(word32 eax, word32 dwArg00, word16 wArg04, ptr32 ebpOut)
{
	*ebpOut = ebp;
	word32 eax_11 = DPB(eax, wArg04, 0, 16);
	if (wArg04 >=u 0x0030)
		if (wArg04 <u 0x003A)
		{
			word32 ebp_51;
			*ebpOut = ebp;
			return (word32) wArg04 - 0x00000030;
		}
		else
		{
			word16 dx_200;
			word32 ecx_107 = 0x0000FF10;
			if (wArg04 <u 0xFF10)
			{
				ecx_107 = 0x00000660;
				if (wArg04 >=u 0x0660)
					if (wArg04 <u 0x066A)
					{
l00449394:
						word32 ebp_67;
						*ebpOut = ebp;
						return (word32) wArg04 - ecx_107;
					}
					else
					{
						ecx_107 = 0x000006F0;
						if (wArg04 >=u 0x06F0)
							if (wArg04 >=u 0x06FA)
							{
								ecx_107 = 0x00000966;
								if (wArg04 >=u 0x0966)
									if (wArg04 >=u 0x0970)
									{
										ecx_107 = 0x000009E6;
										if (wArg04 >=u 0x09E6)
											if (wArg04 >=u 0x09F0)
											{
												ecx_107 = 0x00000A66;
												if (wArg04 >=u 0x0A66)
													if (wArg04 >=u 0x0A70)
													{
														ecx_107 = 0x00000AE6;
														if (wArg04 >=u 0x0AE6)
															if (wArg04 >=u 0x0AF0)
															{
																ecx_107 = 0x00000B66;
																if (wArg04 >=u 0x0B66)
																	if (wArg04 >=u 0x0B70)
																	{
																		ecx_107 = 0x00000C66;
																		if (wArg04 >=u 0x0C66)
																			if (wArg04 >=u 0x0C70)
																			{
																				ecx_107 = 0x00000CE6;
																				if (wArg04 >=u 0x0CE6)
																					if (wArg04 >=u 0x0CF0)
																					{
																						ecx_107 = 0x00000D66;
																						if (wArg04 >=u 0x0D66)
																							if (wArg04 >=u 0x0D70)
																							{
																								ecx_107 = 0x00000E50;
																								if (wArg04 >=u 0x0E50)
																									if (wArg04 >=u 0x0E5A)
																									{
																										ecx_107 = 0x00000ED0;
																										if (wArg04 >=u 0x0ED0)
																											if (wArg04 >=u 0x0EDA)
																											{
																												ecx_107 = 0x00000F20;
																												if (wArg04 >=u 0x0F20)
																													if (wArg04 >=u 0x0F2A)
																													{
																														ecx_107 = 0x00001040;
																														if (wArg04 >=u 0x1040)
																															if (wArg04 >=u 0x104A)
																															{
																																ecx_107 = 0x000017E0;
																																if (wArg04 >=u 0x17E0)
																																	if (wArg04 >=u 0x17EA)
																																	{
																																		ecx_107 = 0x00001810;
																																		if (wArg04 >=u 0x1810)
																																		{
																																			dx_200 = 0x181A;
l004494E1:
																																			if (wArg04 >=u dx_200)
l004494EA:
																																		}
																																	}
																															}
																													}
																											}
																									}
																							}
																					}
																			}
																	}
															}
													}
											}
									}
							}
					}
			}
		}
}

word32 fn004494EF(word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg14, ptr32 edxOut)
{
	*edxOut = edx;
	word32 eax_142;
	if (dwArg08 == 0x00000000 && dwArg0C >u 0x00000000)
	{
		if (dwArg04 != 0x00000000)
			Mem311[dwArg04 + 0x00000000:word32] = 0x00000000;
l00449513:
		eax_142 = 0x00000000;
	}
	else
	{
		if (dwArg04 != 0x00000000)
			Mem300[dwArg04 + 0x00000000:word32] = Mem0[dwArg04 + 0x00000000:word32] | 0xFFFFFFFF;
		word32 esi_105;
		if (dwArg0C >u 0x7FFFFFFF)
		{
			word32 edx_97;
			word32 ebx_98;
			word32 ebp_99;
			word32 esi_100;
			word32 edi_101;
			word32 eax_102 = fn0043D0A3(fp - 0x00000004, dwArg08, es, ds, fs, gs, out edx_97, out ebx_98, out ebp_99, out esi_100, out edi_101);
			Mem104[fp - 0x00000024:word32] = 0x00000016;
			esi_105 = Mem104[fp - 0x00000024:word32];
			Mem107[eax_102 + 0x00000000:word32] = esi_105;
			word32 edx_108;
			word32 ebx_109;
			word32 ebp_110;
			fn004417A9(es, ds, fs, gs, out edx_108, out ebx_109, out ebp_110);
l00449538:
			eax_142 = esi_105;
		}
		else
		{
			word32 ebx_118;
			word32 edx_119;
			*edxOut = fn0043A7F1(fp - 0x00000014, es, ds, fs, gs, dwArg14, out ebx_118);
			word32 esp_120 = fp - 0x00000020;
			word32 eax_121 = Mem0[fp - 0x00000014:word32];
			if (Mem0[eax_121 + 0x00000014:word32] == ebx_118)
			{
				word16 ax_215 = Mem0[fp + 0x00000010:word16];
				byte al_217 = (byte) ax_215;
				if (ax_215 >u 0x00FF)
				{
					if (dwArg08 != ebx_118 && dwArg0C >u ebx_118)
					{
						Mem226[fp - 0x00000024:word32] = dwArg0C;
						Mem228[fp - 0x00000028:word32] = ebx_118;
						Mem230[fp - 0x0000002C:word32] = dwArg08;
						word32 edx_232;
						word32 edi_233;
						fn004405E0(ebp, dwArg00, dwArg04, dwArg08, out edx_232, out edi_233);
					}
l00449574:
					word32 edx_129;
					word32 ebx_130;
					word32 ebp_131;
					word32 esi_132;
					word32 edi_133;
					Mem135[fn0043D0A3(fp - 0x00000004, dwArg08, es, ds, fs, gs, out edx_129, out ebx_130, out ebp_131, out esi_132, out edi_133):word32] = 0x0000002A;
					word32 edx_136;
					word32 ebx_137;
					word32 ebp_138;
					word32 esi_139;
					word32 edi_140;
					eax_142 = Mem135[fn0043D0A3(ebp_131, esi_132, es, ds, fs, gs, out edx_136, out ebx_137, out ebp_138, out esi_139, out edi_140):word32];
					if (Mem135[ebp_138 - 0x00000004:byte] != bl)
					{
						word32 ecx_148 = Mem135[ebp_138 - 0x00000008:word32];
						Mem150[ecx_148 + 0x00000070:word32] = Mem135[ecx_148 + 0x00000070:word32] & 0xFFFFFFFD;
					}
				}
				else if (dwArg08 == ebx_118)
					goto l004495C1;
				else if (dwArg0C <=u ebx_118)
				{
l0044959F:
					word32 edx_158;
					word32 ebx_159;
					word32 ebp_160;
					word32 esi_161;
					word32 edi_162;
					word32 eax_163 = fn0043D0A3(fp - 0x00000004, dwArg08, es, ds, fs, gs, out edx_158, out ebx_159, out ebp_160, out esi_161, out edi_162);
					word32 esp_164 = esp_120 - 0x00000004;
					Mem165[esp_164 + 0x00000000:word32] = 0x00000022;
					word32 esi_166 = Mem165[esp_164 + 0x00000000:word32];
					Mem168[eax_163 + 0x00000000:word32] = esi_166;
					word32 edx_169;
					word32 ebx_170;
					word32 ebp_171;
					fn004417A9(es, ds, fs, gs, out edx_169, out ebx_170, out ebp_171);
					if (Mem185[ebp_188 - 0x00000004:byte] != bl)
					{
						word32 eax_192 = Mem185[ebp_188 - 0x00000008:word32];
						Mem194[eax_192 + 0x00000070:word32] = Mem185[eax_192 + 0x00000070:word32] & 0xFFFFFFFD;
						word32 eax_196 = Mem194[ebp_188 - 0x00000008:word32];
						Mem198[eax_196 + 0x00000070:word32] = Mem194[eax_196 + 0x00000070:word32] & 0xFFFFFFFD;
					}
				}
				else
				{
					Mem248[dwArg08 + 0x00000000:byte] = al_217;
l004495C1:
					word32 eax_240 = Mem0[fp + 0x00000004:word32];
					if (eax_240 != ebx_118)
						Mem245[eax_240 + 0x00000000:word32] = 0x00000001;
l004495CE:
					if (Mem0[fp - 0x00000008:byte] != bl)
					{
						word32 eax_210 = Mem0[fp - 0x0000000C:word32];
						Mem212[eax_210 + 0x00000070:word32] = Mem0[eax_210 + 0x00000070:word32] & 0xFFFFFFFD;
					}
				}
			}
			else
			{
				Mem251[fp - 0x00000024:word32] = fp + 0x00000008;
				Mem253[fp - 0x00000028:word32] = ebx_118;
				Mem255[fp - 0x0000002C:word32] = dwArg0C;
				Mem257[fp - 0x00000030:word32] = dwArg08;
				Mem259[fp - 0x00000034:word32] = 0x00000001;
				Mem262[fp - 0x00000038:word32] = fp + 0x00000010;
				Mem264[fp - 0x0000003C:word32] = ebx_118;
				Mem265[fp + 0x00000008:word32] = ebx_118;
				Mem267[fp - 0x00000040:word32] = Mem265[eax_121 + 0x00000004:word32];
				word32 eax_268 = WideCharToMultiByte(Mem267[fp - 0x00000040:UINT], Mem267[fp - 60:DWORD], Mem267[fp - 56:LPCWSTR], Mem267[fp - 52:int32], Mem267[fp - 48:LPSTR], Mem267[fp - 44:int32], Mem267[fp - 40:LPCSTR], Mem267[fp - 36:LPBOOL]);
				esp_120 = fp - 0x00000020;
				if (eax_268 == ebx_118)
					if (GetLastError() == 0x0000007A)
						if (dwArg08 != ebx_118 && dwArg0C >u ebx_118)
						{
							Mem289[fp - 0x00000024:word32] = dwArg0C;
							Mem291[fp - 0x00000028:word32] = ebx_118;
							Mem293[fp - 0x0000002C:word32] = dwArg08;
							word32 edx_294;
							word32 edi_295;
							fn004405E0(ebp, dwArg00, dwArg04, dwArg08, out edx_294, out edi_295);
							esp_120 = fp - 0x00000020;
						}
					else
						goto l00449574;
				else if (Mem267[fp + 0x00000008:word32] == ebx_118)
				{
					word32 ecx_276 = Mem267[fp + 0x00000004:word32];
					if (ecx_276 != ebx_118)
						Mem280[ecx_276 + 0x00000000:word32] = eax_268;
				}
				else
					goto l00449574;
			}
		}
	}
	return eax_142;
}

word32 fn00449644(selector es, selector ds, selector fs, selector gs, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, ptr32 edxOut, ptr32 esiOut)
{
	*esiOut = esi;
	word32 edx_26;
	return fn004494EF(fp - 0x00000004, es, ds, fs, gs, dwArg04, dwArg08, dwArg0C, 0x00000000, out edx_26);
}

word32 fn0044A43E(selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 edxOut, ptr32 esiOut, ptr32 blOut)
{
	*esiOut = esi;
	*blOut = bl;
	word32 eax_29;
	word32 ebx_18;
	word32 edx_19 = fn0043A7F1(fp - 0x00000014, es, ds, fs, gs, dwArg04, out ebx_18);
	byte dl_24 = Mem0[fp + 0x00000010:byte];
	word32 eax_22 = (word32) Mem0[fp + 0x00000008:byte];
	word32 edx_25;
	*edxOut = DPB(edx_19, dl_24, 0, 8);
	if ((Mem0[Mem0[fp - 0x00000010:word32] + 0x0000001D + eax_22:byte] & dl_24) != 0x00)
		goto l0044A47F;
	else
	{
		if (Mem0[fp + 0x0000000C:word32] != 0x00000000)
			eax_29 = (word32) Mem0[Mem0[fp - 0x00000014:word32] + 0x000000C8:word32][eax_22 * 0x0002] & Mem0[fp + 0x0000000C:word32];
		else
			eax_29 = 0x00000000;
		if (eax_29 != 0x00000000)
		{
l0044A47F:
			eax_29 = 0x00000001;
		}
	}
	if (Mem0[fp - 0x00000008:byte] != 0x00)
	{
		word32 ecx_46 = Mem0[fp - 0x0000000C:word32];
		Mem48[ecx_46 + 0x00000070:word32] = Mem0[ecx_46 + 0x00000070:word32] & 0xFFFFFFFD;
	}
	return eax_29;
}

word32 fn0044A491(selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 edxOut, ptr32 esiOut, ptr32 blOut)
{
	word32 edx_21;
	word32 esi_22;
	byte bl_23;
	return fn0044A43E(es, ds, fs, gs, 0x00000000, out edx_21, out esi_22, out bl_23);
}

word32 fn0044A550(word32 eax, word32 dwArg00)
{
	word32 ecx_7 = fp - eax;
	word32 ecx_12 = ecx_7 & ~(0x00000000 - (ecx_7 <u 0x00000000));
	word32 eax_14 = fp - 0x00000004 & 0xFFFFF000;
	while (ecx_12 <u eax_14)
		eax_14 = eax_14 - 0x00001000;
	Mem29[ecx_12 + 0x00000000:word32] = dwArg00;
	return dwArg00;
}

word32 fn0044BEDB(word32 esi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 esiOut)
{
	*esiOut = esi;
	word32 eax_34;
	if (dwArg04 == 0xFFFFFFFE)
	{
		word32 edx_46;
		word32 ebx_47;
		word32 ebp_48;
		word32 esi_49;
		word32 edi_50;
		word32 eax_51 = fn0043D0B6(fp - 0x00000004, esi, es, ds, fs, gs, out edx_46, out ebx_47, out ebp_48, out esi_49, out edi_50);
		Mem53[eax_51 + 0x00000000:word32] = Mem0[eax_51 + 0x00000000:word32] & 0x00000000;
		word32 edx_56;
		word32 ebx_57;
		word32 ebp_58;
		word32 esi_59;
		word32 edi_60;
		eax_34 = fn0043D0A3(ebp_48, esi_49, es, ds, fs, gs, out edx_56, out ebx_57, out ebp_58, out esi_59, out edi_60);
		Mem62[eax_34 + 0x00000000:word32] = 0x00000009;
l0044BEFB:
		return eax_34 | 0xFFFFFFFF;
	}
	else if (dwArg04 >= 0x00000000 && dwArg04 <u Mem0[0x004F34C8:word32])
	{
		word32 ecx_96 = 0x004F34E0[(dwArg04 >> 0x00000005) * 0x00000004];
		word32 eax_98 = (dwArg04 & 0x0000001F) << 0x00000006;
		if ((Mem0[eax_98 + 0x00000004 + ecx_96:byte] & 0x01) != 0x00)
			return Mem0[eax_98 + ecx_96:word32];
		else
		{
l0044BF0C:
			word32 edx_71;
			word32 ebx_72;
			word32 ebp_73;
			word32 esi_74;
			word32 edi_75;
			word32 eax_76 = fn0043D0B6(fp - 0x00000004, esi, es, ds, fs, gs, out edx_71, out ebx_72, out ebp_73, out esi_74, out edi_75);
			Mem78[eax_76 + 0x00000000:word32] = Mem0[eax_76 + 0x00000000:word32] & 0x00000000;
			word32 edx_81;
			word32 ebx_82;
			word32 ebp_83;
			word32 esi_84;
			word32 edi_85;
			Mem87[fn0043D0A3(ebp_73, esi_74, es, ds, fs, gs, out edx_81, out ebx_82, out ebp_83, out esi_84, out edi_85):word32] = 0x00000009;
			word32 edx_88;
			word32 ebx_89;
			word32 ebp_90;
			eax_34 = fn004417A9(es, ds, fs, gs, out edx_88, out ebx_89, out ebp_90);
			goto l0044BEFB;
		}
	}
	else
		goto l0044BF0C;
}

word32 fn0044BF44(word32 ebx, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs, ptr32 ebxOut, ptr32 ebpOut, ptr32 esiOut, ptr32 ediOut)
{
	word32 ebp_11 = fn00441E10(ebx, esi, edi, fs, dwLoc0C, 0x004D5830, 0x0000000C);
	word32 edi_13 = Mem0[ebp_11 + 0x00000008:word32];
	word32 esi_19 = ((edi_13 & 0x0000001F) << 0x00000006) + 0x004F34E0[(edi_13 >> 0x00000005) * 0x00000004];
	Mem20[ebp_11 - 0x0000001C:word32] = 0x00000001;
	word32 esp_32 = fp - 0x00000008;
	word32 ebx_21 = 0x00000000;
	if (Mem20[esi_19 + 0x00000008:word32] == 0x00000000)
	{
		Mem63[fp - 0x0000000C:word32] = 0x0000000A;
		edx = fn00446401(0x00000000, edi_13, es, ds, fs, gs, dwArg00, out ebx_21);
		Mem71[ebp_11 - 0x00000004:word32] = ebx_21;
		esp_32 = fp - 0x00000008;
		if (Mem71[esi_19 + 0x00000008:word32] == ebx_21)
		{
			Mem81[fp - 0x0000000C:word32] = 0x00000FA0;
			Mem84[fp - 0x00000010:word32] = esi_19 + 0x0000000C;
			esp_32 = fp - 0x00000008;
			if (InitializeCriticalSectionAndSpinCount(Mem84[fp - 0x00000010:LPCRITICAL_SECTION], Mem84[fp - 12:DWORD]) == 0x00000000)
				Mem93[ebp_11 - 0x0000001C:word32] = ebx_21;
			Mem91[esi_19 + 0x00000008:word32] = Mem84[esi_19 + 0x00000008:word32] + 0x00000001;
		}
		Mem79[ebp_11 - 0x00000004:word32] = 0xFFFFFFFE;
		fn0044BFDA();
	}
	if (Mem20[ebp_11 - 0x0000001C:word32] != ebx_21)
	{
		word32 esp_59 = esp_32 - 0x00000004;
		Mem60[esp_59 + 0x00000000:word32] = 0x004F34E0[(edi_13 >> 0x00000005) * 0x00000004] + 0x0000000C + ((edi_13 & 0x0000001F) << 0x00000006);
		EnterCriticalSection(Mem60[esp_59 + 0x00000000:LPCRITICAL_SECTION]);
	}
	word32 ebp_44;
	word32 esi_45;
	word32 edi_46;
	word32 ebx_47;
	*ebxOut = fn00441E55(ebp_11, fs, 0x0000000C, dwArg00, dwArg04, dwArg08, dwArg0C, out ebp_44, out esi_45, out edi_46);
	return edx;
}

void fn0044BFDA()
{
	fn00446328(0x0000000A);
	return;
}

void fn0044BFE3(word32 dwArg04)
{
	LeaveCriticalSection(0x004F34E0[(dwArg04 >> 0x00000005) * 0x00000004] + 0x0000000C + ((dwArg04 & 0x0000001F) << 0x00000006));
	return;
}

word16 fn0044C00A(word16 wArg04)
{
	if (Mem0[0x004DFDEC:word32] == 0xFFFFFFFE)
		fn0044D75D();
	word32 eax_14 = Mem0[0x004DFDEC:word32];
	if (eax_14 == 0xFFFFFFFF || WriteConsoleW(eax_14, fp + 0x00000004, 0x00000001, fp - 0x00000008, 0x00000000) == 0x00000000)
		return 0xFFFF;
	else
		return wArg04;
}

word32 fn0044C27B(word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg08, ptr32 edxOut)
{
	word32 eax_135;
	word32 esi_69;
	word32 edx_22;
	word32 ebx_23;
	word32 esi_121;
	Mem26[fp + 0x00000008:word32] = fn00448A44(dwArg08, es, ds, fs, gs, dwArg08, out edx_22, out ebx_23, out esi_121);
	word32 eax_27 = Mem26[esi_121 + 0x0000000C:word32];
	word32 ebp_170 = fp - 0x00000004;
	byte al_28 = (byte) eax_27;
	if ((al_28 & 0x82) == 0x00)
	{
		word32 edx_75;
		word32 ebx_76;
		word32 ebp_77;
		word32 edi_79;
		Mem81[fn0043D0A3(fp - 0x00000004, esi_121, es, ds, fs, gs, out edx_75, out ebx_76, out ebp_77, out esi_69, out edi_79):word32] = 0x00000009;
l0044C2A1:
		Mem72[esi_69 + 0x0000000C:word32] = Mem26[esi_69 + 0x0000000C:word32] | 0x00000020;
l0044C2A5:
		eax_135 = 0x0000FFFF;
	}
	else if ((al_28 & 0x40) != 0x00)
	{
		word32 edx_85;
		word32 ebx_86;
		word32 ebp_87;
		word32 edi_89;
		Mem91[fn0043D0A3(fp - 0x00000004, esi_121, es, ds, fs, gs, out edx_85, out ebx_86, out ebp_87, out esi_69, out edi_89):word32] = 0x00000022;
		goto l0044C2A1;
	}
	else if ((al_28 & 0x01) != 0x00)
	{
		Mem319[esi_121 + 0x00000004:word32] = Mem26[esi_121 + 0x00000004:word32] & 0x00000000;
		if ((al_28 & 0x10) != 0x00)
		{
			Mem328[esi_121 + 0x00000000:word32] = Mem319[esi_121 + 0x00000008:word32];
			Mem329[esi_121 + 0x0000000C:word32] = eax_27 & 0xFFFFFFFE;
l0044C2DB:
			word32 eax_96 = Mem26[esi_121 + 0x0000000C:word32];
			Mem98[esi_121 + 0x00000004:word32] = Mem26[esi_121 + 0x00000004:word32] & 0x00000000;
			Mem101[fp - 0x00000008:word32] = Mem98[fp - 0x00000008:word32] & 0x00000000;
			Mem104[fp - 0x00000010:word32] = ebx_23;
			Mem106[fp - 0x00000014:word32] = 0x00000002;
			word32 ebx_108 = Mem106[fp - 0x00000014:word32];
			word32 eax_111 = eax_96 & 0xFFFFFFEF | ebx_108;
			Mem112[esi_121 + 0x0000000C:word32] = eax_111;
			word32 esp_110 = fp - 0x00000010;
			if ((eax_111 & 0x0000010C) == 0x00000000)
			{
				fn0044888F();
				if (esi_121 != 0x004DF818)
				{
					fn0044888F();
					if (esi_121 == 0x004DF838)
					{
l0044C311:
						Mem304[fp - 0x00000014:word32] = Mem112[fp + 0x00000008:word32];
						esp_110 = fp - 0x00000010;
						word32 edx_306;
						if (fn00448839(esi_121, es, ds, fs, gs, dwArg00, out edx_306, out ebx_108, out esi_121) == 0x00000000)
						{
l0044C31E:
							word32 esp_295 = esp_110 - 0x00000004;
							Mem296[esp_295 + 0x00000000:word32] = esi_121;
							word32 edx_299;
							*edxOut = fn004487F0(es, ds, fs, gs, out ebx_108, out esi_121);
							esp_110 = esp_295 + 0x00000004;
						}
					}
					else
						goto l0044C31E;
				}
				else
					goto l0044C311;
			}
			word32 edi_164;
			word32 ebx_163;
			word32 esp_126 = esp_110 - 0x00000004;
			Mem127[esp_126 + 0x00000000:word32] = edi;
			if ((Mem112[esi_121 + 0x0000000C:word32] & 0x00000108) != 0x00000000)
			{
				word32 eax_179 = Mem127[esi_121 + 0x00000008:word32];
				word32 edi_181 = Mem127[esi_121 + 0x00000000:word32];
				Mem183[esi_121 + 0x00000000:word32] = eax_179 + 0x00000002;
				Mem187[esi_121 + 0x00000004:word32] = Mem183[esi_121 + 0x00000018:word32] - ebx_108;
				edi_164 = edi_181 - eax_179;
				if (edi_164 > 0x00000000)
				{
					Mem210[esp_126 - 0x00000004:word32] = edi_164;
					Mem212[esp_126 - 0x00000008:word32] = eax_179;
					Mem214[esp_126 - 0x0000000C:word32] = Mem212[fp + 0x00000008:word32];
					word32 edx_215;
					word32 ebx_216;
					word32 eax_220 = fn0044871C(ebx_108, esi_121, edi_164, es, ds, fs, gs, out edx_215, out ebx_216, out ebp_170, out esi_121, out edi_164);
					Mem223[ebp_170 - 0x00000004:word32] = eax_220;
l0044C3AB:
					Mem204[Mem187[esi_121 + 0x00000008:word32]:word16] = (word16) Mem187[ebp_170 + 0x00000008:word32];
					ebx_163 = Mem204[ebp_170 + 0x00000008:word32];
					Mem208[Mem204[esi_121 + 0x00000008:word32]:word16] = (word16) ebx_163;
l0044C3D3:
					if (Mem127[ebp_170 - 0x00000004:word32] != edi_164)
					{
l0044C3D8:
						Mem155[esi_121 + 0x0000000C:word32] = Mem127[esi_121 + 0x0000000C:word32] | 0x00000020;
						eax_135 = 0x0000FFFF;
					}
					else
						eax_135 = ebx_163 & 0x0000FFFF;
				}
				else
				{
					word32 eax_229;
					word32 ecx_224 = Mem187[fp + 0x00000008:word32];
					if (ecx_224 != 0xFFFFFFFF && ecx_224 != 0xFFFFFFFE)
					{
						word32 edx_260;
						*edxOut = ecx_224 >> 0x00000005;
						eax_229 = ((ecx_224 & 0x0000001F) << 0x00000006) + 0x004F34E0[(ecx_224 >> 0x00000005) * 0x00000004];
					}
					else
						eax_229 = 0x004DEFD0;
					if ((Mem187[eax_229 + 0x00000004:byte] & 0x20) != 0x00)
					{
						Mem235[esp_126 - 0x00000004:word32] = ebx_108;
						Mem237[esp_126 - 0x00000008:word32] = 0x00000000;
						Mem239[esp_126 - 0x0000000C:word32] = 0x00000000;
						Mem241[esp_126 - 0x00000010:word32] = ecx_224;
						word32 edx_242;
						word32 eax_246 = fn00447F35(ebx_108, esi_121, edi_164, es, ds, fs, gs, out edx_242, out ebp_170, out esi_121, out edi_164);
						if ((eax_246 & edx_242) != 0xFFFFFFFF)
							goto l0044C3AB;
						else
							goto l0044C3D8;
					}
					else
						goto l0044C3AB;
				}
			}
			else
			{
				Mem266[esp_126 - 0x00000004:word32] = 0x00000002;
				Mem269[esp_126 - 0x00000008:word32] = fp - 0x00000008;
				Mem271[esp_126 - 0x0000000C:word32] = Mem269[fp + 0x00000008:word32];
				word32 ebx_273 = Mem271[fp + 0x00000004:word32];
				Mem275[fp - 0x00000008:word16] = (word16) ebx_273;
				word32 edx_276;
				word32 eax_281 = fn0044871C(ebx_273, esi_121, ebx_108, es, ds, fs, gs, out edx_276, out ebx_163, out ebp_170, out esi_121, out edi_164);
				Mem284[ebp_170 - 0x00000004:word32] = eax_281;
				goto l0044C3D3;
			}
		}
		else
		{
			Mem333[esi_121 + 0x0000000C:word32] = eax_27 | 0x00000020;
			goto l0044C2A5;
		}
	}
	else
		goto l0044C2DB;
	return eax_135;
}

void fn0044D75D()
{
	Mem21[0x004DFDEC:word32] = CreateFileW(0x004C1044, 0x40000000, 0x00000003, 0x00000000, 0x00000003, 0x00000000, 0x00000000);
	return;
}

word32 fn004647D0()
{
	if (CoCreateInstance(0x004CC3F4, 0x00000000, 0x00000001, 0x004CC3E4, fp - 0x00000008) >= 0x00000000)
	{
		word32 ecx_45 = Mem0[0x00000000:word32];
		word32 edx_46 = Mem0[ecx_45 + 0x000000FC:word32];
		Mem50[fp - 0x00000010:word32] = 0x00000000;
		edx_46();
		word32 ecx_52 = Mem50[0x00000000:word32];
		word32 edx_53 = Mem50[ecx_52 + 0x00000110:word32];
		Mem55[fp - 0x00000014:word32] = 0x00000000;
		Mem57[fp - 0x00000018:word32] = 0x00000000;
		edx_53();
		word32 ecx_59 = Mem57[0x00000000:word32];
		word32 edx_60 = Mem57[ecx_59 + 0x00000118:word32];
		Mem62[fp - 0x0000001C:word32] = 0x00000000;
		edx_60();
		word32 ecx_66 = Mem62[0x00000000:word32];
		edx = Mem62[ecx_66 + 0x00000120:word32];
		edx();
	}
	return edx;
}

word32 fn00466190(word32 esi, word32 edi, ptr32 ecxOut)
{
	*ecxOut = ecx;
	word32 ebx_12 = 0x00000000;
	if (edi != 0x00000000 && esi != 0x00000000)
	{
		SHELL32.dll!SHGetDesktopFolder();
		if ((fp - 0x00000008 & fp - 0x00000008) >= 0x00000000)
		{
			word32 ecx_87 = Mem0[0x00000000:word32];
			word32 edx_88 = Mem0[ecx_87 + 0x0000001C:word32];
			edx_88();
			if (true)
				;
			word32 ecx_101 = Mem0[0x00000000:word32];
			*ecxOut = ecx_101;
			word32 edx_102 = Mem0[ecx_101 + 0x00000008:word32];
			edx_102();
		}
		return ebx_12;
	}
	else
		return 0x00000000;
}

word32 fn00466280(word32 ecx, word32 dwArg04, word32 dwArg08, ptr32 ebxOut)
{
	*ebxOut = ebx;
	word32 eax_23 = OpenProcess(0x00000400, 0x00000000, GetCurrentProcessId());
	word32 esi_15 = 0x00000000;
	word32 edi_25 = eax_23;
	if (eax_23 != 0x00000000)
	{
		Mem60[fp - 0x00000018:word32] = fp - 0x00000008;
		Mem62[fp - 0x0000001C:word32] = 0x0000000C;
		word32 eax_65 = OpenProcessToken(eax_23, 0x00000400, 0x00000000);
		word32 esp_100 = fp - 0x00000014;
		word32 ebx_67 = CloseHandle;
		esi_15 = eax_65;
		if (eax_65 != 0x00000000)
		{
			Mem90[fp - 0x0000001C:word32] = dwArg08;
			USERENV.dll!ExpandEnvironmentStringsForUserW();
			CloseHandle(ecx);
			esp_100 = fp - 0x00000024;
		}
		word32 esp_78 = esp_100 - 0x00000004;
		Mem79[esp_78 + 0x00000000:word32] = edi_25;
		ebx_67();
		word32 ebx_80;
		*ebxOut = Mem79[esp_78 + 0x00000000:word32];
	}
	return esi_15;
}

word32 fn004664A0(word32 dwArg04, word32 dwArg08, ptr32 esiOut)
{
	__align(fp - 0x00000004);
	SHELL32.dll!SHGetDesktopFolder();
	word32 esp_106 = fp - 0x00000128;
	if ((fp - 0x00000110 & fp - 0x00000110) >= 0x00000000)
	{
		SHELL32.dll!SHGetFolderLocation();
		word32 esp_102 = fp - 0x0000013C;
		if ((fp - 0x00000110 & fp - 0x00000110) >= 0x00000000)
		{
			SHELL32.dll!SHBindToParent();
			word32 esp_117 = fp - 0x0000014C;
			if ((fp - 0x00000130 & fp - 0x00000130) >= 0x00000000)
			{
				word32 ecx_144 = Mem0[0x00000000:word32];
				word32 esp_153 = fp - 0x0000015C;
				word32 eax_155 = Mem0[ecx_144 + 0x0000002C:word32];
				eax_155();
				if (eax_155 >= 0x00000000)
				{
					SHLWAPI.dll!StrRetToBufW();
					esp_153 = fp - 0x0000016C;
				}
				word32 eax_164 = Mem0[esp_153 + 0x00000010:word32];
				word32 ecx_165 = Mem0[eax_164 + 0x00000000:word32];
				word32 edx_166 = Mem0[ecx_165 + 0x00000008:word32];
				esp_117 = esp_153 - 0x00000004;
				Mem168[esp_117 + 0x00000000:word32] = eax_164;
				edx_166();
			}
			word32 esp_140 = esp_117 - 0x00000004;
			Mem141[esp_140 + 0x00000000:word32] = Mem0[esp_117 + 0x00000008:word32];
			CoTaskMemFree(Mem141[esp_140 + 0x00000000:LPVOID]);
			esp_102 = esp_140 + 0x00000004;
		}
		word32 eax_103 = Mem0[esp_102 + 0x00000014:word32];
		word32 ecx_104 = Mem0[eax_103 + 0x00000000:word32];
		edx = Mem0[ecx_104 + 0x00000008:word32];
		esp_106 = esp_102 - 0x00000004;
		Mem107[esp_106 + 0x00000000:word32] = eax_103;
		edx();
	}
	word32 esi_69;
	*esiOut = Mem0[esp_106 + 0x00000000:word32];
	return edx;
}

word32 fn00466630(word32 edi, word32 dwArg04, word32 dwArg08)
{
	__align(fp - 0x00000004);
	if (edi != 0x00000000 && dwArg04 != 0x00000000)
	{
		SHELL32.dll!SHBindToParent();
		if ((fp - 0x00000110 & fp - 0x00000110) >= 0x00000000)
		{
			word32 edx_110 = Mem0[0x0000002C:word32];
			word32 esp_121 = fp - 0x0000013C;
			edx_110();
			if ((fp - 0x00000114 & fp - 0x00000114) >= 0x00000000)
			{
				SHLWAPI.dll!StrRetToBufW();
				esp_121 = fp - 0x0000014C;
			}
			word32 eax_132 = Mem0[esp_121 + 0x00000008:word32];
			edx = Mem0[eax_132 + 0x00000000:word32];
			word32 esp_134 = esp_121 - 0x00000004;
			Mem135[esp_134 + 0x00000000:word32] = eax_132;
			word32 eax_136 = Mem135[edx + 0x00000008:word32];
			eax_136();
		}
		return edx;
	}
	else
		return edx;
}

word32 fn00466900(word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 ebxOut, ptr32 esiOut, ptr32 ediOut)
{
	*esiOut = esi;
	SHELL32.dll!SHGetFolderLocation();
	word32 eax_9 = Mem0[0x004DEBE0:word32] ^ fp - 0x00000004;
	fn00466630(0x00000000, fp + 0xFFFFFDE8, 0x00000001);
	CoTaskMemFree(0x00000000);
	word32 ebp_5 = fp - 0x00000004;
	if (lstrcmpiW(fp + 0xFFFFFDE8, esi) == 0x00000000)
	{
		word32 esi_133;
		word32 edx_134 = fn004664A0(0x00000003, dwArg04, out esi_133);
		word32 edi_137;
		*ediOut = 0x00000000;
		word32 ebx_139;
		*ebxOut = 0x00000003;
		word32 ecx_149;
		return fn004394A0(0x00000000, eax_9 ^ fp - 0x00000004, edx_134, 0x00000003, fp - 0x00000004, esi_133, 0x00000000, es, ds, fs, gs, 0x00000003, out ecx_149);
	}
	else
	{
		SHELL32.dll!SHGetFolderLocation();
		fn00466630(0x00000000, fp + 0xFFFFFDE8, 0x00000001);
		CoTaskMemFree(0x00000000);
		if (lstrcmpiW(fp + 0xFFFFFDE8, esi) == 0x00000000)
		{
			word32 esi_242;
			word32 edx_243 = fn004664A0(0x0000000A, dwArg04, out esi_242);
			word32 edi_246;
			*ediOut = 0x00000000;
			word32 ebx_248;
			*ebxOut = 0x0000000A;
			word32 ecx_254;
			return fn004394A0(0x00000000, eax_9 ^ fp - 0x00000004, edx_243, 0x0000000A, fp - 0x00000004, esi_242, 0x00000000, es, ds, fs, gs, 0x0000000A, out ecx_254);
		}
		else
		{
			SHELL32.dll!SHGetFolderLocation();
			fn00466630(0x00000000, fp + 0xFFFFFDE8, 0x00000001);
			CoTaskMemFree(0x00000000);
			if (lstrcmpiW(fp + 0xFFFFFDE8, esi) == 0x00000000)
			{
				word32 esi_297;
				word32 edx_298 = fn004664A0(0x00000011, dwArg04, out esi_297);
				word32 edi_301;
				*ediOut = 0x00000000;
				word32 ebx_303;
				*ebxOut = 0x00000011;
				word32 ecx_309;
				return fn004394A0(0x00000000, eax_9 ^ fp - 0x00000004, edx_298, 0x00000011, fp - 0x00000004, esi_297, 0x00000000, es, ds, fs, gs, 0x00000011, out ecx_309);
			}
			else
			{
				SHELL32.dll!SHGetFolderLocation();
				fn00466630(0x00000000, fp + 0xFFFFFDE8, 0x00000001);
				CoTaskMemFree(0x00000000);
				if (lstrcmpiW(fp + 0xFFFFFDE8, esi) == 0x00000000)
				{
					word32 esi_352;
					word32 edx_353 = fn004664A0(0x00000012, dwArg04, out esi_352);
					word32 edi_356;
					*ediOut = 0x00000000;
					word32 ebx_358;
					*ebxOut = 0x00000012;
					word32 ecx_364;
					return fn004394A0(0x00000000, eax_9 ^ fp - 0x00000004, edx_353, 0x00000012, fp - 0x00000004, esi_352, 0x00000000, es, ds, fs, gs, 0x00000012, out ecx_364);
				}
				else
				{
					SHELL32.dll!SHGetFolderLocation();
					fn00466630(0x00000000, fp + 0xFFFFFDE8, 0x00000001);
					CoTaskMemFree(0x00000000);
					if (lstrcmpiW(fp + 0xFFFFFDE8, esi) == 0x00000000)
					{
						word32 esi_407;
						word32 edx_408 = fn004664A0(0x00000031, dwArg04, out esi_407);
						word32 edi_411;
						*ediOut = 0x00000000;
						word32 ebx_413;
						*ebxOut = 0x00000031;
						word32 ecx_419;
						return fn004394A0(0x00000000, eax_9 ^ fp - 0x00000004, edx_408, 0x00000031, fp - 0x00000004, esi_407, 0x00000000, es, ds, fs, gs, 0x00000031, out ecx_419);
					}
					else
					{
						SHELL32.dll!SHGetFolderLocation();
						fn00466630(0x00000000, fp + 0xFFFFFDE8, 0x00000001);
						CoTaskMemFree(0x00000000);
						if (lstrcmpiW(fp + 0xFFFFFDE8, esi) == 0x00000000)
						{
							word32 esi_462;
							word32 edx_463 = fn004664A0(0x00000004, dwArg04, out esi_462);
							word32 edi_466;
							*ediOut = 0x00000000;
							word32 ebx_468;
							*ebxOut = 0x00000004;
							word32 ecx_474;
							return fn004394A0(0x00000000, eax_9 ^ fp - 0x00000004, edx_463, 0x00000004, fp - 0x00000004, esi_462, 0x00000000, es, ds, fs, gs, 0x00000004, out ecx_474);
						}
						else
						{
							SHELL32.dll!SHGetFolderLocation();
							fn00466630(0x00000000, fp + 0xFFFFFDE8, 0x00000001);
							CoTaskMemFree(0x00000000);
							if (lstrcmpiW(fp + 0xFFFFFDE8, esi) == 0x00000000)
							{
								word32 esi_517;
								word32 edx_518 = fn004664A0(0x00000006, dwArg04, out esi_517);
								word32 edi_521;
								*ediOut = 0x00000000;
								word32 ebx_523;
								*ebxOut = 0x00000006;
								word32 ecx_529;
								return fn004394A0(0x00000000, eax_9 ^ fp - 0x00000004, edx_518, 0x00000006, fp - 0x00000004, esi_517, 0x00000000, es, ds, fs, gs, 0x00000006, out ecx_529);
							}
							else
							{
								SHELL32.dll!SHGetFolderLocation();
								fn00466630(0x00000000, fp + 0xFFFFFDE8, 0x00000001);
								CoTaskMemFree(0x00000000);
								word32 esp_563 = fp - 0x000002C8;
								if (lstrcmpiW(fp + 0xFFFFFDE8, esi) == 0x00000000)
								{
l00466C5B:
									word32 esp_592 = esp_563 - 0x00000004;
									Mem593[esp_592 + 0x00000000:word32] = dwArg04;
									Mem595[esp_592 - 0x00000004:word32] = 0x00000027;
									word32 esi_597;
									word32 edx_598 = fn004664A0(dwArg00, dwArg04, out esi_597);
									word32 edi_601 = Mem595[esp_592 + 0x00000004:word32];
									*ediOut = edi_601;
									word32 ebx_603 = Mem595[esp_592 + 0x00000008:word32];
									*ebxOut = ebx_603;
									word32 ecx_609;
									return fn004394A0(0x00000000, eax_9 ^ fp - 0x00000004, edx_598, ebx_603, ebp_5, esi_597, edi_601, es, ds, fs, gs, ebp, out ecx_609);
								}
								else
								{
									SHELL32.dll!SHGetFolderLocation();
									fn00466630(0x00000000, fp + 0xFFFFFDE8, 0x00000001);
									CoTaskMemFree(0x00000000);
									if (lstrcmpiW(fp + 0xFFFFFDE8, esi) == 0x00000000)
									{
										word32 esi_652;
										word32 edx_653 = fn004664A0(0x0000000D, dwArg04, out esi_652);
										word32 edi_656;
										*ediOut = 0x00000000;
										word32 ebx_658;
										*ebxOut = 0x0000000D;
										word32 ecx_664;
										return fn004394A0(0x00000000, eax_9 ^ fp - 0x00000004, edx_653, 0x0000000D, fp - 0x00000004, esi_652, 0x00000000, es, ds, fs, gs, 0x0000000D, out ecx_664);
									}
									else
									{
										SHELL32.dll!SHGetFolderLocation();
										word32 edx_686 = fn00466630(0x00000000, fp + 0xFFFFFDE8, 0x00000001);
										CoTaskMemFree(0x00000000);
										if (lstrcmpiW(fp + 0xFFFFFDE8, esi) == 0x00000000)
										{
											word32 esi_707;
											word32 edx_708 = fn004664A0(0x0000000E, dwArg04, out esi_707);
											word32 edi_711;
											*ediOut = 0x00000000;
											word32 ebx_713;
											*ebxOut = 0x0000000E;
											word32 ecx_719;
											return fn004394A0(0x00000000, eax_9 ^ fp - 0x00000004, edx_708, 0x0000000E, fp - 0x00000004, esi_707, 0x00000000, es, ds, fs, gs, 0x0000000E, out ecx_719);
										}
										else if (CompareStringW(0x0000007F, 0x00000001, 0x004C3148, 0xFFFFFFFF, esi, 0xFFFFFFFF) == 0x00000002)
										{
											Mem743[fp - 0x000002F4:word32] = dwArg04;
											word32 esi_746;
											word32 edx_747 = fn004664A0(0x00000000, 0xFFFFFFFF, out esi_746);
											word32 edi_750;
											*ediOut = 0x00000000;
											word32 ebx_752;
											*ebxOut = 0x0000000E;
											word32 ecx_758;
											return fn004394A0(0x00000000, eax_9 ^ fp - 0x00000004, edx_747, 0x0000000E, fp - 0x00000004, esi_746, 0x00000000, es, ds, fs, gs, 0x0000000E, out ecx_758);
										}
										else
										{
											Mem764[fp - 0x000002F4:word32] = 0xFFFFFFFF;
											Mem768[fp - 0x000002FC:word32] = 0xFFFFFFFF;
											Mem770[fp - 0x00000300:word32] = 0x004C3158;
											Mem772[fp - 0x00000304:word32] = 0x00000001;
											Mem774[fp - 0x00000308:word32] = 0x0000007F;
											esp_563 = fp - 0x000002F0;
											if (CompareStringW(0x0000007F, 0x00000001, 0x004C3148, 0xFFFFFFFF, esi, 0xFFFFFFFF) != 0x00000002)
											{
												Mem780[fp - 0x000002F4:word32] = 0xFFFFFFFF;
												Mem784[fp - 0x000002FC:word32] = 0xFFFFFFFF;
												Mem786[fp - 0x00000300:word32] = 0x004C316C;
												Mem788[fp - 0x00000304:word32] = 0x00000001;
												Mem790[fp - 0x00000308:word32] = 0x0000007F;
												if (CompareStringW(0x0000007F, 0x00000001, 0x004C3158, 0xFFFFFFFF, esi, 0xFFFFFFFF) == 0x00000002)
												{
													Mem797[fp - 0x000002F4:word32] = dwArg04;
													word32 esi_800;
													word32 edx_801 = fn004664A0(0x0000000D, 0xFFFFFFFF, out esi_800);
													word32 edi_804;
													*ediOut = 0x00000000;
													word32 ebx_806;
													*ebxOut = 0x0000000E;
													word32 ecx_812;
													return fn004394A0(0x00000000, eax_9 ^ fp - 0x00000004, edx_801, 0x0000000E, fp - 0x00000004, esi_800, 0x00000000, es, ds, fs, gs, 0x0000000E, out ecx_812);
												}
												else
												{
													Mem818[fp - 0x000002F4:word32] = 0xFFFFFFFF;
													Mem822[fp - 0x000002FC:word32] = 0xFFFFFFFF;
													Mem824[fp - 0x00000300:word32] = 0x004C3178;
													Mem826[fp - 0x00000304:word32] = 0x00000001;
													Mem828[fp - 0x00000308:word32] = 0x0000007F;
													if (CompareStringW(0x0000007F, 0x00000001, 0x004C316C, 0xFFFFFFFF, esi, 0xFFFFFFFF) == 0x00000002)
													{
														Mem835[fp - 0x000002F4:word32] = dwArg04;
														word32 esi_838;
														word32 edx_839 = fn004664A0(0x0000000E, 0xFFFFFFFF, out esi_838);
														word32 edi_842;
														*ediOut = 0x00000000;
														word32 ebx_844;
														*ebxOut = 0x0000000E;
														word32 ecx_850;
														return fn004394A0(0x00000000, eax_9 ^ fp - 0x00000004, edx_839, 0x0000000E, fp - 0x00000004, esi_838, 0x00000000, es, ds, fs, gs, 0x0000000E, out ecx_850);
													}
													else
													{
														Mem856[fp - 0x000002F4:word32] = 0xFFFFFFFF;
														Mem860[fp - 0x000002FC:word32] = 0xFFFFFFFF;
														Mem862[fp - 0x00000300:word32] = 0x004C3188;
														Mem864[fp - 0x00000304:word32] = 0x00000001;
														Mem866[fp - 0x00000308:word32] = 0x0000007F;
														if (CompareStringW(0x0000007F, 0x00000001, 0x004C3178, 0xFFFFFFFF, esi, 0xFFFFFFFF) == 0x00000002)
														{
															Mem873[fp - 0x000002F4:word32] = dwArg04;
															word32 esi_876;
															word32 edx_877 = fn004664A0(0x00000005, 0xFFFFFFFF, out esi_876);
															word32 edi_880;
															*ediOut = 0x00000000;
															word32 ebx_882;
															*ebxOut = 0x0000000E;
															word32 ecx_888;
															return fn004394A0(0x00000000, eax_9 ^ fp - 0x00000004, edx_877, 0x0000000E, fp - 0x00000004, esi_876, 0x00000000, es, ds, fs, gs, 0x0000000E, out ecx_888);
														}
														else
														{
															word32 edi_894;
															*ediOut = 0x00000000;
															word32 ebx_900;
															*ebxOut = 0x0000000E;
															word32 ecx_902;
															return fn004394A0(0x80004005, eax_9 ^ fp - 0x00000004, edx_686, 0x0000000E, fp - 0x00000004, esi, 0x00000000, es, ds, fs, gs, 0x0000000E, out ecx_902);
														}
													}
												}
											}
											else
												goto l00466C5B;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

word32 fn00467360(word32 ecx, word32 ebx, word32 ebp, word32 edi, selector es, selector ds, selector fs, selector gs)
{
	word32 edx_102;
	word32 eax_9 = Mem0[0x004DEBE0:word32] ^ fp - 0x00000004;
	word32 ebp_148 = fp - 0x00000004;
	word32 esp_126 = fp - 0x0000062C;
	if (lstrlenW(ecx) >= 0x00000002 && (Mem0[ecx + 0x00000000:word16] == 0x003A && Mem0[ecx + 0x00000002:word16] == 0x003A))
	{
		edx_102 = ecx;
l00467471:
		word32 edx_70;
		word32 eax_71 = fn004A96F0(0x00000104, edi, edx_102, out edx_70);
		word32 ecx_78;
		fn004394A0(eax_71, eax_9 ^ fp - 0x00000004, edx_70, ebx, ebp_148, Mem0[esp_126 + 0x00000000:word32], edi, es, ds, fs, gs, ebp, out ecx_78);
		return edi;
	}
	else
	{
		esp_126 = fp - 0x0000062C;
		word32 esi_95;
		if (fn00466900(fp - 0x00000004, es, ds, fs, gs, fp + 0xFFFFF9DC, out ebx, out esi_95, out edi) >= 0x00000000)
		{
			edx_102 = fp + 0xFFFFF9DC;
			goto l00467471;
		}
		else
		{
			if (fn00466280(fp + 0xFFFFFBE4, esi_95, fp + 0xFFFFFBE4, out ebx) == 0x00000000)
			{
				word32 eax_180 = fp + 0xFFFFFBE4;
				word32 edx_182 = 0x7FFFFFFE;
				word32 esi_184 = esi_95 - (fp + 0xFFFFFBE4);
				do
				{
					if (edx_182 + 0x00000000 == 0x00000000)
						if (edx_182 == 0x00000000)
							goto l00467402;
					word16 cx_222 = (word16) (word32) Mem0[esi_184 + eax_180:word16];
					if (cx_222 == 0x0000)
						;
					Mem226[eax_180 + 0x00000000:word16] = cx_222;
					eax_180 = eax_180 + 0x00000002;
					edx_182 = edx_182 - 0x00000001;
				} while (edx_182 != 0x80000106);
l00467402:
				eax_180 = eax_180 - 0x00000002 - 0x00000002;
l00467405:
				Mem204[eax_180 + 0x00000000:word16] = 0x0000;
			}
			SHLWAPI.dll!PathCanonicalizeW();
			SHLWAPI.dll!PathIsURLW();
			esp_126 = fp - 0x00000638;
			if ((fp + 0xFFFFFBE4 & fp + 0xFFFFFBE4) == 0x00000000)
			{
				SHLWAPI.dll!PathIsRelativeW();
				esp_126 = fp - 0x0000063C;
				if ((fp + 0xFFFFFDEC & fp + 0xFFFFFDEC) != 0x00000000)
				{
					SHLWAPI.dll!PathAppendW();
					word32 edx_161;
					word32 eax_162 = fn004A96F0(0x00000104, edi, ebx, out edx_161);
					word32 ecx_174;
					fn004394A0(eax_162, eax_9 ^ fp - 0x00000004, edx_161, ebx, fp - 0x00000004, edi, edi, es, ds, fs, gs, edi, out ecx_174);
					return edi;
				}
				else
				{
l0046746B:
					edx_102 = fp + 0xFFFFFDEC;
					goto l00467471;
				}
			}
			else
				goto l0046746B;
		}
	}
}

word32 fn00467810(word32 edx, word32 ebx, word32 ebp, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs, ptr32 edxOut, ptr32 esiOut)
{
	*edxOut = edx;
	*esiOut = esi;
	word32 ebp_114 = fp - 0x00000004;
	word32 eax_9 = Mem0[0x004DEBE0:word32] ^ fp - 0x00000004;
	if (edi != 0x00000000 && ebx != 0x00000000)
	{
		SHELL32.dll!SHGetDesktopFolder();
		word32 esp_115 = fp - 0x0000021C;
		word32 esi_113 = fp + 0xFFFFFDEC;
		if ((fp + 0xFFFFFDEC & fp + 0xFFFFFDEC) >= 0x00000000)
		{
			word32 eax_128 = fp + 0xFFFFFDF0;
			word32 edx_131 = 0x7FFFFFFE;
			word32 esi_133 = edi - (fp + 0xFFFFFDF0);
			do
			{
				if (edx_131 + 0x00000000 == 0x00000000)
					if (edx_131 == 0x00000000)
						goto l00467884;
				word16 cx_192 = (word16) (word32) Mem0[esi_133 + eax_128:word16];
				if (cx_192 == 0x0000)
					;
				Mem196[eax_128 + 0x00000000:word16] = cx_192;
				eax_128 = eax_128 + 0x00000002;
				edx_131 = edx_131 - 0x00000001;
			} while (edx_131 != 0x80000106);
l00467884:
			eax_128 = eax_128 - 0x00000002 - 0x00000002;
l00467887:
			Mem155[eax_128 + 0x00000000:word16] = 0x0000;
			word32 ecx_157 = Mem155[0x00000000:word32];
			word32 eax_167 = Mem155[ecx_157 + 0x0000000C:word32];
			eax_167();
			word32 ecx_170 = Mem155[0x00000000:word32];
			esi_113 = eax_167;
			edx = Mem155[ecx_170 + 0x00000008:word32];
			*edxOut = edx;
			esp_115 = fp - 0x0000023C;
			edx();
		}
		word32 esi_117 = Mem0[esp_115 + 0x00000000:word32];
		*esiOut = esi_117;
		word32 ecx_123;
		return fn004394A0(esi_113, eax_9 ^ fp - 0x00000004, edx, ebx, ebp_114, esi_117, edi, es, ds, fs, gs, ebp, out ecx_123);
	}
	else
	{
		word32 ecx_61;
		return fn004394A0(0x80004005, eax_9 ^ fp - 0x00000004, edx, ebx, fp - 0x00000004, esi, edi, es, ds, fs, gs, dwLoc0218, out ecx_61);
	}
}

word32 fn004682E0(word32 dwArg04)
{
	word32 eax_20 = OpenProcess(0x00000410, 0x00000000, GetCurrentProcessId());
	word32 esp_21 = fp - 0x0000000C;
	if (eax_20 != 0x00000000)
	{
		Mem49[fp - 0x00000014:word32] = dwArg04;
		Mem51[fp - 0x00000018:word32] = 0x00000000;
		PSAPI.DLL!GetModuleFileNameExW();
		CloseHandle(eax_20);
		esp_21 = fp - 0x0000001C;
	}
	return Mem0[esp_21 + 0x00000004 + 0x00000004:word32];
}

word32 fn0046C150(word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg00, word32 dwArg04, ptr32 edxOut, ptr32 ebpOut)
{
	word32 eax_9 = Mem0[0x004DEBE0:word32] ^ fp - 0x00000004;
	word32 esp_166 = fp - 0x0000026C;
	word32 edx_23 = fn004647D0();
	*edxOut = edx_23;
	if (0x00000000 != 0x00000000)
	{
		word32 eax_115 = OpenProcess(0x00000410, 0x00000000, GetCurrentProcessId());
		word32 esp_116 = fp - 0x0000026C;
		if (eax_115 != 0x00000000)
		{
			Mem330[fp - 0x00000274:word32] = fp + 0xFFFFFDEC;
			Mem332[fp - 0x00000278:word32] = 0x00000000;
			PSAPI.DLL!GetModuleFileNameExW();
			CloseHandle(eax_115);
			esp_116 = fp - 0x0000027C;
		}
		word32 esp_126 = esp_116 - 0x00000004;
		Mem127[esp_126 + 0x00000000:word32] = fp + 0xFFFFFDEC;
		SHLWAPI.dll!PathRemoveFileSpecW();
		Mem129[esp_126 - 0x00000004:word32] = 0x004C3728;
		Mem133[esp_126 - 0x00000008:word32] = fp + 0xFFFFFDEC;
		SHLWAPI.dll!PathAppendW();
		Mem136[esp_126 - 0x0000000C:word32] = fp + 0xFFFFFDB4;
		OLEAUT32.dll!Ordinal_8();
		Mem139[esp_126 - 0x00000010:word32] = fp + 0xFFFFFDEC;
		OLEAUT32.dll!Ordinal_2();
		Mem148[esp_126 - 0x00000014:word32] = fp + 0xFFFFFDDC;
		Mem155[esp_126 - 0x00000024:word32] = DPB(dwLoc024C, (word16) (fp + 0xFFFFFDEC), 0, 16);
		Mem159[esp_126 - 0x00000020:word32] = dwLoc0248;
		Mem160[esp_126 - 0x0000001C:word32] = fp + 0xFFFFFDB4;
		word32 ebx_163 = Mem160[0x00000000:word32];
		Mem164[esp_126 - 0x00000018:word32] = dwLoc0240;
		word32 ecx_165 = Mem164[ebx_163 + 0x000000E8:word32];
		Mem167[esp_126 - 0x00000028:word32] = 0x00000000;
		esp_166 = esp_126 - 0x00000028;
		ecx_165();
		if (wLoc0224 == 0xFFFF)
		{
			Mem177[esp_126 - 0x0000002C:word32] = 0x004C5740;
			OLEAUT32.dll!Ordinal_2();
			word32 edx_184 = Mem177[Mem177[0x00000000:word32] + 0x00000090:word32];
			Mem188[esp_126 - 0x00000030:word32] = fp + 0xFFFFFDE0;
			Mem190[esp_126 - 0x00000034:word32] = dwLoc0240;
			Mem192[esp_126 - 0x00000038:word32] = 0x00000000;
			esp_166 = esp_126 - 0x00000038;
			edx_184();
			word32 dwLoc0218_179 = 0x00000000;
			word32 dwLoc021C_181 = 0x00000000;
			word32 dwLoc0228_182 = 0x00000000;
			if (0x00000000 != 0x00000000)
			{
				word32 ecx_196 = Mem192[0x00000000:word32];
				Mem200[esp_126 - 0x0000003C:word32] = fp + 0xFFFFFDD0;
				Mem202[esp_126 - 0x00000040:word32] = 0x00000000;
				esp_166 = esp_126 - 0x00000040;
				word32 eax_203 = Mem202[ecx_196 + 0x00000020:word32];
				eax_203();
				word32 edi_204 = 0x00000000;
				if (dwLoc0230 > 0x00000000)
				{
					word32 ebx_209 = lstrcmpW;
					do
					{
						if (dwLoc0228_182 != 0x00000000)
							;
						word32 ecx_233 = Mem202[0x00000000:word32];
						word32 esp_235 = esp_166 - 0x00000004;
						Mem236[esp_235 + 0x00000000:word32] = fp + 0xFFFFFDE8;
						Mem238[esp_235 - 0x00000004:word32] = edi_204;
						Mem240[esp_235 - 0x00000008:word32] = 0x00000000;
						word32 eax_241 = Mem240[ecx_233 + 0x0000001C:word32];
						eax_241();
						word32 ecx_243 = Mem240[dwLoc0218_179 + 0x00000000:word32];
						Mem246[esp_235 - 0x0000000C:word32] = fp + 0xFFFFFDD4;
						Mem248[esp_235 - 0x00000010:word32] = dwLoc0218_179;
						word32 esp_247 = esp_235 - 0x00000010;
						word32 eax_249 = Mem248[ecx_243 + 0x00000044:word32];
						eax_249();
						if (eax_249 >= 0x00000000)
						{
							word32 ecx_267 = Mem248[0x00000000:word32];
							Mem270[esp_235 - 0x00000014:word32] = fp + 0xFFFFFDE4;
							Mem272[esp_235 - 0x00000018:word32] = 0x00000000;
							Mem274[esp_235 - 0x0000001C:word32] = 0x00000000;
							esp_247 = esp_235 - 0x0000001C;
							word32 eax_275 = Mem274[ecx_267 + 0x00000028:word32];
							eax_275();
							if (eax_275 >= 0x00000000)
							{
								word32 ecx_280 = Mem274[dwLoc021C_181 + 0x00000000:word32];
								Mem283[esp_235 - 0x00000020:word32] = fp + 0xFFFFFDC8;
								Mem285[esp_235 - 0x00000024:word32] = dwLoc021C_181;
								word32 eax_286 = Mem285[ecx_280 + 0x00000068:word32];
								eax_286();
								word32 ecx_288 = Mem285[dwLoc0218_179 + 0x00000000:word32];
								Mem291[esp_235 - 0x00000028:word32] = fp + 0xFFFFFDCC;
								Mem293[esp_235 - 0x0000002C:word32] = dwLoc0218_179;
								word32 eax_294 = Mem293[ecx_288 + 0x00000068:word32];
								eax_294();
								Mem298[esp_235 - 0x00000030:word32] = 0x004C575C;
								Mem300[esp_235 - 0x00000034:word32] = dwLoc0238;
								word32 esp_299 = esp_235 - 0x00000034;
								ebx_209();
								if (eax_294 == 0x00000000)
								{
									Mem315[esp_235 - 0x00000038:word32] = 0x004C2EDC;
									Mem317[esp_235 - 0x0000003C:word32] = dwLoc0234;
									esp_299 = esp_235 - 0x0000003C;
									ebx_209();
									dwLoc0228_182 = 0x00000001;
								}
								word32 ecx_307 = Mem300[dwLoc021C_181 + 0x00000000:word32];
								word32 edx_308 = Mem300[ecx_307 + 0x00000008:word32];
								esp_247 = esp_299 - 0x00000004;
								Mem310[esp_247 + 0x00000000:word32] = dwLoc021C_181;
								edx_308();
								dwLoc021C_181 = 0x00000000;
							}
						}
						word32 ecx_257 = Mem248[dwLoc0218_179 + 0x00000000:word32];
						word32 edx_258 = Mem248[ecx_257 + 0x00000008:word32];
						esp_166 = esp_247 - 0x00000004;
						Mem261[esp_166 + 0x00000000:word32] = dwLoc0218_179;
						edx_258();
						edi_204 = edi_204 + 0x00000001;
						dwLoc0218_179 = 0x00000000;
					} while (edi_204 < dwLoc0230);
				}
			}
		}
	}
	word32 esp_63 = esp_166 - 0x00000004;
	Mem64[esp_63 + 0x00000000:word32] = fp + 0xFFFFFDA4;
	OLEAUT32.dll!Ordinal_9();
	word32 esi_69 = Mem64[esp_63 + 0x00000004:word32];
	word32 ecx_80;
}

word32 fn0046C3F0(word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 ecxOut, ptr32 ediOut)
{
	word32 ebp_107 = fp - 0x00000004;
	word32 esp_193 = fp - 0x00000278;
	word32 edx_104 = fn004647D0();
	if (0x00000000 != 0x00000000)
	{
		word32 eax_146 = OpenProcess(0x00000410, 0x00000000, GetCurrentProcessId());
		word32 esp_147 = fp - 0x00000278;
		if (eax_146 != 0x00000000)
		{
			Mem499[fp - 0x00000280:word32] = fp + 0xFFFFFDE8;
			Mem501[fp - 0x00000284:word32] = 0x00000000;
			PSAPI.DLL!GetModuleFileNameExW();
			CloseHandle(eax_146);
			esp_147 = fp - 0x00000288;
		}
		word32 esp_156 = esp_147 - 0x00000004;
		Mem157[esp_156 + 0x00000000:word32] = fp + 0xFFFFFDE8;
		SHLWAPI.dll!PathRemoveFileSpecW();
		Mem159[esp_156 - 0x00000004:word32] = 0x004C3728;
		Mem162[esp_156 - 0x00000008:word32] = fp + 0xFFFFFDE8;
		SHLWAPI.dll!PathAppendW();
		Mem166[esp_156 - 0x0000000C:word32] = fp + 0xFFFFFDA8;
		OLEAUT32.dll!Ordinal_8();
		Mem169[esp_156 - 0x00000010:word32] = fp + 0xFFFFFDE8;
		OLEAUT32.dll!Ordinal_2();
		Mem180[esp_156 - 0x00000014:word32] = fp + 0xFFFFFDD0;
		word16 cx_164 = (word16) (fp + 0xFFFFFDA8);
		Mem184[esp_156 - 0x00000024:word32] = DPB(dwLoc0258, cx_164, 0, 16);
		word32 ebx_189 = Mem184[0x00000000:word32];
		Mem190[esp_156 - 0x00000020:word32] = dwLoc0254;
		Mem191[esp_156 - 0x0000001C:word32] = fp + 0xFFFFFDE8;
		word32 eax_192 = Mem191[ebx_189 + 0x000000E8:word32];
		Mem194[esp_156 - 0x00000028:word32] = 0x00000000;
		Mem195[esp_156 - 0x00000018:word32] = dwLoc024C;
		esp_193 = esp_156 - 0x00000028;
		eax_192();
		if (wLoc0230 == 0xFFFF)
		{
			Mem200[esp_156 - 0x0000002C:word32] = 0x004C55EC;
			OLEAUT32.dll!Ordinal_2();
			word32 ecx_201 = Mem200[0x00000000:word32];
			Mem204[esp_156 - 0x00000030:word32] = fp + 0xFFFFFDD8;
			Mem206[esp_156 - 0x00000034:word32] = eax_192;
			Mem207[fp + 0xFFFFFDC4:word32] = eax_192;
			word32 eax_208 = Mem207[ecx_201 + 0x00000090:word32];
			Mem210[esp_156 - 0x00000038:word32] = 0x00000000;
			esp_193 = esp_156 - 0x00000038;
			eax_208();
			Mem213[dwArg04 + 0x00000000:word32] = 0x0000002C;
			if (0x00000000 != 0x00000000)
			{
				word32 ecx_217 = Mem213[0x00000000:word32];
				Mem220[esp_156 - 0x0000003C:word32] = fp + 0xFFFFFDBC;
				Mem222[esp_156 - 0x00000040:word32] = 0x00000000;
				esp_193 = esp_156 - 0x00000040;
				word32 eax_223 = Mem222[ecx_217 + 0x00000020:word32];
				eax_223();
				word32 ebx_224 = 0x00000001;
				if (dwLoc0244 == 0x00000001)
				{
					word32 ecx_229 = Mem222[0x00000000:word32];
					Mem232[esp_156 - 0x00000044:word32] = fp + 0xFFFFFDDC;
					Mem234[esp_156 - 0x00000048:word32] = 0x00000000;
					Mem236[esp_156 - 0x0000004C:word32] = 0x00000000;
					word32 eax_237 = Mem236[ecx_229 + 0x0000001C:word32];
					eax_237();
					word32 ecx_239 = Mem236[0x00000000:word32];
					Mem242[esp_156 - 0x00000050:word32] = fp + 0xFFFFFDCC;
					Mem244[esp_156 - 0x00000054:word32] = 0x00000000;
					word32 esp_243 = esp_156 - 0x00000054;
					word32 eax_245 = Mem244[ecx_239 + 0x00000044:word32];
					eax_245();
					if (eax_245 >= 0x00000000)
					{
						word32 ecx_258 = Mem244[0x00000000:word32];
						Mem261[esp_156 - 0x00000058:word32] = fp + 0xFFFFFDC8;
						Mem263[esp_156 - 0x0000005C:word32] = 0x00000000;
						esp_243 = esp_156 - 0x0000005C;
						word32 eax_264 = Mem263[ecx_258 + 0x0000002C:word32];
						eax_264();
						if (dwLoc0238 > 0x00000001)
						{
							word32 esi_268 = lstrcmpW;
							ebx_269 = ebx_224;
							do
							{
								word32 esp_346;
								word32 ebx_269;
								word32 eax_272 = Mem263[ebp_107 + 0xFFFFFDD0:word32];
								word32 ecx_273 = Mem263[eax_272 + 0x00000000:word32];
								word32 edx_274 = ebp_107 + 0xFFFFFDD8;
								word32 esp_275 = esp_243 - 0x00000004;
								Mem276[esp_275 + 0x00000000:word32] = edx_274;
								Mem278[esp_275 - 0x00000004:word32] = ebx_269;
								Mem280[esp_275 - 0x00000008:word32] = eax_272;
								word32 eax_281 = Mem280[ecx_273 + 0x00000028:word32];
								eax_281();
								word32 eax_282 = Mem280[ebp_107 + 0xFFFFFDD8:word32];
								word32 ecx_283 = Mem280[eax_282 + 0x00000000:word32];
								word32 edx_284 = ebp_107 + 0xFFFFFDE4;
								Mem286[esp_275 - 0x0000000C:word32] = edx_284;
								Mem288[esp_275 - 0x00000010:word32] = eax_282;
								word32 eax_289 = Mem288[ecx_283 + 0x0000001C:word32];
								eax_289();
								word32 eax_290 = Mem288[ebp_107 + 0xFFFFFDD8:word32];
								word32 ecx_291 = Mem288[eax_290 + 0x00000000:word32];
								word32 edx_292 = ebp_107 + 0xFFFFFDE8;
								Mem294[esp_275 - 0x00000014:word32] = edx_292;
								Mem296[esp_275 - 0x00000018:word32] = eax_290;
								word32 eax_297 = Mem296[ecx_291 + 0x00000068:word32];
								eax_297();
								word32 ecx_298 = Mem296[ebp_107 + 0xFFFFFDE4:word32];
								Mem301[esp_275 - 0x0000001C:word32] = 0x004C5614;
								Mem303[esp_275 - 0x00000020:word32] = ecx_298;
								if (lstrcmpW(Mem303[esp_275 - 0x00000020:LPCWSTR], Mem303[esp_275 - 28:LPCWSTR]) == 0x00000000)
								{
									Mem351[esp_275 - 0x0000001C:word32] = Mem303[ebp_107 + 0xFFFFFDE8:word32];
									word32 esi_354;
									Mem356[dwArg04 + 0x00000004:word32] = fn0043A0B9(ecx_298, esi_268, es, ds, fs, gs, dwArg00, out ebx_269, out esi_354);
									esp_346 = esp_275 - 0x0000001C;
l0046C77E:
									esp_243 = esp_346 + 0x00000004;
								}
								else
								{
									word32 eax_357 = Mem303[ebp_107 + 0xFFFFFDE4:word32];
									Mem359[esp_275 - 0x0000001C:word32] = 0x004C5620;
									Mem361[esp_275 - 0x00000020:word32] = eax_357;
									esi_268();
									if (eax_357 == 0x00000000)
									{
										word32 ecx_365 = Mem361[ebp_107 + 0xFFFFFDE8:word32];
										Mem367[esp_275 - 0x00000024:word32] = ecx_365;
										word32 esi_369;
										Mem371[dwArg04 + 0x00000008:word32] = fn0043A0B9(ecx_365, esi_268, es, ds, fs, gs, dwArg00, out ebx_269, out esi_369);
										esp_346 = esp_275 - 0x00000024;
										goto l0046C77E;
									}
									else
									{
										word32 edx_372 = Mem361[ebp_107 + 0xFFFFFDE4:word32];
										Mem374[esp_275 - 0x00000024:word32] = 0x004C5630;
										Mem376[esp_275 - 0x00000028:word32] = edx_372;
										esi_268();
										if (eax_357 == 0x00000000)
										{
											Mem382[esp_275 - 0x0000002C:word32] = Mem376[ebp_107 + 0xFFFFFDE8:word32];
											word32 esi_384;
											Mem386[dwArg04 + 0x0000000C:word32] = fn0043A0B9(ecx_298, esi_268, es, ds, fs, gs, dwArg00, out ebx_269, out esi_384);
											esp_346 = esp_275 - 0x0000002C;
											goto l0046C77E;
										}
										else
										{
											word32 ecx_387 = Mem376[ebp_107 + 0xFFFFFDE4:word32];
											Mem390[esp_275 - 0x0000002C:word32] = 0x004C564C;
											Mem392[esp_275 - 0x00000030:word32] = ecx_387;
											esi_268();
											if (eax_357 == 0x00000000)
											{
												Mem398[esp_275 - 0x00000034:word32] = Mem392[ebp_107 + 0xFFFFFDE8:word32];
												word32 esi_400;
												Mem402[dwArg04 + 0x00000010:word32] = fn0043A0B9(ecx_387, esi_268, es, ds, fs, gs, dwArg00, out ebx_269, out esi_400);
												esp_346 = esp_275 - 0x00000034;
												goto l0046C77E;
											}
											else
											{
												word32 eax_403 = Mem392[ebp_107 + 0xFFFFFDE4:word32];
												Mem405[esp_275 - 0x00000034:word32] = 0x004C5668;
												Mem407[esp_275 - 0x00000038:word32] = eax_403;
												esi_268();
												if (eax_403 == 0x00000000)
												{
													word32 ecx_411 = Mem407[ebp_107 + 0xFFFFFDE8:word32];
													Mem413[esp_275 - 0x0000003C:word32] = ecx_411;
													word32 esi_415;
													Mem417[dwArg04 + 0x00000014:word32] = fn0043A0B9(ecx_411, esi_268, es, ds, fs, gs, dwArg00, out ebx_269, out esi_415);
													esp_346 = esp_275 - 0x0000003C;
													goto l0046C77E;
												}
												else
												{
													word32 edx_418 = Mem407[ebp_107 + 0xFFFFFDE4:word32];
													Mem420[esp_275 - 0x0000003C:word32] = 0x004C5684;
													Mem422[esp_275 - 0x00000040:word32] = edx_418;
													esi_268();
													if (eax_403 == 0x00000000)
													{
														Mem428[esp_275 - 0x00000044:word32] = Mem422[ebp_107 + 0xFFFFFDE8:word32];
														word32 esi_430;
														Mem432[dwArg04 + 0x00000018:word32] = fn0043A0B9(ecx_387, esi_268, es, ds, fs, gs, dwArg00, out ebx_269, out esi_430);
														esp_346 = esp_275 - 0x00000044;
														goto l0046C77E;
													}
													else
													{
														word32 ecx_433 = Mem422[ebp_107 + 0xFFFFFDE4:word32];
														Mem436[esp_275 - 0x00000044:word32] = 0x004C56A0;
														Mem438[esp_275 - 0x00000048:word32] = ecx_433;
														esi_268();
														if (eax_403 == 0x00000000)
														{
															Mem444[esp_275 - 0x0000004C:word32] = Mem438[ebp_107 + 0xFFFFFDE8:word32];
															word32 esi_446;
															Mem448[dwArg04 + 0x0000001C:word32] = fn0043A0B9(ecx_433, esi_268, es, ds, fs, gs, dwArg00, out ebx_269, out esi_446);
															esp_346 = esp_275 - 0x0000004C;
															goto l0046C77E;
														}
														else
														{
															word32 eax_449 = Mem438[ebp_107 + 0xFFFFFDE4:word32];
															Mem451[esp_275 - 0x0000004C:word32] = 0x004C56C8;
															Mem453[esp_275 - 0x00000050:word32] = eax_449;
															esi_268();
															if (eax_449 == 0x00000000)
															{
																word32 ecx_457 = Mem453[ebp_107 + 0xFFFFFDE8:word32];
																Mem459[esp_275 - 0x00000054:word32] = ecx_457;
																word32 esi_461;
																Mem463[dwArg04 + 0x00000020:word32] = fn0043A0B9(ecx_457, esi_268, es, ds, fs, gs, dwArg00, out ebx_269, out esi_461);
																esp_346 = esp_275 - 0x00000054;
																goto l0046C77E;
															}
															else
															{
																word32 edx_464 = Mem453[ebp_107 + 0xFFFFFDE4:word32];
																Mem466[esp_275 - 0x00000054:word32] = 0x004C56EC;
																Mem468[esp_275 - 0x00000058:word32] = edx_464;
																esi_268();
																if (eax_449 == 0x00000000)
																{
																	Mem474[esp_275 - 0x0000005C:word32] = Mem468[ebp_107 + 0xFFFFFDE8:word32];
																	word32 esi_476;
																	Mem478[dwArg04 + 0x00000024:word32] = fn0043A0B9(ecx_433, esi_268, es, ds, fs, gs, dwArg00, out ebx_269, out esi_476);
																	esp_346 = esp_275 - 0x0000005C;
																	goto l0046C77E;
																}
																else
																{
																	word32 ecx_479 = Mem468[ebp_107 + 0xFFFFFDE4:word32];
																	Mem482[esp_275 - 0x0000005C:word32] = 0x004C5714;
																	Mem484[esp_275 - 0x00000060:word32] = ecx_479;
																	esp_243 = esp_275 - 0x00000060;
																	esi_268();
																	if (eax_449 == 0x00000000)
																	{
																		Mem490[esp_275 - 0x00000064:word32] = Mem484[ebp_107 + 0xFFFFFDE8:word32];
																		word32 esi_492;
																		Mem494[dwArg04 + 0x00000028:word32] = fn0043A0B9(ecx_479, esi_268, es, ds, fs, gs, dwArg00, out ebx_269, out esi_492);
																		esp_346 = esp_275 - 0x00000064;
																		goto l0046C77E;
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
								ebx_269 = ebx_269 + 0x00000001;
							} while (ebx_269 < Mem303[ebp_107 + 0xFFFFFDCC:word32]);
						}
					}
					word32 eax_251 = Mem244[ebp_107 + 0xFFFFFDE0:word32];
					word32 ecx_252 = Mem244[eax_251 + 0x00000000:word32];
					word32 edx_253 = Mem244[ecx_252 + 0x00000008:word32];
					esp_193 = esp_243 - 0x00000004;
					Mem255[esp_193 + 0x00000000:word32] = eax_251;
					edx_253();
					Mem256[ebp_107 + 0xFFFFFDE0:word32] = 0x00000000;
				}
			}
		}
	}
	word32 esp_108 = esp_193 - 0x00000004;
	Mem61[esp_108 + 0x00000000:word32] = ebp_107 + 0xFFFFFD9C;
	OLEAUT32.dll!Ordinal_9();
	word32 eax_62 = Mem61[ebp_107 + 0xFFFFFDC8:word32];
	if (eax_62 != 0x00000000)
	{
		Mem137[esp_108 - 0x00000004:word32] = eax_62;
		SysFreeString(Mem137[esp_108 - 0x00000004:(ptr wchar_t)]);
	}
	word32 eax_67 = Mem61[ebp_107 + 0xFFFFFDDC:word32];
	if (eax_67 != 0x00000000)
	{
		word32 ecx_132 = Mem61[eax_67 + 0x00000000:word32];
		edx_104 = Mem61[ecx_132 + 0x00000008:word32];
		esp_108 = esp_108 - 0x00000004;
		Mem135[esp_108 + 0x00000000:word32] = eax_67;
		edx_104();
	}
	word32 eax_94 = Mem61[ebp_107 + 0xFFFFFDE0:word32];
	if (eax_94 != 0x00000000)
	{
		word32 ecx_128 = Mem61[eax_94 + 0x00000000:word32];
		edx_104 = Mem61[ecx_128 + 0x00000008:word32];
		esp_108 = esp_108 - 0x00000004;
		Mem131[esp_108 + 0x00000000:word32] = eax_94;
		edx_104();
	}
	word32 esp_111 = esp_108 + 0x00000004;
	word32 edi_110 = Mem61[esp_108 + 0x00000000:word32];
	*ediOut = edi_110;
	word32 ecx_121;
	return fn004394A0(0x00000001, Mem61[ebp_107 - 0x00000008:word32] ^ ebp_107, edx_104, Mem61[esp_111 + 0x00000004:word32], ebp_107, Mem61[esp_111 + 0x00000000:word32], edi_110, es, ds, fs, gs, ebp, out ecx_121);
}

bool fn00474110(word32 ebp, selector es, selector ds, selector fs, selector gs, ptr32 eaxOut, ptr32 edxOut)
{
	word32 eax_325;
	Mem31[fs:0x00000000:word32] = fp - 0x00000010;
	word32 esp_168 = fp - 0x000008DC;
	word32 edi_43;
	word16 si_44;
	word32 ebp_45 = fn0040A140(0x004EF704, fp - 0x00000004, es, ds, fs, gs, out edi_43, out si_44);
	word32 edx_155 = 0x00000000;
	*edxOut = edx_155;
	if (edi_43 != 0x00000000 && Mem31[edi_43 + 0x00000000:word16] != si_44)
	{
		eax_325 = edi_43;
		word32 ecx_768 = (word32) Mem31[eax_325 + 0x00000000:word16];
		while (ecx_768 == 0x00000020 || ecx_768 == 0x00000009)
		{
			eax_325 = eax_325 + 0x00000002;
			ecx_768 = (word32) Mem31[eax_325 + 0x00000000:word16];
		}
		word32 ecx_778 = (word32) Mem31[eax_325 + 0x00000000:word16];
		word16 cx_779 = (word16) ecx_778;
		if (ecx_778 == 0x00000022)
		{
			word32 ecx_809 = (word32) Mem31[eax_325 + 0x00000002:word16];
			word32 eax_811 = eax_325 + 0x00000002;
			if ((word16) ecx_809 != si_44)
			{
				word16 cx_825 = (word16) ecx_809;
				do
				{
					if (cx_825 == 0x0022)
						break;
					(ebp_45 + 0xFFFFFDE8)[edx_155 * 0x0002] = cx_825;
					eax_811 = eax_811 + 0x00000002;
					cx_825 = (word16) (word32) Mem836[eax_811 + 0x00000000:word16];
					*edxOut = edx_155 + 0x00000001;
				} while (cx_825 != si_44);
			}
			eax_325 = eax_811 + 0x00000002;
		}
		else if (cx_779 != si_44)
			do
			{
				if (cx_779 == 0x0020 || cx_779 == 0x0009)
					break;
				(ebp_45 + 0xFFFFFDE8)[edx_155 * 0x0002] = cx_779;
				eax_325 = eax_325 + 0x00000002;
				cx_779 = (word16) (word32) Mem857[eax_325 + 0x00000000:word16];
				*edxOut = edx_155 + 0x00000001;
			} while (cx_779 != si_44);
		(ebp_45 + 0xFFFFFDE8)[edx_155 * 0x0002] = 0x0000;
		(ebp_45 + 0xFFFFFDE8)[edx_155 * 0x0002] = 0x0000;
		word32 ecx_799 = (word32) Mem795[eax_325 + 0x00000000:word16];
		while (ecx_799 == 0x00000020 || ecx_799 == 0x00000009)
		{
			eax_325 = eax_325 + 0x00000002;
			ecx_799 = (word32) Mem795[eax_325 + 0x00000000:word16];
		}
l00474414:
		Mem751[ebp_45 + 0xFFFFF748:word32] = eax_325;
l00474205:
		word32 ebx_110 = Mem31[ebp_45 + 0xFFFFF748:word32];
		word32 ecx_125 = 0x00000000;
		while (ebx_110 != 0x00000000 && Mem31[ebx_110 + 0x00000000:word16] != 0x0000)
		{
			word32 eax_111 = (word32) Mem31[ebx_110 + 0x00000000:word16];
			while (eax_111 == 0x00000020 || eax_111 == 0x00000009)
			{
				ebx_110 = ebx_110 + 0x00000002;
				eax_111 = (word32) Mem31[ebx_110 + 0x00000000:word16];
			}
			word32 eax_120 = (word32) Mem31[ebx_110 + 0x00000000:word16];
			word16 ax_121 = (word16) eax_120;
			if (eax_120 == 0x00000022)
			{
				word16 ax_673 = (word16) (word32) Mem31[ebx_110 + 0x00000002:word16];
				word32 ebx_674 = ebx_110 + 0x00000002;
				if (ax_673 != 0x0000)
					do
					{
						if (ax_673 == 0x0022)
							break;
						(ebp_45 + 0xFFFFFDE8)[ecx_125 * 0x0002] = ax_673;
						ebx_674 = ebx_674 + 0x00000002;
						ax_673 = (word16) (word32) Mem698[ebx_674 + 0x00000000:word16];
						ecx_125 = ecx_125 + 0x00000001;
					} while (ax_673 != 0x0000);
				ebx_110 = ebx_674 + 0x00000002;
			}
			else if (ax_121 != 0x0000)
				do
				{
					if (ax_121 == 0x0020 || ax_121 == 0x0009)
						break;
					(ebp_45 + 0xFFFFFDE8)[ecx_125 * 0x0002] = ax_121;
					ebx_110 = ebx_110 + 0x00000002;
					ax_121 = (word16) (word32) Mem722[ebx_110 + 0x00000000:word16];
					ecx_125 = ecx_125 + 0x00000001;
				} while (ax_121 != 0x0000);
			(ebp_45 + 0xFFFFFDE8)[ecx_125 * 0x0002] = 0x0000;
			word32 ebx_134 = ebx_110;
			word32 eax_136 = (word32) Mem133[ebx_134 + 0x00000000:word16];
			while (eax_136 == 0x00000020 || eax_136 == 0x00000009)
			{
				ebx_134 = ebx_134 + 0x00000002;
				eax_136 = (word32) Mem133[ebx_134 + 0x00000000:word16];
			}
			word32 edi_157;
			word32 esp_145 = esp_168 - 0x00000004;
			Mem146[esp_145 + 0x00000000:word32] = 0x004C57D8;
			Mem149[esp_145 - 0x00000004:word32] = ebp_45 + 0xFFFFFDE8;
			Mem150[ebp_45 + 0xFFFFF748:word32] = ebx_134;
			SHLWAPI.dll!StrCmpW();
			word32 esp_148 = esp_145 - 0x00000004;
			if (eax_136 == 0x00000000)
			{
				word32 ecx_637 = 0x0000009A;
				word32 esi_639 = 0x004C5BE0;
				word32 edi_641 = ebp_45 + 0xFFFFF768;
				while (ecx_637 != 0x00000000)
				{
					Mem648[edi_641 + 0x00000000:word32] = Mem150[esi_639 + 0x00000000:word32];
					esi_639 = esi_639 + 0x00000004;
					edi_641 = edi_641 + 0x00000004;
					ecx_637 = ecx_637 - 0x00000001;
				}
				Mem655[esp_145 - 0x00000008:word32] = eax_136;
				Mem657[esp_145 - 0x0000000C:word32] = 0x004C578C;
				edx_155 = ebp_45 + 0xFFFFF768;
				*edxOut = edx_155;
				Mem661[esp_145 - 0x00000010:word32] = edx_155;
				Mem663[edi_641 + 0x00000000:word16] = Mem661[esi_639 + 0x00000000:word16];
				Mem667[esp_145 - 0x00000014:word32] = eax_136;
				MessageBoxW(Mem667[esp_145 - 0x00000014:HWND], Mem667[esp_145 - 16:LPCWSTR], Mem667[esp_145 - 12:LPCWSTR], Mem667[esp_145 - 8:UINT]);
				Mem670[ebp_45 + 0xFFFFF744:word32] = 0x00000001;
				edi_157 = MessageBoxW;
				esp_148 = esp_145 - 0x00000004;
			}
			else
				edi_157 = MessageBoxW;
			word32 esp_162 = esp_148 - 0x00000004;
			Mem163[esp_162 + 0x00000000:word32] = 0x004C57E0;
			Mem166[esp_162 - 0x00000004:word32] = ebp_45 + 0xFFFFFDE8;
			word32 esi_160 = lstrcmpW;
			esp_168 = esp_162 + 0x00000004;
			if (lstrcmpW(Mem166[esp_162 - 0x00000004:LPCWSTR], Mem166[esp_162 + 0x00000000:LPCWSTR]) != 0x00000000)
			{
				Mem331[esp_162 + 0x00000000:word32] = 0x004C57E8;
				Mem334[esp_162 - 0x00000004:word32] = ebp_45 + 0xFFFFFDE8;
				word32 eax_335 = lstrcmpW(Mem334[esp_162 - 0x00000004:LPCWSTR], Mem334[esp_162 + 0x00000000:LPCWSTR]);
				if (eax_335 == 0x00000000)
				{
					Mem342[esp_162 + 0x00000000:word32] = 0x004C590C;
					Mem344[esp_162 - 0x00000004:word32] = 0x80000001;
					SHLWAPI.dll!SHDeleteKeyW();
					if (eax_335 == 0x00000000)
					{
						Mem349[esp_162 - 0x00000008:word32] = eax_335;
						Mem351[esp_162 - 0x0000000C:word32] = 0x004C578C;
						Mem353[esp_162 - 0x00000010:word32] = 0x004C5E4C;
						Mem355[esp_162 - 0x00000014:word32] = eax_335;
						esp_168 = esp_162 - 0x00000014;
						edi_157();
					}
					else
					{
						Mem360[esp_162 - 0x00000008:word32] = 0x00000030;
						Mem362[esp_162 - 0x0000000C:word32] = 0x004C578C;
						Mem364[esp_162 - 0x00000010:word32] = 0x004C5E8C;
						Mem366[esp_162 - 0x00000014:word32] = 0x00000000;
						esp_168 = esp_162 - 0x00000014;
						edi_157();
					}
				}
				else
				{
					Mem368[esp_162 + 0x00000000:word32] = 0x004C5808;
					Mem371[esp_162 - 0x00000004:word32] = ebp_45 + 0xFFFFFDE8;
					word32 eax_372 = lstrcmpW(Mem371[esp_162 - 0x00000004:LPCWSTR], Mem371[esp_162 + 0x00000000:LPCWSTR]);
					if (eax_372 == 0x00000000)
					{
						Mem379[esp_162 + 0x00000000:word32] = 0x004C5830;
						word32 eax_383 = fn004AC910(eax_372 + 0x00000002, edx_155, ebx_134, ebp_45, esi_160, edi_157, es, ds, fs, gs, dwArg00, out edx_155);
						if (eax_383 != 0x00000000)
						{
							Mem389[esp_162 + 0x00000000:word32] = 0x00000000;
							Mem391[esp_162 - 0x00000004:word32] = 0x004C578C;
							Mem393[esp_162 - 0x00000008:word32] = 0x004C5898;
							Mem395[esp_162 - 0x0000000C:word32] = 0x00000000;
							esp_168 = esp_162 - 0x0000000C;
							edi_157();
						}
						else
						{
							Mem397[esp_162 + 0x00000000:word32] = 0x00000030;
							Mem399[esp_162 - 0x00000004:word32] = 0x004C578C;
							Mem401[esp_162 - 0x00000008:word32] = 0x004C5948;
							Mem403[esp_162 - 0x0000000C:word32] = 0x00000000;
							esp_168 = esp_162 - 0x0000000C;
							edi_157();
						}
					}
					else
					{
						Mem405[esp_162 + 0x00000000:word32] = 0x004C5854;
						edx_155 = ebp_45 + 0xFFFFFDE8;
						*edxOut = edx_155;
						Mem409[esp_162 - 0x00000004:word32] = edx_155;
						word32 eax_410 = lstrcmpW(Mem409[esp_162 - 0x00000004:LPCWSTR], Mem409[esp_162 + 0x00000000:LPCWSTR]);
						if (eax_410 == 0x00000000)
						{
							Mem417[esp_162 + 0x00000000:word32] = 0x004C5A14;
							word32 eax_422 = fn004ACB60(eax_410 + 0x00000002, 0x004C5874, ebx_134, ebp_45, esi_160, edi_157, es, ds, fs, gs, dwArg00, out edx_155);
							if (eax_422 != 0x00000000)
							{
								Mem428[esp_162 + 0x00000000:word32] = 0x00000000;
								Mem430[esp_162 - 0x00000004:word32] = 0x004C578C;
								Mem432[esp_162 - 0x00000008:word32] = 0x004C5A68;
								Mem434[esp_162 - 0x0000000C:word32] = 0x00000000;
								esp_168 = esp_162 - 0x0000000C;
								edi_157();
							}
							else
							{
								Mem436[esp_162 + 0x00000000:word32] = 0x00000030;
								Mem438[esp_162 - 0x00000004:word32] = 0x004C578C;
								Mem440[esp_162 - 0x00000008:word32] = 0x004C5B00;
								Mem442[esp_162 - 0x0000000C:word32] = 0x00000000;
								esp_168 = esp_162 - 0x0000000C;
								edi_157();
							}
						}
						else
						{
							Mem444[esp_162 + 0x00000000:word32] = 0x004C57BC;
							Mem447[esp_162 - 0x00000004:word32] = ebp_45 + 0xFFFFFDE8;
							if (lstrcmpW(Mem447[esp_162 - 0x00000004:LPCWSTR], Mem447[esp_162 + 0x00000000:LPCWSTR]) == 0x00000000)
							{
								Mem454[esp_162 + 0x00000000:word32] = 0x004C5BC8;
								Mem456[esp_162 - 0x00000004:word32] = 0x00000001;
								Mem460[esp_162 - 0x00000008:word32] = 0x00000000;
								word32 eax_461 = CreateMutexW(Mem460[esp_162 - 0x00000008:LPSECURITY_ATTRIBUTES], Mem460[esp_162 - 4:BOOL], Mem460[esp_162 + 0x00000000:LPCWSTR]);
								esp_168 = esp_162 + 0x00000004;
								if (GetLastError() == 0x000000B7)
								{
									Mem481[esp_162 + 0x00000000:word32] = 0x00000000;
									Mem483[esp_162 - 0x00000004:word32] = 0x004C57A4;
									word32 eax_484 = FindWindowW(Mem483[esp_162 - 0x00000004:LPCWSTR], Mem483[esp_162 + 0x00000000:LPCWSTR]);
									esp_168 = esp_162 + 0x00000004;
									if (eax_484 != 0x00000000)
									{
										Mem491[esp_162 + 0x00000000:word32] = ebp_45 + 0xFFFFF738;
										Mem493[esp_162 - 0x00000004:word32] = 0x00000000;
										Mem495[esp_162 - 0x00000008:word32] = 0x0000004A;
										Mem497[esp_162 - 0x0000000C:word32] = eax_484;
										Mem498[ebp_45 + 0xFFFFF73C:word32] = 0x00000000;
										Mem499[ebp_45 + 0xFFFFF740:word32] = 0x00000000;
										SendMessageW(Mem499[esp_162 - 0x0000000C:HWND], Mem499[esp_162 - 8:UINT], Mem499[esp_162 - 4:WPARAM], Mem499[esp_162 + 0x00000000:LPARAM]);
										Mem503[esp_162 + 0x00000000:word32] = eax_484;
										SetForegroundWindow(Mem503[esp_162 + 0x00000000:HWND]);
										Mem507[esp_162 + 0x00000000:word32] = 0x00000005;
										Mem509[esp_162 - 0x00000004:word32] = eax_484;
										ShowWindow(Mem509[esp_162 - 0x00000004:HWND], Mem509[esp_162 + 0x00000000:int32]);
										esp_168 = esp_162 + 0x00000004;
									}
								}
								if (eax_461 != 0x00000000)
								{
									word32 esp_476 = esp_168 - 0x00000004;
									Mem477[esp_476 + 0x00000000:word32] = eax_461;
									CloseHandle(Mem477[esp_476 + 0x00000000:HANDLE]);
									esp_168 = esp_476 + 0x00000004;
								}
								Mem475[ebp_45 + 0xFFFFF744:word32] = 0x00000001;
								continue;
							}
							else
							{
								Mem514[esp_162 + 0x00000000:word32] = GetCurrentProcessId();
								Mem516[esp_162 - 0x00000004:word32] = 0x00000000;
								Mem518[esp_162 - 0x00000008:word32] = 0x00000410;
								word32 eax_519 = OpenProcess(Mem518[esp_162 - 0x00000008:DWORD], Mem518[esp_162 - 4:BOOL], Mem518[esp_162 + 0x00000000:DWORD]);
								word32 esp_520 = esp_162 + 0x00000004;
								if (eax_519 != 0x00000000)
								{
									Mem625[esp_162 + 0x00000000:word32] = 0x00000104;
									Mem628[esp_162 - 0x00000004:word32] = ebp_45 + 0xFFFFFBE0;
									Mem630[esp_162 - 0x00000008:word32] = 0x00000000;
									Mem632[esp_162 - 0x0000000C:word32] = eax_519;
									PSAPI.DLL!GetModuleFileNameExW();
									Mem634[esp_162 - 0x00000010:word32] = eax_519;
									CloseHandle(Mem634[esp_162 - 0x00000010:HANDLE]);
									esp_520 = esp_162 - 0x0000000C;
								}
								word32 esp_528 = esp_520 - 0x00000004;
								Mem529[esp_528 + 0x00000000:word32] = ebp_45 + 0xFFFFFBE0;
								SHLWAPI.dll!PathRemoveFileSpecW();
								word32 edi_533 = fn00467360(ebp_45 + 0xFFFFFDE8, ebp_45 + 0xFFFFFBE0, ebp_45, ebp_45 + 0xFFFFF9D8, es, ds, fs, gs);
								Mem542[ebp_45 + 0xFFFFF760:word32] = 0x00000007;
								Mem543[ebp_45 + 0xFFFFF75C:word32] = 0x00000000;
								Mem544[ebp_45 + 0xFFFFF74C:word16] = 0x0000;
								word32 ebx_536 = 0x00000007;
								word32 eax_540 = edi_533;
								do
								{
									eax_540 = eax_864 + 0x00000002;
									word32 eax_864 = eax_540;
								} while (Mem544[eax_864 + 0x00000000:word16] != 0x0000);
								Mem558[esp_528 - 0x00000004:word32] = eax_540 - (edi_533 + 0x00000002) >> 0x00000001;
								Mem561[esp_528 - 0x00000008:word32] = ebp_45 + 0xFFFFF9D8;
								word32 esi_564;
								ebp_45 = fn004094F0(ebp_45 + 0xFFFFF74C, 0x00000007, ebp_45, es, ds, fs, gs, dwArg00, dwArg04, out esi_564);
								Mem567[ebp_45 - 0x00000004:word32] = esi_564;
								word32 edi_568 = Mem567[0x004EF704:word32];
								word32 ecx_569 = Mem567[edi_568 + 0x00000004:word32];
								Mem573[esp_528 - 0x00000004:word32] = ebp_45 + 0xFFFFF74C;
								Mem575[esp_528 - 0x00000008:word32] = ecx_569;
								Mem577[esp_528 - 0x0000000C:word32] = edi_568;
								word32 eax_578;
								D = fn0040A200(ebp_45, esi_564, es, ds, fs, gs, out eax_578);
								esp_168 = esp_528 - 0x00000008;
								edx_155 = 0x09249248 - Mem577[0x004EF708:word32];
								*edxOut = edx_155;
								if (edx_155 >=u 0x00000001)
								{
									Mem587[0x004EF708:word32] = Mem577[0x004EF708:word32] + 0x00000001;
									Mem588[edi_568 + 0x00000004:word32] = eax_578;
									Mem590[Mem588[eax_578 + 0x00000004:word32]:word32] = eax_578;
									Mem591[ebp_45 - 0x00000004:word32] = 0xFFFFFFFF;
									if (Mem591[ebp_45 + 0xFFFFF760:word32] >=u 0x00000008)
									{
										Mem609[esp_528 - 0x0000000C:word32] = Mem591[ebp_45 + 0xFFFFF74C:word32];
										*edxOut = fn004396BC(ebp_45, esi_564, es, ds, fs, gs, out ebx_536, out esi_564);
										esp_168 = esp_528 + 0xFFFFFFF4;
									}
									Mem604[ebp_45 + 0xFFFFF760:word32] = ebx_536;
									Mem605[ebp_45 + 0xFFFFF75C:word32] = esi_564;
									Mem606[ebp_45 + 0xFFFFF74C:word16] = 0x0000;
									continue;
								}
								else
								{
									Mem618[esp_528 - 0x0000000C:word32] = 0x004CB8F8;
									word32 ebx_620;
									fn00426ABB(ebp_45, es, ds, fs, gs, dwArg00, out edx_155, out ebx_620, out ebp_45);
									esp_168 = esp_528 - 0x00000008;
								}
							}
						}
					}
				}
			}
			word32 ecx_172 = 0x00000000;
			if (Mem166[ebx_134 + 0x00000000:word16] == 0x0000)
			{
				Mem329[ebp_45 + 0xFFFFFDE8:word16] = 0x0000;
				eax_325 = 0x00000000;
				goto l00474414;
			}
			word32 eax_177 = (word32) Mem166[ebx_134 + 0x00000000:word16];
			while (eax_177 == 0x00000020 || eax_177 == 0x00000009)
			{
				ebx_134 = ebx_134 + 0x00000002;
				eax_177 = (word32) Mem166[ebx_134 + 0x00000000:word16];
			}
			word32 eax_186 = (word32) Mem166[ebx_134 + 0x00000000:word16];
			word16 ax_187 = (word16) eax_186;
			if (eax_186 == 0x00000022)
			{
				word16 ax_269 = (word16) (word32) Mem166[ebx_134 + 0x00000002:word16];
				word32 ebx_270 = ebx_134 + 0x00000002;
				if (ax_269 != 0x0000)
					do
					{
						if (ax_269 == 0x0022)
							break;
						(ebp_45 + 0xFFFFFDE8)[ecx_172 * 0x0002] = ax_269;
						ebx_270 = ebx_270 + 0x00000002;
						ax_269 = (word16) (word32) Mem294[ebx_270 + 0x00000000:word16];
						ecx_172 = ecx_172 + 0x00000001;
					} while (ax_269 != 0x0000);
				ebx_134 = ebx_270 + 0x00000002;
			}
			else if (ax_187 != 0x0000)
				do
				{
					if (ax_187 == 0x0020 || ax_187 == 0x0009)
						break;
					(ebp_45 + 0xFFFFFDE8)[ecx_172 * 0x0002] = ax_187;
					ebx_134 = ebx_134 + 0x00000002;
					ax_187 = (word16) (word32) Mem317[ebx_134 + 0x00000000:word16];
					ecx_172 = ecx_172 + 0x00000001;
				} while (ax_187 != 0x0000);
			(ebp_45 + 0xFFFFFDE8)[ecx_172 * 0x0002] = 0x0000;
			(ebp_45 + 0xFFFFFDE8)[ecx_172 * 0x0002] = 0x0000;
			word32 ebx_206 = ebx_134;
			word32 eax_208 = (word32) Mem205[ebx_206 + 0x00000000:word16];
			while (eax_208 == 0x00000020 || eax_208 == 0x00000009)
			{
				ebx_206 = ebx_206 + 0x00000002;
				eax_208 = (word32) Mem205[ebx_206 + 0x00000000:word16];
			}
			Mem220[ebp_45 + 0xFFFFF748:word32] = ebx_206;
			Mem221[0x004EF4DC:word32] = 0x00000001;
			word32 eax_217 = 0x004EF3E0;
			word32 edi_219 = ebp_45 + 0xFFFFFDE8;
			edx_155 = 0x00000020;
			do
			{
				if (edx_155 + 0x7FFFFFDE == 0x00000000)
				{
					if (edx_155 == 0x00000000)
						eax_217 = eax_217 - 0x00000002;
					Mem248[eax_217 + 0x00000000:word16] = 0x0000;
					*edxOut = 0x00000000;
					continue;
				}
				word16 cx_253 = (word16) (word32) Mem221[edi_219 - 0x004EF3E0 + eax_217:word16];
				if (cx_253 == 0x0000)
					;
				Mem257[eax_217 + 0x00000000:word16] = cx_253;
				edx_155 = edx_155 - 0x00000001;
				*edxOut = edx_155;
				eax_217 = eax_217 + 0x00000002;
				word16 dx_262 = (word16) edx_155;
			} while (edx_155 != 0x00000000);
			Mem267[eax_217 - 0x00000002:word16] = dx_262;
			ebx_110 = Mem31[ebp_45 + 0xFFFFF748:word32];
			ecx_125 = 0x00000000;
		}
	}
	else
	{
		Mem758[ebp_45 + 0xFFFFFDE8:word16] = 0x0000;
		Mem759[ebp_45 + 0xFFFFF748:word32] = 0x00000000;
		*edxOut = 0x00000000;
		goto l00474205;
	}
l004746CD:
	word32 eax_84 = Mem31[ebp_45 + 0xFFFFF744:word32];
	Mem86[fs:0x00000000:word32] = Mem31[ebp_45 - 0x0000000C:word32];
	word32 esp_88 = esp_168 + 0x00000004;
	word32 ecx_99;
	word32 eax_100;
	*eaxOut = fn004394A0(eax_84, Mem86[ebp_45 - 0x00000010:word32] ^ ebp_45, edx_155, Mem86[esp_88 + 0x00000008:word32], ebp_45, Mem86[esp_88 + 0x00000004:word32], Mem86[esp_88 + 0x00000000:word32], es, ds, fs, gs, ebp, out ecx_99);
	return D;
}

word32 fn004746F0(word32 edx, word32 esi, selector es, selector ds, selector fs, selector gs, ptr32 axOut)
{
	LoadImageW(esi, 0x00000069, 0x00000001, 0x00000030, 0x00000030, 0x00000080);
	LoadImageW(esi, 0x000000CE, 0x00000001, 0x00000010, 0x00000010, 0x00000080);
	LoadCursorW(0x00000000, 0x00007F00);
	word16 ax_73;
	return fn00418400(edx, es, ds, fs, gs, out ax_73);
}

word32 fn00474780(word32 edx, word32 ebp, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 ebxOut, ptr32 esiOut, ptr32 ediOut)
{
	word32 esp_1097;
	__align(fp - 0x00000004);
	word32 ebp_152 = fp - 0x00000004;
	word32 edi_144 = dwArg04;
	if (GetVersionExW(fp - 0x0000032C) != 0x00000000 && dwLoc0328 <u 0x00000005)
	{
		MessageBoxW(0x00000000, 0x004C5F80, 0x004C5F4C, 0x00000010);
		esp_1097 = fp - 0x000003D4;
l004747DF:
		word32 esp_88 = esp_1097 + 0x00000004;
		word32 edi_87 = Mem0[esp_1097 + 0x00000000:word32];
		*ediOut = edi_87;
		word32 esi_89 = Mem0[esp_88 + 0x00000000:word32];
		*esiOut = esi_89;
		word32 ebx_91 = Mem0[esp_88 + 0x00000004:word32];
		*ebxOut = ebx_91;
		word32 ecx_97;
		return fn004394A0(0x00000000, Mem0[esp_88 + 0x000003C8:word32] ^ esp_88 + 0x00000008, edx, ebx_91, ebp_152, esi_89, edi_87, es, ds, fs, gs, ebp, out ecx_97);
	}
	else
	{
		fn00418540(edx, es, ds, fs, gs);
		Mem119[fp - 0x000003D8:word32] = 0x00000000;
		OleInitialize(Mem119[fp - 0x000003D8:LPVOID]);
		GetCommandLineW();
		word32 eax_125;
		fn00474110(fp - 0x00000004, es, ds, fs, gs, out eax_125, out edx);
		Mem130[fp - 0x000003B0:word32] = eax_125;
		esp_1097 = fp - 0x000003D4;
		if (Mem119[0x004EF708:word32] >u 0x00000000)
		{
			Mem782[fp - 0x000003D8:word32] = fp - 0x000003C8;
			Mem784[fp - 0x000003DC:word32] = 0x00000000;
			Mem786[fp - 0x000003E0:word32] = 0x00000000;
			Mem788[fp - 0x000003E4:word32] = 0x00000003;
			Mem790[fp - 0x000003E8:word32] = 0x00000000;
			Mem791[fp - 0x000003C8:word32] = 0x00000000;
			Mem792[fp - 0x000003B4:word32] = 0x00000000;
			SHELL32.dll!SHGetFolderLocation();
			edx = fp - 0x000003C8;
			esp_1097 = fp - 0x000003E8;
			if (eax_125 >= 0x00000000)
			{
				word32 eax_796 = Mem792[0x004EF704:word32];
				word32 esi_797 = Mem792[eax_796 + 0x00000000:word32];
				Mem798[fp - 0x000003CC:word32] = esi_797;
				if (esi_797 != eax_796)
					while (true)
					{
						word32 edi_1083;
						word32 esi_849 = esi_797 + 0x00000008;
						Mem852[esp_1097 + 0x00000018:word32] = esi_849;
						if (Mem798[esi_849 + 0x00000014:word32] >=u 0x00000008)
							edi_1083 = Mem852[esi_849 + 0x00000000:word32];
						else
							edi_1083 = esi_849;
						Mem855[esp_1097 + 0x00000014:word32] = 0x00000000;
						word32 edx_856;
						word32 esi_1017;
						if (fn00467810(edx, esp_1097 + 0x00000020, ebp_152, esi_849, edi_1083, es, ds, fs, gs, out edx_856, out esi_1017) >= 0x00000000)
						{
							word32 ecx_1041;
							word32 eax_909 = Mem855[esp_1097 + 0x00000020:word32];
							word32 ecx_910 = Mem855[esp_1097 + 0x0000000C:word32];
							word32 esp_911 = esp_1097 - 0x00000004;
							Mem912[esp_911 + 0x00000000:word32] = 0x00000000;
							Mem914[esp_911 - 0x00000004:word32] = eax_909;
							Mem916[esp_911 - 0x00000008:word32] = ecx_910;
							SHELL32.dll!Ordinal_23();
							word32 esp_1008 = esp_911 - 0x00000008;
							if (eax_909 != 0x00000000)
							{
								word32 eax_1077 = fn00466190(Mem916[esp_911 + 0x00000018:word32], Mem916[esp_911 + 0x00000004:word32], out ecx_1041);
								esi_1017 = Mem916[esp_911 + 0x00000010:word32];
								if (eax_1077 == 0x00000000)
								{
									Mem1082[esp_911 + 0x0000000C:word32] = 0x00000001;
l0047497A:
									word32 eax_1012;
									word32 esp_964 = esp_1008 - 0x00000004;
									Mem965[esp_964 + 0x00000000:word32] = esp_1008 + 0x000001C0;
									Mem967[esp_964 - 0x00000004:word32] = 0x004C5AD4;
									word32 ebx_968;
									fn00466280(ecx_1041, dwArg00, dwArg04, out ebx_968);
									if (Mem977[esi_1017 + 0x00000014:word32] >=u 0x00000008)
										eax_1012 = Mem977[esi_1017 + 0x00000000:word32];
									else
										eax_1012 = esi_1017;
									Mem986[esp_964 + 0x00000000:word32] = 0x00000001;
									Mem988[esp_964 - 0x00000004:word32] = 0x00000000;
									Mem990[esp_964 - 0x00000008:word32] = eax_1012;
									Mem993[esp_964 - 0x0000000C:word32] = esp_964 + 0x000001C4;
									Mem995[esp_964 - 0x00000010:word32] = 0x004C5EF4;
									Mem997[esp_964 - 0x00000014:word32] = 0x00000000;
									ShellExecuteW(Mem997[esp_964 - 0x00000014:HWND], Mem997[esp_964 - 16:LPCWSTR], Mem997[esp_964 - 12:LPCWSTR], Mem997[esp_964 - 8:LPCWSTR], Mem997[esp_964 - 4:LPCWSTR], Mem997[esp_964 + 0x00000000:INT]);
									Mem1003[esp_964 + 0x00000000:word32] = Mem997[esp_964 + 0x00000020:word32];
									Mem1010[esp_964 + 0x00000020:word32] = Mem1003[fn0040A1A0(esp_964 + 0x00000060, 0x004EF704, es, ds, fs, gs, dwArg00, out edx):word32];
									esp_1008 = esp_964 + 0x00000004;
								}
								else
								{
l004748E8:
									Mem1022[esp_911 - 0x0000000C:word32] = esp_911 + 0x000000A0;
									Mem1023[esp_911 + 0x000000A0:word32] = 0x00000114;
									edx = esp_911 + 0x000000A0;
									esp_1008 = esp_911 - 0x00000008;
									if (GetVersionExW(Mem1023[esp_911 - 0x0000000C:LPOSVERSIONINFOW]) != 0x00000000 && Mem1023[esp_911 + 0x000000A4:word32] >=u 0x00000006)
									{
										Mem1033[esp_911 + 0x00000008:word32] = 0x00000000;
										if (fn00467810(esp_911 + 0x000000A0, esp_911 + 0x00000008, ebp_152, esi_1017, 0x004C6040, es, ds, fs, gs, out edx, out esi_1017) >= 0x00000000)
										{
											word32 eax_1040 = Mem1033[esp_911 + 0x00000018:word32];
											ecx_1041 = Mem1033[esp_911 + 0x00000008:word32];
											Mem1044[esp_911 - 0x0000000C:word32] = 0x00000000;
											Mem1046[esp_911 - 0x00000010:word32] = eax_1040;
											Mem1048[esp_911 - 0x00000014:word32] = ecx_1041;
											SHELL32.dll!Ordinal_23();
											if (eax_1040 != 0x00000000)
											{
												word32 eax_1068 = fn00466190(Mem1048[esp_911 + 0x0000000C:word32], Mem1048[esp_911 - 0x00000004:word32], out ecx_1041);
												esi_1017 = Mem1048[esp_911 + 0x00000004:word32];
												if (eax_1068 == 0x00000000)
													Mem1073[esp_911 + 0x00000000:word32] = 0x00000001;
											}
											edx = Mem1048[esp_911 - 0x00000004:word32];
											Mem1061[esp_911 - 0x00000018:word32] = edx;
											CoTaskMemFree(Mem1061[esp_911 - 0x00000018:LPVOID]);
											esp_1008 = esp_911 - 0x00000014;
											if (Mem1061[esp_911 + 0x00000000:word32] != 0x00000000)
												goto l0047497A;
										}
									}
								}
							}
							else
								goto l004748E8;
							word32 esp_940 = esp_1008 - 0x00000004;
							Mem941[esp_940 + 0x00000000:word32] = Mem916[esp_1008 + 0x00000020:word32];
							CoTaskMemFree(Mem941[esp_940 + 0x00000000:LPVOID]);
							esp_1097 = esp_940 + 0x00000004;
							if (Mem941[esp_940 + 0x00000018:word32] == 0x00000000)
							{
l004749E0:
								edx = Mem855[esp_1097 + 0x0000001C:word32];
								Mem908[esp_1097 + 0x0000001C:word32] = Mem855[edx + 0x00000000:word32];
							}
						}
						else
							goto l004749E0;
						if (Mem855[esp_1097 + 0x0000001C:word32] == Mem855[0x004EF704:word32])
						{
							edi_144 = Mem855[esp_1097 + 0x00000028:word32];
							goto l004749FE;
						}
						esi_797 = Mem855[esp_1097 + 0x0000001C:word32];
					}
l004749FE:
				if (Mem798[0x004EF708:word32] == 0x00000000)
					Mem828[esp_1097 + 0x00000024:word32] = 0x00000001;
				edx = Mem798[esp_1097 + 0x0000000C:word32];
				word32 esp_825 = esp_1097 - 0x00000004;
				Mem826[esp_825 + 0x00000000:word32] = edx;
				CoTaskMemFree(Mem826[esp_825 + 0x00000000:LPVOID]);
				esp_1097 = esp_825 + 0x00000004;
			}
		}
		if (Mem130[esp_1097 + 0x00000024:word32] == 0x00000000)
		{
			word32 edx_164;
			word32 eax_165;
			word32 eax_159 = fn0048F8E0(ebp_152, es, ds, fs, gs);
			Mem160[esp_1097 + 0x0000000C:word32] = eax_159;
			if (eax_159 != 0x00000000)
				eax_165 = fn0046C150(ebp_152, es, ds, fs, gs, ebp, dwArg00, out edx_164, out ebp_152);
			else
				eax_165 = fn00486920(out edx_164);
			word32 esp_168 = esp_1097 - 0x00000004;
			Mem169[esp_168 + 0x00000000:word32] = 0x004C6094;
			Mem171[esp_168 - 0x00000004:word32] = 0x00000001;
			Mem173[esp_168 - 0x00000008:word32] = 0x00000000;
			Mem177[esp_168 + 0x00000028:word32] = CreateMutexW(Mem173[esp_168 - 0x00000008:LPSECURITY_ATTRIBUTES], Mem173[esp_168 - 4:BOOL], Mem173[esp_168 + 0x00000000:LPCWSTR]);
			word32 esp_176 = esp_168 + 0x00000004;
			if (eax_165 == 0x00000000 && GetLastError() == 0x000000B7)
			{
				Mem574[esp_168 + 0x00000000:word32] = eax_165;
				Mem576[esp_168 - 0x00000004:word32] = 0x004C57A4;
				word32 eax_577 = FindWindowW(Mem576[esp_168 - 0x00000004:LPCWSTR], Mem576[esp_168 + 0x00000000:LPCWSTR]);
				esp_176 = esp_168 + 0x00000004;
				word32 ebx_579 = eax_577;
				edx_164 = 0x00000000;
				if (eax_577 == 0x00000000)
				{
l00474BAE:
					word32 esp_201;
					word32 esp_184 = esp_176 - 0x00000004;
					Mem185[esp_184 + 0x00000000:word32] = 0x004C5F64;
					word32 edx_186;
					word32 eax_187 = fn0040A920(edx_164, es, ds, fs, gs, out edx_186);
					Mem192[esp_184 + 0x0000001C:word32] = eax_187;
					word16 ax_193;
					word32 edx_194 = fn004746F0(edx_186, edi_144, es, ds, fs, gs, out ax_193);
					if (ax_193 == 0x0000)
					{
						Mem228[esp_184 + 0x00000000:word32] = 0x00000010;
						Mem230[esp_184 - 0x00000004:word32] = 0x004C578C;
						Mem232[esp_184 - 0x00000008:word32] = 0x004C600C;
						esp_201 = esp_184 - 0x00000008;
l00474BD6:
						word32 esp_202 = esp_201 - 0x00000004;
						Mem203[esp_202 + 0x00000000:word32] = 0x00000000;
						MessageBoxW(Mem203[esp_202 + 0x00000000:HWND], Mem203[esp_202 + 4:LPCWSTR], Mem203[esp_202 + 8:LPCWSTR], Mem203[esp_202 + 12:UINT]);
						Mem207[esp_202 + 0x0000000C:word32] = eax_187;
						FreeLibrary(Mem207[esp_202 + 0x0000000C:HMODULE]);
						OleUninitialize();
						word32 edi_211 = Mem207[esp_202 + 0x00000010:word32];
						*ediOut = edi_211;
						word32 esi_213 = Mem207[esp_202 + 0x00000014:word32];
						*esiOut = esi_213;
						word32 ebx_215 = Mem207[esp_202 + 0x00000018:word32];
						*ebxOut = ebx_215;
						word32 ecx_221;
						return fn004394A0(0x00000000, Mem207[esp_202 + 0x000003DC:word32] ^ esp_202 + 0x0000001C, edx_194, ebx_215, ebp_152, esi_213, edi_211, es, ds, fs, gs, ebp, out ecx_221);
					}
					else
					{
						Mem234[esp_184 + 0x00000000:word32] = 0x00473FB0;
						SetUnhandledExceptionFilter(Mem234[esp_184 + 0x00000000:LPTOP_LEVEL_EXCEPTION_FILTER]);
						Mem238[esp_184 + 0x00000000:word32] = 0x00000000;
						Mem240[esp_184 - 0x00000004:word32] = edi_144;
						Mem242[esp_184 - 0x00000008:word32] = 0x00000000;
						Mem244[esp_184 - 0x0000000C:word32] = 0x80000000;
						Mem246[esp_184 - 0x00000010:word32] = 0x80000000;
						Mem248[esp_184 - 0x00000014:word32] = 0x80000000;
						Mem250[esp_184 - 0x00000018:word32] = 0x80000000;
						Mem252[esp_184 - 0x0000001C:word32] = 0x00CF0000;
						Mem254[esp_184 - 0x00000020:word32] = 0x004C578C;
						Mem256[esp_184 - 0x00000024:word32] = 0x004C57A4;
						word32 eax_258 = fn00418180(edx_194, es, ds, fs, gs, out edx_194);
						Mem261[esp_184 + 0x00000014:word32] = eax_258;
						word32 esp_259 = esp_184 + 0x00000004;
						word32 edi_260 = eax_258;
						if (eax_258 == 0x00000000)
						{
							Mem266[esp_184 + 0x00000000:word32] = 0x00000010;
							Mem268[esp_184 - 0x00000004:word32] = 0x004C578C;
							Mem270[esp_184 - 0x00000008:word32] = 0x004C60AC;
							esp_201 = esp_184 - 0x00000008;
							goto l00474BD6;
						}
						else
						{
							word32 eax_278;
							word32 ecx_277;
							if (Mem261[esp_184 + 0x00000010:word32] != 0x00000000)
							{
								Mem558[esp_184 + 0x00000000:word32] = esp_184 + 0x00000080;
								eax_278 = fn0046C3F0(ebp_152, es, ds, fs, gs, dwArg00, out ecx_277, out edi_260);
								esp_259 = esp_184 + 0x00000004;
							}
							else
								eax_278 = fn00486980(esp_184 + 0x00000080, out ecx_277);
							word32 ebx_281 = Mem261[ebp_152 + 0x00000014:word32];
							if (eax_278 == 0x00000000)
							{
								word32 esp_513 = esp_259 - 0x00000004;
								Mem514[esp_513 + 0x00000000:word32] = 0x00000000;
								Mem515[esp_513 + 0x00000080:word32] = 0x0000002C;
								Mem516[esp_513 + 0x00000088:word32] = ebx_281;
								Mem517[esp_513 + 0x00000084:word32] = 0x00000000;
								Mem518[esp_513 + 0x0000008C:word32] = 0x00000000;
								Mem519[esp_513 + 0x00000090:word32] = 0x00000000;
								word32 ecx_510 = ecx_277 | 0xFFFFFFFF;
								Mem520[esp_513 + 0x00000094:word32] = ecx_510;
								Mem521[esp_513 + 0x00000098:word32] = ecx_510;
								word32 eax_522 = GetSystemMetrics(Mem521[esp_513 + 0x00000000:int32]);
								Mem525[esp_513 + 0x00000000:word32] = 0x00000001;
								Mem526[esp_513 + 0x00000010:word32] = eax_522;
								word32 eax_527 = GetSystemMetrics(Mem526[esp_513 + 0x00000000:int32]);
								real64 rLoc1_529 = (real64) Mem526[esp_513 + 0x00000010:int32];
								real64 rLoc2_530 = Mem526[0x004CCB28:real64];
								Mem531[esp_513 + 0x00000018:word32] = eax_527;
								word32 eax_533 = fn004B5300(rLoc2_530 * rLoc1_529);
								real64 rLoc2_534 = (real64) Mem531[esp_513 + 0x00000018:int32];
								real64 rLoc3_535 = Mem531[0x004CCB20:real64];
								Mem537[esp_513 + 0x0000009C:word32] = eax_533;
								word32 eax_539 = fn004B5300(rLoc3_535 * rLoc2_534);
								real64 rLoc2_543 = rLoc1_529 * Mem537[0x004CCB18:real64];
								Mem545[esp_513 + 0x000000A0:word32] = eax_539;
								word32 eax_546 = fn004B5300(rLoc2_543);
								real64 rLoc1_547 = rLoc2_534 * Mem545[0x004CCB10:real64];
								Mem550[esp_513 + 0x000000A4:word32] = eax_533 - eax_546;
								Mem554[esp_513 + 0x000000A8:word32] = eax_539 - fn004B5300(rLoc1_547);
								esp_259 = esp_513 + 0x00000004;
								edi_260 = Mem554[esp_513 + 0x00000014:word32];
							}
							if (ebx_281 == 0x00000006 || (ebx_281 == 0x00000002 || ebx_281 == 0x00000003))
								Mem503[esp_259 + 0x00000084:word32] = ebx_281;
							word32 esp_300 = esp_259 - 0x00000004;
							Mem301[esp_300 + 0x00000000:word32] = esp_259 + 0x0000007C;
							Mem303[esp_300 - 0x00000004:word32] = edi_260;
							SetWindowPlacement(Mem303[esp_300 - 0x00000004:HWND], Mem303[esp_300 + 0x00000000:(ptr WINDOWPLACEMENT)]);
							Mem307[esp_300 + 0x00000000:word32] = edi_260;
							UpdateWindow(Mem307[esp_300 + 0x00000000:HWND]);
							word32 ecx_310 = Mem307[esp_300 + 0x0000002C:word32];
							Mem312[esp_300 + 0x00000000:word32] = 0x00000098;
							Mem314[esp_300 - 0x00000004:word32] = ecx_310;
							word32 eax_315 = LoadAcceleratorsW(Mem314[esp_300 - 0x00000004:HINSTANCE], Mem314[esp_300 + 0x00000000:LPCWSTR]);
							Mem318[esp_300 + 0x00000000:word32] = 0x00000000;
							Mem320[esp_300 - 0x00000004:word32] = 0x00000000;
							Mem322[esp_300 - 0x00000008:word32] = 0x00000000;
							Mem326[esp_300 - 0x0000000C:word32] = esp_300 + 0x00000044;
							word32 edx_323 = esp_300 + 0x00000044;
							word32 ebx_327 = eax_315;
							word32 esp_329 = esp_300 + 0x00000004;
							if (GetMessageW(Mem326[esp_300 - 0x0000000C:LPMSG], Mem326[esp_300 - 8:HWND], Mem326[esp_300 - 4:UINT], Mem326[esp_300 + 0x00000000:UINT]) > 0x00000000)
							{
								word32 esi_392 = SendMessageW;
								esp_329 = esp_300 + 0x00000004 + 0x00000040;
								do
								{
									word32 ecx_410 = Mem326[0x004EF424:word32];
									word32 esp_412 = esp_329 - 0x00000004;
									Mem413[esp_412 + 0x00000000:word32] = esp_329 + 0x00000000;
									Mem415[esp_412 - 0x00000004:word32] = ecx_410;
									word32 eax_416 = IsDialogMessageW(Mem415[esp_412 - 0x00000004:HWND], Mem415[esp_412 + 0x00000000:LPMSG]);
									word32 esp_418 = esp_412 + 0x00000004;
									if (eax_416 == 0x00000000)
									{
										Mem462[esp_412 + 0x00000000:word32] = esp_412 + 0x00000044;
										Mem464[esp_412 - 0x00000004:word32] = eax_416;
										word32 eax_465 = Mem464[0x004EF420:word32];
										Mem467[esp_412 - 0x00000008:word32] = 0x00000475;
										Mem469[esp_412 - 0x0000000C:word32] = eax_465;
										esp_418 = esp_412 + 0x00000004;
										if (SendMessageW(Mem469[esp_412 - 0x0000000C:HWND], Mem469[esp_412 - 8:UINT], Mem469[esp_412 - 0x00000004:WPARAM], Mem469[esp_412 + 0x00000000:LPARAM]) == 0xFFFFFFC0)
										{
											Mem478[esp_412 + 0x00000000:word32] = esp_412 + 0x00000044;
											Mem480[esp_412 - 0x00000004:word32] = ebx_327;
											Mem482[esp_412 - 0x00000008:word32] = edi_260;
											esp_418 = esp_412 + 0x00000004;
											if (TranslateAcceleratorW(Mem482[esp_412 - 0x00000008:HWND], Mem482[esp_412 - 0x00000004:HACCEL], Mem482[esp_412 + 0x00000000:LPMSG]) == 0x00000000)
											{
												Mem492[esp_412 + 0x00000000:word32] = esp_412 + 0x00000044;
												TranslateMessage(Mem492[esp_412 + 0x00000000:(ptr MSG)]);
												Mem497[esp_412 + 0x00000000:word32] = esp_412 + 0x00000044;
												DispatchMessageW(Mem497[esp_412 + 0x00000000:(ptr MSG)]);
												esp_418 = esp_412 + 0x00000004;
											}
										}
									}
									word32 ecx_423 = Mem415[0x004EF420:word32];
									word32 esp_424 = esp_418 - 0x00000004;
									Mem425[esp_424 + 0x00000000:word32] = 0x00000000;
									Mem427[esp_424 - 0x00000004:word32] = 0x00000000;
									Mem429[esp_424 - 0x00000008:word32] = 0x00000476;
									Mem431[esp_424 - 0x0000000C:word32] = ecx_423;
									word32 esp_430 = esp_424 - 0x0000000C;
									esi_392();
									if (eax_416 == 0x00000000)
									{
										edx_323 = Mem431[0x004EF420:word32];
										Mem455[esp_424 - 0x00000010:word32] = edx_323;
										DestroyWindow(Mem455[esp_424 - 0x00000010:HWND]);
										Mem458[0x004EF420:word32] = 0x00000000;
										esp_430 = esp_424 - 0x0000000C;
									}
									word32 esp_439 = esp_430 - 0x00000004;
									Mem440[esp_439 + 0x00000000:word32] = 0x00000000;
									Mem442[esp_439 - 0x00000004:word32] = 0x00000000;
									Mem444[esp_439 - 0x00000008:word32] = 0x00000000;
									Mem447[esp_439 - 0x0000000C:word32] = esp_439 + 0x00000044;
									esp_329 = esp_439 + 0x00000004;
								} while (GetMessageW(Mem447[esp_439 - 0x0000000C:LPMSG], Mem447[esp_439 - 8:HWND], Mem447[esp_439 - 4:UINT], Mem447[esp_439 + 0x00000000:UINT]) > 0x00000000);
							}
							word32 esp_349 = esp_329 - 0x00000004;
							Mem350[esp_349 + 0x00000000:word32] = Mem326[esp_329 + 0x00000018:word32];
							FreeLibrary(Mem350[esp_349 + 0x00000000:HMODULE]);
							OleUninitialize();
							if (eax_361 != 0x00000000)
							{
								Mem385[esp_349 + 0x00000000:word32] = eax_361;
								Mem389[esp_349 + 0x00000000:word32] = CloseHandle(Mem385[esp_349 + 0x00000000:HANDLE]);
								CloseHandle(Mem389[esp_349 + 0x00000000:HANDLE]);
								esp_360 = esp_349 + 0x00000004;
							}
							word32 esp_370 = esp_360 + 0x00000004;
							word32 edi_369 = Mem358[esp_360 + 0x00000000:word32];
							*ediOut = edi_369;
							word32 esi_371 = Mem358[esp_370 + 0x00000000:word32];
							*esiOut = esi_371;
							word32 ebx_373 = Mem358[esp_370 + 0x00000004:word32];
							*ebxOut = ebx_373;
							word32 ecx_378;
							return fn004394A0(Mem358[esp_360 + 0x00000048:word32], Mem358[esp_360 + 0x000003CC:word32] ^ esp_370 + 0x00000008, edx_323, ebx_373, ebp_152, esi_371, edi_369, es, ds, fs, gs, ebp, out ecx_378);
						}
					}
				}
				else
				{
					if (Mem576[0x004EF708:word32] != 0x00000000)
					{
						word32 eax_626 = Mem576[0x004EF704:word32];
						word32 edi_627 = Mem576[eax_626 + 0x00000000:word32];
						Mem629[esp_168 + 0x0000002C:word32] = eax_626;
						if (edi_627 != eax_626)
							while (true)
							{
								word32 esp_640 = esp_176 - 0x00000004;
								Mem641[esp_640 + 0x00000000:word32] = 0xFFFFFFFF;
								Mem647[esp_640 - 0x00000004:word32] = edx_164;
								Mem648[esp_640 + 0x00000064:word16] = 0x0000;
								Mem650[esp_640 - 0x00000008:word32] = edi_627 + 0x00000008;
								Mem652[esp_640 + 0x00000078:word32] = 0x00000007;
								Mem653[esp_640 + 0x00000074:word32] = edx_164;
								fn004090E0(esp_640 + 0x00000064, ebp_152, es, ds, fs, gs, dwArg00, dwArg04);
								word32 esi_658 = Mem653[esp_640 + 0x00000064:word32];
								if (Mem653[esp_640 + 0x00000078:word32] <u 0x00000008)
									esi_658 = esp_640 + 0x00000064;
								word32 eax_660 = esp_640 + 0x000001C4;
								word32 edx_663 = 0x7FFFFFFE;
								word32 esi_665 = esi_658 - (esp_640 + 0x000001C4);
								do
								{
									if (edx_663 + 0x00000000 == 0x00000000)
										if (edx_663 == 0x00000000)
											goto l00474B12;
									word16 cx_746 = (word16) (word32) Mem653[eax_660 + esi_665:word16];
									if (cx_746 == 0x0000)
										;
									Mem750[eax_660 + 0x00000000:word16] = cx_746;
									eax_660 = eax_660 + 0x00000002;
									edx_663 = edx_663 - 0x00000001;
								} while (edx_663 != 0x80000106);
l00474B12:
								eax_660 = eax_660 - 0x00000002 - 0x00000002;
l00474B15:
								Mem685[eax_660 + 0x00000000:word16] = 0x0000;
								word32 eax_686 = Mem685[esp_640 + 0x00000074:word32];
								Mem690[esp_640 + 0x00000000:word32] = esp_640 + 0x00000030;
								Mem692[esp_640 - 0x00000004:word32] = 0x00000000;
								Mem694[esp_640 - 0x00000008:word32] = 0x0000004A;
								Mem698[esp_640 - 0x0000000C:word32] = ebx_579;
								Mem699[esp_640 + 0x00000034:word32] = eax_686 + 0x00000002 + eax_686;
								Mem700[esp_640 + 0x00000038:word32] = esp_640 + 0x000001C4;
								SendMessageW(Mem700[esp_640 - 0x0000000C:HWND], Mem700[esp_640 - 8:UINT], Mem700[esp_640 - 4:WPARAM], Mem700[esp_640 + 0x00000000:LPARAM]);
								edx_164 = esp_640 + 0x000001C4;
								esp_176 = esp_640 + 0x00000004;
								if (Mem700[esp_640 + 0x00000078:word32] >=u 0x00000008)
								{
									Mem720[esp_640 + 0x00000000:word32] = Mem700[esp_640 + 0x00000064:word32];
									word32 esi_722;
									edx_164 = fn004396BC(ebp_152, esi_665, es, ds, fs, gs, out ebx_579, out esi_722);
									esp_176 = esp_640;
								}
								edi_627 = Mem700[edi_627 + 0x00000000:word32];
								if (edi_627 == Mem700[esp_176 + 0x00000028:word32])
									goto l00474B7A;
								edx_164 = 0x00000000;
							}
					}
					else
					{
						Mem761[esp_168 + 0x00000000:word32] = esp_168 + 0x00000030;
						Mem763[esp_168 - 0x00000004:word32] = 0x00000000;
						Mem765[esp_168 - 0x00000008:word32] = 0x0000004A;
						Mem767[esp_168 - 0x0000000C:word32] = eax_577;
						Mem768[esp_168 + 0x00000034:word32] = 0x00000000;
						Mem769[esp_168 + 0x00000038:word32] = 0x00000000;
						SendMessageW(Mem769[esp_168 - 0x0000000C:HWND], Mem769[esp_168 - 8:UINT], Mem769[esp_168 - 4:WPARAM], Mem769[esp_168 + 0x00000000:LPARAM]);
						esp_176 = esp_168 + 0x00000004;
					}
l00474B7A:
					word32 esp_594 = esp_176 - 0x00000004;
					Mem595[esp_594 + 0x00000000:word32] = ebx_579;
					SetForegroundWindow(Mem595[esp_594 + 0x00000000:HWND]);
					Mem599[esp_594 + 0x00000000:word32] = 0x00000009;
					Mem601[esp_594 - 0x00000004:word32] = ebx_579;
					ShowWindow(Mem601[esp_594 - 0x00000004:HWND], Mem601[esp_594 + 0x00000000:int32]);
					Mem606[esp_594 + 0x00000000:word32] = Mem601[esp_594 + 0x00000028:word32];
					CloseHandle(Mem606[esp_594 + 0x00000000:HANDLE]);
					word32 edi_610 = Mem606[esp_594 + 0x00000004:word32];
					*ediOut = edi_610;
					word32 esi_612 = Mem606[esp_594 + 0x00000008:word32];
					*esiOut = esi_612;
					word32 ebx_614 = Mem606[esp_594 + 0x0000000C:word32];
					*ebxOut = ebx_614;
					word32 ecx_620;
					return fn004394A0(0x00000000, Mem606[esp_594 + 0x000003D0:word32] ^ esp_594 + 0x00000010, edx_164, ebx_614, ebp_152, esi_612, edi_610, es, ds, fs, gs, ebp, out ecx_620);
				}
			}
			else
				goto l00474BAE;
		}
		else
			goto l004747DF;
	}
}

word32 fn00486920(ptr32 edxOut)
{
	*edxOut = edx;
	word32 eax_19 = RegOpenKeyExW(0x80000001, 0x004C76A0, 0x00000000, 0x00020019, fp - 0x0000000C);
	if (eax_19 == 0x00000000)
	{
		Mem43[fp - 0x00000018:word32] = fp - 0x00000008;
		Mem45[fp - 0x0000001C:word32] = eax_19;
		Mem47[fp - 0x00000020:word32] = eax_19;
		Mem51[fp - 0x00000024:word32] = 0x004C76DC;
		RegQueryValueExW(dwLoc0C, 0x80000001, 0x004C76A0, 0x00000000, 0x00020019, fp - 0x00000010);
		RegCloseKey(dwLoc0C);
		word32 edx_41;
		*edxOut = fp - 0x00000008;
	}
	return 0x00000001;
}

word32 fn00486980(word32 esi, ptr32 ecxOut)
{
	*ecxOut = ecx;
	word32 eax_39;
	word32 eax_22 = RegOpenKeyExW(0x80000001, 0x004C7650, 0x00000000, 0x00020019, fp - 0x0000000C);
	if (eax_22 == 0x00000000)
	{
		Mem61[fp - 0x00000018:word32] = esi;
		Mem63[fp - 0x0000001C:word32] = eax_22;
		Mem65[fp - 0x00000020:word32] = eax_22;
		Mem67[fp - 0x00000024:word32] = 0x004C768C;
		RegQueryValueExW(dwLoc0C, 0x80000001, 0x004C7650, 0x00000000, 0x00020019, fp - 0x00000008);
		word32 ecx_56 = fp - 0x00000008;
		*ecxOut = ecx_56;
		if (true)
		{
			eax_39 = 0x00000001;
			if (Mem67[esi + 0x00000000:word32] != 0x0000002C)
			{
l004869D2:
				eax_39 = 0x00000000;
			}
		}
		else
			goto l004869D2;
	}
	else
		goto l004869D2;
	return eax_39;
}

word32 fn0048F8E0(word32 ebp, selector es, selector ds, selector fs, selector gs)
{
	word32 eax_9 = Mem0[0x004DEBE0:word32] ^ fp - 0x00000004;
	word32 eax_28 = OpenProcess(0x00000410, 0x00000000, GetCurrentProcessId());
	word32 esp_135 = fp - 0x0000021C;
	word32 edi_30 = CloseHandle;
	if (eax_28 != 0x00000000)
	{
		Mem127[fp - 0x00000224:word32] = fp + 0xFFFFFDF0;
		Mem129[fp - 0x00000228:word32] = 0x00000000;
		PSAPI.DLL!GetModuleFileNameExW();
		CloseHandle(eax_28);
		esp_135 = fp - 0x0000022C;
	}
	word32 esp_42 = esp_135 - 0x00000004;
	Mem43[esp_42 + 0x00000000:word32] = fp + 0xFFFFFDF0;
	SHLWAPI.dll!PathRemoveFileSpecW();
	Mem45[esp_42 - 0x00000004:word32] = 0x004CA4BC;
	Mem48[esp_42 - 0x00000008:word32] = fp + 0xFFFFFDF0;
	SHLWAPI.dll!PathAppendW();
	Mem50[esp_42 - 0x0000000C:word32] = 0x00000000;
	Mem52[esp_42 - 0x00000010:word32] = 0x00000000;
	Mem54[esp_42 - 0x00000014:word32] = 0x00000003;
	Mem56[esp_42 - 0x00000018:word32] = 0x00000000;
	Mem58[esp_42 - 0x0000001C:word32] = 0x00000001;
	Mem60[esp_42 - 0x00000020:word32] = 0x80000000;
	Mem63[esp_42 - 0x00000024:word32] = fp + 0xFFFFFDF0;
	word32 eax_64 = CreateFileW(Mem63[esp_42 - 0x00000024:LPCWSTR], Mem63[esp_42 - 32:DWORD], Mem63[esp_42 - 28:DWORD], Mem63[esp_42 - 24:LPSECURITY_ATTRIBUTES], Mem63[esp_42 - 20:DWORD], Mem63[esp_42 - 16:DWORD], Mem63[esp_42 - 12:HANDLE]);
	if (eax_64 != 0xFFFFFFFF)
	{
		Mem85[esp_42 - 0x0000000C:word32] = eax_64;
		edi_30();
		word32 ecx_102;
		return fn004394A0(0x00000001, eax_9 ^ fp - 0x00000004, fp + 0xFFFFFDF0, Mem85[esp_42 - 0x00000004:word32], fp - 0x00000004, Mem85[esp_42 - 0x00000008:word32], Mem85[esp_42 - 0x0000000C:word32], es, ds, fs, gs, ebp, out ecx_102);
	}
	else
	{
		word32 ecx_118;
		return fn004394A0(0x00000000, eax_9 ^ fp - 0x00000004, fp + 0xFFFFFDF0, Mem63[esp_42 + 0x00000000:word32], fp - 0x00000004, Mem63[esp_42 - 0x00000004:word32], Mem63[esp_42 - 0x00000008:word32], es, ds, fs, gs, ebp, out ecx_118);
	}
}

word32 fn004A96F0(word32 eax, word32 ecx, word32 edx, ptr32 edxOut)
{
	word32 esi_70 = eax;
	word32 eax_10 = 0x00000000;
	if (eax != 0x00000000)
	{
		word32 edi_62 = 0x7FFFFFFE;
		word32 ebx_63 = edx - ecx;
		do
		{
			if (edi_62 == 0x00000000)
				if (esi_70 == 0x00000000)
					goto l004A9730;
			word16 dx_81 = (word16) (word32) Mem0[ebx_63 + ecx:word16];
			if (dx_81 == 0x0000)
				;
			Mem85[ecx + 0x00000000:word16] = dx_81;
			ecx = ecx + 0x00000002;
			edi_62 = edi_62 - 0x00000001;
			esi_70 = esi_70 - 0x00000001;
		} while (esi_70 != 0x00000000);
		Mem102[ecx - 0x00000002:word16] = 0x0000;
		word32 edx_95;
		*edxOut = 0x00000000;
		return 0x8007007A;
	}
	else
	{
l004A9730:
		ecx = ecx - 0x00000002 - 0x00000002;
		eax_10 = 0x8007007A;
l004A9738:
		Mem45[ecx + 0x00000000:word16] = 0x0000;
		word32 edx_39;
		*edxOut = 0x00000000;
		return eax_10;
	}
}

word32 fn004AC910(word32 ecx, word32 edx, word32 ebx, word32 ebp, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 edxOut)
{
fn004AC910_entry:
	def fp
	def ebp
	def Mem0
	def esi
	def ecx
	def dwLoc0518
	def ebx
	def edi
	def gs
	def fs
	def ds
	def es
	def dwLoc0520
	def edx
l004AC910:
	dwLoc04_4 = ebp
	ebp_5 = fp - 0x00000004
	eax_8 = Mem0[0x004DEBE0:word32]
	eax_9 = eax_8 ^ fp - 0x00000004
	dwLoc08_10 = eax_9
	dwLoc0528_15 = esi
	esi_17 = ecx
	dwLoc052C_20 = fp + 0xFFFFFAE4
	GetVersionExW(fp + 0xFFFFFAE4)
	branch dwLoc0518 != 0x00000005 || ecx != 0x00000003 l004AC965
	goto l004AC954
l004AC94F:
l004AC954:
	eax_213 = 0x00000000
	esi_214 = esi
	ecx_216 = eax_9
	ecx_217 = eax_9 ^ fp - 0x00000004
	eax_222 = fn004394A0(0x00000000, ecx_217, edx, ebx, fp - 0x00000004, esi, edi, es, ds, fs, gs, esi, out ecx_221)
	return eax_222
l004AC965:
	eax_53 = ecx
	eax_54 = ecx - 0x00000002
	branch ecx == 0x00000002 || fp + 0xFFFFFAE1 != 0x00000000 l004AC97D
	goto l004AC971
l004AC96E:
l004AC971:
	esi_209 = 0x004C28A0
	edi_210 = 0x004C28F0
	goto l004AC987
l004AC97D:
	edi_204 = 0x004C28BC
	esi_205 = 0x004C2880
l004AC987:
	edi_64 = PHI(edi_210, edi_204)
	esi_65 = PHI(esi_209, esi_205)
	edx_66 = fp + 0xFFFFFAE0
	dwLoc0534_68 = fp + 0xFFFFFAE0
	dwLoc0538_70 = 0x00020006
	dwLoc053C_72 = 0x00000000
	dwLoc0540_74 = esi_65
	dwLoc0544_76 = 0x80000000
	ebx_77 = 0x00000001
	eax_78 = RegOpenKeyExW(dwLoc0544_76, dwLoc0540_74, dwLoc053C_72, dwLoc0538_70, dwLoc0534_68)
	esp_79 = fp - 0x00000530
	branch (eax_78 & eax_78) != 0x00000000 l004ACA28
l004AC9AA:
	dwLoc0534_118 = edi_64
	eax_119 = lstrlenW(dwLoc0534_118)
	ecx_122 = dwLoc0520
	eax_123 = eax_119 + 0x00000002 + eax_119
	dwLoc0534_125 = eax_123
	esp_126 = fp - 0x00000538
	Mem127[esp_126 + 0x00000000:word32] = edi_64
	esp_128 = fp - 0x0000053C
	Mem129[esp_128 + 0x00000000:word32] = 0x00000001
	dwLoc0540_131 = 0x00000000
	esp_132 = fp - 0x00000544
	Mem133[esp_132 + 0x00000000:word32] = 0x00000000
	dwLoc0548_135 = ecx_122
	eax_136 = RegSetValueExW(dwLoc0548_135, 0x80000000, dwLoc0540_131, 0x00000000, 0x00020006, dwLoc0534_125)
	esp_137 = fp - 0x00000530
	edi_138 = eax_136
	branch (edi_138 & edi_138) != 0x00000000 l004AC9FF
l004AC9CF:
	esp_187 = fp - 0x0000053C
	Mem188[esp_187 + 0x00000000:word32] = 0x004C28F4
	ecx_189 = 0x00000200
	ebx_190 = fp + 0xFFFFFBF8
	edx_192 = fn00401000(ecx_189, ebx_190, es, ds, fs, gs, dwLoc053C_72, out ebx_191)
	esp_193 = esp_187 + 0x0000000C
	eax_195 = ebx_191
	esp_196 = esp_193 - 0x00000004
	Mem197[esp_196 + 0x00000000:word32] = eax_195
	esp_198 = esp_196 - 0x00000004
	Mem199[esp_198 + 0x00000000:word32] = 0x80000000
	call SHLWAPI.dll!SHDeleteKeyW (retsize: 4; depth: 4)
	ebx_200 = eax_195
l004AC9FF:
	gs_144 = PHI(gs, gs)
	fs_145 = PHI(fs, fs)
	ds_146 = PHI(ds, ds)
	es_147 = PHI(es, es)
	edx_148 = PHI(edx_66, edx_192)
	edi_150 = PHI(edi_138, edi_138)
	ebx_151 = PHI(ebx_77, ebx_200)
	ebp_153 = PHI(ebp_5, ebp_5)
	esp_154 = PHI(esp_137, esp_198)
	ecx_155 = Mem133[ebp_153 + 0xFFFFFAE4:word32]
	esp_156 = esp_154 - 0x00000004
	Mem157[esp_156 + 0x00000000:word32] = ecx_155
	RegCloseKey(Mem157[esp_156 + 0x00000000:HKEY])
	esp_159 = esp_156 + 0x00000004
	branch (edi_150 & edi_150) != 0x00000000 || (ebx_151 & ebx_151) != 0x00000000 l004ACA28
	goto l004ACA14
l004ACA10:
l004ACA14:
	eax_166 = edi_150 + 0x00000001
	edi_167 = Mem157[esp_159 + 0x00000000:word32]
	esp_168 = esp_159 + 0x00000004
	ebx_169 = Mem157[esp_168 + 0x00000000:word32]
	esp_170 = esp_168 + 0x00000004
	esi_171 = Mem157[esp_170 + 0x00000000:word32]
	ecx_173 = Mem157[ebp_153 - 0x00000004:word32]
	ecx_174 = ecx_173 ^ ebp_153
	eax_178 = fn004394A0(eax_166, ecx_174, edx_148, ebx_169, ebp_153, esi_171, edi_167, es_147, ds_146, fs_145, gs_144, dwLoc04_4, out ecx_177)
	return eax_178
l004ACA28:
	gs_92 = PHI(gs, gs_144, gs_144)
	fs_93 = PHI(fs, fs_145, fs_145)
	ds_94 = PHI(ds, ds_146, ds_146)
	es_95 = PHI(es, es_147, es_147)
	edx_96 = PHI(edx_66, edx_148, edx_148)
	ebp_99 = PHI(ebp_5, ebp_153, ebp_153)
	esp_100 = PHI(esp_79, esp_159, esp_159)
	ecx_101 = Mem0[ebp_99 - 0x00000004:word32]
	edi_102 = Mem0[esp_100 + 0x00000000:word32]
	esp_103 = esp_100 + 0x00000004
	ebx_104 = Mem0[esp_103 + 0x00000000:word32]
	esp_105 = esp_103 + 0x00000004
	ecx_106 = ecx_101 ^ ebp_99
	eax_107 = 0x00000000
	esi_110 = Mem0[esp_105 + 0x00000000:word32]
	eax_113 = fn004394A0(eax_107, ecx_106, edx_96, ebx_104, ebp_99, esi_110, edi_102, es_95, ds_94, fs_93, gs_92, dwLoc04_4, out ecx_112)
	return eax_113
fn004AC910_exit:
	edx_40 = PHI(edx, edx_148, edx_96)
	use edx_40 (=> edxOut)
}

word32 fn004ACB60(word32 ecx, word32 edx, word32 ebx, word32 ebp, word32 esi, word32 edi, selector es, selector ds, selector fs, selector gs, word32 dwArg04, ptr32 edxOut)
{
	*edxOut = edx;
	word32 eax_9 = Mem0[0x004DEBE0:word32] ^ fp - 0x00000004;
	GetVersionExW(fp + 0xFFFFF8DC);
	word32 ebp_156 = fp - 0x00000004;
	if (dwLoc0720 == 0x00000005 && ecx == 0x00000003)
	{
		word32 ecx_322;
		return fn004394A0(0x00000000, eax_9 ^ fp - 0x00000004, edx, ebx, fp - 0x00000004, esi, edi, es, ds, fs, gs, ebx, out ecx_322);
	}
	else
	{
		word32 eax_304;
		if (ecx != 0x00000002)
		{
			eax_304 = 0x004C28A0;
			if (ecx != 0x00000003)
			{
l004ACBCA:
				eax_304 = 0x004C2880;
			}
		}
		else
			goto l004ACBCA;
		word32 esp_162 = fp - 0x00000748;
		if (RegOpenKeyExW(0x80000000, eax_304, 0x00000000, 0x00020006, fp + 0xFFFFF8D4) == 0x00000000)
		{
			Mem124[fp - 0x00000750:word32] = fp + 0xFFFFF8D8;
			Mem126[fp - 0x00000754:word32] = 0x00000000;
			Mem130[fp - 0x0000075C:word32] = 0x00000000;
			word32 esp_141 = fp - 0x00000748;
			if (RegCreateKeyExW(dwLoc072C, edx, 0x00000000, 0x00000000, 0x80000000, 0x00020006, 0x00000000, 0x00020006, fp + 0xFFFFF8C8) == 0x00000000)
			{
				word32 eax_166 = lstrlenW(dwArg04);
				Mem177[fp - 0x00000754:word32] = 0x00000001;
				Mem179[fp - 0x00000758:word32] = 0x00000000;
				Mem181[fp - 0x0000075C:word32] = 0x00000000;
				Mem183[fp - 0x00000760:word32] = dwLoc0728;
				RegSetValueExW(0x00000000, 0x00000000, 0x00020006, 0x00000000, dwArg04, eax_166 + 0x00000002 + eax_166);
				Mem194[fp - 0x00000754:word32] = 0x00000000;
				Mem196[fp - 0x00000758:word32] = 0x00020006;
				Mem198[fp - 0x0000075C:word32] = 0x00000000;
				Mem200[fp - 0x00000760:word32] = 0x00000000;
				Mem202[fp - 0x00000764:word32] = 0x00000000;
				word32 esp_208 = fp - 0x00000748;
				if (RegCreateKeyExW(dwLoc0728, 0x004C28C8, 0x00000000, 0x00000000, 0x00000000, 0x00020006, 0x00000000, fp + 0xFFFFF8CC, fp + 0xFFFFF8C8) == 0x00000000)
				{
					ebp_156 = fn004682E0(fp + 0xFFFFFDF0);
					Mem231[fp - 0x00000750:word32] = ebp_156 + 0xFFFFFDF4;
					Mem233[fp - 0x00000754:word32] = 0x004C28D8;
					word32 ebx_237;
					fn00401000(0x00000200, ebp_156 + 0xFFFFF9F4, es, ds, fs, gs, dwArg00, out ebx_237);
					Mem242[fp - 0x0000074C:word32] = ebx_237;
					word32 eax_243 = lstrlenW(Mem242[fp - 0x0000074C:LPCWSTR]);
					word32 eax_246 = Mem242[ebp_156 + 0xFFFFF8D0:word32];
					Mem248[fp - 0x0000074C:word32] = eax_243 + 0x00000002 + eax_243;
					Mem251[fp - 0x00000750:word32] = ebx_237;
					Mem253[fp - 0x00000754:word32] = 0x00000001;
					Mem255[fp - 0x00000758:word32] = 0x00000000;
					Mem257[fp - 0x0000075C:word32] = 0x00000000;
					Mem259[fp - 0x00000760:word32] = eax_246;
					word32 esp_261 = fp - 0x00000748;
					if (RegSetValueExW(Mem259[fp - 0x00000760:HKEY], Mem259[fp - 1884:LPCWSTR], Mem259[fp - 1880:DWORD], Mem259[fp - 1876:DWORD], Mem259[fp - 1872:(ptr BYTE)], Mem259[fp - 1868:DWORD]) == 0x00000000)
					{
						word32 ebx_277 = Mem259[ebp_156 + 0xFFFFF8C8:word32];
						Mem279[fp - 0x0000074C:word32] = ebx_277;
						word32 eax_280 = lstrlenW(Mem279[fp - 0x0000074C:LPCWSTR]);
						word32 edx_282 = Mem279[ebp_156 + 0xFFFFF8D8:word32];
						Mem285[fp - 0x0000074C:word32] = eax_280 + 0x00000002 + eax_280;
						Mem287[fp - 0x00000750:word32] = ebx_277;
						Mem289[fp - 0x00000754:word32] = 0x00000001;
						Mem291[fp - 0x00000758:word32] = 0x00000000;
						Mem293[fp - 0x0000075C:word32] = 0x00000000;
						Mem295[fp - 0x00000760:word32] = edx_282;
						esp_261 = fp - 0x00000748;
						if (RegSetValueExW(Mem295[fp - 0x00000760:HKEY], Mem295[fp - 1884:LPCWSTR], Mem295[fp - 1880:DWORD], Mem295[fp - 1876:DWORD], Mem295[fp - 1872:(ptr BYTE)], Mem295[fp - 1868:DWORD]) == 0x00000000)
							Mem301[ebp_156 + 0xFFFFF8D4:word32] = 0x00000001;
					}
					word32 esp_273 = esp_261 - 0x00000004;
					Mem274[esp_273 + 0x00000000:word32] = Mem259[ebp_156 + 0xFFFFF8D0:word32];
					RegCloseKey(Mem274[esp_273 + 0x00000000:HKEY]);
					esp_208 = esp_273 + 0x00000004;
				}
				word32 esp_221 = esp_208 - 0x00000004;
				Mem222[esp_221 + 0x00000000:word32] = Mem202[ebp_156 + 0xFFFFF8DC:word32];
				RegCloseKey(Mem222[esp_221 + 0x00000000:HKEY]);
				esp_141 = esp_221 + 0x00000004;
			}
			edx = Mem130[ebp_156 + 0xFFFFF8D8:word32];
			*edxOut = edx;
			word32 esp_159 = esp_141 - 0x00000004;
			Mem160[esp_159 + 0x00000000:word32] = edx;
			RegCloseKey(Mem160[esp_159 + 0x00000000:HKEY]);
			esp_162 = esp_159 + 0x00000004;
		}
		word32 esp_100 = esp_162 + 0x00000004;
		word32 ecx_112;
		return fn004394A0(Mem0[ebp_156 + 0xFFFFF8D4:word32], Mem0[ebp_156 - 0x00000004:word32] ^ ebp_156, edx, Mem0[esp_100 + 0x00000004:word32], ebp_156, Mem0[esp_100 + 0x00000000:word32], Mem0[esp_162 + 0x00000000:word32], es, ds, fs, gs, ebp, out ecx_112);
	}
}

word32 fn004B5300(real64 rArg0)
{
	if (Mem0[0x004F35E0:word32] != 0x00000000)
	{
		__align(fp - 0x0000000C);
		return (int32) rArg0;
	}
	else
	{
		__align(fp - 0x00000024);
		int64 qwLoc14_53 = (int64) rLoc1;
		word32 dwLoc14_54 = (word32) qwLoc14_53;
		real64 rLoc1_55 = (real64) qwLoc14_53;
		word32 edx_110 = rLoc1;
		word32 eax_104 = dwLoc14_54;
		if (dwLoc14_54 != 0x00000000)
		{
l004B5359:
			real64 rArg0_80 = rArg0 - rLoc1_55;
			if (edx_110 < 0x00000000)
				eax_104 = SLICE(SEQ(dwLoc14_54, (rArg0_80 ^ 0x80000000) + 0x7FFFFFFF) + 0x000000007FFFFFFF, word32, 32);
			else
				eax_104 = SLICE(SEQ(dwLoc14_54, rArg0_80 + 0x7FFFFFFF) + 0x000000007FFFFFFF, word32, 32);
		}
		else
		{
			edx_110 = dwLoc10;
			if ((dwLoc10 & 0x7FFFFFFF) == 0x00000000)
				;
			else
				goto l004B5359;
		}
		return eax_104;
	}
}

