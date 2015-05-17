// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_300/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte bl, Eq_117 * ds)
{
	bios_video_load_ROM_8x8_dbl_dot_patterns(bl);
	__syscall(0x10);
	uint16 ax_108 = 0x1003;
	byte ah_14 = 0x10;
	do
	{
		Eq_14 di_35 = 0x0000;
		bool C_38 = false;
		do
		{
			byte al_48 = Mem0[0x9000:di_35 + 0x0000:byte] + Mem0[0x9000:di_35 + 0x0002:byte] + C_38;
			Eq_53 ah_51 = ah_14 + (al_48 <u 0x00);
			byte al_54 = al_48 + Mem0[0x9000:di_35 + 0x00A0:byte] + (ah_51 <u 0x00);
			Eq_65 ah_57 = ah_51 + (al_54 <u 0x00);
			word16 ax_64 = DPB(ax_108, ah_57 + ((al_54 + Mem0[0x9000:di_35 - 0x0002:byte]) + (ah_57 <u 0x00) <u 0x00), 8, 8);
			ax_108 = ax_64 >>u 0x0002;
			byte al_197 = (byte) (ax_64 >>u 0x0002);
			ah_14 = SLICE(ax_64 >>u 0x0002, byte, 8);
			if (ax_64 >>u 0x0002 >=u 0x0007)
			{
				al_197 = al_197 - 0x07;
				ax_108 = DPB(ax_64 >>u 0x0002, al_197 - 0x07, 0, 8);
			}
			if (di_35 >=u 0x1FE0)
			{
				al_197 = __inb(0x40);
				ax_108 = DPB(ax_108, al_197, 0, 8);
			}
			Mem79[0x9000:di_35 - 0x00A0:byte] = al_197;
			word16 di_80 = di_35 + 0x0001;
			di_35 = di_80 + 0x0001;
			C_38 = cond(di_80 - 0x207F);
		} while (di_80 <u 0xDF81);
		word32 dx_ax_109 = SEQ(0x03DA, ax_108);
		do
		{
			byte al_90 = __inb(0x03DA);
			ax_108 = DPB(ax_108, al_90, 0, 8);
			dx_ax_109 = DPB(dx_ax_109, al_90, 0, 8);
		} while ((al_90 & 0x08) == 0x00);
		Eq_101 di_122 = 0x0FA0;
		do
		{
			byte al_100 = Mem79[0x9000:di_122 + 0x0FA0:byte];
			uint32 dx_ax_105 = SEQ(DPB(dx_ax_109, al_100, 0, 8) % 0x0F, ax_108);
			ax_108 = DPB(dx_ax_105 /u 0x0F, 0x00, 8, 8);
			word16 cx_113 = (&ds->a01E7[0])[ax_108 * 0x0002 / 0x0004];
			Mem114[0x8000:di_122 + 0x0F9E:word16] = cx_113;
			Eq_127 di_117 = -di_122;
			Mem118[0x8000:di_117 + 0x0FA0:word16] = DPB(cx_113, al_100, 0, 8);
			int16 di_119 = -di_117;
			dx_ax_109 = DPB(dx_ax_105, 0x00, 8, 8);
			di_122 = di_119 - 0x0002;
		} while (di_119 != 0x0002);
		Eq_141 di_125 = 0x0000;
		Eq_143 Eq_25::*si_126 = Eq_25::a0000;
		bcu8 bl_128 = 0x00;
		byte bh_129 = 0x00;
		do
		{
			if (Mem118[0x8000:di_125 + 0x0001:byte] == 0x00)
			{
				word16 cx_186 = (0x8000->*si_126).w0000;
				Mem189[0x8000:di_125 + 0x0000:word16] = DPB(cx_186, 0x01, 0, 8);
				Eq_169 di_190 = -di_125;
				Mem193[0x8000:di_190 + 0x1F3E:word16] = DPB(cx_186, 0x02, 0, 8);
				di_125 = -di_190;
			}
			word16 si_148 = &si_126->w0000;
			di_125 = di_125 + 0x00A0;
			bl_128 = bl_128 + 0x01;
			si_126 = si_148 + 0x0001;
			if (bl_128 <u 0x33)
				continue;
			di_125 = di_125 - 0x1FDE;
			si_126 = si_148 + 0x003B;
			bl_128 = 0x00;
			bh_129 = bh_129 + 0x01;
		} while (bh_129 != 0x19);
		byte Eq_25::*di_166 = Eq_25::a0000;
		do
		{
			0xB800->*di_166 = 0x8000->*di_166;
			di_166 = di_166 + 1;
		} while (di_166 != Eq_25::a0000);
		Mem177[ss:fp - 0x0002:word16] = 0x9000;
		byte al_181;
		ah_14 = bios_kbd_check_keystroke(out al_181);
		ax_108 = DPB(ax_108, ah_14, 8, 8);
	} while (di_166 == Eq_25::a0000);
	bios_video_set_mode(0x03);
	return;
}

