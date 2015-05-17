// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_377/ia32_pe/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr (struct "Globals"))
  OrigDataType: (ptr (struct "Globals"))
T_2: (in edx_13 : word32)
  Class: Eq_2
  DataType: (ptr (struct 0001 (0 T_9 t0000)))
  OrigDataType: (ptr (struct 0001 (0 T_9 t0000)))
T_3: (in 0x00402104 : ptr32)
  Class: Eq_3
  DataType: (ptr (struct (0 T_4 t0000)))
  OrigDataType: (ptr (struct (0 T_4 t0000)))
T_4: (in Mem0[0x00402104:word32] : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_5: (in bl_14 : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_6: (in 0x00 : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_7: (in 0x00000000 : word32)
  Class: Eq_7
  DataType: word32
  OrigDataType: word32
T_8: (in edx_13 + 0x00000000 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_9: (in Mem7[edx_13 + 0x00000000:byte] : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_10: (in edx_8 : word32)
  Class: Eq_10
  DataType: (ptr (struct (0 T_15 t0000) (1 T_18 t0001)))
  OrigDataType: (ptr (struct (0 T_15 t0000) (1 T_18 t0001)))
T_11: (in 0x00000001 : word32)
  Class: Eq_11
  DataType: word32
  OrigDataType: word32
T_12: (in edx_13 + 0x00000001 : word32)
  Class: Eq_10
  DataType: word32
  OrigDataType: word32
T_13: (in 0x00000000 : word32)
  Class: Eq_13
  DataType: word32
  OrigDataType: word32
T_14: (in edx_8 + 0x00000000 : word32)
  Class: Eq_14
  DataType: word32
  OrigDataType: word32
T_15: (in Mem9[edx_8 + 0x00000000:byte] : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_16: (in 0x00000001 : word32)
  Class: Eq_16
  DataType: word32
  OrigDataType: word32
T_17: (in edx_8 + 0x00000001 : word32)
  Class: Eq_17
  DataType: word32
  OrigDataType: word32
T_18: (in Mem11[edx_8 + 0x00000001:byte] : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_19: (in 0x00000003 : word32)
  Class: Eq_19
  DataType: word32
  OrigDataType: word32
T_20: (in edx_8 + 0x00000003 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_21: (in 0x01 : byte)
  Class: Eq_21
  DataType: byte
  OrigDataType: byte
T_22: (in bl_14 + 0x01 : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_23: (in 0x00 : byte)
  Class: Eq_5
  DataType: byte
  OrigDataType: byte
T_24: (in bl_14 != 0x00 : bool)
  Class: Eq_24
  DataType: bool
  OrigDataType: bool
T_25: (in ebx : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_26: (in ecx_17 : word32)
  Class: Eq_26
  DataType: word32
  OrigDataType: word32
T_27: (in 0x00000F00 : word32)
  Class: Eq_26
  DataType: word32
  OrigDataType: word32
T_28: (in esi_10 : word32)
  Class: Eq_28
  DataType: (ptr (struct 0001 (0 T_35 t0000)))
  OrigDataType: (ptr (struct 0001 (0 T_35 t0000)))
T_29: (in 0x00402136 : word32)
  Class: Eq_28
  DataType: word32
  OrigDataType: word32
T_30: (in edi_14 : word32)
  Class: Eq_30
  DataType: (ptr (struct 0001 (0 T_38 t0000)))
  OrigDataType: (ptr (struct 0001 (0 T_38 t0000)))
T_31: (in 0x00402118 : ptr32)
  Class: Eq_31
  DataType: (ptr (struct (0 T_32 t0000)))
  OrigDataType: (ptr (struct (0 T_32 t0000)))
T_32: (in Mem0[0x00402118:word32] : word32)
  Class: Eq_30
  DataType: word32
  OrigDataType: word32
T_33: (in 0x00000000 : word32)
  Class: Eq_33
  DataType: word32
  OrigDataType: word32
T_34: (in esi_10 + 0x00000000 : word32)
  Class: Eq_34
  DataType: word32
  OrigDataType: word32
T_35: (in Mem0[esi_10 + 0x00000000:byte] : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_36: (in 0x00000000 : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_37: (in edi_14 + 0x00000000 : word32)
  Class: Eq_37
  DataType: word32
  OrigDataType: word32
T_38: (in Mem12[edi_14 + 0x00000000:byte] : byte)
  Class: Eq_35
  DataType: byte
  OrigDataType: byte
T_39: (in 0x00000001 : word32)
  Class: Eq_39
  DataType: word32
  OrigDataType: word32
T_40: (in esi_10 + 0x00000001 : word32)
  Class: Eq_28
  DataType: word32
  OrigDataType: word32
T_41: (in 0x00000001 : word32)
  Class: Eq_41
  DataType: word32
  OrigDataType: word32
T_42: (in edi_14 + 0x00000001 : word32)
  Class: Eq_30
  DataType: word32
  OrigDataType: word32
T_43: (in 0x00000001 : word32)
  Class: Eq_43
  DataType: word32
  OrigDataType: word32
T_44: (in ecx_17 - 0x00000001 : word32)
  Class: Eq_26
  DataType: word32
  OrigDataType: word32
T_45: (in 0x00000000 : word32)
  Class: Eq_26
  DataType: word32
  OrigDataType: word32
T_46: (in ecx_17 != 0x00000000 : bool)
  Class: Eq_46
  DataType: bool
  OrigDataType: bool
T_47: (in ebx_20 : word32)
  Class: Eq_47
  DataType: word32
  OrigDataType: word32
T_48: (in 0x00000000 : word32)
  Class: Eq_47
  DataType: word32
  OrigDataType: word32
T_49: (in bl_21 : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_50: (in 0x00 : byte)
  Class: Eq_49
  DataType: byte
  OrigDataType: byte
T_51: (in bx_22 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_52: (in 0x0000 : word16)
  Class: Eq_51
  DataType: word16
  OrigDataType: word16
T_53: (in bh_23 : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_54: (in 0x00 : byte)
  Class: Eq_53
  DataType: byte
  OrigDataType: byte
T_55: (in edi_27 : word32)
  Class: Eq_55
  DataType: word32
  OrigDataType: word32
T_56: (in 0x00000000 : word32)
  Class: Eq_56
  DataType: word32
  OrigDataType: word32
T_57: (in ediOut : ptr32)
  Class: Eq_57
  DataType: ptr32
  OrigDataType: ptr32
T_58: (in *ediOut : word32)
  Class: Eq_56
  DataType: 
  OrigDataType: 
T_59: (in dl_103 : byte)
  Class: Eq_59
  DataType: 
  OrigDataType: 
T_60: (in 0x0040211C : ptr32)
  Class: Eq_60
  DataType: 
  OrigDataType: 
T_61: (in Mem12[0x0040211C:word32] : word32)
  Class: Eq_61
  DataType: 
  OrigDataType: 
T_62: (in Mem12[0x0040211C:word32] + ebx_20 : word32)
  Class: Eq_62
  DataType: 
  OrigDataType: 
T_63: (in Mem68[Mem12[0x0040211C:word32] + ebx_20:byte] : byte)
  Class: Eq_59
  DataType: 
  OrigDataType: 
T_64: (in 0x0001 : word16)
  Class: Eq_64
  DataType: 
  OrigDataType: 
T_65: (in bx_22 - 0x0001 : word16)
  Class: Eq_51
  DataType: 
  OrigDataType: 
T_66: (in (byte) bx_22 : byte)
  Class: Eq_49
  DataType: 
  OrigDataType: 
T_67: (in DPB(ebx_20, bx_22, 0, 16) : word32)
  Class: Eq_47
  DataType: 
  OrigDataType: 
T_68: (in SLICE(bx_22, byte, 8) : byte)
  Class: Eq_53
  DataType: 
  OrigDataType: 
T_69: (in 0x0000 : word16)
  Class: Eq_51
  DataType: 
  OrigDataType: 
T_70: (in bx_22 != 0x0000 : bool)
  Class: Eq_70
  DataType: 
  OrigDataType: 
T_71: (in 0x04 : byte)
  Class: Eq_49
  DataType: 
  OrigDataType: 
T_72: (in bl_21 <u 0x04 : bool)
  Class: Eq_72
  DataType: 
  OrigDataType: 
T_73: (in bh_81 : byte)
  Class: Eq_73
  DataType: 
  OrigDataType: 
T_74: (in 0x02 : byte)
  Class: Eq_74
  DataType: 
  OrigDataType: 
T_75: (in bh_23 >>u 0x02 : word32)
  Class: Eq_73
  DataType: 
  OrigDataType: 
T_76: (in (word16) bh_81 : word16)
  Class: Eq_76
  DataType: 
  OrigDataType: 
T_77: (in 0x0006 : word16)
  Class: Eq_77
  DataType: 
  OrigDataType: 
T_78: (in (word16) bh_81 << 0x0006 : word16)
  Class: Eq_78
  DataType: 
  OrigDataType: 
T_79: (in DPB(bx_22, bh_81, 8, 8) : word16)
  Class: Eq_79
  DataType: 
  OrigDataType: 
T_80: (in ((word16) bh_81 << 0x0006) + DPB(bx_22, bh_81, 8, 8) : word16)
  Class: Eq_80
  DataType: 
  OrigDataType: 
T_81: (in DPB(edi_27, ((word16) bh_81 << 0x0006) + DPB(bx_22, bh_81, 8, 8), 0, 16) : word32)
  Class: Eq_81
  DataType: 
  OrigDataType: 
T_82: (in *ediOut : word32)
  Class: Eq_81
  DataType: 
  OrigDataType: 
T_83: (in DPB(ebx_20, bx_22, 0, 16) : word32)
  Class: Eq_47
  DataType: 
  OrigDataType: 
T_84: (in false : bool)
  Class: Eq_84
  DataType: 
  OrigDataType: 
T_85: (in dx_96 : word16)
  Class: Eq_85
  DataType: 
  OrigDataType: 
T_86: (in 0x0F0F : word16)
  Class: Eq_86
  DataType: 
  OrigDataType: 
T_87: (in bx_22 & 0x0F0F : word16)
  Class: Eq_85
  DataType: 
  OrigDataType: 
T_88: (in (byte) dx_96 : byte)
  Class: Eq_88
  DataType: 
  OrigDataType: 
T_89: (in SLICE(dx_96, byte, 8) : byte)
  Class: Eq_89
  DataType: 
  OrigDataType: 
T_90: (in (byte) dx_96 + SLICE(dx_96, byte, 8) : byte)
  Class: Eq_90
  DataType: 
  OrigDataType: 
T_91: (in DPB(dx_96, (byte) dx_96 + SLICE(dx_96, byte, 8), 0, 8) : word16)
  Class: Eq_91
  DataType: 
  OrigDataType: 
T_92: (in 0x02 : byte)
  Class: Eq_92
  DataType: 
  OrigDataType: 
T_93: (in DPB(dx_96, (byte) dx_96 + SLICE(dx_96, byte, 8), 0, 8) << 0x02 : word16)
  Class: Eq_93
  DataType: 
  OrigDataType: 
T_94: (in (byte) (DPB(dx_96, (byte) dx_96 + SLICE(dx_96, byte, 8), 0, 8) << 0x02) : byte)
  Class: Eq_59
  DataType: 
  OrigDataType: 
T_95: (in 0xFB : byte)
  Class: Eq_59
  DataType: 
  OrigDataType: 
T_96: (in 0xFB : byte)
  Class: Eq_49
  DataType: 
  OrigDataType: 
T_97: (in bl_21 >u 0xFB : bool)
  Class: Eq_97
  DataType: 
  OrigDataType: 
T_98: (in eax_108 : word32)
  Class: Eq_98
  DataType: 
  OrigDataType: 
T_99: (in 0x00000000 : word32)
  Class: Eq_98
  DataType: 
  OrigDataType: 
T_100: (in cx_30 : word16)
  Class: Eq_100
  DataType: 
  OrigDataType: 
T_101: (in 0x0000 : word16)
  Class: Eq_100
  DataType: 
  OrigDataType: 
T_102: (in bx_38 : word16)
  Class: Eq_102
  DataType: 
  OrigDataType: 
T_103: (in 0x0400 : word16)
  Class: Eq_102
  DataType: 
  OrigDataType: 
T_104: (in ebx_39 : word32)
  Class: Eq_104
  DataType: 
  OrigDataType: 
T_105: (in 0x00000400 : word32)
  Class: Eq_104
  DataType: 
  OrigDataType: 
T_106: (in bl_40 : byte)
  Class: Eq_106
  DataType: 
  OrigDataType: 
T_107: (in 0x00 : byte)
  Class: Eq_106
  DataType: 
  OrigDataType: 
T_108: (in 0x0001 : word16)
  Class: Eq_108
  DataType: 
  OrigDataType: 
T_109: (in cx_30 + 0x0001 : word16)
  Class: Eq_100
  DataType: 
  OrigDataType: 
T_110: (in 0x00402136 : word32)
  Class: Eq_110
  DataType: 
  OrigDataType: 
T_111: (in ebx_39 + 0x00402136 : word32)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_112: (in Mem0[ebx_39 + 0x00402136:word16] : word16)
  Class: Eq_112
  DataType: 
  OrigDataType: 
T_113: (in Mem0[ebx_39 + 0x00402136:word16] + cx_30 : word16)
  Class: Eq_113
  DataType: 
  OrigDataType: 
T_114: (in 0x00402136 : word32)
  Class: Eq_114
  DataType: 
  OrigDataType: 
T_115: (in ebx_39 + 0x00402136 : word32)
  Class: Eq_115
  DataType: 
  OrigDataType: 
T_116: (in Mem53[ebx_39 + 0x00402136:word16] : word16)
  Class: Eq_113
  DataType: 
  OrigDataType: 
T_117: (in rLoc1_55 : real64)
  Class: Eq_117
  DataType: 
  OrigDataType: 
T_118: (in 0x00402136 : word32)
  Class: Eq_118
  DataType: 
  OrigDataType: 
T_119: (in ebx_39 + 0x00402136 : word32)
  Class: Eq_119
  DataType: 
  OrigDataType: 
T_120: (in Mem53[ebx_39 + 0x00402136:int16] : int16)
  Class: Eq_120
  DataType: 
  OrigDataType: 
T_121: (in (real64) Mem53[ebx_39 + 0x00402136:int16] : real64)
  Class: Eq_121
  DataType: 
  OrigDataType: 
T_122: (in 0x00402130 : ptr32)
  Class: Eq_122
  DataType: 
  OrigDataType: 
T_123: (in Mem53[0x00402130:word16] : word16)
  Class: Eq_123
  DataType: 
  OrigDataType: 
T_124: (in (real64) Mem53[0x00402130:word16] : real64)
  Class: Eq_124
  DataType: 
  OrigDataType: 
T_125: (in (real64) Mem53[ebx_39 + 0x00402136:int16] / (real64) Mem53[0x00402130:word16] : word32)
  Class: Eq_117
  DataType: 
  OrigDataType: 
T_126: (in rLoc1_57 : real64)
  Class: Eq_126
  DataType: 
  OrigDataType: 
T_127: (in cos : ptr32)
  Class: Eq_127
  DataType: 
  OrigDataType: 
T_128: (in cos(rLoc1_55) : real64)
  Class: Eq_126
  DataType: 
  OrigDataType: 
T_129: (in sin : ptr32)
  Class: Eq_129
  DataType: 
  OrigDataType: 
T_130: (in sin(rLoc1_55) : real64)
  Class: Eq_130
  DataType: 
  OrigDataType: 
T_131: (in 0x00402155 : word32)
  Class: Eq_131
  DataType: 
  OrigDataType: 
T_132: (in ebx_39 + 0x00402155 : word32)
  Class: Eq_132
  DataType: 
  OrigDataType: 
T_133: (in Mem59[ebx_39 + 0x00402155:real32] : real32)
  Class: Eq_130
  DataType: 
  OrigDataType: 
T_134: (in 0x00402159 : word32)
  Class: Eq_134
  DataType: 
  OrigDataType: 
T_135: (in ebx_39 + 0x00402159 : word32)
  Class: Eq_135
  DataType: 
  OrigDataType: 
T_136: (in Mem60[ebx_39 + 0x00402159:real32] : real32)
  Class: Eq_126
  DataType: 
  OrigDataType: 
T_137: (in 0x08 : byte)
  Class: Eq_137
  DataType: 
  OrigDataType: 
T_138: (in bl_40 + 0x08 : byte)
  Class: Eq_106
  DataType: 
  OrigDataType: 
T_139: (in ch_242 : byte)
  Class: Eq_139
  DataType: 
  OrigDataType: 
T_140: (in SLICE(cx_30, byte, 8) : byte)
  Class: Eq_139
  DataType: 
  OrigDataType: 
T_141: (in DPB(ebx_39, bl_40, 0, 8) : word32)
  Class: Eq_104
  DataType: 
  OrigDataType: 
T_142: (in DPB(bx_38, bl_40, 0, 8) : word16)
  Class: Eq_102
  DataType: 
  OrigDataType: 
T_143: (in P : byte)
  Class: Eq_143
  DataType: 
  OrigDataType: 
T_144: (in ebx_105 : word32)
  Class: Eq_144
  DataType: 
  OrigDataType: 
T_145: (in 0x03 : byte)
  Class: Eq_145
  DataType: 
  OrigDataType: 
T_146: (in DPB(ebx_39, 0x03, 8, 8) : word32)
  Class: Eq_144
  DataType: 
  OrigDataType: 
T_147: (in bx_111 : word16)
  Class: Eq_147
  DataType: 
  OrigDataType: 
T_148: (in 0x03 : byte)
  Class: Eq_148
  DataType: 
  OrigDataType: 
T_149: (in DPB(bx_38, 0x03, 8, 8) : word16)
  Class: Eq_147
  DataType: 
  OrigDataType: 
T_150: (in edx_106 : word32)
  Class: Eq_150
  DataType: 
  OrigDataType: 
T_151: (in 0x00000000 : word32)
  Class: Eq_150
  DataType: 
  OrigDataType: 
T_152: (in dl_119 : byte)
  Class: Eq_152
  DataType: 
  OrigDataType: 
T_153: (in 0x00 : byte)
  Class: Eq_152
  DataType: 
  OrigDataType: 
T_154: (in dh_120 : byte)
  Class: Eq_152
  DataType: 
  OrigDataType: 
T_155: (in 0x00 : byte)
  Class: Eq_152
  DataType: 
  OrigDataType: 
T_156: (in dx_118 : word16)
  Class: Eq_156
  DataType: 
  OrigDataType: 
T_157: (in 0x0000 : word16)
  Class: Eq_156
  DataType: 
  OrigDataType: 
T_158: (in di_134 : word16)
  Class: Eq_158
  DataType: 
  OrigDataType: 
T_159: (in 0x0001 : word16)
  Class: Eq_159
  DataType: 
  OrigDataType: 
T_160: (in di_134 + 0x0001 : word16)
  Class: Eq_158
  DataType: 
  OrigDataType: 
T_161: (in edi_135 : word32)
  Class: Eq_161
  DataType: 
  OrigDataType: 
T_162: (in DPB(edi_135, di_134, 0, 16) : word32)
  Class: Eq_161
  DataType: 
  OrigDataType: 
T_163: (in eax_331 : word32)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_164: (in eax_137 : word32)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_165: (in ebx_140 : word32)
  Class: Eq_165
  DataType: 
  OrigDataType: 
T_166: (in 0x00 : byte)
  Class: Eq_166
  DataType: 
  OrigDataType: 
T_167: (in DPB(ebx_140, 0x00, 0, 8) : word32)
  Class: Eq_165
  DataType: 
  OrigDataType: 
T_168: (in bx_156 : word16)
  Class: Eq_168
  DataType: 
  OrigDataType: 
T_169: (in 0x0001 : word16)
  Class: Eq_169
  DataType: 
  OrigDataType: 
T_170: (in bx_156 + 0x0001 : word16)
  Class: Eq_170
  DataType: 
  OrigDataType: 
T_171: (in 0x00 : byte)
  Class: Eq_171
  DataType: 
  OrigDataType: 
T_172: (in DPB(bx_156 + 0x0001, 0x00, 0, 8) : word16)
  Class: Eq_172
  DataType: 
  OrigDataType: 
T_173: (in bx_141 : word16)
  Class: Eq_172
  DataType: 
  OrigDataType: 
T_174: (in al_136 : byte)
  Class: Eq_152
  DataType: 
  OrigDataType: 
T_175: (in 0x80 : byte)
  Class: Eq_175
  DataType: 
  OrigDataType: 
T_176: (in al_136 - 0x80 : byte)
  Class: Eq_176
  DataType: 
  OrigDataType: 
T_177: (in (int16) (al_136 - 0x80) : int16)
  Class: Eq_177
  DataType: 
  OrigDataType: 
T_178: (in 0x00402136 : word32)
  Class: Eq_178
  DataType: 
  OrigDataType: 
T_179: (in ebx_140 + 0x00402136 : word32)
  Class: Eq_179
  DataType: 
  OrigDataType: 
T_180: (in Mem152[ebx_140 + 0x00402136:word16] : word16)
  Class: Eq_177
  DataType: 
  OrigDataType: 
T_181: (in 0x0001 : word16)
  Class: Eq_181
  DataType: 
  OrigDataType: 
T_182: (in bx_141 + 0x0001 : word16)
  Class: Eq_168
  DataType: 
  OrigDataType: 
T_183: (in DPB(eax_331, dh_120, 0, 8) : word32)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_184: (in bx_156 + 0x0001 : word16)
  Class: Eq_172
  DataType: 
  OrigDataType: 
T_185: (in bx_156 + 0x0001 : word16)
  Class: Eq_185
  DataType: 
  OrigDataType: 
T_186: (in DPB(ebx_140, bx_156 + 0x0001, 0, 16) : word32)
  Class: Eq_165
  DataType: 
  OrigDataType: 
T_187: (in bp_109 : word16)
  Class: Eq_187
  DataType: 
  OrigDataType: 
T_188: (in 0x00402136 : word32)
  Class: Eq_188
  DataType: 
  OrigDataType: 
T_189: (in ebx_140 + 0x00402136 : word32)
  Class: Eq_189
  DataType: 
  OrigDataType: 
T_190: (in Mem168[ebx_140 + 0x00402136:word16] : word16)
  Class: Eq_187
  DataType: 
  OrigDataType: 
T_191: (in 0x00 : byte)
  Class: Eq_191
  DataType: 
  OrigDataType: 
T_192: (in DPB(ebx_140, 0x00, 0, 8) : word32)
  Class: Eq_144
  DataType: 
  OrigDataType: 
T_193: (in 0x00 : byte)
  Class: Eq_193
  DataType: 
  OrigDataType: 
T_194: (in DPB(bx_141, 0x00, 0, 8) : word16)
  Class: Eq_147
  DataType: 
  OrigDataType: 
T_195: (in bx_175 : word16)
  Class: Eq_195
  DataType: 
  OrigDataType: 
T_196: (in 0x0001 : word16)
  Class: Eq_196
  DataType: 
  OrigDataType: 
T_197: (in bx_111 + 0x0001 : word16)
  Class: Eq_195
  DataType: 
  OrigDataType: 
T_198: (in rLoc1_174 : real64)
  Class: Eq_198
  DataType: 
  OrigDataType: 
T_199: (in 0x00402136 : word32)
  Class: Eq_199
  DataType: 
  OrigDataType: 
T_200: (in ebx_105 + 0x00402136 : word32)
  Class: Eq_200
  DataType: 
  OrigDataType: 
T_201: (in Mem168[ebx_105 + 0x00402136:int16] : int16)
  Class: Eq_201
  DataType: 
  OrigDataType: 
T_202: (in (real64) Mem168[ebx_105 + 0x00402136:int16] : real64)
  Class: Eq_198
  DataType: 
  OrigDataType: 
T_203: (in 0x0001 : word16)
  Class: Eq_203
  DataType: 
  OrigDataType: 
T_204: (in bx_175 + 0x0001 : word16)
  Class: Eq_147
  DataType: 
  OrigDataType: 
T_205: (in bx_175 + 0x0001 : word16)
  Class: Eq_205
  DataType: 
  OrigDataType: 
T_206: (in DPB(ebx_105, bx_175 + 0x0001, 0, 16) : word32)
  Class: Eq_144
  DataType: 
  OrigDataType: 
T_207: (in rLoc2_190 : real64)
  Class: Eq_198
  DataType: 
  OrigDataType: 
T_208: (in rLoc1_332 : real64)
  Class: Eq_198
  DataType: 
  OrigDataType: 
T_209: (in 0x00402136 : word32)
  Class: Eq_209
  DataType: 
  OrigDataType: 
T_210: (in edi_135 + 0x00402136 : word32)
  Class: Eq_210
  DataType: 
  OrigDataType: 
T_211: (in Mem168[edi_135 + 0x00402136:real32] : real32)
  Class: Eq_211
  DataType: 
  OrigDataType: 
T_212: (in rLoc1_332 * Mem168[edi_135 + 0x00402136:real32] : word32)
  Class: Eq_212
  DataType: 
  OrigDataType: 
T_213: (in rArg0 : real64)
  Class: Eq_198
  DataType: 
  OrigDataType: 
T_214: (in 0x0040213A : word32)
  Class: Eq_214
  DataType: 
  OrigDataType: 
T_215: (in edi_135 + 0x0040213A : word32)
  Class: Eq_215
  DataType: 
  OrigDataType: 
T_216: (in Mem168[edi_135 + 0x0040213A:real32] : real32)
  Class: Eq_216
  DataType: 
  OrigDataType: 
T_217: (in rArg0 * Mem168[edi_135 + 0x0040213A:real32] : word32)
  Class: Eq_217
  DataType: 
  OrigDataType: 
T_218: (in rLoc1_332 * Mem168[edi_135 + 0x00402136:real32] + rArg0 * Mem168[edi_135 + 0x0040213A:real32] : real64)
  Class: Eq_198
  DataType: 
  OrigDataType: 
T_219: (in 0x0008 : word16)
  Class: Eq_219
  DataType: 
  OrigDataType: 
T_220: (in di_134 + 0x0008 : word16)
  Class: Eq_158
  DataType: 
  OrigDataType: 
T_221: (in 0x0040213A : word32)
  Class: Eq_221
  DataType: 
  OrigDataType: 
T_222: (in edi_135 + 0x0040213A : word32)
  Class: Eq_222
  DataType: 
  OrigDataType: 
T_223: (in Mem168[edi_135 + 0x0040213A:real32] : real32)
  Class: Eq_223
  DataType: 
  OrigDataType: 
T_224: (in rArg0 * Mem168[edi_135 + 0x0040213A:real32] : word32)
  Class: Eq_224
  DataType: 
  OrigDataType: 
T_225: (in rArg1 : real64)
  Class: Eq_225
  DataType: 
  OrigDataType: 
T_226: (in 0x00402136 : word32)
  Class: Eq_226
  DataType: 
  OrigDataType: 
T_227: (in edi_135 + 0x00402136 : word32)
  Class: Eq_227
  DataType: 
  OrigDataType: 
T_228: (in Mem168[edi_135 + 0x00402136:real32] : real32)
  Class: Eq_228
  DataType: 
  OrigDataType: 
T_229: (in rArg1 * Mem168[edi_135 + 0x00402136:real32] : word32)
  Class: Eq_229
  DataType: 
  OrigDataType: 
T_230: (in rArg0 * Mem168[edi_135 + 0x0040213A:real32] - rArg1 * Mem168[edi_135 + 0x00402136:real32] : real64)
  Class: Eq_225
  DataType: 
  OrigDataType: 
T_231: (in DPB(edi_135, di_134, 0, 16) : word32)
  Class: Eq_161
  DataType: 
  OrigDataType: 
T_232: (in 0x00402132 : ptr32)
  Class: Eq_232
  DataType: 
  OrigDataType: 
T_233: (in Mem168[0x00402132:word16] : word16)
  Class: Eq_233
  DataType: 
  OrigDataType: 
T_234: (in (real64) Mem168[0x00402132:word16] : real64)
  Class: Eq_234
  DataType: 
  OrigDataType: 
T_235: (in rLoc2_190 + (real64) Mem168[0x00402132:word16] : word32)
  Class: Eq_235
  DataType: 
  OrigDataType: 
T_236: (in 0x00402134 : ptr32)
  Class: Eq_236
  DataType: 
  OrigDataType: 
T_237: (in Mem168[0x00402134:word16] : word16)
  Class: Eq_237
  DataType: 
  OrigDataType: 
T_238: (in (real64) Mem168[0x00402134:word16] : real64)
  Class: Eq_238
  DataType: 
  OrigDataType: 
T_239: (in (rLoc2_190 + (real64) Mem168[0x00402132:word16]) / (real64) Mem168[0x00402134:word16] : word32)
  Class: Eq_239
  DataType: 
  OrigDataType: 
T_240: (in rArg1 / ((rLoc2_190 + (real64) Mem168[0x00402132:word16]) / (real64) Mem168[0x00402134:word16]) : real64)
  Class: Eq_240
  DataType: 
  OrigDataType: 
T_241: (in rLoc1_332 / (rArg1 / ((rLoc2_190 + (real64) Mem168[0x00402132:word16]) / (real64) Mem168[0x00402134:word16])) : real64)
  Class: Eq_198
  DataType: 
  OrigDataType: 
T_242: (in (int32) rArg0 : int32)
  Class: Eq_242
  DataType: 
  OrigDataType: 
T_243: (in 0x00402136 : word32)
  Class: Eq_243
  DataType: 
  OrigDataType: 
T_244: (in ebx_105 + 0x00402136 : word32)
  Class: Eq_244
  DataType: 
  OrigDataType: 
T_245: (in Mem210[ebx_105 + 0x00402136:int32] : int32)
  Class: Eq_242
  DataType: 
  OrigDataType: 
T_246: (in edi_211 : word32)
  Class: Eq_246
  DataType: 
  OrigDataType: 
T_247: (in 0x00402136 : word32)
  Class: Eq_247
  DataType: 
  OrigDataType: 
T_248: (in ebx_105 + 0x00402136 : word32)
  Class: Eq_248
  DataType: 
  OrigDataType: 
T_249: (in Mem210[ebx_105 + 0x00402136:word32] : word32)
  Class: Eq_249
  DataType: 
  OrigDataType: 
T_250: (in 0x00000140 : word32)
  Class: Eq_250
  DataType: 
  OrigDataType: 
T_251: (in Mem210[ebx_105 + 0x00402136:word32] *s 0x00000140 : int32)
  Class: Eq_246
  DataType: 
  OrigDataType: 
T_252: (in (int32) rArg1 : int32)
  Class: Eq_252
  DataType: 
  OrigDataType: 
T_253: (in 0x00402136 : word32)
  Class: Eq_253
  DataType: 
  OrigDataType: 
T_254: (in ebx_105 + 0x00402136 : word32)
  Class: Eq_254
  DataType: 
  OrigDataType: 
T_255: (in Mem212[ebx_105 + 0x00402136:int32] : int32)
  Class: Eq_252
  DataType: 
  OrigDataType: 
T_256: (in al_216 : byte)
  Class: Eq_256
  DataType: 
  OrigDataType: 
T_257: (in 0x0040211C : ptr32)
  Class: Eq_257
  DataType: 
  OrigDataType: 
T_258: (in Mem212[0x0040211C:word32] : word32)
  Class: Eq_258
  DataType: 
  OrigDataType: 
T_259: (in edx_106 + Mem212[0x0040211C:word32] : word32)
  Class: Eq_259
  DataType: 
  OrigDataType: 
T_260: (in Mem212[edx_106 + Mem212[0x0040211C:word32]:byte] : byte)
  Class: Eq_256
  DataType: 
  OrigDataType: 
T_261: (in edi_213 : word32)
  Class: Eq_261
  DataType: 
  OrigDataType: 
T_262: (in 0x00402136 : word32)
  Class: Eq_262
  DataType: 
  OrigDataType: 
T_263: (in ebx_105 + 0x00402136 : word32)
  Class: Eq_263
  DataType: 
  OrigDataType: 
T_264: (in Mem212[ebx_105 + 0x00402136:word32] : word32)
  Class: Eq_264
  DataType: 
  OrigDataType: 
T_265: (in edi_211 + Mem212[ebx_105 + 0x00402136:word32] : word32)
  Class: Eq_261
  DataType: 
  OrigDataType: 
T_266: (in esi_217 : word32)
  Class: Eq_266
  DataType: 
  OrigDataType: 
T_267: (in 0x00402118 : ptr32)
  Class: Eq_267
  DataType: 
  OrigDataType: 
T_268: (in Mem212[0x00402118:word32] : word32)
  Class: Eq_266
  DataType: 
  OrigDataType: 
T_269: (in 0x00007DA0 : word32)
  Class: Eq_269
  DataType: 
  OrigDataType: 
T_270: (in esi_217 + 0x00007DA0 : word32)
  Class: Eq_270
  DataType: 
  OrigDataType: 
T_271: (in esi_217 + 0x00007DA0 + edi_213 : word32)
  Class: Eq_271
  DataType: 
  OrigDataType: 
T_272: (in Mem212[esi_217 + 0x00007DA0 + edi_213:byte] : byte)
  Class: Eq_272
  DataType: 
  OrigDataType: 
T_273: (in 0x05 : byte)
  Class: Eq_273
  DataType: 
  OrigDataType: 
T_274: (in al_216 >>u 0x05 : word32)
  Class: Eq_274
  DataType: 
  OrigDataType: 
T_275: (in Mem212[esi_217 + 0x00007DA0 + edi_213:byte] + (al_216 >>u 0x05) : byte)
  Class: Eq_275
  DataType: 
  OrigDataType: 
T_276: (in 0x00007DA0 : word32)
  Class: Eq_276
  DataType: 
  OrigDataType: 
T_277: (in esi_217 + 0x00007DA0 : word32)
  Class: Eq_277
  DataType: 
  OrigDataType: 
T_278: (in esi_217 + 0x00007DA0 + edi_213 : word32)
  Class: Eq_278
  DataType: 
  OrigDataType: 
T_279: (in Mem222[esi_217 + 0x00007DA0 + edi_213:byte] : byte)
  Class: Eq_275
  DataType: 
  OrigDataType: 
T_280: (in al_216 >>u 0x05 : word32)
  Class: Eq_280
  DataType: 
  OrigDataType: 
T_281: (in DPB(eax_331, al_216 >>u 0x05, 0, 8) : word32)
  Class: Eq_98
  DataType: 
  OrigDataType: 
T_282: (in 0x041D : word16)
  Class: Eq_158
  DataType: 
  OrigDataType: 
T_283: (in 0x0000041D : word32)
  Class: Eq_161
  DataType: 
  OrigDataType: 
T_284: (in DPB(eax_108, dl_119, 0, 8) : word32)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_285: (in DPB(ebx_105, ch_242, 0, 8) : word32)
  Class: Eq_165
  DataType: 
  OrigDataType: 
T_286: (in DPB(bx_111, ch_242, 0, 8) : word16)
  Class: Eq_172
  DataType: 
  OrigDataType: 
T_287: (in -bp_109 : word16)
  Class: Eq_187
  DataType: 
  OrigDataType: 
T_288: (in 0x0000 : word16)
  Class: Eq_187
  DataType: 
  OrigDataType: 
T_289: (in bp_109 < 0x0000 : bool)
  Class: Eq_289
  DataType: 
  OrigDataType: 
T_290: (in 0x0001 : word16)
  Class: Eq_290
  DataType: 
  OrigDataType: 
T_291: (in dx_118 + 0x0001 : word16)
  Class: Eq_156
  DataType: 
  OrigDataType: 
T_292: (in (byte) dx_118 : byte)
  Class: Eq_152
  DataType: 
  OrigDataType: 
T_293: (in SLICE(dx_118, byte, 8) : byte)
  Class: Eq_152
  DataType: 
  OrigDataType: 
T_294: (in DPB(edx_106, dx_118, 0, 16) : word32)
  Class: Eq_150
  DataType: 
  OrigDataType: 
T_295: (in 0x0000 : word16)
  Class: Eq_156
  DataType: 
  OrigDataType: 
T_296: (in dx_118 != 0x0000 : bool)
  Class: Eq_296
  DataType: 
  OrigDataType: 
T_297: (in 0x02 : byte)
  Class: Eq_297
  DataType: 
  OrigDataType: 
T_298: (in ch_242 + 0x02 : byte)
  Class: Eq_139
  DataType: 
  OrigDataType: 
T_299: (in 0x0080 : word16)
  Class: Eq_187
  DataType: 
  OrigDataType: 
T_300: (in ecx_246 : word32)
  Class: Eq_300
  DataType: 
  OrigDataType: 
T_301: (in 0x0000FA00 : word32)
  Class: Eq_300
  DataType: 
  OrigDataType: 
T_302: (in esi_250 : word32)
  Class: Eq_302
  DataType: 
  OrigDataType: 
T_303: (in 0x00402118 : ptr32)
  Class: Eq_303
  DataType: 
  OrigDataType: 
T_304: (in Mem222[0x00402118:word32] : word32)
  Class: Eq_304
  DataType: 
  OrigDataType: 
T_305: (in 0x00000500 : word32)
  Class: Eq_305
  DataType: 
  OrigDataType: 
T_306: (in Mem222[0x00402118:word32] + 0x00000500 : word32)
  Class: Eq_302
  DataType: 
  OrigDataType: 
T_307: (in edi_252 : word32)
  Class: Eq_307
  DataType: 
  OrigDataType: 
T_308: (in 0x00402100 : ptr32)
  Class: Eq_308
  DataType: 
  OrigDataType: 
T_309: (in Mem222[0x00402100:word32] : word32)
  Class: Eq_309
  DataType: 
  OrigDataType: 
T_310: (in 0x00000500 : word32)
  Class: Eq_310
  DataType: 
  OrigDataType: 
T_311: (in Mem222[0x00402100:word32] + 0x00000500 : word32)
  Class: Eq_307
  DataType: 
  OrigDataType: 
T_312: (in eax_260 : word32)
  Class: Eq_312
  DataType: 
  OrigDataType: 
T_313: (in 0x00000000 : word32)
  Class: Eq_313
  DataType: 
  OrigDataType: 
T_314: (in esi_250 + 0x00000000 : word32)
  Class: Eq_314
  DataType: 
  OrigDataType: 
T_315: (in Mem222[esi_250 + 0x00000000:byte] : byte)
  Class: Eq_315
  DataType: 
  OrigDataType: 
T_316: (in DPB(eax_108, Mem222[esi_250 + 0x00000000:byte], 0, 8) : word32)
  Class: Eq_312
  DataType: 
  OrigDataType: 
T_317: (in 0x00 : byte)
  Class: Eq_317
  DataType: 
  OrigDataType: 
T_318: (in 0x00000000 : word32)
  Class: Eq_318
  DataType: 
  OrigDataType: 
T_319: (in esi_250 + 0x00000000 : word32)
  Class: Eq_319
  DataType: 
  OrigDataType: 
T_320: (in Mem261[esi_250 + 0x00000000:byte] : byte)
  Class: Eq_317
  DataType: 
  OrigDataType: 
T_321: (in 0x000000FF : word32)
  Class: Eq_321
  DataType: 
  OrigDataType: 
T_322: (in eax_260 & 0x000000FF : word32)
  Class: Eq_322
  DataType: 
  OrigDataType: 
T_323: (in 0x00000002 : word32)
  Class: Eq_323
  DataType: 
  OrigDataType: 
T_324: (in (eax_260 & 0x000000FF) << 0x00000002 : word32)
  Class: Eq_324
  DataType: 
  OrigDataType: 
T_325: (in 0x00402104 : ptr32)
  Class: Eq_325
  DataType: 
  OrigDataType: 
T_326: (in Mem261[0x00402104:word32] : word32)
  Class: Eq_326
  DataType: 
  OrigDataType: 
T_327: (in ((eax_260 & 0x000000FF) << 0x00000002) + Mem261[0x00402104:word32] : word32)
  Class: Eq_98
  DataType: 
  OrigDataType: 
T_328: (in 0x00000000 : word32)
  Class: Eq_328
  DataType: 
  OrigDataType: 
T_329: (in eax_108 + 0x00000000 : word32)
  Class: Eq_329
  DataType: 
  OrigDataType: 
T_330: (in Mem261[eax_108 + 0x00000000:word32] : word32)
  Class: Eq_330
  DataType: 
  OrigDataType: 
T_331: (in 0x00000000 : word32)
  Class: Eq_331
  DataType: 
  OrigDataType: 
T_332: (in edi_252 + 0x00000000 : word32)
  Class: Eq_332
  DataType: 
  OrigDataType: 
T_333: (in Mem268[edi_252 + 0x00000000:word32] : word32)
  Class: Eq_330
  DataType: 
  OrigDataType: 
T_334: (in 0x00000001 : word32)
  Class: Eq_334
  DataType: 
  OrigDataType: 
T_335: (in esi_250 + 0x00000001 : word32)
  Class: Eq_302
  DataType: 
  OrigDataType: 
T_336: (in 0x00000004 : word32)
  Class: Eq_336
  DataType: 
  OrigDataType: 
T_337: (in edi_252 + 0x00000004 : word32)
  Class: Eq_307
  DataType: 
  OrigDataType: 
T_338: (in 0x00000001 : word32)
  Class: Eq_338
  DataType: 
  OrigDataType: 
T_339: (in ecx_246 - 0x00000001 : word32)
  Class: Eq_300
  DataType: 
  OrigDataType: 
T_340: (in 0x00000000 : word32)
  Class: Eq_300
  DataType: 
  OrigDataType: 
T_341: (in ecx_246 != 0x00000000 : bool)
  Class: Eq_341
  DataType: 
  OrigDataType: 
T_342: (in GetClientRect : ptr32)
  Class: Eq_342
  DataType: 
  OrigDataType: 
T_343: (in signature of GetClientRect : void)
  Class: Eq_342
  DataType: 
  OrigDataType: 
T_344: (in hWnd : HWND)
  Class: Eq_344
  DataType: 
  OrigDataType: 
T_345: (in lpRect : LPRECT)
  Class: Eq_345
  DataType: 
  OrigDataType: 
T_346: (in 0x004020CC : ptr32)
  Class: Eq_346
  DataType: 
  OrigDataType: 
T_347: (in Mem268[0x004020CC:word32] : word32)
  Class: Eq_344
  DataType: 
  OrigDataType: 
T_348: (in 0x004020F0 : word32)
  Class: Eq_345
  DataType: 
  OrigDataType: 
T_349: (in GetClientRect(Mem268[0x004020CC:word32], 0x004020F0) : word32)
  Class: Eq_349
  DataType: 
  OrigDataType: 
T_350: (in StretchDIBits : ptr32)
  Class: Eq_350
  DataType: 
  OrigDataType: 
T_351: (in signature of StretchDIBits : void)
  Class: Eq_350
  DataType: 
  OrigDataType: 
T_352: (in hdc : HDC)
  Class: Eq_352
  DataType: 
  OrigDataType: 
T_353: (in xDest : int32)
  Class: Eq_353
  DataType: 
  OrigDataType: 
T_354: (in yDest : int32)
  Class: Eq_354
  DataType: 
  OrigDataType: 
T_355: (in DestWidth : int32)
  Class: Eq_355
  DataType: 
  OrigDataType: 
T_356: (in DestHeight : int32)
  Class: Eq_356
  DataType: 
  OrigDataType: 
T_357: (in xSrc : int32)
  Class: Eq_357
  DataType: 
  OrigDataType: 
T_358: (in ySrc : int32)
  Class: Eq_358
  DataType: 
  OrigDataType: 
T_359: (in SrcWidth : int32)
  Class: Eq_359
  DataType: 
  OrigDataType: 
T_360: (in SrcHeight : int32)
  Class: Eq_360
  DataType: 
  OrigDataType: 
T_361: (in lpBits : (ptr void))
  Class: Eq_361
  DataType: 
  OrigDataType: 
T_362: (in lpbmi : (ptr BITMAPINFO))
  Class: Eq_362
  DataType: 
  OrigDataType: 
T_363: (in iUsage : UINT)
  Class: Eq_363
  DataType: 
  OrigDataType: 
T_364: (in rop : DWORD)
  Class: Eq_364
  DataType: 
  OrigDataType: 
T_365: (in 0x004020D0 : ptr32)
  Class: Eq_365
  DataType: 
  OrigDataType: 
T_366: (in Mem268[0x004020D0:word32] : word32)
  Class: Eq_352
  DataType: 
  OrigDataType: 
T_367: (in 0x00000000 : word32)
  Class: Eq_353
  DataType: 
  OrigDataType: 
T_368: (in 0x00000000 : word32)
  Class: Eq_354
  DataType: 
  OrigDataType: 
T_369: (in 0x004020F8 : ptr32)
  Class: Eq_369
  DataType: 
  OrigDataType: 
T_370: (in Mem268[0x004020F8:word32] : word32)
  Class: Eq_355
  DataType: 
  OrigDataType: 
T_371: (in 0x004020FC : ptr32)
  Class: Eq_371
  DataType: 
  OrigDataType: 
T_372: (in Mem268[0x004020FC:word32] : word32)
  Class: Eq_356
  DataType: 
  OrigDataType: 
T_373: (in 0x00000000 : word32)
  Class: Eq_357
  DataType: 
  OrigDataType: 
T_374: (in 0x00000000 : word32)
  Class: Eq_358
  DataType: 
  OrigDataType: 
T_375: (in 0x00000140 : word32)
  Class: Eq_359
  DataType: 
  OrigDataType: 
T_376: (in 0x000000C8 : word32)
  Class: Eq_360
  DataType: 
  OrigDataType: 
T_377: (in 0x00402100 : ptr32)
  Class: Eq_377
  DataType: 
  OrigDataType: 
T_378: (in Mem268[0x00402100:word32] : word32)
  Class: Eq_361
  DataType: 
  OrigDataType: 
T_379: (in 0x0040206C : word32)
  Class: Eq_362
  DataType: 
  OrigDataType: 
T_380: (in 0x00000000 : word32)
  Class: Eq_363
  DataType: 
  OrigDataType: 
T_381: (in 0x00CC0020 : word32)
  Class: Eq_364
  DataType: 
  OrigDataType: 
T_382: (in StretchDIBits(Mem268[0x004020D0:word32], 0x00000000, 0x00000000, Mem268[0x004020F8:word32], Mem268[0x004020FC:word32], 0x00000000, 0x00000000, 0x00000140, 0x000000C8, Mem268[0x00402100:word32], 0x0040206C, 0x00000000, 0x00CC0020) : word32)
  Class: Eq_382
  DataType: 
  OrigDataType: 
T_383: (in eax_6 : word32)
  Class: Eq_383
  DataType: 
  OrigDataType: 
T_384: (in GlobalAlloc : ptr32)
  Class: Eq_384
  DataType: 
  OrigDataType: 
T_385: (in signature of GlobalAlloc : void)
  Class: Eq_384
  DataType: 
  OrigDataType: 
T_386: (in uFlags : UINT)
  Class: Eq_386
  DataType: 
  OrigDataType: 
T_387: (in dwBytes : SIZE_T)
  Class: Eq_387
  DataType: 
  OrigDataType: 
T_388: (in 0x00000000 : word32)
  Class: Eq_386
  DataType: 
  OrigDataType: 
T_389: (in 0x000F4240 : word32)
  Class: Eq_387
  DataType: 
  OrigDataType: 
T_390: (in GlobalAlloc(0x00000000, 0x000F4240) : word32)
  Class: Eq_383
  DataType: 
  OrigDataType: 
T_391: (in 0x00000000 : word32)
  Class: Eq_383
  DataType: 
  OrigDataType: 
T_392: (in eax_6 == 0x00000000 : bool)
  Class: Eq_392
  DataType: 
  OrigDataType: 
T_393: (in 0x0040204C : word32)
  Class: Eq_393
  DataType: 
  OrigDataType: 
T_394: (in fp : ptr32)
  Class: Eq_394
  DataType: 
  OrigDataType: 
T_395: (in 0x0000000C : word32)
  Class: Eq_395
  DataType: 
  OrigDataType: 
T_396: (in fp - 0x0000000C : word32)
  Class: Eq_396
  DataType: 
  OrigDataType: 
T_397: (in Mem126[fp - 0x0000000C:word32] : word32)
  Class: Eq_393
  DataType: 
  OrigDataType: 
T_398: (in 0x00000000 : word32)
  Class: Eq_398
  DataType: 
  OrigDataType: 
T_399: (in 0x00000010 : word32)
  Class: Eq_399
  DataType: 
  OrigDataType: 
T_400: (in fp - 0x00000010 : word32)
  Class: Eq_400
  DataType: 
  OrigDataType: 
T_401: (in Mem128[fp - 0x00000010:word32] : word32)
  Class: Eq_398
  DataType: 
  OrigDataType: 
T_402: (in MessageBoxW : ptr32)
  Class: Eq_402
  DataType: 
  OrigDataType: 
T_403: (in signature of MessageBoxW : void)
  Class: Eq_402
  DataType: 
  OrigDataType: 
T_404: (in hWnd : HWND)
  Class: Eq_404
  DataType: 
  OrigDataType: 
T_405: (in lpText : LPCWSTR)
  Class: Eq_405
  DataType: 
  OrigDataType: 
T_406: (in lpCaption : LPCWSTR)
  Class: Eq_406
  DataType: 
  OrigDataType: 
T_407: (in uType : UINT)
  Class: Eq_407
  DataType: 
  OrigDataType: 
T_408: (in 0x00000000 : word32)
  Class: Eq_404
  DataType: 
  OrigDataType: 
T_409: (in 0x00000000 : word32)
  Class: Eq_405
  DataType: 
  OrigDataType: 
T_410: (in 0x00000000 : word32)
  Class: Eq_406
  DataType: 
  OrigDataType: 
T_411: (in 0x00000010 : word32)
  Class: Eq_407
  DataType: 
  OrigDataType: 
T_412: (in MessageBoxW(0x00000000, 0x00000000, 0x00000000, 0x00000010) : word32)
  Class: Eq_412
  DataType: 
  OrigDataType: 
T_413: (in 0x0040210C : word32)
  Class: Eq_413
  DataType: 
  OrigDataType: 
T_414: (in Mem133[0x0040210C:word32] : word32)
  Class: Eq_383
  DataType: 
  OrigDataType: 
T_415: (in 0x00402104 : word32)
  Class: Eq_415
  DataType: 
  OrigDataType: 
T_416: (in Mem134[0x00402104:word32] : word32)
  Class: Eq_383
  DataType: 
  OrigDataType: 
T_417: (in 0x000007D0 : word32)
  Class: Eq_417
  DataType: 
  OrigDataType: 
T_418: (in eax_6 + 0x000007D0 : word32)
  Class: Eq_418
  DataType: 
  OrigDataType: 
T_419: (in 0x00402100 : word32)
  Class: Eq_419
  DataType: 
  OrigDataType: 
T_420: (in Mem136[0x00402100:word32] : word32)
  Class: Eq_418
  DataType: 
  OrigDataType: 
T_421: (in 0x00062250 : word32)
  Class: Eq_421
  DataType: 
  OrigDataType: 
T_422: (in eax_6 + 0x00062250 : word32)
  Class: Eq_422
  DataType: 
  OrigDataType: 
T_423: (in 0x0040211C : word32)
  Class: Eq_423
  DataType: 
  OrigDataType: 
T_424: (in Mem138[0x0040211C:word32] : word32)
  Class: Eq_422
  DataType: 
  OrigDataType: 
T_425: (in 0x00092F90 : word32)
  Class: Eq_425
  DataType: 
  OrigDataType: 
T_426: (in eax_6 + 0x00092F90 : word32)
  Class: Eq_426
  DataType: 
  OrigDataType: 
T_427: (in 0x00402118 : word32)
  Class: Eq_427
  DataType: 
  OrigDataType: 
T_428: (in Mem140[0x00402118:word32] : word32)
  Class: Eq_426
  DataType: 
  OrigDataType: 
T_429: (in 0x00000000 : word32)
  Class: Eq_429
  DataType: 
  OrigDataType: 
T_430: (in 0x00000004 : word32)
  Class: Eq_430
  DataType: 
  OrigDataType: 
T_431: (in fp - 0x00000004 : word32)
  Class: Eq_431
  DataType: 
  OrigDataType: 
T_432: (in Mem142[fp - 0x00000004:word32] : word32)
  Class: Eq_429
  DataType: 
  OrigDataType: 
T_433: (in GetModuleHandleW : ptr32)
  Class: Eq_433
  DataType: 
  OrigDataType: 
T_434: (in signature of GetModuleHandleW : void)
  Class: Eq_433
  DataType: 
  OrigDataType: 
T_435: (in lpModuleName : LPCWSTR)
  Class: Eq_435
  DataType: 
  OrigDataType: 
T_436: (in 0x000F4240 : word32)
  Class: Eq_435
  DataType: 
  OrigDataType: 
T_437: (in GetModuleHandleW(0x000F4240) : word32)
  Class: Eq_437
  DataType: 
  OrigDataType: 
T_438: (in 0x004020B4 : word32)
  Class: Eq_438
  DataType: 
  OrigDataType: 
T_439: (in Mem145[0x004020B4:word32] : word32)
  Class: Eq_437
  DataType: 
  OrigDataType: 
T_440: (in 0x00007F00 : word32)
  Class: Eq_440
  DataType: 
  OrigDataType: 
T_441: (in 0x00000004 : word32)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_442: (in fp - 0x00000004 : word32)
  Class: Eq_442
  DataType: 
  OrigDataType: 
T_443: (in Mem147[fp - 0x00000004:word32] : word32)
  Class: Eq_440
  DataType: 
  OrigDataType: 
T_444: (in 0x00000000 : word32)
  Class: Eq_444
  DataType: 
  OrigDataType: 
T_445: (in 0x00000008 : word32)
  Class: Eq_445
  DataType: 
  OrigDataType: 
T_446: (in fp - 0x00000008 : word32)
  Class: Eq_446
  DataType: 
  OrigDataType: 
T_447: (in Mem149[fp - 0x00000008:word32] : word32)
  Class: Eq_444
  DataType: 
  OrigDataType: 
T_448: (in LoadIconW : ptr32)
  Class: Eq_448
  DataType: 
  OrigDataType: 
T_449: (in signature of LoadIconW : void)
  Class: Eq_448
  DataType: 
  OrigDataType: 
T_450: (in hInstance : HINSTANCE)
  Class: Eq_450
  DataType: 
  OrigDataType: 
T_451: (in lpIconName : LPCWSTR)
  Class: Eq_435
  DataType: 
  OrigDataType: 
T_452: (in 0x00000000 : word32)
  Class: Eq_450
  DataType: 
  OrigDataType: 
T_453: (in LoadIconW(0x00000000, 0x000F4240) : word32)
  Class: Eq_453
  DataType: 
  OrigDataType: 
T_454: (in 0x004020B8 : word32)
  Class: Eq_454
  DataType: 
  OrigDataType: 
T_455: (in Mem152[0x004020B8:word32] : word32)
  Class: Eq_453
  DataType: 
  OrigDataType: 
T_456: (in 0x00007F00 : word32)
  Class: Eq_456
  DataType: 
  OrigDataType: 
T_457: (in 0x00000004 : word32)
  Class: Eq_457
  DataType: 
  OrigDataType: 
T_458: (in fp - 0x00000004 : word32)
  Class: Eq_458
  DataType: 
  OrigDataType: 
T_459: (in Mem154[fp - 0x00000004:word32] : word32)
  Class: Eq_456
  DataType: 
  OrigDataType: 
T_460: (in 0x00000000 : word32)
  Class: Eq_460
  DataType: 
  OrigDataType: 
T_461: (in 0x00000008 : word32)
  Class: Eq_461
  DataType: 
  OrigDataType: 
T_462: (in fp - 0x00000008 : word32)
  Class: Eq_462
  DataType: 
  OrigDataType: 
T_463: (in Mem156[fp - 0x00000008:word32] : word32)
  Class: Eq_460
  DataType: 
  OrigDataType: 
T_464: (in LoadCursorW : ptr32)
  Class: Eq_464
  DataType: 
  OrigDataType: 
T_465: (in signature of LoadCursorW : void)
  Class: Eq_464
  DataType: 
  OrigDataType: 
T_466: (in hInstance : HINSTANCE)
  Class: Eq_450
  DataType: 
  OrigDataType: 
T_467: (in lpCursorName : LPCWSTR)
  Class: Eq_435
  DataType: 
  OrigDataType: 
T_468: (in LoadCursorW(0x00000000, 0x000F4240) : word32)
  Class: Eq_468
  DataType: 
  OrigDataType: 
T_469: (in 0x004020BC : word32)
  Class: Eq_469
  DataType: 
  OrigDataType: 
T_470: (in Mem159[0x004020BC:word32] : word32)
  Class: Eq_468
  DataType: 
  OrigDataType: 
T_471: (in 0x004020A4 : word32)
  Class: Eq_471
  DataType: 
  OrigDataType: 
T_472: (in 0x00000004 : word32)
  Class: Eq_472
  DataType: 
  OrigDataType: 
T_473: (in fp - 0x00000004 : word32)
  Class: Eq_473
  DataType: 
  OrigDataType: 
T_474: (in Mem161[fp - 0x00000004:word32] : word32)
  Class: Eq_471
  DataType: 
  OrigDataType: 
T_475: (in RegisterClassW : ptr32)
  Class: Eq_475
  DataType: 
  OrigDataType: 
T_476: (in signature of RegisterClassW : void)
  Class: Eq_475
  DataType: 
  OrigDataType: 
T_477: (in lpWndClass : (ptr WNDCLASSW))
  Class: Eq_435
  DataType: 
  OrigDataType: 
T_478: (in RegisterClassW(0x000F4240) : word32)
  Class: Eq_478
  DataType: 
  OrigDataType: 
T_479: (in 0x00000000 : word32)
  Class: Eq_478
  DataType: 
  OrigDataType: 
T_480: (in RegisterClassW(0x000F4240) == 0x00000000 : bool)
  Class: Eq_480
  DataType: 
  OrigDataType: 
T_481: (in 0x00000000 : word32)
  Class: Eq_481
  DataType: 
  OrigDataType: 
T_482: (in 0x00000004 : word32)
  Class: Eq_482
  DataType: 
  OrigDataType: 
T_483: (in fp - 0x00000004 : word32)
  Class: Eq_483
  DataType: 
  OrigDataType: 
T_484: (in Mem168[fp - 0x00000004:word32] : word32)
  Class: Eq_481
  DataType: 
  OrigDataType: 
T_485: (in 0x004020B4 : ptr32)
  Class: Eq_485
  DataType: 
  OrigDataType: 
T_486: (in Mem168[0x004020B4:word32] : word32)
  Class: Eq_486
  DataType: 
  OrigDataType: 
T_487: (in 0x00000008 : word32)
  Class: Eq_487
  DataType: 
  OrigDataType: 
T_488: (in fp - 0x00000008 : word32)
  Class: Eq_488
  DataType: 
  OrigDataType: 
T_489: (in Mem170[fp - 0x00000008:word32] : word32)
  Class: Eq_486
  DataType: 
  OrigDataType: 
T_490: (in eax_191 : word32)
  Class: Eq_490
  DataType: 
  OrigDataType: 
T_491: (in CreateWindowExW : ptr32)
  Class: Eq_491
  DataType: 
  OrigDataType: 
T_492: (in signature of CreateWindowExW : void)
  Class: Eq_491
  DataType: 
  OrigDataType: 
T_493: (in dwExStyle : DWORD)
  Class: Eq_493
  DataType: 
  OrigDataType: 
T_494: (in lpClassName : LPCWSTR)
  Class: Eq_494
  DataType: 
  OrigDataType: 
T_495: (in lpWindowName : LPCWSTR)
  Class: Eq_495
  DataType: 
  OrigDataType: 
T_496: (in dwStyle : DWORD)
  Class: Eq_496
  DataType: 
  OrigDataType: 
T_497: (in X : int32)
  Class: Eq_497
  DataType: 
  OrigDataType: 
T_498: (in Y : int32)
  Class: Eq_498
  DataType: 
  OrigDataType: 
T_499: (in nWidth : int32)
  Class: Eq_499
  DataType: 
  OrigDataType: 
T_500: (in nHeight : int32)
  Class: Eq_500
  DataType: 
  OrigDataType: 
T_501: (in hWndParent : HWND)
  Class: Eq_501
  DataType: 
  OrigDataType: 
T_502: (in hMenu : HMENU)
  Class: Eq_502
  DataType: 
  OrigDataType: 
T_503: (in hInstance : HINSTANCE)
  Class: Eq_460
  DataType: 
  OrigDataType: 
T_504: (in lpParam : LPVOID)
  Class: Eq_471
  DataType: 
  OrigDataType: 
T_505: (in 0x00000000 : word32)
  Class: Eq_493
  DataType: 
  OrigDataType: 
T_506: (in 0x00402000 : word32)
  Class: Eq_494
  DataType: 
  OrigDataType: 
T_507: (in 0x00402012 : word32)
  Class: Eq_495
  DataType: 
  OrigDataType: 
T_508: (in 0x10CF0000 : word32)
  Class: Eq_496
  DataType: 
  OrigDataType: 
T_509: (in 0x00008000 : word32)
  Class: Eq_497
  DataType: 
  OrigDataType: 
T_510: (in 0x00008000 : word32)
  Class: Eq_498
  DataType: 
  OrigDataType: 
T_511: (in 0x0000021C : word32)
  Class: Eq_499
  DataType: 
  OrigDataType: 
T_512: (in 0x00000190 : word32)
  Class: Eq_500
  DataType: 
  OrigDataType: 
T_513: (in 0x00000000 : word32)
  Class: Eq_501
  DataType: 
  OrigDataType: 
T_514: (in 0x00000000 : word32)
  Class: Eq_502
  DataType: 
  OrigDataType: 
T_515: (in CreateWindowExW(0x00000000, 0x00402000, 0x00402012, 0x10CF0000, 0x00008000, 0x00008000, 0x0000021C, 0x00000190, 0x00000000, 0x00000000, 0x00000000, 0x004020A4) : word32)
  Class: Eq_490
  DataType: 
  OrigDataType: 
T_516: (in 0x00000000 : word32)
  Class: Eq_490
  DataType: 
  OrigDataType: 
T_517: (in eax_191 == 0x00000000 : bool)
  Class: Eq_517
  DataType: 
  OrigDataType: 
T_518: (in 0x004020CC : word32)
  Class: Eq_518
  DataType: 
  OrigDataType: 
T_519: (in Mem196[0x004020CC:word32] : word32)
  Class: Eq_490
  DataType: 
  OrigDataType: 
T_520: (in 0x00000004 : word32)
  Class: Eq_520
  DataType: 
  OrigDataType: 
T_521: (in fp - 0x00000004 : word32)
  Class: Eq_521
  DataType: 
  OrigDataType: 
T_522: (in Mem198[fp - 0x00000004:word32] : word32)
  Class: Eq_490
  DataType: 
  OrigDataType: 
T_523: (in GetDC : ptr32)
  Class: Eq_523
  DataType: 
  OrigDataType: 
T_524: (in signature of GetDC : void)
  Class: Eq_523
  DataType: 
  OrigDataType: 
T_525: (in hWnd : HWND)
  Class: Eq_481
  DataType: 
  OrigDataType: 
T_526: (in GetDC(0x00000000) : word32)
  Class: Eq_526
  DataType: 
  OrigDataType: 
T_527: (in 0x004020D0 : word32)
  Class: Eq_527
  DataType: 
  OrigDataType: 
T_528: (in Mem201[0x004020D0:word32] : word32)
  Class: Eq_526
  DataType: 
  OrigDataType: 
T_529: (in fn00401000 : ptr32)
  Class: Eq_529
  DataType: 
  OrigDataType: 
T_530: (in signature of fn00401000 : void)
  Class: Eq_529
  DataType: 
  OrigDataType: 
T_531: (in fn00401000() : void)
  Class: Eq_531
  DataType: 
  OrigDataType: 
T_532: (in fn00401017 : ptr32)
  Class: Eq_532
  DataType: 
  OrigDataType: 
T_533: (in signature of fn00401017 : void)
  Class: Eq_532
  DataType: 
  OrigDataType: 
T_534: (in edi : word32)
  Class: Eq_534
  DataType: 
  OrigDataType: 
T_535: (in out edi : ptr32)
  Class: Eq_57
  DataType: 
  OrigDataType: 
T_536: (in fn00401017(out edi) : word32)
  Class: Eq_536
  DataType: 
  OrigDataType: 
T_537: (in ebx : word32)
  Class: Eq_536
  DataType: 
  OrigDataType: 
T_538: (in fn00401088 : ptr32)
  Class: Eq_538
  DataType: 
  OrigDataType: 
T_539: (in signature of fn00401088 : void)
  Class: Eq_538
  DataType: 
  OrigDataType: 
T_540: (in rArg0 : real64)
  Class: Eq_198
  DataType: 
  OrigDataType: 
T_541: (in rArg1 : real64)
  Class: Eq_225
  DataType: 
  OrigDataType: 
T_542: (in fn00401088(rArg0, rArg1) : void)
  Class: Eq_542
  DataType: 
  OrigDataType: 
T_543: (in 0x00000004 : word32)
  Class: Eq_543
  DataType: 
  OrigDataType: 
T_544: (in 0x00000004 : word32)
  Class: Eq_544
  DataType: 
  OrigDataType: 
T_545: (in fp - 0x00000004 : word32)
  Class: Eq_545
  DataType: 
  OrigDataType: 
T_546: (in Mem207[fp - 0x00000004:word32] : word32)
  Class: Eq_543
  DataType: 
  OrigDataType: 
T_547: (in SetStretchBltMode : ptr32)
  Class: Eq_547
  DataType: 
  OrigDataType: 
T_548: (in signature of SetStretchBltMode : void)
  Class: Eq_547
  DataType: 
  OrigDataType: 
T_549: (in hdc : HDC)
  Class: Eq_549
  DataType: 
  OrigDataType: 
T_550: (in mode : int32)
  Class: Eq_481
  DataType: 
  OrigDataType: 
T_551: (in 0x004020D0 : ptr32)
  Class: Eq_551
  DataType: 
  OrigDataType: 
T_552: (in Mem207[0x004020D0:word32] : word32)
  Class: Eq_549
  DataType: 
  OrigDataType: 
T_553: (in SetStretchBltMode(Mem207[0x004020D0:word32], 0x00000000) : word32)
  Class: Eq_553
  DataType: 
  OrigDataType: 
T_554: (in dwLoc04_37 : word32)
  Class: Eq_554
  DataType: 
  OrigDataType: 
T_555: (in 0x004020D0 : ptr32)
  Class: Eq_555
  DataType: 
  OrigDataType: 
T_556: (in Mem0[0x004020D0:word32] : word32)
  Class: Eq_554
  DataType: 
  OrigDataType: 
T_557: (in 0x004020CC : ptr32)
  Class: Eq_557
  DataType: 
  OrigDataType: 
T_558: (in Mem0[0x004020CC:word32] : word32)
  Class: Eq_558
  DataType: 
  OrigDataType: 
T_559: (in 0x00000008 : word32)
  Class: Eq_559
  DataType: 
  OrigDataType: 
T_560: (in fp - 0x00000008 : word32)
  Class: Eq_560
  DataType: 
  OrigDataType: 
T_561: (in Mem39[fp - 0x00000008:word32] : word32)
  Class: Eq_558
  DataType: 
  OrigDataType: 
T_562: (in ReleaseDC : ptr32)
  Class: Eq_562
  DataType: 
  OrigDataType: 
T_563: (in signature of ReleaseDC : void)
  Class: Eq_562
  DataType: 
  OrigDataType: 
T_564: (in hWnd : HWND)
  Class: Eq_564
  DataType: 
  OrigDataType: 
T_565: (in hDC : HDC)
  Class: Eq_554
  DataType: 
  OrigDataType: 
T_566: (in 0x00000000 : word32)
  Class: Eq_564
  DataType: 
  OrigDataType: 
T_567: (in ReleaseDC(0x00000000, dwLoc04_37) : word32)
  Class: Eq_567
  DataType: 
  OrigDataType: 
T_568: (in GlobalFree : ptr32)
  Class: Eq_568
  DataType: 
  OrigDataType: 
T_569: (in signature of GlobalFree : void)
  Class: Eq_568
  DataType: 
  OrigDataType: 
T_570: (in hMem : HGLOBAL)
  Class: Eq_570
  DataType: 
  OrigDataType: 
T_571: (in 0x0040210C : ptr32)
  Class: Eq_571
  DataType: 
  OrigDataType: 
T_572: (in Mem39[0x0040210C:word32] : word32)
  Class: Eq_570
  DataType: 
  OrigDataType: 
T_573: (in GlobalFree(Mem39[0x0040210C:word32]) : word32)
  Class: Eq_573
  DataType: 
  OrigDataType: 
T_574: (in ExitProcess : ptr32)
  Class: Eq_574
  DataType: 
  OrigDataType: 
T_575: (in signature of ExitProcess : void)
  Class: Eq_574
  DataType: 
  OrigDataType: 
T_576: (in uExitCode : UINT)
  Class: Eq_576
  DataType: 
  OrigDataType: 
T_577: (in 0x004020DC : ptr32)
  Class: Eq_577
  DataType: 
  OrigDataType: 
T_578: (in Mem39[0x004020DC:word32] : word32)
  Class: Eq_576
  DataType: 
  OrigDataType: 
T_579: (in ExitProcess(Mem39[0x004020DC:word32]) : void)
  Class: Eq_579
  DataType: 
  OrigDataType: 
T_580: (in 0x00000008 : word32)
  Class: Eq_580
  DataType: 
  OrigDataType: 
T_581: (in fp - 0x00000008 : word32)
  Class: Eq_581
  DataType: 
  OrigDataType: 
T_582: (in Mem53[fp - 0x00000008:word32] : word32)
  Class: Eq_536
  DataType: 
  OrigDataType: 
T_583: (in 0x00000010 : word32)
  Class: Eq_583
  DataType: 
  OrigDataType: 
T_584: (in fp - 0x00000010 : word32)
  Class: Eq_584
  DataType: 
  OrigDataType: 
T_585: (in Mem58[fp - 0x00000010:word32] : word32)
  Class: Eq_534
  DataType: 
  OrigDataType: 
T_586: (in dwArg08 : word32)
  Class: Eq_586
  DataType: 
  OrigDataType: 
T_587: (in 0x00000002 : word32)
  Class: Eq_586
  DataType: 
  OrigDataType: 
T_588: (in dwArg08 == 0x00000002 : bool)
  Class: Eq_588
  DataType: 
  OrigDataType: 
T_589: (in 0x004020D4 : word32)
  Class: Eq_589
  DataType: 
  OrigDataType: 
T_590: (in 0x00000004 : word32)
  Class: Eq_590
  DataType: 
  OrigDataType: 
T_591: (in fp - 0x00000004 : word32)
  Class: Eq_591
  DataType: 
  OrigDataType: 
T_592: (in Mem228[fp - 0x00000004:word32] : word32)
  Class: Eq_589
  DataType: 
  OrigDataType: 
T_593: (in TranslateMessage : ptr32)
  Class: Eq_593
  DataType: 
  OrigDataType: 
T_594: (in signature of TranslateMessage : void)
  Class: Eq_593
  DataType: 
  OrigDataType: 
T_595: (in lpMsg : (ptr MSG))
  Class: Eq_595
  DataType: 
  OrigDataType: 
T_596: (in 0x00000001 : word32)
  Class: Eq_595
  DataType: 
  OrigDataType: 
T_597: (in TranslateMessage(0x00000001) : word32)
  Class: Eq_597
  DataType: 
  OrigDataType: 
T_598: (in 0x004020D4 : word32)
  Class: Eq_598
  DataType: 
  OrigDataType: 
T_599: (in 0x00000004 : word32)
  Class: Eq_599
  DataType: 
  OrigDataType: 
T_600: (in fp - 0x00000004 : word32)
  Class: Eq_600
  DataType: 
  OrigDataType: 
T_601: (in Mem232[fp - 0x00000004:word32] : word32)
  Class: Eq_598
  DataType: 
  OrigDataType: 
T_602: (in DispatchMessageW : ptr32)
  Class: Eq_602
  DataType: 
  OrigDataType: 
T_603: (in signature of DispatchMessageW : void)
  Class: Eq_602
  DataType: 
  OrigDataType: 
T_604: (in lpMsg : (ptr MSG))
  Class: Eq_595
  DataType: 
  OrigDataType: 
T_605: (in DispatchMessageW(0x00000001) : word32)
  Class: Eq_605
  DataType: 
  OrigDataType: 
T_606: (in fn00401088 : ptr32)
  Class: Eq_538
  DataType: 
  OrigDataType: 
T_607: (in rArg2 : real64)
  Class: Eq_198
  DataType: 
  OrigDataType: 
T_608: (in rArg3 : real64)
  Class: Eq_225
  DataType: 
  OrigDataType: 
T_609: (in fn00401088(rArg2, rArg3) : void)
  Class: Eq_609
  DataType: 
  OrigDataType: 
T_610: (in 0x00402108 : ptr32)
  Class: Eq_610
  DataType: 
  OrigDataType: 
T_611: (in Mem232[0x00402108:word32] : word32)
  Class: Eq_611
  DataType: 
  OrigDataType: 
T_612: (in 0x00000001 : word32)
  Class: Eq_612
  DataType: 
  OrigDataType: 
T_613: (in Mem232[0x00402108:word32] + 0x00000001 : word32)
  Class: Eq_613
  DataType: 
  OrigDataType: 
T_614: (in Mem236[0x00402108:word32] : word32)
  Class: Eq_613
  DataType: 
  OrigDataType: 
T_615: (in 0x00000000 : word32)
  Class: Eq_615
  DataType: 
  OrigDataType: 
T_616: (in 0x0000000C : word32)
  Class: Eq_616
  DataType: 
  OrigDataType: 
T_617: (in fp - 0x0000000C : word32)
  Class: Eq_617
  DataType: 
  OrigDataType: 
T_618: (in Mem218[fp - 0x0000000C:word32] : word32)
  Class: Eq_615
  DataType: 
  OrigDataType: 
T_619: (in 0x00000000 : word32)
  Class: Eq_619
  DataType: 
  OrigDataType: 
T_620: (in 0x00000010 : word32)
  Class: Eq_620
  DataType: 
  OrigDataType: 
T_621: (in fp - 0x00000010 : word32)
  Class: Eq_621
  DataType: 
  OrigDataType: 
T_622: (in Mem220[fp - 0x00000010:word32] : word32)
  Class: Eq_619
  DataType: 
  OrigDataType: 
T_623: (in PeekMessageW : ptr32)
  Class: Eq_623
  DataType: 
  OrigDataType: 
T_624: (in signature of PeekMessageW : void)
  Class: Eq_623
  DataType: 
  OrigDataType: 
T_625: (in lpMsg : LPMSG)
  Class: Eq_625
  DataType: 
  OrigDataType: 
T_626: (in hWnd : HWND)
  Class: Eq_404
  DataType: 
  OrigDataType: 
T_627: (in wMsgFilterMin : UINT)
  Class: Eq_405
  DataType: 
  OrigDataType: 
T_628: (in wMsgFilterMax : UINT)
  Class: Eq_628
  DataType: 
  OrigDataType: 
T_629: (in wRemoveMsg : UINT)
  Class: Eq_629
  DataType: 
  OrigDataType: 
T_630: (in 0x004020D4 : word32)
  Class: Eq_625
  DataType: 
  OrigDataType: 
T_631: (in 0x00000000 : word32)
  Class: Eq_628
  DataType: 
  OrigDataType: 
T_632: (in 0x00000001 : word32)
  Class: Eq_629
  DataType: 
  OrigDataType: 
T_633: (in PeekMessageW(0x004020D4, 0x00000000, 0x00000000, 0x00000000, 0x00000001) : word32)
  Class: Eq_633
  DataType: 
  OrigDataType: 
T_634: (in 0x004020D8 : ptr32)
  Class: Eq_634
  DataType: 
  OrigDataType: 
T_635: (in Mem220[0x004020D8:word32] : word32)
  Class: Eq_635
  DataType: 
  OrigDataType: 
T_636: (in 0x00000012 : word32)
  Class: Eq_635
  DataType: 
  OrigDataType: 
T_637: (in Mem220[0x004020D8:word32] == 0x00000012 : bool)
  Class: Eq_637
  DataType: 
  OrigDataType: 
T_638: (in PostQuitMessage : ptr32)
  Class: Eq_638
  DataType: 
  OrigDataType: 
T_639: (in signature of PostQuitMessage : void)
  Class: Eq_638
  DataType: 
  OrigDataType: 
T_640: (in nExitCode : int32)
  Class: Eq_640
  DataType: 
  OrigDataType: 
T_641: (in 0x00000000 : word32)
  Class: Eq_640
  DataType: 
  OrigDataType: 
T_642: (in PostQuitMessage(0x00000000) : void)
  Class: Eq_642
  DataType: 
  OrigDataType: 
T_643: (in 0x00000005 : word32)
  Class: Eq_586
  DataType: 
  OrigDataType: 
T_644: (in dwArg08 == 0x00000005 : bool)
  Class: Eq_644
  DataType: 
  OrigDataType: 
T_645: (in 0x00402108 : ptr32)
  Class: Eq_645
  DataType: 
  OrigDataType: 
T_646: (in Mem58[0x00402108:word32] : word32)
  Class: Eq_646
  DataType: 
  OrigDataType: 
T_647: (in 0x0000000A : word32)
  Class: Eq_646
  DataType: 
  OrigDataType: 
T_648: (in Mem58[0x00402108:word32] <u 0x0000000A : bool)
  Class: Eq_648
  DataType: 
  OrigDataType: 
T_649: (in dwArg0C : word32)
  Class: Eq_649
  DataType: 
  OrigDataType: 
T_650: (in 0x00000018 : word32)
  Class: Eq_650
  DataType: 
  OrigDataType: 
T_651: (in fp - 0x00000018 : word32)
  Class: Eq_651
  DataType: 
  OrigDataType: 
T_652: (in Mem86[fp - 0x00000018:word32] : word32)
  Class: Eq_649
  DataType: 
  OrigDataType: 
T_653: (in 0x0000001C : word32)
  Class: Eq_653
  DataType: 
  OrigDataType: 
T_654: (in fp - 0x0000001C : word32)
  Class: Eq_654
  DataType: 
  OrigDataType: 
T_655: (in Mem88[fp - 0x0000001C:word32] : word32)
  Class: Eq_586
  DataType: 
  OrigDataType: 
T_656: (in dwArg04 : word32)
  Class: Eq_656
  DataType: 
  OrigDataType: 
T_657: (in 0x00000020 : word32)
  Class: Eq_657
  DataType: 
  OrigDataType: 
T_658: (in fp - 0x00000020 : word32)
  Class: Eq_658
  DataType: 
  OrigDataType: 
T_659: (in Mem91[fp - 0x00000020:word32] : word32)
  Class: Eq_656
  DataType: 
  OrigDataType: 
T_660: (in DefWindowProcW : ptr32)
  Class: Eq_660
  DataType: 
  OrigDataType: 
T_661: (in signature of DefWindowProcW : void)
  Class: Eq_660
  DataType: 
  OrigDataType: 
T_662: (in hWnd : HWND)
  Class: Eq_662
  DataType: 
  OrigDataType: 
T_663: (in Msg : UINT)
  Class: Eq_663
  DataType: 
  OrigDataType: 
T_664: (in wParam : WPARAM)
  Class: Eq_664
  DataType: 
  OrigDataType: 
T_665: (in lParam : LPARAM)
  Class: Eq_665
  DataType: 
  OrigDataType: 
T_666: (in 0x00008000 : word32)
  Class: Eq_662
  DataType: 
  OrigDataType: 
T_667: (in 0x00008000 : word32)
  Class: Eq_663
  DataType: 
  OrigDataType: 
T_668: (in 0x0000021C : word32)
  Class: Eq_664
  DataType: 
  OrigDataType: 
T_669: (in dwArg10 : word32)
  Class: Eq_665
  DataType: 
  OrigDataType: 
T_670: (in DefWindowProcW(0x00008000, 0x00008000, 0x0000021C, dwArg10) : word32)
  Class: Eq_670
  DataType: 
  OrigDataType: 
T_671: (in fn00401088 : ptr32)
  Class: Eq_538
  DataType: 
  OrigDataType: 
T_672: (in fn00401088(rArg2, rArg3) : void)
  Class: Eq_672
  DataType: 
  OrigDataType: 
T_673:
  Class: Eq_673
  DataType: 
  OrigDataType: (struct 0001 (0 T_35 t0000))
*/
