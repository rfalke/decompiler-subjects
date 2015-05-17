// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_382/ia32_elf/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn08048398()
{
	Mem0[0x0804A0BC:word32]();
	return;
}

void fn080483A8()
{
	Mem0[0x0804A0C0:word32]();
	return;
}

void fn080483B8()
{
	Mem0[0x0804A0C4:word32]();
	return;
}

void fn080483C8()
{
	Mem0[0x0804A0C8:word32]();
	return;
}

void fn080483D8()
{
	Mem0[0x0804A0CC:word32]();
	return;
}

void fn080483E8()
{
	Mem0[0x0804A0D0:word32]();
	return;
}

void fn080483F8()
{
	Mem0[0x0804A0D4:word32]();
	return;
}

void fn08048408()
{
	Mem0[0x0804A0D8:word32]();
	return;
}

void fn08048418()
{
	Mem0[0x0804A0DC:word32]();
	return;
}

void fn08048428()
{
	Mem0[0x0804A0E0:word32]();
	return;
}

real64 fn08048438(word32 eax, word32 edx)
{
	return Mem0[eax + 0x00000000:real32] * Mem0[edx + 0x00000000:real32] + Mem0[eax + 0x00000004:real32] * Mem0[edx + 0x00000004:real32] + Mem0[eax + 0x00000008:real32] * Mem0[edx + 0x00000008:real32];
}

void fn0804844D(word32 eax, word32 ecx, word32 edx)
{
	real64 rLoc2_7 = Mem0[eax + 0x00000008:real32];
	Mem14[ecx + 0x00000000:real32] = Mem0[eax + 0x00000004:real32] * Mem0[edx + 0x00000008:real32] - Mem0[edx + 0x00000004:real32] * rLoc2_7;
	real64 rLoc2_17 = Mem14[eax + 0x00000000:real32];
	Mem24[ecx + 0x00000004:real32] = rLoc2_7 * Mem14[edx + 0x00000000:real32] - Mem14[edx + 0x00000008:real32] * rLoc2_17;
	Mem29[ecx + 0x00000008:real32] = rLoc2_17 * Mem24[edx + 0x00000004:real32] - Mem24[eax + 0x00000004:real32] * Mem24[edx + 0x00000000:real32];
	return;
}

void fn0804847F(word32 eax, word32 ecx, word32 edx)
{
	Mem7[ecx + 0x00000000:real32] = Mem0[eax + 0x00000000:real32] - Mem0[edx + 0x00000000:real32];
	Mem11[ecx + 0x00000004:real32] = Mem7[eax + 0x00000004:real32] - Mem7[edx + 0x00000004:real32];
	Mem14[ecx + 0x00000008:real32] = Mem11[eax + 0x00000008:real32] - Mem11[edx + 0x00000008:real32];
	return;
}

real64 fn08048498(word32 eax)
{
	return sqrt(fn08048438(eax, eax));
}

void fn080484A2(word32 eax)
{
	real64 rLoc1_9 = sqrt(fn08048438(eax, eax));
	Mem12[0x08049A00:real32] = Mem0[0x08049A00:real32] / rLoc1_9;
	Mem15[eax + 0x00000000:real32] = Mem12[eax + 0x00000000:real32] * rLoc1_9;
	Mem18[eax + 0x00000004:real32] = Mem15[eax + 0x00000004:real32] * rLoc1_9;
	Mem20[eax + 0x00000008:real32] = rLoc1_9 * Mem18[eax + 0x00000008:real32];
	return;
}

