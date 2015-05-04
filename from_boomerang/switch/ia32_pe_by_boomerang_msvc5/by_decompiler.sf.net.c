// subject.c
// Generated on 5/4/2015 12:03:59 AM by decompiling from_boomerang/switch/ia32_pe_by_boomerang_msvc5/subject.exe
// using Decompiler version 0.4.2.0.

#include "subject.h"

word32 fn00401000(word32 esi, word32 edi, word32 dwArg04, ptr32 ebxOut, ptr32 ebpOut)
{
	if (dwArg04 <=u 0xFFFFFFF9)
		switch (dwArg04 + 0xFFFFFFFE)
		{
		case 0:
			word32 ebp_20;
			word32 ebx_21;
			*ebxOut = fn004010A0(esi, edi, 0x00406060, out ebp_20);
			return 0x00000000;
			break;
		case 1:
			word32 ebp_28;
			word32 ebx_29;
			*ebxOut = fn004010A0(esi, edi, 0x00406058, out ebp_28);
			return 0x00000000;
			break;
		case 2:
			word32 ebp_36;
			word32 ebx_37;
			*ebxOut = fn004010A0(esi, edi, 0x00406050, out ebp_36);
			return 0x00000000;
			break;
		case 3:
			word32 ebp_44;
			word32 ebx_45;
			*ebxOut = fn004010A0(esi, edi, 0x00406048, out ebp_44);
			return 0x00000000;
			break;
		case 4:
			word32 ebp_52;
			word32 ebx_53;
			*ebxOut = fn004010A0(esi, edi, 0x00406040, out ebp_52);
			return 0x00000000;
			break;
		case 5:
			word32 ebp_60;
			word32 ebx_61;
			*ebxOut = fn004010A0(esi, edi, 0x00406038, out ebp_60);
			return 0x00000000;
			break;
		}
	else
	{
		word32 ebp_68;
		word32 ebx_69;
		*ebxOut = fn004010A0(esi, edi, 0x00406030, out ebp_68);
		return 0x00000000;
	}
}

word32 fn004010A0(word32 esi, word32 edi, word32 dwArg04, ptr32 ebpOut)
{
	fn00401230(0x00406098);
	word32 ebp_24;
	word32 esi_25;
	word32 ebx_26 = fn00401330(dwLoc18, 0x00406098, dwArg04, fp + 0x00000008, dwArg04, out ebp_24, out esi_25);
	Mem31[fp - 0x0000000C:word32] = 0x00406098;
	Mem33[fp - 0x00000010:word32] = esi_25;
	fn004012D0(dwArg00, dwArg04);
	return ebx_26;
}

void fn004010E0(word32 ebp, word32 edi, selector fs)
{
	Mem17[fs:0x00000000:word32] = fp - 0x00000014;
	word32 eax_29 = GetVersion();
	word32 edx_33 = (word32) SLICE(eax_29, byte, 8);
	Mem34[0x0040892C:word32] = edx_33;
	Mem37[0x00408928:word32] = eax_29 & 0x000000FF;
	Mem40[0x00408924:word32] = ((eax_29 & 0x000000FF) << 0x00000008) + edx_33;
	Mem43[0x00408920:word32] = eax_29 >>u 0x00000010;
	word32 ebp_121 = fp - 0x00000004;
	word32 esp_112 = fp + 0xFFFFFFD0;
	if (fn00402B80() == 0x00000000)
	{
		word32 esi_122;
		fn00401200(edi, out ebx, out ebp_121, out esi_122, out edi);
		esp_112 = fp + 0xFFFFFFD0;
	}
	Mem57[ebp_121 - 0x00000004:word32] = 0x00000000;
	fn00402980(edi);
	fn00402970();
	Mem59[0x00409D04:word32] = GetCommandLineA();
	word32 eax_60 = fn00402540();
	Mem61[0x004088F8:word32] = eax_60;
	if (eax_60 == 0x00000000 || Mem61[0x00409D04:word32] == 0x00000000)
	{
		word32 esp_109 = esp_112 - 0x00000004;
		Mem110[esp_109 + 0x00000000:word32] = 0xFFFFFFFF;
		fn00401F00(ebx, dwArg00);
		esp_112 = esp_109 + 0x00000004;
	}
	fn004021A0(fn00402290(), edi);
	word32 edi_70;
	word32 esi_71 = fn00401ED0(out edi_70);
	word32 eax_72 = Mem61[0x0040893C:word32];
	Mem73[0x00408940:word32] = eax_72;
	word32 esp_74 = esp_112 - 0x00000004;
	Mem75[esp_74 + 0x00000000:word32] = eax_72;
	Mem78[esp_74 - 0x00000004:word32] = Mem75[0x00408934:word32];
	Mem81[esp_74 - 0x00000008:word32] = Mem78[0x00408930:word32];
	word32 ebx_83;
	word32 ebp_84;
	word32 eax_85 = fn00401000(esi_71, edi_70, dwArg00, out ebx_83, out ebp_84);
	Mem88[ebp_84 - 0x0000001C:word32] = eax_85;
	Mem90[esp_74 + 0x00000000:word32] = eax_85;
	word32 ebp_91 = fn00401F00(ebx_83, dwArg00);
	Mem94[ebp_91 - 0x00000004:word32] = 0xFFFFFFFF;
	Mem96[fs:0x00000000:word32] = Mem94[ebp_91 - 0x00000010:word32];
	return;
}

word32 fn00401200(word32 edi, ptr32 ebxOut, ptr32 ebpOut, ptr32 esiOut, ptr32 ediOut)
{
	*ediOut = edi;
	*ebxOut = ebx;
	*ebpOut = ebp;
	*esiOut = esi;
	if (Mem0[0x00408900:word32] != 0x00000002)
		*ediOut = fn00402D90(edi);
	word32 eax_7 = Mem0[fp + 0x00000004:word32];
	Mem9[fp - 0x00000004:word32] = eax_7;
	word32 ecx_11 = fn00402DD0(edi, dwArg00);
	Mem15[fp - 0x00000004:word32] = 0x000000FF;
	Mem15[0x00406068:word32]();
	return ecx_11;
}

void fn00401230(word32 dwArg04)
{
	if (fn00403060(Mem0[dwArg04 + 0x00000010:word32]) != 0x00000000)
	{
		word32 edi_45;
		if (dwArg04 == 0x00406098)
		{
			edi_45 = 0x00000000;
l00401263:
			Mem48[0x00408910:word32] = Mem0[0x00408910:word32] + 0x00000001;
			if ((Mem48[dwArg04 + 0x0000000C:word32] & 0x0000010C) != 0x00000000)
				goto l004012CA;
			else if (0x00408908[edi_45 * 0x00000004] == 0x00000000)
			{
				word32 ecx_77;
				word32 eax_78 = fn00402FB0(0x00001000, out ecx_77);
				0x00408908[edi_45 * 0x00000004] = eax_78;
				if (eax_78 != 0x00000000)
				{
l0040129D:
					word32 eax_60 = 0x00408908[edi_45 * 0x00000004];
					Mem61[dwArg04 + 0x00000018:word32] = 0x00001000;
					Mem62[dwArg04 + 0x00000008:word32] = eax_60;
					Mem63[dwArg04 + 0x00000000:word32] = eax_60;
					word32 eax_64 = Mem63[dwArg04 + 0x0000000C:word32];
					Mem65[dwArg04 + 0x00000004:word32] = 0x00001000;
					Mem69[dwArg04 + 0x0000000C:word32] = eax_64 | 0x00001102;
					return;
				}
				else
				{
l004012CA:
					return;
				}
			}
			else
				goto l0040129D;
		}
		else if (dwArg04 == 0x004060B8)
		{
			edi_45 = 0x00000001;
			goto l00401263;
		}
		else
			goto l004012CA;
	}
	else
		goto l004012CA;
}

void fn004012D0(word32 dwArg04, word32 dwArg08)
{
	if (dwArg04 == 0x00000000)
		if ((SLICE(Mem0[dwArg08 + 0x0000000C:word32], byte, 8) & 0x10) != 0x00)
			fn004030E0(dwArg08);
	else if ((SLICE(Mem0[dwArg08 + 0x0000000C:word32], byte, 8) & 0x10) != 0x00)
	{
		fn004030E0(dwArg08);
		word32 eax_46 = Mem0[dwArg08 + 0x0000000C:word32];
		Mem53[dwArg08 + 0x00000018:word32] = 0x00000000;
		Mem54[dwArg08 + 0x0000000C:word32] = DPB(eax_46, SLICE(eax_46, byte, 8) & 0xEE, 8, 8);
		Mem55[dwArg08 + 0x00000000:word32] = 0x00000000;
		Mem56[dwArg08 + 0x00000008:word32] = 0x00000000;
		return;
	}
	else
	{
l00401322:
		return;
	}
}

