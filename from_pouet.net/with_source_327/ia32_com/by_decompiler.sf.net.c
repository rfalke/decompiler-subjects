// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_327/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(selector es, selector ds, word16 wArg1596, word16 wArg1598, word16 wArg159A, word16 wArg159C, word16 wArg159E)
{
	word16 bx_6;
	msdos_resize_memory_block(es, 0x01B5, out bx_6);
	bios_video_set_mode(0x13);
	msdos_allocate_memory_block(0x0FB4);
	if (!msdos_allocate_memory_block(0x0FB4))
	{
		msdos_display_string(ds, 0x0234);
		Mem60[ss:fp - 0xEA62:word16] = 0xA000;
		word16 cx_50 = 0x7D00;
		word16 di_53 = 0x0000;
		while (cx_50 != 0x0000)
		{
			Mem70[0x0013:di_53 + 0x0000:word16] = 0x0000;
			di_53 = di_53 + 0x0002;
			cx_50 = cx_50 - 0x0001;
		}
		word16 di_168 = 0x0000;
		word16 si_167 = 0x0000;
		word16 cx_170 = DPB(cx_50, 0x08, 0, 8);
		do
		{
			word16 cx_107 = DPB(cx_170, 0x35, 0, 8);
			si_109 = si_167;
			di_116 = di_168;
			do
			{
				word16 si_109;
				word16 di_116;
				byte al_121 = Mem60[0xA000:di_116 + 0x0000:byte];
				word16 cx_124 = DPB(cx_107, 0x06, 0, 8);
				do
				{
					word16 cx_133 = DPB(cx_124, 0x12, 0, 8);
					word16 bx_134 = 0x2BD4;
					do
					{
						Mem139[0x0013:bx_134 + si_109:byte] = al_121;
						bx_134 = bx_134 + 0x0140;
						cx_133 = cx_133 - 0x0001;
					} while (cx_133 != 0x0000);
					si_109 = si_109 + 0x0001;
					cx_124 = cx_124 - 0x0001;
				} while (cx_124 != 0x0000);
				di_116 = di_116 + 0x0001;
				cx_107 = cx_107 - 0x0001;
			} while (cx_107 != 0x0000);
			si_167 = si_167 + 0x1680;
			di_168 = di_168 + 0x0140;
			cx_170 = cx_170 - 0x0001;
		} while (cx_170 != 0x0000);
		byte ch_175;
		fn0C00_02B8(0x0013, 0x4813, out ch_175);
		byte ah_177 = 0x00;
		do
		{
			byte bl_181;
			byte ah_182;
			byte ch_183;
			fn0C00_02AB(ah_177, out bl_181, out ah_182, out ch_183);
		} while (fn0C00_0298(bl_181, ah_182, ch_183, out ah_177));
		byte ah_187 = ah_177 - 0x01;
		do
		{
			byte bl_192;
			byte ah_193;
			byte ch_194;
			fn0C00_02AB(ah_187, out bl_192, out ah_193, out ch_194);
		} while (fn0C00_0298(bl_192, ah_193, -ch_194, out ah_187));
		fn0C00_0251(0x00C8, 0x01, 0xA000, ds, 0x0013);
		fn0C00_0251(0x0078, 0xEB, 0xA000, ds, 0x0013);
		fn0C00_0251(0x0078, 0x28, 0xA000, ds, 0x0013);
		fn0C00_0251(0x0028, 0x78, 0xA000, ds, 0x0013);
		fn0C00_0251(0x0032, 0x80, 0xA000, ds, 0x0013);
		fn0C00_0251(0x00FF, 0x01, 0xA000, ds, 0x0013);
		word16 sp_232 = fp - 0xEA54;
		word16 bx_233 = 0x0001;
		word16 cx_236 = 0x0104;
		do
		{
			word16 sp_243 = sp_232 - 0x0002;
			Mem244[ss:sp_243 + 0x0000:word16] = bx_233;
			fn0C00_0271(0x09, 0xA000, ds, 0x4813, 0x0013);
			word16 bx_248 = Mem244[ss:sp_243 + 0x0002:word16];
			Mem253[ss:sp_243 + 0x0002:word16] = cx_236;
			word16 sp_252 = sp_243 + 0x0002;
			word16 cx_254 = bx_248;
			word16 di_257 = 0x0000;
			do
			{
				word16 sp_263 = sp_252 - 0x0002;
				Mem264[ss:sp_263 + 0x0000:word16] = di_257;
				fn0C00_02EE(cx_254, di_257, 0xA000, 0x4813);
				sp_252 = sp_263 + 0x0002;
				di_257 = Mem264[ss:sp_263 + 0x0000:word16] + 0x0140;
				cx_254 = cx_254 - 0x0001;
			} while (cx_254 != 0x0000);
			word16 cx_273 = bx_248;
			word16 di_276 = 0xFA00;
			do
			{
				di_276 = fn0C00_02EE(cx_273, di_276 - cx_273, 0xA000, 0x4813) - 0x0140;
				cx_273 = cx_273 - 0x0001;
			} while (cx_273 != 0x0000);
			word16 cx_287 = Mem264[ss:sp_263 + 0x0002:word16];
			sp_232 = sp_263 + 0x0004;
			bx_233 = bx_248 + 0x0001;
			cx_236 = cx_287 - 0x0001;
		} while (cx_287 != 0x0001);
		word16 cx_299 = DPB(cx_287 - 0x0001, 0x32, 0, 8);
		do
		{
			fn0C00_0271(0x08, 0xA000, ds, 0x4813, 0x0013);
			sp_232 = sp_232 + 0x0002;
			cx_299 = cx_299 - 0x0001;
		} while (cx_299 != 0x0000);
		byte bh_308 = 0x00;
		word16 cx_310 = DPB(cx_299, 0xFF, 0, 8);
		do
		{
			fn0C00_0271(0x08, 0xA000, ds, 0x4813, 0x0013);
			word16 sp_318 = sp_232 + 0x0002;
			Mem322[ss:sp_318 - 0x0002:word16] = cx_310;
			bh_308 = bh_308 + 0x01;
			__outb(0x03C8, bh_308);
			word16 cx_327 = 0x0300;
			do
			{
				__inb(0x03C9);
				cx_327 = cx_327 - 0x0001;
			} while (cx_327 != 0x0000);
			word16 cx_336 = DPB(cx_327, 0x03, 0, 8);
			do
			{
				byte al_341 = __inb(0x03C9);
				byte al_342 = al_341 - 0x01;
				if (al_341 < 0x01)
					al_342 = al_341;
				__outb(0x03C9, al_342);
				cx_336 = cx_336 - 0x0001;
			} while (cx_336 != 0x0000);
			word16 cx_352 = Mem322[ss:sp_318 - 0x0002:word16];
			sp_232 = sp_318;
			cx_310 = cx_352 - 0x0001;
		} while (cx_352 != 0x0001);
		fn0C00_0226(ds);
	}
}

