// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_258/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, word16 si, selector ds)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	word16 ax_16 = 0x0086
l0C00_010C:
	cx = cx - 0x0001
	fn0C00_01E3()
	ax_16 = ax_214 - 0x0001
	word16 di_18 = 0x0000
	byte ch_22 = SLICE(cx, byte, 8)
	word16 sp_136 = fp
	byte al_31 = (byte) ax_16
l0C00_0115:
	branch cx == 0x0000 l0C00_0117
l0C00_0115_1:
	Mem40[0xA000:di_18 + 0x0000:byte] = al_31
	cx = cx - 0x0001
	di_18 = di_18 + 0x0001
	ch_22 = SLICE(cx, byte, 8) (alias)
	goto l0C00_0115
l0C00_0117:
	word16 ax_214 = ax_16
	branch ax_214 != 0x0001 l0C00_010C
l0C00_0119:
	word16 dx_45 = 0x0001
	word16 bx_49 = 0x0140
	byte cl_51 = 0x09
l0C00_0121:
	branch (cl_51 & 0x0D) == 0x00 || P l0C00_012B
	goto l0C00_0128
l0C00_0126:
l0C00_0128:
	si = 0x01EC
l0C00_012B:
	word16 cx_71 = fn0C00_01A1(dx_45, bx_49, 0xA000, si, ch_22, ds, out dx_45, out bx_49, out si, out ds)
	sp_136 = sp_136 + 0xFFFE
	cl_51 = (byte) (cx_71 - 0x0001) (alias)
	ch_22 = SLICE(cx_71 - 0x0001, byte, 8) (alias)
	branch cx_71 != 0x0001 l0C00_0121
l0C00_0130:
	fn0C00_01E3()
	Mem88[ds:0x0200:word32] = 0xDEADF0AE
	Mem97[0xA000:0x00F3:byte] = 0x1E
	word16 bx_108 = 0x0000
l0C00_0154:
	bx_108 = bx_108 - 0x0001
	branch Mem97[0xA000:bx_108 + 0x0000:byte] == 0x00 l0C00_0188
l0C00_015C:
	word16 bx_164
	word16 v25_143 = Mem97[0xA000:bx_108 + 0x0000:byte]
	Mem144[0xA000:bx_108 + 0x0000:byte] = 0x00
	byte al_145 = v25_143
	word16 ax_146 = DPB(0x0100, v25_143, 0, 8)
	branch v25_143 >=u 0x20 l0C00_019A
l0C00_0164:
	bx_164 = bx_108 + 0x0140
	branch ((byte) (bx_108 + 0x0140) & 0xC0) != 0x00 || P l0C00_0172
	goto l0C00_0171
l0C00_016D:
l0C00_0171:
	bx_164 = bx_108 + 0x0141
l0C00_0172:
	branch Mem144[0xA000:bx_164 + 0x0000:byte] <u 0x01 l0C00_0184
l0C00_0176:
	bx_164 = bx_164 + 0x0001
	branch Mem144[0xA000:bx_164 + 0x0000:byte] <u 0x01 l0C00_0184
l0C00_017B:
	bx_164 = bx_164 - 0x0002
	branch Mem144[0xA000:bx_164 - 0x0002:byte] <u 0x01 l0C00_0184
l0C00_0181:
l0C00_0184:
	Mem165[0xA000:bx_164 + 0x0000:byte] = al_145
l0C00_0188:
	branch bx_108 != 0x0000 l0C00_0154
l0C00_018C:
	word16 sp_131 = sp_136 - 0x0002
	Mem133[ss:sp_131 + 0x0000:word16] = cs
	ds = Mem133[ss:sp_131 + 0x0000:selector]
	byte al_137
	bios_kbd_check_keystroke(out al_137)
	sp_136 = sp_131 + 0x0002
	branch bx_108 == 0x0000 l0C00_0130
l0C00_0192:
	bios_video_set_mode(0x03)
	byte al_141
	bios_kbd_get_keystroke(out al_141)
	return
l0C00_019A:
	branch v25_143 != 0x20 l0C00_019E
l0C00_019C:
	ax_146 = DPB(ax_146, v25_143 + 0x18, 0, 8) (alias)
l0C00_019E:
	al_145 = (byte) (ax_146 - 0x0001) (alias)
	bx_164 = bx_108
	goto l0C00_0184
