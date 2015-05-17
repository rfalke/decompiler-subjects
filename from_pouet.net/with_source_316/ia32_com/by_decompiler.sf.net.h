// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_316/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_146) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (fn void (word16, byte))
	T_7 (in __outb : ptr32)
Eq_27: (fn void (word16, byte))
	T_27 (in __outb : ptr32)
Eq_30: (fn void (word16, byte))
	T_30 (in __outb : ptr32)
Eq_33: (fn void (word16, byte))
	T_33 (in __outb : ptr32)
Eq_46: (segment "Eq_46" (64 Eq_50 t0064) (2C1 word16 w02C1) (2C3 word16 w02C3) (2C5 word16 w02C5) (2C7 int16 w02C7) (2C9 word16 w02C9) (2CB word16 w02CB) (2CD word16 w02CD) (2CF word16 w02CF) (2D1 Eq_395 t02D1) (2D5 word16 w02D5) (2D7 word16 w02D7) (2D9 word16 w02D9) (2DB word16 w02DB) (2DD int16 w02DD) (2DF int16 w02DF) (2E1 int16 w02E1) (2E3 int16 w02E3) (2E5 word16 w02E5) (2E7 word16 w02E7) (2E9 word16 w02E9) (2EB Eq_215 t02EB))
	T_46 (in ds : (ptr Eq_46))
	T_95 (in ds : (ptr Eq_46))
	T_195 (in ds : (ptr Eq_46))
Eq_50: (segment "Eq_50" (0 (arr word16) a0000))
	T_50 (in es_151 : (ptr Eq_50))
	T_51 (in ds + 0x0064 : word16)
	T_94 (in es : (ptr Eq_50))
Eq_89: (fn void (word32, word32, word32, (ptr Eq_50), (ptr Eq_46)))
	T_89 (in fn0C00_01E1 : ptr32)
	T_90 (in signature of fn0C00_01E1 : void)
	T_99 (in fn0C00_01E1 : ptr32)
Eq_137: (fn byte (byte))
	T_137 (in __inb : ptr32)
Eq_146: (segment "Eq_146" (0 (arr word16) a0000))
	T_146 (in 0xA000 : selector)
Eq_159: (fn void ())
	T_159 (in msdos_terminate_program20 : ptr32)
	T_160 (in signature of msdos_terminate_program20 : void)
Eq_177: (struct "Eq_177" (2 word16 w0002) (4 word16 w0004) (6 word16 w0006))
	T_177 (in esp_3 : (memptr (ptr Eq_183) Eq_177))
	T_180 (in DPB(esp, fp, 0, 16) : word32)
Eq_183: (segment "Eq_183")
	T_183 (in ss : selector)
Eq_211: (fn Eq_215 (real64))
	T_211 (in sqrt : ptr32)
Eq_215: (union "Eq_215" (real16 u0) (real32 u1) (real64 u2))
	T_215 (in sqrt(rLoc1_16 * rLoc1_16 + rLoc2_18 * rLoc2_18) : real64)
	T_217 (in Mem22[ds:0x02EB:real32] : real32)
	T_244 (in Mem22[ds:0x02EB:real32] : real32)
	T_251 (in Mem33[ds:0x02EB:real32] : real32)
Eq_219: (fn real64 (real64, real64))
	T_219 (in atan : ptr32)
Eq_232: (union "Eq_232" (real16 u0) (real64 u1))
	T_232 (in (real64) (ds->*ecx_14) : real64)
Eq_235: (union "Eq_235" (real16 u0) (real64 u1))
	T_235 (in (real64) ds->w02CD : real64)
Eq_236: (union "Eq_236" (real16 u0) (real64 u1))
	T_236 (in (real64) (ds->*ecx_14) / (real64) ds->w02CD : word16)
Eq_238: (union "Eq_238" (real16 u0) (real64 u1))
	T_238 (in rLoc1_30 : Eq_238)
	T_240 (in cos(rLoc1_28) : real64)
Eq_239: (fn Eq_238 (real64))
	T_239 (in cos : ptr32)
Eq_241: (fn Eq_242 (real64))
	T_241 (in sin : ptr32)
Eq_242: (union "Eq_242" (real16 u0) (real64 u1))
	T_242 (in sin(rLoc1_28) : real64)
Eq_257: (struct "Eq_257" (2 int16 w0002) (4 int16 w0004))
	T_257 (in esp_3 : (memptr (ptr Eq_262) Eq_257))
	T_260 (in DPB(esp, fp, 0, 16) : word32)
Eq_261: (union "Eq_261" (real16 u0) (real64 u1))
	T_261 (in rLoc1_8 : Eq_261)
	T_270 (in (real64) (ss->*esp_3).w0002 / (real64) ds->w02D5 : word16)
Eq_262: (segment "Eq_262")
	T_262 (in ss : selector)
Eq_266: (union "Eq_266" (real16 u0) (real64 u1))
	T_266 (in (real64) (ss->*esp_3).w0002 : real64)
Eq_269: (union "Eq_269" (real16 u0) (real64 u1))
	T_269 (in (real64) ds->w02D5 : real64)
Eq_271: (union "Eq_271" (real16 u0) (real64 u1))
	T_271 (in rLoc1_10 : Eq_271)
	T_273 (in cos(rLoc1_8) : real64)
Eq_272: (fn Eq_271 (Eq_261))
	T_272 (in cos : ptr32)
Eq_274: (fn Eq_275 (Eq_261))
	T_274 (in sin : ptr32)
Eq_275: (union "Eq_275" (real16 u0) (real64 u1))
	T_275 (in sin(rLoc1_8) : real64)
Eq_278: (union "Eq_278" (real16 u0) (real64 u1))
	T_278 (in (real64) ds->w02CD : real64)
Eq_285: (union "Eq_285" (real16 u0) (real64 u1))
	T_285 (in (real64) ds->w02CD : real64)
Eq_290: (union "Eq_290" (real16 u0) (real64 u1))
	T_290 (in rLoc1_17 : Eq_290)
	T_298 (in (real64) (ss->*esp_3).w0004 / (real64) ds->w02D5 : word16)
Eq_294: (union "Eq_294" (real16 u0) (real64 u1))
	T_294 (in (real64) (ss->*esp_3).w0004 : real64)
Eq_297: (union "Eq_297" (real16 u0) (real64 u1))
	T_297 (in (real64) ds->w02D5 : real64)
Eq_299: (union "Eq_299" (real16 u0) (real64 u1))
	T_299 (in rLoc1_19 : Eq_299)
	T_301 (in cos(rLoc1_17) : real64)
Eq_300: (fn Eq_299 (Eq_290))
	T_300 (in cos : ptr32)
Eq_302: (fn Eq_303 (Eq_290))
	T_302 (in sin : ptr32)
Eq_303: (union "Eq_303" (real16 u0) (real64 u1))
	T_303 (in sin(rLoc1_17) : real64)
Eq_306: (union "Eq_306" (real16 u0) (real64 u1))
	T_306 (in (real64) ds->w02E3 : real64)
Eq_313: (union "Eq_313" (real16 u0) (real64 u1))
	T_313 (in (real64) ds->w02E3 : real64)
Eq_318: (fn void (word32, word32, word32, (ptr Eq_46)))
	T_318 (in fn0C00_019C : ptr32)
	T_319 (in signature of fn0C00_019C : void)
	T_321 (in fn0C00_019C : ptr32)
	T_323 (in fn0C00_019C : ptr32)
Eq_325: (union "Eq_325" (real16 u0) (real64 u1))
	T_325 (in rLoc2_52 : Eq_325)
	T_332 (in (real64) ds->w02DF - (real64) ds->w02C1 : word16)
Eq_328: (union "Eq_328" (real16 u0) (real64 u1))
	T_328 (in (real64) ds->w02DF : real64)
Eq_331: (union "Eq_331" (real16 u0) (real64 u1))
	T_331 (in (real64) ds->w02C1 : real64)
Eq_333: (union "Eq_333" (real16 u0) (real64 u1))
	T_333 (in rLoc3_55 : Eq_333)
	T_340 (in (real64) ds->w02E1 - (real64) ds->w02C3 : word16)
Eq_336: (union "Eq_336" (real16 u0) (real64 u1))
	T_336 (in (real64) ds->w02E1 : real64)
Eq_339: (union "Eq_339" (real16 u0) (real64 u1))
	T_339 (in (real64) ds->w02C3 : real64)
Eq_341: (union "Eq_341" (real16 u0) (real64 u1))
	T_341 (in rLoc4_58 : Eq_341)
	T_348 (in (real64) ds->w02E3 - (real64) ds->w02C5 : word16)
Eq_344: (union "Eq_344" (real16 u0) (real64 u1))
	T_344 (in (real64) ds->w02E3 : real64)
Eq_347: (union "Eq_347" (real16 u0) (real64 u1))
	T_347 (in (real64) ds->w02C5 : real64)
Eq_356: (union "Eq_356" (real16 u0) (real64 u1))
	T_356 (in rLoc2_52 * rLoc2_52 + (rLoc3_55 * rLoc3_55 + rLoc4_58 * rLoc4_58) : real64)
