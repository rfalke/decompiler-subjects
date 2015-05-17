// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_146/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 bx, word16 si, word16 di, byte ch, Eq_69 * ds)
{
	bios_video_set_mode(0x13);
	word16 di_20 = di - 0x0001;
	do
	{
		word16 ax_23 = 0x0000;
		byte al_24 = 0x00;
		word16 cx_31 = DPB(cx, 0x3F, 0, 8);
		do
		{
			Mem37[0xA000:di_20 + 0x0000:byte] = al_24;
			ax_23 = ax_23 + 0x0001;
			int16 di_38 = di_20 + 0x0001;
			al_24 = (byte) ax_23;
			di_20 = di_38 + 0x0002;
			cx_31 = cx_31 - 0x0001;
		} while (cx_31 != 0x0000);
		cx = DPB(cx_31, 0xC0, 0, 8);
		do
		{
			Mem56[0xA000:di_20 + 0x0000:word16] = ax_23;
			di_20 = di_20 + 0x0002 + 0x0001;
			cx = cx - 0x0001;
		} while (cx != 0x0000);
		di_20 = di_38 + 0x0003;
	} while (di_38 >= 0x0003);
	word16 cx_156 = DPB(cx, 0xFF, 0, 8);
	bios_video_set_block_of_DAC_registers(bx, cx_156, 0xA000, 0x0000);
	do
	{
		word16 cx_100 = cx_156 + 0x0001;
		Eq_78 Eq_69::*di_111 = &Eq_69::t017C;
		do
		{
			word16 ax_101 = __inw(0x40);
			ds->w0100 = __xadd(ds->w0100, ax_101);
			Eq_74 al_102 = (byte) ax_101;
			Eq_74 ax_106 = DPB(ax_101, al_102, 8, 8);
			(ds->*di_111).t0000 = ax_106;
			Eq_74 Eq_69::*di_109 = &di_111->b0001;
			Mem110[ds:di_109 + 0x0000:word16] = ax_106;
			di_111 = di_109 + 0x0002;
			cx_100 = cx_100 - 0x0001;
		} while (cx_100 != 0x0000);
		word16 cx_117 = 0xFA00;
		do
		{
			word16 ax_131 = DPB(ax_106, al_102 + Mem110[ds:di_111 + 0x0000:byte] + Mem110[ds:di_111 + 0x0001:byte] + Mem110[ds:di_111 - 0x0140:byte] >>u 0x02, 0, 8);
			ax_106 = ax_131 - 0x0001;
			al_102 = (byte) (ax_131 - 0x0001);
			if (al_102 <=u 0x10)
			{
				al_102 = al_102 + Mem110[ds:di_111 - 0x0140:byte] + (ds->*di_111).b0140 + (ds->*di_111).b013F + (ds->*di_111).b013F;
				ax_106 = DPB(ax_131 - 0x0001, al_102, 0, 8);
			}
			(ds->*di_111).t0000 = al_102;
			di_111 = di_111 + 1;
			cx_117 = cx_117 - 0x0001;
		} while (cx_117 != 0x0000);
		word32 Eq_12::*di_147 = Eq_12::a0000;
		word32 Eq_69::*si_154 = Eq_69::a02BC;
		cx_156 = DPB(cx_117, 0x3C, 8, 8);
		while (cx_156 != 0x0000)
		{
			0xA000->*di_147 = ds->*si_154;
			si_154 = si_154 + 1;
			di_147 = di_147 + 1;
			cx_156 = cx_156 - 0x0001;
		}
		byte al_169;
		bios_kbd_check_keystroke(out al_169);
	} while (0x0000 == 0x0000);
	bios_video_set_mode(0x03);
	return;
}

