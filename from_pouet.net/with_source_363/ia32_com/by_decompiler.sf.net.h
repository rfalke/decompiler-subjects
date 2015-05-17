// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_363/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_112) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (union "Eq_7" (int16 u0) (uint8 u1) (uint16 u2) ((memptr (ptr Eq_112) byte) u3))
	T_7 (in 0x00 : byte)
	T_10 (in Mem3[ds:0x0109:byte] : byte)
	T_11 (in 0x00 : byte)
	T_13 (in Mem5[ds:0x0105:byte] : byte)
	T_16 (in Mem25[ds:0x0109:byte] : byte)
	T_17 (in al_193 : Eq_7)
	T_23 (in al_189 : Eq_7)
	T_25 (in Mem25[ds:0x010B:byte] : byte)
	T_26 (in al_36 + ds->t010B : byte)
	T_28 (in Mem25[ds:0x0105:byte] : byte)
	T_29 (in 0x00 : byte)
	T_32 (in Mem192[ds:0x010B:byte] : byte)
	T_33 (in 0x00 : byte)
	T_37 (in al_44 : Eq_7)
	T_39 (in Mem25[ds:0x010B:byte] : byte)
	T_43 (in cx_15 : Eq_7)
	T_45 (in cx_15 - 0x0001 : word16)
	T_46 (in 0x0000 : word16)
	T_49 (in Mem25[ds:0x0103:byte] : byte)
	T_52 (in Mem18[ds:0x0105:byte] : byte)
	T_57 (in Mem25[ds:0x0103:word16] : word16)
	T_61 (in Mem25[ds:0x0103:byte] : byte)
	T_65 (in Mem25[ds:0x0103:byte] : byte)
	T_67 (in Mem25[ds:0x0105:byte] : byte)
	T_68 (in 0x02 : byte)
	T_70 (in 0x01 : byte)
	T_72 (in Mem50[ds:0x0109:byte] : byte)
	T_74 (in Mem50[ds:0x0105:byte] : byte)
	T_76 (in Mem50[ds:0x0105:byte] + 0x01 : byte)
	T_77 (in Mem52[ds:0x0105:byte] : byte)
	T_79 (in Mem52[ds:0x0105:byte] : byte)
	T_80 (in 0x03 : byte)
	T_82 (in 0x00 : byte)
	T_84 (in Mem18[ds:0x010B:byte] : byte)
	T_85 (in 0x0040 : word16)
	T_99 (in (byte) (cx_55 - 0x0001) : byte)
	T_119 (in bx_116 : Eq_7)
	T_120 (in 0x0000 : word16)
	T_122 (in Mem92[ds:0x0109:word16] : word16)
	T_124 (in Mem92[ds:0x0109:word16] + 0x0001 : word16)
	T_125 (in Mem100[ds:0x0109:word16] : word16)
	T_134 (in Mem102[ds:0x0109:word16] : word16)
	T_135 (in 0x00C8 : word16)
	T_138 (in Mem105[ds:0x0109:word16] : word16)
	T_139 (in 0x0067 : word16)
	T_141 (in Mem106[ds:0x010B:word16] : word16)
	T_145 (in Mem106[ds:0x0109:int16] : int16)
	T_148 (in Mem106[ds:0x010B:word16] : word16)
	T_152 (in 0x0005 : word16)
	T_154 (in Mem110[ds:0x010B:word16] : word16)
	T_156 (in Mem110[ds:0x010B:word16] : word16)
	T_170 (in bx_116 + 0x0001 : word16)
	T_171 (in 0x0140 : word16)
	T_173 (in 0x0028 : word16)
	T_175 (in Mem79[ds:0x010B:word16] : word16)
	T_177 (in Mem80[ds:0x0109:word16] : word16)
	T_180 (in Mem80[ds:0x0109:int16] : int16)
	T_183 (in Mem80[ds:0x010B:word16] : word16)
	T_191 (in (int16) (sin((real64) ds->t0109 / (real64) ds->t010B) * (real64) ds->t010F) : int16)
	T_193 (in Mem85[ds:0x0109:int16] : int16)
	T_195 (in Mem85[ds:0x0109:word16] : word16)
	T_197 (in Mem85[ds:0x0109:word16] + 0x008C : word16)
	T_198 (in Mem87[ds:0x0109:word16] : word16)
	T_200 (in Mem88[ds:0x0103:word16] : word16)
	T_202 (in Mem88[ds:0x0109:word16] : word16)
	T_204 (in Mem90[ds:0x0105:word16] : word16)
	T_205 (in ax_91 : Eq_7)
	T_207 (in Mem90[ds:0x0109:word16] : word16)
	T_208 (in 0x0140 : word16)
	T_210 (in Mem92[ds:0x010B:word16] : word16)
	T_212 (in Mem92[ds:0x010B:word16] : word16)
	T_219 (in 0x002B : word16)
	T_221 (in Mem120[ds:0x0103:word16] : word16)
	T_222 (in 0x0026 : word16)
	T_224 (in Mem121[ds:0x0105:word16] : word16)
	T_230 (in 0x004F : word16)
	T_232 (in Mem123[ds:0x0103:word16] : word16)
	T_233 (in 0x0026 : word16)
	T_235 (in Mem124[ds:0x0105:word16] : word16)
	T_236 (in 0x006C : word16)
	T_238 (in Mem125[ds:0x0109:word16] : word16)
	T_239 (in 0x0026 : word16)
	T_241 (in Mem126[ds:0x010B:word16] : word16)
	T_247 (in 0x004A : word16)
	T_249 (in Mem127[ds:0x0103:word16] : word16)
	T_250 (in 0x0038 : word16)
	T_252 (in Mem128[ds:0x0105:word16] : word16)
	T_253 (in 0x0063 : word16)
	T_255 (in Mem129[ds:0x0109:word16] : word16)
	T_256 (in 0x0047 : word16)
	T_258 (in Mem130[ds:0x010B:word16] : word16)
	T_261 (in 0x003D : word16)
	T_263 (in Mem131[ds:0x0103:word16] : word16)
	T_264 (in 0x0045 : word16)
	T_266 (in Mem132[ds:0x0105:word16] : word16)
	T_267 (in 0x004C : word16)
	T_269 (in Mem133[ds:0x0109:word16] : word16)
	T_270 (in 0x005E : word16)
	T_272 (in Mem134[ds:0x010B:word16] : word16)
	T_275 (in 0x002B : word16)
	T_277 (in Mem135[ds:0x0103:word16] : word16)
	T_278 (in 0x004A : word16)
	T_280 (in Mem136[ds:0x0105:word16] : word16)
	T_281 (in 0x002B : word16)
	T_283 (in Mem137[ds:0x0109:word16] : word16)
	T_284 (in 0x0067 : word16)
	T_286 (in Mem138[ds:0x010B:word16] : word16)
	T_289 (in 0x0019 : word16)
	T_291 (in Mem139[ds:0x0103:word16] : word16)
	T_292 (in 0x0045 : word16)
	T_294 (in Mem140[ds:0x0105:word16] : word16)
	T_295 (in 0x000B : word16)
	T_297 (in Mem141[ds:0x0109:word16] : word16)
	T_298 (in 0x005E : word16)
	T_300 (in Mem142[ds:0x010B:word16] : word16)
	T_303 (in 0x000C : word16)
	T_305 (in Mem143[ds:0x0103:word16] : word16)
	T_306 (in 0x0038 : word16)
	T_308 (in Mem144[ds:0x0105:word16] : word16)
	T_309 (in 0x0000 : word16)
	T_311 (in Mem145[ds:0x0109:word16] : word16)
	T_312 (in 0x003F : word16)
	T_314 (in Mem146[ds:0x010B:word16] : word16)
	T_317 (in 0x0007 : word16)
	T_319 (in Mem147[ds:0x0103:word16] : word16)
	T_320 (in 0x0026 : word16)
	T_322 (in Mem148[ds:0x0105:word16] : word16)
	T_323 (in 0x0000 : word16)
	T_325 (in Mem149[ds:0x0109:word16] : word16)
	T_326 (in 0x0026 : word16)
	T_328 (in Mem150[ds:0x010B:word16] : word16)
	T_331 (in 0x000C : word16)
	T_333 (in Mem151[ds:0x0103:word16] : word16)
	T_334 (in 0x0014 : word16)
	T_336 (in Mem152[ds:0x0105:word16] : word16)
	T_337 (in 0x0000 : word16)
	T_339 (in Mem153[ds:0x0109:word16] : word16)
	T_340 (in 0x000D : word16)
	T_342 (in Mem154[ds:0x010B:word16] : word16)
	T_345 (in 0x0019 : word16)
	T_347 (in Mem155[ds:0x0103:word16] : word16)
	T_348 (in 0x0007 : word16)
	T_350 (in Mem156[ds:0x0105:word16] : word16)
	T_351 (in 0x0015 : word16)
	T_353 (in Mem157[ds:0x0109:word16] : word16)
	T_354 (in 0x0000 : word16)
	T_356 (in Mem158[ds:0x010B:word16] : word16)
	T_359 (in 0x002B : word16)
	T_361 (in Mem159[ds:0x0103:word16] : word16)
	T_362 (in 0x0002 : word16)
	T_364 (in Mem160[ds:0x0105:word16] : word16)
	T_365 (in 0x002B : word16)
	T_367 (in Mem161[ds:0x0109:word16] : word16)
	T_368 (in 0x0000 : word16)
	T_370 (in Mem162[ds:0x010B:word16] : word16)
	T_373 (in 0x003D : word16)
	T_375 (in Mem163[ds:0x0103:word16] : word16)
	T_376 (in 0x0007 : word16)
	T_378 (in Mem164[ds:0x0105:word16] : word16)
	T_379 (in 0x0041 : word16)
	T_381 (in Mem165[ds:0x0109:word16] : word16)
	T_382 (in 0x0000 : word16)
	T_384 (in Mem166[ds:0x010B:word16] : word16)
	T_387 (in 0x004A : word16)
	T_389 (in Mem167[ds:0x0103:word16] : word16)
	T_390 (in 0x0014 : word16)
	T_392 (in Mem168[ds:0x0105:word16] : word16)
	T_393 (in 0x0063 : word16)
	T_395 (in Mem169[ds:0x0109:word16] : word16)
	T_396 (in 0x0007 : word16)
	T_398 (in Mem170[ds:0x010B:word16] : word16)
	T_407 (in 0x0027 : word16)
	T_409 (in Mem173[ds:0x0105:word16] : word16)
	T_410 (in 0x002B : word16)
	T_412 (in Mem174[ds:0x0103:word16] : word16)
	T_418 (in 0x0020 : word16)
	T_420 (in Mem176[ds:0x0103:word16] : word16)
	T_421 (in 0x001E : word16)
	T_423 (in Mem177[ds:0x0105:word16] : word16)
	T_429 (in 0x0036 : word16)
	T_431 (in Mem179[ds:0x0103:word16] : word16)
	T_437 (in 0x0020 : word16)
	T_439 (in Mem181[ds:0x0103:word16] : word16)
	T_440 (in 0x0000 : word16)
	T_442 (in Mem183[ds:0x0109:word16] : word16)
	T_443 (in 0x0007 : word16)
	T_445 (in Mem184[ds:0x010B:word16] : word16)
	T_446 (in 0x0005 : word16)
	T_448 (in Mem185[ds:0x0105:word16] : word16)
	T_451 (in Mem185[ds:0x0109:int16] : int16)
	T_454 (in Mem185[ds:0x010B:word16] : word16)
	T_466 (in 0x00C8 : word16)
	T_468 (in Mem11[ds:0x0111:word16] : word16)
	T_473 (in cx_29 : Eq_7)
	T_475 (in cx_29 - 0x0001 : word16)
	T_476 (in 0x0000 : word16)
	T_484 (in Mem34[ds:0x0109:word16] : word16)
	T_486 (in Mem34[ds:0x0111:word16] : word16)
	T_488 (in Mem36[ds:0x010B:word16] : word16)
	T_491 (in Mem36[ds:0x0103:int16] : int16)
	T_494 (in Mem36[ds:0x0109:word16] : word16)
	T_499 (in Mem36[ds:0x0105:int16] : int16)
	T_502 (in Mem36[ds:0x010B:word16] : word16)
	T_514 (in Mem36[ds:0x0111:word16] : word16)
	T_516 (in ds->t0111 - 0x0001 : word16)
	T_517 (in Mem53[ds:0x0111:word16] : word16)
	T_519 (in Mem53[ds:0x0111:word16] : word16)
	T_520 (in 0x0000 : word16)
	T_522 (in 0x0140 : word16)
	T_523 (in 0x0000 : word16)
	T_525 (in Mem2[ds:0x0111:word16] : word16)
	T_528 (in Mem2[ds:0x0103:word16] : word16)
	T_530 (in Mem2[ds:0x0109:word16] : word16)
	T_537 (in Mem2[ds:0x0105:word16] : word16)
	T_539 (in Mem2[ds:0x010B:word16] : word16)
	T_546 (in Mem2[ds:0x0103:word16] : word16)
	T_548 (in Mem2[ds:0x0109:word16] : word16)
	T_551 (in Mem2[ds:0x0111:word16] : word16)
	T_553 (in Mem2[ds:0x0111:word16] + 0x0001 : word16)
	T_554 (in Mem150[ds:0x0111:word16] : word16)
	T_555 (in ax_155 : Eq_7)
	T_557 (in Mem150[ds:0x0105:word16] : word16)
	T_559 (in Mem150[ds:0x0103:word16] : word16)
	T_561 (in Mem156[ds:0x0105:word16] : word16)
	T_563 (in Mem158[ds:0x0103:word16] : word16)
	T_564 (in ax_162 : Eq_7)
	T_566 (in Mem158[ds:0x010B:word16] : word16)
	T_568 (in Mem158[ds:0x0109:word16] : word16)
	T_570 (in Mem163[ds:0x010B:word16] : word16)
	T_572 (in Mem165[ds:0x0109:word16] : word16)
	T_575 (in Mem2[ds:0x0109:word16] : word16)
	T_577 (in Mem2[ds:0x0103:word16] : word16)
	T_581 (in Mem2[ds:0x010B:word16] : word16)
	T_583 (in Mem2[ds:0x0105:word16] : word16)
	T_585 (in ax_138 : Eq_7)
	T_587 (in Mem2[ds:0x0109:word16] : word16)
	T_589 (in Mem2[ds:0x0103:word16] : word16)
	T_591 (in Mem139[ds:0x0109:word16] : word16)
	T_593 (in Mem141[ds:0x0103:word16] : word16)
	T_594 (in ax_145 : Eq_7)
	T_596 (in Mem141[ds:0x010B:word16] : word16)
	T_598 (in Mem141[ds:0x0105:word16] : word16)
	T_600 (in Mem146[ds:0x010B:word16] : word16)
	T_602 (in Mem148[ds:0x0105:word16] : word16)
	T_622 (in Mem68[ds:0x0105:word16] : word16)
	T_624 (in Mem68[ds:0x010B:word16] : word16)
	T_626 (in 0xFFFF : word16)
	T_628 (in Mem134[ds:0x010B:word16] : word16)
	T_629 (in 0x0001 : word16)
	T_631 (in Mem133[ds:0x010B:word16] : word16)
	T_632 (in bx_114 : Eq_7)
	T_634 (in Mem68[ds:0x0103:word16] : word16)
	T_636 (in Mem68[ds:0x0105:word16] : word16)
	T_637 (in di_123 : Eq_7)
	T_638 (in ax_125 : Eq_7)
	T_640 (in Mem68[ds:0x0105:word16] : word16)
	T_660 (in bx_114 + 0x0001 : word16)
	T_662 (in Mem110[ds:0x0109:word16] : word16)
	T_665 (in Mem110[ds:0x0105:word16] : word16)
	T_667 (in Mem110[ds:0x010B:word16] : word16)
	T_668 (in Mem110[ds:0x0105:word16] + Mem110[ds:0x010B:word16] : word16)
	T_669 (in Mem119[ds:0x0105:word16] : word16)
	T_675 (in Mem68[ds:0x0111:word16] : word16)
	T_676 (in 0x0001 : word16)
