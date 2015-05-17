// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_209/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(byte cl, Eq_20 * es, Eq_32 * ds)
{
	bios_video_set_mode(0x13);
	word16 dx_100 = 0x003F;
	bcu8 dl_287 = 0x3F;
	do
	{
		word16 cx_51 = DPB(cx, 0xFA, 8, 8);
		byte Eq_20::*di_57 = Eq_20::a01F8;
		while (cx_51 != 0x0000)
		{
			es->*di_57 = 0x00;
			di_57 = di_57 + 1;
			cx_51 = cx_51 - 0x0001;
		}
		Eq_31 Eq_32::*si_137 = &Eq_32::t01BE;
		word16 cx_212 = DPB(cx_51, 0x06, 0, 8);
		if (dl_287 >u 0x06)
		{
			dx_100 = dx_100 - 0x0001;
			goto l0C00_011A;
		}
l0C00_011A:
		do
		{
			word16 ax_90 = Mem0[ds:si_137 + 0x0000:word16];
			word16 si_94 = si_137 + 0x0002;
			if (cx_212 == dx_100)
			{
				int8 al_325 = (byte) ax_90;
				if (ax_90 == 0x0000)
					dx_100 = dx_100 - 0x0001;
				else
				{
					(ds->*si_94).b0000 = (ds->*si_94).b0000 + 0x01;
					(ds->*si_94).b0001 = (ds->*si_94).b0001 - 0x01;
					byte bl_338 = 0x01;
					if (al_325 != 0x00)
					{
						if (al_325 < 0x00)
							bl_338 = 0xFF;
						(ds->*si_94).b0001 = (ds->*si_94).b0001 + bl_338;
						(ds->*si_94).b0002 = (ds->*si_94).b0002 - bl_338;
					}
				}
			}
			word16 ax_122 = (word16) (ds->*si_94).b0001;
			byte al_134 = (ds->*si_94).b0003;
			byte Eq_20::*di_125 = (word16) ((word16) (ds->*si_94).b0000 *u 0x0140) + ax_122 + 0x01F8;
			word16 bx_132 = DPB(ax_122, (ds->*si_94).b0002, 0, 8);
			word16 ax_135 = DPB(0x0140, al_134, 0, 8);
			si_137 = &si_94->b0003 + 0x0001;
			cx_148 = cx_212;
			do
			{
				word16 cx_148;
				word16 si_152 = si_137 + 0x0000;
				byte ah_153 = ds->*si_152;
				cx_148 = DPB(cx_148, Mem0[ds:si_137 + 0x0000:byte], 0, 8);
				ax_135 = DPB(ax_135, ah_153, 8, 8);
				si_137 = si_152 + 0x0001;
				do
				{
					word16 cx_167 = bx_132;
					while (cx_167 != 0x0000)
					{
						es->*di_125 = al_134;
						di_125 = di_125 + 1;
						cx_167 = cx_167 - 0x0001;
					}
					word16 di_179 = di_125 - bx_132;
					di_125 = di_179 + 0x0140;
					byte cl_183 = (byte) cx_148;
					if ((ah_153 & 0x10) != 0x00)
					{
						di_125 = di_179 + 0x0142;
						bx_132 = bx_132 - 0x0001 - 0x0001;
					}
					if ((ah_153 & 0x01) != 0x00)
						bx_132 = bx_132 + 0x0001 + 0x0001;
					if ((cl_183 & 0x01) != 0x00)
					{
						if ((ah_153 & 0x02) != 0x00)
							bx_132 = bx_132 - 0x0001;
						if ((ah_153 & 0x20) != 0x00)
						{
							di_125 = di_125 - 0x0001;
							bx_132 = bx_132 + 0x0001;
						}
					}
					cx_148 = cx_148 - 0x0001;
				} while (cx_148 != 0x0000);
			} while ((ah_153 & 0x80) != 0x00);
			cx_212 = cx_212 - 0x0001;
		} while (cx_212 != 0x0000);
		word16 Eq_32::*si_219 = Eq_32::a01F8;
		word16 Eq_212::*di_220 = Eq_212::a0000;
		word16 cx_223 = 0x7D00;
		while (cx_223 != 0x0000)
		{
			0xA000->*di_220 = ds->*si_219;
			si_219 = si_219 + 1;
			di_220 = di_220 + 1;
			cx_223 = cx_223 - 0x0001;
		}
		Mem239[ss:fp - 0x0002:word16] = ds;
		Mem244[ss:fp - 0x0002:word16] = ax_135;
		es = 0xA000;
		word16 cx_259 = 0x0008;
		do
		{
			if ((__inb(0x03DA) & 0x08) != 0x00)
				continue;
			do
				;
			while ((__inb(0x03DA) & 0x08) == 0x00);
			cx_259 = cx_259 - 0x0001;
		} while (cx_259 != 0x0000);
		dl_287 = (byte) dx_100;
		cx = cx_223;
	} while (__inb(0x60) != 0x01);
	return;
}

