// subject.c
// Generated on 5/4/2015 12:10:55 AM by decompiling from_pouet.net/with_source_360/ia32_pe/subject.exe
// using Decompiler version 0.4.2.0.

#include "subject.h"

void fn00401000()
{
	word32 edx_20 = Mem0[0x00402104:word32];
	byte bl_21 = 0x00;
	do
	{
		if (bl_21 >=u 0x80)
			Mem24[edx_20 + 0x00000000:byte] = bl_21 << 0x01;
		word32 edx_15 = edx_20 + 0x00000001;
		Mem16[edx_15 + 0x00000000:byte] = bl_21 << 0x01;
		Mem18[edx_15 + 0x00000001:byte] = bl_21 << 0x01;
		edx_20 = edx_15 + 0x00000003;
		bl_21 = bl_21 + 0x01;
	} while (bl_21 != 0x00);
	return;
}

word32 fn00401020(real64 rArg0, ptr32 ebpOut, ptr32 esiOut, ptr32 ediOut)
{
	Mem37[0x0040213C:word16] = Mem0[0x0040213C:word16] - 0x0001;
	word32 esp_199 = fp - 0x00000020;
	word32 eax_128 = 0x00000000;
	word16 bx_159 = 0x0000;
	word32 ebx_160 = 0x00000000;
	byte bl_161 = 0x00;
	byte bh_162 = 0x00;
	do
	{
		byte al_102 = bl_161;
		word32 eax_103 = DPB(eax_128, bl_161, 0, 8);
		word16 dx_80 = 0xF400;
		do
		{
			word16 ax_92 = (int16) (al_102 - 0x80);
			Mem94[0x0040213E:word16] = ax_92;
			byte al_93 = (byte) ax_92;
			dx_80 = dx_80 - al_93 *s al_93;
			byte dh_99 = SLICE(dx_80, byte, 8);
			real64 rLoc1_101 = (real64) Mem94[0x0040213E:int16];
			al_102 = bh_162;
			eax_103 = DPB(eax_103, bh_162, 0, 8);
		} while (P);
		rArg0 = atan(rArg0, rLoc1_101) * (real64) Mem94[0x0040213A:word16];
		Mem112[0x0040213E:int16] = (int16) rArg0;
		word16 ax_114 = Mem112[0x0040213E:word16] + Mem112[0x0040213B:word16];
		word16 ax_121 = DPB(ax_114, dh_99, 0, 8);
		byte ah_115 = SLICE(ax_114, byte, 8);
		byte cl_117 = 0x00;
		cx = DPB(cx, 0x00, 0, 8);
		eax_128 = DPB(eax_103, dh_99, 0, 8);
		byte dh_131 = (byte) (ax_121 & 0x0707) + SLICE(ax_121 & 0x0707, byte, 8) + dh_99;
		if (dh_99 >=u 0xEF)
		{
			cl_117 = 0x50;
			cx = DPB(cx, 0x50, 0, 8);
		}
		if (dh_99 <=u 0xEA)
		{
			cx = DPB(cx, ah_115 & 0x1F, 8, 8);
			if ((ah_115 & 0x1F) <=u 0x03)
			{
				if (dh_99 >=u 0xE9)
				{
					dh_131 = __ror(dh_99, 0x03) + 0x9B;
					cx = cx - 0x0001;
					cl_117 = (byte) (cx - 0x0001);
				}
				dh_131 = dh_131 - 0x14;
			}
			if (dh_99 <=u 0xB4)
			{
				cx = cx - 0x0001;
				cl_117 = (byte) cx;
			}
		}
		Mem153[ebx_160 + Mem112[0x0040211C:word32]:byte] = cl_117;
		word32 ebp_156 = Mem153[0x00402120:word32];
		Mem158[ebx_160 + ebp_156:byte] = dh_131 + 0x80;
		bx_159 = bx_159 + 0x0001;
		ebx_160 = DPB(ebx_160, bx_159, 0, 16);
		bl_161 = (byte) bx_159;
		bh_162 = SLICE(bx_159, byte, 8);
	} while (bx_159 != 0x0000);
	word32 edi_165 = 0x0003E800;
	word16 si_167 = 0xFF9C;
	do
	{
		word16 bp_200 = 0xFF60;
		ebp_156 = DPB(ebp_156, 0xFF60, 0, 16);
		do
		{
			word32 esp_218 = esp_199 - 0x00000004;
			Mem219[esp_218 + 0x00000000:word32] = ebp_156;
			Mem221[esp_218 - 0x00000004:word32] = edi_165;
			int32 dx_ax_230 = (int32) (int16) (byte) (Mem221[0x0040213C:word16] << 0x0001);
			byte al_234 = ((byte) dx_ax_230 & 0x7F) - 0x40;
			word16 ax_235 = al_234 *s al_234;
			word16 ax_238 = DPB(ax_235, SLICE(ax_235, byte, 8) - 0x10, 8, 8);
			word16 dx_239 = SLICE(dx_ax_230, word16, 16) ^ ax_238;
			word32 esp_220 = esp_218 - 0x00000004;
			word16 cx_222 = 0x7F40;
			word16 dx_246 = DPB(dx_239, SLICE(dx_239, byte, 8) + 0x24, 8, 8);
			word32 eax_249 = DPB(eax_128, SLICE(ax_238 * 0x0002, byte, 8) - 0x01, 8, 8);
			do
			{
				word32 esp_282 = esp_220 - 0x00000004;
				Mem283[esp_282 + 0x00000000:word32] = ebp_156;
				cx_222 = cx_222 + bp_200;
				ebx_160 = DPB(ebx_160, SLICE(cx_222, byte, 8), 0, 8);
				dx_246 = dx_246 + si_167;
				byte al_287 = Mem283[ebx_160 + Mem283[0x00402120:word32]:byte];
				ebp_156 = Mem283[esp_282 + 0x00000000:word32];
				byte dh_274 = SLICE(dx_246, byte, 8);
				byte ah_285 = Mem283[ebx_160 + Mem283[0x0040211C:word32]:byte];
				eax_249 = DPB(eax_249, al_287, 0, 8);
				bp_200 = (word16) ebp_156;
				esp_220 = esp_282 + 0x00000004;
				if (ah_285 < 0x00)
					;
				if (ah_285 != 0x00)
					;
l00401138:
			} while (dh_274 <=u 0x46);
			word32 eax_314 = Mem283[0x00402104:word32][(eax_249 & 0x000000FF) * 0x00000004];
			Mem315[Mem283[esp_282 + 0x00000004:word32] + Mem283[0x00402100:word32]:word32] = eax_314;
		} while (bp_335 != 0xFF61);
		word16 si_343 = si_167 + 0x0001;
	} while (si_343 != 0xFF9D);
	word32 ebx_358 = Mem333[esp_282 + 0x00000024:word32];
	Mem367[esp_282 + 0x00000030:word32] = 0x004020F0;
	Mem369[esp_282 + 0x0000002C:word32] = Mem367[0x004020CC:word32];
	GetClientRect(Mem369[esp_282 + 0x0000002C:HWND], Mem369[esp_282 + 48:LPRECT]);
	Mem373[esp_282 + 0x00000030:word32] = 0x00CC0020;
	Mem375[esp_282 + 0x0000002C:word32] = 0x00000000;
	Mem377[esp_282 + 0x00000028:word32] = 0x0040206C;
	Mem379[esp_282 + 0x00000024:word32] = Mem377[0x00402100:word32];
	Mem381[esp_282 + 0x00000020:word32] = 0x000000C8;
	Mem383[esp_282 + 0x0000001C:word32] = 0x00000140;
	Mem385[esp_282 + 0x00000018:word32] = 0x00000000;
	Mem387[esp_282 + 0x00000014:word32] = 0x00000000;
	Mem389[esp_282 + 0x00000010:word32] = Mem387[0x004020FC:word32];
	Mem391[esp_282 + 0x0000000C:word32] = Mem389[0x004020F8:word32];
	Mem393[esp_282 + 0x00000008:word32] = 0x00000000;
	Mem395[esp_282 + 0x00000004:word32] = 0x00000000;
	Mem397[esp_282 + 0x00000000:word32] = Mem395[0x004020D0:word32];
	StretchDIBits(Mem397[esp_282 + 0x00000000:HDC], Mem397[esp_282 + 4:int32], Mem397[esp_282 + 8:int32], Mem397[esp_282 + 12:int32], Mem397[esp_282 + 16:int32], Mem397[esp_282 + 20:int32], Mem397[esp_282 + 24:int32], Mem397[esp_282 + 28:int32], Mem397[esp_282 + 32:int32], Mem397[esp_282 + 36:(ptr void)], Mem397[esp_282 + 40:(ptr BITMAPINFO)], Mem397[esp_282 + 44:UINT], Mem397[esp_282 + 48:DWORD]);
}

