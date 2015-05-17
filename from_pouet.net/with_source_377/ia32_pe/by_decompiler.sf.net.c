// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_377/ia32_pe/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn00401000()
{
	word32 edx_13 = Mem0[0x00402104:word32];
	byte bl_14 = 0x00;
	do
	{
		Mem7[edx_13 + 0x00000000:byte] = bl_14;
		word32 edx_8 = edx_13 + 0x00000001;
		Mem9[edx_8 + 0x00000000:byte] = bl_14;
		Mem11[edx_8 + 0x00000001:byte] = bl_14;
		edx_13 = edx_8 + 0x00000003;
		bl_14 = bl_14 + 0x01;
	} while (bl_14 != 0x00);
	return;
}

word32 fn00401017(ptr32 ediOut)
{
	word32 ecx_17 = 0x00000F00;
	word32 esi_10 = 0x00402136;
	word32 edi_14 = Mem0[0x00402118:word32];
	do
	{
		Mem12[edi_14 + 0x00000000:byte] = Mem0[esi_10 + 0x00000000:byte];
		esi_10 = esi_10 + 0x00000001;
		edi_14 = edi_14 + 0x00000001;
		ecx_17 = ecx_17 - 0x00000001;
	} while (ecx_17 != 0x00000000);
	word32 ebx_20 = 0x00000000;
	byte bl_21 = 0x00;
	word16 bx_22 = 0x0000;
	byte bh_23 = 0x00;
	word32 edi_27;
	*ediOut = 0x00000000;
	do
	{
		byte dl_103 = 0xFB;
		if (bl_21 <=u 0xFB && bl_21 >=u 0x04)
		{
			byte bh_81 = bh_23 >>u 0x02;
			*ediOut = DPB(edi_27, ((word16) bh_81 << 0x0006) + DPB(bx_22, bh_81, 8, 8), 0, 16);
			ebx_20 = DPB(ebx_20, bx_22, 0, 16);
			if (true)
			{
				word16 dx_96 = bx_22 & 0x0F0F;
				dl_103 = (byte) (DPB(dx_96, (byte) dx_96 + SLICE(dx_96, byte, 8), 0, 8) << 0x02);
			}
		}
		Mem68[Mem12[0x0040211C:word32] + ebx_20:byte] = dl_103;
		bx_22 = bx_22 - 0x0001;
		bl_21 = (byte) bx_22;
		ebx_20 = DPB(ebx_20, bx_22, 0, 16);
		bh_23 = SLICE(bx_22, byte, 8);
	} while (bx_22 != 0x0000);
	return ebx_20;
}

