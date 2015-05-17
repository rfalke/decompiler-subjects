// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_263/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(int16 bp, Eq_44 Eq_84::*di, byte bl, byte ch, Eq_9 * ds)
{
	bios_video_set_mode(0x13);
	msdos_display_string(ds, 0x01AC);
	msdos_set_interrupt_vector(0x1C, &ds->w0150);
	__outb(0x0331, 0x3F);
	Eq_26 sp_123 = fp;
	byte al_21 = (byte) bx;
	word16 cx_108 = DPB(cx, 0x18, 0, 8);
	do
	{
		__outb(0x03C9, al_21);
		cx_108 = cx_108 - 0x0001;
	} while (cx_108 != 0x0000);
	do
	{
		uint16 dx_52 = SEQ(0x0000, di) % ds->w0150;
		uint16 ax_54 = SEQ(dx_52, di) /u ds->w0150;
		sp_123 = sp_123 - 0x0002;
		Mem63[ss:sp_123 + 0x0000:word16] = dx_52 - 0x00A0;
		int16 ax_119 = ax_54 + 0x0001;
		int16 dx_58 = dx_52 - 0x00A0;
		do
			dx_58 = -dx_58;
		while (dx_58 < 0x0000);
		if (dx_58 >= ax_54 + 0x0001)
		{
			di = di + 1;
			ax_119 = Mem63[ss:sp_123 + 0x0000:word16];
			sp_123 = sp_123 + 0x0002;
			cx_108 = cx_108 - 0x0001;
			if (cx_108 != 0x0000)
				continue;
		}
l0C00_0140:
		word16 ax_83 = DPB(bp, 0x10, 8, 8);
		int16 dx_85 = (word32) ax_83 % ax_119;
		word16 ax_95 = (word16) (word32) Mem63[ss:sp_123 + 0x0000:word16];
		(0xA000->*di).t0000 = (0xA000->*((-(SEQ(dx_85, ax_83) / ax_119) & 0x003F) *s 0x0140 + SEQ(SEQ(dx_85, ax_95 *s 0x0032) % ax_119, ax_95 *s 0x0032) / ax_119)).b0030 << 0x01;
		bp = ax_119;
		sp_123 = sp_123 + 0x0002;
		di = di + 1;
		cx_108 = cx_108 - 0x0001;
		if (cx_108 != 0x0000)
			continue;
		ds->w0147 = ds->w0147 - 0x0001;
	} while (__inw(0x60) != 0x0001);
	return;
}