Eq_8: (segment "Eq_8" (103 Eq_7 t0103) (105 Eq_7 t0105) (107 int16 w0107) (109 Eq_7 t0109) (10B Eq_7 t010B) (10F Eq_188 t010F) (111 Eq_7 t0111) (113 byte b0113) (114 real32 r0114) (118 Eq_463 t0118))
	T_8 (in ds : (ptr Eq_8))
	T_113 (in ds : (ptr Eq_8))
	T_245 (in ds : (ptr Eq_8))
Eq_20: (fn void (word16, byte))
	T_20 (in __outb : ptr32)
Eq_34: (fn void (word16, Eq_7))
	T_34 (in __outb : ptr32)
Eq_40: (fn void (word16, Eq_7))
	T_40 (in __outb : ptr32)
Eq_58: (fn void (word16, byte))
	T_58 (in __outb : ptr32)
Eq_88: (fn void (word16, byte))
	T_88 (in __outb : ptr32)
Eq_93: (fn void (word16, byte))
	T_93 (in __outb : ptr32)
Eq_100: (fn void (word16, Eq_7))
	T_100 (in __outb : ptr32)
Eq_103: (fn void (word16, Eq_7))
	T_103 (in __outb : ptr32)
Eq_110: (fn void ((ptr Eq_112), (ptr Eq_8)))
	T_110 (in fn0C00_0D73 : ptr32)
	T_111 (in signature of fn0C00_0D73 : void)
	T_167 (in fn0C00_0D73 : ptr32)
	T_228 (in fn0C00_0D73 : ptr32)
	T_413 (in fn0C00_0D73 : ptr32)
	T_424 (in fn0C00_0D73 : ptr32)
	T_432 (in fn0C00_0D73 : ptr32)
Eq_112: (segment "Eq_112" (FFFFF9FF byte bFFFFF9FF) (F9FF byte bF9FF))
	T_112 (in es : (ptr Eq_112))
	T_114 (in 0xA000 : selector)
	T_244 (in es : (ptr Eq_112))
Eq_126: (struct "Eq_126" 0140 (0 byte b0000))
	T_126 (in di_101 : (memptr (ptr Eq_112) Eq_126))
	T_128 (in di_101 + 0x0140 : word16)
	T_215 (in (word16) (ds->t010B *u ax_91) + bx_116 : word16)
Eq_142: (union "Eq_142" (real16 u0) (real64 u1))
	T_142 (in rLoc1_109 : Eq_142)
	T_151 (in sin((real64) ds->t0109 / (real64) ds->t010B) : real64)
Eq_143: (fn Eq_142 (real16))
	T_143 (in sin : ptr32)
Eq_146: (union "Eq_146" (real16 u0) (real64 u1))
	T_146 (in (real64) ds->t0109 : real64)
Eq_149: (union "Eq_149" (real16 u0) (real64 u1))
	T_149 (in (real64) ds->t010B : real64)
Eq_157: (union "Eq_157" (real16 u0) (real64 u1))
	T_157 (in (real64) ds->t010B : real64)
Eq_178: (fn Eq_186 (real16))
	T_178 (in sin : ptr32)
Eq_181: (union "Eq_181" (real16 u0) (real64 u1))
	T_181 (in (real64) ds->t0109 : real64)
Eq_184: (union "Eq_184" (real16 u0) (real64 u1))
	T_184 (in (real64) ds->t010B : real64)
Eq_186: (union "Eq_186" (real16 u0) (real64 u1))
	T_186 (in sin((real64) ds->t0109 / (real64) ds->t010B) : real64)
Eq_188: (union "Eq_188" (int8 u0) (uint8 u1) (word16 u2))
	T_188 (in Mem80[ds:0x010F:word16] : word16)
	T_606 (in 0x02 : byte)
	T_608 (in Mem62[ds:0x010F:byte] : byte)
	T_612 (in Mem62[ds:0x010F:byte] : byte)
	T_615 (in Mem62[ds:0x010F:byte] : byte)
	T_617 (in (byte) (SEQ(dx_102, ax_41) /u ds->t010F) : byte)
	T_619 (in Mem68[ds:0x010F:byte] : byte)
	T_649 (in Mem100[ds:0x010F:byte] : byte)
	T_651 (in ds->t010F - (byte) dx_102 : byte)
	T_652 (in Mem110[ds:0x010F:byte] : byte)
	T_656 (in Mem110[ds:0x010F:byte] : byte)
	T_657 (in 0x00 : byte)
	T_671 (in Mem119[ds:0x010F:byte] : byte)
	T_672 (in Mem119[ds:0x010F:byte] + al_107 : byte)
	T_673 (in Mem121[ds:0x010F:byte] : byte)
Eq_189: (union "Eq_189" (real16 u0) (real64 u1))
	T_189 (in (real64) ds->t010F : real64)
Eq_242: (fn void ((ptr Eq_112), (ptr Eq_8)))
	T_242 (in fn0C00_0DCF : ptr32)
	T_243 (in signature of fn0C00_0DCF : void)
	T_259 (in fn0C00_0DCF : ptr32)
	T_273 (in fn0C00_0DCF : ptr32)
	T_287 (in fn0C00_0DCF : ptr32)
	T_301 (in fn0C00_0DCF : ptr32)
	T_315 (in fn0C00_0DCF : ptr32)
	T_329 (in fn0C00_0DCF : ptr32)
	T_343 (in fn0C00_0DCF : ptr32)
	T_357 (in fn0C00_0DCF : ptr32)
	T_371 (in fn0C00_0DCF : ptr32)
	T_385 (in fn0C00_0DCF : ptr32)
	T_399 (in fn0C00_0DCF : ptr32)
