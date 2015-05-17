// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_199/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_213) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_7: (struct 0004 (0 Eq_28 t0000))
	T_7 (in bx_10 : word16)
	T_10 (in DPB(bx, 0xF0, 8, 8) : word16)
	T_42 (in bx_10 + 0x0004 : word16)
Eq_11: (union (int16 u0) (word32 u1))
	T_11 (in cx_11 : word16)
	T_12 (in 0x0100 : word16)
	T_15 (in Mem12[ss:0x0200:word16] : word16)
	T_18 (in Mem12[ss:0x0200:int16] : int16)
	T_40 (in cx_11 - 0x0001 : word16)
	T_45 (in 0x0000 : word16)
	T_131 (in Mem21[ss:0x0200:word16] : word16)
	T_147 (in Mem126[ss:0x0200:word16] : word16)
	T_203 (in Mem181[ss:0x0200:word32] : word32)
	T_205 (in Mem181[ss:0x0200:word32] + 0x00000001 : word32)
	T_207 (in Mem206[ss:0x0200:word32] : word32)
Eq_13: (segment (200 Eq_11 t0200) (204 word16 w0204))
	T_13 (in ss : selector)
Eq_14: (struct (0 Eq_11 t0000))
	T_14 (in 0x0200 : word16)
Eq_16: (fn Eq_24 (real16))
	T_16 (in sin : ptr32)
Eq_17: (struct (0 Eq_11 t0000))
	T_17 (in 0x0200 : word16)
Eq_19: (union (real16 u0) (real64 u1))
	T_19 (in (real64) Mem12[ss:0x0200:int16] : real64)
Eq_20: (segment (FFFFF000 (arr Eq_228) aFFFFF000) (1DC Eq_22 t01DC) (1E0 Eq_26 t01E0))
	T_20 (in ds : selector)
Eq_21: (struct (0 Eq_22 t0000))
	T_21 (in 0x01DC : word16)
Eq_22: (union (real16 u0) (real32 u1))
	T_22 (in Mem12[ds:0x01DC:real32] : real32)
Eq_24: (union (real16 u0) (real64 u1))
	T_24 (in sin((real64) Mem12[ss:0x0200:int16] * Mem12[ds:0x01DC:real32]) : real64)
Eq_25: (struct (0 Eq_26 t0000))
	T_25 (in 0x01E0 : word16)
Eq_26: (union (real16 u0) (real32 u1))
	T_26 (in Mem12[ds:0x01E0:real32] : real32)
Eq_28: (union (int16 u0) (int32 u1))
	T_28 (in (int16) (sin((real64) Mem12[ss:0x0200:int16] * Mem12[ds:0x01DC:real32]) * Mem12[ds:0x01E0:real32]) : int16)
	T_31 (in Mem19[ds:bx_10 + 0x0000:int16] : int16)
	T_34 (in Mem19[ds:bx_10 + 0x0000:word16] : word16)
	T_35 (in (int32) Mem19[ds:bx_10 + 0x0000:word16] : int32)
	T_38 (in Mem21[ds:bx_10 + 0x0000:word32] : word32)
Eq_47: (fn void (word16, byte))
	T_47 (in __outb : ptr32)
Eq_64: (fn void (word16, byte))
	T_64 (in __outb : ptr32)
Eq_67: (fn void (word16, byte))
	T_67 (in __outb : ptr32)
Eq_70: (fn void (word16, byte))
	T_70 (in __outb : ptr32)
Eq_88: (segment)
	T_88 (in cs : selector)
Eq_93: (struct 0001 (0 Eq_100 t0000) (1 byte b0001) (2 byte b0002))
	T_93 (in di_108 : word16)
	T_94 (in 0x0000 : word16)
	T_116 (in di_108 + 0x0001 : word16)
Eq_100: (union (uint16 u0) (byte u1))
	T_100 (in Mem126[ax_90:di_108 + 0x0000:byte] : byte)
	T_111 (in al_138 + Mem126[ax_90:di_108 + 0x0000:byte] + Mem126[ax_90:di_108 + 0x0001:byte] + Mem126[ax_90:di_108 + 0x0002:byte] >>u 0x02 : word16)
	T_114 (in Mem153[ax_90:di_108 + 0x0000:byte] : byte)
