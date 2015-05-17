// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_285/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA0000 (ptr Eq_119) ptrFFFA0000))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
	T_174 (in bios_video_set_mode : ptr32)
Eq_7: (fn void (word16, byte))
	T_7 (in __outb : ptr32)
Eq_21: (fn void (word16, byte))
	T_21 (in __outb : ptr32)
Eq_24: (fn void (word16, byte))
	T_24 (in __outb : ptr32)
Eq_28: (fn void (word16, byte))
	T_28 (in __outb : ptr32)
Eq_44: (fn void (word16, byte))
	T_44 (in __outb : ptr32)
Eq_48: (fn void (word16, byte))
	T_48 (in __outb : ptr32)
Eq_52: (fn void (word16, byte))
	T_52 (in __outb : ptr32)
Eq_71: (fn void (word16, byte))
	T_71 (in __outb : ptr32)
Eq_74: (fn void (word16, byte))
	T_74 (in __outb : ptr32)
Eq_77: (fn void (word16, byte))
	T_77 (in __outb : ptr32)
Eq_94: (fn void (word16, byte))
	T_94 (in __outb : ptr32)
Eq_97: (fn void (word16, byte))
	T_97 (in __outb : ptr32)
Eq_101: (fn void (word16, byte))
	T_101 (in __outb : ptr32)
Eq_119: (segment "Eq_119" (0 (arr word16) a0000) (1900 byte b1900))
	T_119 (in 0xA000 : selector)
	T_191 (in Mem226[ss:fp - 0x000A:word16] : word16)
	T_192 (in ax_236 : (ptr Eq_119))
	T_197 (in DPB(cs, SLICE(cs, byte, 8) + 0x10, 8, 8) : word16)
	T_229 (in Mem276[ss:fp - 0x000C:word16] : word16)
Eq_131: (segment "Eq_131" (18C uint16 w018C) (200 word16 w0200) (202 word16 w0202))
	T_131 (in ds : (ptr Eq_131))
Eq_166: (fn byte (byte))
	T_166 (in __inb : ptr32)
Eq_187: (segment "Eq_187")
	T_187 (in ss : selector)
Eq_188: (union "Eq_188" ((memptr (ptr Eq_187) Eq_270) u0) (Eq_272 u1))
	T_188 (in fp : ptr16)
Eq_193: (segment "Eq_193")
	T_193 (in cs : selector)
Eq_203: (struct "Eq_203" (0 byte b0000) (1 byte b0001) (2 byte b0002))
	T_203 (in si_248 : (memptr (ptr Eq_119) Eq_203))
	T_205 (in cx_244 - 0x0001 : word16)
Eq_237: (fn byte (word16))
	T_237 (in __inb : ptr32)
Eq_244: (fn byte (word16))
	T_244 (in __inb : ptr32)
Eq_270: (struct "Eq_270" (FFFFFFF6 (ptr Eq_119) ptrFFFFFFF6))
	T_270
Eq_271: (struct "Eq_271" (FFFFFFF4 (ptr Eq_119) ptrFFFFFFF4))
	T_271
Eq_272: (union "Eq_272" (ptr16 u0) ((memptr (ptr Eq_187) Eq_271) u1))
	T_272
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
T_11: (in di_15 : (memptr (ptr Eq_119) byte))
  Class: Eq_11
  DataType: (memptr (ptr Eq_119) byte)
  OrigDataType: (memptr T_119 (struct 0001 (0 T_122 t0000)))
T_12: (in 0x1900 : word16)
  Class: Eq_11
  DataType: (memptr (ptr Eq_119) byte)
  OrigDataType: word16