void fn00401088(real64 rArg0, real64 rArg1)
{
	word32 eax_108 = 0x00000000;
	word16 cx_30 = 0x0000;
	word16 bx_38 = 0x0400;
	word32 ebx_39 = 0x00000400;
	byte bl_40 = 0x00;
	do
	{
		cx_30 = cx_30 + 0x0001;
		Mem53[ebx_39 + 0x00402136:word16] = Mem0[ebx_39 + 0x00402136:word16] + cx_30;
		real64 rLoc1_55 = (real64) Mem53[ebx_39 + 0x00402136:int16] / (real64) Mem53[0x00402130:word16];
		real64 rLoc1_57 = cos(rLoc1_55);
		Mem59[ebx_39 + 0x00402155:real32] = sin(rLoc1_55);
		Mem60[ebx_39 + 0x00402159:real32] = rLoc1_57;
		bl_40 = bl_40 + 0x08;
		byte ch_242 = SLICE(cx_30, byte, 8);
		ebx_39 = DPB(ebx_39, bl_40, 0, 8);
		bx_38 = DPB(bx_38, bl_40, 0, 8);
	} while (P);
	word32 ebx_105 = DPB(ebx_39, 0x03, 8, 8);
	word16 bx_111 = DPB(bx_38, 0x03, 8, 8);
	word32 edx_106 = 0x00000000;
	byte dl_119 = 0x00;
	byte dh_120 = 0x00;
	word16 dx_118 = 0x0000;
	do
	{
		word16 bp_109 = 0x0080;
l004010C6:
		word16 di_134 = 0x041D;
		word32 edi_135 = 0x0000041D;
		byte al_136 = dl_119;
		word32 eax_137 = DPB(eax_108, dl_119, 0, 8);
		word32 ebx_140 = DPB(ebx_105, ch_242, 0, 8);
		word16 bx_141 = DPB(bx_111, ch_242, 0, 8);
		do
		{
			Mem152[ebx_140 + 0x00402136:word16] = (int16) (al_136 - 0x80);
			word16 bx_156 = bx_141 + 0x0001;
			al_136 = dh_120;
			eax_137 = DPB(eax_331, dh_120, 0, 8);
			bx_141 = bx_156 + 0x0001;
			ebx_140 = DPB(ebx_140, bx_156 + 0x0001, 0, 16);
			if (!P)
			{
				ebx_140 = DPB(ebx_140, 0x00, 0, 8);
				bx_141 = DPB(bx_156 + 0x0001, 0x00, 0, 8);
			}
			di_134 = di_134 + 0x0001;
			edi_135 = DPB(edi_135, di_134, 0, 16);
			word32 eax_331 = eax_137;
		} while (P);
		Mem168[ebx_140 + 0x00402136:word16] = bp_109;
		ebx_105 = DPB(ebx_140, 0x00, 0, 8);
		bx_111 = DPB(bx_141, 0x00, 0, 8);
		do
		{
			word16 bx_175 = bx_111 + 0x0001;
			real64 rLoc1_174 = (real64) Mem168[ebx_105 + 0x00402136:int16];
			bx_111 = bx_175 + 0x0001;
			ebx_105 = DPB(ebx_105, bx_175 + 0x0001, 0, 16);
		} while (P);
		do
		{
			real64 rLoc2_190 = rLoc1_332 * Mem168[edi_135 + 0x00402136:real32] + rArg0 * Mem168[edi_135 + 0x0040213A:real32];
			di_134 = di_134 + 0x0008;
			rArg1 = rArg0 * Mem168[edi_135 + 0x0040213A:real32] - rArg1 * Mem168[edi_135 + 0x00402136:real32];
			rLoc1_174 = rLoc2_190;
			rArg0 = rLoc1_332;
			edi_135 = DPB(edi_135, di_134, 0, 16);
			real64 rLoc1_332 = rLoc1_174;
		} while (P);
		rArg0 = rLoc1_332 / (rArg1 / ((rLoc2_190 + (real64) Mem168[0x00402132:word16]) / (real64) Mem168[0x00402134:word16]));
		Mem210[ebx_105 + 0x00402136:int32] = (int32) rArg0;
		word32 edi_211 = Mem210[ebx_105 + 0x00402136:word32] *s 0x00000140;
		Mem212[ebx_105 + 0x00402136:int32] = (int32) rArg1;
		byte al_216 = Mem212[edx_106 + Mem212[0x0040211C:word32]:byte];
		word32 edi_213 = edi_211 + Mem212[ebx_105 + 0x00402136:word32];
		word32 esi_217 = Mem212[0x00402118:word32];
		Mem222[esi_217 + 0x00007DA0 + edi_213:byte] = Mem212[esi_217 + 0x00007DA0 + edi_213:byte] + (al_216 >>u 0x05);
		eax_108 = DPB(eax_331, al_216 >>u 0x05, 0, 8);
		do
		{
			dx_118 = dx_118 + 0x0001;
			dl_119 = (byte) dx_118;
			dh_120 = SLICE(dx_118, byte, 8);
			edx_106 = DPB(edx_106, dx_118, 0, 16);
			if (dx_118 != 0x0000)
				goto l004010C6;
			bp_109 = -bp_109;
		} while (bp_109 < 0x0000);
		ch_242 = ch_242 + 0x02;
	} while (P);
	word32 ecx_246 = 0x0000FA00;
	word32 esi_250 = Mem222[0x00402118:word32] + 0x00000500;
	word32 edi_252 = Mem222[0x00402100:word32] + 0x00000500;
	do
	{
		word32 eax_260 = DPB(eax_108, Mem222[esi_250 + 0x00000000:byte], 0, 8);
		Mem261[esi_250 + 0x00000000:byte] = 0x00;
		eax_108 = ((eax_260 & 0x000000FF) << 0x00000002) + Mem261[0x00402104:word32];
		Mem268[edi_252 + 0x00000000:word32] = Mem261[eax_108 + 0x00000000:word32];
		esi_250 = esi_250 + 0x00000001;
		edi_252 = edi_252 + 0x00000004;
		ecx_246 = ecx_246 - 0x00000001;
	} while (ecx_246 != 0x00000000);
	GetClientRect(Mem268[0x004020CC:word32], 0x004020F0);
	StretchDIBits(Mem268[0x004020D0:word32], 0x00000000, 0x00000000, Mem268[0x004020F8:word32], Mem268[0x004020FC:word32], 0x00000000, 0x00000000, 0x00000140, 0x000000C8, Mem268[0x00402100:word32], 0x0040206C, 0x00000000, 0x00CC0020);
	return;
}

