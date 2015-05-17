// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_294/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(selector ds)
{
	bios_video_set_mode(0x13);
	word16 ax_11 = DPB(cs, SLICE(cs, byte, 8) + 0x10, 8, 8);
	word16 ax_15 = DPB(cs, 0x16, 8, 8);
	word16 cx_16 = 0x0000;
	byte cl_17 = 0x00;
	do
	{
		__outb(0x03C8, cl_17);
		byte al_26 = cl_17 << 0x01;
		__outb(0x03C9, al_26);
		__outb(0x03C9, al_26 << 0x01);
		__outb(0x03C9, 0x00);
		cx_16 = cx_16 - 0x0001 + 0x00FF;
		byte dl_25 = 0xC9;
		ax_15 = DPB(ax_15, 0x00, 0, 8);
		cl_17 = (byte) cx_16;
	} while (cx_16 != 0x0000);
	do
	{
		ax_15 = __rol(ax_15 + cx_16, cl_17);
		byte al_44 = (byte) ax_15;
		byte dl_50 = dl_25 + (al_44 >> 0x05) + (al_44 >> 0x05 <u 0x00);
		byte dl_54 = dl_50 + Mem0[ax_11:cx_16 + 0x0000:byte] + (dl_50 <u 0x00);
		Mem58[ax_11:cx_16 + 0x0000:byte] = dl_54 >>u 0x01;
		Mem61[ax_11:DPB(cx_16, ~SLICE(cx_16, byte, 8), 8, 8):byte] = dl_54 >>u 0x01;
		cx_16 = cx_16 - 0x0001;
		dl_25 = dl_54 >>u 0x01;
		cl_17 = (byte) cx_16;
	} while (cx_16 != 0xFF01);
	word16 cx_207 = DPB(cx_16, 0x10, 8, 8);
	while (true)
	{
		word16 di_105 = 0x0304;
		word16 dx_125 = 0x0000;
		do
		{
			word16 bp_106 = 0x0000;
			do
			{
				Mem118[ds:di_105 + 0x0000:byte] = Mem61[ax_11:DPB(bp_106 + 0x0000, (byte) (dx_125 + 0x0000), 8, 8):byte];
				di_105 = di_105 + 0x0001;
				bp_106 = bp_106 + 0x0001;
			} while (bp_106 != 0x0000);
			dx_125 = dx_125 + 0x0001;
		} while (dx_125 != 0x0000);
		Mem131[ss:fp - 0x0004:word16] = ds;
		bios_video_write_string(0x00, 0x00, 0x0A, DPB(cx_207, 0x28, 0, 8), 0x00, 0x00, A000:01C6);
		Mem143[ss:fp - 0x0004:word16] = 0xA000;
		word32 es_bp_145 = A000:01C6;
		word16 cx_147 = 0x0040;
		word16 di_150 = 0x41B6;
		do
		{
			byte bl_158 = 0x7F;
			do
			{
				Mem163[ds:di_150 + 0x0000:byte] = 0x10;
				di_150 = di_150 + 0x0001;
				bl_158 = bl_158 - 0x01;
			} while (bl_158 > 0x00);
			di_150 = di_150 + 0x00C1;
			cx_147 = cx_147 - 0x0001;
		} while (cx_147 != 0x0000);
		word16 si_174 = 0x0304;
		word16 di_176 = 0x0A00;
		word16 cx_178 = DPB(cx_147, 0x78, 8, 8);
		while (cx_178 != 0x0000)
		{
			Mem185[0xA000:di_176 + 0x0000:word16] = Mem163[ds:si_174 + 0x0000:word16];
			si_174 = si_174 + 0x0002;
			di_176 = di_176 + 0x0002;
			cx_178 = cx_178 - 0x0001;
		}
		if ((int16) __inb(0x60) == 0x0001)
		{
			bios_video_write_string(0x03, 0x00, bl_158, cx_178, 0x00, 0x00, es_bp_145);
			return;
		}
		byte ch_197;
		byte dh_198;
		byte dl_199;
		msdos_get_system_time(out ch_197, out dh_198, out dl_199);
		if ((dh_198 >>u 0x02 & 0x02) == 0x00)
			cx_207 = DPB(cx_178, 0x10, 8, 8);
		else
			cx_207 = DPB(cx_178, 0x00, 8, 8);
	}
}