void fn004011C5(word32 ebx, word32 ebp, word32 esi, word32 edi)
{
	word32 esp_138;
	word32 eax_6 = GlobalAlloc(0x00000000, 0x000F4240);
	if (eax_6 != 0x00000000)
	{
		Mem143[0x0040210C:word32] = eax_6;
		Mem144[0x00402104:word32] = eax_6;
		Mem146[0x00402100:word32] = eax_6 + 0x000007D0;
		Mem148[0x0040211C:word32] = eax_6 + 0x00062250;
		Mem150[0x00402120:word32] = eax_6 + 0x00092F90;
		Mem152[fp - 0x00000004:word32] = 0x00000000;
		Mem155[0x004020B4:word32] = GetModuleHandleW(0x000F4240);
		Mem157[fp - 0x00000004:word32] = 0x00007F00;
		Mem159[fp - 0x00000008:word32] = 0x00000000;
		Mem162[0x004020B8:word32] = LoadIconW(0x00000000, 0x000F4240);
		Mem164[fp - 0x00000004:word32] = 0x00007F00;
		Mem166[fp - 0x00000008:word32] = 0x00000000;
		Mem169[0x004020BC:word32] = LoadCursorW(0x00000000, 0x000F4240);
		Mem171[fp - 0x00000004:word32] = 0x004020A4;
		if (RegisterClassW(0x000F4240) != 0x00000000)
		{
			Mem178[fp - 0x00000004:word32] = 0x00000000;
			Mem180[fp - 0x00000008:word32] = Mem178[0x004020B4:word32];
			word32 eax_201 = CreateWindowExW(0x00000000, 0x00402000, 0x00402012, 0x10CF0000, 0x00008000, 0x00008000, 0x0000021C, 0x00000190, 0x00000000, 0x00000000, 0x00000000, 0x004020A4);
			if (eax_201 != 0x00000000)
			{
				Mem206[0x004020CC:word32] = eax_201;
				Mem208[fp - 0x00000004:word32] = eax_201;
				Mem211[0x004020D0:word32] = GetDC(0x00000000);
				fn00401000();
				ebx = fn00401020(rArg0, out ebp, out esi, out edi);
				Mem218[fp - 0x00000004:word32] = 0x00000004;
				Mem220[fp - 0x00000008:word32] = Mem218[0x004020D0:word32];
				SetStretchBltMode(Mem220[fp - 0x00000008:HDC], Mem220[fp - 4:int32]);
				word32 esp_222 = fp;
				word32 esp_229 = esp_222 - 0x00000004;
				Mem230[esp_229 + 0x00000000:word32] = 0x00000001;
				Mem232[esp_229 - 0x00000004:word32] = 0x00000000;
				Mem234[esp_229 - 0x00000008:word32] = 0x00000000;
				Mem236[esp_229 - 0x0000000C:word32] = 0x00000000;
				Mem238[esp_229 - 0x00000010:word32] = 0x004020D4;
				PeekMessageW(Mem238[esp_229 - 0x00000010:LPMSG], Mem238[esp_229 - 12:HWND], Mem238[esp_229 - 8:UINT], Mem238[esp_229 - 4:UINT], Mem238[esp_229 + 0x00000000:UINT]);
				esp_138 = esp_229 + 0x00000004;
				while (Mem238[0x004020D8:word32] != 0x00000012)
				{
					Mem244[esp_229 + 0x00000000:word32] = 0x004020D4;
					TranslateMessage(Mem244[esp_229 + 0x00000000:(ptr MSG)]);
					Mem248[esp_229 + 0x00000000:word32] = 0x004020D4;
					DispatchMessageW(Mem248[esp_229 + 0x00000000:(ptr MSG)]);
					ebx = fn00401020(rArg1, out ebp, out esi, out edi);
					Mem256[0x00402108:word32] = Mem248[0x00402108:word32] + 0x00000001;
					esp_222 = esp_229 + 0x00000004;
					esp_229 = esp_222 - 0x00000004;
					Mem230[esp_229 + 0x00000000:word32] = 0x00000001;
					Mem232[esp_229 - 0x00000004:word32] = 0x00000000;
					Mem234[esp_229 - 0x00000008:word32] = 0x00000000;
					Mem236[esp_229 - 0x0000000C:word32] = 0x00000000;
					Mem238[esp_229 - 0x00000010:word32] = 0x004020D4;
					PeekMessageW(Mem238[esp_229 - 0x00000010:LPMSG], Mem238[esp_229 - 12:HWND], Mem238[esp_229 - 8:UINT], Mem238[esp_229 - 4:UINT], Mem238[esp_229 + 0x00000000:UINT]);
					esp_138 = esp_229 + 0x00000004;
				}
			}
			else
			{
l004012E9:
				Mem134[fp - 0x0000000C:word32] = 0x0040204C;
				Mem136[fp - 0x00000010:word32] = 0x00000000;
				MessageBoxW(0x00000000, 0x00000000, 0x00000000, 0x00000010);
				esp_138 = fp;
			}
		}
		else
			goto l004012E9;
	}
	else
		goto l004012E9;
	word32 esp_40 = esp_138 - 0x00000004;
	Mem42[esp_40 + 0x00000000:word32] = Mem0[0x004020D0:word32];
	Mem44[esp_40 - 0x00000004:word32] = Mem42[0x004020CC:word32];
	ReleaseDC(Mem44[esp_40 - 0x00000004:HWND], Mem44[esp_40 + 0x00000000:HDC]);
	Mem48[esp_40 + 0x00000000:word32] = Mem44[0x0040210C:word32];
	GlobalFree(Mem48[esp_40 + 0x00000000:HGLOBAL]);
	Mem52[esp_40 + 0x00000000:word32] = Mem48[0x004020DC:word32];
	ExitProcess(Mem52[esp_40 + 0x00000000:UINT]);
	Mem55[esp_40 + 0x00000000:word32] = ebp;
	Mem58[esp_40 - 0x00000004:word32] = ebx;
	Mem60[esp_40 - 0x00000008:word32] = esi;
	Mem62[esp_40 - 0x0000000C:word32] = edi;
	word32 ebp_103 = esp_40;
	if (Mem62[esp_40 + 0x0000000C:word32] != 0x00000002)
	{
		if (Mem62[esp_40 + 0x0000000C:word32] == 0x00000005 && Mem62[0x00402108:word32] >=u 0x0000000A)
		{
			word32 esi_104;
			word32 edi_105;
			fn00401020(rArg1, out ebp_103, out esi_104, out edi_105);
		}
		Mem90[esp_40 - 0x00000010:word32] = Mem62[ebp_103 + 0x00000014:word32];
		Mem92[esp_40 - 0x00000014:word32] = Mem90[ebp_103 + 0x00000010:word32];
		Mem94[esp_40 - 0x00000018:word32] = Mem92[ebp_103 + 0x0000000C:word32];
		Mem96[esp_40 - 0x0000001C:word32] = Mem94[ebp_103 + 0x00000008:word32];
		DefWindowProcW(Mem96[esp_40 - 0x0000001C:HWND], Mem96[esp_40 - 24:UINT], Mem96[esp_40 - 20:WPARAM], Mem96[esp_40 - 16:LPARAM]);
	}
	else
	{
		Mem111[esp_40 - 0x00000010:word32] = 0x00000000;
		PostQuitMessage(Mem111[esp_40 - 0x00000010:int32]);
	}
	return;
}