Eq_130: (struct (0 Eq_11 t0000))
	T_130 (in 0x0200 : word16)
Eq_139: (struct (0 word16 w0000))
	T_139 (in 0x0204 : word16)
Eq_146: (struct (0 Eq_11 t0000))
	T_146 (in 0x0200 : word16)
Eq_155: (struct (0 word16 w0000))
	T_155 (in 0x0204 : word16)
Eq_172: (fn word16 (word16))
	T_172 (in __inw : ptr32)
Eq_180: (fn word16 (word16))
	T_180 (in __inw : ptr32)
Eq_188: (union ((memptr (ptr Eq_13) (struct (FFFFFFFC word16 wFFFFFFFC))) u0) ((union (ptr16 u0) ((memptr (ptr Eq_13) (struct (FFFFFFFC word16 wFFFFFFFC))) u1)) u1))
	T_188 (in fp : ptr16)
Eq_196: (struct 0004 (0 word32 dw0000))
	T_196 (in si_184 : word16)
	T_197 (in 0x0000 : word16)
	T_221 (in si_184 + 0x0004 : word16)
Eq_198: (struct 0004 (0 word32 dw0000))
	T_198 (in di_185 : word16)
	T_199 (in 0x0000 : word16)
	T_223 (in di_185 + 0x0004 : word16)
Eq_202: (struct (0 Eq_11 t0000))
	T_202 (in 0x0200 : word16)
Eq_206: (struct (0 Eq_11 t0000))
	T_206 (in 0x0200 : word16)
Eq_208: (fn byte (byte))
	T_208 (in __inb : ptr32)
Eq_213: (segment (0 (arr Eq_230) a0000))
	T_213 (in 0xA000 : selector)
Eq_228: (struct 0004 (0 word16 w0000))
	T_228
	T_229
Eq_230: (struct 0004 (0 word32 dw0000))
	T_230
	T_231
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
T_7: (in bx_10 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_20) Eq_7)
  OrigDataType: (memptr T_20 (struct 0004 (0 T_28 t0000)))
T_8: (in bx : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0xF0 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in DPB(bx, 0xF0, 8, 8) : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_20) Eq_7)
  OrigDataType: word16
T_11: (in cx_11 : word16)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: word16
T_12: (in 0x0100 : word16)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: word16
T_13: (in ss : selector)
  Class: Eq_13
  DataType: (ptr Eq_13)
  OrigDataType: (ptr (segment (200 T_11 t0200) (204 T_138 t0204)))
T_14: (in 0x0200 : word16)
  Class: Eq_14
  DataType: (memptr (ptr Eq_13) Eq_14)
  OrigDataType: (memptr T_13 (struct (0 T_15 t0000)))
T_15: (in Mem12[ss:0x0200:word16] : word16)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: word16
T_16: (in sin : ptr32)
  Class: Eq_16
  DataType: (ptr Eq_16)
  OrigDataType: (ptr (fn T_24 (T_23)))
T_17: (in 0x0200 : word16)
  Class: Eq_17
  DataType: (memptr (ptr Eq_13) Eq_17)
  OrigDataType: (memptr T_13 (struct (0 T_18 t0000)))
T_18: (in Mem12[ss:0x0200:int16] : int16)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: int16
T_19: (in (real64) Mem12[ss:0x0200:int16] : real64)
  Class: Eq_19
  DataType: Eq_19
  OrigDataType: (union (real16 u0) (real64 u1))
T_20: (in ds : selector)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (segment (FFFFF000 (arr T_228) aFFFFF000) (1DC T_22 t01DC) (1E0 T_26 t01E0)))
T_21: (in 0x01DC : word16)
  Class: Eq_21
  DataType: (memptr (ptr Eq_20) Eq_21)
  OrigDataType: (memptr T_20 (struct (0 T_22 t0000)))
T_22: (in Mem12[ds:0x01DC:real32] : real32)
  Class: Eq_22
  DataType: Eq_22
  OrigDataType: (union (real16 u0) (real32 u1))
T_23: (in (real64) Mem12[ss:0x0200:int16] * Mem12[ds:0x01DC:real32] : word16)
  Class: Eq_23
  DataType: real16
  OrigDataType: real16
T_24: (in sin((real64) Mem12[ss:0x0200:int16] * Mem12[ds:0x01DC:real32]) : real64)
  Class: Eq_24
  DataType: Eq_24
  OrigDataType: (union (real16 u0) (real64 u1))
