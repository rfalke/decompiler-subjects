// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_188/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (FFFA1900 (ptr Eq_115) ptrFFFA1900))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_2: (fn void (byte))
	T_2 (in bios_video_set_mode : ptr32)
	T_3 (in signature of bios_video_set_mode : void)
Eq_17: (fn void (word16, byte))
	T_17 (in __outb : ptr32)
Eq_20: (fn void (word16, byte))
	T_20 (in __outb : ptr32)
Eq_24: (fn void (word16, byte))
	T_24 (in __outb : ptr32)
Eq_40: (fn void (word16, byte))
	T_40 (in __outb : ptr32)
Eq_44: (fn void (word16, byte))
	T_44 (in __outb : ptr32)
Eq_48: (fn void (word16, byte))
	T_48 (in __outb : ptr32)
Eq_67: (fn void (word16, byte))
	T_67 (in __outb : ptr32)
Eq_70: (fn void (word16, byte))
	T_70 (in __outb : ptr32)
Eq_73: (fn void (word16, byte))
	T_73 (in __outb : ptr32)
Eq_90: (fn void (word16, byte))
	T_90 (in __outb : ptr32)
Eq_93: (fn void (word16, byte))
	T_93 (in __outb : ptr32)
Eq_97: (fn void (word16, byte))
	T_97 (in __outb : ptr32)
Eq_115: (segment "Eq_115" (0 byte b0000))
	T_115 (in 0xA190 : selector)
	T_185 (in Mem211[ss:fp - 0x000A:word16] : word16)
Eq_127: (segment "Eq_127" (181 uint16 w0181) (1C4 word16 w01C4) (1C6 word16 w01C6))
	T_127 (in ds : (ptr Eq_127))
Eq_162: (fn byte (byte))
	T_162 (in __inb : ptr32)
Eq_181: (segment "Eq_181")
	T_181 (in ss : selector)
Eq_182: (union "Eq_182" (ptr16 u0) ((memptr (ptr Eq_181) Eq_218) u1))
	T_182 (in fp : ptr16)
Eq_191: (struct "Eq_191" (0 byte b0000) (1 byte b0001) (2 byte b0002))
	T_191 (in si_223 : (memptr (ptr Eq_115) Eq_191))
	T_193 (in cx_219 - 0x0001 : word16)
Eq_218: (struct "Eq_218" (FFFFFFF6 (ptr Eq_115) ptrFFFFFFF6))
	T_218
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
T_7: (in di_133 : (memptr (ptr Eq_115) byte))
  Class: Eq_7
  DataType: (memptr (ptr Eq_115) byte)
  OrigDataType: (memptr T_115 (struct 0001 (0 T_118 t0000)))
T_8: (in 0x0000 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_115) byte)
  OrigDataType: word16