void fn004011F5(word32 ebx, word32 edi, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10)
{
	word32 eax_6 = GlobalAlloc(0x00000000, 0x000F4240);
	if (eax_6 != 0x00000000)
	{
		Mem133[0x0040210C:word32] = eax_6;
		Mem134[0x00402104:word32] = eax_6;
		Mem136[0x00402100:word32] = eax_6 + 0x000007D0;
		Mem138[0x0040211C:word32] = eax_6 + 0x00062250;
		Mem140[0x00402118:word32] = eax_6 + 0x00092F90;
		Mem142[fp - 0x00000004:word32] = 0x00000000;
		Mem145[0x004020B4:word32] = GetModuleHandleW(0x000F4240);
		Mem147[fp - 0x00000004:word32] = 0x00007F00;
		Mem149[fp - 0x00000008:word32] = 0x00000000;
		Mem152[0x004020B8:word32] = LoadIconW(0x00000000, 0x000F4240);
		Mem154[fp - 0x00000004:word32] = 0x00007F00;
		Mem156[fp - 0x00000008:word32] = 0x00000000;
		Mem159[0x004020BC:word32] = LoadCursorW(0x00000000, 0x000F4240);
		Mem161[fp - 0x00000004:word32] = 0x004020A4;
		if (RegisterClassW(0x000F4240) != 0x00000000)
		{
			Mem168[fp - 0x00000004:word32] = 0x00000000;
			Mem170[fp - 0x00000008:word32] = Mem168[0x004020B4:word32];
			word32 eax_191 = CreateWindowExW(0x00000000, 0x00402000, 0x00402012, 0x10CF0000, 0x00008000, 0x00008000, 0x0000021C, 0x00000190, 0x00000000, 0x00000000, 0x00000000, 0x004020A4);
			if (eax_191 != 0x00000000)
			{
				Mem196[0x004020CC:word32] = eax_191;
				Mem198[fp - 0x00000004:word32] = eax_191;
				Mem201[0x004020D0:word32] = GetDC(0x00000000);
				fn00401000();
				ebx = fn00401017(out edi);
				fn00401088(rArg0, rArg1);
				Mem207[fp - 0x00000004:word32] = 0x00000004;
				SetStretchBltMode(Mem207[0x004020D0:word32], 0x00000000);
				Mem218[fp - 0x0000000C:word32] = 0x00000000;
				Mem220[fp - 0x00000010:word32] = 0x00000000;
				PeekMessageW(0x004020D4, 0x00000000, 0x00000000, 0x00000000, 0x00000001);
				while (Mem220[0x004020D8:word32] != 0x00000012)
				{
					Mem228[fp - 0x00000004:word32] = 0x004020D4;
					TranslateMessage(0x00000001);
					Mem232[fp - 0x00000004:word32] = 0x004020D4;
					DispatchMessageW(0x00000001);
					fn00401088(rArg2, rArg3);
					Mem236[0x00402108:word32] = Mem232[0x00402108:word32] + 0x00000001;
					Mem218[fp - 0x0000000C:word32] = 0x00000000;
					Mem220[fp - 0x00000010:word32] = 0x00000000;
					PeekMessageW(0x004020D4, 0x00000000, 0x00000000, 0x00000000, 0x00000001);
				}
			}
			else
			{
l0040131E:
				Mem126[fp - 0x0000000C:word32] = 0x0040204C;
				Mem128[fp - 0x00000010:word32] = 0x00000000;
				MessageBoxW(0x00000000, 0x00000000, 0x00000000, 0x00000010);
			}
		}
		else
			goto l0040131E;
	}
	else
		goto l0040131E;
	word32 dwLoc04_37 = Mem0[0x004020D0:word32];
	Mem39[fp - 0x00000008:word32] = Mem0[0x004020CC:word32];
	ReleaseDC(0x00000000, dwLoc04_37);
	GlobalFree(Mem39[0x0040210C:word32]);
	ExitProcess(Mem39[0x004020DC:word32]);
	Mem53[fp - 0x00000008:word32] = ebx;
	Mem58[fp - 0x00000010:word32] = edi;
	if (dwArg08 != 0x00000002)
	{
		if (dwArg08 == 0x00000005 && Mem58[0x00402108:word32] >=u 0x0000000A)
			fn00401088(rArg2, rArg3);
		Mem86[fp - 0x00000018:word32] = dwArg0C;
		Mem88[fp - 0x0000001C:word32] = dwArg08;
		Mem91[fp - 0x00000020:word32] = dwArg04;
		DefWindowProcW(0x00008000, 0x00008000, 0x0000021C, dwArg10);
	}
	else
		PostQuitMessage(0x00000000);
	return;
}

