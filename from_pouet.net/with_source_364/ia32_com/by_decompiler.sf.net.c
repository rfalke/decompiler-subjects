// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_364/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte al, selector ds)
{
	bios_video_set_mode(al);
	__syscall(0x10);
	__syscall(0x10);
	byte ah_5;
	byte bh_6;
	if (bios_video_get_current_video_mode(out ah_5, out bh_6) != 0x07)
		Mem683[ds:0x013A:word16] = 0xB800;
	word32 es_bx_12 = msdos_get_interrupt_vector(0x08);
	Mem16[ds:0x0501:word16] = (word16) es_bx_12;
	Mem18[ds:0x0503:word16] = SLICE(es_bx_12, selector, 16);
	byte bl_104 = (byte) es_bx_12;
	word16 si_108 = fn0C00_033E(0x04A6, 0x08, ds);
	word16 bp_21 = 0x0000;
	word16 cx_22 = 0x1770;
	word16 ax_100 = 0x0000;
	byte al_103 = 0x00;
	word16 di_109 = 0x0000;
	word16 dx_107 = 0xB000;
	byte dl_106 = 0x00;
	while (cx_22 != 0x0000)
	{
		Mem41[0xB000:di_109 + 0x0000:word16] = 0x0000;
		di_109 = di_109 + 0x0002;
		cx_22 = cx_22 - 0x0001;
	}
	while (true)
	{
		if (bp_21 == 0x0020)
		{
			dl_106 = dl_106 | 0x08;
			si_108 = 0x05AD;
			di_109 = 0x0000;
			dx_107 = DPB(dx_107, dl_106, 0, 8);
		}
		if (bp_21 == 0x0060)
		{
			dl_106 = dl_106 | 0x04;
			dx_107 = DPB(dx_107, dl_106, 0, 8);
		}
		if (bp_21 == 0x0080)
		{
			al_103 = fn0C00_0362(bl_104 & 0xFE, 0xB000, ds, out bl_104);
			byte dl_655 = dl_106 ^ 0x04;
			ax_100 = DPB(ax_100, al_103, 0, 8);
			si_108 = 0x05DC;
			di_109 = 0x0FA0;
			dl_106 = dl_655 | 0x88;
			dx_107 = DPB(dx_107, dl_655 | 0x88, 0, 8);
		}
		if (bp_21 == 0x0100)
		{
			al_103 = fn0C00_0362(bl_104 | 0x01, 0xB000, ds, out bl_104);
			dl_106 = dl_106 | 0x08;
			ax_100 = DPB(ax_100, al_103, 0, 8);
			si_108 = 0x0625;
			di_109 = 0x0FA0;
			dx_107 = DPB(dx_107, dl_106, 0, 8);
		}
		if (bp_21 == 0x011E)
			si_108 = 0x0644;
		if (bp_21 == 0x0140)
		{
			dl_106 = dl_106 ^ 0x84;
			dx_107 = DPB(dx_107, dl_106, 0, 8);
		}
		if (bp_21 == 0x0160)
		{
			byte dl_604 = dl_106 ^ 0x04;
			word16 di_607 = 0x0FA0;
			word16 cx_608 = 0x07D0;
			ax_100 = 0x0000;
			while (cx_608 != 0x0000)
			{
				Mem618[0xB000:di_607 + 0x0000:word16] = 0x0000;
				di_607 = di_607 + 0x0002;
				cx_608 = cx_608 - 0x0001;
			}
			si_108 = fn0C00_0949(0x01AD, 0x0BB2, 0x1180, 0xB000, ds, out di_109, out al_103, out bl_104);
			dl_106 = dl_604 | 0x20;
			dx_107 = DPB(dx_107, dl_604 | 0x20, 0, 8);
		}
		if (bp_21 == 0x0180)
		{
			al_103 = fn0C00_0362(bl_104 & 0xFE, 0xB000, ds, out bl_104);
			byte dl_588 = dl_106 ^ 0x30;
			ax_100 = DPB(ax_100, al_103, 0, 8);
			si_108 = 0x065C;
			di_109 = 0x0FA0;
			dl_106 = dl_588 | 0x08;
			dx_107 = DPB(dx_107, dl_588 | 0x08, 0, 8);
		}
		if (bp_21 == 0x01D0)
			si_108 = 0x06DE;
		if (bp_21 == 0x0200)
		{
			al_103 = fn0C00_0362(bl_104 | 0x01, 0xB000, ds, out bl_104);
			dl_106 = dl_106 | 0x08;
			ax_100 = DPB(ax_100, al_103, 0, 8);
			si_108 = 0x0625;
			di_109 = 0x0FA0;
			dx_107 = DPB(dx_107, dl_106, 0, 8);
		}
		if (bp_21 == 0x021E)
			si_108 = 0x06AC;
		if (bp_21 == 0x0280)
		{
			ax_100 = 0x0020;
			word16 di_542 = 0x0000;
			word16 cx_545 = 0x1770;
			while (cx_545 != 0x0000)
			{
				Mem550[0xB000:di_542 + 0x0000:word16] = 0x0020;
				di_542 = di_542 + 0x0002;
				cx_545 = cx_545 - 0x0001;
			}
			word16 di_557;
			byte al_558;
			byte bl_559;
			fn0C00_0949(0x00EB, 0x0AC7, 0x1CC0, 0xB000, ds, out di_557, out al_558, out bl_559);
			si_108 = fn0C00_0949(0x00A1, 0x0E51, 0x0FA0, 0xB000, ds, out di_109, out al_103, out bl_104);
			dl_106 = 0x40;
			dx_107 = DPB(dx_107, 0x40, 0, 8);
		}
		if (bp_21 == 0x02C0)
		{
			al_103 = fn0C00_0362(bl_104 & 0xFE, 0xB000, ds, out bl_104);
			dl_106 = dl_106 | 0x08;
			ax_100 = DPB(ax_100, al_103, 0, 8);
			si_108 = 0x070C;
			di_109 = 0x0FA0;
			dx_107 = DPB(dx_107, dl_106, 0, 8);
		}
		if (bp_21 == 0x0300)
		{
			al_103 = fn0C00_0362(bl_104 | 0x01, 0xB000, ds, out bl_104);
			dl_106 = dl_106 | 0x08;
			ax_100 = DPB(ax_100, al_103, 0, 8);
			si_108 = 0x0625;
			di_109 = 0x0FA0;
			dx_107 = DPB(dx_107, dl_106, 0, 8);
		}
		if (bp_21 == 0x031E)
			si_108 = 0x0739;
		if (bp_21 == 0x0340)
		{
			word16 di_485 = 0x0FA0;
			word16 cx_486 = 0x07D0;
			ax_100 = 0x0000;
			while (cx_486 != 0x0000)
			{
				Mem496[0xB000:di_485 + 0x0000:word16] = 0x0000;
				di_485 = di_485 + 0x0002;
				cx_486 = cx_486 - 0x0001;
			}
			si_108 = fn0C00_0949(0x00F2, 0x0D5F, 0x1180, 0xB000, ds, out di_109, out al_103, out bl_104);
			dl_106 = 0x20;
			dx_107 = DPB(dx_107, 0x20, 0, 8);
		}
		if (bp_21 == 0x0360)
		{
			dl_106 = 0x11;
			dx_107 = DPB(dx_107, 0x11, 0, 8);
		}
		if (bp_21 == 0x0380)
		{
			dl_106 = dl_106 | 0x0A;
			di_109 = 0x08C0;
			si_108 = 0x0758;
			dx_107 = DPB(dx_107, dl_106, 0, 8);
		}
		if (bp_21 == 0x0440)
		{
			dl_106 = dl_106 | 0x08;
			di_109 = 0x0DC0;
			si_108 = 0x0905;
			dx_107 = DPB(dx_107, dl_106, 0, 8);
		}
		if (bp_21 == 0x0480)
		{
			dl_106 = dl_106 | 0xFF;
			dx_107 = DPB(dx_107, dl_106, 0, 8);
		}
		if (dl_106 == 0xFF)
		{
			ptr32 ds_dx_280 = Mem18[ds:0x0501:segptr32];
			selector ds_281 = SLICE(ds_dx_280, selector, 16);
			word16 dx_283 = (word16) ds_dx_280;
			fn0C00_033E(dx_283, al_103, ds_281);
			return;
		}
		if ((dl_106 & 0x08) != 0x00)
		{
			word16 cx_405 = 0x0001;
			if ((dl_106 & 0x02) != 0x00)
			{
				cx_405 = 0x0003;
				if ((bp_21 & 0x0003) == 0x0000)
				{
					cx_405 = 0x0002;
					goto l0C00_02BE;
				}
			}
l0C00_02BE:
			do
			{
				al_103 = Mem18[ds:si_108 + 0x0000:byte];
				word16 ax_420 = DPB(ax_100, al_103, 0, 8);
				si_108 = si_108 + 0x0001;
				if (al_103 == 0x00)
				{
					dl_106 = dl_106 ^ 0x08;
					dx_107 = DPB(dx_107, dl_106, 0, 8);
				}
				ax_100 = DPB(ax_420, 0x0E, 8, 8);
				Mem432[0xB000:di_109 + 0x0000:word16] = ax_100;
				di_109 = di_109 + 0x0002;
				cx_405 = cx_405 - 0x0001;
			} while (cx_405 != 0x0000);
			Mem442[0xB000:di_109 - 0x0003:byte] = 0x0F;
			Mem443[0xB000:di_109 - 0x0005:byte] = 0x07;
			Mem444[0xB000:di_109 - 0x0009:byte] = 0x0E;
			Mem445[0xB000:di_109 - 0x000B:byte] = 0x0C;
			Mem446[0xB000:di_109 - 0x000F:byte] = 0x0E;
		}
		if ((dl_106 & 0x20) != 0x00)
		{
			Mem353[ss:fp - 0x0008:word16] = 0xB000;
			word16 ax_375 = DPB((int16) (byte) (bp_21 << 0x03), 0x00, 8, 8) * 0x0002 * 0x0002 * 0x0003 & 0xFFC0;
			ax_100 = ax_375 + (ax_375 >>u 0x0002);
			word16 di_358 = 0x0000;
			bl_104 = (byte) (ax_375 >>u 0x0002);
			al_103 = (byte) ax_100;
			word16 si_384 = 0x0FA0 - ax_100 - ax_100;
			word16 cx_386 = 0x07D0;
			while (cx_386 != 0x0000)
			{
				Mem393[0xB000:di_358 + 0x0000:word16] = Mem353[0xB000:si_384 + 0x0000:word16];
				si_384 = si_384 + 0x0002;
				di_358 = di_358 + 0x0002;
				cx_386 = cx_386 - 0x0001;
			}
			goto l0C00_031E;
		}
l0C00_031E:
		while (bp_21 >=u Mem18[ds:0x04AB:word16])
		{
			ax_100 = 0x0000;
			al_103 = 0x00;
			if ((Mem18[0x0000:0x0417:byte] & 0x07) != 0x00)
				goto l0C00_033A;
			dx_107 = fn0C00_038D(dx_107, bp_21, 0xB000, out di_109, out al_103, out bl_104);
			dl_106 = (byte) dx_107;
		}
		bp_21 = bp_21 + 0x0001;
	}
}

