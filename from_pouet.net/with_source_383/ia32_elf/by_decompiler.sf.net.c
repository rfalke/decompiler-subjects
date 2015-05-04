// subject.c
// Generated on 5/4/2015 12:11:42 AM by decompiling from_pouet.net/with_source_383/ia32_elf/subject.exe
// using Decompiler version 0.4.2.0.

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
fn08049B18_entry:
	def fp
	def eax
	def Mem0
	def bArg00
	def dwArg08
	def dwArg00
	def dwArg04
l08049B18:
	fn080487CC()
	fn0804877C()
	fn080487DC()
	fn080487BC()
	fn0804883C()
	fn0804872C()
	fn0804882C()
	fn0804873C()
	fn080488CC()
	fn0804875C()
	fn080487AC()
	fn080487EC()
	fn0804875C()
	fn080487AC()
	fn0804876C()
	fn080487AC()
	ebx_95 = 0x00000000
	fn080486FC()
	fn0804881C()
	fn0804881C()
	eax_132 = fn08049394(eax)
	ebp_137 = eax_132
	fn0804871C()
	esp_139 = fp - 0x0000014C
	eax_141 = fp - 0x00000030
l08049C8C:
	eax_150 = PHI(eax_141, eax_216)
	ebx_152 = PHI(ebx_95, ebx_219)
	esp_153 = PHI(esp_139, esp_218)
	esp_154 = esp_153 - 0x00000020
	ecx_156 = 0x00000005
	esi_158 = Mem0[esp_154 + 0x0000002C:word32]
	edi_159 = esp_154
l08049C9A:
	esi_160 = PHI(esi_165, esi_158)
	edi_161 = PHI(edi_166, edi_159)
	ecx_162 = PHI(ecx_167, ecx_156)
	branch ecx_162 == 0x00000000 l08049C9C
l08049C9A_1:
	v12_163 = Mem0[esi_160 + 0x00000000:word32]
	Mem164[edi_161 + 0x00000000:word32] = v12_163
	esi_165 = esi_160 + 0x00000004
	edi_166 = edi_161 + 0x00000004
	ecx_167 = ecx_162 - 0x00000001
	goto l08049C9A
l08049C9C:
	fn08049330(eax_150, bArg00, dwArg08)
	esp_170 = esp_154 + 0x00000020
	eax_172 = 0x00000000
	branch 0x00000000 == 0x00000000 l08049E43
l08049CAB:
	fn080488AC()
	edx_eax_205 = 0
	edx_206 = 0
	edx_eax_207 = SEQ(edx_206, eax_172) (alias)
	eax_208 = edx_eax_207 / 0x00000003
	esi_211 = edx_206 + 0x00000001
	fn080488AC()
	branch Mem0[esp_170 + 0x0000001C:word32] != esi_211 l08049CC9
l08049CC6:
	ebx_411 = ebx_152 - 0x00000001
	goto l08049CEC
l08049CC9:
	esp_414 = esp_170 - 0x00000004
	Mem415[esp_414 + 0x00000000:word32] = edx_206
	esp_416 = esp_414 - 0x00000004
	Mem417[esp_416 + 0x00000000:word32] = edx_206
	edx_eax_418 = (int64) eax_208
	edx_419 = edx_eax_418 % 0x00000003
	edx_eax_420 = SEQ(edx_419, eax_208) (alias)
	eax_421 = edx_eax_420 / 0x00000003
	esp_423 = esp_416 - 0x00000004
	Mem424[esp_423 + 0x00000000:word32] = edx_419
	esp_425 = esp_423 - 0x00000004
	Mem426[esp_425 + 0x00000000:word32] = esi_211
	fn08049363(eax_421, dwArg00, dwArg04)
	(esp_425 + 0x0000003C)[ebx_152 * 0x00000004] = eax_421
	esp_428 = esp_425 + 0x0000000C
	esp_430 = esp_428 - 0x00000004
	Mem431[esp_430 + 0x00000000:word32] = 0x0000005A
	esp_432 = esp_430 - 0x00000004
	Mem433[esp_432 + 0x00000000:word32] = eax_421
	esp_434 = esp_432 - 0x00000004
	Mem435[esp_434 + 0x00000000:word32] = ebp_137
	eax_437 = fn080492D1(dwArg00, dwArg04, dwArg08, out ebx_436)
	Mem439[esp_434 + 0x0000002C:word32] = esi_211
	esp_440 = esp_434 + 0x00000010
l08049CEC:
	eax_216 = PHI(eax_208, eax_437)
	ebx_217 = PHI(ebx_411, ebx_436)
	esp_218 = PHI(esp_170, esp_440)
	ebx_219 = ebx_217 + 0x00000001
	branch ebx_219 <= 0x0000003B l08049C8C
