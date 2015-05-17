// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_383/ia32_elf/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn080486FC()
{
	Mem0[0x0804A0C4:word32]();
	return;
}

void fn0804870C()
{
	Mem0[0x0804A0C8:word32]();
	return;
}

void fn0804871C()
{
	Mem0[0x0804A0CC:word32]();
	return;
}

void fn0804872C()
{
	Mem0[0x0804A0D0:word32]();
	return;
}

void fn0804873C()
{
	Mem0[0x0804A0D4:word32]();
	return;
}

void fn0804874C()
{
	Mem0[0x0804A0D8:word32]();
	return;
}

void fn0804875C()
{
	Mem0[0x0804A0DC:word32]();
	return;
}

void fn0804876C()
{
	Mem0[0x0804A0E0:word32]();
	return;
}

void fn0804877C()
{
	Mem0[0x0804A0E4:word32]();
	return;
}

void fn0804878C()
{
	Mem0[0x0804A0E8:word32]();
	return;
}

void fn0804879C()
{
	Mem0[0x0804A0EC:word32]();
	return;
}

void fn080487AC()
{
	Mem0[0x0804A0F0:word32]();
	return;
}

void fn080487BC()
{
	Mem0[0x0804A0F4:word32]();
	return;
}

void fn080487CC()
{
	Mem0[0x0804A0F8:word32]();
	return;
}

void fn080487DC()
{
	Mem0[0x0804A0FC:word32]();
	return;
}

void fn080487EC()
{
	Mem0[0x0804A100:word32]();
	return;
}

void fn080487FC()
{
	Mem0[0x0804A104:word32]();
	return;
}

void fn0804880C()
{
	Mem0[0x0804A108:word32]();
	return;
}

void fn0804881C()
{
	Mem0[0x0804A10C:word32]();
	return;
}

void fn0804882C()
{
	Mem0[0x0804A110:word32]();
	return;
}

void fn0804883C()
{
	Mem0[0x0804A114:word32]();
	return;
}

void fn0804884C()
{
	Mem0[0x0804A118:word32]();
	return;
}

void fn0804885C()
{
	Mem0[0x0804A11C:word32]();
	return;
}

void fn0804886C()
{
	Mem0[0x0804A120:word32]();
	return;
}

void fn0804887C()
{
	Mem0[0x0804A124:word32]();
	return;
}

void fn0804888C()
{
	Mem0[0x0804A128:word32]();
	return;
}

void fn0804889C()
{
	Mem0[0x0804A12C:word32]();
	return;
}

void fn080488AC()
{
	Mem0[0x0804A130:word32]();
	return;
}

void fn080488CC()
{
	Mem0[0x0804A138:word32]();
	return;
}

word32 fn08048903(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	if (dwArg0C >u 0x00000006)
		;
}

word32 fn080489C3(word32 dwArg04, byte bArg08, word32 dwArg0C, word32 dwArg10)
{
fn080489C3_entry:
l080489C3:
	branch (byte) (DPB(eax, bArg08, 0, 8) - 0x00000042) >u 0x12 l080489F5
l080489DC:
l080489F5:
l08048A5E:
l08048A81:
	Mem46[dwArg04 + 0x00000034:word32] = fn08048903(Mem0[dwArg04 + 0x00000034:word32], 0x00000000, dwArg10)
	return dwArg04
fn080489C3_exit:
}

word32 fn08048AA8(word32 dwArg04)
{
	word32 ecx_22 = 0x00000000;
	word32 eax_113 = dwArg04;
	do
	{
		word32 edx_28 = ecx_22 *s 0x00000024;
		word32 ebx_29 = 0x00000000;
		do
		{
			word32 esi_45 = 0x00000000;
			word32 edi_48 = dwArg04 + 0x00000004 + ((ebx_29 *s 0x0000000C + 0x00000030) + edx_28);
			do
			{
				word32 ebp_54 = Mem0[edi_48 + 0x00000000:word32];
				word32 edx_55 = 0x00000000;
				do
				{
					Mem60[ebp_54 + 0x00000010 + edx_55:word32] = 0x3E800000;
					Mem61[ebp_54 + 0x0000000C + edx_55:word32] = 0x3E800000;
					Mem62[ebp_54 + 0x00000008 + edx_55:word32] = 0x3E800000;
					edx_55 = edx_55 + 0x0000000C;
				} while (edx_55 != 0x00000048);
				esi_45 = esi_45 + 0x00000001;
				edi_48 = edi_48 + 0x00000004;
			} while (esi_45 != 0x00000003);
			ebx_29 = ebx_29 + 0x00000001;
		} while (ebx_29 == 0x00000003);
		ecx_22 = ecx_22 + 0x00000001;
	} while (ecx_22 != 0x00000003);
	word32 ebx_100 = 0x00000001;
	byte dl_158 = 0x54;
	do
	{
		word32 esi_103 = 0x00000000;
		word32 ebp_106 = (int32) dl_158;
		do
		{
			word32 edi_119 = 0x00000000;
			do
			{
				edi_119 = edi_119 + 0x00000001;
				eax_113 = fn080489C3(eax_113, (byte) ebp_106, esi_103, edi_119);
			} while (edi_119 != 0x00000003);
			esi_103 = esi_103 + 0x00000001;
		} while (esi_103 == 0x00000003);
		ebx_100 = ebx_100 + 0x00000001;
		if (ebx_100 == 0x00000007)
			return eax_113;
		dl_158 = 0x54;
	} while (ebx_100 >u 0x00000006);
	switch (ebx_100 - 0x00000002)
	{
	case 0:
		dl_158 = 0x46;
		break;
	case 1:
		dl_158 = 0x52;
		break;
	case 2:
		dl_158 = 0x4C;
		break;
	case 3:
		dl_158 = 0x42;
		break;
	case 4:
		dl_158 = 0x44;
		break;
	}
}