word16 fn0C00_033E(word16 dx, byte al, selector ds)
{
	__cli();
	msdos_set_interrupt_vector(al, ds_dx);
	word16 ax_12 = 0x00F4;
	byte al_13 = 0xF4;
	byte ah_14 = 0x00;
	do
	{
		word16 ax_11 = DPB(ax_12, fn0C00_0505(al_13, ah_14), 0, 8);
		ax_12 = ax_11 - 0x0001;
		al_13 = (byte) (ax_11 - 0x0001);
		ah_14 = SLICE(ax_11 - 0x0001, byte, 8);
	} while (ax_11 != 0x0001);
	word16 si_17 = 0x08FD;
	do
	{
		byte ah_25 = Mem0[0x0C00:si_17 + 0x0000:byte];
		ax_12 = DPB(ax_12, ah_25, 8, 8);
		si_17 = si_17 + 0x0001;
		do
		{
			word16 ax_33 = DPB(ax_12, fn0C00_0505(al_13, ah_25), 0, 8);
			ax_12 = ax_33 + 0x0001;
			al_13 = (byte) (ax_33 + 0x0001);
			ah_25 = SLICE(ax_33 + 0x0001, byte, 8);
		} while ((al_13 & 0x1F) != 0x00);
	} while (al_13 != 0x00);
	return si_17;
}