T_9: (in ax_18 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in 0x0000 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_11: (in al_19 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_12: (in 0x00 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_13: (in cx_16 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in cx : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_15: (in 0x40 : byte)
  Class: Eq_15
  DataType: byte
  OrigDataType: byte
T_16: (in DPB(cx, 0x40, 0, 8) : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_17: (in __outb : ptr32)
  Class: Eq_17
  DataType: (ptr Eq_17)
  OrigDataType: (ptr (fn T_19 (T_18, T_11)))
T_18: (in 0x03C9 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in __outb(0x03C9, al_19) : void)
  Class: Eq_19
  DataType: void
  OrigDataType: void
T_20: (in __outb : ptr32)
  Class: Eq_20
  DataType: (ptr Eq_20)
  OrigDataType: (ptr (fn T_23 (T_21, T_22)))
T_21: (in 0x03C9 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in 0x00 : byte)
  Class: Eq_22
  DataType: byte
  OrigDataType: byte
T_23: (in __outb(0x03C9, 0x00) : void)
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
T_28: (in 0x0001 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in ax_18 + 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_30: (in (byte) ax_18 : byte)
  Class: Eq_11
  DataType: byte
  OrigDataType: byte
T_31: (in 0x0001 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in cx_16 - 0x0001 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_33: (in 0x0000 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_34: (in cx_16 != 0x0000 : bool)
  Class: Eq_34
  DataType: bool
  OrigDataType: bool
T_35: (in cx_34 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in 0x40 : byte)
  Class: Eq_36
  DataType: byte
  OrigDataType: byte
T_37: (in DPB(cx_16, 0x40, 0, 8) : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_38: (in ax_35 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_40: (in __outb : ptr32)
  Class: Eq_40
  DataType: (ptr Eq_40)
  OrigDataType: (ptr (fn T_43 (T_41, T_42)))
T_41: (in 0x03C9 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in 0x3F : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in __outb(0x03C9, 0x3F) : void)
  Class: Eq_43
  DataType: void
  OrigDataType: void
T_44: (in __outb : ptr32)
  Class: Eq_44
  DataType: (ptr Eq_44)
  OrigDataType: (ptr (fn T_47 (T_45, T_46)))
T_45: (in 0x03C9 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in (byte) ax_35 : byte)
  Class: Eq_46
  DataType: byte
  OrigDataType: byte
T_47: (in __outb(0x03C9, (byte) ax_35) : void)
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
T_50: (in 0x00 : byte)
  Class: Eq_50
  DataType: byte
  OrigDataType: byte
T_51: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_51
  DataType: void
  OrigDataType: void
T_52: (in 0x0001 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in ax_35 + 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_54: (in 0x0001 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in cx_34 - 0x0001 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_56: (in 0x0000 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_57: (in cx_34 != 0x0000 : bool)
  Class: Eq_57
  DataType: bool
  OrigDataType: bool
T_58: (in cx_62 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in 0x40 : byte)
  Class: Eq_59
  DataType: byte
  OrigDataType: byte
T_60: (in DPB(cx_34, 0x40, 0, 8) : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_61: (in ax_63 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in 0x0000 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_63: (in al_75 : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_64: (in 0x3F : byte)
  Class: Eq_64
  DataType: byte
  OrigDataType: byte
T_65: (in (byte) ax_63 : byte)
  Class: Eq_65
  DataType: byte
  OrigDataType: byte
T_66: (in 0x3F - (byte) ax_63 : byte)
  Class: Eq_63
  DataType: byte
  OrigDataType: byte
T_67: (in __outb : ptr32)
  Class: Eq_67
  DataType: (ptr Eq_67)
  OrigDataType: (ptr (fn T_69 (T_68, T_63)))
T_68: (in 0x03C9 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in __outb(0x03C9, al_75) : void)
  Class: Eq_69
  DataType: void
  OrigDataType: void
T_70: (in __outb : ptr32)
  Class: Eq_70
  DataType: (ptr Eq_70)
  OrigDataType: (ptr (fn T_72 (T_71, T_63)))
T_71: (in 0x03C9 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in __outb(0x03C9, al_75) : void)
  Class: Eq_72
  DataType: void
  OrigDataType: void
T_73: (in __outb : ptr32)
  Class: Eq_73
  DataType: (ptr Eq_73)
  OrigDataType: (ptr (fn T_76 (T_74, T_75)))
T_74: (in 0x03C9 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in (byte) ax_63 : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_76: (in __outb(0x03C9, (byte) ax_63) : void)
  Class: Eq_76
  DataType: void
  OrigDataType: void
T_77: (in 0x0001 : word16)
  Class: Eq_77
  DataType: word16
  OrigDataType: word16
T_78: (in ax_63 + 0x0001 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_79: (in 0x0001 : word16)
  Class: Eq_79
  DataType: word16
  OrigDataType: word16
T_80: (in cx_62 - 0x0001 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_81: (in 0x0000 : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_82: (in cx_62 != 0x0000 : bool)
  Class: Eq_82
  DataType: bool
  OrigDataType: bool
T_83: (in cx_106 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in 0x40 : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_85: (in DPB(cx_62, 0x40, 0, 8) : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_86: (in ax_102 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in 0x0000 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_88: (in al_103 : byte)
  Class: Eq_88
  DataType: byte
  OrigDataType: byte
T_89: (in 0x00 : byte)
  Class: Eq_88
  DataType: byte
  OrigDataType: byte
T_90: (in __outb : ptr32)
  Class: Eq_90
  DataType: (ptr Eq_90)
  OrigDataType: (ptr (fn T_92 (T_91, T_88)))
T_91: (in 0x03C9 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in __outb(0x03C9, al_103) : void)
  Class: Eq_92
  DataType: void
  OrigDataType: void
T_93: (in __outb : ptr32)
  Class: Eq_93
  DataType: (ptr Eq_93)
  OrigDataType: (ptr (fn T_96 (T_94, T_95)))
T_94: (in 0x03C9 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in 0x3F : byte)
  Class: Eq_95
  DataType: byte
  OrigDataType: byte
T_96: (in __outb(0x03C9, 0x3F) : void)
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
T_101: (in 0x0001 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in ax_102 + 0x0001 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_103: (in (byte) ax_102 : byte)
  Class: Eq_88
  DataType: byte
  OrigDataType: byte
T_104: (in 0x0001 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in cx_106 - 0x0001 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_106: (in 0x0000 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_107: (in cx_106 != 0x0000 : bool)
  Class: Eq_107
  DataType: bool
  OrigDataType: bool
T_108: (in bp_109 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in 0x0000 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_110: (in al_112 : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_111: (in 0xFF : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_112: (in ax_113 : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_113: (in 0xFF : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_114: (in DPB(ax_102, 0xFF, 0, 8) : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_115: (in 0xA190 : selector)
  Class: Eq_115
  DataType: (ptr Eq_115)
  OrigDataType: (ptr (segment))
T_116: (in 0x0000 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in di_133 + 0x0000 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in Mem160[0xA190:di_133 + 0x0000:byte] : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_119: (in di_161 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in 0x0001 : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_121: (in di_133 + 0x0001 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_122: (in dx_168 : uint16)
  Class: Eq_122
  DataType: uint16
  OrigDataType: word16
T_123: (in 0x0000 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in 0x0001 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in di_161 - 0x0001 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_126: (in SEQ(0x0000, di_161 - 0x0001) : word32)
  Class: Eq_126
  DataType: word32
  OrigDataType: word32
T_127: (in ds : (ptr Eq_127))
  Class: Eq_127
  DataType: (ptr Eq_127)
  OrigDataType: (ptr (segment (181 T_129 t0181) (1C4 T_142 t01C4) (1C6 T_152 t01C6)))
T_128: (in 0x0181 : word16)
  Class: Eq_128
  DataType: (memptr (ptr Eq_127) uint16)
  OrigDataType: (memptr T_127 (struct (0 T_129 t0000)))
T_129: (in Mem160[ds:0x0181:word16] : word16)
  Class: Eq_129
  DataType: uint16
  OrigDataType: word16
T_130: (in SEQ(0x0000, di_161 - 0x0001) % ds->w0181 : uint16)
  Class: Eq_122
  DataType: uint16
  OrigDataType: uint16
T_131: (in ax_170 : uint16)
  Class: Eq_131
  DataType: uint16
  OrigDataType: word16
T_132: (in di_161 - 0x0001 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in SEQ(dx_168, di_161 - 0x0001) : word32)
  Class: Eq_133
  DataType: uint32
  OrigDataType: uint32
T_134: (in Mem160[ds:0x0181:word16] : word16)
  Class: Eq_129
  DataType: uint16
  OrigDataType: uint16
T_135: (in SEQ(dx_168, di_161 - 0x0001) /u ds->w0181 : uint16)
  Class: Eq_131
  DataType: uint16
  OrigDataType: uint16
T_136: (in 0x0000 : word16)
  Class: Eq_122
  DataType: uint16
  OrigDataType: word16
T_137: (in dx_168 != 0x0000 : bool)
  Class: Eq_137
  DataType: bool
  OrigDataType: bool
T_138: (in ~ax_113 : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_139: (in (byte) ax_113 : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_140: (in 0x013F : word16)
  Class: Eq_122
  DataType: uint16
  OrigDataType: word16
T_141: (in dx_168 != 0x013F : bool)
  Class: Eq_141
  DataType: bool
  OrigDataType: bool
T_142: (in 0x0001 : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_143: (in 0x01C4 : word16)
  Class: Eq_143
  DataType: (memptr (ptr Eq_127) word16)
  OrigDataType: (memptr T_127 (struct (0 T_144 t0000)))
T_144: (in Mem264[ds:0x01C4:word16] : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_145: (in 0x0000 : word16)
  Class: Eq_131
  DataType: uint16
  OrigDataType: word16
T_146: (in ax_170 != 0x0000 : bool)
  Class: Eq_146
  DataType: bool
  OrigDataType: bool
T_147: (in 0xFFFF : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_148: (in 0x01C4 : word16)
  Class: Eq_148
  DataType: (memptr (ptr Eq_127) word16)
  OrigDataType: (memptr T_127 (struct (0 T_149 t0000)))
T_149: (in Mem263[ds:0x01C4:word16] : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_150: (in 0x009F : word16)
  Class: Eq_131
  DataType: uint16
  OrigDataType: word16
T_151: (in ax_170 != 0x009F : bool)
  Class: Eq_151
  DataType: bool
  OrigDataType: bool
T_152: (in 0x0140 : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_153: (in 0x01C6 : word16)
  Class: Eq_153
  DataType: (memptr (ptr Eq_127) word16)
  OrigDataType: (memptr T_127 (struct (0 T_154 t0000)))
T_154: (in Mem262[ds:0x01C6:word16] : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_155: (in di_161 - 0x0001 : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_156: (in 0x01C4 : word16)
  Class: Eq_156
  DataType: (memptr (ptr Eq_127) word16)
  OrigDataType: (memptr T_127 (struct (0 T_157 t0000)))
T_157: (in Mem160[ds:0x01C4:word16] : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_158: (in di_161 - 0x0001 + ds->w01C4 : word16)
  Class: Eq_158
  DataType: word16
  OrigDataType: word16
T_159: (in 0x01C6 : word16)
  Class: Eq_159
  DataType: (memptr (ptr Eq_127) word16)
  OrigDataType: (memptr T_127 (struct (0 T_160 t0000)))
T_160: (in Mem160[ds:0x01C6:word16] : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_161: (in di_161 - 0x0001 + ds->w01C4 + ds->w01C6 : word16)
  Class: Eq_7
  DataType: (memptr (ptr Eq_115) byte)
  OrigDataType: word16
T_162: (in __inb : ptr32)
  Class: Eq_162
  DataType: (ptr Eq_162)
  OrigDataType: (ptr (fn T_164 (T_163)))
T_163: (in 0x60 : byte)
  Class: Eq_163
  DataType: byte
  OrigDataType: byte
T_164: (in __inb(0x60) : byte)
  Class: Eq_164
  DataType: byte
  OrigDataType: byte
T_165: (in DPB(ax_170, __inb(0x60), 0, 8) : word16)
  Class: Eq_165
  DataType: word16
  OrigDataType: word16
T_166: (in 0x0001 : word16)
  Class: Eq_165
  DataType: word16
  OrigDataType: word16
T_167: (in DPB(ax_170, __inb(0x60), 0, 8) == 0x0001 : bool)
  Class: Eq_167
  DataType: bool
  OrigDataType: bool
T_168: (in 0xFEC0 : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_169: (in 0x01C6 : word16)
  Class: Eq_169
  DataType: (memptr (ptr Eq_127) word16)
  OrigDataType: (memptr T_127 (struct (0 T_170 t0000)))
T_170: (in Mem261[ds:0x01C6:word16] : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_171: (in (byte) ax_113 : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_172: (in cx_141 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_173: (in 0x0001 : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_174: (in cx_141 - 0x0001 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_175: (in 0x0000 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_176: (in cx_141 != 0x0000 : bool)
  Class: Eq_176
  DataType: bool
  OrigDataType: bool
T_177: (in 0x0001 : word16)
  Class: Eq_177
  DataType: word16
  OrigDataType: word16
T_178: (in bp_109 + 0x0001 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_179: (in 0x0000 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_180: (in bp_109 != 0x0000 : bool)
  Class: Eq_180
  DataType: bool
  OrigDataType: bool
T_181: (in ss : selector)
  Class: Eq_181
  DataType: (ptr Eq_181)
  OrigDataType: (ptr (segment))
T_182: (in fp : ptr16)
  Class: Eq_182
  DataType: Eq_182
  OrigDataType: (union (ptr16 u0) ((memptr T_181 (struct (FFFFFFF6 T_185 tFFFFFFF6))) u1))
T_183: (in 0x000A : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_184: (in fp - 0x000A : word16)
  Class: Eq_184
  DataType: word16
  OrigDataType: word16
T_185: (in Mem211[ss:fp - 0x000A:word16] : word16)
  Class: Eq_115
  DataType: (ptr Eq_115)
  OrigDataType: word16
T_186: (in ax_215 : uint16)
  Class: Eq_186
  DataType: uint16
  OrigDataType: uint16
T_187: (in 0x0000 : word16)
  Class: Eq_186
  DataType: uint16
  OrigDataType: word16
T_188: (in cx_219 : word16)
  Class: Eq_188
  DataType: word16
  OrigDataType: word16
T_189: (in 0xFA : byte)
  Class: Eq_189
  DataType: byte
  OrigDataType: byte
T_190: (in DPB(cx_141, 0xFA, 8, 8) : word16)
  Class: Eq_188
  DataType: word16
  OrigDataType: word16
T_191: (in si_223 : (memptr (ptr Eq_115) Eq_191))
  Class: Eq_191
  DataType: (memptr (ptr Eq_115) Eq_191)
  OrigDataType: (memptr T_115 (struct (0 T_197 t0000) (1 T_209 t0001) (2 T_201 t0002)))
T_192: (in 0x0001 : word16)
  Class: Eq_192
  DataType: word16
  OrigDataType: word16
T_193: (in cx_219 - 0x0001 : word16)
  Class: Eq_191
  DataType: (memptr (ptr Eq_115) Eq_191)
  OrigDataType: word16
T_194: (in dx_232 : uint16)
  Class: Eq_194
  DataType: uint16
  OrigDataType: uint16
T_195: (in 0x0000 : word16)
  Class: Eq_195
  DataType: word16
  OrigDataType: word16
T_196: (in si_223 + 0x0000 : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_197: (in Mem211[0xA190:si_223 + 0x0000:byte] : byte)
  Class: Eq_197
  DataType: byte
  OrigDataType: byte
T_198: (in DPB(ax_215, (0xA190->*si_223).b0000, 0, 8) : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_199: (in 0x0002 : word16)
  Class: Eq_199
  DataType: word16
  OrigDataType: word16
T_200: (in si_223 + 0x0002 : word16)
  Class: Eq_200
  DataType: word16
  OrigDataType: word16
T_201: (in Mem211[0xA190:si_223 + 0x0002:byte] : byte)
  Class: Eq_201
  DataType: byte
  OrigDataType: byte
T_202: (in DPB(ax_215, (0xA190->*si_223).b0002, 0, 8) : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_203: (in DPB(ax_215, (0xA190->*si_223).b0000, 0, 8) + DPB(ax_215, (0xA190->*si_223).b0002, 0, 8) : word16)
  Class: Eq_194
  DataType: uint16
  OrigDataType: word16
T_204: (in 0x0001 : word16)
  Class: Eq_204
  DataType: uint16
  OrigDataType: uint16
T_205: (in dx_232 >>u 0x0001 : word16)
  Class: Eq_205
  DataType: uint16
  OrigDataType: uint16
T_206: (in (byte) (dx_232 >>u 0x0001) : byte)
  Class: Eq_206
  DataType: byte
  OrigDataType: byte
T_207: (in 0x0001 : word16)
  Class: Eq_207
  DataType: word16
  OrigDataType: word16
T_208: (in si_223 + 0x0001 : word16)
  Class: Eq_208
  DataType: word16
  OrigDataType: word16
T_209: (in Mem243[0xA190:si_223 + 0x0001:byte] : byte)
  Class: Eq_206
  DataType: byte
  OrigDataType: byte
T_210: (in dx_232 >>u 0x0001 : word16)
  Class: Eq_186
  DataType: uint16
  OrigDataType: uint16
T_211: (in 0x0001 : word16)
  Class: Eq_211
  DataType: word16
  OrigDataType: word16
T_212: (in cx_219 - 0x0001 : word16)
  Class: Eq_188
  DataType: word16
  OrigDataType: word16
T_213: (in 0x0000 : word16)
  Class: Eq_188
  DataType: word16
  OrigDataType: word16
T_214: (in cx_219 != 0x0000 : bool)
  Class: Eq_214
  DataType: bool
  OrigDataType: bool
T_215: (in (byte) ax_113 : byte)
  Class: Eq_110
  DataType: byte
  OrigDataType: byte
T_216: (in 0x02 : byte)
  Class: Eq_216
  DataType: byte
  OrigDataType: byte
T_217: (in DPB(cx_106, 0x02, 8, 8) : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_218:
  Class: Eq_218
  DataType: Eq_218
  OrigDataType: 
*/
typedef Eq_115 Eq_1struct Globals {
	Eq_115 * ptrFFFA1900;	// FFFA1900
} Eq_1;

typedef void (Eq_2)(byte);

typedef void (Eq_17)(word16, byte);

typedef void (Eq_20)(word16, byte);

typedef void (Eq_24)(word16, byte);

typedef void (Eq_40)(word16, byte);

typedef void (Eq_44)(word16, byte);

typedef void (Eq_48)(word16, byte);

typedef void (Eq_67)(word16, byte);

typedef void (Eq_70)(word16, byte);

typedef void (Eq_73)(word16, byte);

typedef void (Eq_90)(word16, byte);

typedef void (Eq_93)(word16, byte);

typedef void (Eq_97)(word16, byte);

typedef struct Eq_115 {
	byte b0000;	// 0
} Eq_115;

typedef struct Eq_127 {
	uint16 w0181;	// 181
	word16 w01C4;	// 1C4
	word16 w01C6;	// 1C6
} Eq_127;

typedef byte (Eq_162)(byte);

typedef struct Eq_181 {
} Eq_181;

typedef union Eq_182 {
	ptr16 u0;
	Eq_218 Eq_181::* u1;
} Eq_182;

typedef struct Eq_191 {
	byte b0000;	// 0
	byte b0001;	// 1
	byte b0002;	// 2
} Eq_191;

typedef Eq_115 Eq_218struct Eq_218 {
	Eq_115 * ptrFFFFFFF6;	// FFFFFFF6
} Eq_218;

