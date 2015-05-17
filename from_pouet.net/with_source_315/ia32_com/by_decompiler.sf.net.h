// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_315/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_16) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_16: (segment "Eq_16" (0 byte b0000))
	T_16 (in 0xA000 : selector)
	T_84 (in es : (ptr Eq_16))
	T_110 (in es : (ptr Eq_16))
Eq_27: (segment "Eq_27" (1A1 Eq_81 t01A1) (1A3 Eq_81 t01A3) (1A5 word16 w01A5) (1A7 Eq_82 t01A7) (1A9 Eq_81 t01A9) (1AB word16 w01AB) (1AD word16 w01AD) (1AF Eq_82 t01AF) (1B1 Eq_81 t01B1) (1B3 word16 w01B3) (1B5 word16 w01B5) (1B7 word16 w01B7) (1B9 uint16 w01B9) (36D1 uint16 w36D1))
	T_27 (in ds : (ptr Eq_27))
	T_58 (in ds : (ptr Eq_27))
	T_85 (in ds : (ptr Eq_27))
	T_111 (in ds : (ptr Eq_27))
	T_194 (in ds : (ptr Eq_27))
Eq_30: (fn void (byte))
	T_30 (in __syscall : ptr32)
Eq_56: (fn void ((ptr Eq_27)))
	T_56 (in fn0C00_0219 : ptr32)
	T_57 (in signature of fn0C00_0219 : void)
Eq_65: (fn byte (word16))
	T_65 (in __inb : ptr32)
Eq_72: (fn byte (word16))
	T_72 (in __inb : ptr32)
Eq_79: (fn byte (Eq_81, Eq_82, byte, (ptr Eq_16), (ptr Eq_27)))
	T_79 (in fn0C00_01BB : ptr32)
	T_80 (in signature of fn0C00_01BB : void)
	T_102 (in fn0C00_01BB : ptr32)
	T_130 (in fn0C00_01BB : ptr32)
	T_149 (in fn0C00_01BB : ptr32)
	T_179 (in fn0C00_01BB : ptr32)
	T_187 (in fn0C00_01BB : ptr32)
	T_190 (in fn0C00_01BB : ptr32)
Eq_81: (union "Eq_81" (int16 u0) (uint16 u1))
	T_81 (in ax : Eq_81)
	T_87 (in Mem35[ds:0x01B1:word16] : word16)
	T_92 (in ax_59 : Eq_81)
	T_94 (in Mem35[ds:0x01A9:word16] : word16)
	T_96 (in Mem60[ds:0x01B1:word16] : word16)
	T_107 (in ax : Eq_81)
	T_113 (in Mem62[ds:0x01A1:word16] : word16)
	T_119 (in Mem62[ds:0x01A3:word16] : word16)
	T_131 (in 0x0000 : word16)
	T_150 (in 0x0000 : word16)
	T_182 (in ax + 0x0001 : word16)
	T_189 (in ax - 0x000B : word16)
	T_203 (in ax : Eq_81)
	T_205 (in Mem0[ds:0x01A1:word16] : word16)
	T_212 (in ((word16) (Mem0[ds:0x36D1:word16] *u (ax + Mem0[ds:0x01A1:word16])) & 0x007F) + 0x0024 : word16)
	T_214 (in Mem17[ds:0x01A9:word16] : word16)
	T_229 (in bx : Eq_81)
	T_230 (in 0x0002 : word16)
	T_233 (in 0x0002 : word16)
	T_234 (in 0x00BD : word16)
	T_235 (in bx_11 : Eq_81)
	T_237 (in Mem0[ds:0x01A3:word16] : word16)
	T_244 (in fn0C00_0207(bx_11) : word16)
	T_246 (in Mem14[ds:0x01A3:word16] : word16)
	T_247 (in bx_18 : Eq_81)
	T_250 (in Mem14[ds:0x01A1:word16] : word16)
	T_253 (in Mem14[ds:0x01A1:word16] + Mem14[ds:0x01A5:word16] : word16)
	T_254 (in fn0C00_0207(Mem14[ds:0x01A1:word16] + Mem14[ds:0x01A5:word16]) : word16)
	T_256 (in Mem19[ds:0x01A1:word16] : word16)
	T_261 (in ax_78 : Eq_81)
	T_263 (in Mem0[ds:0x01A9:word16] : word16)
	T_265 (in Mem0[ds:0x01A3:word16] : word16)
	T_267 (in bx_11 + 0x0005 : word16)
	T_270 (in bx_11 - 0x0001 : word16)
	T_271 (in bx_11 + 0x0005 : word16)
	T_274 (in bx_11 + 0x0001 : word16)
	T_275 (in ax_41 : Eq_81)
	T_277 (in Mem19[ds:0x01A9:word16] : word16)
	T_280 (in Mem19[ds:0x01A9:word16] + Mem19[ds:0x01AD:word16] : word16)
	T_282 (in Mem42[ds:0x01A9:word16] : word16)
	T_283 (in 0x0002 : word16)
	T_290 (in 0x00C6 : word16)
	T_308 (in bx_53 : Eq_81)
	T_310 (in Mem49[ds:0x01A3:word16] : word16)
	T_315 (in bx_18 + 0x000A : word16)
	T_324 (in bx_53 + 0x000A : word16)
