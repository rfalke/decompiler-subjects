// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_200/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_62) ptrFFFA0000) (400 (ptr Eq_131) ptr0400))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_3: (fn void (byte))
	T_3 (in bios_video_set_mode : ptr32)
	T_4 (in signature of bios_video_set_mode : void)
Eq_15: (fn void (word16, uint8))
	T_15 (in __outb : ptr32)
Eq_18: (union "Eq_18" (uint16 u0) (byte u1))
	T_18 (in al_12 : Eq_18)
	T_20 (in cl_17 >>u 0x02 : word16)
Eq_21: (fn void (word16, Eq_18))
	T_21 (in __outb : ptr32)
Eq_24: (fn void (word16, byte))
	T_24 (in __outb : ptr32)
Eq_29: (fn void (word16, byte))
	T_29 (in __outb : ptr32)
Eq_62: (segment "Eq_62" (0 byte b0000))
	T_62 (in 0xA000 : selector)
Eq_69: (union "Eq_69" (real16 u0) (real32 u1) (real64 u2))
	T_69 (in rLoc2 : real64)
	T_73 (in rLoc2 + ds->t01D6 : word16)
	T_84 (in rLoc4_114 : Eq_69)
	T_92 (in rLoc6_132 : Eq_69)
	T_96 (in ds->t01EC + (rLoc7_130 + rLoc7_130) : real64)
	T_112 (in rLoc1_171 : Eq_69)
	T_115 (in rLoc1_171 + ds->t01DA : word16)
	T_122 (in Mem70[ds:0x01DE:real32] : real32)
	T_156 (in Mem70[ds:0x01DE:real32] : real32)
Eq_70: (segment "Eq_70" (1D6 Eq_72 t01D6) (1DA Eq_114 t01DA) (1DE Eq_69 t01DE) (1E2 word16 w01E2) (1E4 int32 dw01E4) (1E8 Eq_88 t01E8) (1EC Eq_94 t01EC))
	T_70 (in ds : (ptr Eq_70))
Eq_72: (union "Eq_72" (real16 u0) (real32 u1))
	T_72 (in Mem163[ds:0x01D6:real32] : real32)
Eq_88: (union "Eq_88" (real16 u0) (real32 u1) (real64 u2))
	T_88 (in Mem70[ds:0x01E8:real32] : real32)
	T_151 (in sin(rLoc1_63) / (real64) ds->w01E2 : word16)
	T_153 (in Mem70[ds:0x01E8:real32] : real32)
Eq_94: (union "Eq_94" (real16 u0) (real32 u1) (real64 u2))
	T_94 (in Mem70[ds:0x01EC:real32] : real32)
	T_143 (in cos(rLoc2) / (real64) ds->w01E2 : word16)
	T_145 (in Mem67[ds:0x01EC:real32] : real32)
Eq_114: (union "Eq_114" (real16 u0) (real32 u1))
	T_114 (in Mem163[ds:0x01DA:real32] : real32)
	T_136 (in Mem0[ds:0x01DA:real32] : real32)
Eq_125: (fn byte (byte))
	T_125 (in __inb : ptr32)
Eq_130: (union "Eq_130" (real16 u0) (real64 u1))
	T_130 (in rLoc1_63 : Eq_130)
	T_137 (in (real64) 0x0040->w006C * ds->t01DA : word16)
Eq_131: (segment "Eq_131" (6C int16 w006C))
	T_131 (in 0x0040 : selector)
Eq_134: (union "Eq_134" (real16 u0) (real64 u1))
	T_134 (in (real64) 0x0040->w006C : real64)
Eq_138: (fn Eq_139 (Eq_69))
	T_138 (in cos : ptr32)
Eq_139: (union "Eq_139" (real16 u0) (real64 u1))
	T_139 (in cos(rLoc2) : real64)
Eq_142: (union "Eq_142" (real16 u0) (real64 u1))
	T_142 (in (real64) ds->w01E2 : real64)
Eq_146: (fn Eq_147 (Eq_130))
	T_146 (in sin : ptr32)
Eq_147: (union "Eq_147" (real16 u0) (real64 u1))
	T_147 (in sin(rLoc1_63) : real64)
