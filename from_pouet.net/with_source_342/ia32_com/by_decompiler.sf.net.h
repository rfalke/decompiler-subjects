// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_342/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_130) ptrFFFA0000) (0 (ptr Eq_68) ptr0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (segment "Eq_2" (10C Eq_530 t010C))
	T_2 (in fs_3 : (ptr Eq_2))
	T_7 (in fn0C00_012B(es) : selector)
	T_39 (in fs : (ptr Eq_2))
Eq_3: (fn (ptr Eq_2) ((ptr Eq_5)))
	T_3 (in fn0C00_012B : ptr32)
	T_4 (in signature of fn0C00_012B : void)
Eq_5: (segment "Eq_5" (4E8 (arr byte) a04E8) (670 byte b0670))
	T_5 (in es : (ptr Eq_5))
	T_6 (in es : (ptr Eq_5))
	T_10 (in es : (ptr Eq_5))
Eq_8: (fn void ((ptr Eq_5), (ptr Eq_11)))
	T_8 (in fn0C00_0344 : ptr32)
	T_9 (in signature of fn0C00_0344 : void)
Eq_11: (segment "Eq_11" (387 (arr word32) a0387) (45F word16 w045F) (4E8 Eq_123 t04E8) (4EA Eq_123 t04EA) (4EC (memptr (ptr Eq_11) Eq_278) ptr04EC) (4EE Eq_537 t04EE) (4F0 (arr ui16) a04F0) (5F0 (arr byte) a05F0) (670 byte b0670) (2A70 byte b2A70) (2A72 (arr byte) a2A72))
	T_11 (in ds : (ptr Eq_11))
	T_12 (in ds : (ptr Eq_11))
	T_17 (in ds : (ptr Eq_11))
	T_25 (in ds : (ptr Eq_11))
	T_29 (in ds : (ptr Eq_11))
	T_34 (in ds : (ptr Eq_11))
	T_38 (in ds : (ptr Eq_11))
	T_44 (in ds : (ptr Eq_11))
	T_48 (in ds : (ptr Eq_11))
	T_124 (in ds : (ptr Eq_11))
Eq_14: (segment "Eq_14")
	T_14 (in es_5 : (ptr Eq_14))
	T_18 (in fn0C00_0138(ds) : selector)
	T_24 (in es : (ptr Eq_14))
	T_33 (in es : (ptr Eq_14))
	T_40 (in fn0C00_02D9(ds, fs_3) : selector)
	T_43 (in es : (ptr Eq_14))
Eq_15: (fn (ptr Eq_14) ((ptr Eq_11)))
	T_15 (in fn0C00_0138 : ptr32)
	T_16 (in signature of fn0C00_0138 : void)
Eq_19: (fn void ())
	T_19 (in fn0C00_01CE : ptr32)
	T_20 (in signature of fn0C00_01CE : void)
Eq_22: (fn void ((ptr Eq_14), (ptr Eq_11)))
	T_22 (in fn0C00_01AF : ptr32)
	T_23 (in signature of fn0C00_01AF : void)
Eq_27: (fn void ((ptr Eq_11)))
	T_27 (in fn0C00_01FE : ptr32)
	T_28 (in signature of fn0C00_01FE : void)
Eq_31: (fn void ((ptr Eq_14), (ptr Eq_11)))
	T_31 (in fn0C00_0251 : ptr32)
	T_32 (in signature of fn0C00_0251 : void)
Eq_36: (fn (ptr Eq_14) ((ptr Eq_11), (ptr Eq_2)))
	T_36 (in fn0C00_02D9 : ptr32)
	T_37 (in signature of fn0C00_02D9 : void)
Eq_41: (fn void ((ptr Eq_14), (ptr Eq_11)))
	T_41 (in fn0C00_02A6 : ptr32)
	T_42 (in signature of fn0C00_02A6 : void)
Eq_46: (fn void ((ptr Eq_11)))
	T_46 (in fn0C00_01A4 : ptr32)
	T_47 (in signature of fn0C00_01A4 : void)
Eq_50: (fn byte (byte))
	T_50 (in __inb : ptr32)
Eq_55: (fn void (byte))
	T_55 (in bios_video_set_mode : ptr32)
	T_56 (in signature of bios_video_set_mode : void)
	T_80 (in bios_video_set_mode : ptr32)
Eq_60: (fn void ())
	T_60 (in msdos_terminate_program20 : ptr32)
	T_61 (in signature of msdos_terminate_program20 : void)
Eq_63: (segment "Eq_63")
	T_63 (in fs : (ptr Eq_63))
Eq_68: (segment "Eq_68")
	T_68 (in 0x0000 : selector)
Eq_79: (segment "Eq_79")
	T_79 (in es : (ptr Eq_79))
Eq_83: (fn void (word16, byte))
	T_83 (in __outb : ptr32)
Eq_89: (fn void (word16, byte))
	T_89 (in __outb : ptr32)
Eq_97: (fn void (word16, word16))
	T_97 (in __outw : ptr32)
Eq_101: (fn void (word16, word16))
	T_101 (in __outw : ptr32)
Eq_105: (fn void (word16, word16))
	T_105 (in __outw : ptr32)
Eq_109: (fn void (word16, word16))
	T_109 (in __outw : ptr32)
Eq_113: (fn void (word16, word16))
	T_113 (in __outw : ptr32)
Eq_121: (fn void (Eq_123, (ptr Eq_11)))
	T_121 (in fn0C00_017F : ptr32)
	T_122 (in signature of fn0C00_017F : void)
	T_191 (in fn0C00_017F : ptr32)
Eq_123: (union "Eq_123" (byte u0) ((memptr (ptr Eq_14) word32) u1))
	T_123 (in ax : Eq_123)
	T_125 (in 0x0000 : word16)
	T_127 (in 0x8000 : word16)
	T_129 (in Mem34[ds:0x04E8:word16] : word16)
	T_142 (in Mem3[ds:0x04EA:word16] : word16)
	T_147 (in DPB(ax, al_7, 0, 8) : word16)
	T_156 (in ax_30 : Eq_123)
	T_157 (in DPB(ax_30, al_13, 0, 8) : word16)
	T_175 (in Mem3[ds:0x04EA:byte] : byte)
	T_185 (in v5_5 : Eq_123)
	T_187 (in Mem0[ds:0x04E8:word16] : word16)
	T_189 (in Mem0[ds:0x04EA:word16] : word16)
	T_190 (in Mem6[ds:0x04E8:word16] : word16)
	T_201 (in di_11 : Eq_123)
	T_203 (in Mem0[ds:0x04E8:word16] : word16)
	T_207 (in di_11 + 0x0030 : word16)
	T_217 (in di_11 + 0x0004 : word16)
	T_357 (in Mem0[ds:0x04E8:word16] : word16)
	T_452 (in Mem0[ds:0x04E8:word16] : word16)
Eq_130: (segment "Eq_130" (0 (arr word32) a0000))
	T_130 (in 0xA000 : selector)
Eq_144: (fn byte (word16))
	T_144 (in __inb : ptr32)
Eq_153: (fn byte (word16))
	T_153 (in __inb : ptr32)
Eq_162: (fn void ())
	T_162 (in __cli : ptr32)
Eq_167: (fn void (word16, word16))
	T_167 (in __outw : ptr32)
Eq_170: (fn void (word16, word16))
	T_170 (in __outw : ptr32)
Eq_178: (fn byte (word16))
	T_178 (in __inb : ptr32)
Eq_193: (fn void (word16, word16))
	T_193 (in __outw : ptr32)
Eq_224: (fn void (word16, byte))
	T_224 (in __outb : ptr32)
Eq_238: (fn void (word16, byte, byte, byte))
	T_238 (in fn0C00_01F4 : ptr32)
	T_239 (in signature of fn0C00_01F4 : void)
	T_260 (in fn0C00_01F4 : ptr32)
Eq_271: (fn void (word16, byte))
	T_271 (in __outb : ptr32)
Eq_273: (fn void (word16, byte))
	T_273 (in __outb : ptr32)
Eq_275: (fn void (word16, byte))
	T_275 (in __outb : ptr32)
Eq_278: (struct "Eq_278" (461 byte b0461))
	T_278 (in Mem0[ds:0x04EC:word16] : word16)
	T_280 (in Mem0[ds:0x04EC:word16] + 0x0006 : word16)
	T_281 (in Mem5[ds:0x04EC:word16] : word16)
	T_283 (in Mem5[ds:0x04EC:word16] : word16)
	T_285 (in ds->ptr04EC & 0x007F : word16)
	T_286 (in Mem7[ds:0x04EC:word16] : word16)
	T_287 (in bx_10 : (memptr (ptr Eq_11) Eq_278))
	T_289 (in Mem7[ds:0x04EC:word16] : word16)
	T_314 (in bx_10 + 0x0001 & 0x007F : word16)
	T_321 (in Mem23[ds:0x04EC:word16] : word16)
Eq_299: (union "Eq_299" (int16 u0) (uint16 u1))
	T_299 (in (int16) (ds->*bx_10).b0461 *s 0x0008 : int16)
Eq_319: (struct "Eq_319" (461 byte b0461))
	T_319 (in bx_33 : word16)
	T_325 (in Mem23[ds:0x04EC:word16] + 0x0020 & 0x007F : word16)
	T_350 (in bx_33 + 0x0001 & 0x007F : word16)
Eq_336: (union "Eq_336" (int16 u0) (uint16 u1))
	T_336 (in (int16) (ds->*bx_33).b0461 *s 0x0016 : int16)
Eq_360: (union "Eq_360" (ui16 u0) (byte u1))
	T_360 (in ah_103 : Eq_360)
	T_361 (in 0x01 : byte)
	T_420 (in ah_103 << 0x01 : word16)
Eq_370: (union "Eq_370" (uint16 u0) ((memptr (ptr Eq_11) Eq_645) u1))
	T_370 (in bx_102 : Eq_370)
	T_371 (in 0x0000 : word16)
	T_398 (in bx_50 : Eq_370)
	T_400 (in bx_50 + 0x0008 : word16)
	T_422 (in bx_102 + 0x0002 : word16)
Eq_414: (union "Eq_414" (uint16 u0) ((memptr (ptr Eq_11) Eq_646) u1))
	T_414 (in bx_50 >>u 0x0001 : word16)
Eq_429: (segment "Eq_429")
	T_429 (in ss : selector)
Eq_430: (union "Eq_430" (ptr16 u0) ((memptr (ptr Eq_429) Eq_647) u1))
	T_430 (in fp : ptr16)
Eq_436: (fn void (word16, word16))
	T_436 (in __outw : ptr32)
Eq_440: (fn void (word16, word16))
	T_440 (in __outw : ptr32)
Eq_448: (union "Eq_448" (ui16 u0) (byte u1))
	T_448 (in ah_17 : Eq_448)
	T_449 (in 0x01 : byte)
	T_485 (in ah_17 << 0x01 : word16)
Eq_487: (fn void (word16, word16))
	T_487 (in __outw : ptr32)
Eq_497: (segment "Eq_497")
	T_497 (in es : (ptr Eq_497))
Eq_515: (segment "Eq_515" (2A70 (arr byte) a2A70) (2BB0 Eq_546 t2BB0))
	T_515 (in cs : selector)
Eq_530: (union "Eq_530" (ptr32 u0) (segptr32 u1))
	T_530 (in gs_ax_59 : Eq_530)
	T_532 (in Mem54[fs:0x010C:segptr32] : segptr32)
Eq_533: (segment "Eq_533")
	T_533 (in gs_60 : (ptr Eq_533))
	T_534 (in SLICE(gs_ax_59, selector, 16) : selector)
Eq_535: (struct "Eq_535" 0001 (0 word16 w0000))
	T_535 (in bx_62 : word16)
	T_545 (in ((word16) Mem54[ds:Mem54[ds:0x04EE:word16] + 0x03BB:byte] << 0x0003) + (word16) gs_ax_59 : word16)
	T_570 (in bx_62 + 0x0001 : word16)
Eq_537: (union "Eq_537" (cups16 u0) ((memptr (ptr Eq_11) Eq_648) u1))
	T_537 (in Mem54[ds:0x04EE:word16] : word16)
	T_577 (in Mem84[ds:0x04EE:word16] : word16)
	T_579 (in Mem84[ds:0x04EE:word16] + 0x0001 : word16)
	T_580 (in Mem95[ds:0x04EE:word16] : word16)
	T_582 (in Mem95[ds:0x04EE:word16] : word16)
	T_583 (in 0x00A3 : word16)
	T_585 (in 0x0000 : word16)
	T_587 (in Mem102[ds:0x04EE:word16] : word16)
Eq_546: (struct "Eq_546" 0001 (0 Eq_557 t0000))
	T_546 (in di_64 : (memptr (ptr Eq_515) Eq_546))
	T_547 (in 0x2BB0 : word16)
	T_562 (in di_64 + 0x0001 : word16)
	T_568 (in di_64 + 0x0140 : word16)