void fn080484CA(word32 eax, word32 edx)
{
	fn08048398();
	word32 edi_10 = 0x00000000;
	do
	{
		int64 edx_eax_43 = (int64) edi_10;
		word32 ebx_44 = 0x00000064;
		do
		{
			word32 eax_196;
			word32 eax_185;
			word32 esi_65 = eax + ((edi_10 << 0x00000008) + ebx_44) * 0x00000004;
			Mem66[esi_65 + 0x00000000:word32] = 0x00FFFFFF;
			if ((byte) edx == 0x00)
			{
				eax_196 = ebx_44 + 0x00000000 ^ edi_10;
l0804855E:
				eax_185 = eax_196 *s 0x00010101;
l08048564:
				Mem191[esi_65 + 0x00000000:word32] = eax_185;
			}
			else if ((byte) edx != 0x01)
				if ((byte) (edx - 0x00000002) <=u 0x01)
				{
					fn08048418();
					eax_196 = (int64) (edx - 0x00000002) % 0x00000040 + 0x000000C0;
					if ((byte) edx == 0x02)
						eax_185 = eax_196 << 0x00000008;
					else
						goto l0804855E;
				}
			else if ((int64) ebx_44 % 0x00000014 <= 0x00000009)
			{
				eax_185 = 0x00FF0000;
				if (edx_eax_43 % 0x00000014 > 0x00000009)
				{
l0804852F:
					eax_185 = 0x00FF00FF;
				}
			}
			else
				goto l0804852F;
			ebx_44 = ebx_44 + 0x00000001;
		} while (ebx_44 != 0x0000009C);
		edi_10 = edi_10 + 0x00000001;
	} while (edi_10 != 0x00000100);
	if ((byte) edx == 0x04)
	{
		word32 ebp_108 = 0x00000000;
		while (true)
		{
			word32 edi_123 = 0x00000000;
			do
			{
				word32 ebx_136 = ebp_108;
				word32 esi_137 = 0x00000000;
				do
				{
					word32 edx_147 = edi_123;
					word32 dwLoc20_150 = 0x00000000;
					do
					{
						eax[((ebx_136 << 0x00000008) + edx_147) * 0x00000004] = 0x00FF0000;
						(eax + 0x00000040)[((ebx_136 << 0x00000008) + 0x00001000 + edx_147) * 0x00000004] = 0x00FF0000;
						word32 v19_157 = dwLoc20_150 + 0x00000001;
						dwLoc20_150 = v19_157;
						edx_147 = edx_147 + 0x00000001;
					} while (v19_157 != 0x00000010);
					esi_137 = esi_137 + 0x00000001;
					ebx_136 = ebx_136 + 0x00000001;
				} while (esi_137 != 0x00000010);
				edi_123 = edi_123 + 0x00000020;
			} while (edi_123 != 0x00000100);
			ebp_108 = ebp_108 + 0x00000020;
			if (ebp_108 == 0x00000100)
				goto l0804860B;
		}
	}
	return;
}

word32 fn08048613(byte bl, real32 rArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, word32 dwArg14, word32 dwArg18, word32 dwArg1C)
{
	fn0804844D(fp - 0x00040044, fp - 0x00040050, fp - 0x0004008C);
	fn080484CA(fp - 0x0004000C, (int32) bl);
	fn080483E8();
	return eax;
}

void fn080486BA(byte bl, word32 dwArg04, word32 dwArg08, word32 dwArg0C, real32 rArg10, word32 dwArg14, word32 dwArg18)
{
	fn0804844D(fp - 0x00040044, fp - 0x00040050, fp - 0x00040074);
	fn080484CA(fp - 0x0004000C, (int32) bl);
	fn080483E8();
	return;
}

void fn08048775(byte dl, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10)
{
	fn080484CA(fp - 0x00040008, (int32) dl);
	fn080483E8();
	return;
}

