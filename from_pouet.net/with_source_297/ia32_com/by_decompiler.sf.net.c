// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_297/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(segptr32 Eq_3::*bx, Eq_82 Eq_14::*si, Eq_67 di, byte dl, byte dh, Eq_3 * ds)
{
fn0C00_0100_entry:
l0C00_0100:
	int16 cx_28 = (word16) (ds->*bx)
	bios_video_set_mode(0x13)
	Eq_14 * dx_12 = DPB(dx, dh + 0x13, 8, 8)
	Eq_14 * dx_15 = DPB(dx, dh + 0x26, 8, 8)
	word16 dx_18 = 0x03C8
l0C00_0112:
	int16 bx_30 = cx_28 *s 0xFFFC
	Eq_40 bl_31 = (byte) bx_30
	Eq_27 al_181 = bl_31 >> 0x01
	branch bl_31 >> 0x01 == 0x00 l0C00_0127
l0C00_011B:
	branch bl_31 >> 0x01 >= 0x00 l0C00_011F
l0C00_011D:
	al_181 = ~(bl_31 >> 0x01);
l0C00_011F:
	__outb(dx_18, al_181)
	dx_18 = DPB(dx_18, 0xC9, 0, 8);
	al_181 = (byte) (bl_31 *u al_181 >>u 0x0007);
l0C00_0127:
	__outb(dx_18, al_181)
	uint16 ax_44 = al_181 *u al_181
	__outb(dx_18, (byte) (ax_44 >>u 0x0006))
	cx_28 = cx_28 - 0x0001;
	branch cx_28 != 0x0000 l0C00_0112
l0C00_0130:
	word16 ax_54 = DPB(ax_44 >>u 0x0006, 0x12, 8, 8)
l0C00_0132:
	Mem59[dx_12:di + 0x91B8:word16] = di
	Mem60[dx_15:di + 0x0000:word16] = ax_54
	di = di + 0x0002
	cx_28 = cx_28 - 0x0001;
	branch cx_28 != 0x0000 l0C00_0132
l0C00_0139:
	word16 bx_67 = __shld(bx_30, si, 0x08)
	word16 ax_80 = __aam(Mem60[dx_12:(uint16) (byte) (di *s 0x0003 - bx_67 + DPB(bx_67, (dx_12->*si).b0001, 0, 8) >>u 0x000C) + 0x01F0:byte])
	word16 ax_84 = DPB(ax_80, __ror((byte) ax_80, 0x02), 0, 8)
	Eq_109 ax_90 = (dx_15->*si).t0000
	uint16 dx_94 = SLICE(ax_90 *u ax_90, word16, 16)
	int16 dx_99 = SLICE((dx_12->*si).t0000 *u dx_94, word16, 16)
	Eq_122 cl_128 = (byte) (ax_84 | 0x2020)
	int16 bp_113 = dx_99 *s 0x0003 - SLICE((ax_84 | 0x2020) *u ax_90, word16, 16)
	int16 ax_115 = SLICE((dx_12->*si).t0000 *s 0xFFFF *u DPB(dx_94, 0x0A, 8, 8), word16, 16) - dx_99 *s 0x0003
	Eq_14 * Eq_177::*sp_122 = fp - 0x0006
l0C00_0179:
	Eq_14 * ds_135 = ss->*sp_122
	(ds_135->*si).t0000 = __xadd((ds_135->*si).t0000, bp_113);
	sp_122 = sp_122 + 1;
	int16 ax_138 = bp_113
	bp_113 = ax_115;
	Eq_151 bx_143 = 0x0140
l0C00_0181:
	ax_138 = ax_138 - (Mem145[ds_135:bx_143 + si:word16] >>u 0x0002)
	bx_143 = -bx_143;
	branch bx_143 < 0x0000 l0C00_0181
l0C00_018C:
	bx_143 = bx_143 >>u 0x0007;
	branch bx_143 >>u 0x0007 != 0x0000 l0C00_0181
l0C00_0191:
	ax_115 = ax_138 >> cl_128;
	(ds_135->*si).t0000 = (ds_135->*si).t0000 - ax_115;
	cl_128 = cl_128 >>u 0x06;
	branch cl_128 <u 0x00 l0C00_0179
l0C00_019A:
	__shrd((ds_135->*si).t0000, ss->*sp_122, 0x0A)
fn0C00_0100_exit:
}