Eq_550: (fn bool (word16, int16))
	T_550 (in __bt : ptr32)
Eq_557: (union "Eq_557" (ui16 u0) (byte u1))
	T_557 (in __bt((gs_60->*bx_62).w0000, dx_75) << 0x05 : word16)
	T_560 (in Mem84[cs:di_64 + 0x0000:byte] : byte)
Eq_645: (struct "Eq_645" 0008 (4F0 word16 w04F0))
	T_645
Eq_646: (struct "Eq_646" (5F0 byte b05F0))
	T_646
Eq_647: (struct "Eq_647" (FFFFFFFC word16 wFFFFFFFC))
	T_647
Eq_648: (struct "Eq_648" (3BB byte b03BB))
	T_648
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in fs_3 : (ptr Eq_2))
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (segment))
T_3: (in fn0C00_012B : ptr32)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (fn T_7 (T_6)))
T_4: (in signature of fn0C00_012B : void)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: 
T_5: (in es : (ptr Eq_5))
  Class: Eq_5
  DataType: (ptr Eq_5)
  OrigDataType: (ptr (segment (4E8 (arr T_638) a04E8)))
T_6: (in es : (ptr Eq_5))
  Class: Eq_5
  DataType: (ptr Eq_5)
  OrigDataType: (ptr (segment))
T_7: (in fn0C00_012B(es) : selector)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (segment))
T_8: (in fn0C00_0344 : ptr32)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (fn T_13 (T_6, T_12)))
T_9: (in signature of fn0C00_0344 : void)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: 
T_10: (in es : (ptr Eq_5))
  Class: Eq_5
  DataType: (ptr Eq_5)
  OrigDataType: (ptr (segment))
T_11: (in ds : (ptr Eq_11))
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (segment (387 (arr T_644) a0387)))
T_12: (in ds : (ptr Eq_11))
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (segment))
T_13: (in fn0C00_0344(es, ds) : void)
  Class: Eq_13
  DataType: void
  OrigDataType: void
T_14: (in es_5 : (ptr Eq_14))
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (segment))
T_15: (in fn0C00_0138 : ptr32)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (fn T_18 (T_12)))
T_16: (in signature of fn0C00_0138 : void)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: 
T_17: (in ds : (ptr Eq_11))
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (segment (4E8 T_129 t04E8)))
T_18: (in fn0C00_0138(ds) : selector)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (segment))
T_19: (in fn0C00_01CE : ptr32)
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: (ptr (fn T_21 ()))
T_20: (in signature of fn0C00_01CE : void)
  Class: Eq_19
  DataType: (ptr Eq_19)
  OrigDataType: 
T_21: (in fn0C00_01CE() : void)
  Class: Eq_21
  DataType: void
  OrigDataType: void
T_22: (in fn0C00_01AF : ptr32)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: (ptr (fn T_26 (T_14, T_12)))
T_23: (in signature of fn0C00_01AF : void)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: 
T_24: (in es : (ptr Eq_14))
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (segment))
T_25: (in ds : (ptr Eq_11))
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (segment (4E8 T_203 t04E8)))
T_26: (in fn0C00_01AF(es_5, ds) : void)
  Class: Eq_26
  DataType: void
  OrigDataType: void
T_27: (in fn0C00_01FE : ptr32)
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (fn T_30 (T_12)))
T_28: (in signature of fn0C00_01FE : void)
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: 
T_29: (in ds : (ptr Eq_11))
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (segment (4EC T_278 t04EC) (4F0 (arr T_640) a04F0) (5F0 (arr T_641) a05F0)))
T_30: (in fn0C00_01FE(ds) : void)
  Class: Eq_30
  DataType: void
  OrigDataType: void
T_31: (in fn0C00_0251 : ptr32)
  Class: Eq_31
  DataType: (ptr Eq_31)
  OrigDataType: (ptr (fn T_35 (T_14, T_12)))
T_32: (in signature of fn0C00_0251 : void)
  Class: Eq_31
  DataType: (ptr Eq_31)
  OrigDataType: 
T_33: (in es : (ptr Eq_14))
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (segment))
T_34: (in ds : (ptr Eq_11))
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (segment (4E8 T_357 t04E8)))
T_35: (in fn0C00_0251(es_5, ds) : void)
  Class: Eq_35
  DataType: void
  OrigDataType: void
T_36: (in fn0C00_02D9 : ptr32)
  Class: Eq_36
  DataType: (ptr Eq_36)
  OrigDataType: (ptr (fn T_40 (T_12, T_2)))
T_37: (in signature of fn0C00_02D9 : void)
  Class: Eq_36
  DataType: (ptr Eq_36)
  OrigDataType: 
T_38: (in ds : (ptr Eq_11))
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (segment (45F T_504 t045F) (4EE T_537 t04EE) (2A72 (arr T_642) a2A72)))
T_39: (in fs : (ptr Eq_2))
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (segment (10C Eq_530 t010C)))
T_40: (in fn0C00_02D9(ds, fs_3) : selector)
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (segment))
T_41: (in fn0C00_02A6 : ptr32)
  Class: Eq_41
  DataType: (ptr Eq_41)
  OrigDataType: (ptr (fn T_45 (T_14, T_12)))
T_42: (in signature of fn0C00_02A6 : void)
  Class: Eq_41
  DataType: (ptr Eq_41)
  OrigDataType: 
T_43: (in es : (ptr Eq_14))
  Class: Eq_14
  DataType: (ptr Eq_14)
  OrigDataType: (ptr (segment))
T_44: (in ds : (ptr Eq_11))
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (segment (4E8 T_452 t04E8)))
T_45: (in fn0C00_02A6(es_5, ds) : void)
  Class: Eq_45
  DataType: void
  OrigDataType: void
T_46: (in fn0C00_01A4 : ptr32)
  Class: Eq_46
  DataType: (ptr Eq_46)
  OrigDataType: (ptr (fn T_49 (T_12)))
T_47: (in signature of fn0C00_01A4 : void)
  Class: Eq_46
  DataType: (ptr Eq_46)
  OrigDataType: 
T_48: (in ds : (ptr Eq_11))
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (segment (4E8 T_123 t04E8) (4EA T_189 t04EA)))
T_49: (in fn0C00_01A4(ds) : void)
  Class: Eq_49
  DataType: void
  OrigDataType: void
T_50: (in __inb : ptr32)
  Class: Eq_50
  DataType: (ptr Eq_50)
  OrigDataType: (ptr (fn T_52 (T_51)))
T_51: (in 0x60 : byte)
  Class: Eq_51
  DataType: byte
  OrigDataType: byte
