// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_170/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(word16 si, byte bh)
{
	bios_video_set_mode(0x13);
	word16 bx_18 = DPB(bx, 0x05, 0, 8);
	do
	{
		word16 di_25 = 0x0000;
		word16 cx_28 = 0xFA00;
		do
		{
			word16 dx_31;
			word16 ax_32 = fn0C00_0168(di_25, out dx_31);
			word16 dx_34 = dx_31 + ax_32 *s ax_32;
			byte al_102 = 0x00;
			if (dx_34 >=u si)
			{
				al_102 = 0x09;
				if (dx_34 >=u 0x09C4)
				{
					word16 dx_93;
					word16 ax_94 = fn0C00_0168(di_25, out dx_93);
					al_102 = 0x0F;
					if (dx_93 + (ax_94 + 0x0046) *s (ax_94 + 0x0046) >=u 0x3931)
						al_102 = 0x0C;
				}
			}
			Mem44[0xA000:di_25 + 0x0000:byte] = al_102;
			di_25 = di_25 + 0x0001;
			cx_28 = cx_28 - 0x0001;
		} while (cx_28 != 0x0000);
		si = si + bx_18;
		if (si > 0x0001 && si <u 0x0960)
			;
		else
			bx_18 = -bx_18;
	} while (__inb(0x60) != 0x01);
	Mem59[ss:fp - 0x0002:word16] = 0xA000;
	word16 cx_57 = 0x0064;
	do
	{
		word16 di_66 = 0x0000;
		word16 si_69 = 0x0280;
		word16 cx_70 = 0xFA00;
		while (cx_70 != 0x0000)
		{
			Mem75[0xA000:di_66 + 0x0000:byte] = Mem59[0xA000:si_69 + 0x0000:byte];
			si_69 = si_69 + 0x0001;
			di_66 = di_66 + 0x0001;
			cx_70 = cx_70 - 0x0001;
		}
		cx_57 = cx_57 - 0x0001;
	} while (cx_57 != 0x0000);
	return;
}

word16 fn0C00_0168(word16 di, ptr16 dxOut)
{
	word32 dx_ax_5 = SEQ(0x0000, di);
	word16 dx_10 = dx_ax_5 % 0x0140 - 0x00A0;
	word16 ax_11 = SEQ(dx_ax_5 % 0x0140, di) /u 0x0140 - 0x0064;
	if (ax_11 < 0x0000)
		ax_11 = -ax_11;
	word16 dx_18;
	*dxOut = dx_10 *s dx_10;
	return ax_11;
}

