// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_340/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_804) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_3: (segment (0 (arr Eq_930) a0000) (4C4 (arr Eq_924) a04C4) (4C6 (arr Eq_928) a04C6) (4C8 (arr Eq_927) a04C8) (4CA Eq_861 t04CA) (4CE cups16 w04CE) (4D2 word16 w04D2) (4D4 Eq_651 t04D4) (4E5 (arr Eq_923) a04E5) (4E6 word16 w04E6) (4E8 byte b04E8) (4ED word16 w04ED) (4EF word16 w04EF) (4F3 (arr Eq_935) a04F3) (571 Eq_125 t0571) (575 word32 dw0575) (579 Eq_125 t0579) (57D Eq_125 t057D) (581 Eq_304 t0581) (5FF (arr Eq_176) a05FF) (603 (arr Eq_925) a0603) (62B Eq_258 t062B) (63F (arr Eq_929) a063F) (663 Eq_489 t0663) (667 Eq_125 t0667) (66B (arr Eq_933) a066B) (677 Eq_490 t0677))
	T_3 (in cs : selector)
	T_19 (in es_31 : selector)
	T_20 (in es : selector)
	T_132 (in ds : selector)
	T_141 (in ss : selector)
	T_857 (in ds : selector)
Eq_5: (union (bcu8 u0) ((ptr (struct (0 (arr Eq_922) a0000))) u1))
	T_5 (in bx_9 : word16)
	T_8 (in DPB(cs, bh_4 + 0x10, 8, 8) : word16)
	T_44 (in bx_113 : word16)
	T_62 (in bx_895 : word16)
	T_65 (in Mem127[es_31:di_121 + 0x0000:word16] : word16)
	T_80 (in bx_895 + 0x002D : word16)
	T_759 (in al_743 : byte)
	T_762 (in Mem752[bx_9:di_729 + 0x0000:byte] : byte)
	T_767 (in 0x00 : byte)
	T_770 (in Mem727[bx_9:di_729 + 0x0000:word16] : word16)
	T_776 (in ah_740 : byte)
	T_777 (in SLICE(ax_738, byte, 8) : byte)
	T_784 (in ((byte) ax_738 + ah_740 >>u 0x02) - 0x04 : byte)
	T_785 (in 0x00 : byte)
	T_789 (in Mem757[bx_9:di_729 + 0x0000:byte] : byte)
Eq_13: (struct 0002 (0 word16 w0000))
	T_13 (in di_14 : word16)
	T_14 (in 0x0000 : word16)
	T_31 (in di_14 + 0x0002 : word16)
Eq_21: (struct 0001 (0 byte b0000))
	T_21 (in di_33 : word16)
	T_22 (in 0x04E5 : word16)
	T_50 (in di_33 + 0x0001 : word16)
Eq_36: (fn void (byte))
	T_36 (in bios_video_set_mode : ptr32)
	T_37 (in signature of bios_video_set_mode : void)
	T_852 (in bios_video_set_mode : ptr32)
Eq_55: (struct 0002 (0 word16 w0000))
	T_55 (in di_108 : word16)
	T_70 (in di_121 + 0x0002 : word16)
	T_913 (in 0x04F1 : word16)
Eq_59: (struct (0 Eq_5 t0000))
	T_59 (in di_121 : word16)
	T_61 (in di_108 + 0x0002 : word16)
Eq_96: (fn void (word16, Eq_98))
	T_96 (in __outb : ptr32)
Eq_98: (union (bcu8 u0) (ui16 u1))
	T_98 (in al_160 : byte)
	T_105 (in 0x3F : byte)
	T_117 (in cl_148 << 0x01 : word16)
	T_118 (in 0x3F : byte)
Eq_106: (fn void (word16, byte))
	T_106 (in __outb : ptr32)
Eq_109: (fn void (word16, byte))
	T_109 (in __outb : ptr32)
Eq_113: (fn void (word16, byte))
	T_113 (in __outb : ptr32)
Eq_120: (struct 0004 (0 Eq_131 t0000))
	T_120 (in di_171 : word16)
	T_121 (in 0x059F : word16)
	T_140 (in di_171 + 0x0004 : word16)
Eq_122: (struct 0002 (0 word16 w0000))
	T_122 (in si_172 : word16)
	T_123 (in 0x04C4 : word16)
	T_152 (in si_188 + 0x0002 : word16)
Eq_125: (union (int32 u0) (real16 u1) (real32 u2) (real64 u3) (word16 u4))
	T_125 (in ebp : word32)
	T_143 (in Mem198[ss:0x057D:word32] : word32)
	T_160 (in (word32) Mem127[ds:si_172 + 0x0000:word16] : word32)
	T_162 (in Mem189[ds:0x057D:word32] : word32)
	T_166 (in Mem189[ss:0x057D:int32] : int32)
	T_171 (in cx_193 - 0x0001 : word16)
	T_173 (in Mem211[ss:0x057D:word16] : word16)
	T_175 (in Mem211[ss:0x057D:int32] : int32)
	T_266 (in DPB(eax_293, Mem285[ds:si_292 + 0x0000:word16], 0, 16) : word32)
	T_268 (in Mem309[ss:0x057D:word32] : word32)
	T_273 (in Mem309[ss:0x057D:word32] : word32)
	T_424 (in SEQ(ds, (ax_489 << 0x0002) + 0x061B)[DPB(ax_489 << 0x0002, dh_473, 0, 8) * 0x0004] : real32)
	T_426 (in Mem485[ds:0x0571:real32] : real32)
	T_458 (in SEQ(ds, si_465)[DPB(ax_462 << 0x0002, cl_400, 0, 8) * 0x0004] : word32)
	T_460 (in Mem472[ds:0x0571:word32] : word32)
	T_483 (in Mem501[ds:0x0667:word32] : word32)
	T_485 (in Mem517[es_31:0x057D:word32] : word32)
	T_487 (in Mem517[ds:0x057D:real32] : real32)
	T_520 (in SEQ(ds, 0x066B)[ax_566 * 0x0004] : word32)
	T_522 (in Mem574[es_31:0x0571:word32] : word32)
	T_523 (in rLoc2_578 : real64)
	T_527 (in Mem574[ds:0x0571:real32] : real32)
	T_528 (in Mem574[ds:0x0581:real32] * Mem574[ds:0x0571:real32] : word16)
	T_530 (in Mem574[ds:0x057D:real32] : real32)
	T_531 (in Mem574[ds:0x057D:real32] - rLoc2_578 : word16)
	T_533 (in Mem580[ds:0x057D:real32] : real32)
	T_535 (in Mem581[ds:0x057D:real32] : real32)
	T_542 (in Mem581[ds:0x057D:word32] : word32)
	T_550 (in SEQ(ds, 0x066B)[DPB(ax_566 << 0x0002, cl_526, 0, 8) * 0x0004] : word32)
	T_567 (in Mem523[ds:(ax_537 << 0x0002) + 0x061B + DPB(ax_537 << 0x0002, 0x10, 0, 8):word32] : word32)
	T_569 (in Mem547[es_31:0x057D:word32] : word32)
	T_576 (in DPB(ebp_899, 0x0064, 0, 16) : word32)
	T_590 (in Mem633[ds:0x057D:word32] : word32)
	T_607 (in (int32) (rLoc2_625 + Mem643[ds:0x0581:real32]) : int32)
	T_609 (in Mem645[ds:0x0571:int32] : int32)
	T_621 (in di_698 : word16)
	T_642 (in Mem662[ds:0x0579:word32] : word32)
	T_663 (in Mem665[ds:0x0579:word32] : word32)
	T_665 (in rLoc3_670 * (real64) Mem665[ds:0x0579:word32] : word16)
	T_667 (in Mem673[ds:0x057D:real32] : real32)
	T_668 (in rLoc2_677 : real64)
	T_670 (in Mem673[ds:0x0571:int32] : int32)
	T_676 (in rLoc2_669 * ((real64) Mem673[ds:0x0571:int32] - (real64) Mem673[ds:0x04D2:word16]) : real64)
	T_678 (in Mem673[ds:0x057D:real32] : real32)
	T_679 (in Mem673[ds:0x057D:real32] - rLoc2_677 : word16)
	T_680 (in Mem679[ds:0x057D:real32] : real32)
	T_682 (in Mem680[ds:0x057D:real32] : real32)
	T_684 (in Mem680[ds:0x0571:int32] : int32)
	T_694 (in Mem684[ds:0x0579:word32] : word32)
	T_721 (in Mem692[ds:0x057D:real32] : real32)
	T_723 (in (int32) (cos(Mem692[ds:0x04D4:real32] * (real64) Mem692[ds:0x0575:word32]) * Mem692[ds:0x057D:real32]) : int32)
	T_725 (in Mem697[ds:0x057D:int32] : int32)
	T_730 (in Mem697[ds:0x057D:word16] : word16)
	T_738 (in DPB(ebp, bp_599, 0, 16) : word32)
	T_742 (in Mem624[ds:0x057D:word32] : word32)
Eq_131: (union (real16 u0) (real32 u1) (real64 u2))
	T_131 (in rLoc1_191 : real64)
	T_135 (in Mem198[ds:di_171 + 0x0000:real32] : real32)
	T_145 (in rLoc1_191 * (real64) Mem198[ss:0x057D:word32] : word16)
	T_167 (in (real64) Mem189[ss:0x057D:int32] : real64)
Eq_142: (struct (0 Eq_125 t0000))
	T_142 (in 0x057D : word16)
Eq_144: (union (real16 u0) (real64 u1))
	T_144 (in (real64) Mem198[ss:0x057D:word32] : real64)
Eq_161: (struct (0 Eq_125 t0000))
	T_161 (in 0x057D : word16)
Eq_165: (struct (0 Eq_125 t0000))
	T_165 (in 0x057D : word16)
Eq_172: (struct (0 Eq_125 t0000))
	T_172 (in 0x057D : word16)
Eq_174: (struct (0 Eq_125 t0000))
	T_174 (in 0x057D : word16)
Eq_176: (union (real32 u0) (real64 u1) ((struct 0004 (0 word32 dw0000)) u2))
	T_176 (in (real64) Mem211[ss:0x057D:int32] : real64)
	T_178 (in Mem215[ds:0x05FF:real32] : real32)
	T_926
Eq_177: (struct (0 Eq_176 t0000))
	T_177 (in 0x05FF : word16)
Eq_179: (struct 0018 (0 Eq_194 t0000))
	T_179 (in si_212 : word16)
	T_180 (in 0x059F : word16)
	T_187 (in si_234 : word16)
	T_197 (in si_234 + 0x0018 : word16)
	T_208 (in si_212 + 0x0004 : word16)
Eq_181: (struct 0004 (0 Eq_191 t0000))
	T_181 (in di_216 : word16)
	T_182 (in 0x0603 : word16)
	T_206 (in di_216 + 0x0004 : word16)
Eq_191: (union (real16 u0) (real32 u1) (real64 u2))
	T_191 (in rLoc2_230 : real64)
	T_195 (in rLoc2_230 + Mem215[ds:si_234 + 0x0000:real32] : word16)
	T_204 (in Mem244[ds:di_216 + 0x0000:real32] : real32)
	T_213 (in 0 : real64)
Eq_194: (union (real16 u0) (real32 u1))
	T_194 (in Mem215[ds:si_234 + 0x0000:real32] : real32)
Eq_217: (struct 0004 (0 word32 dw0000))
	T_217 (in di_254 : word16)
	T_218 (in 0x061B : word16)
	T_232 (in di_254 + 0x0004 : word16)
	T_247 (in di_254 + 0x0004 : word16)
Eq_219: (struct 0004 (0 word32 dw0000))
	T_219 (in si_255 : word16)
	T_220 (in 0x05FF : word16)
	T_230 (in si_255 + 0x0004 : word16)
	T_237 (in si_270 : word16)
	T_245 (in si_270 + 0x0004 : word16)
Eq_254: (struct 0002 (0 word16 w0000))
	T_254 (in si_292 : word16)
	T_255 (in 0x04C8 : word16)
	T_281 (in si_308 + 0x0002 : word16)
Eq_258: (union (real16 u0) (real32 u1) (real64 u2))
	T_258 (in rLoc2_299 : real64)
	T_259 (in 0 : real64)
	T_275 (in rLoc2_299 + (real64) Mem309[ss:0x057D:word32] : word16)
	T_287 (in Mem319[ds:0x062B:real32] : real32)
Eq_267: (struct (0 Eq_125 t0000))
	T_267 (in 0x057D : word16)
Eq_269: (struct (0 word16 w0000))
	T_269 (in si_308 : word16)
	T_271 (in si_292 + 0x0000 : word16)
Eq_272: (struct (0 Eq_125 t0000))
	T_272 (in 0x057D : word16)
Eq_274: (union (real16 u0) (real64 u1))
	T_274 (in (real64) Mem309[ss:0x057D:word32] : real64)
Eq_286: (struct (0 Eq_258 t0000))
	T_286 (in 0x062B : word16)
Eq_293: (struct 0004 (0 int16 w0000))
	T_293 (in si_338 : word16)
	T_314 (in si_338 + 0x0004 : word16)
	T_346 (in 0x04C6 : word16)
Eq_297: (union (real16 u0) (real64 u1))
	T_297 (in (real64) Mem337[ds:si_338 + 0x0000:int16] : real64)
Eq_298: (struct 0018 (0 Eq_301 t0000))
	T_298 (in bp_344 : word16)
	T_309 (in bp_344 + 0x0018 : word16)
	T_349 (in bx_341 + 0x059F : word16)
Eq_301: (union (real16 u0) (real32 u1))
	T_301 (in Mem337[ss:bp_344 + 0x0000:real32] : real32)
Eq_303: (struct (0 Eq_304 t0000))
	T_303 (in 0x0581 : word16)
Eq_304: (union (int32 u0) (real16 u1) (real32 u2) (real64 u3) (cups16 u4))
	T_304 (in Mem337[ds:0x0581:real32] : real32)
	T_305 (in (real64) Mem337[ds:si_338 + 0x0000:int16] * Mem337[ss:bp_344 + 0x0000:real32] + Mem337[ds:0x0581:real32] : word16)
	T_307 (in Mem357[ds:0x0581:real32] : real32)
	T_324 (in Mem357[ds:0x0581:word32] : word32)
	T_327 (in Mem391[es_31:di_367 + 0x0000:word32] : word32)
	T_340 (in 0 : real64)
	T_342 (in Mem337[ds:0x0581:real32] : real32)
	T_408 (in Mem472[ds:si_483 + 0x0000:word32] : word32)
	T_410 (in Mem485[ds:0x0581:word32] : word32)
	T_414 (in rLoc2_498 : real64)
	T_427 (in SEQ(ds, (ax_489 << 0x0002) + 0x061B)[DPB(ax_489 << 0x0002, dh_473, 0, 8) * 0x0004] * Mem485[ds:0x0571:real32] : word16)
	T_429 (in Mem485[ds:0x0581:real32] : real32)
	T_430 (in Mem485[ds:0x0581:real32] - rLoc2_498 : word16)
	T_431 (in Mem500[ds:0x0581:real32] : real32)
	T_434 (in Mem501[ss:si_483 + 0x0000:real32] : real32)
	T_508 (in SEQ(ds, (ax_556 << 0x0002) + 0x061B)[ax_556 * 0x0010] : word32)
	T_510 (in Mem564[es_31:0x0581:word32] : word32)
	T_525 (in Mem574[ds:0x0581:real32] : real32)
	T_580 (in Mem624[ds:si_623 + 0x0000:word32] : word32)
	T_582 (in Mem633[ds:0x0581:word32] : word32)
	T_587 (in Mem633[ds:0x0581:real32] : real32)
	T_598 (in eax_639 : word32)
	T_601 (in Mem633[ds:si_623 + 0x0000:word32] : word32)
	T_603 (in Mem643[ds:0x0581:word32] : word32)
	T_605 (in Mem643[ds:0x0581:real32] : real32)
	T_636 (in DPB(eax_639, 0x3F3F, 0, 16) : word32)
	T_690 (in rLoc3_670 * ((real64) Mem680[ds:0x0571:int32] - (real64) Mem680[ds:0x04D2:word16]) : real64)
	T_692 (in Mem684[ds:0x0581:real32] : real32)
	T_698 (in Mem684[ds:0x0581:real32] : real32)
	T_700 (in (int32) (rLoc2_669 * (real64) Mem684[ds:0x0579:word32] + Mem684[ds:0x0581:real32]) : int32)
	T_702 (in Mem687[ds:0x0581:int32] : int32)
	T_726 (in ax_699 : word16)
	T_728 (in Mem697[ds:0x0581:word16] : word16)
	T_733 (in DPB(eax_639, ax_699 + 0x0063, 0, 16) : word32)
	T_734 (in 0xFF9D : word16)
Eq_306: (struct (0 Eq_304 t0000))
	T_306 (in 0x0581 : word16)
Eq_320: (struct 0014 (0 Eq_304 t0000))
	T_320 (in di_367 : word16)
	T_321 (in 0x063F : word16)
	T_335 (in di_367 + 0x0014 : word16)
Eq_323: (struct (0 Eq_304 t0000))
	T_323 (in 0x0581 : word16)
Eq_341: (struct (0 Eq_304 t0000))
	T_341 (in 0x0581 : word16)
Eq_365: (struct (0 Eq_378 t0000))
	T_365 (in si_440 : word16)
	T_375 (in (ax_433 << 0x0002) + 0x061B + (DPB(ax_433 << 0x0002, ch_428, 0, 8) << 0x0002) : word16)
Eq_378: (union (real16 u0) (real32 u1))
	T_378 (in Mem391[ds:si_440 + 0x0000:real32] : real32)
	T_383 (in Mem391[ds:si_440 + 0x0000:real32] / Mem391[ds:si_425 + 0x0000:real32] : word16)
	T_386 (in Mem444[ds:si_440 + 0x0000:real32] : real32)
Eq_379: (struct (0 Eq_382 t0000))
	T_379 (in si_425 : word16)
	T_478 (in (ax_418 << 0x0002) + 0x061B + (DPB(ax_418 << 0x0002, cl_400, 0, 8) << 0x0002) : word16)
Eq_382: (union (real16 u0) (real32 u1))
	T_382 (in Mem391[ds:si_425 + 0x0000:real32] : real32)
Eq_399: (struct (0 Eq_304 t0000))
	T_399 (in si_483 : word16)
	T_405 (in si_465 + ((word16) dh_473 << 0x0002) : word16)
Eq_409: (struct (0 Eq_304 t0000))
	T_409 (in 0x0581 : word16)
Eq_425: (struct (0 Eq_125 t0000))
	T_425 (in 0x0571 : word16)
Eq_428: (struct (0 Eq_304 t0000))
	T_428 (in 0x0581 : word16)
Eq_459: (struct (0 Eq_125 t0000))
	T_459 (in 0x0571 : word16)
Eq_482: (struct (0 Eq_125 t0000))
	T_482 (in 0x0667 : word16)
Eq_484: (struct (0 Eq_125 t0000))
	T_484 (in 0x057D : word16)
Eq_486: (struct (0 Eq_125 t0000))
	T_486 (in 0x057D : word16)
Eq_488: (struct (0 Eq_489 t0000))
	T_488 (in 0x0663 : word16)
Eq_489: (union (real16 u0) (real32 u1))
	T_489 (in Mem517[ds:0x0663:real32] : real32)
Eq_490: (union (real16 u0) (real32 u1))
	T_490 (in Mem517[ds:0x057D:real32] / Mem517[ds:0x0663:real32] : word16)
	T_492 (in Mem523[ds:0x0677:real32] : real32)
Eq_491: (struct (0 Eq_490 t0000))
	T_491 (in 0x0677 : word16)
Eq_493: (union (int8 u0) (uint8 u1))
	T_493 (in cl_526 : byte)
	T_494 (in 0x02 : byte)
	T_514 (in ch_550 : byte)
	T_537 (in ch_550 - 0x01 : byte)
	T_552 (in cl_526 - 0x01 : byte)
	T_554 (in 0x00 : byte)
	T_570 (in 0x03 : byte)
Eq_509: (struct (0 Eq_304 t0000))
	T_509 (in 0x0581 : word16)
Eq_521: (struct (0 Eq_125 t0000))
	T_521 (in 0x0571 : word16)
Eq_524: (struct (0 Eq_304 t0000))
	T_524 (in 0x0581 : word16)
Eq_526: (struct (0 Eq_125 t0000))
	T_526 (in 0x0571 : word16)
Eq_529: (struct (0 Eq_125 t0000))
	T_529 (in 0x057D : word16)