T_52: (in __inb(0x60) : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_53: (in 0x01 : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_54: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_54
  DataType: bool
  OrigDataType: bool
T_55: (in bios_video_set_mode : ptr32)
  Class: Eq_55
  DataType: (ptr Eq_55)
  OrigDataType: (ptr (fn T_59 (T_58)))
T_56: (in signature of bios_video_set_mode : void)
  Class: Eq_55
  DataType: (ptr Eq_55)
  OrigDataType: 
T_57: (in al : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_58: (in 0x03 : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_59: (in bios_video_set_mode(0x03) : void)
  Class: Eq_59
  DataType: void
  OrigDataType: void
T_60: (in msdos_terminate_program20 : ptr32)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: (ptr (fn T_62 ()))
T_61: (in signature of msdos_terminate_program20 : void)
  Class: Eq_60
  DataType: (ptr Eq_60)
  OrigDataType: 
T_62: (in msdos_terminate_program20() : void)
  Class: Eq_62
  DataType: void
  OrigDataType: void
T_63: (in fs : (ptr Eq_63))
  Class: Eq_63
  DataType: (ptr Eq_63)
  OrigDataType: (ptr (segment))
T_64: (in di_12 : (memptr (ptr Eq_5) byte))
  Class: Eq_64
  DataType: (memptr (ptr Eq_5) byte)
  OrigDataType: (memptr T_5 (struct 0001 (0 T_72 t0000)))
T_65: (in 0x04E8 : word16)
  Class: Eq_64
  DataType: (memptr (ptr Eq_5) byte)
  OrigDataType: word16
T_66: (in cx_13 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in 0x2FC9 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_68: (in 0x0000 : selector)
  Class: Eq_68
  DataType: (ptr Eq_68)
  OrigDataType: (ptr (segment))
T_69: (in 0x00 : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_70: (in 0x0000 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in di_12 + 0x0000 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in Mem10[es:di_12 + 0x0000:byte] : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_73: (in 0x0001 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in di_12 + 0x0001 : word16)
  Class: Eq_64
  DataType: (memptr (ptr Eq_5) byte)
  OrigDataType: word16
T_75: (in 0x0001 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in cx_13 - 0x0001 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_77: (in 0x0000 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_78: (in cx_13 == 0x0000 : bool)
  Class: Eq_78
  DataType: bool
  OrigDataType: bool
T_79: (in es : (ptr Eq_79))
  Class: Eq_79
  DataType: (ptr Eq_79)
  OrigDataType: (ptr (segment))
T_80: (in bios_video_set_mode : ptr32)
  Class: Eq_55
  DataType: (ptr Eq_55)
  OrigDataType: (ptr (fn T_82 (T_81)))
T_81: (in 0x13 : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_82: (in bios_video_set_mode(0x13) : void)
  Class: Eq_59
  DataType: void
  OrigDataType: void
T_83: (in __outb : ptr32)
  Class: Eq_83
  DataType: (ptr Eq_83)
  OrigDataType: (ptr (fn T_86 (T_84, T_85)))
T_84: (in 0x03C8 : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_85: (in 0x00 : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_86: (in __outb(0x03C8, 0x00) : void)
  Class: Eq_86
  DataType: void
  OrigDataType: void
T_87: (in cx_10 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in 0x0300 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_89: (in __outb : ptr32)
  Class: Eq_89
  DataType: (ptr Eq_89)
  OrigDataType: (ptr (fn T_92 (T_90, T_91)))
T_90: (in 0x03C9 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in 0x00 : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_92: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_92
  DataType: void
  OrigDataType: void
T_93: (in 0x0001 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in cx_10 - 0x0001 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_95: (in 0x0000 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_96: (in cx_10 != 0x0000 : bool)
  Class: Eq_96
  DataType: bool
  OrigDataType: bool
T_97: (in __outw : ptr32)
  Class: Eq_97
  DataType: (ptr Eq_97)
  OrigDataType: (ptr (fn T_100 (T_98, T_99)))
T_98: (in 0x03C9 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in 0x0604 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in __outw(0x03C9, 0x0604) : void)
  Class: Eq_100
  DataType: void
  OrigDataType: void
T_101: (in __outw : ptr32)
  Class: Eq_101
  DataType: (ptr Eq_101)
  OrigDataType: (ptr (fn T_104 (T_102, T_103)))
T_102: (in 0x03C9 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in 0x0014 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in __outw(0x03C9, 0x0014) : void)
  Class: Eq_104
  DataType: void
  OrigDataType: void
T_105: (in __outw : ptr32)
  Class: Eq_105
  DataType: (ptr Eq_105)
  OrigDataType: (ptr (fn T_108 (T_106, T_107)))
T_106: (in 0x03C9 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in 0xE317 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in __outw(0x03C9, 0xE317) : void)
  Class: Eq_108
  DataType: void
  OrigDataType: void
T_109: (in __outw : ptr32)
  Class: Eq_109
  DataType: (ptr Eq_109)
  OrigDataType: (ptr (fn T_112 (T_110, T_111)))
T_110: (in 0x03C9 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in 0x4013 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in __outw(0x03C9, 0x4013) : void)
  Class: Eq_112
  DataType: void
  OrigDataType: void
T_113: (in __outw : ptr32)
  Class: Eq_113
  DataType: (ptr Eq_113)
  OrigDataType: (ptr (fn T_116 (T_114, T_115)))
T_114: (in 0x03C4 : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_115: (in 0x0F02 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in __outw(0x03C4, 0x0F02) : void)
  Class: Eq_116
  DataType: void
  OrigDataType: void
T_117: (in di_22 : (memptr (ptr Eq_130) word32))
  Class: Eq_117
  DataType: (memptr (ptr Eq_130) word32)
  OrigDataType: (memptr T_130 (struct 0004 (0 T_134 t0000)))
T_118: (in 0x0000 : word16)
  Class: Eq_117
  DataType: (memptr (ptr Eq_130) word32)
  OrigDataType: word16
T_119: (in cx_23 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in 0x4000 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_121: (in fn0C00_017F : ptr32)
  Class: Eq_121
  DataType: (ptr Eq_121)
  OrigDataType: (ptr (fn T_126 (T_125, T_17)))
T_122: (in signature of fn0C00_017F : void)
  Class: Eq_121
  DataType: (ptr Eq_121)
  OrigDataType: 
T_123: (in ax : Eq_123)
  Class: Eq_123
  DataType: Eq_123
  OrigDataType: word16
T_124: (in ds : (ptr Eq_11))
  Class: Eq_11
  DataType: (ptr Eq_11)
  OrigDataType: (ptr (segment (4EA T_123 t04EA)))
T_125: (in 0x0000 : word16)
  Class: Eq_123
  DataType: byte
  OrigDataType: word16
T_126: (in fn0C00_017F(0x0000, ds) : void)
  Class: Eq_126
  DataType: void
  OrigDataType: void
T_127: (in 0x8000 : word16)
  Class: Eq_123
  DataType: byte
  OrigDataType: word16
T_128: (in 0x04E8 : word16)
  Class: Eq_128
  DataType: (memptr (ptr Eq_11) Eq_123)
  OrigDataType: (memptr T_17 (struct (0 T_129 t0000)))
T_129: (in Mem34[ds:0x04E8:word16] : word16)
  Class: Eq_123
  DataType: Eq_123
  OrigDataType: word16
T_130: (in 0xA000 : selector)
  Class: Eq_130
  DataType: (ptr Eq_130)
  OrigDataType: (ptr (segment (0 (arr T_639) a0000)))
T_131: (in 0x00000000 : word32)
  Class: Eq_131
  DataType: word32
  OrigDataType: word32
T_132: (in 0x0000 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in di_22 + 0x0000 : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_134: (in Mem29[0xA000:di_22 + 0x0000:word32] : word32)
  Class: Eq_131
  DataType: word32
  OrigDataType: word32
T_135: (in 0x0004 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_136: (in di_22 + 0x0004 : word16)
  Class: Eq_117
  DataType: (memptr (ptr Eq_130) word32)
  OrigDataType: word16
T_137: (in 0x0001 : word16)
  Class: Eq_137
  DataType: word16
  OrigDataType: word16
T_138: (in cx_23 - 0x0001 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_139: (in 0x0000 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_140: (in cx_23 == 0x0000 : bool)
  Class: Eq_140
  DataType: bool
  OrigDataType: bool
T_141: (in 0x04EA : word16)
  Class: Eq_141
  DataType: (memptr (ptr Eq_11) Eq_123)
  OrigDataType: (memptr T_124 (struct (0 T_142 t0000)))
T_142: (in Mem3[ds:0x04EA:word16] : word16)
  Class: Eq_123
  DataType: Eq_123
  OrigDataType: word16
T_143: (in al_7 : byte)
  Class: Eq_143
  DataType: byte
  OrigDataType: byte
T_144: (in __inb : ptr32)
  Class: Eq_144
  DataType: (ptr Eq_144)
  OrigDataType: (ptr (fn T_146 (T_145)))
T_145: (in 0x03DA : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_146: (in __inb(0x03DA) : byte)
  Class: Eq_143
  DataType: byte
  OrigDataType: byte
T_147: (in DPB(ax, al_7, 0, 8) : word16)
  Class: Eq_123
  DataType: Eq_123
  OrigDataType: word16
T_148: (in 0x08 : byte)
  Class: Eq_148
  DataType: byte
  OrigDataType: byte
T_149: (in al_7 & 0x08 : byte)
  Class: Eq_149
  DataType: byte
  OrigDataType: byte
T_150: (in 0x00 : byte)
  Class: Eq_149
  DataType: byte
  OrigDataType: byte
T_151: (in (al_7 & 0x08) == 0x00 : bool)
  Class: Eq_151
  DataType: bool
  OrigDataType: bool
T_152: (in al_13 : byte)
  Class: Eq_152
  DataType: byte
  OrigDataType: byte
T_153: (in __inb : ptr32)
  Class: Eq_153
  DataType: (ptr Eq_153)
  OrigDataType: (ptr (fn T_155 (T_154)))
T_154: (in 0x03DA : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in __inb(0x03DA) : byte)
  Class: Eq_152
  DataType: byte
  OrigDataType: byte
T_156: (in ax_30 : Eq_123)
  Class: Eq_123
  DataType: Eq_123
  OrigDataType: word16
T_157: (in DPB(ax_30, al_13, 0, 8) : word16)
  Class: Eq_123
  DataType: Eq_123
  OrigDataType: word16
T_158: (in 0x08 : byte)
  Class: Eq_158
  DataType: byte
  OrigDataType: byte
T_159: (in al_13 & 0x08 : byte)
  Class: Eq_159
  DataType: byte
  OrigDataType: byte
T_160: (in 0x00 : byte)
  Class: Eq_159
  DataType: byte
  OrigDataType: byte
T_161: (in (al_13 & 0x08) != 0x00 : bool)
  Class: Eq_161
  DataType: bool
  OrigDataType: bool
T_162: (in __cli : ptr32)
  Class: Eq_162
  DataType: (ptr Eq_162)
  OrigDataType: (ptr (fn T_163 ()))
T_163: (in __cli() : void)
  Class: Eq_163
  DataType: void
  OrigDataType: void
T_164: (in ax_19 : word16)
  Class: Eq_164
  DataType: word16
  OrigDataType: word16
T_165: (in 0x0C : byte)
  Class: Eq_165
  DataType: byte
  OrigDataType: byte
T_166: (in DPB(ax_30, 0x0C, 0, 8) : word16)
  Class: Eq_164
  DataType: word16
  OrigDataType: word16
T_167: (in __outw : ptr32)
  Class: Eq_167
  DataType: (ptr Eq_167)
  OrigDataType: (ptr (fn T_169 (T_168, T_164)))
T_168: (in 0x03DA : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_169: (in __outw(0x03DA, ax_19) : void)
  Class: Eq_169
  DataType: void
  OrigDataType: void
T_170: (in __outw : ptr32)
  Class: Eq_170
  DataType: (ptr Eq_170)
  OrigDataType: (ptr (fn T_177 (T_171, T_176)))
T_171: (in 0x03DA : word16)
  Class: Eq_171
  DataType: word16
  OrigDataType: word16
T_172: (in 0x0001 : word16)
  Class: Eq_172
  DataType: word16
  OrigDataType: word16
T_173: (in ax_19 + 0x0001 : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_174: (in 0x04EA : word16)
  Class: Eq_174
  DataType: (memptr (ptr Eq_11) Eq_123)
  OrigDataType: (memptr T_124 (struct (0 T_175 t0000)))
T_175: (in Mem3[ds:0x04EA:byte] : byte)
  Class: Eq_123
  DataType: Eq_123
  OrigDataType: byte
T_176: (in DPB(ax_19 + 0x0001, ds->t04EA, 8, 8) : word16)
  Class: Eq_176
  DataType: word16
  OrigDataType: word16
T_177: (in __outw(0x03DA, DPB(ax_19 + 0x0001, ds->t04EA, 8, 8)) : void)
  Class: Eq_177
  DataType: void
  OrigDataType: void
T_178: (in __inb : ptr32)
  Class: Eq_178
  DataType: (ptr Eq_178)
  OrigDataType: (ptr (fn T_180 (T_179)))
T_179: (in 0x03DA : word16)
  Class: Eq_179
  DataType: word16
  OrigDataType: word16
T_180: (in __inb(0x03DA) : byte)
  Class: Eq_180
  DataType: byte
  OrigDataType: byte
T_181: (in 0x08 : byte)
  Class: Eq_181
  DataType: byte
  OrigDataType: byte
T_182: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_182
  DataType: byte
  OrigDataType: byte
T_183: (in 0x00 : byte)
  Class: Eq_182
  DataType: byte
  OrigDataType: byte
T_184: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_184
  DataType: bool
  OrigDataType: bool
T_185: (in v5_5 : Eq_123)
  Class: Eq_123
  DataType: Eq_123
  OrigDataType: word16
T_186: (in 0x04E8 : word16)
  Class: Eq_186
  DataType: (memptr (ptr Eq_11) Eq_123)
  OrigDataType: (memptr T_48 (struct (0 T_123 t0000)))
T_187: (in Mem0[ds:0x04E8:word16] : word16)
  Class: Eq_123
  DataType: Eq_123
  OrigDataType: word16
T_188: (in 0x04EA : word16)
  Class: Eq_188
  DataType: (memptr (ptr Eq_11) Eq_123)
  OrigDataType: (memptr T_48 (struct (0 T_189 t0000)))
T_189: (in Mem0[ds:0x04EA:word16] : word16)
  Class: Eq_123
  DataType: Eq_123
  OrigDataType: word16
T_190: (in Mem6[ds:0x04E8:word16] : word16)
  Class: Eq_123
  DataType: Eq_123
  OrigDataType: word16
T_191: (in fn0C00_017F : ptr32)
  Class: Eq_121
  DataType: (ptr Eq_121)
  OrigDataType: (ptr (fn T_192 (T_185, T_48)))
T_192: (in fn0C00_017F(v5_5, ds) : void)
  Class: Eq_126
  DataType: void
  OrigDataType: void
T_193: (in __outw : ptr32)
  Class: Eq_193
  DataType: (ptr Eq_193)
  OrigDataType: (ptr (fn T_196 (T_194, T_195)))
T_194: (in 0x03C4 : word16)
  Class: Eq_194
  DataType: word16
  OrigDataType: word16
T_195: (in 0x0F02 : word16)
  Class: Eq_195
  DataType: word16
  OrigDataType: word16
T_196: (in __outw(0x03C4, 0x0F02) : void)
  Class: Eq_196
  DataType: void
  OrigDataType: void
T_197: (in cx_21 : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_198: (in cx : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_199: (in 0x00 : byte)
  Class: Eq_199
  DataType: byte
  OrigDataType: byte
T_200: (in DPB(cx, 0x00, 8, 8) : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_201: (in di_11 : Eq_123)
  Class: Eq_123
  DataType: Eq_123
  OrigDataType: (memptr T_24 (struct 0004 (0 T_215 t0000)))
T_202: (in 0x04E8 : word16)
  Class: Eq_202
  DataType: (memptr (ptr Eq_11) Eq_123)
  OrigDataType: (memptr T_25 (struct (0 T_203 t0000)))
T_203: (in Mem0[ds:0x04E8:word16] : word16)
  Class: Eq_123
  DataType: Eq_123
  OrigDataType: word16
T_204: (in dl_12 : byte)
  Class: Eq_204
  DataType: byte
  OrigDataType: byte
T_205: (in 0xC8 : byte)
  Class: Eq_204
  DataType: byte
  OrigDataType: byte
T_206: (in 0x0030 : word16)
  Class: Eq_206
  DataType: word16
  OrigDataType: word16
T_207: (in di_11 + 0x0030 : word16)
  Class: Eq_123
  DataType: Eq_123
  OrigDataType: word16
T_208: (in 0x01 : byte)
  Class: Eq_208
  DataType: byte
  OrigDataType: byte
T_209: (in dl_12 - 0x01 : byte)
  Class: Eq_204
  DataType: byte
  OrigDataType: byte
T_210: (in 0x00 : byte)
  Class: Eq_204
  DataType: byte
  OrigDataType: byte
T_211: (in dl_12 != 0x00 : bool)
  Class: Eq_211
  DataType: bool
  OrigDataType: bool
T_212: (in 0x00000000 : word32)
  Class: Eq_212
  DataType: word32
  OrigDataType: word32
T_213: (in 0x0000 : word16)
  Class: Eq_213
  DataType: word16
  OrigDataType: word16
T_214: (in di_11 + 0x0000 : word16)
  Class: Eq_214
  DataType: word16
  OrigDataType: word16
T_215: (in Mem32[es:di_11 + 0x0000:word32] : word32)
  Class: Eq_212
  DataType: word32
  OrigDataType: word32
T_216: (in 0x0004 : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_217: (in di_11 + 0x0004 : word16)
  Class: Eq_123
  DataType: Eq_123
  OrigDataType: word16
T_218: (in 0x0001 : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_219: (in cx_21 - 0x0001 : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_220: (in 0x0000 : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_221: (in cx_21 == 0x0000 : bool)
  Class: Eq_221
  DataType: bool
  OrigDataType: bool
T_222: (in 0x14 : byte)
  Class: Eq_222
  DataType: byte
  OrigDataType: byte
T_223: (in DPB(cx_21, 0x14, 0, 8) : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_224: (in __outb : ptr32)
  Class: Eq_224
  DataType: (ptr Eq_224)
  OrigDataType: (ptr (fn T_227 (T_225, T_226)))
T_225: (in 0x03C8 : word16)
  Class: Eq_225
  DataType: word16
  OrigDataType: word16
T_226: (in 0x00 : byte)
  Class: Eq_226
  DataType: byte
  OrigDataType: byte
T_227: (in __outb(0x03C8, 0x00) : void)
  Class: Eq_227
  DataType: void
  OrigDataType: void
T_228: (in ah_13 : byte)
  Class: Eq_228
  DataType: byte
  OrigDataType: byte
T_229: (in 0x00 : byte)
  Class: Eq_228
  DataType: byte
  OrigDataType: byte
T_230: (in bx_17 : word16)
  Class: Eq_230
  DataType: word16
  OrigDataType: word16
T_231: (in 0x0000 : word16)
  Class: Eq_230
  DataType: word16
  OrigDataType: word16
T_232: (in bl_16 : byte)
  Class: Eq_232
  DataType: byte
  OrigDataType: byte
T_233: (in 0x00 : byte)
  Class: Eq_232
  DataType: byte
  OrigDataType: byte
T_234: (in bh_15 : byte)
  Class: Eq_234
  DataType: byte
  OrigDataType: byte
T_235: (in 0x00 : byte)
  Class: Eq_234
  DataType: byte
  OrigDataType: byte
T_236: (in cx_12 : word16)
  Class: Eq_236
  DataType: word16
  OrigDataType: word16
T_237: (in 0x0040 : word16)
  Class: Eq_236
  DataType: word16
  OrigDataType: word16
T_238: (in fn0C00_01F4 : ptr32)
  Class: Eq_238
  DataType: (ptr Eq_238)
  OrigDataType: (ptr (fn T_245 (T_244, T_232, T_228, T_234)))
T_239: (in signature of fn0C00_01F4 : void)
  Class: Eq_238
  DataType: (ptr Eq_238)
  OrigDataType: 
T_240: (in dx : word16)
  Class: Eq_240
  DataType: word16
  OrigDataType: word16
T_241: (in bl : byte)
  Class: Eq_232
  DataType: byte
  OrigDataType: byte
T_242: (in ah : byte)
  Class: Eq_228
  DataType: byte
  OrigDataType: byte
T_243: (in bh : byte)
  Class: Eq_234
  DataType: byte
  OrigDataType: byte
T_244: (in 0x03C9 : word16)
  Class: Eq_240
  DataType: word16
  OrigDataType: word16
T_245: (in fn0C00_01F4(0x03C9, bl_16, ah_13, bh_15) : void)
  Class: Eq_245
  DataType: void
  OrigDataType: void
T_246: (in 0x0101 : word16)
  Class: Eq_246
  DataType: word16
  OrigDataType: word16
T_247: (in bx_17 + 0x0101 : word16)
  Class: Eq_230
  DataType: word16
  OrigDataType: word16
T_248: (in (byte) bx_17 : byte)
  Class: Eq_232
  DataType: byte
  OrigDataType: byte
T_249: (in SLICE(bx_17, byte, 8) : byte)
  Class: Eq_234
  DataType: byte
  OrigDataType: byte
T_250: (in 0x01 : byte)
  Class: Eq_250
  DataType: byte
  OrigDataType: byte
T_251: (in ah_13 + 0x01 : byte)
  Class: Eq_228
  DataType: byte
  OrigDataType: byte
T_252: (in 0x0001 : word16)
  Class: Eq_252
  DataType: word16
  OrigDataType: word16
T_253: (in cx_12 - 0x0001 : word16)
  Class: Eq_236
  DataType: word16
  OrigDataType: word16
T_254: (in 0x0000 : word16)
  Class: Eq_236
  DataType: word16
  OrigDataType: word16
T_255: (in cx_12 != 0x0000 : bool)
  Class: Eq_255
  DataType: bool
  OrigDataType: bool
T_256: (in bl_30 : byte)
  Class: Eq_232
  DataType: byte
  OrigDataType: byte
T_257: (in 0x00 : byte)
  Class: Eq_232
  DataType: byte
  OrigDataType: byte
T_258: (in cx_34 : word16)
  Class: Eq_258
  DataType: word16
  OrigDataType: word16
T_259: (in 0x0040 : word16)
  Class: Eq_258
  DataType: word16
  OrigDataType: word16
T_260: (in fn0C00_01F4 : ptr32)
  Class: Eq_238
  DataType: (ptr Eq_238)
  OrigDataType: (ptr (fn T_264 (T_261, T_256, T_262, T_263)))
T_261: (in 0x03C9 : word16)
  Class: Eq_240
  DataType: word16
  OrigDataType: word16
T_262: (in 0x00 : byte)
  Class: Eq_228
  DataType: byte
  OrigDataType: byte
T_263: (in 0x00 : byte)
  Class: Eq_234
  DataType: byte
  OrigDataType: byte
T_264: (in fn0C00_01F4(0x03C9, bl_30, 0x00, 0x00) : void)
  Class: Eq_245
  DataType: void
  OrigDataType: void
T_265: (in 0x01 : byte)
  Class: Eq_265
  DataType: byte
  OrigDataType: byte
T_266: (in bl_30 + 0x01 : byte)
  Class: Eq_232
  DataType: byte
  OrigDataType: byte
T_267: (in 0x0001 : word16)
  Class: Eq_267
  DataType: word16
  OrigDataType: word16
T_268: (in cx_34 - 0x0001 : word16)
  Class: Eq_258
  DataType: word16
  OrigDataType: word16
T_269: (in 0x0000 : word16)
  Class: Eq_258
  DataType: word16
  OrigDataType: word16
T_270: (in cx_34 != 0x0000 : bool)
  Class: Eq_270
  DataType: bool
  OrigDataType: bool
T_271: (in __outb : ptr32)
  Class: Eq_271
  DataType: (ptr Eq_271)
  OrigDataType: (ptr (fn T_272 (T_240, T_242)))
T_272: (in __outb(dx, ah) : void)
  Class: Eq_272
  DataType: void
  OrigDataType: void
T_273: (in __outb : ptr32)
  Class: Eq_273
  DataType: (ptr Eq_273)
  OrigDataType: (ptr (fn T_274 (T_240, T_243)))
T_274: (in __outb(dx, bh) : void)
  Class: Eq_274
  DataType: void
  OrigDataType: void
T_275: (in __outb : ptr32)
  Class: Eq_275
  DataType: (ptr Eq_275)
  OrigDataType: (ptr (fn T_276 (T_240, T_241)))
T_276: (in __outb(dx, bl) : void)
  Class: Eq_276
  DataType: void
  OrigDataType: void
T_277: (in 0x04EC : word16)
  Class: Eq_277
  DataType: (memptr (ptr Eq_11) (memptr (ptr Eq_11) Eq_278))
  OrigDataType: (memptr T_29 (struct (0 T_278 t0000)))
T_278: (in Mem0[ds:0x04EC:word16] : word16)
  Class: Eq_278
  DataType: (memptr (ptr Eq_11) Eq_278)
  OrigDataType: word16
T_279: (in 0x0006 : word16)
  Class: Eq_279
  DataType: word16
  OrigDataType: word16
T_280: (in Mem0[ds:0x04EC:word16] + 0x0006 : word16)
  Class: Eq_278
  DataType: (memptr (ptr Eq_11) Eq_278)
  OrigDataType: word16
T_281: (in Mem5[ds:0x04EC:word16] : word16)
  Class: Eq_278
  DataType: (memptr (ptr Eq_11) Eq_278)
  OrigDataType: word16
T_282: (in 0x04EC : word16)
  Class: Eq_282
  DataType: (memptr (ptr Eq_11) (memptr (ptr Eq_11) Eq_278))
  OrigDataType: (memptr T_29 (struct (0 T_278 t0000)))
T_283: (in Mem5[ds:0x04EC:word16] : word16)
  Class: Eq_278
  DataType: (memptr (ptr Eq_11) Eq_278)
  OrigDataType: word16
T_284: (in 0x007F : word16)
  Class: Eq_284
  DataType: word16
  OrigDataType: word16
T_285: (in ds->ptr04EC & 0x007F : word16)
  Class: Eq_278
  DataType: (memptr (ptr Eq_11) Eq_278)
  OrigDataType: word16
T_286: (in Mem7[ds:0x04EC:word16] : word16)
  Class: Eq_278
  DataType: (memptr (ptr Eq_11) Eq_278)
  OrigDataType: word16
T_287: (in bx_10 : (memptr (ptr Eq_11) Eq_278))
  Class: Eq_278
  DataType: (memptr (ptr Eq_11) Eq_278)
  OrigDataType: (memptr T_29 (struct (461 T_296 t0461)))
T_288: (in 0x04EC : word16)
  Class: Eq_288
  DataType: (memptr (ptr Eq_11) (memptr (ptr Eq_11) Eq_278))
  OrigDataType: (memptr T_29 (struct (0 T_289 t0000)))
T_289: (in Mem7[ds:0x04EC:word16] : word16)
  Class: Eq_278
  DataType: (memptr (ptr Eq_11) Eq_278)
  OrigDataType: word16
T_290: (in di_11 : (memptr (ptr Eq_11) ui16))
  Class: Eq_290
  DataType: (memptr (ptr Eq_11) ui16)
  OrigDataType: (memptr T_29 (struct 0002 (0 T_308 t0000)))
T_291: (in 0x04F0 : word16)
  Class: Eq_290
  DataType: (memptr (ptr Eq_11) ui16)
  OrigDataType: word16
T_292: (in cx_12 : word16)
  Class: Eq_292
  DataType: word16
  OrigDataType: word16
T_293: (in 0x0080 : word16)
  Class: Eq_292
  DataType: word16
  OrigDataType: word16
T_294: (in 0x0461 : word16)
  Class: Eq_294
  DataType: word16
  OrigDataType: word16
T_295: (in bx_10 + 0x0461 : word16)
  Class: Eq_295
  DataType: word16
  OrigDataType: word16
T_296: (in Mem7[ds:bx_10 + 0x0461:byte] : byte)
  Class: Eq_296
  DataType: byte
  OrigDataType: byte
T_297: (in (int16) (ds->*bx_10).b0461 : int16)
  Class: Eq_297
  DataType: int16
  OrigDataType: int16
T_298: (in 0x0008 : word16)
  Class: Eq_298
  DataType: int16
  OrigDataType: int16
T_299: (in (int16) (ds->*bx_10).b0461 *s 0x0008 : int16)
  Class: Eq_299
  DataType: Eq_299
  OrigDataType: (union (int16 u0) (uint16 u1))
T_300: (in 0x0007 : word16)
  Class: Eq_300
  DataType: uint16
  OrigDataType: uint16
T_301: (in (int16) (ds->*bx_10).b0461 *s 0x0008 >>u 0x0007 : word16)
  Class: Eq_301
  DataType: uint16
  OrigDataType: uint16
T_302: (in (byte) ((int16) (ds->*bx_10).b0461 *s 0x0008 >>u 0x0007) : byte)
  Class: Eq_302
  DataType: byte
  OrigDataType: byte
T_303: (in (int16) (byte) ((int16) (ds->*bx_10).b0461 *s 0x0008 >>u 0x0007) : int16)
  Class: Eq_303
  DataType: int16
  OrigDataType: int16
T_304: (in 0x0007 : word16)
  Class: Eq_304
  DataType: word16
  OrigDataType: word16
T_305: (in (int16) (byte) ((int16) (ds->*bx_10).b0461 *s 0x0008 >>u 0x0007) << 0x0007 : word16)
  Class: Eq_305
  DataType: ui16
  OrigDataType: ui16
T_306: (in 0x0000 : word16)
  Class: Eq_306
  DataType: word16
  OrigDataType: word16
T_307: (in di_11 + 0x0000 : word16)
  Class: Eq_307
  DataType: word16
  OrigDataType: word16
T_308: (in Mem23[ds:di_11 + 0x0000:word16] : word16)
  Class: Eq_305
  DataType: ui16
  OrigDataType: word16
T_309: (in 0x0002 : word16)
  Class: Eq_309
  DataType: word16
  OrigDataType: word16
T_310: (in di_11 + 0x0002 : word16)
  Class: Eq_290
  DataType: (memptr (ptr Eq_11) ui16)
  OrigDataType: word16
T_311: (in 0x0001 : word16)
  Class: Eq_311
  DataType: word16
  OrigDataType: word16
T_312: (in bx_10 + 0x0001 : word16)
  Class: Eq_312
  DataType: word16
  OrigDataType: word16
T_313: (in 0x007F : word16)
  Class: Eq_313
  DataType: word16
  OrigDataType: word16
T_314: (in bx_10 + 0x0001 & 0x007F : word16)
  Class: Eq_278
  DataType: (memptr (ptr Eq_11) Eq_278)
  OrigDataType: word16
T_315: (in 0x0001 : word16)
  Class: Eq_315
  DataType: word16
  OrigDataType: word16
T_316: (in cx_12 - 0x0001 : word16)
  Class: Eq_292
  DataType: word16
  OrigDataType: word16
T_317: (in 0x0000 : word16)
  Class: Eq_292
  DataType: word16
  OrigDataType: word16
T_318: (in cx_12 != 0x0000 : bool)
  Class: Eq_318
  DataType: bool
  OrigDataType: bool
T_319: (in bx_33 : word16)
  Class: Eq_319
  DataType: (memptr (ptr Eq_11) Eq_319)
  OrigDataType: (memptr T_29 (struct (461 T_333 t0461)))
T_320: (in 0x04EC : word16)
  Class: Eq_320
  DataType: (memptr (ptr Eq_11) (memptr (ptr Eq_11) Eq_278))
  OrigDataType: (memptr T_29 (struct (0 T_321 t0000)))
T_321: (in Mem23[ds:0x04EC:word16] : word16)
  Class: Eq_278
  DataType: (memptr (ptr Eq_11) Eq_278)
  OrigDataType: word16
T_322: (in 0x0020 : word16)
  Class: Eq_322
  DataType: word16
  OrigDataType: word16
T_323: (in Mem23[ds:0x04EC:word16] + 0x0020 : word16)
  Class: Eq_323
  DataType: word16
  OrigDataType: word16
T_324: (in 0x007F : word16)
  Class: Eq_324
  DataType: word16
  OrigDataType: word16
T_325: (in Mem23[ds:0x04EC:word16] + 0x0020 & 0x007F : word16)
  Class: Eq_319
  DataType: (memptr (ptr Eq_11) Eq_319)
  OrigDataType: word16
T_326: (in di_36 : (memptr (ptr Eq_11) byte))
  Class: Eq_326
  DataType: (memptr (ptr Eq_11) byte)
  OrigDataType: (memptr T_29 (struct 0001 (0 T_344 t0000)))
T_327: (in 0x05F0 : word16)
  Class: Eq_326
  DataType: (memptr (ptr Eq_11) byte)
  OrigDataType: word16
T_328: (in cx_38 : word16)
  Class: Eq_328
  DataType: word16
  OrigDataType: word16
T_329: (in 0x80 : byte)
  Class: Eq_329
  DataType: byte
  OrigDataType: byte
T_330: (in DPB(cx_12, 0x80, 0, 8) : word16)
  Class: Eq_328
  DataType: word16
  OrigDataType: word16
T_331: (in 0x0461 : word16)
  Class: Eq_331
  DataType: word16
  OrigDataType: word16
T_332: (in bx_33 + 0x0461 : word16)
  Class: Eq_332
  DataType: word16
  OrigDataType: word16
T_333: (in Mem23[ds:bx_33 + 0x0461:byte] : byte)
  Class: Eq_333
  DataType: byte
  OrigDataType: byte
T_334: (in (int16) (ds->*bx_33).b0461 : int16)
  Class: Eq_334
  DataType: int16
  OrigDataType: int16
T_335: (in 0x0016 : word16)
  Class: Eq_335
  DataType: int16
  OrigDataType: int16
T_336: (in (int16) (ds->*bx_33).b0461 *s 0x0016 : int16)
  Class: Eq_336
  DataType: Eq_336
  OrigDataType: (union (int16 u0) (uint16 u1))
T_337: (in 0x0007 : word16)
  Class: Eq_337
  DataType: uint16
  OrigDataType: uint16
T_338: (in (int16) (ds->*bx_33).b0461 *s 0x0016 >>u 0x0007 : word16)
  Class: Eq_338
  DataType: uint16
  OrigDataType: uint16
T_339: (in (byte) ((int16) (ds->*bx_33).b0461 *s 0x0016 >>u 0x0007) : byte)
  Class: Eq_339
  DataType: byte
  OrigDataType: byte
T_340: (in (int16) (byte) ((int16) (ds->*bx_33).b0461 *s 0x0016 >>u 0x0007) : int16)
  Class: Eq_340
  DataType: int16
  OrigDataType: int16
T_341: (in (byte) (int16) (byte) ((int16) (ds->*bx_33).b0461 *s 0x0016 >>u 0x0007) : byte)
  Class: Eq_341
  DataType: byte
  OrigDataType: byte
T_342: (in 0x0000 : word16)
  Class: Eq_342
  DataType: word16
  OrigDataType: word16
T_343: (in di_36 + 0x0000 : word16)
  Class: Eq_343
  DataType: word16
  OrigDataType: word16
T_344: (in Mem48[ds:di_36 + 0x0000:byte] : byte)
  Class: Eq_341
  DataType: byte
  OrigDataType: byte
T_345: (in 0x0001 : word16)
  Class: Eq_345
  DataType: word16
  OrigDataType: word16
T_346: (in di_36 + 0x0001 : word16)
  Class: Eq_326
  DataType: (memptr (ptr Eq_11) byte)
  OrigDataType: word16
T_347: (in 0x0001 : word16)
  Class: Eq_347
  DataType: word16
  OrigDataType: word16
T_348: (in bx_33 + 0x0001 : word16)
  Class: Eq_348
  DataType: word16
  OrigDataType: word16
T_349: (in 0x007F : word16)
  Class: Eq_349
  DataType: word16
  OrigDataType: word16
T_350: (in bx_33 + 0x0001 & 0x007F : word16)
  Class: Eq_319
  DataType: (memptr (ptr Eq_11) Eq_319)
  OrigDataType: word16
T_351: (in 0x0001 : word16)
  Class: Eq_351
  DataType: word16
  OrigDataType: word16
T_352: (in cx_38 - 0x0001 : word16)
  Class: Eq_328
  DataType: word16
  OrigDataType: word16
T_353: (in 0x0000 : word16)
  Class: Eq_328
  DataType: word16
  OrigDataType: word16
T_354: (in cx_38 != 0x0000 : bool)
  Class: Eq_354
  DataType: bool
  OrigDataType: bool
T_355: (in di_25 : word16)
  Class: Eq_355
  DataType: word16
  OrigDataType: word16
T_356: (in 0x04E8 : word16)
  Class: Eq_356
  DataType: (memptr (ptr Eq_11) Eq_123)
  OrigDataType: (memptr T_34 (struct (0 T_357 t0000)))
T_357: (in Mem0[ds:0x04E8:word16] : word16)
  Class: Eq_123
  DataType: Eq_123
  OrigDataType: word16
T_358: (in 0x0A18 : word16)
  Class: Eq_358
  DataType: word16
  OrigDataType: word16
T_359: (in Mem0[ds:0x04E8:word16] + 0x0A18 : word16)
  Class: Eq_355
  DataType: word16
  OrigDataType: word16
T_360: (in ah_103 : Eq_360)
  Class: Eq_360
  DataType: Eq_360
  OrigDataType: (union (ui16 u0) (byte u1))
T_361: (in 0x01 : byte)
  Class: Eq_360
  DataType: byte
  OrigDataType: byte
T_362: (in ax_104 : word16)
  Class: Eq_362
  DataType: word16
  OrigDataType: word16
T_363: (in ax : word16)
  Class: Eq_363
  DataType: word16
  OrigDataType: word16
T_364: (in 0x01 : byte)
  Class: Eq_364
  DataType: byte
  OrigDataType: byte
T_365: (in DPB(ax, 0x01, 8, 8) : word16)
  Class: Eq_362
  DataType: word16
  OrigDataType: word16
T_366: (in bp_10 : word16)
  Class: Eq_366
  DataType: word16
  OrigDataType: word16
T_367: (in 0x0004 : word16)
  Class: Eq_366
  DataType: word16
  OrigDataType: word16
T_368: (in si_11 : (memptr (ptr Eq_11) byte))
  Class: Eq_368
  DataType: (memptr (ptr Eq_11) byte)
  OrigDataType: word16
T_369: (in 0x0670 : word16)
  Class: Eq_368
  DataType: (memptr (ptr Eq_11) byte)
  OrigDataType: word16
T_370: (in bx_102 : Eq_370)
  Class: Eq_370
  DataType: Eq_370
  OrigDataType: word16
T_371: (in 0x0000 : word16)
  Class: Eq_370
  DataType: uint16
  OrigDataType: word16
T_372: (in si_70 : (memptr (ptr Eq_11) byte))
  Class: Eq_368
  DataType: (memptr (ptr Eq_11) byte)
  OrigDataType: (memptr T_34 (struct 0001 (0 T_376 t0000)))
T_373: (in al_74 : byte)
  Class: Eq_373
  DataType: byte
  OrigDataType: byte
T_374: (in 0x0000 : word16)
  Class: Eq_374
  DataType: word16
  OrigDataType: word16
T_375: (in si_70 + 0x0000 : word16)
  Class: Eq_375
  DataType: word16
  OrigDataType: word16
T_376: (in Mem37[ds:si_70 + 0x0000:byte] : byte)
  Class: Eq_376
  DataType: byte
  OrigDataType: byte
T_377: (in dl_63 : byte)
  Class: Eq_377
  DataType: byte
  OrigDataType: byte
T_378: (in ds->*si_70 + dl_63 : byte)
  Class: Eq_373
  DataType: byte
  OrigDataType: byte
T_379: (in di_61 : word16)
  Class: Eq_379
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_33 (struct (0 T_382 t0000)))
T_380: (in 0x0000 : word16)
  Class: Eq_380
  DataType: word16
  OrigDataType: word16
T_381: (in di_61 + 0x0000 : word16)
  Class: Eq_381
  DataType: word16
  OrigDataType: word16
T_382: (in Mem76[es:di_61 + 0x0000:byte] : byte)
  Class: Eq_373
  DataType: byte
  OrigDataType: byte
T_383: (in 0x0001 : word16)
  Class: Eq_383
  DataType: word16
  OrigDataType: word16
T_384: (in si_70 + 0x0001 : word16)
  Class: Eq_368
  DataType: (memptr (ptr Eq_11) byte)
  OrigDataType: word16
T_385: (in ax_42 : word16)
  Class: Eq_385
  DataType: word16
  OrigDataType: word16
T_386: (in DPB(ax_42, al_74, 0, 8) : word16)
  Class: Eq_385
  DataType: word16
  OrigDataType: word16
T_387: (in 0x0001 : word16)
  Class: Eq_387
  DataType: word16
  OrigDataType: word16
T_388: (in di_61 + 0x0001 : word16)
  Class: Eq_388
  DataType: word16
  OrigDataType: word16
T_389: (in 0x007F : word16)
  Class: Eq_389
  DataType: word16
  OrigDataType: word16
T_390: (in di_61 + 1 + 0x007F : word16)
  Class: Eq_379
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_391: (in cx_67 : word16)
  Class: Eq_391
  DataType: word16
  OrigDataType: word16
T_392: (in 0x0001 : word16)
  Class: Eq_392
  DataType: word16
  OrigDataType: word16
T_393: (in cx_67 - 0x0001 : word16)
  Class: Eq_391
  DataType: word16
  OrigDataType: word16
T_394: (in 0x0000 : word16)
  Class: Eq_391
  DataType: word16
  OrigDataType: word16
T_395: (in cx_67 != 0x0000 : bool)
  Class: Eq_395
  DataType: bool
  OrigDataType: bool
T_396: (in 0x0120 : word16)
  Class: Eq_396
  DataType: word16
  OrigDataType: word16
T_397: (in si_11 + 0x0120 : word16)
  Class: Eq_368
  DataType: (memptr (ptr Eq_11) byte)
  OrigDataType: word16
T_398: (in bx_50 : Eq_370)
  Class: Eq_370
  DataType: Eq_370
  OrigDataType: (union (uint16 u0) ((memptr (ptr Eq_11) (struct "Eq_645" 0008 (4F0 word16 w04F0))) u1))
T_399: (in 0x0008 : word16)
  Class: Eq_399
  DataType: word16
  OrigDataType: word16
T_400: (in bx_50 + 0x0008 : word16)
  Class: Eq_370
  DataType: Eq_370
  OrigDataType: word16
T_401: (in di_48 : word16)
  Class: Eq_355
  DataType: word16
  OrigDataType: word16
T_402: (in 0x0001 : word16)
  Class: Eq_402
  DataType: word16
  OrigDataType: word16
T_403: (in di_48 + 0x0001 : word16)
  Class: Eq_355
  DataType: word16
  OrigDataType: word16
T_404: (in cx_44 : word16)
  Class: Eq_404
  DataType: word16
  OrigDataType: word16
T_405: (in 0x0001 : word16)
  Class: Eq_405
  DataType: word16
  OrigDataType: word16
T_406: (in cx_44 - 0x0001 : word16)
  Class: Eq_404
  DataType: word16
  OrigDataType: word16
T_407: (in 0x0000 : word16)
  Class: Eq_404
  DataType: word16
  OrigDataType: word16
T_408: (in cx_44 != 0x0000 : bool)
  Class: Eq_408
  DataType: bool
  OrigDataType: bool
T_409: (in 0x04F0 : word16)
  Class: Eq_409
  DataType: word16
  OrigDataType: word16
T_410: (in bx_50 + 0x04F0 : word16)
  Class: Eq_410
  DataType: word16
  OrigDataType: word16
T_411: (in Mem37[ds:bx_50 + 0x04F0:word16] : word16)
  Class: Eq_411
  DataType: word16
  OrigDataType: word16
T_412: (in di_48 + Mem37[ds:bx_50 + 0x04F0:word16] : word16)
  Class: Eq_379
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_413: (in 0x0001 : word16)
  Class: Eq_413
  DataType: uint16
  OrigDataType: uint16
T_414: (in bx_50 >>u 0x0001 : word16)
  Class: Eq_414
  DataType: Eq_414
  OrigDataType: (union (uint16 u0) ((memptr T_34 (struct (5F0 T_417 t05F0))) u1))
T_415: (in 0x05F0 : word16)
  Class: Eq_415
  DataType: word16
  OrigDataType: word16
T_416: (in (bx_50 >>u 0x0001) + 0x05F0 : word16)
  Class: Eq_416
  DataType: word16
  OrigDataType: word16
T_417: (in Mem37[ds:(bx_50 >>u 0x0001) + 0x05F0:byte] : byte)
  Class: Eq_377
  DataType: byte
  OrigDataType: byte
T_418: (in 0x0048 : word16)
  Class: Eq_391
  DataType: word16
  OrigDataType: word16
T_419: (in 0x01 : byte)
  Class: Eq_419
  DataType: byte
  OrigDataType: byte
T_420: (in ah_103 << 0x01 : word16)
  Class: Eq_360
  DataType: Eq_360
  OrigDataType: ui16
T_421: (in 0x0002 : word16)
  Class: Eq_421
  DataType: word16
  OrigDataType: word16
T_422: (in bx_102 + 0x0002 : word16)
  Class: Eq_370
  DataType: Eq_370
  OrigDataType: word16
T_423: (in DPB(ax_42, ah_103, 8, 8) : word16)
  Class: Eq_362
  DataType: word16
  OrigDataType: word16
T_424: (in 0x0001 : word16)
  Class: Eq_424
  DataType: word16
  OrigDataType: word16
T_425: (in bp_10 - 0x0001 : word16)
  Class: Eq_366
  DataType: word16
  OrigDataType: word16
T_426: (in 0x0000 : word16)
  Class: Eq_366
  DataType: word16
  OrigDataType: word16
T_427: (in bp_10 != 0x0000 : bool)
  Class: Eq_427
  DataType: bool
  OrigDataType: bool
T_428: (in 0x0670 : word16)
  Class: Eq_428
  DataType: word16
  OrigDataType: word16
T_429: (in ss : selector)
  Class: Eq_429
  DataType: (ptr Eq_429)
  OrigDataType: (ptr (segment))
T_430: (in fp : ptr16)
  Class: Eq_430
  DataType: Eq_430
  OrigDataType: (union (ptr16 u0) ((memptr T_429 (struct (FFFFFFFC T_433 tFFFFFFFC))) u1))
T_431: (in 0x0004 : word16)
  Class: Eq_431
  DataType: word16
  OrigDataType: word16
T_432: (in fp - 0x0004 : word16)
  Class: Eq_432
  DataType: word16
  OrigDataType: word16
T_433: (in Mem37[ss:fp - 0x0004:word16] : word16)
  Class: Eq_428
  DataType: word16
  OrigDataType: word16
T_434: (in 0x02 : byte)
  Class: Eq_434
  DataType: byte
  OrigDataType: byte
T_435: (in DPB(ax_104, 0x02, 0, 8) : word16)
  Class: Eq_385
  DataType: word16
  OrigDataType: word16
T_436: (in __outw : ptr32)
  Class: Eq_436
  DataType: (ptr Eq_436)
  OrigDataType: (ptr (fn T_438 (T_437, T_385)))
T_437: (in 0x03C4 : word16)
  Class: Eq_437
  DataType: word16
  OrigDataType: word16
T_438: (in __outw(0x03C4, ax_42) : void)
  Class: Eq_438
  DataType: void
  OrigDataType: void
T_439: (in 0x0020 : word16)
  Class: Eq_404
  DataType: word16
  OrigDataType: word16
T_440: (in __outw : ptr32)
  Class: Eq_440
  DataType: (ptr Eq_440)
  OrigDataType: (ptr (fn T_443 (T_441, T_442)))
T_441: (in 0x03C4 : word16)
  Class: Eq_441
  DataType: word16
  OrigDataType: word16
T_442: (in 0x0102 : word16)
  Class: Eq_442
  DataType: word16
  OrigDataType: word16
T_443: (in __outw(0x03C4, 0x0102) : void)
  Class: Eq_443
  DataType: void
  OrigDataType: void
T_444: (in si_2 : (memptr (ptr Eq_11) byte))
  Class: Eq_444
  DataType: (memptr (ptr Eq_11) byte)
  OrigDataType: word16
T_445: (in 0x2A70 : word16)
  Class: Eq_444
  DataType: (memptr (ptr Eq_11) byte)
  OrigDataType: word16
T_446: (in ax_18 : word16)
  Class: Eq_446
  DataType: word16
  OrigDataType: word16
T_447: (in 0x0102 : word16)
  Class: Eq_446
  DataType: word16
  OrigDataType: word16
T_448: (in ah_17 : Eq_448)
  Class: Eq_448
  DataType: Eq_448
  OrigDataType: (union (ui16 u0) (byte u1))
T_449: (in 0x01 : byte)
  Class: Eq_448
  DataType: byte
  OrigDataType: byte
T_450: (in di_16 : word16)
  Class: Eq_450
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_451: (in 0x04E8 : word16)
  Class: Eq_451
  DataType: (memptr (ptr Eq_11) Eq_123)
  OrigDataType: (memptr T_44 (struct (0 T_452 t0000)))
T_452: (in Mem0[ds:0x04E8:word16] : word16)
  Class: Eq_123
  DataType: Eq_123
  OrigDataType: word16
T_453: (in 0x5500 : word16)
  Class: Eq_453
  DataType: word16
  OrigDataType: word16
T_454: (in Mem0[ds:0x04E8:word16] + 0x5500 : word16)
  Class: Eq_450
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_455: (in bp_11 : word16)
  Class: Eq_455
  DataType: word16
  OrigDataType: word16
T_456: (in 0x0004 : word16)
  Class: Eq_455
  DataType: word16
  OrigDataType: word16
T_457: (in si_32 : (memptr (ptr Eq_11) byte))
  Class: Eq_444
  DataType: (memptr (ptr Eq_11) byte)
  OrigDataType: (memptr T_44 (struct (0 T_460 t0000)))
T_458: (in 0x0000 : word16)
  Class: Eq_458
  DataType: word16
  OrigDataType: word16
T_459: (in si_32 + 0x0000 : word16)
  Class: Eq_459
  DataType: word16
  OrigDataType: word16
T_460: (in Mem0[ds:si_32 + 0x0000:byte] : byte)
  Class: Eq_460
  DataType: byte
  OrigDataType: byte
T_461: (in di_30 : (memptr (ptr Eq_14) byte))
  Class: Eq_450
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: (memptr T_43 (struct 0001 (0 T_464 t0000)))
T_462: (in 0x0000 : word16)
  Class: Eq_462
  DataType: word16
  OrigDataType: word16
T_463: (in di_30 + 0x0000 : word16)
  Class: Eq_463
  DataType: word16
  OrigDataType: word16
T_464: (in Mem40[es:di_30 + 0x0000:byte] : byte)
  Class: Eq_460
  DataType: byte
  OrigDataType: byte
T_465: (in 0x0001 : word16)
  Class: Eq_465
  DataType: word16
  OrigDataType: word16
T_466: (in di_30 + 0x0001 : word16)
  Class: Eq_450
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_467: (in 0x0001 : word16)
  Class: Eq_467
  DataType: word16
  OrigDataType: word16
T_468: (in si_32 + 0x0001 : word16)
  Class: Eq_468
  DataType: word16
  OrigDataType: word16
T_469: (in 0x0003 : word16)
  Class: Eq_469
  DataType: word16
  OrigDataType: word16
T_470: (in si_32 + 1 + 0x0003 : word16)
  Class: Eq_444
  DataType: (memptr (ptr Eq_11) byte)
  OrigDataType: word16
T_471: (in cx_35 : word16)
  Class: Eq_471
  DataType: word16
  OrigDataType: word16
T_472: (in 0x0001 : word16)
  Class: Eq_472
  DataType: word16
  OrigDataType: word16
T_473: (in cx_35 - 0x0001 : word16)
  Class: Eq_471
  DataType: word16
  OrigDataType: word16
T_474: (in 0x0000 : word16)
  Class: Eq_471
  DataType: word16
  OrigDataType: word16
T_475: (in cx_35 != 0x0000 : bool)
  Class: Eq_475
  DataType: bool
  OrigDataType: bool
T_476: (in 0x002E : word16)
  Class: Eq_476
  DataType: word16
  OrigDataType: word16
T_477: (in di_30 + 0x002E : word16)
  Class: Eq_450
  DataType: (memptr (ptr Eq_14) byte)
  OrigDataType: word16
T_478: (in cx_28 : word16)
  Class: Eq_478
  DataType: word16
  OrigDataType: word16
T_479: (in 0x0001 : word16)
  Class: Eq_479
  DataType: word16
  OrigDataType: word16
T_480: (in cx_28 - 0x0001 : word16)
  Class: Eq_478
  DataType: word16
  OrigDataType: word16
T_481: (in 0x0000 : word16)
  Class: Eq_478
  DataType: word16
  OrigDataType: word16
T_482: (in cx_28 != 0x0000 : bool)
  Class: Eq_482
  DataType: bool
  OrigDataType: bool
T_483: (in 0x0052 : word16)
  Class: Eq_471
  DataType: word16
  OrigDataType: word16
T_484: (in 0x01 : byte)
  Class: Eq_484
  DataType: byte
  OrigDataType: byte
T_485: (in ah_17 << 0x01 : word16)
  Class: Eq_448
  DataType: Eq_448
  OrigDataType: ui16
T_486: (in DPB(ax_18, ah_17, 8, 8) : word16)
  Class: Eq_446
  DataType: word16
  OrigDataType: word16
T_487: (in __outw : ptr32)
  Class: Eq_487
  DataType: (ptr Eq_487)
  OrigDataType: (ptr (fn T_489 (T_488, T_446)))
T_488: (in 0x03C4 : word16)
  Class: Eq_488
  DataType: word16
  OrigDataType: word16
T_489: (in __outw(0x03C4, ax_18) : void)
  Class: Eq_489
  DataType: void
  OrigDataType: void
T_490: (in 0x0001 : word16)
  Class: Eq_490
  DataType: word16
  OrigDataType: word16
T_491: (in si_2 + 0x0001 : word16)
  Class: Eq_444
  DataType: (memptr (ptr Eq_11) byte)
  OrigDataType: word16
T_492: (in 0x0001 : word16)
  Class: Eq_492
  DataType: word16
  OrigDataType: word16
T_493: (in bp_11 - 0x0001 : word16)
  Class: Eq_455
  DataType: word16
  OrigDataType: word16
T_494: (in 0x0000 : word16)
  Class: Eq_455
  DataType: word16
  OrigDataType: word16
T_495: (in bp_11 != 0x0000 : bool)
  Class: Eq_495
  DataType: bool
  OrigDataType: bool
T_496: (in 0x0008 : word16)
  Class: Eq_478
  DataType: word16
  OrigDataType: word16
T_497: (in es : (ptr Eq_497))
  Class: Eq_497
  DataType: (ptr Eq_497)
  OrigDataType: (ptr (segment))
T_498: (in di_11 : (memptr (ptr Eq_515) byte))
  Class: Eq_498
  DataType: (memptr (ptr Eq_515) byte)
  OrigDataType: (memptr T_515 (struct 0001 (0 T_518 t0000)))
T_499: (in 0x2A70 : word16)
  Class: Eq_498
  DataType: (memptr (ptr Eq_515) byte)
  OrigDataType: word16
T_500: (in si_10 : (memptr (ptr Eq_11) byte))
  Class: Eq_500
  DataType: (memptr (ptr Eq_11) byte)
  OrigDataType: (memptr T_38 (struct 0001 (0 T_514 t0000)))
T_501: (in 0x2A72 : word16)
  Class: Eq_500
  DataType: (memptr (ptr Eq_11) byte)
  OrigDataType: word16
T_502: (in cx_12 : word16)
  Class: Eq_502
  DataType: word16
  OrigDataType: word16
T_503: (in 0x0A40 : word16)
  Class: Eq_502
  DataType: word16
  OrigDataType: word16
T_504: (in v11_20 : word16)
  Class: Eq_504
  DataType: word16
  OrigDataType: word16
T_505: (in 0x045F : word16)
  Class: Eq_505
  DataType: (memptr (ptr Eq_11) word16)
  OrigDataType: (memptr T_38 (struct (0 T_504 t0000)))
T_506: (in Mem0[ds:0x045F:word16] : word16)
  Class: Eq_504
  DataType: word16
  OrigDataType: word16
T_507: (in 0x0001 : word16)
  Class: Eq_507
  DataType: word16
  OrigDataType: word16
T_508: (in ds->w045F - 0x0001 : word16)
  Class: Eq_504
  DataType: word16
  OrigDataType: word16
T_509: (in Mem21[ds:0x045F:word16] : word16)
  Class: Eq_504
  DataType: word16
  OrigDataType: word16
T_510: (in 0x0000 : word16)
  Class: Eq_504
  DataType: word16
  OrigDataType: word16
T_511: (in v11_20 == 0x0000 : bool)
  Class: Eq_511
  DataType: bool
  OrigDataType: bool
T_512: (in 0x0000 : word16)
  Class: Eq_512
  DataType: word16
  OrigDataType: word16
T_513: (in si_10 + 0x0000 : word16)
  Class: Eq_513
  DataType: word16
  OrigDataType: word16
T_514: (in Mem0[ds:si_10 + 0x0000:byte] : byte)
  Class: Eq_514
  DataType: byte
  OrigDataType: byte
T_515: (in cs : selector)
  Class: Eq_515
  DataType: (ptr Eq_515)
  OrigDataType: (ptr (segment (2A70 (arr T_643) a2A70)))
T_516: (in 0x0000 : word16)
  Class: Eq_516
  DataType: word16
  OrigDataType: word16
T_517: (in di_11 + 0x0000 : word16)
  Class: Eq_517
  DataType: word16
  OrigDataType: word16
T_518: (in Mem16[cs:di_11 + 0x0000:byte] : byte)
  Class: Eq_514
  DataType: byte
  OrigDataType: byte
T_519: (in 0x0001 : word16)
  Class: Eq_519
  DataType: word16
  OrigDataType: word16
T_520: (in si_10 + 0x0001 : word16)
  Class: Eq_500
  DataType: (memptr (ptr Eq_11) byte)
  OrigDataType: word16
T_521: (in 0x0001 : word16)
  Class: Eq_521
  DataType: word16
  OrigDataType: word16
T_522: (in di_11 + 0x0001 : word16)
  Class: Eq_498
  DataType: (memptr (ptr Eq_515) byte)
  OrigDataType: word16
T_523: (in 0x0001 : word16)
  Class: Eq_523
  DataType: word16
  OrigDataType: word16
T_524: (in cx_12 - 0x0001 : word16)
  Class: Eq_502
  DataType: word16
  OrigDataType: word16
T_525: (in 0x0000 : word16)
  Class: Eq_502
  DataType: word16
  OrigDataType: word16
T_526: (in cx_12 == 0x0000 : bool)
  Class: Eq_526
  DataType: bool
  OrigDataType: bool
T_527: (in 0x0004 : word16)
  Class: Eq_504
  DataType: word16
  OrigDataType: word16
T_528: (in 0x045F : word16)
  Class: Eq_528
  DataType: (memptr (ptr Eq_11) word16)
  OrigDataType: (memptr T_38 (struct (0 T_529 t0000)))
T_529: (in Mem54[ds:0x045F:word16] : word16)
  Class: Eq_504
  DataType: word16
  OrigDataType: word16
T_530: (in gs_ax_59 : Eq_530)
  Class: Eq_530
  DataType: Eq_530
  OrigDataType: ptr32
T_531: (in 0x010C : word16)
  Class: Eq_531
  DataType: (memptr (ptr Eq_2) Eq_530)
  OrigDataType: (memptr T_39 (struct (0 T_532 t0000)))
T_532: (in Mem54[fs:0x010C:segptr32] : segptr32)
  Class: Eq_530
  DataType: Eq_530
  OrigDataType: segptr32
T_533: (in gs_60 : (ptr Eq_533))
  Class: Eq_533
  DataType: (ptr Eq_533)
  OrigDataType: (ptr (segment))
T_534: (in SLICE(gs_ax_59, selector, 16) : selector)
  Class: Eq_533
  DataType: (ptr Eq_533)
  OrigDataType: (ptr (segment))
T_535: (in bx_62 : word16)
  Class: Eq_535
  DataType: (memptr (ptr Eq_533) Eq_535)
  OrigDataType: (memptr T_533 (struct 0001 (0 T_553 t0000)))
T_536: (in 0x04EE : word16)
  Class: Eq_536
  DataType: (memptr (ptr Eq_11) Eq_537)
  OrigDataType: (memptr T_38 (struct (0 T_537 t0000)))
T_537: (in Mem54[ds:0x04EE:word16] : word16)
  Class: Eq_537
  DataType: Eq_537
  OrigDataType: (memptr T_38 (struct (3BB T_540 t03BB)))
T_538: (in 0x03BB : word16)
  Class: Eq_538
  DataType: word16
  OrigDataType: word16
T_539: (in Mem54[ds:0x04EE:word16] + 0x03BB : word16)
  Class: Eq_539
  DataType: word16
  OrigDataType: word16
T_540: (in Mem54[ds:Mem54[ds:0x04EE:word16] + 0x03BB:byte] : byte)
  Class: Eq_540
  DataType: byte
  OrigDataType: byte
T_541: (in (word16) Mem54[ds:Mem54[ds:0x04EE:word16] + 0x03BB:byte] : word16)
  Class: Eq_541
  DataType: word16
  OrigDataType: word16
T_542: (in 0x0003 : word16)
  Class: Eq_542
  DataType: word16
  OrigDataType: word16
T_543: (in (word16) Mem54[ds:Mem54[ds:0x04EE:word16] + 0x03BB:byte] << 0x0003 : word16)
  Class: Eq_543
  DataType: ui16
  OrigDataType: ui16
T_544: (in (word16) gs_ax_59 : word16)
  Class: Eq_544
  DataType: word16
  OrigDataType: word16
T_545: (in ((word16) Mem54[ds:Mem54[ds:0x04EE:word16] + 0x03BB:byte] << 0x0003) + (word16) gs_ax_59 : word16)
  Class: Eq_535
  DataType: (memptr (ptr Eq_533) Eq_535)
  OrigDataType: word16
T_546: (in di_64 : (memptr (ptr Eq_515) Eq_546))
  Class: Eq_546
  DataType: (memptr (ptr Eq_515) Eq_546)
  OrigDataType: (memptr T_515 (struct 0001 (0 T_560 t0000)))
T_547: (in 0x2BB0 : word16)
  Class: Eq_546
  DataType: (memptr (ptr Eq_515) Eq_546)
  OrigDataType: word16
T_548: (in cx_65 : word16)
  Class: Eq_548
  DataType: word16
  OrigDataType: word16
T_549: (in 0x0008 : word16)
  Class: Eq_548
  DataType: word16
  OrigDataType: word16
T_550: (in __bt : ptr32)
  Class: Eq_550
  DataType: (ptr Eq_550)
  OrigDataType: (ptr (fn T_555 (T_553, T_554)))
T_551: (in 0x0000 : word16)
  Class: Eq_551
  DataType: word16
  OrigDataType: word16
T_552: (in bx_62 + 0x0000 : word16)
  Class: Eq_552
  DataType: word16
  OrigDataType: word16
T_553: (in Mem54[gs_60:bx_62 + 0x0000:word16] : word16)
  Class: Eq_553
  DataType: word16
  OrigDataType: word16
T_554: (in dx_75 : int16)
  Class: Eq_554
  DataType: int16
  OrigDataType: int16
T_555: (in __bt((gs_60->*bx_62).w0000, dx_75) : bool)
  Class: Eq_555
  DataType: bool
  OrigDataType: bool
T_556: (in 0x05 : byte)
  Class: Eq_556
  DataType: byte
  OrigDataType: byte
T_557: (in __bt((gs_60->*bx_62).w0000, dx_75) << 0x05 : word16)
  Class: Eq_557
  DataType: Eq_557
  OrigDataType: ui16
T_558: (in 0x0000 : word16)
  Class: Eq_558
  DataType: word16
  OrigDataType: word16
T_559: (in di_64 + 0x0000 : word16)
  Class: Eq_559
  DataType: word16
  OrigDataType: word16
T_560: (in Mem84[cs:di_64 + 0x0000:byte] : byte)
  Class: Eq_557
  DataType: Eq_557
  OrigDataType: byte
T_561: (in 0x0001 : word16)
  Class: Eq_561
  DataType: word16
  OrigDataType: word16
T_562: (in di_64 + 0x0001 : word16)
  Class: Eq_546
  DataType: (memptr (ptr Eq_515) Eq_546)
  OrigDataType: word16
T_563: (in 0x0001 : word16)
  Class: Eq_563
  DataType: word16
  OrigDataType: word16
T_564: (in dx_75 - 0x0001 : word16)
  Class: Eq_554
  DataType: int16
  OrigDataType: word16
T_565: (in 0x0000 : word16)
  Class: Eq_554
  DataType: int16
  OrigDataType: int16
T_566: (in dx_75 >= 0x0000 : bool)
  Class: Eq_566
  DataType: bool
  OrigDataType: bool
T_567: (in 0x0140 : word16)
  Class: Eq_567
  DataType: word16
  OrigDataType: word16
T_568: (in di_64 + 0x0140 : word16)
  Class: Eq_546
  DataType: (memptr (ptr Eq_515) Eq_546)
  OrigDataType: word16
T_569: (in 0x0001 : word16)
  Class: Eq_569
  DataType: word16
  OrigDataType: word16
T_570: (in bx_62 + 0x0001 : word16)
  Class: Eq_535
  DataType: (memptr (ptr Eq_533) Eq_535)
  OrigDataType: word16
T_571: (in 0x0001 : word16)
  Class: Eq_571
  DataType: word16
  OrigDataType: word16
T_572: (in cx_65 - 0x0001 : word16)
  Class: Eq_548
  DataType: word16
  OrigDataType: word16
T_573: (in 0x0000 : word16)
  Class: Eq_548
  DataType: word16
  OrigDataType: word16
T_574: (in cx_65 != 0x0000 : bool)
  Class: Eq_574
  DataType: bool
  OrigDataType: bool
T_575: (in 0x0007 : word16)
  Class: Eq_554
  DataType: int16
  OrigDataType: word16
T_576: (in 0x04EE : word16)
  Class: Eq_576
  DataType: (memptr (ptr Eq_11) Eq_537)
  OrigDataType: (memptr T_38 (struct (0 T_537 t0000)))
T_577: (in Mem84[ds:0x04EE:word16] : word16)
  Class: Eq_537
  DataType: Eq_537
  OrigDataType: word16
T_578: (in 0x0001 : word16)
  Class: Eq_578
  DataType: word16
  OrigDataType: word16
T_579: (in Mem84[ds:0x04EE:word16] + 0x0001 : word16)
  Class: Eq_537
  DataType: Eq_537
  OrigDataType: word16
T_580: (in Mem95[ds:0x04EE:word16] : word16)
  Class: Eq_537
  DataType: Eq_537
  OrigDataType: word16
T_581: (in 0x04EE : word16)
  Class: Eq_581
  DataType: (memptr (ptr Eq_11) Eq_537)
  OrigDataType: (memptr T_38 (struct (0 T_582 t0000)))
T_582: (in Mem95[ds:0x04EE:word16] : word16)
  Class: Eq_537
  DataType: Eq_537
  OrigDataType: cups16
T_583: (in 0x00A3 : word16)
  Class: Eq_537
  DataType: cups16
  OrigDataType: cups16
T_584: (in ds->t04EE <=u 0x00A3 : bool)
  Class: Eq_584
  DataType: bool
  OrigDataType: bool
T_585: (in 0x0000 : word16)
  Class: Eq_537
  DataType: cups16
  OrigDataType: word16
T_586: (in 0x04EE : word16)
  Class: Eq_586
  DataType: (memptr (ptr Eq_11) Eq_537)
  OrigDataType: (memptr T_38 (struct (0 T_587 t0000)))
T_587: (in Mem102[ds:0x04EE:word16] : word16)
  Class: Eq_537
  DataType: Eq_537
  OrigDataType: word16
T_588: (in di_16 : (memptr (ptr Eq_5) byte))
  Class: Eq_588
  DataType: (memptr (ptr Eq_5) byte)
  OrigDataType: (memptr T_10 (struct 0001 (0 T_626 t0000)))
T_589: (in 0x0670 : word16)
  Class: Eq_588
  DataType: (memptr (ptr Eq_5) byte)
  OrigDataType: word16
T_590: (in bp_18 : word16)
  Class: Eq_590
  DataType: word16
  OrigDataType: word16
T_591: (in 0x0080 : word16)
  Class: Eq_590
  DataType: word16
  OrigDataType: word16
T_592: (in 0x0387 : word16)
  Class: Eq_592
  DataType: word16
  OrigDataType: word16
T_593: (in SEQ(ds, 0x0387) : ptr32)
  Class: Eq_593
  DataType: ptr32
  OrigDataType: ptr32
T_594: (in cx_21 : word16)
  Class: Eq_594
  DataType: word16
  OrigDataType: word16
T_595: (in 0x0001 : word16)
  Class: Eq_595
  DataType: word16
  OrigDataType: word16
T_596: (in cx_21 - 0x0001 : word16)
  Class: Eq_596
  DataType: uint16
  OrigDataType: uint16
T_597: (in 0x0003 : word16)
  Class: Eq_597
  DataType: uint16
  OrigDataType: uint16
T_598: (in cx_21 - 0x0001 >>u 0x0003 : word16)
  Class: Eq_598
  DataType: uint16
  OrigDataType: uint16
T_599: (in 0x0008 : word16)
  Class: Eq_599
  DataType: word16
  OrigDataType: word16
T_600: (in (cx_21 - 0x0001 >>u 0x0003) - 0x0008 : word16)
  Class: Eq_600
  DataType: int16
  OrigDataType: int16
T_601: (in -((cx_21 - 0x0001 >>u 0x0003) - 0x0008) : word16)
  Class: Eq_601
  DataType: int16
  OrigDataType: int16
T_602: (in 0x0004 : word16)
  Class: Eq_602
  DataType: ui16
  OrigDataType: ui16
T_603: (in -((cx_21 - 0x0001 >>u 0x0003) - 0x0008) * 0x0004 : word16)
  Class: Eq_603
  DataType: ui16
  OrigDataType: ui16
T_604: (in SEQ(ds, 0x0387)[-((cx_21 - 0x0001 >>u 0x0003) - 0x0008) * 0x0004] : word32)
  Class: Eq_604
  DataType: word32
  OrigDataType: word32
T_605: (in 0x80000000 : word32)
  Class: Eq_605
  DataType: uint32
  OrigDataType: uint32
T_606: (in 0x0001 : word16)
  Class: Eq_606
  DataType: word16
  OrigDataType: word16
T_607: (in bp_18 - 0x0001 : word16)
  Class: Eq_607
  DataType: uint16
  OrigDataType: uint16
T_608: (in 0x0002 : word16)
  Class: Eq_608
  DataType: uint16
  OrigDataType: uint16
T_609: (in bp_18 - 0x0001 >>u 0x0002 : word16)
  Class: Eq_609
  DataType: uint16
  OrigDataType: uint16
T_610: (in 0x001F : word16)
  Class: Eq_610
  DataType: word16
  OrigDataType: word16
T_611: (in (bp_18 - 0x0001 >>u 0x0002) - 0x001F : word16)
  Class: Eq_611
  DataType: int16
  OrigDataType: int16
T_612: (in -((bp_18 - 0x0001 >>u 0x0002) - 0x001F) : word16)
  Class: Eq_612
  DataType: int16
  OrigDataType: int16
T_613: (in (byte) -((bp_18 - 0x0001 >>u 0x0002) - 0x001F) : byte)
  Class: Eq_613
  DataType: uint8
  OrigDataType: uint8
T_614: (in 0x80000000 >>u (byte) (-((bp_18 - 0x0001 >>u 0x0002) - 0x001F)) : word32)
  Class: Eq_614
  DataType: uint32
  OrigDataType: uint32
T_615: (in (&ds->a0387[0])[-((cx_21 - 0x0001 >>u 0x0003) - 0x0008)] & 0x80000000 >>u (byte) (-((bp_18 - 0x0001 >>u 0x0002) - 0x001F)) : word32)
  Class: Eq_615
  DataType: word32
  OrigDataType: word32
T_616: (in 0x00000000 : word32)
  Class: Eq_615
  DataType: word32
  OrigDataType: word32
T_617: (in ((&ds->a0387[0])[-((cx_21 - 0x0001 >>u 0x0003) - 0x0008)] & 0x80000000 >>u (byte) (-((bp_18 - 0x0001 >>u 0x0002) - 0x001F))) == 0x00000000 : bool)
  Class: Eq_617
  DataType: bool
  OrigDataType: bool
T_618: (in 0x01 : byte)
  Class: Eq_618
  DataType: byte
  OrigDataType: byte
T_619: (in ((&ds->a0387[0])[-((cx_21 - 0x0001 >>u 0x0003) - 0x0008)] & 0x80000000 >>u (byte) (-((bp_18 - 0x0001 >>u 0x0002) - 0x001F))) == 0x00000000 ^ 0x01 : byte)
  Class: Eq_619
  DataType: byte
  OrigDataType: byte
T_620: (in 0x06 : byte)
  Class: Eq_620
  DataType: byte
  OrigDataType: byte
T_621: (in (((&ds->a0387[0])[-((cx_21 - 0x0001 >>u 0x0003) - 0x0008)] & 0x80000000 >>u (byte) (-((bp_18 - 0x0001 >>u 0x0002) - 0x001F))) == 0x00000000 ^ 0x01) << 0x06 : word16)
  Class: Eq_621
  DataType: ui16
  OrigDataType: ui16
T_622: (in 0x29 : byte)
  Class: Eq_622
  DataType: byte
  OrigDataType: byte
T_623: (in ((((&ds->a0387[0])[-((cx_21 - 0x0001 >>u 0x0003) - 0x0008)] & 0x80000000 >>u (byte) (-((bp_18 - 0x0001 >>u 0x0002) - 0x001F))) == 0x00000000 ^ 0x01) << 0x06) + 0x29 : byte)
  Class: Eq_623
  DataType: byte
  OrigDataType: byte
T_624: (in 0x0000 : word16)
  Class: Eq_624
  DataType: word16
  OrigDataType: word16
T_625: (in di_16 + 0x0000 : word16)
  Class: Eq_625
  DataType: word16
  OrigDataType: word16
T_626: (in Mem50[es:di_16 + 0x0000:byte] : byte)
  Class: Eq_623
  DataType: byte
  OrigDataType: byte
T_627: (in 0x0001 : word16)
  Class: Eq_627
  DataType: word16
  OrigDataType: word16
T_628: (in di_16 + 0x0001 : word16)
  Class: Eq_588
  DataType: (memptr (ptr Eq_5) byte)
  OrigDataType: word16
T_629: (in 0x0001 : word16)
  Class: Eq_629
  DataType: word16
  OrigDataType: word16
T_630: (in cx_21 - 0x0001 : word16)
  Class: Eq_594
  DataType: word16
  OrigDataType: word16
T_631: (in 0x0000 : word16)
  Class: Eq_594
  DataType: word16
  OrigDataType: word16
T_632: (in cx_21 != 0x0000 : bool)
  Class: Eq_632
  DataType: bool
  OrigDataType: bool
T_633: (in 0x0001 : word16)
  Class: Eq_633
  DataType: word16
  OrigDataType: word16
T_634: (in bp_18 - 0x0001 : word16)
  Class: Eq_590
  DataType: word16
  OrigDataType: word16
T_635: (in 0x0000 : word16)
  Class: Eq_590
  DataType: word16
  OrigDataType: word16
T_636: (in bp_18 != 0x0000 : bool)
  Class: Eq_636
  DataType: bool
  OrigDataType: bool
T_637: (in 0x0048 : word16)
  Class: Eq_594
  DataType: word16
  OrigDataType: word16
T_638:
  Class: Eq_638
  DataType: byte
  OrigDataType: (struct 0001 (0 T_72 t0000))
T_639:
  Class: Eq_639
  DataType: word32
  OrigDataType: (struct 0004 (0 T_134 t0000))
T_640:
  Class: Eq_640
  DataType: ui16
  OrigDataType: (struct 0002 (0 T_308 t0000))
T_641:
  Class: Eq_641
  DataType: byte
  OrigDataType: (struct 0001 (0 T_344 t0000))
T_642:
  Class: Eq_642
  DataType: byte
  OrigDataType: (struct 0001 (0 T_514 t0000))
T_643:
  Class: Eq_643
  DataType: byte
  OrigDataType: (struct 0001 (0 T_518 t0000))
T_644:
  Class: Eq_644
  DataType: word32
  OrigDataType: (struct 0004 (0 T_604 t0000))
T_645:
  Class: Eq_645
  DataType: Eq_645
  OrigDataType: 
T_646:
  Class: Eq_646
  DataType: Eq_646
  OrigDataType: 
T_647:
  Class: Eq_647
  DataType: Eq_647
  OrigDataType: 
T_648:
  Class: Eq_648
  DataType: Eq_648
  OrigDataType: 
*/
typedef Eq_130 Eq_1Eq_68 Eq_1struct Globals {
	Eq_130 * ptrFFFA0000;	// FFFA0000
	Eq_68 * ptr0000;	// 0
} Eq_1;

typedef Eq_530 Eq_2struct Eq_2 {
	Eq_530 t010C;	// 10C
} Eq_2;

typedef Eq_2 * (Eq_3)(Eq_5 *);

typedef  Eq_5[]struct Eq_5 {
	byte a04E8[];	// 4E8
	byte b0670;	// 670
} Eq_5;

typedef void (Eq_8)(Eq_5 *, Eq_11 *);

typedef  Eq_11[]Eq_123Eq_123Eq_278Eq_537[][][]struct Eq_11 {
	word32 a0387[];	// 387
	word16 w045F;	// 45F
	Eq_123 t04E8;	// 4E8
	Eq_123 t04EA;	// 4EA
	Eq_278 Eq_11::*ptr04EC;	// 4EC
	Eq_537 t04EE;	// 4EE
	ui16 a04F0[];	// 4F0
	byte a05F0[];	// 5F0
	byte b0670;	// 670
	byte b2A70;	// 2A70
	byte a2A72[];	// 2A72
} Eq_11;

typedef struct Eq_14 {
} Eq_14;

typedef Eq_14 * (Eq_15)(Eq_11 *);

typedef void (Eq_19)();

typedef void (Eq_22)(Eq_14 *, Eq_11 *);

typedef void (Eq_27)(Eq_11 *);

typedef void (Eq_31)(Eq_14 *, Eq_11 *);

typedef Eq_14 * (Eq_36)(Eq_11 *, Eq_2 *);

typedef void (Eq_41)(Eq_14 *, Eq_11 *);

typedef void (Eq_46)(Eq_11 *);

typedef byte (Eq_50)(byte);

typedef void (Eq_55)(byte);

typedef void (Eq_60)();

typedef struct Eq_63 {
} Eq_63;

typedef struct Eq_68 {
} Eq_68;

typedef struct Eq_79 {
} Eq_79;

typedef void (Eq_83)(word16, byte);

typedef void (Eq_89)(word16, byte);

typedef void (Eq_97)(word16, word16);

typedef void (Eq_101)(word16, word16);

typedef void (Eq_105)(word16, word16);

typedef void (Eq_109)(word16, word16);

typedef void (Eq_113)(word16, word16);

typedef void (Eq_121)(Eq_123, Eq_11 *);

typedef union Eq_123 {
	byte u0;
	word32 Eq_14::* u1;
} Eq_123;

typedef  Eq_130[]struct Eq_130 {
	word32 a0000[];	// 0
} Eq_130;

typedef byte (Eq_144)(word16);

typedef byte (Eq_153)(word16);

typedef void (Eq_162)();

typedef void (Eq_167)(word16, word16);

typedef void (Eq_170)(word16, word16);

typedef byte (Eq_178)(word16);

typedef void (Eq_193)(word16, word16);

typedef void (Eq_224)(word16, byte);

typedef void (Eq_238)(word16, byte, byte, byte);

typedef void (Eq_271)(word16, byte);

typedef void (Eq_273)(word16, byte);

typedef void (Eq_275)(word16, byte);

typedef struct Eq_278 {
	byte b0461;	// 461
} Eq_278;

typedef union Eq_299 {
	int16 u0;
	uint16 u1;
} Eq_299;

typedef struct Eq_319 {
	byte b0461;	// 461
} Eq_319;

typedef union Eq_336 {
	int16 u0;
	uint16 u1;
} Eq_336;

typedef union Eq_360 {
	ui16 u0;
	byte u1;
} Eq_360;

typedef union Eq_370 {
	uint16 u0;
	Eq_645 Eq_11::* u1;
} Eq_370;

typedef union Eq_414 {
	uint16 u0;
	Eq_646 Eq_11::* u1;
} Eq_414;

typedef struct Eq_429 {
} Eq_429;

typedef union Eq_430 {
	ptr16 u0;
	Eq_647 Eq_429::* u1;
} Eq_430;

typedef void (Eq_436)(word16, word16);

typedef void (Eq_440)(word16, word16);

typedef union Eq_448 {
	ui16 u0;
	byte u1;
} Eq_448;

typedef void (Eq_487)(word16, word16);

typedef struct Eq_497 {
} Eq_497;

typedef  Eq_515[]Eq_546struct Eq_515 {
	byte a2A70[];	// 2A70
	Eq_546 t2BB0;	// 2BB0
} Eq_515;

typedef union Eq_530 {
	ptr32 u0;
	segptr32 u1;
} Eq_530;

typedef struct Eq_533 {
} Eq_533;

typedef struct Eq_535 {	// size: 1 1
	word16 w0000;	// 0
} Eq_535;

typedef union Eq_537 {
	cups16 u0;
	Eq_648 Eq_11::* u1;
} Eq_537;

typedef Eq_557 Eq_546struct Eq_546 {	// size: 1 1
	Eq_557 t0000;	// 0
} Eq_546;

typedef bool (Eq_550)(word16, int16);

typedef union Eq_557 {
	ui16 u0;
	byte u1;
} Eq_557;

typedef struct Eq_645 {	// size: 8 8
	word16 w04F0;	// 4F0
} Eq_645;

typedef struct Eq_646 {
	byte b05F0;	// 5F0
} Eq_646;

typedef struct Eq_647 {
	word16 wFFFFFFFC;	// FFFFFFFC
} Eq_647;

typedef struct Eq_648 {
	byte b03BB;	// 3BB
} Eq_648;