Eq_82: (union "Eq_82" (int16 u0) ((memptr (ptr Eq_16) byte) u1))
	T_82 (in bx : Eq_82)
	T_89 (in Mem35[ds:0x01AF:word16] : word16)
	T_97 (in bx_61 : Eq_82)
	T_99 (in Mem60[ds:0x01A7:word16] : word16)
	T_101 (in Mem62[ds:0x01AF:word16] : word16)
	T_108 (in bx : Eq_82)
	T_114 (in 0x0001 : word16)
	T_120 (in 0x013E : word16)
	T_125 (in bx_76 : Eq_82)
	T_126 (in 0x0000 : word16)
	T_136 (in bx_76 + 0x0001 + 0x0001 : word16)
	T_141 (in bx_90 : Eq_82)
	T_142 (in 0x013F : word16)
	T_153 (in bx_98 - 0x0001 : word16)
	T_215 (in 0x00A0 : word16)
	T_217 (in Mem18[ds:0x01A7:word16] : word16)
	T_239 (in Mem0[ds:0x01A7:word16] : word16)
	T_240 (in 0x00E6 : word16)
	T_295 (in cx_48 : Eq_82)
	T_297 (in Mem42[ds:0x01A7:word16] : word16)
	T_300 (in Mem42[ds:0x01A7:word16] + Mem42[ds:0x01AB:word16] : word16)
	T_302 (in Mem49[ds:0x01A7:word16] : word16)
	T_303 (in 0x0002 : word16)
	T_311 (in 0x013D : word16)
	T_320 (in 0x0000 : word16)
	T_329 (in 0x013F : word16)
Eq_105: (fn void (Eq_81, Eq_82, byte, (ptr Eq_16), (ptr Eq_27)))
	T_105 (in fn0C00_01CB : ptr32)
	T_106 (in signature of fn0C00_01CB : void)
	T_117 (in fn0C00_01CB : ptr32)
Eq_158: (fn byte ((ptr byte)))
	T_158 (in bios_kbd_check_keystroke : ptr32)
	T_159 (in signature of bios_kbd_check_keystroke : void)
Eq_165: (fn void ())
	T_165 (in msdos_terminate_program20 : ptr32)
	T_166 (in signature of msdos_terminate_program20 : void)
Eq_242: (fn Eq_81 (Eq_81))
	T_242 (in fn0C00_0207 : ptr32)
	T_243 (in signature of fn0C00_0207 : void)
	T_248 (in fn0C00_0207 : ptr32)
Eq_331: (fn void (Eq_81, (memptr (ptr Eq_27) int16), (ptr Eq_27)))
	T_331 (in fn0C00_01E0 : ptr32)
	T_332 (in signature of fn0C00_01E0 : void)
	T_335 (in fn0C00_01E0 : ptr32)
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
T_7: (in di_13 : (memptr (ptr Eq_16) byte))
  Class: Eq_7
  DataType: (memptr (ptr Eq_16) byte)
  OrigDataType: (memptr T_16 (struct 0001 (0 T_15 t0000)))
T_8: (in 0x0000 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_16) byte)
  OrigDataType: word16