Eq_532: (struct (0 Eq_125 t0000))
	T_532 (in 0x057D : word16)
Eq_534: (struct (0 Eq_125 t0000))
	T_534 (in 0x057D : word16)
Eq_541: (struct (0 Eq_125 t0000))
	T_541 (in 0x057D : word16)
Eq_562: (struct (0 Eq_125 t0000))
	T_562 (in (ax_537 << 0x0002) + 0x061B : word16)
Eq_568: (struct (0 Eq_125 t0000))
	T_568 (in 0x057D : word16)
Eq_577: (struct 0004 (0 Eq_304 t0000))
	T_577 (in si_623 : word16)
	T_584 (in si_623 - 0x0004 : word16)
	T_743 (in 0x0677 : word16)
Eq_581: (struct (0 Eq_304 t0000))
	T_581 (in 0x0581 : word16)
Eq_585: (union (real16 u0) (real64 u1))
	T_585 (in rLoc2_625 : real64)
	T_592 (in (rLoc2_625 + Mem633[ds:0x0581:real32]) * (real64) Mem633[ds:0x057D:word32] : word16)
	T_744 (in 0 : real64)
Eq_586: (struct (0 Eq_304 t0000))
	T_586 (in 0x0581 : word16)
Eq_589: (struct (0 Eq_125 t0000))
	T_589 (in 0x057D : word16)
Eq_591: (union (real16 u0) (real64 u1))
	T_591 (in (real64) Mem633[ds:0x057D:word32] : real64)
Eq_602: (struct (0 Eq_304 t0000))
	T_602 (in 0x0581 : word16)
Eq_604: (struct (0 Eq_304 t0000))
	T_604 (in 0x0581 : word16)
Eq_608: (struct (0 Eq_125 t0000))
	T_608 (in 0x0571 : word16)
Eq_610: (struct 0004 (0 word16 w0000))
	T_610 (in si_650 : word16)
	T_611 (in 0x04F3 : word16)
	T_615 (in si_650 + 0x0004 : word16)
Eq_620: (struct (0 word16 w0000) (140 word16 w0140))
	T_620 (in di_881 : word16)
	T_626 (in di_698 + 0x00A0 + eax_639 * 0x0140 : word16)
Eq_641: (struct (0 Eq_125 t0000))
	T_641 (in 0x0579 : word16)
Eq_643: (struct (0 word16 w0000))
	T_643 (in 0x04ED : word16)
Eq_647: (struct (0 word32 dw0000))
	T_647 (in 0x0575 : word16)
Eq_649: (union (real16 u0) (real64 u1))
	T_649 (in rLoc2_667 : real64)
	T_655 (in Mem665[ds:0x04D4:real32] * (real64) Mem665[ds:0x0575:word32] : word16)
Eq_650: (struct (0 Eq_651 t0000))
	T_650 (in 0x04D4 : word16)
Eq_651: (union (real16 u0) (real32 u1))
	T_651 (in Mem665[ds:0x04D4:real32] : real32)
	T_714 (in Mem692[ds:0x04D4:real32] : real32)
Eq_652: (struct (0 word32 dw0000))
	T_652 (in 0x0575 : word16)
Eq_654: (union (real16 u0) (real64 u1))
	T_654 (in (real64) Mem665[ds:0x0575:word32] : real64)
Eq_656: (union (real16 u0) (real64 u1))
	T_656 (in rLoc2_669 : real64)
	T_658 (in cos(rLoc2_667) : real64)
Eq_657: (fn Eq_656 (Eq_649))
	T_657 (in cos : ptr32)
Eq_659: (union (real16 u0) (real64 u1))
	T_659 (in rLoc3_670 : real64)
	T_661 (in sin(rLoc2_667) : real64)
Eq_660: (fn Eq_659 (Eq_649))
	T_660 (in sin : ptr32)
Eq_662: (struct (0 Eq_125 t0000))
	T_662 (in 0x0579 : word16)
Eq_664: (union (real16 u0) (real64 u1))
	T_664 (in (real64) Mem665[ds:0x0579:word32] : real64)
Eq_666: (struct (0 Eq_125 t0000))
	T_666 (in 0x057D : word16)
Eq_669: (struct (0 Eq_125 t0000))
	T_669 (in 0x0571 : word16)
Eq_671: (union (real16 u0) (real64 u1))
	T_671 (in (real64) Mem673[ds:0x0571:int32] : real64)
Eq_672: (struct (0 word16 w0000))
	T_672 (in 0x04D2 : word16)
Eq_674: (union (real16 u0) (real64 u1))
	T_674 (in (real64) Mem673[ds:0x04D2:word16] : real64)
Eq_675: (union (real16 u0) (real64 u1))
	T_675 (in (real64) Mem673[ds:0x0571:int32] - (real64) Mem673[ds:0x04D2:word16] : word16)
Eq_677: (struct (0 Eq_125 t0000))
	T_677 (in 0x057D : word16)
Eq_681: (struct (0 Eq_125 t0000))
	T_681 (in 0x057D : word16)
Eq_683: (struct (0 Eq_125 t0000))
	T_683 (in 0x0571 : word16)
Eq_685: (union (real16 u0) (real64 u1))
	T_685 (in (real64) Mem680[ds:0x0571:int32] : real64)
Eq_686: (struct (0 word16 w0000))
	T_686 (in 0x04D2 : word16)
Eq_688: (union (real16 u0) (real64 u1))
	T_688 (in (real64) Mem680[ds:0x04D2:word16] : real64)
Eq_689: (union (real16 u0) (real64 u1))
	T_689 (in (real64) Mem680[ds:0x0571:int32] - (real64) Mem680[ds:0x04D2:word16] : word16)
Eq_691: (struct (0 Eq_304 t0000))
	T_691 (in 0x0581 : word16)
Eq_693: (struct (0 Eq_125 t0000))
	T_693 (in 0x0579 : word16)
Eq_695: (union (real16 u0) (real64 u1))
	T_695 (in (real64) Mem684[ds:0x0579:word32] : real64)
Eq_697: (struct (0 Eq_304 t0000))
	T_697 (in 0x0581 : word16)
Eq_701: (struct (0 Eq_304 t0000))
	T_701 (in 0x0581 : word16)
Eq_706: (struct (0 word16 w0000))
	T_706 (in 0x04EF : word16)
Eq_710: (struct (0 word32 dw0000))
	T_710 (in 0x0575 : word16)
Eq_712: (fn Eq_719 (real16))
	T_712 (in cos : ptr32)
Eq_713: (struct (0 Eq_651 t0000))
	T_713 (in 0x04D4 : word16)
Eq_715: (struct (0 word32 dw0000))
	T_715 (in 0x0575 : word16)
Eq_717: (union (real16 u0) (real64 u1))
	T_717 (in (real64) Mem692[ds:0x0575:word32] : real64)
Eq_719: (union (real16 u0) (real64 u1))
	T_719 (in cos(Mem692[ds:0x04D4:real32] * (real64) Mem692[ds:0x0575:word32]) : real64)
Eq_720: (struct (0 Eq_125 t0000))
	T_720 (in 0x057D : word16)
Eq_724: (struct (0 Eq_125 t0000))
	T_724 (in 0x057D : word16)
Eq_727: (struct (0 Eq_304 t0000))
	T_727 (in 0x0581 : word16)
Eq_729: (struct (0 Eq_125 t0000))
	T_729 (in 0x057D : word16)
Eq_741: (struct (0 Eq_125 t0000))
	T_741 (in 0x057D : word16)
Eq_747: (struct (0 word16 w0000))
	T_747 (in 0x04EF : word16)
Eq_752: (struct (0 word16 w0000))
	T_752 (in 0x04ED : word16)
Eq_757: (union (int16 u0) (cups16 u1) ((memptr Eq_5 (struct 0001 (FFFFFEBF word16 wFFFFFEBF) (0 Eq_5 t0000))) u2))
	T_757 (in di_729 : word16)
	T_758 (in 0xFA00 : word16)
	T_764 (in di_729 + 0x0001 : word16)
	T_765 (in 0x0144 : word16)
	T_791 (in di_729 - 0x0001 : word16)
	T_792 (in 0x0000 : word16)
Eq_794: (struct 0002 (0 word16 w0000))
	T_794 (in si_762 : word16)
	T_795 (in 0x0000 : word16)
	T_809 (in si_762 + 0x0002 : word16)
Eq_796: (struct 0002 (0 word16 w0000))
	T_796 (in di_764 : word16)
	T_798 (in di_729 + 0x0001 : word16)
	T_811 (in di_764 + 0x0002 : word16)
Eq_804: (segment)
	T_804 (in 0xA000 : selector)
Eq_816: (fn byte (word16))
	T_816 (in __inb : ptr32)
Eq_824: (struct (0 word16 w0000))
	T_824 (in 0x04E6 : word16)
Eq_826: (struct (0 byte b0000))
	T_826 (in 0x04E8 : word16)
Eq_832: (struct (0 byte b0000))
	T_832 (in 0x04E8 : word16)
Eq_839: (struct (0 word16 w0000))
	T_839 (in 0x04E6 : word16)
Eq_841: (struct (0 byte b0000) (1 byte b0001))
	T_841 (in si_805 : word16)
	T_843 (in si_796 + 0x04D8 : word16)
Eq_855: (fn void ((ptr Eq_3), word16))
	T_855 (in msdos_display_string : ptr32)
	T_856 (in signature of msdos_display_string : void)
Eq_861: (union (int16 u0) (cups16 u1))
	T_861 (in ax_825 : word16)
	T_862 (in (int16) al_806 : int16)
	T_864 (in Mem804[cs:0x04CA:word16] : word16)
	T_878 (in Mem804[cs:0x04CA:word16] : word16)
	T_881 (in Mem804[cs:0x04CA:word16] : word16)
	T_883 (in Mem804[cs:0x04CA:word16] - 0x0001 : word16)
	T_884 (in Mem870[cs:0x04CA:word16] : word16)
	T_886 (in Mem804[cs:0x04CA:word16] : word16)
	T_888 (in Mem804[cs:0x04CA:word16] + 0x0001 : word16)
	T_889 (in Mem867[cs:0x04CA:word16] : word16)
Eq_863: (struct (0 Eq_861 t0000))
	T_863 (in 0x04CA : word16)
Eq_872: (struct (0 cups16 w0000))
	T_872 (in 0x04CE : word16)
Eq_880: (struct (0 Eq_861 t0000))
	T_880 (in 0x04CA : word16)
Eq_885: (struct (0 Eq_861 t0000))
	T_885 (in 0x04CA : word16)
Eq_891: (fn byte ((ptr byte)))
	T_891 (in bios_kbd_check_keystroke : ptr32)
	T_892 (in signature of bios_kbd_check_keystroke : void)
Eq_900: (struct (0 cups16 w0000))
	T_900 (in 0x04CE : word16)
Eq_907: (struct (0 cups16 w0000))
	T_907 (in 0x04CE : word16)
Eq_917: (fn byte ((ptr byte)))
	T_917 (in bios_kbd_get_keystroke : ptr32)
	T_918 (in signature of bios_kbd_get_keystroke : void)
Eq_922: (struct 0002 (0 word16 w0000))
	T_922
	T_937
Eq_923: (struct 0001 (0 byte b0000))
	T_923
Eq_924: (struct 0002 (0 word16 w0000))
	T_924
Eq_925: (struct 0004 (0 Eq_191 t0000))
	T_925
Eq_927: (struct 0002 (0 word16 w0000))
	T_927
Eq_928: (struct 0004 (0 int16 w0000))
	T_928
Eq_929: (struct 0014 (0 Eq_304 t0000))
	T_929
Eq_930: (union ((struct 0004 (0 Eq_125 t0000)) u0) ((struct 0010 (0 Eq_304 t0000)) u1))
	T_930
	T_931
	T_932
Eq_933: (struct 0004 (0 Eq_125 t0000))
	T_933
	T_934
Eq_935: (struct 0004 (0 word16 w0000))
	T_935
	T_936
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in bh_4 : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_3: (in cs : selector)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (segment (4CA T_861 t04CA) (4CE T_866 t04CE) (4E6 T_823 t04E6) (4E8 T_827 t04E8)))
T_4: (in SLICE(cs, byte, 8) : byte)
  Class: Eq_2
  DataType: byte
  OrigDataType: byte
T_5: (in bx_9 : word16)
  Class: Eq_5
  DataType: Eq_5
  OrigDataType: (ptr (struct (0 (arr T_922) a0000)))
T_6: (in 0x10 : byte)
  Class: Eq_6
  DataType: byte
  OrigDataType: byte
T_7: (in bh_4 + 0x10 : byte)
  Class: Eq_7
  DataType: byte
  OrigDataType: byte
T_8: (in DPB(cs, bh_4 + 0x10, 8, 8) : word16)
  Class: Eq_5
  DataType: Eq_5
  OrigDataType: word16