T_25: (in 0x01E0 : word16)
  Class: Eq_25
  DataType: (memptr (ptr Eq_20) Eq_25)
  OrigDataType: (memptr T_20 (struct (0 T_26 t0000)))
T_26: (in Mem12[ds:0x01E0:real32] : real32)
  Class: Eq_26
  DataType: Eq_26
  OrigDataType: (union (real16 u0) (real32 u1))
T_27: (in sin((real64) Mem12[ss:0x0200:int16] * Mem12[ds:0x01DC:real32]) * Mem12[ds:0x01E0:real32] : word16)
  Class: Eq_27
  DataType: real16
  OrigDataType: real16
T_28: (in (int16) (sin((real64) Mem12[ss:0x0200:int16] * Mem12[ds:0x01DC:real32]) * Mem12[ds:0x01E0:real32]) : int16)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: int16
T_29: (in 0x0000 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in bx_10 + 0x0000 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in Mem19[ds:bx_10 + 0x0000:int16] : int16)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: int16
T_32: (in 0x0000 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in bx_10 + 0x0000 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in Mem19[ds:bx_10 + 0x0000:word16] : word16)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: word16
T_35: (in (int32) Mem19[ds:bx_10 + 0x0000:word16] : int32)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: int32
T_36: (in 0x0000 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in bx_10 + 0x0000 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in Mem21[ds:bx_10 + 0x0000:word32] : word32)
  Class: Eq_28
  DataType: Eq_28
  OrigDataType: word32
T_39: (in 0x0001 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in cx_11 - 0x0001 : word16)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: word16
T_41: (in 0x0004 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in bx_10 + 0x0004 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_20) Eq_7)
  OrigDataType: word16
T_43: (in cl_28 : byte)
  Class: Eq_43
  DataType: bcu8
  OrigDataType: bcu8
T_44: (in (byte) cx_11 : byte)
  Class: Eq_43
  DataType: bcu8
  OrigDataType: byte
T_45: (in 0x0000 : word16)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: word16
T_46: (in cx_11 != 0x0000 : bool)
  Class: Eq_46
  DataType: bool
  OrigDataType: bool
T_47: (in __outb : ptr32)
  Class: Eq_47
  DataType: (ptr Eq_47)
  OrigDataType: (ptr (fn T_50 (T_48, T_49)))
