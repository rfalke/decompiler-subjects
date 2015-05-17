// subject.c
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_303/ia32_com/subject.exe
// using Decompiler version VERSION

#include "subject.h"

void fn0C00_0100(Eq_24 * es, Eq_24 * ds)
{
fn0C00_0100_entry:
l0C00_0100:
	bios_video_set_mode(0x13)
	msmouse_define_horizontal_range(0x0000, 0x00FF)
	word16 cx_111 = 0x0000
	word16 dx_413 = 0x00FF
l0C00_010D:
	word16 Eq_24::*di_59 = &Eq_24::w0300
	word16 cx_65 = DPB(cx_111, 0x89, 0, 8)
l0C00_0114:
	branch cx_65 == 0x0000 l0C00_0116
l0C00_0114_1:
	es->*di_59 = 0x0000;
	di_59 = di_59 + 1;
	cx_65 = cx_65 - 0x0001;
	goto l0C00_0114
l0C00_0116:
	cx_111 = DPB(cx_65, 0x0E, 0, 8);
	uint16 ax_102 = 0x07FE
l0C00_011B:
	branch cx_111 == 0x0000 l0C00_011D
l0C00_011B_1:
	es->*di_59 = 0x07FE;
	di_59 = di_59 + 1;
	cx_111 = cx_111 - 0x0001;
	goto l0C00_011B
l0C00_011D:
	word16 bx_100 = 0x0102
l0C00_0120:
l0C00_0124:
	word16 ax_133 = DPB(ax_102, __inb(0x03DA), 0, 8)
	ax_102 = ax_133 & 0x0008;
	branch (ax_133 & 0x0008) == 0x0000 l0C00_0124
l0C00_012A:
	word16 cx_146 = DPB(cx_111, 0x7D, 8, 8)
	Eq_60 Eq_24::*si_147 = Eq_24::a042E
	word16 Eq_71::*di_148 = Eq_71::a0000
	byte Eq_24::*bx_149 = &Eq_24::b0000
l0C00_0138:
	word16 ax_159 = (ds->*si_147).w0000
	0xA002->*di_148 = ax_159;
	si_147 = si_147 + 1;
	(ds->*si_147).w0000 = 0x0000;
	Eq_81 al_160 = (byte) ax_159
	di_148 = di_148 + 1;
	cx_146 = cx_146 - 0x0001;
	branch cx_146 != 0x0000 l0C00_0138
l0C00_013F:
	es = ds;
	word16 di_170 = 0x132E
	Eq_91 Eq_24::*si_171 = &Eq_24::t0400
	word16 cx_173 = DPB(cx_146, 0x14, 0, 8)
l0C00_0148:
	(ds->*si_171).t0000 = al_160;
	si_171 = si_171 - 0x0001;
	Eq_81 bl_184 = (ds->*si_171).t0000
	(ds->*si_171).t0001 = bl_184;
	bx_149 = DPB(bx_149, bl_184, 0, 8);
	branch bl_184 == 0x00 l0C00_0156
l0C00_0154:
	bx_149[di_170] = bx_149[di_170] + 0x01;
l0C00_0156:
	cx_173 = cx_173 - 0x0001;
	di_170 = di_170 + 0x0A00;
	Eq_81 cl_195 = (byte) cx_173
	branch cx_173 != 0x0000 l0C00_0148
l0C00_015C:
	__syscall(0x33)
	Eq_81 v23_199 = ds->t021F
	ds->t021F = bl_184;
	Eq_81 bl_202 = bl_184 ^ v23_199
	branch bl_202 == 0x00 l0C00_016C
l0C00_016A:
	bl_202 = cl_195;
l0C00_016C:
	(ds->*si_171).t0000 = bl_202;
	fn0C00_020A(0x7E3C1818, di_170 + cx_173 - 0x0004, ds)
	int8 bh_225 = SLICE(bx_100, byte, 8)
	byte dl_244 = (byte) dx_413 + bh_225
	word16 bx_222 = bx_100
	byte bl_224 = (byte) bx_100
	byte ch_231 = SLICE(cx_111, byte, 8)
	uint16 ax_236 = ds->w0402
	word16 Eq_24::*si_237 = Eq_24::a0404
	uint16 Eq_24::*di_240 = Eq_24::a0404
	byte cl_241 = 0x00
	word16 cx_242 = DPB(cx_111, 0x00, 0, 8)
	word16 dx_245 = DPB(dx_413, dl_244, 0, 8)
	branch (dl_244 & 0xF0) == 0x00 l0C00_01A6
l0C00_018F:
	byte ch_434 = ch_231 & bl_224
	cl_241 = bh_225 & 0x0F;
	cx_242 = DPB(cx_242, ch_434, 8, 8);
	branch ch_434 == 0x00 l0C00_01A4
l0C00_0197:
	dl_244 = dl_244 - bh_225;
	dx_245 = DPB(dx_413, dl_244, 0, 8);
	bx_222 = DPB(bx_100, -bh_225, 8, 8);
	di_240 = &Eq_24::w0402;
	cl_241 = 0x00;
	cx_242 = DPB(cx_242, 0x00, 0, 8);
l0C00_01A4:
	dx_245 = DPB(dx_245, dl_244 & 0x0F, 0, 8);
l0C00_01A6:
	bool Eq_24::*bp_258 = dx_245 + 0xCC1E
	word16 Eq_24::*bx_261 = &Eq_24::w03EC
	word16 dx_267 = 0x0000
l0C00_01B2:
	uint16 ax_296 = __ror(ds->*si_237, cl_241)
	word16 v28_298 = ds->*bx_261
	ds->*bx_261 = cx_242;
	word16 Eq_24::*si_294 = si_237 + 1
	bcu8 cl_301 = (byte) v28_298
	branch cl_301 <u 0x08 l0C00_01C5
l0C00_01BD:
l0C00_01C5:
	word16 cx_313 = v28_298
	branch cl_301 >=u 0x08 l0C00_01CA
l0C00_01C8:
	cx_313 = DPB(v28_298, 0x00, 0, 8);
l0C00_01CA:
	word16 v29_319 = ds->*bx_261
	ds->*bx_261 = cx_313;
	ds->*di_240 = ax_296;
	word16 dx_322 = dx_267 | ax_296
	uint16 Eq_24::*di_326 = di_240 + 1
	uint16 dx_343 = ax_296
	bool Eq_24::*wLoc18_347 = bp_258
	bool C_348 = true
l0C00_01D4:
	bool Eq_24::*di_359 = wLoc18_347
l0C00_01D5:
	dx_343 = dx_343 * 0x0002 + C_348;
	di_359 = di_359 + 0x0010
	C_348 = cond(dx_343);
	branch dx_343 >=u 0x0000 l0C00_01D5
l0C00_01DC:
	branch dx_343 == 0x0000 l0C00_01EA
l0C00_01DE:
	wLoc18_347 = di_359;
	C_348 = fn0C00_020A(0x66FF997E, di_359, ds);
	goto l0C00_01D4
l0C00_01EA:
	byte bl_385 = (byte) bx_261
	di_240 = di_326;
	si_237 = si_294;
	dx_267 = dx_322;
	cx_242 = v29_319;
	cl_241 = (byte) v29_319;
	bp_258 = bp_258 - 0x0A00;
	bx_261 = DPB(bx_261, bl_385 + 0x01, 0, 8);
	branch bl_385 != 0x01 l0C00_01B2
l0C00_01F3:
	word16 dx_406 = __rol(dx_322, 0x01)
	cx_111 = DPB(v29_319, (byte) dx_406, 8, 8);
	dx_413 = dx_245;
	bx_100 = bx_222;
	ax_102 = ax_236;
	branch dx_406 == 0x0000 l0C00_0206
l0C00_01FE:
	ds->*di_326 = ax_236;
	branch ax_236 != 0x0000 l0C00_0209
l0C00_0203:
	goto l0C00_0120
l0C00_0206:
	goto l0C00_010D
l0C00_0209:
	return
fn0C00_0100_exit:
}

byte fn0C00_020A(uint32 ebx, bool Eq_24::*di, Eq_24 * es)
{
	do
	{
		word16 cx_18 = 0x0008;
		do
		{
			ebx = ebx >>u 0x00000001;
			es->*di = ebx <u 0x00000000;
			word16 bx_23 = (word16) ebx;
			di = di + 1;
			cx_18 = cx_18 - 0x0001;
		} while (cx_18 != 0x0000);
		di = di + 312;
		ebx = DPB(ebx, bx_23, 0, 16);
	} while (bx_23 != 0x0000);
	return false;
}

