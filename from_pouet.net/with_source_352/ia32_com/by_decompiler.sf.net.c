// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_352/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(selector ds)
{
	bios_video_set_mode(0x13);
	fn0C00_0289(0x00, 0x38, 0x00);
	fn0C00_0289(0x0F, 0x00, 0x00);
	fn0C00_029C(0x0F, 0x03);
	fn0C00_02A7(0x0505, ds);
	fn0C00_029C(0x0B, 0x07);
	fn0C00_02A7(0x051E, ds);
	fn0C00_029C(0x08, 0x09);
	fn0C00_02A7(0x052F, ds);
	fn0C00_029C(0x0D, 0x0E);
	fn0C00_02A7(0x0547, ds);
	byte ch_44;
	fn0C00_02AE(0x0030, 0x0040, out ch_44);
	fn0C00_029C(0x0D, 0x05);
	fn0C00_02A7(0x050F, ds);
	byte ch_53;
	fn0C00_02AE(0x0050, 0x0040, out ch_53);
	word16 cx_55 = 0x7D00;
	byte ch_57 = 0x7D;
	word16 di_62 = 0x0000;
	while (cx_55 != 0x0000)
	{
		Mem67[0xA000:di_62 + 0x0000:word16] = 0x0000;
		cx_55 = cx_55 - 0x0001;
		di_62 = di_62 + 0x0002;
		ch_57 = SLICE(cx_55, byte, 8);
	}
	byte ch_74;
	fn0C00_0268(0x02C2, 0x4BE4, 0x00, ch_57, 0xA000, ds, out ch_74);
	byte ch_78;
	fn0C00_02AE(DPB(cx_55, 0x28, 0, 8), 0x0040, out ch_78);
	fn0C00_029C(0x0A, 0x05);
	fn0C00_02A7(0x055F, ds);
	fn0C00_029C(0x0A, 0x06);
	fn0C00_02A7(0x056E, ds);
	byte ch_92;
	fn0C00_02AE(DPB(cx_55, 0x38, 0, 8), 0x0040, out ch_92);
	fn0C00_029C(0x0A, 0x05);
	fn0C00_02A7(0x057D, ds);
	fn0C00_029C(0x0A, 0x06);
	byte ah_103 = fn0C00_02A7(0x058F, ds);
	word16 cx_105 = DPB(cx_55, 0x38, 0, 8);
	byte ch_106;
	fn0C00_02AE(cx_105, 0x0040, out ch_106);
	word16 di_108 = 0x3200;
	word16 cx_110 = DPB(cx_105, 0x14, 8, 8);
	while (cx_110 != 0x0000)
	{
		Mem119[0xA000:di_108 + 0x0000:byte] = 0x00;
		di_108 = di_108 + 0x0001;
		cx_110 = cx_110 - 0x0001;
	}
	byte ch_126;
	fn0C00_02AE(DPB(cx_110, 0x18, 0, 8), 0x0040, out ch_126);
	Mem128[ds:0x02BF:byte] = 0x4D;
	Mem129[ds:0x02C0:word16] = 0x00F3;
	byte ch_132;
	byte ah_133 = fn0C00_0268(0x059E, 0x5C16, ah_103, ch_126, 0xA000, ds, out ch_132);
	byte ch_136;
	fn0C00_02AE(DPB(cx_110, 0x12, 0, 8), 0x0040, out ch_136);
	Mem138[0xA000:0x5F91:byte] = 0x00;
	byte ch_141;
	fn0C00_02AE(DPB(cx_110, 0x14, 0, 8), 0x0040, out ch_141);
	Mem143[ds:0x02BF:byte] = 0xA9;
	Mem144[ds:0x02C0:word16] = 0x0097;
	byte ch_147;
	fn0C00_0268(0x02C2, 0x4BE4, ah_133, ch_141, 0xA000, ds, out ch_147);
	byte ch_151;
	fn0C00_02AE(DPB(cx_110, 0x40, 0, 8), 0x0040, out ch_151);
	word16 di_153 = 0x7D99;
	word16 cx_155 = DPB(cx_110, 0x09, 0, 8);
	do
	{
		cx_166 = cx_155;
		do
		{
			word16 cx_166;
			Mem167[0xA000:di_153 + 0x0000:word16] = 0x0F0F;
			di_153 = di_153 - 0x0140;
			cx_166 = cx_166 - 0x0001;
		} while (cx_166 != 0x0000);
		byte ch_177;
		fn0C00_02AE(cx_166 + 0x0002, 0x0040, out ch_177);
		cx_155 = cx_155 - 0x0001;
	} while (cx_155 != 0x0000);
	word16 di_184 = 0x5097;
	word16 cx_186 = DPB(cx_155, 0x02, 0, 8);
	do
	{
		Mem191[0xA000:di_184 + 0x0000:word32] = 0x28042804;
		word16 cx_193 = -cx_186;
		byte ch_200;
		fn0C00_02AE(DPB(cx_193 + 0x0006, (byte) (cx_193 + 0x0006) << 0x01, 0, 8), 0x0040, out ch_200);
		di_184 = di_184 + 0x013F;
		cx_186 = cx_186 - 0x0001;
	} while (cx_186 != 0x0000);
	byte cl_209 = 0x37;
	word16 cx_210 = DPB(cx_186, 0x37, 0, 8);
	do
	{
		fn0C00_0289(0x00, cl_209, 0x00);
		byte ch_224;
		fn0C00_02AE(DPB(cx_210, (cl_209 & 0x01) + 0x01, 0, 8), 0x0040, out ch_224);
		cx_210 = cx_210 - 0x0001;
		cl_209 = (byte) cx_210;
	} while (cx_210 != 0x0000);
	fn0C00_029C(0x0C, 0x07);
	fn0C00_02A7(0x0557, ds);
	byte ch_238;
	fn0C00_02AE(0x001E, 0x0040, out ch_238);
	byte al_243;
	bios_kbd_get_keystroke(out al_243);
	msdos_terminate(al_243);
}