T_9: (in ebx_11 : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_10: (in ebx : word32)
  Class: Eq_10
  DataType: word32
  OrigDataType: word32
T_11: (in bh_4 + 0x10 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in DPB(ebx, bh_4 + 0x10, 8, 8) : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_13: (in di_14 : word16)
  Class: Eq_13
  DataType: (memptr Eq_5 Eq_13)
  OrigDataType: (memptr T_5 (struct 0002 (0 T_29 t0000)))
T_14: (in 0x0000 : word16)
  Class: Eq_13
  DataType: (memptr Eq_5 Eq_13)
  OrigDataType: word16
T_15: (in cx_19 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in cx : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in 0x7D : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in DPB(cx, 0x7D, 8, 8) : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_19: (in es_31 : selector)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (segment (571 T_522 t0571) (57D T_483 t057D) (581 T_510 t0581) (63F (arr T_929) a063F)))
T_20: (in es : selector)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (segment (4E5 (arr T_923) a04E5)))
T_21: (in di_33 : word16)
  Class: Eq_21
  DataType: (memptr (ptr Eq_3) Eq_21)
  OrigDataType: (memptr T_20 (struct 0001 (0 T_48 t0000)))
T_22: (in 0x04E5 : word16)
  Class: Eq_21
  DataType: (memptr (ptr Eq_3) Eq_21)
  OrigDataType: word16
T_23: (in cx_35 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in 0x0C : byte)
  Class: Eq_24
  DataType: byte
  OrigDataType: byte
T_25: (in DPB(cx_19, 0x0C, 0, 8) : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_26: (in ax : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in 0x0000 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in di_14 + 0x0000 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in Mem26[bx_9:di_14 + 0x0000:word16] : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_30: (in 0x0002 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in di_14 + 0x0002 : word16)
  Class: Eq_13
  DataType: (memptr Eq_5 Eq_13)
  OrigDataType: word16
T_32: (in 0x0001 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in cx_19 - 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_34: (in 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_35: (in cx_19 == 0x0000 : bool)
  Class: Eq_35
  DataType: bool
  OrigDataType: bool
T_36: (in bios_video_set_mode : ptr32)
  Class: Eq_36
  DataType: (ptr Eq_36)
  OrigDataType: (ptr (fn T_40 (T_39)))
T_37: (in signature of bios_video_set_mode : void)
  Class: Eq_36
  DataType: (ptr Eq_36)
  OrigDataType: 
T_38: (in al : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in 0x13 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_40: (in bios_video_set_mode(0x13) : void)
  Class: Eq_40
  DataType: void
  OrigDataType: void
T_41: (in ax_103 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in 0x13 : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in DPB(ax, 0x13, 0, 8) : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_44: (in bx_113 : word16)
  Class: Eq_5
  DataType: Eq_5
  OrigDataType: (ptr (struct (0 (arr T_922) a0000)))
T_45: (in al : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_46: (in 0x0000 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in di_33 + 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in Mem41[es:di_33 + 0x0000:byte] : byte)
  Class: Eq_45
  DataType: byte
  OrigDataType: byte
T_49: (in 0x0001 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in di_33 + 0x0001 : word16)
  Class: Eq_21
  DataType: (memptr (ptr Eq_3) Eq_21)
  OrigDataType: word16
T_51: (in 0x0001 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in cx_35 - 0x0001 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_53: (in 0x0000 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_54: (in cx_35 == 0x0000 : bool)
  Class: Eq_54
  DataType: bool
  OrigDataType: bool
T_55: (in di_108 : word16)
  Class: Eq_55
  DataType: (memptr (ptr Eq_3) Eq_55)
  OrigDataType: (memptr T_19 (struct 0002 (0 T_58 t0000)))
T_56: (in 0x0000 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in di_108 + 0x0000 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in Mem120[es_31:di_108 + 0x0000:word16] : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_59: (in di_121 : word16)
  Class: Eq_59
  DataType: (memptr (ptr Eq_3) Eq_59)
  OrigDataType: (memptr T_19 (struct (0 T_65 t0000)))
T_60: (in 0x0002 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in di_108 + 0x0002 : word16)
  Class: Eq_59
  DataType: (memptr (ptr Eq_3) Eq_59)
  OrigDataType: word16
T_62: (in bx_895 : word16)
  Class: Eq_5
  DataType: Eq_5
  OrigDataType: word16
T_63: (in 0x0000 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in di_121 + 0x0000 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in Mem127[es_31:di_121 + 0x0000:word16] : word16)
  Class: Eq_5
  DataType: Eq_5
  OrigDataType: word16
T_66: (in ch_111 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in 0x01 : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_68: (in ch_111 - 0x01 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_69: (in 0x0002 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in di_121 + 0x0002 : word16)
  Class: Eq_55
  DataType: (memptr (ptr Eq_3) Eq_55)
  OrigDataType: word16
T_71: (in 0x002D : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in ax_103 + 0x002D : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_73: (in ebx_896 : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_74: (in DPB(ebx_896, bx_895, 0, 16) : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_75: (in cx_112 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in DPB(cx_112, ch_111, 8, 8) : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_77: (in 0x00 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_78: (in ch_111 != 0x00 : bool)
  Class: Eq_78
  DataType: bool
  OrigDataType: bool
T_79: (in 0x002D : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in bx_895 + 0x002D : word16)
  Class: Eq_5
  DataType: Eq_5
  OrigDataType: word16
T_81: (in DPB(ebx_896, bx_113, 0, 16) : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_82: (in 0x0001 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in cx_112 - 0x0001 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in cx_109 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_85: (in 0x0001 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_86: (in cx_112 != 0x0001 : bool)
  Class: Eq_86
  DataType: bool
  OrigDataType: bool
T_87: (in 0x08 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_88: (in 0x08 : byte)
  Class: Eq_88
  DataType: byte
  OrigDataType: byte
T_89: (in DPB(cx_109, 0x08, 8, 8) : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_90: (in cl_148 : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_91: (in 0xFF : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_92: (in cx_149 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in cx_112 - 0x0001 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in 0xFF : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_95: (in DPB(cx_112 - 0x0001, 0xFF, 0, 8) : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_96: (in __outb : ptr32)
  Class: Eq_96
  DataType: (ptr Eq_96)
  OrigDataType: (ptr (fn T_99 (T_97, T_98)))
T_97: (in 0x03C9 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in al_160 : byte)
  Class: Eq_98
  DataType: Eq_98
  OrigDataType: bcu8
T_99: (in __outb(0x03C9, al_160) : void)
  Class: Eq_99
  DataType: void
  OrigDataType: void
T_100: (in 0x0001 : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in cx_149 - 0x0001 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_102: (in (byte) cx_149 : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_103: (in 0x0000 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_104: (in cx_149 != 0x0000 : bool)
  Class: Eq_104
  DataType: bool
  OrigDataType: bool
T_105: (in 0x3F : byte)
  Class: Eq_98
  DataType: Eq_98
  OrigDataType: byte
T_106: (in __outb : ptr32)
  Class: Eq_106
  DataType: (ptr Eq_106)
  OrigDataType: (ptr (fn T_108 (T_107, T_90)))
T_107: (in 0x03C8 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in __outb(0x03C8, cl_148) : void)
  Class: Eq_108
  DataType: void
  OrigDataType: void
T_109: (in __outb : ptr32)
  Class: Eq_109
  DataType: (ptr Eq_109)
  OrigDataType: (ptr (fn T_112 (T_110, T_111)))
T_110: (in 0x03C9 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in 0x00 : byte)
  Class: Eq_111
  DataType: byte
  OrigDataType: byte
T_112: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_112
  DataType: void
  OrigDataType: void
T_113: (in __outb : ptr32)
  Class: Eq_113
  DataType: (ptr Eq_113)
  OrigDataType: (ptr (fn T_115 (T_114, T_90)))
T_114: (in 0x03C9 : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_115: (in __outb(0x03C9, cl_148) : void)
  Class: Eq_115
  DataType: void
  OrigDataType: void
T_116: (in 0x01 : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_117: (in cl_148 << 0x01 : word16)
  Class: Eq_98
  DataType: Eq_98
  OrigDataType: ui16
T_118: (in 0x3F : byte)
  Class: Eq_98
  DataType: Eq_98
  OrigDataType: bcu8
T_119: (in al_160 <u 0x3F : bool)
  Class: Eq_119
  DataType: bool
  OrigDataType: bool
T_120: (in di_171 : word16)
  Class: Eq_120
  DataType: (memptr (ptr Eq_3) Eq_120)
  OrigDataType: (memptr T_132 (struct 0004 (0 T_135 t0000)))
T_121: (in 0x059F : word16)
  Class: Eq_120
  DataType: (memptr (ptr Eq_3) Eq_120)
  OrigDataType: word16
T_122: (in si_172 : word16)
  Class: Eq_122
  DataType: (memptr (ptr Eq_3) Eq_122)
  OrigDataType: (memptr T_132 (struct 0002 (0 T_159 t0000)))
T_123: (in 0x04C4 : word16)
  Class: Eq_122
  DataType: (memptr (ptr Eq_3) Eq_122)
  OrigDataType: word16
T_124: (in ebp_174 : word32)
  Class: Eq_124
  DataType: word32
  OrigDataType: word32
T_125: (in ebp : word32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word32
T_126: (in 0x057D : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_127: (in DPB(ebp, 0x057D, 0, 16) : word32)
  Class: Eq_124
  DataType: word32
  OrigDataType: word32
T_128: (in cx_176 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in 0x04 : byte)
  Class: Eq_129
  DataType: byte
  OrigDataType: byte
T_130: (in DPB(cx_149, 0x04, 0, 8) : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_131: (in rLoc1_191 : real64)
  Class: Eq_131
  DataType: Eq_131
  OrigDataType: (union (real16 u0) (real64 u1))
T_132: (in ds : selector)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (segment (0 (arr T_930) a0000) (4C4 (arr T_924) a04C4) (4C6 (arr T_928) a04C6) (4C8 (arr T_927) a04C8) (4D2 T_673 t04D2) (4D4 T_651 t04D4) (4ED T_644 t04ED) (4EF T_707 t04EF) (4F3 (arr T_935) a04F3) (571 T_426 t0571) (575 T_9 t0575) (579 T_125 t0579) (57D T_125 t057D) (581 T_304 t0581) (5FF (arr T_176) a05FF) (603 (arr T_925) a0603) (62B T_287 t062B) (663 T_489 t0663) (667 T_483 t0667) (66B (arr T_933) a066B) (677 T_492 t0677)))
T_133: (in 0x0000 : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_134: (in di_171 + 0x0000 : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_135: (in Mem198[ds:di_171 + 0x0000:real32] : real32)
  Class: Eq_131
  DataType: Eq_131
  OrigDataType: real32
T_136: (in ch_192 : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_137: (in 0x01 : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_138: (in ch_192 - 0x01 : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_139: (in 0x0004 : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_140: (in di_171 + 0x0004 : word16)
  Class: Eq_120
  DataType: (memptr (ptr Eq_3) Eq_120)
  OrigDataType: word16
T_141: (in ss : selector)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (segment (57D T_143 t057D)))
T_142: (in 0x057D : word16)
  Class: Eq_142
  DataType: (memptr (ptr Eq_3) Eq_142)
  OrigDataType: (memptr T_141 (struct (0 T_143 t0000)))
T_143: (in Mem198[ss:0x057D:word32] : word32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word32
T_144: (in (real64) Mem198[ss:0x057D:word32] : real64)
  Class: Eq_144
  DataType: Eq_144
  OrigDataType: (union (real16 u0) (real64 u1))
T_145: (in rLoc1_191 * (real64) Mem198[ss:0x057D:word32] : word16)
  Class: Eq_131
  DataType: Eq_131
  OrigDataType: real16
T_146: (in cx_193 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_147: (in DPB(cx_193, ch_192, 8, 8) : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_148: (in 0x00 : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_149: (in ch_192 != 0x00 : bool)
  Class: Eq_149
  DataType: bool
  OrigDataType: bool
T_150: (in si_188 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_151: (in 0x0002 : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_152: (in si_188 + 0x0002 : word16)
  Class: Eq_122
  DataType: (memptr (ptr Eq_3) Eq_122)
  OrigDataType: word16
T_153: (in 0x0001 : word16)
  Class: Eq_153
  DataType: word16
  OrigDataType: word16
T_154: (in cx_193 - 0x0001 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_155: (in 0x0001 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_156: (in cx_193 != 0x0001 : bool)
  Class: Eq_156
  DataType: bool
  OrigDataType: bool
T_157: (in 0x0000 : word16)
  Class: Eq_157
  DataType: word16
  OrigDataType: word16
T_158: (in si_172 + 0x0000 : word16)
  Class: Eq_158
  DataType: word16
  OrigDataType: word16
T_159: (in Mem127[ds:si_172 + 0x0000:word16] : word16)
  Class: Eq_159
  DataType: word16
  OrigDataType: word16
T_160: (in (word32) Mem127[ds:si_172 + 0x0000:word16] : word32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word32
T_161: (in 0x057D : word16)
  Class: Eq_161
  DataType: (memptr (ptr Eq_3) Eq_161)
  OrigDataType: (memptr T_132 (struct (0 T_162 t0000)))
T_162: (in Mem189[ds:0x057D:word32] : word32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word32
T_163: (in 0x0002 : word16)
  Class: Eq_163
  DataType: word16
  OrigDataType: word16
T_164: (in si_172 + 0x0002 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_165: (in 0x057D : word16)
  Class: Eq_165
  DataType: (memptr (ptr Eq_3) Eq_165)
  OrigDataType: (memptr T_141 (struct (0 T_166 t0000)))
T_166: (in Mem189[ss:0x057D:int32] : int32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: int32
T_167: (in (real64) Mem189[ss:0x057D:int32] : real64)
  Class: Eq_131
  DataType: Eq_131
  OrigDataType: real64
T_168: (in 0x06 : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_169: (in 0x06 : byte)
  Class: Eq_169
  DataType: byte
  OrigDataType: byte
T_170: (in DPB(cx_176, 0x06, 8, 8) : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_171: (in cx_193 - 0x0001 : word16)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word16
T_172: (in 0x057D : word16)
  Class: Eq_172
  DataType: (memptr (ptr Eq_3) Eq_172)
  OrigDataType: (memptr T_141 (struct (0 T_173 t0000)))
T_173: (in Mem211[ss:0x057D:word16] : word16)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word16
T_174: (in 0x057D : word16)
  Class: Eq_174
  DataType: (memptr (ptr Eq_3) Eq_174)
  OrigDataType: (memptr T_141 (struct (0 T_175 t0000)))
T_175: (in Mem211[ss:0x057D:int32] : int32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: int32
T_176: (in (real64) Mem211[ss:0x057D:int32] : real64)
  Class: Eq_176
  DataType: Eq_176
  OrigDataType: real64
T_177: (in 0x05FF : word16)
  Class: Eq_177
  DataType: (memptr (ptr Eq_3) Eq_177)
  OrigDataType: (memptr T_132 (struct (0 T_178 t0000)))
T_178: (in Mem215[ds:0x05FF:real32] : real32)
  Class: Eq_176
  DataType: Eq_176
  OrigDataType: real32
T_179: (in si_212 : word16)
  Class: Eq_179
  DataType: (memptr (ptr Eq_3) Eq_179)
  OrigDataType: word16
T_180: (in 0x059F : word16)
  Class: Eq_179
  DataType: (memptr (ptr Eq_3) Eq_179)
  OrigDataType: word16
T_181: (in di_216 : word16)
  Class: Eq_181
  DataType: (memptr (ptr Eq_3) Eq_181)
  OrigDataType: (memptr T_132 (struct 0004 (0 T_204 t0000)))
T_182: (in 0x0603 : word16)
  Class: Eq_181
  DataType: (memptr (ptr Eq_3) Eq_181)
  OrigDataType: word16
T_183: (in cx_219 : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_184: (in cx_193 - 0x0001 : word16)
  Class: Eq_184
  DataType: word16
  OrigDataType: word16
T_185: (in 0x06 : byte)
  Class: Eq_185
  DataType: byte
  OrigDataType: byte
T_186: (in DPB(cx_193 - 0x0001, 0x06, 0, 8) : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_187: (in si_234 : word16)
  Class: Eq_179
  DataType: (memptr (ptr Eq_3) Eq_179)
  OrigDataType: (memptr T_132 (struct 0018 (0 T_194 t0000)))
T_188: (in ch_231 : byte)
  Class: Eq_188
  DataType: byte
  OrigDataType: byte
T_189: (in 0x01 : byte)
  Class: Eq_189
  DataType: byte
  OrigDataType: byte
T_190: (in ch_231 - 0x01 : byte)
  Class: Eq_188
  DataType: byte
  OrigDataType: byte
T_191: (in rLoc2_230 : real64)
  Class: Eq_191
  DataType: Eq_191
  OrigDataType: (union (real16 u0) (real64 u1))
T_192: (in 0x0000 : word16)
  Class: Eq_192
  DataType: word16
  OrigDataType: word16
T_193: (in si_234 + 0x0000 : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_194: (in Mem215[ds:si_234 + 0x0000:real32] : real32)
  Class: Eq_194
  DataType: Eq_194
  OrigDataType: (union (real16 u0) (real32 u1))
T_195: (in rLoc2_230 + Mem215[ds:si_234 + 0x0000:real32] : word16)
  Class: Eq_191
  DataType: Eq_191
  OrigDataType: real16
T_196: (in 0x0018 : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_197: (in si_234 + 0x0018 : word16)
  Class: Eq_179
  DataType: (memptr (ptr Eq_3) Eq_179)
  OrigDataType: word16
T_198: (in cx_232 : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_199: (in DPB(cx_232, ch_231, 8, 8) : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_200: (in 0x00 : byte)
  Class: Eq_188
  DataType: byte
  OrigDataType: byte
T_201: (in ch_231 != 0x00 : bool)
  Class: Eq_201
  DataType: bool
  OrigDataType: bool
T_202: (in 0x0000 : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_203: (in di_216 + 0x0000 : word16)
  Class: Eq_203
  DataType: word16
  OrigDataType: word16
T_204: (in Mem244[ds:di_216 + 0x0000:real32] : real32)
  Class: Eq_191
  DataType: Eq_191
  OrigDataType: real32
T_205: (in 0x0004 : word16)
  Class: Eq_205
  DataType: word16
  OrigDataType: word16
T_206: (in di_216 + 0x0004 : word16)
  Class: Eq_181
  DataType: (memptr (ptr Eq_3) Eq_181)
  OrigDataType: word16
T_207: (in 0x0004 : word16)
  Class: Eq_207
  DataType: word16
  OrigDataType: word16
T_208: (in si_212 + 0x0004 : word16)
  Class: Eq_179
  DataType: (memptr (ptr Eq_3) Eq_179)
  OrigDataType: word16
T_209: (in 0x0001 : word16)
  Class: Eq_209
  DataType: word16
  OrigDataType: word16
T_210: (in cx_232 - 0x0001 : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_211: (in 0x0001 : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_212: (in cx_232 != 0x0001 : bool)
  Class: Eq_212
  DataType: bool
  OrigDataType: bool
T_213: (in 0 : real64)
  Class: Eq_191
  DataType: Eq_191
  OrigDataType: real64
T_214: (in 0x04 : byte)
  Class: Eq_188
  DataType: byte
  OrigDataType: byte
T_215: (in 0x04 : byte)
  Class: Eq_215
  DataType: byte
  OrigDataType: byte
T_216: (in DPB(cx_219, 0x04, 8, 8) : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_217: (in di_254 : word16)
  Class: Eq_217
  DataType: (memptr (ptr Eq_3) Eq_217)
  OrigDataType: (memptr T_19 (struct 0004 (0 T_225 t0000)))
T_218: (in 0x061B : word16)
  Class: Eq_217
  DataType: (memptr (ptr Eq_3) Eq_217)
  OrigDataType: word16
T_219: (in si_255 : word16)
  Class: Eq_219
  DataType: (memptr (ptr Eq_3) Eq_219)
  OrigDataType: (memptr T_132 (struct 0004 (0 T_225 t0000)))
T_220: (in 0x05FF : word16)
  Class: Eq_219
  DataType: (memptr (ptr Eq_3) Eq_219)
  OrigDataType: word16
T_221: (in dl_256 : byte)
  Class: Eq_221
  DataType: byte
  OrigDataType: byte
T_222: (in 0x04 : byte)
  Class: Eq_221
  DataType: byte
  OrigDataType: byte
T_223: (in 0x0000 : word16)
  Class: Eq_223
  DataType: word16
  OrigDataType: word16
T_224: (in si_255 + 0x0000 : word16)
  Class: Eq_224
  DataType: word16
  OrigDataType: word16
T_225: (in Mem244[ds:si_255 + 0x0000:word32] : word32)
  Class: Eq_225
  DataType: word32
  OrigDataType: word32
T_226: (in 0x0000 : word16)
  Class: Eq_226
  DataType: word16
  OrigDataType: word16
T_227: (in di_254 + 0x0000 : word16)
  Class: Eq_227
  DataType: word16
  OrigDataType: word16
T_228: (in Mem285[es_31:di_254 + 0x0000:word32] : word32)
  Class: Eq_225
  DataType: word32
  OrigDataType: word32
T_229: (in 0x0004 : word16)
  Class: Eq_229
  DataType: word16
  OrigDataType: word16
T_230: (in si_255 + 0x0004 : word16)
  Class: Eq_219
  DataType: (memptr (ptr Eq_3) Eq_219)
  OrigDataType: word16
T_231: (in 0x0004 : word16)
  Class: Eq_231
  DataType: word16
  OrigDataType: word16
T_232: (in di_254 + 0x0004 : word16)
  Class: Eq_217
  DataType: (memptr (ptr Eq_3) Eq_217)
  OrigDataType: word16
T_233: (in 0x01 : byte)
  Class: Eq_233
  DataType: byte
  OrigDataType: byte
T_234: (in dl_256 - 0x01 : byte)
  Class: Eq_221
  DataType: byte
  OrigDataType: byte
T_235: (in 0x00 : byte)
  Class: Eq_221
  DataType: byte
  OrigDataType: byte
T_236: (in dl_256 != 0x00 : bool)
  Class: Eq_236
  DataType: bool
  OrigDataType: bool
T_237: (in si_270 : word16)
  Class: Eq_219
  DataType: (memptr (ptr Eq_3) Eq_219)
  OrigDataType: (memptr T_132 (struct 0004 (0 T_225 t0000)))
T_238: (in 0x0000 : word16)
  Class: Eq_238
  DataType: word16
  OrigDataType: word16
T_239: (in si_270 + 0x0000 : word16)
  Class: Eq_239
  DataType: word16
  OrigDataType: word16
T_240: (in Mem244[ds:si_270 + 0x0000:word32] : word32)
  Class: Eq_225
  DataType: word32
  OrigDataType: word32
T_241: (in 0x0000 : word16)
  Class: Eq_241
  DataType: word16
  OrigDataType: word16
T_242: (in di_254 + 0x0000 : word16)
  Class: Eq_242
  DataType: word16
  OrigDataType: word16
T_243: (in Mem276[es_31:di_254 + 0x0000:word32] : word32)
  Class: Eq_225
  DataType: word32
  OrigDataType: word32
T_244: (in 0x0004 : word16)
  Class: Eq_244
  DataType: word16
  OrigDataType: word16
T_245: (in si_270 + 0x0004 : word16)
  Class: Eq_219
  DataType: (memptr (ptr Eq_3) Eq_219)
  OrigDataType: word16
T_246: (in 0x0004 : word16)
  Class: Eq_246
  DataType: word16
  OrigDataType: word16
T_247: (in di_254 + 0x0004 : word16)
  Class: Eq_217
  DataType: (memptr (ptr Eq_3) Eq_217)
  OrigDataType: word16
T_248: (in 0x0001 : word16)
  Class: Eq_248
  DataType: word16
  OrigDataType: word16
T_249: (in cx_219 - 0x0001 : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_250: (in 0x0000 : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_251: (in cx_219 == 0x0000 : bool)
  Class: Eq_251
  DataType: bool
  OrigDataType: bool
T_252: (in 0x04 : byte)
  Class: Eq_252
  DataType: byte
  OrigDataType: byte
T_253: (in DPB(cx_219, 0x04, 0, 8) : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_254: (in si_292 : word16)
  Class: Eq_254
  DataType: (memptr (ptr Eq_3) Eq_254)
  OrigDataType: (memptr T_132 (struct 0002 (0 T_265 t0000)))
T_255: (in 0x04C8 : word16)
  Class: Eq_254
  DataType: (memptr (ptr Eq_3) Eq_254)
  OrigDataType: word16
T_256: (in eax_293 : word32)
  Class: Eq_256
  DataType: word32
  OrigDataType: word32
T_257: (in 0x00000000 : word32)
  Class: Eq_256
  DataType: word32
  OrigDataType: word32
T_258: (in rLoc2_299 : real64)
  Class: Eq_258
  DataType: Eq_258
  OrigDataType: (union (real16 u0) (real64 u1))
T_259: (in 0 : real64)
  Class: Eq_258
  DataType: Eq_258
  OrigDataType: real64
T_260: (in cx_301 : word16)
  Class: Eq_260
  DataType: word16
  OrigDataType: word16
T_261: (in 0x04 : byte)
  Class: Eq_261
  DataType: byte
  OrigDataType: byte
T_262: (in DPB(cx_219, 0x04, 0, 8) : word16)
  Class: Eq_260
  DataType: word16
  OrigDataType: word16
T_263: (in 0x0000 : word16)
  Class: Eq_263
  DataType: word16
  OrigDataType: word16
T_264: (in si_292 + 0x0000 : word16)
  Class: Eq_264
  DataType: word16
  OrigDataType: word16
T_265: (in Mem285[ds:si_292 + 0x0000:word16] : word16)
  Class: Eq_265
  DataType: word16
  OrigDataType: word16
T_266: (in DPB(eax_293, Mem285[ds:si_292 + 0x0000:word16], 0, 16) : word32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word32
T_267: (in 0x057D : word16)
  Class: Eq_267
  DataType: (memptr (ptr Eq_3) Eq_267)
  OrigDataType: (memptr T_141 (struct (0 T_268 t0000)))
T_268: (in Mem309[ss:0x057D:word32] : word32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word32
T_269: (in si_308 : word16)
  Class: Eq_269
  DataType: (memptr (ptr Eq_3) Eq_269)
  OrigDataType: (memptr T_132 (struct (0 T_278 t0000)))
T_270: (in 0x0000 : word16)
  Class: Eq_270
  DataType: word16
  OrigDataType: word16
T_271: (in si_292 + 0x0000 : word16)
  Class: Eq_269
  DataType: (memptr (ptr Eq_3) Eq_269)
  OrigDataType: word16
T_272: (in 0x057D : word16)
  Class: Eq_272
  DataType: (memptr (ptr Eq_3) Eq_272)
  OrigDataType: (memptr T_141 (struct (0 T_273 t0000)))
T_273: (in Mem309[ss:0x057D:word32] : word32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word32
T_274: (in (real64) Mem309[ss:0x057D:word32] : real64)
  Class: Eq_274
  DataType: Eq_274
  OrigDataType: (union (real16 u0) (real64 u1))
T_275: (in rLoc2_299 + (real64) Mem309[ss:0x057D:word32] : word16)
  Class: Eq_258
  DataType: Eq_258
  OrigDataType: real16
T_276: (in 0x0000 : word16)
  Class: Eq_276
  DataType: word16
  OrigDataType: word16
T_277: (in si_308 + 0x0000 : word16)
  Class: Eq_277
  DataType: word16
  OrigDataType: word16
T_278: (in Mem309[ds:si_308 + 0x0000:word16] : word16)
  Class: Eq_278
  DataType: word16
  OrigDataType: word16
T_279: (in DPB(eax_293, Mem309[ds:si_308 + 0x0000:word16], 0, 16) : word32)
  Class: Eq_256
  DataType: word32
  OrigDataType: word32
T_280: (in 0x0002 : word16)
  Class: Eq_280
  DataType: word16
  OrigDataType: word16
T_281: (in si_308 + 0x0002 : word16)
  Class: Eq_254
  DataType: (memptr (ptr Eq_3) Eq_254)
  OrigDataType: word16
T_282: (in 0x0001 : word16)
  Class: Eq_282
  DataType: word16
  OrigDataType: word16
T_283: (in cx_301 - 0x0001 : word16)
  Class: Eq_260
  DataType: word16
  OrigDataType: word16
T_284: (in 0x0000 : word16)
  Class: Eq_260
  DataType: word16
  OrigDataType: word16
T_285: (in cx_301 != 0x0000 : bool)
  Class: Eq_285
  DataType: bool
  OrigDataType: bool
T_286: (in 0x062B : word16)
  Class: Eq_286
  DataType: (memptr (ptr Eq_3) Eq_286)
  OrigDataType: (memptr T_132 (struct (0 T_287 t0000)))
T_287: (in Mem319[ds:0x062B:real32] : real32)
  Class: Eq_258
  DataType: Eq_258
  OrigDataType: real32
T_288: (in cl_320 : byte)
  Class: Eq_288
  DataType: byte
  OrigDataType: byte
T_289: (in 0x00 : byte)
  Class: Eq_288
  DataType: byte
  OrigDataType: byte
T_290: (in cx_321 : word16)
  Class: Eq_290
  DataType: word16
  OrigDataType: word16
T_291: (in 0x00 : byte)
  Class: Eq_291
  DataType: byte
  OrigDataType: byte
T_292: (in DPB(cx_301, 0x00, 0, 8) : word16)
  Class: Eq_290
  DataType: word16
  OrigDataType: word16
T_293: (in si_338 : word16)
  Class: Eq_293
  DataType: (memptr (ptr Eq_3) Eq_293)
  OrigDataType: (memptr T_132 (struct 0004 (0 T_296 t0000)))
T_294: (in 0x0000 : word16)
  Class: Eq_294
  DataType: word16
  OrigDataType: word16
T_295: (in si_338 + 0x0000 : word16)
  Class: Eq_295
  DataType: word16
  OrigDataType: word16
T_296: (in Mem337[ds:si_338 + 0x0000:int16] : int16)
  Class: Eq_296
  DataType: int16
  OrigDataType: int16
T_297: (in (real64) Mem337[ds:si_338 + 0x0000:int16] : real64)
  Class: Eq_297
  DataType: Eq_297
  OrigDataType: (union (real16 u0) (real64 u1))
T_298: (in bp_344 : word16)
  Class: Eq_298
  DataType: (memptr (ptr Eq_3) Eq_298)
  OrigDataType: (memptr T_141 (struct 0018 (0 T_301 t0000)))
T_299: (in 0x0000 : word16)
  Class: Eq_299
  DataType: word16
  OrigDataType: word16
T_300: (in bp_344 + 0x0000 : word16)
  Class: Eq_300
  DataType: word16
  OrigDataType: word16
T_301: (in Mem337[ss:bp_344 + 0x0000:real32] : real32)
  Class: Eq_301
  DataType: Eq_301
  OrigDataType: (union (real16 u0) (real32 u1))
T_302: (in (real64) Mem337[ds:si_338 + 0x0000:int16] * Mem337[ss:bp_344 + 0x0000:real32] : word16)
  Class: Eq_302
  DataType: real16
  OrigDataType: real16
T_303: (in 0x0581 : word16)
  Class: Eq_303
  DataType: (memptr (ptr Eq_3) Eq_303)
  OrigDataType: (memptr T_132 (struct (0 T_304 t0000)))
T_304: (in Mem337[ds:0x0581:real32] : real32)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: (union (real16 u0) (real32 u1))
T_305: (in (real64) Mem337[ds:si_338 + 0x0000:int16] * Mem337[ss:bp_344 + 0x0000:real32] + Mem337[ds:0x0581:real32] : word16)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: real16
T_306: (in 0x0581 : word16)
  Class: Eq_306
  DataType: (memptr (ptr Eq_3) Eq_306)
  OrigDataType: (memptr T_132 (struct (0 T_307 t0000)))
T_307: (in Mem357[ds:0x0581:real32] : real32)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: real32
T_308: (in 0x0018 : word16)
  Class: Eq_308
  DataType: word16
  OrigDataType: word16
T_309: (in bp_344 + 0x0018 : word16)
  Class: Eq_298
  DataType: (memptr (ptr Eq_3) Eq_298)
  OrigDataType: word16
T_310: (in ch_347 : byte)
  Class: Eq_310
  DataType: byte
  OrigDataType: byte
T_311: (in 0x01 : byte)
  Class: Eq_311
  DataType: byte
  OrigDataType: byte
T_312: (in ch_347 - 0x01 : byte)
  Class: Eq_310
  DataType: byte
  OrigDataType: byte
T_313: (in 0x0004 : word16)
  Class: Eq_313
  DataType: word16
  OrigDataType: word16
T_314: (in si_338 + 0x0004 : word16)
  Class: Eq_293
  DataType: (memptr (ptr Eq_3) Eq_293)
  OrigDataType: word16
T_315: (in DPB(ebp_174, bp_344, 0, 16) : word32)
  Class: Eq_124
  DataType: word32
  OrigDataType: word32
T_316: (in cx_348 : word16)
  Class: Eq_316
  DataType: word16
  OrigDataType: word16
T_317: (in DPB(cx_348, ch_347, 8, 8) : word16)
  Class: Eq_316
  DataType: word16
  OrigDataType: word16
T_318: (in 0x00 : byte)
  Class: Eq_310
  DataType: byte
  OrigDataType: byte
T_319: (in ch_347 != 0x00 : bool)
  Class: Eq_319
  DataType: bool
  OrigDataType: bool
T_320: (in di_367 : word16)
  Class: Eq_320
  DataType: (memptr (ptr Eq_3) Eq_320)
  OrigDataType: (memptr T_19 (struct 0014 (0 T_327 t0000)))
T_321: (in 0x063F : word16)
  Class: Eq_320
  DataType: (memptr (ptr Eq_3) Eq_320)
  OrigDataType: word16
T_322: (in ax_368 : word16)
  Class: Eq_316
  DataType: word16
  OrigDataType: word16
T_323: (in 0x0581 : word16)
  Class: Eq_323
  DataType: (memptr (ptr Eq_3) Eq_323)
  OrigDataType: (memptr T_132 (struct (0 T_324 t0000)))
T_324: (in Mem357[ds:0x0581:word32] : word32)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: word32
T_325: (in 0x0000 : word16)
  Class: Eq_325
  DataType: word16
  OrigDataType: word16
T_326: (in di_367 + 0x0000 : word16)
  Class: Eq_326
  DataType: word16
  OrigDataType: word16
T_327: (in Mem391[es_31:di_367 + 0x0000:word32] : word32)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: word32
T_328: (in 0x01 : byte)
  Class: Eq_328
  DataType: byte
  OrigDataType: byte
T_329: (in cl_320 + 0x01 : byte)
  Class: Eq_288
  DataType: byte
  OrigDataType: byte
T_330: (in DPB(cx_348, cl_320, 0, 8) : word16)
  Class: Eq_290
  DataType: word16
  OrigDataType: word16
T_331: (in ebx_897 : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_332: (in 0x03 : byte)
  Class: Eq_288
  DataType: byte
  OrigDataType: byte
T_333: (in cl_320 != 0x03 : bool)
  Class: Eq_333
  DataType: bool
  OrigDataType: bool
T_334: (in 0x0014 : word16)
  Class: Eq_334
  DataType: word16
  OrigDataType: word16
T_335: (in di_367 + 0x0014 : word16)
  Class: Eq_320
  DataType: (memptr (ptr Eq_3) Eq_320)
  OrigDataType: word16
T_336: (in 0x0001 : word16)
  Class: Eq_336
  DataType: word16
  OrigDataType: word16
T_337: (in ax_368 - 0x0001 : word16)
  Class: Eq_316
  DataType: word16
  OrigDataType: word16
T_338: (in 0x0000 : word16)
  Class: Eq_316
  DataType: word16
  OrigDataType: word16
T_339: (in ax_368 == 0x0000 : bool)
  Class: Eq_339
  DataType: bool
  OrigDataType: bool
T_340: (in 0 : real64)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: real64
T_341: (in 0x0581 : word16)
  Class: Eq_341
  DataType: (memptr (ptr Eq_3) Eq_341)
  OrigDataType: (memptr T_132 (struct (0 T_342 t0000)))
T_342: (in Mem337[ds:0x0581:real32] : real32)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: real32
T_343: (in bx_341 : word16)
  Class: Eq_343
  DataType: ui16
  OrigDataType: word16
T_344: (in 0x0002 : word16)
  Class: Eq_344
  DataType: word16
  OrigDataType: word16
T_345: (in cx_321 << 0x0002 : word16)
  Class: Eq_343
  DataType: ui16
  OrigDataType: ui16
T_346: (in 0x04C6 : word16)
  Class: Eq_293
  DataType: (memptr (ptr Eq_3) Eq_293)
  OrigDataType: word16
T_347: (in DPB(ebx_897, bx_341, 0, 16) : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_348: (in 0x059F : word16)
  Class: Eq_348
  DataType: word16
  OrigDataType: word16
T_349: (in bx_341 + 0x059F : word16)
  Class: Eq_298
  DataType: (memptr (ptr Eq_3) Eq_298)
  OrigDataType: word16
T_350: (in bx_341 + 0x059F : word16)
  Class: Eq_350
  DataType: word16
  OrigDataType: word16
T_351: (in DPB(ebp_174, bx_341 + 0x059F, 0, 16) : word32)
  Class: Eq_124
  DataType: word32
  OrigDataType: word32
T_352: (in 0x04 : byte)
  Class: Eq_310
  DataType: byte
  OrigDataType: byte
T_353: (in 0x04 : byte)
  Class: Eq_353
  DataType: byte
  OrigDataType: byte
T_354: (in DPB(cx_321, 0x04, 8, 8) : word16)
  Class: Eq_316
  DataType: word16
  OrigDataType: word16
T_355: (in 0x061B : word16)
  Class: Eq_355
  DataType: word16
  OrigDataType: word16
T_356: (in DPB(ebx_897, 0x061B, 0, 16) : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_357: (in cl_400 : byte)
  Class: Eq_357
  DataType: uint8
  OrigDataType: uint8
T_358: (in 0x01 : byte)
  Class: Eq_357
  DataType: uint8
  OrigDataType: byte
T_359: (in cx_401 : word16)
  Class: Eq_359
  DataType: word16
  OrigDataType: word16
T_360: (in 0x00 : byte)
  Class: Eq_360
  DataType: byte
  OrigDataType: byte
T_361: (in DPB(cx_348, 0x00, 0, 8) : word16)
  Class: Eq_359
  DataType: word16
  OrigDataType: word16
T_362: (in ax_433 : word16)
  Class: Eq_362
  DataType: uint16
  OrigDataType: word16
T_363: (in 0x05 : byte)
  Class: Eq_363
  DataType: uint8
  OrigDataType: uint8
T_364: (in cl_400 *u 0x05 : uint16)
  Class: Eq_362
  DataType: uint16
  OrigDataType: uint16
T_365: (in si_440 : word16)
  Class: Eq_365
  DataType: (memptr (ptr Eq_3) Eq_365)
  OrigDataType: (memptr T_132 (struct (0 T_378 t0000)))
T_366: (in 0x0002 : word16)
  Class: Eq_366
  DataType: word16
  OrigDataType: word16
T_367: (in ax_433 << 0x0002 : word16)
  Class: Eq_367
  DataType: ui16
  OrigDataType: ui16
T_368: (in 0x061B : word16)
  Class: Eq_368
  DataType: word16
  OrigDataType: word16
T_369: (in (ax_433 << 0x0002) + 0x061B : word16)
  Class: Eq_369
  DataType: word16
  OrigDataType: word16
T_370: (in ax_433 << 0x0002 : word16)
  Class: Eq_370
  DataType: ui16
  OrigDataType: ui16
T_371: (in ch_428 : byte)
  Class: Eq_371
  DataType: byte
  OrigDataType: byte
T_372: (in DPB(ax_433 << 0x0002, ch_428, 0, 8) : word16)
  Class: Eq_372
  DataType: word16
  OrigDataType: word16
T_373: (in 0x0002 : word16)
  Class: Eq_373
  DataType: word16
  OrigDataType: word16
T_374: (in DPB(ax_433 << 0x0002, ch_428, 0, 8) << 0x0002 : word16)
  Class: Eq_374
  DataType: ui16
  OrigDataType: ui16
T_375: (in (ax_433 << 0x0002) + 0x061B + (DPB(ax_433 << 0x0002, ch_428, 0, 8) << 0x0002) : word16)
  Class: Eq_365
  DataType: (memptr (ptr Eq_3) Eq_365)
  OrigDataType: word16
T_376: (in 0x0000 : word16)
  Class: Eq_376
  DataType: word16
  OrigDataType: word16
T_377: (in si_440 + 0x0000 : word16)
  Class: Eq_377
  DataType: word16
  OrigDataType: word16
T_378: (in Mem391[ds:si_440 + 0x0000:real32] : real32)
  Class: Eq_378
  DataType: Eq_378
  OrigDataType: (union (real16 u0) (real32 u1))
T_379: (in si_425 : word16)
  Class: Eq_379
  DataType: (memptr (ptr Eq_3) Eq_379)
  OrigDataType: (memptr T_132 (struct (0 T_382 t0000)))
T_380: (in 0x0000 : word16)
  Class: Eq_380
  DataType: word16
  OrigDataType: word16
T_381: (in si_425 + 0x0000 : word16)
  Class: Eq_381
  DataType: word16
  OrigDataType: word16
T_382: (in Mem391[ds:si_425 + 0x0000:real32] : real32)
  Class: Eq_382
  DataType: Eq_382
  OrigDataType: (union (real16 u0) (real32 u1))
T_383: (in Mem391[ds:si_440 + 0x0000:real32] / Mem391[ds:si_425 + 0x0000:real32] : word16)
  Class: Eq_378
  DataType: Eq_378
  OrigDataType: real16
T_384: (in 0x0000 : word16)
  Class: Eq_384
  DataType: word16
  OrigDataType: word16
T_385: (in si_440 + 0x0000 : word16)
  Class: Eq_385
  DataType: word16
  OrigDataType: word16
T_386: (in Mem444[ds:si_440 + 0x0000:real32] : real32)
  Class: Eq_378
  DataType: Eq_378
  OrigDataType: real32
T_387: (in 0x01 : byte)
  Class: Eq_387
  DataType: byte
  OrigDataType: byte
T_388: (in ch_428 - 0x01 : byte)
  Class: Eq_371
  DataType: byte
  OrigDataType: byte
T_389: (in cx_898 : word16)
  Class: Eq_389
  DataType: word16
  OrigDataType: word16
T_390: (in DPB(cx_898, ch_428, 8, 8) : word16)
  Class: Eq_389
  DataType: word16
  OrigDataType: word16
T_391: (in cx_429 : word16)
  Class: Eq_389
  DataType: word16
  OrigDataType: word16
T_392: (in 0x00 : byte)
  Class: Eq_371
  DataType: byte
  OrigDataType: byte
T_393: (in ch_428 != 0x00 : bool)
  Class: Eq_393
  DataType: bool
  OrigDataType: bool
T_394: (in ch_450 : byte)
  Class: Eq_394
  DataType: uint8
  OrigDataType: uint8
T_395: (in 0x00 : byte)
  Class: Eq_395
  DataType: byte
  OrigDataType: byte
T_396: (in cl_400 + 0x00 : byte)
  Class: Eq_394
  DataType: uint8
  OrigDataType: byte
T_397: (in cx_451 : word16)
  Class: Eq_397
  DataType: word16
  OrigDataType: word16
T_398: (in DPB(cx_898, ch_450, 8, 8) : word16)
  Class: Eq_397
  DataType: word16
  OrigDataType: word16
T_399: (in si_483 : word16)
  Class: Eq_399
  DataType: (memptr (ptr Eq_3) Eq_399)
  OrigDataType: (memptr T_3 (struct (0 T_304 t0000)))
T_400: (in si_465 : word16)
  Class: Eq_400
  DataType: word16
  OrigDataType: word16
T_401: (in dh_473 : byte)
  Class: Eq_401
  DataType: byte
  OrigDataType: byte
T_402: (in (word16) dh_473 : word16)
  Class: Eq_402
  DataType: word16
  OrigDataType: word16
T_403: (in 0x0002 : word16)
  Class: Eq_403
  DataType: word16
  OrigDataType: word16
T_404: (in (word16) dh_473 << 0x0002 : word16)
  Class: Eq_404
  DataType: ui16
  OrigDataType: ui16
T_405: (in si_465 + ((word16) dh_473 << 0x0002) : word16)
  Class: Eq_399
  DataType: (memptr (ptr Eq_3) Eq_399)
  OrigDataType: word16
T_406: (in 0x0000 : word16)
  Class: Eq_406
  DataType: word16
  OrigDataType: word16
T_407: (in si_483 + 0x0000 : word16)
  Class: Eq_407
  DataType: word16
  OrigDataType: word16
T_408: (in Mem472[ds:si_483 + 0x0000:word32] : word32)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: word32
T_409: (in 0x0581 : word16)
  Class: Eq_409
  DataType: (memptr (ptr Eq_3) Eq_409)
  OrigDataType: (memptr T_132 (struct (0 T_410 t0000)))
T_410: (in Mem485[ds:0x0581:word32] : word32)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: word32
T_411: (in ax_489 : word16)
  Class: Eq_411
  DataType: uint16
  OrigDataType: word16
T_412: (in 0x05 : byte)
  Class: Eq_412
  DataType: uint8
  OrigDataType: uint8
T_413: (in cl_400 *u 0x05 : uint16)
  Class: Eq_411
  DataType: uint16
  OrigDataType: uint16
T_414: (in rLoc2_498 : real64)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: real64
T_415: (in 0x0002 : word16)
  Class: Eq_415
  DataType: word16
  OrigDataType: word16
T_416: (in ax_489 << 0x0002 : word16)
  Class: Eq_416
  DataType: ui16
  OrigDataType: ui16
T_417: (in 0x061B : word16)
  Class: Eq_417
  DataType: word16
  OrigDataType: word16
T_418: (in (ax_489 << 0x0002) + 0x061B : word16)
  Class: Eq_418
  DataType: word16
  OrigDataType: word16
T_419: (in SEQ(ds, (ax_489 << 0x0002) + 0x061B) : ptr32)
  Class: Eq_419
  DataType: ptr32
  OrigDataType: ptr32
T_420: (in ax_489 << 0x0002 : word16)
  Class: Eq_420
  DataType: ui16
  OrigDataType: ui16
T_421: (in DPB(ax_489 << 0x0002, dh_473, 0, 8) : word16)
  Class: Eq_421
  DataType: ui16
  OrigDataType: ui16
T_422: (in 0x0004 : word16)
  Class: Eq_422
  DataType: ui16
  OrigDataType: ui16
T_423: (in DPB(ax_489 << 0x0002, dh_473, 0, 8) * 0x0004 : word16)
  Class: Eq_423
  DataType: ui16
  OrigDataType: ui16
T_424: (in SEQ(ds, (ax_489 << 0x0002) + 0x061B)[DPB(ax_489 << 0x0002, dh_473, 0, 8) * 0x0004] : real32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: (union (real16 u0) (real32 u1))
T_425: (in 0x0571 : word16)
  Class: Eq_425
  DataType: (memptr (ptr Eq_3) Eq_425)
  OrigDataType: (memptr T_132 (struct (0 T_426 t0000)))
T_426: (in Mem485[ds:0x0571:real32] : real32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: (union (real16 u0) (real32 u1))
T_427: (in SEQ(ds, (ax_489 << 0x0002) + 0x061B)[DPB(ax_489 << 0x0002, dh_473, 0, 8) * 0x0004] * Mem485[ds:0x0571:real32] : word16)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: real16
T_428: (in 0x0581 : word16)
  Class: Eq_428
  DataType: (memptr (ptr Eq_3) Eq_428)
  OrigDataType: (memptr T_132 (struct (0 T_304 t0000)))
T_429: (in Mem485[ds:0x0581:real32] : real32)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: real32
T_430: (in Mem485[ds:0x0581:real32] - rLoc2_498 : word16)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: word16
T_431: (in Mem500[ds:0x0581:real32] : real32)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: real32
T_432: (in 0x0000 : word16)
  Class: Eq_432
  DataType: word16
  OrigDataType: word16
T_433: (in si_483 + 0x0000 : word16)
  Class: Eq_433
  DataType: word16
  OrigDataType: word16
T_434: (in Mem501[ss:si_483 + 0x0000:real32] : real32)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: real32
T_435: (in ebp_899 : word32)
  Class: Eq_124
  DataType: word32
  OrigDataType: word32
T_436: (in DPB(ebp_899, si_483, 0, 16) : word32)
  Class: Eq_124
  DataType: word32
  OrigDataType: word32
T_437: (in 0x01 : byte)
  Class: Eq_437
  DataType: byte
  OrigDataType: byte
T_438: (in dh_473 + 0x01 : byte)
  Class: Eq_401
  DataType: byte
  OrigDataType: byte
T_439: (in 0x05 : byte)
  Class: Eq_401
  DataType: byte
  OrigDataType: byte
T_440: (in dh_473 != 0x05 : bool)
  Class: Eq_440
  DataType: bool
  OrigDataType: bool
T_441: (in 0x01 : byte)
  Class: Eq_441
  DataType: byte
  OrigDataType: byte
T_442: (in ch_450 + 0x01 : byte)
  Class: Eq_394
  DataType: uint8
  OrigDataType: byte
T_443: (in DPB(cx_451, ch_450, 8, 8) : word16)
  Class: Eq_397
  DataType: word16
  OrigDataType: word16
T_444: (in 0x04 : byte)
  Class: Eq_394
  DataType: uint8
  OrigDataType: byte
T_445: (in ch_450 != 0x04 : bool)
  Class: Eq_445
  DataType: bool
  OrigDataType: bool
T_446: (in ax_462 : word16)
  Class: Eq_446
  DataType: uint16
  OrigDataType: word16
T_447: (in 0x05 : byte)
  Class: Eq_447
  DataType: uint8
  OrigDataType: uint8
T_448: (in ch_450 *u 0x05 : uint16)
  Class: Eq_446
  DataType: uint16
  OrigDataType: uint16
T_449: (in 0x0002 : word16)
  Class: Eq_449
  DataType: word16
  OrigDataType: word16
T_450: (in ax_462 << 0x0002 : word16)
  Class: Eq_450
  DataType: ui16
  OrigDataType: ui16
T_451: (in 0x061B : word16)
  Class: Eq_451
  DataType: word16
  OrigDataType: word16
T_452: (in (ax_462 << 0x0002) + 0x061B : word16)
  Class: Eq_400
  DataType: word16
  OrigDataType: word16
T_453: (in SEQ(ds, si_465) : ptr32)
  Class: Eq_453
  DataType: ptr32
  OrigDataType: ptr32
T_454: (in ax_462 << 0x0002 : word16)
  Class: Eq_454
  DataType: ui16
  OrigDataType: ui16
T_455: (in DPB(ax_462 << 0x0002, cl_400, 0, 8) : word16)
  Class: Eq_455
  DataType: ui16
  OrigDataType: ui16
T_456: (in 0x0004 : word16)
  Class: Eq_456
  DataType: ui16
  OrigDataType: ui16
T_457: (in DPB(ax_462 << 0x0002, cl_400, 0, 8) * 0x0004 : word16)
  Class: Eq_457
  DataType: ui16
  OrigDataType: ui16
T_458: (in SEQ(ds, si_465)[DPB(ax_462 << 0x0002, cl_400, 0, 8) * 0x0004] : word32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word32
T_459: (in 0x0571 : word16)
  Class: Eq_459
  DataType: (memptr (ptr Eq_3) Eq_459)
  OrigDataType: (memptr T_132 (struct (0 T_460 t0000)))
T_460: (in Mem472[ds:0x0571:word32] : word32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word32
T_461: (in 0x00 : byte)
  Class: Eq_401
  DataType: byte
  OrigDataType: byte
T_462: (in 0x01 : byte)
  Class: Eq_462
  DataType: byte
  OrigDataType: byte
T_463: (in cl_400 + 0x01 : byte)
  Class: Eq_357
  DataType: uint8
  OrigDataType: byte
T_464: (in DPB(cx_451, cl_400, 0, 8) : word16)
  Class: Eq_359
  DataType: word16
  OrigDataType: word16
T_465: (in 0x02 : byte)
  Class: Eq_357
  DataType: uint8
  OrigDataType: byte
T_466: (in cl_400 != 0x02 : bool)
  Class: Eq_466
  DataType: bool
  OrigDataType: bool
T_467: (in ax_418 : word16)
  Class: Eq_467
  DataType: uint16
  OrigDataType: word16
T_468: (in 0x05 : byte)
  Class: Eq_468
  DataType: uint8
  OrigDataType: uint8
T_469: (in cl_400 *u 0x05 : uint16)
  Class: Eq_467
  DataType: uint16
  OrigDataType: uint16
T_470: (in 0x0002 : word16)
  Class: Eq_470
  DataType: word16
  OrigDataType: word16
T_471: (in ax_418 << 0x0002 : word16)
  Class: Eq_471
  DataType: ui16
  OrigDataType: ui16
T_472: (in 0x061B : word16)
  Class: Eq_472
  DataType: word16
  OrigDataType: word16
T_473: (in (ax_418 << 0x0002) + 0x061B : word16)
  Class: Eq_473
  DataType: word16
  OrigDataType: word16
T_474: (in ax_418 << 0x0002 : word16)
  Class: Eq_474
  DataType: ui16
  OrigDataType: ui16
T_475: (in DPB(ax_418 << 0x0002, cl_400, 0, 8) : word16)
  Class: Eq_475
  DataType: word16
  OrigDataType: word16
T_476: (in 0x0002 : word16)
  Class: Eq_476
  DataType: word16
  OrigDataType: word16
T_477: (in DPB(ax_418 << 0x0002, cl_400, 0, 8) << 0x0002 : word16)
  Class: Eq_477
  DataType: ui16
  OrigDataType: ui16
T_478: (in (ax_418 << 0x0002) + 0x061B + (DPB(ax_418 << 0x0002, cl_400, 0, 8) << 0x0002) : word16)
  Class: Eq_379
  DataType: (memptr (ptr Eq_3) Eq_379)
  OrigDataType: word16
T_479: (in 0x04 : byte)
  Class: Eq_371
  DataType: byte
  OrigDataType: byte
T_480: (in 0x04 : byte)
  Class: Eq_480
  DataType: byte
  OrigDataType: byte
T_481: (in DPB(cx_401, 0x04, 8, 8) : word16)
  Class: Eq_389
  DataType: word16
  OrigDataType: word16
T_482: (in 0x0667 : word16)
  Class: Eq_482
  DataType: (memptr (ptr Eq_3) Eq_482)
  OrigDataType: (memptr T_132 (struct (0 T_483 t0000)))
T_483: (in Mem501[ds:0x0667:word32] : word32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word32
T_484: (in 0x057D : word16)
  Class: Eq_484
  DataType: (memptr (ptr Eq_3) Eq_484)
  OrigDataType: (memptr T_19 (struct (0 T_485 t0000)))
T_485: (in Mem517[es_31:0x057D:word32] : word32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word32
T_486: (in 0x057D : word16)
  Class: Eq_486
  DataType: (memptr (ptr Eq_3) Eq_486)
  OrigDataType: (memptr T_132 (struct (0 T_487 t0000)))
T_487: (in Mem517[ds:0x057D:real32] : real32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: (union (real16 u0) (real32 u1))
T_488: (in 0x0663 : word16)
  Class: Eq_488
  DataType: (memptr (ptr Eq_3) Eq_488)
  OrigDataType: (memptr T_132 (struct (0 T_489 t0000)))
T_489: (in Mem517[ds:0x0663:real32] : real32)
  Class: Eq_489
  DataType: Eq_489
  OrigDataType: (union (real16 u0) (real32 u1))
T_490: (in Mem517[ds:0x057D:real32] / Mem517[ds:0x0663:real32] : word16)
  Class: Eq_490
  DataType: Eq_490
  OrigDataType: real16
T_491: (in 0x0677 : word16)
  Class: Eq_491
  DataType: (memptr (ptr Eq_3) Eq_491)
  OrigDataType: (memptr T_132 (struct (0 T_492 t0000)))
T_492: (in Mem523[ds:0x0677:real32] : real32)
  Class: Eq_490
  DataType: Eq_490
  OrigDataType: real32
T_493: (in cl_526 : byte)
  Class: Eq_493
  DataType: Eq_493
  OrigDataType: (union (int8 u0) (uint8 u1))
T_494: (in 0x02 : byte)
  Class: Eq_493
  DataType: Eq_493
  OrigDataType: byte
T_495: (in cx_527 : word16)
  Class: Eq_495
  DataType: word16
  OrigDataType: word16
T_496: (in 0x02 : byte)
  Class: Eq_496
  DataType: byte
  OrigDataType: byte
T_497: (in DPB(cx_451, 0x02, 0, 8) : word16)
  Class: Eq_495
  DataType: word16
  OrigDataType: word16
T_498: (in ax_556 : word16)
  Class: Eq_498
  DataType: uint16
  OrigDataType: ui16
T_499: (in 0x05 : byte)
  Class: Eq_499
  DataType: uint8
  OrigDataType: uint8
T_500: (in cl_526 *u 0x05 : uint16)
  Class: Eq_498
  DataType: uint16
  OrigDataType: uint16
T_501: (in 0x0002 : word16)
  Class: Eq_501
  DataType: word16
  OrigDataType: word16
T_502: (in ax_556 << 0x0002 : word16)
  Class: Eq_502
  DataType: ui16
  OrigDataType: ui16
T_503: (in 0x061B : word16)
  Class: Eq_503
  DataType: word16
  OrigDataType: word16
T_504: (in (ax_556 << 0x0002) + 0x061B : word16)
  Class: Eq_504
  DataType: word16
  OrigDataType: word16
T_505: (in SEQ(ds, (ax_556 << 0x0002) + 0x061B) : ptr32)
  Class: Eq_505
  DataType: ptr32
  OrigDataType: ptr32
T_506: (in 0x0010 : word16)
  Class: Eq_506
  DataType: ui16
  OrigDataType: ui16
T_507: (in ax_556 * 0x0010 : word16)
  Class: Eq_507
  DataType: ui16
  OrigDataType: ui16
T_508: (in SEQ(ds, (ax_556 << 0x0002) + 0x061B)[ax_556 * 0x0010] : word32)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: word32
T_509: (in 0x0581 : word16)
  Class: Eq_509
  DataType: (memptr (ptr Eq_3) Eq_509)
  OrigDataType: (memptr T_19 (struct (0 T_510 t0000)))
T_510: (in Mem564[es_31:0x0581:word32] : word32)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: word32
T_511: (in ax_566 : word16)
  Class: Eq_511
  DataType: ui16
  OrigDataType: ui16
T_512: (in 0x0004 : word16)
  Class: Eq_512
  DataType: word16
  OrigDataType: word16
T_513: (in ax_556 << 0x0004 : word16)
  Class: Eq_513
  DataType: ui16
  OrigDataType: ui16
T_514: (in ch_550 : byte)
  Class: Eq_493
  DataType: Eq_493
  OrigDataType: byte
T_515: (in DPB(ax_556 << 0x0004, ch_550, 0, 8) : word16)
  Class: Eq_511
  DataType: ui16
  OrigDataType: word16
T_516: (in 0x066B : word16)
  Class: Eq_516
  DataType: word16
  OrigDataType: word16
T_517: (in SEQ(ds, 0x066B) : ptr32)
  Class: Eq_517
  DataType: ptr32
  OrigDataType: ptr32
T_518: (in 0x0004 : word16)
  Class: Eq_518
  DataType: ui16
  OrigDataType: ui16
T_519: (in ax_566 * 0x0004 : word16)
  Class: Eq_519
  DataType: ui16
  OrigDataType: ui16
T_520: (in SEQ(ds, 0x066B)[ax_566 * 0x0004] : word32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word32
T_521: (in 0x0571 : word16)
  Class: Eq_521
  DataType: (memptr (ptr Eq_3) Eq_521)
  OrigDataType: (memptr T_19 (struct (0 T_522 t0000)))
T_522: (in Mem574[es_31:0x0571:word32] : word32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word32
T_523: (in rLoc2_578 : real64)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: real64
T_524: (in 0x0581 : word16)
  Class: Eq_524
  DataType: (memptr (ptr Eq_3) Eq_524)
  OrigDataType: (memptr T_132 (struct (0 T_525 t0000)))
T_525: (in Mem574[ds:0x0581:real32] : real32)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: (union (real16 u0) (real32 u1))
T_526: (in 0x0571 : word16)
  Class: Eq_526
  DataType: (memptr (ptr Eq_3) Eq_526)
  OrigDataType: (memptr T_132 (struct (0 T_527 t0000)))
T_527: (in Mem574[ds:0x0571:real32] : real32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: (union (real16 u0) (real32 u1))
T_528: (in Mem574[ds:0x0581:real32] * Mem574[ds:0x0571:real32] : word16)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: real16
T_529: (in 0x057D : word16)
  Class: Eq_529
  DataType: (memptr (ptr Eq_3) Eq_529)
  OrigDataType: (memptr T_132 (struct (0 T_530 t0000)))
T_530: (in Mem574[ds:0x057D:real32] : real32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: real32
T_531: (in Mem574[ds:0x057D:real32] - rLoc2_578 : word16)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word16
T_532: (in 0x057D : word16)
  Class: Eq_532
  DataType: (memptr (ptr Eq_3) Eq_532)
  OrigDataType: (memptr T_132 (struct (0 T_533 t0000)))
T_533: (in Mem580[ds:0x057D:real32] : real32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: real32
T_534: (in 0x057D : word16)
  Class: Eq_534
  DataType: (memptr (ptr Eq_3) Eq_534)
  OrigDataType: (memptr T_132 (struct (0 T_535 t0000)))
T_535: (in Mem581[ds:0x057D:real32] : real32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: real32
T_536: (in 0x01 : byte)
  Class: Eq_536
  DataType: byte
  OrigDataType: byte
T_537: (in ch_550 - 0x01 : byte)
  Class: Eq_493
  DataType: Eq_493
  OrigDataType: byte
T_538: (in cx_551 : word16)
  Class: Eq_538
  DataType: word16
  OrigDataType: word16
T_539: (in DPB(cx_551, ch_550, 8, 8) : word16)
  Class: Eq_538
  DataType: word16
  OrigDataType: word16
T_540: (in ch_550 != cl_526 : bool)
  Class: Eq_540
  DataType: bool
  OrigDataType: bool
T_541: (in 0x057D : word16)
  Class: Eq_541
  DataType: (memptr (ptr Eq_3) Eq_541)
  OrigDataType: (memptr T_132 (struct (0 T_542 t0000)))
T_542: (in Mem581[ds:0x057D:word32] : word32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word32
T_543: (in 0x066B : word16)
  Class: Eq_543
  DataType: word16
  OrigDataType: word16
T_544: (in SEQ(ds, 0x066B) : ptr32)
  Class: Eq_544
  DataType: ptr32
  OrigDataType: ptr32
T_545: (in 0x0002 : word16)
  Class: Eq_545
  DataType: word16
  OrigDataType: word16
T_546: (in ax_566 << 0x0002 : word16)
  Class: Eq_546
  DataType: ui16
  OrigDataType: ui16
T_547: (in DPB(ax_566 << 0x0002, cl_526, 0, 8) : word16)
  Class: Eq_547
  DataType: ui16
  OrigDataType: ui16
T_548: (in 0x0004 : word16)
  Class: Eq_548
  DataType: ui16
  OrigDataType: ui16
T_549: (in DPB(ax_566 << 0x0002, cl_526, 0, 8) * 0x0004 : word16)
  Class: Eq_549
  DataType: ui16
  OrigDataType: ui16
T_550: (in SEQ(ds, 0x066B)[DPB(ax_566 << 0x0002, cl_526, 0, 8) * 0x0004] : word32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word32
T_551: (in 0x01 : byte)
  Class: Eq_551
  DataType: byte
  OrigDataType: byte
T_552: (in cl_526 - 0x01 : byte)
  Class: Eq_493
  DataType: Eq_493
  OrigDataType: byte
T_553: (in DPB(cx_551, cl_526, 0, 8) : word16)
  Class: Eq_495
  DataType: word16
  OrigDataType: word16
T_554: (in 0x00 : byte)
  Class: Eq_493
  DataType: Eq_493
  OrigDataType: int8
T_555: (in cl_526 >= 0x00 : bool)
  Class: Eq_555
  DataType: bool
  OrigDataType: bool
T_556: (in ax_537 : word16)
  Class: Eq_556
  DataType: uint16
  OrigDataType: word16
T_557: (in 0x05 : byte)
  Class: Eq_557
  DataType: uint8
  OrigDataType: uint8
T_558: (in cl_526 *u 0x05 : uint16)
  Class: Eq_556
  DataType: uint16
  OrigDataType: uint16
T_559: (in 0x0002 : word16)
  Class: Eq_559
  DataType: word16
  OrigDataType: word16
T_560: (in ax_537 << 0x0002 : word16)
  Class: Eq_560
  DataType: ui16
  OrigDataType: ui16
T_561: (in 0x061B : word16)
  Class: Eq_561
  DataType: word16
  OrigDataType: word16
T_562: (in (ax_537 << 0x0002) + 0x061B : word16)
  Class: Eq_562
  DataType: (memptr (ptr Eq_3) Eq_562)
  OrigDataType: (memptr T_132 (struct (0 T_567 t0000)))
T_563: (in ax_537 << 0x0002 : word16)
  Class: Eq_563
  DataType: ui16
  OrigDataType: ui16
T_564: (in 0x10 : byte)
  Class: Eq_564
  DataType: byte
  OrigDataType: byte
T_565: (in DPB(ax_537 << 0x0002, 0x10, 0, 8) : word16)
  Class: Eq_565
  DataType: word16
  OrigDataType: word16
T_566: (in (ax_537 << 0x0002) + 0x061B + DPB(ax_537 << 0x0002, 0x10, 0, 8) : word16)
  Class: Eq_566
  DataType: word16
  OrigDataType: word16
T_567: (in Mem523[ds:(ax_537 << 0x0002) + 0x061B + DPB(ax_537 << 0x0002, 0x10, 0, 8):word32] : word32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word32
T_568: (in 0x057D : word16)
  Class: Eq_568
  DataType: (memptr (ptr Eq_3) Eq_568)
  OrigDataType: (memptr T_19 (struct (0 T_569 t0000)))
T_569: (in Mem547[es_31:0x057D:word32] : word32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word32
T_570: (in 0x03 : byte)
  Class: Eq_493
  DataType: Eq_493
  OrigDataType: byte
T_571: (in 0x03 : byte)
  Class: Eq_571
  DataType: byte
  OrigDataType: byte
T_572: (in DPB(cx_527, 0x03, 8, 8) : word16)
  Class: Eq_538
  DataType: word16
  OrigDataType: word16
T_573: (in bp_599 : word16)
  Class: Eq_573
  DataType: word16
  OrigDataType: word16
T_574: (in 0x0064 : word16)
  Class: Eq_573
  DataType: word16
  OrigDataType: word16
T_575: (in 0x0064 : word16)
  Class: Eq_575
  DataType: word16
  OrigDataType: word16
T_576: (in DPB(ebp_899, 0x0064, 0, 16) : word32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word32
T_577: (in si_623 : word16)
  Class: Eq_577
  DataType: (memptr (ptr Eq_3) Eq_577)
  OrigDataType: (memptr T_132 (struct 0004 (0 T_304 t0000)))
T_578: (in 0x0000 : word16)
  Class: Eq_578
  DataType: word16
  OrigDataType: word16
T_579: (in si_623 + 0x0000 : word16)
  Class: Eq_579
  DataType: word16
  OrigDataType: word16
T_580: (in Mem624[ds:si_623 + 0x0000:word32] : word32)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: word32
T_581: (in 0x0581 : word16)
  Class: Eq_581
  DataType: (memptr (ptr Eq_3) Eq_581)
  OrigDataType: (memptr T_132 (struct (0 T_582 t0000)))
T_582: (in Mem633[ds:0x0581:word32] : word32)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: word32
T_583: (in 0x0004 : word16)
  Class: Eq_583
  DataType: word16
  OrigDataType: word16
T_584: (in si_623 - 0x0004 : word16)
  Class: Eq_577
  DataType: (memptr (ptr Eq_3) Eq_577)
  OrigDataType: word16
T_585: (in rLoc2_625 : real64)
  Class: Eq_585
  DataType: Eq_585
  OrigDataType: (union (real16 u0) (real64 u1))
T_586: (in 0x0581 : word16)
  Class: Eq_586
  DataType: (memptr (ptr Eq_3) Eq_586)
  OrigDataType: (memptr T_132 (struct (0 T_587 t0000)))
T_587: (in Mem633[ds:0x0581:real32] : real32)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: (union (real16 u0) (real32 u1))
T_588: (in rLoc2_625 + Mem633[ds:0x0581:real32] : word16)
  Class: Eq_588
  DataType: real16
  OrigDataType: real16
T_589: (in 0x057D : word16)
  Class: Eq_589
  DataType: (memptr (ptr Eq_3) Eq_589)
  OrigDataType: (memptr T_132 (struct (0 T_590 t0000)))
T_590: (in Mem633[ds:0x057D:word32] : word32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word32
T_591: (in (real64) Mem633[ds:0x057D:word32] : real64)
  Class: Eq_591
  DataType: Eq_591
  OrigDataType: (union (real16 u0) (real64 u1))
T_592: (in (rLoc2_625 + Mem633[ds:0x0581:real32]) * (real64) Mem633[ds:0x057D:word32] : word16)
  Class: Eq_585
  DataType: Eq_585
  OrigDataType: real16
T_593: (in cx_627 : word16)
  Class: Eq_593
  DataType: word16
  OrigDataType: word16
T_594: (in 0x0001 : word16)
  Class: Eq_594
  DataType: word16
  OrigDataType: word16
T_595: (in cx_627 - 0x0001 : word16)
  Class: Eq_593
  DataType: word16
  OrigDataType: word16
T_596: (in 0x0000 : word16)
  Class: Eq_593
  DataType: word16
  OrigDataType: word16
T_597: (in cx_627 != 0x0000 : bool)
  Class: Eq_597
  DataType: bool
  OrigDataType: bool
T_598: (in eax_639 : word32)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: ui32
T_599: (in 0x0000 : word16)
  Class: Eq_599
  DataType: word16
  OrigDataType: word16
T_600: (in si_623 + 0x0000 : word16)
  Class: Eq_600
  DataType: word16
  OrigDataType: word16
T_601: (in Mem633[ds:si_623 + 0x0000:word32] : word32)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: word32
T_602: (in 0x0581 : word16)
  Class: Eq_602
  DataType: (memptr (ptr Eq_3) Eq_602)
  OrigDataType: (memptr T_132 (struct (0 T_603 t0000)))
T_603: (in Mem643[ds:0x0581:word32] : word32)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: word32
T_604: (in 0x0581 : word16)
  Class: Eq_604
  DataType: (memptr (ptr Eq_3) Eq_604)
  OrigDataType: (memptr T_132 (struct (0 T_605 t0000)))
T_605: (in Mem643[ds:0x0581:real32] : real32)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: (union (real16 u0) (real32 u1))
T_606: (in rLoc2_625 + Mem643[ds:0x0581:real32] : word16)
  Class: Eq_606
  DataType: real16
  OrigDataType: real16
T_607: (in (int32) (rLoc2_625 + Mem643[ds:0x0581:real32]) : int32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: int32
T_608: (in 0x0571 : word16)
  Class: Eq_608
  DataType: (memptr (ptr Eq_3) Eq_608)
  OrigDataType: (memptr T_132 (struct (0 T_609 t0000)))
T_609: (in Mem645[ds:0x0571:int32] : int32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: int32
T_610: (in si_650 : word16)
  Class: Eq_610
  DataType: (memptr (ptr Eq_3) Eq_610)
  OrigDataType: (memptr T_132 (struct 0004 (0 T_637 t0000)))
T_611: (in 0x04F3 : word16)
  Class: Eq_610
  DataType: (memptr (ptr Eq_3) Eq_610)
  OrigDataType: word16
T_612: (in 0x20 : byte)
  Class: Eq_612
  DataType: byte
  OrigDataType: byte
T_613: (in DPB(cx_627, 0x20, 0, 8) : word16)
  Class: Eq_495
  DataType: word16
  OrigDataType: word16
T_614: (in 0x0004 : word16)
  Class: Eq_614
  DataType: word16
  OrigDataType: word16
T_615: (in si_650 + 0x0004 : word16)
  Class: Eq_610
  DataType: (memptr (ptr Eq_3) Eq_610)
  OrigDataType: word16
T_616: (in 0x0001 : word16)
  Class: Eq_616
  DataType: word16
  OrigDataType: word16
T_617: (in cx_527 - 0x0001 : word16)
  Class: Eq_495
  DataType: word16
  OrigDataType: word16
T_618: (in 0x0000 : word16)
  Class: Eq_495
  DataType: word16
  OrigDataType: word16
T_619: (in cx_527 != 0x0000 : bool)
  Class: Eq_619
  DataType: bool
  OrigDataType: bool
T_620: (in di_881 : word16)
  Class: Eq_620
  DataType: (memptr Eq_5 Eq_620)
  OrigDataType: (memptr T_5 (struct (0 T_630 t0000) (140 T_634 t0140)))
T_621: (in di_698 : word16)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word16
T_622: (in 0x00A0 : word16)
  Class: Eq_622
  DataType: word16
  OrigDataType: word16
T_623: (in di_698 + 0x00A0 : word16)
  Class: Eq_623
  DataType: word16
  OrigDataType: word16
T_624: (in 0x0140 : word16)
  Class: Eq_624
  DataType: ui16
  OrigDataType: ui16
T_625: (in eax_639 * 0x0140 : word32)
  Class: Eq_625
  DataType: ui32
  OrigDataType: ui32
T_626: (in di_698 + 0x00A0 + eax_639 * 0x0140 : word16)
  Class: Eq_620
  DataType: (memptr Eq_5 Eq_620)
  OrigDataType: word16
T_627: (in 0x3F3F : word16)
  Class: Eq_627
  DataType: word16
  OrigDataType: word16
T_628: (in 0x0000 : word16)
  Class: Eq_628
  DataType: word16
  OrigDataType: word16
T_629: (in di_881 + 0x0000 : word16)
  Class: Eq_629
  DataType: word16
  OrigDataType: word16
T_630: (in Mem886[bx_9:di_881 + 0x0000:word16] : word16)
  Class: Eq_627
  DataType: word16
  OrigDataType: word16
T_631: (in 0x3F3F : word16)
  Class: Eq_631
  DataType: word16
  OrigDataType: word16
T_632: (in 0x0140 : word16)
  Class: Eq_632
  DataType: word16
  OrigDataType: word16
T_633: (in di_881 + 0x0140 : word16)
  Class: Eq_633
  DataType: word16
  OrigDataType: word16
T_634: (in Mem890[bx_9:di_881 + 0x0140:word16] : word16)
  Class: Eq_631
  DataType: word16
  OrigDataType: word16
T_635: (in 0x3F3F : word16)
  Class: Eq_635
  DataType: word16
  OrigDataType: word16
T_636: (in DPB(eax_639, 0x3F3F, 0, 16) : word32)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: word32
T_637: (in bx_661 : word16)
  Class: Eq_637
  DataType: word16
  OrigDataType: word16
T_638: (in 0x0000 : word16)
  Class: Eq_638
  DataType: word16
  OrigDataType: word16
T_639: (in si_650 + 0x0000 : word16)
  Class: Eq_639
  DataType: word16
  OrigDataType: word16
T_640: (in Mem645[ds:si_650 + 0x0000:word16] : word16)
  Class: Eq_637
  DataType: word16
  OrigDataType: word16
T_641: (in 0x0579 : word16)
  Class: Eq_641
  DataType: (memptr (ptr Eq_3) Eq_641)
  OrigDataType: (memptr T_132 (struct (0 T_642 t0000)))
T_642: (in Mem662[ds:0x0579:word32] : word32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word32
T_643: (in 0x04ED : word16)
  Class: Eq_643
  DataType: (memptr (ptr Eq_3) Eq_643)
  OrigDataType: (memptr T_132 (struct (0 T_644 t0000)))
T_644: (in Mem662[ds:0x04ED:word16] : word16)
  Class: Eq_644
  DataType: word16
  OrigDataType: word16
T_645: (in bx_661 + Mem662[ds:0x04ED:word16] : word16)
  Class: Eq_645
  DataType: word16
  OrigDataType: word16
T_646: (in DPB(ebx_11, bx_661 + Mem662[ds:0x04ED:word16], 0, 16) : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_647: (in 0x0575 : word16)
  Class: Eq_647
  DataType: (memptr (ptr Eq_3) Eq_647)
  OrigDataType: (memptr T_132 (struct (0 T_648 t0000)))
T_648: (in Mem665[ds:0x0575:word32] : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_649: (in rLoc2_667 : real64)
  Class: Eq_649
  DataType: Eq_649
  OrigDataType: real64
T_650: (in 0x04D4 : word16)
  Class: Eq_650
  DataType: (memptr (ptr Eq_3) Eq_650)
  OrigDataType: (memptr T_132 (struct (0 T_651 t0000)))
T_651: (in Mem665[ds:0x04D4:real32] : real32)
  Class: Eq_651
  DataType: Eq_651
  OrigDataType: (union (real16 u0) (real32 u1))
T_652: (in 0x0575 : word16)
  Class: Eq_652
  DataType: (memptr (ptr Eq_3) Eq_652)
  OrigDataType: (memptr T_132 (struct (0 T_653 t0000)))
T_653: (in Mem665[ds:0x0575:word32] : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_654: (in (real64) Mem665[ds:0x0575:word32] : real64)
  Class: Eq_654
  DataType: Eq_654
  OrigDataType: (union (real16 u0) (real64 u1))
T_655: (in Mem665[ds:0x04D4:real32] * (real64) Mem665[ds:0x0575:word32] : word16)
  Class: Eq_649
  DataType: Eq_649
  OrigDataType: real16
T_656: (in rLoc2_669 : real64)
  Class: Eq_656
  DataType: Eq_656
  OrigDataType: (union (real16 u0) (real64 u1))
T_657: (in cos : ptr32)
  Class: Eq_657
  DataType: (ptr Eq_657)
  OrigDataType: (ptr (fn T_658 (T_649)))
T_658: (in cos(rLoc2_667) : real64)
  Class: Eq_656
  DataType: Eq_656
  OrigDataType: real64
T_659: (in rLoc3_670 : real64)
  Class: Eq_659
  DataType: Eq_659
  OrigDataType: (union (real16 u0) (real64 u1))
T_660: (in sin : ptr32)
  Class: Eq_660
  DataType: (ptr Eq_660)
  OrigDataType: (ptr (fn T_661 (T_649)))
T_661: (in sin(rLoc2_667) : real64)
  Class: Eq_659
  DataType: Eq_659
  OrigDataType: real64
T_662: (in 0x0579 : word16)
  Class: Eq_662
  DataType: (memptr (ptr Eq_3) Eq_662)
  OrigDataType: (memptr T_132 (struct (0 T_663 t0000)))
T_663: (in Mem665[ds:0x0579:word32] : word32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word32
T_664: (in (real64) Mem665[ds:0x0579:word32] : real64)
  Class: Eq_664
  DataType: Eq_664
  OrigDataType: (union (real16 u0) (real64 u1))
T_665: (in rLoc3_670 * (real64) Mem665[ds:0x0579:word32] : word16)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: real16
T_666: (in 0x057D : word16)
  Class: Eq_666
  DataType: (memptr (ptr Eq_3) Eq_666)
  OrigDataType: (memptr T_132 (struct (0 T_667 t0000)))
T_667: (in Mem673[ds:0x057D:real32] : real32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: real32
T_668: (in rLoc2_677 : real64)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: real64
T_669: (in 0x0571 : word16)
  Class: Eq_669
  DataType: (memptr (ptr Eq_3) Eq_669)
  OrigDataType: (memptr T_132 (struct (0 T_670 t0000)))
T_670: (in Mem673[ds:0x0571:int32] : int32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: int32
T_671: (in (real64) Mem673[ds:0x0571:int32] : real64)
  Class: Eq_671
  DataType: Eq_671
  OrigDataType: (union (real16 u0) (real64 u1))
T_672: (in 0x04D2 : word16)
  Class: Eq_672
  DataType: (memptr (ptr Eq_3) Eq_672)
  OrigDataType: (memptr T_132 (struct (0 T_673 t0000)))
T_673: (in Mem673[ds:0x04D2:word16] : word16)
  Class: Eq_673
  DataType: word16
  OrigDataType: word16
T_674: (in (real64) Mem673[ds:0x04D2:word16] : real64)
  Class: Eq_674
  DataType: Eq_674
  OrigDataType: (union (real16 u0) (real64 u1))
T_675: (in (real64) Mem673[ds:0x0571:int32] - (real64) Mem673[ds:0x04D2:word16] : word16)
  Class: Eq_675
  DataType: Eq_675
  OrigDataType: (union (real16 u0) (real64 u1))
T_676: (in rLoc2_669 * ((real64) Mem673[ds:0x0571:int32] - (real64) Mem673[ds:0x04D2:word16]) : real64)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: real64
T_677: (in 0x057D : word16)
  Class: Eq_677
  DataType: (memptr (ptr Eq_3) Eq_677)
  OrigDataType: (memptr T_132 (struct (0 T_160 t0000)))
T_678: (in Mem673[ds:0x057D:real32] : real32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: real32
T_679: (in Mem673[ds:0x057D:real32] - rLoc2_677 : word16)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word16
T_680: (in Mem679[ds:0x057D:real32] : real32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: real32
T_681: (in 0x057D : word16)
  Class: Eq_681
  DataType: (memptr (ptr Eq_3) Eq_681)
  OrigDataType: (memptr T_132 (struct (0 T_682 t0000)))
T_682: (in Mem680[ds:0x057D:real32] : real32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: real32
T_683: (in 0x0571 : word16)
  Class: Eq_683
  DataType: (memptr (ptr Eq_3) Eq_683)
  OrigDataType: (memptr T_132 (struct (0 T_684 t0000)))
T_684: (in Mem680[ds:0x0571:int32] : int32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: int32
T_685: (in (real64) Mem680[ds:0x0571:int32] : real64)
  Class: Eq_685
  DataType: Eq_685
  OrigDataType: (union (real16 u0) (real64 u1))
T_686: (in 0x04D2 : word16)
  Class: Eq_686
  DataType: (memptr (ptr Eq_3) Eq_686)
  OrigDataType: (memptr T_132 (struct (0 T_687 t0000)))
T_687: (in Mem680[ds:0x04D2:word16] : word16)
  Class: Eq_673
  DataType: word16
  OrigDataType: word16
T_688: (in (real64) Mem680[ds:0x04D2:word16] : real64)
  Class: Eq_688
  DataType: Eq_688
  OrigDataType: (union (real16 u0) (real64 u1))
T_689: (in (real64) Mem680[ds:0x0571:int32] - (real64) Mem680[ds:0x04D2:word16] : word16)
  Class: Eq_689
  DataType: Eq_689
  OrigDataType: (union (real16 u0) (real64 u1))
T_690: (in rLoc3_670 * ((real64) Mem680[ds:0x0571:int32] - (real64) Mem680[ds:0x04D2:word16]) : real64)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: real64
T_691: (in 0x0581 : word16)
  Class: Eq_691
  DataType: (memptr (ptr Eq_3) Eq_691)
  OrigDataType: (memptr T_132 (struct (0 T_692 t0000)))
T_692: (in Mem684[ds:0x0581:real32] : real32)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: real32
T_693: (in 0x0579 : word16)
  Class: Eq_693
  DataType: (memptr (ptr Eq_3) Eq_693)
  OrigDataType: (memptr T_132 (struct (0 T_694 t0000)))
T_694: (in Mem684[ds:0x0579:word32] : word32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word32
T_695: (in (real64) Mem684[ds:0x0579:word32] : real64)
  Class: Eq_695
  DataType: Eq_695
  OrigDataType: (union (real16 u0) (real64 u1))
T_696: (in rLoc2_669 * (real64) Mem684[ds:0x0579:word32] : word16)
  Class: Eq_696
  DataType: real16
  OrigDataType: real16
T_697: (in 0x0581 : word16)
  Class: Eq_697
  DataType: (memptr (ptr Eq_3) Eq_697)
  OrigDataType: (memptr T_132 (struct (0 T_698 t0000)))
T_698: (in Mem684[ds:0x0581:real32] : real32)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: (union (real16 u0) (real32 u1))
T_699: (in rLoc2_669 * (real64) Mem684[ds:0x0579:word32] + Mem684[ds:0x0581:real32] : word16)
  Class: Eq_699
  DataType: real16
  OrigDataType: real16
T_700: (in (int32) (rLoc2_669 * (real64) Mem684[ds:0x0579:word32] + Mem684[ds:0x0581:real32]) : int32)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: int32
T_701: (in 0x0581 : word16)
  Class: Eq_701
  DataType: (memptr (ptr Eq_3) Eq_701)
  OrigDataType: (memptr T_132 (struct (0 T_702 t0000)))
T_702: (in Mem687[ds:0x0581:int32] : int32)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: int32
T_703: (in 0x0000 : word16)
  Class: Eq_703
  DataType: word16
  OrigDataType: word16
T_704: (in si_650 + 0x0000 : word16)
  Class: Eq_704
  DataType: word16
  OrigDataType: word16
T_705: (in Mem687[ds:si_650 + 0x0000:word16] : word16)
  Class: Eq_637
  DataType: word16
  OrigDataType: word16
T_706: (in 0x04EF : word16)
  Class: Eq_706
  DataType: (memptr (ptr Eq_3) Eq_706)
  OrigDataType: (memptr T_132 (struct (0 T_707 t0000)))
T_707: (in Mem687[ds:0x04EF:word16] : word16)
  Class: Eq_707
  DataType: word16
  OrigDataType: word16
T_708: (in Mem687[ds:si_650 + 0x0000:word16] + Mem687[ds:0x04EF:word16] : word16)
  Class: Eq_708
  DataType: word16
  OrigDataType: word16
T_709: (in DPB(ebx_11, Mem687[ds:si_650 + 0x0000:word16] + Mem687[ds:0x04EF:word16], 0, 16) : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_710: (in 0x0575 : word16)
  Class: Eq_710
  DataType: (memptr (ptr Eq_3) Eq_710)
  OrigDataType: (memptr T_132 (struct (0 T_711 t0000)))
T_711: (in Mem692[ds:0x0575:word32] : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_712: (in cos : ptr32)
  Class: Eq_712
  DataType: (ptr Eq_712)
  OrigDataType: (ptr (fn T_719 (T_718)))
T_713: (in 0x04D4 : word16)
  Class: Eq_713
  DataType: (memptr (ptr Eq_3) Eq_713)
  OrigDataType: (memptr T_132 (struct (0 T_714 t0000)))
T_714: (in Mem692[ds:0x04D4:real32] : real32)
  Class: Eq_651
  DataType: Eq_651
  OrigDataType: (union (real16 u0) (real32 u1))
T_715: (in 0x0575 : word16)
  Class: Eq_715
  DataType: (memptr (ptr Eq_3) Eq_715)
  OrigDataType: (memptr T_132 (struct (0 T_716 t0000)))
T_716: (in Mem692[ds:0x0575:word32] : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_717: (in (real64) Mem692[ds:0x0575:word32] : real64)
  Class: Eq_717
  DataType: Eq_717
  OrigDataType: (union (real16 u0) (real64 u1))
T_718: (in Mem692[ds:0x04D4:real32] * (real64) Mem692[ds:0x0575:word32] : word16)
  Class: Eq_718
  DataType: real16
  OrigDataType: real16
T_719: (in cos(Mem692[ds:0x04D4:real32] * (real64) Mem692[ds:0x0575:word32]) : real64)
  Class: Eq_719
  DataType: Eq_719
  OrigDataType: (union (real16 u0) (real64 u1))
T_720: (in 0x057D : word16)
  Class: Eq_720
  DataType: (memptr (ptr Eq_3) Eq_720)
  OrigDataType: (memptr T_132 (struct (0 T_721 t0000)))
T_721: (in Mem692[ds:0x057D:real32] : real32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: (union (real16 u0) (real32 u1))
T_722: (in cos(Mem692[ds:0x04D4:real32] * (real64) Mem692[ds:0x0575:word32]) * Mem692[ds:0x057D:real32] : word16)
  Class: Eq_722
  DataType: real16
  OrigDataType: real16
T_723: (in (int32) (cos(Mem692[ds:0x04D4:real32] * (real64) Mem692[ds:0x0575:word32]) * Mem692[ds:0x057D:real32]) : int32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: int32
T_724: (in 0x057D : word16)
  Class: Eq_724
  DataType: (memptr (ptr Eq_3) Eq_724)
  OrigDataType: (memptr T_132 (struct (0 T_725 t0000)))
T_725: (in Mem697[ds:0x057D:int32] : int32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: int32
T_726: (in ax_699 : word16)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: cups16
T_727: (in 0x0581 : word16)
  Class: Eq_727
  DataType: (memptr (ptr Eq_3) Eq_727)
  OrigDataType: (memptr T_132 (struct (0 T_728 t0000)))
T_728: (in Mem697[ds:0x0581:word16] : word16)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: word16
T_729: (in 0x057D : word16)
  Class: Eq_729
  DataType: (memptr (ptr Eq_3) Eq_729)
  OrigDataType: (memptr T_132 (struct (0 T_730 t0000)))
T_730: (in Mem697[ds:0x057D:word16] : word16)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word16
T_731: (in 0x0063 : word16)
  Class: Eq_731
  DataType: word16
  OrigDataType: word16
T_732: (in ax_699 + 0x0063 : word16)
  Class: Eq_732
  DataType: word16
  OrigDataType: word16
T_733: (in DPB(eax_639, ax_699 + 0x0063, 0, 16) : word32)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: word32
T_734: (in 0xFF9D : word16)
  Class: Eq_304
  DataType: Eq_304
  OrigDataType: cups16
T_735: (in ax_699 >=u 0xFF9D : bool)
  Class: Eq_735
  DataType: bool
  OrigDataType: bool
T_736: (in 0x0001 : word16)
  Class: Eq_736
  DataType: word16
  OrigDataType: word16
T_737: (in bp_599 - 0x0001 : word16)
  Class: Eq_573
  DataType: word16
  OrigDataType: word16
T_738: (in DPB(ebp, bp_599, 0, 16) : word32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word32
T_739: (in 0x0000 : word16)
  Class: Eq_573
  DataType: word16
  OrigDataType: word16
T_740: (in bp_599 != 0x0000 : bool)
  Class: Eq_740
  DataType: bool
  OrigDataType: bool
T_741: (in 0x057D : word16)
  Class: Eq_741
  DataType: (memptr (ptr Eq_3) Eq_741)
  OrigDataType: (memptr T_132 (struct (0 T_742 t0000)))
T_742: (in Mem624[ds:0x057D:word32] : word32)
  Class: Eq_125
  DataType: Eq_125
  OrigDataType: word32
T_743: (in 0x0677 : word16)
  Class: Eq_577
  DataType: (memptr (ptr Eq_3) Eq_577)
  OrigDataType: word16
T_744: (in 0 : real64)
  Class: Eq_585
  DataType: Eq_585
  OrigDataType: real64
T_745: (in 0x03 : byte)
  Class: Eq_745
  DataType: byte
  OrigDataType: byte
T_746: (in DPB(cx_527, 0x03, 0, 8) : word16)
  Class: Eq_593
  DataType: word16
  OrigDataType: word16
T_747: (in 0x04EF : word16)
  Class: Eq_747
  DataType: (memptr (ptr Eq_3) Eq_747)
  OrigDataType: (memptr T_132 (struct (0 T_707 t0000)))
T_748: (in Mem697[ds:0x04EF:word16] : word16)
  Class: Eq_707
  DataType: word16
  OrigDataType: word16
T_749: (in 0x0002 : word16)
  Class: Eq_749
  DataType: word16
  OrigDataType: word16
T_750: (in Mem697[ds:0x04EF:word16] + 0x0002 : word16)
  Class: Eq_707
  DataType: word16
  OrigDataType: word16
T_751: (in Mem724[ds:0x04EF:word16] : word16)
  Class: Eq_707
  DataType: word16
  OrigDataType: word16
T_752: (in 0x04ED : word16)
  Class: Eq_752
  DataType: (memptr (ptr Eq_3) Eq_752)
  OrigDataType: (memptr T_132 (struct (0 T_644 t0000)))
T_753: (in Mem724[ds:0x04ED:word16] : word16)
  Class: Eq_644
  DataType: word16
  OrigDataType: word16
T_754: (in 0x0001 : word16)
  Class: Eq_754
  DataType: word16
  OrigDataType: word16
T_755: (in Mem724[ds:0x04ED:word16] + 0x0001 : word16)
  Class: Eq_644
  DataType: word16
  OrigDataType: word16
T_756: (in Mem727[ds:0x04ED:word16] : word16)
  Class: Eq_644
  DataType: word16
  OrigDataType: word16
T_757: (in di_729 : word16)
  Class: Eq_757
  DataType: Eq_757
  OrigDataType: (union (int16 u0) (cups16 u1) ((memptr T_5 (struct 0001 (FFFFFEBF T_774 tFFFFFEBF) (0 T_5 t0000))) u2))
T_758: (in 0xFA00 : word16)
  Class: Eq_757
  DataType: Eq_757
  OrigDataType: word16
T_759: (in al_743 : byte)
  Class: Eq_5
  DataType: Eq_5
  OrigDataType: bcu8
T_760: (in 0x0000 : word16)
  Class: Eq_760
  DataType: word16
  OrigDataType: word16
T_761: (in di_729 + 0x0000 : word16)
  Class: Eq_761
  DataType: word16
  OrigDataType: word16
T_762: (in Mem752[bx_9:di_729 + 0x0000:byte] : byte)
  Class: Eq_5
  DataType: Eq_5
  OrigDataType: byte
T_763: (in 0x0001 : word16)
  Class: Eq_763
  DataType: word16
  OrigDataType: word16
T_764: (in di_729 + 0x0001 : word16)
  Class: Eq_757
  DataType: Eq_757
  OrigDataType: word16
T_765: (in 0x0144 : word16)
  Class: Eq_757
  DataType: Eq_757
  OrigDataType: cups16
T_766: (in di_729 >=u 0x0144 : bool)
  Class: Eq_766
  DataType: bool
  OrigDataType: bool
T_767: (in 0x00 : byte)
  Class: Eq_5
  DataType: Eq_5
  OrigDataType: byte
T_768: (in 0x0000 : word16)
  Class: Eq_768
  DataType: word16
  OrigDataType: word16
T_769: (in di_729 + 0x0000 : word16)
  Class: Eq_769
  DataType: word16
  OrigDataType: word16
T_770: (in Mem727[bx_9:di_729 + 0x0000:word16] : word16)
  Class: Eq_5
  DataType: Eq_5
  OrigDataType: word16
T_771: (in ax_738 : word16)
  Class: Eq_771
  DataType: word16
  OrigDataType: word16
T_772: (in 0x0141 : word16)
  Class: Eq_772
  DataType: word16
  OrigDataType: word16
T_773: (in di_729 - 0x0141 : word16)
  Class: Eq_773
  DataType: word16
  OrigDataType: word16
T_774: (in Mem727[bx_9:di_729 - 0x0141:word16] : word16)
  Class: Eq_774
  DataType: word16
  OrigDataType: word16
T_775: (in Mem727[bx_9:di_729 - 0x0141:word16] + bx_113 : word16)
  Class: Eq_771
  DataType: word16
  OrigDataType: word16
T_776: (in ah_740 : byte)
  Class: Eq_5
  DataType: Eq_5
  OrigDataType: byte
T_777: (in SLICE(ax_738, byte, 8) : byte)
  Class: Eq_5
  DataType: Eq_5
  OrigDataType: byte
T_778: (in DPB(ebx_11, bx_113, 0, 16) : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_779: (in (byte) ax_738 : byte)
  Class: Eq_779
  DataType: byte
  OrigDataType: byte
T_780: (in (byte) ax_738 + ah_740 : byte)
  Class: Eq_780
  DataType: uint8
  OrigDataType: uint8
T_781: (in 0x02 : byte)
  Class: Eq_781
  DataType: uint8
  OrigDataType: uint8
T_782: (in (byte) ax_738 + ah_740 >>u 0x02 : word16)
  Class: Eq_782
  DataType: uint16
  OrigDataType: uint16
T_783: (in 0x04 : byte)
  Class: Eq_783
  DataType: byte
  OrigDataType: byte
T_784: (in ((byte) ax_738 + ah_740 >>u 0x02) - 0x04 : byte)
  Class: Eq_5
  DataType: Eq_5
  OrigDataType: byte
T_785: (in 0x00 : byte)
  Class: Eq_5
  DataType: Eq_5
  OrigDataType: bcu8
T_786: (in al_743 >=u 0x00 : bool)
  Class: Eq_786
  DataType: bool
  OrigDataType: bool
T_787: (in 0x0000 : word16)
  Class: Eq_787
  DataType: word16
  OrigDataType: word16
T_788: (in di_729 + 0x0000 : word16)
  Class: Eq_788
  DataType: word16
  OrigDataType: word16
T_789: (in Mem757[bx_9:di_729 + 0x0000:byte] : byte)
  Class: Eq_5
  DataType: Eq_5
  OrigDataType: byte
T_790: (in 0x0001 : word16)
  Class: Eq_790
  DataType: word16
  OrigDataType: word16
T_791: (in di_729 - 0x0001 : word16)
  Class: Eq_757
  DataType: Eq_757
  OrigDataType: word16
T_792: (in 0x0000 : word16)
  Class: Eq_757
  DataType: Eq_757
  OrigDataType: int16
T_793: (in di_729 >= 0x0000 : bool)
  Class: Eq_793
  DataType: bool
  OrigDataType: bool
T_794: (in si_762 : word16)
  Class: Eq_794
  DataType: (memptr Eq_5 Eq_794)
  OrigDataType: (memptr T_5 (struct 0002 (0 T_803 t0000)))
T_795: (in 0x0000 : word16)
  Class: Eq_794
  DataType: (memptr Eq_5 Eq_794)
  OrigDataType: word16
T_796: (in di_764 : word16)
  Class: Eq_796
  DataType: (memptr (ptr Eq_804) Eq_796)
  OrigDataType: (memptr T_804 (struct 0002 (0 T_807 t0000)))
T_797: (in 0x0001 : word16)
  Class: Eq_797
  DataType: word16
  OrigDataType: word16
T_798: (in di_729 + 0x0001 : word16)
  Class: Eq_796
  DataType: (memptr (ptr Eq_804) Eq_796)
  OrigDataType: word16
T_799: (in 0x7D : byte)
  Class: Eq_799
  DataType: byte
  OrigDataType: byte
T_800: (in DPB(cx_527, 0x7D, 8, 8) : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_801: (in 0x0000 : word16)
  Class: Eq_801
  DataType: word16
  OrigDataType: word16
T_802: (in si_762 + 0x0000 : word16)
  Class: Eq_802
  DataType: word16
  OrigDataType: word16
T_803: (in Mem757[bx_9:si_762 + 0x0000:word16] : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_804: (in 0xA000 : selector)
  Class: Eq_804
  DataType: (ptr Eq_804)
  OrigDataType: (ptr (segment))
T_805: (in 0x0000 : word16)
  Class: Eq_805
  DataType: word16
  OrigDataType: word16
T_806: (in di_764 + 0x0000 : word16)
  Class: Eq_806
  DataType: word16
  OrigDataType: word16
T_807: (in Mem782[0xA000:di_764 + 0x0000:word16] : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_808: (in 0x0002 : word16)
  Class: Eq_808
  DataType: word16
  OrigDataType: word16
T_809: (in si_762 + 0x0002 : word16)
  Class: Eq_794
  DataType: (memptr Eq_5 Eq_794)
  OrigDataType: word16
T_810: (in 0x0002 : word16)
  Class: Eq_810
  DataType: word16
  OrigDataType: word16
T_811: (in di_764 + 0x0002 : word16)
  Class: Eq_796
  DataType: (memptr (ptr Eq_804) Eq_796)
  OrigDataType: word16
T_812: (in 0x0001 : word16)
  Class: Eq_812
  DataType: word16
  OrigDataType: word16
T_813: (in cx_35 - 0x0001 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_814: (in 0x0000 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_815: (in cx_35 == 0x0000 : bool)
  Class: Eq_815
  DataType: bool
  OrigDataType: bool
T_816: (in __inb : ptr32)
  Class: Eq_816
  DataType: (ptr Eq_816)
  OrigDataType: (ptr (fn T_818 (T_817)))
T_817: (in 0x03DA : word16)
  Class: Eq_817
  DataType: word16
  OrigDataType: word16
T_818: (in __inb(0x03DA) : byte)
  Class: Eq_818
  DataType: byte
  OrigDataType: byte
T_819: (in 0x08 : byte)
  Class: Eq_819
  DataType: byte
  OrigDataType: byte
T_820: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_820
  DataType: byte
  OrigDataType: byte
T_821: (in 0x00 : byte)
  Class: Eq_820
  DataType: byte
  OrigDataType: byte
T_822: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_822
  DataType: bool
  OrigDataType: bool
T_823: (in si_796 : word16)
  Class: Eq_823
  DataType: word16
  OrigDataType: word16
T_824: (in 0x04E6 : word16)
  Class: Eq_824
  DataType: (memptr (ptr Eq_3) Eq_824)
  OrigDataType: (memptr T_3 (struct (0 T_825 t0000)))
T_825: (in Mem757[cs:0x04E6:word16] : word16)
  Class: Eq_823
  DataType: word16
  OrigDataType: word16
T_826: (in 0x04E8 : word16)
  Class: Eq_826
  DataType: (memptr (ptr Eq_3) Eq_826)
  OrigDataType: (memptr T_3 (struct (0 T_827 t0000)))
T_827: (in Mem757[cs:0x04E8:byte] : byte)
  Class: Eq_827
  DataType: byte
  OrigDataType: byte
T_828: (in 0x01 : byte)
  Class: Eq_828
  DataType: byte
  OrigDataType: byte
T_829: (in Mem757[cs:0x04E8:byte] + 0x01 : byte)
  Class: Eq_827
  DataType: byte
  OrigDataType: byte
T_830: (in Mem798[cs:0x04E8:byte] : byte)
  Class: Eq_827
  DataType: byte
  OrigDataType: byte
T_831: (in v51_799 : byte)
  Class: Eq_827
  DataType: byte
  OrigDataType: byte
T_832: (in 0x04E8 : word16)
  Class: Eq_832
  DataType: (memptr (ptr Eq_3) Eq_832)
  OrigDataType: (memptr T_3 (struct (0 T_827 t0000)))
T_833: (in Mem798[cs:0x04E8:byte] : byte)
  Class: Eq_827
  DataType: byte
  OrigDataType: byte
T_834: (in 0x01 : byte)
  Class: Eq_834
  DataType: byte
  OrigDataType: byte
T_835: (in Mem798[cs:0x04E8:byte] + 0x01 : byte)
  Class: Eq_827
  DataType: byte
  OrigDataType: byte
T_836: (in Mem800[cs:0x04E8:byte] : byte)
  Class: Eq_827
  DataType: byte
  OrigDataType: byte
T_837: (in 0x00 : byte)
  Class: Eq_827
  DataType: byte
  OrigDataType: byte
T_838: (in v51_799 != 0x00 : bool)
  Class: Eq_838
  DataType: bool
  OrigDataType: bool
T_839: (in 0x04E6 : word16)
  Class: Eq_839
  DataType: (memptr (ptr Eq_3) Eq_839)
  OrigDataType: (memptr T_3 (struct (0 T_840 t0000)))
T_840: (in Mem804[cs:0x04E6:word16] : word16)
  Class: Eq_823
  DataType: word16
  OrigDataType: word16
T_841: (in si_805 : word16)
  Class: Eq_841
  DataType: (memptr (ptr Eq_3) Eq_841)
  OrigDataType: (memptr T_3 (struct (0 T_847 t0000) (1 T_869 t0001)))
T_842: (in 0x04D8 : word16)
  Class: Eq_842
  DataType: word16
  OrigDataType: word16
T_843: (in si_796 + 0x04D8 : word16)
  Class: Eq_841
  DataType: (memptr (ptr Eq_3) Eq_841)
  OrigDataType: word16
T_844: (in al_806 : byte)
  Class: Eq_844
  DataType: byte
  OrigDataType: byte
T_845: (in 0x0000 : word16)
  Class: Eq_845
  DataType: word16
  OrigDataType: word16
T_846: (in si_805 + 0x0000 : word16)
  Class: Eq_846
  DataType: word16
  OrigDataType: word16
T_847: (in Mem804[cs:si_805 + 0x0000:byte] : byte)
  Class: Eq_844
  DataType: byte
  OrigDataType: byte
T_848: (in 0x00 : byte)
  Class: Eq_844
  DataType: byte
  OrigDataType: byte
T_849: (in al_806 == 0x00 : bool)
  Class: Eq_849
  DataType: bool
  OrigDataType: bool
T_850: (in 0x0001 : word16)
  Class: Eq_850
  DataType: word16
  OrigDataType: word16
T_851: (in si_796 + 0x0001 : word16)
  Class: Eq_823
  DataType: word16
  OrigDataType: word16
T_852: (in bios_video_set_mode : ptr32)
  Class: Eq_36
  DataType: (ptr Eq_36)
  OrigDataType: (ptr (fn T_854 (T_853)))
T_853: (in 0x03 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_854: (in bios_video_set_mode(0x03) : void)
  Class: Eq_40
  DataType: void
  OrigDataType: void
T_855: (in msdos_display_string : ptr32)
  Class: Eq_855
  DataType: (ptr Eq_855)
  OrigDataType: (ptr (fn T_860 (T_3, T_859)))
T_856: (in signature of msdos_display_string : void)
  Class: Eq_855
  DataType: (ptr Eq_855)
  OrigDataType: 
T_857: (in ds : selector)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (segment))
T_858: (in dx : word16)
  Class: Eq_858
  DataType: word16
  OrigDataType: word16
T_859: (in 0x04B6 : word16)
  Class: Eq_858
  DataType: word16
  OrigDataType: word16
T_860: (in msdos_display_string(cs, 0x04B6) : void)
  Class: Eq_860
  DataType: void
  OrigDataType: void
T_861: (in ax_825 : word16)
  Class: Eq_861
  DataType: Eq_861
  OrigDataType: cups16
T_862: (in (int16) al_806 : int16)
  Class: Eq_861
  DataType: Eq_861
  OrigDataType: int16
T_863: (in 0x04CA : word16)
  Class: Eq_863
  DataType: (memptr (ptr Eq_3) Eq_863)
  OrigDataType: (memptr T_3 (struct (0 T_861 t0000)))
T_864: (in Mem804[cs:0x04CA:word16] : word16)
  Class: Eq_861
  DataType: Eq_861
  OrigDataType: word16
T_865: (in Mem804[cs:0x04CA:word16] == ax_825 : bool)
  Class: Eq_865
  DataType: bool
  OrigDataType: bool
T_866: (in ax_834 : word16)
  Class: Eq_866
  DataType: cups16
  OrigDataType: cups16
T_867: (in 0x0001 : word16)
  Class: Eq_867
  DataType: word16
  OrigDataType: word16
T_868: (in si_805 + 0x0001 : word16)
  Class: Eq_868
  DataType: word16
  OrigDataType: word16
T_869: (in Mem804[cs:si_805 + 0x0001:byte] : byte)
  Class: Eq_869
  DataType: byte
  OrigDataType: byte
T_870: (in DPB(ax_825, Mem804[cs:si_805 + 0x0001:byte], 0, 8) : word16)
  Class: Eq_866
  DataType: cups16
  OrigDataType: word16
T_871: (in Z_838 : byte)
  Class: Eq_871
  DataType: byte
  OrigDataType: byte
T_872: (in 0x04CE : word16)
  Class: Eq_872
  DataType: (memptr (ptr Eq_3) Eq_872)
  OrigDataType: (memptr T_3 (struct (0 T_866 t0000)))
T_873: (in Mem804[cs:0x04CE:word16] : word16)
  Class: Eq_866
  DataType: cups16
  OrigDataType: word16
T_874: (in Mem804[cs:0x04CE:word16] - ax_834 : word16)
  Class: Eq_874
  DataType: word16
  OrigDataType: word16
T_875: (in cond(Mem804[cs:0x04CE:word16] - ax_834) : byte)
  Class: Eq_871
  DataType: byte
  OrigDataType: byte
T_876: (in Mem804[cs:0x04CE:word16] : word16)
  Class: Eq_866
  DataType: cups16
  OrigDataType: word16
T_877: (in Mem804[cs:0x04CE:word16] == ax_834 : bool)
  Class: Eq_877
  DataType: bool
  OrigDataType: bool
T_878: (in Mem804[cs:0x04CA:word16] : word16)
  Class: Eq_861
  DataType: Eq_861
  OrigDataType: cups16
T_879: (in Mem804[cs:0x04CA:word16] >=u ax_825 : bool)
  Class: Eq_879
  DataType: bool
  OrigDataType: bool
T_880: (in 0x04CA : word16)
  Class: Eq_880
  DataType: (memptr (ptr Eq_3) Eq_880)
  OrigDataType: (memptr T_3 (struct (0 T_861 t0000)))
T_881: (in Mem804[cs:0x04CA:word16] : word16)
  Class: Eq_861
  DataType: Eq_861
  OrigDataType: word16
T_882: (in 0x0001 : word16)
  Class: Eq_882
  DataType: word16
  OrigDataType: word16
T_883: (in Mem804[cs:0x04CA:word16] - 0x0001 : word16)
  Class: Eq_861
  DataType: Eq_861
  OrigDataType: word16
T_884: (in Mem870[cs:0x04CA:word16] : word16)
  Class: Eq_861
  DataType: Eq_861
  OrigDataType: word16
T_885: (in 0x04CA : word16)
  Class: Eq_885
  DataType: (memptr (ptr Eq_3) Eq_885)
  OrigDataType: (memptr T_3 (struct (0 T_861 t0000)))
T_886: (in Mem804[cs:0x04CA:word16] : word16)
  Class: Eq_861
  DataType: Eq_861
  OrigDataType: word16
T_887: (in 0x0001 : word16)
  Class: Eq_887
  DataType: word16
  OrigDataType: word16
T_888: (in Mem804[cs:0x04CA:word16] + 0x0001 : word16)
  Class: Eq_861
  DataType: Eq_861
  OrigDataType: word16
T_889: (in Mem867[cs:0x04CA:word16] : word16)
  Class: Eq_861
  DataType: Eq_861
  OrigDataType: word16
T_890: (in al_845 : byte)
  Class: Eq_890
  DataType: byte
  OrigDataType: byte
T_891: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_891
  DataType: (ptr Eq_891)
  OrigDataType: (ptr (fn T_895 (T_894)))
T_892: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_891
  DataType: (ptr Eq_891)
  OrigDataType: 
T_893: (in alOut : ptr16)
  Class: Eq_893
  DataType: (ptr byte)
  OrigDataType: ptr16
T_894: (in out al_845 : ptr16)
  Class: Eq_893
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_895: (in bios_kbd_check_keystroke(out al_845) : byte)
  Class: Eq_895
  DataType: byte
  OrigDataType: byte
T_896: (in DPB(ax_834, bios_kbd_check_keystroke(out al_845), 8, 8) : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_897: (in Mem804[cs:0x04CE:word16] : word16)
  Class: Eq_866
  DataType: cups16
  OrigDataType: cups16
T_898: (in Mem804[cs:0x04CE:word16] >=u ax_834 : bool)
  Class: Eq_898
  DataType: bool
  OrigDataType: bool
T_899: (in v55_860 : word16)
  Class: Eq_866
  DataType: cups16
  OrigDataType: word16
T_900: (in 0x04CE : word16)
  Class: Eq_900
  DataType: (memptr (ptr Eq_3) Eq_900)
  OrigDataType: (memptr T_3 (struct (0 T_866 t0000)))
T_901: (in Mem804[cs:0x04CE:word16] : word16)
  Class: Eq_866
  DataType: cups16
  OrigDataType: word16
T_902: (in 0x0001 : word16)
  Class: Eq_902
  DataType: word16
  OrigDataType: word16
T_903: (in Mem804[cs:0x04CE:word16] - 0x0001 : word16)
  Class: Eq_866
  DataType: cups16
  OrigDataType: word16
T_904: (in Mem861[cs:0x04CE:word16] : word16)
  Class: Eq_866
  DataType: cups16
  OrigDataType: word16
T_905: (in cond(v55_860) : byte)
  Class: Eq_871
  DataType: byte
  OrigDataType: byte
T_906: (in v54_854 : word16)
  Class: Eq_866
  DataType: cups16
  OrigDataType: word16
T_907: (in 0x04CE : word16)
  Class: Eq_907
  DataType: (memptr (ptr Eq_3) Eq_907)
  OrigDataType: (memptr T_3 (struct (0 T_866 t0000)))
T_908: (in Mem804[cs:0x04CE:word16] : word16)
  Class: Eq_866
  DataType: cups16
  OrigDataType: word16
T_909: (in 0x0001 : word16)
  Class: Eq_909
  DataType: word16
  OrigDataType: word16
T_910: (in Mem804[cs:0x04CE:word16] + 0x0001 : word16)
  Class: Eq_866
  DataType: cups16
  OrigDataType: word16
T_911: (in Mem855[cs:0x04CE:word16] : word16)
  Class: Eq_866
  DataType: cups16
  OrigDataType: word16
T_912: (in cond(v54_854) : byte)
  Class: Eq_871
  DataType: byte
  OrigDataType: byte
T_913: (in 0x04F1 : word16)
  Class: Eq_55
  DataType: (memptr (ptr Eq_3) Eq_55)
  OrigDataType: word16
T_914: (in 0x04 : byte)
  Class: Eq_914
  DataType: byte
  OrigDataType: byte
T_915: (in DPB(cx_35, 0x04, 0, 8) : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_916: (in al_852 : byte)
  Class: Eq_916
  DataType: byte
  OrigDataType: byte
T_917: (in bios_kbd_get_keystroke : ptr32)
  Class: Eq_917
  DataType: (ptr Eq_917)
  OrigDataType: (ptr (fn T_921 (T_920)))
T_918: (in signature of bios_kbd_get_keystroke : void)
  Class: Eq_917
  DataType: (ptr Eq_917)
  OrigDataType: 
T_919: (in alOut : ptr16)
  Class: Eq_919
  DataType: (ptr byte)
  OrigDataType: ptr16
T_920: (in out al_852 : ptr16)
  Class: Eq_919
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_921: (in bios_kbd_get_keystroke(out al_852) : byte)
  Class: Eq_921
  DataType: byte
  OrigDataType: byte
T_922:
  Class: Eq_922
  DataType: Eq_922
  OrigDataType: (struct 0002 (0 T_29 t0000))
T_923:
  Class: Eq_923
  DataType: Eq_923
  OrigDataType: (struct 0001 (0 T_48 t0000))
T_924:
  Class: Eq_924
  DataType: Eq_924
  OrigDataType: (struct 0002 (0 T_159 t0000))
T_925:
  Class: Eq_925
  DataType: Eq_925
  OrigDataType: (struct 0004 (0 T_204 t0000))
T_926:
  Class: Eq_176
  DataType: Eq_176
  OrigDataType: (struct 0004 (0 word32 dw0000))
T_927:
  Class: Eq_927
  DataType: Eq_927
  OrigDataType: (struct 0002 (0 T_265 t0000))
T_928:
  Class: Eq_928
  DataType: Eq_928
  OrigDataType: (struct 0004 (0 T_296 t0000))
T_929:
  Class: Eq_929
  DataType: Eq_929
  OrigDataType: (struct 0014 (0 T_327 t0000))
T_930:
  Class: Eq_930
  DataType: Eq_930
  OrigDataType: (struct 0004 (0 T_424 t0000))
T_931:
  Class: Eq_930
  DataType: Eq_930
  OrigDataType: (struct 0004 (0 T_458 t0000))
T_932:
  Class: Eq_930
  DataType: Eq_930
  OrigDataType: (struct 0010 (0 Eq_304 t0000))
T_933:
  Class: Eq_933
  DataType: Eq_933
  OrigDataType: (struct 0004 (0 T_520 t0000))
T_934:
  Class: Eq_933
  DataType: Eq_933
  OrigDataType: (struct 0004 (0 T_550 t0000))
T_935:
  Class: Eq_935
  DataType: Eq_935
  OrigDataType: (struct 0004 (0 T_640 t0000))
T_936:
  Class: Eq_935
  DataType: Eq_935
  OrigDataType: (struct 0004 (0 T_705 t0000))
T_937:
  Class: Eq_922
  DataType: Eq_922
  OrigDataType: (struct 0002 (0 T_803 t0000))
*/
typedef  Eq_1struct Globals {
	 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef  Eq_3[][][][][][][][][][]struct  {
	 a0000[];	// 0
	 a04C4[];	// 4C4
	 a04C6[];	// 4C6
	 a04C8[];	// 4C8
	 t04CA;	// 4CA
	cups16 w04CE;	// 4CE
	word16 w04D2;	// 4D2
	 t04D4;	// 4D4
	 a04E5[];	// 4E5
	word16 w04E6;	// 4E6
	byte b04E8;	// 4E8
	word16 w04ED;	// 4ED
	word16 w04EF;	// 4EF
	 a04F3[];	// 4F3
	 t0571;	// 571
	word32 dw0575;	// 575
	 t0579;	// 579
	 t057D;	// 57D
	 t0581;	// 581
	 a05FF[];	// 5FF
	 a0603[];	// 603
	 t062B;	// 62B
	 a063F[];	// 63F
	 t0663;	// 663
	 t0667;	// 667
	 a066B[];	// 66B
	 t0677;	// 677
} Eq_3;

typedef union  {
	bcu8 u0;
	struct <anonymous>* u1;
} Eq_5;

typedef struct  {	// size: 2 2
	word16 w0000;	// 0
} Eq_13;

typedef struct  {	// size: 1 1
	byte b0000;	// 0
} Eq_21;

typedef void (Eq_36)(byte);

typedef struct  {	// size: 2 2
	word16 w0000;	// 0
} Eq_55;

typedef  Eq_59struct  {
	 t0000;	// 0
} Eq_59;

typedef void (Eq_96)(word16, );

typedef union  {
	bcu8 u0;
	ui16 u1;
} Eq_98;

typedef void (Eq_106)(word16, byte);

typedef void (Eq_109)(word16, byte);

typedef void (Eq_113)(word16, byte);

typedef  Eq_120struct  {	// size: 4 4
	 t0000;	// 0
} Eq_120;

typedef struct  {	// size: 2 2
	word16 w0000;	// 0
} Eq_122;

typedef union  {
	int32 u0;
	real16 u1;
	real32 u2;
	real64 u3;
	word16 u4;
} Eq_125;

typedef union  {
	real16 u0;
	real32 u1;
	real64 u2;
} Eq_131;

typedef  Eq_142struct  {
	 t0000;	// 0
} Eq_142;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_144;

typedef  Eq_161struct  {
	 t0000;	// 0
} Eq_161;

typedef  Eq_165struct  {
	 t0000;	// 0
} Eq_165;

typedef  Eq_172struct  {
	 t0000;	// 0
} Eq_172;

typedef  Eq_174struct  {
	 t0000;	// 0
} Eq_174;

typedef union  {
	real32 u0;
	real64 u1;
	struct <anonymous> u2;
} Eq_176;

typedef  Eq_177struct  {
	 t0000;	// 0
} Eq_177;

typedef  Eq_179struct  {	// size: 24 18
	 t0000;	// 0
} Eq_179;

typedef  Eq_181struct  {	// size: 4 4
	 t0000;	// 0
} Eq_181;

typedef union  {
	real16 u0;
	real32 u1;
	real64 u2;
} Eq_191;

typedef union  {
	real16 u0;
	real32 u1;
} Eq_194;

typedef struct  {	// size: 4 4
	word32 dw0000;	// 0
} Eq_217;

typedef struct  {	// size: 4 4
	word32 dw0000;	// 0
} Eq_219;

typedef struct  {	// size: 2 2
	word16 w0000;	// 0
} Eq_254;

typedef union  {
	real16 u0;
	real32 u1;
	real64 u2;
} Eq_258;

typedef  Eq_267struct  {
	 t0000;	// 0
} Eq_267;

typedef struct  {
	word16 w0000;	// 0
} Eq_269;

typedef  Eq_272struct  {
	 t0000;	// 0
} Eq_272;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_274;

typedef  Eq_286struct  {
	 t0000;	// 0
} Eq_286;

typedef struct  {	// size: 4 4
	int16 w0000;	// 0
} Eq_293;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_297;

typedef  Eq_298struct  {	// size: 24 18
	 t0000;	// 0
} Eq_298;

typedef union  {
	real16 u0;
	real32 u1;
} Eq_301;

typedef  Eq_303struct  {
	 t0000;	// 0
} Eq_303;

typedef union  {
	int32 u0;
	real16 u1;
	real32 u2;
	real64 u3;
	cups16 u4;
} Eq_304;

typedef  Eq_306struct  {
	 t0000;	// 0
} Eq_306;

typedef  Eq_320struct  {	// size: 20 14
	 t0000;	// 0
} Eq_320;

typedef  Eq_323struct  {
	 t0000;	// 0
} Eq_323;

typedef  Eq_341struct  {
	 t0000;	// 0
} Eq_341;

typedef  Eq_365struct  {
	 t0000;	// 0
} Eq_365;

typedef union  {
	real16 u0;
	real32 u1;
} Eq_378;

typedef  Eq_379struct  {
	 t0000;	// 0
} Eq_379;

typedef union  {
	real16 u0;
	real32 u1;
} Eq_382;

typedef  Eq_399struct  {
	 t0000;	// 0
} Eq_399;

typedef  Eq_409struct  {
	 t0000;	// 0
} Eq_409;

typedef  Eq_425struct  {
	 t0000;	// 0
} Eq_425;

typedef  Eq_428struct  {
	 t0000;	// 0
} Eq_428;

typedef  Eq_459struct  {
	 t0000;	// 0
} Eq_459;

typedef  Eq_482struct  {
	 t0000;	// 0
} Eq_482;

typedef  Eq_484struct  {
	 t0000;	// 0
} Eq_484;

typedef  Eq_486struct  {
	 t0000;	// 0
} Eq_486;

typedef  Eq_488struct  {
	 t0000;	// 0
} Eq_488;

typedef union  {
	real16 u0;
	real32 u1;
} Eq_489;

typedef union  {
	real16 u0;
	real32 u1;
} Eq_490;

typedef  Eq_491struct  {
	 t0000;	// 0
} Eq_491;

typedef union  {
	int8 u0;
	uint8 u1;
} Eq_493;

typedef  Eq_509struct  {
	 t0000;	// 0
} Eq_509;

typedef  Eq_521struct  {
	 t0000;	// 0
} Eq_521;

typedef  Eq_524struct  {
	 t0000;	// 0
} Eq_524;

typedef  Eq_526struct  {
	 t0000;	// 0
} Eq_526;

typedef  Eq_529struct  {
	 t0000;	// 0
} Eq_529;

typedef  Eq_532struct  {
	 t0000;	// 0
} Eq_532;

typedef  Eq_534struct  {
	 t0000;	// 0
} Eq_534;

typedef  Eq_541struct  {
	 t0000;	// 0
} Eq_541;

typedef  Eq_562struct  {
	 t0000;	// 0
} Eq_562;

typedef  Eq_568struct  {
	 t0000;	// 0
} Eq_568;

typedef  Eq_577struct  {	// size: 4 4
	 t0000;	// 0
} Eq_577;

typedef  Eq_581struct  {
	 t0000;	// 0
} Eq_581;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_585;

typedef  Eq_586struct  {
	 t0000;	// 0
} Eq_586;

typedef  Eq_589struct  {
	 t0000;	// 0
} Eq_589;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_591;

typedef  Eq_602struct  {
	 t0000;	// 0
} Eq_602;

typedef  Eq_604struct  {
	 t0000;	// 0
} Eq_604;

typedef  Eq_608struct  {
	 t0000;	// 0
} Eq_608;

typedef struct  {	// size: 4 4
	word16 w0000;	// 0
} Eq_610;

typedef struct  {
	word16 w0000;	// 0
	word16 w0140;	// 140
} Eq_620;

typedef  Eq_641struct  {
	 t0000;	// 0
} Eq_641;

typedef struct  {
	word16 w0000;	// 0
} Eq_643;

typedef struct  {
	word32 dw0000;	// 0
} Eq_647;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_649;

typedef  Eq_650struct  {
	 t0000;	// 0
} Eq_650;

typedef union  {
	real16 u0;
	real32 u1;
} Eq_651;

typedef struct  {
	word32 dw0000;	// 0
} Eq_652;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_654;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_656;

typedef  (Eq_657)();

typedef union  {
	real16 u0;
	real64 u1;
} Eq_659;

typedef  (Eq_660)();

typedef  Eq_662struct  {
	 t0000;	// 0
} Eq_662;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_664;

typedef  Eq_666struct  {
	 t0000;	// 0
} Eq_666;

typedef  Eq_669struct  {
	 t0000;	// 0
} Eq_669;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_671;

typedef struct  {
	word16 w0000;	// 0
} Eq_672;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_674;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_675;

typedef  Eq_677struct  {
	 t0000;	// 0
} Eq_677;

typedef  Eq_681struct  {
	 t0000;	// 0
} Eq_681;

typedef  Eq_683struct  {
	 t0000;	// 0
} Eq_683;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_685;

typedef struct  {
	word16 w0000;	// 0
} Eq_686;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_688;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_689;

typedef  Eq_691struct  {
	 t0000;	// 0
} Eq_691;

typedef  Eq_693struct  {
	 t0000;	// 0
} Eq_693;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_695;

typedef  Eq_697struct  {
	 t0000;	// 0
} Eq_697;

typedef  Eq_701struct  {
	 t0000;	// 0
} Eq_701;

typedef struct  {
	word16 w0000;	// 0
} Eq_706;

typedef struct  {
	word32 dw0000;	// 0
} Eq_710;

typedef  (Eq_712)(real16);

typedef  Eq_713struct  {
	 t0000;	// 0
} Eq_713;

typedef struct  {
	word32 dw0000;	// 0
} Eq_715;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_717;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_719;

typedef  Eq_720struct  {
	 t0000;	// 0
} Eq_720;

typedef  Eq_724struct  {
	 t0000;	// 0
} Eq_724;

typedef  Eq_727struct  {
	 t0000;	// 0
} Eq_727;

typedef  Eq_729struct  {
	 t0000;	// 0
} Eq_729;

typedef  Eq_741struct  {
	 t0000;	// 0
} Eq_741;

typedef struct  {
	word16 w0000;	// 0
} Eq_747;

typedef struct  {
	word16 w0000;	// 0
} Eq_752;

typedef union  {
	int16 u0;
	cups16 u1;
	struct <anonymous> Eq_5::* u2;
} Eq_757;

typedef struct  {	// size: 2 2
	word16 w0000;	// 0
} Eq_794;

typedef struct  {	// size: 2 2
	word16 w0000;	// 0
} Eq_796;

typedef struct  {
} Eq_804;

typedef byte (Eq_816)(word16);

typedef struct  {
	word16 w0000;	// 0
} Eq_824;

typedef struct  {
	byte b0000;	// 0
} Eq_826;

typedef struct  {
	byte b0000;	// 0
} Eq_832;

typedef struct  {
	word16 w0000;	// 0
} Eq_839;

typedef struct  {
	byte b0000;	// 0
	byte b0001;	// 1
} Eq_841;

typedef void (Eq_855)( *, word16);

typedef union  {
	int16 u0;
	cups16 u1;
} Eq_861;

typedef  Eq_863struct  {
	 t0000;	// 0
} Eq_863;

typedef struct  {
	cups16 w0000;	// 0
} Eq_872;

typedef  Eq_880struct  {
	 t0000;	// 0
} Eq_880;

typedef  Eq_885struct  {
	 t0000;	// 0
} Eq_885;

typedef byte (Eq_891)(byte *);

typedef struct  {
	cups16 w0000;	// 0
} Eq_900;

typedef struct  {
	cups16 w0000;	// 0
} Eq_907;

typedef byte (Eq_917)(byte *);

typedef struct  {	// size: 2 2
	word16 w0000;	// 0
} Eq_922;

typedef struct  {	// size: 1 1
	byte b0000;	// 0
} Eq_923;

typedef struct  {	// size: 2 2
	word16 w0000;	// 0
} Eq_924;

typedef  Eq_925struct  {	// size: 4 4
	 t0000;	// 0
} Eq_925;

typedef struct  {	// size: 2 2
	word16 w0000;	// 0
} Eq_927;

typedef struct  {	// size: 4 4
	int16 w0000;	// 0
} Eq_928;

typedef  Eq_929struct  {	// size: 20 14
	 t0000;	// 0
} Eq_929;

typedef union  {
	struct <anonymous> u0;
	struct <anonymous> u1;
} Eq_930;

typedef  Eq_933struct  {	// size: 4 4
	 t0000;	// 0
} Eq_933;

typedef struct  {	// size: 4 4
	word16 w0000;	// 0
} Eq_935;

