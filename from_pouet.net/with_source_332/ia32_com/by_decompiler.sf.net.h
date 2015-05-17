// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_332/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr (struct "Globals"))
  OrigDataType: (ptr (struct "Globals"))
T_2: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr (fn T_6 (T_5)))
  OrigDataType: (ptr (fn T_6 (T_5)))
T_3: (in signature of bios_video_set_mode : void)
  Class: Eq_2
  DataType: 
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
T_7: (in es_5 : selector)
  Class: Eq_7
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_8: (in al_17 : byte)
  Class: Eq_8
  DataType: byte
  OrigDataType: byte
T_9: (in fn0C00_014E : ptr32)
  Class: Eq_9
  DataType: (ptr (fn T_15 (T_13, T_14)))
  OrigDataType: (ptr (fn T_15 (T_13, T_14)))
T_10: (in signature of fn0C00_014E : void)
  Class: Eq_9
  DataType: 
  OrigDataType: 
T_11: (in ds : selector)
  Class: Eq_11
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_12: (in esOut : ptr16)
  Class: Eq_12
  DataType: ptr16
  OrigDataType: ptr16
T_13: (in ds : selector)
  Class: Eq_11
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_14: (in out es_5 : ptr16)
  Class: Eq_12
  DataType: (ptr (ptr (segment)))
  OrigDataType: (ptr (ptr (segment)))
T_15: (in fn0C00_014E(ds, out es_5) : byte)
  Class: Eq_8
  DataType: byte
  OrigDataType: byte
T_16: (in __inb : ptr32)
  Class: Eq_16
  DataType: (ptr (fn T_18 (T_17)))
  OrigDataType: (ptr (fn T_18 (T_17)))
T_17: (in 0x03DA : word16)
  Class: Eq_17
  DataType: word16
  OrigDataType: word16
