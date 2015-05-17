// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_212/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (70000 (ptr Eq_80) ptr70000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_3: (fn void (byte))
	T_3 (in bios_video_set_mode : ptr32)
	T_4 (in signature of bios_video_set_mode : void)
Eq_8: (fn void (word16, byte))
	T_8 (in __outb : ptr32)
Eq_12: (fn void (word16, byte))
	T_12 (in __outb : ptr32)
Eq_16: (fn void (word16, byte))
	T_16 (in __outb : ptr32)
Eq_20: (fn void (word16, byte))
	T_20 (in __outb : ptr32)
Eq_24: (fn void (word16, byte))
	T_24 (in __outb : ptr32)
Eq_34: (union "Eq_34" (uint8 u0) (ui16 u1))
	T_34 (in al_103 : Eq_34)
	T_36 (in al_100 << cl_337 : word16)
Eq_37: (union "Eq_37" (uint16 u0) (byte u1))
	T_37 (in al_104 : Eq_37)
	T_39 (in al_103 >>u 0x01 : word16)
	T_58 (in 0x3F : byte)
Eq_40: (union "Eq_40" (uint16 u0) (bcu8 u1))
	T_40 (in al_103 >>u 0x01 : word16)
	T_41 (in 0x3F : byte)
Eq_49: (fn void (word16, Eq_37))
	T_49 (in __outb : ptr32)
Eq_77: (struct "Eq_77" 0001 (0 int16 w0000) (1F8 int16 w01F8))
	T_77 (in di_140 : (memptr (ptr Eq_80) Eq_77))
	T_78 (in 0x0000 : word16)
	T_115 (in di_140 + 0x0001 : word16)
Eq_80: (segment "Eq_80" (0 Eq_77 t0000) (1AE byte b01AE) (1F2 Eq_97 t01F2) (1F6 int16 w01F6) (1F8 int16 w01F8))
	T_80 (in ds : (ptr Eq_80))
	T_102 (in 0x7000 : selector)
Eq_87: (union "Eq_87" (real16 u0) (real64 u1))
	T_87 (in rLoc4_171 : Eq_87)
	T_98 (in sqrt(rLoc4_165 + rLoc4_165 * rLoc4_165) / (real64) ds->w01F6 + ds->t01F2 : word16)
Eq_88: (fn Eq_91 (real64))
	T_88 (in sqrt : ptr32)
Eq_91: (union "Eq_91" (real16 u0) (real64 u1))
	T_91 (in sqrt(rLoc4_165 + rLoc4_165 * rLoc4_165) : real64)
Eq_94: (union "Eq_94" (real16 u0) (real64 u1))
	T_94 (in (real64) ds->w01F6 : real64)
Eq_97: (union "Eq_97" (real16 u0) (real32 u1))
	T_97 (in Mem0[ds:0x01F2:real32] : real32)
Eq_131: (fn byte (word16))
	T_131 (in __inb : ptr32)
Eq_138: (segment "Eq_138" (0 Eq_142 t0000))
	T_138 (in es_220 : (ptr Eq_138))
	T_139 (in 0xA000 : word16)
	T_140 (in gs_224 : (ptr Eq_138))
	T_141 (in 0x8000 : word16)
	T_197 (in 0xB000 : word16)
	T_198 (in 0x9000 : word16)
Eq_142: (struct "Eq_142" 0001 (0 Eq_161 t0000))
	T_142 (in di_226 : (memptr (ptr Eq_138) Eq_142))
	T_143 (in 0x0000 : word16)
	T_184 (in di_226 + 0x0001 : word16)
	T_185 (in 0x0000 : word16)
Eq_144: (struct "Eq_144" 0001 (1F8 byte b01F8))
	T_144 (in si_229 : (memptr (ptr Eq_80) Eq_144))
	T_145 (in 0x0000 : word16)
	T_167 (in si_229 - 0x0140 : word16)
	T_193 (in si_229 + 0x0001 : word16)
Eq_161: (union "Eq_161" (uint16 u0) (byte u1))
	T_161 (in al_273 : Eq_161)
	T_163 (in al_272 >>u 0x01 : word16)
	T_179 (in Mem284[gs_224:di_226 + 0x0000:byte] : byte)
	T_182 (in Mem285[es_220:di_226 + 0x0000:byte] : byte)
	T_188 (in 0x00 : byte)