fn0C00_0100_exit:
}

word16 fn0C00_01A1(word16 dx, word16 bx, word16 bp, word16 si, byte ch, selector ds, ptr16 dxOut, ptr16 bxOut, ptr16 siOut, ptr16 dsOut)
{
	Mem6[ds:si + 0x0000:word16] = Mem0[ds:si + 0x0000:word16] + 0x0064;
	word16 dx_20;
	word16 bx_21;
	word16 si_22;
	word16 di_23;
	selector ds_24;
	byte ch_26 = SLICE(fn0C00_01AB(dx, bx, bp, si + 0x0002, Mem6[ds:si + 0x0000:word16], ch, ds, out dx_20, out bx_21, out si_22, out di_23, out ds_24), byte, 8);
	word16 si_29 = Mem6[ss:fp + 0xFFFC:word16];
	word16 dx_31;
	word16 bx_32;
	word16 si_33;
	word16 di_34;
	selector ds_35;
	return fn0C00_01AB(dx_20, bx_21, bp, si_29, di_23, ch_26, ds_24, out dx_31, out bx_32, out si_33, out di_34, out ds_35);
}

word16 fn0C00_01AB(word16 dx, word16 bx, word16 bp, word16 si, word16 di, byte ch, selector ds, ptr16 dxOut, ptr16 bxOut, ptr16 siOut, ptr16 diOut, ptr16 dsOut)
{
	word16 dx_9;
	word16 bx_10;
	word16 si_11;
	word16 di_12;
	selector ds_13;
	byte ch_15 = SLICE(fn0C00_01AE(dx, bx, bp, si, di, ch, ds, out dx_9, out bx_10, out si_11, out di_12, out ds_13), byte, 8);
	word16 dx_16;
	word16 bx_17;
	word16 si_18;
	word16 di_19;
	selector ds_20;
	return fn0C00_01AE(dx_9, bx_10, bp, si_11, di_12, ch_15, ds_13, out dx_16, out bx_17, out si_18, out di_19, out ds_20);
}

word16 fn0C00_01AE(word16 dx, word16 bx, word16 bp, word16 si, word16 di, byte ch, selector ds, ptr16 dxOut, ptr16 bxOut, ptr16 siOut, ptr16 diOut, ptr16 dsOut)
{
	byte al_8 = Mem0[ds:si + 0x0000:byte];
	word16 si_9;
	*siOut = si + 0x0001;
	word16 cx_13 = DPB(cx, al_8, 0, 8);
	if (al_8 == 0x3C)
		cx_13 = DPB(cx_13, ch + 0x01, 8, 8);
	word16 di_28 = fn0C00_01DC(dx, bx, fn0C00_01DE(dx, di, 0x20, bp), 0x20, 0x35, bp);
	word16 sp_29 = fp + 0xFFFC;
	do
	{
		word16 di_33 = di_28 + bx;
		Mem34[bp:bx + di_33:byte] = 0x34;
		di_28 = fn0C00_01DC(dx, bx, di_33 - bx, 0x20, 0x35, bp);
		sp_29 = sp_29 + 0xFFFE;
		cx_13 = cx_13 - 0x0001;
	} while (cx_13 != 0x0000);
	word16 di_42 = fn0C00_01DC(dx, bx, di_28, 0x20, 0x35, bp);
	*diOut = di_42;
	Mem44[bp:di_42 + 0x0000:byte] = 0x20;
	Mem53[ss:sp_29 - 0x0004:word16] = cs;
	word16 dx_46;
	*dxOut = bx;
	word16 bx_48;
	*bxOut = -dx;
	selector ds_55;
	*dsOut = Mem53[ss:sp_29 - 0x0004:selector];
	return Mem53[ss:sp_29 - 0x0002:word16];
}

word16 fn0C00_01DC(word16 dx, word16 bx, word16 di, byte al, byte ah, selector ds)
{
	Mem3[ds:bx + di:byte] = ah;
	return fn0C00_01DE(dx, di, al, ds);
}

word16 fn0C00_01DE(word16 dx, word16 di, byte al, selector ds)
{
	Mem3[ds:di + 0x0000:byte] = al;
	return di + dx;
}

void fn0C00_01E3()
{
	do
		;
	while ((__inb(0x03DA) & 0x08) == 0x00);
	return;
}

