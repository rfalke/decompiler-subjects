// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_273/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_242) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (struct (0 word16 w0000) (1 bcu8 b0001))
	T_7 (in bp_101 : word16)
	T_8 (in 0x0200 : word16)
	T_76 (in bp_101 + 0x0001 + 0x0001 : word16)
	T_87 (in 0x0200 : word16)
Eq_9: (struct (0 int16 w0000))
	T_9 (in bx_20 : word16)
	T_12 (in DPB(bx, 0xF0, 8, 8) : word16)
	T_37 (in bx_20 + 0x0001 + 0x0001 : word16)
Eq_13: (union (int16 u0) (word32 u1))
	T_13 (in cx_10 : word16)
	T_14 (in 0x0100 : word16)
	T_17 (in Mem11[ss:0x0200:word16] : word16)
	T_20 (in Mem11[ss:0x0200:int16] : int16)
	T_39 (in cx_10 - 0x0001 : word16)
	T_40 (in 0x0000 : word16)
	T_46 (in 0x00000000 : word32)
	T_48 (in Mem59[ss:0x0200:word32] : word32)
	T_167 (in (cx_140 << 0x0003) + SEQ(ds, 0xF000)[DPB(dx_127 + Mem112[ss:0x0210:word16], 0x00, 8, 8) * 0x0002] : word16)
	T_169 (in Mem155[ss:0x0200:word16] : word16)
	T_185 (in Mem155[ss:0x0200:word16] : word16)
	T_230 (in DPB(cx_140, 0x3F, 8, 8) : word16)
	T_254 (in cx_10 - 0x0001 : word16)
	T_255 (in 0x0000 : word16)
Eq_15: (segment (200 Eq_13 t0200) (204 word16 w0204) (210 word16 w0210))
	T_15 (in ss : selector)
Eq_16: (struct (0 Eq_13 t0000))
	T_16 (in 0x0200 : word16)
Eq_18: (fn Eq_26 (real16))
	T_18 (in sin : ptr32)
Eq_19: (struct (0 Eq_13 t0000))
	T_19 (in 0x0200 : word16)
Eq_21: (union (real16 u0) (real64 u1))
	T_21 (in (real64) Mem11[ss:0x0200:int16] : real64)
Eq_22: (segment (FFFFF000 (arr Eq_263) aFFFFF000) (1F2 Eq_24 t01F2) (1F4 Eq_28 t01F4) (1F7 (arr Eq_262 6) a01F7) (1F8 word16 w01F8) (1FC word16 w01FC) (1FE int16 w01FE))
	T_22 (in ds : selector)
Eq_23: (struct (0 Eq_24 t0000))
	T_23 (in 0x01F2 : word16)
Eq_24: (union (real16 u0) (real32 u1))
	T_24 (in Mem11[ds:0x01F2:real32] : real32)
Eq_26: (union (real16 u0) (real64 u1))
	T_26 (in sin((real64) Mem11[ss:0x0200:int16] * Mem11[ds:0x01F2:real32]) : real64)
Eq_27: (struct (0 Eq_28 t0000))
	T_27 (in 0x01F4 : word16)
Eq_28: (union (real16 u0) (real32 u1))
	T_28 (in Mem11[ds:0x01F4:real32] : real32)
Eq_42: (fn void (word16, byte))
	T_42 (in __outb : ptr32)
Eq_47: (struct (0 Eq_13 t0000))
	T_47 (in 0x0200 : word16)
Eq_50: (struct (0 word16 w0000))
	T_50 (in 0x0204 : word16)
Eq_55: (fn void (word16, bcu8))
	T_55 (in __outb : ptr32)
Eq_62: (struct 0001 (0 word16 w0000))
	T_62 (in bx_71 : word16)
	T_78 (in bx_95 - 0x0001 : word16)
	T_92 (in 0x01FC : word16)
Eq_94: (struct (0 int16 w0000))
	T_94 (in 0x01FE : word16)
Eq_96: (struct (0 word16 w0000))
	T_96 (in 0x01F8 : word16)
Eq_102: (struct (0 word16 w0000))
	T_102 (in 0x01FC : word16)
Eq_106: (struct (0 word16 w0000))
	T_106 (in 0x01F8 : word16)
Eq_110: (struct (0 int16 w0000))
	T_110 (in 0x01FE : word16)
Eq_112: (struct (0 word16 w0000))
	T_112 (in 0x01FC : word16)
Eq_117: (segment)
	T_117 (in cs : selector)
Eq_122: (struct 0001 (0 Eq_129 t0000) (1 byte b0001) (2 byte b0002))
	T_122 (in di_123 : word16)
	T_123 (in 0x0000 : word16)
	T_145 (in di_123 + 0x0001 : word16)
Eq_129: (union (uint16 u0) (byte u1))
	T_129 (in Mem155[ax_121:di_123 + 0x0000:byte] : byte)
	T_140 (in al_167 + Mem155[ax_121:di_123 + 0x0000:byte] + Mem155[ax_121:di_123 + 0x0001:byte] + Mem155[ax_121:di_123 + 0x0002:byte] >>u 0x02 : word16)
	T_143 (in Mem182[ax_121:di_123 + 0x0000:byte] : byte)
