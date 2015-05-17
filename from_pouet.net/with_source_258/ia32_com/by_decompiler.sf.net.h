// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_258/ia32_com/subject.exe
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
T_7: (in ax_16 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in 0x0086 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_9: (in ax_214 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_10: (in 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_11: (in ax_214 != 0x0001 : bool)
  Class: Eq_11
  DataType: bool
  OrigDataType: bool
T_12: (in al_31 : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_13: (in 0xA000 : selector)
  Class: Eq_13
  DataType: (ptr (segment (0 (arr T_380) a0000) (F3 T_88 t00F3)))
  OrigDataType: (ptr (segment (0 (arr T_380) a0000) (F3 T_88 t00F3)))
T_14: (in di_18 : word16)
  Class: Eq_14
  DataType: (memptr T_13 (struct 0001 (0 T_17 t0000)))
  OrigDataType: (memptr T_13 (struct 0001 (0 T_17 t0000)))
T_15: (in 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in di_18 + 0x0000 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in Mem40[0xA000:di_18 + 0x0000:byte] : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_18: (in cx : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_19: (in 0x0001 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in cx - 0x0001 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_21: (in 0x0001 : word16)
  Class: Eq_21
  DataType: word16
  OrigDataType: word16
T_22: (in di_18 + 0x0001 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_23: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in ch_22 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_25: (in 0x0000 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_26: (in cx == 0x0000 : bool)
  Class: Eq_26
  DataType: bool
  OrigDataType: bool
T_27: (in 0x0001 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in cx - 0x0001 : word16)
  Class: Eq_18
  DataType: word16
  OrigDataType: word16
T_29: (in fn0C00_01E3 : ptr32)
  Class: Eq_29
  DataType: (ptr (fn T_31 ()))
  OrigDataType: (ptr (fn T_31 ()))
T_30: (in signature of fn0C00_01E3 : void)
  Class: Eq_29
  DataType: 
  OrigDataType: 
T_31: (in fn0C00_01E3() : void)
  Class: Eq_31
  DataType: void
  OrigDataType: void
T_32: (in 0x0001 : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_33: (in ax_214 - 0x0001 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_34: (in 0x0000 : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_35: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_36: (in sp_136 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in fp : ptr16)
  Class: Eq_36
  DataType: ptr16
  OrigDataType: ptr16
T_38: (in (byte) ax_16 : byte)
  Class: Eq_12
  DataType: byte
  OrigDataType: byte
T_39: (in dx_45 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_40: (in 0x0001 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_41: (in bx_49 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in 0x0140 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_43: (in cl_51 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_44: (in 0x09 : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_45: (in cx_71 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_46: (in fn0C00_01A1 : ptr32)
  Class: Eq_46
  DataType: (ptr (fn T_65 (T_39, T_41, T_58, T_59, T_24, T_60, T_61, T_62, T_63, T_64)))
  OrigDataType: (ptr (fn T_65 (T_39, T_41, T_58, T_59, T_24, T_60, T_61, T_62, T_63, T_64)))
T_47: (in signature of fn0C00_01A1 : void)
  Class: Eq_46
  DataType: 
  OrigDataType: 
T_48: (in dx : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_49: (in bx : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_50: (in bp : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in si : word16)
  Class: Eq_51
  DataType: (memptr T_53 (struct (0 T_186 t0000)))
  OrigDataType: (memptr T_53 (struct (0 T_186 t0000)))
T_52: (in ch : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_53: (in ds : selector)
  Class: Eq_53
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_54: (in dxOut : ptr16)
  Class: Eq_54
  DataType: ptr16
  OrigDataType: ptr16
T_55: (in bxOut : ptr16)
  Class: Eq_55
  DataType: ptr16
  OrigDataType: ptr16
T_56: (in siOut : ptr16)
  Class: Eq_56
  DataType: ptr16
  OrigDataType: ptr16
T_57: (in dsOut : ptr16)
  Class: Eq_57
  DataType: ptr16
  OrigDataType: ptr16
T_58: (in 0xA000 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_59: (in si : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_60: (in ds : selector)
  Class: Eq_53
  DataType: (ptr (segment (200 T_85 t0200)))
  OrigDataType: (ptr (segment (200 T_85 t0200)))
T_61: (in out dx_45 : ptr16)
  Class: Eq_54
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_62: (in out bx_49 : ptr16)
  Class: Eq_55
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_63: (in out si : ptr16)
  Class: Eq_56
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_64: (in out ds : ptr16)
  Class: Eq_57
  DataType: (ptr (ptr (segment)))
  OrigDataType: (ptr (ptr (segment)))
T_65: (in fn0C00_01A1(dx_45, bx_49, 0xA000, si, ch_22, ds, out dx_45, out bx_49, out si, out ds) : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_66: (in 0xFFFE : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in sp_136 + 0xFFFE : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_68: (in 0x0001 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in cx_71 - 0x0001 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in (byte) (cx_71 - 0x0001) : byte)
  Class: Eq_43
  DataType: byte
  OrigDataType: byte
T_71: (in cx_71 - 0x0001 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in SLICE(cx_71 - 0x0001, byte, 8) : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_73: (in 0x0001 : word16)
  Class: Eq_45
  DataType: word16
  OrigDataType: word16
T_74: (in cx_71 != 0x0001 : bool)
  Class: Eq_74
  DataType: bool
  OrigDataType: bool
T_75: (in P : byte)
  Class: Eq_75
  DataType: byte
  OrigDataType: byte
T_76: (in 0x01EC : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_77: (in 0x0D : byte)
  Class: Eq_77
  DataType: byte
  OrigDataType: byte
T_78: (in cl_51 & 0x0D : byte)
  Class: Eq_78
  DataType: byte
  OrigDataType: byte
T_79: (in 0x00 : byte)
  Class: Eq_78
  DataType: byte
  OrigDataType: byte
T_80: (in (cl_51 & 0x0D) == 0x00 : bool)
  Class: Eq_80
  DataType: bool
  OrigDataType: bool
T_81: (in fn0C00_01E3 : ptr32)
  Class: Eq_29
  DataType: (ptr (fn T_82 ()))
  OrigDataType: (ptr (fn T_82 ()))
T_82: (in fn0C00_01E3() : void)
  Class: Eq_82
  DataType: void
  OrigDataType: void
T_83: (in 0xDEADF0AE : word32)
  Class: Eq_83
  DataType: word32
  OrigDataType: word32
T_84: (in 0x0200 : word16)
  Class: Eq_84
  DataType: (memptr T_60 (struct (0 T_85 t0000)))
  OrigDataType: (memptr T_60 (struct (0 T_85 t0000)))
T_85: (in Mem88[ds:0x0200:word32] : word32)
  Class: Eq_83
  DataType: word32
  OrigDataType: word32
T_86: (in 0x1E : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_87: (in 0x00F3 : word16)
  Class: Eq_87
  DataType: (memptr T_13 (struct (0 T_88 t0000)))
  OrigDataType: (memptr T_13 (struct (0 T_88 t0000)))
T_88: (in Mem97[0xA000:0x00F3:byte] : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_89: (in bx_108 : word16)
  Class: Eq_89
  DataType: (memptr T_13 (struct 0001 (0 T_94 t0000)))
  OrigDataType: (memptr T_13 (struct 0001 (0 T_94 t0000)))
T_90: (in 0x0000 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_91: (in 0x0000 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_92: (in bx_108 != 0x0000 : bool)
  Class: Eq_92
  DataType: bool
  OrigDataType: bool
T_93: (in bx_164 : word16)
  Class: Eq_89
  DataType: (memptr T_13 (struct 0001 (FFFFFFFE T_143 tFFFFFFFE) (0 T_94 t0000)))
  OrigDataType: (memptr T_13 (struct 0001 (FFFFFFFE T_143 tFFFFFFFE) (0 T_94 t0000)))
T_94: (in v25_143 : word16)
  Class: Eq_94
  DataType: cups16
  OrigDataType: cups16
T_95: (in 0x0000 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in bx_108 + 0x0000 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_97: (in Mem97[0xA000:bx_108 + 0x0000:byte] : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_98: (in 0x00 : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_99: (in 0x0000 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in bx_108 + 0x0000 : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in Mem144[0xA000:bx_108 + 0x0000:byte] : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_102: (in al_145 : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_103: (in ax_146 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in 0x0100 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in DPB(0x0100, v25_143, 0, 8) : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_106: (in 0x20 : byte)
  Class: Eq_94
  DataType: bcu8
  OrigDataType: bcu8
T_107: (in v25_143 >=u 0x20 : bool)
  Class: Eq_107
  DataType: bool
  OrigDataType: bool
T_108: (in v25_143 != 0x20 : bool)
  Class: Eq_108
  DataType: bool
  OrigDataType: bool
T_109: (in 0x0140 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in bx_108 + 0x0140 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_111: (in bx_108 + 0x0140 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in (byte) (bx_108 + 0x0140) : byte)
  Class: Eq_112
  DataType: byte
  OrigDataType: byte
T_113: (in 0xC0 : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_114: (in (byte) (bx_108 + 0x0140) & 0xC0 : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_115: (in 0x00 : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_116: (in ((byte) (bx_108 + 0x0140) & 0xC0) != 0x00 : bool)
  Class: Eq_116
  DataType: bool
  OrigDataType: bool
T_117: (in 0x0000 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in bx_164 + 0x0000 : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in Mem144[0xA000:bx_164 + 0x0000:byte] : byte)
  Class: Eq_94
  DataType: bcu8
  OrigDataType: bcu8
T_120: (in 0x01 : byte)
  Class: Eq_94
  DataType: bcu8
  OrigDataType: bcu8
T_121: (in Mem144[0xA000:bx_164 + 0x0000:byte] <u 0x01 : bool)
  Class: Eq_121
  DataType: bool
  OrigDataType: bool
T_122: (in 0x0141 : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_123: (in bx_108 + 0x0141 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_124: (in 0x0001 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in ax_146 - 0x0001 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_126: (in (byte) (ax_146 - 0x0001) : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_127: (in 0x18 : byte)
  Class: Eq_127
  DataType: byte
  OrigDataType: byte
T_128: (in v25_143 + 0x18 : byte)
  Class: Eq_128
  DataType: byte
  OrigDataType: byte
T_129: (in DPB(ax_146, v25_143 + 0x18, 0, 8) : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_130: (in 0x0000 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in bx_164 + 0x0000 : word16)
  Class: Eq_131
  DataType: word16
  OrigDataType: word16
T_132: (in Mem165[0xA000:bx_164 + 0x0000:byte] : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_133: (in 0x0001 : word16)
  Class: Eq_133
  DataType: word16
  OrigDataType: word16
T_134: (in bx_164 + 0x0001 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_135: (in 0x0000 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_136: (in bx_164 + 0x0000 : word16)
  Class: Eq_136
  DataType: word16
  OrigDataType: word16
T_137: (in Mem144[0xA000:bx_164 + 0x0000:byte] : byte)
  Class: Eq_94
  DataType: bcu8
  OrigDataType: bcu8
T_138: (in 0x01 : byte)
  Class: Eq_94
  DataType: bcu8
  OrigDataType: bcu8
T_139: (in Mem144[0xA000:bx_164 + 0x0000:byte] <u 0x01 : bool)
  Class: Eq_139
  DataType: bool
  OrigDataType: bool
T_140: (in 0x0002 : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_141: (in bx_164 - 0x0002 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_142: (in bx_164 - 0x0002 : word16)
  Class: Eq_142
  DataType: word16
  OrigDataType: word16
T_143: (in Mem144[0xA000:bx_164 - 0x0002:byte] : byte)
  Class: Eq_143
  DataType: bcu8
  OrigDataType: bcu8
T_144: (in 0x01 : byte)
  Class: Eq_143
  DataType: bcu8
  OrigDataType: bcu8
T_145: (in Mem144[0xA000:bx_164 - 0x0002:byte] <u 0x01 : bool)
  Class: Eq_145
  DataType: bool
  OrigDataType: bool
T_146: (in 0x0001 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_147: (in bx_108 - 0x0001 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_148: (in 0x0000 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_149: (in bx_108 + 0x0000 : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_150: (in Mem97[0xA000:bx_108 + 0x0000:byte] : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_151: (in 0x00 : byte)
  Class: Eq_94
  DataType: byte
  OrigDataType: byte
T_152: (in Mem97[0xA000:bx_108 + 0x0000:byte] == 0x00 : bool)
  Class: Eq_152
  DataType: bool
  OrigDataType: bool
T_153: (in sp_131 : word16)
  Class: Eq_153
  DataType: (memptr T_157 (struct (0 T_53 t0000)))
  OrigDataType: (memptr T_157 (struct (0 T_53 t0000)))
T_154: (in 0x0002 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in sp_136 - 0x0002 : word16)
  Class: Eq_153
  DataType: word16
  OrigDataType: word16
T_156: (in cs : selector)
  Class: Eq_53
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_157: (in ss : selector)
  Class: Eq_157
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_158: (in 0x0000 : word16)
  Class: Eq_158
  DataType: word16
  OrigDataType: word16
T_159: (in sp_131 + 0x0000 : word16)
  Class: Eq_159
  DataType: word16
  OrigDataType: word16
T_160: (in Mem133[ss:sp_131 + 0x0000:word16] : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_161: (in 0x0000 : word16)
  Class: Eq_161
  DataType: word16
  OrigDataType: word16
T_162: (in sp_131 + 0x0000 : word16)
  Class: Eq_162
  DataType: word16
  OrigDataType: word16
T_163: (in Mem133[ss:sp_131 + 0x0000:selector] : selector)
  Class: Eq_53
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_164: (in al_137 : byte)
  Class: Eq_164
  DataType: byte
  OrigDataType: byte
T_165: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_165
  DataType: (ptr (fn T_169 (T_168)))
  OrigDataType: (ptr (fn T_169 (T_168)))
T_166: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_165
  DataType: 
  OrigDataType: 
T_167: (in alOut : ptr16)
  Class: Eq_167
  DataType: ptr16
  OrigDataType: ptr16
T_168: (in out al_137 : ptr16)
  Class: Eq_167
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_169: (in bios_kbd_check_keystroke(out al_137) : byte)
  Class: Eq_169
  DataType: byte
  OrigDataType: byte
T_170: (in 0x0002 : word16)
  Class: Eq_170
  DataType: word16
  OrigDataType: word16
T_171: (in sp_131 + 0x0002 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_172: (in 0x0000 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_173: (in bx_108 == 0x0000 : bool)
  Class: Eq_173
  DataType: bool
  OrigDataType: bool
T_174: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr (fn T_176 (T_175)))
  OrigDataType: (ptr (fn T_176 (T_175)))
T_175: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_176: (in bios_video_set_mode(0x03) : void)
  Class: Eq_176
  DataType: void
  OrigDataType: void
T_177: (in al_141 : byte)
  Class: Eq_177
  DataType: byte
  OrigDataType: byte
T_178: (in bios_kbd_get_keystroke : ptr32)
  Class: Eq_178
  DataType: (ptr (fn T_182 (T_181)))
  OrigDataType: (ptr (fn T_182 (T_181)))
T_179: (in signature of bios_kbd_get_keystroke : void)
  Class: Eq_178
  DataType: 
  OrigDataType: 
T_180: (in alOut : ptr16)
  Class: Eq_180
  DataType: ptr16
  OrigDataType: ptr16
T_181: (in out al_141 : ptr16)
  Class: Eq_180
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_182: (in bios_kbd_get_keystroke(out al_141) : byte)
  Class: Eq_182
  DataType: byte
  OrigDataType: byte
T_183: (in cx : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_184: (in 0x0000 : word16)
  Class: Eq_184
  DataType: word16
  OrigDataType: word16
T_185: (in si + 0x0000 : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_186: (in Mem0[ds:si + 0x0000:word16] : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_187: (in 0x0064 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_188: (in Mem0[ds:si + 0x0000:word16] + 0x0064 : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_189: (in 0x0000 : word16)
  Class: Eq_189
  DataType: word16
  OrigDataType: word16
T_190: (in si + 0x0000 : word16)
  Class: Eq_190
  DataType: word16
  OrigDataType: word16
T_191: (in Mem6[ds:si + 0x0000:word16] : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_192: (in dx_20 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_193: (in bx_21 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_194: (in si_22 : word16)
  Class: Eq_194
  DataType: word16
  OrigDataType: word16
T_195: (in di_23 : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_196: (in ds_24 : selector)
  Class: Eq_53
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_197: (in ch_26 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_198: (in fn0C00_01AB : ptr32)
  Class: Eq_198
  DataType: (ptr (fn T_222 (T_48, T_49, T_50, T_213, T_216, T_52, T_53, T_217, T_218, T_219, T_220, T_221)))
  OrigDataType: (ptr (fn T_222 (T_48, T_49, T_50, T_213, T_216, T_52, T_53, T_217, T_218, T_219, T_220, T_221)))
T_199: (in signature of fn0C00_01AB : void)
  Class: Eq_198
  DataType: 
  OrigDataType: 
T_200: (in dx : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_201: (in bx : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_202: (in bp : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_203: (in si : word16)
  Class: Eq_203
  DataType: word16
  OrigDataType: word16
T_204: (in di : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_205: (in ch : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_206: (in ds : selector)
  Class: Eq_53
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_207: (in dxOut : ptr16)
  Class: Eq_207
  DataType: ptr16
  OrigDataType: ptr16
T_208: (in bxOut : ptr16)
  Class: Eq_208
  DataType: ptr16
  OrigDataType: ptr16
T_209: (in siOut : ptr16)
  Class: Eq_209
  DataType: ptr16
  OrigDataType: ptr16
T_210: (in diOut : ptr16)
  Class: Eq_210
  DataType: ptr16
  OrigDataType: ptr16
T_211: (in dsOut : ptr16)
  Class: Eq_211
  DataType: ptr16
  OrigDataType: ptr16
T_212: (in 0x0002 : word16)
  Class: Eq_212
  DataType: word16
  OrigDataType: word16
T_213: (in si + 0x0002 : word16)
  Class: Eq_203
  DataType: word16
  OrigDataType: word16
T_214: (in 0x0000 : word16)
  Class: Eq_214
  DataType: word16
  OrigDataType: word16
T_215: (in si + 0x0000 : word16)
  Class: Eq_215
  DataType: word16
  OrigDataType: word16
T_216: (in Mem6[ds:si + 0x0000:word16] : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_217: (in out dx_20 : ptr16)
  Class: Eq_207
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_218: (in out bx_21 : ptr16)
  Class: Eq_208
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_219: (in out si_22 : ptr16)
  Class: Eq_209
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_220: (in out di_23 : ptr16)
  Class: Eq_210
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_221: (in out ds_24 : ptr16)
  Class: Eq_211
  DataType: (ptr (ptr (segment)))
  OrigDataType: (ptr (ptr (segment)))
T_222: (in fn0C00_01AB(dx, bx, bp, si + 0x0002, Mem6[ds:si + 0x0000:word16], ch, ds, out dx_20, out bx_21, out si_22, out di_23, out ds_24) : word16)
  Class: Eq_222
  DataType: word16
  OrigDataType: word16
T_223: (in SLICE(fn0C00_01AB(dx, bx, bp, si + 0x0002, Mem6[ds:si + 0x0000:word16], ch, ds, out dx_20, out bx_21, out si_22, out di_23, out ds_24), byte, 8) : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_224: (in si_29 : word16)
  Class: Eq_203
  DataType: word16
  OrigDataType: word16
T_225: (in ss : selector)
  Class: Eq_225
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_226: (in fp : ptr16)
  Class: Eq_226
  DataType: (union (ptr16 u0) ((memptr T_225 (struct (FFFFFFFC T_229 tFFFFFFFC))) u1))
  OrigDataType: (union (ptr16 u0) ((memptr T_225 (struct (FFFFFFFC T_229 tFFFFFFFC))) u1))
T_227: (in 0xFFFC : word16)
  Class: Eq_227
  DataType: word16
  OrigDataType: word16
T_228: (in fp + 0xFFFC : word16)
  Class: Eq_228
  DataType: word16
  OrigDataType: word16
T_229: (in Mem6[ss:fp + 0xFFFC:word16] : word16)
  Class: Eq_203
  DataType: word16
  OrigDataType: word16
T_230: (in dx_31 : word16)
  Class: Eq_230
  DataType: word16
  OrigDataType: word16
T_231: (in bx_32 : word16)
  Class: Eq_231
  DataType: word16
  OrigDataType: word16
T_232: (in si_33 : word16)
  Class: Eq_232
  DataType: word16
  OrigDataType: word16
T_233: (in di_34 : word16)
  Class: Eq_233
  DataType: word16
  OrigDataType: word16
T_234: (in ds_35 : selector)
  Class: Eq_234
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_235: (in fn0C00_01AB : ptr32)
  Class: Eq_198
  DataType: (ptr (fn T_241 (T_192, T_193, T_50, T_224, T_195, T_197, T_196, T_236, T_237, T_238, T_239, T_240)))
  OrigDataType: (ptr (fn T_241 (T_192, T_193, T_50, T_224, T_195, T_197, T_196, T_236, T_237, T_238, T_239, T_240)))
T_236: (in out dx_31 : ptr16)
  Class: Eq_207
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_237: (in out bx_32 : ptr16)
  Class: Eq_208
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_238: (in out si_33 : ptr16)
  Class: Eq_209
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_239: (in out di_34 : ptr16)
  Class: Eq_210
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_240: (in out ds_35 : ptr16)
  Class: Eq_211
  DataType: (ptr (ptr (segment)))
  OrigDataType: (ptr (ptr (segment)))
T_241: (in fn0C00_01AB(dx_20, bx_21, bp, si_29, di_23, ch_26, ds_24, out dx_31, out bx_32, out si_33, out di_34, out ds_35) : word16)
  Class: Eq_241
  DataType: word16
  OrigDataType: word16
T_242: (in cx : word16)
  Class: Eq_242
  DataType: word16
  OrigDataType: word16
T_243: (in dx_9 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_244: (in bx_10 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_245: (in si_11 : word16)
  Class: Eq_203
  DataType: word16
  OrigDataType: word16
T_246: (in di_12 : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_247: (in ds_13 : selector)
  Class: Eq_53
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_248: (in ch_15 : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_249: (in fn0C00_01AE : ptr32)
  Class: Eq_249
  DataType: (ptr (fn T_268 (T_200, T_201, T_202, T_203, T_204, T_205, T_206, T_263, T_264, T_265, T_266, T_267)))
  OrigDataType: (ptr (fn T_268 (T_200, T_201, T_202, T_203, T_204, T_205, T_206, T_263, T_264, T_265, T_266, T_267)))
T_250: (in signature of fn0C00_01AE : void)
  Class: Eq_249
  DataType: 
  OrigDataType: 
T_251: (in dx : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_252: (in bx : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_253: (in bp : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_254: (in si : word16)
  Class: Eq_203
  DataType: (memptr T_257 (struct (0 T_286 t0000)))
  OrigDataType: (memptr T_257 (struct (0 T_286 t0000)))
T_255: (in di : word16)
  Class: Eq_186
  DataType: word16
  OrigDataType: word16
T_256: (in ch : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_257: (in ds : selector)
  Class: Eq_53
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_258: (in dxOut : ptr16)
  Class: Eq_258
  DataType: ptr16
  OrigDataType: ptr16
T_259: (in bxOut : ptr16)
  Class: Eq_259
  DataType: ptr16
  OrigDataType: ptr16
T_260: (in siOut : ptr16)
  Class: Eq_260
  DataType: ptr16
  OrigDataType: ptr16
T_261: (in diOut : ptr16)
  Class: Eq_261
  DataType: ptr16
  OrigDataType: ptr16
T_262: (in dsOut : ptr16)
  Class: Eq_262
  DataType: ptr16
  OrigDataType: ptr16
T_263: (in out dx_9 : ptr16)
  Class: Eq_258
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_264: (in out bx_10 : ptr16)
  Class: Eq_259
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_265: (in out si_11 : ptr16)
  Class: Eq_260
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_266: (in out di_12 : ptr16)
  Class: Eq_261
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_267: (in out ds_13 : ptr16)
  Class: Eq_262
  DataType: (ptr (ptr (segment)))
  OrigDataType: (ptr (ptr (segment)))
T_268: (in fn0C00_01AE(dx, bx, bp, si, di, ch, ds, out dx_9, out bx_10, out si_11, out di_12, out ds_13) : word16)
  Class: Eq_268
  DataType: word16
  OrigDataType: word16
T_269: (in SLICE(fn0C00_01AE(dx, bx, bp, si, di, ch, ds, out dx_9, out bx_10, out si_11, out di_12, out ds_13), byte, 8) : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_270: (in dx_16 : word16)
  Class: Eq_270
  DataType: word16
  OrigDataType: word16
T_271: (in bx_17 : word16)
  Class: Eq_271
  DataType: word16
  OrigDataType: word16
T_272: (in si_18 : word16)
  Class: Eq_272
  DataType: word16
  OrigDataType: word16
T_273: (in di_19 : word16)
  Class: Eq_273
  DataType: word16
  OrigDataType: word16
T_274: (in ds_20 : selector)
  Class: Eq_274
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_275: (in fn0C00_01AE : ptr32)
  Class: Eq_249
  DataType: (ptr (fn T_281 (T_243, T_244, T_202, T_245, T_246, T_248, T_247, T_276, T_277, T_278, T_279, T_280)))
  OrigDataType: (ptr (fn T_281 (T_243, T_244, T_202, T_245, T_246, T_248, T_247, T_276, T_277, T_278, T_279, T_280)))
T_276: (in out dx_16 : ptr16)
  Class: Eq_258
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_277: (in out bx_17 : ptr16)
  Class: Eq_259
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_278: (in out si_18 : ptr16)
  Class: Eq_260
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_279: (in out di_19 : ptr16)
  Class: Eq_261
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_280: (in out ds_20 : ptr16)
  Class: Eq_262
  DataType: (ptr (ptr (segment)))
  OrigDataType: (ptr (ptr (segment)))
T_281: (in fn0C00_01AE(dx_9, bx_10, bp, si_11, di_12, ch_15, ds_13, out dx_16, out bx_17, out si_18, out di_19, out ds_20) : word16)
  Class: Eq_281
  DataType: word16
  OrigDataType: word16
T_282: (in cx : word16)
  Class: Eq_282
  DataType: word16
  OrigDataType: word16
T_283: (in al_8 : byte)
  Class: Eq_283
  DataType: byte
  OrigDataType: byte
T_284: (in 0x0000 : word16)
  Class: Eq_284
  DataType: word16
  OrigDataType: word16
T_285: (in si + 0x0000 : word16)
  Class: Eq_285
  DataType: word16
  OrigDataType: word16
T_286: (in Mem0[ds:si + 0x0000:byte] : byte)
  Class: Eq_283
  DataType: byte
  OrigDataType: byte
T_287: (in si_9 : word16)
  Class: Eq_287
  DataType: word16
  OrigDataType: word16
T_288: (in 0x0001 : word16)
  Class: Eq_288
  DataType: word16
  OrigDataType: word16
T_289: (in si + 0x0001 : word16)
  Class: Eq_289
  DataType: word16
  OrigDataType: word16
T_290: (in *siOut : word16)
  Class: Eq_289
  DataType: 
  OrigDataType: 
T_291: (in cx_13 : word16)
  Class: Eq_291
  DataType: 
  OrigDataType: 
T_292: (in DPB(cx, al_8, 0, 8) : word16)
  Class: Eq_291
  DataType: 
  OrigDataType: 
T_293: (in 0x3C : byte)
  Class: Eq_283
  DataType: 
  OrigDataType: 
T_294: (in al_8 != 0x3C : bool)
  Class: Eq_294
  DataType: 
  OrigDataType: 
T_295: (in di_28 : word16)
  Class: Eq_186
  DataType: 
  OrigDataType: 
T_296: (in fn0C00_01DC : ptr32)
  Class: Eq_296
  DataType: 
  OrigDataType: 
T_297: (in signature of fn0C00_01DC : void)
  Class: Eq_296
  DataType: 
  OrigDataType: 
T_298: (in dx : word16)
  Class: Eq_39
  DataType: 
  OrigDataType: 
T_299: (in bx : word16)
  Class: Eq_41
  DataType: 
  OrigDataType: 
T_300: (in di : word16)
  Class: Eq_186
  DataType: 
  OrigDataType: 
T_301: (in al : byte)
  Class: Eq_301
  DataType: 
  OrigDataType: 
T_302: (in ah : byte)
  Class: Eq_302
  DataType: 
  OrigDataType: 
T_303: (in ds : selector)
  Class: Eq_50
  DataType: 
  OrigDataType: 
T_304: (in fn0C00_01DE : ptr32)
  Class: Eq_304
  DataType: 
  OrigDataType: 
T_305: (in signature of fn0C00_01DE : void)
  Class: Eq_304
  DataType: 
  OrigDataType: 
T_306: (in dx : word16)
  Class: Eq_39
  DataType: 
  OrigDataType: 
T_307: (in di : word16)
  Class: Eq_186
  DataType: 
  OrigDataType: 
T_308: (in al : byte)
  Class: Eq_301
  DataType: 
  OrigDataType: 
T_309: (in ds : selector)
  Class: Eq_50
  DataType: 
  OrigDataType: 
T_310: (in 0x20 : byte)
  Class: Eq_301
  DataType: 
  OrigDataType: 
T_311: (in fn0C00_01DE(dx, di, 0x20, bp) : word16)
  Class: Eq_186
  DataType: 
  OrigDataType: 
T_312: (in 0x20 : byte)
  Class: Eq_301
  DataType: 
  OrigDataType: 
T_313: (in 0x35 : byte)
  Class: Eq_302
  DataType: 
  OrigDataType: 
T_314: (in fn0C00_01DC(dx, bx, fn0C00_01DE(dx, di, 0x20, bp), 0x20, 0x35, bp) : word16)
  Class: Eq_186
  DataType: 
  OrigDataType: 
T_315: (in sp_29 : word16)
  Class: Eq_315
  DataType: 
  OrigDataType: 
T_316: (in fp : ptr16)
  Class: Eq_316
  DataType: 
  OrigDataType: 
T_317: (in 0xFFFC : word16)
  Class: Eq_317
  DataType: 
  OrigDataType: 
T_318: (in fp + 0xFFFC : word16)
  Class: Eq_315
  DataType: 
  OrigDataType: 
T_319: (in 0x01 : byte)
  Class: Eq_319
  DataType: 
  OrigDataType: 
T_320: (in ch + 0x01 : byte)
  Class: Eq_320
  DataType: 
  OrigDataType: 
T_321: (in DPB(cx_13, ch + 0x01, 8, 8) : word16)
  Class: Eq_291
  DataType: 
  OrigDataType: 
T_322: (in di_33 : word16)
  Class: Eq_322
  DataType: 
  OrigDataType: 
T_323: (in di_28 + bx : word16)
  Class: Eq_322
  DataType: 
  OrigDataType: 
T_324: (in 0x34 : byte)
  Class: Eq_324
  DataType: 
  OrigDataType: 
T_325: (in bx + di_33 : word16)
  Class: Eq_325
  DataType: 
  OrigDataType: 
T_326: (in Mem34[bp:bx + di_33:byte] : byte)
  Class: Eq_324
  DataType: 
  OrigDataType: 
T_327: (in fn0C00_01DC : ptr32)
  Class: Eq_296
  DataType: 
  OrigDataType: 
T_328: (in di_33 - bx : word16)
  Class: Eq_186
  DataType: 
  OrigDataType: 
T_329: (in 0x20 : byte)
  Class: Eq_301
  DataType: 
  OrigDataType: 
T_330: (in 0x35 : byte)
  Class: Eq_302
  DataType: 
  OrigDataType: 
T_331: (in fn0C00_01DC(dx, bx, di_33 - bx, 0x20, 0x35, bp) : word16)
  Class: Eq_186
  DataType: 
  OrigDataType: 
T_332: (in 0xFFFE : word16)
  Class: Eq_332
  DataType: 
  OrigDataType: 
T_333: (in sp_29 + 0xFFFE : word16)
  Class: Eq_315
  DataType: 
  OrigDataType: 
T_334: (in 0x0001 : word16)
  Class: Eq_334
  DataType: 
  OrigDataType: 
T_335: (in cx_13 - 0x0001 : word16)
  Class: Eq_291
  DataType: 
  OrigDataType: 
T_336: (in 0x0000 : word16)
  Class: Eq_291
  DataType: 
  OrigDataType: 
T_337: (in cx_13 != 0x0000 : bool)
  Class: Eq_337
  DataType: 
  OrigDataType: 
T_338: (in di_42 : word16)
  Class: Eq_338
  DataType: 
  OrigDataType: 
T_339: (in fn0C00_01DC : ptr32)
  Class: Eq_296
  DataType: 
  OrigDataType: 
T_340: (in 0x20 : byte)
  Class: Eq_301
  DataType: 
  OrigDataType: 
T_341: (in 0x35 : byte)
  Class: Eq_302
  DataType: 
  OrigDataType: 
T_342: (in fn0C00_01DC(dx, bx, di_28, 0x20, 0x35, bp) : word16)
  Class: Eq_338
  DataType: 
  OrigDataType: 
T_343: (in *diOut : word16)
  Class: Eq_338
  DataType: 
  OrigDataType: 
T_344: (in 0x20 : byte)
  Class: Eq_344
  DataType: 
  OrigDataType: 
T_345: (in 0x0000 : word16)
  Class: Eq_345
  DataType: 
  OrigDataType: 
T_346: (in di_42 + 0x0000 : word16)
  Class: Eq_346
  DataType: 
  OrigDataType: 
T_347: (in Mem44[bp:di_42 + 0x0000:byte] : byte)
  Class: Eq_344
  DataType: 
  OrigDataType: 
T_348: (in cs : selector)
  Class: Eq_348
  DataType: 
  OrigDataType: 
T_349: (in ss : selector)
  Class: Eq_349
  DataType: 
  OrigDataType: 
T_350: (in 0x0004 : word16)
  Class: Eq_350
  DataType: 
  OrigDataType: 
T_351: (in sp_29 - 0x0004 : word16)
  Class: Eq_351
  DataType: 
  OrigDataType: 
T_352: (in Mem53[ss:sp_29 - 0x0004:word16] : word16)
  Class: Eq_348
  DataType: 
  OrigDataType: 
T_353: (in dx_46 : word16)
  Class: Eq_353
  DataType: 
  OrigDataType: 
T_354: (in *dxOut : word16)
  Class: Eq_41
  DataType: 
  OrigDataType: 
T_355: (in bx_48 : word16)
  Class: Eq_355
  DataType: 
  OrigDataType: 
T_356: (in -dx : word16)
  Class: Eq_356
  DataType: 
  OrigDataType: 
T_357: (in *bxOut : word16)
  Class: Eq_356
  DataType: 
  OrigDataType: 
T_358: (in ds_55 : selector)
  Class: Eq_358
  DataType: 
  OrigDataType: 
T_359: (in sp_29 - 0x0004 : word16)
  Class: Eq_359
  DataType: 
  OrigDataType: 
T_360: (in Mem53[ss:sp_29 - 0x0004:selector] : selector)
  Class: Eq_360
  DataType: 
  OrigDataType: 
T_361: (in *dsOut : selector)
  Class: Eq_360
  DataType: 
  OrigDataType: 
T_362: (in 0x0002 : word16)
  Class: Eq_362
  DataType: 
  OrigDataType: 
T_363: (in sp_29 - 0x0002 : word16)
  Class: Eq_363
  DataType: 
  OrigDataType: 
T_364: (in Mem53[ss:sp_29 - 0x0002:word16] : word16)
  Class: Eq_364
  DataType: 
  OrigDataType: 
T_365: (in bx + di : word16)
  Class: Eq_365
  DataType: 
  OrigDataType: 
T_366: (in Mem3[ds:bx + di:byte] : byte)
  Class: Eq_302
  DataType: 
  OrigDataType: 
T_367: (in fn0C00_01DE : ptr32)
  Class: Eq_304
  DataType: 
  OrigDataType: 
T_368: (in fn0C00_01DE(dx, di, al, ds) : word16)
  Class: Eq_368
  DataType: 
  OrigDataType: 
T_369: (in 0x0000 : word16)
  Class: Eq_369
  DataType: 
  OrigDataType: 
T_370: (in di + 0x0000 : word16)
  Class: Eq_370
  DataType: 
  OrigDataType: 
T_371: (in Mem3[ds:di + 0x0000:byte] : byte)
  Class: Eq_301
  DataType: 
  OrigDataType: 
T_372: (in di + dx : word16)
  Class: Eq_372
  DataType: 
  OrigDataType: 
T_373: (in __inb : ptr32)
  Class: Eq_373
  DataType: 
  OrigDataType: 
T_374: (in 0x03DA : word16)
  Class: Eq_374
  DataType: 
  OrigDataType: 
T_375: (in __inb(0x03DA) : byte)
  Class: Eq_375
  DataType: 
  OrigDataType: 
T_376: (in 0x08 : byte)
  Class: Eq_376
  DataType: 
  OrigDataType: 
T_377: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_377
  DataType: 
  OrigDataType: 
T_378: (in 0x00 : byte)
  Class: Eq_377
  DataType: 
  OrigDataType: 
T_379: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_379
  DataType: 
  OrigDataType: 
T_380:
  Class: Eq_380
  DataType: 
  OrigDataType: (struct 0001 (0 T_17 t0000))
*/