Eq_359: (union "Eq_359" (real16 u0) (real64 u1))
	T_359 (in (real64) ds->w02C9 : real64)
Eq_363: (union "Eq_363" (real16 u0) (real64 u1))
	T_363 (in (real64) ds->w02CB : real64)
Eq_364: (union "Eq_364" (real16 u0) (real64 u1))
	T_364 (in (rLoc2_52 * rLoc2_52 + (rLoc3_55 * rLoc3_55 + rLoc4_58 * rLoc4_58)) / (real64) ds->w02C9 + (real64) ds->w02CB : word16)
Eq_369: (union "Eq_369" (real16 u0) (real64 u1))
	T_369 (in rLoc3_69 : Eq_369)
	T_376 (in (real64) ds->w02E3 / (real64) ds->w02D5 : word16)
Eq_372: (union "Eq_372" (real16 u0) (real64 u1))
	T_372 (in (real64) ds->w02E3 : real64)
Eq_375: (union "Eq_375" (real16 u0) (real64 u1))
	T_375 (in (real64) ds->w02D5 : real64)
Eq_377: (union "Eq_377" (64 u0) (real64 u1))
	T_377 (in rLoc2_67 : Eq_377)
	T_380 (in (real64) ds->w02E1 : real64)
Eq_381: (union "Eq_381" (real16 u0) (real64 u1))
	T_381 (in rLoc1_74 : Eq_381)
	T_389 (in (real64) ds->w02DF / (rLoc2_67 / (rLoc3_69 + (rLoc3_69 + 1))) : real64)
Eq_395: (union "Eq_395" (real16 u0) (real32 u1))
	T_395 (in Mem76[ds:0x02D1:real32] : real32)
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
T_7: (in __outb : ptr32)
  Class: Eq_7
  DataType: (ptr Eq_7)
  OrigDataType: (ptr (fn T_10 (T_8, T_9)))
T_8: (in 0x03C8 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x00 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in __outb(0x03C8, 0x00) : void)
  Class: Eq_10
  DataType: void
  OrigDataType: void