word32 fn00401330(word32 dwArg00, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg1C, ptr32 ebpOut, ptr32 esiOut)
{
fn00401330_entry:
	def fp
	def ebx
	def ebp
	def esi
	def edi
	def dwArg08
	def Mem0
	def dwLoc0224
	def dwLoc022C
	def bLoc0239
	def dwLoc0204
	def dwArg0C
	def dwLoc0210
	def dwLoc020C
	def dwLoc0270
	def dh
	def bLoc0200
	def dwLoc0248
	def bLoc023A
	def wLoc0260
	def dwLoc026C
	def dwLoc0220
	def SO
	def edx_eax
	def ah
	def ax
	def CZ
	def al
	def dwLoc0218
	def dwLoc0228
	def dwLoc0234
	def dwLoc0238
	def dwLoc024C
	def dwLoc0244
	def dwLoc0230
	def edx
	def dwLoc0260
	def dwLoc0264
	def dwLoc0268
	def dwArg1C
	def dwArg00
	def dwArg04
	def ebpOut
	def esiOut
	def bh
	def dwLoc021C
	def bLoc024C
	def bLoc0224
	def wLoc0240
l00401330:
	esp_1 = fp
	esp_2 = fp - 0x0000024C
	esp_3 = fp - 0x00000250
	dwLoc0250_5 = ebx
	esp_6 = fp - 0x00000254
	dwLoc0254_8 = ebp
	esp_9 = fp - 0x00000258
	dwLoc0258_11 = esi
	esp_12 = fp - 0x0000025C
	dwLoc025C_14 = edi
	edi_16 = dwArg08
	ecx_17 = 0x00000000
	cl_18 = (byte) ecx_17 (alias)
	cx_19 = (word16) ecx_17 (alias)
	ch_20 = SLICE(ecx_17, byte, 8) (alias)
	ebp_21 = 0x00000000
	dwLoc0240_22 = 0x00000000
	bl_24 = Mem0[edi_16 + 0x00000000:byte]
	ebx_25 = DPB(ebx, bl_24, 0, 8) (alias)
	edi_26 = edi_16 + 0x00000001
	SZO_27 = cond(bl_24 & bl_24)
	Z_28 = SZO_27 (alias)
	C_29 = false
	bLoc021C_30 = bl_24
	dwArg08_31 = edi_26
	branch (bl_24 & bl_24) == 0x00 l00401B87
l0040135F:
	esi_133 = dwLoc0234
	goto l0040136D
l00401365:
	esi_252 = dwLoc0234_222
	ecx_253 = dwLoc0220_213
	cl_254 = (byte) ecx_253 (alias)
	cx_255 = (word16) ecx_253 (alias)
	ch_256 = SLICE(ecx_253, byte, 8) (alias)
l0040136D:
	dwLoc0224_135 = PHI(dwLoc0224, dwLoc0224_199)
	dwLoc022C_136 = PHI(dwLoc022C, dwLoc022C_200)
	bLoc0239_137 = PHI(bLoc0239, bLoc0239_201)
	dwLoc0204_138 = PHI(dwLoc0204, dwLoc0204_202)
	dwArg0C_139 = PHI(dwArg0C, dwArg0C_203)
	dwLoc0210_140 = PHI(dwLoc0210, dwLoc0210_204)
	dwLoc020C_141 = PHI(dwLoc020C, dwLoc020C_205)
	dwLoc0270_142 = PHI(dwLoc0270, dwLoc0270_206)
	bLoc0200_143 = PHI(bLoc0200, bLoc0200_208)
	dwLoc0248_144 = PHI(dwLoc0248, dwLoc0248_209)
	bLoc023A_145 = PHI(bLoc023A, bLoc023A_210)
	wLoc0260_146 = PHI(wLoc0260, wLoc0260_211)
	dwLoc026C_147 = PHI(dwLoc026C, dwLoc026C_212)
	dwLoc0220_148 = PHI(dwLoc0220, dwLoc0220_213)
	ah_149 = PHI(ah, ah_216)
	ax_150 = PHI(ax, ax_217)
	CZ_151 = PHI(CZ, CZ_218)
	al_152 = PHI(al, al_219)
	dwLoc0218_153 = PHI(dwLoc0218, dwLoc0218_220)
	dwLoc0228_154 = PHI(dwLoc0228, dwLoc0228_221)
	dwLoc0234_155 = PHI(dwLoc0234, dwLoc0234_222)
	dwLoc0238_156 = PHI(dwLoc0238, dwLoc0238_223)
	dwLoc024C_157 = PHI(dwLoc024C, dwLoc024C_224)
	dwLoc0244_158 = PHI(dwLoc0244, dwLoc0244_225)
	dwLoc0230_159 = PHI(dwLoc0230, dwLoc0230_226)
	dwLoc0260_160 = PHI(dwLoc0260, dwLoc0260_228)
	dwLoc0264_161 = PHI(dwLoc0264, dwLoc0264_229)
	dwLoc0268_162 = PHI(dwLoc0268, dwLoc0268_230)
	SZO_163 = PHI(SZO_27, SZO_247)
	Z_164 = PHI(Z_28, Z_248)
	C_165 = PHI(C_29, C_249)
	bLoc021C_166 = PHI(bLoc021C_30, bLoc021C_250)
	dwArg08_167 = PHI(dwArg08_31, dwArg08_251)
	ecx_168 = PHI(ecx_17, ecx_253)
	cl_169 = PHI(cl_18, cl_254)
	cx_170 = PHI(cx_19, cx_255)
	ch_171 = PHI(ch_20, ch_256)
	edi_172 = PHI(edi_26, edi_246)
	esi_173 = PHI(esi_133, esi_252)
	ebp_174 = PHI(ebp_21, ebp_238)
	ebx_175 = PHI(ebx_25, ebx_245)
	bl_176 = PHI(bl_24, bl_244)
	bh_177 = PHI(bh, bh_240)
	esp_178 = PHI(esp_12, esp_241)
	eax_179 = 0x00000000
	edx_180 = 0x00000000
	edx_eax_181 = SEQ(edx_180, eax_179) (alias)
	dh_182 = SLICE(edx_180, byte, 8) (alias)
	SCZO_183 = cond(0x00000000)
	SO_184 = SCZO_183 (alias)
	branch 0x00000000 < 0x00000000 l00401B87
l0040137B:
	SCZO_185 = cond(bl_176 - 0x20)
	SO_186 = SCZO_185 (alias)
	branch bl_176 < 0x20 l00401393
l00401380:
	SCZO_1575 = cond(bl_176 - 0x78)
	SZO_1576 = SCZO_1575 (alias)
	branch bl_176 > 0x78 l00401393
l00401385:
	eax_1577 = (int32) bl_176
	al_1578 = Mem0[eax_1577 + 0x00404FF0:byte]
	eax_1579 = DPB(eax_1577, al_1578, 0, 8) (alias)
	eax_1580 = eax_1579 & 0x0000000F
	edx_eax_1581 = SEQ(edx_180, eax_1580) (alias)
	al_1582 = (byte) eax_1580 (alias)
	ah_1583 = SLICE(eax_1580, byte, 8) (alias)
	ax_1584 = (word16) eax_1580 (alias)
	SZO_1585 = cond(eax_1580)
	C_1586 = false
	goto l00401395
l00401393:
	SCZO_1567 = PHI(SCZO_185, SCZO_1575)
	eax_1568 = 0x00000000
	edx_eax_1569 = SEQ(edx_180, eax_1568) (alias)
	al_1570 = (byte) eax_1568 (alias)
	ah_1571 = SLICE(eax_1568, byte, 8) (alias)
	ax_1572 = (word16) eax_1568 (alias)
	SZO_1573 = cond(0x00000000)
	C_1574 = false
l00401395:
	SZO_187 = PHI(SZO_1585, SZO_1573)
	C_188 = PHI(C_1586, C_1574)
	eax_189 = PHI(eax_1580, eax_1568)
	eax_190 = (int32) (ecx_168 + 0x00405010)[eax_189 * 0x08]
	eax_191 = eax_190 >> 0x00000004
	edx_eax_192 = SEQ(edx_180, eax_191) (alias)
	al_193 = (byte) eax_191 (alias)
	ah_194 = SLICE(eax_191, byte, 8) (alias)
	ax_195 = (word16) eax_191 (alias)
	SCZO_196 = cond(eax_191 - 0x00000007)
	CZ_197 = SCZO_196 (alias)
	dwLoc0220_198 = eax_191
	branch eax_191 >u 0x00000007 l00401B6A
l004013AD:
	switch (eax_191) { l00401530 l004013B4 l004013D9 l00401442 l0040148C l00401495 l004014DA l004015AA }
l004013B4:
	dwLoc0218_306 = edx_180
	dwLoc0228_307 = edx_180
	dwLoc0234_308 = edx_180
	dwLoc0238_309 = edx_180
	dwLoc024C_310 = edx_180
	dwLoc0244_311 = 0xFFFFFFFF
	dwLoc0230_312 = edx_180
	goto l00401B6A
l004013D9:
	eax_313 = (int32) bl_176
	eax_314 = eax_313 + 0xFFFFFFE0
	edx_eax_315 = SEQ(edx_180, eax_314) (alias)
	al_316 = (byte) eax_314 (alias)
	ah_317 = SLICE(eax_314, byte, 8) (alias)
	ax_318 = (word16) eax_314 (alias)
	SCZO_319 = cond(eax_314 - 0x00000010)
	CZ_320 = SCZO_319 (alias)
	branch eax_314 >u 0x00000010 l00401B6A
l004013E8:
	ecx_321 = 0x00000000
	SZO_322 = cond(0x00000000)
	C_323 = false
	cl_324 = Mem0[eax_314 + 0x00401BE4:byte]
	switch (eax_314) { l00401415 l00401B6A l00401B6A l00401424 l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401406 l00401B6A l004013F7 l00401B6A l00401B6A l00401433 }
l004013F7:
	eax_346 = dwLoc024C_157
	al_347 = (byte) eax_346 (alias)
	al_348 = al_347 | 0x04
	eax_349 = DPB(eax_346, al_348, 0, 8) (alias)
	SZO_350 = cond(al_348)
	C_351 = false
	dwLoc024C_352 = eax_349
	goto l00401B6A
l00401406:
	eax_339 = dwLoc024C_157
	al_340 = (byte) eax_339 (alias)
	al_341 = al_340 | 0x01
	eax_342 = DPB(eax_339, al_341, 0, 8) (alias)
	SZO_343 = cond(al_341)
	C_344 = false
	dwLoc024C_345 = eax_342
	goto l00401B6A
l00401415:
	eax_325 = dwLoc024C_157
	al_326 = (byte) eax_325 (alias)
	al_327 = al_326 | 0x02
	eax_328 = DPB(eax_325, al_327, 0, 8) (alias)
	SZO_329 = cond(al_327)
	C_330 = false
	dwLoc024C_331 = eax_328
	goto l00401B6A
l00401424:
	eax_332 = dwLoc024C_157
	al_333 = (byte) eax_332 (alias)
	al_334 = al_333 | 0x80
	eax_335 = DPB(eax_332, al_334, 0, 8) (alias)
	SZO_336 = cond(al_334)
	C_337 = false
	dwLoc024C_338 = eax_335
	goto l00401B6A
l00401433:
	eax_353 = dwLoc024C_157
	al_354 = (byte) eax_353 (alias)
	al_355 = al_354 | 0x08
	eax_356 = DPB(eax_353, al_355, 0, 8) (alias)
	SZO_357 = cond(al_355)
	C_358 = false
	dwLoc024C_359 = eax_356
	goto l00401B6A
l00401442:
	SCZO_360 = cond(bl_176 - 0x2A)
	Z_361 = SCZO_360 (alias)
	branch bl_176 != 0x2A l00401479
l00401447:
	edx_362 = fp + 0x0000000C
	esp_363 = fp - 0x00000260
	dwLoc0260_364 = fp + 0x0000000C
	eax_366 = fn00401D90(dwLoc0260_364, out ecx_365)
	edx_eax_367 = SEQ(edx_362, eax_366) (alias)
	al_368 = (byte) eax_366 (alias)
	ah_369 = SLICE(eax_366, byte, 8) (alias)
	ax_370 = (word16) eax_366 (alias)
	esp_371 = fp - 0x0000025C
	dwLoc0234_372 = eax_366
	SZO_373 = cond(eax_366 & eax_366)
	SO_374 = SZO_373 (alias)
	C_375 = false
	branch (eax_366 & eax_366) >= 0x00000000 l00401B6A
l00401463:
	edx_376 = dwLoc024C_157
	edx_377 = edx_376 | 0x00000004
	eax_378 = -eax_366
	SCZO_379 = cond(eax_378)
	C_380 = eax_378 == 0x00000000
	dwLoc024C_381 = edx_377
	dwLoc0234_382 = eax_378
	goto l00401B6A
l00401479:
	ecx_383 = (int32) bl_176
	eax_384 = esi_173 + esi_173 * 0x00000004
	edx_385 = ecx_383 - 0x00000030 + eax_384 * 0x00000002
	dwLoc0234_386 = edx_385
	goto l00401B6A
l0040148C:
	dwLoc0244_387 = edx_180
	goto l00401B6A
l00401495:
	SCZO_388 = cond(bl_176 - 0x2A)
	Z_389 = SCZO_388 (alias)
	branch bl_176 != 0x2A l004014C3
l0040149A:
	eax_390 = fp + 0x0000000C
	esp_391 = fp - 0x00000260
	dwLoc0260_392 = fp + 0x0000000C
	eax_394 = fn00401D90(dwLoc0260_392, out ecx_393)
	esp_395 = fp - 0x0000025C
	dwLoc0244_396 = eax_394
	SZO_397 = cond(eax_394 & eax_394)
	SO_398 = SZO_397 (alias)
	C_399 = false
	branch (eax_394 & eax_394) >= 0x00000000 l00401B6A
l004014B6:
	dwLoc0244_400 = 0xFFFFFFFF
	goto l00401B6A
l004014C3:
	eax_401 = dwLoc0244_158
	edx_402 = (int32) bl_176
	ecx_403 = eax_401 + eax_401 * 0x00000004
	eax_404 = edx_402 - 0x00000030 + ecx_403 * 0x00000002
	dwLoc0244_405 = eax_404
	goto l00401B6A
l004014DA:
	eax_406 = (int32) bl_176
	eax_407 = eax_406 + 0xFFFFFFB7
	edx_eax_408 = SEQ(edx_180, eax_407) (alias)
	al_409 = (byte) eax_407 (alias)
	ah_410 = SLICE(eax_407, byte, 8) (alias)
	ax_411 = (word16) eax_407 (alias)
	SCZO_412 = cond(eax_407 - 0x0000002E)
	CZ_413 = SCZO_412 (alias)
	branch eax_407 >u 0x0000002E l00401B6A
l004014E9:
	ecx_414 = 0x00000000
	SZO_415 = cond(0x00000000)
	C_416 = false
	cl_417 = Mem0[eax_407 + 0x00401C0C:byte]
	switch (eax_407) { l00401507 l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l0040158B l00401B6A l00401B6A l00401B6A l004014F8 l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l00401B6A l0040159A }
l004014F8:
	eax_441 = dwLoc024C_157
	al_442 = (byte) eax_441 (alias)
	al_443 = al_442 | 0x10
	eax_444 = DPB(eax_441, al_443, 0, 8) (alias)
	SZO_445 = cond(al_443)
	C_446 = false
	dwLoc024C_447 = eax_444
	goto l00401B6A
l00401507:
	SCZO_418 = cond(Mem0[edi_172 + 0x00000000:byte] - 0x36)
	Z_419 = SCZO_418 (alias)
	branch Mem0[edi_172 + 0x00000000:byte] != 0x36 l0040152C
l0040150C:
	SCZO_423 = cond(Mem0[edi_172 + 0x00000001:byte] - 0x34)
	Z_424 = SCZO_423 (alias)
	branch Mem0[edi_172 + 0x00000001:byte] != 0x34 l0040152C
l00401512:
	eax_425 = dwLoc024C_157
	ah_426 = SLICE(eax_425, byte, 8) (alias)
	edi_427 = edi_172 + 0x00000002
	ah_428 = ah_426 | 0x80
	eax_429 = DPB(eax_425, ah_428, 8, 8) (alias)
	SZO_430 = cond(ah_428)
	C_431 = false
	dwArg08_432 = edi_427
	dwLoc024C_433 = eax_429
	goto l00401B6A
l0040152C:
	Z_420 = PHI(Z_419, Z_424)
	SCZO_421 = PHI(SCZO_418, SCZO_423)
	dwLoc0220_422 = edx_180
l00401530:
	dwLoc0220_257 = PHI(dwLoc0220_198, dwLoc0220_422)
	edx_eax_258 = PHI(edx_eax_192, edx_eax_408)
	ah_259 = PHI(ah_194, ah_410)
	ax_260 = PHI(ax_195, ax_411)
	CZ_261 = PHI(CZ_197, CZ_413)
	al_262 = PHI(al_193, al_409)
	ecx_263 = PHI(ecx_168, ecx_414)
	cl_264 = PHI(cl_169, cl_417)
	SCZO_265 = PHI(SCZO_196, SCZO_421)
	eax_266 = Mem0[0x00406540:word32]
	dwLoc0230_267 = edx_180
	edx_269 = dwLoc021C
	edx_270 = edx_269 & 0x000000FF
	SZO_271 = cond((eax_266 + 0x00000001)[edx_270 * 0x02] & 0x80)
	Z_272 = SZO_271 (alias)
	C_273 = false
	branch ((eax_266 + 0x00000001)[edx_270 * 0x02] & 0x80) == 0x00 l0040156D
l0040154A:
	edx_290 = dwArg04
	ecx_291 = fp - 0x00000240
	eax_292 = (int32) bl_176
	esp_293 = fp - 0x00000260
	dwLoc0260_294 = fp - 0x00000240
	esp_295 = fp - 0x00000264
	dwLoc0264_296 = edx_290
	esp_297 = fp - 0x00000268
	dwLoc0268_298 = eax_292
	fn00401CC0(dwLoc0268_298, dwLoc0264_296, dwLoc0260_294)
	bl_299 = Mem0[edi_172 + 0x00000000:byte]
	ebx_300 = DPB(ebx_175, bl_299, 0, 8) (alias)
	esp_301 = fp - 0x0000025C
	SCZO_302 = cond(fp - 0x0000025C)
	edi_303 = edi_172 + 0x00000001
	SZO_304 = cond(edi_303)
	dwArg08_305 = edi_303
l0040156D:
	SZO_274 = PHI(SZO_271, SZO_304)
	dwArg08_275 = PHI(dwArg08_167, dwArg08_305)
	edi_276 = PHI(edi_172, edi_303)
	ebx_277 = PHI(ebx_175, ebx_300)
	bl_278 = PHI(bl_176, bl_299)
	edx_279 = dwArg04
	ecx_280 = fp - 0x00000240
	eax_281 = (int32) bl_278
	esp_282 = fp - 0x00000260
	dwLoc0260_283 = fp - 0x00000240
	esp_284 = fp - 0x00000264
	dwLoc0264_285 = edx_279
	esp_286 = fp - 0x00000268
	dwLoc0268_287 = eax_281
	fn00401CC0(dwLoc0268_287, dwLoc0264_285, dwLoc0260_283)
	esp_288 = fp - 0x0000025C
	SCZO_289 = cond(fp - 0x0000025C)
	goto l00401B6A
l0040158B:
	eax_434 = dwLoc024C_157
	al_435 = (byte) eax_434 (alias)
	al_436 = al_435 | 0x20
	eax_437 = DPB(eax_434, al_436, 0, 8) (alias)
	SZO_438 = cond(al_436)
	C_439 = false
	dwLoc024C_440 = eax_437
	goto l00401B6A
l0040159A:
	eax_448 = dwLoc024C_157
	ah_449 = SLICE(eax_448, byte, 8) (alias)
	ah_450 = ah_449 | 0x08
	eax_451 = DPB(eax_448, ah_450, 8, 8) (alias)
	SZO_452 = cond(ah_450)
	C_453 = false
	dwLoc024C_454 = eax_451
	goto l00401B6A
l004015AA:
	eax_455 = (int32) bl_176
	eax_456 = eax_455 + 0xFFFFFFBD
	edx_eax_457 = SEQ(edx_180, eax_456) (alias)
	al_458 = (byte) eax_456 (alias)
	ah_459 = SLICE(eax_456, byte, 8) (alias)
	ax_460 = (word16) eax_456 (alias)
	SCZO_461 = cond(eax_456 - 0x00000035)
	CZ_462 = SCZO_461 (alias)
	branch eax_456 >u 0x00000035 l00401A50
l004015B9:
	ecx_724 = 0x00000000
	SZO_725 = cond(0x00000000)
	C_726 = false
	cl_727 = Mem0[eax_456 + 0x00401C80:byte]
	switch (eax_456) { l004015C8 l00401A50 l00401797 l00401A50 l00401797 l00401A50 l00401A50 l00401A50 l00401A50 l00401A50 l00401A50 l00401A50 l00401A50 l00401A50 l00401A50 l00401A50 l004016AC l00401A50 l00401A50 l00401A50 l00401A50 l004018A0 l00401A50 l00401643 l00401A50 l00401A50 l00401A50 l00401A50 l00401A50 l00401A50 l00401A50 l00401A50 l004015DA l0040187A l004017A2 l004017A2 l004017A2 l00401A50 l0040187A l00401A50 l00401A50 l00401A50 l00401A50 l00401756 l004018DC l00401898 l00401A50 l00401A50 l004016BE l00401A50 l0040188E l00401A50 l00401A50 l004018AA }
l004015C8:
	eax_783 = dwLoc024C_157
	edx_eax_784 = SEQ(edx_180, eax_783) (alias)
	al_785 = (byte) eax_783 (alias)
	ah_786 = SLICE(eax_783, byte, 8) (alias)
	ax_787 = (word16) eax_783 (alias)
	SZO_788 = cond(eax_783 & 0x00000830)
	Z_789 = SZO_788 (alias)
	C_790 = false
	branch (eax_783 & 0x00000830) != 0x00000000 l004015DA
l004015D3:
	ah_791 = ah_786 | 0x08
	eax_792 = DPB(eax_783, ah_791, 8, 8) (alias)
	SZO_793 = cond(ah_791)
	C_794 = false
	dwLoc024C_795 = eax_792
l004015DA:
	edx_eax_728 = PHI(edx_eax_457, edx_eax_784, edx_eax_784)
	ah_729 = PHI(ah_459, ah_786, ah_791)
	ax_730 = PHI(ax_460, ax_787, ax_787)
	al_731 = PHI(al_458, al_785, al_785)
	dwLoc024C_732 = PHI(dwLoc024C_157, dwLoc024C_157, dwLoc024C_795)
	eax_733 = PHI(eax_456, eax_783, eax_792)
	SZO_734 = cond(dwLoc024C_732 & 0x00000810)
	Z_735 = SZO_734 (alias)
	C_736 = false
	branch (dwLoc024C_732 & 0x00000810) == 0x00000000 l0040161D
l004015E4:
	edx_752 = fp + 0x0000000C
	esp_753 = fp - 0x00000260
	dwLoc0260_754 = fp + 0x0000000C
	eax_755 = fn00401DD0(dwLoc0260_754)
	esp_756 = fp - 0x0000025C
	SCZO_757 = cond(fp - 0x0000025C)
	esp_758 = fp - 0x00000260
	dwLoc0260_759 = eax_755
	wLoc0260_760 = (word16) dwLoc0260_759 (alias)
	eax_761 = fp - 0x00000200
	esp_762 = fp - 0x00000264
	dwLoc0264_763 = fp - 0x00000200
	eax_764 = fn004031E0(dwLoc0264_763, wLoc0260_760)
	ebp_765 = eax_764
	esp_766 = fp - 0x0000025C
	SZO_767 = cond(ebp_765 & ebp_765)
	SO_768 = SZO_767 (alias)
	C_769 = false
	branch (ebp_765 & ebp_765) >= 0x00000000 l00401636
l00401608:
	edx_770 = fp - 0x00000200
	dwLoc0228_771 = 0x00000001
	dwLoc0248_772 = fp - 0x00000200
	goto l00401A50
l0040161D:
	ecx_773 = fp + 0x0000000C
	esp_774 = fp - 0x00000260
	dwLoc0260_775 = fp + 0x0000000C
	eax_777 = fn00401D90(dwLoc0260_775, out ecx_776)
	al_778 = (byte) eax_777 (alias)
	esp_779 = fp - 0x0000025C
	SCZO_780 = cond(fp - 0x0000025C)
	bLoc0200_781 = al_778
	ebp_782 = 0x00000001
l00401636:
	bLoc0200_737 = PHI(bLoc0200_143, bLoc0200_781)
	wLoc0260_738 = PHI(wLoc0260_760, wLoc0260_146)
	SO_739 = PHI(SO_768, SO_186)
	al_740 = PHI(al_731, al_778)
	dwLoc0260_741 = PHI(dwLoc0260_759, dwLoc0260_775)
	dwLoc0264_742 = PHI(dwLoc0264_763, dwLoc0264_161)
	SZO_743 = PHI(SZO_767, SZO_734)
	C_744 = PHI(C_769, C_736)
	ecx_745 = PHI(ecx_724, ecx_776)
	eax_746 = PHI(eax_764, eax_777)
	ebp_747 = PHI(ebp_765, ebp_782)
	esp_748 = PHI(esp_766, esp_779)
	SCZO_749 = PHI(SCZO_757, SCZO_780)
	edx_750 = fp - 0x00000200
	dwLoc0248_751 = fp - 0x00000200
	goto l00401A50
l00401643:
	eax_1450 = fp + 0x0000000C
	esp_1451 = fp - 0x00000260
	dwLoc0260_1452 = fp + 0x0000000C
	eax_1454 = fn00401D90(dwLoc0260_1452, out ecx_1453)
	edx_eax_1455 = SEQ(edx_180, eax_1454) (alias)
	al_1456 = (byte) eax_1454 (alias)
	ah_1457 = SLICE(eax_1454, byte, 8) (alias)
	ax_1458 = (word16) eax_1454 (alias)
	esp_1459 = fp - 0x0000025C
	SZO_1460 = cond(eax_1454 & eax_1454)
	Z_1461 = SZO_1460 (alias)
	C_1462 = false
	branch (eax_1454 & eax_1454) == 0x00000000 l00401691
l00401657:
	ecx_1502 = Mem0[eax_1454 + 0x00000004:word32]
	cl_1503 = (byte) ecx_1502 (alias)
	cx_1504 = (word16) ecx_1502 (alias)
	ch_1505 = SLICE(ecx_1502, byte, 8) (alias)
	SZO_1506 = cond(ecx_1502 & ecx_1502)
	Z_1507 = SZO_1506 (alias)
	C_1508 = false
	branch (ecx_1502 & ecx_1502) == 0x00000000 l00401691
l0040165E:
	edx_1509 = dwLoc024C_157
	edx_eax_1510 = SEQ(edx_1509, eax_1454) (alias)
	dh_1511 = SLICE(edx_1509, byte, 8) (alias)
	SZO_1512 = cond(dh_1511 & 0x08)
	Z_1513 = SZO_1512 (alias)
	C_1514 = false
	branch (dh_1511 & 0x08) == 0x00 l0040167D
l00401667:
	ebp_1515 = (int32) Mem0[eax_1454 + 0x00000000:word16]
	dwLoc0248_1516 = ecx_1502
	dwLoc0230_1517 = 0x00000001
	ebp_1518 = ebp_1515 >>u 0x00000001
	SCZO_1519 = cond(ebp_1518)
	goto l00401A50
l0040167D:
	ebp_1520 = (int32) Mem0[eax_1454 + 0x00000000:word16]
	dwLoc0230_1521 = 0x00000000
	dwLoc0248_1522 = ecx_1502
	goto l00401A50
l00401691:
	Z_1463 = PHI(Z_1461, Z_1507)
	ecx_1464 = PHI(ecx_1453, ecx_1502)
	edi_1465 = Mem0[0x00406070:word32]
	ecx_1466 = ecx_1464 | 0xFFFFFFFF
	cl_1467 = (byte) ecx_1466 (alias)
	cx_1468 = (word16) ecx_1466 (alias)
	ch_1469 = SLICE(ecx_1466, byte, 8) (alias)
	eax_1470 = 0x00000000
	edx_eax_1471 = SEQ(edx_180, eax_1470) (alias)
	al_1472 = (byte) eax_1470 (alias)
	ax_1473 = (word16) eax_1470 (alias)
	SZO_1474 = cond(0x00000000)
	C_1475 = false
	dwLoc0248_1476 = edi_1465
l004016A0:
	Z_1477 = PHI(Z_1463, Z_1496)
	ecx_1478 = PHI(ecx_1466, ecx_1498)
	cl_1479 = PHI(cl_1467, cl_1499)
	cx_1480 = PHI(cx_1468, cx_1500)
	ch_1481 = PHI(ch_1469, ch_1501)
	edi_1482 = PHI(edi_1465, edi_1497)
	SCZO_1483 = PHI(SCZO_461, SCZO_1495)
	branch ecx_1478 == 0x00000000 l004016A2
l004016A0_1:
	SCZO_1495 = cond(al_1472 - Mem0[edi_1482 + 0x00000000:byte])
	Z_1496 = SCZO_1495 (alias)
	edi_1497 = edi_1482 + 0x00000001
	ecx_1498 = ecx_1478 - 0x00000001
	cl_1499 = (byte) ecx_1498 (alias)
	cx_1500 = (word16) ecx_1498 (alias)
	ch_1501 = SLICE(ecx_1498, byte, 8) (alias)
	branch al_1472 != Mem0[edi_1482 + 0x00000000:byte] l004016A0
l004016A2:
	Z_1484 = PHI(Z_1477, Z_1496)
	ecx_1485 = PHI(ecx_1478, ecx_1498)
	cl_1486 = PHI(cl_1479, cl_1499)
	cx_1487 = PHI(cx_1480, cx_1500)
	ch_1488 = PHI(ch_1481, ch_1501)
	edi_1489 = PHI(edi_1482, edi_1497)
	SCZO_1490 = PHI(SCZO_1483, SCZO_1495)
	ecx_1491 = ~ecx_1485
	ecx_1492 = ecx_1491 - 0x00000001
	SZO_1493 = cond(ecx_1492)
	ebp_1494 = ecx_1492
	goto l00401A50
l004016AC:
	eax_1111 = dwLoc024C_157
	edx_eax_1112 = SEQ(edx_180, eax_1111) (alias)
	al_1113 = (byte) eax_1111 (alias)
	ah_1114 = SLICE(eax_1111, byte, 8) (alias)
	ax_1115 = (word16) eax_1111 (alias)
	SZO_1116 = cond(eax_1111 & 0x00000830)
	Z_1117 = SZO_1116 (alias)
	C_1118 = false
	branch (eax_1111 & 0x00000830) != 0x00000000 l004016BE
l004016B7:
	ah_1119 = ah_1114 | 0x08
	eax_1120 = DPB(eax_1111, ah_1119, 8, 8) (alias)
	SZO_1121 = cond(ah_1119)
	C_1122 = false
	dwLoc024C_1123 = eax_1120
l004016BE:
	dwLoc024C_967 = PHI(dwLoc024C_157, dwLoc024C_157, dwLoc024C_1123)
	SZO_968 = PHI(SZO_725, SZO_1116, SZO_1121)
	C_969 = PHI(C_726, C_1118, C_1122)
	eax_970 = dwLoc0244_158
	edx_eax_971 = SEQ(edx_180, eax_970) (alias)
	al_972 = (byte) eax_970 (alias)
	ah_973 = SLICE(eax_970, byte, 8) (alias)
	ax_974 = (word16) eax_970 (alias)
	esi_975 = 0x7FFFFFFF
	SCZO_976 = cond(eax_970 - 0xFFFFFFFF)
	Z_977 = SCZO_976 (alias)
	branch eax_970 == 0xFFFFFFFF l004016CE
l004016CC:
	esi_1110 = eax_970
l004016CE:
	esi_978 = PHI(esi_975, esi_1110)
	ecx_979 = fp + 0x0000000C
	esp_980 = fp - 0x00000260
	dwLoc0260_981 = fp + 0x0000000C
	eax_983 = fn00401D90(dwLoc0260_981, out ecx_982)
	ecx_984 = eax_983
	cl_985 = (byte) ecx_984 (alias)
	cx_986 = (word16) ecx_984 (alias)
	ch_987 = SLICE(ecx_984, byte, 8) (alias)
	eax_988 = dwLoc024C_967
	esp_989 = fp - 0x0000025C
	dwLoc0248_990 = ecx_984
	SZO_991 = cond(eax_988 & 0x00000810)
	Z_992 = SZO_991 (alias)
	C_993 = false
	branch (eax_988 & 0x00000810) == 0x00000000 l00401729
l004016EF:
	SZO_994 = cond(ecx_984 & ecx_984)
	Z_995 = SZO_994 (alias)
	C_996 = false
	branch (ecx_984 & ecx_984) != 0x00000000 l004016FD
l004016F3:
	ecx_1048 = Mem0[0x00406074:word32]
	cl_1049 = (byte) ecx_1048 (alias)
	cx_1050 = (word16) ecx_1048 (alias)
	ch_1051 = SLICE(ecx_1048, byte, 8) (alias)
	dwLoc0248_1052 = ecx_1048
l004016FD:
	dwLoc0248_997 = PHI(dwLoc0248_990, dwLoc0248_1052)
	ecx_998 = PHI(ecx_984, ecx_1048)
	cl_999 = PHI(cl_985, cl_1049)
	cx_1000 = PHI(cx_986, cx_1050)
	ch_1001 = PHI(ch_987, ch_1051)
	edx_1002 = esi_978
	esi_1003 = esi_978 - 0x00000001
	SZO_1004 = cond(edx_1002 & edx_1002)
	Z_1005 = SZO_1004 (alias)
	C_1006 = false
	dwLoc0230_1007 = 0x00000001
	eax_1008 = ecx_998
	edx_eax_1009 = SEQ(edx_1002, eax_1008) (alias)
	al_1010 = (byte) eax_1008 (alias)
	ah_1011 = SLICE(eax_1008, byte, 8) (alias)
	ax_1012 = (word16) eax_1008 (alias)
	branch (edx_1002 & edx_1002) == 0x00000000 l0040171E
l0040170E:
	edx_eax_1027 = PHI(edx_eax_1009, edx_eax_1043)
	ah_1028 = PHI(ah_1011, ah_1040)
	ax_1029 = PHI(ax_1012, ax_1041)
	al_1030 = PHI(al_1010, al_1039)
	edx_1031 = PHI(edx_1002, edx_1042)
	SZO_1032 = PHI(SZO_1004, SZO_1045)
	C_1033 = PHI(C_1006, C_1047)
	eax_1034 = PHI(eax_1008, eax_1038)
	esi_1035 = PHI(esi_1003, esi_1044)
	SCZO_1036 = cond(Mem0[eax_1034 + 0x00000000:word16] - 0x0000)
	Z_1037 = SCZO_1036 (alias)
	branch Mem0[eax_1034 + 0x00000000:word16] == 0x0000 l0040171E
l00401714:
	eax_1038 = eax_1034 + 0x00000002
	al_1039 = (byte) eax_1038 (alias)
	ah_1040 = SLICE(eax_1038, byte, 8) (alias)
	ax_1041 = (word16) eax_1038 (alias)
	edx_1042 = esi_1035
	edx_eax_1043 = SEQ(edx_1042, eax_1038) (alias)
	esi_1044 = esi_1035 - 0x00000001
	SZO_1045 = cond(edx_1042 & edx_1042)
	Z_1046 = SZO_1045 (alias)
	C_1047 = false
	branch (edx_1042 & edx_1042) != 0x00000000 l0040170E
l0040171E:
	edx_eax_1013 = PHI(edx_eax_1009, edx_eax_1027, edx_eax_1043)
	ah_1014 = PHI(ah_1011, ah_1028, ah_1040)
	ax_1015 = PHI(ax_1012, ax_1029, ax_1041)
	al_1016 = PHI(al_1010, al_1030, al_1039)
	edx_1017 = PHI(edx_1002, edx_1031, edx_1042)
	SZO_1018 = PHI(SZO_1004, SZO_1032, SZO_1045)
	Z_1019 = PHI(Z_1005, Z_1037, Z_1046)
	C_1020 = PHI(C_1006, C_1033, C_1047)
	eax_1021 = PHI(eax_1008, eax_1034, eax_1038)
	esi_1022 = PHI(esi_1003, esi_1035, esi_1044)
	eax_1023 = eax_1021 - ecx_998
	eax_1024 = eax_1023 >> 0x00000001
	SCZO_1025 = cond(eax_1024)
	ebp_1026 = eax_1024
	goto l00401A50
l00401729:
	SZO_1053 = cond(ecx_984 & ecx_984)
	Z_1054 = SZO_1053 (alias)
	C_1055 = false
	branch (ecx_984 & ecx_984) != 0x00000000 l00401737
l0040172D:
	ecx_1105 = Mem0[0x00406070:word32]
	cl_1106 = (byte) ecx_1105 (alias)
	cx_1107 = (word16) ecx_1105 (alias)
	ch_1108 = SLICE(ecx_1105, byte, 8) (alias)
	dwLoc0248_1109 = ecx_1105
l00401737:
	dwLoc0248_1056 = PHI(dwLoc0248_990, dwLoc0248_1109)
	ecx_1057 = PHI(ecx_984, ecx_1105)
	cl_1058 = PHI(cl_985, cl_1106)
	cx_1059 = PHI(cx_986, cx_1107)
	ch_1060 = PHI(ch_987, ch_1108)
	edx_1061 = esi_978
	esi_1062 = esi_978 - 0x00000001
	SZO_1063 = cond(edx_1061 & edx_1061)
	Z_1064 = SZO_1063 (alias)
	C_1065 = false
	eax_1066 = ecx_1057
	edx_eax_1067 = SEQ(edx_1061, eax_1066) (alias)
	al_1068 = (byte) eax_1066 (alias)
	ah_1069 = SLICE(eax_1066, byte, 8) (alias)
	ax_1070 = (word16) eax_1066 (alias)
	branch (edx_1061 & edx_1061) == 0x00000000 l0040174D
l00401740:
	edx_eax_1084 = PHI(edx_eax_1067, edx_eax_1100)
	ah_1085 = PHI(ah_1069, ah_1097)
	ax_1086 = PHI(ax_1070, ax_1098)
	al_1087 = PHI(al_1068, al_1096)
	edx_1088 = PHI(edx_1061, edx_1099)
	SZO_1089 = PHI(SZO_1063, SZO_1102)
	C_1090 = PHI(C_1065, C_1104)
	eax_1091 = PHI(eax_1066, eax_1095)
	esi_1092 = PHI(esi_1062, esi_1101)
	SCZO_1093 = cond(Mem0[eax_1091 + 0x00000000:byte] - 0x00)
	Z_1094 = SCZO_1093 (alias)
	branch Mem0[eax_1091 + 0x00000000:byte] == 0x00 l0040174D
l00401745:
	eax_1095 = eax_1091 + 0x00000001
	al_1096 = (byte) eax_1095 (alias)
	ah_1097 = SLICE(eax_1095, byte, 8) (alias)
	ax_1098 = (word16) eax_1095 (alias)
	edx_1099 = esi_1092
	edx_eax_1100 = SEQ(edx_1099, eax_1095) (alias)
	esi_1101 = esi_1092 - 0x00000001
	SZO_1102 = cond(edx_1099 & edx_1099)
	Z_1103 = SZO_1102 (alias)
	C_1104 = false
	branch (edx_1099 & edx_1099) != 0x00000000 l00401740
l0040174D:
	edx_eax_1071 = PHI(edx_eax_1067, edx_eax_1084, edx_eax_1100)
	ah_1072 = PHI(ah_1069, ah_1085, ah_1097)
	ax_1073 = PHI(ax_1070, ax_1086, ax_1098)
	al_1074 = PHI(al_1068, al_1087, al_1096)
	edx_1075 = PHI(edx_1061, edx_1088, edx_1099)
	SZO_1076 = PHI(SZO_1063, SZO_1089, SZO_1102)
	Z_1077 = PHI(Z_1064, Z_1094, Z_1103)
	C_1078 = PHI(C_1065, C_1090, C_1104)
	eax_1079 = PHI(eax_1066, eax_1091, eax_1095)
	esi_1080 = PHI(esi_1062, esi_1092, esi_1101)
	eax_1081 = eax_1079 - ecx_1057
	SCZO_1082 = cond(eax_1081)
	ebp_1083 = eax_1081
	goto l00401A50
l00401756:
	eax_1531 = fp + 0x0000000C
	esp_1532 = fp - 0x00000260
	dwLoc0260_1533 = fp + 0x0000000C
	eax_1535 = fn00401D90(dwLoc0260_1533, out ecx_1534)
	edx_eax_1536 = SEQ(edx_180, eax_1535) (alias)
	al_1537 = (byte) eax_1535 (alias)
	ah_1538 = SLICE(eax_1535, byte, 8) (alias)
	ax_1539 = (word16) eax_1535 (alias)
	cl_1540 = bLoc024C
	esp_1541 = fp - 0x0000025C
	SZO_1542 = cond(cl_1540 & 0x20)
	Z_1543 = SZO_1542 (alias)
	C_1544 = false
	branch (cl_1540 & 0x20) == 0x00 l00401784
l0040176F:
	cx_1546 = wLoc0240
	dwLoc0228_1547 = 0x00000001
	Mem1548[eax_1535 + 0x00000000:word16] = cx_1546
	goto l00401A50
l00401784:
	edx_1549 = 0x00000000
	dwLoc0228_1550 = 0x00000001
	Mem1551[eax_1535 + 0x00000000:word32] = 0x00000000
	goto l00401A50
l00401797:
	dwLoc0218_963 = 0x00000001
	bl_964 = bl_176 + 0x20
	ebx_965 = DPB(ebx_175, bl_964, 0, 8) (alias)
	SCZO_966 = cond(bl_964)
l004017A2:
	dwLoc0218_796 = PHI(dwLoc0218_153, dwLoc0218, dwLoc0218, dwLoc0218_963)
	ebx_797 = PHI(ebx_175, ebx, ebx, ebx_965)
	bl_798 = PHI(bl_176, bl, bl, bl_964)
	edx_799 = dwLoc024C_157
	eax_800 = fp - 0x00000200
	dwLoc0248_801 = fp - 0x00000200
	eax_802 = dwLoc0244_158
	edx_803 = edx_799 | 0x00000040
	SZO_804 = cond(eax_802 & eax_802)
	Z_805 = SZO_804 (alias)
	SO_806 = SZO_804 (alias)
	C_807 = false
	SCZO_808 = C_807 (alias)
	CZ_809 = C_807 (alias)
	dwLoc024C_810 = edx_803
	branch (eax_802 & eax_802) >= 0x00000000 l004017C7
l004017BD:
	dwLoc0244_959 = 0x00000006
	goto l004017D6
l004017C7:
	branch (eax_802 & eax_802) != 0x00000000 l004017D6
l004017C9:
	SCZO_960 = cond(bl_798 - 0x67)
	Z_961 = SCZO_960 (alias)
	branch bl_798 != 0x67 l004017D6
l004017CE:
	dwLoc0244_962 = 0x00000001
l004017D6:
	dwLoc0244_811 = PHI(dwLoc0244_959, dwLoc0244_158, dwLoc0244_158, dwLoc0244_962)
	eax_812 = dwArg0C_139
	edi_813 = dwLoc0244_811
	eax_814 = eax_812 + 0x00000008
	SCZO_815 = cond(eax_814)
	dwArg0C_816 = eax_814
	ecx_817 = Mem0[eax_814 - 0x00000008:word32]
	dwLoc0210_818 = ecx_817
	edx_819 = Mem0[eax_814 - 0x00000004:word32]
	eax_820 = dwLoc0218_796
	dwLoc020C_821 = edx_819
	ecx_822 = (int32) bl_798
	cl_823 = (byte) ecx_822 (alias)
	cx_824 = (word16) ecx_822 (alias)
	ch_825 = SLICE(ecx_822, byte, 8) (alias)
	esp_826 = fp - 0x00000260
	dwLoc0260_827 = eax_820
	esp_828 = fp - 0x00000264
	dwLoc0264_829 = edi_813
	edx_830 = fp - 0x00000200
	esp_831 = fp - 0x00000268
	dwLoc0268_832 = ecx_822
	eax_833 = fp - 0x00000210
	esp_834 = fp - 0x0000026C
	dwLoc026C_835 = fp - 0x00000200
	esp_836 = fp - 0x00000270
	dwLoc0270_837 = fp - 0x00000210
	call Mem0[0x00406528:word32] (retsize: 4; depth: 628)
	esi_838 = dwLoc024C_810
	esp_839 = fp - 0x0000025C
	esi_840 = esi_838 & 0x00000080
	SZO_841 = cond(esi_840)
	Z_842 = SZO_841 (alias)
	C_843 = false
	branch esi_840 == 0x00000000 l00401834
l00401822:
	SZO_948 = cond(edi_813 & edi_813)
	Z_949 = SZO_948 (alias)
	C_950 = false
	branch (edi_813 & edi_813) != 0x00000000 l00401834
l00401826:
	ecx_951 = fp - 0x00000200
	cl_952 = (byte) ecx_951 (alias)
	cx_953 = (word16) ecx_951 (alias)
	ch_954 = SLICE(ecx_951, byte, 8) (alias)
	esp_955 = fp - 0x00000260
	dwLoc0260_956 = fp - 0x00000200
	call Mem0[0x00406534:word32] (retsize: 4; depth: 612)
	esp_957 = fp - 0x0000025C
	SCZO_958 = cond(fp - 0x0000025C)
l00401834:
	dh_844 = PHI(dh_182, dh_182, dh_182)
	SO_845 = PHI(SO_806, SO_806, SO_806)
	ah_846 = PHI(ah_459, ah_459, ah_459)
	ax_847 = PHI(ax_460, ax_460, ax_460)
	CZ_848 = PHI(CZ_809, CZ_809, CZ_809)
	al_849 = PHI(al_458, al_458, al_458)
	edx_850 = PHI(edx_830, edx_830, edx_830)
	dwLoc0260_851 = PHI(dwLoc0260_827, dwLoc0260_827, dwLoc0260_956)
	SZO_852 = PHI(SZO_841, SZO_948, SZO_948)
	C_853 = PHI(C_843, C_950, C_950)
	ecx_854 = PHI(ecx_822, ecx_822, ecx_951)
	cl_855 = PHI(cl_823, cl_823, cl_952)
	cx_856 = PHI(cx_824, cx_824, cx_953)
	ch_857 = PHI(ch_825, ch_825, ch_954)
	eax_858 = PHI(eax_833, eax_833, eax_833)
	edi_859 = PHI(edi_813, edi_813, edi_813)
	esi_860 = PHI(esi_840, esi_840, esi_840)
	ebp_861 = PHI(ebp_174, ebp_174, ebp_174)
	ebx_862 = PHI(ebx_797, ebx_797, ebx_797)
	bl_863 = PHI(bl_798, bl_798, bl_798)
	bh_864 = PHI(bh_177, bh_177, bh_177)
	esp_865 = PHI(esp_839, esp_839, esp_957)
	SCZO_866 = cond(bl_863 - 0x67)
	Z_867 = SCZO_866 (alias)
	branch bl_863 != 0x67 l0040184B
l00401839:
	SZO_940 = cond(esi_860 & esi_860)
	Z_941 = SZO_940 (alias)
	C_942 = false
	branch (esi_860 & esi_860) != 0x00000000 l0040184B
l0040183D:
	edx_943 = fp - 0x00000200
	esp_944 = fp - 0x00000260
	dwLoc0260_945 = fp - 0x00000200
	call Mem0[0x0040652C:word32] (retsize: 4; depth: 612)
	esp_946 = fp - 0x0000025C
	SCZO_947 = cond(fp - 0x0000025C)
l0040184B:
	dh_868 = PHI(dh_844, dh_844, dh_844)
	SO_869 = PHI(SO_845, SO_845, SO_845)
	ah_870 = PHI(ah_846, ah_846, ah_846)
	ax_871 = PHI(ax_847, ax_847, ax_847)
	CZ_872 = PHI(CZ_848, CZ_848, CZ_848)
	al_873 = PHI(al_849, al_849, al_849)
	edx_874 = PHI(edx_850, edx_850, edx_943)
	dwLoc0260_875 = PHI(dwLoc0260_851, dwLoc0260_851, dwLoc0260_945)
	SZO_876 = PHI(SZO_852, SZO_940, SZO_940)
	C_877 = PHI(C_853, C_942, C_942)
	ecx_878 = PHI(ecx_854, ecx_854, ecx_854)
	cl_879 = PHI(cl_855, cl_855, cl_855)
	cx_880 = PHI(cx_856, cx_856, cx_856)
	ch_881 = PHI(ch_857, ch_857, ch_857)
	eax_882 = PHI(eax_858, eax_858, eax_858)
	edi_883 = PHI(edi_859, edi_859, edi_859)
	esi_884 = PHI(esi_860, esi_860, esi_860)
	ebp_885 = PHI(ebp_861, ebp_861, ebp_861)
	ebx_886 = PHI(ebx_862, ebx_862, ebx_862)
	bl_887 = PHI(bl_863, bl_863, bl_863)
	bh_888 = PHI(bh_864, bh_864, bh_864)
	esp_889 = PHI(esp_865, esp_865, esp_946)
	SCZO_890 = cond(bLoc0200_143 - 0x2D)
	Z_891 = SCZO_890 (alias)
	branch bLoc0200_143 != 0x2D l00401865
l00401852:
	eax_931 = dwLoc024C_810
	ah_932 = SLICE(eax_931, byte, 8) (alias)
	ah_933 = ah_932 | 0x01
	eax_934 = DPB(eax_931, ah_933, 8, 8) (alias)
	SZO_935 = cond(ah_933)
	C_936 = false
	dwLoc024C_937 = eax_934
	eax_938 = fp - 0x000001FF
	dwLoc0248_939 = fp - 0x000001FF
l00401865:
	dwLoc0248_892 = PHI(dwLoc0248_801, dwLoc0248_939)
	ah_893 = PHI(ah_870, ah_933)
	dwLoc024C_894 = PHI(dwLoc024C_810, dwLoc024C_937)
	edi_895 = dwLoc0248_892
	ecx_896 = ecx_878 | 0xFFFFFFFF
	cl_897 = (byte) ecx_896 (alias)
	cx_898 = (word16) ecx_896 (alias)
	ch_899 = SLICE(ecx_896, byte, 8) (alias)
	eax_900 = 0x00000000
	edx_eax_901 = SEQ(edx_874, eax_900) (alias)
	al_902 = (byte) eax_900 (alias)
	ax_903 = (word16) eax_900 (alias)
	SZO_904 = cond(0x00000000)
	C_905 = false
l0040186E:
	Z_906 = PHI(Z_891, Z_925)
	ecx_907 = PHI(ecx_896, ecx_927)
	cl_908 = PHI(cl_897, cl_928)
	cx_909 = PHI(cx_898, cx_929)
	ch_910 = PHI(ch_899, ch_930)
	edi_911 = PHI(edi_895, edi_926)
	SCZO_912 = PHI(SCZO_890, SCZO_924)
	branch ecx_907 == 0x00000000 l00401870
l0040186E_1:
	SCZO_924 = cond(al_902 - Mem0[edi_911 + 0x00000000:byte])
	Z_925 = SCZO_924 (alias)
	edi_926 = edi_911 + 0x00000001
	ecx_927 = ecx_907 - 0x00000001
	cl_928 = (byte) ecx_927 (alias)
	cx_929 = (word16) ecx_927 (alias)
	ch_930 = SLICE(ecx_927, byte, 8) (alias)
	branch al_902 != Mem0[edi_911 + 0x00000000:byte] l0040186E
l00401870:
	Z_913 = PHI(Z_906, Z_925)
	ecx_914 = PHI(ecx_907, ecx_927)
	cl_915 = PHI(cl_908, cl_928)
	cx_916 = PHI(cx_909, cx_929)
	ch_917 = PHI(ch_910, ch_930)
	edi_918 = PHI(edi_911, edi_926)
	SCZO_919 = PHI(SCZO_912, SCZO_924)
	ecx_920 = ~ecx_914
	ecx_921 = ecx_920 - 0x00000001
	SZO_922 = cond(ecx_921)
	ebp_923 = ecx_921
	goto l00401A50
l0040187A:
	eax_1523 = dwLoc024C_157
	al_1524 = (byte) eax_1523 (alias)
	dwLoc022C_1525 = 0x0000000A
	al_1526 = al_1524 | 0x40
	eax_1527 = DPB(eax_1523, al_1526, 0, 8) (alias)
	SZO_1528 = cond(al_1526)
	C_1529 = false
	dwLoc024C_1530 = eax_1527
	goto l004018F7
l0040188E:
	dwLoc022C_1565 = 0x0000000A
	goto l004018F7
l00401898:
	dwLoc0244_1564 = 0x00000008
l004018A0:
	dwLoc0244_1448 = PHI(dwLoc0244_158, dwLoc0244_1564)
	dwLoc0224_1449 = 0x00000007
	goto l004018B2
l004018AA:
	dwLoc0224_1566 = 0x00000027
l004018B2:
	dwLoc0224_1433 = PHI(dwLoc0224_1566, dwLoc0224_1449)
	dwLoc0244_1434 = PHI(dwLoc0244_158, dwLoc0244_1448)
	al_1436 = bLoc024C
	dwLoc022C_1437 = 0x00000010
	SZO_1438 = cond(al_1436 & 0x80)
	Z_1439 = SZO_1438 (alias)
	C_1440 = false
	branch (al_1436 & 0x80) == 0x00 l004018F7
l004018C2:
	cl_1442 = bLoc0224
	bLoc023A_1443 = 0x30
	cl_1444 = cl_1442 + 0x51
	SCZO_1445 = cond(cl_1444)
	dwLoc0238_1446 = 0x00000002
	bLoc0239_1447 = cl_1444
	goto l004018F7
l004018DC:
	al_1552 = bLoc024C
	dwLoc022C_1553 = 0x00000008
	SZO_1554 = cond(al_1552 & 0x80)
	Z_1555 = SZO_1554 (alias)
	C_1556 = false
	branch (al_1552 & 0x80) == 0x00 l004018F7
l004018EC:
	eax_1557 = dwLoc024C_157
	ah_1558 = SLICE(eax_1557, byte, 8) (alias)
	ah_1559 = ah_1558 | 0x02
	eax_1560 = DPB(eax_1557, ah_1559, 8, 8) (alias)
	SZO_1561 = cond(ah_1559)
	C_1562 = false
	dwLoc024C_1563 = eax_1560
l004018F7:
	dwLoc0224_1124 = PHI(dwLoc0224_1433, dwLoc0224_135, dwLoc0224_135, dwLoc0224_135, dwLoc0224_135, dwLoc0224_1433)
	dwLoc022C_1125 = PHI(dwLoc022C_1437, dwLoc022C_1565, dwLoc022C_1553, dwLoc022C_1553, dwLoc022C_1525, dwLoc022C_1437)
	bLoc0239_1126 = PHI(bLoc0239_1447, bLoc0239_137, bLoc0239_137, bLoc0239_137, bLoc0239_137, bLoc0239_137)
	bLoc023A_1127 = PHI(bLoc023A_1443, bLoc023A_145, bLoc023A_145, bLoc023A_145, bLoc023A_145, bLoc023A_145)
	ah_1128 = PHI(ah_459, ah_459, ah_459, ah_1559, ah_459, ah_459)
	al_1129 = PHI(al_1436, al_458, al_1552, al_1552, al_1526, al_1436)
	dwLoc0238_1130 = PHI(dwLoc0238_1446, dwLoc0238_156, dwLoc0238_156, dwLoc0238_156, dwLoc0238_156, dwLoc0238_156)
	dwLoc024C_1131 = PHI(dwLoc024C_157, dwLoc024C_157, dwLoc024C_157, dwLoc024C_1563, dwLoc024C_1530, dwLoc024C_157)
	dwLoc0244_1132 = PHI(dwLoc0244_1434, dwLoc0244_158, dwLoc0244_158, dwLoc0244_158, dwLoc0244_158, dwLoc0244_1434)
	cl_1133 = PHI(cl_1444, cl_727, cl_727, cl_727, cl_727, cl_727)
	eax_1134 = PHI(eax_456, eax_456, eax_456, eax_1560, eax_1527, eax_456)
	SCZO_1135 = PHI(SCZO_1445, SCZO_461, SCZO_461, SCZO_461, SCZO_461, SCZO_461)
	ebx_1136 = dwLoc024C_1131
	bl_1137 = (byte) ebx_1136 (alias)
	bh_1138 = SLICE(ebx_1136, byte, 8) (alias)
	SZO_1139 = cond(bh_1138 & 0x80)
	Z_1140 = SZO_1139 (alias)
	C_1141 = false
	branch (bh_1138 & 0x80) == 0x00 l00401912
l00401900:
	edx_1352 = fp + 0x0000000C
	dh_1353 = SLICE(edx_1352, byte, 8) (alias)
	esp_1354 = fp - 0x00000260
	dwLoc0260_1355 = fp + 0x0000000C
	eax_1357 = fn00401DB0(dwLoc0260_1355, out edx_1356)
	edx_eax_1358 = SEQ(edx_1356, eax_1357) (alias)
	al_1359 = (byte) eax_1357 (alias)
	ah_1360 = SLICE(eax_1357, byte, 8) (alias)
	ax_1361 = (word16) eax_1357 (alias)
	esp_1362 = fp - 0x0000025C
	SCZO_1363 = cond(fp - 0x0000025C)
	goto l00401974
l00401912:
	SZO_1364 = cond(bl_1137 & 0x20)
	Z_1365 = SZO_1364 (alias)
	C_1366 = false
	branch (bl_1137 & 0x20) == 0x00 l0040194A
l00401917:
	SZO_1367 = cond(bl_1137 & 0x40)
	Z_1368 = SZO_1367 (alias)
	C_1369 = false
	branch (bl_1137 & 0x40) == 0x00 l00401932
l0040191C:
	eax_1370 = fp + 0x0000000C
	esp_1371 = fp - 0x00000260
	dwLoc0260_1372 = fp + 0x0000000C
	eax_1374 = fn00401D90(dwLoc0260_1372, out ecx_1373)
	ax_1375 = (word16) eax_1374 (alias)
	eax_1376 = (int32) ax_1375
	esp_1377 = fp - 0x0000025C
	SCZO_1378 = cond(fp - 0x0000025C)
	edx_eax_1379 = (int64) eax_1376
	eax_1380 = (word32) edx_eax_1379 (alias)
	edx_1381 = SLICE(edx_eax_1379, word32, 32) (alias)
	al_1382 = (byte) edx_eax_1379 (alias)
	dh_1383 = SLICE(edx_eax_1379, byte, 40) (alias)
	ah_1384 = SLICE(edx_eax_1379, byte, 8) (alias)
	ax_1385 = (word16) edx_eax_1379 (alias)
	goto l00401974
l00401932:
	ecx_1386 = fp + 0x0000000C
	esp_1387 = fp - 0x00000260
	dwLoc0260_1388 = fp + 0x0000000C
	eax_1390 = fn00401D90(dwLoc0260_1388, out ecx_1389)
	esp_1391 = fp - 0x0000025C
	eax_1392 = eax_1390 & 0x0000FFFF
	SZO_1393 = cond(eax_1392)
	C_1394 = false
	edx_eax_1395 = (int64) eax_1392
	eax_1396 = (word32) edx_eax_1395 (alias)
	edx_1397 = SLICE(edx_eax_1395, word32, 32) (alias)
	al_1398 = (byte) edx_eax_1395 (alias)
	dh_1399 = SLICE(edx_eax_1395, byte, 40) (alias)
	ah_1400 = SLICE(edx_eax_1395, byte, 8) (alias)
	ax_1401 = (word16) edx_eax_1395 (alias)
	goto l00401974
l0040194A:
	SZO_1402 = cond(bl_1137 & 0x40)
	Z_1403 = SZO_1402 (alias)
	C_1404 = false
	branch (bl_1137 & 0x40) == 0x00 l00401962
l0040194F:
	edx_1405 = fp + 0x0000000C
	esp_1406 = fp - 0x00000260
	dwLoc0260_1407 = fp + 0x0000000C
	eax_1409 = fn00401D90(dwLoc0260_1407, out ecx_1408)
	esp_1410 = fp - 0x0000025C
	SCZO_1411 = cond(fp - 0x0000025C)
	edx_eax_1412 = (int64) eax_1409
	eax_1413 = (word32) edx_eax_1412 (alias)
	edx_1414 = SLICE(edx_eax_1412, word32, 32) (alias)
	al_1415 = (byte) edx_eax_1412 (alias)
	dh_1416 = SLICE(edx_eax_1412, byte, 40) (alias)
	ah_1417 = SLICE(edx_eax_1412, byte, 8) (alias)
	ax_1418 = (word16) edx_eax_1412 (alias)
	goto l00401974
l00401962:
	eax_1419 = fp + 0x0000000C
	esp_1420 = fp - 0x00000260
	dwLoc0260_1421 = fp + 0x0000000C
	eax_1423 = fn00401D90(dwLoc0260_1421, out ecx_1422)
	al_1424 = (byte) eax_1423 (alias)
	ah_1425 = SLICE(eax_1423, byte, 8) (alias)
	ax_1426 = (word16) eax_1423 (alias)
	esp_1427 = fp - 0x0000025C
	edx_1428 = 0x00000000
	edx_eax_1429 = SEQ(edx_1428, eax_1423) (alias)
	dh_1430 = SLICE(edx_1428, byte, 8) (alias)
	SZO_1431 = cond(0x00000000)
	C_1432 = false
l00401974:
	dh_1142 = PHI(dh_1353, dh_1383, dh_1399, dh_1416, dh_1430)
	edx_eax_1143 = PHI(edx_eax_1358, edx_eax_1379, edx_eax_1395, edx_eax_1412, edx_eax_1429)
	ah_1144 = PHI(ah_1360, ah_1384, ah_1400, ah_1417, ah_1425)
	ax_1145 = PHI(ax_1361, ax_1385, ax_1401, ax_1418, ax_1426)
	al_1146 = PHI(al_1359, al_1382, al_1398, al_1415, al_1424)
	edx_1147 = PHI(edx_1356, edx_1381, edx_1397, edx_1414, edx_1428)
	dwLoc0260_1148 = PHI(dwLoc0260_1355, dwLoc0260_1372, dwLoc0260_1388, dwLoc0260_1407, dwLoc0260_1421)
	ecx_1149 = PHI(ecx_724, ecx_1373, ecx_1389, ecx_1408, ecx_1422)
	eax_1150 = PHI(eax_1357, eax_1380, eax_1396, eax_1413, eax_1423)
	esp_1151 = PHI(esp_1362, esp_1377, esp_1391, esp_1410, esp_1427)
	SCZO_1152 = PHI(SCZO_1363, SCZO_1378, SCZO_1135, SCZO_1411, SCZO_1135)
	SZO_1153 = cond(bl_1137 & 0x40)
	Z_1154 = SZO_1153 (alias)
	C_1155 = false
	branch (bl_1137 & 0x40) == 0x00 l00401997
l00401979:
	SZO_1333 = cond(edx_1147 & edx_1147)
	Z_1334 = SZO_1333 (alias)
	SO_1335 = SZO_1333 (alias)
	C_1336 = false
	SCZO_1337 = C_1336 (alias)
	CZ_1338 = C_1336 (alias)
	branch (edx_1147 & edx_1147) > 0x00000000 l00401997
l0040197D:
	branch (edx_1147 & edx_1147) < 0x00000000 l00401983
l0040197F:
	SZO_1350 = cond(eax_1150 & eax_1150)
	C_1351 = false
	branch C_1351 l00401997
l00401983:
	eax_1339 = -eax_1150
	C_1340 = eax_1339 == 0x00000000
	edx_1341 = edx_1147 + 0x00 + (eax_1339 == 0x00000000)
	esi_1342 = eax_1339
	edx_1343 = -edx_1341
	bh_1344 = bh_1138 | 0x01
	ebx_1345 = DPB(ebx_1136, bh_1344, 8, 8) (alias)
	SZO_1346 = cond(bh_1344)
	C_1347 = false
	edi_1348 = edx_1343
	dwLoc024C_1349 = ebx_1345
	goto l0040199B
l00401997:
	SO_1325 = PHI(SO_186, SO_1335, SO_1335)
	CZ_1326 = PHI(CZ_462, CZ_1338, CZ_1338)
	SZO_1327 = PHI(SZO_1153, SZO_1333, SZO_1350)
	Z_1328 = PHI(Z_1154, Z_1334, Z_1334)
	C_1329 = PHI(C_1155, C_1336, C_1351)
	SCZO_1330 = PHI(SCZO_1152, SCZO_1337, SCZO_1337)
	esi_1331 = eax_1150
	edi_1332 = edx_1147
l0040199B:
	SO_1156 = PHI(SO_1335, SO_1325)
	CZ_1157 = PHI(CZ_1338, CZ_1326)
	dwLoc024C_1158 = PHI(dwLoc024C_1349, dwLoc024C_1131)
	edx_1159 = PHI(edx_1343, edx_1147)
	eax_1160 = PHI(eax_1339, eax_1150)
	edi_1161 = PHI(edi_1348, edi_1332)
	esi_1162 = PHI(esi_1342, esi_1331)
	ebx_1163 = PHI(ebx_1345, ebx_1136)
	bh_1164 = PHI(bh_1344, bh_1138)
	SCZO_1165 = PHI(SCZO_1337, SCZO_1330)
	SZO_1166 = cond(bh_1164 & 0x80)
	Z_1167 = SZO_1166 (alias)
	C_1168 = false
	branch (bh_1164 & 0x80) != 0x00 l004019A3
l004019A0:
	edi_1322 = edi_1161 & 0x00000000
	SZO_1323 = cond(edi_1322)
	C_1324 = false
l004019A3:
	edi_1169 = PHI(edi_1161, edi_1322)
	ecx_1170 = dwLoc0244_1132
	cl_1171 = (byte) ecx_1170 (alias)
	cx_1172 = (word16) ecx_1170 (alias)
	ch_1173 = SLICE(ecx_1170, byte, 8) (alias)
	SZO_1174 = cond(ecx_1170 & ecx_1170)
	SO_1175 = SZO_1174 (alias)
	C_1176 = false
	branch (ecx_1170 & ecx_1170) >= 0x00000000 l004019B2
l004019AB:
	ecx_1314 = 0x00000001
	cl_1315 = (byte) ecx_1314 (alias)
	cx_1316 = (word16) ecx_1314 (alias)
	ch_1317 = SLICE(ecx_1314, byte, 8) (alias)
	goto l004019B9
l004019B2:
	ebx_1318 = ebx_1163 & 0xFFFFFFF7
	SZO_1319 = cond(ebx_1318)
	C_1320 = false
	dwLoc024C_1321 = ebx_1318
l004019B9:
	dwLoc024C_1177 = PHI(dwLoc024C_1158, dwLoc024C_1321)
	ecx_1178 = PHI(ecx_1314, ecx_1170)
	cl_1179 = PHI(cl_1315, cl_1171)
	cx_1180 = PHI(cx_1316, cx_1172)
	ch_1181 = PHI(ch_1317, ch_1173)
	ebx_1182 = PHI(ebx_1163, ebx_1318)
	edx_1183 = esi_1162
	edx_1184 = edx_1183 | edi_1169
	SZO_1185 = cond(edx_1184)
	Z_1186 = SZO_1185 (alias)
	C_1187 = false
	branch edx_1184 != 0x00000000 l004019C7
l004019BF:
	dwLoc0238_1313 = 0x00000000
l004019C7:
	dwLoc0238_1188 = PHI(dwLoc0238_1130, dwLoc0238_1313)
	eax_1189 = fp - 0x00000001
	edx_eax_1190 = SEQ(edx_1184, eax_1189) (alias)
	al_1191 = (byte) eax_1189 (alias)
	ah_1192 = SLICE(eax_1189, byte, 8) (alias)
	ax_1193 = (word16) eax_1189 (alias)
	dwLoc0248_1194 = fp - 0x00000001
l004019D2:
	dwLoc0204_1195 = PHI(dwLoc0204_138, dwLoc0204_1240)
	dwLoc0248_1196 = PHI(dwLoc0248_1194, dwLoc0248_1279)
	dwLoc026C_1197 = PHI(dwLoc026C_147, dwLoc026C_1252)
	ah_1198 = PHI(ah_1192, ah_1276)
	ax_1199 = PHI(ax_1193, ax_1277)
	al_1200 = PHI(al_1191, al_1275)
	dwLoc0260_1201 = PHI(dwLoc0260_1148, dwLoc0260_1246)
	dwLoc0264_1202 = PHI(dwLoc0264_161, dwLoc0264_1248)
	dwLoc0268_1203 = PHI(dwLoc0268_162, dwLoc0268_1250)
	Z_1204 = PHI(Z_1186, Z_1224)
	ecx_1205 = PHI(ecx_1178, ecx_1268)
	cl_1206 = PHI(cl_1179, cl_1269)
	cx_1207 = PHI(cx_1180, cx_1270)
	ch_1208 = PHI(ch_1181, ch_1271)
	eax_1209 = PHI(eax_1189, eax_1273)
	edi_1210 = PHI(edi_1169, edi_1263)
	esi_1211 = PHI(esi_1162, esi_1262)
	ebp_1212 = PHI(ebp_174, ebp_1231)
	ebx_1213 = PHI(ebx_1182, ebx_1264)
	bl_1214 = PHI(bl_1137, bl_1265)
	bh_1215 = PHI(bh_1164, bh_1255)
	esp_1216 = PHI(esp_1151, esp_1259)
	SCZO_1217 = PHI(SCZO_1165, SCZO_1266)
	edx_1218 = ecx_1205
	edx_eax_1219 = SEQ(edx_1218, eax_1209) (alias)
	ecx_1220 = ecx_1205 - 0x00000001
	SZO_1221 = cond(edx_1218 & edx_1218)
	C_1222 = false
	dwLoc0244_1223 = ecx_1220
	branch (edx_1218 & edx_1218) > 0x00000000 l004019E3
l004019DD:
	ecx_1283 = esi_1211
	ecx_1284 = ecx_1283 | edi_1210
	SZO_1285 = cond(ecx_1284)
	Z_1286 = SZO_1285 (alias)
	C_1287 = false
	branch ecx_1284 == 0x00000000 l00401A27
l004019E3:
	Z_1224 = PHI(Z_1286, Z_1204)
	C_1225 = PHI(C_1287, C_1222)
	ecx_1226 = PHI(ecx_1284, ecx_1220)
	eax_1227 = dwLoc022C_1125
	edx_eax_1228 = (int64) eax_1227
	eax_1229 = (word32) edx_eax_1228 (alias)
	edx_1230 = SLICE(edx_eax_1228, word32, 32) (alias)
	ebp_1231 = eax_1229
	esp_1232 = fp - 0x00000260
	dwLoc0260_1233 = edx_1230
	esp_1234 = fp - 0x00000264
	dwLoc0264_1235 = ebp_1231
	esp_1236 = fp - 0x00000268
	dwLoc0268_1237 = edi_1210
	esp_1238 = fp - 0x0000026C
	dwLoc026C_1239 = esi_1211
	dwLoc0204_1240 = edx_1230
	eax_1241 = fn004032D0(dwLoc026C_1239, dwLoc0268_1237, dwLoc0264_1235, dwLoc0260_1233)
	esp_1242 = fp - 0x0000025C
	edx_1243 = dwLoc0204_1240
	ebx_1244 = eax_1241
	esp_1245 = fp - 0x00000260
	dwLoc0260_1246 = edx_1243
	esp_1247 = fp - 0x00000264
	dwLoc0264_1248 = ebp_1231
	esp_1249 = fp - 0x00000268
	dwLoc0268_1250 = edi_1210
	esp_1251 = fp - 0x0000026C
	dwLoc026C_1252 = esi_1211
	ebx_1253 = ebx_1244 + 0x00000030
	bl_1254 = (byte) ebx_1253 (alias)
	bh_1255 = SLICE(ebx_1253, byte, 8) (alias)
	SCZO_1256 = cond(ebx_1253)
	eax_1258 = fn00403260(dwLoc026C_1252, dwLoc0268_1250, dwLoc0264_1248, dwLoc0260_1246, out edx_1257)
	esp_1259 = fp - 0x0000025C
	SCZO_1260 = cond(ebx_1253 - 0x00000039)
	SZO_1261 = SCZO_1260 (alias)
	esi_1262 = eax_1258
	edi_1263 = edx_1257
	branch ebx_1253 <= 0x00000039 l00401A16
l00401A12:
	ebx_1280 = ebx_1253 + dwLoc0224_1124
	bl_1281 = (byte) ebx_1280 (alias)
	SCZO_1282 = cond(ebx_1280)
l00401A16:
	ebx_1264 = PHI(ebx_1253, ebx_1280)
	bl_1265 = PHI(bl_1254, bl_1281)
	SCZO_1266 = PHI(SCZO_1260, SCZO_1282)
	eax_1267 = dwLoc0248_1196
	ecx_1268 = dwLoc0244_1223
	cl_1269 = (byte) ecx_1268 (alias)
	cx_1270 = (word16) ecx_1268 (alias)
	ch_1271 = SLICE(ecx_1268, byte, 8) (alias)
	Mem1272[eax_1267 + 0x00000000:byte] = bl_1265
	eax_1273 = eax_1267 - 0x00000001
	edx_eax_1274 = SEQ(edx_1257, eax_1273) (alias)
	al_1275 = (byte) eax_1273 (alias)
	ah_1276 = SLICE(eax_1273, byte, 8) (alias)
	ax_1277 = (word16) eax_1273 (alias)
	SZO_1278 = cond(eax_1273)
	dwLoc0248_1279 = eax_1273
	goto l004019D2
l00401A27:
	ecx_1288 = dwLoc024C_1177
	ch_1289 = SLICE(ecx_1288, byte, 8) (alias)
	ebp_1290 = fp - 0x00000001
	ebp_1291 = fp - 0x00000001 - eax_1209
	eax_1292 = eax_1209 + 0x00000001
	edx_eax_1293 = SEQ(edx_1218, eax_1292) (alias)
	al_1294 = (byte) eax_1292 (alias)
	ah_1295 = SLICE(eax_1292, byte, 8) (alias)
	ax_1296 = (word16) eax_1292 (alias)
	SZO_1297 = cond(ch_1289 & 0x02)
	Z_1298 = SZO_1297 (alias)
	C_1299 = false
	dwLoc0248_1300 = eax_1292
	branch (ch_1289 & 0x02) == 0x00 l00401A50
l00401A3E:
	SCZO_1301 = cond(Mem0[eax_1292 + 0x00000000:byte] - 0x30)
	Z_1302 = SCZO_1301 (alias)
	branch Mem0[eax_1292 + 0x00000000:byte] != 0x30 l00401A47
l00401A43:
	SZO_1310 = cond(ebp_1291 & ebp_1291)
	Z_1311 = SZO_1310 (alias)
	C_1312 = false
	branch (ebp_1291 & ebp_1291) != 0x00000000 l00401A50
l00401A47:
	Z_1303 = PHI(Z_1302, Z_1311)
	C_1304 = PHI(C_1299, C_1312)
	eax_1305 = eax_1292 - 0x00000001
	ebp_1306 = ebp_1291 + 0x00000001
	SZO_1307 = cond(ebp_1306)
	dwLoc0248_1308 = eax_1305
	Mem1309[eax_1305 + 0x00000000:byte] = 0x30
l00401A50:
	dwLoc0224_463 = PHI(dwLoc0224_135, dwLoc0224_135, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224_135, dwLoc0224_135, dwLoc0224_135, dwLoc0224_135, dwLoc0224_135, dwLoc0224_1124, dwLoc0224_1124, dwLoc0224_1124, dwLoc0224_135, dwLoc0224_135, dwLoc0224_135, dwLoc0224_135, dwLoc0224_135)
	dwLoc022C_464 = PHI(dwLoc022C_136, dwLoc022C_136, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C_136, dwLoc022C_136, dwLoc022C_136, dwLoc022C_136, dwLoc022C_136, dwLoc022C_1125, dwLoc022C_1125, dwLoc022C_1125, dwLoc022C_136, dwLoc022C_136, dwLoc022C_136, dwLoc022C_136, dwLoc022C_136)
	bLoc0239_465 = PHI(bLoc0239_137, bLoc0239_137, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239_137, bLoc0239_137, bLoc0239_137, bLoc0239_137, bLoc0239_137, bLoc0239_1126, bLoc0239_1126, bLoc0239_1126, bLoc0239_137, bLoc0239_137, bLoc0239_137, bLoc0239_137, bLoc0239_137)
	dwLoc0204_466 = PHI(dwLoc0204_138, dwLoc0204_138, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204_138, dwLoc0204_138, dwLoc0204_138, dwLoc0204_138, dwLoc0204_138, dwLoc0204_1195, dwLoc0204_1195, dwLoc0204_1195, dwLoc0204_138, dwLoc0204_138, dwLoc0204_138, dwLoc0204_138, dwLoc0204_138)
	dwArg0C_467 = PHI(dwArg0C_139, dwArg0C_139, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C_139, dwArg0C_139, dwArg0C_139, dwArg0C_139, dwArg0C_139, dwArg0C_139, dwArg0C_139, dwArg0C_139, dwArg0C_139, dwArg0C_139, dwArg0C_139, dwArg0C_139, dwArg0C_816)
	dwLoc0210_468 = PHI(dwLoc0210_140, dwLoc0210_140, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210_140, dwLoc0210_140, dwLoc0210_140, dwLoc0210_140, dwLoc0210_140, dwLoc0210_140, dwLoc0210_140, dwLoc0210_140, dwLoc0210_140, dwLoc0210_140, dwLoc0210_140, dwLoc0210_140, dwLoc0210_818)
	dwLoc020C_469 = PHI(dwLoc020C_141, dwLoc020C_141, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C_141, dwLoc020C_141, dwLoc020C_141, dwLoc020C_141, dwLoc020C_141, dwLoc020C_141, dwLoc020C_141, dwLoc020C_141, dwLoc020C_141, dwLoc020C_141, dwLoc020C_141, dwLoc020C_141, dwLoc020C_821)
	dwLoc0270_470 = PHI(dwLoc0270_142, dwLoc0270_142, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270_142, dwLoc0270_142, dwLoc0270_142, dwLoc0270_142, dwLoc0270_142, dwLoc0270_142, dwLoc0270_142, dwLoc0270_142, dwLoc0270_142, dwLoc0270_142, dwLoc0270_142, dwLoc0270_142, dwLoc0270_837)
	dh_471 = PHI(dh_182, dh_182, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh_1511, dh_1511, dh_182, dh_182, dh_182, dh_1142, dh_1142, dh_1142, dh_182, dh_182, dh_182, dh_182, dh_868)
	bLoc0200_472 = PHI(bLoc0200_143, bLoc0200_143, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200_143, bLoc0200_143, bLoc0200_143, bLoc0200_143, bLoc0200_143, bLoc0200_143, bLoc0200_143, bLoc0200_143, bLoc0200_143, bLoc0200_143, bLoc0200_143, bLoc0200_737, bLoc0200_143)
	dwLoc0248_473 = PHI(dwLoc0248_144, dwLoc0248_144, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248_1516, dwLoc0248_1522, dwLoc0248_1476, dwLoc0248_144, dwLoc0248_144, dwLoc0248_1300, dwLoc0248_1300, dwLoc0248_1308, dwLoc0248_997, dwLoc0248_1056, dwLoc0248_772, dwLoc0248_751, dwLoc0248_892)
	bLoc023A_474 = PHI(bLoc023A_145, bLoc023A_145, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A_145, bLoc023A_145, bLoc023A_145, bLoc023A_145, bLoc023A_145, bLoc023A_1127, bLoc023A_1127, bLoc023A_1127, bLoc023A_145, bLoc023A_145, bLoc023A_145, bLoc023A_145, bLoc023A_145)
	wLoc0260_475 = PHI(wLoc0260_146, wLoc0260_146, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260_146, wLoc0260_146, wLoc0260_146, wLoc0260_146, wLoc0260_146, wLoc0260_146, wLoc0260_146, wLoc0260_146, wLoc0260_146, wLoc0260_146, wLoc0260_760, wLoc0260_738, wLoc0260_146)
	dwLoc026C_476 = PHI(dwLoc026C_147, dwLoc026C_147, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C_147, dwLoc026C_147, dwLoc026C_147, dwLoc026C_147, dwLoc026C_147, dwLoc026C_1197, dwLoc026C_1197, dwLoc026C_1197, dwLoc026C_147, dwLoc026C_147, dwLoc026C_147, dwLoc026C_147, dwLoc026C_835)
	SO_477 = PHI(SO_186, SO_186, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO_186, SO_186, SO_186, SO_186, SO_186, SO_1175, SO_1175, SO_1175, SO_186, SO_186, SO_768, SO_739, SO_869)
	edx_eax_478 = PHI(edx_eax_457, edx_eax_457, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax_1510, edx_eax_1510, edx_eax_1471, edx_eax_1536, edx_eax_1536, edx_eax_1293, edx_eax_1293, edx_eax_1293, edx_eax_1013, edx_eax_1071, edx_eax_728, edx_eax_728, edx_eax_901)
	ah_479 = PHI(ah_459, ah_459, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah_1457, ah_1457, ah_1457, ah_1538, ah_1538, ah_1295, ah_1295, ah_1295, ah_1014, ah_1072, ah_729, ah_729, ah_893)
	ax_480 = PHI(ax_460, ax_460, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax_1458, ax_1458, ax_1473, ax_1539, ax_1539, ax_1296, ax_1296, ax_1296, ax_1015, ax_1073, ax_730, ax_730, ax_903)
	CZ_481 = PHI(CZ_462, CZ_462, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ_462, CZ_462, CZ_462, CZ_462, CZ_462, CZ_1157, CZ_1157, CZ_1157, CZ_462, CZ_462, CZ_462, CZ_462, CZ_872)
	al_482 = PHI(al_458, al_458, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al_1456, al_1456, al_1472, al_1537, al_1537, al_1294, al_1294, al_1294, al_1016, al_1074, al_731, al_740, al_902)
	dwLoc0218_483 = PHI(dwLoc0218_153, dwLoc0218_153, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218_153, dwLoc0218_153, dwLoc0218_153, dwLoc0218_153, dwLoc0218_153, dwLoc0218_153, dwLoc0218_153, dwLoc0218_153, dwLoc0218_153, dwLoc0218_153, dwLoc0218_153, dwLoc0218_153, dwLoc0218_796)
	dwLoc0228_484 = PHI(dwLoc0228_154, dwLoc0228_154, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228_154, dwLoc0228_154, dwLoc0228_154, dwLoc0228_1547, dwLoc0228_1550, dwLoc0228_154, dwLoc0228_154, dwLoc0228_154, dwLoc0228_154, dwLoc0228_154, dwLoc0228_771, dwLoc0228_154, dwLoc0228_154)
	dwLoc0238_485 = PHI(dwLoc0238_156, dwLoc0238_156, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238_156, dwLoc0238_156, dwLoc0238_156, dwLoc0238_156, dwLoc0238_156, dwLoc0238_1188, dwLoc0238_1188, dwLoc0238_1188, dwLoc0238_156, dwLoc0238_156, dwLoc0238_156, dwLoc0238_156, dwLoc0238_156)
	dwLoc024C_486 = PHI(dwLoc024C_157, dwLoc024C_157, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C_157, dwLoc024C_157, dwLoc024C_157, dwLoc024C_157, dwLoc024C_157, dwLoc024C_1177, dwLoc024C_1177, dwLoc024C_1177, dwLoc024C_967, dwLoc024C_967, dwLoc024C_732, dwLoc024C_732, dwLoc024C_894)
	dwLoc0244_487 = PHI(dwLoc0244_158, dwLoc0244_158, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244_158, dwLoc0244_158, dwLoc0244_158, dwLoc0244_158, dwLoc0244_158, dwLoc0244_1223, dwLoc0244_1223, dwLoc0244_1223, dwLoc0244_158, dwLoc0244_158, dwLoc0244_158, dwLoc0244_158, dwLoc0244_811)
	dwLoc0230_488 = PHI(dwLoc0230_159, dwLoc0230_159, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230_1517, dwLoc0230_1521, dwLoc0230_159, dwLoc0230_159, dwLoc0230_159, dwLoc0230_159, dwLoc0230_159, dwLoc0230_159, dwLoc0230_1007, dwLoc0230_159, dwLoc0230_159, dwLoc0230_159, dwLoc0230_159)
	edx_489 = PHI(edx_180, edx_180, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx_1509, edx_1509, edx_180, edx_180, edx_1549, edx_1218, edx_1218, edx_1218, edx_1017, edx_1075, edx_770, edx_750, edx_874)
	dwLoc0260_490 = PHI(dwLoc0260_160, dwLoc0260_160, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260_1452, dwLoc0260_1452, dwLoc0260_1452, dwLoc0260_1533, dwLoc0260_1533, dwLoc0260_1201, dwLoc0260_1201, dwLoc0260_1201, dwLoc0260_981, dwLoc0260_981, dwLoc0260_759, dwLoc0260_741, dwLoc0260_875)
	dwLoc0264_491 = PHI(dwLoc0264_161, dwLoc0264_161, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264_161, dwLoc0264_161, dwLoc0264_161, dwLoc0264_161, dwLoc0264_161, dwLoc0264_1202, dwLoc0264_1202, dwLoc0264_1202, dwLoc0264_161, dwLoc0264_161, dwLoc0264_763, dwLoc0264_742, dwLoc0264_829)
	dwLoc0268_492 = PHI(dwLoc0268_162, dwLoc0268_162, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268_162, dwLoc0268_162, dwLoc0268_162, dwLoc0268_162, dwLoc0268_162, dwLoc0268_1203, dwLoc0268_1203, dwLoc0268_1203, dwLoc0268_162, dwLoc0268_162, dwLoc0268_162, dwLoc0268_162, dwLoc0268_832)
	ecx_493 = PHI(ecx_168, ecx_724, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx_1502, ecx_1502, ecx_1492, ecx_1534, ecx_1534, ecx_1288, ecx_1288, ecx_1288, ecx_998, ecx_1057, ecx_724, ecx_745, ecx_921)
	cl_494 = PHI(cl_169, cl_727, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl_1503, cl_1503, cl_1486, cl_1540, cl_1540, cl_1206, cl_1206, cl_1206, cl_999, cl_1058, cl_727, cl_727, cl_915)
	cx_495 = PHI(cx_170, cx_170, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx_1504, cx_1504, cx_1487, cx_1546, cx_170, cx_1207, cx_1207, cx_1207, cx_1000, cx_1059, cx_170, cx_170, cx_916)
	ch_496 = PHI(ch_171, ch_171, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch_1505, ch_1505, ch_1488, ch_171, ch_171, ch_1289, ch_1289, ch_1289, ch_1001, ch_1060, ch_171, ch_171, ch_917)
	edi_497 = PHI(edi_172, edi_172, edi, edi, edi, edi, edi, edi, edi, edi, edi, edi, edi, edi, edi, edi, edi, edi, edi, edi, edi, edi, edi, edi, edi, edi, edi, edi, edi, edi, edi, edi, edi, edi, edi, edi, edi, edi_172, edi_172, edi_1489, edi_172, edi_172, edi_1210, edi_1210, edi_1210, edi_172, edi_172, edi_172, edi_172, edi_918)
	esi_498 = PHI(esi_173, esi_173, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi_173, esi_173, esi_173, esi_173, esi_173, esi_1211, esi_1211, esi_1211, esi_1022, esi_1080, esi_173, esi_173, esi_884)
	ebp_499 = PHI(ebp_174, ebp_174, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp_1518, ebp_1520, ebp_1494, ebp_174, ebp_174, ebp_1291, ebp_1291, ebp_1306, ebp_1026, ebp_1083, ebp_765, ebp_747, ebp_923)
	ebx_500 = PHI(ebx_175, ebx_175, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx_175, ebx_175, ebx_175, ebx_175, ebx_175, ebx_1213, ebx_1213, ebx_1213, ebx_175, ebx_175, ebx_175, ebx_175, ebx_886)
	bl_501 = PHI(bl_176, bl_176, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl, bl_176, bl_176, bl_176, bl_176, bl_176, bl_1214, bl_1214, bl_1214, bl_176, bl_176, bl_176, bl_176, bl_887)
	bh_502 = PHI(bh_177, bh_177, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh_177, bh_177, bh_177, bh_177, bh_177, bh_1215, bh_1215, bh_1215, bh_177, bh_177, bh_177, bh_177, bh_888)
	esp_503 = PHI(esp_178, esp_178, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp_1459, esp_1459, esp_1459, esp_1541, esp_1541, esp_1216, esp_1216, esp_1216, esp_989, esp_989, esp_766, esp_748, esp_889)
	SCZO_504 = PHI(SCZO_461, SCZO_461, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO_1519, SCZO_461, SCZO_1490, SCZO_461, SCZO_461, SCZO_1217, SCZO_1301, SCZO_1301, SCZO_1025, SCZO_1082, SCZO_757, SCZO_749, SCZO_919)
	eax_505 = dwLoc0228_484
	SZO_506 = cond(eax_505 & eax_505)
	Z_507 = SZO_506 (alias)
	C_508 = false
	branch (eax_505 & eax_505) != 0x00000000 l00401B6A
l00401A5C:
	ebx_509 = dwLoc024C_486
	bl_510 = (byte) ebx_509 (alias)
	bh_511 = SLICE(ebx_509, byte, 8) (alias)
	SZO_512 = cond(bl_510 & 0x40)
	Z_513 = SZO_512 (alias)
	C_514 = false
	branch (bl_510 & 0x40) == 0x00 l00401A8F
l00401A65:
	SZO_707 = cond(bh_511 & 0x01)
	Z_708 = SZO_707 (alias)
	C_709 = false
	branch (bh_511 & 0x01) == 0x00 l00401A71
l00401A6A:
	bLoc023A_715 = 0x2D
	goto l00401A87
l00401A71:
	SZO_716 = cond(bl_510 & 0x01)
	Z_717 = SZO_716 (alias)
	C_718 = false
	branch (bl_510 & 0x01) == 0x00 l00401A7D
l00401A76:
	bLoc023A_719 = 0x2B
	goto l00401A87
l00401A7D:
	SZO_720 = cond(bl_510 & 0x02)
	Z_721 = SZO_720 (alias)
	C_722 = false
	branch (bl_510 & 0x02) == 0x00 l00401A8F
l00401A82:
	bLoc023A_723 = 0x20
l00401A87:
	bLoc023A_710 = PHI(bLoc023A_715, bLoc023A_719, bLoc023A_723)
	SZO_711 = PHI(SZO_707, SZO_716, SZO_720)
	Z_712 = PHI(Z_708, Z_717, Z_721)
	C_713 = PHI(C_709, C_718, C_722)
	dwLoc0238_714 = 0x00000001
l00401A8F:
	bLoc023A_515 = PHI(bLoc023A_474, bLoc023A_710, bLoc023A_474)
	dwLoc0238_516 = PHI(dwLoc0238_485, dwLoc0238_714, dwLoc0238_485)
	edi_517 = dwLoc0234_155
	edx_518 = dwLoc0238_516
	edi_519 = edi_517 - edx_518
	edi_520 = edi_519 - ebp_499
	SZO_521 = cond(bl_510 & 0x0C)
	Z_522 = SZO_521 (alias)
	C_523 = false
	branch (bl_510 & 0x0C) != 0x00 l00401ABA
l00401AA0:
	esi_694 = dwArg04
	eax_695 = fp - 0x00000240
	esp_696 = fp - 0x00000260
	dwLoc0260_697 = fp - 0x00000240
	esp_698 = fp - 0x00000264
	dwLoc0264_699 = esi_694
	esp_700 = fp - 0x00000268
	dwLoc0268_701 = edi_520
	esp_702 = fp - 0x0000026C
	dwLoc026C_703 = 0x00000020
	fn00401D10(dwLoc026C_703, dwLoc0268_701, dwLoc0264_699, dwLoc0260_697)
	esp_704 = fp - 0x0000025C
	SCZO_705 = cond(fp - 0x0000025C)
	goto l00401AC1
l00401ABA:
	esi_706 = dwArg04
l00401AC1:
	esi_524 = PHI(esi_694, esi_706)
	SCZO_525 = PHI(SCZO_705, SCZO_504)
	edx_526 = dwLoc0238_516
	ecx_527 = fp - 0x00000240
	esp_528 = fp - 0x00000260
	dwLoc0260_529 = fp - 0x00000240
	esp_530 = fp - 0x00000264
	dwLoc0264_531 = esi_524
	eax_532 = fp - 0x0000023A
	esp_533 = fp - 0x00000268
	dwLoc0268_534 = edx_526
	esp_535 = fp - 0x0000026C
	dwLoc026C_536 = fp - 0x0000023A
	eax_537 = fn00401D50(dwLoc026C_536, dwLoc0268_534, dwLoc0264_531, dwLoc0260_529)
	esp_538 = fp - 0x0000025C
	SZO_539 = cond(bl_510 & 0x08)
	Z_540 = SZO_539 (alias)
	C_541 = false
	branch (bl_510 & 0x08) == 0x00 l00401AF4
l00401ADE:
	SZO_680 = cond(bl_510 & 0x04)
	Z_681 = SZO_680 (alias)
	C_682 = false
	branch (bl_510 & 0x04) != 0x00 l00401AF4
l00401AE3:
	ecx_683 = fp - 0x00000240
	esp_684 = fp - 0x00000260
	dwLoc0260_685 = fp - 0x00000240
	esp_686 = fp - 0x00000264
	dwLoc0264_687 = esi_524
	esp_688 = fp - 0x00000268
	dwLoc0268_689 = edi_520
	esp_690 = fp - 0x0000026C
	dwLoc026C_691 = 0x00000030
	fn00401D10(dwLoc026C_691, dwLoc0268_689, dwLoc0264_687, dwLoc0260_685)
	esp_692 = fp - 0x0000025C
	SCZO_693 = cond(fp - 0x0000025C)
l00401AF4:
	dwLoc026C_542 = PHI(dwLoc026C_536, dwLoc026C_536, dwLoc026C_691)
	dwLoc0260_543 = PHI(dwLoc0260_529, dwLoc0260_529, dwLoc0260_685)
	dwLoc0264_544 = PHI(dwLoc0264_531, dwLoc0264_531, dwLoc0264_687)
	dwLoc0268_545 = PHI(dwLoc0268_534, dwLoc0268_534, dwLoc0268_689)
	ecx_546 = PHI(ecx_527, ecx_527, ecx_683)
	esp_547 = PHI(esp_538, esp_538, esp_692)
	SCZO_548 = PHI(SCZO_525, SCZO_525, SCZO_693)
	eax_549 = dwLoc0230_488
	edx_eax_550 = SEQ(edx_526, eax_549) (alias)
	al_551 = (byte) eax_549 (alias)
	ah_552 = SLICE(eax_549, byte, 8) (alias)
	ax_553 = (word16) eax_549 (alias)
	SZO_554 = cond(eax_549 & eax_549)
	Z_555 = SZO_554 (alias)
	C_556 = false
	branch (eax_549 & eax_549) == 0x00000000 l00401B96
l00401B00:
	SZO_605 = cond(ebp_499 & ebp_499)
	C_606 = false
	branch (ebp_499 & ebp_499) <= 0x00000000 l00401B96
l00401B08:
	esi_607 = dwLoc0248_473
	ebx_608 = ebp_499 - 0x00000001
	bl_609 = (byte) ebx_608 (alias)
	bh_610 = SLICE(ebx_608, byte, 8) (alias)
l00401B0F:
	dwLoc026C_611 = PHI(dwLoc026C_542, dwLoc026C_666)
	dwLoc0268_612 = PHI(dwLoc0268_545, dwLoc0268_663)
	Z_613 = PHI(Z_555, Z_678)
	ecx_614 = PHI(ecx_546, ecx_673)
	eax_615 = PHI(eax_549, eax_667)
	esi_616 = PHI(esi_607, esi_628)
	ebx_617 = PHI(ebx_608, ebx_674)
	bl_618 = PHI(bl_609, bl_675)
	bh_619 = PHI(bh_610, bh_676)
	ax_620 = Mem0[esi_616 + 0x00000000:word16]
	eax_621 = DPB(eax_615, ax_620, 0, 16) (alias)
	edx_622 = fp - 0x00000214
	esp_623 = fp - 0x00000260
	dwLoc0260_624 = eax_621
	wLoc0260_625 = (word16) dwLoc0260_624 (alias)
	esp_626 = fp - 0x00000264
	dwLoc0264_627 = fp - 0x00000214
	esi_628 = esi_616 + 0x00000002
	SCZO_629 = cond(esi_628)
	eax_630 = fn004031E0(dwLoc0264_627, wLoc0260_625)
	edx_eax_631 = SEQ(edx_622, eax_630) (alias)
	al_632 = (byte) eax_630 (alias)
	ah_633 = SLICE(eax_630, byte, 8) (alias)
	ax_634 = (word16) eax_630 (alias)
	esp_635 = fp - 0x0000025C
	SZO_636 = cond(eax_630 & eax_630)
	C_637 = false
	branch (eax_630 & eax_630) <= 0x00000000 l00401B49
l00401B27:
	edx_656 = dwArg04
	ecx_657 = fp - 0x00000240
	esp_658 = fp - 0x00000260
	dwLoc0260_659 = fp - 0x00000240
	esp_660 = fp - 0x00000264
	dwLoc0264_661 = edx_656
	esp_662 = fp - 0x00000268
	dwLoc0268_663 = eax_630
	eax_664 = fp - 0x00000214
	esp_665 = fp - 0x0000026C
	dwLoc026C_666 = fp - 0x00000214
	eax_667 = fn00401D50(dwLoc026C_666, dwLoc0268_663, dwLoc0264_661, dwLoc0260_659)
	edx_eax_668 = SEQ(edx_656, eax_667) (alias)
	al_669 = (byte) eax_667 (alias)
	ah_670 = SLICE(eax_667, byte, 8) (alias)
	ax_671 = (word16) eax_667 (alias)
	esp_672 = fp - 0x0000025C
	ecx_673 = ebx_617
	ebx_674 = ebx_617 - 0x00000001
	bl_675 = (byte) ebx_674 (alias)
	bh_676 = SLICE(ebx_674, byte, 8) (alias)
	SZO_677 = cond(ecx_673 & ecx_673)
	Z_678 = SZO_677 (alias)
	C_679 = false
	branch (ecx_673 & ecx_673) != 0x00000000 l00401B0F
l00401B49:
	dwLoc026C_638 = PHI(dwLoc026C_611, dwLoc026C_666)
	edx_eax_639 = PHI(edx_eax_631, edx_eax_668)
	ah_640 = PHI(ah_633, ah_670)
	ax_641 = PHI(ax_634, ax_671)
	al_642 = PHI(al_632, al_669)
	edx_643 = PHI(edx_622, edx_656)
	dwLoc0260_644 = PHI(dwLoc0260_624, dwLoc0260_659)
	dwLoc0264_645 = PHI(dwLoc0264_627, dwLoc0264_661)
	dwLoc0268_646 = PHI(dwLoc0268_612, dwLoc0268_663)
	SZO_647 = PHI(SZO_636, SZO_677)
	Z_648 = PHI(Z_613, Z_678)
	C_649 = PHI(C_637, C_679)
	ecx_650 = PHI(ecx_614, ecx_673)
	eax_651 = PHI(eax_630, eax_667)
	bh_652 = PHI(bh_619, bh_676)
	esp_653 = PHI(esp_635, esp_672)
	ebx_654 = dwLoc024C_486
	bl_655 = (byte) ebx_654 (alias)
l00401B4D:
	wLoc0260_557 = PHI(wLoc0260_625, wLoc0260_475)
	dwLoc026C_558 = PHI(dwLoc026C_638, dwLoc026C_601)
	edx_eax_559 = PHI(edx_eax_639, edx_eax_550)
	ah_560 = PHI(ah_640, ah_552)
	ax_561 = PHI(ax_641, ax_553)
	al_562 = PHI(al_642, al_551)
	edx_563 = PHI(edx_643, edx_593)
	dwLoc0260_564 = PHI(dwLoc0260_644, dwLoc0260_595)
	dwLoc0264_565 = PHI(dwLoc0264_645, dwLoc0264_597)
	dwLoc0268_566 = PHI(dwLoc0268_646, dwLoc0268_599)
	ecx_567 = PHI(ecx_650, ecx_546)
	eax_568 = PHI(eax_651, eax_602)
	esi_569 = PHI(esi_628, esi_524)
	ebx_570 = PHI(ebx_654, ebx_509)
	bl_571 = PHI(bl_655, bl_510)
	bh_572 = PHI(bh_652, bh_511)
	esp_573 = PHI(esp_653, esp_603)
	SCZO_574 = PHI(SCZO_629, SCZO_604)
	SZO_575 = cond(bl_571 & 0x04)
	Z_576 = SZO_575 (alias)
	C_577 = false
	branch (bl_571 & 0x04) == 0x00 l00401B6A
l00401B52:
	edx_578 = dwArg04
	ecx_579 = fp - 0x00000240
	esp_580 = fp - 0x00000260
	dwLoc0260_581 = fp - 0x00000240
	esp_582 = fp - 0x00000264
	dwLoc0264_583 = edx_578
	esp_584 = fp - 0x00000268
	dwLoc0268_585 = edi_520
	esp_586 = fp - 0x0000026C
	dwLoc026C_587 = 0x00000020
	fn00401D10(dwLoc026C_587, dwLoc0268_585, dwLoc0264_583, dwLoc0260_581)
	esp_588 = fp - 0x0000025C
	SCZO_589 = cond(fp - 0x0000025C)
l00401B6A:
	dwLoc0224_199 = PHI(dwLoc0224_135, dwLoc0224_135, dwLoc0224_135, dwLoc0224_135, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224_135, dwLoc0224_135, dwLoc0224_135, dwLoc0224_135, dwLoc0224_135, dwLoc0224_463, dwLoc0224_135, dwLoc0224_135, dwLoc0224_135, dwLoc0224_135, dwLoc0224_135, dwLoc0224_463, dwLoc0224_135, dwLoc0224_463, dwLoc0224_135, dwLoc0224_135, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224, dwLoc0224_135, dwLoc0224_135, dwLoc0224_135, dwLoc0224_135, dwLoc0224_135, dwLoc0224_135)
	dwLoc022C_200 = PHI(dwLoc022C_136, dwLoc022C_136, dwLoc022C_136, dwLoc022C_136, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C_136, dwLoc022C_136, dwLoc022C_136, dwLoc022C_136, dwLoc022C_136, dwLoc022C_464, dwLoc022C_136, dwLoc022C_136, dwLoc022C_136, dwLoc022C_136, dwLoc022C_136, dwLoc022C_464, dwLoc022C_136, dwLoc022C_464, dwLoc022C_136, dwLoc022C_136, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C, dwLoc022C_136, dwLoc022C_136, dwLoc022C_136, dwLoc022C_136, dwLoc022C_136, dwLoc022C_136)
	bLoc0239_201 = PHI(bLoc0239_137, bLoc0239_137, bLoc0239_137, bLoc0239_137, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239_137, bLoc0239_137, bLoc0239_137, bLoc0239_137, bLoc0239_137, bLoc0239_465, bLoc0239_137, bLoc0239_137, bLoc0239_137, bLoc0239_137, bLoc0239_137, bLoc0239_465, bLoc0239_137, bLoc0239_465, bLoc0239_137, bLoc0239_137, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239, bLoc0239_137, bLoc0239_137, bLoc0239_137, bLoc0239_137, bLoc0239_137, bLoc0239_137)
	dwLoc0204_202 = PHI(dwLoc0204_138, dwLoc0204_138, dwLoc0204_138, dwLoc0204_138, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204_138, dwLoc0204_138, dwLoc0204_138, dwLoc0204_138, dwLoc0204_138, dwLoc0204_466, dwLoc0204_138, dwLoc0204_138, dwLoc0204_138, dwLoc0204_138, dwLoc0204_138, dwLoc0204_466, dwLoc0204_138, dwLoc0204_466, dwLoc0204_138, dwLoc0204_138, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204, dwLoc0204_138, dwLoc0204_138, dwLoc0204_138, dwLoc0204_138, dwLoc0204_138, dwLoc0204_138)
	dwArg0C_203 = PHI(dwArg0C_139, dwArg0C_139, dwArg0C_139, dwArg0C_139, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C_139, dwArg0C_139, dwArg0C_139, dwArg0C_139, dwArg0C_139, dwArg0C_467, dwArg0C_139, dwArg0C_139, dwArg0C_139, dwArg0C_139, dwArg0C_139, dwArg0C_467, dwArg0C_139, dwArg0C_467, dwArg0C_139, dwArg0C_139, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C, dwArg0C_139, dwArg0C_139, dwArg0C_139, dwArg0C_139, dwArg0C_139, dwArg0C_139)
	dwLoc0210_204 = PHI(dwLoc0210_140, dwLoc0210_140, dwLoc0210_140, dwLoc0210_140, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210_140, dwLoc0210_140, dwLoc0210_140, dwLoc0210_140, dwLoc0210_140, dwLoc0210_468, dwLoc0210_140, dwLoc0210_140, dwLoc0210_140, dwLoc0210_140, dwLoc0210_140, dwLoc0210_468, dwLoc0210_140, dwLoc0210_468, dwLoc0210_140, dwLoc0210_140, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210, dwLoc0210_140, dwLoc0210_140, dwLoc0210_140, dwLoc0210_140, dwLoc0210_140, dwLoc0210_140)
	dwLoc020C_205 = PHI(dwLoc020C_141, dwLoc020C_141, dwLoc020C_141, dwLoc020C_141, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C_141, dwLoc020C_141, dwLoc020C_141, dwLoc020C_141, dwLoc020C_141, dwLoc020C_469, dwLoc020C_141, dwLoc020C_141, dwLoc020C_141, dwLoc020C_141, dwLoc020C_141, dwLoc020C_469, dwLoc020C_141, dwLoc020C_469, dwLoc020C_141, dwLoc020C_141, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C, dwLoc020C_141, dwLoc020C_141, dwLoc020C_141, dwLoc020C_141, dwLoc020C_141, dwLoc020C_141)
	dwLoc0270_206 = PHI(dwLoc0270_142, dwLoc0270_142, dwLoc0270_142, dwLoc0270_142, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270_142, dwLoc0270_142, dwLoc0270_142, dwLoc0270_142, dwLoc0270_142, dwLoc0270_470, dwLoc0270_142, dwLoc0270_142, dwLoc0270_142, dwLoc0270_142, dwLoc0270_142, dwLoc0270_470, dwLoc0270_142, dwLoc0270_470, dwLoc0270_142, dwLoc0270_142, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270, dwLoc0270_142, dwLoc0270_142, dwLoc0270_142, dwLoc0270_142, dwLoc0270_142, dwLoc0270_142)
	dh_207 = PHI(dh_182, dh_182, dh_182, dh_182, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh_182, dh_182, dh_182, dh_182, dh_182, dh_471, dh_182, dh_182, dh_182, dh_182, dh_182, dh_471, dh_182, dh_471, dh_182, dh_182, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh, dh_182, dh_182, dh_182, dh_182, dh_182, dh_182)
	bLoc0200_208 = PHI(bLoc0200_143, bLoc0200_143, bLoc0200_143, bLoc0200_143, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200_143, bLoc0200_143, bLoc0200_143, bLoc0200_143, bLoc0200_143, bLoc0200_472, bLoc0200_143, bLoc0200_143, bLoc0200_143, bLoc0200_143, bLoc0200_143, bLoc0200_472, bLoc0200_143, bLoc0200_472, bLoc0200_143, bLoc0200_143, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200, bLoc0200_143, bLoc0200_143, bLoc0200_143, bLoc0200_143, bLoc0200_143, bLoc0200_143)
	dwLoc0248_209 = PHI(dwLoc0248_144, dwLoc0248_144, dwLoc0248_144, dwLoc0248_144, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248_144, dwLoc0248_144, dwLoc0248_144, dwLoc0248_144, dwLoc0248_144, dwLoc0248_473, dwLoc0248_144, dwLoc0248_144, dwLoc0248_144, dwLoc0248_144, dwLoc0248_144, dwLoc0248_473, dwLoc0248_144, dwLoc0248_473, dwLoc0248_144, dwLoc0248_144, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248, dwLoc0248_144, dwLoc0248_144, dwLoc0248_144, dwLoc0248_144, dwLoc0248_144, dwLoc0248_144)
	bLoc023A_210 = PHI(bLoc023A_145, bLoc023A_145, bLoc023A_145, bLoc023A_145, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A_145, bLoc023A_145, bLoc023A_145, bLoc023A_145, bLoc023A_145, bLoc023A_474, bLoc023A_145, bLoc023A_145, bLoc023A_145, bLoc023A_145, bLoc023A_145, bLoc023A_515, bLoc023A_145, bLoc023A_515, bLoc023A_145, bLoc023A_145, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A, bLoc023A_145, bLoc023A_145, bLoc023A_145, bLoc023A_145, bLoc023A_145, bLoc023A_145)
	wLoc0260_211 = PHI(wLoc0260_146, wLoc0260_146, wLoc0260_146, wLoc0260_146, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260_146, wLoc0260_146, wLoc0260_146, wLoc0260_146, wLoc0260_146, wLoc0260_475, wLoc0260_146, wLoc0260_146, wLoc0260_146, wLoc0260_146, wLoc0260_146, wLoc0260_557, wLoc0260_146, wLoc0260_557, wLoc0260_146, wLoc0260_146, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260, wLoc0260_146, wLoc0260_146, wLoc0260_146, wLoc0260_146, wLoc0260_146, wLoc0260_146)
	dwLoc026C_212 = PHI(dwLoc026C_147, dwLoc026C_147, dwLoc026C_147, dwLoc026C_147, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C_147, dwLoc026C_147, dwLoc026C_147, dwLoc026C_147, dwLoc026C_147, dwLoc026C_476, dwLoc026C_147, dwLoc026C_147, dwLoc026C_147, dwLoc026C_147, dwLoc026C_147, dwLoc026C_587, dwLoc026C_147, dwLoc026C_558, dwLoc026C_147, dwLoc026C_147, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C, dwLoc026C_147, dwLoc026C_147, dwLoc026C_147, dwLoc026C_147, dwLoc026C_147, dwLoc026C_147)
	dwLoc0220_213 = PHI(dwLoc0220_198, dwLoc0220_198, dwLoc0220_198, dwLoc0220_198, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220_257, dwLoc0220_198, dwLoc0220_198, dwLoc0220_198, dwLoc0220_198, dwLoc0220_198, dwLoc0220_198, dwLoc0220_198, dwLoc0220_198, dwLoc0220_198, dwLoc0220_198, dwLoc0220_198, dwLoc0220_198, dwLoc0220_198, dwLoc0220_198, dwLoc0220_198, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220, dwLoc0220_198, dwLoc0220_198, dwLoc0220_198, dwLoc0220_198, dwLoc0220_198, dwLoc0220_198)
	SO_214 = PHI(SO_186, SO_186, SO_186, SO_186, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO_186, SO_186, SO_186, SO_186, SO_186, SO_477, SO_398, SO_398, SO_186, SO_374, SO_374, SO_477, SO_186, SO_477, SO_186, SO_186, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO, SO_186, SO_186, SO_186, SO_186, SO_186, SO_186)
	edx_eax_215 = PHI(edx_eax_192, edx_eax_192, edx_eax_408, edx_eax_408, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax_258, edx_eax_408, edx_eax_408, edx_eax_408, edx_eax_408, edx_eax_478, edx_eax_192, edx_eax_192, edx_eax_192, edx_eax_367, edx_eax_367, edx_eax_559, edx_eax_192, edx_eax_559, edx_eax_315, edx_eax_315, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax, edx_eax_192, edx_eax_315, edx_eax_315, edx_eax_315, edx_eax_315, edx_eax_315)
	ah_216 = PHI(ah_194, ah_194, ah_410, ah_410, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah_259, ah_450, ah_410, ah_410, ah_428, ah_479, ah_194, ah_194, ah_194, ah_369, ah_369, ah_560, ah_194, ah_560, ah_317, ah_317, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah, ah_194, ah_317, ah_317, ah_317, ah_317, ah_317)
	ax_217 = PHI(ax_195, ax_195, ax_411, ax_411, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax_260, ax_411, ax_411, ax_411, ax_411, ax_480, ax_195, ax_195, ax_195, ax_370, ax_370, ax_561, ax_195, ax_561, ax_318, ax_318, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax, ax_195, ax_318, ax_318, ax_318, ax_318, ax_318)
	CZ_218 = PHI(CZ_197, CZ_197, CZ_413, CZ_413, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ_261, CZ_413, CZ_413, CZ_413, CZ_413, CZ_481, CZ_197, CZ_197, CZ_197, CZ_197, CZ_197, CZ_481, CZ_197, CZ_481, CZ_320, CZ_320, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ, CZ_197, CZ_320, CZ_320, CZ_320, CZ_320, CZ_320)
	al_219 = PHI(al_193, al_193, al_409, al_409, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al, al_262, al_409, al_443, al_436, al_409, al_482, al_193, al_193, al_193, al_368, al_368, al_562, al_193, al_562, al_316, al_316, al, al, al, al, al, al, al, al, al, al, al, al_193, al_348, al_355, al_341, al_334, al_327)
	dwLoc0218_220 = PHI(dwLoc0218_153, dwLoc0218_153, dwLoc0218_153, dwLoc0218_153, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218_153, dwLoc0218_153, dwLoc0218_153, dwLoc0218_153, dwLoc0218_153, dwLoc0218_483, dwLoc0218_153, dwLoc0218_153, dwLoc0218_153, dwLoc0218_153, dwLoc0218_153, dwLoc0218_483, dwLoc0218_153, dwLoc0218_483, dwLoc0218_153, dwLoc0218_153, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218, dwLoc0218_306, dwLoc0218_153, dwLoc0218_153, dwLoc0218_153, dwLoc0218_153, dwLoc0218_153)
	dwLoc0228_221 = PHI(dwLoc0228_154, dwLoc0228_154, dwLoc0228_154, dwLoc0228_154, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228_154, dwLoc0228_154, dwLoc0228_154, dwLoc0228_154, dwLoc0228_154, dwLoc0228_484, dwLoc0228_154, dwLoc0228_154, dwLoc0228_154, dwLoc0228_154, dwLoc0228_154, dwLoc0228_484, dwLoc0228_154, dwLoc0228_484, dwLoc0228_154, dwLoc0228_154, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228, dwLoc0228_307, dwLoc0228_154, dwLoc0228_154, dwLoc0228_154, dwLoc0228_154, dwLoc0228_154)
	dwLoc0234_222 = PHI(dwLoc0234_155, dwLoc0234_155, dwLoc0234_155, dwLoc0234_155, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234_155, dwLoc0234_155, dwLoc0234_155, dwLoc0234_155, dwLoc0234_155, dwLoc0234_155, dwLoc0234_155, dwLoc0234_155, dwLoc0234_155, dwLoc0234_372, dwLoc0234_382, dwLoc0234_155, dwLoc0234_386, dwLoc0234_155, dwLoc0234_155, dwLoc0234_155, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234, dwLoc0234_308, dwLoc0234_155, dwLoc0234_155, dwLoc0234_155, dwLoc0234_155, dwLoc0234_155)
	dwLoc0238_223 = PHI(dwLoc0238_156, dwLoc0238_156, dwLoc0238_156, dwLoc0238_156, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238_156, dwLoc0238_156, dwLoc0238_156, dwLoc0238_156, dwLoc0238_156, dwLoc0238_485, dwLoc0238_156, dwLoc0238_156, dwLoc0238_156, dwLoc0238_156, dwLoc0238_156, dwLoc0238_516, dwLoc0238_156, dwLoc0238_516, dwLoc0238_156, dwLoc0238_156, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238, dwLoc0238_309, dwLoc0238_156, dwLoc0238_156, dwLoc0238_156, dwLoc0238_156, dwLoc0238_156)
	dwLoc024C_224 = PHI(dwLoc024C_157, dwLoc024C_157, dwLoc024C_157, dwLoc024C_157, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C_157, dwLoc024C_454, dwLoc024C_447, dwLoc024C_440, dwLoc024C_433, dwLoc024C_486, dwLoc024C_157, dwLoc024C_157, dwLoc024C_157, dwLoc024C_157, dwLoc024C_381, dwLoc024C_486, dwLoc024C_157, dwLoc024C_486, dwLoc024C_157, dwLoc024C_157, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C, dwLoc024C_310, dwLoc024C_352, dwLoc024C_359, dwLoc024C_345, dwLoc024C_338, dwLoc024C_331)
	dwLoc0244_225 = PHI(dwLoc0244_158, dwLoc0244_387, dwLoc0244_158, dwLoc0244_158, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244_158, dwLoc0244_158, dwLoc0244_158, dwLoc0244_158, dwLoc0244_158, dwLoc0244_487, dwLoc0244_396, dwLoc0244_400, dwLoc0244_405, dwLoc0244_158, dwLoc0244_158, dwLoc0244_487, dwLoc0244_158, dwLoc0244_487, dwLoc0244_158, dwLoc0244_158, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244, dwLoc0244_311, dwLoc0244_158, dwLoc0244_158, dwLoc0244_158, dwLoc0244_158, dwLoc0244_158)
	dwLoc0230_226 = PHI(dwLoc0230_159, dwLoc0230_159, dwLoc0230_159, dwLoc0230_159, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230_267, dwLoc0230_159, dwLoc0230_159, dwLoc0230_159, dwLoc0230_159, dwLoc0230_488, dwLoc0230_159, dwLoc0230_159, dwLoc0230_159, dwLoc0230_159, dwLoc0230_159, dwLoc0230_488, dwLoc0230_159, dwLoc0230_488, dwLoc0230_159, dwLoc0230_159, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230, dwLoc0230_312, dwLoc0230_159, dwLoc0230_159, dwLoc0230_159, dwLoc0230_159, dwLoc0230_159)
	edx_227 = PHI(edx_180, edx_180, edx_180, edx_180, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx_279, edx_180, edx_180, edx_180, edx_180, edx_489, edx_180, edx_180, edx_402, edx_362, edx_377, edx_578, edx_385, edx_563, edx_180, edx_180, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx, edx_180, edx_180, edx_180, edx_180, edx_180, edx_180)
	dwLoc0260_228 = PHI(dwLoc0260_160, dwLoc0260_160, dwLoc0260_160, dwLoc0260_160, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260_283, dwLoc0260_160, dwLoc0260_160, dwLoc0260_160, dwLoc0260_160, dwLoc0260_490, dwLoc0260_392, dwLoc0260_392, dwLoc0260_160, dwLoc0260_364, dwLoc0260_364, dwLoc0260_581, dwLoc0260_160, dwLoc0260_564, dwLoc0260_160, dwLoc0260_160, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260, dwLoc0260_160, dwLoc0260_160, dwLoc0260_160, dwLoc0260_160, dwLoc0260_160, dwLoc0260_160)
	dwLoc0264_229 = PHI(dwLoc0264_161, dwLoc0264_161, dwLoc0264_161, dwLoc0264_161, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264_285, dwLoc0264_161, dwLoc0264_161, dwLoc0264_161, dwLoc0264_161, dwLoc0264_491, dwLoc0264_161, dwLoc0264_161, dwLoc0264_161, dwLoc0264_161, dwLoc0264_161, dwLoc0264_583, dwLoc0264_161, dwLoc0264_565, dwLoc0264_161, dwLoc0264_161, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264, dwLoc0264_161, dwLoc0264_161, dwLoc0264_161, dwLoc0264_161, dwLoc0264_161, dwLoc0264_161)
	dwLoc0268_230 = PHI(dwLoc0268_162, dwLoc0268_162, dwLoc0268_162, dwLoc0268_162, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268_287, dwLoc0268_162, dwLoc0268_162, dwLoc0268_162, dwLoc0268_162, dwLoc0268_492, dwLoc0268_162, dwLoc0268_162, dwLoc0268_162, dwLoc0268_162, dwLoc0268_162, dwLoc0268_585, dwLoc0268_162, dwLoc0268_566, dwLoc0268_162, dwLoc0268_162, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268, dwLoc0268_162, dwLoc0268_162, dwLoc0268_162, dwLoc0268_162, dwLoc0268_162, dwLoc0268_162)
	dwArg08_231 = PHI(dwArg08_167, dwArg08_167, dwArg08_167, dwArg08_167, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08_275, dwArg08_167, dwArg08_167, dwArg08_167, dwArg08_432, dwArg08_167, dwArg08_167, dwArg08_167, dwArg08_167, dwArg08_167, dwArg08_167, dwArg08_167, dwArg08_167, dwArg08_167, dwArg08_167, dwArg08_167, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08, dwArg08_167, dwArg08_167, dwArg08_167, dwArg08_167, dwArg08_167, dwArg08_167)
	ecx_232 = PHI(ecx_168, ecx_168, ecx_168, ecx_414, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx_280, ecx_414, ecx_414, ecx_414, ecx_414, ecx_493, ecx_393, ecx_393, ecx_403, ecx_365, ecx_365, ecx_579, ecx_383, ecx_567, ecx_168, ecx_321, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx, ecx_168, ecx_321, ecx_321, ecx_321, ecx_321, ecx_321)
	cl_233 = PHI(cl_169, cl_169, cl_169, cl_417, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl_264, cl_417, cl_417, cl_417, cl_417, cl_494, cl_169, cl_169, cl_169, cl_169, cl_169, cl_494, cl_169, cl_494, cl_169, cl_324, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl, cl_169, cl_324, cl_324, cl_324, cl_324, cl_324)
	cx_234 = PHI(cx_170, cx_170, cx_170, cx_170, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx_170, cx_170, cx_170, cx_170, cx_170, cx_495, cx_170, cx_170, cx_170, cx_170, cx_170, cx_495, cx_170, cx_495, cx_170, cx_170, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx, cx_170, cx_170, cx_170, cx_170, cx_170, cx_170)
	ch_235 = PHI(ch_171, ch_171, ch_171, ch_171, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch_171, ch_171, ch_171, ch_171, ch_171, ch_496, ch_171, ch_171, ch_171, ch_171, ch_171, ch_496, ch_171, ch_496, ch_171, ch_171, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch, ch_171, ch_171, ch_171, ch_171, ch_171, ch_171)
	eax_236 = PHI(eax_191, eax_191, eax_407, eax_407, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax_281, eax_451, eax_444, eax_437, eax_429, eax_505, eax_394, eax_394, eax_404, eax_366, eax_378, eax_568, eax_384, eax_568, eax_314, eax_314, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax, eax_191, eax_349, eax_356, eax_342, eax_335, eax_328)
	esi_237 = PHI(esi_173, esi_173, esi_173, esi_173, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi_173, esi_173, esi_173, esi_173, esi_173, esi_498, esi_173, esi_173, esi_173, esi_173, esi_173, esi_569, esi_173, esi_569, esi_173, esi_173, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi, esi_173, esi_173, esi_173, esi_173, esi_173, esi_173)
	ebp_238 = PHI(ebp_174, ebp_174, ebp_174, ebp_174, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp_174, ebp_174, ebp_174, ebp_174, ebp_174, ebp_499, ebp_174, ebp_174, ebp_174, ebp_174, ebp_174, ebp_499, ebp_174, ebp_499, ebp_174, ebp_174, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp, ebp_174, ebp_174, ebp_174, ebp_174, ebp_174, ebp_174)
	ebx_239 = PHI(ebx_175, ebx_175, ebx_175, ebx_175, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx_277, ebx_175, ebx_175, ebx_175, ebx_175, ebx_500, ebx_175, ebx_175, ebx_175, ebx_175, ebx_175, ebx_570, ebx_175, ebx_570, ebx_175, ebx_175, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx, ebx_175, ebx_175, ebx_175, ebx_175, ebx_175, ebx_175)
	bh_240 = PHI(bh_177, bh_177, bh_177, bh_177, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh_177, bh_177, bh_177, bh_177, bh_177, bh_502, bh_177, bh_177, bh_177, bh_177, bh_177, bh_572, bh_177, bh_572, bh_177, bh_177, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh, bh_177, bh_177, bh_177, bh_177, bh_177, bh_177)
	esp_241 = PHI(esp_178, esp_178, esp_178, esp_178, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp_288, esp_178, esp_178, esp_178, esp_178, esp_503, esp_395, esp_395, esp_178, esp_371, esp_371, esp_588, esp_178, esp_573, esp_178, esp_178, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp, esp_178, esp_178, esp_178, esp_178, esp_178, esp_178)
	SCZO_242 = PHI(SCZO_196, SCZO_196, SCZO_412, SCZO_412, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO_289, SCZO_412, SCZO_412, SCZO_412, SCZO_423, SCZO_504, SCZO_388, SCZO_388, SCZO_388, SCZO_360, SCZO_379, SCZO_589, SCZO_360, SCZO_574, SCZO_319, SCZO_319, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO, SCZO_196, SCZO_319, SCZO_319, SCZO_319, SCZO_319, SCZO_319)
	edi_243 = dwArg08_231
	bl_244 = Mem0[edi_243 + 0x00000000:byte]
	ebx_245 = DPB(ebx_239, bl_244, 0, 8) (alias)
	edi_246 = edi_243 + 0x00000001
	SZO_247 = cond(bl_244 & bl_244)
	Z_248 = SZO_247 (alias)
	C_249 = false
	bLoc021C_250 = bl_244
	dwArg08_251 = edi_246
	branch (bl_244 & bl_244) != 0x00 l00401365
l00401B87:
	dwLoc0224_64 = PHI(dwLoc0224, dwLoc0224_135, dwLoc0224_199)
	dwLoc022C_65 = PHI(dwLoc022C, dwLoc022C_136, dwLoc022C_200)
	bLoc0239_66 = PHI(bLoc0239, bLoc0239_137, bLoc0239_201)
	dwLoc0204_67 = PHI(dwLoc0204, dwLoc0204_138, dwLoc0204_202)
	dwArg0C_68 = PHI(dwArg0C, dwArg0C_139, dwArg0C_203)
	dwLoc0210_69 = PHI(dwLoc0210, dwLoc0210_140, dwLoc0210_204)
	dwLoc020C_70 = PHI(dwLoc020C, dwLoc020C_141, dwLoc020C_205)
	dwLoc0270_71 = PHI(dwLoc0270, dwLoc0270_142, dwLoc0270_206)
	dh_72 = PHI(dh, dh_182, dh_207)
	bLoc0200_73 = PHI(bLoc0200, bLoc0200_143, bLoc0200_208)
	dwLoc0248_74 = PHI(dwLoc0248, dwLoc0248_144, dwLoc0248_209)
	bLoc023A_75 = PHI(bLoc023A, bLoc023A_145, bLoc023A_210)
	wLoc0260_76 = PHI(wLoc0260, wLoc0260_146, wLoc0260_211)
	dwLoc026C_77 = PHI(dwLoc026C, dwLoc026C_147, dwLoc026C_212)
	dwLoc0220_78 = PHI(dwLoc0220, dwLoc0220_148, dwLoc0220_213)
	SO_79 = PHI(SO, SO_184, SO_214)
	edx_eax_80 = PHI(edx_eax, edx_eax_181, edx_eax_215)
	ah_81 = PHI(ah, ah_149, ah_216)
	ax_82 = PHI(ax, ax_150, ax_217)
	CZ_83 = PHI(CZ, CZ_151, CZ_218)
	al_84 = PHI(al, al_152, al_219)
	dwLoc0218_85 = PHI(dwLoc0218, dwLoc0218_153, dwLoc0218_220)
	dwLoc0228_86 = PHI(dwLoc0228, dwLoc0228_154, dwLoc0228_221)
	dwLoc0234_87 = PHI(dwLoc0234, dwLoc0234_155, dwLoc0234_222)
	dwLoc0238_88 = PHI(dwLoc0238, dwLoc0238_156, dwLoc0238_223)
	dwLoc024C_89 = PHI(dwLoc024C, dwLoc024C_157, dwLoc024C_224)
	dwLoc0244_90 = PHI(dwLoc0244, dwLoc0244_158, dwLoc0244_225)
	dwLoc0230_91 = PHI(dwLoc0230, dwLoc0230_159, dwLoc0230_226)
	edx_92 = PHI(edx, edx_180, edx_227)
	dwLoc0260_93 = PHI(dwLoc0260, dwLoc0260_160, dwLoc0260_228)
	dwLoc0264_94 = PHI(dwLoc0264, dwLoc0264_161, dwLoc0264_229)
	dwLoc0268_95 = PHI(dwLoc0268, dwLoc0268_162, dwLoc0268_230)
	SZO_96 = PHI(SZO_27, SZO_163, SZO_247)
	Z_97 = PHI(Z_28, Z_164, Z_248)
	C_98 = PHI(C_29, C_165, C_249)
	bLoc021C_99 = PHI(bLoc021C_30, bLoc021C_166, bLoc021C_250)
	dwArg08_100 = PHI(dwArg08_31, dwArg08_167, dwArg08_251)
	ecx_101 = PHI(ecx_17, ecx_168, ecx_232)
	cl_102 = PHI(cl_18, cl_169, cl_233)
	cx_103 = PHI(cx_19, cx_170, cx_234)
	ch_104 = PHI(ch_20, ch_171, ch_235)
	eax_105 = 0x00000000
	edi_106 = dwLoc025C_14
	esp_107 = fp - 0x00000258
	esi_108 = dwLoc0258_11
	esp_109 = fp - 0x00000254
	ebp_110 = dwLoc0254_8
	esp_111 = fp - 0x00000250
	ebx_112 = dwLoc0250_5
	esp_113 = fp - 0x0000024C
	esp_114 = fp
	return ebx_112
	eax_116 = dwArg1C
	edi_118 = dwArg00
	esp_119 = fp + 0x00000004
	esi_121 = dwArg04
	esp_122 = fp + 0x00000008
	ebp_123 = dwArg08_100
	esp_124 = fp + 0x0000000C
	ebx_125 = dwArg0C_68
	bl_126 = (byte) ebx_125 (alias)
	bh_127 = SLICE(ebx_125, byte, 8) (alias)
	esp_128 = fp + 0x00000010
	esp_129 = fp + 0x0000025C
	SCZO_130 = cond(fp + 0x0000025C)
	return ebx_125
l00401B96:
	SZO_590 = PHI(SZO_554, SZO_605)
	C_591 = PHI(C_556, C_606)
	eax_592 = dwLoc0248_473
	edx_593 = fp - 0x00000240
	esp_594 = fp - 0x00000260
	dwLoc0260_595 = fp - 0x00000240
	esp_596 = fp - 0x00000264
	dwLoc0264_597 = esi_524
	esp_598 = fp - 0x00000268
	dwLoc0268_599 = ebp_499
	esp_600 = fp - 0x0000026C
	dwLoc026C_601 = eax_592
	eax_602 = fn00401D50(dwLoc026C_601, dwLoc0268_599, dwLoc0264_597, dwLoc0260_595)
	esp_603 = fp - 0x0000025C
	SCZO_604 = cond(fp - 0x0000025C)
	goto l00401B4D
fn00401330_exit:
	use ebp_123 (=> ebpOut)
	use esi_121 (=> esiOut)
}

