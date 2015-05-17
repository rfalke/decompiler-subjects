// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_219/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_26 * ds)
{
	bios_video_set_mode(0x13);
	__outb(0x03C8, 0x00);
	byte al_12 = 0x00;
	do
	{
		__outb(0x03C9, al_12);
		__outb(0x03C9, al_12);
		__outb(0x03C9, al_12);
		al_12 = al_12 + 0x01;
	} while (al_12 != 0x00);
	do
	{
		ds->t01ED = ds->t01ED + 1;
		ds->w01DF = 0x0000;
		byte Eq_114::*di_36 = &Eq_114::b0000;
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
		do
		{
			ds->t01F9 = ds->t01D5 / (real64) ds->w01DF;
			ds->t01F5 = ds->t01F9 * ds->t01CD - ds->t01ED;
			ds->t01F1 = ds->t01F9 * ds->t01D1 + ds->t01ED;
			ds->w01DD = 0x0000;
			do
			{
				ds->dw01E1 = (int32) ds->t01F1;
				ds->dw01E5 = (int32) ds->t01F5;
				ds->dw01E9 = (ds->dw01E1 ^ ds->dw01E5) & 0x000000FF;
				ds->dw01E9 = (int32) ((real64) ds->dw01E9 * (real64) ds->w01DF / ds->t01D9);
				0xA000->*di_36 = (byte) ((word16) ds->dw01E9 >>u 0x0002);
				ds->t01F1 = ds->t01F1 + ds->t01F9;
				ds->w01DD = ds->w01DD + 0x0001;
				di_36 = di_36 + 1;
			} while (ds->w01DD <u 0x0140);
			ds->w01DF = ds->w01DF + 0x0001;
		} while (ds->w01DF <u 0x00C8);
	} while (__inb(0x60) != 0x01);
	return;
}

