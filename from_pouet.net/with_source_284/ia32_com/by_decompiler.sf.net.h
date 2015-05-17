// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_284/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFF80000 (ptr Eq_179) ptrFFF80000) (FFFA0000 (ptr Eq_179) ptrFFFA0000) (70000 (ptr Eq_15) ptr70000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_3: (fn void (byte))
	T_3 (in bios_video_set_mode : ptr32)
	T_4 (in signature of bios_video_set_mode : void)
Eq_12: (struct "Eq_12" 0001 (0 int16 w0000) (1FE int16 w01FE))
	T_12 (in di_11 : (memptr (ptr Eq_15) Eq_12))
	T_13 (in 0x0000 : word16)
	T_50 (in di_11 + 0x0001 : word16)
Eq_15: (segment "Eq_15" (0 Eq_12 t0000) (1A1 byte b01A1) (1A8 bcu8 b01A8) (1F8 Eq_32 t01F8) (1FC int16 w01FC) (1FE int16 w01FE))
	T_15 (in ds : (ptr Eq_15))
	T_37 (in 0x7000 : selector)
Eq_22: (union "Eq_22" (real16 u0) (real64 u1))
	T_22 (in rLoc4_44 : Eq_22)
	T_33 (in sqrt(rLoc4_38 + rLoc4_38 * rLoc4_38) / (real64) ds->w01FC + ds->t01F8 : word16)
Eq_23: (fn Eq_26 (real64))
	T_23 (in sqrt : ptr32)
Eq_26: (union "Eq_26" (real16 u0) (real64 u1))
	T_26 (in sqrt(rLoc4_38 + rLoc4_38 * rLoc4_38) : real64)
Eq_29: (union "Eq_29" (real16 u0) (real64 u1))
	T_29 (in (real64) ds->w01FC : real64)
Eq_32: (union "Eq_32" (real16 u0) (real32 u1))
	T_32 (in Mem0[ds:0x01F8:real32] : real32)
Eq_70: (segment "Eq_70")
	T_70 (in ss : selector)
Eq_71: (union "Eq_71" ((memptr (ptr Eq_70) Eq_258) u0) (Eq_260 u1))
	T_71 (in fp : ptr16)
Eq_79: (union "Eq_79" (uint8 u0) (ui16 u1))
	T_79 (in al_175 : Eq_79)
	T_82 (in al_164 << cl_160 : word16)
Eq_83: (union "Eq_83" (uint16 u0) (byte u1))
	T_83 (in al_176 : Eq_83)
	T_85 (in al_175 >>u 0x01 : word16)
	T_99 (in 0x3F : byte)
	T_116 (in al_176 + 0xBF >>u 0x02 : word16)
Eq_86: (union "Eq_86" (uint16 u0) (bcu8 u1))
	T_86 (in al_175 >>u 0x01 : word16)
	T_87 (in 0x3F : byte)
Eq_100: (fn void (word16, Eq_83))
	T_100 (in __outb : ptr32)
Eq_146: (fn byte (word16))
	T_146 (in __inb : ptr32)
Eq_153: (struct "Eq_153" 0001 (0 Eq_171 t0000))
	T_153 (in di_216 : (memptr (ptr Eq_179) Eq_153))
	T_154 (in 0x0000 : word16)
	T_216 (in di_216 + 0x0001 : word16)
Eq_155: (struct "Eq_155" 0140 (1FE byte b01FE))
	T_155 (in si_219 : (memptr (ptr Eq_15) Eq_155))
	T_156 (in 0x0000 : word16)
	T_177 (in si_219 - 0x0140 : word16)
	T_218 (in si_219 + 0x0001 : word16)
Eq_171: (union "Eq_171" (uint16 u0) (byte u1))
	T_171 (in al_260 : Eq_171)
	T_173 (in al_259 >>u 0x01 : word16)
	T_178 (in al_259 >>u 0x01 : word16)
	T_182 (in Mem263[0x8000:di_216 + 0x0000:byte] : byte)
	T_201 (in al_259 >>u 0x01 | 0x80 : byte)
	T_212 (in Mem284[0xA000:di_216 + 0x0000:byte] : byte)
	T_223 (in 0x00 : byte)
Eq_179: (segment "Eq_179" (0 Eq_153 t0000))
	T_179 (in 0x8000 : selector)
	T_209 (in 0xA000 : selector)
Eq_245: (fn byte (byte))
	T_245 (in __inb : ptr32)
Eq_251: (fn void (word16, byte))
	T_251 (in __outb : ptr32)
Eq_258: (struct "Eq_258" (FFFFFFF8 word16 wFFFFFFF8))
	T_258
