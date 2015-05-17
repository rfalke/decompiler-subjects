// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_197/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx, Eq_27 * bx, byte ah, Eq_10 * es)
{
	byte Eq_10::*di_15 = Eq_10::a01E9;
	byte al_10 = 0x07;
	word16 ax_11 = DPB(ax, 0x07, 0, 8);
	do
	{
		es->*di_15 = al_10;
		ax_11 = ax_11 + 0x0001;
		di_15 = di_15 + 1;
		al_10 = (byte) ax_11;
		cx = cx - 0x0001;
	} while (cx != 0x0000);
	Eq_24 Eq_10::*di_24 = Eq_10::a01E2;
	Eq_26 Eq_46::*bx_119 = DPB(bx, 0x0A, 0, 8);
	int16 si_29 = bx->w046C;
	do
	{
		bx_119 = bx_119 - 0x0001;
		si_29 = si_29 *s 0x22E3;
		Eq_37 dx_44 = SEQ(0x0000, si_29) % bx_119;
		word16 v20_50 = Mem13[ss:dx_44 + 0x0212:byte];
		Mem51[ss:dx_44 + 0x0212:byte] = Mem13[cs:bx_119 + 0x0212:byte];
		(es->*di_24).t0000 = v20_50;
		di_24 = di_24 + 1;
	} while ((byte) bx_119 != 0x04);
	(es->*di_24).t0000.u0 = 0x24;
	fn0C00_018B(0x96, cs);
	word16 bp_107 = 0x0014;
	fn0C00_018B(0xDA, cs);
	__syscall(0x21);
	byte al_76 = cs->b01EA;
	while (al_76 != 0x00)
	{
		if (al_76 != 0x06)
			continue;
		bp_107 = bp_107 - 0x0001;
		if (bp_107 == 0x0000)
			break;
		byte Eq_46::*si_110 = Eq_46::a01E2;
		word16 dx_111 = 0x6030;
		byte dl_113 = 0x30;
		byte dh_114 = 0x60;
		cx = DPB(cx, 0x06, 0, 8);
		do
		{
			byte al_127 = cs->*si_110;
			si_110 = si_110 + 1;
			bx_119 = DPB(bx_119, 0x08, 0, 8);
			if (al_127 == Mem58[cs:bx_119 + si_110:byte])
			{
				dx_111 = dx_111 + 0x0001;
				dl_113 = (byte) dx_111;
				dh_114 = SLICE(dx_111, byte, 8);
				goto l0C00_014E;
			}
l0C00_014E:
			do
			{
				bx_119 = bx_119 - 0x0001;
				if (bx_119 == &Eq_46::t0000)
					goto l0C00_0159;
			} while (al_127 != (cs->*bx_119).b01EA);
			dh_114 = dh_114 + 0x01;
			dx_111 = DPB(dx_111, dh_114, 8, 8);
			cx = cx - 0x0001;
		} while (cx != 0x0000);
		if (dl_113 == 0x36)
		{
			fn0C00_018B(0xDE, cs);
			return;
		}
		msdos_write_console_char(dl_113);
		msdos_write_console_char(0x2F);
		msdos_write_console_char(dh_114 - dl_113);
		fn0C00_018B(0xDA, cs);
		__syscall(0x21);
		al_76 = cs->b01EA;
	}
	fn0C00_018B(0xE2, cs);
	return;
}

void fn0C00_018B(byte dl, Eq_46 * ds)
{
	msdos_display_string(ds, DPB(dx, 0x01, 8, 8));
	return;
}

