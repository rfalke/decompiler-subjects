// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_165/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 bx, word16 di)
{
	bios_video_set_mode(0x13);
	word16 ax_8 = DPB(ax, 0x20, 8, 8);
	__outw(0x03D4, ax_8);
	word16 dx_21 = 0x03D4;
	word16 cx_111 = 0x0020;
	byte cl_13 = 0x20;
	ax_191 = ax_8;
	do
	{
		word16 ax_191;
		word16 ax_34 = (word16) (dx_21 *s ax_191);
		dx_21 = ax_34 + 0x0001;
		byte dl_42 = (byte) (ax_34 + 0x0001);
		byte dh_43 = SLICE(ax_34 + 0x0001, byte, 8);
		do
		{
			if (cl_13 >=u 0x1E)
				Mem193[ax_8:bx + 0x0000:byte] = cl_13;
			ax_191 = dh_43 *s dh_43 + dl_42 *s dl_42;
			byte ah_190 = SLICE(ax_191, byte, 8);
			if (ah_190 >u 0x1F)
			{
				ah_190 = 0x1F;
				ax_191 = DPB(ax_191, 0x1F, 8, 8);
			}
			Mem75[ax_8:bx + 0x0000:byte] = Mem0[ax_8:bx + 0x0000:byte] + ah_190;
			dx_21 = dx_21 + 0x0001;
			bx = bx - 0x0001;
			dl_42 = (byte) dx_21;
			dh_43 = SLICE(dx_21, byte, 8);
			byte bh_141 = SLICE(bx, byte, 8);
		} while (bx != 0x0000);
		cx_111 = cx_111 - 0x0001;
		cl_13 = (byte) cx_111;
	} while (cx_111 != 0x0000);
	word16 bp_143 = 0x0000;
	do
	{
		word16 si_110 = 0x0300;
		do
		{
			word16 cx_118 = cx_111 + 0x0001;
			byte cl_119 = (byte) cx_118;
			if (cl_119 >=u 0x03)
			{
				cx_118 = 0x0000;
				cl_119 = 0x00;
			}
			byte cl_126 = cl_119 << 0x01;
			word16 ax_132 = (int16) (byte) ((bp_143 >>u cl_126) + si_110);
			__outb(0x03C9, ((byte) ax_132 ^ SLICE(ax_132, byte, 8)) >>u 0x01);
			cx_111 = DPB(cx_118, cl_126 >>u 0x01, 0, 8);
			si_110 = si_110 - 0x0001;
		} while (si_110 != 0x0000);
		bh_141 = bh_141 - 0x01;
		bx = DPB(bx, bh_141, 8, 8);
		bp_143 = bp_143 + 0x0001;
		do
		{
			byte al_153 = Mem75[ax_8:bp_143 + si_110:byte] + Mem75[ax_8:bx + si_110:byte];
			ax_132 = DPB(ax_132, al_153, 0, 8);
			if (ax_132 >=u bp_143)
			{
				word16 ax_171 = (int16) al_153;
				word16 ax_178 = DPB(ax_171, ((byte) ax_171 ^ SLICE(ax_171, byte, 8)) >>u 0x02, 8, 8) + si_110;
				al_153 = (byte) ax_178 ^ SLICE(ax_178, byte, 8);
				ax_132 = DPB(ax_178, al_153, 0, 8);
			}
			Mem163[0xA000:di + 0x0000:byte] = al_153;
			di = di + 0x0001;
			si_110 = si_110 - 0x0001;
		} while (si_110 != 0x0000);
	} while (__inb(0x60) != 0x01);
	return;
}