l08049CF2:
	esp_223 = esp_218 - 0x0000000C
	ebx_224 = 0x00000000
	esp_228 = esp_223 - 0x00000004
	Mem229[esp_228 + 0x00000000:word32] = ebp_137
	fn0804993D(dwArg00)
	fn0804879C()
	esp_232 = esp_228 + 0x00000010
	eax_234 = esp_232 + 0x0000011C
	Mem236[esp_232 + 0x00000008:word32] = eax_234
l08049D10:
	eax_240 = PHI(eax_234, eax_275)
	ebx_242 = PHI(ebx_224, ebx_264)
	esp_243 = PHI(esp_232, esp_278)
	esp_244 = esp_243 - 0x00000020
	ecx_246 = 0x00000005
	esi_247 = Mem236[esp_244 + 0x00000028:word32]
	edi_248 = esp_244
l08049D1E:
	esi_249 = PHI(esi_254, esi_247)
	edi_250 = PHI(edi_255, edi_248)
	ecx_251 = PHI(ecx_256, ecx_246)
	branch ecx_251 == 0x00000000 l08049D20
l08049D1E_1:
	v16_252 = Mem236[esi_249 + 0x00000000:word32]
	Mem253[edi_250 + 0x00000000:word32] = v16_252
	esi_254 = esi_249 + 0x00000004
	edi_255 = edi_250 + 0x00000004
	ecx_256 = ecx_251 - 0x00000001
	goto l08049D1E
l08049D20:
	fn08049330(eax_240, bArg00, dwArg08)
	esp_257 = esp_244 + 0x00000020
	branch 0x00000000 == 0x00000000 l08049E43
l08049D2F:
	esp_262 = esp_257 - 0x00000004
	Mem263[esp_262 + 0x00000000:word32] = 0x3F800000
	ebx_264 = ebx_242 + 0x00000001
	esp_267 = esp_262 - 0x00000004
	Mem268[esp_267 + 0x00000000:word32] = 0x3F800000
	esp_269 = esp_267 - 0x00000004
	Mem270[esp_269 + 0x00000000:word32] = 0x00000000
	esp_271 = esp_269 - 0x00000004
	Mem272[esp_271 + 0x00000000:word32] = 0x40000000
	fn0804881C()
	Mem273[esp_271 + 0x00000000:word32] = 0x00004100
	fn0804876C()
	fn0804887C()
	Mem274[esp_271 + 0x00000000:word32] = ebp_137
	eax_275 = fn0804993D(dwArg00)
	fn0804879C()
	Mem277[esp_271 + 0x00000000:word32] = 0x00000014
	fn0804888C()
	esp_278 = esp_271 + 0x00000010
	branch ebx_264 != 0x000000C8 l08049D10
l08049D7B:
	eax_281 = esp_278 + 0x0000011C
	bl_283 = 0x3B
	ebx_284 = DPB(ebx_264, bl_283, 0, 8) (alias)
	Mem285[esp_278 + 0x00000004:word32] = eax_281
	goto l08049E0F
l08049D8D:
	eax_301 = PHI(eax_289, eax_344)
	ebx_303 = PHI(ebx_292, ebx_340)
	esp_304 = PHI(esp_293, esp_349)
	esp_305 = esp_304 - 0x00000020
	ecx_307 = 0x00000005
	esi_308 = Mem298[esp_305 + 0x00000024:word32]
	edi_309 = esp_305
l08049D9B:
	esi_310 = PHI(esi_308, esi_315)
	edi_311 = PHI(edi_309, edi_316)
	ecx_312 = PHI(ecx_307, ecx_317)
	branch ecx_312 == 0x00000000 l08049D9D
l08049D9B_1:
	v18_313 = Mem298[esi_310 + 0x00000000:word32]
	Mem314[edi_311 + 0x00000000:word32] = v18_313
	esi_315 = esi_310 + 0x00000004
	edi_316 = edi_311 + 0x00000004
	ecx_317 = ecx_312 - 0x00000001
	goto l08049D9B
l08049D9D:
	fn08049330(eax_301, bArg00, dwArg08)
	esp_318 = esp_305 + 0x00000020
	branch 0x00000000 == 0x00000000 l08049E43