void fn0804881D(word32 eax, word32 ecx, word32 edx, word32 dwArg00, word32 dwArg04, word32 dwArg08, real32 rArg0C, word32 dwArg10)
{
	fn08048775(0x04, dwArg00, dwArg04, dwArg08, (real64) eax);
	fn080483E8();
	word32 edi_133 = dwArg10;
	if (edx > 0x00000000)
	{
		word32 esi_221;
		if (ecx != 0x00000001)
		{
			Mem280[fp - 0x000400F4:word32] = dwArg08;
			real64 rLoc1_273 = (real64) (SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) / 0x00000002);
			int64 edx_eax_261 = SEQ((int64) eax % 0x00000002, eax);
			fn0804881D(edx_eax_261 / 0x00000002, 0x00000002, edx - 0x00000001, dwLoc40100, dwArg04 + rLoc1_273, dwArg04, 0x00040080, dwArg10 + 0x00000001);
			if (ecx != 0x00000002)
			{
				fn0804881D(edx_eax_261 / 0x00000002, 0x00000001, edx - 0x00000001, dwLoc40100, dwArg04 - rLoc1_273, dwArg04, dwArg08, dwArg10 + 0x00000002);
				if (ecx != 0x00000003)
				{
					fn0804881D(edx_eax_261 / 0x00000002, 0x00000004, edx - 0x00000001, dwLoc40100, dwArg00, dwArg08 + rLoc1_273, dwArg08, dwArg10 + 0x00000003);
					esi_221 = dwArg10 + 0x00000003;
					if (ecx != 0x00000004)
					{
l08048986:
						edi_133 = esi_221 + 0x00000001;
						fn0804881D(SEQ((int64) eax % 0x00000002, eax) / 0x00000002, 0x00000003, edx - 0x00000001, dwLoc40100, dwArg00, (real64) (SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) / 0x00000002), dwArg08, edi_133);
						if (ecx != 0x00000005)
						{
l080489DC:
							edi_133 = edi_133 + 0x00000001;
							fn0804881D(SEQ((int64) eax % 0x00000002, eax) / 0x00000002, 0x00000006, edx - 0x00000001, dwLoc40100, dwArg00, dwArg04, (real64) (SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) / 0x00000002) + rArg0C, edi_133);
							if (ecx != 0x00000006)
							{
l08048A30:
								edi_133 = edi_133 + 0x00000001;
								fn0804881D(SEQ((int64) eax % 0x00000002, eax) / 0x00000002, 0x00000005, edx - 0x00000001, dwLoc40100, dwArg00, dwArg04, (real64) (SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) / 0x00000002), edi_133);
							}
						}
						else
							goto l08048A30;
					}
					else
					{
						fn0804881D(edx_eax_261 / 0x00000002, 0x00000006, edx - 0x00000001, dwLoc40100, dwArg00, dwArg04, rArg0C + rLoc1_273, dwArg10 + 0x00000004);
						edi_133 = dwArg10 + 0x00000004;
						goto l08048A30;
					}
				}
				else
				{
					fn0804881D(edx_eax_261 / 0x00000002, 0x00000003, edx - 0x00000001, dwLoc40100, dwArg00, dwArg08 - rLoc1_273, dwArg08, dwArg10 + 0x00000003);
					fn0804881D(edx_eax_261 / 0x00000002, 0x00000006, edx - 0x00000001, dwLoc40110, dwArg00, dwArg04, rArg0C + rLoc1_273, dwArg10 + 0x00000004);
					edi_133 = dwArg10 + 0x00000004;
					dwLoc40100 = dwArg10 + 0x00000004;
					goto l08048A30;
				}
			}
			else
			{
				fn0804881D(edx_eax_261 / 0x00000002, 0x00000004, edx - 0x00000001, dwLoc40100, dwArg00, dwArg08 + rLoc1_273, dwArg08, dwArg10 + 0x00000002);
				fn0804881D(edx_eax_261 / 0x00000002, 0x00000003, edx - 0x00000001, dwLoc40110, dwArg00, dwArg08 - rLoc1_273, dwArg08, dwArg10 + 0x00000003);
				edi_133 = dwArg10 + 0x00000003;
				dwLoc40100 = dwArg10 + 0x00000003;
				goto l080489DC;
			}
		}
		else
		{
			Mem426[fp - 0x000400F4:word32] = dwArg08;
			real64 rLoc1_442 = (real64) (SEQ((int64) (eax * 0x00000003) % 0x00000002, eax * 0x00000003) / 0x00000002);
			int64 edx_eax_421 = SEQ((int64) eax % 0x00000002, eax);
			fn0804881D(edx_eax_421 / 0x00000002, 0x00000001, edx - 0x00000001, dwLoc40100, dwArg04 - rLoc1_442, dwArg04, 0x00040080, dwArg10 + 0x00000001);
			fn0804881D(edx_eax_421 / 0x00000002, 0x00000004, edx - 0x00000001, dwLoc40110, dwArg00, rLoc1_442 + dwArg08, dwArg08, dwArg10 + 0x00000002);
			esi_221 = dwArg10 + 0x00000002;
			dwLoc40100 = dwArg10 + 0x00000002;
			goto l08048986;
		}
	}
	fn080486BA((byte) (edi_133 *s 0x00040080 + 0x0944C920), 0x00000000, 0x42200000, 0x00000000, 0x00000000, 0xBF800000, 0x00000000);
	fn080483E8();
	return;
}

