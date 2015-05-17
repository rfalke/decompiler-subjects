// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_269/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte Eq_15::*bp, Eq_15 * es, Eq_34 * ds)
{
	byte Eq_15::*di_2 = Eq_15::a0204;
	word16 cx_10 = 0xFA00;
	while (cx_10 != 0x0000)
	{
		es->*di_2 = 0x10;
		di_2 = di_2 + 1;
		cx_10 = cx_10 - 0x0001;
	}
	__syscall(0x10);
	bios_video_set_mode(0x13);
	do
	{
		Eq_25 Eq_34::*di_39 = (word16) (ds->w01FE *u 0x0140) + ds->w01FC + 0x0204;
		Eq_61 bx_41 = 0x01DE;
		do
		{
			byte dh_54 = 0x08;
			word16 si_58 = (word16) Mem0[ds:bx_41 + 0x0000:byte] << 0x0003;
			do
			{
				Eq_28 dl_69 = 0x80;
				do
				{
					if ((bp[si_58] & dl_69) != 0x00)
					{
						(ds->*di_39).w0000 = 0x1F1F;
						(ds->*di_39).w0140 = 0x1F1F;
					}
					di_39 = PTRADD(di_39,2);
					dl_69 = dl_69 >>u 0x01;
				} while (dl_69 != 0x00);
				si_58 = si_58 + 0x0001;
				di_39 = di_39 + 1;
				dh_54 = dh_54 - 0x01;
			} while (dh_54 != 0x00);
			di_39 = di_39 - 0x1180;
			bx_41 = bx_41 + 0x0001;
		} while (bx_41 <u 0xFE2B);
		if (ds->w01FC == 0x00A0)
			ds->w0200 = 0xFFFF;
		else if (ds->w01FC == 0x0000)
			ds->w0200 = 0x0001;
		ds->w01FC = ds->w01FC + ds->w0200;
		if (ds->w01FE == 0x00B8)
			ds->w0202 = 0xFFFF;
		else if (ds->w01FE == 0x0000)
			ds->w0202 = 0x0001;
		ds->w01FE = ds->w01FE + ds->w0202;
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		byte Eq_139::*di_121 = Eq_139::a0000;
		Eq_119 Eq_34::*si_124 = Eq_34::a0204;
		word16 cx_125 = 0xFA00;
		do
		{
			byte al_132 = (ds->*si_124).b0000;
			0xA000->*di_121 = al_132;
			si_124 = si_124 + 1;
			di_121 = di_121 + 1;
			if (al_132 != 0x10)
				al_132 = al_132 - 0x01;
			(ds->*si_124).b0000 = al_132;
			cx_125 = cx_125 - 0x0001;
		} while (cx_125 != 0x0000);
	} while (__inb(0x60) != 0x01);
	bios_video_set_mode(0x03);
	msdos_display_string(ds, 0x01E7);
	return;
}