word32 fn08048B68(word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, word32 dwArg14)
{
	word32 ecx_20 = dwArg04 + 0x00000008 + dwArg08 *s 0x0000000C;
	word32 edx_28 = dwArg04 + 0x00000008 + dwArg0C *s 0x0000000C;
	word32 edx_22 = Mem0[ecx_20 + 0x00000008:word32];
	word32 ebp_23 = Mem0[ecx_20 + 0x00000000:word32];
	word32 edi_24 = Mem0[ecx_20 + 0x00000004:word32];
	Mem30[ecx_20 + 0x00000000:word32] = Mem0[edx_28 + 0x00000000:word32];
	Mem32[ecx_20 + 0x00000004:word32] = Mem30[edx_28 + 0x00000004:word32];
	Mem34[ecx_20 + 0x00000008:word32] = Mem32[edx_28 + 0x00000008:word32];
	word32 ecx_37 = dwArg04 + 0x00000008 + dwArg10 *s 0x0000000C;
	Mem39[edx_28 + 0x00000000:word32] = Mem34[ecx_37 + 0x00000000:word32];
	Mem41[edx_28 + 0x00000004:word32] = Mem39[ecx_37 + 0x00000004:word32];
	Mem43[edx_28 + 0x00000008:word32] = Mem41[ecx_37 + 0x00000008:word32];
	word32 ebx_46 = dwArg04 + 0x00000008 + dwArg14 *s 0x0000000C;
	Mem49[ecx_37 + 0x00000000:word32] = Mem43[ebx_46 + 0x00000000:word32];
	Mem51[ecx_37 + 0x00000004:word32] = Mem49[ebx_46 + 0x00000004:word32];
	Mem53[ecx_37 + 0x00000008:word32] = Mem51[ebx_46 + 0x00000008:word32];
	Mem54[ebx_46 + 0x00000000:word32] = ebp_23;
	Mem55[ebx_46 + 0x00000004:word32] = edi_24;
	Mem57[ebx_46 + 0x00000008:word32] = edx_22;
	return dwArg04;
}

word32 fn08048BE1(word32 dwArg04, word32 dwArg08)
{
	word32 dwLoc10_25;
	word32 dwLoc0C_24;
	word32 dwLoc08_23;
	word32 dwLoc04_22;
	word32 eax_41 = dwArg04;
	if (dwArg08 == 0x00000002)
	{
		dwLoc04_22 = 0x00000000;
		dwLoc08_23 = 0x00000002;
		dwLoc0C_24 = 0x00000005;
		dwLoc10_25 = 0x00000003;
		goto l08048C08;
	}
	else if (dwArg08 == 0x00000003)
	{
		eax_41 = fn08048B68(dwArg04, 0x00000001, 0x00000005, 0x00000004, 0x00000000);
		goto l08048C23;
	}
	else if (dwArg08 == 0x00000001)
	{
		dwLoc04_22 = 0x00000003;
		dwLoc08_23 = 0x00000004;
		dwLoc0C_24 = 0x00000002;
		dwLoc10_25 = 0x00000001;
l08048C08:
		return fn08048B68(dwArg04, dwLoc10_25, dwLoc0C_24, dwLoc08_23, dwLoc04_22);
	}
	else
	{
l08048C23:
		return eax_41;
	}
}

word32 fn08048C24(word32 dwArg04, word32 dwArg08)
{
	word32 dwLoc10_25;
	word32 dwLoc0C_24;
	word32 dwLoc08_23;
	word32 dwLoc04_22;
	word32 eax_41 = dwArg04;
	if (dwArg08 == 0x00000002)
	{
		dwLoc04_22 = 0x00000003;
		dwLoc08_23 = 0x00000005;
		dwLoc0C_24 = 0x00000002;
		dwLoc10_25 = 0x00000000;
		goto l08048C4B;
	}
	else if (dwArg08 == 0x00000003)
	{
		eax_41 = fn08048B68(dwArg04, 0x00000000, 0x00000004, 0x00000005, 0x00000001);
		goto l08048C66;
	}
	else if (dwArg08 == 0x00000001)
	{
		dwLoc04_22 = 0x00000001;
		dwLoc08_23 = 0x00000002;
		dwLoc0C_24 = 0x00000004;
		dwLoc10_25 = 0x00000003;
l08048C4B:
		return fn08048B68(dwArg04, dwLoc10_25, dwLoc0C_24, dwLoc08_23, dwLoc04_22);
	}
	else
	{
l08048C66:
		return eax_41;
	}
}

