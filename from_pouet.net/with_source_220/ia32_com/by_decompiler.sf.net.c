// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_220/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(uint16 dx, byte bl, Eq_112 * ds)
{
	bios_video_load_ROM_8x8_dbl_dot_patterns(bl);
	__syscall(0x10);
	uint16 ax_100 = 0x1003;
	byte ah_14 = 0x10;
	do
	{
		Eq_14 di_35 = 0x0000;
		bool C_38 = false;
		do
		{
			byte al_49 = Mem0[0x9000:di_35 + 0x0000:byte] + Mem0[0x9000:di_35 + 0x0002:byte] + C_38;
			Eq_57 ah_52 = ah_14 + (al_49 <u 0x00);
			byte al_55 = al_49 + Mem0[0x9000:di_35 + 0x00A0:byte] + (ah_52 <u 0x00);
			Eq_69 ah_58 = ah_52 + (al_55 <u 0x00);
			word16 ax_65 = DPB(ax_100, ah_58 + ((al_55 + Mem0[0x9000:di_35 - 0x0002:byte]) + (ah_58 <u 0x00) <u 0x00), 8, 8);
			ax_100 = ax_65 >>u 0x0002;
			word32 dx_ax_101 = SEQ(dx, ax_65 >>u 0x0002);
			byte al_189 = (byte) (ax_65 >>u 0x0002);
			ah_14 = SLICE(ax_65 >>u 0x0002, byte, 8);
			if (ax_65 >>u 0x0002 >u 0x0007)
			{
				al_189 = al_189 - 0x07;
				ax_100 = DPB(ax_65 >>u 0x0002, al_189 - 0x07, 0, 8);
				dx_ax_101 = DPB(dx_ax_101, al_189 - 0x07, 0, 8);
			}
			if (di_35 >=u 0x1FE0)
			{
				al_189 = __inb(0x40);
				ax_100 = DPB(ax_100, al_189, 0, 8);
				dx_ax_101 = DPB(dx_ax_101, al_189, 0, 8);
			}
			Mem80[0x9000:di_35 - 0x00A0:byte] = al_189;
			word16 di_81 = di_35 + 0x0001;
			di_35 = di_81 + 0x0001;
			C_38 = cond(di_81 - 0x207F);
		} while (di_81 <u 0xDF81);
		Eq_95 di_114 = 0x0FA0;
		do
		{
			byte al_92 = Mem80[0x9000:di_114 + 0x0FA0:byte];
			word32 dx_ax_93 = DPB(dx_ax_101, al_92, 0, 8);
			uint32 dx_ax_97 = SEQ(dx_ax_93 % 0x0F, ax_100);
			ax_100 = DPB(dx_ax_97 /u 0x0F, 0x00, 8, 8);
			word16 cx_105 = (&ds->a01DB[0])[ax_100 * 0x0002 / 0x0004];
			Mem106[0x8000:di_114 + 0x0F9E:word16] = cx_105;
			Eq_122 di_109 = -di_114;
			Mem110[0x8000:di_109 + 0x0FA0:word16] = DPB(cx_105, al_92, 0, 8);
			int16 di_111 = -di_109;
			dx = dx_ax_93 % 0x0F;
			dx_ax_101 = DPB(dx_ax_97, 0x00, 8, 8);
			di_114 = di_111 - 0x0002;
		} while (di_111 != 0x0002);
		Eq_137 Eq_28::*si_117 = Eq_28::a0000;
		bcu8 bl_119 = 0x00;
		byte bh_120 = 0x00;
		do
		{
			if (Mem110[0x8000:di_114 + 0x0001:byte] == 0x00)
			{
				word16 cx_182 = DPB((0x8000->*si_117).w0000, 0x01, 0, 8);
				Mem183[0x8000:di_114 + 0x0000:word16] = cx_182;
				Eq_163 di_184 = -di_114;
				Mem185[0x8000:di_184 + 0x1F3E:word16] = cx_182;
				di_114 = -di_184;
			}
			word16 si_139 = &si_117->w0000;
			di_114 = di_114 + 0x00A0;
			bl_119 = bl_119 + 0x01;
			si_117 = si_139 + 0x0001;
			if (bl_119 <u 0x33)
				continue;
			di_114 = di_114 - 0x1FDE;
			si_117 = si_139 + 0x003B;
			bl_119 = 0x00;
			bh_120 = bh_120 + 0x01;
		} while (bh_120 != 0x19);
		byte Eq_28::*di_157 = Eq_28::a0000;
		do
		{
			0xB800->*di_157 = 0x8000->*di_157;
			di_157 = di_157 + 1;
		} while (di_157 != Eq_28::a0000);
		Mem171[ss:fp - 0x0002:word16] = 0x9000;
		byte al_175;
		ah_14 = bios_kbd_check_keystroke(out al_175);
		ax_100 = DPB(ax_100, ah_14, 8, 8);
	} while (di_157 == Eq_28::a0000);
	bios_video_set_mode(0x03);
	return;
}

