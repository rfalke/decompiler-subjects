// subject.h
// Generated on TIMESTAMP by decompiling from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr (struct "Globals"))
  OrigDataType: (ptr (struct "Globals"))
T_2: (in eax : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_3: (in MSVCR90.dll!sprintf : ptr32)
  Class: Eq_3
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_4: (in eax_5 : word32)
  Class: Eq_4
  DataType: word32
  OrigDataType: word32
T_5: (in 0x00403000 : ptr32)
  Class: Eq_5
  DataType: (ptr (struct (0 T_6 t0000)))
  OrigDataType: (ptr (struct (0 T_6 t0000)))
T_6: (in Mem0[0x00403000:word32] : word32)
  Class: Eq_6
  DataType: word32
  OrigDataType: word32
T_7: (in fp : ptr32)
  Class: Eq_7
  DataType: ptr32
  OrigDataType: ptr32
T_8: (in 0x00000058 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_9: (in fp - 0x00000058 : word32)
  Class: Eq_9
  DataType: word32
  OrigDataType: word32
T_10: (in Mem0[0x00403000:word32] ^ fp - 0x00000058 : word32)
  Class: Eq_4
  DataType: word32
  OrigDataType: word32
T_11: (in ebx_14 : word32)
  Class: Eq_11
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_12: (in MSVCR90.dll!sprintf : ptr32)
  Class: Eq_11
  DataType: 
  OrigDataType: 
T_13: (in ebp_189 : word32)
  Class: Eq_13
  DataType: int32
  OrigDataType: int32
T_14: (in dwArg08 : word32)
  Class: Eq_13
  DataType: int32
  OrigDataType: int32
T_15: (in 0x00000010 : word32)
  Class: Eq_13
  DataType: int32
  OrigDataType: int32
T_16: (in dwArg08 <= 0x00000010 : bool)
  Class: Eq_16
  DataType: bool
  OrigDataType: bool
T_17: (in esi_188 : word32)
  Class: Eq_13
  DataType: int32
  OrigDataType: int32
T_18: (in 0x00000000 : word32)
  Class: Eq_13
  DataType: word32
  OrigDataType: word32
T_19: (in 0x00000000 : word32)
  Class: Eq_13
  DataType: int32
  OrigDataType: int32
T_20: (in ebp_189 <= 0x00000000 : bool)
  Class: Eq_20
  DataType: bool
  OrigDataType: bool
T_21: (in 0x00000010 : word32)
  Class: Eq_13
  DataType: word32
  OrigDataType: word32
T_22: (in edx_201 : word32)
  Class: Eq_22
  DataType: word32
  OrigDataType: word32
T_23: (in 0x00402114 : ptr32)
  Class: Eq_23
  DataType: (ptr (struct (0 T_24 t0000)))
  OrigDataType: (ptr (struct (0 T_24 t0000)))
T_24: (in Mem0[0x00402114:word32] : word32)
  Class: Eq_22
  DataType: word32
  OrigDataType: word32
T_25: (in ecx_203 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_26: (in 0x00000010 : word32)
  Class: Eq_26
  DataType: word32
  OrigDataType: word32
T_27: (in 0x00000010 - esi_188 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_28: (in 0x00000001 : word32)
  Class: Eq_28
  DataType: word32
  OrigDataType: word32
T_29: (in esi_188 + 0x00000001 : word32)
  Class: Eq_13
  DataType: word32
  OrigDataType: word32
T_30: (in esi_188 < ebp_189 : bool)
  Class: Eq_30
  DataType: bool
  OrigDataType: bool
T_31: (in edi_248 : word32)
  Class: Eq_31
  DataType: (ptr (struct (0 T_37 t0000)))
  OrigDataType: (ptr (struct (0 T_37 t0000)))
T_32: (in 0x00000001 : word32)
  Class: Eq_32
  DataType: word32
  OrigDataType: word32
T_33: (in edi_248 + 0x00000001 : word32)
  Class: Eq_31
  DataType: word32
  OrigDataType: word32
T_34: (in edi_214 : word32)
  Class: Eq_31
  DataType: (ptr (struct 0001 (0 T_42 t0000)))
  OrigDataType: (ptr (struct 0001 (0 T_42 t0000)))
T_35: (in 0x00000000 : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_36: (in edi_248 + 0x00000000 : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_37: (in Mem0[edi_248 + 0x00000000:byte] : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in 0x00 : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_39: (in Mem0[edi_248 + 0x00000000:byte] != 0x00 : bool)
  Class: Eq_39
  DataType: bool
  OrigDataType: bool
T_40: (in 0x00000000 : word32)
  Class: Eq_40
  DataType: word32
  OrigDataType: word32
T_41: (in edi_214 + 0x00000000 : word32)
  Class: Eq_41
  DataType: word32
  OrigDataType: word32
T_42: (in Mem226[edi_214 + 0x00000000:word32] : word32)
  Class: Eq_22
  DataType: word32
  OrigDataType: word32
T_43: (in 0x00000001 : word32)
  Class: Eq_43
  DataType: word32
  OrigDataType: word32
T_44: (in ecx_203 - 0x00000001 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_45: (in 0x00000000 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_46: (in ecx_203 != 0x00000000 : bool)
  Class: Eq_46
  DataType: bool
  OrigDataType: bool
T_47: (in 0x00000055 : word32)
  Class: Eq_47
  DataType: word32
  OrigDataType: word32
T_48: (in fp - 0x00000055 : word32)
  Class: Eq_48
  DataType: word32
  OrigDataType: word32
T_49: (in 0x00000001 : word32)
  Class: Eq_49
  DataType: word32
  OrigDataType: word32
T_50: (in fp - 0x00000055 + 0x00000001 : word32)
  Class: Eq_31
  DataType: word32
  OrigDataType: word32
T_51: (in eax_71 : word32)
  Class: Eq_51
  DataType: word32
  OrigDataType: word32
T_52: (in 0x00000054 : word32)
  Class: Eq_52
  DataType: word32
  OrigDataType: word32
T_53: (in fp - 0x00000054 : word32)
  Class: Eq_51
  DataType: word32
  OrigDataType: word32
T_54: (in edx_74 : word32)
  Class: Eq_54
  DataType: word32
  OrigDataType: word32
T_55: (in 0x00000053 : word32)
  Class: Eq_55
  DataType: word32
  OrigDataType: word32
T_56: (in fp - 0x00000053 : word32)
  Class: Eq_56
  DataType: word32
  OrigDataType: word32
T_57: (in edxOut : ptr32)
  Class: Eq_57
  DataType: ptr32
  OrigDataType: ptr32
T_58: (in *edxOut : word32)
  Class: Eq_56
  DataType: 
  OrigDataType: 
T_59: (in eax_247 : word32)
  Class: Eq_51
  DataType: 
  OrigDataType: 
T_60: (in 0x00000001 : word32)
  Class: Eq_60
  DataType: 
  OrigDataType: 
T_61: (in eax_247 + 0x00000001 : word32)
  Class: Eq_51
  DataType: 
  OrigDataType: 
T_62: (in 0x00000000 : word32)
  Class: Eq_62
  DataType: 
  OrigDataType: 
T_63: (in eax_247 + 0x00000000 : word32)
  Class: Eq_63
  DataType: 
  OrigDataType: 
T_64: (in Mem0[eax_247 + 0x00000000:byte] : byte)
  Class: Eq_64
  DataType: 
  OrigDataType: 
T_65: (in 0x00 : byte)
  Class: Eq_64
  DataType: 
  OrigDataType: 
T_66: (in Mem0[eax_247 + 0x00000000:byte] != 0x00 : bool)
  Class: Eq_66
  DataType: 
  OrigDataType: 
T_67: (in 0x00000010 : word32)
  Class: Eq_13
  DataType: 
  OrigDataType: 
T_68: (in esi_188 >= 0x00000010 : bool)
  Class: Eq_68
  DataType: 
  OrigDataType: 
T_69: (in eax_83 : word32)
  Class: Eq_69
  DataType: 
  OrigDataType: 
T_70: (in 0x00000053 : word32)
  Class: Eq_70
  DataType: 
  OrigDataType: 
T_71: (in fp - 0x00000053 : word32)
  Class: Eq_71
  DataType: 
  OrigDataType: 
T_72: (in eax_71 - (fp - 0x00000053) : word32)
  Class: Eq_69
  DataType: 
  OrigDataType: 
T_73: (in 0x007C2020 : word32)
  Class: Eq_73
  DataType: 
  OrigDataType: 
T_74: (in 0x00000054 : word32)
  Class: Eq_74
  DataType: 
  OrigDataType: 
T_75: (in fp - 0x00000054 : word32)
  Class: Eq_75
  DataType: 
  OrigDataType: 
T_76: (in fp - 0x00000054 + eax_83 : word32)
  Class: Eq_76
  DataType: 
  OrigDataType: 
T_77: (in Mem85[fp - 0x00000054 + eax_83:word32] : word32)
  Class: Eq_73
  DataType: 
  OrigDataType: 
T_78: (in esi_125 : word32)
  Class: Eq_13
  DataType: 
  OrigDataType: 
T_79: (in 0x00000000 : word32)
  Class: Eq_13
  DataType: 
  OrigDataType: 
T_80: (in 0x00000000 : word32)
  Class: Eq_13
  DataType: 
  OrigDataType: 
T_81: (in ebp_189 <= 0x00000000 : bool)
  Class: Eq_81
  DataType: 
  OrigDataType: 
T_82: (in edi_131 : word32)
  Class: Eq_82
  DataType: 
  OrigDataType: 
T_83: (in 0x00000010 : word32)
  Class: Eq_83
  DataType: 
  OrigDataType: 
T_84: (in 0x00000010 - esi_125 : word32)
  Class: Eq_82
  DataType: 
  OrigDataType: 
T_85: (in memset : ptr32)
  Class: Eq_85
  DataType: 
  OrigDataType: 
T_86: (in signature of memset : void)
  Class: Eq_85
  DataType: 
  OrigDataType: 
T_87: (in _Dst : (ptr void))
  Class: Eq_87
  DataType: 
  OrigDataType: 
T_88: (in _Val : int32)
  Class: Eq_88
  DataType: 
  OrigDataType: 
T_89: (in _Size : size_t)
  Class: Eq_82
  DataType: 
  OrigDataType: 
T_90: (in 0x00000054 : word32)
  Class: Eq_90
  DataType: 
  OrigDataType: 
T_91: (in fp - 0x00000054 : word32)
  Class: Eq_91
  DataType: 
  OrigDataType: 
T_92: (in 0x00000003 : word32)
  Class: Eq_92
  DataType: 
  OrigDataType: 
T_93: (in eax_83 + 0x00000003 : word32)
  Class: Eq_93
  DataType: 
  OrigDataType: 
T_94: (in eax_83 + 0x00000003 + esi_125 : word32)
  Class: Eq_94
  DataType: 
  OrigDataType: 
T_95: (in fp - 0x00000054 + ((eax_83 + 0x00000003) + esi_125) : word32)
  Class: Eq_87
  DataType: 
  OrigDataType: 
T_96: (in 0x00000020 : word32)
  Class: Eq_88
  DataType: 
  OrigDataType: 
T_97: (in memset(fp - 0x00000054 + ((eax_83 + 0x00000003) + esi_125), 0x00000020, edi_131) : word32)
  Class: Eq_97
  DataType: 
  OrigDataType: 
T_98: (in esi_125 + edi_131 : word32)
  Class: Eq_13
  DataType: 
  OrigDataType: 
T_99: (in ecx_144 : word32)
  Class: Eq_99
  DataType: 
  OrigDataType: 
T_100: (in 0x00000054 : word32)
  Class: Eq_100
  DataType: 
  OrigDataType: 
T_101: (in fp - 0x00000054 : word32)
  Class: Eq_101
  DataType: 
  OrigDataType: 
T_102: (in eax_83 + 0x00000003 : word32)
  Class: Eq_102
  DataType: 
  OrigDataType: 
T_103: (in fp - 0x00000054 + (eax_83 + 0x00000003) : word32)
  Class: Eq_99
  DataType: 
  OrigDataType: 
T_104: (in 0x2E : byte)
  Class: Eq_104
  DataType: 
  OrigDataType: 
T_105: (in al_159 : byte)
  Class: Eq_104
  DataType: 
  OrigDataType: 
T_106: (in al_152 : byte)
  Class: Eq_106
  DataType: 
  OrigDataType: 
T_107: (in (word32) al_152 : word32)
  Class: Eq_107
  DataType: 
  OrigDataType: 
T_108: (in (byte) (word32) al_152 : byte)
  Class: Eq_104
  DataType: 
  OrigDataType: 
T_109: (in 0x7E : byte)
  Class: Eq_106
  DataType: 
  OrigDataType: 
T_110: (in al_152 <=u 0x7E : bool)
  Class: Eq_110
  DataType: 
  OrigDataType: 
T_111: (in ecx_144 + esi_125 : word32)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_112: (in Mem161[ecx_144 + esi_125:byte] : byte)
  Class: Eq_104
  DataType: 
  OrigDataType: 
T_113: (in 0x00000001 : word32)
  Class: Eq_113
  DataType: 
  OrigDataType: 
T_114: (in esi_125 + 0x00000001 : word32)
  Class: Eq_13
  DataType: 
  OrigDataType: 
T_115: (in esi_125 < ebp_189 : bool)
  Class: Eq_115
  DataType: 
  OrigDataType: 
T_116: (in dwArg04 : word32)
  Class: Eq_116
  DataType: 
  OrigDataType: 
T_117: (in dwArg04 + esi_125 : word32)
  Class: Eq_117
  DataType: 
  OrigDataType: 
T_118: (in Mem85[dwArg04 + esi_125:byte] : byte)
  Class: Eq_106
  DataType: 
  OrigDataType: 
T_119: (in 0x20 : byte)
  Class: Eq_106
  DataType: 
  OrigDataType: 
T_120: (in al_152 <u 0x20 : bool)
  Class: Eq_120
  DataType: 
  OrigDataType: 
T_121: (in 0x00000010 : word32)
  Class: Eq_13
  DataType: 
  OrigDataType: 
T_122: (in esi_125 >= 0x00000010 : bool)
  Class: Eq_122
  DataType: 
  OrigDataType: 
T_123: (in 0x007C : word16)
  Class: Eq_123
  DataType: 
  OrigDataType: 
T_124: (in 0x00000054 : word32)
  Class: Eq_124
  DataType: 
  OrigDataType: 
T_125: (in fp - 0x00000054 : word32)
  Class: Eq_125
  DataType: 
  OrigDataType: 
T_126: (in eax_83 + 0x00000003 : word32)
  Class: Eq_126
  DataType: 
  OrigDataType: 
T_127: (in eax_83 + 0x00000003 + esi_125 : word32)
  Class: Eq_127
  DataType: 
  OrigDataType: 
T_128: (in fp - 0x00000054 + ((eax_83 + 0x00000003) + esi_125) : word32)
  Class: Eq_128
  DataType: 
  OrigDataType: 
T_129: (in Mem101[fp - 0x00000054 + ((eax_83 + 0x00000003) + esi_125):word16] : word16)
  Class: Eq_123
  DataType: 
  OrigDataType: 
T_130: (in MSVCR90.dll!printf : ptr32)
  Class: Eq_130
  DataType: 
  OrigDataType: 
T_131: (in fn0040123B : ptr32)
  Class: Eq_131
  DataType: 
  OrigDataType: 
T_132: (in signature of fn0040123B : void)
  Class: Eq_131
  DataType: 
  OrigDataType: 
T_133: (in eax : word32)
  Class: Eq_133
  DataType: 
  OrigDataType: 
T_134: (in ecx : word32)
  Class: Eq_134
  DataType: 
  OrigDataType: 
T_135: (in edx : word32)
  Class: Eq_135
  DataType: 
  OrigDataType: 
T_136: (in ebx : word32)
  Class: Eq_136
  DataType: 
  OrigDataType: 
T_137: (in ebp : word32)
  Class: Eq_137
  DataType: 
  OrigDataType: 
T_138: (in esi : word32)
  Class: Eq_138
  DataType: 
  OrigDataType: 
T_139: (in edi : word32)
  Class: Eq_139
  DataType: 
  OrigDataType: 
T_140: (in es : selector)
  Class: Eq_140
  DataType: 
  OrigDataType: 
T_141: (in ds : selector)
  Class: Eq_141
  DataType: 
  OrigDataType: 
T_142: (in fs : selector)
  Class: Eq_142
  DataType: 
  OrigDataType: 
T_143: (in gs : selector)
  Class: Eq_143
  DataType: 
  OrigDataType: 
T_144: (in dwArg00 : word32)
  Class: Eq_136
  DataType: 
  OrigDataType: 
T_145: (in 0x0000007C : word32)
  Class: Eq_133
  DataType: 
  OrigDataType: 
T_146: (in 0x00000058 : word32)
  Class: Eq_146
  DataType: 
  OrigDataType: 
T_147: (in fp - 0x00000058 : word32)
  Class: Eq_147
  DataType: 
  OrigDataType: 
T_148: (in eax_5 ^ fp - 0x00000058 : word32)
  Class: Eq_134
  DataType: 
  OrigDataType: 
T_149: (in fp - 0x00000053 : word32)
  Class: Eq_135
  DataType: 
  OrigDataType: 
T_150: (in ebx : word32)
  Class: Eq_136
  DataType: 
  OrigDataType: 
T_151: (in ebp : word32)
  Class: Eq_137
  DataType: 
  OrigDataType: 
T_152: (in esi : word32)
  Class: Eq_138
  DataType: 
  OrigDataType: 
T_153: (in edi : word32)
  Class: Eq_139
  DataType: 
  OrigDataType: 
T_154: (in es : selector)
  Class: Eq_140
  DataType: 
  OrigDataType: 
T_155: (in ds : selector)
  Class: Eq_141
  DataType: 
  OrigDataType: 
T_156: (in fs : selector)
  Class: Eq_142
  DataType: 
  OrigDataType: 
T_157: (in gs : selector)
  Class: Eq_143
  DataType: 
  OrigDataType: 
T_158: (in fn0040123B(0x0000007C, eax_5 ^ fp - 0x00000058, fp - 0x00000053, ebx, ebp, esi, edi, es, ds, fs, gs, ebx) : word32)
  Class: Eq_158
  DataType: 
  OrigDataType: 
T_159: (in eax : word32)
  Class: Eq_159
  DataType: 
  OrigDataType: 
T_160: (in edx : word32)
  Class: Eq_135
  DataType: 
  OrigDataType: 
T_161: (in edxOut : ptr32)
  Class: Eq_161
  DataType: 
  OrigDataType: 
T_162: (in *edxOut : word32)
  Class: Eq_135
  DataType: 
  OrigDataType: 
T_163: (in _stat64i32 : ptr32)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_164: (in signature of _stat64i32 : void)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_165: (in esi_23 : word32)
  Class: Eq_165
  DataType: 
  OrigDataType: 
T_166: (in ecx : word32)
  Class: Eq_165
  DataType: 
  OrigDataType: 
T_167: (in fp : ptr32)
  Class: Eq_167
  DataType: 
  OrigDataType: 
T_168: (in 0x0000004C : word32)
  Class: Eq_168
  DataType: 
  OrigDataType: 
T_169: (in fp - 0x0000004C : word32)
  Class: Eq_169
  DataType: 
  OrigDataType: 
T_170: (in fp - 0x0000004C : word32)
  Class: Eq_170
  DataType: 
  OrigDataType: 
T_171: (in fp - 0x0000004C & fp - 0x0000004C : word32)
  Class: Eq_171
  DataType: 
  OrigDataType: 
T_172: (in 0x00000000 : word32)
  Class: Eq_171
  DataType: 
  OrigDataType: 
T_173: (in (fp - 0x0000004C & fp - 0x0000004C) == 0x00000000 : bool)
  Class: Eq_173
  DataType: 
  OrigDataType: 
T_174: (in MSVCR90.dll!fopen : ptr32)
  Class: Eq_174
  DataType: 
  OrigDataType: 
T_175: (in 0x0000004C : word32)
  Class: Eq_175
  DataType: 
  OrigDataType: 
T_176: (in fp - 0x0000004C : word32)
  Class: Eq_176
  DataType: 
  OrigDataType: 
T_177: (in fp - 0x0000004C : word32)
  Class: Eq_177
  DataType: 
  OrigDataType: 
T_178: (in fp - 0x0000004C & fp - 0x0000004C : word32)
  Class: Eq_178
  DataType: 
  OrigDataType: 
T_179: (in 0x00000000 : word32)
  Class: Eq_178
  DataType: 
  OrigDataType: 
T_180: (in (fp - 0x0000004C & fp - 0x0000004C) == 0x00000000 : bool)
  Class: Eq_180
  DataType: 
  OrigDataType: 
T_181: (in perror : ptr32)
  Class: Eq_181
  DataType: 
  OrigDataType: 
T_182: (in signature of perror : void)
  Class: Eq_181
  DataType: 
  OrigDataType: 
T_183: (in _ErrMsg : (ptr char))
  Class: Eq_165
  DataType: 
  OrigDataType: 
T_184: (in perror(esi_23) : void)
  Class: Eq_184
  DataType: 
  OrigDataType: 
T_185: (in edi_78 : word32)
  Class: Eq_185
  DataType: 
  OrigDataType: 
T_186: (in fp - 0x0000004C : word32)
  Class: Eq_186
  DataType: 
  OrigDataType: 
T_187: (in ediOut : ptr32)
  Class: Eq_187
  DataType: 
  OrigDataType: 
T_188: (in *ediOut : word32)
  Class: Eq_186
  DataType: 
  OrigDataType: 
T_189: (in esi_80 : word32)
  Class: Eq_189
  DataType: 
  OrigDataType: 
T_190: (in edi : word32)
  Class: Eq_138
  DataType: 
  OrigDataType: 
T_191: (in esiOut : ptr32)
  Class: Eq_191
  DataType: 
  OrigDataType: 
T_192: (in *esiOut : word32)
  Class: Eq_138
  DataType: 
  OrigDataType: 
T_193: (in ebp_82 : word32)
  Class: Eq_193
  DataType: 
  OrigDataType: 
T_194: (in esi : word32)
  Class: Eq_137
  DataType: 
  OrigDataType: 
T_195: (in ebpOut : ptr32)
  Class: Eq_195
  DataType: 
  OrigDataType: 
T_196: (in *ebpOut : word32)
  Class: Eq_137
  DataType: 
  OrigDataType: 
T_197: (in ebx_84 : word32)
  Class: Eq_197
  DataType: 
  OrigDataType: 
T_198: (in ebp : word32)
  Class: Eq_136
  DataType: 
  OrigDataType: 
T_199: (in ebxOut : ptr32)
  Class: Eq_199
  DataType: 
  OrigDataType: 
T_200: (in *ebxOut : word32)
  Class: Eq_136
  DataType: 
  OrigDataType: 
T_201: (in fn0040123B : ptr32)
  Class: Eq_131
  DataType: 
  OrigDataType: 
T_202: (in 0x00000001 : word32)
  Class: Eq_133
  DataType: 
  OrigDataType: 
T_203: (in dwLoc0C : word32)
  Class: Eq_203
  DataType: 
  OrigDataType: 
T_204: (in 0xFFFFFFB0 : word32)
  Class: Eq_204
  DataType: 
  OrigDataType: 
T_205: (in fp + 0xFFFFFFB0 : word32)
  Class: Eq_205
  DataType: 
  OrigDataType: 
T_206: (in dwLoc0C ^ fp + 0xFFFFFFB0 : word32)
  Class: Eq_134
  DataType: 
  OrigDataType: 
T_207: (in fp - 0x0000004C : word32)
  Class: Eq_139
  DataType: 
  OrigDataType: 
T_208: (in es : selector)
  Class: Eq_140
  DataType: 
  OrigDataType: 
T_209: (in ds : selector)
  Class: Eq_141
  DataType: 
  OrigDataType: 
T_210: (in fs : selector)
  Class: Eq_142
  DataType: 
  OrigDataType: 
T_211: (in gs : selector)
  Class: Eq_143
  DataType: 
  OrigDataType: 
T_212: (in fn0040123B(0x00000001, dwLoc0C ^ fp + 0xFFFFFFB0, edx, ebp, esi, edi, fp - 0x0000004C, es, ds, fs, gs, ebp) : word32)
  Class: Eq_212
  DataType: 
  OrigDataType: 
T_213: (in dwLoc3C : word32)
  Class: Eq_213
  DataType: 
  OrigDataType: 
T_214: (in 0x00000000 : word32)
  Class: Eq_213
  DataType: 
  OrigDataType: 
T_215: (in dwLoc3C <=u 0x00000000 : bool)
  Class: Eq_215
  DataType: 
  OrigDataType: 
T_216: (in MSVCR90.dll!fclose : ptr32)
  Class: Eq_216
  DataType: 
  OrigDataType: 
T_217: (in edi_114 : word32)
  Class: Eq_217
  DataType: 
  OrigDataType: 
T_218: (in fp - 0x0000004C : word32)
  Class: Eq_218
  DataType: 
  OrigDataType: 
T_219: (in *ediOut : word32)
  Class: Eq_218
  DataType: 
  OrigDataType: 
T_220: (in esi_116 : word32)
  Class: Eq_220
  DataType: 
  OrigDataType: 
T_221: (in *esiOut : word32)
  Class: Eq_138
  DataType: 
  OrigDataType: 
T_222: (in ebp_118 : word32)
  Class: Eq_222
  DataType: 
  OrigDataType: 
T_223: (in *ebpOut : word32)
  Class: Eq_137
  DataType: 
  OrigDataType: 
T_224: (in ebx_120 : word32)
  Class: Eq_224
  DataType: 
  OrigDataType: 
T_225: (in *ebxOut : word32)
  Class: Eq_136
  DataType: 
  OrigDataType: 
T_226: (in fn0040123B : ptr32)
  Class: Eq_131
  DataType: 
  OrigDataType: 
T_227: (in 0x00000000 : word32)
  Class: Eq_133
  DataType: 
  OrigDataType: 
T_228: (in 0xFFFFFFB0 : word32)
  Class: Eq_228
  DataType: 
  OrigDataType: 
T_229: (in fp + 0xFFFFFFB0 : word32)
  Class: Eq_229
  DataType: 
  OrigDataType: 
T_230: (in dwLoc0C ^ fp + 0xFFFFFFB0 : word32)
  Class: Eq_134
  DataType: 
  OrigDataType: 
T_231: (in fp - 0x0000004C : word32)
  Class: Eq_139
  DataType: 
  OrigDataType: 
T_232: (in fn0040123B(0x00000000, dwLoc0C ^ fp + 0xFFFFFFB0, edx, ebp, esi, edi, fp - 0x0000004C, es, ds, fs, gs, ebp) : word32)
  Class: Eq_232
  DataType: 
  OrigDataType: 
T_233: (in ebx_129 : word32)
  Class: Eq_136
  DataType: 
  OrigDataType: 
T_234: (in MSVCR90.dll!fread : ptr32)
  Class: Eq_136
  DataType: 
  OrigDataType: 
T_235: (in 0xFFFFFFE4 : word32)
  Class: Eq_235
  DataType: 
  OrigDataType: 
T_236: (in fp + 0xFFFFFFE4 : word32)
  Class: Eq_236
  DataType: 
  OrigDataType: 
T_237: (in 0xFFFFFF98 : word32)
  Class: Eq_237
  DataType: 
  OrigDataType: 
T_238: (in fp + 0xFFFFFF98 : word32)
  Class: Eq_238
  DataType: 
  OrigDataType: 
T_239: (in Mem149[fp + 0xFFFFFF98:word32] : word32)
  Class: Eq_236
  DataType: 
  OrigDataType: 
T_240: (in edx_151 : word32)
  Class: Eq_240
  DataType: 
  OrigDataType: 
T_241: (in fn00401000 : ptr32)
  Class: Eq_241
  DataType: 
  OrigDataType: 
T_242: (in signature of fn00401000 : void)
  Class: Eq_241
  DataType: 
  OrigDataType: 
T_243: (in dwArg04 : word32)
  Class: Eq_243
  DataType: 
  OrigDataType: 
T_244: (in dwArg08 : word32)
  Class: Eq_244
  DataType: 
  OrigDataType: 
T_245: (in 0x00000000 : word32)
  Class: Eq_137
  DataType: 
  OrigDataType: 
T_246: (in fp - 0x0000004C : word32)
  Class: Eq_138
  DataType: 
  OrigDataType: 
T_247: (in fp - 0x0000004C : word32)
  Class: Eq_139
  DataType: 
  OrigDataType: 
T_248: (in 0x00000010 : word32)
  Class: Eq_243
  DataType: 
  OrigDataType: 
T_249: (in fp - 0x0000004C : word32)
  Class: Eq_244
  DataType: 
  OrigDataType: 
T_250: (in out edx_151 : ptr32)
  Class: Eq_57
  DataType: 
  OrigDataType: 
T_251: (in fn00401000(ebx_129, 0x00000000, fp - 0x0000004C, fp - 0x0000004C, es, ds, fs, gs, 0x00000010, fp - 0x0000004C, out edx_151) : word32)
  Class: Eq_251
  DataType: 
  OrigDataType: 
T_252: (in fp - 0x0000004C : word32)
  Class: Eq_213
  DataType: 
  OrigDataType: 
T_253: (in fp - 0x0000004C <u dwLoc3C : bool)
  Class: Eq_253
  DataType: 
  OrigDataType: 
T_254: (in 0x00000001 : word32)
  Class: Eq_254
  DataType: 
  OrigDataType: 
T_255: (in 0xFFFFFF94 : word32)
  Class: Eq_255
  DataType: 
  OrigDataType: 
T_256: (in fp + 0xFFFFFF94 : word32)
  Class: Eq_256
  DataType: 
  OrigDataType: 
T_257: (in Mem137[fp + 0xFFFFFF94:word32] : word32)
  Class: Eq_254
  DataType: 
  OrigDataType: 
T_258: (in MSVCR90.dll!fread : ptr32)
  Class: Eq_258
  DataType: 
  OrigDataType: 
T_259: (in 0x0000004C : word32)
  Class: Eq_167
  DataType: 
  OrigDataType: 
T_260: (in fp == 0x0000004C : bool)
  Class: Eq_260
  DataType: 
  OrigDataType: 
T_261: (in eax : word32)
  Class: Eq_261
  DataType: 
  OrigDataType: 
T_262: (in __align : ptr32)
  Class: Eq_262
  DataType: 
  OrigDataType: 
T_263: (in fp : ptr32)
  Class: Eq_263
  DataType: 
  OrigDataType: 
T_264: (in 0x00000004 : word32)
  Class: Eq_264
  DataType: 
  OrigDataType: 
T_265: (in fp - 0x00000004 : word32)
  Class: Eq_265
  DataType: 
  OrigDataType: 
T_266: (in __align(fp - 0x00000004) : void)
  Class: Eq_266
  DataType: 
  OrigDataType: 
T_267: (in ebp_32 : word32)
  Class: Eq_136
  DataType: 
  OrigDataType: 
T_268: (in fp - 0x00000004 : word32)
  Class: Eq_136
  DataType: 
  OrigDataType: 
T_269: (in edi_20 : word32)
  Class: Eq_138
  DataType: 
  OrigDataType: 
T_270: (in 0x00000000 : word32)
  Class: Eq_138
  DataType: 
  OrigDataType: 
T_271: (in esi_21 : word32)
  Class: Eq_137
  DataType: 
  OrigDataType: 
T_272: (in 0x00000001 : word32)
  Class: Eq_137
  DataType: 
  OrigDataType: 
T_273: (in dwArg04 : word32)
  Class: Eq_273
  DataType: 
  OrigDataType: 
T_274: (in 0x00000001 : word32)
  Class: Eq_273
  DataType: 
  OrigDataType: 
T_275: (in dwArg04 <= 0x00000001 : bool)
  Class: Eq_275
  DataType: 
  OrigDataType: 
T_276: (in edi_34 : word32)
  Class: Eq_276
  DataType: 
  OrigDataType: 
T_277: (in 0x00000014 : word32)
  Class: Eq_277
  DataType: 
  OrigDataType: 
T_278: (in fp - 0x00000014 : word32)
  Class: Eq_278
  DataType: 
  OrigDataType: 
T_279: (in Mem0[fp - 0x00000014:word32] : word32)
  Class: Eq_276
  DataType: 
  OrigDataType: 
T_280: (in ebp_40 : word32)
  Class: Eq_280
  DataType: 
  OrigDataType: 
T_281: (in 0x00000000 : word32)
  Class: Eq_281
  DataType: 
  OrigDataType: 
T_282: (in ebp_32 + 0x00000000 : word32)
  Class: Eq_282
  DataType: 
  OrigDataType: 
T_283: (in Mem0[ebp_32 + 0x00000000:word32] : word32)
  Class: Eq_280
  DataType: 
  OrigDataType: 
T_284: (in esp_41 : word32)
  Class: Eq_284
  DataType: 
  OrigDataType: 
T_285: (in 0x00000004 : word32)
  Class: Eq_285
  DataType: 
  OrigDataType: 
T_286: (in ebp_32 + 0x00000004 : word32)
  Class: Eq_284
  DataType: 
  OrigDataType: 
T_287: (in ebx_47 : word32)
  Class: Eq_287
  DataType: 
  OrigDataType: 
T_288: (in 0x00000008 : word32)
  Class: Eq_288
  DataType: 
  OrigDataType: 
T_289: (in esp_41 + 0x00000008 : word32)
  Class: Eq_289
  DataType: 
  OrigDataType: 
T_290: (in Mem0[esp_41 + 0x00000008:word32] : word32)
  Class: Eq_290
  DataType: 
  OrigDataType: 
T_291: (in ebxOut : ptr32)
  Class: Eq_291
  DataType: 
  OrigDataType: 
T_292: (in *ebxOut : word32)
  Class: Eq_290
  DataType: 
  OrigDataType: 
T_293: (in ebp_49 : word32)
  Class: Eq_293
  DataType: 
  OrigDataType: 
T_294: (in 0x00000000 : word32)
  Class: Eq_294
  DataType: 
  OrigDataType: 
T_295: (in ebp_40 + 0x00000000 : word32)
  Class: Eq_295
  DataType: 
  OrigDataType: 
T_296: (in Mem0[ebp_40 + 0x00000000:word32] : word32)
  Class: Eq_296
  DataType: 
  OrigDataType: 
T_297: (in ebpOut : ptr32)
  Class: Eq_297
  DataType: 
  OrigDataType: 
T_298: (in *ebpOut : word32)
  Class: Eq_296
  DataType: 
  OrigDataType: 
T_299: (in ebx_64 : word32)
  Class: Eq_299
  DataType: 
  OrigDataType: 
T_300: (in esi_66 : word32)
  Class: Eq_300
  DataType: 
  OrigDataType: 
T_301: (in edi_67 : word32)
  Class: Eq_301
  DataType: 
  OrigDataType: 
T_302: (in fn00401140 : ptr32)
  Class: Eq_302
  DataType: 
  OrigDataType: 
T_303: (in signature of fn00401140 : void)
  Class: Eq_302
  DataType: 
  OrigDataType: 
T_304: (in 0x0000000C : word32)
  Class: Eq_304
  DataType: 
  OrigDataType: 
T_305: (in ebp_32 + 0x0000000C : word32)
  Class: Eq_305
  DataType: 
  OrigDataType: 
T_306: (in Mem0[ebp_32 + 0x0000000C:word32] : word32)
  Class: Eq_306
  DataType: 
  OrigDataType: 
T_307: (in 0x00000004 : word32)
  Class: Eq_307
  DataType: 
  OrigDataType: 
T_308: (in esi_21 * 0x00000004 : word32)
  Class: Eq_308
  DataType: 
  OrigDataType: 
T_309: (in Mem0[ebp_32 + 0x0000000C:word32][esi_21 * 0x00000004] : word32)
  Class: Eq_165
  DataType: 
  OrigDataType: 
T_310: (in edx : word32)
  Class: Eq_135
  DataType: 
  OrigDataType: 
T_311: (in es : selector)
  Class: Eq_140
  DataType: 
  OrigDataType: 
T_312: (in ds : selector)
  Class: Eq_141
  DataType: 
  OrigDataType: 
T_313: (in fs : selector)
  Class: Eq_142
  DataType: 
  OrigDataType: 
T_314: (in gs : selector)
  Class: Eq_143
  DataType: 
  OrigDataType: 
T_315: (in out edx : ptr32)
  Class: Eq_161
  DataType: 
  OrigDataType: 
T_316: (in out ebx_64 : ptr32)
  Class: Eq_199
  DataType: 
  OrigDataType: 
T_317: (in out ebp_32 : ptr32)
  Class: Eq_195
  DataType: 
  OrigDataType: 
T_318: (in out esi_66 : ptr32)
  Class: Eq_191
  DataType: 
  OrigDataType: 
T_319: (in out edi_67 : ptr32)
  Class: Eq_187
  DataType: 
  OrigDataType: 
T_320: (in fn00401140(Mem0[ebp_32 + 0x0000000C:word32][esi_21 * 0x00000004], edx, ebp_32, esi_21, edi_20, es, ds, fs, gs, out edx, out ebx_64, out ebp_32, out esi_66, out edi_67) : word32)
  Class: Eq_261
  DataType: 
  OrigDataType: 
T_321: (in 0x00000001 : word32)
  Class: Eq_321
  DataType: 
  OrigDataType: 
T_322: (in esi_66 + 0x00000001 : word32)
  Class: Eq_137
  DataType: 
  OrigDataType: 
T_323: (in edi_67 + eax : word32)
  Class: Eq_138
  DataType: 
  OrigDataType: 
T_324: (in esi_66 + 0x00000001 : word32)
  Class: Eq_299
  DataType: 
  OrigDataType: 
T_325: (in esi_66 + 0x00000001 < ebx_64 : bool)
  Class: Eq_325
  DataType: 
  OrigDataType: 
T_326: (in 0x00403000 : ptr32)
  Class: Eq_326
  DataType: 
  OrigDataType: 
T_327: (in Mem0[0x00403000:word32] : word32)
  Class: Eq_134
  DataType: 
  OrigDataType: 
T_328: (in ecx != Mem0[0x00403000:word32] : bool)
  Class: Eq_328
  DataType: 
  OrigDataType: 
T_329: (in 0x00000000 : word32)
  Class: Eq_134
  DataType: 
  OrigDataType: 
T_330: (in ecx == 0x00000000 : bool)
  Class: Eq_330
  DataType: 
  OrigDataType: 
T_331: (in 0x00403140 : ptr32)
  Class: Eq_331
  DataType: 
  OrigDataType: 
T_332: (in Mem39[0x00403140:word32] : word32)
  Class: Eq_133
  DataType: 
  OrigDataType: 
T_333: (in 0x0040313C : ptr32)
  Class: Eq_333
  DataType: 
  OrigDataType: 
T_334: (in Mem40[0x0040313C:word32] : word32)
  Class: Eq_134
  DataType: 
  OrigDataType: 
T_335: (in 0x00403138 : ptr32)
  Class: Eq_335
  DataType: 
  OrigDataType: 
T_336: (in Mem42[0x00403138:word32] : word32)
  Class: Eq_135
  DataType: 
  OrigDataType: 
T_337: (in 0x00403134 : ptr32)
  Class: Eq_337
  DataType: 
  OrigDataType: 
T_338: (in Mem44[0x00403134:word32] : word32)
  Class: Eq_136
  DataType: 
  OrigDataType: 
T_339: (in 0x00403130 : ptr32)
  Class: Eq_339
  DataType: 
  OrigDataType: 
T_340: (in Mem46[0x00403130:word32] : word32)
  Class: Eq_138
  DataType: 
  OrigDataType: 
T_341: (in 0x0040312C : ptr32)
  Class: Eq_341
  DataType: 
  OrigDataType: 
T_342: (in Mem47[0x0040312C:word32] : word32)
  Class: Eq_139
  DataType: 
  OrigDataType: 
T_343: (in ss : selector)
  Class: Eq_343
  DataType: 
  OrigDataType: 
T_344: (in 0x00403158 : ptr32)
  Class: Eq_344
  DataType: 
  OrigDataType: 
T_345: (in Mem49[0x00403158:word16] : word16)
  Class: Eq_343
  DataType: 
  OrigDataType: 
T_346: (in cs : selector)
  Class: Eq_346
  DataType: 
  OrigDataType: 
T_347: (in 0x0040314C : ptr32)
  Class: Eq_347
  DataType: 
  OrigDataType: 
T_348: (in Mem51[0x0040314C:word16] : word16)
  Class: Eq_346
  DataType: 
  OrigDataType: 
T_349: (in 0x00403128 : ptr32)
  Class: Eq_349
  DataType: 
  OrigDataType: 
T_350: (in Mem53[0x00403128:word16] : word16)
  Class: Eq_141
  DataType: 
  OrigDataType: 
T_351: (in 0x00403124 : ptr32)
  Class: Eq_351
  DataType: 
  OrigDataType: 
T_352: (in Mem55[0x00403124:word16] : word16)
  Class: Eq_140
  DataType: 
  OrigDataType: 
T_353: (in 0x00403120 : ptr32)
  Class: Eq_353
  DataType: 
  OrigDataType: 
T_354: (in Mem57[0x00403120:word16] : word16)
  Class: Eq_142
  DataType: 
  OrigDataType: 
T_355: (in 0x0040311C : ptr32)
  Class: Eq_355
  DataType: 
  OrigDataType: 
T_356: (in Mem59[0x0040311C:word16] : word16)
  Class: Eq_143
  DataType: 
  OrigDataType: 
T_357: (in fp : ptr32)
  Class: Eq_357
  DataType: 
  OrigDataType: 
T_358: (in 0x0000032C : word32)
  Class: Eq_358
  DataType: 
  OrigDataType: 
T_359: (in fp - 0x0000032C : word32)
  Class: Eq_359
  DataType: 
  OrigDataType: 
T_360: (in cond(fp - 0x0000032C) : byte)
  Class: Eq_360
  DataType: 
  OrigDataType: 
T_361: (in 0x00403150 : ptr32)
  Class: Eq_361
  DataType: 
  OrigDataType: 
T_362: (in Mem62[0x00403150:word32] : word32)
  Class: Eq_360
  DataType: 
  OrigDataType: 
T_363: (in 0x00403144 : ptr32)
  Class: Eq_363
  DataType: 
  OrigDataType: 
T_364: (in Mem65[0x00403144:word32] : word32)
  Class: Eq_137
  DataType: 
  OrigDataType: 
T_365: (in dwArg00 : word32)
  Class: Eq_365
  DataType: 
  OrigDataType: 
T_366: (in 0x00403148 : ptr32)
  Class: Eq_366
  DataType: 
  OrigDataType: 
T_367: (in Mem68[0x00403148:word32] : word32)
  Class: Eq_365
  DataType: 
  OrigDataType: 
T_368: (in 0x00000004 : word32)
  Class: Eq_368
  DataType: 
  OrigDataType: 
T_369: (in fp + 0x00000004 : word32)
  Class: Eq_369
  DataType: 
  OrigDataType: 
T_370: (in 0x00403154 : ptr32)
  Class: Eq_370
  DataType: 
  OrigDataType: 
T_371: (in Mem70[0x00403154:word32] : word32)
  Class: Eq_369
  DataType: 
  OrigDataType: 
T_372: (in 0x00010001 : word32)
  Class: Eq_372
  DataType: 
  OrigDataType: 
T_373: (in 0x00403090 : ptr32)
  Class: Eq_373
  DataType: 
  OrigDataType: 
T_374: (in Mem73[0x00403090:word32] : word32)
  Class: Eq_372
  DataType: 
  OrigDataType: 
T_375: (in 0x00403148 : ptr32)
  Class: Eq_375
  DataType: 
  OrigDataType: 
T_376: (in Mem73[0x00403148:word32] : word32)
  Class: Eq_376
  DataType: 
  OrigDataType: 
T_377: (in 0x00403044 : ptr32)
  Class: Eq_377
  DataType: 
  OrigDataType: 
T_378: (in Mem75[0x00403044:word32] : word32)
  Class: Eq_376
  DataType: 
  OrigDataType: 
T_379: (in 0xC0000409 : word32)
  Class: Eq_379
  DataType: 
  OrigDataType: 
T_380: (in 0x00403038 : ptr32)
  Class: Eq_380
  DataType: 
  OrigDataType: 
T_381: (in Mem76[0x00403038:word32] : word32)
  Class: Eq_379
  DataType: 
  OrigDataType: 
T_382: (in 0x00000001 : word32)
  Class: Eq_382
  DataType: 
  OrigDataType: 
T_383: (in 0x0040303C : ptr32)
  Class: Eq_383
  DataType: 
  OrigDataType: 
T_384: (in Mem77[0x0040303C:word32] : word32)
  Class: Eq_382
  DataType: 
  OrigDataType: 
T_385: (in IsDebuggerPresent : ptr32)
  Class: Eq_385
  DataType: 
  OrigDataType: 
T_386: (in signature of IsDebuggerPresent : void)
  Class: Eq_385
  DataType: 
  OrigDataType: 
T_387: (in IsDebuggerPresent() : word32)
  Class: Eq_387
  DataType: 
  OrigDataType: 
T_388: (in 0x00403088 : ptr32)
  Class: Eq_388
  DataType: 
  OrigDataType: 
T_389: (in Mem83[0x00403088:word32] : word32)
  Class: Eq_387
  DataType: 
  OrigDataType: 
T_390: (in _crt_debugger_hook : ptr32)
  Class: Eq_390
  DataType: 
  OrigDataType: 
T_391: (in signature of _crt_debugger_hook : void)
  Class: Eq_390
  DataType: 
  OrigDataType: 
T_392: (in SetUnhandledExceptionFilter : ptr32)
  Class: Eq_392
  DataType: 
  OrigDataType: 
T_393: (in signature of SetUnhandledExceptionFilter : void)
  Class: Eq_392
  DataType: 
  OrigDataType: 
T_394: (in lpTopLevelExceptionFilter : LPTOP_LEVEL_EXCEPTION_FILTER)
  Class: Eq_394
  DataType: 
  OrigDataType: 
T_395: (in 0x00000000 : word32)
  Class: Eq_394
  DataType: 
  OrigDataType: 
T_396: (in SetUnhandledExceptionFilter(0x00000000) : word32)
  Class: Eq_396
  DataType: 
  OrigDataType: 
T_397: (in UnhandledExceptionFilter : ptr32)
  Class: Eq_397
  DataType: 
  OrigDataType: 
T_398: (in signature of UnhandledExceptionFilter : void)
  Class: Eq_397
  DataType: 
  OrigDataType: 
T_399: (in ExceptionInfo : (ptr (struct "_EXCEPTION_POINTERS")))
  Class: Eq_399
  DataType: 
  OrigDataType: 
T_400: (in 0x004020FC : word32)
  Class: Eq_399
  DataType: 
  OrigDataType: 
T_401: (in UnhandledExceptionFilter(0x004020FC) : word32)
  Class: Eq_401
  DataType: 
  OrigDataType: 
T_402: (in esp_115 : word32)
  Class: Eq_402
  DataType: 
  OrigDataType: 
T_403: (in 0xFFFFFCD0 : word32)
  Class: Eq_403
  DataType: 
  OrigDataType: 
T_404: (in fp + 0xFFFFFCD0 : word32)
  Class: Eq_402
  DataType: 
  OrigDataType: 
T_405: (in 0x00403088 : ptr32)
  Class: Eq_405
  DataType: 
  OrigDataType: 
T_406: (in Mem83[0x00403088:word32] : word32)
  Class: Eq_406
  DataType: 
  OrigDataType: 
T_407: (in 0x00000000 : word32)
  Class: Eq_406
  DataType: 
  OrigDataType: 
T_408: (in Mem83[0x00403088:word32] != 0x00000000 : bool)
  Class: Eq_408
  DataType: 
  OrigDataType: 
T_409: (in esp_116 : word32)
  Class: Eq_409
  DataType: 
  OrigDataType: 
T_410: (in 0x00000004 : word32)
  Class: Eq_410
  DataType: 
  OrigDataType: 
T_411: (in esp_115 - 0x00000004 : word32)
  Class: Eq_409
  DataType: 
  OrigDataType: 
T_412: (in 0xC0000409 : word32)
  Class: Eq_412
  DataType: 
  OrigDataType: 
T_413: (in 0x00000000 : word32)
  Class: Eq_413
  DataType: 
  OrigDataType: 
T_414: (in esp_116 + 0x00000000 : word32)
  Class: Eq_414
  DataType: 
  OrigDataType: 
T_415: (in Mem117[esp_116 + 0x00000000:word32] : word32)
  Class: Eq_412
  DataType: 
  OrigDataType: 
T_416: (in GetCurrentProcess : ptr32)
  Class: Eq_416
  DataType: 
  OrigDataType: 
T_417: (in signature of GetCurrentProcess : void)
  Class: Eq_416
  DataType: 
  OrigDataType: 
T_418: (in GetCurrentProcess() : word32)
  Class: Eq_418
  DataType: 
  OrigDataType: 
T_419: (in 0x00000004 : word32)
  Class: Eq_419
  DataType: 
  OrigDataType: 
T_420: (in esp_116 - 0x00000004 : word32)
  Class: Eq_420
  DataType: 
  OrigDataType: 
T_421: (in Mem120[esp_116 - 0x00000004:word32] : word32)
  Class: Eq_418
  DataType: 
  OrigDataType: 
T_422: (in TerminateProcess : ptr32)
  Class: Eq_422
  DataType: 
  OrigDataType: 
T_423: (in signature of TerminateProcess : void)
  Class: Eq_422
  DataType: 
  OrigDataType: 
T_424: (in hProcess : HANDLE)
  Class: Eq_424
  DataType: 
  OrigDataType: 
T_425: (in uExitCode : UINT)
  Class: Eq_425
  DataType: 
  OrigDataType: 
T_426: (in esp_116 - 0x00000004 : word32)
  Class: Eq_426
  DataType: 
  OrigDataType: 
T_427: (in Mem120[esp_116 - 0x00000004:HANDLE] : HANDLE)
  Class: Eq_424
  DataType: 
  OrigDataType: 
T_428: (in 0x00000000 : word32)
  Class: Eq_428
  DataType: 
  OrigDataType: 
T_429: (in esp_116 + 0x00000000 : word32)
  Class: Eq_429
  DataType: 
  OrigDataType: 
T_430: (in Mem120[esp_116 + 0x00000000:UINT] : UINT)
  Class: Eq_425
  DataType: 
  OrigDataType: 
T_431: (in TerminateProcess(Mem120[esp_116 - 0x00000004:HANDLE], Mem120[esp_116 + 0x00000000:UINT]) : word32)
  Class: Eq_431
  DataType: 
  OrigDataType: 
T_432: (in 0x00000001 : word32)
  Class: Eq_432
  DataType: 
  OrigDataType: 
T_433: (in 0xFFFFFCCC : word32)
  Class: Eq_433
  DataType: 
  OrigDataType: 
T_434: (in fp + 0xFFFFFCCC : word32)
  Class: Eq_434
  DataType: 
  OrigDataType: 
T_435: (in Mem126[fp + 0xFFFFFCCC:word32] : word32)
  Class: Eq_432
  DataType: 
  OrigDataType: 
T_436: (in _crt_debugger_hook : ptr32)
  Class: Eq_436
  DataType: 
  OrigDataType: 
T_437: (in signature of _crt_debugger_hook : void)
  Class: Eq_436
  DataType: 
  OrigDataType: 
T_438: (in 0xFFFFFCCC : word32)
  Class: Eq_438
  DataType: 
  OrigDataType: 
T_439: (in fp + 0xFFFFFCCC : word32)
  Class: Eq_402
  DataType: 
  OrigDataType: 
T_440: (in fn00401968 : ptr32)
  Class: Eq_440
  DataType: 
  OrigDataType: 
T_441: (in signature of fn00401968 : void)
  Class: Eq_440
  DataType: 
  OrigDataType: 
T_442: (in fn00401968() : void)
  Class: Eq_442
  DataType: 
  OrigDataType: 
T_443: (in ebp_11 : word32)
  Class: Eq_443
  DataType: 
  OrigDataType: 
T_444: (in fn004018BC : ptr32)
  Class: Eq_444
  DataType: 
  OrigDataType: 
T_445: (in signature of fn004018BC : void)
  Class: Eq_444
  DataType: 
  OrigDataType: 
T_446: (in ebx : word32)
  Class: Eq_446
  DataType: 
  OrigDataType: 
T_447: (in esi : word32)
  Class: Eq_447
  DataType: 
  OrigDataType: 
T_448: (in edi : word32)
  Class: Eq_448
  DataType: 
  OrigDataType: 
T_449: (in fs : selector)
  Class: Eq_142
  DataType: 
  OrigDataType: 
T_450: (in dwArg00 : word32)
  Class: Eq_450
  DataType: 
  OrigDataType: 
T_451: (in dwArg04 : word32)
  Class: Eq_451
  DataType: 
  OrigDataType: 
T_452: (in dwArg08 : word32)
  Class: Eq_452
  DataType: 
  OrigDataType: 
T_453: (in ebx : word32)
  Class: Eq_446
  DataType: 
  OrigDataType: 
T_454: (in esi : word32)
  Class: Eq_447
  DataType: 
  OrigDataType: 
T_455: (in edi : word32)
  Class: Eq_448
  DataType: 
  OrigDataType: 
T_456: (in fs : selector)
  Class: Eq_142
  DataType: 
  OrigDataType: 
T_457: (in dwLoc0C : word32)
  Class: Eq_450
  DataType: 
  OrigDataType: 
T_458: (in 0x004021D8 : word32)
  Class: Eq_451
  DataType: 
  OrigDataType: 
T_459: (in 0x00000010 : word32)
  Class: Eq_452
  DataType: 
  OrigDataType: 
T_460: (in fn004018BC(ebx, esi, edi, fs, dwLoc0C, 0x004021D8, 0x00000010) : word32)
  Class: Eq_443
  DataType: 
  OrigDataType: 
T_461: (in 0x00000000 : word32)
  Class: Eq_461
  DataType: 
  OrigDataType: 
T_462: (in 0x00000004 : word32)
  Class: Eq_462
  DataType: 
  OrigDataType: 
T_463: (in ebp_11 - 0x00000004 : word32)
  Class: Eq_463
  DataType: 
  OrigDataType: 
T_464: (in Mem15[ebp_11 - 0x00000004:word32] : word32)
  Class: Eq_461
  DataType: 
  OrigDataType: 
T_465: (in esi_17 : word32)
  Class: Eq_465
  DataType: 
  OrigDataType: 
T_466: (in 0x00000018 : word32)
  Class: Eq_466
  DataType: 
  OrigDataType: 
T_467: (in Mem15[fs:0x00000018:word32] : word32)
  Class: Eq_467
  DataType: 
  OrigDataType: 
T_468: (in 0x00000004 : word32)
  Class: Eq_468
  DataType: 
  OrigDataType: 
T_469: (in Mem15[fs:0x00000018:word32] + 0x00000004 : word32)
  Class: Eq_469
  DataType: 
  OrigDataType: 
T_470: (in Mem15[Mem15[fs:0x00000018:word32] + 0x00000004:word32] : word32)
  Class: Eq_465
  DataType: 
  OrigDataType: 
T_471: (in 0x00000000 : word32)
  Class: Eq_471
  DataType: 
  OrigDataType: 
T_472: (in 0x0000001C : word32)
  Class: Eq_472
  DataType: 
  OrigDataType: 
T_473: (in ebp_11 - 0x0000001C : word32)
  Class: Eq_473
  DataType: 
  OrigDataType: 
T_474: (in Mem18[ebp_11 - 0x0000001C:word32] : word32)
  Class: Eq_471
  DataType: 
  OrigDataType: 
T_475: (in esp_20 : word32)
  Class: Eq_475
  DataType: 
  OrigDataType: 
T_476: (in fp : ptr32)
  Class: Eq_476
  DataType: 
  OrigDataType: 
T_477: (in 0x00000008 : word32)
  Class: Eq_477
  DataType: 
  OrigDataType: 
T_478: (in fp - 0x00000008 : word32)
  Class: Eq_475
  DataType: 
  OrigDataType: 
T_479: (in 0x00000001 : word32)
  Class: Eq_479
  DataType: 
  OrigDataType: 
T_480: (in esi_235 : word32)
  Class: Eq_479
  DataType: 
  OrigDataType: 
T_481: (in eax_27 : word32)
  Class: Eq_465
  DataType: 
  OrigDataType: 
T_482: (in eax_27 != esi_17 : bool)
  Class: Eq_482
  DataType: 
  OrigDataType: 
T_483: (in 0x000003E8 : word32)
  Class: Eq_483
  DataType: 
  OrigDataType: 
T_484: (in esp_21 : word32)
  Class: Eq_484
  DataType: 
  OrigDataType: 
T_485: (in 0x00000000 : word32)
  Class: Eq_485
  DataType: 
  OrigDataType: 
T_486: (in esp_21 + 0x00000000 : word32)
  Class: Eq_486
  DataType: 
  OrigDataType: 
T_487: (in Mem239[esp_21 + 0x00000000:word32] : word32)
  Class: Eq_483
  DataType: 
  OrigDataType: 
T_488: (in Sleep : ptr32)
  Class: Eq_488
  DataType: 
  OrigDataType: 
T_489: (in signature of Sleep : void)
  Class: Eq_488
  DataType: 
  OrigDataType: 
T_490: (in dwMilliseconds : DWORD)
  Class: Eq_490
  DataType: 
  OrigDataType: 
T_491: (in 0x00000000 : word32)
  Class: Eq_491
  DataType: 
  OrigDataType: 
T_492: (in esp_21 + 0x00000000 : word32)
  Class: Eq_492
  DataType: 
  OrigDataType: 
T_493: (in Mem239[esp_21 + 0x00000000:DWORD] : DWORD)
  Class: Eq_490
  DataType: 
  OrigDataType: 
T_494: (in Sleep(Mem239[esp_21 + 0x00000000:DWORD]) : void)
  Class: Eq_494
  DataType: 
  OrigDataType: 
T_495: (in 0x00000004 : word32)
  Class: Eq_495
  DataType: 
  OrigDataType: 
T_496: (in esp_21 + 0x00000004 : word32)
  Class: Eq_475
  DataType: 
  OrigDataType: 
T_497: (in 0x00000001 : word32)
  Class: Eq_497
  DataType: 
  OrigDataType: 
T_498: (in 0x0000001C : word32)
  Class: Eq_498
  DataType: 
  OrigDataType: 
T_499: (in ebp_11 - 0x0000001C : word32)
  Class: Eq_499
  DataType: 
  OrigDataType: 
T_500: (in Mem237[ebp_11 - 0x0000001C:word32] : word32)
  Class: Eq_497
  DataType: 
  OrigDataType: 
T_501: (in 0x00000001 : word32)
  Class: Eq_479
  DataType: 
  OrigDataType: 
T_502: (in 0x00403370 : ptr32)
  Class: Eq_502
  DataType: 
  OrigDataType: 
T_503: (in Mem26[0x00403370:word32] : word32)
  Class: Eq_479
  DataType: 
  OrigDataType: 
T_504: (in Mem26[0x00403370:word32] != esi_235 : bool)
  Class: Eq_504
  DataType: 
  OrigDataType: 
T_505: (in eax_210 : word32)
  Class: Eq_505
  DataType: 
  OrigDataType: 
T_506: (in 0x00403370 : ptr32)
  Class: Eq_506
  DataType: 
  OrigDataType: 
T_507: (in Mem26[0x00403370:word32] : word32)
  Class: Eq_505
  DataType: 
  OrigDataType: 
T_508: (in 0x00000000 : word32)
  Class: Eq_505
  DataType: 
  OrigDataType: 
T_509: (in eax_210 != 0x00000000 : bool)
  Class: Eq_509
  DataType: 
  OrigDataType: 
T_510: (in 0x0000001F : word32)
  Class: Eq_510
  DataType: 
  OrigDataType: 
T_511: (in 0x00000000 : word32)
  Class: Eq_511
  DataType: 
  OrigDataType: 
T_512: (in esp_21 + 0x00000000 : word32)
  Class: Eq_512
  DataType: 
  OrigDataType: 
T_513: (in Mem202[esp_21 + 0x00000000:word32] : word32)
  Class: Eq_510
  DataType: 
  OrigDataType: 
T_514: (in _amsg_exit : ptr32)
  Class: Eq_514
  DataType: 
  OrigDataType: 
T_515: (in signature of _amsg_exit : void)
  Class: Eq_514
  DataType: 
  OrigDataType: 
T_516: (in esp_102 : word32)
  Class: Eq_484
  DataType: 
  OrigDataType: 
T_517: (in 0x00403370 : ptr32)
  Class: Eq_517
  DataType: 
  OrigDataType: 
T_518: (in Mem26[0x00403370:word32] : word32)
  Class: Eq_479
  DataType: 
  OrigDataType: 
T_519: (in Mem26[0x00403370:word32] != esi_235 : bool)
  Class: Eq_519
  DataType: 
  OrigDataType: 
T_520: (in 0x00000004 : word32)
  Class: Eq_520
  DataType: 
  OrigDataType: 
T_521: (in esp_20 - 0x00000004 : word32)
  Class: Eq_484
  DataType: 
  OrigDataType: 
T_522: (in 0x00000000 : word32)
  Class: Eq_522
  DataType: 
  OrigDataType: 
T_523: (in 0x00000000 : word32)
  Class: Eq_523
  DataType: 
  OrigDataType: 
T_524: (in esp_21 + 0x00000000 : word32)
  Class: Eq_524
  DataType: 
  OrigDataType: 
T_525: (in Mem22[esp_21 + 0x00000000:word32] : word32)
  Class: Eq_522
  DataType: 
  OrigDataType: 
T_526: (in 0x00000004 : word32)
  Class: Eq_526
  DataType: 
  OrigDataType: 
T_527: (in esp_21 - 0x00000004 : word32)
  Class: Eq_527
  DataType: 
  OrigDataType: 
T_528: (in Mem24[esp_21 - 0x00000004:word32] : word32)
  Class: Eq_465
  DataType: 
  OrigDataType: 
T_529: (in 0x00403374 : ptr32)
  Class: Eq_529
  DataType: 
  OrigDataType: 
T_530: (in 0x00000008 : word32)
  Class: Eq_530
  DataType: 
  OrigDataType: 
T_531: (in esp_21 - 0x00000008 : word32)
  Class: Eq_531
  DataType: 
  OrigDataType: 
T_532: (in Mem26[esp_21 - 0x00000008:word32] : word32)
  Class: Eq_529
  DataType: 
  OrigDataType: 
T_533: (in InterlockedCompareExchange : ptr32)
  Class: Eq_533
  DataType: 
  OrigDataType: 
T_534: (in signature of InterlockedCompareExchange : void)
  Class: Eq_533
  DataType: 
  OrigDataType: 
T_535: (in Destination : (ptr LONG))
  Class: Eq_535
  DataType: 
  OrigDataType: 
T_536: (in Exchange : LONG)
  Class: Eq_536
  DataType: 
  OrigDataType: 
T_537: (in Comperand : LONG)
  Class: Eq_537
  DataType: 
  OrigDataType: 
T_538: (in esp_21 - 0x00000008 : word32)
  Class: Eq_538
  DataType: 
  OrigDataType: 
T_539: (in Mem26[esp_21 - 0x00000008:(ptr LONG)] : (ptr LONG))
  Class: Eq_535
  DataType: 
  OrigDataType: 
T_540: (in 4 : int32)
  Class: Eq_540
  DataType: 
  OrigDataType: 
T_541: (in esp_21 - 4 : word32)
  Class: Eq_541
  DataType: 
  OrigDataType: 
T_542: (in Mem26[esp_21 - 4:LONG] : LONG)
  Class: Eq_536
  DataType: 
  OrigDataType: 
T_543: (in 0x00000000 : word32)
  Class: Eq_543
  DataType: 
  OrigDataType: 
T_544: (in esp_21 + 0x00000000 : word32)
  Class: Eq_544
  DataType: 
  OrigDataType: 
T_545: (in Mem26[esp_21 + 0x00000000:LONG] : LONG)
  Class: Eq_537
  DataType: 
  OrigDataType: 
T_546: (in InterlockedCompareExchange(Mem26[esp_21 - 0x00000008:(ptr LONG)], Mem26[esp_21 - 4:LONG], Mem26[esp_21 + 0x00000000:LONG]) : word32)
  Class: Eq_465
  DataType: 
  OrigDataType: 
T_547: (in 0x00000004 : word32)
  Class: Eq_547
  DataType: 
  OrigDataType: 
T_548: (in esp_21 + 0x00000004 : word32)
  Class: Eq_484
  DataType: 
  OrigDataType: 
T_549: (in 0x00000000 : word32)
  Class: Eq_465
  DataType: 
  OrigDataType: 
T_550: (in eax_27 == 0x00000000 : bool)
  Class: Eq_550
  DataType: 
  OrigDataType: 
T_551: (in 0x00403034 : ptr32)
  Class: Eq_551
  DataType: 
  OrigDataType: 
T_552: (in Mem229[0x00403034:word32] : word32)
  Class: Eq_479
  DataType: 
  OrigDataType: 
T_553: (in 0x00403370 : ptr32)
  Class: Eq_553
  DataType: 
  OrigDataType: 
T_554: (in Mem214[0x00403370:word32] : word32)
  Class: Eq_479
  DataType: 
  OrigDataType: 
T_555: (in 0x004020DC : word32)
  Class: Eq_555
  DataType: 
  OrigDataType: 
T_556: (in 0x00000000 : word32)
  Class: Eq_556
  DataType: 
  OrigDataType: 
T_557: (in esp_21 + 0x00000000 : word32)
  Class: Eq_557
  DataType: 
  OrigDataType: 
T_558: (in Mem216[esp_21 + 0x00000000:word32] : word32)
  Class: Eq_555
  DataType: 
  OrigDataType: 
T_559: (in 0x004020D0 : word32)
  Class: Eq_559
  DataType: 
  OrigDataType: 
T_560: (in 0x00000004 : word32)
  Class: Eq_560
  DataType: 
  OrigDataType: 
T_561: (in esp_21 - 0x00000004 : word32)
  Class: Eq_561
  DataType: 
  OrigDataType: 
T_562: (in Mem218[esp_21 - 0x00000004:word32] : word32)
  Class: Eq_559
  DataType: 
  OrigDataType: 
T_563: (in _initterm_e : ptr32)
  Class: Eq_563
  DataType: 
  OrigDataType: 
T_564: (in signature of _initterm_e : void)
  Class: Eq_563
  DataType: 
  OrigDataType: 
T_565: (in 0x00000000 : word32)
  Class: Eq_505
  DataType: 
  OrigDataType: 
T_566: (in eax_210 == 0x00000000 : bool)
  Class: Eq_566
  DataType: 
  OrigDataType: 
T_567: (in 0xFFFFFFFE : word32)
  Class: Eq_567
  DataType: 
  OrigDataType: 
T_568: (in 0x00000004 : word32)
  Class: Eq_568
  DataType: 
  OrigDataType: 
T_569: (in ebp_11 - 0x00000004 : word32)
  Class: Eq_569
  DataType: 
  OrigDataType: 
T_570: (in Mem227[ebp_11 - 0x00000004:word32] : word32)
  Class: Eq_567
  DataType: 
  OrigDataType: 
T_571: (in fn00401901 : ptr32)
  Class: Eq_571
  DataType: 
  OrigDataType: 
T_572: (in signature of fn00401901 : void)
  Class: Eq_571
  DataType: 
  OrigDataType: 
T_573: (in ebp : word32)
  Class: Eq_443
  DataType: 
  OrigDataType: 
T_574: (in fs : selector)
  Class: Eq_142
  DataType: 
  OrigDataType: 
T_575: (in dwArg00 : word32)
  Class: Eq_575
  DataType: 
  OrigDataType: 
T_576: (in dwArg04 : word32)
  Class: Eq_576
  DataType: 
  OrigDataType: 
T_577: (in dwArg08 : word32)
  Class: Eq_577
  DataType: 
  OrigDataType: 
T_578: (in dwArg0C : word32)
  Class: Eq_578
  DataType: 
  OrigDataType: 
T_579: (in dwArg10 : word32)
  Class: Eq_579
  DataType: 
  OrigDataType: 
T_580: (in 0x00000010 : word32)
  Class: Eq_575
  DataType: 
  OrigDataType: 
T_581: (in dwArg00 : word32)
  Class: Eq_576
  DataType: 
  OrigDataType: 
T_582: (in dwArg04 : word32)
  Class: Eq_577
  DataType: 
  OrigDataType: 
T_583: (in dwArg08 : word32)
  Class: Eq_578
  DataType: 
  OrigDataType: 
T_584: (in dwArg0C : word32)
  Class: Eq_579
  DataType: 
  OrigDataType: 
T_585: (in fn00401901(ebp_11, fs, 0x00000010, dwArg00, dwArg04, dwArg08, dwArg0C) : void)
  Class: Eq_585
  DataType: 
  OrigDataType: 
T_586: (in 0x0000001C : word32)
  Class: Eq_586
  DataType: 
  OrigDataType: 
T_587: (in ebp_11 - 0x0000001C : word32)
  Class: Eq_587
  DataType: 
  OrigDataType: 
T_588: (in Mem26[ebp_11 - 0x0000001C:word32] : word32)
  Class: Eq_588
  DataType: 
  OrigDataType: 
T_589: (in 0x00000000 : word32)
  Class: Eq_588
  DataType: 
  OrigDataType: 
T_590: (in Mem26[ebp_11 - 0x0000001C:word32] != 0x00000000 : bool)
  Class: Eq_590
  DataType: 
  OrigDataType: 
T_591: (in esp_191 : word32)
  Class: Eq_484
  DataType: 
  OrigDataType: 
T_592: (in 0x00000004 : word32)
  Class: Eq_592
  DataType: 
  OrigDataType: 
T_593: (in esp_102 - 0x00000004 : word32)
  Class: Eq_484
  DataType: 
  OrigDataType: 
T_594: (in 0x004020CC : word32)
  Class: Eq_594
  DataType: 
  OrigDataType: 
T_595: (in 0x00000000 : word32)
  Class: Eq_595
  DataType: 
  OrigDataType: 
T_596: (in esp_191 + 0x00000000 : word32)
  Class: Eq_596
  DataType: 
  OrigDataType: 
T_597: (in Mem192[esp_191 + 0x00000000:word32] : word32)
  Class: Eq_594
  DataType: 
  OrigDataType: 
T_598: (in 0x004020C4 : word32)
  Class: Eq_598
  DataType: 
  OrigDataType: 
T_599: (in 0x00000004 : word32)
  Class: Eq_599
  DataType: 
  OrigDataType: 
T_600: (in esp_191 - 0x00000004 : word32)
  Class: Eq_600
  DataType: 
  OrigDataType: 
T_601: (in Mem194[esp_191 - 0x00000004:word32] : word32)
  Class: Eq_598
  DataType: 
  OrigDataType: 
T_602: (in _initterm : ptr32)
  Class: Eq_602
  DataType: 
  OrigDataType: 
T_603: (in signature of _initterm : void)
  Class: Eq_602
  DataType: 
  OrigDataType: 
T_604: (in 0x00000002 : word32)
  Class: Eq_604
  DataType: 
  OrigDataType: 
T_605: (in 0x00403370 : ptr32)
  Class: Eq_605
  DataType: 
  OrigDataType: 
T_606: (in Mem200[0x00403370:word32] : word32)
  Class: Eq_604
  DataType: 
  OrigDataType: 
T_607: (in 0x00403380 : ptr32)
  Class: Eq_607
  DataType: 
  OrigDataType: 
T_608: (in Mem26[0x00403380:word32] : word32)
  Class: Eq_608
  DataType: 
  OrigDataType: 
T_609: (in 0x00000000 : word32)
  Class: Eq_608
  DataType: 
  OrigDataType: 
T_610: (in Mem26[0x00403380:word32] == 0x00000000 : bool)
  Class: Eq_610
  DataType: 
  OrigDataType: 
T_611: (in esp_185 : word32)
  Class: Eq_611
  DataType: 
  OrigDataType: 
T_612: (in 0x00000004 : word32)
  Class: Eq_612
  DataType: 
  OrigDataType: 
T_613: (in esp_102 - 0x00000004 : word32)
  Class: Eq_611
  DataType: 
  OrigDataType: 
T_614: (in 0x00000000 : word32)
  Class: Eq_614
  DataType: 
  OrigDataType: 
T_615: (in 0x00000000 : word32)
  Class: Eq_615
  DataType: 
  OrigDataType: 
T_616: (in esp_185 + 0x00000000 : word32)
  Class: Eq_616
  DataType: 
  OrigDataType: 
T_617: (in Mem186[esp_185 + 0x00000000:word32] : word32)
  Class: Eq_614
  DataType: 
  OrigDataType: 
T_618: (in 0x00403374 : ptr32)
  Class: Eq_618
  DataType: 
  OrigDataType: 
T_619: (in 0x00000004 : word32)
  Class: Eq_619
  DataType: 
  OrigDataType: 
T_620: (in esp_185 - 0x00000004 : word32)
  Class: Eq_620
  DataType: 
  OrigDataType: 
T_621: (in Mem188[esp_185 - 0x00000004:word32] : word32)
  Class: Eq_618
  DataType: 
  OrigDataType: 
T_622: (in InterlockedExchange : ptr32)
  Class: Eq_622
  DataType: 
  OrigDataType: 
T_623: (in signature of InterlockedExchange : void)
  Class: Eq_622
  DataType: 
  OrigDataType: 
T_624: (in Target : (ptr LONG))
  Class: Eq_624
  DataType: 
  OrigDataType: 
T_625: (in Value : LONG)
  Class: Eq_625
  DataType: 
  OrigDataType: 
T_626: (in esp_185 - 0x00000004 : word32)
  Class: Eq_626
  DataType: 
  OrigDataType: 
T_627: (in Mem188[esp_185 - 0x00000004:(ptr LONG)] : (ptr LONG))
  Class: Eq_624
  DataType: 
  OrigDataType: 
T_628: (in 0x00000000 : word32)
  Class: Eq_628
  DataType: 
  OrigDataType: 
T_629: (in esp_185 + 0x00000000 : word32)
  Class: Eq_629
  DataType: 
  OrigDataType: 
T_630: (in Mem188[esp_185 + 0x00000000:LONG] : LONG)
  Class: Eq_625
  DataType: 
  OrigDataType: 
T_631: (in InterlockedExchange(Mem188[esp_185 - 0x00000004:(ptr LONG)], Mem188[esp_185 + 0x00000000:LONG]) : word32)
  Class: Eq_631
  DataType: 
  OrigDataType: 
T_632: (in 0x00000004 : word32)
  Class: Eq_632
  DataType: 
  OrigDataType: 
T_633: (in esp_185 + 0x00000004 : word32)
  Class: Eq_484
  DataType: 
  OrigDataType: 
T_634: (in 0x0040301C : ptr32)
  Class: Eq_634
  DataType: 
  OrigDataType: 
T_635: (in Mem26[0x0040301C:word32] : word32)
  Class: Eq_635
  DataType: 
  OrigDataType: 
T_636: (in __initenv : ptr32)
  Class: Eq_636
  DataType: 
  OrigDataType: 
T_637: (in signature of __initenv : void)
  Class: Eq_636
  DataType: 
  OrigDataType: 
T_638: (in Mem121[__initenv:word32] : word32)
  Class: Eq_635
  DataType: 
  OrigDataType: 
T_639: (in esp_122 : word32)
  Class: Eq_639
  DataType: 
  OrigDataType: 
T_640: (in 0x00000004 : word32)
  Class: Eq_640
  DataType: 
  OrigDataType: 
T_641: (in esp_102 - 0x00000004 : word32)
  Class: Eq_639
  DataType: 
  OrigDataType: 
T_642: (in 0x0040301C : ptr32)
  Class: Eq_642
  DataType: 
  OrigDataType: 
T_643: (in Mem121[0x0040301C:word32] : word32)
  Class: Eq_643
  DataType: 
  OrigDataType: 
T_644: (in 0x00000000 : word32)
  Class: Eq_644
  DataType: 
  OrigDataType: 
T_645: (in esp_122 + 0x00000000 : word32)
  Class: Eq_645
  DataType: 
  OrigDataType: 
T_646: (in Mem123[esp_122 + 0x00000000:word32] : word32)
  Class: Eq_643
  DataType: 
  OrigDataType: 
T_647: (in 0x00403020 : ptr32)
  Class: Eq_647
  DataType: 
  OrigDataType: 
T_648: (in Mem123[0x00403020:word32] : word32)
  Class: Eq_648
  DataType: 
  OrigDataType: 
T_649: (in 0x00000004 : word32)
  Class: Eq_649
  DataType: 
  OrigDataType: 
T_650: (in esp_122 - 0x00000004 : word32)
  Class: Eq_650
  DataType: 
  OrigDataType: 
T_651: (in Mem125[esp_122 - 0x00000004:word32] : word32)
  Class: Eq_648
  DataType: 
  OrigDataType: 
T_652: (in 0x00403018 : ptr32)
  Class: Eq_652
  DataType: 
  OrigDataType: 
T_653: (in Mem125[0x00403018:word32] : word32)
  Class: Eq_653
  DataType: 
  OrigDataType: 
T_654: (in 0x00000008 : word32)
  Class: Eq_654
  DataType: 
  OrigDataType: 
T_655: (in esp_122 - 0x00000008 : word32)
  Class: Eq_655
  DataType: 
  OrigDataType: 
T_656: (in Mem127[esp_122 - 0x00000008:word32] : word32)
  Class: Eq_653
  DataType: 
  OrigDataType: 
T_657: (in ebx_128 : word32)
  Class: Eq_657
  DataType: 
  OrigDataType: 
T_658: (in eax_130 : word32)
  Class: Eq_658
  DataType: 
  OrigDataType: 
T_659: (in fn00401200 : ptr32)
  Class: Eq_659
  DataType: 
  OrigDataType: 
T_660: (in signature of fn00401200 : void)
  Class: Eq_659
  DataType: 
  OrigDataType: 
T_661: (in dwArg04 : word32)
  Class: Eq_576
  DataType: 
  OrigDataType: 
T_662: (in edx : word32)
  Class: Eq_135
  DataType: 
  OrigDataType: 
T_663: (in es : selector)
  Class: Eq_140
  DataType: 
  OrigDataType: 
T_664: (in ds : selector)
  Class: Eq_141
  DataType: 
  OrigDataType: 
T_665: (in gs : selector)
  Class: Eq_143
  DataType: 
  OrigDataType: 
T_666: (in out ebx_128 : ptr32)
  Class: Eq_291
  DataType: 
  OrigDataType: 
T_667: (in out ebp_11 : ptr32)
  Class: Eq_297
  DataType: 
  OrigDataType: 
T_668: (in fn00401200(edx, es, ds, fs, gs, dwArg00, out ebx_128, out ebp_11) : word32)
  Class: Eq_658
  DataType: 
  OrigDataType: 
T_669: (in 0x00403030 : ptr32)
  Class: Eq_669
  DataType: 
  OrigDataType: 
T_670: (in Mem132[0x00403030:word32] : word32)
  Class: Eq_658
  DataType: 
  OrigDataType: 
T_671: (in 0x00403024 : ptr32)
  Class: Eq_671
  DataType: 
  OrigDataType: 
T_672: (in Mem132[0x00403024:word32] : word32)
  Class: Eq_657
  DataType: 
  OrigDataType: 
T_673: (in Mem132[0x00403024:word32] != ebx_128 : bool)
  Class: Eq_673
  DataType: 
  OrigDataType: 
T_674: (in esp_170 : word32)
  Class: Eq_674
  DataType: 
  OrigDataType: 
T_675: (in 0x00000004 : word32)
  Class: Eq_675
  DataType: 
  OrigDataType: 
T_676: (in esp_102 - 0x00000004 : word32)
  Class: Eq_674
  DataType: 
  OrigDataType: 
T_677: (in 0x00403380 : word32)
  Class: Eq_677
  DataType: 
  OrigDataType: 
T_678: (in 0x00000000 : word32)
  Class: Eq_678
  DataType: 
  OrigDataType: 
T_679: (in esp_170 + 0x00000000 : word32)
  Class: Eq_679
  DataType: 
  OrigDataType: 
T_680: (in Mem171[esp_170 + 0x00000000:word32] : word32)
  Class: Eq_677
  DataType: 
  OrigDataType: 
T_681: (in eax_173 : word32)
  Class: Eq_681
  DataType: 
  OrigDataType: 
T_682: (in fn004017F0 : ptr32)
  Class: Eq_682
  DataType: 
  OrigDataType: 
T_683: (in signature of fn004017F0 : void)
  Class: Eq_682
  DataType: 
  OrigDataType: 
T_684: (in fs : selector)
  Class: Eq_142
  DataType: 
  OrigDataType: 
T_685: (in dwArg04 : word32)
  Class: Eq_576
  DataType: 
  OrigDataType: 
T_686: (in edxOut : ptr32)
  Class: Eq_686
  DataType: 
  OrigDataType: 
T_687: (in out edx : ptr32)
  Class: Eq_686
  DataType: 
  OrigDataType: 
T_688: (in fn004017F0(fs, dwArg00, out edx) : word32)
  Class: Eq_681
  DataType: 
  OrigDataType: 
T_689: (in 0x00000004 : word32)
  Class: Eq_689
  DataType: 
  OrigDataType: 
T_690: (in esp_170 + 0x00000004 : word32)
  Class: Eq_484
  DataType: 
  OrigDataType: 
T_691: (in 0x00000000 : word32)
  Class: Eq_681
  DataType: 
  OrigDataType: 
T_692: (in eax_173 == 0x00000000 : bool)
  Class: Eq_692
  DataType: 
  OrigDataType: 
T_693: (in 0x00000000 : word32)
  Class: Eq_693
  DataType: 
  OrigDataType: 
T_694: (in 0x00000000 : word32)
  Class: Eq_694
  DataType: 
  OrigDataType: 
T_695: (in esp_170 + 0x00000000 : word32)
  Class: Eq_695
  DataType: 
  OrigDataType: 
T_696: (in Mem180[esp_170 + 0x00000000:word32] : word32)
  Class: Eq_693
  DataType: 
  OrigDataType: 
T_697: (in 0x00000002 : word32)
  Class: Eq_697
  DataType: 
  OrigDataType: 
T_698: (in 0x00000004 : word32)
  Class: Eq_698
  DataType: 
  OrigDataType: 
T_699: (in esp_170 - 0x00000004 : word32)
  Class: Eq_699
  DataType: 
  OrigDataType: 
T_700: (in Mem182[esp_170 - 0x00000004:word32] : word32)
  Class: Eq_697
  DataType: 
  OrigDataType: 
T_701: (in 0x00000000 : word32)
  Class: Eq_701
  DataType: 
  OrigDataType: 
T_702: (in 0x00000008 : word32)
  Class: Eq_702
  DataType: 
  OrigDataType: 
T_703: (in esp_170 - 0x00000008 : word32)
  Class: Eq_703
  DataType: 
  OrigDataType: 
T_704: (in Mem184[esp_170 - 0x00000008:word32] : word32)
  Class: Eq_701
  DataType: 
  OrigDataType: 
T_705: (in esp_170 - 0x00000008 : word32)
  Class: Eq_484
  DataType: 
  OrigDataType: 
T_706: (in 0x00403380 : ptr32)
  Class: Eq_706
  DataType: 
  OrigDataType: 
T_707: (in Mem184[0x00403380:word32] : word32)
  Class: Eq_707
  DataType: 
  OrigDataType: 
T_708: (in 0x00403034 : ptr32)
  Class: Eq_708
  DataType: 
  OrigDataType: 
T_709: (in Mem132[0x00403034:word32] : word32)
  Class: Eq_657
  DataType: 
  OrigDataType: 
T_710: (in Mem132[0x00403034:word32] != ebx_128 : bool)
  Class: Eq_710
  DataType: 
  OrigDataType: 
T_711: (in 0x00000000 : word32)
  Class: Eq_711
  DataType: 
  OrigDataType: 
T_712: (in esp_122 + 0x00000000 : word32)
  Class: Eq_712
  DataType: 
  OrigDataType: 
T_713: (in Mem136[esp_122 + 0x00000000:word32] : word32)
  Class: Eq_658
  DataType: 
  OrigDataType: 
T_714: (in exit : ptr32)
  Class: Eq_714
  DataType: 
  OrigDataType: 
T_715: (in signature of exit : void)
  Class: Eq_714
  DataType: 
  OrigDataType: 
T_716: (in _Code : int32)
  Class: Eq_716
  DataType: 
  OrigDataType: 
T_717: (in 0x00000000 : word32)
  Class: Eq_717
  DataType: 
  OrigDataType: 
T_718: (in esp_122 + 0x00000000 : word32)
  Class: Eq_718
  DataType: 
  OrigDataType: 
T_719: (in Mem136[esp_122 + 0x00000000:int32] : int32)
  Class: Eq_716
  DataType: 
  OrigDataType: 
T_720: (in exit(Mem136[esp_122 + 0x00000000:int32]) : void)
  Class: Eq_720
  DataType: 
  OrigDataType: 
T_721: (in eax_137 : word32)
  Class: Eq_721
  DataType: 
  OrigDataType: 
T_722: (in 0x00000014 : word32)
  Class: Eq_722
  DataType: 
  OrigDataType: 
T_723: (in ebp_11 - 0x00000014 : word32)
  Class: Eq_723
  DataType: 
  OrigDataType: 
T_724: (in Mem136[ebp_11 - 0x00000014:word32] : word32)
  Class: Eq_721
  DataType: 
  OrigDataType: 
T_725: (in ecx_139 : word32)
  Class: Eq_725
  DataType: 
  OrigDataType: 
T_726: (in 0x00000000 : word32)
  Class: Eq_726
  DataType: 
  OrigDataType: 
T_727: (in eax_137 + 0x00000000 : word32)
  Class: Eq_727
  DataType: 
  OrigDataType: 
T_728: (in Mem136[eax_137 + 0x00000000:word32] : word32)
  Class: Eq_728
  DataType: 
  OrigDataType: 
T_729: (in Mem136[Mem136[eax_137 + 0x00000000:word32]:word32] : word32)
  Class: Eq_725
  DataType: 
  OrigDataType: 
T_730: (in 0x00000020 : word32)
  Class: Eq_730
  DataType: 
  OrigDataType: 
T_731: (in ebp_11 - 0x00000020 : word32)
  Class: Eq_731
  DataType: 
  OrigDataType: 
T_732: (in Mem140[ebp_11 - 0x00000020:word32] : word32)
  Class: Eq_725
  DataType: 
  OrigDataType: 
T_733: (in 0x00000004 : word32)
  Class: Eq_733
  DataType: 
  OrigDataType: 
T_734: (in esp_122 - 0x00000004 : word32)
  Class: Eq_734
  DataType: 
  OrigDataType: 
T_735: (in Mem142[esp_122 - 0x00000004:word32] : word32)
  Class: Eq_721
  DataType: 
  OrigDataType: 
T_736: (in 0x00000008 : word32)
  Class: Eq_736
  DataType: 
  OrigDataType: 
T_737: (in esp_122 - 0x00000008 : word32)
  Class: Eq_737
  DataType: 
  OrigDataType: 
T_738: (in Mem144[esp_122 - 0x00000008:word32] : word32)
  Class: Eq_725
  DataType: 
  OrigDataType: 
T_739: (in _XcptFilter : ptr32)
  Class: Eq_739
  DataType: 
  OrigDataType: 
T_740: (in signature of _XcptFilter : void)
  Class: Eq_739
  DataType: 
  OrigDataType: 
T_741: (in 0xFFFFFFFE : word32)
  Class: Eq_741
  DataType: 
  OrigDataType: 
T_742: (in 0x00000004 : word32)
  Class: Eq_742
  DataType: 
  OrigDataType: 
T_743: (in ebp_11 - 0x00000004 : word32)
  Class: Eq_743
  DataType: 
  OrigDataType: 
T_744: (in Mem167[ebp_11 - 0x00000004:word32] : word32)
  Class: Eq_741
  DataType: 
  OrigDataType: 
T_745: (in _cexit : ptr32)
  Class: Eq_745
  DataType: 
  OrigDataType: 
T_746: (in signature of _cexit : void)
  Class: Eq_745
  DataType: 
  OrigDataType: 
T_747: (in eax : word32)
  Class: Eq_747
  DataType: 
  OrigDataType: 
T_748: (in edx : word32)
  Class: Eq_748
  DataType: 
  OrigDataType: 
T_749: (in edxOut : ptr32)
  Class: Eq_749
  DataType: 
  OrigDataType: 
T_750: (in *edxOut : word32)
  Class: Eq_748
  DataType: 
  OrigDataType: 
T_751: (in dwArg04 : word32)
  Class: Eq_751
  DataType: 
  OrigDataType: 
T_752: (in 0x00000000 : word32)
  Class: Eq_752
  DataType: 
  OrigDataType: 
T_753: (in dwArg04 + 0x00000000 : word32)
  Class: Eq_753
  DataType: 
  OrigDataType: 
T_754: (in Mem0[dwArg04 + 0x00000000:word16] : word16)
  Class: Eq_754
  DataType: 
  OrigDataType: 
T_755: (in 0x5A4D : word16)
  Class: Eq_754
  DataType: 
  OrigDataType: 
T_756: (in Mem0[dwArg04 + 0x00000000:word16] == 0x5A4D : bool)
  Class: Eq_756
  DataType: 
  OrigDataType: 
T_757: (in eax_40 : word32)
  Class: Eq_757
  DataType: 
  OrigDataType: 
T_758: (in 0x0000003C : word32)
  Class: Eq_758
  DataType: 
  OrigDataType: 
T_759: (in dwArg04 + 0x0000003C : word32)
  Class: Eq_759
  DataType: 
  OrigDataType: 
T_760: (in Mem0[dwArg04 + 0x0000003C:word32] : word32)
  Class: Eq_760
  DataType: 
  OrigDataType: 
T_761: (in Mem0[dwArg04 + 0x0000003C:word32] + dwArg04 : word32)
  Class: Eq_757
  DataType: 
  OrigDataType: 
T_762: (in 0x00000000 : word32)
  Class: Eq_762
  DataType: 
  OrigDataType: 
T_763: (in eax_40 + 0x00000000 : word32)
  Class: Eq_763
  DataType: 
  OrigDataType: 
T_764: (in Mem0[eax_40 + 0x00000000:word32] : word32)
  Class: Eq_764
  DataType: 
  OrigDataType: 
T_765: (in 0x00004550 : word32)
  Class: Eq_764
  DataType: 
  OrigDataType: 
T_766: (in Mem0[eax_40 + 0x00000000:word32] != 0x00004550 : bool)
  Class: Eq_766
  DataType: 
  OrigDataType: 
T_767: (in 0x00000000 : word32)
  Class: Eq_767
  DataType: 
  OrigDataType: 
T_768: (in edx_50 : word32)
  Class: Eq_768
  DataType: 
  OrigDataType: 
T_769: (in 0x00000018 : word32)
  Class: Eq_769
  DataType: 
  OrigDataType: 
T_770: (in eax_40 + 0x00000018 : word32)
  Class: Eq_770
  DataType: 
  OrigDataType: 
T_771: (in Mem0[eax_40 + 0x00000018:word16] : word16)
  Class: Eq_771
  DataType: 
  OrigDataType: 
T_772: (in 0x010B : word16)
  Class: Eq_771
  DataType: 
  OrigDataType: 
T_773: (in Mem0[eax_40 + 0x00000018:word16] == 0x010B : bool)
  Class: Eq_773
  DataType: 
  OrigDataType: 
T_774: (in (word32) (Mem0[eax_40 + 0x00000018:word16] == 0x010B) : word32)
  Class: Eq_768
  DataType: 
  OrigDataType: 
T_775: (in *edxOut : word32)
  Class: Eq_768
  DataType: 
  OrigDataType: 
T_776: (in eax : word32)
  Class: Eq_776
  DataType: 
  OrigDataType: 
T_777: (in ecx_12 : word32)
  Class: Eq_777
  DataType: 
  OrigDataType: 
T_778: (in dwArg04 : word32)
  Class: Eq_778
  DataType: 
  OrigDataType: 
T_779: (in 0x0000003C : word32)
  Class: Eq_779
  DataType: 
  OrigDataType: 
T_780: (in dwArg04 + 0x0000003C : word32)
  Class: Eq_780
  DataType: 
  OrigDataType: 
T_781: (in Mem0[dwArg04 + 0x0000003C:word32] : word32)
  Class: Eq_781
  DataType: 
  OrigDataType: 
T_782: (in Mem0[dwArg04 + 0x0000003C:word32] + dwArg04 : word32)
  Class: Eq_777
  DataType: 
  OrigDataType: 
T_783: (in esi_20 : word32)
  Class: Eq_783
  DataType: 
  OrigDataType: 
T_784: (in 0x00000006 : word32)
  Class: Eq_784
  DataType: 
  OrigDataType: 
T_785: (in ecx_12 + 0x00000006 : word32)
  Class: Eq_785
  DataType: 
  OrigDataType: 
T_786: (in Mem0[ecx_12 + 0x00000006:word16] : word16)
  Class: Eq_786
  DataType: 
  OrigDataType: 
T_787: (in (word32) Mem0[ecx_12 + 0x00000006:word16] : word32)
  Class: Eq_783
  DataType: 
  OrigDataType: 
T_788: (in edx_21 : word32)
  Class: Eq_783
  DataType: 
  OrigDataType: 
T_789: (in 0x00000000 : word32)
  Class: Eq_789
  DataType: 
  OrigDataType: 
T_790: (in edxOut : ptr32)
  Class: Eq_790
  DataType: 
  OrigDataType: 
T_791: (in *edxOut : word32)
  Class: Eq_789
  DataType: 
  OrigDataType: 
T_792: (in eax_24 : word32)
  Class: Eq_792
  DataType: 
  OrigDataType: 
T_793: (in 0x00000014 : word32)
  Class: Eq_793
  DataType: 
  OrigDataType: 
T_794: (in ecx_12 + 0x00000014 : word32)
  Class: Eq_794
  DataType: 
  OrigDataType: 
T_795: (in Mem0[ecx_12 + 0x00000014:word16] : word16)
  Class: Eq_795
  DataType: 
  OrigDataType: 
T_796: (in (word32) Mem0[ecx_12 + 0x00000014:word16] : word32)
  Class: Eq_796
  DataType: 
  OrigDataType: 
T_797: (in 0x00000018 : word32)
  Class: Eq_797
  DataType: 
  OrigDataType: 
T_798: (in (word32) Mem0[ecx_12 + 0x00000014:word16] + 0x00000018 : word32)
  Class: Eq_798
  DataType: 
  OrigDataType: 
T_799: (in (word32) Mem0[ecx_12 + 0x00000014:word16] + 0x00000018 + ecx_12 : word32)
  Class: Eq_799
  DataType: 
  OrigDataType: 
T_800: (in 0x0000000C : word32)
  Class: Eq_800
  DataType: 
  OrigDataType: 
T_801: (in (word32) Mem0[ecx_12 + 0x00000014:word16] + 0x00000018 + ecx_12 + 0x0000000C : word32)
  Class: Eq_792
  DataType: 
  OrigDataType: 
T_802: (in false : bool)
  Class: Eq_802
  DataType: 
  OrigDataType: 
T_803: (in 0x00000000 : word32)
  Class: Eq_792
  DataType: 
  OrigDataType: 
T_804: (in 0x00000001 : word32)
  Class: Eq_804
  DataType: 
  OrigDataType: 
T_805: (in edx_21 + 0x00000001 : word32)
  Class: Eq_783
  DataType: 
  OrigDataType: 
T_806: (in *edxOut : word32)
  Class: Eq_783
  DataType: 
  OrigDataType: 
T_807: (in 0x00000028 : word32)
  Class: Eq_807
  DataType: 
  OrigDataType: 
T_808: (in eax_24 + 0x00000028 : word32)
  Class: Eq_792
  DataType: 
  OrigDataType: 
T_809: (in edx_21 <u esi_20 : bool)
  Class: Eq_809
  DataType: 
  OrigDataType: 
T_810: (in dwArg08 : word32)
  Class: Eq_810
  DataType: 
  OrigDataType: 
T_811: (in 0x00000008 : word32)
  Class: Eq_811
  DataType: 
  OrigDataType: 
T_812: (in eax_24 + 0x00000008 : word32)
  Class: Eq_812
  DataType: 
  OrigDataType: 
T_813: (in Mem0[eax_24 + 0x00000008:word32] : word32)
  Class: Eq_813
  DataType: 
  OrigDataType: 
T_814: (in ecx_57 : word32)
  Class: Eq_810
  DataType: 
  OrigDataType: 
T_815: (in Mem0[eax_24 + 0x00000008:word32] + ecx_57 : word32)
  Class: Eq_810
  DataType: 
  OrigDataType: 
T_816: (in dwArg08 <u Mem0[eax_24 + 0x00000008:word32] + ecx_57 : bool)
  Class: Eq_816
  DataType: 
  OrigDataType: 
T_817: (in 0x00000000 : word32)
  Class: Eq_817
  DataType: 
  OrigDataType: 
T_818: (in eax_24 + 0x00000000 : word32)
  Class: Eq_818
  DataType: 
  OrigDataType: 
T_819: (in Mem0[eax_24 + 0x00000000:word32] : word32)
  Class: Eq_810
  DataType: 
  OrigDataType: 
T_820: (in dwArg08 <u ecx_57 : bool)
  Class: Eq_820
  DataType: 
  OrigDataType: 
T_821: (in eax : word32)
  Class: Eq_821
  DataType: 
  OrigDataType: 
T_822: (in eax_16 : word32)
  Class: Eq_822
  DataType: 
  OrigDataType: 
T_823: (in 0x00000000 : word32)
  Class: Eq_823
  DataType: 
  OrigDataType: 
T_824: (in Mem0[fs:0x00000000:word32] : word32)
  Class: Eq_822
  DataType: 
  OrigDataType: 
T_825: (in fp : ptr32)
  Class: Eq_825
  DataType: 
  OrigDataType: 
T_826: (in 0x00000014 : word32)
  Class: Eq_826
  DataType: 
  OrigDataType: 
T_827: (in fp - 0x00000014 : word32)
  Class: Eq_827
  DataType: 
  OrigDataType: 
T_828: (in 0x00000000 : word32)
  Class: Eq_828
  DataType: 
  OrigDataType: 
T_829: (in Mem38[fs:0x00000000:word32] : word32)
  Class: Eq_827
  DataType: 
  OrigDataType: 
T_830: (in edx_43 : word32)
  Class: Eq_830
  DataType: 
  OrigDataType: 
T_831: (in fn00401760 : ptr32)
  Class: Eq_831
  DataType: 
  OrigDataType: 
T_832: (in signature of fn00401760 : void)
  Class: Eq_831
  DataType: 
  OrigDataType: 
T_833: (in dwArg04 : word32)
  Class: Eq_833
  DataType: 
  OrigDataType: 
T_834: (in 0x00400000 : word32)
  Class: Eq_833
  DataType: 
  OrigDataType: 
T_835: (in out edx_43 : ptr32)
  Class: Eq_749
  DataType: 
  OrigDataType: 
T_836: (in fn00401760(0x00400000, out edx_43) : word32)
  Class: Eq_836
  DataType: 
  OrigDataType: 
T_837: (in 0x00000000 : word32)
  Class: Eq_836
  DataType: 
  OrigDataType: 
T_838: (in fn00401760(0x00400000, out edx_43) == 0x00000000 : bool)
  Class: Eq_838
  DataType: 
  OrigDataType: 
T_839: (in 0xFFFFFFFE : word32)
  Class: Eq_839
  DataType: 
  OrigDataType: 
T_840: (in 0x00000008 : word32)
  Class: Eq_840
  DataType: 
  OrigDataType: 
T_841: (in fp - 0x00000008 : word32)
  Class: Eq_841
  DataType: 
  OrigDataType: 
T_842: (in Mem69[fp - 0x00000008:word32] : word32)
  Class: Eq_839
  DataType: 
  OrigDataType: 
T_843: (in 0x00000000 : ptr32)
  Class: Eq_843
  DataType: 
  OrigDataType: 
T_844: (in Mem74[fs:0x00000000:word32] : word32)
  Class: Eq_822
  DataType: 
  OrigDataType: 
T_845: (in 0x00000000 : word32)
  Class: Eq_845
  DataType: 
  OrigDataType: 
T_846: (in dwArg04 : word32)
  Class: Eq_846
  DataType: 
  OrigDataType: 
T_847: (in 0x00400000 : ptr32)
  Class: Eq_847
  DataType: 
  OrigDataType: 
T_848: (in dwArg04 - 0x00400000 : word32)
  Class: Eq_848
  DataType: 
  OrigDataType: 
T_849: (in 0x00000030 : word32)
  Class: Eq_849
  DataType: 
  OrigDataType: 
T_850: (in fp - 0x00000030 : word32)
  Class: Eq_850
  DataType: 
  OrigDataType: 
T_851: (in Mem90[fp - 0x00000030:word32] : word32)
  Class: Eq_848
  DataType: 
  OrigDataType: 
T_852: (in edx_93 : word32)
  Class: Eq_852
  DataType: 
  OrigDataType: 
T_853: (in eax_94 : word32)
  Class: Eq_853
  DataType: 
  OrigDataType: 
T_854: (in fn004017A0 : ptr32)
  Class: Eq_854
  DataType: 
  OrigDataType: 
T_855: (in signature of fn004017A0 : void)
  Class: Eq_854
  DataType: 
  OrigDataType: 
T_856: (in dwArg04 : word32)
  Class: Eq_856
  DataType: 
  OrigDataType: 
T_857: (in dwArg08 : word32)
  Class: Eq_857
  DataType: 
  OrigDataType: 
T_858: (in 0x00400000 : word32)
  Class: Eq_856
  DataType: 
  OrigDataType: 
T_859: (in 0x00400000 : word32)
  Class: Eq_857
  DataType: 
  OrigDataType: 
T_860: (in out edx_93 : ptr32)
  Class: Eq_790
  DataType: 
  OrigDataType: 
T_861: (in fn004017A0(0x00400000, 0x00400000, out edx_93) : word32)
  Class: Eq_853
  DataType: 
  OrigDataType: 
T_862: (in 0x00000000 : word32)
  Class: Eq_853
  DataType: 
  OrigDataType: 
T_863: (in eax_94 == 0x00000000 : bool)
  Class: Eq_863
  DataType: 
  OrigDataType: 
T_864: (in eax_101 : word32)
  Class: Eq_864
  DataType: 
  OrigDataType: 
T_865: (in 0x00000024 : word32)
  Class: Eq_865
  DataType: 
  OrigDataType: 
T_866: (in eax_94 + 0x00000024 : word32)
  Class: Eq_866
  DataType: 
  OrigDataType: 
T_867: (in Mem90[eax_94 + 0x00000024:word32] : word32)
  Class: Eq_867
  DataType: 
  OrigDataType: 
T_868: (in 0x0000001F : word32)
  Class: Eq_868
  DataType: 
  OrigDataType: 
T_869: (in Mem90[eax_94 + 0x00000024:word32] >>u 0x0000001F : word32)
  Class: Eq_869
  DataType: 
  OrigDataType: 
T_870: (in ~(Mem90[eax_94 + 0x00000024:word32] >>u 0x0000001F) : word32)
  Class: Eq_864
  DataType: 
  OrigDataType: 
T_871: (in 0xFFFFFFFE : word32)
  Class: Eq_871
  DataType: 
  OrigDataType: 
T_872: (in 0x00000008 : word32)
  Class: Eq_872
  DataType: 
  OrigDataType: 
T_873: (in fp - 0x00000008 : word32)
  Class: Eq_873
  DataType: 
  OrigDataType: 
T_874: (in Mem105[fp - 0x00000008:word32] : word32)
  Class: Eq_871
  DataType: 
  OrigDataType: 
T_875: (in 0x00000000 : ptr32)
  Class: Eq_875
  DataType: 
  OrigDataType: 
T_876: (in Mem107[fs:0x00000000:word32] : word32)
  Class: Eq_822
  DataType: 
  OrigDataType: 
T_877: (in 0x00000001 : word32)
  Class: Eq_877
  DataType: 
  OrigDataType: 
T_878: (in eax_101 & 0x00000001 : word32)
  Class: Eq_878
  DataType: 
  OrigDataType: 
T_879: (in ebp : word32)
  Class: Eq_879
  DataType: 
  OrigDataType: 
T_880: (in esp_13 : word32)
  Class: Eq_880
  DataType: 
  OrigDataType: 
T_881: (in fp : ptr32)
  Class: Eq_881
  DataType: 
  OrigDataType: 
T_882: (in 0x00000008 : word32)
  Class: Eq_882
  DataType: 
  OrigDataType: 
T_883: (in fp - 0x00000008 : word32)
  Class: Eq_883
  DataType: 
  OrigDataType: 
T_884: (in dwArg08 : word32)
  Class: Eq_884
  DataType: 
  OrigDataType: 
T_885: (in fp - 0x00000008 - dwArg08 : word32)
  Class: Eq_880
  DataType: 
  OrigDataType: 
T_886: (in 0x00000004 : word32)
  Class: Eq_886
  DataType: 
  OrigDataType: 
T_887: (in esp_13 - 0x00000004 : word32)
  Class: Eq_887
  DataType: 
  OrigDataType: 
T_888: (in Mem16[esp_13 - 0x00000004:word32] : word32)
  Class: Eq_446
  DataType: 
  OrigDataType: 
T_889: (in 0x00000008 : word32)
  Class: Eq_889
  DataType: 
  OrigDataType: 
T_890: (in esp_13 - 0x00000008 : word32)
  Class: Eq_890
  DataType: 
  OrigDataType: 
T_891: (in Mem19[esp_13 - 0x00000008:word32] : word32)
  Class: Eq_447
  DataType: 
  OrigDataType: 
T_892: (in 0x0000000C : word32)
  Class: Eq_892
  DataType: 
  OrigDataType: 
T_893: (in esp_13 - 0x0000000C : word32)
  Class: Eq_893
  DataType: 
  OrigDataType: 
T_894: (in Mem22[esp_13 - 0x0000000C:word32] : word32)
  Class: Eq_448
  DataType: 
  OrigDataType: 
T_895: (in 0x00403000 : ptr32)
  Class: Eq_895
  DataType: 
  OrigDataType: 
T_896: (in Mem22[0x00403000:word32] : word32)
  Class: Eq_896
  DataType: 
  OrigDataType: 
T_897: (in 0x00000008 : word32)
  Class: Eq_897
  DataType: 
  OrigDataType: 
T_898: (in fp + 0x00000008 : word32)
  Class: Eq_898
  DataType: 
  OrigDataType: 
T_899: (in Mem22[0x00403000:word32] ^ fp + 0x00000008 : word32)
  Class: Eq_899
  DataType: 
  OrigDataType: 
T_900: (in 0x00000010 : word32)
  Class: Eq_900
  DataType: 
  OrigDataType: 
T_901: (in esp_13 - 0x00000010 : word32)
  Class: Eq_901
  DataType: 
  OrigDataType: 
T_902: (in Mem32[esp_13 - 0x00000010:word32] : word32)
  Class: Eq_899
  DataType: 
  OrigDataType: 
T_903: (in dwArg00 : word32)
  Class: Eq_903
  DataType: 
  OrigDataType: 
T_904: (in 0x00000014 : word32)
  Class: Eq_904
  DataType: 
  OrigDataType: 
T_905: (in esp_13 - 0x00000014 : word32)
  Class: Eq_905
  DataType: 
  OrigDataType: 
T_906: (in Mem36[esp_13 - 0x00000014:word32] : word32)
  Class: Eq_903
  DataType: 
  OrigDataType: 
T_907: (in 0x00000008 : word32)
  Class: Eq_907
  DataType: 
  OrigDataType: 
T_908: (in fp - 0x00000008 : word32)
  Class: Eq_908
  DataType: 
  OrigDataType: 
T_909: (in 0x00000000 : word32)
  Class: Eq_909
  DataType: 
  OrigDataType: 
T_910: (in Mem41[fs:0x00000000:word32] : word32)
  Class: Eq_908
  DataType: 
  OrigDataType: 
T_911: (in fp + 0x00000008 : word32)
  Class: Eq_911
  DataType: 
  OrigDataType: 
T_912: (in 0x00000010 : word32)
  Class: Eq_912
  DataType: 
  OrigDataType: 
T_913: (in ebp - 0x00000010 : word32)
  Class: Eq_913
  DataType: 
  OrigDataType: 
T_914: (in Mem0[ebp - 0x00000010:word32] : word32)
  Class: Eq_914
  DataType: 
  OrigDataType: 
T_915: (in 0x00000000 : ptr32)
  Class: Eq_915
  DataType: 
  OrigDataType: 
T_916: (in Mem5[fs:0x00000000:word32] : word32)
  Class: Eq_914
  DataType: 
  OrigDataType: 
T_917: (in dwArg00 : word32)
  Class: Eq_917
  DataType: 
  OrigDataType: 
T_918: (in 0x00000000 : word32)
  Class: Eq_918
  DataType: 
  OrigDataType: 
T_919: (in ebp + 0x00000000 : word32)
  Class: Eq_919
  DataType: 
  OrigDataType: 
T_920: (in Mem25[ebp + 0x00000000:word32] : word32)
  Class: Eq_917
  DataType: 
  OrigDataType: 
T_921: (in eax_10 : word32)
  Class: Eq_921
  DataType: 
  OrigDataType: 
T_922: (in 0x00403000 : ptr32)
  Class: Eq_922
  DataType: 
  OrigDataType: 
T_923: (in Mem0[0x00403000:word32] : word32)
  Class: Eq_921
  DataType: 
  OrigDataType: 
T_924: (in 0xBB40E64E : word32)
  Class: Eq_921
  DataType: 
  OrigDataType: 
T_925: (in eax_10 == 0xBB40E64E : bool)
  Class: Eq_925
  DataType: 
  OrigDataType: 
T_926: (in GetSystemTimeAsFileTime : ptr32)
  Class: Eq_926
  DataType: 
  OrigDataType: 
T_927: (in signature of GetSystemTimeAsFileTime : void)
  Class: Eq_926
  DataType: 
  OrigDataType: 
T_928: (in lpSystemTimeAsFileTime : LPFILETIME)
  Class: Eq_928
  DataType: 
  OrigDataType: 
T_929: (in fp : ptr32)
  Class: Eq_929
  DataType: 
  OrigDataType: 
T_930: (in 0x0000000C : word32)
  Class: Eq_930
  DataType: 
  OrigDataType: 
T_931: (in fp - 0x0000000C : word32)
  Class: Eq_928
  DataType: 
  OrigDataType: 
T_932: (in GetSystemTimeAsFileTime(fp - 0x0000000C) : void)
  Class: Eq_932
  DataType: 
  OrigDataType: 
T_933: (in esi_59 : word32)
  Class: Eq_933
  DataType: 
  OrigDataType: 
T_934: (in dwLoc08 : word32)
  Class: Eq_934
  DataType: 
  OrigDataType: 
T_935: (in 0x00000000 : word32)
  Class: Eq_935
  DataType: 
  OrigDataType: 
T_936: (in dwLoc08 & 0x00000000 : word32)
  Class: Eq_936
  DataType: 
  OrigDataType: 
T_937: (in dwLoc0C : word32)
  Class: Eq_937
  DataType: 
  OrigDataType: 
T_938: (in 0x00000000 : word32)
  Class: Eq_938
  DataType: 
  OrigDataType: 
T_939: (in dwLoc0C & 0x00000000 : word32)
  Class: Eq_939
  DataType: 
  OrigDataType: 
T_940: (in dwLoc08 & 0x00000000 ^ dwLoc0C & 0x00000000 : word32)
  Class: Eq_940
  DataType: 
  OrigDataType: 
T_941: (in GetCurrentProcessId : ptr32)
  Class: Eq_941
  DataType: 
  OrigDataType: 
T_942: (in signature of GetCurrentProcessId : void)
  Class: Eq_941
  DataType: 
  OrigDataType: 
T_943: (in GetCurrentProcessId() : word32)
  Class: Eq_943
  DataType: 
  OrigDataType: 
T_944: (in dwLoc08 & 0x00000000 ^ dwLoc0C & 0x00000000 ^ GetCurrentProcessId() : word32)
  Class: Eq_944
  DataType: 
  OrigDataType: 
T_945: (in GetCurrentThreadId : ptr32)
  Class: Eq_945
  DataType: 
  OrigDataType: 
T_946: (in signature of GetCurrentThreadId : void)
  Class: Eq_945
  DataType: 
  OrigDataType: 
T_947: (in GetCurrentThreadId() : word32)
  Class: Eq_947
  DataType: 
  OrigDataType: 
T_948: (in dwLoc08 & 0x00000000 ^ dwLoc0C & 0x00000000 ^ GetCurrentProcessId() ^ GetCurrentThreadId() : word32)
  Class: Eq_948
  DataType: 
  OrigDataType: 
T_949: (in GetTickCount : ptr32)
  Class: Eq_949
  DataType: 
  OrigDataType: 
T_950: (in signature of GetTickCount : void)
  Class: Eq_949
  DataType: 
  OrigDataType: 
T_951: (in GetTickCount() : word32)
  Class: Eq_951
  DataType: 
  OrigDataType: 
T_952: (in dwLoc08 & 0x00000000 ^ dwLoc0C & 0x00000000 ^ GetCurrentProcessId() ^ GetCurrentThreadId() ^ GetTickCount() : word32)
  Class: Eq_933
  DataType: 
  OrigDataType: 
T_953: (in QueryPerformanceCounter : ptr32)
  Class: Eq_953
  DataType: 
  OrigDataType: 
T_954: (in signature of QueryPerformanceCounter : void)
  Class: Eq_953
  DataType: 
  OrigDataType: 
T_955: (in lpPerformanceCount : (ptr LARGE_INTEGER))
  Class: Eq_955
  DataType: 
  OrigDataType: 
T_956: (in 0x00000014 : word32)
  Class: Eq_956
  DataType: 
  OrigDataType: 
T_957: (in fp - 0x00000014 : word32)
  Class: Eq_955
  DataType: 
  OrigDataType: 
T_958: (in QueryPerformanceCounter(fp - 0x00000014) : word32)
  Class: Eq_958
  DataType: 
  OrigDataType: 
T_959: (in esi_69 : word32)
  Class: Eq_959
  DataType: 
  OrigDataType: 
T_960: (in dwLoc10 : word32)
  Class: Eq_960
  DataType: 
  OrigDataType: 
T_961: (in dwLoc14 : word32)
  Class: Eq_961
  DataType: 
  OrigDataType: 
T_962: (in dwLoc10 ^ dwLoc14 : word32)
  Class: Eq_962
  DataType: 
  OrigDataType: 
T_963: (in esi_59 ^ (dwLoc10 ^ dwLoc14) : word32)
  Class: Eq_959
  DataType: 
  OrigDataType: 
T_964: (in 0xBB40E64E : word32)
  Class: Eq_959
  DataType: 
  OrigDataType: 
T_965: (in esi_69 != 0xBB40E64E : bool)
  Class: Eq_965
  DataType: 
  OrigDataType: 
T_966: (in 0xFFFF0000 : word32)
  Class: Eq_966
  DataType: 
  OrigDataType: 
T_967: (in eax_10 & 0xFFFF0000 : word32)
  Class: Eq_967
  DataType: 
  OrigDataType: 
T_968: (in 0x00000000 : word32)
  Class: Eq_967
  DataType: 
  OrigDataType: 
T_969: (in (eax_10 & 0xFFFF0000) == 0x00000000 : bool)
  Class: Eq_969
  DataType: 
  OrigDataType: 
T_970: (in ~eax_10 : word32)
  Class: Eq_970
  DataType: 
  OrigDataType: 
T_971: (in 0x00403004 : ptr32)
  Class: Eq_971
  DataType: 
  OrigDataType: 
T_972: (in Mem95[0x00403004:word32] : word32)
  Class: Eq_970
  DataType: 
  OrigDataType: 
T_973: (in 0xFFFF0000 : word32)
  Class: Eq_973
  DataType: 
  OrigDataType: 
T_974: (in esi_69 & 0xFFFF0000 : word32)
  Class: Eq_974
  DataType: 
  OrigDataType: 
T_975: (in 0x00000000 : word32)
  Class: Eq_974
  DataType: 
  OrigDataType: 
T_976: (in (esi_69 & 0xFFFF0000) != 0x00000000 : bool)
  Class: Eq_976
  DataType: 
  OrigDataType: 
T_977: (in 0xBB40E64F : word32)
  Class: Eq_959
  DataType: 
  OrigDataType: 
T_978: (in 0x00403000 : ptr32)
  Class: Eq_978
  DataType: 
  OrigDataType: 
T_979: (in Mem77[0x00403000:word32] : word32)
  Class: Eq_959
  DataType: 
  OrigDataType: 
T_980: (in ~esi_69 : word32)
  Class: Eq_980
  DataType: 
  OrigDataType: 
T_981: (in 0x00403004 : ptr32)
  Class: Eq_981
  DataType: 
  OrigDataType: 
T_982: (in Mem79[0x00403004:word32] : word32)
  Class: Eq_980
  DataType: 
  OrigDataType: 
T_983: (in 0x00000010 : word32)
  Class: Eq_983
  DataType: 
  OrigDataType: 
T_984: (in esi_69 << 0x00000010 : word32)
  Class: Eq_984
  DataType: 
  OrigDataType: 
T_985: (in esi_69 | esi_69 << 0x00000010 : word32)
  Class: Eq_959
  DataType: 
  OrigDataType: 
*/