void fn08048C67(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
fn08048C67_entry:
l08048C67:
	real64 rLoc1_30 = (real64) dwArg0C + (dwArg04 + 0x00000008)[(dwArg08 + 0x00000008) * 4F]
	(dwArg04 + 0x00000008)[(dwArg08 + 0x00000008) * 4F] = rLoc1_30
	branch dwArg0C >= 0x00000000 l08048D49
l08048C94:
	branch rLoc1_30 != Mem31[0x08049F30:real32] || P l08048E03
	goto l08048CAD
l08048CA7:
l08048CAD:
	(dwArg04 + 0x00000008)[(dwArg08 + 0x00000008) * 0x00000004] = 0x00000000
	word32 edi_67 = (dwArg04 + 0x00000004)[(dwArg08 + 0x0000000C) * 0x00000004]
	(dwArg04 + 0x00000004)[(dwArg08 + 0x0000000C) * 0x00000004] = (dwArg04 + 0x00000004)[(dwArg08 + 0x0000001E) * 0x00000004]
	(dwArg04 + 0x00000004)[(dwArg08 + 0x0000001E) * 0x00000004] = (dwArg04 + 0x00000004)[(dwArg08 + 0x00000024) * 0x00000004]
	(dwArg04 + 0x00000004)[(dwArg08 + 0x00000024) * 0x00000004] = (dwArg04 + 0x00000004)[(dwArg08 + 0x00000012) * 0x00000004]
	(dwArg04 + 0x00000004)[(dwArg08 + 0x00000012) * 0x00000004] = edi_67
	word32 edi_79 = (dwArg04 + 0x00000004)[(dwArg08 + 0x00000015) * 0x00000004]
	(dwArg04 + 0x00000004)[(dwArg08 + 0x00000015) * 0x00000004] = (dwArg04 + 0x00000004)[(dwArg08 + 0x00000021) * 0x00000004]
	(dwArg04 + 0x00000004)[(dwArg08 + 0x00000021) * 0x00000004] = (dwArg04 + 0x00000004)[(dwArg08 + 0x0000001B) * 0x00000004]
	(dwArg04 + 0x00000004)[(dwArg08 + 0x0000001B) * 0x00000004] = (dwArg04 + 0x00000004)[(dwArg08 + 0x0000000F) * 0x00000004]
	(dwArg04 + 0x00000004)[(dwArg08 + 0x0000000F) * 0x00000004] = edi_79
	word32 esi_118 = dwArg04 + 0x00000004 + (dwArg08 + 0x0000000C) * 0x00000004
	word32 edi_89 = 0x00000000
l08048D13:
	Mem95[fp - 0x00000018:word32] = 0x00000003
	Mem102[esi_118 + 0x00000000:word32] = fn08048BE1(Mem95[esi_118 + 0x00000000:word32], dwLoc18)
	Mem104[fp - 0x00000020:word32] = 0x00000003
	Mem109[esi_118 + 0x0000000C:word32] = fn08048BE1(Mem104[esi_118 + 0x0000000C:word32], dwLoc20)
	Mem111[fp - 0x00000028:word32] = 0x00000003
	Mem117[esi_118 + 0x00000018:word32] = fn08048BE1(Mem111[esi_118 + 0x00000018:word32], dwLoc28)
	edi_89 = edi_89 + 0x00000001
	esi_118 = esi_118 + 0x00000024
	branch edi_89 != 0x00000003 l08048D13
l08048D44:
	goto l08048E03
l08048D49:
	branch dwArg0C == 0x00000000 l08048E01
l08048D4F:
	branch rLoc1_30 != Mem31[0x08049F34:real32] || P l08048E03
	goto l08048D68
l08048D62:
l08048D68:
	word32 edi_129 = (dwArg04 + 0x00000004)[(dwArg08 + 0x00000024) * 0x00000004]
	(dwArg04 + 0x00000008)[(dwArg08 + 0x00000008) * 0x00000004] = 0x00000000
	word32 esi_132 = (dwArg04 + 0x00000004)[(dwArg08 + 0x00000012) * 0x00000004]
	(dwArg04 + 0x00000004)[(dwArg08 + 0x00000012) * 0x00000004] = edi_129
	(dwArg04 + 0x00000004)[(dwArg08 + 0x00000024) * 0x00000004] = (dwArg04 + 0x00000004)[(dwArg08 + 0x0000001E) * 0x00000004]
	(dwArg04 + 0x00000004)[(dwArg08 + 0x0000001E) * 0x00000004] = (dwArg04 + 0x00000004)[(dwArg08 + 0x0000000C) * 0x00000004]
	(dwArg04 + 0x00000004)[(dwArg08 + 0x0000000C) * 0x00000004] = esi_132
	word32 edi_143 = (dwArg04 + 0x00000004)[(dwArg08 + 0x0000000F) * 0x00000004]
	(dwArg04 + 0x00000004)[(dwArg08 + 0x0000000F) * 0x00000004] = (dwArg04 + 0x00000004)[(dwArg08 + 0x0000001B) * 0x00000004]
	(dwArg04 + 0x00000004)[(dwArg08 + 0x0000001B) * 0x00000004] = (dwArg04 + 0x00000004)[(dwArg08 + 0x00000021) * 0x00000004]
	(dwArg04 + 0x00000004)[(dwArg08 + 0x00000021) * 0x00000004] = (dwArg04 + 0x00000004)[(dwArg08 + 0x00000015) * 0x00000004]
	(dwArg04 + 0x00000004)[(dwArg08 + 0x00000015) * 0x00000004] = edi_143
	word32 esi_152 = dwArg04 + 0x00000004 + (dwArg08 + 0x0000000C) * 0x00000004
	word32 edi_154 = 0x00000000
l08048DCE:
	Mem160[fp - 0x00000018:word32] = 0x00000003
	Mem166[esi_152 + 0x00000000:word32] = fn08048C24(Mem160[esi_152 + 0x00000000:word32], dwLoc18)
	Mem168[fp - 0x00000020:word32] = 0x00000003
	Mem172[esi_152 + 0x0000000C:word32] = fn08048C24(Mem168[esi_152 + 0x0000000C:word32], dwLoc20)
	Mem174[fp - 0x00000028:word32] = 0x00000003
	Mem179[esi_152 + 0x00000018:word32] = fn08048C24(Mem174[esi_152 + 0x00000018:word32], dwLoc28)
	edi_154 = edi_154 + 0x00000001
	esi_152 = esi_152 + 0x00000024
	branch edi_154 != 0x00000003 l08048DCE
l08048DFF:
	goto l08048E03
l08048E01:
l08048E03:
fn08048C67_exit:
}