void fn00401CC0(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	word32 eax_16;
	word32 eax_5 = Mem0[dwArg08 + 0x00000004:word32];
	Mem9[dwArg08 + 0x00000004:word32] = eax_5 - 0x00000001;
	if (eax_5 >= 0x00000001)
	{
		Mem34[Mem9[dwArg08 + 0x00000000:word32]:byte] = (byte) dwArg04;
		Mem41[dwArg08 + 0x00000000:word32] = Mem34[dwArg08 + 0x00000000:word32] + 0x00000001;
		eax_16 = dwArg04 & 0x000000FF;
	}
	else
		eax_16 = fn00403350(dwArg04, dwArg08);
	if (eax_16 == 0xFFFFFFFF)
	{
		Mem25[dwArg0C + 0x00000000:word32] = eax_16;
		return;
	}
	else
	{
		Mem28[dwArg0C + 0x00000000:word32] = Mem9[dwArg0C + 0x00000000:word32] + 0x00000001;
		return;
	}
}

void fn00401D10(word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10)
{
	word32 ebp_14 = dwArg08 - 0x00000001;
	if (dwArg08 > 0x00000000)
		do
		{
			fn00401CC0(dwArg04, dwArg0C, dwArg10);
			if (Mem0[dwArg10 + 0x00000000:word32] == 0xFFFFFFFF)
				break;
			ebp_14 = ebp_68 - 0x00000001;
			word32 ebp_68 = ebp_14;
		} while (ebp_68 > 0x00000000);
	return;
}