Eq_150: (union "Eq_150" (real16 u0) (real64 u1))
	T_150 (in (real64) ds->w01E2 : real64)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in rLoc1 : real64)
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
T_8: (in cx_16 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in cx : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in 0x0001 : word16)
  Class: Eq_10
  DataType: word16
  OrigDataType: word16
T_11: (in cx + 0x0001 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_12: (in cl_17 : uint8)
  Class: Eq_12
  DataType: uint8
  OrigDataType: uint8
T_13: (in cx + 0x0001 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in (byte) (cx + 0x0001) : byte)
  Class: Eq_12
  DataType: uint8
  OrigDataType: byte
T_15: (in __outb : ptr32)
  Class: Eq_15
  DataType: (ptr Eq_15)
  OrigDataType: (ptr (fn T_17 (T_16, T_12)))
T_16: (in 0x03C8 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in __outb(0x03C8, cl_17) : void)
  Class: Eq_17
  DataType: void
  OrigDataType: void
T_18: (in al_12 : Eq_18)
  Class: Eq_18
  DataType: Eq_18
  OrigDataType: byte
T_19: (in 0x02 : byte)
  Class: Eq_19
  DataType: uint8
  OrigDataType: uint8
T_20: (in cl_17 >>u 0x02 : word16)
  Class: Eq_18
  DataType: Eq_18
  OrigDataType: uint16
T_21: (in __outb : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_23 (T_22, T_18)))
T_22: (in 0x03C9 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in __outb(0x03C9, al_12) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_24: (in __outb : ptr32)
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: (ptr (fn T_28 (T_25, T_27)))
T_25: (in 0x03C9 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in 0x02 : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in al_12 + 0x02 : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_28: (in __outb(0x03C9, al_12.u1) : void)
  Class: Eq_28
  DataType: void
  OrigDataType: void
T_29: (in __outb : ptr32)
  Class: Eq_29
  DataType: (ptr Eq_29)
  OrigDataType: (ptr (fn T_33 (T_30, T_32)))
T_30: (in 0x03C9 : word16)
  Class: Eq_30
  DataType: word16
  OrigDataType: word16
T_31: (in 0x06 : byte)
  Class: Eq_31
  DataType: byte
  OrigDataType: byte
T_32: (in al_12 + 0x06 : byte)
  Class: Eq_32
  DataType: byte
  OrigDataType: byte
T_33: (in __outb(0x03C9, al_12.u1) : void)
  Class: Eq_33
  DataType: void
  OrigDataType: void
T_34: (in 0x0001 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in cx_16 - 0x0001 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_36: (in (byte) cx_16 : byte)
  Class: Eq_12
  DataType: uint8
  OrigDataType: byte
T_37: (in 0x0000 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_38: (in cx_16 != 0x0000 : bool)
  Class: Eq_38
  DataType: bool
  OrigDataType: bool
T_39: (in cx_174 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in 0x0064 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in cx_174 - 0x0064 : word16)
  Class: Eq_41
  DataType: int16
  OrigDataType: int16
T_42: (in cx_106 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in 0x00A0 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in cx_106 - 0x00A0 : word16)
  Class: Eq_44
  DataType: int16
  OrigDataType: int16
T_45: (in (cx_174 - 0x0064) *s (cx_106 - 0x00A0) : int32)
  Class: Eq_45
  DataType: int32
  OrigDataType: int32
T_46: (in (word16) ((cx_174 - 0x0064) *s (cx_106 - 0x00A0)) : word16)
  Class: Eq_46
  DataType: int16
  OrigDataType: int16
T_47: (in 0x0007 : word16)
  Class: Eq_47
  DataType: uint16
  OrigDataType: uint16
T_48: (in (word16) ((cx_174 - 0x0064) *s (cx_106 - 0x00A0)) >> 0x0007 : word16)
  Class: Eq_48
  DataType: int16
  OrigDataType: int16
T_49: (in 0x001F : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in (word16) ((cx_174 - 0x0064) *s (cx_106 - 0x00A0)) >> 0x0007 & 0x001F : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in cx_115 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in cl_116 : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_53: (in 0x1F : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_54: (in cl_116 ^ 0x1F : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_55: (in DPB(cx_115, cl_116 ^ 0x1F, 0, 8) : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in 0x0004 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in DPB(cx_115, cl_116 ^ 0x1F, 0, 8) << 0x0004 : word16)
  Class: Eq_57
  DataType: ui16
  OrigDataType: ui16
T_58: (in (word16) ((cx_174 - 0x0064) *s (cx_106 - 0x00A0)) >> 0x0007 & 0x001F | DPB(cx_115, cl_116 ^ 0x1F, 0, 8) << 0x0004 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in bp : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in ((word16) ((cx_174 - 0x0064) *s (cx_106 - 0x00A0)) >> 0x0007 & 0x001F | DPB(cx_115, cl_116 ^ 0x1F, 0, 8) << 0x0004) + bp : word16)
  Class: Eq_60
  DataType: word16
  OrigDataType: word16
T_61: (in (byte) (((word16) ((cx_174 - 0x0064) *s (cx_106 - 0x00A0)) >> 0x0007 & 0x001F | DPB(cx_115, cl_116 ^ 0x1F, 0, 8) << 0x0004) + bp) : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_62: (in 0xA000 : selector)
  Class: Eq_62
  DataType: (ptr Eq_62)
  OrigDataType: (ptr (segment))
T_63: (in di_103 : (memptr (ptr Eq_62) byte))
  Class: Eq_63
  DataType: (memptr (ptr Eq_62) byte)
  OrigDataType: (memptr T_62 (struct 0001 (0 T_66 t0000)))
T_64: (in 0x0000 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in di_103 + 0x0000 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in Mem163[0xA000:di_103 + 0x0000:byte] : byte)
  Class: Eq_61
  DataType: byte
  OrigDataType: byte
T_67: (in 0x0001 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in di_103 + 0x0001 : word16)
  Class: Eq_63
  DataType: (memptr (ptr Eq_62) byte)
  OrigDataType: word16
T_69: (in rLoc2 : real64)
  Class: Eq_69
  DataType: Eq_69
  OrigDataType: (union (real16 u0) (real32 u1) (real64 u2))
T_70: (in ds : (ptr Eq_70))
  Class: Eq_70
  DataType: (ptr Eq_70)
  OrigDataType: (ptr (segment (1D6 T_72 t01D6) (1DA T_114 t01DA) (1DE T_69 t01DE) (1E2 T_141 t01E2) (1E4 T_103 t01E4) (1E8 T_88 t01E8) (1EC T_94 t01EC)))
T_71: (in 0x01D6 : word16)
  Class: Eq_71
  DataType: (memptr (ptr Eq_70) Eq_72)
  OrigDataType: (memptr T_70 (struct (0 T_72 t0000)))
T_72: (in Mem163[ds:0x01D6:real32] : real32)
  Class: Eq_72
  DataType: Eq_72
  OrigDataType: (union (real16 u0) (real32 u1))
T_73: (in rLoc2 + ds->t01D6 : word16)
  Class: Eq_69
  DataType: Eq_69
  OrigDataType: real16
T_74: (in 0x0001 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in cx_106 - 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_76: (in 0x0000 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_77: (in cx_106 != 0x0000 : bool)
  Class: Eq_77
  DataType: bool
  OrigDataType: bool
T_78: (in 0x0001 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in cx_115 - 0x0001 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_80: (in (byte) cx_115 : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_81: (in 0x0000 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_82: (in cx_115 != 0x0000 : bool)
  Class: Eq_82
  DataType: bool
  OrigDataType: bool
T_83: (in rLoc7_130 : real64)
  Class: Eq_83
  DataType: real64
  OrigDataType: real64
T_84: (in rLoc4_114 : Eq_69)
  Class: Eq_69
  DataType: Eq_69
  OrigDataType: real64
T_85: (in rLoc4_114 * rLoc4_114 : real64)
  Class: Eq_83
  DataType: real64
  OrigDataType: real64
T_86: (in rLoc5_124 : real64)
  Class: Eq_86
  DataType: real64
  OrigDataType: real64
T_87: (in 0x01E8 : word16)
  Class: Eq_87
  DataType: (memptr (ptr Eq_70) Eq_88)
  OrigDataType: (memptr T_70 (struct (0 T_88 t0000)))
T_88: (in Mem70[ds:0x01E8:real32] : real32)
  Class: Eq_88
  DataType: Eq_88
  OrigDataType: (union (real32 u0) (real64 u1))
T_89: (in rLoc3 : real64)
  Class: Eq_89
  DataType: real64
  OrigDataType: real64
T_90: (in rLoc4_114 * rLoc3 : real64)
  Class: Eq_90
  DataType: real64
  OrigDataType: real64
T_91: (in ds->t01E8 + rLoc4_114 * rLoc3 : real64)
  Class: Eq_86
  DataType: real64
  OrigDataType: real64
T_92: (in rLoc6_132 : Eq_69)
  Class: Eq_69
  DataType: Eq_69
  OrigDataType: real64
T_93: (in 0x01EC : word16)
  Class: Eq_93
  DataType: (memptr (ptr Eq_70) Eq_94)
  OrigDataType: (memptr T_70 (struct (0 T_94 t0000)))
T_94: (in Mem70[ds:0x01EC:real32] : real32)
  Class: Eq_94
  DataType: Eq_94
  OrigDataType: (union (real32 u0) (real64 u1))
T_95: (in rLoc7_130 + rLoc7_130 : real64)
  Class: Eq_95
  DataType: real64
  OrigDataType: real64
T_96: (in ds->t01EC + (rLoc7_130 + rLoc7_130) : real64)
  Class: Eq_69
  DataType: Eq_69
  OrigDataType: real64
T_97: (in rLoc5_127 : real64)
  Class: Eq_89
  DataType: real64
  OrigDataType: real64
T_98: (in rLoc5_124 * rLoc4_114 : real64)
  Class: Eq_98
  DataType: real64
  OrigDataType: real64
T_99: (in rLoc5_124 - rLoc5_124 * rLoc4_114 : real64)
  Class: Eq_89
  DataType: real64
  OrigDataType: real64
T_100: (in rLoc5_127 * rLoc5_127 : real64)
  Class: Eq_100
  DataType: real64
  OrigDataType: real64
T_101: (in rLoc6_132 * rLoc6_132 : real64)
  Class: Eq_101
  DataType: real64
  OrigDataType: real64
T_102: (in rLoc5_127 * rLoc5_127 + rLoc6_132 * rLoc6_132 : real64)
  Class: Eq_102
  DataType: real64
  OrigDataType: real64
T_103: (in (int32) (rLoc5_127 * rLoc5_127 + rLoc6_132 * rLoc6_132) : int32)
  Class: Eq_103
  DataType: int32
  OrigDataType: int32
T_104: (in 0x01E4 : word16)
  Class: Eq_104
  DataType: (memptr (ptr Eq_70) int32)
  OrigDataType: (memptr T_70 (struct (0 T_105 t0000)))
T_105: (in Mem144[ds:0x01E4:int32] : int32)
  Class: Eq_103
  DataType: int32
  OrigDataType: int32
T_106: (in 0x01E4 : word16)
  Class: Eq_106
  DataType: (memptr (ptr Eq_70) int32)
  OrigDataType: (memptr T_70 (struct (0 T_107 t0000)))
T_107: (in Mem144[ds:0x01E4:word32] : word32)
  Class: Eq_103
  DataType: int32
  OrigDataType: int32
T_108: (in 0x00000064 : word32)
  Class: Eq_103
  DataType: int32
  OrigDataType: int32
T_109: (in ds->dw01E4 > 0x00000064 : bool)
  Class: Eq_109
  DataType: bool
  OrigDataType: bool
T_110: (in 0x001F : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_111: (in 0x1F : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_112: (in rLoc1_171 : Eq_69)
  Class: Eq_69
  DataType: Eq_69
  OrigDataType: (union (real16 u0) (real64 u1))
T_113: (in 0x01DA : word16)
  Class: Eq_113
  DataType: (memptr (ptr Eq_70) Eq_114)
  OrigDataType: (memptr T_70 (struct (0 T_114 t0000)))
T_114: (in Mem163[ds:0x01DA:real32] : real32)
  Class: Eq_114
  DataType: Eq_114
  OrigDataType: (union (real16 u0) (real32 u1))
T_115: (in rLoc1_171 + ds->t01DA : word16)
  Class: Eq_69
  DataType: Eq_69
  OrigDataType: real16
T_116: (in 0x0001 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in cx_174 - 0x0001 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_118: (in 0x0000 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_119: (in cx_174 != 0x0000 : bool)
  Class: Eq_119
  DataType: bool
  OrigDataType: bool
T_120: (in 0x0140 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_121: (in 0x01DE : word16)
  Class: Eq_121
  DataType: (memptr (ptr Eq_70) Eq_69)
  OrigDataType: (memptr T_70 (struct (0 T_122 t0000)))
T_122: (in Mem70[ds:0x01DE:real32] : real32)
  Class: Eq_69
  DataType: Eq_69
  OrigDataType: real32
T_123: (in 0x0004 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in bp - 0x0004 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_125: (in __inb : ptr32)
  Class: Eq_125
  DataType: (ptr Eq_125)
  OrigDataType: (ptr (fn T_127 (T_126)))
T_126: (in 0x60 : byte)
  Class: Eq_126
  DataType: byte
  OrigDataType: byte
T_127: (in __inb(0x60) : byte)
  Class: Eq_127
  DataType: byte
  OrigDataType: byte
T_128: (in 0x01 : byte)
  Class: Eq_127
  DataType: byte
  OrigDataType: byte
T_129: (in __inb(0x60) != 0x01 : bool)
  Class: Eq_129
  DataType: bool
  OrigDataType: bool
T_130: (in rLoc1_63 : Eq_130)
  Class: Eq_130
  DataType: Eq_130
  OrigDataType: real64
T_131: (in 0x0040 : selector)
  Class: Eq_131
  DataType: (ptr Eq_131)
  OrigDataType: (ptr (segment (6C T_133 t006C)))
T_132: (in 0x006C : word16)
  Class: Eq_132
  DataType: (memptr (ptr Eq_131) int16)
  OrigDataType: (memptr T_131 (struct (0 T_133 t0000)))
T_133: (in Mem0[0x0040:0x006C:int16] : int16)
  Class: Eq_133
  DataType: int16
  OrigDataType: int16
T_134: (in (real64) 0x0040->w006C : real64)
  Class: Eq_134
  DataType: Eq_134
  OrigDataType: (union (real16 u0) (real64 u1))
T_135: (in 0x01DA : word16)
  Class: Eq_135
  DataType: (memptr (ptr Eq_70) Eq_114)
  OrigDataType: (memptr T_70 (struct (0 T_136 t0000)))
T_136: (in Mem0[ds:0x01DA:real32] : real32)
  Class: Eq_114
  DataType: Eq_114
  OrigDataType: (union (real16 u0) (real32 u1))
T_137: (in (real64) 0x0040->w006C * ds->t01DA : word16)
  Class: Eq_130
  DataType: Eq_130
  OrigDataType: real16
T_138: (in cos : ptr32)
  Class: Eq_138
  DataType: (ptr Eq_138)
  OrigDataType: (ptr (fn T_139 (T_69)))
T_139: (in cos(rLoc2) : real64)
  Class: Eq_139
  DataType: Eq_139
  OrigDataType: (union (real16 u0) (real64 u1))
T_140: (in 0x01E2 : word16)
  Class: Eq_140
  DataType: (memptr (ptr Eq_70) word16)
  OrigDataType: (memptr T_70 (struct (0 T_141 t0000)))
T_141: (in Mem0[ds:0x01E2:word16] : word16)
  Class: Eq_141
  DataType: word16
  OrigDataType: word16
T_142: (in (real64) ds->w01E2 : real64)
  Class: Eq_142
  DataType: Eq_142
  OrigDataType: (union (real16 u0) (real64 u1))
T_143: (in cos(rLoc2) / (real64) ds->w01E2 : word16)
  Class: Eq_94
  DataType: Eq_94
  OrigDataType: real16
T_144: (in 0x01EC : word16)
  Class: Eq_144
  DataType: (memptr (ptr Eq_70) Eq_94)
  OrigDataType: (memptr T_70 (struct (0 T_145 t0000)))
T_145: (in Mem67[ds:0x01EC:real32] : real32)
  Class: Eq_94
  DataType: Eq_94
  OrigDataType: real32
T_146: (in sin : ptr32)
  Class: Eq_146
  DataType: (ptr Eq_146)
  OrigDataType: (ptr (fn T_147 (T_130)))
T_147: (in sin(rLoc1_63) : real64)
  Class: Eq_147
  DataType: Eq_147
  OrigDataType: (union (real16 u0) (real64 u1))
T_148: (in 0x01E2 : word16)
  Class: Eq_148
  DataType: (memptr (ptr Eq_70) word16)
  OrigDataType: (memptr T_70 (struct (0 T_149 t0000)))
T_149: (in Mem67[ds:0x01E2:word16] : word16)
  Class: Eq_141
  DataType: word16
  OrigDataType: word16
T_150: (in (real64) ds->w01E2 : real64)
  Class: Eq_150
  DataType: Eq_150
  OrigDataType: (union (real16 u0) (real64 u1))
T_151: (in sin(rLoc1_63) / (real64) ds->w01E2 : word16)
  Class: Eq_88
  DataType: Eq_88
  OrigDataType: real16
T_152: (in 0x01E8 : word16)
  Class: Eq_152
  DataType: (memptr (ptr Eq_70) Eq_88)
  OrigDataType: (memptr T_70 (struct (0 T_153 t0000)))
T_153: (in Mem70[ds:0x01E8:real32] : real32)
  Class: Eq_88
  DataType: Eq_88
  OrigDataType: real32
T_154: (in 0x0000 : word16)
  Class: Eq_63
  DataType: (memptr (ptr Eq_62) byte)
  OrigDataType: word16
T_155: (in 0x01DE : word16)
  Class: Eq_155
  DataType: (memptr (ptr Eq_70) Eq_69)
  OrigDataType: (memptr T_70 (struct (0 T_156 t0000)))
T_156: (in Mem70[ds:0x01DE:real32] : real32)
  Class: Eq_69
  DataType: Eq_69
  OrigDataType: real32
T_157: (in 0x00C8 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
*/
typedef Eq_62 Eq_1Eq_131 Eq_1struct Globals {
	Eq_62 * ptrFFFA0000;	// FFFA0000
	Eq_131 * ptr0400;	// 400
} Eq_1;

typedef void (Eq_3)(byte);

typedef void (Eq_15)(word16, uint8);

typedef union Eq_18 {
	uint16 u0;
	byte u1;
} Eq_18;

typedef void (Eq_21)(word16, Eq_18);

typedef void (Eq_24)(word16, byte);

typedef void (Eq_29)(word16, byte);

typedef struct Eq_62 {
	byte b0000;	// 0
} Eq_62;

typedef union Eq_69 {
	real16 u0;
	real32 u1;
	real64 u2;
} Eq_69;

typedef Eq_72 Eq_70Eq_114 Eq_70Eq_69 Eq_70Eq_88 Eq_70Eq_94 Eq_70struct Eq_70 {
	Eq_72 t01D6;	// 1D6
	Eq_114 t01DA;	// 1DA
	Eq_69 t01DE;	// 1DE
	word16 w01E2;	// 1E2
	int32 dw01E4;	// 1E4
	Eq_88 t01E8;	// 1E8
	Eq_94 t01EC;	// 1EC
} Eq_70;

typedef union Eq_72 {
	real16 u0;
	real32 u1;
} Eq_72;

typedef union Eq_88 {
	real16 u0;
	real32 u1;
	real64 u2;
} Eq_88;

typedef union Eq_94 {
	real16 u0;
	real32 u1;
	real64 u2;
} Eq_94;

typedef union Eq_114 {
	real16 u0;
	real32 u1;
} Eq_114;

typedef byte (Eq_125)(byte);

typedef union Eq_130 {
	real16 u0;
	real64 u1;
} Eq_130;

typedef struct Eq_131 {
	int16 w006C;	// 6C
} Eq_131;

typedef union Eq_134 {
	real16 u0;
	real64 u1;
} Eq_134;

typedef Eq_139 (Eq_138)(Eq_69);

typedef union Eq_139 {
	real16 u0;
	real64 u1;
} Eq_139;

typedef union Eq_142 {
	real16 u0;
	real64 u1;
} Eq_142;

typedef Eq_147 (Eq_146)(Eq_130);

typedef union Eq_147 {
	real16 u0;
	real64 u1;
} Eq_147;

typedef union Eq_150 {
	real16 u0;
	real64 u1;
} Eq_150;

