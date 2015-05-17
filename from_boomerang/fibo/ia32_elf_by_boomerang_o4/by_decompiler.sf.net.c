// subject.c
// Generated on TIMESTAMP by decompiling from_boomerang/fibo/ia32_elf_by_boomerang_o4/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn080486DC(word32 edx, word32 dwArg00)
{
fn080486DC_entry:
l080486DC:
	branch 0x0804867C == 0x00000000 l080486F9
l080486EC:
	atexit(0x0804867C)
l080486F9:
	branch 0x08049904 == 0x00000000 l08048707
l08048702:
	atexit(edx)
l08048707:
	Mem24[fp - 0x00000010:word32] = 0x080488A0
	atexit(0x0804867C)
	Mem28[0x080499AC:word32] = fp + 0x00000008 + dwArg00 * 0x00000004
	call __fpstart (retsize: 4; depth: 4)
	Mem41[fp - 0x00000014:word32] = fn080487CC(fn08048880(fp - 0x00000008))
	exit(Mem41[fp - 0x00000014:int32])
	Mem43[fp - 0x00000018:word32] = 0x00000000
fn080486DC_exit:
}

word32 fn08048798(word32 dwArg04)
{
	word32 eax_18;
	if (dwArg04 > 0x00000001)
		eax_18 = fn08048798(dwArg04 - 0x00000002) + fn08048798(dwArg04 - 0x00000001);
	else
		eax_18 = dwArg04;
	return eax_18;
}

word32 fn080487CC(word32 ebx)
{
// def fp
// def dwLoc08
	dwLoc14_14 = 0x080488B8;
	tLoc10_15 = SLICE(0x080488B8, <unknown>, 32);
	printf(dwLoc14_14, tLoc10_15);
	dwLoc1C_21 = 0x080488C7;
	tLoc18_22 = SLICE(dwLoc1C_21, <unknown>, 32);
	scanf(dwLoc1C_21, tLoc18_22);
	ebx_25 = dwLoc08;
	if (ebx_25 > 0x00000001)
	{
		eax_49 = ebx_25 - 0x00000001;
		esp_50 = fp - 0x00000014;
		Mem51[esp_50 + 0x00000000:word32] = eax_49;
		fn08048798(dwLoc14_14);
		eax_54 = ebx_25 - 0x00000002;
		dwLoc18_56 = eax_54;
		fn08048798(dwLoc18_56);
	}
	dwLoc18_34 = dwLoc08;
	tLoc18_35 = (void) dwLoc18_34;
	esp_36 = fp - 0x0000001C;
	Mem37[esp_36 + 0x00000000:word32] = 0x080488CA;
	printf(0x080488C7, tLoc18_35);
	eax_39 = 0x00000000;
	return eax_39;
}

word32 fn08048830(word32 ebp)
{
	word32 ebp_13;
	fn0804883A(fp - 0x00000004, dwLoc10, out ebp_13);
	word32 ebp_15;
	return fn0804883A(ebp_13, ebp, out ebp_15);
}

word32 fn0804883A(word32 ebp, word32 dwArg00, ptr32 ebpOut)
{
	word32 esi_24 = dwArg00 + 0x00001162;
	if (Mem0[dwArg00 + 0x00001162:word32] != 0xFFFFFFFF)
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

word32 fn08048880(word32 ebp)
{
	return fn08048830(ebp);
}

