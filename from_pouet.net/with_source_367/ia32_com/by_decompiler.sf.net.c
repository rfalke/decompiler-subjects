// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_367/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(selector es, selector ds)
{
	word16 si_8;
	word16 ax_9 = fn0C00_014D(0x02FA, ds, out si_8);
	word16 si_14;
	word16 ax_15 = fn0C00_014D(si_8, ds, out si_14);
	word16 si_22;
	fn0C00_014D(si_14, ds, out si_22);
	word16 ax_18 = ax_15 + si_14;
	word16 si_33 = ax_18 + 0x0006;
	word16 ax_34 = DPB(Mem0[ds:si_22 + 0x0000:word16], 0x00, 8, 8) + (ax_9 + 0x0100);
	if (ax_34 >u ax_18 + 0x0006)
	{
		word16 si_60 = ax_18 + 0x0005;
		word16 di_61 = ax_34 - 0x0001;
		word16 cx_63 = ax_15;
		while (cx_63 != 0x0000)
		{
			Mem68[es:di_61 + 0x0000:byte] = Mem0[ds:si_60 + 0x0000:byte];
			si_60 = si_60 - 0x0001;
			di_61 = di_61 - 0x0001;
			cx_63 = cx_63 - 0x0001;
		}
		si_33 = ax_34;
	}
	word16 di_43 = si_33;
	word16 si_46 = 0x0156;
	word16 cx_47 = 0x01A0;
	while (cx_47 != 0x0000)
	{
		Mem52[es:di_43 + 0x0000:byte] = Mem0[ds:si_46 + 0x0000:byte];
		si_46 = si_46 + 0x0001;
		di_43 = di_43 + 0x0001;
		cx_47 = cx_47 - 0x0001;
	}
	return;
}

word16 fn0C00_014D(word16 si, selector ds, ptr16 siOut)
{
	word16 si_4;
	fn0C00_0152(si, ds, out si_4);
	word16 si_7;
	return fn0C00_0152(si_4, ds, out si_7);
}

word16 fn0C00_0152(word16 si, selector ds, ptr16 siOut)
{
	word16 ax_5 = Mem0[ds:si + 0x0000:word16];
	word16 si_8;
	*siOut = si + 0x0002;
	return DPB(ax_5, (byte) ax_5, 8, 8);
}