l08049DAC:
	esp_323 = esp_318 - 0x00000004
	Mem324[esp_323 + 0x00000000:word32] = 0x3F800000
	esp_325 = esp_323 - 0x00000004
	Mem326[esp_325 + 0x00000000:word32] = 0x3F800000
	esp_327 = esp_325 - 0x00000004
	Mem328[esp_327 + 0x00000000:word32] = 0x00000000
	esp_329 = esp_327 - 0x00000004
	Mem330[esp_329 + 0x00000000:word32] = 0x40000000
	fn0804881C()
	esp_331 = esp_329 + 0x0000000C
	esp_333 = esp_331 - 0x00000004
	Mem334[esp_333 + 0x00000000:word32] = 0xFFFFFFFB
	esp_335 = esp_333 - 0x00000004
	Mem336[esp_335 + 0x00000000:word32] = (esp_335 + 0x00000034)[ebx_303 * 0x00000004]
	esp_337 = esp_335 - 0x00000004
	Mem338[esp_337 + 0x00000000:word32] = ebp_137
	fn080492D1(dwArg00, dwArg04, dwArg08, out ebx_340)
	Mem342[esp_337 + 0x00000000:word32] = 0x00004100
	fn0804876C()
	fn0804887C()
	Mem343[esp_337 + 0x00000000:word32] = ebp_137
	eax_344 = fn0804993D(dwArg00)
	fn0804879C()
	Mem346[esp_337 + 0x00000000:word32] = 0x00000014
	fn0804888C()
	v19_347 = Mem346[esp_337 + 0x0000002C:word32] + 0x00000001
	Mem348[esp_337 + 0x0000002C:word32] = v19_347
	esp_349 = esp_337 + 0x00000010
	branch Mem348[esp_349 + 0x0000001C:word32] != 0x00000012 l08049D8D
l08049E09:
	ebx_352 = ebx_340 - 0x00000001
	branch ebx_352 == 0xFFFFFFFF l08049E1C
l08049E0F:
	eax_289 = PHI(eax_281, eax_344)
	ebx_292 = PHI(ebx_284, ebx_352)
	esp_293 = PHI(esp_278, esp_349)
	Mem297[esp_293 + 0x0000001C:word32] = 0x00000000
	Mem298[esp_293 + 0x0000001C:word32] = 0x00000000
	goto l08049D8D
l08049E1C:
	eax_356 = esp_349 + 0x0000011C
	ebx_358 = 0x00000000
	Mem362[esp_349 + 0x00000000:word32] = eax_356
l08049E28:
	eax_366 = PHI(eax_356, eax_401)
	ebx_368 = PHI(ebx_358, ebx_390)
	esp_369 = PHI(esp_349, esp_404)
	esp_370 = esp_369 - 0x00000020
	ecx_372 = 0x00000005
	esi_373 = Mem362[esp_370 + 0x00000020:word32]
	edi_374 = esp_370
l08049E36:
	esi_375 = PHI(esi_380, esi_373)
	edi_376 = PHI(edi_381, edi_374)
	ecx_377 = PHI(ecx_382, ecx_372)
	branch ecx_377 == 0x00000000 l08049E38
l08049E36_1:
	v20_378 = Mem362[esi_375 + 0x00000000:word32]
	Mem379[edi_376 + 0x00000000:word32] = v20_378
	esi_380 = esi_375 + 0x00000004
	edi_381 = edi_376 + 0x00000004
	ecx_382 = ecx_377 - 0x00000001
	goto l08049E36
l08049E38:
	fn08049330(eax_366, bArg00, dwArg08)
	esp_383 = esp_370 + 0x00000020
	branch 0x00000000 != 0x00000000 l08049E52
l08049E43:
l08049E4C_thunk_fn0804889C:
	fn0804889C()
	return
l08049E52:
	esp_388 = esp_383 - 0x00000004
	Mem389[esp_388 + 0x00000000:word32] = 0x3F800000
	ebx_390 = ebx_368 + 0x00000001
	esp_393 = esp_388 - 0x00000004
	Mem394[esp_393 + 0x00000000:word32] = 0x3F800000
	esp_395 = esp_393 - 0x00000004
	Mem396[esp_395 + 0x00000000:word32] = 0x00000000
	esp_397 = esp_395 - 0x00000004
	Mem398[esp_397 + 0x00000000:word32] = 0x40000000
	fn0804881C()
	Mem399[esp_397 + 0x00000000:word32] = 0x00004100
	fn0804876C()
	fn0804887C()
	Mem400[esp_397 + 0x00000000:word32] = ebp_137
	eax_401 = fn0804993D(dwArg00)
	fn0804879C()
	Mem403[esp_397 + 0x00000000:word32] = 0x00000014
	fn0804888C()
	esp_404 = esp_397 + 0x00000010
	branch ebx_390 != 0x0000015E l08049E28
l08049E9E:
	fn0804889C()
fn08049B18_exit:
}