word32 fn00401D50(word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10)
{
	word32 eax_13 = dwArg08;
	word32 ebp_14 = dwArg08 - 0x00000001;
	if (dwArg08 > 0x00000000)
	{
		word32 esi_48 = dwArg04;
		do
		{
			fn00401CC0((int32) Mem0[esi_48 + 0x00000000:byte], dwArg0C, dwArg10);
			esi_48 = esi_48 + 0x00000001;
			eax_13 = Mem0[dwArg10 + 0x00000000:word32];
			if (eax_13 == 0xFFFFFFFF)
				break;
			ebp_14 = ebp_71 - 0x00000001;
			word32 ebp_71 = ebp_14;
		} while (ebp_71 > 0x00000000);
	}
	return eax_13;
}

word32 fn00401D90(word32 dwArg04, ptr32 ecxOut)
{
	word32 ecx_5 = Mem0[dwArg04 + 0x00000000:word32];
	Mem8[dwArg04 + 0x00000000:word32] = ecx_5 + 0x00000004;
	word32 ecx_6;
	*ecxOut = ecx_5 + 0x00000004;
	return Mem8[ecx_5 + 0x00000000:word32];
}

word32 fn00401DB0(word32 dwArg04, ptr32 edxOut)
{
	word32 ecx_5 = Mem0[dwArg04 + 0x00000000:word32];
	Mem8[dwArg04 + 0x00000000:word32] = ecx_5 + 0x00000008;
	word32 edx_10;
	*edxOut = Mem8[ecx_5 + 0x00000004:word32];
	return Mem8[ecx_5 + 0x00000000:word32];
}