byte fn0C00_0362(byte bl, selector es, selector ds, ptr16 blOut)
{
	word16 di_11 = 0x1554;
	word16 cx_12 = 0x00A0;
	while (cx_12 != 0x0000)
	{
		Mem9[es:di_11 + 0x0000:word16] = 0x0000;
		di_11 = di_11 + 0x0002;
		cx_12 = cx_12 - 0x0001;
	}
	word16 cx_21;
	word16 si_19;
	word16 di_13 = di_11 + 0x0000;
	if ((bl & 0x01) == 0x00)
	{
		si_19 = 0x099B;
		cx_21 = 0x005F;
	}
	else
	{
		si_19 = 0x09FA;
		cx_21 = 0x00CD;
		di_13 = di_13 + 0x0046;
	}
	word16 di_23;
	byte al_24;
	byte bl_25;
	fn0C00_0949(cx_21, si_19, di_13, es, ds, out di_23, out al_24, out bl_25);
	return al_24;
}

word16 fn0C00_038D(word16 dx, word16 bp, selector es, ptr16 diOut, ptr16 alOut, ptr16 blOut)
{
	*alOut = al;
	*diOut = di;
	*blOut = bl;
	if ((dl & 0x04) != 0x00)
	{
		*diOut = 0x0000;
		word16 cx_444 = 0x07D0;
		word16 ax_446 = 0x00B1;
		byte al_449;
		*alOut = 0xB1;
		if ((bp & 0x0001) == 0x0000)
		{
			ax_446 = DPB(0x00B1, ~0x00, 8, 8);
			goto l0C00_03A2;
		}
l0C00_03A2:
		while (cx_444 != 0x0000)
		{
			Mem459[es:di + 0x0000:word16] = ax_446;
			*diOut = di + 0x0002;
			cx_444 = cx_444 - 0x0001;
		}
	}
	if ((dl & 0x40) != 0x00)
	{
		word32 dx_ax_358 = SEQ(dx, bp);
		word16 bx_367 = DPB(bx, 0x00, 8, 8);
		word16 di_355 = 0x0000;
		word16 si_356 = 0x0FA0;
		dl = (byte) (dx_ax_358 % 0x50);
		byte bl_372;
		*blOut = (byte) (bx_367 * 0x0002);
		byte dh_375 = 0x19;
		dx = DPB(dx_ax_358 % 0x50, 0x19, 8, 8);
		do
		{
			word16 cx_390 = 0x0050;
			do
			{
				word16 ax_398 = Mem0[es:si_356 + 0x0000:word16];
				byte ah_400 = SLICE(ax_398, byte, 8);
				byte al_401 = (byte) ax_398;
				*alOut = al_401;
				si_356 = si_356 + 0x0002;
				if (al_401 == 0x20 && (ah_400 & 0xF0) == 0x00)
					if (cx_390 >=u bx_367)
					{
						ax_398 = Mem0[es:bx_367 * 0x0002 + 0x0F9E + si_356:word16];
						byte al_438;
						*alOut = (byte) ax_398;
					}
					else
					{
						ax_398 = Mem0[es:bx_367 * 0x0002 + 0x0EFE + si_356:word16];
						byte al_442;
						*alOut = (byte) ax_398;
					}
				Mem413[es:di_355 + 0x0000:word16] = ax_398;
				di_355 = di_355 + 0x0002;
				cx_390 = cx_390 - 0x0001;
			} while (cx_390 != 0x0000);
			dh_375 = dh_375 - 0x01;
			dx = DPB(dx, dh_375, 8, 8);
		} while (dh_375 != 0x00);
		*diOut = di;
	}
	if ((dl & 0x80) != 0x00)
	{
		word16 si_254 = 0x0FA0;
		word16 di_255 = 0x0000;
		byte dh_256 = 0x19;
		dx = DPB(dx, 0x19, 8, 8);
		word16 bx_259 = 0x0000;
		byte bh_260 = 0x00;
		do
		{
			word16 ax_272 = bp * 0x0002;
			word16 ax_289 = DPB((int16) (byte) (DPB(ax_272 * 0x0002, (byte) (ax_272 * 0x0002) + dh_256 + bh_260, 0, 8) * 0x0002 * 0x0002), 0x00, 8, 8);
			word16 ax_290 = ax_289 + 0x0008;
			byte al_293;
			*alOut = (byte) (ax_289 + 0x0008);
			byte bl_298 = bh_260 + dh_256 + (byte) bp;
			if (ax_289 >=u 0xFFB8)
			{
				ax_290 = 0x0050;
				byte al_344;
				*alOut = 0x50;
			}
			byte bl_315 = ~(bh_260 + dh_256 + cl_310);
			word16 di_309;
			byte cl_310;
			word16 si_311 = fn0C00_0EF2(ax_290, si_254, di_255, bl_298 & 0x19, es, es, out di_309, out cl_310);
			bx_259 = DPB(bx_259, bl_315 & 0x19, 0, 8) + dx + dx;
			dh_256 = dh_256 - 0x01;
			byte cl_323;
			si_254 = fn0C00_0EF2(0x0050 - ax_290, si_311, di_309, bl_315 & 0x19, es, es, out di_255, out cl_323);
			byte bl_327;
			*blOut = (byte) bx_259;
			bh_260 = SLICE(bx_259, byte, 8);
			dx = DPB(dx, dh_256, 8, 8);
		} while (dh_256 != 0x00);
		*diOut = di;
	}
	if ((dl & 0x10) != 0x00)
	{
		word16 di_124 = 0x0000;
		word16 si_125 = 0x0FA0;
		word16 cx_126 = 0x07D0;
		if ((dl & 0x01) == 0x00)
		{
l0C00_0468:
			do
			{
				si_125 = si_125 + 0x0002;
				word16 ax_160 = Mem0[es:si_125 + 0x0000:word16];
				byte bl_168 = (byte) (((bp + si_125 | cx_126) + bp) * 0x0002);
				Mem176[es:di_124 + 0x0000:word16] = DPB(ax_160, SLICE(ax_160, byte, 8) | bl_168 & 0x1B, 8, 8);
				byte al_162;
				*alOut = (byte) ax_160;
				byte bl_169;
				*blOut = bl_168 & 0x1B;
				di_124 = di_124 + 0x0002;
				cx_126 = cx_126 - 0x0001;
			} while (cx_126 != 0x0000);
		}
		else
		{
			word16 di_182 = 0x0001;
			word16 dx_183 = 0x004E;
			byte dl_184 = 0x4E;
			do
			{
				word16 ax_197 = bp * 0x0002;
				word16 bx_202 = dx_183;
				cx_126 = DPB(cx_126, 0x50, 0, 8);
				do
				{
					word16 ax_212 = ax_197 + bx_202 + bp;
					Mem223[es:di_182 + 0x0000:byte] = SLICE(ax_212, byte, 8) & 0x19 ^ 0x0F;
					bx_202 = bx_202 + dx_183;
					byte bl_215;
					*blOut = (byte) bx_202;
					ax_197 = ax_212;
					byte al_228;
					*alOut = (byte) ax_212;
					di_182 = di_182 + 0x0001 + 0x0001;
					cx_126 = cx_126 - 0x0001;
				} while (cx_126 != 0x0000);
				dl_184 = dl_184 - 0x03;
				dx_183 = DPB(dx_183, dl_184, 0, 8);
			} while (dl_184 != 0x00);
		}
		word16 di_149;
		*diOut = di;
	}
	return dx;
}