void fn08048EB5(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
fn08048EB5_entry:
l08048EB5:
	real64 rLoc1_27 = (real64) dwArg0C + (dwArg04 + 0x0000000C)[(dwArg08 + 0x00000004) * 4F]
	(dwArg04 + 0x0000000C)[(dwArg08 + 0x00000004) * 4F] = rLoc1_27
	branch dwArg0C >= 0x00000000 l08048F80
l08048EE1:
	branch rLoc1_27 != Mem28[0x08049F30:real32] || P l08049024
	goto l08048EFA
l08048EF4:
l08048EFA:
	(dwArg04 + 0x0000000C)[(dwArg08 + 0x00000004) * 0x00000004] = 0x00000000
	word32 eax_64 = dwArg04 + dwArg08 *s 0x0000000C
	word32 edx_66 = Mem63[eax_64 + 0x0000003C:word32]
	Mem67[eax_64 + 0x0000003C:word32] = Mem63[eax_64 + 0x00000084:word32]
	Mem69[eax_64 + 0x00000084:word32] = Mem67[eax_64 + 0x0000007C:word32]
	word32 esi_70 = Mem69[eax_64 + 0x00000034:word32]
	Mem71[eax_64 + 0x00000034:word32] = edx_66
	word32 edx_72 = Mem71[eax_64 + 0x00000038:word32]
	Mem73[eax_64 + 0x0000007C:word32] = esi_70
	Mem75[eax_64 + 0x00000038:word32] = Mem73[eax_64 + 0x00000060:word32]
	Mem77[eax_64 + 0x00000060:word32] = Mem75[eax_64 + 0x00000080:word32]
	word32 esi_78 = Mem77[eax_64 + 0x00000058:word32]
	Mem79[eax_64 + 0x00000058:word32] = edx_72
	Mem80[eax_64 + 0x00000080:word32] = esi_78
	word32 edi_60 = 0x00000000
	word32 esi_108 = dwArg04 + 0x00000034 + dwArg08 *s 0x0000000C
l08048F4A:
	Mem85[fp - 0x00000014:word32] = 0x00000002
	Mem92[esi_108 + 0x00000000:word32] = fn08048BE1(Mem85[esi_108 + 0x00000000:word32], dwLoc14)
	Mem94[fp - 0x0000001C:word32] = 0x00000002
	Mem99[esi_108 + 0x00000004:word32] = fn08048BE1(Mem94[esi_108 + 0x00000004:word32], dwLoc1C)
	Mem101[fp - 0x00000024:word32] = 0x00000002
	Mem107[esi_108 + 0x00000008:word32] = fn08048BE1(Mem101[esi_108 + 0x00000008:word32], dwLoc24)
	edi_60 = edi_60 + 0x00000001
	esi_108 = esi_108 + 0x00000024
	branch edi_60 != 0x00000003 l08048F4A
l08048F7B:
	goto l08049024
l08048F80:
	branch dwArg0C == 0x00000000 l08049022
l08048F86:
	branch rLoc1_27 != Mem28[0x08049F34:real32] || P l08049024
	goto l08048F9F
l08048F99:
l08048F9F:
	(dwArg04 + 0x0000000C)[(dwArg08 + 0x00000004) * 0x00000004] = 0x00000000
	word32 eax_123 = dwArg04 + dwArg08 *s 0x0000000C
	word32 edx_125 = Mem122[eax_123 + 0x00000034:word32]
	Mem126[eax_123 + 0x00000034:word32] = Mem122[eax_123 + 0x0000007C:word32]
	Mem128[eax_123 + 0x0000007C:word32] = Mem126[eax_123 + 0x00000084:word32]
	word32 esi_129 = Mem128[eax_123 + 0x0000003C:word32]
	Mem130[eax_123 + 0x0000003C:word32] = edx_125
	word32 edx_131 = Mem130[eax_123 + 0x00000058:word32]
	Mem132[eax_123 + 0x00000084:word32] = esi_129
	Mem134[eax_123 + 0x00000058:word32] = Mem132[eax_123 + 0x00000080:word32]
	Mem136[eax_123 + 0x00000080:word32] = Mem134[eax_123 + 0x00000060:word32]
	word32 esi_137 = Mem136[eax_123 + 0x00000038:word32]
	Mem138[eax_123 + 0x00000038:word32] = edx_131
	Mem139[eax_123 + 0x00000060:word32] = esi_137
	word32 edi_119 = 0x00000000
	word32 esi_140 = dwArg04 + 0x00000034 + dwArg08 *s 0x0000000C
l08048FEF:
	Mem144[fp - 0x00000014:word32] = 0x00000002
	Mem150[esi_140 + 0x00000000:word32] = fn08048C24(Mem144[esi_140 + 0x00000000:word32], dwLoc14)
	Mem152[fp - 0x0000001C:word32] = 0x00000002
	Mem156[esi_140 + 0x00000004:word32] = fn08048C24(Mem152[esi_140 + 0x00000004:word32], dwLoc1C)
	Mem158[fp - 0x00000024:word32] = 0x00000002
	Mem163[esi_140 + 0x00000008:word32] = fn08048C24(Mem158[esi_140 + 0x00000008:word32], dwLoc24)
	edi_119 = edi_119 + 0x00000001
	esi_140 = esi_140 + 0x00000024
	branch edi_119 != 0x00000003 l08048FEF
l08049020:
	goto l08049024
l08049022:
l08049024:
fn08048EB5_exit:
}

