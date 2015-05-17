// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_341/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte ch, selector ds)
{
	word16 di_13 = 0x055E;
	word16 si_12 = 0x045F;
	do
	{
		Mem11[ds:di_13 + 0x0000:byte] = Mem0[ds:si_12 + 0x0000:byte];
		si_12 = si_12 + 0x0001;
		di_13 = di_13 - 0x0001;
	} while (di_13 >= 0xFB21);
	bios_video_set_mode(0x03);
	fn0C00_038B();
	__outw(0x03D4, 0x5013);
	selector es_19 = Mem11[ds:0x0415:selector];
	word16 di_20 = 0x0000;
	word16 bx_22 = 0x0000;
	do
	{
		cx = DPB(cx, 0x08, 0, 8);
		while (cx != 0x0000)
		{
			Mem57[es_19:di_20 + 0x0000:word16] = 0x07DB;
			di_20 = di_20 + 0x0002;
			cx = cx - 0x0001;
		}
		di_20 = di_20 + 0x0010;
		word16 dx_65 = SLICE(bx_22 *u 0x03C0, word16, 16);
		if (di_20 <=u 0x03C0)
			continue;
		word16 dx_114;
		if (dx_65 == 0x0000)
		{
			di_20 = di_20 + 0x0010;
			dx_114 = dx_65 + 0x0001;
		}
		else
			dx_114 = 0x0000;
		bx_22 = bx_22 + 0x0001;
	} while (bx_22 <=u 0x0021);
	word16 bx_177 = 0x0000;
	selector es_91 = Mem11[ds:0x0415:selector];
	word16 di_104 = 0x0518;
	word16 si_103 = 0x0417;
	while (true)
	{
		byte C_107 = cond(si_103 - 0x0437);
		if (si_103 == 0x0437)
			di_104 = 0x2458;
		dx_114 = DPB(dx_114, 0x08, 0, 8);
		do
		{
			byte al_129 = Mem11[ds:si_103 + 0x0000:byte];
			byte dh_131 = 0x08;
			word16 dx_132 = DPB(dx_114, 0x08, 8, 8);
			do
			{
				al_129 = __rcl(al_129, 0x01, C_107);
				if ((al_129 & 0x80) == 0x00)
				{
					Mem478[es_91:di_104 + 0x0000:word16] = 0x0FDB;
					Mem479[es_91:di_104 + 0x0002:word16] = 0x0FDB;
					Mem480[es_91:di_104 + 0x0004:word16] = 0x0FDB;
					Mem481[es_91:di_104 + 0x0006:word16] = 0x0FDB;
					Mem482[es_91:di_104 + 0x0140:word16] = 0x0FDB;
					Mem483[es_91:di_104 + 0x0142:word16] = 0x0FDB;
					Mem484[es_91:di_104 + 0x0144:word16] = 0x0FDB;
					Mem485[es_91:di_104 + 0x0146:word16] = 0x0FDB;
					Mem486[es_91:di_104 + 0x0280:word16] = 0x0FDB;
					Mem487[es_91:di_104 + 0x0282:word16] = 0x0FDB;
					Mem488[es_91:di_104 + 0x0284:word16] = 0x0FDB;
					Mem489[es_91:di_104 + 0x0286:word16] = 0x0FDB;
				}
				di_104 = di_104 + 0x0008;
				dh_131 = dh_131 - 0x01;
				C_107 = cond(di_104);
				dx_132 = DPB(dx_132, dh_131, 8, 8);
			} while (dh_131 != 0x00);
			si_103 = si_103 + 0x0001;
			di_104 = di_104 + 0x0380;
			C_107 = cond(di_104 + 0x0380);
			dx_114 = dx_132 - 0x0001;
		} while (dx_132 != 0x0001);
		di_104 = di_104 - 0x1A30;
		bx_177 = bx_177 + 0x0001;
		if (bx_177 == 0x0008)
		{
			fn0C00_02FB(ds);
			byte cl_183;
			fn0C00_0365(ds, out cl_183);
			word16 bx_185 = 0x0000;
			byte bl_186 = 0x00;
			word16 dx_190 = 0x0100;
			byte dl_192 = 0x00;
			while (true)
			{
				word16 ax_212 = (word16) Mem11[ds:bx_185 + 0x045F:byte] + 0x0060;
				if (dl_192 >u 0x05)
					ax_212 = 0x0060;
				word16 bx_227;
				Mem222[ds:0x0410:word16] = ax_212;
				bx_227 = bx_185;
				if (dl_192 >u 0x01)
					bx_227 = DPB(bx_185, bl_186 << 0x01, 0, 8);
				word16 ax_232 = (word16) Mem222[ds:bx_227 + 0x045F:byte];
				if (dl_192 != 0x01 && (dl_192 <=u 0x03 || dl_192 >u 0x05) && dl_192 != 0x07)
					Mem467[ds:0x040E:word16] = ax_232 + 0x01A0;
				else
					Mem458[ds:0x040E:word16] = 0x01A0 - ax_232;
				byte dh_246 = SLICE(dx_190, byte, 8);
				bl_186 = (byte) bx_185 + dh_246;
				byte al_241 = fn0C00_02FB(ds);
				dl_192 = (byte) dx_190;
				bx_185 = DPB(bx_185, bl_186, 0, 8);
				if (bl_186 == 0xFF)
				{
					word16 dx_443 = DPB(dx_190, -dh_246, 8, 8);
					dx_190 = dx_443 + 0x0001;
					dl_192 = (byte) (dx_443 + 0x0001);
					if (dl_192 >u 0x07)
					{
						dl_192 = 0x00;
						dx_190 = DPB(dx_443 + 0x0001, 0x00, 0, 8);
					}
				}
				msdos_get_stdin_status();
				if (al_241 != 0x00)
				{
					byte cl_268;
					bios_video_set_mode(msdos_flush_buffer_and_read_stdin(fn0C00_0365(ds, out cl_268)));
					bios_video_load_ROM_8x8_dbl_dot_patterns(0x00);
					fn0C00_038B();
					word16 bx_276 = 0x0000;
					selector es_281 = Mem222[ds:0x0415:selector];
					word16 di_282 = 0x066C;
					word16 si_283 = 0x0417;
					while (true)
					{
						byte C_297 = cond(si_283 - 0x0437);
						if (si_283 == 0x0437)
							di_282 = 0x0C02;
						dx_190 = DPB(dx_190, 0x08, 0, 8);
						do
						{
							byte al_319 = Mem222[ds:si_283 + 0x0000:byte];
							byte dh_321 = 0x08;
							word16 dx_322 = DPB(dx_190, 0x08, 8, 8);
							do
							{
								al_319 = __rcl(al_319, 0x01, C_297);
								if ((al_319 & 0x80) == 0x00)
									Mem440[es_281:di_282 + 0x0000:word16] = 0x0FDB;
								di_282 = di_282 + 0x0002;
								dh_321 = dh_321 - 0x01;
								C_297 = cond(di_282);
								dx_322 = DPB(dx_322, dh_321, 8, 8);
							} while (dh_321 != 0x00);
							si_283 = si_283 + 0x0001;
							di_282 = di_282 + 0x0090;
							C_297 = cond(di_282 + 0x0090);
							dx_190 = dx_322 - 0x0001;
						} while (dx_322 != 0x0001);
						bx_276 = bx_276 + 0x0001;
						di_282 = di_282 - 0x045E;
						byte bh_369 = SLICE(bx_276, byte, 8);
						if (bx_276 == 0x0009)
						{
							word16 si_372 = 0x039E;
							selector es_373 = Mem222[ds:0x0415:selector];
							word16 di_374 = 0x11B4;
							word16 cx_375 = 0x001B;
							while (cx_375 != 0x0000)
							{
								Mem384[es_373:di_374 + 0x0000:word16] = Mem222[ds:si_372 + 0x0000:word16];
								si_372 = si_372 + 0x0002;
								di_374 = di_374 + 0x0002;
								cx_375 = cx_375 - 0x0001;
							}
							bios_video_set_cursor_position(bh_369, 0x32, 0x00);
							byte cl_392;
							fn0C00_0365(ds, out cl_392);
							byte al_397;
							bios_kbd_get_keystroke(out al_397);
							byte cl_399;
							fn0C00_0365(ds, out cl_399);
							__syscall(0x10);
							word16 cx_409 = DPB(cx_375, 0x16, 8, 8);
							while (cx_409 != 0x0000)
							{
								Mem414[es_373:di_374 + 0x0000:word16] = 0x0000;
								di_374 = di_374 + 0x0002;
								cx_409 = cx_409 - 0x0001;
							}
							word16 si_420 = 0x03D4;
							selector es_422 = Mem222[ds:0x0415:selector];
							word16 di_423 = 0x0066;
							word16 cx_425 = DPB(cx_409, 0x1D, 0, 8);
							while (cx_425 != 0x0000)
							{
								Mem432[es_422:di_423 + 0x0000:word16] = Mem222[ds:si_420 + 0x0000:word16];
								si_420 = si_420 + 0x0002;
								di_423 = di_423 + 0x0002;
								cx_425 = cx_425 - 0x0001;
							}
							msdos_terminate(0x00);
						}
					}
				}
			}
		}
	}
}

