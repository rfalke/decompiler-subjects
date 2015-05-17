// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_216/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(uint16 dx, byte bl, Eq_111 * ds)
{
	bios_video_load_ROM_8x8_dbl_dot_patterns(bl);
	__syscall(0x10);
	uint16 ax_11 = 0x1003;
	byte ah_14 = 0x10;
	do
	{
		Eq_14 di_33 = 0x0000;
		bool C_36 = false;
		do
		{
			byte al_47 = Mem0[0x9000:di_33 + 0x0000:byte] + Mem0[0x9000:di_33 + 0x0002:byte] + C_36;
			Eq_57 ah_50 = ah_14 + (al_47 <u 0x00);
			byte al_53 = al_47 + Mem0[0x9000:di_33 + 0x00A0:byte] + (ah_50 <u 0x00);
			Eq_69 ah_56 = ah_50 + (al_53 <u 0x00);
			word16 ax_63 = DPB(ax_11, ah_56 + ((al_53 + Mem0[0x9000:di_33 - 0x0002:byte]) + (ah_56 <u 0x00) <u 0x00), 8, 8);
			ax_11 = ax_63 >>u 0x0002;
			word32 dx_ax_186 = SEQ(dx, ax_63 >>u 0x0002);
			byte al_184 = (byte) (ax_63 >>u 0x0002);
			ah_14 = SLICE(ax_63 >>u 0x0002, byte, 8);
			if (ax_63 >>u 0x0002 >u 0x0007)
			{
				al_184 = al_184 - 0x07;
				ax_11 = DPB(ax_63 >>u 0x0002, al_184 - 0x07, 0, 8);
				dx_ax_186 = DPB(dx_ax_186, al_184 - 0x07, 0, 8);
			}
			if (di_33 >=u 0x1FE0)
			{
				al_184 = __inb(0x40);
				ax_11 = DPB(ax_11, al_184, 0, 8);
				dx_ax_186 = DPB(dx_ax_186, al_184, 0, 8);
			}
			Mem78[0x9000:di_33 - 0x00A0:byte] = al_184;
			word16 di_79 = di_33 + 0x0001;
			di_33 = di_79 + 0x0001;
			C_36 = cond(di_79 - 0x207F);
		} while (di_79 <u 0xDF81);
		Eq_95 di_109 = 0x0FA0;
		do
		{
			word32 dx_ax_91 = DPB(dx_ax_186, Mem78[0x9000:di_109 + 0x0FA0:byte], 0, 8);
			uint32 dx_ax_94 = SEQ(dx_ax_91 % 0x0F, ax_11);
			ax_11 = DPB(dx_ax_94 /u 0x0F, 0x00, 8, 8);
			word16 cx_102 = (&ds->a01DA[0])[ax_11 * 0x0002 / 0x0004];
			Mem103[0x8000:di_109 + 0x0F9E:word16] = cx_102;
			Eq_121 di_104 = -di_109;
			Mem105[0x8000:di_104 + 0x0FA0:word16] = cx_102;
			int16 di_106 = -di_104;
			dx = dx_ax_91 % 0x0F;
			dx_ax_186 = DPB(dx_ax_94, 0x00, 8, 8);
			di_109 = di_106 - 0x0002;
		} while (di_106 != 0x0002);
		Eq_135 Eq_28::*si_112 = Eq_28::a0000;
		bcu8 bl_114 = 0x00;
		byte bh_115 = 0x00;
		do
		{
			if (bl_114 <u 0x1A || Mem105[0x8000:di_109 + 0x0001:byte] == 0x00)
			{
				word16 cx_175 = (0x8000->*si_112).w0000;
				Mem176[0x8000:di_109 + 0x0000:word16] = cx_175;
				Eq_148 di_177 = -di_109;
				Mem178[0x8000:di_177 + 0x1F3E:word16] = cx_175;
				di_109 = -di_177;
			}
			word16 si_133 = &si_112->w0000;
			di_109 = di_109 + 0x00A0;
			bl_114 = bl_114 + 0x01;
			si_112 = si_133 + 0x0001;
			if (bl_114 <u 0x33)
				continue;
			di_109 = di_109 - 0x1FDE;
			si_112 = si_133 + 0x003B;
			bl_114 = 0x00;
			bh_115 = bh_115 + 0x01;
		} while (bh_115 != 0x19);
		byte Eq_28::*di_151 = Eq_28::a0000;
		do
		{
			0xB800->*di_151 = 0x8000->*di_151;
			di_151 = di_151 + 1;
		} while (di_151 != Eq_28::a0000);
		Mem165[ss:fp - 0x0002:word16] = 0x9000;
		byte al_169;
		ah_14 = bios_kbd_check_keystroke(out al_169);
		ax_11 = DPB(ax_11, ah_14, 8, 8);
	} while (di_151 == Eq_28::a0000);
	bios_video_set_mode(0x03);
	return;
}