T_9: (in cx_11 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in 0x0140 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_11: (in cx_18 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in 0xF938 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_13: (in al_103 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in 0x12 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_15: (in 0x00 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in 0xA000 : selector)
  Class: Eq_16
  DataType: (ptr Eq_16)
  OrigDataType: (ptr (segment))
T_17: (in 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in di_13 + 0x0000 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in Mem15[0xA000:di_13 + 0x0000:byte] : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_20: (in 0x0001 : word16)
  Class: Eq_20
  DataType: word16
  OrigDataType: word16
T_21: (in di_13 + 0x0001 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_16) byte)
  OrigDataType: word16
T_22: (in 0x0001 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in cx_11 - 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_24: (in 0x0000 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_25: (in cx_11 == 0x0000 : bool)
  Class: Eq_25
  DataType: bool
  OrigDataType: bool
T_26: (in 0x0000 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in ds : (ptr Eq_27))
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (segment (1A1 T_113 t01A1) (1A3 T_119 t01A3) (1A5 T_26 t01A5) (1A7 T_99 t01A7) (1A9 T_94 t01A9) (1AF T_82 t01AF) (1B1 T_81 t01B1) (1B5 T_129 t01B5) (1B7 T_145 t01B7)))
T_28: (in 0x01A5 : word16)
  Class: Eq_28
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_27 (struct (0 T_29 t0000)))
T_29: (in Mem35[ds:0x01A5:word16] : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_30: (in __syscall : ptr32)
  Class: Eq_30
  DataType: (ptr Eq_30)
  OrigDataType: (ptr (fn T_32 (T_31)))
T_31: (in 0x16 : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_32: (in __syscall(0x16) : void)
  Class: Eq_32
  DataType: void
  OrigDataType: void
T_33: (in 0x04 : byte)
  Class: Eq_33
  DataType: byte
  OrigDataType: byte
T_34: (in al_103 & 0x04 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in 0x00 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_36: (in (al_103 & 0x04) == 0x00 : bool)
  Class: Eq_36
  DataType: bool
  OrigDataType: bool
T_37: (in 0x12 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_38: (in 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in di_13 + 0x0000 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in Mem26[0xA000:di_13 + 0x0000:byte] : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_41: (in 0x0001 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in di_13 + 0x0001 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_16) byte)
  OrigDataType: word16
T_43: (in 0x0001 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in cx_18 - 0x0001 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_45: (in 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_46: (in cx_18 == 0x0000 : bool)
  Class: Eq_46
  DataType: bool
  OrigDataType: bool
T_47: (in 0x08 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in al_103 & 0x08 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_49: (in 0x00 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_50: (in (al_103 & 0x08) == 0x00 : bool)
  Class: Eq_50
  DataType: bool
  OrigDataType: bool
T_51: (in 0x01A5 : word16)
  Class: Eq_51
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_27 (struct (0 T_26 t0000)))
T_52: (in Mem35[ds:0x01A5:word16] : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_53: (in 0x0001 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in ds->w01A5 + 0x0001 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_55: (in Mem110[ds:0x01A5:word16] : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_56: (in fn0C00_0219 : ptr32)
  Class: Eq_56
  DataType: (ptr Eq_56)
  OrigDataType: (ptr (fn T_59 (T_27)))
T_57: (in signature of fn0C00_0219 : void)
  Class: Eq_56
  DataType: (ptr Eq_56)
  OrigDataType: 
T_58: (in ds : (ptr Eq_27))
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (segment (1A1 T_203 t01A1) (1A3 T_203 t01A3) (1A5 T_252 t01A5) (1A7 T_239 t01A7) (1A9 T_203 t01A9) (1AB T_299 t01AB) (1AD T_279 t01AD) (1B3 T_258 t01B3)))
T_59: (in fn0C00_0219(ds) : void)
  Class: Eq_59
  DataType: void
  OrigDataType: void
T_60: (in 0x01A5 : word16)
  Class: Eq_60
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_27 (struct (0 T_26 t0000)))
T_61: (in Mem35[ds:0x01A5:word16] : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_62: (in 0x0001 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in ds->w01A5 - 0x0001 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_64: (in Mem107[ds:0x01A5:word16] : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_65: (in __inb : ptr32)
  Class: Eq_65
  DataType: (ptr Eq_65)
  OrigDataType: (ptr (fn T_67 (T_66)))
T_66: (in 0x03DA : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in __inb(0x03DA) : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_68: (in 0x08 : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_69: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_70: (in 0x00 : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_71: (in (__inb(0x03DA) & 0x08) != 0x00 : bool)
  Class: Eq_71
  DataType: bool
  OrigDataType: bool
T_72: (in __inb : ptr32)
  Class: Eq_72
  DataType: (ptr Eq_72)
  OrigDataType: (ptr (fn T_74 (T_73)))
T_73: (in 0x03DA : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in __inb(0x03DA) : byte)
  Class: Eq_74
  DataType: byte
  OrigDataType: byte
T_75: (in 0x08 : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_76: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_76
  DataType: byte
  OrigDataType: byte
T_77: (in 0x00 : byte)
  Class: Eq_76
  DataType: byte
  OrigDataType: byte
T_78: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_78
  DataType: bool
  OrigDataType: bool
T_79: (in fn0C00_01BB : ptr32)
  Class: Eq_79
  DataType: (ptr Eq_79)
  OrigDataType: (ptr (fn T_91 (T_87, T_89, T_90, T_16, T_27)))
T_80: (in signature of fn0C00_01BB : void)
  Class: Eq_79
  DataType: (ptr Eq_79)
  OrigDataType: 
T_81: (in ax : Eq_81)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: uint16
T_82: (in bx : Eq_82)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: (memptr T_84 (struct (0 T_176 t0000)))
T_83: (in dl : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_84: (in es : (ptr Eq_16))
  Class: Eq_16
  DataType: (ptr Eq_16)
  OrigDataType: (ptr (segment))
T_85: (in ds : (ptr Eq_27))
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (segment (1B9 T_172 t01B9)))
T_86: (in 0x01B1 : word16)
  Class: Eq_86
  DataType: (memptr (ptr Eq_27) Eq_81)
  OrigDataType: (memptr T_27 (struct (0 T_87 t0000)))
T_87: (in Mem35[ds:0x01B1:word16] : word16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_88: (in 0x01AF : word16)
  Class: Eq_88
  DataType: (memptr (ptr Eq_27) Eq_82)
  OrigDataType: (memptr T_27 (struct (0 T_89 t0000)))
T_89: (in Mem35[ds:0x01AF:word16] : word16)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: word16
T_90: (in 0x12 : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_91: (in fn0C00_01BB(ds->t01B1, ds->t01AF, 0x12, 0xA000, ds) : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_92: (in ax_59 : Eq_81)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_93: (in 0x01A9 : word16)
  Class: Eq_93
  DataType: (memptr (ptr Eq_27) Eq_81)
  OrigDataType: (memptr T_27 (struct (0 T_94 t0000)))
T_94: (in Mem35[ds:0x01A9:word16] : word16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_95: (in 0x01B1 : word16)
  Class: Eq_95
  DataType: (memptr (ptr Eq_27) Eq_81)
  OrigDataType: (memptr T_27 (struct (0 T_96 t0000)))
T_96: (in Mem60[ds:0x01B1:word16] : word16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_97: (in bx_61 : Eq_82)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: word16
T_98: (in 0x01A7 : word16)
  Class: Eq_98
  DataType: (memptr (ptr Eq_27) Eq_82)
  OrigDataType: (memptr T_27 (struct (0 T_99 t0000)))
T_99: (in Mem60[ds:0x01A7:word16] : word16)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: word16
T_100: (in 0x01AF : word16)
  Class: Eq_100
  DataType: (memptr (ptr Eq_27) Eq_82)
  OrigDataType: (memptr T_27 (struct (0 T_101 t0000)))
T_101: (in Mem62[ds:0x01AF:word16] : word16)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: word16
T_102: (in fn0C00_01BB : ptr32)
  Class: Eq_79
  DataType: (ptr Eq_79)
  OrigDataType: (ptr (fn T_104 (T_92, T_97, T_103, T_16, T_27)))
T_103: (in 0x0E : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_104: (in fn0C00_01BB(ax_59, bx_61, 0x0E, 0xA000, ds) : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_105: (in fn0C00_01CB : ptr32)
  Class: Eq_105
  DataType: (ptr Eq_105)
  OrigDataType: (ptr (fn T_116 (T_113, T_114, T_115, T_16, T_27)))
T_106: (in signature of fn0C00_01CB : void)
  Class: Eq_105
  DataType: (ptr Eq_105)
  OrigDataType: 
T_107: (in ax : Eq_81)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_108: (in bx : Eq_82)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: word16
T_109: (in dl : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_110: (in es : (ptr Eq_16))
  Class: Eq_16
  DataType: (ptr Eq_16)
  OrigDataType: (ptr (segment))
T_111: (in ds : (ptr Eq_27))
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (segment))
T_112: (in 0x01A1 : word16)
  Class: Eq_112
  DataType: (memptr (ptr Eq_27) Eq_81)
  OrigDataType: (memptr T_27 (struct (0 T_113 t0000)))
T_113: (in Mem62[ds:0x01A1:word16] : word16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_114: (in 0x0001 : word16)
  Class: Eq_82
  DataType: int16
  OrigDataType: word16
T_115: (in 0x0A : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_116: (in fn0C00_01CB(ds->t01A1, 0x0001, 0x0A, 0xA000, ds) : void)
  Class: Eq_116
  DataType: void
  OrigDataType: void
T_117: (in fn0C00_01CB : ptr32)
  Class: Eq_105
  DataType: (ptr Eq_105)
  OrigDataType: (ptr (fn T_122 (T_119, T_120, T_121, T_16, T_27)))
T_118: (in 0x01A3 : word16)
  Class: Eq_118
  DataType: (memptr (ptr Eq_27) Eq_81)
  OrigDataType: (memptr T_27 (struct (0 T_119 t0000)))
T_119: (in Mem62[ds:0x01A3:word16] : word16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_120: (in 0x013E : word16)
  Class: Eq_82
  DataType: int16
  OrigDataType: word16
T_121: (in 0x0C : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_122: (in fn0C00_01CB(ds->t01A3, 0x013E, 0x0C, 0xA000, ds) : void)
  Class: Eq_116
  DataType: void
  OrigDataType: void
T_123: (in dl_71 : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_124: (in 0x0F : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_125: (in bx_76 : Eq_82)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: word16
T_126: (in 0x0000 : word16)
  Class: Eq_82
  DataType: int16
  OrigDataType: word16
T_127: (in cx_79 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in 0x01B5 : word16)
  Class: Eq_128
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_27 (struct (0 T_129 t0000)))
T_129: (in Mem62[ds:0x01B5:word16] : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_130: (in fn0C00_01BB : ptr32)
  Class: Eq_79
  DataType: (ptr Eq_79)
  OrigDataType: (ptr (fn T_132 (T_131, T_125, T_123, T_16, T_27)))
T_131: (in 0x0000 : word16)
  Class: Eq_81
  DataType: int16
  OrigDataType: word16
T_132: (in fn0C00_01BB(0x0000, bx_76, dl_71, 0xA000, ds) : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_133: (in 0x0001 : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_134: (in bx_76 + 0x0001 : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_135: (in 0x0001 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_136: (in bx_76 + 0x0001 + 0x0001 : word16)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: word16
T_137: (in 0x0001 : word16)
  Class: Eq_137
  DataType: word16
  OrigDataType: word16
T_138: (in cx_79 - 0x0001 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_139: (in 0x0000 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_140: (in cx_79 != 0x0000 : bool)
  Class: Eq_140
  DataType: bool
  OrigDataType: bool
T_141: (in bx_90 : Eq_82)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: word16
T_142: (in 0x013F : word16)
  Class: Eq_82
  DataType: int16
  OrigDataType: word16
T_143: (in cx_102 : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_144: (in 0x01B7 : word16)
  Class: Eq_144
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_27 (struct (0 T_145 t0000)))
T_145: (in Mem62[ds:0x01B7:word16] : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_146: (in bx_98 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_147: (in 0x0001 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_148: (in bx_90 - 0x0001 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_149: (in fn0C00_01BB : ptr32)
  Class: Eq_79
  DataType: (ptr Eq_79)
  OrigDataType: (ptr (fn T_151 (T_150, T_141, T_123, T_16, T_27)))
T_150: (in 0x0000 : word16)
  Class: Eq_81
  DataType: int16
  OrigDataType: word16
T_151: (in fn0C00_01BB(0x0000, bx_90, dl_71, 0xA000, ds) : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_152: (in 0x0001 : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_153: (in bx_98 - 0x0001 : word16)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: word16
T_154: (in 0x0001 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in cx_102 - 0x0001 : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_156: (in 0x0000 : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_157: (in cx_102 != 0x0000 : bool)
  Class: Eq_157
  DataType: bool
  OrigDataType: bool
T_158: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_158
  DataType: (ptr Eq_158)
  OrigDataType: (ptr (fn T_162 (T_161)))
T_159: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_158
  DataType: (ptr Eq_158)
  OrigDataType: 
T_160: (in alOut : ptr16)
  Class: Eq_160
  DataType: (ptr byte)
  OrigDataType: ptr16
T_161: (in out al_103 : ptr16)
  Class: Eq_160
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_162: (in bios_kbd_check_keystroke(out al_103) : byte)
  Class: Eq_162
  DataType: byte
  OrigDataType: byte
T_163: (in 0x0001 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_164: (in bx_98 == 0x0001 : bool)
  Class: Eq_164
  DataType: bool
  OrigDataType: bool
T_165: (in msdos_terminate_program20 : ptr32)
  Class: Eq_165
  DataType: (ptr Eq_165)
  OrigDataType: (ptr (fn T_167 ()))
T_166: (in signature of msdos_terminate_program20 : void)
  Class: Eq_165
  DataType: (ptr Eq_165)
  OrigDataType: 
T_167: (in msdos_terminate_program20() : void)
  Class: Eq_167
  DataType: void
  OrigDataType: void
T_168: (in dl_18 : byte)
  Class: Eq_168
  DataType: byte
  OrigDataType: byte
T_169: (in dx : word16)
  Class: Eq_169
  DataType: word16
  OrigDataType: word16
T_170: (in (byte) dx : byte)
  Class: Eq_168
  DataType: byte
  OrigDataType: byte
T_171: (in 0x01B9 : word16)
  Class: Eq_171
  DataType: (memptr (ptr Eq_27) uint16)
  OrigDataType: (memptr T_85 (struct (0 T_172 t0000)))
T_172: (in Mem0[ds:0x01B9:word16] : word16)
  Class: Eq_172
  DataType: uint16
  OrigDataType: uint16
T_173: (in ds->w01B9 *u ax : uint32)
  Class: Eq_173
  DataType: uint32
  OrigDataType: uint32
T_174: (in (word16) (ds->w01B9 *u ax) : word16)
  Class: Eq_174
  DataType: word16
  OrigDataType: word16
T_175: (in bx + (word16) (ds->w01B9 *u ax) : word16)
  Class: Eq_175
  DataType: word16
  OrigDataType: word16
T_176: (in Mem20[es:bx + (word16) (ds->w01B9 *u ax):byte] : byte)
  Class: Eq_168
  DataType: byte
  OrigDataType: byte
T_177: (in cx_14 : word16)
  Class: Eq_177
  DataType: word16
  OrigDataType: word16
T_178: (in 0x000A : word16)
  Class: Eq_177
  DataType: word16
  OrigDataType: word16
T_179: (in fn0C00_01BB : ptr32)
  Class: Eq_79
  DataType: (ptr Eq_79)
  OrigDataType: (ptr (fn T_180 (T_107, T_108, T_109, T_110, T_111)))
T_180: (in fn0C00_01BB(ax, bx, dl, es, ds) : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_181: (in 0x0001 : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_182: (in ax + 0x0001 : word16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_183: (in 0x0001 : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_184: (in cx_14 - 0x0001 : word16)
  Class: Eq_177
  DataType: word16
  OrigDataType: word16
T_185: (in 0x0000 : word16)
  Class: Eq_177
  DataType: word16
  OrigDataType: word16
T_186: (in cx_14 != 0x0000 : bool)
  Class: Eq_186
  DataType: bool
  OrigDataType: bool
T_187: (in fn0C00_01BB : ptr32)
  Class: Eq_79
  DataType: (ptr Eq_79)
  OrigDataType: (ptr (fn T_193 (T_189, T_108, T_192, T_110, T_111)))
T_188: (in 0x000B : word16)
  Class: Eq_188
  DataType: word16
  OrigDataType: word16
T_189: (in ax - 0x000B : word16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_190: (in fn0C00_01BB : ptr32)
  Class: Eq_79
  DataType: (ptr Eq_79)
  OrigDataType: (ptr (fn T_192 (T_107, T_108, T_191, T_110, T_111)))
T_191: (in 0x12 : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_192: (in fn0C00_01BB(ax, bx, 0x12, es, ds) : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_193: (in fn0C00_01BB(ax - 0x000B, bx, fn0C00_01BB(ax, bx, 0x12, es, ds), es, ds) : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_194: (in ds : (ptr Eq_27))
  Class: Eq_27
  DataType: (ptr Eq_27)
  OrigDataType: (ptr (segment (1A1 T_205 t01A1) (1A7 T_217 t01A7) (1A9 T_214 t01A9) (1B3 T_220 t01B3) (36D1 uint16 w36D1)))
T_195: (in bx : (memptr (ptr Eq_27) int16))
  Class: Eq_195
  DataType: (memptr (ptr Eq_27) int16)
  OrigDataType: (memptr T_194 (struct (0 T_198 t0000)))
T_196: (in 0x0000 : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_197: (in bx + 0x0000 : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_198: (in Mem0[ds:bx + 0x0000:word16] : word16)
  Class: Eq_198
  DataType: int16
  OrigDataType: int16
T_199: (in 0x0050 : word16)
  Class: Eq_198
  DataType: int16
  OrigDataType: int16
T_200: (in ds->*bx >= 0x0050 : bool)
  Class: Eq_200
  DataType: bool
  OrigDataType: bool
T_201: (in 0x36D1 : word16)
  Class: Eq_201
  DataType: (memptr (ptr Eq_27) uint16)
  OrigDataType: (memptr T_194 (struct (0 T_202 t0000)))
T_202: (in Mem0[ds:0x36D1:word16] : word16)
  Class: Eq_202
  DataType: uint16
  OrigDataType: uint16
T_203: (in ax : Eq_81)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_204: (in 0x01A1 : word16)
  Class: Eq_204
  DataType: (memptr (ptr Eq_27) Eq_81)
  OrigDataType: (memptr T_194 (struct (0 T_205 t0000)))
T_205: (in Mem0[ds:0x01A1:word16] : word16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_206: (in ax + Mem0[ds:0x01A1:word16] : word16)
  Class: Eq_206
  DataType: uint16
  OrigDataType: uint16
T_207: (in Mem0[ds:0x36D1:word16] *u (ax + Mem0[ds:0x01A1:word16]) : uint32)
  Class: Eq_207
  DataType: uint32
  OrigDataType: uint32
T_208: (in (word16) (Mem0[ds:0x36D1:word16] *u (ax + Mem0[ds:0x01A1:word16])) : word16)
  Class: Eq_208
  DataType: word16
  OrigDataType: word16
T_209: (in 0x007F : word16)
  Class: Eq_209
  DataType: word16
  OrigDataType: word16
T_210: (in (word16) (Mem0[ds:0x36D1:word16] *u (ax + Mem0[ds:0x01A1:word16])) & 0x007F : word16)
  Class: Eq_210
  DataType: word16
  OrigDataType: word16
T_211: (in 0x0024 : word16)
  Class: Eq_211
  DataType: word16
  OrigDataType: word16
T_212: (in ((word16) (Mem0[ds:0x36D1:word16] *u (ax + Mem0[ds:0x01A1:word16])) & 0x007F) + 0x0024 : word16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_213: (in 0x01A9 : word16)
  Class: Eq_213
  DataType: (memptr (ptr Eq_27) Eq_81)
  OrigDataType: (memptr T_194 (struct (0 T_214 t0000)))
T_214: (in Mem17[ds:0x01A9:word16] : word16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_215: (in 0x00A0 : word16)
  Class: Eq_82
  DataType: int16
  OrigDataType: word16
T_216: (in 0x01A7 : word16)
  Class: Eq_216
  DataType: (memptr (ptr Eq_27) Eq_82)
  OrigDataType: (memptr T_194 (struct (0 T_217 t0000)))
T_217: (in Mem18[ds:0x01A7:word16] : word16)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: word16
T_218: (in 0x001E : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_219: (in 0x01B3 : word16)
  Class: Eq_219
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_194 (struct (0 T_220 t0000)))
T_220: (in Mem19[ds:0x01B3:word16] : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_221: (in 0x0000 : word16)
  Class: Eq_221
  DataType: word16
  OrigDataType: word16
T_222: (in bx + 0x0000 : word16)
  Class: Eq_222
  DataType: word16
  OrigDataType: word16
T_223: (in Mem0[ds:bx + 0x0000:word16] : word16)
  Class: Eq_198
  DataType: int16
  OrigDataType: word16
T_224: (in 0x0001 : word16)
  Class: Eq_224
  DataType: word16
  OrigDataType: word16
T_225: (in ds->*bx + 0x0001 : word16)
  Class: Eq_198
  DataType: int16
  OrigDataType: word16
T_226: (in 0x0000 : word16)
  Class: Eq_226
  DataType: word16
  OrigDataType: word16
T_227: (in bx + 0x0000 : word16)
  Class: Eq_227
  DataType: word16
  OrigDataType: word16
T_228: (in Mem21[ds:bx + 0x0000:word16] : word16)
  Class: Eq_198
  DataType: int16
  OrigDataType: word16
T_229: (in bx : Eq_81)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: int16
T_230: (in 0x0002 : word16)
  Class: Eq_81
  DataType: int16
  OrigDataType: int16
T_231: (in bx > 0x0002 : bool)
  Class: Eq_231
  DataType: bool
  OrigDataType: bool
T_232: (in true : bool)
  Class: Eq_232
  DataType: bool
  OrigDataType: bool
T_233: (in 0x0002 : word16)
  Class: Eq_81
  DataType: int16
  OrigDataType: word16
T_234: (in 0x00BD : word16)
  Class: Eq_81
  DataType: int16
  OrigDataType: word16
T_235: (in bx_11 : Eq_81)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_236: (in 0x01A3 : word16)
  Class: Eq_236
  DataType: (memptr (ptr Eq_27) Eq_81)
  OrigDataType: (memptr T_58 (struct (0 T_237 t0000)))
T_237: (in Mem0[ds:0x01A3:word16] : word16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_238: (in 0x01A7 : word16)
  Class: Eq_238
  DataType: (memptr (ptr Eq_27) Eq_82)
  OrigDataType: (memptr T_58 (struct (0 T_239 t0000)))
T_239: (in Mem0[ds:0x01A7:word16] : word16)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: int16
T_240: (in 0x00E6 : word16)
  Class: Eq_82
  DataType: int16
  OrigDataType: int16
T_241: (in ds->t01A7 < 0x00E6 : bool)
  Class: Eq_241
  DataType: bool
  OrigDataType: bool
T_242: (in fn0C00_0207 : ptr32)
  Class: Eq_242
  DataType: (ptr Eq_242)
  OrigDataType: (ptr (fn T_244 (T_235)))
T_243: (in signature of fn0C00_0207 : void)
  Class: Eq_242
  DataType: (ptr Eq_242)
  OrigDataType: 
T_244: (in fn0C00_0207(bx_11) : word16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_245: (in 0x01A3 : word16)
  Class: Eq_245
  DataType: (memptr (ptr Eq_27) Eq_81)
  OrigDataType: (memptr T_58 (struct (0 T_246 t0000)))
T_246: (in Mem14[ds:0x01A3:word16] : word16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_247: (in bx_18 : Eq_81)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: int16
T_248: (in fn0C00_0207 : ptr32)
  Class: Eq_242
  DataType: (ptr Eq_242)
  OrigDataType: (ptr (fn T_254 (T_253)))
T_249: (in 0x01A1 : word16)
  Class: Eq_249
  DataType: (memptr (ptr Eq_27) Eq_81)
  OrigDataType: (memptr T_58 (struct (0 T_250 t0000)))
T_250: (in Mem14[ds:0x01A1:word16] : word16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_251: (in 0x01A5 : word16)
  Class: Eq_251
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_58 (struct (0 T_252 t0000)))
T_252: (in Mem14[ds:0x01A5:word16] : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_253: (in Mem14[ds:0x01A1:word16] + Mem14[ds:0x01A5:word16] : word16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_254: (in fn0C00_0207(Mem14[ds:0x01A1:word16] + Mem14[ds:0x01A5:word16]) : word16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_255: (in 0x01A1 : word16)
  Class: Eq_255
  DataType: (memptr (ptr Eq_27) Eq_81)
  OrigDataType: (memptr T_58 (struct (0 T_256 t0000)))
T_256: (in Mem19[ds:0x01A1:word16] : word16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_257: (in 0x01B3 : word16)
  Class: Eq_257
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_58 (struct (0 T_258 t0000)))
T_258: (in Mem19[ds:0x01B3:word16] : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_259: (in 0x0000 : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_260: (in ds->w01B3 == 0x0000 : bool)
  Class: Eq_260
  DataType: bool
  OrigDataType: bool
T_261: (in ax_78 : Eq_81)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: int16
T_262: (in 0x01A9 : word16)
  Class: Eq_262
  DataType: (memptr (ptr Eq_27) Eq_81)
  OrigDataType: (memptr T_58 (struct (0 T_263 t0000)))
T_263: (in Mem0[ds:0x01A9:word16] : word16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_264: (in 0x01A3 : word16)
  Class: Eq_264
  DataType: (memptr (ptr Eq_27) Eq_81)
  OrigDataType: (memptr T_58 (struct (0 T_265 t0000)))
T_265: (in Mem0[ds:0x01A3:word16] : word16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_266: (in 0x0005 : word16)
  Class: Eq_266
  DataType: word16
  OrigDataType: word16
T_267: (in bx_11 + 0x0005 : word16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: int16
T_268: (in ax_78 < bx_11 + 0x0005 : bool)
  Class: Eq_268
  DataType: bool
  OrigDataType: bool
T_269: (in 0x0001 : word16)
  Class: Eq_269
  DataType: word16
  OrigDataType: word16
T_270: (in bx_11 - 0x0001 : word16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_271: (in bx_11 + 0x0005 : word16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: int16
T_272: (in ax_78 > bx_11 + 0x0005 : bool)
  Class: Eq_272
  DataType: bool
  OrigDataType: bool
T_273: (in 0x0001 : word16)
  Class: Eq_273
  DataType: word16
  OrigDataType: word16
T_274: (in bx_11 + 0x0001 : word16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_275: (in ax_41 : Eq_81)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: int16
T_276: (in 0x01A9 : word16)
  Class: Eq_276
  DataType: (memptr (ptr Eq_27) Eq_81)
  OrigDataType: (memptr T_58 (struct (0 T_277 t0000)))
T_277: (in Mem19[ds:0x01A9:word16] : word16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_278: (in 0x01AD : word16)
  Class: Eq_278
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_58 (struct (0 T_279 t0000)))
T_279: (in Mem19[ds:0x01AD:word16] : word16)
  Class: Eq_279
  DataType: word16
  OrigDataType: word16
T_280: (in Mem19[ds:0x01A9:word16] + Mem19[ds:0x01AD:word16] : word16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_281: (in 0x01A9 : word16)
  Class: Eq_281
  DataType: (memptr (ptr Eq_27) Eq_81)
  OrigDataType: (memptr T_58 (struct (0 T_282 t0000)))
T_282: (in Mem42[ds:0x01A9:word16] : word16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_283: (in 0x0002 : word16)
  Class: Eq_81
  DataType: int16
  OrigDataType: word16
T_284: (in ax_41 != 0x0002 : bool)
  Class: Eq_284
  DataType: bool
  OrigDataType: bool
T_285: (in 0x01B3 : word16)
  Class: Eq_285
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_58 (struct (0 T_258 t0000)))
T_286: (in Mem19[ds:0x01B3:word16] : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_287: (in 0x0001 : word16)
  Class: Eq_287
  DataType: word16
  OrigDataType: word16
T_288: (in ds->w01B3 - 0x0001 : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_289: (in Mem37[ds:0x01B3:word16] : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_290: (in 0x00C6 : word16)
  Class: Eq_81
  DataType: int16
  OrigDataType: word16
T_291: (in ax_41 != 0x00C6 : bool)
  Class: Eq_291
  DataType: bool
  OrigDataType: bool
T_292: (in 0x0001 : word16)
  Class: Eq_279
  DataType: word16
  OrigDataType: word16
T_293: (in 0x01AD : word16)
  Class: Eq_293
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_58 (struct (0 T_294 t0000)))
T_294: (in Mem77[ds:0x01AD:word16] : word16)
  Class: Eq_279
  DataType: word16
  OrigDataType: word16
T_295: (in cx_48 : Eq_82)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: word16
T_296: (in 0x01A7 : word16)
  Class: Eq_296
  DataType: (memptr (ptr Eq_27) Eq_82)
  OrigDataType: (memptr T_58 (struct (0 T_297 t0000)))
T_297: (in Mem42[ds:0x01A7:word16] : word16)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: word16
T_298: (in 0x01AB : word16)
  Class: Eq_298
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_58 (struct (0 T_299 t0000)))
T_299: (in Mem42[ds:0x01AB:word16] : word16)
  Class: Eq_299
  DataType: word16
  OrigDataType: word16
T_300: (in Mem42[ds:0x01A7:word16] + Mem42[ds:0x01AB:word16] : word16)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: word16
T_301: (in 0x01A7 : word16)
  Class: Eq_301
  DataType: (memptr (ptr Eq_27) Eq_82)
  OrigDataType: (memptr T_58 (struct (0 T_302 t0000)))
T_302: (in Mem49[ds:0x01A7:word16] : word16)
  Class: Eq_82
  DataType: Eq_82
  OrigDataType: word16
T_303: (in 0x0002 : word16)
  Class: Eq_82
  DataType: int16
  OrigDataType: word16
T_304: (in cx_48 != 0x0002 : bool)
  Class: Eq_304
  DataType: bool
  OrigDataType: bool
T_305: (in 0xFFFF : word16)
  Class: Eq_279
  DataType: word16
  OrigDataType: word16
T_306: (in 0x01AD : word16)
  Class: Eq_306
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_58 (struct (0 T_307 t0000)))
T_307: (in Mem76[ds:0x01AD:word16] : word16)
  Class: Eq_279
  DataType: word16
  OrigDataType: word16
T_308: (in bx_53 : Eq_81)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: int16
T_309: (in 0x01A3 : word16)
  Class: Eq_309
  DataType: (memptr (ptr Eq_27) Eq_81)
  OrigDataType: (memptr T_58 (struct (0 T_310 t0000)))
T_310: (in Mem49[ds:0x01A3:word16] : word16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: word16
T_311: (in 0x013D : word16)
  Class: Eq_82
  DataType: int16
  OrigDataType: word16
T_312: (in cx_48 != 0x013D : bool)
  Class: Eq_312
  DataType: bool
  OrigDataType: bool
T_313: (in ax_41 < bx_18 : bool)
  Class: Eq_313
  DataType: bool
  OrigDataType: bool
T_314: (in 0x000A : word16)
  Class: Eq_314
  DataType: word16
  OrigDataType: word16
T_315: (in bx_18 + 0x000A : word16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: int16
T_316: (in ax_41 >= bx_18.u0 : bool)
  Class: Eq_316
  DataType: bool
  OrigDataType: bool
T_317: (in 0x0001 : word16)
  Class: Eq_299
  DataType: word16
  OrigDataType: word16
T_318: (in 0x01AB : word16)
  Class: Eq_318
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_58 (struct (0 T_319 t0000)))
T_319: (in Mem75[ds:0x01AB:word16] : word16)
  Class: Eq_299
  DataType: word16
  OrigDataType: word16
T_320: (in 0x0000 : word16)
  Class: Eq_82
  DataType: int16
  OrigDataType: word16
T_321: (in cx_48 != 0x0000 : bool)
  Class: Eq_321
  DataType: bool
  OrigDataType: bool
T_322: (in ax_41 < bx_53 : bool)
  Class: Eq_322
  DataType: bool
  OrigDataType: bool
T_323: (in 0x000A : word16)
  Class: Eq_323
  DataType: word16
  OrigDataType: word16
T_324: (in bx_53 + 0x000A : word16)
  Class: Eq_81
  DataType: Eq_81
  OrigDataType: int16
T_325: (in ax_41 >= bx_53.u0 : bool)
  Class: Eq_325
  DataType: bool
  OrigDataType: bool
T_326: (in 0xFFFF : word16)
  Class: Eq_299
  DataType: word16
  OrigDataType: word16
T_327: (in 0x01AB : word16)
  Class: Eq_327
  DataType: (memptr (ptr Eq_27) word16)
  OrigDataType: (memptr T_58 (struct (0 T_328 t0000)))
T_328: (in Mem69[ds:0x01AB:word16] : word16)
  Class: Eq_299
  DataType: word16
  OrigDataType: word16
T_329: (in 0x013F : word16)
  Class: Eq_82
  DataType: int16
  OrigDataType: word16
T_330: (in cx_48 != 0x013F : bool)
  Class: Eq_330
  DataType: bool
  OrigDataType: bool
T_331: (in fn0C00_01E0 : ptr32)
  Class: Eq_331
  DataType: (ptr Eq_331)
  OrigDataType: (ptr (fn T_334 (T_275, T_333, T_58)))
T_332: (in signature of fn0C00_01E0 : void)
  Class: Eq_331
  DataType: (ptr Eq_331)
  OrigDataType: 
T_333: (in 0x01B7 : word16)
  Class: Eq_195
  DataType: (memptr (ptr Eq_27) int16)
  OrigDataType: word16
T_334: (in fn0C00_01E0(ax_41, &Eq_27::w01B7, ds) : void)
  Class: Eq_334
  DataType: void
  OrigDataType: void
T_335: (in fn0C00_01E0 : ptr32)
  Class: Eq_331
  DataType: (ptr Eq_331)
  OrigDataType: (ptr (fn T_337 (T_275, T_336, T_58)))
T_336: (in 0x01B5 : word16)
  Class: Eq_195
  DataType: (memptr (ptr Eq_27) int16)
  OrigDataType: word16
T_337: (in fn0C00_01E0(ax_41, &Eq_27::w01B5, ds) : void)
  Class: Eq_334
  DataType: void
  OrigDataType: void
*/
typedef Eq_16 Eq_1struct Globals {
	Eq_16 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct Eq_16 {
	byte b0000;	// 0
} Eq_16;

typedef Eq_81 Eq_27Eq_81 Eq_27Eq_82 Eq_27Eq_81 Eq_27Eq_82 Eq_27Eq_81 Eq_27struct Eq_27 {
	Eq_81 t01A1;	// 1A1
	Eq_81 t01A3;	// 1A3
	word16 w01A5;	// 1A5
	Eq_82 t01A7;	// 1A7
	Eq_81 t01A9;	// 1A9
	word16 w01AB;	// 1AB
	word16 w01AD;	// 1AD
	Eq_82 t01AF;	// 1AF
	Eq_81 t01B1;	// 1B1
	word16 w01B3;	// 1B3
	word16 w01B5;	// 1B5
	word16 w01B7;	// 1B7
	uint16 w01B9;	// 1B9
	uint16 w36D1;	// 36D1
} Eq_27;

typedef void (Eq_30)(byte);

typedef void (Eq_56)(Eq_27 *);

typedef byte (Eq_65)(word16);

typedef byte (Eq_72)(word16);

typedef byte (Eq_79)(Eq_81, Eq_82, byte, Eq_16 *, Eq_27 *);

typedef union Eq_81 {
	int16 u0;
	uint16 u1;
} Eq_81;

typedef union Eq_82 {
	int16 u0;
	byte Eq_16::* u1;
} Eq_82;

typedef void (Eq_105)(Eq_81, Eq_82, byte, Eq_16 *, Eq_27 *);

typedef byte (Eq_158)(byte *);

typedef void (Eq_165)();

typedef Eq_81 (Eq_242)(Eq_81);

typedef void (Eq_331)(Eq_81, int16 Eq_27::*, Eq_27 *);

