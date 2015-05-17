// subject.c
// Generated on TIMESTAMP by decompiling from_rec/hd/ia32_elf_from_rec/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn080484A0()
{
	fn08048980();
	return;
}

void fn080485A0(word32 esi, word32 edi, word32 dwArg00)
{
	__align(fp + 0x00000004);
	__syscall(0x80);
	globals->dw80499E8 = fp + 0x00000004 + (dwArg00 * 0x00000002) * 0x00000002 + 0x00000004;
	__setfpucw();
	__libc_init();
	atexit(&globals->ptr80489C0);
	fn080484A0();
	exit(fn080488E0(dwArg00, fp + 0x00000004));
	while (true)
		__syscall(0x80);
}

void fn08048660(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
// def fp
// def dwArg0C
// def dwArg04
// def Mem0
	dwLoc68_15 = &globals->b80489C8;
	tLoc64_16 = SLICE(0x080489C8, <unknown>, 32);
	dwLoc6C_19 = fp - 0x00000054;
	sprintf(dwLoc6C_19, dwLoc68_15, tLoc64_16);
	if (dwArg0C > 0x00000010)
		;
	dwLoc58_26 = 0x00000000;
// dwLoc58_32 = PHI(dwLoc58_26, dwLoc58_175)
	eax_37 = dwLoc58_32;
	while (0x00000010 > eax_37)
	{
		dwLoc68_160 = &globals->b80489CF;
		tLoc64_161 = SLICE(dwLoc68_160, <unknown>, 32);
		ecx_163 = dwLoc58_32;
		edx_164 = ecx_163;
		edx_165 = edx_164 + edx_164;
		edx_166 = edx_165 + ecx_163;
		eax_167 = fp - 0x00000054 + edx_166;
		edx_168 = eax_167 + 0x00000009;
		dwLoc6C_170 = edx_168;
		sprintf(dwLoc6C_170, dwLoc68_160, tLoc64_161);
		v10_174 = dwLoc58_32 + 0x00000001;
		dwLoc58_175 = v10_174;
// dwLoc58_32 = PHI(dwLoc58_26, dwLoc58_175)
		eax_37 = dwLoc58_32;
	}
// dwLoc58_41 = PHI(dwLoc58_32, dwLoc58_46)
	eax_44 = dwLoc58_41;
	v11_45 = dwLoc58_41 + 0x00000001;
	dwLoc58_46 = v11_45;
	while (eax_44 <= 0x0000000F)
	{
		dwLoc64_147 = &globals->b80489D6;
		dwLoc68_150 = fp - 0x00000054;
		strcat(dwLoc68_150, dwLoc64_147);
// dwLoc58_41 = PHI(dwLoc58_32, dwLoc58_46)
		eax_44 = dwLoc58_41;
		v11_45 = dwLoc58_41 + 0x00000001;
		dwLoc58_46 = v11_45;
	}
	dwLoc64_51 = fp - 0x00000054;
	eax_52 = strlen(dwLoc64_51);
	dwLoc5C_54 = eax_52;
	dwLoc64_56 = &globals->b80489DA;
	edx_59 = fp - 0x00000054 + dwLoc5C_54;
	dwLoc68_61 = edx_59;
	strcpy(dwLoc68_61, dwLoc64_56);
	dwLoc58_65 = 0x00000000;
// dwLoc58_71 = PHI(dwLoc58_65, dwLoc58_130)
	eax_74 = dwLoc58_71;
	while (0x00000010 > eax_74)
	{
		eax_114 = dwLoc5C_54;
		eax_115 = eax_114 + dwLoc58_71;
		ecx_118 = dwArg04;
		ecx_119 = ecx_118 + dwLoc58_71;
		if (*ecx_119 >u 0x1F)
		{
			ecx_137 = dwArg04;
			ecx_138 = ecx_137 + dwLoc58_71;
			if (*ecx_138 <=u 0x7E)
			{
				ebx_141 = dwArg04;
				ebx_142 = ebx_141 + dwLoc58_71;
				cl_144 = *ebx_142;
			}
			else
			{
l08048770:
				cl_135 = 0x2E;
			}
		}
		else
			goto l08048770;
// cl_124 = PHI(cl_144, cl_135)
		eax_115[fp - 0x00000054] = cl_124;
		v14_129 = dwLoc58_71 + 0x00000001;
		dwLoc58_130 = v14_129;
// dwLoc58_71 = PHI(dwLoc58_65, dwLoc58_130)
		eax_74 = dwLoc58_71;
	}
// dwLoc58_77 = PHI(dwLoc58_71, dwLoc58_112)
	while (dwLoc58_77 <= 0x0000000F)
	{
		eax_106 = dwLoc5C_54;
		eax_107 = eax_106 + dwLoc58_77;
		eax_107[fp - 0x00000054] = 0x20;
		v15_111 = dwLoc58_77 + 0x00000001;
		dwLoc58_112 = v15_111;
// dwLoc58_77 = PHI(dwLoc58_71, dwLoc58_112)
	}
	esp_82 = fp - 0x00000064;
	*esp_82 = 0x080489DE;
	edx_86 = fp - 0x00000054 + dwLoc5C_54;
	eax_87 = edx_86;
	eax_88 = eax_87 + dwLoc58_77;
	dwLoc68_90 = eax_88;
	strcpy(dwLoc68_90, &globals->b80489DA);
	esp_94 = fp - 0x00000064;
	*esp_94 = fp - 0x00000054;
	dwLoc68_97 = &globals->b80489E0;
	tLoc64_98 = SLICE(dwLoc68_97, <unknown>, 32);
	printf(dwLoc68_97, tLoc64_98);
	return;
}