Eq_159: (struct (0 word16 w0000))
	T_159 (in 0x0210 : word16)
Eq_168: (struct (0 Eq_13 t0000))
	T_168 (in 0x0200 : word16)
Eq_175: (struct (0 word16 w0000))
	T_175 (in 0x0210 : word16)
Eq_184: (struct (0 Eq_13 t0000))
	T_184 (in 0x0200 : word16)
Eq_201: (fn word16 (word16))
	T_201 (in __inw : ptr32)
Eq_209: (fn word16 (word16))
	T_209 (in __inw : ptr32)
Eq_217: (union ((memptr (ptr Eq_15) (struct (FFFFFFFC word16 wFFFFFFFC))) u0) ((union (ptr16 u0) ((memptr (ptr Eq_15) (struct (FFFFFFFC word16 wFFFFFFFC))) u1)) u1))
	T_217 (in fp : ptr16)
Eq_225: (struct 0004 (0 word32 dw0000))
	T_225 (in si_212 : word16)
	T_226 (in 0x0000 : word16)
	T_250 (in si_212 + 0x0004 : word16)
Eq_227: (struct 0004 (0 word32 dw0000))
	T_227 (in di_213 : word16)
	T_228 (in 0x0000 : word16)
	T_252 (in di_213 + 0x0004 : word16)
Eq_231: (struct (0 word16 w0000))
	T_231 (in 0x0210 : word16)
Eq_235: (struct (0 word16 w0000))
	T_235 (in 0x0210 : word16)
Eq_237: (fn byte (byte))
	T_237 (in __inb : ptr32)
Eq_242: (segment (0 (arr Eq_265) a0000))
	T_242 (in 0xA000 : selector)
Eq_257: (fn void (byte))
	T_257 (in msdos_terminate : ptr32)
	T_258 (in signature of msdos_terminate : void)
Eq_262: (struct 0001 (0 word16 w0000))
	T_262
Eq_263: (struct 0002 (0 word16 w0000))
	T_263
	T_264
Eq_265: (struct 0004 (0 word32 dw0000))
	T_265
	T_266
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
T_7: (in bp_101 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_15) Eq_7)
  OrigDataType: (memptr T_15 (struct (0 T_61 t0000) (1 T_84 t0001)))
T_8: (in 0x0200 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_15) Eq_7)
  OrigDataType: word16
T_9: (in bx_20 : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_22) Eq_9)
  OrigDataType: (memptr T_22 (struct (0 T_33 t0000)))
T_10: (in bx : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in 0xF0 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in DPB(bx, 0xF0, 8, 8) : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_22) Eq_9)
  OrigDataType: word16