byte fn08048C66(word32 eax, word32 ecx, word32 edx, word32 dwArg04, word32 dwArg08, ptr32 rLoc1Out)
{
fn08048C66_entry:
l08048C66:
	word32 edi_19 = eax + edx *s 0x00040080
	byte al_22 = Mem0[edi_19 + 0x0000007C:byte]
	branch al_22 != 0x00 l08048D15
l08048C87:
	real64 rLoc1_126
	real64 rLoc2_125
	real32 rLoc5C_121
	branch dwArg08 != 0x00000000 l08048CAE
l08048C8B:
	rLoc5C_121 = Mem0[edi_19 + 0x00000064:real32]
	rLoc1_126 = fn08048438(edi_19 + 0x00000030, dwArg04)
	rLoc2_125 = rLoc2
	branch (word16) FPUF << 8 l08048CF9
l08048CA9:
	goto l08048EAE
l08048CAE:
	fn0804847F(edi_19, fp - 0x00000028, ecx)
	real64 rLoc1_164 = fn08048438(fp - 0x00000028, dwArg04)
	branch (word16) FPUF << 8 l08048EAE
l08048CD7:
	real64 rLoc2_172 = Mem0[edi_19 + 0x00000060:real32]
	rLoc2_125 = rLoc2_172 * rLoc2_172
	rLoc5C_121 = fn08048438(fp - 0x00000028, fp - 0x00000028)
	rLoc1_126 = rLoc1_164
l08048CF9:
	real64 rLoc2_130 = rLoc2_125 * rLoc1_126 + rLoc5C_121
	branch FPUF l08048EAC
l08048D0C:
	sqrt(rLoc2_130)
	goto l08048EB6
l08048D15:
	branch al_22 != 0x01 l08048D57
l08048D19:
	real64 rLoc1_192
	branch dwArg08 != 0x00000000 l08048D33
l08048D20:
	rLoc1_192 = fn08048438(edi_19 + 0x00000018, dwArg04)
	Mem201[edi_19 + 0x0000006C:real32] = Mem0[edi_19 + 0x0000006C:real32] / rLoc1_192
	goto l08048E9F
l08048D33:
	Mem208[edi_19 + 0x00000068:real32] = Mem0[edi_19 + 0x00000068:real32] - fn08048438(edi_19 + 0x00000018, ecx)
	rLoc1_192 = fn08048438(edi_19 + 0x00000018, dwArg04)
	goto l08048E9F
l08048D57:
	branch al_22 != 0x02 l08048EB0
l08048D5F:
	fn0804847F(ecx, fp - 0x00000034, edi_19)
	fn0804844D(dwArg04, fp - 0x00000040, edi_19 + 0x00000054)
	real64 rLoc1_239 = sqrt(rLoc40 * rLoc40 + rLoc3C * rLoc3C + rLoc38 * rLoc38)
	branch FPUF l08048DFF
l08048DAD:
	branch rLoc1_239 >=u Mem0[0x08049A08:real32] l08048E01
l08048DB8:
	real64 rLoc1_298 = fn08048438(fp - 0x00000034, edi_19 + 0x00000054)
	real64 rLoc3_310 = rLoc1_298 * Mem0[edi_19 + 0x0000005C:real32]
	real64 rLoc2_300 = Mem0[edi_19 + 0x00000054:real32] * rLoc1_298
	real64 rLoc3_304 = Mem0[edi_19 + 0x00000058:real32] * rLoc1_298
	real64 rLoc2_322 = rLoc3_310 * rLoc3_310
	sqrt(rLoc2_300 * rLoc2_300 + rLoc3_304 * rLoc3_304 + rLoc2_322)
	FPUF = cond(rLoc2_322 - Mem0[edi_19 + 0x00000060:real32])
	branch rLoc2_322 <=u Mem0[edi_19 + 0x00000060:real32] l08048EB6
l08048DFA:
	goto l08048EAE
l08048DFF:
l08048E01:
	fn080484A2(fp - 0x00000040)
	real64 rLoc1_248 = fn08048438(fp - 0x00000034, fp - 0x00000040)
	real32 rLoc58_253 = DPB(rLoc1_248, SLICE(rLoc1_248, byte, 24) & 0x7F, 24, 8)
	FPUF = cond(rLoc58_253 - Mem0[edi_19 + 0x00000060:real32])
	branch rLoc58_253 >u Mem0[edi_19 + 0x00000060:real32] l08048EB0
l08048E30:
	fn0804844D(fp - 0x00000034, fp - 0x0000004C, edi_19 + 0x00000054)
	fn08048438(fp - 0x0000004C, fp - 0x00000040)
	fn0804844D(fp - 0x00000040, fp - 0x0000004C, edi_19 + 0x00000054)
	fn080484A2(fp - 0x0000004C)
	real64 rLoc1_283 = Mem0[edi_19 + 0x00000060:real32]
	sqrt(rLoc1_283 * rLoc1_283 - rLoc58_253 * rLoc58_253)
	fn08048438(dwArg04, fp - 0x0000004C)
l08048E9F:
	FPUF = cond(rLoc1_192 - Mem0[0x08049A08:real32])
	branch rLoc1_192 >u Mem0[0x08049A08:real32] l08048EB6
l08048EAA:
	goto l08048EAE
l08048EAC:
l08048EAE:
l08048EB0:
l08048EB6:
	return FPUF
fn08048C66_exit:
}