void fn080490D5(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
fn080490D5_entry:
l080490D5:
	real64 rLoc1_27 = (real64) dwArg0C + dwArg04[(dwArg08 + 0x00000004) * 4F]
	dwArg04[(dwArg08 + 0x00000004) * 4F] = rLoc1_27
	branch dwArg0C >= 0x00000000 l08049191
l080490FF:
	branch rLoc1_27 != Mem28[0x08049F30:real32] || P l08049220
	goto l08049118
l08049112:
l08049118:
	dwArg04[(dwArg08 + 0x00000004) * 0x00000004] = 0x00000000
	word32 eax_64 = dwArg04 + dwArg08 *s 0x00000024
	word32 edx_66 = Mem63[eax_64 + 0x00000034:word32]
	Mem67[eax_64 + 0x00000034:word32] = Mem63[eax_64 + 0x0000004C:word32]
	Mem69[eax_64 + 0x0000004C:word32] = Mem67[eax_64 + 0x00000054:word32]
	word32 esi_70 = Mem69[eax_64 + 0x0000003C:word32]
	Mem71[eax_64 + 0x0000003C:word32] = edx_66
	word32 edx_72 = Mem71[eax_64 + 0x00000040:word32]
	Mem73[eax_64 + 0x00000054:word32] = esi_70
	Mem75[eax_64 + 0x00000040:word32] = Mem73[eax_64 + 0x00000050:word32]
	Mem77[eax_64 + 0x00000050:word32] = Mem75[eax_64 + 0x00000048:word32]
	word32 esi_78 = Mem77[eax_64 + 0x00000038:word32]
	Mem79[eax_64 + 0x00000038:word32] = edx_72
	Mem80[eax_64 + 0x00000048:word32] = esi_78
	word32 edi_60 = 0x00000000
	word32 esi_108 = dwArg04 + 0x00000034 + dwArg08 *s 0x00000024
l0804915B:
	Mem85[fp - 0x00000014:word32] = 0x00000001
	Mem92[esi_108 + 0x00000000:word32] = fn08048BE1(Mem85[esi_108 + 0x00000000:word32], dwLoc14)
	Mem94[fp - 0x0000001C:word32] = 0x00000001
	Mem99[esi_108 + 0x00000004:word32] = fn08048BE1(Mem94[esi_108 + 0x00000004:word32], dwLoc1C)
	Mem101[fp - 0x00000024:word32] = 0x00000001
	Mem107[esi_108 + 0x00000008:word32] = fn08048BE1(Mem101[esi_108 + 0x00000008:word32], dwLoc24)
	edi_60 = edi_60 + 0x00000001
	esi_108 = esi_108 + 0x0000000C
	branch edi_60 != 0x00000003 l0804915B
l0804918C:
	goto l08049220
l08049191:
	branch dwArg0C == 0x00000000 l0804921E
l08049197:
	branch rLoc1_27 != Mem28[0x08049F34:real32] || P l08049220
	goto l080491A8
l080491A6:
l080491A8:
	dwArg04[(dwArg08 + 0x00000004) * 0x00000004] = 0x00000000
	word32 eax_123 = dwArg04 + dwArg08 *s 0x00000024
	word32 edx_125 = Mem122[eax_123 + 0x0000003C:word32]
	Mem126[eax_123 + 0x0000003C:word32] = Mem122[eax_123 + 0x00000054:word32]
	Mem128[eax_123 + 0x00000054:word32] = Mem126[eax_123 + 0x0000004C:word32]
	word32 esi_129 = Mem128[eax_123 + 0x00000034:word32]
	Mem130[eax_123 + 0x00000034:word32] = edx_125
	word32 edx_131 = Mem130[eax_123 + 0x00000038:word32]
	Mem132[eax_123 + 0x0000004C:word32] = esi_129
	Mem134[eax_123 + 0x00000038:word32] = Mem132[eax_123 + 0x00000048:word32]
	Mem136[eax_123 + 0x00000048:word32] = Mem134[eax_123 + 0x00000050:word32]
	word32 esi_137 = Mem136[eax_123 + 0x00000040:word32]
	Mem138[eax_123 + 0x00000040:word32] = edx_131
	Mem139[eax_123 + 0x00000050:word32] = esi_137
	word32 edi_119 = 0x00000000
	word32 esi_140 = dwArg04 + 0x00000034 + dwArg08 *s 0x00000024
l080491EB:
	Mem144[fp - 0x00000014:word32] = 0x00000001
	Mem150[esi_140 + 0x00000000:word32] = fn08048C24(Mem144[esi_140 + 0x00000000:word32], dwLoc14)
	Mem152[fp - 0x0000001C:word32] = 0x00000001
	Mem156[esi_140 + 0x00000004:word32] = fn08048C24(Mem152[esi_140 + 0x00000004:word32], dwLoc1C)
	Mem158[fp - 0x00000024:word32] = 0x00000001
	Mem163[esi_140 + 0x00000008:word32] = fn08048C24(Mem158[esi_140 + 0x00000008:word32], dwLoc24)
	edi_119 = edi_119 + 0x00000001
	esi_140 = esi_140 + 0x0000000C
	branch edi_119 != 0x00000003 l080491EB
l0804921C:
	goto l08049220
l0804921E:
l08049220:
fn080490D5_exit:
}

word32 fn080492D1(word32 dwArg04, word32 dwArg08, word32 dwArg0C, ptr32 ebxOut)
{
	word32 esp_33;
	word32 esp_2 = fp - 0x00000004;
	word32 ecx_12 = Mem0[dwArg08 + 0x00000004:word32];
	if (ecx_12 == 0x00000002)
	{
		fn08048EB5(dwArg04, Mem0[dwArg08 + 0x00000008:word32], dwArg0C);
		esp_33 = fp - 0x00000010;
		goto l08049310;
	}
	else if (ecx_12 != 0x00000003)
		if (ecx_12 == 0x00000001)
		{
			fn080490D5(dwArg04, Mem0[dwArg08 + 0x00000008:word32], dwArg0C);
			esp_33 = fp - 0x00000010;
l08049310:
			esp_2 = esp_33 + 0x0000000C;
		}
	else
	{
		fn08048C67(dwArg04, Mem0[dwArg08 + 0x00000008:word32], dwArg0C);
		esp_33 = fp - 0x00000010;
		goto l08049310;
	}
	word32 ebx_24;
	*ebxOut = Mem0[esp_2 + 0x00000000:word32];
	return dwArg04;
}

void fn08049330(word32 eax, byte bArg04, word32 dwArg0C)
{
	do
	{
		fn0804878C();
		if (eax == 0x00000000)
			goto l0804935F;
	} while (bArg04 != 0x02 || dwArg0C != 0x0000001B);
	return;
}

void fn08049363(word32 eax, word32 dwArg04, word32 dwArg08)
{
	fn0804880C();
	Mem8[eax + 0x00000004:word32] = dwArg04;
	Mem12[eax + 0x00000008:word32] = dwArg08;
	return;
}

void fn0804937F(word32 eax)
{
	fn0804880C();
	Mem6[eax + 0x00000004:word32] = 0x3F4CCCCD;
	return;
}

word32 fn08049394(word32 eax)
{
	fn0804880C();
	Mem23[eax + 0x00000004:word32] = 0x00000000;
	Mem24[eax + 0x00000008:word32] = 0x00000000;
	Mem25[eax + 0x0000000C:word32] = 0x00000000;
	Mem26[eax + 0x00000010:word32] = 0x00000000;
	Mem27[eax + 0x0000001C:word32] = 0x00000000;
	Mem28[eax + 0x00000028:word32] = 0x00000000;
	Mem29[eax + 0x00000014:word32] = 0x00000000;
	Mem30[eax + 0x00000020:word32] = 0x00000000;
	Mem31[eax + 0x0000002C:word32] = 0x00000000;
	Mem32[eax + 0x00000018:word32] = 0x00000000;
	Mem33[eax + 0x00000024:word32] = 0x00000000;
	Mem34[eax + 0x00000030:word32] = 0x00000000;
	word32 edi_38 = 0x00000000;
	do
	{
		word32 eax_41 = edi_38 *s 0x00000024;
		word32 ebp_42 = 0x00000000;
		word32 esi_45 = eax + 0x00000034 + eax_41;
		do
		{
			fn0804937F(eax_41);
			Mem50[esi_45 + 0x00000000:word32] = eax_41;
			fn0804937F(eax_41);
			Mem51[esi_45 + 0x00000004:word32] = eax_41;
			fn0804937F(eax_41);
			Mem52[esi_45 + 0x00000008:word32] = eax_41;
			ebp_42 = ebp_42 + 0x00000001;
			esi_45 = esi_45 + 0x0000000C;
		} while (ebp_42 != 0x00000003);
		edi_38 = edi_38 + 0x00000001;
	} while (edi_38 == 0x00000003);
	Mem62[fp - 0x0000002C:word32] = eax;
	return fn08048AA8(0x000000A0);
}