byte fn080487F0(word32 dwArg04)
{
	byte al_35;
	if (fn08048950(dwArg04, fp - 0x0000005C) == 0x00000000)
	{
		perror(dwArg04);
		al_35 = 0x01;
	}
	else
	{
		FILE * eax_58 = fopen(dwArg04, &globals->b80489E4);
		if (eax_58 == null)
		{
			fp->ptrFFFFFF9C = dwArg04;
			perror(&globals->b80489E4);
			al_35 = 0x01;
		}
		else
		{
			up32 dwLoc18_127 = 0x00000000;
			while (dwLoc48 >u dwLoc18_127)
			{
				word32 eax_110 = fread(fp - 0x00000014, 0x00000001, 0x00000010, eax_58);
				if (eax_110 == 0x00000000)
					goto l080488C0;
				fp->ptrFFFFFF9C = dwLoc18_127;
				fp->ptrFFFFFF9C = fp - 0x00000014;
				fn08048660(0x00000001, 0x00000010, eax_110);
				dwLoc18_127 = dwLoc18_127 + eax_110;
			}
l080488C0:
			fclose(eax_58);
			al_35 = 0x00;
		}
	}
	return al_35;
}

word32 fn080488E0(ui32 dwArg04, word32 dwArg08)
{
	word32 dwLoc0C_15 = 0x00000000;
	int32 dwLoc08_16 = 0x00000001;
	while (dwArg04 > dwLoc08_16)
	{
		word32 eax_34 = dwArg08[dwLoc08_16];
		dwLoc0C_15 = dwLoc0C_15 + DPB(eax_34, fn080487F0(eax_34), 0, 8);
		dwLoc08_16 = dwLoc08_16 + 0x00000001;
	}
	return dwLoc0C_15;
}

word32 fn08048950(char * dwArg04, word32 dwArg08)
{
	word32 eax_22 = _xstat(0x00000001, dwArg04, dwArg08);
	return eax_22;
}

void fn08048980()
{
	Eq_336 * ebx_24 = &globals->dw80499EC;
	if (globals->dw80499EC != 0xFFFFFFFF)
		do
		{
			code * eax_25 = ebx_24->ptr0000;
			eax_25();
			ebx_24 = ebx_24 + 1;
		} while (ebx_24->ptr0000 != (code *) 0xFFFFFFFF);
	return;
}