word32 fn00401DD0(word32 dwArg04)
{
	word32 ecx_5 = Mem0[dwArg04 + 0x00000000:word32];
	Mem8[dwArg04 + 0x00000000:word32] = ecx_5 + 0x00000004;
	return DPB(ecx_5 + 0x00000004, Mem8[ecx_5 + 0x00000000:word16], 0, 16);
}

word32 fn00401ED0(ptr32 ediOut)
{
	word32 eax_3 = Mem0[0x00408CEC:word32];
	if (eax_3 != 0x00000000)
		eax_3();
	word32 edi_16;
	fn00401FF0(dwLoc0C, 0x00406008, 0x00406010, out edi_16);
	Mem21[fp - 0x00000004:word32] = 0x00406004;
	Mem23[fp - 0x00000008:word32] = 0x00406000;
	word32 edi_26;
	return fn00401FF0(0x00406010, dwArg00, dwArg04, out edi_26);
}

word32 fn00401F00(word32 ebx, word32 dwArg04)
{
	fn00401F40(ebx, dwArg04, 0x00000000, 0x00000000);
	return ebp;
}

void fn00401F40(word32 ebx, word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	word32 ebp_103 = dwArg04;
	word32 esp_130 = fp - 0x0000000C;
	if (Mem0[0x0040895C:word32] == 0x00000001)
	{
		TerminateProcess(GetCurrentProcess(), dwArg04);
		esp_130 = fp - 0x0000000C;
	}
	Mem30[0x00408958:word32] = 0x00000001;
	Mem31[0x00408954:byte] = (byte) dwArg0C;
	word32 ebx_104 = dwArg0C;
	if (dwArg08 == 0x00000000)
	{
		word32 ecx_112 = Mem31[0x00408CE8:word32];
		if (ecx_112 != 0x00000000)
		{
			word32 esi_93 = Mem31[0x00408CE4:word32];
			word32 esi_102 = esi_93 - 0x00000004;
			if (esi_93 - 0x00000004 >=u ecx_112)
				do
				{
					word32 eax_106 = Mem31[esi_102 + 0x00000000:word32];
					if (eax_106 != 0x00000000)
					{
						eax_106();
						ecx_112 = Mem31[0x00408CE8:word32];
					}
					esi_102 = esi_102 - 0x00000004;
				} while (esi_102 >=u ecx_112);
		}
		word32 edi_81;
		fn00401FF0(dwLoc18, 0x00406014, 0x0040601C, out edi_81);
		Mem86[fp - 0x00000010:word32] = 0x0040601C;
		Mem88[fp - 0x00000014:word32] = 0x00406014;
		word32 edi_89;
		fn00401FF0(ebx, dwArg00, dwArg04, out edi_89);
		esp_130 = fp - 0x0000000C;
	}
	word32 esp_42 = esp_130 - 0x00000004;
	Mem43[esp_42 + 0x00000000:word32] = 0x00406024;
	Mem45[esp_42 - 0x00000004:word32] = 0x00406020;
	word32 edi_47;
	fn00401FF0(ebx, dwArg00, dwArg04, out edi_47);
	if (ebx_104 == 0x00000000)
	{
		Mem61[esp_42 + 0x00000000:word32] = ebp_103;
		Mem62[0x0040895C:word32] = 0x00000001;
		ExitProcess(Mem62[esp_42 + 0x00000000:UINT]);
	}
	return;
}

word32 fn00401FF0(word32 dwArg00, word32 dwArg04, word32 dwArg08, ptr32 ediOut)
{
	word32 esi_34 = dwArg04;
	word32 edi_11 = dwArg08;
	if (dwArg04 <u dwArg08)
		do
		{
			word32 eax_37 = Mem0[esi_34 + 0x00000000:word32];
			if (eax_37 != 0x00000000)
				eax_37();
			esi_34 = esi_34 + 0x00000004;
		} while (esi_34 <u edi_11);
}

void fn004021A0(word32 ecx, word32 edi)
{
	word32 edx_239 = Mem0[0x004088F8:word32];
	byte al_17 = Mem0[edx_239 + 0x00000000:byte];
	word32 esi_20 = 0x00000000;
	if (al_17 != 0x00)
		do
		{
			if (al_17 != 0x3D)
				esi_20 = esi_20 + 0x00000001;
			edi = edx_239;
			word32 ecx_250 = ecx | 0xFFFFFFFF;
			do
			{
				if (ecx_250 == 0x00000000)
					break;
				edi = edi + 0x00000001;
				ecx_250 = ecx_250 - 0x00000001;
			} while (0x00 != Mem0[edi + 0x00000000:byte]);
			word32 ecx_262 = ~ecx_250;
			ecx = ecx_262 - 0x00000001;
			al_17 = Mem0[edx_239 + 0x00000001 + (ecx_262 - 0x00000001):byte];
			edx_239 = edx_239 + 0x00000001 + (ecx_262 - 0x00000001);
		} while (al_17 != 0x00);
	word32 ecx_37;
	word32 eax_38 = fn00402FB0(esi_20 * 0x00000004 + 0x00000004, out ecx_37);
	Mem45[0x0040893C:word32] = eax_38;
	if (eax_50 == 0x00000000)
	{
		word32 ebx_221;
		word32 ebp_222;
		word32 esi_223;
		word32 edi_224;
		fn00401200(edi, out ebx_221, out ebp_222, out esi_223, out edi_224);
		Mem229[fp - 0x00000018:word32] = 0x00000009;
		word32 ebx_230;
		word32 ebp_231;
		word32 edi_233;
		ecx_106 = fn00401200(edi_224, out ebx_230, out ebp_231, out esi_105, out edi_233);
		esp_104 = fp - 0x00000014;
	}
	word32 ebp_102 = Mem57[0x004088F8:word32];
	byte dl_135 = Mem57[ebp_102 + 0x00000000:byte];
	if (dl_135 != 0x00)
		do
		{
			word32 edi_107 = ebp_102;
			word32 ecx_108 = ecx_106 | 0xFFFFFFFF;
			do
			{
				if (ecx_108 == 0x00000000)
					break;
				edi_107 = edi_107 + 0x00000001;
				ecx_108 = ecx_108 - 0x00000001;
			} while (0x00 != Mem57[edi_107 + 0x00000000:byte]);
			word32 ecx_119 = ~ecx_108;
			ecx_106 = ecx_119 - 0x00000001;
			word32 ebx_122 = ecx_119;
			if (dl_135 != 0x3D)
			{
				word32 esp_141 = esp_104 - 0x00000004;
				Mem142[esp_141 + 0x00000000:word32] = ecx_119;
				word32 ecx_143;
				word32 eax_144 = fn00402FB0(dwArg00, out ecx_143);
				Mem146[esi_105 + 0x00000000:word32] = eax_144;
				esp_104 = esp_141 + 0x00000004;
				if (eax_144 == 0x00000000)
				{
					Mem207[esp_141 + 0x00000000:word32] = 0x00000009;
					word32 esi_210;
					word32 edi_211;
					ecx_143 = fn00401200(edi_107, out ebx_122, out ebp_102, out esi_210, out edi_211);
					esp_104 = esp_141 + 0x00000004;
				}
				word32 edi_156 = ebp_102;
				word32 ecx_157 = ecx_143 | 0xFFFFFFFF;
				do
				{
					if (ecx_157 == 0x00000000)
						break;
					edi_156 = edi_156 + 0x00000001;
					ecx_157 = ecx_157 - 0x00000001;
				} while (0x00 != Mem146[edi_156 + 0x00000000:byte]);
				word32 ecx_171 = ~ecx_157;
				word32 eax_169 = Mem146[esp_104 + 0x00000010:word32];
				word32 esi_175 = edi_156 - ecx_171;
				word32 edi_176 = Mem146[eax_169 + 0x00000000:word32];
				word32 ecx_177 = ecx_171 >>u 0x00000002;
				while (ecx_177 != 0x00000000)
				{
					Mem183[edi_176 + 0x00000000:word32] = Mem146[esi_175 + 0x00000000:word32];
					esi_175 = esi_175 + 0x00000004;
					edi_176 = edi_176 + 0x00000004;
					ecx_177 = ecx_177 - 0x00000001;
				}
				ecx_106 = ecx_171 & 0x00000003;
				while (ecx_106 != 0x00000000)
				{
					Mem196[edi_176 + 0x00000000:byte] = Mem146[esi_175 + 0x00000000:byte];
					esi_175 = esi_175 + 0x00000001;
					edi_176 = edi_176 + 0x00000001;
					ecx_106 = ecx_106 - 0x00000001;
				}
				Mem200[esp_104 + 0x00000010:word32] = eax_169 + 0x00000004;
				esi_105 = eax_169 + 0x00000004;
			}
			dl_135 = Mem57[ebp_102 + ebx_122:byte];
			ebp_102 = ebp_102 + ebx_122;
		} while (dl_135 != 0x00);
	Mem82[esp_104 - 0x00000004:word32] = Mem57[0x004088F8:word32];
	fn00403590(ecx_106, dwArg00);
	Mem86[0x004088F8:word32] = 0x00000000;
	Mem87[esi_105 + 0x00000000:word32] = 0x00000000;
	return;
}