byte fn08048EBE(word32 eax, word32 ecx, word32 edx, word32 esi, word32 dwArg04, word32 dwArg08, word32 dwArg10, real64 rArg0, ptr32 rArg0Out)
{
fn08048EBE_entry:
l08048EBE:
	word32 esi_11 = esi | 0xFFFFFFFF
	word32 ebx_15 = 0x00000000
	real64 rLoc1_23 = Mem0[0x08049A0C:real32]
	goto l08048F2A
l08048EEF:
	real64 rLoc1_322
	FPUF = fn08048C66(edx, dwArg04, ebx_15, dwArg04, dwArg10, out rLoc1_322)
	rLoc2 = rLoc1_322
	branch FPUF l08048F27
l08048F1A:
	FPUF = cond(rLoc1_322 - rLoc1_322)
	branch rLoc1_322 >=u rLoc1_322 l08048F27
l08048F21:
	rLoc1_23 = rLoc1_322
	esi_11 = ebx_15
	goto l08048F29
l08048F27:
	rLoc2 = rLoc1_322
l08048F29:
	ebx_15 = ebx_15 + 0x00000001
l08048F2A:
	branch ebx_15 < ecx l08048EEF
l08048F30:
	branch esi_11 != 0xFFFFFFFF l08048F4A
l08048F35:
	Mem66[eax + 0x00000000:word32] = 0x00000000
	Mem67[eax + 0x00000004:word32] = 0x00000000
	Mem68[eax + 0x00000008:word32] = 0x00000000
	goto l08049380
l08048F4A:
	word32 edi_83 = edx + esi_11 *s 0x00040080
	real64 rLoc2_89 = rLoc2 * Mem0[dwArg08 + 0x00000000:real32] + Mem0[dwArg04 + 0x00000000:real32]
	Mem90[edi_83 + 0x0000000C:real32] = rLoc2_89
	real64 rLoc3_93 = Mem90[dwArg08 + 0x00000004:real32] * rLoc1_23 + Mem90[dwArg04 + 0x00000004:real32]
	Mem94[edi_83 + 0x00000010:real32] = rLoc3_93
	real64 rLoc3_99 = rLoc1_23 * Mem94[dwArg08 + 0x00000008:real32] + Mem94[dwArg04 + 0x00000008:real32]
	Mem100[edi_83 + 0x00000014:real32] = rLoc3_99
	branch Mem0[edi_83 + 0x0000007C:byte] != 0x00 l08048FA3
l08048F83:
	Mem297[edi_83 + 0x00000018:real32] = (rLoc2_89 - Mem100[edi_83 + 0x00000000:real32]) / Mem100[edi_83 + 0x00000060:real32]
	Mem303[edi_83 + 0x0000001C:real32] = (rLoc3_93 - Mem297[edi_83 + 0x00000004:real32]) / Mem297[edi_83 + 0x00000060:real32]
	Mem306[edi_83 + 0x00000020:real32] = (rLoc3_99 - Mem303[edi_83 + 0x00000008:real32]) / Mem303[edi_83 + 0x00000060:real32]
	goto l08048FA9
l08048FA3:
l08048FA9:
	branch Mem100[edi_83 + 0x0000007C:byte] != 0x02 l08048FC5
l08048FAF:
	fn0804847F(edi_83 + 0x0000000C, edi_83 + 0x00000018, edi_83)
	fn080484A2(edi_83 + 0x00000018)
l08048FC5:
	fn0804847F(0x0824A500, fp - 0x00000040, edi_83 + 0x0000000C)
	real64 rLoc1_113 = fn08048498(fp - 0x00000040)
	fn080484A2(fp - 0x00000040)
	fn08048438(edi_83 + 0x00000018, fp - 0x00000040)
	word32 ebx_118 = fp - 0x00000040 ^ fp - 0x00000040
	branch (word16) FPUF << 8 l0804903F
l08049009:
	goto l0804904A
l0804900B:
	real64 rLoc1_271
	fn08048C66(edx, edi_83 + 0x0000000C, ebx_118, fp - 0x00000040, 1F, out rLoc1_271)
	branch rLoc1_271 <=u Mem100[0x08049A10:real32] l0804903C
l08049031:
	branch rLoc1_271 <u rLoc1_113 l0804904A
l0804903A:
	goto l0804903E
l0804903C:
l0804903E:
	ebx_118 = ebx_118 + 0x00000001
l0804903F:
	branch ebx_118 < ecx l0804900B
l08049045:
	goto l0804930E
l0804904A:
l0804904C:
	branch Mem100[edi_83 + 0x0000007C:byte] != 0x00 l08049114
l0804905D:
	real64 rLoc1_155 = -fn08048438(edi_83 + 0x00000018, edi_83 + 0x0000003C)
	word16 wLoc4E_159 = __fstcw()
	atan(sqrt(1 - rLoc1_155 * 1), rLoc1_155)
	__fldcw(DPB(wLoc4E_159, SLICE(wLoc4E_159, byte, 8) | 0x0C, 8, 8))
	__fldcw(wLoc4E_159)
l08049114:
	fn08048438(edi_83 + 0x0000000C, edi_83 + 0x0000003C)
l0804930E:
	fn0804847F(dwArg08, fp - 0x0000004C, fp - 0x00000040)
	fn08048498(fp - 0x0000004C)
	fn08048438(edi_83 + 0x00000018, fp - 0x00000040)
	fn08048428()
	goto l0804904C
l08049380:
	return FPUF
fn08048EBE_exit:
}