word32 fn08049444(word32 dwArg04)
{
	fn0804886C();
	fn0804884C();
	fn0804874C();
	real32 v7_17 = Mem0[dwArg04 + 0x00000004:real32] / Mem0[0x08049F38:real64];
	Mem18[dwArg04 + 0x00000004:real32] = v7_17;
	fn0804885C();
	fn0804885C();
	fn0804885C();
	fn0804885C();
	fn0804874C();
	fn0804885C();
	fn0804885C();
	real32 v15_107 = Mem18[dwArg04 + 0x00000004:real32] / Mem18[0x08049F38:real64];
	Mem108[dwArg04 + 0x00000004:real32] = v15_107;
	fn0804885C();
	fn0804885C();
	fn0804874C();
	real32 v17_133 = Mem108[dwArg04 + 0x00000004:real32] / Mem108[0x08049F38:real64];
	Mem134[dwArg04 + 0x00000004:real32] = v17_133;
	fn0804885C();
	fn0804885C();
	fn0804885C();
	fn0804885C();
	fn0804874C();
	fn0804885C();
	fn0804885C();
	fn0804885C();
	fn0804885C();
	fn0804874C();
	fn0804885C();
	fn0804885C();
	fn0804885C();
	fn0804885C();
	fn0804874C();
	fn0804885C();
	fn0804885C();
	fn0804885C();
	fn0804885C();
	fn0804870C();
	Mem134[0x0804A134:word32]();
	return dwArg04 + 0x00000044;
}

word32 fn0804993D(word32 dwArg04)
{
	fn0804881C();
	fn0804881C();
	fn0804881C();
	word32 edi_207 = 0x00000000;
	word32 dwLoc28_212 = dwArg04;
	do
	{
		Mem80[fp - 0x00000064:word32] = 0x00000000;
		fn0804881C();
		word32 ebp_104 = 0x00000000;
		word32 dwLoc24_100 = dwLoc28_212 + 0x00000034;
		do
		{
			Mem106[fp - 0x00000060:word32] = 0x00000000;
			fn0804881C();
			word32 esi_107 = 0x00000000;
			do
			{
				fn0804881C();
				fn080487FC();
				word32 eax_150 = fn08049444((dwLoc24_100 + 0x00000000)[esi_107 * 0x00000004]);
				fn080487FC();
				Mem169[fp - 0x00000078:word32] = 0x00000000;
				fn0804881C();
				esi_107 = esi_107 + 0x00000001;
			} while (esi_107 != 0x00000003);
			Mem181[fp - 0x00000060:word32] = 0x00000000;
			fn0804881C();
			ebp_104 = ebp_104 + 0x00000001;
			dwLoc24_100 = dwLoc24_100 + 0x0000000C;
		} while (ebp_104 != 0x00000003);
		Mem199[fp - 0x00000060:word32] = 0x00000000;
		Mem201[fp - 0x00000064:word32] = 0x00000000;
		Mem203[fp - 0x00000068:word32] = 0x3F800000;
		fn0804881C();
		edi_207 = edi_207 + 0x00000001;
		dwLoc28_212 = dwLoc28_212 + 0x00000024;
	} while (edi_207 != 0x00000003);
	Mem217[fp - 0x00000060:word32] = 0x3F800000;
	Mem219[fp - 0x00000064:word32] = 0x00000000;
	Mem221[fp - 0x00000068:word32] = 0x00000000;
	fn0804881C();
	Mem228[fp - 0x00000070:word32] = 0x00000000;
	Mem230[fp - 0x00000074:word32] = 0x3F800000;
	Mem232[fp - 0x00000078:word32] = 0x00000000;
	fn0804881C();
	Mem240[fp - 0x00000060:word32] = 0x00000000;
	Mem242[fp - 0x00000064:word32] = 0x00000000;
	Mem244[fp - 0x00000068:word32] = 0x3F800000;
	fn0804881C();
	return eax_150;
}

