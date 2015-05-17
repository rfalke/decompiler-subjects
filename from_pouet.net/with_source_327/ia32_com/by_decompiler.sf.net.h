// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_327/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr (struct "Globals"))
  OrigDataType: (ptr (struct "Globals"))
T_2: (in bx_6 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_3: (in msdos_resize_memory_block : ptr32)
  Class: Eq_3
  DataType: (ptr (fn T_11 (T_8, T_9, T_10)))
  OrigDataType: (ptr (fn T_11 (T_8, T_9, T_10)))
T_4: (in signature of msdos_resize_memory_block : void)
  Class: Eq_3
  DataType: 
  OrigDataType: 
T_5: (in es : selector)
  Class: Eq_5
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_6: (in bx : word16)
  Class: Eq_6
  DataType: word16
  OrigDataType: word16
T_7: (in bxOut : ptr16)
  Class: Eq_7
  DataType: ptr16
  OrigDataType: ptr16
T_8: (in es : selector)
  Class: Eq_5
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_9: (in 0x01B5 : word16)
  Class: Eq_6
  DataType: word16
  OrigDataType: word16
T_10: (in out bx_6 : ptr16)
  Class: Eq_7
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_11: (in msdos_resize_memory_block(es, 0x01B5, out bx_6) : bool)
  Class: Eq_11
  DataType: bool
  OrigDataType: bool
T_12: (in bios_video_set_mode : ptr32)
  Class: Eq_12
  DataType: (ptr (fn T_16 (T_15)))
  OrigDataType: (ptr (fn T_16 (T_15)))
T_13: (in signature of bios_video_set_mode : void)
  Class: Eq_12
  DataType: 
  OrigDataType: 
T_14: (in al : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_15: (in 0x13 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_16: (in bios_video_set_mode(0x13) : void)
  Class: Eq_16
  DataType: void
  OrigDataType: void
T_17: (in msdos_allocate_memory_block : ptr32)
  Class: Eq_17
  DataType: (ptr (fn T_21 (T_20)))
  OrigDataType: (ptr (fn T_21 (T_20)))
T_18: (in signature of msdos_allocate_memory_block : void)
  Class: Eq_17
  DataType: 
  OrigDataType: 
T_19: (in bx : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in 0x0FB4 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_21: (in msdos_allocate_memory_block(0x0FB4) : bool)
  Class: Eq_21
  DataType: bool
  OrigDataType: bool
T_22: (in msdos_allocate_memory_block : ptr32)
  Class: Eq_17
  DataType: (ptr (fn T_24 (T_23)))
  OrigDataType: (ptr (fn T_24 (T_23)))
T_23: (in 0x0FB4 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_24: (in msdos_allocate_memory_block(0x0FB4) : bool)
  Class: Eq_24
  DataType: bool
  OrigDataType: bool
T_25: (in msdos_display_string : ptr32)
  Class: Eq_25
  DataType: (ptr (fn T_31 (T_29, T_30)))
  OrigDataType: (ptr (fn T_31 (T_29, T_30)))
T_26: (in signature of msdos_display_string : void)
  Class: Eq_25
  DataType: 
  OrigDataType: 
T_27: (in ds : selector)
  Class: Eq_27
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_28: (in dx : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in ds : selector)
  Class: Eq_27
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_30: (in 0x0234 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_31: (in msdos_display_string(ds, 0x0234) : void)
  Class: Eq_31
  DataType: void
  OrigDataType: void
T_32: (in 0xA000 : selector)
  Class: Eq_32
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_33: (in ss : selector)
  Class: Eq_33
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_34: (in fp : ptr16)
  Class: Eq_34
  DataType: (union (ptr16 u0) ((memptr T_33 (struct (159E T_37 t159E))) u1))
  OrigDataType: (union (ptr16 u0) ((memptr T_33 (struct (159E T_37 t159E))) u1))
T_35: (in 0xEA62 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in fp - 0xEA62 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in Mem60[ss:fp - 0xEA62:word16] : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_38: (in cx_50 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in 0x7D00 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_40: (in di_53 : word16)
  Class: Eq_40
  DataType: (memptr T_50 (struct 0002 (0 T_53 t0000)))
  OrigDataType: (memptr T_50 (struct 0002 (0 T_53 t0000)))
T_41: (in 0x0000 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_42: (in di_168 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_43: (in 0x0000 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_44: (in si_167 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in 0x0000 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_46: (in cx_170 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in 0x08 : byte)
  Class: Eq_47
  DataType: byte
  OrigDataType: byte
T_48: (in DPB(cx_50, 0x08, 0, 8) : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_49: (in 0x0000 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in 0x0013 : selector)
  Class: Eq_32
  DataType: (ptr (segment (0 (arr T_528) a0000)))
  OrigDataType: (ptr (segment (0 (arr T_528) a0000)))
T_51: (in 0x0000 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in di_53 + 0x0000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in Mem70[0x0013:di_53 + 0x0000:word16] : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_54: (in 0x0002 : word16)
  Class: Eq_54
  DataType: word16
  OrigDataType: word16
T_55: (in di_53 + 0x0002 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_56: (in 0x0001 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in cx_50 - 0x0001 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_58: (in 0x0000 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_59: (in cx_50 == 0x0000 : bool)
  Class: Eq_59
  DataType: bool
  OrigDataType: bool
T_60: (in al_121 : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_61: (in bx_134 : word16)
  Class: Eq_61
  DataType: (memptr T_50 (struct (0 T_64 t0000)))
  OrigDataType: (memptr T_50 (struct (0 T_64 t0000)))
T_62: (in si_109 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_63: (in bx_134 + si_109 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in Mem139[0x0013:bx_134 + si_109:byte] : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_65: (in 0x0140 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in bx_134 + 0x0140 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_67: (in cx_133 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in 0x0001 : word16)
  Class: Eq_68
  DataType: word16
  OrigDataType: word16
T_69: (in cx_133 - 0x0001 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_70: (in 0x0000 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_71: (in cx_133 != 0x0000 : bool)
  Class: Eq_71
  DataType: bool
  OrigDataType: bool
T_72: (in 0x0001 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in si_109 + 0x0001 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_74: (in cx_124 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_75: (in 0x0001 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in cx_124 - 0x0001 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_77: (in 0x0000 : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_78: (in cx_124 != 0x0000 : bool)
  Class: Eq_78
  DataType: bool
  OrigDataType: bool
T_79: (in 0x12 : byte)
  Class: Eq_79
  DataType: byte
  OrigDataType: byte
T_80: (in DPB(cx_124, 0x12, 0, 8) : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_81: (in 0x2BD4 : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_82: (in di_116 : word16)
  Class: Eq_42
  DataType: (memptr T_32 (struct 0001 (0 T_92 t0000)))
  OrigDataType: (memptr T_32 (struct 0001 (0 T_92 t0000)))
T_83: (in 0x0001 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in di_116 + 0x0001 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_85: (in cx_107 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_86: (in 0x0001 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in cx_107 - 0x0001 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_88: (in 0x0000 : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_89: (in cx_107 != 0x0000 : bool)
  Class: Eq_89
  DataType: bool
  OrigDataType: bool
T_90: (in 0x0000 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in di_116 + 0x0000 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in Mem60[0xA000:di_116 + 0x0000:byte] : byte)
  Class: Eq_60
  DataType: byte
  OrigDataType: byte
T_93: (in 0x06 : byte)
  Class: Eq_93
  DataType: byte
  OrigDataType: byte
T_94: (in DPB(cx_107, 0x06, 0, 8) : word16)
  Class: Eq_74
  DataType: word16
  OrigDataType: word16
T_95: (in 0x1680 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in si_167 + 0x1680 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_97: (in 0x0140 : word16)
  Class: Eq_97
  DataType: word16
  OrigDataType: word16
T_98: (in di_168 + 0x0140 : word16)
  Class: Eq_42
  DataType: word16
  OrigDataType: word16
T_99: (in 0x0001 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in cx_170 - 0x0001 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_101: (in 0x0000 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_102: (in cx_170 != 0x0000 : bool)
  Class: Eq_102
  DataType: bool
  OrigDataType: bool
T_103: (in 0x35 : byte)
  Class: Eq_103
  DataType: byte
  OrigDataType: byte
T_104: (in DPB(cx_170, 0x35, 0, 8) : word16)
  Class: Eq_85
  DataType: word16
  OrigDataType: word16
T_105: (in ch_175 : byte)
  Class: Eq_105
  DataType: byte
  OrigDataType: byte
T_106: (in fn0C00_02B8 : ptr32)
  Class: Eq_106
  DataType: (ptr (fn T_113 (T_50, T_111, T_112)))
  OrigDataType: (ptr (fn T_113 (T_50, T_111, T_112)))
T_107: (in signature of fn0C00_02B8 : void)
  Class: Eq_106
  DataType: 
  OrigDataType: 
T_108: (in ax : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_109: (in bp : word16)
  Class: Eq_32
  DataType: word16
  OrigDataType: word16
T_110: (in chOut : ptr16)
  Class: Eq_110
  DataType: ptr16
  OrigDataType: ptr16
T_111: (in 0x4813 : selector)
  Class: Eq_32
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_112: (in out ch_175 : ptr16)
  Class: Eq_110
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_113: (in fn0C00_02B8(0x0013, 0x4813, out ch_175) : byte)
  Class: Eq_113
  DataType: byte
  OrigDataType: byte
T_114: (in ah_177 : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_115: (in 0x00 : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_116: (in bl_181 : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_117: (in ah_182 : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_118: (in ch_183 : byte)
  Class: Eq_118
  DataType: byte
  OrigDataType: byte
T_119: (in fn0C00_02AB : ptr32)
  Class: Eq_119
  DataType: (ptr (fn T_128 (T_114, T_125, T_126, T_127)))
  OrigDataType: (ptr (fn T_128 (T_114, T_125, T_126, T_127)))
T_120: (in signature of fn0C00_02AB : void)
  Class: Eq_119
  DataType: 
  OrigDataType: 
T_121: (in ah : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_122: (in blOut : ptr16)
  Class: Eq_122
  DataType: ptr16
  OrigDataType: ptr16
T_123: (in ahOut : ptr16)
  Class: Eq_123
  DataType: ptr16
  OrigDataType: ptr16
T_124: (in chOut : ptr16)
  Class: Eq_124
  DataType: ptr16
  OrigDataType: ptr16
T_125: (in out bl_181 : ptr16)
  Class: Eq_122
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_126: (in out ah_182 : ptr16)
  Class: Eq_123
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_127: (in out ch_183 : ptr16)
  Class: Eq_124
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_128: (in fn0C00_02AB(ah_177, out bl_181, out ah_182, out ch_183) : byte)
  Class: Eq_128
  DataType: byte
  OrigDataType: byte
T_129: (in fn0C00_0298 : ptr32)
  Class: Eq_129
  DataType: (ptr (fn T_136 (T_116, T_117, T_118, T_135)))
  OrigDataType: (ptr (fn T_136 (T_116, T_117, T_118, T_135)))
T_130: (in signature of fn0C00_0298 : void)
  Class: Eq_129
  DataType: 
  OrigDataType: 
T_131: (in bl : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_132: (in ah : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_133: (in ch : byte)
  Class: Eq_118
  DataType: byte
  OrigDataType: byte
T_134: (in ahOut : ptr16)
  Class: Eq_134
  DataType: ptr16
  OrigDataType: ptr16
T_135: (in out ah_177 : ptr16)
  Class: Eq_134
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_136: (in fn0C00_0298(bl_181, ah_182, ch_183, out ah_177) : byte)
  Class: Eq_136
  DataType: byte
  OrigDataType: byte
T_137: (in ah_187 : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_138: (in 0x01 : byte)
  Class: Eq_138
  DataType: byte
  OrigDataType: byte
T_139: (in ah_177 - 0x01 : byte)
  Class: Eq_114
  DataType: byte
  OrigDataType: byte
T_140: (in bl_192 : byte)
  Class: Eq_116
  DataType: byte
  OrigDataType: byte
T_141: (in ah_193 : byte)
  Class: Eq_117
  DataType: byte
  OrigDataType: byte
T_142: (in ch_194 : byte)
  Class: Eq_142
  DataType: int8
  OrigDataType: int8
T_143: (in fn0C00_02AB : ptr32)
  Class: Eq_119
  DataType: (ptr (fn T_147 (T_137, T_144, T_145, T_146)))
  OrigDataType: (ptr (fn T_147 (T_137, T_144, T_145, T_146)))
T_144: (in out bl_192 : ptr16)
  Class: Eq_122
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_145: (in out ah_193 : ptr16)
  Class: Eq_123
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_146: (in out ch_194 : ptr16)
  Class: Eq_124
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_147: (in fn0C00_02AB(ah_187, out bl_192, out ah_193, out ch_194) : byte)
  Class: Eq_147
  DataType: byte
  OrigDataType: byte
T_148: (in fn0C00_0298 : ptr32)
  Class: Eq_129
  DataType: (ptr (fn T_151 (T_140, T_141, T_149, T_150)))
  OrigDataType: (ptr (fn T_151 (T_140, T_141, T_149, T_150)))
T_149: (in -ch_194 : byte)
  Class: Eq_118
  DataType: int8
  OrigDataType: int8
T_150: (in out ah_187 : ptr16)
  Class: Eq_134
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_151: (in fn0C00_0298(bl_192, ah_193, -ch_194, out ah_187) : byte)
  Class: Eq_151
  DataType: byte
  OrigDataType: byte
T_152: (in fn0C00_0251 : ptr32)
  Class: Eq_152
  DataType: (ptr (fn T_161 (T_159, T_160, T_32, T_29, T_50)))
  OrigDataType: (ptr (fn T_161 (T_159, T_160, T_32, T_29, T_50)))
T_153: (in signature of fn0C00_0251 : void)
  Class: Eq_152
  DataType: 
  OrigDataType: 
T_154: (in cx : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in bl : byte)
  Class: Eq_155
  DataType: byte
  OrigDataType: byte
T_156: (in es : selector)
  Class: Eq_32
  DataType: (ptr (segment (0 (arr T_529) a0000)))
  OrigDataType: (ptr (segment (0 (arr T_529) a0000)))
T_157: (in ds : selector)
  Class: Eq_27
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_158: (in gs : selector)
  Class: Eq_32
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_159: (in 0x00C8 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_160: (in 0x01 : byte)
  Class: Eq_155
  DataType: byte
  OrigDataType: byte
T_161: (in fn0C00_0251(0x00C8, 0x01, 0xA000, ds, 0x0013) : byte)
  Class: Eq_161
  DataType: byte
  OrigDataType: byte
T_162: (in fn0C00_0251 : ptr32)
  Class: Eq_152
  DataType: (ptr (fn T_165 (T_163, T_164, T_32, T_29, T_50)))
  OrigDataType: (ptr (fn T_165 (T_163, T_164, T_32, T_29, T_50)))
T_163: (in 0x0078 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_164: (in 0xEB : byte)
  Class: Eq_155
  DataType: byte
  OrigDataType: byte
T_165: (in fn0C00_0251(0x0078, 0xEB, 0xA000, ds, 0x0013) : byte)
  Class: Eq_165
  DataType: byte
  OrigDataType: byte
T_166: (in fn0C00_0251 : ptr32)
  Class: Eq_152
  DataType: (ptr (fn T_169 (T_167, T_168, T_32, T_29, T_50)))
  OrigDataType: (ptr (fn T_169 (T_167, T_168, T_32, T_29, T_50)))
T_167: (in 0x0078 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_168: (in 0x28 : byte)
  Class: Eq_155
  DataType: byte
  OrigDataType: byte
T_169: (in fn0C00_0251(0x0078, 0x28, 0xA000, ds, 0x0013) : byte)
  Class: Eq_169
  DataType: byte
  OrigDataType: byte
T_170: (in fn0C00_0251 : ptr32)
  Class: Eq_152
  DataType: (ptr (fn T_173 (T_171, T_172, T_32, T_29, T_50)))
  OrigDataType: (ptr (fn T_173 (T_171, T_172, T_32, T_29, T_50)))
T_171: (in 0x0028 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_172: (in 0x78 : byte)
  Class: Eq_155
  DataType: byte
  OrigDataType: byte
T_173: (in fn0C00_0251(0x0028, 0x78, 0xA000, ds, 0x0013) : byte)
  Class: Eq_173
  DataType: byte
  OrigDataType: byte
T_174: (in fn0C00_0251 : ptr32)
  Class: Eq_152
  DataType: (ptr (fn T_177 (T_175, T_176, T_32, T_29, T_50)))
  OrigDataType: (ptr (fn T_177 (T_175, T_176, T_32, T_29, T_50)))
T_175: (in 0x0032 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_176: (in 0x80 : byte)
  Class: Eq_155
  DataType: byte
  OrigDataType: byte
T_177: (in fn0C00_0251(0x0032, 0x80, 0xA000, ds, 0x0013) : byte)
  Class: Eq_177
  DataType: byte
  OrigDataType: byte
T_178: (in fn0C00_0251 : ptr32)
  Class: Eq_152
  DataType: (ptr (fn T_181 (T_179, T_180, T_32, T_29, T_50)))
  OrigDataType: (ptr (fn T_181 (T_179, T_180, T_32, T_29, T_50)))
T_179: (in 0x00FF : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_180: (in 0x01 : byte)
  Class: Eq_155
  DataType: byte
  OrigDataType: byte
T_181: (in fn0C00_0251(0x00FF, 0x01, 0xA000, ds, 0x0013) : byte)
  Class: Eq_181
  DataType: byte
  OrigDataType: byte
T_182: (in sp_232 : word16)
  Class: Eq_182
  DataType: (memptr T_33 (struct (FFFFFFFE T_316 tFFFFFFFE)))
  OrigDataType: (memptr T_33 (struct (FFFFFFFE T_316 tFFFFFFFE)))
T_183: (in 0xEA54 : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_184: (in fp - 0xEA54 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_185: (in bx_233 : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_186: (in 0x0001 : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_187: (in cx_236 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_188: (in 0x0104 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_189: (in fn0C00_0226 : ptr32)
  Class: Eq_189
  DataType: (ptr (fn T_192 (T_29)))
  OrigDataType: (ptr (fn T_192 (T_29)))
T_190: (in signature of fn0C00_0226 : void)
  Class: Eq_189
  DataType: 
  OrigDataType: 
T_191: (in ds : selector)
  Class: Eq_27
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_192: (in fn0C00_0226(ds) : void)
  Class: Eq_192
  DataType: void
  OrigDataType: void
T_193: (in sp_263 : word16)
  Class: Eq_193
  DataType: (memptr T_33 (struct (0 T_197 t0000) (2 T_235 t0002)))
  OrigDataType: (memptr T_33 (struct (0 T_197 t0000) (2 T_235 t0002)))
T_194: (in sp_252 : word16)
  Class: Eq_194
  DataType: word16
  OrigDataType: word16
T_195: (in 0x0002 : word16)
  Class: Eq_195
  DataType: word16
  OrigDataType: word16
T_196: (in sp_252 - 0x0002 : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_197: (in di_257 : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_198: (in 0x0000 : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_199: (in sp_263 + 0x0000 : word16)
  Class: Eq_199
  DataType: word16
  OrigDataType: word16
T_200: (in Mem264[ss:sp_263 + 0x0000:word16] : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_201: (in fn0C00_02EE : ptr32)
  Class: Eq_201
  DataType: (ptr (fn T_208 (T_207, T_197, T_32, T_111)))
  OrigDataType: (ptr (fn T_208 (T_207, T_197, T_32, T_111)))
T_202: (in signature of fn0C00_02EE : void)
  Class: Eq_201
  DataType: 
  OrigDataType: 
T_203: (in cx : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_204: (in di : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_205: (in es : selector)
  Class: Eq_32
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_206: (in fs : selector)
  Class: Eq_32
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_207: (in cx_254 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_208: (in fn0C00_02EE(cx_254, di_257, 0xA000, 0x4813) : word16)
  Class: Eq_208
  DataType: word16
  OrigDataType: word16
T_209: (in 0x0002 : word16)
  Class: Eq_209
  DataType: word16
  OrigDataType: word16
T_210: (in sp_263 + 0x0002 : word16)
  Class: Eq_194
  DataType: word16
  OrigDataType: word16
T_211: (in 0x0000 : word16)
  Class: Eq_211
  DataType: word16
  OrigDataType: word16
T_212: (in sp_263 + 0x0000 : word16)
  Class: Eq_212
  DataType: word16
  OrigDataType: word16
T_213: (in Mem264[ss:sp_263 + 0x0000:word16] : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_214: (in 0x0140 : word16)
  Class: Eq_214
  DataType: word16
  OrigDataType: word16
T_215: (in Mem264[ss:sp_263 + 0x0000:word16] + 0x0140 : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_216: (in 0x0001 : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_217: (in cx_254 - 0x0001 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_218: (in 0x0000 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_219: (in cx_254 != 0x0000 : bool)
  Class: Eq_219
  DataType: bool
  OrigDataType: bool
T_220: (in cx_273 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_221: (in bx_248 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_222: (in di_276 : word16)
  Class: Eq_222
  DataType: word16
  OrigDataType: word16
T_223: (in 0xFA00 : word16)
  Class: Eq_222
  DataType: word16
  OrigDataType: word16
T_224: (in fn0C00_02EE : ptr32)
  Class: Eq_201
  DataType: (ptr (fn T_226 (T_220, T_225, T_32, T_111)))
  OrigDataType: (ptr (fn T_226 (T_220, T_225, T_32, T_111)))
T_225: (in di_276 - cx_273 : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_226: (in fn0C00_02EE(cx_273, di_276 - cx_273, 0xA000, 0x4813) : word16)
  Class: Eq_226
  DataType: word16
  OrigDataType: word16
T_227: (in 0x0140 : word16)
  Class: Eq_227
  DataType: word16
  OrigDataType: word16
T_228: (in fn0C00_02EE(cx_273, di_276 - cx_273, 0xA000, 0x4813) - 0x0140 : word16)
  Class: Eq_222
  DataType: word16
  OrigDataType: word16
T_229: (in 0x0001 : word16)
  Class: Eq_229
  DataType: word16
  OrigDataType: word16
T_230: (in cx_273 - 0x0001 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_231: (in 0x0000 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_232: (in cx_273 != 0x0000 : bool)
  Class: Eq_232
  DataType: bool
  OrigDataType: bool
T_233: (in cx_287 : word16)
  Class: Eq_233
  DataType: word16
  OrigDataType: word16
T_234: (in sp_263 + 0x0002 : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_235: (in Mem264[ss:sp_263 + 0x0002:word16] : word16)
  Class: Eq_233
  DataType: word16
  OrigDataType: word16
T_236: (in 0x0004 : word16)
  Class: Eq_236
  DataType: word16
  OrigDataType: word16
T_237: (in sp_263 + 0x0004 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_238: (in 0x0001 : word16)
  Class: Eq_238
  DataType: word16
  OrigDataType: word16
T_239: (in bx_248 + 0x0001 : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_240: (in 0x0001 : word16)
  Class: Eq_240
  DataType: word16
  OrigDataType: word16
T_241: (in cx_287 - 0x0001 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_242: (in 0x0001 : word16)
  Class: Eq_233
  DataType: word16
  OrigDataType: word16
T_243: (in cx_287 != 0x0001 : bool)
  Class: Eq_243
  DataType: bool
  OrigDataType: bool
T_244: (in sp_243 : word16)
  Class: Eq_244
  DataType: (memptr T_33 (struct (0 T_249 t0000) (2 T_187 t0002)))
  OrigDataType: (memptr T_33 (struct (0 T_249 t0000) (2 T_187 t0002)))
T_245: (in 0x0002 : word16)
  Class: Eq_245
  DataType: word16
  OrigDataType: word16
T_246: (in sp_232 - 0x0002 : word16)
  Class: Eq_244
  DataType: word16
  OrigDataType: word16
T_247: (in 0x0000 : word16)
  Class: Eq_247
  DataType: word16
  OrigDataType: word16
T_248: (in sp_243 + 0x0000 : word16)
  Class: Eq_248
  DataType: word16
  OrigDataType: word16
T_249: (in Mem244[ss:sp_243 + 0x0000:word16] : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_250: (in fn0C00_0271 : ptr32)
  Class: Eq_250
  DataType: (ptr (fn T_258 (T_257, T_32, T_29, T_111, T_50)))
  OrigDataType: (ptr (fn T_258 (T_257, T_32, T_29, T_111, T_50)))
T_251: (in signature of fn0C00_0271 : void)
  Class: Eq_250
  DataType: 
  OrigDataType: 
T_252: (in bl : byte)
  Class: Eq_155
  DataType: byte
  OrigDataType: byte
T_253: (in es : selector)
  Class: Eq_32
  DataType: (ptr (segment (2BD4 (arr T_530) a2BD4)))
  OrigDataType: (ptr (segment (2BD4 (arr T_530) a2BD4)))
T_254: (in ds : selector)
  Class: Eq_27
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_255: (in fs : selector)
  Class: Eq_32
  DataType: (ptr (segment (2BD4 (arr T_531) a2BD4)))
  OrigDataType: (ptr (segment (2BD4 (arr T_531) a2BD4)))
T_256: (in gs : selector)
  Class: Eq_32
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_257: (in 0x09 : byte)
  Class: Eq_155
  DataType: byte
  OrigDataType: byte
T_258: (in fn0C00_0271(0x09, 0xA000, ds, 0x4813, 0x0013) : void)
  Class: Eq_258
  DataType: void
  OrigDataType: void
T_259: (in 0x0002 : word16)
  Class: Eq_259
  DataType: word16
  OrigDataType: word16
T_260: (in sp_243 + 0x0002 : word16)
  Class: Eq_260
  DataType: word16
  OrigDataType: word16
T_261: (in Mem244[ss:sp_243 + 0x0002:word16] : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_262: (in 0x0002 : word16)
  Class: Eq_262
  DataType: word16
  OrigDataType: word16
T_263: (in sp_243 + 0x0002 : word16)
  Class: Eq_263
  DataType: word16
  OrigDataType: word16
T_264: (in Mem253[ss:sp_243 + 0x0002:word16] : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_265: (in sp_243 + 0x0002 : word16)
  Class: Eq_194
  DataType: word16
  OrigDataType: word16
T_266: (in 0x0000 : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_267: (in cx_299 : word16)
  Class: Eq_267
  DataType: word16
  OrigDataType: word16
T_268: (in cx_287 - 0x0001 : word16)
  Class: Eq_268
  DataType: word16
  OrigDataType: word16
T_269: (in 0x32 : byte)
  Class: Eq_269
  DataType: byte
  OrigDataType: byte
T_270: (in DPB(cx_287 - 0x0001, 0x32, 0, 8) : word16)
  Class: Eq_267
  DataType: word16
  OrigDataType: word16
T_271: (in fn0C00_0271 : ptr32)
  Class: Eq_250
  DataType: (ptr (fn T_273 (T_272, T_32, T_29, T_111, T_50)))
  OrigDataType: (ptr (fn T_273 (T_272, T_32, T_29, T_111, T_50)))
T_272: (in 0x08 : byte)
  Class: Eq_155
  DataType: byte
  OrigDataType: byte
T_273: (in fn0C00_0271(0x08, 0xA000, ds, 0x4813, 0x0013) : void)
  Class: Eq_273
  DataType: void
  OrigDataType: void
T_274: (in 0x0002 : word16)
  Class: Eq_274
  DataType: word16
  OrigDataType: word16
T_275: (in sp_232 + 0x0002 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_276: (in 0x0001 : word16)
  Class: Eq_276
  DataType: word16
  OrigDataType: word16
T_277: (in cx_299 - 0x0001 : word16)
  Class: Eq_267
  DataType: word16
  OrigDataType: word16
T_278: (in 0x0000 : word16)
  Class: Eq_267
  DataType: word16
  OrigDataType: word16
T_279: (in cx_299 != 0x0000 : bool)
  Class: Eq_279
  DataType: bool
  OrigDataType: bool
T_280: (in bh_308 : byte)
  Class: Eq_280
  DataType: byte
  OrigDataType: byte
T_281: (in 0x00 : byte)
  Class: Eq_280
  DataType: byte
  OrigDataType: byte
T_282: (in cx_310 : word16)
  Class: Eq_282
  DataType: word16
  OrigDataType: word16
T_283: (in 0xFF : byte)
  Class: Eq_283
  DataType: byte
  OrigDataType: byte
T_284: (in DPB(cx_299, 0xFF, 0, 8) : word16)
  Class: Eq_282
  DataType: word16
  OrigDataType: word16
T_285: (in __inb : ptr32)
  Class: Eq_285
  DataType: (ptr (fn T_287 (T_286)))
  OrigDataType: (ptr (fn T_287 (T_286)))
T_286: (in 0x03C9 : word16)
  Class: Eq_286
  DataType: word16
  OrigDataType: word16
T_287: (in __inb(0x03C9) : byte)
  Class: Eq_287
  DataType: byte
  OrigDataType: byte
T_288: (in cx_327 : word16)
  Class: Eq_288
  DataType: word16
  OrigDataType: word16
T_289: (in 0x0001 : word16)
  Class: Eq_289
  DataType: word16
  OrigDataType: word16
T_290: (in cx_327 - 0x0001 : word16)
  Class: Eq_288
  DataType: word16
  OrigDataType: word16
T_291: (in 0x0000 : word16)
  Class: Eq_288
  DataType: word16
  OrigDataType: word16
T_292: (in cx_327 != 0x0000 : bool)
  Class: Eq_292
  DataType: bool
  OrigDataType: bool
T_293: (in cx_336 : word16)
  Class: Eq_293
  DataType: word16
  OrigDataType: word16
T_294: (in 0x03 : byte)
  Class: Eq_294
  DataType: byte
  OrigDataType: byte
T_295: (in DPB(cx_327, 0x03, 0, 8) : word16)
  Class: Eq_293
  DataType: word16
  OrigDataType: word16
T_296: (in __outb : ptr32)
  Class: Eq_296
  DataType: (ptr (fn T_299 (T_297, T_298)))
  OrigDataType: (ptr (fn T_299 (T_297, T_298)))
T_297: (in 0x03C9 : word16)
  Class: Eq_297
  DataType: word16
  OrigDataType: word16
T_298: (in al_342 : byte)
  Class: Eq_298
  DataType: byte
  OrigDataType: byte
T_299: (in __outb(0x03C9, al_342) : void)
  Class: Eq_299
  DataType: void
  OrigDataType: void
T_300: (in 0x0001 : word16)
  Class: Eq_300
  DataType: word16
  OrigDataType: word16
T_301: (in cx_336 - 0x0001 : word16)
  Class: Eq_293
  DataType: word16
  OrigDataType: word16
T_302: (in 0x0000 : word16)
  Class: Eq_293
  DataType: word16
  OrigDataType: word16
T_303: (in cx_336 != 0x0000 : bool)
  Class: Eq_303
  DataType: bool
  OrigDataType: bool
T_304: (in al_341 : byte)
  Class: Eq_298
  DataType: int8
  OrigDataType: int8
T_305: (in __inb : ptr32)
  Class: Eq_305
  DataType: (ptr (fn T_307 (T_306)))
  OrigDataType: (ptr (fn T_307 (T_306)))
T_306: (in 0x03C9 : word16)
  Class: Eq_306
  DataType: word16
  OrigDataType: word16
T_307: (in __inb(0x03C9) : byte)
  Class: Eq_298
  DataType: byte
  OrigDataType: byte
T_308: (in 0x01 : byte)
  Class: Eq_308
  DataType: byte
  OrigDataType: byte
T_309: (in al_341 - 0x01 : byte)
  Class: Eq_298
  DataType: byte
  OrigDataType: byte
T_310: (in 0x01 : byte)
  Class: Eq_298
  DataType: int8
  OrigDataType: int8
T_311: (in al_341 >= 0x01 : bool)
  Class: Eq_311
  DataType: bool
  OrigDataType: bool
T_312: (in cx_352 : word16)
  Class: Eq_282
  DataType: word16
  OrigDataType: word16
T_313: (in sp_318 : word16)
  Class: Eq_182
  DataType: (memptr T_33 (struct (FFFFFFFE T_282 tFFFFFFFE)))
  OrigDataType: (memptr T_33 (struct (FFFFFFFE T_282 tFFFFFFFE)))
T_314: (in 0x0002 : word16)
  Class: Eq_314
  DataType: word16
  OrigDataType: word16
T_315: (in sp_318 - 0x0002 : word16)
  Class: Eq_315
  DataType: word16
  OrigDataType: word16
T_316: (in Mem322[ss:sp_318 - 0x0002:word16] : word16)
  Class: Eq_282
  DataType: word16
  OrigDataType: word16
T_317: (in 0x0001 : word16)
  Class: Eq_317
  DataType: word16
  OrigDataType: word16
T_318: (in cx_352 - 0x0001 : word16)
  Class: Eq_282
  DataType: word16
  OrigDataType: word16
T_319: (in 0x0001 : word16)
  Class: Eq_282
  DataType: word16
  OrigDataType: word16
T_320: (in cx_352 != 0x0001 : bool)
  Class: Eq_320
  DataType: bool
  OrigDataType: bool
T_321: (in fn0C00_0271 : ptr32)
  Class: Eq_250
  DataType: (ptr (fn T_323 (T_322, T_32, T_29, T_111, T_50)))
  OrigDataType: (ptr (fn T_323 (T_322, T_32, T_29, T_111, T_50)))
T_322: (in 0x08 : byte)
  Class: Eq_155
  DataType: byte
  OrigDataType: byte
T_323: (in fn0C00_0271(0x08, 0xA000, ds, 0x4813, 0x0013) : void)
  Class: Eq_323
  DataType: void
  OrigDataType: void
T_324: (in 0x0002 : word16)
  Class: Eq_324
  DataType: word16
  OrigDataType: word16
T_325: (in sp_232 + 0x0002 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_326: (in sp_318 - 0x0002 : word16)
  Class: Eq_326
  DataType: word16
  OrigDataType: word16
T_327: (in Mem322[ss:sp_318 - 0x0002:word16] : word16)
  Class: Eq_282
  DataType: word16
  OrigDataType: word16
T_328: (in 0x01 : byte)
  Class: Eq_328
  DataType: byte
  OrigDataType: byte
T_329: (in bh_308 + 0x01 : byte)
  Class: Eq_280
  DataType: byte
  OrigDataType: byte
T_330: (in __outb : ptr32)
  Class: Eq_330
  DataType: (ptr (fn T_332 (T_331, T_280)))
  OrigDataType: (ptr (fn T_332 (T_331, T_280)))
T_331: (in 0x03C8 : word16)
  Class: Eq_331
  DataType: word16
  OrigDataType: word16
T_332: (in __outb(0x03C8, bh_308) : void)
  Class: Eq_332
  DataType: void
  OrigDataType: void
T_333: (in 0x0300 : word16)
  Class: Eq_288
  DataType: word16
  OrigDataType: word16
T_334: (in fn0C00_0226 : ptr32)
  Class: Eq_189
  DataType: (ptr (fn T_335 (T_29)))
  OrigDataType: (ptr (fn T_335 (T_29)))
T_335: (in fn0C00_0226(ds) : void)
  Class: Eq_335
  DataType: void
  OrigDataType: void
T_336: (in fn0C00_0226 : ptr32)
  Class: Eq_189
  DataType: (ptr (fn T_337 (T_29)))
  OrigDataType: (ptr (fn T_337 (T_29)))
T_337: (in fn0C00_0226(ds) : void)
  Class: Eq_337
  DataType: void
  OrigDataType: void
T_338: (in bios_video_set_mode : ptr32)
  Class: Eq_12
  DataType: (ptr (fn T_340 (T_339)))
  OrigDataType: (ptr (fn T_340 (T_339)))
T_339: (in 0x03 : byte)
  Class: Eq_14
  DataType: byte
  OrigDataType: byte
T_340: (in bios_video_set_mode(0x03) : void)
  Class: Eq_340
  DataType: void
  OrigDataType: void
T_341: (in msdos_display_string : ptr32)
  Class: Eq_25
  DataType: (ptr (fn T_343 (T_191, T_342)))
  OrigDataType: (ptr (fn T_343 (T_191, T_342)))
T_342: (in 0x023B : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_343: (in msdos_display_string(ds, 0x023B) : void)
  Class: Eq_343
  DataType: void
  OrigDataType: void
T_344: (in msdos_terminate_program20 : ptr32)
  Class: Eq_344
  DataType: (ptr (fn T_346 ()))
  OrigDataType: (ptr (fn T_346 ()))
T_345: (in signature of msdos_terminate_program20 : void)
  Class: Eq_344
  DataType: 
  OrigDataType: 
T_346: (in msdos_terminate_program20() : void)
  Class: Eq_346
  DataType: void
  OrigDataType: void
T_347: (in ch : byte)
  Class: Eq_347
  DataType: byte
  OrigDataType: byte
T_348: (in di_18 : word16)
  Class: Eq_348
  DataType: (memptr T_156 (struct 0001 (0 T_360 t0000)))
  OrigDataType: (memptr T_156 (struct 0001 (0 T_360 t0000)))
T_349: (in 0x0000 : word16)
  Class: Eq_348
  DataType: word16
  OrigDataType: word16
T_350: (in cx_21 : word16)
  Class: Eq_350
  DataType: word16
  OrigDataType: word16
T_351: (in 0xFA00 : word16)
  Class: Eq_350
  DataType: word16
  OrigDataType: word16
T_352: (in fn0C00_02CA : ptr32)
  Class: Eq_352
  DataType: (ptr (fn T_357 (T_348, T_155, T_158)))
  OrigDataType: (ptr (fn T_357 (T_348, T_155, T_158)))
T_353: (in signature of fn0C00_02CA : void)
  Class: Eq_352
  DataType: 
  OrigDataType: 
T_354: (in di : word16)
  Class: Eq_348
  DataType: word16
  OrigDataType: word16
T_355: (in bl : byte)
  Class: Eq_155
  DataType: byte
  OrigDataType: byte
T_356: (in gs : selector)
  Class: Eq_32
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_357: (in fn0C00_02CA(di_18, bl, gs) : byte)
  Class: Eq_357
  DataType: byte
  OrigDataType: byte
T_358: (in 0x0000 : word16)
  Class: Eq_358
  DataType: word16
  OrigDataType: word16
T_359: (in di_18 + 0x0000 : word16)
  Class: Eq_359
  DataType: word16
  OrigDataType: word16
T_360: (in Mem28[es:di_18 + 0x0000:byte] : byte)
  Class: Eq_357
  DataType: byte
  OrigDataType: byte
T_361: (in 0x0001 : word16)
  Class: Eq_361
  DataType: word16
  OrigDataType: word16
T_362: (in di_18 + 0x0001 : word16)
  Class: Eq_348
  DataType: word16
  OrigDataType: word16
T_363: (in 0x0001 : word16)
  Class: Eq_363
  DataType: word16
  OrigDataType: word16
T_364: (in cx_21 - 0x0001 : word16)
  Class: Eq_350
  DataType: word16
  OrigDataType: word16
T_365: (in 0x0000 : word16)
  Class: Eq_350
  DataType: word16
  OrigDataType: word16
T_366: (in cx_21 != 0x0000 : bool)
  Class: Eq_366
  DataType: bool
  OrigDataType: bool
T_367: (in ch_37 : byte)
  Class: Eq_367
  DataType: byte
  OrigDataType: byte
T_368: (in Z_38 : byte)
  Class: Eq_368
  DataType: byte
  OrigDataType: byte
T_369: (in fn0C00_02B8 : ptr32)
  Class: Eq_106
  DataType: (ptr (fn T_371 (T_156, T_158, T_370)))
  OrigDataType: (ptr (fn T_371 (T_156, T_158, T_370)))
T_370: (in out ch_37 : ptr16)
  Class: Eq_110
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_371: (in fn0C00_02B8(es, gs, out ch_37) : byte)
  Class: Eq_368
  DataType: byte
  OrigDataType: byte
T_372: (in al_39 : byte)
  Class: Eq_372
  DataType: byte
  OrigDataType: byte
T_373: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_373
  DataType: (ptr (fn T_377 (T_376)))
  OrigDataType: (ptr (fn T_377 (T_376)))
T_374: (in signature of bios_kbd_check_keystroke : void)
  Class: Eq_373
  DataType: 
  OrigDataType: 
T_375: (in alOut : ptr16)
  Class: Eq_375
  DataType: ptr16
  OrigDataType: ptr16
T_376: (in out al_39 : ptr16)
  Class: Eq_375
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_377: (in bios_kbd_check_keystroke(out al_39) : byte)
  Class: Eq_377
  DataType: byte
  OrigDataType: byte
T_378: (in fn0C00_0226 : ptr32)
  Class: Eq_189
  DataType: (ptr (fn T_379 (T_157)))
  OrigDataType: (ptr (fn T_379 (T_157)))
T_379: (in fn0C00_0226(ds) : void)
  Class: Eq_379
  DataType: void
  OrigDataType: void
T_380: (in 0x0001 : word16)
  Class: Eq_380
  DataType: word16
  OrigDataType: word16
T_381: (in cx - 0x0001 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_382: (in ch_47 : byte)
  Class: Eq_382
  DataType: byte
  OrigDataType: byte
T_383: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_382
  DataType: byte
  OrigDataType: byte
T_384: (in 0x0000 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_385: (in cx != 0x0000 : bool)
  Class: Eq_385
  DataType: bool
  OrigDataType: bool
T_386: (in di_20 : word16)
  Class: Eq_348
  DataType: (memptr T_32 (struct 0001 (0 T_396 t0000)))
  OrigDataType: (memptr T_32 (struct 0001 (0 T_396 t0000)))
T_387: (in 0x2BD4 : word16)
  Class: Eq_348
  DataType: word16
  OrigDataType: word16
T_388: (in cx_10 : word16)
  Class: Eq_388
  DataType: word16
  OrigDataType: word16
T_389: (in 0xA280 : word16)
  Class: Eq_388
  DataType: word16
  OrigDataType: word16
T_390: (in 0x0001 : word16)
  Class: Eq_390
  DataType: word16
  OrigDataType: word16
T_391: (in di_20 + 0x0001 : word16)
  Class: Eq_348
  DataType: word16
  OrigDataType: word16
T_392: (in 0x0001 : word16)
  Class: Eq_392
  DataType: word16
  OrigDataType: word16
T_393: (in cx_10 - 0x0001 : word16)
  Class: Eq_388
  DataType: word16
  OrigDataType: word16
T_394: (in 0x0000 : word16)
  Class: Eq_388
  DataType: word16
  OrigDataType: word16
T_395: (in cx_10 != 0x0000 : bool)
  Class: Eq_395
  DataType: bool
  OrigDataType: bool
T_396: (in dl_13 : byte)
  Class: Eq_396
  DataType: byte
  OrigDataType: byte
T_397: (in 0x0000 : word16)
  Class: Eq_397
  DataType: word16
  OrigDataType: word16
T_398: (in di_20 + 0x0000 : word16)
  Class: Eq_398
  DataType: word16
  OrigDataType: word16
T_399: (in Mem37[es:di_20 + 0x0000:byte] : byte)
  Class: Eq_396
  DataType: byte
  OrigDataType: byte
T_400: (in fn0C00_02CA : ptr32)
  Class: Eq_352
  DataType: (ptr (fn T_401 (T_386, T_252, T_256)))
  OrigDataType: (ptr (fn T_401 (T_386, T_252, T_256)))
T_401: (in fn0C00_02CA(di_20, bl, gs) : byte)
  Class: Eq_396
  DataType: byte
  OrigDataType: byte
T_402: (in 0x0000 : word16)
  Class: Eq_402
  DataType: word16
  OrigDataType: word16
T_403: (in di_20 + 0x0000 : word16)
  Class: Eq_403
  DataType: word16
  OrigDataType: word16
T_404: (in Mem0[fs:di_20 + 0x0000:byte] : byte)
  Class: Eq_396
  DataType: byte
  OrigDataType: byte
T_405: (in 0xFF : byte)
  Class: Eq_405
  DataType: byte
  OrigDataType: byte
T_406: (in Mem0[fs:di_20 + 0x0000:byte] & 0xFF : byte)
  Class: Eq_406
  DataType: byte
  OrigDataType: byte
T_407: (in 0x00 : byte)
  Class: Eq_406
  DataType: byte
  OrigDataType: byte
T_408: (in (Mem0[fs:di_20 + 0x0000:byte] & 0xFF) == 0x00 : bool)
  Class: Eq_408
  DataType: bool
  OrigDataType: bool
T_409: (in ch_28 : byte)
  Class: Eq_409
  DataType: byte
  OrigDataType: byte
T_410: (in Z_29 : byte)
  Class: Eq_410
  DataType: byte
  OrigDataType: byte
T_411: (in fn0C00_02B8 : ptr32)
  Class: Eq_106
  DataType: (ptr (fn T_413 (T_253, T_256, T_412)))
  OrigDataType: (ptr (fn T_413 (T_253, T_256, T_412)))
T_412: (in out ch_28 : ptr16)
  Class: Eq_110
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_413: (in fn0C00_02B8(es, gs, out ch_28) : byte)
  Class: Eq_410
  DataType: byte
  OrigDataType: byte
T_414: (in al_30 : byte)
  Class: Eq_414
  DataType: byte
  OrigDataType: byte
T_415: (in bios_kbd_check_keystroke : ptr32)
  Class: Eq_373
  DataType: (ptr (fn T_417 (T_416)))
  OrigDataType: (ptr (fn T_417 (T_416)))
T_416: (in out al_30 : ptr16)
  Class: Eq_375
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_417: (in bios_kbd_check_keystroke(out al_30) : byte)
  Class: Eq_417
  DataType: byte
  OrigDataType: byte
T_418: (in fn0C00_0226 : ptr32)
  Class: Eq_189
  DataType: (ptr (fn T_419 (T_254)))
  OrigDataType: (ptr (fn T_419 (T_254)))
T_419: (in fn0C00_0226(ds) : void)
  Class: Eq_419
  DataType: void
  OrigDataType: void
T_420: (in SZO : byte)
  Class: Eq_420
  DataType: byte
  OrigDataType: byte
T_421: (in __outb : ptr32)
  Class: Eq_421
  DataType: (ptr (fn T_423 (T_422, T_131)))
  OrigDataType: (ptr (fn T_423 (T_422, T_131)))
T_422: (in 0x03C8 : word16)
  Class: Eq_422
  DataType: word16
  OrigDataType: word16
T_423: (in __outb(0x03C8, bl) : void)
  Class: Eq_423
  DataType: void
  OrigDataType: void
T_424: (in ax_6 : word16)
  Class: Eq_424
  DataType: word16
  OrigDataType: word16
T_425: (in ax : word16)
  Class: Eq_425
  DataType: word16
  OrigDataType: word16
T_426: (in DPB(ax, bl, 0, 8) : word16)
  Class: Eq_424
  DataType: word16
  OrigDataType: word16
T_427: (in __outw : ptr32)
  Class: Eq_427
  DataType: (ptr (fn T_429 (T_428, T_424)))
  OrigDataType: (ptr (fn T_429 (T_428, T_424)))
T_428: (in 0x03C9 : word16)
  Class: Eq_428
  DataType: word16
  OrigDataType: word16
T_429: (in __outw(0x03C9, ax_6) : void)
  Class: Eq_429
  DataType: void
  OrigDataType: void
T_430: (in __outw : ptr32)
  Class: Eq_430
  DataType: (ptr (fn T_432 (T_431, T_424)))
  OrigDataType: (ptr (fn T_432 (T_431, T_424)))
T_431: (in 0x03C9 : word16)
  Class: Eq_431
  DataType: word16
  OrigDataType: word16
T_432: (in __outw(0x03C9, ax_6) : void)
  Class: Eq_432
  DataType: void
  OrigDataType: void
T_433: (in __outb : ptr32)
  Class: Eq_433
  DataType: (ptr (fn T_435 (T_434, T_133)))
  OrigDataType: (ptr (fn T_435 (T_434, T_133)))
T_434: (in 0x03C9 : word16)
  Class: Eq_434
  DataType: word16
  OrigDataType: word16
T_435: (in __outb(0x03C9, ch) : void)
  Class: Eq_435
  DataType: void
  OrigDataType: void
T_436: (in ah_11 : byte)
  Class: Eq_436
  DataType: byte
  OrigDataType: byte
T_437: (in 0x01 : byte)
  Class: Eq_437
  DataType: byte
  OrigDataType: byte
T_438: (in ah + 0x01 : byte)
  Class: Eq_438
  DataType: byte
  OrigDataType: byte
T_439: (in *ahOut : byte)
  Class: Eq_438
  DataType: 
  OrigDataType: 
T_440: (in ah + 0x01 : byte)
  Class: Eq_440
  DataType: 
  OrigDataType: 
T_441: (in cond(ah + 0x01) : byte)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_442: (in cl : byte)
  Class: Eq_442
  DataType: 
  OrigDataType: 
T_443: (in bl_3 : byte)
  Class: Eq_443
  DataType: 
  OrigDataType: 
T_444: (in *blOut : byte)
  Class: Eq_114
  DataType: 
  OrigDataType: 
T_445: (in ch_11 : byte)
  Class: Eq_445
  DataType: 
  OrigDataType: 
T_446: (in 0x01 : byte)
  Class: Eq_446
  DataType: 
  OrigDataType: 
T_447: (in ah >>u 0x01 : word16)
  Class: Eq_447
  DataType: 
  OrigDataType: 
T_448: (in 0x01 : byte)
  Class: Eq_448
  DataType: 
  OrigDataType: 
T_449: (in ah >>u 0x01 << 0x01 : word16)
  Class: Eq_449
  DataType: 
  OrigDataType: 
T_450: (in *chOut : word16)
  Class: Eq_449
  DataType: 
  OrigDataType: 
T_451: (in ah_13 : byte)
  Class: Eq_451
  DataType: 
  OrigDataType: 
T_452: (in ax : word16)
  Class: Eq_452
  DataType: 
  OrigDataType: 
T_453: (in SLICE(ax, byte, 8) : byte)
  Class: Eq_453
  DataType: 
  OrigDataType: 
T_454: (in *ahOut : byte)
  Class: Eq_453
  DataType: 
  OrigDataType: 
T_455: (in ah >>u 0x01 : word16)
  Class: Eq_455
  DataType: 
  OrigDataType: 
T_456: (in Z : bool)
  Class: Eq_456
  DataType: 
  OrigDataType: 
T_457: (in cx_21 : word16)
  Class: Eq_457
  DataType: 
  OrigDataType: 
T_458: (in 0x7D00 : word16)
  Class: Eq_457
  DataType: 
  OrigDataType: 
T_459: (in ch_9 : byte)
  Class: Eq_459
  DataType: 
  OrigDataType: 
T_460: (in 0x7D : byte)
  Class: Eq_460
  DataType: 
  OrigDataType: 
T_461: (in *chOut : byte)
  Class: Eq_460
  DataType: 
  OrigDataType: 
T_462: (in di_10 : word16)
  Class: Eq_462
  DataType: 
  OrigDataType: 
T_463: (in 0x0000 : word16)
  Class: Eq_462
  DataType: 
  OrigDataType: 
T_464: (in si_11 : word16)
  Class: Eq_464
  DataType: 
  OrigDataType: 
T_465: (in 0x0000 : word16)
  Class: Eq_464
  DataType: 
  OrigDataType: 
T_466: (in SZO_12 : byte)
  Class: Eq_466
  DataType: 
  OrigDataType: 
T_467: (in 0x0000 : word16)
  Class: Eq_467
  DataType: 
  OrigDataType: 
T_468: (in cond(0x0000) : byte)
  Class: Eq_466
  DataType: 
  OrigDataType: 
T_469: (in 0x0000 : word16)
  Class: Eq_469
  DataType: 
  OrigDataType: 
T_470: (in si_11 + 0x0000 : word16)
  Class: Eq_470
  DataType: 
  OrigDataType: 
T_471: (in Mem0[ax:si_11 + 0x0000:word16] : word16)
  Class: Eq_471
  DataType: 
  OrigDataType: 
T_472: (in 0x0000 : word16)
  Class: Eq_472
  DataType: 
  OrigDataType: 
T_473: (in di_10 + 0x0000 : word16)
  Class: Eq_473
  DataType: 
  OrigDataType: 
T_474: (in Mem25[bp:di_10 + 0x0000:word16] : word16)
  Class: Eq_471
  DataType: 
  OrigDataType: 
T_475: (in 0x0001 : word16)
  Class: Eq_475
  DataType: 
  OrigDataType: 
T_476: (in cx_21 - 0x0001 : word16)
  Class: Eq_457
  DataType: 
  OrigDataType: 
T_477: (in 0x0002 : word16)
  Class: Eq_477
  DataType: 
  OrigDataType: 
T_478: (in si_11 + 0x0002 : word16)
  Class: Eq_464
  DataType: 
  OrigDataType: 
T_479: (in 0x0002 : word16)
  Class: Eq_479
  DataType: 
  OrigDataType: 
T_480: (in di_10 + 0x0002 : word16)
  Class: Eq_462
  DataType: 
  OrigDataType: 
T_481: (in ch_29 : byte)
  Class: Eq_481
  DataType: 
  OrigDataType: 
T_482: (in SLICE(cx_21, byte, 8) : byte)
  Class: Eq_482
  DataType: 
  OrigDataType: 
T_483: (in *chOut : byte)
  Class: Eq_482
  DataType: 
  OrigDataType: 
T_484: (in 0x0000 : word16)
  Class: Eq_457
  DataType: 
  OrigDataType: 
T_485: (in cx_21 == 0x0000 : bool)
  Class: Eq_485
  DataType: 
  OrigDataType: 
T_486: (in dl : byte)
  Class: Eq_486
  DataType: 
  OrigDataType: 
T_487: (in ax : word16)
  Class: Eq_487
  DataType: 
  OrigDataType: 
T_488: (in 0x0002 : word16)
  Class: Eq_488
  DataType: 
  OrigDataType: 
T_489: (in di + 0x0002 : word16)
  Class: Eq_489
  DataType: 
  OrigDataType: 
T_490: (in Mem0[gs:di + 0x0002:byte] : byte)
  Class: Eq_490
  DataType: 
  OrigDataType: 
T_491: (in DPB(ax, Mem0[gs:di + 0x0002:byte], 0, 8) : word16)
  Class: Eq_491
  DataType: 
  OrigDataType: 
T_492: (in 0x0001 : word16)
  Class: Eq_492
  DataType: 
  OrigDataType: 
T_493: (in di - 0x0001 : word16)
  Class: Eq_493
  DataType: 
  OrigDataType: 
T_494: (in Mem0[gs:di - 0x0001:byte] : byte)
  Class: Eq_494
  DataType: 
  OrigDataType: 
T_495: (in DPB(ax, Mem0[gs:di - 0x0001:byte], 0, 8) : word16)
  Class: Eq_495
  DataType: 
  OrigDataType: 
T_496: (in DPB(ax, Mem0[gs:di + 0x0002:byte], 0, 8) + DPB(ax, Mem0[gs:di - 0x0001:byte], 0, 8) : word16)
  Class: Eq_496
  DataType: 
  OrigDataType: 
T_497: (in 0x0140 : word16)
  Class: Eq_497
  DataType: 
  OrigDataType: 
T_498: (in di + 0x0140 : word16)
  Class: Eq_498
  DataType: 
  OrigDataType: 
T_499: (in Mem0[gs:di + 0x0140:byte] : byte)
  Class: Eq_499
  DataType: 
  OrigDataType: 
T_500: (in DPB(ax, Mem0[gs:di + 0x0140:byte], 0, 8) : word16)
  Class: Eq_500
  DataType: 
  OrigDataType: 
T_501: (in DPB(ax, Mem0[gs:di + 0x0002:byte], 0, 8) + DPB(ax, Mem0[gs:di - 0x0001:byte], 0, 8) + DPB(ax, Mem0[gs:di + 0x0140:byte], 0, 8) : word16)
  Class: Eq_501
  DataType: 
  OrigDataType: 
T_502: (in 0x0140 : word16)
  Class: Eq_502
  DataType: 
  OrigDataType: 
T_503: (in di - 0x0140 : word16)
  Class: Eq_503
  DataType: 
  OrigDataType: 
T_504: (in Mem0[gs:di - 0x0140:byte] : byte)
  Class: Eq_504
  DataType: 
  OrigDataType: 
T_505: (in DPB(ax, Mem0[gs:di - 0x0140:byte], 0, 8) : word16)
  Class: Eq_505
  DataType: 
  OrigDataType: 
T_506: (in DPB(ax, Mem0[gs:di + 0x0002:byte], 0, 8) + DPB(ax, Mem0[gs:di - 0x0001:byte], 0, 8) + DPB(ax, Mem0[gs:di + 0x0140:byte], 0, 8) + DPB(ax, Mem0[gs:di - 0x0140:byte], 0, 8) : word16)
  Class: Eq_506
  DataType: 
  OrigDataType: 
T_507: (in 0x0002 : word16)
  Class: Eq_507
  DataType: 
  OrigDataType: 
T_508: (in DPB(ax, Mem0[gs:di + 0x0002:byte], 0, 8) + DPB(ax, Mem0[gs:di - 0x0001:byte], 0, 8) + DPB(ax, Mem0[gs:di + 0x0140:byte], 0, 8) + DPB(ax, Mem0[gs:di - 0x0140:byte], 0, 8) >>u 0x0002 : word16)
  Class: Eq_508
  DataType: 
  OrigDataType: 
T_509: (in (byte) (DPB(ax, Mem0[gs:di + 0x0002:byte], 0, 8) + DPB(ax, Mem0[gs:di - 0x0001:byte], 0, 8) + DPB(ax, Mem0[gs:di + 0x0140:byte], 0, 8) + DPB(ax, Mem0[gs:di - 0x0140:byte], 0, 8) >>u 0x0002) : byte)
  Class: Eq_509
  DataType: 
  OrigDataType: 
T_510: (in (byte) (DPB(ax, Mem0[gs:di + 0x0002:byte], 0, 8) + DPB(ax, Mem0[gs:di - 0x0001:byte], 0, 8) + DPB(ax, Mem0[gs:di + 0x0140:byte], 0, 8) + DPB(ax, Mem0[gs:di - 0x0140:byte], 0, 8) >>u 0x0002) - bl : byte)
  Class: Eq_510
  DataType: 
  OrigDataType: 
T_511: (in 0x0001 : word16)
  Class: Eq_511
  DataType: 
  OrigDataType: 
T_512: (in di + 0x0001 : word16)
  Class: Eq_197
  DataType: 
  OrigDataType: 
T_513: (in 0x0001 : word16)
  Class: Eq_513
  DataType: 
  OrigDataType: 
T_514: (in cx - 0x0001 : word16)
  Class: Eq_187
  DataType: 
  OrigDataType: 
T_515: (in 0x0000 : word16)
  Class: Eq_187
  DataType: 
  OrigDataType: 
T_516: (in cx != 0x0000 : bool)
  Class: Eq_516
  DataType: 
  OrigDataType: 
T_517: (in 0xFF : byte)
  Class: Eq_517
  DataType: 
  OrigDataType: 
T_518: (in 0x0000 : word16)
  Class: Eq_518
  DataType: 
  OrigDataType: 
T_519: (in di + 0x0000 : word16)
  Class: Eq_519
  DataType: 
  OrigDataType: 
T_520: (in Mem19[es:di + 0x0000:byte] : byte)
  Class: Eq_517
  DataType: 
  OrigDataType: 
T_521: (in 0x0000 : word16)
  Class: Eq_521
  DataType: 
  OrigDataType: 
T_522: (in di + 0x0000 : word16)
  Class: Eq_522
  DataType: 
  OrigDataType: 
T_523: (in Mem0[fs:di + 0x0000:byte] : byte)
  Class: Eq_523
  DataType: 
  OrigDataType: 
T_524: (in 0xFF : byte)
  Class: Eq_524
  DataType: 
  OrigDataType: 
T_525: (in Mem0[fs:di + 0x0000:byte] & 0xFF : byte)
  Class: Eq_525
  DataType: 
  OrigDataType: 
T_526: (in 0x00 : byte)
  Class: Eq_525
  DataType: 
  OrigDataType: 
T_527: (in (Mem0[fs:di + 0x0000:byte] & 0xFF) != 0x00 : bool)
  Class: Eq_527
  DataType: 
  OrigDataType: 
T_528:
  Class: Eq_528
  DataType: 
  OrigDataType: (struct 0002 (0 T_53 t0000))
T_529:
  Class: Eq_529
  DataType: 
  OrigDataType: (struct 0001 (0 T_360 t0000))
T_530:
  Class: Eq_530
  DataType: 
  OrigDataType: (struct 0001 (0 T_399 t0000))
T_531:
  Class: Eq_531
  DataType: 
  OrigDataType: (struct 0001 (0 T_404 t0000))
*/