T_18: (in __inb(0x03DA) : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_19: (in 0x08 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_20: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_21: (in 0x00 : byte)
  Class: Eq_20
  DataType: byte
  OrigDataType: byte
T_22: (in (__inb(0x03DA) & 0x08) != 0x00 : bool)
  Class: Eq_22
  DataType: bool
  OrigDataType: bool
T_23: (in __inb : ptr32)
  Class: Eq_23
  DataType: (ptr (fn T_25 (T_24)))
  OrigDataType: (ptr (fn T_25 (T_24)))
T_24: (in 0x03DA : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in __inb(0x03DA) : byte)
  Class: Eq_25
  DataType: byte
  OrigDataType: byte
T_26: (in 0x08 : byte)
  Class: Eq_26
  DataType: byte
  OrigDataType: byte
T_27: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_28: (in 0x00 : byte)
  Class: Eq_27
  DataType: byte
  OrigDataType: byte
T_29: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_29
  DataType: bool
  OrigDataType: bool
T_30: (in Z_29 : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_31: (in fn0C00_02A7 : ptr32)
  Class: Eq_31
  DataType: (ptr (fn T_35 (T_7, T_13)))
  OrigDataType: (ptr (fn T_35 (T_7, T_13)))
T_32: (in signature of fn0C00_02A7 : void)
  Class: Eq_31
  DataType: 
  OrigDataType: 
T_33: (in es : selector)
  Class: Eq_7
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_34: (in ds : selector)
  Class: Eq_11
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_35: (in fn0C00_02A7(es_5, ds) : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_36: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_36
  DataType: (ptr (fn T_40 (T_39)))
  OrigDataType: (ptr (fn T_40 (T_39)))
T_37: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_36
  DataType: 
  OrigDataType: 
T_38: (in alOut : ptr16)
  Class: Eq_38
  DataType: ptr16
  OrigDataType: ptr16
T_39: (in out al_17 : ptr16)
  Class: Eq_38
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_40: (in bios_kbd_check_keystroke(out al_17) : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in fn0C00_01A7 : ptr32)
  Class: Eq_41
  DataType: (ptr (fn T_45 (T_8, T_13)))
  OrigDataType: (ptr (fn T_45 (T_8, T_13)))
T_42: (in signature of fn0C00_01A7 : void)
  Class: Eq_41
  DataType: 
  OrigDataType: 
T_43: (in al : byte)
  Class: Eq_8
  DataType: byte
  OrigDataType: byte
T_44: (in ds : selector)
  Class: Eq_11
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_45: (in fn0C00_01A7(al_17, ds) : void)
  Class: Eq_45
  DataType: void
  OrigDataType: void
T_46: (in fn0C00_01C2 : ptr32)
  Class: Eq_46
  DataType: (ptr (fn T_50 (T_7, T_13)))
  OrigDataType: (ptr (fn T_50 (T_7, T_13)))
T_47: (in signature of fn0C00_01C2 : void)
  Class: Eq_46
  DataType: 
  OrigDataType: 
T_48: (in es : selector)
  Class: Eq_7
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_49: (in ds : selector)
  Class: Eq_11
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_50: (in fn0C00_01C2(es_5, ds) : void)
  Class: Eq_50
  DataType: void
  OrigDataType: void
T_51: (in msdos_terminate_program20 : ptr32)
  Class: Eq_51
  DataType: (ptr (fn T_53 ()))
  OrigDataType: (ptr (fn T_53 ()))
T_52: (in signature of msdos_terminate_program20 : void)
  Class: Eq_51
  DataType: 
  OrigDataType: 
T_53: (in msdos_terminate_program20() : void)
  Class: Eq_53
  DataType: void
  OrigDataType: void
T_54: (in ax : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in 0x29B2 : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_56: (in ds : selector)
  Class: Eq_11
  DataType: (ptr (segment (13E T_58 t013E)))
  OrigDataType: (ptr (segment (13E T_58 t013E)))
T_57: (in 0x013E : word16)
  Class: Eq_57
  DataType: (memptr T_56 (struct (0 T_58 t0000)))
  OrigDataType: (memptr T_56 (struct (0 T_58 t0000)))
T_58: (in Mem10[ds:0x013E:word16] : word16)
  Class: Eq_55
  DataType: word16
  OrigDataType: word16
T_59: (in 0x29B2 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in al : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_61: (in es_4 : selector)
  Class: Eq_61
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_62: (in 0xA000 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in *esOut : word16)
  Class: Eq_62
  DataType: 
  OrigDataType: 
T_64: (in di_12 : word16)
  Class: Eq_64
  DataType: 
  OrigDataType: 
T_65: (in 0x0000 : word16)
  Class: Eq_64
  DataType: 
  OrigDataType: 
T_66: (in cx_10 : word16)
  Class: Eq_66
  DataType: 
  OrigDataType: 
T_67: (in 0x0140 : word16)
  Class: Eq_66
  DataType: 
  OrigDataType: 
T_68: (in cx_14 : word16)
  Class: Eq_68
  DataType: 
  OrigDataType: 
T_69: (in 0xF938 : word16)
  Class: Eq_68
  DataType: 
  OrigDataType: 
T_70: (in 0x00 : byte)
  Class: Eq_70
  DataType: 
  OrigDataType: 
T_71: (in 0xA000 : selector)
  Class: Eq_7
  DataType: 
  OrigDataType: 
T_72: (in 0x0000 : word16)
  Class: Eq_72
  DataType: 
  OrigDataType: 
T_73: (in di_12 + 0x0000 : word16)
  Class: Eq_73
  DataType: 
  OrigDataType: 
T_74: (in Mem11[0xA000:di_12 + 0x0000:byte] : byte)
  Class: Eq_70
  DataType: 
  OrigDataType: 
T_75: (in 0x0001 : word16)
  Class: Eq_75
  DataType: 
  OrigDataType: 
T_76: (in di_12 + 0x0001 : word16)
  Class: Eq_64
  DataType: 
  OrigDataType: 
T_77: (in 0x0001 : word16)
  Class: Eq_77
  DataType: 
  OrigDataType: 
T_78: (in cx_10 - 0x0001 : word16)
  Class: Eq_66
  DataType: 
  OrigDataType: 
T_79: (in 0x0000 : word16)
  Class: Eq_66
  DataType: 
  OrigDataType: 
T_80: (in cx_10 == 0x0000 : bool)
  Class: Eq_80
  DataType: 
  OrigDataType: 
T_81: (in fn0C00_0167 : ptr32)
  Class: Eq_81
  DataType: 
  OrigDataType: 
T_82: (in signature of fn0C00_0167 : void)
  Class: Eq_81
  DataType: 
  OrigDataType: 
T_83: (in es : selector)
  Class: Eq_7
  DataType: 
  OrigDataType: 
T_84: (in ds : selector)
  Class: Eq_11
  DataType: 
  OrigDataType: 
T_85: (in fn0C00_0167(0xA000, ds) : byte)
  Class: Eq_85
  DataType: 
  OrigDataType: 
T_86: (in 0x12 : byte)
  Class: Eq_86
  DataType: 
  OrigDataType: 
T_87: (in 0x0000 : word16)
  Class: Eq_87
  DataType: 
  OrigDataType: 
T_88: (in di_12 + 0x0000 : word16)
  Class: Eq_88
  DataType: 
  OrigDataType: 
T_89: (in Mem18[0xA000:di_12 + 0x0000:byte] : byte)
  Class: Eq_86
  DataType: 
  OrigDataType: 
T_90: (in 0x0001 : word16)
  Class: Eq_90
  DataType: 
  OrigDataType: 
T_91: (in di_12 + 0x0001 : word16)
  Class: Eq_64
  DataType: 
  OrigDataType: 
T_92: (in 0x0001 : word16)
  Class: Eq_92
  DataType: 
  OrigDataType: 
T_93: (in cx_14 - 0x0001 : word16)
  Class: Eq_68
  DataType: 
  OrigDataType: 
T_94: (in 0x0000 : word16)
  Class: Eq_68
  DataType: 
  OrigDataType: 
T_95: (in cx_14 == 0x0000 : bool)
  Class: Eq_95
  DataType: 
  OrigDataType: 
T_96: (in al : byte)
  Class: Eq_96
  DataType: 
  OrigDataType: 
T_97: (in fn0C00_0140 : ptr32)
  Class: Eq_97
  DataType: 
  OrigDataType: 
T_98: (in signature of fn0C00_0140 : void)
  Class: Eq_97
  DataType: 
  OrigDataType: 
T_99: (in fn0C00_0140(ds) : word16)
  Class: Eq_99
  DataType: 
  OrigDataType: 
T_100: (in 0x007F : word16)
  Class: Eq_100
  DataType: 
  OrigDataType: 
T_101: (in fn0C00_0140(ds) & 0x007F : word16)
  Class: Eq_101
  DataType: 
  OrigDataType: 
T_102: (in 0x0024 : word16)
  Class: Eq_102
  DataType: 
  OrigDataType: 
T_103: (in (fn0C00_0140(ds) & 0x007F) + 0x0024 : word16)
  Class: Eq_103
  DataType: 
  OrigDataType: 
T_104: (in 0x012E : word16)
  Class: Eq_104
  DataType: 
  OrigDataType: 
T_105: (in Mem6[ds:0x012E:word16] : word16)
  Class: Eq_103
  DataType: 
  OrigDataType: 
T_106: (in 0x00A0 : word16)
  Class: Eq_106
  DataType: 
  OrigDataType: 
T_107: (in 0x012C : word16)
  Class: Eq_107
  DataType: 
  OrigDataType: 
T_108: (in Mem7[ds:0x012C:word16] : word16)
  Class: Eq_106
  DataType: 
  OrigDataType: 
T_109: (in 0x001E : word16)
  Class: Eq_109
  DataType: 
  OrigDataType: 
T_110: (in 0x0138 : word16)
  Class: Eq_110
  DataType: 
  OrigDataType: 
T_111: (in Mem8[ds:0x0138:word16] : word16)
  Class: Eq_109
  DataType: 
  OrigDataType: 
T_112: (in bx_11 : word16)
  Class: Eq_112
  DataType: 
  OrigDataType: 
T_113: (in 0x013A : word16)
  Class: Eq_113
  DataType: 
  OrigDataType: 
T_114: (in Mem8[ds:0x013A:word16] : word16)
  Class: Eq_112
  DataType: 
  OrigDataType: 
T_115: (in 0x00A0 : word16)
  Class: Eq_112
  DataType: 
  OrigDataType: 
T_116: (in bx_11 < 0x00A0 : bool)
  Class: Eq_116
  DataType: 
  OrigDataType: 
T_117: (in 0x0F : byte)
  Class: Eq_117
  DataType: 
  OrigDataType: 
T_118: (in 0x0000 : word16)
  Class: Eq_118
  DataType: 
  OrigDataType: 
T_119: (in bx_11 + 0x0000 : word16)
  Class: Eq_119
  DataType: 
  OrigDataType: 
T_120: (in Mem15[es:bx_11 + 0x0000:byte] : byte)
  Class: Eq_117
  DataType: 
  OrigDataType: 
T_121: (in bx_17 : word16)
  Class: Eq_121
  DataType: 
  OrigDataType: 
T_122: (in 0x013C : word16)
  Class: Eq_122
  DataType: 
  OrigDataType: 
T_123: (in Mem15[ds:0x013C:word16] : word16)
  Class: Eq_121
  DataType: 
  OrigDataType: 
T_124: (in 0x00A0 : word16)
  Class: Eq_121
  DataType: 
  OrigDataType: 
T_125: (in bx_17 > 0x00A0 : bool)
  Class: Eq_125
  DataType: 
  OrigDataType: 
T_126: (in 0x00A0 : word16)
  Class: Eq_126
  DataType: 
  OrigDataType: 
T_127: (in 0x013A : word16)
  Class: Eq_127
  DataType: 
  OrigDataType: 
T_128: (in Mem24[ds:0x013A:word16] : word16)
  Class: Eq_126
  DataType: 
  OrigDataType: 
T_129: (in 0x0000 : word16)
  Class: Eq_112
  DataType: 
  OrigDataType: 
T_130: (in 0x0F : byte)
  Class: Eq_130
  DataType: 
  OrigDataType: 
T_131: (in 0x0000 : word16)
  Class: Eq_131
  DataType: 
  OrigDataType: 
T_132: (in bx_17 + 0x0000 : word16)
  Class: Eq_132
  DataType: 
  OrigDataType: 
T_133: (in Mem21[es:bx_17 + 0x0000:byte] : byte)
  Class: Eq_130
  DataType: 
  OrigDataType: 
T_134: (in 0xA0 : byte)
  Class: Eq_134
  DataType: 
  OrigDataType: 
T_135: (in 0x00A0 : word16)
  Class: Eq_135
  DataType: 
  OrigDataType: 
T_136: (in 0x013C : word16)
  Class: Eq_136
  DataType: 
  OrigDataType: 
T_137: (in Mem22[ds:0x013C:word16] : word16)
  Class: Eq_135
  DataType: 
  OrigDataType: 
T_138: (in 0x013F : word16)
  Class: Eq_121
  DataType: 
  OrigDataType: 
T_139: (in 0x0000 : word16)
  Class: Eq_139
  DataType: 
  OrigDataType: 
T_140: (in 0x012A : word16)
  Class: Eq_140
  DataType: 
  OrigDataType: 
T_141: (in Mem2[ds:0x012A:word16] : word16)
  Class: Eq_139
  DataType: 
  OrigDataType: 
T_142: (in __syscall : ptr32)
  Class: Eq_142
  DataType: 
  OrigDataType: 
T_143: (in 0x16 : byte)
  Class: Eq_143
  DataType: 
  OrigDataType: 
T_144: (in __syscall(0x16) : void)
  Class: Eq_144
  DataType: 
  OrigDataType: 
T_145: (in 0x04 : byte)
  Class: Eq_145
  DataType: 
  OrigDataType: 
T_146: (in al & 0x04 : byte)
  Class: Eq_146
  DataType: 
  OrigDataType: 
T_147: (in 0x00 : byte)
  Class: Eq_146
  DataType: 
  OrigDataType: 
T_148: (in (al & 0x04) == 0x00 : bool)
  Class: Eq_148
  DataType: 
  OrigDataType: 
T_149: (in 0x08 : byte)
  Class: Eq_149
  DataType: 
  OrigDataType: 
T_150: (in al & 0x08 : byte)
  Class: Eq_150
  DataType: 
  OrigDataType: 
T_151: (in 0x00 : byte)
  Class: Eq_150
  DataType: 
  OrigDataType: 
T_152: (in (al & 0x08) == 0x00 : bool)
  Class: Eq_152
  DataType: 
  OrigDataType: 
T_153: (in 0x012A : word16)
  Class: Eq_153
  DataType: 
  OrigDataType: 
T_154: (in Mem2[ds:0x012A:word16] : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_155: (in 0x0001 : word16)
  Class: Eq_155
  DataType: 
  OrigDataType: 
T_156: (in Mem2[ds:0x012A:word16] + 0x0001 : word16)
  Class: Eq_156
  DataType: 
  OrigDataType: 
T_157: (in Mem17[ds:0x012A:word16] : word16)
  Class: Eq_156
  DataType: 
  OrigDataType: 
T_158: (in 0x012A : word16)
  Class: Eq_158
  DataType: 
  OrigDataType: 
T_159: (in Mem2[ds:0x012A:word16] : word16)
  Class: Eq_159
  DataType: 
  OrigDataType: 
T_160: (in 0x0001 : word16)
  Class: Eq_160
  DataType: 
  OrigDataType: 
T_161: (in Mem2[ds:0x012A:word16] - 0x0001 : word16)
  Class: Eq_161
  DataType: 
  OrigDataType: 
T_162: (in Mem14[ds:0x012A:word16] : word16)
  Class: Eq_161
  DataType: 
  OrigDataType: 
T_163: (in bx_10 : word16)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_164: (in 0x0128 : word16)
  Class: Eq_164
  DataType: 
  OrigDataType: 
T_165: (in Mem0[ds:0x0128:word16] : word16)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_166: (in 0x012C : word16)
  Class: Eq_166
  DataType: 
  OrigDataType: 
T_167: (in Mem0[ds:0x012C:word16] : word16)
  Class: Eq_167
  DataType: 
  OrigDataType: 
T_168: (in 0x00E6 : word16)
  Class: Eq_167
  DataType: 
  OrigDataType: 
T_169: (in Mem0[ds:0x012C:word16] < 0x00E6 : bool)
  Class: Eq_169
  DataType: 
  OrigDataType: 
T_170: (in 0x0128 : word16)
  Class: Eq_170
  DataType: 
  OrigDataType: 
T_171: (in Mem13[ds:0x0128:word16] : word16)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_172: (in bx_14 : word16)
  Class: Eq_172
  DataType: 
  OrigDataType: 
T_173: (in 0x012A : word16)
  Class: Eq_173
  DataType: 
  OrigDataType: 
T_174: (in Mem13[ds:0x012A:word16] : word16)
  Class: Eq_172
  DataType: 
  OrigDataType: 
T_175: (in 0x0000 : word16)
  Class: Eq_172
  DataType: 
  OrigDataType: 
T_176: (in bx_14 != 0x0000 : bool)
  Class: Eq_176
  DataType: 
  OrigDataType: 
T_177: (in ax_98 : word16)
  Class: Eq_177
  DataType: 
  OrigDataType: 
T_178: (in 0x012E : word16)
  Class: Eq_178
  DataType: 
  OrigDataType: 
T_179: (in Mem0[ds:0x012E:word16] : word16)
  Class: Eq_177
  DataType: 
  OrigDataType: 
T_180: (in 0x0128 : word16)
  Class: Eq_180
  DataType: 
  OrigDataType: 
T_181: (in Mem0[ds:0x0128:word16] : word16)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_182: (in 0x0005 : word16)
  Class: Eq_182
  DataType: 
  OrigDataType: 
T_183: (in bx_10 + 0x0005 : word16)
  Class: Eq_177
  DataType: 
  OrigDataType: 
T_184: (in ax_98 < bx_10 + 0x0005 : bool)
  Class: Eq_184
  DataType: 
  OrigDataType: 
T_185: (in 0x0001 : word16)
  Class: Eq_185
  DataType: 
  OrigDataType: 
T_186: (in bx_10 - 0x0001 : word16)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_187: (in 0x0003 : word16)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_188: (in bx_10 > 0x0003 : bool)
  Class: Eq_188
  DataType: 
  OrigDataType: 
T_189: (in bx_10 + 0x0005 : word16)
  Class: Eq_177
  DataType: 
  OrigDataType: 
T_190: (in ax_98 > bx_10 + 0x0005 : bool)
  Class: Eq_190
  DataType: 
  OrigDataType: 
T_191: (in 0x0001 : word16)
  Class: Eq_191
  DataType: 
  OrigDataType: 
T_192: (in bx_10 + 0x0001 : word16)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_193: (in 0xFF44 : word16)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_194: (in bx_10 < 0xFF44 : bool)
  Class: Eq_194
  DataType: 
  OrigDataType: 
T_195: (in bx_18 : word16)
  Class: Eq_195
  DataType: 
  OrigDataType: 
T_196: (in 0x0126 : word16)
  Class: Eq_196
  DataType: 
  OrigDataType: 
T_197: (in Mem13[ds:0x0126:word16] : word16)
  Class: Eq_197
  DataType: 
  OrigDataType: 
T_198: (in bx_14 + Mem13[ds:0x0126:word16] : word16)
  Class: Eq_195
  DataType: 
  OrigDataType: 
T_199: (in 0x0002 : word16)
  Class: Eq_195
  DataType: 
  OrigDataType: 
T_200: (in bx_18 >= 0x0002 : bool)
  Class: Eq_200
  DataType: 
  OrigDataType: 
T_201: (in fn0C00_0140 : ptr32)
  Class: Eq_97
  DataType: 
  OrigDataType: 
T_202: (in fn0C00_0140(ds) : word16)
  Class: Eq_202
  DataType: 
  OrigDataType: 
T_203: (in 0x00BD : word16)
  Class: Eq_195
  DataType: 
  OrigDataType: 
T_204: (in bx_18 <= 0x00BD : bool)
  Class: Eq_204
  DataType: 
  OrigDataType: 
T_205: (in 0x0002 : word16)
  Class: Eq_195
  DataType: 
  OrigDataType: 
T_206: (in 0x00BD : word16)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_207: (in 0x0002 : word16)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_208: (in 0x0126 : word16)
  Class: Eq_208
  DataType: 
  OrigDataType: 
T_209: (in Mem25[ds:0x0126:word16] : word16)
  Class: Eq_195
  DataType: 
  OrigDataType: 
T_210: (in 0x0138 : word16)
  Class: Eq_210
  DataType: 
  OrigDataType: 
T_211: (in Mem25[ds:0x0138:word16] : word16)
  Class: Eq_211
  DataType: 
  OrigDataType: 
T_212: (in 0x0000 : word16)
  Class: Eq_211
  DataType: 
  OrigDataType: 
T_213: (in Mem25[ds:0x0138:word16] == 0x0000 : bool)
  Class: Eq_213
  DataType: 
  OrigDataType: 
T_214: (in 0x00BD : word16)
  Class: Eq_195
  DataType: 
  OrigDataType: 
T_215: (in ax_50 : word16)
  Class: Eq_195
  DataType: 
  OrigDataType: 
T_216: (in 0x012E : word16)
  Class: Eq_216
  DataType: 
  OrigDataType: 
T_217: (in Mem25[ds:0x012E:word16] : word16)
  Class: Eq_217
  DataType: 
  OrigDataType: 
T_218: (in 0x0132 : word16)
  Class: Eq_218
  DataType: 
  OrigDataType: 
T_219: (in Mem25[ds:0x0132:word16] : word16)
  Class: Eq_219
  DataType: 
  OrigDataType: 
T_220: (in Mem25[ds:0x012E:word16] + Mem25[ds:0x0132:word16] : word16)
  Class: Eq_195
  DataType: 
  OrigDataType: 
T_221: (in 0x012E : word16)
  Class: Eq_221
  DataType: 
  OrigDataType: 
T_222: (in Mem52[ds:0x012E:word16] : word16)
  Class: Eq_195
  DataType: 
  OrigDataType: 
T_223: (in 0x0002 : word16)
  Class: Eq_195
  DataType: 
  OrigDataType: 
T_224: (in ax_50 != 0x0002 : bool)
  Class: Eq_224
  DataType: 
  OrigDataType: 
T_225: (in 0x0138 : word16)
  Class: Eq_225
  DataType: 
  OrigDataType: 
T_226: (in Mem25[ds:0x0138:word16] : word16)
  Class: Eq_226
  DataType: 
  OrigDataType: 
T_227: (in 0x0001 : word16)
  Class: Eq_227
  DataType: 
  OrigDataType: 
T_228: (in Mem25[ds:0x0138:word16] - 0x0001 : word16)
  Class: Eq_228
  DataType: 
  OrigDataType: 
T_229: (in Mem45[ds:0x0138:word16] : word16)
  Class: Eq_228
  DataType: 
  OrigDataType: 
T_230: (in 0x00C6 : word16)
  Class: Eq_195
  DataType: 
  OrigDataType: 
T_231: (in ax_50 != 0x00C6 : bool)
  Class: Eq_231
  DataType: 
  OrigDataType: 
T_232: (in 0x0001 : word16)
  Class: Eq_232
  DataType: 
  OrigDataType: 
T_233: (in 0x0132 : word16)
  Class: Eq_233
  DataType: 
  OrigDataType: 
T_234: (in Mem94[ds:0x0132:word16] : word16)
  Class: Eq_232
  DataType: 
  OrigDataType: 
T_235: (in cx_58 : word16)
  Class: Eq_235
  DataType: 
  OrigDataType: 
T_236: (in 0x012C : word16)
  Class: Eq_236
  DataType: 
  OrigDataType: 
T_237: (in Mem52[ds:0x012C:word16] : word16)
  Class: Eq_237
  DataType: 
  OrigDataType: 
T_238: (in 0x0130 : word16)
  Class: Eq_238
  DataType: 
  OrigDataType: 
T_239: (in Mem52[ds:0x0130:word16] : word16)
  Class: Eq_239
  DataType: 
  OrigDataType: 
T_240: (in Mem52[ds:0x012C:word16] + Mem52[ds:0x0130:word16] : word16)
  Class: Eq_235
  DataType: 
  OrigDataType: 
T_241: (in 0x012C : word16)
  Class: Eq_241
  DataType: 
  OrigDataType: 
T_242: (in Mem59[ds:0x012C:word16] : word16)
  Class: Eq_235
  DataType: 
  OrigDataType: 
T_243: (in 0x0002 : word16)
  Class: Eq_235
  DataType: 
  OrigDataType: 
T_244: (in cx_58 != 0x0002 : bool)
  Class: Eq_244
  DataType: 
  OrigDataType: 
T_245: (in 0xFFFF : word16)
  Class: Eq_245
  DataType: 
  OrigDataType: 
T_246: (in 0x0132 : word16)
  Class: Eq_246
  DataType: 
  OrigDataType: 
T_247: (in Mem93[ds:0x0132:word16] : word16)
  Class: Eq_245
  DataType: 
  OrigDataType: 
T_248: (in bx_63 : word16)
  Class: Eq_195
  DataType: 
  OrigDataType: 
T_249: (in 0x0128 : word16)
  Class: Eq_249
  DataType: 
  OrigDataType: 
T_250: (in Mem59[ds:0x0128:word16] : word16)
  Class: Eq_195
  DataType: 
  OrigDataType: 
T_251: (in 0x013D : word16)
  Class: Eq_235
  DataType: 
  OrigDataType: 
T_252: (in cx_58 != 0x013D : bool)
  Class: Eq_252
  DataType: 
  OrigDataType: 
T_253: (in ax_50 < bx_18 : bool)
  Class: Eq_253
  DataType: 
  OrigDataType: 
T_254: (in 0x000A : word16)
  Class: Eq_254
  DataType: 
  OrigDataType: 
T_255: (in bx_18 + 0x000A : word16)
  Class: Eq_195
  DataType: 
  OrigDataType: 
T_256: (in ax_50 >= bx_18 + 0x000A : bool)
  Class: Eq_256
  DataType: 
  OrigDataType: 
T_257: (in 0x0001 : word16)
  Class: Eq_257
  DataType: 
  OrigDataType: 
T_258: (in 0x0130 : word16)
  Class: Eq_258
  DataType: 
  OrigDataType: 
T_259: (in Mem92[ds:0x0130:word16] : word16)
  Class: Eq_257
  DataType: 
  OrigDataType: 
T_260: (in 0x0000 : word16)
  Class: Eq_235
  DataType: 
  OrigDataType: 
T_261: (in cx_58 != 0x0000 : bool)
  Class: Eq_261
  DataType: 
  OrigDataType: 
T_262: (in ax_50 < bx_63 : bool)
  Class: Eq_262
  DataType: 
  OrigDataType: 
T_263: (in 0x000A : word16)
  Class: Eq_263
  DataType: 
  OrigDataType: 
T_264: (in bx_63 + 0x000A : word16)
  Class: Eq_195
  DataType: 
  OrigDataType: 
T_265: (in ax_50 >= bx_63 + 0x000A : bool)
  Class: Eq_265
  DataType: 
  OrigDataType: 
T_266: (in 0xFFFF : word16)
  Class: Eq_266
  DataType: 
  OrigDataType: 
T_267: (in 0x0130 : word16)
  Class: Eq_267
  DataType: 
  OrigDataType: 
T_268: (in Mem86[ds:0x0130:word16] : word16)
  Class: Eq_266
  DataType: 
  OrigDataType: 
T_269: (in 0x013F : word16)
  Class: Eq_235
  DataType: 
  OrigDataType: 
T_270: (in cx_58 != 0x013F : bool)
  Class: Eq_270
  DataType: 
  OrigDataType: 
T_271: (in 0x013C : word16)
  Class: Eq_271
  DataType: 
  OrigDataType: 
T_272: (in Mem59[ds:0x013C:word16] : word16)
  Class: Eq_272
  DataType: 
  OrigDataType: 
T_273: (in 0xFFFE : word16)
  Class: Eq_273
  DataType: 
  OrigDataType: 
T_274: (in Mem59[ds:0x013C:word16] + 0xFFFE : word16)
  Class: Eq_274
  DataType: 
  OrigDataType: 
T_275: (in Mem71[ds:0x013C:word16] : word16)
  Class: Eq_274
  DataType: 
  OrigDataType: 
T_276: (in fn0C00_0167 : ptr32)
  Class: Eq_81
  DataType: 
  OrigDataType: 
T_277: (in fn0C00_0167(es, ds) : byte)
  Class: Eq_277
  DataType: 
  OrigDataType: 
T_278: (in 0x013A : word16)
  Class: Eq_278
  DataType: 
  OrigDataType: 
T_279: (in Mem59[ds:0x013A:word16] : word16)
  Class: Eq_279
  DataType: 
  OrigDataType: 
T_280: (in 0x0002 : word16)
  Class: Eq_280
  DataType: 
  OrigDataType: 
T_281: (in Mem59[ds:0x013A:word16] + 0x0002 : word16)
  Class: Eq_281
  DataType: 
  OrigDataType: 
T_282: (in Mem78[ds:0x013A:word16] : word16)
  Class: Eq_281
  DataType: 
  OrigDataType: 
T_283: (in fn0C00_0167 : ptr32)
  Class: Eq_81
  DataType: 
  OrigDataType: 
T_284: (in fn0C00_0167(es, ds) : byte)
  Class: Eq_284
  DataType: 
  OrigDataType: 
T_285: (in Z : bool)
  Class: Eq_285
  DataType: 
  OrigDataType: 
T_286: (in 0x12 : byte)
  Class: Eq_286
  DataType: 
  OrigDataType: 
T_287: (in 0x0136 : word16)
  Class: Eq_287
  DataType: 
  OrigDataType: 
T_288: (in Mem0[ds:0x0136:word16] : word16)
  Class: Eq_288
  DataType: 
  OrigDataType: 
T_289: (in 0x0140 : word16)
  Class: Eq_289
  DataType: 
  OrigDataType: 
T_290: (in Mem0[ds:0x0136:word16] *u 0x0140 : uint32)
  Class: Eq_290
  DataType: 
  OrigDataType: 
T_291: (in (word16) (Mem0[ds:0x0136:word16] *u 0x0140) : word16)
  Class: Eq_291
  DataType: 
  OrigDataType: 
T_292: (in 0x0134 : word16)
  Class: Eq_292
  DataType: 
  OrigDataType: 
T_293: (in Mem0[ds:0x0134:word16] : word16)
  Class: Eq_293
  DataType: 
  OrigDataType: 
T_294: (in (word16) (Mem0[ds:0x0136:word16] *u 0x0140) + Mem0[ds:0x0134:word16] : word16)
  Class: Eq_294
  DataType: 
  OrigDataType: 
T_295: (in Mem10[es:(word16) (Mem0[ds:0x0136:word16] *u 0x0140) + Mem0[ds:0x0134:word16]:byte] : byte)
  Class: Eq_286
  DataType: 
  OrigDataType: 
T_296: (in ax_12 : word16)
  Class: Eq_296
  DataType: 
  OrigDataType: 
T_297: (in 0x012E : word16)
  Class: Eq_297
  DataType: 
  OrigDataType: 
T_298: (in Mem10[ds:0x012E:word16] : word16)
  Class: Eq_296
  DataType: 
  OrigDataType: 
T_299: (in 0x0136 : word16)
  Class: Eq_299
  DataType: 
  OrigDataType: 
T_300: (in Mem13[ds:0x0136:word16] : word16)
  Class: Eq_296
  DataType: 
  OrigDataType: 
T_301: (in 0x0E : byte)
  Class: Eq_301
  DataType: 
  OrigDataType: 
T_302: (in 0x0140 : word16)
  Class: Eq_302
  DataType: 
  OrigDataType: 
T_303: (in ax_12 *u 0x0140 : uint32)
  Class: Eq_303
  DataType: 
  OrigDataType: 
T_304: (in (word16) (ax_12 *u 0x0140) : word16)
  Class: Eq_304
  DataType: 
  OrigDataType: 
T_305: (in 0x012C : word16)
  Class: Eq_305
  DataType: 
  OrigDataType: 
T_306: (in Mem13[ds:0x012C:word16] : word16)
  Class: Eq_306
  DataType: 
  OrigDataType: 
T_307: (in (word16) (ax_12 *u 0x0140) + Mem13[ds:0x012C:word16] : word16)
  Class: Eq_307
  DataType: 
  OrigDataType: 
T_308: (in Mem19[es:(word16) (ax_12 *u 0x0140) + Mem13[ds:0x012C:word16]:byte] : byte)
  Class: Eq_301
  DataType: 
  OrigDataType: 
T_309: (in 0x012C : word16)
  Class: Eq_309
  DataType: 
  OrigDataType: 
T_310: (in Mem19[ds:0x012C:word16] : word16)
  Class: Eq_310
  DataType: 
  OrigDataType: 
T_311: (in 0x0134 : word16)
  Class: Eq_311
  DataType: 
  OrigDataType: 
T_312: (in Mem21[ds:0x0134:word16] : word16)
  Class: Eq_310
  DataType: 
  OrigDataType: 
T_313: (in ax_26 : word16)
  Class: Eq_313
  DataType: 
  OrigDataType: 
T_314: (in 0x0126 : word16)
  Class: Eq_314
  DataType: 
  OrigDataType: 
T_315: (in Mem21[ds:0x0126:word16] : word16)
  Class: Eq_315
  DataType: 
  OrigDataType: 
T_316: (in 0x0001 : word16)
  Class: Eq_316
  DataType: 
  OrigDataType: 
T_317: (in Mem21[ds:0x0126:word16] - 0x0001 : word16)
  Class: Eq_317
  DataType: 
  OrigDataType: 
T_318: (in 0x0140 : word16)
  Class: Eq_318
  DataType: 
  OrigDataType: 
T_319: (in (Mem21[ds:0x0126:word16] - 0x0001) *u 0x0140 : uint32)
  Class: Eq_319
  DataType: 
  OrigDataType: 
T_320: (in (word16) ((Mem21[ds:0x0126:word16] - 0x0001) *u 0x0140) : word16)
  Class: Eq_313
  DataType: 
  OrigDataType: 
T_321: (in 0x12 : byte)
  Class: Eq_321
  DataType: 
  OrigDataType: 
T_322: (in 0x0001 : word16)
  Class: Eq_322
  DataType: 
  OrigDataType: 
T_323: (in ax_26 + 0x0001 : word16)
  Class: Eq_323
  DataType: 
  OrigDataType: 
T_324: (in Mem30[es:ax_26 + 0x0001:byte] : byte)
  Class: Eq_321
  DataType: 
  OrigDataType: 
T_325: (in bx_29 : word16)
  Class: Eq_325
  DataType: 
  OrigDataType: 
T_326: (in ax_26 + 0x0001 : word16)
  Class: Eq_325
  DataType: 
  OrigDataType: 
T_327: (in cx_31 : word16)
  Class: Eq_327
  DataType: 
  OrigDataType: 
T_328: (in 0x000A : word16)
  Class: Eq_327
  DataType: 
  OrigDataType: 
T_329: (in 0x0140 : word16)
  Class: Eq_329
  DataType: 
  OrigDataType: 
T_330: (in bx_29 + 0x0140 : word16)
  Class: Eq_325
  DataType: 
  OrigDataType: 
T_331: (in 0x0A : byte)
  Class: Eq_331
  DataType: 
  OrigDataType: 
T_332: (in 0x0000 : word16)
  Class: Eq_332
  DataType: 
  OrigDataType: 
T_333: (in bx_29 + 0x0000 : word16)
  Class: Eq_333
  DataType: 
  OrigDataType: 
T_334: (in Mem36[es:bx_29 + 0x0000:byte] : byte)
  Class: Eq_331
  DataType: 
  OrigDataType: 
T_335: (in 0x0001 : word16)
  Class: Eq_335
  DataType: 
  OrigDataType: 
T_336: (in cx_31 - 0x0001 : word16)
  Class: Eq_327
  DataType: 
  OrigDataType: 
T_337: (in 0x0000 : word16)
  Class: Eq_327
  DataType: 
  OrigDataType: 
T_338: (in cx_31 != 0x0000 : bool)
  Class: Eq_338
  DataType: 
  OrigDataType: 
T_339: (in 0x12 : byte)
  Class: Eq_339
  DataType: 
  OrigDataType: 
T_340: (in 0x0140 : word16)
  Class: Eq_340
  DataType: 
  OrigDataType: 
T_341: (in bx_29 + 0x0140 : word16)
  Class: Eq_341
  DataType: 
  OrigDataType: 
T_342: (in Mem39[es:bx_29 + 0x0140:byte] : byte)
  Class: Eq_339
  DataType: 
  OrigDataType: 
T_343: (in ax_44 : word16)
  Class: Eq_343
  DataType: 
  OrigDataType: 
T_344: (in 0x0128 : word16)
  Class: Eq_344
  DataType: 
  OrigDataType: 
T_345: (in Mem39[ds:0x0128:word16] : word16)
  Class: Eq_345
  DataType: 
  OrigDataType: 
T_346: (in 0x0001 : word16)
  Class: Eq_346
  DataType: 
  OrigDataType: 
T_347: (in Mem39[ds:0x0128:word16] - 0x0001 : word16)
  Class: Eq_347
  DataType: 
  OrigDataType: 
T_348: (in 0x0140 : word16)
  Class: Eq_348
  DataType: 
  OrigDataType: 
T_349: (in (Mem39[ds:0x0128:word16] - 0x0001) *u 0x0140 : uint32)
  Class: Eq_349
  DataType: 
  OrigDataType: 
T_350: (in (word16) ((Mem39[ds:0x0128:word16] - 0x0001) *u 0x0140) : word16)
  Class: Eq_343
  DataType: 
  OrigDataType: 
T_351: (in 0x12 : byte)
  Class: Eq_351
  DataType: 
  OrigDataType: 
T_352: (in 0x013E : word16)
  Class: Eq_352
  DataType: 
  OrigDataType: 
T_353: (in ax_44 + 0x013E : word16)
  Class: Eq_353
  DataType: 
  OrigDataType: 
T_354: (in Mem48[es:ax_44 + 0x013E:byte] : byte)
  Class: Eq_351
  DataType: 
  OrigDataType: 
T_355: (in bx_47 : word16)
  Class: Eq_355
  DataType: 
  OrigDataType: 
T_356: (in ax_44 + 0x013E : word16)
  Class: Eq_355
  DataType: 
  OrigDataType: 
T_357: (in cx_49 : word16)
  Class: Eq_357
  DataType: 
  OrigDataType: 
T_358: (in 0x000A : word16)
  Class: Eq_357
  DataType: 
  OrigDataType: 
T_359: (in 0x0140 : word16)
  Class: Eq_359
  DataType: 
  OrigDataType: 
T_360: (in bx_47 + 0x0140 : word16)
  Class: Eq_355
  DataType: 
  OrigDataType: 
T_361: (in 0x0C : byte)
  Class: Eq_361
  DataType: 
  OrigDataType: 
T_362: (in 0x0000 : word16)
  Class: Eq_362
  DataType: 
  OrigDataType: 
T_363: (in bx_47 + 0x0000 : word16)
  Class: Eq_363
  DataType: 
  OrigDataType: 
T_364: (in Mem54[es:bx_47 + 0x0000:byte] : byte)
  Class: Eq_361
  DataType: 
  OrigDataType: 
T_365: (in 0x0001 : word16)
  Class: Eq_365
  DataType: 
  OrigDataType: 
T_366: (in cx_49 - 0x0001 : word16)
  Class: Eq_357
  DataType: 
  OrigDataType: 
T_367: (in 0x0000 : word16)
  Class: Eq_357
  DataType: 
  OrigDataType: 
T_368: (in cx_49 != 0x0000 : bool)
  Class: Eq_368
  DataType: 
  OrigDataType: 
T_369: (in 0x12 : byte)
  Class: Eq_369
  DataType: 
  OrigDataType: 
T_370: (in 0x0140 : word16)
  Class: Eq_370
  DataType: 
  OrigDataType: 
T_371: (in bx_47 + 0x0140 : word16)
  Class: Eq_371
  DataType: 
  OrigDataType: 
T_372: (in Mem60[es:bx_47 + 0x0140:byte] : byte)
  Class: Eq_369
  DataType: 
  OrigDataType: 
T_373: (in bx_47 + 0x0140 : word16)
  Class: Eq_373
  DataType: 
  OrigDataType: 
T_374: (in cond(bx_47 + 0x0140) : byte)
  Class: Eq_374
  DataType: 
  OrigDataType: 
*/