byte fn0C00_02CE(byte cl, selector ds)
{
	__outb(0x03C7, cl);
	byte al_6 = __inb(0x03C9);
	byte al_8 = __inb(0x03C9);
	byte al_10 = __inb(0x03C9);
	byte ah_14 = al_6 + Mem0[ds:0x0414:byte];
	byte bl_15 = al_8 + Mem0[ds:0x0414:byte];
	byte bh_16 = al_10 + Mem0[ds:0x0414:byte];
	__outb(0x03C8, cl);
	__outb(0x03C9, ah_14);
	__outb(0x03C9, bl_15);
	__outb(0x03C9, bh_16);
	return bh_16;
}

byte fn0C00_02FB(selector ds)
{
	word16 ax_11 = Mem0[ds:0x040E:word16];
	word32 dx_ax_16 = SEQ(SEQ(dx, ax_11) % 0x0009, ax_11);
	Mem20[ds:0x0412:word16] = (word16) ((Mem0[ds:0x0410:word16] >>u 0x04) *u 0x00A0) + dx_ax_16 /u 0x0009;
	word16 ax_17 = dx_ax_16 /u 0x0009;
	do
	{
		byte al_24 = __inb(0x03DA);
		ax_17 = DPB(ax_17, al_24, 0, 8);
	} while ((al_24 & 0x08) != 0x00);
	__outw(0x03D4, DPB(ax_17, Mem20[ds:0x0413:byte], 8, 8));
	__outw(0x03D4, DPB(ax_17, Mem20[ds:0x0412:byte], 8, 8));
	do
		;
	while ((__inb(0x03DA) & 0x08) == 0x00);
	__outw(0x03D4, DPB(SEQ(0x0000, Mem20[ds:0x0410:word16]) % 0x0010, 0x08, 0, 8));
	byte al_65 = (byte) (SEQ(0x0000, Mem20[ds:0x040E:word16] - 0x0001) % 0x0009);
	__outb(0x03C0, 0x33);
	__outb(0x03C0, al_65 | 0x20);
	return al_65 | 0x20;
}

byte fn0C00_0365(selector ds, ptr16 clOut)
{
	word16 cx_14 = 0x001F;
	do
	{
		do
			;
		while ((__inb(0x03DA) & 0x08) != 0x00);
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		fn0C00_02CE(0x07, ds);
		fn0C00_02CE(0x3F, ds);
		cx_14 = cx_14 - 0x0001;
		byte al_33 = fn0C00_02CE(0x3F, ds);
		byte cl_37;
		*clOut = (byte) cx_14;
	} while (cx_14 != 0x0000);
	Mem40[ds:0x0414:byte] = -Mem0[ds:0x0414:byte];
	return al_33;
}

void fn0C00_038B()
{
	byte bh_2 = 0xFF;
	do
	{
		__outb(0x03C8, bh_2);
		__outb(0x03C9, 0x00);
		__outb(0x03C9, 0x00);
		__outb(0x03C9, 0x00);
		bh_2 = bh_2 - 0x01;
	} while (bh_2 != 0x00);
	return;
}

