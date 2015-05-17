// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_341/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr (struct "Globals"))
  OrigDataType: (ptr (struct "Globals"))
T_2: (in di_13 : word16)
  Class: Eq_2
  DataType: int16
  OrigDataType: int16
T_3: (in 0x055E : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_4: (in si_12 : word16)
  Class: Eq_4
  DataType: (memptr T_6 (struct 0001 (0 T_9 t0000)))
  OrigDataType: (memptr T_6 (struct 0001 (0 T_9 t0000)))
T_5: (in 0x045F : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_6: (in ds : selector)
  Class: Eq_6
  DataType: (ptr (segment (39E (arr T_620) a039E) (3D4 (arr T_621) a03D4) (40E T_213 t040E) (410 T_198 t0410) (415 T_31 t0415) (45F (arr T_618) a045F) (4DF (arr T_619 128) a04DF)))
  OrigDataType: (ptr (segment (39E (arr T_620) a039E) (3D4 (arr T_621) a03D4) (40E T_213 t040E) (410 T_198 t0410) (415 T_31 t0415) (45F (arr T_618) a045F) (4DF (arr T_619 128) a04DF)))
T_7: (in 0x0000 : word16)
  Class: Eq_7
  DataType: word16
  OrigDataType: word16
T_8: (in si_12 + 0x0000 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in Mem0[ds:si_12 + 0x0000:byte] : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in 0x0000 : word16)
  Class: Eq_10
  DataType: (memptr T_6 (struct 0001 (0 T_12 t0000)))
  OrigDataType: (memptr T_6 (struct 0001 (0 T_12 t0000)))
T_11: (in di_13 + 0x0000 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_12: (in Mem11[ds:di_13 + 0x0000:byte] : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_13: (in 0x0001 : word16)
  Class: Eq_13
  DataType: word16
  OrigDataType: word16
T_14: (in si_12 + 0x0001 : word16)
  Class: Eq_4
  DataType: word16
  OrigDataType: word16
T_15: (in 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in di_13 - 0x0001 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_17: (in 0xFB21 : word16)
  Class: Eq_2
  DataType: int16
  OrigDataType: int16
T_18: (in di_13 >= 0xFB21 : bool)
  Class: Eq_18
  DataType: bool
  OrigDataType: bool
T_19: (in bios_video_set_mode : ptr32)
  Class: Eq_19
  DataType: (ptr (fn T_23 (T_22)))
  OrigDataType: (ptr (fn T_23 (T_22)))
T_20: (in signature of bios_video_set_mode : void)
  Class: Eq_19
  DataType: 
  OrigDataType: 
T_21: (in al : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_22: (in 0x03 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_23: (in bios_video_set_mode(0x03) : void)
  Class: Eq_23
  DataType: void
  OrigDataType: void
T_24: (in fn0C00_038B : ptr32)
  Class: Eq_24
  DataType: (ptr (fn T_26 ()))
  OrigDataType: (ptr (fn T_26 ()))
T_25: (in signature of fn0C00_038B : void)
  Class: Eq_24
  DataType: 
  OrigDataType: 
T_26: (in fn0C00_038B() : void)
  Class: Eq_26
  DataType: void
  OrigDataType: void
T_27: (in __outw : ptr32)
  Class: Eq_27
  DataType: (ptr (fn T_30 (T_28, T_29)))
  OrigDataType: (ptr (fn T_30 (T_28, T_29)))
T_28: (in 0x03D4 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in 0x5013 : word16)
  Class: Eq_29
  DataType: word16
  OrigDataType: word16
T_30: (in __outw(0x03D4, 0x5013) : void)
  Class: Eq_30
  DataType: void
  OrigDataType: void
T_31: (in es_19 : selector)
  Class: Eq_31
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_32: (in 0x0415 : word16)
  Class: Eq_32
  DataType: (memptr T_6 (struct (0 T_33 t0000)))
  OrigDataType: (memptr T_6 (struct (0 T_33 t0000)))
T_33: (in Mem11[ds:0x0415:selector] : selector)
  Class: Eq_31
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_34: (in di_20 : word16)
  Class: Eq_34
  DataType: (union (cups16 u0) ((memptr T_31 (struct 0010 (0 T_49 t0000))) u1))
  OrigDataType: (union (cups16 u0) ((memptr T_31 (struct 0010 (0 T_49 t0000))) u1))
T_35: (in 0x0000 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_36: (in bx_22 : word16)
  Class: Eq_36
  DataType: uint16
  OrigDataType: uint16
T_37: (in 0x0000 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_38: (in 0x0010 : word16)
  Class: Eq_38
  DataType: word16
  OrigDataType: word16
T_39: (in di_20 + 0x0010 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_40: (in dx_65 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_41: (in 0x03C0 : word16)
  Class: Eq_41
  DataType: uint16
  OrigDataType: uint16
T_42: (in bx_22 *u 0x03C0 : uint32)
  Class: Eq_42
  DataType: uint32
  OrigDataType: uint32
T_43: (in SLICE(bx_22 *u 0x03C0, word16, 16) : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_44: (in 0x03C0 : word16)
  Class: Eq_34
  DataType: cups16
  OrigDataType: cups16
T_45: (in di_20 <=u 0x03C0 : bool)
  Class: Eq_45
  DataType: bool
  OrigDataType: bool
T_46: (in 0x07DB : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_47: (in 0x0000 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in di_20 + 0x0000 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in Mem57[es_19:di_20 + 0x0000:word16] : word16)
  Class: Eq_46
  DataType: word16
  OrigDataType: word16
T_50: (in 0x0002 : word16)
  Class: Eq_50
  DataType: word16
  OrigDataType: word16
T_51: (in di_20 + 0x0002 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_52: (in cx : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in 0x0001 : word16)
  Class: Eq_53
  DataType: word16
  OrigDataType: word16
T_54: (in cx - 0x0001 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_55: (in 0x0000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_56: (in cx == 0x0000 : bool)
  Class: Eq_56
  DataType: bool
  OrigDataType: bool
T_57: (in 0x08 : byte)
  Class: Eq_57
  DataType: byte
  OrigDataType: byte
T_58: (in DPB(cx, 0x08, 0, 8) : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_59: (in dx_114 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in 0x0000 : word16)
  Class: Eq_40
  DataType: word16
  OrigDataType: word16
T_61: (in dx_65 != 0x0000 : bool)
  Class: Eq_61
  DataType: bool
  OrigDataType: bool
T_62: (in 0x0000 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_63: (in 0x0010 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in di_20 + 0x0010 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_65: (in 0x0001 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in dx_65 + 0x0001 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_67: (in 0x0001 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in bx_22 + 0x0001 : word16)
  Class: Eq_36
  DataType: word16
  OrigDataType: word16
T_69: (in 0x0021 : word16)
  Class: Eq_36
  DataType: cups16
  OrigDataType: cups16
T_70: (in bx_22 <=u 0x0021 : bool)
  Class: Eq_70
  DataType: bool
  OrigDataType: bool
T_71: (in bx_177 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_72: (in 0x0000 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_73: (in es_91 : selector)
  Class: Eq_31
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_74: (in 0x0415 : word16)
  Class: Eq_74
  DataType: (memptr T_6 (struct (0 T_75 t0000)))
  OrigDataType: (memptr T_6 (struct (0 T_75 t0000)))
T_75: (in Mem11[ds:0x0415:selector] : selector)
  Class: Eq_31
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_76: (in di_104 : word16)
  Class: Eq_76
  DataType: (memptr T_73 (struct 0380 (0 T_97 t0000) (2 T_101 t0002) (4 T_105 t0004) (6 T_109 t0006) (140 T_113 t0140) (142 T_117 t0142) (144 T_121 t0144) (146 T_125 t0146) (280 T_129 t0280) (282 T_133 t0282) (284 T_137 t0284) (286 T_141 t0286)))
  OrigDataType: (memptr T_73 (struct 0380 (0 T_97 t0000) (2 T_101 t0002) (4 T_105 t0004) (6 T_109 t0006) (140 T_113 t0140) (142 T_117 t0142) (144 T_121 t0144) (146 T_125 t0146) (280 T_129 t0280) (282 T_133 t0282) (284 T_137 t0284) (286 T_141 t0286)))
T_77: (in 0x0518 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_78: (in si_103 : word16)
  Class: Eq_78
  DataType: (memptr T_6 (struct 0001 (0 T_162 t0000)))
  OrigDataType: (memptr T_6 (struct 0001 (0 T_162 t0000)))
T_79: (in 0x0417 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_80: (in 0x08 : byte)
  Class: Eq_80
  DataType: byte
  OrigDataType: byte
T_81: (in DPB(dx_114, 0x08, 0, 8) : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_82: (in 0x2458 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_83: (in 0x0008 : word16)
  Class: Eq_83
  DataType: word16
  OrigDataType: word16
T_84: (in di_104 + 0x0008 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_85: (in dh_131 : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_86: (in 0x01 : byte)
  Class: Eq_86
  DataType: byte
  OrigDataType: byte
T_87: (in dh_131 - 0x01 : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_88: (in cond(di_104) : byte)
  Class: Eq_88
  DataType: byte
  OrigDataType: byte
T_89: (in C_107 : byte)
  Class: Eq_88
  DataType: byte
  OrigDataType: byte
T_90: (in dx_132 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in DPB(dx_132, dh_131, 8, 8) : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_92: (in 0x00 : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_93: (in dh_131 != 0x00 : bool)
  Class: Eq_93
  DataType: bool
  OrigDataType: bool
T_94: (in 0x0FDB : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in 0x0000 : word16)
  Class: Eq_95
  DataType: word16
  OrigDataType: word16
T_96: (in di_104 + 0x0000 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_97: (in Mem478[es_91:di_104 + 0x0000:word16] : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_98: (in 0x0FDB : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in 0x0002 : word16)
  Class: Eq_99
  DataType: word16
  OrigDataType: word16
T_100: (in di_104 + 0x0002 : word16)
  Class: Eq_100
  DataType: word16
  OrigDataType: word16
T_101: (in Mem479[es_91:di_104 + 0x0002:word16] : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_102: (in 0x0FDB : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in 0x0004 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in di_104 + 0x0004 : word16)
  Class: Eq_104
  DataType: word16
  OrigDataType: word16
T_105: (in Mem480[es_91:di_104 + 0x0004:word16] : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_106: (in 0x0FDB : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_107: (in 0x0006 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in di_104 + 0x0006 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in Mem481[es_91:di_104 + 0x0006:word16] : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_110: (in 0x0FDB : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in 0x0140 : word16)
  Class: Eq_111
  DataType: word16
  OrigDataType: word16
T_112: (in di_104 + 0x0140 : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_113: (in Mem482[es_91:di_104 + 0x0140:word16] : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_114: (in 0x0FDB : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_115: (in 0x0142 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in di_104 + 0x0142 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in Mem483[es_91:di_104 + 0x0142:word16] : word16)
  Class: Eq_114
  DataType: word16
  OrigDataType: word16
T_118: (in 0x0FDB : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in 0x0144 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in di_104 + 0x0144 : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_121: (in Mem484[es_91:di_104 + 0x0144:word16] : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_122: (in 0x0FDB : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_123: (in 0x0146 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in di_104 + 0x0146 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in Mem485[es_91:di_104 + 0x0146:word16] : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_126: (in 0x0FDB : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_127: (in 0x0280 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in di_104 + 0x0280 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in Mem486[es_91:di_104 + 0x0280:word16] : word16)
  Class: Eq_126
  DataType: word16
  OrigDataType: word16
T_130: (in 0x0FDB : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in 0x0282 : word16)
  Class: Eq_131
  DataType: word16
  OrigDataType: word16
T_132: (in di_104 + 0x0282 : word16)
  Class: Eq_132
  DataType: word16
  OrigDataType: word16
T_133: (in Mem487[es_91:di_104 + 0x0282:word16] : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_134: (in 0x0FDB : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_135: (in 0x0284 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_136: (in di_104 + 0x0284 : word16)
  Class: Eq_136
  DataType: word16
  OrigDataType: word16
T_137: (in Mem488[es_91:di_104 + 0x0284:word16] : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_138: (in 0x0FDB : word16)
  Class: Eq_138
  DataType: word16
  OrigDataType: word16
T_139: (in 0x0286 : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_140: (in di_104 + 0x0286 : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_141: (in Mem489[es_91:di_104 + 0x0286:word16] : word16)
  Class: Eq_138
  DataType: word16
  OrigDataType: word16
T_142: (in __rcl : ptr32)
  Class: Eq_142
  DataType: (ptr (fn T_145 (T_143, T_144, T_89)))
  OrigDataType: (ptr (fn T_145 (T_143, T_144, T_89)))
T_143: (in al_129 : byte)
  Class: Eq_143
  DataType: byte
  OrigDataType: byte
T_144: (in 0x01 : byte)
  Class: Eq_144
  DataType: byte
  OrigDataType: byte
T_145: (in __rcl(al_129, 0x01, C_107) : byte)
  Class: Eq_143
  DataType: byte
  OrigDataType: byte
T_146: (in 0x80 : byte)
  Class: Eq_146
  DataType: byte
  OrigDataType: byte
T_147: (in al_129 & 0x80 : byte)
  Class: Eq_147
  DataType: byte
  OrigDataType: byte
T_148: (in 0x00 : byte)
  Class: Eq_147
  DataType: byte
  OrigDataType: byte
T_149: (in (al_129 & 0x80) != 0x00 : bool)
  Class: Eq_149
  DataType: bool
  OrigDataType: bool
T_150: (in 0x0001 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_151: (in si_103 + 0x0001 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_152: (in 0x0380 : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_153: (in di_104 + 0x0380 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_154: (in di_104 + 0x0380 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in cond(di_104 + 0x0380) : byte)
  Class: Eq_88
  DataType: byte
  OrigDataType: byte
T_156: (in 0x0001 : word16)
  Class: Eq_156
  DataType: word16
  OrigDataType: word16
T_157: (in dx_132 - 0x0001 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_158: (in 0x0001 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_159: (in dx_132 != 0x0001 : bool)
  Class: Eq_159
  DataType: bool
  OrigDataType: bool
T_160: (in 0x0000 : word16)
  Class: Eq_160
  DataType: word16
  OrigDataType: word16
T_161: (in si_103 + 0x0000 : word16)
  Class: Eq_161
  DataType: word16
  OrigDataType: word16
T_162: (in Mem11[ds:si_103 + 0x0000:byte] : byte)
  Class: Eq_143
  DataType: byte
  OrigDataType: byte
T_163: (in 0x08 : byte)
  Class: Eq_85
  DataType: byte
  OrigDataType: byte
T_164: (in 0x08 : byte)
  Class: Eq_164
  DataType: byte
  OrigDataType: byte
T_165: (in DPB(dx_114, 0x08, 8, 8) : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_166: (in 0x1A30 : word16)
  Class: Eq_166
  DataType: word16
  OrigDataType: word16
T_167: (in di_104 - 0x1A30 : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_168: (in 0x0001 : word16)
  Class: Eq_168
  DataType: word16
  OrigDataType: word16
T_169: (in bx_177 + 0x0001 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_170: (in 0x0008 : word16)
  Class: Eq_71
  DataType: word16
  OrigDataType: word16
T_171: (in bx_177 == 0x0008 : bool)
  Class: Eq_171
  DataType: bool
  OrigDataType: bool
T_172: (in fn0C00_02FB : ptr32)
  Class: Eq_172
  DataType: (ptr (fn T_175 (T_6)))
  OrigDataType: (ptr (fn T_175 (T_6)))
T_173: (in signature of fn0C00_02FB : void)
  Class: Eq_172
  DataType: 
  OrigDataType: 
T_174: (in ds : selector)
  Class: Eq_6
  DataType: (ptr (segment (40E T_476 t040E) (410 T_486 t0410) (412 T_494 t0412) (413 T_511 t0413)))
  OrigDataType: (ptr (segment (40E T_476 t040E) (410 T_486 t0410) (412 T_494 t0412) (413 T_511 t0413)))
T_175: (in fn0C00_02FB(ds) : byte)
  Class: Eq_175
  DataType: byte
  OrigDataType: byte
T_176: (in cl_183 : byte)
  Class: Eq_176
  DataType: byte
  OrigDataType: byte
T_177: (in fn0C00_0365 : ptr32)
  Class: Eq_177
  DataType: (ptr (fn T_182 (T_6, T_181)))
  OrigDataType: (ptr (fn T_182 (T_6, T_181)))
T_178: (in signature of fn0C00_0365 : void)
  Class: Eq_177
  DataType: 
  OrigDataType: 
T_179: (in ds : selector)
  Class: Eq_6
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_180: (in clOut : ptr16)
  Class: Eq_180
  DataType: ptr16
  OrigDataType: ptr16
T_181: (in out cl_183 : ptr16)
  Class: Eq_180
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_182: (in fn0C00_0365(ds, out cl_183) : byte)
  Class: Eq_182
  DataType: byte
  OrigDataType: byte
T_183: (in bx_185 : word16)
  Class: Eq_183
  DataType: (memptr T_6 (struct (45F T_283 t045F)))
  OrigDataType: (memptr T_6 (struct (45F T_283 t045F)))
T_184: (in 0x0000 : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_185: (in bl_186 : byte)
  Class: Eq_185
  DataType: byte
  OrigDataType: byte
T_186: (in 0x00 : byte)
  Class: Eq_185
  DataType: byte
  OrigDataType: byte
T_187: (in dx_190 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_188: (in 0x0100 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_189: (in dl_192 : byte)
  Class: Eq_189
  DataType: bcu8
  OrigDataType: bcu8
T_190: (in 0x00 : byte)
  Class: Eq_189
  DataType: byte
  OrigDataType: byte
T_191: (in 0x0437 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_192: (in si_103 - 0x0437 : word16)
  Class: Eq_192
  DataType: word16
  OrigDataType: word16
T_193: (in cond(si_103 - 0x0437) : byte)
  Class: Eq_88
  DataType: byte
  OrigDataType: byte
T_194: (in si_103 != 0x0437 : bool)
  Class: Eq_194
  DataType: bool
  OrigDataType: bool
T_195: (in bx_227 : word16)
  Class: Eq_183
  DataType: (memptr T_6 (struct (45F T_205 t045F)))
  OrigDataType: (memptr T_6 (struct (45F T_205 t045F)))
T_196: (in ax_212 : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_197: (in 0x0410 : word16)
  Class: Eq_197
  DataType: (memptr T_6 (struct (0 T_198 t0000)))
  OrigDataType: (memptr T_6 (struct (0 T_198 t0000)))
T_198: (in Mem222[ds:0x0410:word16] : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_199: (in 0x01 : byte)
  Class: Eq_189
  DataType: bcu8
  OrigDataType: bcu8
T_200: (in dl_192 <=u 0x01 : bool)
  Class: Eq_200
  DataType: bool
  OrigDataType: bool
T_201: (in 0x0060 : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_202: (in ax_232 : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_203: (in 0x045F : word16)
  Class: Eq_203
  DataType: word16
  OrigDataType: word16
T_204: (in bx_227 + 0x045F : word16)
  Class: Eq_204
  DataType: word16
  OrigDataType: word16
T_205: (in Mem222[ds:bx_227 + 0x045F:byte] : byte)
  Class: Eq_205
  DataType: byte
  OrigDataType: byte
T_206: (in (word16) Mem222[ds:bx_227 + 0x045F:byte] : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_207: (in 0x01 : byte)
  Class: Eq_189
  DataType: byte
  OrigDataType: byte
T_208: (in dl_192 == 0x01 : bool)
  Class: Eq_208
  DataType: bool
  OrigDataType: bool
T_209: (in 0x01 : byte)
  Class: Eq_209
  DataType: byte
  OrigDataType: byte
T_210: (in bl_186 << 0x01 : word16)
  Class: Eq_210
  DataType: ui16
  OrigDataType: ui16
T_211: (in DPB(bx_185, bl_186 << 0x01, 0, 8) : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_212: (in 0x01A0 : word16)
  Class: Eq_212
  DataType: word16
  OrigDataType: word16
T_213: (in 0x01A0 - ax_232 : word16)
  Class: Eq_213
  DataType: word16
  OrigDataType: word16
T_214: (in 0x040E : word16)
  Class: Eq_214
  DataType: (memptr T_6 (struct (0 T_215 t0000)))
  OrigDataType: (memptr T_6 (struct (0 T_215 t0000)))
T_215: (in Mem458[ds:0x040E:word16] : word16)
  Class: Eq_213
  DataType: word16
  OrigDataType: word16
T_216: (in 0x03 : byte)
  Class: Eq_189
  DataType: bcu8
  OrigDataType: bcu8
T_217: (in dl_192 <=u 0x03 : bool)
  Class: Eq_217
  DataType: bool
  OrigDataType: bool
T_218: (in 0x07 : byte)
  Class: Eq_189
  DataType: byte
  OrigDataType: byte
T_219: (in dl_192 == 0x07 : bool)
  Class: Eq_219
  DataType: bool
  OrigDataType: bool
T_220: (in 0x05 : byte)
  Class: Eq_189
  DataType: bcu8
  OrigDataType: bcu8
T_221: (in dl_192 >u 0x05 : bool)
  Class: Eq_221
  DataType: bool
  OrigDataType: bool
T_222: (in dh_246 : byte)
  Class: Eq_222
  DataType: int8
  OrigDataType: int8
T_223: (in SLICE(dx_190, byte, 8) : byte)
  Class: Eq_222
  DataType: byte
  OrigDataType: byte
T_224: (in (byte) bx_185 : byte)
  Class: Eq_224
  DataType: byte
  OrigDataType: byte
T_225: (in (byte) bx_185 + dh_246 : byte)
  Class: Eq_185
  DataType: byte
  OrigDataType: byte
T_226: (in al_241 : byte)
  Class: Eq_226
  DataType: byte
  OrigDataType: byte
T_227: (in fn0C00_02FB : ptr32)
  Class: Eq_172
  DataType: (ptr (fn T_228 (T_6)))
  OrigDataType: (ptr (fn T_228 (T_6)))
T_228: (in fn0C00_02FB(ds) : byte)
  Class: Eq_226
  DataType: byte
  OrigDataType: byte
T_229: (in (byte) dx_190 : byte)
  Class: Eq_189
  DataType: byte
  OrigDataType: byte
T_230: (in DPB(bx_185, bl_186, 0, 8) : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_231: (in 0xFF : byte)
  Class: Eq_185
  DataType: byte
  OrigDataType: byte
T_232: (in bl_186 != 0xFF : bool)
  Class: Eq_232
  DataType: bool
  OrigDataType: bool
T_233: (in 0x01A0 : word16)
  Class: Eq_233
  DataType: word16
  OrigDataType: word16
T_234: (in ax_232 + 0x01A0 : word16)
  Class: Eq_213
  DataType: word16
  OrigDataType: word16
T_235: (in 0x040E : word16)
  Class: Eq_235
  DataType: (memptr T_6 (struct (0 T_236 t0000)))
  OrigDataType: (memptr T_6 (struct (0 T_236 t0000)))
T_236: (in Mem467[ds:0x040E:word16] : word16)
  Class: Eq_213
  DataType: word16
  OrigDataType: word16
T_237: (in msdos_get_stdin_status : ptr32)
  Class: Eq_237
  DataType: (ptr (fn T_239 ()))
  OrigDataType: (ptr (fn T_239 ()))
T_238: (in signature of msdos_get_stdin_status : void)
  Class: Eq_237
  DataType: 
  OrigDataType: 
T_239: (in msdos_get_stdin_status() : void)
  Class: Eq_239
  DataType: void
  OrigDataType: void
T_240: (in 0x00 : byte)
  Class: Eq_226
  DataType: byte
  OrigDataType: byte
T_241: (in al_241 == 0x00 : bool)
  Class: Eq_241
  DataType: bool
  OrigDataType: bool
T_242: (in dx_443 : word16)
  Class: Eq_242
  DataType: word16
  OrigDataType: word16
T_243: (in -dh_246 : byte)
  Class: Eq_243
  DataType: int8
  OrigDataType: int8
T_244: (in DPB(dx_190, -dh_246, 8, 8) : word16)
  Class: Eq_242
  DataType: word16
  OrigDataType: word16
T_245: (in 0x0001 : word16)
  Class: Eq_245
  DataType: word16
  OrigDataType: word16
T_246: (in dx_443 + 0x0001 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_247: (in dx_443 + 0x0001 : word16)
  Class: Eq_247
  DataType: word16
  OrigDataType: word16
T_248: (in (byte) (dx_443 + 0x0001) : byte)
  Class: Eq_189
  DataType: byte
  OrigDataType: byte
T_249: (in 0x07 : byte)
  Class: Eq_189
  DataType: bcu8
  OrigDataType: bcu8
T_250: (in dl_192 <=u 0x07 : bool)
  Class: Eq_250
  DataType: bool
  OrigDataType: bool
T_251: (in 0x00 : byte)
  Class: Eq_189
  DataType: byte
  OrigDataType: byte
T_252: (in dx_443 + 0x0001 : word16)
  Class: Eq_252
  DataType: word16
  OrigDataType: word16
T_253: (in 0x00 : byte)
  Class: Eq_253
  DataType: byte
  OrigDataType: byte
T_254: (in DPB(dx_443 + 0x0001, 0x00, 0, 8) : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_255: (in cl_268 : byte)
  Class: Eq_255
  DataType: byte
  OrigDataType: byte
T_256: (in bios_video_set_mode : ptr32)
  Class: Eq_19
  DataType: (ptr (fn T_264 (T_263)))
  OrigDataType: (ptr (fn T_264 (T_263)))
T_257: (in msdos_flush_buffer_and_read_stdin : ptr32)
  Class: Eq_257
  DataType: (ptr (fn T_263 (T_262)))
  OrigDataType: (ptr (fn T_263 (T_262)))
T_258: (in signature of msdos_flush_buffer_and_read_stdin : void)
  Class: Eq_257
  DataType: 
  OrigDataType: 
T_259: (in al : byte)
  Class: Eq_259
  DataType: byte
  OrigDataType: byte
T_260: (in fn0C00_0365 : ptr32)
  Class: Eq_177
  DataType: (ptr (fn T_262 (T_6, T_261)))
  OrigDataType: (ptr (fn T_262 (T_6, T_261)))
T_261: (in out cl_268 : ptr16)
  Class: Eq_180
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_262: (in fn0C00_0365(ds, out cl_268) : byte)
  Class: Eq_259
  DataType: byte
  OrigDataType: byte
T_263: (in msdos_flush_buffer_and_read_stdin(fn0C00_0365(ds, out cl_268)) : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_264: (in bios_video_set_mode(msdos_flush_buffer_and_read_stdin(fn0C00_0365(ds, out cl_268))) : void)
  Class: Eq_264
  DataType: void
  OrigDataType: void
T_265: (in bios_video_load_ROM_8x8_dbl_dot_patterns : ptr32)
  Class: Eq_265
  DataType: (ptr (fn T_269 (T_268)))
  OrigDataType: (ptr (fn T_269 (T_268)))
T_266: (in signature of bios_video_load_ROM_8x8_dbl_dot_patterns : void)
  Class: Eq_265
  DataType: 
  OrigDataType: 
T_267: (in bl : byte)
  Class: Eq_267
  DataType: byte
  OrigDataType: byte
T_268: (in 0x00 : byte)
  Class: Eq_267
  DataType: byte
  OrigDataType: byte
T_269: (in bios_video_load_ROM_8x8_dbl_dot_patterns(0x00) : void)
  Class: Eq_269
  DataType: void
  OrigDataType: void
T_270: (in fn0C00_038B : ptr32)
  Class: Eq_24
  DataType: (ptr (fn T_271 ()))
  OrigDataType: (ptr (fn T_271 ()))
T_271: (in fn0C00_038B() : void)
  Class: Eq_271
  DataType: void
  OrigDataType: void
T_272: (in bx_276 : word16)
  Class: Eq_272
  DataType: word16
  OrigDataType: word16
T_273: (in 0x0000 : word16)
  Class: Eq_272
  DataType: word16
  OrigDataType: word16
T_274: (in es_281 : selector)
  Class: Eq_31
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_275: (in 0x0415 : word16)
  Class: Eq_275
  DataType: (memptr T_6 (struct (0 T_276 t0000)))
  OrigDataType: (memptr T_6 (struct (0 T_276 t0000)))
T_276: (in Mem222[ds:0x0415:selector] : selector)
  Class: Eq_31
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_277: (in di_282 : word16)
  Class: Eq_277
  DataType: (memptr T_274 (struct 0090 (0 T_306 t0000)))
  OrigDataType: (memptr T_274 (struct 0090 (0 T_306 t0000)))
T_278: (in 0x066C : word16)
  Class: Eq_277
  DataType: word16
  OrigDataType: word16
T_279: (in si_283 : word16)
  Class: Eq_279
  DataType: (memptr T_6 (struct 0001 (0 T_327 t0000)))
  OrigDataType: (memptr T_6 (struct 0001 (0 T_327 t0000)))
T_280: (in 0x0417 : word16)
  Class: Eq_279
  DataType: word16
  OrigDataType: word16
T_281: (in 0x045F : word16)
  Class: Eq_281
  DataType: word16
  OrigDataType: word16
T_282: (in bx_185 + 0x045F : word16)
  Class: Eq_282
  DataType: word16
  OrigDataType: word16
T_283: (in Mem11[ds:bx_185 + 0x045F:byte] : byte)
  Class: Eq_283
  DataType: byte
  OrigDataType: byte
T_284: (in (word16) Mem11[ds:bx_185 + 0x045F:byte] : word16)
  Class: Eq_284
  DataType: word16
  OrigDataType: word16
T_285: (in 0x0060 : word16)
  Class: Eq_285
  DataType: word16
  OrigDataType: word16
T_286: (in (word16) Mem11[ds:bx_185 + 0x045F:byte] + 0x0060 : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_287: (in 0x05 : byte)
  Class: Eq_189
  DataType: bcu8
  OrigDataType: bcu8
T_288: (in dl_192 <=u 0x05 : bool)
  Class: Eq_288
  DataType: bool
  OrigDataType: bool
T_289: (in 0x08 : byte)
  Class: Eq_289
  DataType: byte
  OrigDataType: byte
T_290: (in DPB(dx_190, 0x08, 0, 8) : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_291: (in 0x0C02 : word16)
  Class: Eq_277
  DataType: word16
  OrigDataType: word16
T_292: (in 0x0002 : word16)
  Class: Eq_292
  DataType: word16
  OrigDataType: word16
T_293: (in di_282 + 0x0002 : word16)
  Class: Eq_277
  DataType: word16
  OrigDataType: word16
T_294: (in dh_321 : byte)
  Class: Eq_294
  DataType: byte
  OrigDataType: byte
T_295: (in 0x01 : byte)
  Class: Eq_295
  DataType: byte
  OrigDataType: byte
T_296: (in dh_321 - 0x01 : byte)
  Class: Eq_294
  DataType: byte
  OrigDataType: byte
T_297: (in cond(di_282) : byte)
  Class: Eq_297
  DataType: byte
  OrigDataType: byte
T_298: (in C_297 : byte)
  Class: Eq_297
  DataType: byte
  OrigDataType: byte
T_299: (in dx_322 : word16)
  Class: Eq_299
  DataType: word16
  OrigDataType: word16
T_300: (in DPB(dx_322, dh_321, 8, 8) : word16)
  Class: Eq_299
  DataType: word16
  OrigDataType: word16
T_301: (in 0x00 : byte)
  Class: Eq_294
  DataType: byte
  OrigDataType: byte
T_302: (in dh_321 != 0x00 : bool)
  Class: Eq_302
  DataType: bool
  OrigDataType: bool
T_303: (in 0x0FDB : word16)
  Class: Eq_303
  DataType: word16
  OrigDataType: word16
T_304: (in 0x0000 : word16)
  Class: Eq_304
  DataType: word16
  OrigDataType: word16
T_305: (in di_282 + 0x0000 : word16)
  Class: Eq_305
  DataType: word16
  OrigDataType: word16
T_306: (in Mem440[es_281:di_282 + 0x0000:word16] : word16)
  Class: Eq_303
  DataType: word16
  OrigDataType: word16
T_307: (in __rcl : ptr32)
  Class: Eq_307
  DataType: (ptr (fn T_310 (T_308, T_309, T_298)))
  OrigDataType: (ptr (fn T_310 (T_308, T_309, T_298)))
T_308: (in al_319 : byte)
  Class: Eq_308
  DataType: byte
  OrigDataType: byte
T_309: (in 0x01 : byte)
  Class: Eq_309
  DataType: byte
  OrigDataType: byte
T_310: (in __rcl(al_319, 0x01, C_297) : byte)
  Class: Eq_308
  DataType: byte
  OrigDataType: byte
T_311: (in 0x80 : byte)
  Class: Eq_311
  DataType: byte
  OrigDataType: byte
T_312: (in al_319 & 0x80 : byte)
  Class: Eq_312
  DataType: byte
  OrigDataType: byte
T_313: (in 0x00 : byte)
  Class: Eq_312
  DataType: byte
  OrigDataType: byte
T_314: (in (al_319 & 0x80) != 0x00 : bool)
  Class: Eq_314
  DataType: bool
  OrigDataType: bool
T_315: (in 0x0001 : word16)
  Class: Eq_315
  DataType: word16
  OrigDataType: word16
T_316: (in si_283 + 0x0001 : word16)
  Class: Eq_279
  DataType: word16
  OrigDataType: word16
T_317: (in 0x0090 : word16)
  Class: Eq_317
  DataType: word16
  OrigDataType: word16
T_318: (in di_282 + 0x0090 : word16)
  Class: Eq_277
  DataType: word16
  OrigDataType: word16
T_319: (in di_282 + 0x0090 : word16)
  Class: Eq_319
  DataType: word16
  OrigDataType: word16
T_320: (in cond(di_282 + 0x0090) : byte)
  Class: Eq_297
  DataType: byte
  OrigDataType: byte
T_321: (in 0x0001 : word16)
  Class: Eq_321
  DataType: word16
  OrigDataType: word16
T_322: (in dx_322 - 0x0001 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_323: (in 0x0001 : word16)
  Class: Eq_299
  DataType: word16
  OrigDataType: word16
T_324: (in dx_322 != 0x0001 : bool)
  Class: Eq_324
  DataType: bool
  OrigDataType: bool
T_325: (in 0x0000 : word16)
  Class: Eq_325
  DataType: word16
  OrigDataType: word16
T_326: (in si_283 + 0x0000 : word16)
  Class: Eq_326
  DataType: word16
  OrigDataType: word16
T_327: (in Mem222[ds:si_283 + 0x0000:byte] : byte)
  Class: Eq_308
  DataType: byte
  OrigDataType: byte
T_328: (in 0x08 : byte)
  Class: Eq_294
  DataType: byte
  OrigDataType: byte
T_329: (in 0x08 : byte)
  Class: Eq_329
  DataType: byte
  OrigDataType: byte
T_330: (in DPB(dx_190, 0x08, 8, 8) : word16)
  Class: Eq_299
  DataType: word16
  OrigDataType: word16
T_331: (in 0x0001 : word16)
  Class: Eq_331
  DataType: word16
  OrigDataType: word16
T_332: (in bx_276 + 0x0001 : word16)
  Class: Eq_272
  DataType: word16
  OrigDataType: word16
T_333: (in 0x045E : word16)
  Class: Eq_333
  DataType: word16
  OrigDataType: word16
T_334: (in di_282 - 0x045E : word16)
  Class: Eq_277
  DataType: word16
  OrigDataType: word16
T_335: (in bh_369 : byte)
  Class: Eq_335
  DataType: byte
  OrigDataType: byte
T_336: (in SLICE(bx_276, byte, 8) : byte)
  Class: Eq_335
  DataType: byte
  OrigDataType: byte
T_337: (in 0x0009 : word16)
  Class: Eq_272
  DataType: word16
  OrigDataType: word16
T_338: (in bx_276 == 0x0009 : bool)
  Class: Eq_338
  DataType: bool
  OrigDataType: bool
T_339: (in si_372 : word16)
  Class: Eq_339
  DataType: (memptr T_6 (struct 0002 (0 T_382 t0000)))
  OrigDataType: (memptr T_6 (struct 0002 (0 T_382 t0000)))
T_340: (in 0x039E : word16)
  Class: Eq_339
  DataType: word16
  OrigDataType: word16
T_341: (in es_373 : selector)
  Class: Eq_31
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_342: (in 0x0415 : word16)
  Class: Eq_342
  DataType: (memptr T_6 (struct (0 T_343 t0000)))
  OrigDataType: (memptr T_6 (struct (0 T_343 t0000)))
T_343: (in Mem222[ds:0x0415:selector] : selector)
  Class: Eq_31
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_344: (in di_374 : word16)
  Class: Eq_344
  DataType: (memptr T_341 (struct 0002 (0 T_382 t0000)))
  OrigDataType: (memptr T_341 (struct 0002 (0 T_382 t0000)))
T_345: (in 0x11B4 : word16)
  Class: Eq_344
  DataType: word16
  OrigDataType: word16
T_346: (in cx_375 : word16)
  Class: Eq_346
  DataType: word16
  OrigDataType: word16
T_347: (in 0x001B : word16)
  Class: Eq_346
  DataType: word16
  OrigDataType: word16
T_348: (in 0x0437 : word16)
  Class: Eq_279
  DataType: word16
  OrigDataType: word16
T_349: (in si_283 - 0x0437 : word16)
  Class: Eq_349
  DataType: word16
  OrigDataType: word16
T_350: (in cond(si_283 - 0x0437) : byte)
  Class: Eq_297
  DataType: byte
  OrigDataType: byte
T_351: (in si_283 != 0x0437 : bool)
  Class: Eq_351
  DataType: bool
  OrigDataType: bool
T_352: (in bios_video_set_cursor_position : ptr32)
  Class: Eq_352
  DataType: (ptr (fn T_359 (T_335, T_357, T_358)))
  OrigDataType: (ptr (fn T_359 (T_335, T_357, T_358)))
T_353: (in signature of bios_video_set_cursor_position : void)
  Class: Eq_352
  DataType: 
  OrigDataType: 
T_354: (in bh : byte)
  Class: Eq_335
  DataType: byte
  OrigDataType: byte
T_355: (in dh : byte)
  Class: Eq_355
  DataType: byte
  OrigDataType: byte
T_356: (in dl : byte)
  Class: Eq_356
  DataType: byte
  OrigDataType: byte
T_357: (in 0x32 : byte)
  Class: Eq_355
  DataType: byte
  OrigDataType: byte
T_358: (in 0x00 : byte)
  Class: Eq_356
  DataType: byte
  OrigDataType: byte
T_359: (in bios_video_set_cursor_position(bh_369, 0x32, 0x00) : void)
  Class: Eq_359
  DataType: void
  OrigDataType: void
T_360: (in cl_392 : byte)
  Class: Eq_360
  DataType: byte
  OrigDataType: byte
T_361: (in fn0C00_0365 : ptr32)
  Class: Eq_177
  DataType: (ptr (fn T_363 (T_6, T_362)))
  OrigDataType: (ptr (fn T_363 (T_6, T_362)))
T_362: (in out cl_392 : ptr16)
  Class: Eq_180
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_363: (in fn0C00_0365(ds, out cl_392) : byte)
  Class: Eq_363
  DataType: byte
  OrigDataType: byte
T_364: (in al_397 : byte)
  Class: Eq_364
  DataType: byte
  OrigDataType: byte
T_365: (in bios_kbd_get_keystroke : ptr32)
  Class: Eq_365
  DataType: (ptr (fn T_369 (T_368)))
  OrigDataType: (ptr (fn T_369 (T_368)))
T_366: (in signature of bios_kbd_get_keystroke : void)
  Class: Eq_365
  DataType: 
  OrigDataType: 
T_367: (in alOut : ptr16)
  Class: Eq_367
  DataType: ptr16
  OrigDataType: ptr16
T_368: (in out al_397 : ptr16)
  Class: Eq_367
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_369: (in bios_kbd_get_keystroke(out al_397) : byte)
  Class: Eq_369
  DataType: byte
  OrigDataType: byte
T_370: (in cl_399 : byte)
  Class: Eq_370
  DataType: byte
  OrigDataType: byte
T_371: (in fn0C00_0365 : ptr32)
  Class: Eq_177
  DataType: (ptr (fn T_373 (T_6, T_372)))
  OrigDataType: (ptr (fn T_373 (T_6, T_372)))
T_372: (in out cl_399 : ptr16)
  Class: Eq_180
  DataType: (ptr byte)
  OrigDataType: (ptr byte)
T_373: (in fn0C00_0365(ds, out cl_399) : byte)
  Class: Eq_373
  DataType: byte
  OrigDataType: byte
T_374: (in __syscall : ptr32)
  Class: Eq_374
  DataType: (ptr (fn T_376 (T_375)))
  OrigDataType: (ptr (fn T_376 (T_375)))
T_375: (in 0x10 : byte)
  Class: Eq_375
  DataType: byte
  OrigDataType: byte
T_376: (in __syscall(0x10) : void)
  Class: Eq_376
  DataType: void
  OrigDataType: void
T_377: (in cx_409 : word16)
  Class: Eq_377
  DataType: word16
  OrigDataType: word16
T_378: (in 0x16 : byte)
  Class: Eq_378
  DataType: byte
  OrigDataType: byte
T_379: (in DPB(cx_375, 0x16, 8, 8) : word16)
  Class: Eq_377
  DataType: word16
  OrigDataType: word16
T_380: (in 0x0000 : word16)
  Class: Eq_380
  DataType: word16
  OrigDataType: word16
T_381: (in si_372 + 0x0000 : word16)
  Class: Eq_381
  DataType: word16
  OrigDataType: word16
T_382: (in Mem222[ds:si_372 + 0x0000:word16] : word16)
  Class: Eq_382
  DataType: word16
  OrigDataType: word16
T_383: (in 0x0000 : word16)
  Class: Eq_383
  DataType: word16
  OrigDataType: word16
T_384: (in di_374 + 0x0000 : word16)
  Class: Eq_384
  DataType: word16
  OrigDataType: word16
T_385: (in Mem384[es_373:di_374 + 0x0000:word16] : word16)
  Class: Eq_382
  DataType: word16
  OrigDataType: word16
T_386: (in 0x0002 : word16)
  Class: Eq_386
  DataType: word16
  OrigDataType: word16
T_387: (in si_372 + 0x0002 : word16)
  Class: Eq_339
  DataType: word16
  OrigDataType: word16
T_388: (in 0x0002 : word16)
  Class: Eq_388
  DataType: word16
  OrigDataType: word16
T_389: (in di_374 + 0x0002 : word16)
  Class: Eq_344
  DataType: word16
  OrigDataType: word16
T_390: (in 0x0001 : word16)
  Class: Eq_390
  DataType: word16
  OrigDataType: word16
T_391: (in cx_375 - 0x0001 : word16)
  Class: Eq_346
  DataType: word16
  OrigDataType: word16
T_392: (in 0x0000 : word16)
  Class: Eq_346
  DataType: word16
  OrigDataType: word16
T_393: (in cx_375 == 0x0000 : bool)
  Class: Eq_393
  DataType: bool
  OrigDataType: bool
T_394: (in si_420 : word16)
  Class: Eq_394
  DataType: (memptr T_6 (struct 0002 (0 T_421 t0000)))
  OrigDataType: (memptr T_6 (struct 0002 (0 T_421 t0000)))
T_395: (in 0x03D4 : word16)
  Class: Eq_394
  DataType: word16
  OrigDataType: word16
T_396: (in es_422 : selector)
  Class: Eq_31
  DataType: (ptr (segment (66 (arr T_622) a0066)))
  OrigDataType: (ptr (segment (66 (arr T_622) a0066)))
T_397: (in 0x0415 : word16)
  Class: Eq_397
  DataType: (memptr T_6 (struct (0 T_398 t0000)))
  OrigDataType: (memptr T_6 (struct (0 T_398 t0000)))
T_398: (in Mem222[ds:0x0415:selector] : selector)
  Class: Eq_31
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_399: (in di_423 : word16)
  Class: Eq_399
  DataType: (memptr T_396 (struct 0002 (0 T_424 t0000)))
  OrigDataType: (memptr T_396 (struct 0002 (0 T_424 t0000)))
T_400: (in 0x0066 : word16)
  Class: Eq_399
  DataType: word16
  OrigDataType: word16
T_401: (in cx_425 : word16)
  Class: Eq_401
  DataType: word16
  OrigDataType: word16
T_402: (in 0x1D : byte)
  Class: Eq_402
  DataType: byte
  OrigDataType: byte
T_403: (in DPB(cx_409, 0x1D, 0, 8) : word16)
  Class: Eq_401
  DataType: word16
  OrigDataType: word16
T_404: (in 0x0000 : word16)
  Class: Eq_382
  DataType: word16
  OrigDataType: word16
T_405: (in 0x0000 : word16)
  Class: Eq_405
  DataType: word16
  OrigDataType: word16
T_406: (in di_374 + 0x0000 : word16)
  Class: Eq_406
  DataType: word16
  OrigDataType: word16
T_407: (in Mem414[es_373:di_374 + 0x0000:word16] : word16)
  Class: Eq_382
  DataType: word16
  OrigDataType: word16
T_408: (in 0x0002 : word16)
  Class: Eq_408
  DataType: word16
  OrigDataType: word16
T_409: (in di_374 + 0x0002 : word16)
  Class: Eq_344
  DataType: word16
  OrigDataType: word16
T_410: (in 0x0001 : word16)
  Class: Eq_410
  DataType: word16
  OrigDataType: word16
T_411: (in cx_409 - 0x0001 : word16)
  Class: Eq_377
  DataType: word16
  OrigDataType: word16
T_412: (in 0x0000 : word16)
  Class: Eq_377
  DataType: word16
  OrigDataType: word16
T_413: (in cx_409 == 0x0000 : bool)
  Class: Eq_413
  DataType: bool
  OrigDataType: bool
T_414: (in msdos_terminate : ptr32)
  Class: Eq_414
  DataType: (ptr (fn T_418 (T_417)))
  OrigDataType: (ptr (fn T_418 (T_417)))
T_415: (in signature of msdos_terminate : void)
  Class: Eq_414
  DataType: 
  OrigDataType: 
T_416: (in al : byte)
  Class: Eq_416
  DataType: byte
  OrigDataType: byte
T_417: (in 0x00 : byte)
  Class: Eq_416
  DataType: byte
  OrigDataType: byte
T_418: (in msdos_terminate(0x00) : void)
  Class: Eq_418
  DataType: void
  OrigDataType: void
T_419: (in 0x0000 : word16)
  Class: Eq_419
  DataType: word16
  OrigDataType: word16
T_420: (in si_420 + 0x0000 : word16)
  Class: Eq_420
  DataType: word16
  OrigDataType: word16
T_421: (in Mem222[ds:si_420 + 0x0000:word16] : word16)
  Class: Eq_421
  DataType: word16
  OrigDataType: word16
T_422: (in 0x0000 : word16)
  Class: Eq_422
  DataType: word16
  OrigDataType: word16
T_423: (in di_423 + 0x0000 : word16)
  Class: Eq_423
  DataType: word16
  OrigDataType: word16
T_424: (in Mem432[es_422:di_423 + 0x0000:word16] : word16)
  Class: Eq_421
  DataType: word16
  OrigDataType: word16
T_425: (in 0x0002 : word16)
  Class: Eq_425
  DataType: word16
  OrigDataType: word16
T_426: (in si_420 + 0x0002 : word16)
  Class: Eq_394
  DataType: word16
  OrigDataType: word16
T_427: (in 0x0002 : word16)
  Class: Eq_427
  DataType: word16
  OrigDataType: word16
T_428: (in di_423 + 0x0002 : word16)
  Class: Eq_399
  DataType: word16
  OrigDataType: word16
T_429: (in 0x0001 : word16)
  Class: Eq_429
  DataType: word16
  OrigDataType: word16
T_430: (in cx_425 - 0x0001 : word16)
  Class: Eq_401
  DataType: word16
  OrigDataType: word16
T_431: (in 0x0000 : word16)
  Class: Eq_401
  DataType: word16
  OrigDataType: word16
T_432: (in cx_425 == 0x0000 : bool)
  Class: Eq_432
  DataType: bool
  OrigDataType: bool
T_433: (in al : byte)
  Class: Eq_433
  DataType: byte
  OrigDataType: byte
T_434: (in __outb : ptr32)
  Class: Eq_434
  DataType: (ptr (fn T_437 (T_435, T_436)))
  OrigDataType: (ptr (fn T_437 (T_435, T_436)))
T_435: (in 0x03C7 : word16)
  Class: Eq_435
  DataType: word16
  OrigDataType: word16
T_436: (in cl : byte)
  Class: Eq_436
  DataType: byte
  OrigDataType: byte
T_437: (in __outb(0x03C7, cl) : void)
  Class: Eq_437
  DataType: void
  OrigDataType: void
T_438: (in al_6 : byte)
  Class: Eq_438
  DataType: byte
  OrigDataType: byte
T_439: (in __inb : ptr32)
  Class: Eq_439
  DataType: (ptr (fn T_441 (T_440)))
  OrigDataType: (ptr (fn T_441 (T_440)))
T_440: (in 0x03C9 : word16)
  Class: Eq_440
  DataType: word16
  OrigDataType: word16
T_441: (in __inb(0x03C9) : byte)
  Class: Eq_438
  DataType: byte
  OrigDataType: byte
T_442: (in al_8 : byte)
  Class: Eq_442
  DataType: byte
  OrigDataType: byte
T_443: (in __inb : ptr32)
  Class: Eq_443
  DataType: (ptr (fn T_445 (T_444)))
  OrigDataType: (ptr (fn T_445 (T_444)))
T_444: (in 0x03C9 : word16)
  Class: Eq_444
  DataType: word16
  OrigDataType: word16
T_445: (in __inb(0x03C9) : byte)
  Class: Eq_442
  DataType: byte
  OrigDataType: byte
T_446: (in al_10 : byte)
  Class: Eq_446
  DataType: byte
  OrigDataType: byte
T_447: (in __inb : ptr32)
  Class: Eq_447
  DataType: (ptr (fn T_449 (T_448)))
  OrigDataType: (ptr (fn T_449 (T_448)))
T_448: (in 0x03C9 : word16)
  Class: Eq_448
  DataType: word16
  OrigDataType: word16
T_449: (in __inb(0x03C9) : byte)
  Class: Eq_446
  DataType: byte
  OrigDataType: byte
T_450: (in ah_14 : byte)
  Class: Eq_450
  DataType: byte
  OrigDataType: byte
T_451: (in ds : selector)
  Class: Eq_6
  DataType: (ptr (segment (414 T_453 t0414)))
  OrigDataType: (ptr (segment (414 T_453 t0414)))
T_452: (in 0x0414 : word16)
  Class: Eq_452
  DataType: (memptr T_451 (struct (0 T_453 t0000)))
  OrigDataType: (memptr T_451 (struct (0 T_453 t0000)))
T_453: (in Mem0[ds:0x0414:byte] : byte)
  Class: Eq_453
  DataType: byte
  OrigDataType: byte
T_454: (in al_6 + Mem0[ds:0x0414:byte] : byte)
  Class: Eq_450
  DataType: byte
  OrigDataType: byte
T_455: (in bl_15 : byte)
  Class: Eq_455
  DataType: byte
  OrigDataType: byte
T_456: (in 0x0414 : word16)
  Class: Eq_456
  DataType: (memptr T_451 (struct (0 T_457 t0000)))
  OrigDataType: (memptr T_451 (struct (0 T_457 t0000)))
T_457: (in Mem0[ds:0x0414:byte] : byte)
  Class: Eq_453
  DataType: byte
  OrigDataType: byte
T_458: (in al_8 + Mem0[ds:0x0414:byte] : byte)
  Class: Eq_455
  DataType: byte
  OrigDataType: byte
T_459: (in bh_16 : byte)
  Class: Eq_459
  DataType: byte
  OrigDataType: byte
T_460: (in 0x0414 : word16)
  Class: Eq_460
  DataType: (memptr T_451 (struct (0 T_461 t0000)))
  OrigDataType: (memptr T_451 (struct (0 T_461 t0000)))
T_461: (in Mem0[ds:0x0414:byte] : byte)
  Class: Eq_453
  DataType: byte
  OrigDataType: byte
T_462: (in al_10 + Mem0[ds:0x0414:byte] : byte)
  Class: Eq_459
  DataType: byte
  OrigDataType: byte
T_463: (in __outb : ptr32)
  Class: Eq_463
  DataType: (ptr (fn T_465 (T_464, T_436)))
  OrigDataType: (ptr (fn T_465 (T_464, T_436)))
T_464: (in 0x03C8 : word16)
  Class: Eq_464
  DataType: word16
  OrigDataType: word16
T_465: (in __outb(0x03C8, cl) : void)
  Class: Eq_465
  DataType: void
  OrigDataType: void
T_466: (in __outb : ptr32)
  Class: Eq_466
  DataType: (ptr (fn T_468 (T_467, T_450)))
  OrigDataType: (ptr (fn T_468 (T_467, T_450)))
T_467: (in 0x03C9 : word16)
  Class: Eq_467
  DataType: word16
  OrigDataType: word16
T_468: (in __outb(0x03C9, ah_14) : void)
  Class: Eq_468
  DataType: void
  OrigDataType: void
T_469: (in __outb : ptr32)
  Class: Eq_469
  DataType: (ptr (fn T_471 (T_470, T_455)))
  OrigDataType: (ptr (fn T_471 (T_470, T_455)))
T_470: (in 0x03C9 : word16)
  Class: Eq_470
  DataType: word16
  OrigDataType: word16
T_471: (in __outb(0x03C9, bl_15) : void)
  Class: Eq_471
  DataType: void
  OrigDataType: void
T_472: (in __outb : ptr32)
  Class: Eq_472
  DataType: (ptr (fn T_474 (T_473, T_459)))
  OrigDataType: (ptr (fn T_474 (T_473, T_459)))
T_473: (in 0x03C9 : word16)
  Class: Eq_473
  DataType: word16
  OrigDataType: word16
T_474: (in __outb(0x03C9, bh_16) : void)
  Class: Eq_474
  DataType: void
  OrigDataType: void
T_475: (in al : byte)
  Class: Eq_475
  DataType: byte
  OrigDataType: byte
T_476: (in ax_11 : word16)
  Class: Eq_476
  DataType: word16
  OrigDataType: word16
T_477: (in 0x040E : word16)
  Class: Eq_477
  DataType: (memptr T_174 (struct (0 T_478 t0000)))
  OrigDataType: (memptr T_174 (struct (0 T_478 t0000)))
T_478: (in Mem0[ds:0x040E:word16] : word16)
  Class: Eq_476
  DataType: word16
  OrigDataType: word16
T_479: (in dx_ax_16 : word32)
  Class: Eq_479
  DataType: uint32
  OrigDataType: uint32
T_480: (in dx : word16)
  Class: Eq_480
  DataType: word16
  OrigDataType: word16
T_481: (in SEQ(dx, ax_11) : word32)
  Class: Eq_481
  DataType: word32
  OrigDataType: word32
T_482: (in 0x0009 : word16)
  Class: Eq_482
  DataType: word16
  OrigDataType: word16
T_483: (in SEQ(dx, ax_11) % 0x0009 : uint16)
  Class: Eq_483
  DataType: uint16
  OrigDataType: uint16
T_484: (in SEQ(SEQ(dx, ax_11) % 0x0009, ax_11) : word32)
  Class: Eq_479
  DataType: word32
  OrigDataType: word32
T_485: (in 0x0410 : word16)
  Class: Eq_485
  DataType: (memptr T_174 (struct (0 T_486 t0000)))
  OrigDataType: (memptr T_174 (struct (0 T_486 t0000)))
T_486: (in Mem0[ds:0x0410:word16] : word16)
  Class: Eq_486
  DataType: uint16
  OrigDataType: uint16
T_487: (in 0x04 : byte)
  Class: Eq_487
  DataType: uint8
  OrigDataType: uint8
T_488: (in Mem0[ds:0x0410:word16] >>u 0x04 : word16)
  Class: Eq_488
  DataType: uint16
  OrigDataType: uint16
T_489: (in 0x00A0 : word16)
  Class: Eq_489
  DataType: uint16
  OrigDataType: uint16
T_490: (in (Mem0[ds:0x0410:word16] >>u 0x04) *u 0x00A0 : uint32)
  Class: Eq_490
  DataType: uint32
  OrigDataType: uint32
T_491: (in (word16) ((Mem0[ds:0x0410:word16] >>u 0x04) *u 0x00A0) : word16)
  Class: Eq_491
  DataType: word16
  OrigDataType: word16
T_492: (in 0x0009 : word16)
  Class: Eq_492
  DataType: uint16
  OrigDataType: uint16
T_493: (in dx_ax_16 /u 0x0009 : uint16)
  Class: Eq_493
  DataType: uint16
  OrigDataType: uint16
T_494: (in (word16) ((Mem0[ds:0x0410:word16] >>u 0x04) *u 0x00A0) + dx_ax_16 /u 0x0009 : word16)
  Class: Eq_494
  DataType: word16
  OrigDataType: word16
T_495: (in 0x0412 : word16)
  Class: Eq_495
  DataType: (memptr T_174 (struct (0 T_496 t0000)))
  OrigDataType: (memptr T_174 (struct (0 T_496 t0000)))
T_496: (in Mem20[ds:0x0412:word16] : word16)
  Class: Eq_494
  DataType: word16
  OrigDataType: word16
T_497: (in ax_17 : word16)
  Class: Eq_497
  DataType: word16
  OrigDataType: word16
T_498: (in dx_ax_16 /u 0x0009 : uint16)
  Class: Eq_497
  DataType: uint16
  OrigDataType: uint16
T_499: (in al_24 : byte)
  Class: Eq_499
  DataType: byte
  OrigDataType: byte
T_500: (in __inb : ptr32)
  Class: Eq_500
  DataType: (ptr (fn T_502 (T_501)))
  OrigDataType: (ptr (fn T_502 (T_501)))
T_501: (in 0x03DA : word16)
  Class: Eq_501
  DataType: word16
  OrigDataType: word16
T_502: (in __inb(0x03DA) : byte)
  Class: Eq_499
  DataType: byte
  OrigDataType: byte
T_503: (in DPB(ax_17, al_24, 0, 8) : word16)
  Class: Eq_497
  DataType: word16
  OrigDataType: word16
T_504: (in 0x08 : byte)
  Class: Eq_504
  DataType: byte
  OrigDataType: byte
T_505: (in al_24 & 0x08 : byte)
  Class: Eq_505
  DataType: byte
  OrigDataType: byte
T_506: (in 0x00 : byte)
  Class: Eq_505
  DataType: byte
  OrigDataType: byte
T_507: (in (al_24 & 0x08) != 0x00 : bool)
  Class: Eq_507
  DataType: bool
  OrigDataType: bool
T_508: (in __outw : ptr32)
  Class: Eq_508
  DataType: (ptr (fn T_513 (T_509, T_512)))
  OrigDataType: (ptr (fn T_513 (T_509, T_512)))
T_509: (in 0x03D4 : word16)
  Class: Eq_509
  DataType: word16
  OrigDataType: word16
T_510: (in 0x0413 : word16)
  Class: Eq_510
  DataType: (memptr T_174 (struct (0 T_511 t0000)))
  OrigDataType: (memptr T_174 (struct (0 T_511 t0000)))
T_511: (in Mem20[ds:0x0413:byte] : byte)
  Class: Eq_511
  DataType: byte
  OrigDataType: byte
T_512: (in DPB(ax_17, Mem20[ds:0x0413:byte], 8, 8) : word16)
  Class: Eq_512
  DataType: word16
  OrigDataType: word16
T_513: (in __outw(0x03D4, DPB(ax_17, Mem20[ds:0x0413:byte], 8, 8)) : void)
  Class: Eq_513
  DataType: void
  OrigDataType: void
T_514: (in __outw : ptr32)
  Class: Eq_514
  DataType: (ptr (fn T_519 (T_515, T_518)))
  OrigDataType: (ptr (fn T_519 (T_515, T_518)))
T_515: (in 0x03D4 : word16)
  Class: Eq_515
  DataType: word16
  OrigDataType: word16
T_516: (in 0x0412 : word16)
  Class: Eq_516
  DataType: (memptr T_174 (struct (0 T_517 t0000)))
  OrigDataType: (memptr T_174 (struct (0 T_517 t0000)))
T_517: (in Mem20[ds:0x0412:byte] : byte)
  Class: Eq_494
  DataType: byte
  OrigDataType: byte
T_518: (in DPB(ax_17, Mem20[ds:0x0412:byte], 8, 8) : word16)
  Class: Eq_518
  DataType: word16
  OrigDataType: word16
T_519: (in __outw(0x03D4, DPB(ax_17, Mem20[ds:0x0412:byte], 8, 8)) : void)
  Class: Eq_519
  DataType: void
  OrigDataType: void
T_520: (in __inb : ptr32)
  Class: Eq_520
  DataType: (ptr (fn T_522 (T_521)))
  OrigDataType: (ptr (fn T_522 (T_521)))
T_521: (in 0x03DA : word16)
  Class: Eq_521
  DataType: word16
  OrigDataType: word16
T_522: (in __inb(0x03DA) : byte)
  Class: Eq_522
  DataType: byte
  OrigDataType: byte
T_523: (in 0x08 : byte)
  Class: Eq_523
  DataType: byte
  OrigDataType: byte
T_524: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_524
  DataType: byte
  OrigDataType: byte
T_525: (in 0x00 : byte)
  Class: Eq_524
  DataType: byte
  OrigDataType: byte
T_526: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_526
  DataType: bool
  OrigDataType: bool
T_527: (in __outw : ptr32)
  Class: Eq_527
  DataType: (ptr (fn T_537 (T_528, T_536)))
  OrigDataType: (ptr (fn T_537 (T_528, T_536)))
T_528: (in 0x03D4 : word16)
  Class: Eq_528
  DataType: word16
  OrigDataType: word16
T_529: (in 0x0000 : word16)
  Class: Eq_529
  DataType: word16
  OrigDataType: word16
T_530: (in 0x0410 : word16)
  Class: Eq_530
  DataType: (memptr T_174 (struct (0 T_531 t0000)))
  OrigDataType: (memptr T_174 (struct (0 T_531 t0000)))
T_531: (in Mem20[ds:0x0410:word16] : word16)
  Class: Eq_486
  DataType: word16
  OrigDataType: word16
T_532: (in SEQ(0x0000, Mem20[ds:0x0410:word16]) : word32)
  Class: Eq_532
  DataType: word32
  OrigDataType: word32
T_533: (in 0x0010 : word16)
  Class: Eq_533
  DataType: word16
  OrigDataType: word16
T_534: (in SEQ(0x0000, Mem20[ds:0x0410:word16]) % 0x0010 : uint16)
  Class: Eq_534
  DataType: uint16
  OrigDataType: uint16
T_535: (in 0x08 : byte)
  Class: Eq_535
  DataType: byte
  OrigDataType: byte
T_536: (in DPB(SEQ(0x0000, Mem20[ds:0x0410:word16]) % 0x0010, 0x08, 0, 8) : word16)
  Class: Eq_536
  DataType: word16
  OrigDataType: word16
T_537: (in __outw(0x03D4, DPB(SEQ(0x0000, Mem20[ds:0x0410:word16]) % 0x0010, 0x08, 0, 8)) : void)
  Class: Eq_537
  DataType: void
  OrigDataType: void
T_538: (in al_65 : byte)
  Class: Eq_538
  DataType: byte
  OrigDataType: byte
T_539: (in 0x0000 : word16)
  Class: Eq_539
  DataType: word16
  OrigDataType: word16
T_540: (in 0x040E : word16)
  Class: Eq_540
  DataType: (memptr T_174 (struct (0 T_541 t0000)))
  OrigDataType: (memptr T_174 (struct (0 T_541 t0000)))
T_541: (in Mem20[ds:0x040E:word16] : word16)
  Class: Eq_476
  DataType: word16
  OrigDataType: word16
T_542: (in 0x0001 : word16)
  Class: Eq_542
  DataType: word16
  OrigDataType: word16
T_543: (in Mem20[ds:0x040E:word16] - 0x0001 : word16)
  Class: Eq_543
  DataType: word16
  OrigDataType: word16
T_544: (in SEQ(0x0000, Mem20[ds:0x040E:word16] - 0x0001) : word32)
  Class: Eq_544
  DataType: word32
  OrigDataType: word32
T_545: (in 0x0009 : word16)
  Class: Eq_545
  DataType: word16
  OrigDataType: word16
T_546: (in SEQ(0x0000, Mem20[ds:0x040E:word16] - 0x0001) % 0x0009 : uint16)
  Class: Eq_546
  DataType: uint16
  OrigDataType: uint16
T_547: (in (byte) (SEQ(0x0000, Mem20[ds:0x040E:word16] - 0x0001) % 0x0009) : byte)
  Class: Eq_538
  DataType: byte
  OrigDataType: byte
T_548: (in __outb : ptr32)
  Class: Eq_548
  DataType: (ptr (fn T_551 (T_549, T_550)))
  OrigDataType: (ptr (fn T_551 (T_549, T_550)))
T_549: (in 0x03C0 : word16)
  Class: Eq_549
  DataType: word16
  OrigDataType: word16
T_550: (in 0x33 : byte)
  Class: Eq_550
  DataType: byte
  OrigDataType: byte
T_551: (in __outb(0x03C0, 0x33) : void)
  Class: Eq_551
  DataType: void
  OrigDataType: void
T_552: (in __outb : ptr32)
  Class: Eq_552
  DataType: (ptr (fn T_556 (T_553, T_555)))
  OrigDataType: (ptr (fn T_556 (T_553, T_555)))
T_553: (in 0x03C0 : word16)
  Class: Eq_553
  DataType: word16
  OrigDataType: word16
T_554: (in 0x20 : byte)
  Class: Eq_554
  DataType: byte
  OrigDataType: byte
T_555: (in al_65 | 0x20 : byte)
  Class: Eq_555
  DataType: byte
  OrigDataType: byte
T_556: (in __outb(0x03C0, al_65 | 0x20) : void)
  Class: Eq_556
  DataType: void
  OrigDataType: void
T_557: (in al_65 | 0x20 : byte)
  Class: Eq_557
  DataType: byte
  OrigDataType: byte
T_558: (in al : byte)
  Class: Eq_558
  DataType: byte
  OrigDataType: byte
T_559: (in cx_14 : word16)
  Class: Eq_559
  DataType: word16
  OrigDataType: word16
T_560: (in 0x001F : word16)
  Class: Eq_559
  DataType: word16
  OrigDataType: word16
T_561: (in __inb : ptr32)
  Class: Eq_561
  DataType: (ptr (fn T_563 (T_562)))
  OrigDataType: (ptr (fn T_563 (T_562)))
T_562: (in 0x03DA : word16)
  Class: Eq_562
  DataType: word16
  OrigDataType: word16
T_563: (in __inb(0x03DA) : byte)
  Class: Eq_563
  DataType: byte
  OrigDataType: byte
T_564: (in 0x08 : byte)
  Class: Eq_564
  DataType: byte
  OrigDataType: byte
T_565: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_565
  DataType: byte
  OrigDataType: byte
T_566: (in 0x00 : byte)
  Class: Eq_565
  DataType: byte
  OrigDataType: byte
T_567: (in (__inb(0x03DA) & 0x08) != 0x00 : bool)
  Class: Eq_567
  DataType: bool
  OrigDataType: bool
T_568: (in __inb : ptr32)
  Class: Eq_568
  DataType: (ptr (fn T_570 (T_569)))
  OrigDataType: (ptr (fn T_570 (T_569)))
T_569: (in 0x03DA : word16)
  Class: Eq_569
  DataType: word16
  OrigDataType: word16
T_570: (in __inb(0x03DA) : byte)
  Class: Eq_570
  DataType: byte
  OrigDataType: byte
T_571: (in 0x08 : byte)
  Class: Eq_571
  DataType: byte
  OrigDataType: byte
T_572: (in __inb(0x03DA) & 0x08 : byte)
  Class: Eq_572
  DataType: byte
  OrigDataType: byte
T_573: (in 0x00 : byte)
  Class: Eq_572
  DataType: byte
  OrigDataType: byte
T_574: (in (__inb(0x03DA) & 0x08) == 0x00 : bool)
  Class: Eq_574
  DataType: bool
  OrigDataType: bool
T_575: (in fn0C00_02CE : ptr32)
  Class: Eq_575
  DataType: (ptr (fn T_578 (T_577, T_179)))
  OrigDataType: (ptr (fn T_578 (T_577, T_179)))
T_576: (in signature of fn0C00_02CE : void)
  Class: Eq_575
  DataType: 
  OrigDataType: 
T_577: (in 0x07 : byte)
  Class: Eq_436
  DataType: byte
  OrigDataType: byte
T_578: (in fn0C00_02CE(0x07, ds) : byte)
  Class: Eq_578
  DataType: byte
  OrigDataType: byte
T_579: (in fn0C00_02CE : ptr32)
  Class: Eq_575
  DataType: (ptr (fn T_581 (T_580, T_179)))
  OrigDataType: (ptr (fn T_581 (T_580, T_179)))
T_580: (in 0x3F : byte)
  Class: Eq_436
  DataType: byte
  OrigDataType: byte
T_581: (in fn0C00_02CE(0x3F, ds) : byte)
  Class: Eq_581
  DataType: byte
  OrigDataType: byte
T_582: (in 0x0001 : word16)
  Class: Eq_582
  DataType: word16
  OrigDataType: word16
T_583: (in cx_14 - 0x0001 : word16)
  Class: Eq_559
  DataType: word16
  OrigDataType: word16
T_584: (in al_33 : byte)
  Class: Eq_584
  DataType: byte
  OrigDataType: byte
T_585: (in fn0C00_02CE : ptr32)
  Class: Eq_575
  DataType: (ptr (fn T_587 (T_586, T_179)))
  OrigDataType: (ptr (fn T_587 (T_586, T_179)))
T_586: (in 0x3F : byte)
  Class: Eq_436
  DataType: byte
  OrigDataType: byte
T_587: (in fn0C00_02CE(0x3F, ds) : byte)
  Class: Eq_584
  DataType: byte
  OrigDataType: byte
T_588: (in cl_37 : byte)
  Class: Eq_588
  DataType: byte
  OrigDataType: byte
T_589: (in (byte) cx_14 : byte)
  Class: Eq_589
  DataType: byte
  OrigDataType: byte
T_590: (in *clOut : byte)
  Class: Eq_589
  DataType: 
  OrigDataType: 
T_591: (in 0x0000 : word16)
  Class: Eq_559
  DataType: 
  OrigDataType: 
T_592: (in cx_14 != 0x0000 : bool)
  Class: Eq_592
  DataType: 
  OrigDataType: 
T_593: (in 0x0414 : word16)
  Class: Eq_593
  DataType: 
  OrigDataType: 
T_594: (in Mem0[ds:0x0414:byte] : byte)
  Class: Eq_594
  DataType: 
  OrigDataType: 
T_595: (in -Mem0[ds:0x0414:byte] : byte)
  Class: Eq_595
  DataType: 
  OrigDataType: 
T_596: (in Mem40[ds:0x0414:byte] : byte)
  Class: Eq_595
  DataType: 
  OrigDataType: 
T_597: (in bh_2 : byte)
  Class: Eq_597
  DataType: 
  OrigDataType: 
T_598: (in 0xFF : byte)
  Class: Eq_597
  DataType: 
  OrigDataType: 
T_599: (in __outb : ptr32)
  Class: Eq_599
  DataType: 
  OrigDataType: 
T_600: (in 0x03C8 : word16)
  Class: Eq_600
  DataType: 
  OrigDataType: 
T_601: (in __outb(0x03C8, bh_2) : void)
  Class: Eq_601
  DataType: 
  OrigDataType: 
T_602: (in __outb : ptr32)
  Class: Eq_602
  DataType: 
  OrigDataType: 
T_603: (in 0x03C9 : word16)
  Class: Eq_603
  DataType: 
  OrigDataType: 
T_604: (in 0x00 : byte)
  Class: Eq_604
  DataType: 
  OrigDataType: 
T_605: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_605
  DataType: 
  OrigDataType: 
T_606: (in __outb : ptr32)
  Class: Eq_606
  DataType: 
  OrigDataType: 
T_607: (in 0x03C9 : word16)
  Class: Eq_607
  DataType: 
  OrigDataType: 
T_608: (in 0x00 : byte)
  Class: Eq_608
  DataType: 
  OrigDataType: 
T_609: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_609
  DataType: 
  OrigDataType: 
T_610: (in __outb : ptr32)
  Class: Eq_610
  DataType: 
  OrigDataType: 
T_611: (in 0x03C9 : word16)
  Class: Eq_611
  DataType: 
  OrigDataType: 
T_612: (in 0x00 : byte)
  Class: Eq_612
  DataType: 
  OrigDataType: 
T_613: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_613
  DataType: 
  OrigDataType: 
T_614: (in 0x01 : byte)
  Class: Eq_614
  DataType: 
  OrigDataType: 
T_615: (in bh_2 - 0x01 : byte)
  Class: Eq_597
  DataType: 
  OrigDataType: 
T_616: (in 0x00 : byte)
  Class: Eq_597
  DataType: 
  OrigDataType: 
T_617: (in bh_2 != 0x00 : bool)
  Class: Eq_617
  DataType: 
  OrigDataType: 
T_618:
  Class: Eq_618
  DataType: 
  OrigDataType: (struct 0001 (0 T_9 t0000))
T_619:
  Class: Eq_619
  DataType: 
  OrigDataType: (struct 0001 (0 T_12 t0000))
T_620:
  Class: Eq_620
  DataType: 
  OrigDataType: (struct 0002 (0 T_382 t0000))
T_621:
  Class: Eq_621
  DataType: 
  OrigDataType: (struct 0002 (0 T_421 t0000))
T_622:
  Class: Eq_622
  DataType: 
  OrigDataType: (struct 0002 (0 T_424 t0000))
*/
