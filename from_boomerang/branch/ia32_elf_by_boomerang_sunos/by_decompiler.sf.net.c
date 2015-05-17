// subject.c
// Generated on TIMESTAMP by decompiling from_boomerang/branch/ia32_elf_by_boomerang_sunos/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn08048840(word32 edx, word32 dwArg00)
{
fn08048840_entry:
l08048840:
	branch 0x080487A0 == 0x00000000 l0804885D
l08048850:
	atexit(0x080487A0)
l0804885D:
	branch 0x0804A5F4 == 0x00000000 l0804886B
l08048866:
	atexit(edx)
l0804886B:
	Mem24[fp - 0x00000010:word32] = 0x08049510
	atexit(0x080487A0)
	Mem28[0x0804ACCC:word32] = fp + 0x00000008 + dwArg00 * 0x00000004
	call __fpstart (retsize: 4; depth: 4)
	Mem41[fp - 0x00000014:word32] = fn08048948(fn080494E0(fp - 0x00000008))
	exit(Mem41[fp - 0x00000014:int32])
	Mem43[fp - 0x00000018:word32] = 0x00000000
fn08048840_exit:
}

word32 fn08048908(word32 ebp)
{
	word32 ebp_10 = fn08048911(fp - 0x00000004, dwLoc0C);
	return fn08048911(ebp_10, ebp);
}

word32 fn08048911(word32 ebp, word32 dwArg00)
{
	return Mem0[fn0804923C(ebp):word32];
}

word32 fn08048948(word32 ebx)
{
// def fp
// def dwLoc08
// def dwLoc0C
	dwLoc1C_19 = 0x08049528;
	tLoc18_20 = SLICE(0x08049528, <unknown>, 32);
	scanf(dwLoc1C_19, tLoc18_20);
	dwLoc24_26 = 0x08049528;
	tLoc20_27 = SLICE(dwLoc24_26, <unknown>, 32);
	scanf(dwLoc24_26, tLoc20_27);
	if (dwLoc08 == 0x00000005)
	{
		dwLoc18_157 = 0x0804952B;
		tLoc14_158 = SLICE(dwLoc18_157, <unknown>, 32);
		printf(dwLoc18_157, tLoc14_158);
	}
	if (dwLoc08 != 0x00000005)
	{
		dwLoc18_144 = 0x08049532;
		tLoc14_145 = SLICE(dwLoc18_144, <unknown>, 32);
		printf(dwLoc18_144, tLoc14_145);
		if (dwLoc08 < 0x00000005)
		{
			esp_150 = fp - 0x00000018;
			Mem151[esp_150 + 0x00000000:word32] = 0x0804953D;
			printf(0x08049532, tLoc14_145);
			if (dwLoc08 >= 0x00000005)
			{
l080489B1:
				dwLoc18_137 = 0x08049546;
				tLoc14_138 = SLICE(dwLoc18_137, <unknown>, 32);
				printf(dwLoc18_137, tLoc14_138);
				if (dwLoc08 <= 0x00000005)
				{
l080489C3:
					dwLoc18_129 = 0x08049555;
					tLoc14_130 = SLICE(dwLoc18_129, <unknown>, 32);
					printf(dwLoc18_129, tLoc14_130);
					if (dwLoc08 > 0x00000005)
					{
l080489D5:
						dwLoc18_122 = 0x08049567;
						tLoc14_123 = SLICE(dwLoc18_122, <unknown>, 32);
						printf(dwLoc18_122, tLoc14_123);
					}
				}
				else
					goto l080489D5;
			}
			else
				goto l080489C3;
		}
		else
			goto l080489B1;
	}
	else
		goto l080489B1;
	if (dwLoc0C <u 0x00000005)
	{
		dwLoc18_113 = 0x0804956D;
		tLoc14_114 = SLICE(dwLoc18_113, <unknown>, 32);
		printf(dwLoc18_113, tLoc14_114);
		if (dwLoc0C >=u 0x00000005)
		{
l080489F9:
			dwLoc18_106 = 0x0804957F;
			tLoc14_107 = SLICE(dwLoc18_106, <unknown>, 32);
			printf(dwLoc18_106, tLoc14_107);
			if (dwLoc0C <=u 0x00000005)
			{
l08048A0B:
				dwLoc18_98 = 0x08049597;
				tLoc14_99 = SLICE(dwLoc18_98, <unknown>, 32);
				printf(dwLoc18_98, tLoc14_99);
				if (dwLoc0C >u 0x00000005)
				{
l08048A1D:
					dwLoc18_91 = 0x080495A4;
					tLoc14_92 = SLICE(dwLoc18_91, <unknown>, 32);
					printf(dwLoc18_91, tLoc14_92);
				}
			}
			else
				goto l08048A1D;
		}
		else
			goto l08048A0B;
	}
	else
		goto l080489F9;
	eax_56 = 0x00000005 - dwLoc08;
	if (eax_56 >= 0x00000000)
	{
		dwLoc18_80 = 0x080495AF;
		tLoc14_81 = SLICE(dwLoc18_80, <unknown>, 32);
		printf(dwLoc18_80, tLoc14_81);
		eax_85 = 0x00000005 - dwLoc08;
		if (eax_85 < 0x00000000)
		{
l08048A45:
			dwLoc18_76 = 0x080495B6;
			tLoc14_77 = SLICE(dwLoc18_76, <unknown>, 32);
			printf(dwLoc18_76, tLoc14_77);
		}
	}
	else
		goto l08048A45;
	eax_63 = 0x00000000;
	return eax_63;
}

word32 fn0804923C(word32 ebp)
{
	word32 ebp_10 = fn08049245(fp - 0x00000004, dwLoc0C);
	return fn08049245(ebp_10, ebp);
}

word32 fn08049245(word32 ebp, word32 dwArg00)
{
	word32 edx_9 = Mem0[ebp + 0x0000000C:word32];
	Mem10[edx_9 + 0x00000008:word32] = Mem0[ebp + 0x00000008:word32];
	Mem11[edx_9 + 0x00000004:word32] = 0x00000000;
	Mem12[edx_9 + 0x00000000:word32] = 0x00000000;
	Mem13[edx_9 + 0x0000000C:word32] = 0x00000000;
	Mem14[edx_9 + 0x00000010:word32] = 0x00000000;
	Mem16[edx_9 + 0x00000014:word32] = Mem14[dwArg00 + 0x00001A83:word32];
	Mem17[dwArg00 + 0x00001A83:word32] = edx_9;
	return Mem17[ebp + 0x00000000:word32];
}

word32 fn0804948C(word32 ebp)
{
	word32 ebp_13;
	fn08049496(fp - 0x00000004, dwLoc10, out ebp_13);
	word32 ebp_15;
	return fn08049496(ebp_13, ebp, out ebp_15);
}

word32 fn08049496(word32 ebp, word32 dwArg00, ptr32 ebpOut)
{
	word32 esi_24 = dwArg00 + 0x000011FA;
	if (Mem0[dwArg00 + 0x000011FA:word32] != 0xFFFFFFFF)
		do
		{
			word32 eax_25 = Mem0[esi_24 + 0x00000000:word32];
			eax_25();
			esi_24 = esi_24 + 0xFFFFFFFC;
		} while (Mem0[esi_24 + 0x00000000:word32] != 0xFFFFFFFF);
	word32 ebp_21;
	*ebpOut = Mem0[ebp + 0x00000000:word32];
	return Mem0[ebp - 0x00000008:word32];
}

word32 fn080494E0(word32 ebp)
{
	return fn0804948C(fn08048908(ebp));
}

