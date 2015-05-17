// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_332/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(selector ds)
{
	bios_video_set_mode(0x13);
	selector es_5;
	byte al_17 = fn0C00_014E(ds, out es_5);
	do
	{
		fn0C00_01A7(al_17, ds);
		fn0C00_01C2(es_5, ds);
		do
			;
		while ((__inb(0x03DA) & 0x08) != 0x00);
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		byte Z_29 = fn0C00_02A7(es_5, ds);
		bios_kbd_check_keystroke(out al_17);
	} while (Z_29);
	msdos_terminate_program20();
}

word16 fn0C00_0140(selector ds)
{
	Mem10[ds:0x013E:word16] = 0x29B2;
	return 0x29B2;
}

byte fn0C00_014E(selector ds, ptr16 esOut)
{
	selector es_4;
	*esOut = 0xA000;
	word16 di_12 = 0x0000;
	word16 cx_10 = 0x0140;
	while (cx_10 != 0x0000)
	{
		Mem11[0xA000:di_12 + 0x0000:byte] = 0x00;
		di_12 = di_12 + 0x0001;
		cx_10 = cx_10 - 0x0001;
	}
	word16 cx_14 = 0xF938;
	while (cx_14 != 0x0000)
	{
		Mem18[0xA000:di_12 + 0x0000:byte] = 0x12;
		di_12 = di_12 + 0x0001;
		cx_14 = cx_14 - 0x0001;
	}
	return fn0C00_0167(0xA000, ds);
}

byte fn0C00_0167(selector es, selector ds)
{
	Mem6[ds:0x012E:word16] = (fn0C00_0140(ds) & 0x007F) + 0x0024;
	Mem7[ds:0x012C:word16] = 0x00A0;
	Mem8[ds:0x0138:word16] = 0x001E;
	word16 bx_11 = Mem8[ds:0x013A:word16];
	if (bx_11 >= 0x00A0)
	{
		Mem24[ds:0x013A:word16] = 0x00A0;
		bx_11 = 0x0000;
	}
	Mem15[es:bx_11 + 0x0000:byte] = 0x0F;
	word16 bx_17 = Mem15[ds:0x013C:word16];
	if (bx_17 <= 0x00A0)
	{
		Mem22[ds:0x013C:word16] = 0x00A0;
		bx_17 = 0x013F;
	}
	Mem21[es:bx_17 + 0x0000:byte] = 0x0F;
	return 0xA0;
}

void fn0C00_01A7(byte al, selector ds)
{
	Mem2[ds:0x012A:word16] = 0x0000;
	__syscall(0x16);
	if ((al & 0x04) != 0x00)
		Mem17[ds:0x012A:word16] = Mem2[ds:0x012A:word16] + 0x0001;
	if ((al & 0x08) != 0x00)
		Mem14[ds:0x012A:word16] = Mem2[ds:0x012A:word16] - 0x0001;
	return;
}

void fn0C00_01C2(selector es, selector ds)
{
	word16 bx_10 = Mem0[ds:0x0128:word16];
	if (Mem0[ds:0x012C:word16] >= 0x00E6)
	{
		word16 ax_98 = Mem0[ds:0x012E:word16];
		bx_10 = Mem0[ds:0x0128:word16];
		if (ax_98 >= bx_10 + 0x0005)
			if (ax_98 <= bx_10 + 0x0005)
				;
			else
			{
				bx_10 = bx_10 + 0x0001;
				if (bx_10 >= 0xFF44)
					bx_10 = 0x00BD;
			}
		else
		{
			bx_10 = bx_10 - 0x0001;
			if (bx_10 <= 0x0003)
				bx_10 = 0x0002;
		}
	}
	Mem13[ds:0x0128:word16] = bx_10;
	word16 bx_14 = Mem13[ds:0x012A:word16];
	if (bx_14 == 0x0000)
		fn0C00_0140(ds);
	word16 bx_18 = bx_14 + Mem13[ds:0x0126:word16];
	if (bx_18 < 0x0002)
		bx_18 = 0x0002;
	if (bx_18 > 0x00BD)
		bx_18 = 0x00BD;
	Mem25[ds:0x0126:word16] = bx_18;
	if (Mem25[ds:0x0138:word16] != 0x0000)
	{
		Mem45[ds:0x0138:word16] = Mem25[ds:0x0138:word16] - 0x0001;
l0C00_02A6:
		return;
	}
	else
	{
		word16 ax_50 = Mem25[ds:0x012E:word16] + Mem25[ds:0x0132:word16];
		Mem52[ds:0x012E:word16] = ax_50;
		if (ax_50 == 0x0002)
			Mem94[ds:0x0132:word16] = 0x0001;
		if (ax_50 == 0x00C6)
			Mem93[ds:0x0132:word16] = 0xFFFF;
		word16 cx_58 = Mem52[ds:0x012C:word16] + Mem52[ds:0x0130:word16];
		Mem59[ds:0x012C:word16] = cx_58;
		if (cx_58 == 0x0002 && (ax_50 >= bx_18 && ax_50 < bx_18 + 0x000A))
			Mem92[ds:0x0130:word16] = 0x0001;
		word16 bx_63 = Mem59[ds:0x0128:word16];
		if (cx_58 == 0x013D && (ax_50 >= bx_63 && ax_50 < bx_63 + 0x000A))
			Mem86[ds:0x0130:word16] = 0xFFFF;
		if (cx_58 == 0x0000)
		{
			Mem71[ds:0x013C:word16] = Mem59[ds:0x013C:word16] + 0xFFFE;
			fn0C00_0167(es, ds);
			return;
		}
		else if (cx_58 == 0x013F)
		{
			Mem78[ds:0x013A:word16] = Mem59[ds:0x013A:word16] + 0x0002;
			fn0C00_0167(es, ds);
		}
	}
}

bool fn0C00_02A7(selector es, selector ds)
{
	Mem10[es:(word16) (Mem0[ds:0x0136:word16] *u 0x0140) + Mem0[ds:0x0134:word16]:byte] = 0x12;
	word16 ax_12 = Mem10[ds:0x012E:word16];
	Mem13[ds:0x0136:word16] = ax_12;
	Mem19[es:(word16) (ax_12 *u 0x0140) + Mem13[ds:0x012C:word16]:byte] = 0x0E;
	Mem21[ds:0x0134:word16] = Mem19[ds:0x012C:word16];
	word16 ax_26 = (word16) ((Mem21[ds:0x0126:word16] - 0x0001) *u 0x0140);
	Mem30[es:ax_26 + 0x0001:byte] = 0x12;
	word16 bx_29 = ax_26 + 0x0001;
	word16 cx_31 = 0x000A;
	do
	{
		bx_29 = bx_29 + 0x0140;
		Mem36[es:bx_29 + 0x0000:byte] = 0x0A;
		cx_31 = cx_31 - 0x0001;
	} while (cx_31 != 0x0000);
	Mem39[es:bx_29 + 0x0140:byte] = 0x12;
	word16 ax_44 = (word16) ((Mem39[ds:0x0128:word16] - 0x0001) *u 0x0140);
	Mem48[es:ax_44 + 0x013E:byte] = 0x12;
	word16 bx_47 = ax_44 + 0x013E;
	word16 cx_49 = 0x000A;
	do
	{
		bx_47 = bx_47 + 0x0140;
		Mem54[es:bx_47 + 0x0000:byte] = 0x0C;
		cx_49 = cx_49 - 0x0001;
	} while (cx_49 != 0x0000);
	Mem60[es:bx_47 + 0x0140:byte] = 0x12;
	return cond(bx_47 + 0x0140);
}

