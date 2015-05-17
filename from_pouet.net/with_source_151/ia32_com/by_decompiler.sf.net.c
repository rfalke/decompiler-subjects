// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_151/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_19 * ds)
{
	bios_video_set_mode(0x13);
	int16 cx_15 = 0x798F;
	word16 di_14 = 0x0000;
	int16 si_10 = 0x0386;
	do
	{
		di_14 = di_14 + SLICE(cx_15 *s 0xFFD9, word16, 16);
		cx_15 = cx_15 + di_14;
		ds->a0386[si_10] = SLICE(cx_15, byte, 8);
		ds->a0386[si_10] = ds->a0386[si_10] + 0x86;
		si_10 = si_10 - 0x0001;
	} while (si_10 >= 0x0000);
	__outb(0x03C8, 0x01);
	word16 dx_136 = 0x03C9;
	byte dh_137 = 0x03;
	word16 cx_37 = 0x00FF;
	Eq_45 cl_39 = 0xFF;
	do
	{
		Eq_45 al_146 = cl_39;
		if (cl_39 >=u 0x20)
		{
			if (cl_39 >=u 0x40)
				al_146.u0 = 0x00;
			al_146 = -al_146;
		}
		__outb(0x03C9, al_146);
		__outb(0x03C9, Mem26[ds:(uint16) cl_39 + 0x0386:byte] >>u 0x02);
		__outb(0x03C9, Mem26[ds:(uint16) (cl_39 << 0x01) + 0x0386:byte] >>u 0x02);
		cx_37 = cx_37 - 0x0001;
		cl_39 = (byte) cx_37;
	} while (cx_37 != 0x0000);
	do
	{
		byte Eq_88::*di_116 = &Eq_88::b0000;
		byte dl_131 = 0xC8;
		word16 dx_132 = DPB(dx_136, 0xC8, 0, 8);
		do
		{
			byte Eq_19::*si_102 = DPB(dx_132, 0x04, 8, 8);
			byte ah_108 = SLICE(dx_132, byte, 8) + Mem26[ds:(uint16) ((byte) dx_132 + dh_137) + 0x0386:byte];
			word16 cx_112 = 0x0140;
			do
			{
				0xA000->*di_116 = ds->*si_102 + ah_108;
				si_102 = si_102 + 1;
				di_116 = di_116 + 1;
				cx_112 = cx_112 - 0x0001;
			} while (cx_112 != 0x0000);
			dl_131 = dl_131 - 0x01;
			dx_132 = DPB(dx_132, dl_131, 0, 8);
		} while (dl_131 != 0x00);
		byte al_140;
		bios_kbd_check_keystroke(out al_140);
		dx_136 = dx_132 - 0x0001;
		dh_137 = SLICE(dx_132 - 0x0001, byte, 8);
	} while (dx_132 == 0x0001);
	bios_video_set_mode(0x03);
	return;
}

