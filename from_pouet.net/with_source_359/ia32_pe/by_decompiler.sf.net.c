// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_359/ia32_pe/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn00401000()
{
	Eq_2 edx_16 = globals->t4020DA;
	uint8 bl_17 = 0x00;
	do
	{
		Mem10[edx_16 + 0x00000000:byte] = bl_17 >>u 0x01;
		word32 edx_11 = edx_16 + 0x00000001;
		edx_11->b0000 = bl_17;
		edx_11->b0001 = bl_17;
		edx_16 = edx_11 + 0x00000003;
		bl_17 = bl_17 + 0x01;
	} while (bl_17 != 0x00);
	return;
}

void fn0040101B()
{
fn0040101B_entry:
l0040101B:
fn0040101B_exit:
}

void fn00401172(Eq_66 ebx, Eq_2 ebp, word32 esi, word32 edi)
{
	Eq_27 * esp_128;
	Eq_2 eax_6 = GlobalAlloc(0x00000000, 0x0007A120);
	if (eax_6 != 0x00000000)
	{
		globals->t4020E2 = eax_6;
		globals->t4020DA = eax_6;
		Mem132[0x004020D6:word32] = eax_6 + 0x000007D0;
		fp->tFFFFFFFC.u0 = 0x00000000;
		globals->t40208A = GetModuleHandleW(0x0007A120);
		fp->tFFFFFFFC.u0 = 0x00007F00;
		fp->tFFFFFFFC.u0 = 0x00000000;
		globals->dw40208E = LoadIconW(0x00000000, (WNDCLASSW) 0x0007A120);
		fp->tFFFFFFFC.u0 = 0x00007F00;
		fp->tFFFFFFFC.u0 = 0x00000000;
		globals->dw402092 = LoadCursorW(0x00000000, (WNDCLASSW) 0x0007A120);
		fp->tFFFFFFFC.u0 = 0x0040207A;
		if (RegisterClassW((WNDCLASSW) 0x0007A120) != 0x00000000)
		{
			fp->tFFFFFFFC.u0 = 0x00000000;
			Mem162[fp - 0x00000008:word32] = Mem160[0x0040208A:word32];
			Eq_66 eax_183 = CreateWindowExW(0x00000000, 0x00402000, 0x00402012, 0x10CF0000, 0x00008000, 0x00008000, 0x00000280, 0x000001F4, 0x00000000, 0x00000000, 0x00000000, 0x0040207A);
			if (eax_183 != 0x00000000)
			{
				globals->t4020A2 = eax_183;
				fp->tFFFFFFFC = eax_183;
				globals->t4020A6 = GetDC(0x00000000);
				fn00401000();
				fn0040101B();
				Eq_27 * esp_192 = fp;
				Eq_242 * esp_196 = esp_192 - 0x00000004;
				Mem197[esp_196 + 0x00000000:word32] = 0x00000001;
				Mem199[esp_196 - 0x00000004:word32] = 0x00000000;
				Mem201[esp_196 - 0x00000008:word32] = 0x00000000;
				Mem203[esp_196 - 0x0000000C:word32] = 0x00000000;
				Mem205[esp_196 - 0x00000010:word32] = 0x004020AA;
				PeekMessageW(esp_196->t0004, esp_196->t0004, esp_196->t0004, esp_196->t0004, esp_196->t0000);
				esp_128 = esp_196 + 0x00000004;
				while (globals->dw4020AE != 0x00000012)
				{
					Mem211[esp_196 + 0x00000000:word32] = 0x004020AA;
					TranslateMessage(esp_196->t0000);
					Mem215[esp_196 + 0x00000000:word32] = 0x004020AA;
					DispatchMessageW(esp_196->t0000);
					fn0040101B();
					globals->dw4020DE = globals->dw4020DE + 0x00000001;
					esp_192 = esp_196 + 0x00000004;
					esp_196 = esp_192 - 0x00000004;
					Mem197[esp_196 + 0x00000000:word32] = 0x00000001;
					Mem199[esp_196 - 0x00000004:word32] = 0x00000000;
					Mem201[esp_196 - 0x00000008:word32] = 0x00000000;
					Mem203[esp_196 - 0x0000000C:word32] = 0x00000000;
					Mem205[esp_196 - 0x00000010:word32] = 0x004020AA;
					PeekMessageW(esp_196->t0004, esp_196->t0004, esp_196->t0004, esp_196->t0004, esp_196->t0000);
					esp_128 = esp_196 + 0x00000004;
				}
			}
			else
			{
l00401274:
				fp->tFFFFFFFC.u0 = 0x00402022;
				fp->tFFFFFFFC.u0 = 0x00000000;
				MessageBoxW(0x00000000, 0x00000000, 0x00000000, 0x00000010);
				esp_128 = fp;
			}
		}
		else
			goto l00401274;
	}
	else
		goto l00401274;
	Eq_173 * esp_36 = esp_128 - 0x00000004;
	esp_36->t0000 = globals->t4020A6;
	Mem40[esp_36 - 0x00000004:word32] = Mem38[0x004020A2:word32];
	ReleaseDC(esp_36->t0000, esp_36->t0000);
	esp_36->t0000 = globals->t4020E2;
	GlobalFree(esp_36->t0000);
	esp_36->t0000 = globals->t4020B2;
	ExitProcess(esp_36->t0000);
	esp_36->t0000 = ebp;
	Mem56[esp_36 - 0x00000004:word32] = ebx;
	esp_36->t0008.u0 = esi;
	esp_36->t000C.u0 = edi;
	if (esp_36->t000C != 0x00000002)
	{
		if (esp_36->t000C == 0x00000005 && globals->dw4020DE >=u 0x0000000A)
			fn0040101B();
		Mem85[esp_36 - 0x00000010:word32] = Mem62[esp_36 + 0x00000014:word32];
		Mem87[esp_36 - 0x00000014:word32] = Mem85[esp_36 + 0x00000010:word32];
		Mem89[esp_36 - 0x00000018:word32] = Mem87[esp_36 + 0x0000000C:word32];
		Mem91[esp_36 - 0x0000001C:word32] = Mem89[esp_36 + 0x00000008:word32];
		DefWindowProcW(esp_36->t0014, esp_36->t0014, esp_36->t0014, esp_36->t0010);
	}
	else
	{
		Mem101[esp_36 - 0x00000010:word32] = 0x00000000;
		PostQuitMessage(esp_36->t0010);
	}
	return;
}

