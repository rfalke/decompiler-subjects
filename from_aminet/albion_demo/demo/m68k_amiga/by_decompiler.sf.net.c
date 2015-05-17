// subject.c
// Generated on TIMESTAMP by decompiling from_aminet/albion_demo/demo/m68k_amiga/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn00001000(word32 d0, word32 d1, word32 d2, word32 d4, word32 d7, word32 a0, word32 a6, word32 dwArg00)
{
	Mem4[0x00010698:word32] = a0;
	Mem9[0x0001069C:word32] = dwArg00;
	Mem11[0x00010694:word32] = fp + 0x00000004;
	word32 d3_19;
	word32 d6_20;
	word32 d7_21;
	word32 a0_22;
	word32 a6_23;
	word32 d0_24 = fn000010DC(d0, d1, d2, d4, d7, a0, a6, out d3_19, out d6_20, out d7_21, out a0_22, out a6_23);
	fn00005640(d0_24, a0_22, a6_23);
	fn000055CE(d7_21, a6_23);
	fn000099C8();
	word32 d2_26;
	word32 d7_27;
	fn00007306(d0_24, fn00009906(d0_24, d7_21, out d2_26, out d7_27));
	word32 d7_29;
	word32 d6_30 = fn00007468(d2_26, d6_20, d7_27, a6_23, out d7_29);
	word32 d1_31;
	word32 d6_32;
	word32 d7_33;
	word32 d0_34 = fn00007224(d2_26, d3_19, d6_30, d7_29, a0_22, a6_23, out d1_31, out d6_32, out d7_33);
	fn00001588();
	word32 d1_36;
	word32 d2_37;
	word32 d4_38;
	word32 d5_39;
	word32 d6_40;
	word32 a6_41;
	word32 d0_42 = fn00008D4E(d2_26, fn000094E0(d0_34, d1_31, d6_32, d7_33), a6_23, out d1_36, out d2_37, out d4_38, out d5_39, out d6_40, out a6_41);
	fn0000982E(d0_42);
	fn0000983E(d0_42, d1_36, d2_37);
	word32 d1_43 = fn00008500();
	fn00007FD4(d7_33, Mem11[0x000154E4:word32], a6_41);
	word32 d3_45;
	word32 d5_47;
	word32 d6_48;
	word32 a3_49;
	word32 d4_46;
	word32 d2_50 = fn00008006(d1_43, d4_38, d5_39, d6_40, d7_33, a6_41, out d3_45, out d4_46, out d5_47, out d6_48, out a3_49);
	word32 a6_53;
	word32 d5_51;
	word32 d6_52;
	word32 d2_54 = fn0000C028(d2_50, d3_45, d5_47, d6_48, a3_49, a6_41, out d5_51, out d6_52, out a6_53);
	while (true)
	{
		fn00008DFA(d2_54, d5_51, d6_52, a6_53);
		word32 d5_66;
		word32 d6_67;
		d0_42 = fn00008706(d0_42, d1_43, d2_54, d4_46, d5_51, d6_52, d7_33, a1, a6_53, out d1_43, out d4_46, out d5_66, out d6_67, out d7_33, out a6_53);
		d2_54 = fn000080A0(d1_43, d4_46, d5_66, d6_67, d7_33, a6_53, out d5_51, out d6_52);
	}
}

void fn000010BC(word32 d0, word32 d7, word32 a0, word32 a6)
{
	fn000057AE(d7, a6);
	fn0000113C(d0, a0, a6);
}

word32 fn000010DC(word32 d0, word32 d1, word32 d2, word32 d4, word32 d7, word32 a0, word32 a6, ptr32 d3Out, ptr32 d6Out, ptr32 d7Out, ptr32 a0Out, ptr32 a6Out)
{
	fn00001198(d0, d7, a6);
	fn0000120E(d7, a0, a6);
	word32 a6_56 = Mem0[0x00000004:word32];
	(a6_56 + -294)();
	Mem65[0x000106BA:word32] = d0;
	word32 a6_72 = Mem65[0x00000004:word32];
	(a6_72 + -168)();
	Mem76[0x00010690:bool] = true;
	word32 d7_77;
	word32 a0_78;
	word32 d0_79 = fn00007244(d1, d2, d4, a6, a6, out d7_77, out a0_78);
	word32 a6_80 = fn00007B46(d0_79, d7_77, a6);
	word32 a0_85;
	word32 d0_86 = fn00006D74(d0_79, d7_77, a0_78, a6_80, a6, dwArg00, dwArg04, dwArg08, out a0_85);
	fn00005954(d0_86, d7_77, a0_85, a6_80);
	word32 d3_95;
	*d3Out = Mem76[fp - 0x0000001C:word32];
	word32 d6_101;
	*d6Out = Mem76[fp - 0x00000010:word32];
	word32 d7_103;
	*d7Out = Mem76[fp - 0x0000000C:word32];
	word32 a0_105;
	*a0Out = Mem76[fp - 0x00000008:word32];
	word32 a6_117;
	*a6Out = Mem76[fp + 0x00000010:word32];
	return Mem76[fp - 0x00000028:word32];
}

void fn0000113C(word32 d0, word32 a0, word32 a6)
{
	word32 a6_52 = Mem0[0x0001072A:word32];
	(a6_52 + -228)();
	fn00001528(a6);
	fn000059F8(d0, a6);
	fn00006E7A(a6);
	fn00007EBE(a6);
	fn000072A6(d0, a0);
	word32 a6_113 = a6;
	if (Mem0[0x00010690:byte] != 0x00)
	{
		word32 a6_110 = Mem0[0x00000004:word32];
		(a6_110 + -174)();
		a6_113 = a6;
	}
	fn000012B8(a6_113);
	return;
}

void fn00001198(word32 d0, word32 d7, word32 a6)
{
	word32 a0_12 = Mem0[0x00000004:word32];
	word32 d0_14 = DPB(d0, Mem0[a0_12 + 20:word16], 0, 16);
	if ((word16) d0_14 - 0x0027 <= 0x0000)
	{
		fn0000141A(10, d7, a0_12, a6);
		return;
	}
	else
	{
		word32 d1_42;
		Mem31[0x000106AC:word16] = (word16) d0_14;
		word32 d0_34 = (word32) Mem31[a0_12 + 532:byte];
		Mem36[0x000106B0:word16] = (word16) d0_34;
		word32 d0_38 = DPB(d0_34, Mem36[a0_12 + 296:word16], 0, 16);
		if (!__btst((byte) d0_38, 0x0003))
			d1_42 = 40;
		else if (!__btst((byte) d0_38, 0x0002))
			d1_42 = 30;
		else if (!__btst((byte) d0_38, 0x0001))
			d1_42 = 20;
		else if (!__btst((byte) d0_38, 0x0000))
			d1_42 = 10;
		else
			d1_42 = 0;
		if ((word16) d1_42 - 0x0014 <= 0x0000)
		{
			fn0000141A(11, d7, a0_12, a6);
			return;
		}
		else
		{
			Mem49[0x000106AE:word16] = (word16) d1_42;
			return;
		}
	}
}

void fn0000120E(word32 d7, word32 a0, word32 a6)
{
	word32 a6_22 = Mem0[0x00000004:word32];
	(a6_22 + -552)();
	if (false)
	{
		fn0000141A(12, d7, a0, a6);
		return;
	}
	else
	{
		Mem62[0x00010726:word32] = 39;
		word32 a6_69 = Mem62[0x00000004:word32];
		(a6_69 + -552)();
		if (false)
		{
			fn0000141A(13, d7, a0, a6);
			return;
		}
		else
		{
			Mem80[0x0001072A:word32] = 39;
			word32 a6_87 = Mem80[0x00000004:word32];
			(a6_87 + -552)();
			if (false)
			{
				fn0000141A(14, d7, a0, a6);
				return;
			}
			else
			{
				Mem98[0x0001072E:word32] = 33;
				word32 a6_105 = Mem98[0x00000004:word32];
				(a6_105 + -552)();
				if (false)
				{
					fn0000141A(15, d7, a0, a6);
					return;
				}
				else
				{
					Mem116[0x00010732:word32] = 33;
					return;
				}
			}
		}
	}
}

void fn000012B8(word32 a6)
{
	word32 d0_15 = Mem0[0x00010726:word32];
	if (d0_15 != 0x00000000)
	{
		word32 a6_129 = Mem0[0x00000004:word32];
		(a6_129 + -414)();
		Mem133[0x00010726:word32] = 0x00000000;
	}
	word32 d0_32 = Mem0[0x0001072A:word32];
	if (d0_32 != 0x00000000)
	{
		word32 a6_115 = Mem0[0x00000004:word32];
		(a6_115 + -414)();
		Mem119[0x0001072A:word32] = 0x00000000;
	}
	word32 d0_44 = Mem0[0x0001072E:word32];
	if (d0_44 != 0x00000000)
	{
		word32 a6_100 = Mem0[0x00000004:word32];
		(a6_100 + -414)();
		Mem105[0x0001072E:word32] = 0x00000000;
	}
	word32 d0_56 = Mem0[0x00010732:word32];
	if (d0_56 != 0x00000000)
	{
		word32 a6_79 = Mem0[0x00000004:word32];
		(a6_79 + -414)();
		Mem90[0x00010732:word32] = 0x00000000;
	}
	return;
}

void fn0000136C(word32 d0, word32 d1, word32 a0)
{
	word32 d2_10 = Mem0[a0 + 0x00000000:word32];
	while (d2_10 != 0x00000000)
	{
		if (d2_10 - d0 == 0x00000000)
		{
			Mem26[a0 + 4:word32] = d1;
			goto l00001388;
		}
		a0 = a0 + 0x00000008;
		d2_10 = Mem0[a0 + 0x00000000:word32];
	}
l00001388:
	return;
}

void fn0000138E(word32 d0, word32 d7, word32 a0, word32 a6)
{
	word32 a6_17 = Mem0[0x00000004:word32];
	(a6_17 + -666)();
	if (d0 == 0x00000000)
	{
		fn0000141A(24, d7, a0, a6);
		return;
	}
	else
		return;
}

void fn000013B2(word32 a0, word32 a6)
{
	if (a0 != 0x00000000)
	{
		word32 a6_36 = Mem0[0x00000004:word32];
		(a6_36 + -672)();
	}
	return;
}

void fn000013D2(word32 d0, word32 d7, word32 a6)
{
	word32 a6_20 = Mem0[0x00000004:word32];
	(a6_20 + -654)();
	if (false)
	{
		fn0000141A(25, d7, d0, a6);
		return;
	}
	else
		return;
}

void fn000013FA(word32 a0, word32 a6)
{
	if (a0 != 0x00000000)
	{
		word32 a6_36 = Mem0[0x00000004:word32];
		(a6_36 + -660)();
	}
	return;
}

void fn0000141A(word32 d0, word32 d7, word32 a0, word32 a6)
{
	word32 d0_1 = -d0;
	Mem5[0x000106A0:word32] = d0_1 - 0x00000001;
	fn000010BC(d0_1 - 0x00000001, d7, a0, a6);
	return;
}

void fn00001442(word32 d0)
{
	word32 d0_7 = Mem0[0x000106B2:word32];
	do
		;
	while (d0_7 - Mem0[0x000106B2:word32] == 0x00000000);
	return;
}

void fn00001502(word32 a6)
{
	if (Mem0[0x00010736:byte] == 0x00)
	{
		word32 a6_41 = Mem0[0x0001072A:word32];
		(a6_41 + -456)();
		Mem46[0x00010736:bool] = true;
	}
	return;
}

void fn00001528(word32 a6)
{
	if (Mem0[0x00010736:byte] != 0x00)
	{
		word32 a6_41 = Mem0[0x0001072A:word32];
		(a6_41 + -462)();
		Mem46[0x00010736:bool] = false;
	}
	return;
}

void fn00001588()
{
	word32 a0_6 = 0x0001073C;
	Mem8[0x00010738:word32] = a0_6;
	Mem10[a0_6 + 0x00000000:word32] = 0x0002D8D6;
	return;
}

word32 fn000015A0(word32 d0, word32 d1, word32 d2, ptr32 d3Out)
{
	word32 d3_13 = DPB(0x0000000F, (word16) d0 & 0x000F, 0, 16);
	*d3Out = d3_13;
	return DPB(d2, (word16) d1, 0, 16) *u 0x0180 + (int32) ((int16) DPB(d0, (word16) DPB(d0, (word16) d0 - (word16) d3_13, 0, 16) >>u 0x0003, 0, 16));
}

void fn000015B8(word32 d0, word32 d1, word32 d2, word32 d4, word32 a6)
{
	word32 a6_29 = Mem0[0x0001072A:word32];
	(a6_29 + -228)();
	word32 a0_56 = Mem0[Mem0[0x00010738:word32]:word32];
	word16 v14_57 = (word16) d0 - Mem0[a0_56 + 0x00000000:word16];
	if (v14_57 >= 0x0000)
	{
		word16 v16_84 = (word16) d1 - Mem0[a0_56 + 4:word16];
		if (v16_84 >= 0x0000)
		{
			word16 v17_87 = (word16) d0 - Mem0[a0_56 + 2:word16];
			if (v17_87 <= 0x0000)
			{
				word16 v19_90 = (word16) d1 - Mem0[a0_56 + 6:word16];
				if (v19_90 <= 0x0000)
				{
					word32 d3_94;
					word32 d2_95 = fn000015A0(d0, d1, d2, out d3_94);
					byte Z_97 = __btst((byte) d3_94, 0x0003);
					if (!Z_97)
						;
					word16 v27_103 = (word16) d4;
					word32 d0_104 = (word32) v27_103;
					word16 v28_105 = (word16) d0_104 & 0x000F;
					word32 d0_106 = DPB(d0_104, v28_105, 0, 16);
					word16 v29_107 = (word16) d0_106 + (word16) d0_106;
					word32 d0_108 = DPB(d0_104, v29_107, 0, 16);
					word16 v31_109 = (word16) d0_108 + (word16) d0_108;
					word32 a1_102 = 0x0000163C;
					word32 d0_110 = DPB(d0_104, v31_109, 0, 16);
					word32 a2_112 = Mem0[a1_102 + d0_110:word32];
					a2_112();
					word16 v32_114 = (word16) d4;
					word16 v33_116 = (word16) DPB(d0_104, v32_114, 0, 16) & 0x00F0;
					word16 v34_118 = (word16) DPB(d0_104, v33_116, 0, 16) >>u 0x0002;
					word32 d0_119 = DPB(d0_104, v34_118, 0, 16);
					word32 a2_121 = Mem0[a1_102 + d0_119:word32];
					a2_121();
				}
			}
		}
	}
	return;
}

void fn00001822(word32 d0, word32 d1, word32 d2, word32 d3, word32 d4, word32 d5, word32 d6, word32 a6)
{
	word32 a5_48 = fp - 74;
	word32 a6_54 = Mem0[0x0001072A:word32];
	(a6_54 + -456)();
	word32 a6_164 = 0x00DFF000;
	word16 v21_165 = (word16) d2 - (word16) d0;
	if (v21_165 <= 0x0000)
	{
		d0 = d2;
		d2 = d0;
	}
	word16 v27_173 = (word16) d3 - (word16) d1;
	if (v27_173 <= 0x0000)
	{
		d1 = d3;
		d3 = d1;
	}
	word32 a0_182 = Mem0[Mem0[0x00010738:word32]:word32];
	word16 v29_183 = (word16) d0 - Mem0[a0_182 + 2:word16];
	if (v29_183 <= 0x0000)
	{
		word16 v31_239 = (word16) d1 - Mem0[a0_182 + 6:word16];
		if (v31_239 <= 0x0000)
		{
			word16 v32_242 = (word16) d2 - Mem0[a0_182 + 0x00000000:word16];
			if (v32_242 >= 0x0000)
			{
				word16 v33_245 = (word16) d3 - Mem0[a0_182 + 4:word16];
				if (v33_245 >= 0x0000)
				{
					word32 d0_251;
					word16 v34_248 = (word16) d0 - Mem0[a0_182 + 0x00000000:word16];
					d0_251 = d0;
					if (v34_248 <= 0x0000)
						d0_251 = DPB(d2, Mem0[a0_182 + 0x00000000:word16], 0, 16);
					word32 d1_255;
					word16 v38_252 = (word16) d1 - Mem0[a0_182 + 4:word16];
					d1_255 = d1;
					if (v38_252 <= 0x0000)
						d1_255 = DPB(d3, Mem0[a0_182 + 4:word16], 0, 16);
					word32 d2_259;
					word16 v40_256 = (word16) d2 - Mem0[a0_182 + 2:word16];
					d2_259 = d2;
					if (v40_256 > 0x0000)
						d2_259 = DPB(d2, Mem0[a0_182 + 2:word16], 0, 16);
					word32 d3_263;
					word16 v42_260 = (word16) d3 - Mem0[a0_182 + 6:word16];
					d3_263 = d3;
					if (v42_260 >= 0x0000)
						d3_263 = DPB(d3, Mem0[a0_182 + 6:word16], 0, 16);
					word16 v49_274 = (word16) d2_259 - (word16) d0_251;
					word16 v51_276 = (word16) DPB(d2_259, v49_274, 0, 16) + 0x0001;
					word16 v53_280 = (word16) d3_263 - (word16) d1_255;
					word16 v54_282 = (word16) DPB(d3_263, v53_280, 0, 16) + 0x0001;
					word32 d2_277 = DPB(d2_259, v51_276, 0, 16);
					word32 d3_283 = DPB(d3_263, v54_282, 0, 16);
					word16 v44_264 = (word16) d0_251;
					word16 v45_266 = (word16) d1_255;
					word16 v46_268 = (word16) d2_259;
					word16 v48_272 = (word16) d4;
					word16 v52_278 = (word16) d2_277;
					word16 v55_285 = (word16) d3_283;
					word32 a6_291 = Mem0[0x0001072A:word32];
					(a6_291 + -228)();
					Mem296[a6_164 + 68:word32] = 0xFFFFFFFF;
					word16 v62_303 = (word16) DPB(d1_255, v46_268, 0, 16) >>u 0x0004;
					word16 v60_299 = (word16) DPB(d0_251, v44_264, 0, 16) >>u 0x0004;
					word32 d1_304 = DPB(d1_255, v62_303, 0, 16);
					word16 wLoc4A_265 = v44_264;
					word32 a6_294 = a6_164;
					word16 v63_306 = (word16) d1_304 - (word16) DPB(d0_251, v60_299, 0, 16);
					if (v63_306 == 0x0000)
					{
						word32 d3_315;
						word32 a0_317 = Mem296[0x000154E8:word32] + fn000015A0(DPB(d0_251, v44_264, 0, 16), DPB(d1_255, v45_266, 0, 16), d2_277, out d3_315);
						word32 d3_327 = DPB(d3_315, (word16) DPB(d3_315, v46_268, 0, 16) & 0x000F, 0, 16);
						Mem334[a6_164 + 116:word16] = (word16) DPB(d0_251, (word16) DPB(d0_251, Mem296[0x0002D854 + DPB(d3_315, (word16) d3_315 + (word16) d3_315, 0, 16):word16], 0, 16) & Mem296[0x0002D876 + DPB(d3_315, (word16) d3_327 + (word16) d3_327, 0, 16):word16], 0, 16);
						word32 d6_336;
						fn00001A74(d5, d6, a0_317, fp - 74, a6_164, out d6_336);
					}
					else
					{
						word32 d6_368;
						word32 d5_367;
						word16 v75_340 = (word16) DPB(d0_251, v46_268, 0, 16) & 0x000F;
						word16 v76_342 = v52_278 - (word16) DPB(d0_251, v75_340, 0, 16);
						word16 v78_347 = (word16) DPB(d0_251, v44_264, 0, 16) & 0x000F;
						word16 wLoc40_343 = v76_342;
						word32 d0_348 = DPB(d0_251, v78_347, 0, 16);
						d5_367 = d5;
						d6_368 = d6;
						a5_374 = a5_48;
						if (v78_347 != 0x0000)
						{
							word16 v79_509 = (word16) d0_348 - 0x0010;
							word32 a0_514 = Mem296[0x000154E8:word32];
							d1_304 = DPB(d1_255, v45_266, 0, 16);
							word16 v83_524 = (word16) d3_520 + (word16) d3_520;
							word32 d3_520;
							d2_277 = fn000015A0(DPB(d0_251, v44_264, 0, 16), d1_304, d2_277, out d3_520);
							word32 a1_523 = 0x0002D854;
							word32 d3_525 = DPB(d3_520, v83_524, 0, 16);
							word16 v84_527 = Mem296[a1_523 + d3_525:word16];
							Mem528[a6_164 + 116:word16] = v84_527;
							word16 v86_534 = (word16) DPB(d0_251, v44_264, 0, 16) & 0xFFF0;
							word16 v87_536 = (word16) DPB(d0_251, v86_534, 0, 16) + 0x0010;
							d0_348 = DPB(d0_251, v87_536, 0, 16);
							word32 a0_522 = a0_514 + d2_277;
							d5_367 = fn00001A74(d5, d6, a0_522, fp - 74, a6_164, out d6_368);
							word16 v80_511 = v76_342 + (word16) DPB(d0_251, v79_509, 0, 16);
							word16 v88_539 = (word16) d0_348;
							word32 a6_545 = Mem528[0x0001072A:word32];
							(a6_545 + -228)();
							wLoc40_343 = v80_511;
							wLoc4A_265 = v88_539;
							a6_294 = a6_164;
							a5_374 = a5_48;
						}
						word32 a5_374;
						word32 a0_377 = Mem296[0x000154E8:word32];
						word32 d1_381 = DPB(d1_304, v45_266, 0, 16);
						word16 v94_388 = (word16) DPB(d0_348, v46_268, 0, 16) & 0x000F;
						word32 d3_383;
						word32 d2_384 = fn000015A0(DPB(d0_348, wLoc4A_265, 0, 16), d1_381, d2_277, out d3_383);
						word32 d0_389 = DPB(d0_348, v94_388, 0, 16);
						word32 a0_385 = a0_377 + d2_384;
						word16 v95_390 = (word16) d0_389 - 0x000F;
						if (v95_390 == 0x0000)
							wLoc40_343 = wLoc40_343 + 0x0010;
						word16 v98_396 = (word16) DPB(d6_368, v55_285, 0, 16) << 0x0006;
						word16 v100_400 = (word16) DPB(d5_367, wLoc40_343, 0, 16) >>u 0x0004;
						word32 d6_397 = DPB(d6_368, v98_396, 0, 16);
						word32 d5_401 = DPB(d5_367, v100_400, 0, 16);
						if (v100_400 != 0x0000)
						{
							word32 d4_466 = (word32) wLoc40_343;
							word16 v104_467 = (word16) d4_466 & 0xFFF0;
							word16 v105_469 = (word16) DPB(d4_466, v104_467, 0, 16) >>u 0x0003;
							word16 v106_471 = (word16) DPB(d4_466, v105_469, 0, 16) - 0x0180;
							word16 v107_473 = -(word16) DPB(d4_466, v106_471, 0, 16);
							word16 v108_476 = (word16) DPB(d4_466, v107_473, 0, 16);
							Mem477[a6_294 + 102:word16] = v108_476;
							Mem479[a6_294 + 66:word16] = 0x0000;
							word16 v101_461 = (word16) d6_397 + (word16) d5_401;
							d6_397 = DPB(d6_368, v101_461, 0, 16);
							word32 d5_464 = DPB(d5_367, v48_272, 0, 16);
							word32 d4_480 = DPB(d4_466, 0x0100, 0, 16);
							do
							{
								word32 a6_488 = Mem479[0x0001072A:word32];
								(a6_488 + -228)();
								byte v112_492 = __ror((byte) d5_464, 0x01);
								Mem498[a6_294 + 64:word16] = (word16) DPB(d4_480, cond(v112_492), 0, 8);
								Mem500[a6_294 + 84:word32] = a0_385;
								Mem502[a6_294 + 88:word16] = (word16) d6_397;
								d5_401 = DPB(d5_464, v112_492, 0, 8);
							} while (true);
						}
						word16 v119_430 = (word16) DPB(d0_389, v46_268, 0, 16) & 0x000F;
						word32 d0_431 = DPB(d0_389, v119_430, 0, 16);
						word16 v120_432 = (word16) d0_431 - 0x000F;
						if (v120_432 != 0x0000)
						{
							word32 a6_439 = Mem296[0x0001072A:word32];
							(a6_439 + -228)();
							word32 d3_449;
							word32 a0_451 = Mem296[0x000154E8:word32] + fn000015A0(DPB(d0_389, v46_268, 0, 16), DPB(d1_381, v45_266, 0, 16), d2_384, out d3_449);
							Mem457[a6_294 + 116:word16] = Mem296[0x0002D876 + DPB(d3_449, (word16) d3_449 + (word16) d3_449, 0, 16):word16];
							word32 d6_459;
							fn00001A74(d5_401, d6_397, a0_451, a5_374, a6_294, out d6_459);
						}
					}
				}
			}
		}
	}
	word32 a6_205 = Mem0[0x0001072A:word32];
	(a6_205 + -462)();
	return;
}

word32 fn00001A74(word32 d5, word32 d6, word32 a0, word32 a5, word32 a6, ptr32 d6Out)
{
	word16 v5_4 = Mem0[a5 + 12:word16];
	word16 v7_7 = (word16) DPB(d6, v5_4, 0, 16) << 0x0006;
	word16 v11_12 = Mem0[a5 + 8:word16];
	Mem16[a6 + 98:word16] = 0x017E;
	Mem19[a6 + 102:word16] = 0x017E;
	Mem21[a6 + 66:word16] = 0x0000;
	word16 v9_9 = (word16) DPB(d6, v7_7, 0, 16) + 0x0001;
	word32 d6_10 = DPB(d6, v9_9, 0, 16);
	*d6Out = d6_10;
	word32 d5_14 = DPB(d5, v11_12, 0, 16);
	do
	{
		word32 a6_29 = Mem21[0x0001072A:word32];
		(a6_29 + -228)();
		byte v19_44 = __ror((byte) d5_14, 0x01);
		word32 d5_45 = DPB(d5_14, v19_44, 0, 8);
		if (v19_44 <u 0x00)
			Mem60[a6 + 64:word16] = 0x05FC;
		else
			Mem63[a6 + 64:word16] = 0x050C;
		Mem50[a6 + 76:word32] = a0;
		Mem52[a6 + 84:word32] = a0;
		Mem54[a6 + 88:word16] = (word16) d6_10;
	} while (true);
	return d5_45;
}

word32 fn00001ACA(word32 d0, word32 d1, word32 d2, word32 d3, word32 d4, word32 d5, word32 d6, word32 a6, word32 dwArg0E, word32 dwArg12, word32 dwArg16, word32 dwArg1A, word32 dwArg1E, word32 dwArg22, word32 dwArg26, word32 dwArg2A, word32 dwArg2E, word32 dwArg32, word32 dwArg36, word32 dwArg3A, word32 dwArg3E, word32 dwArg42, word32 dwArg46, ptr32 d1Out, ptr32 d2Out, ptr32 d3Out, ptr32 d4Out, ptr32 d5Out, ptr32 d6Out, ptr32 a0Out, ptr32 a4Out, ptr32 a6Out)
{
	word32 a6_54 = Mem0[0x0001072A:word32];
	(a6_54 + -456)();
	word32 a6_113 = 0x00DFF000;
	word16 v21_114 = (word16) d3 - (word16) d1;
	if (v21_114 <= 0x0000)
	{
		d1 = d3;
		d3 = d1;
	}
	word32 a0_123 = Mem0[Mem0[0x00010738:word32]:word32];
	word16 v27_124 = (word16) d0 - Mem0[a0_123 + 2:word16];
	if (v27_124 <= 0x0000)
	{
		word16 v29_238 = (word16) d1 - Mem0[a0_123 + 6:word16];
		if (v29_238 <= 0x0000)
		{
			word16 v30_241 = (word16) d0 - Mem0[a0_123 + 0x00000000:word16];
			if (v30_241 >= 0x0000)
			{
				word16 v31_244 = (word16) d3 - Mem0[a0_123 + 4:word16];
				if (v31_244 >= 0x0000)
				{
					word32 d0_250;
					word16 v32_247 = (word16) d0 - Mem0[a0_123 + 0x00000000:word16];
					d0_250 = d0;
					if (v32_247 <= 0x0000)
						d0_250 = DPB(d0, Mem0[a0_123 + 0x00000000:word16], 0, 16);
					word32 d1_254;
					word16 v36_251 = (word16) d1 - Mem0[a0_123 + 4:word16];
					d1_254 = d1;
					if (v36_251 <= 0x0000)
						d1_254 = DPB(d3, Mem0[a0_123 + 4:word16], 0, 16);
					word16 v38_255 = (word16) d0_250 - Mem0[a0_123 + 2:word16];
					if (v38_255 > 0x0000)
						d0_250 = DPB(d0_250, Mem0[a0_123 + 2:word16], 0, 16);
					word32 d3_262;
					word16 v40_259 = (word16) d3 - Mem0[a0_123 + 6:word16];
					d3_262 = d3;
					if (v40_259 >= 0x0000)
						d3_262 = DPB(d3, Mem0[a0_123 + 6:word16], 0, 16);
					word16 v46_271 = (word16) d3_262 - (word16) d1_254;
					word16 v48_273 = (word16) DPB(d3_262, v46_271, 0, 16) + 0x0001;
					word32 d3_274 = DPB(d3_262, v48_273, 0, 16);
					word16 v42_263 = (word16) d0_250;
					word16 v43_265 = (word16) d1_254;
					word16 v45_269 = (word16) d4;
					word16 v49_276 = (word16) d3_274;
					word32 a6_282 = Mem0[0x0001072A:word32];
					(a6_282 + -228)();
					Mem287[a6_113 + 68:word32] = 0xFFFFFFFF;
					word32 a0_288 = Mem287[0x000154E8:word32];
					word32 d1_292 = DPB(d1_254, v43_265, 0, 16);
					word16 v55_298 = (word16) d3_294 + (word16) d3_294;
					word32 d3_294;
					word32 d2_295 = fn000015A0(DPB(d0_250, v42_263, 0, 16), d1_292, d2, out d3_294);
					word32 a1_297 = 0x0002D896;
					word32 d3_299 = DPB(d3_294, v55_298, 0, 16);
					word16 v56_300 = Mem287[a1_297 + d3_299:word16];
					word32 d0_301 = DPB(d0_250, v56_300, 0, 16);
					word16 v57_302 = (word16) d0_301;
					Mem303[a6_113 + 116:word16] = v57_302;
					word16 v59_306 = (word16) DPB(d6, v49_276, 0, 16) << 0x0006;
					Mem314[a6_113 + 98:word16] = 0x017E;
					Mem316[a6_113 + 102:word16] = 0x017E;
					Mem318[a6_113 + 66:word16] = 0x0000;
					word16 v60_308 = (word16) DPB(d6, v59_306, 0, 16) + 0x0001;
					word32 a6_285 = a6_113;
					word32 a0_296 = a0_288 + d2_295;
					word32 d6_309 = DPB(d6, v60_308, 0, 16);
					word32 d5_312 = DPB(d5, v45_269, 0, 16);
					do
					{
						word32 a6_326 = Mem318[0x0001072A:word32];
						(a6_326 + -228)();
						if (__ror((byte) d5_312, 0x01) <u 0x00)
							Mem345[a6_285 + 64:word16] = 0x05FC;
						else
							Mem348[a6_285 + 64:word16] = 0x050C;
						Mem336[a6_285 + 76:word32] = a0_296;
						Mem338[a6_285 + 84:word32] = a0_296;
						Mem340[a6_285 + 88:word16] = (word16) d6_309;
					} while (true);
				}
			}
		}
	}
	word32 a6_142 = Mem0[0x0001072A:word32];
	(a6_142 + -462)();
}

void fn00001BF4(word32 d0, word32 d1, word32 d2, word32 d3, word32 d4, word32 d5, word32 a6)
{
	word32 a5_48 = fp - 74;
	word32 a6_54 = Mem0[0x0001072A:word32];
	(a6_54 + -456)();
	word32 a6_156 = 0x00DFF000;
	word16 v21_157 = (word16) d2 - (word16) d0;
	if (v21_157 <= 0x0000)
	{
		d0 = d2;
		d2 = d0;
	}
	word32 a0_166 = Mem0[Mem0[0x00010738:word32]:word32];
	word16 v27_167 = (word16) d0 - Mem0[a0_166 + 2:word16];
	if (v27_167 <= 0x0000)
	{
		word16 v29_219 = (word16) d1 - Mem0[a0_166 + 6:word16];
		if (v29_219 <= 0x0000)
		{
			word16 v30_222 = (word16) d0 - Mem0[a0_166 + 0x00000000:word16];
			if (v30_222 >= 0x0000)
			{
				word16 v31_225 = (word16) d3 - Mem0[a0_166 + 4:word16];
				if (v31_225 >= 0x0000)
				{
					word32 d0_231;
					word16 v32_228 = (word16) d0 - Mem0[a0_166 + 0x00000000:word16];
					d0_231 = d0;
					if (v32_228 <= 0x0000)
						d0_231 = DPB(d2, Mem0[a0_166 + 0x00000000:word16], 0, 16);
					word32 d1_235;
					word16 v36_232 = (word16) d1 - Mem0[a0_166 + 4:word16];
					d1_235 = d1;
					if (v36_232 <= 0x0000)
						d1_235 = DPB(0x000000C0, Mem0[a0_166 + 4:word16], 0, 16);
					word32 d2_239;
					word16 v38_236 = (word16) d2 - Mem0[a0_166 + 2:word16];
					d2_239 = d2;
					if (v38_236 > 0x0000)
						d2_239 = DPB(d2, Mem0[a0_166 + 2:word16], 0, 16);
					word16 v40_240 = (word16) d1_235 - Mem0[a0_166 + 6:word16];
					if (v40_240 >= 0x0000)
						d1_235 = DPB(0x000000C0, Mem0[a0_166 + 6:word16], 0, 16);
					word16 v46_252 = (word16) d2_239 - (word16) d0_231;
					word16 v48_254 = (word16) DPB(d2_239, v46_252, 0, 16) + 0x0001;
					word32 d2_255 = DPB(d2_239, v48_254, 0, 16);
					word16 v42_244 = (word16) d0_231;
					word16 v43_246 = (word16) d1_235;
					word16 v44_248 = (word16) d2_239;
					word16 v45_250 = (word16) d4;
					word16 v49_257 = (word16) d2_255;
					word32 a6_263 = Mem0[0x0001072A:word32];
					(a6_263 + -228)();
					Mem268[a6_156 + 68:word32] = 0xFFFFFFFF;
					word32 d1_274 = DPB(0x000000C0, v44_248, 0, 16);
					word16 v56_275 = (word16) d1_274 >>u 0x0004;
					word16 v54_271 = (word16) DPB(d0_231, v42_244, 0, 16) >>u 0x0004;
					word32 d1_276 = DPB(d1_274, v56_275, 0, 16);
					word16 wLoc4A_245 = v42_244;
					word32 a6_266 = a6_156;
					word16 v57_278 = (word16) d1_276 - (word16) DPB(d0_231, v54_271, 0, 16);
					if (v57_278 == 0x0000)
					{
						word32 d3_287;
						word32 a0_289 = Mem268[0x000154E8:word32] + fn000015A0(DPB(d0_231, v42_244, 0, 16), DPB(d1_274, v43_246, 0, 16), d2_255, out d3_287);
						word32 d3_299 = DPB(d3_287, (word16) DPB(d3_287, v44_248, 0, 16) & 0x000F, 0, 16);
						Mem306[a6_156 + 116:word16] = (word16) DPB(d0_231, (word16) DPB(d0_231, Mem268[0x0002D854 + DPB(d3_287, (word16) d3_287 + (word16) d3_287, 0, 16):word16], 0, 16) & Mem268[0x0002D876 + DPB(d3_287, (word16) d3_299 + (word16) d3_299, 0, 16):word16], 0, 16);
						fn00001E20(d5, a0_289, fp - 74, a6_156);
					}
					else
					{
						word32 d5_338;
						word16 v69_311 = (word16) DPB(d0_231, v44_248, 0, 16) & 0x000F;
						word16 v70_313 = v49_257 - (word16) DPB(d0_231, v69_311, 0, 16);
						word16 v72_318 = (word16) DPB(d0_231, v42_244, 0, 16) & 0x000F;
						word16 wLoc40_314 = v70_313;
						word32 d0_319 = DPB(d0_231, v72_318, 0, 16);
						d4_337 = d4;
						d5_338 = d5;
						a5_345 = a5_48;
						if (v72_318 != 0x0000)
						{
							word16 v73_476 = (word16) d0_319 - 0x0010;
							word32 a0_481 = Mem268[0x000154E8:word32];
							d1_276 = DPB(d1_274, v43_246, 0, 16);
							word16 v77_491 = (word16) d3_487 + (word16) d3_487;
							word32 d3_487;
							d2_255 = fn000015A0(DPB(d0_231, v42_244, 0, 16), d1_276, d2_255, out d3_487);
							word32 a1_490 = 0x0002D854;
							word32 d3_492 = DPB(d3_487, v77_491, 0, 16);
							word16 v78_494 = Mem268[a1_490 + d3_492:word16];
							Mem495[a6_156 + 116:word16] = v78_494;
							word16 v80_500 = (word16) DPB(d0_231, v42_244, 0, 16) & 0xFFF0;
							word16 v81_502 = (word16) DPB(d0_231, v80_500, 0, 16) + 0x0010;
							d0_319 = DPB(d0_231, v81_502, 0, 16);
							word32 a0_489 = a0_481 + d2_255;
							d5_338 = fn00001E20(d5, a0_489, fp - 74, a6_156);
							word16 v74_478 = v70_313 + (word16) DPB(d0_231, v73_476, 0, 16);
							word16 v82_505 = (word16) d0_319;
							word32 a6_511 = Mem495[0x0001072A:word32];
							(a6_511 + -228)();
							wLoc40_314 = v74_478;
							wLoc4A_245 = v82_505;
							a6_266 = a6_156;
							d4_337 = d4;
							a5_345 = a5_48;
						}
						word32 d4_337;
						word32 a5_345;
						word32 a0_348 = Mem268[0x000154E8:word32];
						word32 d1_352 = DPB(d1_276, v43_246, 0, 16);
						word16 v88_359 = (word16) DPB(d0_319, v44_248, 0, 16) & 0x000F;
						word32 d3_354;
						word32 d2_355 = fn000015A0(DPB(d0_319, wLoc4A_245, 0, 16), d1_352, d2_255, out d3_354);
						word32 d0_360 = DPB(d0_319, v88_359, 0, 16);
						word32 a0_356 = a0_348 + d2_355;
						word16 v89_361 = (word16) d0_360 - 0x000F;
						if (v89_361 == 0x0000)
							wLoc40_314 = wLoc40_314 + 0x0010;
						word16 v92_368 = (word16) DPB(d5_338, wLoc40_314, 0, 16) >>u 0x0004;
						word32 d5_369 = DPB(d5_338, v92_368, 0, 16);
						if (v92_368 != 0x0000)
						{
							word16 v96_434 = (word16) DPB(d4_337, wLoc40_314, 0, 16) & 0xFFF0;
							word16 v97_436 = (word16) DPB(d4_337, v96_434, 0, 16) >>u 0x0003;
							word16 v98_438 = (word16) DPB(d4_337, v97_436, 0, 16) - 0x0180;
							word16 v99_440 = -(word16) DPB(d4_337, v98_438, 0, 16);
							word16 v100_443 = (word16) DPB(d4_337, v99_440, 0, 16);
							Mem444[a6_266 + 102:word16] = v100_443;
							Mem446[a6_266 + 66:word16] = 0x0000;
							word16 v93_428 = (word16) d5_369 + 0x0040;
							word32 d6_429 = DPB(0x00000040, v93_428, 0, 16);
							word32 d5_431 = DPB(d5_338, v45_250, 0, 16);
							word32 d4_447 = DPB(d4_337, 0x0100, 0, 16);
							do
							{
								word32 a6_455 = Mem446[0x0001072A:word32];
								(a6_455 + -228)();
								byte v104_459 = __ror((byte) d5_431, 0x01);
								Mem465[a6_266 + 64:word16] = (word16) DPB(d4_447, cond(v104_459), 0, 8);
								Mem467[a6_266 + 84:word32] = a0_356;
								Mem469[a6_266 + 88:word16] = (word16) d6_429;
								d5_369 = DPB(d5_431, v104_459, 0, 8);
							} while (true);
						}
						word16 v111_398 = (word16) DPB(d0_360, v44_248, 0, 16) & 0x000F;
						word32 d0_399 = DPB(d0_360, v111_398, 0, 16);
						word16 v112_400 = (word16) d0_399 - 0x000F;
						if (v112_400 != 0x0000)
						{
							word32 a6_407 = Mem268[0x0001072A:word32];
							(a6_407 + -228)();
							word32 d3_417;
							word32 a0_419 = Mem268[0x000154E8:word32] + fn000015A0(DPB(d0_360, v44_248, 0, 16), DPB(d1_352, v43_246, 0, 16), d2_355, out d3_417);
							Mem425[a6_266 + 116:word16] = Mem268[0x0002D876 + DPB(d3_417, (word16) d3_417 + (word16) d3_417, 0, 16):word16];
							fn00001E20(d5_369, a0_419, a5_345, a6_266);
						}
					}
				}
			}
		}
	}
	word32 a6_185 = Mem0[0x0001072A:word32];
	(a6_185 + -462)();
	return;
}

word32 fn00001E20(word32 d5, word32 a0, word32 a5, word32 a6)
{
	word16 v7_5 = Mem0[a5 + 8:word16];
	Mem9[a6 + 98:word16] = 0x017E;
	Mem12[a6 + 102:word16] = 0x017E;
	Mem14[a6 + 66:word16] = 0x0000;
	word32 d5_7 = DPB(d5, v7_5, 0, 16);
	do
	{
		word32 a6_22 = Mem14[0x0001072A:word32];
		(a6_22 + -228)();
		byte v15_37 = __ror((byte) d5_7, 0x01);
		word32 d5_38 = DPB(d5_7, v15_37, 0, 8);
		if (v15_37 <u 0x00)
			Mem52[a6 + 64:word16] = 0x05FC;
		else
			Mem55[a6 + 64:word16] = 0x050C;
		Mem43[a6 + 76:word32] = a0;
		Mem45[a6 + 84:word32] = a0;
		Mem47[a6 + 88:word16] = 0x0041;
	} while (true);
	return d5_38;
}

void fn00001F5C(word32 d0, word32 d1, word32 d4, word32 d5, word32 d6, word32 d7, word32 a0, word32 a6)
{
	word32 a7_120 = fp - 62;
	if (Mem0[0x00010736:byte] == 0x00)
	{
		word32 a6_726 = Mem0[0x0001072A:word32];
		(a6_726 + -456)();
		a7_120 = fp - 62;
	}
	word16 v25_75 = (word16) d6;
	word32 d2_76 = DPB(0x00000003, v25_75, 0, 16);
	word16 v26_77 = (word16) d2_76 << 0x0004;
	word16 v28_79 = (word16) DPB(d2_76, v26_77, 0, 16) + (word16) d0;
	word32 a6_119 = 0x00DFF000;
	word16 v32_92 = (word16) d0 & 0xFFF0;
	word32 a2_346;
	word32 d2_91 = fn0000351A(d0, d1, d5, d6, d7, a0, a6_119, out a2_346);
	word16 v29_81 = (word16) DPB(d2_76, v28_79, 0, 16) - 0x0001;
	word32 d0_106 = DPB(d0, v32_92, 0, 16);
	word32 a1_95 = Mem0[Mem0[0x00010738:word32]:word32];
	word16 v24_73 = (word16) d0;
	word16 v30_84 = (word16) DPB(d2_76, v29_81, 0, 16);
	word16 v31_86 = (word16) d4;
	word32 d4_343 = 0;
	word16 v33_96 = (word16) d0_106 - Mem0[a1_95 + 2:word16];
	if (v33_96 <= 0x0000)
	{
		word16 v35_320 = (word16) d1 - Mem0[a1_95 + 6:word16];
		if (v35_320 <= 0x0000)
		{
			word32 d2_324 = DPB(d2_91, v30_84, 0, 16);
			word16 v37_325 = (word16) d2_324 - Mem0[a1_95 + 0x00000000:word16];
			if (v37_325 >= 0x0000)
			{
				word16 v39_328 = (word16) d1;
				word32 d3_329 = DPB(0x00000012, v39_328, 0, 16);
				word16 v40_330 = (word16) d3_329 + (word16) d7;
				word16 v41_332 = (word16) DPB(d3_329, v40_330, 0, 16) - 0x0001;
				word32 d3_333 = DPB(d3_329, v41_332, 0, 16);
				word16 v42_335 = (word16) d3_333 - Mem0[a1_95 + 4:word16];
				if (v42_335 >= 0x0000)
				{
					word16 v43_338 = (word16) d1 - Mem0[a1_95 + 4:word16];
					if (v43_338 <= 0x0000)
					{
						word32 a7_700 = a7_120 - 0x00000004;
						Mem702[a7_700 + 0x00000000:word32] = 0;
						word32 d4_704 = (word32) Mem702[a1_95 + 4:word16];
						word32 d4_706 = DPB(d4_704, (word16) d4_704 - (word16) d1, 0, 16);
						word32 d4_712 = DPB(d4_704, (word16) d4_706 + (word16) d4_706, 0, 16) *u (word16) d6;
						d7 = DPB(d7, (word16) d7 - (word16) d4_706, 0, 16);
						a2_346 = a2_346 + d4_712;
						a0 = a0 + d4_712 *u (word16) d5;
						a7_120 = a7_700 + 0x00000004;
						d4_343 = Mem702[a7_700 + 0x00000000:word32];
						d1 = DPB(d1, Mem702[a1_95 + 4:word16], 0, 16);
					}
					word16 v52_348 = (word16) d3_333 - Mem0[a1_95 + 6:word16];
					if (v52_348 >= 0x0000)
					{
						d3_333 = DPB(d3_329, (word16) d3_333 - Mem0[a1_95 + 6:word16], 0, 16);
						d7 = DPB(d7, (word16) d7 - (word16) d3_333, 0, 16);
					}
					word16 v57_354 = (word16) d6;
					word32 d3_355 = DPB(d3_333, v57_354, 0, 16);
					word16 v58_356 = (word16) d0_106 - Mem0[a1_95 + 0x00000000:word16];
					if (v58_356 <= 0x0000)
					{
						word32 d4_669;
						__bset(d4_343, 0x0000, out d4_669);
						word32 a7_671 = a7_120 - 0x00000004;
						Mem673[a7_671 + 0x00000000:word32] = d4_669;
						word32 d4_675 = (word32) Mem673[a1_95 + 0x00000000:word16];
						word32 d4_679 = DPB(d4_675, (word16) DPB(d4_675, (word16) d4_675 - (word16) d0_106, 0, 16) >>u 0x0004, 0, 16);
						word32 d4_683 = DPB(d4_675, (word16) d4_679 + (word16) d4_679, 0, 16);
						d6 = DPB(d6, (word16) d6 - (word16) d4_679, 0, 16);
						a0 = DPB(a0, (word16) a0 + (word16) d4_683, 0, 16);
						a2_346 = DPB(a2_346, (word16) a2_346 + (word16) d4_683, 0, 16);
						a7_120 = a7_671 + 0x00000004;
						d4_343 = Mem673[a7_671 + 0x00000000:word32];
						d0_106 = DPB(d0, Mem673[a1_95 + 0x00000000:word16], 0, 16);
					}
					word16 v69_367 = (word16) d2_324 - Mem0[a1_95 + 2:word16];
					if (v69_367 > 0x0000)
					{
						__bset(d4_343, 0x0001, out d4_343);
						d2_324 = DPB(d2_91, (word16) DPB(d2_91, (word16) d2_324 - Mem0[a1_95 + 2:word16], 0, 16) >>u 0x0004, 0, 16);
						d6 = DPB(d6, (word16) d6 - (word16) d2_324, 0, 16);
					}
					if (true)
					{
						word32 a7_379 = a7_120 - 0x00000004;
						Mem381[a7_379 + 0x00000000:word32] = d3_355;
						word32 a1_383 = Mem381[0x000154E8:word32];
						word32 d3_384;
						word32 d2_385 = fn000015A0(d0_106, d1, d2_324, out d3_384);
						word32 v74_387 = Mem381[a7_379 + 0x00000000:word32];
						Mem392[a7_379 + 0x00000000:word32] = a6_119;
						word32 a1_386 = a1_383 + d2_385;
						word32 a6_394 = Mem392[0x0001072A:word32];
						(a6_394 + -228)();
						word32 v76_398 = Mem392[a7_379 + 0x00000000:word32];
						a6_119 = v76_398;
						word32 d0_401 = -1;
						if (!__btst((byte) d4_343, 0x0000))
						{
							word32 d0_649 = DPB(0xFFFFFFFF, v24_73, 0, 16);
							word32 d0_653 = DPB(d0_649, (word16) DPB(d0_649, (word16) d0_649 & 0x000F, 0, 16) ^ 0x000F, 0, 16);
							d0_401 = DPB(d0_649, Mem392[0x0002D856 + DPB(d0_649, (word16) d0_653 + (word16) d0_653, 0, 16):word16], 0, 16);
						}
						word16 v82_407 = (word16) d0_401;
						Mem408[v76_398 + 68:word16] = v82_407;
						word32 d0_409 = 0;
						if (!__btst((byte) d4_343, 0x0001))
						{
							word32 d0_634 = (word32) v30_84;
							word32 d0_640 = DPB(d0_634, (word16) DPB(d0_634, (word16) DPB(d0_634, (word16) d0_634 + 0x0001, 0, 16) & 0x000F, 0, 16) ^ 0x000F, 0, 16);
							d0_409 = DPB(d0_634, Mem408[0x0002D876 + DPB(d0_634, (word16) d0_640 + (word16) d0_640, 0, 16):word16], 0, 16);
						}
						word16 v89_415 = (word16) d0_409;
						Mem416[v76_398 + 70:word16] = v89_415;
						word16 v91_419 = (word16) DPB(d2_385, v24_73, 0, 16) & 0x000F;
						word16 v92_421 = __ror((word16) DPB(d2_385, v91_419, 0, 16), 0x0004);
						word32 d2_422 = DPB(d2_385, v92_421, 0, 16);
						word16 v94_423 = (word16) d2_422;
						Mem424[v76_398 + 66:word16] = v94_423;
						word16 v95_425 = (word16) d2_422 | 0x0FCA;
						word16 v96_427 = (word16) DPB(d2_385, v95_425, 0, 16);
						Mem428[v76_398 + 64:word16] = v96_427;
						word16 v97_429 = (word16) d7 << 0x0006;
						word16 v99_433 = (word16) v74_387 + (word16) v74_387;
						word32 d3_434 = DPB(v74_387, v99_433, 0, 16);
						word16 v100_435 = (word16) d6 + (word16) d6;
						word16 v101_437 = (word16) d3_434;
						word32 d6_436 = DPB(d6, v100_435, 0, 16);
						word32 d0_438 = (word32) v101_437;
						word16 v103_441 = (word16) d3_434;
						word32 d1_443 = DPB(d1, v103_441, 0, 16) *u (word16) d5;
						word16 v98_431 = (word16) DPB(d7, v97_429, 0, 16) + (word16) d6;
						word16 v102_439 = (word16) d0_438 - (word16) d6_436;
						word16 v104_444 = (word16) d1_443 - (word16) d6_436;
						word16 v105_447 = (word16) DPB(d2_385, 0x0180, 0, 16) - (word16) d6_436;
						d7 = DPB(d7, v98_431, 0, 16);
						word32 d0_440 = DPB(d0_438, v102_439, 0, 16);
						word32 d1_445 = DPB(d1_443, v104_444, 0, 16);
						word32 d2_448 = DPB(d2_385, v105_447, 0, 16);
						if (!__btst((byte) d4_343, 0x0000))
						{
							d0_440 = DPB(d0_438, (word16) d0_440 - 0x0002, 0, 16);
							d1_445 = DPB(d1_443, (word16) d1_445 - 0x0002, 0, 16);
							d2_448 = DPB(d2_385, (word16) d2_448 - 0x0002, 0, 16);
							d7 = DPB(d7, (word16) d7 + 0x0001, 0, 16);
							a0 = a0 - 0x00000002;
							a1_386 = a1_386 - 0x00000002;
							a2_346 = a2_346 - 0x00000002;
						}
						if (!__btst((byte) d4_343, 0x0001))
						{
							d0_440 = DPB(d0_440, (word16) d0_440 - 0x0002, 0, 16);
							d1_445 = DPB(d1_445, (word16) d1_445 - 0x0002, 0, 16);
							d2_448 = DPB(d2_448, (word16) d2_448 - 0x0002, 0, 16);
							d7 = DPB(d7, (word16) d7 + 0x0001, 0, 16);
						}
						word16 v114_465 = (word16) d0_440;
						Mem466[v76_398 + 100:word16] = v114_465;
						word16 v115_467 = (word16) d1_445;
						Mem468[v76_398 + 98:word16] = v115_467;
						word16 v116_469 = (word16) d2_448;
						Mem470[v76_398 + 96:word16] = v116_469;
						word16 v117_471 = (word16) d2_448;
						Mem472[v76_398 + 102:word16] = v117_471;
						word16 v118_474 = (word16) d5;
						Mem475[a7_379 + 0x00000002:word16] = v118_474;
						word32 a7_473 = a7_379 + 0x00000002 + 0x00000002;
						d5 = d5 - 0x00000001;
						while (d5 != 0xFFFFFFFF)
						{
							word32 a7_589 = a7_473 - 0x00000004;
							Mem591[a7_589 + 0x00000000:word32] = a6_119;
							word32 a6_593 = Mem591[0x0001072A:word32];
							(a6_593 + -228)();
							word32 v133_594 = Mem591[a7_589 + 0x00000000:word32];
							Mem598[v133_594 + 80:word32] = a2_346;
							Mem600[v133_594 + 76:word32] = a0;
							Mem602[v133_594 + 72:word32] = a1_386;
							Mem604[v133_594 + 84:word32] = a1_386;
							Mem606[v133_594 + 88:word16] = (word16) d7;
							a7_473 = a7_589 + 0x00000004;
							a6_119 = v133_594;
							a0 = DPB(a0, (word16) a0 + (word16) d3_434, 0, 16);
							a1_386 = a1_386 + 48;
							d5 = d5 - 0x00000001;
						}
						word16 v119_502 = Mem475[a7_473 + 0x00000000:word16];
						d0_106 = DPB(d0_440, v119_502, 0, 16);
						a7_120 = a7_473 + 0x00000000;
						word16 v120_505 = (word16) d0_106 - 0x0008;
						if (v120_505 != 0x0000)
						{
							word32 d4_509 = (word32) v31_86;
							byte v122_510 = __ror((byte) d4_509, (byte) d0_106);
							Mem514[a7_120 - 0x00000004:word32] = a6_119;
							word32 d4_511 = DPB(d4_509, v122_510, 0, 8);
							word32 a6_516 = Mem514[0x0001072A:word32];
							(a6_516 + -228)();
							word32 v124_517 = Mem514[a7_120 - 0x00000004:word32];
							word16 v125_520 = (word16) d2_448;
							Mem521[v124_517 + 98:word16] = v125_520;
							Mem522[v124_517 + 66:word16] = 0x0000;
							word16 v128_525 = (word16) DPB(d2_448, v24_73, 0, 16) & 0x000F;
							word16 v129_527 = __ror((word16) DPB(d2_448, v128_525, 0, 16), 0x0004);
							word16 v130_529 = (word16) DPB(d2_448, v129_527, 0, 16) | 0x0D00;
							word16 v131_532 = 0x0008 - (word16) d0_106;
							a6_119 = v124_517;
							word32 d2_530 = DPB(d2_448, v130_529, 0, 16);
							word32 d5_533 = DPB(0x00000008, v131_532, 0, 16);
							d5_533 = d5_533 - 0x00000001;
							while (d5_533 != 0xFFFFFFFF)
							{
								byte v141_560 = __ror((byte) d4_511, 0x01);
								d4_511 = DPB(d4_511, v141_560, 0, 8);
								if (v141_560 <u 0x00)
									;
								word32 a7_565 = a7_120 - 0x00000004;
								Mem567[a7_565 + 0x00000000:word32] = a6_119;
								word32 a6_569 = Mem567[0x0001072A:word32];
								(a6_569 + -228)();
								word32 v143_570 = Mem567[a7_565 + 0x00000000:word32];
								Mem574[v143_570 + 64:word16] = (word16) d2_530;
								Mem576[v143_570 + 80:word32] = a2_346;
								Mem578[v143_570 + 76:word32] = a1_386;
								Mem580[v143_570 + 84:word32] = a1_386;
								Mem582[v143_570 + 88:word16] = (word16) d7;
								a7_120 = a7_565 + 0x00000004;
								a6_119 = v143_570;
								a1_386 = a1_386 + 48;
								d5_533 = d5_533 - 0x00000001;
							}
						}
					}
				}
			}
		}
	}
	byte v51_121 = Mem0[0x00010737:byte];
	if (v140_125 != 0x00)
	{
		word32 d1_298;
		word32 d2_299;
		word32 d7_300;
		word32 a1_301;
		word32 a2_302;
		word32 d0_303 = fn000054C6(d0_126, d7, a0, out d1_298, out d2_299, out d7_300, out a1_301, out a2_302);
		word32 d1_304;
		word32 d2_305;
		word32 d7_306;
		word32 a2_307;
		word32 d0_308 = fn000046B2(d0_303, d7_300, out d1_304, out d2_305, out d7_306, out a2_307);
		word32 d1_309;
		word32 d2_310;
		word32 d7_311;
		word32 a1_312;
		word32 a2_313;
		word32 d0_314 = fn000054C6(d0_308, d7_306, a0, out d1_309, out d2_310, out d7_311, out a1_312, out a2_313);
		word32 d1_315;
		word32 d2_316;
		word32 d7_317;
		word32 a2_318;
		fn000046B2(d0_314, d7_311, out d1_315, out d2_316, out d7_317, out a2_318);
	}
	Mem135[0x00010737:byte] = 0x00;
	if (Mem135[0x00010736:byte] == 0x00)
	{
		word32 a7_179 = a7_120 - 0x00000004;
		Mem181[a7_179 + 0x00000000:word32] = a6_119;
		word32 a6_183 = Mem181[0x0001072A:word32];
		(a6_183 + -462)();
	}
	return;
}

void fn000025E4(word32 d0, word32 d1, word32 d4, word32 d5, word32 d6, word32 d7, word32 a0, word32 a2, word32 a6)
{
	word16 v4_3 = (word16) d5 - 0x0008;
	if (v4_3 != 0x0000)
	{
		word32 a7_116 = fp - 0x0000003A;
		if (Mem0[0x00010736:byte] == 0x00)
		{
			word32 a6_678 = Mem0[0x0001072A:word32];
			(a6_678 + -456)();
			a7_116 = fp - 0x0000003A;
		}
		word32 a6_117 = 0x00DFF000;
		word16 v47_118 = (word16) d4;
		word16 v48_120 = (word16) d5 - 0x0008;
		if (v48_120 != 0x0000)
			fn0000351A(d0, d1, d5, d6, d7, a0, a6_117, out a2);
		word16 v52_125 = (word16) d0 & 0xFFF0;
		word32 d0_126 = DPB(d0, v52_125, 0, 16);
		word32 a1_128 = Mem0[Mem0[0x00010738:word32]:word32];
		word16 v53_129 = (word16) d0_126 - Mem0[a1_128 + 2:word16];
		if (v53_129 <= 0x0000)
		{
			word16 v54_384 = (word16) d1 - Mem0[a1_128 + 6:word16];
			if (v54_384 <= 0x0000)
			{
				word16 v55_387 = (word16) d6;
				word32 d2_388 = DPB(0x00000003, v55_387, 0, 16);
				word16 v56_389 = (word16) d2_388 << 0x0004;
				word16 v57_391 = (word16) DPB(d2_388, v56_389, 0, 16) + (word16) d0_126;
				word16 v58_393 = (word16) DPB(d2_388, v57_391, 0, 16) - 0x0001;
				word32 d2_394 = DPB(d2_388, v58_393, 0, 16);
				word16 v59_396 = (word16) d2_394 - Mem0[a1_128 + 0x00000000:word16];
				if (v59_396 >= 0x0000)
				{
					word16 v60_399 = (word16) d1;
					word32 d3_400 = DPB(0x00000012, v60_399, 0, 16);
					word16 v61_401 = (word16) d3_400 + (word16) d7;
					word16 v62_403 = (word16) DPB(d3_400, v61_401, 0, 16) - 0x0001;
					word32 d3_404 = DPB(d3_400, v62_403, 0, 16);
					word16 v63_406 = (word16) d3_404 - Mem0[a1_128 + 4:word16];
					if (v63_406 >= 0x0000)
					{
						word16 v64_409 = (word16) d1 - Mem0[a1_128 + 4:word16];
						if (v64_409 <= 0x0000)
						{
							word32 d4_658 = DPB(d4, (word16) DPB(d4, Mem0[a1_128 + 4:word16], 0, 16) - (word16) d1, 0, 16);
							word32 d4_664 = DPB(d4, (word16) d4_658 + (word16) d4_658, 0, 16) *u (word16) d6;
							d4 = d4_664 *u (word16) d5;
							d7 = DPB(d7, (word16) d7 - (word16) d4_658, 0, 16);
							a2 = DPB(a2, (word16) a2 + (word16) d4_664, 0, 16);
							a0 = a0 + d4;
							d1 = DPB(d1, Mem0[a1_128 + 4:word16], 0, 16);
						}
						word16 v81_418 = (word16) d3_404 - Mem0[a1_128 + 6:word16];
						if (v81_418 >= 0x0000)
						{
							d3_404 = DPB(d3_400, (word16) d3_404 - Mem0[a1_128 + 6:word16], 0, 16);
							d7 = DPB(d7, (word16) d7 - (word16) d3_404, 0, 16);
						}
						word16 v90_424 = (word16) d6;
						word32 d3_425 = DPB(d3_404, v90_424, 0, 16);
						word16 v91_426 = (word16) d0_126 - Mem0[a1_128 + 0x00000000:word16];
						if (v91_426 <= 0x0000)
						{
							word32 d4_637 = DPB(d4, (word16) DPB(d4, (word16) DPB(d4, Mem0[a1_128 + 0x00000000:word16], 0, 16) - (word16) d0_126, 0, 16) >>u 0x0004, 0, 16);
							d4 = DPB(d4, (word16) d4_637 + (word16) d4_637, 0, 16);
							d6 = DPB(d6, (word16) d6 - (word16) d4_637, 0, 16);
							a0 = DPB(a0, (word16) a0 + (word16) d4, 0, 16);
							a2 = DPB(a2, (word16) a2 + (word16) d4, 0, 16);
							d0_126 = DPB(d0, Mem0[a1_128 + 0x00000000:word16], 0, 16);
						}
						word16 v100_435 = (word16) d2_394 - Mem0[a1_128 + 2:word16];
						if (v100_435 > 0x0000)
						{
							d2_394 = DPB(d2_388, (word16) DPB(d2_388, (word16) d2_394 - Mem0[a1_128 + 2:word16], 0, 16) >>u 0x0004, 0, 16);
							d6 = DPB(d6, (word16) d6 - (word16) d2_394, 0, 16);
						}
						if ((word16) d6 == 0x0000)
							d6 = 1;
						if (true)
						{
							word32 a7_451 = a7_116 - 0x00000004;
							Mem453[a7_451 + 0x00000000:word32] = d3_425;
							word32 a1_455 = Mem453[0x000154E8:word32];
							word32 d3_456;
							word32 d2_457 = fn000015A0(d0_126, d1, d2_394, out d3_456);
							word32 v133_459 = Mem453[a7_451 + 0x00000000:word32];
							Mem464[a7_451 + 0x00000000:word32] = a6_117;
							word32 a1_458 = a1_455 + d2_457;
							word32 a6_466 = Mem464[0x0001072A:word32];
							(a6_466 + -228)();
							word32 v135_470 = Mem464[a7_451 + 0x00000000:word32];
							Mem474[v135_470 + 68:word32] = 0xFFFFFFFF;
							Mem476[v135_470 + 64:word32] = 0x09F00000;
							word16 v138_477 = (word16) d7 << 0x0006;
							word16 v140_482 = (word16) d6 + (word16) d6;
							word32 d6_483 = DPB(d6, v140_482, 0, 16);
							word16 v141_484 = (word16) DPB(d2_457, 0x0180, 0, 16) - (word16) d6_483;
							word16 v142_486 = (word16) DPB(d2_457, v141_484, 0, 16);
							Mem487[v135_470 + 102:word16] = v142_486;
							word16 v143_488 = (word16) v133_459 + (word16) v133_459;
							word32 d3_489 = DPB(v133_459, v143_488, 0, 16);
							word16 v144_490 = (word16) d3_489;
							word16 v146_494 = (word16) d3_489;
							word32 d2_496 = DPB(d2_457, v146_494, 0, 16) *u (word16) d5;
							word16 v147_497 = (word16) d2_496 - (word16) d6_483;
							word16 v148_500 = (word16) DPB(d2_496, v147_497, 0, 16);
							Mem501[v135_470 + 100:word16] = v148_500;
							word16 v149_503 = (word16) d5;
							Mem504[a7_451 + 0x00000002:word16] = v149_503;
							word16 v139_479 = (word16) DPB(d7, v138_477, 0, 16) + (word16) d6;
							word16 v145_492 = (word16) DPB(d1, v144_490, 0, 16) - (word16) d6_483;
							a6_117 = v135_470;
							d7 = DPB(d7, v139_479, 0, 16);
							word32 d1_493 = DPB(d1, v145_492, 0, 16);
							word32 a7_502 = a7_451 + 0x00000002 + 0x00000002;
							d5 = d5 - 0x00000001;
							while (d5 != 0xFFFFFFFF)
							{
								word32 a7_605 = a7_502 - 0x00000004;
								Mem607[a7_605 + 0x00000000:word32] = a6_117;
								word32 a6_609 = Mem607[0x0001072A:word32];
								(a6_609 + -228)();
								word32 v160_610 = Mem607[a7_605 + 0x00000000:word32];
								Mem614[v160_610 + 80:word32] = a0;
								Mem616[v160_610 + 84:word32] = a1_458;
								Mem618[v160_610 + 88:word16] = (word16) d7;
								a7_502 = a7_605 + 0x00000004;
								a6_117 = v160_610;
								a0 = DPB(a0, (word16) a0 + (word16) d3_489, 0, 16);
								a1_458 = a1_458 + 48;
								d5 = d5 - 0x00000001;
							}
							word16 v150_530 = Mem504[a7_502 + 0x00000000:word16];
							d0_126 = DPB(d0_126, v150_530, 0, 16);
							a7_116 = a7_502 + 0x00000000;
							word16 v151_533 = (word16) d0_126 - 0x0008;
							if (v151_533 != 0x0000)
							{
								word32 d4_537 = DPB(d4, v47_118, 0, 16);
								byte v153_538 = __ror((byte) d4_537, (byte) d0_126);
								Mem542[a7_116 - 0x00000004:word32] = a6_117;
								word32 d4_539 = DPB(d4_537, v153_538, 0, 8);
								word32 a6_544 = Mem542[0x0001072A:word32];
								(a6_544 + -228)();
								word32 v156_545 = Mem542[a7_116 - 0x00000004:word32];
								word16 v157_548 = (word16) d1_493;
								Mem549[v156_545 + 100:word16] = v157_548;
								word16 v158_551 = 0x0008 - (word16) d0_126;
								a6_117 = v156_545;
								word32 d5_552 = DPB(0x00000008, v158_551, 0, 16);
								d5_552 = d5_552 - 0x00000001;
								while (d5_552 != 0xFFFFFFFF)
								{
									word32 a7_578 = a7_116 - 0x00000004;
									Mem580[a7_578 + 0x00000000:word32] = a6_117;
									word32 a6_582 = Mem580[0x0001072A:word32];
									(a6_582 + -228)();
									word32 v167_583 = Mem580[a7_578 + 0x00000000:word32];
									byte v168_586 = __ror((byte) d4_539, 0x01);
									a7_116 = a7_578 + 0x00000004;
									a6_117 = v167_583;
									d4_539 = DPB(d4_539, v168_586, 0, 8);
									if (v168_586 <u 0x00)
										Mem600[v167_583 + 64:word16] = 0x09F0;
									else
										Mem603[v167_583 + 64:word16] = 0x0900;
									Mem592[v167_583 + 80:word32] = a2;
									Mem594[v167_583 + 84:word32] = a1_458;
									Mem596[v167_583 + 88:word16] = (word16) d7;
									a1_458 = a1_458 + 48;
									d5_552 = d5_552 - 0x00000001;
								}
							}
						}
					}
				}
			}
		}
		byte v80_153 = Mem0[0x00010737:byte];
		if (v165_157 != 0x00)
		{
			word32 d1_362;
			word32 d2_363;
			word32 d7_364;
			word32 a1_365;
			word32 a2_366;
			word32 d0_367 = fn000054C6(d0_158, d7, a0, out d1_362, out d2_363, out d7_364, out a1_365, out a2_366);
			word32 d1_368;
			word32 d2_369;
			word32 d7_370;
			word32 a2_371;
			word32 d0_372 = fn000046B2(d0_367, d7_364, out d1_368, out d2_369, out d7_370, out a2_371);
			word32 d1_373;
			word32 d2_374;
			word32 d7_375;
			word32 a1_376;
			word32 a2_377;
			word32 d0_378 = fn000054C6(d0_372, d7_370, a0, out d1_373, out d2_374, out d7_375, out a1_376, out a2_377);
			word32 d1_379;
			word32 d2_380;
			word32 d7_381;
			word32 a2_382;
			fn000046B2(d0_378, d7_375, out d1_379, out d2_380, out d7_381, out a2_382);
		}
		Mem167[0x00010737:byte] = 0x00;
		if (Mem167[0x00010736:byte] == 0x00)
		{
			word32 a7_211 = a7_116 - 0x00000004;
			Mem213[a7_211 + 0x00000000:word32] = a6_117;
			word32 a6_215 = Mem213[0x0001072A:word32];
			(a6_215 + -462)();
		}
		return;
	}
	else
	{
		if (Mem0[0x00010736:byte] == 0x00)
		{
			word32 a6_1036 = Mem0[0x0001072A:word32];
			(a6_1036 + -456)();
		}
		word16 v26_737 = (word16) d0 & 0xFFF0;
		word32 d0_1010 = DPB(d0, v26_737, 0, 16);
		word32 a1_740 = Mem0[Mem0[0x00010738:word32]:word32];
		word32 a6_736 = 0x00DFF000;
		word16 v27_741 = (word16) d0_1010 - Mem0[a1_740 + 2:word16];
		if (v27_741 <= 0x0000)
		{
			word16 v29_815 = (word16) d1 - Mem0[a1_740 + 6:word16];
			if (v29_815 <= 0x0000)
			{
				word16 v30_818 = (word16) d6;
				word32 d2_819 = DPB(0x00000003, v30_818, 0, 16);
				word16 v31_820 = (word16) d2_819 << 0x0004;
				word16 v33_822 = (word16) DPB(d2_819, v31_820, 0, 16) + (word16) d0_1010;
				word16 v34_824 = (word16) DPB(d2_819, v33_822, 0, 16) - 0x0001;
				word32 d2_825 = DPB(d2_819, v34_824, 0, 16);
				word16 v35_827 = (word16) d2_825 - Mem0[a1_740 + 0x00000000:word16];
				if (v35_827 >= 0x0000)
				{
					word16 v37_830 = (word16) d1;
					word32 d3_831 = DPB(0x00000012, v37_830, 0, 16);
					word16 v38_832 = (word16) d3_831 + (word16) d7;
					word16 v39_834 = (word16) DPB(d3_831, v38_832, 0, 16) - 0x0001;
					word32 d3_1013 = DPB(d3_831, v39_834, 0, 16);
					word16 v40_837 = (word16) d3_1013 - Mem0[a1_740 + 4:word16];
					if (v40_837 >= 0x0000)
					{
						word16 v41_840 = (word16) d1 - Mem0[a1_740 + 4:word16];
						if (v41_840 <= 0x0000)
						{
							word32 d4_1020 = DPB(d4, (word16) DPB(d4, Mem0[a1_740 + 4:word16], 0, 16) - (word16) d1, 0, 16);
							word32 d4_1026 = DPB(d4, (word16) d4_1020 + (word16) d4_1020, 0, 16) *u (word16) d6;
							d7 = DPB(d7, (word16) d7 - (word16) d4_1020, 0, 16);
							d4 = d4_1026 *u 0x0008;
							a0 = a0 + d4_1026 *u 0x0008;
							d1 = DPB(d1, Mem0[a1_740 + 4:word16], 0, 16);
						}
						word16 v49_848 = (word16) d3_1013 - Mem0[a1_740 + 6:word16];
						if (v49_848 >= 0x0000)
						{
							d3_1013 = DPB(d3_831, (word16) d3_1013 - Mem0[a1_740 + 6:word16], 0, 16);
							d7 = DPB(d7, (word16) d7 - (word16) d3_1013, 0, 16);
						}
						word16 v71_854 = (word16) d6;
						word32 d3_855 = DPB(d3_1013, v71_854, 0, 16);
						word16 v72_856 = (word16) d0_1010 - Mem0[a1_740 + 0x00000000:word16];
						if (v72_856 <= 0x0000)
						{
							word32 d4_1001 = DPB(d4, (word16) DPB(d4, (word16) DPB(d4, Mem0[a1_740 + 0x00000000:word16], 0, 16) - (word16) d0_1010, 0, 16) >>u 0x0004, 0, 16);
							d6 = DPB(d6, (word16) d6 - (word16) d4_1001, 0, 16);
							a0 = DPB(a0, (word16) a0 + (word16) DPB(d4, (word16) d4_1001 + (word16) d4_1001, 0, 16), 0, 16);
							d0_1010 = DPB(d0, Mem0[a1_740 + 0x00000000:word16], 0, 16);
						}
						word16 v84_864 = (word16) d2_825 - Mem0[a1_740 + 2:word16];
						if (v84_864 > 0x0000)
						{
							d2_825 = DPB(d2_819, (word16) DPB(d2_819, (word16) d2_825 - Mem0[a1_740 + 2:word16], 0, 16) >>u 0x0004, 0, 16);
							d6 = DPB(d6, (word16) d6 - (word16) d2_825, 0, 16);
						}
						if ((word16) d6 == 0x0000)
							d6 = 1;
						if (true)
						{
							word32 a1_884 = Mem0[0x000154E8:word32];
							word32 d3_885;
							word32 d2_886 = fn000015A0(d0_1010, d1, d2_825, out d3_885);
							word32 a1_887 = a1_884 + d2_886;
							word32 a6_895 = Mem0[0x0001072A:word32];
							(a6_895 + -228)();
							Mem900[a6_736 + 68:word32] = 0xFFFFFFFF;
							Mem902[a6_736 + 64:word32] = 0x09F00000;
							word16 v110_904 = (word16) DPB(d2_886, 0x0030, 0, 16) - (word16) d6;
							word16 v111_906 = (word16) DPB(d2_886, v110_904, 0, 16) - (word16) d6;
							word16 v112_908 = (word16) DPB(d2_886, v111_906, 0, 16);
							Mem909[a6_736 + 102:word16] = v112_908;
							word16 v113_910 = (word16) d3_855 + (word16) d3_855;
							word32 d3_911 = DPB(a6_736, v113_910, 0, 16);
							word16 v114_912 = (word16) d3_911;
							word16 v115_914 = (word16) DPB(d2_886, v114_912, 0, 16) - (word16) d6;
							word16 v116_916 = (word16) DPB(d2_886, v115_914, 0, 16) - (word16) d6;
							word32 d2_917 = DPB(d2_886, v116_916, 0, 16);
							word16 v117_919 = (word16) d2_917;
							Mem920[a6_736 + 100:word16] = v117_919;
							word32 a6_898 = a6_736;
							word16 v118_921 = (word16) d7 - 0x007F;
							if (v118_921 >= 0x0000)
							{
								Mem965[a6_736 + 80:word32] = a0;
								Mem967[a6_736 + 84:word32] = a1_887;
								word16 v120_962 = (word16) DPB(d7, 0xFE00, 0, 16) + (word16) d6;
								word16 v123_968 = (word16) DPB(d7, v120_962, 0, 16);
								Mem969[a6_736 + 88:word16] = v123_968;
								word16 v119_959 = (word16) d7;
								word16 v125_973 = (word16) DPB(d7, v119_959, 0, 16) - 0x007F;
								d7 = DPB(d7, v125_973, 0, 16);
								a0 = a0 + d3_911 *u 0x03F8;
								a1_887 = a1_887 + 0x0000BE80;
								word32 a6_983 = Mem969[0x0001072A:word32];
								(a6_983 + -228)();
								a6_898 = a6_736;
							}
							Mem952[a6_898 + 80:word32] = a0;
							Mem954[a6_898 + 84:word32] = a1_887;
							word32 d7_947 = d7 *u 0x0200;
							Mem956[a6_898 + 88:word16] = (word16) DPB(d7_947 *u 0x0200, (word16) d7_947 + (word16) d6, 0, 16);
						}
					}
				}
			}
		}
		if (Mem0[0x00010736:byte] == 0x00)
		{
			word32 a6_811 = Mem0[0x0001072A:word32];
			(a6_811 + -462)();
		}
		return;
	}
}

void fn00002924(word32 d0, word32 d1, word32 d2, word32 d4, word32 d6, word32 d7, word32 a6)
{
	if (Mem0[0x00010736:byte] == 0x00)
	{
		word32 a6_397 = Mem0[0x0001072A:word32];
		(a6_397 + -456)();
	}
	word16 v21_63 = (word16) d0 & 0xFFF0;
	word32 d0_64 = DPB(d0, v21_63, 0, 16);
	word32 a1_66 = Mem0[Mem0[0x00010738:word32]:word32];
	word32 a6_61 = 0x00DFF000;
	word32 a0_62 = 0x000102BC;
	word16 v22_67 = (word16) d0_64 - Mem0[a1_66 + 2:word16];
	if (v22_67 <= 0x0000)
	{
		word16 v24_203 = (word16) d1 - Mem0[a1_66 + 6:word16];
		if (v24_203 <= 0x0000)
		{
			word16 v25_206 = (word16) d6;
			word16 v26_208 = (word16) DPB(d2, v25_206, 0, 16) << 0x0004;
			word16 v28_210 = (word16) DPB(d2, v26_208, 0, 16) + (word16) d0_64;
			word16 v29_212 = (word16) DPB(d2, v28_210, 0, 16) - 0x0001;
			word32 d2_213 = DPB(d2, v29_212, 0, 16);
			word16 v30_215 = (word16) d2_213 - Mem0[a1_66 + 0x00000000:word16];
			if (v30_215 >= 0x0000)
			{
				word16 v32_218 = (word16) d1;
				word32 d3_219 = DPB(0x0000000A, v32_218, 0, 16);
				word16 v33_220 = (word16) d3_219 + (word16) d7;
				word16 v34_222 = (word16) DPB(d3_219, v33_220, 0, 16) - 0x0001;
				word32 d3_223 = DPB(d3_219, v34_222, 0, 16);
				word16 v35_225 = (word16) d3_223 - Mem0[a1_66 + 4:word16];
				if (v35_225 >= 0x0000)
				{
					word32 a0_235;
					word32 d7_234;
					word32 d4_233;
					word32 d1_232;
					word16 v36_228 = (word16) d1 - Mem0[a1_66 + 4:word16];
					d1_232 = d1;
					d4_233 = d4;
					d7_234 = d7;
					a0_235 = a0_62;
					if (v36_228 <= 0x0000)
					{
						word32 d4_384 = DPB(d4, (word16) DPB(d4, Mem0[a1_66 + 4:word16], 0, 16) - (word16) d1, 0, 16);
						d7_234 = DPB(d7, (word16) d7 - (word16) d4_384, 0, 16);
						d4_233 = d4_384 *u 0x0030;
						a0_235 = a0_62 + d4_384 *u 0x0030;
						d1_232 = DPB(0x00000001, Mem0[a1_66 + 4:word16], 0, 16);
					}
					word16 v45_236 = (word16) d3_223 - Mem0[a1_66 + 6:word16];
					if (v45_236 >= 0x0000)
						d7_234 = DPB(d7_234, (word16) d7_234 - (word16) DPB(d3_219, (word16) d3_223 - Mem0[a1_66 + 6:word16], 0, 16), 0, 16);
					word32 d6_248;
					word32 d0_246;
					word16 v48_242 = (word16) d0_64 - Mem0[a1_66 + 0x00000000:word16];
					d0_246 = d0_64;
					d6_248 = d6;
					if (v48_242 <= 0x0000)
					{
						word32 d4_365 = DPB(d4_233, (word16) DPB(d4_233, (word16) DPB(d4_233, Mem0[a1_66 + 0x00000000:word16], 0, 16) - (word16) d0_64, 0, 16) >>u 0x0004, 0, 16);
						d6_248 = DPB(d6, (word16) d6 - (word16) d4_365, 0, 16);
						a0_235 = DPB(a0_235, (word16) a0_235 + (word16) DPB(d4_233, (word16) d4_365 + (word16) d4_365, 0, 16), 0, 16);
						d0_246 = DPB(d0, Mem0[a1_66 + 0x00000000:word16], 0, 16);
					}
					word16 v56_250 = (word16) d2_213 - Mem0[a1_66 + 2:word16];
					if (v56_250 >= 0x0000)
					{
						d2_213 = DPB(d2, (word16) DPB(d2, (word16) d2_213 - Mem0[a1_66 + 2:word16], 0, 16) >>u 0x0004, 0, 16);
						d6_248 = DPB(d6_248, (word16) d6_248 - (word16) d2_213, 0, 16);
					}
					if (true)
					{
						word32 a1_260 = Mem0[0x000154E8:word32];
						word32 d3_261;
						word32 d2_262 = fn000015A0(d0_246, d1_232, d2_213, out d3_261);
						word32 a1_263 = a1_260 + d2_262;
						word32 a6_268 = Mem0[0x0001072A:word32];
						(a6_268 + -228)();
						Mem274[a6_61 + 68:word32] = 0xFFFF0000;
						word16 v63_275 = (word16) d7_234 << 0x0006;
						word16 v64_277 = (word16) DPB(d7_234, v63_275, 0, 16) + (word16) d6_248;
						word16 v66_281 = (word16) d6_248 + (word16) d6_248;
						word32 d6_282 = DPB(d6_248, v66_281, 0, 16);
						word16 v67_284 = (word16) DPB(d0_246, 0x002E, 0, 16) - (word16) d6_282;
						word16 v68_286 = (word16) DPB(d0_246, v67_284, 0, 16);
						Mem287[a6_61 + 100:word16] = v68_286;
						word16 v69_289 = (word16) DPB(d0_246, 0x017E, 0, 16) - (word16) d6_282;
						word32 d0_290 = DPB(d0_246, v69_289, 0, 16);
						word16 v70_292 = (word16) d0_290;
						Mem293[a6_61 + 98:word16] = v70_292;
						word16 v71_294 = (word16) d0_290;
						Mem295[a6_61 + 102:word16] = v71_294;
						word16 v72_296 = Mem295[0x00017F20:word16];
						Mem301[a6_61 + 66:word16] = 0x0000;
						word16 v65_279 = (word16) DPB(d7_234, v64_277, 0, 16) + 0x0001;
						word32 a6_272 = a6_61;
						word32 d7_280 = DPB(d7_234, v65_279, 0, 16);
						word32 d0_297 = DPB(d0_246, v72_296, 0, 16);
						word32 d2_299 = DPB(d2_262, 0x0D0C, 0, 16);
						word32 d5_302 = 7;
						while (true)
						{
							byte v74_323 = __ror((byte) d0_297, 0x01);
							d0_297 = DPB(d0_297, v74_323, 0, 8);
							if (v74_323 <u 0x00)
								Mem348[a6_272 + 64:word16] = 0x0DFC;
							else
								Mem351[a6_272 + 64:word16] = (word16) d2_299;
							Mem329[a6_272 + 80:word32] = a0_235;
							Mem331[a6_272 + 76:word32] = a1_263;
							Mem333[a6_272 + 84:word32] = a1_263;
							word16 v81_334 = (word16) d7_280;
							Mem335[a6_272 + 88:word16] = v81_334;
							a1_263 = a1_263 + 48;
							d5_302 = d5_302 - 0x00000001;
							if (d5_302 == 0xFFFFFFFF)
								goto l00002A5C;
							word32 a6_343 = Mem335[0x0001072A:word32];
							(a6_343 + -228)();
						}
					}
				}
			}
		}
	}
	word32 a6_75 = Mem0[0x0001072A:word32];
	(a6_75 + -228)();
	if (Mem0[0x00010736:byte] == 0x00)
	{
		word32 a6_191 = Mem0[0x0001072A:word32];
		(a6_191 + -462)();
		word32 a6_199 = Mem0[0x0001072A:word32];
		(a6_199 + -462)();
	}
	return;
}

void fn00002A86(word32 d0, word32 d1, word32 d2, word32 d4, word32 d5, word32 d6, word32 d7, word32 a6)
{
	if (Mem0[0x00017F22:word16] >= 0x0000)
	{
		if (Mem0[0x00010736:byte] == 0x00)
		{
			word32 a6_457 = Mem0[0x0001072A:word32];
			(a6_457 + -456)();
		}
		word16 v24_115 = (word16) d0 & 0xFFF0;
		word16 v22_112 = (word16) d1 + 0x0001;
		word32 d0_116 = DPB(d0, v24_115, 0, 16);
		word32 a1_118 = Mem0[Mem0[0x00010738:word32]:word32];
		word32 a6_110 = 0x00DFF000;
		word32 a0_111 = 0x000102BC;
		word32 d1_113 = DPB(0x00000001, v22_112, 0, 16);
		word16 v25_119 = (word16) d0_116 - Mem0[a1_118 + 2:word16];
		if (v25_119 <= 0x0000)
		{
			word16 v27_255 = (word16) d1_113 - Mem0[a1_118 + 6:word16];
			if (v27_255 <= 0x0000)
			{
				word16 v28_258 = (word16) d6;
				word16 v29_260 = (word16) DPB(d2, v28_258, 0, 16) << 0x0004;
				word16 v30_262 = (word16) DPB(d2, v29_260, 0, 16) + (word16) d0_116;
				word16 v31_264 = (word16) DPB(d2, v30_262, 0, 16) - 0x0001;
				word32 d2_265 = DPB(d2, v31_264, 0, 16);
				word16 v32_267 = (word16) d2_265 - Mem0[a1_118 + 0x00000000:word16];
				if (v32_267 >= 0x0000)
				{
					word16 v33_270 = (word16) d1_113;
					word32 d3_271 = DPB(0x0000000A, v33_270, 0, 16);
					word16 v34_272 = (word16) d3_271 + (word16) d7;
					word16 v35_274 = (word16) DPB(d3_271, v34_272, 0, 16) - 0x0001;
					word32 d3_275 = DPB(d3_271, v35_274, 0, 16);
					word16 v36_277 = (word16) d3_275 - Mem0[a1_118 + 4:word16];
					if (v36_277 >= 0x0000)
					{
						word32 a0_289;
						word32 d7_288;
						word32 d5_287;
						word32 d4_286;
						word32 d1_285;
						word16 v37_280 = (word16) d1_113 - Mem0[a1_118 + 4:word16];
						d1_285 = d1_113;
						d4_286 = d4;
						d5_287 = d5;
						d7_288 = d7;
						a0_289 = a0_111;
						if (v37_280 <= 0x0000)
						{
							word32 d4_442 = DPB(d4, (word16) DPB(d4, Mem0[a1_118 + 4:word16], 0, 16) - (word16) d1_113, 0, 16);
							d1_285 = DPB(d1_113, Mem0[a1_118 + 4:word16], 0, 16);
							__bset(d5, 0x0000, out d5_287);
							d7_288 = DPB(d7, (word16) d7 - (word16) d4_442, 0, 16);
							d4_286 = d4_442 *u 0x0030;
							a0_289 = a0_111 + d4_442 *u 0x0030;
						}
						word16 v46_290 = (word16) d3_275 - Mem0[a1_118 + 6:word16];
						if (v46_290 >= 0x0000)
						{
							d7_288 = DPB(d7_288, (word16) d7_288 - (word16) DPB(d3_271, (word16) d3_275 - Mem0[a1_118 + 6:word16], 0, 16), 0, 16);
							word32 d5_437;
							__bset(d5_287, 0x0001, out d5_437);
						}
						word32 d6_304;
						word32 d0_302;
						word16 v49_298 = (word16) d0_116 - Mem0[a1_118 + 0x00000000:word16];
						d0_302 = d0_116;
						d6_304 = d6;
						if (v49_298 <= 0x0000)
						{
							word32 d4_421 = DPB(d4_286, (word16) DPB(d4_286, (word16) DPB(d4_286, Mem0[a1_118 + 0x00000000:word16], 0, 16) - (word16) d0_116, 0, 16) >>u 0x0004, 0, 16);
							d6_304 = DPB(d6, (word16) d6 - (word16) d4_421, 0, 16);
							a0_289 = DPB(a0_289, (word16) a0_289 + (word16) DPB(d4_286, (word16) d4_421 + (word16) d4_421, 0, 16), 0, 16);
							d0_302 = DPB(d0, Mem0[a1_118 + 0x00000000:word16], 0, 16);
						}
						word16 v57_306 = (word16) d2_265 - Mem0[a1_118 + 2:word16];
						if (v57_306 >= 0x0000)
						{
							d2_265 = DPB(d2, (word16) DPB(d2, (word16) d2_265 - Mem0[a1_118 + 2:word16], 0, 16) >>u 0x0004, 0, 16);
							d6_304 = DPB(d6_304, (word16) d6_304 - (word16) d2_265, 0, 16);
						}
						if ((word16) d7_288 >= 0x0000)
						{
							word32 a1_316 = Mem0[0x000154E8:word32];
							word32 d3_317;
							word32 d2_318 = fn000015A0(d0_302, d1_285, d2_265, out d3_317);
							word32 a1_319 = a1_316 + d2_318;
							word32 a6_324 = Mem0[0x0001072A:word32];
							(a6_324 + -228)();
							Mem330[a6_110 + 68:word32] = 0xFFFF0000;
							word16 v64_331 = (word16) d7_288 << 0x0006;
							word16 v65_333 = (word16) DPB(d7_288, v64_331, 0, 16) + (word16) d6_304;
							word16 v67_337 = (word16) d6_304 + (word16) d6_304;
							word32 d6_338 = DPB(d6_304, v67_337, 0, 16);
							word16 v68_340 = (word16) DPB(d0_302, 0x002E, 0, 16) - (word16) d6_338;
							word16 v69_342 = (word16) DPB(d0_302, v68_340, 0, 16);
							Mem343[a6_110 + 100:word16] = v69_342;
							word16 v70_345 = (word16) DPB(d0_302, 0x017E, 0, 16) - (word16) d6_338;
							word32 d0_346 = DPB(d0_302, v70_345, 0, 16);
							word16 v71_348 = (word16) d0_346;
							Mem349[a6_110 + 98:word16] = v71_348;
							word16 v72_350 = (word16) d0_346;
							Mem351[a6_110 + 102:word16] = v72_350;
							word16 v73_352 = Mem351[0x00017F22:word16];
							Mem357[a6_110 + 66:word16] = 0x0000;
							word16 v66_335 = (word16) DPB(d7_288, v65_333, 0, 16) + 0x0001;
							word32 a6_328 = a6_110;
							word32 d7_336 = DPB(d7_288, v66_335, 0, 16);
							word32 d0_353 = DPB(d0_302, v73_352, 0, 16);
							word32 d1_354 = DPB(d1_285, 0x1DFC, 0, 16);
							word32 d2_355 = DPB(d2_318, 0x1D0C, 0, 16);
							word32 d5_358 = 7;
							while (true)
							{
								byte v75_379 = __ror((byte) d0_353, 0x01);
								d0_353 = DPB(d0_353, v75_379, 0, 8);
								if (v75_379 <u 0x00)
									Mem404[a6_328 + 64:word16] = (word16) d1_354;
								else
									Mem407[a6_328 + 64:word16] = (word16) d2_355;
								Mem385[a6_328 + 80:word32] = a0_289;
								Mem387[a6_328 + 76:word32] = a1_319;
								Mem389[a6_328 + 84:word32] = a1_319;
								word16 v82_390 = (word16) d7_336;
								Mem391[a6_328 + 88:word16] = v82_390;
								a1_319 = a1_319 + 48;
								d5_358 = d5_358 - 0x00000001;
								if (d5_358 == 0xFFFFFFFF)
									goto l00002BD2;
								word32 a6_399 = Mem391[0x0001072A:word32];
								(a6_399 + -228)();
							}
						}
					}
				}
			}
		}
		word32 a6_127 = Mem0[0x0001072A:word32];
		(a6_127 + -228)();
		if (Mem0[0x00010736:byte] == 0x00)
		{
			word32 a6_243 = Mem0[0x0001072A:word32];
			(a6_243 + -462)();
			word32 a6_251 = Mem0[0x0001072A:word32];
			(a6_251 + -462)();
		}
	}
	return;
}

word32 fn00002D2A(word32 d0, word32 d1, word32 d2, word32 d3, word32 a6, word32 dwArg00, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, word32 dwArg14, ptr32 d2Out, ptr32 d3Out, ptr32 a0Out)
{
	word32 a6_26 = Mem0[0x0001072A:word32];
	(a6_26 + -228)();
	word32 d0_59 = DPB(d0, (word16) d0 & 0xFFF8, 0, 16);
	word32 a0_63 = Mem0[Mem0[0x00010738:word32]:word32];
	word32 d1_61 = DPB(d1, (word16) d1 & 0xFFF8, 0, 16);
	if ((word16) d0_59 - Mem0[a0_63 + 2:word16] <= 0x0000 && (word16) d1_61 - Mem0[a0_63 + 6:word16] <= 0x0000)
	{
		word32 d2_110 = DPB(d2, (word16) DPB(d2, (word16) d0_59, 0, 16) + 0x0007, 0, 16);
		if ((word16) d2_110 - Mem0[a0_63 + 0x00000000:word16] >= 0x0000 && (word16) DPB(d3, (word16) DPB(d3, (word16) d1_61, 0, 16) + 0x0007, 0, 16) - Mem0[a0_63 + 4:word16] >= 0x0000)
		{
			word32 a0_123 = Mem0[0x000154E0:word32];
			word32 a1_124 = Mem0[0x000154E4:word32];
			word32 d3_125;
			word32 d2_126 = fn000015A0(d0_59, d1_61, d2_110, out d3_125);
			word32 a0_127 = a0_123 + d2_126;
			word32 a1_128 = a1_124 + d2_126;
			if ((word16) d3_125 - 0x0008 >= 0x0000)
			{
				a0_127 = a0_127 + 0x00000001;
				a1_128 = a1_128 + 0x00000001;
			}
			word32 d0_134 = DPB(d0, 0x0180, 0, 16);
			word32 d2_135 = 7;
			do
			{
				Mem141[a0_127 + 0x00000000:byte] = Mem0[a1_128 + 0x00000000:byte];
				Mem143[a0_127 + 48:byte] = Mem141[a1_128 + 48:byte];
				Mem145[a0_127 + 96:byte] = Mem143[a1_128 + 96:byte];
				Mem147[a0_127 + 144:byte] = Mem145[a1_128 + 144:byte];
				Mem149[a0_127 + 192:byte] = Mem147[a1_128 + 192:byte];
				Mem151[a0_127 + 240:byte] = Mem149[a1_128 + 240:byte];
				Mem153[a0_127 + 288:byte] = Mem151[a1_128 + 288:byte];
				Mem155[a0_127 + 336:byte] = Mem153[a1_128 + 336:byte];
				a0_127 = DPB(a0_127, (word16) a0_127 + (word16) d0_134, 0, 16);
				a1_128 = DPB(a1_128, (word16) a1_128 + (word16) d0_134, 0, 16);
				d2_135 = d2_135 - 0x00000001;
			} while (d2_135 != 0xFFFFFFFF);
		}
	}
}

void fn00002DD2(word32 d0, word32 d1, word32 d4, word32 d5, word32 d6, word32 d7, word32 a0, word32 a6)
{
	word16 v4_3 = (word16) d5 - 0x0008;
	if (v4_3 != 0x0000)
	{
		word32 a6_76 = Mem0[0x0001072A:word32];
		(a6_76 + -456)();
		word32 a6_217 = Mem0[0x0001072A:word32];
		(a6_217 + -228)();
		word16 v21_221 = (word16) d0 & 0xFFF0;
		word32 a6_212 = 0x00DFF000;
		word32 d0_222 = DPB(d0, v21_221, 0, 16);
		word32 a1_224 = Mem0[Mem0[0x00010738:word32]:word32];
		word32 a6_220 = a6_212;
		word16 v25_225 = (word16) d0_222 - Mem0[a1_224 + 2:word16];
		if (v25_225 <= 0x0000)
		{
			word16 v27_259 = (word16) d1 - Mem0[a1_224 + 6:word16];
			if (v27_259 <= 0x0000)
			{
				word16 v28_262 = (word16) d6;
				word32 d2_263 = DPB(0x00000003, v28_262, 0, 16);
				word16 v29_264 = (word16) d2_263 << 0x0004;
				word16 v31_266 = (word16) DPB(d2_263, v29_264, 0, 16) + (word16) d0_222;
				word16 v32_268 = (word16) DPB(d2_263, v31_266, 0, 16) - 0x0001;
				word32 d2_269 = DPB(d2_263, v32_268, 0, 16);
				word16 v33_271 = (word16) d2_269 - Mem0[a1_224 + 0x00000000:word16];
				if (v33_271 >= 0x0000)
				{
					word16 v35_274 = (word16) d1;
					word32 d3_275 = DPB(0x00000012, v35_274, 0, 16);
					word16 v36_276 = (word16) d3_275 + (word16) d7;
					word16 v37_278 = (word16) DPB(d3_275, v36_276, 0, 16) - 0x0001;
					word32 d3_279 = DPB(d3_275, v37_278, 0, 16);
					word16 v38_281 = (word16) d3_279 - Mem0[a1_224 + 4:word16];
					if (v38_281 >= 0x0000)
					{
						word32 a0_291;
						word32 d7_290;
						word32 d4_289;
						word32 d1_288;
						word16 v39_284 = (word16) d1 - Mem0[a1_224 + 4:word16];
						d1_288 = d1;
						d4_289 = d4;
						d7_290 = d7;
						a0_291 = a0;
						if (v39_284 <= 0x0000)
						{
							word32 d4_434 = DPB(d4, (word16) DPB(d4, Mem0[a1_224 + 4:word16], 0, 16) - (word16) d1, 0, 16);
							d4_289 = DPB(d4, (word16) d4_434 + (word16) d4_434, 0, 16) *u (word16) d5 *u (word16) d6;
							d7_290 = DPB(d7, (word16) d7 - (word16) d4_434, 0, 16);
							a0_291 = a0 + d4_289;
							d1_288 = DPB(d1, Mem0[a1_224 + 4:word16], 0, 16);
						}
						word16 v67_292 = (word16) d3_279 - Mem0[a1_224 + 6:word16];
						if (v67_292 >= 0x0000)
						{
							d3_279 = DPB(d3_275, (word16) d3_279 - Mem0[a1_224 + 6:word16], 0, 16);
							d7_290 = DPB(d7_290, (word16) d7_290 - (word16) d3_279, 0, 16);
						}
						word32 d6_306;
						word32 d0_304;
						word16 v73_298 = (word16) d6;
						word32 d3_299 = DPB(d3_279, v73_298, 0, 16);
						word16 v74_300 = (word16) d0_222 - Mem0[a1_224 + 0x00000000:word16];
						d0_304 = d0_222;
						d6_306 = d6;
						if (v74_300 <= 0x0000)
						{
							word32 d4_415 = DPB(d4_289, (word16) DPB(d4_289, (word16) DPB(d4_289, Mem0[a1_224 + 0x00000000:word16], 0, 16) - (word16) d0_222, 0, 16) >>u 0x0004, 0, 16);
							d6_306 = DPB(d6, (word16) d6 - (word16) d4_415, 0, 16);
							a0_291 = DPB(a0_291, (word16) a0_291 + (word16) DPB(d4_289, (word16) d4_415 + (word16) d4_415, 0, 16), 0, 16);
							d0_304 = DPB(d0, Mem0[a1_224 + 0x00000000:word16], 0, 16);
						}
						word16 v91_308 = (word16) d2_269 - Mem0[a1_224 + 2:word16];
						if (v91_308 > 0x0000)
						{
							d2_269 = DPB(d2_263, (word16) DPB(d2_263, (word16) d2_269 - Mem0[a1_224 + 2:word16], 0, 16) >>u 0x0004, 0, 16);
							d6_306 = DPB(d6_306, (word16) d6_306 - (word16) d2_269, 0, 16);
						}
						if ((word16) d6_306 == 0x0000)
							d6_306 = 1;
						if (true)
						{
							word32 a1_328 = Mem0[0x000154E8:word32];
							word32 d3_329;
							word32 d2_330 = fn000015A0(d0_304, d1_288, d2_269, out d3_329);
							Mem336[a6_212 + 68:word32] = 0xFFFFFFFF;
							Mem338[a6_212 + 64:word32] = 0x09F00000;
							word16 v129_339 = (word16) d7_290 << 0x0006;
							word16 v131_344 = (word16) d6_306 + (word16) d6_306;
							word32 d6_345 = DPB(d6_306, v131_344, 0, 16);
							word16 v132_346 = (word16) DPB(d2_330, 0x0180, 0, 16) - (word16) d6_345;
							word16 v133_348 = (word16) DPB(d2_330, v132_346, 0, 16);
							Mem349[a6_212 + 100:word16] = v133_348;
							word16 v134_350 = (word16) d3_299 + (word16) d3_299;
							word32 d3_351 = DPB(d3_279, v134_350, 0, 16);
							word16 v135_352 = (word16) d3_351;
							word32 d2_354 = DPB(d2_330, v135_352, 0, 16) *u (word16) d5;
							word16 v136_355 = (word16) d2_354 - (word16) d6_345;
							word16 v137_357 = (word16) DPB(d2_354, v136_355, 0, 16);
							Mem358[a6_212 + 102:word16] = v137_357;
							word16 v130_341 = (word16) DPB(d7_290, v129_339, 0, 16) + (word16) d6_306;
							word16 v138_359 = (word16) d5 - 0x0001;
							word32 a1_331 = a1_328 + d2_330;
							word32 d7_342 = DPB(d7_290, v130_341, 0, 16);
							word32 d5_360 = DPB(0x00000008, v138_359, 0, 16);
							Mem383[a6_220 + 80:word32] = a1_331;
							Mem385[a6_220 + 84:word32] = a0_291;
							word16 v145_386 = (word16) d7_342;
							Mem387[a6_220 + 88:word16] = v145_386;
							word16 v146_389 = (word16) a0_291 + (word16) d3_351;
							a0_291 = DPB(a0_291, v146_389, 0, 16);
							a1_331 = a1_331 + 48;
							d5_360 = d5_360 - 0x00000001;
							while (d5_360 != 0xFFFFFFFF)
							{
								word32 a6_397 = Mem387[0x0001072A:word32];
								(a6_397 + -228)();
								Mem383[a6_220 + 80:word32] = a1_331;
								Mem385[a6_220 + 84:word32] = a0_291;
								v145_386 = (word16) d7_342;
								Mem387[a6_220 + 88:word16] = v145_386;
								v146_389 = (word16) a0_291 + (word16) d3_351;
								a0_291 = DPB(a0_291, v146_389, 0, 16);
								a1_331 = a1_331 + 48;
								d5_360 = d5_360 - 0x00000001;
							}
						}
					}
				}
			}
		}
		word32 a6_233 = Mem0[0x0001072A:word32];
		(a6_233 + -462)();
		return;
	}
	else
	{
		word32 a6_472 = Mem0[0x0001072A:word32];
		(a6_472 + -456)();
		word32 a6_481 = Mem0[0x0001072A:word32];
		(a6_481 + -228)();
		word16 v49_485 = (word16) d0 & 0xFFF0;
		word32 d0_486 = DPB(d0, v49_485, 0, 16);
		word32 a1_488 = Mem0[Mem0[0x00010738:word32]:word32];
		word32 a6_476 = 0x00DFF000;
		word16 v50_489 = (word16) d0_486 - Mem0[a1_488 + 2:word16];
		if (v50_489 <= 0x0000)
		{
			word16 v51_523 = (word16) d1 - Mem0[a1_488 + 6:word16];
			if (v51_523 <= 0x0000)
			{
				word16 v52_526 = (word16) d6;
				word32 d2_527 = DPB(0x00000003, v52_526, 0, 16);
				word16 v53_528 = (word16) d2_527 << 0x0004;
				word16 v54_530 = (word16) DPB(d2_527, v53_528, 0, 16) + (word16) d0_486;
				word16 v55_532 = (word16) DPB(d2_527, v54_530, 0, 16) - 0x0001;
				word32 d2_533 = DPB(d2_527, v55_532, 0, 16);
				word16 v56_535 = (word16) d2_533 - Mem0[a1_488 + 0x00000000:word16];
				if (v56_535 >= 0x0000)
				{
					word16 v57_538 = (word16) d1;
					word32 d3_539 = DPB(0x00000012, v57_538, 0, 16);
					word16 v58_540 = (word16) d3_539 + (word16) d7;
					word16 v59_542 = (word16) DPB(d3_539, v58_540, 0, 16) - 0x0001;
					word32 d3_543 = DPB(d3_539, v59_542, 0, 16);
					word16 v60_545 = (word16) d3_543 - Mem0[a1_488 + 4:word16];
					if (v60_545 >= 0x0000)
					{
						word32 a0_555;
						word32 d7_554;
						word32 d4_553;
						word32 d1_552;
						word16 v61_548 = (word16) d1 - Mem0[a1_488 + 4:word16];
						d1_552 = d1;
						d4_553 = d4;
						d7_554 = d7;
						a0_555 = a0;
						if (v61_548 <= 0x0000)
						{
							word32 d4_725 = DPB(d4, (word16) DPB(d4, Mem0[a1_488 + 4:word16], 0, 16) - (word16) d1, 0, 16);
							d4_553 = DPB(d4, (word16) d4_725 + (word16) d4_725, 0, 16) *u (word16) d5 *u (word16) d6;
							d7_554 = DPB(d7, (word16) d7 - (word16) d4_725, 0, 16);
							a0_555 = a0 + d4_553;
							d1_552 = DPB(d1, Mem0[a1_488 + 4:word16], 0, 16);
						}
						word16 v70_556 = (word16) d3_543 - Mem0[a1_488 + 6:word16];
						if (v70_556 >= 0x0000)
						{
							d3_543 = DPB(d3_539, (word16) d3_543 - Mem0[a1_488 + 6:word16], 0, 16);
							d7_554 = DPB(d7_554, (word16) d7_554 - (word16) d3_543, 0, 16);
						}
						word32 d6_570;
						word32 d0_568;
						word16 v82_562 = (word16) d6;
						word32 d3_563 = DPB(d3_543, v82_562, 0, 16);
						word16 v83_564 = (word16) d0_486 - Mem0[a1_488 + 0x00000000:word16];
						d0_568 = d0_486;
						d6_570 = d6;
						if (v83_564 <= 0x0000)
						{
							word32 d4_706 = DPB(d4_553, (word16) DPB(d4_553, (word16) DPB(d4_553, Mem0[a1_488 + 0x00000000:word16], 0, 16) - (word16) d0_486, 0, 16) >>u 0x0004, 0, 16);
							d6_570 = DPB(d6, (word16) d6 - (word16) d4_706, 0, 16);
							a0_555 = DPB(a0_555, (word16) a0_555 + (word16) DPB(d4_553, (word16) d4_706 + (word16) d4_706, 0, 16), 0, 16);
							d0_568 = DPB(d0, Mem0[a1_488 + 0x00000000:word16], 0, 16);
						}
						word16 v95_572 = (word16) d2_533 - Mem0[a1_488 + 2:word16];
						if (v95_572 > 0x0000)
						{
							d2_533 = DPB(d2_527, (word16) DPB(d2_527, (word16) d2_533 - Mem0[a1_488 + 2:word16], 0, 16) >>u 0x0004, 0, 16);
							d6_570 = DPB(d6_570, (word16) d6_570 - (word16) d2_533, 0, 16);
						}
						if ((word16) d6_570 == 0x0000)
							d6_570 = 1;
						if (true)
						{
							word32 a1_592 = Mem0[0x000154E8:word32];
							word32 d3_593;
							word32 d2_594 = fn000015A0(d0_568, d1_552, d2_533, out d3_593);
							word32 a1_595 = a1_592 + d2_594;
							word32 a6_603 = Mem0[0x0001072A:word32];
							(a6_603 + -228)();
							Mem608[a6_476 + 68:word32] = 0xFFFFFFFF;
							Mem610[a6_476 + 64:word32] = 0x09F00000;
							word16 v107_612 = (word16) DPB(d2_594, 0x0030, 0, 16) - (word16) d6_570;
							word16 v108_614 = (word16) DPB(d2_594, v107_612, 0, 16) - (word16) d6_570;
							word16 v109_616 = (word16) DPB(d2_594, v108_614, 0, 16);
							Mem617[a6_476 + 100:word16] = v109_616;
							word16 v110_618 = (word16) d3_563 + (word16) d3_563;
							word32 d3_619 = DPB(d3_543, v110_618, 0, 16);
							word16 v111_620 = (word16) d3_619;
							word16 v112_622 = (word16) DPB(d2_594, v111_620, 0, 16) - (word16) d6_570;
							word16 v113_624 = (word16) DPB(d2_594, v112_622, 0, 16) - (word16) d6_570;
							word32 d2_625 = DPB(d2_594, v113_624, 0, 16);
							word16 v114_627 = (word16) d2_625;
							Mem628[a6_476 + 102:word16] = v114_627;
							word32 a6_606 = a6_476;
							word16 v115_629 = (word16) d7_554 - 0x007F;
							if (v115_629 >= 0x0000)
							{
								Mem670[a6_476 + 80:word32] = a1_595;
								Mem672[a6_476 + 84:word32] = a0_555;
								word16 v117_667 = (word16) DPB(d7_554, 0xFE00, 0, 16) + (word16) d6_570;
								word16 v120_673 = (word16) DPB(d7_554, v117_667, 0, 16);
								Mem674[a6_476 + 88:word16] = v120_673;
								word16 v116_664 = (word16) d7_554;
								word16 v122_678 = (word16) DPB(d7_554, v116_664, 0, 16) - 0x007F;
								d7_554 = DPB(d7_554, v122_678, 0, 16);
								a0_555 = a0_555 + d3_619 *u 0x03F8;
								a1_595 = a1_595 + 0x0000BE80;
								word32 a6_688 = Mem674[0x0001072A:word32];
								(a6_688 + -228)();
								a6_606 = a6_476;
							}
							Mem657[a6_606 + 80:word32] = a1_595;
							Mem659[a6_606 + 84:word32] = a0_555;
							word32 d7_652 = d7_554 *u 0x0200;
							Mem661[a6_606 + 88:word16] = (word16) DPB(d7_652 *u 0x0200, (word16) d7_652 + (word16) d6_570, 0, 16);
						}
					}
				}
			}
		}
		word32 a6_498 = Mem0[0x0001072A:word32];
		(a6_498 + -462)();
		return;
	}
}

word32 fn0000351A(word32 d0, word32 d1, word32 d5, word32 d6, word32 d7, word32 a0, word32 a6, ptr32 a2Out)
{
	*a2Out = a2;
	word16 v4_3 = (word16) d5 - 0x0008;
	if (v4_3 != 0x0000)
	{
		word16 v7_32 = (word16) d5 - 0x0001;
		if (v7_32 == 0x0000)
		{
			word32 a2_36;
			*a2Out = a0;
			return d2;
		}
		else
		{
			word16 v71_70 = (word16) d6;
			word32 d0_71 = DPB(d0, v71_70, 0, 16);
			word16 v72_72 = (word16) d0_71 + (word16) d0_71;
			word32 d0_75 = DPB(d0, v72_72, 0, 16) *u (word16) d7;
			if (d0_75 >u 0x000000C0)
			{
				word32 d7_256;
				word32 d0_257 = fn0000490C(d0_75, d1, out d7_256);
				Mem259[0x00010737:byte] = (byte) d0_257;
				word32 d1_261;
				word32 d2_262;
				word32 d7_263;
				word32 a2_264;
				fn000054A2(d0_257, d7_256, out d1_261, out d2_262, out d7_263, out a2_264);
			}
			else
				Mem268[0x00010737:byte] = 0x00;
			Mem81[fp - 0x00000020:word32] = a6;
			word32 a6_83 = Mem81[0x0001072A:word32];
			(a6_83 + -228)();
			word32 v76_162 = Mem81[fp - 0x00000020:word32];
			Mem166[v76_162 + 68:word32] = 0xFFFFFFFF;
			word16 v78_167 = (word16) d7 << 0x0006;
			word16 v80_171 = (word16) d6 + (word16) d6;
			word32 d6_172 = DPB(d6, v80_171, 0, 16);
			word16 v81_173 = (word16) d6_172;
			word32 d0_175 = DPB(d0_75, v81_173, 0, 16) *u (word16) d5;
			word16 v82_176 = (word16) d0_175 - (word16) d6_172;
			word32 d0_177 = DPB(d0_175, v82_176, 0, 16);
			word16 v83_178 = (word16) d0_177;
			Mem179[v76_162 + 100:word16] = v83_178;
			Mem181[v76_162 + 98:word16] = 0x0000;
			Mem183[v76_162 + 102:word16] = 0x0000;
			Mem185[v76_162 + 64:word32] = 0x09F00000;
			Mem187[v76_162 + 80:word32] = a0;
			Mem189[v76_162 + 84:word32] = a2;
			word16 v79_169 = (word16) DPB(d7, v78_167, 0, 16) + (word16) d6;
			word32 d7_170 = DPB(d7, v79_169, 0, 16);
			word16 v89_190 = (word16) d7_170;
			Mem191[v76_162 + 88:word16] = v89_190;
			word16 v90_192 = (word16) a0 + (word16) d6_172;
			word16 v91_194 = (word16) d5 - 0x0002;
			word32 a0_193 = DPB(a0, v90_192, 0, 16);
			word32 d5_195 = DPB(d5, v91_194, 0, 16);
			if (v91_194 >= 0x0000)
			{
				Mem225[fp - 0x00000020:word32] = v76_162;
				word32 a6_227 = Mem225[0x0001072A:word32];
				(a6_227 + -228)();
				word32 v93_228 = Mem225[fp - 0x00000020:word32];
				Mem232[v93_228 + 64:word16] = 0x0DFC;
				word32 a7_229 = fp - 0x0000001C;
				word32 a6_230 = v93_228;
				do
				{
					word32 a7_236 = a7_229 - 0x00000004;
					Mem238[a7_236 + 0x00000000:word32] = a6_230;
					word32 a6_240 = Mem238[0x0001072A:word32];
					(a6_240 + -228)();
					word32 v96_241 = Mem238[a7_236 + 0x00000000:word32];
					Mem245[v96_241 + 80:word32] = a0_193;
					Mem247[v96_241 + 76:word32] = a2;
					Mem249[v96_241 + 84:word32] = a2;
					Mem251[v96_241 + 88:word16] = (word16) d7_170;
					a7_229 = a7_236 + 0x00000004;
					a6_230 = v96_241;
				} while (d5_195 != 0x00000000);
			}
			return d2;
		}
	}
	else
	{
		word16 v15_285 = (word16) d6;
		word32 d0_286 = DPB(d0, v15_285, 0, 16);
		word16 v16_287 = (word16) d0_286 + (word16) d0_286;
		word32 d0_290 = DPB(d0, v16_287, 0, 16) *u (word16) d7;
		if (d0_290 >u 0x000000C0)
		{
			word32 d7_422;
			word32 d0_423 = fn0000490C(d0_290, d1, out d7_422);
			Mem425[0x00010737:byte] = (byte) d0_423;
			word32 d1_427;
			word32 d2_428;
			word32 d7_429;
			word32 a2_430;
			fn000054A2(d0_423, d7_422, out d1_427, out d2_428, out d7_429, out a2_430);
		}
		else
			Mem434[0x00010737:byte] = 0x00;
		Mem296[fp - 0x0000001C:word32] = a6;
		word32 a6_298 = Mem296[0x0001072A:word32];
		(a6_298 + -228)();
		word32 v26_304 = Mem296[fp - 0x0000001C:word32];
		Mem308[v26_304 + 68:word32] = 0xFFFFFFFF;
		word16 v28_309 = (word16) d7 << 0x0006;
		word16 v30_313 = (word16) d6 + (word16) d6;
		word32 d6_314 = DPB(d6, v30_313, 0, 16);
		word16 v31_316 = (word16) d6_314;
		word32 d0_317 = DPB(d0_290, v31_316, 0, 16);
		word16 v32_319 = (word16) (d0_317 *u 0x0007);
		Mem320[v26_304 + 100:word16] = v32_319;
		word16 v33_321 = (word16) (d0_317 *u 0x0007);
		Mem322[v26_304 + 98:word16] = v33_321;
		word16 v34_323 = (word16) (d0_317 *u 0x0007);
		Mem324[v26_304 + 96:word16] = v34_323;
		Mem326[v26_304 + 102:word16] = 0x0000;
		Mem328[v26_304 + 64:word32] = 0x0FFE0000;
		Mem330[v26_304 + 80:word32] = a0;
		word16 v38_331 = (word16) a0 + (word16) d6_314;
		word32 a0_332 = DPB(a0, v38_331, 0, 16);
		Mem334[v26_304 + 76:word32] = a0_332;
		word16 v40_335 = (word16) a0_332 + (word16) d6_314;
		word32 a0_336 = DPB(a0, v40_335, 0, 16);
		Mem338[v26_304 + 72:word32] = a0_336;
		Mem342[v26_304 + 84:word32] = a2;
		word16 v29_311 = (word16) DPB(d7, v28_309, 0, 16) + (word16) d6;
		word32 d7_312 = DPB(d7, v29_311, 0, 16);
		word16 v44_343 = (word16) d7_312;
		Mem344[v26_304 + 88:word16] = v44_343;
		Mem347[fp - 0x0000001C:word32] = v26_304;
		word16 v42_339 = (word16) a0_336 + (word16) d6_314;
		word32 a0_340 = DPB(a0, v42_339, 0, 16);
		word32 a6_349 = Mem347[0x0001072A:word32];
		(a6_349 + -228)();
		word32 v46_350 = Mem347[fp - 0x0000001C:word32];
		Mem354[v46_350 + 96:word16] = 0x0000;
		Mem356[v46_350 + 80:word32] = a0_340;
		word16 v49_357 = (word16) a0_340 + (word16) d6_314;
		word32 a0_358 = DPB(a0, v49_357, 0, 16);
		Mem360[v46_350 + 76:word32] = a0_358;
		Mem364[v46_350 + 72:word32] = a2;
		Mem366[v46_350 + 84:word32] = a2;
		word16 v54_367 = (word16) d7_312;
		Mem368[v46_350 + 88:word16] = v54_367;
		Mem371[fp - 0x0000001C:word32] = v46_350;
		word16 v51_361 = (word16) a0_358 + (word16) d6_314;
		word32 a0_362 = DPB(a0, v51_361, 0, 16);
		word32 a6_373 = Mem371[0x0001072A:word32];
		(a6_373 + -228)();
		word32 v56_374 = Mem371[fp - 0x0000001C:word32];
		Mem378[v56_374 + 80:word32] = a0_362;
		word16 v58_379 = (word16) a0_362 + (word16) d6_314;
		word32 a0_380 = DPB(a0, v58_379, 0, 16);
		Mem382[v56_374 + 76:word32] = a0_380;
		Mem386[v56_374 + 72:word32] = a2;
		Mem388[v56_374 + 84:word32] = a2;
		word16 v63_389 = (word16) d7_312;
		Mem390[v56_374 + 88:word16] = v63_389;
		Mem393[fp - 0x0000001C:word32] = v56_374;
		word16 v60_383 = (word16) a0_380 + (word16) d6_314;
		word32 a0_384 = DPB(a0, v60_383, 0, 16);
		word32 a6_395 = Mem393[0x0001072A:word32];
		(a6_395 + -228)();
		word32 v65_396 = Mem393[fp - 0x0000001C:word32];
		Mem400[v65_396 + 64:word16] = 0x0BFA;
		Mem402[v65_396 + 80:word32] = a0_384;
		Mem404[v65_396 + 72:word32] = a2;
		Mem406[v65_396 + 84:word32] = a2;
		Mem408[v65_396 + 88:word16] = (word16) d7_312;
		return d2;
	}
}

void fn000039C6(word32 d0, word32 d1, word32 d2, word32 d3, word32 d4, word32 d5, word32 d6, word32 a4, word32 a6)
{
	fn000039D8(d0, d1, d2, d3, d4, d5, d6, 0x0002D8C6, a6);
	return;
}

void fn000039D8(word32 d0, word32 d1, word32 d2, word32 d3, word32 d4, word32 d5, word32 d6, word32 a4, word32 a6)
{
	word32 a6_46 = Mem0[0x0001072A:word32];
	(a6_46 + -228)();
	if ((word16) d2 - (word16) d0 <= 0x0000)
	{
		d0 = d2;
		d2 = d0;
	}
	if ((word16) d3 - (word16) d1 <= 0x0000)
	{
		d1 = d3;
		d3 = d1;
	}
	word32 a0_169 = Mem0[Mem0[0x00010738:word32]:word32];
	if ((word16) d0 - Mem0[a0_169 + 2:word16] <= 0x0000 && ((word16) d1 - Mem0[a0_169 + 6:word16] <= 0x0000 && ((word16) d2 - Mem0[a0_169 + 0x00000000:word16] >= 0x0000 && (word16) d3 - Mem0[a0_169 + 4:word16] >= 0x0000)))
	{
		if ((word16) d0 - Mem0[a0_169 + 0x00000000:word16] <= 0x0000)
			d0 = DPB(d2, Mem0[a0_169 + 0x00000000:word16], 0, 16);
		if ((word16) d1 - Mem0[a0_169 + 4:word16] <= 0x0000)
			d1 = DPB(d3, Mem0[a0_169 + 4:word16], 0, 16);
		if ((word16) d2 - Mem0[a0_169 + 2:word16] > 0x0000)
			d2 = DPB(d2, Mem0[a0_169 + 2:word16], 0, 16);
		if ((word16) d3 - Mem0[a0_169 + 6:word16] >= 0x0000)
			d3 = DPB(d3, Mem0[a0_169 + 6:word16], 0, 16);
		word16 v42_251 = (word16) d2;
		word16 v40_247 = (word16) d0;
		word32 d2_262 = DPB(d2, (word16) DPB(d2, (word16) d2 - (word16) d0, 0, 16) + 0x0001, 0, 16);
		word32 d1_278 = DPB(d1, (word16) DPB(d1, v42_251, 0, 16) >>u 0x0004, 0, 16);
		word16 wLoc42_248 = v40_247;
		word16 v41_249 = (word16) d1;
		word16 v49_263 = (word16) d2_262;
		word16 v52_269 = (word16) DPB(d3, (word16) DPB(d3, (word16) d3 - (word16) d1, 0, 16) + 0x0001, 0, 16);
		if ((word16) d1_278 - (word16) DPB(d0, (word16) DPB(d0, v40_247, 0, 16) >>u 0x0004, 0, 16) == 0x0000)
		{
			word32 a1_284 = Mem0[0x000154E8:word32];
			word32 d0_286 = DPB(d0, v40_247, 0, 16);
			word32 d1_288 = DPB(d1, v41_249, 0, 16);
			word32 d3_290;
			word32 d2_291 = fn000015A0(d0_286, d1_288, d2_262, out d3_290);
			word32 d3_304 = DPB(d3_290, (word16) DPB(d3_290, v42_251, 0, 16) & 0x000F, 0, 16);
			word32 d2_293 = fn00003E02(d0_286, d1_288, d2_291, fp - 66);
			word32 d3_306 = DPB(d3_290, (word16) d3_304 + (word16) d3_304, 0, 16);
			word32 d6_313;
			fn00003C08(DPB(d0, (word16) DPB(d0, Mem0[0x0002D854 + DPB(d3_290, (word16) d3_290 + (word16) d3_290, 0, 16):word16], 0, 16) & Mem0[0x0002D876 + d3_306:word16], 0, 16), d1_288, d2_293, d3_306, d4, d5, d6, 0x000304F4 + d2_293, a1_284 + d2_291, a4, fp - 66, out d6_313);
		}
		else
		{
			word16 v69_319 = v49_263 - (word16) DPB(d0, (word16) DPB(d0, v42_251, 0, 16) & 0x000F, 0, 16);
			word16 v71_324 = (word16) DPB(d0, v40_247, 0, 16) & 0x000F;
			word16 wLoc38_320 = v69_319;
			word32 d0_325 = DPB(d0, v71_324, 0, 16);
			if (v71_324 != 0x0000)
			{
				word32 a1_508 = Mem0[0x000154E8:word32];
				word32 d0_510 = DPB(d0, v40_247, 0, 16);
				d1_278 = DPB(d1, v41_249, 0, 16);
				word32 d3_514;
				word32 d2_515 = fn000015A0(d0_510, d1_278, d2_262, out d3_514);
				d2_262 = fn00003E02(d0_510, d1_278, d2_515, fp - 66);
				word32 d3_521 = DPB(d3_514, (word16) d3_514 + (word16) d3_514, 0, 16);
				d0_325 = DPB(d0, (word16) DPB(d0, (word16) DPB(d0, v40_247, 0, 16) & 0xFFF0, 0, 16) + 0x0010, 0, 16);
				wLoc38_320 = v69_319 + (word16) DPB(d0, (word16) d0_325 - 0x0010, 0, 16);
				d5 = fn00003C08(DPB(d0, Mem0[0x0002D854 + d3_521:word16], 0, 16), d1_278, d2_262, d3_521, d4, d5, d6, 0x000304F4 + d2_262, a1_508 + d2_515, a4, fp - 66, out d6);
				wLoc42_248 = (word16) d0_325;
			}
			word32 a1_340 = Mem0[0x000154E8:word32];
			word32 d0_342 = DPB(d0_325, wLoc42_248, 0, 16);
			word32 d1_344 = DPB(d1_278, v41_249, 0, 16);
			word32 d3_346;
			word32 d2_347 = fn000015A0(d0_342, d1_344, d2_262, out d3_346);
			word32 d2_349 = fn00003E02(d0_342, d1_344, d2_347, fp - 66);
			word32 d0_354 = DPB(d0_325, (word16) DPB(d0_325, v42_251, 0, 16) & 0x000F, 0, 16);
			word32 a1_348 = a1_340 + d2_347;
			word32 a0_350 = 0x000304F4 + d2_349;
			if ((word16) d0_354 - 0x000F == 0x0000)
				wLoc38_320 = wLoc38_320 + 0x0010;
			word16 v89_361 = (word16) DPB(d6, wLoc38_320, 0, 16) >>u 0x0004;
			word32 d6_362 = DPB(d6, v89_361, 0, 16);
			if (v89_361 != 0x0000)
			{
				word32 d7_429 = DPB(0x00000004, v52_269, 0, 16);
				word32 d7_431 = DPB(d7_429, (word16) d7_429 - 0x0001, 0, 16);
				d0_354 = DPB(d0_325, (word16) DPB(d0_325, (word16) DPB(d0_325, 0x00B0, 0, 16) - (word16) d6_362, 0, 16) - (word16) d6_362, 0, 16);
				d1_344 = DPB(d1_278, (word16) DPB(d1_278, (word16) DPB(d1_278, 0x0180, 0, 16) - (word16) d6_362, 0, 16) - (word16) d6_362, 0, 16);
				if (!__btst((byte) d6_362, 0x0000))
				{
l00003B84:
					do
					{
						d5 = DPB(d5, (word16) d6_362, 0, 16);
						do
						{
							word16 v97_458 = (word16) d5 - 0x0002;
							a0_350 = fn00003D64(a0_350, a1_348, a4, out a1_348);
							d5 = DPB(d5, v97_458, 0, 16);
						} while (v97_458 != 0x0000);
						a0_350 = DPB(a0_350, (word16) a0_350 + (word16) d0_354, 0, 16);
						a1_348 = DPB(a1_348, (word16) a1_348 + (word16) d1_344, 0, 16);
						d7_431 = d7_431 - 0x00000001;
					} while (d7_431 != 0xFFFFFFFF);
				}
				else
					do
					{
						word16 v108_476 = (word16) DPB(d5, (word16) d6_362, 0, 16) - 0x0001;
						word32 a1_474;
						word32 a0_475 = fn00003CCE(d0_354, d1_344, d2_349, d3_346, a0_350, a1_348, a4, out a1_474);
						d5 = DPB(d5, v108_476, 0, 16);
						if (v108_476 != 0x0000)
							do
							{
								word16 v109_495 = (word16) d5 - 0x0002;
								a0_475 = fn00003D64(a0_475, a1_474, a4, out a1_474);
								d5 = DPB(d5, v109_495, 0, 16);
							} while (v109_495 != 0x0000);
						a0_350 = DPB(a0_475, (word16) a0_475 + (word16) d0_354, 0, 16);
						a1_348 = DPB(a1_474, (word16) a1_474 + (word16) d1_344, 0, 16);
						d7_431 = d7_431 - 0x00000001;
					} while (d7_431 != 0xFFFFFFFF);
			}
			if ((word16) DPB(d0_354, (word16) DPB(d0_354, v42_251, 0, 16) & 0x000F, 0, 16) - 0x000F != 0x0000)
			{
				word32 a1_387 = Mem0[0x000154E8:word32];
				word32 d0_389 = DPB(d0_354, v42_251, 0, 16);
				word32 d1_391 = DPB(d1_344, v41_249, 0, 16);
				word32 d3_393;
				word32 d2_394 = fn000015A0(d0_389, d1_391, d2_349, out d3_393);
				word32 d2_396 = fn00003E02(d0_389, d1_391, d2_394, fp - 66);
				word32 d3_400 = DPB(d3_393, (word16) d3_393 + (word16) d3_393, 0, 16);
				word32 d6_405;
				word32 d5_406 = fn00003C08(DPB(d0_354, Mem0[0x0002D876 + d3_400:word16], 0, 16), d1_391, d2_396, d3_400, d4, d5, d6_362, 0x000304F4 + d2_396, a1_387 + d2_394, a4, fp - 66, out d6_405);
				word32 a1_408 = Mem0[0x000154E8:word32];
				word32 d0_410 = DPB(d0_354, v42_251, 0, 16);
				word32 d1_412 = DPB(d1_344, v41_249, 0, 16);
				word32 d3_414;
				word32 d2_415 = fn000015A0(d0_410, d1_412, d2_396, out d3_414);
				word32 d2_417 = fn00003E02(d0_410, d1_412, d2_415, fp - 66);
				word32 d3_421 = DPB(d3_414, (word16) d3_414 + (word16) d3_414, 0, 16);
				word32 d6_426;
				fn00003C08(DPB(d0_354, Mem0[0x0002D876 + d3_421:word16], 0, 16), d1_412, d2_417, d3_421, d4, d5_406, d6_405, 0x000304F4 + d2_417, a1_408 + d2_415, a4, fp - 66, out d6_426);
			}
		}
	}
	return;
}

word32 fn00003C08(word32 d0, word32 d1, word32 d2, word32 d3, word32 d4, word32 d5, word32 d6, word32 a0, word32 a1, word32 a4, word32 a5, ptr32 d6Out)
{
	word32 d7_9 = DPB(0x00000004, Mem0[a5 + 12:word16], 0, 16);
	word32 d5_3 = DPB(d5, 0x00AE, 0, 16);
	word32 d6_5 = DPB(d6, 0x017E, 0, 16);
	*d6Out = d6_5;
	word32 d7_11 = DPB(d7_9, (word16) d7_9 - 0x0001, 0, 16);
	do
	{
		word32 a1_24;
		word32 a0_25 = fn00003C26(d0, d1, d2, d3, d4, a0, a1, a4, out a1_24);
		a0 = DPB(a0_25, (word16) a0_25 + (word16) d5_3, 0, 16);
		a1 = DPB(a1_24, (word16) a1_24 + (word16) d6_5, 0, 16);
		d7_11 = d7_11 - 0x00000001;
	} while (d7_11 != 0xFFFFFFFF);
	return d5_3;
}

word32 fn00003C26(word32 d0, word32 d1, word32 d2, word32 d3, word32 d4, word32 a0, word32 a1, word32 a4, ptr32 a1Out)
{
	word32 d4_27 = DPB(d4, (word16) d0, 0, 16);
	word32 d0_137 = DPB(d0, (word16) DPB(d0, Mem0[a0 + 0x00000000:word16], 0, 16) & (word16) d4_27, 0, 16);
	word32 d1_127 = DPB(d1, (word16) DPB(d1, Mem0[a0 + 44:word16], 0, 16) & (word16) d4_27, 0, 16);
	word32 d2_117 = DPB(d2, (word16) DPB(d2, Mem0[a0 + 88:word16], 0, 16) & (word16) d4_27, 0, 16);
	word32 d3_107 = DPB(d3, (word16) DPB(d3, Mem0[a0 + 132:word16], 0, 16) & (word16) d4_27, 0, 16);
	word32 d6_145 = 0;
	word32 d7_147 = 7;
	do
	{
		byte v25_57 = (byte) d6_145 + (byte) d6_145;
		word32 d6_58 = (word32) v25_57;
		byte v30_67 = (byte) d6_58 + (byte) d6_58;
		word16 v28_61 = (word16) d3_223 + (word16) d3_223 + (v25_57 <u 0x00);
		word32 d6_68 = DPB(d6_58, v30_67, 0, 8);
		byte v33_77 = (byte) d6_68 + (byte) d6_68;
		word16 v31_71 = (word16) d2_222 + (word16) d2_222 + (v30_67 <u 0x00);
		word32 d5_66 = (word32) cond(v28_61);
		word32 d6_78 = DPB(d6_58, v33_77, 0, 8);
		word16 v34_81 = (word16) d1_221 + (word16) d1_221 + (v33_77 <u 0x00);
		word32 d5_76 = DPB(d5_66, (word16) d5_66 + (word16) d5_66 + (v31_71 <u 0x0000), 0, 16);
		word16 v37_90 = (word16) d0_220 + (word16) d0_220 + ((byte) d6_78 + (byte) d6_78 <u 0x00);
		word32 d5_86 = DPB(d5_66, (word16) d5_76 + (word16) d5_76 + (v34_81 <u 0x0000), 0, 16);
		word32 d5_95 = DPB(d5_66, (word16) d5_86 + (word16) d5_86 + (v37_90 <u 0x0000), 0, 16);
		word32 d5_100 = DPB(d5_95, (byte) DPB(d5_95, Mem0[a4 + d5_95:byte], 0, 8) << 0x04, 0, 8);
		byte v42_102 = (byte) d5_100 + (byte) d5_100;
		word32 d3_62 = DPB(d3_223, v28_61, 0, 16);
		word32 d5_103 = DPB(d5_95, v42_102, 0, 8);
		byte v45_112 = (byte) d5_103 + (byte) d5_103;
		word32 d2_72 = DPB(d2_222, v31_71, 0, 16);
		word16 v43_106 = (word16) d3_62 + (word16) d3_62 + (v42_102 <u 0x00);
		word32 d5_113 = DPB(d5_95, v45_112, 0, 8);
		byte v48_122 = (byte) d5_113 + (byte) d5_113;
		word32 d1_82 = DPB(d1_221, v34_81, 0, 16);
		word16 v46_116 = (word16) d2_72 + (word16) d2_72 + (v45_112 <u 0x00);
		word32 d6_111 = (word32) cond(v43_106);
		word32 d5_123 = DPB(d5_95, v48_122, 0, 8);
		word32 d0_91 = DPB(d0_220, v37_90, 0, 16);
		word16 v49_126 = (word16) d1_82 + (word16) d1_82 + (v48_122 <u 0x00);
		word32 d6_121 = DPB(d6_111, (word16) d6_111 + (word16) d6_111 + (v46_116 <u 0x0000), 0, 16);
		word16 v52_136 = (word16) d0_91 + (word16) d0_91 + ((byte) d5_123 + (byte) d5_123 <u 0x00);
		word32 d6_131 = DPB(d6_111, (word16) d6_121 + (word16) d6_121 + (v49_126 <u 0x0000), 0, 16);
		word32 d6_141 = DPB(d6_111, (word16) d6_131 + (word16) d6_131 + (v52_136 <u 0x0000), 0, 16);
		d3_107 = DPB(d3_223, v43_106, 0, 16);
		d2_117 = DPB(d2_222, v46_116, 0, 16);
		d1_127 = DPB(d1_221, v49_126, 0, 16);
		d0_137 = DPB(d0_220, v52_136, 0, 16);
		d6_145 = DPB(d6_141, (byte) DPB(d6_141, Mem0[a4 + d6_141:byte], 0, 8) << 0x04, 0, 8);
		d7_147 = d7_147 - 0x00000001;
		word32 d0_220 = d0_137;
		word32 d1_221 = d1_127;
		word32 d2_222 = d2_117;
		word32 d3_223 = d3_107;
	} while (d7_147 != 0xFFFFFFFF);
	byte v56_148 = (byte) d6_145 + (byte) d6_145;
	word32 d6_149 = DPB(d6_141, v56_148, 0, 8);
	byte v58_154 = (byte) d6_149 + (byte) d6_149;
	word32 d6_155 = DPB(d6_141, v58_154, 0, 8);
	byte v60_160 = (byte) d6_155 + (byte) d6_155;
	Mem174[a1 + 192:word16] = Mem0[a1 + 192:word16] | (word16) d4_27;
	Mem176[a1 + 240:word16] = Mem174[a1 + 240:word16] | (word16) d4_27;
	Mem178[a1 + 288:word16] = Mem176[a1 + 288:word16] | (word16) d4_27;
	Mem180[a1 + 336:word16] = Mem178[a1 + 336:word16] | (word16) d4_27;
	word32 d4_182 = DPB(d4, ~(word16) d4_27, 0, 16);
	Mem184[a1 + 48:word16] = Mem180[a1 + 48:word16] & (word16) d4_182;
	Mem186[a1 + 48:word16] = Mem184[a1 + 48:word16] | (word16) DPB(d1_221, ((word16) d1_127 + (word16) d1_127) + (v60_160 <u 0x00), 0, 16);
	Mem188[a1 + 96:word16] = Mem186[a1 + 96:word16] & (word16) d4_182;
	Mem190[a1 + 96:word16] = Mem188[a1 + 96:word16] | (word16) DPB(d2_222, ((word16) d2_117 + (word16) d2_117) + (v58_154 <u 0x00), 0, 16);
	Mem192[a1 + 144:word16] = Mem190[a1 + 144:word16] & (word16) d4_182;
	Mem194[a1 + 144:word16] = Mem192[a1 + 144:word16] | (word16) DPB(d3_223, ((word16) d3_107 + (word16) d3_107) + (v56_148 <u 0x00), 0, 16);
	Mem196[a1 + 0x00000000:word16] = Mem194[a1 + 0x00000000:word16] & (word16) d4_182;
	word32 d6_161 = DPB(d6_141, v60_160, 0, 8);
	Mem198[a1 + 0x00000000:word16] = Mem196[a1 + 0x00000000:word16] | (word16) DPB(d0_220, ((word16) d0_137 + (word16) d0_137) + ((byte) d6_161 + (byte) d6_161 <u 0x00), 0, 16);
	word32 a1_199;
	*a1Out = a1 + 0x00000002;
	return a0 + 0x00000002;
}

word32 fn00003CCE(word32 d0, word32 d1, word32 d2, word32 d3, word32 a0, word32 a1, word32 a4, ptr32 a1Out)
{
	word32 d1_114 = DPB(d1, Mem0[a0 + 44:word16], 0, 16);
	word32 d2_104 = DPB(d2, Mem0[a0 + 88:word16], 0, 16);
	word32 d3_30 = DPB(d3, Mem0[a0 + 132:word16], 0, 16);
	word32 d0_124 = DPB(d0, Mem0[a0 + 0x00000000:word16], 0, 16);
	word32 d6_132 = 0;
	word32 d7_134 = 7;
	do
	{
		byte v16_44 = (byte) d6_132 + (byte) d6_132;
		word32 d6_45 = (word32) v16_44;
		byte v21_54 = (byte) d6_45 + (byte) d6_45;
		word16 v19_48 = (word16) d3_196 + (word16) d3_196 + (v16_44 <u 0x00);
		word32 d6_55 = DPB(d6_45, v21_54, 0, 8);
		byte v24_64 = (byte) d6_55 + (byte) d6_55;
		word16 v22_58 = (word16) d2_195 + (word16) d2_195 + (v21_54 <u 0x00);
		word32 d5_53 = (word32) cond(v19_48);
		word32 d6_65 = DPB(d6_45, v24_64, 0, 8);
		word16 v25_68 = (word16) d1_194 + (word16) d1_194 + (v24_64 <u 0x00);
		word32 d5_63 = DPB(d5_53, (word16) d5_53 + (word16) d5_53 + (v22_58 <u 0x0000), 0, 16);
		word16 v28_77 = (word16) d0_193 + (word16) d0_193 + ((byte) d6_65 + (byte) d6_65 <u 0x00);
		word32 d5_73 = DPB(d5_53, (word16) d5_63 + (word16) d5_63 + (v25_68 <u 0x0000), 0, 16);
		word32 d5_82 = DPB(d5_53, (word16) d5_73 + (word16) d5_73 + (v28_77 <u 0x0000), 0, 16);
		word32 d5_87 = DPB(d5_82, (byte) DPB(d5_82, Mem0[a4 + d5_82:byte], 0, 8) << 0x04, 0, 8);
		byte v33_89 = (byte) d5_87 + (byte) d5_87;
		word32 d3_49 = DPB(d3_196, v19_48, 0, 16);
		word32 d5_90 = DPB(d5_82, v33_89, 0, 8);
		byte v36_99 = (byte) d5_90 + (byte) d5_90;
		word32 d2_59 = DPB(d2_195, v22_58, 0, 16);
		word16 v34_93 = (word16) d3_49 + (word16) d3_49 + (v33_89 <u 0x00);
		word32 d5_100 = DPB(d5_82, v36_99, 0, 8);
		byte v39_109 = (byte) d5_100 + (byte) d5_100;
		word32 d1_69 = DPB(d1_194, v25_68, 0, 16);
		word16 v37_103 = (word16) d2_59 + (word16) d2_59 + (v36_99 <u 0x00);
		word32 d6_98 = (word32) cond(v34_93);
		word32 d5_110 = DPB(d5_82, v39_109, 0, 8);
		word32 d0_78 = DPB(d0_193, v28_77, 0, 16);
		word16 v40_113 = (word16) d1_69 + (word16) d1_69 + (v39_109 <u 0x00);
		word32 d6_108 = DPB(d6_98, (word16) d6_98 + (word16) d6_98 + (v37_103 <u 0x0000), 0, 16);
		word16 v43_123 = (word16) d0_78 + (word16) d0_78 + ((byte) d5_110 + (byte) d5_110 <u 0x00);
		word32 d6_118 = DPB(d6_98, (word16) d6_108 + (word16) d6_108 + (v40_113 <u 0x0000), 0, 16);
		word32 d6_128 = DPB(d6_98, (word16) d6_118 + (word16) d6_118 + (v43_123 <u 0x0000), 0, 16);
		d3_30 = DPB(d3_196, v34_93, 0, 16);
		d2_104 = DPB(d2_195, v37_103, 0, 16);
		d1_114 = DPB(d1_194, v40_113, 0, 16);
		d0_124 = DPB(d0_193, v43_123, 0, 16);
		d6_132 = DPB(d6_128, (byte) DPB(d6_128, Mem0[a4 + d6_128:byte], 0, 8) << 0x04, 0, 8);
		d7_134 = d7_134 - 0x00000001;
		word32 d0_193 = d0_124;
		word32 d1_194 = d1_114;
		word32 d2_195 = d2_104;
		word32 d3_196 = d3_30;
	} while (d7_134 != 0xFFFFFFFF);
	byte v47_135 = (byte) d6_132 + (byte) d6_132;
	word32 d6_136 = DPB(d6_128, v47_135, 0, 8);
	byte v49_141 = (byte) d6_136 + (byte) d6_136;
	word32 d6_142 = DPB(d6_128, v49_141, 0, 8);
	byte v51_147 = (byte) d6_142 + (byte) d6_142;
	Mem160[a1 + 192:word16] = 0xFFFF;
	Mem163[a1 + 240:word16] = 0xFFFF;
	Mem165[a1 + 288:word16] = 0xFFFF;
	Mem167[a1 + 336:word16] = 0xFFFF;
	Mem169[a1 + 48:word16] = (word16) DPB(d1_194, (word16) d1_114 + (word16) d1_114 + (v51_147 <u 0x00), 0, 16);
	Mem171[a1 + 96:word16] = (word16) DPB(d2_195, (word16) d2_104 + (word16) d2_104 + (v49_141 <u 0x00), 0, 16);
	Mem173[a1 + 144:word16] = (word16) DPB(d3_196, (word16) d3_30 + (word16) d3_30 + (v47_135 <u 0x00), 0, 16);
	word32 d6_148 = DPB(d6_128, v51_147, 0, 8);
	Mem175[a1 + 0x00000000:word16] = (word16) DPB(d0_193, (word16) d0_124 + (word16) d0_124 + ((byte) d6_148 + (byte) d6_148 <u 0x00), 0, 16);
	word32 a1_176;
	*a1Out = a1 + 0x00000002;
	return a0 + 0x00000002;
}

word32 fn00003D64(word32 a0, word32 a1, word32 a4, ptr32 a1Out)
{
	word32 d1_104 = Mem0[a0 + 44:word32];
	word32 d2_26 = Mem0[a0 + 88:word32];
	word32 d3_27 = Mem0[a0 + 132:word32];
	word32 d0_113 = Mem0[a0 + 0x00000000:word32];
	word32 d6_121 = 0;
	word32 d7_123 = 15;
	do
	{
		byte v13_41 = (byte) d6_121 + (byte) d6_121;
		word32 d6_42 = (word32) v13_41;
		word32 d3_45 = d3_27 * 0x00000002 + (v13_41 <u 0x00);
		byte v17_50 = (byte) d6_42 + (byte) d6_42;
		word32 d6_51 = DPB(d6_42, v17_50, 0, 8);
		word32 d5_49 = (word32) cond(d3_45);
		word32 d2_54 = d2_26 * 0x00000002 + (v17_50 <u 0x00);
		byte v19_59 = (byte) d6_51 + (byte) d6_51;
		word32 d5_58 = DPB(d5_49, (word16) d5_49 + (word16) d5_49 + (d2_54 <u 0x00000000), 0, 16);
		word32 d1_63 = d1_104 * 0x00000002 + (v19_59 <u 0x00);
		word32 d6_60 = DPB(d6_42, v19_59, 0, 8);
		word32 d5_67 = DPB(d5_49, (word16) d5_58 + (word16) d5_58 + (d1_63 <u 0x00000000), 0, 16);
		word32 d0_71 = d0_113 * 0x00000002 + ((byte) d6_60 + (byte) d6_60 <u 0x00);
		word32 d5_75 = DPB(d5_49, (word16) d5_67 + (word16) d5_67 + (d0_71 <u 0x00000000), 0, 16);
		word32 d5_80 = DPB(d5_75, (byte) DPB(d5_75, Mem0[a4 + d5_75:byte], 0, 8) << 0x04, 0, 8);
		byte v26_82 = (byte) d5_80 + (byte) d5_80;
		word32 d5_83 = DPB(d5_75, v26_82, 0, 8);
		d3_27 = d3_45 * 0x00000002 + (v26_82 <u 0x00);
		byte v28_91 = (byte) d5_83 + (byte) d5_83;
		word32 d5_92 = DPB(d5_75, v28_91, 0, 8);
		word32 d6_90 = (word32) cond(d3_27);
		d2_26 = d2_54 * 0x00000002 + (v28_91 <u 0x00);
		byte v30_100 = (byte) d5_92 + (byte) d5_92;
		word32 d6_99 = DPB(d6_90, (word16) d6_90 + (word16) d6_90 + (d2_26 <u 0x00000000), 0, 16);
		d1_104 = d1_63 * 0x00000002 + (v30_100 <u 0x00);
		word32 d5_101 = DPB(d5_75, v30_100, 0, 8);
		word32 d6_108 = DPB(d6_90, (word16) d6_99 + (word16) d6_99 + (d1_104 <u 0x00000000), 0, 16);
		d0_113 = d0_71 * 0x00000002 + ((byte) d5_101 + (byte) d5_101 <u 0x00);
		word32 d6_117 = DPB(d6_90, (word16) d6_108 + (word16) d6_108 + (d0_113 <u 0x00000000), 0, 16);
		d6_121 = DPB(d6_117, (byte) DPB(d6_117, Mem0[a4 + d6_117:byte], 0, 8) << 0x04, 0, 8);
		d7_123 = d7_123 - 0x00000001;
	} while (d7_123 != 0xFFFFFFFF);
	byte v36_124 = (byte) d6_121 + (byte) d6_121;
	word32 d6_125 = DPB(d6_117, v36_124, 0, 8);
	byte v37_129 = (byte) d6_125 + (byte) d6_125;
	word32 d6_130 = DPB(d6_117, v37_129, 0, 8);
	byte v38_134 = (byte) d6_130 + (byte) d6_130;
	Mem145[a1 + 192:word32] = 0xFFFFFFFF;
	Mem148[a1 + 240:word32] = 0xFFFFFFFF;
	Mem150[a1 + 288:word32] = 0xFFFFFFFF;
	Mem152[a1 + 336:word32] = 0xFFFFFFFF;
	Mem154[a1 + 48:word32] = d1_104 * 0x00000002 + (v38_134 <u 0x00);
	Mem156[a1 + 96:word32] = d2_26 * 0x00000002 + (v37_129 <u 0x00);
	Mem158[a1 + 144:word32] = d3_27 * 0x00000002 + (v36_124 <u 0x00);
	word32 d6_135 = DPB(d6_117, v38_134, 0, 8);
	Mem160[a1 + 0x00000000:word32] = d0_113 * 0x00000002 + ((byte) d6_135 + (byte) d6_135 <u 0x00);
	word32 a1_161;
	*a1Out = a1 + 0x00000004;
	return a0 + 0x00000004;
}

word32 fn00003E02(word32 d0, word32 d1, word32 d2, word32 a5)
{
	word32 d2_16 = DPB(d2, (word16) DPB(d1, (word16) d1 - Mem0[a5 + 16:word16], 0, 16), 0, 16);
	return DPB(d2_16 *u 0x00B0 *u 0x00B0, (word16) (d2_16 *u 0x00B0) + (word16) DPB(d0, (word16) DPB(d0, (word16) DPB(d0, (word16) d0 - Mem0[a5 + 14:word16], 0, 16) & 0xFFF0, 0, 16) >>u 0x0003, 0, 16), 0, 16);
}

void fn00003E22(word32 d0, word32 d1, word32 d2, word32 d3, word32 d4, word32 d5, word32 d6, word32 a6)
{
	word32 a6_46 = Mem0[0x0001072A:word32];
	(a6_46 + -228)();
	if ((word16) d2 - (word16) d0 <= 0x0000)
	{
		d0 = d2;
		d2 = d0;
	}
	if ((word16) d3 - (word16) d1 <= 0x0000)
	{
		d1 = d3;
		d3 = d1;
	}
	word32 a0_168 = Mem0[Mem0[0x00010738:word32]:word32];
	if ((word16) d0 - Mem0[a0_168 + 2:word16] <= 0x0000 && ((word16) d1 - Mem0[a0_168 + 6:word16] <= 0x0000 && ((word16) d2 - Mem0[a0_168 + 0x00000000:word16] >= 0x0000 && (word16) d3 - Mem0[a0_168 + 4:word16] >= 0x0000)))
	{
		if ((word16) d0 - Mem0[a0_168 + 0x00000000:word16] <= 0x0000)
			d0 = (word32) Mem0[a0_168 + 0x00000000:word16];
		if ((word16) d1 - Mem0[a0_168 + 4:word16] <= 0x0000)
			d1 = (word32) Mem0[a0_168 + 4:word16];
		if ((word16) d2 - Mem0[a0_168 + 2:word16] > 0x0000)
			d2 = DPB(d2, Mem0[a0_168 + 2:word16], 0, 16);
		if ((word16) d3 - Mem0[a0_168 + 6:word16] >= 0x0000)
			d3 = DPB(d3, Mem0[a0_168 + 6:word16], 0, 16);
		word16 v40_246 = (word16) d0;
		word16 v42_250 = (word16) d2;
		word32 d1_275 = (word32) v42_250;
		word32 d2_261 = DPB(d2, (word16) DPB(d2, (word16) d2 - (word16) d0, 0, 16) + 0x0001, 0, 16);
		word32 d0_271 = (word32) v40_246;
		word32 d1_277 = DPB(d1_275, (word16) d1_275 >>u 0x0004, 0, 16);
		word16 wLoc42_247 = v40_246;
		word16 v41_248 = (word16) d1;
		word16 v49_262 = (word16) d2_261;
		word16 v52_268 = (word16) DPB(d3, (word16) DPB(d3, (word16) d3 - (word16) d1, 0, 16) + 0x0001, 0, 16);
		if ((word16) d1_277 - (word16) DPB(d0_271, (word16) d0_271 >>u 0x0004, 0, 16) == 0x0000)
		{
			word32 a1_283 = Mem0[0x000154E8:word32];
			word32 d0_285 = DPB(d0_271, v40_246, 0, 16);
			word32 d1_287 = DPB(d1_275, v41_248, 0, 16);
			word32 d3_289;
			word32 d2_290 = fn000015A0(d0_285, d1_287, d2_261, out d3_289);
			word32 d3_303 = DPB(d3_289, (word16) DPB(d3_289, v42_250, 0, 16) & 0x000F, 0, 16);
			word32 d2_292 = fn00003E02(d0_285, d1_287, d2_290, fp - 66);
			word32 d3_305 = DPB(d3_289, (word16) d3_303 + (word16) d3_303, 0, 16);
			word32 d6_312;
			fn00004052(DPB(d0_271, (word16) DPB(d0_271, Mem0[0x0002D854 + DPB(d3_289, (word16) d3_289 + (word16) d3_289, 0, 16):word16], 0, 16) & Mem0[0x0002D876 + d3_305:word16], 0, 16), d1_287, d2_292, d3_305, d4, d5, d6, 0x000304F4 + d2_292, a1_283 + d2_290, fp - 66, out d6_312);
		}
		else
		{
			word16 v69_318 = v49_262 - (word16) DPB(d0_271, (word16) DPB(d0_271, v42_250, 0, 16) & 0x000F, 0, 16);
			word16 v71_323 = (word16) DPB(d0_271, v40_246, 0, 16) & 0x000F;
			word16 wLoc38_319 = v69_318;
			word32 d0_324 = DPB(d0_271, v71_323, 0, 16);
			if (v71_323 != 0x0000)
			{
				word32 a1_507 = Mem0[0x000154E8:word32];
				word32 d0_509 = DPB(d0_271, v40_246, 0, 16);
				d1_277 = DPB(d1_275, v41_248, 0, 16);
				word32 d3_513;
				word32 d2_514 = fn000015A0(d0_509, d1_277, d2_261, out d3_513);
				d2_261 = fn00003E02(d0_509, d1_277, d2_514, fp - 66);
				word32 d3_520 = DPB(d3_513, (word16) d3_513 + (word16) d3_513, 0, 16);
				d0_324 = DPB(d0_271, (word16) DPB(d0_271, (word16) DPB(d0_271, v40_246, 0, 16) & 0xFFF0, 0, 16) + 0x0010, 0, 16);
				wLoc38_319 = v69_318 + (word16) DPB(d0_271, (word16) d0_324 - 0x0010, 0, 16);
				d5 = fn00004052(DPB(d0_271, Mem0[0x0002D854 + d3_520:word16], 0, 16), d1_277, d2_261, d3_520, d4, d5, d6, 0x000304F4 + d2_261, a1_507 + d2_514, fp - 66, out d6);
				wLoc42_247 = (word16) d0_324;
			}
			word32 a1_339 = Mem0[0x000154E8:word32];
			word32 d0_341 = DPB(d0_324, wLoc42_247, 0, 16);
			word32 d1_343 = DPB(d1_277, v41_248, 0, 16);
			word32 d3_345;
			word32 d2_346 = fn000015A0(d0_341, d1_343, d2_261, out d3_345);
			word32 d2_348 = fn00003E02(d0_341, d1_343, d2_346, fp - 66);
			word32 d0_353 = DPB(d0_324, (word16) DPB(d0_324, v42_250, 0, 16) & 0x000F, 0, 16);
			word32 a1_347 = a1_339 + d2_346;
			word32 a0_349 = 0x000304F4 + d2_348;
			if ((word16) d0_353 - 0x000F == 0x0000)
				wLoc38_319 = wLoc38_319 + 0x0010;
			word16 v89_360 = (word16) DPB(d6, wLoc38_319, 0, 16) >>u 0x0004;
			word32 d6_361 = DPB(d6, v89_360, 0, 16);
			if (v89_360 != 0x0000)
			{
				word32 d7_428 = DPB(0x00000004, v52_268, 0, 16);
				word32 d7_430 = DPB(d7_428, (word16) d7_428 - 0x0001, 0, 16);
				d0_353 = DPB(d0_324, (word16) DPB(d0_324, (word16) DPB(d0_324, 0x00B0, 0, 16) - (word16) d6_361, 0, 16) - (word16) d6_361, 0, 16);
				d1_343 = DPB(d1_277, (word16) DPB(d1_277, (word16) DPB(d1_277, 0x0180, 0, 16) - (word16) d6_361, 0, 16) - (word16) d6_361, 0, 16);
				if (!__btst((byte) d6_361, 0x0000))
				{
l00003FCE:
					do
					{
						d5 = DPB(d5, (word16) d6_361, 0, 16);
						do
						{
							word16 v97_457 = (word16) d5 - 0x0002;
							a0_349 = fn000040FE(a0_349, a1_347, out a1_347);
							d5 = DPB(d5, v97_457, 0, 16);
						} while (v97_457 != 0x0000);
						a0_349 = DPB(a0_349, (word16) a0_349 + (word16) d0_353, 0, 16);
						a1_347 = DPB(a1_347, (word16) a1_347 + (word16) d1_343, 0, 16);
						d7_430 = d7_430 - 0x00000001;
					} while (d7_430 != 0xFFFFFFFF);
				}
				else
					do
					{
						word16 v108_475 = (word16) DPB(d5, (word16) d6_361, 0, 16) - 0x0001;
						word32 a1_473;
						word32 a0_474 = fn000040C0(d0_353, d1_343, d2_348, d3_345, a0_349, a1_347, out a1_473);
						d5 = DPB(d5, v108_475, 0, 16);
						if (v108_475 != 0x0000)
							do
							{
								word16 v109_494 = (word16) d5 - 0x0002;
								a0_474 = fn000040FE(a0_474, a1_473, out a1_473);
								d5 = DPB(d5, v109_494, 0, 16);
							} while (v109_494 != 0x0000);
						a0_349 = DPB(a0_474, (word16) a0_474 + (word16) d0_353, 0, 16);
						a1_347 = DPB(a1_473, (word16) a1_473 + (word16) d1_343, 0, 16);
						d7_430 = d7_430 - 0x00000001;
					} while (d7_430 != 0xFFFFFFFF);
			}
			if ((word16) DPB(d0_353, (word16) DPB(d0_353, v42_250, 0, 16) & 0x000F, 0, 16) - 0x000F != 0x0000)
			{
				word32 a1_386 = Mem0[0x000154E8:word32];
				word32 d0_388 = DPB(d0_353, v42_250, 0, 16);
				word32 d1_390 = DPB(d1_343, v41_248, 0, 16);
				word32 d3_392;
				word32 d2_393 = fn000015A0(d0_388, d1_390, d2_348, out d3_392);
				word32 d2_395 = fn00003E02(d0_388, d1_390, d2_393, fp - 66);
				word32 d3_399 = DPB(d3_392, (word16) d3_392 + (word16) d3_392, 0, 16);
				word32 d6_404;
				word32 d5_405 = fn00004052(DPB(d0_353, Mem0[0x0002D876 + d3_399:word16], 0, 16), d1_390, d2_395, d3_399, d4, d5, d6_361, 0x000304F4 + d2_395, a1_386 + d2_393, fp - 66, out d6_404);
				word32 a1_407 = Mem0[0x000154E8:word32];
				word32 d0_409 = DPB(d0_353, v42_250, 0, 16);
				word32 d1_411 = DPB(d1_343, v41_248, 0, 16);
				word32 d3_413;
				word32 d2_414 = fn000015A0(d0_409, d1_411, d2_395, out d3_413);
				word32 d2_416 = fn00003E02(d0_409, d1_411, d2_414, fp - 66);
				word32 d3_420 = DPB(d3_413, (word16) d3_413 + (word16) d3_413, 0, 16);
				word32 d6_425;
				fn00004052(DPB(d0_353, Mem0[0x0002D876 + d3_420:word16], 0, 16), d1_411, d2_416, d3_420, d4, d5_405, d6_404, 0x000304F4 + d2_416, a1_407 + d2_414, fp - 66, out d6_425);
			}
		}
	}
	return;
}

word32 fn00004052(word32 d0, word32 d1, word32 d2, word32 d3, word32 d4, word32 d5, word32 d6, word32 a0, word32 a1, word32 a5, ptr32 d6Out)
{
	word32 d7_9 = DPB(0x00000004, Mem0[a5 + 12:word16], 0, 16);
	word32 d5_3 = DPB(d5, 0x00AE, 0, 16);
	word32 d6_5 = DPB(d6, 0x017E, 0, 16);
	*d6Out = d6_5;
	word32 d7_11 = DPB(d7_9, (word16) d7_9 - 0x0001, 0, 16);
	do
	{
		word32 a1_23;
		word32 a0_24 = fn00004070(d0, d1, d2, d3, d4, a0, a1, out a1_23);
		a0 = DPB(a0_24, (word16) a0_24 + (word16) d5_3, 0, 16);
		a1 = DPB(a1_23, (word16) a1_23 + (word16) d6_5, 0, 16);
		d7_11 = d7_11 - 0x00000001;
	} while (d7_11 != 0xFFFFFFFF);
	return d5_3;
}

word32 fn00004070(word32 d0, word32 d1, word32 d2, word32 d3, word32 d4, word32 a0, word32 a1, ptr32 a1Out)
{
	word32 d4_18 = DPB(d4, (word16) d0, 0, 16);
	word32 d0_31 = DPB(d0, (word16) DPB(d0, Mem0[a0 + 0x00000000:word16], 0, 16) & (word16) d4_18, 0, 16);
	word32 d1_33 = DPB(d1, (word16) DPB(d1, Mem0[a0 + 44:word16], 0, 16) & (word16) d4_18, 0, 16);
	word32 d2_35 = DPB(d2, (word16) DPB(d2, Mem0[a0 + 88:word16], 0, 16) & (word16) d4_18, 0, 16);
	word32 d3_37 = DPB(d3, (word16) DPB(d3, Mem0[a0 + 132:word16], 0, 16) & (word16) d4_18, 0, 16);
	Mem40[a1 + 192:word16] = Mem0[a1 + 192:word16] | (word16) d4_18;
	Mem42[a1 + 240:word16] = Mem40[a1 + 240:word16] | (word16) d4_18;
	Mem44[a1 + 288:word16] = Mem42[a1 + 288:word16] | (word16) d4_18;
	Mem46[a1 + 336:word16] = Mem44[a1 + 336:word16] | (word16) d4_18;
	word32 d4_48 = DPB(d4, ~(word16) d4_18, 0, 16);
	Mem50[a1 + 48:word16] = Mem46[a1 + 48:word16] & (word16) d4_48;
	Mem52[a1 + 48:word16] = Mem50[a1 + 48:word16] | (word16) d1_33;
	Mem54[a1 + 96:word16] = Mem52[a1 + 96:word16] & (word16) d4_48;
	Mem56[a1 + 96:word16] = Mem54[a1 + 96:word16] | (word16) d2_35;
	Mem58[a1 + 144:word16] = Mem56[a1 + 144:word16] & (word16) d4_48;
	Mem60[a1 + 144:word16] = Mem58[a1 + 144:word16] | (word16) d3_37;
	Mem62[a1 + 0x00000000:word16] = Mem60[a1 + 0x00000000:word16] & (word16) d4_48;
	Mem64[a1 + 0x00000000:word16] = Mem62[a1 + 0x00000000:word16] | (word16) d0_31;
	word32 a1_65;
	*a1Out = a1 + 0x00000002;
	return a0 + 0x00000002;
}

word32 fn000040C0(word32 d0, word32 d1, word32 d2, word32 d3, word32 a0, word32 a1, ptr32 a1Out)
{
	word32 d1_17 = DPB(d1, Mem0[a0 + 44:word16], 0, 16);
	word32 d2_19 = DPB(d2, Mem0[a0 + 88:word16], 0, 16);
	word32 d3_21 = DPB(d3, Mem0[a0 + 132:word16], 0, 16);
	word32 d0_24 = DPB(d0, Mem0[a0 + 0x00000000:word16], 0, 16);
	Mem26[a1 + 192:word16] = 0xFFFF;
	Mem29[a1 + 240:word16] = 0xFFFF;
	Mem31[a1 + 288:word16] = 0xFFFF;
	Mem33[a1 + 336:word16] = 0xFFFF;
	Mem35[a1 + 48:word16] = (word16) d1_17;
	Mem37[a1 + 96:word16] = (word16) d2_19;
	Mem39[a1 + 144:word16] = (word16) d3_21;
	Mem41[a1 + 0x00000000:word16] = (word16) d0_24;
	word32 a1_42;
	*a1Out = a1 + 0x00000002;
	return a0 + 0x00000002;
}

word32 fn000040FE(word32 a0, word32 a1, ptr32 a1Out)
{
	word32 d1_16 = Mem0[a0 + 44:word32];
	word32 d2_17 = Mem0[a0 + 88:word32];
	word32 d3_18 = Mem0[a0 + 132:word32];
	word32 v9_19 = Mem0[a0 + 0x00000000:word32];
	Mem23[a1 + 192:word32] = 0xFFFFFFFF;
	Mem26[a1 + 240:word32] = 0xFFFFFFFF;
	Mem28[a1 + 288:word32] = 0xFFFFFFFF;
	Mem30[a1 + 336:word32] = 0xFFFFFFFF;
	Mem32[a1 + 48:word32] = d1_16;
	Mem34[a1 + 96:word32] = d2_17;
	Mem36[a1 + 144:word32] = d3_18;
	Mem38[a1 + 0x00000000:word32] = v9_19;
	word32 a1_39;
	*a1Out = a1 + 0x00000004;
	return a0 + 0x00000004;
}

word32 fn000046B2(word32 d0, word32 d7, ptr32 d1Out, ptr32 d2Out, ptr32 d7Out, ptr32 a2Out)
{
	*d7Out = d7;
	*d1Out = d1;
	*d2Out = d2;
	*a2Out = a2;
	word32 a0_10;
	if (!fn00005544(d0, d7, out a0_10) && (!__btst(Mem0[a0_10 + 16:byte], 0x0000) && Mem0[a0_10 + 18:byte] == 0x00))
	{
		word32 a1_43;
		if (!fn000055A8(a0_10, out a1_43))
		{
l000046D4:
			word32 d1_50;
			word32 d2_51;
			word32 d7_52;
			word32 a2_53;
			d0 = fn00004702(d0, d7, out d1_50, out d2_51, out d7_52, out a2_53);
		}
		else if (Mem0[a1_43 + 2:byte] != 0x00)
		{
			byte v9_61 = Mem0[a1_43 + 2:byte] - 0x01;
			Mem62[a1_43 + 2:byte] = v9_61;
			if (v9_61 == 0x00)
				if (!__btst(Mem62[a0_10 + 16:byte], 0x0001))
				{
l000046F0:
					fn0000551C(a0_10);
					__bclr(Mem0[a0_10 + 16:byte], 0x00, out Mem0[a0_10 + 16:byte]);
				}
				else
					goto l000046D4;
		}
		else
			goto l000046F0;
	}
	return d0;
}

word32 fn00004702(word32 d0, word32 d7, ptr32 d1Out, ptr32 d2Out, ptr32 d7Out, ptr32 a2Out)
{
	*d7Out = d7;
	*d1Out = d1;
	*d2Out = d2;
	*a2Out = a2;
	word32 a0_10;
	if (!fn00005544(d0, d7, out a0_10))
		if (Mem0[a0_10 + 18:byte] == 0x00)
		{
			word32 a1_45;
			if (fn000055A8(a0_10, out a1_45))
				goto l0000472E;
			else if (Mem0[a1_45 + 2:byte] - 0x01 > 0x00)
			{
l00004724:
				__bset(Mem0[a0_10 + 16:byte], 0x0001, out Mem0[a0_10 + 16:byte]);
			}
			else
			{
				Mem58[a1_45 + 0x00000000:byte] = 0x00;
l0000472E:
				fn0000551C(a0_10);
				Mem49[a0_10 + 16:word32] = 0x00000000;
				fn0000516E(a0_10);
			}
		}
		else
			goto l00004724;
	return d0;
}

word32 fn00004764(word32 d7, word32 a0, word32 a6, ptr32 a1Out)
{
	word32 a1_12;
	*a1Out = 0x00010B58;
	word32 d0_14 = 1;
	word32 d7_13 = DPB(d7, 0x00FE, 0, 16);
	do
	{
		if (Mem0[a1_12 + 0x00000000:byte] == 0x00)
			return d0_14;
		d0_14 = DPB(0x00000001, (word16) d0_14 + 0x0001, 0, 16);
		a1_12 = a1_12 + 0x0006;
		*a1Out = a1_12;
		d7_13 = d7_13 - 0x00000001;
	} while (d7_13 != 0xFFFFFFFF);
	fn0000141A(34, d7_13, a0, a6);
	return 34;
}

word32 fn0000478A(word32 d0, word32 d1, word32 a0, word32 a1, word32 a6, ptr32 d1Out, ptr32 d2Out, ptr32 d7Out)
{
	word32 d2_13;
	word32 d7_14;
	word32 a0_15;
	word32 a1_16;
	word32 a2_17;
	word32 d1_18;
	*d1Out = fn000048AE(d0, d1, dwLoc0C, a0, a1, dwArg00, dwArg04, out d2_13, out d7_14, out a0_15, out a1_16, out a2_17);
	word32 d0_19 = a0_15;
	if (a0_15 != 0x00000000)
	{
		fn00005212(a0_15);
		if (!__btst(Mem0[a0_15 + 16:byte], 0x0000))
		{
			if (Mem0[a1_16 + 2:byte] - 0xFF != 0x00)
				Mem47[a1_16 + 2:byte] = Mem0[a1_16 + 2:byte] + 0x01;
			d0_19 = DPB(a0_15, Mem0[a0_15 + 17:byte], 0, 8);
		}
		else
		{
			word32 d1_50;
			word32 d2_51;
			word32 d7_52;
			d0_19 = fn00004824(a0_15, d2_13, a0_15, a1_16, a2_17, a6, out d1_50, out d2_51, out d7_52);
		}
	}
	return d0_19;
}

word32 fn00004824(word32 d0, word32 d2, word32 a0, word32 a1, word32 a2, word32 a6, ptr32 d1Out, ptr32 d2Out, ptr32 d7Out)
{
	__bset(Mem0[a0 + 16:byte], 0x0000, out Mem0[a0 + 16:byte]);
	word32 d0_121 = fn000054DE(d0, a0, a6);
	word32 d1_32 = DPB(0x00000006, Mem0[fn00005238(d0_121, a0) + 17:byte], 0, 8);
	if ((byte) d1_32 - 0x01 == 0x00 && (byte) fn0000FF16(d1_32) - 0x01 == 0x00)
	{
		word32 d1_77;
		word32 d7_78;
		word32 d0_79 = fn0000493C(Mem0[a0 + 4:word32], (word32) Mem0[a1 + 0x00000000:byte], a1, a6, out d1_77, out d7_78);
		word32 d1_83;
		word32 d2_84;
		word32 d7_85;
		word32 a2_86;
		word32 d0_87 = fn000054A2(d0_79, d7_78, out d1_83, out d2_84, out d7_85, out a2_86);
		word32 a0_92;
		fn00005544(DPB(d0_87, (byte) d7_85, 0, 8), d7_85, out a0_92);
		word32 d1_102;
		word32 a1_103;
		word32 a2_104;
		word32 d0_105 = fn0000963E(Mem0[a0_92 + 4:word32], Mem0[a0_92 + 0x00000000:word32], d0_87, a2, dwArg00, dwArg04, dwArg08, dwArg0C, out d1_102, out a1_103, out a2_104);
		fn0000551C(a2_104);
		Mem107[a2_104 + 16:word32] = 0x00000000;
		word32 d1_116;
		word32 d2_117;
		word32 d7_118;
		word32 a1_119;
		word32 a2_120;
		d0_121 = fn000054C6(DPB(d0_105, (byte) d1_102, 0, 8), d7_85, fn0000516E(a2_104), out d1_116, out d2_117, out d7_118, out a1_119, out a2_120);
	}
	word32 d1_48;
	*d1Out = Mem0[fp - 0x00000014:word32];
	word32 d2_50;
	*d2Out = Mem0[fp - 0x00000010:word32];
	word32 d7_52;
	*d7Out = Mem0[fp - 0x0000000C:word32];
	return d0_121;
}

word32 fn000048AE(word32 d0, word32 d1, word32 dwArg00, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, ptr32 d2Out, ptr32 d7Out, ptr32 a0Out, ptr32 a1Out, ptr32 a2Out)
{
	word32 a1_17;
	*a1Out = 0x00010B58 + 4;
	word32 d2_18 = 1;
	word32 d7_19 = 0x000000FE;
	do
	{
		if ((word16) d0 - Mem0[a1_17 + 0:word16] == 0x0000 && (byte) d1 - Mem0[a1_17 + 0x00000000:byte] == 0x00)
			;
		d2_18 = DPB(0x00000001, (word16) d2_18 + 0x0001, 0, 16);
		*a1Out = a1_17 + 0x0006;
		d7_19 = d7_19 - 0x00000001;
	} while (d7_19 != 0xFFFFFFFF);
l00004904:
	word32 a0_73;
	*a0Out = 0x00000000;
l00004906:
}

word32 fn0000490C(word32 d0, word32 d1, ptr32 d7Out)
{
	word32 d7_9;
	return fn000049AC(d0, DPB(d1, 0x01, 0, 8), out d7_9);
}

word32 fn0000493C(word32 d0, word32 d1, word32 a1, word32 a6, ptr32 d1Out, ptr32 d7Out)
{
	word32 d0_21;
	word32 d7_20;
	Mem13[0x0001076C:word32] = d0;
	word32 a7_22 = fp - 0x0000000C;
	if ((byte) d1 == 0x00)
		d0_21 = fn000049AC(d0, DPB(d1, Mem13[0x0003AAB5:byte], 0, 8), out d7_20);
	else
	{
		a7_22 = fp - 0x00000010;
		d0_21 = fn000049AC(d0, fn0000FF16(d1), out d7_20);
	}
	word32 v16_23 = Mem13[a7_22 + 0x00000000:word32];
	word32 a0_27;
	fn00005544(d0_21, d7_20, out a0_27);
	word32 a7_24 = a7_22 + 0x00000004;
	Mem31[a7_24 - 0x00000004:word32] = d0_21;
	word32 a1_34;
	Mem38[a0_27 + 19:byte] = (byte) fn00004764(d7_20, a0_27, a6, out a1_34);
	Mem40[a1_34 + 0x00000000:byte] = (byte) v16_23;
	Mem43[a1_34 + 4:word16] = (word16) d2;
	word32 d0_44 = Mem43[0x0001076C:word32];
	Mem46[a1_34 + 3:byte] = (byte) d0_44;
	if (d0_44 == 0x00000000)
		Mem73[Mem46[a0_27 + 0x00000000:word32]:word32] = 0x00000000;
	fn00005212(a0_27);
	word32 d7_59;
	*d7Out = fn000052E2(d0_44, v16_23, d7_20, a6, a1, dwArg00, dwArg04, dwArg08);
	word32 d1_64;
	*d1Out = Mem46[a7_24 + 0x00000004:word32];
	return Mem46[a7_24 + 0x00000000:word32];
}

word32 fn000049AC(word32 d0, word32 d1, ptr32 d7Out)
{
	Mem14[0x00010771:bool] = false;
	Mem15[0x00010770:bool] = false;
	byte v9_19 = (byte) (d0 + 0x00000003) & 0xFC;
	word32 a7_11 = fp - 0x00000010;
	word32 d0_101 = DPB(d0 + 0x00000009, v9_19, 0, 8);
	if (d0_101 == 0x00000000)
		d0_101 = 4;
	word32 d7_26;
	*d7Out = d0_101;
	word32 a1_28 = 0x00004A28;
	while (Mem15[a1_28 + 0x00000000:word32] != 0x00000000)
	{
		word32 v15_55 = Mem15[a1_28 + 0x00000000:word32];
		a1_28 = a1_28 + 0x00000004;
		d0_101 = d7_26;
		v15_55();
		if ((byte) d7_26 != 0x00)
		{
			if (Mem15[0x00010771:byte] != 0x00)
			{
				Mem99[0x00010771:bool] = false;
				fn0000524A(d7_26);
			}
			if (Mem15[0x00010770:byte] != 0x00)
			{
				Mem87[0x00010770:bool] = false;
				Mem91[0x0003C21C:bool] = true;
				fn00010064();
				a7_11 = fp - 0x0000000C;
				d0_101 = d1;
			}
			word32 d7_81;
			*d7Out = Mem15[a7_11 + 0x00000004:word32];
			return d0_101;
		}
	}
	Mem100[0x00010770:bool] = false;
	fn00010064();
	return d0_101;
}

void fn00005138(word32 d0, word32 a0)
{
	word32 d1_20 = Mem0[a0 + 12:word32];
	while (d1_20 != 0x00000000)
	{
		a0 = d1_20;
		if (__btst(Mem0[d1_20 + 16:byte], 0x0000))
			continue;
		word32 a1_25;
		if (fn000055A8(d1_20, out a1_25) || (byte) d0 - Mem0[a1_25 + 1:byte] <u 0x00)
			continue;
		Mem31[d1_20 + 16:word32] = 0x00000000;
		Mem32[a1_25 + 0x00000000:byte] = 0x00;
		a0 = fn0000516E(d1_20);
		d1_20 = Mem0[a0 + 12:word32];
	}
	return;
}

word32 fn0000516E(word32 a0)
{
	if (a0 != 0x00000000 && (Mem0[a0 + 16:word32] == 0x00000000 && Mem0[a0 + 8:word32] != 0x00000000))
	{
		word32 a2_40 = Mem0[a0 + 8:word32];
		if (Mem0[a2_40 + 8:word32] != 0x00000000 && Mem0[a2_40 + 16:word32] == 0x00000000)
		{
			Mem68[a2_40 + 4:word32] = Mem0[a2_40 + 4:word32] + Mem0[a0 + 4:word32];
			fn0000586E(a0);
			a0 = a2_40;
		}
		if (Mem0[a0 + 12:word32] != 0x00000000)
		{
			word32 a2_52 = Mem0[a0 + 12:word32];
			if (Mem0[a2_52 + 16:word32] == 0x00000000)
			{
				Mem59[a0 + 4:word32] = Mem0[a0 + 4:word32] + Mem0[a2_52 + 4:word32];
				fn0000586E(a2_52);
				a0 = a2_52;
			}
		}
	}
	return a0;
}

void fn00005212(word32 a0)
{
	word32 a1_9;
	if (!fn000055A8(a0, out a1_9))
	{
		byte v7_20 = Mem0[a1_9 + 0x00000000:byte];
		word32 d1_21 = (word32) v7_20;
		if (v7_20 != 0x00)
		{
			word32 d1_24 = fn0000FF2A(d1_21);
			Mem28[a1_9 + 1:byte] = (byte) DPB(d1_24, (byte) d1_24 | 0x80, 0, 8);
		}
	}
	return;
}

word32 fn00005238(word32 d0, word32 a0)
{
	word32 a1_14 = a0;
	word32 d0_11 = Mem0[a1_14 + 8:word32];
	while (d0_11 != 0x00000000)
	{
		a1_14 = d0_11;
		d0_11 = Mem0[a1_14 + 8:word32];
	}
	return a1_14;
}

void fn0000524A(word32 d7)
{
	fn00005440(d7);
	word32 a1_17 = 0x00010AA4;
	word32 d7_21 = DPB(d7, Mem0[0x00010AA2:word16], 0, 16);
	d7_21 = d7_21 - 0x00000001;
	while (d7_21 != 0xFFFFFFFF)
	{
		word32 a0_43 = a1_17;
		word32 d0_46 = Mem0[a0_43 + 12:word32];
		while (d0_46 != 0x00000000)
		{
			byte v11_51 = Mem0[d0_46 + 17:byte];
			a0_43 = d0_46;
			word32 d0_52 = (word32) v11_51;
			if (v11_51 == 0x00)
				continue;
			Mem59[d0_46 + -4 + DPB(d0_52, (word16) d0_52 << 0x0002, 0, 16):word32] = d0_46;
			d0_46 = Mem0[a0_43 + 12:word32];
		}
		a1_17 = a1_17 + 18;
		d7_21 = d7_21 - 0x00000001;
	}
	return;
}

word32 fn000052E2(word32 d0, word32 d1, word32 d7, word32 a6, word32 dwArg00, word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	word16 v9_17 = (word16) DPB(d0, Mem0[0x00010774:word16], 0, 16) - 0x0001;
	word32 d0_120 = DPB(d0, v9_17, 0, 16);
	if (v9_17 == 0x0000)
	{
		fn00005380(d7, a6);
		d0_120 = DPB(d0, 0x2710, 0, 16);
	}
	Mem25[0x00010774:word16] = (word16) d0_120;
	word16 v14_28 = (word16) DPB(d0_120, Mem25[0x00010772:word16], 0, 16) - 0x0001;
	word32 d0_100 = DPB(d0_120, v14_28, 0, 16);
	if (v14_28 == 0x0000)
	{
		Mem56[0x00010772:word16] = 0x0014;
		word32 a0_57 = 0x00011152 + 16;
		word32 d7_58 = DPB(d7, 0x01F3, 0, 16);
		do
		{
			if (!__btst(Mem56[a0_57 + 0:byte], 0x0000))
			{
				word32 a1_74;
				if (!fn000055A8(a0_57, out a1_74))
				{
					byte v17_78 = (byte) DPB(d0_100, Mem56[a1_74 + 1:byte], 0, 8) - 0x01;
					d0_100 = DPB(d0_100, v17_78, 0, 8);
					if (v17_78 != 0x00)
						Mem83[a1_74 + 1:byte] = (byte) d0_100;
				}
			}
			a0_57 = a0_57 + 20;
			d7_58 = d7_58 - 0x00000001;
		} while (d7_58 != 0xFFFFFFFF);
	}
	else
	{
		Mem86[0x00010772:word16] = (word16) d0_100;
		word32 a0_102 = 0x00011152 + 16;
		word32 d7_103 = DPB(d7, 0x01F3, 0, 16);
		do
		{
			if (!__btst(Mem86[a0_102 + 0:byte], 0x0000))
			{
				word32 a1_104;
				if (!fn000055A8(a0_102, out a1_104) && (byte) d1 - Mem86[a1_104 + 0x00000000:byte] == 0x00)
				{
					byte v23_112 = (byte) DPB(d0_100, Mem86[a1_104 + 1:byte], 0, 8) - 0x01;
					d0_100 = DPB(d0_100, v23_112, 0, 8);
					if (v23_112 != 0x00)
						Mem117[a1_104 + 1:byte] = (byte) d0_100;
				}
			}
			a0_102 = a0_102 + 20;
			d7_103 = d7_103 - 0x00000001;
		} while (d7_103 != 0xFFFFFFFF);
	}
}

void fn00005380(word32 d7, word32 a6)
{
	word32 a0_20 = 0x00011152;
	word32 d7_21 = DPB(d7, 0x01F3, 0, 16);
	do
	{
		__bclr(Mem0[a0_20 + 16:byte], 0x02, out Mem0[a0_20 + 16:byte]);
		a0_20 = a0_20 + 20;
		d7_21 = d7_21 - 0x00000001;
	} while (d7_21 != 0xFFFFFFFF);
	word32 a0_29 = 0x00010AA4;
	word32 d7_31 = DPB(d7_21 - 0x00000001, Mem0[0x00010AA2:word16], 0, 16);
	d7_31 = d7_31 - 0x00000001;
	while (d7_31 != 0xFFFFFFFF)
	{
		fn000053BE(a0_29, a6);
		a0_29 = a0_29 + 18;
		d7_31 = d7_31 - 0x00000001;
	}
	return;
}

void fn000053BE(word32 a0, word32 a6)
{
	word32 d0_27 = Mem0[a0 + 0x00000000:word32];
	word32 d5_29 = d0_27;
	word32 d1_30 = d0_27 + Mem0[a0 + 4:word32];
	word32 d2_105 = Mem0[a0 + 4:word32];
	word32 d7_42 = Mem0[a0 + 12:word32];
	while (d7_42 != 0x00000000)
	{
		if (d7_42 < 0x00011152 || d7_42 > 0x00013862)
			goto l0000542A;
		a0 = d7_42;
		if (__btst(Mem0[d7_42 + 16:byte], 0x0002))
			;
		__bset(Mem0[d7_42 + 16:byte], 0x0002, out Mem0[d7_42 + 16:byte]);
		d7_42 = Mem0[d7_42 + 0x00000000:word32];
		if (d7_42 - d5_29 != 0x00000000 || (d7_42 - d0_27 < 0x00000000 || d7_42 - d1_30 > 0x00000000))
			;
		word32 d7_95 = d7_42 + Mem0[d7_42 + 4:word32];
		d5_29 = d7_95;
		d7_42 = d7_95 - 0x00000001;
		if (d7_95 - 0x00000001 - d0_27 < 0x00000000 || (d7_95 - 0x00000001) - d1_30 > 0x00000000)
			;
		d2_105 = d2_105 - Mem0[d7_42 + 4:word32];
		d7_42 = Mem0[a0 + 12:word32];
	}
	if (d2_105 == 0x00000000 && d1_30 - d5_29 == 0x00000000)
		return;
	else
	{
		fn0000141A(33, d7_42, a0, a6);
		return;
	}
}

void fn00005440(word32 d7)
{
	word32 a0_13 = 0x00010776;
	word32 d7_10 = DPB(d7 - 0x00000001, 0x00C7, 0, 16);
	do
	{
		Mem14[a0_13 + 0x00000000:word32] = 0x00000000;
		a0_13 = a0_13 + 0x00000004;
		d7_10 = d7_10 - 0x00000001;
	} while (d7_10 != 0xFFFFFFFF);
	return;
}

void fn0000545A()
{
	word32 a1_14 = 0x00010AA4;
	word32 d7_17 = DPB(0x00000006, Mem0[0x00010AA2:word16], 0, 16);
	d7_17 = d7_17 - 0x00000001;
	while (d7_17 != 0xFFFFFFFF)
	{
		word32 a0_41 = a1_14;
		word32 d0_46 = Mem0[a0_41 + 12:word32];
		while (d0_46 != 0x00000000)
		{
			Mem50[d0_46 + 18:byte] = 0x00;
			a0_41 = d0_46;
			d0_46 = Mem0[a0_41 + 12:word32];
		}
		a1_14 = a1_14 + 18;
		d7_17 = d7_17 - 0x00000001;
	}
	return;
}

word32 fn000054A2(word32 d0, word32 d7, ptr32 d1Out, ptr32 d2Out, ptr32 d7Out, ptr32 a2Out)
{
	*d1Out = d1;
	*d2Out = d2;
	*d7Out = d7;
	*a2Out = a2;
	if ((byte) d0 == 0x00)
		d0 = 0;
	else
	{
		word32 a0_30;
		if (!fn00005544(d0, d7, out a0_30))
		{
			if (Mem0[a0_30 + 18:byte] - 0xFF != 0x00)
				Mem40[a0_30 + 18:byte] = Mem0[a0_30 + 18:byte] + 0x01;
			d0 = Mem0[a0_30 + 0x00000000:word32];
		}
	}
	return d0;
}

word32 fn000054C6(word32 d0, word32 d7, word32 a0, ptr32 d1Out, ptr32 d2Out, ptr32 d7Out, ptr32 a1Out, ptr32 a2Out)
{
	*d7Out = d7;
	*d1Out = d1;
	*d2Out = d2;
	*a1Out = a1;
	*a2Out = a2;
	word32 a0_9;
	if (!fn00005544(d0, d7, out a0_9) && Mem0[a0_9 + 18:byte] != 0x00)
		Mem38[a0_9 + 18:byte] = Mem0[a0_9 + 18:byte] - 0x01;
	return d0;
}

word32 fn000054DE(word32 d0, word32 a0, word32 a6)
{
	byte v7_10 = Mem0[a0 + 17:byte];
	word32 d0_12 = DPB(d0, v7_10, 0, 8);
	if (v7_10 == 0x00)
	{
		d0_12 = 0;
		if (Mem0[a0 + 18:byte] == 0x00)
		{
			word32 a1_56 = 0x00010776;
			d0_12 = 1;
			word32 d7_58 = 0x000000C7;
			do
			{
				a1_56 = a1_56 + 0x00000004;
				if (Mem0[a1_56 + 0x00000000:word32] == 0x00000000)
				{
					Mem78[a1_56 + -4:word32] = a0;
					goto l00005512;
				}
				d0_12 = DPB(0x00000001, (word16) d0_12 + 0x0001, 0, 16);
				d7_58 = d7_58 - 0x00000001;
			} while (d7_58 != 0xFFFFFFFF);
			fn0000141A(31, d7_58, a0, a6);
			return 31;
		}
		else
		{
l00005512:
			Mem54[a0 + 17:byte] = (byte) d0_12;
l00005516:
			return d0_12;
		}
	}
	else
		goto l00005516;
}

void fn0000551C(word32 a0)
{
	if (Mem0[a0 + 18:byte] == 0x00)
	{
		byte v10_27 = Mem0[a0 + 17:byte];
		word32 d0_28 = (word32) v10_27;
		if (v10_27 != 0x00)
		{
			Mem31[a0 + 17:byte] = 0x00;
			Mem36[0x00010776 + DPB(d0_28, (word16) d0_28 << 0x0002, 0, 16):word32] = 0x00000000;
		}
	}
	return;
}

byte fn00005544(word32 d0, word32 d7, ptr32 a0Out)
{
	*a0Out = a0;
	word16 v8_15 = (word16) d0 & 0x00FF;
	word32 d1_14 = -1;
	word32 d0_16 = DPB(d0, v8_15, 0, 16);
	if (v8_15 != 0x0000)
	{
		word32 a2_49 = 0x00010776;
		word32 d2_50 = (a2_49 + -4)[d0_16 * 2];
		if (d2_50 != 0x00000000)
		{
			word32 a0_106;
			*a0Out = d2_50;
			if ((byte) d0_16 - Mem0[d2_50 + 17:byte] != 0x00)
			{
l00005564:
				word32 a1_105 = 0x00010AA4;
				word32 a2_78 = DPB(a2_49, (word16) a2_49 + (word16) DPB(d2_50, (word16) DPB(d2_50, (word16) d0_16, 0, 16) << 0x0002, 0, 16), 0, 16);
				word32 d7_80 = DPB(d7, Mem0[0x00010AA2:word16], 0, 16);
				d7_80 = d7_80 - 0x00000001;
				while (d7_80 != 0xFFFFFFFF)
				{
					word32 a0_93;
					*a0Out = a1_105;
					do
					{
						word32 d2_95 = Mem0[a0_93 + 12:word32];
						if (d2_95 == 0x00000000)
							a1_105 = a1_105 + 18;
						*a0Out = d2_95;
					} while ((byte) d0_16 - Mem0[d2_95 + 17:byte] != 0x00);
					Mem103[a2_78 + 0x00000000:word32] = d2_95;
l0000559E:
					d1_14 = 0;
l000055A0:
					return cond((word16) d1_14);
					d7_80 = d7_80 - 0x00000001;
				}
			}
			else
				goto l0000559E;
		}
		else
			goto l00005564;
	}
}

byte fn000055A8(word32 a0, ptr32 a1Out)
{
	*a1Out = a1;
	byte v8_15 = Mem0[a0 + 19:byte];
	word32 d1_11 = -1;
	word32 d0_16 = (word32) v8_15;
	if (v8_15 != 0x00)
	{
		word32 a1_36 = 0x00010B58;
		word32 a1_42;
		*a1Out = DPB(a1_36, (word16) a1_36 + (word16) (DPB(d0_16, (word16) d0_16 - 0x0001, 0, 16) *u 0x0006), 0, 16);
		d1_11 = 0;
	}
	return cond((word16) d1_11);
}

void fn000055CE(word32 d7, word32 a6)
{
	Mem15[0x00010774:word16] = 0x2710;
	Mem17[0x00010772:word16] = 0x0014;
	word32 a2_18 = 0x00010AA4;
	word32 d7_20 = DPB(d7, Mem17[0x00010AA2:word16], 0, 16);
	d7_20 = d7_20 - 0x00000001;
	while (d7_20 != 0xFFFFFFFF)
	{
		while (Mem17[a2_18 + 12:word32] != 0x00000000)
			fn0000586E(Mem17[a2_18 + 12:word32]);
		word32 a0_65 = fn000057E2(d7_20, a6);
		Mem68[a0_65 + 0x00000000:word32] = Mem17[a2_18 + 0x00000000:word32];
		Mem70[a0_65 + 4:word32] = Mem68[a2_18 + 4:word32];
		fn0000584C(a0_65, a2_18);
		a2_18 = a2_18 + 18;
		d7_20 = d7_20 - 0x00000001;
	}
	word32 a0_37 = 0x00010B58;
	word32 d7_38 = DPB(d7_20 - 0x00000001, 0x00FE, 0, 16);
	do
	{
		Mem42[a0_37 + 0x00000000:byte] = 0x00;
		a0_37 = a0_37 + 0x0006;
		d7_38 = d7_38 - 0x00000001;
	} while (d7_38 != 0xFFFFFFFF);
	fn00005440(d7_38);
	return;
}

void fn00005640(word32 d0, word32 a0, word32 a6)
{
	word32 d7_42;
	word32 a2_43;
	Mem46[0x00010A9A:word32] = fn000056B8(d0, 0x00005000, 1, 4, 0, 0x00010AA4, a6, out d7_42, out a2_43);
	word32 d7_51;
	word32 a2_52;
	word32 d4_53 = fn000056B8(d0, 0x00005000, 0, 2, d7_42, a2_43, a6, out d7_51, out a2_52);
	Mem55[0x00010A96:word32] = d4_53;
	if (d4_53 <= 0x000445C0)
	{
		fn0000141A(28, d7_51, a0, a6);
		return;
	}
	else if (Mem55[0x00010A9A:word32] <= 0x000124F8 && Mem55[0x00010A96:word32] <= 0x00056AB8)
	{
		fn0000141A(29, d7_51, a0, a6);
		return;
	}
	else
	{
		Mem81[0x00010AA2:word16] = (word16) d7_51;
		return;
	}
}

word32 fn000056B8(word32 d0, word32 d3, word32 d5, word32 d6, word32 d7, word32 a2, word32 a6, ptr32 d7Out, ptr32 a2Out)
{
	*a2Out = a2;
	*d7Out = d7;
	word32 d4_100 = 0;
	do
	{
		word32 a6_38 = Mem0[0x00000004:word32];
		(a6_38 + -216)();
		if (d0 < 0x00001400)
			break;
		word32 a6_218 = Mem0[0x00000004:word32];
		(a6_218 + -198)();
		if (d0 == 0x00000000)
			continue;
		Mem227[a2 + 0x00000000:word32] = d0;
		Mem229[a2 + 4:word32] = d0;
		Mem231[a2 + 17:byte] = (byte) d5;
	} while ((word16) (word32) ((word16) d7 + 0x0001) - 0x000A < 0x0000);
	word32 a6_86 = Mem0[0x00000004:word32];
	(a6_86 + -216)();
	word32 d3_136 = d3 - d0;
	if (d3_136 >= 0x00000000)
	{
		a2 = a2 + -18;
		*a2Out = a2;
		byte v34_143 = (byte) d5 - Mem0[a2 + 17:byte];
		while (v34_143 == 0x00)
		{
			word32 d0_146 = Mem0[a2 + 4:word32];
			word32 v35_147 = d3_136 - d0_146;
			if (v35_147 < 0x00000000)
			{
				d4_100 = d4_100 - d0_146;
				word32 d0_169 = Mem0[a2 + 4:word32];
				word32 a6_175 = Mem0[0x00000004:word32];
				(a6_175 + -210)();
				word16 v41_179 = (word16) d7 - 0x0001;
				word32 d7_180 = DPB(d7, v41_179, 0, 16);
				*d7Out = d7_180;
				word32 d0_181 = d0_169 - d3_136;
				if (d0_181 >= 0x00001400)
				{
					word32 a6_193 = Mem0[0x00000004:word32];
					(a6_193 + -198)();
					if (d0_181 != 0x00000000)
					{
						Mem202[a2 + 0x00000000:word32] = d0_181;
						Mem204[a2 + 4:word32] = d0_181;
						Mem206[a2 + 17:byte] = (byte) d5;
						d4_100 = d4_100 + d0_181;
						word32 a2_208;
						*a2Out = a2 + 18;
						word32 d7_210;
						*d7Out = DPB(d7, (word16) d7_180 + 0x0001, 0, 16);
					}
				}
			}
			d3_136 = d3_136 - d0_146;
			d4_100 = d4_100 - d0_146;
			word32 a6_159 = Mem0[0x00000004:word32];
			(a6_159 + -210)();
			word16 v38_163 = (word16) d7 - 0x0001;
			*d7Out = DPB(d7, v38_163, 0, 16);
			if (v38_163 == 0x0000)
				break;
			a2 = a2 + -18;
			*a2Out = a2;
			v34_143 = (byte) d5 - Mem0[a2 + 17:byte];
		}
	}
l000057A8:
	return d4_100;
}

void fn000057AE(word32 d7, word32 a6)
{
	word16 v9_22 = Mem0[0x00010AA2:word16];
	word32 d7_23 = DPB(d7, v9_22, 0, 16);
	d7_23 = d7_23 - 0x00000001;
	while (d7_23 != 0xFFFFFFFF)
	{
		word32 a6_56 = Mem0[0x00000004:word32];
		(a6_56 + -210)();
		d7_23 = d7_23 - 0x00000001;
	}
	return;
}

word32 fn000057E2(word32 d7, word32 a6)
{
	word32 a0_26;
	if (Mem0[0x00010A9E:word32] != 0x00000000)
	{
		a0_26 = Mem0[0x00010A9E:word32];
		Mem81[0x00010A9E:word32] = 0x00000000;
		if (Mem81[a0_26 + 0x00000000:word32] != 0x00000000)
		{
l00005800:
			word32 d0_43 = 0;
			do
			{
				a0_26 = 0x00011152;
				word32 d7_54 = DPB(d7 - 0x00000001, 0x01F3, 0, 16);
				do
				{
					if (Mem0[a0_26 + 0x00000000:word32] == 0x00000000)
						goto l00005842;
					a0_26 = a0_26 + 20;
					d7_54 = d7_54 - 0x00000001;
				} while (d7_54 != 0xFFFFFFFF);
				word32 a0_64 = 0x00010AA4;
				word32 d7_66 = DPB(d7_54 - 0x00000001, Mem0[0x00010AA2:word16], 0, 16);
				d7_66 = d7_66 - 0x00000001;
				while (d7_66 != 0xFFFFFFFF)
				{
					fn00005138(d0_43, a0_64);
					a0_64 = a0_64 + 18;
					d7_66 = d7_66 - 0x00000001;
				}
				byte v13_71 = (byte) d0_43 + 0x01;
				d0_43 = (word32) v13_71;
			} while (v13_71 != 0x00);
			fn0000141A(30, d7_66, a0_64, a6);
			return a0_64;
		}
		else
		{
			Mem29[a0_26 + 16:word32] = 0x00000000;
			return a0_26;
		}
	}
	else
		goto l00005800;
}

void fn0000584C(word32 a0, word32 a1)
{
	word32 a2_8 = Mem0[a1 + 12:word32];
	if (a2_8 != 0x00000000)
		Mem24[a2_8 + 8:word32] = a0;
	Mem13[a0 + 12:word32] = a2_8;
	Mem16[a0 + 8:word32] = a1;
	Mem18[a1 + 12:word32] = a0;
	return;
}

void fn0000586E(word32 a0)
{
	word32 a1_10 = Mem0[a0 + 8:word32];
	word32 a2_11 = Mem0[a0 + 12:word32];
	if (a2_11 != 0x00000000)
		Mem26[a2_11 + 8:word32] = a1_10;
	Mem16[a1_10 + 12:word32] = a2_11;
	Mem17[a0 + 0x00000000:word32] = 0x00000000;
	Mem19[0x00010A9E:word32] = a0;
	return;
}

word32 fn00005898(word32 d0, word32 d1, word32 d2, word32 d7, word32 a0, word32 a1)
{
	word32 d6_106 = 0x7FFFFFFF;
	a0_45 = a0;
	word32 a0_45;
	d7 = d7 - 0x00000001;
	while (d7 != 0xFFFFFFFF)
	{
		word32 a0_80 = a0_45 + 0x00000001;
		word32 d3_81 = (word32) Mem0[a0_45 + 0x00000000:byte];
		word32 d4_85 = (word32) Mem0[a0_80 + 0x00000000:byte];
		word32 d5_89 = (word32) Mem0[a0_80 + 0x00000001:byte];
		word32 d3_92 = DPB(d3_81, (word16) d3_81 - (word16) d0, 0, 16);
		word32 d4_94 = DPB(d4_85, (word16) d4_85 - (word16) d1, 0, 16);
		word32 d5_96 = DPB(d5_89, (word16) d5_89 - (word16) d2, 0, 16);
		word32 d3_101 = d3_92 *s (word16) d3_92 + d4_94 *s (word16) d4_94 + d5_96 *s (word16) d5_96;
		a0_45 = a0_80 + 0x00000002;
		if (d3_101 - d6_106 > 0x00000000)
			continue;
		d6_106 = d3_101;
		a1 = a0_80 + 0x00000002;
		d7 = d7 - 0x00000001;
	}
	word32 d0_49 = a1 - a0;
	word32 d0_52 = DPB(d0_49, (uint16) (d0_49 % 0x0003), 16, 16);
	return DPB(d0_52, (word16) DPB(d0_52, (uint16) (d0_49 /u 0x0003), 0, 16) - 0x0001, 0, 16);
}

void fn000058F4(word32 d0, word32 d1, word32 a0, word32 a6)
{
	word32 a1_17 = 0x00013862;
	word16 v8_18 = (word16) d1;
	Mem19[a1_17 + 0x00000000:word16] = v8_18;
	word16 v10_21 = (word16) d0;
	Mem22[a1_17 + 0x00000002:word16] = v10_21;
	word32 a2_24 = 0x00014468;
	word16 v12_27 = (word16) d0 + (word16) d0;
	word16 v11_25 = (word16) a2_24 + (word16) d0;
	word32 d0_28 = (word32) v12_27;
	word16 v15_31 = (word16) d1;
	word16 v16_33 = (word16) d1 + (word16) d1;
	word32 d0_32 = DPB(d0_28, v15_31, 0, 16);
	word32 d1_34 = DPB(0x00000001, v16_33, 0, 16);
	word16 v14_29 = (word16) DPB(a2_24, v11_25, 0, 16) + (word16) d0_28;
	word16 v17_35 = (word16) d1_34 + (word16) d0_32;
	word32 a1_23 = a1_17 + 0x00000004;
	word32 a2_30 = DPB(a2_24, v14_29, 0, 16);
	word32 d1_36 = DPB(d1_34, v17_35, 0, 16);
	d1_36 = d1_36 - 0x00000001;
	while (d1_36 != 0xFFFFFFFF)
	{
		d0_32 = DPB(d0_32, Mem22[a0 + 0x00000000:byte], 0, 8);
		Mem85[a1_23 + 0x00000000:byte] = (byte) d0_32;
		word32 a1_86 = a1_23 + 0x00000001;
		Mem88[a1_86 + 0x00000000:byte] = (byte) d0_32;
		Mem91[a1_86 + 0x00000001:byte] = (byte) d0_32;
		Mem94[a1_86 + 0x00000002:byte] = (byte) d0_32;
		Mem97[a2_30 + 0x00000000:byte] = (byte) d0_32;
		a0 = a0 + 0x00000001;
		a1_23 = a1_86 + 0x00000003;
		a2_30 = a2_30 + 0x00000001;
		d1_36 = d1_36 - 0x00000001;
	}
	Mem46[a1_23 + 0x00000000:word16] = 0x0000;
	word32 a6_55 = Mem46[0x0001072A:word32];
	(a6_55 + -882)();
	return;
}

void fn00005954(word32 d0, word32 d7, word32 a0, word32 a6)
{
	word32 a6_20 = Mem0[0x00010726:word32];
	(a6_20 + -600)();
	word32 a6_50 = Mem0[0x00010726:word32];
	(a6_50 + -126)();
	Mem55[0x00014768:word32] = d0;
	word32 a6_62 = Mem55[0x00010726:word32];
	(a6_62 + -84)();
	if (d0 == 0x00000000)
	{
		fn0000141A(35, d7, a0, a6);
		return;
	}
	else
	{
		Mem87[0x0001476C:word32] = d0;
		word32 a6_93 = Mem87[0x00010726:word32];
		(a6_93 + -126)();
		word32 a0_97 = Mem87[0x000106BA:word32];
		word32 v24_98 = Mem87[a0_97 + 184:word32];
		Mem99[0x00014770:word32] = v24_98;
		Mem101[a0_97 + 184:word32] = 0xFFFFFFFF;
		word32 a6_106 = Mem101[0x00010726:word32];
		(a6_106 + -522)();
		if (d0 != 0x00000000)
		{
			Mem126[0x00014774:word32] = Mem101[d0 + 92:word32];
			Mem128[d0 + 92:word32] = Mem126[0x000154F0:word32];
		}
		return;
	}
}

void fn000059F8(word32 d0, word32 a6)
{
	word32 a0_15 = Mem0[0x000106BA:word32];
	word32 v7_16 = Mem0[0x00014770:word32];
	Mem17[a0_15 + 184:word32] = v7_16;
	word32 a6_23 = Mem17[0x00010726:word32];
	(a6_23 + -522)();
	if (d0 != 0x00000000)
		Mem70[d0 + 92:word32] = Mem17[0x00014774:word32];
	word32 a6_46 = Mem17[0x00010726:word32];
	(a6_46 + -126)();
	word32 a6_55 = Mem17[0x00010726:word32];
	(a6_55 + -90)();
	return;
}

void fn00005A58(word32 a6)
{
	if (Mem0[0x0001516E:byte] == 0x00)
	{
		Mem11[0x0001516E:bool] = true;
		if (Mem11[0x00010736:byte] != 0x00)
		{
			fn00001528(a6);
			Mem17[0x00015170:bool] = true;
		}
	}
	return;
}

void fn00005A7C(word32 a6)
{
	if (Mem0[0x0001516E:byte] != 0x00)
	{
		Mem11[0x0001516E:bool] = false;
		if (Mem11[0x00015170:byte] != 0x00)
		{
			Mem16[0x00015170:bool] = false;
			fn00001502(a6);
		}
	}
	return;
}

word32 fn00005AA0(word32 d0, word32 d1, word32 d2, word32 d3, word32 d7, word32 a0, word32 a1, word32 a5, word32 a6, word32 dwArg00, ptr32 d1Out, ptr32 a0Out)
{
	while (true)
	{
		Mem32[a5 + 6:word32] = 0x00000000;
		word16 v15_33 = Mem32[a5 + 10:word16];
		word32 d0_34 = DPB(d0, v15_33, 0, 16);
		word32 a0_155 = fn0000FEF8(d0_34, d7, a0, a6);
		*a0Out = a0_155;
		Mem39[0x0001504E:word32] = a0_155;
		word32 a6_46 = Mem39[0x00010726:word32];
		(a6_46 + -30)();
		if (d0_34 != 0x00000000)
		{
			Mem100[a5 + 6:word32] = d0_34;
			Mem102[0x00015052:word32] = d0_34;
			word32 d1_103 = Mem102[a5 + 6:word32];
			*d1Out = d1_103;
			word32 a6_112 = Mem102[0x00010726:word32];
			(a6_112 + -42)();
			if (d0_34 != 0xFFFFFFFF)
			{
				word32 v28_119 = 6 - d0_34;
				if (v28_119 != 0x00000000)
				{
l00005B08:
					Mem160[0x000106A8:word32] = Mem102[0x0001504E:word32];
					fn0000141A(37, d7, a0_155, a6);
					return 37;
				}
				word16 v30_165 = Mem102[a5 + 4:word16];
				word32 d1_162 = Mem102[a5 + 6:word32];
				*d1Out = d1_162;
				word32 a6_173 = Mem102[0x00010726:word32];
				(a6_173 + -42)();
				word32 d3_166 = (word32) v30_165;
				if (d0_34 != 0xFFFFFFFF)
					if ((d3_166 << 0x00000002) - d0_34 == 0x00000000)
					{
						word32 d1_185;
						*d1Out = d2;
						word32 a0_191;
						*a0Out = a1;
						return d1;
					}
					else
						goto l00005B08;
			}
		}
l00005B4E:
		fn00006AE0(d0_34, a6);
		fn00005B68(a6);
		fn00006AFE(d1, d7, a1, a6);
		d0 = d1;
		d1 = d2;
		d2 = d3;
		d3 = a0;
		a0 = a1;
		a1 = dwArg00;
	}
}

void fn00005B68(word32 a6)
{
	word32 d1_15 = Mem0[0x00015052:word32];
	if (d1_15 != 0x00000000)
		if (Mem0[0x0001516E:byte] == 0x00)
		{
			fn00005A58(a6);
			word32 a6_48 = Mem0[0x00010726:word32];
			(a6_48 + -36)();
			Mem55[0x00015052:word32] = 0x00000000;
			fn00005A7C(a6);
		}
		else
		{
			word32 a6_64 = Mem0[0x00010726:word32];
			(a6_64 + -36)();
			Mem69[0x00015052:word32] = 0x00000000;
		}
	return;
}

word32 fn00005B6E(word32 d0, word32 d1, word32 d3, word32 a0, word32 a1, word32 a6)
{
	if ((word16) d0 != 0x0000)
	{
		word16 v24_132 = (word16) d0;
		word32 d1_137;
		word32 d2_138;
		word32 d7_139;
		d0 = fn0000478A(d0, d1, a0, a1, a6, out d1_137, out d2_138, out d7_139);
		if ((byte) d0 == 0x00)
		{
			fn00005A58(a6);
			word32 a0_145 = 0x0002EA96;
			fn000073BC(a0_145);
			word32 d1_151 = DPB(0x00000006, v24_132, 0, 16);
			word32 d1_146;
			word32 a0_147;
			word32 d0_148 = fn00005AA0(d0, d1_137, d2_138, d3, d7_139, a0_145, a1, fp - 84, a6, a6, out d1_146, out a0_147);
			if ((word16) d1_151 - wLoc50 > 0x0000)
				fn00005B68(a6);
			else
			{
				a0_147 = 0x0001477C;
				word32 d1_176 = DPB(d1_151, (word16) DPB(d1_151, v24_132, 0, 16) - 0x0001, 0, 16);
				d1_176 = d1_176 - 0x00000001;
				while (d1_176 != 0xFFFFFFFF)
				{
					a0_147 = a0_147 + 0x00000004;
					d1_176 = d1_176 - 0x00000001;
				}
				d0_148 = fn00006B20(fp - 84, a6);
				fn00005B68(a6);
			}
			fn0000742E();
			fn00005A7C(a6);
			d0 = DPB(d0_148, 0x00, 0, 8);
			if (true)
			{
				Mem169[0x000106A8:word32] = Mem0[0x0001504E:word32];
				fn0000141A(40, d7_139, a0_147, a6);
				return 40;
			}
			else
			{
l00005C10:
				return d0;
			}
		}
		else
			goto l00005C10;
	}
	else
		goto l00005C10;
}

void fn00005CD2(word32 d0, word32 d1, word32 d2, word32 d3, word32 d5, word32 d6, word32 a0, word32 a1, word32 a3, word32 a6)
{
	Mem47[0x0001516F:bool] = true;
	if ((word16) d0 - 0x0001 == 0x0000)
	{
		Mem134[a1 + 0x00000000:byte] = (byte) fn00005B6E(DPB(0x00000006, Mem47[a0 + 0x00000000:word16], 0, 16), d1, d3, a0, a1, a6);
l00005E1E:
		Mem98[0x0001516F:bool] = false;
		return;
	}
	else
	{
		word16 v23_151 = (word16) d0;
		word16 v24_153 = (word16) d1;
		if ((word16) d0 != 0x0000)
		{
			fn00005FA4(d0, d2, d3, d5, d6, a0, a3);
			word32 d7_190 = DPB(0x00000004, v23_151, 0, 16);
			word32 a3_186 = 0x00014FCC;
			word32 d1_188 = DPB(0x00000006, v24_153, 0, 16);
			word32 d6_192 = DPB(d6, (word16) d7_190, 0, 16);
			word32 d7_194 = DPB(d7_190, (word16) d7_190 - 0x0001, 0, 16);
			do
			{
				word16 v35_206 = Mem47[a0 + 0x00000000:word16];
				word32 d0_207 = DPB(0x00000006, v35_206, 0, 16);
				if (v35_206 != 0x0000)
				{
					d0_207 = fn0000478A(d0_207, d1_188, a0, a1, a6, out d1_188, out d2, out d7_194);
					if ((byte) d0_207 != 0x00)
					{
l00005D30:
						d2 = DPB(d2, Mem47[a3_186 + 0x00000000:word16], 0, 16);
						Mem398[a0 + d2:byte] = (byte) d0_207;
						Mem400[a3_186 + 0x00000000:word16] = 0xFFFF;
						d6_192 = DPB(d6_192, (word16) d6_192 - 0x0001, 0, 16);
					}
				}
				else
					goto l00005D30;
				a0 = a0 + 0x00000002;
				a3_186 = a3_186 + 0x00000002;
				d7_194 = d7_194 - 0x00000001;
			} while (d7_194 != 0xFFFFFFFF);
			word32 v40_224 = Mem47[fp - 102:word32];
			if ((word16) d6_192 != 0x0000)
			{
				fn00005A58(a6);
				Mem233[fp - 102:word32] = v40_224;
				fn000073BC(0x0002EA96);
				word32 d7_248 = DPB(d7_194 - 0x00000001, v23_151, 0, 16);
				word32 a0_240;
				word32 d1_239;
				word32 d0_241 = fn00005AA0(d0_207, d1_188, d2, d3, d7_194, Mem233[fp - 102:word32], a1, fp - 98, a6, a6, out d1_239, out a0_240);
				word32 a3_245 = 0x00014FCC;
				word32 d6_246 = 0;
				word32 d7_250 = DPB(d7_248, (word16) d7_248 - 0x0001, 0, 16);
				do
				{
					if (Mem233[a3_245 + 0x00000000:word16] - 0xFFFF == 0x0000)
					{
						a0_240 = a0_240 + 0x00000002;
						a3_245 = a3_245 + 0x00000002;
						goto l00005E02;
					}
					a0_240 = a0_240 + 0x00000002;
					word32 d0_296 = DPB(d0_241, Mem233[a0_240 + 0x00000000:word16], 0, 16);
					if ((word16) d6_246 != 0x0000 && (word16) d0_296 - Mem233[a0_240 + -4:word16] == 0x0000)
						goto l00005DFA;
					Mem325[fp - 76:byte] = 0x00;
					word16 v52_323 = (word16) d0_296;
					if (true && (word16) d0_296 - wLoc5E <= 0x0000)
					{
						word32 a2_352 = 0x0001477C;
						word32 d0_353 = 0;
						word32 d1_357 = DPB(d1_239, (word16) DPB(d1_239, v52_323, 0, 16) - 0x0001, 0, 16);
						d1_357 = d1_357 - 0x00000001;
						while (d1_357 != 0xFFFFFFFF)
						{
							a2_352 = a2_352 + 0x00000004;
							d0_353 = d0_353 + Mem325[a2_352 + 0x00000000:word32];
							d1_357 = d1_357 - 0x00000001;
						}
						d1_239 = d0_353;
						d0_296 = fn00006B20(fp - 98, a6);
					}
					if (true)
					{
						Mem346[0x000106A8:word32] = Mem325[0x0001504E:word32];
						fn0000141A(40, d7_250, a0_240, a6);
						return;
					}
					d0_241 = DPB(d0_296, Mem233[a3_245 + 0x00000000:word16], 0, 16);
					Mem319[fp - 98 + d0_241:byte] = 0x00;
					a3_245 = a3_245 + 0x00000002;
l00005E02:
					d6_246 = (word32) ((word16) d6_246 + 0x0001);
					d7_250 = d7_250 - 0x00000001;
				} while (d7_250 != 0xFFFFFFFF);
				fn00005B68(a6);
				fn0000742E();
				fn00005A7C(a6);
l00005E1A:
				goto l00005E1E;
			}
			else
				goto l00005E1A;
		}
		else
			goto l00005E1A;
	}
fn00005CD2_exit:
}

void fn00005FA4(word32 d0, word32 d2, word32 d3, word32 d5, word32 d6, word32 a0, word32 a3)
{
	word32 d7_35 = DPB(0x00000004, (word16) d0, 0, 16);
	word32 a2_32 = 0x00014FCC;
	word32 d1_33 = 0;
	word32 d7_37 = DPB(d7_35, (word16) d7_35 - 0x0001, 0, 16);
	do
	{
		Mem43[a2_32 + 0x00000000:word16] = (word16) d1_33;
		a2_32 = a2_32 + 0x00000002;
		d1_33 = (word32) ((word16) d1_33 + 0x0001);
		d7_37 = d7_37 - 0x00000001;
	} while (d7_37 != 0xFFFFFFFF);
	word32 d5_52 = DPB(d5, (word16) d0, 0, 16);
	word32 a2_50 = 0x00014FCA;
	word32 d5_54 = DPB(d5, (word16) d5_52 + (word16) d5_52, 0, 16);
	word32 d7_56 = 2;
	do
	{
		d2 = DPB(d2, Mem43[a0 + d7_56:word16], 0, 16);
		if ((word16) d2 - Mem43[(a0 - 0x00000002) + d7_56:word16] <= 0x0000)
		{
			word32 d3_101 = DPB(d3, Mem43[a0 - 0x00000002 + d7_56:word16], 0, 16);
			Mem103[a2_50 + d7_56:word16] = (word16) d2;
			Mem105[a3 + 2 + d7_56:word16] = (word16) d3_101;
			d2 = DPB(d2, Mem105[a2_50 + 2 + d7_56:word16], 0, 16);
			d3 = DPB(d3, Mem105[a2_50 + d7_56:word16], 0, 16);
			Mem112[a2_50 + d7_56:word16] = (word16) d2;
			Mem114[a3 + 2 + d7_56:word16] = (word16) d3;
			word16 v33_117 = (word16) DPB(d6, (word16) d7_56, 0, 16) - 0x0002;
			d6 = DPB(d6, v33_117, 0, 16);
			if (v33_117 != 0x0000)
				do
				{
					d2 = DPB(d2, Mem114[a0 + d6:word16], 0, 16);
					if ((word16) d2 - Mem114[(a0 - 0x00000002) + d6:word16] > 0x0000)
						break;
					word32 d3_132 = DPB(d3, Mem114[a0 - 0x00000002 + d6:word16], 0, 16);
					Mem134[a2_50 + d6:word16] = (word16) d2;
					Mem136[a3 + 2 + d6:word16] = (word16) d3_132;
					d2 = DPB(d2, Mem136[a2_50 + 2 + d6:word16], 0, 16);
					d3 = DPB(d3, Mem136[a2_50 + d6:word16], 0, 16);
					Mem142[a2_50 + d6:word16] = (word16) d2;
					Mem144[a3 + 2 + d6:word16] = (word16) d3;
					word16 v44_145 = (word16) d6 - 0x0002;
					d6 = DPB(d6, v44_145, 0, 16);
				} while (v44_145 != 0x0000);
		}
		d7_56 = DPB(0x00000002, (word16) d7_56 + 0x0002, 0, 16);
	} while ((word16) d7_56 - (word16) d5_54 != 0x0000);
	return;
}

void fn00006AE0(word32 d0, word32 a6)
{
	word32 a6_20 = Mem0[0x00010726:word32];
	(a6_20 + -132)();
	Mem27[0x0001504C:word16] = (word16) d0;
	return;
}

void fn00006AFE(word32 d0, word32 d7, word32 a0, word32 a6)
{
	fn00005A7C(a6);
	fn00010066(d7, a0, a6);
	fn00005A58(a6);
	return;
}

word32 fn00006B20(word32 a5, word32 a6)
{
	word32 a0_15 = 0x00006B58 + 4;
	word32 d0_11 = Mem0[a5 + 0x00000000:word32];
	word32 d7_12 = 3;
	do
	{
		word32 v8_16 = d0_11 - Mem0[a0_15 + 0x00000000:word32];
		if (v8_16 == 0x00000000)
		{
			word32 a0_27 = Mem0[a0_15 + 0:word32];
			a0_27();
			return d0_11;
		}
		a0_15 = a0_15 + 0x00000008;
		d7_12 = d7_12 - 0x00000001;
	} while (d7_12 != 0xFFFFFFFF);
	Mem38[0x000106A8:word32] = Mem0[0x0001504E:word32];
	fn0000141A(39, d7_12, a0_15, a6);
	return 39;
}

word32 fn00006D74(word32 d0, word32 d7, word32 a0, word32 a6, word32 dwArg00, word32 dwArg04, word32 dwArg08, word32 dwArg0C, ptr32 a0Out)
{
	fn0000138E(d0, d7, a0, a6);
	Mem18[0x00015176:word32] = d0;
	fn000013D2(d0, d7, a6);
	Mem22[0x0001517A:word32] = 48;
	word32 a0_23 = 0x0002D8F2;
	*a0Out = a0_23;
	word32 a6_31 = Mem22[0x00000004:word32];
	(a6_31 + -444)();
	if (0xFF != 0x00)
	{
		Mem73[0x000106A4:word32] = 255;
		fn0000141A(26, d7, a0_23, a6);
		return 26;
	}
	else
	{
		Mem76[0x00015172:bool] = true;
		word32 a0_77 = Mem76[0x0001517A:word32];
		word32 v18_78 = Mem76[a0_77 + 20:word32];
		Mem79[0x0001517E:word32] = v18_78;
		fn0000138E(-1, d7, a0_77, a6);
		Mem83[0x00015182:word32] = -1;
		fn000013D2(-1, d7, a6);
		Mem87[0x00015186:word32] = 48;
		word32 a0_88 = 0x0002D901;
		*a0Out = a0_88;
		word32 a6_96 = Mem87[0x00000004:word32];
		(a6_96 + -444)();
		if (0x00 != 0x00)
		{
			Mem106[0x000106A4:word32] = 0;
			fn0000141A(26, d7, a0_88, a6);
			return 26;
		}
		else
		{
			Mem109[0x00015173:bool] = true;
			word32 a0_110 = Mem109[0x00015186:word32];
			*a0Out = a0_110;
			word32 v24_111 = Mem109[a0_110 + 20:word32];
			Mem112[0x0001518A:word32] = v24_111;
			word32 a1_113 = Mem112[0x00015186:word32];
			Mem115[a1_113 + 28:word16] = 0x0009;
			Mem117[a1_113 + 40:word32] = 0x0002D90E;
			word32 a6_122 = Mem117[0x00000004:word32];
			(a6_122 + -456)();
			if (0x00 != 0x00)
			{
				Mem132[0x000106A4:word32] = 0;
				fn0000141A(27, d7, a0_110, a6);
				return 27;
			}
			else
			{
				Mem135[0x00015174:bool] = true;
				word32 a0_143;
				*a0Out = dwArg08;
				return dwArg00;
			}
		}
	}
}

void fn00006E7A(word32 a6)
{
	if (Mem0[0x00015174:byte] != 0x00)
	{
		word32 a1_107 = Mem0[0x00015186:word32];
		Mem109[a1_107 + 28:word16] = 0x000A;
		Mem111[a1_107 + 40:word32] = 0x0002D90E;
		word32 a6_116 = Mem111[0x00000004:word32];
		(a6_116 + -456)();
		Mem120[0x00015174:bool] = false;
	}
	if (Mem0[0x00015173:byte] != 0x00)
	{
		word32 a6_101 = Mem0[0x00000004:word32];
		(a6_101 + -450)();
		Mem106[0x00015173:bool] = false;
	}
	fn000013FA(Mem0[0x00015186:word32], a6);
	Mem44[0x00015186:word32] = 0x00000000;
	word32 a0_49 = Mem44[0x00015182:word32];
	fn000013B2(a0_49, a6);
	Mem50[0x00015182:word32] = 0x00000000;
	if (Mem50[0x00015172:byte] != 0x00)
	{
		word32 a6_84 = Mem50[0x00000004:word32];
		(a6_84 + -450)();
		Mem95[0x00015172:bool] = false;
	}
	fn000013FA(Mem50[0x0001517A:word32], a6);
	Mem60[0x0001517A:word32] = 0x00000000;
	fn000013B2(Mem60[0x00015176:word32], a6);
	Mem66[0x00015176:word32] = 0x00000000;
	return;
}

word32 fn0000710E()
{
	word32 d0_12;
	word32 a0_7 = Mem0[0x0002D92C:word32];
	if (a0_7 - Mem0[0x0002D930:word32] == 0x00000000)
		d0_12 = 0;
	else
	{
		word32 a0_21 = a0_7 + 0x00000004;
		d0_12 = Mem0[a0_7 + 0x00000000:word32];
		if (a0_7 >= 0x000151E2)
			a0_21 = 0x00015196;
		Mem28[0x0002D92C:word32] = a0_21;
	}
	return d0_12;
}

word32 fn0000716E(word32 d0, word32 d1, word32 d2, ptr32 d1Out, ptr32 d2Out)
{
	*d1Out = d1;
	word32 a0_7 = Mem0[0x0002D934:word32];
	if (a0_7 - Mem0[0x0002D938:word32] == 0x00000000)
	{
		word32 d2_21;
		*d2Out = 0;
	}
	else
	{
		d0 = DPB(d0, Mem0[a0_7 + 0x00000000:word16], 0, 16);
		word32 d1_31;
		*d1Out = DPB(d1, Mem0[a0_7 + 0x00000002:word16], 0, 16);
		word32 a0_33 = a0_7 + 0x00000006;
		word32 d2_35;
		*d2Out = DPB(d2, Mem0[a0_7 + 0x00000004:word16], 0, 16);
		if (a0_7 >= 0x0001521E)
			a0_33 = 0x000151E8;
		Mem41[0x0002D934:word32] = a0_33;
	}
	return d0;
}

word32 fn000071DA(word32 d2, word32 d3, word32 d6, word32 d7, word32 a0, word32 a6, ptr32 d1Out, ptr32 d6Out, ptr32 d7Out, ptr32 a1Out)
{
	*d1Out = d1;
	*d6Out = d6;
	*d7Out = d7;
	*a1Out = a1;
	if (Mem0[0x0002D93C:byte] != 0x00)
	{
		byte v7_31 = Mem0[0x0002D93C:byte] - 0x01;
		Mem32[0x0002D93C:byte] = v7_31;
		if (v7_31 == 0x00)
		{
			fn0000754E(d2, d3, a6);
			word32 d1_45;
			word32 d6_46;
			word32 d7_47;
			word32 a1_48;
			d0 = fn0000748C(d2, d6, d7, Mem32[Mem32[0x00015470:word32]:word32], a6, dwLoc08, out d1_45, out d6_46, out d7_47, out a1_48);
		}
	}
	return d0;
}

word32 fn00007204(word32 d2)
{
	if (Mem0[0x0002D93C:byte] - 0xFF != 0x00)
	{
		if (Mem0[0x0002D93C:byte] == 0x00)
			d6 = fn0000752E(d2, dwLoc04);
		Mem23[0x0002D93C:byte] = Mem0[0x0002D93C:byte] + 0x01;
	}
	return d6;
}

word32 fn00007224(word32 d2, word32 d3, word32 d6, word32 d7, word32 a0, word32 a6, ptr32 d1Out, ptr32 d6Out, ptr32 d7Out)
{
	Mem2[0x0002D93C:byte] = 0x00;
	fn0000754E(d2, d3, a6);
	word32 d1_20;
	word32 d6_21;
	word32 d7_22;
	word32 a1_23;
	return fn0000748C(d2, d6, d7, Mem2[Mem2[0x00015470:word32]:word32], a6, dwLoc08, out d1_20, out d6_21, out d7_22, out a1_23);
}

word32 fn00007244(word32 d1, word32 d2, word32 d4, word32 a6, word32 dwArg00, ptr32 d7Out, ptr32 a0Out)
{
	word32 a0_24 = 0x00015244;
	fn00007986(d1, d2, 4, 32, 32, a0_24, 0x0001526C, a6);
	word32 a1_28 = 0x0002E778;
	Mem33[0x0001546C:word16] = Mem0[a1_28 + 0x00000000:word16];
	Mem37[0x0001546E:word16] = Mem33[a1_28 + 0x00000002:word16];
	word32 d7_44 = DPB(0x00000020, Mem37[a1_28 + 0x00000008:word16], 0, 16);
	fn000079BE(d2, DPB(0x00000020, Mem37[a1_28 + 0x00000006:word16], 0, 16), d7_44, a0_24, a1_28 + 0x0000000A);
	fn00007622(DPB(0x00000004, Mem37[0x0002D8EE:word16], 0, 16), DPB(d1, Mem37[0x0002D8F0:word16], 0, 16), d4, 32, d7_44, 0x00015226, a0_24);
	Mem56[0x00015224:bool] = true;
	word32 d7_63;
	*d7Out = a0;
	word32 a0_65;
	*a0Out = a1;
	return d1;
}

void fn000072A6(word32 d0, word32 a0)
{
	Mem7[0x00015224:bool] = false;
	fn000077C8(d0, 0x00015226);
	return;
}

void fn00007306(word32 d0, word32 d1)
{
	word32 a1_9 = 0x000154AE;
	Mem11[0x000154AA:word32] = a1_9;
	word32 a0_8 = 0x0002D93E;
	Mem13[a1_9 + 0x00000000:word32] = a0_8;
	fn0000732A(d0, d1, a0_8);
	return;
}

void fn0000732A(word32 d0, word32 d1, word32 a0)
{
	word32 d0_10 = DPB(d0, Mem0[0x0002D8EE:word16], 0, 16);
	word32 d1_12 = DPB(d1, Mem0[0x0002D8F0:word16], 0, 16);
	if ((word16) d0_10 - Mem0[a0 + 0x00000000:word16] <= 0x0000)
		d0_10 = DPB(d0, Mem0[a0 + 0x00000000:word16], 0, 16);
	else if ((word16) d0_10 - Mem0[a0 + 2:word16] >= 0x0000)
		d0_10 = DPB(d0, Mem0[a0 + 2:word16], 0, 16);
	if ((word16) d1_12 - Mem0[a0 + 4:word16] <= 0x0000)
		d1_12 = DPB(d1, Mem0[a0 + 4:word16], 0, 16);
	else if ((word16) d1_12 - Mem0[a0 + 6:word16] >= 0x0000)
		d1_12 = DPB(d1, Mem0[a0 + 6:word16], 0, 16);
	Mem25[0x0002D8EE:word16] = (word16) d0_10;
	Mem27[0x0002D8F0:word16] = (word16) d1_12;
	return;
}

void fn0000738C(word32 d2, word32 d6, word32 d7, word32 a0, word32 a6)
{
	word32 a1_7 = Mem0[0x00015470:word32];
	if (a1_7 != 0x000154A0)
	{
		Mem24[0x000154A4:word16] = 0x0000;
		Mem25[0x00015225:bool] = false;
		Mem28[a1_7 + 0x00000004:word32] = a0;
		Mem30[0x00015470:word32] = a1_7 + 0x00000004;
		word32 d1_35;
		word32 d6_36;
		word32 d7_37;
		word32 a1_38;
		fn0000748C(d2, d6, d7, a0, a6, dwLoc08, out d1_35, out d6_36, out d7_37, out a1_38);
	}
	return;
}

void fn000073BC(word32 a0)
{
	word32 a1_7 = Mem0[0x00015470:word32];
	if (a1_7 != 0x000154A0)
	{
		Mem18[a1_7 + 0x00000004:word32] = Mem0[a1_7 + 0x00000000:word32];
		Mem20[0x00015470:word32] = a1_7 + 0x00000004;
		if (a0 - Mem20[0x000154A6:word32] != 0x00000000)
		{
			Mem25[0x000154A4:word16] = 0x0000;
			Mem26[0x00015225:bool] = false;
			Mem28[0x000154A6:word32] = a0;
			Mem30[0x000154A4:word16] = 0x0014;
		}
	}
	return;
}

void fn0000742E()
{
	word32 a0_7 = Mem0[0x00015470:word32];
	if (a0_7 != 0x00015474)
	{
		Mem15[0x000154A4:word16] = 0x0000;
		Mem16[0x00015225:bool] = false;
		Mem19[0x00015470:word32] = a0_7 - 0x00000004;
		Mem21[0x000154A6:word32] = Mem19[a0_7 - 0x00000004:word32];
		Mem23[a0_7 - 0x00000004:word32] = Mem21[a0_7 + 0x00000000:word32];
		Mem25[0x000154A4:word16] = 0x0014;
	}
	return;
}

word32 fn00007468(word32 d2, word32 d6, word32 d7, word32 a6, ptr32 d7Out)
{
	word32 a0_8 = 0x0002E778;
	word32 a1_9 = 0x00015474;
	Mem11[a1_9 + 0x00000000:word32] = a0_8;
	Mem13[0x00015470:word32] = a1_9;
	word32 d1_20;
	word32 d6_21;
	word32 d7_22;
	word32 a1_23;
	fn0000748C(d2, d6, d7, a0_8, a6, dwLoc0C, out d1_20, out d6_21, out d7_22, out a1_23);
	return d6_21;
}

word32 fn0000748C(word32 d2, word32 d6, word32 d7, word32 a0, word32 a6, word32 dwArg00, ptr32 d1Out, ptr32 d6Out, ptr32 d7Out, ptr32 a1Out)
{
	word16 v10_25 = Mem0[a0 + 0x00000000:word16];
	Mem28[0x0001546C:word16] = v10_25;
	word16 v13_29 = Mem28[a0 + 0x00000002:word16];
	Mem32[0x0001546E:word16] = v13_29;
	word16 v15_36 = Mem32[a0 + 0x00000004:word16];
	word32 a0_33 = 0x0002D946;
	word32 d1_38 = (word32) v15_36;
	fn0000136C(0x8000002D, d1_38, a0_33);
	fn0000136C(0x8000002C, d1_38, a0_33);
	word16 v16_44 = Mem32[a0 + 0x00000006:word16];
	word16 v17_47 = Mem32[a0 + 0x00000008:word16];
	word32 d6_46 = DPB(d6, v16_44, 0, 16);
	word32 d7_49 = DPB(d7, v17_47, 0, 16);
	fn00007848(d2, d6_46, d7_49, 0x00015226, a0 + 0x0000000A);
	Mem54[0x00015240:word32] = 0xFFFFFFFF;
	word32 a6_64 = Mem54[0x0001072A:word32];
	(a6_64 + -708)();
	if (Mem54[0x00015240:word32] != 0x00000000)
	{
		word32 a6_113 = Mem54[0x0001072E:word32];
		(a6_113 + -378)();
		word32 a6_121 = Mem54[0x0001072E:word32];
		(a6_121 + -390)();
	}
	word32 d1_91;
	*d1Out = d6;
	word32 d6_93;
	*d6Out = d7;
	word32 d7_95;
	*d7Out = a0;
	word32 a1_99;
	*a1Out = a2;
	return d1;
}

word32 fn0000752E(word32 d2, word32 dwArg00)
{
	fn00007848(d2, 16, 1, 0x00015226, 0x00010680);
	return d7;
}

void fn0000754E(word32 d2, word32 d3, word32 a6)
{
	if (Mem0[0x00015224:byte] != 0x00)
	{
		word16 v14_56 = Mem0[0x0002D8EE:word16];
		word16 v17_60 = (word16) DPB(d2, v14_56, 0, 16) - Mem0[0x0001546C:word16];
		word32 d2_65 = (int32) (int16) DPB(d2, v17_60, 0, 16);
		word32 a2_67 = 0x00015226;
		word32 a6_77 = Mem0[0x0001072A:word32];
		(a6_77 + -426)();
		word32 a6_97 = Mem0[0x0001072A:word32];
		(a6_97 + -426)();
		if (Mem0[0x000106AC:word16] - 0x0027 == 0x0000)
		{
			word32 a0_105 = Mem0[Mem0[a2_67 + 14:word32]:word32];
			word32 d0_109 = DPB(d2_65, (word16) DPB(d2_65, Mem0[a2_67 + 4:word16], 0, 16) >>u 0x0003, 0, 16);
			__bset(Mem0[a0_105 + 1 + d0_109:byte], 0x0007, out Mem0[a0_105 + 1 + d0_109:byte]);
			if (Mem0[0x000154A4:word16] != 0x0000)
			{
				word16 v28_116 = Mem0[0x000154A4:word16] - 0x0001;
				Mem117[0x000154A4:word16] = v28_116;
				if (v28_116 <= 0x0000)
					Mem120[0x00015225:bool] = true;
			}
		}
	}
	return;
}

word32 fn000075F6(word32 d2, word32 d6, word32 d7, word32 a6)
{
	if (Mem0[0x00015225:byte] != 0x00)
	{
		word32 a0_30 = Mem0[0x000154A6:word32];
		Mem33[Mem0[0x00015470:word32]:word32] = a0_30;
		word32 d1_38;
		word32 d7_40;
		word32 a1_41;
		fn0000748C(d2, d6, d7, a0_30, a6, dwLoc0C, out d1_38, out d6, out d7_40, out a1_41);
		Mem43[0x00015225:bool] = false;
	}
	return d6;
}

void fn00007622(word32 d0, word32 d1, word32 d4, word32 d6, word32 d7, word32 a0, word32 a1)
{
	Mem48[a0 + 10:word32] = 0x00000000;
	Mem49[a0 + 14:word32] = 0x00000000;
	Mem51[a0 + 6:word16] = 0xFFFF;
	Mem53[a0 + 8:word16] = 0xFFFF;
	word16 v28_54 = (word16) d6 + 0x000F;
	word32 d6_55 = DPB(0x00000020, v28_54, 0, 16);
	word16 v30_57 = (word16) d6_55 & 0xFFF0;
	word32 d6_58 = DPB(d6_55, v30_57, 0, 16);
	word16 v31_59 = (word16) d6_58;
	Mem60[a0 + 4:word16] = v31_59;
	Mem62[a0 + 0x00000000:word32] = a1;
	word16 v33_65 = (word16) d6_58;
	word32 d1_66 = (word32) v33_65;
	fn0000136C(0x81000000, d1_66, 0x0002D966);
	word32 a0_69 = 0x0002D976;
	fn0000136C(0x81000000, d1_66, a0_69);
	word16 v16_41 = (word16) d0;
	word32 d4_200 = (int32) (int16) DPB(d4, v16_41, 0, 16);
	word32 a6_76 = Mem62[0x0001072A:word32];
	(a6_76 + -1020)();
	if (false)
	{
		fn0000141A(16, d7, a0_69, a0);
		return;
	}
	else
	{
		Mem141[a0 + 10:word32] = 0x81000000;
		word32 a6_147 = Mem141[0x0001072A:word32];
		(a6_147 + -1020)();
		word32 a6_150 = a0;
		if (false)
		{
			fn0000141A(16, d7, a0_69, a0);
			return;
		}
		else
		{
			word32 a3_164;
			Mem158[a0 + 14:word32] = 0x81000000;
			word16 v40_159 = Mem158[0x000106AC:word16] - 0x0027;
			if (v40_159 == 0x0000)
				a3_164 = 0x0002D98E;
			else
			{
				a3_164 = 0x0002D99E;
				fn0000136C(0x82000022, Mem158[a0 + 14:word32], a3_164);
			}
			word32 d7_166 = 2;
			do
			{
				fn0000136C(0x82000020, d7_166, a3_164);
				word32 a6_181 = Mem158[0x0001072A:word32];
				(a6_181 + -930)();
				a6_150 = a6_300;
				if (true)
				{
					Mem196[a6_300 + 6:word16] = 0x0020;
					word16 v46_197 = Mem196[0x000106AC:word16] - 0x0027;
					if (v46_197 == 0x0000)
					{
						word32 a0_270 = 0x0002D9B6;
						fn0000136C(0x82000020, 0x82000021, a0_270);
						word32 a6_282 = Mem196[0x0001072A:word32];
						(a6_282 + -930)();
						a6_150 = a6_300;
						if (false)
						{
							fn0000141A(17, d7_166, a0_270, a6_300);
							return;
						}
						else
						{
							Mem292[a6_300 + 8:word16] = 0x0020;
l00007778:
							word32 a6_214 = Mem196[0x0001072A:word32];
							(a6_214 + -426)();
							word32 a6_227 = Mem196[0x0001072A:word32];
							(a6_227 + -426)();
							if (Mem196[0x000106AC:word16] - 0x0027 == 0x0000)
							{
								word32 a0_263 = Mem196[Mem196[a6_150 + 14:word32]:word32];
								word32 d0_267 = DPB(d4_200, (word16) DPB(d4_200, (word16) d6_58, 0, 16) >>u 0x0003, 0, 16);
								__bset(Mem196[a0_263 + 1 + d0_267:byte], 0x0007, out Mem196[a0_263 + 1 + d0_267:byte]);
							}
							return;
						}
					}
					else
						goto l00007778;
				}
				d7_166 = d7_166 + 0x00000002;
				word32 a6_300 = a6_150;
			} while (d7_166 < 0x00000008);
			fn0000141A(17, d7_166, a3_164, a6_300);
			return;
		}
	}
fn00007622_exit:
}

void fn000077C8(word32 d0, word32 a0)
{
	word16 v9_22 = Mem0[a0 + 6:word16];
	word32 d0_149 = DPB(d0 - 0x00000001, v9_22, 0, 16);
	word32 a6_131 = a0;
	word16 v11_25 = (word16) d0_149 - 0xFFFF;
	if (v11_25 != 0x0000)
	{
		d0_149 = (int32) (int16) d0_149;
		word32 a6_154 = Mem0[0x0001072A:word32];
		(a6_154 + -414)();
		Mem161[a0 + 6:word16] = 0xFFFF;
		a6_131 = a0;
	}
	word16 v17_45 = Mem0[a6_131 + 8:word16];
	word16 v18_47 = (word16) DPB(d0_149, v17_45, 0, 16) - 0xFFFF;
	if (v18_47 != 0x0000)
	{
		word32 a6_142 = Mem0[0x0001072A:word32];
		(a6_142 + -414)();
		Mem147[a6_131 + 8:word16] = 0xFFFF;
	}
	word32 d0_61 = Mem0[a6_131 + 10:word32];
	if (d0_61 != 0x00000000)
	{
		word32 a6_127 = Mem0[0x0001072A:word32];
		(a6_127 + -1032)();
		Mem132[a6_131 + 10:word32] = 0x00000000;
	}
	word32 d0_75 = Mem0[a6_131 + 14:word32];
	if (d0_75 != 0x00000000)
	{
		word32 a6_102 = Mem0[0x0001072A:word32];
		(a6_102 + -1032)();
		Mem117[a6_131 + 14:word32] = 0x00000000;
	}
	return;
}

void fn00007848(word32 d2, word32 d6, word32 d7, word32 a0, word32 a1)
{
	fn000079BE(d2, d6, d7, Mem0[a0 + 0x00000000:word32], a1);
	word16 v11_31 = Mem0[a0 + 4:word16];
	word32 d1_32 = (word32) v11_31;
	fn0000136C(0x81000000, d1_32, 0x0002D966);
	word32 a0_35 = 0x0002D976;
	fn0000136C(0x81000000, d1_32, a0_35);
	word32 a6_42 = Mem0[0x0001072A:word32];
	(a6_42 + -1020)();
	if (false)
	{
		fn0000141A(16, d7, a0_35, a0);
		return;
	}
	else
	{
		Mem96[0x00015238:word32] = 0x81000000;
		word32 a6_103 = Mem96[0x0001072A:word32];
		(a6_103 + -1020)();
		if (false)
		{
			word32 a6_116 = Mem96[0x0001072A:word32];
			(a6_116 + -1032)();
			fn0000141A(16, d7, a0_35, a0);
			return;
		}
		else
		{
			Mem123[0x0001523C:word32] = 0x81000000;
			word32 a6_133 = Mem123[0x0001072A:word32];
			(a6_133 + -1026)();
			word32 a6_146 = Mem123[0x0001072A:word32];
			(a6_146 + -1026)();
			word16 v28_150 = Mem123[0x000106AC:word16] - 0x0027;
			if (v28_150 == 0x0000)
			{
				word32 d0_193 = DPB(0x81000000, Mem123[a0 + 4:word16], 0, 16);
				word32 a0_191 = Mem123[Mem123[0x0001523C:word32]:word32];
				word32 d0_195 = DPB(d0_193, (word16) d0_193 >>u 0x0003, 0, 16);
				__bset(Mem123[a0_191 + 1 + d0_195:byte], 0x0007, out Mem123[a0_191 + 1 + d0_195:byte]);
			}
			word32 a6_158 = Mem123[0x0001072A:word32];
			(a6_158 + -1032)();
			word32 v34_162 = Mem123[0x00015238:word32];
			Mem163[a0 + 10:word32] = v34_162;
			word32 a6_169 = Mem163[0x0001072A:word32];
			(a6_169 + -1032)();
			Mem174[a0 + 14:word32] = Mem163[0x0001523C:word32];
			return;
		}
	}
}

void fn00007986(word32 d1, word32 d2, word32 d5, word32 d6, word32 d7, word32 a0, word32 a1, word32 a6)
{
	word16 v9_24 = (word16) d5;
	word32 d0_25 = DPB(0x00000004, v9_24, 0, 16);
	word32 a6_38 = Mem0[0x0001072A:word32];
	(a6_38 + -390)();
	word32 a1_53 = a1;
	word32 a0_55 = a0 + 0x0008;
	word32 d0_60 = DPB(d0_25, (word16) DPB(d0_25, (word16) d6, 0, 16) >>u 0x0003, 0, 16) *u (word16) d7;
	word32 d5_62 = DPB(0x00000004, (word16) d5 - 0x0001, 0, 16);
	do
	{
		Mem68[a0_55 + 0x00000000:word32] = a1_53;
		a0_55 = a0_55 + 0x00000004;
		a1_53 = DPB(a1_53, (word16) a1_53 + (word16) d0_60, 0, 16);
		d5_62 = d5_62 - 0x00000001;
	} while (d5_62 != 0xFFFFFFFF);
	return;
}

void fn000079BE(word32 d2, word32 d6, word32 d7, word32 a0, word32 a1)
{
	fn000095F6(0x00000200, 0, 0x0001526C);
	word32 d5_52 = (word32) Mem0[a0 + 5:byte];
	word32 d5_109 = DPB(d5_52, (word16) d5_52 - 0x0001, 0, 16);
	word32 d6_46 = DPB(d6, (word16) DPB(d6, (word16) d6 + 0x000F, 0, 16) >>u 0x0004, 0, 16);
	word32 d0_57 = DPB(0x00000200, (word16) d5_109, 0, 16) *u (word16) d6_46;
	word32 d7_48 = DPB(d7, (word16) d7 - 0x0001, 0, 16);
	word32 d0_59 = DPB(d0_57, (word16) d0_57 + (word16) d0_57, 0, 16);
	word32 a2_61 = a0 + 8;
	do
	{
		a2_61 = a2_61 + 0x00000004;
		word32 a3_100 = Mem0[a2_61 + 0x00000000:word32];
		word32 a4_103 = a1;
		word32 d1_104 = (word32) (word16) d7_48;
		do
		{
			d2 = DPB(d2, (word16) DPB(d2, (word16) d6_46, 0, 16) - 0x0001, 0, 16);
			do
			{
				Mem90[a3_100 + 0x00000000:word16] = Mem0[a4_103 + 0x00000000:word16];
				a4_103 = a4_103 + 0x00000002;
				a3_100 = a3_100 + 0x00000002;
				d2 = d2 - 0x00000001;
			} while (d2 != 0xFFFFFFFF);
			word32 a3_95 = DPB(a3_100 + 0x00000002, (word16) a3_100 - (word16) d6_46, 0, 16);
			a3_100 = DPB(a3_95, (word16) DPB(a3_95, (word16) a3_95 - (word16) d6_46, 0, 16) + Mem90[a0 + 0x00000000:word16], 0, 16);
			a4_103 = DPB(a1 + 0x0000000C, (word16) a4_103 + (word16) d0_59, 0, 16);
			d1_104 = d1_104 - 0x00000001;
		} while (d1_104 != 0xFFFFFFFF);
		word32 a1_106 = DPB(a1 + 0x0000000A, (word16) a1 + (word16) d6_46, 0, 16);
		a1 = DPB(a1_106, (word16) a1_106 + (word16) d6_46, 0, 16);
		d5_109 = d5_109 - 0x00000001;
	} while (d5_109 != 0xFFFFFFFF);
	return;
}

word32 fn00007B46(word32 d0, word32 d7, word32 a6)
{
	word32 a0_26 = 0x0002D9DE;
	word32 a6_33 = Mem0[0x0001072A:word32];
	(a6_33 + -1050)();
	if (d0 == 0xFFFFFFFF)
	{
		fn0000141A(18, d7, a0_26, a6);
		return a6;
	}
	else
	{
		Mem133[0x00015500:word32] = d0;
		fn0000136C(0x80000032, d0, 0x0002DA26);
		word32 a6_145 = Mem133[0x0001072E:word32];
		(a6_145 + -474)();
		word32 a1_150 = 0x0001550C;
		word16 v20_153 = Mem133[a1_150 + 4:word16];
		word32 d1_154 = (word32) v20_153;
		word16 v21_155 = (word16) d1_154 - Mem133[a1_150 + 0x00000000:word16];
		word16 v23_157 = (word16) DPB(d1_154, v21_155, 0, 16) - 0x0160;
		word16 v24_159 = (word16) DPB(d1_154, v23_157, 0, 16) >> 0x0001;
		word32 a0_149 = 0x0002DA26;
		fn0000136C(0x80000021, DPB(d1_154, v24_159, 0, 16), a0_149);
		word16 v25_163 = Mem133[a1_150 + 6:word16];
		word16 v26_165 = (word16) DPB(d1_154, v25_163, 0, 16) - Mem133[a1_150 + 2:word16];
		word16 v27_167 = (word16) DPB(d1_154, v26_165, 0, 16) - 0x00F0;
		word16 v28_169 = (word16) DPB(d1_154, v27_167, 0, 16) >> 0x0001;
		fn0000136C(0x80000022, DPB(d1_154, v28_169, 0, 16), a0_149);
		word32 a6_182 = Mem133[0x0001072A:word32];
		(a6_182 + -918)();
		if (false)
		{
			fn0000141A(19, d7, 0x00000000, a6);
			return a6;
		}
		else
		{
			Mem193[0x00015504:word32] = 0x00000160;
			if (Mem193[364:word32] - Mem193[360:word32] != 0x00000030)
			{
				fn0000141A(20, d7, 0x00000160, a6);
				return a6;
			}
			else
			{
				word32 a6_211 = Mem193[0x0001072A:word32];
				(a6_211 + -918)();
				if (false)
				{
					fn0000141A(19, d7, 0x00000160, a6);
					return a6;
				}
				else
				{
					Mem222[0x00015508:word32] = 0x00000160;
					if (Mem222[364:word32] - Mem222[360:word32] != 0x00000030)
					{
						fn0000141A(20, d7, 0x00000160, a6);
						return a6;
					}
					else
					{
						word32 d1_234 = Mem222[0x00015504:word32];
						fn0000136C(0x8000002E, d1_234, 0x0002DA26);
						word32 a6_243 = Mem222[0x0001072E:word32];
						(a6_243 + -612)();
						if (false)
						{
							fn0000141A(21, d7, 0x00000000, a6);
							return a6;
						}
						else
						{
							Mem254[0x000154EC:word32] = 0x8000002E;
							word32 d1_257 = Mem254[0x000154EC:word32];
							fn0000136C(0x80000070, d1_257, 0x0002DAC6);
							word32 a6_266 = Mem254[0x0001072E:word32];
							(a6_266 + -606)();
							if (false)
							{
								fn0000141A(22, d7, 0x00000000, a6);
								return a6;
							}
							else
							{
								Mem277[0x000154F0:word32] = 0x80000070;
								word32 a6_288 = Mem277[0x0001072E:word32];
								(a6_288 + -270)();
								word32 a6_298 = Mem277[0x00000004:word32];
								(a6_298 + -198)();
								Mem302[0x000154F4:word32] = 12;
								word32 a6_310 = Mem302[0x0001072A:word32];
								(a6_310 + -594)();
								word32 a6_321 = Mem302[0x0001072A:word32];
								(a6_321 + -378)();
								word32 a6_330 = Mem302[0x0001072A:word32];
								(a6_330 + -366)();
								word32 a6_341 = Mem302[0x0001072A:word32];
								(a6_341 + -372)();
								word32 a6_350 = Mem302[0x0001072A:word32];
								(a6_350 + -366)();
								word32 a6_361 = Mem302[0x0001072A:word32];
								(a6_361 + -378)();
								word32 a6_370 = Mem302[0x0001072A:word32];
								(a6_370 + -366)();
								word32 a6_381 = Mem302[0x0001072A:word32];
								(a6_381 + -372)();
								word32 a6_390 = Mem302[0x0001072A:word32];
								(a6_390 + -366)();
								word32 a6_401 = Mem302[0x0001072A:word32];
								(a6_401 + -378)();
								word32 a6_409 = Mem302[0x00000004:word32];
								(a6_409 + -132)();
								word32 a0_413 = Mem302[0x000154EC:word32];
								word32 v73_415 = Mem302[0x000154F4:word32];
								Mem416[a0_413 + 64:word32] = v73_415;
								word32 a6_421 = Mem416[0x00000004:word32];
								(a6_421 + -138)();
								word32 a6_429 = Mem416[0x0001072E:word32];
								(a6_429 + -390)();
								word32 a0_433 = Mem416[0x000154EC:word32];
								word32 a6_440 = Mem416[0x0001072E:word32];
								(a6_440 + -768)();
								if (true)
								{
									fn0000141A(23, d7, a0_433, 12);
									return 12;
								}
								else
								{
									Mem451[0x000154F8:word32] = 0;
									word32 a0_452 = Mem451[0x000154EC:word32];
									Mem457[fp - 0x00000024:word32] = 12;
									word32 a6_459 = Mem457[0x0001072E:word32];
									(a6_459 + -768)();
									if (true)
									{
										fn0000141A(23, d7, a0_452, 12);
										return 12;
									}
									else
									{
										Mem470[0x000154FC:word32] = 0;
										Mem473[0x000154E0:word32] = Mem470[Mem470[0x00015504:word32] + 8:word32];
										Mem476[0x000154E4:word32] = Mem473[Mem473[0x00015508:word32] + 8:word32];
										Mem478[0x000154E8:word32] = Mem476[0x000154E4:word32];
										return 12;
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

void fn00007EBE(word32 a6)
{
	word32 a6_20 = Mem0[0x0001072A:word32];
	(a6_20 + -228)();
	word32 d0_47 = Mem0[0x000154F8:word32];
	if (d0_47 != 0x00000000)
	{
		word32 a6_241 = Mem0[0x0001072E:word32];
		(a6_241 + -774)();
		Mem245[0x000154F8:word32] = 0x00000000;
	}
	word32 d0_59 = Mem0[0x000154FC:word32];
	if (d0_59 != 0x00000000)
	{
		word32 a6_226 = Mem0[0x0001072E:word32];
		(a6_226 + -774)();
		Mem230[0x000154FC:word32] = 0x00000000;
	}
	word32 d0_71 = Mem0[0x000154EC:word32];
	if (d0_71 != 0x00000000)
	{
		word32 a6_208 = Mem0[0x0001072A:word32];
		(a6_208 + -540)();
		word32 a6_216 = Mem0[0x0001072E:word32];
		(a6_216 + -384)();
	}
	word32 d0_83 = Mem0[0x000154F0:word32];
	if (d0_83 != 0x00000000)
	{
		word32 a6_184 = Mem0[0x0001072E:word32];
		(a6_184 + -60)();
		word32 a6_193 = Mem0[0x0001072E:word32];
		(a6_193 + -72)();
		Mem197[0x000154F0:word32] = 0x00000000;
	}
	word32 d0_95 = Mem0[0x000154EC:word32];
	if (d0_95 != 0x00000000)
	{
		word32 a6_170 = Mem0[0x0001072E:word32];
		(a6_170 + -66)();
		Mem174[0x000154EC:word32] = 0x00000000;
	}
	word32 d0_107 = Mem0[0x00015504:word32];
	if (d0_107 != 0x00000000)
	{
		word32 a6_156 = Mem0[0x0001072A:word32];
		(a6_156 + -924)();
		Mem160[0x00015504:word32] = 0x00000000;
	}
	word32 d0_119 = Mem0[0x00015508:word32];
	if (d0_119 != 0x00000000)
	{
		word32 a6_142 = Mem0[0x0001072A:word32];
		(a6_142 + -924)();
		Mem146[0x00015508:word32] = 0x00000000;
	}
	return;
}

void fn00007FD4(word32 d7, word32 a0, word32 a6)
{
	word32 a6_17 = Mem0[0x0001072A:word32];
	(a6_17 + -228)();
	word32 d7_31 = DPB(d7, 0x0B3F, 0, 16);
	do
	{
		Mem36[a0 + 0x00000000:word32] = 0;
		word32 a0_37 = a0 + 0x00000004;
		Mem39[a0_37 + 0x00000000:word32] = 0;
		Mem42[a0_37 + 0x00000004:word32] = 0;
		Mem45[a0_37 + 0x00000008:word32] = 0;
		Mem48[a0_37 + 0x0000000C:word32] = 0;
		Mem51[a0_37 + 0x00000010:word32] = 0;
		Mem54[a0_37 + 0x00000014:word32] = 0;
		Mem57[a0_37 + 0x00000018:word32] = 0;
		a0 = a0_37 + 0x0000001C;
		d7_31 = d7_31 - 0x00000001;
	} while (d7_31 != 0xFFFFFFFF);
	return;
}

word32 fn00008006(word32 d1, word32 d4, word32 d5, word32 d6, word32 d7, word32 a6, ptr32 d3Out, ptr32 d4Out, ptr32 d5Out, ptr32 d6Out, ptr32 a3Out)
{
	word32 a6_24 = fn00008546(d1, d4, d5, d6, d7, a6);
	fn00001442(d0);
	Mem27[fp - 0x0000001C:word32] = a6_24;
	word32 a6_29 = Mem27[0x0001072A:word32];
	(a6_29 + -228)();
	word32 v12_45 = Mem27[fp - 0x0000001C:word32];
	if (Mem27[0x000154DE:byte] != 0x00)
		;
	Mem55[fp - 0x0000001C:word32] = v12_45;
	word32 a6_57 = Mem55[0x0001072E:word32];
	(a6_57 + -780)();
	word32 v18_58 = Mem55[fp - 0x0000001C:word32];
	word32 d0_61 = Mem55[0x000106B6:word32];
	do
		;
	while (d0_61 - Mem55[0x000106B6:word32] == 0x00000000);
	word32 a0_66 = Mem55[0x000154E4:word32];
	Mem68[0x000154E4:word32] = Mem55[0x000154E0:word32];
	Mem70[0x000154E0:word32] = a0_66;
	Mem72[0x000154E8:word32] = Mem70[0x000154E4:word32];
	Mem74[0x000154DE:byte] = ~Mem72[0x000154DE:byte];
	word32 a6_78 = fn0000867C(d4, d6, d7, v18_58);
	word32 d3_79;
	word32 d4_80;
	word32 d5_81;
	word32 d6_82;
	word32 a3_83;
	word32 d2_84 = fn00008134(d4, d6, d7, a6_78, out d3_79, out d4_80, out d5_81, out d6_82, out a3_83);
	word32 d6_85;
	*d6Out = fn000075F6(d2_84, d6_82, d7, a6_78);
	fn00008E9A();
	return d2_84;
}

word32 fn000080A0(word32 d1, word32 d4, word32 d5, word32 d6, word32 d7, word32 a6, ptr32 d5Out, ptr32 d6Out)
{
	*d5Out = d5;
	word32 a6_24 = fn00008546(d1, d4, d5, d6, d7, a6);
	fn00001442(d0);
	Mem27[fp - 0x0000001C:word32] = a6_24;
	word32 a6_29 = Mem27[0x0001072A:word32];
	(a6_29 + -228)();
	word32 v12_43 = Mem27[fp - 0x0000001C:word32];
	if (Mem27[0x000154DE:byte] != 0x00)
		;
	Mem53[fp - 0x0000001C:word32] = v12_43;
	word32 a6_55 = Mem53[0x0001072E:word32];
	(a6_55 + -780)();
	word32 v18_56 = Mem53[fp - 0x0000001C:word32];
	word32 d0_59 = Mem53[0x000106B6:word32];
	do
		;
	while (d0_59 - Mem53[0x000106B6:word32] == 0x00000000);
	word32 a0_64 = Mem53[0x000154E4:word32];
	Mem66[0x000154E4:word32] = Mem53[0x000154E0:word32];
	Mem68[0x000154E0:word32] = a0_64;
	Mem70[0x000154E8:word32] = Mem68[0x000154E4:word32];
	Mem72[0x000154DE:byte] = ~Mem70[0x000154DE:byte];
	word32 d6_77;
	*d6Out = fn000075F6(d2, d6, d7, fn0000867C(d4, d6, d7, v18_56));
	fn00008E9A();
	return d2;
}

word32 fn00008134(word32 d4, word32 d6, word32 d7, word32 a6, ptr32 d3Out, ptr32 d4Out, ptr32 d5Out, ptr32 d6Out, ptr32 a3Out)
{
	*d4Out = d4;
	*d6Out = d6;
	*d3Out = d3;
	*d5Out = d5;
	*a3Out = a3;
	word32 a6_17 = Mem0[0x0001072A:word32];
	(a6_17 + -228)();
	word32 a0_49 = Mem0[0x000154E0:word32];
	word32 a1_50 = Mem0[0x000154E4:word32];
	word32 d7_51 = DPB(d7, 0x0B3F, 0, 16);
	do
	{
		Mem59[a1_50 + 0x00000000:word32] = Mem0[a0_49 + 0x00000000:word32];
		word32 a0_57 = a0_49 + 0x00000004;
		word32 a1_60 = a1_50 + 0x00000004;
		Mem64[a1_60 + 0x00000000:word32] = Mem59[a0_57 + 0x00000000:word32];
		Mem69[a1_60 + 0x00000004:word32] = Mem64[a0_57 + 0x00000004:word32];
		Mem74[a1_60 + 0x00000008:word32] = Mem69[a0_57 + 0x00000008:word32];
		Mem79[a1_60 + 0x0000000C:word32] = Mem74[a0_57 + 0x0000000C:word32];
		Mem84[a1_60 + 0x00000010:word32] = Mem79[a0_57 + 0x00000010:word32];
		Mem89[a1_60 + 0x00000014:word32] = Mem84[a0_57 + 0x00000014:word32];
		Mem94[a1_60 + 0x00000018:word32] = Mem89[a0_57 + 0x00000018:word32];
		a0_49 = a0_57 + 0x0000001C;
		a1_50 = a1_60 + 0x0000001C;
		d7_51 = d7_51 - 0x00000001;
	} while (d7_51 != 0xFFFFFFFF);
	Mem99[0x000154DE:byte] = ~Mem94[0x000154DE:byte];
	fn0000867C(d4, d6, d7_51, a6);
	Mem105[0x000154DE:byte] = ~Mem99[0x000154DE:byte];
	return d2;
}

word32 fn00008206(word32 d0, word32 d1, word32 d2, word32 d3, word32 d4, word32 a0, ptr32 d4Out, ptr32 d5Out, ptr32 d6Out, ptr32 d7Out, ptr32 a6Out)
{
	Mem30[0x0002DB1A:word16] = (word16) d0;
	Mem32[0x0002DB1C:word16] = (word16) d1;
	Mem34[0x0002DB18:word16] = (word16) d4;
	word32 a0_109 = 0x0002DB1E;
	fn000095F6(0x000000A5, 0, a0_109);
	word32 d0_110 = 0x000000A5;
	word32 d7_112 = DPB(0x00000025, (word16) d2, 0, 16) *u (word16) d3;
	while (true)
	{
		fn00001442(d0_110);
		word32 d6_58 = DPB(0x00000002, Mem34[0x0002DB18:word16], 0, 16);
		word32 d6_115 = DPB(d6_58, (word16) d6_58 - 0x0001, 0, 16);
		do
		{
			word32 d1_67;
			word32 a6_68;
			__swap(fn000096BC(out d1_67, out a6_68) *u (word16) d3);
			word32 d1_75;
			word32 a6_76;
			word32 d0_79 = __swap(fn000096BC(out d1_75, out a6_76) *u (word16) d2);
			word32 d4_82 = DPB(0x00000023, (word16) d1_75, 0, 16) *u (word16) d2;
			word32 d4_84 = DPB(d4_82, (word16) d4_82 + (word16) d0_79, 0, 16);
			word32 d5_87 = DPB(0x00000007, (word16) d4_84 & 0x0007, 0, 16);
			word32 d4_89 = DPB(d4_82, (word16) d4_84 >>u 0x0003, 0, 16);
			if (__btst(Mem34[a0_109 + d4_89:word32], d5_87))
				continue;
			__bset(Mem34[a0_109 + d4_89:byte], d5_87, out Mem34[a0_109 + d4_89:byte]);
			word16 v34_111 = (word16) d7_112 - 0x0001;
			d0_110 = fn00002D2A(DPB(d0_79, (word16) DPB(d0_79, (word16) d0_79 << 0x0003, 0, 16) + Mem34[0x0002DB1A:word16], 0, 16), DPB(d1_75, (word16) DPB(d1_75, (word16) d1_75 << 0x0003, 0, 16) + Mem34[0x0002DB1C:word16], 0, 16), d2, d3, a6_76, a0, dwArg00, dwArg04, dwArg08, dwArg0C, dwArg10, out d2, out d3, out a0_109);
			d7_112 = DPB(d7_112, v34_111, 0, 16);
			if (v34_111 == 0x0000)
			{
				word32 d4_124;
				*d4Out = Mem34[fp - 0x00000014:word32];
				word32 d5_126;
				*d5Out = Mem34[fp - 0x00000010:word32];
				word32 d6_128;
				*d6Out = Mem34[fp - 0x0000000C:word32];
				word32 d7_130;
				*d7Out = Mem34[fp - 0x00000008:word32];
				return Mem34[fp - 0x00000020:word32];
			}
			d6_115 = d6_115 - 0x00000001;
		} while (d6_115 != 0xFFFFFFFF);
	}
}

void fn000084B6()
{
	Mem2[0x00015516:byte] = 0x00;
	return;
}

word32 fn00008500()
{
	word32 a0_14 = 0x0001551C;
	word32 d7_15 = 3;
	do
	{
		word32 v8_33 = Mem0[a0_14 + 0x00000000:word32];
		a0_14 = a0_14 + 0x00000004;
		if (v8_33 != 0x00000000)
		{
			Mem58[a0_14 + -4:word32] = 0x00000000;
			byte v14_60 = Mem58[v8_33 + 22:byte];
			word32 d0_61 = DPB(v8_33, v14_60, 0, 8);
			if (v14_60 == 0x00)
			{
				word32 d2_87;
				word32 a2_89;
				d0_61 = fn000046B2(d0_61, d7_15, out d1, out d2_87, out d7_15, out a2_89);
				Mem91[v8_33 + 22:byte] = 0x00;
			}
			byte v16_72 = Mem58[v8_33 + 28:byte];
			word32 d0_73 = DPB(d0_61, v16_72, 0, 8);
			if (v16_72 != 0x00)
			{
				word32 d2_77;
				word32 a2_79;
				fn000046B2(d0_73, d7_15, out d1, out d2_77, out d7_15, out a2_79);
				Mem81[v8_33 + 28:byte] = 0x00;
			}
		}
		d7_15 = d7_15 - 0x00000001;
	} while (d7_15 != 0xFFFFFFFF);
	fn000084B6();
	return d1;
}

word32 fn00008546(word32 d1, word32 d4, word32 d5, word32 d6, word32 d7, word32 a6)
{
	Mem40[0x00015518:word16] = Mem0[0x0002D8EE:word16];
	Mem42[0x0001551A:word16] = Mem40[0x0002D8F0:word16];
	word32 a7_135 = fp - 0x00000030;
	word32 d3_126 = 18;
	if (Mem42[0x000154DE:byte] == 0x00)
		d3_126 = 24;
	word32 a1_276 = 0x0001551C;
	word32 d2_274 = 3;
	do
	{
		word32 v22_66 = Mem42[a1_276 + 0x00000000:word32];
		a1_276 = a1_276 + 0x00000004;
		if (v22_66 != 0x00000000)
		{
			word32 a3_233 = v22_66 + d3_126;
			byte v23_234 = Mem42[a3_233 + 4:byte];
			word32 d0_235 = DPB(v22_66, v23_234, 0, 8);
			if (v23_234 == 0x00)
			{
				word32 d0_287 = DPB(d0_235, (word16) DPB(d0_235, Mem42[v22_66 + 4:word16], 0, 16) + 0x0001, 0, 16);
				d0_235 = fn0000490C(DPB(d0_235, (word16) d0_287 + (word16) d0_287, 0, 16) *u Mem42[v22_66 + 6:word16] *u 0x0008, d1, out d7);
				Mem298[a3_233 + 4:byte] = (byte) d0_235;
			}
			word32 d1_243;
			word32 d2_244;
			word32 d7_245;
			word32 a2_246;
			word32 d0_247 = fn000054A2(d0_235, d7, out d1_243, out d2_244, out d7_245, out a2_246);
			word32 d0_250 = DPB(d0_247, Mem42[a2_246 + 0x00000000:word16], 0, 16);
			word32 d1_252 = DPB(d1_243, Mem42[a2_246 + 2:word16], 0, 16);
			if (!__btst(Mem42[a2_246 + 16:byte], 0x0003))
			{
				d0_250 = DPB(d0_247, (word16) d0_250 + Mem42[0x00015518:word16], 0, 16);
				d1_252 = DPB(d1_243, (word16) d1_252 + Mem42[0x0001551A:word16], 0, 16);
			}
			d6 = DPB(d6, (word16) DPB(d6, Mem42[a2_246 + 4:word16], 0, 16) + 0x0001, 0, 16);
			word32 d7_264 = DPB(d7_245, Mem42[a2_246 + 6:word16], 0, 16);
			fn00002DD2(d0_250, d1_252, d4, 8, d6, d7_264, d0_247, a6);
			Mem267[a3_233 + 0x00000000:word16] = (word16) d0_250;
			Mem269[a3_233 + 2:word16] = (word16) d1_252;
			word32 a2_277;
			fn000054C6(DPB(d0_250, Mem269[a3_233 + 4:byte], 0, 8), d7_264, d0_247, out d1, out d2_274, out d7, out a1_276, out a2_277);
			d5 = 8;
		}
		d2_274 = d2_274 - 0x00000001;
	} while (d2_274 != 0xFFFFFFFF);
	if (Mem42[0x00015516:byte] == 0x00)
	{
		word32 a1_120 = 0x0001551C;
		word32 d2_121 = 3;
		do
		{
			word32 v30_136 = Mem42[a1_120 + 0x00000000:word32];
			a1_120 = a1_120 + 0x00000004;
			if (v30_136 != 0x00000000)
			{
				word32 d1_163;
				word32 d2_164;
				word32 d7_165;
				word32 a2_166;
				word32 d0_167 = fn000054A2(DPB(v30_136, Mem42[v30_136 + 11:byte], 0, 8), d7, out d1_163, out d2_164, out d7_165, out a2_166);
				word32 a0_169 = d0_167 + Mem42[a2_166 + 12:word32];
				word32 a7_170 = a7_135 - 0x00000004;
				Mem171[a7_170 + 0x00000000:word32] = d3_126;
				Mem173[a7_170 - 0x00000004:word32] = d2_164;
				word32 d0_175 = DPB(d0_167, Mem173[a2_166 + 0x00000000:word16], 0, 16);
				word32 d1_177 = DPB(d1_163, Mem173[a2_166 + 2:word16], 0, 16);
				if (!__btst(Mem173[a2_166 + 16:byte], 0x0003))
				{
					d0_175 = DPB(d0_167, (word16) d0_175 + Mem173[0x00015518:word16], 0, 16);
					d1_177 = DPB(d1_163, (word16) d1_177 + Mem173[0x0001551A:word16], 0, 16);
				}
				d6 = DPB(d6, Mem173[a2_166 + 4:word16], 0, 16);
				word32 d7_186 = DPB(d7_165, Mem173[a2_166 + 6:word16], 0, 16);
				if (!__btst(Mem173[a2_166 + 16:byte], 0x0000))
				{
					word32 d2_211 = DPB(0x00000003, (word16) d6, 0, 16);
					word32 d3_219 = DPB(0x00000012, (word16) d1_177, 0, 16);
					fn00001822(d0_175, d1_177, DPB(d2_211, (word16) DPB(d2_211, (word16) DPB(d2_211, (word16) d2_211 << 0x0004, 0, 16) + (word16) d0_175, 0, 16) - 0x0001, 0, 16), DPB(d3_219, (word16) DPB(d3_219, (word16) d3_219 + (word16) d7_186, 0, 16) - 0x0001, 0, 16), 0, d5, d6, a6);
					d4 = 0;
				}
				d4 = DPB(d4, Mem173[a2_166 + 8:word16], 0, 16);
				d5 = (word32) Mem173[a2_166 + 10:byte];
				fn00001F5C(d0_175, d1_177, d4, d5, d6, d7_186, a0_169, a6);
				d3_126 = Mem173[a7_170 + 0x00000000:word32];
				word32 d1_204;
				word32 a2_208;
				fn000054C6(DPB(d0_175, Mem173[a2_166 + 11:byte], 0, 8), d7_186, a0_169, out d1_204, out d2_121, out d7, out a1_120, out a2_208);
				a7_135 = a7_170 + 0x00000004;
			}
			d2_121 = d2_121 - 0x00000001;
		} while (d2_121 != 0xFFFFFFFF);
	}
	return a6;
}

word32 fn0000867C(word32 d4, word32 d6, word32 d7, word32 a6)
{
	word32 d3_169 = 18;
	if (Mem0[0x000154DE:byte] == 0x00)
		d3_169 = 24;
	word32 a1_141 = 0x0001551C;
	word32 d2_139 = 3;
	do
	{
		word32 v20_63 = Mem0[a1_141 + 0x00000000:word32];
		a1_141 = a1_141 + 0x00000004;
		if (v20_63 != 0x00000000)
		{
			word32 a3_111 = v20_63 + d3_169;
			byte v21_112 = Mem0[a3_111 + 4:byte];
			word32 d0_113 = DPB(v20_63, v21_112, 0, 8);
			if (v21_112 != 0x00)
			{
				word32 d1_116;
				word32 d2_117;
				word32 d7_118;
				word32 a2_119;
				word32 d0_120 = fn000054A2(d0_113, d7, out d1_116, out d2_117, out d7_118, out a2_119);
				word32 d0_123 = DPB(d0_120, Mem0[a3_111 + 0x00000000:word16], 0, 16);
				d6 = DPB(d6, (word16) DPB(d6, Mem0[a2_119 + 4:word16], 0, 16) + 0x0001, 0, 16);
				word32 d7_133 = DPB(d7_118, Mem0[a2_119 + 6:word16], 0, 16);
				fn000025E4(d0_123, DPB(d1_116, Mem0[a3_111 + 2:word16], 0, 16), d4, 8, d6, d7_133, d0_120, a2_119, a6);
				word32 d1_138;
				word32 a2_142;
				word32 d0_143 = fn000054C6(DPB(d0_123, Mem0[a3_111 + 4:byte], 0, 8), d7_133, d0_120, out d1_138, out d2_139, out d7, out a1_141, out a2_142);
				if (!__btst(Mem0[a2_142 + 16:byte], 0x0002))
				{
					__bclr(Mem0[a2_142 + 16:byte], 0x02, out Mem0[a2_142 + 16:byte]);
					word32 d1_149;
					word32 d2_150;
					word32 d7_151;
					word32 a2_152;
					word32 d0_153 = fn000046B2(DPB(d0_143, Mem0[a2_142 + 22:byte], 0, 8), d7, out d1_149, out d2_150, out d7_151, out a2_152);
					Mem154[a2_152 + 22:byte] = 0x00;
					word32 d1_158;
					word32 a2_161;
					fn000046B2(DPB(d0_153, Mem154[a2_152 + 28:byte], 0, 8), d7_151, out d1_158, out d2_139, out d7, out a2_161);
					Mem163[a2_161 + 28:byte] = 0x00;
					Mem164[a1_141 + -4:word32] = 0x00000000;
				}
			}
		}
		d2_139 = d2_139 - 0x00000001;
	} while (d2_139 != 0xFFFFFFFF);
	return a6;
}

word32 fn00008706(word32 d0, word32 d1, word32 d2, word32 d4, word32 d5, word32 d6, word32 d7, word32 a1, word32 a6, ptr32 d1Out, ptr32 d4Out, ptr32 d5Out, ptr32 d6Out, ptr32 d7Out, ptr32 a6Out)
{
	*d4Out = d4;
	*a6Out = a6;
	*d5Out = d5;
	*d6Out = d6;
	*d7Out = d7;
	word32 d0_127;
	word32 d2_110;
	word32 d1_111;
	word32 d0_115;
	word32 a7_30 = fp - 0x0000000C;
	if (Mem0[0x0001552C:byte] == 0x00)
	{
		word32 d1_89;
		word32 d2_90;
		word32 d0_118 = fn0000716E(d0, d1, d2, out d1_89, out d2_90);
		if ((word16) d2_90 != 0x0000)
		{
l0000871E:
			fn0000982E(d0_118);
			word32 d3_103;
			word32 d4_104;
			word32 d5_105;
			word32 d6_106;
			word32 d7_107;
			word32 a0_108;
			word32 a6_109;
			d2_110 = fn00008B7A(d0_118, d4, d5, d6, d7, a6, out d3_103, out d4_104, out d5_105, out d6_106, out d7_107, out a0_108, out a6_109);
			word32 d6_112;
			word32 d7_113;
			d0_115 = fn000071DA(d2_110, d3_103, d6_106, d7_107, a0_108, a6_109, out d1_111, out d6_112, out d7_113, out a1);
			Mem116[0x0001552C:bool] = true;
l000087C2:
			word16 v14_58 = 0x00015538;
			word32 a6_61;
			*a6Out = Mem0[v14_58 + 0x0002:word16];
			a7_30 = Mem0[v14_58 + 0x0004:word16];
			fn000088BE(d0_115, d1_111, d2_110, a1);
			fn0000983E(d0_115, d1_111, d2_110);
		}
		else
		{
			d0_118 = DPB(d0_118, Mem0[0x0002D8EE:word16], 0, 16);
			word32 d1_120 = DPB(d1_89, Mem0[0x0002D8F0:word16], 0, 16);
			if ((word16) d0_118 - Mem0[0x00015530:word16] == 0x0000 && (word16) d1_120 - Mem0[0x00015532:word16] == 0x0000)
			{
				d0_127 = fn0000710E();
				if (d0_127 != 0x00000000)
				{
l00008762:
					Mem77[0x00015538:word32] = d0_127;
					fn000087DC(d0_127, a1, d2, dwArg00, dwArg04, dwArg08, dwArg0C, dwArg10);
				}
			}
			else
				goto l0000871E;
		}
	}
	else
	{
		d0_115 = fn0000716E(d0, d1, d2, out d1_111, out d2_110);
		if ((word16) d2_110 == 0x0000)
		{
			d0_127 = fn0000710E();
			if (d0_127 == 0x00000000)
			{
				d0_115 = DPB(d0_127, Mem0[0x0002D8EE:word16], 0, 16);
				d1_111 = DPB(d1_111, Mem0[0x0002D8F0:word16], 0, 16);
				d2_110 = DPB(d2_110, Mem0[0x00015175:byte], 0, 8);
				goto l000087C2;
			}
			else
			{
				Mem152[0x0001552C:bool] = false;
				word32 d6_154;
				word32 d7_155;
				word32 d5_157;
				*d5Out = fn000089F0(d0_127, d1_111, d5, fn00007204(d2_110), out d6_154, out d7_155, out a1);
				Mem159[0x00015530:word16] = Mem152[0x0002D8EE:word16];
				Mem161[0x00015532:word16] = Mem159[0x0002D8F0:word16];
				goto l00008762;
			}
		}
		else
			goto l000087C2;
	}
	word32 d1_33;
	*d1Out = Mem0[a7_30 + 0x00000004:word32];
	return Mem0[a7_30 + 0x00000000:word32];
}

void fn000087DC(word32 d0, word32 a1, word32 dwArg00, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, word32 dwArg14)
{
	if (!__btst((byte) d0, 0x001C))
		if (!fn00008890(d0, 0x0003C200))
			fn00008890(d0, 0x0003C21C);
	else
	{
		word32 a0_147 = 0x0002DBD2;
		word32 d3_143 = 0;
		while (Mem0[a0_147 + 0x00000000:word32] != 0x00000000)
		{
			word32 a0_133 = a0_147 + 0x00000004;
			if ((Mem0[a0_147 + 0x00000000:word32] & d0) - Mem0[a0_133 + 0x00000000:word32] == 0x00000000)
				;
			a0_147 = a0_133 + 0x00000008;
		}
l0000882C:
		word16 v19_83 = Mem0[0x0001553E:word16];
		word32 d0_103 = DPB(d0, v19_83, 0, 16);
		if (v19_83 != 0x0000)
			do
			{
				word32 a0_104 = fn0000931A(d0_103);
				if (!fn00008BA0(d0_103, 10))
					;
l0000886A:
				word16 v21_106 = (word16) d3_143;
				word32 d1_107 = DPB(0x0000000A, v21_106, 0, 16);
				if (v21_106 != 0x0000 && !fn00008BA0(d0_103, d1_107))
					;
				word16 v22_110 = Mem0[a0_104 + 12:word16];
				d0_103 = DPB(d0_103, v22_110, 0, 16);
			} while (v22_110 != 0x0000);
	}
l0000888A:
}

byte fn00008890(word32 d0, word32 a0)
{
	word32 d7_11 = 0;
	while (Mem0[a0 + 0x00000000:word32] != 0x00000000)
	{
		word32 v11_87 = Mem0[a0 + 0x00000000:word32];
		word32 a0_88 = a0 + 0x00000004;
		word32 d1_90 = v11_87 & d0;
		word32 v13_91 = Mem0[a0_88 + 0x00000000:word32];
		word32 v14_93 = d1_90 - v13_91;
		if (v14_93 == 0x00000000)
		{
			word32 a0_126 = Mem0[a0_88 + 0x00000004:word32];
			a0_126();
			d7_11 = -1;
			goto l000088B6;
		}
		a0 = a0_88 + 0x00000008;
	}
l000088B6:
	return cond((word16) d7_11);
}

void fn000088BE(word32 d0, word32 d1, word32 d2, word32 a1)
{
	word32 a0_17 = 0x0002DBC4;
	while (Mem0[a0_17 + 0x00000000:word16] - 0xFFFF != 0x0000)
	{
		word32 d4_40 = DPB(0x00000023, Mem0[a0_17 + 0x00000000:byte], 0, 8);
		word32 a0_39 = a0_17 + 0x00000001;
		word32 d4_43 = DPB(d4_40, (byte) d4_40 & (byte) d2, 0, 8);
		if ((byte) d4_43 - Mem0[a0_39 + 0x00000000:byte] == 0x00)
		{
			word32 d3_50 = (word32) Mem0[a0_39 + 0x00000001:word16];
			word16 v20_53 = Mem0[Mem0[0x0002DC62:word32]:word16];
			word32 d4_54 = DPB(d4_43, v20_53, 0, 16);
			if (v20_53 != 0x0000)
				fn000088FC(d0, d1, d3_50, d4_54, a1, 0x00015678);
		}
		a0_17 = a0_39 + 0x00000003;
	}
l000088F6:
	return;
}

byte fn000088FC(word32 d0, word32 d1, word32 d3, word32 d4, word32 a1, word32 a6)
{
	word32 d7_17 = -1;
	do
	{
		word32 a0_27 = (a6 + -4)[d4 * 2];
		if (!__btst(Mem0[a0_27 + 16:byte], 0x0001) && ((word16) d0 - Mem0[a0_27 + 0x00000000:word16] < 0x0000 || ((word16) d0 - Mem0[a0_27 + 2:word16] > 0x0000 || ((word16) d1 - Mem0[a0_27 + 4:word16] < 0x0000 || (word16) d1 - Mem0[a0_27 + 6:word16] > 0x0000))))
			if (!__btst(Mem0[a0_27 + 16:byte], 0x0002))
			{
				word16 v24_84 = Mem0[a0_27 + 14:word16];
				d4 = DPB(d4, v24_84, 0, 16);
				if (v24_84 != 0x0000 && fn000088FC(d0, d1, d3, d4, a1, a6))
					goto l00008964;
			}
		word16 v19_64 = Mem0[a0_27 + 14:word16];
		d4 = DPB(d4, v19_64, 0, 16);
		if (v19_64 != 0x0000 && fn000088FC(d0, d1, d3, d4, a1, a6) || fn0000896C(d0, d3, a0_27, a1, out a0_27))
			goto l00008964;
		if (!__btst(Mem0[a0_27 + 16:byte], 0x0001))
		{
			d7_17 = 0;
			goto l00008964;
		}
l0000895C:
	} while (v25_55 != 0x0000);
	d7_17 = 0;
l00008964:
	return cond((word16) d7_17);
}

byte fn0000896C(word32 d0, word32 d3, word32 a0, word32 a1, ptr32 a0Out)
{
	*a0Out = a0;
	word32 d0_30 = DPB(d0, Mem0[a0 + 8:word16], 0, 16);
	word32 d7_26 = 0;
	if (!fn00008BA0(d0_30, 9))
	{
		fn00009326(d0_30, 9);
		word32 a0_75;
		*a0Out = a0;
		if ((word16) DPB(0x00000002, fn000089C0(Mem0[0x00015538 + 0x0004:word16], a1), 0, 8) != 0x0000)
			d7_26 = -1;
	}
	else
	{
		word16 v23_83 = (word16) d3;
		word32 d1_84 = DPB(0x00000009, v23_83, 0, 16);
		if (v23_83 != 0x0000 && !fn00008BA0(d0_30, d1_84))
		{
			fn00009326(d0_30, d1_84);
			d7_26 = -1;
		}
	}
	return cond((word16) d7_26);
}

byte fn000089C0(word32 d2, word32 a0)
{
	word32 d7_11 = 0;
	word16 v7_16 = Mem0[a0 + 0x00000000:word16] - 0xFFFF;
	while (v7_16 != 0x0000)
	{
		byte v9_85 = Mem0[a0 + 0x00000000:byte];
		word32 d6_87 = DPB(0x00000002, v9_85, 0, 8);
		byte v11_88 = (byte) d6_87 & (byte) d2;
		word32 a0_86 = a0 + 0x00000001;
		word32 d6_89 = DPB(d6_87, v11_88, 0, 8);
		byte v15_90 = Mem0[a0_86 + 0x00000000:byte];
		byte v16_92 = (byte) d6_89 - v15_90;
		if (v16_92 == 0x00)
		{
			word32 a0_125 = Mem0[a0_86 + 0x00000001:word32];
			a0_125();
			d7_11 = -1;
			goto l000089E8;
		}
		a0 = a0_86 + 0x00000005;
		v7_16 = Mem0[a0 + 0x00000000:word16] - 0xFFFF;
	}
l000089E8:
	return cond((word16) d7_11);
}

word32 fn000089F0(word32 d0, word32 d1, word32 d5, word32 d6, ptr32 d6Out, ptr32 d7Out, ptr32 a1Out)
{
	*d6Out = d6;
	*d7Out = d7;
	*a1Out = a1;
	word16 v7_16 = Mem0[Mem0[0x0002DC62:word32]:word16];
	word32 d4_17 = DPB(0x00000023, v7_16, 0, 16);
	if (v7_16 != 0x0000)
	{
		word32 d0_45;
		word32 d1_46;
		word32 d6_48;
		word32 a6_49;
		fn00008A1C(DPB(d0, Mem0[0x0002D8EE:word16], 0, 16), DPB(d1, Mem0[0x0002D8F0:word16], 0, 16), d4_17, d5, d6, 0x00015678, out d0_45, out d1_46, out d5, out d6_48, out a6_49);
	}
	return d5;
}

byte fn00008A1C(word32 d0, word32 d1, word32 d4, word32 d5, word32 d6, word32 a6, ptr32 d0Out, ptr32 d1Out, ptr32 d5Out, ptr32 d6Out, ptr32 a6Out)
{
	*d0Out = d0;
	*d1Out = d1;
	*d5Out = d5;
	*d6Out = d6;
	*a6Out = a6;
	word32 d7_104 = -1;
	do
	{
		word32 a0_100 = (a6 + -4)[d4 * 2];
		if (!__btst(Mem0[a0_100 + 16:byte], 0x0001) && ((word16) d0 - Mem0[a0_100 + 0x00000000:word16] < 0x0000 || ((word16) d0 - Mem0[a0_100 + 2:word16] > 0x0000 || ((word16) d1 - Mem0[a0_100 + 4:word16] < 0x0000 || (word16) d1 - Mem0[a0_100 + 6:word16] > 0x0000))))
			if (!__btst(Mem0[a0_100 + 16:byte], 0x0002))
			{
				word16 v24_119 = Mem0[a0_100 + 14:word16];
				d4 = DPB(d4, v24_119, 0, 16);
				if (v24_119 != 0x0000 && fn00008A1C(d0, d1, d4, d5, d6, a6, out d0, out d1, out d5, out d6, out a6))
					goto l00008A84;
			}
		word16 v19_88 = Mem0[a0_100 + 14:word16];
		word32 d4_89 = DPB(d4, v19_88, 0, 16);
		if (v19_88 != 0x0000 && fn00008A1C(d0, d1, d4_89, d5, d6, a6, out d0, out d1, out d5, out d6, out a6) || fn00008A8C(d0, d4_89, d5, d6, a0_100, a6, out d4, out d5, out d6, out a0_100, out a6))
			goto l00008A84;
		if (!__btst(Mem0[a0_100 + 16:byte], 0x0001))
		{
			d7_104 = 0;
			goto l00008A84;
		}
l00008A7C:
	} while (v25_79 != 0x0000);
	d7_104 = 0;
l00008A84:
	return cond((word16) d7_104);
}

byte fn00008A8C(word32 d0, word32 d4, word32 d5, word32 d6, word32 a0, word32 a6, ptr32 d4Out, ptr32 d5Out, ptr32 d6Out, ptr32 a0Out, ptr32 a6Out)
{
	*a0Out = a0;
	*d4Out = d4;
	*d5Out = d5;
	*d6Out = d6;
	*a6Out = a6;
	word32 d0_15 = DPB(d0, Mem0[a0 + 8:word16], 0, 16);
	word32 d7_11 = 0;
	if (!fn00008BA0(d0_15, 15))
	{
		Mem50[0x00015540:word16] = (word16) d0_15;
		fn00009326(d0_15, 15);
		word32 d3_52;
		word32 d4_53;
		word32 d5_54;
		word32 d6_55;
		word32 a3_56;
		fn00008006(15, d4, d5, d6, 0, a6, out d3_52, out d4_53, out d5_54, out d6_55, out a3_56);
		d7_11 = -1;
	}
	return cond((word16) d7_11);
}

word32 fn00008B7A(word32 d0, word32 d4, word32 d5, word32 d6, word32 d7, word32 a6, ptr32 d3Out, ptr32 d4Out, ptr32 d5Out, ptr32 d6Out, ptr32 d7Out, ptr32 a0Out, ptr32 a6Out)
{
	*d3Out = d3;
	*d4Out = d4;
	*d5Out = d5;
	*d6Out = d6;
	*d7Out = d7;
	*a0Out = a0;
	*a6Out = a6;
	word16 v5_9 = Mem0[0x00015540:word16];
	word32 d0_10 = DPB(d0, v5_9, 0, 16);
	if (v5_9 != 0x0000)
	{
		Mem40[0x00015540:word16] = 0x0000;
		fn00009326(d0_10, 18);
		word32 d3_43;
		word32 d4_44;
		word32 d5_45;
		word32 d6_46;
		word32 a3_47;
		d2 = fn00008006(18, d4, d5, d6, d7, a6, out d3_43, out d4_44, out d5_45, out d6_46, out a3_47);
	}
	return d2;
}

byte fn00008BA0(word32 d0, word32 d1)
{
	byte Z_13 = cond((word16) d0);
	if ((word16) d0 != 0x0000)
		Z_13 = fn00008BBE(d1, Mem0[fn0000931A(d0) + 18:word32]);
	return Z_13;
}

byte fn00008BBE(word32 d1, word32 a6)
{
	word32 d7_14 = 0;
	if (Mem0[a6 + 0x00000000:word32] != 0x00000000)
	{
		d7_14 = (word32) fn00008BBE(d1, Mem0[a6 + 0x00000000:word32]);
		if ((word16) d7_14 == 0x0000)
		{
l00008BD6:
			word32 a6_29 = a6 + 0x0006;
			while (Mem0[a6_29 + 0x00000000:word16] - 0xFFFF != 0x0000)
			{
				if ((word16) d1 - Mem0[a6_29 + 0x00000000:word16] == 0x0000)
				{
					d7_14 = -1;
					goto l00008BEA;
				}
				a6_29 = a6_29 + 0x00000006;
			}
		}
	}
	else
		goto l00008BD6;
l00008BEA:
	return cond((word16) d7_14);
}

word32 fn00008C32(word32 d0, word32 d1, word32 d2, word32 d6, word32 a0, word32 a6, ptr32 a6Out)
{
// def fp
// def a6
// def a0
// def d6
// def d5
// def d4
// def d2
// def d1
// def d0
// def Mem0
	a7_44 = fp - 0x0000003C;
	fn0000982E(d0);
	fn0000983E(d0, d1, d2);
	a1_48 = Mem0[0x0001554A:word32];
	a2_49 = a1_48;
	a1_50 = a1_48 + 34;
	v18_51 = a1_48 - 87612;
	if (v18_51 != 0x00000000)
	{
		a3_125 = a0;
		a4_126 = a1_50;
		if (Mem0[0x00015542:byte] != 0x00)
			Mem203[a4_126 + 0x00000000:byte] = 0x01;
		else
		{
			v28_205 = Mem0[a3_125 + 0x00000000:byte];
			Mem206[a4_126 + 0x00000000:byte] = v28_205;
		}
		v25_131 = Mem0[a3_125 + 1:byte];
		Mem132[a4_126 + 1:byte] = v25_131;
		a2_133 = a2_49 + 0x00000002;
		a3_134 = a3_125 + 0x00000002;
		a4_135 = a4_126 + 0x00000002;
		d7_136 = 7;
		do
		{
// d7_138 = PHI(d7_136, d7_154)
// a2_139 = PHI(a2_133, a2_153)
// a3_140 = PHI(a3_134, a3_143)
// a4_141 = PHI(a4_135, a4_151)
			v26_142 = Mem132[a3_140 + 0x00000000:word32];
			a3_143 = a3_140 + 0x00000004;
			d0_144 = v26_142;
			v27_145 = d0_144 - 0xFFFFFFFF;
			if (v27_145 == 0x00000000)
				d0_200 = Mem132[a2_139 + 0x00000000:word32];
// d0_148 = PHI(d0_200, d0_144)
			v29_149 = d0_148;
			Mem150[a4_141 + 0x00000000:word32] = v29_149;
			a4_151 = a4_141 + 0x00000004;
			a2_153 = a2_139 + 0x00000004;
			d7_154 = d7_138 - 0x00000001;
		} while (d7_154 != 0xFFFFFFFF);
		v30_155 = a1_50;
		Mem156[0x0001554A:word32] = v30_155;
		Z_158 = __btst(Mem156[a0 + 0x00000000:byte], 0x0000);
		if (!Z_158)
		{
			fn0000545A();
			__bset(Mem156[a1_50 + 0x00000000:byte], 0x0001, out Mem156[a1_50 + 0x00000000:byte]);
		}
		a0_159 = a1_50;
		Z_160 = __btst(Mem156[a0_159 + 0x00000000:byte], 0x0000);
		if (!Z_160)
			fn00008D82(d2, d6, d7_154, a6);
		else
		{
			v31_161 = Mem156[0x00015542:byte];
			d0_162 = DPB(d0_148, v31_161, 0, 8);
			v32_163 = (byte) d0_162 + 0x01;
			d0_164 = DPB(d0_162, v32_163, 0, 8);
			v34_166 = (byte) d0_164;
			Mem167[0x00015542:byte] = v34_166;
			fn00008D82(d2, d6, d7_154, a6);
			v35_169 = (byte) d0_164 - Mem167[0x00015542:byte];
			if (v35_169 == 0x00)
				do
				{
// d0_172 = PHI(d0_164, d0_189)
// d1_173 = PHI(d1, d1_183)
// d2_174 = PHI(d2, d2_195)
// d4_175 = PHI(d4, d4_184)
// d5_176 = PHI(d5, d5_193)
// d6_177 = PHI(d6, d6_194)
// d7_178 = PHI(d7_154, d7_187)
// a6_179 = PHI(a6, a6_188)
					fn00008DFA(d2_174, d5_176, d6_177, a6_179);
					v36_180 = (byte) d0_172 - Mem167[0x00015542:byte];
					if (v36_180 != 0x00)
						;
					d0_189 = fn00008706(d0_172, d1_173, d2_174, d4_175, d5_176, d6_177, d7_178, a1_50, a6_179, out d1_183, out d4_184, out d5_185, out d6_186, out d7_187, out a6_188);
					v37_190 = (byte) d0_189 - Mem167[0x00015542:byte];
					if (v37_190 != 0x00)
						;
					d2_195 = fn000080A0(d1_183, d4_184, d5_185, d6_186, d7_187, a6_188, out d5_193, out d6_194);
					v38_196 = (byte) d0_189 - Mem167[0x00015542:byte];
				} while (v38_196 == 0x00);
		}
	}
	a7_65 = a7_44 + 0x00000004;
	a7_67 = a7_65 + 0x00000004;
	a7_69 = a7_67 + 0x00000004;
	a7_71 = a7_69 + 0x00000004;
	a7_73 = a7_71 + 0x00000004;
	d5_74 = Mem0[a7_73 + 0x00000000:word32];
	a7_75 = a7_73 + 0x00000004;
	a7_77 = a7_75 + 0x00000004;
	a7_79 = a7_77 + 0x00000004;
	a7_81 = a7_79 + 0x00000004;
	a7_83 = a7_81 + 0x00000004;
	a7_85 = a7_83 + 0x00000004;
	a7_87 = a7_85 + 0x00000004;
	a7_89 = a7_87 + 0x00000004;
	a7_91 = a7_89 + 0x00000004;
	a7_93 = a7_91 + 0x00000004;
}

word32 fn00008D4E(word32 d2, word32 d6, word32 a6, ptr32 d1Out, ptr32 d2Out, ptr32 d4Out, ptr32 d5Out, ptr32 d6Out, ptr32 a6Out)
{
	*d2Out = d2;
	*d6Out = d6;
	*a6Out = a6;
	*d1Out = d1;
	*d4Out = d4;
	*d5Out = d5;
	Mem14[0x00015542:byte] = 0x00;
	word32 a1_15 = 0x0001554E;
	Mem17[0x0001554A:word32] = a1_15;
	word32 a0_18 = 0x0002E6E4;
	word32 a2_19 = a1_15;
	word32 d7_20 = 7;
	do
	{
		Mem28[a2_19 + 0x00000000:word32] = Mem17[a0_18 + 0x00000000:word32];
		a0_18 = a0_18 + 0x00000004;
		a2_19 = a2_19 + 0x00000004;
		d7_20 = d7_20 - 0x00000001;
	} while (d7_20 != 0xFFFFFFFF);
	fn00008D82(d2, d6, d7_20, a6);
	return d0;
}

void fn00008D82(word32 d2, word32 d6, word32 d7, word32 a6)
{
	fn0000738C(d2, d6, d7, 0x0002E778, a6);
	word32 d0_50 = Mem0[a0 + 14:word32];
	if (d0_50 != 0x00000000)
		d0_50();
	return;
}

void fn00008DBE()
{
	word32 d0_48 = Mem0[0x0001554A:word32];
	if (d0_48 != 0x00000000)
	{
		word32 d0_84 = Mem0[d0_48 + 22:word32];
		if (d0_84 != 0x00000000)
			d0_84();
	}
	return;
}

void fn00008DFA(word32 d2, word32 d5, word32 d6, word32 a6)
{
	word32 d0_48 = Mem0[0x0001554A:word32];
	if (d0_48 != 0x00000000)
	{
		word32 d0_93 = Mem0[d0_48 + 2:word32];
		if (d0_93 != 0x00000000)
		{
			Mem96[0x00015544:word32] = 0x00000000;
			d0_93();
			word32 d0_103 = Mem96[0x00015544:word32];
			Mem107[0x00015548:word16] = (word16) (d0_103 + 0x00000001);
			fn00008EF4(d0_103 + 0x00000001, d2, d5, d6, a6);
		}
	}
	return;
}

void fn00008E9A()
{
	word32 d0_48 = Mem0[0x0001554A:word32];
	if (d0_48 != 0x00000000)
	{
		word32 d0_86 = Mem0[d0_48 + 10:word32];
		if (d0_86 != 0x00000000)
		{
			word32 a0_105 = d0_86;
			word32 v20_106 = Mem0[a0_105 + 0x00000000:word32];
			word32 a0_107 = a0_105 + 0x00000004;
			while (v20_106 != 0x00000000)
			{
				v20_106();
				a0_105 = a0_107;
				v20_106 = Mem0[a0_105 + 0x00000000:word32];
				a0_107 = a0_105 + 0x00000004;
			}
		}
	}
	return;
}

void fn00008EF4(word32 d0, word32 d2, word32 d5, word32 d6, word32 a6)
{
	word32 d0_27 = DPB(d0 + 0x00000001, 0x014C, 0, 16);
	word32 d2_29 = DPB(d2, 0x015F, 0, 16);
	fn00001822(d0_27, 0, d2_29, 10, 0, d5, d6, a6);
	fn00009A6A(DPB(d0_27, 0x014E, 0, 16), 1, fn000090B6(DPB(d0_27, Mem0[0x00015548:word16], 0, 16), d2_29, 32, 2, 0x0001831E), 0x0001831E);
	return;
}

word32 fn000090B6(word32 d0, word32 d2, word32 d6, word32 d7, word32 a0)
{
	if ((word16) d7 != 0x0000 && (word16) d7 - 0x000B <=u 0x0000)
	{
		word32 d0_35;
		if ((word16) d7 - 0x0003 <= 0x0000)
			d0_35 = d0 & 0x000000FF;
		else
		{
			d0_35 = d0;
			if ((word16) d7 - 0x0006 <= 0x0000)
				d0_35 = d0 & 0x0000FFFF;
		}
		d2 = fn000090EA(d0_35, d2, d6, d7, a0, dwLoc08, d0, dwArg00, dwArg04, dwArg08, dwArg0C);
	}
	return d2;
}

word32 fn000090EA(word32 d0, word32 d2, word32 d6, word32 d7, word32 a0, word32 dwArg00, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, word32 dwArg14)
{
	if (d0 == 0x00000000)
	{
		word32 d7_65 = DPB(0x00000002, (word16) d7 - 0x0001, 0, 16);
		d7_65 = d7_65 - 0x00000001;
		while (d7_65 != 0xFFFFFFFF)
		{
			Mem79[a0 + 0x00000000:byte] = (byte) d6;
			a0 = a0 + 0x00000001;
			d7_65 = d7_65 - 0x00000001;
		}
		Mem74[a0 + 0x00000000:byte] = 0x30;
		a0 = a0 + 0x00000001;
	}
	else
	{
		word32 d3_84 = DPB(0x0000000A, (word16) d7, 0, 16);
		word32 d3_86 = DPB(d3_84, (word16) d3_84 + (word16) d3_84, 0, 16);
		word32 a1_82 = 0x0002DC62;
		word32 a1_121 = DPB(a1_82, (word16) a1_82 - (word16) DPB(d3_84, (word16) d3_86 + (word16) d3_86, 0, 16), 0, 16);
		if (d0 - Mem0[a1_121 + -4:word32] >= 0x00000000)
		{
			word32 d7_100 = DPB(0x00000002, (word16) d7 - 0x0001, 0, 16);
			do
			{
				Mem102[a0 + 0x00000000:byte] = 0x2A;
				a0 = a0 + 0x00000001;
				d7_100 = d7_100 - 0x00000001;
			} while (d7_100 != 0xFFFFFFFF);
		}
		else
		{
			word32 d3_106 = 0;
			word32 d7_108 = DPB(0x00000002, (word16) d7 - 0x0001, 0, 16);
			d2_118 = d2;
			do
			{
				word32 d2_118;
				word32 v30_122 = Mem0[a1_121 + 0x00000000:word32];
				a1_121 = a1_121 + 0x00000004;
				d2_118 = DPB(d2_118, 0x0030, 0, 16);
				while (d0 - v30_122 >= 0x00000000)
				{
					d0 = d0 - v30_122;
					d2_118 = DPB(d2_118, (word16) d2_118 + 0x0001, 0, 16);
				}
				if ((word16) d2_118 - 0x0030 == 0x0000 && (word16) d3_106 == 0x0000)
				{
					Mem162[a0 + 0x00000000:byte] = (byte) d6;
					a0 = a0 + 0x00000001;
				}
				else
				{
					Mem153[a0 + 0x00000000:byte] = (byte) d2_118;
					a0 = a0 + 0x00000001;
					d3_106 = 0x00000001;
				}
				d7_108 = d7_108 - 0x00000001;
			} while (d7_108 != 0xFFFFFFFF);
		}
	}
	Mem28[a0 + 0x00000000:byte] = 0x00;
}

word32 fn0000916E(word32 d0, word32 d1, word32 d2, word32 d4, word32 d6, word32 a0, ptr32 d6Out, ptr32 a1Out)
{
	*d6Out = d6;
	*a1Out = a1;
	word32 d0_126;
	word32 d4_25 = DPB(d4, (word16) d0, 0, 16);
	word32 a0_27;
	word32 d7_28 = fn000093C2(d2, a0, out a0_27);
	if ((word16) d7_28 == 0x0000)
		d0_126 = 0;
	else if ((word16) d4_25 - 0xFFFF == 0x0000)
	{
		Mem83[a0_27 + 12:word16] = 0x0000;
		fn0000949A();
		Mem90[Mem83[0x0002DC62:word32]:word16] = (word16) d7_28;
l00009224:
		d0_126 = (word32) (word16) d7_28;
		fn00009326(d0_126, 1);
	}
	else
	{
		Mem93[a0_27 + 12:word16] = (word16) d4_25;
		word32 a0_94 = Mem93[0x0002DC62:word32];
		word16 v23_95 = Mem93[a0_94 + 0x00000000:word16];
		word32 d0_107 = (word32) v23_95;
		if (v23_95 == 0x0000)
		{
			Mem100[a0_94 + 0x00000000:word16] = (word16) d7_28;
			goto l00009224;
		}
		else
		{
			word32 a2_102 = 0x00015678;
			if ((word16) d4_25 == 0x0000)
			{
l000091BE:
				do
				{
					word32 a0_108 = (a2_102 + -4)[d0_107 * 2];
					word16 v25_109 = Mem93[a0_108 + 10:word16];
					d0_107 = DPB(d0_107, v25_109, 0, 16);
				} while (v25_109 != 0x0000);
				Mem114[a0_108 + 10:word16] = (word16) d7_28;
				goto l00009224;
			}
			else
			{
				word32 a0_116 = fn00009236(d0_107, d4_25, a2_102);
				if (a0_116 == 0x00000000)
				{
					fn00009440(DPB(d0_107, (word16) d7_28, 0, 16), d6, d7_28, d1);
					d0_126 = 0;
				}
				else
				{
					a0_134 = a0_116;
					word32 a0_134;
					while (!__btst(Mem93[a0_134 + 16:byte], 0x0002))
					{
						word16 v31_160 = Mem93[a0_134 + 12:word16];
						d2 = DPB(d2, v31_160, 0, 16);
						if (v31_160 == 0x0000)
							break;
						a0_134 = (a2_102 + -4)[d2 * 2];
					}
					Mem138[a0_27 + 0x00000000:word16] = Mem93[a0_134 + 0x00000000:word16];
					Mem140[a0_27 + 4:word16] = Mem138[a0_134 + 4:word16];
					word16 v35_144 = Mem140[a0_116 + 14:word16];
					word32 d2_145 = DPB(d2, v35_144, 0, 16);
					if (v35_144 == 0x0000)
						Mem149[a0_116 + 14:word16] = (word16) d7_28;
					else
					{
						do
						{
							word32 a0_152 = (a2_102 + -4)[d2_145 * 2];
							word16 v37_153 = Mem140[a0_152 + 10:word16];
							d2_145 = DPB(d2_145, v37_153, 0, 16);
						} while (v37_153 != 0x0000);
						Mem158[a0_152 + 10:word16] = (word16) d7_28;
					}
				}
			}
		}
	}
	return d0_126;
}

word32 fn00009236(word32 d0, word32 d4, word32 a2)
{
	do
	{
		word32 a0_13 = (a2 + -4)[d0 * 2];
		if ((word16) d4 - (word16) d0 == 0x0000)
			goto l00009262;
		word16 v11_27 = Mem0[a0_13 + 14:word16];
		word32 d0_28 = DPB(d0, v11_27, 0, 16);
		if (v11_27 != 0x0000)
		{
			a0_13 = fn00009236(d0_28, d4, a2);
			if ((word16) d4 - Mem0[a0_13 + 8:word16] == 0x0000)
				goto l00009262;
			goto l0000925A;
		}
l0000925A:
		word16 v16_34 = Mem0[a0_13 + 10:word16];
		d0 = DPB(d0, v16_34, 0, 16);
	} while (v16_34 != 0x0000);
	a0_13 = 0x00000000;
l00009262:
	return a0_13;
}

word32 fn00009266(word32 d0, word32 d1, word32 d6, word32 d7)
{
	if ((word16) d0 != 0x0000)
	{
		word32 d7_51 = DPB(d7, (word16) d0, 0, 16);
		if (!__btst(Mem0[fn0000931A(d0) + 16:byte], 0x0000))
			Mem157[0x0001566E:word16] = Mem0[0x0001566E:word16] - 0x0001;
		word32 a0_104 = Mem0[0x0002DC62:word32];
		word16 v17_57 = Mem0[a0_104 + 0x00000000:word16];
		word32 d0_102 = DPB(d0, v17_57, 0, 16);
		if (v17_57 != 0x0000)
		{
			word32 a2_82 = 0x00015678;
			word32 a1_143 = 0x00000000;
			a0_104 = (a2_82 + -4)[d7_51 * 2];
			if (Mem0[a0_104 + 12:word16] != 0x0000)
			{
				a1_143 = (a2_82 + -4)[DPB(d0, Mem0[a0_104 + 12:word16], 0, 16) * 2];
				d0_102 = DPB(d0, Mem0[a1_143 + 14:word16], 0, 16);
				goto l000092AE;
			}
l000092AE:
			do
			{
				if ((word16) d7_51 - (word16) d0_102 == 0x0000)
					goto l000092BE;
				a1_143 = (a2_82 + -4)[d0_102 * 2];
				word16 v23_144 = Mem0[a1_143 + 10:word16];
				d0_102 = DPB(d0_102, v23_144, 0, 16);
			} while (v23_144 != 0x0000);
			a1_143 = 0x00000000;
			word16 v24_96 = Mem0[a0_104 + 14:word16];
			d0_102 = DPB(d0_102, v24_96, 0, 16);
			if (v24_96 != 0x0000)
			{
				do
				{
					d1 = DPB(d1, Mem0[(a2_82 + -4)[d0_102 * 2] + 10:word16], 0, 16);
					word16 v27_136 = (word16) d1;
					d6 = fn00009266(d0_102, d1, d6, d7_51);
					d0_102 = DPB(d0_102, v27_136, 0, 16);
				} while (v27_136 != 0x0000);
				a0_104 = Mem0[fp - 0x0000001C:word32];
			}
			if (a1_143 == 0x00000000)
				Mem111[Mem0[0x0002DC62:word32]:word16] = Mem0[a0_104 + 10:word16];
			else
			{
				d0_102 = DPB(d0_102, Mem0[a0_104 + 10:word16], 0, 16);
				if ((word16) d7_51 - Mem0[a1_143 + 10:word16] == 0x0000)
					Mem119[a1_143 + 10:word16] = (word16) d0_102;
				else
					Mem122[a1_143 + 14:word16] = (word16) d0_102;
			}
		}
		fn00009326(DPB(d0_102, (word16) d7_51, 0, 16), 2);
		fn00009440(DPB(d0_102, (word16) d7_51, 0, 16), d6, d7_51, a0_104);
	}
	return d6;
}

word32 fn0000931A(word32 d0)
{
	return (0x00015678 + -4)[d0 * 2];
}

void fn00009326(word32 d0, word32 d1)
{
	if ((word16) d0 != 0x0000)
		fn00009344(d1, Mem0[fn0000931A(d0) + 18:word32]);
	return;
}

void fn00009344(word32 d1, word32 a6)
{
	if (Mem0[a6 + 0x00000000:word32] != 0x00000000)
		fn00009344(d1, Mem0[a6 + 0x00000000:word32]);
	word32 a6_14 = a6 + 0x0006 + 2;
	word16 v11_16 = Mem0[a6_14 + 0x00000000:word16] - 0xFFFF;
	while (v11_16 != 0x0000)
	{
		word16 v13_28 = (word16) d1 - Mem0[a6_14 + 0x00000000:word16];
		if (v13_28 == 0x0000)
		{
			word32 a6_31 = Mem0[a6_14 + 0:word32];
			if (a6_31 != 0x00000000)
				a6_31();
		}
		a6_14 = a6_14 + 0x00000006;
		v11_16 = Mem0[a6_14 + 0x00000000:word16] - 0xFFFF;
	}
l00009374:
	return;
}

word32 fn000093C2(word32 d2, word32 a0, ptr32 a0Out)
{
	*a0Out = a0;
	word32 d0_20 = (word32) Mem0[0x00015670:word16];
	word32 d7_17 = 0;
	if ((word16) d0_20 - 0x0064 != 0x0000)
	{
		word32 d1_51 = DPB(0x00000040, Mem0[0x00015672:word16], 0, 16);
		word32 d2_55 = DPB(d2, (word16) DPB(d2, (word16) d1_51, 0, 16) + Mem0[a0 + 4:word16], 0, 16);
		if ((word16) d2_55 - 0x1388 <= 0x0000)
		{
			Mem61[0x00015672:word16] = (word16) d2_55;
			Mem66[0x00015670:word16] = (word16) DPB(d0_20, (word16) d0_20 + 0x0001, 0, 16);
			word32 a1_67 = 0x00015808;
			word32 a1_69 = DPB(a1_67, (word16) a1_67 + (word16) d1_51, 0, 16);
			word32 a2_70 = 0x00015678;
			d7_17 = 1;
			word32 d0_72 = 99;
			do
			{
				if (Mem66[a2_70 + 0x00000000:word32] == 0x00000000)
				{
					Mem88[a2_70 + 0x00000000:word32] = a1_69;
					fn000095F6((word32) Mem88[a0 + 4:word16], 0, a1_69);
					Mem98[a1_69 + 8:word16] = (word16) d7_17;
					Mem100[a1_69 + 18:word32] = a0;
					Mem102[a1_69 + 6:word16] = 0xFFFF;
					word32 a0_91;
					*a0Out = a1_69;
					goto l0000943A;
				}
				d7_17 = DPB(0x00000001, (word16) d7_17 + 0x0001, 0, 16);
				a2_70 = a2_70 + 0x00000004;
				d0_72 = d0_72 - 0x00000001;
			} while (d0_72 != 0xFFFFFFFF);
		}
	}
l0000943A:
	return d7_17;
}

void fn00009440(word32 d0, word32 d6, word32 d7, word32 a0)
{
	word32 a0_17 = 0x00015674;
	word32 a0_21 = DPB(a0_17, (word16) a0_17 + (word16) DPB(d0, (word16) d0 << 0x0002, 0, 16), 0, 16);
	word32 a1_23 = Mem0[a0_21 + 0x00000000:word32];
	Mem24[a0_21 + 0x00000000:word32] = 0x00000000;
	word32 d7_28 = (word32) Mem24[Mem24[a1_23 + 18:word32] + 4:word16];
	word32 a0_29 = a1_23 + d7_28;
	word32 d1_34;
	word32 a1_35;
	word32 a2_36;
	fn0000963E(0x00017F18 - a0_29, a0_29, a1_23, dwLoc18, d0, d6, d7, a0, out d1_34, out a1_35, out a2_36);
	word32 a0_38 = 0x00015678;
	word32 d6_39 = 99;
	do
	{
		word32 d0_46 = Mem24[a0_38 + 0x00000000:word32];
		if (d0_46 != 0x00000000 && d0_46 - a1_35 >= 0x00000000)
			Mem76[a0_38 + 0x00000000:word32] = d0_46 - d7_28;
		a0_38 = a0_38 + 0x00000004;
		d6_39 = d6_39 - 0x00000001;
	} while (d6_39 != 0xFFFFFFFF);
	Mem56[0x00015672:word16] = Mem24[0x00015672:word16] - (word16) d7_28;
	Mem58[0x00015670:word16] = Mem56[0x00015670:word16] - 0x0001;
	return;
}

void fn0000949A()
{
	word32 a0_7 = Mem0[0x0002DC62:word32];
	if (a0_7 != 0x0001566E)
	{
		Mem16[a0_7 + 0x00000002:word16] = 0x0000;
		Mem18[0x0002DC62:word32] = a0_7 + 0x00000002;
	}
	return;
}

word32 fn000094E0(word32 d0, word32 d1, word32 d6, word32 d7)
{
	word32 a0_12 = Mem0[0x0002DC62:word32];
	while (true)
	{
		word16 v5_14 = Mem0[a0_12 + 0x00000000:word16];
		d0 = DPB(d0, v5_14, 0, 16);
		if (v5_14 == 0x0000)
		{
			if (a0_12 - 0x0001565E != 0x00000000)
			{
				a0_12 = a0_12 - 0x00000002;
				continue;
			}
			Mem26[0x0002DC62:word32] = a0_12;
			return d6;
		}
		d6 = fn00009266(d0, d1, d6, d7);
	}
}

void fn000095F6(word32 d0, word32 d1, word32 a0)
{
	word32 d0_16 = DPB(0x00000201, (byte) (d0 + 0x00000001) & 0xFE, 0, 8);
	word32 a0_105 = a0 + d0_16;
	word32 d1_104 = d0_16 >>u 0x00000005;
	if (d0_16 >>u 0x00000005 != 0x00000000)
		do
		{
			word32 a0_106 = a0_105 - 0x00000004;
			Mem107[a0_106 + 0x00000000:word32] = d1;
			Mem109[a0_106 - 0x00000004:word32] = d1;
			Mem111[a0_106 - 0x00000008:word32] = d1;
			Mem113[a0_106 - 0x0000000C:word32] = d1;
			Mem115[a0_106 - 0x00000010:word32] = d1;
			Mem117[a0_106 - 0x00000014:word32] = d1;
			Mem119[a0_106 - 0x00000018:word32] = d1;
			Mem121[a0_106 - 0x0000001C:word32] = d1;
			a0_105 = a0_106 - 0x0000001C;
			d1_104 = d1_104 - 0x00000001;
		} while (d1_104 != 0x00000000);
	word16 v22_58 = (word16) DPB(d0_16, (word16) d0_16 & 0x001F, 0, 16) >>u 0x0001;
	word32 d0_59 = DPB(d0_16, v22_58, 0, 16);
	if (v22_58 != 0x0000)
	{
		word32 d0_73 = DPB(d0_16, (word16) d0_59 - 0x0001, 0, 16);
		do
		{
			a0_105 = a0_105 - 0x00000002;
			Mem79[a0_105 + 0x00000000:word16] = (word16) d1;
			d0_73 = d0_73 - 0x00000001;
		} while (d0_73 != 0xFFFFFFFF);
	}
	return;
}

word32 fn0000963E(word32 d0, word32 a0, word32 a1, word32 dwArg00, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, ptr32 d1Out, ptr32 a1Out, ptr32 a2Out)
{
	word32 d0_20 = DPB(d0 + 0x00000003, (byte) (d0 + 0x00000001) & 0xFE, 0, 8);
	if (d0_20 != 0x00000000)
	{
		word32 v14_64 = a1 - a0;
		if (v14_64 != 0x00000000)
			if (v14_64 >= 0x00000000 && (a0 + d0_20) - a1 > 0x00000000)
			{
				word32 a0_151 = a0 + d0_20;
				word32 a1_152 = a1 + d0_20;
				word32 d1_154 = d0_20 >>u 0x00000005;
				if (d0_20 >>u 0x00000005 != 0x00000000)
					do
					{
						word32 a0_180 = a0_151 - 0x00000004;
						word32 a1_182 = a1_152 - 0x00000004;
						Mem184[a1_182 + 0x00000000:word32] = Mem0[a0_180 + 0x00000000:word32];
						Mem189[a1_182 - 0x00000004:word32] = Mem184[a0_180 - 0x00000004:word32];
						Mem194[a1_182 - 0x00000008:word32] = Mem189[a0_180 - 0x00000008:word32];
						Mem199[a1_182 - 0x0000000C:word32] = Mem194[a0_180 - 0x0000000C:word32];
						Mem204[a1_182 - 0x00000010:word32] = Mem199[a0_180 - 0x00000010:word32];
						Mem209[a1_182 - 0x00000014:word32] = Mem204[a0_180 - 0x00000014:word32];
						Mem214[a1_182 - 0x00000018:word32] = Mem209[a0_180 - 0x00000018:word32];
						Mem219[a1_182 - 0x0000001C:word32] = Mem214[a0_180 - 0x0000001C:word32];
						a0_151 = a0_180 - 0x0000001C;
						a1_152 = a1_182 - 0x0000001C;
						d1_154 = d1_154 - 0x00000001;
					} while (d1_154 != 0x00000000);
				word32 d0_164 = DPB(d0_20, (word16) DPB(d0_20, (word16) d0_20 & 0x001F, 0, 16) >>u 0x0001, 0, 16);
				d0_164 = d0_164 - 0x00000001;
				while (d0_164 != 0xFFFFFFFF)
				{
					a0_151 = a0_151 - 0x00000002;
					a1_152 = a1_152 - 0x00000002;
					Mem175[a1_152 + 0x00000000:word16] = Mem0[a0_151 + 0x00000000:word16];
					d0_164 = d0_164 - 0x00000001;
				}
			}
			else
			{
				word32 d1_101 = d0_20 >>u 0x00000005;
				if (d0_20 >>u 0x00000005 != 0x00000000)
					do
					{
						Mem107[a1 + 0x00000000:word32] = Mem0[a0 + 0x00000000:word32];
						word32 a0_105 = a0 + 0x00000004;
						word32 a1_108 = a1 + 0x00000004;
						Mem112[a1_108 + 0x00000000:word32] = Mem107[a0_105 + 0x00000000:word32];
						Mem117[a1_108 + 0x00000004:word32] = Mem112[a0_105 + 0x00000004:word32];
						Mem122[a1_108 + 0x00000008:word32] = Mem117[a0_105 + 0x00000008:word32];
						Mem127[a1_108 + 0x0000000C:word32] = Mem122[a0_105 + 0x0000000C:word32];
						Mem132[a1_108 + 0x00000010:word32] = Mem127[a0_105 + 0x00000010:word32];
						Mem137[a1_108 + 0x00000014:word32] = Mem132[a0_105 + 0x00000014:word32];
						Mem142[a1_108 + 0x00000018:word32] = Mem137[a0_105 + 0x00000018:word32];
						a0 = a0_105 + 0x0000001C;
						a1 = a1_108 + 0x0000001C;
						d1_101 = d1_101 - 0x00000001;
					} while (d1_101 != 0x00000000);
				word32 d0_87 = DPB(d0_20, (word16) DPB(d0_20, (word16) d0_20 & 0x001F, 0, 16) >>u 0x0001, 0, 16);
				d0_87 = d0_87 - 0x00000001;
				while (d0_87 != 0xFFFFFFFF)
				{
					Mem98[a1 + 0x00000000:word16] = Mem0[a0 + 0x00000000:word16];
					a0 = a0 + 0x00000002;
					a1 = a1 + 0x00000002;
					d0_87 = d0_87 - 0x00000001;
				}
			}
	}
}

word32 fn000096BC(ptr32 d1Out, ptr32 a6Out)
{
	word16 v6_6 = 0x0002DC66;
	word32 d1_10 = Mem0[v6_6 + 0x0002:word16];
	__ror((word16) Mem0[v6_6 + 0x0000:word16], 0x0001);
	word16 v17_22 = 0x0002DC66;
	word32 a6_23;
	*a6Out = Mem0[v17_22 + 0x0000:word16];
	word32 d1_30;
	*d1Out = Mem0[Mem0[v17_22 + 0x0002:word16]:word32];
	return d1_10 & 0x0000FFFF;
}

void fn0000982E(word32 d0)
{
	do
		;
	while (fn0000710E() != 0x00000000);
	return;
}

void fn0000983E(word32 d0, word32 d1, word32 d2)
{
	do
		d0 = fn0000716E(d0, d1, d2, out d1, out d2);
	while ((word16) d2 != 0x0000);
	return;
}

word32 fn00009906(word32 d0, word32 d7, ptr32 d2Out, ptr32 d7Out)
{
	*d2Out = d2;
	*d7Out = d7;
	word32 a0_11 = 0x00018108;
	word32 a1_13 = Mem0[0x00018104:word32];
	while (a1_13 - a0_11 >= 0x00000000)
	{
		if (Mem0[a1_13 + 12:word16] - 0xFFFF == 0x0000)
		{
			word32 d2_51;
			word32 a2_53;
			d0 = fn000046B2(DPB(d0, Mem0[a1_13 + 14:byte], 0, 8), d7, out d1, out d2_51, out d7, out a2_53);
			Mem55[a1_13 + 14:byte] = 0x00;
		}
		a1_13 = a1_13 - 0x00000004;
	}
	word32 a1_61 = 0x00018108;
	Mem63[0x00018104:word32] = a1_61;
	word32 a0_60 = 0x0002DDBE;
	Mem65[a1_61 + 0x00000000:word32] = a0_60;
	fn00009954(d0, a0_60);
	return d1;
}

void fn00009954(word32 d0, word32 a0)
{
	Mem15[0x00018138:word16] = (word16) DPB(d0, (word16) DPB(d0, (word16) DPB(d0, Mem0[a0 + 2:word16], 0, 16) - Mem0[a0 + 0x00000000:word16], 0, 16) + 0x0001, 0, 16);
	Mem24[0x0001813A:word16] = (word16) DPB(d0, (word16) DPB(d0, (word16) DPB(d0, Mem15[a0 + 6:word16], 0, 16) - Mem15[a0 + 4:word16], 0, 16) + 0x0001, 0, 16);
	Mem26[0x00017F20:word16] = Mem24[a0 + 8:word16];
	Mem28[0x00017F22:word16] = Mem26[a0 + 10:word16];
	return;
}

void fn000099C8()
{
	word32 a0_8 = 0x0002DDCE;
	word32 a1_9 = 0x00018140;
	Mem11[a1_9 + 0x00000000:word32] = a0_8;
	fn00009A00(a0_8);
	Mem14[0x0001813C:word32] = a1_9;
	return;
}

void fn00009A00(word32 a0)
{
	word32 d7_23 = 3;
	do
	{
		word32 v11_36 = Mem0[a0 + 0x00000000:word32];
		a0 = a0 + 0x00000004;
		word32 d0_39 = Mem0[v11_36 + 16:word32];
		if (d0_39 != 0x00000000 && Mem0[d0_39 + 0x00000000:word16] == 0x0000)
		{
			Mem71[d0_39 + 0x00000000:word16] = 0xFFFF;
			word32 a2_72 = d0_39 + 0x00000002;
			word32 a3_75 = Mem71[v11_36 + 20:word32];
			while (Mem71[a2_72 + 0x00000000:word16] != 0x0000)
			{
				word32 d0_84 = (word32) Mem71[a2_72 + 0x00000000:byte];
				Mem88[a2_72 + 0x00000000:byte] = (byte) DPB(d0_84, Mem71[a3_75 + -32 + d0_84:byte], 0, 8);
				word32 a2_89 = a2_72 + 0x00000001;
				Mem95[a2_89 + 0x00000000:byte] = (byte) DPB(d0_84, Mem88[a3_75 + -32 + DPB(d0_84, Mem88[a2_89 + 0x00000000:byte], 0, 8):byte], 0, 8);
				a2_72 = a2_89 + 0x00000001;
			}
		}
		d7_23 = d7_23 - 0x00000001;
	} while (d7_23 != 0xFFFFFFFF);
	return;
}

void fn00009A6A(word32 d0, word32 d1, word32 d2, word32 a0)
{
	word16 v17_40 = (word16) d0 & 0xFFF0;
	word32 d0_121 = DPB(d0, v17_40, 0, 16);
	word16 v21_42 = (word16) d0_121;
	Mem43[0x00017F1E:word16] = v21_42;
	word16 v15_38 = (word16) d0;
	word32 d4_148 = (word32) v15_38;
	word16 v22_44 = (word16) d4_148;
	word32 d5_45 = DPB(0x00000006, v22_44, 0, 16);
	word32 a6_137 = Mem43[Mem43[0x00017FEC:word32] + Mem43[Mem43[0x0001813C:word32]:word32]:word32];
	word32 a1_138 = Mem43[a6_137 + 20:word32];
	word32 a2_139 = Mem43[a6_137 + 24:word32];
	word32 a3_140 = Mem43[a6_137 + 28:word32];
	word16 v24_55 = Mem43[a6_137 + 0x00000000:word16];
	Mem56[0x00017F18:word16] = v24_55;
	word16 v25_57 = Mem56[a6_137 + 8:word16];
	Mem58[0x00017F1C:word16] = v25_57;
	word16 v23_46 = (word16) d5_45 & 0x000F;
	word32 d5_150 = DPB(d5_45, v23_46, 0, 16);
	word32 d6_198 = 0;
	word32 d7_141 = -1;
	word16 v26_88 = (word16) d5_150 - 0x0160;
	while (v26_88 <= 0x0000)
	{
		byte v28_119 = Mem58[a0 + 0x00000000:byte];
		a0 = a0 + 0x00000001;
		d0_121 = (word32) v28_119;
		if (v28_119 == 0x00)
			break;
		byte v30_124 = (byte) d0_121 - 0x7B;
		if (v30_124 == 0x00)
		{
			a0 = fn0000A26A(d0_121, a0, 0x0002DC6A);
			a6_137 = Mem58[Mem58[0x00017FEC:word32] + Mem58[Mem58[0x0001813C:word32]:word32]:word32];
			a1_138 = Mem58[a6_137 + 20:word32];
			a2_139 = Mem58[a6_137 + 24:word32];
			a3_140 = Mem58[a6_137 + 28:word32];
			d7_141 = -1;
		}
		else
		{
			byte v33_143 = (byte) d0_121 - 0x20;
			if (v33_143 != 0x00)
			{
				byte v34_154 = (byte) d0_121 - 0x24;
				if (v34_154 == 0x00)
				{
l00009B00:
					d4_148 = DPB(d4_148, (word16) d4_148 + Mem58[a6_137 + 10:word16], 0, 16);
					d5_150 = DPB(d5_150, (word16) d5_150 + Mem58[a6_137 + 10:word16], 0, 16);
					d7_141 = -1;
				}
				else
				{
					word16 v38_157 = (word16) d0_121 - 0x0020;
					if (v38_157 <u 0x0000)
						continue;
					byte v39_160 = Mem58[a1_138 + -32 + d0_121:byte];
					d0_121 = DPB(d0_121, v39_160, 0, 8);
					if (v39_160 < 0x00)
						continue;
					word16 v40_164 = (word16) d7_141 - 0xFFFF;
					if (v40_164 != 0x0000)
					{
						word32 d2_200 = Mem58[a6_137 + 16:word32];
						if (d2_200 != 0x00000000)
						{
							word32 a4_204 = d2_200 + 0x00000002;
							word32 d7_209 = DPB(DPB(0xFFFFFFFF, (word16) d7_141 << 0x0008, 0, 16), (byte) d0_121, 0, 8);
							do
							{
								word16 v43_213 = Mem58[a4_204 + 0x00000000:word16];
								a4_204 = a4_204 + 0x00000002;
								d2_200 = DPB(d2_200, v43_213, 0, 16);
								if (v43_213 == 0x0000)
									goto l00009B38;
							} while ((word16) d7_209 - (word16) d2_200 != 0x0000);
						}
					}
					byte v47_167 = (byte) d0_121;
					d7_141 = DPB(0xFFFFFFFF, v47_167, 0, 8);
					a3_140();
					d2 = (word32) Mem58[a2_139 + d0_121:byte];
					d4_148 = DPB(d4_148, (word16) DPB(d4_148, (word16) d4_148 + (word16) d2, 0, 16) + Mem58[a6_137 + 4:word16], 0, 16);
					d5_150 = DPB(d5_150, (word16) DPB(d5_150, (word16) d5_150 + (word16) d2, 0, 16) + Mem58[a6_137 + 4:word16], 0, 16);
					d6_198 = (word32) ((word16) d6_198 + 0x0001);
				}
			}
			else
				goto l00009B00;
		}
		v26_88 = (word16) d5_150 - 0x0160;
	}
	fn00009E8A(d0_121, d1, d2, d4_148, d5_150, d6_198, a6_137);
	return;
}

void fn00009E8A(word32 d0, word32 d1, word32 d2, word32 d4, word32 d5, word32 d6, word32 a6)
{
	if ((word16) d6 != 0x0000)
	{
		word32 d6_43 = (word32) (word16) d5;
		word32 d0_41 = DPB(d0, Mem0[0x00017F1E:word16], 0, 16);
		word32 d6_49 = DPB(d6_43, (word16) DPB(d6_43, (word16) DPB(d6_43, (word16) d6_43 + 0x000F, 0, 16) & 0xFFF0, 0, 16) >>u 0x0004, 0, 16);
		word32 d7_52 = DPB(0xFFFFFFFF, Mem0[0x00017F18:word16], 0, 16);
		fn00002A86(d0_41, d1, d2, d4, d5, d6_49, d7_52, a6);
		fn00002924(d0_41, d1, d2, d4, d6_49, d7_52, a6);
		fn00009ED6();
		Mem62[0x00017F1E:word16] = (word16) DPB(d0, (word16) DPB(d0, (word16) d4, 0, 16) & 0xFFF0, 0, 16);
	}
	return;
}

void fn00009ED6()
{
	fn000095F6(0x000003C4, 0, 0x000102BC);
	return;
}

word32 fn0000A26A(word32 d0, word32 a0, word32 a1)
{
	byte v6_10 = Mem0[a0 + 0x00000000:byte];
	word32 d0_12 = DPB(d0, v6_10, 0, 8);
	word16 v8_13 = (word16) d0_12 << 0x0008;
	byte v10_15 = Mem0[a0 + 0x00000001:byte];
	word32 d0_18 = __swap(DPB(DPB(d0_12, v8_13, 0, 16), v10_15, 0, 8));
	byte v14_19 = Mem0[a0 + 0x00000002:byte];
	word32 d0_21 = DPB(d0_18, v14_19, 0, 8);
	word16 v15_22 = (word16) d0_21 << 0x0008;
	byte v16_25 = Mem0[a0 + 0x00000003:byte];
	word32 a0_26 = a0 + 0x00000004;
	word32 d0_27 = DPB(DPB(d0_21, v15_22, 0, 16), v16_25, 0, 8);
	while (Mem0[a1 + 0x00000000:word32] != 0x00000000)
	{
		word32 v18_52 = Mem0[a1 + 0x00000000:word32];
		word32 a1_53 = a1 + 0x00000004;
		word32 v19_54 = d0_27 - v18_52;
		if (v19_54 == 0x00000000)
		{
			word32 a1_58 = Mem0[a1_53 + 0x00000000:word32];
			a1_58();
			goto l0000A28C;
		}
		a1 = a1_53 + 0x00000004;
	}
l0000A28C:
	do
	{
		a0_26 = a0_61 + 0x00000001;
		word32 a0_61 = a0_26;
	} while (Mem0[a0_61 + 0x00000000:byte] != 0x7D);
	return a0_26;
}

word32 fn0000B818(word32 d0, word32 d1, word32 d2, word32 d3, word32 d4, word32 d5, word32 d6, word32 a6, ptr32 a0Out, ptr32 a4Out, ptr32 a6Out)
{
	fn000015B8(d0, d1, d2, DPB(d4, 0x00C3, 0, 16), a6);
	word32 d0_26 = (word32) ((word16) d0 + 0x0001);
	word32 d5_21 = DPB(d5, (word16) d0, 0, 16);
	word32 d2_30 = DPB(d2, (word16) DPB(d2, (word16) d2 + (word16) d0_26, 0, 16) - 0x0003, 0, 16);
	fn00001BF4(d0_26, d1, d2_30, d3, DPB(d4, 0x00C4, 0, 16), d5_21, a6);
	fn000015B8(DPB(d0_26, (word16) DPB(d0_26, (word16) d2_30, 0, 16) + 0x0001, 0, 16), d1, d2_30, DPB(d4, 0x00C6, 0, 16), a6);
	word32 d1_44 = DPB(0x000000C0, (word16) d1 + 0x0001, 0, 16);
	word32 d1_68;
	word32 d2_69;
	word32 d3_70;
	word32 d4_71;
	word32 d5_72;
	word32 d6_73;
	word32 a0_74;
	word32 a4_75;
	word32 a6_76;
	word32 d0_77 = fn00001ACA(DPB(d0_26, (word16) d5_21, 0, 16), d1_44, d2_30, DPB(d3, (word16) DPB(d3, (word16) d3 + (word16) d1_44, 0, 16) - 0x0003, 0, 16), DPB(d4, 0x00C4, 0, 16), d5_21, d6, a6, dwLoc0E, dwLoc0A, dwLoc06, dwLoc02, dwArg02, dwArg06, dwArg0A, dwArg0E, dwArg12, dwArg16, dwArg1A, dwArg1E, dwArg22, dwArg26, dwArg2A, out d1_68, out d2_69, out d3_70, out d4_71, out d5_72, out d6_73, out a0_74, out a4_75, out a6_76);
	word32 d1_91;
	word32 d2_92;
	word32 d3_93;
	word32 d4_94;
	word32 d5_95;
	word32 d6_96;
	word32 a0_97;
	word32 a4_98;
	word32 a6_99;
	word32 d0_100 = fn00001ACA(DPB(d0_77, (word16) DPB(d0_77, (word16) d2_69, 0, 16) + 0x0001, 0, 16), d1_68, d2_69, d3_70, DPB(d4_71, 0x00C8, 0, 16), d5_72, d6_73, a6_76, dwArg0A, dwArg0E, dwArg12, dwArg16, dwArg1A, dwArg1E, dwArg22, dwArg26, dwArg2A, dwArg2E, dwArg32, dwArg36, dwArg3A, dwArg3E, dwArg42, out d1_91, out d2_92, out d3_93, out d4_94, out d5_95, out d6_96, out a0_97, out a4_98, out a6_99);
	word32 d0_102 = DPB(d0_100, (word16) d5_95, 0, 16);
	word32 d1_106 = DPB(d1_91, (word16) DPB(d1_91, (word16) d3_93, 0, 16) + 0x0001, 0, 16);
	fn000015B8(d0_102, d1_106, d2_92, DPB(d4_94, 0x00C6, 0, 16), a6_99);
	fn00001BF4(DPB(d0_100, (word16) d0_102 + 0x0001, 0, 16), d1_106, DPB(d2_92, (word16) d2_92 + 0x0001, 0, 16), d3_93, DPB(d4_94, 0x00C8, 0, 16), d5_95, a6_99);
	return d6_96;
}

word32 fn0000B88A(word32 d0, word32 d1, word32 d2, word32 d3, word32 d4, word32 d5, word32 d6, word32 a6, ptr32 a6Out)
{
	word32 d5_21 = DPB(0x00000006, (word16) d0, 0, 16);
	word32 d2_25 = DPB(d2, (word16) DPB(d2, (word16) d2 + (word16) d0, 0, 16) - 0x0002, 0, 16);
	fn00001BF4(d0, d1, d2_25, d3, DPB(d4, 0x00C8, 0, 16), d5_21, a6);
	word32 d0_31 = DPB(0x0000002F, (word16) d2_25, 0, 16);
	fn000015B8(DPB(d0_31, (word16) d0_31 + 0x0001, 0, 16), d1, d2_25, DPB(d4, 0x00C6, 0, 16), a6);
	word32 d1_40 = DPB(0x00000013, (word16) d1 + 0x0001, 0, 16);
	word32 d3_42 = DPB(0x00000088, (word16) d3 + (word16) d1_40, 0, 16);
	word32 d1_64;
	word32 d2_65;
	word32 d3_66;
	word32 d4_67;
	word32 d5_68;
	word32 d6_69;
	word32 a0_70;
	word32 a4_71;
	word32 a6_72;
	word32 d0_73 = fn00001ACA(DPB(d0_31, (word16) d5_21, 0, 16), d1_40, d2_25, DPB(d3_42, (word16) d3_42 - 0x0003, 0, 16), DPB(d4, 0x00C8, 0, 16), d5_21, d6, a6, dwLoc0E, dwLoc0A, dwLoc06, dwLoc02, dwArg02, dwArg06, dwArg0A, dwArg0E, dwArg12, dwArg16, dwArg1A, dwArg1E, dwArg22, dwArg26, dwArg2A, out d1_64, out d2_65, out d3_66, out d4_67, out d5_68, out d6_69, out a0_70, out a4_71, out a6_72);
	word32 d1_87;
	word32 d2_88;
	word32 d3_89;
	word32 d4_90;
	word32 d5_91;
	word32 d6_92;
	word32 a0_93;
	word32 a4_94;
	word32 a6_95;
	word32 d0_96 = fn00001ACA(DPB(d0_73, (word16) DPB(d0_73, (word16) d2_65, 0, 16) + 0x0001, 0, 16), d1_64, d2_65, d3_66, DPB(d4_67, 0x00C5, 0, 16), d5_68, d6_69, a6_72, dwArg0A, dwArg0E, dwArg12, dwArg16, dwArg1A, dwArg1E, dwArg22, dwArg26, dwArg2A, dwArg2E, dwArg32, dwArg36, dwArg3A, dwArg3E, dwArg42, out d1_87, out d2_88, out d3_89, out d4_90, out d5_91, out d6_92, out a0_93, out a4_94, out a6_95);
	word32 d0_98 = DPB(d0_96, (word16) d5_91, 0, 16);
	word32 d1_102 = DPB(d1_87, (word16) DPB(d1_87, (word16) d3_89, 0, 16) + 0x0001, 0, 16);
	fn000015B8(d0_98, d1_102, d2_88, DPB(d4_90, 0x00C6, 0, 16), a6_95);
	fn00001BF4(DPB(d0_96, (word16) d0_98 + 0x0001, 0, 16), d1_102, DPB(d2_88, (word16) d2_88 + 0x0001, 0, 16), d3_89, DPB(d4_90, 0x00C5, 0, 16), d5_91, a6_95);
	return d6_92;
}

word32 fn0000B912(word32 d0, word32 d1, word32 d2, word32 d3, word32 d4, word32 d5, word32 d6, word32 a6, ptr32 d6Out, ptr32 a6Out)
{
	word32 a0_18;
	word32 a4_19;
	word32 a6_20;
	word32 d6_21 = fn0000B818(d0, d1, d2, d3, d4, d5, d6, a6, out a0_18, out a4_19, out a6_20);
	*d6Out = d6_21;
	fn000039C6((word32) ((word16) d0 + 0x0001), DPB(0x000000C0, (word16) d1 + 0x0001, 0, 16), DPB(d2, (word16) DPB(d2, (word16) d2 + (word16) d0, 0, 16) - 0x0002, 0, 16), DPB(d3, (word16) DPB(d3, (word16) d3 + (word16) d1, 0, 16) - 0x0002, 0, 16), d4, d5, d6_21, a4_19, a6_20);
	return d4;
}

word32 fn0000C028(word32 d2, word32 d3, word32 d5, word32 d6, word32 a3, word32 a6, ptr32 d5Out, ptr32 d6Out, ptr32 a6Out)
{
	word32 a7_1 = fp;
	word32 a2_13 = 0x00014F4C;
	word32 d7_15 = 5;
	do
	{
		Mem12[a2_13 + 0x00000000:word16] = (word16) DPB(0x00000006, 0x0006 - (word16) d7_15, 0, 16);
		a2_13 = a2_13 + 0x00000002;
		d7_15 = d7_15 - 0x00000001;
	} while (d7_15 != 0xFFFFFFFF);
	fn00005CD2(6, 6, d2, d3, d5, d6, 0x00014F4C, 0x00018316, a3, a6);
	fn000058F4(0, 1, 0x00010680, a6);
	word32 a0_34 = 0x0003A9F4;
	Mem36[a0_34 + 0x00000000:byte] = 0xC0;
	Mem38[a0_34 + 1:byte] = 0xC0;
	word32 d2_33 = DPB(d2, 0x00C0, 0, 16);
	Mem40[a0_34 + 2:byte] = (byte) d2_33;
	Mem42[0x0001DA2A:word16] = 0x00C0;
	Mem44[0x0001DA2C:word16] = 0x00C0;
	Mem46[0x0001DA2E:word16] = (word16) d2_33;
	fn000058F4(0x000000C0, 64, 0x0003A9F4, a6);
	word32 d6_56;
	word32 a1_57;
	Mem60[0x000182EA:word16] = (word16) fn0000916E(0, 64, d2_33, d4, d6, 0x0002E4C4, out d6_56, out a1_57);
	word32 d2_63 = DPB(d2, 0x015F, 0, 16);
	fn00003E22(0, 0, d2_63, DPB(d3, 0x00BF, 0, 16), d4, d5, d6_56, a6);
	word32 d6_70;
	word32 a1_71;
	Mem74[0x000182EC:word16] = (word16) fn0000916E(0, 0, d2_63, d4, d6_56, 0x0002E4C4, out d6_70, out a1_71);
	word32 d2_77 = DPB(d2, 0x00A0, 0, 16);
	word32 d6_80;
	word32 a6_81;
	word32 d4_82 = fn0000B912(0, 0x000000C0, d2_77, DPB(d3, 0x0030, 0, 16), d4, d5, d6_70, a6, out d6_80, out a6_81);
	word32 d6_88;
	word32 a1_89;
	word32 d0_90 = fn0000916E((word32) Mem74[0x000182EC:word16], 0x000000C0, d2_77, d4_82, d6_80, 0x0002E5D0, out d6_88, out a1_89);
	Mem92[0x000182EE:word16] = (word16) d0_90;
	word32 d6_98;
	word32 a1_99;
	word32 d0_100 = fn0000916E(DPB(d0_90, Mem92[0x000182EC:word16], 0, 16), 0x000000C0, d2_77, d4_82, d6_88, 0x0002E5EA, out d6_98, out a1_99);
	Mem102[0x000182F0:word16] = (word16) d0_100;
	fn00009326(d0_100, 18);
	word32 a1_105 = 0x00018316;
	word32 d0_106 = 2;
	word32 d4_108 = DPB(d4_82, 0x00C0, 0, 16);
	word32 d7_111 = 37;
	word32 d3_112 = 5;
	do
	{
		word32 a7_119 = a7_1 - 0x00000004;
		Mem121[a7_119 + 0x00000000:word32] = d0_106;
		word32 d1_125;
		word32 d2_126;
		word32 d7_127;
		word32 a2_128;
		word32 d0_129 = fn000054A2(DPB(0x00000002, Mem121[a1_105 + 0x00000000:byte], 0, 8), d7_111, out d1_125, out d2_126, out d7_127, out a2_128);
		word32 v32_131 = Mem121[a7_119 + 0x00000000:word32];
		fn00001F5C(v32_131, d1_125, d4_108, 6, 2, d7_127, d0_129, a6_81);
		Mem137[a7_119 + 0x00000000:word32] = v32_131;
		word32 d1_142;
		word32 d2_143;
		word32 a2_146;
		fn000054C6(DPB(v32_131, Mem137[a1_105 + 0x00000000:byte], 0, 8), d7_127, d0_129, out d1_142, out d2_143, out d7_111, out a1_105, out a2_146);
		word32 v35_148 = Mem137[a7_119 + 0x00000000:word32];
		a7_1 = a7_119 + 0x00000004;
		d0_106 = DPB(v35_148, (word16) v35_148 + 0x0019, 0, 16);
		d3_112 = d3_112 - 0x00000001;
	} while (d3_112 != 0xFFFFFFFF);
	word32 d2_157 = DPB(d2_143, 0x0102, 0, 16);
	word32 a6_160;
	word32 d6_161 = fn0000B88A(47, 19, d2_157, 0x00000088, d4_108, 6, 2, a6_81, out a6_160);
	word32 a0_171;
	word32 a4_172;
	word32 a6_173;
	fn0000B818(0x00000030, 0x00000014, DPB(d2_143, (word16) d2_157 - 0x0002, 0, 16), 0x00000086, d4_108, 6, d6_161, a6_160, out a0_171, out a4_172, out a6_173);
	word32 d4_181;
	word32 d5_182;
	word32 d6_183;
	word32 d7_184;
	word32 a6_185;
	word32 d1_186 = fn00008206(0, 0, DPB(d2_143, 0x002C, 0, 16), 0x00000018, 35, a0_171, out d4_181, out d5_182, out d6_183, out d7_184, out a6_185);
	word32 d3_187;
	word32 d4_188;
	word32 d5_189;
	word32 d6_190;
	word32 a3_191;
	word32 d2_192 = fn00008006(d1_186, d4_181, d5_182, d6_183, d7_184, a6_185, out d3_187, out d4_188, out d5_189, out d6_190, out a3_191);
	word32 a0_193 = 0x0002E678;
	word32 d6_198;
	word32 a1_199;
	word32 d0_200 = fn0000916E((word32) Mem137[0x000182EA:word16], d1_186, d2_192, d4_188, d6_190, a0_193, out d6_198, out a1_199);
	Mem202[0x0002712A:word16] = 0x0001;
	Mem204[0x0002712C:word16] = 0x000A;
	Mem206[0x0002712E:word16] = 0x000A;
	Mem208[0x00027130:word16] = 0x0000;
	word32 a0_212 = 0x00014468;
	word32 a6_210;
	word32 d5_211;
	*d5Out = fn0000C5DC(d0_200, d3_187, a0_193, a1_199, a6_185, out a6_210);
	word32 a1_213 = 0x00018184;
	word32 a2_214 = a0_212;
	word32 d6_216 = 0x000000FF;
	do
	{
		word32 a2_223 = a2_214 + 0x00000001;
		word32 d2_232 = (word32) Mem208[a2_223 + 0x00000001:byte];
		word32 d0_224 = (word32) Mem208[a2_214 + 0x00000000:byte];
		word32 d1_228 = (word32) Mem208[a2_223 + 0x00000000:byte];
		word32 d2_247 = DPB(DPB(d2_232 *u 0x0037 *u 0x0037, (uint16) (d2_232 *u 0x0037 % 0x0064), 16, 16), (uint16) (d2_232 *u 0x0037 /u 0x0064), 0, 16);
		Mem252[a1_213 + 0x00000000:byte] = (byte) fn00005898(DPB(DPB(d0_224 *u 0x0037 *u 0x0037, (uint16) (d0_224 *u 0x0037 % 0x0064), 16, 16), (uint16) (d0_224 *u 0x0037 /u 0x0064), 0, 16), DPB(DPB(d1_228 *u 0x0037 *u 0x0037, (uint16) (d1_228 *u 0x0037 % 0x0064), 16, 16), (uint16) (d1_228 *u 0x0037 /u 0x0064), 0, 16), d2_247, 0x00000100, a0_212, a1_213);
		a2_214 = a2_223 + 0x00000002;
		a1_213 = a1_213 + 0x00000001;
		d6_216 = d6_216 - 0x00000001;
		*d6Out = d6_216;
	} while (d6_216 != 0xFFFFFFFF);
	fn00008DBE();
	return d2_247;
}

word32 fn0000C5DC(word32 d0, word32 d3, word32 a0, word32 a1, word32 a6, ptr32 a6Out)
{
	word32 a0_111;
	word32 d0_22 = fn00005B6E(DPB(d0, Mem0[0x0002712A:word16], 0, 16), 10, d3, a0, a1, a6);
	Mem24[0x0001832E:byte] = (byte) d0_22;
	word32 d1_26;
	word32 d2_27;
	word32 d7_28;
	word32 a2_29;
	word32 d0_30 = fn000054A2(d0_22, d7, out d1_26, out d2_27, out d7_28, out a2_29);
	Mem38[fp - 0x00000014:word32] = DPB(d0_30, Mem24[d0_30 + 2:byte], 0, 8);
	word32 d1_42;
	word32 d2_43;
	word32 d7_44;
	word32 a1_45;
	word32 a2_46;
	fn000054C6(DPB(d0_30, Mem38[0x0001832E:byte], 0, 8), d7_28, d0_30, out d1_42, out d2_43, out d7_44, out a1_45, out a2_46);
	word32 v14_48 = Mem38[fp - 0x00000014:word32];
	Mem54[0x0001832A:byte] = cond((byte) v14_48 - 0x01);
	Mem61[0x00018329:byte] = (byte) DPB(d1_42, (word16) DPB(d1_42, (word16) d1_42 >>u 0x0002, 0, 16) & 0x0003, 0, 16);
	Mem64[fp - 0x00000014:word32] = v14_48;
	word32 d1_68;
	word32 d2_69;
	word32 d7_70;
	word32 a2_71;
	word32 d0_72 = fn000054A2(DPB(v14_48, Mem64[0x0001832E:byte], 0, 8), d7_44, out d1_68, out d2_69, out d7_70, out a2_71);
	word32 d0_79 = (word32) Mem64[d0_72 + 4:byte];
	Mem81[0x00018330:word16] = (word16) d0_79;
	Mem86[0x00018332:word16] = (word16) (word32) Mem81[d0_72 + 5:byte];
	Mem89[fp - 0x00000014:word32] = d0_79;
	word32 d1_93;
	word32 d2_94;
	word32 d7_95;
	word32 a1_96;
	word32 a2_97;
	fn000054C6(DPB(d0_79, Mem89[0x0001832E:byte], 0, 8), d7_70, d0_72, out d1_93, out d2_94, out d7_95, out a1_96, out a2_97);
	word32 v33_99 = Mem89[fp - 0x00000014:word32];
	word32 d1_102 = d1_93 *u (word16) v33_99;
	Mem104[0x00018334:word16] = (word16) d1_102;
	word32 d2_106 = fn0000C69E(v33_99, d7_95);
	if (Mem104[0x0001832A:byte] == 0x00)
		a0_111 = 0x0002E728;
	else
		a0_111 = 0x0002E728;
	word32 a6_113;
	return fn00008C32(v33_99, d1_102, d2_106, d6, a0_111, a6, out a6_113);
}

word32 fn0000C69E(word32 d0, word32 d7)
{
	word32 d1_24;
	word32 d2_25;
	word32 d7_26;
	word32 a2_27;
	word32 d0_28 = fn000054A2(DPB(d0, Mem0[0x0001832E:byte], 0, 8), d7, out d1_24, out d2_25, out d7_26, out a2_27);
	word32 d1_36 = (word32) Mem0[0x00018334:word16];
	word32 d0_39 = d1_36 + 0x0000014A + d1_36 * 0x00000002;
	Mem43[0x0001895C:word32] = d0_39 + 0x00000002;
	word32 d0_40 = d0_39 + 0x00000002;
	word32 a1_44 = d0_28 + (d0_39 + 0x00000002);
	word32 d7_47 = DPB(0x00000025, Mem43[0x00018332:word16], 0, 16);
	do
	{
		word32 d1_54 = (word32) Mem43[a1_44 + 0x00000000:word16];
		d0_40 = d0_40 + 0x00000002 + d1_54;
		a1_44 = a1_44 + 0x00000002 + d1_54;
		d7_47 = d7_47 - 0x00000001;
	} while (d7_47 != 0xFFFFFFFF);
	word32 d1_61 = DPB(d1_54, Mem43[d0_28 + d0_40:word16], 0, 16);
	Mem64[0x00018960:word32] = d0_40 + 0x00000002;
	word32 d0_144 = d0_40 + 0x00000002 + d1_61 *u 0x000C;
	Mem69[0x00018964:word32] = d0_144;
	word32 d1_140 = d1_61 *u 0x000C;
	word32 a1_71 = d0_28 + 10 + 6;
	word32 d7_72 = 31;
	do
	{
		if (Mem69[a1_71 + 0x00000000:byte] != 0x00)
		{
			d1_140 = DPB(d1_140, (word16) DPB(d1_140, (word16) DPB(d1_140, Mem69[a1_71 + 0:word16], 0, 16) >>u 0x0002, 0, 16) & 0x0003, 0, 16);
			if ((word16) d1_140 != 0x0000)
				d0_144 = d0_144 + 0x00000002;
			else
				d0_144 = d0_144 + 0x00000240;
		}
		a1_71 = a1_71 + 10;
		d7_72 = d7_72 - 0x00000001;
	} while (d7_72 != 0xFFFFFFFF);
	word32 d1_92 = DPB(d1_140, Mem69[d0_28 + d0_144:word16], 0, 16);
	Mem94[0x00018336:word16] = (word16) d1_92;
	word32 d0_95 = d0_144 + 0x00000002;
	Mem97[0x00018968:word32] = d0_95;
	word32 d0_99 = d0_95 + d1_92 *u 0x0004;
	if (Mem97[0x0001832A:byte] != 0x00)
		Mem132[0x0001896C:word32] = d0_99;
	Mem107[fp - 0x00000018:word32] = d0_99;
	word32 d1_111;
	word32 d2_112;
	word32 d7_113;
	word32 a1_114;
	word32 a2_115;
	fn000054C6(DPB(0x00000152, Mem107[0x0001832E:byte], 0, 8), d7_72, d0_28, out d1_111, out d2_112, out d7_113, out a1_114, out a2_115);
	return d2_112;
}

word32 fn0000FEF8(word32 d0, word32 d7, word32 a0, word32 a6)
{
	if ((word16) d0 == 0x0000)
		goto l0000FF14;
	else if ((word16) d0 - 0x0029 >= 0x0000)
	{
		fn0000141A(36, d7, a0, a6);
		return a0;
	}
	else
	{
		a0 = (0x0003AC8E + -4)[d0 * 2];
l0000FF14:
		return a0;
	}
}

word32 fn0000FF16(word32 d1)
{
	word32 d1_9 = DPB(d1, (word16) d1 & 0x00FF, 0, 16);
	return DPB(d1_9, (0x0003AAB4 + 1)[d1_9 * 3], 0, 8);
}

word32 fn0000FF2A(word32 d1)
{
	word32 d1_9 = DPB(d1, (word16) d1 & 0x00FF, 0, 16);
	return DPB(d1_9, (byte) DPB(d1_9, 0x0003AAB4[d1_9 * 3], 0, 8) & 0x7F, 0, 8);
}

void fn00010064()
{
	return;
}

void fn00010066(word32 d7, word32 a0, word32 a6)
{
	fn0000141A(41, d7, a0, a6);
	return;
}