word32 fn00402290()
{
	GetModuleFileNameA(0x00000000, 0x00408968, 0x00000104);
	word32 edi_100 = Mem0[0x00409D04:word32];
	Mem19[0x0040894C:word32] = 0x00408968;
	if (Mem19[edi_100 + 0x00000000:byte] == 0x00)
		edi_100 = 0x00408968;
	Mem26[fp - 0x00000014:word32] = fp - 0x00000004;
	Mem28[fp - 0x00000018:word32] = fp - 0x00000008;
	Mem30[fp - 0x0000001C:word32] = 0x00000000;
	fn00402330(fp - 0x00000008, edi_100, 0x00000000, 0x00000000, 0x00408968, 0x00000104);
	Mem44[fp - 0x00000014:word32] = dwLoc04 + dwLoc08 * 0x00000004;
	word32 ecx_45;
	word32 eax_46 = fn00402FB0(0x00000104, out ecx_45);
	word32 esi_47 = eax_46;
	word32 esp_48 = fp - 0x00000010;
	if (eax_46 == 0x00000000)
	{
		word32 ebx_93;
		word32 ebp_94;
		fn00401200(edi_100, out ebx_93, out ebp_94, out esi_47, out edi_100);
		esp_48 = fp - 0x00000010;
	}
	word32 ecx_60 = Mem44[esp_48 + 0x00000008:word32];
	word32 esp_62 = esp_48 - 0x00000004;
	Mem63[esp_62 + 0x00000000:word32] = esp_48 + 0x0000000C;
	Mem67[esp_62 - 0x00000004:word32] = esp_62 + 0x0000000C;
	Mem69[esp_62 - 0x00000008:word32] = esi_47 + ecx_60 * 0x00000004;
	Mem71[esp_62 - 0x0000000C:word32] = esi_47;
	Mem73[esp_62 - 0x00000010:word32] = edi_100;
	word32 ecx_79 = fn00402330(ecx_60, dwArg00, dwArg04, dwArg08, dwArg0C, dwArg10);
	word32 eax_80 = Mem73[esp_62 + 0x0000000C:word32];
	Mem83[0x00408934:word32] = esi_47;
	Mem86[0x00408930:word32] = eax_80 - 0x00000001;
	return ecx_79;
}

word32 fn00402330(word32 ecx, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, word32 dwArg14)
{
	Mem25[dwArg14 + 0x00000000:word32] = 0x00000000;
	Mem26[dwArg10 + 0x00000000:word32] = 0x00000001;
	word32 ebp_11 = dwArg08;
	word32 esi_118 = dwArg0C;
	word32 eax_119 = dwArg04 + 0x00000001;
	if (dwArg08 != 0x00000000)
	{
		Mem447[dwArg08 + 0x00000000:word32] = dwArg0C;
		ebp_11 = dwArg08 + 0x00000004;
		dwArg08 = dwArg08 + 0x00000004;
	}
	dwArg14_380 = dwArg14;
	if (Mem26[dwArg04 + 0x00000000:byte] == 0x22)
	{
		byte cl_295 = Mem26[dwArg04 + 0x00000001:byte];
		word32 ecx_296 = DPB(ecx, cl_295, 0, 8);
		eax_119 = dwArg04 + 0x00000001;
		if (cl_295 != 0x22)
			do
			{
				if (cl_295 == 0x00)
					break;
				word32 ecx_339 = ecx_296 & 0x000000FF;
				if ((Mem26[ecx_339 + 0x00408A79:byte] & 0x04) != 0x00)
				{
					Mem371[dwArg14 + 0x00000000:word32] = Mem26[dwArg14 + 0x00000000:word32] + 0x00000001;
					if (esi_118 != 0x00000000)
					{
						byte cl_372 = Mem371[eax_119 + 0x00000000:byte];
						Mem374[esi_118 + 0x00000000:byte] = cl_372;
						ecx_339 = DPB(ecx_339, cl_372, 0, 8);
						esi_118 = esi_118 + 0x00000001;
						eax_119 = eax_119 + 0x00000001;
					}
				}
				Mem353[dwArg14 + 0x00000000:word32] = Mem26[dwArg14 + 0x00000000:word32] + 0x00000001;
				if (esi_118 != 0x00000000)
				{
					Mem363[esi_118 + 0x00000000:byte] = Mem353[eax_119 + 0x00000000:byte];
					esi_118 = esi_118 + 0x00000001;
				}
				cl_295 = Mem353[eax_119 + 0x00000001:byte];
				ecx_296 = DPB(ecx_339, cl_295, 0, 8);
				eax_119 = eax_119 + 0x00000001;
			} while (cl_295 != 0x22);
		Mem311[dwArg14 + 0x00000000:word32] = Mem26[dwArg14 + 0x00000000:word32] + 0x00000001;
		if (esi_118 != 0x00000000)
		{
			Mem324[esi_118 + 0x00000000:byte] = 0x00;
			word32 esi_325 = esi_118 + 0x00000001;
			Mem326[esi_325 + 0x00000000:byte] = 0x00;
			esi_118 = esi_325 + 0x00000001;
		}
		if (Mem317[eax_119 + 0x00000000:byte] == 0x22)
			eax_119 = eax_119 + 0x00000001;
	}
	else
	{
		do
		{
			word32 dwArg14_380;
			Mem391[dwArg14 + 0x00000000:word32] = Mem26[dwArg14 + 0x00000000:word32] + 0x00000001;
			if (esi_118 != 0x00000000)
			{
				Mem444[esi_118 + 0x00000000:byte] = Mem391[eax_119 + 0x00000000:byte];
				esi_118 = esi_118 + 0x00000001;
			}
			byte cl_393 = Mem391[eax_119 + 0x00000000:byte];
			eax_119 = eax_119 + 0x00000000;
			dwArg14_380 = DPB(dwArg14_380, cl_393, 0, 8);
			if ((Mem391[(dwArg14_380 & 0x000000FF) + 0x00408A79:byte] & 0x04) != 0x00)
			{
				Mem434[dwArg14 + 0x00000000:word32] = Mem391[dwArg14 + 0x00000000:word32] + 0x00000001;
				if (esi_118 != 0x00000000)
				{
					Mem440[esi_118 + 0x00000000:byte] = Mem434[eax_119 + 0x00000000:byte];
					esi_118 = esi_118 + 0x00000001;
				}
				eax_119 = eax_119 + 0x00000001;
			}
			if (cl_393 == 0x20)
				break;
			if (cl_393 == 0x00)
				goto l00402409;
		} while (cl_393 != 0x09);
		if (cl_393 == 0x00)
		{
l00402409:
			eax_119 = eax_119 - 0x00000001;
		}
		else if (esi_118 != 0x00000000)
			Mem423[esi_118 - 0x00000001:byte] = 0x00;
	}
	word32 edx_114 = 0x00000000;
	word32 dwArg14_115 = 0x00000000;
	while (Mem26[eax_119 + 0x00000000:byte] != 0x00)
	{
		byte cl_91 = Mem26[eax_119 + 0x00000000:byte];
		while (cl_91 == 0x20 || cl_91 == 0x09)
		{
			eax_119 = eax_119 + 0x00000001;
			cl_91 = Mem26[eax_119 + 0x00000000:byte];
		}
		if (Mem26[eax_119 + 0x00000000:byte] == 0x00)
			break;
		if (ebp_11 != 0x00000000)
		{
			Mem291[ebp_11 + 0x00000000:word32] = esi_118;
			dwArg08 = ebp_11 + 0x00000004;
		}
		Mem111[dwArg10 + 0x00000000:word32] = Mem26[dwArg10 + 0x00000000:word32] + 0x00000001;
		while (true)
		{
			word32 ecx_122 = 0x00000000;
			byte cl_123 = 0x00;
			word32 ebp_126 = 0x00000001;
			if (Mem111[eax_119 + 0x00000000:byte] == 0x5C)
				do
				{
					ecx_122 = ecx_122 + 0x00000001;
					eax_119 = eax_451 + 0x00000001;
					cl_123 = (byte) ecx_122;
					word32 eax_451 = eax_119;
				} while (Mem111[eax_451 + 0x00000001:byte] == 0x5C);
			if (Mem111[eax_119 + 0x00000000:byte] == 0x22)
			{
				if ((cl_123 & 0x01) == 0x00)
				{
					if (edx_114 != 0x00000000 && Mem111[eax_119 + 0x00000001:byte] == 0x22)
						eax_119 = eax_119 + 0x00000001;
					else
						ebp_126 = 0x00000000;
					edx_114 = (word32) (dwArg14_115 == 0x00000000);
					dwArg14_115 = edx_114;
				}
				ecx_122 = ecx_122 >>u 0x00000001;
			}
			word32 ecx_141 = ecx_122 - 0x00000001;
			if (ecx_122 != 0x00000000)
			{
				ecx_141 = ecx_141 + 0x00000001;
				do
				{
					if (esi_118 != 0x00000000)
					{
						Mem242[esi_118 + 0x00000000:byte] = 0x5C;
						esi_118 = esi_118 + 0x00000001;
					}
					Mem241[dwArg14 + 0x00000000:word32] = Mem111[dwArg14 + 0x00000000:word32] + 0x00000001;
					ecx_141 = ecx_141 - 0x00000001;
				} while (ecx_141 != 0x00000000);
			}
			byte cl_149 = Mem111[eax_119 + 0x00000000:byte];
			word32 ecx_150 = DPB(ecx_141, cl_149, 0, 8);
			if (cl_149 == 0x00 || edx_114 == 0x00000000 && (cl_149 == 0x20 || cl_149 == 0x09))
			{
				if (esi_118 != 0x00000000)
				{
					Mem165[esi_118 + 0x00000000:byte] = 0x00;
					esi_118 = esi_118 + 0x00000001;
				}
				Mem164[dwArg14 + 0x00000000:word32] = Mem111[dwArg14 + 0x00000000:word32] + 0x00000001;
				ebp_11 = dwArg08;
			}
			if (ebp_126 == 0x00000000)
				goto l00402505;
			else if (esi_118 != 0x00000000)
			{
				if ((Mem111[(ecx_150 & 0x000000FF) + 0x00408A79:byte] & 0x04) != 0x00)
				{
					Mem199[esi_118 + 0x00000000:byte] = cl_149;
					Mem205[dwArg14 + 0x00000000:word32] = Mem199[dwArg14 + 0x00000000:word32] + 0x00000001;
					esi_118 = esi_118 + 0x00000001;
					eax_119 = eax_119 + 0x00000001;
				}
				Mem192[esi_118 + 0x00000000:byte] = Mem111[eax_119 + 0x00000000:byte];
				Mem196[dwArg14 + 0x00000000:word32] = Mem192[dwArg14 + 0x00000000:word32] + 0x00000001;
				esi_118 = esi_118 + 0x00000001;
				eax_119 = eax_119 + 0x00000001;
			}
			else
			{
				if ((Mem111[(ecx_150 & 0x000000FF) + 0x00408A79:byte] & 0x04) != 0x00)
				{
					Mem219[dwArg14 + 0x00000000:word32] = Mem111[dwArg14 + 0x00000000:word32] + 0x00000001;
					eax_119 = eax_119 + 0x00000001;
				}
				Mem213[dwArg14 + 0x00000000:word32] = Mem111[dwArg14 + 0x00000000:word32] + 0x00000001;
l00402505:
				eax_119 = eax_119 + 0x00000001;
			}
		}
	}
	if (ebp_11 != 0x00000000)
		Mem87[ebp_11 + 0x00000000:word32] = 0x00000000;
	word32 ecx_80 = Mem26[dwArg10 + 0x00000000:word32];
	Mem86[dwArg10 + 0x00000000:word32] = ecx_80 + 0x00000001;
	return ecx_80 + 0x00000001;
}

word32 fn00402540()
{
	word32 eax_3 = Mem0[0x00408A70:word32];
	word32 ebp_10 = GetEnvironmentStrings;
	word32 esi_14 = 0x00000000;
	word32 ebx_15 = 0x00000000;
	if (eax_3 == 0x00000000)
	{
		word32 eax_303 = GetEnvironmentStringsW();
		esi_14 = eax_303;
		if (eax_303 != 0x00000000)
		{
			eax_3 = 0x00000001;
l0040257D:
			Mem313[0x00408A70:word32] = eax_3;
l00402582:
			if (eax_3 != 0x00000001)
				if (eax_3 != 0x00000002)
					goto l0040268F;
				else if (ebx_15 == 0x00000000)
				{
					ebp_10();
					ebx_15 = eax_3;
					if (eax_3 != 0x00000000)
					{
l00402633:
						word32 eax_206 = ebx_15;
						if (Mem0[ebx_15 + 0x00000000:byte] != 0x00)
							do
							{
								eax_206 = eax_322 + 0x00000001;
								word32 eax_322 = eax_206;
								if (Mem0[eax_322 + 0x00000001:byte] != 0x00)
									continue;
								eax_206 = eax_206 + 0x00000001;
							} while (Mem0[eax_206 + 0x00000001:byte] != 0x00);
						word32 eax_212 = eax_206 - ebx_15;
						word32 ecx_219;
						word32 eax_220 = fn00402FB0(eax_212 + 0x00000001, out ecx_219);
						if (eax_220 == 0x00000000)
						{
							FreeEnvironmentStringsA(ebx_15);
							return 0x00000000;
						}
						else
						{
							word32 esi_242 = ebx_15;
							word32 edi_244 = eax_220;
							word32 ecx_245 = eax_212 + 0x00000001 >>u 0x00000002;
							while (ecx_245 != 0x00000000)
							{
								Mem253[edi_244 + 0x00000000:word32] = Mem0[esi_242 + 0x00000000:word32];
								esi_242 = esi_242 + 0x00000004;
								edi_244 = edi_244 + 0x00000004;
								ecx_245 = ecx_245 - 0x00000001;
							}
							word32 ecx_261 = eax_212 + 0x00000001 & 0x00000003;
							while (ecx_261 != 0x00000000)
							{
								Mem270[edi_244 + 0x00000000:byte] = Mem0[esi_242 + 0x00000000:byte];
								esi_242 = esi_242 + 0x00000001;
								edi_244 = edi_244 + 0x00000001;
								ecx_261 = ecx_261 - 0x00000001;
							}
							FreeEnvironmentStringsA(ebx_15);
							return eax_220;
						}
					}
					else
						goto l0040268F;
				}
				else
					goto l00402633;
			else if (esi_14 == 0x00000000)
			{
				word32 eax_188 = GetEnvironmentStringsW();
				esi_14 = eax_188;
				if (eax_188 != 0x00000000)
				{
l0040259B:
					word32 eax_181 = esi_14;
					if (Mem0[esi_14 + 0x00000000:word16] != 0x0000)
						do
						{
							eax_181 = eax_181 + 0x00000002;
							if (Mem0[eax_181 + 0x00000000:word16] != 0x0000)
								continue;
							eax_181 = eax_181 + 0x00000002;
						} while (Mem0[eax_181 + 0x00000002:word16] != 0x0000);
					word32 eax_88 = (eax_181 - esi_14 >> 0x00000001) + 0x00000001;
					word32 eax_104 = WideCharToMultiByte(0x00000000, 0x00000000, esi_14, eax_88, 0x00000000, 0x00000000, 0x00000000, 0x00000000);
					if (eax_104 != 0x00000000)
					{
						Mem130[fp - 0x00000014:word32] = eax_104;
						word32 ecx_131;
						word32 eax_132 = fn00402FB0(0x00000000, out ecx_131);
						word32 ebx_133 = eax_132;
						if (eax_132 != 0x00000000)
						{
							Mem141[fp - 0x00000018:word32] = 0x00000000;
							Mem143[fp - 0x0000001C:word32] = eax_104;
							Mem145[fp - 0x00000020:word32] = eax_132;
							Mem151[fp - 0x0000002C:word32] = 0x00000000;
							Mem153[fp - 0x00000030:word32] = 0x00000000;
							if (WideCharToMultiByte(0x00000000, 0x00000000, esi_14, eax_88, 0x00000000, 0x00000000, 0x00000000, 0x00000000) == 0x00000000)
							{
								Mem176[fp - 0x00000014:word32] = eax_132;
								fn00403590(ecx_131, 0x00000000);
								ebx_133 = 0x00000000;
							}
							FreeEnvironmentStringsW(esi_14);
							return ebx_133;
						}
						else
						{
l00402614:
							FreeEnvironmentStringsW(esi_14);
							return 0x00000000;
						}
					}
					else
						goto l00402614;
				}
				else
				{
l0040268F:
					return 0x00000000;
				}
			}
			else
				goto l0040259B;
		}
		else
		{
			word32 eax_315 = GetEnvironmentStrings();
			ebx_15 = eax_315;
			if (eax_315 != 0x00000000)
			{
				eax_3 = 0x00000002;
				goto l0040257D;
			}
			else
				goto l0040268F;
		}
	}
	else
		goto l00402582;
}

void fn004026A0(word32 dwArg04)
{
	word32 eax_20 = fn00402890(dwArg04);
	if (eax_20 == Mem0[0x00408B7C:word32])
		return;
	else if (eax_20 == 0x00000000)
	{
		fn00402940();
		return;
	}
	else
	{
		word32 edx_82 = 0x00000000;
		word32 eax_86 = 0x00406388;
		do
		{
			if (Mem0[eax_86 + 0x00000000:word32] == eax_20)
			{
				word32 ecx_253 = 0x00000040;
				word32 edi_259 = 0x00408A78;
				word32 ebx_260 = edx_82 * 0x00000003;
				while (ecx_253 != 0x00000000)
				{
					Mem265[edi_259 + 0x00000000:word32] = 0x00000000;
					edi_259 = edi_259 + 0x00000004;
					ecx_253 = ecx_253 - 0x00000001;
				}
				Mem269[edi_259 + 0x00000000:byte] = 0x00;
				word32 edi_271 = 0x00406380;
				word32 ebp_275 = (ebx_260 << 0x00000004) + 0x00406398;
				do
				{
					word32 esi_286 = ebp_275 + 0x00000001;
					if (Mem269[ebp_275 + 0x00000000:byte] != 0x00)
						do
						{
							byte cl_337 = Mem269[esi_370 + 0x00000000:byte];
							ecx_253 = DPB(ecx_253, cl_337, 0, 8);
							if (cl_337 == 0x00)
								break;
							ecx_253 = ecx_253 & 0x000000FF;
							word32 eax_346 = (word32) Mem269[esi_370 + 0x00000000:byte];
							if (eax_346 <=u (ecx_253 & 0x000000FF))
							{
								byte dl_359 = Mem269[edi_271 + 0x00000000:byte];
								do
								{
									Mem363[eax_346 + 0x00408A79:byte] = Mem269[eax_346 + 0x00408A79:byte] | dl_359;
									eax_346 = eax_346 + 0x00000001;
								} while (eax_346 <=u (ecx_253 & 0x000000FF));
							}
							esi_286 = esi_370 + 0x00000002;
							word32 esi_370 = esi_286;
						} while (Mem269[esi_370 + 0x00000002:byte] != 0xFFFFFFFF);
					edi_271 = edi_271 + 0x00000001;
					ebp_275 = ebp_275 + 0x00000008;
				} while (edi_271 <u 0xFFBF9C84);
				Mem307[0x00408B7C:word32] = eax_20;
				word32 eax_308 = fn004028E0(eax_20);
				word32 ecx_309 = 0x0040638C[ebx_260 * 0x00000010];
				word32 edx_310 = 0x00406390[ebx_260 * 0x00000010];
				Mem311[0x00408B80:word32] = eax_308;
				Mem314[0x00408B88:word32] = ecx_309;
				word32 eax_315 = Mem314[(ebx_260 << 0x00000004) + 0x0040638C + 0x00000008:word32];
				Mem316[0x00408B8C:word32] = edx_310;
				Mem321[0x00408B90:word32] = eax_315;
				return;
			}
			eax_86 = eax_86 + 0x00000030;
			edx_82 = edx_82 + 0x00000001;
		} while (eax_86 <u 0x00406478);
		if (GetCPInfo(eax_20, fp - 0x00000014) == 0x00000001)
		{
			word32 ecx_111 = 0x00000040;
			word32 edi_117 = 0x00408A78;
			while (ecx_111 != 0x00000000)
			{
				Mem121[edi_117 + 0x00000000:word32] = 0x00000000;
				edi_117 = edi_117 + 0x00000004;
				ecx_111 = ecx_111 - 0x00000001;
			}
			Mem125[edi_117 + 0x00000000:byte] = 0x00;
			if (dwLoc14 >u 0x00000001)
			{
				if (bLoc0E != 0x00)
				{
					word32 edx_187 = fp - 0x0000000D;
					do
					{
						byte cl_197 = Mem125[edx_369 + 0x00000000:byte];
						word32 ecx_198 = DPB(ecx_111, cl_197, 0, 8);
						if (cl_197 == 0x00)
							break;
						ecx_111 = ecx_198 & 0x000000FF;
						word32 eax_206 = (word32) Mem125[edx_369 - 0x00000001:byte];
						if (eax_206 <=u (ecx_198 & 0x000000FF))
							do
							{
								Mem222[eax_206 + 0x00408A79:byte] = Mem125[eax_206 + 0x00408A79:byte] | 0x04;
								eax_206 = eax_206 + 0x00000001;
							} while (eax_206 <=u (ecx_198 & 0x000000FF));
						edx_187 = edx_369 + 0x00000002;
						word32 edx_369 = edx_187;
					} while (Mem125[edx_369 + 0x00000001:byte] != 0x00);
				}
				word32 eax_170 = 0x00000001;
				do
				{
					Mem175[eax_170 + 0x00408A79:byte] = Mem125[eax_170 + 0x00408A79:byte] | 0x08;
					eax_170 = eax_170 + 0x00000001;
				} while (eax_170 <u 0x000000FF);
				Mem182[0x00408B7C:word32] = eax_20;
				Mem186[0x00408B80:word32] = fn004028E0(eax_20);
			}
			else
			{
				Mem227[0x00408B7C:word32] = 0x00000000;
				Mem228[0x00408B80:word32] = 0x00000000;
			}
			Mem142[0x00408B88:word32] = 0x00000000;
			Mem143[0x00408B8C:word32] = 0x00000000;
			Mem144[0x00408B90:word32] = 0x00000000;
			return;
		}
		else if (Mem0[0x00408B94:word32] != 0x00000000)
		{
			fn00402940();
			return;
		}
		else
			return;
	}
fn004026A0_exit:
}

word32 fn00402890(word32 dwArg04)
{
fn00402890_entry:
l00402890:
	Mem4[0x00408B94:word32] = 0x00000000
	word32 eax_13 = dwArg04
	branch dwArg04 != 0xFFFFFFFE l004028B3
l004028A3:
	Mem7[0x00408B94:word32] = 0x00000001
l004028B3:
	branch dwArg04 != 0xFFFFFFFD l004028C8
l004028B8:
	Mem10[0x00408B94:word32] = 0x00000001
l004028C8:
	branch dwArg04 != 0xFFFFFFFC l004028DC
l004028CD:
	eax_13 = Mem4[0x00408BB8:word32]
	Mem15[0x00408B94:word32] = 0x00000001
l004028DC:
	return eax_13
fn00402890_exit:
}

word32 fn004028E0(word32 dwArg04)
{
	if (dwArg04 >u 0xFFFFFC4A)
		;
}

void fn00402940()
{
	word32 ecx_12 = 0x00000040;
	word32 edi_10 = 0x00408A78;
	while (ecx_12 != 0x00000000)
	{
		Mem13[edi_10 + 0x00000000:word32] = 0x00000000;
		edi_10 = edi_10 + 0x00000004;
		ecx_12 = ecx_12 - 0x00000001;
	}
	Mem16[edi_10 + 0x00000000:byte] = 0x00;
	Mem22[0x00408B7C:word32] = 0x00000000;
	Mem23[0x00408B80:word32] = 0x00000000;
	Mem24[0x00408B88:word32] = 0x00000000;
	Mem25[0x00408B8C:word32] = 0x00000000;
	Mem26[0x00408B90:word32] = 0x00000000;
	return;
}

void fn00402970()
{
	fn004026A0(0xFFFFFFFD);
	return;
}

void fn00402980(word32 edi)
{
	word32 ecx_18;
	word32 eax_19 = fn00402FB0(0x00000100, out ecx_18);
	word32 esi_20 = eax_19;
	word32 esp_21 = fp - 0x00000058;
	if (eax_19 == 0x00000000)
	{
		Mem327[fp - 0x0000005C:word32] = 0x0000001B;
		word32 ebx_328;
		word32 ebp_329;
		word32 edi_331;
		fn00401200(edi, out ebx_328, out ebp_329, out esi_20, out edi_331);
		esp_21 = fp - 0x00000058;
	}
	Mem32[0x00408BE0:word32] = esi_20;
	Mem35[0x00408CE0:word32] = 0x00000020;
	if (esi_20 <u esi_20 + 0x00000100)
		do
		{
			Mem318[esi_20 + 0x00000004:byte] = 0x00;
			Mem319[esi_20 + 0x00000000:word32] = 0xFFFFFFFF;
			Mem320[esi_20 + 0x00000005:byte] = 0x0A;
			esi_20 = esi_20 + 0x00000008;
		} while (esi_20 <u Mem320[0x00408BE0:word32] + 0x00000100);
	word32 esp_41 = esp_21 - 0x00000004;
	Mem42[esp_41 + 0x00000000:word32] = esp_21 + 0x00000014;
	GetStartupInfoA(Mem42[esp_41 + 0x00000000:LPSTARTUPINFOA]);
	word32 esp_129 = esp_41 + 0x00000004;
	if (Mem42[esp_41 + 0x0000004A:word16] != 0x0000)
	{
		word32 eax_190 = Mem42[esp_41 + 0x0000004C:word32];
		if (eax_190 != 0x00000000)
		{
			word32 ecx_195 = Mem42[eax_190 + 0x00000000:word32];
			Mem199[esp_41 + 0x00000014:word32] = ecx_195;
			word32 edi_196 = eax_190 + 0x00000004;
			word32 ebp_200 = eax_190 + 0x00000004 + ecx_195;
			if (ecx_195 >= 0x00000800)
				Mem316[esp_41 + 0x00000014:word32] = 0x00000800;
			if (Mem199[0x00408CE0:word32] < Mem199[esp_41 + 0x00000014:word32])
			{
				word32 esi_273 = 0x00408BE4;
				do
				{
					word32 esp_279 = esp_129 - 0x00000004;
					Mem280[esp_279 + 0x00000000:word32] = 0x00000100;
					word32 ecx_282;
					word32 eax_283 = fn00402FB0(dwArg00, out ecx_282);
					esp_129 = esp_279 + 0x00000004;
					if (eax_283 == 0x00000000)
					{
						Mem315[esp_279 + 0x00000014:word32] = Mem280[0x00408CE0:word32];
						goto l00402A96;
					}
					word32 ecx_289 = Mem280[0x00408CE0:word32];
					Mem290[esi_273 + 0x00000000:word32] = eax_283;
					Mem292[0x00408CE0:word32] = ecx_289 + 0x00000020;
					if (eax_283 <u eax_283 + 0x00000100)
						do
						{
							Mem305[eax_283 + 0x00000004:byte] = 0x00;
							Mem306[eax_283 + 0x00000000:word32] = 0xFFFFFFFF;
							Mem307[eax_283 + 0x00000005:byte] = 0x0A;
							eax_283 = eax_283 + 0x00000008;
						} while (eax_283 <u Mem307[esi_273 + 0x00000000:word32] + 0x00000100);
					esi_273 = esi_273 + 0x00000004;
				} while (Mem292[0x00408CE0:word32] < Mem292[esp_279 + 0x00000014:word32]);
			}
l00402A96:
			word32 esi_213 = 0x00000000;
			if (Mem199[esp_129 + 0x00000010:word32] > 0x00000000)
				do
				{
					word32 ecx_226 = Mem199[ebp_200 + 0x00000000:word32];
					if (ecx_226 != 0xFFFFFFFF)
					{
						byte al_244 = Mem199[edi_196 + 0x00000000:byte];
						if ((al_244 & 0x01) != 0x00)
							if ((al_244 & 0x08) == 0x00)
							{
								word32 esp_266 = esp_129 - 0x00000004;
								Mem267[esp_266 + 0x00000000:word32] = ecx_226;
								esp_129 = esp_266 + 0x00000004;
								if (GetFileType(Mem267[esp_266 + 0x00000000:HANDLE]) != 0x00000000)
								{
l00402ABD:
									word32 eax_257 = esi_213 & 0x0000001F;
									word32 ecx_260 = 0x00408BE0[(esi_213 >> 0x00000005) * 0x00000004];
									ecx_260[eax_257 * 0x00000008] = Mem199[ebp_200 + 0x00000000:word32];
									Mem265[ecx_260 + eax_257 * 0x00000008 + 0x00000004:byte] = Mem262[edi_196 + 0x00000000:byte];
								}
							}
							else
								goto l00402ABD;
					}
					esi_213 = esi_213 + 0x00000001;
					edi_196 = edi_196 + 0x00000001;
					ebp_200 = ebp_200 + 0x00000004;
				} while (esi_213 < Mem199[esp_129 + 0x00000010:word32]);
		}
	}
	word32 ebp_127 = GetStdHandle;
	word32 ebx_128 = 0x00000000;
	do
	{
		byte al_119;
		word32 edx_78 = Mem42[0x00408BE0:word32];
		word32 esi_126 = edx_78 + ebx_128 * 0x00000008;
		if (edx_78[ebx_128 * 0x00000008] == 0xFFFFFFFF)
		{
			word32 eax_136;
			Mem135[esi_126 + 0x00000004:byte] = 0x81;
			if (ebx_128 == 0x00000000)
				eax_136 = 0xFFFFFFF6;
			else
				eax_136 = 0x00000000 - (-(ebx_128 - 0x00000001) == 0x00000000) + 0xFFFFFFF5;
			esp_129 = esp_129 - 0x00000004;
			Mem138[esp_129 + 0x00000000:word32] = eax_136;
			ebp_127();
			if (eax_136 != 0xFFFFFFFF)
			{
				Mem151[esp_129 - 0x00000004:word32] = eax_136;
				word32 eax_152 = GetFileType(Mem151[esp_129 - 0x00000004:HANDLE]);
				if (eax_152 != 0x00000000)
				{
					Mem160[esi_126 + 0x00000000:word32] = eax_136;
					if ((eax_152 & 0x000000FF) == 0x00000002)
					{
						al_119 = Mem160[esi_126 + 0x00000004:byte] | 0x40;
l00402B5B:
						Mem131[esi_126 + 0x00000004:byte] = al_119;
					}
					else if ((eax_152 & 0x000000FF) == 0x00000003)
					{
						al_119 = Mem160[esi_126 + 0x00000004:byte] | 0x08;
						goto l00402B5B;
					}
				}
				else
				{
l00402B4F:
					al_119 = Mem138[esi_126 + 0x00000004:byte] | 0x40;
					goto l00402B5B;
				}
			}
			else
				goto l00402B4F;
		}
		else
		{
			al_119 = Mem42[esi_126 + 0x00000004:byte] | 0x80;
			goto l00402B5B;
		}
		ebx_128 = ebx_128 + 0x00000001;
	} while (ebx_128 < 0x00000003);
	word32 esp_101 = esp_129 - 0x00000004;
	Mem102[esp_101 + 0x00000000:word32] = Mem42[0x00408CE0:word32];
	SetHandleCount(Mem102[esp_101 + 0x00000000:UINT]);
	return;
}

