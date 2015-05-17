// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_243/ia32_com/subject.exe
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
T_7: (in __outb : ptr32)
  Class: Eq_7
  DataType: (ptr (fn T_10 (T_8, T_9)))
  OrigDataType: (ptr (fn T_10 (T_8, T_9)))
T_8: (in 0x03C8 : word16)
  Class: Eq_8
  DataType: word16
  OrigDataType: word16
T_9: (in 0x01 : byte)
  Class: Eq_9
  DataType: byte
  OrigDataType: byte
T_10: (in __outb(0x03C8, 0x01) : void)
  Class: Eq_10
  DataType: void
  OrigDataType: void
T_11: (in sp_1 : word16)
  Class: Eq_11
  DataType: (memptr T_123 (struct 000C (FFFFFFFE T_137 tFFFFFFFE) (0 T_126 t0000) (8 T_182 t0008) (A T_47 t000A)))
  OrigDataType: (memptr T_123 (struct 000C (FFFFFFFE T_137 tFFFFFFFE) (0 T_126 t0000) (8 T_182 t0008) (A T_47 t000A)))
T_12: (in fp : ptr16)
  Class: Eq_11
  DataType: ptr16
  OrigDataType: ptr16
T_13: (in ah_13 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_14: (in 0x00 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_15: (in cx_11 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in cx : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_17: (in 0x80 : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in DPB(cx, 0x80, 0, 8) : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_19: (in 0x0001 : word16)
  Class: Eq_19
  DataType: word16
  OrigDataType: word16
T_20: (in cx_11 - 0x0001 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_21: (in 0x0000 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_22: (in cx_11 != 0x0000 : bool)
  Class: Eq_22
  DataType: bool
  OrigDataType: bool
T_23: (in 0xCC : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_24: (in 0x0C00 : selector)
  Class: Eq_24
  DataType: (ptr (segment (119 T_26 t0119)))
  OrigDataType: (ptr (segment (119 T_26 t0119)))
T_25: (in 0x0119 : word16)
  Class: Eq_25
  DataType: (memptr T_24 (struct (0 T_26 t0000)))
  OrigDataType: (memptr T_24 (struct (0 T_26 t0000)))
T_26: (in Mem209[0x0C00:0x0119:byte] : byte)
  Class: Eq_23
  DataType: byte
  OrigDataType: byte
T_27: (in __outb : ptr32)
  Class: Eq_27
  DataType: (ptr (fn T_31 (T_28, T_30)))
  OrigDataType: (ptr (fn T_31 (T_28, T_30)))
T_28: (in 0x03C9 : word16)
  Class: Eq_28
  DataType: word16
  OrigDataType: word16
T_29: (in 0x00 : byte)
  Class: Eq_29
  DataType: byte
  OrigDataType: byte
T_30: (in ah_13 + 0x00 : byte)
  Class: Eq_30
  DataType: byte
  OrigDataType: byte
T_31: (in __outb(0x03C9, ah_13 + 0x00) : void)
  Class: Eq_31
  DataType: void
  OrigDataType: void
T_32: (in __outb : ptr32)
  Class: Eq_32
  DataType: (ptr (fn T_35 (T_33, T_34)))
  OrigDataType: (ptr (fn T_35 (T_33, T_34)))
T_33: (in 0x03C9 : word16)
  Class: Eq_33
  DataType: word16
  OrigDataType: word16
T_34: (in 0x00 : byte)
  Class: Eq_34
  DataType: byte
  OrigDataType: byte
T_35: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_35
  DataType: void
  OrigDataType: void
T_36: (in __outb : ptr32)
  Class: Eq_36
  DataType: (ptr (fn T_39 (T_37, T_38)))
  OrigDataType: (ptr (fn T_39 (T_37, T_38)))
T_37: (in 0x03C9 : word16)
  Class: Eq_37
  DataType: word16
  OrigDataType: word16
T_38: (in 0x00 : byte)
  Class: Eq_38
  DataType: byte
  OrigDataType: byte
T_39: (in __outb(0x03C9, 0x00) : void)
  Class: Eq_39
  DataType: void
  OrigDataType: void
T_40: (in 0x01 : byte)
  Class: Eq_40
  DataType: byte
  OrigDataType: byte
T_41: (in ah_13 + 0x01 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_42: (in 0xC1 : byte)
  Class: Eq_13
  DataType: byte
  OrigDataType: byte
T_43: (in ah_13 != 0xC1 : bool)
  Class: Eq_43
  DataType: bool
  OrigDataType: bool
T_44: (in ch_31 : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_45: (in cs : selector)
  Class: Eq_45
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_46: (in SLICE(cs, byte, 8) : byte)
  Class: Eq_44
  DataType: byte
  OrigDataType: byte
T_47: (in cx_33 : word16)
  Class: Eq_47
  DataType: (ptr (struct (0 (arr T_391) a0000)))
  OrigDataType: (ptr (struct (0 (arr T_391) a0000)))
T_48: (in 0x30 : byte)
  Class: Eq_48
  DataType: byte
  OrigDataType: byte
T_49: (in ch_31 + 0x30 : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_50: (in DPB(cs, ch_31 + 0x30, 8, 8) : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_51: (in es_174 : selector)
  Class: Eq_47
  DataType: (ptr (segment (0 (arr T_390) a0000)))
  OrigDataType: (ptr (segment (0 (arr T_390) a0000)))
T_52: (in cx_38 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_53: (in 0x31 : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_54: (in ch_31 + 0x31 : byte)
  Class: Eq_54
  DataType: byte
  OrigDataType: byte
T_55: (in DPB(cs, ch_31 + 0x31, 8, 8) : selector)
  Class: Eq_52
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_56: (in cx_177 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_57: (in 0x0200 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_58: (in bx : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_59: (in 0x067F : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in bx + 0x067F : word16)
  Class: Eq_58
  DataType: word16
  OrigDataType: word16
T_61: (in 0x067F : word16)
  Class: Eq_61
  DataType: word16
  OrigDataType: word16
T_62: (in bx & 0x067F : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in di : word16)
  Class: Eq_63
  DataType: (memptr T_47 (struct 0002 (0 T_66 t0000)))
  OrigDataType: (memptr T_47 (struct 0002 (0 T_66 t0000)))
T_64: (in 0x0000 : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in di + 0x0000 : word16)
  Class: Eq_65
  DataType: word16
  OrigDataType: word16
T_66: (in Mem55[cx_33:di + 0x0000:word16] : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_67: (in 0x0001 : word16)
  Class: Eq_67
  DataType: word16
  OrigDataType: word16
T_68: (in cx_177 - 0x0001 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_69: (in 0x0002 : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in di + 0x0002 : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_71: (in ch_198 : byte)
  Class: Eq_71
  DataType: byte
  OrigDataType: byte
T_72: (in SLICE(cx_177, byte, 8) : byte)
  Class: Eq_71
  DataType: byte
  OrigDataType: byte
T_73: (in 0x0000 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_74: (in cx_177 != 0x0000 : bool)
  Class: Eq_74
  DataType: bool
  OrigDataType: bool
T_75: (in __syscall : ptr32)
  Class: Eq_75
  DataType: (ptr (fn T_77 (T_76)))
  OrigDataType: (ptr (fn T_77 (T_76)))
T_76: (in 0x10 : byte)
  Class: Eq_76
  DataType: byte
  OrigDataType: byte
T_77: (in __syscall(0x10) : void)
  Class: Eq_77
  DataType: void
  OrigDataType: void
T_78: (in si_76 : word16)
  Class: Eq_78
  DataType: (memptr T_47 (struct 0002 (0 T_104 t0000)))
  OrigDataType: (memptr T_47 (struct 0002 (0 T_104 t0000)))
T_79: (in 0x0000 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_80: (in di_100 : word16)
  Class: Eq_80
  DataType: (memptr T_51 (struct 0002 (0 T_89 t0000)))
  OrigDataType: (memptr T_51 (struct 0002 (0 T_89 t0000)))
T_81: (in 0x0000 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_82: (in cx_101 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_83: (in 0x01 : byte)
  Class: Eq_83
  DataType: byte
  OrigDataType: byte
T_84: (in ch_198 + 0x01 : byte)
  Class: Eq_84
  DataType: byte
  OrigDataType: byte
T_85: (in DPB(cx_177, ch_198 + 0x01, 8, 8) : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_86: (in ax_207 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in 0x0000 : word16)
  Class: Eq_87
  DataType: word16
  OrigDataType: word16
T_88: (in di_100 + 0x0000 : word16)
  Class: Eq_88
  DataType: word16
  OrigDataType: word16
T_89: (in Mem99[es_174:di_100 + 0x0000:word16] : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_90: (in 0x0002 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in di_100 + 0x0002 : word16)
  Class: Eq_80
  DataType: word16
  OrigDataType: word16
T_92: (in 0x0001 : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in cx_101 - 0x0001 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_94: (in 0x0000 : word16)
  Class: Eq_82
  DataType: word16
  OrigDataType: word16
T_95: (in cx_101 != 0x0000 : bool)
  Class: Eq_95
  DataType: bool
  OrigDataType: bool
T_96: (in ax_87 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_97: (in al_91 : byte)
  Class: Eq_97
  DataType: bcu8
  OrigDataType: bcu8
T_98: (in ah_89 : byte)
  Class: Eq_98
  DataType: int8
  OrigDataType: int8
T_99: (in -ah_89 : byte)
  Class: Eq_99
  DataType: int8
  OrigDataType: int8
T_100: (in al_91 + -ah_89 : byte)
  Class: Eq_100
  DataType: byte
  OrigDataType: byte
T_101: (in DPB(ax_87, al_91 + -ah_89, 0, 8) : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_102: (in 0x0000 : word16)
  Class: Eq_102
  DataType: word16
  OrigDataType: word16
T_103: (in si_76 + 0x0000 : word16)
  Class: Eq_103
  DataType: word16
  OrigDataType: word16
T_104: (in Mem55[cx_33:si_76 + 0x0000:word16] : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_105: (in SLICE(ax_87, byte, 8) : byte)
  Class: Eq_98
  DataType: byte
  OrigDataType: byte
T_106: (in (byte) ax_87 : byte)
  Class: Eq_106
  DataType: byte
  OrigDataType: byte
T_107: (in (byte) ax_87 + ah_89 : byte)
  Class: Eq_97
  DataType: byte
  OrigDataType: byte
T_108: (in 0x0002 : word16)
  Class: Eq_108
  DataType: word16
  OrigDataType: word16
T_109: (in si_76 + 0x0002 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_110: (in DPB(ax_87, al_91, 0, 8) : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_111: (in 0xC8 : byte)
  Class: Eq_97
  DataType: bcu8
  OrigDataType: bcu8
T_112: (in al_91 <u 0xC8 : bool)
  Class: Eq_112
  DataType: bool
  OrigDataType: bool
T_113: (in si_104 : word16)
  Class: Eq_113
  DataType: (union (cups16 u0) ((memptr T_47 (struct 0002 (0 T_118 t0000))) u1))
  OrigDataType: (union (cups16 u0) ((memptr T_47 (struct 0002 (0 T_118 t0000))) u1))
T_114: (in 0x0000 : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_115: (in ax_130 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_116: (in 0x0000 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in si_104 + 0x0000 : word16)
  Class: Eq_117
  DataType: word16
  OrigDataType: word16
T_118: (in Mem99[cx_33:si_104 + 0x0000:word16] : word16)
  Class: Eq_118
  DataType: word16
  OrigDataType: word16
T_119: (in 0x00 : byte)
  Class: Eq_119
  DataType: byte
  OrigDataType: byte
T_120: (in DPB(Mem99[cx_33:si_104 + 0x0000:word16], 0x00, 8, 8) : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_121: (in 0x0002 : word16)
  Class: Eq_121
  DataType: word16
  OrigDataType: word16
T_122: (in sp_1 - 0x0002 : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_123: (in ss : selector)
  Class: Eq_123
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_124: (in 0x0000 : word16)
  Class: Eq_124
  DataType: word16
  OrigDataType: word16
T_125: (in sp_1 + 0x0000 : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_126: (in Mem134[ss:sp_1 + 0x0000:word16] : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_127: (in 0x0002 : word16)
  Class: Eq_127
  DataType: word16
  OrigDataType: word16
T_128: (in si_104 + 0x0002 : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_129: (in cx_122 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_130: (in 0x0001 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in cx_122 - 0x0001 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_132: (in 0x0000 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_133: (in cx_122 != 0x0000 : bool)
  Class: Eq_133
  DataType: bool
  OrigDataType: bool
T_134: (in 0x0005 : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_135: (in 0x0002 : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_136: (in sp_1 - 0x0002 : word16)
  Class: Eq_136
  DataType: word16
  OrigDataType: word16
T_137: (in Mem140[ss:sp_1 - 0x0002:word16] : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_138: (in bx_150 : word16)
  Class: Eq_138
  DataType: word16
  OrigDataType: word16
T_139: (in bp_151 : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_140: (in di_153 : word16)
  Class: Eq_140
  DataType: (memptr T_52 (struct 0001 (FFFFFEC1 T_230 tFFFFFEC1) (0 T_194 t0000)))
  OrigDataType: (memptr T_52 (struct 0001 (FFFFFEC1 T_230 tFFFFFEC1) (0 T_194 t0000)))
T_141: (in dx_149 : word16)
  Class: Eq_141
  DataType: uint16
  OrigDataType: uint16
T_142: (in fn0C00_01A4 : ptr32)
  Class: Eq_142
  DataType: (ptr (fn T_172 (T_115, T_52, T_159, T_160, T_161, T_162, T_163, T_164, T_165, T_166, T_167, T_168, T_169, T_170, T_171)))
  OrigDataType: (ptr (fn T_172 (T_115, T_52, T_159, T_160, T_161, T_162, T_163, T_164, T_165, T_166, T_167, T_168, T_169, T_170, T_171)))
T_143: (in signature of fn0C00_01A4 : void)
  Class: Eq_142
  DataType: 
  OrigDataType: 
T_144: (in ax : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_145: (in fs : selector)
  Class: Eq_52
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_146: (in wArg02 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_147: (in wArg04 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_148: (in wArg06 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_149: (in wArg08 : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_150: (in wArg0A : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_151: (in wArg0C : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_152: (in wArg0E : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_153: (in cxOut : ptr16)
  Class: Eq_153
  DataType: ptr16
  OrigDataType: ptr16
T_154: (in dxOut : ptr16)
  Class: Eq_154
  DataType: ptr16
  OrigDataType: ptr16
T_155: (in bxOut : ptr16)
  Class: Eq_155
  DataType: ptr16
  OrigDataType: ptr16
T_156: (in bpOut : ptr16)
  Class: Eq_156
  DataType: ptr16
  OrigDataType: ptr16
T_157: (in siOut : ptr16)
  Class: Eq_157
  DataType: ptr16
  OrigDataType: ptr16
T_158: (in diOut : ptr16)
  Class: Eq_158
  DataType: ptr16
  OrigDataType: ptr16
T_159: (in wArg00 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_160: (in wArg02 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_161: (in wArg04 : word16)
  Class: Eq_148
  DataType: word16
  OrigDataType: word16
T_162: (in wArg06 : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_163: (in wArg08 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_164: (in wArg0A : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_165: (in wArg0C : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_166: (in out cx_101 : ptr16)
  Class: Eq_153
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_167: (in out dx_149 : ptr16)
  Class: Eq_154
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_168: (in out bx_150 : ptr16)
  Class: Eq_155
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_169: (in out bp_151 : ptr16)
  Class: Eq_156
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_170: (in out si_104 : ptr16)
  Class: Eq_157
  DataType: (ptr (memptr T_47 (struct 0002 (0 T_118 t0000))))
  OrigDataType: (ptr (memptr T_47 (struct 0002 (0 T_118 t0000))))
T_171: (in out di_153 : ptr16)
  Class: Eq_158
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_172: (in fn0C00_01A4(ax_130, cx_38, wArg00, wArg02, wArg04, wArg06, wArg08, wArg0A, wArg0C, out cx_101, out dx_149, out bx_150, out bp_151, out si_104, out di_153) : word16)
  Class: Eq_172
  DataType: word16
  OrigDataType: word16
T_173: (in 0x000C : word16)
  Class: Eq_173
  DataType: word16
  OrigDataType: word16
T_174: (in sp_1 + 0x000C : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_175: (in 0x01F8 : word16)
  Class: Eq_113
  DataType: cups16
  OrigDataType: cups16
T_176: (in si_104 <u 0x01F8 : bool)
  Class: Eq_176
  DataType: bool
  OrigDataType: bool
T_177: (in 0x06 : byte)
  Class: Eq_177
  DataType: byte
  OrigDataType: byte
T_178: (in DPB(cx_101, 0x06, 0, 8) : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_179: (in 0x000A : word16)
  Class: Eq_179
  DataType: word16
  OrigDataType: word16
T_180: (in sp_1 + 0x000A : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_181: (in Mem159[ss:sp_1 + 0x000A:word16] : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_182: (in 0xA000 : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_183: (in 0x0008 : word16)
  Class: Eq_183
  DataType: word16
  OrigDataType: word16
T_184: (in sp_1 + 0x0008 : word16)
  Class: Eq_184
  DataType: word16
  OrigDataType: word16
T_185: (in Mem161[ss:sp_1 + 0x0008:word16] : word16)
  Class: Eq_52
  DataType: word16
  OrigDataType: word16
T_186: (in es_162 : selector)
  Class: Eq_52
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_187: (in sp_1 + 0x0008 : word16)
  Class: Eq_187
  DataType: word16
  OrigDataType: word16
T_188: (in Mem161[ss:sp_1 + 0x0008:selector] : selector)
  Class: Eq_52
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_189: (in cx_165 : word16)
  Class: Eq_189
  DataType: word16
  OrigDataType: word16
T_190: (in 0xFF : byte)
  Class: Eq_190
  DataType: byte
  OrigDataType: byte
T_191: (in DPB(cx_101, 0xFF, 8, 8) : word16)
  Class: Eq_189
  DataType: word16
  OrigDataType: word16
T_192: (in 0x0000 : word16)
  Class: Eq_192
  DataType: word16
  OrigDataType: word16
T_193: (in di_153 + 0x0000 : word16)
  Class: Eq_193
  DataType: word16
  OrigDataType: word16
T_194: (in Mem161[cx_38:di_153 + 0x0000:word16] : word16)
  Class: Eq_194
  DataType: word16
  OrigDataType: word16
T_195: (in 0x0000 : word16)
  Class: Eq_195
  DataType: word16
  OrigDataType: word16
T_196: (in di_153 + 0x0000 : word16)
  Class: Eq_196
  DataType: word16
  OrigDataType: word16
T_197: (in Mem169[es_162:di_153 + 0x0000:word16] : word16)
  Class: Eq_194
  DataType: word16
  OrigDataType: word16
T_198: (in 0x0002 : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_199: (in di_153 + 0x0002 : word16)
  Class: Eq_199
  DataType: word16
  OrigDataType: word16
T_200: (in 0x013F : word16)
  Class: Eq_200
  DataType: word16
  OrigDataType: word16
T_201: (in di_153 + 0x0002 + 0x013F : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_202: (in 0x0001 : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_203: (in cx_165 - 0x0001 : word16)
  Class: Eq_189
  DataType: word16
  OrigDataType: word16
T_204: (in 0x0000 : word16)
  Class: Eq_189
  DataType: word16
  OrigDataType: word16
T_205: (in cx_165 != 0x0000 : bool)
  Class: Eq_205
  DataType: bool
  OrigDataType: bool
T_206: (in 0x000A : word16)
  Class: Eq_206
  DataType: word16
  OrigDataType: word16
T_207: (in sp_1 + 0x000A : word16)
  Class: Eq_207
  DataType: word16
  OrigDataType: word16
T_208: (in Mem169[ss:sp_1 + 0x000A:selector] : selector)
  Class: Eq_47
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_209: (in 0x000C : word16)
  Class: Eq_209
  DataType: word16
  OrigDataType: word16
T_210: (in sp_1 + 0x000C : word16)
  Class: Eq_11
  DataType: word16
  OrigDataType: word16
T_211: (in bx_176 : word16)
  Class: Eq_211
  DataType: (union (int16 u0) ((memptr T_52 (struct (0 T_218 t0000))) u1))
  OrigDataType: (union (int16 u0) ((memptr T_52 (struct (0 T_218 t0000))) u1))
T_212: (in 0x0140 : word16)
  Class: Eq_211
  DataType: word16
  OrigDataType: word16
T_213: (in 0x0001 : word16)
  Class: Eq_213
  DataType: word16
  OrigDataType: word16
T_214: (in cx_165 - 0x0001 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_215: (in -bx_176 : word16)
  Class: Eq_211
  DataType: int16
  OrigDataType: int16
T_216: (in dx_188 : word16)
  Class: Eq_216
  DataType: uint16
  OrigDataType: uint16
T_217: (in bx_176 + di_153 : word16)
  Class: Eq_217
  DataType: word16
  OrigDataType: word16
T_218: (in Mem169[cx_38:bx_176 + di_153:byte] : byte)
  Class: Eq_218
  DataType: byte
  OrigDataType: byte
T_219: (in 0x0000 : word16)
  Class: Eq_219
  DataType: word16
  OrigDataType: word16
T_220: (in di_153 + 0x0000 : word16)
  Class: Eq_220
  DataType: word16
  OrigDataType: word16
T_221: (in Mem169[cx_38:di_153 + 0x0000:byte] : byte)
  Class: Eq_194
  DataType: byte
  OrigDataType: byte
T_222: (in Mem169[cx_38:bx_176 + di_153:byte] + Mem169[cx_38:di_153 + 0x0000:byte] : byte)
  Class: Eq_222
  DataType: byte
  OrigDataType: byte
T_223: (in DPB(dx_149, Mem169[cx_38:bx_176 + di_153:byte] + Mem169[cx_38:di_153 + 0x0000:byte], 0, 8) : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_224: (in dl_190 : byte)
  Class: Eq_194
  DataType: byte
  OrigDataType: byte
T_225: (in 0x0001 : word16)
  Class: Eq_225
  DataType: uint16
  OrigDataType: uint16
T_226: (in dx_188 >>u 0x0001 : word16)
  Class: Eq_226
  DataType: uint16
  OrigDataType: uint16
T_227: (in (byte) (dx_188 >>u 0x0001) : byte)
  Class: Eq_194
  DataType: byte
  OrigDataType: byte
T_228: (in 0x013F : word16)
  Class: Eq_228
  DataType: word16
  OrigDataType: word16
T_229: (in di_153 - 0x013F : word16)
  Class: Eq_229
  DataType: word16
  OrigDataType: word16
T_230: (in Mem192[cx_38:di_153 - 0x013F:byte] : byte)
  Class: Eq_194
  DataType: byte
  OrigDataType: byte
T_231: (in 0x0000 : word16)
  Class: Eq_231
  DataType: word16
  OrigDataType: word16
T_232: (in di_153 + 0x0000 : word16)
  Class: Eq_232
  DataType: word16
  OrigDataType: word16
T_233: (in Mem193[cx_38:di_153 + 0x0000:byte] : byte)
  Class: Eq_194
  DataType: byte
  OrigDataType: byte
T_234: (in 0x0001 : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_235: (in cx_177 - 0x0001 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_236: (in dx_188 >>u 0x0001 : word16)
  Class: Eq_141
  DataType: uint16
  OrigDataType: uint16
T_237: (in 0x0001 : word16)
  Class: Eq_237
  DataType: word16
  OrigDataType: word16
T_238: (in di_153 + 0x0001 : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_239: (in SLICE(cx_177, byte, 8) : byte)
  Class: Eq_71
  DataType: byte
  OrigDataType: byte
T_240: (in 0x0000 : word16)
  Class: Eq_56
  DataType: word16
  OrigDataType: word16
T_241: (in cx_177 != 0x0000 : bool)
  Class: Eq_241
  DataType: bool
  OrigDataType: bool
T_242: (in __inb : ptr32)
  Class: Eq_242
  DataType: (ptr (fn T_246 (T_245)))
  OrigDataType: (ptr (fn T_246 (T_245)))
T_243: (in dx_188 >>u 0x0001 : word16)
  Class: Eq_243
  DataType: uint16
  OrigDataType: uint16
T_244: (in 0x60 : byte)
  Class: Eq_244
  DataType: byte
  OrigDataType: byte
T_245: (in DPB(dx_188 >>u 0x0001, 0x60, 0, 8) : word16)
  Class: Eq_245
  DataType: word16
  OrigDataType: word16
T_246: (in __inb(DPB(dx_188 >>u 0x0001, 0x60, 0, 8)) : byte)
  Class: Eq_246
  DataType: byte
  OrigDataType: byte
T_247: (in 0x01 : byte)
  Class: Eq_246
  DataType: byte
  OrigDataType: byte
T_248: (in __inb(DPB(dx_188 >>u 0x0001, 0x60, 0, 8)) != 0x01 : bool)
  Class: Eq_248
  DataType: bool
  OrigDataType: bool
T_249: (in bios_video_set_mode : ptr32)
  Class: Eq_2
  DataType: (ptr (fn T_251 (T_250)))
  OrigDataType: (ptr (fn T_251 (T_250)))
T_250: (in 0x03 : byte)
  Class: Eq_4
  DataType: byte
  OrigDataType: byte
T_251: (in bios_video_set_mode(0x03) : void)
  Class: Eq_251
  DataType: void
  OrigDataType: void
T_252: (in sp_136 : word16)
  Class: Eq_252
  DataType: (memptr T_306 (struct (0 T_360 t0000)))
  OrigDataType: (memptr T_306 (struct (0 T_360 t0000)))
T_253: (in fp : ptr16)
  Class: Eq_253
  DataType: (union ((union (ptr16 u0) ((memptr T_306 (struct (FFFFFFDE T_312 tFFFFFFDE))) u1)) u0) ((union (ptr16 u0) ((memptr T_306 (struct (FFFFFFD4 T_330 tFFFFFFD4))) u1)) u1) ((union (ptr16 u0) ((memptr T_306 (struct (FFFFFFD6 T_327 tFFFFFFD6))) u1)) u2) ((union (ptr16 u0) ((memptr T_306 (struct (FFFFFFD8 T_324 tFFFFFFD8))) u1)) u3) ((union (ptr16 u0) ((memptr T_306 (struct (FFFFFFDA T_318 tFFFFFFDA))) u1)) u4) ((union (ptr16 u0) ((memptr T_306 (struct (FFFFFFDC T_315 tFFFFFFDC))) u1)) u5) ((union (ptr16 u0) ((memptr T_306 (struct (FFFFFFE0 T_309 tFFFFFFE0))) u1)) u6))
  OrigDataType: (union ((union (ptr16 u0) ((memptr T_306 (struct (FFFFFFDE T_312 tFFFFFFDE))) u1)) u0) ((union (ptr16 u0) ((memptr T_306 (struct (FFFFFFD4 T_330 tFFFFFFD4))) u1)) u1) ((union (ptr16 u0) ((memptr T_306 (struct (FFFFFFD6 T_327 tFFFFFFD6))) u1)) u2) ((union (ptr16 u0) ((memptr T_306 (struct (FFFFFFD8 T_324 tFFFFFFD8))) u1)) u3) ((union (ptr16 u0) ((memptr T_306 (struct (FFFFFFDA T_318 tFFFFFFDA))) u1)) u4) ((union (ptr16 u0) ((memptr T_306 (struct (FFFFFFDC T_315 tFFFFFFDC))) u1)) u5) ((union (ptr16 u0) ((memptr T_306 (struct (FFFFFFE0 T_309 tFFFFFFE0))) u1)) u6))
T_254: (in 0x0010 : word16)
  Class: Eq_254
  DataType: word16
  OrigDataType: word16
T_255: (in fp - 0x0010 : word16)
  Class: Eq_252
  DataType: word16
  OrigDataType: word16
T_256: (in wArg02 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_257: (in 0x0000 : word16)
  Class: Eq_147
  DataType: word16
  OrigDataType: word16
T_258: (in wArg02 != 0x0000 : bool)
  Class: Eq_258
  DataType: bool
  OrigDataType: bool
T_259: (in ax_92 : word16)
  Class: Eq_259
  DataType: uint16
  OrigDataType: uint16
T_260: (in wArg0E : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_261: (in wArg0A : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_262: (in wArg0E + wArg0A : word16)
  Class: Eq_259
  DataType: word16
  OrigDataType: word16
T_263: (in dx_94 : word16)
  Class: Eq_263
  DataType: uint16
  OrigDataType: uint16
T_264: (in wArg0C : word16)
  Class: Eq_151
  DataType: word16
  OrigDataType: word16
T_265: (in wArg08 : word16)
  Class: Eq_150
  DataType: word16
  OrigDataType: word16
T_266: (in wArg0C + wArg08 : word16)
  Class: Eq_263
  DataType: word16
  OrigDataType: word16
T_267: (in ax_104 : word16)
  Class: Eq_267
  DataType: uint16
  OrigDataType: uint16
T_268: (in 0x0001 : word16)
  Class: Eq_268
  DataType: uint16
  OrigDataType: uint16
T_269: (in ax_92 >>u 0x0001 : word16)
  Class: Eq_269
  DataType: uint16
  OrigDataType: uint16
T_270: (in wArg06 : word16)
  Class: Eq_149
  DataType: word16
  OrigDataType: word16
T_271: (in wArg0A + wArg06 : word16)
  Class: Eq_271
  DataType: uint16
  OrigDataType: uint16
T_272: (in 0x0001 : word16)
  Class: Eq_272
  DataType: uint16
  OrigDataType: uint16
T_273: (in wArg0A + wArg06 >>u 0x0001 : word16)
  Class: Eq_273
  DataType: uint16
  OrigDataType: uint16
T_274: (in (ax_92 >>u 0x0001) + (wArg0A + wArg06 >>u 0x0001) : word16)
  Class: Eq_267
  DataType: word16
  OrigDataType: word16
T_275: (in cx_117 : word16)
  Class: Eq_275
  DataType: word16
  OrigDataType: word16
T_276: (in dx_118 : word16)
  Class: Eq_276
  DataType: word16
  OrigDataType: word16
T_277: (in bx_119 : word16)
  Class: Eq_277
  DataType: word16
  OrigDataType: word16
T_278: (in bp_120 : word16)
  Class: Eq_278
  DataType: (memptr T_306 (struct (16 T_321 t0016)))
  OrigDataType: (memptr T_306 (struct (16 T_321 t0016)))
T_279: (in si_121 : word16)
  Class: Eq_279
  DataType: word16
  OrigDataType: word16
T_280: (in di_122 : word16)
  Class: Eq_280
  DataType: word16
  OrigDataType: word16
T_281: (in ax_123 : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_282: (in fn0C00_01A4 : ptr32)
  Class: Eq_142
  DataType: (ptr (fn T_305 (T_284, T_145, T_286, T_295, T_296, T_297, T_298, T_264, T_260, T_299, T_300, T_301, T_302, T_303, T_304)))
  OrigDataType: (ptr (fn T_305 (T_284, T_145, T_286, T_295, T_296, T_297, T_298, T_264, T_260, T_299, T_300, T_301, T_302, T_303, T_304)))
T_283: (in 0x0001 : word16)
  Class: Eq_283
  DataType: uint16
  OrigDataType: uint16
T_284: (in ax_104 >>u 0x0001 : word16)
  Class: Eq_115
  DataType: uint16
  OrigDataType: uint16
T_285: (in 0x0001 : word16)
  Class: Eq_285
  DataType: word16
  OrigDataType: word16
T_286: (in wArg02 - 0x0001 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_287: (in 0x0001 : word16)
  Class: Eq_287
  DataType: uint16
  OrigDataType: uint16
T_288: (in dx_94 >>u 0x0001 : word16)
  Class: Eq_288
  DataType: uint16
  OrigDataType: uint16
T_289: (in wArg04 : word16)
  Class: Eq_148
  DataType: int16
  OrigDataType: int16
T_290: (in wArg08 + wArg04 : word16)
  Class: Eq_290
  DataType: uint16
  OrigDataType: uint16
T_291: (in 0x0001 : word16)
  Class: Eq_291
  DataType: uint16
  OrigDataType: uint16
T_292: (in wArg08 + wArg04 >>u 0x0001 : word16)
  Class: Eq_292
  DataType: uint16
  OrigDataType: uint16
T_293: (in (dx_94 >>u 0x0001) + (wArg08 + wArg04 >>u 0x0001) : word16)
  Class: Eq_293
  DataType: uint16
  OrigDataType: uint16
T_294: (in 0x0001 : word16)
  Class: Eq_294
  DataType: uint16
  OrigDataType: uint16
T_295: (in (dx_94 >>u 0x0001) + (wArg08 + wArg04 >>u 0x0001) >>u 0x0001 : word16)
  Class: Eq_147
  DataType: uint16
  OrigDataType: uint16
T_296: (in ax_104 >>u 0x0001 : word16)
  Class: Eq_148
  DataType: uint16
  OrigDataType: uint16
T_297: (in dx_94 >>u 0x0001 : word16)
  Class: Eq_149
  DataType: uint16
  OrigDataType: uint16
T_298: (in ax_92 >>u 0x0001 : word16)
  Class: Eq_150
  DataType: uint16
  OrigDataType: uint16
T_299: (in out cx_117 : ptr16)
  Class: Eq_153
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_300: (in out dx_118 : ptr16)
  Class: Eq_154
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_301: (in out bx_119 : ptr16)
  Class: Eq_155
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_302: (in out bp_120 : ptr16)
  Class: Eq_156
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_303: (in out si_121 : ptr16)
  Class: Eq_157
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_304: (in out di_122 : ptr16)
  Class: Eq_158
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_305: (in fn0C00_01A4(ax_104 >>u 0x0001, fs, wArg02 - 0x0001, (dx_94 >>u 0x0001) + (wArg08 + wArg04 >>u 0x0001) >>u 0x0001, ax_104 >>u 0x0001, dx_94 >>u 0x0001, ax_92 >>u 0x0001, wArg0C, wArg0E, out cx_117, out dx_118, out bx_119, out bp_120, out si_121, out di_122) : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_306: (in ss : selector)
  Class: Eq_306
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_307: (in 0x0020 : word16)
  Class: Eq_307
  DataType: word16
  OrigDataType: word16
T_308: (in fp - 0x0020 : word16)
  Class: Eq_308
  DataType: word16
  OrigDataType: word16
T_309: (in Mem125[ss:fp - 0x0020:word16] : word16)
  Class: Eq_115
  DataType: word16
  OrigDataType: word16
T_310: (in 0x0022 : word16)
  Class: Eq_310
  DataType: word16
  OrigDataType: word16
T_311: (in fp - 0x0022 : word16)
  Class: Eq_311
  DataType: word16
  OrigDataType: word16
T_312: (in Mem127[ss:fp - 0x0022:word16] : word16)
  Class: Eq_276
  DataType: word16
  OrigDataType: word16
T_313: (in 0x0024 : word16)
  Class: Eq_313
  DataType: word16
  OrigDataType: word16
T_314: (in fp - 0x0024 : word16)
  Class: Eq_314
  DataType: word16
  OrigDataType: word16
T_315: (in Mem129[ss:fp - 0x0024:word16] : word16)
  Class: Eq_275
  DataType: word16
  OrigDataType: word16
T_316: (in 0x0026 : word16)
  Class: Eq_316
  DataType: word16
  OrigDataType: word16
T_317: (in fp - 0x0026 : word16)
  Class: Eq_317
  DataType: word16
  OrigDataType: word16
T_318: (in Mem131[ss:fp - 0x0026:word16] : word16)
  Class: Eq_277
  DataType: word16
  OrigDataType: word16
T_319: (in 0x0016 : word16)
  Class: Eq_319
  DataType: word16
  OrigDataType: word16
T_320: (in bp_120 + 0x0016 : word16)
  Class: Eq_320
  DataType: word16
  OrigDataType: word16
T_321: (in Mem131[ss:bp_120 + 0x0016:word16] : word16)
  Class: Eq_321
  DataType: word16
  OrigDataType: word16
T_322: (in 0x0028 : word16)
  Class: Eq_322
  DataType: word16
  OrigDataType: word16
T_323: (in fp - 0x0028 : word16)
  Class: Eq_323
  DataType: word16
  OrigDataType: word16
T_324: (in Mem133[ss:fp - 0x0028:word16] : word16)
  Class: Eq_321
  DataType: word16
  OrigDataType: word16
T_325: (in 0x002A : word16)
  Class: Eq_325
  DataType: word16
  OrigDataType: word16
T_326: (in fp - 0x002A : word16)
  Class: Eq_326
  DataType: word16
  OrigDataType: word16
T_327: (in Mem135[ss:fp - 0x002A:word16] : word16)
  Class: Eq_280
  DataType: word16
  OrigDataType: word16
T_328: (in 0x002C : word16)
  Class: Eq_328
  DataType: word16
  OrigDataType: word16
T_329: (in fp - 0x002C : word16)
  Class: Eq_329
  DataType: word16
  OrigDataType: word16
T_330: (in Mem137[ss:fp - 0x002C:word16] : word16)
  Class: Eq_279
  DataType: word16
  OrigDataType: word16
T_331: (in cx_139 : word16)
  Class: Eq_331
  DataType: word16
  OrigDataType: word16
T_332: (in dx_140 : word16)
  Class: Eq_332
  DataType: word16
  OrigDataType: word16
T_333: (in bx_141 : word16)
  Class: Eq_333
  DataType: word16
  OrigDataType: word16
T_334: (in bp_142 : word16)
  Class: Eq_334
  DataType: word16
  OrigDataType: word16
T_335: (in si_143 : word16)
  Class: Eq_335
  DataType: word16
  OrigDataType: word16
T_336: (in di_144 : word16)
  Class: Eq_336
  DataType: word16
  OrigDataType: word16
T_337: (in fn0C00_01A4 : ptr32)
  Class: Eq_142
  DataType: (ptr (fn T_345 (T_281, T_145, T_338, T_256, T_289, T_270, T_265, T_261, T_264, T_339, T_340, T_341, T_342, T_343, T_344)))
  OrigDataType: (ptr (fn T_345 (T_281, T_145, T_338, T_256, T_289, T_270, T_265, T_261, T_264, T_339, T_340, T_341, T_342, T_343, T_344)))
T_338: (in wArg00 : word16)
  Class: Eq_146
  DataType: word16
  OrigDataType: word16
T_339: (in out cx_139 : ptr16)
  Class: Eq_153
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_340: (in out dx_140 : ptr16)
  Class: Eq_154
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_341: (in out bx_141 : ptr16)
  Class: Eq_155
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_342: (in out bp_142 : ptr16)
  Class: Eq_156
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_343: (in out si_143 : ptr16)
  Class: Eq_157
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_344: (in out di_144 : ptr16)
  Class: Eq_158
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_345: (in fn0C00_01A4(ax_123, fs, wArg00, wArg02, wArg04, wArg06, wArg08, wArg0A, wArg0C, out cx_139, out dx_140, out bx_141, out bp_142, out si_143, out di_144) : word16)
  Class: Eq_345
  DataType: word16
  OrigDataType: word16
T_346: (in fp - 0x002C : word16)
  Class: Eq_252
  DataType: word16
  OrigDataType: word16
T_347: (in 0x80 : byte)
  Class: Eq_347
  DataType: byte
  OrigDataType: byte
T_348: (in 0x0140 : word16)
  Class: Eq_348
  DataType: int16
  OrigDataType: int16
T_349: (in wArg04 *s 0x0140 : int16)
  Class: Eq_349
  DataType: int16
  OrigDataType: int16
T_350: (in wArg04 *s 0x0140 + wArg06 : word16)
  Class: Eq_350
  DataType: (memptr T_145 (struct (40 T_353 t0040)))
  OrigDataType: (memptr T_145 (struct (40 T_353 t0040)))
T_351: (in 0x0040 : word16)
  Class: Eq_351
  DataType: word16
  OrigDataType: word16
T_352: (in wArg04 *s 0x0140 + wArg06 + 0x0040 : word16)
  Class: Eq_352
  DataType: word16
  OrigDataType: word16
T_353: (in Mem71[fs:wArg04 *s 0x0140 + wArg06 + 0x0040:byte] : byte)
  Class: Eq_347
  DataType: byte
  OrigDataType: byte
T_354: (in sp_47 : word16)
  Class: Eq_354
  DataType: word16
  OrigDataType: word16
T_355: (in 0x0002 : word16)
  Class: Eq_355
  DataType: word16
  OrigDataType: word16
T_356: (in sp_136 + 0x0002 : word16)
  Class: Eq_354
  DataType: word16
  OrigDataType: word16
T_357: (in di_46 : word16)
  Class: Eq_357
  DataType: word16
  OrigDataType: word16
T_358: (in 0x0000 : word16)
  Class: Eq_358
  DataType: word16
  OrigDataType: word16
T_359: (in sp_136 + 0x0000 : word16)
  Class: Eq_359
  DataType: word16
  OrigDataType: word16
T_360: (in Mem0[ss:sp_136 + 0x0000:word16] : word16)
  Class: Eq_360
  DataType: word16
  OrigDataType: word16
T_361: (in *diOut : word16)
  Class: Eq_360
  DataType: 
  OrigDataType: 
T_362: (in si_48 : word16)
  Class: Eq_362
  DataType: 
  OrigDataType: 
T_363: (in 0x0000 : word16)
  Class: Eq_363
  DataType: 
  OrigDataType: 
T_364: (in sp_47 + 0x0000 : word16)
  Class: Eq_364
  DataType: 
  OrigDataType: 
T_365: (in Mem0[ss:sp_47 + 0x0000:word16] : word16)
  Class: Eq_365
  DataType: 
  OrigDataType: 
T_366: (in *siOut : word16)
  Class: Eq_365
  DataType: 
  OrigDataType: 
T_367: (in bp_50 : word16)
  Class: Eq_367
  DataType: 
  OrigDataType: 
T_368: (in 0x0002 : word16)
  Class: Eq_368
  DataType: 
  OrigDataType: 
T_369: (in sp_47 + 0x0002 : word16)
  Class: Eq_369
  DataType: 
  OrigDataType: 
T_370: (in Mem0[ss:sp_47 + 0x0002:word16] : word16)
  Class: Eq_370
  DataType: 
  OrigDataType: 
T_371: (in *bpOut : word16)
  Class: Eq_370
  DataType: 
  OrigDataType: 
T_372: (in bx_53 : word16)
  Class: Eq_372
  DataType: 
  OrigDataType: 
T_373: (in 0x0006 : word16)
  Class: Eq_373
  DataType: 
  OrigDataType: 
T_374: (in sp_47 + 0x0006 : word16)
  Class: Eq_374
  DataType: 
  OrigDataType: 
T_375: (in Mem0[ss:sp_47 + 0x0006:word16] : word16)
  Class: Eq_375
  DataType: 
  OrigDataType: 
T_376: (in *bxOut : word16)
  Class: Eq_375
  DataType: 
  OrigDataType: 
T_377: (in dx_55 : word16)
  Class: Eq_377
  DataType: 
  OrigDataType: 
T_378: (in 0x0008 : word16)
  Class: Eq_378
  DataType: 
  OrigDataType: 
T_379: (in sp_47 + 0x0008 : word16)
  Class: Eq_379
  DataType: 
  OrigDataType: 
T_380: (in Mem0[ss:sp_47 + 0x0008:word16] : word16)
  Class: Eq_380
  DataType: 
  OrigDataType: 
T_381: (in *dxOut : word16)
  Class: Eq_380
  DataType: 
  OrigDataType: 
T_382: (in cx_57 : word16)
  Class: Eq_382
  DataType: 
  OrigDataType: 
T_383: (in 0x000A : word16)
  Class: Eq_383
  DataType: 
  OrigDataType: 
T_384: (in sp_47 + 0x000A : word16)
  Class: Eq_384
  DataType: 
  OrigDataType: 
T_385: (in Mem0[ss:sp_47 + 0x000A:word16] : word16)
  Class: Eq_385
  DataType: 
  OrigDataType: 
T_386: (in *cxOut : word16)
  Class: Eq_385
  DataType: 
  OrigDataType: 
T_387: (in 0x000C : word16)
  Class: Eq_387
  DataType: 
  OrigDataType: 
T_388: (in sp_47 + 0x000C : word16)
  Class: Eq_388
  DataType: 
  OrigDataType: 
T_389: (in Mem0[ss:sp_47 + 0x000C:word16] : word16)
  Class: Eq_389
  DataType: 
  OrigDataType: 
T_390:
  Class: Eq_390
  DataType: 
  OrigDataType: (struct 0002 (0 T_89 t0000))
T_391:
  Class: Eq_391
  DataType: 
  OrigDataType: (struct 0002 (0 T_104 t0000))
*/