Eq_259: (struct "Eq_259" (FFFFFFFE word16 wFFFFFFFE))
	T_259
Eq_260: (union "Eq_260" (ptr16 u0) ((memptr (ptr Eq_70) Eq_259) u1))
	T_260
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in rLoc2 : real64)
  Class: Eq_2
  DataType: real64
  OrigDataType: real64
T_3: (in bios_video_set_mode : ptr32)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: (ptr (fn T_7 (T_6)))
T_4: (in signature of bios_video_set_mode : void)
  Class: Eq_3
  DataType: (ptr Eq_3)
  OrigDataType: 
T_5: (in al : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_6: (in 0x13 : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_7: (in bios_video_set_mode(0x13) : void)
  Class: Eq_7
  DataType: void
  OrigDataType: void
T_8: (in cx_10 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in cx : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in 0xC8 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in DPB(cx, 0xC8, 0, 8) : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_12: (in di_11 : (memptr (ptr Eq_15) Eq_12))
  Class: Eq_12
  DataType: (memptr (ptr Eq_15) Eq_12)
  OrigDataType: (memptr T_15 (struct 0001 (0 T_40 t0000) (1FE T_46 t01FE)))
T_13: (in 0x0000 : word16)
  Class: Eq_12
  DataType: (memptr (ptr Eq_15) Eq_12)
  OrigDataType: word16
T_14: (in rLoc2_17 : real64)
  Class: Eq_14
  DataType: real64
  OrigDataType: real64
T_15: (in ds : (ptr Eq_15))
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (segment (1A1 T_225 t01A1) (1A8 T_242 t01A8) (1F8 T_32 t01F8) (1FC T_28 t01FC) (1FE T_17 t01FE)))
T_16: (in 0x01FE : word16)
  Class: Eq_16
  DataType: (memptr (ptr Eq_15) int16)
  OrigDataType: (memptr T_15 (struct (0 T_17 t0000)))
T_17: (in Mem0[ds:0x01FE:int16] : int16)
  Class: Eq_17
  DataType: int16
  OrigDataType: int16
T_18: (in (real64) ds->w01FE : real64)
  Class: Eq_14
  DataType: real64
  OrigDataType: real64
T_19: (in rLoc4_38 : real64)
  Class: Eq_19
  DataType: real64
  OrigDataType: real64
T_20: (in rLoc3_31 : real64)
  Class: Eq_20
  DataType: real64
  OrigDataType: real64
T_21: (in rLoc3_31 * rLoc3_31 : real64)
  Class: Eq_19
  DataType: real64
  OrigDataType: real64
T_22: (in rLoc4_44 : Eq_22)
  Class: Eq_22
  DataType: Eq_22
  OrigDataType: real64
T_23: (in sqrt : ptr32)
  Class: Eq_23
  DataType: (ptr Eq_23)
  OrigDataType: (ptr (fn T_26 (T_25)))
T_24: (in rLoc4_38 * rLoc4_38 : real64)
  Class: Eq_24
  DataType: real64
  OrigDataType: real64
T_25: (in rLoc4_38 + rLoc4_38 * rLoc4_38 : real64)
  Class: Eq_25
  DataType: real64
  OrigDataType: real64
T_26: (in sqrt(rLoc4_38 + rLoc4_38 * rLoc4_38) : real64)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: (union (real16 u0) (real64 u1))
T_27: (in 0x01FC : word16)
  Class: Eq_27
  DataType: (memptr (ptr Eq_15) int16)
  OrigDataType: (memptr T_15 (struct (0 T_28 t0000)))
T_28: (in Mem0[ds:0x01FC:word16] : word16)
  Class: Eq_28
  DataType: int16
  OrigDataType: word16
T_29: (in (real64) ds->w01FC : real64)
  Class: Eq_29
  DataType: Eq_29
  OrigDataType: (union (real16 u0) (real64 u1))
T_30: (in sqrt(rLoc4_38 + rLoc4_38 * rLoc4_38) / (real64) ds->w01FC : word16)
  Class: Eq_30
  DataType: real16
  OrigDataType: real16
T_31: (in 0x01F8 : word16)
  Class: Eq_31
  DataType: (memptr (ptr Eq_15) Eq_32)
  OrigDataType: (memptr T_15 (struct (0 T_32 t0000)))
T_32: (in Mem0[ds:0x01F8:real32] : real32)
  Class: Eq_32
  DataType: Eq_32
  OrigDataType: (union (real16 u0) (real32 u1))
T_33: (in sqrt(rLoc4_38 + rLoc4_38 * rLoc4_38) / (real64) ds->w01FC + ds->t01F8 : word16)
  Class: Eq_22
  DataType: Eq_22
  OrigDataType: real16
T_34: (in rLoc4_44 / rLoc4_44 : real64)
  Class: Eq_34
  DataType: real64
  OrigDataType: real64
T_35: (in rLoc4_44 / rLoc4_44 + rLoc3_31 : real64)
  Class: Eq_35
  DataType: real64
  OrigDataType: real64
T_36: (in (int16) (rLoc4_44 / rLoc4_44 + rLoc3_31) : int16)
  Class: Eq_36
  DataType: int16
  OrigDataType: int16
T_37: (in 0x7000 : selector)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (segment))
T_38: (in 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in di_11 + 0x0000 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in Mem48[0x7000:di_11 + 0x0000:int16] : int16)
  Class: Eq_36
  DataType: int16
  OrigDataType: int16
T_41: (in rLoc2_17 / rLoc4_44 : real64)
  Class: Eq_41
  DataType: real64
  OrigDataType: real64
T_42: (in rLoc2_17 / rLoc4_44 + rLoc2_17 : real64)
  Class: Eq_42
  DataType: real64
  OrigDataType: real64
T_43: (in (int16) (rLoc2_17 / rLoc4_44 + rLoc2_17) : int16)
  Class: Eq_43
  DataType: int16
  OrigDataType: int16
T_44: (in 0x01FE : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in di_11 + 0x01FE : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in Mem51[ds:di_11 + 0x01FE:int16] : int16)
  Class: Eq_43
  DataType: int16
  OrigDataType: int16
T_47: (in 1 : real64)
  Class: Eq_47
  DataType: real64
  OrigDataType: real64
T_48: (in rLoc3_31 + 1 : real64)
  Class: Eq_20
  DataType: real64
  OrigDataType: real64
T_49: (in 0x0001 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in di_11 + 0x0001 : word16)
  Class: Eq_12
  DataType: (memptr (ptr Eq_15) Eq_12)
  OrigDataType: word16
T_51: (in dx_32 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in 0x0001 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in dx_32 - 0x0001 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_54: (in 0x0000 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_55: (in dx_32 != 0x0000 : bool)
  Class: Eq_55
  DataType: bool
  OrigDataType: bool
T_56: (in rLoc2_59 : real64)
  Class: Eq_56
  DataType: real64
  OrigDataType: real64
T_57: (in 1 : real64)
  Class: Eq_57
  DataType: real64
  OrigDataType: real64
T_58: (in rLoc2_17 + 1 : real64)
  Class: Eq_56
  DataType: real64
  OrigDataType: real64
T_59: (in 1 : real64)
  Class: Eq_59
  DataType: real64
  OrigDataType: real64
T_60: (in rLoc2_59 + 1 : real64)
  Class: Eq_14
  DataType: real64
  OrigDataType: real64
T_61: (in 0x0001 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in cx_10 - 0x0001 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_63: (in 0x0000 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_64: (in cx_10 != 0x0000 : bool)
  Class: Eq_64
  DataType: bool
  OrigDataType: bool
T_65: (in 0x01FC : word16)
  Class: Eq_65
  DataType: (memptr (ptr Eq_15) int16)
  OrigDataType: (memptr T_15 (struct (0 T_66 t0000)))
T_66: (in Mem0[ds:0x01FC:int16] : int16)
  Class: Eq_28
  DataType: int16
  OrigDataType: int16
T_67: (in (real64) ds->w01FC : real64)
  Class: Eq_20
  DataType: real64
  OrigDataType: real64
T_68: (in 0x0140 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_69: (in 0x8000 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in ss : selector)
  Class: Eq_70
  DataType: (ptr Eq_70)
  OrigDataType: (ptr (segment))
T_71: (in fp : ptr16)
  Class: Eq_71
  DataType: Eq_71
  OrigDataType: (union ((union (ptr16 u0) ((memptr T_70 (struct (FFFFFFFE T_78 tFFFFFFFE))) u1)) u0) ((memptr T_70 (struct (FFFFFFF8 T_124 tFFFFFFF8))) u1) ((union (ptr16 u0) ((memptr T_70 (struct (FFFFFFFA T_120 tFFFFFFFA))) u1)) u2) ((union (ptr16 u0) ((memptr T_70 (struct (FFFFFFFE T_74 tFFFFFFFE))) u1)) u3))
T_72: (in 0x0002 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in fp - 0x0002 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in Mem65[ss:fp - 0x0002:word16] : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_75: (in 0xA000 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in 0x0002 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in fp - 0x0002 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in Mem70[ss:fp - 0x0002:word16] : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_79: (in al_175 : Eq_79)
  Class: Eq_79
  DataType: Eq_79
  OrigDataType: uint8
T_80: (in al_164 : byte)
  Class: Eq_80
  DataType: byte
  OrigDataType: byte
T_81: (in cl_160 : uint8)
  Class: Eq_81
  DataType: uint8
  OrigDataType: uint8
T_82: (in al_164 << cl_160 : word16)
  Class: Eq_79
  DataType: Eq_79
  OrigDataType: ui16
T_83: (in al_176 : Eq_83)
  Class: Eq_83
  DataType: Eq_83
  OrigDataType: (union (uint16 u0) (byte u1))
T_84: (in 0x01 : byte)
  Class: Eq_84
  DataType: uint8
  OrigDataType: uint8
T_85: (in al_175 >>u 0x01 : word16)
  Class: Eq_83
  DataType: Eq_83
  OrigDataType: uint16
T_86: (in al_175 >>u 0x01 : word16)
  Class: Eq_86
  DataType: Eq_86
  OrigDataType: uint16
T_87: (in 0x3F : byte)
  Class: Eq_86
  DataType: bcu8
  OrigDataType: bcu8
T_88: (in al_175 >>u 0x01 <=u 0x3F : bool)
  Class: Eq_88
  DataType: bool
  OrigDataType: bool
T_89: (in al_162 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_90: (in 0x7F : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_91: (in al_162 & 0x7F : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_92: (in 0x3F : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_93: (in al_162 & 0x7F & 0x3F : byte)
  Class: Eq_80
  DataType: byte
  OrigDataType: byte
T_94: (in 0x01 : byte)
  Class: Eq_94
  DataType: uint8
  OrigDataType: uint8
T_95: (in cl_160 >>u 0x01 : word16)
  Class: Eq_95
  DataType: uint16
  OrigDataType: uint16
T_96: (in 0x01 : byte)
  Class: Eq_96
  DataType: byte
  OrigDataType: byte
T_97: (in cl_160 >>u 0x01 ^ 0x01 : byte)
  Class: Eq_81
  DataType: uint8
  OrigDataType: byte
T_98: (in ah_163 : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_99: (in 0x3F : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_100: (in __outb : ptr32)
  Class: Eq_100
  DataType: (ptr Eq_100)
  OrigDataType: (ptr (fn T_102 (T_101, T_83)))
T_101: (in 0x03C9 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in __outb(0x03C9, al_176) : void)
  Class: Eq_102
  DataType: void
  OrigDataType: void
T_103: (in bp_355 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in bp : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_105: (in ax_356 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_106: (in ax_103 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_107: (in (byte) ax_356 : byte)
  Class: Eq_107
  DataType: byte
  OrigDataType: byte
T_108: (in al_104 : byte)
  Class: Eq_107
  DataType: byte
  OrigDataType: byte
T_109: (in 0x0001 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in cx_10 - 0x0001 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_111: (in 0x0000 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_112: (in cx_10 != 0x0000 : bool)
  Class: Eq_112
  DataType: bool
  OrigDataType: bool
T_113: (in 0xBF : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_114: (in al_176 + 0xBF : byte)
  Class: Eq_114
  DataType: uint8
  OrigDataType: uint8
T_115: (in 0x02 : byte)
  Class: Eq_115
  DataType: uint8
  OrigDataType: uint8
T_116: (in al_176 + 0xBF >>u 0x02 : word16)
  Class: Eq_83
  DataType: Eq_83
  OrigDataType: uint16
T_117: (in 0x03C9 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in 0x0006 : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in fp - 0x0006 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in Mem148[ss:fp - 0x0006:word16] : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_121: (in 0x01FE : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_122: (in 0x0008 : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_123: (in fp - 0x0008 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in Mem150[ss:fp - 0x0008:word16] : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_125: (in ax_161 : int16)
  Class: Eq_125
  DataType: int16
  OrigDataType: word16
T_126: (in (int16) al_104 : int16)
  Class: Eq_125
  DataType: int16
  OrigDataType: int16
T_127: (in (byte) ax_161 : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_128: (in 0x0001 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in cx_10 - 0x0001 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_130: (in (byte) (cx_10 - 0x0001) : byte)
  Class: Eq_81
  DataType: uint8
  OrigDataType: byte
T_131: (in SLICE(ax_161, byte, 8) : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_132: (in al_162 & 0x7F : byte)
  Class: Eq_80
  DataType: byte
  OrigDataType: byte
T_133: (in al_162 & 0x7F : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_134: (in 0x40 : byte)
  Class: Eq_134
  DataType: byte
  OrigDataType: byte
T_135: (in al_162 & 0x7F & 0x40 : byte)
  Class: Eq_135
  DataType: byte
  OrigDataType: byte
T_136: (in 0x00 : byte)
  Class: Eq_135
  DataType: byte
  OrigDataType: byte
T_137: (in (al_162 & 0x7F & 0x40) == 0x00 : bool)
  Class: Eq_137
  DataType: bool
  OrigDataType: bool
T_138: (in 0x01 : byte)
  Class: Eq_138
  DataType: byte
  OrigDataType: byte
T_139: (in al_104 + 0x01 : byte)
  Class: Eq_107
  DataType: byte
  OrigDataType: byte
T_140: (in al_104 + 0x01 : byte)
  Class: Eq_140
  DataType: byte
  OrigDataType: byte
T_141: (in DPB(ax_356, al_104 + 0x01, 0, 8) : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_142: (in 0x01 : byte)
  Class: Eq_107
  DataType: byte
  OrigDataType: byte
T_143: (in al_104 != 0x01 : bool)
  Class: Eq_143
  DataType: bool
  OrigDataType: bool
T_144: (in 0x03 : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_145: (in DPB(cx_10, 0x03, 0, 8) : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_146: (in __inb : ptr32)
  Class: Eq_146
  DataType: (ptr Eq_146)
  OrigDataType: (ptr (fn T_148 (T_147)))
T_147: (in 0x03DA : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_148: (in __inb(0x03DA) : byte)
  Class: Eq_148
  DataType: byte
  OrigDataType: byte
T_149: (in 0x08 : byte)
  Class: Eq_149
  DataType: byte
  OrigDataType: byte
T_150: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_150
  DataType: byte
  OrigDataType: byte
T_151: (in 0x00 : byte)
  Class: Eq_150
  DataType: byte
  OrigDataType: byte
T_152: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_152
  DataType: bool
  OrigDataType: bool
T_153: (in di_216 : (memptr (ptr Eq_179) Eq_153))
  Class: Eq_153
  DataType: (memptr (ptr Eq_179) Eq_153)
  OrigDataType: (memptr T_179 (struct 0001 (0 T_171 t0000)))
T_154: (in 0x0000 : word16)
  Class: Eq_153
  DataType: (memptr (ptr Eq_179) Eq_153)
  OrigDataType: word16
T_155: (in si_219 : (memptr (ptr Eq_15) Eq_155))
  Class: Eq_155
  DataType: (memptr (ptr Eq_15) Eq_155)
  OrigDataType: (memptr T_15 (struct 0140 (1FE T_164 t01FE)))
T_156: (in 0x0000 : word16)
  Class: Eq_155
  DataType: (memptr (ptr Eq_15) Eq_155)
  OrigDataType: word16
T_157: (in cl_220 : bcu8)
  Class: Eq_157
  DataType: bcu8
  OrigDataType: bcu8
T_158: (in 0xC8 : byte)
  Class: Eq_157
  DataType: bcu8
  OrigDataType: byte
T_159: (in 0xC8 : byte)
  Class: Eq_159
  DataType: byte
  OrigDataType: byte
T_160: (in DPB(cx_10, 0xC8, 0, 8) : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_161: (in ax_256 : word16)
  Class: Eq_161
  DataType: word16
  OrigDataType: word16
T_162: (in 0x01FE : word16)
  Class: Eq_162
  DataType: word16
  OrigDataType: word16
T_163: (in si_219 + 0x01FE : word16)
  Class: Eq_163
  DataType: word16
  OrigDataType: word16
T_164: (in Mem150[ds:si_219 + 0x01FE:byte] : byte)
  Class: Eq_164
  DataType: byte
  OrigDataType: byte
T_165: (in DPB(ax_103, (ds->*si_219).b01FE, 8, 8) : word16)
  Class: Eq_165
  DataType: word16
  OrigDataType: word16
T_166: (in DPB(ax_103, (ds->*si_219).b01FE, 8, 8) + bp_355 : word16)
  Class: Eq_161
  DataType: word16
  OrigDataType: word16
T_167: (in al_259 : uint8)
  Class: Eq_167
  DataType: uint8
  OrigDataType: uint8
T_168: (in (byte) ax_256 : byte)
  Class: Eq_168
  DataType: byte
  OrigDataType: byte
T_169: (in SLICE(ax_256, byte, 8) : byte)
  Class: Eq_169
  DataType: byte
  OrigDataType: byte
T_170: (in (byte) ax_256 | SLICE(ax_256, byte, 8) : byte)
  Class: Eq_167
  DataType: uint8
  OrigDataType: byte
T_171: (in al_260 : Eq_171)
  Class: Eq_171
  DataType: Eq_171
  OrigDataType: byte
T_172: (in 0x01 : byte)
  Class: Eq_172
  DataType: uint8
  OrigDataType: uint8
T_173: (in al_259 >>u 0x01 : word16)
  Class: Eq_171
  DataType: Eq_171
  OrigDataType: uint16
T_174: (in al_259 >>u 0x01 : word16)
  Class: Eq_174
  DataType: uint16
  OrigDataType: uint16
T_175: (in DPB(ax_256, al_259 >>u 0x01, 0, 8) : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_176: (in 0x0140 : word16)
  Class: Eq_176
  DataType: word16
  OrigDataType: word16
T_177: (in si_219 - 0x0140 : word16)
  Class: Eq_155
  DataType: (memptr (ptr Eq_15) Eq_155)
  OrigDataType: word16
T_178: (in al_259 >>u 0x01 : word16)
  Class: Eq_171
  DataType: Eq_171
  OrigDataType: uint16
T_179: (in 0x8000 : selector)
  Class: Eq_179
  DataType: (ptr Eq_179)
  OrigDataType: (ptr (segment))
T_180: (in 0x0000 : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_181: (in di_216 + 0x0000 : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_182: (in Mem263[0x8000:di_216 + 0x0000:byte] : byte)
  Class: Eq_171
  DataType: Eq_171
  OrigDataType: byte
T_183: (in dx_234 : cups16)
  Class: Eq_183
  DataType: cups16
  OrigDataType: cups16
T_184: (in 0x0047 : word16)
  Class: Eq_183
  DataType: cups16
  OrigDataType: cups16
T_185: (in dx_234 >=u 0x0047 : bool)
  Class: Eq_185
  DataType: bool
  OrigDataType: bool
T_186: (in 0xC6 : byte)
  Class: Eq_157
  DataType: bcu8
  OrigDataType: bcu8
T_187: (in cl_220 >=u 0xC6 : bool)
  Class: Eq_187
  DataType: bool
  OrigDataType: bool
T_188: (in dl_235 : bcu8)
  Class: Eq_188
  DataType: bcu8
  OrigDataType: bcu8
T_189: (in 0x08 : byte)
  Class: Eq_188
  DataType: bcu8
  OrigDataType: bcu8
T_190: (in dl_235 <=u 0x08 : bool)
  Class: Eq_190
  DataType: bool
  OrigDataType: bool
T_191: (in cx_10 + bp_355 : word16)
  Class: Eq_191
  DataType: word16
  OrigDataType: word16
T_192: (in (byte) (cx_10 + bp_355) : byte)
  Class: Eq_192
  DataType: byte
  OrigDataType: byte
T_193: (in (byte) (cx_10 + bp_355) ^ dl_235 : byte)
  Class: Eq_193
  DataType: byte
  OrigDataType: byte
T_194: (in 0x10 : byte)
  Class: Eq_194
  DataType: byte
  OrigDataType: byte
T_195: (in ((byte) (cx_10 + bp_355) ^ dl_235) & 0x10 : byte)
  Class: Eq_195
  DataType: byte
  OrigDataType: byte
T_196: (in 0x00 : byte)
  Class: Eq_195
  DataType: byte
  OrigDataType: byte
T_197: (in (((byte) (cx_10 + bp_355) ^ dl_235) & 0x10) == 0x00 : bool)
  Class: Eq_197
  DataType: bool
  OrigDataType: bool
T_198: (in (byte) cx_10 : byte)
  Class: Eq_157
  DataType: bcu8
  OrigDataType: byte
T_199: (in al_259 >>u 0x01 : word16)
  Class: Eq_199
  DataType: uint16
  OrigDataType: uint16
T_200: (in 0x80 : byte)
  Class: Eq_200
  DataType: byte
  OrigDataType: byte
T_201: (in al_259 >>u 0x01 | 0x80 : byte)
  Class: Eq_171
  DataType: Eq_171
  OrigDataType: byte
T_202: (in DPB(ax_256, al_260, 0, 8) : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_203: (in 0x04 : byte)
  Class: Eq_203
  DataType: byte
  OrigDataType: byte
T_204: (in dl_235 & 0x04 : byte)
  Class: Eq_204
  DataType: byte
  OrigDataType: byte
T_205: (in 0x00 : byte)
  Class: Eq_204
  DataType: byte
  OrigDataType: byte
T_206: (in (dl_235 & 0x04) != 0x00 : bool)
  Class: Eq_206
  DataType: bool
  OrigDataType: bool
T_207: (in 0x03 : byte)
  Class: Eq_157
  DataType: bcu8
  OrigDataType: bcu8
T_208: (in cl_220 >u 0x03 : bool)
  Class: Eq_208
  DataType: bool
  OrigDataType: bool
T_209: (in 0xA000 : selector)
  Class: Eq_179
  DataType: (ptr Eq_179)
  OrigDataType: (ptr (segment))
T_210: (in 0x0000 : word16)
  Class: Eq_210
  DataType: word16
  OrigDataType: word16
T_211: (in di_216 + 0x0000 : word16)
  Class: Eq_211
  DataType: word16
  OrigDataType: word16
T_212: (in Mem284[0xA000:di_216 + 0x0000:byte] : byte)
  Class: Eq_171
  DataType: Eq_171
  OrigDataType: byte
T_213: (in 0x0001 : word16)
  Class: Eq_213
  DataType: word16
  OrigDataType: word16
T_214: (in dx_234 - 0x0001 : word16)
  Class: Eq_183
  DataType: cups16
  OrigDataType: word16
T_215: (in 0x0001 : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_216: (in di_216 + 0x0001 : word16)
  Class: Eq_153
  DataType: (memptr (ptr Eq_179) Eq_153)
  OrigDataType: word16
T_217: (in 0x0001 : word16)
  Class: Eq_217
  DataType: word16
  OrigDataType: word16
T_218: (in si_219 + 0x0001 : word16)
  Class: Eq_155
  DataType: (memptr (ptr Eq_15) Eq_155)
  OrigDataType: word16
T_219: (in (byte) dx_234 : byte)
  Class: Eq_188
  DataType: bcu8
  OrigDataType: byte
T_220: (in 0x0000 : word16)
  Class: Eq_183
  DataType: cups16
  OrigDataType: word16
T_221: (in dx_234 != 0x0000 : bool)
  Class: Eq_221
  DataType: bool
  OrigDataType: bool
T_222: (in 0x0000 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_223: (in 0x00 : byte)
  Class: Eq_171
  DataType: byte
  OrigDataType: byte
T_224: (in 0x01A1 : word16)
  Class: Eq_224
  DataType: (memptr (ptr Eq_15) byte)
  OrigDataType: (memptr T_15 (struct (0 T_225 t0000)))
T_225: (in Mem284[ds:0x01A1:byte] : byte)
  Class: Eq_225
  DataType: byte
  OrigDataType: byte
T_226: (in 0x28 : byte)
  Class: Eq_226
  DataType: byte
  OrigDataType: byte
T_227: (in ds->b01A1 ^ 0x28 : byte)
  Class: Eq_225
  DataType: byte
  OrigDataType: byte
T_228: (in 0x01A1 : word16)
  Class: Eq_228
  DataType: (memptr (ptr Eq_15) byte)
  OrigDataType: (memptr T_15 (struct (0 T_229 t0000)))
T_229: (in Mem292[ds:0x01A1:byte] : byte)
  Class: Eq_225
  DataType: byte
  OrigDataType: byte
T_230: (in 0x0001 : word16)
  Class: Eq_230
  DataType: word16
  OrigDataType: word16
T_231: (in cx_10 - 0x0001 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_232: (in (byte) cx_10 : byte)
  Class: Eq_157
  DataType: bcu8
  OrigDataType: byte
T_233: (in 0x0000 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_234: (in cx_10 != 0x0000 : bool)
  Class: Eq_234
  DataType: bool
  OrigDataType: bool
T_235: (in 0x0140 : word16)
  Class: Eq_183
  DataType: cups16
  OrigDataType: word16
T_236: (in 0x40 : byte)
  Class: Eq_188
  DataType: bcu8
  OrigDataType: byte
T_237: (in 0x01 : byte)
  Class: Eq_237
  DataType: byte
  OrigDataType: byte
T_238: (in cl_220 & 0x01 : byte)
  Class: Eq_238
  DataType: byte
  OrigDataType: byte
T_239: (in 0x00 : byte)
  Class: Eq_238
  DataType: byte
  OrigDataType: byte
T_240: (in (cl_220 & 0x01) == 0x00 : bool)
  Class: Eq_240
  DataType: bool
  OrigDataType: bool
T_241: (in 0x01A8 : word16)
  Class: Eq_241
  DataType: (memptr (ptr Eq_15) bcu8)
  OrigDataType: (memptr T_15 (struct (0 T_242 t0000)))
T_242: (in Mem298[ds:0x01A8:byte] : byte)
  Class: Eq_188
  DataType: bcu8
  OrigDataType: byte
T_243: (in 0x0101 : word16)
  Class: Eq_243
  DataType: word16
  OrigDataType: word16
T_244: (in bp_355 + 0x0101 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_245: (in __inb : ptr32)
  Class: Eq_245
  DataType: (ptr Eq_245)
  OrigDataType: (ptr (fn T_247 (T_246)))
T_246: (in 0x60 : byte)
  Class: Eq_246
  DataType: byte
  OrigDataType: byte
T_247: (in __inb(0x60) : byte)
  Class: Eq_247
  DataType: byte
  OrigDataType: byte
T_248: (in DPB(ax_103, __inb(0x60), 0, 8) : word16)
  Class: Eq_248
  DataType: word16
  OrigDataType: word16
T_249: (in 0x0001 : word16)
  Class: Eq_248
  DataType: word16
  OrigDataType: word16
T_250: (in DPB(ax_103, __inb(0x60), 0, 8) != 0x0001 : bool)
  Class: Eq_250
  DataType: bool
  OrigDataType: bool
T_251: (in __outb : ptr32)
  Class: Eq_251
  DataType: (ptr Eq_251)
  OrigDataType: (ptr (fn T_254 (T_252, T_253)))
T_252: (in 0x03C8 : word16)
  Class: Eq_252
  DataType: word16
  OrigDataType: word16
T_253: (in 0x00 : byte)
  Class: Eq_253
  DataType: byte
  OrigDataType: byte
T_254: (in __outb(0x03C8, 0x00) : void)
  Class: Eq_254
  DataType: void
  OrigDataType: void
T_255: (in 0x0000 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_256: (in 0x00 : byte)
  Class: Eq_107
  DataType: byte
  OrigDataType: byte
T_257: (in rLoc2_59 + 1 : real64)
  Class: Eq_257
  DataType: real64
  OrigDataType: real64
T_258:
  Class: Eq_258
  DataType: Eq_258
  OrigDataType: 
T_259:
  Class: Eq_259
  DataType: Eq_259
  OrigDataType: 
T_260:
  Class: Eq_260
  DataType: Eq_260
  OrigDataType: 
*/
typedef Eq_179 Eq_1Eq_179 Eq_1Eq_15 Eq_1struct Globals {
	Eq_179 * ptrFFF80000;	// FFF80000
	Eq_179 * ptrFFFA0000;	// FFFA0000
	Eq_15 * ptr70000;	// 70000
} Eq_1;

typedef void (Eq_3)(byte);

typedef struct Eq_12 {	// size: 1 1
	int16 w0000;	// 0
	int16 w01FE;	// 1FE
} Eq_12;

typedef Eq_12 Eq_15Eq_32 Eq_15struct Eq_15 {
	Eq_12 t0000;	// 0
	byte b01A1;	// 1A1
	bcu8 b01A8;	// 1A8
	Eq_32 t01F8;	// 1F8
	int16 w01FC;	// 1FC
	int16 w01FE;	// 1FE
} Eq_15;

typedef union Eq_22 {
	real16 u0;
	real64 u1;
} Eq_22;

typedef Eq_26 (Eq_23)(real64);

typedef union Eq_26 {
	real16 u0;
	real64 u1;
} Eq_26;

typedef union Eq_29 {
	real16 u0;
	real64 u1;
} Eq_29;

typedef union Eq_32 {
	real16 u0;
	real32 u1;
} Eq_32;

typedef struct Eq_70 {
} Eq_70;

typedef union Eq_71 {
	Eq_258 Eq_70::* u0;
	Eq_260 u1;
} Eq_71;

typedef union Eq_79 {
	uint8 u0;
	ui16 u1;
} Eq_79;

typedef union Eq_83 {
	uint16 u0;
	byte u1;
} Eq_83;

typedef union Eq_86 {
	uint16 u0;
	bcu8 u1;
} Eq_86;

typedef void (Eq_100)(word16, Eq_83);

typedef byte (Eq_146)(word16);

typedef Eq_171 Eq_153struct Eq_153 {	// size: 1 1
	Eq_171 t0000;	// 0
} Eq_153;

typedef struct Eq_155 {	// size: 320 140
	byte b01FE;	// 1FE
} Eq_155;

typedef union Eq_171 {
	uint16 u0;
	byte u1;
} Eq_171;

typedef Eq_153 Eq_179struct Eq_179 {
	Eq_153 t0000;	// 0
} Eq_179;

typedef byte (Eq_245)(byte);

typedef void (Eq_251)(word16, byte);

typedef struct Eq_258 {
	word16 wFFFFFFF8;	// FFFFFFF8
} Eq_258;

typedef struct Eq_259 {
	word16 wFFFFFFFE;	// FFFFFFFE
} Eq_259;

typedef union Eq_260 {
	ptr16 u0;
	Eq_259 Eq_70::* u1;
} Eq_260;