Eq_214: (fn byte (byte))
	T_214 (in __inb : ptr32)
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
T_8: (in __outb : ptr32)
  Class: Eq_8
  DataType: (ptr Eq_8)
  OrigDataType: (ptr (fn T_11 (T_9, T_10)))
T_9: (in 0x03D4 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in 0x09 : byte)
  Class: Eq_10
  DataType: byte
  OrigDataType: byte
T_11: (in __outb(0x03D4, 0x09) : void)
  Class: Eq_11
  DataType: void
  OrigDataType: void
T_12: (in __outb : ptr32)
  Class: Eq_12
  DataType: (ptr Eq_12)
  OrigDataType: (ptr (fn T_15 (T_13, T_14)))
T_13: (in 0x03D5 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in 0x00 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_15: (in __outb(0x03D5, 0x00) : void)
  Class: Eq_15
  DataType: void
  OrigDataType: void
T_16: (in __outb : ptr32)
  Class: Eq_16
  DataType: (ptr Eq_16)
  OrigDataType: (ptr (fn T_19 (T_17, T_18)))
T_17: (in 0x03D5 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in 0x06 : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_19: (in __outb(0x03D5, 0x06) : void)
  Class: Eq_19
  DataType: void
  OrigDataType: void
T_20: (in __outb : ptr32)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (fn T_23 (T_21, T_22)))
T_21: (in 0x03D6 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in 0x01 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in __outb(0x03D6, 0x01) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_24: (in __outb : ptr32)
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: (ptr (fn T_27 (T_25, T_26)))
T_25: (in 0x03C8 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in 0x00 : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in __outb(0x03C8, 0x00) : void)
  Class: Eq_27
  DataType: void
  OrigDataType: void
T_28: (in ax_123 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in 0x0000 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_30: (in al_100 : int8)
  Class: Eq_30
  DataType: int8
  OrigDataType: int8
T_31: (in 0x00 : byte)
  Class: Eq_30
  DataType: int8
  OrigDataType: byte
T_32: (in dx_118 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in 0x03C9 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_34: (in al_103 : Eq_34)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: uint8
T_35: (in cl_337 : uint8)
  Class: Eq_35
  DataType: uint8
  OrigDataType: uint8
T_36: (in al_100 << cl_337 : word16)
  Class: Eq_34
  DataType: Eq_34
  OrigDataType: ui16
T_37: (in al_104 : Eq_37)
  Class: Eq_37
  DataType: Eq_37
  OrigDataType: byte
T_38: (in 0x01 : byte)
  Class: Eq_38
  DataType: uint8
  OrigDataType: uint8
T_39: (in al_103 >>u 0x01 : word16)
  Class: Eq_37
  DataType: Eq_37
  OrigDataType: uint16
T_40: (in al_103 >>u 0x01 : word16)
  Class: Eq_40
  DataType: Eq_40
  OrigDataType: uint16
T_41: (in 0x3F : byte)
  Class: Eq_40
  DataType: bcu8
  OrigDataType: bcu8
T_42: (in al_103 >>u 0x01 <=u 0x3F : bool)
  Class: Eq_42
  DataType: bool
  OrigDataType: bool
T_43: (in 0x3F : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in al_100 & 0x3F : byte)
  Class: Eq_30
  DataType: int8
  OrigDataType: byte
T_45: (in 0x01 : byte)
  Class: Eq_45
  DataType: uint8
  OrigDataType: uint8
T_46: (in cl_337 >>u 0x01 : word16)
  Class: Eq_46
  DataType: uint16
  OrigDataType: uint16
T_47: (in 0x01 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in cl_337 >>u 0x01 ^ 0x01 : byte)
  Class: Eq_35
  DataType: uint8
  OrigDataType: byte
T_49: (in __outb : ptr32)
  Class: Eq_49
  DataType: (ptr Eq_49)
  OrigDataType: (ptr (fn T_50 (T_32, T_37)))
T_50: (in __outb(dx_118, al_104) : void)
  Class: Eq_50
  DataType: void
  OrigDataType: void
T_51: (in ax_341 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_52: (in (byte) ax_341 : byte)
  Class: Eq_30
  DataType: int8
  OrigDataType: byte
T_53: (in cx : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in 0x0001 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in cx - 0x0001 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_56: (in 0x0000 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_57: (in cx != 0x0000 : bool)
  Class: Eq_57
  DataType: bool
  OrigDataType: bool
T_58: (in 0x3F : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_59: (in 0x0001 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in cx - 0x0001 : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in (byte) (cx - 0x0001) : byte)
  Class: Eq_35
  DataType: uint8
  OrigDataType: byte
T_62: (in 0x40 : byte)
  Class: Eq_62
  DataType: byte
  OrigDataType: byte
T_63: (in al_100 & 0x40 : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_64: (in 0x00 : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_65: (in (al_100 & 0x40) == 0x00 : bool)
  Class: Eq_65
  DataType: bool
  OrigDataType: bool
T_66: (in 0x01 : byte)
  Class: Eq_66
  DataType: byte
  OrigDataType: byte
T_67: (in al_100 + 0x01 : byte)
  Class: Eq_30
  DataType: int8
  OrigDataType: byte
T_68: (in al_100 + 0x01 : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_69: (in DPB(ax_341, al_100 + 0x01, 0, 8) : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_70: (in 0x01 : byte)
  Class: Eq_30
  DataType: int8
  OrigDataType: int8
T_71: (in al_100 >= 0x01 : bool)
  Class: Eq_71
  DataType: bool
  OrigDataType: bool
T_72: (in 0x03 : byte)
  Class: Eq_72
  DataType: byte
  OrigDataType: byte
T_73: (in DPB(cx, 0x03, 0, 8) : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_74: (in cx_139 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in 0xC8 : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_76: (in DPB(cx, 0xC8, 0, 8) : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_77: (in di_140 : (memptr (ptr Eq_80) Eq_77))
  Class: Eq_77
  DataType: (memptr (ptr Eq_80) Eq_77)
  OrigDataType: (memptr T_80 (struct 0001 (0 T_105 t0000) (1F8 T_111 t01F8)))
T_78: (in 0x0000 : word16)
  Class: Eq_77
  DataType: (memptr (ptr Eq_80) Eq_77)
  OrigDataType: word16
T_79: (in rLoc2_146 : real64)
  Class: Eq_79
  DataType: real64
  OrigDataType: real64
T_80: (in ds : (ptr Eq_80))
  Class: Eq_80
  DataType: (ptr Eq_80)
  OrigDataType: (ptr (segment (1AE T_212 t01AE) (1F2 T_97 t01F2) (1F6 T_93 t01F6) (1F8 T_82 t01F8)))
T_81: (in 0x01F8 : word16)
  Class: Eq_81
  DataType: (memptr (ptr Eq_80) int16)
  OrigDataType: (memptr T_80 (struct (0 T_82 t0000)))
T_82: (in Mem0[ds:0x01F8:int16] : int16)
  Class: Eq_82
  DataType: int16
  OrigDataType: int16
T_83: (in (real64) ds->w01F8 : real64)
  Class: Eq_79
  DataType: real64
  OrigDataType: real64
T_84: (in rLoc4_165 : real64)
  Class: Eq_84
  DataType: real64
  OrigDataType: real64
T_85: (in rLoc3_158 : real64)
  Class: Eq_85
  DataType: real64
  OrigDataType: real64
T_86: (in rLoc3_158 * rLoc3_158 : real64)
  Class: Eq_84
  DataType: real64
  OrigDataType: real64
T_87: (in rLoc4_171 : Eq_87)
  Class: Eq_87
  DataType: Eq_87
  OrigDataType: real64
T_88: (in sqrt : ptr32)
  Class: Eq_88
  DataType: (ptr Eq_88)
  OrigDataType: (ptr (fn T_91 (T_90)))
T_89: (in rLoc4_165 * rLoc4_165 : real64)
  Class: Eq_89
  DataType: real64
  OrigDataType: real64
T_90: (in rLoc4_165 + rLoc4_165 * rLoc4_165 : real64)
  Class: Eq_90
  DataType: real64
  OrigDataType: real64
T_91: (in sqrt(rLoc4_165 + rLoc4_165 * rLoc4_165) : real64)
  Class: Eq_91
  DataType: Eq_91
  OrigDataType: (union (real16 u0) (real64 u1))
T_92: (in 0x01F6 : word16)
  Class: Eq_92
  DataType: (memptr (ptr Eq_80) int16)
  OrigDataType: (memptr T_80 (struct (0 T_93 t0000)))
T_93: (in Mem0[ds:0x01F6:word16] : word16)
  Class: Eq_93
  DataType: int16
  OrigDataType: word16
T_94: (in (real64) ds->w01F6 : real64)
  Class: Eq_94
  DataType: Eq_94
  OrigDataType: (union (real16 u0) (real64 u1))
T_95: (in sqrt(rLoc4_165 + rLoc4_165 * rLoc4_165) / (real64) ds->w01F6 : word16)
  Class: Eq_95
  DataType: real16
  OrigDataType: real16
T_96: (in 0x01F2 : word16)
  Class: Eq_96
  DataType: (memptr (ptr Eq_80) Eq_97)
  OrigDataType: (memptr T_80 (struct (0 T_97 t0000)))
T_97: (in Mem0[ds:0x01F2:real32] : real32)
  Class: Eq_97
  DataType: Eq_97
  OrigDataType: (union (real16 u0) (real32 u1))
T_98: (in sqrt(rLoc4_165 + rLoc4_165 * rLoc4_165) / (real64) ds->w01F6 + ds->t01F2 : word16)
  Class: Eq_87
  DataType: Eq_87
  OrigDataType: real16
T_99: (in rLoc4_171 / rLoc4_171 : real64)
  Class: Eq_99
  DataType: real64
  OrigDataType: real64
T_100: (in rLoc4_171 / rLoc4_171 + rLoc3_158 : real64)
  Class: Eq_100
  DataType: real64
  OrigDataType: real64
T_101: (in (int16) (rLoc4_171 / rLoc4_171 + rLoc3_158) : int16)
  Class: Eq_101
  DataType: int16
  OrigDataType: int16
T_102: (in 0x7000 : selector)
  Class: Eq_80
  DataType: (ptr Eq_80)
  OrigDataType: (ptr (segment))
T_103: (in 0x0000 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in di_140 + 0x0000 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in Mem175[0x7000:di_140 + 0x0000:int16] : int16)
  Class: Eq_101
  DataType: int16
  OrigDataType: int16
T_106: (in rLoc2_146 / rLoc4_171 : real64)
  Class: Eq_106
  DataType: real64
  OrigDataType: real64
T_107: (in rLoc2_146 / rLoc4_171 + rLoc2_146 : real64)
  Class: Eq_107
  DataType: real64
  OrigDataType: real64
T_108: (in (int16) (rLoc2_146 / rLoc4_171 + rLoc2_146) : int16)
  Class: Eq_108
  DataType: int16
  OrigDataType: int16
T_109: (in 0x01F8 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in di_140 + 0x01F8 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in Mem178[ds:di_140 + 0x01F8:int16] : int16)
  Class: Eq_108
  DataType: int16
  OrigDataType: int16
T_112: (in 1 : real64)
  Class: Eq_112
  DataType: real64
  OrigDataType: real64
T_113: (in rLoc3_158 + 1 : real64)
  Class: Eq_85
  DataType: real64
  OrigDataType: real64
T_114: (in 0x0001 : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_115: (in di_140 + 0x0001 : word16)
  Class: Eq_77
  DataType: (memptr (ptr Eq_80) Eq_77)
  OrigDataType: word16
T_116: (in dx_159 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in 0x0001 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in dx_159 - 0x0001 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_119: (in 0x0000 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_120: (in dx_159 != 0x0000 : bool)
  Class: Eq_120
  DataType: bool
  OrigDataType: bool
T_121: (in 1 : real64)
  Class: Eq_121
  DataType: real64
  OrigDataType: real64
T_122: (in rLoc2_146 + 1 : real64)
  Class: Eq_79
  DataType: real64
  OrigDataType: real64
T_123: (in 0x0001 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in cx_139 - 0x0001 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_125: (in 0x0000 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_126: (in cx_139 != 0x0000 : bool)
  Class: Eq_126
  DataType: bool
  OrigDataType: bool
T_127: (in 0x01F6 : word16)
  Class: Eq_127
  DataType: (memptr (ptr Eq_80) int16)
  OrigDataType: (memptr T_80 (struct (0 T_128 t0000)))
T_128: (in Mem0[ds:0x01F6:int16] : int16)
  Class: Eq_93
  DataType: int16
  OrigDataType: int16
T_129: (in (real64) ds->w01F6 : real64)
  Class: Eq_85
  DataType: real64
  OrigDataType: real64
T_130: (in 0x0140 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_131: (in __inb : ptr32)
  Class: Eq_131
  DataType: (ptr Eq_131)
  OrigDataType: (ptr (fn T_133 (T_132)))
T_132: (in 0x03DA : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in __inb(0x03DA) : byte)
  Class: Eq_133
  DataType: byte
  OrigDataType: byte
T_134: (in 0x08 : byte)
  Class: Eq_134
  DataType: byte
  OrigDataType: byte
T_135: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_135
  DataType: byte
  OrigDataType: byte
T_136: (in 0x00 : byte)
  Class: Eq_135
  DataType: byte
  OrigDataType: byte
T_137: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_137
  DataType: bool
  OrigDataType: bool
T_138: (in es_220 : (ptr Eq_138))
  Class: Eq_138
  DataType: (ptr Eq_138)
  OrigDataType: (ptr (segment))
T_139: (in 0xA000 : word16)
  Class: Eq_138
  DataType: (ptr Eq_138)
  OrigDataType: word16
T_140: (in gs_224 : (ptr Eq_138))
  Class: Eq_138
  DataType: (ptr Eq_138)
  OrigDataType: (ptr (segment))
T_141: (in 0x8000 : word16)
  Class: Eq_138
  DataType: (ptr Eq_138)
  OrigDataType: word16
T_142: (in di_226 : (memptr (ptr Eq_138) Eq_142))
  Class: Eq_142
  DataType: (memptr (ptr Eq_138) Eq_142)
  OrigDataType: (memptr T_138 (struct 0001 (0 T_161 t0000)))
T_143: (in 0x0000 : word16)
  Class: Eq_142
  DataType: (memptr (ptr Eq_138) Eq_142)
  OrigDataType: word16
T_144: (in si_229 : (memptr (ptr Eq_80) Eq_144))
  Class: Eq_144
  DataType: (memptr (ptr Eq_80) Eq_144)
  OrigDataType: (memptr T_80 (struct 0001 (1F8 T_153 t01F8)))
T_145: (in 0x0000 : word16)
  Class: Eq_144
  DataType: (memptr (ptr Eq_80) Eq_144)
  OrigDataType: word16
T_146: (in cx_230 : cups16)
  Class: Eq_146
  DataType: cups16
  OrigDataType: cups16
T_147: (in 0x0190 : word16)
  Class: Eq_146
  DataType: cups16
  OrigDataType: word16
T_148: (in cl_231 : byte)
  Class: Eq_148
  DataType: byte
  OrigDataType: byte
T_149: (in 0x90 : byte)
  Class: Eq_148
  DataType: byte
  OrigDataType: byte
T_150: (in ax_269 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_151: (in 0x01F8 : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_152: (in si_229 + 0x01F8 : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_153: (in Mem178[ds:si_229 + 0x01F8:byte] : byte)
  Class: Eq_153
  DataType: byte
  OrigDataType: byte
T_154: (in DPB(ax_123, (ds->*si_229).b01F8, 8, 8) : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in bp : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_156: (in DPB(ax_123, (ds->*si_229).b01F8, 8, 8) + bp : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_157: (in al_272 : uint8)
  Class: Eq_157
  DataType: uint8
  OrigDataType: uint8
T_158: (in (byte) ax_269 : byte)
  Class: Eq_158
  DataType: byte
  OrigDataType: byte
T_159: (in SLICE(ax_269, byte, 8) : byte)
  Class: Eq_159
  DataType: byte
  OrigDataType: byte
T_160: (in (byte) ax_269 | SLICE(ax_269, byte, 8) : byte)
  Class: Eq_157
  DataType: uint8
  OrigDataType: byte
T_161: (in al_273 : Eq_161)
  Class: Eq_161
  DataType: Eq_161
  OrigDataType: byte
T_162: (in 0x01 : byte)
  Class: Eq_162
  DataType: uint8
  OrigDataType: uint8
T_163: (in al_272 >>u 0x01 : word16)
  Class: Eq_161
  DataType: Eq_161
  OrigDataType: uint16
T_164: (in al_272 >>u 0x01 : word16)
  Class: Eq_164
  DataType: uint16
  OrigDataType: uint16
T_165: (in DPB(ax_269, al_272 >>u 0x01, 0, 8) : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_166: (in 0x0140 : word16)
  Class: Eq_166
  DataType: word16
  OrigDataType: word16
T_167: (in si_229 - 0x0140 : word16)
  Class: Eq_144
  DataType: (memptr (ptr Eq_80) Eq_144)
  OrigDataType: word16
T_168: (in 0x018D : word16)
  Class: Eq_146
  DataType: cups16
  OrigDataType: cups16
T_169: (in cx_230 >=u 0x018D : bool)
  Class: Eq_169
  DataType: bool
  OrigDataType: bool
T_170: (in dl_249 : byte)
  Class: Eq_170
  DataType: byte
  OrigDataType: byte
T_171: (in 0x04 : byte)
  Class: Eq_171
  DataType: byte
  OrigDataType: byte
T_172: (in dl_249 & 0x04 : byte)
  Class: Eq_172
  DataType: byte
  OrigDataType: byte
T_173: (in 0x00 : byte)
  Class: Eq_172
  DataType: byte
  OrigDataType: byte
T_174: (in (dl_249 & 0x04) != 0x00 : bool)
  Class: Eq_174
  DataType: bool
  OrigDataType: bool
T_175: (in 0x0004 : word16)
  Class: Eq_146
  DataType: cups16
  OrigDataType: cups16
T_176: (in cx_230 >u 0x0004 : bool)
  Class: Eq_176
  DataType: bool
  OrigDataType: bool
T_177: (in 0x0000 : word16)
  Class: Eq_177
  DataType: word16
  OrigDataType: word16
T_178: (in di_226 + 0x0000 : word16)
  Class: Eq_178
  DataType: word16
  OrigDataType: word16
T_179: (in Mem284[gs_224:di_226 + 0x0000:byte] : byte)
  Class: Eq_161
  DataType: Eq_161
  OrigDataType: byte
T_180: (in 0x0000 : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_181: (in di_226 + 0x0000 : word16)
  Class: Eq_181
  DataType: word16
  OrigDataType: word16
T_182: (in Mem285[es_220:di_226 + 0x0000:byte] : byte)
  Class: Eq_161
  DataType: Eq_161
  OrigDataType: byte
T_183: (in 0x0001 : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_184: (in di_226 + 0x0001 : word16)
  Class: Eq_142
  DataType: (memptr (ptr Eq_138) Eq_142)
  OrigDataType: word16
T_185: (in 0x0000 : word16)
  Class: Eq_142
  DataType: (memptr (ptr Eq_138) Eq_142)
  OrigDataType: word16
T_186: (in di_226 != &Eq_138::t0000 : bool)
  Class: Eq_186
  DataType: bool
  OrigDataType: bool
T_187: (in 0x0000 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_188: (in 0x00 : byte)
  Class: Eq_161
  DataType: byte
  OrigDataType: byte
T_189: (in dx_248 : word16)
  Class: Eq_189
  DataType: word16
  OrigDataType: word16
T_190: (in 0x0001 : word16)
  Class: Eq_190
  DataType: word16
  OrigDataType: word16
T_191: (in dx_248 - 0x0001 : word16)
  Class: Eq_189
  DataType: word16
  OrigDataType: word16
T_192: (in 0x0001 : word16)
  Class: Eq_192
  DataType: word16
  OrigDataType: word16
T_193: (in si_229 + 0x0001 : word16)
  Class: Eq_144
  DataType: (memptr (ptr Eq_80) Eq_144)
  OrigDataType: word16
T_194: (in (byte) dx_248 : byte)
  Class: Eq_170
  DataType: byte
  OrigDataType: byte
T_195: (in 0x0000 : word16)
  Class: Eq_189
  DataType: word16
  OrigDataType: word16
T_196: (in dx_248 != 0x0000 : bool)
  Class: Eq_196
  DataType: bool
  OrigDataType: bool
T_197: (in 0xB000 : word16)
  Class: Eq_138
  DataType: (ptr Eq_138)
  OrigDataType: word16
T_198: (in 0x9000 : word16)
  Class: Eq_138
  DataType: (ptr Eq_138)
  OrigDataType: word16
T_199: (in 0x0001 : word16)
  Class: Eq_199
  DataType: word16
  OrigDataType: word16
T_200: (in cx_230 - 0x0001 : word16)
  Class: Eq_146
  DataType: cups16
  OrigDataType: word16
T_201: (in ~bp : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_202: (in (byte) cx_230 : byte)
  Class: Eq_148
  DataType: byte
  OrigDataType: byte
T_203: (in 0x0000 : word16)
  Class: Eq_146
  DataType: cups16
  OrigDataType: word16
T_204: (in cx_230 != 0x0000 : bool)
  Class: Eq_204
  DataType: bool
  OrigDataType: bool
T_205: (in 0x0140 : word16)
  Class: Eq_189
  DataType: word16
  OrigDataType: word16
T_206: (in 0x40 : byte)
  Class: Eq_170
  DataType: byte
  OrigDataType: byte
T_207: (in 0x01 : byte)
  Class: Eq_207
  DataType: byte
  OrigDataType: byte
T_208: (in cl_231 & 0x01 : byte)
  Class: Eq_208
  DataType: byte
  OrigDataType: byte
T_209: (in 0x00 : byte)
  Class: Eq_208
  DataType: byte
  OrigDataType: byte
T_210: (in (cl_231 & 0x01) == 0x00 : bool)
  Class: Eq_210
  DataType: bool
  OrigDataType: bool
T_211: (in 0x01AE : word16)
  Class: Eq_211
  DataType: (memptr (ptr Eq_80) byte)
  OrigDataType: (memptr T_80 (struct (0 T_212 t0000)))
T_212: (in Mem304[ds:0x01AE:byte] : byte)
  Class: Eq_170
  DataType: byte
  OrigDataType: byte
T_213: (in ax_306 : word16)
  Class: Eq_213
  DataType: word16
  OrigDataType: word16
T_214: (in __inb : ptr32)
  Class: Eq_214
  DataType: (ptr Eq_214)
  OrigDataType: (ptr (fn T_216 (T_215)))
T_215: (in 0x60 : byte)
  Class: Eq_215
  DataType: byte
  OrigDataType: byte
T_216: (in __inb(0x60) : byte)
  Class: Eq_216
  DataType: byte
  OrigDataType: byte
T_217: (in DPB(ax_123, __inb(0x60), 0, 8) : word16)
  Class: Eq_213
  DataType: word16
  OrigDataType: word16
T_218: (in 0x0101 : word16)
  Class: Eq_218
  DataType: word16
  OrigDataType: word16
T_219: (in bp + 0x0101 : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_220: (in 0x0001 : word16)
  Class: Eq_220
  DataType: word16
  OrigDataType: word16
T_221: (in ax_306 - 0x0001 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_222: (in 0x0001 : word16)
  Class: Eq_213
  DataType: word16
  OrigDataType: word16
T_223: (in ax_306 != 0x0001 : bool)
  Class: Eq_223
  DataType: bool
  OrigDataType: bool
*/
typedef Eq_80 Eq_1struct Globals {
	Eq_80 * ptr70000;	// 70000
} Eq_1;

typedef void (Eq_3)(byte);

typedef void (Eq_8)(word16, byte);

typedef void (Eq_12)(word16, byte);

typedef void (Eq_16)(word16, byte);

typedef void (Eq_20)(word16, byte);

typedef void (Eq_24)(word16, byte);

typedef union Eq_34 {
	uint8 u0;
	ui16 u1;
} Eq_34;

typedef union Eq_37 {
	uint16 u0;
	byte u1;
} Eq_37;

typedef union Eq_40 {
	uint16 u0;
	bcu8 u1;
} Eq_40;

typedef void (Eq_49)(word16, Eq_37);

typedef struct Eq_77 {	// size: 1 1
	int16 w0000;	// 0
	int16 w01F8;	// 1F8
} Eq_77;

typedef Eq_77 Eq_80Eq_97 Eq_80struct Eq_80 {
	Eq_77 t0000;	// 0
	byte b01AE;	// 1AE
	Eq_97 t01F2;	// 1F2
	int16 w01F6;	// 1F6
	int16 w01F8;	// 1F8
} Eq_80;

typedef union Eq_87 {
	real16 u0;
	real64 u1;
} Eq_87;

typedef Eq_91 (Eq_88)(real64);

typedef union Eq_91 {
	real16 u0;
	real64 u1;
} Eq_91;

typedef union Eq_94 {
	real16 u0;
	real64 u1;
} Eq_94;

typedef union Eq_97 {
	real16 u0;
	real32 u1;
} Eq_97;

typedef byte (Eq_131)(word16);

typedef Eq_142 Eq_138struct Eq_138 {
	Eq_142 t0000;	// 0
} Eq_138;

typedef Eq_161 Eq_142struct Eq_142 {	// size: 1 1
	Eq_161 t0000;	// 0
} Eq_142;

typedef struct Eq_144 {	// size: 1 1
	byte b01F8;	// 1F8
} Eq_144;

typedef union Eq_161 {
	uint16 u0;
	byte u1;
} Eq_161;

typedef byte (Eq_214)(byte);

