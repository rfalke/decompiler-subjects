// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_193/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100()
{
	bios_video_set_mode(0x03);
	while (true)
	{
		word16 cx_207 = 0x01F4;
		while (true)
		{
			byte Eq_12::*di_53 = Eq_12::a01CE;
			byte Eq_7::*si_54 = &Eq_7::b0000;
			word16 cx_57 = 0x07D0;
			do
			{
				cs->*di_53 = 0xB800->*si_54;
				di_53 = di_53 + 1;
				si_54 = si_54 + 1 + 0x0001;
				cx_57 = cx_57 - 0x0001;
			} while (cx_57 != 0x0000);
			word16 cx_133 = 0x07D0;
			Eq_30 Eq_12::*si_130 = Eq_12::a01CE;
			word16 ax_122 = &cs->u0096;
			byte Eq_105::*di_131 = Eq_105::a01CE;
			do
			{
				cups16 bx_94 = DPB(ax_122, (cs->*si_130).b0051, 0, 8) + DPB(ax_122, (cs->*si_130).b004F, 0, 8);
				cups16 bx_99 = bx_94 + DPB(ax_122, (cs->*si_130).b0051, 0, 8) + (bx_94 <u 0x0000);
				cups16 bx_108 = bx_99 + DPB(ax_122, (cs->*si_130).b004F, 0, 8) + (bx_99 <u 0x0000) + DPB(ax_122, (cs->*si_130).b0050, 0, 8) + true;
				cups16 bx_113 = bx_108 + DPB(ax_122, (cs->*si_130).b0001, 0, 8) + (bx_108 <u 0x0000);
				cups16 bx_118 = bx_113 + DPB(ax_122, (cs->*si_130).b0001, 0, 8) + (bx_113 <u 0x0000);
				ax_122 = DPB(ax_122, (cs->*si_130).b0050, 0, 8);
				(cs + 0x0096)->*di_131 = (byte) (bx_118 + ax_122 + (bx_118 <u 0x0000) + 0x0004 >>u 0x0003 & 0x003F);
				si_130 = si_130 + 1;
				di_131 = di_131 + 1;
				cx_133 = cx_133 - 0x0001;
			} while (cx_133 != 0x0000);
			byte Eq_7::*di_142 = &Eq_7::b0000;
			byte Eq_123::*si_145 = Eq_123::a01CE;
			word16 cx_146 = 0x07D0;
			do
			{
				0xB800->*di_142 = (cs + 0x0096)->*si_145;
				si_145 = si_145 + 1;
				di_142 = di_142 + 1 + 0x0001;
				cx_146 = cx_146 - 0x0001;
			} while (cx_146 != 0x0000);
			word16 cx_157 = 0x0050;
			Eq_142 Eq_7::*di_158 = &Eq_7::b0000;
			byte al_162 = (byte) cx_207;
			do
			{
				(0xB800->*di_158).b0F00 = al_162;
				(0xB800->*di_158).b0000 = al_162;
				di_158 = &di_158->b0000 + 0x0001;
				cx_157 = cx_157 - 0x0001;
			} while (cx_157 != 0x0000);
			word16 cx_174 = 0x0019;
			Eq_163 Eq_7::*di_175 = &Eq_7::b0000;
			do
			{
				(0xB800->*di_175).b009E = al_162;
				(0xB800->*di_175).b0000 = al_162;
				di_175 = &di_175->b0000 + 0x009F;
				cx_174 = cx_174 - 0x0001;
			} while (cx_174 != 0x0000);
			0xB800->b07CE = al_162 + 0x02;
			0xB800->b07D0 = al_162 + 0x02;
			word16 cx_193 = 0x00C8;
			do
			{
				word16 cx_197 = 0xFFFA;
				do
					cx_197 = cx_197 - 0x0001;
				while (cx_197 != 0x0000);
				cx_193 = cx_193 - 0x0001;
			} while (cx_193 != 0x0000);
			byte al_203;
			bios_kbd_check_keystroke(out al_203);
			if (al_162 != 0x02)
			{
				byte al_214;
				bios_kbd_get_keystroke(out al_214);
				return;
			}
			cx_207 = cx_207 - 0x0001;
			if (cx_207 == 0x0000)
				;
		}
	}
}

