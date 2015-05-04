// subject.c
// Generated on 5/4/2015 12:00:23 AM by decompiling from_aminet/albion_demo/loader/m68k_amiga/subject.exe
// using Decompiler version 0.4.2.0.

#include "subject.h"

void fn00001000(word32 a6)
{
	word32 d0_101;
	word32 a6_10 = Mem0[0x00000004:word32];
	(a6_10 + -552)();
	word32 a6_103 = a6;
	if (false)
	{
		d0_101 = 12;
l0000106C:
		word32 a0_111 = 0x000011C8;
		word32 v18_117 = Mem0[a0_111 + 0x00000000:word32];
		a0_111 = a0_111 + 0x00000004 + 0x00000001;
		while (v18_117 >= 0x00000000 && v18_117 - d0_101 != 0x00000000)
		{
			do
			{
				a0_111 = a0_229 + 0x00000000;
				word32 a0_229 = a0_111;
			} while (Mem0[a0_229 + 0x00000000:byte] != 0xFFFFFFFF);
			if (__btst((byte) a0_111, 0x0000))
				continue;
			a0_111 = a0_111 + 0x00000001;
			v18_117 = Mem0[a0_111 + 0x00000000:word32];
			a0_111 = a0_111 + 0x00000004 + 0x00000001;
		}
		word32 a6_129 = Mem0[0x000015E8:word32];
		(a6_129 + -30)();
		if (d0_101 != 0x00000000)
		{
			Mem138[0x000015EC:word32] = d0_101;
			fn0000112A(0x00001196, a6_103);
			fn0000112A(a0_111, a6_103);
			word32 a0_142 = 0x000011AE;
			fn0000112A(a0_142, a6_103);
			fn0000110C(a6_103);
			word32 a6_148 = Mem138[0x000015E8:word32];
			(a6_148 + -36)();
		}
	}
	else
	{
		word32 d0_189;
		Mem169[0x000015E8:word32] = 39;
		word32 a6_175 = Mem169[0x000015E8:word32];
		(a6_175 + -150)();
		a6_103 = a6;
		if (false)
			d0_189 = -1;
		else
		{
			160();
			word32 a6_223 = Mem169[0x000015E8:word32];
			(a6_223 + -156)();
			a6_103 = a6;
			d0_189 = 39;
		}
		if (d0_189 != 0x00000000)
		{
			d0_101 = -(d0_189 + 0x00000001);
			goto l0000106C;
		}
	}
	word32 d0_61 = Mem0[0x000015E8:word32];
	if (d0_61 != 0x00000000)
	{
		word32 a6_86 = Mem0[0x00000004:word32];
		(a6_86 + -414)();
		Mem90[0x000015E8:word32] = 0x00000000;
	}
	return;
}

void fn0000110C(word32 a6)
{
	word32 a6_11 = Mem0[0x000015E8:word32];
	(a6_11 + -42)();
	return;
}

void fn0000112A(word32 a0, word32 a6)
{
	word32 d0_20 = fn00001156(a0);
	if (d0_20 != 0x00000000)
	{
		word32 a6_55 = Mem0[0x000015E8:word32];
		(a6_55 + -48)();
	}
	return;
}

word32 fn00001156(word32 a0)
{
	word32 d0_10 = -1;
	do
	{
		d0_10 = d0_10 + 0x00000001;
		a0 = a0_22 + 0x00000001;
		word32 a0_22 = a0;
	} while (Mem0[a0_22 + 0x00000000:byte] != 0x00);
	return d0_10;
}

