// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_301/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_7 * ds)
{
	bios_video_set_mode(0x13);
	do
	{
		word16 Eq_25::*di_24 = Eq_25::a0000;
		word16 cx_27 = 0x7D00;
		while (cx_27 != 0x0000)
		{
			0x9000->*di_24 = 0x0000;
			di_24 = di_24 + 1;
			cx_27 = cx_27 - 0x0001;
		}
		ds->t01ED = ds->t01F1;
		ds->w0205 = 0x000A;
		ds->t01F9 = ds->t01F9 + ds->t01F5;
		word16 cx_125 = 0x0006;
		do
		{
			ds->w020B = 0x0000;
			int16 cx_59 = ds->w0205;
			ui16 ax_56 = ds->w0209 - ds->w0205;
			int16 cx_60 = cx_59 *s 0x0002;
			byte cl_61 = (byte) (cx_59 *s 0x0002);
			do
			{
				word16 bx_67 = ds->w0207 - ds->w020B;
				SEQ(0x9000, bx_67)[ax_56 * 0x0140] = cl_61;
				SEQ(0x9000, bx_67 + Mem71[ds:0x020B:word16] + Mem71[ds:0x020B:word16])[ax_56 * 0x0140] = cl_61;
				ds->w020B = ds->w020B + 0x0001;
				cx_60 = cx_60 - 0x0001;
				ax_56 = ax_56 + 0x0001;
				cl_61 = (byte) cx_60;
			} while (cx_60 != 0x0000);
			word16 cx_106 = ds->w020B *s 0x0002 + 0x0001;
			word16 bx_104 = ds->w0207 + ds->w020B;
			byte cl_107 = (byte) cx_106;
			do
			{
				SEQ(0x9000, bx_104)[ax_56 * 0x0140] = cl_107;
				cx_106 = cx_106 - 0x0001;
				bx_104 = bx_104 - 0x0001;
				cl_107 = (byte) cx_106;
			} while (cx_106 != 0x0000);
			ds->t01ED = ds->t01ED + ds->t01F1;
			ds->w0205 = ds->w0205 + 0x0004;
			Eq_16 rLoc1_115 = ds->t01F9;
			Eq_114 rLoc1_117 = cos(rLoc1_115);
			ds->w0209 = (int16) (sin(rLoc1_115) * ds->t01ED + ds->t01FD);
			ds->w0207 = (int16) (rLoc1_117 * ds->t01ED + ds->t0201);
			cx_125 = cx_125 - 0x0001;
		} while (cx_125 != 0x0000);
		Mem132[ss:fp - 0x0004:word16] = 0xA000;
		Mem135[ss:fp - 0x0006:word16] = 0x9000;
		word16 Eq_184::*di_140 = Eq_184::a0000;
		word16 Eq_25::*si_141 = Eq_25::a0000;
		word16 cx_146 = 0x7D00;
		while (cx_146 != 0x0000)
		{
			0xA000->*di_140 = 0x9000->*si_141;
			si_141 = si_141 + 1;
			di_140 = di_140 + 1;
			cx_146 = cx_146 - 0x0001;
		}
		byte al_160;
		bios_kbd_check_keystroke(out al_160);
	} while (0x0000 == 0x0000);
	return;
}