T_13: (in cx_10 : word16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: word16
T_14: (in 0x0100 : word16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: word16
T_15: (in ss : selector)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (segment (200 T_13 t0200) (204 T_51 t0204) (210 T_160 t0210)))
T_16: (in 0x0200 : word16)
  Class: Eq_16
  DataType: (memptr (ptr Eq_15) Eq_16)
  OrigDataType: (memptr T_15 (struct (0 T_17 t0000)))
T_17: (in Mem11[ss:0x0200:word16] : word16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: word16
T_18: (in sin : ptr32)
  Class: Eq_18
  DataType: (ptr Eq_18)
  OrigDataType: (ptr (fn T_26 (T_25)))
T_19: (in 0x0200 : word16)
  Class: Eq_19
  DataType: (memptr (ptr Eq_15) Eq_19)
  OrigDataType: (memptr T_15 (struct (0 T_20 t0000)))
T_20: (in Mem11[ss:0x0200:int16] : int16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: int16
T_21: (in (real64) Mem11[ss:0x0200:int16] : real64)
  Class: Eq_21
  DataType: Eq_21
  OrigDataType: (union (real16 u0) (real64 u1))
T_22: (in ds : selector)
  Class: Eq_22
  DataType: (ptr Eq_22)
  OrigDataType: (ptr (segment (FFFFF000 (arr T_263) aFFFFF000) (1F2 T_24 t01F2) (1F4 T_28 t01F4) (1F7 (arr T_262 6) a01F7) (1F8 T_97 t01F8) (1FC T_103 t01FC) (1FE T_93 t01FE)))
T_23: (in 0x01F2 : word16)
  Class: Eq_23
  DataType: (memptr (ptr Eq_22) Eq_23)
  OrigDataType: (memptr T_22 (struct (0 T_24 t0000)))
T_24: (in Mem11[ds:0x01F2:real32] : real32)
  Class: Eq_24
  DataType: Eq_24
  OrigDataType: (union (real16 u0) (real32 u1))
T_25: (in (real64) Mem11[ss:0x0200:int16] * Mem11[ds:0x01F2:real32] : word16)
  Class: Eq_25
  DataType: real16
  OrigDataType: real16
T_26: (in sin((real64) Mem11[ss:0x0200:int16] * Mem11[ds:0x01F2:real32]) : real64)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: (union (real16 u0) (real64 u1))
T_27: (in 0x01F4 : word16)
  Class: Eq_27
  DataType: (memptr (ptr Eq_22) Eq_27)
  OrigDataType: (memptr T_22 (struct (0 T_28 t0000)))
T_28: (in Mem11[ds:0x01F4:real32] : real32)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: (union (real16 u0) (real32 u1))
T_29: (in sin((real64) Mem11[ss:0x0200:int16] * Mem11[ds:0x01F2:real32]) * Mem11[ds:0x01F4:real32] : word16)
  Class: Eq_29
  DataType: real16
  OrigDataType: real16
T_30: (in (int16) (sin((real64) Mem11[ss:0x0200:int16] * Mem11[ds:0x01F2:real32]) * Mem11[ds:0x01F4:real32]) : int16)
  Class: Eq_30
  DataType: int16
  OrigDataType: int16
T_31: (in 0x0000 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in bx_20 + 0x0000 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in Mem18[ds:bx_20 + 0x0000:int16] : int16)
  Class: Eq_30
  DataType: int16
  OrigDataType: int16
T_34: (in 0x0001 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in bx_20 + 0x0001 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in 0x0001 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in bx_20 + 0x0001 + 0x0001 : word16)
  Class: Eq_9
  DataType: (memptr (ptr Eq_22) Eq_9)
  OrigDataType: word16
T_38: (in 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in cx_10 - 0x0001 : word16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: word16
T_40: (in 0x0000 : word16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: word16
T_41: (in cx_10 != 0x0000 : bool)
  Class: Eq_41
  DataType: bool
  OrigDataType: bool
T_42: (in __outb : ptr32)
  Class: Eq_42
  DataType: (ptr Eq_42)
  OrigDataType: (ptr (fn T_45 (T_43, T_44)))
T_43: (in 0x03C8 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in 0x00 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in __outb(0x03C8, 0x00) : void)
  Class: Eq_45
  DataType: void
  OrigDataType: void
T_46: (in 0x00000000 : word32)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: word32
T_47: (in 0x0200 : word16)
  Class: Eq_47
  DataType: (memptr (ptr Eq_15) Eq_47)
  OrigDataType: (memptr T_15 (struct (0 T_48 t0000)))
T_48: (in Mem59[ss:0x0200:word32] : word32)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: word32
T_49: (in 0x0000 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in 0x0204 : word16)
  Class: Eq_50
  DataType: (memptr (ptr Eq_15) Eq_50)
  OrigDataType: (memptr T_15 (struct (0 T_51 t0000)))
T_51: (in Mem60[ss:0x0204:word16] : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_52: (in cx_102 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in 0x01 : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_54: (in DPB(cx_10, 0x01, 8, 8) : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_55: (in __outb : ptr32)
  Class: Eq_55
  DataType: (ptr Eq_55)
  OrigDataType: (ptr (fn T_58 (T_56, T_57)))
T_56: (in 0x03C9 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in al_246 : byte)
  Class: Eq_57
  DataType: bcu8
  OrigDataType: bcu8
T_58: (in __outb(0x03C9, al_246) : void)
  Class: Eq_58
  DataType: void
  OrigDataType: void
T_59: (in 0x0000 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in bp_101 + 0x0000 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in Mem60[ss:bp_101 + 0x0000:word16] : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in bx_71 : word16)
  Class: Eq_62
  DataType: (memptr (ptr Eq_22) Eq_62)
  OrigDataType: (memptr T_22 (struct 0001 (0 T_65 t0000)))
T_63: (in 0x0000 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in bx_71 + 0x0000 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in Mem60[ds:bx_71 + 0x0000:word16] : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in Mem60[ss:bp_101 + 0x0000:word16] + Mem60[ds:bx_71 + 0x0000:word16] : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_67: (in 0x0000 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in bp_101 + 0x0000 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in Mem91[ss:bp_101 + 0x0000:word16] : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_70: (in bx_95 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_71: (in 0x0001 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in bx_71 - 0x0001 : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_73: (in 0x0001 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in bp_101 + 0x0001 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in 0x0001 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in bp_101 + 0x0001 + 0x0001 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_15) Eq_7)
  OrigDataType: word16
T_77: (in 0x0001 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in bx_95 - 0x0001 : word16)
  Class: Eq_62
  DataType: (memptr (ptr Eq_22) Eq_62)
  OrigDataType: word16
T_79: (in 0xFE0B : word16)
  Class: Eq_70
  DataType: word16
  OrigDataType: word16
T_80: (in bx_95 != 0xFE0B : bool)
  Class: Eq_80
  DataType: bool
  OrigDataType: bool
T_81: (in 0x3F : byte)
  Class: Eq_57
  DataType: bcu8
  OrigDataType: byte
T_82: (in 0x0001 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in bp_101 + 0x0001 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in Mem60[ss:bp_101 + 0x0001:byte] : byte)
  Class: Eq_57
  DataType: bcu8
  OrigDataType: byte
T_85: (in 0x3F : byte)
  Class: Eq_57
  DataType: bcu8
  OrigDataType: bcu8
T_86: (in al_246 <=u 0x3F : bool)
  Class: Eq_86
  DataType: bool
  OrigDataType: bool
T_87: (in 0x0200 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_15) Eq_7)
  OrigDataType: word16
T_88: (in 0x0001 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in cx_102 - 0x0001 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_90: (in 0x0000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_91: (in cx_102 != 0x0000 : bool)
  Class: Eq_91
  DataType: bool
  OrigDataType: bool
T_92: (in 0x01FC : word16)
  Class: Eq_62
  DataType: (memptr (ptr Eq_22) Eq_62)
  OrigDataType: word16
T_93: (in ax_104 : word16)
  Class: Eq_93
  DataType: int16
  OrigDataType: int16
T_94: (in 0x01FE : word16)
  Class: Eq_94
  DataType: (memptr (ptr Eq_22) Eq_94)
  OrigDataType: (memptr T_22 (struct (0 T_95 t0000)))
T_95: (in Mem91[ds:0x01FE:word16] : word16)
  Class: Eq_93
  DataType: int16
  OrigDataType: word16
T_96: (in 0x01F8 : word16)
  Class: Eq_96
  DataType: (memptr (ptr Eq_22) Eq_96)
  OrigDataType: (memptr T_22 (struct (0 T_97 t0000)))
T_97: (in Mem91[ds:0x01F8:word16] : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in Mem91[ds:0x01F8:word16] + ax_104 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_99: (in Mem106[ds:0x01F8:word16] : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_100: (in ax_107 : word16)
  Class: Eq_93
  DataType: int16
  OrigDataType: word16
T_101: (in -ax_104 : word16)
  Class: Eq_93
  DataType: int16
  OrigDataType: int16
T_102: (in 0x01FC : word16)
  Class: Eq_102
  DataType: (memptr (ptr Eq_22) Eq_102)
  OrigDataType: (memptr T_22 (struct (0 T_103 t0000)))
T_103: (in Mem106[ds:0x01FC:word16] : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in Mem106[ds:0x01FC:word16] + ax_107 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_105: (in Mem112[ds:0x01FC:word16] : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_106: (in 0x01F8 : word16)
  Class: Eq_106
  DataType: (memptr (ptr Eq_22) Eq_106)
  OrigDataType: (memptr T_22 (struct (0 T_107 t0000)))
T_107: (in Mem112[ds:0x01F8:word16] : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_108: (in 0x01E0 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_109: (in Mem112[ds:0x01F8:word16] == 0x01E0 : bool)
  Class: Eq_109
  DataType: bool
  OrigDataType: bool
T_110: (in 0x01FE : word16)
  Class: Eq_110
  DataType: (memptr (ptr Eq_22) Eq_110)
  OrigDataType: (memptr T_22 (struct (0 T_111 t0000)))
T_111: (in Mem243[ds:0x01FE:word16] : word16)
  Class: Eq_93
  DataType: int16
  OrigDataType: word16
T_112: (in 0x01FC : word16)
  Class: Eq_112
  DataType: (memptr (ptr Eq_22) Eq_112)
  OrigDataType: (memptr T_22 (struct (0 T_113 t0000)))
T_113: (in Mem112[ds:0x01FC:word16] : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_114: (in 0x01E0 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_115: (in Mem112[ds:0x01FC:word16] != 0x01E0 : bool)
  Class: Eq_115
  DataType: bool
  OrigDataType: bool
T_116: (in ax_121 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in cs : selector)
  Class: Eq_117
  DataType: (ptr Eq_117)
  OrigDataType: (ptr (segment))
T_118: (in SLICE(cs, byte, 8) : byte)
  Class: Eq_118
  DataType: byte
  OrigDataType: byte
T_119: (in 0x10 : byte)
  Class: Eq_119
  DataType: byte
  OrigDataType: byte
T_120: (in SLICE(cs, byte, 8) + 0x10 : byte)
  Class: Eq_120
  DataType: byte
  OrigDataType: byte
T_121: (in DPB(cs, SLICE(cs, byte, 8) + 0x10, 8, 8) : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_122: (in di_123 : word16)
  Class: Eq_122
  DataType: (memptr word16 Eq_122)
  OrigDataType: (memptr T_116 (struct 0001 (0 T_129 t0000) (1 T_133 t0001) (2 T_137 t0002)))
T_123: (in 0x0000 : word16)
  Class: Eq_122
  DataType: (memptr word16 Eq_122)
  OrigDataType: word16
T_124: (in dx_127 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in 0x00C8 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_126: (in al_167 : byte)
  Class: Eq_126
  DataType: byte
  OrigDataType: byte
T_127: (in 0x0000 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in di_123 + 0x0000 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in Mem155[ax_121:di_123 + 0x0000:byte] : byte)
  Class: Eq_129
  DataType: Eq_129
  OrigDataType: byte
T_130: (in al_167 + Mem155[ax_121:di_123 + 0x0000:byte] : byte)
  Class: Eq_130
  DataType: byte
  OrigDataType: byte
T_131: (in 0x0001 : word16)
  Class: Eq_131
  DataType: word16
  OrigDataType: word16
T_132: (in di_123 + 0x0001 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in Mem155[ax_121:di_123 + 0x0001:byte] : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_134: (in al_167 + Mem155[ax_121:di_123 + 0x0000:byte] + Mem155[ax_121:di_123 + 0x0001:byte] : byte)
  Class: Eq_134
  DataType: byte
  OrigDataType: byte
T_135: (in 0x0002 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_136: (in di_123 + 0x0002 : word16)
  Class: Eq_136
  DataType: word16
  OrigDataType: word16
T_137: (in Mem155[ax_121:di_123 + 0x0002:byte] : byte)
  Class: Eq_137
  DataType: byte
  OrigDataType: byte
T_138: (in al_167 + Mem155[ax_121:di_123 + 0x0000:byte] + Mem155[ax_121:di_123 + 0x0001:byte] + Mem155[ax_121:di_123 + 0x0002:byte] : byte)
  Class: Eq_138
  DataType: uint8
  OrigDataType: uint8
T_139: (in 0x02 : byte)
  Class: Eq_139
  DataType: uint8
  OrigDataType: uint8
T_140: (in al_167 + Mem155[ax_121:di_123 + 0x0000:byte] + Mem155[ax_121:di_123 + 0x0001:byte] + Mem155[ax_121:di_123 + 0x0002:byte] >>u 0x02 : word16)
  Class: Eq_129
  DataType: Eq_129
  OrigDataType: uint16
T_141: (in 0x0000 : word16)
  Class: Eq_141
  DataType: word16
  OrigDataType: word16
T_142: (in di_123 + 0x0000 : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_143: (in Mem182[ax_121:di_123 + 0x0000:byte] : byte)
  Class: Eq_129
  DataType: Eq_129
  OrigDataType: byte
T_144: (in 0x0001 : word16)
  Class: Eq_144
  DataType: word16
  OrigDataType: word16
T_145: (in di_123 + 0x0001 : word16)
  Class: Eq_122
  DataType: (memptr word16 Eq_122)
  OrigDataType: word16
T_146: (in cx_140 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_147: (in 0x0001 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_148: (in cx_140 - 0x0001 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_149: (in 0x0000 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_150: (in cx_140 != 0x0000 : bool)
  Class: Eq_150
  DataType: bool
  OrigDataType: bool
T_151: (in ax_169 : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_152: (in 0x0001 : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_153: (in ax_169 - 0x0001 : word16)
  Class: Eq_153
  DataType: word16
  OrigDataType: word16
T_154: (in (byte) (ax_169 - 0x0001) : byte)
  Class: Eq_126
  DataType: byte
  OrigDataType: byte
T_155: (in 0x0003 : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_156: (in cx_140 << 0x0003 : word16)
  Class: Eq_156
  DataType: ui16
  OrigDataType: ui16
T_157: (in 0xF000 : word16)
  Class: Eq_157
  DataType: word16
  OrigDataType: word16
T_158: (in SEQ(ds, 0xF000) : ptr32)
  Class: Eq_158
  DataType: ptr32
  OrigDataType: ptr32
T_159: (in 0x0210 : word16)
  Class: Eq_159
  DataType: (memptr (ptr Eq_15) Eq_159)
  OrigDataType: (memptr T_15 (struct (0 T_160 t0000)))
T_160: (in Mem112[ss:0x0210:word16] : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_161: (in dx_127 + Mem112[ss:0x0210:word16] : word16)
  Class: Eq_161
  DataType: word16
  OrigDataType: word16
T_162: (in 0x00 : byte)
  Class: Eq_162
  DataType: byte
  OrigDataType: byte
T_163: (in DPB(dx_127 + Mem112[ss:0x0210:word16], 0x00, 8, 8) : word16)
  Class: Eq_163
  DataType: ui16
  OrigDataType: ui16
T_164: (in 0x0002 : word16)
  Class: Eq_164
  DataType: ui16
  OrigDataType: ui16
T_165: (in DPB(dx_127 + Mem112[ss:0x0210:word16], 0x00, 8, 8) * 0x0002 : word16)
  Class: Eq_165
  DataType: ui16
  OrigDataType: ui16
T_166: (in SEQ(ds, 0xF000)[DPB(dx_127 + Mem112[ss:0x0210:word16], 0x00, 8, 8) * 0x0002] : word16)
  Class: Eq_166
  DataType: word16
  OrigDataType: word16
T_167: (in (cx_140 << 0x0003) + SEQ(ds, 0xF000)[DPB(dx_127 + Mem112[ss:0x0210:word16], 0x00, 8, 8) * 0x0002] : word16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: word16
T_168: (in 0x0200 : word16)
  Class: Eq_168
  DataType: (memptr (ptr Eq_15) Eq_168)
  OrigDataType: (memptr T_15 (struct (0 T_169 t0000)))
T_169: (in Mem155[ss:0x0200:word16] : word16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: word16
T_170: (in ax_164 : word16)
  Class: Eq_170
  DataType: word16
  OrigDataType: word16
T_171: (in 0x0003 : word16)
  Class: Eq_171
  DataType: word16
  OrigDataType: word16
T_172: (in dx_127 << 0x0003 : word16)
  Class: Eq_172
  DataType: ui16
  OrigDataType: ui16
T_173: (in 0xF000 : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_174: (in SEQ(ds, 0xF000) : ptr32)
  Class: Eq_174
  DataType: ptr32
  OrigDataType: ptr32
T_175: (in 0x0210 : word16)
  Class: Eq_175
  DataType: (memptr (ptr Eq_15) Eq_175)
  OrigDataType: (memptr T_15 (struct (0 T_176 t0000)))
T_176: (in Mem155[ss:0x0210:word16] : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_177: (in cx_140 + Mem155[ss:0x0210:word16] : word16)
  Class: Eq_177
  DataType: word16
  OrigDataType: word16
T_178: (in 0x00 : byte)
  Class: Eq_178
  DataType: byte
  OrigDataType: byte
T_179: (in DPB(cx_140 + Mem155[ss:0x0210:word16], 0x00, 8, 8) : word16)
  Class: Eq_179
  DataType: ui16
  OrigDataType: ui16
T_180: (in 0x0002 : word16)
  Class: Eq_180
  DataType: ui16
  OrigDataType: ui16
T_181: (in DPB(cx_140 + Mem155[ss:0x0210:word16], 0x00, 8, 8) * 0x0002 : word16)
  Class: Eq_181
  DataType: ui16
  OrigDataType: ui16
T_182: (in SEQ(ds, 0xF000)[DPB(cx_140 + Mem155[ss:0x0210:word16], 0x00, 8, 8) * 0x0002] : word16)
  Class: Eq_166
  DataType: word16
  OrigDataType: word16
T_183: (in (dx_127 << 0x0003) + SEQ(ds, 0xF000)[DPB(cx_140 + Mem155[ss:0x0210:word16], 0x00, 8, 8) * 0x0002] : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_184: (in 0x0200 : word16)
  Class: Eq_184
  DataType: (memptr (ptr Eq_15) Eq_184)
  OrigDataType: (memptr T_15 (struct (0 T_185 t0000)))
T_185: (in Mem155[ss:0x0200:word16] : word16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: word16
T_186: (in (dx_127 << 0x0003) + SEQ(ds, 0xF000)[DPB(cx_140 + Mem155[ss:0x0210:word16], 0x00, 8, 8) * 0x0002] ^ Mem155[ss:0x0200:word16] : word16)
  Class: Eq_170
  DataType: word16
  OrigDataType: word16
T_187: (in al_165 : byte)
  Class: Eq_187
  DataType: byte
  OrigDataType: byte
T_188: (in (byte) ax_164 : byte)
  Class: Eq_187
  DataType: byte
  OrigDataType: byte
T_189: (in 0x40 : byte)
  Class: Eq_189
  DataType: byte
  OrigDataType: byte
T_190: (in al_165 & 0x40 : byte)
  Class: Eq_126
  DataType: byte
  OrigDataType: byte
T_191: (in al_165 & 0x40 : byte)
  Class: Eq_191
  DataType: byte
  OrigDataType: byte
T_192: (in DPB(ax_164, al_165 & 0x40, 0, 8) : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_193: (in al_165 & 0x40 : byte)
  Class: Eq_193
  DataType: byte
  OrigDataType: byte
T_194: (in 0x00 : byte)
  Class: Eq_193
  DataType: byte
  OrigDataType: byte
T_195: (in (al_165 & 0x40) == 0x00 : bool)
  Class: Eq_195
  DataType: bool
  OrigDataType: bool
T_196: (in 0x0001 : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_197: (in dx_127 - 0x0001 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_198: (in 0x0000 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_199: (in dx_127 != 0x0000 : bool)
  Class: Eq_199
  DataType: bool
  OrigDataType: bool
T_200: (in 0x0140 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_201: (in __inw : ptr32)
  Class: Eq_201
  DataType: (ptr Eq_201)
  OrigDataType: (ptr (fn T_203 (T_202)))
T_202: (in 0x03DA : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_203: (in __inw(0x03DA) : word16)
  Class: Eq_203
  DataType: word16
  OrigDataType: word16
T_204: (in (byte) __inw(0x03DA) : byte)
  Class: Eq_204
  DataType: byte
  OrigDataType: byte
T_205: (in 0x08 : byte)
  Class: Eq_205
  DataType: byte
  OrigDataType: byte
T_206: (in (byte) __inw(0x03DA) & 0x08 : byte)
  Class: Eq_206
  DataType: byte
  OrigDataType: byte
T_207: (in 0x00 : byte)
  Class: Eq_206
  DataType: byte
  OrigDataType: byte
T_208: (in ((byte) __inw(0x03DA) & 0x08) != 0x00 : bool)
  Class: Eq_208
  DataType: bool
  OrigDataType: bool
T_209: (in __inw : ptr32)
  Class: Eq_209
  DataType: (ptr Eq_209)
  OrigDataType: (ptr (fn T_211 (T_210)))
T_210: (in 0x03DA : word16)
  Class: Eq_210
  DataType: word16
  OrigDataType: word16
T_211: (in __inw(0x03DA) : word16)
  Class: Eq_211
  DataType: word16
  OrigDataType: word16
T_212: (in (byte) __inw(0x03DA) : byte)
  Class: Eq_212
  DataType: byte
  OrigDataType: byte
T_213: (in 0x08 : byte)
  Class: Eq_213
  DataType: byte
  OrigDataType: byte
T_214: (in (byte) __inw(0x03DA) & 0x08 : byte)
  Class: Eq_214
  DataType: byte
  OrigDataType: byte
T_215: (in 0x00 : byte)
  Class: Eq_214
  DataType: byte
  OrigDataType: byte
T_216: (in ((byte) __inw(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_216
  DataType: bool
  OrigDataType: bool
T_217: (in fp : ptr16)
  Class: Eq_217
  DataType: Eq_217
  OrigDataType: (union ((union (ptr16 u0) ((memptr T_15 (struct (FFFFFFFC T_224 tFFFFFFFC))) u1)) u0) ((memptr T_15 (struct (FFFFFFFC T_220 tFFFFFFFC))) u1))
T_218: (in 0x0004 : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_219: (in fp - 0x0004 : word16)
  Class: Eq_219
  DataType: word16
  OrigDataType: word16
T_220: (in Mem205[ss:fp - 0x0004:word16] : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_221: (in 0xA000 : word16)
  Class: Eq_221
  DataType: word16
  OrigDataType: word16
T_222: (in 0x0004 : word16)
  Class: Eq_222
  DataType: word16
  OrigDataType: word16
T_223: (in fp - 0x0004 : word16)
  Class: Eq_223
  DataType: word16
  OrigDataType: word16
T_224: (in Mem209[ss:fp - 0x0004:word16] : word16)
  Class: Eq_221
  DataType: word16
  OrigDataType: word16
T_225: (in si_212 : word16)
  Class: Eq_225
  DataType: (memptr (ptr Eq_242) Eq_225)
  OrigDataType: (memptr T_242 (struct 0004 (0 T_245 t0000)))
T_226: (in 0x0000 : word16)
  Class: Eq_225
  DataType: (memptr (ptr Eq_242) Eq_225)
  OrigDataType: word16
T_227: (in di_213 : word16)
  Class: Eq_227
  DataType: (memptr (ptr Eq_242) Eq_227)
  OrigDataType: (memptr T_242 (struct 0004 (0 T_248 t0000)))
T_228: (in 0x0000 : word16)
  Class: Eq_227
  DataType: (memptr (ptr Eq_242) Eq_227)
  OrigDataType: word16
T_229: (in 0x3F : byte)
  Class: Eq_229
  DataType: byte
  OrigDataType: byte
T_230: (in DPB(cx_140, 0x3F, 8, 8) : word16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: word16
T_231: (in 0x0210 : word16)
  Class: Eq_231
  DataType: (memptr (ptr Eq_15) Eq_231)
  OrigDataType: (memptr T_15 (struct (0 T_232 t0000)))
T_232: (in Mem209[ss:0x0210:word16] : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_233: (in 0x0001 : word16)
  Class: Eq_233
  DataType: word16
  OrigDataType: word16
T_234: (in Mem209[ss:0x0210:word16] + 0x0001 : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_235: (in 0x0210 : word16)
  Class: Eq_235
  DataType: (memptr (ptr Eq_15) Eq_235)
  OrigDataType: (memptr T_15 (struct (0 T_236 t0000)))
T_236: (in Mem231[ss:0x0210:word16] : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_237: (in __inb : ptr32)
  Class: Eq_237
  DataType: (ptr Eq_237)
  OrigDataType: (ptr (fn T_239 (T_238)))
T_238: (in 0x60 : byte)
  Class: Eq_238
  DataType: byte
  OrigDataType: byte
T_239: (in __inb(0x60) : byte)
  Class: Eq_239
  DataType: byte
  OrigDataType: byte
T_240: (in 0x01 : byte)
  Class: Eq_239
  DataType: byte
  OrigDataType: byte
T_241: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_241
  DataType: bool
  OrigDataType: bool
T_242: (in 0xA000 : selector)
  Class: Eq_242
  DataType: (ptr Eq_242)
  OrigDataType: (ptr (segment (0 (arr T_265) a0000)))
T_243: (in 0x0000 : word16)
  Class: Eq_243
  DataType: word16
  OrigDataType: word16
T_244: (in si_212 + 0x0000 : word16)
  Class: Eq_244
  DataType: word16
  OrigDataType: word16
T_245: (in Mem209[0xA000:si_212 + 0x0000:word32] : word32)
  Class: Eq_245
  DataType: word32
  OrigDataType: word32
T_246: (in 0x0000 : word16)
  Class: Eq_246
  DataType: word16
  OrigDataType: word16
T_247: (in di_213 + 0x0000 : word16)
  Class: Eq_247
  DataType: word16
  OrigDataType: word16
T_248: (in Mem223[0xA000:di_213 + 0x0000:word32] : word32)
  Class: Eq_245
  DataType: word32
  OrigDataType: word32
T_249: (in 0x0004 : word16)
  Class: Eq_249
  DataType: word16
  OrigDataType: word16
T_250: (in si_212 + 0x0004 : word16)
  Class: Eq_225
  DataType: (memptr (ptr Eq_242) Eq_225)
  OrigDataType: word16
T_251: (in 0x0004 : word16)
  Class: Eq_251
  DataType: word16
  OrigDataType: word16
T_252: (in di_213 + 0x0004 : word16)
  Class: Eq_227
  DataType: (memptr (ptr Eq_242) Eq_227)
  OrigDataType: word16
T_253: (in 0x0001 : word16)
  Class: Eq_253
  DataType: word16
  OrigDataType: word16
T_254: (in cx_10 - 0x0001 : word16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: word16
T_255: (in 0x0000 : word16)
  Class: Eq_13
  DataType: Eq_13
  OrigDataType: word16
T_256: (in cx_10 == 0x0000 : bool)
  Class: Eq_256
  DataType: bool
  OrigDataType: bool
T_257: (in msdos_terminate : ptr32)
  Class: Eq_257
  DataType: (ptr Eq_257)
  OrigDataType: (ptr (fn T_261 (T_260)))
T_258: (in signature of msdos_terminate : void)
  Class: Eq_257
  DataType: (ptr Eq_257)
  OrigDataType: 
T_259: (in al : byte)
  Class: Eq_259
  DataType: byte
  OrigDataType: byte
T_260: (in 0x00 : byte)
  Class: Eq_259
  DataType: byte
  OrigDataType: byte
T_261: (in msdos_terminate(0x00) : void)
  Class: Eq_261
  DataType: void
  OrigDataType: void
T_262:
  Class: Eq_262
  DataType: Eq_262
  OrigDataType: (struct 0001 (0 T_65 t0000))
T_263:
  Class: Eq_263
  DataType: Eq_263
  OrigDataType: (struct 0002 (0 T_166 t0000))
T_264:
  Class: Eq_263
  DataType: Eq_263
  OrigDataType: (struct 0002 (0 T_182 t0000))
T_265:
  Class: Eq_265
  DataType: Eq_265
  OrigDataType: (struct 0004 (0 T_245 t0000))
T_266:
  Class: Eq_265
  DataType: Eq_265
  OrigDataType: (struct 0004 (0 T_248 t0000))
*/
typedef  Eq_1struct Globals {
	 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef struct  {
	word16 w0000;	// 0
	bcu8 b0001;	// 1
} Eq_7;

typedef struct  {
	int16 w0000;	// 0
} Eq_9;

typedef union  {
	int16 u0;
	word32 u1;
} Eq_13;

typedef  Eq_15struct  {
	 t0200;	// 200
	word16 w0204;	// 204
	word16 w0210;	// 210
} Eq_15;

typedef  Eq_16struct  {
	 t0000;	// 0
} Eq_16;

typedef  (Eq_18)(real16);

typedef  Eq_19struct  {
	 t0000;	// 0
} Eq_19;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_21;

typedef  Eq_22[][6]struct  {
	 aFFFFF000[];	// FFFFF000
	 t01F2;	// 1F2
	 t01F4;	// 1F4
	 a01F7[6];	// 1F7
	word16 w01F8;	// 1F8
	word16 w01FC;	// 1FC
	int16 w01FE;	// 1FE
} Eq_22;

typedef  Eq_23struct  {
	 t0000;	// 0
} Eq_23;

typedef union  {
	real16 u0;
	real32 u1;
} Eq_24;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_26;

typedef  Eq_27struct  {
	 t0000;	// 0
} Eq_27;

typedef union  {
	real16 u0;
	real32 u1;
} Eq_28;

typedef void (Eq_42)(word16, byte);

typedef  Eq_47struct  {
	 t0000;	// 0
} Eq_47;

typedef struct  {
	word16 w0000;	// 0
} Eq_50;

typedef void (Eq_55)(word16, bcu8);

typedef struct  {	// size: 1 1
	word16 w0000;	// 0
} Eq_62;

typedef struct  {
	int16 w0000;	// 0
} Eq_94;

typedef struct  {
	word16 w0000;	// 0
} Eq_96;

typedef struct  {
	word16 w0000;	// 0
} Eq_102;

typedef struct  {
	word16 w0000;	// 0
} Eq_106;

typedef struct  {
	int16 w0000;	// 0
} Eq_110;

typedef struct  {
	word16 w0000;	// 0
} Eq_112;

typedef struct  {
} Eq_117;

typedef  Eq_122struct  {	// size: 1 1
	 t0000;	// 0
	byte b0001;	// 1
	byte b0002;	// 2
} Eq_122;

typedef union  {
	uint16 u0;
	byte u1;
} Eq_129;

typedef struct  {
	word16 w0000;	// 0
} Eq_159;

typedef  Eq_168struct  {
	 t0000;	// 0
} Eq_168;

typedef struct  {
	word16 w0000;	// 0
} Eq_175;

typedef  Eq_184struct  {
	 t0000;	// 0
} Eq_184;

typedef word16 (Eq_201)(word16);

typedef word16 (Eq_209)(word16);

typedef union  {
	struct <anonymous> Eq_15::* u0;
	union <anonymous> u1;
} Eq_217;

typedef struct  {	// size: 4 4
	word32 dw0000;	// 0
} Eq_225;

typedef struct  {	// size: 4 4
	word32 dw0000;	// 0
} Eq_227;

typedef struct  {
	word16 w0000;	// 0
} Eq_231;

typedef struct  {
	word16 w0000;	// 0
} Eq_235;

typedef byte (Eq_237)(byte);

typedef  Eq_242[]struct  {
	 a0000[];	// 0
} Eq_242;

typedef void (Eq_257)(byte);

typedef struct  {	// size: 1 1
	word16 w0000;	// 0
} Eq_262;

typedef struct  {	// size: 2 2
	word16 w0000;	// 0
} Eq_263;

typedef struct  {	// size: 4 4
	word32 dw0000;	// 0
} Eq_265;