word32 fn00402B80()
{
	word32 eax_8 = HeapCreate(0x00000001, 0x00001000, 0x00000000);
	Mem13[0x00408BD4:word32] = eax_8;
	if (eax_8 == 0x00000000)
		return eax_8;
	else if (fn004035E0() == 0x00000000)
	{
		Mem25[fp - 0x00000004:word32] = Mem13[0x00408BD4:word32];
		HeapDestroy(0x00000000);
		return 0x00000000;
	}
	else
		return 0x00000001;
}

word32 fn00402D90(word32 edi)
{
	word32 eax_3 = Mem0[0x00408900:word32];
	if (eax_3 == 0x00000001 || eax_3 == 0x00000000 && Mem0[0x0040606C:word32] == 0x00000001)
	{
		word32 ecx_19 = fn00402DD0(edi, 0x000000FC);
		word32 eax_20 = Mem0[0x00408B98:word32];
		word32 esp_21 = fp;
		if (eax_20 != 0x00000000)
			eax_20();
		Mem32[esp_21 - 0x00000004:word32] = 0x000000FF;
		fn00402DD0(edi, dwArg00);
	}
	return edi;
}

word32 fn00402DD0(word32 edi, word32 dwArg04)
{
	word32 ecx_118 = dwArg04;
	word32 eax_23 = 0x00406498;
	word32 ebp_19 = 0x00000000;
	do
	{
		if (dwArg04 == Mem0[eax_23 + 0x00000000:word32])
			break;
		eax_23 = eax_23 + 0x00000008;
		ebp_19 = ebp_19 + 0x00000001;
	} while (eax_23 <u 0x00406528);
	if (dwArg04 == 0x00406498[ebp_19 * 0x00000008])
	{
		word32 eax_83 = Mem0[0x00408900:word32];
		if (eax_83 == 0x00000001 || eax_83 == 0x00000000 && Mem0[0x0040606C:word32] == 0x00000001)
		{
			word32 esi_138;
			word32 eax_88 = Mem0[0x00408BE0:word32];
			if (eax_88 != 0x00000000)
			{
				esi_138 = Mem0[eax_88 + 0x00000010:word32];
				if (esi_138 == 0xFFFFFFFF)
				{
l00402F6E:
					esi_138 = GetStdHandle(0xFFFFFFF4);
				}
			}
			else
				goto l00402F6E;
			word32 edx_97 = 0x0040649C[ebp_19 * 0x00000008];
			Mem100[fp - 0x000001BC:word32] = 0x00000000;
			word32 edi_103 = edx_97;
			word32 ecx_104 = fp - 0x000001A8 | 0xFFFFFFFF;
			do
			{
				if (ecx_104 == 0x00000000)
					break;
				edi_103 = edi_458 + 0x00000001;
				ecx_104 = ecx_104 - 0x00000001;
				word32 edi_458 = edi_103;
			} while (0x00 != Mem100[edi_458 + 0x00000000:byte]);
			word32 ecx_117 = ~ecx_104;
			WriteFile(esi_138, edx_97, ecx_117 - 0x00000001, fp - 0x000001A8, 0x00000000);
			ecx_118 = ecx_117 - 0x00000001;
			goto l00402F9B;
		}
		else if (dwArg04 != 0x000000FC)
		{
			word32 esp_155 = fp - 0x000001B8;
			if (GetModuleFileNameA(0x00000000, fp - 0x00000104, 0x00000104) == 0x00000000)
			{
				ecx_118 = 0x00000005;
				word32 esi_433 = 0x0040535E;
				word32 edi_434 = fp - 0x00000104 + 0x00000002;
				while (ecx_118 != 0x00000000)
				{
					Mem439[edi_434 + 0x00000000:word32] = Mem0[esi_433 + 0x00000000:word32];
					esi_433 = esi_433 + 0x00000004;
					edi_434 = edi_434 + 0x00000004;
					ecx_118 = ecx_118 - 0x00000001;
				}
				Mem444[edi_434 + 0x00000000:word16] = Mem0[esi_433 + 0x00000000:word16];
				Mem448[edi_434 + 0x00000000:byte] = Mem444[esi_433 + 0x00000000:byte];
			}
			word32 edi_161 = fp - 0x00000104;
			word32 ecx_162 = ecx_118 | 0xFFFFFFFF;
			word32 ebx_167 = fp - 0x00000104;
			do
			{
				if (ecx_162 == 0x00000000)
					break;
				edi_161 = edi_459 + 0x00000001;
				ecx_162 = ecx_162 - 0x00000001;
				word32 edi_459 = edi_161;
			} while (0x00 != Mem0[edi_459 + 0x00000000:byte]);
			word32 ecx_175 = ~ecx_162;
			if (ecx_175 >u 0x0000003C)
			{
				word32 edi_397 = fp - 0x00000104;
				word32 ecx_398 = ecx_175 | 0xFFFFFFFF;
				do
				{
					if (ecx_398 == 0x00000000)
						break;
					edi_397 = edi_466 + 0x00000001;
					ecx_398 = ecx_398 - 0x00000001;
					word32 edi_466 = edi_397;
				} while (0x00 != Mem0[edi_466 + 0x00000000:byte]);
				Mem411[fp - 0x000001BC:word32] = 0x00000003;
				Mem420[fp - 0x000001C4:word32] = ~ecx_398 - 0x00000001 + (fp - 0x0000013F);
				ebx_167 = fn00403D90(dwLoc01C8, 0x00000000, 0x00405358, 0x00000104, edi);
				esp_155 = fp - 0x000001B8;
			}
			word32 ecx_183 = 0x00000006;
			word32 esi_184 = 0x0040533C;
			word32 edi_185 = esp_155 + 0x00000014;
			while (ecx_183 != 0x00000000)
			{
				Mem194[edi_185 + 0x00000000:word32] = Mem0[esi_184 + 0x00000000:word32];
				esi_184 = esi_184 + 0x00000004;
				edi_185 = edi_185 + 0x00000004;
				ecx_183 = ecx_183 - 0x00000001;
			}
			Mem199[edi_185 + 0x00000000:word16] = Mem0[esi_184 + 0x00000000:word16];
			word32 ecx_201 = ecx_183 | 0xFFFFFFFF;
			word32 edi_204 = ebx_167;
			do
			{
				if (ecx_201 == 0x00000000)
					break;
				edi_204 = edi_204 + 0x00000001;
				ecx_201 = ecx_201 - 0x00000001;
			} while (0x00 != Mem199[edi_204 + 0x00000000:byte]);
			word32 ecx_213 = ~ecx_201;
			word32 esi_217 = edi_204 - ecx_213;
			word32 ecx_218 = ecx_213 | 0xFFFFFFFF;
			word32 edi_221 = esp_155 + 0x00000014;
			do
			{
				if (ecx_218 == 0x00000000)
					break;
				edi_221 = edi_221 + 0x00000001;
				ecx_218 = ecx_218 - 0x00000001;
			} while (0x00 != Mem199[edi_221 + 0x00000000:byte]);
			word32 edi_229 = edi_221 - 0x00000001;
			word32 ecx_230 = ecx_213 >>u 0x00000002;
			while (ecx_230 != 0x00000000)
			{
				Mem236[edi_229 + 0x00000000:word32] = Mem199[esi_217 + 0x00000000:word32];
				esi_217 = esi_217 + 0x00000004;
				edi_229 = edi_229 + 0x00000004;
				ecx_230 = ecx_230 - 0x00000001;
			}
			word32 esp_245 = esp_155 - 0x00000004;
			Mem246[esp_245 + 0x00000000:word32] = 0x00012010;
			word32 edx_241 = esp_155 + 0x00000014;
			word32 ecx_242 = ecx_213 & 0x00000003;
			while (ecx_242 != 0x00000000)
			{
				Mem251[edi_229 + 0x00000000:byte] = Mem246[esi_217 + 0x00000000:byte];
				esi_217 = esi_217 + 0x00000001;
				edi_229 = edi_229 + 0x00000001;
				ecx_242 = ecx_242 - 0x00000001;
			}
			word32 edi_255 = 0x00405338;
			word32 ecx_256 = ecx_242 | 0xFFFFFFFF;
			do
			{
				if (ecx_256 == 0x00000000)
					break;
				edi_255 = edi_255 + 0x00000001;
				ecx_256 = ecx_256 - 0x00000001;
			} while (0x00 != Mem246[edi_255 + 0x00000000:byte]);
			Mem270[esp_245 - 0x00000004:word32] = 0x00405310;
			word32 ecx_267 = ~ecx_256;
			word32 esi_271 = edi_255 - ecx_267;
			word32 edi_273 = edx_241;
			word32 ecx_274 = ecx_267 | 0xFFFFFFFF;
			do
			{
				if (ecx_274 == 0x00000000)
					break;
				edi_273 = edi_273 + 0x00000001;
				ecx_274 = ecx_274 - 0x00000001;
			} while (0x00 != Mem270[edi_273 + 0x00000000:byte]);
			word32 edi_284 = edi_273 - 0x00000001;
			word32 ecx_285 = ecx_267 >>u 0x00000002;
			while (ecx_285 != 0x00000000)
			{
				Mem291[edi_284 + 0x00000000:word32] = Mem270[esi_271 + 0x00000000:word32];
				esi_271 = esi_271 + 0x00000004;
				edi_284 = edi_284 + 0x00000004;
				ecx_285 = ecx_285 - 0x00000001;
			}
			word32 ecx_297 = ecx_267 & 0x00000003;
			while (ecx_297 != 0x00000000)
			{
				Mem304[edi_284 + 0x00000000:byte] = Mem270[esi_271 + 0x00000000:byte];
				esi_271 = esi_271 + 0x00000001;
				edi_284 = edi_284 + 0x00000001;
				ecx_297 = ecx_297 - 0x00000001;
			}
			word32 edi_308 = 0x0040649C[ebp_19 * 0x00000008];
			word32 ecx_309 = ecx_297 | 0xFFFFFFFF;
			do
			{
				if (ecx_309 == 0x00000000)
					break;
				edi_308 = edi_308 + 0x00000001;
				ecx_309 = ecx_309 - 0x00000001;
			} while (0x00 != Mem270[edi_308 + 0x00000000:byte]);
			word32 ecx_320 = ~ecx_309;
			word32 esi_322 = edi_308 - ecx_320;
			word32 edi_324 = esp_245 + 0x00000018;
			word32 ecx_325 = ecx_320 | 0xFFFFFFFF;
			do
			{
				if (ecx_325 == 0x00000000)
					break;
				edi_324 = edi_324 + 0x00000001;
				ecx_325 = ecx_325 - 0x00000001;
			} while (0x00 != Mem270[edi_324 + 0x00000000:byte]);
			word32 edi_335 = edi_324 - 0x00000001;
			word32 ecx_336 = ecx_320 >>u 0x00000002;
			while (ecx_336 != 0x00000000)
			{
				Mem342[edi_335 + 0x00000000:word32] = Mem270[esi_322 + 0x00000000:word32];
				esi_322 = esi_322 + 0x00000004;
				edi_335 = edi_335 + 0x00000004;
				ecx_336 = ecx_336 - 0x00000001;
			}
			Mem352[esp_245 - 0x00000008:word32] = esp_245 + 0x00000018;
			word32 ecx_348 = ecx_320 & 0x00000003;
			while (ecx_348 != 0x00000000)
			{
				Mem357[edi_335 + 0x00000000:byte] = Mem352[esi_322 + 0x00000000:byte];
				esi_322 = esi_322 + 0x00000001;
				edi_335 = edi_335 + 0x00000001;
				ecx_348 = ecx_348 - 0x00000001;
			}
			return fn00403D00();
		}
		else
		{
l00402F9B:
			return ecx_118;
		}
	}
	else
		goto l00402F9B;
}

word32 fn00402FB0(word32 dwArg04, ptr32 ecxOut)
{
	word32 ecx_10;
	return fn00402FD0(dwArg04, Mem0[0x00408BCC:word32], out ecx_10);
}

word32 fn00402FD0(word32 dwArg04, word32 dwArg08, ptr32 ecxOut)
{
	*ecxOut = ecx;
	word32 eax_20;
	word32 esi_43 = dwArg04;
	if (dwArg04 <=u 0xFFFFFFE0)
	{
		if (dwArg04 == 0x00000000)
			esi_43 = 0x00000001;
		do
		{
			if (esi_43 <=u 0xFFFFFFE0)
			{
				word32 ecx_77;
				eax_20 = fn00403020(esi_43, out ecx_77);
			}
			else
				eax_20 = 0x00000000;
			if (eax_20 != 0x00000000 || dwArg08 == 0x00000000)
				goto l00403011;
			word32 ecx_69;
		} while (fn00403E90(esi_43, out ecx_69) != 0x00000000);
l0040300F:
		eax_20 = 0x00000000;
	}
	else
		goto l0040300F;
	return eax_20;
}

word32 fn00403020(word32 dwArg04, ptr32 ecxOut)
{
	*ecxOut = ecx;
	word32 eax_26;
	word32 esi_10 = dwArg04 + 0x0000000F & 0xFFFFFFF0;
	if (esi_10 <=u Mem0[0x00408774:word32])
	{
		word32 ecx_49;
		eax_26 = fn00403940(esi_10 >>u 0x00000004, out ecx_49);
		if (eax_26 == 0x00000000)
		{
l00403046:
			eax_26 = HeapAlloc(Mem0[0x00408BD4:word32], 0x00000000, esi_10);
		}
	}
	else
		goto l00403046;
	return eax_26;
}

word32 fn00403060(word32 dwArg04)
{
	if (dwArg04 >=u Mem0[0x00408CE0:word32])
		return 0x00000000;
	else
		return DPB(dwArg04 & 0x0000001F, (0x00408BE0[(dwArg04 >> 0x00000005) * 0x00000004] + 0x00000004)[(dwArg04 & 0x0000001F) * 0x08], 0, 8) & 0x00000040;
}

void fn004030E0(word32 dwArg04)
{
	word32 eax_15 = Mem0[dwArg04 + 0x0000000C:word32];
	if ((byte) (eax_15 & 0x00000003) == 0x02 && (eax_15 & 0x00000108) != 0x00000000)
	{
		word32 eax_65 = Mem0[dwArg04 + 0x00000008:word32];
		word32 edi_68 = Mem0[dwArg04 + 0x00000000:word32] - eax_65;
		if (edi_68 > 0x00000000)
		{
			word32 eax_78 = fn00403F10(Mem0[dwArg04 + 0x00000010:word32], eax_65, edi_68);
			word32 eax_82 = Mem0[dwArg04 + 0x0000000C:word32];
			byte al_83 = (byte) eax_82;
			if (eax_78 != edi_68)
			{
				Mem107[dwArg04 + 0x0000000C:word32] = DPB(eax_82, al_83 | 0x20, 0, 8);
				goto l0040313C;
			}
			else if ((al_83 & 0x80) != 0x00)
			{
				Mem91[dwArg04 + 0x00000004:word32] = 0x00000000;
				Mem92[dwArg04 + 0x0000000C:word32] = DPB(eax_82, al_83 & 0xFD, 0, 8);
				Mem94[dwArg04 + 0x00000000:word32] = Mem92[dwArg04 + 0x00000008:word32];
				return;
			}
			else
			{
l0040313C:
				word32 eax_52 = Mem0[dwArg04 + 0x00000008:word32];
				Mem53[dwArg04 + 0x00000004:word32] = 0x00000000;
				Mem54[dwArg04 + 0x00000000:word32] = eax_52;
				return;
			}
		}
		else
			goto l0040313C;
	}
	else
		goto l0040313C;
}

word32 fn004031E0(word32 dwArg04, word16 wArg08)
{
	word32 eax_117 = dwArg04;
	if (dwArg04 == 0x00000000)
		return dwArg04;
	else if (Mem0[0x00408BA8:word32] == 0x00000000)
	{
		byte cl_91 = (byte) wArg08;
		if (wArg08 <=u 0x00FF)
		{
			Mem94[dwArg04 + 0x00000000:byte] = cl_91;
			return 0x00000001;
		}
		else
		{
l00403243:
			Mem84[0x00408914:word32] = 0x0000002A;
			eax_117 = eax_117 | 0xFFFFFFFF;
l00403250:
			return eax_117;
		}
	}
	else
	{
		eax_117 = WideCharToMultiByte(Mem0[0x00408BB8:word32], 0x00000220, fp + 0x00000008, 0x00000001, dwArg04, Mem0[0x00408780:word32], 0x00000000, fp + 0x00000004);
		if (eax_117 == 0x00000000 || 0x00000000 != 0x00000000)
			goto l00403243;
	}
}

word32 fn00403260(word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10, ptr32 edxOut)
{
	word32 eax_21;
	if (dwArg10 == 0x00000000)
	{
		word32 edx_36 = SEQ(0x00000000, dwArg08) % dwArg0C;
		eax_21 = SEQ(SEQ(edx_36, dwArg04) % dwArg0C, dwArg04) /u dwArg0C;
		word32 edx_47;
		*edxOut = SEQ(edx_36, dwArg08) /u dwArg0C;
	}
	else
	{
		word32 ecx_50 = dwArg10;
		word32 ebx_51 = dwArg0C;
		word32 edx_52 = dwArg08;
		word32 eax_53 = dwArg04;
		do
		{
			word32 ecx_59 = ecx_50 >>u 0x00000001;
			edx_52 = edx_52 >>u 0x00000001;
			ebx_51 = __rcr(ebx_51, 0x01, cond(ecx_59));
			eax_53 = __rcr(eax_53, 0x01, cond(edx_52));
			word64 edx_eax_69 = SEQ(edx_52, eax_53);
			ecx_50 = ecx_59;
		} while (ecx_59 != 0x00000000);
		word32 eax_76 = SEQ(edx_eax_69 % ebx_51, eax_53) /u ebx_51;
		word64 edx_eax_82 = eax_76 *u dwArg0C;
		word32 esi_102 = eax_76;
		word32 eax_83 = (word32) edx_eax_82;
		word32 edx_85 = SLICE(edx_eax_82, word32, 32) + (word32) (dwArg10 *u eax_76);
		if (edx_85 <u 0x00000000 || (edx_85 >u dwArg08 || edx_85 >=u dwArg08 && eax_83 >u dwArg04))
			esi_102 = eax_76 - 0x00000001;
		word32 edx_93;
		*edxOut = 0x00000000;
		eax_21 = esi_102;
	}
	return eax_21;
}

word32 fn004032D0(word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10)
{
	word32 eax_17;
	if (dwArg10 == 0x00000000)
		eax_17 = SEQ(SEQ(0x00000000, dwArg08) % dwArg0C, dwArg04) % dwArg0C;
	else
	{
		word32 ecx_46 = dwArg10;
		word32 ebx_47 = dwArg0C;
		word32 edx_48 = dwArg08;
		word32 eax_49 = dwArg04;
		do
		{
			word32 ecx_55 = ecx_46 >>u 0x00000001;
			edx_48 = edx_48 >>u 0x00000001;
			ebx_47 = __rcr(ebx_47, 0x01, cond(ecx_55));
			eax_49 = __rcr(eax_49, 0x01, cond(edx_48));
			word64 edx_eax_65 = SEQ(edx_48, eax_49);
			ecx_46 = ecx_55;
		} while (ecx_55 != 0x00000000);
		word32 eax_72 = SEQ(edx_eax_65 % ebx_47, eax_49) /u ebx_47;
		word64 edx_eax_79 = dwArg0C *u eax_72;
		word32 eax_113 = (word32) edx_eax_79;
		word32 edx_114 = SLICE(edx_eax_79, word32, 32) + (word32) (dwArg10 *u eax_72);
		if (edx_114 <u 0x00000000 || (edx_114 >u dwArg08 || edx_114 >=u dwArg08 && eax_113 >u dwArg04))
		{
			word64 edx_eax_112 = SEQ(edx_114, eax_113 - dwArg0C) - dwArg10_dwArg0C;
			eax_113 = (word32) edx_eax_112;
			edx_114 = SLICE(edx_eax_112, word32, 32);
		}
		eax_17 = -(word32) (SEQ(edx_114, eax_113 - dwArg04) - dwArg08_dwArg04);
	}
	return eax_17;
}

word32 fn00403350(word32 dwArg04, word32 dwArg08)
{
	word32 eax_17 = Mem0[dwArg08 + 0x0000000C:word32];
	byte al_18 = (byte) eax_17;
	word32 ebp_19 = Mem0[dwArg08 + 0x00000010:word32];
	if ((al_18 & 0x82) != 0x00 && (al_18 & 0x40) == 0x00)
	{
		word32 ebx_150 = 0x00000000;
		if ((al_18 & 0x01) != 0x00)
		{
			Mem227[dwArg08 + 0x00000004:word32] = 0x00000000;
			if ((al_18 & 0x10) != 0x00)
			{
				Mem233[dwArg08 + 0x00000000:word32] = Mem227[dwArg08 + 0x00000008:word32];
				Mem234[dwArg08 + 0x0000000C:word32] = DPB(eax_17, al_18 & 0xFE, 0, 8);
l00403389:
				word32 eax_69 = Mem0[dwArg08 + 0x0000000C:word32];
				Mem71[dwArg08 + 0x00000004:word32] = 0x00000000;
				word32 eax_74 = DPB(eax_69, (byte) eax_69 & 0xEF | 0x02, 0, 8);
				Mem78[dwArg08 + 0x0000000C:word32] = eax_74;
				if ((eax_74 & 0x0000010C) == 0x00000000 && (dwArg08 != 0x00406098 && dwArg08 != 0x004060B8 || fn00403060(ebp_19) == 0x00000000))
					fn00404200(dwArg08);
				word32 edi_135;
				if ((Mem78[dwArg08 + 0x0000000C:word32] & 0x00000108) != 0x00000000)
				{
					word32 eax_131 = Mem78[dwArg08 + 0x00000008:word32];
					word32 ecx_134 = Mem78[dwArg08 + 0x00000018:word32];
					edi_135 = Mem78[dwArg08 + 0x00000000:word32] - eax_131;
					Mem140[dwArg08 + 0x00000000:word32] = eax_131 + 0x00000001;
					Mem141[dwArg08 + 0x00000004:word32] = ecx_134 - 0x00000001;
					if (edi_135 > 0x00000000)
					{
						word32 eax_148 = fn00403F10(ebp_19, eax_131, edi_135);
						Mem155[Mem141[dwArg08 + 0x00000008:word32]:byte] = bArg04;
						ebx_150 = eax_148;
					}
					else
					{
						word32 eax_160;
						if (ebp_19 != 0xFFFFFFFF)
							eax_160 = 0x00408BE0[(ebp_19 >> 0x00000005) * 0x00000004] + (ebp_19 & 0x0000001F) * 0x00000008;
						else
							eax_160 = 0x00406478;
						if ((Mem141[eax_160 + 0x00000004:byte] & 0x20) != 0x00)
							fn00404140(ebp_19, 0x00000000, 0x00000002);
						Mem172[Mem141[dwArg08 + 0x00000008:word32]:byte] = bArg04;
					}
				}
				else
				{
					edi_135 = 0x00000001;
					ebx_150 = fn00403F10(ebp_19, fp + 0x00000004, 0x00000001);
				}
				if (ebx_150 != edi_135)
				{
					word32 eax_100 = Mem78[dwArg08 + 0x0000000C:word32];
					word32 eax_103 = DPB(eax_100, (byte) eax_100 | 0x20, 0, 8);
					Mem104[dwArg08 + 0x0000000C:word32] = eax_103;
					return eax_103 | 0xFFFFFFFF;
				}
				else
					return dwArg04 & 0x000000FF;
			}
			else
			{
l00403470:
				word32 eax_41 = DPB(eax_17, al_18 | 0x20, 0, 8);
				Mem44[dwArg08 + 0x0000000C:word32] = eax_41;
				return eax_41 | 0xFFFFFFFF;
			}
		}
		else
			goto l00403389;
	}
	else
		goto l00403470;
}

void fn00403590(word32 ecx, word32 dwArg04)
{
	if (dwArg04 != 0x00000000)
	{
		word32 eax_50 = fn00403880(dwArg04, fp - 0x00000004, fp + 0x00000004);
		if (eax_50 != 0x00000000)
		{
			fn004038E0(ecx, dwArg04, eax_50);
			return;
		}
		else
		{
			HeapFree(Mem0[0x00408BD4:word32], 0x00000000, dwArg04);
l004035D7:
			return;
		}
	}
	else
		goto l004035D7;
}

word32 fn004035E0()
{
	word32 ebp_194;
	if (Mem0[0x00406760:word32] == 0xFFFFFFFF)
	{
		ebp_194 = 0x00406750;
l00403611:
		Mem58[fp - 0x00000010:word32] = 0x00000004;
		Mem60[fp - 0x00000014:word32] = 0x00002000;
		word32 eax_65 = VirtualAlloc(0x00000000, 0x00400000, 0x00000000, 0x00002020);
		word32 esi_160 = eax_65;
		if (eax_65 != 0x00000000)
		{
			Mem87[fp - 0x00000010:word32] = 0x00000004;
			Mem89[fp - 0x00000014:word32] = 0x00001000;
			Mem91[fp - 0x00000018:word32] = 0x00010000;
			Mem93[fp - 0x0000001C:word32] = eax_65;
			if (VirtualAlloc(0x00000000, 0x00400000, 0x00002000, 0x00000004) == 0x00000000)
			{
				Mem187[fp - 0x00000010:word32] = 0x00008000;
				Mem189[fp - 0x00000014:word32] = 0x00000000;
				Mem191[fp - 0x00000018:word32] = eax_65;
				VirtualFree(0x00010000, 0x00001000, 0x00000004);
l00403725:
				if (ebp_194 != 0x00406750)
					HeapFree(Mem60[0x00408BD4:word32], 0x00000000, ebp_194);
l0040373C:
				return 0x00000000;
			}
			else
			{
				if (ebp_194 == 0x00406750)
				{
					if (Mem93[0x00406750:word32] == 0x00000000)
						Mem179[0x00406750:word32] = 0x00406750;
					if (Mem93[0x00406754:word32] == 0x00000000)
						Mem178[0x00406754:word32] = 0x00406750;
				}
				else
				{
					Mem180[ebp_194 + 0x00000000:word32] = 0x00406750;
					Mem182[ebp_194 + 0x00000004:word32] = Mem180[0x00406754:word32];
					Mem183[0x00406754:word32] = ebp_194;
					Mem185[Mem183[ebp_194 + 0x00000004:word32]:word32] = ebp_194;
				}
				Mem105[ebp_194 + 0x00000014:word32] = eax_65 + 0x00400000;
				Mem106[ebp_194 + 0x00000010:word32] = eax_65;
				word32 ecx_103 = ebp_194 + 0x00000018;
				Mem107[ebp_194 + 0x00000008:word32] = ecx_103;
				Mem108[ebp_194 + 0x0000000C:word32] = ebp_194 + 0x00000098;
				word32 eax_109 = 0x00000000;
				do
				{
					ecx_103 = ecx_103 + 0x00000008;
					Mem127[ecx_103 - 0x00000008:word32] = ((word32) (eax_109 >= 0x00000010) - 0x00000001 & 0x000000F1) - 0x00000001;
					Mem128[ecx_103 - 0x00000004:word32] = 0x000000F1;
					eax_109 = eax_109 + 0x00000001;
				} while (eax_109 < 0x00000400);
				word32 ecx_131 = 0x00004000;
				word32 edi_136 = eax_65;
				while (ecx_131 != 0x00000000)
				{
					Mem139[edi_136 + 0x00000000:word32] = 0x00000000;
					edi_136 = edi_136 + 0x00000004;
					ecx_131 = ecx_131 - 0x00000001;
				}
				if (eax_65 <u Mem128[ebp_194 + 0x00000010:word32] + 0x00010000)
					do
					{
						Mem162[esi_160 + 0x00000004:word32] = 0x000000F0;
						Mem163[esi_160 + 0x00000000:word32] = esi_160 + 0x00000008;
						Mem164[esi_160 + 0x000000F8:byte] = 0xFF;
						esi_160 = esi_160 + 0x00001000;
					} while (esi_160 <u Mem164[ebp_194 + 0x00000010:word32] + 0x00010000);
				return ebp_194;
			}
		}
		else
			goto l00403725;
	}
	else
	{
		word32 eax_204 = HeapAlloc(Mem0[0x00408BD4:word32], 0x00000000, 0x00002020);
		ebp_194 = eax_204;
		if (eax_204 != 0x00000000)
			goto l00403611;
		else
			goto l0040373C;
	}
}

void fn00403750(word32 dwArg04)
{
	VirtualFree(Mem0[dwArg04 + 0x00000010:word32], 0x00000000, 0x00008000);
	if (Mem0[0x00408770:word32] == dwArg04)
		Mem51[0x00408770:word32] = Mem0[dwArg04 + 0x00000004:word32];
	if (dwArg04 != 0x00406750)
	{
		word32 edx_29 = Mem0[dwArg04 + 0x00000004:word32];
		word32 eax_30 = Mem0[dwArg04 + 0x00000000:word32];
		Mem32[fp - 0x00000008:word32] = dwArg04;
		Mem34[fp - 0x0000000C:word32] = 0x00000000;
		Mem35[edx_29 + 0x00000000:word32] = eax_30;
		Mem38[Mem35[dwArg04 + 0x00000000:word32] + 0x00000004:word32] = Mem35[dwArg04 + 0x00000004:word32];
		HeapFree(Mem38[0x00408BD4:word32], 0x00000000, 0x00008000);
		return;
	}
	else
	{
		Mem46[0x00406760:word32] = 0xFFFFFFFF;
		return;
	}
}

