// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_397/ia32_le/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr (struct "Globals"))
  OrigDataType: (ptr (struct "Globals"))
T_2: (in ax : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_3: (in ax_34 : word16)
  Class: Eq_3
  DataType: word16
  OrigDataType: word16
T_4: (in cx_17 : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_5: (in bp_18 : word16)
  Class: Eq_5
  DataType: word16
  OrigDataType: word16
T_6: (in si_19 : word16)
  Class: Eq_6
  DataType: word16
  OrigDataType: word16
T_7: (in di_20 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in es_21 : selector)
  Class: Eq_8
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_9: (in ax_22 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_10: (in fn0800_00BA : ptr32)
  Class: Eq_10
  DataType: (ptr (fn T_28 (T_20, T_21, T_22, T_23, T_24, T_25, T_26, T_27)))
  OrigDataType: (ptr (fn T_28 (T_20, T_21, T_22, T_23, T_24, T_25, T_26, T_27)))
T_11: (in signature of fn0800_00BA : void)
  Class: Eq_10
  DataType: 
  OrigDataType: 
T_12: (in ax : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_13: (in bp : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in ds : selector)
  Class: Eq_14
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_15: (in cxOut : ptr16)
  Class: Eq_15
  DataType: ptr16
  OrigDataType: ptr16
T_16: (in bpOut : ptr16)
  Class: Eq_16
  DataType: ptr16
  OrigDataType: ptr16
T_17: (in siOut : ptr16)
  Class: Eq_17
  DataType: ptr16
  OrigDataType: ptr16
T_18: (in diOut : ptr16)
  Class: Eq_18
  DataType: ptr16
  OrigDataType: ptr16
T_19: (in esOut : ptr16)
  Class: Eq_19
  DataType: ptr16
  OrigDataType: ptr16
T_20: (in 0x0022 : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_21: (in bp : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_22: (in ds : selector)
  Class: Eq_14
  DataType: (ptr (segment (1EE (arr T_6411 2) a01EE) (3EC (arr T_6410) a03EC)))
  OrigDataType: (ptr (segment (1EE (arr T_6411 2) a01EE) (3EC (arr T_6410) a03EC)))
T_23: (in out cx_17 : ptr16)
  Class: Eq_15
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_24: (in out bp_18 : ptr16)
  Class: Eq_16
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_25: (in out si_19 : ptr16)
  Class: Eq_17
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_26: (in out di_20 : ptr16)
  Class: Eq_18
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_27: (in out es_21 : ptr16)
  Class: Eq_19
  DataType: (ptr (ptr (segment)))
  OrigDataType: (ptr (ptr (segment)))
T_28: (in fn0800_00BA(0x0022, bp, ds, out cx_17, out bp_18, out si_19, out di_20, out es_21) : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_29: (in 0x0000 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_30: (in ax_22 == 0x0000 : bool)
  Class: Eq_30
  DataType: bool
  OrigDataType: bool
T_31: (in si_56 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_32: (in 0x01EE : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_33: (in 0x03EC : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in ss : selector)
  Class: Eq_34
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_35: (in fp : ptr16)
  Class: Eq_35
  DataType: (union ((union (ptr16 u0) ((memptr T_34 (struct (FFFFFFF6 T_57 tFFFFFFF6))) u1)) u0) ((memptr T_34 (struct (FFFFFFF6 T_38 tFFFFFFF6))) u1))
  OrigDataType: (union ((union (ptr16 u0) ((memptr T_34 (struct (FFFFFFF6 T_57 tFFFFFFF6))) u1)) u0) ((memptr T_34 (struct (FFFFFFF6 T_38 tFFFFFFF6))) u1))
T_36: (in 0x000A : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_37: (in fp - 0x000A : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in Mem79[ss:fp - 0x000A:word16] : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_39: (in di_76 : word16)
  Class: Eq_39
  DataType: (memptr T_22 (struct 0001 (0 T_48 t0000)))
  OrigDataType: (memptr T_22 (struct 0001 (0 T_48 t0000)))
T_40: (in 0x03EC : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_41: (in si_77 : word16)
  Class: Eq_9
  DataType: (memptr T_22 (struct 0001 (0 T_45 t0000)))
  OrigDataType: (memptr T_22 (struct 0001 (0 T_45 t0000)))
T_42: (in al_82 : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in 0x0000 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in si_77 + 0x0000 : word16)
  Class: Eq_44
  DataType: word16
  OrigDataType: word16
T_45: (in Mem79[ds:si_77 + 0x0000:byte] : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_46: (in 0x0000 : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in di_76 + 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in Mem84[ds:di_76 + 0x0000:byte] : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_49: (in 0x0001 : word16)
  Class: Eq_49
  DataType: word16
  OrigDataType: word16
T_50: (in si_77 + 0x0001 : word16)
  Class: Eq_9
  DataType: word16
  OrigDataType: word16
T_51: (in 0x0001 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in di_76 + 0x0001 : word16)
  Class: Eq_39
  DataType: word16
  OrigDataType: word16
T_53: (in 0x00 : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_54: (in al_82 != 0x00 : bool)
  Class: Eq_54
  DataType: bool
  OrigDataType: bool
T_55: (in di_88 : word16)
  Class: Eq_3
  DataType: word16
  OrigDataType: word16
T_56: (in fp - 0x000A : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in Mem84[ss:fp - 0x000A:word16] : word16)
  Class: Eq_3
  DataType: word16
  OrigDataType: word16
T_58: (in fn0800_011B : ptr32)
  Class: Eq_58
  DataType: (ptr (fn T_62 (T_55, T_22)))
  OrigDataType: (ptr (fn T_62 (T_55, T_22)))
T_59: (in signature of fn0800_011B : void)
  Class: Eq_58
  DataType: 
  OrigDataType: 
T_60: (in ax : word16)
  Class: Eq_3
  DataType: word16
  OrigDataType: word16
T_61: (in ds : selector)
  Class: Eq_14
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_62: (in fn0800_011B(di_88, ds) : void)
  Class: Eq_62
  DataType: void
  OrigDataType: void
T_63: (in fn0800_0140 : ptr32)
  Class: Eq_63
  DataType: (ptr (fn T_69 (T_55, T_68, T_22)))
  OrigDataType: (ptr (fn T_69 (T_55, T_68, T_22)))
T_64: (in signature of fn0800_0140 : void)
  Class: Eq_63
  DataType: 
  OrigDataType: 
T_65: (in ax : word16)
  Class: Eq_3
  DataType: word16
  OrigDataType: word16
T_66: (in dx : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_67: (in ds : selector)
  Class: Eq_14
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_68: (in 0x0031 : word16)
  Class: Eq_66
  DataType: word16
  OrigDataType: word16
T_69: (in fn0800_0140(di_88, 0x0031, ds) : void)
  Class: Eq_69
  DataType: void
  OrigDataType: void
T_70: (in 0x0000 : word16)
  Class: Eq_3
  DataType: word16
  OrigDataType: word16
T_71: (in di_88 == 0x0000 : bool)
  Class: Eq_71
  DataType: bool
  OrigDataType: bool
T_72: (in si_70 : word16)
  Class: Eq_72
  DataType: int16
  OrigDataType: int16
T_73: (in 0x0001 : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in si_56 + 0x0001 : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_75: (in 0x0001 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in si_70 + 0x0001 : word16)
  Class: Eq_31
  DataType: word16
  OrigDataType: word16
T_77: (in 0xFE0F : word16)
  Class: Eq_72
  DataType: int16
  OrigDataType: int16
T_78: (in si_70 < 0xFE0F : bool)
  Class: Eq_78
  DataType: bool
  OrigDataType: bool
T_79: (in 0x03EC : word16)
  Class: Eq_3
  DataType: word16
  OrigDataType: word16
T_80: (in es_65 : selector)
  Class: Eq_80
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_81: (in fn0800_01EC : ptr32)
  Class: Eq_81
  DataType: (ptr (fn T_92 (T_87, T_90, T_91, T_22)))
  OrigDataType: (ptr (fn T_92 (T_87, T_90, T_91, T_22)))
T_82: (in signature of fn0800_01EC : void)
  Class: Eq_81
  DataType: 
  OrigDataType: 
T_83: (in ax : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in dx : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_85: (in bx : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_86: (in ds : selector)
  Class: Eq_14
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_87: (in 0x0036 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_88: (in 0x0000 : word16)
  Class: Eq_88
  DataType: (memptr T_22 (struct 0001 (0 T_90 t0000)))
  OrigDataType: (memptr T_22 (struct 0001 (0 T_90 t0000)))
T_89: (in si_56 + 0x0000 : word16)
  Class: Eq_89
  DataType: word16
  OrigDataType: word16
T_90: (in Mem0[ds:si_56 + 0x0000:word16] : word16)
  Class: Eq_12
  DataType: word16
  OrigDataType: word16
T_91: (in 0x03EC : word16)
  Class: Eq_14
  DataType: word16
  OrigDataType: word16
T_92: (in fn0800_01EC(0x0036, Mem0[ds:si_56 + 0x0000:word16], 0x03EC, ds) : selector)
  Class: Eq_92
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_93: (in esOut : ptr16)
  Class: Eq_93
  DataType: ptr16
  OrigDataType: ptr16
T_94: (in *esOut : selector)
  Class: Eq_92
  DataType: 
  OrigDataType: 
T_95: (in 0x03EC : word16)
  Class: Eq_95
  DataType: 
  OrigDataType: 
T_96: (in Mem0[ds:0x03EC:byte] : byte)
  Class: Eq_96
  DataType: 
  OrigDataType: 
T_97: (in 0x00 : byte)
  Class: Eq_96
  DataType: 
  OrigDataType: 
T_98: (in Mem0[ds:0x03EC:byte] == 0x00 : bool)
  Class: Eq_98
  DataType: 
  OrigDataType: 
T_99: (in 0x0036 : word16)
  Class: Eq_3
  DataType: 
  OrigDataType: 
T_100: (in bp_15 : word16)
  Class: Eq_100
  DataType: 
  OrigDataType: 
T_101: (in es_16 : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_102: (in ax_17 : word16)
  Class: Eq_102
  DataType: 
  OrigDataType: 
T_103: (in fn0800_0008 : ptr32)
  Class: Eq_103
  DataType: 
  OrigDataType: 
T_104: (in signature of fn0800_0008 : void)
  Class: Eq_103
  DataType: 
  OrigDataType: 
T_105: (in bpOut : ptr16)
  Class: Eq_105
  DataType: 
  OrigDataType: 
T_106: (in fp : ptr16)
  Class: Eq_106
  DataType: 
  OrigDataType: 
T_107: (in 0x0084 : word16)
  Class: Eq_107
  DataType: 
  OrigDataType: 
T_108: (in fp - 0x0084 : word16)
  Class: Eq_13
  DataType: 
  OrigDataType: 
T_109: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_110: (in out bp_15 : ptr16)
  Class: Eq_105
  DataType: 
  OrigDataType: 
T_111: (in out es_16 : ptr16)
  Class: Eq_93
  DataType: 
  OrigDataType: 
T_112: (in fn0800_0008(fp - 0x0084, ds, out bp_15, out es_16) : word16)
  Class: Eq_102
  DataType: 
  OrigDataType: 
T_113: (in ss : selector)
  Class: Eq_113
  DataType: 
  OrigDataType: 
T_114: (in 0x0078 : word16)
  Class: Eq_114
  DataType: 
  OrigDataType: 
T_115: (in bp_15 + 0x0078 : word16)
  Class: Eq_115
  DataType: 
  OrigDataType: 
T_116: (in Mem18[ss:bp_15 + 0x0078:word16] : word16)
  Class: Eq_102
  DataType: 
  OrigDataType: 
T_117: (in dx : word16)
  Class: Eq_117
  DataType: 
  OrigDataType: 
T_118: (in 0x0000 : word16)
  Class: Eq_118
  DataType: 
  OrigDataType: 
T_119: (in dx + 0x0000 : word16)
  Class: Eq_119
  DataType: 
  OrigDataType: 
T_120: (in Mem18[ds:dx + 0x0000:word16] : word16)
  Class: Eq_120
  DataType: 
  OrigDataType: 
T_121: (in 0x007A : word16)
  Class: Eq_121
  DataType: 
  OrigDataType: 
T_122: (in bp_15 + 0x007A : word16)
  Class: Eq_122
  DataType: 
  OrigDataType: 
T_123: (in Mem21[ss:bp_15 + 0x007A:word16] : word16)
  Class: Eq_120
  DataType: 
  OrigDataType: 
T_124: (in fn0800_031E : ptr32)
  Class: Eq_124
  DataType: 
  OrigDataType: 
T_125: (in signature of fn0800_031E : void)
  Class: Eq_124
  DataType: 
  OrigDataType: 
T_126: (in ax : word16)
  Class: Eq_126
  DataType: 
  OrigDataType: 
T_127: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_128: (in 0x0008 : word16)
  Class: Eq_128
  DataType: 
  OrigDataType: 
T_129: (in bp_15 - 0x0008 : word16)
  Class: Eq_126
  DataType: 
  OrigDataType: 
T_130: (in fn0800_031E(bp_15 - 0x0008, ds) : void)
  Class: Eq_130
  DataType: 
  OrigDataType: 
T_131: (in bp_15 - 0x0008 : word16)
  Class: Eq_131
  DataType: 
  OrigDataType: 
T_132: (in 0x007C : word16)
  Class: Eq_132
  DataType: 
  OrigDataType: 
T_133: (in bp_15 + 0x007C : word16)
  Class: Eq_133
  DataType: 
  OrigDataType: 
T_134: (in Mem24[ss:bp_15 + 0x007C:word16] : word16)
  Class: Eq_131
  DataType: 
  OrigDataType: 
T_135: (in ax_25 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_136: (in 0x0078 : word16)
  Class: Eq_136
  DataType: 
  OrigDataType: 
T_137: (in bp_15 + 0x0078 : word16)
  Class: Eq_137
  DataType: 
  OrigDataType: 
T_138: (in Mem24[ss:bp_15 + 0x0078:word16] : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_139: (in 0x0000 : word16)
  Class: Eq_139
  DataType: 
  OrigDataType: 
T_140: (in 0x007E : word16)
  Class: Eq_140
  DataType: 
  OrigDataType: 
T_141: (in bp_15 + 0x007E : word16)
  Class: Eq_141
  DataType: 
  OrigDataType: 
T_142: (in Mem26[ss:bp_15 + 0x007E:word16] : word16)
  Class: Eq_139
  DataType: 
  OrigDataType: 
T_143: (in bp_28 : word16)
  Class: Eq_143
  DataType: 
  OrigDataType: 
T_144: (in fn0800_032D : ptr32)
  Class: Eq_144
  DataType: 
  OrigDataType: 
T_145: (in signature of fn0800_032D : void)
  Class: Eq_144
  DataType: 
  OrigDataType: 
T_146: (in ax : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_147: (in di : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_148: (in es : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_149: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_150: (in di : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_151: (in fn0800_032D(ax_25, di, es_16, ds) : word16)
  Class: Eq_143
  DataType: 
  OrigDataType: 
T_152: (in fn0800_0337 : ptr32)
  Class: Eq_152
  DataType: 
  OrigDataType: 
T_153: (in signature of fn0800_0337 : void)
  Class: Eq_152
  DataType: 
  OrigDataType: 
T_154: (in ax : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_155: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_156: (in 0x0041 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_157: (in fn0800_0337(0x0041, ds) : byte)
  Class: Eq_157
  DataType: 
  OrigDataType: 
T_158: (in fn0800_0337 : ptr32)
  Class: Eq_152
  DataType: 
  OrigDataType: 
T_159: (in 0x0078 : word16)
  Class: Eq_159
  DataType: 
  OrigDataType: 
T_160: (in bp_28 + 0x0078 : word16)
  Class: Eq_160
  DataType: 
  OrigDataType: 
T_161: (in Mem26[ss:bp_28 + 0x0078:word16] : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_162: (in fn0800_0337(Mem26[ss:bp_28 + 0x0078:word16], ds) : byte)
  Class: Eq_162
  DataType: 
  OrigDataType: 
T_163: (in fn0800_035A : ptr32)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_164: (in signature of fn0800_035A : void)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_165: (in fn0800_035A() : word16)
  Class: Eq_165
  DataType: 
  OrigDataType: 
T_166: (in fn0800_0337 : ptr32)
  Class: Eq_152
  DataType: 
  OrigDataType: 
T_167: (in fn0800_0362 : ptr32)
  Class: Eq_167
  DataType: 
  OrigDataType: 
T_168: (in signature of fn0800_0362 : void)
  Class: Eq_167
  DataType: 
  OrigDataType: 
T_169: (in ax : word16)
  Class: Eq_169
  DataType: 
  OrigDataType: 
T_170: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_171: (in 0x043C : word16)
  Class: Eq_171
  DataType: 
  OrigDataType: 
T_172: (in Mem26[ds:0x043C:word16] : word16)
  Class: Eq_169
  DataType: 
  OrigDataType: 
T_173: (in fn0800_0362(Mem26[ds:0x043C:word16], ds) : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_174: (in fn0800_0337(fn0800_0362(Mem26[ds:0x043C:word16], ds), ds) : byte)
  Class: Eq_174
  DataType: 
  OrigDataType: 
T_175: (in fn0800_037C : ptr32)
  Class: Eq_175
  DataType: 
  OrigDataType: 
T_176: (in signature of fn0800_037C : void)
  Class: Eq_175
  DataType: 
  OrigDataType: 
T_177: (in ax : word16)
  Class: Eq_177
  DataType: 
  OrigDataType: 
T_178: (in 0x0001 : word16)
  Class: Eq_177
  DataType: 
  OrigDataType: 
T_179: (in fn0800_037C(0x0001) : void)
  Class: Eq_179
  DataType: 
  OrigDataType: 
T_180: (in ax_146 : word16)
  Class: Eq_180
  DataType: 
  OrigDataType: 
T_181: (in si_117 : word16)
  Class: Eq_181
  DataType: 
  OrigDataType: 
T_182: (in 0x0220 : word16)
  Class: Eq_182
  DataType: 
  OrigDataType: 
T_183: (in Mem0[ds:0x0220:word16] : word16)
  Class: Eq_181
  DataType: 
  OrigDataType: 
T_184: (in 0x0000 : word16)
  Class: Eq_181
  DataType: 
  OrigDataType: 
T_185: (in si_117 == 0x0000 : bool)
  Class: Eq_185
  DataType: 
  OrigDataType: 
T_186: (in 0x0000 : word16)
  Class: Eq_180
  DataType: 
  OrigDataType: 
T_187: (in 0x0000 : word16)
  Class: Eq_12
  DataType: 
  OrigDataType: 
T_188: (in ax == 0x0000 : bool)
  Class: Eq_188
  DataType: 
  OrigDataType: 
T_189: (in di_103 : word16)
  Class: Eq_12
  DataType: 
  OrigDataType: 
T_190: (in cx_104 : word16)
  Class: Eq_190
  DataType: 
  OrigDataType: 
T_191: (in 0xFFFF : word16)
  Class: Eq_190
  DataType: 
  OrigDataType: 
T_192: (in cx_108 : word16)
  Class: Eq_192
  DataType: 
  OrigDataType: 
T_193: (in ~cx_104 : word16)
  Class: Eq_192
  DataType: 
  OrigDataType: 
T_194: (in di_154 : word16)
  Class: Eq_12
  DataType: 
  OrigDataType: 
T_195: (in 0x0001 : word16)
  Class: Eq_195
  DataType: 
  OrigDataType: 
T_196: (in di_154 + 0x0001 : word16)
  Class: Eq_12
  DataType: 
  OrigDataType: 
T_197: (in 0x0001 : word16)
  Class: Eq_197
  DataType: 
  OrigDataType: 
T_198: (in cx_104 - 0x0001 : word16)
  Class: Eq_190
  DataType: 
  OrigDataType: 
T_199: (in 0x00 : byte)
  Class: Eq_199
  DataType: 
  OrigDataType: 
T_200: (in 0x0000 : word16)
  Class: Eq_200
  DataType: 
  OrigDataType: 
T_201: (in di_154 + 0x0000 : word16)
  Class: Eq_201
  DataType: 
  OrigDataType: 
T_202: (in Mem0[ds:di_154 + 0x0000:byte] : byte)
  Class: Eq_199
  DataType: 
  OrigDataType: 
T_203: (in 0x00 != Mem0[ds:di_154 + 0x0000:byte] : bool)
  Class: Eq_203
  DataType: 
  OrigDataType: 
T_204: (in 0x0000 : word16)
  Class: Eq_190
  DataType: 
  OrigDataType: 
T_205: (in cx_104 == 0x0000 : bool)
  Class: Eq_205
  DataType: 
  OrigDataType: 
T_206: (in cx_120 : word16)
  Class: Eq_206
  DataType: 
  OrigDataType: 
T_207: (in 0x0000 : word16)
  Class: Eq_207
  DataType: 
  OrigDataType: 
T_208: (in si_117 + 0x0000 : word16)
  Class: Eq_208
  DataType: 
  OrigDataType: 
T_209: (in Mem0[ds:si_117 + 0x0000:word16] : word16)
  Class: Eq_206
  DataType: 
  OrigDataType: 
T_210: (in 0x0000 : word16)
  Class: Eq_206
  DataType: 
  OrigDataType: 
T_211: (in cx_120 != 0x0000 : bool)
  Class: Eq_211
  DataType: 
  OrigDataType: 
T_212: (in ax_127 : word16)
  Class: Eq_212
  DataType: 
  OrigDataType: 
T_213: (in fn0800_05FE : ptr32)
  Class: Eq_213
  DataType: 
  OrigDataType: 
T_214: (in signature of fn0800_05FE : void)
  Class: Eq_213
  DataType: 
  OrigDataType: 
T_215: (in ax : word16)
  Class: Eq_206
  DataType: 
  OrigDataType: 
T_216: (in dx : word16)
  Class: Eq_12
  DataType: 
  OrigDataType: 
T_217: (in bx : word16)
  Class: Eq_217
  DataType: 
  OrigDataType: 
T_218: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_219: (in 0x0001 : word16)
  Class: Eq_219
  DataType: 
  OrigDataType: 
T_220: (in cx_108 - 0x0001 : word16)
  Class: Eq_217
  DataType: 
  OrigDataType: 
T_221: (in fn0800_05FE(cx_120, ax, cx_108 - 0x0001, ds) : word16)
  Class: Eq_212
  DataType: 
  OrigDataType: 
T_222: (in 0x0000 : word16)
  Class: Eq_212
  DataType: 
  OrigDataType: 
T_223: (in ax_127 != 0x0000 : bool)
  Class: Eq_223
  DataType: 
  OrigDataType: 
T_224: (in 0x0002 : word16)
  Class: Eq_224
  DataType: 
  OrigDataType: 
T_225: (in si_117 + 0x0002 : word16)
  Class: Eq_181
  DataType: 
  OrigDataType: 
T_226: (in 0x00 : byte)
  Class: Eq_226
  DataType: 
  OrigDataType: 
T_227: (in DPB(ax_127, 0x00, 8, 8) : word16)
  Class: Eq_227
  DataType: 
  OrigDataType: 
T_228: (in 0x003D : word16)
  Class: Eq_227
  DataType: 
  OrigDataType: 
T_229: (in DPB(ax_127, 0x00, 8, 8) != 0x003D : bool)
  Class: Eq_229
  DataType: 
  OrigDataType: 
T_230: (in cx_108 + cx_120 : word16)
  Class: Eq_180
  DataType: 
  OrigDataType: 
T_231: (in bp_57 : word16)
  Class: Eq_231
  DataType: 
  OrigDataType: 
T_232: (in ss : selector)
  Class: Eq_232
  DataType: 
  OrigDataType: 
T_233: (in 0x0000 : word16)
  Class: Eq_233
  DataType: 
  OrigDataType: 
T_234: (in bp + 0x0000 : word16)
  Class: Eq_234
  DataType: 
  OrigDataType: 
T_235: (in Mem0[ss:bp + 0x0000:word16] : word16)
  Class: Eq_235
  DataType: 
  OrigDataType: 
T_236: (in *bpOut : word16)
  Class: Eq_235
  DataType: 
  OrigDataType: 
T_237: (in es_59 : selector)
  Class: Eq_237
  DataType: 
  OrigDataType: 
T_238: (in 0x0002 : word16)
  Class: Eq_238
  DataType: 
  OrigDataType: 
T_239: (in bp + 0x0002 : word16)
  Class: Eq_239
  DataType: 
  OrigDataType: 
T_240: (in Mem0[ss:bp + 0x0002:selector] : selector)
  Class: Eq_240
  DataType: 
  OrigDataType: 
T_241: (in *esOut : selector)
  Class: Eq_240
  DataType: 
  OrigDataType: 
T_242: (in di_61 : word16)
  Class: Eq_242
  DataType: 
  OrigDataType: 
T_243: (in 0x0004 : word16)
  Class: Eq_243
  DataType: 
  OrigDataType: 
T_244: (in bp + 0x0004 : word16)
  Class: Eq_244
  DataType: 
  OrigDataType: 
T_245: (in Mem0[ss:bp + 0x0004:word16] : word16)
  Class: Eq_245
  DataType: 
  OrigDataType: 
T_246: (in *diOut : word16)
  Class: Eq_245
  DataType: 
  OrigDataType: 
T_247: (in si_63 : word16)
  Class: Eq_247
  DataType: 
  OrigDataType: 
T_248: (in 0x0006 : word16)
  Class: Eq_248
  DataType: 
  OrigDataType: 
T_249: (in bp + 0x0006 : word16)
  Class: Eq_249
  DataType: 
  OrigDataType: 
T_250: (in Mem0[ss:bp + 0x0006:word16] : word16)
  Class: Eq_250
  DataType: 
  OrigDataType: 
T_251: (in *siOut : word16)
  Class: Eq_250
  DataType: 
  OrigDataType: 
T_252: (in cx_67 : word16)
  Class: Eq_252
  DataType: 
  OrigDataType: 
T_253: (in 0x000A : word16)
  Class: Eq_253
  DataType: 
  OrigDataType: 
T_254: (in bp + 0x000A : word16)
  Class: Eq_254
  DataType: 
  OrigDataType: 
T_255: (in Mem0[ss:bp + 0x000A:word16] : word16)
  Class: Eq_255
  DataType: 
  OrigDataType: 
T_256: (in *cxOut : word16)
  Class: Eq_255
  DataType: 
  OrigDataType: 
T_257: (in bx_13 : word16)
  Class: Eq_3
  DataType: 
  OrigDataType: 
T_258: (in dx : word16)
  Class: Eq_258
  DataType: 
  OrigDataType: 
T_259: (in 0x00 : byte)
  Class: Eq_259
  DataType: 
  OrigDataType: 
T_260: (in DPB(dx, 0x00, 8, 8) : word16)
  Class: Eq_258
  DataType: 
  OrigDataType: 
T_261: (in 0x0019 : word16)
  Class: Eq_258
  DataType: 
  OrigDataType: 
T_262: (in dx > 0x0019 : bool)
  Class: Eq_262
  DataType: 
  OrigDataType: 
T_263: (in 0x0001 : word16)
  Class: Eq_263
  DataType: 
  OrigDataType: 
T_264: (in bx_13 + 0x0001 : word16)
  Class: Eq_3
  DataType: 
  OrigDataType: 
T_265: (in al_25 : byte)
  Class: Eq_265
  DataType: 
  OrigDataType: 
T_266: (in 0x20 : byte)
  Class: Eq_266
  DataType: 
  OrigDataType: 
T_267: (in al_25 + 0x20 : byte)
  Class: Eq_267
  DataType: 
  OrigDataType: 
T_268: (in 0x0000 : word16)
  Class: Eq_268
  DataType: 
  OrigDataType: 
T_269: (in bx_13 + 0x0000 : word16)
  Class: Eq_269
  DataType: 
  OrigDataType: 
T_270: (in Mem43[ds:bx_13 + 0x0000:byte] : byte)
  Class: Eq_267
  DataType: 
  OrigDataType: 
T_271: (in 0x0000 : word16)
  Class: Eq_271
  DataType: 
  OrigDataType: 
T_272: (in bx_13 + 0x0000 : word16)
  Class: Eq_272
  DataType: 
  OrigDataType: 
T_273: (in Mem0[ds:bx_13 + 0x0000:byte] : byte)
  Class: Eq_265
  DataType: 
  OrigDataType: 
T_274: (in 0x00 : byte)
  Class: Eq_265
  DataType: 
  OrigDataType: 
T_275: (in al_25 == 0x00 : bool)
  Class: Eq_275
  DataType: 
  OrigDataType: 
T_276: (in si_138 : word16)
  Class: Eq_3
  DataType: 
  OrigDataType: 
T_277: (in 0x0000 : word16)
  Class: Eq_277
  DataType: 
  OrigDataType: 
T_278: (in dx + 0x0000 : word16)
  Class: Eq_278
  DataType: 
  OrigDataType: 
T_279: (in Mem0[ds:dx + 0x0000:byte] : byte)
  Class: Eq_279
  DataType: 
  OrigDataType: 
T_280: (in 0x00 : byte)
  Class: Eq_279
  DataType: 
  OrigDataType: 
T_281: (in Mem0[ds:dx + 0x0000:byte] == 0x00 : bool)
  Class: Eq_281
  DataType: 
  OrigDataType: 
T_282: (in 0x0001 : word16)
  Class: Eq_282
  DataType: 
  OrigDataType: 
T_283: (in dx + 0x0001 : word16)
  Class: Eq_283
  DataType: 
  OrigDataType: 
T_284: (in Mem0[ds:dx + 0x0001:byte] : byte)
  Class: Eq_284
  DataType: 
  OrigDataType: 
T_285: (in 0x00 : byte)
  Class: Eq_284
  DataType: 
  OrigDataType: 
T_286: (in Mem0[ds:dx + 0x0001:byte] != 0x00 : bool)
  Class: Eq_286
  DataType: 
  OrigDataType: 
T_287: (in di_109 : word16)
  Class: Eq_287
  DataType: 
  OrigDataType: 
T_288: (in cx_238 : word16)
  Class: Eq_287
  DataType: 
  OrigDataType: 
T_289: (in 0xFFFF : word16)
  Class: Eq_287
  DataType: 
  OrigDataType: 
T_290: (in di_246 : word16)
  Class: Eq_3
  DataType: 
  OrigDataType: 
T_291: (in Z_103 : byte)
  Class: Eq_291
  DataType: 
  OrigDataType: 
T_292: (in 0x00 : byte)
  Class: Eq_292
  DataType: 
  OrigDataType: 
T_293: (in cond(0x00) : byte)
  Class: Eq_291
  DataType: 
  OrigDataType: 
T_294: (in 0xFFFF : word16)
  Class: Eq_294
  DataType: 
  OrigDataType: 
T_295: (in 0x0000 : word16)
  Class: Eq_294
  DataType: 
  OrigDataType: 
T_296: (in 0xFFFF == 0x0000 : bool)
  Class: Eq_296
  DataType: 
  OrigDataType: 
T_297: (in dl_70 : byte)
  Class: Eq_297
  DataType: 
  OrigDataType: 
T_298: (in 0x0000 : word16)
  Class: Eq_298
  DataType: 
  OrigDataType: 
T_299: (in dx + 0x0000 : word16)
  Class: Eq_299
  DataType: 
  OrigDataType: 
T_300: (in Mem0[ds:dx + 0x0000:byte] : byte)
  Class: Eq_297
  DataType: 
  OrigDataType: 
T_301: (in al_74 : byte)
  Class: Eq_297
  DataType: 
  OrigDataType: 
T_302: (in 0x00 : byte)
  Class: Eq_297
  DataType: 
  OrigDataType: 
T_303: (in al_74 == 0x00 : bool)
  Class: Eq_303
  DataType: 
  OrigDataType: 
T_304: (in si_90 : word16)
  Class: Eq_304
  DataType: 
  OrigDataType: 
T_305: (in 0x0001 : word16)
  Class: Eq_305
  DataType: 
  OrigDataType: 
T_306: (in si_138 + 0x0001 : word16)
  Class: Eq_304
  DataType: 
  OrigDataType: 
T_307: (in al_91 : byte)
  Class: Eq_297
  DataType: 
  OrigDataType: 
T_308: (in 0x0000 : word16)
  Class: Eq_308
  DataType: 
  OrigDataType: 
T_309: (in si_90 + 0x0000 : word16)
  Class: Eq_309
  DataType: 
  OrigDataType: 
T_310: (in Mem0[ds:si_90 + 0x0000:byte] : byte)
  Class: Eq_297
  DataType: 
  OrigDataType: 
T_311: (in al_91 == dl_70 : bool)
  Class: Eq_311
  DataType: 
  OrigDataType: 
T_312: (in 0x0001 : word16)
  Class: Eq_312
  DataType: 
  OrigDataType: 
T_313: (in si_90 + 0x0001 : word16)
  Class: Eq_3
  DataType: 
  OrigDataType: 
T_314: (in 0x00 : byte)
  Class: Eq_297
  DataType: 
  OrigDataType: 
T_315: (in al_91 != 0x00 : bool)
  Class: Eq_315
  DataType: 
  OrigDataType: 
T_316: (in 0x0000 : word16)
  Class: Eq_316
  DataType: 
  OrigDataType: 
T_317: (in si_138 + 0x0000 : word16)
  Class: Eq_317
  DataType: 
  OrigDataType: 
T_318: (in Mem0[ds:si_138 + 0x0000:byte] : byte)
  Class: Eq_297
  DataType: 
  OrigDataType: 
T_319: (in al_74 == dl_70 : bool)
  Class: Eq_319
  DataType: 
  OrigDataType: 
T_320: (in 0x00 : byte)
  Class: Eq_320
  DataType: 
  OrigDataType: 
T_321: (in 0x0000 : word16)
  Class: Eq_321
  DataType: 
  OrigDataType: 
T_322: (in di_246 + 0x0000 : word16)
  Class: Eq_322
  DataType: 
  OrigDataType: 
T_323: (in Mem0[ds:di_246 + 0x0000:byte] : byte)
  Class: Eq_323
  DataType: 
  OrigDataType: 
T_324: (in 0x00 - Mem0[ds:di_246 + 0x0000:byte] : byte)
  Class: Eq_324
  DataType: 
  OrigDataType: 
T_325: (in cond(0x00 - Mem0[ds:di_246 + 0x0000:byte]) : byte)
  Class: Eq_291
  DataType: 
  OrigDataType: 
T_326: (in 0x0001 : word16)
  Class: Eq_326
  DataType: 
  OrigDataType: 
T_327: (in di_246 + 0x0001 : word16)
  Class: Eq_3
  DataType: 
  OrigDataType: 
T_328: (in 0x0001 : word16)
  Class: Eq_328
  DataType: 
  OrigDataType: 
T_329: (in cx_238 - 0x0001 : word16)
  Class: Eq_287
  DataType: 
  OrigDataType: 
T_330: (in 0x0000 : word16)
  Class: Eq_330
  DataType: 
  OrigDataType: 
T_331: (in di_246 + 0x0000 : word16)
  Class: Eq_331
  DataType: 
  OrigDataType: 
T_332: (in Mem0[ds:di_246 + 0x0000:byte] : byte)
  Class: Eq_320
  DataType: 
  OrigDataType: 
T_333: (in 0x00 != Mem0[ds:di_246 + 0x0000:byte] : bool)
  Class: Eq_333
  DataType: 
  OrigDataType: 
T_334: (in 0x0000 : word16)
  Class: Eq_287
  DataType: 
  OrigDataType: 
T_335: (in cx_238 == 0x0000 : bool)
  Class: Eq_335
  DataType: 
  OrigDataType: 
T_336: (in 0x0001 : word16)
  Class: Eq_336
  DataType: 
  OrigDataType: 
T_337: (in di_246 - 0x0001 : word16)
  Class: Eq_287
  DataType: 
  OrigDataType: 
T_338: (in di_111 : word16)
  Class: Eq_66
  DataType: 
  OrigDataType: 
T_339: (in cx_114 : word16)
  Class: Eq_339
  DataType: 
  OrigDataType: 
T_340: (in 0xFFFF : word16)
  Class: Eq_339
  DataType: 
  OrigDataType: 
T_341: (in cx_127 : word16)
  Class: Eq_341
  DataType: 
  OrigDataType: 
T_342: (in ~cx_114 : word16)
  Class: Eq_341
  DataType: 
  OrigDataType: 
T_343: (in di_263 : word16)
  Class: Eq_66
  DataType: 
  OrigDataType: 
T_344: (in 0x0001 : word16)
  Class: Eq_344
  DataType: 
  OrigDataType: 
T_345: (in di_263 + 0x0001 : word16)
  Class: Eq_66
  DataType: 
  OrigDataType: 
T_346: (in 0x0001 : word16)
  Class: Eq_346
  DataType: 
  OrigDataType: 
T_347: (in cx_114 - 0x0001 : word16)
  Class: Eq_339
  DataType: 
  OrigDataType: 
T_348: (in 0x00 : byte)
  Class: Eq_348
  DataType: 
  OrigDataType: 
T_349: (in 0x0000 : word16)
  Class: Eq_349
  DataType: 
  OrigDataType: 
T_350: (in di_263 + 0x0000 : word16)
  Class: Eq_350
  DataType: 
  OrigDataType: 
T_351: (in Mem0[ds:di_263 + 0x0000:byte] : byte)
  Class: Eq_348
  DataType: 
  OrigDataType: 
T_352: (in 0x00 != Mem0[ds:di_263 + 0x0000:byte] : bool)
  Class: Eq_352
  DataType: 
  OrigDataType: 
T_353: (in 0x0000 : word16)
  Class: Eq_339
  DataType: 
  OrigDataType: 
T_354: (in cx_114 == 0x0000 : bool)
  Class: Eq_354
  DataType: 
  OrigDataType: 
T_355: (in di_161 : word16)
  Class: Eq_355
  DataType: 
  OrigDataType: 
T_356: (in di_156 : word16)
  Class: Eq_3
  DataType: 
  OrigDataType: 
T_357: (in al_157 : byte)
  Class: Eq_357
  DataType: 
  OrigDataType: 
T_358: (in 0x0000 : word16)
  Class: Eq_358
  DataType: 
  OrigDataType: 
T_359: (in dx + 0x0000 : word16)
  Class: Eq_359
  DataType: 
  OrigDataType: 
T_360: (in Mem0[ds:dx + 0x0000:byte] : byte)
  Class: Eq_357
  DataType: 
  OrigDataType: 
T_361: (in cx_140 : word16)
  Class: Eq_355
  DataType: 
  OrigDataType: 
T_362: (in 0x0000 : word16)
  Class: Eq_355
  DataType: 
  OrigDataType: 
T_363: (in cx_140 == 0x0000 : bool)
  Class: Eq_363
  DataType: 
  OrigDataType: 
T_364: (in Z_142 : byte)
  Class: Eq_364
  DataType: 
  OrigDataType: 
T_365: (in 0x0000 : word16)
  Class: Eq_365
  DataType: 
  OrigDataType: 
T_366: (in di_156 + 0x0000 : word16)
  Class: Eq_366
  DataType: 
  OrigDataType: 
T_367: (in Mem0[ds:di_156 + 0x0000:byte] : byte)
  Class: Eq_367
  DataType: 
  OrigDataType: 
T_368: (in al_157 - Mem0[ds:di_156 + 0x0000:byte] : byte)
  Class: Eq_368
  DataType: 
  OrigDataType: 
T_369: (in cond(al_157 - Mem0[ds:di_156 + 0x0000:byte]) : byte)
  Class: Eq_364
  DataType: 
  OrigDataType: 
T_370: (in 0x0001 : word16)
  Class: Eq_370
  DataType: 
  OrigDataType: 
T_371: (in di_156 + 0x0001 : word16)
  Class: Eq_3
  DataType: 
  OrigDataType: 
T_372: (in 0x0001 : word16)
  Class: Eq_372
  DataType: 
  OrigDataType: 
T_373: (in cx_140 - 0x0001 : word16)
  Class: Eq_355
  DataType: 
  OrigDataType: 
T_374: (in 0x0000 : word16)
  Class: Eq_374
  DataType: 
  OrigDataType: 
T_375: (in di_156 + 0x0000 : word16)
  Class: Eq_375
  DataType: 
  OrigDataType: 
T_376: (in Mem0[ds:di_156 + 0x0000:byte] : byte)
  Class: Eq_357
  DataType: 
  OrigDataType: 
T_377: (in al_157 != Mem0[ds:di_156 + 0x0000:byte] : bool)
  Class: Eq_377
  DataType: 
  OrigDataType: 
T_378: (in 0x0000 : word16)
  Class: Eq_355
  DataType: 
  OrigDataType: 
T_379: (in cx_140 == 0x0000 : bool)
  Class: Eq_379
  DataType: 
  OrigDataType: 
T_380: (in 0x0001 : word16)
  Class: Eq_380
  DataType: 
  OrigDataType: 
T_381: (in di_156 - 0x0001 : word16)
  Class: Eq_355
  DataType: 
  OrigDataType: 
T_382: (in 0x0000 : word16)
  Class: Eq_355
  DataType: 
  OrigDataType: 
T_383: (in di_161 == 0x0000 : bool)
  Class: Eq_383
  DataType: 
  OrigDataType: 
T_384: (in cx_168 : word16)
  Class: Eq_384
  DataType: 
  OrigDataType: 
T_385: (in 0x0001 : word16)
  Class: Eq_385
  DataType: 
  OrigDataType: 
T_386: (in cx_127 - 0x0001 : word16)
  Class: Eq_384
  DataType: 
  OrigDataType: 
T_387: (in di_170 : word16)
  Class: Eq_66
  DataType: 
  OrigDataType: 
T_388: (in si_172 : word16)
  Class: Eq_355
  DataType: 
  OrigDataType: 
T_389: (in FPUF : byte)
  Class: Eq_389
  DataType: 
  OrigDataType: 
T_390: (in 0x40 : byte)
  Class: Eq_390
  DataType: 
  OrigDataType: 
T_391: (in FPUF & 0x40 : byte)
  Class: Eq_391
  DataType: 
  OrigDataType: 
T_392: (in 0x00 : byte)
  Class: Eq_391
  DataType: 
  OrigDataType: 
T_393: (in (FPUF & 0x40) == 0x00 : bool)
  Class: Eq_393
  DataType: 
  OrigDataType: 
T_394: (in si_265 : word16)
  Class: Eq_355
  DataType: 
  OrigDataType: 
T_395: (in 0x0001 : word16)
  Class: Eq_395
  DataType: 
  OrigDataType: 
T_396: (in si_265 + 0x0001 : word16)
  Class: Eq_355
  DataType: 
  OrigDataType: 
T_397: (in di_264 : word16)
  Class: Eq_66
  DataType: 
  OrigDataType: 
T_398: (in 0x0001 : word16)
  Class: Eq_398
  DataType: 
  OrigDataType: 
T_399: (in di_264 + 0x0001 : word16)
  Class: Eq_66
  DataType: 
  OrigDataType: 
T_400: (in 0x0001 : word16)
  Class: Eq_400
  DataType: 
  OrigDataType: 
T_401: (in cx_168 - 0x0001 : word16)
  Class: Eq_384
  DataType: 
  OrigDataType: 
T_402: (in 0x0000 : word16)
  Class: Eq_402
  DataType: 
  OrigDataType: 
T_403: (in si_265 + 0x0000 : word16)
  Class: Eq_403
  DataType: 
  OrigDataType: 
T_404: (in Mem0[ds:si_265 + 0x0000:byte] : byte)
  Class: Eq_404
  DataType: 
  OrigDataType: 
T_405: (in 0x0000 : word16)
  Class: Eq_405
  DataType: 
  OrigDataType: 
T_406: (in di_264 + 0x0000 : word16)
  Class: Eq_406
  DataType: 
  OrigDataType: 
T_407: (in Mem0[ds:di_264 + 0x0000:byte] : byte)
  Class: Eq_404
  DataType: 
  OrigDataType: 
T_408: (in Mem0[ds:si_265 + 0x0000:byte] != Mem0[ds:di_264 + 0x0000:byte] : bool)
  Class: Eq_408
  DataType: 
  OrigDataType: 
T_409: (in 0x0000 : word16)
  Class: Eq_384
  DataType: 
  OrigDataType: 
T_410: (in cx_168 == 0x0000 : bool)
  Class: Eq_410
  DataType: 
  OrigDataType: 
T_411: (in 0x0001 : word16)
  Class: Eq_411
  DataType: 
  OrigDataType: 
T_412: (in di_161 + 0x0001 : word16)
  Class: Eq_3
  DataType: 
  OrigDataType: 
T_413: (in di_109 - si_138 : word16)
  Class: Eq_355
  DataType: 
  OrigDataType: 
T_414: (in cx_127 - 0x0001 : word16)
  Class: Eq_414
  DataType: 
  OrigDataType: 
T_415: (in cx_140 - (cx_127 - 0x0001) : word16)
  Class: Eq_415
  DataType: 
  OrigDataType: 
T_416: (in cond(cx_140 - (cx_127 - 0x0001)) : byte)
  Class: Eq_364
  DataType: 
  OrigDataType: 
T_417: (in cx_127 - 0x0001 : word16)
  Class: Eq_355
  DataType: 
  OrigDataType: 
T_418: (in cx_140 <u cx_127 - 0x0001 : bool)
  Class: Eq_418
  DataType: 
  OrigDataType: 
T_419: (in es : selector)
  Class: Eq_419
  DataType: 
  OrigDataType: 
T_420: (in fn0800_035A : ptr32)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_421: (in fn0800_035A() : word16)
  Class: Eq_421
  DataType: 
  OrigDataType: 
T_422: (in dx_34 : word16)
  Class: Eq_422
  DataType: 
  OrigDataType: 
T_423: (in cl_132 : byte)
  Class: Eq_423
  DataType: 
  OrigDataType: 
T_424: (in ax_36 : word16)
  Class: Eq_424
  DataType: 
  OrigDataType: 
T_425: (in fn0800_0651 : ptr32)
  Class: Eq_425
  DataType: 
  OrigDataType: 
T_426: (in signature of fn0800_0651 : void)
  Class: Eq_425
  DataType: 
  OrigDataType: 
T_427: (in cl : byte)
  Class: Eq_423
  DataType: 
  OrigDataType: 
T_428: (in dl : byte)
  Class: Eq_428
  DataType: 
  OrigDataType: 
T_429: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_430: (in dxOut : ptr16)
  Class: Eq_430
  DataType: 
  OrigDataType: 
T_431: (in clOut : ptr16)
  Class: Eq_431
  DataType: 
  OrigDataType: 
T_432: (in 0x043C : word16)
  Class: Eq_432
  DataType: 
  OrigDataType: 
T_433: (in Mem0[ds:0x043C:word16] : word16)
  Class: Eq_433
  DataType: 
  OrigDataType: 
T_434: (in (byte) Mem0[ds:0x043C:word16] : byte)
  Class: Eq_423
  DataType: 
  OrigDataType: 
T_435: (in 0x00 : byte)
  Class: Eq_428
  DataType: 
  OrigDataType: 
T_436: (in out dx_34 : ptr16)
  Class: Eq_430
  DataType: 
  OrigDataType: 
T_437: (in out cl_132 : ptr16)
  Class: Eq_431
  DataType: 
  OrigDataType: 
T_438: (in fn0800_0651((byte) Mem0[ds:0x043C:word16], 0x00, ds, out dx_34, out cl_132) : word16)
  Class: Eq_424
  DataType: 
  OrigDataType: 
T_439: (in 0x0000 : word16)
  Class: Eq_424
  DataType: 
  OrigDataType: 
T_440: (in ax_36 != 0x0000 : bool)
  Class: Eq_440
  DataType: 
  OrigDataType: 
T_441: (in cx_105 : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_442: (in bp_106 : word16)
  Class: Eq_442
  DataType: 
  OrigDataType: 
T_443: (in si_107 : word16)
  Class: Eq_443
  DataType: 
  OrigDataType: 
T_444: (in di_108 : word16)
  Class: Eq_444
  DataType: 
  OrigDataType: 
T_445: (in ax_110 : word16)
  Class: Eq_445
  DataType: 
  OrigDataType: 
T_446: (in fn0800_00BA : ptr32)
  Class: Eq_10
  DataType: 
  OrigDataType: 
T_447: (in fp : ptr16)
  Class: Eq_447
  DataType: 
  OrigDataType: 
T_448: (in 0x0008 : word16)
  Class: Eq_448
  DataType: 
  OrigDataType: 
T_449: (in fp - 0x0008 : word16)
  Class: Eq_13
  DataType: 
  OrigDataType: 
T_450: (in out cx_105 : ptr16)
  Class: Eq_15
  DataType: 
  OrigDataType: 
T_451: (in out bp_106 : ptr16)
  Class: Eq_16
  DataType: 
  OrigDataType: 
T_452: (in out si_107 : ptr16)
  Class: Eq_17
  DataType: 
  OrigDataType: 
T_453: (in out di_108 : ptr16)
  Class: Eq_18
  DataType: 
  OrigDataType: 
T_454: (in out es : ptr16)
  Class: Eq_19
  DataType: 
  OrigDataType: 
T_455: (in fn0800_00BA(dx, fp - 0x0008, ds, out cx_105, out bp_106, out si_107, out di_108, out es) : word16)
  Class: Eq_445
  DataType: 
  OrigDataType: 
T_456: (in si_111 : word16)
  Class: Eq_445
  DataType: 
  OrigDataType: 
T_457: (in 0x0000 : word16)
  Class: Eq_445
  DataType: 
  OrigDataType: 
T_458: (in ax_110 == 0x0000 : bool)
  Class: Eq_458
  DataType: 
  OrigDataType: 
T_459: (in al_63 : byte)
  Class: Eq_459
  DataType: 
  OrigDataType: 
T_460: (in 0x0000 : word16)
  Class: Eq_460
  DataType: 
  OrigDataType: 
T_461: (in ax + 0x0000 : word16)
  Class: Eq_461
  DataType: 
  OrigDataType: 
T_462: (in Mem0[ds:ax + 0x0000:byte] : byte)
  Class: Eq_459
  DataType: 
  OrigDataType: 
T_463: (in ax_65 : word16)
  Class: Eq_463
  DataType: 
  OrigDataType: 
T_464: (in 0x00 : byte)
  Class: Eq_464
  DataType: 
  OrigDataType: 
T_465: (in DPB(ax_36, 0x00, 8, 8) : word16)
  Class: Eq_463
  DataType: 
  OrigDataType: 
T_466: (in bx_66 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_467: (in 0x005C : word16)
  Class: Eq_463
  DataType: 
  OrigDataType: 
T_468: (in ax_65 == 0x005C : bool)
  Class: Eq_468
  DataType: 
  OrigDataType: 
T_469: (in fn0800_070B : ptr32)
  Class: Eq_469
  DataType: 
  OrigDataType: 
T_470: (in signature of fn0800_070B : void)
  Class: Eq_469
  DataType: 
  OrigDataType: 
T_471: (in ax : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_472: (in dx : word16)
  Class: Eq_83
  DataType: 
  OrigDataType: 
T_473: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_474: (in fn0800_070B(bx_66, ax, ds) : void)
  Class: Eq_474
  DataType: 
  OrigDataType: 
T_475: (in 0x002E : word16)
  Class: Eq_463
  DataType: 
  OrigDataType: 
T_476: (in ax_65 == 0x002E : bool)
  Class: Eq_476
  DataType: 
  OrigDataType: 
T_477: (in 0x002F : word16)
  Class: Eq_463
  DataType: 
  OrigDataType: 
T_478: (in ax_65 == 0x002F : bool)
  Class: Eq_478
  DataType: 
  OrigDataType: 
T_479: (in 0x00 : byte)
  Class: Eq_459
  DataType: 
  OrigDataType: 
T_480: (in al_63 == 0x00 : bool)
  Class: Eq_480
  DataType: 
  OrigDataType: 
T_481: (in fn0800_0674 : ptr32)
  Class: Eq_481
  DataType: 
  OrigDataType: 
T_482: (in signature of fn0800_0674 : void)
  Class: Eq_481
  DataType: 
  OrigDataType: 
T_483: (in ax : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_484: (in dx : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_485: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_486: (in 0x0090 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_487: (in fn0800_0674(bx, 0x0090, ds) : void)
  Class: Eq_487
  DataType: 
  OrigDataType: 
T_488: (in ax_90 : word16)
  Class: Eq_488
  DataType: 
  OrigDataType: 
T_489: (in fn0800_06F2 : ptr32)
  Class: Eq_489
  DataType: 
  OrigDataType: 
T_490: (in signature of fn0800_06F2 : void)
  Class: Eq_489
  DataType: 
  OrigDataType: 
T_491: (in ax : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_492: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_493: (in fn0800_06F2(bx, ds) : word16)
  Class: Eq_488
  DataType: 
  OrigDataType: 
T_494: (in bx + ax_90 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_495: (in 0x00 : byte)
  Class: Eq_495
  DataType: 
  OrigDataType: 
T_496: (in DPB(ax_90, 0x00, 8, 8) : word16)
  Class: Eq_496
  DataType: 
  OrigDataType: 
T_497: (in 0x005C : word16)
  Class: Eq_496
  DataType: 
  OrigDataType: 
T_498: (in DPB(ax_90, 0x00, 8, 8) == 0x005C : bool)
  Class: Eq_498
  DataType: 
  OrigDataType: 
T_499: (in 0x0001 : word16)
  Class: Eq_499
  DataType: 
  OrigDataType: 
T_500: (in ax + 0x0001 : word16)
  Class: Eq_500
  DataType: 
  OrigDataType: 
T_501: (in Mem0[ds:ax + 0x0001:byte] : byte)
  Class: Eq_501
  DataType: 
  OrigDataType: 
T_502: (in DPB(ax_65, Mem0[ds:ax + 0x0001:byte], 0, 8) : word16)
  Class: Eq_502
  DataType: 
  OrigDataType: 
T_503: (in 0x003A : word16)
  Class: Eq_502
  DataType: 
  OrigDataType: 
T_504: (in DPB(ax_65, Mem0[ds:ax + 0x0001:byte], 0, 8) == 0x003A : bool)
  Class: Eq_504
  DataType: 
  OrigDataType: 
T_505: (in 0x5C : byte)
  Class: Eq_505
  DataType: 
  OrigDataType: 
T_506: (in 0x0000 : word16)
  Class: Eq_506
  DataType: 
  OrigDataType: 
T_507: (in bx_66 + 0x0000 : word16)
  Class: Eq_507
  DataType: 
  OrigDataType: 
T_508: (in Mem97[ds:bx_66 + 0x0000:byte] : byte)
  Class: Eq_505
  DataType: 
  OrigDataType: 
T_509: (in 0x0001 : word16)
  Class: Eq_509
  DataType: 
  OrigDataType: 
T_510: (in bx_66 + 0x0001 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_511: (in 0x00 : byte)
  Class: Eq_511
  DataType: 
  OrigDataType: 
T_512: (in ss : selector)
  Class: Eq_512
  DataType: 
  OrigDataType: 
T_513: (in 0x0002 : word16)
  Class: Eq_513
  DataType: 
  OrigDataType: 
T_514: (in bp_106 - 0x0002 : word16)
  Class: Eq_514
  DataType: 
  OrigDataType: 
T_515: (in Mem0[ss:bp_106 - 0x0002:word16] : word16)
  Class: Eq_515
  DataType: 
  OrigDataType: 
T_516: (in Mem130[ds:Mem0[ss:bp_106 - 0x0002:word16]:byte] : byte)
  Class: Eq_511
  DataType: 
  OrigDataType: 
T_517: (in 0x0000 : word16)
  Class: Eq_517
  DataType: 
  OrigDataType: 
T_518: (in si_111 + 0x0000 : word16)
  Class: Eq_518
  DataType: 
  OrigDataType: 
T_519: (in Mem0[ds:si_111 + 0x0000:byte] : byte)
  Class: Eq_519
  DataType: 
  OrigDataType: 
T_520: (in 0x00 : byte)
  Class: Eq_519
  DataType: 
  OrigDataType: 
T_521: (in Mem0[ds:si_111 + 0x0000:byte] == 0x00 : bool)
  Class: Eq_521
  DataType: 
  OrigDataType: 
T_522: (in bx_143 : word16)
  Class: Eq_522
  DataType: 
  OrigDataType: 
T_523: (in 0x0002 : word16)
  Class: Eq_523
  DataType: 
  OrigDataType: 
T_524: (in bp_106 - 0x0002 : word16)
  Class: Eq_524
  DataType: 
  OrigDataType: 
T_525: (in Mem0[ss:bp_106 - 0x0002:word16] : word16)
  Class: Eq_525
  DataType: 
  OrigDataType: 
T_526: (in 0x0001 : word16)
  Class: Eq_526
  DataType: 
  OrigDataType: 
T_527: (in Mem0[ss:bp_106 - 0x0002:word16] + 0x0001 : word16)
  Class: Eq_522
  DataType: 
  OrigDataType: 
T_528: (in 0x0002 : word16)
  Class: Eq_528
  DataType: 
  OrigDataType: 
T_529: (in bp_106 - 0x0002 : word16)
  Class: Eq_529
  DataType: 
  OrigDataType: 
T_530: (in Mem0[ss:bp_106 - 0x0002:word16] : word16)
  Class: Eq_522
  DataType: 
  OrigDataType: 
T_531: (in bx_143 == Mem0[ss:bp_106 - 0x0002:word16] : bool)
  Class: Eq_531
  DataType: 
  OrigDataType: 
T_532: (in al_202 : byte)
  Class: Eq_532
  DataType: 
  OrigDataType: 
T_533: (in 0x0000 : word16)
  Class: Eq_533
  DataType: 
  OrigDataType: 
T_534: (in si_111 + 0x0000 : word16)
  Class: Eq_534
  DataType: 
  OrigDataType: 
T_535: (in Mem0[ds:si_111 + 0x0000:byte] : byte)
  Class: Eq_532
  DataType: 
  OrigDataType: 
T_536: (in 0x00 : byte)
  Class: Eq_536
  DataType: 
  OrigDataType: 
T_537: (in DPB(ax_110, 0x00, 8, 8) : word16)
  Class: Eq_445
  DataType: 
  OrigDataType: 
T_538: (in 0x003B : word16)
  Class: Eq_445
  DataType: 
  OrigDataType: 
T_539: (in ax_110 == 0x003B : bool)
  Class: Eq_539
  DataType: 
  OrigDataType: 
T_540: (in 0x0000 : word16)
  Class: Eq_540
  DataType: 
  OrigDataType: 
T_541: (in bx_143 + 0x0000 : word16)
  Class: Eq_541
  DataType: 
  OrigDataType: 
T_542: (in Mem208[ds:bx_143 + 0x0000:byte] : byte)
  Class: Eq_532
  DataType: 
  OrigDataType: 
T_543: (in 0x0001 : word16)
  Class: Eq_543
  DataType: 
  OrigDataType: 
T_544: (in si_111 + 0x0001 : word16)
  Class: Eq_445
  DataType: 
  OrigDataType: 
T_545: (in 0x0001 : word16)
  Class: Eq_545
  DataType: 
  OrigDataType: 
T_546: (in bx_143 + 0x0001 : word16)
  Class: Eq_522
  DataType: 
  OrigDataType: 
T_547: (in 0x0000 : word16)
  Class: Eq_547
  DataType: 
  OrigDataType: 
T_548: (in si_111 + 0x0000 : word16)
  Class: Eq_548
  DataType: 
  OrigDataType: 
T_549: (in Mem0[ds:si_111 + 0x0000:byte] : byte)
  Class: Eq_549
  DataType: 
  OrigDataType: 
T_550: (in 0x00 : byte)
  Class: Eq_549
  DataType: 
  OrigDataType: 
T_551: (in Mem0[ds:si_111 + 0x0000:byte] == 0x00 : bool)
  Class: Eq_551
  DataType: 
  OrigDataType: 
T_552: (in 0x0000 : word16)
  Class: Eq_552
  DataType: 
  OrigDataType: 
T_553: (in si_111 + 0x0000 : word16)
  Class: Eq_553
  DataType: 
  OrigDataType: 
T_554: (in Mem0[ds:si_111 + 0x0000:byte] : byte)
  Class: Eq_554
  DataType: 
  OrigDataType: 
T_555: (in 0x00 : byte)
  Class: Eq_554
  DataType: 
  OrigDataType: 
T_556: (in Mem0[ds:si_111 + 0x0000:byte] == 0x00 : bool)
  Class: Eq_556
  DataType: 
  OrigDataType: 
T_557: (in ax_172 : word16)
  Class: Eq_557
  DataType: 
  OrigDataType: 
T_558: (in 0x00 : byte)
  Class: Eq_558
  DataType: 
  OrigDataType: 
T_559: (in DPB(ax_110, 0x00, 8, 8) : word16)
  Class: Eq_557
  DataType: 
  OrigDataType: 
T_560: (in 0x005C : word16)
  Class: Eq_557
  DataType: 
  OrigDataType: 
T_561: (in ax_172 == 0x005C : bool)
  Class: Eq_561
  DataType: 
  OrigDataType: 
T_562: (in 0x00 : byte)
  Class: Eq_562
  DataType: 
  OrigDataType: 
T_563: (in 0x0000 : word16)
  Class: Eq_563
  DataType: 
  OrigDataType: 
T_564: (in bx_143 + 0x0000 : word16)
  Class: Eq_564
  DataType: 
  OrigDataType: 
T_565: (in Mem179[ds:bx_143 + 0x0000:byte] : byte)
  Class: Eq_562
  DataType: 
  OrigDataType: 
T_566: (in fn0800_074A : ptr32)
  Class: Eq_566
  DataType: 
  OrigDataType: 
T_567: (in signature of fn0800_074A : void)
  Class: Eq_566
  DataType: 
  OrigDataType: 
T_568: (in ax : word16)
  Class: Eq_522
  DataType: 
  OrigDataType: 
T_569: (in dx : word16)
  Class: Eq_444
  DataType: 
  OrigDataType: 
T_570: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_571: (in fn0800_074A(bx_143, di_108, ds) : void)
  Class: Eq_571
  DataType: 
  OrigDataType: 
T_572: (in dx_185 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_573: (in fn0800_0651 : ptr32)
  Class: Eq_425
  DataType: 
  OrigDataType: 
T_574: (in 0x00 : byte)
  Class: Eq_428
  DataType: 
  OrigDataType: 
T_575: (in out dx_185 : ptr16)
  Class: Eq_430
  DataType: 
  OrigDataType: 
T_576: (in out cl_132 : ptr16)
  Class: Eq_431
  DataType: 
  OrigDataType: 
T_577: (in fn0800_0651(cl_132, 0x00, ds, out dx_185, out cl_132) : word16)
  Class: Eq_445
  DataType: 
  OrigDataType: 
T_578: (in 0x0000 : word16)
  Class: Eq_445
  DataType: 
  OrigDataType: 
T_579: (in ax_110 != 0x0000 : bool)
  Class: Eq_579
  DataType: 
  OrigDataType: 
T_580: (in 0x002F : word16)
  Class: Eq_557
  DataType: 
  OrigDataType: 
T_581: (in ax_172 == 0x002F : bool)
  Class: Eq_581
  DataType: 
  OrigDataType: 
T_582: (in 0x003A : word16)
  Class: Eq_557
  DataType: 
  OrigDataType: 
T_583: (in ax_172 == 0x003A : bool)
  Class: Eq_583
  DataType: 
  OrigDataType: 
T_584: (in 0x5C : byte)
  Class: Eq_584
  DataType: 
  OrigDataType: 
T_585: (in 0x0000 : word16)
  Class: Eq_585
  DataType: 
  OrigDataType: 
T_586: (in bx_143 + 0x0000 : word16)
  Class: Eq_586
  DataType: 
  OrigDataType: 
T_587: (in Mem199[ds:bx_143 + 0x0000:byte] : byte)
  Class: Eq_584
  DataType: 
  OrigDataType: 
T_588: (in 0x0000 : word16)
  Class: Eq_588
  DataType: 
  OrigDataType: 
T_589: (in bx_143 + 0x0000 : word16)
  Class: Eq_522
  DataType: 
  OrigDataType: 
T_590: (in 0x0001 : word16)
  Class: Eq_590
  DataType: 
  OrigDataType: 
T_591: (in si_111 + 0x0001 : word16)
  Class: Eq_445
  DataType: 
  OrigDataType: 
T_592: (in bx_192 : word16)
  Class: Eq_592
  DataType: 
  OrigDataType: 
T_593: (in fn0800_0780 : ptr32)
  Class: Eq_593
  DataType: 
  OrigDataType: 
T_594: (in signature of fn0800_0780 : void)
  Class: Eq_593
  DataType: 
  OrigDataType: 
T_595: (in ax : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_596: (in dx : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_597: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_598: (in bxOut : ptr16)
  Class: Eq_598
  DataType: 
  OrigDataType: 
T_599: (in out bx_192 : ptr16)
  Class: Eq_598
  DataType: 
  OrigDataType: 
T_600: (in fn0800_0780(cx_105, dx_185, ds, out bx_192) : word16)
  Class: Eq_600
  DataType: 
  OrigDataType: 
T_601: (in dx_27 : word16)
  Class: Eq_601
  DataType: 
  OrigDataType: 
T_602: (in dx : word16)
  Class: Eq_601
  DataType: 
  OrigDataType: 
T_603: (in 0x00 : byte)
  Class: Eq_603
  DataType: 
  OrigDataType: 
T_604: (in DPB(dx, 0x00, 8, 8) : word16)
  Class: Eq_601
  DataType: 
  OrigDataType: 
T_605: (in es_24 : selector)
  Class: Eq_605
  DataType: 
  OrigDataType: 
T_606: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_607: (in 0x0226 : word16)
  Class: Eq_607
  DataType: 
  OrigDataType: 
T_608: (in Mem0[ds:0x0226:selector] : selector)
  Class: Eq_605
  DataType: 
  OrigDataType: 
T_609: (in si_28 : word16)
  Class: Eq_609
  DataType: 
  OrigDataType: 
T_610: (in 0x0081 : word16)
  Class: Eq_609
  DataType: 
  OrigDataType: 
T_611: (in ax_29 : word16)
  Class: Eq_601
  DataType: 
  OrigDataType: 
T_612: (in ax : word16)
  Class: Eq_126
  DataType: 
  OrigDataType: 
T_613: (in 0x0000 : word16)
  Class: Eq_126
  DataType: 
  OrigDataType: 
T_614: (in ax == 0x0000 : bool)
  Class: Eq_614
  DataType: 
  OrigDataType: 
T_615: (in 0x0002 : word16)
  Class: Eq_601
  DataType: 
  OrigDataType: 
T_616: (in dx >= 0x0002 : bool)
  Class: Eq_616
  DataType: 
  OrigDataType: 
T_617: (in bx_60 : word16)
  Class: Eq_126
  DataType: 
  OrigDataType: 
T_618: (in dx_27 < dx : bool)
  Class: Eq_618
  DataType: 
  OrigDataType: 
T_619: (in 0x00 : byte)
  Class: Eq_619
  DataType: 
  OrigDataType: 
T_620: (in 0x0000 : word16)
  Class: Eq_620
  DataType: 
  OrigDataType: 
T_621: (in ax + 0x0000 : word16)
  Class: Eq_621
  DataType: 
  OrigDataType: 
T_622: (in Mem59[ds:ax + 0x0000:byte] : byte)
  Class: Eq_619
  DataType: 
  OrigDataType: 
T_623: (in 0x0001 : word16)
  Class: Eq_623
  DataType: 
  OrigDataType: 
T_624: (in ax_29 - 0x0001 : word16)
  Class: Eq_601
  DataType: 
  OrigDataType: 
T_625: (in 0xFFFF : word16)
  Class: Eq_601
  DataType: 
  OrigDataType: 
T_626: (in ax_29 == 0xFFFF : bool)
  Class: Eq_626
  DataType: 
  OrigDataType: 
T_627: (in 0x0001 : word16)
  Class: Eq_627
  DataType: 
  OrigDataType: 
T_628: (in dx - 0x0001 : word16)
  Class: Eq_601
  DataType: 
  OrigDataType: 
T_629: (in 0x00 : byte)
  Class: Eq_629
  DataType: 
  OrigDataType: 
T_630: (in 0x0000 : word16)
  Class: Eq_630
  DataType: 
  OrigDataType: 
T_631: (in bx_60 + 0x0000 : word16)
  Class: Eq_631
  DataType: 
  OrigDataType: 
T_632: (in Mem78[ds:bx_60 + 0x0000:byte] : byte)
  Class: Eq_629
  DataType: 
  OrigDataType: 
T_633: (in 0x0000 : word16)
  Class: Eq_633
  DataType: 
  OrigDataType: 
T_634: (in si_28 + 0x0000 : word16)
  Class: Eq_634
  DataType: 
  OrigDataType: 
T_635: (in Mem0[es_24:si_28 + 0x0000:byte] : byte)
  Class: Eq_635
  DataType: 
  OrigDataType: 
T_636: (in 0x0000 : word16)
  Class: Eq_636
  DataType: 
  OrigDataType: 
T_637: (in bx_60 + 0x0000 : word16)
  Class: Eq_637
  DataType: 
  OrigDataType: 
T_638: (in Mem74[ds:bx_60 + 0x0000:byte] : byte)
  Class: Eq_635
  DataType: 
  OrigDataType: 
T_639: (in 0x0001 : word16)
  Class: Eq_639
  DataType: 
  OrigDataType: 
T_640: (in si_28 + 0x0001 : word16)
  Class: Eq_609
  DataType: 
  OrigDataType: 
T_641: (in 0x0001 : word16)
  Class: Eq_641
  DataType: 
  OrigDataType: 
T_642: (in bx_60 + 0x0001 : word16)
  Class: Eq_126
  DataType: 
  OrigDataType: 
T_643: (in fn0800_02D0 : ptr32)
  Class: Eq_643
  DataType: 
  OrigDataType: 
T_644: (in signature of fn0800_02D0 : void)
  Class: Eq_643
  DataType: 
  OrigDataType: 
T_645: (in 0x7FFF : word16)
  Class: Eq_601
  DataType: 
  OrigDataType: 
T_646: (in fn0800_02D0(ax, 0x7FFF, ds) : void)
  Class: Eq_646
  DataType: 
  OrigDataType: 
T_647: (in bp : word16)
  Class: Eq_647
  DataType: 
  OrigDataType: 
T_648: (in fn0800_07A6 : ptr32)
  Class: Eq_648
  DataType: 
  OrigDataType: 
T_649: (in signature of fn0800_07A6 : void)
  Class: Eq_648
  DataType: 
  OrigDataType: 
T_650: (in ax : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_651: (in bx : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_652: (in di : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_653: (in es : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_654: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_655: (in 0x0220 : word16)
  Class: Eq_655
  DataType: 
  OrigDataType: 
T_656: (in Mem0[ds:0x0220:word16] : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_657: (in fn0800_07A6(ax, Mem0[ds:0x0220:word16], di, es, ds) : void)
  Class: Eq_657
  DataType: 
  OrigDataType: 
T_658: (in Z : byte)
  Class: Eq_658
  DataType: 
  OrigDataType: 
T_659: (in ax_11 : word16)
  Class: Eq_659
  DataType: 
  OrigDataType: 
T_660: (in fn0800_08B4 : ptr32)
  Class: Eq_660
  DataType: 
  OrigDataType: 
T_661: (in signature of fn0800_08B4 : void)
  Class: Eq_660
  DataType: 
  OrigDataType: 
T_662: (in ax : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_663: (in dx : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_664: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_665: (in 0x025C : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_666: (in fn0800_08B4(ax, 0x025C, ds) : word16)
  Class: Eq_659
  DataType: 
  OrigDataType: 
T_667: (in Z_14 : byte)
  Class: Eq_667
  DataType: 
  OrigDataType: 
T_668: (in 0xFFFF : word16)
  Class: Eq_659
  DataType: 
  OrigDataType: 
T_669: (in ax_11 - 0xFFFF : word16)
  Class: Eq_669
  DataType: 
  OrigDataType: 
T_670: (in cond(ax_11 - 0xFFFF) : byte)
  Class: Eq_667
  DataType: 
  OrigDataType: 
T_671: (in ax_11 == 0xFFFF : bool)
  Class: Eq_671
  DataType: 
  OrigDataType: 
T_672: (in cx_30 : word16)
  Class: Eq_672
  DataType: 
  OrigDataType: 
T_673: (in bx_31 : word16)
  Class: Eq_673
  DataType: 
  OrigDataType: 
T_674: (in si_32 : word16)
  Class: Eq_674
  DataType: 
  OrigDataType: 
T_675: (in ax_33 : word16)
  Class: Eq_675
  DataType: 
  OrigDataType: 
T_676: (in fn0800_0924 : ptr32)
  Class: Eq_676
  DataType: 
  OrigDataType: 
T_677: (in signature of fn0800_0924 : void)
  Class: Eq_676
  DataType: 
  OrigDataType: 
T_678: (in ax : word16)
  Class: Eq_678
  DataType: 
  OrigDataType: 
T_679: (in dx : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_680: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_681: (in cxOut : ptr16)
  Class: Eq_681
  DataType: 
  OrigDataType: 
T_682: (in bxOut : ptr16)
  Class: Eq_682
  DataType: 
  OrigDataType: 
T_683: (in siOut : ptr16)
  Class: Eq_683
  DataType: 
  OrigDataType: 
T_684: (in 0x000A : word16)
  Class: Eq_678
  DataType: 
  OrigDataType: 
T_685: (in 0x025C : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_686: (in out cx_30 : ptr16)
  Class: Eq_681
  DataType: 
  OrigDataType: 
T_687: (in out bx_31 : ptr16)
  Class: Eq_682
  DataType: 
  OrigDataType: 
T_688: (in out si_32 : ptr16)
  Class: Eq_683
  DataType: 
  OrigDataType: 
T_689: (in fn0800_0924(0x000A, 0x025C, ds, out cx_30, out bx_31, out si_32) : word16)
  Class: Eq_675
  DataType: 
  OrigDataType: 
T_690: (in 0x000A : word16)
  Class: Eq_675
  DataType: 
  OrigDataType: 
T_691: (in ax_33 - 0x000A : word16)
  Class: Eq_691
  DataType: 
  OrigDataType: 
T_692: (in cond(ax_33 - 0x000A) : byte)
  Class: Eq_667
  DataType: 
  OrigDataType: 
T_693: (in ax_33 != 0x000A : bool)
  Class: Eq_693
  DataType: 
  OrigDataType: 
T_694: (in ax : word16)
  Class: Eq_694
  DataType: 
  OrigDataType: 
T_695: (in 0x043C : word16)
  Class: Eq_695
  DataType: 
  OrigDataType: 
T_696: (in ax : word16)
  Class: Eq_696
  DataType: 
  OrigDataType: 
T_697: (in 0x043E : word16)
  Class: Eq_697
  DataType: 
  OrigDataType: 
T_698: (in 0x0000 : word16)
  Class: Eq_169
  DataType: 
  OrigDataType: 
T_699: (in ax < 0x0000 : bool)
  Class: Eq_699
  DataType: 
  OrigDataType: 
T_700: (in 0x0183 : word16)
  Class: Eq_700
  DataType: 
  OrigDataType: 
T_701: (in 0x000F : word16)
  Class: Eq_169
  DataType: 
  OrigDataType: 
T_702: (in ax <= 0x000F : bool)
  Class: Eq_702
  DataType: 
  OrigDataType: 
T_703: (in 0x01F4 : word16)
  Class: Eq_703
  DataType: 
  OrigDataType: 
T_704: (in SEQ(ds, 0x01F4) : ptr32)
  Class: Eq_704
  DataType: 
  OrigDataType: 
T_705: (in 0x0002 : word16)
  Class: Eq_705
  DataType: 
  OrigDataType: 
T_706: (in ax * 0x0002 : word16)
  Class: Eq_706
  DataType: 
  OrigDataType: 
T_707: (in SEQ(ds, 0x01F4)[ax * 0x0002] : word16)
  Class: Eq_707
  DataType: 
  OrigDataType: 
T_708: (in cs : selector)
  Class: Eq_708
  DataType: 
  OrigDataType: 
T_709: (in ds : selector)
  Class: Eq_709
  DataType: 
  OrigDataType: 
T_710: (in 0x0214 : word16)
  Class: Eq_710
  DataType: 
  OrigDataType: 
T_711: (in Mem0[ds:0x0214:word16] : word16)
  Class: Eq_711
  DataType: 
  OrigDataType: 
T_712: (in SEQ(cs, Mem0[ds:0x0214:word16]) : ptr32)
  Class: Eq_712
  DataType: 
  OrigDataType: 
T_713: (in 0x0216 : word16)
  Class: Eq_713
  DataType: 
  OrigDataType: 
T_714: (in Mem0[ds:0x0216:word16] : word16)
  Class: Eq_714
  DataType: 
  OrigDataType: 
T_715: (in SEQ(cs, Mem0[ds:0x0216:word16]) : ptr32)
  Class: Eq_715
  DataType: 
  OrigDataType: 
T_716: (in fn0800_038E : ptr32)
  Class: Eq_716
  DataType: 
  OrigDataType: 
T_717: (in signature of fn0800_038E : void)
  Class: Eq_716
  DataType: 
  OrigDataType: 
T_718: (in ax : word16)
  Class: Eq_177
  DataType: 
  OrigDataType: 
T_719: (in fn0800_038E(ax) : void)
  Class: Eq_719
  DataType: 
  OrigDataType: 
T_720: (in cs : selector)
  Class: Eq_720
  DataType: 
  OrigDataType: 
T_721: (in ds : selector)
  Class: Eq_721
  DataType: 
  OrigDataType: 
T_722: (in 0x0216 : word16)
  Class: Eq_722
  DataType: 
  OrigDataType: 
T_723: (in Mem0[ds:0x0216:word16] : word16)
  Class: Eq_723
  DataType: 
  OrigDataType: 
T_724: (in SEQ(cs, Mem0[ds:0x0216:word16]) : ptr32)
  Class: Eq_724
  DataType: 
  OrigDataType: 
T_725: (in 0x0218 : word16)
  Class: Eq_725
  DataType: 
  OrigDataType: 
T_726: (in Mem0[ds:0x0218:word16] : word16)
  Class: Eq_726
  DataType: 
  OrigDataType: 
T_727: (in SEQ(cs, Mem0[ds:0x0218:word16]) : ptr32)
  Class: Eq_727
  DataType: 
  OrigDataType: 
T_728: (in fn0800_059C : ptr32)
  Class: Eq_728
  DataType: 
  OrigDataType: 
T_729: (in signature of fn0800_059C : void)
  Class: Eq_728
  DataType: 
  OrigDataType: 
T_730: (in ax : word16)
  Class: Eq_177
  DataType: 
  OrigDataType: 
T_731: (in fn0800_059C(ax) : void)
  Class: Eq_731
  DataType: 
  OrigDataType: 
T_732: (in 0x0450 : word16)
  Class: Eq_732
  DataType: 
  OrigDataType: 
T_733: (in 0x0A91 : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_734: (in 0x022C : word16)
  Class: Eq_734
  DataType: 
  OrigDataType: 
T_735: (in Mem9[0x0A91:0x022C:word16] : word16)
  Class: Eq_732
  DataType: 
  OrigDataType: 
T_736: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_737: (in 0x0226 : word16)
  Class: Eq_737
  DataType: 
  OrigDataType: 
T_738: (in Mem11[0x0A91:0x0226:word16] : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_739: (in bx_16 : word16)
  Class: Eq_739
  DataType: 
  OrigDataType: 
T_740: (in fp : ptr16)
  Class: Eq_740
  DataType: 
  OrigDataType: 
T_741: (in 0x045F : word16)
  Class: Eq_741
  DataType: 
  OrigDataType: 
T_742: (in fp + 0x045F : word16)
  Class: Eq_742
  DataType: 
  OrigDataType: 
T_743: (in fp + 0x045F : word16)
  Class: Eq_743
  DataType: 
  OrigDataType: 
T_744: (in (byte) (fp + 0x045F) : byte)
  Class: Eq_744
  DataType: 
  OrigDataType: 
T_745: (in 0xF0 : byte)
  Class: Eq_745
  DataType: 
  OrigDataType: 
T_746: (in (byte) (fp + 0x045F) & 0xF0 : byte)
  Class: Eq_746
  DataType: 
  OrigDataType: 
T_747: (in DPB(fp + 0x045F, (byte) (fp + 0x045F) & 0xF0, 0, 8) : word16)
  Class: Eq_739
  DataType: 
  OrigDataType: 
T_748: (in 0x022E : word16)
  Class: Eq_748
  DataType: 
  OrigDataType: 
T_749: (in Mem19[0x0A91:0x022E:word16] : word16)
  Class: Eq_739
  DataType: 
  OrigDataType: 
T_750: (in cx_2 : word16)
  Class: Eq_750
  DataType: 
  OrigDataType: 
T_751: (in 0x0A91 : word16)
  Class: Eq_750
  DataType: 
  OrigDataType: 
T_752: (in dx_222 : word16)
  Class: Eq_752
  DataType: 
  OrigDataType: 
T_753: (in 0x0004 : word16)
  Class: Eq_753
  DataType: 
  OrigDataType: 
T_754: (in bx_16 >>u 0x0004 : word16)
  Class: Eq_752
  DataType: 
  OrigDataType: 
T_755: (in Z_210 : byte)
  Class: Eq_755
  DataType: 
  OrigDataType: 
T_756: (in 0x022A : word16)
  Class: Eq_756
  DataType: 
  OrigDataType: 
T_757: (in Mem19[0x0A91:0x022A:byte] : byte)
  Class: Eq_757
  DataType: 
  OrigDataType: 
T_758: (in cond(Mem19[0x0A91:0x022A:byte]) : byte)
  Class: Eq_755
  DataType: 
  OrigDataType: 
T_759: (in Mem19[0x0A91:0x022A:byte] : byte)
  Class: Eq_759
  DataType: 
  OrigDataType: 
T_760: (in 0x00 : byte)
  Class: Eq_759
  DataType: 
  OrigDataType: 
T_761: (in Mem19[0x0A91:0x022A:byte] != 0x00 : bool)
  Class: Eq_761
  DataType: 
  OrigDataType: 
T_762: (in di_213 : word16)
  Class: Eq_762
  DataType: 
  OrigDataType: 
T_763: (in 0x0081 : word16)
  Class: Eq_762
  DataType: 
  OrigDataType: 
T_764: (in cx_214 : word16)
  Class: Eq_764
  DataType: 
  OrigDataType: 
T_765: (in 0x00 : byte)
  Class: Eq_765
  DataType: 
  OrigDataType: 
T_766: (in DPB(cx_2, 0x00, 8, 8) : word16)
  Class: Eq_764
  DataType: 
  OrigDataType: 
T_767: (in cx_217 : word16)
  Class: Eq_767
  DataType: 
  OrigDataType: 
T_768: (in 0x0002 : word16)
  Class: Eq_768
  DataType: 
  OrigDataType: 
T_769: (in Mem19[ds:0x0002:word16] : word16)
  Class: Eq_767
  DataType: 
  OrigDataType: 
T_770: (in cx_217 - 0x0A91 : word16)
  Class: Eq_750
  DataType: 
  OrigDataType: 
T_771: (in bx_16 >>u 0x0004 : word16)
  Class: Eq_771
  DataType: 
  OrigDataType: 
T_772: (in cx_217 - 0x0A91 : word16)
  Class: Eq_771
  DataType: 
  OrigDataType: 
T_773: (in bx_16 >>u 0x0004 <u cx_217 - 0x0A91 : bool)
  Class: Eq_773
  DataType: 
  OrigDataType: 
T_774: (in bx_226 : word16)
  Class: Eq_774
  DataType: 
  OrigDataType: 
T_775: (in 0x0001 : word16)
  Class: Eq_775
  DataType: 
  OrigDataType: 
T_776: (in dx_222 << 0x0001 : word16)
  Class: Eq_774
  DataType: 
  OrigDataType: 
T_777: (in bx_229 : word16)
  Class: Eq_777
  DataType: 
  OrigDataType: 
T_778: (in 0x0003 : word16)
  Class: Eq_778
  DataType: 
  OrigDataType: 
T_779: (in bx_226 << 0x0003 : word16)
  Class: Eq_777
  DataType: 
  OrigDataType: 
T_780: (in bx_226 << 0x0003 : word16)
  Class: Eq_780
  DataType: 
  OrigDataType: 
T_781: (in 0x0000 : word16)
  Class: Eq_780
  DataType: 
  OrigDataType: 
T_782: (in bx_226 << 0x0003 != 0x0000 : bool)
  Class: Eq_782
  DataType: 
  OrigDataType: 
T_783: (in ax_254 : word16)
  Class: Eq_783
  DataType: 
  OrigDataType: 
T_784: (in fn0800_0A5A : ptr32)
  Class: Eq_784
  DataType: 
  OrigDataType: 
T_785: (in signature of fn0800_0A5A : void)
  Class: Eq_784
  DataType: 
  OrigDataType: 
T_786: (in ax : word16)
  Class: Eq_786
  DataType: 
  OrigDataType: 
T_787: (in dx : word16)
  Class: Eq_752
  DataType: 
  OrigDataType: 
T_788: (in bx : word16)
  Class: Eq_177
  DataType: 
  OrigDataType: 
T_789: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_790: (in axOut : ptr16)
  Class: Eq_790
  DataType: 
  OrigDataType: 
T_791: (in 0x042D : word16)
  Class: Eq_786
  DataType: 
  OrigDataType: 
T_792: (in cs : selector)
  Class: Eq_752
  DataType: 
  OrigDataType: 
T_793: (in 0x0001 : word16)
  Class: Eq_177
  DataType: 
  OrigDataType: 
T_794: (in out ax_254 : ptr16)
  Class: Eq_790
  DataType: 
  OrigDataType: 
T_795: (in fn0800_0A5A(0x042D, cs, 0x0001, ds, out ax_254) : byte)
  Class: Eq_795
  DataType: 
  OrigDataType: 
T_796: (in di_197 : word16)
  Class: Eq_796
  DataType: 
  OrigDataType: 
T_797: (in 0x022C : word16)
  Class: Eq_797
  DataType: 
  OrigDataType: 
T_798: (in Mem19[0x0A91:0x022C:word16] : word16)
  Class: Eq_796
  DataType: 
  OrigDataType: 
T_799: (in 0x0246 : word16)
  Class: Eq_799
  DataType: 
  OrigDataType: 
T_800: (in Mem73[0x0A91:0x0246:word16] : word16)
  Class: Eq_796
  DataType: 
  OrigDataType: 
T_801: (in 0x0248 : word16)
  Class: Eq_801
  DataType: 
  OrigDataType: 
T_802: (in Mem74[0x0A91:0x0248:word16] : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_803: (in si_196 : word16)
  Class: Eq_803
  DataType: 
  OrigDataType: 
T_804: (in 0x0001 : word16)
  Class: Eq_804
  DataType: 
  OrigDataType: 
T_805: (in di_213 - 0x0001 : word16)
  Class: Eq_803
  DataType: 
  OrigDataType: 
T_806: (in 0x20 : byte)
  Class: Eq_806
  DataType: 
  OrigDataType: 
T_807: (in 0x0000 : word16)
  Class: Eq_807
  DataType: 
  OrigDataType: 
T_808: (in di_213 + 0x0000 : word16)
  Class: Eq_808
  DataType: 
  OrigDataType: 
T_809: (in Mem19[ds:di_213 + 0x0000:byte] : byte)
  Class: Eq_809
  DataType: 
  OrigDataType: 
T_810: (in 0x20 - Mem19[ds:di_213 + 0x0000:byte] : byte)
  Class: Eq_810
  DataType: 
  OrigDataType: 
T_811: (in cond(0x20 - Mem19[ds:di_213 + 0x0000:byte]) : byte)
  Class: Eq_755
  DataType: 
  OrigDataType: 
T_812: (in 0x0001 : word16)
  Class: Eq_812
  DataType: 
  OrigDataType: 
T_813: (in di_213 + 0x0001 : word16)
  Class: Eq_762
  DataType: 
  OrigDataType: 
T_814: (in 0x0001 : word16)
  Class: Eq_814
  DataType: 
  OrigDataType: 
T_815: (in cx_214 - 0x0001 : word16)
  Class: Eq_764
  DataType: 
  OrigDataType: 
T_816: (in 0x0000 : word16)
  Class: Eq_816
  DataType: 
  OrigDataType: 
T_817: (in di_213 + 0x0000 : word16)
  Class: Eq_817
  DataType: 
  OrigDataType: 
T_818: (in Mem19[ds:di_213 + 0x0000:byte] : byte)
  Class: Eq_806
  DataType: 
  OrigDataType: 
T_819: (in 0x20 != Mem19[ds:di_213 + 0x0000:byte] : bool)
  Class: Eq_819
  DataType: 
  OrigDataType: 
T_820: (in 0x0000 : word16)
  Class: Eq_764
  DataType: 
  OrigDataType: 
T_821: (in cx_214 == 0x0000 : bool)
  Class: Eq_821
  DataType: 
  OrigDataType: 
T_822: (in 0x00 : byte)
  Class: Eq_822
  DataType: 
  OrigDataType: 
T_823: (in 0x0000 : word16)
  Class: Eq_823
  DataType: 
  OrigDataType: 
T_824: (in di_197 + 0x0000 : word16)
  Class: Eq_824
  DataType: 
  OrigDataType: 
T_825: (in Mem79[0x0A91:di_197 + 0x0000:byte] : byte)
  Class: Eq_822
  DataType: 
  OrigDataType: 
T_826: (in di_80 : word16)
  Class: Eq_826
  DataType: 
  OrigDataType: 
T_827: (in 0x0001 : word16)
  Class: Eq_827
  DataType: 
  OrigDataType: 
T_828: (in di_197 + 0x0001 : word16)
  Class: Eq_826
  DataType: 
  OrigDataType: 
T_829: (in 0x00 : byte)
  Class: Eq_829
  DataType: 
  OrigDataType: 
T_830: (in 0x0000 : word16)
  Class: Eq_830
  DataType: 
  OrigDataType: 
T_831: (in di_80 + 0x0000 : word16)
  Class: Eq_831
  DataType: 
  OrigDataType: 
T_832: (in Mem82[0x0A91:di_80 + 0x0000:byte] : byte)
  Class: Eq_829
  DataType: 
  OrigDataType: 
T_833: (in ah_86 : byte)
  Class: Eq_833
  DataType: 
  OrigDataType: 
T_834: (in al_87 : byte)
  Class: Eq_834
  DataType: 
  OrigDataType: 
T_835: (in msdos_get_dos_version : ptr32)
  Class: Eq_835
  DataType: 
  OrigDataType: 
T_836: (in signature of msdos_get_dos_version : void)
  Class: Eq_835
  DataType: 
  OrigDataType: 
T_837: (in ahOut : ptr16)
  Class: Eq_837
  DataType: 
  OrigDataType: 
T_838: (in out ah_86 : ptr16)
  Class: Eq_837
  DataType: 
  OrigDataType: 
T_839: (in msdos_get_dos_version(out ah_86) : byte)
  Class: Eq_834
  DataType: 
  OrigDataType: 
T_840: (in 0x0228 : word16)
  Class: Eq_840
  DataType: 
  OrigDataType: 
T_841: (in Mem88[0x0A91:0x0228:byte] : byte)
  Class: Eq_834
  DataType: 
  OrigDataType: 
T_842: (in 0x0229 : word16)
  Class: Eq_842
  DataType: 
  OrigDataType: 
T_843: (in Mem89[0x0A91:0x0229:byte] : byte)
  Class: Eq_833
  DataType: 
  OrigDataType: 
T_844: (in di_100 : word16)
  Class: Eq_826
  DataType: 
  OrigDataType: 
T_845: (in 0x03 : byte)
  Class: Eq_834
  DataType: 
  OrigDataType: 
T_846: (in al_87 <u 0x03 : bool)
  Class: Eq_846
  DataType: 
  OrigDataType: 
T_847: (in cx_192 : word16)
  Class: Eq_847
  DataType: 
  OrigDataType: 
T_848: (in 0x0001 : word16)
  Class: Eq_848
  DataType: 
  OrigDataType: 
T_849: (in cx_214 + 0x0001 : word16)
  Class: Eq_847
  DataType: 
  OrigDataType: 
T_850: (in 0x0000 : word16)
  Class: Eq_850
  DataType: 
  OrigDataType: 
T_851: (in si_196 + 0x0000 : word16)
  Class: Eq_851
  DataType: 
  OrigDataType: 
T_852: (in Mem74[ds:si_196 + 0x0000:byte] : byte)
  Class: Eq_852
  DataType: 
  OrigDataType: 
T_853: (in 0x0000 : word16)
  Class: Eq_853
  DataType: 
  OrigDataType: 
T_854: (in di_197 + 0x0000 : word16)
  Class: Eq_854
  DataType: 
  OrigDataType: 
T_855: (in Mem202[0x0A91:di_197 + 0x0000:byte] : byte)
  Class: Eq_852
  DataType: 
  OrigDataType: 
T_856: (in 0x0001 : word16)
  Class: Eq_856
  DataType: 
  OrigDataType: 
T_857: (in si_196 + 0x0001 : word16)
  Class: Eq_803
  DataType: 
  OrigDataType: 
T_858: (in 0x0001 : word16)
  Class: Eq_858
  DataType: 
  OrigDataType: 
T_859: (in di_197 + 0x0001 : word16)
  Class: Eq_796
  DataType: 
  OrigDataType: 
T_860: (in 0x0001 : word16)
  Class: Eq_860
  DataType: 
  OrigDataType: 
T_861: (in cx_192 - 0x0001 : word16)
  Class: Eq_847
  DataType: 
  OrigDataType: 
T_862: (in 0x0000 : word16)
  Class: Eq_847
  DataType: 
  OrigDataType: 
T_863: (in cx_192 == 0x0000 : bool)
  Class: Eq_863
  DataType: 
  OrigDataType: 
T_864: (in 0x024A : word16)
  Class: Eq_864
  DataType: 
  OrigDataType: 
T_865: (in Mem102[0x0A91:0x024A:word16] : word16)
  Class: Eq_826
  DataType: 
  OrigDataType: 
T_866: (in 0x024C : word16)
  Class: Eq_866
  DataType: 
  OrigDataType: 
T_867: (in Mem103[0x0A91:0x024C:word16] : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_868: (in bp : word16)
  Class: Eq_868
  DataType: 
  OrigDataType: 
T_869: (in 0x0234 : word16)
  Class: Eq_869
  DataType: 
  OrigDataType: 
T_870: (in Mem109[0x0A91:0x0234:word16] : word16)
  Class: Eq_868
  DataType: 
  OrigDataType: 
T_871: (in 0x022C : word16)
  Class: Eq_871
  DataType: 
  OrigDataType: 
T_872: (in Mem110[0x0A91:0x022C:word16] : word16)
  Class: Eq_826
  DataType: 
  OrigDataType: 
T_873: (in di_112 : word16)
  Class: Eq_873
  DataType: 
  OrigDataType: 
T_874: (in 0x03EC : word16)
  Class: Eq_873
  DataType: 
  OrigDataType: 
T_875: (in cx_113 : word16)
  Class: Eq_875
  DataType: 
  OrigDataType: 
T_876: (in 0x0062 : word16)
  Class: Eq_875
  DataType: 
  OrigDataType: 
T_877: (in ds_151 : selector)
  Class: Eq_877
  DataType: 
  OrigDataType: 
T_878: (in 0x002C : word16)
  Class: Eq_878
  DataType: 
  OrigDataType: 
T_879: (in Mem89[ds:0x002C:selector] : selector)
  Class: Eq_877
  DataType: 
  OrigDataType: 
T_880: (in si_152 : word16)
  Class: Eq_880
  DataType: 
  OrigDataType: 
T_881: (in 0x0000 : word16)
  Class: Eq_880
  DataType: 
  OrigDataType: 
T_882: (in 0x0000 : word16)
  Class: Eq_868
  DataType: 
  OrigDataType: 
T_883: (in si_257 : word16)
  Class: Eq_880
  DataType: 
  OrigDataType: 
T_884: (in 0x0001 : word16)
  Class: Eq_884
  DataType: 
  OrigDataType: 
T_885: (in si_257 + 0x0001 : word16)
  Class: Eq_880
  DataType: 
  OrigDataType: 
T_886: (in 0x0000 : word16)
  Class: Eq_886
  DataType: 
  OrigDataType: 
T_887: (in si_257 + 0x0000 : word16)
  Class: Eq_887
  DataType: 
  OrigDataType: 
T_888: (in Mem89[ds_151:si_257 + 0x0000:byte] : byte)
  Class: Eq_888
  DataType: 
  OrigDataType: 
T_889: (in 0x00 : byte)
  Class: Eq_888
  DataType: 
  OrigDataType: 
T_890: (in Mem89[ds_151:si_257 + 0x0000:byte] != 0x00 : bool)
  Class: Eq_890
  DataType: 
  OrigDataType: 
T_891: (in 0x0002 : word16)
  Class: Eq_891
  DataType: 
  OrigDataType: 
T_892: (in si_152 + 0x0002 : word16)
  Class: Eq_892
  DataType: 
  OrigDataType: 
T_893: (in Mem89[ds_151:si_152 + 0x0002:word16] : word16)
  Class: Eq_893
  DataType: 
  OrigDataType: 
T_894: (in 0x3738 : word16)
  Class: Eq_893
  DataType: 
  OrigDataType: 
T_895: (in Mem89[ds_151:si_152 + 0x0002:word16] != 0x3738 : bool)
  Class: Eq_895
  DataType: 
  OrigDataType: 
T_896: (in 0x0001 : word16)
  Class: Eq_896
  DataType: 
  OrigDataType: 
T_897: (in bp + 0x0001 : word16)
  Class: Eq_868
  DataType: 
  OrigDataType: 
T_898: (in 0x0224 : word16)
  Class: Eq_898
  DataType: 
  OrigDataType: 
T_899: (in Mem235[0x0A91:0x0224:word16] : word16)
  Class: Eq_777
  DataType: 
  OrigDataType: 
T_900: (in ax_238 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_901: (in 0x0226 : word16)
  Class: Eq_901
  DataType: 
  OrigDataType: 
T_902: (in Mem235[0x0A91:0x0226:word16] : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_903: (in bx_240 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_904: (in 0x0A91 : word16)
  Class: Eq_904
  DataType: 
  OrigDataType: 
T_905: (in dx_222 + 0x0A91 : word16)
  Class: Eq_905
  DataType: 
  OrigDataType: 
T_906: (in dx_222 + 0x0A91 - ax_238 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_907: (in bx_245 : word16)
  Class: Eq_907
  DataType: 
  OrigDataType: 
T_908: (in msdos_resize_memory_block : ptr32)
  Class: Eq_908
  DataType: 
  OrigDataType: 
T_909: (in signature of msdos_resize_memory_block : void)
  Class: Eq_908
  DataType: 
  OrigDataType: 
T_910: (in es : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_911: (in bx : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_912: (in bxOut : ptr16)
  Class: Eq_912
  DataType: 
  OrigDataType: 
T_913: (in out bx_245 : ptr16)
  Class: Eq_912
  DataType: 
  OrigDataType: 
T_914: (in msdos_resize_memory_block(ax_238, bx_240, out bx_245) : byte)
  Class: Eq_914
  DataType: 
  OrigDataType: 
T_915: (in cond(bx_240) : byte)
  Class: Eq_755
  DataType: 
  OrigDataType: 
T_916: (in 0xFFFE : word16)
  Class: Eq_777
  DataType: 
  OrigDataType: 
T_917: (in 0x0000 : word16)
  Class: Eq_917
  DataType: 
  OrigDataType: 
T_918: (in si_152 + 0x0000 : word16)
  Class: Eq_918
  DataType: 
  OrigDataType: 
T_919: (in Mem89[ds_151:si_152 + 0x0000:byte] : byte)
  Class: Eq_919
  DataType: 
  OrigDataType: 
T_920: (in 0x00 : byte)
  Class: Eq_919
  DataType: 
  OrigDataType: 
T_921: (in Mem89[ds_151:si_152 + 0x0000:byte] != 0x00 : bool)
  Class: Eq_921
  DataType: 
  OrigDataType: 
T_922: (in 0x0000 : word16)
  Class: Eq_922
  DataType: 
  OrigDataType: 
T_923: (in si_152 + 0x0000 : word16)
  Class: Eq_923
  DataType: 
  OrigDataType: 
T_924: (in Mem89[ds_151:si_152 + 0x0000:word16] : word16)
  Class: Eq_924
  DataType: 
  OrigDataType: 
T_925: (in 0x2020 : word16)
  Class: Eq_925
  DataType: 
  OrigDataType: 
T_926: (in Mem89[ds_151:si_152 + 0x0000:word16] | 0x2020 : word16)
  Class: Eq_926
  DataType: 
  OrigDataType: 
T_927: (in 0x6F6E : word16)
  Class: Eq_926
  DataType: 
  OrigDataType: 
T_928: (in (Mem89[ds_151:si_152 + 0x0000:word16] | 0x2020) != 0x6F6E : bool)
  Class: Eq_928
  DataType: 
  OrigDataType: 
T_929: (in si_177 : word16)
  Class: Eq_929
  DataType: 
  OrigDataType: 
T_930: (in 0x0003 : word16)
  Class: Eq_930
  DataType: 
  OrigDataType: 
T_931: (in si_152 + 0x0003 : word16)
  Class: Eq_929
  DataType: 
  OrigDataType: 
T_932: (in si_258 : word16)
  Class: Eq_929
  DataType: 
  OrigDataType: 
T_933: (in 0x0000 : word16)
  Class: Eq_933
  DataType: 
  OrigDataType: 
T_934: (in si_258 + 0x0000 : word16)
  Class: Eq_934
  DataType: 
  OrigDataType: 
T_935: (in Mem89[ds_151:si_258 + 0x0000:byte] : byte)
  Class: Eq_935
  DataType: 
  OrigDataType: 
T_936: (in 0x0000 : word16)
  Class: Eq_936
  DataType: 
  OrigDataType: 
T_937: (in di_100 + 0x0000 : word16)
  Class: Eq_937
  DataType: 
  OrigDataType: 
T_938: (in Mem184[0x0A91:di_100 + 0x0000:byte] : byte)
  Class: Eq_935
  DataType: 
  OrigDataType: 
T_939: (in 0x0001 : word16)
  Class: Eq_939
  DataType: 
  OrigDataType: 
T_940: (in si_258 + 0x0001 : word16)
  Class: Eq_929
  DataType: 
  OrigDataType: 
T_941: (in 0x0001 : word16)
  Class: Eq_941
  DataType: 
  OrigDataType: 
T_942: (in di_100 + 0x0001 : word16)
  Class: Eq_826
  DataType: 
  OrigDataType: 
T_943: (in 0x0000 : word16)
  Class: Eq_943
  DataType: 
  OrigDataType: 
T_944: (in si_258 + 0x0000 : word16)
  Class: Eq_944
  DataType: 
  OrigDataType: 
T_945: (in Mem89[ds_151:si_258 + 0x0000:byte] : byte)
  Class: Eq_945
  DataType: 
  OrigDataType: 
T_946: (in 0x00 : byte)
  Class: Eq_945
  DataType: 
  OrigDataType: 
T_947: (in Mem89[ds_151:si_258 + 0x0000:byte] != 0x00 : bool)
  Class: Eq_947
  DataType: 
  OrigDataType: 
T_948: (in 0x0236 : word16)
  Class: Eq_948
  DataType: 
  OrigDataType: 
T_949: (in Mem110[0x0A91:0x0236:word16] : word16)
  Class: Eq_949
  DataType: 
  OrigDataType: 
T_950: (in 0x0000 : word16)
  Class: Eq_949
  DataType: 
  OrigDataType: 
T_951: (in Mem110[0x0A91:0x0236:word16] != 0x0000 : bool)
  Class: Eq_951
  DataType: 
  OrigDataType: 
T_952: (in 0x00 : byte)
  Class: Eq_952
  DataType: 
  OrigDataType: 
T_953: (in 0x0000 : word16)
  Class: Eq_953
  DataType: 
  OrigDataType: 
T_954: (in di_112 + 0x0000 : word16)
  Class: Eq_954
  DataType: 
  OrigDataType: 
T_955: (in Mem122[0x0A91:di_112 + 0x0000:byte] : byte)
  Class: Eq_952
  DataType: 
  OrigDataType: 
T_956: (in 0x0001 : word16)
  Class: Eq_956
  DataType: 
  OrigDataType: 
T_957: (in di_112 + 0x0001 : word16)
  Class: Eq_873
  DataType: 
  OrigDataType: 
T_958: (in 0x0001 : word16)
  Class: Eq_958
  DataType: 
  OrigDataType: 
T_959: (in cx_113 - 0x0001 : word16)
  Class: Eq_875
  DataType: 
  OrigDataType: 
T_960: (in 0x0000 : word16)
  Class: Eq_875
  DataType: 
  OrigDataType: 
T_961: (in cx_113 == 0x0000 : bool)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_962: (in 0x05FC : word16)
  Class: Eq_962
  DataType: 
  OrigDataType: 
T_963: (in 0x0242 : word16)
  Class: Eq_963
  DataType: 
  OrigDataType: 
T_964: (in Mem133[0x0A91:0x0242:word16] : word16)
  Class: Eq_962
  DataType: 
  OrigDataType: 
T_965: (in 0x0244 : word16)
  Class: Eq_965
  DataType: 
  OrigDataType: 
T_966: (in Mem135[0x0A91:0x0244:word16] : word16)
  Class: Eq_752
  DataType: 
  OrigDataType: 
T_967: (in ax_139 : word16)
  Class: Eq_177
  DataType: 
  OrigDataType: 
T_968: (in fn0800_0A18 : ptr32)
  Class: Eq_968
  DataType: 
  OrigDataType: 
T_969: (in signature of fn0800_0A18 : void)
  Class: Eq_968
  DataType: 
  OrigDataType: 
T_970: (in axOut : ptr16)
  Class: Eq_970
  DataType: 
  OrigDataType: 
T_971: (in out ax_139 : ptr16)
  Class: Eq_970
  DataType: 
  OrigDataType: 
T_972: (in fn0800_0A18(out ax_139) : byte)
  Class: Eq_972
  DataType: 
  OrigDataType: 
T_973: (in fn0800_09AC : ptr32)
  Class: Eq_973
  DataType: 
  OrigDataType: 
T_974: (in signature of fn0800_09AC : void)
  Class: Eq_973
  DataType: 
  OrigDataType: 
T_975: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_976: (in fn0800_09AC(0x0A91) : void)
  Class: Eq_976
  DataType: 
  OrigDataType: 
T_977: (in 0x05FD : word16)
  Class: Eq_977
  DataType: 
  OrigDataType: 
T_978: (in 0x0236 : word16)
  Class: Eq_978
  DataType: 
  OrigDataType: 
T_979: (in Mem145[0x0A91:0x0236:word16] : word16)
  Class: Eq_977
  DataType: 
  OrigDataType: 
T_980: (in 0x0238 : word16)
  Class: Eq_980
  DataType: 
  OrigDataType: 
T_981: (in Mem146[0x0A91:0x0238:word16] : word16)
  Class: Eq_752
  DataType: 
  OrigDataType: 
T_982: (in 0x05FD : word16)
  Class: Eq_982
  DataType: 
  OrigDataType: 
T_983: (in 0x023A : word16)
  Class: Eq_983
  DataType: 
  OrigDataType: 
T_984: (in Mem147[0x0A91:0x023A:word16] : word16)
  Class: Eq_982
  DataType: 
  OrigDataType: 
T_985: (in 0x023C : word16)
  Class: Eq_985
  DataType: 
  OrigDataType: 
T_986: (in Mem148[0x0A91:0x023C:word16] : word16)
  Class: Eq_752
  DataType: 
  OrigDataType: 
T_987: (in 0x05FD : word16)
  Class: Eq_987
  DataType: 
  OrigDataType: 
T_988: (in 0x023E : word16)
  Class: Eq_988
  DataType: 
  OrigDataType: 
T_989: (in Mem149[0x0A91:0x023E:word16] : word16)
  Class: Eq_987
  DataType: 
  OrigDataType: 
T_990: (in 0x0240 : word16)
  Class: Eq_990
  DataType: 
  OrigDataType: 
T_991: (in Mem150[0x0A91:0x0240:word16] : word16)
  Class: Eq_752
  DataType: 
  OrigDataType: 
T_992: (in fn0800_059C : ptr32)
  Class: Eq_728
  DataType: 
  OrigDataType: 
T_993: (in fn0800_059C(ax_139) : void)
  Class: Eq_993
  DataType: 
  OrigDataType: 
T_994: (in di_16 : word16)
  Class: Eq_994
  DataType: 
  OrigDataType: 
T_995: (in 0x0000 : word16)
  Class: Eq_994
  DataType: 
  OrigDataType: 
T_996: (in cx_10 : word16)
  Class: Eq_996
  DataType: 
  OrigDataType: 
T_997: (in 0x0010 : word16)
  Class: Eq_996
  DataType: 
  OrigDataType: 
T_998: (in al_23 : byte)
  Class: Eq_998
  DataType: 
  OrigDataType: 
T_999: (in (byte) ax : byte)
  Class: Eq_998
  DataType: 
  OrigDataType: 
T_1000: (in Z : byte)
  Class: Eq_1000
  DataType: 
  OrigDataType: 
T_1001: (in 0x0101 : word16)
  Class: Eq_1001
  DataType: 
  OrigDataType: 
T_1002: (in di_40 : word16)
  Class: Eq_994
  DataType: 
  OrigDataType: 
T_1003: (in 0x0000 : word16)
  Class: Eq_1003
  DataType: 
  OrigDataType: 
T_1004: (in di_40 + 0x0000 : word16)
  Class: Eq_1004
  DataType: 
  OrigDataType: 
T_1005: (in Mem0[0x0A91:di_40 + 0x0000:word16] : word16)
  Class: Eq_1005
  DataType: 
  OrigDataType: 
T_1006: (in 0x0101 - Mem0[0x0A91:di_40 + 0x0000:word16] : word16)
  Class: Eq_1006
  DataType: 
  OrigDataType: 
T_1007: (in cond(0x0101 - Mem0[0x0A91:di_40 + 0x0000:word16]) : byte)
  Class: Eq_1000
  DataType: 
  OrigDataType: 
T_1008: (in 0x0002 : word16)
  Class: Eq_1008
  DataType: 
  OrigDataType: 
T_1009: (in di_40 + 0x0002 : word16)
  Class: Eq_994
  DataType: 
  OrigDataType: 
T_1010: (in 0x0001 : word16)
  Class: Eq_1010
  DataType: 
  OrigDataType: 
T_1011: (in cx_10 - 0x0001 : word16)
  Class: Eq_996
  DataType: 
  OrigDataType: 
T_1012: (in 0x0000 : word16)
  Class: Eq_1012
  DataType: 
  OrigDataType: 
T_1013: (in di_40 + 0x0000 : word16)
  Class: Eq_1013
  DataType: 
  OrigDataType: 
T_1014: (in Mem0[0x0A91:di_40 + 0x0000:word16] : word16)
  Class: Eq_1001
  DataType: 
  OrigDataType: 
T_1015: (in 0x0101 != Mem0[0x0A91:di_40 + 0x0000:word16] : bool)
  Class: Eq_1015
  DataType: 
  OrigDataType: 
T_1016: (in 0x0000 : word16)
  Class: Eq_996
  DataType: 
  OrigDataType: 
T_1017: (in cx_10 == 0x0000 : bool)
  Class: Eq_1017
  DataType: 
  OrigDataType: 
T_1018: (in fn0800_05E5 : ptr32)
  Class: Eq_1018
  DataType: 
  OrigDataType: 
T_1019: (in signature of fn0800_05E5 : void)
  Class: Eq_1018
  DataType: 
  OrigDataType: 
T_1020: (in al : byte)
  Class: Eq_998
  DataType: 
  OrigDataType: 
T_1021: (in fn0800_05E5(al_23) : void)
  Class: Eq_1021
  DataType: 
  OrigDataType: 
T_1022: (in fn0800_05BB : ptr32)
  Class: Eq_1022
  DataType: 
  OrigDataType: 
T_1023: (in signature of fn0800_05BB : void)
  Class: Eq_1022
  DataType: 
  OrigDataType: 
T_1024: (in ax : word16)
  Class: Eq_786
  DataType: 
  OrigDataType: 
T_1025: (in dx : word16)
  Class: Eq_752
  DataType: 
  OrigDataType: 
T_1026: (in bx : word16)
  Class: Eq_177
  DataType: 
  OrigDataType: 
T_1027: (in 0x040C : word16)
  Class: Eq_786
  DataType: 
  OrigDataType: 
T_1028: (in cs : selector)
  Class: Eq_752
  DataType: 
  OrigDataType: 
T_1029: (in fn0800_05BB(0x040C, cs, ax) : void)
  Class: Eq_1029
  DataType: 
  OrigDataType: 
T_1030: (in ss : selector)
  Class: Eq_1030
  DataType: 
  OrigDataType: 
T_1031: (in 0x04CC : word16)
  Class: Eq_1031
  DataType: 
  OrigDataType: 
T_1032: (in Mem3[ss:0x04CC:word16] : word16)
  Class: Eq_177
  DataType: 
  OrigDataType: 
T_1033: (in 0x04CA : word16)
  Class: Eq_1033
  DataType: 
  OrigDataType: 
T_1034: (in Mem7[ss:0x04CA:word16] : word16)
  Class: Eq_786
  DataType: 
  OrigDataType: 
T_1035: (in 0x04C8 : word16)
  Class: Eq_1035
  DataType: 
  OrigDataType: 
T_1036: (in Mem10[ss:0x04C8:word16] : word16)
  Class: Eq_752
  DataType: 
  OrigDataType: 
T_1037: (in ax_17 : word16)
  Class: Eq_1037
  DataType: 
  OrigDataType: 
T_1038: (in msdos_open_file : ptr32)
  Class: Eq_1038
  DataType: 
  OrigDataType: 
T_1039: (in signature of msdos_open_file : void)
  Class: Eq_1038
  DataType: 
  OrigDataType: 
T_1040: (in ds_dx : word32)
  Class: Eq_1040
  DataType: 
  OrigDataType: 
T_1041: (in al : byte)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_1042: (in axOut : ptr16)
  Class: Eq_1042
  DataType: 
  OrigDataType: 
T_1043: (in 0800:0441 : segptr32)
  Class: Eq_1040
  DataType: 
  OrigDataType: 
T_1044: (in 0x01 : byte)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_1045: (in out ax_17 : ptr16)
  Class: Eq_1042
  DataType: 
  OrigDataType: 
T_1046: (in msdos_open_file(0800:0441, 0x01, out ax_17) : bool)
  Class: Eq_1046
  DataType: 
  OrigDataType: 
T_1047: (in ds_20 : selector)
  Class: Eq_1047
  DataType: 
  OrigDataType: 
T_1048: (in 0x04C8 : word16)
  Class: Eq_1048
  DataType: 
  OrigDataType: 
T_1049: (in Mem10[ss:0x04C8:selector] : selector)
  Class: Eq_1047
  DataType: 
  OrigDataType: 
T_1050: (in dx_22 : word16)
  Class: Eq_1050
  DataType: 
  OrigDataType: 
T_1051: (in 0x04CA : word16)
  Class: Eq_1051
  DataType: 
  OrigDataType: 
T_1052: (in Mem10[ss:0x04CA:word16] : word16)
  Class: Eq_1050
  DataType: 
  OrigDataType: 
T_1053: (in ds_dx_23 : word32)
  Class: Eq_1053
  DataType: 
  OrigDataType: 
T_1054: (in SEQ(ds_20, dx_22) : word32)
  Class: Eq_1053
  DataType: 
  OrigDataType: 
T_1055: (in si_25 : word16)
  Class: Eq_1050
  DataType: 
  OrigDataType: 
T_1056: (in si_46 : word16)
  Class: Eq_1050
  DataType: 
  OrigDataType: 
T_1057: (in 0x0001 : word16)
  Class: Eq_1057
  DataType: 
  OrigDataType: 
T_1058: (in si_46 + 0x0001 : word16)
  Class: Eq_1050
  DataType: 
  OrigDataType: 
T_1059: (in 0x0000 : word16)
  Class: Eq_1059
  DataType: 
  OrigDataType: 
T_1060: (in si_46 + 0x0000 : word16)
  Class: Eq_1060
  DataType: 
  OrigDataType: 
T_1061: (in Mem10[ds_20:si_46 + 0x0000:byte] : byte)
  Class: Eq_1061
  DataType: 
  OrigDataType: 
T_1062: (in 0x00 : byte)
  Class: Eq_1061
  DataType: 
  OrigDataType: 
T_1063: (in Mem10[ds_20:si_46 + 0x0000:byte] != 0x00 : bool)
  Class: Eq_1063
  DataType: 
  OrigDataType: 
T_1064: (in ax_39 : word16)
  Class: Eq_1064
  DataType: 
  OrigDataType: 
T_1065: (in msdos_write_file : ptr32)
  Class: Eq_1065
  DataType: 
  OrigDataType: 
T_1066: (in signature of msdos_write_file : void)
  Class: Eq_1065
  DataType: 
  OrigDataType: 
T_1067: (in bx : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_1068: (in cx : word16)
  Class: Eq_1068
  DataType: 
  OrigDataType: 
T_1069: (in ds_dx : word32)
  Class: Eq_1053
  DataType: 
  OrigDataType: 
T_1070: (in axOut : ptr16)
  Class: Eq_1070
  DataType: 
  OrigDataType: 
T_1071: (in 0x3D01 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_1072: (in si_25 - dx_22 : word16)
  Class: Eq_1072
  DataType: 
  OrigDataType: 
T_1073: (in 0x0001 : word16)
  Class: Eq_1073
  DataType: 
  OrigDataType: 
T_1074: (in si_25 - dx_22 - 0x0001 : word16)
  Class: Eq_1068
  DataType: 
  OrigDataType: 
T_1075: (in out ax_39 : ptr16)
  Class: Eq_1070
  DataType: 
  OrigDataType: 
T_1076: (in msdos_write_file(0x3D01, si_25 - dx_22 - 0x0001, ds_dx_23, out ax_39) : bool)
  Class: Eq_1076
  DataType: 
  OrigDataType: 
T_1077: (in al_43 : byte)
  Class: Eq_998
  DataType: 
  OrigDataType: 
T_1078: (in 0x04CC : word16)
  Class: Eq_1078
  DataType: 
  OrigDataType: 
T_1079: (in Mem10[ss:0x04CC:word16] : word16)
  Class: Eq_1079
  DataType: 
  OrigDataType: 
T_1080: (in (byte) Mem10[ss:0x04CC:word16] : byte)
  Class: Eq_998
  DataType: 
  OrigDataType: 
T_1081: (in fn0800_05E5 : ptr32)
  Class: Eq_1018
  DataType: 
  OrigDataType: 
T_1082: (in fn0800_05E5(al_43) : void)
  Class: Eq_1082
  DataType: 
  OrigDataType: 
T_1083: (in fp : ptr16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1084: (in sp : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1085: (in 0x0002 : word16)
  Class: Eq_1085
  DataType: 
  OrigDataType: 
T_1086: (in fp - 0x0002 : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1087: (in ax : word16)
  Class: Eq_1087
  DataType: 
  OrigDataType: 
T_1088: (in wLoc02 : word16)
  Class: Eq_1087
  DataType: 
  OrigDataType: 
T_1089: (in 0x0000 : word16)
  Class: Eq_1087
  DataType: 
  OrigDataType: 
T_1090: (in 0x00FF : word16)
  Class: Eq_1090
  DataType: 
  OrigDataType: 
T_1091: (in dx : word16)
  Class: Eq_1090
  DataType: 
  OrigDataType: 
T_1092: (in fn0800_0A36 : ptr32)
  Class: Eq_1092
  DataType: 
  OrigDataType: 
T_1093: (in signature of fn0800_0A36 : void)
  Class: Eq_1092
  DataType: 
  OrigDataType: 
T_1094: (in dxOut : ptr16)
  Class: Eq_1094
  DataType: 
  OrigDataType: 
T_1095: (in out dx : ptr16)
  Class: Eq_1094
  DataType: 
  OrigDataType: 
T_1096: (in fn0800_0A36(out dx) : byte)
  Class: Eq_1096
  DataType: 
  OrigDataType: 
T_1097: (in CZ : byte)
  Class: Eq_1096
  DataType: 
  OrigDataType: 
T_1098: (in (byte) ax : byte)
  Class: Eq_998
  DataType: 
  OrigDataType: 
T_1099: (in 0x4C : byte)
  Class: Eq_1099
  DataType: 
  OrigDataType: 
T_1100: (in ah : byte)
  Class: Eq_1099
  DataType: 
  OrigDataType: 
T_1101: (in DPB(ax, ah, 8, 8) : word16)
  Class: Eq_1087
  DataType: 
  OrigDataType: 
T_1102: (in msdos_terminate : ptr32)
  Class: Eq_1102
  DataType: 
  OrigDataType: 
T_1103: (in signature of msdos_terminate : void)
  Class: Eq_1102
  DataType: 
  OrigDataType: 
T_1104: (in al : byte)
  Class: Eq_998
  DataType: 
  OrigDataType: 
T_1105: (in msdos_terminate(al) : void)
  Class: Eq_1105
  DataType: 
  OrigDataType: 
T_1106: (in 0x0002 : word16)
  Class: Eq_1106
  DataType: 
  OrigDataType: 
T_1107: (in sp - 0x0002 : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1108: (in ss : selector)
  Class: Eq_1108
  DataType: 
  OrigDataType: 
T_1109: (in 0x0000 : word16)
  Class: Eq_1109
  DataType: 
  OrigDataType: 
T_1110: (in sp + 0x0000 : word16)
  Class: Eq_1110
  DataType: 
  OrigDataType: 
T_1111: (in Mem0[ss:sp + 0x0000:word16] : word16)
  Class: Eq_1087
  DataType: 
  OrigDataType: 
T_1112: (in 0x0000 : word16)
  Class: Eq_1087
  DataType: 
  OrigDataType: 
T_1113: (in 0x00FF : word16)
  Class: Eq_1090
  DataType: 
  OrigDataType: 
T_1114: (in fn0800_0A36 : ptr32)
  Class: Eq_1092
  DataType: 
  OrigDataType: 
T_1115: (in out dx : ptr16)
  Class: Eq_1094
  DataType: 
  OrigDataType: 
T_1116: (in fn0800_0A36(out dx) : byte)
  Class: Eq_1096
  DataType: 
  OrigDataType: 
T_1117: (in 0x0000 : word16)
  Class: Eq_1117
  DataType: 
  OrigDataType: 
T_1118: (in sp + 0x0000 : word16)
  Class: Eq_1118
  DataType: 
  OrigDataType: 
T_1119: (in Mem0[ss:sp + 0x0000:word16] : word16)
  Class: Eq_1087
  DataType: 
  OrigDataType: 
T_1120: (in (byte) ax : byte)
  Class: Eq_998
  DataType: 
  OrigDataType: 
T_1121: (in 0x0002 : word16)
  Class: Eq_1121
  DataType: 
  OrigDataType: 
T_1122: (in sp + 0x0002 : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1123: (in 0x4C : byte)
  Class: Eq_1099
  DataType: 
  OrigDataType: 
T_1124: (in DPB(ax, ah, 8, 8) : word16)
  Class: Eq_1087
  DataType: 
  OrigDataType: 
T_1125: (in msdos_terminate : ptr32)
  Class: Eq_1102
  DataType: 
  OrigDataType: 
T_1126: (in msdos_terminate(al) : void)
  Class: Eq_1126
  DataType: 
  OrigDataType: 
T_1127: (in ds : selector)
  Class: Eq_1127
  DataType: 
  OrigDataType: 
T_1128: (in di_28 : word16)
  Class: Eq_206
  DataType: 
  OrigDataType: 
T_1129: (in si_11 : word16)
  Class: Eq_12
  DataType: 
  OrigDataType: 
T_1130: (in ah_107 : byte)
  Class: Eq_1130
  DataType: 
  OrigDataType: 
T_1131: (in 0x0000 : word16)
  Class: Eq_1131
  DataType: 
  OrigDataType: 
T_1132: (in si_11 + 0x0000 : word16)
  Class: Eq_1132
  DataType: 
  OrigDataType: 
T_1133: (in Mem0[ds:si_11 + 0x0000:byte] : byte)
  Class: Eq_1130
  DataType: 
  OrigDataType: 
T_1134: (in al_112 : byte)
  Class: Eq_1130
  DataType: 
  OrigDataType: 
T_1135: (in 0x0000 : word16)
  Class: Eq_1135
  DataType: 
  OrigDataType: 
T_1136: (in di_28 + 0x0000 : word16)
  Class: Eq_1136
  DataType: 
  OrigDataType: 
T_1137: (in Mem0[ds:di_28 + 0x0000:byte] : byte)
  Class: Eq_1130
  DataType: 
  OrigDataType: 
T_1138: (in DPB(ax, ah_107, 8, 8) : word16)
  Class: Eq_206
  DataType: 
  OrigDataType: 
T_1139: (in dx_63 : word16)
  Class: Eq_1139
  DataType: 
  OrigDataType: 
T_1140: (in 0x00 : byte)
  Class: Eq_1140
  DataType: 
  OrigDataType: 
T_1141: (in DPB(dx, 0x00, 8, 8) : word16)
  Class: Eq_1139
  DataType: 
  OrigDataType: 
T_1142: (in 0x0041 : word16)
  Class: Eq_1139
  DataType: 
  OrigDataType: 
T_1143: (in dx_63 < 0x0041 : bool)
  Class: Eq_1143
  DataType: 
  OrigDataType: 
T_1144: (in 0x0000 : word16)
  Class: Eq_1144
  DataType: 
  OrigDataType: 
T_1145: (in 0x00 : byte)
  Class: Eq_1145
  DataType: 
  OrigDataType: 
T_1146: (in DPB(dx, 0x00, 8, 8) : word16)
  Class: Eq_12
  DataType: 
  OrigDataType: 
T_1147: (in 0x0041 : word16)
  Class: Eq_12
  DataType: 
  OrigDataType: 
T_1148: (in dx < 0x0041 : bool)
  Class: Eq_1148
  DataType: 
  OrigDataType: 
T_1149: (in 0x005A : word16)
  Class: Eq_1139
  DataType: 
  OrigDataType: 
T_1150: (in dx_63 > 0x005A : bool)
  Class: Eq_1150
  DataType: 
  OrigDataType: 
T_1151: (in 0x20 : byte)
  Class: Eq_1151
  DataType: 
  OrigDataType: 
T_1152: (in al_112 + 0x20 : byte)
  Class: Eq_1130
  DataType: 
  OrigDataType: 
T_1153: (in al_112 + 0x20 : byte)
  Class: Eq_1153
  DataType: 
  OrigDataType: 
T_1154: (in DPB(ax, al_112 + 0x20, 0, 8) : word16)
  Class: Eq_206
  DataType: 
  OrigDataType: 
T_1155: (in al_112 == ah_107 : bool)
  Class: Eq_1155
  DataType: 
  OrigDataType: 
T_1156: (in 0x005A : word16)
  Class: Eq_12
  DataType: 
  OrigDataType: 
T_1157: (in dx > 0x005A : bool)
  Class: Eq_1157
  DataType: 
  OrigDataType: 
T_1158: (in 0x20 : byte)
  Class: Eq_1158
  DataType: 
  OrigDataType: 
T_1159: (in ah_107 + 0x20 : byte)
  Class: Eq_1130
  DataType: 
  OrigDataType: 
T_1160: (in ah_107 + 0x20 : byte)
  Class: Eq_1160
  DataType: 
  OrigDataType: 
T_1161: (in DPB(ax, ah_107 + 0x20, 8, 8) : word16)
  Class: Eq_206
  DataType: 
  OrigDataType: 
T_1162: (in 0x00 : byte)
  Class: Eq_1130
  DataType: 
  OrigDataType: 
T_1163: (in ah_107 == 0x00 : bool)
  Class: Eq_1163
  DataType: 
  OrigDataType: 
T_1164: (in 0x00 : byte)
  Class: Eq_1164
  DataType: 
  OrigDataType: 
T_1165: (in DPB(dx, 0x00, 8, 8) : word16)
  Class: Eq_1165
  DataType: 
  OrigDataType: 
T_1166: (in 0x00 : byte)
  Class: Eq_1166
  DataType: 
  OrigDataType: 
T_1167: (in DPB(ax, 0x00, 8, 8) : word16)
  Class: Eq_1167
  DataType: 
  OrigDataType: 
T_1168: (in DPB(dx, 0x00, 8, 8) - DPB(ax, 0x00, 8, 8) : word16)
  Class: Eq_1168
  DataType: 
  OrigDataType: 
T_1169: (in 0x0001 : word16)
  Class: Eq_1169
  DataType: 
  OrigDataType: 
T_1170: (in di_28 + 0x0001 : word16)
  Class: Eq_206
  DataType: 
  OrigDataType: 
T_1171: (in 0x0001 : word16)
  Class: Eq_1171
  DataType: 
  OrigDataType: 
T_1172: (in si_11 + 0x0001 : word16)
  Class: Eq_12
  DataType: 
  OrigDataType: 
T_1173: (in 0x0001 : word16)
  Class: Eq_1173
  DataType: 
  OrigDataType: 
T_1174: (in bx - 0x0001 : word16)
  Class: Eq_217
  DataType: 
  OrigDataType: 
T_1175: (in 0x0000 : word16)
  Class: Eq_217
  DataType: 
  OrigDataType: 
T_1176: (in bx != 0x0000 : bool)
  Class: Eq_1176
  DataType: 
  OrigDataType: 
T_1177: (in ax : word16)
  Class: Eq_1177
  DataType: 
  OrigDataType: 
T_1178: (in msdos_unknown_2143 : ptr32)
  Class: Eq_1178
  DataType: 
  OrigDataType: 
T_1179: (in signature of msdos_unknown_2143 : void)
  Class: Eq_1178
  DataType: 
  OrigDataType: 
T_1180: (in msdos_unknown_2143() : void)
  Class: Eq_1180
  DataType: 
  OrigDataType: 
T_1181: (in bl_10 : byte)
  Class: Eq_1181
  DataType: 
  OrigDataType: 
T_1182: (in dx : word16)
  Class: Eq_1182
  DataType: 
  OrigDataType: 
T_1183: (in (byte) dx : byte)
  Class: Eq_1181
  DataType: 
  OrigDataType: 
T_1184: (in al_14 : byte)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_1185: (in 0x00 : byte)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_1186: (in C : byte)
  Class: Eq_1186
  DataType: 
  OrigDataType: 
T_1187: (in dx_26 : word16)
  Class: Eq_1187
  DataType: 
  OrigDataType: 
T_1188: (in ax_27 : word16)
  Class: Eq_1188
  DataType: 
  OrigDataType: 
T_1189: (in fn0800_0CD5 : ptr32)
  Class: Eq_1189
  DataType: 
  OrigDataType: 
T_1190: (in signature of fn0800_0CD5 : void)
  Class: Eq_1189
  DataType: 
  OrigDataType: 
T_1191: (in dx : word16)
  Class: Eq_1191
  DataType: 
  OrigDataType: 
T_1192: (in al : byte)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_1193: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1194: (in dxOut : ptr16)
  Class: Eq_1194
  DataType: 
  OrigDataType: 
T_1195: (in 0x0000 : word16)
  Class: Eq_1195
  DataType: 
  OrigDataType: 
T_1196: (in 0x0000 - C : word16)
  Class: Eq_1191
  DataType: 
  OrigDataType: 
T_1197: (in out dx_26 : ptr16)
  Class: Eq_1194
  DataType: 
  OrigDataType: 
T_1198: (in fn0800_0CD5(0x0000 - C, al_14, ds, out dx_26) : word16)
  Class: Eq_1188
  DataType: 
  OrigDataType: 
T_1199: (in cl_32 : byte)
  Class: Eq_1199
  DataType: 
  OrigDataType: 
T_1200: (in ss : selector)
  Class: Eq_1200
  DataType: 
  OrigDataType: 
T_1201: (in fp : ptr16)
  Class: Eq_1201
  DataType: 
  OrigDataType: 
T_1202: (in 0x0004 : word16)
  Class: Eq_1202
  DataType: 
  OrigDataType: 
T_1203: (in fp - 0x0004 : word16)
  Class: Eq_1203
  DataType: 
  OrigDataType: 
T_1204: (in Mem0[ss:fp - 0x0004:word16] : word16)
  Class: Eq_1204
  DataType: 
  OrigDataType: 
T_1205: (in (byte) Mem0[ss:fp - 0x0004:word16] : byte)
  Class: Eq_1205
  DataType: 
  OrigDataType: 
T_1206: (in *clOut : byte)
  Class: Eq_1205
  DataType: 
  OrigDataType: 
T_1207: (in false : bool)
  Class: Eq_1186
  DataType: 
  OrigDataType: 
T_1208: (in 0x02 : byte)
  Class: Eq_1208
  DataType: 
  OrigDataType: 
T_1209: (in bl_10 & 0x02 : byte)
  Class: Eq_1209
  DataType: 
  OrigDataType: 
T_1210: (in 0x00 : byte)
  Class: Eq_1209
  DataType: 
  OrigDataType: 
T_1211: (in (bl_10 & 0x02) == 0x00 : bool)
  Class: Eq_1211
  DataType: 
  OrigDataType: 
T_1212: (in false : bool)
  Class: Eq_1186
  DataType: 
  OrigDataType: 
T_1213: (in 0x01 : byte)
  Class: Eq_1213
  DataType: 
  OrigDataType: 
T_1214: (in cl & 0x01 : byte)
  Class: Eq_1214
  DataType: 
  OrigDataType: 
T_1215: (in 0x00 : byte)
  Class: Eq_1214
  DataType: 
  OrigDataType: 
T_1216: (in (cl & 0x01) == 0x00 : bool)
  Class: Eq_1216
  DataType: 
  OrigDataType: 
T_1217: (in 0x00 : byte)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_1218: (in true : bool)
  Class: Eq_1186
  DataType: 
  OrigDataType: 
T_1219: (in ax_140 : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_1220: (in wLoc9E_126 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1221: (in bx_130 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_1222: (in dx_121 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_1223: (in 0x0000 : word16)
  Class: Eq_1223
  DataType: 
  OrigDataType: 
T_1224: (in msdos_get_current_directory : ptr32)
  Class: Eq_1224
  DataType: 
  OrigDataType: 
T_1225: (in signature of msdos_get_current_directory : void)
  Class: Eq_1224
  DataType: 
  OrigDataType: 
T_1226: (in dl : byte)
  Class: Eq_1226
  DataType: 
  OrigDataType: 
T_1227: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1228: (in dx : word16)
  Class: Eq_1228
  DataType: 
  OrigDataType: 
T_1229: (in 0x00 : byte)
  Class: Eq_1226
  DataType: 
  OrigDataType: 
T_1230: (in 0x00 : byte)
  Class: Eq_1230
  DataType: 
  OrigDataType: 
T_1231: (in DPB(dx, 0x00, 0, 8) : word16)
  Class: Eq_1228
  DataType: 
  OrigDataType: 
T_1232: (in msdos_get_current_directory(0x00, ds, DPB(dx, 0x00, 0, 8)) : byte)
  Class: Eq_1232
  DataType: 
  OrigDataType: 
T_1233: (in 0x0000 - msdos_get_current_directory(0x00, ds, DPB(dx, 0x00, 0, 8)) : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_1234: (in 0x0000 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_1235: (in dx_121 >= 0x0000 : bool)
  Class: Eq_1235
  DataType: 
  OrigDataType: 
T_1236: (in msdos_get_current_default_drive : ptr32)
  Class: Eq_1236
  DataType: 
  OrigDataType: 
T_1237: (in signature of msdos_get_current_default_drive : void)
  Class: Eq_1236
  DataType: 
  OrigDataType: 
T_1238: (in msdos_get_current_default_drive() : byte)
  Class: Eq_1238
  DataType: 
  OrigDataType: 
T_1239: (in di_101 : word16)
  Class: Eq_1239
  DataType: 
  OrigDataType: 
T_1240: (in fp : ptr16)
  Class: Eq_1240
  DataType: 
  OrigDataType: 
T_1241: (in 0x009C : word16)
  Class: Eq_1241
  DataType: 
  OrigDataType: 
T_1242: (in fp - 0x009C : word16)
  Class: Eq_1239
  DataType: 
  OrigDataType: 
T_1243: (in cx_105 : word16)
  Class: Eq_1243
  DataType: 
  OrigDataType: 
T_1244: (in 0xFFFF : word16)
  Class: Eq_1243
  DataType: 
  OrigDataType: 
T_1245: (in 0x0001 : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_1246: (in cx_118 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_1247: (in ~cx_105 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_1248: (in 0x0000 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1249: (in ax != 0x0000 : bool)
  Class: Eq_1249
  DataType: 
  OrigDataType: 
T_1250: (in di_150 : word16)
  Class: Eq_1239
  DataType: 
  OrigDataType: 
T_1251: (in 0x0001 : word16)
  Class: Eq_1251
  DataType: 
  OrigDataType: 
T_1252: (in di_150 + 0x0001 : word16)
  Class: Eq_1239
  DataType: 
  OrigDataType: 
T_1253: (in 0x0001 : word16)
  Class: Eq_1253
  DataType: 
  OrigDataType: 
T_1254: (in cx_105 - 0x0001 : word16)
  Class: Eq_1243
  DataType: 
  OrigDataType: 
T_1255: (in 0x00 : byte)
  Class: Eq_1255
  DataType: 
  OrigDataType: 
T_1256: (in 0x0000 : word16)
  Class: Eq_1256
  DataType: 
  OrigDataType: 
T_1257: (in di_150 + 0x0000 : word16)
  Class: Eq_1257
  DataType: 
  OrigDataType: 
T_1258: (in Mem0[ds:di_150 + 0x0000:byte] : byte)
  Class: Eq_1255
  DataType: 
  OrigDataType: 
T_1259: (in 0x00 != Mem0[ds:di_150 + 0x0000:byte] : bool)
  Class: Eq_1259
  DataType: 
  OrigDataType: 
T_1260: (in 0x0000 : word16)
  Class: Eq_1243
  DataType: 
  OrigDataType: 
T_1261: (in cx_105 == 0x0000 : bool)
  Class: Eq_1261
  DataType: 
  OrigDataType: 
T_1262: (in fn0800_0DE6 : ptr32)
  Class: Eq_1262
  DataType: 
  OrigDataType: 
T_1263: (in signature of fn0800_0DE6 : void)
  Class: Eq_1262
  DataType: 
  OrigDataType: 
T_1264: (in ax : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1265: (in dx : word16)
  Class: Eq_1265
  DataType: 
  OrigDataType: 
T_1266: (in bx : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_1267: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1268: (in 0x009C : word16)
  Class: Eq_1268
  DataType: 
  OrigDataType: 
T_1269: (in fp - 0x009C : word16)
  Class: Eq_1265
  DataType: 
  OrigDataType: 
T_1270: (in fn0800_0DE6(wLoc9E_126, fp - 0x009C, bx_130, ds) : void)
  Class: Eq_1270
  DataType: 
  OrigDataType: 
T_1271: (in cl_134 : byte)
  Class: Eq_1271
  DataType: 
  OrigDataType: 
T_1272: (in ax_135 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1273: (in fn0800_0D39 : ptr32)
  Class: Eq_1273
  DataType: 
  OrigDataType: 
T_1274: (in signature of fn0800_0D39 : void)
  Class: Eq_1273
  DataType: 
  OrigDataType: 
T_1275: (in ax : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_1276: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1277: (in clOut : ptr16)
  Class: Eq_1277
  DataType: 
  OrigDataType: 
T_1278: (in out cl_134 : ptr16)
  Class: Eq_1277
  DataType: 
  OrigDataType: 
T_1279: (in fn0800_0D39(cx_118, ds, out cl_134) : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1280: (in 0x0000 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1281: (in ax_135 != 0x0000 : bool)
  Class: Eq_1281
  DataType: 
  OrigDataType: 
T_1282: (in 0x0005 : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_1283: (in bx_81 : word16)
  Class: Eq_1283
  DataType: 
  OrigDataType: 
T_1284: (in fn0800_0780 : ptr32)
  Class: Eq_593
  DataType: 
  OrigDataType: 
T_1285: (in out bx_81 : ptr16)
  Class: Eq_598
  DataType: 
  OrigDataType: 
T_1286: (in fn0800_0780(ax_140, dx_121, ds, out bx_81) : word16)
  Class: Eq_1286
  DataType: 
  OrigDataType: 
T_1287: (in di_12 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1288: (in cx_16 : word16)
  Class: Eq_1288
  DataType: 
  OrigDataType: 
T_1289: (in 0xFFFF : word16)
  Class: Eq_1288
  DataType: 
  OrigDataType: 
T_1290: (in ~cx_16 : word16)
  Class: Eq_1290
  DataType: 
  OrigDataType: 
T_1291: (in 0x0001 : word16)
  Class: Eq_1291
  DataType: 
  OrigDataType: 
T_1292: (in ~cx_16 - 0x0001 : word16)
  Class: Eq_1292
  DataType: 
  OrigDataType: 
T_1293: (in di_46 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1294: (in 0x0001 : word16)
  Class: Eq_1294
  DataType: 
  OrigDataType: 
T_1295: (in di_46 + 0x0001 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1296: (in 0x0001 : word16)
  Class: Eq_1296
  DataType: 
  OrigDataType: 
T_1297: (in cx_16 - 0x0001 : word16)
  Class: Eq_1288
  DataType: 
  OrigDataType: 
T_1298: (in 0x00 : byte)
  Class: Eq_1298
  DataType: 
  OrigDataType: 
T_1299: (in 0x0000 : word16)
  Class: Eq_1299
  DataType: 
  OrigDataType: 
T_1300: (in di_46 + 0x0000 : word16)
  Class: Eq_1300
  DataType: 
  OrigDataType: 
T_1301: (in Mem0[ds:di_46 + 0x0000:byte] : byte)
  Class: Eq_1298
  DataType: 
  OrigDataType: 
T_1302: (in 0x00 != Mem0[ds:di_46 + 0x0000:byte] : bool)
  Class: Eq_1302
  DataType: 
  OrigDataType: 
T_1303: (in 0x0000 : word16)
  Class: Eq_1288
  DataType: 
  OrigDataType: 
T_1304: (in cx_16 == 0x0000 : bool)
  Class: Eq_1304
  DataType: 
  OrigDataType: 
T_1305: (in di_31 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1306: (in si_11 : word16)
  Class: Eq_83
  DataType: 
  OrigDataType: 
T_1307: (in 0x0001 : word16)
  Class: Eq_1307
  DataType: 
  OrigDataType: 
T_1308: (in dx & 0x0001 : word16)
  Class: Eq_1308
  DataType: 
  OrigDataType: 
T_1309: (in 0x0000 : word16)
  Class: Eq_1308
  DataType: 
  OrigDataType: 
T_1310: (in (dx & 0x0001) == 0x0000 : bool)
  Class: Eq_1310
  DataType: 
  OrigDataType: 
T_1311: (in ax_35 : word16)
  Class: Eq_1311
  DataType: 
  OrigDataType: 
T_1312: (in 0x0000 : word16)
  Class: Eq_1312
  DataType: 
  OrigDataType: 
T_1313: (in si_11 + 0x0000 : word16)
  Class: Eq_1313
  DataType: 
  OrigDataType: 
T_1314: (in Mem0[ds:si_11 + 0x0000:word16] : word16)
  Class: Eq_1311
  DataType: 
  OrigDataType: 
T_1315: (in al_36 : byte)
  Class: Eq_1315
  DataType: 
  OrigDataType: 
T_1316: (in (byte) ax_35 : byte)
  Class: Eq_1315
  DataType: 
  OrigDataType: 
T_1317: (in ah_37 : byte)
  Class: Eq_1317
  DataType: 
  OrigDataType: 
T_1318: (in SLICE(ax_35, byte, 8) : byte)
  Class: Eq_1317
  DataType: 
  OrigDataType: 
T_1319: (in 0x00 : byte)
  Class: Eq_1315
  DataType: 
  OrigDataType: 
T_1320: (in al_36 == 0x00 : bool)
  Class: Eq_1320
  DataType: 
  OrigDataType: 
T_1321: (in al_69 : byte)
  Class: Eq_1321
  DataType: 
  OrigDataType: 
T_1322: (in 0x0000 : word16)
  Class: Eq_1322
  DataType: 
  OrigDataType: 
T_1323: (in dx + 0x0000 : word16)
  Class: Eq_1323
  DataType: 
  OrigDataType: 
T_1324: (in Mem0[ds:dx + 0x0000:byte] : byte)
  Class: Eq_1321
  DataType: 
  OrigDataType: 
T_1325: (in 0x0000 : word16)
  Class: Eq_1325
  DataType: 
  OrigDataType: 
T_1326: (in ax + 0x0000 : word16)
  Class: Eq_1326
  DataType: 
  OrigDataType: 
T_1327: (in Mem71[ds:ax + 0x0000:byte] : byte)
  Class: Eq_1321
  DataType: 
  OrigDataType: 
T_1328: (in 0x0001 : word16)
  Class: Eq_1328
  DataType: 
  OrigDataType: 
T_1329: (in dx + 0x0001 : word16)
  Class: Eq_83
  DataType: 
  OrigDataType: 
T_1330: (in 0x0001 : word16)
  Class: Eq_1330
  DataType: 
  OrigDataType: 
T_1331: (in ax + 0x0001 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1332: (in 0x00 : byte)
  Class: Eq_1321
  DataType: 
  OrigDataType: 
T_1333: (in al_69 == 0x00 : bool)
  Class: Eq_1333
  DataType: 
  OrigDataType: 
T_1334: (in 0x0000 : word16)
  Class: Eq_1334
  DataType: 
  OrigDataType: 
T_1335: (in di_31 + 0x0000 : word16)
  Class: Eq_1335
  DataType: 
  OrigDataType: 
T_1336: (in Mem50[ds:di_31 + 0x0000:byte] : byte)
  Class: Eq_1315
  DataType: 
  OrigDataType: 
T_1337: (in 0x0000 : word16)
  Class: Eq_1337
  DataType: 
  OrigDataType: 
T_1338: (in di_31 + 0x0000 : word16)
  Class: Eq_1338
  DataType: 
  OrigDataType: 
T_1339: (in Mem51[ds:di_31 + 0x0000:word16] : word16)
  Class: Eq_1311
  DataType: 
  OrigDataType: 
T_1340: (in 0x0002 : word16)
  Class: Eq_1340
  DataType: 
  OrigDataType: 
T_1341: (in di_31 + 0x0002 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1342: (in 0x00 : byte)
  Class: Eq_1317
  DataType: 
  OrigDataType: 
T_1343: (in ah_37 == 0x00 : bool)
  Class: Eq_1343
  DataType: 
  OrigDataType: 
T_1344: (in ax_56 : word16)
  Class: Eq_1344
  DataType: 
  OrigDataType: 
T_1345: (in 0x0002 : word16)
  Class: Eq_1345
  DataType: 
  OrigDataType: 
T_1346: (in si_11 + 0x0002 : word16)
  Class: Eq_1346
  DataType: 
  OrigDataType: 
T_1347: (in Mem51[ds:si_11 + 0x0002:word16] : word16)
  Class: Eq_1344
  DataType: 
  OrigDataType: 
T_1348: (in (byte) ax_56 : byte)
  Class: Eq_1315
  DataType: 
  OrigDataType: 
T_1349: (in ah_58 : byte)
  Class: Eq_1349
  DataType: 
  OrigDataType: 
T_1350: (in SLICE(ax_56, byte, 8) : byte)
  Class: Eq_1349
  DataType: 
  OrigDataType: 
T_1351: (in 0x00 : byte)
  Class: Eq_1315
  DataType: 
  OrigDataType: 
T_1352: (in al_36 == 0x00 : bool)
  Class: Eq_1352
  DataType: 
  OrigDataType: 
T_1353: (in 0x0000 : word16)
  Class: Eq_1353
  DataType: 
  OrigDataType: 
T_1354: (in di_31 + 0x0000 : word16)
  Class: Eq_1354
  DataType: 
  OrigDataType: 
T_1355: (in Mem62[ds:di_31 + 0x0000:word16] : word16)
  Class: Eq_1344
  DataType: 
  OrigDataType: 
T_1356: (in 0x0004 : word16)
  Class: Eq_1356
  DataType: 
  OrigDataType: 
T_1357: (in si_11 + 0x0004 : word16)
  Class: Eq_83
  DataType: 
  OrigDataType: 
T_1358: (in 0x0002 : word16)
  Class: Eq_1358
  DataType: 
  OrigDataType: 
T_1359: (in di_31 + 0x0002 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1360: (in 0x00 : byte)
  Class: Eq_1349
  DataType: 
  OrigDataType: 
T_1361: (in ah_58 != 0x00 : bool)
  Class: Eq_1361
  DataType: 
  OrigDataType: 
T_1362: (in 0x00 : byte)
  Class: Eq_1349
  DataType: 
  OrigDataType: 
T_1363: (in ah_58 == 0x00 : bool)
  Class: Eq_1363
  DataType: 
  OrigDataType: 
T_1364: (in si_15 : word16)
  Class: Eq_1364
  DataType: 
  OrigDataType: 
T_1365: (in 0x0001 : word16)
  Class: Eq_1365
  DataType: 
  OrigDataType: 
T_1366: (in dx + 0x0001 : word16)
  Class: Eq_1364
  DataType: 
  OrigDataType: 
T_1367: (in di_17 : word16)
  Class: Eq_522
  DataType: 
  OrigDataType: 
T_1368: (in cx_25 : word16)
  Class: Eq_1368
  DataType: 
  OrigDataType: 
T_1369: (in 0xFFFF : word16)
  Class: Eq_1368
  DataType: 
  OrigDataType: 
T_1370: (in di_37 : word16)
  Class: Eq_1370
  DataType: 
  OrigDataType: 
T_1371: (in 0x0001 : word16)
  Class: Eq_1371
  DataType: 
  OrigDataType: 
T_1372: (in di_17 - 0x0001 : word16)
  Class: Eq_1372
  DataType: 
  OrigDataType: 
T_1373: (in 0x0001 : word16)
  Class: Eq_1373
  DataType: 
  OrigDataType: 
T_1374: (in di_17 - 0x0001 + 0x0001 : word16)
  Class: Eq_1370
  DataType: 
  OrigDataType: 
T_1375: (in 0x0001 : word16)
  Class: Eq_1375
  DataType: 
  OrigDataType: 
T_1376: (in di_17 + 0x0001 : word16)
  Class: Eq_522
  DataType: 
  OrigDataType: 
T_1377: (in 0x0001 : word16)
  Class: Eq_1377
  DataType: 
  OrigDataType: 
T_1378: (in cx_25 - 0x0001 : word16)
  Class: Eq_1368
  DataType: 
  OrigDataType: 
T_1379: (in 0x00 : byte)
  Class: Eq_1379
  DataType: 
  OrigDataType: 
T_1380: (in 0x0000 : word16)
  Class: Eq_1380
  DataType: 
  OrigDataType: 
T_1381: (in di_17 + 0x0000 : word16)
  Class: Eq_1381
  DataType: 
  OrigDataType: 
T_1382: (in Mem0[ds:di_17 + 0x0000:byte] : byte)
  Class: Eq_1379
  DataType: 
  OrigDataType: 
T_1383: (in 0x00 != Mem0[ds:di_17 + 0x0000:byte] : bool)
  Class: Eq_1383
  DataType: 
  OrigDataType: 
T_1384: (in 0x0000 : word16)
  Class: Eq_1368
  DataType: 
  OrigDataType: 
T_1385: (in cx_25 == 0x0000 : bool)
  Class: Eq_1385
  DataType: 
  OrigDataType: 
T_1386: (in al_60 : byte)
  Class: Eq_1386
  DataType: 
  OrigDataType: 
T_1387: (in 0x0000 : word16)
  Class: Eq_1387
  DataType: 
  OrigDataType: 
T_1388: (in si_15 + 0x0000 : word16)
  Class: Eq_1388
  DataType: 
  OrigDataType: 
T_1389: (in Mem43[ds:si_15 + 0x0000:byte] : byte)
  Class: Eq_1386
  DataType: 
  OrigDataType: 
T_1390: (in 0x0000 : word16)
  Class: Eq_1390
  DataType: 
  OrigDataType: 
T_1391: (in di_37 + 0x0000 : word16)
  Class: Eq_1391
  DataType: 
  OrigDataType: 
T_1392: (in Mem62[ds:di_37 + 0x0000:byte] : byte)
  Class: Eq_1386
  DataType: 
  OrigDataType: 
T_1393: (in 0x0002 : word16)
  Class: Eq_1393
  DataType: 
  OrigDataType: 
T_1394: (in si_15 + 0x0002 : word16)
  Class: Eq_1364
  DataType: 
  OrigDataType: 
T_1395: (in 0x0002 : word16)
  Class: Eq_1395
  DataType: 
  OrigDataType: 
T_1396: (in di_37 + 0x0002 : word16)
  Class: Eq_1370
  DataType: 
  OrigDataType: 
T_1397: (in 0x00 : byte)
  Class: Eq_1386
  DataType: 
  OrigDataType: 
T_1398: (in al_60 != 0x00 : bool)
  Class: Eq_1398
  DataType: 
  OrigDataType: 
T_1399: (in al_42 : byte)
  Class: Eq_1399
  DataType: 
  OrigDataType: 
T_1400: (in 0x0000 : word16)
  Class: Eq_1400
  DataType: 
  OrigDataType: 
T_1401: (in si_15 + 0x0000 : word16)
  Class: Eq_1401
  DataType: 
  OrigDataType: 
T_1402: (in Mem0[ds:si_15 + 0x0000:byte] : byte)
  Class: Eq_1399
  DataType: 
  OrigDataType: 
T_1403: (in 0x0000 : word16)
  Class: Eq_1403
  DataType: 
  OrigDataType: 
T_1404: (in di_37 + 0x0000 : word16)
  Class: Eq_1404
  DataType: 
  OrigDataType: 
T_1405: (in Mem43[ds:di_37 + 0x0000:byte] : byte)
  Class: Eq_1399
  DataType: 
  OrigDataType: 
T_1406: (in 0x00 : byte)
  Class: Eq_1399
  DataType: 
  OrigDataType: 
T_1407: (in al_42 == 0x00 : bool)
  Class: Eq_1407
  DataType: 
  OrigDataType: 
T_1408: (in ax_10 : word16)
  Class: Eq_1408
  DataType: 
  OrigDataType: 
T_1409: (in fn0800_035A : ptr32)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_1410: (in fn0800_035A() : word16)
  Class: Eq_1408
  DataType: 
  OrigDataType: 
T_1411: (in bx_13 : word16)
  Class: Eq_1411
  DataType: 
  OrigDataType: 
T_1412: (in fn0800_0787 : ptr32)
  Class: Eq_1412
  DataType: 
  OrigDataType: 
T_1413: (in signature of fn0800_0787 : void)
  Class: Eq_1412
  DataType: 
  OrigDataType: 
T_1414: (in ax : word16)
  Class: Eq_1408
  DataType: 
  OrigDataType: 
T_1415: (in dx : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_1416: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1417: (in wArg00 : word16)
  Class: Eq_1417
  DataType: 
  OrigDataType: 
T_1418: (in wArg02 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_1419: (in bxOut : ptr16)
  Class: Eq_1419
  DataType: 
  OrigDataType: 
T_1420: (in wLoc06 : word16)
  Class: Eq_1417
  DataType: 
  OrigDataType: 
T_1421: (in out bx_13 : ptr16)
  Class: Eq_1419
  DataType: 
  OrigDataType: 
T_1422: (in fn0800_0787(ax_10, ax, ds, wLoc06, dx, out bx_13) : word16)
  Class: Eq_1422
  DataType: 
  OrigDataType: 
T_1423: (in 0x0000 : word16)
  Class: Eq_1423
  DataType: 
  OrigDataType: 
T_1424: (in ax + 0x0000 : word16)
  Class: Eq_1424
  DataType: 
  OrigDataType: 
T_1425: (in Mem5[ds:ax + 0x0000:word16] : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_1426: (in bx_11 : word16)
  Class: Eq_1426
  DataType: 
  OrigDataType: 
T_1427: (in wArg02 : word16)
  Class: Eq_1427
  DataType: 
  OrigDataType: 
T_1428: (in *bxOut : word16)
  Class: Eq_1427
  DataType: 
  OrigDataType: 
T_1429: (in wArg00 : word16)
  Class: Eq_1429
  DataType: 
  OrigDataType: 
T_1430: (in dx : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_1431: (in ax_10 : word16)
  Class: Eq_1408
  DataType: 
  OrigDataType: 
T_1432: (in fn0800_035E : ptr32)
  Class: Eq_1432
  DataType: 
  OrigDataType: 
T_1433: (in signature of fn0800_035E : void)
  Class: Eq_1432
  DataType: 
  OrigDataType: 
T_1434: (in fn0800_035E() : word16)
  Class: Eq_1408
  DataType: 
  OrigDataType: 
T_1435: (in bx_13 : word16)
  Class: Eq_1435
  DataType: 
  OrigDataType: 
T_1436: (in fn0800_0787 : ptr32)
  Class: Eq_1412
  DataType: 
  OrigDataType: 
T_1437: (in ax : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_1438: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1439: (in wLoc06 : word16)
  Class: Eq_1417
  DataType: 
  OrigDataType: 
T_1440: (in out bx_13 : ptr16)
  Class: Eq_1419
  DataType: 
  OrigDataType: 
T_1441: (in fn0800_0787(ax_10, ax, ds, wLoc06, dx, out bx_13) : word16)
  Class: Eq_1441
  DataType: 
  OrigDataType: 
T_1442: (in fn0800_0E0F : ptr32)
  Class: Eq_1442
  DataType: 
  OrigDataType: 
T_1443: (in signature of fn0800_0E0F : void)
  Class: Eq_1442
  DataType: 
  OrigDataType: 
T_1444: (in ax : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1445: (in cx : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1446: (in bp : word16)
  Class: Eq_1446
  DataType: 
  OrigDataType: 
T_1447: (in si : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1448: (in di : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1449: (in es : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1450: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1451: (in fp : ptr16)
  Class: Eq_1451
  DataType: 
  OrigDataType: 
T_1452: (in 0x0088 : word16)
  Class: Eq_1452
  DataType: 
  OrigDataType: 
T_1453: (in fp - 0x0088 : word16)
  Class: Eq_1446
  DataType: 
  OrigDataType: 
T_1454: (in fn0800_0E0F(ax, bx, fp - 0x0088, ax, di, es, ds) : void)
  Class: Eq_1454
  DataType: 
  OrigDataType: 
T_1455: (in 0x0000 : word16)
  Class: Eq_1455
  DataType: 
  OrigDataType: 
T_1456: (in 0x0000 : word16)
  Class: Eq_1455
  DataType: 
  OrigDataType: 
T_1457: (in 0x0000 == 0x0000 : bool)
  Class: Eq_1457
  DataType: 
  OrigDataType: 
T_1458: (in ax_209 : word16)
  Class: Eq_1458
  DataType: 
  OrigDataType: 
T_1459: (in fn0800_035A : ptr32)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_1460: (in fn0800_035A() : word16)
  Class: Eq_1458
  DataType: 
  OrigDataType: 
T_1461: (in 0x043C : word16)
  Class: Eq_1461
  DataType: 
  OrigDataType: 
T_1462: (in Mem0[ds:0x043C:word16] : word16)
  Class: Eq_1462
  DataType: 
  OrigDataType: 
T_1463: (in 0x0001 : word16)
  Class: Eq_1462
  DataType: 
  OrigDataType: 
T_1464: (in Mem0[ds:0x043C:word16] == 0x0001 : bool)
  Class: Eq_1464
  DataType: 
  OrigDataType: 
T_1465: (in al_97 : byte)
  Class: Eq_1465
  DataType: 
  OrigDataType: 
T_1466: (in 0x0000 : word16)
  Class: Eq_1466
  DataType: 
  OrigDataType: 
T_1467: (in ax + 0x0000 : word16)
  Class: Eq_1467
  DataType: 
  OrigDataType: 
T_1468: (in Mem0[ds:ax + 0x0000:byte] : byte)
  Class: Eq_1465
  DataType: 
  OrigDataType: 
T_1469: (in ax_99 : word16)
  Class: Eq_1469
  DataType: 
  OrigDataType: 
T_1470: (in 0x00 : byte)
  Class: Eq_1470
  DataType: 
  OrigDataType: 
T_1471: (in DPB(ax_209, 0x00, 8, 8) : word16)
  Class: Eq_1469
  DataType: 
  OrigDataType: 
T_1472: (in 0x005C : word16)
  Class: Eq_1469
  DataType: 
  OrigDataType: 
T_1473: (in ax_99 == 0x005C : bool)
  Class: Eq_1473
  DataType: 
  OrigDataType: 
T_1474: (in fn0800_035A : ptr32)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_1475: (in fn0800_035A() : word16)
  Class: Eq_1458
  DataType: 
  OrigDataType: 
T_1476: (in 0x043C : word16)
  Class: Eq_1476
  DataType: 
  OrigDataType: 
T_1477: (in Mem0[ds:0x043C:word16] : word16)
  Class: Eq_1477
  DataType: 
  OrigDataType: 
T_1478: (in 0x0009 : word16)
  Class: Eq_1477
  DataType: 
  OrigDataType: 
T_1479: (in Mem0[ds:0x043C:word16] != 0x0009 : bool)
  Class: Eq_1479
  DataType: 
  OrigDataType: 
T_1480: (in 0x00 : byte)
  Class: Eq_1465
  DataType: 
  OrigDataType: 
T_1481: (in al_97 == 0x00 : bool)
  Class: Eq_1481
  DataType: 
  OrigDataType: 
T_1482: (in 0x0001 : word16)
  Class: Eq_1482
  DataType: 
  OrigDataType: 
T_1483: (in ax + 0x0001 : word16)
  Class: Eq_1483
  DataType: 
  OrigDataType: 
T_1484: (in Mem0[ds:ax + 0x0001:byte] : byte)
  Class: Eq_1484
  DataType: 
  OrigDataType: 
T_1485: (in DPB(ax_99, Mem0[ds:ax + 0x0001:byte], 0, 8) : word16)
  Class: Eq_1485
  DataType: 
  OrigDataType: 
T_1486: (in 0x003A : word16)
  Class: Eq_1485
  DataType: 
  OrigDataType: 
T_1487: (in DPB(ax_99, Mem0[ds:ax + 0x0001:byte], 0, 8) == 0x003A : bool)
  Class: Eq_1487
  DataType: 
  OrigDataType: 
T_1488: (in cx_110 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1489: (in bp_111 : word16)
  Class: Eq_1446
  DataType: 
  OrigDataType: 
T_1490: (in si_112 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1491: (in di_113 : word16)
  Class: Eq_1491
  DataType: 
  OrigDataType: 
T_1492: (in es_114 : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1493: (in ax_115 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1494: (in fn0800_00BA : ptr32)
  Class: Eq_10
  DataType: 
  OrigDataType: 
T_1495: (in 0x0192 : word16)
  Class: Eq_12
  DataType: 
  OrigDataType: 
T_1496: (in fp - 0x0088 : word16)
  Class: Eq_13
  DataType: 
  OrigDataType: 
T_1497: (in out cx_110 : ptr16)
  Class: Eq_15
  DataType: 
  OrigDataType: 
T_1498: (in out bp_111 : ptr16)
  Class: Eq_16
  DataType: 
  OrigDataType: 
T_1499: (in out si_112 : ptr16)
  Class: Eq_17
  DataType: 
  OrigDataType: 
T_1500: (in out di_113 : ptr16)
  Class: Eq_18
  DataType: 
  OrigDataType: 
T_1501: (in out es_114 : ptr16)
  Class: Eq_19
  DataType: 
  OrigDataType: 
T_1502: (in fn0800_00BA(0x0192, fp - 0x0088, ds, out cx_110, out bp_111, out si_112, out di_113, out es_114) : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1503: (in di_116 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1504: (in 0x0000 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1505: (in ax_115 == 0x0000 : bool)
  Class: Eq_1505
  DataType: 
  OrigDataType: 
T_1506: (in fn0800_06F2 : ptr32)
  Class: Eq_489
  DataType: 
  OrigDataType: 
T_1507: (in fn0800_06F2(si_112, ds) : word16)
  Class: Eq_1507
  DataType: 
  OrigDataType: 
T_1508: (in 0x0001 : word16)
  Class: Eq_1508
  DataType: 
  OrigDataType: 
T_1509: (in fn0800_06F2(si_112, ds) + 0x0001 : word16)
  Class: Eq_1509
  DataType: 
  OrigDataType: 
T_1510: (in ss : selector)
  Class: Eq_1510
  DataType: 
  OrigDataType: 
T_1511: (in 0x007C : word16)
  Class: Eq_1511
  DataType: 
  OrigDataType: 
T_1512: (in bp_111 + 0x007C : word16)
  Class: Eq_1512
  DataType: 
  OrigDataType: 
T_1513: (in Mem123[ss:bp_111 + 0x007C:word16] : word16)
  Class: Eq_1509
  DataType: 
  OrigDataType: 
T_1514: (in 0x0090 : word16)
  Class: Eq_1514
  DataType: 
  OrigDataType: 
T_1515: (in 0x007C : word16)
  Class: Eq_1515
  DataType: 
  OrigDataType: 
T_1516: (in bp_111 + 0x007C : word16)
  Class: Eq_1516
  DataType: 
  OrigDataType: 
T_1517: (in Mem123[ss:bp_111 + 0x007C:word16] : word16)
  Class: Eq_1517
  DataType: 
  OrigDataType: 
T_1518: (in 0x0090 - Mem123[ss:bp_111 + 0x007C:word16] : word16)
  Class: Eq_1518
  DataType: 
  OrigDataType: 
T_1519: (in 0x0078 : word16)
  Class: Eq_1519
  DataType: 
  OrigDataType: 
T_1520: (in bp_111 + 0x0078 : word16)
  Class: Eq_1520
  DataType: 
  OrigDataType: 
T_1521: (in Mem127[ss:bp_111 + 0x0078:word16] : word16)
  Class: Eq_1518
  DataType: 
  OrigDataType: 
T_1522: (in fn0800_1285 : ptr32)
  Class: Eq_1522
  DataType: 
  OrigDataType: 
T_1523: (in signature of fn0800_1285 : void)
  Class: Eq_1522
  DataType: 
  OrigDataType: 
T_1524: (in ax : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1525: (in dl : byte)
  Class: Eq_1525
  DataType: 
  OrigDataType: 
T_1526: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1527: (in 0x3B : byte)
  Class: Eq_1525
  DataType: 
  OrigDataType: 
T_1528: (in fn0800_1285(di_116, 0x3B, ds) : void)
  Class: Eq_1528
  DataType: 
  OrigDataType: 
T_1529: (in 0x007E : word16)
  Class: Eq_1529
  DataType: 
  OrigDataType: 
T_1530: (in bp_111 + 0x007E : word16)
  Class: Eq_1530
  DataType: 
  OrigDataType: 
T_1531: (in Mem143[ss:bp_111 + 0x007E:word16] : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1532: (in 0x0000 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1533: (in di_116 != 0x0000 : bool)
  Class: Eq_1533
  DataType: 
  OrigDataType: 
T_1534: (in bx_149 : word16)
  Class: Eq_1534
  DataType: 
  OrigDataType: 
T_1535: (in 0x007E : word16)
  Class: Eq_1535
  DataType: 
  OrigDataType: 
T_1536: (in bp_111 + 0x007E : word16)
  Class: Eq_1536
  DataType: 
  OrigDataType: 
T_1537: (in Mem143[ss:bp_111 + 0x007E:word16] : word16)
  Class: Eq_1537
  DataType: 
  OrigDataType: 
T_1538: (in Mem143[ss:bp_111 + 0x007E:word16] - di_116 : word16)
  Class: Eq_1534
  DataType: 
  OrigDataType: 
T_1539: (in 0x0076 : word16)
  Class: Eq_1539
  DataType: 
  OrigDataType: 
T_1540: (in bp_111 + 0x0076 : word16)
  Class: Eq_1540
  DataType: 
  OrigDataType: 
T_1541: (in Mem150[ss:bp_111 + 0x0076:word16] : word16)
  Class: Eq_1534
  DataType: 
  OrigDataType: 
T_1542: (in 0x0078 : word16)
  Class: Eq_1542
  DataType: 
  OrigDataType: 
T_1543: (in bp_111 + 0x0078 : word16)
  Class: Eq_1543
  DataType: 
  OrigDataType: 
T_1544: (in Mem150[ss:bp_111 + 0x0078:word16] : word16)
  Class: Eq_1534
  DataType: 
  OrigDataType: 
T_1545: (in bx_149 <=u Mem150[ss:bp_111 + 0x0078:word16] : bool)
  Class: Eq_1545
  DataType: 
  OrigDataType: 
T_1546: (in fn0800_06F2 : ptr32)
  Class: Eq_489
  DataType: 
  OrigDataType: 
T_1547: (in fn0800_06F2(di_116, ds) : word16)
  Class: Eq_1547
  DataType: 
  OrigDataType: 
T_1548: (in di_116 + fn0800_06F2(di_116, ds) : word16)
  Class: Eq_1548
  DataType: 
  OrigDataType: 
T_1549: (in 0x007E : word16)
  Class: Eq_1549
  DataType: 
  OrigDataType: 
T_1550: (in bp_111 + 0x007E : word16)
  Class: Eq_1550
  DataType: 
  OrigDataType: 
T_1551: (in Mem208[ss:bp_111 + 0x007E:word16] : word16)
  Class: Eq_1548
  DataType: 
  OrigDataType: 
T_1552: (in di_165 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1553: (in 0x001A : word16)
  Class: Eq_1553
  DataType: 
  OrigDataType: 
T_1554: (in bp_111 - 0x001A : word16)
  Class: Eq_1554
  DataType: 
  OrigDataType: 
T_1555: (in 0x0076 : word16)
  Class: Eq_1555
  DataType: 
  OrigDataType: 
T_1556: (in bp_111 + 0x0076 : word16)
  Class: Eq_1556
  DataType: 
  OrigDataType: 
T_1557: (in Mem150[ss:bp_111 + 0x0076:word16] : word16)
  Class: Eq_1557
  DataType: 
  OrigDataType: 
T_1558: (in bp_111 - 0x001A + Mem150[ss:bp_111 + 0x0076:word16] : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1559: (in fn0800_129E : ptr32)
  Class: Eq_1559
  DataType: 
  OrigDataType: 
T_1560: (in signature of fn0800_129E : void)
  Class: Eq_1559
  DataType: 
  OrigDataType: 
T_1561: (in ax : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1562: (in dx : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1563: (in bx : word16)
  Class: Eq_1534
  DataType: 
  OrigDataType: 
T_1564: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1565: (in 0x001A : word16)
  Class: Eq_1565
  DataType: 
  OrigDataType: 
T_1566: (in bp_111 - 0x001A : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1567: (in fn0800_129E(bp_111 - 0x001A, di_116, bx_149, ds) : void)
  Class: Eq_1567
  DataType: 
  OrigDataType: 
T_1568: (in bp_111 - 0x001A : word16)
  Class: Eq_1568
  DataType: 
  OrigDataType: 
T_1569: (in 0x00 : byte)
  Class: Eq_1569
  DataType: 
  OrigDataType: 
T_1570: (in DPB(bp_111 - 0x001A, 0x00, 8, 8) : word16)
  Class: Eq_1570
  DataType: 
  OrigDataType: 
T_1571: (in 0x005C : word16)
  Class: Eq_1570
  DataType: 
  OrigDataType: 
T_1572: (in DPB(bp_111 - 0x001A, 0x00, 8, 8) == 0x005C : bool)
  Class: Eq_1572
  DataType: 
  OrigDataType: 
T_1573: (in bx_154 : word16)
  Class: Eq_1573
  DataType: 
  OrigDataType: 
T_1574: (in bx_158 : word16)
  Class: Eq_1574
  DataType: 
  OrigDataType: 
T_1575: (in fn0800_079D : ptr32)
  Class: Eq_1575
  DataType: 
  OrigDataType: 
T_1576: (in signature of fn0800_079D : void)
  Class: Eq_1575
  DataType: 
  OrigDataType: 
T_1577: (in bxOut : ptr16)
  Class: Eq_1577
  DataType: 
  OrigDataType: 
T_1578: (in 0x000A : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_1579: (in fn0800_0780 : ptr32)
  Class: Eq_593
  DataType: 
  OrigDataType: 
T_1580: (in 0x0002 : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_1581: (in 0x003B : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_1582: (in out bx_154 : ptr16)
  Class: Eq_598
  DataType: 
  OrigDataType: 
T_1583: (in fn0800_0780(0x0002, 0x003B, ds, out bx_154) : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_1584: (in out bx_158 : ptr16)
  Class: Eq_1577
  DataType: 
  OrigDataType: 
T_1585: (in fn0800_079D(0x000A, fn0800_0780(0x0002, 0x003B, ds, out bx_154), ds, out bx_158) : word16)
  Class: Eq_1585
  DataType: 
  OrigDataType: 
T_1586: (in fn0800_129E : ptr32)
  Class: Eq_1559
  DataType: 
  OrigDataType: 
T_1587: (in 0x007C : word16)
  Class: Eq_1587
  DataType: 
  OrigDataType: 
T_1588: (in bp_111 + 0x007C : word16)
  Class: Eq_1588
  DataType: 
  OrigDataType: 
T_1589: (in Mem150[ss:bp_111 + 0x007C:word16] : word16)
  Class: Eq_1534
  DataType: 
  OrigDataType: 
T_1590: (in fn0800_129E(di_165, si_112, Mem150[ss:bp_111 + 0x007C:word16], ds) : void)
  Class: Eq_1590
  DataType: 
  OrigDataType: 
T_1591: (in fn0800_0E0F : ptr32)
  Class: Eq_1442
  DataType: 
  OrigDataType: 
T_1592: (in 0x001A : word16)
  Class: Eq_1592
  DataType: 
  OrigDataType: 
T_1593: (in bp_111 - 0x001A : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1594: (in fn0800_0E0F(bp_111 - 0x001A, cx_110, bp_111, si_112, di_165, es_114, ds) : void)
  Class: Eq_1594
  DataType: 
  OrigDataType: 
T_1595: (in false : bool)
  Class: Eq_1595
  DataType: 
  OrigDataType: 
T_1596: (in 0x5C : byte)
  Class: Eq_1596
  DataType: 
  OrigDataType: 
T_1597: (in 0x0000 : word16)
  Class: Eq_1597
  DataType: 
  OrigDataType: 
T_1598: (in di_165 + 0x0000 : word16)
  Class: Eq_1598
  DataType: 
  OrigDataType: 
T_1599: (in Mem200[ds:di_165 + 0x0000:byte] : byte)
  Class: Eq_1596
  DataType: 
  OrigDataType: 
T_1600: (in 0x0001 : word16)
  Class: Eq_1600
  DataType: 
  OrigDataType: 
T_1601: (in di_165 + 0x0001 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1602: (in ax_183 : word16)
  Class: Eq_1602
  DataType: 
  OrigDataType: 
T_1603: (in fn0800_035A : ptr32)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_1604: (in fn0800_035A() : word16)
  Class: Eq_1602
  DataType: 
  OrigDataType: 
T_1605: (in 0x043C : word16)
  Class: Eq_1605
  DataType: 
  OrigDataType: 
T_1606: (in Mem150[ds:0x043C:word16] : word16)
  Class: Eq_1606
  DataType: 
  OrigDataType: 
T_1607: (in 0x0001 : word16)
  Class: Eq_1606
  DataType: 
  OrigDataType: 
T_1608: (in Mem150[ds:0x043C:word16] == 0x0001 : bool)
  Class: Eq_1608
  DataType: 
  OrigDataType: 
T_1609: (in di_188 : word16)
  Class: Eq_1609
  DataType: 
  OrigDataType: 
T_1610: (in 0x007E : word16)
  Class: Eq_1610
  DataType: 
  OrigDataType: 
T_1611: (in bp_111 + 0x007E : word16)
  Class: Eq_1611
  DataType: 
  OrigDataType: 
T_1612: (in Mem150[ss:bp_111 + 0x007E:word16] : word16)
  Class: Eq_1609
  DataType: 
  OrigDataType: 
T_1613: (in 0x00 : byte)
  Class: Eq_1613
  DataType: 
  OrigDataType: 
T_1614: (in DPB(ax_183, 0x00, 8, 8) : word16)
  Class: Eq_1614
  DataType: 
  OrigDataType: 
T_1615: (in 0x003B : word16)
  Class: Eq_1614
  DataType: 
  OrigDataType: 
T_1616: (in DPB(ax_183, 0x00, 8, 8) != 0x003B : bool)
  Class: Eq_1616
  DataType: 
  OrigDataType: 
T_1617: (in fn0800_035A : ptr32)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_1618: (in fn0800_035A() : word16)
  Class: Eq_1602
  DataType: 
  OrigDataType: 
T_1619: (in 0x043C : word16)
  Class: Eq_1619
  DataType: 
  OrigDataType: 
T_1620: (in Mem150[ds:0x043C:word16] : word16)
  Class: Eq_1620
  DataType: 
  OrigDataType: 
T_1621: (in 0x0009 : word16)
  Class: Eq_1620
  DataType: 
  OrigDataType: 
T_1622: (in Mem150[ds:0x043C:word16] != 0x0009 : bool)
  Class: Eq_1622
  DataType: 
  OrigDataType: 
T_1623: (in 0x0001 : word16)
  Class: Eq_1623
  DataType: 
  OrigDataType: 
T_1624: (in di_188 + 0x0001 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1625: (in 0x0000 : word16)
  Class: Eq_1625
  DataType: 
  OrigDataType: 
T_1626: (in di_116 + 0x0000 : word16)
  Class: Eq_1626
  DataType: 
  OrigDataType: 
T_1627: (in Mem127[ds:di_116 + 0x0000:byte] : byte)
  Class: Eq_1627
  DataType: 
  OrigDataType: 
T_1628: (in 0x00 : byte)
  Class: Eq_1627
  DataType: 
  OrigDataType: 
T_1629: (in Mem127[ds:di_116 + 0x0000:byte] == 0x00 : bool)
  Class: Eq_1629
  DataType: 
  OrigDataType: 
T_1630: (in ax_103 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_1631: (in si_102 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_1632: (in bx_101 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_1633: (in 0x0004 : word16)
  Class: Eq_1633
  DataType: 
  OrigDataType: 
T_1634: (in dx + 0x0004 : word16)
  Class: Eq_1634
  DataType: 
  OrigDataType: 
T_1635: (in Mem0[ds:dx + 0x0004:word16] : word16)
  Class: Eq_1635
  DataType: 
  OrigDataType: 
T_1636: (in 0x0000 : word16)
  Class: Eq_1635
  DataType: 
  OrigDataType: 
T_1637: (in Mem0[ds:dx + 0x0004:word16] != 0x0000 : bool)
  Class: Eq_1637
  DataType: 
  OrigDataType: 
T_1638: (in di_112 : word16)
  Class: Eq_1638
  DataType: 
  OrigDataType: 
T_1639: (in 0x0000 : word16)
  Class: Eq_1638
  DataType: 
  OrigDataType: 
T_1640: (in 0x0007 : word16)
  Class: Eq_1640
  DataType: 
  OrigDataType: 
T_1641: (in dx + 0x0007 : word16)
  Class: Eq_1641
  DataType: 
  OrigDataType: 
T_1642: (in Mem0[ds:dx + 0x0007:byte] : byte)
  Class: Eq_1642
  DataType: 
  OrigDataType: 
T_1643: (in 0x04 : byte)
  Class: Eq_1643
  DataType: 
  OrigDataType: 
T_1644: (in Mem0[ds:dx + 0x0007:byte] & 0x04 : byte)
  Class: Eq_1644
  DataType: 
  OrigDataType: 
T_1645: (in 0x00 : byte)
  Class: Eq_1644
  DataType: 
  OrigDataType: 
T_1646: (in (Mem0[ds:dx + 0x0007:byte] & 0x04) == 0x00 : bool)
  Class: Eq_1646
  DataType: 
  OrigDataType: 
T_1647: (in fn0800_12BE : ptr32)
  Class: Eq_1647
  DataType: 
  OrigDataType: 
T_1648: (in signature of fn0800_12BE : void)
  Class: Eq_1647
  DataType: 
  OrigDataType: 
T_1649: (in ax : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_1650: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1651: (in fn0800_12BE(dx, ds) : word16)
  Class: Eq_1651
  DataType: 
  OrigDataType: 
T_1652: (in cx_100 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_1653: (in 0x0000 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_1654: (in 0x0007 : word16)
  Class: Eq_1654
  DataType: 
  OrigDataType: 
T_1655: (in dx + 0x0007 : word16)
  Class: Eq_1655
  DataType: 
  OrigDataType: 
T_1656: (in Mem0[ds:dx + 0x0007:byte] : byte)
  Class: Eq_1656
  DataType: 
  OrigDataType: 
T_1657: (in 0xF9 : byte)
  Class: Eq_1657
  DataType: 
  OrigDataType: 
T_1658: (in Mem0[ds:dx + 0x0007:byte] & 0xF9 : byte)
  Class: Eq_1658
  DataType: 
  OrigDataType: 
T_1659: (in 0x0007 : word16)
  Class: Eq_1659
  DataType: 
  OrigDataType: 
T_1660: (in dx + 0x0007 : word16)
  Class: Eq_1660
  DataType: 
  OrigDataType: 
T_1661: (in Mem110[ds:dx + 0x0007:byte] : byte)
  Class: Eq_1658
  DataType: 
  OrigDataType: 
T_1662: (in 0x0007 : word16)
  Class: Eq_1662
  DataType: 
  OrigDataType: 
T_1663: (in dx + 0x0007 : word16)
  Class: Eq_1663
  DataType: 
  OrigDataType: 
T_1664: (in Mem110[ds:dx + 0x0007:byte] : byte)
  Class: Eq_1664
  DataType: 
  OrigDataType: 
T_1665: (in 0x02 : byte)
  Class: Eq_1665
  DataType: 
  OrigDataType: 
T_1666: (in Mem110[ds:dx + 0x0007:byte] | 0x02 : byte)
  Class: Eq_1666
  DataType: 
  OrigDataType: 
T_1667: (in 0x0007 : word16)
  Class: Eq_1667
  DataType: 
  OrigDataType: 
T_1668: (in dx + 0x0007 : word16)
  Class: Eq_1668
  DataType: 
  OrigDataType: 
T_1669: (in Mem114[ds:dx + 0x0007:byte] : byte)
  Class: Eq_1666
  DataType: 
  OrigDataType: 
T_1670: (in 0x0001 : word16)
  Class: Eq_1638
  DataType: 
  OrigDataType: 
T_1671: (in 0x0000 : word16)
  Class: Eq_1638
  DataType: 
  OrigDataType: 
T_1672: (in di_112 == 0x0000 : bool)
  Class: Eq_1672
  DataType: 
  OrigDataType: 
T_1673: (in fn0800_0924 : ptr32)
  Class: Eq_676
  DataType: 
  OrigDataType: 
T_1674: (in ax_46 : word16)
  Class: Eq_678
  DataType: 
  OrigDataType: 
T_1675: (in out cx_100 : ptr16)
  Class: Eq_681
  DataType: 
  OrigDataType: 
T_1676: (in out bx_101 : ptr16)
  Class: Eq_682
  DataType: 
  OrigDataType: 
T_1677: (in out si_102 : ptr16)
  Class: Eq_683
  DataType: 
  OrigDataType: 
T_1678: (in fn0800_0924(ax_46, bx_101, ds, out cx_100, out bx_101, out si_102) : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_1679: (in 0xFFFF : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_1680: (in ax_103 != 0xFFFF : bool)
  Class: Eq_1680
  DataType: 
  OrigDataType: 
T_1681: (in 0x00 : byte)
  Class: Eq_1681
  DataType: 
  OrigDataType: 
T_1682: (in DPB(ax_103, 0x00, 8, 8) : word16)
  Class: Eq_678
  DataType: 
  OrigDataType: 
T_1683: (in 0x0000 : word16)
  Class: Eq_678
  DataType: 
  OrigDataType: 
T_1684: (in ax_46 == 0x0000 : bool)
  Class: Eq_1684
  DataType: 
  OrigDataType: 
T_1685: (in 0x0000 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_1686: (in cx_100 != 0x0000 : bool)
  Class: Eq_1686
  DataType: 
  OrigDataType: 
T_1687: (in 0x0007 : word16)
  Class: Eq_1687
  DataType: 
  OrigDataType: 
T_1688: (in bx_101 + 0x0007 : word16)
  Class: Eq_1688
  DataType: 
  OrigDataType: 
T_1689: (in Mem0[ds:bx_101 + 0x0007:byte] : byte)
  Class: Eq_1689
  DataType: 
  OrigDataType: 
T_1690: (in 0xF9 : byte)
  Class: Eq_1690
  DataType: 
  OrigDataType: 
T_1691: (in Mem0[ds:bx_101 + 0x0007:byte] & 0xF9 : byte)
  Class: Eq_1691
  DataType: 
  OrigDataType: 
T_1692: (in 0x0007 : word16)
  Class: Eq_1692
  DataType: 
  OrigDataType: 
T_1693: (in bx_101 + 0x0007 : word16)
  Class: Eq_1693
  DataType: 
  OrigDataType: 
T_1694: (in Mem86[ds:bx_101 + 0x0007:byte] : byte)
  Class: Eq_1691
  DataType: 
  OrigDataType: 
T_1695: (in 0x0007 : word16)
  Class: Eq_1695
  DataType: 
  OrigDataType: 
T_1696: (in bx_101 + 0x0007 : word16)
  Class: Eq_1696
  DataType: 
  OrigDataType: 
T_1697: (in Mem86[ds:bx_101 + 0x0007:byte] : byte)
  Class: Eq_1697
  DataType: 
  OrigDataType: 
T_1698: (in 0x04 : byte)
  Class: Eq_1698
  DataType: 
  OrigDataType: 
T_1699: (in Mem86[ds:bx_101 + 0x0007:byte] | 0x04 : byte)
  Class: Eq_1699
  DataType: 
  OrigDataType: 
T_1700: (in 0x0007 : word16)
  Class: Eq_1700
  DataType: 
  OrigDataType: 
T_1701: (in bx_101 + 0x0007 : word16)
  Class: Eq_1701
  DataType: 
  OrigDataType: 
T_1702: (in Mem89[ds:bx_101 + 0x0007:byte] : byte)
  Class: Eq_1699
  DataType: 
  OrigDataType: 
T_1703: (in 0x0000 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_1704: (in cx_100 != 0x0000 : bool)
  Class: Eq_1704
  DataType: 
  OrigDataType: 
T_1705: (in fn0800_131B : ptr32)
  Class: Eq_1705
  DataType: 
  OrigDataType: 
T_1706: (in signature of fn0800_131B : void)
  Class: Eq_1705
  DataType: 
  OrigDataType: 
T_1707: (in ax : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_1708: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1709: (in fn0800_131B(bx_101, ds) : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_1710: (in si_102 - ax : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_1711: (in ax_24 : word16)
  Class: Eq_1711
  DataType: 
  OrigDataType: 
T_1712: (in sp_29 : word16)
  Class: Eq_1712
  DataType: 
  OrigDataType: 
T_1713: (in fp : ptr16)
  Class: Eq_1713
  DataType: 
  OrigDataType: 
T_1714: (in 0x0006 : word16)
  Class: Eq_1714
  DataType: 
  OrigDataType: 
T_1715: (in fp - 0x0006 : word16)
  Class: Eq_1712
  DataType: 
  OrigDataType: 
T_1716: (in cx_12 : word16)
  Class: Eq_678
  DataType: 
  OrigDataType: 
T_1717: (in cl_125 : byte)
  Class: Eq_1717
  DataType: 
  OrigDataType: 
T_1718: (in (byte) ax : byte)
  Class: Eq_1717
  DataType: 
  OrigDataType: 
T_1719: (in 0x0006 : word16)
  Class: Eq_1719
  DataType: 
  OrigDataType: 
T_1720: (in dx + 0x0006 : word16)
  Class: Eq_1720
  DataType: 
  OrigDataType: 
T_1721: (in Mem0[ds:dx + 0x0006:byte] : byte)
  Class: Eq_1721
  DataType: 
  OrigDataType: 
T_1722: (in 0x02 : byte)
  Class: Eq_1722
  DataType: 
  OrigDataType: 
T_1723: (in Mem0[ds:dx + 0x0006:byte] & 0x02 : byte)
  Class: Eq_1723
  DataType: 
  OrigDataType: 
T_1724: (in 0x00 : byte)
  Class: Eq_1723
  DataType: 
  OrigDataType: 
T_1725: (in (Mem0[ds:dx + 0x0006:byte] & 0x02) != 0x00 : bool)
  Class: Eq_1725
  DataType: 
  OrigDataType: 
T_1726: (in 0x0004 : word16)
  Class: Eq_1726
  DataType: 
  OrigDataType: 
T_1727: (in dx + 0x0004 : word16)
  Class: Eq_1727
  DataType: 
  OrigDataType: 
T_1728: (in Mem0[ds:dx + 0x0004:word16] : word16)
  Class: Eq_1728
  DataType: 
  OrigDataType: 
T_1729: (in 0x0000 : word16)
  Class: Eq_1728
  DataType: 
  OrigDataType: 
T_1730: (in Mem0[ds:dx + 0x0004:word16] != 0x0000 : bool)
  Class: Eq_1730
  DataType: 
  OrigDataType: 
T_1731: (in bx_42 : word16)
  Class: Eq_1731
  DataType: 
  OrigDataType: 
T_1732: (in fn0800_0780 : ptr32)
  Class: Eq_593
  DataType: 
  OrigDataType: 
T_1733: (in 0x0004 : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_1734: (in out bx_42 : ptr16)
  Class: Eq_598
  DataType: 
  OrigDataType: 
T_1735: (in fn0800_0780(0x0004, dx, ds, out bx_42) : word16)
  Class: Eq_1735
  DataType: 
  OrigDataType: 
T_1736: (in 0x0006 : word16)
  Class: Eq_1736
  DataType: 
  OrigDataType: 
T_1737: (in bx_42 + 0x0006 : word16)
  Class: Eq_1737
  DataType: 
  OrigDataType: 
T_1738: (in Mem0[ds:bx_42 + 0x0006:byte] : byte)
  Class: Eq_1738
  DataType: 
  OrigDataType: 
T_1739: (in 0x20 : byte)
  Class: Eq_1739
  DataType: 
  OrigDataType: 
T_1740: (in Mem0[ds:bx_42 + 0x0006:byte] | 0x20 : byte)
  Class: Eq_1740
  DataType: 
  OrigDataType: 
T_1741: (in 0x0006 : word16)
  Class: Eq_1741
  DataType: 
  OrigDataType: 
T_1742: (in bx_42 + 0x0006 : word16)
  Class: Eq_1742
  DataType: 
  OrigDataType: 
T_1743: (in Mem49[ds:bx_42 + 0x0006:byte] : byte)
  Class: Eq_1740
  DataType: 
  OrigDataType: 
T_1744: (in 0x0008 : word16)
  Class: Eq_1744
  DataType: 
  OrigDataType: 
T_1745: (in fp - 0x0008 : word16)
  Class: Eq_1712
  DataType: 
  OrigDataType: 
T_1746: (in 0xFFFF : word16)
  Class: Eq_1711
  DataType: 
  OrigDataType: 
T_1747: (in sp_32 : word16)
  Class: Eq_1747
  DataType: 
  OrigDataType: 
T_1748: (in 0x0002 : word16)
  Class: Eq_1748
  DataType: 
  OrigDataType: 
T_1749: (in sp_29 + 0x0002 : word16)
  Class: Eq_1747
  DataType: 
  OrigDataType: 
T_1750: (in si_31 : word16)
  Class: Eq_1750
  DataType: 
  OrigDataType: 
T_1751: (in ss : selector)
  Class: Eq_1751
  DataType: 
  OrigDataType: 
T_1752: (in 0x0000 : word16)
  Class: Eq_1752
  DataType: 
  OrigDataType: 
T_1753: (in sp_29 + 0x0000 : word16)
  Class: Eq_1753
  DataType: 
  OrigDataType: 
T_1754: (in Mem0[ss:sp_29 + 0x0000:word16] : word16)
  Class: Eq_1754
  DataType: 
  OrigDataType: 
T_1755: (in *siOut : word16)
  Class: Eq_1754
  DataType: 
  OrigDataType: 
T_1756: (in cx_33 : word16)
  Class: Eq_1756
  DataType: 
  OrigDataType: 
T_1757: (in 0x0000 : word16)
  Class: Eq_1757
  DataType: 
  OrigDataType: 
T_1758: (in sp_32 + 0x0000 : word16)
  Class: Eq_1758
  DataType: 
  OrigDataType: 
T_1759: (in Mem0[ss:sp_32 + 0x0000:word16] : word16)
  Class: Eq_1759
  DataType: 
  OrigDataType: 
T_1760: (in *cxOut : word16)
  Class: Eq_1759
  DataType: 
  OrigDataType: 
T_1761: (in bx_36 : word16)
  Class: Eq_1761
  DataType: 
  OrigDataType: 
T_1762: (in 0x0002 : word16)
  Class: Eq_1762
  DataType: 
  OrigDataType: 
T_1763: (in sp_32 + 0x0002 : word16)
  Class: Eq_1763
  DataType: 
  OrigDataType: 
T_1764: (in Mem0[ss:sp_32 + 0x0002:word16] : word16)
  Class: Eq_1764
  DataType: 
  OrigDataType: 
T_1765: (in *bxOut : word16)
  Class: Eq_1764
  DataType: 
  OrigDataType: 
T_1766: (in dx_102 : word16)
  Class: Eq_1766
  DataType: 
  OrigDataType: 
T_1767: (in 0x0400 : word16)
  Class: Eq_1766
  DataType: 
  OrigDataType: 
T_1768: (in 0x000A : word16)
  Class: Eq_678
  DataType: 
  OrigDataType: 
T_1769: (in cx_12 != 0x000A : bool)
  Class: Eq_1769
  DataType: 
  OrigDataType: 
T_1770: (in fn0800_12BE : ptr32)
  Class: Eq_1647
  DataType: 
  OrigDataType: 
T_1771: (in fn0800_12BE(dx, ds) : word16)
  Class: Eq_678
  DataType: 
  OrigDataType: 
T_1772: (in (byte) cx_12 : byte)
  Class: Eq_1717
  DataType: 
  OrigDataType: 
T_1773: (in ax_87 : word16)
  Class: Eq_1773
  DataType: 
  OrigDataType: 
T_1774: (in si_73 : word16)
  Class: Eq_1774
  DataType: 
  OrigDataType: 
T_1775: (in 0x0000 : word16)
  Class: Eq_1775
  DataType: 
  OrigDataType: 
T_1776: (in dx + 0x0000 : word16)
  Class: Eq_1776
  DataType: 
  OrigDataType: 
T_1777: (in Mem0[ds:dx + 0x0000:word16] : word16)
  Class: Eq_1774
  DataType: 
  OrigDataType: 
T_1778: (in 0x0007 : word16)
  Class: Eq_1778
  DataType: 
  OrigDataType: 
T_1779: (in dx + 0x0007 : word16)
  Class: Eq_1779
  DataType: 
  OrigDataType: 
T_1780: (in Mem0[ds:dx + 0x0007:byte] : byte)
  Class: Eq_1780
  DataType: 
  OrigDataType: 
T_1781: (in 0x10 : byte)
  Class: Eq_1781
  DataType: 
  OrigDataType: 
T_1782: (in Mem0[ds:dx + 0x0007:byte] | 0x10 : byte)
  Class: Eq_1782
  DataType: 
  OrigDataType: 
T_1783: (in 0x0007 : word16)
  Class: Eq_1783
  DataType: 
  OrigDataType: 
T_1784: (in dx + 0x0007 : word16)
  Class: Eq_1784
  DataType: 
  OrigDataType: 
T_1785: (in Mem75[ds:dx + 0x0007:byte] : byte)
  Class: Eq_1782
  DataType: 
  OrigDataType: 
T_1786: (in 0x0000 : word16)
  Class: Eq_1786
  DataType: 
  OrigDataType: 
T_1787: (in si_73 + 0x0000 : word16)
  Class: Eq_1787
  DataType: 
  OrigDataType: 
T_1788: (in Mem77[ds:si_73 + 0x0000:byte] : byte)
  Class: Eq_1717
  DataType: 
  OrigDataType: 
T_1789: (in 0x0000 : word16)
  Class: Eq_1789
  DataType: 
  OrigDataType: 
T_1790: (in dx + 0x0000 : word16)
  Class: Eq_1790
  DataType: 
  OrigDataType: 
T_1791: (in Mem77[ds:dx + 0x0000:word16] : word16)
  Class: Eq_1791
  DataType: 
  OrigDataType: 
T_1792: (in 0x0001 : word16)
  Class: Eq_1792
  DataType: 
  OrigDataType: 
T_1793: (in Mem77[ds:dx + 0x0000:word16] + 0x0001 : word16)
  Class: Eq_1793
  DataType: 
  OrigDataType: 
T_1794: (in 0x0000 : word16)
  Class: Eq_1794
  DataType: 
  OrigDataType: 
T_1795: (in dx + 0x0000 : word16)
  Class: Eq_1795
  DataType: 
  OrigDataType: 
T_1796: (in Mem79[ds:dx + 0x0000:word16] : word16)
  Class: Eq_1793
  DataType: 
  OrigDataType: 
T_1797: (in 0x0002 : word16)
  Class: Eq_1797
  DataType: 
  OrigDataType: 
T_1798: (in dx + 0x0002 : word16)
  Class: Eq_1798
  DataType: 
  OrigDataType: 
T_1799: (in Mem79[ds:dx + 0x0002:word16] : word16)
  Class: Eq_1799
  DataType: 
  OrigDataType: 
T_1800: (in 0x0001 : word16)
  Class: Eq_1800
  DataType: 
  OrigDataType: 
T_1801: (in Mem79[ds:dx + 0x0002:word16] + 0x0001 : word16)
  Class: Eq_1801
  DataType: 
  OrigDataType: 
T_1802: (in 0x0002 : word16)
  Class: Eq_1802
  DataType: 
  OrigDataType: 
T_1803: (in dx + 0x0002 : word16)
  Class: Eq_1803
  DataType: 
  OrigDataType: 
T_1804: (in Mem81[ds:dx + 0x0002:word16] : word16)
  Class: Eq_1801
  DataType: 
  OrigDataType: 
T_1805: (in 0x0006 : word16)
  Class: Eq_1805
  DataType: 
  OrigDataType: 
T_1806: (in dx + 0x0006 : word16)
  Class: Eq_1806
  DataType: 
  OrigDataType: 
T_1807: (in Mem81[ds:dx + 0x0006:word16] : word16)
  Class: Eq_1807
  DataType: 
  OrigDataType: 
T_1808: (in Mem81[ds:dx + 0x0006:word16] & dx_102 : word16)
  Class: Eq_1808
  DataType: 
  OrigDataType: 
T_1809: (in 0x0000 : word16)
  Class: Eq_1808
  DataType: 
  OrigDataType: 
T_1810: (in (Mem81[ds:dx + 0x0006:word16] & dx_102) != 0x0000 : bool)
  Class: Eq_1810
  DataType: 
  OrigDataType: 
T_1811: (in 0x0600 : word16)
  Class: Eq_1766
  DataType: 
  OrigDataType: 
T_1812: (in 0x0006 : word16)
  Class: Eq_1812
  DataType: 
  OrigDataType: 
T_1813: (in dx + 0x0006 : word16)
  Class: Eq_1813
  DataType: 
  OrigDataType: 
T_1814: (in Mem0[ds:dx + 0x0006:byte] : byte)
  Class: Eq_1814
  DataType: 
  OrigDataType: 
T_1815: (in 0x40 : byte)
  Class: Eq_1815
  DataType: 
  OrigDataType: 
T_1816: (in Mem0[ds:dx + 0x0006:byte] & 0x40 : byte)
  Class: Eq_1816
  DataType: 
  OrigDataType: 
T_1817: (in 0x00 : byte)
  Class: Eq_1816
  DataType: 
  OrigDataType: 
T_1818: (in (Mem0[ds:dx + 0x0006:byte] & 0x40) != 0x00 : bool)
  Class: Eq_1818
  DataType: 
  OrigDataType: 
T_1819: (in si_106 : word16)
  Class: Eq_1819
  DataType: 
  OrigDataType: 
T_1820: (in 0x0000 : word16)
  Class: Eq_1820
  DataType: 
  OrigDataType: 
T_1821: (in dx + 0x0000 : word16)
  Class: Eq_1821
  DataType: 
  OrigDataType: 
T_1822: (in Mem0[ds:dx + 0x0000:word16] : word16)
  Class: Eq_1819
  DataType: 
  OrigDataType: 
T_1823: (in 0x0007 : word16)
  Class: Eq_1823
  DataType: 
  OrigDataType: 
T_1824: (in dx + 0x0007 : word16)
  Class: Eq_1824
  DataType: 
  OrigDataType: 
T_1825: (in Mem0[ds:dx + 0x0007:byte] : byte)
  Class: Eq_1825
  DataType: 
  OrigDataType: 
T_1826: (in 0x10 : byte)
  Class: Eq_1826
  DataType: 
  OrigDataType: 
T_1827: (in Mem0[ds:dx + 0x0007:byte] | 0x10 : byte)
  Class: Eq_1827
  DataType: 
  OrigDataType: 
T_1828: (in 0x0007 : word16)
  Class: Eq_1828
  DataType: 
  OrigDataType: 
T_1829: (in dx + 0x0007 : word16)
  Class: Eq_1829
  DataType: 
  OrigDataType: 
T_1830: (in Mem108[ds:dx + 0x0007:byte] : byte)
  Class: Eq_1827
  DataType: 
  OrigDataType: 
T_1831: (in 0x0D : byte)
  Class: Eq_1831
  DataType: 
  OrigDataType: 
T_1832: (in 0x0000 : word16)
  Class: Eq_1832
  DataType: 
  OrigDataType: 
T_1833: (in si_106 + 0x0000 : word16)
  Class: Eq_1833
  DataType: 
  OrigDataType: 
T_1834: (in Mem110[ds:si_106 + 0x0000:byte] : byte)
  Class: Eq_1831
  DataType: 
  OrigDataType: 
T_1835: (in 0x0000 : word16)
  Class: Eq_1835
  DataType: 
  OrigDataType: 
T_1836: (in dx + 0x0000 : word16)
  Class: Eq_1836
  DataType: 
  OrigDataType: 
T_1837: (in Mem110[ds:dx + 0x0000:word16] : word16)
  Class: Eq_1837
  DataType: 
  OrigDataType: 
T_1838: (in 0x0001 : word16)
  Class: Eq_1838
  DataType: 
  OrigDataType: 
T_1839: (in Mem110[ds:dx + 0x0000:word16] + 0x0001 : word16)
  Class: Eq_1839
  DataType: 
  OrigDataType: 
T_1840: (in 0x0000 : word16)
  Class: Eq_1840
  DataType: 
  OrigDataType: 
T_1841: (in dx + 0x0000 : word16)
  Class: Eq_1841
  DataType: 
  OrigDataType: 
T_1842: (in Mem112[ds:dx + 0x0000:word16] : word16)
  Class: Eq_1839
  DataType: 
  OrigDataType: 
T_1843: (in 0x0002 : word16)
  Class: Eq_1843
  DataType: 
  OrigDataType: 
T_1844: (in dx + 0x0002 : word16)
  Class: Eq_1844
  DataType: 
  OrigDataType: 
T_1845: (in Mem112[ds:dx + 0x0002:word16] : word16)
  Class: Eq_1845
  DataType: 
  OrigDataType: 
T_1846: (in 0x0001 : word16)
  Class: Eq_1846
  DataType: 
  OrigDataType: 
T_1847: (in Mem112[ds:dx + 0x0002:word16] + 0x0001 : word16)
  Class: Eq_1847
  DataType: 
  OrigDataType: 
T_1848: (in 0x0002 : word16)
  Class: Eq_1848
  DataType: 
  OrigDataType: 
T_1849: (in dx + 0x0002 : word16)
  Class: Eq_1849
  DataType: 
  OrigDataType: 
T_1850: (in Mem114[ds:dx + 0x0002:word16] : word16)
  Class: Eq_1847
  DataType: 
  OrigDataType: 
T_1851: (in 0x0002 : word16)
  Class: Eq_1851
  DataType: 
  OrigDataType: 
T_1852: (in dx + 0x0002 : word16)
  Class: Eq_1852
  DataType: 
  OrigDataType: 
T_1853: (in Mem114[ds:dx + 0x0002:word16] : word16)
  Class: Eq_1853
  DataType: 
  OrigDataType: 
T_1854: (in 0x000A : word16)
  Class: Eq_1854
  DataType: 
  OrigDataType: 
T_1855: (in dx + 0x000A : word16)
  Class: Eq_1855
  DataType: 
  OrigDataType: 
T_1856: (in Mem114[ds:dx + 0x000A:word16] : word16)
  Class: Eq_1853
  DataType: 
  OrigDataType: 
T_1857: (in Mem114[ds:dx + 0x0002:word16] != Mem114[ds:dx + 0x000A:word16] : bool)
  Class: Eq_1857
  DataType: 
  OrigDataType: 
T_1858: (in fn0800_131B : ptr32)
  Class: Eq_1705
  DataType: 
  OrigDataType: 
T_1859: (in fn0800_131B(dx, ds) : word16)
  Class: Eq_1859
  DataType: 
  OrigDataType: 
T_1860: (in 0x0000 : word16)
  Class: Eq_1859
  DataType: 
  OrigDataType: 
T_1861: (in fn0800_131B(dx, ds) == 0x0000 : bool)
  Class: Eq_1861
  DataType: 
  OrigDataType: 
T_1862: (in 0xFFFF : word16)
  Class: Eq_1711
  DataType: 
  OrigDataType: 
T_1863: (in fn0800_131B : ptr32)
  Class: Eq_1705
  DataType: 
  OrigDataType: 
T_1864: (in fn0800_131B(dx, ds) : word16)
  Class: Eq_1773
  DataType: 
  OrigDataType: 
T_1865: (in 0x0000 : word16)
  Class: Eq_1773
  DataType: 
  OrigDataType: 
T_1866: (in ax_87 != 0x0000 : bool)
  Class: Eq_1866
  DataType: 
  OrigDataType: 
T_1867: (in 0x0002 : word16)
  Class: Eq_1867
  DataType: 
  OrigDataType: 
T_1868: (in dx + 0x0002 : word16)
  Class: Eq_1868
  DataType: 
  OrigDataType: 
T_1869: (in Mem81[ds:dx + 0x0002:word16] : word16)
  Class: Eq_1773
  DataType: 
  OrigDataType: 
T_1870: (in 0x000A : word16)
  Class: Eq_1870
  DataType: 
  OrigDataType: 
T_1871: (in dx + 0x000A : word16)
  Class: Eq_1871
  DataType: 
  OrigDataType: 
T_1872: (in Mem81[ds:dx + 0x000A:word16] : word16)
  Class: Eq_1773
  DataType: 
  OrigDataType: 
T_1873: (in ax_87 != Mem81[ds:dx + 0x000A:word16] : bool)
  Class: Eq_1873
  DataType: 
  OrigDataType: 
T_1874: (in 0x00 : byte)
  Class: Eq_1874
  DataType: 
  OrigDataType: 
T_1875: (in DPB(ax_87, 0x00, 8, 8) : word16)
  Class: Eq_1711
  DataType: 
  OrigDataType: 
T_1876: (in ax_8 : word16)
  Class: Eq_177
  DataType: 
  OrigDataType: 
T_1877: (in 0x0444 : word16)
  Class: Eq_1877
  DataType: 
  OrigDataType: 
T_1878: (in Mem0[ds:0x0444:word16] : word16)
  Class: Eq_177
  DataType: 
  OrigDataType: 
T_1879: (in 0x2000 : word16)
  Class: Eq_1879
  DataType: 
  OrigDataType: 
T_1880: (in 0x0386 : word16)
  Class: Eq_1880
  DataType: 
  OrigDataType: 
T_1881: (in Mem9[ds:0x0386:word16] : word16)
  Class: Eq_1879
  DataType: 
  OrigDataType: 
T_1882: (in fn0800_0064 : ptr32)
  Class: Eq_1882
  DataType: 
  OrigDataType: 
T_1883: (in signature of fn0800_0064 : void)
  Class: Eq_1882
  DataType: 
  OrigDataType: 
T_1884: (in fn0800_0064(ds) : void)
  Class: Eq_1884
  DataType: 
  OrigDataType: 
T_1885: (in fn0800_037C : ptr32)
  Class: Eq_175
  DataType: 
  OrigDataType: 
T_1886: (in fn0800_037C(ax_8) : void)
  Class: Eq_1886
  DataType: 
  OrigDataType: 
T_1887: (in CZ : byte)
  Class: Eq_1887
  DataType: 
  OrigDataType: 
T_1888: (in ds_120 : selector)
  Class: Eq_1888
  DataType: 
  OrigDataType: 
T_1889: (in fn0800_05F4 : ptr32)
  Class: Eq_1889
  DataType: 
  OrigDataType: 
T_1890: (in signature of fn0800_05F4 : void)
  Class: Eq_1889
  DataType: 
  OrigDataType: 
T_1891: (in fn0800_05F4() : selector)
  Class: Eq_1888
  DataType: 
  OrigDataType: 
T_1892: (in SCZO_99 : byte)
  Class: Eq_1892
  DataType: 
  OrigDataType: 
T_1893: (in bx_122 : word16)
  Class: Eq_1893
  DataType: 
  OrigDataType: 
T_1894: (in di : word16)
  Class: Eq_1893
  DataType: 
  OrigDataType: 
T_1895: (in bx_122 - di : word16)
  Class: Eq_1895
  DataType: 
  OrigDataType: 
T_1896: (in cond(bx_122 - di) : byte)
  Class: Eq_1892
  DataType: 
  OrigDataType: 
T_1897: (in bx_122 == di : bool)
  Class: Eq_1897
  DataType: 
  OrigDataType: 
T_1898: (in si_63 : word16)
  Class: Eq_1893
  DataType: 
  OrigDataType: 
T_1899: (in 0x0000 : word16)
  Class: Eq_1899
  DataType: 
  OrigDataType: 
T_1900: (in si_63 + 0x0000 : word16)
  Class: Eq_1900
  DataType: 
  OrigDataType: 
T_1901: (in Mem0[ds_120:si_63 + 0x0000:byte] : byte)
  Class: Eq_1901
  DataType: 
  OrigDataType: 
T_1902: (in 0x02 : byte)
  Class: Eq_1901
  DataType: 
  OrigDataType: 
T_1903: (in Mem0[ds_120:si_63 + 0x0000:byte] == 0x02 : bool)
  Class: Eq_1903
  DataType: 
  OrigDataType: 
T_1904: (in 0x0006 : word16)
  Class: Eq_1904
  DataType: 
  OrigDataType: 
T_1905: (in si_63 + 0x0006 : word16)
  Class: Eq_1893
  DataType: 
  OrigDataType: 
T_1906: (in ah_92 : byte)
  Class: Eq_1906
  DataType: 
  OrigDataType: 
T_1907: (in 0x0001 : word16)
  Class: Eq_1907
  DataType: 
  OrigDataType: 
T_1908: (in si_63 + 0x0001 : word16)
  Class: Eq_1908
  DataType: 
  OrigDataType: 
T_1909: (in Mem0[ds_120:si_63 + 0x0001:byte] : byte)
  Class: Eq_1906
  DataType: 
  OrigDataType: 
T_1910: (in ax_46 : word16)
  Class: Eq_1910
  DataType: 
  OrigDataType: 
T_1911: (in DPB(ax_46, ah_92, 8, 8) : word16)
  Class: Eq_1910
  DataType: 
  OrigDataType: 
T_1912: (in axOut : ptr16)
  Class: Eq_1912
  DataType: 
  OrigDataType: 
T_1913: (in *axOut : word16)
  Class: Eq_1910
  DataType: 
  OrigDataType: 
T_1914: (in cs : selector)
  Class: Eq_1914
  DataType: 
  OrigDataType: 
T_1915: (in cx : word16)
  Class: Eq_1915
  DataType: 
  OrigDataType: 
T_1916: (in SEQ(cs, cx) : ptr32)
  Class: Eq_1916
  DataType: 
  OrigDataType: 
T_1917: (in 0x0000 : word16)
  Class: Eq_1917
  DataType: 
  OrigDataType: 
T_1918: (in si_63 + 0x0000 : word16)
  Class: Eq_1918
  DataType: 
  OrigDataType: 
T_1919: (in Mem0[ds_120:si_63 + 0x0000:byte] : byte)
  Class: Eq_1901
  DataType: 
  OrigDataType: 
T_1920: (in Mem0[ds_120:si_63 + 0x0000:byte] >u 0x02 : bool)
  Class: Eq_1920
  DataType: 
  OrigDataType: 
T_1921: (in DPB(ax_46, ah_92, 0, 8) : word16)
  Class: Eq_1921
  DataType: 
  OrigDataType: 
T_1922: (in *axOut : word16)
  Class: Eq_1921
  DataType: 
  OrigDataType: 
T_1923: (in dh : byte)
  Class: Eq_1923
  DataType: 
  OrigDataType: 
T_1924: (in DPB(ax_46, dh, 8, 8) : word16)
  Class: Eq_1924
  DataType: 
  OrigDataType: 
T_1925: (in ax : word16)
  Class: Eq_1924
  DataType: 
  OrigDataType: 
T_1926: (in SEQ(cs, cx) : ptr32)
  Class: Eq_1926
  DataType: 
  OrigDataType: 
T_1927: (in bx_122 >u di : bool)
  Class: Eq_1927
  DataType: 
  OrigDataType: 
T_1928: (in 0x02 : byte)
  Class: Eq_1928
  DataType: 
  OrigDataType: 
T_1929: (in 0x0000 : word16)
  Class: Eq_1929
  DataType: 
  OrigDataType: 
T_1930: (in bx_122 + 0x0000 : word16)
  Class: Eq_1930
  DataType: 
  OrigDataType: 
T_1931: (in Mem127[ds_120:bx_122 + 0x0000:byte] : byte)
  Class: Eq_1928
  DataType: 
  OrigDataType: 
T_1932: (in ax_128 : word16)
  Class: Eq_1924
  DataType: 
  OrigDataType: 
T_1933: (in 0x0002 : word16)
  Class: Eq_1933
  DataType: 
  OrigDataType: 
T_1934: (in bx_122 + 0x0002 : word16)
  Class: Eq_1934
  DataType: 
  OrigDataType: 
T_1935: (in Mem0[ds_120:bx_122 + 0x0002:word16] : word16)
  Class: Eq_1924
  DataType: 
  OrigDataType: 
T_1936: (in 0x0000 : word16)
  Class: Eq_1936
  DataType: 
  OrigDataType: 
T_1937: (in bx_122 + 0x0000 : word16)
  Class: Eq_1937
  DataType: 
  OrigDataType: 
T_1938: (in Mem0[ds_120:bx_122 + 0x0000:byte] : byte)
  Class: Eq_1938
  DataType: 
  OrigDataType: 
T_1939: (in 0x01 : byte)
  Class: Eq_1938
  DataType: 
  OrigDataType: 
T_1940: (in Mem0[ds_120:bx_122 + 0x0000:byte] != 0x01 : bool)
  Class: Eq_1940
  DataType: 
  OrigDataType: 
T_1941: (in 0x0000 : word16)
  Class: Eq_1924
  DataType: 
  OrigDataType: 
T_1942: (in ax_128 == 0x0000 : bool)
  Class: Eq_1942
  DataType: 
  OrigDataType: 
T_1943: (in 0x0004 : word16)
  Class: Eq_1943
  DataType: 
  OrigDataType: 
T_1944: (in bx_122 + 0x0004 : word16)
  Class: Eq_1944
  DataType: 
  OrigDataType: 
T_1945: (in Mem0[ds_120:bx_122 + 0x0004:word16] : word16)
  Class: Eq_1945
  DataType: 
  OrigDataType: 
T_1946: (in ax_128 | Mem0[ds_120:bx_122 + 0x0004:word16] : word16)
  Class: Eq_1924
  DataType: 
  OrigDataType: 
T_1947: (in 0x0000 : word16)
  Class: Eq_1924
  DataType: 
  OrigDataType: 
T_1948: (in ax == 0x0000 : bool)
  Class: Eq_1948
  DataType: 
  OrigDataType: 
T_1949: (in dx : word16)
  Class: Eq_1949
  DataType: 
  OrigDataType: 
T_1950: (in (byte) dx : byte)
  Class: Eq_1950
  DataType: 
  OrigDataType: 
T_1951: (in dl : byte)
  Class: Eq_1950
  DataType: 
  OrigDataType: 
T_1952: (in SLICE(dx, byte, 8) : byte)
  Class: Eq_1923
  DataType: 
  OrigDataType: 
T_1953: (in 0x0002 : word16)
  Class: Eq_1953
  DataType: 
  OrigDataType: 
T_1954: (in bx_122 + 0x0002 : word16)
  Class: Eq_1954
  DataType: 
  OrigDataType: 
T_1955: (in Mem0[ds_120:bx_122 + 0x0002:word16] : word16)
  Class: Eq_1955
  DataType: 
  OrigDataType: 
T_1956: (in SEQ(cs, Mem0[ds_120:bx_122 + 0x0002:word16]) : ptr32)
  Class: Eq_1956
  DataType: 
  OrigDataType: 
T_1957: (in DPB(ax, dl, 0, 8) : word16)
  Class: Eq_1957
  DataType: 
  OrigDataType: 
T_1958: (in *axOut : word16)
  Class: Eq_1957
  DataType: 
  OrigDataType: 
T_1959: (in si : word16)
  Class: Eq_1893
  DataType: 
  OrigDataType: 
T_1960: (in si_63 >=u di : bool)
  Class: Eq_1960
  DataType: 
  OrigDataType: 
T_1961: (in Z : bool)
  Class: Eq_1961
  DataType: 
  OrigDataType: 
T_1962: (in ax_20 : word16)
  Class: Eq_1962
  DataType: 
  OrigDataType: 
T_1963: (in fn0800_09C2 : ptr32)
  Class: Eq_1963
  DataType: 
  OrigDataType: 
T_1964: (in signature of fn0800_09C2 : void)
  Class: Eq_1963
  DataType: 
  OrigDataType: 
T_1965: (in 0x03C8 : word16)
  Class: Eq_1893
  DataType: 
  OrigDataType: 
T_1966: (in 0x03E6 : word16)
  Class: Eq_1893
  DataType: 
  OrigDataType: 
T_1967: (in out ax_20 : ptr16)
  Class: Eq_1912
  DataType: 
  OrigDataType: 
T_1968: (in fn0800_09C2(0x03C8, 0x03E6, out ax_20) : byte)
  Class: Eq_1968
  DataType: 
  OrigDataType: 
T_1969: (in CZ : byte)
  Class: Eq_1969
  DataType: 
  OrigDataType: 
T_1970: (in dx_19 : word16)
  Class: Eq_1970
  DataType: 
  OrigDataType: 
T_1971: (in dx : word16)
  Class: Eq_1971
  DataType: 
  OrigDataType: 
T_1972: (in al : byte)
  Class: Eq_1972
  DataType: 
  OrigDataType: 
T_1973: (in DPB(dx, al, 0, 8) : word16)
  Class: Eq_1973
  DataType: 
  OrigDataType: 
T_1974: (in *dxOut : word16)
  Class: Eq_1973
  DataType: 
  OrigDataType: 
T_1975: (in ax_20 : word16)
  Class: Eq_1975
  DataType: 
  OrigDataType: 
T_1976: (in fn0800_09C2 : ptr32)
  Class: Eq_1963
  DataType: 
  OrigDataType: 
T_1977: (in 0x03E6 : word16)
  Class: Eq_1893
  DataType: 
  OrigDataType: 
T_1978: (in 0x03EC : word16)
  Class: Eq_1893
  DataType: 
  OrigDataType: 
T_1979: (in out ax_20 : ptr16)
  Class: Eq_1912
  DataType: 
  OrigDataType: 
T_1980: (in fn0800_09C2(0x03E6, 0x03EC, out ax_20) : byte)
  Class: Eq_1980
  DataType: 
  OrigDataType: 
T_1981: (in CZ : byte)
  Class: Eq_1981
  DataType: 
  OrigDataType: 
T_1982: (in ax_13 : word16)
  Class: Eq_1982
  DataType: 
  OrigDataType: 
T_1983: (in fn0800_13DB : ptr32)
  Class: Eq_1983
  DataType: 
  OrigDataType: 
T_1984: (in signature of fn0800_13DB : void)
  Class: Eq_1983
  DataType: 
  OrigDataType: 
T_1985: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_1986: (in fn0800_13DB(ds) : word16)
  Class: Eq_1982
  DataType: 
  OrigDataType: 
T_1987: (in *axOut : word16)
  Class: Eq_1982
  DataType: 
  OrigDataType: 
T_1988: (in 0x0000 : word16)
  Class: Eq_1982
  DataType: 
  OrigDataType: 
T_1989: (in ax_13 != 0x0000 : bool)
  Class: Eq_1989
  DataType: 
  OrigDataType: 
T_1990: (in false : bool)
  Class: Eq_1990
  DataType: 
  OrigDataType: 
T_1991: (in fn0800_05BB : ptr32)
  Class: Eq_1022
  DataType: 
  OrigDataType: 
T_1992: (in fn0800_05BB(ax, dx, bx) : void)
  Class: Eq_1992
  DataType: 
  OrigDataType: 
T_1993: (in ax_25 : word16)
  Class: Eq_1993
  DataType: 
  OrigDataType: 
T_1994: (in *axOut : word16)
  Class: Eq_786
  DataType: 
  OrigDataType: 
T_1995: (in ax : word16)
  Class: Eq_1995
  DataType: 
  OrigDataType: 
T_1996: (in *dxOut : word16)
  Class: Eq_1191
  DataType: 
  OrigDataType: 
T_1997: (in 0x0000 : word16)
  Class: Eq_1191
  DataType: 
  OrigDataType: 
T_1998: (in dx != 0x0000 : bool)
  Class: Eq_1998
  DataType: 
  OrigDataType: 
T_1999: (in 0x0000 : word16)
  Class: Eq_1191
  DataType: 
  OrigDataType: 
T_2000: (in dx == 0x0000 : bool)
  Class: Eq_2000
  DataType: 
  OrigDataType: 
T_2001: (in 0x0000 : word16)
  Class: Eq_1995
  DataType: 
  OrigDataType: 
T_2002: (in dx_33 : word16)
  Class: Eq_2002
  DataType: 
  OrigDataType: 
T_2003: (in fn0800_0CE0 : ptr32)
  Class: Eq_2003
  DataType: 
  OrigDataType: 
T_2004: (in signature of fn0800_0CE0 : void)
  Class: Eq_2003
  DataType: 
  OrigDataType: 
T_2005: (in al : byte)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_2006: (in dh : byte)
  Class: Eq_2006
  DataType: 
  OrigDataType: 
T_2007: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2008: (in dxOut : ptr16)
  Class: Eq_2008
  DataType: 
  OrigDataType: 
T_2009: (in dh : byte)
  Class: Eq_2006
  DataType: 
  OrigDataType: 
T_2010: (in out dx_33 : ptr16)
  Class: Eq_2008
  DataType: 
  OrigDataType: 
T_2011: (in fn0800_0CE0(al, dh, ds, out dx_33) : word16)
  Class: Eq_2011
  DataType: 
  OrigDataType: 
T_2012: (in ax : word16)
  Class: Eq_2012
  DataType: 
  OrigDataType: 
T_2013: (in ax_34 : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_2014: (in bx_20 : word16)
  Class: Eq_2014
  DataType: 
  OrigDataType: 
T_2015: (in dx_21 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2016: (in fn0800_079D : ptr32)
  Class: Eq_1575
  DataType: 
  OrigDataType: 
T_2017: (in 0x00 : byte)
  Class: Eq_2017
  DataType: 
  OrigDataType: 
T_2018: (in DPB(ax, 0x00, 8, 8) : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_2019: (in dx : word16)
  Class: Eq_2019
  DataType: 
  OrigDataType: 
T_2020: (in DPB(dx, al, 0, 8) : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2021: (in out bx_20 : ptr16)
  Class: Eq_1577
  DataType: 
  OrigDataType: 
T_2022: (in fn0800_079D(DPB(ax, 0x00, 8, 8), DPB(dx, al, 0, 8), ds, out bx_20) : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2023: (in 0x0100 : word16)
  Class: Eq_2014
  DataType: 
  OrigDataType: 
T_2024: (in bx_20 >=u 0x0100 : bool)
  Class: Eq_2024
  DataType: 
  OrigDataType: 
T_2025: (in 0x00 : byte)
  Class: Eq_2025
  DataType: 
  OrigDataType: 
T_2026: (in DPB(ax, 0x00, 8, 8) : word16)
  Class: Eq_2026
  DataType: 
  OrigDataType: 
T_2027: (in 0x0003 : word16)
  Class: Eq_2026
  DataType: 
  OrigDataType: 
T_2028: (in DPB(ax, 0x00, 8, 8) < 0x0003 : bool)
  Class: Eq_2028
  DataType: 
  OrigDataType: 
T_2029: (in 0x00 : byte)
  Class: Eq_2029
  DataType: 
  OrigDataType: 
T_2030: (in DPB(bx_20, 0x00, 8, 8) : word16)
  Class: Eq_2014
  DataType: 
  OrigDataType: 
T_2031: (in 0x0050 : word16)
  Class: Eq_2014
  DataType: 
  OrigDataType: 
T_2032: (in bx_20 != 0x0050 : bool)
  Class: Eq_2032
  DataType: 
  OrigDataType: 
T_2033: (in 0x0E : byte)
  Class: Eq_2033
  DataType: 
  OrigDataType: 
T_2034: (in DPB(dx_21, 0x0E, 0, 8) : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2035: (in 0x00 : byte)
  Class: Eq_2035
  DataType: 
  OrigDataType: 
T_2036: (in DPB(ax, 0x00, 8, 8) : word16)
  Class: Eq_2036
  DataType: 
  OrigDataType: 
T_2037: (in 0x0013 : word16)
  Class: Eq_2036
  DataType: 
  OrigDataType: 
T_2038: (in DPB(ax, 0x00, 8, 8) <= 0x0013 : bool)
  Class: Eq_2038
  DataType: 
  OrigDataType: 
T_2039: (in 0x13 : byte)
  Class: Eq_2039
  DataType: 
  OrigDataType: 
T_2040: (in DPB(dx_21, 0x13, 0, 8) : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2041: (in 0x00 : byte)
  Class: Eq_2041
  DataType: 
  OrigDataType: 
T_2042: (in DPB(bx_20, 0x00, 8, 8) : word16)
  Class: Eq_2042
  DataType: 
  OrigDataType: 
T_2043: (in 0x036C : word16)
  Class: Eq_2043
  DataType: 
  OrigDataType: 
T_2044: (in DPB(bx_20, 0x00, 8, 8) + 0x036C : word16)
  Class: Eq_2044
  DataType: 
  OrigDataType: 
T_2045: (in Mem0[ds:DPB(bx_20, 0x00, 8, 8) + 0x036C:byte] : byte)
  Class: Eq_2045
  DataType: 
  OrigDataType: 
T_2046: (in (int16) Mem0[ds:DPB(bx_20, 0x00, 8, 8) + 0x036C:byte] : int16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_2047: (in bx_36 : word16)
  Class: Eq_2047
  DataType: 
  OrigDataType: 
T_2048: (in fn0800_0780 : ptr32)
  Class: Eq_593
  DataType: 
  OrigDataType: 
T_2049: (in out bx_36 : ptr16)
  Class: Eq_598
  DataType: 
  OrigDataType: 
T_2050: (in fn0800_0780(ax_34, dx_21, ds, out bx_36) : word16)
  Class: Eq_2050
  DataType: 
  OrigDataType: 
T_2051: (in dx_44 : word16)
  Class: Eq_2051
  DataType: 
  OrigDataType: 
T_2052: (in ss : selector)
  Class: Eq_2052
  DataType: 
  OrigDataType: 
T_2053: (in fp : ptr16)
  Class: Eq_2053
  DataType: 
  OrigDataType: 
T_2054: (in 0x0008 : word16)
  Class: Eq_2054
  DataType: 
  OrigDataType: 
T_2055: (in fp - 0x0008 : word16)
  Class: Eq_2055
  DataType: 
  OrigDataType: 
T_2056: (in Mem0[ss:fp - 0x0008:word16] : word16)
  Class: Eq_2056
  DataType: 
  OrigDataType: 
T_2057: (in *dxOut : word16)
  Class: Eq_2056
  DataType: 
  OrigDataType: 
T_2058: (in 0xFFFF : word16)
  Class: Eq_2058
  DataType: 
  OrigDataType: 
T_2059: (in 0x0022 : word16)
  Class: Eq_2014
  DataType: 
  OrigDataType: 
T_2060: (in bx_20 < 0x0022 : bool)
  Class: Eq_2060
  DataType: 
  OrigDataType: 
T_2061: (in 0x13 : byte)
  Class: Eq_2061
  DataType: 
  OrigDataType: 
T_2062: (in DPB(dx_21, 0x13, 0, 8) : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2063: (in 0x0020 : word16)
  Class: Eq_2014
  DataType: 
  OrigDataType: 
T_2064: (in bx_20 < 0x0020 : bool)
  Class: Eq_2064
  DataType: 
  OrigDataType: 
T_2065: (in 0x05 : byte)
  Class: Eq_2065
  DataType: 
  OrigDataType: 
T_2066: (in DPB(dx_21, 0x05, 0, 8) : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2067: (in 0x00 : byte)
  Class: Eq_2067
  DataType: 
  OrigDataType: 
T_2068: (in DPB(ax, 0x00, 8, 8) : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_2069: (in ax_105 : word16)
  Class: Eq_2069
  DataType: 
  OrigDataType: 
T_2070: (in cx_109 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2071: (in 0x0000 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2072: (in ax == 0x0000 : bool)
  Class: Eq_2072
  DataType: 
  OrigDataType: 
T_2073: (in 0x0000 : word16)
  Class: Eq_2069
  DataType: 
  OrigDataType: 
T_2074: (in 0xFFEA : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2075: (in ax <=u 0xFFEA : bool)
  Class: Eq_2075
  DataType: 
  OrigDataType: 
T_2076: (in bLoc10_114 : byte)
  Class: Eq_2076
  DataType: 
  OrigDataType: 
T_2077: (in 0x00 : byte)
  Class: Eq_2076
  DataType: 
  OrigDataType: 
T_2078: (in dx_101 : word16)
  Class: Eq_2069
  DataType: 
  OrigDataType: 
T_2079: (in 0x0000 : word16)
  Class: Eq_2069
  DataType: 
  OrigDataType: 
T_2080: (in di_69 : word16)
  Class: Eq_2080
  DataType: 
  OrigDataType: 
T_2081: (in 0x0001 : word16)
  Class: Eq_2081
  DataType: 
  OrigDataType: 
T_2082: (in ax + 0x0001 : word16)
  Class: Eq_2082
  DataType: 
  OrigDataType: 
T_2083: (in 0xFFFE : word16)
  Class: Eq_2083
  DataType: 
  OrigDataType: 
T_2084: (in ax + 0x0001 & 0xFFFE : word16)
  Class: Eq_2080
  DataType: 
  OrigDataType: 
T_2085: (in cl_52 : byte)
  Class: Eq_2085
  DataType: 
  OrigDataType: 
T_2086: (in cx : word16)
  Class: Eq_2086
  DataType: 
  OrigDataType: 
T_2087: (in (byte) cx : byte)
  Class: Eq_2087
  DataType: 
  OrigDataType: 
T_2088: (in *clOut : byte)
  Class: Eq_2087
  DataType: 
  OrigDataType: 
T_2089: (in si_135 : word16)
  Class: Eq_2089
  DataType: 
  OrigDataType: 
T_2090: (in ax_147 : word16)
  Class: Eq_2080
  DataType: 
  OrigDataType: 
T_2091: (in 0x0384 : word16)
  Class: Eq_2091
  DataType: 
  OrigDataType: 
T_2092: (in Mem0[ds:0x0384:word16] : word16)
  Class: Eq_2080
  DataType: 
  OrigDataType: 
T_2093: (in ax_147 <=u Mem0[ds:0x0384:word16] : bool)
  Class: Eq_2093
  DataType: 
  OrigDataType: 
T_2094: (in 0x0006 : word16)
  Class: Eq_2080
  DataType: 
  OrigDataType: 
T_2095: (in 0x0000 : word16)
  Class: Eq_2095
  DataType: 
  OrigDataType: 
T_2096: (in 0x0384 : word16)
  Class: Eq_2096
  DataType: 
  OrigDataType: 
T_2097: (in Mem146[ds:0x0384:word16] : word16)
  Class: Eq_2095
  DataType: 
  OrigDataType: 
T_2098: (in 0x0382 : word16)
  Class: Eq_2098
  DataType: 
  OrigDataType: 
T_2099: (in Mem0[ds:0x0382:word16] : word16)
  Class: Eq_2089
  DataType: 
  OrigDataType: 
T_2100: (in 0x0000 : word16)
  Class: Eq_2089
  DataType: 
  OrigDataType: 
T_2101: (in si_135 != 0x0000 : bool)
  Class: Eq_2101
  DataType: 
  OrigDataType: 
T_2102: (in 0x0000 : word16)
  Class: Eq_2089
  DataType: 
  OrigDataType: 
T_2103: (in si_135 != 0x0000 : bool)
  Class: Eq_2103
  DataType: 
  OrigDataType: 
T_2104: (in 0x0384 : word16)
  Class: Eq_2104
  DataType: 
  OrigDataType: 
T_2105: (in Mem145[ds:0x0384:word16] : word16)
  Class: Eq_2089
  DataType: 
  OrigDataType: 
T_2106: (in 0x0380 : word16)
  Class: Eq_2106
  DataType: 
  OrigDataType: 
T_2107: (in Mem0[ds:0x0380:word16] : word16)
  Class: Eq_2089
  DataType: 
  OrigDataType: 
T_2108: (in 0x0382 : word16)
  Class: Eq_2108
  DataType: 
  OrigDataType: 
T_2109: (in Mem126[ds:0x0382:word16] : word16)
  Class: Eq_2089
  DataType: 
  OrigDataType: 
T_2110: (in ax_127 : word16)
  Class: Eq_2069
  DataType: 
  OrigDataType: 
T_2111: (in fn0800_144E : ptr32)
  Class: Eq_2111
  DataType: 
  OrigDataType: 
T_2112: (in signature of fn0800_144E : void)
  Class: Eq_2111
  DataType: 
  OrigDataType: 
T_2113: (in ax : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2114: (in dx : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2115: (in bx : word16)
  Class: Eq_2089
  DataType: 
  OrigDataType: 
T_2116: (in fn0800_144E(cx_109, ds, si_135) : word16)
  Class: Eq_2069
  DataType: 
  OrigDataType: 
T_2117: (in 0x0000 : word16)
  Class: Eq_2069
  DataType: 
  OrigDataType: 
T_2118: (in ax_127 != 0x0000 : bool)
  Class: Eq_2118
  DataType: 
  OrigDataType: 
T_2119: (in 0x00 : byte)
  Class: Eq_2076
  DataType: 
  OrigDataType: 
T_2120: (in bLoc10_114 != 0x00 : bool)
  Class: Eq_2120
  DataType: 
  OrigDataType: 
T_2121: (in fn0800_179B : ptr32)
  Class: Eq_2121
  DataType: 
  OrigDataType: 
T_2122: (in signature of fn0800_179B : void)
  Class: Eq_2121
  DataType: 
  OrigDataType: 
T_2123: (in fn0800_179B() : void)
  Class: Eq_2123
  DataType: 
  OrigDataType: 
T_2124: (in 0x0000 : word16)
  Class: Eq_2124
  DataType: 
  OrigDataType: 
T_2125: (in 0x0000 : word16)
  Class: Eq_2124
  DataType: 
  OrigDataType: 
T_2126: (in 0x0000 == 0x0000 : bool)
  Class: Eq_2126
  DataType: 
  OrigDataType: 
T_2127: (in fn0800_1689 : ptr32)
  Class: Eq_2127
  DataType: 
  OrigDataType: 
T_2128: (in signature of fn0800_1689 : void)
  Class: Eq_2127
  DataType: 
  OrigDataType: 
T_2129: (in ax : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2130: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2131: (in cxOut : ptr16)
  Class: Eq_2131
  DataType: 
  OrigDataType: 
T_2132: (in dxOut : ptr16)
  Class: Eq_2132
  DataType: 
  OrigDataType: 
T_2133: (in out cx_109 : ptr16)
  Class: Eq_2131
  DataType: 
  OrigDataType: 
T_2134: (in out dx_101 : ptr16)
  Class: Eq_2132
  DataType: 
  OrigDataType: 
T_2135: (in fn0800_1689(cx_109, ds, out cx_109, out dx_101) : word16)
  Class: Eq_2135
  DataType: 
  OrigDataType: 
T_2136: (in 0x0000 : word16)
  Class: Eq_2135
  DataType: 
  OrigDataType: 
T_2137: (in fn0800_1689(cx_109, ds, out cx_109, out dx_101) != 0x0000 : bool)
  Class: Eq_2137
  DataType: 
  OrigDataType: 
T_2138: (in 0x01 : byte)
  Class: Eq_2076
  DataType: 
  OrigDataType: 
T_2139: (in 0x00 : byte)
  Class: Eq_2139
  DataType: 
  OrigDataType: 
T_2140: (in 0x044C : word16)
  Class: Eq_2140
  DataType: 
  OrigDataType: 
T_2141: (in Mem104[ds:0x044C:byte] : byte)
  Class: Eq_2139
  DataType: 
  OrigDataType: 
T_2142: (in 0x00 : byte)
  Class: Eq_2076
  DataType: 
  OrigDataType: 
T_2143: (in 0x0006 : word16)
  Class: Eq_2080
  DataType: 
  OrigDataType: 
T_2144: (in di_69 >=u 0x0006 : bool)
  Class: Eq_2144
  DataType: 
  OrigDataType: 
T_2145: (in ax_132 : word16)
  Class: Eq_2145
  DataType: 
  OrigDataType: 
T_2146: (in 0x000A : word16)
  Class: Eq_2146
  DataType: 
  OrigDataType: 
T_2147: (in si_135 + 0x000A : word16)
  Class: Eq_2147
  DataType: 
  OrigDataType: 
T_2148: (in Mem126[ds:si_135 + 0x000A:word16] : word16)
  Class: Eq_2145
  DataType: 
  OrigDataType: 
T_2149: (in 0x0384 : word16)
  Class: Eq_2149
  DataType: 
  OrigDataType: 
T_2150: (in Mem126[ds:0x0384:word16] : word16)
  Class: Eq_2145
  DataType: 
  OrigDataType: 
T_2151: (in ax_132 <=u Mem126[ds:0x0384:word16] : bool)
  Class: Eq_2151
  DataType: 
  OrigDataType: 
T_2152: (in 0x0004 : word16)
  Class: Eq_2152
  DataType: 
  OrigDataType: 
T_2153: (in si_135 + 0x0004 : word16)
  Class: Eq_2153
  DataType: 
  OrigDataType: 
T_2154: (in Mem126[ds:si_135 + 0x0004:word16] : word16)
  Class: Eq_2089
  DataType: 
  OrigDataType: 
T_2155: (in 0x0384 : word16)
  Class: Eq_2155
  DataType: 
  OrigDataType: 
T_2156: (in Mem136[ds:0x0384:word16] : word16)
  Class: Eq_2145
  DataType: 
  OrigDataType: 
T_2157: (in si_15 : word16)
  Class: Eq_1265
  DataType: 
  OrigDataType: 
T_2158: (in 0x0000 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2159: (in bx == 0x0000 : bool)
  Class: Eq_2159
  DataType: 
  OrigDataType: 
T_2160: (in cx_42 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2161: (in di_43 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2162: (in al_51 : byte)
  Class: Eq_2162
  DataType: 
  OrigDataType: 
T_2163: (in 0x0000 : word16)
  Class: Eq_2163
  DataType: 
  OrigDataType: 
T_2164: (in si_15 + 0x0000 : word16)
  Class: Eq_2164
  DataType: 
  OrigDataType: 
T_2165: (in Mem0[ds:si_15 + 0x0000:byte] : byte)
  Class: Eq_2162
  DataType: 
  OrigDataType: 
T_2166: (in 0x0000 : word16)
  Class: Eq_2166
  DataType: 
  OrigDataType: 
T_2167: (in di_43 + 0x0000 : word16)
  Class: Eq_2167
  DataType: 
  OrigDataType: 
T_2168: (in Mem53[ds:di_43 + 0x0000:byte] : byte)
  Class: Eq_2162
  DataType: 
  OrigDataType: 
T_2169: (in 0x0001 : word16)
  Class: Eq_2169
  DataType: 
  OrigDataType: 
T_2170: (in si_15 + 0x0001 : word16)
  Class: Eq_1265
  DataType: 
  OrigDataType: 
T_2171: (in 0x0001 : word16)
  Class: Eq_2171
  DataType: 
  OrigDataType: 
T_2172: (in di_43 + 0x0001 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2173: (in 0x0001 : word16)
  Class: Eq_2173
  DataType: 
  OrigDataType: 
T_2174: (in cx_42 - 0x0001 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2175: (in 0x00 : byte)
  Class: Eq_2162
  DataType: 
  OrigDataType: 
T_2176: (in al_51 != 0x00 : bool)
  Class: Eq_2176
  DataType: 
  OrigDataType: 
T_2177: (in 0x0000 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2178: (in cx_42 != 0x0000 : bool)
  Class: Eq_2178
  DataType: 
  OrigDataType: 
T_2179: (in al_51 != 0x00 && cx_42 != 0x0000 : bool)
  Class: Eq_2179
  DataType: 
  OrigDataType: 
T_2180: (in cx_60 : word16)
  Class: Eq_2180
  DataType: 
  OrigDataType: 
T_2181: (in 0x0001 : word16)
  Class: Eq_2181
  DataType: 
  OrigDataType: 
T_2182: (in cx_42 >>u 0x0001 : word16)
  Class: Eq_2180
  DataType: 
  OrigDataType: 
T_2183: (in cx_70 : word16)
  Class: Eq_2183
  DataType: 
  OrigDataType: 
T_2184: (in 0x0002 : word16)
  Class: Eq_2184
  DataType: 
  OrigDataType: 
T_2185: (in cx_60 * 0x0002 : word16)
  Class: Eq_2185
  DataType: 
  OrigDataType: 
T_2186: (in cx_42 >>u 0x0001 : word16)
  Class: Eq_2186
  DataType: 
  OrigDataType: 
T_2187: (in 0x0000 : word16)
  Class: Eq_2186
  DataType: 
  OrigDataType: 
T_2188: (in cx_42 >>u 0x0001 <u 0x0000 : bool)
  Class: Eq_2188
  DataType: 
  OrigDataType: 
T_2189: (in cx_60 * 0x0002 + (cx_42 >>u 0x0001 <u 0x0000) : word16)
  Class: Eq_2183
  DataType: 
  OrigDataType: 
T_2190: (in 0x0000 : word16)
  Class: Eq_2190
  DataType: 
  OrigDataType: 
T_2191: (in 0x0000 : word16)
  Class: Eq_2191
  DataType: 
  OrigDataType: 
T_2192: (in di_43 + 0x0000 : word16)
  Class: Eq_2192
  DataType: 
  OrigDataType: 
T_2193: (in Mem67[ds:di_43 + 0x0000:word16] : word16)
  Class: Eq_2190
  DataType: 
  OrigDataType: 
T_2194: (in 0x0002 : word16)
  Class: Eq_2194
  DataType: 
  OrigDataType: 
T_2195: (in di_43 + 0x0002 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2196: (in 0x0001 : word16)
  Class: Eq_2196
  DataType: 
  OrigDataType: 
T_2197: (in cx_60 - 0x0001 : word16)
  Class: Eq_2180
  DataType: 
  OrigDataType: 
T_2198: (in 0x0000 : word16)
  Class: Eq_2180
  DataType: 
  OrigDataType: 
T_2199: (in cx_60 == 0x0000 : bool)
  Class: Eq_2199
  DataType: 
  OrigDataType: 
T_2200: (in 0x00 : byte)
  Class: Eq_2200
  DataType: 
  OrigDataType: 
T_2201: (in 0x0000 : word16)
  Class: Eq_2201
  DataType: 
  OrigDataType: 
T_2202: (in di_43 + 0x0000 : word16)
  Class: Eq_2202
  DataType: 
  OrigDataType: 
T_2203: (in Mem74[ds:di_43 + 0x0000:byte] : byte)
  Class: Eq_2200
  DataType: 
  OrigDataType: 
T_2204: (in 0x0001 : word16)
  Class: Eq_2204
  DataType: 
  OrigDataType: 
T_2205: (in di_43 + 0x0001 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2206: (in 0x0001 : word16)
  Class: Eq_2206
  DataType: 
  OrigDataType: 
T_2207: (in cx_70 - 0x0001 : word16)
  Class: Eq_2183
  DataType: 
  OrigDataType: 
T_2208: (in 0x0000 : word16)
  Class: Eq_2183
  DataType: 
  OrigDataType: 
T_2209: (in cx_70 == 0x0000 : bool)
  Class: Eq_2209
  DataType: 
  OrigDataType: 
T_2210: (in cx_12 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2211: (in dx_13 : word16)
  Class: Eq_2211
  DataType: 
  OrigDataType: 
T_2212: (in bx_14 : word16)
  Class: Eq_2212
  DataType: 
  OrigDataType: 
T_2213: (in bp_15 : word16)
  Class: Eq_2213
  DataType: 
  OrigDataType: 
T_2214: (in si_16 : word16)
  Class: Eq_2214
  DataType: 
  OrigDataType: 
T_2215: (in di_17 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2216: (in es_18 : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2217: (in fn0800_17A3 : ptr32)
  Class: Eq_2217
  DataType: 
  OrigDataType: 
T_2218: (in signature of fn0800_17A3 : void)
  Class: Eq_2217
  DataType: 
  OrigDataType: 
T_2219: (in ax : word16)
  Class: Eq_2219
  DataType: 
  OrigDataType: 
T_2220: (in cx : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2221: (in bp : word16)
  Class: Eq_1446
  DataType: 
  OrigDataType: 
T_2222: (in si : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2223: (in di : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2224: (in es : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2225: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2226: (in cxOut : ptr16)
  Class: Eq_2226
  DataType: 
  OrigDataType: 
T_2227: (in dxOut : ptr16)
  Class: Eq_2227
  DataType: 
  OrigDataType: 
T_2228: (in bxOut : ptr16)
  Class: Eq_2228
  DataType: 
  OrigDataType: 
T_2229: (in bpOut : ptr16)
  Class: Eq_2229
  DataType: 
  OrigDataType: 
T_2230: (in siOut : ptr16)
  Class: Eq_2230
  DataType: 
  OrigDataType: 
T_2231: (in diOut : ptr16)
  Class: Eq_2231
  DataType: 
  OrigDataType: 
T_2232: (in esOut : ptr16)
  Class: Eq_2232
  DataType: 
  OrigDataType: 
T_2233: (in 0x0116 : word16)
  Class: Eq_2219
  DataType: 
  OrigDataType: 
T_2234: (in out cx_12 : ptr16)
  Class: Eq_2226
  DataType: 
  OrigDataType: 
T_2235: (in out dx_13 : ptr16)
  Class: Eq_2227
  DataType: 
  OrigDataType: 
T_2236: (in out bx_14 : ptr16)
  Class: Eq_2228
  DataType: 
  OrigDataType: 
T_2237: (in out bp_15 : ptr16)
  Class: Eq_2229
  DataType: 
  OrigDataType: 
T_2238: (in out si_16 : ptr16)
  Class: Eq_2230
  DataType: 
  OrigDataType: 
T_2239: (in out di_17 : ptr16)
  Class: Eq_2231
  DataType: 
  OrigDataType: 
T_2240: (in out es_18 : ptr16)
  Class: Eq_2232
  DataType: 
  OrigDataType: 
T_2241: (in fn0800_17A3(0x0116, cx, bp, si, di, es, ds, out cx_12, out dx_13, out bx_14, out bp_15, out si_16, out di_17, out es_18) : word16)
  Class: Eq_2241
  DataType: 
  OrigDataType: 
T_2242: (in ax_22 : word16)
  Class: Eq_1265
  DataType: 
  OrigDataType: 
T_2243: (in ss : selector)
  Class: Eq_2243
  DataType: 
  OrigDataType: 
T_2244: (in fp : ptr16)
  Class: Eq_2244
  DataType: 
  OrigDataType: 
T_2245: (in 0x0002 : word16)
  Class: Eq_2245
  DataType: 
  OrigDataType: 
T_2246: (in fp - 0x0002 : word16)
  Class: Eq_2246
  DataType: 
  OrigDataType: 
T_2247: (in Mem0[ss:fp - 0x0002:word16] : word16)
  Class: Eq_1265
  DataType: 
  OrigDataType: 
T_2248: (in 0x0002 : word16)
  Class: Eq_2248
  DataType: 
  OrigDataType: 
T_2249: (in fp - 0x0002 : word16)
  Class: Eq_2249
  DataType: 
  OrigDataType: 
T_2250: (in Mem25[ss:fp - 0x0002:word16] : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2251: (in 0x0004 : word16)
  Class: Eq_2251
  DataType: 
  OrigDataType: 
T_2252: (in fp - 0x0004 : word16)
  Class: Eq_2252
  DataType: 
  OrigDataType: 
T_2253: (in Mem27[ss:fp - 0x0004:word16] : word16)
  Class: Eq_2214
  DataType: 
  OrigDataType: 
T_2254: (in 0x0006 : word16)
  Class: Eq_2254
  DataType: 
  OrigDataType: 
T_2255: (in fp - 0x0006 : word16)
  Class: Eq_2255
  DataType: 
  OrigDataType: 
T_2256: (in Mem29[ss:fp - 0x0006:word16] : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2257: (in 0x0008 : word16)
  Class: Eq_2257
  DataType: 
  OrigDataType: 
T_2258: (in fp - 0x0008 : word16)
  Class: Eq_2258
  DataType: 
  OrigDataType: 
T_2259: (in Mem31[ss:fp - 0x0008:word16] : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2260: (in 0x000A : word16)
  Class: Eq_2260
  DataType: 
  OrigDataType: 
T_2261: (in fp - 0x000A : word16)
  Class: Eq_2261
  DataType: 
  OrigDataType: 
T_2262: (in Mem33[ss:fp - 0x000A:word16] : word16)
  Class: Eq_2213
  DataType: 
  OrigDataType: 
T_2263: (in 0x0102 : word16)
  Class: Eq_2263
  DataType: 
  OrigDataType: 
T_2264: (in fp - 0x0102 : word16)
  Class: Eq_2264
  DataType: 
  OrigDataType: 
T_2265: (in Mem37[ss:fp - 0x0102:word16] : word16)
  Class: Eq_1265
  DataType: 
  OrigDataType: 
T_2266: (in 0x0104 : word16)
  Class: Eq_2266
  DataType: 
  OrigDataType: 
T_2267: (in fp - 0x0104 : word16)
  Class: Eq_2267
  DataType: 
  OrigDataType: 
T_2268: (in Mem39[ss:fp - 0x0104:word16] : word16)
  Class: Eq_2211
  DataType: 
  OrigDataType: 
T_2269: (in 0x0106 : word16)
  Class: Eq_2269
  DataType: 
  OrigDataType: 
T_2270: (in fp - 0x0106 : word16)
  Class: Eq_2270
  DataType: 
  OrigDataType: 
T_2271: (in Mem41[ss:fp - 0x0106:word16] : word16)
  Class: Eq_2212
  DataType: 
  OrigDataType: 
T_2272: (in fn0800_0DE6 : ptr32)
  Class: Eq_1262
  DataType: 
  OrigDataType: 
T_2273: (in 0x0080 : word16)
  Class: Eq_2273
  DataType: 
  OrigDataType: 
T_2274: (in fp - 0x0080 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2275: (in 0x004B : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2276: (in fn0800_0DE6(fp - 0x0080, ax_22, 0x004B, ds) : void)
  Class: Eq_2276
  DataType: 
  OrigDataType: 
T_2277: (in es_107 : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2278: (in di_277 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2279: (in ax_360 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2280: (in fn0800_17D7 : ptr32)
  Class: Eq_2280
  DataType: 
  OrigDataType: 
T_2281: (in signature of fn0800_17D7 : void)
  Class: Eq_2280
  DataType: 
  OrigDataType: 
T_2282: (in ax : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2283: (in cx : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2284: (in di : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2285: (in dl : byte)
  Class: Eq_2285
  DataType: 
  OrigDataType: 
T_2286: (in es : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2287: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2288: (in diOut : ptr16)
  Class: Eq_2288
  DataType: 
  OrigDataType: 
T_2289: (in esOut : ptr16)
  Class: Eq_2289
  DataType: 
  OrigDataType: 
T_2290: (in 0x0080 : word16)
  Class: Eq_2290
  DataType: 
  OrigDataType: 
T_2291: (in fp - 0x0080 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2292: (in 0x5C : byte)
  Class: Eq_2285
  DataType: 
  OrigDataType: 
T_2293: (in out di_277 : ptr16)
  Class: Eq_2288
  DataType: 
  OrigDataType: 
T_2294: (in out es_107 : ptr16)
  Class: Eq_2289
  DataType: 
  OrigDataType: 
T_2295: (in fn0800_17D7(fp - 0x0080, cx_12, di_17, 0x5C, es_18, ds, out di_277, out es_107) : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2296: (in 0x0000 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2297: (in ax_360 != 0x0000 : bool)
  Class: Eq_2297
  DataType: 
  OrigDataType: 
T_2298: (in sp_278 : word16)
  Class: Eq_2298
  DataType: 
  OrigDataType: 
T_2299: (in sp_111 : word16)
  Class: Eq_2299
  DataType: 
  OrigDataType: 
T_2300: (in si_109 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2301: (in fn0800_1285 : ptr32)
  Class: Eq_1522
  DataType: 
  OrigDataType: 
T_2302: (in 0x2E : byte)
  Class: Eq_1525
  DataType: 
  OrigDataType: 
T_2303: (in fn0800_1285(ax_360, 0x2E, ds) : void)
  Class: Eq_2303
  DataType: 
  OrigDataType: 
T_2304: (in 0x0000 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2305: (in ax_360 == 0x0000 : bool)
  Class: Eq_2305
  DataType: 
  OrigDataType: 
T_2306: (in 0x0080 : word16)
  Class: Eq_2306
  DataType: 
  OrigDataType: 
T_2307: (in fp - 0x0080 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2308: (in fn0800_074A : ptr32)
  Class: Eq_566
  DataType: 
  OrigDataType: 
T_2309: (in 0x0080 : word16)
  Class: Eq_2309
  DataType: 
  OrigDataType: 
T_2310: (in fp - 0x0080 : word16)
  Class: Eq_522
  DataType: 
  OrigDataType: 
T_2311: (in 0x0198 : word16)
  Class: Eq_444
  DataType: 
  OrigDataType: 
T_2312: (in fn0800_074A(fp - 0x0080, 0x0198, ds) : void)
  Class: Eq_2312
  DataType: 
  OrigDataType: 
T_2313: (in 0x0000 : word16)
  Class: Eq_2313
  DataType: 
  OrigDataType: 
T_2314: (in 0x0108 : word16)
  Class: Eq_2314
  DataType: 
  OrigDataType: 
T_2315: (in fp - 0x0108 : word16)
  Class: Eq_2315
  DataType: 
  OrigDataType: 
T_2316: (in Mem310[ss:fp - 0x0108:word16] : word16)
  Class: Eq_2313
  DataType: 
  OrigDataType: 
T_2317: (in 0x0200 : word16)
  Class: Eq_2317
  DataType: 
  OrigDataType: 
T_2318: (in 0x010A : word16)
  Class: Eq_2318
  DataType: 
  OrigDataType: 
T_2319: (in fp - 0x010A : word16)
  Class: Eq_2319
  DataType: 
  OrigDataType: 
T_2320: (in Mem313[ss:fp - 0x010A:word16] : word16)
  Class: Eq_2317
  DataType: 
  OrigDataType: 
T_2321: (in 0x0080 : word16)
  Class: Eq_2321
  DataType: 
  OrigDataType: 
T_2322: (in fp - 0x0080 : word16)
  Class: Eq_2322
  DataType: 
  OrigDataType: 
T_2323: (in 0x010C : word16)
  Class: Eq_2323
  DataType: 
  OrigDataType: 
T_2324: (in fp - 0x010C : word16)
  Class: Eq_2324
  DataType: 
  OrigDataType: 
T_2325: (in Mem316[ss:fp - 0x010C:word16] : word16)
  Class: Eq_2322
  DataType: 
  OrigDataType: 
T_2326: (in cx_317 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2327: (in dx_318 : word16)
  Class: Eq_2327
  DataType: 
  OrigDataType: 
T_2328: (in di_319 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2329: (in ax_320 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2330: (in fn0800_17FB : ptr32)
  Class: Eq_2330
  DataType: 
  OrigDataType: 
T_2331: (in signature of fn0800_17FB : void)
  Class: Eq_2330
  DataType: 
  OrigDataType: 
T_2332: (in di : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2333: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2334: (in wArg02 : word16)
  Class: Eq_2334
  DataType: 
  OrigDataType: 
T_2335: (in wArg04 : word16)
  Class: Eq_2335
  DataType: 
  OrigDataType: 
T_2336: (in wArg06 : word16)
  Class: Eq_2336
  DataType: 
  OrigDataType: 
T_2337: (in cxOut : ptr16)
  Class: Eq_2337
  DataType: 
  OrigDataType: 
T_2338: (in dxOut : ptr16)
  Class: Eq_2338
  DataType: 
  OrigDataType: 
T_2339: (in diOut : ptr16)
  Class: Eq_2339
  DataType: 
  OrigDataType: 
T_2340: (in wArg00 : word16)
  Class: Eq_2334
  DataType: 
  OrigDataType: 
T_2341: (in wArg02 : word16)
  Class: Eq_2335
  DataType: 
  OrigDataType: 
T_2342: (in wArg04 : word16)
  Class: Eq_2336
  DataType: 
  OrigDataType: 
T_2343: (in out cx_317 : ptr16)
  Class: Eq_2337
  DataType: 
  OrigDataType: 
T_2344: (in out dx_318 : ptr16)
  Class: Eq_2338
  DataType: 
  OrigDataType: 
T_2345: (in out di_319 : ptr16)
  Class: Eq_2339
  DataType: 
  OrigDataType: 
T_2346: (in fn0800_17FB(di_277, ds, wArg00, wArg02, wArg04, out cx_317, out dx_318, out di_319) : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2347: (in 0x0106 : word16)
  Class: Eq_2347
  DataType: 
  OrigDataType: 
T_2348: (in fp - 0x0106 : word16)
  Class: Eq_2299
  DataType: 
  OrigDataType: 
T_2349: (in 0xFFFF : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2350: (in ax_320 != 0xFFFF : bool)
  Class: Eq_2350
  DataType: 
  OrigDataType: 
T_2351: (in 0x0000 : word16)
  Class: Eq_2351
  DataType: 
  OrigDataType: 
T_2352: (in 0x0108 : word16)
  Class: Eq_2352
  DataType: 
  OrigDataType: 
T_2353: (in fp - 0x0108 : word16)
  Class: Eq_2353
  DataType: 
  OrigDataType: 
T_2354: (in Mem297[ss:fp - 0x0108:word16] : word16)
  Class: Eq_2351
  DataType: 
  OrigDataType: 
T_2355: (in 0x0200 : word16)
  Class: Eq_2355
  DataType: 
  OrigDataType: 
T_2356: (in 0x010A : word16)
  Class: Eq_2356
  DataType: 
  OrigDataType: 
T_2357: (in fp - 0x010A : word16)
  Class: Eq_2357
  DataType: 
  OrigDataType: 
T_2358: (in Mem300[ss:fp - 0x010A:word16] : word16)
  Class: Eq_2355
  DataType: 
  OrigDataType: 
T_2359: (in 0x0080 : word16)
  Class: Eq_2359
  DataType: 
  OrigDataType: 
T_2360: (in fp - 0x0080 : word16)
  Class: Eq_2360
  DataType: 
  OrigDataType: 
T_2361: (in 0x010C : word16)
  Class: Eq_2361
  DataType: 
  OrigDataType: 
T_2362: (in fp - 0x010C : word16)
  Class: Eq_2362
  DataType: 
  OrigDataType: 
T_2363: (in Mem303[ss:fp - 0x010C:word16] : word16)
  Class: Eq_2360
  DataType: 
  OrigDataType: 
T_2364: (in fp - 0x010C : word16)
  Class: Eq_2298
  DataType: 
  OrigDataType: 
T_2365: (in cx_279 : word16)
  Class: Eq_2365
  DataType: 
  OrigDataType: 
T_2366: (in dx_280 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2367: (in di_281 : word16)
  Class: Eq_2367
  DataType: 
  OrigDataType: 
T_2368: (in ax_282 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2369: (in fn0800_17FB : ptr32)
  Class: Eq_2330
  DataType: 
  OrigDataType: 
T_2370: (in out cx_279 : ptr16)
  Class: Eq_2337
  DataType: 
  OrigDataType: 
T_2371: (in out dx_280 : ptr16)
  Class: Eq_2338
  DataType: 
  OrigDataType: 
T_2372: (in out di_281 : ptr16)
  Class: Eq_2339
  DataType: 
  OrigDataType: 
T_2373: (in fn0800_17FB(di_277, ds, wArg00, wArg02, wArg04, out cx_279, out dx_280, out di_281) : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2374: (in bx_288 : word16)
  Class: Eq_2374
  DataType: 
  OrigDataType: 
T_2375: (in fn0800_0780 : ptr32)
  Class: Eq_593
  DataType: 
  OrigDataType: 
T_2376: (in 0x0001 : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_2377: (in out bx_288 : ptr16)
  Class: Eq_598
  DataType: 
  OrigDataType: 
T_2378: (in fn0800_0780(0x0001, dx_280, ds, out bx_288) : word16)
  Class: Eq_2378
  DataType: 
  OrigDataType: 
T_2379: (in 0x0006 : word16)
  Class: Eq_2379
  DataType: 
  OrigDataType: 
T_2380: (in sp_278 + 0x0006 : word16)
  Class: Eq_2380
  DataType: 
  OrigDataType: 
T_2381: (in 0xFFFE : word16)
  Class: Eq_2381
  DataType: 
  OrigDataType: 
T_2382: (in sp_278 + 0x0006 + 0xFFFE : word16)
  Class: Eq_2299
  DataType: 
  OrigDataType: 
T_2383: (in 0xFFFF : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2384: (in ax_282 == 0xFFFF : bool)
  Class: Eq_2384
  DataType: 
  OrigDataType: 
T_2385: (in dx_116 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2386: (in fn0800_19D8 : ptr32)
  Class: Eq_2386
  DataType: 
  OrigDataType: 
T_2387: (in signature of fn0800_19D8 : void)
  Class: Eq_2386
  DataType: 
  OrigDataType: 
T_2388: (in ax : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2389: (in dx : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2390: (in bx : word16)
  Class: Eq_2390
  DataType: 
  OrigDataType: 
T_2391: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2392: (in dxOut : ptr16)
  Class: Eq_2392
  DataType: 
  OrigDataType: 
T_2393: (in 0x0030 : word16)
  Class: Eq_2393
  DataType: 
  OrigDataType: 
T_2394: (in fp - 0x0030 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2395: (in 0x001C : word16)
  Class: Eq_2390
  DataType: 
  OrigDataType: 
T_2396: (in out dx_116 : ptr16)
  Class: Eq_2392
  DataType: 
  OrigDataType: 
T_2397: (in fn0800_19D8(si_109, fp - 0x0030, 0x001C, ds, out dx_116) : word16)
  Class: Eq_2397
  DataType: 
  OrigDataType: 
T_2398: (in 0xFFFF : word16)
  Class: Eq_2397
  DataType: 
  OrigDataType: 
T_2399: (in fn0800_19D8(si_109, fp - 0x0030, 0x001C, ds, out dx_116) != 0xFFFF : bool)
  Class: Eq_2399
  DataType: 
  OrigDataType: 
T_2400: (in di_328 : word16)
  Class: Eq_2400
  DataType: 
  OrigDataType: 
T_2401: (in es_329 : selector)
  Class: Eq_2401
  DataType: 
  OrigDataType: 
T_2402: (in ax_330 : word16)
  Class: Eq_2402
  DataType: 
  OrigDataType: 
T_2403: (in fn0800_17D7 : ptr32)
  Class: Eq_2280
  DataType: 
  OrigDataType: 
T_2404: (in 0x0080 : word16)
  Class: Eq_2404
  DataType: 
  OrigDataType: 
T_2405: (in fp - 0x0080 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2406: (in 0x2E : byte)
  Class: Eq_2285
  DataType: 
  OrigDataType: 
T_2407: (in out di_328 : ptr16)
  Class: Eq_2288
  DataType: 
  OrigDataType: 
T_2408: (in out es_329 : ptr16)
  Class: Eq_2289
  DataType: 
  OrigDataType: 
T_2409: (in fn0800_17D7(fp - 0x0080, cx_317, di_319, 0x2E, es_107, ds, out di_328, out es_329) : word16)
  Class: Eq_2402
  DataType: 
  OrigDataType: 
T_2410: (in 0x0000 : word16)
  Class: Eq_2410
  DataType: 
  OrigDataType: 
T_2411: (in 0x0108 : word16)
  Class: Eq_2411
  DataType: 
  OrigDataType: 
T_2412: (in fp - 0x0108 : word16)
  Class: Eq_2412
  DataType: 
  OrigDataType: 
T_2413: (in Mem336[ss:fp - 0x0108:word16] : word16)
  Class: Eq_2410
  DataType: 
  OrigDataType: 
T_2414: (in 0x010A : word16)
  Class: Eq_2414
  DataType: 
  OrigDataType: 
T_2415: (in fp - 0x010A : word16)
  Class: Eq_2415
  DataType: 
  OrigDataType: 
T_2416: (in Mem339[ss:fp - 0x010A:word16] : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2417: (in fp - 0x010A : word16)
  Class: Eq_2417
  DataType: 
  OrigDataType: 
T_2418: (in Mem339[ss:fp - 0x010A:selector] : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2419: (in 0x0200 : word16)
  Class: Eq_2419
  DataType: 
  OrigDataType: 
T_2420: (in 0x010A : word16)
  Class: Eq_2420
  DataType: 
  OrigDataType: 
T_2421: (in fp - 0x010A : word16)
  Class: Eq_2421
  DataType: 
  OrigDataType: 
T_2422: (in Mem343[ss:fp - 0x010A:word16] : word16)
  Class: Eq_2419
  DataType: 
  OrigDataType: 
T_2423: (in 0x0080 : word16)
  Class: Eq_2423
  DataType: 
  OrigDataType: 
T_2424: (in fp - 0x0080 : word16)
  Class: Eq_2424
  DataType: 
  OrigDataType: 
T_2425: (in 0x010C : word16)
  Class: Eq_2425
  DataType: 
  OrigDataType: 
T_2426: (in fp - 0x010C : word16)
  Class: Eq_2426
  DataType: 
  OrigDataType: 
T_2427: (in Mem347[ss:fp - 0x010C:word16] : word16)
  Class: Eq_2424
  DataType: 
  OrigDataType: 
T_2428: (in 0x019D : word16)
  Class: Eq_2428
  DataType: 
  OrigDataType: 
T_2429: (in Mem347[ds:0x019D:word16] : word16)
  Class: Eq_2429
  DataType: 
  OrigDataType: 
T_2430: (in 0x0000 : word16)
  Class: Eq_2430
  DataType: 
  OrigDataType: 
T_2431: (in ax_330 + 0x0000 : word16)
  Class: Eq_2431
  DataType: 
  OrigDataType: 
T_2432: (in Mem349[es_107:ax_330 + 0x0000:word16] : word16)
  Class: Eq_2429
  DataType: 
  OrigDataType: 
T_2433: (in 0x019F : word16)
  Class: Eq_2433
  DataType: 
  OrigDataType: 
T_2434: (in Mem349[ds:0x019F:word16] : word16)
  Class: Eq_2434
  DataType: 
  OrigDataType: 
T_2435: (in 0x0002 : word16)
  Class: Eq_2435
  DataType: 
  OrigDataType: 
T_2436: (in ax_330 + 0x0002 : word16)
  Class: Eq_2436
  DataType: 
  OrigDataType: 
T_2437: (in Mem353[es_107:ax_330 + 0x0002:word16] : word16)
  Class: Eq_2434
  DataType: 
  OrigDataType: 
T_2438: (in 0x01A1 : word16)
  Class: Eq_2438
  DataType: 
  OrigDataType: 
T_2439: (in Mem353[ds:0x01A1:byte] : byte)
  Class: Eq_2439
  DataType: 
  OrigDataType: 
T_2440: (in 0x0004 : word16)
  Class: Eq_2440
  DataType: 
  OrigDataType: 
T_2441: (in ax_330 + 0x0004 : word16)
  Class: Eq_2441
  DataType: 
  OrigDataType: 
T_2442: (in Mem357[es_107:ax_330 + 0x0004:byte] : byte)
  Class: Eq_2439
  DataType: 
  OrigDataType: 
T_2443: (in fp - 0x010C : word16)
  Class: Eq_2298
  DataType: 
  OrigDataType: 
T_2444: (in 0x0005 : word16)
  Class: Eq_2444
  DataType: 
  OrigDataType: 
T_2445: (in ax_330 + 0x0005 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2446: (in ax_137 : word16)
  Class: Eq_2446
  DataType: 
  OrigDataType: 
T_2447: (in 0x0030 : word16)
  Class: Eq_2447
  DataType: 
  OrigDataType: 
T_2448: (in fp - 0x0030 : word16)
  Class: Eq_2448
  DataType: 
  OrigDataType: 
T_2449: (in Mem41[ss:fp - 0x0030:word16] : word16)
  Class: Eq_2449
  DataType: 
  OrigDataType: 
T_2450: (in 0x5A4D : word16)
  Class: Eq_2449
  DataType: 
  OrigDataType: 
T_2451: (in Mem41[ss:fp - 0x0030:word16] == 0x5A4D : bool)
  Class: Eq_2451
  DataType: 
  OrigDataType: 
T_2452: (in dx_122 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2453: (in bx_123 : word16)
  Class: Eq_2453
  DataType: 
  OrigDataType: 
T_2454: (in fn0800_1AA6 : ptr32)
  Class: Eq_2454
  DataType: 
  OrigDataType: 
T_2455: (in signature of fn0800_1AA6 : void)
  Class: Eq_2454
  DataType: 
  OrigDataType: 
T_2456: (in ax : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2457: (in dx : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2458: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2459: (in dxOut : ptr16)
  Class: Eq_2459
  DataType: 
  OrigDataType: 
T_2460: (in bxOut : ptr16)
  Class: Eq_2460
  DataType: 
  OrigDataType: 
T_2461: (in out dx_122 : ptr16)
  Class: Eq_2459
  DataType: 
  OrigDataType: 
T_2462: (in out bx_123 : ptr16)
  Class: Eq_2460
  DataType: 
  OrigDataType: 
T_2463: (in fn0800_1AA6(si_109, dx_116, ds, out dx_122, out bx_123) : word16)
  Class: Eq_2463
  DataType: 
  OrigDataType: 
T_2464: (in bx_126 : word16)
  Class: Eq_2464
  DataType: 
  OrigDataType: 
T_2465: (in bx_130 : word16)
  Class: Eq_2465
  DataType: 
  OrigDataType: 
T_2466: (in fn0800_079D : ptr32)
  Class: Eq_1575
  DataType: 
  OrigDataType: 
T_2467: (in 0x000B : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_2468: (in fn0800_0780 : ptr32)
  Class: Eq_593
  DataType: 
  OrigDataType: 
T_2469: (in 0x0003 : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_2470: (in out bx_126 : ptr16)
  Class: Eq_598
  DataType: 
  OrigDataType: 
T_2471: (in fn0800_0780(0x0003, dx_122, ds, out bx_126) : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2472: (in out bx_130 : ptr16)
  Class: Eq_1577
  DataType: 
  OrigDataType: 
T_2473: (in fn0800_079D(0x000B, fn0800_0780(0x0003, dx_122, ds, out bx_126), ds, out bx_130) : word16)
  Class: Eq_2473
  DataType: 
  OrigDataType: 
T_2474: (in 0x0001 : word16)
  Class: Eq_2446
  DataType: 
  OrigDataType: 
T_2475: (in 0x0030 : word16)
  Class: Eq_2475
  DataType: 
  OrigDataType: 
T_2476: (in fp - 0x0030 : word16)
  Class: Eq_2476
  DataType: 
  OrigDataType: 
T_2477: (in Mem41[ss:fp - 0x0030:word16] : word16)
  Class: Eq_2477
  DataType: 
  OrigDataType: 
T_2478: (in 0x4D5A : word16)
  Class: Eq_2477
  DataType: 
  OrigDataType: 
T_2479: (in Mem41[ss:fp - 0x0030:word16] != 0x4D5A : bool)
  Class: Eq_2479
  DataType: 
  OrigDataType: 
T_2480: (in 0x0000 : word16)
  Class: Eq_2446
  DataType: 
  OrigDataType: 
T_2481: (in di_148 : word16)
  Class: Eq_2481
  DataType: 
  OrigDataType: 
T_2482: (in dx_147 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2483: (in 0x000C : word16)
  Class: Eq_2483
  DataType: 
  OrigDataType: 
T_2484: (in fp - 0x000C : word16)
  Class: Eq_2484
  DataType: 
  OrigDataType: 
T_2485: (in Mem138[ss:fp - 0x000C:word16] : word16)
  Class: Eq_2446
  DataType: 
  OrigDataType: 
T_2486: (in 0x0000 : word16)
  Class: Eq_2446
  DataType: 
  OrigDataType: 
T_2487: (in ax_137 == 0x0000 : bool)
  Class: Eq_2487
  DataType: 
  OrigDataType: 
T_2488: (in dx_246 : word16)
  Class: Eq_2488
  DataType: 
  OrigDataType: 
T_2489: (in ax_247 : word16)
  Class: Eq_2489
  DataType: 
  OrigDataType: 
T_2490: (in fn0800_1ABD : ptr32)
  Class: Eq_2490
  DataType: 
  OrigDataType: 
T_2491: (in signature of fn0800_1ABD : void)
  Class: Eq_2490
  DataType: 
  OrigDataType: 
T_2492: (in ax : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2493: (in cx : word16)
  Class: Eq_2493
  DataType: 
  OrigDataType: 
T_2494: (in bx : word16)
  Class: Eq_2494
  DataType: 
  OrigDataType: 
T_2495: (in dl : byte)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_2496: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2497: (in dxOut : ptr16)
  Class: Eq_2497
  DataType: 
  OrigDataType: 
T_2498: (in 0x0000 : word16)
  Class: Eq_2493
  DataType: 
  OrigDataType: 
T_2499: (in 0x0000 : word16)
  Class: Eq_2494
  DataType: 
  OrigDataType: 
T_2500: (in 0x02 : byte)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_2501: (in out dx_246 : ptr16)
  Class: Eq_2497
  DataType: 
  OrigDataType: 
T_2502: (in fn0800_1ABD(si_109, 0x0000, 0x0000, 0x02, ds, out dx_246) : word16)
  Class: Eq_2489
  DataType: 
  OrigDataType: 
T_2503: (in dx_ax_250 : ui32)
  Class: Eq_2503
  DataType: 
  OrigDataType: 
T_2504: (in 0x008F : word16)
  Class: Eq_2504
  DataType: 
  OrigDataType: 
T_2505: (in ax_247 + 0x008F : word16)
  Class: Eq_2505
  DataType: 
  OrigDataType: 
T_2506: (in SEQ(dx_246, ax_247 + 0x008F) : ui32)
  Class: Eq_2503
  DataType: 
  OrigDataType: 
T_2507: (in fn0800_1AFA : ptr32)
  Class: Eq_2507
  DataType: 
  OrigDataType: 
T_2508: (in signature of fn0800_1AFA : void)
  Class: Eq_2507
  DataType: 
  OrigDataType: 
T_2509: (in ax : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_2510: (in cx : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_2511: (in dx : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_2512: (in bx : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_2513: (in dxOut : ptr16)
  Class: Eq_2513
  DataType: 
  OrigDataType: 
T_2514: (in 0x0000008F : ui32)
  Class: Eq_2514
  DataType: 
  OrigDataType: 
T_2515: (in dx_ax_250 + 0x0000008F : ui32)
  Class: Eq_2515
  DataType: 
  OrigDataType: 
T_2516: (in (word16) (dx_ax_250 + 0x0000008F) : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_2517: (in 0x0000 : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_2518: (in dx_ax_250 + 0x0000008F : ui32)
  Class: Eq_2518
  DataType: 
  OrigDataType: 
T_2519: (in SLICE(dx_ax_250 + 0x0000008F, word16, 16) : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_2520: (in 0x0010 : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_2521: (in out dx_147 : ptr16)
  Class: Eq_2513
  DataType: 
  OrigDataType: 
T_2522: (in fn0800_1AFA((word16) (dx_ax_250 + 0x0000008F), 0x0000, SLICE(dx_ax_250 + 0x0000008F, word16, 16), 0x0010, out dx_147) : word16)
  Class: Eq_2481
  DataType: 
  OrigDataType: 
T_2523: (in 0x002C : word16)
  Class: Eq_2523
  DataType: 
  OrigDataType: 
T_2524: (in fp - 0x002C : word16)
  Class: Eq_2524
  DataType: 
  OrigDataType: 
T_2525: (in Mem138[ss:fp - 0x002C:word16] : word16)
  Class: Eq_2525
  DataType: 
  OrigDataType: 
T_2526: (in 0x05 : byte)
  Class: Eq_2526
  DataType: 
  OrigDataType: 
T_2527: (in Mem138[ss:fp - 0x002C:word16] << 0x05 : word16)
  Class: Eq_2527
  DataType: 
  OrigDataType: 
T_2528: (in 0x0020 : word16)
  Class: Eq_2528
  DataType: 
  OrigDataType: 
T_2529: (in (Mem138[ss:fp - 0x002C:word16] << 0x05) - 0x0020 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2530: (in 0x002E : word16)
  Class: Eq_2530
  DataType: 
  OrigDataType: 
T_2531: (in fp - 0x002E : word16)
  Class: Eq_2531
  DataType: 
  OrigDataType: 
T_2532: (in Mem138[ss:fp - 0x002E:word16] : word16)
  Class: Eq_2532
  DataType: 
  OrigDataType: 
T_2533: (in 0x000F : word16)
  Class: Eq_2533
  DataType: 
  OrigDataType: 
T_2534: (in Mem138[ss:fp - 0x002E:word16] + 0x000F : word16)
  Class: Eq_2534
  DataType: 
  OrigDataType: 
T_2535: (in 0x04 : byte)
  Class: Eq_2535
  DataType: 
  OrigDataType: 
T_2536: (in Mem138[ss:fp - 0x002E:word16] + 0x000F >>u 0x04 : word16)
  Class: Eq_2536
  DataType: 
  OrigDataType: 
T_2537: (in (Mem138[ss:fp - 0x002E:word16] + 0x000F >>u 0x04) + dx_147 : word16)
  Class: Eq_2537
  DataType: 
  OrigDataType: 
T_2538: (in 0x0026 : word16)
  Class: Eq_2538
  DataType: 
  OrigDataType: 
T_2539: (in fp - 0x0026 : word16)
  Class: Eq_2539
  DataType: 
  OrigDataType: 
T_2540: (in Mem138[ss:fp - 0x0026:word16] : word16)
  Class: Eq_2540
  DataType: 
  OrigDataType: 
T_2541: (in (Mem138[ss:fp - 0x002E:word16] + 0x000F >>u 0x04) + dx_147 + Mem138[ss:fp - 0x0026:word16] : word16)
  Class: Eq_2541
  DataType: 
  OrigDataType: 
T_2542: (in 0x0028 : word16)
  Class: Eq_2542
  DataType: 
  OrigDataType: 
T_2543: (in fp - 0x0028 : word16)
  Class: Eq_2543
  DataType: 
  OrigDataType: 
T_2544: (in Mem138[ss:fp - 0x0028:word16] : word16)
  Class: Eq_2544
  DataType: 
  OrigDataType: 
T_2545: (in (Mem138[ss:fp - 0x002E:word16] + 0x000F >>u 0x04) + dx_147 + Mem138[ss:fp - 0x0026:word16] - Mem138[ss:fp - 0x0028:word16] : word16)
  Class: Eq_2481
  DataType: 
  OrigDataType: 
T_2546: (in dx_151 : word16)
  Class: Eq_2546
  DataType: 
  OrigDataType: 
T_2547: (in bx_152 : word16)
  Class: Eq_2547
  DataType: 
  OrigDataType: 
T_2548: (in fn0800_1AA6 : ptr32)
  Class: Eq_2454
  DataType: 
  OrigDataType: 
T_2549: (in out dx_151 : ptr16)
  Class: Eq_2459
  DataType: 
  OrigDataType: 
T_2550: (in out bx_152 : ptr16)
  Class: Eq_2460
  DataType: 
  OrigDataType: 
T_2551: (in fn0800_1AA6(si_109, dx_147, ds, out dx_151, out bx_152) : word16)
  Class: Eq_2551
  DataType: 
  OrigDataType: 
T_2552: (in 0x0080 : word16)
  Class: Eq_2552
  DataType: 
  OrigDataType: 
T_2553: (in fp - 0x0080 : word16)
  Class: Eq_2553
  DataType: 
  OrigDataType: 
T_2554: (in 0x0000 : word16)
  Class: Eq_2554
  DataType: 
  OrigDataType: 
T_2555: (in bx_152 + 0x0000 : word16)
  Class: Eq_2555
  DataType: 
  OrigDataType: 
T_2556: (in Mem155[ds:bx_152 + 0x0000:word16] : word16)
  Class: Eq_2553
  DataType: 
  OrigDataType: 
T_2557: (in sp_158 : word16)
  Class: Eq_2557
  DataType: 
  OrigDataType: 
T_2558: (in 0x0002 : word16)
  Class: Eq_2558
  DataType: 
  OrigDataType: 
T_2559: (in sp_111 - 0x0002 : word16)
  Class: Eq_2557
  DataType: 
  OrigDataType: 
T_2560: (in 0x0001 : word16)
  Class: Eq_2560
  DataType: 
  OrigDataType: 
T_2561: (in 0x0000 : word16)
  Class: Eq_2561
  DataType: 
  OrigDataType: 
T_2562: (in sp_158 + 0x0000 : word16)
  Class: Eq_2562
  DataType: 
  OrigDataType: 
T_2563: (in Mem159[ss:sp_158 + 0x0000:word16] : word16)
  Class: Eq_2560
  DataType: 
  OrigDataType: 
T_2564: (in dx_161 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2565: (in 0x0106 : word16)
  Class: Eq_2565
  DataType: 
  OrigDataType: 
T_2566: (in fp - 0x0106 : word16)
  Class: Eq_2566
  DataType: 
  OrigDataType: 
T_2567: (in Mem159[ss:fp - 0x0106:word16] : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2568: (in 0x0010 : word16)
  Class: Eq_2568
  DataType: 
  OrigDataType: 
T_2569: (in fp - 0x0010 : word16)
  Class: Eq_2569
  DataType: 
  OrigDataType: 
T_2570: (in 0x0002 : word16)
  Class: Eq_2570
  DataType: 
  OrigDataType: 
T_2571: (in sp_158 - 0x0002 : word16)
  Class: Eq_2571
  DataType: 
  OrigDataType: 
T_2572: (in Mem163[ss:sp_158 - 0x0002:word16] : word16)
  Class: Eq_2569
  DataType: 
  OrigDataType: 
T_2573: (in 0x0014 : word16)
  Class: Eq_2573
  DataType: 
  OrigDataType: 
T_2574: (in fp - 0x0014 : word16)
  Class: Eq_2574
  DataType: 
  OrigDataType: 
T_2575: (in 0x0004 : word16)
  Class: Eq_2575
  DataType: 
  OrigDataType: 
T_2576: (in sp_158 - 0x0004 : word16)
  Class: Eq_2576
  DataType: 
  OrigDataType: 
T_2577: (in Mem167[ss:sp_158 - 0x0004:word16] : word16)
  Class: Eq_2574
  DataType: 
  OrigDataType: 
T_2578: (in ax_172 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2579: (in fn0800_1BEC : ptr32)
  Class: Eq_2579
  DataType: 
  OrigDataType: 
T_2580: (in signature of fn0800_1BEC : void)
  Class: Eq_2579
  DataType: 
  OrigDataType: 
T_2581: (in ax : word16)
  Class: Eq_2581
  DataType: 
  OrigDataType: 
T_2582: (in cx : word16)
  Class: Eq_2582
  DataType: 
  OrigDataType: 
T_2583: (in dx : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_2584: (in bx : word16)
  Class: Eq_2584
  DataType: 
  OrigDataType: 
T_2585: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2586: (in wArg02 : word16)
  Class: Eq_2334
  DataType: 
  OrigDataType: 
T_2587: (in wArg04 : word16)
  Class: Eq_2335
  DataType: 
  OrigDataType: 
T_2588: (in wArg06 : word16)
  Class: Eq_2336
  DataType: 
  OrigDataType: 
T_2589: (in 0x0104 : word16)
  Class: Eq_2589
  DataType: 
  OrigDataType: 
T_2590: (in fp - 0x0104 : word16)
  Class: Eq_2590
  DataType: 
  OrigDataType: 
T_2591: (in Mem167[ss:fp - 0x0104:word16] : word16)
  Class: Eq_2581
  DataType: 
  OrigDataType: 
T_2592: (in 0x0012 : word16)
  Class: Eq_2592
  DataType: 
  OrigDataType: 
T_2593: (in fp - 0x0012 : word16)
  Class: Eq_2582
  DataType: 
  OrigDataType: 
T_2594: (in 0x000E : word16)
  Class: Eq_2594
  DataType: 
  OrigDataType: 
T_2595: (in fp - 0x000E : word16)
  Class: Eq_2584
  DataType: 
  OrigDataType: 
T_2596: (in fn0800_1BEC(Mem167[ss:fp - 0x0104:word16], fp - 0x0012, dx_161, fp - 0x000E, ds, wArg00, wArg02, wArg04) : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2597: (in 0xFFFF : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2598: (in ax_172 == 0xFFFF : bool)
  Class: Eq_2598
  DataType: 
  OrigDataType: 
T_2599: (in di_189 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2600: (in fn0800_06F2 : ptr32)
  Class: Eq_489
  DataType: 
  OrigDataType: 
T_2601: (in 0x0102 : word16)
  Class: Eq_2601
  DataType: 
  OrigDataType: 
T_2602: (in fp - 0x0102 : word16)
  Class: Eq_2602
  DataType: 
  OrigDataType: 
T_2603: (in Mem167[ss:fp - 0x0102:word16] : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2604: (in fn0800_06F2(Mem167[ss:fp - 0x0102:word16], ds) : word16)
  Class: Eq_2604
  DataType: 
  OrigDataType: 
T_2605: (in 0x000F : word16)
  Class: Eq_2605
  DataType: 
  OrigDataType: 
T_2606: (in fn0800_06F2(Mem167[ss:fp - 0x0102:word16], ds) + 0x000F : word16)
  Class: Eq_2606
  DataType: 
  OrigDataType: 
T_2607: (in 0x04 : byte)
  Class: Eq_2607
  DataType: 
  OrigDataType: 
T_2608: (in fn0800_06F2(Mem167[ss:fp - 0x0102:word16], ds) + 0x000F >>u 0x04 : word16)
  Class: Eq_2608
  DataType: 
  OrigDataType: 
T_2609: (in 0x038E : word16)
  Class: Eq_2609
  DataType: 
  OrigDataType: 
T_2610: (in Mem167[ds:0x038E:word16] : word16)
  Class: Eq_2610
  DataType: 
  OrigDataType: 
T_2611: (in 0x0010 : word16)
  Class: Eq_2611
  DataType: 
  OrigDataType: 
T_2612: (in Mem167[ds:0x038E:word16] + 0x0010 : word16)
  Class: Eq_2612
  DataType: 
  OrigDataType: 
T_2613: (in (fn0800_06F2(Mem167[ss:fp - 0x0102:word16], ds) + 0x000F >>u 0x04) + (Mem167[ds:0x038E:word16] + 0x0010) : word16)
  Class: Eq_2613
  DataType: 
  OrigDataType: 
T_2614: (in di_148 + ((fn0800_06F2(Mem167[ss:fp - 0x0102:word16], ds) + 0x000F >>u 0x04) + (Mem167[ds:0x038E:word16] + 0x0010)) : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2615: (in fn0800_1D16 : ptr32)
  Class: Eq_2615
  DataType: 
  OrigDataType: 
T_2616: (in signature of fn0800_1D16 : void)
  Class: Eq_2615
  DataType: 
  OrigDataType: 
T_2617: (in cx : word16)
  Class: Eq_2617
  DataType: 
  OrigDataType: 
T_2618: (in dx : word16)
  Class: Eq_2618
  DataType: 
  OrigDataType: 
T_2619: (in bx : word16)
  Class: Eq_2619
  DataType: 
  OrigDataType: 
T_2620: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2621: (in 0x0000 : word16)
  Class: Eq_2617
  DataType: 
  OrigDataType: 
T_2622: (in 0x0104 : word16)
  Class: Eq_2622
  DataType: 
  OrigDataType: 
T_2623: (in fp - 0x0104 : word16)
  Class: Eq_2623
  DataType: 
  OrigDataType: 
T_2624: (in Mem167[ss:fp - 0x0104:word16] : word16)
  Class: Eq_2618
  DataType: 
  OrigDataType: 
T_2625: (in 0x0100 : word16)
  Class: Eq_2625
  DataType: 
  OrigDataType: 
T_2626: (in fp - 0x0100 : word16)
  Class: Eq_2619
  DataType: 
  OrigDataType: 
T_2627: (in fn0800_1D16(0x0000, Mem167[ss:fp - 0x0104:word16], fp - 0x0100, ds) : void)
  Class: Eq_2627
  DataType: 
  OrigDataType: 
T_2628: (in ds_195 : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2629: (in fn0800_1087 : ptr32)
  Class: Eq_2629
  DataType: 
  OrigDataType: 
T_2630: (in signature of fn0800_1087 : void)
  Class: Eq_2629
  DataType: 
  OrigDataType: 
T_2631: (in ax : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2632: (in cx : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2633: (in bp : word16)
  Class: Eq_1446
  DataType: 
  OrigDataType: 
T_2634: (in si : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2635: (in di : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2636: (in es : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2637: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2638: (in dsOut : ptr16)
  Class: Eq_2638
  DataType: 
  OrigDataType: 
T_2639: (in 0x0000 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2640: (in 0x008A : word16)
  Class: Eq_2640
  DataType: 
  OrigDataType: 
T_2641: (in fp - 0x008A : word16)
  Class: Eq_1446
  DataType: 
  OrigDataType: 
T_2642: (in out ds_195 : ptr16)
  Class: Eq_2638
  DataType: 
  OrigDataType: 
T_2643: (in fn0800_1087(di_189, 0x0000, fp - 0x008A, ax_172, di_189, es_107, ds, out ds_195) : word16)
  Class: Eq_2643
  DataType: 
  OrigDataType: 
T_2644: (in 0x0000 : word16)
  Class: Eq_2643
  DataType: 
  OrigDataType: 
T_2645: (in fn0800_1087(di_189, 0x0000, fp - 0x008A, ax_172, di_189, es_107, ds, out ds_195) == 0x0000 : bool)
  Class: Eq_2645
  DataType: 
  OrigDataType: 
T_2646: (in 0x001C : word16)
  Class: Eq_2646
  DataType: 
  OrigDataType: 
T_2647: (in fp - 0x001C : word16)
  Class: Eq_2647
  DataType: 
  OrigDataType: 
T_2648: (in Mem167[ss:fp - 0x001C:word16] : word16)
  Class: Eq_2648
  DataType: 
  OrigDataType: 
T_2649: (in 0x0000 : word16)
  Class: Eq_2649
  DataType: 
  OrigDataType: 
T_2650: (in sp_158 + 0x0000 : word16)
  Class: Eq_2650
  DataType: 
  OrigDataType: 
T_2651: (in Mem201[ss:sp_158 + 0x0000:word16] : word16)
  Class: Eq_2648
  DataType: 
  OrigDataType: 
T_2652: (in 0x001A : word16)
  Class: Eq_2652
  DataType: 
  OrigDataType: 
T_2653: (in fp - 0x001A : word16)
  Class: Eq_2653
  DataType: 
  OrigDataType: 
T_2654: (in Mem201[ss:fp - 0x001A:word16] : word16)
  Class: Eq_2654
  DataType: 
  OrigDataType: 
T_2655: (in 0x0002 : word16)
  Class: Eq_2655
  DataType: 
  OrigDataType: 
T_2656: (in sp_158 - 0x0002 : word16)
  Class: Eq_2656
  DataType: 
  OrigDataType: 
T_2657: (in Mem203[ss:sp_158 - 0x0002:word16] : word16)
  Class: Eq_2654
  DataType: 
  OrigDataType: 
T_2658: (in 0x0020 : word16)
  Class: Eq_2658
  DataType: 
  OrigDataType: 
T_2659: (in fp - 0x0020 : word16)
  Class: Eq_2659
  DataType: 
  OrigDataType: 
T_2660: (in Mem203[ss:fp - 0x0020:word16] : word16)
  Class: Eq_2660
  DataType: 
  OrigDataType: 
T_2661: (in 0x0004 : word16)
  Class: Eq_2661
  DataType: 
  OrigDataType: 
T_2662: (in sp_158 - 0x0004 : word16)
  Class: Eq_2662
  DataType: 
  OrigDataType: 
T_2663: (in Mem205[ss:sp_158 - 0x0004:word16] : word16)
  Class: Eq_2660
  DataType: 
  OrigDataType: 
T_2664: (in 0x0022 : word16)
  Class: Eq_2664
  DataType: 
  OrigDataType: 
T_2665: (in fp - 0x0022 : word16)
  Class: Eq_2665
  DataType: 
  OrigDataType: 
T_2666: (in Mem205[ss:fp - 0x0022:word16] : word16)
  Class: Eq_2666
  DataType: 
  OrigDataType: 
T_2667: (in 0x0006 : word16)
  Class: Eq_2667
  DataType: 
  OrigDataType: 
T_2668: (in sp_158 - 0x0006 : word16)
  Class: Eq_2668
  DataType: 
  OrigDataType: 
T_2669: (in Mem207[ss:sp_158 - 0x0006:word16] : word16)
  Class: Eq_2666
  DataType: 
  OrigDataType: 
T_2670: (in 0x000C : word16)
  Class: Eq_2670
  DataType: 
  OrigDataType: 
T_2671: (in fp - 0x000C : word16)
  Class: Eq_2671
  DataType: 
  OrigDataType: 
T_2672: (in Mem207[ss:fp - 0x000C:word16] : word16)
  Class: Eq_2672
  DataType: 
  OrigDataType: 
T_2673: (in 0x0008 : word16)
  Class: Eq_2673
  DataType: 
  OrigDataType: 
T_2674: (in sp_158 - 0x0008 : word16)
  Class: Eq_2674
  DataType: 
  OrigDataType: 
T_2675: (in Mem209[ss:sp_158 - 0x0008:word16] : word16)
  Class: Eq_2672
  DataType: 
  OrigDataType: 
T_2676: (in 0x0100 : word16)
  Class: Eq_2676
  DataType: 
  OrigDataType: 
T_2677: (in fp - 0x0100 : word16)
  Class: Eq_2677
  DataType: 
  OrigDataType: 
T_2678: (in 0x000A : word16)
  Class: Eq_2678
  DataType: 
  OrigDataType: 
T_2679: (in sp_158 - 0x000A : word16)
  Class: Eq_2679
  DataType: 
  OrigDataType: 
T_2680: (in Mem212[ss:sp_158 - 0x000A:word16] : word16)
  Class: Eq_2677
  DataType: 
  OrigDataType: 
T_2681: (in 0x0080 : word16)
  Class: Eq_2681
  DataType: 
  OrigDataType: 
T_2682: (in fp - 0x0080 : word16)
  Class: Eq_2682
  DataType: 
  OrigDataType: 
T_2683: (in 0x000C : word16)
  Class: Eq_2683
  DataType: 
  OrigDataType: 
T_2684: (in sp_158 - 0x000C : word16)
  Class: Eq_2684
  DataType: 
  OrigDataType: 
T_2685: (in Mem215[ss:sp_158 - 0x000C:word16] : word16)
  Class: Eq_2682
  DataType: 
  OrigDataType: 
T_2686: (in fn0800_1E9E : ptr32)
  Class: Eq_2686
  DataType: 
  OrigDataType: 
T_2687: (in signature of fn0800_1E9E : void)
  Class: Eq_2686
  DataType: 
  OrigDataType: 
T_2688: (in wArg04 : word16)
  Class: Eq_2335
  DataType: 
  OrigDataType: 
T_2689: (in wArg06 : word16)
  Class: Eq_2336
  DataType: 
  OrigDataType: 
T_2690: (in wArg08 : word16)
  Class: Eq_2690
  DataType: 
  OrigDataType: 
T_2691: (in wArg0A : word16)
  Class: Eq_2691
  DataType: 
  OrigDataType: 
T_2692: (in wArg0C : word16)
  Class: Eq_2692
  DataType: 
  OrigDataType: 
T_2693: (in wArg0E : word16)
  Class: Eq_2693
  DataType: 
  OrigDataType: 
T_2694: (in wArg10 : word16)
  Class: Eq_2694
  DataType: 
  OrigDataType: 
T_2695: (in wArg06 : word16)
  Class: Eq_2690
  DataType: 
  OrigDataType: 
T_2696: (in wArg08 : word16)
  Class: Eq_2691
  DataType: 
  OrigDataType: 
T_2697: (in wArg0A : word16)
  Class: Eq_2692
  DataType: 
  OrigDataType: 
T_2698: (in wArg0C : word16)
  Class: Eq_2693
  DataType: 
  OrigDataType: 
T_2699: (in wArg0E : word16)
  Class: Eq_2694
  DataType: 
  OrigDataType: 
T_2700: (in fn0800_1E9E(wArg02, wArg04, wArg06, wArg08, wArg0A, wArg0C, wArg0E) : void)
  Class: Eq_2700
  DataType: 
  OrigDataType: 
T_2701: (in fn0800_13F7 : ptr32)
  Class: Eq_2701
  DataType: 
  OrigDataType: 
T_2702: (in signature of fn0800_13F7 : void)
  Class: Eq_2701
  DataType: 
  OrigDataType: 
T_2703: (in ax : word16)
  Class: Eq_2703
  DataType: 
  OrigDataType: 
T_2704: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2705: (in 0x000E : word16)
  Class: Eq_2705
  DataType: 
  OrigDataType: 
T_2706: (in fp - 0x000E : word16)
  Class: Eq_2706
  DataType: 
  OrigDataType: 
T_2707: (in Mem215[ss:fp - 0x000E:word16] : word16)
  Class: Eq_2703
  DataType: 
  OrigDataType: 
T_2708: (in fn0800_13F7(Mem215[ss:fp - 0x000E:word16], ds_195) : void)
  Class: Eq_2708
  DataType: 
  OrigDataType: 
T_2709: (in fn0800_11F1 : ptr32)
  Class: Eq_2709
  DataType: 
  OrigDataType: 
T_2710: (in signature of fn0800_11F1 : void)
  Class: Eq_2709
  DataType: 
  OrigDataType: 
T_2711: (in cx : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2712: (in bp : word16)
  Class: Eq_1446
  DataType: 
  OrigDataType: 
T_2713: (in si : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2714: (in di : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2715: (in es : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2716: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2717: (in 0x0000 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2718: (in fp - 0x008A : word16)
  Class: Eq_1446
  DataType: 
  OrigDataType: 
T_2719: (in fn0800_11F1(0x0000, fp - 0x008A, ax_172, di_189, es_107, ds_195) : void)
  Class: Eq_2719
  DataType: 
  OrigDataType: 
T_2720: (in ax : word16)
  Class: Eq_2720
  DataType: 
  OrigDataType: 
T_2721: (in cx_9 : word16)
  Class: Eq_2721
  DataType: 
  OrigDataType: 
T_2722: (in dx_10 : word16)
  Class: Eq_2722
  DataType: 
  OrigDataType: 
T_2723: (in bx_11 : word16)
  Class: Eq_2723
  DataType: 
  OrigDataType: 
T_2724: (in bp_12 : word16)
  Class: Eq_2724
  DataType: 
  OrigDataType: 
T_2725: (in si_13 : word16)
  Class: Eq_2725
  DataType: 
  OrigDataType: 
T_2726: (in di_14 : word16)
  Class: Eq_2726
  DataType: 
  OrigDataType: 
T_2727: (in es_15 : selector)
  Class: Eq_2727
  DataType: 
  OrigDataType: 
T_2728: (in fn0800_17A3 : ptr32)
  Class: Eq_2217
  DataType: 
  OrigDataType: 
T_2729: (in 0x0022 : word16)
  Class: Eq_2219
  DataType: 
  OrigDataType: 
T_2730: (in cx : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2731: (in bp : word16)
  Class: Eq_1446
  DataType: 
  OrigDataType: 
T_2732: (in si : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2733: (in di : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2734: (in es : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2735: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2736: (in out cx_9 : ptr16)
  Class: Eq_2226
  DataType: 
  OrigDataType: 
T_2737: (in out dx_10 : ptr16)
  Class: Eq_2227
  DataType: 
  OrigDataType: 
T_2738: (in out bx_11 : ptr16)
  Class: Eq_2228
  DataType: 
  OrigDataType: 
T_2739: (in out bp_12 : ptr16)
  Class: Eq_2229
  DataType: 
  OrigDataType: 
T_2740: (in out si_13 : ptr16)
  Class: Eq_2230
  DataType: 
  OrigDataType: 
T_2741: (in out di_14 : ptr16)
  Class: Eq_2231
  DataType: 
  OrigDataType: 
T_2742: (in out es_15 : ptr16)
  Class: Eq_2232
  DataType: 
  OrigDataType: 
T_2743: (in fn0800_17A3(0x0022, cx, bp, si, di, es, ds, out cx_9, out dx_10, out bx_11, out bp_12, out si_13, out di_14, out es_15) : word16)
  Class: Eq_2743
  DataType: 
  OrigDataType: 
T_2744: (in ss : selector)
  Class: Eq_2744
  DataType: 
  OrigDataType: 
T_2745: (in fp : ptr16)
  Class: Eq_2745
  DataType: 
  OrigDataType: 
T_2746: (in 0x0002 : word16)
  Class: Eq_2746
  DataType: 
  OrigDataType: 
T_2747: (in fp - 0x0002 : word16)
  Class: Eq_2747
  DataType: 
  OrigDataType: 
T_2748: (in Mem18[ss:fp - 0x0002:word16] : word16)
  Class: Eq_2723
  DataType: 
  OrigDataType: 
T_2749: (in 0x0004 : word16)
  Class: Eq_2749
  DataType: 
  OrigDataType: 
T_2750: (in fp - 0x0004 : word16)
  Class: Eq_2750
  DataType: 
  OrigDataType: 
T_2751: (in Mem21[ss:fp - 0x0004:word16] : word16)
  Class: Eq_2721
  DataType: 
  OrigDataType: 
T_2752: (in 0x0006 : word16)
  Class: Eq_2752
  DataType: 
  OrigDataType: 
T_2753: (in fp - 0x0006 : word16)
  Class: Eq_2753
  DataType: 
  OrigDataType: 
T_2754: (in Mem23[ss:fp - 0x0006:word16] : word16)
  Class: Eq_2722
  DataType: 
  OrigDataType: 
T_2755: (in 0x0008 : word16)
  Class: Eq_2755
  DataType: 
  OrigDataType: 
T_2756: (in fp - 0x0008 : word16)
  Class: Eq_2756
  DataType: 
  OrigDataType: 
T_2757: (in Mem25[ss:fp - 0x0008:word16] : word16)
  Class: Eq_2727
  DataType: 
  OrigDataType: 
T_2758: (in 0x000A : word16)
  Class: Eq_2758
  DataType: 
  OrigDataType: 
T_2759: (in fp - 0x000A : word16)
  Class: Eq_2759
  DataType: 
  OrigDataType: 
T_2760: (in Mem27[ss:fp - 0x000A:word16] : word16)
  Class: Eq_2724
  DataType: 
  OrigDataType: 
T_2761: (in 0x52 : byte)
  Class: Eq_2761
  DataType: 
  OrigDataType: 
T_2762: (in 0x001F : word16)
  Class: Eq_2762
  DataType: 
  OrigDataType: 
T_2763: (in fp - 0x001F : word16)
  Class: Eq_2763
  DataType: 
  OrigDataType: 
T_2764: (in Mem36[ss:fp - 0x001F:byte] : byte)
  Class: Eq_2761
  DataType: 
  OrigDataType: 
T_2765: (in ds_37 : selector)
  Class: Eq_2765
  DataType: 
  OrigDataType: 
T_2766: (in fn0800_1FA2 : ptr32)
  Class: Eq_2766
  DataType: 
  OrigDataType: 
T_2767: (in signature of fn0800_1FA2 : void)
  Class: Eq_2766
  DataType: 
  OrigDataType: 
T_2768: (in cx : word16)
  Class: Eq_2768
  DataType: 
  OrigDataType: 
T_2769: (in dx : word16)
  Class: Eq_2769
  DataType: 
  OrigDataType: 
T_2770: (in al : byte)
  Class: Eq_2770
  DataType: 
  OrigDataType: 
T_2771: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2772: (in 0x0012 : word16)
  Class: Eq_2772
  DataType: 
  OrigDataType: 
T_2773: (in fp - 0x0012 : word16)
  Class: Eq_2768
  DataType: 
  OrigDataType: 
T_2774: (in 0x0020 : word16)
  Class: Eq_2774
  DataType: 
  OrigDataType: 
T_2775: (in fp - 0x0020 : word16)
  Class: Eq_2769
  DataType: 
  OrigDataType: 
T_2776: (in 0x21 : byte)
  Class: Eq_2770
  DataType: 
  OrigDataType: 
T_2777: (in fn0800_1FA2(fp - 0x0012, fp - 0x0020, 0x21, ds) : selector)
  Class: Eq_2777
  DataType: 
  OrigDataType: 
T_2778: (in dsOut : ptr16)
  Class: Eq_2778
  DataType: 
  OrigDataType: 
T_2779: (in *dsOut : selector)
  Class: Eq_2777
  DataType: 
  OrigDataType: 
T_2780: (in ax_50 : word16)
  Class: Eq_2780
  DataType: 
  OrigDataType: 
T_2781: (in 0x0012 : word16)
  Class: Eq_2781
  DataType: 
  OrigDataType: 
T_2782: (in fp - 0x0012 : word16)
  Class: Eq_2782
  DataType: 
  OrigDataType: 
T_2783: (in Mem36[ss:fp - 0x0012:word16] : word16)
  Class: Eq_2783
  DataType: 
  OrigDataType: 
T_2784: (in 0x0020 : word16)
  Class: Eq_2784
  DataType: 
  OrigDataType: 
T_2785: (in fp - 0x0020 : word16)
  Class: Eq_2785
  DataType: 
  OrigDataType: 
T_2786: (in SEQ(Mem36[ss:fp - 0x0012:word16], fp - 0x0020) : ui32)
  Class: Eq_2786
  DataType: 
  OrigDataType: 
T_2787: (in 0x00000002 : ui32)
  Class: Eq_2787
  DataType: 
  OrigDataType: 
T_2788: (in SEQ(Mem36[ss:fp - 0x0012:word16], fp - 0x0020) - 0x00000002 : ui32)
  Class: Eq_2788
  DataType: 
  OrigDataType: 
T_2789: (in SLICE(SEQ(Mem36[ss:fp - 0x0012:word16], fp - 0x0020) - 0x00000002, word16, 16) : word16)
  Class: Eq_2789
  DataType: 
  OrigDataType: 
T_2790: (in 0x001E : word16)
  Class: Eq_2790
  DataType: 
  OrigDataType: 
T_2791: (in fp - 0x001E : word16)
  Class: Eq_2791
  DataType: 
  OrigDataType: 
T_2792: (in Mem36[ss:fp - 0x001E:word16] : word16)
  Class: Eq_2792
  DataType: 
  OrigDataType: 
T_2793: (in 0x0002 : word16)
  Class: Eq_2793
  DataType: 
  OrigDataType: 
T_2794: (in Mem36[ss:fp - 0x001E:word16] - 0x0002 : word16)
  Class: Eq_2794
  DataType: 
  OrigDataType: 
T_2795: (in Mem36[SLICE(SEQ(Mem36[ss:fp - 0x0012:word16], fp - 0x0020) - 0x00000002, word16, 16):Mem36[ss:fp - 0x001E:word16] - 0x0002:word16] : word16)
  Class: Eq_2780
  DataType: 
  OrigDataType: 
T_2796: (in 0x0001 : word16)
  Class: Eq_2796
  DataType: 
  OrigDataType: 
T_2797: (in ax_50 + 0x0001 : word16)
  Class: Eq_2797
  DataType: 
  OrigDataType: 
T_2798: (in cx : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2799: (in cx_12 : word16)
  Class: Eq_2799
  DataType: 
  OrigDataType: 
T_2800: (in dx_13 : word16)
  Class: Eq_2800
  DataType: 
  OrigDataType: 
T_2801: (in bx_14 : word16)
  Class: Eq_2801
  DataType: 
  OrigDataType: 
T_2802: (in bp_15 : word16)
  Class: Eq_2802
  DataType: 
  OrigDataType: 
T_2803: (in si_16 : word16)
  Class: Eq_2803
  DataType: 
  OrigDataType: 
T_2804: (in di_17 : word16)
  Class: Eq_2804
  DataType: 
  OrigDataType: 
T_2805: (in es_18 : selector)
  Class: Eq_2805
  DataType: 
  OrigDataType: 
T_2806: (in fn0800_17A3 : ptr32)
  Class: Eq_2217
  DataType: 
  OrigDataType: 
T_2807: (in 0x0008 : word16)
  Class: Eq_2219
  DataType: 
  OrigDataType: 
T_2808: (in bp : word16)
  Class: Eq_1446
  DataType: 
  OrigDataType: 
T_2809: (in si : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2810: (in di : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2811: (in es : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2812: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2813: (in out cx_12 : ptr16)
  Class: Eq_2226
  DataType: 
  OrigDataType: 
T_2814: (in out dx_13 : ptr16)
  Class: Eq_2227
  DataType: 
  OrigDataType: 
T_2815: (in out bx_14 : ptr16)
  Class: Eq_2228
  DataType: 
  OrigDataType: 
T_2816: (in out bp_15 : ptr16)
  Class: Eq_2229
  DataType: 
  OrigDataType: 
T_2817: (in out si_16 : ptr16)
  Class: Eq_2230
  DataType: 
  OrigDataType: 
T_2818: (in out di_17 : ptr16)
  Class: Eq_2231
  DataType: 
  OrigDataType: 
T_2819: (in out es_18 : ptr16)
  Class: Eq_2232
  DataType: 
  OrigDataType: 
T_2820: (in fn0800_17A3(0x0008, cx, bp, si, di, es, ds, out cx_12, out dx_13, out bx_14, out bp_15, out si_16, out di_17, out es_18) : word16)
  Class: Eq_2820
  DataType: 
  OrigDataType: 
T_2821: (in ax_22 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2822: (in ss : selector)
  Class: Eq_2822
  DataType: 
  OrigDataType: 
T_2823: (in fp : ptr16)
  Class: Eq_2823
  DataType: 
  OrigDataType: 
T_2824: (in 0x0002 : word16)
  Class: Eq_2824
  DataType: 
  OrigDataType: 
T_2825: (in fp - 0x0002 : word16)
  Class: Eq_2825
  DataType: 
  OrigDataType: 
T_2826: (in Mem0[ss:fp - 0x0002:word16] : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2827: (in 0x0002 : word16)
  Class: Eq_2827
  DataType: 
  OrigDataType: 
T_2828: (in fp - 0x0002 : word16)
  Class: Eq_2828
  DataType: 
  OrigDataType: 
T_2829: (in Mem25[ss:fp - 0x0002:word16] : word16)
  Class: Eq_2801
  DataType: 
  OrigDataType: 
T_2830: (in 0x0004 : word16)
  Class: Eq_2830
  DataType: 
  OrigDataType: 
T_2831: (in fp - 0x0004 : word16)
  Class: Eq_2831
  DataType: 
  OrigDataType: 
T_2832: (in Mem27[ss:fp - 0x0004:word16] : word16)
  Class: Eq_2800
  DataType: 
  OrigDataType: 
T_2833: (in 0x0006 : word16)
  Class: Eq_2833
  DataType: 
  OrigDataType: 
T_2834: (in fp - 0x0006 : word16)
  Class: Eq_2834
  DataType: 
  OrigDataType: 
T_2835: (in Mem29[ss:fp - 0x0006:word16] : word16)
  Class: Eq_2805
  DataType: 
  OrigDataType: 
T_2836: (in bx_34 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2837: (in msdos_resize_memory_block : ptr32)
  Class: Eq_908
  DataType: 
  OrigDataType: 
T_2838: (in 0xFFFF : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2839: (in out bx_34 : ptr16)
  Class: Eq_912
  DataType: 
  OrigDataType: 
T_2840: (in msdos_resize_memory_block(ax_22, 0xFFFF, out bx_34) : byte)
  Class: Eq_2840
  DataType: 
  OrigDataType: 
T_2841: (in bx_38 : word16)
  Class: Eq_2841
  DataType: 
  OrigDataType: 
T_2842: (in msdos_resize_memory_block : ptr32)
  Class: Eq_908
  DataType: 
  OrigDataType: 
T_2843: (in out bx_38 : ptr16)
  Class: Eq_912
  DataType: 
  OrigDataType: 
T_2844: (in msdos_resize_memory_block(ax_22, bx_34, out bx_38) : byte)
  Class: Eq_2844
  DataType: 
  OrigDataType: 
T_2845: (in ax : word16)
  Class: Eq_2845
  DataType: 
  OrigDataType: 
T_2846: (in cx_12 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2847: (in dx_13 : word16)
  Class: Eq_2847
  DataType: 
  OrigDataType: 
T_2848: (in bx_14 : word16)
  Class: Eq_2848
  DataType: 
  OrigDataType: 
T_2849: (in bp_15 : word16)
  Class: Eq_1446
  DataType: 
  OrigDataType: 
T_2850: (in si_16 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2851: (in di_17 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2852: (in es_18 : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2853: (in fn0800_17A3 : ptr32)
  Class: Eq_2217
  DataType: 
  OrigDataType: 
T_2854: (in 0x0006 : word16)
  Class: Eq_2219
  DataType: 
  OrigDataType: 
T_2855: (in cx : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2856: (in bp : word16)
  Class: Eq_1446
  DataType: 
  OrigDataType: 
T_2857: (in si : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2858: (in di : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2859: (in es : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2860: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2861: (in out cx_12 : ptr16)
  Class: Eq_2226
  DataType: 
  OrigDataType: 
T_2862: (in out dx_13 : ptr16)
  Class: Eq_2227
  DataType: 
  OrigDataType: 
T_2863: (in out bx_14 : ptr16)
  Class: Eq_2228
  DataType: 
  OrigDataType: 
T_2864: (in out bp_15 : ptr16)
  Class: Eq_2229
  DataType: 
  OrigDataType: 
T_2865: (in out si_16 : ptr16)
  Class: Eq_2230
  DataType: 
  OrigDataType: 
T_2866: (in out di_17 : ptr16)
  Class: Eq_2231
  DataType: 
  OrigDataType: 
T_2867: (in out es_18 : ptr16)
  Class: Eq_2232
  DataType: 
  OrigDataType: 
T_2868: (in fn0800_17A3(0x0006, cx, bp, si, di, es, ds, out cx_12, out dx_13, out bx_14, out bp_15, out si_16, out di_17, out es_18) : word16)
  Class: Eq_2868
  DataType: 
  OrigDataType: 
T_2869: (in ax_22 : word16)
  Class: Eq_2869
  DataType: 
  OrigDataType: 
T_2870: (in ss : selector)
  Class: Eq_2870
  DataType: 
  OrigDataType: 
T_2871: (in fp : ptr16)
  Class: Eq_2871
  DataType: 
  OrigDataType: 
T_2872: (in 0x0002 : word16)
  Class: Eq_2872
  DataType: 
  OrigDataType: 
T_2873: (in fp - 0x0002 : word16)
  Class: Eq_2873
  DataType: 
  OrigDataType: 
T_2874: (in Mem0[ss:fp - 0x0002:word16] : word16)
  Class: Eq_2869
  DataType: 
  OrigDataType: 
T_2875: (in 0x0002 : word16)
  Class: Eq_2875
  DataType: 
  OrigDataType: 
T_2876: (in fp - 0x0002 : word16)
  Class: Eq_2876
  DataType: 
  OrigDataType: 
T_2877: (in Mem25[ss:fp - 0x0002:word16] : word16)
  Class: Eq_2848
  DataType: 
  OrigDataType: 
T_2878: (in 0x0004 : word16)
  Class: Eq_2878
  DataType: 
  OrigDataType: 
T_2879: (in fp - 0x0004 : word16)
  Class: Eq_2879
  DataType: 
  OrigDataType: 
T_2880: (in Mem27[ss:fp - 0x0004:word16] : word16)
  Class: Eq_2847
  DataType: 
  OrigDataType: 
T_2881: (in dx_33 : word16)
  Class: Eq_2881
  DataType: 
  OrigDataType: 
T_2882: (in 0x48 : byte)
  Class: Eq_2882
  DataType: 
  OrigDataType: 
T_2883: (in DPB(ax_22, 0x48, 8, 8) : word16)
  Class: Eq_2881
  DataType: 
  OrigDataType: 
T_2884: (in 0x0000 : word16)
  Class: Eq_2884
  DataType: 
  OrigDataType: 
T_2885: (in msdos_allocate_memory_block : ptr32)
  Class: Eq_2885
  DataType: 
  OrigDataType: 
T_2886: (in signature of msdos_allocate_memory_block : void)
  Class: Eq_2885
  DataType: 
  OrigDataType: 
T_2887: (in bx : word16)
  Class: Eq_2869
  DataType: 
  OrigDataType: 
T_2888: (in msdos_allocate_memory_block(ax_22) : bool)
  Class: Eq_2888
  DataType: 
  OrigDataType: 
T_2889: (in 0x0000 - msdos_allocate_memory_block(ax_22) : word16)
  Class: Eq_2889
  DataType: 
  OrigDataType: 
T_2890: (in 0x0000 : word16)
  Class: Eq_2889
  DataType: 
  OrigDataType: 
T_2891: (in 0x0000 - msdos_allocate_memory_block(ax_22) >= 0x0000 : bool)
  Class: Eq_2891
  DataType: 
  OrigDataType: 
T_2892: (in bp_58 : word16)
  Class: Eq_2892
  DataType: 
  OrigDataType: 
T_2893: (in si_59 : word16)
  Class: Eq_2893
  DataType: 
  OrigDataType: 
T_2894: (in di_60 : word16)
  Class: Eq_2894
  DataType: 
  OrigDataType: 
T_2895: (in cx_61 : word16)
  Class: Eq_2895
  DataType: 
  OrigDataType: 
T_2896: (in fn0800_1000 : ptr32)
  Class: Eq_2896
  DataType: 
  OrigDataType: 
T_2897: (in signature of fn0800_1000 : void)
  Class: Eq_2896
  DataType: 
  OrigDataType: 
T_2898: (in bpOut : ptr16)
  Class: Eq_2898
  DataType: 
  OrigDataType: 
T_2899: (in siOut : ptr16)
  Class: Eq_2899
  DataType: 
  OrigDataType: 
T_2900: (in diOut : ptr16)
  Class: Eq_2900
  DataType: 
  OrigDataType: 
T_2901: (in out bp_58 : ptr16)
  Class: Eq_2898
  DataType: 
  OrigDataType: 
T_2902: (in out si_59 : ptr16)
  Class: Eq_2899
  DataType: 
  OrigDataType: 
T_2903: (in out di_60 : ptr16)
  Class: Eq_2900
  DataType: 
  OrigDataType: 
T_2904: (in fn0800_1000(cx_12, bp_15, si_16, di_17, es_18, ds, out bp_58, out si_59, out di_60) : word16)
  Class: Eq_2904
  DataType: 
  OrigDataType: 
T_2905: (in cxOut : ptr16)
  Class: Eq_2905
  DataType: 
  OrigDataType: 
T_2906: (in *cxOut : word16)
  Class: Eq_2904
  DataType: 
  OrigDataType: 
T_2907: (in 0x0000 : word16)
  Class: Eq_2881
  DataType: 
  OrigDataType: 
T_2908: (in ax : word16)
  Class: Eq_2908
  DataType: 
  OrigDataType: 
T_2909: (in ax_44 : word16)
  Class: Eq_2909
  DataType: 
  OrigDataType: 
T_2910: (in cx_12 : word16)
  Class: Eq_2910
  DataType: 
  OrigDataType: 
T_2911: (in dx_13 : word16)
  Class: Eq_2911
  DataType: 
  OrigDataType: 
T_2912: (in bx_14 : word16)
  Class: Eq_2912
  DataType: 
  OrigDataType: 
T_2913: (in bp_15 : word16)
  Class: Eq_1446
  DataType: 
  OrigDataType: 
T_2914: (in si_16 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2915: (in di_17 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2916: (in es_18 : selector)
  Class: Eq_2916
  DataType: 
  OrigDataType: 
T_2917: (in fn0800_17A3 : ptr32)
  Class: Eq_2217
  DataType: 
  OrigDataType: 
T_2918: (in 0x0008 : word16)
  Class: Eq_2219
  DataType: 
  OrigDataType: 
T_2919: (in cx : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2920: (in bp : word16)
  Class: Eq_1446
  DataType: 
  OrigDataType: 
T_2921: (in si : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2922: (in di : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2923: (in es : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2924: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2925: (in out cx_12 : ptr16)
  Class: Eq_2226
  DataType: 
  OrigDataType: 
T_2926: (in out dx_13 : ptr16)
  Class: Eq_2227
  DataType: 
  OrigDataType: 
T_2927: (in out bx_14 : ptr16)
  Class: Eq_2228
  DataType: 
  OrigDataType: 
T_2928: (in out bp_15 : ptr16)
  Class: Eq_2229
  DataType: 
  OrigDataType: 
T_2929: (in out si_16 : ptr16)
  Class: Eq_2230
  DataType: 
  OrigDataType: 
T_2930: (in out di_17 : ptr16)
  Class: Eq_2231
  DataType: 
  OrigDataType: 
T_2931: (in out es_18 : ptr16)
  Class: Eq_2232
  DataType: 
  OrigDataType: 
T_2932: (in fn0800_17A3(0x0008, cx, bp, si, di, es, ds, out cx_12, out dx_13, out bx_14, out bp_15, out si_16, out di_17, out es_18) : word16)
  Class: Eq_2932
  DataType: 
  OrigDataType: 
T_2933: (in ax_22 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2934: (in ss : selector)
  Class: Eq_2934
  DataType: 
  OrigDataType: 
T_2935: (in fp : ptr16)
  Class: Eq_2935
  DataType: 
  OrigDataType: 
T_2936: (in 0x0002 : word16)
  Class: Eq_2936
  DataType: 
  OrigDataType: 
T_2937: (in fp - 0x0002 : word16)
  Class: Eq_2937
  DataType: 
  OrigDataType: 
T_2938: (in Mem0[ss:fp - 0x0002:word16] : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2939: (in 0x0002 : word16)
  Class: Eq_2939
  DataType: 
  OrigDataType: 
T_2940: (in fp - 0x0002 : word16)
  Class: Eq_2940
  DataType: 
  OrigDataType: 
T_2941: (in Mem26[ss:fp - 0x0002:word16] : word16)
  Class: Eq_2912
  DataType: 
  OrigDataType: 
T_2942: (in 0x0004 : word16)
  Class: Eq_2942
  DataType: 
  OrigDataType: 
T_2943: (in fp - 0x0004 : word16)
  Class: Eq_2943
  DataType: 
  OrigDataType: 
T_2944: (in Mem28[ss:fp - 0x0004:word16] : word16)
  Class: Eq_2910
  DataType: 
  OrigDataType: 
T_2945: (in 0x0006 : word16)
  Class: Eq_2945
  DataType: 
  OrigDataType: 
T_2946: (in fp - 0x0006 : word16)
  Class: Eq_2946
  DataType: 
  OrigDataType: 
T_2947: (in Mem30[ss:fp - 0x0006:word16] : word16)
  Class: Eq_2916
  DataType: 
  OrigDataType: 
T_2948: (in cx_35 : word16)
  Class: Eq_2948
  DataType: 
  OrigDataType: 
T_2949: (in 0x0001 : word16)
  Class: Eq_2949
  DataType: 
  OrigDataType: 
T_2950: (in ax_22 - 0x0001 : word16)
  Class: Eq_2950
  DataType: 
  OrigDataType: 
T_2951: (in 0x0003 : word16)
  Class: Eq_2951
  DataType: 
  OrigDataType: 
T_2952: (in Mem30[ax_22 - 0x0001:0x0003:word16] : word16)
  Class: Eq_2948
  DataType: 
  OrigDataType: 
T_2953: (in 0x0001 : word16)
  Class: Eq_2953
  DataType: 
  OrigDataType: 
T_2954: (in dx_13 + 0x0001 : word16)
  Class: Eq_2948
  DataType: 
  OrigDataType: 
T_2955: (in cx_35 >=u dx_13 + 0x0001 : bool)
  Class: Eq_2955
  DataType: 
  OrigDataType: 
T_2956: (in cx_61 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2957: (in dx_13 + 0x0001 : word16)
  Class: Eq_2957
  DataType: 
  OrigDataType: 
T_2958: (in cx_35 - (dx_13 + 0x0001) : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2959: (in bx_65 : word16)
  Class: Eq_2959
  DataType: 
  OrigDataType: 
T_2960: (in msdos_resize_memory_block : ptr32)
  Class: Eq_908
  DataType: 
  OrigDataType: 
T_2961: (in out bx_65 : ptr16)
  Class: Eq_912
  DataType: 
  OrigDataType: 
T_2962: (in msdos_resize_memory_block(ax_22, cx_61, out bx_65) : byte)
  Class: Eq_2962
  DataType: 
  OrigDataType: 
T_2963: (in cx_70 : word16)
  Class: Eq_2963
  DataType: 
  OrigDataType: 
T_2964: (in bp_71 : word16)
  Class: Eq_2964
  DataType: 
  OrigDataType: 
T_2965: (in si_72 : word16)
  Class: Eq_2965
  DataType: 
  OrigDataType: 
T_2966: (in di_73 : word16)
  Class: Eq_2966
  DataType: 
  OrigDataType: 
T_2967: (in es_74 : selector)
  Class: Eq_2967
  DataType: 
  OrigDataType: 
T_2968: (in fn0800_1022 : ptr32)
  Class: Eq_2968
  DataType: 
  OrigDataType: 
T_2969: (in signature of fn0800_1022 : void)
  Class: Eq_2968
  DataType: 
  OrigDataType: 
T_2970: (in bpOut : ptr16)
  Class: Eq_2970
  DataType: 
  OrigDataType: 
T_2971: (in siOut : ptr16)
  Class: Eq_2971
  DataType: 
  OrigDataType: 
T_2972: (in diOut : ptr16)
  Class: Eq_2972
  DataType: 
  OrigDataType: 
T_2973: (in esOut : ptr16)
  Class: Eq_2973
  DataType: 
  OrigDataType: 
T_2974: (in out cx_70 : ptr16)
  Class: Eq_2905
  DataType: 
  OrigDataType: 
T_2975: (in out bp_71 : ptr16)
  Class: Eq_2970
  DataType: 
  OrigDataType: 
T_2976: (in out si_72 : ptr16)
  Class: Eq_2971
  DataType: 
  OrigDataType: 
T_2977: (in out di_73 : ptr16)
  Class: Eq_2972
  DataType: 
  OrigDataType: 
T_2978: (in out es_74 : ptr16)
  Class: Eq_2973
  DataType: 
  OrigDataType: 
T_2979: (in fn0800_1022(cx_61, bp_15, si_16, di_17, ax_22, ds, out cx_70, out bp_71, out si_72, out di_73, out es_74) : word16)
  Class: Eq_2909
  DataType: 
  OrigDataType: 
T_2980: (in 0x0000 : word16)
  Class: Eq_2909
  DataType: 
  OrigDataType: 
T_2981: (in cx : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2982: (in cx_9 : word16)
  Class: Eq_2982
  DataType: 
  OrigDataType: 
T_2983: (in dx_10 : word16)
  Class: Eq_2983
  DataType: 
  OrigDataType: 
T_2984: (in bx_11 : word16)
  Class: Eq_2984
  DataType: 
  OrigDataType: 
T_2985: (in bp_12 : word16)
  Class: Eq_2985
  DataType: 
  OrigDataType: 
T_2986: (in si_13 : word16)
  Class: Eq_2986
  DataType: 
  OrigDataType: 
T_2987: (in di_14 : word16)
  Class: Eq_2987
  DataType: 
  OrigDataType: 
T_2988: (in es_15 : selector)
  Class: Eq_2988
  DataType: 
  OrigDataType: 
T_2989: (in ax_16 : word16)
  Class: Eq_2989
  DataType: 
  OrigDataType: 
T_2990: (in fn0800_17A3 : ptr32)
  Class: Eq_2217
  DataType: 
  OrigDataType: 
T_2991: (in 0x0002 : word16)
  Class: Eq_2219
  DataType: 
  OrigDataType: 
T_2992: (in bp : word16)
  Class: Eq_1446
  DataType: 
  OrigDataType: 
T_2993: (in si : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2994: (in di : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2995: (in es : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2996: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_2997: (in out cx_9 : ptr16)
  Class: Eq_2226
  DataType: 
  OrigDataType: 
T_2998: (in out dx_10 : ptr16)
  Class: Eq_2227
  DataType: 
  OrigDataType: 
T_2999: (in out bx_11 : ptr16)
  Class: Eq_2228
  DataType: 
  OrigDataType: 
T_3000: (in out bp_12 : ptr16)
  Class: Eq_2229
  DataType: 
  OrigDataType: 
T_3001: (in out si_13 : ptr16)
  Class: Eq_2230
  DataType: 
  OrigDataType: 
T_3002: (in out di_14 : ptr16)
  Class: Eq_2231
  DataType: 
  OrigDataType: 
T_3003: (in out es_15 : ptr16)
  Class: Eq_2232
  DataType: 
  OrigDataType: 
T_3004: (in fn0800_17A3(0x0002, cx, bp, si, di, es, ds, out cx_9, out dx_10, out bx_11, out bp_12, out si_13, out di_14, out es_15) : word16)
  Class: Eq_2989
  DataType: 
  OrigDataType: 
T_3005: (in cs : selector)
  Class: Eq_3005
  DataType: 
  OrigDataType: 
T_3006: (in 0x0216 : word16)
  Class: Eq_3006
  DataType: 
  OrigDataType: 
T_3007: (in Mem0[ds:0x0216:word16] : word16)
  Class: Eq_3007
  DataType: 
  OrigDataType: 
T_3008: (in SEQ(cs, Mem0[ds:0x0216:word16]) : ptr32)
  Class: Eq_3008
  DataType: 
  OrigDataType: 
T_3009: (in *dsOut : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3010: (in cx_12 : word16)
  Class: Eq_3010
  DataType: 
  OrigDataType: 
T_3011: (in dx_13 : word16)
  Class: Eq_3011
  DataType: 
  OrigDataType: 
T_3012: (in bx_14 : word16)
  Class: Eq_3012
  DataType: 
  OrigDataType: 
T_3013: (in bp_15 : word16)
  Class: Eq_3013
  DataType: 
  OrigDataType: 
T_3014: (in si_16 : word16)
  Class: Eq_3014
  DataType: 
  OrigDataType: 
T_3015: (in di_17 : word16)
  Class: Eq_3015
  DataType: 
  OrigDataType: 
T_3016: (in es_18 : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3017: (in fn0800_17A3 : ptr32)
  Class: Eq_2217
  DataType: 
  OrigDataType: 
T_3018: (in 0x0014 : word16)
  Class: Eq_2219
  DataType: 
  OrigDataType: 
T_3019: (in out cx_12 : ptr16)
  Class: Eq_2226
  DataType: 
  OrigDataType: 
T_3020: (in out dx_13 : ptr16)
  Class: Eq_2227
  DataType: 
  OrigDataType: 
T_3021: (in out bx_14 : ptr16)
  Class: Eq_2228
  DataType: 
  OrigDataType: 
T_3022: (in out bp_15 : ptr16)
  Class: Eq_2229
  DataType: 
  OrigDataType: 
T_3023: (in out si_16 : ptr16)
  Class: Eq_2230
  DataType: 
  OrigDataType: 
T_3024: (in out di_17 : ptr16)
  Class: Eq_2231
  DataType: 
  OrigDataType: 
T_3025: (in out es_18 : ptr16)
  Class: Eq_2232
  DataType: 
  OrigDataType: 
T_3026: (in fn0800_17A3(0x0014, cx, bp, si, di, es, ds, out cx_12, out dx_13, out bx_14, out bp_15, out si_16, out di_17, out es_18) : word16)
  Class: Eq_3026
  DataType: 
  OrigDataType: 
T_3027: (in ax_22 : word16)
  Class: Eq_3027
  DataType: 
  OrigDataType: 
T_3028: (in ss : selector)
  Class: Eq_3028
  DataType: 
  OrigDataType: 
T_3029: (in fp : ptr16)
  Class: Eq_3029
  DataType: 
  OrigDataType: 
T_3030: (in 0x0002 : word16)
  Class: Eq_3030
  DataType: 
  OrigDataType: 
T_3031: (in fp - 0x0002 : word16)
  Class: Eq_3031
  DataType: 
  OrigDataType: 
T_3032: (in Mem0[ss:fp - 0x0002:word16] : word16)
  Class: Eq_3027
  DataType: 
  OrigDataType: 
T_3033: (in 0x0002 : word16)
  Class: Eq_3033
  DataType: 
  OrigDataType: 
T_3034: (in fp - 0x0002 : word16)
  Class: Eq_3034
  DataType: 
  OrigDataType: 
T_3035: (in Mem25[ss:fp - 0x0002:word16] : word16)
  Class: Eq_3010
  DataType: 
  OrigDataType: 
T_3036: (in 0x0004 : word16)
  Class: Eq_3036
  DataType: 
  OrigDataType: 
T_3037: (in fp - 0x0004 : word16)
  Class: Eq_3037
  DataType: 
  OrigDataType: 
T_3038: (in Mem27[ss:fp - 0x0004:word16] : word16)
  Class: Eq_3014
  DataType: 
  OrigDataType: 
T_3039: (in 0x0006 : word16)
  Class: Eq_3039
  DataType: 
  OrigDataType: 
T_3040: (in fp - 0x0006 : word16)
  Class: Eq_3040
  DataType: 
  OrigDataType: 
T_3041: (in Mem29[ss:fp - 0x0006:word16] : word16)
  Class: Eq_3015
  DataType: 
  OrigDataType: 
T_3042: (in 0x0008 : word16)
  Class: Eq_3042
  DataType: 
  OrigDataType: 
T_3043: (in fp - 0x0008 : word16)
  Class: Eq_3043
  DataType: 
  OrigDataType: 
T_3044: (in Mem31[ss:fp - 0x0008:word16] : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3045: (in 0x000A : word16)
  Class: Eq_3045
  DataType: 
  OrigDataType: 
T_3046: (in fp - 0x000A : word16)
  Class: Eq_3046
  DataType: 
  OrigDataType: 
T_3047: (in Mem33[ss:fp - 0x000A:word16] : word16)
  Class: Eq_3013
  DataType: 
  OrigDataType: 
T_3048: (in 0x000C : word16)
  Class: Eq_3048
  DataType: 
  OrigDataType: 
T_3049: (in fp - 0x000C : word16)
  Class: Eq_3049
  DataType: 
  OrigDataType: 
T_3050: (in Mem36[ss:fp - 0x000C:word16] : word16)
  Class: Eq_3027
  DataType: 
  OrigDataType: 
T_3051: (in 0x000E : word16)
  Class: Eq_3051
  DataType: 
  OrigDataType: 
T_3052: (in fp - 0x000E : word16)
  Class: Eq_3052
  DataType: 
  OrigDataType: 
T_3053: (in Mem38[ss:fp - 0x000E:word16] : word16)
  Class: Eq_3011
  DataType: 
  OrigDataType: 
T_3054: (in 0x0010 : word16)
  Class: Eq_3054
  DataType: 
  OrigDataType: 
T_3055: (in fp - 0x0010 : word16)
  Class: Eq_3055
  DataType: 
  OrigDataType: 
T_3056: (in Mem40[ss:fp - 0x0010:word16] : word16)
  Class: Eq_3012
  DataType: 
  OrigDataType: 
T_3057: (in bp_188 : word16)
  Class: Eq_1446
  DataType: 
  OrigDataType: 
T_3058: (in fp - 0x000A : word16)
  Class: Eq_1446
  DataType: 
  OrigDataType: 
T_3059: (in si_134 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3060: (in 0x0000 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3061: (in di_133 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3062: (in 0x0000 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3063: (in cx_414 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3064: (in 0x0000 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3065: (in cx_155 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3066: (in es_201 : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3067: (in ax_62 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3068: (in fn0800_1022 : ptr32)
  Class: Eq_2968
  DataType: 
  OrigDataType: 
T_3069: (in out cx_155 : ptr16)
  Class: Eq_2905
  DataType: 
  OrigDataType: 
T_3070: (in out bp_188 : ptr16)
  Class: Eq_2970
  DataType: 
  OrigDataType: 
T_3071: (in out si_134 : ptr16)
  Class: Eq_2971
  DataType: 
  OrigDataType: 
T_3072: (in out di_133 : ptr16)
  Class: Eq_2972
  DataType: 
  OrigDataType: 
T_3073: (in out es_201 : ptr16)
  Class: Eq_2973
  DataType: 
  OrigDataType: 
T_3074: (in fn0800_1022(cx_414, bp_188, si_134, di_133, es_18, ds, out cx_155, out bp_188, out si_134, out di_133, out es_201) : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3075: (in 0x0000 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3076: (in ax_62 != 0x0000 : bool)
  Class: Eq_3076
  DataType: 
  OrigDataType: 
T_3077: (in 0x0000 : word16)
  Class: Eq_3077
  DataType: 
  OrigDataType: 
T_3078: (in Mem413[ax_62:0x0000:word16] : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3079: (in ax_112 : word16)
  Class: Eq_3079
  DataType: 
  OrigDataType: 
T_3080: (in 0x00 : byte)
  Class: Eq_3080
  DataType: 
  OrigDataType: 
T_3081: (in DPB(ax_62, 0x00, 8, 8) : word16)
  Class: Eq_3081
  DataType: 
  OrigDataType: 
T_3082: (in 0x0002 : word16)
  Class: Eq_3081
  DataType: 
  OrigDataType: 
T_3083: (in DPB(ax_62, 0x00, 8, 8) != 0x0002 : bool)
  Class: Eq_3083
  DataType: 
  OrigDataType: 
T_3084: (in bx_193 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3085: (in 0x0000 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3086: (in cx_155 == 0x0000 : bool)
  Class: Eq_3086
  DataType: 
  OrigDataType: 
T_3087: (in di_403 : word16)
  Class: Eq_3087
  DataType: 
  OrigDataType: 
T_3088: (in ax_404 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3089: (in fn0800_1046 : ptr32)
  Class: Eq_3089
  DataType: 
  OrigDataType: 
T_3090: (in signature of fn0800_1046 : void)
  Class: Eq_3089
  DataType: 
  OrigDataType: 
T_3091: (in bpOut : ptr16)
  Class: Eq_3091
  DataType: 
  OrigDataType: 
T_3092: (in siOut : ptr16)
  Class: Eq_3092
  DataType: 
  OrigDataType: 
T_3093: (in diOut : ptr16)
  Class: Eq_3093
  DataType: 
  OrigDataType: 
T_3094: (in out bp_188 : ptr16)
  Class: Eq_3091
  DataType: 
  OrigDataType: 
T_3095: (in out si_134 : ptr16)
  Class: Eq_3092
  DataType: 
  OrigDataType: 
T_3096: (in out di_403 : ptr16)
  Class: Eq_3093
  DataType: 
  OrigDataType: 
T_3097: (in fn0800_1046(cx_155, bp_188, si_134, di_133, es_201, ds, out bp_188, out si_134, out di_403) : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3098: (in 0x0000 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3099: (in ax_404 == 0x0000 : bool)
  Class: Eq_3099
  DataType: 
  OrigDataType: 
T_3100: (in 0x0000 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3101: (in bx_193 != 0x0000 : bool)
  Class: Eq_3101
  DataType: 
  OrigDataType: 
T_3102: (in si_380 : word16)
  Class: Eq_3102
  DataType: 
  OrigDataType: 
T_3103: (in ax_382 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3104: (in fn0800_1046 : ptr32)
  Class: Eq_3089
  DataType: 
  OrigDataType: 
T_3105: (in out bp_188 : ptr16)
  Class: Eq_3091
  DataType: 
  OrigDataType: 
T_3106: (in out si_380 : ptr16)
  Class: Eq_3092
  DataType: 
  OrigDataType: 
T_3107: (in out di_133 : ptr16)
  Class: Eq_3093
  DataType: 
  OrigDataType: 
T_3108: (in fn0800_1046(cx_155, bp_188, si_134, di_133, es_201, ds, out bp_188, out si_380, out di_133) : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3109: (in 0x0000 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3110: (in ax_382 != 0x0000 : bool)
  Class: Eq_3110
  DataType: 
  OrigDataType: 
T_3111: (in 0x0000 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3112: (in si_134 == 0x0000 : bool)
  Class: Eq_3112
  DataType: 
  OrigDataType: 
T_3113: (in ax_220 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3114: (in 0x0226 : word16)
  Class: Eq_3114
  DataType: 
  OrigDataType: 
T_3115: (in Mem40[ds:0x0226:word16] : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3116: (in ax_220 >=u si_134 : bool)
  Class: Eq_3116
  DataType: 
  OrigDataType: 
T_3117: (in 0x0000 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3118: (in di_133 == 0x0000 : bool)
  Class: Eq_3118
  DataType: 
  OrigDataType: 
T_3119: (in 0x0000 : word16)
  Class: Eq_3119
  DataType: 
  OrigDataType: 
T_3120: (in ax_382 + 0x0000 : word16)
  Class: Eq_3120
  DataType: 
  OrigDataType: 
T_3121: (in Mem40[bx_193:ax_382 + 0x0000:word16] : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3122: (in ax_242 : word16)
  Class: Eq_3122
  DataType: 
  OrigDataType: 
T_3123: (in 0x0006 : word16)
  Class: Eq_3123
  DataType: 
  OrigDataType: 
T_3124: (in bp_188 - 0x0006 : word16)
  Class: Eq_3124
  DataType: 
  OrigDataType: 
T_3125: (in Mem40[ss:bp_188 - 0x0006:word16] : word16)
  Class: Eq_3122
  DataType: 
  OrigDataType: 
T_3126: (in es_243 : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3127: (in 0x0226 : word16)
  Class: Eq_3127
  DataType: 
  OrigDataType: 
T_3128: (in Mem40[ds:0x0226:selector] : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3129: (in 0x002C : word16)
  Class: Eq_3129
  DataType: 
  OrigDataType: 
T_3130: (in Mem247[es_243:0x002C:word16] : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3131: (in 0x04 : byte)
  Class: Eq_3131
  DataType: 
  OrigDataType: 
T_3132: (in ax_242 << 0x04 : word16)
  Class: Eq_3132
  DataType: 
  OrigDataType: 
T_3133: (in 0x0012 : word16)
  Class: Eq_3133
  DataType: 
  OrigDataType: 
T_3134: (in fp - 0x0012 : word16)
  Class: Eq_3134
  DataType: 
  OrigDataType: 
T_3135: (in Mem249[ss:fp - 0x0012:word16] : word16)
  Class: Eq_3132
  DataType: 
  OrigDataType: 
T_3136: (in bp_258 : word16)
  Class: Eq_1446
  DataType: 
  OrigDataType: 
T_3137: (in es_261 : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3138: (in di_260 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3139: (in si_259 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3140: (in cx_262 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3141: (in fn0800_107C : ptr32)
  Class: Eq_3141
  DataType: 
  OrigDataType: 
T_3142: (in signature of fn0800_107C : void)
  Class: Eq_3141
  DataType: 
  OrigDataType: 
T_3143: (in bpOut : ptr16)
  Class: Eq_3143
  DataType: 
  OrigDataType: 
T_3144: (in siOut : ptr16)
  Class: Eq_3144
  DataType: 
  OrigDataType: 
T_3145: (in diOut : ptr16)
  Class: Eq_3145
  DataType: 
  OrigDataType: 
T_3146: (in esOut : ptr16)
  Class: Eq_3146
  DataType: 
  OrigDataType: 
T_3147: (in fn0800_2045 : ptr32)
  Class: Eq_3147
  DataType: 
  OrigDataType: 
T_3148: (in signature of fn0800_2045 : void)
  Class: Eq_3147
  DataType: 
  OrigDataType: 
T_3149: (in ax : word16)
  Class: Eq_3149
  DataType: 
  OrigDataType: 
T_3150: (in cx : word16)
  Class: Eq_3150
  DataType: 
  OrigDataType: 
T_3151: (in dx : word16)
  Class: Eq_3151
  DataType: 
  OrigDataType: 
T_3152: (in bx : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3153: (in wArg02 : word16)
  Class: Eq_3153
  DataType: 
  OrigDataType: 
T_3154: (in 0x0004 : word16)
  Class: Eq_3154
  DataType: 
  OrigDataType: 
T_3155: (in bp_188 - 0x0004 : word16)
  Class: Eq_3155
  DataType: 
  OrigDataType: 
T_3156: (in Mem249[ss:bp_188 - 0x0004:word16] : word16)
  Class: Eq_3149
  DataType: 
  OrigDataType: 
T_3157: (in 0x0000 : word16)
  Class: Eq_3150
  DataType: 
  OrigDataType: 
T_3158: (in 0x0000 : word16)
  Class: Eq_3151
  DataType: 
  OrigDataType: 
T_3159: (in wArg00 : word16)
  Class: Eq_3153
  DataType: 
  OrigDataType: 
T_3160: (in fn0800_2045(Mem249[ss:bp_188 - 0x0004:word16], 0x0000, 0x0000, si_134, wArg00) : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3161: (in out bp_258 : ptr16)
  Class: Eq_3143
  DataType: 
  OrigDataType: 
T_3162: (in out si_259 : ptr16)
  Class: Eq_3144
  DataType: 
  OrigDataType: 
T_3163: (in out di_260 : ptr16)
  Class: Eq_3145
  DataType: 
  OrigDataType: 
T_3164: (in out es_261 : ptr16)
  Class: Eq_3146
  DataType: 
  OrigDataType: 
T_3165: (in fn0800_107C(fn0800_2045(Mem249[ss:bp_188 - 0x0004:word16], 0x0000, 0x0000, si_134, wArg00), bp_188, si_134, di_133, es_243, ds, out bp_258, out si_259, out di_260, out es_261) : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3166: (in dx_354 : word16)
  Class: Eq_3166
  DataType: 
  OrigDataType: 
T_3167: (in 0x0001 : word16)
  Class: Eq_3167
  DataType: 
  OrigDataType: 
T_3168: (in ax_220 - 0x0001 : word16)
  Class: Eq_3166
  DataType: 
  OrigDataType: 
T_3169: (in dx_359 : word16)
  Class: Eq_3169
  DataType: 
  OrigDataType: 
T_3170: (in 0x0001 : word16)
  Class: Eq_3170
  DataType: 
  OrigDataType: 
T_3171: (in Mem40[dx_354:0x0001:word16] : word16)
  Class: Eq_3169
  DataType: 
  OrigDataType: 
T_3172: (in 0x0226 : word16)
  Class: Eq_3172
  DataType: 
  OrigDataType: 
T_3173: (in Mem40[ds:0x0226:word16] : word16)
  Class: Eq_3169
  DataType: 
  OrigDataType: 
T_3174: (in dx_359 == Mem40[ds:0x0226:word16] : bool)
  Class: Eq_3174
  DataType: 
  OrigDataType: 
T_3175: (in ax_362 : word16)
  Class: Eq_3175
  DataType: 
  OrigDataType: 
T_3176: (in 0x0003 : word16)
  Class: Eq_3176
  DataType: 
  OrigDataType: 
T_3177: (in Mem40[dx_354:0x0003:word16] : word16)
  Class: Eq_3177
  DataType: 
  OrigDataType: 
T_3178: (in ax_220 + Mem40[dx_354:0x0003:word16] : word16)
  Class: Eq_3175
  DataType: 
  OrigDataType: 
T_3179: (in 0x0000 : word16)
  Class: Eq_3179
  DataType: 
  OrigDataType: 
T_3180: (in 0x004D : word16)
  Class: Eq_3179
  DataType: 
  OrigDataType: 
T_3181: (in 0x0000 == 0x004D : bool)
  Class: Eq_3181
  DataType: 
  OrigDataType: 
T_3182: (in dx_302 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3183: (in ax_283 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3184: (in 0x0001 : word16)
  Class: Eq_3184
  DataType: 
  OrigDataType: 
T_3185: (in ax_283 - 0x0001 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3186: (in cx_309 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3187: (in 0x0001 : word16)
  Class: Eq_3187
  DataType: 
  OrigDataType: 
T_3188: (in ax_283 - 0x0001 : word16)
  Class: Eq_3188
  DataType: 
  OrigDataType: 
T_3189: (in 0x00 : byte)
  Class: Eq_3189
  DataType: 
  OrigDataType: 
T_3190: (in DPB(ax_283 - 0x0001, 0x00, 8, 8) : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3191: (in 0x004D : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3192: (in cx_309 == 0x004D : bool)
  Class: Eq_3192
  DataType: 
  OrigDataType: 
T_3193: (in dx_298 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3194: (in ax_283 == dx_298 : bool)
  Class: Eq_3194
  DataType: 
  OrigDataType: 
T_3195: (in ax_283 != si_259 : bool)
  Class: Eq_3195
  DataType: 
  OrigDataType: 
T_3196: (in msdos_free_memory_block : ptr32)
  Class: Eq_3196
  DataType: 
  OrigDataType: 
T_3197: (in signature of msdos_free_memory_block : void)
  Class: Eq_3196
  DataType: 
  OrigDataType: 
T_3198: (in es : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3199: (in msdos_free_memory_block(ax_283) : byte)
  Class: Eq_3199
  DataType: 
  OrigDataType: 
T_3200: (in 0x0003 : word16)
  Class: Eq_3200
  DataType: 
  OrigDataType: 
T_3201: (in Mem249[dx_302:0x0003:word16] : word16)
  Class: Eq_3201
  DataType: 
  OrigDataType: 
T_3202: (in ax_283 + Mem249[dx_302:0x0003:word16] : word16)
  Class: Eq_3202
  DataType: 
  OrigDataType: 
T_3203: (in 0x0001 : word16)
  Class: Eq_3203
  DataType: 
  OrigDataType: 
T_3204: (in ax_283 + Mem249[dx_302:0x0003:word16] + 0x0001 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3205: (in bp_313 : word16)
  Class: Eq_3205
  DataType: 
  OrigDataType: 
T_3206: (in si_314 : word16)
  Class: Eq_3206
  DataType: 
  OrigDataType: 
T_3207: (in di_315 : word16)
  Class: Eq_3207
  DataType: 
  OrigDataType: 
T_3208: (in fn0800_1000 : ptr32)
  Class: Eq_2896
  DataType: 
  OrigDataType: 
T_3209: (in out bp_313 : ptr16)
  Class: Eq_2898
  DataType: 
  OrigDataType: 
T_3210: (in out si_314 : ptr16)
  Class: Eq_2899
  DataType: 
  OrigDataType: 
T_3211: (in out di_315 : ptr16)
  Class: Eq_2900
  DataType: 
  OrigDataType: 
T_3212: (in fn0800_1000(cx_309, bp_258, si_259, di_260, dx_302, ds, out bp_313, out si_314, out di_315) : word16)
  Class: Eq_3212
  DataType: 
  OrigDataType: 
T_3213: (in ax_317 : word16)
  Class: Eq_3213
  DataType: 
  OrigDataType: 
T_3214: (in 0x0226 : word16)
  Class: Eq_3214
  DataType: 
  OrigDataType: 
T_3215: (in Mem249[ds:0x0226:word16] : word16)
  Class: Eq_3213
  DataType: 
  OrigDataType: 
T_3216: (in 0x0001 : word16)
  Class: Eq_3216
  DataType: 
  OrigDataType: 
T_3217: (in ax_317 - 0x0001 : word16)
  Class: Eq_3217
  DataType: 
  OrigDataType: 
T_3218: (in 0x0003 : word16)
  Class: Eq_3218
  DataType: 
  OrigDataType: 
T_3219: (in Mem249[ax_317 - 0x0001:0x0003:word16] : word16)
  Class: Eq_3219
  DataType: 
  OrigDataType: 
T_3220: (in Mem249[ax_317 - 0x0001:0x0003:word16] + ax_317 : word16)
  Class: Eq_3220
  DataType: 
  OrigDataType: 
T_3221: (in 0x0002 : word16)
  Class: Eq_3221
  DataType: 
  OrigDataType: 
T_3222: (in Mem325[ax_317:0x0002:word16] : word16)
  Class: Eq_3220
  DataType: 
  OrigDataType: 
T_3223: (in ax_317 - 0x0001 : word16)
  Class: Eq_3223
  DataType: 
  OrigDataType: 
T_3224: (in 0x0003 : word16)
  Class: Eq_3224
  DataType: 
  OrigDataType: 
T_3225: (in Mem325[ax_317 - 0x0001:0x0003:word16] : word16)
  Class: Eq_3225
  DataType: 
  OrigDataType: 
T_3226: (in 0x0002 : word16)
  Class: Eq_3226
  DataType: 
  OrigDataType: 
T_3227: (in bp_313 - 0x0002 : word16)
  Class: Eq_3227
  DataType: 
  OrigDataType: 
T_3228: (in Mem325[ss:bp_313 - 0x0002:word16] : word16)
  Class: Eq_3225
  DataType: 
  OrigDataType: 
T_3229: (in Mem325[ax_317 - 0x0001:0x0003:word16] >=u Mem325[ss:bp_313 - 0x0002:word16] : bool)
  Class: Eq_3229
  DataType: 
  OrigDataType: 
T_3230: (in 0x0001 : word16)
  Class: Eq_3079
  DataType: 
  OrigDataType: 
T_3231: (in fn0800_0337 : ptr32)
  Class: Eq_152
  DataType: 
  OrigDataType: 
T_3232: (in 0x01A2 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_3233: (in fn0800_0337(0x01A2, ds) : byte)
  Class: Eq_3233
  DataType: 
  OrigDataType: 
T_3234: (in msdos_terminate : ptr32)
  Class: Eq_1102
  DataType: 
  OrigDataType: 
T_3235: (in 0xFF : byte)
  Class: Eq_998
  DataType: 
  OrigDataType: 
T_3236: (in msdos_terminate(0xFF) : void)
  Class: Eq_3236
  DataType: 
  OrigDataType: 
T_3237: (in 0x0000 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3238: (in si_134 == 0x0000 : bool)
  Class: Eq_3238
  DataType: 
  OrigDataType: 
T_3239: (in msdos_free_memory_block : ptr32)
  Class: Eq_3196
  DataType: 
  OrigDataType: 
T_3240: (in msdos_free_memory_block(di_133) : byte)
  Class: Eq_3240
  DataType: 
  OrigDataType: 
T_3241: (in 0x0001 : word16)
  Class: Eq_3241
  DataType: 
  OrigDataType: 
T_3242: (in ax_362 + 0x0001 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3243: (in ax_362 - dx_359 : word16)
  Class: Eq_3243
  DataType: 
  OrigDataType: 
T_3244: (in 0x0002 : word16)
  Class: Eq_3244
  DataType: 
  OrigDataType: 
T_3245: (in bp_188 - 0x0002 : word16)
  Class: Eq_3245
  DataType: 
  OrigDataType: 
T_3246: (in Mem40[ss:bp_188 - 0x0002:word16] : word16)
  Class: Eq_3243
  DataType: 
  OrigDataType: 
T_3247: (in ax_362 - dx_359 <u Mem40[ss:bp_188 - 0x0002:word16] : bool)
  Class: Eq_3247
  DataType: 
  OrigDataType: 
T_3248: (in 0x0000 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3249: (in cx_155 != 0x0000 : bool)
  Class: Eq_3249
  DataType: 
  OrigDataType: 
T_3250: (in msdos_free_memory_block : ptr32)
  Class: Eq_3196
  DataType: 
  OrigDataType: 
T_3251: (in msdos_free_memory_block(si_134) : byte)
  Class: Eq_3251
  DataType: 
  OrigDataType: 
T_3252: (in bx_167 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3253: (in 0x0000 : word16)
  Class: Eq_3253
  DataType: 
  OrigDataType: 
T_3254: (in Mem40[cx_155:0x0000:word16] : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3255: (in msdos_free_memory_block : ptr32)
  Class: Eq_3196
  DataType: 
  OrigDataType: 
T_3256: (in msdos_free_memory_block(cx_155) : byte)
  Class: Eq_3256
  DataType: 
  OrigDataType: 
T_3257: (in 0x0000 : word16)
  Class: Eq_3079
  DataType: 
  OrigDataType: 
T_3258: (in ax_283 - 0x0001 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3259: (in 0x0001 : word16)
  Class: Eq_3259
  DataType: 
  OrigDataType: 
T_3260: (in Mem249[cx_262:0x0001:word16] : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3261: (in 0x0226 : word16)
  Class: Eq_3261
  DataType: 
  OrigDataType: 
T_3262: (in Mem249[ds:0x0226:word16] : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3263: (in dx_298 != Mem249[ds:0x0226:word16] : bool)
  Class: Eq_3263
  DataType: 
  OrigDataType: 
T_3264: (in fn0800_0FC1 : ptr32)
  Class: Eq_3264
  DataType: 
  OrigDataType: 
T_3265: (in signature of fn0800_0FC1 : void)
  Class: Eq_3264
  DataType: 
  OrigDataType: 
T_3266: (in siOut : ptr16)
  Class: Eq_3266
  DataType: 
  OrigDataType: 
T_3267: (in diOut : ptr16)
  Class: Eq_3267
  DataType: 
  OrigDataType: 
T_3268: (in out si_259 : ptr16)
  Class: Eq_3266
  DataType: 
  OrigDataType: 
T_3269: (in out di_260 : ptr16)
  Class: Eq_3267
  DataType: 
  OrigDataType: 
T_3270: (in out ds : ptr16)
  Class: Eq_2778
  DataType: 
  OrigDataType: 
T_3271: (in fn0800_0FC1(cx_262, bp_258, si_259, di_260, es_261, ds, out si_259, out di_260, out ds) : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3272: (in cx_9 : word16)
  Class: Eq_3272
  DataType: 
  OrigDataType: 
T_3273: (in dx_10 : word16)
  Class: Eq_3273
  DataType: 
  OrigDataType: 
T_3274: (in bx_11 : word16)
  Class: Eq_3274
  DataType: 
  OrigDataType: 
T_3275: (in bp_12 : word16)
  Class: Eq_3275
  DataType: 
  OrigDataType: 
T_3276: (in si_13 : word16)
  Class: Eq_3276
  DataType: 
  OrigDataType: 
T_3277: (in di_14 : word16)
  Class: Eq_3277
  DataType: 
  OrigDataType: 
T_3278: (in es_15 : selector)
  Class: Eq_3278
  DataType: 
  OrigDataType: 
T_3279: (in ax_16 : word16)
  Class: Eq_3279
  DataType: 
  OrigDataType: 
T_3280: (in fn0800_17A3 : ptr32)
  Class: Eq_2217
  DataType: 
  OrigDataType: 
T_3281: (in 0x0012 : word16)
  Class: Eq_2219
  DataType: 
  OrigDataType: 
T_3282: (in out cx_9 : ptr16)
  Class: Eq_2226
  DataType: 
  OrigDataType: 
T_3283: (in out dx_10 : ptr16)
  Class: Eq_2227
  DataType: 
  OrigDataType: 
T_3284: (in out bx_11 : ptr16)
  Class: Eq_2228
  DataType: 
  OrigDataType: 
T_3285: (in out bp_12 : ptr16)
  Class: Eq_2229
  DataType: 
  OrigDataType: 
T_3286: (in out si_13 : ptr16)
  Class: Eq_2230
  DataType: 
  OrigDataType: 
T_3287: (in out di_14 : ptr16)
  Class: Eq_2231
  DataType: 
  OrigDataType: 
T_3288: (in out es_15 : ptr16)
  Class: Eq_2232
  DataType: 
  OrigDataType: 
T_3289: (in fn0800_17A3(0x0012, cx, bp, si, di, es, ds, out cx_9, out dx_10, out bx_11, out bp_12, out si_13, out di_14, out es_15) : word16)
  Class: Eq_3279
  DataType: 
  OrigDataType: 
T_3290: (in ss : selector)
  Class: Eq_3290
  DataType: 
  OrigDataType: 
T_3291: (in fp : ptr16)
  Class: Eq_3291
  DataType: 
  OrigDataType: 
T_3292: (in 0x0002 : word16)
  Class: Eq_3292
  DataType: 
  OrigDataType: 
T_3293: (in fp - 0x0002 : word16)
  Class: Eq_3293
  DataType: 
  OrigDataType: 
T_3294: (in Mem18[ss:fp - 0x0002:word16] : word16)
  Class: Eq_3274
  DataType: 
  OrigDataType: 
T_3295: (in 0x0004 : word16)
  Class: Eq_3295
  DataType: 
  OrigDataType: 
T_3296: (in fp - 0x0004 : word16)
  Class: Eq_3296
  DataType: 
  OrigDataType: 
T_3297: (in Mem21[ss:fp - 0x0004:word16] : word16)
  Class: Eq_3272
  DataType: 
  OrigDataType: 
T_3298: (in 0x0006 : word16)
  Class: Eq_3298
  DataType: 
  OrigDataType: 
T_3299: (in fp - 0x0006 : word16)
  Class: Eq_3299
  DataType: 
  OrigDataType: 
T_3300: (in Mem23[ss:fp - 0x0006:word16] : word16)
  Class: Eq_3273
  DataType: 
  OrigDataType: 
T_3301: (in 0x0008 : word16)
  Class: Eq_3301
  DataType: 
  OrigDataType: 
T_3302: (in fp - 0x0008 : word16)
  Class: Eq_3302
  DataType: 
  OrigDataType: 
T_3303: (in Mem25[ss:fp - 0x0008:word16] : word16)
  Class: Eq_3276
  DataType: 
  OrigDataType: 
T_3304: (in 0x000A : word16)
  Class: Eq_3304
  DataType: 
  OrigDataType: 
T_3305: (in fp - 0x000A : word16)
  Class: Eq_3305
  DataType: 
  OrigDataType: 
T_3306: (in Mem27[ss:fp - 0x000A:word16] : word16)
  Class: Eq_3277
  DataType: 
  OrigDataType: 
T_3307: (in 0x000C : word16)
  Class: Eq_3307
  DataType: 
  OrigDataType: 
T_3308: (in fp - 0x000C : word16)
  Class: Eq_3308
  DataType: 
  OrigDataType: 
T_3309: (in Mem29[ss:fp - 0x000C:word16] : word16)
  Class: Eq_3278
  DataType: 
  OrigDataType: 
T_3310: (in 0x000E : word16)
  Class: Eq_3310
  DataType: 
  OrigDataType: 
T_3311: (in fp - 0x000E : word16)
  Class: Eq_3311
  DataType: 
  OrigDataType: 
T_3312: (in Mem31[ss:fp - 0x000E:word16] : word16)
  Class: Eq_3275
  DataType: 
  OrigDataType: 
T_3313: (in 0x0010 : word16)
  Class: Eq_3313
  DataType: 
  OrigDataType: 
T_3314: (in fp - 0x0010 : word16)
  Class: Eq_3314
  DataType: 
  OrigDataType: 
T_3315: (in Mem34[ss:fp - 0x0010:word16] : word16)
  Class: Eq_3279
  DataType: 
  OrigDataType: 
T_3316: (in dx_35 : word16)
  Class: Eq_3316
  DataType: 
  OrigDataType: 
T_3317: (in 0x0226 : word16)
  Class: Eq_3317
  DataType: 
  OrigDataType: 
T_3318: (in Mem34[ds:0x0226:word16] : word16)
  Class: Eq_3316
  DataType: 
  OrigDataType: 
T_3319: (in bx_36 : word16)
  Class: Eq_3319
  DataType: 
  OrigDataType: 
T_3320: (in 0x0000 : word16)
  Class: Eq_3319
  DataType: 
  OrigDataType: 
T_3321: (in cx_38 : word16)
  Class: Eq_3316
  DataType: 
  OrigDataType: 
T_3322: (in 0x0036 : word16)
  Class: Eq_3322
  DataType: 
  OrigDataType: 
T_3323: (in Mem34[dx_35:0x0036:word16] : word16)
  Class: Eq_3316
  DataType: 
  OrigDataType: 
T_3324: (in ax_39 : word16)
  Class: Eq_3324
  DataType: 
  OrigDataType: 
T_3325: (in 0x0034 : word16)
  Class: Eq_3325
  DataType: 
  OrigDataType: 
T_3326: (in Mem34[dx_35:0x0034:word16] : word16)
  Class: Eq_3324
  DataType: 
  OrigDataType: 
T_3327: (in cx_38 != dx_35 : bool)
  Class: Eq_3327
  DataType: 
  OrigDataType: 
T_3328: (in 0x0010 : word16)
  Class: Eq_3328
  DataType: 
  OrigDataType: 
T_3329: (in fp - 0x0010 : word16)
  Class: Eq_3329
  DataType: 
  OrigDataType: 
T_3330: (in Mem74[ss:fp - 0x0010:word16] : word16)
  Class: Eq_3316
  DataType: 
  OrigDataType: 
T_3331: (in si_73 : word16)
  Class: Eq_3324
  DataType: 
  OrigDataType: 
T_3332: (in 0x0018 : word16)
  Class: Eq_3324
  DataType: 
  OrigDataType: 
T_3333: (in ax_39 == 0x0018 : bool)
  Class: Eq_3333
  DataType: 
  OrigDataType: 
T_3334: (in 0x0001 : word16)
  Class: Eq_3334
  DataType: 
  OrigDataType: 
T_3335: (in bx_36 + 0x0001 : word16)
  Class: Eq_3319
  DataType: 
  OrigDataType: 
T_3336: (in 0x0010 : word16)
  Class: Eq_3336
  DataType: 
  OrigDataType: 
T_3337: (in fp - 0x0010 : word16)
  Class: Eq_3337
  DataType: 
  OrigDataType: 
T_3338: (in Mem74[ss:fp - 0x0010:selector] : selector)
  Class: Eq_3338
  DataType: 
  OrigDataType: 
T_3339: (in 0x0000 : word16)
  Class: Eq_3339
  DataType: 
  OrigDataType: 
T_3340: (in si_73 + 0x0000 : word16)
  Class: Eq_3340
  DataType: 
  OrigDataType: 
T_3341: (in Mem74[Mem74[ss:fp - 0x0010:selector]:si_73 + 0x0000:byte] : byte)
  Class: Eq_3341
  DataType: 
  OrigDataType: 
T_3342: (in 0x0226 : word16)
  Class: Eq_3342
  DataType: 
  OrigDataType: 
T_3343: (in Mem74[ds:0x0226:word16] : word16)
  Class: Eq_3343
  DataType: 
  OrigDataType: 
T_3344: (in 0x0017 : word16)
  Class: Eq_3344
  DataType: 
  OrigDataType: 
T_3345: (in bx_36 + 0x0017 : word16)
  Class: Eq_3345
  DataType: 
  OrigDataType: 
T_3346: (in Mem83[Mem74[ds:0x0226:word16]:bx_36 + 0x0017:byte] : byte)
  Class: Eq_3341
  DataType: 
  OrigDataType: 
T_3347: (in 0x0001 : word16)
  Class: Eq_3347
  DataType: 
  OrigDataType: 
T_3348: (in si_73 + 0x0001 : word16)
  Class: Eq_3324
  DataType: 
  OrigDataType: 
T_3349: (in 0x0014 : word16)
  Class: Eq_3319
  DataType: 
  OrigDataType: 
T_3350: (in bx_36 < 0x0014 : bool)
  Class: Eq_3350
  DataType: 
  OrigDataType: 
T_3351: (in dx_115 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_3352: (in 0x0014 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_3353: (in ax_98 : word16)
  Class: Eq_3353
  DataType: 
  OrigDataType: 
T_3354: (in 0x0226 : word16)
  Class: Eq_3354
  DataType: 
  OrigDataType: 
T_3355: (in Mem83[ds:0x0226:word16] : word16)
  Class: Eq_3353
  DataType: 
  OrigDataType: 
T_3356: (in 0x0032 : word16)
  Class: Eq_3356
  DataType: 
  OrigDataType: 
T_3357: (in Mem83[ax_98:0x0032:word16] : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_3358: (in dx_115 <u Mem83[ax_98:0x0032:word16] : bool)
  Class: Eq_3358
  DataType: 
  OrigDataType: 
T_3359: (in 0x00 : byte)
  Class: Eq_3359
  DataType: 
  OrigDataType: 
T_3360: (in DPB(ax_98, 0x00, 8, 8) : word16)
  Class: Eq_3360
  DataType: 
  OrigDataType: 
T_3361: (in 0x00FF : word16)
  Class: Eq_3360
  DataType: 
  OrigDataType: 
T_3362: (in DPB(ax_98, 0x00, 8, 8) == 0x00FF : bool)
  Class: Eq_3362
  DataType: 
  OrigDataType: 
T_3363: (in 0x0014 : word16)
  Class: Eq_3363
  DataType: 
  OrigDataType: 
T_3364: (in 0x0032 : word16)
  Class: Eq_3364
  DataType: 
  OrigDataType: 
T_3365: (in Mem105[ax_98:0x0032:word16] : word16)
  Class: Eq_3363
  DataType: 
  OrigDataType: 
T_3366: (in 0x0018 : word16)
  Class: Eq_3366
  DataType: 
  OrigDataType: 
T_3367: (in 0x0034 : word16)
  Class: Eq_3367
  DataType: 
  OrigDataType: 
T_3368: (in Mem106[ax_98:0x0034:word16] : word16)
  Class: Eq_3366
  DataType: 
  OrigDataType: 
T_3369: (in 0x0036 : word16)
  Class: Eq_3369
  DataType: 
  OrigDataType: 
T_3370: (in Mem107[ax_98:0x0036:word16] : word16)
  Class: Eq_3353
  DataType: 
  OrigDataType: 
T_3371: (in 0x0001 : word16)
  Class: Eq_3371
  DataType: 
  OrigDataType: 
T_3372: (in dx_115 + 0x0001 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_3373: (in bx_124 : word16)
  Class: Eq_3373
  DataType: 
  OrigDataType: 
T_3374: (in fn0800_1AA6 : ptr32)
  Class: Eq_2454
  DataType: 
  OrigDataType: 
T_3375: (in out dx_115 : ptr16)
  Class: Eq_2459
  DataType: 
  OrigDataType: 
T_3376: (in out bx_124 : ptr16)
  Class: Eq_2460
  DataType: 
  OrigDataType: 
T_3377: (in fn0800_1AA6(dx_115, dx_115, ds, out dx_115, out bx_124) : word16)
  Class: Eq_3377
  DataType: 
  OrigDataType: 
T_3378: (in bx_14 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3379: (in bx_38 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3380: (in 0x0001 : word16)
  Class: Eq_3380
  DataType: 
  OrigDataType: 
T_3381: (in bx_38 + 0x0001 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3382: (in 0x0000 : word16)
  Class: Eq_3382
  DataType: 
  OrigDataType: 
T_3383: (in bx_38 + 0x0000 : word16)
  Class: Eq_3383
  DataType: 
  OrigDataType: 
T_3384: (in Mem0[ds:bx_38 + 0x0000:byte] : byte)
  Class: Eq_3384
  DataType: 
  OrigDataType: 
T_3385: (in 0x00 : byte)
  Class: Eq_3384
  DataType: 
  OrigDataType: 
T_3386: (in Mem0[ds:bx_38 + 0x0000:byte] != 0x00 : bool)
  Class: Eq_3386
  DataType: 
  OrigDataType: 
T_3387: (in 0x0000 : word16)
  Class: Eq_3387
  DataType: 
  OrigDataType: 
T_3388: (in bx_38 + 0x0000 : word16)
  Class: Eq_3388
  DataType: 
  OrigDataType: 
T_3389: (in Mem0[ds:bx_38 + 0x0000:byte] : byte)
  Class: Eq_1525
  DataType: 
  OrigDataType: 
T_3390: (in dl == Mem0[ds:bx_38 + 0x0000:byte] : bool)
  Class: Eq_3390
  DataType: 
  OrigDataType: 
T_3391: (in si_17 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3392: (in di_19 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3393: (in cx_25 : word16)
  Class: Eq_3393
  DataType: 
  OrigDataType: 
T_3394: (in 0x0001 : word16)
  Class: Eq_3394
  DataType: 
  OrigDataType: 
T_3395: (in bx >>u 0x0001 : word16)
  Class: Eq_3393
  DataType: 
  OrigDataType: 
T_3396: (in cx_37 : word16)
  Class: Eq_3396
  DataType: 
  OrigDataType: 
T_3397: (in 0x0002 : word16)
  Class: Eq_3397
  DataType: 
  OrigDataType: 
T_3398: (in cx_25 * 0x0002 : word16)
  Class: Eq_3398
  DataType: 
  OrigDataType: 
T_3399: (in bx >>u 0x0001 : word16)
  Class: Eq_3399
  DataType: 
  OrigDataType: 
T_3400: (in 0x0000 : word16)
  Class: Eq_3399
  DataType: 
  OrigDataType: 
T_3401: (in bx >>u 0x0001 <u 0x0000 : bool)
  Class: Eq_3401
  DataType: 
  OrigDataType: 
T_3402: (in cx_25 * 0x0002 + (bx >>u 0x0001 <u 0x0000) : word16)
  Class: Eq_3396
  DataType: 
  OrigDataType: 
T_3403: (in 0x0000 : word16)
  Class: Eq_3403
  DataType: 
  OrigDataType: 
T_3404: (in si_17 + 0x0000 : word16)
  Class: Eq_3404
  DataType: 
  OrigDataType: 
T_3405: (in Mem0[ds:si_17 + 0x0000:word16] : word16)
  Class: Eq_3405
  DataType: 
  OrigDataType: 
T_3406: (in 0x0000 : word16)
  Class: Eq_3406
  DataType: 
  OrigDataType: 
T_3407: (in di_19 + 0x0000 : word16)
  Class: Eq_3407
  DataType: 
  OrigDataType: 
T_3408: (in Mem33[ds:di_19 + 0x0000:word16] : word16)
  Class: Eq_3405
  DataType: 
  OrigDataType: 
T_3409: (in 0x0002 : word16)
  Class: Eq_3409
  DataType: 
  OrigDataType: 
T_3410: (in si_17 + 0x0002 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3411: (in 0x0002 : word16)
  Class: Eq_3411
  DataType: 
  OrigDataType: 
T_3412: (in di_19 + 0x0002 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3413: (in 0x0001 : word16)
  Class: Eq_3413
  DataType: 
  OrigDataType: 
T_3414: (in cx_25 - 0x0001 : word16)
  Class: Eq_3393
  DataType: 
  OrigDataType: 
T_3415: (in 0x0000 : word16)
  Class: Eq_3393
  DataType: 
  OrigDataType: 
T_3416: (in cx_25 == 0x0000 : bool)
  Class: Eq_3416
  DataType: 
  OrigDataType: 
T_3417: (in 0x0000 : word16)
  Class: Eq_3417
  DataType: 
  OrigDataType: 
T_3418: (in si_17 + 0x0000 : word16)
  Class: Eq_3418
  DataType: 
  OrigDataType: 
T_3419: (in Mem0[ds:si_17 + 0x0000:byte] : byte)
  Class: Eq_3419
  DataType: 
  OrigDataType: 
T_3420: (in 0x0000 : word16)
  Class: Eq_3420
  DataType: 
  OrigDataType: 
T_3421: (in di_19 + 0x0000 : word16)
  Class: Eq_3421
  DataType: 
  OrigDataType: 
T_3422: (in Mem43[ds:di_19 + 0x0000:byte] : byte)
  Class: Eq_3419
  DataType: 
  OrigDataType: 
T_3423: (in 0x0001 : word16)
  Class: Eq_3423
  DataType: 
  OrigDataType: 
T_3424: (in si_17 + 0x0001 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3425: (in 0x0001 : word16)
  Class: Eq_3425
  DataType: 
  OrigDataType: 
T_3426: (in di_19 + 0x0001 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3427: (in 0x0001 : word16)
  Class: Eq_3427
  DataType: 
  OrigDataType: 
T_3428: (in cx_37 - 0x0001 : word16)
  Class: Eq_3396
  DataType: 
  OrigDataType: 
T_3429: (in 0x0000 : word16)
  Class: Eq_3396
  DataType: 
  OrigDataType: 
T_3430: (in cx_37 == 0x0000 : bool)
  Class: Eq_3430
  DataType: 
  OrigDataType: 
T_3431: (in cx : word16)
  Class: Eq_3431
  DataType: 
  OrigDataType: 
T_3432: (in fn0800_211E : ptr32)
  Class: Eq_3432
  DataType: 
  OrigDataType: 
T_3433: (in signature of fn0800_211E : void)
  Class: Eq_3432
  DataType: 
  OrigDataType: 
T_3434: (in ax : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_3435: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3436: (in fn0800_211E(ax, ds) : void)
  Class: Eq_3436
  DataType: 
  OrigDataType: 
T_3437: (in 0x000A : word16)
  Class: Eq_3437
  DataType: 
  OrigDataType: 
T_3438: (in ax + 0x000A : word16)
  Class: Eq_3438
  DataType: 
  OrigDataType: 
T_3439: (in Mem0[ds:ax + 0x000A:word16] : word16)
  Class: Eq_3439
  DataType: 
  OrigDataType: 
T_3440: (in 0x0000 : word16)
  Class: Eq_3439
  DataType: 
  OrigDataType: 
T_3441: (in Mem0[ds:ax + 0x000A:word16] != 0x0000 : bool)
  Class: Eq_3441
  DataType: 
  OrigDataType: 
T_3442: (in cl_12 : byte)
  Class: Eq_3442
  DataType: 
  OrigDataType: 
T_3443: (in ax_13 : word16)
  Class: Eq_3443
  DataType: 
  OrigDataType: 
T_3444: (in fn0800_0D39 : ptr32)
  Class: Eq_1273
  DataType: 
  OrigDataType: 
T_3445: (in 0x000A : word16)
  Class: Eq_3445
  DataType: 
  OrigDataType: 
T_3446: (in ax + 0x000A : word16)
  Class: Eq_3446
  DataType: 
  OrigDataType: 
T_3447: (in Mem0[ds:ax + 0x000A:word16] : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_3448: (in out cl_12 : ptr16)
  Class: Eq_1277
  DataType: 
  OrigDataType: 
T_3449: (in fn0800_0D39(Mem0[ds:ax + 0x000A:word16], ds, out cl_12) : word16)
  Class: Eq_3443
  DataType: 
  OrigDataType: 
T_3450: (in 0x0004 : word16)
  Class: Eq_3450
  DataType: 
  OrigDataType: 
T_3451: (in ax + 0x0004 : word16)
  Class: Eq_3451
  DataType: 
  OrigDataType: 
T_3452: (in Mem14[ds:ax + 0x0004:word16] : word16)
  Class: Eq_3443
  DataType: 
  OrigDataType: 
T_3453: (in 0x0000 : word16)
  Class: Eq_3443
  DataType: 
  OrigDataType: 
T_3454: (in ax_13 != 0x0000 : bool)
  Class: Eq_3454
  DataType: 
  OrigDataType: 
T_3455: (in 0x0007 : word16)
  Class: Eq_3455
  DataType: 
  OrigDataType: 
T_3456: (in ax + 0x0007 : word16)
  Class: Eq_3456
  DataType: 
  OrigDataType: 
T_3457: (in Mem0[ds:ax + 0x0007:byte] : byte)
  Class: Eq_3457
  DataType: 
  OrigDataType: 
T_3458: (in 0x02 : byte)
  Class: Eq_3458
  DataType: 
  OrigDataType: 
T_3459: (in Mem0[ds:ax + 0x0007:byte] & 0x02 : byte)
  Class: Eq_3459
  DataType: 
  OrigDataType: 
T_3460: (in 0x00 : byte)
  Class: Eq_3459
  DataType: 
  OrigDataType: 
T_3461: (in (Mem0[ds:ax + 0x0007:byte] & 0x02) == 0x00 : bool)
  Class: Eq_3461
  DataType: 
  OrigDataType: 
T_3462: (in 0x0007 : word16)
  Class: Eq_3462
  DataType: 
  OrigDataType: 
T_3463: (in ax + 0x0007 : word16)
  Class: Eq_3463
  DataType: 
  OrigDataType: 
T_3464: (in Mem0[ds:ax + 0x0007:byte] : byte)
  Class: Eq_3464
  DataType: 
  OrigDataType: 
T_3465: (in 0x04 : byte)
  Class: Eq_3465
  DataType: 
  OrigDataType: 
T_3466: (in Mem0[ds:ax + 0x0007:byte] & 0x04 : byte)
  Class: Eq_3466
  DataType: 
  OrigDataType: 
T_3467: (in 0x00 : byte)
  Class: Eq_3466
  DataType: 
  OrigDataType: 
T_3468: (in (Mem0[ds:ax + 0x0007:byte] & 0x04) == 0x00 : bool)
  Class: Eq_3468
  DataType: 
  OrigDataType: 
T_3469: (in 0x0086 : word16)
  Class: Eq_3469
  DataType: 
  OrigDataType: 
T_3470: (in 0x000A : word16)
  Class: Eq_3470
  DataType: 
  OrigDataType: 
T_3471: (in ax + 0x000A : word16)
  Class: Eq_3471
  DataType: 
  OrigDataType: 
T_3472: (in Mem43[ds:ax + 0x000A:word16] : word16)
  Class: Eq_3469
  DataType: 
  OrigDataType: 
T_3473: (in 0x0006 : word16)
  Class: Eq_3473
  DataType: 
  OrigDataType: 
T_3474: (in ax + 0x0006 : word16)
  Class: Eq_3474
  DataType: 
  OrigDataType: 
T_3475: (in Mem14[ds:ax + 0x0006:byte] : byte)
  Class: Eq_3475
  DataType: 
  OrigDataType: 
T_3476: (in 0x08 : byte)
  Class: Eq_3476
  DataType: 
  OrigDataType: 
T_3477: (in Mem14[ds:ax + 0x0006:byte] | 0x08 : byte)
  Class: Eq_3477
  DataType: 
  OrigDataType: 
T_3478: (in 0x0006 : word16)
  Class: Eq_3478
  DataType: 
  OrigDataType: 
T_3479: (in ax + 0x0006 : word16)
  Class: Eq_3479
  DataType: 
  OrigDataType: 
T_3480: (in Mem37[ds:ax + 0x0006:byte] : byte)
  Class: Eq_3477
  DataType: 
  OrigDataType: 
T_3481: (in 0x0001 : word16)
  Class: Eq_3481
  DataType: 
  OrigDataType: 
T_3482: (in 0x000A : word16)
  Class: Eq_3482
  DataType: 
  OrigDataType: 
T_3483: (in ax + 0x000A : word16)
  Class: Eq_3483
  DataType: 
  OrigDataType: 
T_3484: (in Mem26[ds:ax + 0x000A:word16] : word16)
  Class: Eq_3481
  DataType: 
  OrigDataType: 
T_3485: (in 0x0007 : word16)
  Class: Eq_3485
  DataType: 
  OrigDataType: 
T_3486: (in ax + 0x0007 : word16)
  Class: Eq_3486
  DataType: 
  OrigDataType: 
T_3487: (in Mem26[ds:ax + 0x0007:byte] : byte)
  Class: Eq_3487
  DataType: 
  OrigDataType: 
T_3488: (in 0xF8 : byte)
  Class: Eq_3488
  DataType: 
  OrigDataType: 
T_3489: (in Mem26[ds:ax + 0x0007:byte] & 0xF8 : byte)
  Class: Eq_3489
  DataType: 
  OrigDataType: 
T_3490: (in 0x0007 : word16)
  Class: Eq_3490
  DataType: 
  OrigDataType: 
T_3491: (in ax + 0x0007 : word16)
  Class: Eq_3491
  DataType: 
  OrigDataType: 
T_3492: (in Mem29[ds:ax + 0x0007:byte] : byte)
  Class: Eq_3489
  DataType: 
  OrigDataType: 
T_3493: (in 0x000C : word16)
  Class: Eq_3493
  DataType: 
  OrigDataType: 
T_3494: (in ax + 0x000C : word16)
  Class: Eq_3494
  DataType: 
  OrigDataType: 
T_3495: (in 0x0004 : word16)
  Class: Eq_3495
  DataType: 
  OrigDataType: 
T_3496: (in ax + 0x0004 : word16)
  Class: Eq_3496
  DataType: 
  OrigDataType: 
T_3497: (in Mem31[ds:ax + 0x0004:word16] : word16)
  Class: Eq_3494
  DataType: 
  OrigDataType: 
T_3498: (in 0x0007 : word16)
  Class: Eq_3498
  DataType: 
  OrigDataType: 
T_3499: (in ax + 0x0007 : word16)
  Class: Eq_3499
  DataType: 
  OrigDataType: 
T_3500: (in Mem31[ds:ax + 0x0007:byte] : byte)
  Class: Eq_3500
  DataType: 
  OrigDataType: 
T_3501: (in 0x04 : byte)
  Class: Eq_3501
  DataType: 
  OrigDataType: 
T_3502: (in Mem31[ds:ax + 0x0007:byte] | 0x04 : byte)
  Class: Eq_3502
  DataType: 
  OrigDataType: 
T_3503: (in 0x0007 : word16)
  Class: Eq_3503
  DataType: 
  OrigDataType: 
T_3504: (in ax + 0x0007 : word16)
  Class: Eq_3504
  DataType: 
  OrigDataType: 
T_3505: (in Mem33[ds:ax + 0x0007:byte] : byte)
  Class: Eq_3502
  DataType: 
  OrigDataType: 
T_3506: (in ax_20 : word16)
  Class: Eq_3506
  DataType: 
  OrigDataType: 
T_3507: (in 0x0004 : word16)
  Class: Eq_3507
  DataType: 
  OrigDataType: 
T_3508: (in ax + 0x0004 : word16)
  Class: Eq_3508
  DataType: 
  OrigDataType: 
T_3509: (in Mem14[ds:ax + 0x0004:word16] : word16)
  Class: Eq_3506
  DataType: 
  OrigDataType: 
T_3510: (in 0x0000 : word16)
  Class: Eq_3510
  DataType: 
  OrigDataType: 
T_3511: (in 0x0002 : word16)
  Class: Eq_3511
  DataType: 
  OrigDataType: 
T_3512: (in ax + 0x0002 : word16)
  Class: Eq_3512
  DataType: 
  OrigDataType: 
T_3513: (in Mem21[ds:ax + 0x0002:word16] : word16)
  Class: Eq_3510
  DataType: 
  OrigDataType: 
T_3514: (in 0x0000 : word16)
  Class: Eq_3514
  DataType: 
  OrigDataType: 
T_3515: (in ax + 0x0000 : word16)
  Class: Eq_3515
  DataType: 
  OrigDataType: 
T_3516: (in Mem22[ds:ax + 0x0000:word16] : word16)
  Class: Eq_3506
  DataType: 
  OrigDataType: 
T_3517: (in 0x0200 : word16)
  Class: Eq_3517
  DataType: 
  OrigDataType: 
T_3518: (in 0x000A : word16)
  Class: Eq_3518
  DataType: 
  OrigDataType: 
T_3519: (in ax + 0x000A : word16)
  Class: Eq_3519
  DataType: 
  OrigDataType: 
T_3520: (in Mem48[ds:ax + 0x000A:word16] : word16)
  Class: Eq_3517
  DataType: 
  OrigDataType: 
T_3521: (in 0x0001 : word16)
  Class: Eq_3521
  DataType: 
  OrigDataType: 
T_3522: (in 0x000A : word16)
  Class: Eq_3522
  DataType: 
  OrigDataType: 
T_3523: (in ax + 0x000A : word16)
  Class: Eq_3523
  DataType: 
  OrigDataType: 
T_3524: (in Mem47[ds:ax + 0x000A:word16] : word16)
  Class: Eq_3521
  DataType: 
  OrigDataType: 
T_3525: (in wLoc0E_111 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_3526: (in 0x0000 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_3527: (in 0x0007 : word16)
  Class: Eq_3527
  DataType: 
  OrigDataType: 
T_3528: (in ax + 0x0007 : word16)
  Class: Eq_3528
  DataType: 
  OrigDataType: 
T_3529: (in Mem0[ds:ax + 0x0007:byte] : byte)
  Class: Eq_3529
  DataType: 
  OrigDataType: 
T_3530: (in 0x10 : byte)
  Class: Eq_3530
  DataType: 
  OrigDataType: 
T_3531: (in Mem0[ds:ax + 0x0007:byte] & 0x10 : byte)
  Class: Eq_3531
  DataType: 
  OrigDataType: 
T_3532: (in 0x00 : byte)
  Class: Eq_3531
  DataType: 
  OrigDataType: 
T_3533: (in (Mem0[ds:ax + 0x0007:byte] & 0x10) == 0x00 : bool)
  Class: Eq_3533
  DataType: 
  OrigDataType: 
T_3534: (in 0x0004 : word16)
  Class: Eq_3534
  DataType: 
  OrigDataType: 
T_3535: (in ax + 0x0004 : word16)
  Class: Eq_3535
  DataType: 
  OrigDataType: 
T_3536: (in Mem0[ds:ax + 0x0004:word16] : word16)
  Class: Eq_3536
  DataType: 
  OrigDataType: 
T_3537: (in 0x0000 : word16)
  Class: Eq_3536
  DataType: 
  OrigDataType: 
T_3538: (in Mem0[ds:ax + 0x0004:word16] == 0x0000 : bool)
  Class: Eq_3538
  DataType: 
  OrigDataType: 
T_3539: (in 0x0007 : word16)
  Class: Eq_3539
  DataType: 
  OrigDataType: 
T_3540: (in ax + 0x0007 : word16)
  Class: Eq_3540
  DataType: 
  OrigDataType: 
T_3541: (in Mem0[ds:ax + 0x0007:byte] : byte)
  Class: Eq_3541
  DataType: 
  OrigDataType: 
T_3542: (in 0xEF : byte)
  Class: Eq_3542
  DataType: 
  OrigDataType: 
T_3543: (in Mem0[ds:ax + 0x0007:byte] & 0xEF : byte)
  Class: Eq_3543
  DataType: 
  OrigDataType: 
T_3544: (in 0x0007 : word16)
  Class: Eq_3544
  DataType: 
  OrigDataType: 
T_3545: (in ax + 0x0007 : word16)
  Class: Eq_3545
  DataType: 
  OrigDataType: 
T_3546: (in Mem55[ds:ax + 0x0007:byte] : byte)
  Class: Eq_3543
  DataType: 
  OrigDataType: 
T_3547: (in 0x0006 : word16)
  Class: Eq_3547
  DataType: 
  OrigDataType: 
T_3548: (in ax + 0x0006 : word16)
  Class: Eq_3548
  DataType: 
  OrigDataType: 
T_3549: (in Mem55[ds:ax + 0x0006:byte] : byte)
  Class: Eq_3549
  DataType: 
  OrigDataType: 
T_3550: (in 0x02 : byte)
  Class: Eq_3550
  DataType: 
  OrigDataType: 
T_3551: (in Mem55[ds:ax + 0x0006:byte] & 0x02 : byte)
  Class: Eq_3551
  DataType: 
  OrigDataType: 
T_3552: (in 0x00 : byte)
  Class: Eq_3551
  DataType: 
  OrigDataType: 
T_3553: (in (Mem55[ds:ax + 0x0006:byte] & 0x02) == 0x00 : bool)
  Class: Eq_3553
  DataType: 
  OrigDataType: 
T_3554: (in 0x0004 : word16)
  Class: Eq_3554
  DataType: 
  OrigDataType: 
T_3555: (in ax + 0x0004 : word16)
  Class: Eq_3555
  DataType: 
  OrigDataType: 
T_3556: (in Mem55[ds:ax + 0x0004:word16] : word16)
  Class: Eq_3556
  DataType: 
  OrigDataType: 
T_3557: (in 0x0000 : word16)
  Class: Eq_3556
  DataType: 
  OrigDataType: 
T_3558: (in Mem55[ds:ax + 0x0004:word16] == 0x0000 : bool)
  Class: Eq_3558
  DataType: 
  OrigDataType: 
T_3559: (in di_114 : word16)
  Class: Eq_3559
  DataType: 
  OrigDataType: 
T_3560: (in 0x0004 : word16)
  Class: Eq_3560
  DataType: 
  OrigDataType: 
T_3561: (in ax + 0x0004 : word16)
  Class: Eq_3561
  DataType: 
  OrigDataType: 
T_3562: (in Mem55[ds:ax + 0x0004:word16] : word16)
  Class: Eq_3559
  DataType: 
  OrigDataType: 
T_3563: (in cx_115 : word16)
  Class: Eq_1068
  DataType: 
  OrigDataType: 
T_3564: (in 0x0002 : word16)
  Class: Eq_3564
  DataType: 
  OrigDataType: 
T_3565: (in ax + 0x0002 : word16)
  Class: Eq_3565
  DataType: 
  OrigDataType: 
T_3566: (in Mem55[ds:ax + 0x0002:word16] : word16)
  Class: Eq_1068
  DataType: 
  OrigDataType: 
T_3567: (in 0x0000 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_3568: (in wLoc0E_111 != 0x0000 : bool)
  Class: Eq_3568
  DataType: 
  OrigDataType: 
T_3569: (in ax_98 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_3570: (in fn0800_2141 : ptr32)
  Class: Eq_3570
  DataType: 
  OrigDataType: 
T_3571: (in signature of fn0800_2141 : void)
  Class: Eq_3570
  DataType: 
  OrigDataType: 
T_3572: (in ax : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_3573: (in dx : word16)
  Class: Eq_3559
  DataType: 
  OrigDataType: 
T_3574: (in bx : word16)
  Class: Eq_1068
  DataType: 
  OrigDataType: 
T_3575: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3576: (in 0x0008 : word16)
  Class: Eq_3576
  DataType: 
  OrigDataType: 
T_3577: (in ax + 0x0008 : word16)
  Class: Eq_3577
  DataType: 
  OrigDataType: 
T_3578: (in Mem55[ds:ax + 0x0008:word16] : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_3579: (in fn0800_2141(Mem55[ds:ax + 0x0008:word16], di_114, cx_115, ds) : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_3580: (in dx_107 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_3581: (in 0xFFFF : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_3582: (in ax_98 != 0xFFFF : bool)
  Class: Eq_3582
  DataType: 
  OrigDataType: 
T_3583: (in 0x0000 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_3584: (in ax_98 != 0x0000 : bool)
  Class: Eq_3584
  DataType: 
  OrigDataType: 
T_3585: (in 0x0006 : word16)
  Class: Eq_3585
  DataType: 
  OrigDataType: 
T_3586: (in ax + 0x0006 : word16)
  Class: Eq_3586
  DataType: 
  OrigDataType: 
T_3587: (in Mem55[ds:ax + 0x0006:byte] : byte)
  Class: Eq_3587
  DataType: 
  OrigDataType: 
T_3588: (in 0x20 : byte)
  Class: Eq_3588
  DataType: 
  OrigDataType: 
T_3589: (in Mem55[ds:ax + 0x0006:byte] | 0x20 : byte)
  Class: Eq_3589
  DataType: 
  OrigDataType: 
T_3590: (in 0x0006 : word16)
  Class: Eq_3590
  DataType: 
  OrigDataType: 
T_3591: (in ax + 0x0006 : word16)
  Class: Eq_3591
  DataType: 
  OrigDataType: 
T_3592: (in Mem126[ds:ax + 0x0006:byte] : byte)
  Class: Eq_3589
  DataType: 
  OrigDataType: 
T_3593: (in ax_36 : word16)
  Class: Eq_3593
  DataType: 
  OrigDataType: 
T_3594: (in 0x0004 : word16)
  Class: Eq_3594
  DataType: 
  OrigDataType: 
T_3595: (in ax + 0x0004 : word16)
  Class: Eq_3595
  DataType: 
  OrigDataType: 
T_3596: (in Mem0[ds:ax + 0x0004:word16] : word16)
  Class: Eq_3593
  DataType: 
  OrigDataType: 
T_3597: (in 0x0000 : word16)
  Class: Eq_3597
  DataType: 
  OrigDataType: 
T_3598: (in 0x0002 : word16)
  Class: Eq_3598
  DataType: 
  OrigDataType: 
T_3599: (in ax + 0x0002 : word16)
  Class: Eq_3599
  DataType: 
  OrigDataType: 
T_3600: (in Mem37[ds:ax + 0x0002:word16] : word16)
  Class: Eq_3597
  DataType: 
  OrigDataType: 
T_3601: (in 0x0000 : word16)
  Class: Eq_3601
  DataType: 
  OrigDataType: 
T_3602: (in ax + 0x0000 : word16)
  Class: Eq_3602
  DataType: 
  OrigDataType: 
T_3603: (in Mem38[ds:ax + 0x0000:word16] : word16)
  Class: Eq_3593
  DataType: 
  OrigDataType: 
T_3604: (in 0x0006 : word16)
  Class: Eq_3604
  DataType: 
  OrigDataType: 
T_3605: (in ax + 0x0006 : word16)
  Class: Eq_3605
  DataType: 
  OrigDataType: 
T_3606: (in Mem0[ds:ax + 0x0006:byte] : byte)
  Class: Eq_3606
  DataType: 
  OrigDataType: 
T_3607: (in 0xEF : byte)
  Class: Eq_3607
  DataType: 
  OrigDataType: 
T_3608: (in Mem0[ds:ax + 0x0006:byte] & 0xEF : byte)
  Class: Eq_3608
  DataType: 
  OrigDataType: 
T_3609: (in 0x0006 : word16)
  Class: Eq_3609
  DataType: 
  OrigDataType: 
T_3610: (in ax + 0x0006 : word16)
  Class: Eq_3610
  DataType: 
  OrigDataType: 
T_3611: (in Mem143[ds:ax + 0x0006:byte] : byte)
  Class: Eq_3608
  DataType: 
  OrigDataType: 
T_3612: (in 0x0007 : word16)
  Class: Eq_3612
  DataType: 
  OrigDataType: 
T_3613: (in ax + 0x0007 : word16)
  Class: Eq_3613
  DataType: 
  OrigDataType: 
T_3614: (in Mem143[ds:ax + 0x0007:byte] : byte)
  Class: Eq_3614
  DataType: 
  OrigDataType: 
T_3615: (in 0x20 : byte)
  Class: Eq_3615
  DataType: 
  OrigDataType: 
T_3616: (in Mem143[ds:ax + 0x0007:byte] & 0x20 : byte)
  Class: Eq_3616
  DataType: 
  OrigDataType: 
T_3617: (in 0x00 : byte)
  Class: Eq_3616
  DataType: 
  OrigDataType: 
T_3618: (in (Mem143[ds:ax + 0x0007:byte] & 0x20) != 0x00 : bool)
  Class: Eq_3618
  DataType: 
  OrigDataType: 
T_3619: (in dx_ax_149 : int32)
  Class: Eq_3619
  DataType: 
  OrigDataType: 
T_3620: (in 0x0002 : word16)
  Class: Eq_3620
  DataType: 
  OrigDataType: 
T_3621: (in ax + 0x0002 : word16)
  Class: Eq_3621
  DataType: 
  OrigDataType: 
T_3622: (in Mem143[ds:ax + 0x0002:word16] : word16)
  Class: Eq_3622
  DataType: 
  OrigDataType: 
T_3623: (in (int32) Mem143[ds:ax + 0x0002:word16] : int32)
  Class: Eq_3619
  DataType: 
  OrigDataType: 
T_3624: (in dx_150 : word16)
  Class: Eq_3624
  DataType: 
  OrigDataType: 
T_3625: (in SLICE(dx_ax_149, word16, 16) : word16)
  Class: Eq_3624
  DataType: 
  OrigDataType: 
T_3626: (in ax_151 : word16)
  Class: Eq_3626
  DataType: 
  OrigDataType: 
T_3627: (in (word16) dx_ax_149 : word16)
  Class: Eq_3626
  DataType: 
  OrigDataType: 
T_3628: (in dx_150 | ax_151 : word16)
  Class: Eq_3628
  DataType: 
  OrigDataType: 
T_3629: (in 0x0000 : word16)
  Class: Eq_3628
  DataType: 
  OrigDataType: 
T_3630: (in (dx_150 | ax_151) == 0x0000 : bool)
  Class: Eq_3630
  DataType: 
  OrigDataType: 
T_3631: (in 0xFFFF : word16)
  Class: Eq_3624
  DataType: 
  OrigDataType: 
T_3632: (in dx_150 != 0xFFFF : bool)
  Class: Eq_3632
  DataType: 
  OrigDataType: 
T_3633: (in bx_181 : word16)
  Class: Eq_2494
  DataType: 
  OrigDataType: 
T_3634: (in -ax_151 : word16)
  Class: Eq_2494
  DataType: 
  OrigDataType: 
T_3635: (in fn0800_1ABD : ptr32)
  Class: Eq_2490
  DataType: 
  OrigDataType: 
T_3636: (in 0x0008 : word16)
  Class: Eq_3636
  DataType: 
  OrigDataType: 
T_3637: (in ax + 0x0008 : word16)
  Class: Eq_3637
  DataType: 
  OrigDataType: 
T_3638: (in Mem143[ds:ax + 0x0008:word16] : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_3639: (in -dx_150 : word16)
  Class: Eq_3639
  DataType: 
  OrigDataType: 
T_3640: (in 0x0000 : word16)
  Class: Eq_2494
  DataType: 
  OrigDataType: 
T_3641: (in bx_181 == 0x0000 : bool)
  Class: Eq_3641
  DataType: 
  OrigDataType: 
T_3642: (in -dx_150 - (bx_181 == 0x0000) : word16)
  Class: Eq_2493
  DataType: 
  OrigDataType: 
T_3643: (in 0x01 : byte)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_3644: (in out dx_150 : ptr16)
  Class: Eq_2497
  DataType: 
  OrigDataType: 
T_3645: (in fn0800_1ABD(Mem143[ds:ax + 0x0008:word16], -dx_150 - (bx_181 == 0x0000), bx_181, 0x01, ds, out dx_150) : word16)
  Class: Eq_3626
  DataType: 
  OrigDataType: 
T_3646: (in di_114 + dx_107 : word16)
  Class: Eq_3559
  DataType: 
  OrigDataType: 
T_3647: (in cx_115 - dx_107 : word16)
  Class: Eq_1068
  DataType: 
  OrigDataType: 
T_3648: (in 0xFFFF : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_3649: (in bx_135 : word16)
  Class: Eq_3649
  DataType: 
  OrigDataType: 
T_3650: (in fn0800_0780 : ptr32)
  Class: Eq_593
  DataType: 
  OrigDataType: 
T_3651: (in 0x000C : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_3652: (in out bx_135 : ptr16)
  Class: Eq_598
  DataType: 
  OrigDataType: 
T_3653: (in fn0800_0780(0x000C, ax_98, ds, out bx_135) : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_3654: (in 0xFFFF : word16)
  Class: Eq_3626
  DataType: 
  OrigDataType: 
T_3655: (in ax_151 != 0xFFFF : bool)
  Class: Eq_3655
  DataType: 
  OrigDataType: 
T_3656: (in 0xFFFF : word16)
  Class: Eq_3656
  DataType: 
  OrigDataType: 
T_3657: (in ss : selector)
  Class: Eq_3657
  DataType: 
  OrigDataType: 
T_3658: (in fp : ptr16)
  Class: Eq_3658
  DataType: 
  OrigDataType: 
T_3659: (in 0x000E : word16)
  Class: Eq_3659
  DataType: 
  OrigDataType: 
T_3660: (in fp - 0x000E : word16)
  Class: Eq_3660
  DataType: 
  OrigDataType: 
T_3661: (in Mem169[ss:fp - 0x000E:word16] : word16)
  Class: Eq_3656
  DataType: 
  OrigDataType: 
T_3662: (in 0x0006 : word16)
  Class: Eq_3662
  DataType: 
  OrigDataType: 
T_3663: (in ax + 0x0006 : word16)
  Class: Eq_3663
  DataType: 
  OrigDataType: 
T_3664: (in Mem169[ds:ax + 0x0006:byte] : byte)
  Class: Eq_3664
  DataType: 
  OrigDataType: 
T_3665: (in 0x20 : byte)
  Class: Eq_3665
  DataType: 
  OrigDataType: 
T_3666: (in Mem169[ds:ax + 0x0006:byte] | 0x20 : byte)
  Class: Eq_3666
  DataType: 
  OrigDataType: 
T_3667: (in 0x0006 : word16)
  Class: Eq_3667
  DataType: 
  OrigDataType: 
T_3668: (in ax + 0x0006 : word16)
  Class: Eq_3668
  DataType: 
  OrigDataType: 
T_3669: (in Mem172[ds:ax + 0x0006:byte] : byte)
  Class: Eq_3666
  DataType: 
  OrigDataType: 
T_3670: (in 0x0000 : word16)
  Class: Eq_1068
  DataType: 
  OrigDataType: 
T_3671: (in cx_115 == 0x0000 : bool)
  Class: Eq_3671
  DataType: 
  OrigDataType: 
T_3672: (in ax : word16)
  Class: Eq_3672
  DataType: 
  OrigDataType: 
T_3673: (in 0x0388 : word16)
  Class: Eq_3673
  DataType: 
  OrigDataType: 
T_3674: (in Mem0[ds:0x0388:byte] : byte)
  Class: Eq_3674
  DataType: 
  OrigDataType: 
T_3675: (in 0x00 : byte)
  Class: Eq_3674
  DataType: 
  OrigDataType: 
T_3676: (in Mem0[ds:0x0388:byte] == 0x00 : bool)
  Class: Eq_3676
  DataType: 
  OrigDataType: 
T_3677: (in 0x0000 : word16)
  Class: Eq_3677
  DataType: 
  OrigDataType: 
T_3678: (in cpu_debug_break : ptr32)
  Class: Eq_3678
  DataType: 
  OrigDataType: 
T_3679: (in signature of cpu_debug_break : void)
  Class: Eq_3678
  DataType: 
  OrigDataType: 
T_3680: (in cpu_debug_break() : void)
  Class: Eq_3680
  DataType: 
  OrigDataType: 
T_3681: (in 0x0001 : word16)
  Class: Eq_3681
  DataType: 
  OrigDataType: 
T_3682: (in 0x0000 : word16)
  Class: Eq_2703
  DataType: 
  OrigDataType: 
T_3683: (in ax == 0x0000 : bool)
  Class: Eq_3683
  DataType: 
  OrigDataType: 
T_3684: (in si_31 : word16)
  Class: Eq_2703
  DataType: 
  OrigDataType: 
T_3685: (in 0x044A : word16)
  Class: Eq_3685
  DataType: 
  OrigDataType: 
T_3686: (in Mem0[ds:0x044A:word16] : word16)
  Class: Eq_2703
  DataType: 
  OrigDataType: 
T_3687: (in 0x0000 : word16)
  Class: Eq_2703
  DataType: 
  OrigDataType: 
T_3688: (in si_31 == 0x0000 : bool)
  Class: Eq_3688
  DataType: 
  OrigDataType: 
T_3689: (in 0x0380 : word16)
  Class: Eq_3689
  DataType: 
  OrigDataType: 
T_3690: (in Mem0[ds:0x0380:word16] : word16)
  Class: Eq_2703
  DataType: 
  OrigDataType: 
T_3691: (in si_31 >u ax : bool)
  Class: Eq_3691
  DataType: 
  OrigDataType: 
T_3692: (in 0x0004 : word16)
  Class: Eq_3692
  DataType: 
  OrigDataType: 
T_3693: (in si_31 + 0x0004 : word16)
  Class: Eq_3693
  DataType: 
  OrigDataType: 
T_3694: (in Mem0[ds:si_31 + 0x0004:word16] : word16)
  Class: Eq_2703
  DataType: 
  OrigDataType: 
T_3695: (in ax <u Mem0[ds:si_31 + 0x0004:word16] : bool)
  Class: Eq_3695
  DataType: 
  OrigDataType: 
T_3696: (in fn0800_14F2 : ptr32)
  Class: Eq_3696
  DataType: 
  OrigDataType: 
T_3697: (in signature of fn0800_14F2 : void)
  Class: Eq_3696
  DataType: 
  OrigDataType: 
T_3698: (in ax : word16)
  Class: Eq_2703
  DataType: 
  OrigDataType: 
T_3699: (in dx : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_3700: (in bx : word16)
  Class: Eq_2703
  DataType: 
  OrigDataType: 
T_3701: (in fn0800_14F2(ax, ds, si_31) : void)
  Class: Eq_3701
  DataType: 
  OrigDataType: 
T_3702: (in 0x044A : word16)
  Class: Eq_3702
  DataType: 
  OrigDataType: 
T_3703: (in Mem40[ds:0x044A:word16] : word16)
  Class: Eq_2703
  DataType: 
  OrigDataType: 
T_3704: (in 0x0382 : word16)
  Class: Eq_3704
  DataType: 
  OrigDataType: 
T_3705: (in Mem40[ds:0x0382:word16] : word16)
  Class: Eq_2703
  DataType: 
  OrigDataType: 
T_3706: (in si_31 >=u Mem40[ds:0x0382:word16] : bool)
  Class: Eq_3706
  DataType: 
  OrigDataType: 
T_3707: (in 0x0004 : word16)
  Class: Eq_3707
  DataType: 
  OrigDataType: 
T_3708: (in si_31 + 0x0004 : word16)
  Class: Eq_3708
  DataType: 
  OrigDataType: 
T_3709: (in Mem0[ds:si_31 + 0x0004:word16] : word16)
  Class: Eq_3709
  DataType: 
  OrigDataType: 
T_3710: (in 0x0000 : word16)
  Class: Eq_3709
  DataType: 
  OrigDataType: 
T_3711: (in Mem0[ds:si_31 + 0x0004:word16] != 0x0000 : bool)
  Class: Eq_3711
  DataType: 
  OrigDataType: 
T_3712: (in si_31 >u ax : bool)
  Class: Eq_3712
  DataType: 
  OrigDataType: 
T_3713: (in 0x00 : byte)
  Class: Eq_3713
  DataType: 
  OrigDataType: 
T_3714: (in 0x044C : word16)
  Class: Eq_3714
  DataType: 
  OrigDataType: 
T_3715: (in Mem46[ds:0x044C:byte] : byte)
  Class: Eq_3713
  DataType: 
  OrigDataType: 
T_3716: (in ax_47 : word16)
  Class: Eq_3716
  DataType: 
  OrigDataType: 
T_3717: (in 0x000A : word16)
  Class: Eq_3717
  DataType: 
  OrigDataType: 
T_3718: (in si_31 + 0x000A : word16)
  Class: Eq_3718
  DataType: 
  OrigDataType: 
T_3719: (in Mem40[ds:si_31 + 0x000A:word16] : word16)
  Class: Eq_3716
  DataType: 
  OrigDataType: 
T_3720: (in 0x0384 : word16)
  Class: Eq_3720
  DataType: 
  OrigDataType: 
T_3721: (in Mem40[ds:0x0384:word16] : word16)
  Class: Eq_3716
  DataType: 
  OrigDataType: 
T_3722: (in ax_47 <=u Mem40[ds:0x0384:word16] : bool)
  Class: Eq_3722
  DataType: 
  OrigDataType: 
T_3723: (in 0x0384 : word16)
  Class: Eq_3723
  DataType: 
  OrigDataType: 
T_3724: (in Mem50[ds:0x0384:word16] : word16)
  Class: Eq_3716
  DataType: 
  OrigDataType: 
T_3725: (in 0x0004 : word16)
  Class: Eq_3725
  DataType: 
  OrigDataType: 
T_3726: (in si_31 + 0x0004 : word16)
  Class: Eq_3726
  DataType: 
  OrigDataType: 
T_3727: (in Mem0[ds:si_31 + 0x0004:word16] : word16)
  Class: Eq_2703
  DataType: 
  OrigDataType: 
T_3728: (in 0x0004 : word16)
  Class: Eq_3728
  DataType: 
  OrigDataType: 
T_3729: (in si_31 + 0x0004 : word16)
  Class: Eq_3729
  DataType: 
  OrigDataType: 
T_3730: (in Mem0[ds:si_31 + 0x0004:word16] : word16)
  Class: Eq_2703
  DataType: 
  OrigDataType: 
T_3731: (in ax <u Mem0[ds:si_31 + 0x0004:word16] : bool)
  Class: Eq_3731
  DataType: 
  OrigDataType: 
T_3732: (in ax_107 : word16)
  Class: Eq_3732
  DataType: 
  OrigDataType: 
T_3733: (in 0x0000 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_3734: (in ax == 0x0000 : bool)
  Class: Eq_3734
  DataType: 
  OrigDataType: 
T_3735: (in 0x0000 : word16)
  Class: Eq_3732
  DataType: 
  OrigDataType: 
T_3736: (in al_52 : byte)
  Class: Eq_3736
  DataType: 
  OrigDataType: 
T_3737: (in 0x0003 : word16)
  Class: Eq_3737
  DataType: 
  OrigDataType: 
T_3738: (in ax + 0x0003 : word16)
  Class: Eq_3738
  DataType: 
  OrigDataType: 
T_3739: (in (byte) (ax + 0x0003) : byte)
  Class: Eq_3736
  DataType: 
  OrigDataType: 
T_3740: (in 0x0003 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_3741: (in ax <u 0x0003 : bool)
  Class: Eq_3741
  DataType: 
  OrigDataType: 
T_3742: (in ax_56 : word16)
  Class: Eq_3742
  DataType: 
  OrigDataType: 
T_3743: (in ax + 0x0003 : word16)
  Class: Eq_3743
  DataType: 
  OrigDataType: 
T_3744: (in 0xFE : byte)
  Class: Eq_3744
  DataType: 
  OrigDataType: 
T_3745: (in al_52 & 0xFE : byte)
  Class: Eq_3745
  DataType: 
  OrigDataType: 
T_3746: (in DPB(ax + 0x0003, al_52 & 0xFE, 0, 8) : word16)
  Class: Eq_3742
  DataType: 
  OrigDataType: 
T_3747: (in ax_63 : word16)
  Class: Eq_3747
  DataType: 
  OrigDataType: 
T_3748: (in 0x0006 : word16)
  Class: Eq_3748
  DataType: 
  OrigDataType: 
T_3749: (in ax_56 - 0x0006 : word16)
  Class: Eq_3749
  DataType: 
  OrigDataType: 
T_3750: (in 0x0000 : word16)
  Class: Eq_3750
  DataType: 
  OrigDataType: 
T_3751: (in 0x0006 : word16)
  Class: Eq_3742
  DataType: 
  OrigDataType: 
T_3752: (in ax_56 >=u 0x0006 : bool)
  Class: Eq_3752
  DataType: 
  OrigDataType: 
T_3753: (in 0x0000 - (ax_56 >=u 0x0006) : word16)
  Class: Eq_3753
  DataType: 
  OrigDataType: 
T_3754: (in ax_56 - 0x0006 & 0x0000 - (ax_56 >=u 0x0006) : word16)
  Class: Eq_3747
  DataType: 
  OrigDataType: 
T_3755: (in 0x0006 : word16)
  Class: Eq_3755
  DataType: 
  OrigDataType: 
T_3756: (in ax_63 + 0x0006 : word16)
  Class: Eq_3756
  DataType: 
  OrigDataType: 
T_3757: (in 0x000A : word16)
  Class: Eq_3757
  DataType: 
  OrigDataType: 
T_3758: (in bx + 0x000A : word16)
  Class: Eq_3758
  DataType: 
  OrigDataType: 
T_3759: (in Mem0[dx:bx + 0x000A:word16] : word16)
  Class: Eq_3756
  DataType: 
  OrigDataType: 
T_3760: (in ax_63 + 0x0006 >u Mem0[dx:bx + 0x000A:word16] : bool)
  Class: Eq_3760
  DataType: 
  OrigDataType: 
T_3761: (in si_102 : word16)
  Class: Eq_3761
  DataType: 
  OrigDataType: 
T_3762: (in 0x0006 : word16)
  Class: Eq_3762
  DataType: 
  OrigDataType: 
T_3763: (in bx + 0x0006 : word16)
  Class: Eq_3763
  DataType: 
  OrigDataType: 
T_3764: (in Mem0[dx:bx + 0x0006:word16] : word16)
  Class: Eq_3761
  DataType: 
  OrigDataType: 
T_3765: (in di_133 : word16)
  Class: Eq_3765
  DataType: 
  OrigDataType: 
T_3766: (in 0x0008 : word16)
  Class: Eq_3766
  DataType: 
  OrigDataType: 
T_3767: (in bx + 0x0008 : word16)
  Class: Eq_3767
  DataType: 
  OrigDataType: 
T_3768: (in Mem0[dx:bx + 0x0008:word16] : word16)
  Class: Eq_3765
  DataType: 
  OrigDataType: 
T_3769: (in ax_63 + 0x0006 : word16)
  Class: Eq_3765
  DataType: 
  OrigDataType: 
T_3770: (in ax_63 + 0x0006 >u di_133 : bool)
  Class: Eq_3770
  DataType: 
  OrigDataType: 
T_3771: (in dx_78 : word16)
  Class: Eq_3771
  DataType: 
  OrigDataType: 
T_3772: (in 0x0000 : word16)
  Class: Eq_3772
  DataType: 
  OrigDataType: 
T_3773: (in si_102 + 0x0000 : word16)
  Class: Eq_3773
  DataType: 
  OrigDataType: 
T_3774: (in Mem0[dx:si_102 + 0x0000:word16] : word16)
  Class: Eq_3771
  DataType: 
  OrigDataType: 
T_3775: (in ax_63 + 0x0006 : word16)
  Class: Eq_3771
  DataType: 
  OrigDataType: 
T_3776: (in ax_63 + 0x0006 <=u dx_78 : bool)
  Class: Eq_3776
  DataType: 
  OrigDataType: 
T_3777: (in 0x0014 : word16)
  Class: Eq_3777
  DataType: 
  OrigDataType: 
T_3778: (in bx + 0x0014 : word16)
  Class: Eq_3778
  DataType: 
  OrigDataType: 
T_3779: (in Mem0[dx:bx + 0x0014:word16] : word16)
  Class: Eq_3761
  DataType: 
  OrigDataType: 
T_3780: (in 0x0000 : word16)
  Class: Eq_3765
  DataType: 
  OrigDataType: 
T_3781: (in 0x0008 : word16)
  Class: Eq_3781
  DataType: 
  OrigDataType: 
T_3782: (in bx + 0x0008 : word16)
  Class: Eq_3782
  DataType: 
  OrigDataType: 
T_3783: (in Mem94[dx:bx + 0x0008:word16] : word16)
  Class: Eq_3765
  DataType: 
  OrigDataType: 
T_3784: (in 0x000C : word16)
  Class: Eq_3784
  DataType: 
  OrigDataType: 
T_3785: (in bx + 0x000C : word16)
  Class: Eq_3785
  DataType: 
  OrigDataType: 
T_3786: (in Mem94[dx:bx + 0x000C:word16] : word16)
  Class: Eq_3786
  DataType: 
  OrigDataType: 
T_3787: (in 0x0001 : word16)
  Class: Eq_3787
  DataType: 
  OrigDataType: 
T_3788: (in Mem94[dx:bx + 0x000C:word16] + 0x0001 : word16)
  Class: Eq_3788
  DataType: 
  OrigDataType: 
T_3789: (in 0x000C : word16)
  Class: Eq_3789
  DataType: 
  OrigDataType: 
T_3790: (in bx + 0x000C : word16)
  Class: Eq_3790
  DataType: 
  OrigDataType: 
T_3791: (in Mem96[dx:bx + 0x000C:word16] : word16)
  Class: Eq_3788
  DataType: 
  OrigDataType: 
T_3792: (in dx_93 : word16)
  Class: Eq_3792
  DataType: 
  OrigDataType: 
T_3793: (in ax_63 + 0x0006 : word16)
  Class: Eq_3793
  DataType: 
  OrigDataType: 
T_3794: (in dx_78 - (ax_63 + 0x0006) : word16)
  Class: Eq_3792
  DataType: 
  OrigDataType: 
T_3795: (in cx_97 : word16)
  Class: Eq_3795
  DataType: 
  OrigDataType: 
T_3796: (in 0x0004 : word16)
  Class: Eq_3796
  DataType: 
  OrigDataType: 
T_3797: (in si_102 + 0x0004 : word16)
  Class: Eq_3797
  DataType: 
  OrigDataType: 
T_3798: (in Mem96[dx:si_102 + 0x0004:word16] : word16)
  Class: Eq_3795
  DataType: 
  OrigDataType: 
T_3799: (in 0x0006 : word16)
  Class: Eq_3792
  DataType: 
  OrigDataType: 
T_3800: (in dx_93 <u 0x0006 : bool)
  Class: Eq_3800
  DataType: 
  OrigDataType: 
T_3801: (in di_81 : word16)
  Class: Eq_3801
  DataType: 
  OrigDataType: 
T_3802: (in di_133 - dx_78 : word16)
  Class: Eq_3801
  DataType: 
  OrigDataType: 
T_3803: (in 0x0000 : word16)
  Class: Eq_3803
  DataType: 
  OrigDataType: 
T_3804: (in 0x0000 : word16)
  Class: Eq_3801
  DataType: 
  OrigDataType: 
T_3805: (in di_81 >=u 0x0000 : bool)
  Class: Eq_3805
  DataType: 
  OrigDataType: 
T_3806: (in 0x0000 - (di_81 >=u 0x0000) : word16)
  Class: Eq_3806
  DataType: 
  OrigDataType: 
T_3807: (in di_81 & 0x0000 - (di_81 >=u 0x0000) : word16)
  Class: Eq_3807
  DataType: 
  OrigDataType: 
T_3808: (in (di_81 & 0x0000 - (di_81 >=u 0x0000)) + dx_78 : word16)
  Class: Eq_3765
  DataType: 
  OrigDataType: 
T_3809: (in 0x0004 : word16)
  Class: Eq_3809
  DataType: 
  OrigDataType: 
T_3810: (in si_102 + 0x0004 : word16)
  Class: Eq_3810
  DataType: 
  OrigDataType: 
T_3811: (in Mem0[dx:si_102 + 0x0004:word16] : word16)
  Class: Eq_3761
  DataType: 
  OrigDataType: 
T_3812: (in 0x0010 : word16)
  Class: Eq_3812
  DataType: 
  OrigDataType: 
T_3813: (in bx + 0x0010 : word16)
  Class: Eq_3761
  DataType: 
  OrigDataType: 
T_3814: (in si_102 != bx + 0x0010 : bool)
  Class: Eq_3814
  DataType: 
  OrigDataType: 
T_3815: (in 0x000A : word16)
  Class: Eq_3815
  DataType: 
  OrigDataType: 
T_3816: (in bx + 0x000A : word16)
  Class: Eq_3816
  DataType: 
  OrigDataType: 
T_3817: (in Mem92[dx:bx + 0x000A:word16] : word16)
  Class: Eq_3765
  DataType: 
  OrigDataType: 
T_3818: (in 0x000E : word16)
  Class: Eq_3818
  DataType: 
  OrigDataType: 
T_3819: (in bx + 0x000E : word16)
  Class: Eq_3819
  DataType: 
  OrigDataType: 
T_3820: (in Mem96[dx:bx + 0x000E:word16] : word16)
  Class: Eq_3820
  DataType: 
  OrigDataType: 
T_3821: (in 0x0001 : word16)
  Class: Eq_3821
  DataType: 
  OrigDataType: 
T_3822: (in Mem96[dx:bx + 0x000E:word16] - 0x0001 : word16)
  Class: Eq_3822
  DataType: 
  OrigDataType: 
T_3823: (in 0x000E : word16)
  Class: Eq_3823
  DataType: 
  OrigDataType: 
T_3824: (in bx + 0x000E : word16)
  Class: Eq_3824
  DataType: 
  OrigDataType: 
T_3825: (in Mem123[dx:bx + 0x000E:word16] : word16)
  Class: Eq_3822
  DataType: 
  OrigDataType: 
T_3826: (in si_127 : word16)
  Class: Eq_3826
  DataType: 
  OrigDataType: 
T_3827: (in 0x0002 : word16)
  Class: Eq_3827
  DataType: 
  OrigDataType: 
T_3828: (in si_102 + 0x0002 : word16)
  Class: Eq_3828
  DataType: 
  OrigDataType: 
T_3829: (in Mem123[dx:si_102 + 0x0002:word16] : word16)
  Class: Eq_3826
  DataType: 
  OrigDataType: 
T_3830: (in 0x0004 : word16)
  Class: Eq_3830
  DataType: 
  OrigDataType: 
T_3831: (in si_127 + 0x0004 : word16)
  Class: Eq_3831
  DataType: 
  OrigDataType: 
T_3832: (in Mem128[dx:si_127 + 0x0004:word16] : word16)
  Class: Eq_3795
  DataType: 
  OrigDataType: 
T_3833: (in 0x0002 : word16)
  Class: Eq_3833
  DataType: 
  OrigDataType: 
T_3834: (in cx_97 + 0x0002 : word16)
  Class: Eq_3834
  DataType: 
  OrigDataType: 
T_3835: (in Mem129[dx:cx_97 + 0x0002:word16] : word16)
  Class: Eq_3826
  DataType: 
  OrigDataType: 
T_3836: (in 0x0006 : word16)
  Class: Eq_3836
  DataType: 
  OrigDataType: 
T_3837: (in bx + 0x0006 : word16)
  Class: Eq_3837
  DataType: 
  OrigDataType: 
T_3838: (in Mem130[dx:bx + 0x0006:word16] : word16)
  Class: Eq_3826
  DataType: 
  OrigDataType: 
T_3839: (in di_111 : word16)
  Class: Eq_3839
  DataType: 
  OrigDataType: 
T_3840: (in ax_63 + 0x0006 : word16)
  Class: Eq_3840
  DataType: 
  OrigDataType: 
T_3841: (in si_102 + (ax_63 + 0x0006) : word16)
  Class: Eq_3839
  DataType: 
  OrigDataType: 
T_3842: (in 0x0006 : word16)
  Class: Eq_3842
  DataType: 
  OrigDataType: 
T_3843: (in bx + 0x0006 : word16)
  Class: Eq_3843
  DataType: 
  OrigDataType: 
T_3844: (in Mem113[dx:bx + 0x0006:word16] : word16)
  Class: Eq_3839
  DataType: 
  OrigDataType: 
T_3845: (in 0x0000 : word16)
  Class: Eq_3845
  DataType: 
  OrigDataType: 
T_3846: (in di_111 + 0x0000 : word16)
  Class: Eq_3846
  DataType: 
  OrigDataType: 
T_3847: (in Mem114[dx:di_111 + 0x0000:word16] : word16)
  Class: Eq_3792
  DataType: 
  OrigDataType: 
T_3848: (in ax_63 + 0x0006 : word16)
  Class: Eq_3848
  DataType: 
  OrigDataType: 
T_3849: (in 0x0000 : word16)
  Class: Eq_3849
  DataType: 
  OrigDataType: 
T_3850: (in si_102 + 0x0000 : word16)
  Class: Eq_3850
  DataType: 
  OrigDataType: 
T_3851: (in Mem115[dx:si_102 + 0x0000:word16] : word16)
  Class: Eq_3848
  DataType: 
  OrigDataType: 
T_3852: (in bx_116 : word16)
  Class: Eq_3852
  DataType: 
  OrigDataType: 
T_3853: (in 0x0002 : word16)
  Class: Eq_3853
  DataType: 
  OrigDataType: 
T_3854: (in si_102 + 0x0002 : word16)
  Class: Eq_3854
  DataType: 
  OrigDataType: 
T_3855: (in Mem115[dx:si_102 + 0x0002:word16] : word16)
  Class: Eq_3852
  DataType: 
  OrigDataType: 
T_3856: (in 0x0002 : word16)
  Class: Eq_3856
  DataType: 
  OrigDataType: 
T_3857: (in di_111 + 0x0002 : word16)
  Class: Eq_3857
  DataType: 
  OrigDataType: 
T_3858: (in Mem117[dx:di_111 + 0x0002:word16] : word16)
  Class: Eq_3852
  DataType: 
  OrigDataType: 
T_3859: (in 0x0004 : word16)
  Class: Eq_3859
  DataType: 
  OrigDataType: 
T_3860: (in di_111 + 0x0004 : word16)
  Class: Eq_3860
  DataType: 
  OrigDataType: 
T_3861: (in Mem118[dx:di_111 + 0x0004:word16] : word16)
  Class: Eq_3795
  DataType: 
  OrigDataType: 
T_3862: (in 0x0004 : word16)
  Class: Eq_3862
  DataType: 
  OrigDataType: 
T_3863: (in bx_116 + 0x0004 : word16)
  Class: Eq_3863
  DataType: 
  OrigDataType: 
T_3864: (in Mem119[dx:bx_116 + 0x0004:word16] : word16)
  Class: Eq_3839
  DataType: 
  OrigDataType: 
T_3865: (in 0x0002 : word16)
  Class: Eq_3865
  DataType: 
  OrigDataType: 
T_3866: (in cx_97 + 0x0002 : word16)
  Class: Eq_3866
  DataType: 
  OrigDataType: 
T_3867: (in Mem121[dx:cx_97 + 0x0002:word16] : word16)
  Class: Eq_3839
  DataType: 
  OrigDataType: 
T_3868: (in 0x0000 : word16)
  Class: Eq_3868
  DataType: 
  OrigDataType: 
T_3869: (in si_102 + 0x0000 : word16)
  Class: Eq_3869
  DataType: 
  OrigDataType: 
T_3870: (in Mem96[dx:si_102 + 0x0000:word16] : word16)
  Class: Eq_3870
  DataType: 
  OrigDataType: 
T_3871: (in 0x0001 : word16)
  Class: Eq_3871
  DataType: 
  OrigDataType: 
T_3872: (in Mem96[dx:si_102 + 0x0000:word16] | 0x0001 : word16)
  Class: Eq_3872
  DataType: 
  OrigDataType: 
T_3873: (in 0x0000 : word16)
  Class: Eq_3873
  DataType: 
  OrigDataType: 
T_3874: (in si_102 + 0x0000 : word16)
  Class: Eq_3874
  DataType: 
  OrigDataType: 
T_3875: (in Mem104[dx:si_102 + 0x0000:word16] : word16)
  Class: Eq_3872
  DataType: 
  OrigDataType: 
T_3876: (in 0x0002 : word16)
  Class: Eq_3876
  DataType: 
  OrigDataType: 
T_3877: (in si_102 + 0x0002 : word16)
  Class: Eq_3732
  DataType: 
  OrigDataType: 
T_3878: (in 0x0000 : word16)
  Class: Eq_2703
  DataType: 
  OrigDataType: 
T_3879: (in ax == 0x0000 : bool)
  Class: Eq_3879
  DataType: 
  OrigDataType: 
T_3880: (in ax_58 : word16)
  Class: Eq_3880
  DataType: 
  OrigDataType: 
T_3881: (in 0x0002 : word16)
  Class: Eq_3881
  DataType: 
  OrigDataType: 
T_3882: (in ax - 0x0002 : word16)
  Class: Eq_3882
  DataType: 
  OrigDataType: 
T_3883: (in Mem0[dx:ax - 0x0002:word16] : word16)
  Class: Eq_3880
  DataType: 
  OrigDataType: 
T_3884: (in si_110 : word16)
  Class: Eq_3884
  DataType: 
  OrigDataType: 
T_3885: (in ax - 0x0002 : word16)
  Class: Eq_3884
  DataType: 
  OrigDataType: 
T_3886: (in al_60 : byte)
  Class: Eq_3886
  DataType: 
  OrigDataType: 
T_3887: (in (byte) ax_58 : byte)
  Class: Eq_3886
  DataType: 
  OrigDataType: 
T_3888: (in 0x01 : byte)
  Class: Eq_3888
  DataType: 
  OrigDataType: 
T_3889: (in al_60 & 0x01 : byte)
  Class: Eq_3889
  DataType: 
  OrigDataType: 
T_3890: (in 0x00 : byte)
  Class: Eq_3889
  DataType: 
  OrigDataType: 
T_3891: (in (al_60 & 0x01) == 0x00 : bool)
  Class: Eq_3891
  DataType: 
  OrigDataType: 
T_3892: (in di_128 : word16)
  Class: Eq_3892
  DataType: 
  OrigDataType: 
T_3893: (in ax_65 : word16)
  Class: Eq_3893
  DataType: 
  OrigDataType: 
T_3894: (in 0xFE : byte)
  Class: Eq_3894
  DataType: 
  OrigDataType: 
T_3895: (in al_60 & 0xFE : byte)
  Class: Eq_3895
  DataType: 
  OrigDataType: 
T_3896: (in DPB(ax_58, al_60 & 0xFE, 0, 8) : word16)
  Class: Eq_3893
  DataType: 
  OrigDataType: 
T_3897: (in di_68 : word16)
  Class: Eq_3897
  DataType: 
  OrigDataType: 
T_3898: (in ax - 0x0002 : word16)
  Class: Eq_3898
  DataType: 
  OrigDataType: 
T_3899: (in ax - 0x0002 + ax_65 : word16)
  Class: Eq_3897
  DataType: 
  OrigDataType: 
T_3900: (in 0x0000 : word16)
  Class: Eq_3900
  DataType: 
  OrigDataType: 
T_3901: (in di_68 + 0x0000 : word16)
  Class: Eq_3901
  DataType: 
  OrigDataType: 
T_3902: (in Mem0[dx:di_68 + 0x0000:word16] : word16)
  Class: Eq_3902
  DataType: 
  OrigDataType: 
T_3903: (in 0x0001 : word16)
  Class: Eq_3903
  DataType: 
  OrigDataType: 
T_3904: (in Mem0[dx:di_68 + 0x0000:word16] & 0x0001 : word16)
  Class: Eq_3904
  DataType: 
  OrigDataType: 
T_3905: (in 0x0000 : word16)
  Class: Eq_3904
  DataType: 
  OrigDataType: 
T_3906: (in (Mem0[dx:di_68 + 0x0000:word16] & 0x0001) != 0x0000 : bool)
  Class: Eq_3906
  DataType: 
  OrigDataType: 
T_3907: (in ax - 0x0002 : word16)
  Class: Eq_3907
  DataType: 
  OrigDataType: 
T_3908: (in Mem137[dx:ax - 0x0002:word16] : word16)
  Class: Eq_3893
  DataType: 
  OrigDataType: 
T_3909: (in 0x0006 : word16)
  Class: Eq_3909
  DataType: 
  OrigDataType: 
T_3910: (in bx + 0x0006 : word16)
  Class: Eq_3910
  DataType: 
  OrigDataType: 
T_3911: (in Mem137[dx:bx + 0x0006:word16] : word16)
  Class: Eq_3892
  DataType: 
  OrigDataType: 
T_3912: (in ax - 0x0002 : word16)
  Class: Eq_3892
  DataType: 
  OrigDataType: 
T_3913: (in ax - 0x0002 >=u di_128 : bool)
  Class: Eq_3913
  DataType: 
  OrigDataType: 
T_3914: (in 0x0006 : word16)
  Class: Eq_3914
  DataType: 
  OrigDataType: 
T_3915: (in bx + 0x0006 : word16)
  Class: Eq_3915
  DataType: 
  OrigDataType: 
T_3916: (in Mem0[dx:bx + 0x0006:word16] : word16)
  Class: Eq_3897
  DataType: 
  OrigDataType: 
T_3917: (in di_68 != Mem0[dx:bx + 0x0006:word16] : bool)
  Class: Eq_3917
  DataType: 
  OrigDataType: 
T_3918: (in 0x0000 : word16)
  Class: Eq_3918
  DataType: 
  OrigDataType: 
T_3919: (in di_68 + 0x0000 : word16)
  Class: Eq_3919
  DataType: 
  OrigDataType: 
T_3920: (in Mem0[dx:di_68 + 0x0000:word16] : word16)
  Class: Eq_3920
  DataType: 
  OrigDataType: 
T_3921: (in ax_65 + Mem0[dx:di_68 + 0x0000:word16] : word16)
  Class: Eq_3921
  DataType: 
  OrigDataType: 
T_3922: (in ax - 0x0002 : word16)
  Class: Eq_3922
  DataType: 
  OrigDataType: 
T_3923: (in Mem124[dx:ax - 0x0002:word16] : word16)
  Class: Eq_3921
  DataType: 
  OrigDataType: 
T_3924: (in bx_127 : word16)
  Class: Eq_3924
  DataType: 
  OrigDataType: 
T_3925: (in 0x0002 : word16)
  Class: Eq_3925
  DataType: 
  OrigDataType: 
T_3926: (in di_68 + 0x0002 : word16)
  Class: Eq_3926
  DataType: 
  OrigDataType: 
T_3927: (in Mem124[dx:di_68 + 0x0002:word16] : word16)
  Class: Eq_3924
  DataType: 
  OrigDataType: 
T_3928: (in 0x0004 : word16)
  Class: Eq_3928
  DataType: 
  OrigDataType: 
T_3929: (in di_68 + 0x0004 : word16)
  Class: Eq_3929
  DataType: 
  OrigDataType: 
T_3930: (in Mem124[dx:di_68 + 0x0004:word16] : word16)
  Class: Eq_3892
  DataType: 
  OrigDataType: 
T_3931: (in 0x0004 : word16)
  Class: Eq_3931
  DataType: 
  OrigDataType: 
T_3932: (in bx_127 + 0x0004 : word16)
  Class: Eq_3932
  DataType: 
  OrigDataType: 
T_3933: (in Mem129[dx:bx_127 + 0x0004:word16] : word16)
  Class: Eq_3892
  DataType: 
  OrigDataType: 
T_3934: (in 0x0002 : word16)
  Class: Eq_3934
  DataType: 
  OrigDataType: 
T_3935: (in di_128 + 0x0002 : word16)
  Class: Eq_3935
  DataType: 
  OrigDataType: 
T_3936: (in Mem130[dx:di_128 + 0x0002:word16] : word16)
  Class: Eq_3924
  DataType: 
  OrigDataType: 
T_3937: (in 0x000E : word16)
  Class: Eq_3937
  DataType: 
  OrigDataType: 
T_3938: (in bx + 0x000E : word16)
  Class: Eq_3938
  DataType: 
  OrigDataType: 
T_3939: (in Mem130[dx:bx + 0x000E:word16] : word16)
  Class: Eq_3939
  DataType: 
  OrigDataType: 
T_3940: (in 0x0001 : word16)
  Class: Eq_3940
  DataType: 
  OrigDataType: 
T_3941: (in Mem130[dx:bx + 0x000E:word16] - 0x0001 : word16)
  Class: Eq_3941
  DataType: 
  OrigDataType: 
T_3942: (in 0x000E : word16)
  Class: Eq_3942
  DataType: 
  OrigDataType: 
T_3943: (in bx + 0x000E : word16)
  Class: Eq_3943
  DataType: 
  OrigDataType: 
T_3944: (in Mem134[dx:bx + 0x000E:word16] : word16)
  Class: Eq_3941
  DataType: 
  OrigDataType: 
T_3945: (in ax - 0x0002 : word16)
  Class: Eq_3945
  DataType: 
  OrigDataType: 
T_3946: (in 0x0006 : word16)
  Class: Eq_3946
  DataType: 
  OrigDataType: 
T_3947: (in bx + 0x0006 : word16)
  Class: Eq_3947
  DataType: 
  OrigDataType: 
T_3948: (in Mem136[dx:bx + 0x0006:word16] : word16)
  Class: Eq_3945
  DataType: 
  OrigDataType: 
T_3949: (in 0x0004 : word16)
  Class: Eq_3949
  DataType: 
  OrigDataType: 
T_3950: (in di_128 + 0x0004 : word16)
  Class: Eq_3950
  DataType: 
  OrigDataType: 
T_3951: (in Mem137[dx:di_128 + 0x0004:word16] : word16)
  Class: Eq_3892
  DataType: 
  OrigDataType: 
T_3952: (in ax - 0x0002 : word16)
  Class: Eq_3892
  DataType: 
  OrigDataType: 
T_3953: (in ax - 0x0002 <u di_128 : bool)
  Class: Eq_3953
  DataType: 
  OrigDataType: 
T_3954: (in ax - 0x0002 : word16)
  Class: Eq_3954
  DataType: 
  OrigDataType: 
T_3955: (in 0x0002 : word16)
  Class: Eq_3955
  DataType: 
  OrigDataType: 
T_3956: (in di_128 + 0x0002 : word16)
  Class: Eq_3956
  DataType: 
  OrigDataType: 
T_3957: (in Mem137[dx:di_128 + 0x0002:word16] : word16)
  Class: Eq_3954
  DataType: 
  OrigDataType: 
T_3958: (in ax - 0x0002 >u Mem137[dx:di_128 + 0x0002:word16] : bool)
  Class: Eq_3958
  DataType: 
  OrigDataType: 
T_3959: (in dx_80 : word16)
  Class: Eq_3884
  DataType: 
  OrigDataType: 
T_3960: (in 0x0002 : word16)
  Class: Eq_3960
  DataType: 
  OrigDataType: 
T_3961: (in di_128 + 0x0002 : word16)
  Class: Eq_3961
  DataType: 
  OrigDataType: 
T_3962: (in Mem0[dx:di_128 + 0x0002:word16] : word16)
  Class: Eq_3884
  DataType: 
  OrigDataType: 
T_3963: (in cx_106 : word16)
  Class: Eq_3963
  DataType: 
  OrigDataType: 
T_3964: (in ax - 0x0002 : word16)
  Class: Eq_3964
  DataType: 
  OrigDataType: 
T_3965: (in Mem0[dx:ax - 0x0002:word16] : word16)
  Class: Eq_3963
  DataType: 
  OrigDataType: 
T_3966: (in 0x0000 : word16)
  Class: Eq_3966
  DataType: 
  OrigDataType: 
T_3967: (in dx_80 + 0x0000 : word16)
  Class: Eq_3967
  DataType: 
  OrigDataType: 
T_3968: (in Mem0[dx:dx_80 + 0x0000:word16] : word16)
  Class: Eq_3968
  DataType: 
  OrigDataType: 
T_3969: (in dx_80 + Mem0[dx:dx_80 + 0x0000:word16] : word16)
  Class: Eq_3969
  DataType: 
  OrigDataType: 
T_3970: (in ax - 0x0002 : word16)
  Class: Eq_3969
  DataType: 
  OrigDataType: 
T_3971: (in dx_80 + Mem0[dx:dx_80 + 0x0000:word16] != ax - 0x0002 : bool)
  Class: Eq_3971
  DataType: 
  OrigDataType: 
T_3972: (in 0x0014 : word16)
  Class: Eq_3972
  DataType: 
  OrigDataType: 
T_3973: (in bx + 0x0014 : word16)
  Class: Eq_3973
  DataType: 
  OrigDataType: 
T_3974: (in Mem137[dx:bx + 0x0014:word16] : word16)
  Class: Eq_3892
  DataType: 
  OrigDataType: 
T_3975: (in ax - 0x0002 : word16)
  Class: Eq_3892
  DataType: 
  OrigDataType: 
T_3976: (in ax - 0x0002 <u di_128 : bool)
  Class: Eq_3976
  DataType: 
  OrigDataType: 
T_3977: (in ax_144 : word16)
  Class: Eq_3977
  DataType: 
  OrigDataType: 
T_3978: (in 0x000C : word16)
  Class: Eq_3978
  DataType: 
  OrigDataType: 
T_3979: (in bx + 0x000C : word16)
  Class: Eq_3979
  DataType: 
  OrigDataType: 
T_3980: (in Mem137[dx:bx + 0x000C:word16] : word16)
  Class: Eq_3977
  DataType: 
  OrigDataType: 
T_3981: (in cx_146 : word16)
  Class: Eq_3981
  DataType: 
  OrigDataType: 
T_3982: (in 0x000E : word16)
  Class: Eq_3982
  DataType: 
  OrigDataType: 
T_3983: (in bx + 0x000E : word16)
  Class: Eq_3983
  DataType: 
  OrigDataType: 
T_3984: (in Mem137[dx:bx + 0x000E:word16] : word16)
  Class: Eq_3981
  DataType: 
  OrigDataType: 
T_3985: (in 0x0000 : word16)
  Class: Eq_3985
  DataType: 
  OrigDataType: 
T_3986: (in SEQ(0x0000, ax_144) : word32)
  Class: Eq_3986
  DataType: 
  OrigDataType: 
T_3987: (in 0x0001 : word16)
  Class: Eq_3987
  DataType: 
  OrigDataType: 
T_3988: (in cx_146 + 0x0001 : word16)
  Class: Eq_3988
  DataType: 
  OrigDataType: 
T_3989: (in SEQ(0x0000, ax_144) % (cx_146 + 0x0001) : uint16)
  Class: Eq_3989
  DataType: 
  OrigDataType: 
T_3990: (in SEQ(SEQ(0x0000, ax_144) % (cx_146 + 0x0001), ax_144) : word32)
  Class: Eq_3990
  DataType: 
  OrigDataType: 
T_3991: (in cx_146 + 0x0001 : word16)
  Class: Eq_3991
  DataType: 
  OrigDataType: 
T_3992: (in SEQ(SEQ(0x0000, ax_144) % (cx_146 + 0x0001), ax_144) /u (cx_146 + 0x0001) : uint16)
  Class: Eq_3981
  DataType: 
  OrigDataType: 
T_3993: (in SEQ(SEQ(0x0000, ax_144) % (cx_146 + 0x0001), ax_144) /u (cx_146 + 0x0001) >=u cx_146 : bool)
  Class: Eq_3993
  DataType: 
  OrigDataType: 
T_3994: (in ax_155 : word16)
  Class: Eq_3994
  DataType: 
  OrigDataType: 
T_3995: (in 0x000C : word16)
  Class: Eq_3995
  DataType: 
  OrigDataType: 
T_3996: (in bx + 0x000C : word16)
  Class: Eq_3996
  DataType: 
  OrigDataType: 
T_3997: (in Mem137[dx:bx + 0x000C:word16] : word16)
  Class: Eq_3994
  DataType: 
  OrigDataType: 
T_3998: (in cx_157 : word16)
  Class: Eq_3998
  DataType: 
  OrigDataType: 
T_3999: (in 0x000E : word16)
  Class: Eq_3999
  DataType: 
  OrigDataType: 
T_4000: (in bx + 0x000E : word16)
  Class: Eq_4000
  DataType: 
  OrigDataType: 
T_4001: (in Mem137[dx:bx + 0x000E:word16] : word16)
  Class: Eq_3998
  DataType: 
  OrigDataType: 
T_4002: (in ax_161 : word16)
  Class: Eq_3998
  DataType: 
  OrigDataType: 
T_4003: (in 0x0000 : word16)
  Class: Eq_4003
  DataType: 
  OrigDataType: 
T_4004: (in SEQ(0x0000, ax_155) : word32)
  Class: Eq_4004
  DataType: 
  OrigDataType: 
T_4005: (in 0x0001 : word16)
  Class: Eq_4005
  DataType: 
  OrigDataType: 
T_4006: (in cx_157 + 0x0001 : word16)
  Class: Eq_4006
  DataType: 
  OrigDataType: 
T_4007: (in SEQ(0x0000, ax_155) % (cx_157 + 0x0001) : uint16)
  Class: Eq_4007
  DataType: 
  OrigDataType: 
T_4008: (in SEQ(SEQ(0x0000, ax_155) % (cx_157 + 0x0001), ax_155) : word32)
  Class: Eq_4008
  DataType: 
  OrigDataType: 
T_4009: (in cx_157 + 0x0001 : word16)
  Class: Eq_4009
  DataType: 
  OrigDataType: 
T_4010: (in SEQ(SEQ(0x0000, ax_155) % (cx_157 + 0x0001), ax_155) /u (cx_157 + 0x0001) : uint16)
  Class: Eq_3998
  DataType: 
  OrigDataType: 
T_4011: (in ax_161 >=u cx_157 : bool)
  Class: Eq_4011
  DataType: 
  OrigDataType: 
T_4012: (in 0x000E : word16)
  Class: Eq_4012
  DataType: 
  OrigDataType: 
T_4013: (in bx + 0x000E : word16)
  Class: Eq_4013
  DataType: 
  OrigDataType: 
T_4014: (in Mem0[dx:bx + 0x000E:word16] : word16)
  Class: Eq_4014
  DataType: 
  OrigDataType: 
T_4015: (in 0x0001 : word16)
  Class: Eq_4015
  DataType: 
  OrigDataType: 
T_4016: (in Mem0[dx:bx + 0x000E:word16] + 0x0001 : word16)
  Class: Eq_4016
  DataType: 
  OrigDataType: 
T_4017: (in 0x000E : word16)
  Class: Eq_4017
  DataType: 
  OrigDataType: 
T_4018: (in bx + 0x000E : word16)
  Class: Eq_4018
  DataType: 
  OrigDataType: 
T_4019: (in Mem113[dx:bx + 0x000E:word16] : word16)
  Class: Eq_4016
  DataType: 
  OrigDataType: 
T_4020: (in 0x0002 : word16)
  Class: Eq_4020
  DataType: 
  OrigDataType: 
T_4021: (in ax + 0x0002 : word16)
  Class: Eq_4021
  DataType: 
  OrigDataType: 
T_4022: (in Mem115[dx:ax + 0x0002:word16] : word16)
  Class: Eq_3892
  DataType: 
  OrigDataType: 
T_4023: (in 0x0000 : word16)
  Class: Eq_4023
  DataType: 
  OrigDataType: 
T_4024: (in ax + 0x0000 : word16)
  Class: Eq_4024
  DataType: 
  OrigDataType: 
T_4025: (in Mem116[dx:ax + 0x0000:word16] : word16)
  Class: Eq_3884
  DataType: 
  OrigDataType: 
T_4026: (in ax - 0x0002 : word16)
  Class: Eq_4026
  DataType: 
  OrigDataType: 
T_4027: (in 0x0004 : word16)
  Class: Eq_4027
  DataType: 
  OrigDataType: 
T_4028: (in dx_80 + 0x0004 : word16)
  Class: Eq_4028
  DataType: 
  OrigDataType: 
T_4029: (in Mem117[dx:dx_80 + 0x0004:word16] : word16)
  Class: Eq_4026
  DataType: 
  OrigDataType: 
T_4030: (in ax - 0x0002 : word16)
  Class: Eq_4030
  DataType: 
  OrigDataType: 
T_4031: (in 0x0002 : word16)
  Class: Eq_4031
  DataType: 
  OrigDataType: 
T_4032: (in di_128 + 0x0002 : word16)
  Class: Eq_4032
  DataType: 
  OrigDataType: 
T_4033: (in Mem119[dx:di_128 + 0x0002:word16] : word16)
  Class: Eq_4030
  DataType: 
  OrigDataType: 
T_4034: (in 0x0000 : word16)
  Class: Eq_4034
  DataType: 
  OrigDataType: 
T_4035: (in dx_80 + 0x0000 : word16)
  Class: Eq_4035
  DataType: 
  OrigDataType: 
T_4036: (in Mem0[dx:dx_80 + 0x0000:word16] : word16)
  Class: Eq_4036
  DataType: 
  OrigDataType: 
T_4037: (in cx_106 + Mem0[dx:dx_80 + 0x0000:word16] : word16)
  Class: Eq_3963
  DataType: 
  OrigDataType: 
T_4038: (in 0x0000 : word16)
  Class: Eq_4038
  DataType: 
  OrigDataType: 
T_4039: (in dx_80 + 0x0000 : word16)
  Class: Eq_4039
  DataType: 
  OrigDataType: 
T_4040: (in Mem107[dx:dx_80 + 0x0000:word16] : word16)
  Class: Eq_3963
  DataType: 
  OrigDataType: 
T_4041: (in ax - 0x0002 : word16)
  Class: Eq_4041
  DataType: 
  OrigDataType: 
T_4042: (in 0x0006 : word16)
  Class: Eq_4042
  DataType: 
  OrigDataType: 
T_4043: (in bx + 0x0006 : word16)
  Class: Eq_4043
  DataType: 
  OrigDataType: 
T_4044: (in Mem107[dx:bx + 0x0006:word16] : word16)
  Class: Eq_4041
  DataType: 
  OrigDataType: 
T_4045: (in ax - 0x0002 != Mem107[dx:bx + 0x0006:word16] : bool)
  Class: Eq_4045
  DataType: 
  OrigDataType: 
T_4046: (in 0x0006 : word16)
  Class: Eq_4046
  DataType: 
  OrigDataType: 
T_4047: (in bx + 0x0006 : word16)
  Class: Eq_4047
  DataType: 
  OrigDataType: 
T_4048: (in Mem111[dx:bx + 0x0006:word16] : word16)
  Class: Eq_3884
  DataType: 
  OrigDataType: 
T_4049: (in 0x0006 : word16)
  Class: Eq_4049
  DataType: 
  OrigDataType: 
T_4050: (in bx + 0x0006 : word16)
  Class: Eq_4050
  DataType: 
  OrigDataType: 
T_4051: (in Mem137[dx:bx + 0x0006:word16] : word16)
  Class: Eq_3892
  DataType: 
  OrigDataType: 
T_4052: (in ax - 0x0002 : word16)
  Class: Eq_3892
  DataType: 
  OrigDataType: 
T_4053: (in ax - 0x0002 >=u di_128 : bool)
  Class: Eq_4053
  DataType: 
  OrigDataType: 
T_4054: (in 0x000C : word16)
  Class: Eq_4054
  DataType: 
  OrigDataType: 
T_4055: (in bx + 0x000C : word16)
  Class: Eq_4055
  DataType: 
  OrigDataType: 
T_4056: (in Mem137[dx:bx + 0x000C:word16] : word16)
  Class: Eq_4056
  DataType: 
  OrigDataType: 
T_4057: (in Mem137[dx:bx + 0x000C:word16] - cx_157 : word16)
  Class: Eq_3998
  DataType: 
  OrigDataType: 
T_4058: (in Mem137[dx:bx + 0x000C:word16] - cx_157 >u cx_157 : bool)
  Class: Eq_4058
  DataType: 
  OrigDataType: 
T_4059: (in ax_196 : word16)
  Class: Eq_4059
  DataType: 
  OrigDataType: 
T_4060: (in 0x0002 : word16)
  Class: Eq_4060
  DataType: 
  OrigDataType: 
T_4061: (in ax_161 * 0x0002 : word16)
  Class: Eq_4061
  DataType: 
  OrigDataType: 
T_4062: (in 0x0002 : word16)
  Class: Eq_4062
  DataType: 
  OrigDataType: 
T_4063: (in ax_161 * 0x0002 * 0x0002 : word16)
  Class: Eq_4059
  DataType: 
  OrigDataType: 
T_4064: (in 0x000C : word16)
  Class: Eq_4064
  DataType: 
  OrigDataType: 
T_4065: (in bx + 0x000C : word16)
  Class: Eq_4065
  DataType: 
  OrigDataType: 
T_4066: (in Mem137[dx:bx + 0x000C:word16] : word16)
  Class: Eq_4066
  DataType: 
  OrigDataType: 
T_4067: (in Mem137[dx:bx + 0x000C:word16] - cx_157 : word16)
  Class: Eq_3998
  DataType: 
  OrigDataType: 
T_4068: (in Mem137[dx:bx + 0x000C:word16] - cx_157 >u cx_157 : bool)
  Class: Eq_4068
  DataType: 
  OrigDataType: 
T_4069: (in ax - 0x0002 : word16)
  Class: Eq_4069
  DataType: 
  OrigDataType: 
T_4070: (in ax - 0x0002 : word16)
  Class: Eq_4070
  DataType: 
  OrigDataType: 
T_4071: (in Mem137[dx:ax - 0x0002:word16] : word16)
  Class: Eq_4071
  DataType: 
  OrigDataType: 
T_4072: (in ax - 0x0002 + Mem137[dx:ax - 0x0002:word16] : word16)
  Class: Eq_3892
  DataType: 
  OrigDataType: 
T_4073: (in 0x0000 : word16)
  Class: Eq_4059
  DataType: 
  OrigDataType: 
T_4074: (in 0x000A : word16)
  Class: Eq_4074
  DataType: 
  OrigDataType: 
T_4075: (in bx + 0x000A : word16)
  Class: Eq_4075
  DataType: 
  OrigDataType: 
T_4076: (in Mem97[dx:bx + 0x000A:word16] : word16)
  Class: Eq_3963
  DataType: 
  OrigDataType: 
T_4077: (in cx_106 <=u Mem97[dx:bx + 0x000A:word16] : bool)
  Class: Eq_4077
  DataType: 
  OrigDataType: 
T_4078: (in 0x0008 : word16)
  Class: Eq_4078
  DataType: 
  OrigDataType: 
T_4079: (in bx + 0x0008 : word16)
  Class: Eq_4079
  DataType: 
  OrigDataType: 
T_4080: (in Mem97[dx:bx + 0x0008:word16] : word16)
  Class: Eq_3963
  DataType: 
  OrigDataType: 
T_4081: (in cx_106 <=u Mem97[dx:bx + 0x0008:word16] : bool)
  Class: Eq_4081
  DataType: 
  OrigDataType: 
T_4082: (in 0x0008 : word16)
  Class: Eq_4082
  DataType: 
  OrigDataType: 
T_4083: (in bx + 0x0008 : word16)
  Class: Eq_4083
  DataType: 
  OrigDataType: 
T_4084: (in Mem105[dx:bx + 0x0008:word16] : word16)
  Class: Eq_3963
  DataType: 
  OrigDataType: 
T_4085: (in dx_211 : word16)
  Class: Eq_4085
  DataType: 
  OrigDataType: 
T_4086: (in 0xFFFF : word16)
  Class: Eq_4085
  DataType: 
  OrigDataType: 
T_4087: (in dx_211 == 0xFFFF : bool)
  Class: Eq_4087
  DataType: 
  OrigDataType: 
T_4088: (in dl_213 : byte)
  Class: Eq_4088
  DataType: 
  OrigDataType: 
T_4089: (in 0xFE : byte)
  Class: Eq_4089
  DataType: 
  OrigDataType: 
T_4090: (in dl_213 & 0xFE : byte)
  Class: Eq_4090
  DataType: 
  OrigDataType: 
T_4091: (in DPB(dx_211, dl_213 & 0xFE, 0, 8) : word16)
  Class: Eq_4091
  DataType: 
  OrigDataType: 
T_4092: (in di_128 + DPB(dx_211, dl_213 & 0xFE, 0, 8) : word16)
  Class: Eq_3892
  DataType: 
  OrigDataType: 
T_4093: (in 0x0001 : word16)
  Class: Eq_4093
  DataType: 
  OrigDataType: 
T_4094: (in ax_196 - 0x0001 : word16)
  Class: Eq_4059
  DataType: 
  OrigDataType: 
T_4095: (in 0x0000 : word16)
  Class: Eq_4059
  DataType: 
  OrigDataType: 
T_4096: (in ax_196 != 0x0000 : bool)
  Class: Eq_4096
  DataType: 
  OrigDataType: 
T_4097: (in 0x0000 : word16)
  Class: Eq_4097
  DataType: 
  OrigDataType: 
T_4098: (in di_128 + 0x0000 : word16)
  Class: Eq_4098
  DataType: 
  OrigDataType: 
T_4099: (in Mem137[dx:di_128 + 0x0000:word16] : word16)
  Class: Eq_4085
  DataType: 
  OrigDataType: 
T_4100: (in (byte) dx_211 : byte)
  Class: Eq_4088
  DataType: 
  OrigDataType: 
T_4101: (in 0x01 : byte)
  Class: Eq_4101
  DataType: 
  OrigDataType: 
T_4102: (in dl_213 & 0x01 : byte)
  Class: Eq_4102
  DataType: 
  OrigDataType: 
T_4103: (in 0x00 : byte)
  Class: Eq_4102
  DataType: 
  OrigDataType: 
T_4104: (in (dl_213 & 0x01) == 0x00 : bool)
  Class: Eq_4104
  DataType: 
  OrigDataType: 
T_4105: (in ax - 0x0002 : word16)
  Class: Eq_3892
  DataType: 
  OrigDataType: 
T_4106: (in ax - 0x0002 <u di_128 : bool)
  Class: Eq_4106
  DataType: 
  OrigDataType: 
T_4107: (in 0x0014 : word16)
  Class: Eq_4107
  DataType: 
  OrigDataType: 
T_4108: (in bx + 0x0014 : word16)
  Class: Eq_4108
  DataType: 
  OrigDataType: 
T_4109: (in Mem137[dx:bx + 0x0014:word16] : word16)
  Class: Eq_3892
  DataType: 
  OrigDataType: 
T_4110: (in 0x000A : word16)
  Class: Eq_4110
  DataType: 
  OrigDataType: 
T_4111: (in bx + 0x000A : word16)
  Class: Eq_4111
  DataType: 
  OrigDataType: 
T_4112: (in Mem102[dx:bx + 0x000A:word16] : word16)
  Class: Eq_3963
  DataType: 
  OrigDataType: 
T_4113: (in 0x0004 : word16)
  Class: Eq_4113
  DataType: 
  OrigDataType: 
T_4114: (in di_128 + 0x0004 : word16)
  Class: Eq_4114
  DataType: 
  OrigDataType: 
T_4115: (in Mem137[dx:di_128 + 0x0004:word16] : word16)
  Class: Eq_3892
  DataType: 
  OrigDataType: 
T_4116: (in ax - 0x0002 : word16)
  Class: Eq_3892
  DataType: 
  OrigDataType: 
T_4117: (in ax - 0x0002 <u di_128 : bool)
  Class: Eq_4117
  DataType: 
  OrigDataType: 
T_4118: (in 0x0004 : word16)
  Class: Eq_4118
  DataType: 
  OrigDataType: 
T_4119: (in di_128 + 0x0004 : word16)
  Class: Eq_4119
  DataType: 
  OrigDataType: 
T_4120: (in Mem137[dx:di_128 + 0x0004:word16] : word16)
  Class: Eq_3892
  DataType: 
  OrigDataType: 
T_4121: (in ax - 0x0002 : word16)
  Class: Eq_3892
  DataType: 
  OrigDataType: 
T_4122: (in ax - 0x0002 <u di_128 : bool)
  Class: Eq_4122
  DataType: 
  OrigDataType: 
T_4123: (in 0x0004 : word16)
  Class: Eq_4123
  DataType: 
  OrigDataType: 
T_4124: (in di_128 + 0x0004 : word16)
  Class: Eq_4124
  DataType: 
  OrigDataType: 
T_4125: (in Mem137[dx:di_128 + 0x0004:word16] : word16)
  Class: Eq_3892
  DataType: 
  OrigDataType: 
T_4126: (in 0x000C : word16)
  Class: Eq_4126
  DataType: 
  OrigDataType: 
T_4127: (in bx + 0x000C : word16)
  Class: Eq_4127
  DataType: 
  OrigDataType: 
T_4128: (in Mem0[dx:bx + 0x000C:word16] : word16)
  Class: Eq_4128
  DataType: 
  OrigDataType: 
T_4129: (in 0x0001 : word16)
  Class: Eq_4129
  DataType: 
  OrigDataType: 
T_4130: (in Mem0[dx:bx + 0x000C:word16] - 0x0001 : word16)
  Class: Eq_4130
  DataType: 
  OrigDataType: 
T_4131: (in 0x000C : word16)
  Class: Eq_4131
  DataType: 
  OrigDataType: 
T_4132: (in bx + 0x000C : word16)
  Class: Eq_4132
  DataType: 
  OrigDataType: 
T_4133: (in Mem97[dx:bx + 0x000C:word16] : word16)
  Class: Eq_4130
  DataType: 
  OrigDataType: 
T_4134: (in 0x0006 : word16)
  Class: Eq_4134
  DataType: 
  OrigDataType: 
T_4135: (in bx + 0x0006 : word16)
  Class: Eq_4135
  DataType: 
  OrigDataType: 
T_4136: (in Mem97[dx:bx + 0x0006:word16] : word16)
  Class: Eq_3884
  DataType: 
  OrigDataType: 
T_4137: (in si_110 >=u Mem97[dx:bx + 0x0006:word16] : bool)
  Class: Eq_4137
  DataType: 
  OrigDataType: 
T_4138: (in 0x0010 : word16)
  Class: Eq_4138
  DataType: 
  OrigDataType: 
T_4139: (in bx + 0x0010 : word16)
  Class: Eq_3892
  DataType: 
  OrigDataType: 
T_4140: (in ax - 0x0002 : word16)
  Class: Eq_4140
  DataType: 
  OrigDataType: 
T_4141: (in 0x0012 : word16)
  Class: Eq_4141
  DataType: 
  OrigDataType: 
T_4142: (in bx + 0x0012 : word16)
  Class: Eq_4142
  DataType: 
  OrigDataType: 
T_4143: (in Mem137[dx:bx + 0x0012:word16] : word16)
  Class: Eq_4140
  DataType: 
  OrigDataType: 
T_4144: (in ax - 0x0002 >u Mem137[dx:bx + 0x0012:word16] : bool)
  Class: Eq_4144
  DataType: 
  OrigDataType: 
T_4145: (in ax : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_4146: (in bx_15 : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_4147: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4148: (in 0x0380 : word16)
  Class: Eq_4148
  DataType: 
  OrigDataType: 
T_4149: (in Mem0[ds:0x0380:word16] : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_4150: (in di_16 : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_4151: (in 0x0000 : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_4152: (in 0x0000 : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_4153: (in bx_15 != 0x0000 : bool)
  Class: Eq_4153
  DataType: 
  OrigDataType: 
T_4154: (in ax <u bx_15 : bool)
  Class: Eq_4154
  DataType: 
  OrigDataType: 
T_4155: (in 0x0002 : word16)
  Class: Eq_4155
  DataType: 
  OrigDataType: 
T_4156: (in ax + 0x0002 : word16)
  Class: Eq_4156
  DataType: 
  OrigDataType: 
T_4157: (in Mem27[ds:ax + 0x0002:word16] : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_4158: (in 0x0004 : word16)
  Class: Eq_4158
  DataType: 
  OrigDataType: 
T_4159: (in ax + 0x0004 : word16)
  Class: Eq_4159
  DataType: 
  OrigDataType: 
T_4160: (in Mem28[ds:ax + 0x0004:word16] : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_4161: (in 0x0000 : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_4162: (in di_16 == 0x0000 : bool)
  Class: Eq_4162
  DataType: 
  OrigDataType: 
T_4163: (in 0x0380 : word16)
  Class: Eq_4163
  DataType: 
  OrigDataType: 
T_4164: (in Mem59[ds:0x0380:word16] : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_4165: (in 0x0004 : word16)
  Class: Eq_4165
  DataType: 
  OrigDataType: 
T_4166: (in di_16 + 0x0004 : word16)
  Class: Eq_4166
  DataType: 
  OrigDataType: 
T_4167: (in Mem58[ds:di_16 + 0x0004:word16] : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_4168: (in 0x0000 : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_4169: (in bx_15 == 0x0000 : bool)
  Class: Eq_4169
  DataType: 
  OrigDataType: 
T_4170: (in 0x0004 : word16)
  Class: Eq_4170
  DataType: 
  OrigDataType: 
T_4171: (in bx_15 + 0x0004 : word16)
  Class: Eq_4171
  DataType: 
  OrigDataType: 
T_4172: (in Mem0[ds:bx_15 + 0x0004:word16] : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_4173: (in bx_36 : word16)
  Class: Eq_4173
  DataType: 
  OrigDataType: 
T_4174: (in 0x0000 : word16)
  Class: Eq_4174
  DataType: 
  OrigDataType: 
T_4175: (in ax + 0x0000 : word16)
  Class: Eq_4175
  DataType: 
  OrigDataType: 
T_4176: (in Mem28[ds:ax + 0x0000:word16] : word16)
  Class: Eq_4173
  DataType: 
  OrigDataType: 
T_4177: (in 0x0000 : word16)
  Class: Eq_4177
  DataType: 
  OrigDataType: 
T_4178: (in 0x0010 : word16)
  Class: Eq_4178
  DataType: 
  OrigDataType: 
T_4179: (in ax + 0x0010 : word16)
  Class: Eq_4179
  DataType: 
  OrigDataType: 
T_4180: (in Mem38[ds:ax + 0x0010:word16] : word16)
  Class: Eq_4177
  DataType: 
  OrigDataType: 
T_4181: (in 0x0000 : word16)
  Class: Eq_4181
  DataType: 
  OrigDataType: 
T_4182: (in 0x0008 : word16)
  Class: Eq_4182
  DataType: 
  OrigDataType: 
T_4183: (in ax + 0x0008 : word16)
  Class: Eq_4183
  DataType: 
  OrigDataType: 
T_4184: (in Mem39[ds:ax + 0x0008:word16] : word16)
  Class: Eq_4181
  DataType: 
  OrigDataType: 
T_4185: (in 0x0000 : word16)
  Class: Eq_4185
  DataType: 
  OrigDataType: 
T_4186: (in 0x000C : word16)
  Class: Eq_4186
  DataType: 
  OrigDataType: 
T_4187: (in ax + 0x000C : word16)
  Class: Eq_4187
  DataType: 
  OrigDataType: 
T_4188: (in Mem40[ds:ax + 0x000C:word16] : word16)
  Class: Eq_4185
  DataType: 
  OrigDataType: 
T_4189: (in 0x0000 : word16)
  Class: Eq_4189
  DataType: 
  OrigDataType: 
T_4190: (in 0x000E : word16)
  Class: Eq_4190
  DataType: 
  OrigDataType: 
T_4191: (in ax + 0x000E : word16)
  Class: Eq_4191
  DataType: 
  OrigDataType: 
T_4192: (in Mem41[ds:ax + 0x000E:word16] : word16)
  Class: Eq_4189
  DataType: 
  OrigDataType: 
T_4193: (in 0x0010 : word16)
  Class: Eq_4193
  DataType: 
  OrigDataType: 
T_4194: (in ax + 0x0010 : word16)
  Class: Eq_4194
  DataType: 
  OrigDataType: 
T_4195: (in 0x0012 : word16)
  Class: Eq_4195
  DataType: 
  OrigDataType: 
T_4196: (in ax + 0x0012 : word16)
  Class: Eq_4196
  DataType: 
  OrigDataType: 
T_4197: (in Mem42[ds:ax + 0x0012:word16] : word16)
  Class: Eq_4194
  DataType: 
  OrigDataType: 
T_4198: (in ax + 0x0010 : word16)
  Class: Eq_4198
  DataType: 
  OrigDataType: 
T_4199: (in 0x0014 : word16)
  Class: Eq_4199
  DataType: 
  OrigDataType: 
T_4200: (in ax + 0x0014 : word16)
  Class: Eq_4200
  DataType: 
  OrigDataType: 
T_4201: (in Mem43[ds:ax + 0x0014:word16] : word16)
  Class: Eq_4198
  DataType: 
  OrigDataType: 
T_4202: (in ax + 0x0010 : word16)
  Class: Eq_4202
  DataType: 
  OrigDataType: 
T_4203: (in 0x0006 : word16)
  Class: Eq_4203
  DataType: 
  OrigDataType: 
T_4204: (in ax + 0x0006 : word16)
  Class: Eq_4204
  DataType: 
  OrigDataType: 
T_4205: (in Mem45[ds:ax + 0x0006:word16] : word16)
  Class: Eq_4202
  DataType: 
  OrigDataType: 
T_4206: (in 0x0016 : word16)
  Class: Eq_4206
  DataType: 
  OrigDataType: 
T_4207: (in bx_36 - 0x0016 : word16)
  Class: Eq_4207
  DataType: 
  OrigDataType: 
T_4208: (in 0x0016 : word16)
  Class: Eq_4208
  DataType: 
  OrigDataType: 
T_4209: (in ax + 0x0016 : word16)
  Class: Eq_4209
  DataType: 
  OrigDataType: 
T_4210: (in Mem46[ds:ax + 0x0016:word16] : word16)
  Class: Eq_4207
  DataType: 
  OrigDataType: 
T_4211: (in 0xFFFF : word16)
  Class: Eq_4211
  DataType: 
  OrigDataType: 
T_4212: (in bx_36 - 0x0016 : word16)
  Class: Eq_4212
  DataType: 
  OrigDataType: 
T_4213: (in ax + 0x0016 : word16)
  Class: Eq_4213
  DataType: 
  OrigDataType: 
T_4214: (in bx_36 - 0x0016 + (ax + 0x0016) : word16)
  Class: Eq_4214
  DataType: 
  OrigDataType: 
T_4215: (in Mem50[ds:bx_36 - 0x0016 + (ax + 0x0016):word16] : word16)
  Class: Eq_4211
  DataType: 
  OrigDataType: 
T_4216: (in 0x0002 : word16)
  Class: Eq_4216
  DataType: 
  OrigDataType: 
T_4217: (in bx_15 + 0x0002 : word16)
  Class: Eq_4217
  DataType: 
  OrigDataType: 
T_4218: (in Mem57[ds:bx_15 + 0x0002:word16] : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_4219: (in ax + 0x0016 : word16)
  Class: Eq_4219
  DataType: 
  OrigDataType: 
T_4220: (in ax : word16)
  Class: Eq_4220
  DataType: 
  OrigDataType: 
T_4221: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4222: (in 0x0380 : word16)
  Class: Eq_4222
  DataType: 
  OrigDataType: 
T_4223: (in Mem0[ds:0x0380:word16] : word16)
  Class: Eq_4223
  DataType: 
  OrigDataType: 
T_4224: (in 0x0000 : word16)
  Class: Eq_4223
  DataType: 
  OrigDataType: 
T_4225: (in Mem0[ds:0x0380:word16] == 0x0000 : bool)
  Class: Eq_4225
  DataType: 
  OrigDataType: 
T_4226: (in 0x0000 : word16)
  Class: Eq_4226
  DataType: 
  OrigDataType: 
T_4227: (in bx_24 : word16)
  Class: Eq_4227
  DataType: 
  OrigDataType: 
T_4228: (in 0x0380 : word16)
  Class: Eq_4228
  DataType: 
  OrigDataType: 
T_4229: (in Mem0[ds:0x0380:word16] : word16)
  Class: Eq_4229
  DataType: 
  OrigDataType: 
T_4230: (in 0x0012 : word16)
  Class: Eq_4230
  DataType: 
  OrigDataType: 
T_4231: (in Mem0[ds:0x0380:word16] + 0x0012 : word16)
  Class: Eq_4231
  DataType: 
  OrigDataType: 
T_4232: (in Mem0[ds:Mem0[ds:0x0380:word16] + 0x0012:word16] : word16)
  Class: Eq_4227
  DataType: 
  OrigDataType: 
T_4233: (in 0x0000 : word16)
  Class: Eq_4233
  DataType: 
  OrigDataType: 
T_4234: (in bx_24 + 0x0000 : word16)
  Class: Eq_4234
  DataType: 
  OrigDataType: 
T_4235: (in Mem0[ds:bx_24 + 0x0000:word16] : word16)
  Class: Eq_4235
  DataType: 
  OrigDataType: 
T_4236: (in Mem0[ds:bx_24 + 0x0000:word16] + bx_24 : word16)
  Class: Eq_4236
  DataType: 
  OrigDataType: 
T_4237: (in 0x0002 : word16)
  Class: Eq_4237
  DataType: 
  OrigDataType: 
T_4238: (in Mem0[ds:bx_24 + 0x0000:word16] + bx_24 + 0x0002 : word16)
  Class: Eq_4238
  DataType: 
  OrigDataType: 
T_4239: (in 0x0224 : word16)
  Class: Eq_4239
  DataType: 
  OrigDataType: 
T_4240: (in Mem0[ds:0x0224:word16] : word16)
  Class: Eq_4238
  DataType: 
  OrigDataType: 
T_4241: (in Mem0[ds:bx_24 + 0x0000:word16] + bx_24 + 0x0002 != Mem0[ds:0x0224:word16] : bool)
  Class: Eq_4241
  DataType: 
  OrigDataType: 
T_4242: (in 0x0000 : word16)
  Class: Eq_4242
  DataType: 
  OrigDataType: 
T_4243: (in bx_24 + 0x0000 : word16)
  Class: Eq_4243
  DataType: 
  OrigDataType: 
T_4244: (in Mem0[ds:bx_24 + 0x0000:word16] : word16)
  Class: Eq_4244
  DataType: 
  OrigDataType: 
T_4245: (in cx : word16)
  Class: Eq_4245
  DataType: 
  OrigDataType: 
T_4246: (in *cxOut : word16)
  Class: Eq_4245
  DataType: 
  OrigDataType: 
T_4247: (in dx : word16)
  Class: Eq_4247
  DataType: 
  OrigDataType: 
T_4248: (in *dxOut : word16)
  Class: Eq_4247
  DataType: 
  OrigDataType: 
T_4249: (in ax_117 : word16)
  Class: Eq_4249
  DataType: 
  OrigDataType: 
T_4250: (in 0x0398 : word16)
  Class: Eq_4250
  DataType: 
  OrigDataType: 
T_4251: (in Mem0[ds:0x0398:word16] : word16)
  Class: Eq_4251
  DataType: 
  OrigDataType: 
T_4252: (in 0x0000 : word16)
  Class: Eq_4251
  DataType: 
  OrigDataType: 
T_4253: (in Mem0[ds:0x0398:word16] != 0x0000 : bool)
  Class: Eq_4253
  DataType: 
  OrigDataType: 
T_4254: (in 0x0224 : word16)
  Class: Eq_4254
  DataType: 
  OrigDataType: 
T_4255: (in Mem0[ds:0x0224:word16] : word16)
  Class: Eq_4255
  DataType: 
  OrigDataType: 
T_4256: (in 0xFFFE : word16)
  Class: Eq_4255
  DataType: 
  OrigDataType: 
T_4257: (in Mem0[ds:0x0224:word16] == 0xFFFE : bool)
  Class: Eq_4257
  DataType: 
  OrigDataType: 
T_4258: (in 0x0000 : word16)
  Class: Eq_4249
  DataType: 
  OrigDataType: 
T_4259: (in fn0800_175F : ptr32)
  Class: Eq_4259
  DataType: 
  OrigDataType: 
T_4260: (in signature of fn0800_175F : void)
  Class: Eq_4259
  DataType: 
  OrigDataType: 
T_4261: (in ax : word16)
  Class: Eq_4261
  DataType: 
  OrigDataType: 
T_4262: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4263: (in fp : ptr16)
  Class: Eq_4263
  DataType: 
  OrigDataType: 
T_4264: (in 0x000A : word16)
  Class: Eq_4264
  DataType: 
  OrigDataType: 
T_4265: (in fp - 0x000A : word16)
  Class: Eq_4261
  DataType: 
  OrigDataType: 
T_4266: (in fn0800_175F(fp - 0x000A, ds) : word16)
  Class: Eq_4249
  DataType: 
  OrigDataType: 
T_4267: (in 0x0000 : word16)
  Class: Eq_4249
  DataType: 
  OrigDataType: 
T_4268: (in ax_117 == 0x0000 : bool)
  Class: Eq_4268
  DataType: 
  OrigDataType: 
T_4269: (in bx_158 : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_4270: (in 0x0224 : word16)
  Class: Eq_4270
  DataType: 
  OrigDataType: 
T_4271: (in Mem0[ds:0x0224:word16] : word16)
  Class: Eq_4271
  DataType: 
  OrigDataType: 
T_4272: (in ax + Mem0[ds:0x0224:word16] : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_4273: (in 0x0224 : word16)
  Class: Eq_4273
  DataType: 
  OrigDataType: 
T_4274: (in Mem0[ds:0x0224:word16] : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_4275: (in bx_158 >=u Mem0[ds:0x0224:word16] : bool)
  Class: Eq_4275
  DataType: 
  OrigDataType: 
T_4276: (in ax_72 : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_4277: (in fn0800_21A7 : ptr32)
  Class: Eq_4277
  DataType: 
  OrigDataType: 
T_4278: (in signature of fn0800_21A7 : void)
  Class: Eq_4277
  DataType: 
  OrigDataType: 
T_4279: (in ax : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_4280: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4281: (in fn0800_21A7(bx_158, ds) : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_4282: (in 0xFFFF : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_4283: (in ax_72 == 0xFFFF : bool)
  Class: Eq_4283
  DataType: 
  OrigDataType: 
T_4284: (in 0xFFFE : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_4285: (in 0xFFF8 : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_4286: (in ax_72 >u 0xFFF8 : bool)
  Class: Eq_4286
  DataType: 
  OrigDataType: 
T_4287: (in bx_158 <=u ax_72 : bool)
  Class: Eq_4287
  DataType: 
  OrigDataType: 
T_4288: (in bx_81 : word16)
  Class: Eq_4288
  DataType: 
  OrigDataType: 
T_4289: (in bx_158 - ax_72 : word16)
  Class: Eq_4288
  DataType: 
  OrigDataType: 
T_4290: (in 0x0002 : word16)
  Class: Eq_4290
  DataType: 
  OrigDataType: 
T_4291: (in bx_81 - 0x0002 : word16)
  Class: Eq_4288
  DataType: 
  OrigDataType: 
T_4292: (in bx_81 - 0x0002 >u bx_81 : bool)
  Class: Eq_4292
  DataType: 
  OrigDataType: 
T_4293: (in bx_105 : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_4294: (in 0x0380 : word16)
  Class: Eq_4294
  DataType: 
  OrigDataType: 
T_4295: (in Mem0[ds:0x0380:word16] : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_4296: (in 0x0000 : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_4297: (in bx_105 != 0x0000 : bool)
  Class: Eq_4297
  DataType: 
  OrigDataType: 
T_4298: (in 0x0004 : word16)
  Class: Eq_4298
  DataType: 
  OrigDataType: 
T_4299: (in bx_105 + 0x0004 : word16)
  Class: Eq_4299
  DataType: 
  OrigDataType: 
T_4300: (in Mem0[ds:bx_105 + 0x0004:word16] : word16)
  Class: Eq_4300
  DataType: 
  OrigDataType: 
T_4301: (in 0x0000 : word16)
  Class: Eq_4300
  DataType: 
  OrigDataType: 
T_4302: (in Mem0[ds:bx_105 + 0x0004:word16] == 0x0000 : bool)
  Class: Eq_4302
  DataType: 
  OrigDataType: 
T_4303: (in si_104 : word16)
  Class: Eq_4303
  DataType: 
  OrigDataType: 
T_4304: (in wLoc0A_101 : word16)
  Class: Eq_4288
  DataType: 
  OrigDataType: 
T_4305: (in 0x0000 : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_4306: (in bx_105 == 0x0000 : bool)
  Class: Eq_4306
  DataType: 
  OrigDataType: 
T_4307: (in 0x001E : word16)
  Class: Eq_4288
  DataType: 
  OrigDataType: 
T_4308: (in bx_81 >=u 0x001E : bool)
  Class: Eq_4308
  DataType: 
  OrigDataType: 
T_4309: (in ax_136 : word16)
  Class: Eq_4303
  DataType: 
  OrigDataType: 
T_4310: (in 0x0000 : word16)
  Class: Eq_4310
  DataType: 
  OrigDataType: 
T_4311: (in bx_105 + 0x0000 : word16)
  Class: Eq_4311
  DataType: 
  OrigDataType: 
T_4312: (in Mem0[ds:bx_105 + 0x0000:word16] : word16)
  Class: Eq_4312
  DataType: 
  OrigDataType: 
T_4313: (in Mem0[ds:bx_105 + 0x0000:word16] + bx_105 : word16)
  Class: Eq_4303
  DataType: 
  OrigDataType: 
T_4314: (in 0x0002 : word16)
  Class: Eq_4314
  DataType: 
  OrigDataType: 
T_4315: (in ax_72 - 0x0002 : word16)
  Class: Eq_4303
  DataType: 
  OrigDataType: 
T_4316: (in ax_72 - 0x0002 != ax_136 : bool)
  Class: Eq_4316
  DataType: 
  OrigDataType: 
T_4317: (in 0x0000 : word16)
  Class: Eq_4317
  DataType: 
  OrigDataType: 
T_4318: (in bx_105 + 0x0000 : word16)
  Class: Eq_4318
  DataType: 
  OrigDataType: 
T_4319: (in Mem0[ds:bx_105 + 0x0000:word16] : word16)
  Class: Eq_4319
  DataType: 
  OrigDataType: 
T_4320: (in Mem0[ds:bx_105 + 0x0000:word16] + bx_81 : word16)
  Class: Eq_4320
  DataType: 
  OrigDataType: 
T_4321: (in 0x0000 : word16)
  Class: Eq_4321
  DataType: 
  OrigDataType: 
T_4322: (in bx_105 + 0x0000 : word16)
  Class: Eq_4322
  DataType: 
  OrigDataType: 
T_4323: (in Mem145[ds:bx_105 + 0x0000:word16] : word16)
  Class: Eq_4320
  DataType: 
  OrigDataType: 
T_4324: (in 0xFFFF : word16)
  Class: Eq_4324
  DataType: 
  OrigDataType: 
T_4325: (in ax_72 - 0x0002 : word16)
  Class: Eq_4325
  DataType: 
  OrigDataType: 
T_4326: (in ax_72 - 0x0002 + bx_81 : word16)
  Class: Eq_4326
  DataType: 
  OrigDataType: 
T_4327: (in Mem148[ds:ax_72 - 0x0002 + bx_81:word16] : word16)
  Class: Eq_4324
  DataType: 
  OrigDataType: 
T_4328: (in (byte) wLoc0A_101 : byte)
  Class: Eq_4328
  DataType: 
  OrigDataType: 
T_4329: (in 0x01 : byte)
  Class: Eq_4329
  DataType: 
  OrigDataType: 
T_4330: (in (byte) wLoc0A_101 | 0x01 : byte)
  Class: Eq_4330
  DataType: 
  OrigDataType: 
T_4331: (in DPB(wLoc0A_101, (byte) wLoc0A_101 | 0x01, 0, 8) : word16)
  Class: Eq_4331
  DataType: 
  OrigDataType: 
T_4332: (in 0x0000 : word16)
  Class: Eq_4332
  DataType: 
  OrigDataType: 
T_4333: (in si_104 + 0x0000 : word16)
  Class: Eq_4333
  DataType: 
  OrigDataType: 
T_4334: (in Mem111[ds:si_104 + 0x0000:word16] : word16)
  Class: Eq_4331
  DataType: 
  OrigDataType: 
T_4335: (in 0xFFFF : word16)
  Class: Eq_4335
  DataType: 
  OrigDataType: 
T_4336: (in 0x000A : word16)
  Class: Eq_4336
  DataType: 
  OrigDataType: 
T_4337: (in bx_105 + 0x000A : word16)
  Class: Eq_4337
  DataType: 
  OrigDataType: 
T_4338: (in Mem112[ds:bx_105 + 0x000A:word16] : word16)
  Class: Eq_4335
  DataType: 
  OrigDataType: 
T_4339: (in 0x000C : word16)
  Class: Eq_4339
  DataType: 
  OrigDataType: 
T_4340: (in bx_105 + 0x000C : word16)
  Class: Eq_4340
  DataType: 
  OrigDataType: 
T_4341: (in Mem112[ds:bx_105 + 0x000C:word16] : word16)
  Class: Eq_4341
  DataType: 
  OrigDataType: 
T_4342: (in 0x0001 : word16)
  Class: Eq_4342
  DataType: 
  OrigDataType: 
T_4343: (in Mem112[ds:bx_105 + 0x000C:word16] + 0x0001 : word16)
  Class: Eq_4343
  DataType: 
  OrigDataType: 
T_4344: (in 0x000C : word16)
  Class: Eq_4344
  DataType: 
  OrigDataType: 
T_4345: (in bx_105 + 0x000C : word16)
  Class: Eq_4345
  DataType: 
  OrigDataType: 
T_4346: (in Mem115[ds:bx_105 + 0x000C:word16] : word16)
  Class: Eq_4343
  DataType: 
  OrigDataType: 
T_4347: (in fn0800_13F7 : ptr32)
  Class: Eq_2701
  DataType: 
  OrigDataType: 
T_4348: (in 0x0002 : word16)
  Class: Eq_4348
  DataType: 
  OrigDataType: 
T_4349: (in si_104 + 0x0002 : word16)
  Class: Eq_2703
  DataType: 
  OrigDataType: 
T_4350: (in fn0800_13F7(si_104 + 0x0002, ds) : void)
  Class: Eq_4350
  DataType: 
  OrigDataType: 
T_4351: (in 0x0001 : word16)
  Class: Eq_4249
  DataType: 
  OrigDataType: 
T_4352: (in bx_81 - 0x0002 : word16)
  Class: Eq_4352
  DataType: 
  OrigDataType: 
T_4353: (in 0x0000 : word16)
  Class: Eq_4353
  DataType: 
  OrigDataType: 
T_4354: (in ax_72 + 0x0000 : word16)
  Class: Eq_4354
  DataType: 
  OrigDataType: 
T_4355: (in Mem126[ds:ax_72 + 0x0000:word16] : word16)
  Class: Eq_4352
  DataType: 
  OrigDataType: 
T_4356: (in ax_129 : word16)
  Class: Eq_4303
  DataType: 
  OrigDataType: 
T_4357: (in fn0800_15FB : ptr32)
  Class: Eq_4357
  DataType: 
  OrigDataType: 
T_4358: (in signature of fn0800_15FB : void)
  Class: Eq_4357
  DataType: 
  OrigDataType: 
T_4359: (in fn0800_15FB(ax_72, ds) : word16)
  Class: Eq_4303
  DataType: 
  OrigDataType: 
T_4360: (in 0x0000 : word16)
  Class: Eq_4360
  DataType: 
  OrigDataType: 
T_4361: (in ax_129 + 0x0000 : word16)
  Class: Eq_4361
  DataType: 
  OrigDataType: 
T_4362: (in Mem126[ds:ax_129 + 0x0000:word16] : word16)
  Class: Eq_4288
  DataType: 
  OrigDataType: 
T_4363: (in bx_105 >u ax_72 : bool)
  Class: Eq_4363
  DataType: 
  OrigDataType: 
T_4364: (in 0x0004 : word16)
  Class: Eq_4364
  DataType: 
  OrigDataType: 
T_4365: (in bx_105 + 0x0004 : word16)
  Class: Eq_4365
  DataType: 
  OrigDataType: 
T_4366: (in Mem0[ds:bx_105 + 0x0004:word16] : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_4367: (in 0x0004 : word16)
  Class: Eq_4367
  DataType: 
  OrigDataType: 
T_4368: (in bx_105 + 0x0004 : word16)
  Class: Eq_4368
  DataType: 
  OrigDataType: 
T_4369: (in Mem0[ds:bx_105 + 0x0004:word16] : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_4370: (in ax_72 <u Mem0[ds:bx_105 + 0x0004:word16] : bool)
  Class: Eq_4370
  DataType: 
  OrigDataType: 
T_4371: (in dx_12 : word16)
  Class: Eq_4371
  DataType: 
  OrigDataType: 
T_4372: (in 0x0000 : word16)
  Class: Eq_4372
  DataType: 
  OrigDataType: 
T_4373: (in ax + 0x0000 : word16)
  Class: Eq_4373
  DataType: 
  OrigDataType: 
T_4374: (in Mem0[ds:ax + 0x0000:word16] : word16)
  Class: Eq_4371
  DataType: 
  OrigDataType: 
T_4375: (in dx_16 : word16)
  Class: Eq_4375
  DataType: 
  OrigDataType: 
T_4376: (in 0x0003 : word16)
  Class: Eq_4376
  DataType: 
  OrigDataType: 
T_4377: (in dx_12 + 0x0003 : word16)
  Class: Eq_4377
  DataType: 
  OrigDataType: 
T_4378: (in dx_12 + 0x0003 : word16)
  Class: Eq_4378
  DataType: 
  OrigDataType: 
T_4379: (in (byte) (dx_12 + 0x0003) : byte)
  Class: Eq_4379
  DataType: 
  OrigDataType: 
T_4380: (in 0xFE : byte)
  Class: Eq_4380
  DataType: 
  OrigDataType: 
T_4381: (in (byte) (dx_12 + 0x0003) & 0xFE : byte)
  Class: Eq_4381
  DataType: 
  OrigDataType: 
T_4382: (in DPB(dx_12 + 0x0003, (byte) (dx_12 + 0x0003) & 0xFE, 0, 8) : word16)
  Class: Eq_4375
  DataType: 
  OrigDataType: 
T_4383: (in 0x0000 : word16)
  Class: Eq_4375
  DataType: 
  OrigDataType: 
T_4384: (in dx_16 == 0x0000 : bool)
  Class: Eq_4384
  DataType: 
  OrigDataType: 
T_4385: (in 0x0000 : word16)
  Class: Eq_4385
  DataType: 
  OrigDataType: 
T_4386: (in dx_41 : word16)
  Class: Eq_4386
  DataType: 
  OrigDataType: 
T_4387: (in fn0800_1665 : ptr32)
  Class: Eq_4387
  DataType: 
  OrigDataType: 
T_4388: (in signature of fn0800_1665 : void)
  Class: Eq_4387
  DataType: 
  OrigDataType: 
T_4389: (in fn0800_1665(ds) : word16)
  Class: Eq_4389
  DataType: 
  OrigDataType: 
T_4390: (in dx_16 - fn0800_1665(ds) : word16)
  Class: Eq_4386
  DataType: 
  OrigDataType: 
T_4391: (in 0x0000 : word16)
  Class: Eq_4391
  DataType: 
  OrigDataType: 
T_4392: (in ax + 0x0000 : word16)
  Class: Eq_4392
  DataType: 
  OrigDataType: 
T_4393: (in Mem42[ds:ax + 0x0000:word16] : word16)
  Class: Eq_4386
  DataType: 
  OrigDataType: 
T_4394: (in dx_43 : word16)
  Class: Eq_4394
  DataType: 
  OrigDataType: 
T_4395: (in 0x001E : word16)
  Class: Eq_4395
  DataType: 
  OrigDataType: 
T_4396: (in dx_41 + 0x001E : word16)
  Class: Eq_4394
  DataType: 
  OrigDataType: 
T_4397: (in dx_41 + 0x001E : word16)
  Class: Eq_4397
  DataType: 
  OrigDataType: 
T_4398: (in 0x0000 : word16)
  Class: Eq_4398
  DataType: 
  OrigDataType: 
T_4399: (in ax + 0x0000 : word16)
  Class: Eq_4399
  DataType: 
  OrigDataType: 
T_4400: (in Mem42[ds:ax + 0x0000:word16] : word16)
  Class: Eq_4397
  DataType: 
  OrigDataType: 
T_4401: (in dx_41 + 0x001E <u Mem42[ds:ax + 0x0000:word16] : bool)
  Class: Eq_4401
  DataType: 
  OrigDataType: 
T_4402: (in dx_41 + 0x001E : word16)
  Class: Eq_4402
  DataType: 
  OrigDataType: 
T_4403: (in 0x0386 : word16)
  Class: Eq_4403
  DataType: 
  OrigDataType: 
T_4404: (in Mem42[ds:0x0386:word16] : word16)
  Class: Eq_4402
  DataType: 
  OrigDataType: 
T_4405: (in dx_41 + 0x001E >=u Mem42[ds:0x0386:word16] : bool)
  Class: Eq_4405
  DataType: 
  OrigDataType: 
T_4406: (in 0x0000 : word16)
  Class: Eq_4406
  DataType: 
  OrigDataType: 
T_4407: (in ax + 0x0000 : word16)
  Class: Eq_4407
  DataType: 
  OrigDataType: 
T_4408: (in Mem51[ds:ax + 0x0000:word16] : word16)
  Class: Eq_4394
  DataType: 
  OrigDataType: 
T_4409: (in 0x0000 : word16)
  Class: Eq_4394
  DataType: 
  OrigDataType: 
T_4410: (in dx_43 == 0x0000 : bool)
  Class: Eq_4410
  DataType: 
  OrigDataType: 
T_4411: (in dx_60 : word16)
  Class: Eq_4411
  DataType: 
  OrigDataType: 
T_4412: (in 0x0386 : word16)
  Class: Eq_4412
  DataType: 
  OrigDataType: 
T_4413: (in Mem42[ds:0x0386:word16] : word16)
  Class: Eq_4411
  DataType: 
  OrigDataType: 
T_4414: (in (byte) dx_60 : byte)
  Class: Eq_4414
  DataType: 
  OrigDataType: 
T_4415: (in 0xFE : byte)
  Class: Eq_4415
  DataType: 
  OrigDataType: 
T_4416: (in (byte) dx_60 & 0xFE : byte)
  Class: Eq_4416
  DataType: 
  OrigDataType: 
T_4417: (in DPB(dx_60, (byte) dx_60 & 0xFE, 0, 8) : word16)
  Class: Eq_4394
  DataType: 
  OrigDataType: 
T_4418: (in 0x0001 : word16)
  Class: Eq_4418
  DataType: 
  OrigDataType: 
T_4419: (in *bpOut : word16)
  Class: Eq_1446
  DataType: 
  OrigDataType: 
T_4420: (in *diOut : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4421: (in *esOut : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4422: (in *siOut : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4423: (in *cxOut : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4424: (in dx : word16)
  Class: Eq_4424
  DataType: 
  OrigDataType: 
T_4425: (in *dxOut : word16)
  Class: Eq_4424
  DataType: 
  OrigDataType: 
T_4426: (in bx : word16)
  Class: Eq_4426
  DataType: 
  OrigDataType: 
T_4427: (in *bxOut : word16)
  Class: Eq_4426
  DataType: 
  OrigDataType: 
T_4428: (in fp : ptr16)
  Class: Eq_2219
  DataType: 
  OrigDataType: 
T_4429: (in ax >=u fp : bool)
  Class: Eq_4429
  DataType: 
  OrigDataType: 
T_4430: (in dx_40 : word16)
  Class: Eq_4430
  DataType: 
  OrigDataType: 
T_4431: (in cs : selector)
  Class: Eq_752
  DataType: 
  OrigDataType: 
T_4432: (in *dxOut : selector)
  Class: Eq_752
  DataType: 
  OrigDataType: 
T_4433: (in dl_41 : byte)
  Class: Eq_2285
  DataType: 
  OrigDataType: 
T_4434: (in (byte) cs : byte)
  Class: Eq_2285
  DataType: 
  OrigDataType: 
T_4435: (in dh_42 : byte)
  Class: Eq_4435
  DataType: 
  OrigDataType: 
T_4436: (in SLICE(cs, byte, 8) : byte)
  Class: Eq_4435
  DataType: 
  OrigDataType: 
T_4437: (in bx_49 : word16)
  Class: Eq_4437
  DataType: 
  OrigDataType: 
T_4438: (in 0x0001 : word16)
  Class: Eq_4438
  DataType: 
  OrigDataType: 
T_4439: (in *bxOut : word16)
  Class: Eq_4438
  DataType: 
  OrigDataType: 
T_4440: (in ax_50 : word16)
  Class: Eq_4440
  DataType: 
  OrigDataType: 
T_4441: (in CZ_51 : byte)
  Class: Eq_4441
  DataType: 
  OrigDataType: 
T_4442: (in fn0800_0A5A : ptr32)
  Class: Eq_784
  DataType: 
  OrigDataType: 
T_4443: (in 0x17C5 : word16)
  Class: Eq_786
  DataType: 
  OrigDataType: 
T_4444: (in 0x0001 : word16)
  Class: Eq_177
  DataType: 
  OrigDataType: 
T_4445: (in out ax_50 : ptr16)
  Class: Eq_790
  DataType: 
  OrigDataType: 
T_4446: (in fn0800_0A5A(0x17C5, cs, 0x0001, ds, out ax_50) : byte)
  Class: Eq_4441
  DataType: 
  OrigDataType: 
T_4447: (in ax_134 : word16)
  Class: Eq_4447
  DataType: 
  OrigDataType: 
T_4448: (in ax - fp : word16)
  Class: Eq_4448
  DataType: 
  OrigDataType: 
T_4449: (in -(ax - fp) : word16)
  Class: Eq_4447
  DataType: 
  OrigDataType: 
T_4450: (in 0x022C : word16)
  Class: Eq_4450
  DataType: 
  OrigDataType: 
T_4451: (in Mem0[ds:0x022C:word16] : word16)
  Class: Eq_4447
  DataType: 
  OrigDataType: 
T_4452: (in ax_134 >u Mem0[ds:0x022C:word16] : bool)
  Class: Eq_4452
  DataType: 
  OrigDataType: 
T_4453: (in ss : selector)
  Class: Eq_4447
  DataType: 
  OrigDataType: 
T_4454: (in 0x038A : word16)
  Class: Eq_4454
  DataType: 
  OrigDataType: 
T_4455: (in Mem0[ds:0x038A:word16] : word16)
  Class: Eq_4447
  DataType: 
  OrigDataType: 
T_4456: (in ss == Mem0[ds:0x038A:word16] : bool)
  Class: Eq_4456
  DataType: 
  OrigDataType: 
T_4457: (in __arpl : ptr32)
  Class: Eq_4457
  DataType: 
  OrigDataType: 
T_4458: (in 0x0020 : word16)
  Class: Eq_4458
  DataType: 
  OrigDataType: 
T_4459: (in bp + 0x0020 : word16)
  Class: Eq_4459
  DataType: 
  OrigDataType: 
T_4460: (in bp + 0x0020 + di : word16)
  Class: Eq_4460
  DataType: 
  OrigDataType: 
T_4461: (in Mem0[ss:bp + 0x0020 + di:word16] : word16)
  Class: Eq_4461
  DataType: 
  OrigDataType: 
T_4462: (in 0x0001 : word16)
  Class: Eq_4462
  DataType: 
  OrigDataType: 
T_4463: (in 0x0020 : word16)
  Class: Eq_4463
  DataType: 
  OrigDataType: 
T_4464: (in bp + 0x0020 : word16)
  Class: Eq_4464
  DataType: 
  OrigDataType: 
T_4465: (in bp + 0x0020 + di : word16)
  Class: Eq_4465
  DataType: 
  OrigDataType: 
T_4466: (in Mem0[ss:bp + 0x0020 + di:word16] : word16)
  Class: Eq_4466
  DataType: 
  OrigDataType: 
T_4467: (in &Mem0[ss:bp + 0x0020 + di:word16] : ptr16)
  Class: Eq_4467
  DataType: 
  OrigDataType: 
T_4468: (in __arpl(Mem0[ss:bp + 0x0020 + di:word16], 0x0001, &Mem0[ss:bp + 0x0020 + di:word16]) : bool)
  Class: Eq_4468
  DataType: 
  OrigDataType: 
T_4469: (in 0x0001 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4470: (in di <=u 0x0001 : bool)
  Class: Eq_4470
  DataType: 
  OrigDataType: 
T_4471: (in __hlt : ptr32)
  Class: Eq_4471
  DataType: 
  OrigDataType: 
T_4472: (in __hlt() : void)
  Class: Eq_4472
  DataType: 
  OrigDataType: 
T_4473: (in 0x0001 : word16)
  Class: Eq_4473
  DataType: 
  OrigDataType: 
T_4474: (in si + 0x0001 : word16)
  Class: Eq_4474
  DataType: 
  OrigDataType: 
T_4475: (in Mem0[ds:si + 0x0001:byte] : byte)
  Class: Eq_4475
  DataType: 
  OrigDataType: 
T_4476: (in Mem0[ds:si + 0x0001:byte] + dh_42 : word16)
  Class: Eq_4476
  DataType: 
  OrigDataType: 
T_4477: (in Mem0[ds:si + 0x0001:byte] + dh_42 + CZ_51 : word16)
  Class: Eq_4477
  DataType: 
  OrigDataType: 
T_4478: (in 0x0001 : word16)
  Class: Eq_4478
  DataType: 
  OrigDataType: 
T_4479: (in si + 0x0001 : word16)
  Class: Eq_4479
  DataType: 
  OrigDataType: 
T_4480: (in Mem110[ds:si + 0x0001:byte] : byte)
  Class: Eq_4477
  DataType: 
  OrigDataType: 
T_4481: (in __in : ptr32)
  Class: Eq_4481
  DataType: 
  OrigDataType: 
T_4482: (in __in(cs) : byte)
  Class: Eq_4482
  DataType: 
  OrigDataType: 
T_4483: (in 0x0001 : word16)
  Class: Eq_4483
  DataType: 
  OrigDataType: 
T_4484: (in di - 0x0001 : word16)
  Class: Eq_4484
  DataType: 
  OrigDataType: 
T_4485: (in Mem69[es:di - 0x0001:byte] : byte)
  Class: Eq_4482
  DataType: 
  OrigDataType: 
T_4486: (in __outw : ptr32)
  Class: Eq_4486
  DataType: 
  OrigDataType: 
T_4487: (in __outw(cs, ax_50) : void)
  Class: Eq_4487
  DataType: 
  OrigDataType: 
T_4488: (in si_73 : word16)
  Class: Eq_4488
  DataType: 
  OrigDataType: 
T_4489: (in 0x0002 : word16)
  Class: Eq_4489
  DataType: 
  OrigDataType: 
T_4490: (in si + 0x0002 : word16)
  Class: Eq_4490
  DataType: 
  OrigDataType: 
T_4491: (in *siOut : word16)
  Class: Eq_4490
  DataType: 
  OrigDataType: 
T_4492: (in 0x0001 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4493: (in di >u 0x0001 : bool)
  Class: Eq_4493
  DataType: 
  OrigDataType: 
T_4494: (in cx_91 : word16)
  Class: Eq_4494
  DataType: 
  OrigDataType: 
T_4495: (in di_92 : word16)
  Class: Eq_4495
  DataType: 
  OrigDataType: 
T_4496: (in es_93 : selector)
  Class: Eq_4496
  DataType: 
  OrigDataType: 
T_4497: (in fn0800_17E5 : ptr32)
  Class: Eq_4497
  DataType: 
  OrigDataType: 
T_4498: (in signature of fn0800_17E5 : void)
  Class: Eq_4497
  DataType: 
  OrigDataType: 
T_4499: (in cx : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4500: (in di : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4501: (in al : byte)
  Class: Eq_4501
  DataType: 
  OrigDataType: 
T_4502: (in dl : byte)
  Class: Eq_2285
  DataType: 
  OrigDataType: 
T_4503: (in es : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4504: (in psegArg00 : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4505: (in wArg02 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4506: (in wArg04 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4507: (in cxOut : ptr16)
  Class: Eq_4507
  DataType: 
  OrigDataType: 
T_4508: (in diOut : ptr16)
  Class: Eq_4508
  DataType: 
  OrigDataType: 
T_4509: (in esOut : ptr16)
  Class: Eq_4509
  DataType: 
  OrigDataType: 
T_4510: (in 0xFFFF : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4511: (in 0x000A : word16)
  Class: Eq_4511
  DataType: 
  OrigDataType: 
T_4512: (in ax_50 | 0x000A : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4513: (in 0x00 : byte)
  Class: Eq_4501
  DataType: 
  OrigDataType: 
T_4514: (in out cx_91 : ptr16)
  Class: Eq_4507
  DataType: 
  OrigDataType: 
T_4515: (in out di_92 : ptr16)
  Class: Eq_4508
  DataType: 
  OrigDataType: 
T_4516: (in out es_93 : ptr16)
  Class: Eq_4509
  DataType: 
  OrigDataType: 
T_4517: (in fn0800_17E5(0xFFFF, ax_50 | 0x000A, 0x00, dl_41, ds, es, di, cx, out cx_91, out di_92, out es_93) : word16)
  Class: Eq_4517
  DataType: 
  OrigDataType: 
T_4518: (in cx_99 : word16)
  Class: Eq_4518
  DataType: 
  OrigDataType: 
T_4519: (in di_100 : word16)
  Class: Eq_4519
  DataType: 
  OrigDataType: 
T_4520: (in es_101 : selector)
  Class: Eq_4520
  DataType: 
  OrigDataType: 
T_4521: (in fn0800_17E5 : ptr32)
  Class: Eq_4497
  DataType: 
  OrigDataType: 
T_4522: (in 0xC5 : byte)
  Class: Eq_4501
  DataType: 
  OrigDataType: 
T_4523: (in 0x0001 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4524: (in wArg00 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4525: (in wArg02 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4526: (in out cx_99 : ptr16)
  Class: Eq_4507
  DataType: 
  OrigDataType: 
T_4527: (in out di_100 : ptr16)
  Class: Eq_4508
  DataType: 
  OrigDataType: 
T_4528: (in out es_101 : ptr16)
  Class: Eq_4509
  DataType: 
  OrigDataType: 
T_4529: (in fn0800_17E5(cx, di, 0xC5, dl_41, es, 0x0001, wArg00, wArg02, out cx_99, out di_100, out es_101) : word16)
  Class: Eq_4529
  DataType: 
  OrigDataType: 
T_4530: (in cx_123 : word16)
  Class: Eq_4530
  DataType: 
  OrigDataType: 
T_4531: (in dx_124 : word16)
  Class: Eq_4531
  DataType: 
  OrigDataType: 
T_4532: (in bx_125 : word16)
  Class: Eq_4532
  DataType: 
  OrigDataType: 
T_4533: (in bp_126 : word16)
  Class: Eq_4533
  DataType: 
  OrigDataType: 
T_4534: (in si_127 : word16)
  Class: Eq_4534
  DataType: 
  OrigDataType: 
T_4535: (in di_128 : word16)
  Class: Eq_4535
  DataType: 
  OrigDataType: 
T_4536: (in fn0800_1828 : ptr32)
  Class: Eq_4536
  DataType: 
  OrigDataType: 
T_4537: (in signature of fn0800_1828 : void)
  Class: Eq_4536
  DataType: 
  OrigDataType: 
T_4538: (in bx : word16)
  Class: Eq_4538
  DataType: 
  OrigDataType: 
T_4539: (in bp : word16)
  Class: Eq_1446
  DataType: 
  OrigDataType: 
T_4540: (in si : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4541: (in di : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4542: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4543: (in cxOut : ptr16)
  Class: Eq_4543
  DataType: 
  OrigDataType: 
T_4544: (in dxOut : ptr16)
  Class: Eq_4544
  DataType: 
  OrigDataType: 
T_4545: (in bxOut : ptr16)
  Class: Eq_4545
  DataType: 
  OrigDataType: 
T_4546: (in bpOut : ptr16)
  Class: Eq_4546
  DataType: 
  OrigDataType: 
T_4547: (in siOut : ptr16)
  Class: Eq_4547
  DataType: 
  OrigDataType: 
T_4548: (in diOut : ptr16)
  Class: Eq_4548
  DataType: 
  OrigDataType: 
T_4549: (in 0x0001 : word16)
  Class: Eq_4538
  DataType: 
  OrigDataType: 
T_4550: (in out cx_123 : ptr16)
  Class: Eq_4543
  DataType: 
  OrigDataType: 
T_4551: (in out dx_124 : ptr16)
  Class: Eq_4544
  DataType: 
  OrigDataType: 
T_4552: (in out bx_125 : ptr16)
  Class: Eq_4545
  DataType: 
  OrigDataType: 
T_4553: (in out bp_126 : ptr16)
  Class: Eq_4546
  DataType: 
  OrigDataType: 
T_4554: (in out si_127 : ptr16)
  Class: Eq_4547
  DataType: 
  OrigDataType: 
T_4555: (in out di_128 : ptr16)
  Class: Eq_4548
  DataType: 
  OrigDataType: 
T_4556: (in fn0800_1828(0x0001, bp, si, di, ds, out cx_123, out dx_124, out bx_125, out bp_126, out si_127, out di_128) : word16)
  Class: Eq_4556
  DataType: 
  OrigDataType: 
T_4557: (in cx_112 : word16)
  Class: Eq_4557
  DataType: 
  OrigDataType: 
T_4558: (in dx_113 : word16)
  Class: Eq_4558
  DataType: 
  OrigDataType: 
T_4559: (in bx_114 : word16)
  Class: Eq_4559
  DataType: 
  OrigDataType: 
T_4560: (in bp_115 : word16)
  Class: Eq_4560
  DataType: 
  OrigDataType: 
T_4561: (in si_116 : word16)
  Class: Eq_4561
  DataType: 
  OrigDataType: 
T_4562: (in di_117 : word16)
  Class: Eq_4562
  DataType: 
  OrigDataType: 
T_4563: (in fn0800_1828 : ptr32)
  Class: Eq_4536
  DataType: 
  OrigDataType: 
T_4564: (in 0x0001 : word16)
  Class: Eq_4538
  DataType: 
  OrigDataType: 
T_4565: (in di - 0x0001 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4566: (in out cx_112 : ptr16)
  Class: Eq_4543
  DataType: 
  OrigDataType: 
T_4567: (in out dx_113 : ptr16)
  Class: Eq_4544
  DataType: 
  OrigDataType: 
T_4568: (in out bx_114 : ptr16)
  Class: Eq_4545
  DataType: 
  OrigDataType: 
T_4569: (in out bp_115 : ptr16)
  Class: Eq_4546
  DataType: 
  OrigDataType: 
T_4570: (in out si_116 : ptr16)
  Class: Eq_4547
  DataType: 
  OrigDataType: 
T_4571: (in out di_117 : ptr16)
  Class: Eq_4548
  DataType: 
  OrigDataType: 
T_4572: (in fn0800_1828(0x0001, bp, si, di - 0x0001, ds, out cx_112, out dx_113, out bx_114, out bp_115, out si_116, out di_117) : word16)
  Class: Eq_4572
  DataType: 
  OrigDataType: 
T_4573: (in cx_22 : word16)
  Class: Eq_4573
  DataType: 
  OrigDataType: 
T_4574: (in di_23 : word16)
  Class: Eq_4574
  DataType: 
  OrigDataType: 
T_4575: (in es_24 : selector)
  Class: Eq_4575
  DataType: 
  OrigDataType: 
T_4576: (in fn0800_17E5 : ptr32)
  Class: Eq_4497
  DataType: 
  OrigDataType: 
T_4577: (in 0xFFFF : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4578: (in 0x00 : byte)
  Class: Eq_4501
  DataType: 
  OrigDataType: 
T_4579: (in out cx_22 : ptr16)
  Class: Eq_4507
  DataType: 
  OrigDataType: 
T_4580: (in out di_23 : ptr16)
  Class: Eq_4508
  DataType: 
  OrigDataType: 
T_4581: (in out es_24 : ptr16)
  Class: Eq_4509
  DataType: 
  OrigDataType: 
T_4582: (in fn0800_17E5(0xFFFF, ax, 0x00, dl, ds, es, di, cx, out cx_22, out di_23, out es_24) : word16)
  Class: Eq_4582
  DataType: 
  OrigDataType: 
T_4583: (in ax : word16)
  Class: Eq_4583
  DataType: 
  OrigDataType: 
T_4584: (in 0x0000 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4585: (in cx == 0x0000 : bool)
  Class: Eq_4585
  DataType: 
  OrigDataType: 
T_4586: (in 0x0001 : word16)
  Class: Eq_4586
  DataType: 
  OrigDataType: 
T_4587: (in di + 0x0001 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4588: (in 0x0001 : word16)
  Class: Eq_4588
  DataType: 
  OrigDataType: 
T_4589: (in cx - 0x0001 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4590: (in 0x0000 : word16)
  Class: Eq_4590
  DataType: 
  OrigDataType: 
T_4591: (in di + 0x0000 : word16)
  Class: Eq_4591
  DataType: 
  OrigDataType: 
T_4592: (in Mem0[es:di + 0x0000:byte] : byte)
  Class: Eq_4501
  DataType: 
  OrigDataType: 
T_4593: (in al != Mem0[es:di + 0x0000:byte] : bool)
  Class: Eq_4593
  DataType: 
  OrigDataType: 
T_4594: (in di_11 : word16)
  Class: Eq_4594
  DataType: 
  OrigDataType: 
T_4595: (in 0x0001 : word16)
  Class: Eq_4595
  DataType: 
  OrigDataType: 
T_4596: (in di - 0x0001 : word16)
  Class: Eq_4594
  DataType: 
  OrigDataType: 
T_4597: (in cx_10 : word16)
  Class: Eq_4597
  DataType: 
  OrigDataType: 
T_4598: (in ~cx : word16)
  Class: Eq_4597
  DataType: 
  OrigDataType: 
T_4599: (in Z_14 : byte)
  Class: Eq_4599
  DataType: 
  OrigDataType: 
T_4600: (in cond(di_11) : byte)
  Class: Eq_4599
  DataType: 
  OrigDataType: 
T_4601: (in 0x0000 : word16)
  Class: Eq_4597
  DataType: 
  OrigDataType: 
T_4602: (in cx_10 == 0x0000 : bool)
  Class: Eq_4602
  DataType: 
  OrigDataType: 
T_4603: (in 0x0000 : word16)
  Class: Eq_4603
  DataType: 
  OrigDataType: 
T_4604: (in di_11 + 0x0000 : word16)
  Class: Eq_4604
  DataType: 
  OrigDataType: 
T_4605: (in Mem0[es:di_11 + 0x0000:byte] : byte)
  Class: Eq_4605
  DataType: 
  OrigDataType: 
T_4606: (in dl - Mem0[es:di_11 + 0x0000:byte] : byte)
  Class: Eq_4606
  DataType: 
  OrigDataType: 
T_4607: (in cond(dl - Mem0[es:di_11 + 0x0000:byte]) : byte)
  Class: Eq_4599
  DataType: 
  OrigDataType: 
T_4608: (in 0x0001 : word16)
  Class: Eq_4608
  DataType: 
  OrigDataType: 
T_4609: (in di_11 - 0x0001 : word16)
  Class: Eq_4594
  DataType: 
  OrigDataType: 
T_4610: (in 0x0001 : word16)
  Class: Eq_4610
  DataType: 
  OrigDataType: 
T_4611: (in cx_10 - 0x0001 : word16)
  Class: Eq_4597
  DataType: 
  OrigDataType: 
T_4612: (in 0x0000 : word16)
  Class: Eq_4612
  DataType: 
  OrigDataType: 
T_4613: (in di_11 + 0x0000 : word16)
  Class: Eq_4613
  DataType: 
  OrigDataType: 
T_4614: (in Mem0[es:di_11 + 0x0000:byte] : byte)
  Class: Eq_2285
  DataType: 
  OrigDataType: 
T_4615: (in dl != Mem0[es:di_11 + 0x0000:byte] : bool)
  Class: Eq_4615
  DataType: 
  OrigDataType: 
T_4616: (in 0x0001 : word16)
  Class: Eq_4616
  DataType: 
  OrigDataType: 
T_4617: (in di_11 + 0x0001 : word16)
  Class: Eq_4597
  DataType: 
  OrigDataType: 
T_4618: (in es_36 : selector)
  Class: Eq_4618
  DataType: 
  OrigDataType: 
T_4619: (in psegArg00 : selector)
  Class: Eq_4619
  DataType: 
  OrigDataType: 
T_4620: (in *esOut : selector)
  Class: Eq_4619
  DataType: 
  OrigDataType: 
T_4621: (in di_40 : word16)
  Class: Eq_4621
  DataType: 
  OrigDataType: 
T_4622: (in wArg02 : word16)
  Class: Eq_4622
  DataType: 
  OrigDataType: 
T_4623: (in *diOut : word16)
  Class: Eq_4622
  DataType: 
  OrigDataType: 
T_4624: (in cx_43 : word16)
  Class: Eq_4624
  DataType: 
  OrigDataType: 
T_4625: (in wArg04 : word16)
  Class: Eq_4625
  DataType: 
  OrigDataType: 
T_4626: (in *cxOut : word16)
  Class: Eq_4625
  DataType: 
  OrigDataType: 
T_4627: (in ax : word16)
  Class: Eq_4627
  DataType: 
  OrigDataType: 
T_4628: (in cx_27 : word16)
  Class: Eq_4628
  DataType: 
  OrigDataType: 
T_4629: (in dx_28 : word16)
  Class: Eq_4629
  DataType: 
  OrigDataType: 
T_4630: (in di_29 : word16)
  Class: Eq_4630
  DataType: 
  OrigDataType: 
T_4631: (in fn0800_181A : ptr32)
  Class: Eq_4631
  DataType: 
  OrigDataType: 
T_4632: (in signature of fn0800_181A : void)
  Class: Eq_4631
  DataType: 
  OrigDataType: 
T_4633: (in bx : word16)
  Class: Eq_4538
  DataType: 
  OrigDataType: 
T_4634: (in di : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4635: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4636: (in wArg02 : word16)
  Class: Eq_4636
  DataType: 
  OrigDataType: 
T_4637: (in cxOut : ptr16)
  Class: Eq_4637
  DataType: 
  OrigDataType: 
T_4638: (in dxOut : ptr16)
  Class: Eq_4638
  DataType: 
  OrigDataType: 
T_4639: (in diOut : ptr16)
  Class: Eq_4639
  DataType: 
  OrigDataType: 
T_4640: (in fp : ptr16)
  Class: Eq_4640
  DataType: 
  OrigDataType: 
T_4641: (in 0x0008 : word16)
  Class: Eq_4641
  DataType: 
  OrigDataType: 
T_4642: (in fp + 0x0008 : word16)
  Class: Eq_4538
  DataType: 
  OrigDataType: 
T_4643: (in wArg02 : word16)
  Class: Eq_4636
  DataType: 
  OrigDataType: 
T_4644: (in out cx_27 : ptr16)
  Class: Eq_4637
  DataType: 
  OrigDataType: 
T_4645: (in out dx_28 : ptr16)
  Class: Eq_4638
  DataType: 
  OrigDataType: 
T_4646: (in out di_29 : ptr16)
  Class: Eq_4639
  DataType: 
  OrigDataType: 
T_4647: (in fn0800_181A(fp + 0x0008, di, ds, wArg02, out cx_27, out dx_28, out di_29) : word16)
  Class: Eq_4647
  DataType: 
  OrigDataType: 
T_4648: (in ax : word16)
  Class: Eq_4648
  DataType: 
  OrigDataType: 
T_4649: (in cx_26 : word16)
  Class: Eq_4649
  DataType: 
  OrigDataType: 
T_4650: (in dx_27 : word16)
  Class: Eq_4650
  DataType: 
  OrigDataType: 
T_4651: (in bx_28 : word16)
  Class: Eq_4651
  DataType: 
  OrigDataType: 
T_4652: (in bp_29 : word16)
  Class: Eq_4652
  DataType: 
  OrigDataType: 
T_4653: (in si_30 : word16)
  Class: Eq_4653
  DataType: 
  OrigDataType: 
T_4654: (in di_31 : word16)
  Class: Eq_4654
  DataType: 
  OrigDataType: 
T_4655: (in fn0800_1828 : ptr32)
  Class: Eq_4536
  DataType: 
  OrigDataType: 
T_4656: (in fp : ptr16)
  Class: Eq_4656
  DataType: 
  OrigDataType: 
T_4657: (in 0x000C : word16)
  Class: Eq_4657
  DataType: 
  OrigDataType: 
T_4658: (in fp - 0x000C : word16)
  Class: Eq_1446
  DataType: 
  OrigDataType: 
T_4659: (in wArg02 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4660: (in out cx_26 : ptr16)
  Class: Eq_4543
  DataType: 
  OrigDataType: 
T_4661: (in out dx_27 : ptr16)
  Class: Eq_4544
  DataType: 
  OrigDataType: 
T_4662: (in out bx_28 : ptr16)
  Class: Eq_4545
  DataType: 
  OrigDataType: 
T_4663: (in out bp_29 : ptr16)
  Class: Eq_4546
  DataType: 
  OrigDataType: 
T_4664: (in out si_30 : ptr16)
  Class: Eq_4547
  DataType: 
  OrigDataType: 
T_4665: (in out di_31 : ptr16)
  Class: Eq_4548
  DataType: 
  OrigDataType: 
T_4666: (in fn0800_1828(bx, fp - 0x000C, wArg02, di, ds, out cx_26, out dx_27, out bx_28, out bp_29, out si_30, out di_31) : word16)
  Class: Eq_4666
  DataType: 
  OrigDataType: 
T_4667: (in ax : word16)
  Class: Eq_4667
  DataType: 
  OrigDataType: 
T_4668: (in bx + si : word16)
  Class: Eq_4668
  DataType: 
  OrigDataType: 
T_4669: (in Mem0[ds:bx + si:byte] : byte)
  Class: Eq_4669
  DataType: 
  OrigDataType: 
T_4670: (in __inb : ptr32)
  Class: Eq_4670
  DataType: 
  OrigDataType: 
T_4671: (in 0x3D : byte)
  Class: Eq_4671
  DataType: 
  OrigDataType: 
T_4672: (in __inb(0x3D) : byte)
  Class: Eq_4672
  DataType: 
  OrigDataType: 
T_4673: (in Mem0[ds:bx + si:byte] & __inb(0x3D) : byte)
  Class: Eq_4673
  DataType: 
  OrigDataType: 
T_4674: (in bx + si : word16)
  Class: Eq_4674
  DataType: 
  OrigDataType: 
T_4675: (in Mem14[ds:bx + si:byte] : byte)
  Class: Eq_4673
  DataType: 
  OrigDataType: 
T_4676: (in bx + si : word16)
  Class: Eq_4676
  DataType: 
  OrigDataType: 
T_4677: (in Mem14[ds:bx + si:byte] : byte)
  Class: Eq_4677
  DataType: 
  OrigDataType: 
T_4678: (in 0x00 : byte)
  Class: Eq_4677
  DataType: 
  OrigDataType: 
T_4679: (in Mem14[ds:bx + si:byte] != 0x00 : bool)
  Class: Eq_4679
  DataType: 
  OrigDataType: 
T_4680: (in 0x0001 : word16)
  Class: Eq_4680
  DataType: 
  OrigDataType: 
T_4681: (in si + 0x0001 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4682: (in al_23 : byte)
  Class: Eq_4682
  DataType: 
  OrigDataType: 
T_4683: (in __inb : ptr32)
  Class: Eq_4683
  DataType: 
  OrigDataType: 
T_4684: (in 0x24 : byte)
  Class: Eq_4684
  DataType: 
  OrigDataType: 
T_4685: (in __inb(0x24) : byte)
  Class: Eq_4682
  DataType: 
  OrigDataType: 
T_4686: (in 0x03BA : word16)
  Class: Eq_4686
  DataType: 
  OrigDataType: 
T_4687: (in bx - 0x03BA : word16)
  Class: Eq_4687
  DataType: 
  OrigDataType: 
T_4688: (in bx - 0x03BA + di : word16)
  Class: Eq_4688
  DataType: 
  OrigDataType: 
T_4689: (in Mem14[ds:bx - 0x03BA + di:word16] : word16)
  Class: Eq_4689
  DataType: 
  OrigDataType: 
T_4690: (in 0xFF8A : word16)
  Class: Eq_4690
  DataType: 
  OrigDataType: 
T_4691: (in Mem14[ds:bx - 0x03BA + di:word16] | 0xFF8A : word16)
  Class: Eq_4691
  DataType: 
  OrigDataType: 
T_4692: (in 0x03BA : word16)
  Class: Eq_4692
  DataType: 
  OrigDataType: 
T_4693: (in bx - 0x03BA : word16)
  Class: Eq_4693
  DataType: 
  OrigDataType: 
T_4694: (in bx - 0x03BA + di : word16)
  Class: Eq_4694
  DataType: 
  OrigDataType: 
T_4695: (in Mem26[ds:bx - 0x03BA + di:word16] : word16)
  Class: Eq_4691
  DataType: 
  OrigDataType: 
T_4696: (in si_28 : word16)
  Class: Eq_4696
  DataType: 
  OrigDataType: 
T_4697: (in 0x0001 : word16)
  Class: Eq_4697
  DataType: 
  OrigDataType: 
T_4698: (in si + 0x0001 : word16)
  Class: Eq_4696
  DataType: 
  OrigDataType: 
T_4699: (in di_119 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_4700: (in 0xFFFF : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_4701: (in ax_36 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_4702: (in dx_38 : word16)
  Class: Eq_4702
  DataType: 
  OrigDataType: 
T_4703: (in 0x0000 : word16)
  Class: Eq_4703
  DataType: 
  OrigDataType: 
T_4704: (in msdos_open_file : ptr32)
  Class: Eq_1038
  DataType: 
  OrigDataType: 
T_4705: (in SEQ(ds, si_28) : word32)
  Class: Eq_1040
  DataType: 
  OrigDataType: 
T_4706: (in ss : selector)
  Class: Eq_4706
  DataType: 
  OrigDataType: 
T_4707: (in 0x0012 : word16)
  Class: Eq_4707
  DataType: 
  OrigDataType: 
T_4708: (in bp + 0x0012 : word16)
  Class: Eq_4708
  DataType: 
  OrigDataType: 
T_4709: (in Mem26[ss:bp + 0x0012:byte] : byte)
  Class: Eq_4709
  DataType: 
  OrigDataType: 
T_4710: (in al_23 | Mem26[ss:bp + 0x0012:byte] : byte)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_4711: (in out ax_36 : ptr16)
  Class: Eq_1042
  DataType: 
  OrigDataType: 
T_4712: (in msdos_open_file(SEQ(ds, si_28), al_23 | Mem26[ss:bp + 0x0012:byte], out ax_36) : byte)
  Class: Eq_4712
  DataType: 
  OrigDataType: 
T_4713: (in 0x0000 - msdos_open_file(SEQ(ds, si_28), al_23 | Mem26[ss:bp + 0x0012:byte], out ax_36) : word16)
  Class: Eq_4702
  DataType: 
  OrigDataType: 
T_4714: (in dx_107 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_4715: (in dh_109 : byte)
  Class: Eq_2006
  DataType: 
  OrigDataType: 
T_4716: (in SLICE(ax_36, byte, 8) : byte)
  Class: Eq_2006
  DataType: 
  OrigDataType: 
T_4717: (in 0x0000 : word16)
  Class: Eq_4702
  DataType: 
  OrigDataType: 
T_4718: (in dx_38 > 0x0000 : bool)
  Class: Eq_4718
  DataType: 
  OrigDataType: 
T_4719: (in 0x0000 : word16)
  Class: Eq_4702
  DataType: 
  OrigDataType: 
T_4720: (in dx_38 != 0x0000 : bool)
  Class: Eq_4720
  DataType: 
  OrigDataType: 
T_4721: (in al_235 : byte)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_4722: (in ax_188 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_4723: (in 0x0010 : word16)
  Class: Eq_4723
  DataType: 
  OrigDataType: 
T_4724: (in bp + 0x0010 : word16)
  Class: Eq_4724
  DataType: 
  OrigDataType: 
T_4725: (in Mem26[ss:bp + 0x0010:byte] : byte)
  Class: Eq_4725
  DataType: 
  OrigDataType: 
T_4726: (in 0x03 : byte)
  Class: Eq_4726
  DataType: 
  OrigDataType: 
T_4727: (in Mem26[ss:bp + 0x0010:byte] & 0x03 : byte)
  Class: Eq_4727
  DataType: 
  OrigDataType: 
T_4728: (in 0x00 : byte)
  Class: Eq_4727
  DataType: 
  OrigDataType: 
T_4729: (in (Mem26[ss:bp + 0x0010:byte] & 0x03) == 0x00 : bool)
  Class: Eq_4729
  DataType: 
  OrigDataType: 
T_4730: (in 0xFFFF : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_4731: (in di_119 == 0xFFFF : bool)
  Class: Eq_4731
  DataType: 
  OrigDataType: 
T_4732: (in fn0800_21FD : ptr32)
  Class: Eq_4732
  DataType: 
  OrigDataType: 
T_4733: (in signature of fn0800_21FD : void)
  Class: Eq_4732
  DataType: 
  OrigDataType: 
T_4734: (in ax : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_4735: (in fn0800_21FD(di_119) : word16)
  Class: Eq_4735
  DataType: 
  OrigDataType: 
T_4736: (in 0x0000 : word16)
  Class: Eq_4735
  DataType: 
  OrigDataType: 
T_4737: (in fn0800_21FD(di_119) != 0x0000 : bool)
  Class: Eq_4737
  DataType: 
  OrigDataType: 
T_4738: (in 0x0011 : word16)
  Class: Eq_4738
  DataType: 
  OrigDataType: 
T_4739: (in bp + 0x0011 : word16)
  Class: Eq_4739
  DataType: 
  OrigDataType: 
T_4740: (in Mem26[ss:bp + 0x0011:byte] : byte)
  Class: Eq_4740
  DataType: 
  OrigDataType: 
T_4741: (in 0x04 : byte)
  Class: Eq_4741
  DataType: 
  OrigDataType: 
T_4742: (in Mem26[ss:bp + 0x0011:byte] & 0x04 : byte)
  Class: Eq_4742
  DataType: 
  OrigDataType: 
T_4743: (in 0x00 : byte)
  Class: Eq_4742
  DataType: 
  OrigDataType: 
T_4744: (in (Mem26[ss:bp + 0x0011:byte] & 0x04) == 0x00 : bool)
  Class: Eq_4744
  DataType: 
  OrigDataType: 
T_4745: (in 0x0010 : word16)
  Class: Eq_4745
  DataType: 
  OrigDataType: 
T_4746: (in bp + 0x0010 : word16)
  Class: Eq_4746
  DataType: 
  OrigDataType: 
T_4747: (in Mem26[ss:bp + 0x0010:byte] : byte)
  Class: Eq_4747
  DataType: 
  OrigDataType: 
T_4748: (in 0x20 : byte)
  Class: Eq_4748
  DataType: 
  OrigDataType: 
T_4749: (in Mem26[ss:bp + 0x0010:byte] & 0x20 : byte)
  Class: Eq_4749
  DataType: 
  OrigDataType: 
T_4750: (in 0x00 : byte)
  Class: Eq_4749
  DataType: 
  OrigDataType: 
T_4751: (in (Mem26[ss:bp + 0x0010:byte] & 0x20) == 0x00 : bool)
  Class: Eq_4751
  DataType: 
  OrigDataType: 
T_4752: (in bx_350 : word16)
  Class: Eq_4752
  DataType: 
  OrigDataType: 
T_4753: (in fn0800_0780 : ptr32)
  Class: Eq_593
  DataType: 
  OrigDataType: 
T_4754: (in 0x0007 : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_4755: (in 0x0000 : word16)
  Class: Eq_4755
  DataType: 
  OrigDataType: 
T_4756: (in msdos_close_file : ptr32)
  Class: Eq_4756
  DataType: 
  OrigDataType: 
T_4757: (in signature of msdos_close_file : void)
  Class: Eq_4756
  DataType: 
  OrigDataType: 
T_4758: (in bx : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_4759: (in msdos_close_file(di_119) : byte)
  Class: Eq_4759
  DataType: 
  OrigDataType: 
T_4760: (in 0x0000 - msdos_close_file(di_119) : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_4761: (in out bx_350 : ptr16)
  Class: Eq_598
  DataType: 
  OrigDataType: 
T_4762: (in fn0800_0780(0x0007, 0x0000 - msdos_close_file(di_119), ds, out bx_350) : word16)
  Class: Eq_4762
  DataType: 
  OrigDataType: 
T_4763: (in 0xFFFF : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_4764: (in bp_62 : word16)
  Class: Eq_4764
  DataType: 
  OrigDataType: 
T_4765: (in 0x0000 : word16)
  Class: Eq_4765
  DataType: 
  OrigDataType: 
T_4766: (in bp + 0x0000 : word16)
  Class: Eq_4766
  DataType: 
  OrigDataType: 
T_4767: (in Mem26[ss:bp + 0x0000:word16] : word16)
  Class: Eq_4767
  DataType: 
  OrigDataType: 
T_4768: (in *bpOut : word16)
  Class: Eq_4767
  DataType: 
  OrigDataType: 
T_4769: (in di_64 : word16)
  Class: Eq_4769
  DataType: 
  OrigDataType: 
T_4770: (in 0x0002 : word16)
  Class: Eq_4770
  DataType: 
  OrigDataType: 
T_4771: (in bp + 0x0002 : word16)
  Class: Eq_4771
  DataType: 
  OrigDataType: 
T_4772: (in Mem26[ss:bp + 0x0002:word16] : word16)
  Class: Eq_4772
  DataType: 
  OrigDataType: 
T_4773: (in *diOut : word16)
  Class: Eq_4772
  DataType: 
  OrigDataType: 
T_4774: (in si_66 : word16)
  Class: Eq_4774
  DataType: 
  OrigDataType: 
T_4775: (in 0x0004 : word16)
  Class: Eq_4775
  DataType: 
  OrigDataType: 
T_4776: (in bp + 0x0004 : word16)
  Class: Eq_4776
  DataType: 
  OrigDataType: 
T_4777: (in Mem26[ss:bp + 0x0004:word16] : word16)
  Class: Eq_4777
  DataType: 
  OrigDataType: 
T_4778: (in *siOut : word16)
  Class: Eq_4777
  DataType: 
  OrigDataType: 
T_4779: (in dx_68 : word16)
  Class: Eq_4779
  DataType: 
  OrigDataType: 
T_4780: (in 0x0006 : word16)
  Class: Eq_4780
  DataType: 
  OrigDataType: 
T_4781: (in bp + 0x0006 : word16)
  Class: Eq_4781
  DataType: 
  OrigDataType: 
T_4782: (in Mem26[ss:bp + 0x0006:word16] : word16)
  Class: Eq_4782
  DataType: 
  OrigDataType: 
T_4783: (in *dxOut : word16)
  Class: Eq_4782
  DataType: 
  OrigDataType: 
T_4784: (in cx_73 : word16)
  Class: Eq_4784
  DataType: 
  OrigDataType: 
T_4785: (in 0x0008 : word16)
  Class: Eq_4785
  DataType: 
  OrigDataType: 
T_4786: (in bp + 0x0008 : word16)
  Class: Eq_4786
  DataType: 
  OrigDataType: 
T_4787: (in Mem26[ss:bp + 0x0008:word16] : word16)
  Class: Eq_4787
  DataType: 
  OrigDataType: 
T_4788: (in *cxOut : word16)
  Class: Eq_4787
  DataType: 
  OrigDataType: 
T_4789: (in bx_76 : word16)
  Class: Eq_4789
  DataType: 
  OrigDataType: 
T_4790: (in 0x000A : word16)
  Class: Eq_4790
  DataType: 
  OrigDataType: 
T_4791: (in bp + 0x000A : word16)
  Class: Eq_4791
  DataType: 
  OrigDataType: 
T_4792: (in Mem26[ss:bp + 0x000A:word16] : word16)
  Class: Eq_4792
  DataType: 
  OrigDataType: 
T_4793: (in *bxOut : word16)
  Class: Eq_4792
  DataType: 
  OrigDataType: 
T_4794: (in 0x0010 : word16)
  Class: Eq_4794
  DataType: 
  OrigDataType: 
T_4795: (in bp + 0x0010 : word16)
  Class: Eq_4795
  DataType: 
  OrigDataType: 
T_4796: (in Mem26[ss:bp + 0x0010:byte] : byte)
  Class: Eq_4796
  DataType: 
  OrigDataType: 
T_4797: (in 0x40 : byte)
  Class: Eq_4797
  DataType: 
  OrigDataType: 
T_4798: (in Mem26[ss:bp + 0x0010:byte] & 0x40 : byte)
  Class: Eq_4798
  DataType: 
  OrigDataType: 
T_4799: (in 0x00 : byte)
  Class: Eq_4798
  DataType: 
  OrigDataType: 
T_4800: (in (Mem26[ss:bp + 0x0010:byte] & 0x40) == 0x00 : bool)
  Class: Eq_4800
  DataType: 
  OrigDataType: 
T_4801: (in ax_320 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_4802: (in SLICE(ax_320, byte, 8) : byte)
  Class: Eq_2006
  DataType: 
  OrigDataType: 
T_4803: (in 0x0000 : word16)
  Class: Eq_4803
  DataType: 
  OrigDataType: 
T_4804: (in msdos_write_file : ptr32)
  Class: Eq_1065
  DataType: 
  OrigDataType: 
T_4805: (in 0x0000 : word16)
  Class: Eq_1068
  DataType: 
  OrigDataType: 
T_4806: (in 0x0002 : word16)
  Class: Eq_4806
  DataType: 
  OrigDataType: 
T_4807: (in bp - 0x0002 : word16)
  Class: Eq_4807
  DataType: 
  OrigDataType: 
T_4808: (in SEQ(ds, bp - 0x0002) : word32)
  Class: Eq_1053
  DataType: 
  OrigDataType: 
T_4809: (in out ax_320 : ptr16)
  Class: Eq_1070
  DataType: 
  OrigDataType: 
T_4810: (in msdos_write_file(di_119, 0x0000, SEQ(ds, bp - 0x0002), out ax_320) : byte)
  Class: Eq_4810
  DataType: 
  OrigDataType: 
T_4811: (in 0x0000 - msdos_write_file(di_119, 0x0000, SEQ(ds, bp - 0x0002), out ax_320) : word16)
  Class: Eq_4811
  DataType: 
  OrigDataType: 
T_4812: (in 0x0000 : word16)
  Class: Eq_4811
  DataType: 
  OrigDataType: 
T_4813: (in 0x0000 - msdos_write_file(di_119, 0x0000, SEQ(ds, bp - 0x0002), out ax_320) >= 0x0000 : bool)
  Class: Eq_4813
  DataType: 
  OrigDataType: 
T_4814: (in 0x0000 : word16)
  Class: Eq_4814
  DataType: 
  OrigDataType: 
T_4815: (in msdos_close_file : ptr32)
  Class: Eq_4756
  DataType: 
  OrigDataType: 
T_4816: (in msdos_close_file(di_119) : byte)
  Class: Eq_4816
  DataType: 
  OrigDataType: 
T_4817: (in 0x0000 - msdos_close_file(di_119) : word16)
  Class: Eq_4817
  DataType: 
  OrigDataType: 
T_4818: (in SLICE(0x0000 - msdos_close_file(di_119), byte, 8) : byte)
  Class: Eq_2006
  DataType: 
  OrigDataType: 
T_4819: (in (byte) ax_320 : byte)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_4820: (in dx_97 : word16)
  Class: Eq_4820
  DataType: 
  OrigDataType: 
T_4821: (in fn0800_0CE0 : ptr32)
  Class: Eq_2003
  DataType: 
  OrigDataType: 
T_4822: (in out dx_97 : ptr16)
  Class: Eq_2008
  DataType: 
  OrigDataType: 
T_4823: (in fn0800_0CE0(al_235, dh_109, ds, out dx_97) : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_4824: (in 0xFFFF : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_4825: (in di_119 != 0xFFFF : bool)
  Class: Eq_4825
  DataType: 
  OrigDataType: 
T_4826: (in 0x0010 : word16)
  Class: Eq_4826
  DataType: 
  OrigDataType: 
T_4827: (in bp + 0x0010 : word16)
  Class: Eq_4827
  DataType: 
  OrigDataType: 
T_4828: (in Mem26[ss:bp + 0x0010:byte] : byte)
  Class: Eq_4828
  DataType: 
  OrigDataType: 
T_4829: (in 0x20 : byte)
  Class: Eq_4829
  DataType: 
  OrigDataType: 
T_4830: (in Mem26[ss:bp + 0x0010:byte] & 0x20 : byte)
  Class: Eq_4830
  DataType: 
  OrigDataType: 
T_4831: (in 0x00 : byte)
  Class: Eq_4830
  DataType: 
  OrigDataType: 
T_4832: (in (Mem26[ss:bp + 0x0010:byte] & 0x20) == 0x00 : bool)
  Class: Eq_4832
  DataType: 
  OrigDataType: 
T_4833: (in 0x0002 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_4834: (in dx_107 == 0x0002 : bool)
  Class: Eq_4834
  DataType: 
  OrigDataType: 
T_4835: (in (byte) dx_107 : byte)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_4836: (in ax_241 : word16)
  Class: Eq_4836
  DataType: 
  OrigDataType: 
T_4837: (in 0x0014 : word16)
  Class: Eq_4837
  DataType: 
  OrigDataType: 
T_4838: (in bp + 0x0014 : word16)
  Class: Eq_4838
  DataType: 
  OrigDataType: 
T_4839: (in bp + 0x0014 + dx_107 : word16)
  Class: Eq_4839
  DataType: 
  OrigDataType: 
T_4840: (in 0x0002 : word16)
  Class: Eq_4840
  DataType: 
  OrigDataType: 
T_4841: (in bp + 0x0014 + dx_107 - 0x0002 : word16)
  Class: Eq_4841
  DataType: 
  OrigDataType: 
T_4842: (in Mem26[ds:bp + 0x0014 + dx_107 - 0x0002:word16] : word16)
  Class: Eq_4836
  DataType: 
  OrigDataType: 
T_4843: (in 0x0000 : word16)
  Class: Eq_4836
  DataType: 
  OrigDataType: 
T_4844: (in ax_241 != 0x0000 : bool)
  Class: Eq_4844
  DataType: 
  OrigDataType: 
T_4845: (in 0x0180 : word16)
  Class: Eq_4836
  DataType: 
  OrigDataType: 
T_4846: (in 0x039A : word16)
  Class: Eq_4846
  DataType: 
  OrigDataType: 
T_4847: (in Mem26[ds:0x039A:word16] : word16)
  Class: Eq_4847
  DataType: 
  OrigDataType: 
T_4848: (in ~Mem26[ds:0x039A:word16] : word16)
  Class: Eq_4848
  DataType: 
  OrigDataType: 
T_4849: (in ax_241 & ~Mem26[ds:0x039A:word16] : word16)
  Class: Eq_4849
  DataType: 
  OrigDataType: 
T_4850: (in (byte) (ax_241 & ~Mem26[ds:0x039A:word16]) : byte)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_4851: (in cx_252 : word16)
  Class: Eq_4851
  DataType: 
  OrigDataType: 
T_4852: (in 0x0000 : word16)
  Class: Eq_4851
  DataType: 
  OrigDataType: 
T_4853: (in 0x80 : byte)
  Class: Eq_4853
  DataType: 
  OrigDataType: 
T_4854: (in al_235 & 0x80 : byte)
  Class: Eq_4854
  DataType: 
  OrigDataType: 
T_4855: (in 0x00 : byte)
  Class: Eq_4854
  DataType: 
  OrigDataType: 
T_4856: (in (al_235 & 0x80) != 0x00 : bool)
  Class: Eq_4856
  DataType: 
  OrigDataType: 
T_4857: (in 0x0001 : word16)
  Class: Eq_4851
  DataType: 
  OrigDataType: 
T_4858: (in ax_262 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_4859: (in dx_264 : word16)
  Class: Eq_4859
  DataType: 
  OrigDataType: 
T_4860: (in 0x0000 : word16)
  Class: Eq_4860
  DataType: 
  OrigDataType: 
T_4861: (in msdos_create_truncate_file : ptr32)
  Class: Eq_4861
  DataType: 
  OrigDataType: 
T_4862: (in signature of msdos_create_truncate_file : void)
  Class: Eq_4861
  DataType: 
  OrigDataType: 
T_4863: (in cx : word16)
  Class: Eq_4863
  DataType: 
  OrigDataType: 
T_4864: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4865: (in dx : word16)
  Class: Eq_4696
  DataType: 
  OrigDataType: 
T_4866: (in axOut : ptr16)
  Class: Eq_4866
  DataType: 
  OrigDataType: 
T_4867: (in 0x00 : byte)
  Class: Eq_4867
  DataType: 
  OrigDataType: 
T_4868: (in DPB(cx_252, 0x00, 8, 8) : word16)
  Class: Eq_4863
  DataType: 
  OrigDataType: 
T_4869: (in out ax_262 : ptr16)
  Class: Eq_4866
  DataType: 
  OrigDataType: 
T_4870: (in msdos_create_truncate_file(DPB(cx_252, 0x00, 8, 8), ds, si_28, out ax_262) : byte)
  Class: Eq_4870
  DataType: 
  OrigDataType: 
T_4871: (in 0x0000 - msdos_create_truncate_file(DPB(cx_252, 0x00, 8, 8), ds, si_28, out ax_262) : word16)
  Class: Eq_4859
  DataType: 
  OrigDataType: 
T_4872: (in SLICE(dx_264, byte, 8) : byte)
  Class: Eq_2006
  DataType: 
  OrigDataType: 
T_4873: (in 0x0000 : word16)
  Class: Eq_4859
  DataType: 
  OrigDataType: 
T_4874: (in dx_264 < 0x0000 : bool)
  Class: Eq_4874
  DataType: 
  OrigDataType: 
T_4875: (in 0x0012 : word16)
  Class: Eq_4875
  DataType: 
  OrigDataType: 
T_4876: (in bp + 0x0012 : word16)
  Class: Eq_4876
  DataType: 
  OrigDataType: 
T_4877: (in Mem26[ss:bp + 0x0012:word16] : word16)
  Class: Eq_4877
  DataType: 
  OrigDataType: 
T_4878: (in 0x0000 : word16)
  Class: Eq_4877
  DataType: 
  OrigDataType: 
T_4879: (in Mem26[ss:bp + 0x0012:word16] == 0x0000 : bool)
  Class: Eq_4879
  DataType: 
  OrigDataType: 
T_4880: (in dx_277 : word16)
  Class: Eq_4880
  DataType: 
  OrigDataType: 
T_4881: (in 0x0000 : word16)
  Class: Eq_4881
  DataType: 
  OrigDataType: 
T_4882: (in msdos_close_file : ptr32)
  Class: Eq_4756
  DataType: 
  OrigDataType: 
T_4883: (in msdos_close_file(ax_262) : byte)
  Class: Eq_4883
  DataType: 
  OrigDataType: 
T_4884: (in 0x0000 - msdos_close_file(ax_262) : word16)
  Class: Eq_4880
  DataType: 
  OrigDataType: 
T_4885: (in SLICE(dx_277, byte, 8) : byte)
  Class: Eq_2006
  DataType: 
  OrigDataType: 
T_4886: (in 0x0000 : word16)
  Class: Eq_4880
  DataType: 
  OrigDataType: 
T_4887: (in dx_277 < 0x0000 : bool)
  Class: Eq_4887
  DataType: 
  OrigDataType: 
T_4888: (in 0x0004 : word16)
  Class: Eq_4888
  DataType: 
  OrigDataType: 
T_4889: (in bp - 0x0004 : word16)
  Class: Eq_4889
  DataType: 
  OrigDataType: 
T_4890: (in Mem26[ss:bp - 0x0004:byte] : byte)
  Class: Eq_4890
  DataType: 
  OrigDataType: 
T_4891: (in 0x0012 : word16)
  Class: Eq_4891
  DataType: 
  OrigDataType: 
T_4892: (in bp + 0x0012 : word16)
  Class: Eq_4892
  DataType: 
  OrigDataType: 
T_4893: (in Mem26[ss:bp + 0x0012:byte] : byte)
  Class: Eq_4893
  DataType: 
  OrigDataType: 
T_4894: (in Mem26[ss:bp - 0x0004:byte] | Mem26[ss:bp + 0x0012:byte] : byte)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_4895: (in ax_289 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_4896: (in dx_291 : word16)
  Class: Eq_4896
  DataType: 
  OrigDataType: 
T_4897: (in 0x0000 : word16)
  Class: Eq_4897
  DataType: 
  OrigDataType: 
T_4898: (in msdos_open_file : ptr32)
  Class: Eq_1038
  DataType: 
  OrigDataType: 
T_4899: (in SEQ(ds, si_28) : word32)
  Class: Eq_1040
  DataType: 
  OrigDataType: 
T_4900: (in out ax_289 : ptr16)
  Class: Eq_1042
  DataType: 
  OrigDataType: 
T_4901: (in msdos_open_file(SEQ(ds, si_28), al_235, out ax_289) : byte)
  Class: Eq_4901
  DataType: 
  OrigDataType: 
T_4902: (in 0x0000 - msdos_open_file(SEQ(ds, si_28), al_235, out ax_289) : word16)
  Class: Eq_4896
  DataType: 
  OrigDataType: 
T_4903: (in SLICE(dx_291, byte, 8) : byte)
  Class: Eq_2006
  DataType: 
  OrigDataType: 
T_4904: (in 0x0000 : word16)
  Class: Eq_4896
  DataType: 
  OrigDataType: 
T_4905: (in dx_291 < 0x0000 : bool)
  Class: Eq_4905
  DataType: 
  OrigDataType: 
T_4906: (in ax_124 : word16)
  Class: Eq_4906
  DataType: 
  OrigDataType: 
T_4907: (in fn0800_2219 : ptr32)
  Class: Eq_4907
  DataType: 
  OrigDataType: 
T_4908: (in signature of fn0800_2219 : void)
  Class: Eq_4907
  DataType: 
  OrigDataType: 
T_4909: (in ax : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_4910: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_4911: (in fn0800_2219(di_119, ds) : word16)
  Class: Eq_4906
  DataType: 
  OrigDataType: 
T_4912: (in ax_127 : word16)
  Class: Eq_4912
  DataType: 
  OrigDataType: 
T_4913: (in (byte) ax_124 : byte)
  Class: Eq_4913
  DataType: 
  OrigDataType: 
T_4914: (in 0x3C : byte)
  Class: Eq_4914
  DataType: 
  OrigDataType: 
T_4915: (in (byte) ax_124 & 0x3C : byte)
  Class: Eq_4915
  DataType: 
  OrigDataType: 
T_4916: (in DPB(ax_124, (byte) ax_124 & 0x3C, 0, 8) : word16)
  Class: Eq_4912
  DataType: 
  OrigDataType: 
T_4917: (in dx_130 : word16)
  Class: Eq_4912
  DataType: 
  OrigDataType: 
T_4918: (in dh_132 : byte)
  Class: Eq_4918
  DataType: 
  OrigDataType: 
T_4919: (in SLICE(ax_127, byte, 8) : byte)
  Class: Eq_4918
  DataType: 
  OrigDataType: 
T_4920: (in dl_133 : byte)
  Class: Eq_4920
  DataType: 
  OrigDataType: 
T_4921: (in (byte) ax_127 : byte)
  Class: Eq_4920
  DataType: 
  OrigDataType: 
T_4922: (in fn0800_21FD : ptr32)
  Class: Eq_4732
  DataType: 
  OrigDataType: 
T_4923: (in fn0800_21FD(di_119) : word16)
  Class: Eq_4923
  DataType: 
  OrigDataType: 
T_4924: (in 0x0000 : word16)
  Class: Eq_4923
  DataType: 
  OrigDataType: 
T_4925: (in fn0800_21FD(di_119) == 0x0000 : bool)
  Class: Eq_4925
  DataType: 
  OrigDataType: 
T_4926: (in 0x20 : byte)
  Class: Eq_4926
  DataType: 
  OrigDataType: 
T_4927: (in dh_132 | 0x20 : byte)
  Class: Eq_4918
  DataType: 
  OrigDataType: 
T_4928: (in dh_132 | 0x20 : byte)
  Class: Eq_4928
  DataType: 
  OrigDataType: 
T_4929: (in DPB(ax_127, dh_132 | 0x20, 8, 8) : word16)
  Class: Eq_4912
  DataType: 
  OrigDataType: 
T_4930: (in 0x0004 : word16)
  Class: Eq_4930
  DataType: 
  OrigDataType: 
T_4931: (in bp - 0x0004 : word16)
  Class: Eq_4931
  DataType: 
  OrigDataType: 
T_4932: (in Mem26[ss:bp - 0x0004:byte] : byte)
  Class: Eq_4932
  DataType: 
  OrigDataType: 
T_4933: (in 0x7F : byte)
  Class: Eq_4933
  DataType: 
  OrigDataType: 
T_4934: (in Mem26[ss:bp - 0x0004:byte] & 0x7F : byte)
  Class: Eq_4934
  DataType: 
  OrigDataType: 
T_4935: (in 0x0004 : word16)
  Class: Eq_4935
  DataType: 
  OrigDataType: 
T_4936: (in bp - 0x0004 : word16)
  Class: Eq_4936
  DataType: 
  OrigDataType: 
T_4937: (in Mem144[ss:bp - 0x0004:byte] : byte)
  Class: Eq_4934
  DataType: 
  OrigDataType: 
T_4938: (in 0x0004 : word16)
  Class: Eq_4938
  DataType: 
  OrigDataType: 
T_4939: (in bp - 0x0004 : word16)
  Class: Eq_4939
  DataType: 
  OrigDataType: 
T_4940: (in Mem144[ss:bp - 0x0004:word16] : word16)
  Class: Eq_4940
  DataType: 
  OrigDataType: 
T_4941: (in 0x0002 : word16)
  Class: Eq_4940
  DataType: 
  OrigDataType: 
T_4942: (in Mem144[ss:bp - 0x0004:word16] != 0x0002 : bool)
  Class: Eq_4942
  DataType: 
  OrigDataType: 
T_4943: (in 0x03 : byte)
  Class: Eq_4943
  DataType: 
  OrigDataType: 
T_4944: (in dl_133 | 0x03 : byte)
  Class: Eq_4920
  DataType: 
  OrigDataType: 
T_4945: (in dl_133 | 0x03 : byte)
  Class: Eq_4945
  DataType: 
  OrigDataType: 
T_4946: (in DPB(dx_130, dl_133 | 0x03, 0, 8) : word16)
  Class: Eq_4912
  DataType: 
  OrigDataType: 
T_4947: (in 0x0004 : word16)
  Class: Eq_4947
  DataType: 
  OrigDataType: 
T_4948: (in bp - 0x0004 : word16)
  Class: Eq_4948
  DataType: 
  OrigDataType: 
T_4949: (in Mem144[ss:bp - 0x0004:word16] : word16)
  Class: Eq_4949
  DataType: 
  OrigDataType: 
T_4950: (in 0x0000 : word16)
  Class: Eq_4949
  DataType: 
  OrigDataType: 
T_4951: (in Mem144[ss:bp - 0x0004:word16] != 0x0000 : bool)
  Class: Eq_4951
  DataType: 
  OrigDataType: 
T_4952: (in 0x01 : byte)
  Class: Eq_4952
  DataType: 
  OrigDataType: 
T_4953: (in dl_133 | 0x01 : byte)
  Class: Eq_4920
  DataType: 
  OrigDataType: 
T_4954: (in DPB(dx_130, dl_133, 0, 8) : word16)
  Class: Eq_4912
  DataType: 
  OrigDataType: 
T_4955: (in 0x0004 : word16)
  Class: Eq_4955
  DataType: 
  OrigDataType: 
T_4956: (in bp - 0x0004 : word16)
  Class: Eq_4956
  DataType: 
  OrigDataType: 
T_4957: (in Mem144[ss:bp - 0x0004:word16] : word16)
  Class: Eq_4957
  DataType: 
  OrigDataType: 
T_4958: (in 0x0001 : word16)
  Class: Eq_4957
  DataType: 
  OrigDataType: 
T_4959: (in Mem144[ss:bp - 0x0004:word16] != 0x0001 : bool)
  Class: Eq_4959
  DataType: 
  OrigDataType: 
T_4960: (in 0x02 : byte)
  Class: Eq_4960
  DataType: 
  OrigDataType: 
T_4961: (in dl_133 | 0x02 : byte)
  Class: Eq_4920
  DataType: 
  OrigDataType: 
T_4962: (in DPB(dx_130, dl_133, 0, 8) : word16)
  Class: Eq_4912
  DataType: 
  OrigDataType: 
T_4963: (in 0x0010 : word16)
  Class: Eq_4963
  DataType: 
  OrigDataType: 
T_4964: (in bp + 0x0010 : word16)
  Class: Eq_4964
  DataType: 
  OrigDataType: 
T_4965: (in Mem144[ss:bp + 0x0010:byte] : byte)
  Class: Eq_4965
  DataType: 
  OrigDataType: 
T_4966: (in 0x10 : byte)
  Class: Eq_4966
  DataType: 
  OrigDataType: 
T_4967: (in Mem144[ss:bp + 0x0010:byte] & 0x10 : byte)
  Class: Eq_4967
  DataType: 
  OrigDataType: 
T_4968: (in 0x00 : byte)
  Class: Eq_4967
  DataType: 
  OrigDataType: 
T_4969: (in (Mem144[ss:bp + 0x0010:byte] & 0x10) == 0x00 : bool)
  Class: Eq_4969
  DataType: 
  OrigDataType: 
T_4970: (in 0x80 : byte)
  Class: Eq_4970
  DataType: 
  OrigDataType: 
T_4971: (in dl_133 | 0x80 : byte)
  Class: Eq_4920
  DataType: 
  OrigDataType: 
T_4972: (in DPB(dx_130, dl_133, 0, 8) : word16)
  Class: Eq_4912
  DataType: 
  OrigDataType: 
T_4973: (in ax_175 : word16)
  Class: Eq_4973
  DataType: 
  OrigDataType: 
T_4974: (in (byte) dx_130 : byte)
  Class: Eq_4974
  DataType: 
  OrigDataType: 
T_4975: (in 0x40 : byte)
  Class: Eq_4975
  DataType: 
  OrigDataType: 
T_4976: (in (byte) dx_130 | 0x40 : byte)
  Class: Eq_4976
  DataType: 
  OrigDataType: 
T_4977: (in DPB(dx_130, (byte) dx_130 | 0x40, 0, 8) : word16)
  Class: Eq_4973
  DataType: 
  OrigDataType: 
T_4978: (in 0x0011 : word16)
  Class: Eq_4978
  DataType: 
  OrigDataType: 
T_4979: (in bp + 0x0011 : word16)
  Class: Eq_4979
  DataType: 
  OrigDataType: 
T_4980: (in Mem144[ss:bp + 0x0011:byte] : byte)
  Class: Eq_4980
  DataType: 
  OrigDataType: 
T_4981: (in 0x03 : byte)
  Class: Eq_4981
  DataType: 
  OrigDataType: 
T_4982: (in Mem144[ss:bp + 0x0011:byte] & 0x03 : byte)
  Class: Eq_4982
  DataType: 
  OrigDataType: 
T_4983: (in 0x00 : byte)
  Class: Eq_4982
  DataType: 
  OrigDataType: 
T_4984: (in (Mem144[ss:bp + 0x0011:byte] & 0x03) == 0x00 : bool)
  Class: Eq_4984
  DataType: 
  OrigDataType: 
T_4985: (in 0x0011 : word16)
  Class: Eq_4985
  DataType: 
  OrigDataType: 
T_4986: (in bp + 0x0011 : word16)
  Class: Eq_4986
  DataType: 
  OrigDataType: 
T_4987: (in Mem144[ss:bp + 0x0011:byte] : byte)
  Class: Eq_4987
  DataType: 
  OrigDataType: 
T_4988: (in 0x02 : byte)
  Class: Eq_4988
  DataType: 
  OrigDataType: 
T_4989: (in Mem144[ss:bp + 0x0011:byte] & 0x02 : byte)
  Class: Eq_4989
  DataType: 
  OrigDataType: 
T_4990: (in 0x00 : byte)
  Class: Eq_4989
  DataType: 
  OrigDataType: 
T_4991: (in (Mem144[ss:bp + 0x0011:byte] & 0x02) == 0x00 : bool)
  Class: Eq_4991
  DataType: 
  OrigDataType: 
T_4992: (in SLICE(ax_175, byte, 8) : byte)
  Class: Eq_4918
  DataType: 
  OrigDataType: 
T_4993: (in (byte) ax_175 : byte)
  Class: Eq_4920
  DataType: 
  OrigDataType: 
T_4994: (in fn0800_2260 : ptr32)
  Class: Eq_4994
  DataType: 
  OrigDataType: 
T_4995: (in signature of fn0800_2260 : void)
  Class: Eq_4994
  DataType: 
  OrigDataType: 
T_4996: (in ax : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_4997: (in dl : byte)
  Class: Eq_4920
  DataType: 
  OrigDataType: 
T_4998: (in dh : byte)
  Class: Eq_4918
  DataType: 
  OrigDataType: 
T_4999: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_5000: (in fn0800_2260(di_119, dl_133, dh_132, ds) : void)
  Class: Eq_5000
  DataType: 
  OrigDataType: 
T_5001: (in 0x0367 : word16)
  Class: Eq_5001
  DataType: 
  OrigDataType: 
T_5002: (in Mem144[ds:0x0367:word16] : word16)
  Class: Eq_5002
  DataType: 
  OrigDataType: 
T_5003: (in 0x0200 : word16)
  Class: Eq_5002
  DataType: 
  OrigDataType: 
T_5004: (in Mem144[ds:0x0367:word16] != 0x0200 : bool)
  Class: Eq_5004
  DataType: 
  OrigDataType: 
T_5005: (in ax_62 : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_5006: (in ax_110 : word16)
  Class: Eq_5006
  DataType: 
  OrigDataType: 
T_5007: (in ax_24 : word16)
  Class: Eq_5007
  DataType: 
  OrigDataType: 
T_5008: (in fn0800_2219 : ptr32)
  Class: Eq_4907
  DataType: 
  OrigDataType: 
T_5009: (in fn0800_2219(ax, ds) : word16)
  Class: Eq_5007
  DataType: 
  OrigDataType: 
T_5010: (in wLoc16_181 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5011: (in al_105 : byte)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_5012: (in (byte) ax_24 : byte)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_5013: (in 0x0000 : word16)
  Class: Eq_5007
  DataType: 
  OrigDataType: 
T_5014: (in ax_24 != 0x0000 : bool)
  Class: Eq_5014
  DataType: 
  OrigDataType: 
T_5015: (in 0x01 : byte)
  Class: Eq_5015
  DataType: 
  OrigDataType: 
T_5016: (in al_105 & 0x01 : byte)
  Class: Eq_5016
  DataType: 
  OrigDataType: 
T_5017: (in 0x00 : byte)
  Class: Eq_5016
  DataType: 
  OrigDataType: 
T_5018: (in (al_105 & 0x01) != 0x00 : bool)
  Class: Eq_5018
  DataType: 
  OrigDataType: 
T_5019: (in 0x0004 : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_5020: (in di_130 : word16)
  Class: Eq_5006
  DataType: 
  OrigDataType: 
T_5021: (in dh_103 : byte)
  Class: Eq_2006
  DataType: 
  OrigDataType: 
T_5022: (in 0x40 : byte)
  Class: Eq_5022
  DataType: 
  OrigDataType: 
T_5023: (in al_105 & 0x40 : byte)
  Class: Eq_5023
  DataType: 
  OrigDataType: 
T_5024: (in 0x00 : byte)
  Class: Eq_5023
  DataType: 
  OrigDataType: 
T_5025: (in (al_105 & 0x40) == 0x00 : bool)
  Class: Eq_5025
  DataType: 
  OrigDataType: 
T_5026: (in 0x0006 : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_5027: (in bx_63 : word16)
  Class: Eq_5027
  DataType: 
  OrigDataType: 
T_5028: (in dx_64 : word16)
  Class: Eq_5028
  DataType: 
  OrigDataType: 
T_5029: (in fn0800_0780 : ptr32)
  Class: Eq_593
  DataType: 
  OrigDataType: 
T_5030: (in out bx_63 : ptr16)
  Class: Eq_598
  DataType: 
  OrigDataType: 
T_5031: (in fn0800_0780(ax_62, dx, ds, out bx_63) : word16)
  Class: Eq_5031
  DataType: 
  OrigDataType: 
T_5032: (in *dxOut : word16)
  Class: Eq_5031
  DataType: 
  OrigDataType: 
T_5033: (in 0xFFFF : word16)
  Class: Eq_5006
  DataType: 
  OrigDataType: 
T_5034: (in wLoc0A_174 : word16)
  Class: Eq_2390
  DataType: 
  OrigDataType: 
T_5035: (in 0x0000 : word16)
  Class: Eq_5006
  DataType: 
  OrigDataType: 
T_5036: (in ax_164 : word16)
  Class: Eq_5006
  DataType: 
  OrigDataType: 
T_5037: (in dx_166 : word16)
  Class: Eq_5037
  DataType: 
  OrigDataType: 
T_5038: (in 0x0000 : word16)
  Class: Eq_5038
  DataType: 
  OrigDataType: 
T_5039: (in msdos_read_file : ptr32)
  Class: Eq_5039
  DataType: 
  OrigDataType: 
T_5040: (in signature of msdos_read_file : void)
  Class: Eq_5039
  DataType: 
  OrigDataType: 
T_5041: (in bx : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5042: (in cx : word16)
  Class: Eq_2390
  DataType: 
  OrigDataType: 
T_5043: (in ds_dx : word32)
  Class: Eq_5043
  DataType: 
  OrigDataType: 
T_5044: (in axOut : ptr16)
  Class: Eq_5044
  DataType: 
  OrigDataType: 
T_5045: (in ds_dx : word32)
  Class: Eq_5043
  DataType: 
  OrigDataType: 
T_5046: (in out ax_164 : ptr16)
  Class: Eq_5044
  DataType: 
  OrigDataType: 
T_5047: (in msdos_read_file(ax, bx, ds_dx, out ax_164) : byte)
  Class: Eq_5047
  DataType: 
  OrigDataType: 
T_5048: (in 0x0000 - msdos_read_file(ax, bx, ds_dx, out ax_164) : word16)
  Class: Eq_5037
  DataType: 
  OrigDataType: 
T_5049: (in *dxOut : word16)
  Class: Eq_5037
  DataType: 
  OrigDataType: 
T_5050: (in SLICE(dx_166, byte, 8) : byte)
  Class: Eq_2006
  DataType: 
  OrigDataType: 
T_5051: (in 0x0000 : word16)
  Class: Eq_5037
  DataType: 
  OrigDataType: 
T_5052: (in dx_166 >= 0x0000 : bool)
  Class: Eq_5052
  DataType: 
  OrigDataType: 
T_5053: (in dx_109 : word16)
  Class: Eq_5053
  DataType: 
  OrigDataType: 
T_5054: (in fn0800_0CE0 : ptr32)
  Class: Eq_2003
  DataType: 
  OrigDataType: 
T_5055: (in out dx_109 : ptr16)
  Class: Eq_2008
  DataType: 
  OrigDataType: 
T_5056: (in fn0800_0CE0(al_105, dh_103, ds, out dx_109) : word16)
  Class: Eq_5006
  DataType: 
  OrigDataType: 
T_5057: (in ax_195 : word16)
  Class: Eq_5057
  DataType: 
  OrigDataType: 
T_5058: (in 0x0000 : word16)
  Class: Eq_5057
  DataType: 
  OrigDataType: 
T_5059: (in ax_195 == 0x0000 : bool)
  Class: Eq_5059
  DataType: 
  OrigDataType: 
T_5060: (in bx_208 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5061: (in cx_210 : word16)
  Class: Eq_5061
  DataType: 
  OrigDataType: 
T_5062: (in 0x0000 : word16)
  Class: Eq_5061
  DataType: 
  OrigDataType: 
T_5063: (in si_212 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5064: (in wLoc16_181 + ax_195 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5065: (in dx_213 : word16)
  Class: Eq_5065
  DataType: 
  OrigDataType: 
T_5066: (in 0x0000 : word16)
  Class: Eq_5066
  DataType: 
  OrigDataType: 
T_5067: (in *dxOut : word16)
  Class: Eq_5066
  DataType: 
  OrigDataType: 
T_5068: (in ax_229 : word16)
  Class: Eq_5057
  DataType: 
  OrigDataType: 
T_5069: (in bx_208 <u si_212 : bool)
  Class: Eq_5069
  DataType: 
  OrigDataType: 
T_5070: (in 0x0000 : word16)
  Class: Eq_5070
  DataType: 
  OrigDataType: 
T_5071: (in bx_208 + 0x0000 : word16)
  Class: Eq_5071
  DataType: 
  OrigDataType: 
T_5072: (in Mem0[ds:bx_208 + 0x0000:byte] : byte)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_5073: (in 0x00 : byte)
  Class: Eq_5073
  DataType: 
  OrigDataType: 
T_5074: (in DPB(ax_229, 0x00, 8, 8) : word16)
  Class: Eq_5057
  DataType: 
  OrigDataType: 
T_5075: (in 0x001A : word16)
  Class: Eq_5057
  DataType: 
  OrigDataType: 
T_5076: (in ax_229 != 0x001A : bool)
  Class: Eq_5076
  DataType: 
  OrigDataType: 
T_5077: (in v21_239 : word16)
  Class: Eq_2390
  DataType: 
  OrigDataType: 
T_5078: (in wLoc0A_174 - dx_213 : word16)
  Class: Eq_2390
  DataType: 
  OrigDataType: 
T_5079: (in wLoc16_181 + dx_213 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5080: (in bLoc0B : byte)
  Class: Eq_5080
  DataType: 
  OrigDataType: 
T_5081: (in 0x20 : byte)
  Class: Eq_5081
  DataType: 
  OrigDataType: 
T_5082: (in bLoc0B & 0x20 : byte)
  Class: Eq_5082
  DataType: 
  OrigDataType: 
T_5083: (in 0x00 : byte)
  Class: Eq_5082
  DataType: 
  OrigDataType: 
T_5084: (in (bLoc0B & 0x20) != 0x00 : bool)
  Class: Eq_5084
  DataType: 
  OrigDataType: 
T_5085: (in 0x0000 : word16)
  Class: Eq_2390
  DataType: 
  OrigDataType: 
T_5086: (in v21_239 != 0x0000 : bool)
  Class: Eq_5086
  DataType: 
  OrigDataType: 
T_5087: (in dx_197 : word16)
  Class: Eq_5087
  DataType: 
  OrigDataType: 
T_5088: (in 0x0000 : word16)
  Class: Eq_5088
  DataType: 
  OrigDataType: 
T_5089: (in msdos_read_file : ptr32)
  Class: Eq_5039
  DataType: 
  OrigDataType: 
T_5090: (in SEQ(ds, wLoc16_181) : word32)
  Class: Eq_5043
  DataType: 
  OrigDataType: 
T_5091: (in out ax_195 : ptr16)
  Class: Eq_5044
  DataType: 
  OrigDataType: 
T_5092: (in msdos_read_file(ax, wLoc0A_174, SEQ(ds, wLoc16_181), out ax_195) : byte)
  Class: Eq_5092
  DataType: 
  OrigDataType: 
T_5093: (in 0x0000 - msdos_read_file(ax, wLoc0A_174, SEQ(ds, wLoc16_181), out ax_195) : word16)
  Class: Eq_5087
  DataType: 
  OrigDataType: 
T_5094: (in *dxOut : word16)
  Class: Eq_5087
  DataType: 
  OrigDataType: 
T_5095: (in SLICE(dx_197, byte, 8) : byte)
  Class: Eq_2006
  DataType: 
  OrigDataType: 
T_5096: (in 0x0000 : word16)
  Class: Eq_5087
  DataType: 
  OrigDataType: 
T_5097: (in dx_197 < 0x0000 : bool)
  Class: Eq_5097
  DataType: 
  OrigDataType: 
T_5098: (in 0x000D : word16)
  Class: Eq_5057
  DataType: 
  OrigDataType: 
T_5099: (in ax_229 == 0x000D : bool)
  Class: Eq_5099
  DataType: 
  OrigDataType: 
T_5100: (in bx_258 : word16)
  Class: Eq_5100
  DataType: 
  OrigDataType: 
T_5101: (in cx_210 - ax_195 : word16)
  Class: Eq_5100
  DataType: 
  OrigDataType: 
T_5102: (in cx_bx_264 : ui32)
  Class: Eq_5102
  DataType: 
  OrigDataType: 
T_5103: (in 0x0000 : word16)
  Class: Eq_5103
  DataType: 
  OrigDataType: 
T_5104: (in 0x00 : byte)
  Class: Eq_5104
  DataType: 
  OrigDataType: 
T_5105: (in DPB(ax_229, 0x00, 0, 8) : word16)
  Class: Eq_5105
  DataType: 
  OrigDataType: 
T_5106: (in 0x0000 - DPB(ax_229, 0x00, 0, 8) : word16)
  Class: Eq_5106
  DataType: 
  OrigDataType: 
T_5107: (in 0x0000 : word16)
  Class: Eq_5100
  DataType: 
  OrigDataType: 
T_5108: (in bx_258 <u 0x0000 : bool)
  Class: Eq_5108
  DataType: 
  OrigDataType: 
T_5109: (in 0x0000 - DPB(ax_229, 0x00, 0, 8) - (bx_258 <u 0x0000) : word16)
  Class: Eq_5109
  DataType: 
  OrigDataType: 
T_5110: (in 0x0001 : word16)
  Class: Eq_5110
  DataType: 
  OrigDataType: 
T_5111: (in bx_258 + 0x0001 : word16)
  Class: Eq_5111
  DataType: 
  OrigDataType: 
T_5112: (in SEQ(0x0000 - DPB(ax_229, 0x00, 0, 8) - (bx_258 <u 0x0000), bx_258 + 0x0001) : ui32)
  Class: Eq_5102
  DataType: 
  OrigDataType: 
T_5113: (in dx_274 : word16)
  Class: Eq_5113
  DataType: 
  OrigDataType: 
T_5114: (in fn0800_1ABD : ptr32)
  Class: Eq_2490
  DataType: 
  OrigDataType: 
T_5115: (in 0x00000001 : ui32)
  Class: Eq_5115
  DataType: 
  OrigDataType: 
T_5116: (in cx_bx_264 + 0x00000001 : ui32)
  Class: Eq_5116
  DataType: 
  OrigDataType: 
T_5117: (in SLICE(cx_bx_264 + 0x00000001, word16, 16) : word16)
  Class: Eq_2493
  DataType: 
  OrigDataType: 
T_5118: (in cx_bx_264 + 0x00000001 : ui32)
  Class: Eq_5118
  DataType: 
  OrigDataType: 
T_5119: (in (word16) (cx_bx_264 + 0x00000001) : word16)
  Class: Eq_2494
  DataType: 
  OrigDataType: 
T_5120: (in 0x01 : byte)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_5121: (in out dx_274 : ptr16)
  Class: Eq_2497
  DataType: 
  OrigDataType: 
T_5122: (in fn0800_1ABD(ax, SLICE(cx_bx_264 + 0x00000001, word16, 16), (word16) (cx_bx_264 + 0x00000001), 0x01, ds, out dx_274) : word16)
  Class: Eq_5122
  DataType: 
  OrigDataType: 
T_5123: (in 0x0001 : word16)
  Class: Eq_5123
  DataType: 
  OrigDataType: 
T_5124: (in bx_208 + 0x0001 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5125: (in 0x0001 : word16)
  Class: Eq_5125
  DataType: 
  OrigDataType: 
T_5126: (in cx_210 + 0x0001 : word16)
  Class: Eq_5061
  DataType: 
  OrigDataType: 
T_5127: (in wLoc16_181 + dx_213 : word16)
  Class: Eq_5127
  DataType: 
  OrigDataType: 
T_5128: (in Mem300[ds:wLoc16_181 + dx_213:byte] : byte)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_5129: (in 0x0001 : word16)
  Class: Eq_5129
  DataType: 
  OrigDataType: 
T_5130: (in di_130 + 0x0001 : word16)
  Class: Eq_5006
  DataType: 
  OrigDataType: 
T_5131: (in 0x0001 : word16)
  Class: Eq_5131
  DataType: 
  OrigDataType: 
T_5132: (in dx_213 + 0x0001 : word16)
  Class: Eq_5132
  DataType: 
  OrigDataType: 
T_5133: (in *dxOut : word16)
  Class: Eq_5132
  DataType: 
  OrigDataType: 
T_5134: (in cx : word16)
  Class: Eq_5134
  DataType: 
  OrigDataType: 
T_5135: (in 0x0000 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5136: (in ax < 0x0000 : bool)
  Class: Eq_5136
  DataType: 
  OrigDataType: 
T_5137: (in bx_32 : word16)
  Class: Eq_5137
  DataType: 
  OrigDataType: 
T_5138: (in dx_33 : word16)
  Class: Eq_5138
  DataType: 
  OrigDataType: 
T_5139: (in fn0800_0780 : ptr32)
  Class: Eq_593
  DataType: 
  OrigDataType: 
T_5140: (in 0x0004 : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_5141: (in out bx_32 : ptr16)
  Class: Eq_598
  DataType: 
  OrigDataType: 
T_5142: (in fn0800_0780(0x0004, dx, ds, out bx_32) : word16)
  Class: Eq_5142
  DataType: 
  OrigDataType: 
T_5143: (in *dxOut : word16)
  Class: Eq_5142
  DataType: 
  OrigDataType: 
T_5144: (in 0x039C : word16)
  Class: Eq_5144
  DataType: 
  OrigDataType: 
T_5145: (in Mem0[ds:0x039C:word16] : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5146: (in ax <=u Mem0[ds:0x039C:word16] : bool)
  Class: Eq_5146
  DataType: 
  OrigDataType: 
T_5147: (in sp_52 : word16)
  Class: Eq_5147
  DataType: 
  OrigDataType: 
T_5148: (in fp : ptr16)
  Class: Eq_5148
  DataType: 
  OrigDataType: 
T_5149: (in 0x0006 : word16)
  Class: Eq_5149
  DataType: 
  OrigDataType: 
T_5150: (in fp - 0x0006 : word16)
  Class: Eq_5147
  DataType: 
  OrigDataType: 
T_5151: (in dx_58 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5152: (in 0x0000 : word16)
  Class: Eq_5152
  DataType: 
  OrigDataType: 
T_5153: (in msdos_close_file : ptr32)
  Class: Eq_4756
  DataType: 
  OrigDataType: 
T_5154: (in msdos_close_file(ax) : byte)
  Class: Eq_5154
  DataType: 
  OrigDataType: 
T_5155: (in 0x0000 - msdos_close_file(ax) : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5156: (in 0x0000 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5157: (in dx_58 > 0x0000 : bool)
  Class: Eq_5157
  DataType: 
  OrigDataType: 
T_5158: (in fn0800_2260 : ptr32)
  Class: Eq_4994
  DataType: 
  OrigDataType: 
T_5159: (in 0x00 : byte)
  Class: Eq_4920
  DataType: 
  OrigDataType: 
T_5160: (in 0x00 : byte)
  Class: Eq_4918
  DataType: 
  OrigDataType: 
T_5161: (in fn0800_2260(ax, 0x00, 0x00, ds) : void)
  Class: Eq_5161
  DataType: 
  OrigDataType: 
T_5162: (in 0x0000 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5163: (in dx_58 != 0x0000 : bool)
  Class: Eq_5163
  DataType: 
  OrigDataType: 
T_5164: (in bx_90 : word16)
  Class: Eq_5164
  DataType: 
  OrigDataType: 
T_5165: (in fn0800_0780 : ptr32)
  Class: Eq_593
  DataType: 
  OrigDataType: 
T_5166: (in 0x0004 : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_5167: (in out bx_90 : ptr16)
  Class: Eq_598
  DataType: 
  OrigDataType: 
T_5168: (in fn0800_0780(0x0004, dx_58, ds, out bx_90) : word16)
  Class: Eq_5168
  DataType: 
  OrigDataType: 
T_5169: (in 0x0008 : word16)
  Class: Eq_5169
  DataType: 
  OrigDataType: 
T_5170: (in fp - 0x0008 : word16)
  Class: Eq_5147
  DataType: 
  OrigDataType: 
T_5171: (in sp_75 : word16)
  Class: Eq_5171
  DataType: 
  OrigDataType: 
T_5172: (in 0x0002 : word16)
  Class: Eq_5172
  DataType: 
  OrigDataType: 
T_5173: (in sp_52 + 0x0002 : word16)
  Class: Eq_5171
  DataType: 
  OrigDataType: 
T_5174: (in dx_72 : word16)
  Class: Eq_5174
  DataType: 
  OrigDataType: 
T_5175: (in ss : selector)
  Class: Eq_5175
  DataType: 
  OrigDataType: 
T_5176: (in 0x0000 : word16)
  Class: Eq_5176
  DataType: 
  OrigDataType: 
T_5177: (in sp_52 + 0x0000 : word16)
  Class: Eq_5177
  DataType: 
  OrigDataType: 
T_5178: (in Mem0[ss:sp_52 + 0x0000:word16] : word16)
  Class: Eq_5178
  DataType: 
  OrigDataType: 
T_5179: (in *dxOut : word16)
  Class: Eq_5178
  DataType: 
  OrigDataType: 
T_5180: (in bx_78 : word16)
  Class: Eq_5180
  DataType: 
  OrigDataType: 
T_5181: (in 0x0002 : word16)
  Class: Eq_5181
  DataType: 
  OrigDataType: 
T_5182: (in sp_75 + 0x0002 : word16)
  Class: Eq_5182
  DataType: 
  OrigDataType: 
T_5183: (in Mem0[ss:sp_75 + 0x0002:word16] : word16)
  Class: Eq_5183
  DataType: 
  OrigDataType: 
T_5184: (in *bxOut : word16)
  Class: Eq_5183
  DataType: 
  OrigDataType: 
T_5185: (in 0x0000 : word16)
  Class: Eq_5185
  DataType: 
  OrigDataType: 
T_5186: (in sp_75 + 0x0000 : word16)
  Class: Eq_5186
  DataType: 
  OrigDataType: 
T_5187: (in Mem0[ss:sp_75 + 0x0000:word16] : word16)
  Class: Eq_5187
  DataType: 
  OrigDataType: 
T_5188: (in ax_40 : word16)
  Class: Eq_5188
  DataType: 
  OrigDataType: 
T_5189: (in dx_33 : word16)
  Class: Eq_5189
  DataType: 
  OrigDataType: 
T_5190: (in __ror : ptr32)
  Class: Eq_5190
  DataType: 
  OrigDataType: 
T_5191: (in __rcl : ptr32)
  Class: Eq_5191
  DataType: 
  OrigDataType: 
T_5192: (in 0x01 : byte)
  Class: Eq_5192
  DataType: 
  OrigDataType: 
T_5193: (in msdos_set_file_position : ptr32)
  Class: Eq_5193
  DataType: 
  OrigDataType: 
T_5194: (in signature of msdos_set_file_position : void)
  Class: Eq_5193
  DataType: 
  OrigDataType: 
T_5195: (in bx : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5196: (in cx_dx : word32)
  Class: Eq_5196
  DataType: 
  OrigDataType: 
T_5197: (in al : byte)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_5198: (in dx_ax : word32)
  Class: Eq_5198
  DataType: 
  OrigDataType: 
T_5199: (in SEQ(cx, bx) : word32)
  Class: Eq_5196
  DataType: 
  OrigDataType: 
T_5200: (in dx_ax : word32)
  Class: Eq_5200
  DataType: 
  OrigDataType: 
T_5201: (in 0x42 : byte)
  Class: Eq_5201
  DataType: 
  OrigDataType: 
T_5202: (in DPB(dx_ax, 0x42, 8, 8) : word32)
  Class: Eq_5198
  DataType: 
  OrigDataType: 
T_5203: (in msdos_set_file_position(ax, SEQ(cx, bx), dl, DPB(dx_ax, 0x42, 8, 8)) : bool)
  Class: Eq_5203
  DataType: 
  OrigDataType: 
T_5204: (in __rcl(bx, 0x01, msdos_set_file_position(ax, SEQ(cx, bx), dl, DPB(dx_ax, 0x42, 8, 8))) : word16)
  Class: Eq_5204
  DataType: 
  OrigDataType: 
T_5205: (in 0x01 : byte)
  Class: Eq_5205
  DataType: 
  OrigDataType: 
T_5206: (in __ror(__rcl(bx, 0x01, msdos_set_file_position(ax, SEQ(cx, bx), dl, DPB(dx_ax, 0x42, 8, 8))), 0x01) : word16)
  Class: Eq_5189
  DataType: 
  OrigDataType: 
T_5207: (in ax_24 : word16)
  Class: Eq_5188
  DataType: 
  OrigDataType: 
T_5208: (in 0x42 : byte)
  Class: Eq_5208
  DataType: 
  OrigDataType: 
T_5209: (in DPB(ax, 0x42, 8, 8) : word16)
  Class: Eq_5188
  DataType: 
  OrigDataType: 
T_5210: (in dh_36 : byte)
  Class: Eq_2006
  DataType: 
  OrigDataType: 
T_5211: (in SLICE(dx_33, byte, 8) : byte)
  Class: Eq_2006
  DataType: 
  OrigDataType: 
T_5212: (in 0x0000 : word16)
  Class: Eq_5189
  DataType: 
  OrigDataType: 
T_5213: (in dx_33 >= 0x0000 : bool)
  Class: Eq_5213
  DataType: 
  OrigDataType: 
T_5214: (in dx_71 : word16)
  Class: Eq_5214
  DataType: 
  OrigDataType: 
T_5215: (in *dxOut : word16)
  Class: Eq_2494
  DataType: 
  OrigDataType: 
T_5216: (in dx_57 : word16)
  Class: Eq_5216
  DataType: 
  OrigDataType: 
T_5217: (in fn0800_0CE0 : ptr32)
  Class: Eq_2003
  DataType: 
  OrigDataType: 
T_5218: (in out dx_57 : ptr16)
  Class: Eq_2008
  DataType: 
  OrigDataType: 
T_5219: (in fn0800_0CE0(dl, dh_36, ds, out dx_57) : word16)
  Class: Eq_5219
  DataType: 
  OrigDataType: 
T_5220: (in 0xFFFF : word16)
  Class: Eq_5188
  DataType: 
  OrigDataType: 
T_5221: (in dx_63 : word16)
  Class: Eq_5221
  DataType: 
  OrigDataType: 
T_5222: (in 0xFFFF : word16)
  Class: Eq_5222
  DataType: 
  OrigDataType: 
T_5223: (in *dxOut : word16)
  Class: Eq_5222
  DataType: 
  OrigDataType: 
T_5224: (in 0x0000 : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5225: (in dx < 0x0000 : bool)
  Class: Eq_5225
  DataType: 
  OrigDataType: 
T_5226: (in ax_41 : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5227: (in -ax : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5228: (in dx_43 : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5229: (in -dx : word16)
  Class: Eq_5229
  DataType: 
  OrigDataType: 
T_5230: (in 0x0000 : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5231: (in ax_41 == 0x0000 : bool)
  Class: Eq_5231
  DataType: 
  OrigDataType: 
T_5232: (in -dx - (ax_41 == 0x0000) : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5233: (in 0x0000 : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5234: (in cx >= 0x0000 : bool)
  Class: Eq_5234
  DataType: 
  OrigDataType: 
T_5235: (in 0x0000 : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5236: (in cx < 0x0000 : bool)
  Class: Eq_5236
  DataType: 
  OrigDataType: 
T_5237: (in bx_28 : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5238: (in -bx : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5239: (in dx_32 : word16)
  Class: Eq_5239
  DataType: 
  OrigDataType: 
T_5240: (in bx_33 : word16)
  Class: Eq_5240
  DataType: 
  OrigDataType: 
T_5241: (in ax_36 : word16)
  Class: Eq_5241
  DataType: 
  OrigDataType: 
T_5242: (in fn0800_1B47 : ptr32)
  Class: Eq_5242
  DataType: 
  OrigDataType: 
T_5243: (in signature of fn0800_1B47 : void)
  Class: Eq_5242
  DataType: 
  OrigDataType: 
T_5244: (in ax : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5245: (in cx : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5246: (in dx : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5247: (in bx : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5248: (in dxOut : ptr16)
  Class: Eq_5248
  DataType: 
  OrigDataType: 
T_5249: (in bxOut : ptr16)
  Class: Eq_5249
  DataType: 
  OrigDataType: 
T_5250: (in -cx : word16)
  Class: Eq_5250
  DataType: 
  OrigDataType: 
T_5251: (in 0x0000 : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5252: (in bx_28 == 0x0000 : bool)
  Class: Eq_5252
  DataType: 
  OrigDataType: 
T_5253: (in -cx - (bx_28 == 0x0000) : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5254: (in out dx_32 : ptr16)
  Class: Eq_5248
  DataType: 
  OrigDataType: 
T_5255: (in out bx_33 : ptr16)
  Class: Eq_5249
  DataType: 
  OrigDataType: 
T_5256: (in fn0800_1B47(ax, -cx - (bx_28 == 0x0000), dx, bx_28, out dx_32, out bx_33) : word16)
  Class: Eq_5256
  DataType: 
  OrigDataType: 
T_5257: (in -fn0800_1B47(ax, -cx - (bx_28 == 0x0000), dx, bx_28, out dx_32, out bx_33) : word16)
  Class: Eq_5241
  DataType: 
  OrigDataType: 
T_5258: (in dx_38 : word16)
  Class: Eq_5258
  DataType: 
  OrigDataType: 
T_5259: (in -dx_32 : word16)
  Class: Eq_5259
  DataType: 
  OrigDataType: 
T_5260: (in 0x0000 : word16)
  Class: Eq_5241
  DataType: 
  OrigDataType: 
T_5261: (in ax_36 == 0x0000 : bool)
  Class: Eq_5261
  DataType: 
  OrigDataType: 
T_5262: (in -dx_32 - (ax_36 == 0x0000) : word16)
  Class: Eq_5262
  DataType: 
  OrigDataType: 
T_5263: (in *dxOut : word16)
  Class: Eq_5262
  DataType: 
  OrigDataType: 
T_5264: (in dx_23 : word16)
  Class: Eq_5264
  DataType: 
  OrigDataType: 
T_5265: (in bx_24 : word16)
  Class: Eq_5265
  DataType: 
  OrigDataType: 
T_5266: (in fn0800_1B47 : ptr32)
  Class: Eq_5242
  DataType: 
  OrigDataType: 
T_5267: (in out dx_23 : ptr16)
  Class: Eq_5248
  DataType: 
  OrigDataType: 
T_5268: (in out bx_24 : ptr16)
  Class: Eq_5249
  DataType: 
  OrigDataType: 
T_5269: (in fn0800_1B47(ax, cx, dx, bx, out dx_23, out bx_24) : word16)
  Class: Eq_5269
  DataType: 
  OrigDataType: 
T_5270: (in dx_61 : word16)
  Class: Eq_5270
  DataType: 
  OrigDataType: 
T_5271: (in bx_62 : word16)
  Class: Eq_5271
  DataType: 
  OrigDataType: 
T_5272: (in ax_69 : word16)
  Class: Eq_5272
  DataType: 
  OrigDataType: 
T_5273: (in fn0800_1B47 : ptr32)
  Class: Eq_5242
  DataType: 
  OrigDataType: 
T_5274: (in out dx_61 : ptr16)
  Class: Eq_5248
  DataType: 
  OrigDataType: 
T_5275: (in out bx_62 : ptr16)
  Class: Eq_5249
  DataType: 
  OrigDataType: 
T_5276: (in fn0800_1B47(ax_41, cx, dx_43, bx, out dx_61, out bx_62) : word16)
  Class: Eq_5276
  DataType: 
  OrigDataType: 
T_5277: (in -fn0800_1B47(ax_41, cx, dx_43, bx, out dx_61, out bx_62) : word16)
  Class: Eq_5272
  DataType: 
  OrigDataType: 
T_5278: (in dx_71 : word16)
  Class: Eq_5278
  DataType: 
  OrigDataType: 
T_5279: (in -dx_61 : word16)
  Class: Eq_5279
  DataType: 
  OrigDataType: 
T_5280: (in 0x0000 : word16)
  Class: Eq_5272
  DataType: 
  OrigDataType: 
T_5281: (in ax_69 == 0x0000 : bool)
  Class: Eq_5281
  DataType: 
  OrigDataType: 
T_5282: (in -dx_61 - (ax_69 == 0x0000) : word16)
  Class: Eq_5282
  DataType: 
  OrigDataType: 
T_5283: (in *dxOut : word16)
  Class: Eq_5282
  DataType: 
  OrigDataType: 
T_5284: (in bx_49 : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5285: (in -bx : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5286: (in dx_53 : word16)
  Class: Eq_5286
  DataType: 
  OrigDataType: 
T_5287: (in bx_54 : word16)
  Class: Eq_5287
  DataType: 
  OrigDataType: 
T_5288: (in fn0800_1B47 : ptr32)
  Class: Eq_5242
  DataType: 
  OrigDataType: 
T_5289: (in -cx : word16)
  Class: Eq_5289
  DataType: 
  OrigDataType: 
T_5290: (in 0x0000 : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5291: (in bx_49 == 0x0000 : bool)
  Class: Eq_5291
  DataType: 
  OrigDataType: 
T_5292: (in -cx - (bx_49 == 0x0000) : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5293: (in out dx_53 : ptr16)
  Class: Eq_5248
  DataType: 
  OrigDataType: 
T_5294: (in out bx_54 : ptr16)
  Class: Eq_5249
  DataType: 
  OrigDataType: 
T_5295: (in fn0800_1B47(ax_41, -cx - (bx_49 == 0x0000), dx_43, bx_49, out dx_53, out bx_54) : word16)
  Class: Eq_5295
  DataType: 
  OrigDataType: 
T_5296: (in *dxOut : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5297: (in bx_113 : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5298: (in cx_103 : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5299: (in 0x0000 : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5300: (in cx != 0x0000 : bool)
  Class: Eq_5300
  DataType: 
  OrigDataType: 
T_5301: (in cx <u dx : bool)
  Class: Eq_5301
  DataType: 
  OrigDataType: 
T_5302: (in bx_56 : word16)
  Class: Eq_5302
  DataType: 
  OrigDataType: 
T_5303: (in 0x0001 : word16)
  Class: Eq_5303
  DataType: 
  OrigDataType: 
T_5304: (in bx - 0x0001 : word16)
  Class: Eq_5304
  DataType: 
  OrigDataType: 
T_5305: (in *bxOut : word16)
  Class: Eq_5304
  DataType: 
  OrigDataType: 
T_5306: (in 0x0001 : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5307: (in bx == 0x0001 : bool)
  Class: Eq_5307
  DataType: 
  OrigDataType: 
T_5308: (in 0x0000 : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5309: (in bx == 0x0000 : bool)
  Class: Eq_5309
  DataType: 
  OrigDataType: 
T_5310: (in bx_42 : word16)
  Class: Eq_5310
  DataType: 
  OrigDataType: 
T_5311: (in *bxOut : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5312: (in dx_45 : word16)
  Class: Eq_5312
  DataType: 
  OrigDataType: 
T_5313: (in *dxOut : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5314: (in bx >u dx : bool)
  Class: Eq_5314
  DataType: 
  OrigDataType: 
T_5315: (in dx_83 : word16)
  Class: Eq_5315
  DataType: 
  OrigDataType: 
T_5316: (in dx_ax : word32)
  Class: Eq_5316
  DataType: 
  OrigDataType: 
T_5317: (in dx_ax % bx : uint16)
  Class: Eq_5315
  DataType: 
  OrigDataType: 
T_5318: (in SEQ(dx_83, ax) : word32)
  Class: Eq_5318
  DataType: 
  OrigDataType: 
T_5319: (in SEQ(dx_83, ax) /u bx : uint16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5320: (in bx_86 : word16)
  Class: Eq_5320
  DataType: 
  OrigDataType: 
T_5321: (in *bxOut : word16)
  Class: Eq_5315
  DataType: 
  OrigDataType: 
T_5322: (in dx_87 : word16)
  Class: Eq_5322
  DataType: 
  OrigDataType: 
T_5323: (in *dxOut : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5324: (in dx_96 : word16)
  Class: Eq_5324
  DataType: 
  OrigDataType: 
T_5325: (in 0x0000 : word16)
  Class: Eq_5325
  DataType: 
  OrigDataType: 
T_5326: (in SEQ(0x0000, dx) : word32)
  Class: Eq_5326
  DataType: 
  OrigDataType: 
T_5327: (in SEQ(0x0000, dx) % bx : uint16)
  Class: Eq_5324
  DataType: 
  OrigDataType: 
T_5328: (in SEQ(dx_96, ax) : word32)
  Class: Eq_5316
  DataType: 
  OrigDataType: 
T_5329: (in SEQ(dx_96, dx) : word32)
  Class: Eq_5329
  DataType: 
  OrigDataType: 
T_5330: (in SEQ(dx_96, dx) /u bx : uint16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5331: (in si_132 : word16)
  Class: Eq_5331
  DataType: 
  OrigDataType: 
T_5332: (in 0x0000 : word16)
  Class: Eq_5331
  DataType: 
  OrigDataType: 
T_5333: (in di_134 : word16)
  Class: Eq_5333
  DataType: 
  OrigDataType: 
T_5334: (in 0x0000 : word16)
  Class: Eq_5333
  DataType: 
  OrigDataType: 
T_5335: (in bp_136 : word16)
  Class: Eq_5335
  DataType: 
  OrigDataType: 
T_5336: (in 0x0000 : word16)
  Class: Eq_5335
  DataType: 
  OrigDataType: 
T_5337: (in cx != dx : bool)
  Class: Eq_5337
  DataType: 
  OrigDataType: 
T_5338: (in 0x0000 : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5339: (in 0x0000 : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5340: (in bx >u ax : bool)
  Class: Eq_5340
  DataType: 
  OrigDataType: 
T_5341: (in bx_119 : word16)
  Class: Eq_5341
  DataType: 
  OrigDataType: 
T_5342: (in ax - bx : word16)
  Class: Eq_5342
  DataType: 
  OrigDataType: 
T_5343: (in *bxOut : word16)
  Class: Eq_5342
  DataType: 
  OrigDataType: 
T_5344: (in dx_122 : word16)
  Class: Eq_5344
  DataType: 
  OrigDataType: 
T_5345: (in 0x0000 : word16)
  Class: Eq_5345
  DataType: 
  OrigDataType: 
T_5346: (in *dxOut : word16)
  Class: Eq_5345
  DataType: 
  OrigDataType: 
T_5347: (in 0x0001 : word16)
  Class: Eq_5347
  DataType: 
  OrigDataType: 
T_5348: (in __rcr : ptr32)
  Class: Eq_5348
  DataType: 
  OrigDataType: 
T_5349: (in 0x01 : byte)
  Class: Eq_5349
  DataType: 
  OrigDataType: 
T_5350: (in C_147 : byte)
  Class: Eq_5350
  DataType: 
  OrigDataType: 
T_5351: (in __rcr(cx_103, 0x01, C_147) : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5352: (in __rcr : ptr32)
  Class: Eq_5352
  DataType: 
  OrigDataType: 
T_5353: (in 0x01 : byte)
  Class: Eq_5353
  DataType: 
  OrigDataType: 
T_5354: (in 0x0002 : cui16)
  Class: Eq_5354
  DataType: 
  OrigDataType: 
T_5355: (in cx_103 & 0x0002 : word16)
  Class: Eq_5355
  DataType: 
  OrigDataType: 
T_5356: (in 0x0000 : word16)
  Class: Eq_5355
  DataType: 
  OrigDataType: 
T_5357: (in (cx_103 & 0x0002) != 0x0000 : bool)
  Class: Eq_5357
  DataType: 
  OrigDataType: 
T_5358: (in __rcr(bx, 0x01, (cx_103 & 0x0002) != 0x0000) : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5359: (in cx_bx_189 : ui32)
  Class: Eq_5359
  DataType: 
  OrigDataType: 
T_5360: (in SEQ(cx_103, bx) : ui32)
  Class: Eq_5359
  DataType: 
  OrigDataType: 
T_5361: (in dx_ax_193 : word32)
  Class: Eq_5361
  DataType: 
  OrigDataType: 
T_5362: (in ax - bx : word16)
  Class: Eq_5362
  DataType: 
  OrigDataType: 
T_5363: (in SEQ(dx, ax - bx) : word32)
  Class: Eq_5363
  DataType: 
  OrigDataType: 
T_5364: (in SEQ(dx, ax - bx) - cx_bx_189 : word32)
  Class: Eq_5361
  DataType: 
  OrigDataType: 
T_5365: (in SLICE(dx_ax_193, word16, 16) : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5366: (in (word16) dx_ax_193 : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5367: (in cond(dx_ax_193) : byte)
  Class: Eq_5367
  DataType: 
  OrigDataType: 
T_5368: (in !cond(dx_ax_193) : bool)
  Class: Eq_5368
  DataType: 
  OrigDataType: 
T_5369: (in C_201 : byte)
  Class: Eq_5368
  DataType: 
  OrigDataType: 
T_5370: (in 0x00000000 : word32)
  Class: Eq_5361
  DataType: 
  OrigDataType: 
T_5371: (in dx_ax_193 >=u 0x00000000 : bool)
  Class: Eq_5371
  DataType: 
  OrigDataType: 
T_5372: (in 0x0001 : word16)
  Class: Eq_5372
  DataType: 
  OrigDataType: 
T_5373: (in bp_136 + 0x0001 : word16)
  Class: Eq_5335
  DataType: 
  OrigDataType: 
T_5374: (in cx_103 <u dx : bool)
  Class: Eq_5374
  DataType: 
  OrigDataType: 
T_5375: (in cx_bx_141 : ui32)
  Class: Eq_5375
  DataType: 
  OrigDataType: 
T_5376: (in 0x0002 : word16)
  Class: Eq_5376
  DataType: 
  OrigDataType: 
T_5377: (in bx * 0x0002 : word16)
  Class: Eq_5377
  DataType: 
  OrigDataType: 
T_5378: (in SEQ(cx_103, bx * 0x0002) : ui32)
  Class: Eq_5375
  DataType: 
  OrigDataType: 
T_5379: (in 0x00000002 : ui32)
  Class: Eq_5379
  DataType: 
  OrigDataType: 
T_5380: (in cx_bx_141 * 0x00000002 : ui32)
  Class: Eq_5380
  DataType: 
  OrigDataType: 
T_5381: (in SLICE(cx_bx_141 * 0x00000002, word16, 16) : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5382: (in cx_bx_141 * 0x00000002 : ui32)
  Class: Eq_5382
  DataType: 
  OrigDataType: 
T_5383: (in (word16) (cx_bx_141 * 0x00000002) : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5384: (in cx_bx_141 * 0x00000002 : ui32)
  Class: Eq_5384
  DataType: 
  OrigDataType: 
T_5385: (in cond(cx_bx_141 * 0x00000002) : byte)
  Class: Eq_5350
  DataType: 
  OrigDataType: 
T_5386: (in cx_bx_141 * 0x00000002 : ui32)
  Class: Eq_5386
  DataType: 
  OrigDataType: 
T_5387: (in 0x00000000 : ui32)
  Class: Eq_5386
  DataType: 
  OrigDataType: 
T_5388: (in cx_bx_141 * 0x00000002 <u 0x00000000 : bool)
  Class: Eq_5388
  DataType: 
  OrigDataType: 
T_5389: (in cx_103 >u dx : bool)
  Class: Eq_5389
  DataType: 
  OrigDataType: 
T_5390: (in false : bool)
  Class: Eq_5368
  DataType: 
  OrigDataType: 
T_5391: (in bx <=u ax : bool)
  Class: Eq_5391
  DataType: 
  OrigDataType: 
T_5392: (in bx_163 : word16)
  Class: Eq_5392
  DataType: 
  OrigDataType: 
T_5393: (in *bxOut : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5394: (in dx_167 : word16)
  Class: Eq_5394
  DataType: 
  OrigDataType: 
T_5395: (in *dxOut : word16)
  Class: Eq_5333
  DataType: 
  OrigDataType: 
T_5396: (in 0x0002 : word16)
  Class: Eq_5396
  DataType: 
  OrigDataType: 
T_5397: (in si_132 * 0x0002 : word16)
  Class: Eq_5397
  DataType: 
  OrigDataType: 
T_5398: (in si_132 * 0x0002 + C_201 : word16)
  Class: Eq_5331
  DataType: 
  OrigDataType: 
T_5399: (in 0x0002 : word16)
  Class: Eq_5399
  DataType: 
  OrigDataType: 
T_5400: (in di_134 * 0x0002 : word16)
  Class: Eq_5400
  DataType: 
  OrigDataType: 
T_5401: (in 0x0000 : word16)
  Class: Eq_5331
  DataType: 
  OrigDataType: 
T_5402: (in si_132 <u 0x0000 : bool)
  Class: Eq_5402
  DataType: 
  OrigDataType: 
T_5403: (in di_134 * 0x0002 + (si_132 <u 0x0000) : word16)
  Class: Eq_5333
  DataType: 
  OrigDataType: 
T_5404: (in cond(di_134) : byte)
  Class: Eq_5350
  DataType: 
  OrigDataType: 
T_5405: (in 0x0001 : word16)
  Class: Eq_5405
  DataType: 
  OrigDataType: 
T_5406: (in bp_136 - 0x0001 : word16)
  Class: Eq_5335
  DataType: 
  OrigDataType: 
T_5407: (in 0x0000 : word16)
  Class: Eq_5335
  DataType: 
  OrigDataType: 
T_5408: (in bp_136 < 0x0000 : bool)
  Class: Eq_5408
  DataType: 
  OrigDataType: 
T_5409: (in di_si_217 : ui32)
  Class: Eq_5409
  DataType: 
  OrigDataType: 
T_5410: (in 0x0002 : word16)
  Class: Eq_5410
  DataType: 
  OrigDataType: 
T_5411: (in si_132 * 0x0002 : word16)
  Class: Eq_5411
  DataType: 
  OrigDataType: 
T_5412: (in SEQ(di_134, si_132 * 0x0002) : ui32)
  Class: Eq_5409
  DataType: 
  OrigDataType: 
T_5413: (in 0x00000002 : ui32)
  Class: Eq_5413
  DataType: 
  OrigDataType: 
T_5414: (in di_si_217 * 0x00000002 : ui32)
  Class: Eq_5414
  DataType: 
  OrigDataType: 
T_5415: (in SLICE(di_si_217 * 0x00000002, word16, 16) : word16)
  Class: Eq_5333
  DataType: 
  OrigDataType: 
T_5416: (in di_si_217 * 0x00000002 : ui32)
  Class: Eq_5416
  DataType: 
  OrigDataType: 
T_5417: (in (word16) (di_si_217 * 0x00000002) : word16)
  Class: Eq_5331
  DataType: 
  OrigDataType: 
T_5418: (in 0x0001 : word16)
  Class: Eq_5418
  DataType: 
  OrigDataType: 
T_5419: (in bp_136 - 0x0001 : word16)
  Class: Eq_5335
  DataType: 
  OrigDataType: 
T_5420: (in 0x0000 : word16)
  Class: Eq_5335
  DataType: 
  OrigDataType: 
T_5421: (in bp_136 < 0x0000 : bool)
  Class: Eq_5421
  DataType: 
  OrigDataType: 
T_5422: (in ax + bx : word16)
  Class: Eq_5422
  DataType: 
  OrigDataType: 
T_5423: (in SEQ(dx, ax + bx) : word32)
  Class: Eq_5423
  DataType: 
  OrigDataType: 
T_5424: (in SEQ(dx, ax + bx) + cx_bx_189 : word32)
  Class: Eq_5424
  DataType: 
  OrigDataType: 
T_5425: (in (word16) (SEQ(dx, ax + bx) + cx_bx_189) : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5426: (in 0x0001 : word16)
  Class: Eq_5426
  DataType: 
  OrigDataType: 
T_5427: (in cx_103 >>u 0x0001 : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5428: (in __rcr : ptr32)
  Class: Eq_5428
  DataType: 
  OrigDataType: 
T_5429: (in 0x01 : byte)
  Class: Eq_5429
  DataType: 
  OrigDataType: 
T_5430: (in cond(cx_103) : byte)
  Class: Eq_5430
  DataType: 
  OrigDataType: 
T_5431: (in __rcr(bx, 0x01, cond(cx_103)) : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5432: (in SEQ(cx_103, bx) : ui32)
  Class: Eq_5359
  DataType: 
  OrigDataType: 
T_5433: (in dx_ax_235 : word32)
  Class: Eq_5433
  DataType: 
  OrigDataType: 
T_5434: (in ax + bx : word16)
  Class: Eq_5434
  DataType: 
  OrigDataType: 
T_5435: (in SEQ(dx, ax + bx) : word32)
  Class: Eq_5435
  DataType: 
  OrigDataType: 
T_5436: (in SEQ(dx, ax + bx) + cx_bx_189 : word32)
  Class: Eq_5433
  DataType: 
  OrigDataType: 
T_5437: (in SLICE(dx_ax_235, word16, 16) : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5438: (in (word16) dx_ax_235 : word16)
  Class: Eq_2509
  DataType: 
  OrigDataType: 
T_5439: (in cond(dx_ax_235) : byte)
  Class: Eq_5368
  DataType: 
  OrigDataType: 
T_5440: (in 0x00000000 : word32)
  Class: Eq_5433
  DataType: 
  OrigDataType: 
T_5441: (in dx_ax_235 >=u 0x00000000 : bool)
  Class: Eq_5441
  DataType: 
  OrigDataType: 
T_5442: (in bx_12 : word16)
  Class: Eq_2619
  DataType: 
  OrigDataType: 
T_5443: (in ax : word16)
  Class: Eq_2619
  DataType: 
  OrigDataType: 
T_5444: (in si_11 : word16)
  Class: Eq_5444
  DataType: 
  OrigDataType: 
T_5445: (in dx : word16)
  Class: Eq_5444
  DataType: 
  OrigDataType: 
T_5446: (in 0x0001 : word16)
  Class: Eq_5446
  DataType: 
  OrigDataType: 
T_5447: (in bx_12 + 0x0001 : word16)
  Class: Eq_2619
  DataType: 
  OrigDataType: 
T_5448: (in 0x0001 : word16)
  Class: Eq_5448
  DataType: 
  OrigDataType: 
T_5449: (in si_11 + 0x0001 : word16)
  Class: Eq_5444
  DataType: 
  OrigDataType: 
T_5450: (in al_16 : byte)
  Class: Eq_5450
  DataType: 
  OrigDataType: 
T_5451: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_5452: (in 0x0000 : word16)
  Class: Eq_5452
  DataType: 
  OrigDataType: 
T_5453: (in si_11 + 0x0000 : word16)
  Class: Eq_5453
  DataType: 
  OrigDataType: 
T_5454: (in Mem0[ds:si_11 + 0x0000:byte] : byte)
  Class: Eq_5450
  DataType: 
  OrigDataType: 
T_5455: (in 0x0000 : word16)
  Class: Eq_5455
  DataType: 
  OrigDataType: 
T_5456: (in bx_12 + 0x0000 : word16)
  Class: Eq_5456
  DataType: 
  OrigDataType: 
T_5457: (in Mem17[ds:bx_12 + 0x0000:byte] : byte)
  Class: Eq_5450
  DataType: 
  OrigDataType: 
T_5458: (in 0x00 : byte)
  Class: Eq_5450
  DataType: 
  OrigDataType: 
T_5459: (in al_16 == 0x00 : bool)
  Class: Eq_5459
  DataType: 
  OrigDataType: 
T_5460: (in 0x0000 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5461: (in dx != 0x0000 : bool)
  Class: Eq_5461
  DataType: 
  OrigDataType: 
T_5462: (in wLoc08_24 : word16)
  Class: Eq_5462
  DataType: 
  OrigDataType: 
T_5463: (in 0x0000 : word16)
  Class: Eq_5462
  DataType: 
  OrigDataType: 
T_5464: (in 0x0000 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5465: (in dx == 0x0000 : bool)
  Class: Eq_5465
  DataType: 
  OrigDataType: 
T_5466: (in 0x0220 : word16)
  Class: Eq_5466
  DataType: 
  OrigDataType: 
T_5467: (in Mem0[ds:0x0220:word16] : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5468: (in v16_33 : word16)
  Class: Eq_5468
  DataType: 
  OrigDataType: 
T_5469: (in 0x0001 : word16)
  Class: Eq_5469
  DataType: 
  OrigDataType: 
T_5470: (in wLoc08_24 + 0x0001 : word16)
  Class: Eq_5468
  DataType: 
  OrigDataType: 
T_5471: (in wArg06 : word16)
  Class: Eq_5471
  DataType: 
  OrigDataType: 
T_5472: (in 0x0000 : word16)
  Class: Eq_5471
  DataType: 
  OrigDataType: 
T_5473: (in wArg06 == 0x0000 : bool)
  Class: Eq_5473
  DataType: 
  OrigDataType: 
T_5474: (in wLoc08_241 : word16)
  Class: Eq_5474
  DataType: 
  OrigDataType: 
T_5475: (in 0x0001 : word16)
  Class: Eq_5475
  DataType: 
  OrigDataType: 
T_5476: (in v16_33 + 0x0001 : word16)
  Class: Eq_5474
  DataType: 
  OrigDataType: 
T_5477: (in 0x0000 : word16)
  Class: Eq_5471
  DataType: 
  OrigDataType: 
T_5478: (in wArg06 == 0x0000 : bool)
  Class: Eq_5478
  DataType: 
  OrigDataType: 
T_5479: (in bx_243 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5480: (in 0x0000 : word16)
  Class: Eq_5480
  DataType: 
  OrigDataType: 
T_5481: (in bx_243 + 0x0000 : word16)
  Class: Eq_5481
  DataType: 
  OrigDataType: 
T_5482: (in Mem0[ds:bx_243 + 0x0000:word16] : word16)
  Class: Eq_5482
  DataType: 
  OrigDataType: 
T_5483: (in 0x0000 : word16)
  Class: Eq_5482
  DataType: 
  OrigDataType: 
T_5484: (in Mem0[ds:bx_243 + 0x0000:word16] != 0x0000 : bool)
  Class: Eq_5484
  DataType: 
  OrigDataType: 
T_5485: (in bx_213 : word16)
  Class: Eq_5485
  DataType: 
  OrigDataType: 
T_5486: (in ax_165 : word16)
  Class: Eq_5486
  DataType: 
  OrigDataType: 
T_5487: (in ax_45 : word16)
  Class: Eq_5487
  DataType: 
  OrigDataType: 
T_5488: (in 0x0386 : word16)
  Class: Eq_5488
  DataType: 
  OrigDataType: 
T_5489: (in Mem0[ds:0x0386:word16] : word16)
  Class: Eq_5487
  DataType: 
  OrigDataType: 
T_5490: (in 0x0010 : word16)
  Class: Eq_5490
  DataType: 
  OrigDataType: 
T_5491: (in 0x0386 : word16)
  Class: Eq_5491
  DataType: 
  OrigDataType: 
T_5492: (in Mem51[ds:0x0386:word16] : word16)
  Class: Eq_5490
  DataType: 
  OrigDataType: 
T_5493: (in v21_46 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5494: (in 0x000F : word16)
  Class: Eq_5494
  DataType: 
  OrigDataType: 
T_5495: (in wLoc08_241 + 0x000F : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5496: (in cl_52 : byte)
  Class: Eq_5496
  DataType: 
  OrigDataType: 
T_5497: (in ax_53 : word16)
  Class: Eq_5485
  DataType: 
  OrigDataType: 
T_5498: (in fn0800_0D39 : ptr32)
  Class: Eq_1273
  DataType: 
  OrigDataType: 
T_5499: (in out cl_52 : ptr16)
  Class: Eq_1277
  DataType: 
  OrigDataType: 
T_5500: (in fn0800_0D39(v21_46, ds, out cl_52) : word16)
  Class: Eq_5485
  DataType: 
  OrigDataType: 
T_5501: (in 0x0000 : word16)
  Class: Eq_5485
  DataType: 
  OrigDataType: 
T_5502: (in ax_53 != 0x0000 : bool)
  Class: Eq_5502
  DataType: 
  OrigDataType: 
T_5503: (in v16_33 + 0x0001 : word16)
  Class: Eq_5503
  DataType: 
  OrigDataType: 
T_5504: (in fn0800_06F2 : ptr32)
  Class: Eq_489
  DataType: 
  OrigDataType: 
T_5505: (in 0x0000 : word16)
  Class: Eq_5505
  DataType: 
  OrigDataType: 
T_5506: (in ax + 0x0000 : word16)
  Class: Eq_5506
  DataType: 
  OrigDataType: 
T_5507: (in Mem0[ds:ax + 0x0000:word16] : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_5508: (in fn0800_06F2(Mem0[ds:ax + 0x0000:word16], ds) : word16)
  Class: Eq_5508
  DataType: 
  OrigDataType: 
T_5509: (in 0x0003 : word16)
  Class: Eq_5509
  DataType: 
  OrigDataType: 
T_5510: (in fn0800_06F2(Mem0[ds:ax + 0x0000:word16], ds) + 0x0003 : word16)
  Class: Eq_5510
  DataType: 
  OrigDataType: 
T_5511: (in v16_33 + 0x0001 + (fn0800_06F2(Mem0[ds:ax + 0x0000:word16], ds) + 0x0003) : word16)
  Class: Eq_5511
  DataType: 
  OrigDataType: 
T_5512: (in fn0800_06F2 : ptr32)
  Class: Eq_489
  DataType: 
  OrigDataType: 
T_5513: (in 0x0000 : word16)
  Class: Eq_5513
  DataType: 
  OrigDataType: 
T_5514: (in ax + 0x0000 : word16)
  Class: Eq_5514
  DataType: 
  OrigDataType: 
T_5515: (in Mem0[ds:ax + 0x0000:word16] : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_5516: (in fn0800_06F2(Mem0[ds:ax + 0x0000:word16], ds) : word16)
  Class: Eq_5516
  DataType: 
  OrigDataType: 
T_5517: (in 0x0003 : word16)
  Class: Eq_5517
  DataType: 
  OrigDataType: 
T_5518: (in fn0800_06F2(Mem0[ds:ax + 0x0000:word16], ds) + 0x0003 : word16)
  Class: Eq_5518
  DataType: 
  OrigDataType: 
T_5519: (in v16_33 + 0x0001 + (fn0800_06F2(Mem0[ds:ax + 0x0000:word16], ds) + 0x0003) + (fn0800_06F2(Mem0[ds:ax + 0x0000:word16], ds) + 0x0003) : word16)
  Class: Eq_5474
  DataType: 
  OrigDataType: 
T_5520: (in 0x0001 : word16)
  Class: Eq_5520
  DataType: 
  OrigDataType: 
T_5521: (in bx_243 + 0x0001 : word16)
  Class: Eq_5521
  DataType: 
  OrigDataType: 
T_5522: (in 0x0001 : word16)
  Class: Eq_5522
  DataType: 
  OrigDataType: 
T_5523: (in bx_243 + 0x0001 + 0x0001 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5524: (in fn0800_06F2 : ptr32)
  Class: Eq_489
  DataType: 
  OrigDataType: 
T_5525: (in 0x0000 : word16)
  Class: Eq_5525
  DataType: 
  OrigDataType: 
T_5526: (in bx_243 + 0x0000 : word16)
  Class: Eq_5526
  DataType: 
  OrigDataType: 
T_5527: (in Mem0[ds:bx_243 + 0x0000:word16] : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_5528: (in fn0800_06F2(Mem0[ds:bx_243 + 0x0000:word16], ds) : word16)
  Class: Eq_5528
  DataType: 
  OrigDataType: 
T_5529: (in 0x0001 : word16)
  Class: Eq_5529
  DataType: 
  OrigDataType: 
T_5530: (in fn0800_06F2(Mem0[ds:bx_243 + 0x0000:word16], ds) + 0x0001 : word16)
  Class: Eq_5530
  DataType: 
  OrigDataType: 
T_5531: (in wLoc08_24 + (fn0800_06F2(Mem0[ds:bx_243 + 0x0000:word16], ds) + 0x0001) : word16)
  Class: Eq_5462
  DataType: 
  OrigDataType: 
T_5532: (in cl_211 : byte)
  Class: Eq_5532
  DataType: 
  OrigDataType: 
T_5533: (in ax_212 : word16)
  Class: Eq_5485
  DataType: 
  OrigDataType: 
T_5534: (in fn0800_0D39 : ptr32)
  Class: Eq_1273
  DataType: 
  OrigDataType: 
T_5535: (in out cl_211 : ptr16)
  Class: Eq_1277
  DataType: 
  OrigDataType: 
T_5536: (in fn0800_0D39(v21_46, ds, out cl_211) : word16)
  Class: Eq_5485
  DataType: 
  OrigDataType: 
T_5537: (in 0x0000 : word16)
  Class: Eq_5485
  DataType: 
  OrigDataType: 
T_5538: (in ax_212 != 0x0000 : bool)
  Class: Eq_5538
  DataType: 
  OrigDataType: 
T_5539: (in 0x0386 : word16)
  Class: Eq_5539
  DataType: 
  OrigDataType: 
T_5540: (in Mem92[ds:0x0386:word16] : word16)
  Class: Eq_5487
  DataType: 
  OrigDataType: 
T_5541: (in 0x0000 : word16)
  Class: Eq_5541
  DataType: 
  OrigDataType: 
T_5542: (in bx + 0x0000 : word16)
  Class: Eq_5542
  DataType: 
  OrigDataType: 
T_5543: (in Mem93[ds:bx + 0x0000:word16] : word16)
  Class: Eq_5485
  DataType: 
  OrigDataType: 
T_5544: (in bx_94 : word16)
  Class: Eq_5544
  DataType: 
  OrigDataType: 
T_5545: (in 0x000F : word16)
  Class: Eq_5545
  DataType: 
  OrigDataType: 
T_5546: (in bx_213 + 0x000F : word16)
  Class: Eq_5544
  DataType: 
  OrigDataType: 
T_5547: (in bx_113 : word16)
  Class: Eq_2619
  DataType: 
  OrigDataType: 
T_5548: (in (byte) bx_94 : byte)
  Class: Eq_5548
  DataType: 
  OrigDataType: 
T_5549: (in 0xF0 : byte)
  Class: Eq_5549
  DataType: 
  OrigDataType: 
T_5550: (in (byte) bx_94 & 0xF0 : byte)
  Class: Eq_5550
  DataType: 
  OrigDataType: 
T_5551: (in DPB(bx_94, (byte) bx_94 & 0xF0, 0, 8) : word16)
  Class: Eq_2619
  DataType: 
  OrigDataType: 
T_5552: (in 0x04 : byte)
  Class: Eq_5552
  DataType: 
  OrigDataType: 
T_5553: (in bx_113 >>u 0x04 : word16)
  Class: Eq_5553
  DataType: 
  OrigDataType: 
T_5554: (in (bx_113 >>u 0x04) + ds : word16)
  Class: Eq_5554
  DataType: 
  OrigDataType: 
T_5555: (in wArg02 : word16)
  Class: Eq_5555
  DataType: 
  OrigDataType: 
T_5556: (in 0x0000 : word16)
  Class: Eq_5556
  DataType: 
  OrigDataType: 
T_5557: (in wArg02 + 0x0000 : word16)
  Class: Eq_5557
  DataType: 
  OrigDataType: 
T_5558: (in Mem106[ds:wArg02 + 0x0000:word16] : word16)
  Class: Eq_5554
  DataType: 
  OrigDataType: 
T_5559: (in 0x0000 : word16)
  Class: Eq_5559
  DataType: 
  OrigDataType: 
T_5560: (in cx + 0x0000 : word16)
  Class: Eq_5560
  DataType: 
  OrigDataType: 
T_5561: (in Mem108[ds:cx + 0x0000:word16] : word16)
  Class: Eq_2619
  DataType: 
  OrigDataType: 
T_5562: (in 0x0000 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5563: (in dx == 0x0000 : bool)
  Class: Eq_5563
  DataType: 
  OrigDataType: 
T_5564: (in bx_219 : word16)
  Class: Eq_5564
  DataType: 
  OrigDataType: 
T_5565: (in bx_223 : word16)
  Class: Eq_5565
  DataType: 
  OrigDataType: 
T_5566: (in fn0800_079D : ptr32)
  Class: Eq_1575
  DataType: 
  OrigDataType: 
T_5567: (in 0x0008 : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_5568: (in fn0800_0780 : ptr32)
  Class: Eq_593
  DataType: 
  OrigDataType: 
T_5569: (in 0x0005 : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_5570: (in out bx_219 : ptr16)
  Class: Eq_598
  DataType: 
  OrigDataType: 
T_5571: (in fn0800_0780(0x0005, dx, ds, out bx_219) : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5572: (in out bx_223 : ptr16)
  Class: Eq_1577
  DataType: 
  OrigDataType: 
T_5573: (in fn0800_079D(0x0008, fn0800_0780(0x0005, dx, ds, out bx_219), ds, out bx_223) : word16)
  Class: Eq_5573
  DataType: 
  OrigDataType: 
T_5574: (in 0x0386 : word16)
  Class: Eq_5574
  DataType: 
  OrigDataType: 
T_5575: (in Mem227[ds:0x0386:word16] : word16)
  Class: Eq_5487
  DataType: 
  OrigDataType: 
T_5576: (in 0x00 : byte)
  Class: Eq_5576
  DataType: 
  OrigDataType: 
T_5577: (in 0x0000 : word16)
  Class: Eq_5577
  DataType: 
  OrigDataType: 
T_5578: (in bx_113 + 0x0000 : word16)
  Class: Eq_5578
  DataType: 
  OrigDataType: 
T_5579: (in Mem117[ds:bx_113 + 0x0000:byte] : byte)
  Class: Eq_5576
  DataType: 
  OrigDataType: 
T_5580: (in bx_118 : word16)
  Class: Eq_5580
  DataType: 
  OrigDataType: 
T_5581: (in 0x0001 : word16)
  Class: Eq_5581
  DataType: 
  OrigDataType: 
T_5582: (in bx_113 + 0x0001 : word16)
  Class: Eq_5580
  DataType: 
  OrigDataType: 
T_5583: (in 0x0000 : word16)
  Class: Eq_5471
  DataType: 
  OrigDataType: 
T_5584: (in wArg06 == 0x0000 : bool)
  Class: Eq_5584
  DataType: 
  OrigDataType: 
T_5585: (in 0x00 : byte)
  Class: Eq_5585
  DataType: 
  OrigDataType: 
T_5586: (in 0x0000 : word16)
  Class: Eq_5586
  DataType: 
  OrigDataType: 
T_5587: (in bx_118 + 0x0000 : word16)
  Class: Eq_5587
  DataType: 
  OrigDataType: 
T_5588: (in Mem121[ds:bx_118 + 0x0000:byte] : byte)
  Class: Eq_5585
  DataType: 
  OrigDataType: 
T_5589: (in 0x0000 : word16)
  Class: Eq_5471
  DataType: 
  OrigDataType: 
T_5590: (in wArg06 == 0x0000 : bool)
  Class: Eq_5590
  DataType: 
  OrigDataType: 
T_5591: (in di_193 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5592: (in 0x0000 : word16)
  Class: Eq_5592
  DataType: 
  OrigDataType: 
T_5593: (in di_193 + 0x0000 : word16)
  Class: Eq_5593
  DataType: 
  OrigDataType: 
T_5594: (in Mem108[ds:di_193 + 0x0000:word16] : word16)
  Class: Eq_5594
  DataType: 
  OrigDataType: 
T_5595: (in 0x0000 : word16)
  Class: Eq_5594
  DataType: 
  OrigDataType: 
T_5596: (in Mem108[ds:di_193 + 0x0000:word16] != 0x0000 : bool)
  Class: Eq_5596
  DataType: 
  OrigDataType: 
T_5597: (in dx_127 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5598: (in 0x0000 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5599: (in 0x0000 : word16)
  Class: Eq_5599
  DataType: 
  OrigDataType: 
T_5600: (in ax + 0x0000 : word16)
  Class: Eq_5600
  DataType: 
  OrigDataType: 
T_5601: (in Mem121[ds:ax + 0x0000:word16] : word16)
  Class: Eq_5601
  DataType: 
  OrigDataType: 
T_5602: (in 0x0000 : word16)
  Class: Eq_5601
  DataType: 
  OrigDataType: 
T_5603: (in Mem121[ds:ax + 0x0000:word16] == 0x0000 : bool)
  Class: Eq_5603
  DataType: 
  OrigDataType: 
T_5604: (in fn0800_070B : ptr32)
  Class: Eq_469
  DataType: 
  OrigDataType: 
T_5605: (in 0x0003 : word16)
  Class: Eq_5605
  DataType: 
  OrigDataType: 
T_5606: (in bx_118 + 0x0003 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_5607: (in 0x0000 : word16)
  Class: Eq_5607
  DataType: 
  OrigDataType: 
T_5608: (in ax + 0x0000 : word16)
  Class: Eq_5608
  DataType: 
  OrigDataType: 
T_5609: (in Mem121[ds:ax + 0x0000:word16] : word16)
  Class: Eq_83
  DataType: 
  OrigDataType: 
T_5610: (in fn0800_070B(bx_118 + 0x0003, Mem121[ds:ax + 0x0000:word16], ds) : void)
  Class: Eq_5610
  DataType: 
  OrigDataType: 
T_5611: (in fn0800_070B : ptr32)
  Class: Eq_469
  DataType: 
  OrigDataType: 
T_5612: (in 0x0003 : word16)
  Class: Eq_5612
  DataType: 
  OrigDataType: 
T_5613: (in bx_118 + 0x0003 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_5614: (in 0x0000 : word16)
  Class: Eq_5614
  DataType: 
  OrigDataType: 
T_5615: (in ax + 0x0000 : word16)
  Class: Eq_5615
  DataType: 
  OrigDataType: 
T_5616: (in Mem121[ds:ax + 0x0000:word16] : word16)
  Class: Eq_83
  DataType: 
  OrigDataType: 
T_5617: (in fn0800_070B(bx_118 + 0x0003, Mem121[ds:ax + 0x0000:word16], ds) : void)
  Class: Eq_5617
  DataType: 
  OrigDataType: 
T_5618: (in fn0800_1BD5 : ptr32)
  Class: Eq_5618
  DataType: 
  OrigDataType: 
T_5619: (in signature of fn0800_1BD5 : void)
  Class: Eq_5618
  DataType: 
  OrigDataType: 
T_5620: (in 0x0000 : word16)
  Class: Eq_5620
  DataType: 
  OrigDataType: 
T_5621: (in di_193 + 0x0000 : word16)
  Class: Eq_5621
  DataType: 
  OrigDataType: 
T_5622: (in Mem108[ds:di_193 + 0x0000:word16] : word16)
  Class: Eq_5444
  DataType: 
  OrigDataType: 
T_5623: (in fn0800_1BD5(bx_113, Mem108[ds:di_193 + 0x0000:word16], ds) : void)
  Class: Eq_5623
  DataType: 
  OrigDataType: 
T_5624: (in 0x0001 : word16)
  Class: Eq_5624
  DataType: 
  OrigDataType: 
T_5625: (in di_193 + 0x0001 : word16)
  Class: Eq_5625
  DataType: 
  OrigDataType: 
T_5626: (in 0x0001 : word16)
  Class: Eq_5626
  DataType: 
  OrigDataType: 
T_5627: (in di_193 + 0x0001 + 0x0001 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5628: (in 0x0001 : word16)
  Class: Eq_5628
  DataType: 
  OrigDataType: 
T_5629: (in bx_113 + 0x0001 : word16)
  Class: Eq_2619
  DataType: 
  OrigDataType: 
T_5630: (in 0x007E : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5631: (in dx_127 <=u 0x007E : bool)
  Class: Eq_5631
  DataType: 
  OrigDataType: 
T_5632: (in 0x007E : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5633: (in dx_127 <=u 0x007E : bool)
  Class: Eq_5633
  DataType: 
  OrigDataType: 
T_5634: (in si_168 : word16)
  Class: Eq_5634
  DataType: 
  OrigDataType: 
T_5635: (in 0x0002 : word16)
  Class: Eq_5635
  DataType: 
  OrigDataType: 
T_5636: (in ax + 0x0002 : word16)
  Class: Eq_5634
  DataType: 
  OrigDataType: 
T_5637: (in ax_173 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_5638: (in 0x0000 : word16)
  Class: Eq_5638
  DataType: 
  OrigDataType: 
T_5639: (in si_168 + 0x0000 : word16)
  Class: Eq_5639
  DataType: 
  OrigDataType: 
T_5640: (in Mem121[ds:si_168 + 0x0000:word16] : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_5641: (in 0x0000 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_5642: (in ax_173 != 0x0000 : bool)
  Class: Eq_5642
  DataType: 
  OrigDataType: 
T_5643: (in 0x0090 : word16)
  Class: Eq_5643
  DataType: 
  OrigDataType: 
T_5644: (in wArg04 : word16)
  Class: Eq_5644
  DataType: 
  OrigDataType: 
T_5645: (in 0x0000 : word16)
  Class: Eq_5645
  DataType: 
  OrigDataType: 
T_5646: (in wArg04 + 0x0000 : word16)
  Class: Eq_5646
  DataType: 
  OrigDataType: 
T_5647: (in Mem164[ds:wArg04 + 0x0000:word16] : word16)
  Class: Eq_5643
  DataType: 
  OrigDataType: 
T_5648: (in 0x04 : byte)
  Class: Eq_5648
  DataType: 
  OrigDataType: 
T_5649: (in v21_46 >>u 0x04 : word16)
  Class: Eq_5486
  DataType: 
  OrigDataType: 
T_5650: (in bx_141 : word16)
  Class: Eq_5650
  DataType: 
  OrigDataType: 
T_5651: (in bx_146 : word16)
  Class: Eq_5651
  DataType: 
  OrigDataType: 
T_5652: (in dx_147 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5653: (in fn0800_079D : ptr32)
  Class: Eq_1575
  DataType: 
  OrigDataType: 
T_5654: (in 0x000A : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_5655: (in fn0800_0780 : ptr32)
  Class: Eq_593
  DataType: 
  OrigDataType: 
T_5656: (in 0x0002 : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_5657: (in out bx_141 : ptr16)
  Class: Eq_598
  DataType: 
  OrigDataType: 
T_5658: (in fn0800_0780(0x0002, dx_127, ds, out bx_141) : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5659: (in out bx_146 : ptr16)
  Class: Eq_1577
  DataType: 
  OrigDataType: 
T_5660: (in fn0800_079D(0x000A, fn0800_0780(0x0002, dx_127, ds, out bx_141), ds, out bx_146) : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5661: (in fn0800_13F7 : ptr32)
  Class: Eq_2701
  DataType: 
  OrigDataType: 
T_5662: (in 0x0000 : word16)
  Class: Eq_5662
  DataType: 
  OrigDataType: 
T_5663: (in bx_146 + 0x0000 : word16)
  Class: Eq_5663
  DataType: 
  OrigDataType: 
T_5664: (in Mem121[ds:bx_146 + 0x0000:word16] : word16)
  Class: Eq_2703
  DataType: 
  OrigDataType: 
T_5665: (in fn0800_13F7(Mem121[ds:bx_146 + 0x0000:word16], ds) : void)
  Class: Eq_5665
  DataType: 
  OrigDataType: 
T_5666: (in bx_151 : word16)
  Class: Eq_5666
  DataType: 
  OrigDataType: 
T_5667: (in bx_156 : word16)
  Class: Eq_5667
  DataType: 
  OrigDataType: 
T_5668: (in fn0800_079D : ptr32)
  Class: Eq_1575
  DataType: 
  OrigDataType: 
T_5669: (in 0x000A : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_5670: (in fn0800_0780 : ptr32)
  Class: Eq_593
  DataType: 
  OrigDataType: 
T_5671: (in 0x0002 : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_5672: (in out bx_151 : ptr16)
  Class: Eq_598
  DataType: 
  OrigDataType: 
T_5673: (in fn0800_0780(0x0002, dx_147, ds, out bx_151) : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5674: (in out bx_156 : ptr16)
  Class: Eq_1577
  DataType: 
  OrigDataType: 
T_5675: (in fn0800_079D(0x000A, fn0800_0780(0x0002, dx_147, ds, out bx_151), ds, out bx_156) : word16)
  Class: Eq_5675
  DataType: 
  OrigDataType: 
T_5676: (in fn0800_13F7 : ptr32)
  Class: Eq_2701
  DataType: 
  OrigDataType: 
T_5677: (in 0x0000 : word16)
  Class: Eq_5677
  DataType: 
  OrigDataType: 
T_5678: (in bx_156 + 0x0000 : word16)
  Class: Eq_5678
  DataType: 
  OrigDataType: 
T_5679: (in Mem121[ds:bx_156 + 0x0000:word16] : word16)
  Class: Eq_2703
  DataType: 
  OrigDataType: 
T_5680: (in fn0800_13F7(Mem121[ds:bx_156 + 0x0000:word16], ds) : void)
  Class: Eq_5680
  DataType: 
  OrigDataType: 
T_5681: (in 0xFFFF : word16)
  Class: Eq_5486
  DataType: 
  OrigDataType: 
T_5682: (in 0x0000 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5683: (in dx_127 == 0x0000 : bool)
  Class: Eq_5683
  DataType: 
  OrigDataType: 
T_5684: (in 0x0001 : word16)
  Class: Eq_5684
  DataType: 
  OrigDataType: 
T_5685: (in si_168 + 0x0001 : word16)
  Class: Eq_5685
  DataType: 
  OrigDataType: 
T_5686: (in 0x0001 : word16)
  Class: Eq_5686
  DataType: 
  OrigDataType: 
T_5687: (in si_168 + 0x0001 + 0x0001 : word16)
  Class: Eq_5634
  DataType: 
  OrigDataType: 
T_5688: (in fn0800_06F2 : ptr32)
  Class: Eq_489
  DataType: 
  OrigDataType: 
T_5689: (in fn0800_06F2(ax_173, ds) : word16)
  Class: Eq_5689
  DataType: 
  OrigDataType: 
T_5690: (in dx_127 + fn0800_06F2(ax_173, ds) : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5691: (in 0x0001 : word16)
  Class: Eq_5691
  DataType: 
  OrigDataType: 
T_5692: (in dx_127 + 0x0001 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_5693: (in bx_25 : word16)
  Class: Eq_2619
  DataType: 
  OrigDataType: 
T_5694: (in 0x0000 : word16)
  Class: Eq_2617
  DataType: 
  OrigDataType: 
T_5695: (in cx != 0x0000 : bool)
  Class: Eq_5695
  DataType: 
  OrigDataType: 
T_5696: (in 0x0000 : word16)
  Class: Eq_5696
  DataType: 
  OrigDataType: 
T_5697: (in dx + 0x0000 : word16)
  Class: Eq_5697
  DataType: 
  OrigDataType: 
T_5698: (in Mem0[ds:dx + 0x0000:word16] : word16)
  Class: Eq_5698
  DataType: 
  OrigDataType: 
T_5699: (in 0x0000 : word16)
  Class: Eq_5698
  DataType: 
  OrigDataType: 
T_5700: (in Mem0[ds:dx + 0x0000:word16] == 0x0000 : bool)
  Class: Eq_5700
  DataType: 
  OrigDataType: 
T_5701: (in 0x0001 : word16)
  Class: Eq_5701
  DataType: 
  OrigDataType: 
T_5702: (in bx + 0x0001 : word16)
  Class: Eq_2619
  DataType: 
  OrigDataType: 
T_5703: (in bx + 0x0001 : word16)
  Class: Eq_5703
  DataType: 
  OrigDataType: 
T_5704: (in (byte) (bx + 0x0001) : byte)
  Class: Eq_5704
  DataType: 
  OrigDataType: 
T_5705: (in bl : byte)
  Class: Eq_5704
  DataType: 
  OrigDataType: 
T_5706: (in 0x0000 : word16)
  Class: Eq_2617
  DataType: 
  OrigDataType: 
T_5707: (in cx == 0x0000 : bool)
  Class: Eq_5707
  DataType: 
  OrigDataType: 
T_5708: (in si_64 : word16)
  Class: Eq_5708
  DataType: 
  OrigDataType: 
T_5709: (in 0x0002 : word16)
  Class: Eq_5709
  DataType: 
  OrigDataType: 
T_5710: (in dx + 0x0002 : word16)
  Class: Eq_5708
  DataType: 
  OrigDataType: 
T_5711: (in dx + 0x0002 : word16)
  Class: Eq_5711
  DataType: 
  OrigDataType: 
T_5712: (in Mem0[ds:dx + 0x0002:word16] : word16)
  Class: Eq_5712
  DataType: 
  OrigDataType: 
T_5713: (in 0x0000 : word16)
  Class: Eq_5712
  DataType: 
  OrigDataType: 
T_5714: (in Mem0[ds:dx + 0x0002:word16] == 0x0000 : bool)
  Class: Eq_5714
  DataType: 
  OrigDataType: 
T_5715: (in fn0800_1BD5 : ptr32)
  Class: Eq_5618
  DataType: 
  OrigDataType: 
T_5716: (in 0x0000 : word16)
  Class: Eq_5716
  DataType: 
  OrigDataType: 
T_5717: (in si_64 + 0x0000 : word16)
  Class: Eq_5717
  DataType: 
  OrigDataType: 
T_5718: (in Mem0[ds:si_64 + 0x0000:word16] : word16)
  Class: Eq_5444
  DataType: 
  OrigDataType: 
T_5719: (in fn0800_1BD5(bx_25, Mem0[ds:si_64 + 0x0000:word16], ds) : void)
  Class: Eq_5719
  DataType: 
  OrigDataType: 
T_5720: (in si_72 : word16)
  Class: Eq_5720
  DataType: 
  OrigDataType: 
T_5721: (in 0x0001 : word16)
  Class: Eq_5721
  DataType: 
  OrigDataType: 
T_5722: (in si_64 + 0x0001 : word16)
  Class: Eq_5720
  DataType: 
  OrigDataType: 
T_5723: (in 0x0001 : word16)
  Class: Eq_5723
  DataType: 
  OrigDataType: 
T_5724: (in si_72 + 0x0001 : word16)
  Class: Eq_5708
  DataType: 
  OrigDataType: 
T_5725: (in (byte) bx_25 : byte)
  Class: Eq_5704
  DataType: 
  OrigDataType: 
T_5726: (in si_72 + 0x0001 : word16)
  Class: Eq_5726
  DataType: 
  OrigDataType: 
T_5727: (in Mem0[ds:si_72 + 0x0001:word16] : word16)
  Class: Eq_5727
  DataType: 
  OrigDataType: 
T_5728: (in 0x0000 : word16)
  Class: Eq_5727
  DataType: 
  OrigDataType: 
T_5729: (in Mem0[ds:si_72 + 0x0001:word16] == 0x0000 : bool)
  Class: Eq_5729
  DataType: 
  OrigDataType: 
T_5730: (in 0x20 : byte)
  Class: Eq_5730
  DataType: 
  OrigDataType: 
T_5731: (in 0x0000 : word16)
  Class: Eq_5731
  DataType: 
  OrigDataType: 
T_5732: (in bx_25 + 0x0000 : word16)
  Class: Eq_5732
  DataType: 
  OrigDataType: 
T_5733: (in Mem80[ds:bx_25 + 0x0000:byte] : byte)
  Class: Eq_5730
  DataType: 
  OrigDataType: 
T_5734: (in 0x0001 : word16)
  Class: Eq_5734
  DataType: 
  OrigDataType: 
T_5735: (in bx_25 + 0x0001 : word16)
  Class: Eq_2619
  DataType: 
  OrigDataType: 
T_5736: (in 0x0D : byte)
  Class: Eq_5736
  DataType: 
  OrigDataType: 
T_5737: (in 0x0000 : word16)
  Class: Eq_5737
  DataType: 
  OrigDataType: 
T_5738: (in bx_25 + 0x0000 : word16)
  Class: Eq_5738
  DataType: 
  OrigDataType: 
T_5739: (in Mem55[ds:bx_25 + 0x0000:byte] : byte)
  Class: Eq_5736
  DataType: 
  OrigDataType: 
T_5740: (in bLoc08 : byte)
  Class: Eq_5740
  DataType: 
  OrigDataType: 
T_5741: (in bl - bLoc08 : byte)
  Class: Eq_5741
  DataType: 
  OrigDataType: 
T_5742: (in 0x01 : byte)
  Class: Eq_5742
  DataType: 
  OrigDataType: 
T_5743: (in bl - bLoc08 - 0x01 : byte)
  Class: Eq_5743
  DataType: 
  OrigDataType: 
T_5744: (in 0x0000 : word16)
  Class: Eq_5744
  DataType: 
  OrigDataType: 
T_5745: (in bx + 0x0000 : word16)
  Class: Eq_5745
  DataType: 
  OrigDataType: 
T_5746: (in Mem62[ds:bx + 0x0000:byte] : byte)
  Class: Eq_5743
  DataType: 
  OrigDataType: 
T_5747: (in 0x00 : byte)
  Class: Eq_5747
  DataType: 
  OrigDataType: 
T_5748: (in 0x0000 : word16)
  Class: Eq_5748
  DataType: 
  OrigDataType: 
T_5749: (in bx_25 + 0x0000 : word16)
  Class: Eq_5749
  DataType: 
  OrigDataType: 
T_5750: (in Mem52[ds:bx_25 + 0x0000:byte] : byte)
  Class: Eq_5747
  DataType: 
  OrigDataType: 
T_5751: (in ax_9 : word16)
  Class: Eq_5751
  DataType: 
  OrigDataType: 
T_5752: (in ss : selector)
  Class: Eq_5752
  DataType: 
  OrigDataType: 
T_5753: (in 0x0226 : word16)
  Class: Eq_5753
  DataType: 
  OrigDataType: 
T_5754: (in Mem0[ss:0x0226:word16] : word16)
  Class: Eq_5751
  DataType: 
  OrigDataType: 
T_5755: (in di_14 : word16)
  Class: Eq_5755
  DataType: 
  OrigDataType: 
T_5756: (in 0x005C : word16)
  Class: Eq_5755
  DataType: 
  OrigDataType: 
T_5757: (in cx_16 : word16)
  Class: Eq_5757
  DataType: 
  OrigDataType: 
T_5758: (in 0x0024 : word16)
  Class: Eq_5757
  DataType: 
  OrigDataType: 
T_5759: (in cx_31 : word16)
  Class: Eq_5759
  DataType: 
  OrigDataType: 
T_5760: (in wArg06 : word16)
  Class: Eq_5760
  DataType: 
  OrigDataType: 
T_5761: (in 0x0000 : word16)
  Class: Eq_5761
  DataType: 
  OrigDataType: 
T_5762: (in wArg06 + 0x0000 : word16)
  Class: Eq_5762
  DataType: 
  OrigDataType: 
T_5763: (in Mem0[ss:wArg06 + 0x0000:byte] : byte)
  Class: Eq_5763
  DataType: 
  OrigDataType: 
T_5764: (in DPB(cx_16, Mem0[ss:wArg06 + 0x0000:byte], 0, 8) : word16)
  Class: Eq_5759
  DataType: 
  OrigDataType: 
T_5765: (in si_28 : word16)
  Class: Eq_5760
  DataType: 
  OrigDataType: 
T_5766: (in cx_204 : word16)
  Class: Eq_5766
  DataType: 
  OrigDataType: 
T_5767: (in 0x0002 : word16)
  Class: Eq_5767
  DataType: 
  OrigDataType: 
T_5768: (in cx_31 + 0x0002 : word16)
  Class: Eq_5766
  DataType: 
  OrigDataType: 
T_5769: (in 0xFF82 : word16)
  Class: Eq_5759
  DataType: 
  OrigDataType: 
T_5770: (in cx_31 <=u 0xFF82 : bool)
  Class: Eq_5770
  DataType: 
  OrigDataType: 
T_5771: (in 0x00 : byte)
  Class: Eq_5771
  DataType: 
  OrigDataType: 
T_5772: (in 0x0000 : word16)
  Class: Eq_5772
  DataType: 
  OrigDataType: 
T_5773: (in di_14 + 0x0000 : word16)
  Class: Eq_5773
  DataType: 
  OrigDataType: 
T_5774: (in Mem22[ax_9:di_14 + 0x0000:byte] : byte)
  Class: Eq_5771
  DataType: 
  OrigDataType: 
T_5775: (in 0x0001 : word16)
  Class: Eq_5775
  DataType: 
  OrigDataType: 
T_5776: (in di_14 + 0x0001 : word16)
  Class: Eq_5755
  DataType: 
  OrigDataType: 
T_5777: (in 0x0001 : word16)
  Class: Eq_5777
  DataType: 
  OrigDataType: 
T_5778: (in cx_16 - 0x0001 : word16)
  Class: Eq_5757
  DataType: 
  OrigDataType: 
T_5779: (in 0x0000 : word16)
  Class: Eq_5757
  DataType: 
  OrigDataType: 
T_5780: (in cx_16 == 0x0000 : bool)
  Class: Eq_5780
  DataType: 
  OrigDataType: 
T_5781: (in 0x0000 : word16)
  Class: Eq_5766
  DataType: 
  OrigDataType: 
T_5782: (in cx_204 == 0x0000 : bool)
  Class: Eq_5782
  DataType: 
  OrigDataType: 
T_5783: (in 0x0080 : word16)
  Class: Eq_5766
  DataType: 
  OrigDataType: 
T_5784: (in msdos_set_DTA : ptr32)
  Class: Eq_5784
  DataType: 
  OrigDataType: 
T_5785: (in signature of msdos_set_DTA : void)
  Class: Eq_5784
  DataType: 
  OrigDataType: 
T_5786: (in ds : selector)
  Class: Eq_5751
  DataType: 
  OrigDataType: 
T_5787: (in dx : word16)
  Class: Eq_5787
  DataType: 
  OrigDataType: 
T_5788: (in 0x0080 : word16)
  Class: Eq_5787
  DataType: 
  OrigDataType: 
T_5789: (in msdos_set_DTA(ax_9, 0x0080) : void)
  Class: Eq_5789
  DataType: 
  OrigDataType: 
T_5790: (in ds_si_59 : word32)
  Class: Eq_5790
  DataType: 
  OrigDataType: 
T_5791: (in 0x0081 : word16)
  Class: Eq_5791
  DataType: 
  OrigDataType: 
T_5792: (in SEQ(ax_9, 0x0081) : word32)
  Class: Eq_5790
  DataType: 
  OrigDataType: 
T_5793: (in msdos_parse_filename_into_fcb : ptr32)
  Class: Eq_5793
  DataType: 
  OrigDataType: 
T_5794: (in signature of msdos_parse_filename_into_fcb : void)
  Class: Eq_5793
  DataType: 
  OrigDataType: 
T_5795: (in al : byte)
  Class: Eq_5795
  DataType: 
  OrigDataType: 
T_5796: (in ds_si : word32)
  Class: Eq_5790
  DataType: 
  OrigDataType: 
T_5797: (in es_di : word32)
  Class: Eq_5797
  DataType: 
  OrigDataType: 
T_5798: (in 0x01 : byte)
  Class: Eq_5795
  DataType: 
  OrigDataType: 
T_5799: (in 0x005C : word16)
  Class: Eq_5799
  DataType: 
  OrigDataType: 
T_5800: (in SEQ(ax_9, 0x005C) : word32)
  Class: Eq_5797
  DataType: 
  OrigDataType: 
T_5801: (in msdos_parse_filename_into_fcb(0x01, ds_si_59, SEQ(ax_9, 0x005C), ds_si_59) : byte)
  Class: Eq_5801
  DataType: 
  OrigDataType: 
T_5802: (in 0xFF : byte)
  Class: Eq_5801
  DataType: 
  OrigDataType: 
T_5803: (in msdos_parse_filename_into_fcb(0x01, ds_si_59, SEQ(ax_9, 0x005C), ds_si_59) == 0xFF : bool)
  Class: Eq_5803
  DataType: 
  OrigDataType: 
T_5804: (in 0x0000 : word16)
  Class: Eq_5804
  DataType: 
  OrigDataType: 
T_5805: (in si_28 + 0x0000 : word16)
  Class: Eq_5805
  DataType: 
  OrigDataType: 
T_5806: (in Mem0[ss:si_28 + 0x0000:byte] : byte)
  Class: Eq_5806
  DataType: 
  OrigDataType: 
T_5807: (in 0x0000 : word16)
  Class: Eq_5807
  DataType: 
  OrigDataType: 
T_5808: (in di_14 + 0x0000 : word16)
  Class: Eq_5808
  DataType: 
  OrigDataType: 
T_5809: (in Mem44[ax_9:di_14 + 0x0000:byte] : byte)
  Class: Eq_5806
  DataType: 
  OrigDataType: 
T_5810: (in 0x0001 : word16)
  Class: Eq_5810
  DataType: 
  OrigDataType: 
T_5811: (in si_28 + 0x0001 : word16)
  Class: Eq_5760
  DataType: 
  OrigDataType: 
T_5812: (in 0x0001 : word16)
  Class: Eq_5812
  DataType: 
  OrigDataType: 
T_5813: (in di_14 + 0x0001 : word16)
  Class: Eq_5755
  DataType: 
  OrigDataType: 
T_5814: (in 0x0001 : word16)
  Class: Eq_5814
  DataType: 
  OrigDataType: 
T_5815: (in cx_204 - 0x0001 : word16)
  Class: Eq_5766
  DataType: 
  OrigDataType: 
T_5816: (in msdos_parse_filename_into_fcb : ptr32)
  Class: Eq_5793
  DataType: 
  OrigDataType: 
T_5817: (in 0x01 : byte)
  Class: Eq_5795
  DataType: 
  OrigDataType: 
T_5818: (in 0x006C : word16)
  Class: Eq_5818
  DataType: 
  OrigDataType: 
T_5819: (in SEQ(ax_9, 0x006C) : word32)
  Class: Eq_5797
  DataType: 
  OrigDataType: 
T_5820: (in msdos_parse_filename_into_fcb(0x01, ds_si_59, SEQ(ax_9, 0x006C), ds_si_59) : byte)
  Class: Eq_5820
  DataType: 
  OrigDataType: 
T_5821: (in 0xFF : byte)
  Class: Eq_5820
  DataType: 
  OrigDataType: 
T_5822: (in msdos_parse_filename_into_fcb(0x01, ds_si_59, SEQ(ax_9, 0x006C), ds_si_59) == 0xFF : bool)
  Class: Eq_5822
  DataType: 
  OrigDataType: 
T_5823: (in di_194 : word16)
  Class: Eq_5823
  DataType: 
  OrigDataType: 
T_5824: (in wArg04 : word16)
  Class: Eq_5823
  DataType: 
  OrigDataType: 
T_5825: (in cx_196 : word16)
  Class: Eq_5825
  DataType: 
  OrigDataType: 
T_5826: (in 0x0000 : word16)
  Class: Eq_5826
  DataType: 
  OrigDataType: 
T_5827: (in ~0x0000 : word16)
  Class: Eq_5825
  DataType: 
  OrigDataType: 
T_5828: (in cx_118 : word16)
  Class: Eq_5828
  DataType: 
  OrigDataType: 
T_5829: (in si_117 : word16)
  Class: Eq_5829
  DataType: 
  OrigDataType: 
T_5830: (in cx_100 : word16)
  Class: Eq_5830
  DataType: 
  OrigDataType: 
T_5831: (in ~cx_196 : word16)
  Class: Eq_5830
  DataType: 
  OrigDataType: 
T_5832: (in 0x0394 : word16)
  Class: Eq_5832
  DataType: 
  OrigDataType: 
T_5833: (in Mem101[ss:0x0394:word16] : word16)
  Class: Eq_5830
  DataType: 
  OrigDataType: 
T_5834: (in ax_108 : word16)
  Class: Eq_5834
  DataType: 
  OrigDataType: 
T_5835: (in 0x0226 : word16)
  Class: Eq_5835
  DataType: 
  OrigDataType: 
T_5836: (in Mem101[ss:0x0226:selector] : selector)
  Class: Eq_5836
  DataType: 
  OrigDataType: 
T_5837: (in 0x0002 : word16)
  Class: Eq_5837
  DataType: 
  OrigDataType: 
T_5838: (in Mem101[Mem101[ss:0x0226:selector]:0x0002:word16] : word16)
  Class: Eq_5838
  DataType: 
  OrigDataType: 
T_5839: (in 0x000F : word16)
  Class: Eq_5839
  DataType: 
  OrigDataType: 
T_5840: (in cx_100 + 0x000F : word16)
  Class: Eq_5840
  DataType: 
  OrigDataType: 
T_5841: (in 0x04 : byte)
  Class: Eq_5841
  DataType: 
  OrigDataType: 
T_5842: (in cx_100 + 0x000F >>u 0x04 : word16)
  Class: Eq_5842
  DataType: 
  OrigDataType: 
T_5843: (in Mem101[Mem101[ss:0x0226:selector]:0x0002:word16] - (cx_100 + 0x000F >>u 0x04) : word16)
  Class: Eq_5834
  DataType: 
  OrigDataType: 
T_5844: (in 0x0013 : word16)
  Class: Eq_5844
  DataType: 
  OrigDataType: 
T_5845: (in ax_108 - 0x0013 : word16)
  Class: Eq_5845
  DataType: 
  OrigDataType: 
T_5846: (in 0x0392 : word16)
  Class: Eq_5846
  DataType: 
  OrigDataType: 
T_5847: (in Mem111[ss:0x0392:word16] : word16)
  Class: Eq_5845
  DataType: 
  OrigDataType: 
T_5848: (in di_112 : word16)
  Class: Eq_5848
  DataType: 
  OrigDataType: 
T_5849: (in 0x0000 : word16)
  Class: Eq_5848
  DataType: 
  OrigDataType: 
T_5850: (in wArg08 : word16)
  Class: Eq_5850
  DataType: 
  OrigDataType: 
T_5851: (in 0x0000 : word16)
  Class: Eq_5850
  DataType: 
  OrigDataType: 
T_5852: (in wArg08 == 0x0000 : bool)
  Class: Eq_5852
  DataType: 
  OrigDataType: 
T_5853: (in di_206 : word16)
  Class: Eq_5823
  DataType: 
  OrigDataType: 
T_5854: (in 0x0001 : word16)
  Class: Eq_5854
  DataType: 
  OrigDataType: 
T_5855: (in di_206 + 0x0001 : word16)
  Class: Eq_5823
  DataType: 
  OrigDataType: 
T_5856: (in 0x0001 : word16)
  Class: Eq_5856
  DataType: 
  OrigDataType: 
T_5857: (in cx_196 - 0x0001 : word16)
  Class: Eq_5825
  DataType: 
  OrigDataType: 
T_5858: (in 0x00 : byte)
  Class: Eq_5858
  DataType: 
  OrigDataType: 
T_5859: (in 0x0000 : word16)
  Class: Eq_5859
  DataType: 
  OrigDataType: 
T_5860: (in di_206 + 0x0000 : word16)
  Class: Eq_5860
  DataType: 
  OrigDataType: 
T_5861: (in Mem0[ss:di_206 + 0x0000:byte] : byte)
  Class: Eq_5858
  DataType: 
  OrigDataType: 
T_5862: (in 0x00 != Mem0[ss:di_206 + 0x0000:byte] : bool)
  Class: Eq_5862
  DataType: 
  OrigDataType: 
T_5863: (in 0x0000 : word16)
  Class: Eq_5825
  DataType: 
  OrigDataType: 
T_5864: (in cx_196 == 0x0000 : bool)
  Class: Eq_5864
  DataType: 
  OrigDataType: 
T_5865: (in 0x1DFD : word16)
  Class: Eq_5829
  DataType: 
  OrigDataType: 
T_5866: (in 0x00A1 : word16)
  Class: Eq_5828
  DataType: 
  OrigDataType: 
T_5867: (in 0x1D6A : word16)
  Class: Eq_5829
  DataType: 
  OrigDataType: 
T_5868: (in 0x0093 : word16)
  Class: Eq_5828
  DataType: 
  OrigDataType: 
T_5869: (in di_142 : word16)
  Class: Eq_5869
  DataType: 
  OrigDataType: 
T_5870: (in 0x0130 : word16)
  Class: Eq_5869
  DataType: 
  OrigDataType: 
T_5871: (in si_144 : word16)
  Class: Eq_5823
  DataType: 
  OrigDataType: 
T_5872: (in cx_146 : word16)
  Class: Eq_5872
  DataType: 
  OrigDataType: 
T_5873: (in 0x0394 : word16)
  Class: Eq_5873
  DataType: 
  OrigDataType: 
T_5874: (in Mem111[ss:0x0394:word16] : word16)
  Class: Eq_5872
  DataType: 
  OrigDataType: 
T_5875: (in cs : selector)
  Class: Eq_5875
  DataType: 
  OrigDataType: 
T_5876: (in 0x0000 : word16)
  Class: Eq_5876
  DataType: 
  OrigDataType: 
T_5877: (in si_117 + 0x0000 : word16)
  Class: Eq_5877
  DataType: 
  OrigDataType: 
T_5878: (in Mem111[cs:si_117 + 0x0000:byte] : byte)
  Class: Eq_5878
  DataType: 
  OrigDataType: 
T_5879: (in ax_108 - 0x0013 : word16)
  Class: Eq_5879
  DataType: 
  OrigDataType: 
T_5880: (in 0x0000 : word16)
  Class: Eq_5880
  DataType: 
  OrigDataType: 
T_5881: (in di_112 + 0x0000 : word16)
  Class: Eq_5881
  DataType: 
  OrigDataType: 
T_5882: (in Mem133[ax_108 - 0x0013:di_112 + 0x0000:byte] : byte)
  Class: Eq_5878
  DataType: 
  OrigDataType: 
T_5883: (in 0x0001 : word16)
  Class: Eq_5883
  DataType: 
  OrigDataType: 
T_5884: (in si_117 + 0x0001 : word16)
  Class: Eq_5829
  DataType: 
  OrigDataType: 
T_5885: (in 0x0001 : word16)
  Class: Eq_5885
  DataType: 
  OrigDataType: 
T_5886: (in di_112 + 0x0001 : word16)
  Class: Eq_5848
  DataType: 
  OrigDataType: 
T_5887: (in 0x0001 : word16)
  Class: Eq_5887
  DataType: 
  OrigDataType: 
T_5888: (in cx_118 - 0x0001 : word16)
  Class: Eq_5828
  DataType: 
  OrigDataType: 
T_5889: (in 0x0000 : word16)
  Class: Eq_5828
  DataType: 
  OrigDataType: 
T_5890: (in cx_118 == 0x0000 : bool)
  Class: Eq_5890
  DataType: 
  OrigDataType: 
T_5891: (in cx_162 : word16)
  Class: Eq_5891
  DataType: 
  OrigDataType: 
T_5892: (in 0x0226 : word16)
  Class: Eq_5892
  DataType: 
  OrigDataType: 
T_5893: (in Mem111[ss:0x0226:word16] : word16)
  Class: Eq_5891
  DataType: 
  OrigDataType: 
T_5894: (in 0x0000 : word16)
  Class: Eq_5850
  DataType: 
  OrigDataType: 
T_5895: (in wArg08 == 0x0000 : bool)
  Class: Eq_5895
  DataType: 
  OrigDataType: 
T_5896: (in 0x0000 : word16)
  Class: Eq_5896
  DataType: 
  OrigDataType: 
T_5897: (in si_144 + 0x0000 : word16)
  Class: Eq_5897
  DataType: 
  OrigDataType: 
T_5898: (in Mem111[ss:si_144 + 0x0000:byte] : byte)
  Class: Eq_5898
  DataType: 
  OrigDataType: 
T_5899: (in ax_108 - 0x0013 : word16)
  Class: Eq_5899
  DataType: 
  OrigDataType: 
T_5900: (in 0x0000 : word16)
  Class: Eq_5900
  DataType: 
  OrigDataType: 
T_5901: (in di_142 + 0x0000 : word16)
  Class: Eq_5901
  DataType: 
  OrigDataType: 
T_5902: (in Mem155[ax_108 - 0x0013:di_142 + 0x0000:byte] : byte)
  Class: Eq_5898
  DataType: 
  OrigDataType: 
T_5903: (in 0x0001 : word16)
  Class: Eq_5903
  DataType: 
  OrigDataType: 
T_5904: (in si_144 + 0x0001 : word16)
  Class: Eq_5823
  DataType: 
  OrigDataType: 
T_5905: (in 0x0001 : word16)
  Class: Eq_5905
  DataType: 
  OrigDataType: 
T_5906: (in di_142 + 0x0001 : word16)
  Class: Eq_5869
  DataType: 
  OrigDataType: 
T_5907: (in 0x0001 : word16)
  Class: Eq_5907
  DataType: 
  OrigDataType: 
T_5908: (in cx_146 - 0x0001 : word16)
  Class: Eq_5872
  DataType: 
  OrigDataType: 
T_5909: (in 0x0000 : word16)
  Class: Eq_5872
  DataType: 
  OrigDataType: 
T_5910: (in cx_146 == 0x0000 : bool)
  Class: Eq_5910
  DataType: 
  OrigDataType: 
T_5911: (in wArg0A : word16)
  Class: Eq_5911
  DataType: 
  OrigDataType: 
T_5912: (in 0x0010 : word16)
  Class: Eq_5912
  DataType: 
  OrigDataType: 
T_5913: (in cx_162 + 0x0010 : word16)
  Class: Eq_5913
  DataType: 
  OrigDataType: 
T_5914: (in wArg0A + (cx_162 + 0x0010) : word16)
  Class: Eq_5914
  DataType: 
  OrigDataType: 
T_5915: (in ax_108 - 0x0013 : word16)
  Class: Eq_5915
  DataType: 
  OrigDataType: 
T_5916: (in 0x008B : word16)
  Class: Eq_5916
  DataType: 
  OrigDataType: 
T_5917: (in Mem172[ax_108 - 0x0013:0x008B:word16] : word16)
  Class: Eq_5914
  DataType: 
  OrigDataType: 
T_5918: (in wArg0C : word16)
  Class: Eq_5918
  DataType: 
  OrigDataType: 
T_5919: (in ax_108 - 0x0013 : word16)
  Class: Eq_5919
  DataType: 
  OrigDataType: 
T_5920: (in 0x008D : word16)
  Class: Eq_5920
  DataType: 
  OrigDataType: 
T_5921: (in Mem175[ax_108 - 0x0013:0x008D:word16] : word16)
  Class: Eq_5918
  DataType: 
  OrigDataType: 
T_5922: (in wArg0E : word16)
  Class: Eq_5922
  DataType: 
  OrigDataType: 
T_5923: (in cx_162 + 0x0010 : word16)
  Class: Eq_5923
  DataType: 
  OrigDataType: 
T_5924: (in wArg0E + (cx_162 + 0x0010) : word16)
  Class: Eq_5924
  DataType: 
  OrigDataType: 
T_5925: (in ax_108 - 0x0013 : word16)
  Class: Eq_5925
  DataType: 
  OrigDataType: 
T_5926: (in 0x008F : word16)
  Class: Eq_5926
  DataType: 
  OrigDataType: 
T_5927: (in Mem180[ax_108 - 0x0013:0x008F:word16] : word16)
  Class: Eq_5924
  DataType: 
  OrigDataType: 
T_5928: (in wArg10 : word16)
  Class: Eq_5928
  DataType: 
  OrigDataType: 
T_5929: (in ax_108 - 0x0013 : word16)
  Class: Eq_5929
  DataType: 
  OrigDataType: 
T_5930: (in 0x0091 : word16)
  Class: Eq_5930
  DataType: 
  OrigDataType: 
T_5931: (in Mem183[ax_108 - 0x0013:0x0091:word16] : word16)
  Class: Eq_5928
  DataType: 
  OrigDataType: 
T_5932: (in ds_42 : selector)
  Class: Eq_5932
  DataType: 
  OrigDataType: 
T_5933: (in bp_43 : word16)
  Class: Eq_5933
  DataType: 
  OrigDataType: 
T_5934: (in fn0800_229B : ptr32)
  Class: Eq_5934
  DataType: 
  OrigDataType: 
T_5935: (in signature of fn0800_229B : void)
  Class: Eq_5934
  DataType: 
  OrigDataType: 
T_5936: (in dx : word16)
  Class: Eq_5936
  DataType: 
  OrigDataType: 
T_5937: (in al : byte)
  Class: Eq_5937
  DataType: 
  OrigDataType: 
T_5938: (in ds : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_5939: (in dsOut : ptr16)
  Class: Eq_5939
  DataType: 
  OrigDataType: 
T_5940: (in fp : ptr16)
  Class: Eq_5940
  DataType: 
  OrigDataType: 
T_5941: (in 0x001A : word16)
  Class: Eq_5941
  DataType: 
  OrigDataType: 
T_5942: (in fp - 0x001A : word16)
  Class: Eq_5936
  DataType: 
  OrigDataType: 
T_5943: (in ax : word16)
  Class: Eq_5943
  DataType: 
  OrigDataType: 
T_5944: (in (byte) ax : byte)
  Class: Eq_5937
  DataType: 
  OrigDataType: 
T_5945: (in out ds_42 : ptr16)
  Class: Eq_5939
  DataType: 
  OrigDataType: 
T_5946: (in fn0800_229B(fp - 0x001A, (byte) ax, ds, out ds_42) : word16)
  Class: Eq_5933
  DataType: 
  OrigDataType: 
T_5947: (in ss : selector)
  Class: Eq_5947
  DataType: 
  OrigDataType: 
T_5948: (in 0x0014 : word16)
  Class: Eq_5948
  DataType: 
  OrigDataType: 
T_5949: (in bp_43 - 0x0014 : word16)
  Class: Eq_5949
  DataType: 
  OrigDataType: 
T_5950: (in Mem0[ss:bp_43 - 0x0014:word16] : word16)
  Class: Eq_5950
  DataType: 
  OrigDataType: 
T_5951: (in bx : word16)
  Class: Eq_5951
  DataType: 
  OrigDataType: 
T_5952: (in 0x0000 : word16)
  Class: Eq_5952
  DataType: 
  OrigDataType: 
T_5953: (in bx + 0x0000 : word16)
  Class: Eq_5953
  DataType: 
  OrigDataType: 
T_5954: (in Mem46[ds_42:bx + 0x0000:word16] : word16)
  Class: Eq_5950
  DataType: 
  OrigDataType: 
T_5955: (in 0x0012 : word16)
  Class: Eq_5955
  DataType: 
  OrigDataType: 
T_5956: (in bp_43 - 0x0012 : word16)
  Class: Eq_5956
  DataType: 
  OrigDataType: 
T_5957: (in Mem46[ss:bp_43 - 0x0012:word16] : word16)
  Class: Eq_5957
  DataType: 
  OrigDataType: 
T_5958: (in 0x0002 : word16)
  Class: Eq_5958
  DataType: 
  OrigDataType: 
T_5959: (in bx + 0x0002 : word16)
  Class: Eq_5959
  DataType: 
  OrigDataType: 
T_5960: (in Mem49[ds_42:bx + 0x0002:word16] : word16)
  Class: Eq_5957
  DataType: 
  OrigDataType: 
T_5961: (in 0x0010 : word16)
  Class: Eq_5961
  DataType: 
  OrigDataType: 
T_5962: (in bp_43 - 0x0010 : word16)
  Class: Eq_5962
  DataType: 
  OrigDataType: 
T_5963: (in Mem49[ss:bp_43 - 0x0010:word16] : word16)
  Class: Eq_5963
  DataType: 
  OrigDataType: 
T_5964: (in 0x0004 : word16)
  Class: Eq_5964
  DataType: 
  OrigDataType: 
T_5965: (in bx + 0x0004 : word16)
  Class: Eq_5965
  DataType: 
  OrigDataType: 
T_5966: (in Mem51[ds_42:bx + 0x0004:word16] : word16)
  Class: Eq_5963
  DataType: 
  OrigDataType: 
T_5967: (in 0x000E : word16)
  Class: Eq_5967
  DataType: 
  OrigDataType: 
T_5968: (in bp_43 - 0x000E : word16)
  Class: Eq_5968
  DataType: 
  OrigDataType: 
T_5969: (in Mem51[ss:bp_43 - 0x000E:word16] : word16)
  Class: Eq_5969
  DataType: 
  OrigDataType: 
T_5970: (in 0x0006 : word16)
  Class: Eq_5970
  DataType: 
  OrigDataType: 
T_5971: (in bx + 0x0006 : word16)
  Class: Eq_5971
  DataType: 
  OrigDataType: 
T_5972: (in Mem53[ds_42:bx + 0x0006:word16] : word16)
  Class: Eq_5969
  DataType: 
  OrigDataType: 
T_5973: (in 0x000A : word16)
  Class: Eq_5973
  DataType: 
  OrigDataType: 
T_5974: (in bp_43 - 0x000A : word16)
  Class: Eq_5974
  DataType: 
  OrigDataType: 
T_5975: (in Mem53[ss:bp_43 - 0x000A:word16] : word16)
  Class: Eq_5975
  DataType: 
  OrigDataType: 
T_5976: (in 0x0008 : word16)
  Class: Eq_5976
  DataType: 
  OrigDataType: 
T_5977: (in bx + 0x0008 : word16)
  Class: Eq_5977
  DataType: 
  OrigDataType: 
T_5978: (in Mem55[ds_42:bx + 0x0008:word16] : word16)
  Class: Eq_5975
  DataType: 
  OrigDataType: 
T_5979: (in 0x0008 : word16)
  Class: Eq_5979
  DataType: 
  OrigDataType: 
T_5980: (in bp_43 - 0x0008 : word16)
  Class: Eq_5980
  DataType: 
  OrigDataType: 
T_5981: (in Mem55[ss:bp_43 - 0x0008:word16] : word16)
  Class: Eq_5981
  DataType: 
  OrigDataType: 
T_5982: (in 0x000A : word16)
  Class: Eq_5982
  DataType: 
  OrigDataType: 
T_5983: (in bx + 0x000A : word16)
  Class: Eq_5983
  DataType: 
  OrigDataType: 
T_5984: (in Mem57[ds_42:bx + 0x000A:word16] : word16)
  Class: Eq_5981
  DataType: 
  OrigDataType: 
T_5985: (in ax_58 : word16)
  Class: Eq_5985
  DataType: 
  OrigDataType: 
T_5986: (in 0x0002 : word16)
  Class: Eq_5986
  DataType: 
  OrigDataType: 
T_5987: (in bp_43 - 0x0002 : word16)
  Class: Eq_5987
  DataType: 
  OrigDataType: 
T_5988: (in Mem57[ss:bp_43 - 0x0002:word16] : word16)
  Class: Eq_5985
  DataType: 
  OrigDataType: 
T_5989: (in (byte) ax_58 : byte)
  Class: Eq_5989
  DataType: 
  OrigDataType: 
T_5990: (in 0x01 : byte)
  Class: Eq_5990
  DataType: 
  OrigDataType: 
T_5991: (in (byte) ax_58 & 0x01 : byte)
  Class: Eq_5991
  DataType: 
  OrigDataType: 
T_5992: (in DPB(ax_58, (byte) ax_58 & 0x01, 0, 8) : word16)
  Class: Eq_5992
  DataType: 
  OrigDataType: 
T_5993: (in 0x000C : word16)
  Class: Eq_5993
  DataType: 
  OrigDataType: 
T_5994: (in bx + 0x000C : word16)
  Class: Eq_5994
  DataType: 
  OrigDataType: 
T_5995: (in Mem65[ds_42:bx + 0x000C:word16] : word16)
  Class: Eq_5992
  DataType: 
  OrigDataType: 
T_5996: (in 0x0006 : word16)
  Class: Eq_5996
  DataType: 
  OrigDataType: 
T_5997: (in bp_43 - 0x0006 : word16)
  Class: Eq_5997
  DataType: 
  OrigDataType: 
T_5998: (in Mem65[ss:bp_43 - 0x0006:word16] : word16)
  Class: Eq_5998
  DataType: 
  OrigDataType: 
T_5999: (in 0x0006 : word16)
  Class: Eq_5999
  DataType: 
  OrigDataType: 
T_6000: (in cx + 0x0006 : word16)
  Class: Eq_6000
  DataType: 
  OrigDataType: 
T_6001: (in Mem67[ds_42:cx + 0x0006:word16] : word16)
  Class: Eq_5998
  DataType: 
  OrigDataType: 
T_6002: (in 0x0004 : word16)
  Class: Eq_6002
  DataType: 
  OrigDataType: 
T_6003: (in bp_43 - 0x0004 : word16)
  Class: Eq_6003
  DataType: 
  OrigDataType: 
T_6004: (in Mem67[ss:bp_43 - 0x0004:word16] : word16)
  Class: Eq_6004
  DataType: 
  OrigDataType: 
T_6005: (in 0x0000 : word16)
  Class: Eq_6005
  DataType: 
  OrigDataType: 
T_6006: (in cx + 0x0000 : word16)
  Class: Eq_6006
  DataType: 
  OrigDataType: 
T_6007: (in Mem69[ds_42:cx + 0x0000:word16] : word16)
  Class: Eq_6004
  DataType: 
  OrigDataType: 
T_6008: (in di_16 : word16)
  Class: Eq_3150
  DataType: 
  OrigDataType: 
T_6009: (in si_22 : word16)
  Class: Eq_3151
  DataType: 
  OrigDataType: 
T_6010: (in cx_28 : word16)
  Class: Eq_6010
  DataType: 
  OrigDataType: 
T_6011: (in wArg02 : word16)
  Class: Eq_6011
  DataType: 
  OrigDataType: 
T_6012: (in 0x0001 : word16)
  Class: Eq_6012
  DataType: 
  OrigDataType: 
T_6013: (in wArg02 >>u 0x0001 : word16)
  Class: Eq_6010
  DataType: 
  OrigDataType: 
T_6014: (in cx_40 : word16)
  Class: Eq_6014
  DataType: 
  OrigDataType: 
T_6015: (in 0x0002 : word16)
  Class: Eq_6015
  DataType: 
  OrigDataType: 
T_6016: (in cx_28 * 0x0002 : word16)
  Class: Eq_6016
  DataType: 
  OrigDataType: 
T_6017: (in wArg02 >>u 0x0001 : word16)
  Class: Eq_6017
  DataType: 
  OrigDataType: 
T_6018: (in 0x0000 : word16)
  Class: Eq_6017
  DataType: 
  OrigDataType: 
T_6019: (in wArg02 >>u 0x0001 <u 0x0000 : bool)
  Class: Eq_6019
  DataType: 
  OrigDataType: 
T_6020: (in cx_28 * 0x0002 + (wArg02 >>u 0x0001 <u 0x0000) : word16)
  Class: Eq_6014
  DataType: 
  OrigDataType: 
T_6021: (in 0x0000 : word16)
  Class: Eq_6021
  DataType: 
  OrigDataType: 
T_6022: (in si_22 + 0x0000 : word16)
  Class: Eq_6022
  DataType: 
  OrigDataType: 
T_6023: (in Mem0[ax:si_22 + 0x0000:word16] : word16)
  Class: Eq_6023
  DataType: 
  OrigDataType: 
T_6024: (in 0x0000 : word16)
  Class: Eq_6024
  DataType: 
  OrigDataType: 
T_6025: (in di_16 + 0x0000 : word16)
  Class: Eq_6025
  DataType: 
  OrigDataType: 
T_6026: (in Mem36[bx:di_16 + 0x0000:word16] : word16)
  Class: Eq_6023
  DataType: 
  OrigDataType: 
T_6027: (in 0x0002 : word16)
  Class: Eq_6027
  DataType: 
  OrigDataType: 
T_6028: (in si_22 + 0x0002 : word16)
  Class: Eq_3151
  DataType: 
  OrigDataType: 
T_6029: (in 0x0002 : word16)
  Class: Eq_6029
  DataType: 
  OrigDataType: 
T_6030: (in di_16 + 0x0002 : word16)
  Class: Eq_3150
  DataType: 
  OrigDataType: 
T_6031: (in 0x0001 : word16)
  Class: Eq_6031
  DataType: 
  OrigDataType: 
T_6032: (in cx_28 - 0x0001 : word16)
  Class: Eq_6010
  DataType: 
  OrigDataType: 
T_6033: (in 0x0000 : word16)
  Class: Eq_6010
  DataType: 
  OrigDataType: 
T_6034: (in cx_28 == 0x0000 : bool)
  Class: Eq_6034
  DataType: 
  OrigDataType: 
T_6035: (in 0x0000 : word16)
  Class: Eq_6035
  DataType: 
  OrigDataType: 
T_6036: (in si_22 + 0x0000 : word16)
  Class: Eq_6036
  DataType: 
  OrigDataType: 
T_6037: (in Mem0[ax:si_22 + 0x0000:byte] : byte)
  Class: Eq_6037
  DataType: 
  OrigDataType: 
T_6038: (in 0x0000 : word16)
  Class: Eq_6038
  DataType: 
  OrigDataType: 
T_6039: (in di_16 + 0x0000 : word16)
  Class: Eq_6039
  DataType: 
  OrigDataType: 
T_6040: (in Mem46[bx:di_16 + 0x0000:byte] : byte)
  Class: Eq_6037
  DataType: 
  OrigDataType: 
T_6041: (in 0x0001 : word16)
  Class: Eq_6041
  DataType: 
  OrigDataType: 
T_6042: (in si_22 + 0x0001 : word16)
  Class: Eq_3151
  DataType: 
  OrigDataType: 
T_6043: (in 0x0001 : word16)
  Class: Eq_6043
  DataType: 
  OrigDataType: 
T_6044: (in di_16 + 0x0001 : word16)
  Class: Eq_3150
  DataType: 
  OrigDataType: 
T_6045: (in 0x0001 : word16)
  Class: Eq_6045
  DataType: 
  OrigDataType: 
T_6046: (in cx_40 - 0x0001 : word16)
  Class: Eq_6014
  DataType: 
  OrigDataType: 
T_6047: (in 0x0000 : word16)
  Class: Eq_6014
  DataType: 
  OrigDataType: 
T_6048: (in cx_40 == 0x0000 : bool)
  Class: Eq_6048
  DataType: 
  OrigDataType: 
T_6049: (in 0x0007 : word16)
  Class: Eq_6049
  DataType: 
  OrigDataType: 
T_6050: (in ax + 0x0007 : word16)
  Class: Eq_6050
  DataType: 
  OrigDataType: 
T_6051: (in Mem0[ds:ax + 0x0007:byte] : byte)
  Class: Eq_6051
  DataType: 
  OrigDataType: 
T_6052: (in 0x20 : byte)
  Class: Eq_6052
  DataType: 
  OrigDataType: 
T_6053: (in Mem0[ds:ax + 0x0007:byte] & 0x20 : byte)
  Class: Eq_6053
  DataType: 
  OrigDataType: 
T_6054: (in 0x00 : byte)
  Class: Eq_6053
  DataType: 
  OrigDataType: 
T_6055: (in (Mem0[ds:ax + 0x0007:byte] & 0x20) != 0x00 : bool)
  Class: Eq_6055
  DataType: 
  OrigDataType: 
T_6056: (in fn0800_21FD : ptr32)
  Class: Eq_4732
  DataType: 
  OrigDataType: 
T_6057: (in 0x0008 : word16)
  Class: Eq_6057
  DataType: 
  OrigDataType: 
T_6058: (in ax + 0x0008 : word16)
  Class: Eq_6058
  DataType: 
  OrigDataType: 
T_6059: (in Mem0[ds:ax + 0x0008:word16] : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_6060: (in fn0800_21FD(Mem0[ds:ax + 0x0008:word16]) : word16)
  Class: Eq_6060
  DataType: 
  OrigDataType: 
T_6061: (in 0x0000 : word16)
  Class: Eq_6060
  DataType: 
  OrigDataType: 
T_6062: (in fn0800_21FD(Mem0[ds:ax + 0x0008:word16]) == 0x0000 : bool)
  Class: Eq_6062
  DataType: 
  OrigDataType: 
T_6063: (in 0x0007 : word16)
  Class: Eq_6063
  DataType: 
  OrigDataType: 
T_6064: (in ax + 0x0007 : word16)
  Class: Eq_6064
  DataType: 
  OrigDataType: 
T_6065: (in Mem0[ds:ax + 0x0007:byte] : byte)
  Class: Eq_6065
  DataType: 
  OrigDataType: 
T_6066: (in 0x20 : byte)
  Class: Eq_6066
  DataType: 
  OrigDataType: 
T_6067: (in Mem0[ds:ax + 0x0007:byte] | 0x20 : byte)
  Class: Eq_6067
  DataType: 
  OrigDataType: 
T_6068: (in 0x0007 : word16)
  Class: Eq_6068
  DataType: 
  OrigDataType: 
T_6069: (in ax + 0x0007 : word16)
  Class: Eq_6069
  DataType: 
  OrigDataType: 
T_6070: (in Mem24[ds:ax + 0x0007:byte] : byte)
  Class: Eq_6067
  DataType: 
  OrigDataType: 
T_6071: (in 0x0007 : word16)
  Class: Eq_6071
  DataType: 
  OrigDataType: 
T_6072: (in ax + 0x0007 : word16)
  Class: Eq_6072
  DataType: 
  OrigDataType: 
T_6073: (in Mem24[ds:ax + 0x0007:byte] : byte)
  Class: Eq_6073
  DataType: 
  OrigDataType: 
T_6074: (in 0x07 : byte)
  Class: Eq_6074
  DataType: 
  OrigDataType: 
T_6075: (in Mem24[ds:ax + 0x0007:byte] & 0x07 : byte)
  Class: Eq_6075
  DataType: 
  OrigDataType: 
T_6076: (in 0x00 : byte)
  Class: Eq_6075
  DataType: 
  OrigDataType: 
T_6077: (in (Mem24[ds:ax + 0x0007:byte] & 0x07) != 0x00 : bool)
  Class: Eq_6077
  DataType: 
  OrigDataType: 
T_6078: (in 0x0007 : word16)
  Class: Eq_6078
  DataType: 
  OrigDataType: 
T_6079: (in ax + 0x0007 : word16)
  Class: Eq_6079
  DataType: 
  OrigDataType: 
T_6080: (in Mem24[ds:ax + 0x0007:byte] : byte)
  Class: Eq_6080
  DataType: 
  OrigDataType: 
T_6081: (in 0x02 : byte)
  Class: Eq_6081
  DataType: 
  OrigDataType: 
T_6082: (in Mem24[ds:ax + 0x0007:byte] | 0x02 : byte)
  Class: Eq_6082
  DataType: 
  OrigDataType: 
T_6083: (in 0x0007 : word16)
  Class: Eq_6083
  DataType: 
  OrigDataType: 
T_6084: (in ax + 0x0007 : word16)
  Class: Eq_6084
  DataType: 
  OrigDataType: 
T_6085: (in Mem30[ds:ax + 0x0007:byte] : byte)
  Class: Eq_6082
  DataType: 
  OrigDataType: 
T_6086: (in dh_119 : byte)
  Class: Eq_2006
  DataType: 
  OrigDataType: 
T_6087: (in ax_39 : word16)
  Class: Eq_1068
  DataType: 
  OrigDataType: 
T_6088: (in al_102 : byte)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_6089: (in fn0800_2219 : ptr32)
  Class: Eq_4907
  DataType: 
  OrigDataType: 
T_6090: (in fn0800_2219(ax, ds) : word16)
  Class: Eq_6090
  DataType: 
  OrigDataType: 
T_6091: (in (byte) fn0800_2219(ax, ds) : byte)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_6092: (in 0x80 : byte)
  Class: Eq_6092
  DataType: 
  OrigDataType: 
T_6093: (in al_102 & 0x80 : byte)
  Class: Eq_6093
  DataType: 
  OrigDataType: 
T_6094: (in 0x00 : byte)
  Class: Eq_6093
  DataType: 
  OrigDataType: 
T_6095: (in (al_102 & 0x80) == 0x00 : bool)
  Class: Eq_6095
  DataType: 
  OrigDataType: 
T_6096: (in ax_76 : word16)
  Class: Eq_1068
  DataType: 
  OrigDataType: 
T_6097: (in dx_78 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_6098: (in 0x0000 : word16)
  Class: Eq_6098
  DataType: 
  OrigDataType: 
T_6099: (in msdos_write_file : ptr32)
  Class: Eq_1065
  DataType: 
  OrigDataType: 
T_6100: (in SEQ(ds, dx) : word32)
  Class: Eq_1053
  DataType: 
  OrigDataType: 
T_6101: (in out ax_76 : ptr16)
  Class: Eq_1070
  DataType: 
  OrigDataType: 
T_6102: (in msdos_write_file(ax, bx, SEQ(ds, dx), out ax_76) : byte)
  Class: Eq_6102
  DataType: 
  OrigDataType: 
T_6103: (in 0x0000 - msdos_write_file(ax, bx, SEQ(ds, dx), out ax_76) : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_6104: (in SLICE(dx_78, byte, 8) : byte)
  Class: Eq_2006
  DataType: 
  OrigDataType: 
T_6105: (in 0x0000 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_6106: (in dx_78 < 0x0000 : bool)
  Class: Eq_6106
  DataType: 
  OrigDataType: 
T_6107: (in dx_115 : word16)
  Class: Eq_6107
  DataType: 
  OrigDataType: 
T_6108: (in __ror : ptr32)
  Class: Eq_6108
  DataType: 
  OrigDataType: 
T_6109: (in __rcl : ptr32)
  Class: Eq_6109
  DataType: 
  OrigDataType: 
T_6110: (in 0x0000 : word16)
  Class: Eq_6110
  DataType: 
  OrigDataType: 
T_6111: (in 0x01 : byte)
  Class: Eq_6111
  DataType: 
  OrigDataType: 
T_6112: (in msdos_set_file_position : ptr32)
  Class: Eq_5193
  DataType: 
  OrigDataType: 
T_6113: (in 0x00000000 : uip32)
  Class: Eq_5196
  DataType: 
  OrigDataType: 
T_6114: (in 0x02 : byte)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_6115: (in dx_ax : word32)
  Class: Eq_6115
  DataType: 
  OrigDataType: 
T_6116: (in 0x42 : byte)
  Class: Eq_6116
  DataType: 
  OrigDataType: 
T_6117: (in DPB(dx_ax, 0x42, 8, 8) : word32)
  Class: Eq_5198
  DataType: 
  OrigDataType: 
T_6118: (in msdos_set_file_position(ax, 0x00000000, 0x02, DPB(dx_ax, 0x42, 8, 8)) : byte)
  Class: Eq_6118
  DataType: 
  OrigDataType: 
T_6119: (in __rcl(0x0000, 0x01, msdos_set_file_position(ax, 0x00000000, 0x02, DPB(dx_ax, 0x42, 8, 8))) : word16)
  Class: Eq_6119
  DataType: 
  OrigDataType: 
T_6120: (in 0x01 : byte)
  Class: Eq_6120
  DataType: 
  OrigDataType: 
T_6121: (in __ror(__rcl(0x0000, 0x01, msdos_set_file_position(ax, 0x00000000, 0x02, DPB(dx_ax, 0x42, 8, 8))), 0x01) : word16)
  Class: Eq_6107
  DataType: 
  OrigDataType: 
T_6122: (in 0x02 : byte)
  Class: Eq_1041
  DataType: 
  OrigDataType: 
T_6123: (in SLICE(dx_115, byte, 8) : byte)
  Class: Eq_2006
  DataType: 
  OrigDataType: 
T_6124: (in 0x0000 : word16)
  Class: Eq_6107
  DataType: 
  OrigDataType: 
T_6125: (in dx_115 >= 0x0000 : bool)
  Class: Eq_6125
  DataType: 
  OrigDataType: 
T_6126: (in dx_62 : word16)
  Class: Eq_6126
  DataType: 
  OrigDataType: 
T_6127: (in fn0800_0CE0 : ptr32)
  Class: Eq_2003
  DataType: 
  OrigDataType: 
T_6128: (in out dx_62 : ptr16)
  Class: Eq_2008
  DataType: 
  OrigDataType: 
T_6129: (in fn0800_0CE0(al_102, dh_119, ds, out dx_62) : word16)
  Class: Eq_1068
  DataType: 
  OrigDataType: 
T_6130: (in ax_76 == bx : bool)
  Class: Eq_6130
  DataType: 
  OrigDataType: 
T_6131: (in bx_98 : word16)
  Class: Eq_6131
  DataType: 
  OrigDataType: 
T_6132: (in fn0800_0780 : ptr32)
  Class: Eq_593
  DataType: 
  OrigDataType: 
T_6133: (in 0x000C : word16)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_6134: (in out bx_98 : ptr16)
  Class: Eq_598
  DataType: 
  OrigDataType: 
T_6135: (in fn0800_0780(0x000C, dx_78, ds, out bx_98) : word16)
  Class: Eq_6135
  DataType: 
  OrigDataType: 
T_6136: (in ax_28 : word16)
  Class: Eq_6136
  DataType: 
  OrigDataType: 
T_6137: (in 0x022E : word16)
  Class: Eq_6137
  DataType: 
  OrigDataType: 
T_6138: (in Mem0[ds:0x022E:word16] : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_6139: (in ax >=u Mem0[ds:0x022E:word16] : bool)
  Class: Eq_6139
  DataType: 
  OrigDataType: 
T_6140: (in bx_52 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_6141: (in 0x000F : word16)
  Class: Eq_6141
  DataType: 
  OrigDataType: 
T_6142: (in ax + 0x000F : word16)
  Class: Eq_6142
  DataType: 
  OrigDataType: 
T_6143: (in 0x04 : byte)
  Class: Eq_6143
  DataType: 
  OrigDataType: 
T_6144: (in ax + 0x000F >>u 0x04 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_6145: (in 0x0000 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_6146: (in bx_52 != 0x0000 : bool)
  Class: Eq_6146
  DataType: 
  OrigDataType: 
T_6147: (in fn0800_035A : ptr32)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_6148: (in fn0800_035A() : word16)
  Class: Eq_6148
  DataType: 
  OrigDataType: 
T_6149: (in 0x0005 : word16)
  Class: Eq_6149
  DataType: 
  OrigDataType: 
T_6150: (in 0x043C : word16)
  Class: Eq_6150
  DataType: 
  OrigDataType: 
T_6151: (in Mem48[ds:0x043C:word16] : word16)
  Class: Eq_6149
  DataType: 
  OrigDataType: 
T_6152: (in 0xFFFF : word16)
  Class: Eq_6136
  DataType: 
  OrigDataType: 
T_6153: (in ax_57 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_6154: (in 0x022A : word16)
  Class: Eq_6154
  DataType: 
  OrigDataType: 
T_6155: (in Mem0[ds:0x022A:byte] : byte)
  Class: Eq_6155
  DataType: 
  OrigDataType: 
T_6156: (in 0x00 : byte)
  Class: Eq_6155
  DataType: 
  OrigDataType: 
T_6157: (in Mem0[ds:0x022A:byte] != 0x00 : bool)
  Class: Eq_6157
  DataType: 
  OrigDataType: 
T_6158: (in 0x1000 : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_6159: (in bx_66 : word16)
  Class: Eq_6159
  DataType: 
  OrigDataType: 
T_6160: (in 0x0000 : word16)
  Class: Eq_6160
  DataType: 
  OrigDataType: 
T_6161: (in msdos_resize_memory_block : ptr32)
  Class: Eq_908
  DataType: 
  OrigDataType: 
T_6162: (in out bx_66 : ptr16)
  Class: Eq_912
  DataType: 
  OrigDataType: 
T_6163: (in msdos_resize_memory_block(ax_57, bx_52, out bx_66) : byte)
  Class: Eq_6163
  DataType: 
  OrigDataType: 
T_6164: (in 0x0000 - msdos_resize_memory_block(ax_57, bx_52, out bx_66) : word16)
  Class: Eq_6164
  DataType: 
  OrigDataType: 
T_6165: (in 0x0000 : word16)
  Class: Eq_6164
  DataType: 
  OrigDataType: 
T_6166: (in 0x0000 - msdos_resize_memory_block(ax_57, bx_52, out bx_66) != 0x0000 : bool)
  Class: Eq_6166
  DataType: 
  OrigDataType: 
T_6167: (in ss : selector)
  Class: Eq_6167
  DataType: 
  OrigDataType: 
T_6168: (in 0x0226 : word16)
  Class: Eq_6168
  DataType: 
  OrigDataType: 
T_6169: (in Mem0[ds:0x0226:word16] : word16)
  Class: Eq_6169
  DataType: 
  OrigDataType: 
T_6170: (in ss - Mem0[ds:0x0226:word16] : word16)
  Class: Eq_6170
  DataType: 
  OrigDataType: 
T_6171: (in bx_52 + (ss - Mem0[ds:0x0226:word16]) : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_6172: (in 0x0226 : word16)
  Class: Eq_6172
  DataType: 
  OrigDataType: 
T_6173: (in Mem0[ds:0x0226:word16] : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_6174: (in 0x0224 : word16)
  Class: Eq_6174
  DataType: 
  OrigDataType: 
T_6175: (in Mem0[ds:0x0224:word16] : word16)
  Class: Eq_6136
  DataType: 
  OrigDataType: 
T_6176: (in 0x0224 : word16)
  Class: Eq_6176
  DataType: 
  OrigDataType: 
T_6177: (in Mem74[ds:0x0224:word16] : word16)
  Class: Eq_4145
  DataType: 
  OrigDataType: 
T_6178: (in ax_23 : word16)
  Class: Eq_6178
  DataType: 
  OrigDataType: 
T_6179: (in dx_14 : word16)
  Class: Eq_6179
  DataType: 
  OrigDataType: 
T_6180: (in msdos_ioctl_get_device_info : ptr32)
  Class: Eq_6180
  DataType: 
  OrigDataType: 
T_6181: (in signature of msdos_ioctl_get_device_info : void)
  Class: Eq_6180
  DataType: 
  OrigDataType: 
T_6182: (in bx : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_6183: (in dxOut : ptr16)
  Class: Eq_6183
  DataType: 
  OrigDataType: 
T_6184: (in out dx_14 : ptr16)
  Class: Eq_6183
  DataType: 
  OrigDataType: 
T_6185: (in msdos_ioctl_get_device_info(ax, out dx_14) : bool)
  Class: Eq_6185
  DataType: 
  OrigDataType: 
T_6186: (in dl : byte)
  Class: Eq_6186
  DataType: 
  OrigDataType: 
T_6187: (in 0x80 : byte)
  Class: Eq_6187
  DataType: 
  OrigDataType: 
T_6188: (in dl & 0x80 : byte)
  Class: Eq_6188
  DataType: 
  OrigDataType: 
T_6189: (in 0x00 : byte)
  Class: Eq_6188
  DataType: 
  OrigDataType: 
T_6190: (in (dl & 0x80) == 0x00 : bool)
  Class: Eq_6190
  DataType: 
  OrigDataType: 
T_6191: (in 0x0000 : word16)
  Class: Eq_6178
  DataType: 
  OrigDataType: 
T_6192: (in 0x0001 : word16)
  Class: Eq_6178
  DataType: 
  OrigDataType: 
T_6193: (in ax_19 : word16)
  Class: Eq_6193
  DataType: 
  OrigDataType: 
T_6194: (in 0x039C : word16)
  Class: Eq_6194
  DataType: 
  OrigDataType: 
T_6195: (in Mem0[ds:0x039C:word16] : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_6196: (in ax <u Mem0[ds:0x039C:word16] : bool)
  Class: Eq_6196
  DataType: 
  OrigDataType: 
T_6197: (in 0x0005 : word16)
  Class: Eq_154
  DataType: 
  OrigDataType: 
T_6198: (in ax > 0x0005 : bool)
  Class: Eq_6198
  DataType: 
  OrigDataType: 
T_6199: (in 0x0000 : word16)
  Class: Eq_6193
  DataType: 
  OrigDataType: 
T_6200: (in 0x03C6 : word16)
  Class: Eq_6200
  DataType: 
  OrigDataType: 
T_6201: (in Mem0[ds:0x03C6:word16] : word16)
  Class: Eq_6201
  DataType: 
  OrigDataType: 
T_6202: (in SEQ(ds, Mem0[ds:0x03C6:word16]) : ptr32)
  Class: Eq_6202
  DataType: 
  OrigDataType: 
T_6203: (in 0x0002 : word16)
  Class: Eq_6203
  DataType: 
  OrigDataType: 
T_6204: (in ax * 0x0002 : word16)
  Class: Eq_6204
  DataType: 
  OrigDataType: 
T_6205: (in SEQ(ds, Mem0[ds:0x03C6:word16])[ax * 0x0002] : word16)
  Class: Eq_6193
  DataType: 
  OrigDataType: 
T_6206: (in bx_46 : word16)
  Class: Eq_6206
  DataType: 
  OrigDataType: 
T_6207: (in 0x03C6 : word16)
  Class: Eq_6207
  DataType: 
  OrigDataType: 
T_6208: (in Mem0[ds:0x03C6:word16] : word16)
  Class: Eq_6208
  DataType: 
  OrigDataType: 
T_6209: (in 0x0001 : word16)
  Class: Eq_6209
  DataType: 
  OrigDataType: 
T_6210: (in ax << 0x0001 : word16)
  Class: Eq_6210
  DataType: 
  OrigDataType: 
T_6211: (in Mem0[ds:0x03C6:word16] + (ax << 0x0001) : word16)
  Class: Eq_6206
  DataType: 
  OrigDataType: 
T_6212: (in 0x0001 : word16)
  Class: Eq_6212
  DataType: 
  OrigDataType: 
T_6213: (in bx_46 + 0x0001 : word16)
  Class: Eq_6213
  DataType: 
  OrigDataType: 
T_6214: (in Mem0[ds:bx_46 + 0x0001:byte] : byte)
  Class: Eq_6214
  DataType: 
  OrigDataType: 
T_6215: (in 0x40 : byte)
  Class: Eq_6215
  DataType: 
  OrigDataType: 
T_6216: (in Mem0[ds:bx_46 + 0x0001:byte] & 0x40 : byte)
  Class: Eq_6216
  DataType: 
  OrigDataType: 
T_6217: (in 0x00 : byte)
  Class: Eq_6216
  DataType: 
  OrigDataType: 
T_6218: (in (Mem0[ds:bx_46 + 0x0001:byte] & 0x40) != 0x00 : bool)
  Class: Eq_6218
  DataType: 
  OrigDataType: 
T_6219: (in 0x0001 : word16)
  Class: Eq_6219
  DataType: 
  OrigDataType: 
T_6220: (in bx_46 + 0x0001 : word16)
  Class: Eq_6220
  DataType: 
  OrigDataType: 
T_6221: (in Mem0[ds:bx_46 + 0x0001:byte] : byte)
  Class: Eq_6221
  DataType: 
  OrigDataType: 
T_6222: (in 0x40 : byte)
  Class: Eq_6222
  DataType: 
  OrigDataType: 
T_6223: (in Mem0[ds:bx_46 + 0x0001:byte] | 0x40 : byte)
  Class: Eq_6223
  DataType: 
  OrigDataType: 
T_6224: (in 0x0001 : word16)
  Class: Eq_6224
  DataType: 
  OrigDataType: 
T_6225: (in bx_46 + 0x0001 : word16)
  Class: Eq_6225
  DataType: 
  OrigDataType: 
T_6226: (in Mem51[ds:bx_46 + 0x0001:byte] : byte)
  Class: Eq_6223
  DataType: 
  OrigDataType: 
T_6227: (in fn0800_21FD : ptr32)
  Class: Eq_4732
  DataType: 
  OrigDataType: 
T_6228: (in fn0800_21FD(ax) : word16)
  Class: Eq_6228
  DataType: 
  OrigDataType: 
T_6229: (in 0x0000 : word16)
  Class: Eq_6228
  DataType: 
  OrigDataType: 
T_6230: (in fn0800_21FD(ax) == 0x0000 : bool)
  Class: Eq_6230
  DataType: 
  OrigDataType: 
T_6231: (in bx_59 : word16)
  Class: Eq_6231
  DataType: 
  OrigDataType: 
T_6232: (in 0x03C6 : word16)
  Class: Eq_6232
  DataType: 
  OrigDataType: 
T_6233: (in Mem51[ds:0x03C6:word16] : word16)
  Class: Eq_6233
  DataType: 
  OrigDataType: 
T_6234: (in ax << 0x0001 : word16)
  Class: Eq_6234
  DataType: 
  OrigDataType: 
T_6235: (in Mem51[ds:0x03C6:word16] + (ax << 0x0001) : word16)
  Class: Eq_6231
  DataType: 
  OrigDataType: 
T_6236: (in 0x0001 : word16)
  Class: Eq_6236
  DataType: 
  OrigDataType: 
T_6237: (in bx_59 + 0x0001 : word16)
  Class: Eq_6237
  DataType: 
  OrigDataType: 
T_6238: (in Mem51[ds:bx_59 + 0x0001:byte] : byte)
  Class: Eq_6238
  DataType: 
  OrigDataType: 
T_6239: (in 0x20 : byte)
  Class: Eq_6239
  DataType: 
  OrigDataType: 
T_6240: (in Mem51[ds:bx_59 + 0x0001:byte] | 0x20 : byte)
  Class: Eq_6240
  DataType: 
  OrigDataType: 
T_6241: (in 0x0001 : word16)
  Class: Eq_6241
  DataType: 
  OrigDataType: 
T_6242: (in bx_59 + 0x0001 : word16)
  Class: Eq_6242
  DataType: 
  OrigDataType: 
T_6243: (in Mem61[ds:bx_59 + 0x0001:byte] : byte)
  Class: Eq_6240
  DataType: 
  OrigDataType: 
T_6244: (in dx : word16)
  Class: Eq_6244
  DataType: 
  OrigDataType: 
T_6245: (in 0x40 : byte)
  Class: Eq_6245
  DataType: 
  OrigDataType: 
T_6246: (in dh | 0x40 : byte)
  Class: Eq_6246
  DataType: 
  OrigDataType: 
T_6247: (in DPB(dx, dh | 0x40, 8, 8) : word16)
  Class: Eq_6247
  DataType: 
  OrigDataType: 
T_6248: (in 0x03C6 : word16)
  Class: Eq_6248
  DataType: 
  OrigDataType: 
T_6249: (in Mem0[ds:0x03C6:word16] : word16)
  Class: Eq_6249
  DataType: 
  OrigDataType: 
T_6250: (in SEQ(ds, Mem0[ds:0x03C6:word16]) : ptr32)
  Class: Eq_6250
  DataType: 
  OrigDataType: 
T_6251: (in 0x0002 : word16)
  Class: Eq_6251
  DataType: 
  OrigDataType: 
T_6252: (in ax * 0x0002 : word16)
  Class: Eq_6252
  DataType: 
  OrigDataType: 
T_6253: (in SEQ(ds, Mem0[ds:0x03C6:word16])[ax * 0x0002] : word16)
  Class: Eq_6247
  DataType: 
  OrigDataType: 
T_6254: (in bp : word16)
  Class: Eq_6254
  DataType: 
  OrigDataType: 
T_6255: (in *dsOut : selector)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_6256: (in fn0800_24D4 : ptr32)
  Class: Eq_6256
  DataType: 
  OrigDataType: 
T_6257: (in signature of fn0800_24D4 : void)
  Class: Eq_6256
  DataType: 
  OrigDataType: 
T_6258: (in ax : word16)
  Class: Eq_5936
  DataType: 
  OrigDataType: 
T_6259: (in dx : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_6260: (in bl : byte)
  Class: Eq_6260
  DataType: 
  OrigDataType: 
T_6261: (in ax : word16)
  Class: Eq_6261
  DataType: 
  OrigDataType: 
T_6262: (in (byte) ax : byte)
  Class: Eq_6260
  DataType: 
  OrigDataType: 
T_6263: (in fn0800_24D4(dx, ds, (byte) ax) : void)
  Class: Eq_6263
  DataType: 
  OrigDataType: 
T_6264: (in cx_26 : word16)
  Class: Eq_6264
  DataType: 
  OrigDataType: 
T_6265: (in dx_27 : word16)
  Class: Eq_6265
  DataType: 
  OrigDataType: 
T_6266: (in bx_28 : word16)
  Class: Eq_6266
  DataType: 
  OrigDataType: 
T_6267: (in bp_29 : word16)
  Class: Eq_6267
  DataType: 
  OrigDataType: 
T_6268: (in si_30 : word16)
  Class: Eq_6268
  DataType: 
  OrigDataType: 
T_6269: (in di_31 : word16)
  Class: Eq_6269
  DataType: 
  OrigDataType: 
T_6270: (in es_32 : selector)
  Class: Eq_6270
  DataType: 
  OrigDataType: 
T_6271: (in ds_33 : selector)
  Class: Eq_6271
  DataType: 
  OrigDataType: 
T_6272: (in ax_34 : word16)
  Class: Eq_6272
  DataType: 
  OrigDataType: 
T_6273: (in fn0800_2517 : ptr32)
  Class: Eq_6273
  DataType: 
  OrigDataType: 
T_6274: (in signature of fn0800_2517 : void)
  Class: Eq_6273
  DataType: 
  OrigDataType: 
T_6275: (in ax : word16)
  Class: Eq_5936
  DataType: 
  OrigDataType: 
T_6276: (in dx : word16)
  Class: Eq_14
  DataType: 
  OrigDataType: 
T_6277: (in cxOut : ptr16)
  Class: Eq_6277
  DataType: 
  OrigDataType: 
T_6278: (in dxOut : ptr16)
  Class: Eq_6278
  DataType: 
  OrigDataType: 
T_6279: (in bxOut : ptr16)
  Class: Eq_6279
  DataType: 
  OrigDataType: 
T_6280: (in bpOut : ptr16)
  Class: Eq_6280
  DataType: 
  OrigDataType: 
T_6281: (in siOut : ptr16)
  Class: Eq_6281
  DataType: 
  OrigDataType: 
T_6282: (in diOut : ptr16)
  Class: Eq_6282
  DataType: 
  OrigDataType: 
T_6283: (in esOut : ptr16)
  Class: Eq_6283
  DataType: 
  OrigDataType: 
T_6284: (in dsOut : ptr16)
  Class: Eq_6284
  DataType: 
  OrigDataType: 
T_6285: (in out cx_26 : ptr16)
  Class: Eq_6277
  DataType: 
  OrigDataType: 
T_6286: (in out dx_27 : ptr16)
  Class: Eq_6278
  DataType: 
  OrigDataType: 
T_6287: (in out bx_28 : ptr16)
  Class: Eq_6279
  DataType: 
  OrigDataType: 
T_6288: (in out bp_29 : ptr16)
  Class: Eq_6280
  DataType: 
  OrigDataType: 
T_6289: (in out si_30 : ptr16)
  Class: Eq_6281
  DataType: 
  OrigDataType: 
T_6290: (in out di_31 : ptr16)
  Class: Eq_6282
  DataType: 
  OrigDataType: 
T_6291: (in out es_32 : ptr16)
  Class: Eq_6283
  DataType: 
  OrigDataType: 
T_6292: (in out ds_33 : ptr16)
  Class: Eq_6284
  DataType: 
  OrigDataType: 
T_6293: (in fn0800_2517(ax, dx, out cx_26, out dx_27, out bx_28, out bp_29, out si_30, out di_31, out es_32, out ds_33) : word16)
  Class: Eq_6272
  DataType: 
  OrigDataType: 
T_6294: (in ss : selector)
  Class: Eq_6294
  DataType: 
  OrigDataType: 
T_6295: (in fp : ptr16)
  Class: Eq_6295
  DataType: 
  OrigDataType: 
T_6296: (in 0x000A : word16)
  Class: Eq_6296
  DataType: 
  OrigDataType: 
T_6297: (in fp - 0x000A : word16)
  Class: Eq_6297
  DataType: 
  OrigDataType: 
T_6298: (in Mem36[ss:fp - 0x000A:word16] : word16)
  Class: Eq_6266
  DataType: 
  OrigDataType: 
T_6299: (in 0x000C : word16)
  Class: Eq_6299
  DataType: 
  OrigDataType: 
T_6300: (in fp - 0x000C : word16)
  Class: Eq_6300
  DataType: 
  OrigDataType: 
T_6301: (in Mem39[ss:fp - 0x000C:word16] : word16)
  Class: Eq_6271
  DataType: 
  OrigDataType: 
T_6302: (in 0x000E : word16)
  Class: Eq_6302
  DataType: 
  OrigDataType: 
T_6303: (in fp - 0x000E : word16)
  Class: Eq_6303
  DataType: 
  OrigDataType: 
T_6304: (in Mem41[ss:fp - 0x000E:word16] : word16)
  Class: Eq_6267
  DataType: 
  OrigDataType: 
T_6305: (in bx_16 : word16)
  Class: Eq_6305
  DataType: 
  OrigDataType: 
T_6306: (in bx : word16)
  Class: Eq_6306
  DataType: 
  OrigDataType: 
T_6307: (in 0x00 : byte)
  Class: Eq_6307
  DataType: 
  OrigDataType: 
T_6308: (in DPB(bx, 0x00, 8, 8) : word16)
  Class: Eq_6305
  DataType: 
  OrigDataType: 
T_6309: (in ds_bx_43 : ptr32)
  Class: Eq_6309
  DataType: 
  OrigDataType: 
T_6310: (in 0x0008 : word16)
  Class: Eq_6310
  DataType: 
  OrigDataType: 
T_6311: (in fp - 0x0008 : word16)
  Class: Eq_6311
  DataType: 
  OrigDataType: 
T_6312: (in Mem41[ss:fp - 0x0008:segptr32] : segptr32)
  Class: Eq_6309
  DataType: 
  OrigDataType: 
T_6313: (in 0x0001 : word16)
  Class: Eq_6313
  DataType: 
  OrigDataType: 
T_6314: (in bx_16 << 0x0001 : word16)
  Class: Eq_6314
  DataType: 
  OrigDataType: 
T_6315: (in (bx_16 << 0x0001) + bx_16 : word16)
  Class: Eq_6315
  DataType: 
  OrigDataType: 
T_6316: (in 0x2539 : word16)
  Class: Eq_6316
  DataType: 
  OrigDataType: 
T_6317: (in (bx_16 << 0x0001) + bx_16 + 0x2539 : word16)
  Class: Eq_6317
  DataType: 
  OrigDataType: 
T_6318: (in cond((bx_16 << 0x0001) + bx_16 + 0x2539) : byte)
  Class: Eq_6318
  DataType: 
  OrigDataType: 
T_6319: (in 0x0010 : word16)
  Class: Eq_6319
  DataType: 
  OrigDataType: 
T_6320: (in fp - 0x0010 : word16)
  Class: Eq_6320
  DataType: 
  OrigDataType: 
T_6321: (in Mem47[ss:fp - 0x0010:word16] : word16)
  Class: Eq_6318
  DataType: 
  OrigDataType: 
T_6322: (in ds_44 : selector)
  Class: Eq_6322
  DataType: 
  OrigDataType: 
T_6323: (in SLICE(ds_bx_43, selector, 16) : selector)
  Class: Eq_6322
  DataType: 
  OrigDataType: 
T_6324: (in bx_45 : word16)
  Class: Eq_6324
  DataType: 
  OrigDataType: 
T_6325: (in (word16) ds_bx_43 : word16)
  Class: Eq_6324
  DataType: 
  OrigDataType: 
T_6326: (in fp - 0x0010 : word16)
  Class: Eq_6326
  DataType: 
  OrigDataType: 
T_6327: (in Mem47[ss:fp - 0x0010:word16] : word16)
  Class: Eq_6327
  DataType: 
  OrigDataType: 
T_6328: (in 0x0012 : word16)
  Class: Eq_6328
  DataType: 
  OrigDataType: 
T_6329: (in bx_45 + 0x0012 : word16)
  Class: Eq_6329
  DataType: 
  OrigDataType: 
T_6330: (in Mem48[ds_44:bx_45 + 0x0012:word16] : word16)
  Class: Eq_6327
  DataType: 
  OrigDataType: 
T_6331: (in 0x0000 : word16)
  Class: Eq_6331
  DataType: 
  OrigDataType: 
T_6332: (in bx_45 + 0x0000 : word16)
  Class: Eq_6332
  DataType: 
  OrigDataType: 
T_6333: (in Mem50[ds_44:bx_45 + 0x0000:word16] : word16)
  Class: Eq_6272
  DataType: 
  OrigDataType: 
T_6334: (in 0x0004 : word16)
  Class: Eq_6334
  DataType: 
  OrigDataType: 
T_6335: (in bx_45 + 0x0004 : word16)
  Class: Eq_6335
  DataType: 
  OrigDataType: 
T_6336: (in Mem51[ds_44:bx_45 + 0x0004:word16] : word16)
  Class: Eq_6264
  DataType: 
  OrigDataType: 
T_6337: (in 0x0006 : word16)
  Class: Eq_6337
  DataType: 
  OrigDataType: 
T_6338: (in bx_45 + 0x0006 : word16)
  Class: Eq_6338
  DataType: 
  OrigDataType: 
T_6339: (in Mem52[ds_44:bx_45 + 0x0006:word16] : word16)
  Class: Eq_6265
  DataType: 
  OrigDataType: 
T_6340: (in 0x000A : word16)
  Class: Eq_6340
  DataType: 
  OrigDataType: 
T_6341: (in bx_45 + 0x000A : word16)
  Class: Eq_6341
  DataType: 
  OrigDataType: 
T_6342: (in Mem53[ds_44:bx_45 + 0x000A:word16] : word16)
  Class: Eq_6268
  DataType: 
  OrigDataType: 
T_6343: (in 0x000C : word16)
  Class: Eq_6343
  DataType: 
  OrigDataType: 
T_6344: (in bx_45 + 0x000C : word16)
  Class: Eq_6344
  DataType: 
  OrigDataType: 
T_6345: (in Mem54[ds_44:bx_45 + 0x000C:word16] : word16)
  Class: Eq_6269
  DataType: 
  OrigDataType: 
T_6346: (in 0x000E : word16)
  Class: Eq_6346
  DataType: 
  OrigDataType: 
T_6347: (in fp - 0x000E : word16)
  Class: Eq_6347
  DataType: 
  OrigDataType: 
T_6348: (in Mem54[ss:fp - 0x000E:word16] : word16)
  Class: Eq_6348
  DataType: 
  OrigDataType: 
T_6349: (in 0x0008 : word16)
  Class: Eq_6349
  DataType: 
  OrigDataType: 
T_6350: (in bx_45 + 0x0008 : word16)
  Class: Eq_6350
  DataType: 
  OrigDataType: 
T_6351: (in Mem55[ds_44:bx_45 + 0x0008:word16] : word16)
  Class: Eq_6348
  DataType: 
  OrigDataType: 
T_6352: (in 0x000C : word16)
  Class: Eq_6352
  DataType: 
  OrigDataType: 
T_6353: (in fp - 0x000C : word16)
  Class: Eq_6353
  DataType: 
  OrigDataType: 
T_6354: (in Mem55[ss:fp - 0x000C:word16] : word16)
  Class: Eq_6354
  DataType: 
  OrigDataType: 
T_6355: (in 0x000E : word16)
  Class: Eq_6355
  DataType: 
  OrigDataType: 
T_6356: (in bx_45 + 0x000E : word16)
  Class: Eq_6356
  DataType: 
  OrigDataType: 
T_6357: (in Mem57[ds_44:bx_45 + 0x000E:word16] : word16)
  Class: Eq_6354
  DataType: 
  OrigDataType: 
T_6358: (in 0x000A : word16)
  Class: Eq_6358
  DataType: 
  OrigDataType: 
T_6359: (in fp - 0x000A : word16)
  Class: Eq_6359
  DataType: 
  OrigDataType: 
T_6360: (in Mem57[ss:fp - 0x000A:word16] : word16)
  Class: Eq_6360
  DataType: 
  OrigDataType: 
T_6361: (in 0x0002 : word16)
  Class: Eq_6361
  DataType: 
  OrigDataType: 
T_6362: (in bx_45 + 0x0002 : word16)
  Class: Eq_6362
  DataType: 
  OrigDataType: 
T_6363: (in Mem59[ds_44:bx_45 + 0x0002:word16] : word16)
  Class: Eq_6360
  DataType: 
  OrigDataType: 
T_6364: (in 0x0010 : word16)
  Class: Eq_6364
  DataType: 
  OrigDataType: 
T_6365: (in bx_45 + 0x0010 : word16)
  Class: Eq_6365
  DataType: 
  OrigDataType: 
T_6366: (in Mem61[ds_44:bx_45 + 0x0010:word16] : word16)
  Class: Eq_6270
  DataType: 
  OrigDataType: 
T_6367: (in cx_16 : word16)
  Class: Eq_6367
  DataType: 
  OrigDataType: 
T_6368: (in 0x0004 : word16)
  Class: Eq_6368
  DataType: 
  OrigDataType: 
T_6369: (in ax + 0x0004 : word16)
  Class: Eq_6369
  DataType: 
  OrigDataType: 
T_6370: (in Mem0[dx:ax + 0x0004:word16] : word16)
  Class: Eq_6370
  DataType: 
  OrigDataType: 
T_6371: (in *cxOut : word16)
  Class: Eq_6370
  DataType: 
  OrigDataType: 
T_6372: (in dx_17 : word16)
  Class: Eq_6372
  DataType: 
  OrigDataType: 
T_6373: (in 0x0006 : word16)
  Class: Eq_6373
  DataType: 
  OrigDataType: 
T_6374: (in ax + 0x0006 : word16)
  Class: Eq_6374
  DataType: 
  OrigDataType: 
T_6375: (in Mem0[dx:ax + 0x0006:word16] : word16)
  Class: Eq_6375
  DataType: 
  OrigDataType: 
T_6376: (in *dxOut : word16)
  Class: Eq_6375
  DataType: 
  OrigDataType: 
T_6377: (in si_18 : word16)
  Class: Eq_6377
  DataType: 
  OrigDataType: 
T_6378: (in 0x000A : word16)
  Class: Eq_6378
  DataType: 
  OrigDataType: 
T_6379: (in ax + 0x000A : word16)
  Class: Eq_6379
  DataType: 
  OrigDataType: 
T_6380: (in Mem0[dx:ax + 0x000A:word16] : word16)
  Class: Eq_6380
  DataType: 
  OrigDataType: 
T_6381: (in *siOut : word16)
  Class: Eq_6380
  DataType: 
  OrigDataType: 
T_6382: (in di_19 : word16)
  Class: Eq_6382
  DataType: 
  OrigDataType: 
T_6383: (in 0x000C : word16)
  Class: Eq_6383
  DataType: 
  OrigDataType: 
T_6384: (in ax + 0x000C : word16)
  Class: Eq_6384
  DataType: 
  OrigDataType: 
T_6385: (in Mem0[dx:ax + 0x000C:word16] : word16)
  Class: Eq_6385
  DataType: 
  OrigDataType: 
T_6386: (in *diOut : word16)
  Class: Eq_6385
  DataType: 
  OrigDataType: 
T_6387: (in bp_20 : word16)
  Class: Eq_6387
  DataType: 
  OrigDataType: 
T_6388: (in 0x0008 : word16)
  Class: Eq_6388
  DataType: 
  OrigDataType: 
T_6389: (in ax + 0x0008 : word16)
  Class: Eq_6389
  DataType: 
  OrigDataType: 
T_6390: (in Mem0[dx:ax + 0x0008:word16] : word16)
  Class: Eq_6390
  DataType: 
  OrigDataType: 
T_6391: (in *bpOut : word16)
  Class: Eq_6390
  DataType: 
  OrigDataType: 
T_6392: (in es_21 : selector)
  Class: Eq_6392
  DataType: 
  OrigDataType: 
T_6393: (in 0x0010 : word16)
  Class: Eq_6393
  DataType: 
  OrigDataType: 
T_6394: (in ax + 0x0010 : word16)
  Class: Eq_6394
  DataType: 
  OrigDataType: 
T_6395: (in Mem0[dx:ax + 0x0010:selector] : selector)
  Class: Eq_6395
  DataType: 
  OrigDataType: 
T_6396: (in *esOut : selector)
  Class: Eq_6395
  DataType: 
  OrigDataType: 
T_6397: (in bx_22 : word16)
  Class: Eq_6397
  DataType: 
  OrigDataType: 
T_6398: (in 0x0002 : word16)
  Class: Eq_6398
  DataType: 
  OrigDataType: 
T_6399: (in ax + 0x0002 : word16)
  Class: Eq_6399
  DataType: 
  OrigDataType: 
T_6400: (in Mem0[dx:ax + 0x0002:word16] : word16)
  Class: Eq_6400
  DataType: 
  OrigDataType: 
T_6401: (in *bxOut : word16)
  Class: Eq_6400
  DataType: 
  OrigDataType: 
T_6402: (in ds_23 : selector)
  Class: Eq_6402
  DataType: 
  OrigDataType: 
T_6403: (in 0x000E : word16)
  Class: Eq_6403
  DataType: 
  OrigDataType: 
T_6404: (in ax + 0x000E : word16)
  Class: Eq_6404
  DataType: 
  OrigDataType: 
T_6405: (in Mem0[dx:ax + 0x000E:word16] : word16)
  Class: Eq_6405
  DataType: 
  OrigDataType: 
T_6406: (in *dsOut : word16)
  Class: Eq_6405
  DataType: 
  OrigDataType: 
T_6407: (in 0x0000 : word16)
  Class: Eq_6407
  DataType: 
  OrigDataType: 
T_6408: (in ax + 0x0000 : word16)
  Class: Eq_6408
  DataType: 
  OrigDataType: 
T_6409: (in Mem0[dx:ax + 0x0000:word16] : word16)
  Class: Eq_6409
  DataType: 
  OrigDataType: 
T_6410:
  Class: Eq_6410
  DataType: 
  OrigDataType: (struct 0001 (0 T_48 t0000))
T_6411:
  Class: Eq_6411
  DataType: 
  OrigDataType: (struct 0001 (0 T_90 t0000))
*/
