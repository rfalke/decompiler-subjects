// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_114/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word32 eax, word16 cx, word16 bp, word16 si, word16 di, byte bl, selector ds)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	word16 bx_11 = DPB(bx, 0xA0, 8, 8)
l0C00_0108:
	word32 dx_ax_26 = SEQ(dx, di)
	word16 ax_34 = SEQ(dx_ax_26 % 0x0140, di) /u 0x0140 + 0x0001
	word16 ax_39 = DPB(cx, 0x20, 8, 8)
	dx = (word32) ax_39 % ax_34
	word16 ax_43 = SEQ(dx, ax_39) /u ax_34
	word16 ax_45 = ax_43 + si
	word16 ax_54 = DPB(ax_45, Mem0[ds:((dx_ax_26 % 0x0140 - 0x00A0) *s ax_43 >>u 0x000C) + (uint16) ((byte) ax_45 & 0xF0):byte], 0, 8) ^ bp
	cx = ax_34
	byte al_55 = (byte) ax_54
	di_69 = di
l0C00_012C:
	word16 di_69
	byte al_70 = al_55 | 0x10
	Mem72[bx_11:di_69 + 0x0000:byte] = al_70
	word16 ax_71 = DPB(ax_54, al_70, 0, 8)
	byte al_76 = (byte) (ax_71 + 0x0001)
	di_69 = di_69 + 0x0001 - 0x0141
	al_55 = al_76 & 0x0F
	ax_54 = DPB(ax_71 + 0x0001, al_76 & 0x0F, 0, 8) (alias)
	branch (al_76 & 0x0F) != 0x00 l0C00_012C
l0C00_0138:
	di = di + 0x0001
	branch di != 0x0000 l0C00_0108
l0C00_013C:
	si = si + 0x0001
	branch si != 0x0000 l0C00_0108
l0C00_013F:
fn0C00_0100_exit:
}