void fn0804938F(word32 eax, word32 ecx, word32 edx)
{
	word32 ebp_123 = 0x00000000;
	word32 esi_124 = eax;
	while (ebp_123 < edx)
	{
		word32 edi_105 = esi_124 + 0x00000030;
		fn0804847F(esi_124, edi_105, 0x0824A50C);
		if (Mem0[esi_124 + 0x0000007C:byte] == 0x00)
		{
			real64 rLoc1_135 = Mem0[esi_124 + 0x00000060:real32];
			Mem143[esi_124 + 0x00000064:real32] = rLoc1_135 * rLoc1_135 - fn08048438(edi_105, edi_105);
		}
		if (Mem0[esi_124 + 0x0000007C:byte] == 0x01)
		{
			word32 ebx_126 = esi_124 + 0x00000018;
			Mem132[esi_124 + 0x0000006C:real32] = fn08048438(edi_105, ebx_126);
			Mem134[esi_124 + 0x00000068:real32] = fn08048438(ebx_126, esi_124);
		}
		ebp_123 = ebp_123 + 0x00000001;
		esi_124 = esi_124 + 0x00040080;
	}
	word32 ebx_41 = 0x00000000;
	word32 esi_44 = 0x0964CD20;
	do
	{
		Mem51[fp - 0x00000050:word32] = 0x00000000;
		Mem53[fp - 0x00000054:word32] = 0x00000002;
		Mem59[fp - 0x0000005C:word32] = 0x0824A50C;
		esi_44 = esi_44 + 0x00000018;
		fn08048EBE(fp - 0x00000028, edx, eax, esi_44, dwLoc5C, esi_44, dwLoc50, rArg0, out rArg0);
		word16 wLoc2E_66 = __fstcw();
		word16 ax_72 = DPB(wLoc2E_66, SLICE(wLoc2E_66, byte, 8) | 0x0C, 8, 8);
		__fldcw(ax_72);
		__fldcw(wLoc2E_66);
		__fldcw(ax_72);
		__fldcw(wLoc2E_66);
		__fldcw(ax_72);
		__fldcw(wLoc2E_66);
		word32 ecx_87 = ((int32) rLoc24 << 0x00000008) + (((int32) rLoc28 << 0x00000010) + (int32) rLoc20);
		(ecx + 0x00000004)[ebx_41 * 0x00000004] = ecx_87;
		ecx[ebx_41 * 0x00000004] = ecx_87;
		ebx_41 = ebx_41 + 0x00000002;
	} while (ebx_41 != 0x00030000);
	return;
}