void fn08049B18(word32 eax, word32 ebp)
{
// def fp
// def eax
// def Mem0
// def bArg00
// def dwArg08
// def dwArg00
// def dwArg04
	fn080487CC();
	fn0804877C();
	fn080487DC();
	fn080487BC();
	fn0804883C();
	fn0804872C();
	fn0804882C();
	fn0804873C();
	fn080488CC();
	fn0804875C();
	fn080487AC();
	fn080487EC();
	fn0804875C();
	fn080487AC();
	fn0804876C();
	fn080487AC();
	ebx_95 = 0x00000000;
	fn080486FC();
	fn0804881C();
	fn0804881C();
	eax_132 = fn08049394(eax);
	ebp_137 = eax_132;
	fn0804871C();
	esp_139 = fp - 0x0000014C;
	eax_141 = fp - 0x00000030;
	do
	{
// eax_151 = PHI(eax_141, eax_230)
// ebx_152 = PHI(ebx_95, ebx_233)
// esp_153 = PHI(esp_139, esp_232)
		esp_154 = esp_153 - 0x00000020;
		ecx_156 = 0x00000005;
		esi_158 = Mem0[esp_154 + 0x0000002C:word32];
		edi_159 = esp_154;
// esi_160 = PHI(esi_165, esi_158)
// edi_161 = PHI(edi_166, edi_159)
// ecx_162 = PHI(ecx_167, ecx_156)
		while (ecx_162 != 0x00000000)
		{
			v12_163 = Mem0[esi_160 + 0x00000000:word32];
			Mem164[edi_161 + 0x00000000:word32] = v12_163;
			esi_165 = esi_160 + 0x00000004;
			edi_166 = edi_161 + 0x00000004;
			ecx_167 = ecx_162 - 0x00000001;
// esi_160 = PHI(esi_165, esi_158)
// edi_161 = PHI(edi_166, edi_159)
// ecx_162 = PHI(ecx_167, ecx_156)
		}
		fn08049330(eax_151, bArg00, dwArg08);
		esp_170 = esp_154 + 0x00000020;
		eax_172 = 0x00000000;
		if (0x00000000 == 0x00000000)
		{
			fn0804889C();
			return;
		}
		fn080488AC();
		edx_eax_219 = 0;
		edx_220 = 0;
		edx_eax_221 = SEQ(edx_220, eax_172);
		eax_222 = edx_eax_221 / 0x00000003;
		esi_225 = edx_220 + 0x00000001;
		fn080488AC();
		if (Mem0[esp_170 + 0x0000001C:word32] == esi_225)
			ebx_433 = ebx_152 - 0x00000001;
		else
		{
			esp_436 = esp_170 - 0x00000004;
			Mem437[esp_436 + 0x00000000:word32] = edx_220;
			esp_438 = esp_436 - 0x00000004;
			Mem439[esp_438 + 0x00000000:word32] = edx_220;
			edx_eax_440 = (int64) eax_222;
			edx_441 = edx_eax_440 % 0x00000003;
			edx_eax_442 = SEQ(edx_441, eax_222);
			eax_443 = edx_eax_442 / 0x00000003;
			esp_445 = esp_438 - 0x00000004;
			Mem446[esp_445 + 0x00000000:word32] = edx_441;
			esp_447 = esp_445 - 0x00000004;
			Mem448[esp_447 + 0x00000000:word32] = esi_225;
			fn08049363(eax_443, dwArg00, dwArg04);
			(esp_447 + 0x0000003C)[ebx_152 * 0x00000004] = eax_443;
			esp_450 = esp_447 + 0x0000000C;
			esp_452 = esp_450 - 0x00000004;
			Mem453[esp_452 + 0x00000000:word32] = 0x0000005A;
			esp_454 = esp_452 - 0x00000004;
			Mem455[esp_454 + 0x00000000:word32] = eax_443;
			esp_456 = esp_454 - 0x00000004;
			Mem457[esp_456 + 0x00000000:word32] = ebp_137;
			eax_459 = fn080492D1(dwArg00, dwArg04, dwArg08, out ebx_458);
			Mem461[esp_456 + 0x0000002C:word32] = esi_225;
			esp_462 = esp_456 + 0x00000010;
		}
// eax_230 = PHI(eax_222, eax_459)
// ebx_231 = PHI(ebx_433, ebx_458)
// esp_232 = PHI(esp_170, esp_462)
		ebx_233 = ebx_231 + 0x00000001;
	} while (ebx_233 <= 0x0000003B);
	esp_237 = esp_232 - 0x0000000C;
	ebx_238 = 0x00000000;
	esp_242 = esp_237 - 0x00000004;
	Mem243[esp_242 + 0x00000000:word32] = ebp_137;
	fn0804993D(dwArg00);
	fn0804879C();
	esp_246 = esp_242 + 0x00000010;
	eax_248 = esp_246 + 0x0000011C;
	Mem250[esp_246 + 0x00000008:word32] = eax_248;
	do
	{
// eax_255 = PHI(eax_248, eax_289)
// ebx_256 = PHI(ebx_238, ebx_278)
// esp_257 = PHI(esp_246, esp_292)
		esp_258 = esp_257 - 0x00000020;
		ecx_260 = 0x00000005;
		esi_261 = Mem250[esp_258 + 0x00000028:word32];
		edi_262 = esp_258;
// esi_263 = PHI(esi_268, esi_261)
// edi_264 = PHI(edi_269, edi_262)
// ecx_265 = PHI(ecx_270, ecx_260)
		while (ecx_265 != 0x00000000)
		{
			v16_266 = Mem250[esi_263 + 0x00000000:word32];
			Mem267[edi_264 + 0x00000000:word32] = v16_266;
			esi_268 = esi_263 + 0x00000004;
			edi_269 = edi_264 + 0x00000004;
			ecx_270 = ecx_265 - 0x00000001;
// esi_263 = PHI(esi_268, esi_261)
// edi_264 = PHI(edi_269, edi_262)
// ecx_265 = PHI(ecx_270, ecx_260)
		}
		fn08049330(eax_255, bArg00, dwArg08);
		esp_271 = esp_258 + 0x00000020;
		if (0x00000000 == 0x00000000)
			;
		esp_276 = esp_271 - 0x00000004;
		Mem277[esp_276 + 0x00000000:word32] = 0x3F800000;
		ebx_278 = ebx_256 + 0x00000001;
		esp_281 = esp_276 - 0x00000004;
		Mem282[esp_281 + 0x00000000:word32] = 0x3F800000;
		esp_283 = esp_281 - 0x00000004;
		Mem284[esp_283 + 0x00000000:word32] = 0x00000000;
		esp_285 = esp_283 - 0x00000004;
		Mem286[esp_285 + 0x00000000:word32] = 0x40000000;
		fn0804881C();
		Mem287[esp_285 + 0x00000000:word32] = 0x00004100;
		fn0804876C();
		fn0804887C();
		Mem288[esp_285 + 0x00000000:word32] = ebp_137;
		eax_289 = fn0804993D(dwArg00);
		fn0804879C();
		Mem291[esp_285 + 0x00000000:word32] = 0x00000014;
		fn0804888C();
		esp_292 = esp_285 + 0x00000010;
	} while (ebx_278 != 0x000000C8);
	eax_295 = esp_292 + 0x0000011C;
	bl_297 = 0x3B;
	ebx_298 = DPB(ebx_278, bl_297, 0, 8);
	Mem299[esp_292 + 0x00000004:word32] = eax_295;
	do
	{
// eax_304 = PHI(eax_295, eax_358)
// ebx_306 = PHI(ebx_298, ebx_366)
// esp_307 = PHI(esp_292, esp_363)
		Mem311[esp_307 + 0x0000001C:word32] = 0x00000000;
		Mem312[esp_307 + 0x0000001C:word32] = 0x00000000;
		do
		{
// eax_316 = PHI(eax_304, eax_358)
// ebx_317 = PHI(ebx_306, ebx_354)
// esp_318 = PHI(esp_307, esp_363)
			esp_319 = esp_318 - 0x00000020;
			ecx_321 = 0x00000005;
			esi_322 = Mem312[esp_319 + 0x00000024:word32];
			edi_323 = esp_319;
// esi_324 = PHI(esi_322, esi_329)
// edi_325 = PHI(edi_323, edi_330)
// ecx_326 = PHI(ecx_321, ecx_331)
			while (ecx_326 != 0x00000000)
			{
				v18_327 = Mem312[esi_324 + 0x00000000:word32];
				Mem328[edi_325 + 0x00000000:word32] = v18_327;
				esi_329 = esi_324 + 0x00000004;
				edi_330 = edi_325 + 0x00000004;
				ecx_331 = ecx_326 - 0x00000001;
// esi_324 = PHI(esi_322, esi_329)
// edi_325 = PHI(edi_323, edi_330)
// ecx_326 = PHI(ecx_321, ecx_331)
			}
			fn08049330(eax_316, bArg00, dwArg08);
			esp_332 = esp_319 + 0x00000020;
			if (0x00000000 == 0x00000000)
				;
			esp_337 = esp_332 - 0x00000004;
			Mem338[esp_337 + 0x00000000:word32] = 0x3F800000;
			esp_339 = esp_337 - 0x00000004;
			Mem340[esp_339 + 0x00000000:word32] = 0x3F800000;
			esp_341 = esp_339 - 0x00000004;
			Mem342[esp_341 + 0x00000000:word32] = 0x00000000;
			esp_343 = esp_341 - 0x00000004;
			Mem344[esp_343 + 0x00000000:word32] = 0x40000000;
			fn0804881C();
			esp_345 = esp_343 + 0x0000000C;
			esp_347 = esp_345 - 0x00000004;
			Mem348[esp_347 + 0x00000000:word32] = 0xFFFFFFFB;
			esp_349 = esp_347 - 0x00000004;
			Mem350[esp_349 + 0x00000000:word32] = (esp_349 + 0x00000034)[ebx_317 * 0x00000004];
			esp_351 = esp_349 - 0x00000004;
			Mem352[esp_351 + 0x00000000:word32] = ebp_137;
			fn080492D1(dwArg00, dwArg04, dwArg08, out ebx_354);
			Mem356[esp_351 + 0x00000000:word32] = 0x00004100;
			fn0804876C();
			fn0804887C();
			Mem357[esp_351 + 0x00000000:word32] = ebp_137;
			eax_358 = fn0804993D(dwArg00);
			fn0804879C();
			Mem360[esp_351 + 0x00000000:word32] = 0x00000014;
			fn0804888C();
			v19_361 = Mem360[esp_351 + 0x0000002C:word32] + 0x00000001;
			Mem362[esp_351 + 0x0000002C:word32] = v19_361;
			esp_363 = esp_351 + 0x00000010;
		} while (Mem362[esp_363 + 0x0000001C:word32] != 0x00000012);
		ebx_366 = ebx_354 - 0x00000001;
	} while (ebx_366 == 0xFFFFFFFF);
	eax_370 = esp_363 + 0x0000011C;
	ebx_372 = 0x00000000;
	Mem376[esp_363 + 0x00000000:word32] = eax_370;
	do
	{
// eax_381 = PHI(eax_370, eax_415)
// ebx_382 = PHI(ebx_372, ebx_404)
// esp_383 = PHI(esp_363, esp_418)
		esp_384 = esp_383 - 0x00000020;
		ecx_386 = 0x00000005;
		esi_387 = Mem376[esp_384 + 0x00000020:word32];
		edi_388 = esp_384;
// esi_389 = PHI(esi_394, esi_387)
// edi_390 = PHI(edi_395, edi_388)
// ecx_391 = PHI(ecx_396, ecx_386)
		while (ecx_391 != 0x00000000)
		{
			v20_392 = Mem376[esi_389 + 0x00000000:word32];
			Mem393[edi_390 + 0x00000000:word32] = v20_392;
			esi_394 = esi_389 + 0x00000004;
			edi_395 = edi_390 + 0x00000004;
			ecx_396 = ecx_391 - 0x00000001;
// esi_389 = PHI(esi_394, esi_387)
// edi_390 = PHI(edi_395, edi_388)
// ecx_391 = PHI(ecx_396, ecx_386)
		}
		fn08049330(eax_381, bArg00, dwArg08);
		esp_397 = esp_384 + 0x00000020;
		if (0x00000000 == 0x00000000)
			;
		esp_402 = esp_397 - 0x00000004;
		Mem403[esp_402 + 0x00000000:word32] = 0x3F800000;
		ebx_404 = ebx_382 + 0x00000001;
		esp_407 = esp_402 - 0x00000004;
		Mem408[esp_407 + 0x00000000:word32] = 0x3F800000;
		esp_409 = esp_407 - 0x00000004;
		Mem410[esp_409 + 0x00000000:word32] = 0x00000000;
		esp_411 = esp_409 - 0x00000004;
		Mem412[esp_411 + 0x00000000:word32] = 0x40000000;
		fn0804881C();
		Mem413[esp_411 + 0x00000000:word32] = 0x00004100;
		fn0804876C();
		fn0804887C();
		Mem414[esp_411 + 0x00000000:word32] = ebp_137;
		eax_415 = fn0804993D(dwArg00);
		fn0804879C();
		Mem417[esp_411 + 0x00000000:word32] = 0x00000014;
		fn0804888C();
		esp_418 = esp_411 + 0x00000010;
	} while (ebx_404 != 0x0000015E);
	fn0804889C();
	__syscall(0x80);
	return;
}