T_13: (in ax_17 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in 0x0000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_15: (in al_18 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in 0x00 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_17: (in cx_26 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in cx : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in 0x40 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_20: (in DPB(cx, 0x40, 0, 8) : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_21: (in __outb : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_23 (T_22, T_15)))
T_22: (in 0x03C9 : word16)
  Class: Eq_22
  DataType: word16
  OrigDataType: word16
T_23: (in __outb(0x03C9, al_18) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_24: (in __outb : ptr32)
  Class: Eq_24
  DataType: (ptr Eq_24)
  OrigDataType: (ptr (fn T_27 (T_25, T_26)))
T_25: (in 0x03C9 : word16)
  Class: Eq_25
  DataType: word16
  OrigDataType: word16
T_26: (in 0x00 : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_27
  DataType: void
  OrigDataType: void
T_28: (in __outb : ptr32)
  Class: Eq_28
  DataType: (ptr Eq_28)
  OrigDataType: (ptr (fn T_31 (T_29, T_30)))
T_29: (in 0x03C9 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in 0x00 : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_31: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_31
  DataType: void
  OrigDataType: void
T_32: (in 0x0001 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in ax_17 + 0x0001 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_34: (in (byte) ax_17 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_35: (in 0x0001 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in cx_26 - 0x0001 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_37: (in 0x0000 : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_38: (in cx_26 != 0x0000 : bool)
  Class: Eq_38
  DataType: bool
  OrigDataType: bool
T_39: (in cx_45 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in 0x40 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in DPB(cx_26, 0x40, 0, 8) : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_42: (in ax_46 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in 0x0000 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_44: (in __outb : ptr32)
  Class: Eq_44
  DataType: (ptr Eq_44)
  OrigDataType: (ptr (fn T_47 (T_45, T_46)))
T_45: (in 0x03C9 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in 0x3F : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in __outb(0x03C9, 0x3F) : void)
  Class: Eq_47
  DataType: void
  OrigDataType: void
T_48: (in __outb : ptr32)
  Class: Eq_48
  DataType: (ptr Eq_48)
  OrigDataType: (ptr (fn T_51 (T_49, T_50)))
T_49: (in 0x03C9 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in (byte) ax_46 : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_51: (in __outb(0x03C9, (byte) ax_46) : void)
  Class: Eq_51
  DataType: void
  OrigDataType: void
T_52: (in __outb : ptr32)
  Class: Eq_52
  DataType: (ptr Eq_52)
  OrigDataType: (ptr (fn T_55 (T_53, T_54)))
T_53: (in 0x03C9 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in 0x00 : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_55: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_55
  DataType: void
  OrigDataType: void
T_56: (in 0x0001 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in ax_46 + 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_58: (in 0x0001 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in cx_45 - 0x0001 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_60: (in 0x0000 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_61: (in cx_45 != 0x0000 : bool)
  Class: Eq_61
  DataType: bool
  OrigDataType: bool
T_62: (in cx_75 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in 0x40 : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_64: (in DPB(cx_45, 0x40, 0, 8) : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_65: (in ax_76 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in 0x0000 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_67: (in al_89 : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_68: (in 0x3F : byte)
  Class: Eq_68
  DataType: byte
  OrigDataType: byte
T_69: (in (byte) ax_76 : byte)
  Class: Eq_69
  DataType: byte
  OrigDataType: byte
T_70: (in 0x3F - (byte) ax_76 : byte)
  Class: Eq_67
  DataType: byte
  OrigDataType: byte
T_71: (in __outb : ptr32)
  Class: Eq_71
  DataType: (ptr Eq_71)
  OrigDataType: (ptr (fn T_73 (T_72, T_67)))
T_72: (in 0x03C9 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in __outb(0x03C9, al_89) : void)
  Class: Eq_73
  DataType: void
  OrigDataType: void
T_74: (in __outb : ptr32)
  Class: Eq_74
  DataType: (ptr Eq_74)
  OrigDataType: (ptr (fn T_76 (T_75, T_67)))
T_75: (in 0x03C9 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in __outb(0x03C9, al_89) : void)
  Class: Eq_76
  DataType: void
  OrigDataType: void
T_77: (in __outb : ptr32)
  Class: Eq_77
  DataType: (ptr Eq_77)
  OrigDataType: (ptr (fn T_80 (T_78, T_79)))
T_78: (in 0x03C9 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_79: (in (byte) ax_76 : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_80: (in __outb(0x03C9, (byte) ax_76) : void)
  Class: Eq_80
  DataType: void
  OrigDataType: void
T_81: (in 0x0001 : word16)
  Class: Eq_81
  DataType: word16
  OrigDataType: word16
T_82: (in ax_76 + 0x0001 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_83: (in 0x0001 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in cx_75 - 0x0001 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_85: (in 0x0000 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_86: (in cx_75 != 0x0000 : bool)
  Class: Eq_86
  DataType: bool
  OrigDataType: bool
T_87: (in cx_103 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in 0x40 : byte)
  Class: Eq_88
  DataType: byte
  OrigDataType: byte
T_89: (in DPB(cx_75, 0x40, 0, 8) : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_90: (in ax_104 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in 0x0000 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_92: (in al_106 : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_93: (in 0x00 : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_94: (in __outb : ptr32)
  Class: Eq_94
  DataType: (ptr Eq_94)
  OrigDataType: (ptr (fn T_96 (T_95, T_92)))
T_95: (in 0x03C9 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in __outb(0x03C9, al_106) : void)
  Class: Eq_96
  DataType: void
  OrigDataType: void
T_97: (in __outb : ptr32)
  Class: Eq_97
  DataType: (ptr Eq_97)
  OrigDataType: (ptr (fn T_100 (T_98, T_99)))
T_98: (in 0x03C9 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in 0x3F : byte)
  Class: Eq_99
  DataType: byte
  OrigDataType: byte
T_100: (in __outb(0x03C9, 0x3F) : void)
  Class: Eq_100
  DataType: void
  OrigDataType: void
T_101: (in __outb : ptr32)
  Class: Eq_101
  DataType: (ptr Eq_101)
  OrigDataType: (ptr (fn T_104 (T_102, T_103)))
T_102: (in 0x03C9 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in 0x3F : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_104: (in __outb(0x03C9, 0x3F) : void)
  Class: Eq_104
  DataType: void
  OrigDataType: void
T_105: (in 0x0001 : word16)
  Class: Eq_105
  DataType: word16
  OrigDataType: word16
T_106: (in ax_104 + 0x0001 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_107: (in (byte) ax_104 : byte)
  Class: Eq_92
  DataType: byte
  OrigDataType: byte
T_108: (in 0x0001 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in cx_103 - 0x0001 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_110: (in 0x0000 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_111: (in cx_103 != 0x0000 : bool)
  Class: Eq_111
  DataType: bool
  OrigDataType: bool
T_112: (in bp_126 : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_113: (in 0x0000 : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_114: (in al_129 : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_115: (in 0xFF : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_116: (in ax_130 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in 0xFF : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_118: (in DPB(ax_104, 0xFF, 0, 8) : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_119: (in 0xA000 : selector)
  Class: Eq_119
  DataType: (ptr Eq_119)
  OrigDataType: (ptr (segment (0 (arr T_268) a0000)))
T_120: (in 0x0000 : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_121: (in di_15 + 0x0000 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_122: (in Mem181[0xA000:di_15 + 0x0000:byte] : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_123: (in di_182 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in 0x0001 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in di_15 + 0x0001 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_126: (in dx_189 : uint16)
  Class: Eq_126
  DataType: uint16
  OrigDataType: word16
T_127: (in 0x0000 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in 0x0001 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in di_182 - 0x0001 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_130: (in SEQ(0x0000, di_182 - 0x0001) : word32)
  Class: Eq_130
  DataType: word32
  OrigDataType: word32
T_131: (in ds : (ptr Eq_131))
  Class: Eq_131
  DataType: (ptr Eq_131)
  OrigDataType: (ptr (segment (18C T_133 t018C) (200 T_146 t0200) (202 T_156 t0202)))
T_132: (in 0x018C : word16)
  Class: Eq_132
  DataType: (memptr (ptr Eq_131) uint16)
  OrigDataType: (memptr T_131 (struct (0 T_133 t0000)))
T_133: (in Mem181[ds:0x018C:word16] : word16)
  Class: Eq_133
  DataType: uint16
  OrigDataType: word16
T_134: (in SEQ(0x0000, di_182 - 0x0001) % ds->w018C : uint16)
  Class: Eq_126
  DataType: uint16
  OrigDataType: uint16
T_135: (in ax_191 : uint16)
  Class: Eq_135
  DataType: uint16
  OrigDataType: word16
T_136: (in di_182 - 0x0001 : word16)
  Class: Eq_136
  DataType: word16
  OrigDataType: word16
T_137: (in SEQ(dx_189, di_182 - 0x0001) : word32)
  Class: Eq_137
  DataType: uint32
  OrigDataType: uint32
T_138: (in Mem181[ds:0x018C:word16] : word16)
  Class: Eq_133
  DataType: uint16
  OrigDataType: uint16
T_139: (in SEQ(dx_189, di_182 - 0x0001) /u ds->w018C : uint16)
  Class: Eq_135
  DataType: uint16
  OrigDataType: uint16
T_140: (in 0x0000 : word16)
  Class: Eq_126
  DataType: uint16
  OrigDataType: word16
T_141: (in dx_189 != 0x0000 : bool)
  Class: Eq_141
  DataType: bool
  OrigDataType: bool
T_142: (in ~ax_130 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_143: (in (byte) ax_130 : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_144: (in 0x013F : word16)
  Class: Eq_126
  DataType: uint16
  OrigDataType: word16
T_145: (in dx_189 != 0x013F : bool)
  Class: Eq_145
  DataType: bool
  OrigDataType: bool
T_146: (in 0x0001 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_147: (in 0x0200 : word16)
  Class: Eq_147
  DataType: (memptr (ptr Eq_131) word16)
  OrigDataType: (memptr T_131 (struct (0 T_148 t0000)))
T_148: (in Mem325[ds:0x0200:word16] : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_149: (in 0x0014 : word16)
  Class: Eq_135
  DataType: uint16
  OrigDataType: word16
T_150: (in ax_191 != 0x0014 : bool)
  Class: Eq_150
  DataType: bool
  OrigDataType: bool
T_151: (in 0xFFFF : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_152: (in 0x0200 : word16)
  Class: Eq_152
  DataType: (memptr (ptr Eq_131) word16)
  OrigDataType: (memptr T_131 (struct (0 T_153 t0000)))
T_153: (in Mem324[ds:0x0200:word16] : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_154: (in 0x00B3 : word16)
  Class: Eq_135
  DataType: uint16
  OrigDataType: word16
T_155: (in ax_191 != 0x00B3 : bool)
  Class: Eq_155
  DataType: bool
  OrigDataType: bool
T_156: (in 0x0140 : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_157: (in 0x0202 : word16)
  Class: Eq_157
  DataType: (memptr (ptr Eq_131) word16)
  OrigDataType: (memptr T_131 (struct (0 T_158 t0000)))
T_158: (in Mem323[ds:0x0202:word16] : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_159: (in di_182 - 0x0001 : word16)
  Class: Eq_159
  DataType: word16
  OrigDataType: word16
T_160: (in 0x0200 : word16)
  Class: Eq_160
  DataType: (memptr (ptr Eq_131) word16)
  OrigDataType: (memptr T_131 (struct (0 T_161 t0000)))
T_161: (in Mem181[ds:0x0200:word16] : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_162: (in di_182 - 0x0001 + ds->w0200 : word16)
  Class: Eq_162
  DataType: word16
  OrigDataType: word16
T_163: (in 0x0202 : word16)
  Class: Eq_163
  DataType: (memptr (ptr Eq_131) word16)
  OrigDataType: (memptr T_131 (struct (0 T_164 t0000)))
T_164: (in Mem181[ds:0x0202:word16] : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_165: (in di_182 - 0x0001 + ds->w0200 + ds->w0202 : word16)
  Class: Eq_11
  DataType: (memptr (ptr Eq_119) byte)
  OrigDataType: word16
T_166: (in __inb : ptr32)
  Class: Eq_166
  DataType: (ptr Eq_166)
  OrigDataType: (ptr (fn T_168 (T_167)))
T_167: (in 0x60 : byte)
  Class: Eq_167
  DataType: byte
  OrigDataType: byte
T_168: (in __inb(0x60) : byte)
  Class: Eq_168
  DataType: byte
  OrigDataType: byte
T_169: (in 0x01 : byte)
  Class: Eq_168
  DataType: byte
  OrigDataType: byte
T_170: (in __inb(0x60) == 0x01 : bool)
  Class: Eq_170
  DataType: bool
  OrigDataType: bool
T_171: (in 0xFEC0 : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_172: (in 0x0202 : word16)
  Class: Eq_172
  DataType: (memptr (ptr Eq_131) word16)
  OrigDataType: (memptr T_131 (struct (0 T_173 t0000)))
T_173: (in Mem322[ds:0x0202:word16] : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_174: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr Eq_2)
  OrigDataType: (ptr (fn T_176 (T_175)))
T_175: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_176: (in bios_video_set_mode(0x03) : void)
  Class: Eq_6
  DataType: void
  OrigDataType: void
T_177: (in (byte) ax_130 : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_178: (in cx_161 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_179: (in 0x0001 : word16)
  Class: Eq_179
  DataType: word16
  OrigDataType: word16
T_180: (in cx_161 - 0x0001 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_181: (in 0x0000 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_182: (in cx_161 != 0x0000 : bool)
  Class: Eq_182
  DataType: bool
  OrigDataType: bool
T_183: (in 0x0001 : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_184: (in bp_126 + 0x0001 : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_185: (in 0x0000 : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_186: (in bp_126 != 0x0000 : bool)
  Class: Eq_186
  DataType: bool
  OrigDataType: bool
T_187: (in ss : selector)
  Class: Eq_187
  DataType: (ptr Eq_187)
  OrigDataType: (ptr (segment))
T_188: (in fp : ptr16)
  Class: Eq_188
  DataType: Eq_188
  OrigDataType: (union ((union (ptr16 u0) ((memptr T_187 (struct (FFFFFFF4 T_229 tFFFFFFF4))) u1)) u0) ((memptr T_187 (struct (FFFFFFF6 T_191 tFFFFFFF6))) u1))
T_189: (in 0x000A : word16)
  Class: Eq_189
  DataType: word16
  OrigDataType: word16
T_190: (in fp - 0x000A : word16)
  Class: Eq_190
  DataType: word16
  OrigDataType: word16
T_191: (in Mem226[ss:fp - 0x000A:word16] : word16)
  Class: Eq_119
  DataType: (ptr Eq_119)
  OrigDataType: word16
T_192: (in ax_236 : (ptr Eq_119))
  Class: Eq_119
  DataType: (ptr Eq_119)
  OrigDataType: word16
T_193: (in cs : selector)
  Class: Eq_193
  DataType: (ptr Eq_193)
  OrigDataType: (ptr (segment))
T_194: (in SLICE(cs, byte, 8) : byte)
  Class: Eq_194
  DataType: byte
  OrigDataType: byte
T_195: (in 0x10 : byte)
  Class: Eq_195
  DataType: byte
  OrigDataType: byte
T_196: (in SLICE(cs, byte, 8) + 0x10 : byte)
  Class: Eq_196
  DataType: byte
  OrigDataType: byte
T_197: (in DPB(cs, SLICE(cs, byte, 8) + 0x10, 8, 8) : word16)
  Class: Eq_119
  DataType: (ptr Eq_119)
  OrigDataType: word16
T_198: (in ax_238 : uint16)
  Class: Eq_198
  DataType: uint16
  OrigDataType: uint16
T_199: (in 0x0000 : word16)
  Class: Eq_198
  DataType: uint16
  OrigDataType: word16
T_200: (in cx_244 : word16)
  Class: Eq_200
  DataType: word16
  OrigDataType: word16
T_201: (in 0xFA : byte)
  Class: Eq_201
  DataType: byte
  OrigDataType: byte
T_202: (in DPB(cx_161, 0xFA, 8, 8) : word16)
  Class: Eq_200
  DataType: word16
  OrigDataType: word16
T_203: (in si_248 : (memptr (ptr Eq_119) Eq_203))
  Class: Eq_203
  DataType: (memptr (ptr Eq_119) Eq_203)
  OrigDataType: (memptr T_119 (struct (0 T_209 t0000) (1 T_221 t0001) (2 T_213 t0002)))
T_204: (in 0x0001 : word16)
  Class: Eq_204
  DataType: word16
  OrigDataType: word16
T_205: (in cx_244 - 0x0001 : word16)
  Class: Eq_203
  DataType: (memptr (ptr Eq_119) Eq_203)
  OrigDataType: word16
T_206: (in dx_257 : uint16)
  Class: Eq_206
  DataType: uint16
  OrigDataType: uint16
T_207: (in 0x0000 : word16)
  Class: Eq_207
  DataType: word16
  OrigDataType: word16
T_208: (in si_248 + 0x0000 : word16)
  Class: Eq_208
  DataType: word16
  OrigDataType: word16
T_209: (in Mem226[0xA000:si_248 + 0x0000:byte] : byte)
  Class: Eq_209
  DataType: byte
  OrigDataType: byte
T_210: (in DPB(ax_238, (0xA000->*si_248).b0000, 0, 8) : word16)
  Class: Eq_210
  DataType: word16
  OrigDataType: word16
T_211: (in 0x0002 : word16)
  Class: Eq_211
  DataType: word16
  OrigDataType: word16
T_212: (in si_248 + 0x0002 : word16)
  Class: Eq_212
  DataType: word16
  OrigDataType: word16
T_213: (in Mem226[0xA000:si_248 + 0x0002:byte] : byte)
  Class: Eq_213
  DataType: byte
  OrigDataType: byte
T_214: (in DPB(ax_238, (0xA000->*si_248).b0002, 0, 8) : word16)
  Class: Eq_214
  DataType: word16
  OrigDataType: word16
T_215: (in DPB(ax_238, (0xA000->*si_248).b0000, 0, 8) + DPB(ax_238, (0xA000->*si_248).b0002, 0, 8) : word16)
  Class: Eq_206
  DataType: uint16
  OrigDataType: word16
T_216: (in 0x0001 : word16)
  Class: Eq_216
  DataType: uint16
  OrigDataType: uint16
T_217: (in dx_257 >>u 0x0001 : word16)
  Class: Eq_217
  DataType: uint16
  OrigDataType: uint16
T_218: (in (byte) (dx_257 >>u 0x0001) : byte)
  Class: Eq_218
  DataType: byte
  OrigDataType: byte
T_219: (in 0x0001 : word16)
  Class: Eq_219
  DataType: word16
  OrigDataType: word16
T_220: (in si_248 + 0x0001 : word16)
  Class: Eq_220
  DataType: word16
  OrigDataType: word16
T_221: (in Mem270[ax_236:si_248 + 0x0001:byte] : byte)
  Class: Eq_218
  DataType: byte
  OrigDataType: byte
T_222: (in dx_257 >>u 0x0001 : word16)
  Class: Eq_198
  DataType: uint16
  OrigDataType: uint16
T_223: (in 0x0001 : word16)
  Class: Eq_223
  DataType: word16
  OrigDataType: word16
T_224: (in cx_244 - 0x0001 : word16)
  Class: Eq_200
  DataType: word16
  OrigDataType: word16
T_225: (in 0x0000 : word16)
  Class: Eq_200
  DataType: word16
  OrigDataType: word16
T_226: (in cx_244 != 0x0000 : bool)
  Class: Eq_226
  DataType: bool
  OrigDataType: bool
T_227: (in 0x000C : word16)
  Class: Eq_227
  DataType: word16
  OrigDataType: word16
T_228: (in fp - 0x000C : word16)
  Class: Eq_228
  DataType: word16
  OrigDataType: word16
T_229: (in Mem276[ss:fp - 0x000C:word16] : word16)
  Class: Eq_119
  DataType: (ptr Eq_119)
  OrigDataType: word16
T_230: (in di_281 : (memptr (ptr Eq_119) word16))
  Class: Eq_230
  DataType: (memptr (ptr Eq_119) word16)
  OrigDataType: (memptr T_119 (struct 0002 (0 T_259 t0000)))
T_231: (in 0x0000 : word16)
  Class: Eq_230
  DataType: (memptr (ptr Eq_119) word16)
  OrigDataType: word16
T_232: (in si_282 : (memptr (ptr Eq_119) word16))
  Class: Eq_232
  DataType: (memptr (ptr Eq_119) word16)
  OrigDataType: (memptr T_119 (struct 0002 (0 T_256 t0000)))
T_233: (in 0x0000 : word16)
  Class: Eq_232
  DataType: (memptr (ptr Eq_119) word16)
  OrigDataType: word16
T_234: (in cx_286 : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_235: (in 0x7D : byte)
  Class: Eq_235
  DataType: byte
  OrigDataType: byte
T_236: (in DPB(cx_244, 0x7D, 8, 8) : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_237: (in __inb : ptr32)
  Class: Eq_237
  DataType: (ptr Eq_237)
  OrigDataType: (ptr (fn T_239 (T_238)))
T_238: (in 0x03DA : word16)
  Class: Eq_238
  DataType: word16
  OrigDataType: word16
T_239: (in __inb(0x03DA) : byte)
  Class: Eq_239
  DataType: byte
  OrigDataType: byte
T_240: (in 0x08 : byte)
  Class: Eq_240
  DataType: byte
  OrigDataType: byte
T_241: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_241
  DataType: byte
  OrigDataType: byte
T_242: (in 0x00 : byte)
  Class: Eq_241
  DataType: byte
  OrigDataType: byte
T_243: (in (__inb(0x03DA) & 0x08) != 0x00 : bool)
  Class: Eq_243
  DataType: bool
  OrigDataType: bool
T_244: (in __inb : ptr32)
  Class: Eq_244
  DataType: (ptr Eq_244)
  OrigDataType: (ptr (fn T_246 (T_245)))
T_245: (in 0x03DA : word16)
  Class: Eq_245
  DataType: word16
  OrigDataType: word16
T_246: (in __inb(0x03DA) : byte)
  Class: Eq_246
  DataType: byte
  OrigDataType: byte
T_247: (in 0x08 : byte)
  Class: Eq_247
  DataType: byte
  OrigDataType: byte
T_248: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_248
  DataType: byte
  OrigDataType: byte
T_249: (in 0x00 : byte)
  Class: Eq_248
  DataType: byte
  OrigDataType: byte
T_250: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_250
  DataType: bool
  OrigDataType: bool
T_251: (in 0x0000 : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_252: (in cx_286 == 0x0000 : bool)
  Class: Eq_252
  DataType: bool
  OrigDataType: bool
T_253: (in (byte) ax_130 : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_254: (in 0x0000 : word16)
  Class: Eq_254
  DataType: word16
  OrigDataType: word16
T_255: (in si_282 + 0x0000 : word16)
  Class: Eq_255
  DataType: word16
  OrigDataType: word16
T_256: (in Mem276[0xA000:si_282 + 0x0000:word16] : word16)
  Class: Eq_256
  DataType: word16
  OrigDataType: word16
T_257: (in 0x0000 : word16)
  Class: Eq_257
  DataType: word16
  OrigDataType: word16
T_258: (in di_281 + 0x0000 : word16)
  Class: Eq_258
  DataType: word16
  OrigDataType: word16
T_259: (in Mem302[0xA000:di_281 + 0x0000:word16] : word16)
  Class: Eq_256
  DataType: word16
  OrigDataType: word16
T_260: (in 0x0002 : word16)
  Class: Eq_260
  DataType: word16
  OrigDataType: word16
T_261: (in si_282 + 0x0002 : word16)
  Class: Eq_232
  DataType: (memptr (ptr Eq_119) word16)
  OrigDataType: word16
T_262: (in 0x0002 : word16)
  Class: Eq_262
  DataType: word16
  OrigDataType: word16
T_263: (in di_281 + 0x0002 : word16)
  Class: Eq_230
  DataType: (memptr (ptr Eq_119) word16)
  OrigDataType: word16
T_264: (in 0x0001 : word16)
  Class: Eq_264
  DataType: word16
  OrigDataType: word16
T_265: (in cx_286 - 0x0001 : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_266: (in 0x02 : byte)
  Class: Eq_266
  DataType: byte
  OrigDataType: byte
T_267: (in DPB(cx_103, 0x02, 8, 8) : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_268:
  Class: Eq_268
  DataType: word16
  OrigDataType: (struct 0002 (0 T_256 t0000))
T_269:
  Class: Eq_268
  DataType: word16
  OrigDataType: (struct 0002 (0 T_259 t0000))
T_270:
  Class: Eq_270
  DataType: Eq_270
  OrigDataType: 
T_271:
  Class: Eq_271
  DataType: Eq_271
  OrigDataType: 
T_272:
  Class: Eq_272
  DataType: Eq_272
  OrigDataType: 
*/
typedef Eq_119 Eq_1struct Globals {
	Eq_119 * ptrFFFA0000;	// FFFA0000
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_7)(word16, byte);

typedef void (Eq_21)(word16, byte);

typedef void (Eq_24)(word16, byte);

typedef void (Eq_28)(word16, byte);

typedef void (Eq_44)(word16, byte);

typedef void (Eq_48)(word16, byte);

typedef void (Eq_52)(word16, byte);

typedef void (Eq_71)(word16, byte);

typedef void (Eq_74)(word16, byte);

typedef void (Eq_77)(word16, byte);

typedef void (Eq_94)(word16, byte);

typedef void (Eq_97)(word16, byte);

typedef void (Eq_101)(word16, byte);

typedef  Eq_119[]struct Eq_119 {
	word16 a0000[];	// 0
	byte b1900;	// 1900
} Eq_119;

typedef struct Eq_131 {
	uint16 w018C;	// 18C
	word16 w0200;	// 200
	word16 w0202;	// 202
} Eq_131;

typedef byte (Eq_166)(byte);

typedef struct Eq_187 {
} Eq_187;

typedef union Eq_188 {
	Eq_270 Eq_187::* u0;
	Eq_272 u1;
} Eq_188;

typedef struct Eq_193 {
} Eq_193;

typedef struct Eq_203 {
	byte b0000;	// 0
	byte b0001;	// 1
	byte b0002;	// 2
} Eq_203;

typedef byte (Eq_237)(word16);

typedef byte (Eq_244)(word16);

typedef Eq_119 Eq_270struct Eq_270 {
	Eq_119 * ptrFFFFFFF6;	// FFFFFFF6
} Eq_270;

typedef Eq_119 Eq_271struct Eq_271 {
	Eq_119 * ptrFFFFFFF4;	// FFFFFFF4
} Eq_271;

typedef union Eq_272 {
	ptr16 u0;
	Eq_271 Eq_187::* u1;
} Eq_272;

