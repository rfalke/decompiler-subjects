// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_194/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100()
{
	bios_video_set_mode(0x03);
	while (true)
	{
		word16 cx_201 = 0x01F4;
		while (true)
		{
			byte Eq_12::*di_53 = Eq_12::a01D0;
			byte Eq_7::*si_54 = Eq_7::a0000;
			word16 cx_57 = 0x07D0;
			do
			{
				cs->*di_53 = 0xB800->*si_54;
				di_53 = di_53 + 1;
				si_54 = si_54 + 1 + 0x0001;
				cx_57 = cx_57 - 0x0001;
			} while (cx_57 != 0x0000);
			word16 cx_119 = 0x07D0;
			Eq_30 Eq_12::*si_114 = Eq_12::a01D0;
			word16 ax_106 = &cs->u0096;
			byte C_112 = cond(&cs->u0096);
			byte Eq_74::*di_115 = Eq_74::a01D0;
			do
			{
				cups16 bx_97 = DPB(ax_106, (cs->*si_114).b0051, 0, 8) + DPB(ax_106, (cs->*si_114).b004F, 0, 8) + C_112;
				cups16 bx_102 = bx_97 + DPB(ax_106, (cs->*si_114).b0051, 0, 8) + (bx_97 <u 0x0000);
				ax_106 = DPB(ax_106, (cs->*si_114).b004F, 0, 8);
				uint16 bx_109 = bx_102 + ax_106 + (bx_102 <u 0x0000) + 0x0001 >>u 0x0002;
				(cs + 0x0096)->*di_115 = (byte) bx_109;
				C_112 = cond(bx_109);
				si_114 = si_114 + 1;
				di_115 = di_115 + 1;
				cx_119 = cx_119 - 0x0001;
			} while (cx_119 != 0x0000);
			byte Eq_7::*di_128 = Eq_7::a0000;
			byte Eq_93::*si_131 = Eq_93::a01D0;
			word16 cx_132 = 0x07D0;
			do
			{
				0xB800->*di_128 = (cs + 0x0096)->*si_131;
				si_131 = si_131 + 1;
				byte al_140 = (cs + 0x0096)->*si_131;
				byte Eq_7::*di_139 = di_128 + 1;
				0xB800->*di_139 = al_140 & 0x70 | (al_140 & 0x70) >>u 0x04 & 0x05;
				di_128 = di_139 + 1;
				cx_132 = cx_132 - 0x0001;
			} while (cx_132 != 0x0000);
			word16 cx_151 = 0x0050;
			Eq_129 Eq_7::*di_152 = Eq_7::a0000;
			byte al_156 = (byte) cx_201;
			do
			{
				(0xB800->*di_152).b0F00 = al_156;
				(0xB800->*di_152).b0000 = al_156;
				di_152 = &di_152->b0000 + 0x0001;
				cx_151 = cx_151 - 0x0001;
			} while (cx_151 != 0x0000);
			word16 cx_168 = 0x0019;
			Eq_150 Eq_7::*di_169 = Eq_7::a0000;
			do
			{
				(0xB800->*di_169).b009E = al_156;
				(0xB800->*di_169).b0000 = al_156;
				di_169 = &di_169->b0000 + 0x009F;
				cx_168 = cx_168 - 0x0001;
			} while (cx_168 != 0x0000);
			0xB800->b07D0 = al_156 + 0x02;
			0xB800->b07D2 = al_156 + 0x02;
			word16 cx_187 = 0x0014;
			do
			{
				word16 cx_191 = 0xFFFA;
				do
					cx_191 = cx_191 - 0x0001;
				while (cx_191 != 0x0000);
				cx_187 = cx_187 - 0x0001;
			} while (cx_187 != 0x0000);
			byte al_197;
			bios_kbd_check_keystroke(out al_197);
			if (al_156 != 0x02)
			{
				byte al_208;
				bios_kbd_get_keystroke(out al_208);
				return;
			}
			cx_201 = cx_201 - 0x0001;
			if (cx_201 == 0x0000)
				;
		}
	}
}