Eq_449: (fn real64 (real16))
	T_449 (in sin : ptr32)
Eq_452: (union "Eq_452" (real16 u0) (real64 u1))
	T_452 (in (real64) ds->t0109 : real64)
Eq_455: (union "Eq_455" (real16 u0) (real64 u1))
	T_455 (in (real64) ds->t010B : real64)
Eq_463: (union "Eq_463" (32 u0) (64 u1) (real32 u2) (real64 u3) (word16 u4))
	T_463 (in (real64) ds->w0107 - ds->r0114 : word16)
	T_465 (in Mem9[ds:0x0118:real32] : real32)
	T_509 (in sqrt(rLoc1_38 * rLoc1_38 + rLoc2_41 * rLoc2_41) : real64)
	T_511 (in Mem36[ds:0x0118:real32] : real32)
Eq_489: (union "Eq_489" (real16 u0) (real64 u1))
	T_489 (in rLoc1_38 : Eq_489)
	T_496 (in (real64) ds->t0103 - (real64) ds->t0109 : word16)
Eq_492: (union "Eq_492" (real16 u0) (real64 u1))
	T_492 (in (real64) ds->t0103 : real64)
Eq_495: (union "Eq_495" (real16 u0) (real64 u1))
	T_495 (in (real64) ds->t0109 : real64)
Eq_497: (union "Eq_497" (real16 u0) (real64 u1))
	T_497 (in rLoc2_41 : Eq_497)
	T_504 (in (real64) ds->t0105 - (real64) ds->t010B : word16)
Eq_500: (union "Eq_500" (real16 u0) (real64 u1))
	T_500 (in (real64) ds->t0105 : real64)
Eq_503: (union "Eq_503" (real16 u0) (real64 u1))
	T_503 (in (real64) ds->t010B : real64)
Eq_505: (fn Eq_463 (real64))
	T_505 (in sqrt : ptr32)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_6 (T_5)))