T_11: (in eax_17 : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_12: (in eax : word32)
  Class: Eq_12
  DataType: word32
  OrigDataType: word32
T_13: (in 0x00 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in DPB(eax, 0x00, 0, 8) : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_15: (in cl_11 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in 0xFF : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_17: (in cx_13 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in cx : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in 0xFF : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_20: (in DPB(cx, 0xFF, 0, 8) : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_21: (in ecx_134 : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_22: (in ecx : word32)
  Class: Eq_22
  DataType: word32
  OrigDataType: word32
T_23: (in 0xFF : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in DPB(ecx, 0xFF, 0, 8) : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_25: (in al_22 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_26: (in ~cl_11 : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_27: (in __outb : ptr32)
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (fn T_29 (T_28, T_25)))
T_28: (in 0x03C9 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in __outb(0x03C9, al_22) : void)
  Class: Eq_29
  DataType: void
  OrigDataType: void
T_30: (in __outb : ptr32)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: (ptr (fn T_32 (T_31, T_25)))
T_31: (in 0x03C9 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in __outb(0x03C9, al_22) : void)
  Class: Eq_32
  DataType: void
  OrigDataType: void
T_33: (in __outb : ptr32)
  Class: Eq_33
  DataType: (ptr Eq_33)
  OrigDataType: (ptr (fn T_36 (T_34, T_35)))
T_34: (in 0x03C9 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in 0x00 : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_36
  DataType: void
  OrigDataType: void
T_37: (in 0x0001 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in cx_13 - 0x0001 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_39: (in 0x00 : byte)
  Class: Eq_39
  DataType: byte
  OrigDataType: byte
T_40: (in DPB(eax_17, 0x00, 0, 8) : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_41: (in (byte) cx_13 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_42: (in DPB(ecx_134, cx_13, 0, 16) : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_43: (in 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_44: (in cx_13 != 0x0000 : bool)
  Class: Eq_44
  DataType: bool
  OrigDataType: bool
T_45: (in eax_155 : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_46: (in ds : (ptr Eq_46))
  Class: Eq_46
  DataType: (ptr Eq_46)
  OrigDataType: (ptr (segment (2CF T_52 t02CF) (2D7 T_56 t02D7) (2D9 T_61 t02D9) (2DB T_66 t02DB) (2E5 T_85 t02E5) (2E7 T_115 t02E7) (2E9 T_120 t02E9)))
T_47: (in 0x0064 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in ds + 0x0064 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in DPB(eax_17, &ds->t0064, 0, 16) : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_50: (in es_151 : (ptr Eq_50))
  Class: Eq_50
  DataType: (ptr Eq_50)
  OrigDataType: (ptr (segment (0 (arr T_427) a0000)))
T_51: (in ds + 0x0064 : word16)
  Class: Eq_50
  DataType: (ptr Eq_50)
  OrigDataType: word16
T_52: (in 0x0009 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in 0x02CF : word16)
  Class: Eq_53
  DataType: (memptr (ptr Eq_46) word16)
  OrigDataType: (memptr T_46 (struct (0 T_54 t0000)))
T_54: (in Mem76[ds:0x02CF:word16] : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_55: (in 0x02D7 : word16)
  Class: Eq_55
  DataType: (memptr (ptr Eq_46) word16)
  OrigDataType: (memptr T_46 (struct (0 T_56 t0000)))
T_56: (in Mem76[ds:0x02D7:word16] : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in 0x0004 : word16)
  Class: Eq_57
  DataType: word16
  OrigDataType: word16
T_58: (in ds->w02D7 + 0x0004 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_59: (in Mem78[ds:0x02D7:word16] : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_60: (in 0x02D9 : word16)
  Class: Eq_60
  DataType: (memptr (ptr Eq_46) word16)
  OrigDataType: (memptr T_46 (struct (0 T_61 t0000)))
T_61: (in Mem78[ds:0x02D9:word16] : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in 0x0006 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in ds->w02D9 + 0x0006 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_64: (in Mem80[ds:0x02D9:word16] : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_65: (in 0x02DB : word16)
  Class: Eq_65
  DataType: (memptr (ptr Eq_46) word16)
  OrigDataType: (memptr T_46 (struct (0 T_66 t0000)))
T_66: (in Mem80[ds:0x02DB:word16] : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in 0x0003 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in ds->w02DB + 0x0003 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_69: (in Mem82[ds:0x02DB:word16] : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_70: (in 0x0000 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in di_53 : (memptr (ptr Eq_50) word16))
  Class: Eq_71
  DataType: (memptr (ptr Eq_50) word16)
  OrigDataType: (memptr T_50 (struct 0002 (0 T_74 t0000)))
T_72: (in 0x0000 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in di_53 + 0x0000 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in Mem70[es_151:di_53 + 0x0000:word16] : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_75: (in cx_54 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in 0x0001 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in cx_54 - 0x0001 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_78: (in 0x0002 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in di_53 + 0x0002 : word16)
  Class: Eq_71
  DataType: (memptr (ptr Eq_50) word16)
  OrigDataType: word16
T_80: (in ecx_56 : word32)
  Class: Eq_80
  DataType: word32
  OrigDataType: word32
T_81: (in DPB(ecx_56, cx_54, 0, 16) : word32)
  Class: Eq_80
  DataType: word32
  OrigDataType: word32
T_82: (in 0x0000 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_83: (in cx_54 == 0x0000 : bool)
  Class: Eq_83
  DataType: bool
  OrigDataType: bool
T_84: (in 0x02E5 : word16)
  Class: Eq_84
  DataType: (memptr (ptr Eq_46) word16)
  OrigDataType: (memptr T_46 (struct (0 T_85 t0000)))
T_85: (in Mem92[ds:0x02E5:word16] : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in 0x0003 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in ds->w02E5 + 0x0003 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_88: (in Mem97[ds:0x02E5:word16] : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_89: (in fn0C00_01E1 : ptr32)
  Class: Eq_89
  DataType: (ptr Eq_89)
  OrigDataType: (ptr (fn T_98 (T_96, T_80, T_97, T_50, T_46)))
T_90: (in signature of fn0C00_01E1 : void)
  Class: Eq_89
  DataType: (ptr Eq_89)
  OrigDataType: 
T_91: (in eax : word32)
  Class: Eq_91
  DataType: word32
  OrigDataType: word32
T_92: (in ecx : word32)
  Class: Eq_80
  DataType: word32
  OrigDataType: word32
T_93: (in ebx : word32)
  Class: Eq_93
  DataType: word32
  OrigDataType: word32
T_94: (in es : (ptr Eq_50))
  Class: Eq_50
  DataType: (ptr Eq_50)
  OrigDataType: (ptr (segment))
T_95: (in ds : (ptr Eq_46))
  Class: Eq_46
  DataType: (ptr Eq_46)
  OrigDataType: (ptr (segment (2C1 T_330 t02C1) (2C3 T_338 t02C3) (2C5 T_346 t02C5) (2C7 T_350 t02C7) (2C9 T_358 t02C9) (2CB T_362 t02CB) (2CD T_277 t02CD) (2D1 T_395 t02D1) (2D5 T_268 t02D5) (2DD T_366 t02DD) (2DF T_280 t02DF) (2E1 T_308 t02E1) (2E3 T_287 t02E3)))
T_96: (in eax_59 : word32)
  Class: Eq_91
  DataType: word32
  OrigDataType: word32
T_97: (in ebx : word32)
  Class: Eq_93
  DataType: word32
  OrigDataType: word32
T_98: (in fn0C00_01E1(eax_59, ecx_56, ebx, es_151, ds) : void)
  Class: Eq_98
  DataType: void
  OrigDataType: void
T_99: (in fn0C00_01E1 : ptr32)
  Class: Eq_89
  DataType: (ptr Eq_89)
  OrigDataType: (ptr (fn T_100 (T_96, T_80, T_97, T_50, T_46)))
T_100: (in fn0C00_01E1(eax_59, ecx_56, ebx, es_151, ds) : void)
  Class: Eq_98
  DataType: void
  OrigDataType: void
T_101: (in bp_110 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in 0x0001 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in bp_110 - 0x0001 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_104: (in 0x0000 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_105: (in bp_110 != 0x0000 : bool)
  Class: Eq_105
  DataType: bool
  OrigDataType: bool
T_106: (in v24_113 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_107: (in 0x02CF : word16)
  Class: Eq_107
  DataType: (memptr (ptr Eq_46) word16)
  OrigDataType: (memptr T_46 (struct (0 T_52 t0000)))
T_108: (in Mem97[ds:0x02CF:word16] : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_109: (in 0x0001 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in ds->w02CF - 0x0001 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_111: (in Mem114[ds:0x02CF:word16] : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_112: (in 0x0000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_113: (in v24_113 != 0x0000 : bool)
  Class: Eq_113
  DataType: bool
  OrigDataType: bool
T_114: (in 0x02E7 : word16)
  Class: Eq_114
  DataType: (memptr (ptr Eq_46) word16)
  OrigDataType: (memptr T_46 (struct (0 T_115 t0000)))
T_115: (in Mem82[ds:0x02E7:word16] : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in 0x00B3 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in ds->w02E7 + 0x00B3 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_118: (in Mem90[ds:0x02E7:word16] : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_119: (in 0x02E9 : word16)
  Class: Eq_119
  DataType: (memptr (ptr Eq_46) word16)
  OrigDataType: (memptr T_46 (struct (0 T_120 t0000)))
T_120: (in Mem90[ds:0x02E9:word16] : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_121: (in 0x007D : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_122: (in ds->w02E9 + 0x007D : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_123: (in Mem92[ds:0x02E9:word16] : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_124: (in 0x044C : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_125: (in si_121 : (memptr (ptr Eq_50) word16))
  Class: Eq_125
  DataType: (memptr (ptr Eq_50) word16)
  OrigDataType: (memptr T_50 (struct 0002 (0 T_145 t0000)))
T_126: (in 0x0000 : word16)
  Class: Eq_125
  DataType: (memptr (ptr Eq_50) word16)
  OrigDataType: word16
T_127: (in di_122 : (memptr (ptr Eq_146) word16))
  Class: Eq_127
  DataType: (memptr (ptr Eq_146) word16)
  OrigDataType: (memptr T_146 (struct 0002 (0 T_149 t0000)))
T_128: (in 0x0000 : word16)
  Class: Eq_127
  DataType: (memptr (ptr Eq_146) word16)
  OrigDataType: word16
T_129: (in eax_130 : word32)
  Class: Eq_129
  DataType: word32
  OrigDataType: word32
T_130: (in 0xA000 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in DPB(eax_155, 0xA000, 0, 16) : word32)
  Class: Eq_129
  DataType: word32
  OrigDataType: word32
T_132: (in cx_132 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in 0x7B0C : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_134: (in 0x7B0C : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_135: (in DPB(ecx_56, 0x7B0C, 0, 16) : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_136: (in al_153 : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_137: (in __inb : ptr32)
  Class: Eq_137
  DataType: (ptr Eq_137)
  OrigDataType: (ptr (fn T_139 (T_138)))
T_138: (in 0x60 : byte)
  Class: Eq_138
  DataType: byte
  OrigDataType: byte
T_139: (in __inb(0x60) : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_140: (in DPB(eax_130, al_153, 0, 8) : word32)
  Class: Eq_45
  DataType: word32
  OrigDataType: word32
T_141: (in 0x81 : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_142: (in al_153 == 0x81 : bool)
  Class: Eq_142
  DataType: bool
  OrigDataType: bool
T_143: (in 0x0000 : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_144: (in si_121 + 0x0000 : word16)
  Class: Eq_144
  DataType: word16
  OrigDataType: word16
T_145: (in Mem114[es_151:si_121 + 0x0000:word16] : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_146: (in 0xA000 : selector)
  Class: Eq_146
  DataType: (ptr Eq_146)
  OrigDataType: (ptr (segment (0 (arr T_429) a0000)))
T_147: (in 0x0000 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_148: (in di_122 + 0x0000 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_149: (in Mem142[0xA000:di_122 + 0x0000:word16] : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_150: (in 0x0001 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_151: (in cx_132 - 0x0001 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_152: (in 0x0002 : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_153: (in si_121 + 0x0002 : word16)
  Class: Eq_125
  DataType: (memptr (ptr Eq_50) word16)
  OrigDataType: word16
T_154: (in 0x0002 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in di_122 + 0x0002 : word16)
  Class: Eq_127
  DataType: (memptr (ptr Eq_146) word16)
  OrigDataType: word16
T_156: (in DPB(ecx_134, cx_132, 0, 16) : word32)
  Class: Eq_21
  DataType: word32
  OrigDataType: word32
T_157: (in 0x0000 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_158: (in cx_132 == 0x0000 : bool)
  Class: Eq_158
  DataType: bool
  OrigDataType: bool
T_159: (in msdos_terminate_program20 : ptr32)
  Class: Eq_159
  DataType: (ptr Eq_159)
  OrigDataType: (ptr (fn T_161 ()))
T_160: (in signature of msdos_terminate_program20 : void)
  Class: Eq_159
  DataType: (ptr Eq_159)
  OrigDataType: 
T_161: (in msdos_terminate_program20() : void)
  Class: Eq_161
  DataType: void
  OrigDataType: void
T_162: (in 0x0000 : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_163: (in 0x02E9 : word16)
  Class: Eq_163
  DataType: (memptr (ptr Eq_46) word16)
  OrigDataType: (memptr T_46 (struct (0 T_164 t0000)))
T_164: (in Mem62[ds:0x02E9:word16] : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_165: (in 0x0000 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_166: (in 0x02E5 : word16)
  Class: Eq_166
  DataType: (memptr (ptr Eq_46) word16)
  OrigDataType: (memptr T_46 (struct (0 T_167 t0000)))
T_167: (in Mem63[ds:0x02E5:word16] : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_168: (in 0x0000 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_169: (in 0x02E7 : word16)
  Class: Eq_169
  DataType: (memptr (ptr Eq_46) word16)
  OrigDataType: (memptr T_46 (struct (0 T_170 t0000)))
T_170: (in Mem64[ds:0x02E7:word16] : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_171: (in 0x0000 : word16)
  Class: Eq_71
  DataType: (memptr (ptr Eq_50) word16)
  OrigDataType: word16
T_172: (in 0x7B0C : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_173: (in 0x7B0C : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_174: (in DPB(ecx_134, 0x7B0C, 0, 16) : word32)
  Class: Eq_80
  DataType: word32
  OrigDataType: word32
T_175: (in 0x0000 : word16)
  Class: Eq_175
  DataType: word16
  OrigDataType: word16
T_176: (in DPB(eax_155, 0x0000, 0, 16) : word32)
  Class: Eq_91
  DataType: word32
  OrigDataType: word32
T_177: (in esp_3 : (memptr (ptr Eq_183) Eq_177))
  Class: Eq_177
  DataType: (memptr (ptr Eq_183) Eq_177)
  OrigDataType: (memptr T_183 (struct (2 T_209 t0002) (4 T_186 t0004) (6 T_192 t0006)))
T_178: (in esp : word32)
  Class: Eq_178
  DataType: word32
  OrigDataType: word32
T_179: (in fp : ptr16)
  Class: Eq_179
  DataType: ptr16
  OrigDataType: ptr16
T_180: (in DPB(esp, fp, 0, 16) : word32)
  Class: Eq_177
  DataType: (memptr (ptr Eq_183) Eq_177)
  OrigDataType: word32
T_181: (in eax_8 : (memptr (ptr Eq_46) int16))
  Class: Eq_181
  DataType: (memptr (ptr Eq_46) int16)
  OrigDataType: (memptr T_195 (struct (0 T_198 t0000)))
T_182: (in eax : word32)
  Class: Eq_91
  DataType: word32
  OrigDataType: word32
T_183: (in ss : selector)
  Class: Eq_183
  DataType: (ptr Eq_183)
  OrigDataType: (ptr (segment))
T_184: (in 0x00000004 : word32)
  Class: Eq_184
  DataType: word32
  OrigDataType: word32
T_185: (in esp_3 + 0x00000004 : word32)
  Class: Eq_185
  DataType: word32
  OrigDataType: word32
T_186: (in Mem0[ss:esp_3 + 0x00000004:word16] : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_187: (in DPB(eax, (ss->*esp_3).w0004, 0, 16) : word32)
  Class: Eq_181
  DataType: (memptr (ptr Eq_46) int16)
  OrigDataType: word32
T_188: (in ebx_11 : (memptr (ptr Eq_46) int16))
  Class: Eq_188
  DataType: (memptr (ptr Eq_46) int16)
  OrigDataType: (memptr T_195 (struct (0 T_203 t0000)))
T_189: (in ebx : word32)
  Class: Eq_93
  DataType: word32
  OrigDataType: word32
T_190: (in 0x00000006 : word32)
  Class: Eq_190
  DataType: word32
  OrigDataType: word32
T_191: (in esp_3 + 0x00000006 : word32)
  Class: Eq_191
  DataType: word32
  OrigDataType: word32
T_192: (in Mem0[ss:esp_3 + 0x00000006:word16] : word16)
  Class: Eq_192
  DataType: word16
  OrigDataType: word16
T_193: (in DPB(ebx, (ss->*esp_3).w0006, 0, 16) : word32)
  Class: Eq_188
  DataType: (memptr (ptr Eq_46) int16)
  OrigDataType: word32
T_194: (in rLoc1_16 : real64)
  Class: Eq_194
  DataType: real64
  OrigDataType: real64
T_195: (in ds : (ptr Eq_46))
  Class: Eq_46
  DataType: (ptr Eq_46)
  OrigDataType: (ptr (segment (2CD T_234 t02CD) (2EB Eq_215 t02EB)))
T_196: (in 0x00000000 : word32)
  Class: Eq_196
  DataType: word32
  OrigDataType: word32
T_197: (in eax_8 + 0x00000000 : word32)
  Class: Eq_197
  DataType: word32
  OrigDataType: word32
T_198: (in Mem0[ds:eax_8 + 0x00000000:int16] : int16)
  Class: Eq_198
  DataType: int16
  OrigDataType: int16
T_199: (in (real64) (ds->*eax_8) : real64)
  Class: Eq_194
  DataType: real64
  OrigDataType: real64
T_200: (in rLoc2_18 : real64)
  Class: Eq_200
  DataType: real64
  OrigDataType: real64
T_201: (in 0x00000000 : word32)
  Class: Eq_201
  DataType: word32
  OrigDataType: word32
T_202: (in ebx_11 + 0x00000000 : word32)
  Class: Eq_202
  DataType: word32
  OrigDataType: word32
T_203: (in Mem0[ds:ebx_11 + 0x00000000:int16] : int16)
  Class: Eq_203
  DataType: int16
  OrigDataType: int16
T_204: (in (real64) (ds->*ebx_11) : real64)
  Class: Eq_200
  DataType: real64
  OrigDataType: real64
T_205: (in ecx_14 : (memptr (ptr Eq_46) int16))
  Class: Eq_205
  DataType: (memptr (ptr Eq_46) int16)
  OrigDataType: (memptr T_195 (struct (0 T_231 t0000)))
T_206: (in ecx : word32)
  Class: Eq_80
  DataType: word32
  OrigDataType: word32
T_207: (in 0x00000002 : word32)
  Class: Eq_207
  DataType: word32
  OrigDataType: word32
T_208: (in esp_3 + 0x00000002 : word32)
  Class: Eq_208
  DataType: word32
  OrigDataType: word32
T_209: (in Mem0[ss:esp_3 + 0x00000002:word16] : word16)
  Class: Eq_209
  DataType: word16
  OrigDataType: word16
T_210: (in DPB(ecx, (ss->*esp_3).w0002, 0, 16) : word32)
  Class: Eq_205
  DataType: (memptr (ptr Eq_46) int16)
  OrigDataType: word32
T_211: (in sqrt : ptr32)
  Class: Eq_211
  DataType: (ptr Eq_211)
  OrigDataType: (ptr (fn T_215 (T_214)))
T_212: (in rLoc1_16 * rLoc1_16 : real64)
  Class: Eq_212
  DataType: real64
  OrigDataType: real64
T_213: (in rLoc2_18 * rLoc2_18 : real64)
  Class: Eq_213
  DataType: real64
  OrigDataType: real64
T_214: (in rLoc1_16 * rLoc1_16 + rLoc2_18 * rLoc2_18 : real64)
  Class: Eq_214
  DataType: real64
  OrigDataType: real64
T_215: (in sqrt(rLoc1_16 * rLoc1_16 + rLoc2_18 * rLoc2_18) : real64)
  Class: Eq_215
  DataType: Eq_215
  OrigDataType: real64
T_216: (in 0x02EB : word16)
  Class: Eq_216
  DataType: (memptr (ptr Eq_46) Eq_215)
  OrigDataType: (memptr T_195 (struct (0 T_217 t0000)))
T_217: (in Mem22[ds:0x02EB:real32] : real32)
  Class: Eq_215
  DataType: Eq_215
  OrigDataType: real32
T_218: (in rLoc1_28 : real64)
  Class: Eq_218
  DataType: real64
  OrigDataType: real64
T_219: (in atan : ptr32)
  Class: Eq_219
  DataType: (ptr Eq_219)
  OrigDataType: (ptr (fn T_228 (T_223, T_227)))
T_220: (in 0x00000000 : word32)
  Class: Eq_220
  DataType: word32
  OrigDataType: word32
T_221: (in eax_8 + 0x00000000 : word32)
  Class: Eq_221
  DataType: word32
  OrigDataType: word32
T_222: (in Mem22[ds:eax_8 + 0x00000000:int16] : int16)
  Class: Eq_198
  DataType: int16
  OrigDataType: int16
T_223: (in (real64) (ds->*eax_8) : real64)
  Class: Eq_223
  DataType: real64
  OrigDataType: real64
T_224: (in 0x00000000 : word32)
  Class: Eq_224
  DataType: word32
  OrigDataType: word32
T_225: (in ebx_11 + 0x00000000 : word32)
  Class: Eq_225
  DataType: word32
  OrigDataType: word32
T_226: (in Mem22[ds:ebx_11 + 0x00000000:int16] : int16)
  Class: Eq_203
  DataType: int16
  OrigDataType: int16
T_227: (in (real64) (ds->*ebx_11) : real64)
  Class: Eq_227
  DataType: real64
  OrigDataType: real64
T_228: (in atan((real64) (ds->*eax_8), (real64) (ds->*ebx_11)) : real64)
  Class: Eq_228
  DataType: real64
  OrigDataType: real64
T_229: (in 0x00000000 : word32)
  Class: Eq_229
  DataType: word32
  OrigDataType: word32
T_230: (in ecx_14 + 0x00000000 : word32)
  Class: Eq_230
  DataType: word32
  OrigDataType: word32
T_231: (in Mem22[ds:ecx_14 + 0x00000000:int16] : int16)
  Class: Eq_231
  DataType: int16
  OrigDataType: int16
T_232: (in (real64) (ds->*ecx_14) : real64)
  Class: Eq_232
  DataType: Eq_232
  OrigDataType: (union (real16 u0) (real64 u1))
T_233: (in 0x02CD : word16)
  Class: Eq_233
  DataType: (memptr (ptr Eq_46) word16)
  OrigDataType: (memptr T_195 (struct (0 T_234 t0000)))
T_234: (in Mem22[ds:0x02CD:word16] : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_235: (in (real64) ds->w02CD : real64)
  Class: Eq_235
  DataType: Eq_235
  OrigDataType: (union (real16 u0) (real64 u1))
T_236: (in (real64) (ds->*ecx_14) / (real64) ds->w02CD : word16)
  Class: Eq_236
  DataType: Eq_236
  OrigDataType: (union (real16 u0) (real64 u1))
T_237: (in atan((real64) (ds->*eax_8), (real64) (ds->*ebx_11)) + (real64) (ds->*ecx_14) / (real64) ds->w02CD : real64)
  Class: Eq_218
  DataType: real64
  OrigDataType: real64
T_238: (in rLoc1_30 : Eq_238)
  Class: Eq_238
  DataType: Eq_238
  OrigDataType: (union (real16 u0) (real64 u1))
T_239: (in cos : ptr32)
  Class: Eq_239
  DataType: (ptr Eq_239)
  OrigDataType: (ptr (fn T_240 (T_218)))
T_240: (in cos(rLoc1_28) : real64)
  Class: Eq_238
  DataType: Eq_238
  OrigDataType: real64
T_241: (in sin : ptr32)
  Class: Eq_241
  DataType: (ptr Eq_241)
  OrigDataType: (ptr (fn T_242 (T_218)))
T_242: (in sin(rLoc1_28) : real64)
  Class: Eq_242
  DataType: Eq_242
  OrigDataType: (union (real16 u0) (real64 u1))
T_243: (in 0x02EB : word16)
  Class: Eq_243
  DataType: (memptr (ptr Eq_46) Eq_215)
  OrigDataType: (memptr T_195 (struct (0 T_244 t0000)))
T_244: (in Mem22[ds:0x02EB:real32] : real32)
  Class: Eq_215
  DataType: Eq_215
  OrigDataType: (union (real16 u0) (real32 u1))
T_245: (in sin(rLoc1_28) * ds->t02EB : word16)
  Class: Eq_245
  DataType: real16
  OrigDataType: real16
T_246: (in (int16) (sin(rLoc1_28) * ds->t02EB) : int16)
  Class: Eq_203
  DataType: int16
  OrigDataType: int16
T_247: (in 0x00000000 : word32)
  Class: Eq_247
  DataType: word32
  OrigDataType: word32
T_248: (in ebx_11 + 0x00000000 : word32)
  Class: Eq_248
  DataType: word32
  OrigDataType: word32
T_249: (in Mem33[ds:ebx_11 + 0x00000000:int16] : int16)
  Class: Eq_203
  DataType: int16
  OrigDataType: int16
T_250: (in 0x02EB : word16)
  Class: Eq_250
  DataType: (memptr (ptr Eq_46) Eq_215)
  OrigDataType: (memptr T_195 (struct (0 T_251 t0000)))
T_251: (in Mem33[ds:0x02EB:real32] : real32)
  Class: Eq_215
  DataType: Eq_215
  OrigDataType: (union (real16 u0) (real32 u1))
T_252: (in rLoc1_30 * ds->t02EB : word16)
  Class: Eq_252
  DataType: real16
  OrigDataType: real16
T_253: (in (int16) (rLoc1_30 * ds->t02EB) : int16)
  Class: Eq_198
  DataType: int16
  OrigDataType: int16
T_254: (in 0x00000000 : word32)
  Class: Eq_254
  DataType: word32
  OrigDataType: word32
T_255: (in eax_8 + 0x00000000 : word32)
  Class: Eq_255
  DataType: word32
  OrigDataType: word32
T_256: (in Mem35[ds:eax_8 + 0x00000000:int16] : int16)
  Class: Eq_198
  DataType: int16
  OrigDataType: int16
T_257: (in esp_3 : (memptr (ptr Eq_262) Eq_257))
  Class: Eq_257
  DataType: (memptr (ptr Eq_262) Eq_257)
  OrigDataType: (memptr T_262 (struct (2 T_265 t0002) (4 T_293 t0004)))
T_258: (in esp : word32)
  Class: Eq_258
  DataType: word32
  OrigDataType: word32
T_259: (in fp : ptr16)
  Class: Eq_259
  DataType: ptr16
  OrigDataType: ptr16
T_260: (in DPB(esp, fp, 0, 16) : word32)
  Class: Eq_257
  DataType: (memptr (ptr Eq_262) Eq_257)
  OrigDataType: word32
T_261: (in rLoc1_8 : Eq_261)
  Class: Eq_261
  DataType: Eq_261
  OrigDataType: real64
T_262: (in ss : selector)
  Class: Eq_262
  DataType: (ptr Eq_262)
  OrigDataType: (ptr (segment))
T_263: (in 0x00000002 : word32)
  Class: Eq_263
  DataType: word32
  OrigDataType: word32
T_264: (in esp_3 + 0x00000002 : word32)
  Class: Eq_264
  DataType: word32
  OrigDataType: word32
T_265: (in Mem0[ss:esp_3 + 0x00000002:int16] : int16)
  Class: Eq_265
  DataType: int16
  OrigDataType: int16
T_266: (in (real64) (ss->*esp_3).w0002 : real64)
  Class: Eq_266
  DataType: Eq_266
  OrigDataType: (union (real16 u0) (real64 u1))
T_267: (in 0x02D5 : word16)
  Class: Eq_267
  DataType: (memptr (ptr Eq_46) word16)
  OrigDataType: (memptr T_95 (struct (0 T_268 t0000)))
T_268: (in Mem0[ds:0x02D5:word16] : word16)
  Class: Eq_268
  DataType: word16
  OrigDataType: word16
T_269: (in (real64) ds->w02D5 : real64)
  Class: Eq_269
  DataType: Eq_269
  OrigDataType: (union (real16 u0) (real64 u1))
T_270: (in (real64) (ss->*esp_3).w0002 / (real64) ds->w02D5 : word16)
  Class: Eq_261
  DataType: Eq_261
  OrigDataType: real16
T_271: (in rLoc1_10 : Eq_271)
  Class: Eq_271
  DataType: Eq_271
  OrigDataType: (union (real16 u0) (real64 u1))
T_272: (in cos : ptr32)
  Class: Eq_272
  DataType: (ptr Eq_272)
  OrigDataType: (ptr (fn T_273 (T_261)))
T_273: (in cos(rLoc1_8) : real64)
  Class: Eq_271
  DataType: Eq_271
  OrigDataType: real64
T_274: (in sin : ptr32)
  Class: Eq_274
  DataType: (ptr Eq_274)
  OrigDataType: (ptr (fn T_275 (T_261)))
T_275: (in sin(rLoc1_8) : real64)
  Class: Eq_275
  DataType: Eq_275
  OrigDataType: (union (real16 u0) (real64 u1))
T_276: (in 0x02CD : word16)
  Class: Eq_276
  DataType: (memptr (ptr Eq_46) word16)
  OrigDataType: (memptr T_95 (struct (0 T_277 t0000)))
T_277: (in Mem0[ds:0x02CD:word16] : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_278: (in (real64) ds->w02CD : real64)
  Class: Eq_278
  DataType: Eq_278
  OrigDataType: (union (real16 u0) (real64 u1))
T_279: (in sin(rLoc1_8) * (real64) ds->w02CD : word16)
  Class: Eq_279
  DataType: real16
  OrigDataType: real16
T_280: (in (int16) (sin(rLoc1_8) * (real64) ds->w02CD) : int16)
  Class: Eq_280
  DataType: int16
  OrigDataType: int16
T_281: (in 0x02DF : word16)
  Class: Eq_281
  DataType: (memptr (ptr Eq_46) int16)
  OrigDataType: (memptr T_95 (struct (0 T_282 t0000)))
T_282: (in Mem13[ds:0x02DF:int16] : int16)
  Class: Eq_280
  DataType: int16
  OrigDataType: int16
T_283: (in 0x02CD : word16)
  Class: Eq_283
  DataType: (memptr (ptr Eq_46) word16)
  OrigDataType: (memptr T_95 (struct (0 T_284 t0000)))
T_284: (in Mem13[ds:0x02CD:word16] : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_285: (in (real64) ds->w02CD : real64)
  Class: Eq_285
  DataType: Eq_285
  OrigDataType: (union (real16 u0) (real64 u1))
T_286: (in rLoc1_10 * (real64) ds->w02CD : word16)
  Class: Eq_286
  DataType: real16
  OrigDataType: real16
T_287: (in (int16) (rLoc1_10 * (real64) ds->w02CD) : int16)
  Class: Eq_287
  DataType: int16
  OrigDataType: int16
T_288: (in 0x02E3 : word16)
  Class: Eq_288
  DataType: (memptr (ptr Eq_46) int16)
  OrigDataType: (memptr T_95 (struct (0 T_289 t0000)))
T_289: (in Mem15[ds:0x02E3:int16] : int16)
  Class: Eq_287
  DataType: int16
  OrigDataType: int16
T_290: (in rLoc1_17 : Eq_290)
  Class: Eq_290
  DataType: Eq_290
  OrigDataType: real64
T_291: (in 0x00000004 : word32)
  Class: Eq_291
  DataType: word32
  OrigDataType: word32
T_292: (in esp_3 + 0x00000004 : word32)
  Class: Eq_292
  DataType: word32
  OrigDataType: word32
T_293: (in Mem15[ss:esp_3 + 0x00000004:int16] : int16)
  Class: Eq_293
  DataType: int16
  OrigDataType: int16
T_294: (in (real64) (ss->*esp_3).w0004 : real64)
  Class: Eq_294
  DataType: Eq_294
  OrigDataType: (union (real16 u0) (real64 u1))
T_295: (in 0x02D5 : word16)
  Class: Eq_295
  DataType: (memptr (ptr Eq_46) word16)
  OrigDataType: (memptr T_95 (struct (0 T_296 t0000)))
T_296: (in Mem15[ds:0x02D5:word16] : word16)
  Class: Eq_268
  DataType: word16
  OrigDataType: word16
T_297: (in (real64) ds->w02D5 : real64)
  Class: Eq_297
  DataType: Eq_297
  OrigDataType: (union (real16 u0) (real64 u1))
T_298: (in (real64) (ss->*esp_3).w0004 / (real64) ds->w02D5 : word16)
  Class: Eq_290
  DataType: Eq_290
  OrigDataType: real16
T_299: (in rLoc1_19 : Eq_299)
  Class: Eq_299
  DataType: Eq_299
  OrigDataType: (union (real16 u0) (real64 u1))
T_300: (in cos : ptr32)
  Class: Eq_300
  DataType: (ptr Eq_300)
  OrigDataType: (ptr (fn T_301 (T_290)))
T_301: (in cos(rLoc1_17) : real64)
  Class: Eq_299
  DataType: Eq_299
  OrigDataType: real64
T_302: (in sin : ptr32)
  Class: Eq_302
  DataType: (ptr Eq_302)
  OrigDataType: (ptr (fn T_303 (T_290)))
T_303: (in sin(rLoc1_17) : real64)
  Class: Eq_303
  DataType: Eq_303
  OrigDataType: (union (real16 u0) (real64 u1))
T_304: (in 0x02E3 : word16)
  Class: Eq_304
  DataType: (memptr (ptr Eq_46) int16)
  OrigDataType: (memptr T_95 (struct (0 T_305 t0000)))
T_305: (in Mem15[ds:0x02E3:word16] : word16)
  Class: Eq_287
  DataType: int16
  OrigDataType: word16
T_306: (in (real64) ds->w02E3 : real64)
  Class: Eq_306
  DataType: Eq_306
  OrigDataType: (union (real16 u0) (real64 u1))
T_307: (in sin(rLoc1_17) * (real64) ds->w02E3 : word16)
  Class: Eq_307
  DataType: real16
  OrigDataType: real16
T_308: (in (int16) (sin(rLoc1_17) * (real64) ds->w02E3) : int16)
  Class: Eq_308
  DataType: int16
  OrigDataType: int16
T_309: (in 0x02E1 : word16)
  Class: Eq_309
  DataType: (memptr (ptr Eq_46) int16)
  OrigDataType: (memptr T_95 (struct (0 T_310 t0000)))
T_310: (in Mem22[ds:0x02E1:int16] : int16)
  Class: Eq_308
  DataType: int16
  OrigDataType: int16
T_311: (in 0x02E3 : word16)
  Class: Eq_311
  DataType: (memptr (ptr Eq_46) int16)
  OrigDataType: (memptr T_95 (struct (0 T_312 t0000)))
T_312: (in Mem22[ds:0x02E3:word16] : word16)
  Class: Eq_287
  DataType: int16
  OrigDataType: word16
T_313: (in (real64) ds->w02E3 : real64)
  Class: Eq_313
  DataType: Eq_313
  OrigDataType: (union (real16 u0) (real64 u1))
T_314: (in rLoc1_19 * (real64) ds->w02E3 : word16)
  Class: Eq_314
  DataType: real16
  OrigDataType: real16
T_315: (in (int16) (rLoc1_19 * (real64) ds->w02E3) : int16)
  Class: Eq_287
  DataType: int16
  OrigDataType: int16
T_316: (in 0x02E3 : word16)
  Class: Eq_316
  DataType: (memptr (ptr Eq_46) int16)
  OrigDataType: (memptr T_95 (struct (0 T_317 t0000)))
T_317: (in Mem24[ds:0x02E3:int16] : int16)
  Class: Eq_287
  DataType: int16
  OrigDataType: int16
T_318: (in fn0C00_019C : ptr32)
  Class: Eq_318
  DataType: (ptr Eq_318)
  OrigDataType: (ptr (fn T_320 (T_91, T_92, T_93, T_95)))
T_319: (in signature of fn0C00_019C : void)
  Class: Eq_318
  DataType: (ptr Eq_318)
  OrigDataType: 
T_320: (in fn0C00_019C(eax, ecx, ebx, ds) : void)
  Class: Eq_320
  DataType: void
  OrigDataType: void
T_321: (in fn0C00_019C : ptr32)
  Class: Eq_318
  DataType: (ptr Eq_318)
  OrigDataType: (ptr (fn T_322 (T_91, T_92, T_93, T_95)))
T_322: (in fn0C00_019C(eax, ecx, ebx, ds) : void)
  Class: Eq_320
  DataType: void
  OrigDataType: void
T_323: (in fn0C00_019C : ptr32)
  Class: Eq_318
  DataType: (ptr Eq_318)
  OrigDataType: (ptr (fn T_324 (T_91, T_92, T_93, T_95)))
T_324: (in fn0C00_019C(eax, ecx, ebx, ds) : void)
  Class: Eq_320
  DataType: void
  OrigDataType: void
T_325: (in rLoc2_52 : Eq_325)
  Class: Eq_325
  DataType: Eq_325
  OrigDataType: real64
T_326: (in 0x02DF : word16)
  Class: Eq_326
  DataType: (memptr (ptr Eq_46) int16)
  OrigDataType: (memptr T_95 (struct (0 T_327 t0000)))
T_327: (in Mem24[ds:0x02DF:int16] : int16)
  Class: Eq_280
  DataType: int16
  OrigDataType: int16
T_328: (in (real64) ds->w02DF : real64)
  Class: Eq_328
  DataType: Eq_328
  OrigDataType: (union (real16 u0) (real64 u1))
T_329: (in 0x02C1 : word16)
  Class: Eq_329
  DataType: (memptr (ptr Eq_46) word16)
  OrigDataType: (memptr T_95 (struct (0 T_330 t0000)))
T_330: (in Mem24[ds:0x02C1:word16] : word16)
  Class: Eq_330
  DataType: word16
  OrigDataType: word16
T_331: (in (real64) ds->w02C1 : real64)
  Class: Eq_331
  DataType: Eq_331
  OrigDataType: (union (real16 u0) (real64 u1))
T_332: (in (real64) ds->w02DF - (real64) ds->w02C1 : word16)
  Class: Eq_325
  DataType: Eq_325
  OrigDataType: real16
T_333: (in rLoc3_55 : Eq_333)
  Class: Eq_333
  DataType: Eq_333
  OrigDataType: real64
T_334: (in 0x02E1 : word16)
  Class: Eq_334
  DataType: (memptr (ptr Eq_46) int16)
  OrigDataType: (memptr T_95 (struct (0 T_335 t0000)))
T_335: (in Mem24[ds:0x02E1:int16] : int16)
  Class: Eq_308
  DataType: int16
  OrigDataType: int16
T_336: (in (real64) ds->w02E1 : real64)
  Class: Eq_336
  DataType: Eq_336
  OrigDataType: (union (real16 u0) (real64 u1))
T_337: (in 0x02C3 : word16)
  Class: Eq_337
  DataType: (memptr (ptr Eq_46) word16)
  OrigDataType: (memptr T_95 (struct (0 T_338 t0000)))
T_338: (in Mem24[ds:0x02C3:word16] : word16)
  Class: Eq_338
  DataType: word16
  OrigDataType: word16
T_339: (in (real64) ds->w02C3 : real64)
  Class: Eq_339
  DataType: Eq_339
  OrigDataType: (union (real16 u0) (real64 u1))
T_340: (in (real64) ds->w02E1 - (real64) ds->w02C3 : word16)
  Class: Eq_333
  DataType: Eq_333
  OrigDataType: real16
T_341: (in rLoc4_58 : Eq_341)
  Class: Eq_341
  DataType: Eq_341
  OrigDataType: real64
T_342: (in 0x02E3 : word16)
  Class: Eq_342
  DataType: (memptr (ptr Eq_46) int16)
  OrigDataType: (memptr T_95 (struct (0 T_343 t0000)))
T_343: (in Mem24[ds:0x02E3:int16] : int16)
  Class: Eq_287
  DataType: int16
  OrigDataType: int16
T_344: (in (real64) ds->w02E3 : real64)
  Class: Eq_344
  DataType: Eq_344
  OrigDataType: (union (real16 u0) (real64 u1))
T_345: (in 0x02C5 : word16)
  Class: Eq_345
  DataType: (memptr (ptr Eq_46) word16)
  OrigDataType: (memptr T_95 (struct (0 T_346 t0000)))
T_346: (in Mem24[ds:0x02C5:word16] : word16)
  Class: Eq_346
  DataType: word16
  OrigDataType: word16
T_347: (in (real64) ds->w02C5 : real64)
  Class: Eq_347
  DataType: Eq_347
  OrigDataType: (union (real16 u0) (real64 u1))
T_348: (in (real64) ds->w02E3 - (real64) ds->w02C5 : word16)
  Class: Eq_341
  DataType: Eq_341
  OrigDataType: real16
T_349: (in 0x02C7 : word16)
  Class: Eq_349
  DataType: (memptr (ptr Eq_46) int16)
  OrigDataType: (memptr T_95 (struct (0 T_350 t0000)))
T_350: (in Mem24[ds:0x02C7:int16] : int16)
  Class: Eq_350
  DataType: int16
  OrigDataType: int16
T_351: (in (real64) ds->w02C7 : real64)
  Class: Eq_351
  DataType: real64
  OrigDataType: real64
T_352: (in rLoc2_52 * rLoc2_52 : real64)
  Class: Eq_352
  DataType: real64
  OrigDataType: real64
T_353: (in rLoc3_55 * rLoc3_55 : real64)
  Class: Eq_353
  DataType: real64
  OrigDataType: real64
T_354: (in rLoc4_58 * rLoc4_58 : real64)
  Class: Eq_354
  DataType: real64
  OrigDataType: real64
T_355: (in rLoc3_55 * rLoc3_55 + rLoc4_58 * rLoc4_58 : real64)
  Class: Eq_355
  DataType: real64
  OrigDataType: real64
T_356: (in rLoc2_52 * rLoc2_52 + (rLoc3_55 * rLoc3_55 + rLoc4_58 * rLoc4_58) : real64)
  Class: Eq_356
  DataType: Eq_356
  OrigDataType: (union (real16 u0) (real64 u1))
T_357: (in 0x02C9 : word16)
  Class: Eq_357
  DataType: (memptr (ptr Eq_46) word16)
  OrigDataType: (memptr T_95 (struct (0 T_358 t0000)))
T_358: (in Mem24[ds:0x02C9:word16] : word16)
  Class: Eq_358
  DataType: word16
  OrigDataType: word16
T_359: (in (real64) ds->w02C9 : real64)
  Class: Eq_359
  DataType: Eq_359
  OrigDataType: (union (real16 u0) (real64 u1))
T_360: (in (rLoc2_52 * rLoc2_52 + (rLoc3_55 * rLoc3_55 + rLoc4_58 * rLoc4_58)) / (real64) ds->w02C9 : word16)
  Class: Eq_360
  DataType: real16
  OrigDataType: real16
T_361: (in 0x02CB : word16)
  Class: Eq_361
  DataType: (memptr (ptr Eq_46) word16)
  OrigDataType: (memptr T_95 (struct (0 T_362 t0000)))
T_362: (in Mem24[ds:0x02CB:word16] : word16)
  Class: Eq_362
  DataType: word16
  OrigDataType: word16
T_363: (in (real64) ds->w02CB : real64)
  Class: Eq_363
  DataType: Eq_363
  OrigDataType: (union (real16 u0) (real64 u1))
T_364: (in (rLoc2_52 * rLoc2_52 + (rLoc3_55 * rLoc3_55 + rLoc4_58 * rLoc4_58)) / (real64) ds->w02C9 + (real64) ds->w02CB : word16)
  Class: Eq_364
  DataType: Eq_364
  OrigDataType: (union (real16 u0) (real64 u1))
T_365: (in (real64) ds->w02C7 / ((rLoc2_52 * rLoc2_52 + (rLoc3_55 * rLoc3_55 + rLoc4_58 * rLoc4_58)) / (real64) ds->w02C9 + (real64) ds->w02CB) : real64)
  Class: Eq_365
  DataType: real64
  OrigDataType: real64
T_366: (in (int16) ((real64) ds->w02C7 / ((rLoc2_52 * rLoc2_52 + (rLoc3_55 * rLoc3_55 + rLoc4_58 * rLoc4_58)) / (real64) ds->w02C9 + (real64) ds->w02CB)) : int16)
  Class: Eq_366
  DataType: int16
  OrigDataType: int16
T_367: (in 0x02DD : word16)
  Class: Eq_367
  DataType: (memptr (ptr Eq_46) int16)
  OrigDataType: (memptr T_95 (struct (0 T_368 t0000)))
T_368: (in Mem65[ds:0x02DD:int16] : int16)
  Class: Eq_366
  DataType: int16
  OrigDataType: int16
T_369: (in rLoc3_69 : Eq_369)
  Class: Eq_369
  DataType: Eq_369
  OrigDataType: real64
T_370: (in 0x02E3 : word16)
  Class: Eq_370
  DataType: (memptr (ptr Eq_46) int16)
  OrigDataType: (memptr T_95 (struct (0 T_371 t0000)))
T_371: (in Mem65[ds:0x02E3:int16] : int16)
  Class: Eq_287
  DataType: int16
  OrigDataType: int16
T_372: (in (real64) ds->w02E3 : real64)
  Class: Eq_372
  DataType: Eq_372
  OrigDataType: (union (real16 u0) (real64 u1))
T_373: (in 0x02D5 : word16)
  Class: Eq_373
  DataType: (memptr (ptr Eq_46) word16)
  OrigDataType: (memptr T_95 (struct (0 T_374 t0000)))
T_374: (in Mem65[ds:0x02D5:word16] : word16)
  Class: Eq_268
  DataType: word16
  OrigDataType: word16
T_375: (in (real64) ds->w02D5 : real64)
  Class: Eq_375
  DataType: Eq_375
  OrigDataType: (union (real16 u0) (real64 u1))
T_376: (in (real64) ds->w02E3 / (real64) ds->w02D5 : word16)
  Class: Eq_369
  DataType: Eq_369
  OrigDataType: real16
T_377: (in rLoc2_67 : Eq_377)
  Class: Eq_377
  DataType: Eq_377
  OrigDataType: (union (64 u0) (real64 u1))
T_378: (in 0x02E1 : word16)
  Class: Eq_378
  DataType: (memptr (ptr Eq_46) int16)
  OrigDataType: (memptr T_95 (struct (0 T_379 t0000)))
T_379: (in Mem65[ds:0x02E1:int16] : int16)
  Class: Eq_308
  DataType: int16
  OrigDataType: int16
T_380: (in (real64) ds->w02E1 : real64)
  Class: Eq_377
  DataType: Eq_377
  OrigDataType: real64
T_381: (in rLoc1_74 : Eq_381)
  Class: Eq_381
  DataType: Eq_381
  OrigDataType: (union (real16 u0) (real64 u1))
T_382: (in 0x02DF : word16)
  Class: Eq_382
  DataType: (memptr (ptr Eq_46) int16)
  OrigDataType: (memptr T_95 (struct (0 T_383 t0000)))
T_383: (in Mem65[ds:0x02DF:int16] : int16)
  Class: Eq_280
  DataType: int16
  OrigDataType: int16
T_384: (in (real64) ds->w02DF : real64)
  Class: Eq_384
  DataType: real64
  OrigDataType: real64
T_385: (in 1 : real64)
  Class: Eq_385
  DataType: real64
  OrigDataType: real64
T_386: (in rLoc3_69 + 1 : real64)
  Class: Eq_386
  DataType: real64
  OrigDataType: real64
T_387: (in rLoc3_69 + (rLoc3_69 + 1) : real64)
  Class: Eq_387
  DataType: real64
  OrigDataType: real64
T_388: (in rLoc2_67 / (rLoc3_69 + (rLoc3_69 + 1)) : real64)
  Class: Eq_388
  DataType: real64
  OrigDataType: real64
T_389: (in (real64) ds->w02DF / (rLoc2_67 / (rLoc3_69 + (rLoc3_69 + 1))) : real64)
  Class: Eq_381
  DataType: Eq_381
  OrigDataType: real64
T_390: (in -rLoc2_67 : real64)
  Class: Eq_390
  DataType: 64
  OrigDataType: 64
T_391: (in (int16) -rLoc2_67 : int16)
  Class: Eq_308
  DataType: int16
  OrigDataType: int16
T_392: (in 0x02E1 : word16)
  Class: Eq_392
  DataType: (memptr (ptr Eq_46) int16)
  OrigDataType: (memptr T_95 (struct (0 T_393 t0000)))
T_393: (in Mem76[ds:0x02E1:int16] : int16)
  Class: Eq_308
  DataType: int16
  OrigDataType: int16
T_394: (in 0x02D1 : word16)
  Class: Eq_394
  DataType: (memptr (ptr Eq_46) Eq_395)
  OrigDataType: (memptr T_95 (struct (0 T_395 t0000)))
T_395: (in Mem76[ds:0x02D1:real32] : real32)
  Class: Eq_395
  DataType: Eq_395
  OrigDataType: (union (real16 u0) (real32 u1))
T_396: (in rLoc1_74 * ds->t02D1 : word16)
  Class: Eq_396
  DataType: real16
  OrigDataType: real16
T_397: (in (int16) (rLoc1_74 * ds->t02D1) : int16)
  Class: Eq_280
  DataType: int16
  OrigDataType: int16
T_398: (in 0x02DF : word16)
  Class: Eq_398
  DataType: (memptr (ptr Eq_46) int16)
  OrigDataType: (memptr T_95 (struct (0 T_399 t0000)))
T_399: (in Mem78[ds:0x02DF:int16] : int16)
  Class: Eq_280
  DataType: int16
  OrigDataType: int16
T_400: (in bx_86 : (memptr (ptr Eq_50) bcu8))
  Class: Eq_400
  DataType: (memptr (ptr Eq_50) bcu8)
  OrigDataType: (memptr T_94 (struct (0 T_420 t0000)))
T_401: (in 0x02E1 : word16)
  Class: Eq_401
  DataType: (memptr (ptr Eq_46) int16)
  OrigDataType: (memptr T_95 (struct (0 T_402 t0000)))
T_402: (in Mem78[ds:0x02E1:word16] : word16)
  Class: Eq_308
  DataType: int16
  OrigDataType: word16
T_403: (in 0x0062 : word16)
  Class: Eq_403
  DataType: word16
  OrigDataType: word16
T_404: (in ds->w02E1 + 0x0062 : word16)
  Class: Eq_404
  DataType: uint16
  OrigDataType: uint16
T_405: (in 0x0140 : word16)
  Class: Eq_405
  DataType: uint16
  OrigDataType: uint16
T_406: (in (ds->w02E1 + 0x0062) *u 0x0140 : uint32)
  Class: Eq_406
  DataType: uint32
  OrigDataType: uint32
T_407: (in (word16) ((ds->w02E1 + 0x0062) *u 0x0140) : word16)
  Class: Eq_407
  DataType: word16
  OrigDataType: word16
T_408: (in 0x00A0 : word16)
  Class: Eq_408
  DataType: word16
  OrigDataType: word16
T_409: (in (word16) ((ds->w02E1 + 0x0062) *u 0x0140) + 0x00A0 : word16)
  Class: Eq_409
  DataType: word16
  OrigDataType: word16
T_410: (in 0x02DF : word16)
  Class: Eq_410
  DataType: (memptr (ptr Eq_46) int16)
  OrigDataType: (memptr T_95 (struct (0 T_411 t0000)))
T_411: (in Mem78[ds:0x02DF:word16] : word16)
  Class: Eq_280
  DataType: int16
  OrigDataType: word16
T_412: (in (word16) ((ds->w02E1 + 0x0062) *u 0x0140) + 0x00A0 + ds->w02DF : word16)
  Class: Eq_400
  DataType: (memptr (ptr Eq_50) bcu8)
  OrigDataType: word16
T_413: (in 0x02DD : word16)
  Class: Eq_413
  DataType: (memptr (ptr Eq_46) int16)
  OrigDataType: (memptr T_95 (struct (0 T_414 t0000)))
T_414: (in Mem78[ds:0x02DD:word16] : word16)
  Class: Eq_366
  DataType: int16
  OrigDataType: word16
T_415: (in SLICE(ds->w02DD, byte, 8) : byte)
  Class: Eq_415
  DataType: byte
  OrigDataType: byte
T_416: (in 0x00 : byte)
  Class: Eq_415
  DataType: byte
  OrigDataType: byte
T_417: (in SLICE(ds->w02DD, byte, 8) == 0x00 : bool)
  Class: Eq_417
  DataType: bool
  OrigDataType: bool
T_418: (in 0x0000 : word16)
  Class: Eq_418
  DataType: word16
  OrigDataType: word16
T_419: (in bx_86 + 0x0000 : word16)
  Class: Eq_419
  DataType: word16
  OrigDataType: word16
T_420: (in Mem78[es:bx_86 + 0x0000:byte] : byte)
  Class: Eq_420
  DataType: bcu8
  OrigDataType: bcu8
T_421: (in 0xFA : byte)
  Class: Eq_420
  DataType: bcu8
  OrigDataType: bcu8
T_422: (in es->*bx_86 >u 0xFA : bool)
  Class: Eq_422
  DataType: bool
  OrigDataType: bool
T_423: (in 0xFA : byte)
  Class: Eq_420
  DataType: bcu8
  OrigDataType: byte
T_424: (in 0x0000 : word16)
  Class: Eq_424
  DataType: word16
  OrigDataType: word16
T_425: (in bx_86 + 0x0000 : word16)
  Class: Eq_425
  DataType: word16
  OrigDataType: word16
T_426: (in Mem100[es:bx_86 + 0x0000:byte] : byte)
  Class: Eq_420
  DataType: bcu8
  OrigDataType: byte
T_427:
  Class: Eq_427
  DataType: word16
  OrigDataType: (struct 0002 (0 T_74 t0000))
T_428:
  Class: Eq_427
  DataType: word16
  OrigDataType: (struct 0002 (0 T_145 t0000))
T_429:
  Class: Eq_429
  DataType: word16
  OrigDataType: (struct 0002 (0 T_149 t0000))
*/
typedef Eq_146 Eq_1struct Globals {
	Eq_146 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, byte);

typedef void (Eq_27)(word16, byte);

typedef void (Eq_30)(word16, byte);

typedef void (Eq_33)(word16, byte);

typedef Eq_50 Eq_46Eq_395 Eq_46Eq_215 Eq_46struct Eq_46 {
	Eq_50 t0064;	// 64
	word16 w02C1;	// 2C1
	word16 w02C3;	// 2C3
	word16 w02C5;	// 2C5
	int16 w02C7;	// 2C7
	word16 w02C9;	// 2C9
	word16 w02CB;	// 2CB
	word16 w02CD;	// 2CD
	word16 w02CF;	// 2CF
	Eq_395 t02D1;	// 2D1
	word16 w02D5;	// 2D5
	word16 w02D7;	// 2D7
	word16 w02D9;	// 2D9
	word16 w02DB;	// 2DB
	int16 w02DD;	// 2DD
	int16 w02DF;	// 2DF
	int16 w02E1;	// 2E1
	int16 w02E3;	// 2E3
	word16 w02E5;	// 2E5
	word16 w02E7;	// 2E7
	word16 w02E9;	// 2E9
	Eq_215 t02EB;	// 2EB
} Eq_46;

typedef  Eq_50[]struct Eq_50 {
	word16 a0000[];	// 0
} Eq_50;

typedef void (Eq_89)(word32, word32, word32, Eq_50 *, Eq_46 *);

typedef byte (Eq_137)(byte);

typedef  Eq_146[]struct Eq_146 {
	word16 a0000[];	// 0
} Eq_146;

typedef void (Eq_159)();

typedef struct Eq_177 {
	word16 w0002;	// 2
	word16 w0004;	// 4
	word16 w0006;	// 6
} Eq_177;

typedef struct Eq_183 {
} Eq_183;

typedef Eq_215 (Eq_211)(real64);

typedef union Eq_215 {
	real16 u0;
	real32 u1;
	real64 u2;
} Eq_215;

typedef real64 (Eq_219)(real64, real64);

typedef union Eq_232 {
	real16 u0;
	real64 u1;
} Eq_232;

typedef union Eq_235 {
	real16 u0;
	real64 u1;
} Eq_235;

typedef union Eq_236 {
	real16 u0;
	real64 u1;
} Eq_236;

typedef union Eq_238 {
	real16 u0;
	real64 u1;
} Eq_238;

typedef Eq_238 (Eq_239)(real64);

typedef Eq_242 (Eq_241)(real64);

typedef union Eq_242 {
	real16 u0;
	real64 u1;
} Eq_242;

typedef struct Eq_257 {
	int16 w0002;	// 2
	int16 w0004;	// 4
} Eq_257;

typedef union Eq_261 {
	real16 u0;
	real64 u1;
} Eq_261;

typedef struct Eq_262 {
} Eq_262;

typedef union Eq_266 {
	real16 u0;
	real64 u1;
} Eq_266;

typedef union Eq_269 {
	real16 u0;
	real64 u1;
} Eq_269;

typedef union Eq_271 {
	real16 u0;
	real64 u1;
} Eq_271;

typedef Eq_271 (Eq_272)(Eq_261);

typedef Eq_275 (Eq_274)(Eq_261);

typedef union Eq_275 {
	real16 u0;
	real64 u1;
} Eq_275;

typedef union Eq_278 {
	real16 u0;
	real64 u1;
} Eq_278;

typedef union Eq_285 {
	real16 u0;
	real64 u1;
} Eq_285;

typedef union Eq_290 {
	real16 u0;
	real64 u1;
} Eq_290;

typedef union Eq_294 {
	real16 u0;
	real64 u1;
} Eq_294;

typedef union Eq_297 {
	real16 u0;
	real64 u1;
} Eq_297;

typedef union Eq_299 {
	real16 u0;
	real64 u1;
} Eq_299;

typedef Eq_299 (Eq_300)(Eq_290);

typedef Eq_303 (Eq_302)(Eq_290);

typedef union Eq_303 {
	real16 u0;
	real64 u1;
} Eq_303;

typedef union Eq_306 {
	real16 u0;
	real64 u1;
} Eq_306;

typedef union Eq_313 {
	real16 u0;
	real64 u1;
} Eq_313;

typedef void (Eq_318)(word32, word32, word32, Eq_46 *);

typedef union Eq_325 {
	real16 u0;
	real64 u1;
} Eq_325;

typedef union Eq_328 {
	real16 u0;
	real64 u1;
} Eq_328;

typedef union Eq_331 {
	real16 u0;
	real64 u1;
} Eq_331;

typedef union Eq_333 {
	real16 u0;
	real64 u1;
} Eq_333;

typedef union Eq_336 {
	real16 u0;
	real64 u1;
} Eq_336;

typedef union Eq_339 {
	real16 u0;
	real64 u1;
} Eq_339;

typedef union Eq_341 {
	real16 u0;
	real64 u1;
} Eq_341;

typedef union Eq_344 {
	real16 u0;
	real64 u1;
} Eq_344;

typedef union Eq_347 {
	real16 u0;
	real64 u1;
} Eq_347;

typedef union Eq_356 {
	real16 u0;
	real64 u1;
} Eq_356;

typedef union Eq_359 {
	real16 u0;
	real64 u1;
} Eq_359;

typedef union Eq_363 {
	real16 u0;
	real64 u1;
} Eq_363;

typedef union Eq_364 {
	real16 u0;
	real64 u1;
} Eq_364;

typedef union Eq_369 {
	real16 u0;
	real64 u1;
} Eq_369;

typedef union Eq_372 {
	real16 u0;
	real64 u1;
} Eq_372;

typedef union Eq_375 {
	real16 u0;
	real64 u1;
} Eq_375;

typedef union Eq_377 {
	64 u0;
	real64 u1;
} Eq_377;

typedef union Eq_381 {
	real16 u0;
	real64 u1;
} Eq_381;

typedef union Eq_395 {
	real16 u0;
	real32 u1;
} Eq_395;

