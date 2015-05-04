// subject.h
// Generated on 5/4/2015 12:12:39 AM by decompiling from_rec/hd2/ia32_pe_from_rec_msvc8_release/subject.exe
// using Decompiler version 0.4.2.0.

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
  DataType: (ptr (struct (1 T_37 t0001)))
  OrigDataType: (ptr (struct (1 T_37 t0001)))
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
T_35: (in 0x00000001 : word32)
  Class: Eq_35
  DataType: word32
  OrigDataType: word32
T_36: (in edi_248 + 0x00000001 : word32)
  Class: Eq_36
  DataType: word32
  OrigDataType: word32
T_37: (in Mem0[edi_248 + 0x00000001:byte] : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_38: (in 0x00 : byte)
  Class: Eq_37
  DataType: byte
  OrigDataType: byte
T_39: (in Mem0[edi_248 + 0x00000001:byte] != 0x00 : bool)
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
  Class: Eq_31
  DataType: word32
  OrigDataType: word32
T_49: (in eax_71 : word32)
  Class: Eq_49
  DataType: word32
  OrigDataType: word32
T_50: (in 0x00000054 : word32)
  Class: Eq_50
  DataType: word32
  OrigDataType: word32
T_51: (in fp - 0x00000054 : word32)
  Class: Eq_49
  DataType: word32
  OrigDataType: word32
T_52: (in edx_74 : word32)
  Class: Eq_52
  DataType: word32
  OrigDataType: word32
T_53: (in 0x00000053 : word32)
  Class: Eq_53
  DataType: word32
  OrigDataType: word32
T_54: (in fp - 0x00000053 : word32)
  Class: Eq_54
  DataType: word32
  OrigDataType: word32
T_55: (in edxOut : ptr32)
  Class: Eq_55
  DataType: ptr32
  OrigDataType: ptr32
T_56: (in *edxOut : word32)
  Class: Eq_54
  DataType: 
  OrigDataType: 
T_57: (in eax_247 : word32)
  Class: Eq_49
  DataType: 
  OrigDataType: 
T_58: (in 0x00000001 : word32)
  Class: Eq_58
  DataType: 
  OrigDataType: 
T_59: (in eax_247 + 0x00000001 : word32)
  Class: Eq_49
  DataType: 
  OrigDataType: 
T_60: (in 0x00000000 : word32)
  Class: Eq_60
  DataType: 
  OrigDataType: 
T_61: (in eax_247 + 0x00000000 : word32)
  Class: Eq_61
  DataType: 
  OrigDataType: 
T_62: (in Mem0[eax_247 + 0x00000000:byte] : byte)
  Class: Eq_62
  DataType: 
  OrigDataType: 
T_63: (in 0x00 : byte)
  Class: Eq_62
  DataType: 
  OrigDataType: 
T_64: (in Mem0[eax_247 + 0x00000000:byte] != 0x00 : bool)
  Class: Eq_64
  DataType: 
  OrigDataType: 
T_65: (in 0x00000010 : word32)
  Class: Eq_13
  DataType: 
  OrigDataType: 
T_66: (in esi_188 >= 0x00000010 : bool)
  Class: Eq_66
  DataType: 
  OrigDataType: 
T_67: (in eax_83 : word32)
  Class: Eq_67
  DataType: 
  OrigDataType: 
T_68: (in 0x00000053 : word32)
  Class: Eq_68
  DataType: 
  OrigDataType: 
T_69: (in fp - 0x00000053 : word32)
  Class: Eq_69
  DataType: 
  OrigDataType: 
T_70: (in eax_71 - (fp - 0x00000053) : word32)
  Class: Eq_67
  DataType: 
  OrigDataType: 
T_71: (in 0x007C2020 : word32)
  Class: Eq_71
  DataType: 
  OrigDataType: 
T_72: (in 0x00000054 : word32)
  Class: Eq_72
  DataType: 
  OrigDataType: 
T_73: (in fp - 0x00000054 : word32)
  Class: Eq_73
  DataType: 
  OrigDataType: 
T_74: (in fp - 0x00000054 + eax_83 : word32)
  Class: Eq_74
  DataType: 
  OrigDataType: 
T_75: (in Mem85[fp - 0x00000054 + eax_83:word32] : word32)
  Class: Eq_71
  DataType: 
  OrigDataType: 
T_76: (in esi_125 : word32)
  Class: Eq_13
  DataType: 
  OrigDataType: 
T_77: (in 0x00000000 : word32)
  Class: Eq_13
  DataType: 
  OrigDataType: 
T_78: (in 0x00000000 : word32)
  Class: Eq_13
  DataType: 
  OrigDataType: 
T_79: (in ebp_189 <= 0x00000000 : bool)
  Class: Eq_79
  DataType: 
  OrigDataType: 
T_80: (in edi_131 : word32)
  Class: Eq_80
  DataType: 
  OrigDataType: 
T_81: (in 0x00000010 : word32)
  Class: Eq_81
  DataType: 
  OrigDataType: 
T_82: (in 0x00000010 - esi_125 : word32)
  Class: Eq_80
  DataType: 
  OrigDataType: 
T_83: (in memset : ptr32)
  Class: Eq_83
  DataType: 
  OrigDataType: 
T_84: (in signature of memset : void)
  Class: Eq_83
  DataType: 
  OrigDataType: 
T_85: (in _Dst : (ptr void))
  Class: Eq_85
  DataType: 
  OrigDataType: 
T_86: (in _Val : int32)
  Class: Eq_86
  DataType: 
  OrigDataType: 
T_87: (in _Size : size_t)
  Class: Eq_80
  DataType: 
  OrigDataType: 
T_88: (in 0x00000054 : word32)
  Class: Eq_88
  DataType: 
  OrigDataType: 
T_89: (in fp - 0x00000054 : word32)
  Class: Eq_89
  DataType: 
  OrigDataType: 
T_90: (in 0x00000003 : word32)
  Class: Eq_90
  DataType: 
  OrigDataType: 
T_91: (in eax_83 + 0x00000003 : word32)
  Class: Eq_91
  DataType: 
  OrigDataType: 
T_92: (in eax_83 + 0x00000003 + esi_125 : word32)
  Class: Eq_92
  DataType: 
  OrigDataType: 
T_93: (in fp - 0x00000054 + ((eax_83 + 0x00000003) + esi_125) : word32)
  Class: Eq_85
  DataType: 
  OrigDataType: 
T_94: (in 0x00000020 : word32)
  Class: Eq_86
  DataType: 
  OrigDataType: 
T_95: (in memset(fp - 0x00000054 + ((eax_83 + 0x00000003) + esi_125), 0x00000020, edi_131) : word32)
  Class: Eq_95
  DataType: 
  OrigDataType: 
T_96: (in esi_125 + edi_131 : word32)
  Class: Eq_13
  DataType: 
  OrigDataType: 
T_97: (in ecx_144 : word32)
  Class: Eq_97
  DataType: 
  OrigDataType: 
T_98: (in 0x00000054 : word32)
  Class: Eq_98
  DataType: 
  OrigDataType: 
T_99: (in fp - 0x00000054 : word32)
  Class: Eq_99
  DataType: 
  OrigDataType: 
T_100: (in eax_83 + 0x00000003 : word32)
  Class: Eq_100
  DataType: 
  OrigDataType: 
T_101: (in fp - 0x00000054 + (eax_83 + 0x00000003) : word32)
  Class: Eq_97
  DataType: 
  OrigDataType: 
T_102: (in 0x2E : byte)
  Class: Eq_102
  DataType: 
  OrigDataType: 
T_103: (in al_159 : byte)
  Class: Eq_102
  DataType: 
  OrigDataType: 
T_104: (in al_152 : byte)
  Class: Eq_104
  DataType: 
  OrigDataType: 
T_105: (in (word32) al_152 : word32)
  Class: Eq_105
  DataType: 
  OrigDataType: 
T_106: (in (byte) (word32) al_152 : byte)
  Class: Eq_102
  DataType: 
  OrigDataType: 
T_107: (in 0x7E : byte)
  Class: Eq_104
  DataType: 
  OrigDataType: 
T_108: (in al_152 <=u 0x7E : bool)
  Class: Eq_108
  DataType: 
  OrigDataType: 
T_109: (in ecx_144 + esi_125 : word32)
  Class: Eq_109
  DataType: 
  OrigDataType: 
T_110: (in Mem161[ecx_144 + esi_125:byte] : byte)
  Class: Eq_102
  DataType: 
  OrigDataType: 
T_111: (in 0x00000001 : word32)
  Class: Eq_111
  DataType: 
  OrigDataType: 
T_112: (in esi_125 + 0x00000001 : word32)
  Class: Eq_13
  DataType: 
  OrigDataType: 
T_113: (in esi_125 < ebp_189 : bool)
  Class: Eq_113
  DataType: 
  OrigDataType: 
T_114: (in dwArg04 : word32)
  Class: Eq_114
  DataType: 
  OrigDataType: 
T_115: (in dwArg04 + esi_125 : word32)
  Class: Eq_115
  DataType: 
  OrigDataType: 
T_116: (in Mem85[dwArg04 + esi_125:byte] : byte)
  Class: Eq_104
  DataType: 
  OrigDataType: 
T_117: (in 0x20 : byte)
  Class: Eq_104
  DataType: 
  OrigDataType: 
T_118: (in al_152 <u 0x20 : bool)
  Class: Eq_118
  DataType: 
  OrigDataType: 
T_119: (in 0x00000010 : word32)
  Class: Eq_13
  DataType: 
  OrigDataType: 
T_120: (in esi_125 >= 0x00000010 : bool)
  Class: Eq_120
  DataType: 
  OrigDataType: 
T_121: (in 0x007C : word16)
  Class: Eq_121
  DataType: 
  OrigDataType: 
T_122: (in 0x00000054 : word32)
  Class: Eq_122
  DataType: 
  OrigDataType: 
T_123: (in fp - 0x00000054 : word32)
  Class: Eq_123
  DataType: 
  OrigDataType: 
T_124: (in eax_83 + 0x00000003 : word32)
  Class: Eq_124
  DataType: 
  OrigDataType: 
T_125: (in eax_83 + 0x00000003 + esi_125 : word32)
  Class: Eq_125
  DataType: 
  OrigDataType: 
T_126: (in fp - 0x00000054 + ((eax_83 + 0x00000003) + esi_125) : word32)
  Class: Eq_126
  DataType: 
  OrigDataType: 
T_127: (in Mem101[fp - 0x00000054 + ((eax_83 + 0x00000003) + esi_125):word16] : word16)
  Class: Eq_121
  DataType: 
  OrigDataType: 
T_128: (in MSVCR90.dll!printf : ptr32)
  Class: Eq_128
  DataType: 
  OrigDataType: 
T_129: (in fn0040123B : ptr32)
  Class: Eq_129
  DataType: 
  OrigDataType: 
T_130: (in signature of fn0040123B : void)
  Class: Eq_129
  DataType: 
  OrigDataType: 
T_131: (in eax : word32)
  Class: Eq_131
  DataType: 
  OrigDataType: 
T_132: (in ecx : word32)
  Class: Eq_132
  DataType: 
  OrigDataType: 
T_133: (in edx : word32)
  Class: Eq_133
  DataType: 
  OrigDataType: 
T_134: (in ebx : word32)
  Class: Eq_134
  DataType: 
  OrigDataType: 
T_135: (in ebp : word32)
  Class: Eq_135
  DataType: 
  OrigDataType: 
T_136: (in esi : word32)
  Class: Eq_136
  DataType: 
  OrigDataType: 
T_137: (in edi : word32)
  Class: Eq_137
  DataType: 
  OrigDataType: 
T_138: (in es : selector)
  Class: Eq_138
  DataType: 
  OrigDataType: 
T_139: (in ds : selector)
  Class: Eq_139
  DataType: 
  OrigDataType: 
T_140: (in fs : selector)
  Class: Eq_140
  DataType: 
  OrigDataType: 
T_141: (in gs : selector)
  Class: Eq_141
  DataType: 
  OrigDataType: 
T_142: (in dwArg00 : word32)
  Class: Eq_134
  DataType: 
  OrigDataType: 
T_143: (in 0x0000007C : word32)
  Class: Eq_131
  DataType: 
  OrigDataType: 
T_144: (in 0x00000058 : word32)
  Class: Eq_144
  DataType: 
  OrigDataType: 
T_145: (in fp - 0x00000058 : word32)
  Class: Eq_145
  DataType: 
  OrigDataType: 
T_146: (in eax_5 ^ fp - 0x00000058 : word32)
  Class: Eq_132
  DataType: 
  OrigDataType: 
T_147: (in fp - 0x00000053 : word32)
  Class: Eq_133
  DataType: 
  OrigDataType: 
T_148: (in ebx : word32)
  Class: Eq_134
  DataType: 
  OrigDataType: 
T_149: (in ebp : word32)
  Class: Eq_135
  DataType: 
  OrigDataType: 
T_150: (in esi : word32)
  Class: Eq_136
  DataType: 
  OrigDataType: 
T_151: (in edi : word32)
  Class: Eq_137
  DataType: 
  OrigDataType: 
T_152: (in es : selector)
  Class: Eq_138
  DataType: 
  OrigDataType: 
T_153: (in ds : selector)
  Class: Eq_139
  DataType: 
  OrigDataType: 
T_154: (in fs : selector)
  Class: Eq_140
  DataType: 
  OrigDataType: 
T_155: (in gs : selector)
  Class: Eq_141
  DataType: 
  OrigDataType: 
T_156: (in fn0040123B(0x0000007C, eax_5 ^ fp - 0x00000058, fp - 0x00000053, ebx, ebp, esi, edi, es, ds, fs, gs, ebx) : word32)
  Class: Eq_156
  DataType: 
  OrigDataType: 
T_157: (in eax : word32)
  Class: Eq_157
  DataType: 
  OrigDataType: 
T_158: (in edx : word32)
  Class: Eq_133
  DataType: 
  OrigDataType: 
T_159: (in edxOut : ptr32)
  Class: Eq_159
  DataType: 
  OrigDataType: 
T_160: (in *edxOut : word32)
  Class: Eq_133
  DataType: 
  OrigDataType: 
T_161: (in _stat64i32 : ptr32)
  Class: Eq_161
  DataType: 
  OrigDataType: 
T_162: (in signature of _stat64i32 : void)
  Class: Eq_161
  DataType: 
  OrigDataType: 
T_163: (in esi_23 : word32)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_164: (in ecx : word32)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_165: (in fp : ptr32)
  Class: Eq_165
  DataType: 
  OrigDataType: 
T_166: (in 0x0000004C : word32)
  Class: Eq_166
  DataType: 
  OrigDataType: 
T_167: (in fp - 0x0000004C : word32)
  Class: Eq_167
  DataType: 
  OrigDataType: 
T_168: (in fp - 0x0000004C : word32)
  Class: Eq_168
  DataType: 
  OrigDataType: 
T_169: (in fp - 0x0000004C & fp - 0x0000004C : word32)
  Class: Eq_169
  DataType: 
  OrigDataType: 
T_170: (in 0x00000000 : word32)
  Class: Eq_169
  DataType: 
  OrigDataType: 
T_171: (in (fp - 0x0000004C & fp - 0x0000004C) == 0x00000000 : bool)
  Class: Eq_171
  DataType: 
  OrigDataType: 
T_172: (in MSVCR90.dll!fopen : ptr32)
  Class: Eq_172
  DataType: 
  OrigDataType: 
T_173: (in 0x0000004C : word32)
  Class: Eq_173
  DataType: 
  OrigDataType: 
T_174: (in fp - 0x0000004C : word32)
  Class: Eq_174
  DataType: 
  OrigDataType: 
T_175: (in fp - 0x0000004C : word32)
  Class: Eq_175
  DataType: 
  OrigDataType: 
T_176: (in fp - 0x0000004C & fp - 0x0000004C : word32)
  Class: Eq_176
  DataType: 
  OrigDataType: 
T_177: (in 0x00000000 : word32)
  Class: Eq_176
  DataType: 
  OrigDataType: 
T_178: (in (fp - 0x0000004C & fp - 0x0000004C) == 0x00000000 : bool)
  Class: Eq_178
  DataType: 
  OrigDataType: 
T_179: (in perror : ptr32)
  Class: Eq_179
  DataType: 
  OrigDataType: 
T_180: (in signature of perror : void)
  Class: Eq_179
  DataType: 
  OrigDataType: 
T_181: (in _ErrMsg : (ptr char))
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_182: (in perror(esi_23) : void)
  Class: Eq_182
  DataType: 
  OrigDataType: 
T_183: (in edi_78 : word32)
  Class: Eq_183
  DataType: 
  OrigDataType: 
T_184: (in fp - 0x0000004C : word32)
  Class: Eq_184
  DataType: 
  OrigDataType: 
T_185: (in ediOut : ptr32)
  Class: Eq_185
  DataType: 
  OrigDataType: 
T_186: (in *ediOut : word32)
  Class: Eq_184
  DataType: 
  OrigDataType: 
T_187: (in esi_80 : word32)
  Class: Eq_187
  DataType: 
  OrigDataType: 
T_188: (in edi : word32)
  Class: Eq_136
  DataType: 
  OrigDataType: 
T_189: (in esiOut : ptr32)
  Class: Eq_189
  DataType: 
  OrigDataType: 
T_190: (in *esiOut : word32)
  Class: Eq_136
  DataType: 
  OrigDataType: 
T_191: (in ebp_82 : word32)
  Class: Eq_191
  DataType: 
  OrigDataType: 
T_192: (in esi : word32)
  Class: Eq_135
  DataType: 
  OrigDataType: 
T_193: (in ebpOut : ptr32)
  Class: Eq_193
  DataType: 
  OrigDataType: 
T_194: (in *ebpOut : word32)
  Class: Eq_135
  DataType: 
  OrigDataType: 
T_195: (in ebx_84 : word32)
  Class: Eq_195
  DataType: 
  OrigDataType: 
T_196: (in ebp : word32)
  Class: Eq_134
  DataType: 
  OrigDataType: 
T_197: (in ebxOut : ptr32)
  Class: Eq_197
  DataType: 
  OrigDataType: 
T_198: (in *ebxOut : word32)
  Class: Eq_134
  DataType: 
  OrigDataType: 
T_199: (in fn0040123B : ptr32)
  Class: Eq_129
  DataType: 
  OrigDataType: 
T_200: (in 0x00000001 : word32)
  Class: Eq_131
  DataType: 
  OrigDataType: 
T_201: (in dwLoc0C : word32)
  Class: Eq_201
  DataType: 
  OrigDataType: 
T_202: (in 0xFFFFFFB0 : word32)
  Class: Eq_202
  DataType: 
  OrigDataType: 
T_203: (in fp + 0xFFFFFFB0 : word32)
  Class: Eq_203
  DataType: 
  OrigDataType: 
T_204: (in dwLoc0C ^ fp + 0xFFFFFFB0 : word32)
  Class: Eq_132
  DataType: 
  OrigDataType: 
T_205: (in fp - 0x0000004C : word32)
  Class: Eq_137
  DataType: 
  OrigDataType: 
T_206: (in es : selector)
  Class: Eq_138
  DataType: 
  OrigDataType: 
T_207: (in ds : selector)
  Class: Eq_139
  DataType: 
  OrigDataType: 
T_208: (in fs : selector)
  Class: Eq_140
  DataType: 
  OrigDataType: 
T_209: (in gs : selector)
  Class: Eq_141
  DataType: 
  OrigDataType: 
T_210: (in fn0040123B(0x00000001, dwLoc0C ^ fp + 0xFFFFFFB0, edx, ebp, esi, edi, fp - 0x0000004C, es, ds, fs, gs, ebp) : word32)
  Class: Eq_210
  DataType: 
  OrigDataType: 
T_211: (in dwLoc3C : word32)
  Class: Eq_211
  DataType: 
  OrigDataType: 
T_212: (in 0x00000000 : word32)
  Class: Eq_211
  DataType: 
  OrigDataType: 
T_213: (in dwLoc3C <=u 0x00000000 : bool)
  Class: Eq_213
  DataType: 
  OrigDataType: 
T_214: (in MSVCR90.dll!fclose : ptr32)
  Class: Eq_214
  DataType: 
  OrigDataType: 
T_215: (in edi_114 : word32)
  Class: Eq_215
  DataType: 
  OrigDataType: 
T_216: (in fp - 0x0000004C : word32)
  Class: Eq_216
  DataType: 
  OrigDataType: 
T_217: (in *ediOut : word32)
  Class: Eq_216
  DataType: 
  OrigDataType: 
T_218: (in esi_116 : word32)
  Class: Eq_218
  DataType: 
  OrigDataType: 
T_219: (in *esiOut : word32)
  Class: Eq_136
  DataType: 
  OrigDataType: 
T_220: (in ebp_118 : word32)
  Class: Eq_220
  DataType: 
  OrigDataType: 
T_221: (in *ebpOut : word32)
  Class: Eq_135
  DataType: 
  OrigDataType: 
T_222: (in ebx_120 : word32)
  Class: Eq_222
  DataType: 
  OrigDataType: 
T_223: (in *ebxOut : word32)
  Class: Eq_134
  DataType: 
  OrigDataType: 
T_224: (in fn0040123B : ptr32)
  Class: Eq_129
  DataType: 
  OrigDataType: 
T_225: (in 0x00000000 : word32)
  Class: Eq_131
  DataType: 
  OrigDataType: 
T_226: (in 0xFFFFFFB0 : word32)
  Class: Eq_226
  DataType: 
  OrigDataType: 
T_227: (in fp + 0xFFFFFFB0 : word32)
  Class: Eq_227
  DataType: 
  OrigDataType: 
T_228: (in dwLoc0C ^ fp + 0xFFFFFFB0 : word32)
  Class: Eq_132
  DataType: 
  OrigDataType: 
T_229: (in fp - 0x0000004C : word32)
  Class: Eq_137
  DataType: 
  OrigDataType: 
T_230: (in fn0040123B(0x00000000, dwLoc0C ^ fp + 0xFFFFFFB0, edx, ebp, esi, edi, fp - 0x0000004C, es, ds, fs, gs, ebp) : word32)
  Class: Eq_230
  DataType: 
  OrigDataType: 
T_231: (in ebx_129 : word32)
  Class: Eq_134
  DataType: 
  OrigDataType: 
T_232: (in MSVCR90.dll!fread : ptr32)
  Class: Eq_134
  DataType: 
  OrigDataType: 
T_233: (in 0xFFFFFFE4 : word32)
  Class: Eq_233
  DataType: 
  OrigDataType: 
T_234: (in fp + 0xFFFFFFE4 : word32)
  Class: Eq_234
  DataType: 
  OrigDataType: 
T_235: (in 0xFFFFFF98 : word32)
  Class: Eq_235
  DataType: 
  OrigDataType: 
T_236: (in fp + 0xFFFFFF98 : word32)
  Class: Eq_236
  DataType: 
  OrigDataType: 
T_237: (in Mem149[fp + 0xFFFFFF98:word32] : word32)
  Class: Eq_234
  DataType: 
  OrigDataType: 
T_238: (in edx_151 : word32)
  Class: Eq_238
  DataType: 
  OrigDataType: 
T_239: (in fn00401000 : ptr32)
  Class: Eq_239
  DataType: 
  OrigDataType: 
T_240: (in signature of fn00401000 : void)
  Class: Eq_239
  DataType: 
  OrigDataType: 
T_241: (in dwArg04 : word32)
  Class: Eq_241
  DataType: 
  OrigDataType: 
T_242: (in dwArg08 : word32)
  Class: Eq_242
  DataType: 
  OrigDataType: 
T_243: (in 0x00000000 : word32)
  Class: Eq_135
  DataType: 
  OrigDataType: 
T_244: (in fp - 0x0000004C : word32)
  Class: Eq_136
  DataType: 
  OrigDataType: 
T_245: (in fp - 0x0000004C : word32)
  Class: Eq_137
  DataType: 
  OrigDataType: 
T_246: (in 0x00000010 : word32)
  Class: Eq_241
  DataType: 
  OrigDataType: 
T_247: (in fp - 0x0000004C : word32)
  Class: Eq_242
  DataType: 
  OrigDataType: 
T_248: (in out edx_151 : ptr32)
  Class: Eq_55
  DataType: 
  OrigDataType: 
T_249: (in fn00401000(ebx_129, 0x00000000, fp - 0x0000004C, fp - 0x0000004C, es, ds, fs, gs, 0x00000010, fp - 0x0000004C, out edx_151) : word32)
  Class: Eq_249
  DataType: 
  OrigDataType: 
T_250: (in fp - 0x0000004C : word32)
  Class: Eq_211
  DataType: 
  OrigDataType: 
T_251: (in fp - 0x0000004C <u dwLoc3C : bool)
  Class: Eq_251
  DataType: 
  OrigDataType: 
T_252: (in 0x00000001 : word32)
  Class: Eq_252
  DataType: 
  OrigDataType: 
T_253: (in 0xFFFFFF94 : word32)
  Class: Eq_253
  DataType: 
  OrigDataType: 
T_254: (in fp + 0xFFFFFF94 : word32)
  Class: Eq_254
  DataType: 
  OrigDataType: 
T_255: (in Mem137[fp + 0xFFFFFF94:word32] : word32)
  Class: Eq_252
  DataType: 
  OrigDataType: 
T_256: (in MSVCR90.dll!fread : ptr32)
  Class: Eq_256
  DataType: 
  OrigDataType: 
T_257: (in 0x0000004C : word32)
  Class: Eq_165
  DataType: 
  OrigDataType: 
T_258: (in fp == 0x0000004C : bool)
  Class: Eq_258
  DataType: 
  OrigDataType: 
T_259: (in eax : word32)
  Class: Eq_259
  DataType: 
  OrigDataType: 
T_260: (in __align : ptr32)
  Class: Eq_260
  DataType: 
  OrigDataType: 
T_261: (in fp : ptr32)
  Class: Eq_261
  DataType: 
  OrigDataType: 
T_262: (in 0x00000004 : word32)
  Class: Eq_262
  DataType: 
  OrigDataType: 
T_263: (in fp - 0x00000004 : word32)
  Class: Eq_263
  DataType: 
  OrigDataType: 
T_264: (in __align(fp - 0x00000004) : void)
  Class: Eq_264
  DataType: 
  OrigDataType: 
T_265: (in ebp_32 : word32)
  Class: Eq_134
  DataType: 
  OrigDataType: 
T_266: (in fp - 0x00000004 : word32)
  Class: Eq_134
  DataType: 
  OrigDataType: 
T_267: (in edi_20 : word32)
  Class: Eq_136
  DataType: 
  OrigDataType: 
T_268: (in 0x00000000 : word32)
  Class: Eq_136
  DataType: 
  OrigDataType: 
T_269: (in esi_21 : word32)
  Class: Eq_135
  DataType: 
  OrigDataType: 
T_270: (in 0x00000001 : word32)
  Class: Eq_135
  DataType: 
  OrigDataType: 
T_271: (in dwArg04 : word32)
  Class: Eq_271
  DataType: 
  OrigDataType: 
T_272: (in 0x00000001 : word32)
  Class: Eq_271
  DataType: 
  OrigDataType: 
T_273: (in dwArg04 <= 0x00000001 : bool)
  Class: Eq_273
  DataType: 
  OrigDataType: 
T_274: (in edi_34 : word32)
  Class: Eq_274
  DataType: 
  OrigDataType: 
T_275: (in 0x00000014 : word32)
  Class: Eq_275
  DataType: 
  OrigDataType: 
T_276: (in fp - 0x00000014 : word32)
  Class: Eq_276
  DataType: 
  OrigDataType: 
T_277: (in Mem0[fp - 0x00000014:word32] : word32)
  Class: Eq_274
  DataType: 
  OrigDataType: 
T_278: (in ebp_40 : word32)
  Class: Eq_278
  DataType: 
  OrigDataType: 
T_279: (in 0x00000000 : word32)
  Class: Eq_279
  DataType: 
  OrigDataType: 
T_280: (in ebp_32 + 0x00000000 : word32)
  Class: Eq_280
  DataType: 
  OrigDataType: 
T_281: (in Mem0[ebp_32 + 0x00000000:word32] : word32)
  Class: Eq_278
  DataType: 
  OrigDataType: 
T_282: (in esp_41 : word32)
  Class: Eq_282
  DataType: 
  OrigDataType: 
T_283: (in 0x00000004 : word32)
  Class: Eq_283
  DataType: 
  OrigDataType: 
T_284: (in ebp_32 + 0x00000004 : word32)
  Class: Eq_282
  DataType: 
  OrigDataType: 
T_285: (in ebx_47 : word32)
  Class: Eq_285
  DataType: 
  OrigDataType: 
T_286: (in 0x00000008 : word32)
  Class: Eq_286
  DataType: 
  OrigDataType: 
T_287: (in esp_41 + 0x00000008 : word32)
  Class: Eq_287
  DataType: 
  OrigDataType: 
T_288: (in Mem0[esp_41 + 0x00000008:word32] : word32)
  Class: Eq_288
  DataType: 
  OrigDataType: 
T_289: (in ebxOut : ptr32)
  Class: Eq_289
  DataType: 
  OrigDataType: 
T_290: (in *ebxOut : word32)
  Class: Eq_288
  DataType: 
  OrigDataType: 
T_291: (in ebp_49 : word32)
  Class: Eq_291
  DataType: 
  OrigDataType: 
T_292: (in 0x00000000 : word32)
  Class: Eq_292
  DataType: 
  OrigDataType: 
T_293: (in ebp_40 + 0x00000000 : word32)
  Class: Eq_293
  DataType: 
  OrigDataType: 
T_294: (in Mem0[ebp_40 + 0x00000000:word32] : word32)
  Class: Eq_294
  DataType: 
  OrigDataType: 
T_295: (in ebpOut : ptr32)
  Class: Eq_295
  DataType: 
  OrigDataType: 
T_296: (in *ebpOut : word32)
  Class: Eq_294
  DataType: 
  OrigDataType: 
T_297: (in ebx_64 : word32)
  Class: Eq_297
  DataType: 
  OrigDataType: 
T_298: (in esi_66 : word32)
  Class: Eq_298
  DataType: 
  OrigDataType: 
T_299: (in edi_67 : word32)
  Class: Eq_299
  DataType: 
  OrigDataType: 
T_300: (in fn00401140 : ptr32)
  Class: Eq_300
  DataType: 
  OrigDataType: 
T_301: (in signature of fn00401140 : void)
  Class: Eq_300
  DataType: 
  OrigDataType: 
T_302: (in 0x0000000C : word32)
  Class: Eq_302
  DataType: 
  OrigDataType: 
T_303: (in ebp_32 + 0x0000000C : word32)
  Class: Eq_303
  DataType: 
  OrigDataType: 
T_304: (in Mem0[ebp_32 + 0x0000000C:word32] : word32)
  Class: Eq_304
  DataType: 
  OrigDataType: 
T_305: (in 0x00000004 : word32)
  Class: Eq_305
  DataType: 
  OrigDataType: 
T_306: (in esi_21 * 0x00000004 : word32)
  Class: Eq_306
  DataType: 
  OrigDataType: 
T_307: (in Mem0[ebp_32 + 0x0000000C:word32][esi_21 * 0x00000004] : word32)
  Class: Eq_163
  DataType: 
  OrigDataType: 
T_308: (in edx : word32)
  Class: Eq_133
  DataType: 
  OrigDataType: 
T_309: (in es : selector)
  Class: Eq_138
  DataType: 
  OrigDataType: 
T_310: (in ds : selector)
  Class: Eq_139
  DataType: 
  OrigDataType: 
T_311: (in fs : selector)
  Class: Eq_140
  DataType: 
  OrigDataType: 
T_312: (in gs : selector)
  Class: Eq_141
  DataType: 
  OrigDataType: 
T_313: (in out edx : ptr32)
  Class: Eq_159
  DataType: 
  OrigDataType: 
T_314: (in out ebx_64 : ptr32)
  Class: Eq_197
  DataType: 
  OrigDataType: 
T_315: (in out ebp_32 : ptr32)
  Class: Eq_193
  DataType: 
  OrigDataType: 
T_316: (in out esi_66 : ptr32)
  Class: Eq_189
  DataType: 
  OrigDataType: 
T_317: (in out edi_67 : ptr32)
  Class: Eq_185
  DataType: 
  OrigDataType: 
T_318: (in fn00401140(Mem0[ebp_32 + 0x0000000C:word32][esi_21 * 0x00000004], edx, ebp_32, esi_21, edi_20, es, ds, fs, gs, out edx, out ebx_64, out ebp_32, out esi_66, out edi_67) : word32)
  Class: Eq_259
  DataType: 
  OrigDataType: 
T_319: (in 0x00000001 : word32)
  Class: Eq_319
  DataType: 
  OrigDataType: 
T_320: (in esi_66 + 0x00000001 : word32)
  Class: Eq_135
  DataType: 
  OrigDataType: 
T_321: (in edi_67 + eax : word32)
  Class: Eq_136
  DataType: 
  OrigDataType: 
T_322: (in esi_66 + 0x00000001 : word32)
  Class: Eq_297
  DataType: 
  OrigDataType: 
T_323: (in esi_66 + 0x00000001 < ebx_64 : bool)
  Class: Eq_323
  DataType: 
  OrigDataType: 
T_324: (in 0x00403000 : ptr32)
  Class: Eq_324
  DataType: 
  OrigDataType: 
T_325: (in Mem0[0x00403000:word32] : word32)
  Class: Eq_132
  DataType: 
  OrigDataType: 
T_326: (in ecx != Mem0[0x00403000:word32] : bool)
  Class: Eq_326
  DataType: 
  OrigDataType: 
T_327: (in 0x00000000 : word32)
  Class: Eq_132
  DataType: 
  OrigDataType: 
T_328: (in ecx == 0x00000000 : bool)
  Class: Eq_328
  DataType: 
  OrigDataType: 
T_329: (in 0x00403140 : ptr32)
  Class: Eq_329
  DataType: 
  OrigDataType: 
T_330: (in Mem39[0x00403140:word32] : word32)
  Class: Eq_131
  DataType: 
  OrigDataType: 
T_331: (in 0x0040313C : ptr32)
  Class: Eq_331
  DataType: 
  OrigDataType: 
T_332: (in Mem40[0x0040313C:word32] : word32)
  Class: Eq_132
  DataType: 
  OrigDataType: 
T_333: (in 0x00403138 : ptr32)
  Class: Eq_333
  DataType: 
  OrigDataType: 
T_334: (in Mem42[0x00403138:word32] : word32)
  Class: Eq_133
  DataType: 
  OrigDataType: 
T_335: (in 0x00403134 : ptr32)
  Class: Eq_335
  DataType: 
  OrigDataType: 
T_336: (in Mem44[0x00403134:word32] : word32)
  Class: Eq_134
  DataType: 
  OrigDataType: 
T_337: (in 0x00403130 : ptr32)
  Class: Eq_337
  DataType: 
  OrigDataType: 
T_338: (in Mem46[0x00403130:word32] : word32)
  Class: Eq_136
  DataType: 
  OrigDataType: 
T_339: (in 0x0040312C : ptr32)
  Class: Eq_339
  DataType: 
  OrigDataType: 
T_340: (in Mem47[0x0040312C:word32] : word32)
  Class: Eq_137
  DataType: 
  OrigDataType: 
T_341: (in ss : selector)
  Class: Eq_341
  DataType: 
  OrigDataType: 
T_342: (in 0x00403158 : ptr32)
  Class: Eq_342
  DataType: 
  OrigDataType: 
T_343: (in Mem49[0x00403158:word16] : word16)
  Class: Eq_341
  DataType: 
  OrigDataType: 
T_344: (in cs : selector)
  Class: Eq_344
  DataType: 
  OrigDataType: 
T_345: (in 0x0040314C : ptr32)
  Class: Eq_345
  DataType: 
  OrigDataType: 
T_346: (in Mem51[0x0040314C:word16] : word16)
  Class: Eq_344
  DataType: 
  OrigDataType: 
T_347: (in 0x00403128 : ptr32)
  Class: Eq_347
  DataType: 
  OrigDataType: 
T_348: (in Mem53[0x00403128:word16] : word16)
  Class: Eq_139
  DataType: 
  OrigDataType: 
T_349: (in 0x00403124 : ptr32)
  Class: Eq_349
  DataType: 
  OrigDataType: 
T_350: (in Mem55[0x00403124:word16] : word16)
  Class: Eq_138
  DataType: 
  OrigDataType: 
T_351: (in 0x00403120 : ptr32)
  Class: Eq_351
  DataType: 
  OrigDataType: 
T_352: (in Mem57[0x00403120:word16] : word16)
  Class: Eq_140
  DataType: 
  OrigDataType: 
T_353: (in 0x0040311C : ptr32)
  Class: Eq_353
  DataType: 
  OrigDataType: 
T_354: (in Mem59[0x0040311C:word16] : word16)
  Class: Eq_141
  DataType: 
  OrigDataType: 
T_355: (in fp : ptr32)
  Class: Eq_355
  DataType: 
  OrigDataType: 
T_356: (in 0x0000032C : word32)
  Class: Eq_356
  DataType: 
  OrigDataType: 
T_357: (in fp - 0x0000032C : word32)
  Class: Eq_357
  DataType: 
  OrigDataType: 
T_358: (in cond(fp - 0x0000032C) : byte)
  Class: Eq_358
  DataType: 
  OrigDataType: 
T_359: (in 0x00403150 : ptr32)
  Class: Eq_359
  DataType: 
  OrigDataType: 
T_360: (in Mem62[0x00403150:word32] : word32)
  Class: Eq_358
  DataType: 
  OrigDataType: 
T_361: (in 0x00403144 : ptr32)
  Class: Eq_361
  DataType: 
  OrigDataType: 
T_362: (in Mem65[0x00403144:word32] : word32)
  Class: Eq_135
  DataType: 
  OrigDataType: 
T_363: (in dwArg00 : word32)
  Class: Eq_363
  DataType: 
  OrigDataType: 
T_364: (in 0x00403148 : ptr32)
  Class: Eq_364
  DataType: 
  OrigDataType: 
T_365: (in Mem68[0x00403148:word32] : word32)
  Class: Eq_363
  DataType: 
  OrigDataType: 
T_366: (in 0x00000004 : word32)
  Class: Eq_366
  DataType: 
  OrigDataType: 
T_367: (in fp + 0x00000004 : word32)
  Class: Eq_367
  DataType: 
  OrigDataType: 
T_368: (in 0x00403154 : ptr32)
  Class: Eq_368
  DataType: 
  OrigDataType: 
T_369: (in Mem70[0x00403154:word32] : word32)
  Class: Eq_367
  DataType: 
  OrigDataType: 
T_370: (in 0x00010001 : word32)
  Class: Eq_370
  DataType: 
  OrigDataType: 
T_371: (in 0x00403090 : ptr32)
  Class: Eq_371
  DataType: 
  OrigDataType: 
T_372: (in Mem73[0x00403090:word32] : word32)
  Class: Eq_370
  DataType: 
  OrigDataType: 
T_373: (in 0x00403148 : ptr32)
  Class: Eq_373
  DataType: 
  OrigDataType: 
T_374: (in Mem73[0x00403148:word32] : word32)
  Class: Eq_374
  DataType: 
  OrigDataType: 
T_375: (in 0x00403044 : ptr32)
  Class: Eq_375
  DataType: 
  OrigDataType: 
T_376: (in Mem75[0x00403044:word32] : word32)
  Class: Eq_374
  DataType: 
  OrigDataType: 
T_377: (in 0xC0000409 : word32)
  Class: Eq_377
  DataType: 
  OrigDataType: 
T_378: (in 0x00403038 : ptr32)
  Class: Eq_378
  DataType: 
  OrigDataType: 
T_379: (in Mem76[0x00403038:word32] : word32)
  Class: Eq_377
  DataType: 
  OrigDataType: 
T_380: (in 0x00000001 : word32)
  Class: Eq_380
  DataType: 
  OrigDataType: 
T_381: (in 0x0040303C : ptr32)
  Class: Eq_381
  DataType: 
  OrigDataType: 
T_382: (in Mem77[0x0040303C:word32] : word32)
  Class: Eq_380
  DataType: 
  OrigDataType: 
T_383: (in IsDebuggerPresent : ptr32)
  Class: Eq_383
  DataType: 
  OrigDataType: 
T_384: (in signature of IsDebuggerPresent : void)
  Class: Eq_383
  DataType: 
  OrigDataType: 
T_385: (in IsDebuggerPresent() : word32)
  Class: Eq_385
  DataType: 
  OrigDataType: 
T_386: (in 0x00403088 : ptr32)
  Class: Eq_386
  DataType: 
  OrigDataType: 
T_387: (in Mem83[0x00403088:word32] : word32)
  Class: Eq_385
  DataType: 
  OrigDataType: 
T_388: (in _crt_debugger_hook : ptr32)
  Class: Eq_388
  DataType: 
  OrigDataType: 
T_389: (in signature of _crt_debugger_hook : void)
  Class: Eq_388
  DataType: 
  OrigDataType: 
T_390: (in SetUnhandledExceptionFilter : ptr32)
  Class: Eq_390
  DataType: 
  OrigDataType: 
T_391: (in signature of SetUnhandledExceptionFilter : void)
  Class: Eq_390
  DataType: 
  OrigDataType: 
T_392: (in lpTopLevelExceptionFilter : LPTOP_LEVEL_EXCEPTION_FILTER)
  Class: Eq_392
  DataType: 
  OrigDataType: 
T_393: (in 0x00000000 : word32)
  Class: Eq_392
  DataType: 
  OrigDataType: 
T_394: (in SetUnhandledExceptionFilter(0x00000000) : word32)
  Class: Eq_394
  DataType: 
  OrigDataType: 
T_395: (in UnhandledExceptionFilter : ptr32)
  Class: Eq_395
  DataType: 
  OrigDataType: 
T_396: (in signature of UnhandledExceptionFilter : void)
  Class: Eq_395
  DataType: 
  OrigDataType: 
T_397: (in ExceptionInfo : (ptr (struct "_EXCEPTION_POINTERS")))
  Class: Eq_397
  DataType: 
  OrigDataType: 
T_398: (in 0x004020FC : word32)
  Class: Eq_397
  DataType: 
  OrigDataType: 
T_399: (in UnhandledExceptionFilter(0x004020FC) : word32)
  Class: Eq_399
  DataType: 
  OrigDataType: 
T_400: (in esp_115 : word32)
  Class: Eq_400
  DataType: 
  OrigDataType: 
T_401: (in 0xFFFFFCD0 : word32)
  Class: Eq_401
  DataType: 
  OrigDataType: 
T_402: (in fp + 0xFFFFFCD0 : word32)
  Class: Eq_400
  DataType: 
  OrigDataType: 
T_403: (in 0x00403088 : ptr32)
  Class: Eq_403
  DataType: 
  OrigDataType: 
T_404: (in Mem83[0x00403088:word32] : word32)
  Class: Eq_404
  DataType: 
  OrigDataType: 
T_405: (in 0x00000000 : word32)
  Class: Eq_404
  DataType: 
  OrigDataType: 
T_406: (in Mem83[0x00403088:word32] != 0x00000000 : bool)
  Class: Eq_406
  DataType: 
  OrigDataType: 
T_407: (in esp_116 : word32)
  Class: Eq_407
  DataType: 
  OrigDataType: 
T_408: (in 0x00000004 : word32)
  Class: Eq_408
  DataType: 
  OrigDataType: 
T_409: (in esp_115 - 0x00000004 : word32)
  Class: Eq_407
  DataType: 
  OrigDataType: 
T_410: (in 0xC0000409 : word32)
  Class: Eq_410
  DataType: 
  OrigDataType: 
T_411: (in 0x00000000 : word32)
  Class: Eq_411
  DataType: 
  OrigDataType: 
T_412: (in esp_116 + 0x00000000 : word32)
  Class: Eq_412
  DataType: 
  OrigDataType: 
T_413: (in Mem117[esp_116 + 0x00000000:word32] : word32)
  Class: Eq_410
  DataType: 
  OrigDataType: 
T_414: (in GetCurrentProcess : ptr32)
  Class: Eq_414
  DataType: 
  OrigDataType: 
T_415: (in signature of GetCurrentProcess : void)
  Class: Eq_414
  DataType: 
  OrigDataType: 
T_416: (in GetCurrentProcess() : word32)
  Class: Eq_416
  DataType: 
  OrigDataType: 
T_417: (in 0x00000004 : word32)
  Class: Eq_417
  DataType: 
  OrigDataType: 
T_418: (in esp_116 - 0x00000004 : word32)
  Class: Eq_418
  DataType: 
  OrigDataType: 
T_419: (in Mem120[esp_116 - 0x00000004:word32] : word32)
  Class: Eq_416
  DataType: 
  OrigDataType: 
T_420: (in TerminateProcess : ptr32)
  Class: Eq_420
  DataType: 
  OrigDataType: 
T_421: (in signature of TerminateProcess : void)
  Class: Eq_420
  DataType: 
  OrigDataType: 
T_422: (in hProcess : HANDLE)
  Class: Eq_422
  DataType: 
  OrigDataType: 
T_423: (in uExitCode : UINT)
  Class: Eq_423
  DataType: 
  OrigDataType: 
T_424: (in esp_116 - 0x00000004 : word32)
  Class: Eq_424
  DataType: 
  OrigDataType: 
T_425: (in Mem120[esp_116 - 0x00000004:HANDLE] : HANDLE)
  Class: Eq_422
  DataType: 
  OrigDataType: 
T_426: (in 0x00000000 : word32)
  Class: Eq_426
  DataType: 
  OrigDataType: 
T_427: (in esp_116 + 0x00000000 : word32)
  Class: Eq_427
  DataType: 
  OrigDataType: 
T_428: (in Mem120[esp_116 + 0x00000000:UINT] : UINT)
  Class: Eq_423
  DataType: 
  OrigDataType: 
T_429: (in TerminateProcess(Mem120[esp_116 - 0x00000004:HANDLE], Mem120[esp_116 + 0x00000000:UINT]) : word32)
  Class: Eq_429
  DataType: 
  OrigDataType: 
T_430: (in 0x00000001 : word32)
  Class: Eq_430
  DataType: 
  OrigDataType: 
T_431: (in 0xFFFFFCCC : word32)
  Class: Eq_431
  DataType: 
  OrigDataType: 
T_432: (in fp + 0xFFFFFCCC : word32)
  Class: Eq_432
  DataType: 
  OrigDataType: 
T_433: (in Mem126[fp + 0xFFFFFCCC:word32] : word32)
  Class: Eq_430
  DataType: 
  OrigDataType: 
T_434: (in _crt_debugger_hook : ptr32)
  Class: Eq_434
  DataType: 
  OrigDataType: 
T_435: (in signature of _crt_debugger_hook : void)
  Class: Eq_434
  DataType: 
  OrigDataType: 
T_436: (in 0xFFFFFCCC : word32)
  Class: Eq_436
  DataType: 
  OrigDataType: 
T_437: (in fp + 0xFFFFFCCC : word32)
  Class: Eq_400
  DataType: 
  OrigDataType: 
T_438: (in fn00401968 : ptr32)
  Class: Eq_438
  DataType: 
  OrigDataType: 
T_439: (in signature of fn00401968 : void)
  Class: Eq_438
  DataType: 
  OrigDataType: 
T_440: (in fn00401968() : void)
  Class: Eq_440
  DataType: 
  OrigDataType: 
T_441: (in ebp_11 : word32)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_442: (in fn004018BC : ptr32)
  Class: Eq_442
  DataType: 
  OrigDataType: 
T_443: (in signature of fn004018BC : void)
  Class: Eq_442
  DataType: 
  OrigDataType: 
T_444: (in ebx : word32)
  Class: Eq_444
  DataType: 
  OrigDataType: 
T_445: (in esi : word32)
  Class: Eq_445
  DataType: 
  OrigDataType: 
T_446: (in edi : word32)
  Class: Eq_446
  DataType: 
  OrigDataType: 
T_447: (in fs : selector)
  Class: Eq_140
  DataType: 
  OrigDataType: 
T_448: (in dwArg00 : word32)
  Class: Eq_448
  DataType: 
  OrigDataType: 
T_449: (in dwArg04 : word32)
  Class: Eq_449
  DataType: 
  OrigDataType: 
T_450: (in dwArg08 : word32)
  Class: Eq_450
  DataType: 
  OrigDataType: 
T_451: (in ebx : word32)
  Class: Eq_444
  DataType: 
  OrigDataType: 
T_452: (in esi : word32)
  Class: Eq_445
  DataType: 
  OrigDataType: 
T_453: (in edi : word32)
  Class: Eq_446
  DataType: 
  OrigDataType: 
T_454: (in fs : selector)
  Class: Eq_140
  DataType: 
  OrigDataType: 
T_455: (in dwLoc0C : word32)
  Class: Eq_448
  DataType: 
  OrigDataType: 
T_456: (in 0x004021D8 : word32)
  Class: Eq_449
  DataType: 
  OrigDataType: 
T_457: (in 0x00000010 : word32)
  Class: Eq_450
  DataType: 
  OrigDataType: 
T_458: (in fn004018BC(ebx, esi, edi, fs, dwLoc0C, 0x004021D8, 0x00000010) : word32)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_459: (in 0x00000000 : word32)
  Class: Eq_459
  DataType: 
  OrigDataType: 
T_460: (in 0x00000004 : word32)
  Class: Eq_460
  DataType: 
  OrigDataType: 
T_461: (in ebp_11 - 0x00000004 : word32)
  Class: Eq_461
  DataType: 
  OrigDataType: 
T_462: (in Mem15[ebp_11 - 0x00000004:word32] : word32)
  Class: Eq_459
  DataType: 
  OrigDataType: 
T_463: (in esi_17 : word32)
  Class: Eq_463
  DataType: 
  OrigDataType: 
T_464: (in 0x00000018 : word32)
  Class: Eq_464
  DataType: 
  OrigDataType: 
T_465: (in Mem15[fs:0x00000018:word32] : word32)
  Class: Eq_465
  DataType: 
  OrigDataType: 
T_466: (in 0x00000004 : word32)
  Class: Eq_466
  DataType: 
  OrigDataType: 
T_467: (in Mem15[fs:0x00000018:word32] + 0x00000004 : word32)
  Class: Eq_467
  DataType: 
  OrigDataType: 
T_468: (in Mem15[Mem15[fs:0x00000018:word32] + 0x00000004:word32] : word32)
  Class: Eq_463
  DataType: 
  OrigDataType: 
T_469: (in 0x00000000 : word32)
  Class: Eq_469
  DataType: 
  OrigDataType: 
T_470: (in 0x0000001C : word32)
  Class: Eq_470
  DataType: 
  OrigDataType: 
T_471: (in ebp_11 - 0x0000001C : word32)
  Class: Eq_471
  DataType: 
  OrigDataType: 
T_472: (in Mem18[ebp_11 - 0x0000001C:word32] : word32)
  Class: Eq_469
  DataType: 
  OrigDataType: 
T_473: (in esp_20 : word32)
  Class: Eq_473
  DataType: 
  OrigDataType: 
T_474: (in fp : ptr32)
  Class: Eq_474
  DataType: 
  OrigDataType: 
T_475: (in 0x00000008 : word32)
  Class: Eq_475
  DataType: 
  OrigDataType: 
T_476: (in fp - 0x00000008 : word32)
  Class: Eq_473
  DataType: 
  OrigDataType: 
T_477: (in 0x00000001 : word32)
  Class: Eq_477
  DataType: 
  OrigDataType: 
T_478: (in esi_235 : word32)
  Class: Eq_477
  DataType: 
  OrigDataType: 
T_479: (in eax_27 : word32)
  Class: Eq_463
  DataType: 
  OrigDataType: 
T_480: (in eax_27 != esi_17 : bool)
  Class: Eq_480
  DataType: 
  OrigDataType: 
T_481: (in 0x000003E8 : word32)
  Class: Eq_481
  DataType: 
  OrigDataType: 
T_482: (in esp_21 : word32)
  Class: Eq_482
  DataType: 
  OrigDataType: 
T_483: (in 0x00000000 : word32)
  Class: Eq_483
  DataType: 
  OrigDataType: 
T_484: (in esp_21 + 0x00000000 : word32)
  Class: Eq_484
  DataType: 
  OrigDataType: 
T_485: (in Mem239[esp_21 + 0x00000000:word32] : word32)
  Class: Eq_481
  DataType: 
  OrigDataType: 
T_486: (in Sleep : ptr32)
  Class: Eq_486
  DataType: 
  OrigDataType: 
T_487: (in signature of Sleep : void)
  Class: Eq_486
  DataType: 
  OrigDataType: 
T_488: (in dwMilliseconds : DWORD)
  Class: Eq_488
  DataType: 
  OrigDataType: 
T_489: (in 0x00000000 : word32)
  Class: Eq_489
  DataType: 
  OrigDataType: 
T_490: (in esp_21 + 0x00000000 : word32)
  Class: Eq_490
  DataType: 
  OrigDataType: 
T_491: (in Mem239[esp_21 + 0x00000000:DWORD] : DWORD)
  Class: Eq_488
  DataType: 
  OrigDataType: 
T_492: (in Sleep(Mem239[esp_21 + 0x00000000:DWORD]) : void)
  Class: Eq_492
  DataType: 
  OrigDataType: 
T_493: (in 0x00000004 : word32)
  Class: Eq_493
  DataType: 
  OrigDataType: 
T_494: (in esp_21 + 0x00000004 : word32)
  Class: Eq_473
  DataType: 
  OrigDataType: 
T_495: (in 0x00000001 : word32)
  Class: Eq_495
  DataType: 
  OrigDataType: 
T_496: (in 0x0000001C : word32)
  Class: Eq_496
  DataType: 
  OrigDataType: 
T_497: (in ebp_11 - 0x0000001C : word32)
  Class: Eq_497
  DataType: 
  OrigDataType: 
T_498: (in Mem237[ebp_11 - 0x0000001C:word32] : word32)
  Class: Eq_495
  DataType: 
  OrigDataType: 
T_499: (in 0x00000001 : word32)
  Class: Eq_477
  DataType: 
  OrigDataType: 
T_500: (in 0x00403370 : ptr32)
  Class: Eq_500
  DataType: 
  OrigDataType: 
T_501: (in Mem26[0x00403370:word32] : word32)
  Class: Eq_477
  DataType: 
  OrigDataType: 
T_502: (in Mem26[0x00403370:word32] != esi_235 : bool)
  Class: Eq_502
  DataType: 
  OrigDataType: 
T_503: (in eax_210 : word32)
  Class: Eq_503
  DataType: 
  OrigDataType: 
T_504: (in 0x00403370 : ptr32)
  Class: Eq_504
  DataType: 
  OrigDataType: 
T_505: (in Mem26[0x00403370:word32] : word32)
  Class: Eq_503
  DataType: 
  OrigDataType: 
T_506: (in 0x00000000 : word32)
  Class: Eq_503
  DataType: 
  OrigDataType: 
T_507: (in eax_210 != 0x00000000 : bool)
  Class: Eq_507
  DataType: 
  OrigDataType: 
T_508: (in 0x0000001F : word32)
  Class: Eq_508
  DataType: 
  OrigDataType: 
T_509: (in 0x00000000 : word32)
  Class: Eq_509
  DataType: 
  OrigDataType: 
T_510: (in esp_21 + 0x00000000 : word32)
  Class: Eq_510
  DataType: 
  OrigDataType: 
T_511: (in Mem202[esp_21 + 0x00000000:word32] : word32)
  Class: Eq_508
  DataType: 
  OrigDataType: 
T_512: (in _amsg_exit : ptr32)
  Class: Eq_512
  DataType: 
  OrigDataType: 
T_513: (in signature of _amsg_exit : void)
  Class: Eq_512
  DataType: 
  OrigDataType: 
T_514: (in esp_102 : word32)
  Class: Eq_482
  DataType: 
  OrigDataType: 
T_515: (in 0x00403370 : ptr32)
  Class: Eq_515
  DataType: 
  OrigDataType: 
T_516: (in Mem26[0x00403370:word32] : word32)
  Class: Eq_477
  DataType: 
  OrigDataType: 
T_517: (in Mem26[0x00403370:word32] != esi_235 : bool)
  Class: Eq_517
  DataType: 
  OrigDataType: 
T_518: (in 0x00000004 : word32)
  Class: Eq_518
  DataType: 
  OrigDataType: 
T_519: (in esp_20 - 0x00000004 : word32)
  Class: Eq_482
  DataType: 
  OrigDataType: 
T_520: (in 0x00000000 : word32)
  Class: Eq_520
  DataType: 
  OrigDataType: 
T_521: (in 0x00000000 : word32)
  Class: Eq_521
  DataType: 
  OrigDataType: 
T_522: (in esp_21 + 0x00000000 : word32)
  Class: Eq_522
  DataType: 
  OrigDataType: 
T_523: (in Mem22[esp_21 + 0x00000000:word32] : word32)
  Class: Eq_520
  DataType: 
  OrigDataType: 
T_524: (in 0x00000004 : word32)
  Class: Eq_524
  DataType: 
  OrigDataType: 
T_525: (in esp_21 - 0x00000004 : word32)
  Class: Eq_525
  DataType: 
  OrigDataType: 
T_526: (in Mem24[esp_21 - 0x00000004:word32] : word32)
  Class: Eq_463
  DataType: 
  OrigDataType: 
T_527: (in 0x00403374 : ptr32)
  Class: Eq_527
  DataType: 
  OrigDataType: 
T_528: (in 0x00000008 : word32)
  Class: Eq_528
  DataType: 
  OrigDataType: 
T_529: (in esp_21 - 0x00000008 : word32)
  Class: Eq_529
  DataType: 
  OrigDataType: 
T_530: (in Mem26[esp_21 - 0x00000008:word32] : word32)
  Class: Eq_527
  DataType: 
  OrigDataType: 
T_531: (in InterlockedCompareExchange : ptr32)
  Class: Eq_531
  DataType: 
  OrigDataType: 
T_532: (in signature of InterlockedCompareExchange : void)
  Class: Eq_531
  DataType: 
  OrigDataType: 
T_533: (in Destination : (ptr LONG))
  Class: Eq_533
  DataType: 
  OrigDataType: 
T_534: (in Exchange : LONG)
  Class: Eq_534
  DataType: 
  OrigDataType: 
T_535: (in Comperand : LONG)
  Class: Eq_535
  DataType: 
  OrigDataType: 
T_536: (in esp_21 - 0x00000008 : word32)
  Class: Eq_536
  DataType: 
  OrigDataType: 
T_537: (in Mem26[esp_21 - 0x00000008:(ptr LONG)] : (ptr LONG))
  Class: Eq_533
  DataType: 
  OrigDataType: 
T_538: (in 4 : int32)
  Class: Eq_538
  DataType: 
  OrigDataType: 
T_539: (in esp_21 - 4 : word32)
  Class: Eq_539
  DataType: 
  OrigDataType: 
T_540: (in Mem26[esp_21 - 4:LONG] : LONG)
  Class: Eq_534
  DataType: 
  OrigDataType: 
T_541: (in 0x00000000 : word32)
  Class: Eq_541
  DataType: 
  OrigDataType: 
T_542: (in esp_21 + 0x00000000 : word32)
  Class: Eq_542
  DataType: 
  OrigDataType: 
T_543: (in Mem26[esp_21 + 0x00000000:LONG] : LONG)
  Class: Eq_535
  DataType: 
  OrigDataType: 
T_544: (in InterlockedCompareExchange(Mem26[esp_21 - 0x00000008:(ptr LONG)], Mem26[esp_21 - 4:LONG], Mem26[esp_21 + 0x00000000:LONG]) : word32)
  Class: Eq_463
  DataType: 
  OrigDataType: 
T_545: (in 0x00000004 : word32)
  Class: Eq_545
  DataType: 
  OrigDataType: 
T_546: (in esp_21 + 0x00000004 : word32)
  Class: Eq_482
  DataType: 
  OrigDataType: 
T_547: (in 0x00000000 : word32)
  Class: Eq_463
  DataType: 
  OrigDataType: 
T_548: (in eax_27 == 0x00000000 : bool)
  Class: Eq_548
  DataType: 
  OrigDataType: 
T_549: (in 0x00403034 : ptr32)
  Class: Eq_549
  DataType: 
  OrigDataType: 
T_550: (in Mem229[0x00403034:word32] : word32)
  Class: Eq_477
  DataType: 
  OrigDataType: 
T_551: (in 0x00403370 : ptr32)
  Class: Eq_551
  DataType: 
  OrigDataType: 
T_552: (in Mem214[0x00403370:word32] : word32)
  Class: Eq_477
  DataType: 
  OrigDataType: 
T_553: (in 0x004020DC : word32)
  Class: Eq_553
  DataType: 
  OrigDataType: 
T_554: (in 0x00000000 : word32)
  Class: Eq_554
  DataType: 
  OrigDataType: 
T_555: (in esp_21 + 0x00000000 : word32)
  Class: Eq_555
  DataType: 
  OrigDataType: 
T_556: (in Mem216[esp_21 + 0x00000000:word32] : word32)
  Class: Eq_553
  DataType: 
  OrigDataType: 
T_557: (in 0x004020D0 : word32)
  Class: Eq_557
  DataType: 
  OrigDataType: 
T_558: (in 0x00000004 : word32)
  Class: Eq_558
  DataType: 
  OrigDataType: 
T_559: (in esp_21 - 0x00000004 : word32)
  Class: Eq_559
  DataType: 
  OrigDataType: 
T_560: (in Mem218[esp_21 - 0x00000004:word32] : word32)
  Class: Eq_557
  DataType: 
  OrigDataType: 
T_561: (in _initterm_e : ptr32)
  Class: Eq_561
  DataType: 
  OrigDataType: 
T_562: (in signature of _initterm_e : void)
  Class: Eq_561
  DataType: 
  OrigDataType: 
T_563: (in 0x00000000 : word32)
  Class: Eq_503
  DataType: 
  OrigDataType: 
T_564: (in eax_210 == 0x00000000 : bool)
  Class: Eq_564
  DataType: 
  OrigDataType: 
T_565: (in 0xFFFFFFFE : word32)
  Class: Eq_565
  DataType: 
  OrigDataType: 
T_566: (in 0x00000004 : word32)
  Class: Eq_566
  DataType: 
  OrigDataType: 
T_567: (in ebp_11 - 0x00000004 : word32)
  Class: Eq_567
  DataType: 
  OrigDataType: 
T_568: (in Mem227[ebp_11 - 0x00000004:word32] : word32)
  Class: Eq_565
  DataType: 
  OrigDataType: 
T_569: (in fn00401901 : ptr32)
  Class: Eq_569
  DataType: 
  OrigDataType: 
T_570: (in signature of fn00401901 : void)
  Class: Eq_569
  DataType: 
  OrigDataType: 
T_571: (in ebp : word32)
  Class: Eq_441
  DataType: 
  OrigDataType: 
T_572: (in fs : selector)
  Class: Eq_140
  DataType: 
  OrigDataType: 
T_573: (in dwArg00 : word32)
  Class: Eq_573
  DataType: 
  OrigDataType: 
T_574: (in dwArg04 : word32)
  Class: Eq_574
  DataType: 
  OrigDataType: 
T_575: (in dwArg08 : word32)
  Class: Eq_575
  DataType: 
  OrigDataType: 
T_576: (in dwArg0C : word32)
  Class: Eq_576
  DataType: 
  OrigDataType: 
T_577: (in dwArg10 : word32)
  Class: Eq_577
  DataType: 
  OrigDataType: 
T_578: (in 0x00000010 : word32)
  Class: Eq_573
  DataType: 
  OrigDataType: 
T_579: (in dwArg00 : word32)
  Class: Eq_574
  DataType: 
  OrigDataType: 
T_580: (in dwArg04 : word32)
  Class: Eq_575
  DataType: 
  OrigDataType: 
T_581: (in dwArg08 : word32)
  Class: Eq_576
  DataType: 
  OrigDataType: 
T_582: (in dwArg0C : word32)
  Class: Eq_577
  DataType: 
  OrigDataType: 
T_583: (in fn00401901(ebp_11, fs, 0x00000010, dwArg00, dwArg04, dwArg08, dwArg0C) : void)
  Class: Eq_583
  DataType: 
  OrigDataType: 
T_584: (in 0x0000001C : word32)
  Class: Eq_584
  DataType: 
  OrigDataType: 
T_585: (in ebp_11 - 0x0000001C : word32)
  Class: Eq_585
  DataType: 
  OrigDataType: 
T_586: (in Mem26[ebp_11 - 0x0000001C:word32] : word32)
  Class: Eq_586
  DataType: 
  OrigDataType: 
T_587: (in 0x00000000 : word32)
  Class: Eq_586
  DataType: 
  OrigDataType: 
T_588: (in Mem26[ebp_11 - 0x0000001C:word32] != 0x00000000 : bool)
  Class: Eq_588
  DataType: 
  OrigDataType: 
T_589: (in esp_191 : word32)
  Class: Eq_482
  DataType: 
  OrigDataType: 
T_590: (in 0x00000004 : word32)
  Class: Eq_590
  DataType: 
  OrigDataType: 
T_591: (in esp_102 - 0x00000004 : word32)
  Class: Eq_482
  DataType: 
  OrigDataType: 
T_592: (in 0x004020CC : word32)
  Class: Eq_592
  DataType: 
  OrigDataType: 
T_593: (in 0x00000000 : word32)
  Class: Eq_593
  DataType: 
  OrigDataType: 
T_594: (in esp_191 + 0x00000000 : word32)
  Class: Eq_594
  DataType: 
  OrigDataType: 
T_595: (in Mem192[esp_191 + 0x00000000:word32] : word32)
  Class: Eq_592
  DataType: 
  OrigDataType: 
T_596: (in 0x004020C4 : word32)
  Class: Eq_596
  DataType: 
  OrigDataType: 
T_597: (in 0x00000004 : word32)
  Class: Eq_597
  DataType: 
  OrigDataType: 
T_598: (in esp_191 - 0x00000004 : word32)
  Class: Eq_598
  DataType: 
  OrigDataType: 
T_599: (in Mem194[esp_191 - 0x00000004:word32] : word32)
  Class: Eq_596
  DataType: 
  OrigDataType: 
T_600: (in _initterm : ptr32)
  Class: Eq_600
  DataType: 
  OrigDataType: 
T_601: (in signature of _initterm : void)
  Class: Eq_600
  DataType: 
  OrigDataType: 
T_602: (in 0x00000002 : word32)
  Class: Eq_602
  DataType: 
  OrigDataType: 
T_603: (in 0x00403370 : ptr32)
  Class: Eq_603
  DataType: 
  OrigDataType: 
T_604: (in Mem200[0x00403370:word32] : word32)
  Class: Eq_602
  DataType: 
  OrigDataType: 
T_605: (in 0x00403380 : ptr32)
  Class: Eq_605
  DataType: 
  OrigDataType: 
T_606: (in Mem26[0x00403380:word32] : word32)
  Class: Eq_606
  DataType: 
  OrigDataType: 
T_607: (in 0x00000000 : word32)
  Class: Eq_606
  DataType: 
  OrigDataType: 
T_608: (in Mem26[0x00403380:word32] == 0x00000000 : bool)
  Class: Eq_608
  DataType: 
  OrigDataType: 
T_609: (in esp_185 : word32)
  Class: Eq_609
  DataType: 
  OrigDataType: 
T_610: (in 0x00000004 : word32)
  Class: Eq_610
  DataType: 
  OrigDataType: 
T_611: (in esp_102 - 0x00000004 : word32)
  Class: Eq_609
  DataType: 
  OrigDataType: 
T_612: (in 0x00000000 : word32)
  Class: Eq_612
  DataType: 
  OrigDataType: 
T_613: (in 0x00000000 : word32)
  Class: Eq_613
  DataType: 
  OrigDataType: 
T_614: (in esp_185 + 0x00000000 : word32)
  Class: Eq_614
  DataType: 
  OrigDataType: 
T_615: (in Mem186[esp_185 + 0x00000000:word32] : word32)
  Class: Eq_612
  DataType: 
  OrigDataType: 
T_616: (in 0x00403374 : ptr32)
  Class: Eq_616
  DataType: 
  OrigDataType: 
T_617: (in 0x00000004 : word32)
  Class: Eq_617
  DataType: 
  OrigDataType: 
T_618: (in esp_185 - 0x00000004 : word32)
  Class: Eq_618
  DataType: 
  OrigDataType: 
T_619: (in Mem188[esp_185 - 0x00000004:word32] : word32)
  Class: Eq_616
  DataType: 
  OrigDataType: 
T_620: (in InterlockedExchange : ptr32)
  Class: Eq_620
  DataType: 
  OrigDataType: 
T_621: (in signature of InterlockedExchange : void)
  Class: Eq_620
  DataType: 
  OrigDataType: 
T_622: (in Target : (ptr LONG))
  Class: Eq_622
  DataType: 
  OrigDataType: 
T_623: (in Value : LONG)
  Class: Eq_623
  DataType: 
  OrigDataType: 
T_624: (in esp_185 - 0x00000004 : word32)
  Class: Eq_624
  DataType: 
  OrigDataType: 
T_625: (in Mem188[esp_185 - 0x00000004:(ptr LONG)] : (ptr LONG))
  Class: Eq_622
  DataType: 
  OrigDataType: 
T_626: (in 0x00000000 : word32)
  Class: Eq_626
  DataType: 
  OrigDataType: 
T_627: (in esp_185 + 0x00000000 : word32)
  Class: Eq_627
  DataType: 
  OrigDataType: 
T_628: (in Mem188[esp_185 + 0x00000000:LONG] : LONG)
  Class: Eq_623
  DataType: 
  OrigDataType: 
T_629: (in InterlockedExchange(Mem188[esp_185 - 0x00000004:(ptr LONG)], Mem188[esp_185 + 0x00000000:LONG]) : word32)
  Class: Eq_629
  DataType: 
  OrigDataType: 
T_630: (in 0x00000004 : word32)
  Class: Eq_630
  DataType: 
  OrigDataType: 
T_631: (in esp_185 + 0x00000004 : word32)
  Class: Eq_482
  DataType: 
  OrigDataType: 
T_632: (in 0x0040301C : ptr32)
  Class: Eq_632
  DataType: 
  OrigDataType: 
T_633: (in Mem26[0x0040301C:word32] : word32)
  Class: Eq_633
  DataType: 
  OrigDataType: 
T_634: (in __initenv : ptr32)
  Class: Eq_634
  DataType: 
  OrigDataType: 
T_635: (in signature of __initenv : void)
  Class: Eq_634
  DataType: 
  OrigDataType: 
T_636: (in Mem121[__initenv:word32] : word32)
  Class: Eq_633
  DataType: 
  OrigDataType: 
T_637: (in esp_122 : word32)
  Class: Eq_637
  DataType: 
  OrigDataType: 
T_638: (in 0x00000004 : word32)
  Class: Eq_638
  DataType: 
  OrigDataType: 
T_639: (in esp_102 - 0x00000004 : word32)
  Class: Eq_637
  DataType: 
  OrigDataType: 
T_640: (in 0x0040301C : ptr32)
  Class: Eq_640
  DataType: 
  OrigDataType: 
T_641: (in Mem121[0x0040301C:word32] : word32)
  Class: Eq_641
  DataType: 
  OrigDataType: 
T_642: (in 0x00000000 : word32)
  Class: Eq_642
  DataType: 
  OrigDataType: 
T_643: (in esp_122 + 0x00000000 : word32)
  Class: Eq_643
  DataType: 
  OrigDataType: 
T_644: (in Mem123[esp_122 + 0x00000000:word32] : word32)
  Class: Eq_641
  DataType: 
  OrigDataType: 
T_645: (in 0x00403020 : ptr32)
  Class: Eq_645
  DataType: 
  OrigDataType: 
T_646: (in Mem123[0x00403020:word32] : word32)
  Class: Eq_646
  DataType: 
  OrigDataType: 
T_647: (in 0x00000004 : word32)
  Class: Eq_647
  DataType: 
  OrigDataType: 
T_648: (in esp_122 - 0x00000004 : word32)
  Class: Eq_648
  DataType: 
  OrigDataType: 
T_649: (in Mem125[esp_122 - 0x00000004:word32] : word32)
  Class: Eq_646
  DataType: 
  OrigDataType: 
T_650: (in 0x00403018 : ptr32)
  Class: Eq_650
  DataType: 
  OrigDataType: 
T_651: (in Mem125[0x00403018:word32] : word32)
  Class: Eq_651
  DataType: 
  OrigDataType: 
T_652: (in 0x00000008 : word32)
  Class: Eq_652
  DataType: 
  OrigDataType: 
T_653: (in esp_122 - 0x00000008 : word32)
  Class: Eq_653
  DataType: 
  OrigDataType: 
T_654: (in Mem127[esp_122 - 0x00000008:word32] : word32)
  Class: Eq_651
  DataType: 
  OrigDataType: 
T_655: (in ebx_128 : word32)
  Class: Eq_655
  DataType: 
  OrigDataType: 
T_656: (in eax_130 : word32)
  Class: Eq_656
  DataType: 
  OrigDataType: 
T_657: (in fn00401200 : ptr32)
  Class: Eq_657
  DataType: 
  OrigDataType: 
T_658: (in signature of fn00401200 : void)
  Class: Eq_657
  DataType: 
  OrigDataType: 
T_659: (in dwArg04 : word32)
  Class: Eq_574
  DataType: 
  OrigDataType: 
T_660: (in edx : word32)
  Class: Eq_133
  DataType: 
  OrigDataType: 
T_661: (in es : selector)
  Class: Eq_138
  DataType: 
  OrigDataType: 
T_662: (in ds : selector)
  Class: Eq_139
  DataType: 
  OrigDataType: 
T_663: (in gs : selector)
  Class: Eq_141
  DataType: 
  OrigDataType: 
T_664: (in out ebx_128 : ptr32)
  Class: Eq_289
  DataType: 
  OrigDataType: 
T_665: (in out ebp_11 : ptr32)
  Class: Eq_295
  DataType: 
  OrigDataType: 
T_666: (in fn00401200(edx, es, ds, fs, gs, dwArg00, out ebx_128, out ebp_11) : word32)
  Class: Eq_656
  DataType: 
  OrigDataType: 
T_667: (in 0x00403030 : ptr32)
  Class: Eq_667
  DataType: 
  OrigDataType: 
T_668: (in Mem132[0x00403030:word32] : word32)
  Class: Eq_656
  DataType: 
  OrigDataType: 
T_669: (in 0x00403024 : ptr32)
  Class: Eq_669
  DataType: 
  OrigDataType: 
T_670: (in Mem132[0x00403024:word32] : word32)
  Class: Eq_655
  DataType: 
  OrigDataType: 
T_671: (in Mem132[0x00403024:word32] != ebx_128 : bool)
  Class: Eq_671
  DataType: 
  OrigDataType: 
T_672: (in esp_170 : word32)
  Class: Eq_672
  DataType: 
  OrigDataType: 
T_673: (in 0x00000004 : word32)
  Class: Eq_673
  DataType: 
  OrigDataType: 
T_674: (in esp_102 - 0x00000004 : word32)
  Class: Eq_672
  DataType: 
  OrigDataType: 
T_675: (in 0x00403380 : word32)
  Class: Eq_675
  DataType: 
  OrigDataType: 
T_676: (in 0x00000000 : word32)
  Class: Eq_676
  DataType: 
  OrigDataType: 
T_677: (in esp_170 + 0x00000000 : word32)
  Class: Eq_677
  DataType: 
  OrigDataType: 
T_678: (in Mem171[esp_170 + 0x00000000:word32] : word32)
  Class: Eq_675
  DataType: 
  OrigDataType: 
T_679: (in eax_173 : word32)
  Class: Eq_679
  DataType: 
  OrigDataType: 
T_680: (in fn004017F0 : ptr32)
  Class: Eq_680
  DataType: 
  OrigDataType: 
T_681: (in signature of fn004017F0 : void)
  Class: Eq_680
  DataType: 
  OrigDataType: 
T_682: (in fs : selector)
  Class: Eq_140
  DataType: 
  OrigDataType: 
T_683: (in dwArg04 : word32)
  Class: Eq_574
  DataType: 
  OrigDataType: 
T_684: (in edxOut : ptr32)
  Class: Eq_684
  DataType: 
  OrigDataType: 
T_685: (in out edx : ptr32)
  Class: Eq_684
  DataType: 
  OrigDataType: 
T_686: (in fn004017F0(fs, dwArg00, out edx) : word32)
  Class: Eq_679
  DataType: 
  OrigDataType: 
T_687: (in 0x00000004 : word32)
  Class: Eq_687
  DataType: 
  OrigDataType: 
T_688: (in esp_170 + 0x00000004 : word32)
  Class: Eq_482
  DataType: 
  OrigDataType: 
T_689: (in 0x00000000 : word32)
  Class: Eq_679
  DataType: 
  OrigDataType: 
T_690: (in eax_173 == 0x00000000 : bool)
  Class: Eq_690
  DataType: 
  OrigDataType: 
T_691: (in 0x00000000 : word32)
  Class: Eq_691
  DataType: 
  OrigDataType: 
T_692: (in 0x00000000 : word32)
  Class: Eq_692
  DataType: 
  OrigDataType: 
T_693: (in esp_170 + 0x00000000 : word32)
  Class: Eq_693
  DataType: 
  OrigDataType: 
T_694: (in Mem180[esp_170 + 0x00000000:word32] : word32)
  Class: Eq_691
  DataType: 
  OrigDataType: 
T_695: (in 0x00000002 : word32)
  Class: Eq_695
  DataType: 
  OrigDataType: 
T_696: (in 0x00000004 : word32)
  Class: Eq_696
  DataType: 
  OrigDataType: 
T_697: (in esp_170 - 0x00000004 : word32)
  Class: Eq_697
  DataType: 
  OrigDataType: 
T_698: (in Mem182[esp_170 - 0x00000004:word32] : word32)
  Class: Eq_695
  DataType: 
  OrigDataType: 
T_699: (in 0x00000000 : word32)
  Class: Eq_699
  DataType: 
  OrigDataType: 
T_700: (in 0x00000008 : word32)
  Class: Eq_700
  DataType: 
  OrigDataType: 
T_701: (in esp_170 - 0x00000008 : word32)
  Class: Eq_701
  DataType: 
  OrigDataType: 
T_702: (in Mem184[esp_170 - 0x00000008:word32] : word32)
  Class: Eq_699
  DataType: 
  OrigDataType: 
T_703: (in esp_170 - 0x00000008 : word32)
  Class: Eq_482
  DataType: 
  OrigDataType: 
T_704: (in 0x00403380 : ptr32)
  Class: Eq_704
  DataType: 
  OrigDataType: 
T_705: (in Mem184[0x00403380:word32] : word32)
  Class: Eq_705
  DataType: 
  OrigDataType: 
T_706: (in 0x00403034 : ptr32)
  Class: Eq_706
  DataType: 
  OrigDataType: 
T_707: (in Mem132[0x00403034:word32] : word32)
  Class: Eq_655
  DataType: 
  OrigDataType: 
T_708: (in Mem132[0x00403034:word32] != ebx_128 : bool)
  Class: Eq_708
  DataType: 
  OrigDataType: 
T_709: (in 0x00000000 : word32)
  Class: Eq_709
  DataType: 
  OrigDataType: 
T_710: (in esp_122 + 0x00000000 : word32)
  Class: Eq_710
  DataType: 
  OrigDataType: 
T_711: (in Mem136[esp_122 + 0x00000000:word32] : word32)
  Class: Eq_656
  DataType: 
  OrigDataType: 
T_712: (in exit : ptr32)
  Class: Eq_712
  DataType: 
  OrigDataType: 
T_713: (in signature of exit : void)
  Class: Eq_712
  DataType: 
  OrigDataType: 
T_714: (in _Code : int32)
  Class: Eq_714
  DataType: 
  OrigDataType: 
T_715: (in 0x00000000 : word32)
  Class: Eq_715
  DataType: 
  OrigDataType: 
T_716: (in esp_122 + 0x00000000 : word32)
  Class: Eq_716
  DataType: 
  OrigDataType: 
T_717: (in Mem136[esp_122 + 0x00000000:int32] : int32)
  Class: Eq_714
  DataType: 
  OrigDataType: 
T_718: (in exit(Mem136[esp_122 + 0x00000000:int32]) : void)
  Class: Eq_718
  DataType: 
  OrigDataType: 
T_719: (in eax_137 : word32)
  Class: Eq_719
  DataType: 
  OrigDataType: 
T_720: (in 0x00000014 : word32)
  Class: Eq_720
  DataType: 
  OrigDataType: 
T_721: (in ebp_11 - 0x00000014 : word32)
  Class: Eq_721
  DataType: 
  OrigDataType: 
T_722: (in Mem136[ebp_11 - 0x00000014:word32] : word32)
  Class: Eq_719
  DataType: 
  OrigDataType: 
T_723: (in ecx_139 : word32)
  Class: Eq_723
  DataType: 
  OrigDataType: 
T_724: (in 0x00000000 : word32)
  Class: Eq_724
  DataType: 
  OrigDataType: 
T_725: (in eax_137 + 0x00000000 : word32)
  Class: Eq_725
  DataType: 
  OrigDataType: 
T_726: (in Mem136[eax_137 + 0x00000000:word32] : word32)
  Class: Eq_726
  DataType: 
  OrigDataType: 
T_727: (in Mem136[Mem136[eax_137 + 0x00000000:word32]:word32] : word32)
  Class: Eq_723
  DataType: 
  OrigDataType: 
T_728: (in 0x00000020 : word32)
  Class: Eq_728
  DataType: 
  OrigDataType: 
T_729: (in ebp_11 - 0x00000020 : word32)
  Class: Eq_729
  DataType: 
  OrigDataType: 
T_730: (in Mem140[ebp_11 - 0x00000020:word32] : word32)
  Class: Eq_723
  DataType: 
  OrigDataType: 
T_731: (in 0x00000004 : word32)
  Class: Eq_731
  DataType: 
  OrigDataType: 
T_732: (in esp_122 - 0x00000004 : word32)
  Class: Eq_732
  DataType: 
  OrigDataType: 
T_733: (in Mem142[esp_122 - 0x00000004:word32] : word32)
  Class: Eq_719
  DataType: 
  OrigDataType: 
T_734: (in 0x00000008 : word32)
  Class: Eq_734
  DataType: 
  OrigDataType: 
T_735: (in esp_122 - 0x00000008 : word32)
  Class: Eq_735
  DataType: 
  OrigDataType: 
T_736: (in Mem144[esp_122 - 0x00000008:word32] : word32)
  Class: Eq_723
  DataType: 
  OrigDataType: 
T_737: (in _XcptFilter : ptr32)
  Class: Eq_737
  DataType: 
  OrigDataType: 
T_738: (in signature of _XcptFilter : void)
  Class: Eq_737
  DataType: 
  OrigDataType: 
T_739: (in 0xFFFFFFFE : word32)
  Class: Eq_739
  DataType: 
  OrigDataType: 
T_740: (in 0x00000004 : word32)
  Class: Eq_740
  DataType: 
  OrigDataType: 
T_741: (in ebp_11 - 0x00000004 : word32)
  Class: Eq_741
  DataType: 
  OrigDataType: 
T_742: (in Mem167[ebp_11 - 0x00000004:word32] : word32)
  Class: Eq_739
  DataType: 
  OrigDataType: 
T_743: (in _cexit : ptr32)
  Class: Eq_743
  DataType: 
  OrigDataType: 
T_744: (in signature of _cexit : void)
  Class: Eq_743
  DataType: 
  OrigDataType: 
T_745: (in eax : word32)
  Class: Eq_745
  DataType: 
  OrigDataType: 
T_746: (in edx : word32)
  Class: Eq_746
  DataType: 
  OrigDataType: 
T_747: (in edxOut : ptr32)
  Class: Eq_747
  DataType: 
  OrigDataType: 
T_748: (in *edxOut : word32)
  Class: Eq_746
  DataType: 
  OrigDataType: 
T_749: (in dwArg04 : word32)
  Class: Eq_749
  DataType: 
  OrigDataType: 
T_750: (in 0x00000000 : word32)
  Class: Eq_750
  DataType: 
  OrigDataType: 
T_751: (in dwArg04 + 0x00000000 : word32)
  Class: Eq_751
  DataType: 
  OrigDataType: 
T_752: (in Mem0[dwArg04 + 0x00000000:word16] : word16)
  Class: Eq_752
  DataType: 
  OrigDataType: 
T_753: (in 0x5A4D : word16)
  Class: Eq_752
  DataType: 
  OrigDataType: 
T_754: (in Mem0[dwArg04 + 0x00000000:word16] == 0x5A4D : bool)
  Class: Eq_754
  DataType: 
  OrigDataType: 
T_755: (in eax_40 : word32)
  Class: Eq_755
  DataType: 
  OrigDataType: 
T_756: (in 0x0000003C : word32)
  Class: Eq_756
  DataType: 
  OrigDataType: 
T_757: (in dwArg04 + 0x0000003C : word32)
  Class: Eq_757
  DataType: 
  OrigDataType: 
T_758: (in Mem0[dwArg04 + 0x0000003C:word32] : word32)
  Class: Eq_758
  DataType: 
  OrigDataType: 
T_759: (in Mem0[dwArg04 + 0x0000003C:word32] + dwArg04 : word32)
  Class: Eq_755
  DataType: 
  OrigDataType: 
T_760: (in 0x00000000 : word32)
  Class: Eq_760
  DataType: 
  OrigDataType: 
T_761: (in eax_40 + 0x00000000 : word32)
  Class: Eq_761
  DataType: 
  OrigDataType: 
T_762: (in Mem0[eax_40 + 0x00000000:word32] : word32)
  Class: Eq_762
  DataType: 
  OrigDataType: 
T_763: (in 0x00004550 : word32)
  Class: Eq_762
  DataType: 
  OrigDataType: 
T_764: (in Mem0[eax_40 + 0x00000000:word32] != 0x00004550 : bool)
  Class: Eq_764
  DataType: 
  OrigDataType: 
T_765: (in 0x00000000 : word32)
  Class: Eq_765
  DataType: 
  OrigDataType: 
T_766: (in edx_50 : word32)
  Class: Eq_766
  DataType: 
  OrigDataType: 
T_767: (in 0x00000018 : word32)
  Class: Eq_767
  DataType: 
  OrigDataType: 
T_768: (in eax_40 + 0x00000018 : word32)
  Class: Eq_768
  DataType: 
  OrigDataType: 
T_769: (in Mem0[eax_40 + 0x00000018:word16] : word16)
  Class: Eq_769
  DataType: 
  OrigDataType: 
T_770: (in 0x010B : word16)
  Class: Eq_769
  DataType: 
  OrigDataType: 
T_771: (in Mem0[eax_40 + 0x00000018:word16] == 0x010B : bool)
  Class: Eq_771
  DataType: 
  OrigDataType: 
T_772: (in (word32) (Mem0[eax_40 + 0x00000018:word16] == 0x010B) : word32)
  Class: Eq_766
  DataType: 
  OrigDataType: 
T_773: (in *edxOut : word32)
  Class: Eq_766
  DataType: 
  OrigDataType: 
T_774: (in eax : word32)
  Class: Eq_774
  DataType: 
  OrigDataType: 
T_775: (in ecx_12 : word32)
  Class: Eq_775
  DataType: 
  OrigDataType: 
T_776: (in dwArg04 : word32)
  Class: Eq_776
  DataType: 
  OrigDataType: 
T_777: (in 0x0000003C : word32)
  Class: Eq_777
  DataType: 
  OrigDataType: 
T_778: (in dwArg04 + 0x0000003C : word32)
  Class: Eq_778
  DataType: 
  OrigDataType: 
T_779: (in Mem0[dwArg04 + 0x0000003C:word32] : word32)
  Class: Eq_779
  DataType: 
  OrigDataType: 
T_780: (in Mem0[dwArg04 + 0x0000003C:word32] + dwArg04 : word32)
  Class: Eq_775
  DataType: 
  OrigDataType: 
T_781: (in esi_20 : word32)
  Class: Eq_781
  DataType: 
  OrigDataType: 
T_782: (in 0x00000006 : word32)
  Class: Eq_782
  DataType: 
  OrigDataType: 
T_783: (in ecx_12 + 0x00000006 : word32)
  Class: Eq_783
  DataType: 
  OrigDataType: 
T_784: (in Mem0[ecx_12 + 0x00000006:word16] : word16)
  Class: Eq_784
  DataType: 
  OrigDataType: 
T_785: (in (word32) Mem0[ecx_12 + 0x00000006:word16] : word32)
  Class: Eq_781
  DataType: 
  OrigDataType: 
T_786: (in edx_21 : word32)
  Class: Eq_781
  DataType: 
  OrigDataType: 
T_787: (in 0x00000000 : word32)
  Class: Eq_787
  DataType: 
  OrigDataType: 
T_788: (in edxOut : ptr32)
  Class: Eq_788
  DataType: 
  OrigDataType: 
T_789: (in *edxOut : word32)
  Class: Eq_787
  DataType: 
  OrigDataType: 
T_790: (in eax_24 : word32)
  Class: Eq_790
  DataType: 
  OrigDataType: 
T_791: (in 0x00000014 : word32)
  Class: Eq_791
  DataType: 
  OrigDataType: 
T_792: (in ecx_12 + 0x00000014 : word32)
  Class: Eq_792
  DataType: 
  OrigDataType: 
T_793: (in Mem0[ecx_12 + 0x00000014:word16] : word16)
  Class: Eq_793
  DataType: 
  OrigDataType: 
T_794: (in (word32) Mem0[ecx_12 + 0x00000014:word16] : word32)
  Class: Eq_794
  DataType: 
  OrigDataType: 
T_795: (in 0x00000018 : word32)
  Class: Eq_795
  DataType: 
  OrigDataType: 
T_796: (in (word32) Mem0[ecx_12 + 0x00000014:word16] + 0x00000018 : word32)
  Class: Eq_796
  DataType: 
  OrigDataType: 
T_797: (in (word32) Mem0[ecx_12 + 0x00000014:word16] + 0x00000018 + ecx_12 : word32)
  Class: Eq_797
  DataType: 
  OrigDataType: 
T_798: (in 0x0000000C : word32)
  Class: Eq_798
  DataType: 
  OrigDataType: 
T_799: (in (word32) Mem0[ecx_12 + 0x00000014:word16] + 0x00000018 + ecx_12 + 0x0000000C : word32)
  Class: Eq_790
  DataType: 
  OrigDataType: 
T_800: (in false : bool)
  Class: Eq_800
  DataType: 
  OrigDataType: 
T_801: (in 0x00000000 : word32)
  Class: Eq_790
  DataType: 
  OrigDataType: 
T_802: (in 0x00000001 : word32)
  Class: Eq_802
  DataType: 
  OrigDataType: 
T_803: (in edx_21 + 0x00000001 : word32)
  Class: Eq_781
  DataType: 
  OrigDataType: 
T_804: (in *edxOut : word32)
  Class: Eq_781
  DataType: 
  OrigDataType: 
T_805: (in 0x00000028 : word32)
  Class: Eq_805
  DataType: 
  OrigDataType: 
T_806: (in eax_24 + 0x00000028 : word32)
  Class: Eq_790
  DataType: 
  OrigDataType: 
T_807: (in edx_21 <u esi_20 : bool)
  Class: Eq_807
  DataType: 
  OrigDataType: 
T_808: (in dwArg08 : word32)
  Class: Eq_808
  DataType: 
  OrigDataType: 
T_809: (in 0x00000008 : word32)
  Class: Eq_809
  DataType: 
  OrigDataType: 
T_810: (in eax_24 + 0x00000008 : word32)
  Class: Eq_810
  DataType: 
  OrigDataType: 
T_811: (in Mem0[eax_24 + 0x00000008:word32] : word32)
  Class: Eq_811
  DataType: 
  OrigDataType: 
T_812: (in ecx_57 : word32)
  Class: Eq_808
  DataType: 
  OrigDataType: 
T_813: (in Mem0[eax_24 + 0x00000008:word32] + ecx_57 : word32)
  Class: Eq_808
  DataType: 
  OrigDataType: 
T_814: (in dwArg08 <u Mem0[eax_24 + 0x00000008:word32] + ecx_57 : bool)
  Class: Eq_814
  DataType: 
  OrigDataType: 
T_815: (in 0x00000000 : word32)
  Class: Eq_815
  DataType: 
  OrigDataType: 
T_816: (in eax_24 + 0x00000000 : word32)
  Class: Eq_816
  DataType: 
  OrigDataType: 
T_817: (in Mem0[eax_24 + 0x00000000:word32] : word32)
  Class: Eq_808
  DataType: 
  OrigDataType: 
T_818: (in dwArg08 <u ecx_57 : bool)
  Class: Eq_818
  DataType: 
  OrigDataType: 
T_819: (in eax : word32)
  Class: Eq_819
  DataType: 
  OrigDataType: 
T_820: (in eax_16 : word32)
  Class: Eq_820
  DataType: 
  OrigDataType: 
T_821: (in 0x00000000 : word32)
  Class: Eq_821
  DataType: 
  OrigDataType: 
T_822: (in Mem0[fs:0x00000000:word32] : word32)
  Class: Eq_820
  DataType: 
  OrigDataType: 
T_823: (in fp : ptr32)
  Class: Eq_823
  DataType: 
  OrigDataType: 
T_824: (in 0x00000014 : word32)
  Class: Eq_824
  DataType: 
  OrigDataType: 
T_825: (in fp - 0x00000014 : word32)
  Class: Eq_825
  DataType: 
  OrigDataType: 
T_826: (in 0x00000000 : word32)
  Class: Eq_826
  DataType: 
  OrigDataType: 
T_827: (in Mem38[fs:0x00000000:word32] : word32)
  Class: Eq_825
  DataType: 
  OrigDataType: 
T_828: (in edx_43 : word32)
  Class: Eq_828
  DataType: 
  OrigDataType: 
T_829: (in fn00401760 : ptr32)
  Class: Eq_829
  DataType: 
  OrigDataType: 
T_830: (in signature of fn00401760 : void)
  Class: Eq_829
  DataType: 
  OrigDataType: 
T_831: (in dwArg04 : word32)
  Class: Eq_831
  DataType: 
  OrigDataType: 
T_832: (in 0x00400000 : word32)
  Class: Eq_831
  DataType: 
  OrigDataType: 
T_833: (in out edx_43 : ptr32)
  Class: Eq_747
  DataType: 
  OrigDataType: 
T_834: (in fn00401760(0x00400000, out edx_43) : word32)
  Class: Eq_834
  DataType: 
  OrigDataType: 
T_835: (in 0x00000000 : word32)
  Class: Eq_834
  DataType: 
  OrigDataType: 
T_836: (in fn00401760(0x00400000, out edx_43) == 0x00000000 : bool)
  Class: Eq_836
  DataType: 
  OrigDataType: 
T_837: (in 0xFFFFFFFE : word32)
  Class: Eq_837
  DataType: 
  OrigDataType: 
T_838: (in 0x00000008 : word32)
  Class: Eq_838
  DataType: 
  OrigDataType: 
T_839: (in fp - 0x00000008 : word32)
  Class: Eq_839
  DataType: 
  OrigDataType: 
T_840: (in Mem69[fp - 0x00000008:word32] : word32)
  Class: Eq_837
  DataType: 
  OrigDataType: 
T_841: (in 0x00000000 : ptr32)
  Class: Eq_841
  DataType: 
  OrigDataType: 
T_842: (in Mem74[fs:0x00000000:word32] : word32)
  Class: Eq_820
  DataType: 
  OrigDataType: 
T_843: (in 0x00000000 : word32)
  Class: Eq_843
  DataType: 
  OrigDataType: 
T_844: (in dwArg04 : word32)
  Class: Eq_844
  DataType: 
  OrigDataType: 
T_845: (in 0x00400000 : ptr32)
  Class: Eq_845
  DataType: 
  OrigDataType: 
T_846: (in dwArg04 - 0x00400000 : word32)
  Class: Eq_846
  DataType: 
  OrigDataType: 
T_847: (in 0x00000030 : word32)
  Class: Eq_847
  DataType: 
  OrigDataType: 
T_848: (in fp - 0x00000030 : word32)
  Class: Eq_848
  DataType: 
  OrigDataType: 
T_849: (in Mem90[fp - 0x00000030:word32] : word32)
  Class: Eq_846
  DataType: 
  OrigDataType: 
T_850: (in edx_93 : word32)
  Class: Eq_850
  DataType: 
  OrigDataType: 
T_851: (in eax_94 : word32)
  Class: Eq_851
  DataType: 
  OrigDataType: 
T_852: (in fn004017A0 : ptr32)
  Class: Eq_852
  DataType: 
  OrigDataType: 
T_853: (in signature of fn004017A0 : void)
  Class: Eq_852
  DataType: 
  OrigDataType: 
T_854: (in dwArg04 : word32)
  Class: Eq_854
  DataType: 
  OrigDataType: 
T_855: (in dwArg08 : word32)
  Class: Eq_855
  DataType: 
  OrigDataType: 
T_856: (in 0x00400000 : word32)
  Class: Eq_854
  DataType: 
  OrigDataType: 
T_857: (in 0x00400000 : word32)
  Class: Eq_855
  DataType: 
  OrigDataType: 
T_858: (in out edx_93 : ptr32)
  Class: Eq_788
  DataType: 
  OrigDataType: 
T_859: (in fn004017A0(0x00400000, 0x00400000, out edx_93) : word32)
  Class: Eq_851
  DataType: 
  OrigDataType: 
T_860: (in 0x00000000 : word32)
  Class: Eq_851
  DataType: 
  OrigDataType: 
T_861: (in eax_94 == 0x00000000 : bool)
  Class: Eq_861
  DataType: 
  OrigDataType: 
T_862: (in eax_101 : word32)
  Class: Eq_862
  DataType: 
  OrigDataType: 
T_863: (in 0x00000024 : word32)
  Class: Eq_863
  DataType: 
  OrigDataType: 
T_864: (in eax_94 + 0x00000024 : word32)
  Class: Eq_864
  DataType: 
  OrigDataType: 
T_865: (in Mem90[eax_94 + 0x00000024:word32] : word32)
  Class: Eq_865
  DataType: 
  OrigDataType: 
T_866: (in 0x0000001F : word32)
  Class: Eq_866
  DataType: 
  OrigDataType: 
T_867: (in Mem90[eax_94 + 0x00000024:word32] >>u 0x0000001F : word32)
  Class: Eq_867
  DataType: 
  OrigDataType: 
T_868: (in ~(Mem90[eax_94 + 0x00000024:word32] >>u 0x0000001F) : word32)
  Class: Eq_862
  DataType: 
  OrigDataType: 
T_869: (in 0xFFFFFFFE : word32)
  Class: Eq_869
  DataType: 
  OrigDataType: 
T_870: (in 0x00000008 : word32)
  Class: Eq_870
  DataType: 
  OrigDataType: 
T_871: (in fp - 0x00000008 : word32)
  Class: Eq_871
  DataType: 
  OrigDataType: 
T_872: (in Mem105[fp - 0x00000008:word32] : word32)
  Class: Eq_869
  DataType: 
  OrigDataType: 
T_873: (in 0x00000000 : ptr32)
  Class: Eq_873
  DataType: 
  OrigDataType: 
T_874: (in Mem107[fs:0x00000000:word32] : word32)
  Class: Eq_820
  DataType: 
  OrigDataType: 
T_875: (in 0x00000001 : word32)
  Class: Eq_875
  DataType: 
  OrigDataType: 
T_876: (in eax_101 & 0x00000001 : word32)
  Class: Eq_876
  DataType: 
  OrigDataType: 
T_877: (in ebp : word32)
  Class: Eq_877
  DataType: 
  OrigDataType: 
T_878: (in esp_13 : word32)
  Class: Eq_878
  DataType: 
  OrigDataType: 
T_879: (in fp : ptr32)
  Class: Eq_879
  DataType: 
  OrigDataType: 
T_880: (in 0x00000008 : word32)
  Class: Eq_880
  DataType: 
  OrigDataType: 
T_881: (in fp - 0x00000008 : word32)
  Class: Eq_881
  DataType: 
  OrigDataType: 
T_882: (in dwArg08 : word32)
  Class: Eq_882
  DataType: 
  OrigDataType: 
T_883: (in fp - 0x00000008 - dwArg08 : word32)
  Class: Eq_878
  DataType: 
  OrigDataType: 
T_884: (in 0x00000004 : word32)
  Class: Eq_884
  DataType: 
  OrigDataType: 
T_885: (in esp_13 - 0x00000004 : word32)
  Class: Eq_885
  DataType: 
  OrigDataType: 
T_886: (in Mem16[esp_13 - 0x00000004:word32] : word32)
  Class: Eq_444
  DataType: 
  OrigDataType: 
T_887: (in 0x00000008 : word32)
  Class: Eq_887
  DataType: 
  OrigDataType: 
T_888: (in esp_13 - 0x00000008 : word32)
  Class: Eq_888
  DataType: 
  OrigDataType: 
T_889: (in Mem19[esp_13 - 0x00000008:word32] : word32)
  Class: Eq_445
  DataType: 
  OrigDataType: 
T_890: (in 0x0000000C : word32)
  Class: Eq_890
  DataType: 
  OrigDataType: 
T_891: (in esp_13 - 0x0000000C : word32)
  Class: Eq_891
  DataType: 
  OrigDataType: 
T_892: (in Mem22[esp_13 - 0x0000000C:word32] : word32)
  Class: Eq_446
  DataType: 
  OrigDataType: 
T_893: (in 0x00403000 : ptr32)
  Class: Eq_893
  DataType: 
  OrigDataType: 
T_894: (in Mem22[0x00403000:word32] : word32)
  Class: Eq_894
  DataType: 
  OrigDataType: 
T_895: (in 0x00000008 : word32)
  Class: Eq_895
  DataType: 
  OrigDataType: 
T_896: (in fp + 0x00000008 : word32)
  Class: Eq_896
  DataType: 
  OrigDataType: 
T_897: (in Mem22[0x00403000:word32] ^ fp + 0x00000008 : word32)
  Class: Eq_897
  DataType: 
  OrigDataType: 
T_898: (in 0x00000010 : word32)
  Class: Eq_898
  DataType: 
  OrigDataType: 
T_899: (in esp_13 - 0x00000010 : word32)
  Class: Eq_899
  DataType: 
  OrigDataType: 
T_900: (in Mem32[esp_13 - 0x00000010:word32] : word32)
  Class: Eq_897
  DataType: 
  OrigDataType: 
T_901: (in dwArg00 : word32)
  Class: Eq_901
  DataType: 
  OrigDataType: 
T_902: (in 0x00000014 : word32)
  Class: Eq_902
  DataType: 
  OrigDataType: 
T_903: (in esp_13 - 0x00000014 : word32)
  Class: Eq_903
  DataType: 
  OrigDataType: 
T_904: (in Mem36[esp_13 - 0x00000014:word32] : word32)
  Class: Eq_901
  DataType: 
  OrigDataType: 
T_905: (in 0x00000008 : word32)
  Class: Eq_905
  DataType: 
  OrigDataType: 
T_906: (in fp - 0x00000008 : word32)
  Class: Eq_906
  DataType: 
  OrigDataType: 
T_907: (in 0x00000000 : word32)
  Class: Eq_907
  DataType: 
  OrigDataType: 
T_908: (in Mem41[fs:0x00000000:word32] : word32)
  Class: Eq_906
  DataType: 
  OrigDataType: 
T_909: (in fp + 0x00000008 : word32)
  Class: Eq_909
  DataType: 
  OrigDataType: 
T_910: (in 0x00000010 : word32)
  Class: Eq_910
  DataType: 
  OrigDataType: 
T_911: (in ebp - 0x00000010 : word32)
  Class: Eq_911
  DataType: 
  OrigDataType: 
T_912: (in Mem0[ebp - 0x00000010:word32] : word32)
  Class: Eq_912
  DataType: 
  OrigDataType: 
T_913: (in 0x00000000 : ptr32)
  Class: Eq_913
  DataType: 
  OrigDataType: 
T_914: (in Mem5[fs:0x00000000:word32] : word32)
  Class: Eq_912
  DataType: 
  OrigDataType: 
T_915: (in dwArg00 : word32)
  Class: Eq_915
  DataType: 
  OrigDataType: 
T_916: (in 0x00000000 : word32)
  Class: Eq_916
  DataType: 
  OrigDataType: 
T_917: (in ebp + 0x00000000 : word32)
  Class: Eq_917
  DataType: 
  OrigDataType: 
T_918: (in Mem25[ebp + 0x00000000:word32] : word32)
  Class: Eq_915
  DataType: 
  OrigDataType: 
T_919: (in eax_10 : word32)
  Class: Eq_919
  DataType: 
  OrigDataType: 
T_920: (in 0x00403000 : ptr32)
  Class: Eq_920
  DataType: 
  OrigDataType: 
T_921: (in Mem0[0x00403000:word32] : word32)
  Class: Eq_919
  DataType: 
  OrigDataType: 
T_922: (in 0xBB40E64E : word32)
  Class: Eq_919
  DataType: 
  OrigDataType: 
T_923: (in eax_10 == 0xBB40E64E : bool)
  Class: Eq_923
  DataType: 
  OrigDataType: 
T_924: (in GetSystemTimeAsFileTime : ptr32)
  Class: Eq_924
  DataType: 
  OrigDataType: 
T_925: (in signature of GetSystemTimeAsFileTime : void)
  Class: Eq_924
  DataType: 
  OrigDataType: 
T_926: (in lpSystemTimeAsFileTime : LPFILETIME)
  Class: Eq_926
  DataType: 
  OrigDataType: 
T_927: (in fp : ptr32)
  Class: Eq_927
  DataType: 
  OrigDataType: 
T_928: (in 0x0000000C : word32)
  Class: Eq_928
  DataType: 
  OrigDataType: 
T_929: (in fp - 0x0000000C : word32)
  Class: Eq_926
  DataType: 
  OrigDataType: 
T_930: (in GetSystemTimeAsFileTime(fp - 0x0000000C) : void)
  Class: Eq_930
  DataType: 
  OrigDataType: 
T_931: (in esi_59 : word32)
  Class: Eq_931
  DataType: 
  OrigDataType: 
T_932: (in dwLoc08 : word32)
  Class: Eq_932
  DataType: 
  OrigDataType: 
T_933: (in 0x00000000 : word32)
  Class: Eq_933
  DataType: 
  OrigDataType: 
T_934: (in dwLoc08 & 0x00000000 : word32)
  Class: Eq_934
  DataType: 
  OrigDataType: 
T_935: (in dwLoc0C : word32)
  Class: Eq_935
  DataType: 
  OrigDataType: 
T_936: (in 0x00000000 : word32)
  Class: Eq_936
  DataType: 
  OrigDataType: 
T_937: (in dwLoc0C & 0x00000000 : word32)
  Class: Eq_937
  DataType: 
  OrigDataType: 
T_938: (in dwLoc08 & 0x00000000 ^ dwLoc0C & 0x00000000 : word32)
  Class: Eq_938
  DataType: 
  OrigDataType: 
T_939: (in GetCurrentProcessId : ptr32)
  Class: Eq_939
  DataType: 
  OrigDataType: 
T_940: (in signature of GetCurrentProcessId : void)
  Class: Eq_939
  DataType: 
  OrigDataType: 
T_941: (in GetCurrentProcessId() : word32)
  Class: Eq_941
  DataType: 
  OrigDataType: 
T_942: (in dwLoc08 & 0x00000000 ^ dwLoc0C & 0x00000000 ^ GetCurrentProcessId() : word32)
  Class: Eq_942
  DataType: 
  OrigDataType: 
T_943: (in GetCurrentThreadId : ptr32)
  Class: Eq_943
  DataType: 
  OrigDataType: 
T_944: (in signature of GetCurrentThreadId : void)
  Class: Eq_943
  DataType: 
  OrigDataType: 
T_945: (in GetCurrentThreadId() : word32)
  Class: Eq_945
  DataType: 
  OrigDataType: 
T_946: (in dwLoc08 & 0x00000000 ^ dwLoc0C & 0x00000000 ^ GetCurrentProcessId() ^ GetCurrentThreadId() : word32)
  Class: Eq_946
  DataType: 
  OrigDataType: 
T_947: (in GetTickCount : ptr32)
  Class: Eq_947
  DataType: 
  OrigDataType: 
T_948: (in signature of GetTickCount : void)
  Class: Eq_947
  DataType: 
  OrigDataType: 
T_949: (in GetTickCount() : word32)
  Class: Eq_949
  DataType: 
  OrigDataType: 
T_950: (in dwLoc08 & 0x00000000 ^ dwLoc0C & 0x00000000 ^ GetCurrentProcessId() ^ GetCurrentThreadId() ^ GetTickCount() : word32)
  Class: Eq_931
  DataType: 
  OrigDataType: 
T_951: (in QueryPerformanceCounter : ptr32)
  Class: Eq_951
  DataType: 
  OrigDataType: 
T_952: (in signature of QueryPerformanceCounter : void)
  Class: Eq_951
  DataType: 
  OrigDataType: 
T_953: (in lpPerformanceCount : (ptr LARGE_INTEGER))
  Class: Eq_953
  DataType: 
  OrigDataType: 
T_954: (in 0x00000014 : word32)
  Class: Eq_954
  DataType: 
  OrigDataType: 
T_955: (in fp - 0x00000014 : word32)
  Class: Eq_953
  DataType: 
  OrigDataType: 
T_956: (in QueryPerformanceCounter(fp - 0x00000014) : word32)
  Class: Eq_956
  DataType: 
  OrigDataType: 
T_957: (in esi_69 : word32)
  Class: Eq_957
  DataType: 
  OrigDataType: 
T_958: (in dwLoc10 : word32)
  Class: Eq_958
  DataType: 
  OrigDataType: 
T_959: (in dwLoc14 : word32)
  Class: Eq_959
  DataType: 
  OrigDataType: 
T_960: (in dwLoc10 ^ dwLoc14 : word32)
  Class: Eq_960
  DataType: 
  OrigDataType: 
T_961: (in esi_59 ^ (dwLoc10 ^ dwLoc14) : word32)
  Class: Eq_957
  DataType: 
  OrigDataType: 
T_962: (in 0xBB40E64E : word32)
  Class: Eq_957
  DataType: 
  OrigDataType: 
T_963: (in esi_69 != 0xBB40E64E : bool)
  Class: Eq_963
  DataType: 
  OrigDataType: 
T_964: (in 0xFFFF0000 : word32)
  Class: Eq_964
  DataType: 
  OrigDataType: 
T_965: (in eax_10 & 0xFFFF0000 : word32)
  Class: Eq_965
  DataType: 
  OrigDataType: 
T_966: (in 0x00000000 : word32)
  Class: Eq_965
  DataType: 
  OrigDataType: 
T_967: (in (eax_10 & 0xFFFF0000) == 0x00000000 : bool)
  Class: Eq_967
  DataType: 
  OrigDataType: 
T_968: (in ~eax_10 : word32)
  Class: Eq_968
  DataType: 
  OrigDataType: 
T_969: (in 0x00403004 : ptr32)
  Class: Eq_969
  DataType: 
  OrigDataType: 
T_970: (in Mem95[0x00403004:word32] : word32)
  Class: Eq_968
  DataType: 
  OrigDataType: 
T_971: (in 0xFFFF0000 : word32)
  Class: Eq_971
  DataType: 
  OrigDataType: 
T_972: (in esi_69 & 0xFFFF0000 : word32)
  Class: Eq_972
  DataType: 
  OrigDataType: 
T_973: (in 0x00000000 : word32)
  Class: Eq_972
  DataType: 
  OrigDataType: 
T_974: (in (esi_69 & 0xFFFF0000) != 0x00000000 : bool)
  Class: Eq_974
  DataType: 
  OrigDataType: 
T_975: (in 0xBB40E64F : word32)
  Class: Eq_957
  DataType: 
  OrigDataType: 
T_976: (in 0x00403000 : ptr32)
  Class: Eq_976
  DataType: 
  OrigDataType: 
T_977: (in Mem77[0x00403000:word32] : word32)
  Class: Eq_957
  DataType: 
  OrigDataType: 
T_978: (in ~esi_69 : word32)
  Class: Eq_978
  DataType: 
  OrigDataType: 
T_979: (in 0x00403004 : ptr32)
  Class: Eq_979
  DataType: 
  OrigDataType: 
T_980: (in Mem79[0x00403004:word32] : word32)
  Class: Eq_978
  DataType: 
  OrigDataType: 
T_981: (in 0x00000010 : word32)
  Class: Eq_981
  DataType: 
  OrigDataType: 
T_982: (in esi_69 << 0x00000010 : word32)
  Class: Eq_982
  DataType: 
  OrigDataType: 
T_983: (in esi_69 | esi_69 << 0x00000010 : word32)
  Class: Eq_957
  DataType: 
  OrigDataType: 
*/
