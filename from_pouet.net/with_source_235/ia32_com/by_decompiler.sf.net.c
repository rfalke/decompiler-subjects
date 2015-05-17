// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_235/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_23 Eq_9::*di)
{
	bios_video_set_mode(0x13);
	Eq_7 sp_1 = fp;
	do
	{
		Eq_7 sp_26 = sp_1 - 0x0002;
		Mem27[ss:sp_26 + 0x0000:word16] = 0x8000;
		selector es_29 = Mem27[ss:sp_26 + 0x0000:selector];
		Mem33[ss:sp_26 + 0x0000:word16] = cs;
		selector ds_34 = Mem33[ss:sp_26 + 0x0000:selector];
		word16 cx_36 = 0xFFFF;
		while (cx_36 != 0x0000)
		{
			(es_29->*di).t0000.u0 = 0x14;
			di = di + 1;
			cx_36 = cx_36 - 0x0001;
		}
		Mem53[ss:sp_26 + 0x0000:word16] = 0x0000;
		word16 cx_47 = DPB(cx_36, 0xC8, 0, 8);
		byte Eq_9::*di_49 = Eq_9::a0000;
		do
		{
			es_29->*di_49 = 0x0F;
			Eq_37 Eq_9::*di_57 = di_49 + 1;
			(es_29->*di_57).b009E = 0x0F;
			(es_29->*di_57).b013E = 0x0F;
			di_49 = di_57 + 0x013F;
			cx_47 = cx_47 - 0x0001;
		} while (cx_47 != 0x0000);
		Mem73[ss:sp_26 - 0x0002:word16] = 0x0140;
		byte Eq_9::*di_67 = Eq_9::aFFFFF780;
		word16 cx_70 = 0x0140;
		while (cx_70 != 0x0000)
		{
			es_29->*di_67 = 0x0F;
			di_67 = di_67 + 1;
			cx_70 = cx_70 - 0x0001;
		}
		word16 cx_81 = Mem73[ss:sp_26 - 0x0002:word16];
		byte Eq_9::*di_84 = di_67;
		while (cx_81 != 0x0000)
		{
			es_29->*di_84 = 0x0F;
			di_84 = di_84 + 1;
			cx_81 = cx_81 - 0x0001;
		}
		Eq_78 bx_94 = ds_34->t01F7;
		Eq_82 dx_95 = ds_34->t01F9;
		if (dx_95 >=u 0x00C3)
		{
l0C00_014B:
			ds_34->w01FD = -ds_34->w01FD;
		}
		else if (dx_95 <= 0x0001)
			goto l0C00_014B;
		Eq_82 dx_99 = dx_95 + Mem73[ds_34:0x01FD:word16];
		if (bx_94 >=u 0x0136)
		{
l0C00_0160:
			ds_34->w01FB = -ds_34->w01FB;
		}
		else if (bx_94 <= 0x0006)
			goto l0C00_0160;
		Eq_78 bx_105 = bx_94 + Mem73[ds_34:0x01FB:word16];
		Eq_121 Eq_9::*di_109 = dx_99 *s 0x0140 + bx_105;
		word16 cx_112 = DPB(cx_81, 0x04, 0, 8);
		do
		{
			(es_29->*di_109).dw0000 = 0x5C5C5C5C;
			di_109 = di_109 + 1;
			cx_112 = cx_112 - 0x0001;
		} while (cx_112 != 0x0000);
		ds_34->t01F7 = bx_105;
		ds_34->t01F9 = dx_99;
		if (ds_34->b01FC != 0x00)
			fn0C00_01DD(dx_99, &Eq_246::t01F3);
		else
			fn0C00_01DD(dx_99, &Eq_246::t01F5);
		fn0C00_01C5(ds_34->w01F3, &Eq_9::t0002, es_29);
		fn0C00_01C5(ds_34->w01F5, &Eq_9::t013A, es_29);
		Mem131[ss:sp_26 - 0x0002:word16] = es_29;
		selector ds_132 = Mem131[ss:sp_26 - 0x0002:selector];
		Mem135[ss:sp_26 - 0x0002:word16] = 0xA000;
		selector es_136 = Mem135[ss:sp_26 - 0x0002:selector];
		sp_1 = sp_26;
		word16 cx_138 = 0x7D00;
		Eq_21 Eq_9::*si_140 = Eq_9::a0000;
		di = 0x0000;
		while (cx_138 != 0x0000)
		{
			Mem151[es_136:di + 0x0000:word16] = Mem135[ds_132:si_140 + 0x0000:word16];
			si_140 = si_140 + 1;
			di = di + 2;
			cx_138 = cx_138 - 0x0001;
		}
		__syscall(0x16);
	} while (0x0000 == 0x0000);
	bios_video_set_mode(0x03);
	fn0C00_01C5(0x0003, di, es_136);
	return;
}

void fn0C00_01C5(int16 ax, Eq_23 Eq_9::*di, Eq_9 * es)
{
	Eq_230 Eq_9::*di_12 = di + ax *s 0x0140;
	word16 cx_14 = 0x0010;
	do
	{
		(es->*di_12).dw0000 = 0x51515151;
		di_12 = di_12 + 1;
		cx_14 = cx_14 - 0x0001;
	} while (cx_14 != 0x0000);
	return;
}

void fn0C00_01DD(Eq_82 dx, Eq_82 Eq_246::*bp)
{
	if (dx < Mem0[ss:bp + 0x0000:word16])
		Mem13[ss:bp + 0x0000:word16] = Mem0[ss:bp + 0x0000:word16] - 0x0001;
	else if (dx - 0x000C >u Mem0[ss:bp + 0x0000:word16])
		Mem21[ss:bp + 0x0000:word16] = Mem0[ss:bp + 0x0000:word16] + 0x0001;
	return;
}