void fn0C00_0226(selector ds)
{
	bios_video_set_mode(0x03);
	msdos_display_string(ds, 0x023B);
	msdos_terminate_program20();
}

byte fn0C00_0251(word16 cx, byte bl, selector es, selector ds, selector gs)
{
	do
	{
		word16 di_18 = 0x0000;
		word16 cx_21 = 0xFA00;
		do
		{
			Mem28[es:di_18 + 0x0000:byte] = fn0C00_02CA(di_18, bl, gs);
			di_18 = di_18 + 0x0001;
			cx_21 = cx_21 - 0x0001;
		} while (cx_21 != 0x0000);
		byte ch_37;
		byte Z_38 = fn0C00_02B8(es, gs, out ch_37);
		byte al_39;
		bios_kbd_check_keystroke(out al_39);
		if (Z_38)
		{
			fn0C00_0226(ds);
			return ch_37;
		}
		cx = cx - 0x0001;
		byte ch_47 = SLICE(cx, byte, 8);
	} while (cx != 0x0000);
	return ch_47;
}

void fn0C00_0271(byte bl, selector es, selector ds, selector fs, selector gs)
{
	word16 di_20 = 0x2BD4;
	word16 cx_10 = 0xA280;
	do
	{
		byte dl_13 = fn0C00_02CA(di_20, bl, gs);
		if ((Mem0[fs:di_20 + 0x0000:byte] & 0xFF) != 0x00)
			Mem37[es:di_20 + 0x0000:byte] = dl_13;
		di_20 = di_20 + 0x0001;
		cx_10 = cx_10 - 0x0001;
	} while (cx_10 != 0x0000);
	byte ch_28;
	byte Z_29 = fn0C00_02B8(es, gs, out ch_28);
	byte al_30;
	bios_kbd_check_keystroke(out al_30);
	if (!Z_29)
		return;
	else
	{
		fn0C00_0226(ds);
		return;
	}
}

byte fn0C00_0298(byte bl, byte ah, byte ch, ptr16 ahOut)
{
	__outb(0x03C8, bl);
	word16 ax_6 = DPB(ax, bl, 0, 8);
	__outw(0x03C9, ax_6);
	__outw(0x03C9, ax_6);
	__outb(0x03C9, ch);
	byte ah_11;
	*ahOut = ah + 0x01;
	return cond(ah + 0x01);
}

byte fn0C00_02AB(byte ah, ptr16 blOut, ptr16 ahOut, ptr16 chOut)
{
	byte bl_3;
	*blOut = ah;
	byte ch_11;
	*chOut = ah >>u 0x01 << 0x01;
	byte ah_13;
	*ahOut = SLICE(ax, byte, 8);
	return ah >>u 0x01;
}

bool fn0C00_02B8(word16 ax, word16 bp, ptr16 chOut)
{
	word16 cx_21 = 0x7D00;
	byte ch_9;
	*chOut = 0x7D;
	word16 di_10 = 0x0000;
	word16 si_11 = 0x0000;
	byte SZO_12 = cond(0x0000);
	while (cx_21 != 0x0000)
	{
		Mem25[bp:di_10 + 0x0000:word16] = Mem0[ax:si_11 + 0x0000:word16];
		cx_21 = cx_21 - 0x0001;
		si_11 = si_11 + 0x0002;
		di_10 = di_10 + 0x0002;
		byte ch_29;
		*chOut = SLICE(cx_21, byte, 8);
	}
	return SZO_12;
}

byte fn0C00_02CA(word16 di, byte bl, selector gs)
{
	return (byte) (DPB(ax, Mem0[gs:di + 0x0002:byte], 0, 8) + DPB(ax, Mem0[gs:di - 0x0001:byte], 0, 8) + DPB(ax, Mem0[gs:di + 0x0140:byte], 0, 8) + DPB(ax, Mem0[gs:di - 0x0140:byte], 0, 8) >>u 0x0002) - bl;
}

word16 fn0C00_02EE(word16 cx, word16 di, selector es, selector fs)
{
	do
	{
		if ((Mem0[fs:di + 0x0000:byte] & 0xFF) == 0x00)
			Mem19[es:di + 0x0000:byte] = 0xFF;
		di = di + 0x0001;
		cx = cx - 0x0001;
	} while (cx != 0x0000);
	return di;
}