void fn004037B0(word32 dwArg04)
{
	word32 edi_106 = Mem0[0x00406754:word32];
	do
		if (Mem0[edi_106 + 0x00000010:word32] != 0xFFFFFFFF)
		{
			word32 ebp_102 = 0x00000000;
			word32 esi_143 = edi_106 + 0x00002010;
			word32 ebx_142 = 0x003FF000;
			do
			{
				if (Mem0[esi_143 + 0x00000000:word32] == 0x000000F0)
				{
					word32 eax_150 = Mem0[edi_106 + 0x00000010:word32] + ebx_142;
					Mem152[fp - 0x00000018:word32] = 0x00001000;
					if (VirtualFree(eax_150, 0x00001000, 0x00004000) != 0x00000000)
					{
						Mem160[esi_143 + 0x00000000:word32] = 0xFFFFFFFF;
						Mem163[0x00408BBC:word32] = Mem160[0x00408BBC:word32] - 0x00000001;
						word32 eax_164 = Mem163[edi_106 + 0x0000000C:word32];
						if (eax_164 == 0x00000000 || eax_164 >u esi_143)
							Mem178[edi_106 + 0x0000000C:word32] = esi_143;
						word32 eax_172 = dwArg04 - 0x00000001;
						ebp_102 = ebp_102 + 0x00000001;
						dwArg04 = eax_172;
						if (eax_172 == 0x00000000)
							break;
					}
				}
l00403820:
				ebx_142 = ebx_142 - 0x00001000;
				esi_143 = esi_143 - 0x00000008;
			} while (ebx_142 >= 0x00000000);
l0040382D:
			edi_106 = Mem0[edi_106 + 0x00000004:word32];
			if (ebp_102 != 0x00000000 && Mem0[edi_106 + 0x00000018:word32] == 0xFFFFFFFF)
			{
				word32 eax_112 = 0x00000001;
				word32 ecx_113 = edi_106 + 0x00000020;
				do
				{
					if (Mem0[ecx_113 + 0x00000000:word32] != 0xFFFFFFFF)
						break;
					eax_112 = eax_112 + 0x00000001;
					ecx_113 = ecx_113 + 0x00000008;
				} while (eax_112 < 0x00000400);
				if (eax_112 == 0x00000400)
					fn00403750(edi_106);
			}
		}
	while (edi_106 == Mem0[0x00406754:word32] || dwArg04 <= 0x00000000);
	return;
}

word32 fn00403880(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	byte cl_4 = (byte) dwArg04;
	word32 eax_28 = 0x00406750;
	while (dwArg04 <=u Mem0[eax_28 + 0x00000010:word32] || dwArg04 >=u Mem0[eax_28 + 0x00000014:word32])
	{
		eax_28 = Mem0[eax_28 + 0x00000000:word32];
		if (eax_28 == 0x00406750)
			goto l004038D6;
	}
	if ((cl_4 & 0x0F) == 0x00 && (dwArg04 & 0x00000FFF) >=u 0x00000100)
	{
		Mem43[dwArg08 + 0x00000000:word32] = eax_28;
		Mem49[dwArg0C + 0x00000000:word32] = dwArg04 & 0xFFFFF000;
		return (dwArg04 - (dwArg04 & 0xFFFFF000) - 0x00000100 >> 0x00000004) + 0x00000008 + (dwArg04 & 0xFFFFF000);
	}
	else
		return 0x00000000;
}

void fn004038E0(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	word32 ecx_11 = dwArg08 - Mem0[dwArg04 + 0x00000010:word32];
	word32 eax_14 = dwArg04 + 0x00000018 + (ecx_11 >> 0x0000000C) * 0x00000008;
	Mem20[eax_14 + 0x00000000:word32] = (dwArg04 + 0x00000018)[(ecx_11 >> 0x0000000C) * 0x00000008] + (word32) Mem0[dwArg0C + 0x00000000:byte];
	Mem21[dwArg0C + 0x00000000:byte] = 0x00;
	word32 ecx_22 = Mem21[eax_14 + 0x00000000:word32];
	Mem23[eax_14 + 0x00000004:word32] = 0x000000F1;
	if (ecx_22 == 0x000000F0)
	{
		word32 eax_33 = Mem23[0x00408BBC:word32];
		Mem37[0x00408BBC:word32] = eax_33 + 0x00000001;
		if (eax_33 == 0xFFFFFFE1)
			fn004037B0(0x00000010);
	}
	return;
}

word32 fn00403940(word32 dwArg04, ptr32 ecxOut)
{
	word32 ecx_301 = Mem0[0x00408770:word32];
	byte bl_12 = (byte) dwArg04;
	word32 dwLoc04_104 = ecx_301;
	while (true)
	{
		word32 eax_43 = Mem0[ecx_301 + 0x00000010:word32];
		if (eax_43 != 0xFFFFFFFF)
		{
			word32 edi_283 = Mem0[ecx_301 + 0x00000008:word32];
			word32 ebp_284 = ecx_301 + 0x00002018;
			word32 esi_290 = (edi_283 - ecx_301 - 0x00000018 >> 0x00000003 << 0x0000000C) + eax_43;
			if (edi_283 <u ebp_284)
				do
				{
					word32 eax_378 = Mem0[edi_283 + 0x00000000:word32];
					if (eax_378 >= dwArg04 && Mem0[edi_283 + 0x00000004:word32] >u dwArg04)
					{
						word32 eax_402 = fn00403B80(esi_290, eax_378, dwArg04);
						if (eax_402 != 0x00000000)
						{
							Mem410[0x00408770:word32] = dwLoc04_104;
							Mem414[edi_283 + 0x00000000:word32] = Mem410[edi_283 + 0x00000000:word32] - dwArg04;
							Mem415[dwLoc04_104 + 0x00000008:word32] = edi_283;
							word32 ecx_424;
							*ecxOut = dwLoc04_104;
							return eax_402;
						}
						Mem408[edi_283 + 0x00000004:word32] = dwArg04;
						ecx_301 = dwLoc04_104;
						goto l0040399C;
					}
l0040399C:
					edi_283 = edi_283 + 0x00000008;
					esi_290 = esi_290 + 0x00001000;
				} while (edi_283 <u ebp_284);
l004039A9:
			word32 ebp_303 = Mem0[ecx_301 + 0x00000008:word32];
			word32 edi_304 = Mem0[ecx_301 + 0x00000010:word32];
			word32 esi_305 = ecx_301 + 0x00000018;
			if (esi_305 <u ebp_303)
				do
				{
					word32 eax_319 = Mem0[esi_305 + 0x00000000:word32];
					if (eax_319 >= dwArg04 && Mem0[esi_305 + 0x00000004:word32] >u dwArg04)
					{
						word32 eax_343 = fn00403B80(edi_304, eax_319, dwArg04);
						if (eax_343 != 0x00000000)
						{
							Mem351[0x00408770:word32] = dwLoc04_104;
							Mem355[esi_305 + 0x00000000:word32] = Mem351[esi_305 + 0x00000000:word32] - dwArg04;
							Mem356[dwLoc04_104 + 0x00000008:word32] = esi_305;
							word32 ecx_365;
							*ecxOut = dwLoc04_104;
							return eax_343;
						}
						Mem349[esi_305 + 0x00000004:word32] = dwArg04;
						ecx_301 = dwLoc04_104;
						goto l004039D7;
					}
l004039D7:
					esi_305 = esi_305 + 0x00000008;
					edi_304 = edi_304 + 0x00001000;
				} while (esi_305 <u ebp_303);
		}
l004039E4:
		word32 ecx_79 = Mem0[ecx_301 + 0x00000000:word32];
		if (ecx_301 == Mem0[0x00408770:word32])
		{
			word32 ebp_125 = 0x00406750;
			while (Mem0[ebp_125 + 0x00000010:word32] == (ecx_301 | 0xFFFFFFFF) || Mem0[ebp_125 + 0x0000000C:word32] == 0x00000000)
			{
				ebp_125 = Mem0[ebp_125 + 0x00000000:word32];
				if (ebp_125 == 0x00406750)
				{
					word32 eax_128 = fn004035E0();
					if (eax_128 != 0x00000000)
					{
						word32 ecx_134 = Mem0[eax_128 + 0x00000010:word32];
						Mem135[ecx_134 + 0x00000008:byte] = bl_12;
						Mem137[0x00408770:word32] = eax_128;
						Mem138[ecx_134 + 0x00000000:word32] = ecx_134 + 0x00000008 + dwArg04;
						Mem142[ecx_134 + 0x00000004:word32] = 0x000000F0 - dwArg04;
						Mem146[eax_128 + 0x00000018:word32] = Mem142[eax_128 + 0x00000018:word32] - (dwArg04 & 0x000000FF);
						word32 ecx_156;
						*ecxOut = ecx_301;
						return ecx_134 + 0x00000100;
					}
					else
						goto l00403B6B;
				}
			}
			word32 eax_162 = Mem0[ebp_125 + 0x0000000C:word32];
			word32 edi_171 = (eax_162 - ebp_125 - 0x00000018 >> 0x00000003 << 0x0000000C) + Mem0[ebp_125 + 0x00000010:word32];
			word32 esi_172 = 0x00000000;
			eax_274 = eax_162;
			if (Mem0[eax_162 + 0x00000000:word32] == (ecx_301 | 0xFFFFFFFF))
				do
				{
					word32 eax_274;
					if (esi_172 >= 0x00000010)
						break;
					eax_274 = eax_426 + 0x00000008;
					esi_172 = esi_172 + 0x00000001;
					word32 eax_426 = eax_274;
				} while (Mem0[eax_426 + 0x00000008:word32] == (ecx_301 | 0xFFFFFFFF));
			word32 eax_181 = esi_172 << 0x0000000C;
			dwLoc04_104 = eax_181;
			if (VirtualAlloc(edi_171, eax_181, 0x00001000, 0x00000004) == edi_171)
			{
				word32 edx_193 = eax_162;
				word32 ecx_198 = eax_162 + 0x00000004;
				if (esi_172 > 0x00000000)
				{
					word32 eax_255 = edi_171 + 0x00000004;
					do
					{
						Mem260[eax_255 + 0x00000000:word32] = 0x000000F0;
						Mem261[eax_255 - 0x00000004:word32] = eax_255 + 0x00000004;
						Mem262[eax_255 + 0x000000F4:byte] = 0xFF;
						Mem263[ecx_198 + 0x00000000:word32] = 0x000000F0;
						Mem264[ecx_198 + 0x00000000:word32] = 0x000000F1;
						eax_255 = eax_255 + 0x00001000;
						ecx_198 = ecx_198 + 0x00000008;
						esi_172 = esi_172 - 0x00000001;
					} while (esi_172 != 0x00000000);
					edx_193 = eax_162;
				}
				Mem203[0x00408770:word32] = ebp_125;
				word32 eax_202 = ebp_125 + 0x00002018;
				byte C_208 = cond(ecx_198 - eax_202);
				if (ecx_198 <u eax_202)
				{
					do
					{
						if (Mem203[ecx_198 + 0x00000000:word32] == 0xFFFFFFFF)
							break;
						ecx_198 = ecx_198 + 0x00000008;
					} while (ecx_198 <u eax_202);
					C_208 = cond(ecx_198 - eax_202);
				}
				Mem218[ebp_125 + 0x0000000C:word32] = 0x00000000 - C_208 & ecx_198;
				Mem219[edi_171 + 0x00000008:byte] = bl_12;
				Mem220[ebp_125 + 0x00000008:word32] = edx_193;
				Mem223[edx_193 + 0x00000000:word32] = Mem220[edx_193 + 0x00000000:word32] - dwArg04;
				Mem228[edi_171 + 0x00000004:word32] = Mem223[edi_171 + 0x00000004:word32] - dwArg04;
				Mem229[edi_171 + 0x00000000:word32] = edi_171 + 0x00000008 + dwArg04;
				word32 ecx_239;
				*ecxOut = eax_181;
				return edi_171 + 0x00000100;
			}
			else
			{
l00403B6B:
				word32 ecx_120;
				*ecxOut = dwLoc04_104;
				return 0x00000000;
			}
fn00403940_exit:
		}
	}
}

word32 fn00403B80(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	word32 ecx_22 = Mem0[dwArg04 + 0x00000000:word32];
	byte dl_4 = (byte) dwArg0C;
	word32 eax_20 = Mem0[dwArg04 + 0x00000004:word32];
	word32 esi_103 = ecx_22;
	if (eax_20 >=u dwArg0C)
	{
		Mem42[ecx_22 + 0x00000000:byte] = dl_4;
		if (ecx_22 + dwArg0C <u dwArg04 + 0x000000F8)
		{
			word32 eax_66 = Mem42[dwArg04 + 0x00000004:word32] - dwArg0C;
			Mem68[dwArg04 + 0x00000000:word32] = Mem42[dwArg04 + 0x00000000:word32] + dwArg0C;
			Mem69[dwArg04 + 0x00000004:word32] = eax_66;
		}
		else
		{
			Mem71[dwArg04 + 0x00000004:word32] = 0x00000000;
			Mem72[dwArg04 + 0x00000000:word32] = dwArg04 + 0x00000008;
		}
		return (ecx_22 + 0x00000008 << 0x00000004) - (dwArg04 * 0x00000003 + (dwArg04 * 0x00000003) * 0x00000004);
	}
	else
	{
		word32 eax_73 = eax_20 + ecx_22;
		if (Mem0[eax_73 + 0x00000000:byte] != 0x00)
			esi_103 = eax_73;
		word32 ecx_132;
		word32 eax_211 = esi_103 + dwArg0C;
		word32 ebx_136 = dwArg08;
		ecx_132 = ecx_22;
		ecx_132 = ecx_22;
		if (eax_211 <u dwArg04 + 0x000000F8)
		{
l00403BEF:
			do
			{
				byte al_216 = Mem0[esi_103 + 0x00000000:byte];
				word32 eax_217 = DPB(eax_211, al_216, 0, 8);
				if (al_216 == 0x00)
				{
					word32 eax_232 = esi_103 + 0x00000001;
					word32 ecx_234 = 0x00000001;
					if (Mem0[esi_103 + 0x00000001:byte] == 0x00)
						do
						{
							eax_232 = eax_232 + 0x00000001;
							ecx_234 = ecx_234 + 0x00000001;
						} while (Mem0[eax_232 + 0x00000000:byte] == 0x00);
					if (ecx_234 >=u dwArg0C)
					{
						word32 eax_252 = esi_103 + dwArg0C;
						if (eax_252 <u dwArg04 + 0x000000F8)
						{
							Mem259[dwArg04 + 0x00000000:word32] = eax_252;
							Mem260[dwArg04 + 0x00000004:word32] = ecx_234 - dwArg0C;
						}
						else
						{
							Mem262[dwArg04 + 0x00000000:word32] = dwArg04 + 0x00000008;
l00403CCF:
							Mem130[dwArg04 + 0x00000004:word32] = 0x00000000;
						}
l00403CD6:
						Mem105[esi_103 + 0x00000000:byte] = dl_4;
						return (esi_103 + 0x00000008 << 0x00000004) - (dwArg04 * 0x00000003 + (dwArg04 * 0x00000003) * 0x00000004);
					}
					if (esi_103 != ecx_22)
					{
						ebx_136 = ebx_136 - ecx_234;
						if (ebx_136 >=u dwArg0C)
						{
							ecx_132 = ecx_22;
							esi_103 = eax_232;
							goto l00403C38;
						}
						else
							goto l00403CEB;
					}
					Mem244[dwArg04 + 0x00000004:word32] = ecx_234;
					esi_103 = eax_232;
					ecx_132 = ecx_22;
					goto l00403C38;
				}
				esi_103 = esi_103 + (eax_217 & 0x000000FF);
l00403C38:
				eax_211 = dwArg04 + 0x000000F8;
			} while (esi_103 + dwArg0C <u dwArg04 + 0x000000F8);
l00403C64:
			esi_103 = dwArg04 + 0x00000008;
			if (dwArg04 + 0x00000008 <u ecx_132)
			{
l00403C6D:
				do
				{
					if (esi_103 + dwArg0C >=u dwArg04 + 0x000000F8)
						goto l00403CEB;
					byte al_150 = Mem0[esi_103 + 0x00000000:byte];
					word32 eax_151 = DPB(dwArg04 + 0x000000F8, al_150, 0, 8);
					if (al_150 == 0x00)
					{
						word32 eax_177 = esi_103 + 0x00000001;
						word32 ecx_179 = 0x00000001;
						if (Mem0[esi_103 + 0x00000001:byte] == 0x00)
							do
							{
								eax_177 = eax_177 + 0x00000001;
								ecx_179 = ecx_179 + 0x00000001;
							} while (Mem0[eax_177 + 0x00000000:byte] == 0x00);
						if (ecx_179 >=u dwArg0C)
						{
							word32 eax_190 = esi_103 + dwArg0C;
							if (eax_190 <u dwArg04 + 0x000000F8)
							{
								Mem197[dwArg04 + 0x00000000:word32] = eax_190;
								Mem198[dwArg04 + 0x00000004:word32] = ecx_179 - dwArg0C;
							}
							else
							{
								Mem199[dwArg04 + 0x00000000:word32] = dwArg04 + 0x00000008;
								goto l00403CCF;
							}
						}
						ebx_136 = ebx_136 - ecx_179;
						if (ebx_136 <u dwArg0C)
							goto l00403CEB;
						esi_103 = eax_177;
						goto l00403CAA;
					}
					esi_103 = esi_103 + (eax_151 & 0x000000FF);
l00403CAA:
				} while (esi_103 <u ecx_22);
				return 0x00000000;
			}
			else
			{
l00403CEB:
				return 0x00000000;
			}
		}
		else
			goto l00403C64;
	}
fn00403B80_exit:
}

word32 fn00403D00()
{
	word32 ebx_47 = 0x00000000;
	word32 esp_121 = fp - 0x0000000C;
	if (Mem0[0x00408BC0:word32] == 0x00000000)
	{
		word32 eax_81 = LoadLibraryA(0x004053A4);
		if (eax_81 != 0x00000000)
		{
			Mem100[fp - 0x00000010:word32] = 0x00405398;
			word32 eax_103 = GetProcAddress(eax_81, 0x004053A4);
			Mem108[0x00408BC0:word32] = eax_103;
			if (eax_103 != 0x00000000)
			{
				Mem110[fp - 0x00000010:word32] = 0x00405388;
				word32 eax_113 = GetProcAddress(eax_81, 0x00405398);
				Mem116[fp - 0x00000010:word32] = 0x00405374;
				Mem119[0x00408BC4:word32] = eax_113;
				Mem122[0x00408BC8:word32] = GetProcAddress(eax_81, 0x00405398);
				esp_121 = fp - 0x0000000C;
l00403D50:
				word32 eax_36 = Mem0[0x00408BC4:word32];
				if (eax_36 != 0x00000000)
				{
					eax_36();
					ebx_47 = eax_36;
				}
				if (ebx_47 != 0x00000000)
				{
					word32 eax_71 = Mem0[0x00408BC8:word32];
					if (eax_71 != 0x00000000)
					{
						Mem76[fp - 0x00000010:word32] = ebx_47;
						esp_121 = fp - 0x00000010;
						eax_71();
						ebx_47 = eax_71;
					}
				}
				word32 eax_54 = Mem0[esp_121 + 0x00000018:word32];
				word32 ecx_55 = Mem0[esp_121 + 0x00000014:word32];
				word32 edx_56 = Mem0[esp_121 + 0x00000010:word32];
				word32 esp_57 = esp_121 - 0x00000004;
				Mem58[esp_57 + 0x00000000:word32] = eax_54;
				Mem60[esp_57 - 0x00000004:word32] = ecx_55;
				Mem62[esp_57 - 0x00000008:word32] = edx_56;
				Mem64[esp_57 - 0x0000000C:word32] = ebx_47;
				Mem64[0x00408BC0:word32]();
				return ecx_55;
			}
			else
			{
l00403D89:
				return ecx;
			}
		}
		else
			goto l00403D89;
	}
	else
		goto l00403D50;
}

word32 fn00403D90(word32 dwArg00, word32 dwArg04, word32 dwArg08, word32 dwArg0C, word32 dwArg10)
{
	word32 ecx_298 = dwArg0C;
	if (dwArg0C != 0x00000000)
	{
		word32 ecx_220;
		word32 ecx_188;
		byte al_111;
		word32 ebx_114 = dwArg0C;
		word32 esi_131 = dwArg08;
		word32 edi_100 = dwArg04;
		if ((dwArg08 & 0x00000003) == 0x00000000)
		{
			ecx_220 = dwArg0C >>u 0x00000002;
			if (dwArg0C >>u 0x00000002 == 0x00000000)
			{
l00403DD5:
				do
				{
					byte al_134 = Mem0[esi_131 + 0x00000000:byte];
					Mem136[edi_100 + 0x00000000:byte] = al_134;
					word32 esi_135 = esi_131 + 0x00000001;
					word32 edi_137 = edi_100 + 0x00000001;
					if (al_111 == 0x00)
						;
					word32 ebx_148 = ebx_114 - 0x00000001;
				} while (ebx_148 != 0x00000001);
l00403DE2:
			}
		}
	}
}

word32 fn00403E90(word32 dwArg04, ptr32 ecxOut)
{
	*ecxOut = ecx;
	word32 eax_3 = Mem0[0x00408BD0:word32];
	if (eax_3 != 0x00000000)
	{
		word32 ecx_28 = dwArg04;
		*ecxOut = ecx_28;
		eax_3();
		if (eax_3 != 0x00000000)
			return 0x00000001;
		else
		{
l00403EAD:
			return 0x00000000;
		}
	}
	else
		goto l00403EAD;
}

word32 fn00403F10(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	word32 eax_171 = dwArg04;
	if (dwArg04 <u Mem0[0x00408CE0:word32])
	{
		word32 esi_110 = (dwArg04 & 0x0000001F) << 0x00000003;
		word32 edi_109 = (dwArg04 >> 0x00000005) * 0x00000004 + 0x00408BE0;
		byte cl_113 = Mem0[esi_110 + 0x00000004 + 0x00408BE0[(dwArg04 >> 0x00000005) * 0x00000004]:byte];
		if ((cl_113 & 0x01) != 0x00)
		{
			word32 dwLoc041C_123 = 0x00000000;
			word32 dwLoc040C_124 = 0x00000000;
			if (dwArg0C == 0x00000000)
				return 0x00000000;
			else
			{
				if ((cl_113 & 0x20) != 0x00)
					fn00404140(dwArg04, 0x00000000, 0x00000002);
				word32 ebp_164;
				word32 dwLoc0414_149;
				word32 eax_145 = Mem0[edi_109 + 0x00000000:word32] + esi_110;
				if ((Mem0[eax_145 + 0x00000004:byte] & 0x80) != 0x00)
				{
					ebp_164 = dwArg08;
					dwLoc0414_149 = 0x00000000;
					word32 edi_243 = dwArg08;
					if (true)
					{
						do
						{
							word32 eax_262 = fp - 0x00000404;
							do
							{
								if (edi_243 - dwArg08 >=u dwArg0C)
									break;
								byte cl_326 = Mem0[edi_243 + 0x00000000:byte];
								edi_243 = edi_243 + 0x00000001;
								if (cl_326 == 0x0A)
								{
									Mem343[eax_262 + 0x00000000:byte] = 0x0D;
									eax_262 = eax_262 + 0x00000001;
									dwLoc040C_124 = dwLoc040C_124 + 0x00000001;
								}
								Mem335[eax_262 + 0x00000000:byte] = cl_326;
								eax_262 = eax_262 + 0x00000001;
							} while (eax_262 - (fp - 0x00000404) < 0x00000400);
							word32 esi_285 = eax_262 - (fp - 0x00000404);
							if (WriteFile(Mem0[esi_110 + Mem0[edi_109 + 0x00000000:word32]:word32], fp - 0x00000404, esi_285, fp - 0x00000410, 0x00000000) == 0x00000000)
							{
								Mem325[fp - 0x00000414:word32] = GetLastError();
								goto l00404035;
							}
							dwLoc041C_123 = dwLoc041C_123 + dwLoc0410;
						} while (dwLoc0410 < esi_285 || edi_243 - dwArg08 >=u dwArg0C);
l00404035:
					}
				}
				else
				{
					word32 edx_348 = Mem0[eax_145 + 0x00000000:word32];
					Mem351[fp - 0x00000430:word32] = 0x00000000;
					Mem354[fp - 0x00000434:word32] = fp - 0x00000410;
					ebp_164 = dwArg08;
					if (WriteFile(edx_348, dwArg08, dwArg0C, 0x00000000, 0x00000002) != 0x00000000)
					{
						Mem368[fp - 0x0000041C:word32] = dwLoc0410;
						dwLoc0414_149 = 0x00000000;
					}
					else
						dwLoc0414_149 = GetLastError();
				}
				if (dwLoc041C_123 == 0x00000000)
				{
					eax_171 = dwLoc0414_149;
					if (dwLoc0414_149 == 0x00000000)
						if ((Mem0[esi_110 + 0x00000004 + Mem0[edi_109 + 0x00000000:word32]:byte] & 0x40) != 0x00 && Mem0[ebp_164 + 0x00000000:byte] == 0x1A)
							return 0x00000000;
						else
						{
							Mem212[0x00408914:word32] = 0x0000001C;
l004040C7:
							Mem77[0x00408918:word32] = 0x00000000;
							return eax_171 | 0xFFFFFFFF;
						}
					else if (dwLoc0414_149 == 0x00000005)
					{
						Mem177[0x00408918:word32] = dwLoc0414_149;
						Mem178[0x00408914:word32] = 0x00000009;
						return dwLoc0414_149 | 0xFFFFFFFF;
					}
					else
						return fn004043D0(dwLoc0414_149) | 0xFFFFFFFF;
				}
				else
					return dwLoc041C_123 - dwLoc040C_124;
			}
		}
		else
		{
l004040BD:
			Mem93[0x00408914:word32] = 0x00000009;
			goto l004040C7;
		}
	}
	else
		goto l004040BD;
}

void fn00404140(word32 dwArg04, word32 dwArg08, word32 dwArg0C)
{
	if (dwArg04 <u Mem0[0x00408CE0:word32])
	{
		word32 ebx_59 = (dwArg04 >> 0x00000005) * 0x00000004 + 0x00408BE0;
		word32 esi_60 = (dwArg04 & 0x0000001F) << 0x00000003;
		if ((Mem0[0x00408BE0[(dwArg04 >> 0x00000005) * 0x00000004] + 0x00000004 + esi_60:byte] & 0x01) != 0x00)
		{
			word32 eax_66 = fn00404380(dwArg04);
			if (eax_66 == 0xFFFFFFFF)
			{
				Mem70[0x00408914:word32] = 0x00000009;
				return;
			}
			else
			{
				word32 eax_128;
				if (SetFilePointer(eax_66, dwArg08, 0x00000000, dwArg0C) == 0xFFFFFFFF)
					eax_128 = GetLastError();
				else
					eax_128 = 0x00000000;
				if (eax_128 != 0x00000000)
				{
					fn004043D0(eax_128);
					return;
				}
				else
				{
					word32 eax_114 = Mem0[ebx_59 + 0x00000000:word32];
					Mem120[eax_114 + 0x00000004 + esi_60:byte] = Mem0[eax_114 + 0x00000004 + esi_60:byte] & 0xFD;
					return;
				}
			}
		}
		else
		{
l004041E2:
			Mem42[0x00408914:word32] = 0x00000009;
			Mem43[0x00408918:word32] = 0x00000000;
			return;
		}
	}
	else
		goto l004041E2;
}

void fn00404200(word32 dwArg04)
{
	Mem8[0x00408910:word32] = Mem0[0x00408910:word32] + 0x00000001;
	word32 ecx_9;
	word32 eax_10 = fn00402FB0(0x00001000, out ecx_9);
	Mem17[dwArg04 + 0x00000008:word32] = eax_10;
	word32 eax_18 = Mem17[dwArg04 + 0x0000000C:word32];
	byte al_19 = (byte) eax_18;
	if (eax_10 != 0x00000000)
	{
		word32 edx_25 = Mem17[dwArg04 + 0x00000008:word32];
		Mem30[dwArg04 + 0x0000000C:word32] = DPB(eax_18, al_19 | 0x08, 0, 8);
		Mem31[dwArg04 + 0x00000018:word32] = 0x00001000;
		Mem32[dwArg04 + 0x00000000:word32] = edx_25;
		Mem33[dwArg04 + 0x00000004:word32] = 0x00000000;
		return;
	}
	else
	{
		Mem38[dwArg04 + 0x00000018:word32] = 0x00000002;
		Mem39[dwArg04 + 0x0000000C:word32] = DPB(eax_18, al_19 | 0x04, 0, 8);
		Mem42[dwArg04 + 0x00000008:word32] = dwArg04 + 0x00000014;
		Mem43[dwArg04 + 0x00000000:word32] = dwArg04 + 0x00000014;
		Mem44[dwArg04 + 0x00000004:word32] = 0x00000000;
		return;
	}
}

word32 fn00404380(word32 dwArg04)
{
	word32 eax_22 = dwArg04;
	if (dwArg04 <u Mem0[0x00408CE0:word32])
	{
		word32 edx_31 = 0x00408BE0[(dwArg04 >> 0x00000005) * 0x00000004];
		eax_22 = edx_31 + (dwArg04 & 0x0000001F) * 0x00000008;
		if (((edx_31 + 0x00000004)[(dwArg04 & 0x0000001F) * 0x08] & 0x01) != 0x00)
			return Mem0[eax_22 + 0x00000000:word32];
		else
		{
l004043AC:
			Mem23[0x00408914:word32] = 0x00000009;
			Mem24[0x00408918:word32] = 0x00000000;
			return eax_22 | 0xFFFFFFFF;
		}
	}
	else
		goto l004043AC;
}

word32 fn004043D0(word32 dwArg04)
{
	Mem4[0x00408918:word32] = dwArg04;
	word32 ecx_10 = 0x00000000;
	word32 eax_19 = 0x00408790;
	do
	{
		if (dwArg04 == Mem4[eax_19 + 0x00000000:word32])
		{
			word32 eax_40 = 0x00408794[ecx_10 * 0x00000008];
			Mem41[0x00408914:word32] = eax_40;
			return eax_40;
		}
		eax_19 = eax_19 + 0x00000008;
		ecx_10 = ecx_10 + 0x00000001;
	} while (eax_19 <u 0x004088F8);
	if (dwArg04 >=u 0x00000013 && dwArg04 <=u 0x00000024)
	{
		Mem39[0x00408914:word32] = 0x0000000D;
		return eax_19;
	}
	else
	{
		if (dwArg04 >=u 0x000000BC)
		{
			Mem36[0x00408914:word32] = 0x00000008;
			if (dwArg04 >u 0x000000CA)
			{
l0040441F:
				Mem33[0x00408914:word32] = 0x00000016;
			}
		}
		else
			goto l0040441F;
		return eax_19;
	}
fn004043D0_exit:
}