byte fn0C00_0268(word16 si, word16 di, byte ah, byte ch, selector es, selector ds, ptr16 chOut)
{
	*chOut = ch;
l0C00_0268:
	byte bh_22 = 0x00;
	di = di + Mem0[ds:0x02C0:word16];
	byte al_37 = Mem0[ds:si + 0x0000:byte];
	si = si + 0x0001;
	while (al_37 != 0x00)
	{
		cx = DPB(cx, al_37, 0, 8);
		bh_22 = bh_22 + al_37;
		while (cx != 0x0000)
		{
			Mem52[es:di + 0x0000:byte] = ah;
			cx = cx - 0x0001;
			di = di + 0x0001;
			byte ch_57;
			*chOut = SLICE(cx, byte, 8);
		}
		if (bh_22 >=u Mem0[ds:0x02BF:byte])
			goto l0C00_0268;
		ah = ah ^ 0x0F;
		al_37 = Mem0[ds:si + 0x0000:byte];
		si = si + 0x0001;
	}
	return ah;
}

void fn0C00_0289(byte al, byte bl, byte bh)
{
	__outb(0x03C8, al);
	__outb(0x03C9, bl + bh);
	__outb(0x03C9, bl);
	__outb(0x03C9, bl);
	return;
}

void fn0C00_029C(byte dl, byte dh)
{
	bios_video_set_cursor_position(0x00, dh, dl);
	return;
}

byte fn0C00_02A7(word16 dx, selector ds)
{
	msdos_display_string(ds, dx);
	return SLICE(ax, byte, 8);
}

byte fn0C00_02AE(word16 cx, selector fs, ptr16 chOut)
{
	do
	{
		byte dh_16 = Mem0[fs:0x006C:byte];
		do
			;
		while (Mem0[fs:0x006C:byte] == dh_16);
		cx = cx - 0x0001;
		byte cl_21 = (byte) cx;
		byte ch_22;
		*chOut = SLICE(cx, byte, 8);
	} while (cx != 0x0000);
	return cl_21;
}

