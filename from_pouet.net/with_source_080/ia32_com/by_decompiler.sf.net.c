// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_080/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100()
{
	bios_video_set_mode(0x13);
	word16 di_17;
	word16 si_16;
	word16 cx_18 = fn0C00_0133(0x0000, 0x2D9F, 0xA000, out si_16, out di_17);
	while (true)
	{
		word16 di_35 = di_17 + 0x0001 + 0x0001;
		cx_39 = cx_18;
		do
		{
			word16 cx_39;
			si_16 = si_16 + 0x0002;
			Mem46[0xA000:di_35 + 0x0000:word16] = Mem0[0xA000:si_16 + 0x0000:word16] ^ Mem0[0xA000:si_16 + 0x0000:word16];
			di_35 = di_35 + 0x0002;
			cx_39 = cx_39 - 0x0001;
		} while (cx_39 != 0x0000);
		cx_18 = fn0C00_0133(cx_18, di_17, 0xA000, out si_16, out di_17);
		if ((byte) cx_18 == 0x80)
		{
			byte al_63;
			bios_kbd_get_keystroke(out al_63);
			bios_video_set_mode(0x03);
			return;
		}
	}
}

word16 fn0C00_0133(word16 cx, word16 di, selector ds, ptr16 siOut, ptr16 diOut)
{
	Mem4[ds:di + 0x0000:word16] = 0x0F0F;
	word16 si_3;
	*siOut = di;
	word16 di_6;
	*diOut = di + 0x013F;
	return cx + 0x0001;
}

