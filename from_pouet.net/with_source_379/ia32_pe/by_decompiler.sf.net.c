// subject.c
// Generated on 5/4/2015 12:11:20 AM by decompiling from_pouet.net/with_source_379/ia32_pe/subject.exe
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

void fn00401020()
{
	word32 edi_31 = Mem0[0x00402124:word32];
	byte ch_32 = 0x02;
	word16 cx_35 = DPB(cx, 0x02, 8, 8);
	do
	{
		Mem47[edi_31 + 0x00000000:byte] = Mem0[(word32) (((word16) ch_32 << 0x0006) + cx_35) + 0x00402146:byte];
		cx_35 = cx_35 + 0x0001;
		edi_31 = edi_31 + 0x00000001;
		ch_32 = SLICE(cx_35, byte, 8);
	} while (cx_35 != 0x0B00);
	return;
}

word32 fn00401052(real64 rArg0, ptr32 ebpOut, ptr32 esiOut, ptr32 ediOut)
{
	Mem37[0x00402140:word16] = Mem0[0x00402140:word16] + 0x0001;
	word32 esp_200 = fp - 0x00000020;
	word32 eax_127 = 0x00000000;
	word16 bx_162 = 0x0000;
	word32 ebx_163 = 0x00000000;
	byte bl_164 = 0x00;
	byte bh_165 = 0x00;
	do
	{
		byte al_100 = bl_164;
		word32 eax_101 = DPB(eax_127, bl_164, 0, 8);
		word16 dx_78 = 0xF200;
		do
		{
			word16 ax_90 = (int16) (al_100 - 0x80);
			Mem92[0x00402144:word16] = ax_90;
			byte al_91 = (byte) ax_90;
			dx_78 = dx_78 - al_91 *s al_91;
			byte dh_97 = SLICE(dx_78, byte, 8);
			real64 rLoc1_99 = (real64) Mem92[0x00402144:int16];
			al_100 = bh_165;
			eax_101 = DPB(eax_101, bh_165, 0, 8);
		} while (P);
		rArg0 = atan(rArg0, rLoc1_99) * (real64) Mem92[0x0040213E:word16];
		Mem110[0x00402144:int16] = (int16) rArg0;
		word16 ax_111 = Mem110[0x00402144:word16];
		Mem112[0x00402144:word16] = dx_78;
		word16 ax_113 = ax_111 + Mem112[0x0040213F:word16];
		word16 ax_120 = DPB(ax_113, dh_97, 0, 8);
		byte ah_114 = SLICE(ax_113, byte, 8);
		byte cl_116 = 0x00;
		cx = DPB(cx, 0x00, 0, 8);
		eax_127 = DPB(eax_101, dh_97, 0, 8);
		byte dh_130 = (byte) (ax_120 & 0x0707) + SLICE(ax_120 & 0x0707, byte, 8) + dh_97;
		if (dh_97 <=u 0xEC && dh_97 >=u 0xEB)
		{
			cl_116 = ah_114 >>u 0x01;
			cx = DPB(cx, ah_114 >>u 0x01, 0, 8);
			dh_130 = SLICE(Mem112[0x00402144:word16] << 0x0005, byte, 8) + 0x60;
		}
		if (dh_97 <=u 0xE6)
		{
			cx = DPB(cx, ah_114 & 0x1F, 8, 8);
			if ((ah_114 & 0x1F) <=u 0x03)
			{
				if (dh_97 >=u 0xE5)
				{
					dh_130 = __ror(dh_97, 0x03) + 0x1E;
					cx = cx - 0x0001;
					cl_116 = (byte) (cx - 0x0001);
				}
				dh_130 = dh_130 - 0x14;
			}
			if (dh_97 <=u 0xB2)
			{
				cx = cx - 0x0001;
				cl_116 = (byte) cx;
			}
		}
		Mem157[ebx_163 + Mem112[0x0040211C:word32]:byte] = cl_116;
		Mem161[ebx_163 + Mem157[0x00402120:word32]:byte] = dh_130 + 0x80;
		bx_162 = bx_162 + 0x0001;
		ebx_163 = DPB(ebx_163, bx_162, 0, 16);
		bl_164 = (byte) bx_162;
		bh_165 = SLICE(bx_162, byte, 8);
	} while (bx_162 != 0x0000);
	word32 edi_168 = 0x0003E800;
	word16 si_170 = 0x0064;
	do
	{
		Mem201[0x00402142:word16] = 0xFF60;
		do
		{
			word32 esp_217 = esp_200 - 0x00000004;
			Mem218[esp_217 + 0x00000000:word32] = edi_168;
			int32 dx_ax_227 = (int32) (int16) (byte) (Mem218[0x00402140:word16] << 0x0001);
			byte al_231 = ((byte) dx_ax_227 & 0x7F) - 0x40;
			word16 ax_232 = al_231 *s al_231;
			word16 ax_235 = DPB(ax_232, SLICE(ax_232, byte, 8) - 0x10, 8, 8);
			word16 dx_236 = SLICE(dx_ax_227, word16, 16) ^ ax_235;
			word16 cx_219 = 0x7F40;
			word32 eax_242 = DPB(eax_127, SLICE(ax_235 * 0x0002, byte, 8) - 0x01, 8, 8);
			word16 dx_246 = DPB(dx_236, SLICE(dx_236, byte, 8) + 0x20, 8, 8);
			do
			{
				cx_219 = cx_219 + Mem218[0x00402142:word16];
				ebx_163 = DPB(ebx_163, SLICE(cx_219, byte, 8), 0, 8);
				dx_246 = dx_246 + si_170;
				byte al_278 = Mem218[Mem218[0x00402120:word32] + ebx_163:byte];
				byte dh_267 = SLICE(dx_246, byte, 8);
				byte ah_276 = Mem218[Mem218[0x0040211C:word32] + ebx_163:byte];
				eax_242 = DPB(eax_242, al_278, 0, 8);
				if (ah_276 < 0x00)
					;
				if (ah_276 != 0x00)
					;
l0040119D:
			} while (dh_267 <=u 0x46);
l004011A2:
			word32 eax_303 = Mem218[0x00402104:word32][(eax_242 & 0x000000FF) * 0x00000004];
			Mem304[Mem218[esp_217 + 0x00000000:word32] + Mem218[0x00402100:word32]:word32] = eax_303;
			Mem307[0x00402142:word16] = Mem304[0x00402142:word16] + 0x0001;
		} while (Mem324[0x00402142:word16] != 0x00A0);
		word16 si_327 = si_170 - 0x0001;
	} while (si_327 != 0xFF9D);
	word32 ebx_341 = Mem324[esp_217 + 0x00000018:word32];
	Mem350[esp_217 + 0x00000024:word32] = 0x004020F0;
	Mem352[esp_217 + 0x00000020:word32] = Mem350[0x004020CC:word32];
	GetClientRect(Mem352[esp_217 + 0x00000020:HWND], Mem352[esp_217 + 36:LPRECT]);
	Mem356[esp_217 + 0x00000024:word32] = 0x00CC0020;
	Mem358[esp_217 + 0x00000020:word32] = 0x00000000;
	Mem360[esp_217 + 0x0000001C:word32] = 0x0040206C;
	Mem362[esp_217 + 0x00000018:word32] = Mem360[0x00402100:word32];
	Mem364[esp_217 + 0x00000014:word32] = 0x000000C8;
	Mem366[esp_217 + 0x00000010:word32] = 0x00000140;
	Mem368[esp_217 + 0x0000000C:word32] = 0x00000000;
	Mem370[esp_217 + 0x00000008:word32] = 0x00000000;
	Mem372[esp_217 + 0x00000004:word32] = Mem370[0x004020FC:word32];
	Mem374[esp_217 + 0x00000000:word32] = Mem372[0x004020F8:word32];
	Mem376[esp_217 - 0x00000004:word32] = 0x00000000;
	Mem378[esp_217 - 0x00000008:word32] = 0x00000000;
	Mem380[esp_217 - 0x0000000C:word32] = Mem378[0x004020D0:word32];
	StretchDIBits(Mem380[esp_217 - 0x0000000C:HDC], Mem380[esp_217 - 8:int32], Mem380[esp_217 - 4:int32], Mem380[esp_217 + 0x00000000:int32], Mem380[esp_217 + 4:int32], Mem380[esp_217 + 8:int32], Mem380[esp_217 + 12:int32], Mem380[esp_217 + 16:int32], Mem380[esp_217 + 20:int32], Mem380[esp_217 + 24:(ptr void)], Mem380[esp_217 + 28:(ptr BITMAPINFO)], Mem380[esp_217 + 32:UINT], Mem380[esp_217 + 36:DWORD]);
}