void fn080494A7(word32 eax)
{
	fn080483D8();
	word32 eax_28 = Mem0[eax + 0x00000014:word32];
	fn080483A8();
	Mem35[0x0824A514:word32] = 0xC2F00000;
	word32 ebp_43 = 0x00000000;
	word32 dwLoc400C4_31 = 0x0964CD20;
	word32 dwLoc400C0_32 = 0xFFFFFF40;
	while (true)
	{
		word32 edi_47 = dwLoc400C4_31;
		word32 esi_48 = 0xFFFFFF00;
		word32 ebx_49 = ebp_43 *s 0x0000000C + 0x0964CD20;
		do
		{
			Mem60[ebx_49 + 0x00000000:real32] = (real64) esi_48;
			Mem63[ebx_49 + 0x00000004:real32] = (real64) dwLoc400C0_32;
			Mem64[ebx_49 + 0x00000008:word32] = 0x44000000;
			fn080484A2(edi_47);
			esi_48 = esi_48 + 0x00000001;
			edi_47 = edi_47 + 0x0000000C;
			ebx_49 = ebx_49 + 0x0000000C;
		} while (esi_48 != 0x00000100);
		ebp_43 = ebp_43 + 0x00000200;
		dwLoc400C4_31 = dwLoc400C4_31 + 0x00001800;
		dwLoc400C0_32 = dwLoc400C0_32 + 0x00000001;
		if (ebp_43 == 0x00030000)
		{
			word32 dwLoc400D4_103 = 0x00000000;
			word32 ebp_136 = 0xFFFFFFF6;
			word32 dwLoc400C8_138 = 0x08049A40;
			do
			{
				word32 edi_114 = 0xFFFFFFD3;
				word32 dwLoc400CC_102 = dwLoc400C8_138 + 0x00000000;
				do
				{
					if (Mem64[dwLoc400CC_102 + 0x00000000:byte] == 0x01)
					{
						fn08048775(0x01, (real64) edi_114, dwLoc400D4_103, 0xC1C80000, 0x40000000);
						fn080483E8();
						0x0824A59D[dwLoc400D4_103 * 0x00040080] = 0x00;
						dwLoc400D4_103 = dwLoc400D4_103 + 0x00000001;
					}
					edi_114 = edi_114 + 0x00000004;
					dwLoc400CC_102 = dwLoc400CC_102 + 0x00000001;
				} while (edi_114 != 0x0000002F);
				ebp_136 = ebp_136 + 0x00000004;
				dwLoc400C8_138 = dwLoc400C8_138 + 0x00000017;
			} while (ebp_136 != 0x0000000E);
			fn080486BA(0x00, 0x00000000, 0x00000000, 0xC1200000, 0x00000000, 0x00000000, 0xBF800000);
			fn080483E8();
			fn08048775(0x00, 0x00000000, 0x41F00000, 0xC20C0000, 0x41700000);
			fn080483E8();
			fn0804881D(0x0000000F, 0x00000000, 0x00000001, dwLoc40100, 0x00000000, 0xC2C80000, 0xC1F00000, 0x00000000);
			fn080486BA(0x00, 0x00000000, 0x41F00000, 0x00000000, 0x00000000, 0xBF800000, 0x00000000);
			fn080483E8();
			fn080486BA(0x00, 0x00000000, 0xC1A00000, 0x00000000, 0x00000000, 0x3F800000, 0x00000000);
			fn080483E8();
			fn080486BA(0x00, 0xC2480000, 0x00000000, 0x00000000, 0x3F800000, 0x00000000, 0x00000000);
			fn080483E8();
			fn080486BA(0x00, 0x42480000, 0x00000000, 0x00000000, 0xBF800000, 0x00000000, 0x00000000);
			fn080483E8();
			fn080486BA(0x00, 0x00000000, 0x00000000, 0x42200000, 0x00000000, 0x00000000, 0xBF800000);
			fn080483E8();
			fn08048775(0x04, 0x00000000, 0x41800000, 0xC1A00000, 0x41700000);
			fn080483E8();
			fn08048613(0x00, 0xC1F00000, 0x41F00000, 0xC1A00000, 0x41200000, 0x00000000, 0xBF800000, 0x00000000);
			fn080483E8();
			word32 eax_414 = fn08048613(0x00, 0x41F00000, 0x41F00000, 0xC1A00000, 0x41200000, 0x00000000, 0xBF800000, 0x00000000);
			fn080483E8();
			Mem425[0x0824A508:word32] = 0xC2F00000;
			fn080483B8();
			word32 ebx_402 = 0x00000000;
			word32 esi_420 = fp - 0x000400BC ^ fp - 0x000400BC;
			eax_442 = eax_414;
			word32 eax_442;
			fn080483B8();
			word32 eax_446 = eax_442 - eax_414;
			while (eax_446 <=u 0x000036AF && bLoc30 != 0x02)
			{
				real64 rLoc1_585 = (real64) ebx_402 * Mem425[0x08049A34:real32];
				real64 rLoc1_587 = cos(rLoc1_585);
				real64 rLoc2_588 = sin(rLoc1_585);
				real64 rLoc3_590 = Mem425[0x08049A30:real32] * rLoc2_588;
				Mem594[0x0824A500:real32] = rLoc2_588;
				Mem596[0x0824A504:real32] = rLoc1_587 * rLoc3_590;
				if (esi_420 <= 0x00000031)
				{
					word32 eax_620 = 0x00000000;
					real64 rLoc1_623 = Mem596[0x08049A2C:real32];
					do
					{
						Mem627[eax_620 + 0x0940C8A4:real32] = Mem596[eax_620 + 0x0940C8A4:real32] + rLoc1_623;
						eax_620 = eax_620 + 0x00040080;
					} while (eax_620 != 0x001C0380);
				}
				fn0804938F(0x0940C8A0, eax_28, 0x00000009);
				fn080483F8();
				fn080483C8();
				esi_420 = esi_420 + 0x00000001;
				ebx_402 = ebx_402 + 0x00000004;
				eax_442 = fp - 0x00000030;
				fn080483B8();
				eax_446 = eax_442 - eax_414;
			}
			fn080483B8();
			word32 ebx_451 = esi_420 * 0x00000002;
			eax_463 = eax_446;
			word32 eax_463;
			fn080483B8();
			word32 eax_467 = eax_463 - eax_446;
			while (eax_467 <=u 0x000036AF && bLoc30 != 0x02)
			{
				real64 rLoc1_548 = (real64) ebx_451 * Mem425[0x08049A34:real32];
				Mem554[0x0824A504:word32] = 0xC1200000;
				real64 rLoc1_556 = cos(rLoc1_548);
				real64 rLoc2_557 = sin(rLoc1_548);
				real64 rLoc3_559 = Mem554[0x08049A38:real32] * rLoc2_557;
				Mem563[0x0824A500:real32] = rLoc2_557;
				Mem565[0x0824A508:real32] = rLoc1_556 * rLoc3_559;
				fn0804938F(0x0804A100, eax_28, 0x00000008);
				fn080483F8();
				fn080483C8();
				esi_420 = esi_420 + 0x00000001;
				ebx_451 = ebx_451 + 0x00000002;
				eax_463 = fp - 0x00000030;
				fn080483B8();
				eax_467 = eax_463 - eax_446;
			}
			fn080483B8();
			Mem474[0x0824A508:word32] = 0xC2F00000;
			word32 ebx_472 = esi_420 * 0x00000004;
			eax_485 = eax_467;
			word32 eax_485;
			fn080483B8();
			while (eax_485 - eax_467 <=u 0x000036AF && bLoc30 != 0x02)
			{
				real64 rLoc1_513 = (real64) ebx_472 * Mem474[0x08049A34:real32];
				real64 rLoc1_519 = cos(rLoc1_513);
				real64 rLoc2_520 = sin(rLoc1_513);
				real64 rLoc3_522 = Mem474[0x08049A30:real32] * rLoc2_520;
				Mem526[0x0824A500:real32] = rLoc2_520;
				Mem528[0x0824A504:real32] = rLoc1_519 * rLoc3_522;
				fn0804938F(0x0824A520, eax_28, 0x00000047);
				fn080483F8();
				fn080483C8();
				ebx_472 = ebx_472 + 0x00000004;
				eax_485 = fp - 0x00000030;
				fn080483B8();
			}
			fn08048408();
			__syscall(0x80);
			return;
		}
	}
}