T_48: (in 0x03C8 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in 0x00 : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_50: (in __outb(0x03C8, 0x00) : void)
  Class: Eq_50
  DataType: void
  OrigDataType: void
T_51: (in cx_33 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in 0x01 : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_53: (in DPB(cx_11, 0x01, 8, 8) : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_54: (in si_34 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in 0x0000 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_56: (in bh_217 : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_57: (in 0x00 : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_58: (in bl_219 : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_59: (in 0x00 : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_60: (in al_51 : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_61: (in ah_221 : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_62: (in 0xE1 : byte)
  Class: Eq_43
  DataType: bcu8
  OrigDataType: bcu8
T_63: (in cl_28 <u 0xE1 : bool)
  Class: Eq_63
  DataType: bool
  OrigDataType: bool
T_64: (in __outb : ptr32)
  Class: Eq_64
  DataType: (ptr Eq_64)
  OrigDataType: (ptr (fn T_66 (T_65, T_61)))
T_65: (in 0x03C9 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in __outb(0x03C9, ah_221) : void)
  Class: Eq_66
  DataType: void
  OrigDataType: void
T_67: (in __outb : ptr32)
  Class: Eq_67
  DataType: (ptr Eq_67)
  OrigDataType: (ptr (fn T_69 (T_68, T_58)))
T_68: (in 0x03C9 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in __outb(0x03C9, bl_219) : void)
  Class: Eq_69
  DataType: void
  OrigDataType: void
T_70: (in __outb : ptr32)
  Class: Eq_70
  DataType: (ptr Eq_70)
  OrigDataType: (ptr (fn T_72 (T_71, T_56)))
T_71: (in 0x03C9 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in __outb(0x03C9, bh_217) : void)
  Class: Eq_72
  DataType: void
  OrigDataType: void
T_73: (in 0x0001 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in cx_33 - 0x0001 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_75: (in (byte) cx_33 : byte)
  Class: Eq_43
  DataType: bcu8
  OrigDataType: byte
T_76: (in 0x0000 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_77: (in cx_33 != 0x0000 : bool)
  Class: Eq_77
  DataType: bool
  OrigDataType: bool
T_78: (in si_49 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in 0x003F : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in si_34 & 0x003F : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_81: (in (byte) si_49 : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_82: (in SLICE(si_49, byte, 8) : byte)
  Class: Eq_56
  DataType: byte
  OrigDataType: byte
T_83: (in 0x0002 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in si_49 + 0x0002 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_85: (in 0xC1 : byte)
  Class: Eq_43
  DataType: bcu8
  OrigDataType: bcu8
T_86: (in cl_28 <=u 0xC1 : bool)
  Class: Eq_86
  DataType: bool
  OrigDataType: bool
T_87: (in ax_90 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in cs : selector)
  Class: Eq_88
  DataType: (ptr Eq_88)
  OrigDataType: (ptr (segment))
T_89: (in SLICE(cs, byte, 8) : byte)
  Class: Eq_89
  DataType: byte
  OrigDataType: byte
T_90: (in 0x10 : byte)
  Class: Eq_90
  DataType: byte
  OrigDataType: byte
T_91: (in SLICE(cs, byte, 8) + 0x10 : byte)
  Class: Eq_91
  DataType: byte
  OrigDataType: byte
T_92: (in DPB(cs, SLICE(cs, byte, 8) + 0x10, 8, 8) : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_93: (in di_108 : word16)
  Class: Eq_93
  DataType: (memptr word16 Eq_93)
  OrigDataType: (memptr T_87 (struct 0001 (0 T_100 t0000) (1 T_104 t0001) (2 T_108 t0002)))
T_94: (in 0x0000 : word16)
  Class: Eq_93
  DataType: (memptr word16 Eq_93)
  OrigDataType: word16
T_95: (in dx_102 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in 0x00C8 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_97: (in al_138 : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_98: (in 0x0000 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in di_108 + 0x0000 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in Mem126[ax_90:di_108 + 0x0000:byte] : byte)
  Class: Eq_100
  DataType: Eq_100
  OrigDataType: byte
T_101: (in al_138 + Mem126[ax_90:di_108 + 0x0000:byte] : byte)
  Class: Eq_101
  DataType: byte
  OrigDataType: byte
T_102: (in 0x0001 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in di_108 + 0x0001 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in Mem126[ax_90:di_108 + 0x0001:byte] : byte)
  Class: Eq_104
  DataType: byte
  OrigDataType: byte
T_105: (in al_138 + Mem126[ax_90:di_108 + 0x0000:byte] + Mem126[ax_90:di_108 + 0x0001:byte] : byte)
  Class: Eq_105
  DataType: byte
  OrigDataType: byte
T_106: (in 0x0002 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in di_108 + 0x0002 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in Mem126[ax_90:di_108 + 0x0002:byte] : byte)
  Class: Eq_108
  DataType: byte
  OrigDataType: byte
T_109: (in al_138 + Mem126[ax_90:di_108 + 0x0000:byte] + Mem126[ax_90:di_108 + 0x0001:byte] + Mem126[ax_90:di_108 + 0x0002:byte] : byte)
  Class: Eq_109
  DataType: uint8
  OrigDataType: uint8
T_110: (in 0x02 : byte)
  Class: Eq_110
  DataType: uint8
  OrigDataType: uint8
T_111: (in al_138 + Mem126[ax_90:di_108 + 0x0000:byte] + Mem126[ax_90:di_108 + 0x0001:byte] + Mem126[ax_90:di_108 + 0x0002:byte] >>u 0x02 : word16)
  Class: Eq_100
  DataType: Eq_100
  OrigDataType: uint16
T_112: (in 0x0000 : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_113: (in di_108 + 0x0000 : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in Mem153[ax_90:di_108 + 0x0000:byte] : byte)
  Class: Eq_100
  DataType: Eq_100
  OrigDataType: byte
T_115: (in 0x0001 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in di_108 + 0x0001 : word16)
  Class: Eq_93
  DataType: (memptr word16 Eq_93)
  OrigDataType: word16
T_117: (in cx_109 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in 0x0001 : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in cx_109 - 0x0001 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_120: (in 0x0000 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_121: (in cx_109 != 0x0000 : bool)
  Class: Eq_121
  DataType: bool
  OrigDataType: bool
T_122: (in ax_140 : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_123: (in 0x0001 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in ax_140 - 0x0001 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in (byte) (ax_140 - 0x0001) : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_126: (in 0x0003 : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_127: (in cx_109 << 0x0003 : word16)
  Class: Eq_127
  DataType: ui16
  OrigDataType: ui16
T_128: (in 0xF000 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in SEQ(ds, 0xF000) : ptr32)
  Class: Eq_129
  DataType: ptr32
  OrigDataType: ptr32
T_130: (in 0x0200 : word16)
  Class: Eq_130
  DataType: (memptr (ptr Eq_13) Eq_130)
  OrigDataType: (memptr T_13 (struct (0 T_131 t0000)))
T_131: (in Mem21[ss:0x0200:word16] : word16)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: word16
T_132: (in dx_102 + Mem21[ss:0x0200:word16] : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in 0x00 : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_134: (in DPB(dx_102 + Mem21[ss:0x0200:word16], 0x00, 8, 8) : word16)
  Class: Eq_134
  DataType: ui16
  OrigDataType: ui16
T_135: (in 0x0004 : word16)
  Class: Eq_135
  DataType: ui16
  OrigDataType: ui16
T_136: (in DPB(dx_102 + Mem21[ss:0x0200:word16], 0x00, 8, 8) * 0x0004 : word16)
  Class: Eq_136
  DataType: ui16
  OrigDataType: ui16
T_137: (in SEQ(ds, 0xF000)[DPB(dx_102 + Mem21[ss:0x0200:word16], 0x00, 8, 8) * 0x0004] : word16)
  Class: Eq_137
  DataType: word16
  OrigDataType: word16
T_138: (in (cx_109 << 0x0003) + SEQ(ds, 0xF000)[DPB(dx_102 + Mem21[ss:0x0200:word16], 0x00, 8, 8) * 0x0004] : word16)
  Class: Eq_138
  DataType: word16
  OrigDataType: word16
T_139: (in 0x0204 : word16)
  Class: Eq_139
  DataType: (memptr (ptr Eq_13) Eq_139)
  OrigDataType: (memptr T_13 (struct (0 T_140 t0000)))
T_140: (in Mem126[ss:0x0204:word16] : word16)
  Class: Eq_138
  DataType: word16
  OrigDataType: word16
T_141: (in ax_135 : word16)
  Class: Eq_141
  DataType: word16
  OrigDataType: word16
T_142: (in 0x0003 : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_143: (in dx_102 << 0x0003 : word16)
  Class: Eq_143
  DataType: ui16
  OrigDataType: ui16
T_144: (in 0xF000 : word16)
  Class: Eq_144
  DataType: word16
  OrigDataType: word16
T_145: (in SEQ(ds, 0xF000) : ptr32)
  Class: Eq_145
  DataType: ptr32
  OrigDataType: ptr32
T_146: (in 0x0200 : word16)
  Class: Eq_146
  DataType: (memptr (ptr Eq_13) Eq_146)
  OrigDataType: (memptr T_13 (struct (0 T_147 t0000)))
T_147: (in Mem126[ss:0x0200:word16] : word16)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: word16
T_148: (in cx_109 + Mem126[ss:0x0200:word16] : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_149: (in 0x00 : byte)
  Class: Eq_149
  DataType: byte
  OrigDataType: byte
T_150: (in DPB(cx_109 + Mem126[ss:0x0200:word16], 0x00, 8, 8) : word16)
  Class: Eq_150
  DataType: ui16
  OrigDataType: ui16
T_151: (in 0x0004 : word16)
  Class: Eq_151
  DataType: ui16
  OrigDataType: ui16
T_152: (in DPB(cx_109 + Mem126[ss:0x0200:word16], 0x00, 8, 8) * 0x0004 : word16)
  Class: Eq_152
  DataType: ui16
  OrigDataType: ui16
T_153: (in SEQ(ds, 0xF000)[DPB(cx_109 + Mem126[ss:0x0200:word16], 0x00, 8, 8) * 0x0004] : word16)
  Class: Eq_137
  DataType: word16
  OrigDataType: word16
T_154: (in (dx_102 << 0x0003) + SEQ(ds, 0xF000)[DPB(cx_109 + Mem126[ss:0x0200:word16], 0x00, 8, 8) * 0x0004] : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in 0x0204 : word16)
  Class: Eq_155
  DataType: (memptr (ptr Eq_13) Eq_155)
  OrigDataType: (memptr T_13 (struct (0 T_156 t0000)))
T_156: (in Mem126[ss:0x0204:word16] : word16)
  Class: Eq_138
  DataType: word16
  OrigDataType: word16
T_157: (in (dx_102 << 0x0003) + SEQ(ds, 0xF000)[DPB(cx_109 + Mem126[ss:0x0200:word16], 0x00, 8, 8) * 0x0004] ^ Mem126[ss:0x0204:word16] : word16)
  Class: Eq_141
  DataType: word16
  OrigDataType: word16
T_158: (in al_136 : byte)
  Class: Eq_158
  DataType: byte
  OrigDataType: byte
T_159: (in (byte) ax_135 : byte)
  Class: Eq_158
  DataType: byte
  OrigDataType: byte
T_160: (in 0x40 : byte)
  Class: Eq_160
  DataType: byte
  OrigDataType: byte
T_161: (in al_136 & 0x40 : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_162: (in al_136 & 0x40 : byte)
  Class: Eq_162
  DataType: byte
  OrigDataType: byte
T_163: (in DPB(ax_135, al_136 & 0x40, 0, 8) : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_164: (in al_136 & 0x40 : byte)
  Class: Eq_164
  DataType: byte
  OrigDataType: byte
T_165: (in 0x00 : byte)
  Class: Eq_164
  DataType: byte
  OrigDataType: byte
T_166: (in (al_136 & 0x40) == 0x00 : bool)
  Class: Eq_166
  DataType: bool
  OrigDataType: bool
T_167: (in 0x0001 : word16)
  Class: Eq_167
  DataType: word16
  OrigDataType: word16
T_168: (in dx_102 - 0x0001 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_169: (in 0x0000 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_170: (in dx_102 != 0x0000 : bool)
  Class: Eq_170
  DataType: bool
  OrigDataType: bool
T_171: (in 0x0140 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_172: (in __inw : ptr32)
  Class: Eq_172
  DataType: (ptr Eq_172)
  OrigDataType: (ptr (fn T_174 (T_173)))
T_173: (in 0x03DA : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_174: (in __inw(0x03DA) : word16)
  Class: Eq_174
  DataType: word16
  OrigDataType: word16
T_175: (in (byte) __inw(0x03DA) : byte)
  Class: Eq_175
  DataType: byte
  OrigDataType: byte
T_176: (in 0x08 : byte)
  Class: Eq_176
  DataType: byte
  OrigDataType: byte
T_177: (in (byte) __inw(0x03DA) & 0x08 : byte)
  Class: Eq_177
  DataType: byte
  OrigDataType: byte
T_178: (in 0x00 : byte)
  Class: Eq_177
  DataType: byte
  OrigDataType: byte
T_179: (in ((byte) __inw(0x03DA) & 0x08) != 0x00 : bool)
  Class: Eq_179
  DataType: bool
  OrigDataType: bool
T_180: (in __inw : ptr32)
  Class: Eq_180
  DataType: (ptr Eq_180)
  OrigDataType: (ptr (fn T_182 (T_181)))
T_181: (in 0x03DA : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_182: (in __inw(0x03DA) : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_183: (in (byte) __inw(0x03DA) : byte)
  Class: Eq_183
  DataType: byte
  OrigDataType: byte
T_184: (in 0x08 : byte)
  Class: Eq_184
  DataType: byte
  OrigDataType: byte
T_185: (in (byte) __inw(0x03DA) & 0x08 : byte)
  Class: Eq_185
  DataType: byte
  OrigDataType: byte
T_186: (in 0x00 : byte)
  Class: Eq_185
  DataType: byte
  OrigDataType: byte
T_187: (in ((byte) __inw(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_187
  DataType: bool
  OrigDataType: bool
T_188: (in fp : ptr16)
  Class: Eq_188
  DataType: Eq_188
  OrigDataType: (union ((union (ptr16 u0) ((memptr T_13 (struct (FFFFFFFC T_195 tFFFFFFFC))) u1)) u0) ((memptr T_13 (struct (FFFFFFFC T_191 tFFFFFFFC))) u1))
T_189: (in 0x0004 : word16)
  Class: Eq_189
  DataType: word16
  OrigDataType: word16
T_190: (in fp - 0x0004 : word16)
  Class: Eq_190
  DataType: word16
  OrigDataType: word16
T_191: (in Mem177[ss:fp - 0x0004:word16] : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_192: (in 0xA000 : word16)
  Class: Eq_192
  DataType: word16
  OrigDataType: word16
T_193: (in 0x0004 : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_194: (in fp - 0x0004 : word16)
  Class: Eq_194
  DataType: word16
  OrigDataType: word16
T_195: (in Mem181[ss:fp - 0x0004:word16] : word16)
  Class: Eq_192
  DataType: word16
  OrigDataType: word16
T_196: (in si_184 : word16)
  Class: Eq_196
  DataType: (memptr (ptr Eq_213) Eq_196)
  OrigDataType: (memptr T_213 (struct 0004 (0 T_216 t0000)))
T_197: (in 0x0000 : word16)
  Class: Eq_196
  DataType: (memptr (ptr Eq_213) Eq_196)
  OrigDataType: word16
T_198: (in di_185 : word16)
  Class: Eq_198
  DataType: (memptr (ptr Eq_213) Eq_198)
  OrigDataType: (memptr T_213 (struct 0004 (0 T_219 t0000)))
T_199: (in 0x0000 : word16)
  Class: Eq_198
  DataType: (memptr (ptr Eq_213) Eq_198)
  OrigDataType: word16
T_200: (in cx_188 : word16)
  Class: Eq_200
  DataType: word16
  OrigDataType: word16
T_201: (in 0x3E80 : word16)
  Class: Eq_200
  DataType: word16
  OrigDataType: word16
T_202: (in 0x0200 : word16)
  Class: Eq_202
  DataType: (memptr (ptr Eq_13) Eq_202)
  OrigDataType: (memptr T_13 (struct (0 T_203 t0000)))
T_203: (in Mem181[ss:0x0200:word32] : word32)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: word32
T_204: (in 0x00000001 : word32)
  Class: Eq_204
  DataType: word32
  OrigDataType: word32
T_205: (in Mem181[ss:0x0200:word32] + 0x00000001 : word32)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: word32
T_206: (in 0x0200 : word16)
  Class: Eq_206
  DataType: (memptr (ptr Eq_13) Eq_206)
  OrigDataType: (memptr T_13 (struct (0 T_207 t0000)))
T_207: (in Mem206[ss:0x0200:word32] : word32)
  Class: Eq_11
  DataType: Eq_11
  OrigDataType: word32
T_208: (in __inb : ptr32)
  Class: Eq_208
  DataType: (ptr Eq_208)
  OrigDataType: (ptr (fn T_210 (T_209)))
T_209: (in 0x60 : byte)
  Class: Eq_209
  DataType: byte
  OrigDataType: byte
T_210: (in __inb(0x60) : byte)
  Class: Eq_210
  DataType: byte
  OrigDataType: byte
T_211: (in 0x01 : byte)
  Class: Eq_210
  DataType: byte
  OrigDataType: byte
T_212: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_212
  DataType: bool
  OrigDataType: bool
T_213: (in 0xA000 : selector)
  Class: Eq_213
  DataType: (ptr Eq_213)
  OrigDataType: (ptr (segment (0 (arr T_230) a0000)))
T_214: (in 0x0000 : word16)
  Class: Eq_214
  DataType: word16
  OrigDataType: word16
T_215: (in si_184 + 0x0000 : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_216: (in Mem181[0xA000:si_184 + 0x0000:word32] : word32)
  Class: Eq_216
  DataType: word32
  OrigDataType: word32
T_217: (in 0x0000 : word16)
  Class: Eq_217
  DataType: word16
  OrigDataType: word16
T_218: (in di_185 + 0x0000 : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_219: (in Mem197[0xA000:di_185 + 0x0000:word32] : word32)
  Class: Eq_216
  DataType: word32
  OrigDataType: word32
T_220: (in 0x0004 : word16)
  Class: Eq_220
  DataType: word16
  OrigDataType: word16
T_221: (in si_184 + 0x0004 : word16)
  Class: Eq_196
  DataType: (memptr (ptr Eq_213) Eq_196)
  OrigDataType: word16
T_222: (in 0x0004 : word16)
  Class: Eq_222
  DataType: word16
  OrigDataType: word16
T_223: (in di_185 + 0x0004 : word16)
  Class: Eq_198
  DataType: (memptr (ptr Eq_213) Eq_198)
  OrigDataType: word16
T_224: (in 0x0001 : word16)
  Class: Eq_224
  DataType: word16
  OrigDataType: word16
T_225: (in cx_188 - 0x0001 : word16)
  Class: Eq_200
  DataType: word16
  OrigDataType: word16
T_226: (in 0x0000 : word16)
  Class: Eq_200
  DataType: word16
  OrigDataType: word16
T_227: (in cx_188 == 0x0000 : bool)
  Class: Eq_227
  DataType: bool
  OrigDataType: bool
T_228:
  Class: Eq_228
  DataType: Eq_228
  OrigDataType: (struct 0004 (0 T_137 t0000))
T_229:
  Class: Eq_228
  DataType: Eq_228
  OrigDataType: (struct 0004 (0 T_153 t0000))
T_230:
  Class: Eq_230
  DataType: Eq_230
  OrigDataType: (struct 0004 (0 T_216 t0000))
T_231:
  Class: Eq_230
  DataType: Eq_230
  OrigDataType: (struct 0004 (0 T_219 t0000))
*/
typedef  Eq_1struct Globals {
	 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef  Eq_7struct  {	// size: 4 4
	 t0000;	// 0
} Eq_7;

typedef union  {
	int16 u0;
	word32 u1;
} Eq_11;

typedef  Eq_13struct  {
	 t0200;	// 200
	word16 w0204;	// 204
} Eq_13;

typedef  Eq_14struct  {
	 t0000;	// 0
} Eq_14;

typedef  (Eq_16)(real16);

typedef  Eq_17struct  {
	 t0000;	// 0
} Eq_17;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_19;

typedef  Eq_20[]struct  {
	 aFFFFF000[];	// FFFFF000
	 t01DC;	// 1DC
	 t01E0;	// 1E0
} Eq_20;

typedef  Eq_21struct  {
	 t0000;	// 0
} Eq_21;

typedef union  {
	real16 u0;
	real32 u1;
} Eq_22;

typedef union  {
	real16 u0;
	real64 u1;
} Eq_24;

typedef  Eq_25struct  {
	 t0000;	// 0
} Eq_25;

typedef union  {
	real16 u0;
	real32 u1;
} Eq_26;

typedef union  {
	int16 u0;
	int32 u1;
} Eq_28;

typedef void (Eq_47)(word16, byte);

typedef void (Eq_64)(word16, byte);

typedef void (Eq_67)(word16, byte);

typedef void (Eq_70)(word16, byte);

typedef struct  {
} Eq_88;

typedef  Eq_93struct  {	// size: 1 1
	 t0000;	// 0
	byte b0001;	// 1
	byte b0002;	// 2
} Eq_93;

typedef union  {
	uint16 u0;
	byte u1;
} Eq_100;

typedef  Eq_130struct  {
	 t0000;	// 0
} Eq_130;

typedef struct  {
	word16 w0000;	// 0
} Eq_139;

typedef  Eq_146struct  {
	 t0000;	// 0
} Eq_146;

typedef struct  {
	word16 w0000;	// 0
} Eq_155;

typedef word16 (Eq_172)(word16);

typedef word16 (Eq_180)(word16);

typedef union  {
	struct <anonymous> Eq_13::* u0;
	union <anonymous> u1;
} Eq_188;

typedef struct  {	// size: 4 4
	word32 dw0000;	// 0
} Eq_196;

typedef struct  {	// size: 4 4
	word32 dw0000;	// 0
} Eq_198;

typedef  Eq_202struct  {
	 t0000;	// 0
} Eq_202;

typedef  Eq_206struct  {
	 t0000;	// 0
} Eq_206;

typedef byte (Eq_208)(byte);

typedef  Eq_213[]struct  {
	 a0000[];	// 0
} Eq_213;

typedef struct  {	// size: 4 4
	word16 w0000;	// 0
} Eq_228;

typedef struct  {	// size: 4 4
	word32 dw0000;	// 0
} Eq_230;

