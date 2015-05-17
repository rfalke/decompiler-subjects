// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_336/ia32_mz/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0800_0000(Eq_6 * es)
{
fn0800_0000_entry:
l0800_0000:
	__syscall(0x21)
	byte al_107 = es->b0080
	0x0810->w020F = 0x0010;
	Eq_10 * ds_3 = 0x0810
	branch true l0800_0023
l0800_0019:
	msdos_display_string(0x0810, 0x0080)
	goto l0800_00E9
l0800_0023:
	Eq_16 Eq_10::*bx_40 = Eq_10::a0200
	byte Eq_6::*di_41 = &Eq_6::b0080
l0800_0029:
	di_41 = di_41 + 1;
	branch es->*di_41 != 0x20 l0800_0029
l0800_0030:
	byte Eq_6::*di_46 = di_41 + 1
	word16 cx_48 = 0x0810->w020F
l0800_0035:
	(0x0810->*bx_40).b0000 = es->*di_46;
	bx_40 = bx_40 + 1;
	di_46 = di_46 + 1;
	cx_48 = cx_48 - 0x0001;
	branch cx_48 != 0x0000 l0800_0035
l0800_0040:
	(0x0810->*bx_40).b01FF = 0x00;
	uint16 ax_101
	branch msdos_open_file(0810:0200, 0x00, out ax_101) l0800_0055
l0800_0052:
	goto l0800_00EE
l0800_0055:
	0x0810->w020D = ax_101;
	ds_3 = 0x0872;
	branch msdos_read_file(ax_101, 0xFFFF, 0872:0000, out ax_101) l0800_006F
l0800_006C:
	goto l0800_00EE
l0800_006F:
	ds_3 = 0x0810;
	ax_101 = 0x3E10;
	branch msdos_close_file(0x0810->w020D) l0800_0081
l0800_007E:
	goto l0800_00EE
l0800_0081:
	al_107 = 0x72;
	branch 0x0872->b0000 == 0xEB || 0x0872->b0000 == 0xE9 l0800_009F
	goto l0800_0095
l0800_008F:
l0800_0095:
	msdos_display_string(0x0810, 0x00A0)
	goto l0800_00E9
l0800_009F:
	bios_video_set_mode(0x03)
	msdos_display_string(0x0810, 0x0000)
l0800_00E9:
	msdos_terminate(al_107)
	goto fn0800_0000_exit
l0800_00EE:
	uint32 dx_ax_75 = ax_101 *u 0x0020
	msdos_display_string(ds_3, (word16) dx_ax_75 + 0x00C0)
	al_107 = (byte) dx_ax_75;
	goto l0800_00E9
fn0800_0000_exit:
}