T_3: (in signature of bios_video_set_mode : void)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: 
T_4: (in al : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_5: (in 0x13 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_6: (in bios_video_set_mode(0x13) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_7: (in 0x00 : byte)
  Class: Eq_7
  DataType: int16
  OrigDataType: byte
T_8: (in ds : (ptr Eq_8))
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment (103 T_7 t0103) (105 T_7 t0105) (107 T_159 t0107) (109 T_7 t0109) (10B T_7 t010B) (10F T_188 t010F) (113 T_116 t0113)))
T_9: (in 0x0109 : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_10 t0000)))
T_10: (in Mem3[ds:0x0109:byte] : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_11: (in 0x00 : byte)
  Class: Eq_7
  DataType: int16
  OrigDataType: byte
T_12: (in 0x0105 : word16)
  Class: Eq_12
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_13 t0000)))
T_13: (in Mem5[ds:0x0105:byte] : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_14: (in al_36 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_15: (in 0x0109 : word16)
  Class: Eq_15
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_16 t0000)))
T_16: (in Mem25[ds:0x0109:byte] : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: uint8
T_17: (in al_193 : Eq_7)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: uint8
T_18: (in ds->t0109 *u al_193 : uint16)
  Class: Eq_18
  DataType: uint16
  OrigDataType: uint16
T_19: (in (byte) (ds->t0109 *u al_193) : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_20: (in __outb : ptr32)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (fn T_22 (T_21, T_14)))
T_21: (in 0x03C9 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in __outb(0x03C9, al_36) : void)
  Class: Eq_22
  DataType: void
  OrigDataType: void
T_23: (in al_189 : Eq_7)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_24: (in 0x010B : word16)
  Class: Eq_24
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_25 t0000)))
T_25: (in Mem25[ds:0x010B:byte] : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_26: (in al_36 + ds->t010B : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_27: (in 0x0105 : word16)
  Class: Eq_27
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_28 t0000)))
T_28: (in Mem25[ds:0x0105:byte] : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_29: (in 0x00 : byte)
  Class: Eq_7
  DataType: int16
  OrigDataType: byte
T_30: (in ds->t0105 != 0x00 : bool)
  Class: Eq_30
  DataType: bool
  OrigDataType: bool
T_31: (in 0x010B : word16)
  Class: Eq_31
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_32 t0000)))
T_32: (in Mem192[ds:0x010B:byte] : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_33: (in 0x00 : byte)
  Class: Eq_7
  DataType: int16
  OrigDataType: byte
T_34: (in __outb : ptr32)
  Class: Eq_34
  DataType: (ptr Eq_34)
  OrigDataType: (ptr (fn T_36 (T_35, T_23)))
T_35: (in 0x03C9 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in __outb(0x03C9, al_189) : void)
  Class: Eq_36
  DataType: void
  OrigDataType: void
T_37: (in al_44 : Eq_7)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_38: (in 0x010B : word16)
  Class: Eq_38
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_39 t0000)))
T_39: (in Mem25[ds:0x010B:byte] : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_40: (in __outb : ptr32)
  Class: Eq_40
  DataType: (ptr Eq_40)
  OrigDataType: (ptr (fn T_42 (T_41, T_37)))
T_41: (in 0x03C9 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in __outb(0x03C9, al_44) : void)
  Class: Eq_42
  DataType: void
  OrigDataType: void
T_43: (in cx_15 : Eq_7)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_44: (in 0x0001 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in cx_15 - 0x0001 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_46: (in 0x0000 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_47: (in cx_15 != 0x0000 : bool)
  Class: Eq_47
  DataType: bool
  OrigDataType: bool
T_48: (in 0x0103 : word16)
  Class: Eq_48
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_49 t0000)))
T_49: (in Mem25[ds:0x0103:byte] : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_50: (in al_24 : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_51: (in 0x0105 : word16)
  Class: Eq_51
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_52 t0000)))
T_52: (in Mem18[ds:0x0105:byte] : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: uint8
T_53: (in 0x40 : byte)
  Class: Eq_53
  DataType: uint8
  OrigDataType: uint8
T_54: (in ds->t0105 *u 0x40 : uint16)
  Class: Eq_54
  DataType: uint16
  OrigDataType: uint16
T_55: (in (byte) (ds->t0105 *u 0x40) : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_56: (in 0x0103 : word16)
  Class: Eq_56
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_57 t0000)))
T_57: (in Mem25[ds:0x0103:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_58: (in __outb : ptr32)
  Class: Eq_58
  DataType: (ptr Eq_58)
  OrigDataType: (ptr (fn T_63 (T_59, T_62)))
T_59: (in 0x03C8 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in 0x0103 : word16)
  Class: Eq_60
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_61 t0000)))
T_61: (in Mem25[ds:0x0103:byte] : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_62: (in al_24 + ds->t0103 : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_63: (in __outb(0x03C8, al_24 + ds->t0103) : void)
  Class: Eq_63
  DataType: void
  OrigDataType: void
T_64: (in 0x0103 : word16)
  Class: Eq_64
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_65 t0000)))
T_65: (in Mem25[ds:0x0103:byte] : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_66: (in 0x0105 : word16)
  Class: Eq_66
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_67 t0000)))
T_67: (in Mem25[ds:0x0105:byte] : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_68: (in 0x02 : byte)
  Class: Eq_7
  DataType: int16
  OrigDataType: byte
T_69: (in ds->t0105 != 0x02 : bool)
  Class: Eq_69
  DataType: bool
  OrigDataType: bool
T_70: (in 0x01 : byte)
  Class: Eq_7
  DataType: int16
  OrigDataType: byte
T_71: (in 0x0109 : word16)
  Class: Eq_71
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_72 t0000)))
T_72: (in Mem50[ds:0x0109:byte] : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_73: (in 0x0105 : word16)
  Class: Eq_73
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_11 t0000)))
T_74: (in Mem50[ds:0x0105:byte] : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_75: (in 0x01 : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_76: (in Mem50[ds:0x0105:byte] + 0x01 : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_77: (in Mem52[ds:0x0105:byte] : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_78: (in 0x0105 : word16)
  Class: Eq_78
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_79 t0000)))
T_79: (in Mem52[ds:0x0105:byte] : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_80: (in 0x03 : byte)
  Class: Eq_7
  DataType: int16
  OrigDataType: byte
T_81: (in ds->t0105 != 0x03 : bool)
  Class: Eq_81
  DataType: bool
  OrigDataType: bool
T_82: (in 0x00 : byte)
  Class: Eq_7
  DataType: int16
  OrigDataType: byte
T_83: (in 0x010B : word16)
  Class: Eq_83
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_84 t0000)))
T_84: (in Mem18[ds:0x010B:byte] : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_85: (in 0x0040 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_86: (in cx_55 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in 0x0040 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_88: (in __outb : ptr32)
  Class: Eq_88
  DataType: (ptr Eq_88)
  OrigDataType: (ptr (fn T_92 (T_89, T_91)))
T_89: (in 0x03C8 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in 0xBF : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_91: (in al_44 + 0xBF : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_92: (in __outb(0x03C8, al_44 + 0xBF) : void)
  Class: Eq_92
  DataType: void
  OrigDataType: void
T_93: (in __outb : ptr32)
  Class: Eq_93
  DataType: (ptr Eq_93)
  OrigDataType: (ptr (fn T_96 (T_94, T_95)))
T_94: (in 0x03C9 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in 0x3F : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
T_96: (in __outb(0x03C9, 0x3F) : void)
  Class: Eq_96
  DataType: void
  OrigDataType: void
T_97: (in 0x0001 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in cx_55 - 0x0001 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in (byte) (cx_55 - 0x0001) : byte)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: byte
T_100: (in __outb : ptr32)
  Class: Eq_100
  DataType: (ptr Eq_100)
  OrigDataType: (ptr (fn T_102 (T_101, T_37)))
T_101: (in 0x03C9 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in __outb(0x03C9, al_44) : void)
  Class: Eq_102
  DataType: void
  OrigDataType: void
T_103: (in __outb : ptr32)
  Class: Eq_103
  DataType: (ptr Eq_103)
  OrigDataType: (ptr (fn T_105 (T_104, T_37)))
T_104: (in 0x03C9 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in __outb(0x03C9, al_44) : void)
  Class: Eq_105
  DataType: void
  OrigDataType: void
T_106: (in 0x0001 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in cx_55 - 0x0001 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_108: (in 0x0000 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_109: (in cx_55 != 0x0000 : bool)
  Class: Eq_109
  DataType: bool
  OrigDataType: bool
T_110: (in fn0C00_0D73 : ptr32)
  Class: Eq_110
  DataType: (ptr Eq_110)
  OrigDataType: (ptr (fn T_115 (T_114, T_8)))
T_111: (in signature of fn0C00_0D73 : void)
  Class: Eq_110
  DataType: (ptr Eq_110)
  OrigDataType: 
T_112: (in es : (ptr Eq_112))
  Class: Eq_112
  DataType: (ptr Eq_112)
  OrigDataType: (ptr (segment))
T_113: (in ds : (ptr Eq_8))
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment (103 T_491 t0103) (105 T_499 t0105) (107 T_459 t0107) (109 T_473 t0109) (10B T_466 t010B) (111 T_466 t0111) (113 T_479 t0113) (114 real32 r0114) (118 T_463 t0118)))
T_114: (in 0xA000 : selector)
  Class: Eq_112
  DataType: (ptr Eq_112)
  OrigDataType: (ptr (segment))
T_115: (in fn0C00_0D73(0xA000, ds) : void)
  Class: Eq_115
  DataType: void
  OrigDataType: void
T_116: (in 0x26 : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_117: (in 0x0113 : word16)
  Class: Eq_117
  DataType: (memptr (ptr Eq_8) byte)
  OrigDataType: (memptr T_8 (struct (0 T_118 t0000)))
T_118: (in Mem73[ds:0x0113:byte] : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_119: (in bx_116 : Eq_7)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_120: (in 0x0000 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_121: (in 0x0109 : word16)
  Class: Eq_121
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_7 t0000)))
T_122: (in Mem92[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_123: (in 0x0001 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in Mem92[ds:0x0109:word16] + 0x0001 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_125: (in Mem100[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_126: (in di_101 : (memptr (ptr Eq_112) Eq_126))
  Class: Eq_126
  DataType: (memptr (ptr Eq_112) Eq_126)
  OrigDataType: (memptr T_114 (struct 0140 (0 T_132 t0000)))
T_127: (in 0x0140 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in di_101 + 0x0140 : word16)
  Class: Eq_126
  DataType: (memptr (ptr Eq_112) Eq_126)
  OrigDataType: word16
T_129: (in 0x1E : byte)
  Class: Eq_129
  DataType: byte
  OrigDataType: byte
T_130: (in 0x0000 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in di_101 + 0x0000 : word16)
  Class: Eq_131
  DataType: word16
  OrigDataType: word16
T_132: (in Mem102[0xA000:di_101 + 0x0000:byte] : byte)
  Class: Eq_129
  DataType: byte
  OrigDataType: byte
T_133: (in 0x0109 : word16)
  Class: Eq_133
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_134 t0000)))
T_134: (in Mem102[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_135: (in 0x00C8 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_136: (in ds->t0109 <= 0x00C8 : bool)
  Class: Eq_136
  DataType: bool
  OrigDataType: bool
T_137: (in 0x0109 : word16)
  Class: Eq_137
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_138 t0000)))
T_138: (in Mem105[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_139: (in 0x0067 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_140: (in 0x010B : word16)
  Class: Eq_140
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_141 t0000)))
T_141: (in Mem106[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_142: (in rLoc1_109 : Eq_142)
  Class: Eq_142
  DataType: Eq_142
  OrigDataType: (union (real16 u0) (real64 u1))
T_143: (in sin : ptr32)
  Class: Eq_143
  DataType: (ptr Eq_143)
  OrigDataType: (ptr (fn T_151 (T_150)))
T_144: (in 0x0109 : word16)
  Class: Eq_144
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_145 t0000)))
T_145: (in Mem106[ds:0x0109:int16] : int16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_146: (in (real64) ds->t0109 : real64)
  Class: Eq_146
  DataType: Eq_146
  OrigDataType: (union (real16 u0) (real64 u1))
T_147: (in 0x010B : word16)
  Class: Eq_147
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_148 t0000)))
T_148: (in Mem106[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_149: (in (real64) ds->t010B : real64)
  Class: Eq_149
  DataType: Eq_149
  OrigDataType: (union (real16 u0) (real64 u1))
T_150: (in (real64) ds->t0109 / (real64) ds->t010B : word16)
  Class: Eq_150
  DataType: real16
  OrigDataType: real16
T_151: (in sin((real64) ds->t0109 / (real64) ds->t010B) : real64)
  Class: Eq_142
  DataType: Eq_142
  OrigDataType: real64
T_152: (in 0x0005 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_153: (in 0x010B : word16)
  Class: Eq_153
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_154 t0000)))
T_154: (in Mem110[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_155: (in 0x010B : word16)
  Class: Eq_155
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_156 t0000)))
T_156: (in Mem110[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_157: (in (real64) ds->t010B : real64)
  Class: Eq_157
  DataType: Eq_157
  OrigDataType: (union (real16 u0) (real64 u1))
T_158: (in rLoc1_109 * (real64) ds->t010B : word16)
  Class: Eq_158
  DataType: real16
  OrigDataType: real16
T_159: (in (int16) (rLoc1_109 * (real64) ds->t010B) : int16)
  Class: Eq_159
  DataType: int16
  OrigDataType: int16
T_160: (in 0x0107 : word16)
  Class: Eq_160
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_8 (struct (0 T_161 t0000)))
T_161: (in Mem112[ds:0x0107:int16] : int16)
  Class: Eq_159
  DataType: int16
  OrigDataType: int16
T_162: (in 0x0107 : word16)
  Class: Eq_162
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_8 (struct (0 T_159 t0000)))
T_163: (in Mem112[ds:0x0107:word16] : word16)
  Class: Eq_159
  DataType: int16
  OrigDataType: word16
T_164: (in 0x0006 : word16)
  Class: Eq_164
  DataType: word16
  OrigDataType: word16
T_165: (in ds->w0107 + 0x0006 : word16)
  Class: Eq_159
  DataType: int16
  OrigDataType: word16
T_166: (in Mem114[ds:0x0107:word16] : word16)
  Class: Eq_159
  DataType: int16
  OrigDataType: word16
T_167: (in fn0C00_0D73 : ptr32)
  Class: Eq_110
  DataType: (ptr Eq_110)
  OrigDataType: (ptr (fn T_168 (T_114, T_8)))
T_168: (in fn0C00_0D73(0xA000, ds) : void)
  Class: Eq_115
  DataType: void
  OrigDataType: void
T_169: (in 0x0001 : word16)
  Class: Eq_169
  DataType: word16
  OrigDataType: word16
T_170: (in bx_116 + 0x0001 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_171: (in 0x0140 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: int16
T_172: (in bx_116 < 0x0140 : bool)
  Class: Eq_172
  DataType: bool
  OrigDataType: bool
T_173: (in 0x0028 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_174: (in 0x010B : word16)
  Class: Eq_174
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_175 t0000)))
T_175: (in Mem79[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_176: (in 0x0109 : word16)
  Class: Eq_176
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_177 t0000)))
T_177: (in Mem80[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_178: (in sin : ptr32)
  Class: Eq_178
  DataType: (ptr Eq_178)
  OrigDataType: (ptr (fn T_186 (T_185)))
T_179: (in 0x0109 : word16)
  Class: Eq_179
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_180 t0000)))
T_180: (in Mem80[ds:0x0109:int16] : int16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_181: (in (real64) ds->t0109 : real64)
  Class: Eq_181
  DataType: Eq_181
  OrigDataType: (union (real16 u0) (real64 u1))
T_182: (in 0x010B : word16)
  Class: Eq_182
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_183 t0000)))
T_183: (in Mem80[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_184: (in (real64) ds->t010B : real64)
  Class: Eq_184
  DataType: Eq_184
  OrigDataType: (union (real16 u0) (real64 u1))
T_185: (in (real64) ds->t0109 / (real64) ds->t010B : word16)
  Class: Eq_185
  DataType: real16
  OrigDataType: real16
T_186: (in sin((real64) ds->t0109 / (real64) ds->t010B) : real64)
  Class: Eq_186
  DataType: Eq_186
  OrigDataType: (union (real16 u0) (real64 u1))
T_187: (in 0x010F : word16)
  Class: Eq_187
  DataType: (memptr (ptr Eq_8) Eq_188)
  OrigDataType: (memptr T_8 (struct (0 T_188 t0000)))
T_188: (in Mem80[ds:0x010F:word16] : word16)
  Class: Eq_188
  DataType: Eq_188
  OrigDataType: word16
T_189: (in (real64) ds->t010F : real64)
  Class: Eq_189
  DataType: Eq_189
  OrigDataType: (union (real16 u0) (real64 u1))
T_190: (in sin((real64) ds->t0109 / (real64) ds->t010B) * (real64) ds->t010F : word16)
  Class: Eq_190
  DataType: real16
  OrigDataType: real16
T_191: (in (int16) (sin((real64) ds->t0109 / (real64) ds->t010B) * (real64) ds->t010F) : int16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_192: (in 0x0109 : word16)
  Class: Eq_192
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_193 t0000)))
T_193: (in Mem85[ds:0x0109:int16] : int16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_194: (in 0x0109 : word16)
  Class: Eq_194
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_7 t0000)))
T_195: (in Mem85[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_196: (in 0x008C : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_197: (in Mem85[ds:0x0109:word16] + 0x008C : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_198: (in Mem87[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_199: (in 0x0103 : word16)
  Class: Eq_199
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_200 t0000)))
T_200: (in Mem88[ds:0x0103:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_201: (in 0x0109 : word16)
  Class: Eq_201
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_202 t0000)))
T_202: (in Mem88[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_203: (in 0x0105 : word16)
  Class: Eq_203
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_204 t0000)))
T_204: (in Mem90[ds:0x0105:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_205: (in ax_91 : Eq_7)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: uint16
T_206: (in 0x0109 : word16)
  Class: Eq_206
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_207 t0000)))
T_207: (in Mem90[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_208: (in 0x0140 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_209: (in 0x010B : word16)
  Class: Eq_209
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_210 t0000)))
T_210: (in Mem92[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_211: (in 0x010B : word16)
  Class: Eq_211
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_212 t0000)))
T_212: (in Mem92[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: uint16
T_213: (in ds->t010B *u ax_91 : uint32)
  Class: Eq_213
  DataType: uint32
  OrigDataType: uint32
T_214: (in (word16) (ds->t010B *u ax_91) : word16)
  Class: Eq_214
  DataType: word16
  OrigDataType: word16
T_215: (in (word16) (ds->t010B *u ax_91) + bx_116 : word16)
  Class: Eq_126
  DataType: (memptr (ptr Eq_112) Eq_126)
  OrigDataType: word16
T_216: (in 0x7F : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_217: (in 0x0113 : word16)
  Class: Eq_217
  DataType: (memptr (ptr Eq_8) byte)
  OrigDataType: (memptr T_8 (struct (0 T_218 t0000)))
T_218: (in Mem119[ds:0x0113:byte] : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_219: (in 0x002B : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_220: (in 0x0103 : word16)
  Class: Eq_220
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_221 t0000)))
T_221: (in Mem120[ds:0x0103:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_222: (in 0x0026 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_223: (in 0x0105 : word16)
  Class: Eq_223
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_224 t0000)))
T_224: (in Mem121[ds:0x0105:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_225: (in 0x001E : word16)
  Class: Eq_159
  DataType: int16
  OrigDataType: word16
T_226: (in 0x0107 : word16)
  Class: Eq_226
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_8 (struct (0 T_227 t0000)))
T_227: (in Mem122[ds:0x0107:word16] : word16)
  Class: Eq_159
  DataType: int16
  OrigDataType: word16
T_228: (in fn0C00_0D73 : ptr32)
  Class: Eq_110
  DataType: (ptr Eq_110)
  OrigDataType: (ptr (fn T_229 (T_114, T_8)))
T_229: (in fn0C00_0D73(0xA000, ds) : void)
  Class: Eq_115
  DataType: void
  OrigDataType: void
T_230: (in 0x004F : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_231: (in 0x0103 : word16)
  Class: Eq_231
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_232 t0000)))
T_232: (in Mem123[ds:0x0103:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_233: (in 0x0026 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_234: (in 0x0105 : word16)
  Class: Eq_234
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_235 t0000)))
T_235: (in Mem124[ds:0x0105:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_236: (in 0x006C : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_237: (in 0x0109 : word16)
  Class: Eq_237
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_238 t0000)))
T_238: (in Mem125[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_239: (in 0x0026 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_240: (in 0x010B : word16)
  Class: Eq_240
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_241 t0000)))
T_241: (in Mem126[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_242: (in fn0C00_0DCF : ptr32)
  Class: Eq_242
  DataType: (ptr Eq_242)
  OrigDataType: (ptr (fn T_246 (T_114, T_8)))
T_243: (in signature of fn0C00_0DCF : void)
  Class: Eq_242
  DataType: (ptr Eq_242)
  OrigDataType: 
T_244: (in es : (ptr Eq_112))
  Class: Eq_112
  DataType: (ptr Eq_112)
  OrigDataType: (ptr (segment))
T_245: (in ds : (ptr Eq_8))
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (segment (103 T_528 t0103) (105 T_528 t0105) (109 T_528 t0109) (10B T_528 t010B) (10F T_606 t010F) (111 T_523 t0111) (113 T_642 t0113)))
T_246: (in fn0C00_0DCF(0xA000, ds) : void)
  Class: Eq_246
  DataType: void
  OrigDataType: void
T_247: (in 0x004A : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_248: (in 0x0103 : word16)
  Class: Eq_248
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_249 t0000)))
T_249: (in Mem127[ds:0x0103:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_250: (in 0x0038 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_251: (in 0x0105 : word16)
  Class: Eq_251
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_252 t0000)))
T_252: (in Mem128[ds:0x0105:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_253: (in 0x0063 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_254: (in 0x0109 : word16)
  Class: Eq_254
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_255 t0000)))
T_255: (in Mem129[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_256: (in 0x0047 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_257: (in 0x010B : word16)
  Class: Eq_257
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_258 t0000)))
T_258: (in Mem130[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_259: (in fn0C00_0DCF : ptr32)
  Class: Eq_242
  DataType: (ptr Eq_242)
  OrigDataType: (ptr (fn T_260 (T_114, T_8)))
T_260: (in fn0C00_0DCF(0xA000, ds) : void)
  Class: Eq_246
  DataType: void
  OrigDataType: void
T_261: (in 0x003D : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_262: (in 0x0103 : word16)
  Class: Eq_262
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_263 t0000)))
T_263: (in Mem131[ds:0x0103:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_264: (in 0x0045 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_265: (in 0x0105 : word16)
  Class: Eq_265
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_266 t0000)))
T_266: (in Mem132[ds:0x0105:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_267: (in 0x004C : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_268: (in 0x0109 : word16)
  Class: Eq_268
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_269 t0000)))
T_269: (in Mem133[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_270: (in 0x005E : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_271: (in 0x010B : word16)
  Class: Eq_271
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_272 t0000)))
T_272: (in Mem134[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_273: (in fn0C00_0DCF : ptr32)
  Class: Eq_242
  DataType: (ptr Eq_242)
  OrigDataType: (ptr (fn T_274 (T_114, T_8)))
T_274: (in fn0C00_0DCF(0xA000, ds) : void)
  Class: Eq_246
  DataType: void
  OrigDataType: void
T_275: (in 0x002B : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_276: (in 0x0103 : word16)
  Class: Eq_276
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_277 t0000)))
T_277: (in Mem135[ds:0x0103:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_278: (in 0x004A : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_279: (in 0x0105 : word16)
  Class: Eq_279
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_280 t0000)))
T_280: (in Mem136[ds:0x0105:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_281: (in 0x002B : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_282: (in 0x0109 : word16)
  Class: Eq_282
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_283 t0000)))
T_283: (in Mem137[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_284: (in 0x0067 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_285: (in 0x010B : word16)
  Class: Eq_285
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_286 t0000)))
T_286: (in Mem138[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_287: (in fn0C00_0DCF : ptr32)
  Class: Eq_242
  DataType: (ptr Eq_242)
  OrigDataType: (ptr (fn T_288 (T_114, T_8)))
T_288: (in fn0C00_0DCF(0xA000, ds) : void)
  Class: Eq_246
  DataType: void
  OrigDataType: void
T_289: (in 0x0019 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_290: (in 0x0103 : word16)
  Class: Eq_290
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_291 t0000)))
T_291: (in Mem139[ds:0x0103:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_292: (in 0x0045 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_293: (in 0x0105 : word16)
  Class: Eq_293
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_294 t0000)))
T_294: (in Mem140[ds:0x0105:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_295: (in 0x000B : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_296: (in 0x0109 : word16)
  Class: Eq_296
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_297 t0000)))
T_297: (in Mem141[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_298: (in 0x005E : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_299: (in 0x010B : word16)
  Class: Eq_299
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_300 t0000)))
T_300: (in Mem142[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_301: (in fn0C00_0DCF : ptr32)
  Class: Eq_242
  DataType: (ptr Eq_242)
  OrigDataType: (ptr (fn T_302 (T_114, T_8)))
T_302: (in fn0C00_0DCF(0xA000, ds) : void)
  Class: Eq_246
  DataType: void
  OrigDataType: void
T_303: (in 0x000C : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_304: (in 0x0103 : word16)
  Class: Eq_304
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_305 t0000)))
T_305: (in Mem143[ds:0x0103:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_306: (in 0x0038 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_307: (in 0x0105 : word16)
  Class: Eq_307
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_308 t0000)))
T_308: (in Mem144[ds:0x0105:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_309: (in 0x0000 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_310: (in 0x0109 : word16)
  Class: Eq_310
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_311 t0000)))
T_311: (in Mem145[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_312: (in 0x003F : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_313: (in 0x010B : word16)
  Class: Eq_313
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_314 t0000)))
T_314: (in Mem146[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_315: (in fn0C00_0DCF : ptr32)
  Class: Eq_242
  DataType: (ptr Eq_242)
  OrigDataType: (ptr (fn T_316 (T_114, T_8)))
T_316: (in fn0C00_0DCF(0xA000, ds) : void)
  Class: Eq_246
  DataType: void
  OrigDataType: void
T_317: (in 0x0007 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_318: (in 0x0103 : word16)
  Class: Eq_318
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_319 t0000)))
T_319: (in Mem147[ds:0x0103:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_320: (in 0x0026 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_321: (in 0x0105 : word16)
  Class: Eq_321
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_322 t0000)))
T_322: (in Mem148[ds:0x0105:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_323: (in 0x0000 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_324: (in 0x0109 : word16)
  Class: Eq_324
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_325 t0000)))
T_325: (in Mem149[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_326: (in 0x0026 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_327: (in 0x010B : word16)
  Class: Eq_327
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_328 t0000)))
T_328: (in Mem150[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_329: (in fn0C00_0DCF : ptr32)
  Class: Eq_242
  DataType: (ptr Eq_242)
  OrigDataType: (ptr (fn T_330 (T_114, T_8)))
T_330: (in fn0C00_0DCF(0xA000, ds) : void)
  Class: Eq_246
  DataType: void
  OrigDataType: void
T_331: (in 0x000C : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_332: (in 0x0103 : word16)
  Class: Eq_332
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_333 t0000)))
T_333: (in Mem151[ds:0x0103:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_334: (in 0x0014 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_335: (in 0x0105 : word16)
  Class: Eq_335
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_336 t0000)))
T_336: (in Mem152[ds:0x0105:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_337: (in 0x0000 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_338: (in 0x0109 : word16)
  Class: Eq_338
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_339 t0000)))
T_339: (in Mem153[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_340: (in 0x000D : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_341: (in 0x010B : word16)
  Class: Eq_341
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_342 t0000)))
T_342: (in Mem154[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_343: (in fn0C00_0DCF : ptr32)
  Class: Eq_242
  DataType: (ptr Eq_242)
  OrigDataType: (ptr (fn T_344 (T_114, T_8)))
T_344: (in fn0C00_0DCF(0xA000, ds) : void)
  Class: Eq_246
  DataType: void
  OrigDataType: void
T_345: (in 0x0019 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_346: (in 0x0103 : word16)
  Class: Eq_346
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_347 t0000)))
T_347: (in Mem155[ds:0x0103:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_348: (in 0x0007 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_349: (in 0x0105 : word16)
  Class: Eq_349
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_350 t0000)))
T_350: (in Mem156[ds:0x0105:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_351: (in 0x0015 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_352: (in 0x0109 : word16)
  Class: Eq_352
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_353 t0000)))
T_353: (in Mem157[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_354: (in 0x0000 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_355: (in 0x010B : word16)
  Class: Eq_355
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_356 t0000)))
T_356: (in Mem158[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_357: (in fn0C00_0DCF : ptr32)
  Class: Eq_242
  DataType: (ptr Eq_242)
  OrigDataType: (ptr (fn T_358 (T_114, T_8)))
T_358: (in fn0C00_0DCF(0xA000, ds) : void)
  Class: Eq_246
  DataType: void
  OrigDataType: void
T_359: (in 0x002B : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_360: (in 0x0103 : word16)
  Class: Eq_360
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_361 t0000)))
T_361: (in Mem159[ds:0x0103:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_362: (in 0x0002 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_363: (in 0x0105 : word16)
  Class: Eq_363
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_364 t0000)))
T_364: (in Mem160[ds:0x0105:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_365: (in 0x002B : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_366: (in 0x0109 : word16)
  Class: Eq_366
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_367 t0000)))
T_367: (in Mem161[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_368: (in 0x0000 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_369: (in 0x010B : word16)
  Class: Eq_369
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_370 t0000)))
T_370: (in Mem162[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_371: (in fn0C00_0DCF : ptr32)
  Class: Eq_242
  DataType: (ptr Eq_242)
  OrigDataType: (ptr (fn T_372 (T_114, T_8)))
T_372: (in fn0C00_0DCF(0xA000, ds) : void)
  Class: Eq_246
  DataType: void
  OrigDataType: void
T_373: (in 0x003D : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_374: (in 0x0103 : word16)
  Class: Eq_374
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_375 t0000)))
T_375: (in Mem163[ds:0x0103:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_376: (in 0x0007 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_377: (in 0x0105 : word16)
  Class: Eq_377
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_378 t0000)))
T_378: (in Mem164[ds:0x0105:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_379: (in 0x0041 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_380: (in 0x0109 : word16)
  Class: Eq_380
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_381 t0000)))
T_381: (in Mem165[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_382: (in 0x0000 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_383: (in 0x010B : word16)
  Class: Eq_383
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_384 t0000)))
T_384: (in Mem166[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_385: (in fn0C00_0DCF : ptr32)
  Class: Eq_242
  DataType: (ptr Eq_242)
  OrigDataType: (ptr (fn T_386 (T_114, T_8)))
T_386: (in fn0C00_0DCF(0xA000, ds) : void)
  Class: Eq_246
  DataType: void
  OrigDataType: void
T_387: (in 0x004A : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_388: (in 0x0103 : word16)
  Class: Eq_388
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_389 t0000)))
T_389: (in Mem167[ds:0x0103:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_390: (in 0x0014 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_391: (in 0x0105 : word16)
  Class: Eq_391
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_392 t0000)))
T_392: (in Mem168[ds:0x0105:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_393: (in 0x0063 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_394: (in 0x0109 : word16)
  Class: Eq_394
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_395 t0000)))
T_395: (in Mem169[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_396: (in 0x0007 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_397: (in 0x010B : word16)
  Class: Eq_397
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_398 t0000)))
T_398: (in Mem170[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_399: (in fn0C00_0DCF : ptr32)
  Class: Eq_242
  DataType: (ptr Eq_242)
  OrigDataType: (ptr (fn T_400 (T_114, T_8)))
T_400: (in fn0C00_0DCF(0xA000, ds) : void)
  Class: Eq_246
  DataType: void
  OrigDataType: void
T_401: (in 0x00 : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_402: (in 0x0113 : word16)
  Class: Eq_402
  DataType: (memptr (ptr Eq_8) byte)
  OrigDataType: (memptr T_8 (struct (0 T_403 t0000)))
T_403: (in Mem171[ds:0x0113:byte] : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_404: (in 0x0004 : word16)
  Class: Eq_159
  DataType: int16
  OrigDataType: word16
T_405: (in 0x0107 : word16)
  Class: Eq_405
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_8 (struct (0 T_406 t0000)))
T_406: (in Mem172[ds:0x0107:word16] : word16)
  Class: Eq_159
  DataType: int16
  OrigDataType: word16
T_407: (in 0x0027 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_408: (in 0x0105 : word16)
  Class: Eq_408
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_409 t0000)))
T_409: (in Mem173[ds:0x0105:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_410: (in 0x002B : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_411: (in 0x0103 : word16)
  Class: Eq_411
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_412 t0000)))
T_412: (in Mem174[ds:0x0103:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_413: (in fn0C00_0D73 : ptr32)
  Class: Eq_110
  DataType: (ptr Eq_110)
  OrigDataType: (ptr (fn T_414 (T_114, T_8)))
T_414: (in fn0C00_0D73(0xA000, ds) : void)
  Class: Eq_115
  DataType: void
  OrigDataType: void
T_415: (in 0x0004 : word16)
  Class: Eq_159
  DataType: int16
  OrigDataType: word16
T_416: (in 0x0107 : word16)
  Class: Eq_416
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_8 (struct (0 T_417 t0000)))
T_417: (in Mem175[ds:0x0107:word16] : word16)
  Class: Eq_159
  DataType: int16
  OrigDataType: word16
T_418: (in 0x0020 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_419: (in 0x0103 : word16)
  Class: Eq_419
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_420 t0000)))
T_420: (in Mem176[ds:0x0103:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_421: (in 0x001E : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_422: (in 0x0105 : word16)
  Class: Eq_422
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_423 t0000)))
T_423: (in Mem177[ds:0x0105:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_424: (in fn0C00_0D73 : ptr32)
  Class: Eq_110
  DataType: (ptr Eq_110)
  OrigDataType: (ptr (fn T_425 (T_114, T_8)))
T_425: (in fn0C00_0D73(0xA000, ds) : void)
  Class: Eq_115
  DataType: void
  OrigDataType: void
T_426: (in 0x0004 : word16)
  Class: Eq_159
  DataType: int16
  OrigDataType: word16
T_427: (in 0x0107 : word16)
  Class: Eq_427
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_8 (struct (0 T_428 t0000)))
T_428: (in Mem178[ds:0x0107:word16] : word16)
  Class: Eq_159
  DataType: int16
  OrigDataType: word16
T_429: (in 0x0036 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_430: (in 0x0103 : word16)
  Class: Eq_430
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_431 t0000)))
T_431: (in Mem179[ds:0x0103:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_432: (in fn0C00_0D73 : ptr32)
  Class: Eq_110
  DataType: (ptr Eq_110)
  OrigDataType: (ptr (fn T_433 (T_114, T_8)))
T_433: (in fn0C00_0D73(0xA000, ds) : void)
  Class: Eq_115
  DataType: void
  OrigDataType: void
T_434: (in 0xC0 : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_435: (in 0x0113 : word16)
  Class: Eq_435
  DataType: (memptr (ptr Eq_8) byte)
  OrigDataType: (memptr T_8 (struct (0 T_436 t0000)))
T_436: (in Mem180[ds:0x0113:byte] : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_437: (in 0x0020 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_438: (in 0x0103 : word16)
  Class: Eq_438
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_439 t0000)))
T_439: (in Mem181[ds:0x0103:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_440: (in 0x0000 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_441: (in 0x0109 : word16)
  Class: Eq_441
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_442 t0000)))
T_442: (in Mem183[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_443: (in 0x0007 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_444: (in 0x010B : word16)
  Class: Eq_444
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_445 t0000)))
T_445: (in Mem184[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_446: (in 0x0005 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_447: (in 0x0105 : word16)
  Class: Eq_447
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_448 t0000)))
T_448: (in Mem185[ds:0x0105:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_449: (in sin : ptr32)
  Class: Eq_449
  DataType: (ptr Eq_449)
  OrigDataType: (ptr (fn T_457 (T_456)))
T_450: (in 0x0109 : word16)
  Class: Eq_450
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_451 t0000)))
T_451: (in Mem185[ds:0x0109:int16] : int16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_452: (in (real64) ds->t0109 : real64)
  Class: Eq_452
  DataType: Eq_452
  OrigDataType: (union (real16 u0) (real64 u1))
T_453: (in 0x010B : word16)
  Class: Eq_453
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_8 (struct (0 T_454 t0000)))
T_454: (in Mem185[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_455: (in (real64) ds->t010B : real64)
  Class: Eq_455
  DataType: Eq_455
  OrigDataType: (union (real16 u0) (real64 u1))
T_456: (in (real64) ds->t0109 / (real64) ds->t010B : word16)
  Class: Eq_456
  DataType: real16
  OrigDataType: real16
T_457: (in sin((real64) ds->t0109 / (real64) ds->t010B) : real64)
  Class: Eq_457
  DataType: real64
  OrigDataType: real64
T_458: (in 0x0107 : word16)
  Class: Eq_458
  DataType: (memptr (ptr Eq_8) int16)
  OrigDataType: (memptr T_113 (struct (0 T_459 t0000)))
T_459: (in Mem0[ds:0x0107:int16] : int16)
  Class: Eq_159
  DataType: int16
  OrigDataType: int16
T_460: (in (real64) ds->w0107 : real64)
  Class: Eq_460
  DataType: real64
  OrigDataType: real64
T_461: (in 0x0114 : word16)
  Class: Eq_461
  DataType: (memptr (ptr Eq_8) real32)
  OrigDataType: (memptr T_113 (struct (0 T_462 t0000)))
T_462: (in Mem0[ds:0x0114:real32] : real32)
  Class: Eq_462
  DataType: real32
  OrigDataType: real32
T_463: (in (real64) ds->w0107 - ds->r0114 : word16)
  Class: Eq_463
  DataType: Eq_463
  OrigDataType: word16
T_464: (in 0x0118 : word16)
  Class: Eq_464
  DataType: (memptr (ptr Eq_8) Eq_463)
  OrigDataType: (memptr T_113 (struct (0 T_465 t0000)))
T_465: (in Mem9[ds:0x0118:real32] : real32)
  Class: Eq_463
  DataType: Eq_463
  OrigDataType: real32
T_466: (in 0x00C8 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_467: (in 0x0111 : word16)
  Class: Eq_467
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_113 (struct (0 T_468 t0000)))
T_468: (in Mem11[ds:0x0111:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_469: (in di_10 : (memptr (ptr Eq_112) byte))
  Class: Eq_469
  DataType: (memptr (ptr Eq_112) byte)
  OrigDataType: (memptr T_112 (struct 0001 (0 T_482 t0000)))
T_470: (in 0xF9FF : word16)
  Class: Eq_469
  DataType: (memptr (ptr Eq_112) byte)
  OrigDataType: word16
T_471: (in 0x0001 : word16)
  Class: Eq_471
  DataType: word16
  OrigDataType: word16
T_472: (in di_10 - 0x0001 : word16)
  Class: Eq_469
  DataType: (memptr (ptr Eq_112) byte)
  OrigDataType: word16
T_473: (in cx_29 : Eq_7)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_474: (in 0x0001 : word16)
  Class: Eq_474
  DataType: word16
  OrigDataType: word16
T_475: (in cx_29 - 0x0001 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_476: (in 0x0000 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_477: (in cx_29 != 0x0000 : bool)
  Class: Eq_477
  DataType: bool
  OrigDataType: bool
T_478: (in 0x0113 : word16)
  Class: Eq_478
  DataType: (memptr (ptr Eq_8) byte)
  OrigDataType: (memptr T_113 (struct (0 T_479 t0000)))
T_479: (in Mem36[ds:0x0113:byte] : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_480: (in 0x0000 : word16)
  Class: Eq_480
  DataType: word16
  OrigDataType: word16
T_481: (in di_10 + 0x0000 : word16)
  Class: Eq_481
  DataType: word16
  OrigDataType: word16
T_482: (in Mem59[es:di_10 + 0x0000:byte] : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_483: (in 0x0109 : word16)
  Class: Eq_483
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_113 (struct (0 T_484 t0000)))
T_484: (in Mem34[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_485: (in 0x0111 : word16)
  Class: Eq_485
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_113 (struct (0 T_486 t0000)))
T_486: (in Mem34[ds:0x0111:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_487: (in 0x010B : word16)
  Class: Eq_487
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_113 (struct (0 T_488 t0000)))
T_488: (in Mem36[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_489: (in rLoc1_38 : Eq_489)
  Class: Eq_489
  DataType: Eq_489
  OrigDataType: real64
T_490: (in 0x0103 : word16)
  Class: Eq_490
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_113 (struct (0 T_491 t0000)))
T_491: (in Mem36[ds:0x0103:int16] : int16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_492: (in (real64) ds->t0103 : real64)
  Class: Eq_492
  DataType: Eq_492
  OrigDataType: (union (real16 u0) (real64 u1))
T_493: (in 0x0109 : word16)
  Class: Eq_493
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_113 (struct (0 T_494 t0000)))
T_494: (in Mem36[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_495: (in (real64) ds->t0109 : real64)
  Class: Eq_495
  DataType: Eq_495
  OrigDataType: (union (real16 u0) (real64 u1))
T_496: (in (real64) ds->t0103 - (real64) ds->t0109 : word16)
  Class: Eq_489
  DataType: Eq_489
  OrigDataType: real16
T_497: (in rLoc2_41 : Eq_497)
  Class: Eq_497
  DataType: Eq_497
  OrigDataType: real64
T_498: (in 0x0105 : word16)
  Class: Eq_498
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_113 (struct (0 T_499 t0000)))
T_499: (in Mem36[ds:0x0105:int16] : int16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_500: (in (real64) ds->t0105 : real64)
  Class: Eq_500
  DataType: Eq_500
  OrigDataType: (union (real16 u0) (real64 u1))
T_501: (in 0x010B : word16)
  Class: Eq_501
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_113 (struct (0 T_502 t0000)))
T_502: (in Mem36[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_503: (in (real64) ds->t010B : real64)
  Class: Eq_503
  DataType: Eq_503
  OrigDataType: (union (real16 u0) (real64 u1))
T_504: (in (real64) ds->t0105 - (real64) ds->t010B : word16)
  Class: Eq_497
  DataType: Eq_497
  OrigDataType: real16
T_505: (in sqrt : ptr32)
  Class: Eq_505
  DataType: (ptr Eq_505)
  OrigDataType: (ptr (fn T_509 (T_508)))
T_506: (in rLoc1_38 * rLoc1_38 : real64)
  Class: Eq_506
  DataType: real64
  OrigDataType: real64
T_507: (in rLoc2_41 * rLoc2_41 : real64)
  Class: Eq_507
  DataType: real64
  OrigDataType: real64
T_508: (in rLoc1_38 * rLoc1_38 + rLoc2_41 * rLoc2_41 : real64)
  Class: Eq_508
  DataType: real64
  OrigDataType: real64
T_509: (in sqrt(rLoc1_38 * rLoc1_38 + rLoc2_41 * rLoc2_41) : real64)
  Class: Eq_463
  DataType: Eq_463
  OrigDataType: (union (64 u0) (real64 u1))
T_510: (in 0x0118 : word16)
  Class: Eq_510
  DataType: (memptr (ptr Eq_8) Eq_463)
  OrigDataType: (memptr T_113 (struct (0 T_511 t0000)))
T_511: (in Mem36[ds:0x0118:real32] : real32)
  Class: Eq_463
  DataType: Eq_463
  OrigDataType: (union (32 u0) (real32 u1))
T_512: (in sqrt(rLoc1_38 * rLoc1_38 + rLoc2_41 * rLoc2_41) >u ds->t0118 : bool)
  Class: Eq_512
  DataType: bool
  OrigDataType: bool
T_513: (in 0x0111 : word16)
  Class: Eq_513
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_113 (struct (0 T_466 t0000)))
T_514: (in Mem36[ds:0x0111:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_515: (in 0x0001 : word16)
  Class: Eq_515
  DataType: word16
  OrigDataType: word16
T_516: (in ds->t0111 - 0x0001 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_517: (in Mem53[ds:0x0111:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_518: (in 0x0111 : word16)
  Class: Eq_518
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_113 (struct (0 T_519 t0000)))
T_519: (in Mem53[ds:0x0111:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_520: (in 0x0000 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_521: (in ds->t0111 != 0x0000 : bool)
  Class: Eq_521
  DataType: bool
  OrigDataType: bool
T_522: (in 0x0140 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_523: (in 0x0000 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_524: (in 0x0111 : word16)
  Class: Eq_524
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_525 t0000)))
T_525: (in Mem2[ds:0x0111:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_526: (in ax_10 : int16)
  Class: Eq_526
  DataType: int16
  OrigDataType: int16
T_527: (in 0x0103 : word16)
  Class: Eq_527
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_528 t0000)))
T_528: (in Mem2[ds:0x0103:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_529: (in 0x0109 : word16)
  Class: Eq_529
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_530 t0000)))
T_530: (in Mem2[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_531: (in ds->t0103 - ds->t0109 : word16)
  Class: Eq_526
  DataType: int16
  OrigDataType: word16
T_532: (in -ax_10 : word16)
  Class: Eq_526
  DataType: int16
  OrigDataType: int16
T_533: (in 0x0000 : word16)
  Class: Eq_526
  DataType: int16
  OrigDataType: int16
T_534: (in ax_10 < 0x0000 : bool)
  Class: Eq_534
  DataType: bool
  OrigDataType: bool
T_535: (in ax_20 : int16)
  Class: Eq_526
  DataType: int16
  OrigDataType: int16
T_536: (in 0x0105 : word16)
  Class: Eq_536
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_537 t0000)))
T_537: (in Mem2[ds:0x0105:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_538: (in 0x010B : word16)
  Class: Eq_538
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_539 t0000)))
T_539: (in Mem2[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_540: (in ds->t0105 - ds->t010B : word16)
  Class: Eq_526
  DataType: int16
  OrigDataType: word16
T_541: (in -ax_20 : word16)
  Class: Eq_526
  DataType: int16
  OrigDataType: int16
T_542: (in 0x0000 : word16)
  Class: Eq_526
  DataType: int16
  OrigDataType: int16
T_543: (in ax_20 < 0x0000 : bool)
  Class: Eq_543
  DataType: bool
  OrigDataType: bool
T_544: (in ax_20 <= ax_10 : bool)
  Class: Eq_544
  DataType: bool
  OrigDataType: bool
T_545: (in 0x0103 : word16)
  Class: Eq_545
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_546 t0000)))
T_546: (in Mem2[ds:0x0103:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_547: (in 0x0109 : word16)
  Class: Eq_547
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_548 t0000)))
T_548: (in Mem2[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_549: (in ds->t0103 <= ds->t0109 : bool)
  Class: Eq_549
  DataType: bool
  OrigDataType: bool
T_550: (in 0x0111 : word16)
  Class: Eq_550
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_523 t0000)))
T_551: (in Mem2[ds:0x0111:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_552: (in 0x0001 : word16)
  Class: Eq_552
  DataType: word16
  OrigDataType: word16
T_553: (in Mem2[ds:0x0111:word16] + 0x0001 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_554: (in Mem150[ds:0x0111:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_555: (in ax_155 : Eq_7)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_556: (in 0x0105 : word16)
  Class: Eq_556
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_557 t0000)))
T_557: (in Mem150[ds:0x0105:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_558: (in 0x0103 : word16)
  Class: Eq_558
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_559 t0000)))
T_559: (in Mem150[ds:0x0103:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_560: (in 0x0105 : word16)
  Class: Eq_560
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_561 t0000)))
T_561: (in Mem156[ds:0x0105:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_562: (in 0x0103 : word16)
  Class: Eq_562
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_563 t0000)))
T_563: (in Mem158[ds:0x0103:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_564: (in ax_162 : Eq_7)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_565: (in 0x010B : word16)
  Class: Eq_565
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_566 t0000)))
T_566: (in Mem158[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_567: (in 0x0109 : word16)
  Class: Eq_567
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_568 t0000)))
T_568: (in Mem158[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_569: (in 0x010B : word16)
  Class: Eq_569
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_570 t0000)))
T_570: (in Mem163[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_571: (in 0x0109 : word16)
  Class: Eq_571
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_572 t0000)))
T_572: (in Mem165[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_573: (in ax_41 : word16)
  Class: Eq_573
  DataType: word16
  OrigDataType: word16
T_574: (in 0x0109 : word16)
  Class: Eq_574
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_575 t0000)))
T_575: (in Mem2[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_576: (in 0x0103 : word16)
  Class: Eq_576
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_577 t0000)))
T_577: (in Mem2[ds:0x0103:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_578: (in ds->t0109 - ds->t0103 : word16)
  Class: Eq_573
  DataType: word16
  OrigDataType: word16
T_579: (in ax_45 : int16)
  Class: Eq_579
  DataType: int16
  OrigDataType: int16
T_580: (in 0x010B : word16)
  Class: Eq_580
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_581 t0000)))
T_581: (in Mem2[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_582: (in 0x0105 : word16)
  Class: Eq_582
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_583 t0000)))
T_583: (in Mem2[ds:0x0105:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_584: (in ds->t010B - ds->t0105 : word16)
  Class: Eq_579
  DataType: int16
  OrigDataType: word16
T_585: (in ax_138 : Eq_7)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_586: (in 0x0109 : word16)
  Class: Eq_586
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_587 t0000)))
T_587: (in Mem2[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_588: (in 0x0103 : word16)
  Class: Eq_588
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_589 t0000)))
T_589: (in Mem2[ds:0x0103:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_590: (in 0x0109 : word16)
  Class: Eq_590
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_591 t0000)))
T_591: (in Mem139[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_592: (in 0x0103 : word16)
  Class: Eq_592
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_593 t0000)))
T_593: (in Mem141[ds:0x0103:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_594: (in ax_145 : Eq_7)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_595: (in 0x010B : word16)
  Class: Eq_595
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_596 t0000)))
T_596: (in Mem141[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_597: (in 0x0105 : word16)
  Class: Eq_597
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_598 t0000)))
T_598: (in Mem141[ds:0x0105:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_599: (in 0x010B : word16)
  Class: Eq_599
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_600 t0000)))
T_600: (in Mem146[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_601: (in 0x0105 : word16)
  Class: Eq_601
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_602 t0000)))
T_602: (in Mem148[ds:0x0105:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_603: (in -ax_45 : word16)
  Class: Eq_579
  DataType: int16
  OrigDataType: int16
T_604: (in 0x0000 : word16)
  Class: Eq_579
  DataType: int16
  OrigDataType: int16
T_605: (in ax_45 < 0x0000 : bool)
  Class: Eq_605
  DataType: bool
  OrigDataType: bool
T_606: (in 0x02 : byte)
  Class: Eq_188
  DataType: int8
  OrigDataType: byte
T_607: (in 0x010F : word16)
  Class: Eq_607
  DataType: (memptr (ptr Eq_8) Eq_188)
  OrigDataType: (memptr T_245 (struct (0 T_608 t0000)))
T_608: (in Mem62[ds:0x010F:byte] : byte)
  Class: Eq_188
  DataType: Eq_188
  OrigDataType: byte
T_609: (in dx_102 : uint16)
  Class: Eq_609
  DataType: uint16
  OrigDataType: word16
T_610: (in SEQ(ax_45, ax_41) : word32)
  Class: Eq_610
  DataType: word32
  OrigDataType: word32
T_611: (in 0x010F : word16)
  Class: Eq_611
  DataType: (memptr (ptr Eq_8) Eq_188)
  OrigDataType: (memptr T_245 (struct (0 T_606 t0000)))
T_612: (in Mem62[ds:0x010F:byte] : byte)
  Class: Eq_188
  DataType: Eq_188
  OrigDataType: byte
T_613: (in SEQ(ax_45, ax_41) % ds->t010F : uint16)
  Class: Eq_609
  DataType: uint16
  OrigDataType: uint16
T_614: (in SEQ(dx_102, ax_41) : word32)
  Class: Eq_614
  DataType: uint32
  OrigDataType: uint32
T_615: (in Mem62[ds:0x010F:byte] : byte)
  Class: Eq_188
  DataType: Eq_188
  OrigDataType: uint8
T_616: (in SEQ(dx_102, ax_41) /u ds->t010F : uint16)
  Class: Eq_616
  DataType: uint16
  OrigDataType: uint16
T_617: (in (byte) (SEQ(dx_102, ax_41) /u ds->t010F) : byte)
  Class: Eq_188
  DataType: Eq_188
  OrigDataType: byte
T_618: (in 0x010F : word16)
  Class: Eq_618
  DataType: (memptr (ptr Eq_8) Eq_188)
  OrigDataType: (memptr T_245 (struct (0 T_619 t0000)))
T_619: (in Mem68[ds:0x010F:byte] : byte)
  Class: Eq_188
  DataType: Eq_188
  OrigDataType: byte
T_620: (in ax_105 : word16)
  Class: Eq_573
  DataType: word16
  OrigDataType: word16
T_621: (in 0x0105 : word16)
  Class: Eq_621
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_622 t0000)))
T_622: (in Mem68[ds:0x0105:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_623: (in 0x010B : word16)
  Class: Eq_623
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_624 t0000)))
T_624: (in Mem68[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_625: (in ds->t0105 >= ds->t010B : bool)
  Class: Eq_625
  DataType: bool
  OrigDataType: bool
T_626: (in 0xFFFF : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_627: (in 0x010B : word16)
  Class: Eq_627
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_628 t0000)))
T_628: (in Mem134[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_629: (in 0x0001 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_630: (in 0x010B : word16)
  Class: Eq_630
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_631 t0000)))
T_631: (in Mem133[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_632: (in bx_114 : Eq_7)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_633: (in 0x0103 : word16)
  Class: Eq_633
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_634 t0000)))
T_634: (in Mem68[ds:0x0103:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_635: (in 0x0105 : word16)
  Class: Eq_635
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_636 t0000)))
T_636: (in Mem68[ds:0x0105:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_637: (in di_123 : Eq_7)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: (memptr T_244 (struct (0 byte b0000)))
T_638: (in ax_125 : Eq_7)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: uint16
T_639: (in 0x0105 : word16)
  Class: Eq_639
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_640 t0000)))
T_640: (in Mem68[ds:0x0105:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_641: (in 0x0113 : word16)
  Class: Eq_641
  DataType: (memptr (ptr Eq_8) byte)
  OrigDataType: (memptr T_245 (struct (0 T_642 t0000)))
T_642: (in Mem68[ds:0x0113:byte] : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_643: (in 0x0140 : word16)
  Class: Eq_643
  DataType: uint16
  OrigDataType: uint16
T_644: (in ax_125 *u 0x0140 : uint32)
  Class: Eq_644
  DataType: uint32
  OrigDataType: uint32
T_645: (in (word16) (ax_125 *u 0x0140) : word16)
  Class: Eq_645
  DataType: word16
  OrigDataType: word16
T_646: (in di_123 + (word16) (ax_125 *u 0x0140) : word16)
  Class: Eq_646
  DataType: word16
  OrigDataType: word16
T_647: (in Mem100[es:di_123 + (word16) (ax_125 *u 0x0140):byte] : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_648: (in 0x010F : word16)
  Class: Eq_648
  DataType: (memptr (ptr Eq_8) Eq_188)
  OrigDataType: (memptr T_245 (struct (0 T_606 t0000)))
T_649: (in Mem100[ds:0x010F:byte] : byte)
  Class: Eq_188
  DataType: Eq_188
  OrigDataType: byte
T_650: (in (byte) dx_102 : byte)
  Class: Eq_650
  DataType: byte
  OrigDataType: byte
T_651: (in ds->t010F - (byte) dx_102 : byte)
  Class: Eq_188
  DataType: Eq_188
  OrigDataType: byte
T_652: (in Mem110[ds:0x010F:byte] : byte)
  Class: Eq_188
  DataType: Eq_188
  OrigDataType: byte
T_653: (in al_107 : byte)
  Class: Eq_653
  DataType: byte
  OrigDataType: byte
T_654: (in (byte) ax_105 : byte)
  Class: Eq_653
  DataType: byte
  OrigDataType: byte
T_655: (in 0x010F : word16)
  Class: Eq_655
  DataType: (memptr (ptr Eq_8) Eq_188)
  OrigDataType: (memptr T_245 (struct (0 T_656 t0000)))
T_656: (in Mem110[ds:0x010F:byte] : byte)
  Class: Eq_188
  DataType: Eq_188
  OrigDataType: int8
T_657: (in 0x00 : byte)
  Class: Eq_188
  DataType: int8
  OrigDataType: int8
T_658: (in ds->t010F >= 0x00 : bool)
  Class: Eq_658
  DataType: bool
  OrigDataType: bool
T_659: (in 0x0001 : word16)
  Class: Eq_659
  DataType: word16
  OrigDataType: word16
T_660: (in bx_114 + 0x0001 : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_661: (in 0x0109 : word16)
  Class: Eq_661
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_662 t0000)))
T_662: (in Mem110[ds:0x0109:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: int16
T_663: (in bx_114 <= ds->t0109 : bool)
  Class: Eq_663
  DataType: bool
  OrigDataType: bool
T_664: (in 0x0105 : word16)
  Class: Eq_664
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_528 t0000)))
T_665: (in Mem110[ds:0x0105:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_666: (in 0x010B : word16)
  Class: Eq_666
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_667 t0000)))
T_667: (in Mem110[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_668: (in Mem110[ds:0x0105:word16] + Mem110[ds:0x010B:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_669: (in Mem119[ds:0x0105:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_670: (in 0x010F : word16)
  Class: Eq_670
  DataType: (memptr (ptr Eq_8) Eq_188)
  OrigDataType: (memptr T_245 (struct (0 T_606 t0000)))
T_671: (in Mem119[ds:0x010F:byte] : byte)
  Class: Eq_188
  DataType: Eq_188
  OrigDataType: byte
T_672: (in Mem119[ds:0x010F:byte] + al_107 : byte)
  Class: Eq_188
  DataType: Eq_188
  OrigDataType: byte
T_673: (in Mem121[ds:0x010F:byte] : byte)
  Class: Eq_188
  DataType: Eq_188
  OrigDataType: byte
T_674: (in 0x0111 : word16)
  Class: Eq_674
  DataType: (memptr (ptr Eq_8) Eq_7)
  OrigDataType: (memptr T_245 (struct (0 T_675 t0000)))
T_675: (in Mem68[ds:0x0111:word16] : word16)
  Class: Eq_7
  DataType: Eq_7
  OrigDataType: word16
T_676: (in 0x0001 : word16)
  Class: Eq_7
  DataType: int16
  OrigDataType: word16
T_677: (in ds->t0111 == 0x0001 : bool)
  Class: Eq_677
  DataType: bool
  OrigDataType: bool
*/
typedef Eq_112 Eq_1struct Globals {
	Eq_112 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef union Eq_7 {
	int16 u0;
	uint8 u1;
	uint16 u2;
	byte Eq_112::* u3;
} Eq_7;

typedef Eq_7 Eq_8Eq_7 Eq_8Eq_7 Eq_8Eq_7 Eq_8Eq_188 Eq_8Eq_7 Eq_8Eq_463 Eq_8struct Eq_8 {
	Eq_7 t0103;	// 103
	Eq_7 t0105;	// 105
	int16 w0107;	// 107
	Eq_7 t0109;	// 109
	Eq_7 t010B;	// 10B
	Eq_188 t010F;	// 10F
	Eq_7 t0111;	// 111
	byte b0113;	// 113
	real32 r0114;	// 114
	Eq_463 t0118;	// 118
} Eq_8;

typedef void (Eq_20)(word16, byte);

typedef void (Eq_34)(word16, Eq_7);

typedef void (Eq_40)(word16, Eq_7);

typedef void (Eq_58)(word16, byte);

typedef void (Eq_88)(word16, byte);

typedef void (Eq_93)(word16, byte);

typedef void (Eq_100)(word16, Eq_7);

typedef void (Eq_103)(word16, Eq_7);

typedef void (Eq_110)(Eq_112 *, Eq_8 *);

typedef struct Eq_112 {
	byte bFFFFF9FF;	// FFFFF9FF
	byte bF9FF;	// F9FF
} Eq_112;

typedef struct Eq_126 {	// size: 320 140
	byte b0000;	// 0
} Eq_126;

typedef union Eq_142 {
	real16 u0;
	real64 u1;
} Eq_142;

typedef Eq_142 (Eq_143)(real16);

typedef union Eq_146 {
	real16 u0;
	real64 u1;
} Eq_146;

typedef union Eq_149 {
	real16 u0;
	real64 u1;
} Eq_149;

typedef union Eq_157 {
	real16 u0;
	real64 u1;
} Eq_157;

typedef Eq_186 (Eq_178)(real16);

typedef union Eq_181 {
	real16 u0;
	real64 u1;
} Eq_181;

typedef union Eq_184 {
	real16 u0;
	real64 u1;
} Eq_184;

typedef union Eq_186 {
	real16 u0;
	real64 u1;
} Eq_186;

typedef union Eq_188 {
	int8 u0;
	uint8 u1;
	word16 u2;
} Eq_188;

typedef union Eq_189 {
	real16 u0;
	real64 u1;
} Eq_189;

typedef void (Eq_242)(Eq_112 *, Eq_8 *);

typedef real64 (Eq_449)(real16);

typedef union Eq_452 {
	real16 u0;
	real64 u1;
} Eq_452;

typedef union Eq_455 {
	real16 u0;
	real64 u1;
} Eq_455;

typedef union Eq_463 {
	32 u0;
	64 u1;
	real32 u2;
	real64 u3;
	word16 u4;
} Eq_463;

typedef union Eq_489 {
	real16 u0;
	real64 u1;
} Eq_489;

typedef union Eq_492 {
	real16 u0;
	real64 u1;
} Eq_492;

typedef union Eq_495 {
	real16 u0;
	real64 u1;
} Eq_495;

typedef union Eq_497 {
	real16 u0;
	real64 u1;
} Eq_497;

typedef union Eq_500 {
	real16 u0;
	real64 u1;
} Eq_500;

typedef union Eq_503 {
	real16 u0;
	real64 u1;
} Eq_503;

typedef Eq_463 (Eq_505)(real64);

