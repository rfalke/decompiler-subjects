// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_286/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte ah, byte ch, byte bh, Eq_124 * es, Eq_121 * ds)
{
	bios_video_set_mode(0x13);
	__outb(0x03C8, 0x00);
	uint16 ax_108 = DPB(ax, 0x00, 0, 8);
	byte cl_12 = 0x40;
	word16 cx_14 = DPB(cx, 0x40, 0, 8);
	do
	{
		__outb(0x03C9, 0x40 - cl_12 >>u 0x01);
		__outb(0x03C9, 0x00);
		__outb(0x03C9, 0x00);
		cx_14 = cx_14 - 0x0001;
		ax_108 = DPB(ax_108, 0x00, 0, 8);
		cl_12 = (byte) cx_14;
	} while (cx_14 != 0x0000);
	byte cl_31 = 0x40;
	word16 cx_32 = DPB(cx_14, 0x40, 0, 8);
	do
	{
		uint8 al_38 = 0x40 - cl_31;
		__outb(0x03C9, (al_38 >>u 0x01) + 0x1F);
		__outb(0x03C9, (byte) DPB(ax_108, al_38 >>u 0x01, 0, 8));
		__outb(0x03C9, 0x00);
		cx_32 = cx_32 - 0x0001;
		ax_108 = DPB(ax_108, 0x00, 0, 8);
		cl_31 = (byte) cx_32;
	} while (cx_32 != 0x0000);
	byte cl_57 = 0x40;
	word16 cx_58 = DPB(cx_32, 0x40, 0, 8);
	do
	{
		__outb(0x03C9, 0x3F);
		__outb(0x03C9, (0x3F - cl_57 >>u 0x01) + 0x1F);
		__outb(0x03C9, 0x00);
		cx_58 = cx_58 - 0x0001;
		ax_108 = DPB(ax_108, 0x00, 0, 8);
		cl_57 = (byte) cx_58;
	} while (cx_58 != 0x0000);
	uint16 Eq_124::*di_76 = Eq_124::a0200;
	word16 cx_77 = 0x3F20;
	while (cx_77 != 0x0000)
	{
		es->*di_76 = ax_108;
		di_76 = di_76 + 1;
		cx_77 = cx_77 - 0x0001;
	}
	byte ch_91;
	byte dh_92;
	byte dl_93;
	msdos_get_system_time(out ch_91, out dh_92, out dl_93);
	ds->w8040 = 0x03C9;
	while (true)
	{
		Eq_139 Eq_121::*si_111 = Eq_121::a0200;
		word16 cx_114 = 0x7D00;
		uint16 Eq_121::*di_121 = Eq_121::a0000;
		bx = DPB(bx, 0xA0, 0, 8);
		do
		{
			ax_108 = DPB(ax_108, (ds->*si_111).t0000, 8, 8);
			0xA000->*di_121 = ax_108;
			si_111 = si_111 + 1;
			di_121 = di_121 + 1;
			bx = bx - 0x0001;
			if (bx == 0x0000)
			{
				si_111 = si_111 - 0x00A0;
				bx.u0 = 0x0140;
			}
			cx_114 = cx_114 - 0x0001;
		} while (cx_114 != 0x0000);
		Mem154[ss:fp - 0x0004:word16] = ds;
		Mem161[ss:fp - 0x0002:word16] = 0x0200;
		Mem163[ss:fp - 0x0004:word16] = si_111;
		Mem169[ss:fp - 0x0006:word16] = 0x3E80;
		Eq_139 Eq_121::*di_158 = Eq_121::a0200;
		Eq_179 Eq_121::*si_164 = &si_111->t0000;
		word16 cx_165 = 0x3E80;
		uint16 ax_170 = 0x0000;
		do
		{
			si_164 = si_164 + 1;
			bx = DPB(bx, (ds->*si_164).b009F, 0, 8);
			uint16 ax_195 = DPB(ax_170, (ds->*si_164).b0000, 0, 8) + DPB(bx, (ds->*si_164).b0000, 0, 8) + DPB(bx, (ds->*si_164).b0000, 0, 8) + bx;
			ax_170 = ax_195 >>u 0x0002;
			Eq_146 al_198 = (byte) (ax_195 >>u 0x0002);
			if (ax_195 >>u 0x0002 != 0x0000)
			{
				ax_170 = (ax_195 >>u 0x0002) - 0x0001;
				al_198 = (byte) ((ax_195 >>u 0x0002) - 0x0001);
				if (ax_195 >>u 0x0002 != 0x0001)
				{
					ax_170 = (ax_195 >>u 0x0002) - 0x0002;
					al_198 = (byte) ((ax_195 >>u 0x0002) - 0x0002);
				}
			}
			(0xA000->*di_158).t0000 = al_198;
			di_158 = di_158 + 1;
			cx_165 = cx_165 - 0x0001;
		} while (cx_165 != 0x0000);
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		do
			byte al_220 = __inb(0x03DA);
		while ((al_220 & 0x08) != 0x00);
		word16 cx_225 = 0x3E80;
		Eq_256 Eq_121::*di_229 = &Eq_121::tFFFFA000;
		Eq_139 Eq_121::*si_231 = Eq_121::a0200;
		while (cx_225 != 0x0000)
		{
			(0xA000->*di_229).t0000 = (ds->*si_231).t0000;
			si_231 = si_231 + 1;
			di_229 = di_229 + 1;
			cx_225 = cx_225 - 0x0001;
		}
		word16 cx_246 = DPB(cx_225, 0x50, 0, 8);
		Mem248[ss:fp - 0x0002:word16] = cx_246;
		Eq_146 Eq_121::*si_249 = Eq_121::a7FA0;
		while (cx_246 != 0x0000)
		{
			Mem256[0xA000:di_229 + 0x0000:word16] = Mem248[ds:si_249 + 0x0000:word16];
			si_249 = si_249 + 1;
			di_229 = di_229 + 2;
			cx_246 = cx_246 - 0x0001;
		}
		byte al_266;
		bios_kbd_check_keystroke(out al_266);
		word16 cx_262 = 0x0200;
		if ((al_220 & 0x08) == 0x00)
			do
			{
				word16 ax_286 = ds->w8040;
				byte ah_288 = SLICE(ax_286, byte, 8);
				__rcr(ah_288, 0x01, false);
				byte al_287 = (byte) ax_286;
				__rcr(al_287, 0x01, (ah_288 & 0x02) != 0x00);
				word16 ax_304 = DPB(ax_286, __rcr(0x00, 0x01, (al_287 & 0x02) != 0x00), 0, 8) + ax_286;
				word16 ax_307 = DPB(ax_304, SLICE(ax_304, byte, 8) + 0x63, 8, 8);
				ds->w8040 = ax_307;
				uint16 bx_315 = DPB(bx, 0xA0, 0, 8);
				Eq_142 dx_316 = SEQ(0x0000, ax_307) % bx_315;
				uint16 ax_318 = SEQ(dx_316, ax_307) /u bx_315;
				uint16 ax_324 = DPB(ax_318, (byte) ax_318 | SLICE(ax_318, byte, 8), 0, 8);
				Mem328[ds:dx_316 + 0x7FA0:byte] = (byte) (ax_324 >>u 0x0001);
				bx = dx_316;
				ax_108 = ax_324 >>u 0x0001;
				cx_262 = cx_262 - 0x0001;
			} while (cx_262 != 0x0000);
		ax_108 = 0x0000;
		while (cx_262 != 0x0000)
		{
			(0xA000->*di_229).t0000.u1 = 0x0000;
			di_229 = di_229 + 2;
			cx_262 = cx_262 - 0x0001;
		}
		word16 cx_348 = DPB(cx_262, ds->b01FF, 0, 8);
		ds->b01FF = ds->b01FF - 0x01;
		if (cx_348 == 0x0001)
		{
			bios_video_set_mode(0x03);
			msdos_terminate_program20();
		}
l0C00_01E8:
	}
}