byte fn0C00_0505(byte al, byte ah)
{
	__outb(0x0388, al);
	word16 cx_13 = 0x0006;
	do
	{
		__inb(0x0388);
		cx_13 = cx_13 - 0x0001;
	} while (cx_13 != 0x0000);
	__outb(0x0389, ah);
	word16 cx_27 = DPB(cx_13, 0x23, 0, 8);
	do
	{
		__inb(0x0388);
		cx_27 = cx_27 - 0x0001;
	} while (cx_27 != 0x0000);
	return (byte) ax;
}

word16 fn0C00_0949(word16 cx, word16 si, word16 di, selector es, selector ds, ptr16 diOut, ptr16 alOut, ptr16 blOut)
{
	*diOut = di;
	*blOut = bl;
	word16 dx_136 = di;
	word16 ax_101 = 0x0000;
	byte ah_22 = 0x00;
	do
	{
		byte al_32 = Mem0[ds:si + 0x0000:byte];
		*alOut = al_32;
		ax_101 = DPB(ax_101, al_32, 0, 8);
		si = si + 0x0001;
		if (al_32 >=u 0x20)
		{
			Mem68[es:di + 0x0000:word16] = ax_101;
			*diOut = di + 0x0002;
			goto l0C00_0954;
		}
		if (al_32 <u 0x10)
		{
			ah_22 = ah_22 & 0xF0 | al_32;
			ax_101 = DPB(ax_101, ah_22, 8, 8);
			goto l0C00_0954;
		}
		if (al_32 != 0x18)
			if (al_32 <u 0x18)
			{
				byte al_86 = (al_32 - 0x10) * 0x02 * 0x02 * 0x02;
				ah_22 = ah_22 & 0x8F | al_86 * 0x02;
				byte al_87;
				*alOut = al_86 * 0x02;
				ax_101 = DPB(ax_101, ah_22, 8, 8);
				goto l0C00_0954;
			}
			else
			{
				word16 bx_103 = cx;
				byte bl_95;
				*blOut = (byte) cx;
				si = si + 0x0001;
				word16 cx_99 = DPB(cx, Mem0[ds:si + 0x0000:byte], 0, 8);
				byte al_100;
				*alOut = 0x20;
				ax_101 = DPB(ax_101, 0x20, 0, 8);
				if (al_32 != 0x19)
				{
					byte al_130 = Mem0[ds:si + 0x0001:byte];
					*alOut = al_130;
					bx_103 = cx - 0x0001;
					ax_101 = DPB(ax_101, al_130, 0, 8);
					si = si + 0x0002;
					byte bl_134;
					*blOut = (byte) bx_103;
				}
				word16 cx_110 = DPB(cx_99, 0x00, 8, 8) + 0x0001;
				while (cx_110 != 0x0000)
				{
					Mem118[es:di + 0x0000:word16] = ax_101;
					*diOut = di + 0x0002;
					cx_110 = cx_110 - 0x0001;
				}
				word16 cx_124 = bx_103 - 0x0001;
				cx = cx_124 - 0x0001;
				if (cx_124 != 0x0000 && cx_124 != 0x0001)
					goto l0C00_094E;
			}
		dx_136 = dx_136 + 0x00A0;
		*diOut = dx_136;
l0C00_0954:
		cx = cx - 0x0001;
	} while (cx != 0x0000);
l0C00_0956:
	return si;
}

word16 fn0C00_0EF2(word16 cx, word16 si, word16 di, byte bl, selector es, selector ds, ptr16 diOut, ptr16 clOut)
{
	*diOut = di;
	*clOut = cl;
	if (cx != 0x0000)
		do
		{
			word16 ax_36 = Mem0[ds:si + 0x0000:word16];
			Mem44[es:di + 0x0000:word16] = DPB(ax_36, SLICE(ax_36, byte, 8) | bl, 8, 8);
			cx = cx - 0x0001;
			si = si + 0x0002;
			di = di + 0x0002;
			*diOut = di;
			byte cl_48;
			*clOut = (byte) cx;
		} while (cx != 0x0000);
	return si;
}