void fn00401230(word32 ebx, word32 ebp, word32 esi, word32 edi)
{
	word32 esp_147;
	word32 eax_6 = GlobalAlloc(0x00000000, 0x000F4240);
	if (eax_6 != 0x00000000)
	{
		Mem150[0x0040210C:word32] = eax_6;
		Mem151[0x00402104:word32] = eax_6;
		Mem153[0x00402100:word32] = eax_6 + 0x000007D0;
		Mem155[0x0040211C:word32] = eax_6 + 0x00062250;
		Mem157[0x00402120:word32] = eax_6 + 0x00092F90;
		Mem160[0x00402124:word32] = eax_6 + 0x000AB630;
		ebx = 0x0007A11F;
		do
		{
			word32 edi_164 = Mem160[0x0040210C:word32];
			Mem165[edi_164 + 0x00000000:word16] = 0x0000;
			edi = edi_164 + 0x00000002;
			ebx = ebx - 0x00000001;
		} while (ebx != 0x00000000);
		Mem172[fp - 0x00000004:word32] = 0x00000000;
		Mem175[0x004020B4:word32] = GetModuleHandleW(0x000F4240);
		Mem177[fp - 0x00000004:word32] = 0x00007F00;
		Mem179[fp - 0x00000008:word32] = 0x00000000;
		Mem182[0x004020B8:word32] = LoadIconW(0x00000000, 0x000F4240);
		Mem184[fp - 0x00000004:word32] = 0x00007F00;
		Mem186[fp - 0x00000008:word32] = 0x00000000;
		Mem189[0x004020BC:word32] = LoadCursorW(0x00000000, 0x000F4240);
		Mem191[fp - 0x00000004:word32] = 0x004020A4;
		if (RegisterClassW(0x000F4240) != 0x00000000)
		{
			Mem198[fp - 0x00000004:word32] = 0x00000000;
			Mem200[fp - 0x00000008:word32] = Mem198[0x004020B4:word32];
			word32 eax_221 = CreateWindowExW(0x00000000, 0x00402000, 0x00402012, 0x10CF0000, 0x00008000, 0x00008000, 0x0000021C, 0x00000190, 0x00000000, 0x00000000, 0x00000000, 0x004020A4);
			if (eax_221 != 0x00000000)
			{
				Mem227[0x004020CC:word32] = eax_221;
				Mem229[fp - 0x00000004:word32] = eax_221;
				Mem232[0x004020D0:word32] = GetDC(0x00000000);
				fn00401000();
				fn00401020();
				ebx = fn00401052(rArg0, out ebp, out esi, out edi);
				Mem239[fp - 0x00000004:word32] = 0x00000004;
				Mem241[fp - 0x00000008:word32] = Mem239[0x004020D0:word32];
				SetStretchBltMode(Mem241[fp - 0x00000008:HDC], Mem241[fp - 4:int32]);
				word32 esp_243 = fp;
				word32 esp_250 = esp_243 - 0x00000004;
				Mem251[esp_250 + 0x00000000:word32] = 0x00000001;
				Mem253[esp_250 - 0x00000004:word32] = 0x00000000;
				Mem255[esp_250 - 0x00000008:word32] = 0x00000000;
				Mem257[esp_250 - 0x0000000C:word32] = 0x00000000;
				Mem259[esp_250 - 0x00000010:word32] = 0x004020D4;
				PeekMessageW(Mem259[esp_250 - 0x00000010:LPMSG], Mem259[esp_250 - 12:HWND], Mem259[esp_250 - 8:UINT], Mem259[esp_250 - 4:UINT], Mem259[esp_250 + 0x00000000:UINT]);
				esp_147 = esp_250 + 0x00000004;
				while (Mem259[0x004020D8:word32] != 0x00000012)
				{
					Mem265[esp_250 + 0x00000000:word32] = 0x004020D4;
					TranslateMessage(Mem265[esp_250 + 0x00000000:(ptr MSG)]);
					Mem269[esp_250 + 0x00000000:word32] = 0x004020D4;
					DispatchMessageW(Mem269[esp_250 + 0x00000000:(ptr MSG)]);
					ebx = fn00401052(rArg1, out ebp, out esi, out edi);
					Mem277[0x00402108:word32] = Mem269[0x00402108:word32] + 0x00000001;
					esp_243 = esp_250 + 0x00000004;
					esp_250 = esp_243 - 0x00000004;
					Mem251[esp_250 + 0x00000000:word32] = 0x00000001;
					Mem253[esp_250 - 0x00000004:word32] = 0x00000000;
					Mem255[esp_250 - 0x00000008:word32] = 0x00000000;
					Mem257[esp_250 - 0x0000000C:word32] = 0x00000000;
					Mem259[esp_250 - 0x00000010:word32] = 0x004020D4;
					PeekMessageW(Mem259[esp_250 - 0x00000010:LPMSG], Mem259[esp_250 - 12:HWND], Mem259[esp_250 - 8:UINT], Mem259[esp_250 - 4:UINT], Mem259[esp_250 + 0x00000000:UINT]);
					esp_147 = esp_250 + 0x00000004;
				}
			}
			else
			{
l0040137B:
				Mem143[fp - 0x0000000C:word32] = 0x0040204C;
				Mem145[fp - 0x00000010:word32] = 0x00000000;
				MessageBoxW(0x00000000, 0x00000000, 0x00000000, 0x00000010);
				esp_147 = fp;
			}
		}
		else
			goto l0040137B;
	}
	else
		goto l0040137B;
	word32 esp_45 = esp_147 - 0x00000004;
	Mem47[esp_45 + 0x00000000:word32] = Mem0[0x004020D0:word32];
	Mem49[esp_45 - 0x00000004:word32] = Mem47[0x004020CC:word32];
	ReleaseDC(Mem49[esp_45 - 0x00000004:HWND], Mem49[esp_45 + 0x00000000:HDC]);
	Mem53[esp_45 + 0x00000000:word32] = Mem49[0x0040210C:word32];
	GlobalFree(Mem53[esp_45 + 0x00000000:HGLOBAL]);
	Mem57[esp_45 + 0x00000000:word32] = Mem53[0x004020DC:word32];
	ExitProcess(Mem57[esp_45 + 0x00000000:UINT]);
	Mem60[esp_45 + 0x00000000:word32] = ebp;
	Mem63[esp_45 - 0x00000004:word32] = ebx;
	Mem65[esp_45 - 0x00000008:word32] = esi;
	Mem67[esp_45 - 0x0000000C:word32] = edi;
	word32 ebp_108 = esp_45;
	if (Mem67[esp_45 + 0x0000000C:word32] != 0x00000002)
	{
		if (Mem67[esp_45 + 0x0000000C:word32] == 0x00000005 && Mem67[0x00402108:word32] >=u 0x0000000A)
		{
			word32 esi_109;
			word32 edi_110;
			fn00401052(rArg1, out ebp_108, out esi_109, out edi_110);
		}
		Mem95[esp_45 - 0x00000010:word32] = Mem67[ebp_108 + 0x00000014:word32];
		Mem97[esp_45 - 0x00000014:word32] = Mem95[ebp_108 + 0x00000010:word32];
		Mem99[esp_45 - 0x00000018:word32] = Mem97[ebp_108 + 0x0000000C:word32];
		Mem101[esp_45 - 0x0000001C:word32] = Mem99[ebp_108 + 0x00000008:word32];
		DefWindowProcW(Mem101[esp_45 - 0x0000001C:HWND], Mem101[esp_45 - 24:UINT], Mem101[esp_45 - 20:WPARAM], Mem101[esp_45 - 16:LPARAM]);
	}
	else
	{
		Mem116[esp_45 - 0x00000010:word32] = 0x00000000;
		PostQuitMessage(Mem116[esp_45 - 0x00000010:int32]);
	}
	return;
}

