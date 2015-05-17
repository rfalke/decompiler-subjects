// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_145/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 ax, word16 cx, word16 Eq_44::*di, Eq_44 * es, Eq_20 * ds)
{
fn0C00_0100_entry:
l0C00_0100:
	Eq_2 Eq_20::*si_2 = Eq_20::a017A
l0C00_0109:
	(ds->*si_2).dw0000 = (ds->*si_2).dw0000 & 0xFF1F1F1F;
	cx = cx - 0x0001;
	branch cx != 0x0000 l0C00_0113
l0C00_010E:
	(ds->*si_2).dw0000 = (ds->*si_2).dw0000 - 0xFF1F1F1F;
	cx = DPB(cx, 0x09, 0, 8);
l0C00_0113:
	__outw(0x1F1F, ax)
	__outb(0x1F1F, al)
	word16 si_23 = &si_2->dw0000
	si_2 = si_23 + 0x0001;
	branch si_23 + 0x0001 <u fp l0C00_0109
l0C00_0119:
	es->*di = ax;
	bios_video_set_mode(0x13)
	int8 Eq_85::*di_127 = di + 1
	word16 si_131 = 0x00C7
l0C00_0125:
	word16 cx_128 = 0x0140
l0C00_0128:
	Eq_67 ax_176 = 0x00A0 - cx_128
	branch ax_176 >= 0x0000 l0C00_0131
l0C00_012F:
	ax_176 = -ax_176;
l0C00_0131:
	int16 ax_93 = si_131 - 0x0064
	int32 dx_ax_94 = ax_93 *s ax_93
	word16 dx_100 = SLICE(dx_ax_94, word16, 16)
	word16 bp_98 = (word16) (ax_176 *u ax_176) + (word16) dx_ax_94
l0C00_013C:
	dx_100 = dx_100 - 0x0001;
	uint8 dl_104 = (byte) dx_100
	branch dl_104 *u dl_104 - bp_98 >u 0x0000 l0C00_013C
l0C00_0145:
	int8 al_115 = (byte) dx_100
	branch al_115 < 0x64 l0C00_014C
l0C00_014B:
	al_115 = (byte) ax_176;
l0C00_014C:
	0xA000->*di_127 = al_115;
	di_127 = di_127 + 1;
	cx_128 = cx_128 - 0x0001;
	branch cx_128 != 0x0000 l0C00_0128
l0C00_014F:
	si_131 = si_131 - 0x0001;
	branch si_131 != 0x0000 l0C00_0125
l0C00_0152:
	word16 cx_135 = DPB(cx_128, 0x02, 8, 8)
l0C00_0157:
	byte al_139 = __inb(0x03DA)
	branch (al_139 & 0x08) == 0x00 l0C00_0157
l0C00_015C:
	__outb(0x03C8, al_139 & 0x08)
l0C00_0161:
	branch cx_135 == 0x0000 l0C00_0163
l0C00_0161_1:
	__outb(0x03C9, al_139 & 0x08)
	cx_135 = cx_135 - 0x0001;
	goto l0C00_0161
l0C00_0163:
fn0C00_0100_exit:
}

