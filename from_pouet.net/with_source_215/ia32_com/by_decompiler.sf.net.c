// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_215/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_24 * ds)
{
	bios_video_set_mode(0x13);
	do
	{
		word16 ax_34 = (word16) (ds->w01BE *u ds->w01BC);
		ds->w01BC = ax_34 + 0x006D & 0x7FFF;
		Eq_7 Eq_11::*bp_44 = &Eq_11::t01C0;
		do
		{
			bp_44 = bp_109 + 1;
			Eq_7 Eq_11::*bp_109 = bp_44;
		} while ((ss->*bp_109).w0000 - (ax_34 + 0x006D & 0x7FFF) < 0x0000);
		int32 ebx_62 = (word32) (ds->dw01F0 *s (int32) (ss->*bp_44).w0000) + (word32) (ds->dw01F4 *s (int32) (ss->*bp_44).w0000);
		int32 ecx_76 = ((word32) (ds->dw01F0 *s (int32) (ss->*bp_44).w0000) + (word32) (ds->dw01F4 *s (int32) (ss->*bp_44).w0000) >> 0x0000000D) + (int32) (ss->*bp_44).w0000;
		ds->dw01F0 = ebx_62 >> 0x0000000D;
		ds->dw01F4 = ecx_76;
		(0xA000->*((word16) ((word32) ((ebx_62 >> 0x0000000D) *s ds->dw01F8) >> 0x0000000D) + (word16) ((word16) ((word32) (ecx_76 *s ds->dw01F8) >> 0x0000000D) *s 0xFEC0))).bFFFFF960 = 0x02;
		do
			;
		while ((__inb(0x03DA) & 0x08) == 0x00);
	} while (__inb(0x60) != 0x01);
	bios_video_set_mode(0x03);
	msdos_terminate_program20();
}

