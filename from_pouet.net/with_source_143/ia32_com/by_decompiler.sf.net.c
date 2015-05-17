// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_143/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 cx)
{
	bios_video_set_mode(0x13);
	do
	{
		__outb(0x03C8, cl);
		__outb(0x03C9, 0x00);
		__outb(0x03C9, 0x00);
		__outb(0x03C9, cl);
		cx = cx - 0x0001;
		cl = (byte) cx;
	} while (cx != 0x0000);
	do
	{
		Eq_31 Eq_30::*bp_41 = &Eq_30::t0320;
		do
		{
			SEQ(0xA000, Mem0[ss:bp_41 + 0x01D3:word16])[(word32) (ss->*bp_41).w01D1 * 0x0140] = 0xFF;
			(ss->*bp_41).w01D3 = (ss->*bp_41).w01D3 + (int16) ((__inb(0x40) & 0x03) - 0x01);
			(ss->*bp_41).w01D1 = (ss->*bp_41).w01D1 + (int16) ((__inb(0x40) & 0x03) - 0x01);
			bp_41 = bp_41 - 0x0008;
		} while (bp_41 != &Eq_30::t0000);
		byte Eq_29::*si_65 = Eq_29::a0000;
		do
		{
			byte al_70 = 0xA000->*si_65;
			if (al_70 != 0x00)
				0xA000->*si_65 = al_70 - 0x01;
			si_65 = si_65 - 0x0001;
		} while (si_65 != Eq_29::a0000);
	} while ((__inb(0x60) & 0x01) == 0x00);
	bios_video_set_mode(0x03);
	return;
}

