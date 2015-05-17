// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_355/ia32_com/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr (struct "Globals"))
  OrigDataType: (ptr (struct "Globals"))
T_2: (in bp_2 : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_3: (in ax_3 : word16)
  Class: Eq_3
  DataType: word16
  OrigDataType: word16
T_4: (in fn0C00_035B : ptr32)
  Class: Eq_4
  DataType: (ptr (fn T_8 (T_7)))
  OrigDataType: (ptr (fn T_8 (T_7)))
T_5: (in signature of fn0C00_035B : void)
  Class: Eq_4
  DataType: 
  OrigDataType: 
T_6: (in bpOut : ptr16)
  Class: Eq_6
  DataType: ptr16
  OrigDataType: ptr16
T_7: (in out bp_2 : ptr16)
  Class: Eq_6
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_8: (in fn0C00_035B(out bp_2) : word16)
  Class: Eq_3
  DataType: word16
  OrigDataType: word16
T_9: (in ds_4 : selector)
  Class: Eq_9
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_10: (in fn0C00_060B : ptr32)
  Class: Eq_10
  DataType: (ptr (fn T_14 (T_3, T_2)))
  OrigDataType: (ptr (fn T_14 (T_3, T_2)))
T_11: (in signature of fn0C00_060B : void)
  Class: Eq_10
  DataType: 
  OrigDataType: 
T_12: (in ax : word16)
  Class: Eq_3
  DataType: word16
  OrigDataType: word16
T_13: (in bp : word16)
  Class: Eq_2
  DataType: word16
  OrigDataType: word16
T_14: (in fn0C00_060B(ax_3, bp_2) : selector)
  Class: Eq_9
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_15: (in ax_9 : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_16: (in cs : selector)
  Class: Eq_16
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_17: (in SLICE(cs, byte, 8) : byte)
  Class: Eq_17
  DataType: byte
  OrigDataType: byte
T_18: (in 0x30 : byte)
  Class: Eq_18
  DataType: byte
  OrigDataType: byte
T_19: (in SLICE(cs, byte, 8) + 0x30 : byte)
  Class: Eq_19
  DataType: byte
  OrigDataType: byte
T_20: (in DPB(cs, SLICE(cs, byte, 8) + 0x30, 8, 8) : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_21: (in ss : selector)
  Class: Eq_21
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_22: (in fp : ptr16)
  Class: Eq_22
  DataType: (union ((union (ptr16 u0) ((memptr T_21 (struct (FFFFFFFC T_36 tFFFFFFFC))) u1)) u0) ((union (ptr16 u0) ((memptr T_21 (struct (FFFFFFFA T_65 tFFFFFFFA))) u1)) u1) ((union (ptr16 u0) ((memptr T_21 (struct (FFFFFFFA T_70 tFFFFFFFA))) u1)) u2) ((union (ptr16 u0) ((memptr T_21 (struct (FFFFFFFC T_48 tFFFFFFFC))) u1)) u3) ((union (ptr16 u0) ((memptr T_21 (struct (FFFFFFFC T_74 tFFFFFFFC))) u1)) u4) ((union (ptr16 u0) ((memptr T_21 (struct (FFFFFFFE T_25 tFFFFFFFE))) u1)) u5))
  OrigDataType: (union ((union (ptr16 u0) ((memptr T_21 (struct (FFFFFFFC T_36 tFFFFFFFC))) u1)) u0) ((union (ptr16 u0) ((memptr T_21 (struct (FFFFFFFA T_65 tFFFFFFFA))) u1)) u1) ((union (ptr16 u0) ((memptr T_21 (struct (FFFFFFFA T_70 tFFFFFFFA))) u1)) u2) ((union (ptr16 u0) ((memptr T_21 (struct (FFFFFFFC T_48 tFFFFFFFC))) u1)) u3) ((union (ptr16 u0) ((memptr T_21 (struct (FFFFFFFC T_74 tFFFFFFFC))) u1)) u4) ((union (ptr16 u0) ((memptr T_21 (struct (FFFFFFFE T_25 tFFFFFFFE))) u1)) u5))
T_23: (in 0x0002 : word16)
  Class: Eq_23
  DataType: word16
  OrigDataType: word16
T_24: (in fp - 0x0002 : word16)
  Class: Eq_24
  DataType: word16
  OrigDataType: word16
T_25: (in Mem13[ss:fp - 0x0002:word16] : word16)
  Class: Eq_15
  DataType: word16
  OrigDataType: word16
T_26: (in bx_15 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_27: (in ax_16 : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_28: (in fn0C00_0334 : ptr32)
  Class: Eq_28
  DataType: (ptr (fn T_33 (T_15, T_32)))
  OrigDataType: (ptr (fn T_33 (T_15, T_32)))
T_29: (in signature of fn0C00_0334 : void)
  Class: Eq_28
  DataType: 
  OrigDataType: 
T_30: (in es : selector)
  Class: Eq_15
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_31: (in bxOut : ptr16)
  Class: Eq_31
  DataType: ptr16
  OrigDataType: ptr16
T_32: (in out bx_15 : ptr16)
  Class: Eq_31
  DataType: (ptr word16)
  OrigDataType: (ptr word16)
T_33: (in fn0C00_0334(ax_9, out bx_15) : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_34: (in 0x0004 : word16)
  Class: Eq_34
  DataType: word16
  OrigDataType: word16
T_35: (in fp - 0x0004 : word16)
  Class: Eq_35
  DataType: word16
  OrigDataType: word16
T_36: (in Mem18[ss:fp - 0x0004:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_37: (in bp_196 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_38: (in fn0C00_0371 : ptr32)
  Class: Eq_38
  DataType: (ptr (fn T_49 (T_27, T_45, T_26, T_46, T_48)))
  OrigDataType: (ptr (fn T_49 (T_27, T_45, T_26, T_46, T_48)))
T_39: (in signature of fn0C00_0371 : void)
  Class: Eq_38
  DataType: 
  OrigDataType: 
T_40: (in ax : word16)
  Class: Eq_27
  DataType: word16
  OrigDataType: word16
T_41: (in cx : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_42: (in bx : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_43: (in di : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_44: (in es : selector)
  Class: Eq_44
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_45: (in 0x1000 : word16)
  Class: Eq_41
  DataType: word16
  OrigDataType: word16
T_46: (in 0x2B26 : word16)
  Class: Eq_43
  DataType: word16
  OrigDataType: word16
T_47: (in fp - 0x0004 : word16)
  Class: Eq_47
  DataType: word16
  OrigDataType: word16
T_48: (in Mem18[ss:fp - 0x0004:selector] : selector)
  Class: Eq_44
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_49: (in fn0C00_0371(ax_16, 0x1000, bx_15, 0x2B26, Mem18[ss:fp - 0x0004:selector]) : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_50: (in bios_video_set_mode : ptr32)
  Class: Eq_50
  DataType: (ptr (fn T_54 (T_53)))
  OrigDataType: (ptr (fn T_54 (T_53)))
T_51: (in signature of bios_video_set_mode : void)
  Class: Eq_50
  DataType: 
  OrigDataType: 
T_52: (in al : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_53: (in 0x13 : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_54: (in bios_video_set_mode(0x13) : void)
  Class: Eq_54
  DataType: void
  OrigDataType: void
T_55: (in fn0C00_0715 : ptr32)
  Class: Eq_55
  DataType: (ptr (fn T_58 (T_9)))
  OrigDataType: (ptr (fn T_58 (T_9)))
T_56: (in signature of fn0C00_0715 : void)
  Class: Eq_55
  DataType: 
  OrigDataType: 
T_57: (in ds : selector)
  Class: Eq_9
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_58: (in fn0C00_0715(ds_4) : void)
  Class: Eq_58
  DataType: void
  OrigDataType: void
T_59: (in fn0C00_0840 : ptr32)
  Class: Eq_59
  DataType: (ptr (fn T_61 ()))
  OrigDataType: (ptr (fn T_61 ()))
T_60: (in signature of fn0C00_0840 : void)
  Class: Eq_59
  DataType: 
  OrigDataType: 
T_61: (in fn0C00_0840() : void)
  Class: Eq_61
  DataType: void
  OrigDataType: void
T_62: (in 0xA000 : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_63: (in 0xFFFA : word16)
  Class: Eq_63
  DataType: word16
  OrigDataType: word16
T_64: (in fp + 0xFFFA : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in Mem32[ss:fp + 0xFFFA:word16] : word16)
  Class: Eq_62
  DataType: word16
  OrigDataType: word16
T_66: (in bx_200 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_67: (in 0x0000 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_68: (in es_33 : selector)
  Class: Eq_68
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_69: (in fp + 0xFFFA : word16)
  Class: Eq_69
  DataType: word16
  OrigDataType: word16
T_70: (in Mem32[ss:fp + 0xFFFA:selector] : selector)
  Class: Eq_68
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_71: (in ds_35 : selector)
  Class: Eq_71
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_72: (in 0xFFFC : word16)
  Class: Eq_72
  DataType: word16
  OrigDataType: word16
T_73: (in fp + 0xFFFC : word16)
  Class: Eq_73
  DataType: word16
  OrigDataType: word16
T_74: (in Mem32[ss:fp + 0xFFFC:selector] : selector)
  Class: Eq_71
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_75: (in sp_101 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_76: (in 0xFFFE : word16)
  Class: Eq_76
  DataType: word16
  OrigDataType: word16
T_77: (in fp + 0xFFFE : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_78: (in si_37 : word16)
  Class: Eq_78
  DataType: (memptr T_71 (struct 0002 (0 T_92 t0000)))
  OrigDataType: (memptr T_71 (struct 0002 (0 T_92 t0000)))
T_79: (in 0x0000 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_80: (in di_102 : word16)
  Class: Eq_16
  DataType: (memptr T_68 (struct 0002 (0 T_95 t0000)))
  OrigDataType: (memptr T_68 (struct 0002 (0 T_95 t0000)))
T_81: (in 0x0000 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_82: (in dx_43 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_83: (in 0x00C7 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_84: (in 0x0040 : word16)
  Class: Eq_84
  DataType: word16
  OrigDataType: word16
T_85: (in si_37 - 0x0040 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_86: (in 0x0001 : word16)
  Class: Eq_86
  DataType: word16
  OrigDataType: word16
T_87: (in dx_43 - 0x0001 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_88: (in 0x0000 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_89: (in dx_43 != 0x0000 : bool)
  Class: Eq_89
  DataType: bool
  OrigDataType: bool
T_90: (in 0x0000 : word16)
  Class: Eq_90
  DataType: word16
  OrigDataType: word16
T_91: (in si_37 + 0x0000 : word16)
  Class: Eq_91
  DataType: word16
  OrigDataType: word16
T_92: (in Mem32[ds_35:si_37 + 0x0000:word16] : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_93: (in 0x0000 : word16)
  Class: Eq_93
  DataType: word16
  OrigDataType: word16
T_94: (in di_102 + 0x0000 : word16)
  Class: Eq_94
  DataType: word16
  OrigDataType: word16
T_95: (in Mem70[es_33:di_102 + 0x0000:word16] : word16)
  Class: Eq_92
  DataType: word16
  OrigDataType: word16
T_96: (in 0x0002 : word16)
  Class: Eq_96
  DataType: word16
  OrigDataType: word16
T_97: (in si_37 + 0x0002 : word16)
  Class: Eq_78
  DataType: word16
  OrigDataType: word16
T_98: (in 0x0002 : word16)
  Class: Eq_98
  DataType: word16
  OrigDataType: word16
T_99: (in di_102 + 0x0002 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_100: (in cx_104 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_101: (in 0x0001 : word16)
  Class: Eq_101
  DataType: word16
  OrigDataType: word16
T_102: (in cx_104 - 0x0001 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_103: (in 0x0000 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_104: (in cx_104 == 0x0000 : bool)
  Class: Eq_104
  DataType: bool
  OrigDataType: bool
T_105: (in 0x00A0 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_106: (in sp_108 : word16)
  Class: Eq_106
  DataType: (memptr T_21 (struct (FFFFFFEC T_16 tFFFFFFEC) (FFFFFFEE T_16 tFFFFFFEE) (FFFFFFF0 T_16 tFFFFFFF0) (FFFFFFF2 T_16 tFFFFFFF2) (FFFFFFF4 T_16 tFFFFFFF4) (FFFFFFF6 T_16 tFFFFFFF6) (FFFFFFF8 T_16 tFFFFFFF8) (FFFFFFFA T_16 tFFFFFFFA) (FFFFFFFC T_16 tFFFFFFFC) (FFFFFFFE T_16 tFFFFFFFE) (0 T_16 t0000)))
  OrigDataType: (memptr T_21 (struct (FFFFFFEC T_16 tFFFFFFEC) (FFFFFFEE T_16 tFFFFFFEE) (FFFFFFF0 T_16 tFFFFFFF0) (FFFFFFF2 T_16 tFFFFFFF2) (FFFFFFF4 T_16 tFFFFFFF4) (FFFFFFF6 T_16 tFFFFFFF6) (FFFFFFF8 T_16 tFFFFFFF8) (FFFFFFFA T_16 tFFFFFFFA) (FFFFFFFC T_16 tFFFFFFFC) (FFFFFFFE T_16 tFFFFFFFE) (0 T_16 t0000)))
T_107: (in 0x0002 : word16)
  Class: Eq_107
  DataType: word16
  OrigDataType: word16
T_108: (in sp_101 - 0x0002 : word16)
  Class: Eq_106
  DataType: word16
  OrigDataType: word16
T_109: (in 0x0000 : word16)
  Class: Eq_109
  DataType: word16
  OrigDataType: word16
T_110: (in sp_108 + 0x0000 : word16)
  Class: Eq_110
  DataType: word16
  OrigDataType: word16
T_111: (in Mem109[ss:sp_108 + 0x0000:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_112: (in 0x0002 : word16)
  Class: Eq_112
  DataType: word16
  OrigDataType: word16
T_113: (in sp_108 - 0x0002 : word16)
  Class: Eq_113
  DataType: word16
  OrigDataType: word16
T_114: (in Mem111[ss:sp_108 - 0x0002:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_115: (in es_112 : selector)
  Class: Eq_16
  DataType: (ptr (segment (1260 (arr T_2350) a1260)))
  OrigDataType: (ptr (segment (1260 (arr T_2350) a1260)))
T_116: (in sp_108 - 0x0002 : word16)
  Class: Eq_116
  DataType: word16
  OrigDataType: word16
T_117: (in Mem111[ss:sp_108 - 0x0002:selector] : selector)
  Class: Eq_16
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_118: (in ds_114 : selector)
  Class: Eq_16
  DataType: (ptr (segment (147 T_127 t0147) (154 T_141 t0154) (254 T_173 t0254) (269 T_240 t0269) (870 T_135 t0870) (8D1 T_348 t08D1) (8F1 T_342 t08F1) (91F T_130 t091F) (920 T_148 t0920) (921 T_171 t0921)))
  OrigDataType: (ptr (segment (147 T_127 t0147) (154 T_141 t0154) (254 T_173 t0254) (269 T_240 t0269) (870 T_135 t0870) (8D1 T_348 t08D1) (8F1 T_342 t08F1) (91F T_130 t091F) (920 T_148 t0920) (921 T_171 t0921)))
T_119: (in 0x0000 : word16)
  Class: Eq_119
  DataType: word16
  OrigDataType: word16
T_120: (in sp_108 + 0x0000 : word16)
  Class: Eq_120
  DataType: word16
  OrigDataType: word16
T_121: (in Mem111[ss:sp_108 + 0x0000:selector] : selector)
  Class: Eq_16
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_122: (in 0x0000 : word16)
  Class: Eq_122
  DataType: word16
  OrigDataType: word16
T_123: (in sp_108 + 0x0000 : word16)
  Class: Eq_123
  DataType: word16
  OrigDataType: word16
T_124: (in Mem117[ss:sp_108 + 0x0000:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_125: (in 0x091F : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_126: (in 0x0147 : word16)
  Class: Eq_126
  DataType: (memptr T_118 (struct (0 T_127 t0000)))
  OrigDataType: (memptr T_118 (struct (0 T_127 t0000)))
T_127: (in Mem119[ds_114:0x0147:word16] : word16)
  Class: Eq_125
  DataType: word16
  OrigDataType: word16
T_128: (in ax_122 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in 0x091F : word16)
  Class: Eq_129
  DataType: (memptr T_118 (struct (0 T_130 t0000)))
  OrigDataType: (memptr T_118 (struct (0 T_130 t0000)))
T_130: (in Mem119[ds_114:0x091F:byte] : byte)
  Class: Eq_130
  DataType: byte
  OrigDataType: byte
T_131: (in (word16) Mem119[ds_114:0x091F:byte] : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_132: (in si_123 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_133: (in 0x0920 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_134: (in 0x0002 : word16)
  Class: Eq_134
  DataType: word16
  OrigDataType: word16
T_135: (in ax_122 << 0x0002 : word16)
  Class: Eq_135
  DataType: uint16
  OrigDataType: uint16
T_136: (in 0x0870 : word16)
  Class: Eq_136
  DataType: (memptr T_118 (struct (0 T_137 t0000)))
  OrigDataType: (memptr T_118 (struct (0 T_137 t0000)))
T_137: (in Mem119[ds_114:0x0870:word16] : word16)
  Class: Eq_135
  DataType: cups16
  OrigDataType: cups16
T_138: (in ax_122 << 0x0002 <=u Mem119[ds_114:0x0870:word16] : bool)
  Class: Eq_138
  DataType: bool
  OrigDataType: bool
T_139: (in ax_122 << 0x0002 : word16)
  Class: Eq_139
  DataType: ui16
  OrigDataType: ui16
T_140: (in 0x0154 : word16)
  Class: Eq_140
  DataType: (memptr T_118 (struct (0 T_141 t0000)))
  OrigDataType: (memptr T_118 (struct (0 T_141 t0000)))
T_141: (in Mem834[ds_114:0x0154:word16] : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_142: (in 0x0149 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_143: (in 0x0002 : word16)
  Class: Eq_143
  DataType: word16
  OrigDataType: word16
T_144: (in sp_108 - 0x0002 : word16)
  Class: Eq_144
  DataType: word16
  OrigDataType: word16
T_145: (in Mem836[ss:sp_108 - 0x0002:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_146: (in al_837 : byte)
  Class: Eq_146
  DataType: bcu8
  OrigDataType: bcu8
T_147: (in 0x0920 : word16)
  Class: Eq_147
  DataType: (memptr T_118 (struct (0 T_148 t0000)))
  OrigDataType: (memptr T_118 (struct (0 T_148 t0000)))
T_148: (in Mem836[ds_114:0x0920:byte] : byte)
  Class: Eq_146
  DataType: byte
  OrigDataType: byte
T_149: (in ax_838 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_150: (in ax_122 << 0x0002 : word16)
  Class: Eq_150
  DataType: ui16
  OrigDataType: ui16
T_151: (in DPB(ax_122 << 0x0002, al_837, 0, 8) : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_152: (in si_840 : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_153: (in 0x0921 : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_154: (in 0x01 : byte)
  Class: Eq_146
  DataType: bcu8
  OrigDataType: bcu8
T_155: (in al_837 >=u 0x01 : bool)
  Class: Eq_155
  DataType: bool
  OrigDataType: bool
T_156: (in dx_189 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_157: (in 0x0000 : word16)
  Class: Eq_157
  DataType: word16
  OrigDataType: word16
T_158: (in sp_108 + 0x0000 : word16)
  Class: Eq_158
  DataType: word16
  OrigDataType: word16
T_159: (in Mem119[ss:sp_108 + 0x0000:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_160: (in dl_190 : byte)
  Class: Eq_160
  DataType: byte
  OrigDataType: byte
T_161: (in (byte) dx_189 : byte)
  Class: Eq_160
  DataType: byte
  OrigDataType: byte
T_162: (in sp_192 : word16)
  Class: Eq_162
  DataType: word16
  OrigDataType: word16
T_163: (in 0x0002 : word16)
  Class: Eq_163
  DataType: word16
  OrigDataType: word16
T_164: (in sp_108 + 0x0002 : word16)
  Class: Eq_162
  DataType: word16
  OrigDataType: word16
T_165: (in 0x02 : byte)
  Class: Eq_165
  DataType: byte
  OrigDataType: byte
T_166: (in dl_190 & 0x02 : byte)
  Class: Eq_166
  DataType: byte
  OrigDataType: byte
T_167: (in 0x00 : byte)
  Class: Eq_166
  DataType: byte
  OrigDataType: byte
T_168: (in (dl_190 & 0x02) == 0x00 : bool)
  Class: Eq_168
  DataType: bool
  OrigDataType: bool
T_169: (in al_837 != 0x01 : bool)
  Class: Eq_169
  DataType: bool
  OrigDataType: bool
T_170: (in 0x0921 : word16)
  Class: Eq_170
  DataType: (memptr T_118 (struct (0 T_171 t0000)))
  OrigDataType: (memptr T_118 (struct (0 T_171 t0000)))
T_171: (in Mem836[ds_114:0x0921:word16] : word16)
  Class: Eq_171
  DataType: word16
  OrigDataType: word16
T_172: (in 0x0254 : word16)
  Class: Eq_172
  DataType: (memptr T_118 (struct (0 T_173 t0000)))
  OrigDataType: (memptr T_118 (struct (0 T_173 t0000)))
T_173: (in Mem849[ds_114:0x0254:word16] : word16)
  Class: Eq_171
  DataType: word16
  OrigDataType: word16
T_174: (in ax_208 : word16)
  Class: Eq_174
  DataType: (ptr (struct (0 (arr T_2349) a0000)))
  OrigDataType: (ptr (struct (0 (arr T_2349) a0000)))
T_175: (in SLICE(cs, byte, 8) : byte)
  Class: Eq_175
  DataType: byte
  OrigDataType: byte
T_176: (in 0x10 : byte)
  Class: Eq_176
  DataType: byte
  OrigDataType: byte
T_177: (in SLICE(cs, byte, 8) + 0x10 : byte)
  Class: Eq_177
  DataType: byte
  OrigDataType: byte
T_178: (in DPB(cs, SLICE(cs, byte, 8) + 0x10, 8, 8) : word16)
  Class: Eq_174
  DataType: word16
  OrigDataType: word16
T_179: (in es_209 : selector)
  Class: Eq_174
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_180: (in di_210 : word16)
  Class: Eq_180
  DataType: (memptr T_174 (struct 0001 (0 T_256 t0000)))
  OrigDataType: (memptr T_174 (struct 0001 (0 T_256 t0000)))
T_181: (in 0xBE00 : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_182: (in ax_215 : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_183: (in 0x00 : byte)
  Class: Eq_183
  DataType: byte
  OrigDataType: byte
T_184: (in DPB(ax_208, 0x00, 0, 8) : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_185: (in cx_218 : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_186: (in 0x0500 : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_187: (in ax_122 << 0x0002 : word16)
  Class: Eq_16
  DataType: ui16
  OrigDataType: ui16
T_188: (in 0x0000 : word16)
  Class: Eq_188
  DataType: word16
  OrigDataType: word16
T_189: (in sp_108 + 0x0000 : word16)
  Class: Eq_189
  DataType: word16
  OrigDataType: word16
T_190: (in Mem797[ss:sp_108 + 0x0000:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_191: (in 0x0002 : word16)
  Class: Eq_191
  DataType: word16
  OrigDataType: word16
T_192: (in sp_108 - 0x0002 : word16)
  Class: Eq_192
  DataType: word16
  OrigDataType: word16
T_193: (in Mem799[ss:sp_108 - 0x0002:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_194: (in 0x0004 : word16)
  Class: Eq_194
  DataType: word16
  OrigDataType: word16
T_195: (in sp_108 - 0x0004 : word16)
  Class: Eq_195
  DataType: word16
  OrigDataType: word16
T_196: (in Mem801[ss:sp_108 - 0x0004:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_197: (in 0x0006 : word16)
  Class: Eq_197
  DataType: word16
  OrigDataType: word16
T_198: (in sp_108 - 0x0006 : word16)
  Class: Eq_198
  DataType: word16
  OrigDataType: word16
T_199: (in Mem803[ss:sp_108 - 0x0006:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_200: (in 0x0008 : word16)
  Class: Eq_200
  DataType: word16
  OrigDataType: word16
T_201: (in sp_108 - 0x0008 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_202: (in sp_108 - 0x0008 : word16)
  Class: Eq_202
  DataType: word16
  OrigDataType: word16
T_203: (in Mem805[ss:sp_108 - 0x0008:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_204: (in 0x000A : word16)
  Class: Eq_204
  DataType: word16
  OrigDataType: word16
T_205: (in sp_108 - 0x000A : word16)
  Class: Eq_205
  DataType: word16
  OrigDataType: word16
T_206: (in Mem807[ss:sp_108 - 0x000A:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_207: (in 0x0920 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_208: (in 0x000C : word16)
  Class: Eq_208
  DataType: word16
  OrigDataType: word16
T_209: (in sp_108 - 0x000C : word16)
  Class: Eq_209
  DataType: word16
  OrigDataType: word16
T_210: (in Mem809[ss:sp_108 - 0x000C:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_211: (in 0x000E : word16)
  Class: Eq_211
  DataType: word16
  OrigDataType: word16
T_212: (in sp_108 - 0x000E : word16)
  Class: Eq_212
  DataType: word16
  OrigDataType: word16
T_213: (in Mem811[ss:sp_108 - 0x000E:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_214: (in fn0C00_0395 : ptr32)
  Class: Eq_214
  DataType: (ptr (fn T_220 (T_219, T_115, T_118)))
  OrigDataType: (ptr (fn T_220 (T_219, T_115, T_118)))
T_215: (in signature of fn0C00_0395 : void)
  Class: Eq_214
  DataType: 
  OrigDataType: 
T_216: (in cx : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_217: (in es : selector)
  Class: Eq_16
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_218: (in ds : selector)
  Class: Eq_16
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_219: (in 0x0005 : word16)
  Class: Eq_216
  DataType: word16
  OrigDataType: word16
T_220: (in fn0C00_0395(0x0005, es_112, ds_114) : void)
  Class: Eq_220
  DataType: void
  OrigDataType: void
T_221: (in 0x0004 : word16)
  Class: Eq_221
  DataType: word16
  OrigDataType: word16
T_222: (in sp_108 - 0x0004 : word16)
  Class: Eq_222
  DataType: word16
  OrigDataType: word16
T_223: (in Mem811[ss:sp_108 - 0x0004:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_224: (in 0x000C : word16)
  Class: Eq_224
  DataType: word16
  OrigDataType: word16
T_225: (in sp_108 - 0x000C : word16)
  Class: Eq_225
  DataType: word16
  OrigDataType: word16
T_226: (in Mem811[ss:sp_108 - 0x000C:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_227: (in 0x000A : word16)
  Class: Eq_227
  DataType: word16
  OrigDataType: word16
T_228: (in sp_108 - 0x000A : word16)
  Class: Eq_228
  DataType: word16
  OrigDataType: word16
T_229: (in Mem811[ss:sp_108 - 0x000A:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_230: (in 0x0006 : word16)
  Class: Eq_230
  DataType: word16
  OrigDataType: word16
T_231: (in sp_108 - 0x0006 : word16)
  Class: Eq_231
  DataType: word16
  OrigDataType: word16
T_232: (in Mem811[ss:sp_108 - 0x0006:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_233: (in (byte) dx_189 : byte)
  Class: Eq_160
  DataType: byte
  OrigDataType: byte
T_234: (in 0x0002 : word16)
  Class: Eq_234
  DataType: word16
  OrigDataType: word16
T_235: (in sp_108 + 0x0002 : word16)
  Class: Eq_162
  DataType: word16
  OrigDataType: word16
T_236: (in 0x03 : byte)
  Class: Eq_146
  DataType: bcu8
  OrigDataType: bcu8
T_237: (in al_837 >=u 0x03 : bool)
  Class: Eq_237
  DataType: bool
  OrigDataType: bool
T_238: (in 0x0921 : word16)
  Class: Eq_238
  DataType: word16
  OrigDataType: word16
T_239: (in 0x0269 : word16)
  Class: Eq_239
  DataType: (memptr T_118 (struct (0 T_240 t0000)))
  OrigDataType: (memptr T_118 (struct (0 T_240 t0000)))
T_240: (in Mem850[ds_114:0x0269:word16] : word16)
  Class: Eq_238
  DataType: word16
  OrigDataType: word16
T_241: (in si_1089 : word16)
  Class: Eq_152
  DataType: (memptr T_118 (struct (0 T_246 t0000)))
  OrigDataType: (memptr T_118 (struct (0 T_246 t0000)))
T_242: (in 0x0001 : word16)
  Class: Eq_242
  DataType: word16
  OrigDataType: word16
T_243: (in si_1089 + 0x0001 : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_244: (in 0x0000 : word16)
  Class: Eq_244
  DataType: word16
  OrigDataType: word16
T_245: (in si_1089 + 0x0000 : word16)
  Class: Eq_245
  DataType: word16
  OrigDataType: word16
T_246: (in Mem850[ds_114:si_1089 + 0x0000:byte] : byte)
  Class: Eq_246
  DataType: byte
  OrigDataType: byte
T_247: (in 0x00 : byte)
  Class: Eq_246
  DataType: byte
  OrigDataType: byte
T_248: (in Mem850[ds_114:si_1089 + 0x0000:byte] != 0x00 : bool)
  Class: Eq_248
  DataType: bool
  OrigDataType: bool
T_249: (in 0x01 : byte)
  Class: Eq_249
  DataType: byte
  OrigDataType: byte
T_250: (in dl_190 & 0x01 : byte)
  Class: Eq_250
  DataType: byte
  OrigDataType: byte
T_251: (in 0x00 : byte)
  Class: Eq_250
  DataType: byte
  OrigDataType: byte
T_252: (in (dl_190 & 0x01) == 0x00 : bool)
  Class: Eq_252
  DataType: bool
  OrigDataType: bool
T_253: (in 0x00 : byte)
  Class: Eq_253
  DataType: byte
  OrigDataType: byte
T_254: (in 0x0000 : word16)
  Class: Eq_254
  DataType: word16
  OrigDataType: word16
T_255: (in di_210 + 0x0000 : word16)
  Class: Eq_255
  DataType: word16
  OrigDataType: word16
T_256: (in Mem228[ax_208:di_210 + 0x0000:byte] : byte)
  Class: Eq_253
  DataType: byte
  OrigDataType: byte
T_257: (in 0x0001 : word16)
  Class: Eq_257
  DataType: word16
  OrigDataType: word16
T_258: (in di_210 + 0x0001 : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_259: (in 0x0001 : word16)
  Class: Eq_259
  DataType: word16
  OrigDataType: word16
T_260: (in cx_218 - 0x0001 : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_261: (in 0x0000 : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_262: (in cx_218 == 0x0000 : bool)
  Class: Eq_262
  DataType: bool
  OrigDataType: bool
T_263: (in 0x20 : byte)
  Class: Eq_263
  DataType: byte
  OrigDataType: byte
T_264: (in dl_190 & 0x20 : byte)
  Class: Eq_264
  DataType: byte
  OrigDataType: byte
T_265: (in 0x00 : byte)
  Class: Eq_264
  DataType: byte
  OrigDataType: byte
T_266: (in (dl_190 & 0x20) == 0x00 : bool)
  Class: Eq_266
  DataType: bool
  OrigDataType: bool
T_267: (in sp_729 : word16)
  Class: Eq_267
  DataType: (memptr T_21 (struct (FFFFFFF2 T_180 tFFFFFFF2) (FFFFFFF4 T_132 tFFFFFFF4) (FFFFFFF6 T_37 tFFFFFFF6) (FFFFFFF8 T_285 tFFFFFFF8) (FFFFFFFA T_66 tFFFFFFFA) (FFFFFFFC T_16 tFFFFFFFC) (FFFFFFFE T_185 tFFFFFFFE) (0 T_182 t0000)))
  OrigDataType: (memptr T_21 (struct (FFFFFFF2 T_180 tFFFFFFF2) (FFFFFFF4 T_132 tFFFFFFF4) (FFFFFFF6 T_37 tFFFFFFF6) (FFFFFFF8 T_285 tFFFFFFF8) (FFFFFFFA T_66 tFFFFFFFA) (FFFFFFFC T_16 tFFFFFFFC) (FFFFFFFE T_185 tFFFFFFFE) (0 T_182 t0000)))
T_268: (in 0x0002 : word16)
  Class: Eq_268
  DataType: word16
  OrigDataType: word16
T_269: (in sp_192 - 0x0002 : word16)
  Class: Eq_267
  DataType: word16
  OrigDataType: word16
T_270: (in 0x0000 : word16)
  Class: Eq_270
  DataType: word16
  OrigDataType: word16
T_271: (in sp_729 + 0x0000 : word16)
  Class: Eq_271
  DataType: word16
  OrigDataType: word16
T_272: (in Mem730[ss:sp_729 + 0x0000:word16] : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_273: (in 0x0002 : word16)
  Class: Eq_273
  DataType: word16
  OrigDataType: word16
T_274: (in sp_729 - 0x0002 : word16)
  Class: Eq_274
  DataType: word16
  OrigDataType: word16
T_275: (in Mem732[ss:sp_729 - 0x0002:word16] : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_276: (in 0x0004 : word16)
  Class: Eq_276
  DataType: word16
  OrigDataType: word16
T_277: (in sp_729 - 0x0004 : word16)
  Class: Eq_277
  DataType: word16
  OrigDataType: word16
T_278: (in Mem734[ss:sp_729 - 0x0004:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_279: (in 0x0006 : word16)
  Class: Eq_279
  DataType: word16
  OrigDataType: word16
T_280: (in sp_729 - 0x0006 : word16)
  Class: Eq_280
  DataType: word16
  OrigDataType: word16
T_281: (in Mem736[ss:sp_729 - 0x0006:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_282: (in 0x0008 : word16)
  Class: Eq_282
  DataType: word16
  OrigDataType: word16
T_283: (in sp_729 - 0x0008 : word16)
  Class: Eq_283
  DataType: word16
  OrigDataType: word16
T_284: (in sp_729 - 0x0008 : word16)
  Class: Eq_284
  DataType: word16
  OrigDataType: word16
T_285: (in Mem738[ss:sp_729 - 0x0008:word16] : word16)
  Class: Eq_283
  DataType: word16
  OrigDataType: word16
T_286: (in 0x000A : word16)
  Class: Eq_286
  DataType: word16
  OrigDataType: word16
T_287: (in sp_729 - 0x000A : word16)
  Class: Eq_287
  DataType: word16
  OrigDataType: word16
T_288: (in Mem740[ss:sp_729 - 0x000A:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_289: (in 0x000C : word16)
  Class: Eq_289
  DataType: word16
  OrigDataType: word16
T_290: (in sp_729 - 0x000C : word16)
  Class: Eq_290
  DataType: word16
  OrigDataType: word16
T_291: (in Mem742[ss:sp_729 - 0x000C:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_292: (in 0x000E : word16)
  Class: Eq_292
  DataType: word16
  OrigDataType: word16
T_293: (in sp_729 - 0x000E : word16)
  Class: Eq_293
  DataType: word16
  OrigDataType: word16
T_294: (in Mem744[ss:sp_729 - 0x000E:word16] : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_295: (in di_746 : word16)
  Class: Eq_295
  DataType: (memptr T_174 (struct 0004 (0 T_325 t0000)))
  OrigDataType: (memptr T_174 (struct 0004 (0 T_325 t0000)))
T_296: (in 0x0000 : word16)
  Class: Eq_295
  DataType: word16
  OrigDataType: word16
T_297: (in cx_748 : word16)
  Class: Eq_297
  DataType: word16
  OrigDataType: word16
T_298: (in 0x4000 : word16)
  Class: Eq_297
  DataType: word16
  OrigDataType: word16
T_299: (in 0x0004 : word16)
  Class: Eq_299
  DataType: word16
  OrigDataType: word16
T_300: (in sp_729 - 0x0004 : word16)
  Class: Eq_300
  DataType: word16
  OrigDataType: word16
T_301: (in Mem744[ss:sp_729 - 0x0004:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_302: (in sp_729 - 0x000E : word16)
  Class: Eq_302
  DataType: word16
  OrigDataType: word16
T_303: (in Mem744[ss:sp_729 - 0x000E:word16] : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_304: (in 0x000C : word16)
  Class: Eq_304
  DataType: word16
  OrigDataType: word16
T_305: (in sp_729 - 0x000C : word16)
  Class: Eq_305
  DataType: word16
  OrigDataType: word16
T_306: (in Mem744[ss:sp_729 - 0x000C:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_307: (in 0x000A : word16)
  Class: Eq_307
  DataType: word16
  OrigDataType: word16
T_308: (in sp_729 - 0x000A : word16)
  Class: Eq_308
  DataType: word16
  OrigDataType: word16
T_309: (in Mem744[ss:sp_729 - 0x000A:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_310: (in 0x0006 : word16)
  Class: Eq_310
  DataType: word16
  OrigDataType: word16
T_311: (in sp_729 - 0x0006 : word16)
  Class: Eq_311
  DataType: word16
  OrigDataType: word16
T_312: (in Mem744[ss:sp_729 - 0x0006:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_313: (in (byte) dx_189 : byte)
  Class: Eq_160
  DataType: byte
  OrigDataType: byte
T_314: (in 0x0002 : word16)
  Class: Eq_314
  DataType: word16
  OrigDataType: word16
T_315: (in sp_729 - 0x0002 : word16)
  Class: Eq_315
  DataType: word16
  OrigDataType: word16
T_316: (in Mem744[ss:sp_729 - 0x0002:word16] : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_317: (in 0x0000 : word16)
  Class: Eq_317
  DataType: word16
  OrigDataType: word16
T_318: (in sp_729 + 0x0000 : word16)
  Class: Eq_318
  DataType: word16
  OrigDataType: word16
T_319: (in Mem744[ss:sp_729 + 0x0000:word16] : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_320: (in 0x0002 : word16)
  Class: Eq_320
  DataType: word16
  OrigDataType: word16
T_321: (in sp_729 + 0x0002 : word16)
  Class: Eq_162
  DataType: word16
  OrigDataType: word16
T_322: (in 0x00000000 : word32)
  Class: Eq_322
  DataType: word32
  OrigDataType: word32
T_323: (in 0x0000 : word16)
  Class: Eq_323
  DataType: word16
  OrigDataType: word16
T_324: (in di_746 + 0x0000 : word16)
  Class: Eq_324
  DataType: word16
  OrigDataType: word16
T_325: (in Mem763[ax_208:di_746 + 0x0000:word32] : word32)
  Class: Eq_322
  DataType: word32
  OrigDataType: word32
T_326: (in 0x0004 : word16)
  Class: Eq_326
  DataType: word16
  OrigDataType: word16
T_327: (in di_746 + 0x0004 : word16)
  Class: Eq_295
  DataType: word16
  OrigDataType: word16
T_328: (in 0x0001 : word16)
  Class: Eq_328
  DataType: word16
  OrigDataType: word16
T_329: (in cx_748 - 0x0001 : word16)
  Class: Eq_297
  DataType: word16
  OrigDataType: word16
T_330: (in 0x0000 : word16)
  Class: Eq_297
  DataType: word16
  OrigDataType: word16
T_331: (in cx_748 == 0x0000 : bool)
  Class: Eq_331
  DataType: bool
  OrigDataType: bool
T_332: (in al_837 != 0x03 : bool)
  Class: Eq_332
  DataType: bool
  OrigDataType: bool
T_333: (in 0x0300 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_334: (in 0x0004 : word16)
  Class: Eq_334
  DataType: word16
  OrigDataType: word16
T_335: (in sp_108 - 0x0004 : word16)
  Class: Eq_335
  DataType: word16
  OrigDataType: word16
T_336: (in Mem875[ss:sp_108 - 0x0004:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_337: (in di_863 : word16)
  Class: Eq_337
  DataType: (memptr T_115 (struct 0001 (0 T_352 t0000)))
  OrigDataType: (memptr T_115 (struct 0001 (0 T_352 t0000)))
T_338: (in 0x1260 : word16)
  Class: Eq_337
  DataType: word16
  OrigDataType: word16
T_339: (in cx_870 : word16)
  Class: Eq_339
  DataType: word16
  OrigDataType: word16
T_340: (in 0x0300 : word16)
  Class: Eq_339
  DataType: word16
  OrigDataType: word16
T_341: (in 0x08F1 : word16)
  Class: Eq_341
  DataType: (memptr T_118 (struct (0 T_342 t0000)))
  OrigDataType: (memptr T_118 (struct (0 T_342 t0000)))
T_342: (in Mem875[ds_114:0x08F1:byte] : byte)
  Class: Eq_342
  DataType: byte
  OrigDataType: byte
T_343: (in 0x08 : byte)
  Class: Eq_343
  DataType: byte
  OrigDataType: byte
T_344: (in Mem875[ds_114:0x08F1:byte] ^ 0x08 : byte)
  Class: Eq_342
  DataType: byte
  OrigDataType: byte
T_345: (in Mem892[ds_114:0x08F1:byte] : byte)
  Class: Eq_342
  DataType: byte
  OrigDataType: byte
T_346: (in 0x0040 : word16)
  Class: Eq_346
  DataType: word16
  OrigDataType: word16
T_347: (in 0x08D1 : word16)
  Class: Eq_347
  DataType: (memptr T_118 (struct (0 T_348 t0000)))
  OrigDataType: (memptr T_118 (struct (0 T_348 t0000)))
T_348: (in Mem895[ds_114:0x08D1:word16] : word16)
  Class: Eq_346
  DataType: word16
  OrigDataType: word16
T_349: (in 0x00 : byte)
  Class: Eq_349
  DataType: byte
  OrigDataType: byte
T_350: (in 0x0000 : word16)
  Class: Eq_350
  DataType: word16
  OrigDataType: word16
T_351: (in di_863 + 0x0000 : word16)
  Class: Eq_351
  DataType: word16
  OrigDataType: word16
T_352: (in Mem882[es_112:di_863 + 0x0000:byte] : byte)
  Class: Eq_349
  DataType: byte
  OrigDataType: byte
T_353: (in 0x0001 : word16)
  Class: Eq_353
  DataType: word16
  OrigDataType: word16
T_354: (in di_863 + 0x0001 : word16)
  Class: Eq_337
  DataType: word16
  OrigDataType: word16
T_355: (in 0x0001 : word16)
  Class: Eq_355
  DataType: word16
  OrigDataType: word16
T_356: (in cx_870 - 0x0001 : word16)
  Class: Eq_339
  DataType: word16
  OrigDataType: word16
T_357: (in 0x0000 : word16)
  Class: Eq_339
  DataType: word16
  OrigDataType: word16
T_358: (in cx_870 == 0x0000 : bool)
  Class: Eq_358
  DataType: bool
  OrigDataType: bool
T_359: (in 0x05 : byte)
  Class: Eq_146
  DataType: bcu8
  OrigDataType: bcu8
T_360: (in al_837 >=u 0x05 : bool)
  Class: Eq_360
  DataType: bool
  OrigDataType: bool
T_361: (in di_896 : word16)
  Class: Eq_361
  DataType: (memptr T_16 (struct 0001 (FFFFFFFD T_506 tFFFFFFFD) (0 T_427 t0000)))
  OrigDataType: (memptr T_16 (struct 0001 (FFFFFFFD T_506 tFFFFFFFD) (0 T_427 t0000)))
T_362: (in 0x0F60 : word16)
  Class: Eq_361
  DataType: word16
  OrigDataType: word16
T_363: (in cx_904 : word16)
  Class: Eq_363
  DataType: word16
  OrigDataType: word16
T_364: (in 0x0300 : word16)
  Class: Eq_363
  DataType: word16
  OrigDataType: word16
T_365: (in 0x08 : byte)
  Class: Eq_365
  DataType: byte
  OrigDataType: byte
T_366: (in dl_190 & 0x08 : byte)
  Class: Eq_366
  DataType: byte
  OrigDataType: byte
T_367: (in 0x00 : byte)
  Class: Eq_366
  DataType: byte
  OrigDataType: byte
T_368: (in (dl_190 & 0x08) == 0x00 : bool)
  Class: Eq_368
  DataType: bool
  OrigDataType: bool
T_369: (in sp_687 : word16)
  Class: Eq_369
  DataType: (memptr T_21 (struct (FFFFFFF2 T_180 tFFFFFFF2) (FFFFFFF4 T_132 tFFFFFFF4) (FFFFFFF6 T_37 tFFFFFFF6) (FFFFFFF8 T_387 tFFFFFFF8) (FFFFFFFA T_66 tFFFFFFFA) (FFFFFFFC T_16 tFFFFFFFC) (FFFFFFFE T_185 tFFFFFFFE) (0 T_182 t0000)))
  OrigDataType: (memptr T_21 (struct (FFFFFFF2 T_180 tFFFFFFF2) (FFFFFFF4 T_132 tFFFFFFF4) (FFFFFFF6 T_37 tFFFFFFF6) (FFFFFFF8 T_387 tFFFFFFF8) (FFFFFFFA T_66 tFFFFFFFA) (FFFFFFFC T_16 tFFFFFFFC) (FFFFFFFE T_185 tFFFFFFFE) (0 T_182 t0000)))
T_370: (in 0x0002 : word16)
  Class: Eq_370
  DataType: word16
  OrigDataType: word16
T_371: (in sp_192 - 0x0002 : word16)
  Class: Eq_369
  DataType: word16
  OrigDataType: word16
T_372: (in 0x0000 : word16)
  Class: Eq_372
  DataType: word16
  OrigDataType: word16
T_373: (in sp_687 + 0x0000 : word16)
  Class: Eq_373
  DataType: word16
  OrigDataType: word16
T_374: (in Mem688[ss:sp_687 + 0x0000:word16] : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_375: (in 0x0002 : word16)
  Class: Eq_375
  DataType: word16
  OrigDataType: word16
T_376: (in sp_687 - 0x0002 : word16)
  Class: Eq_376
  DataType: word16
  OrigDataType: word16
T_377: (in Mem690[ss:sp_687 - 0x0002:word16] : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_378: (in 0x0004 : word16)
  Class: Eq_378
  DataType: word16
  OrigDataType: word16
T_379: (in sp_687 - 0x0004 : word16)
  Class: Eq_379
  DataType: word16
  OrigDataType: word16
T_380: (in Mem692[ss:sp_687 - 0x0004:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_381: (in 0x0006 : word16)
  Class: Eq_381
  DataType: word16
  OrigDataType: word16
T_382: (in sp_687 - 0x0006 : word16)
  Class: Eq_382
  DataType: word16
  OrigDataType: word16
T_383: (in Mem694[ss:sp_687 - 0x0006:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_384: (in 0x0008 : word16)
  Class: Eq_384
  DataType: word16
  OrigDataType: word16
T_385: (in sp_687 - 0x0008 : word16)
  Class: Eq_385
  DataType: word16
  OrigDataType: word16
T_386: (in sp_687 - 0x0008 : word16)
  Class: Eq_386
  DataType: word16
  OrigDataType: word16
T_387: (in Mem696[ss:sp_687 - 0x0008:word16] : word16)
  Class: Eq_385
  DataType: word16
  OrigDataType: word16
T_388: (in 0x000A : word16)
  Class: Eq_388
  DataType: word16
  OrigDataType: word16
T_389: (in sp_687 - 0x000A : word16)
  Class: Eq_389
  DataType: word16
  OrigDataType: word16
T_390: (in Mem698[ss:sp_687 - 0x000A:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_391: (in 0x000C : word16)
  Class: Eq_391
  DataType: word16
  OrigDataType: word16
T_392: (in sp_687 - 0x000C : word16)
  Class: Eq_392
  DataType: word16
  OrigDataType: word16
T_393: (in Mem700[ss:sp_687 - 0x000C:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_394: (in 0x000E : word16)
  Class: Eq_394
  DataType: word16
  OrigDataType: word16
T_395: (in sp_687 - 0x000E : word16)
  Class: Eq_395
  DataType: word16
  OrigDataType: word16
T_396: (in Mem702[ss:sp_687 - 0x000E:word16] : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_397: (in fn0C00_0695 : ptr32)
  Class: Eq_397
  DataType: (ptr (fn T_399 ()))
  OrigDataType: (ptr (fn T_399 ()))
T_398: (in signature of fn0C00_0695 : void)
  Class: Eq_397
  DataType: 
  OrigDataType: 
T_399: (in fn0C00_0695() : void)
  Class: Eq_399
  DataType: void
  OrigDataType: void
T_400: (in 0x0004 : word16)
  Class: Eq_400
  DataType: word16
  OrigDataType: word16
T_401: (in sp_687 - 0x0004 : word16)
  Class: Eq_401
  DataType: word16
  OrigDataType: word16
T_402: (in Mem702[ss:sp_687 - 0x0004:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_403: (in sp_687 - 0x000E : word16)
  Class: Eq_403
  DataType: word16
  OrigDataType: word16
T_404: (in Mem702[ss:sp_687 - 0x000E:word16] : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_405: (in 0x000C : word16)
  Class: Eq_405
  DataType: word16
  OrigDataType: word16
T_406: (in sp_687 - 0x000C : word16)
  Class: Eq_406
  DataType: word16
  OrigDataType: word16
T_407: (in Mem702[ss:sp_687 - 0x000C:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_408: (in 0x000A : word16)
  Class: Eq_408
  DataType: word16
  OrigDataType: word16
T_409: (in sp_687 - 0x000A : word16)
  Class: Eq_409
  DataType: word16
  OrigDataType: word16
T_410: (in Mem702[ss:sp_687 - 0x000A:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_411: (in 0x0006 : word16)
  Class: Eq_411
  DataType: word16
  OrigDataType: word16
T_412: (in sp_687 - 0x0006 : word16)
  Class: Eq_412
  DataType: word16
  OrigDataType: word16
T_413: (in Mem702[ss:sp_687 - 0x0006:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_414: (in (byte) dx_189 : byte)
  Class: Eq_160
  DataType: byte
  OrigDataType: byte
T_415: (in 0x0002 : word16)
  Class: Eq_415
  DataType: word16
  OrigDataType: word16
T_416: (in sp_687 - 0x0002 : word16)
  Class: Eq_416
  DataType: word16
  OrigDataType: word16
T_417: (in Mem702[ss:sp_687 - 0x0002:word16] : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_418: (in 0x0000 : word16)
  Class: Eq_418
  DataType: word16
  OrigDataType: word16
T_419: (in sp_687 + 0x0000 : word16)
  Class: Eq_419
  DataType: word16
  OrigDataType: word16
T_420: (in Mem702[ss:sp_687 + 0x0000:word16] : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_421: (in 0x0002 : word16)
  Class: Eq_421
  DataType: word16
  OrigDataType: word16
T_422: (in sp_687 + 0x0002 : word16)
  Class: Eq_162
  DataType: word16
  OrigDataType: word16
T_423: (in 0x00 : byte)
  Class: Eq_423
  DataType: byte
  OrigDataType: byte
T_424: (in DPB(cx_904, 0x00, 8, 8) : word16)
  Class: Eq_363
  DataType: word16
  OrigDataType: word16
T_425: (in 0x0000 : word16)
  Class: Eq_363
  DataType: word16
  OrigDataType: word16
T_426: (in cx_904 == 0x0000 : bool)
  Class: Eq_426
  DataType: bool
  OrigDataType: bool
T_427: (in 0x0000 : word16)
  Class: Eq_427
  DataType: word16
  OrigDataType: word16
T_428: (in 0x0000 : word16)
  Class: Eq_428
  DataType: word16
  OrigDataType: word16
T_429: (in di_896 + 0x0000 : word16)
  Class: Eq_429
  DataType: word16
  OrigDataType: word16
T_430: (in Mem914[es_112:di_896 + 0x0000:word16] : word16)
  Class: Eq_427
  DataType: word16
  OrigDataType: word16
T_431: (in 0x0002 : word16)
  Class: Eq_431
  DataType: word16
  OrigDataType: word16
T_432: (in di_896 + 0x0002 : word16)
  Class: Eq_361
  DataType: word16
  OrigDataType: word16
T_433: (in 0x0001 : word16)
  Class: Eq_433
  DataType: word16
  OrigDataType: word16
T_434: (in cx_904 - 0x0001 : word16)
  Class: Eq_363
  DataType: word16
  OrigDataType: word16
T_435: (in 0x0000 : word16)
  Class: Eq_363
  DataType: word16
  OrigDataType: word16
T_436: (in cx_904 == 0x0000 : bool)
  Class: Eq_436
  DataType: bool
  OrigDataType: bool
T_437: (in 0x04 : byte)
  Class: Eq_437
  DataType: byte
  OrigDataType: byte
T_438: (in dl_190 & 0x04 : byte)
  Class: Eq_438
  DataType: byte
  OrigDataType: byte
T_439: (in 0x00 : byte)
  Class: Eq_438
  DataType: byte
  OrigDataType: byte
T_440: (in (dl_190 & 0x04) == 0x00 : bool)
  Class: Eq_440
  DataType: bool
  OrigDataType: bool
T_441: (in sp_639 : word16)
  Class: Eq_441
  DataType: (memptr T_21 (struct (FFFFFFF2 T_180 tFFFFFFF2) (FFFFFFF4 T_132 tFFFFFFF4) (FFFFFFF6 T_37 tFFFFFFF6) (FFFFFFF8 T_459 tFFFFFFF8) (FFFFFFFA T_66 tFFFFFFFA) (FFFFFFFC T_16 tFFFFFFFC) (FFFFFFFE T_185 tFFFFFFFE) (0 T_182 t0000)))
  OrigDataType: (memptr T_21 (struct (FFFFFFF2 T_180 tFFFFFFF2) (FFFFFFF4 T_132 tFFFFFFF4) (FFFFFFF6 T_37 tFFFFFFF6) (FFFFFFF8 T_459 tFFFFFFF8) (FFFFFFFA T_66 tFFFFFFFA) (FFFFFFFC T_16 tFFFFFFFC) (FFFFFFFE T_185 tFFFFFFFE) (0 T_182 t0000)))
T_442: (in 0x0002 : word16)
  Class: Eq_442
  DataType: word16
  OrigDataType: word16
T_443: (in sp_192 - 0x0002 : word16)
  Class: Eq_441
  DataType: word16
  OrigDataType: word16
T_444: (in 0x0000 : word16)
  Class: Eq_444
  DataType: word16
  OrigDataType: word16
T_445: (in sp_639 + 0x0000 : word16)
  Class: Eq_445
  DataType: word16
  OrigDataType: word16
T_446: (in Mem640[ss:sp_639 + 0x0000:word16] : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_447: (in 0x0002 : word16)
  Class: Eq_447
  DataType: word16
  OrigDataType: word16
T_448: (in sp_639 - 0x0002 : word16)
  Class: Eq_448
  DataType: word16
  OrigDataType: word16
T_449: (in Mem642[ss:sp_639 - 0x0002:word16] : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_450: (in 0x0004 : word16)
  Class: Eq_450
  DataType: word16
  OrigDataType: word16
T_451: (in sp_639 - 0x0004 : word16)
  Class: Eq_451
  DataType: word16
  OrigDataType: word16
T_452: (in Mem644[ss:sp_639 - 0x0004:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_453: (in 0x0006 : word16)
  Class: Eq_453
  DataType: word16
  OrigDataType: word16
T_454: (in sp_639 - 0x0006 : word16)
  Class: Eq_454
  DataType: word16
  OrigDataType: word16
T_455: (in Mem646[ss:sp_639 - 0x0006:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_456: (in 0x0008 : word16)
  Class: Eq_456
  DataType: word16
  OrigDataType: word16
T_457: (in sp_639 - 0x0008 : word16)
  Class: Eq_457
  DataType: word16
  OrigDataType: word16
T_458: (in sp_639 - 0x0008 : word16)
  Class: Eq_458
  DataType: word16
  OrigDataType: word16
T_459: (in Mem648[ss:sp_639 - 0x0008:word16] : word16)
  Class: Eq_457
  DataType: word16
  OrigDataType: word16
T_460: (in 0x000A : word16)
  Class: Eq_460
  DataType: word16
  OrigDataType: word16
T_461: (in sp_639 - 0x000A : word16)
  Class: Eq_461
  DataType: word16
  OrigDataType: word16
T_462: (in Mem650[ss:sp_639 - 0x000A:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_463: (in 0x000C : word16)
  Class: Eq_463
  DataType: word16
  OrigDataType: word16
T_464: (in sp_639 - 0x000C : word16)
  Class: Eq_464
  DataType: word16
  OrigDataType: word16
T_465: (in Mem652[ss:sp_639 - 0x000C:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_466: (in 0x000E : word16)
  Class: Eq_466
  DataType: word16
  OrigDataType: word16
T_467: (in sp_639 - 0x000E : word16)
  Class: Eq_467
  DataType: word16
  OrigDataType: word16
T_468: (in Mem654[ss:sp_639 - 0x000E:word16] : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_469: (in ax_658 : word16)
  Class: Eq_174
  DataType: word16
  OrigDataType: word16
T_470: (in SLICE(cs, byte, 8) : byte)
  Class: Eq_470
  DataType: byte
  OrigDataType: byte
T_471: (in 0x10 : byte)
  Class: Eq_471
  DataType: byte
  OrigDataType: byte
T_472: (in SLICE(cs, byte, 8) + 0x10 : byte)
  Class: Eq_472
  DataType: byte
  OrigDataType: byte
T_473: (in DPB(cs, SLICE(cs, byte, 8) + 0x10, 8, 8) : word16)
  Class: Eq_174
  DataType: word16
  OrigDataType: word16
T_474: (in fn0C00_0402 : ptr32)
  Class: Eq_474
  DataType: (ptr (fn T_478 (T_469, T_118)))
  OrigDataType: (ptr (fn T_478 (T_469, T_118)))
T_475: (in signature of fn0C00_0402 : void)
  Class: Eq_474
  DataType: 
  OrigDataType: 
T_476: (in es : selector)
  Class: Eq_174
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_477: (in ds : selector)
  Class: Eq_16
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_478: (in fn0C00_0402(ax_658, ds_114) : void)
  Class: Eq_478
  DataType: void
  OrigDataType: void
T_479: (in 0x0004 : word16)
  Class: Eq_479
  DataType: word16
  OrigDataType: word16
T_480: (in sp_639 - 0x0004 : word16)
  Class: Eq_480
  DataType: word16
  OrigDataType: word16
T_481: (in Mem654[ss:sp_639 - 0x0004:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_482: (in sp_639 - 0x000E : word16)
  Class: Eq_482
  DataType: word16
  OrigDataType: word16
T_483: (in Mem654[ss:sp_639 - 0x000E:word16] : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_484: (in 0x000C : word16)
  Class: Eq_484
  DataType: word16
  OrigDataType: word16
T_485: (in sp_639 - 0x000C : word16)
  Class: Eq_485
  DataType: word16
  OrigDataType: word16
T_486: (in Mem654[ss:sp_639 - 0x000C:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_487: (in 0x000A : word16)
  Class: Eq_487
  DataType: word16
  OrigDataType: word16
T_488: (in sp_639 - 0x000A : word16)
  Class: Eq_488
  DataType: word16
  OrigDataType: word16
T_489: (in Mem654[ss:sp_639 - 0x000A:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_490: (in 0x0006 : word16)
  Class: Eq_490
  DataType: word16
  OrigDataType: word16
T_491: (in sp_639 - 0x0006 : word16)
  Class: Eq_491
  DataType: word16
  OrigDataType: word16
T_492: (in Mem654[ss:sp_639 - 0x0006:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_493: (in (byte) dx_189 : byte)
  Class: Eq_160
  DataType: byte
  OrigDataType: byte
T_494: (in 0x0002 : word16)
  Class: Eq_494
  DataType: word16
  OrigDataType: word16
T_495: (in sp_639 - 0x0002 : word16)
  Class: Eq_495
  DataType: word16
  OrigDataType: word16
T_496: (in Mem654[ss:sp_639 - 0x0002:word16] : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_497: (in 0x0000 : word16)
  Class: Eq_497
  DataType: word16
  OrigDataType: word16
T_498: (in sp_639 + 0x0000 : word16)
  Class: Eq_498
  DataType: word16
  OrigDataType: word16
T_499: (in Mem654[ss:sp_639 + 0x0000:word16] : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_500: (in 0x0002 : word16)
  Class: Eq_500
  DataType: word16
  OrigDataType: word16
T_501: (in sp_639 + 0x0002 : word16)
  Class: Eq_162
  DataType: word16
  OrigDataType: word16
T_502: (in bx_947 : word16)
  Class: Eq_502
  DataType: (memptr T_118 (struct (0 T_508 t0000)))
  OrigDataType: (memptr T_118 (struct (0 T_508 t0000)))
T_503: (in 0x0003 : word16)
  Class: Eq_502
  DataType: word16
  OrigDataType: word16
T_504: (in 0x0003 : word16)
  Class: Eq_504
  DataType: word16
  OrigDataType: word16
T_505: (in di_896 - 0x0003 : word16)
  Class: Eq_505
  DataType: word16
  OrigDataType: word16
T_506: (in Mem836[ds_114:di_896 - 0x0003:byte] : byte)
  Class: Eq_506
  DataType: byte
  OrigDataType: byte
T_507: (in bx_947 + si_840 : word16)
  Class: Eq_507
  DataType: word16
  OrigDataType: word16
T_508: (in Mem836[ds_114:bx_947 + si_840:byte] : byte)
  Class: Eq_508
  DataType: byte
  OrigDataType: byte
T_509: (in Mem836[ds_114:di_896 - 0x0003:byte] + Mem836[ds_114:bx_947 + si_840:byte] : byte)
  Class: Eq_427
  DataType: byte
  OrigDataType: byte
T_510: (in 0x0000 : word16)
  Class: Eq_510
  DataType: word16
  OrigDataType: word16
T_511: (in di_896 + 0x0000 : word16)
  Class: Eq_511
  DataType: word16
  OrigDataType: word16
T_512: (in Mem956[es_112:di_896 + 0x0000:byte] : byte)
  Class: Eq_427
  DataType: byte
  OrigDataType: byte
T_513: (in 0x0001 : word16)
  Class: Eq_513
  DataType: word16
  OrigDataType: word16
T_514: (in di_896 + 0x0001 : word16)
  Class: Eq_361
  DataType: word16
  OrigDataType: word16
T_515: (in 0x0001 : word16)
  Class: Eq_515
  DataType: word16
  OrigDataType: word16
T_516: (in bx_947 - 0x0001 : word16)
  Class: Eq_502
  DataType: word16
  OrigDataType: word16
T_517: (in 0x0000 : word16)
  Class: Eq_502
  DataType: word16
  OrigDataType: word16
T_518: (in bx_947 != 0x0000 : bool)
  Class: Eq_518
  DataType: bool
  OrigDataType: bool
T_519: (in 0x0001 : word16)
  Class: Eq_519
  DataType: word16
  OrigDataType: word16
T_520: (in cx_904 - 0x0001 : word16)
  Class: Eq_363
  DataType: word16
  OrigDataType: word16
T_521: (in 0x0000 : word16)
  Class: Eq_363
  DataType: word16
  OrigDataType: word16
T_522: (in cx_904 != 0x0000 : bool)
  Class: Eq_522
  DataType: bool
  OrigDataType: bool
T_523: (in 0x0004 : word16)
  Class: Eq_523
  DataType: word16
  OrigDataType: word16
T_524: (in si_840 + 0x0004 : word16)
  Class: Eq_152
  DataType: word16
  OrigDataType: word16
T_525: (in sp_326 : word16)
  Class: Eq_525
  DataType: (memptr T_21 (struct (FFFFFFEC T_553 tFFFFFFEC) (FFFFFFEE T_691 tFFFFFFEE) (FFFFFFF0 T_688 tFFFFFFF0) (FFFFFFF2 T_180 tFFFFFFF2) (FFFFFFF4 T_132 tFFFFFFF4) (FFFFFFF6 T_37 tFFFFFFF6) (FFFFFFF8 T_541 tFFFFFFF8) (FFFFFFFA T_66 tFFFFFFFA) (FFFFFFFC T_16 tFFFFFFFC) (FFFFFFFE T_185 tFFFFFFFE) (0 T_182 t0000)))
  OrigDataType: (memptr T_21 (struct (FFFFFFEC T_553 tFFFFFFEC) (FFFFFFEE T_691 tFFFFFFEE) (FFFFFFF0 T_688 tFFFFFFF0) (FFFFFFF2 T_180 tFFFFFFF2) (FFFFFFF4 T_132 tFFFFFFF4) (FFFFFFF6 T_37 tFFFFFFF6) (FFFFFFF8 T_541 tFFFFFFF8) (FFFFFFFA T_66 tFFFFFFFA) (FFFFFFFC T_16 tFFFFFFFC) (FFFFFFFE T_185 tFFFFFFFE) (0 T_182 t0000)))
T_526: (in 0x0002 : word16)
  Class: Eq_526
  DataType: word16
  OrigDataType: word16
T_527: (in sp_192 - 0x0002 : word16)
  Class: Eq_525
  DataType: word16
  OrigDataType: word16
T_528: (in 0x0000 : word16)
  Class: Eq_528
  DataType: word16
  OrigDataType: word16
T_529: (in sp_326 + 0x0000 : word16)
  Class: Eq_529
  DataType: word16
  OrigDataType: word16
T_530: (in Mem327[ss:sp_326 + 0x0000:word16] : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_531: (in 0x0002 : word16)
  Class: Eq_531
  DataType: word16
  OrigDataType: word16
T_532: (in sp_326 - 0x0002 : word16)
  Class: Eq_532
  DataType: word16
  OrigDataType: word16
T_533: (in Mem329[ss:sp_326 - 0x0002:word16] : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_534: (in 0x0004 : word16)
  Class: Eq_534
  DataType: word16
  OrigDataType: word16
T_535: (in sp_326 - 0x0004 : word16)
  Class: Eq_535
  DataType: word16
  OrigDataType: word16
T_536: (in Mem331[ss:sp_326 - 0x0004:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_537: (in 0x0006 : word16)
  Class: Eq_537
  DataType: word16
  OrigDataType: word16
T_538: (in sp_326 - 0x0006 : word16)
  Class: Eq_538
  DataType: word16
  OrigDataType: word16
T_539: (in Mem333[ss:sp_326 - 0x0006:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_540: (in 0x0008 : word16)
  Class: Eq_540
  DataType: word16
  OrigDataType: word16
T_541: (in sp_326 - 0x0008 : word16)
  Class: Eq_541
  DataType: word16
  OrigDataType: word16
T_542: (in sp_326 - 0x0008 : word16)
  Class: Eq_542
  DataType: word16
  OrigDataType: word16
T_543: (in Mem335[ss:sp_326 - 0x0008:word16] : word16)
  Class: Eq_541
  DataType: word16
  OrigDataType: word16
T_544: (in 0x000A : word16)
  Class: Eq_544
  DataType: word16
  OrigDataType: word16
T_545: (in sp_326 - 0x000A : word16)
  Class: Eq_545
  DataType: word16
  OrigDataType: word16
T_546: (in Mem337[ss:sp_326 - 0x000A:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_547: (in 0x000C : word16)
  Class: Eq_547
  DataType: word16
  OrigDataType: word16
T_548: (in sp_326 - 0x000C : word16)
  Class: Eq_548
  DataType: word16
  OrigDataType: word16
T_549: (in Mem339[ss:sp_326 - 0x000C:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_550: (in 0x000E : word16)
  Class: Eq_550
  DataType: word16
  OrigDataType: word16
T_551: (in sp_326 - 0x000E : word16)
  Class: Eq_551
  DataType: word16
  OrigDataType: word16
T_552: (in Mem341[ss:sp_326 - 0x000E:word16] : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_553: (in ax_345 : word16)
  Class: Eq_553
  DataType: (ptr (struct (0 (arr T_2351) a0000)))
  OrigDataType: (ptr (struct (0 (arr T_2351) a0000)))
T_554: (in SLICE(cs, byte, 8) : byte)
  Class: Eq_554
  DataType: byte
  OrigDataType: byte
T_555: (in 0x10 : byte)
  Class: Eq_555
  DataType: byte
  OrigDataType: byte
T_556: (in SLICE(cs, byte, 8) + 0x10 : byte)
  Class: Eq_556
  DataType: byte
  OrigDataType: byte
T_557: (in DPB(cs, SLICE(cs, byte, 8) + 0x10, 8, 8) : word16)
  Class: Eq_553
  DataType: word16
  OrigDataType: word16
T_558: (in cx_351 : word16)
  Class: Eq_558
  DataType: word16
  OrigDataType: word16
T_559: (in 0x0000 : word16)
  Class: Eq_558
  DataType: word16
  OrigDataType: word16
T_560: (in 0x0000 : word16)
  Class: Eq_560
  DataType: word16
  OrigDataType: word16
T_561: (in 0x0000 : word16)
  Class: Eq_560
  DataType: word16
  OrigDataType: word16
T_562: (in 0x0000 == 0x0000 : bool)
  Class: Eq_562
  DataType: bool
  OrigDataType: bool
T_563: (in sp_585 : word16)
  Class: Eq_563
  DataType: (memptr T_21 (struct (FFFFFFF2 T_180 tFFFFFFF2) (FFFFFFF4 T_132 tFFFFFFF4) (FFFFFFF6 T_37 tFFFFFFF6) (FFFFFFF8 T_581 tFFFFFFF8) (FFFFFFFA T_66 tFFFFFFFA) (FFFFFFFC T_16 tFFFFFFFC) (FFFFFFFE T_185 tFFFFFFFE) (0 T_182 t0000)))
  OrigDataType: (memptr T_21 (struct (FFFFFFF2 T_180 tFFFFFFF2) (FFFFFFF4 T_132 tFFFFFFF4) (FFFFFFF6 T_37 tFFFFFFF6) (FFFFFFF8 T_581 tFFFFFFF8) (FFFFFFFA T_66 tFFFFFFFA) (FFFFFFFC T_16 tFFFFFFFC) (FFFFFFFE T_185 tFFFFFFFE) (0 T_182 t0000)))
T_564: (in 0x0002 : word16)
  Class: Eq_564
  DataType: word16
  OrigDataType: word16
T_565: (in sp_192 - 0x0002 : word16)
  Class: Eq_563
  DataType: word16
  OrigDataType: word16
T_566: (in 0x0000 : word16)
  Class: Eq_566
  DataType: word16
  OrigDataType: word16
T_567: (in sp_585 + 0x0000 : word16)
  Class: Eq_567
  DataType: word16
  OrigDataType: word16
T_568: (in Mem586[ss:sp_585 + 0x0000:word16] : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_569: (in 0x0002 : word16)
  Class: Eq_569
  DataType: word16
  OrigDataType: word16
T_570: (in sp_585 - 0x0002 : word16)
  Class: Eq_570
  DataType: word16
  OrigDataType: word16
T_571: (in Mem588[ss:sp_585 - 0x0002:word16] : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_572: (in 0x0004 : word16)
  Class: Eq_572
  DataType: word16
  OrigDataType: word16
T_573: (in sp_585 - 0x0004 : word16)
  Class: Eq_573
  DataType: word16
  OrigDataType: word16
T_574: (in Mem590[ss:sp_585 - 0x0004:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_575: (in 0x0006 : word16)
  Class: Eq_575
  DataType: word16
  OrigDataType: word16
T_576: (in sp_585 - 0x0006 : word16)
  Class: Eq_576
  DataType: word16
  OrigDataType: word16
T_577: (in Mem592[ss:sp_585 - 0x0006:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_578: (in 0x0008 : word16)
  Class: Eq_578
  DataType: word16
  OrigDataType: word16
T_579: (in sp_585 - 0x0008 : word16)
  Class: Eq_579
  DataType: word16
  OrigDataType: word16
T_580: (in sp_585 - 0x0008 : word16)
  Class: Eq_580
  DataType: word16
  OrigDataType: word16
T_581: (in Mem594[ss:sp_585 - 0x0008:word16] : word16)
  Class: Eq_579
  DataType: word16
  OrigDataType: word16
T_582: (in 0x000A : word16)
  Class: Eq_582
  DataType: word16
  OrigDataType: word16
T_583: (in sp_585 - 0x000A : word16)
  Class: Eq_583
  DataType: word16
  OrigDataType: word16
T_584: (in Mem596[ss:sp_585 - 0x000A:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_585: (in 0x000C : word16)
  Class: Eq_585
  DataType: word16
  OrigDataType: word16
T_586: (in sp_585 - 0x000C : word16)
  Class: Eq_586
  DataType: word16
  OrigDataType: word16
T_587: (in Mem598[ss:sp_585 - 0x000C:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_588: (in 0x000E : word16)
  Class: Eq_588
  DataType: word16
  OrigDataType: word16
T_589: (in sp_585 - 0x000E : word16)
  Class: Eq_589
  DataType: word16
  OrigDataType: word16
T_590: (in Mem600[ss:sp_585 - 0x000E:word16] : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_591: (in fn0C00_0539 : ptr32)
  Class: Eq_591
  DataType: (ptr (fn T_607 (T_601, T_602, T_179, T_118, T_606)))
  OrigDataType: (ptr (fn T_607 (T_601, T_602, T_179, T_118, T_606)))
T_592: (in signature of fn0C00_0539 : void)
  Class: Eq_591
  DataType: 
  OrigDataType: 
T_593: (in bx : word16)
  Class: Eq_593
  DataType: word16
  OrigDataType: word16
T_594: (in di : word16)
  Class: Eq_594
  DataType: word16
  OrigDataType: word16
T_595: (in es : selector)
  Class: Eq_174
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_596: (in ds : selector)
  Class: Eq_16
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_597: (in fs : selector)
  Class: Eq_597
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_598: (in 0x0870 : word16)
  Class: Eq_598
  DataType: (memptr T_118 (struct (0 T_599 t0000)))
  OrigDataType: (memptr T_118 (struct (0 T_599 t0000)))
T_599: (in Mem600[ds_114:0x0870:word16] : word16)
  Class: Eq_135
  DataType: word16
  OrigDataType: word16
T_600: (in 0x0001 : word16)
  Class: Eq_600
  DataType: word16
  OrigDataType: word16
T_601: (in Mem600[ds_114:0x0870:word16] << 0x0001 : word16)
  Class: Eq_593
  DataType: ui16
  OrigDataType: ui16
T_602: (in 0x8000 : word16)
  Class: Eq_594
  DataType: word16
  OrigDataType: word16
T_603: (in SLICE(cs, byte, 8) : byte)
  Class: Eq_603
  DataType: byte
  OrigDataType: byte
T_604: (in 0x30 : byte)
  Class: Eq_604
  DataType: byte
  OrigDataType: byte
T_605: (in SLICE(cs, byte, 8) + 0x30 : byte)
  Class: Eq_605
  DataType: byte
  OrigDataType: byte
T_606: (in DPB(cs, SLICE(cs, byte, 8) + 0x30, 8, 8) : word16)
  Class: Eq_597
  DataType: word16
  OrigDataType: word16
T_607: (in fn0C00_0539(Mem600[ds_114:0x0870:word16] << 0x0001, 0x8000, es_209, ds_114, DPB(cs, SLICE(cs, byte, 8) + 0x30, 8, 8)) : void)
  Class: Eq_607
  DataType: void
  OrigDataType: void
T_608: (in 0x0004 : word16)
  Class: Eq_608
  DataType: word16
  OrigDataType: word16
T_609: (in sp_585 - 0x0004 : word16)
  Class: Eq_609
  DataType: word16
  OrigDataType: word16
T_610: (in Mem600[ss:sp_585 - 0x0004:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_611: (in sp_585 - 0x000E : word16)
  Class: Eq_611
  DataType: word16
  OrigDataType: word16
T_612: (in Mem600[ss:sp_585 - 0x000E:word16] : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_613: (in 0x000C : word16)
  Class: Eq_613
  DataType: word16
  OrigDataType: word16
T_614: (in sp_585 - 0x000C : word16)
  Class: Eq_614
  DataType: word16
  OrigDataType: word16
T_615: (in Mem600[ss:sp_585 - 0x000C:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_616: (in 0x000A : word16)
  Class: Eq_616
  DataType: word16
  OrigDataType: word16
T_617: (in sp_585 - 0x000A : word16)
  Class: Eq_617
  DataType: word16
  OrigDataType: word16
T_618: (in Mem600[ss:sp_585 - 0x000A:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_619: (in 0x0006 : word16)
  Class: Eq_619
  DataType: word16
  OrigDataType: word16
T_620: (in sp_585 - 0x0006 : word16)
  Class: Eq_620
  DataType: word16
  OrigDataType: word16
T_621: (in Mem600[ss:sp_585 - 0x0006:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_622: (in 0x0002 : word16)
  Class: Eq_622
  DataType: word16
  OrigDataType: word16
T_623: (in sp_585 - 0x0002 : word16)
  Class: Eq_623
  DataType: word16
  OrigDataType: word16
T_624: (in Mem600[ss:sp_585 - 0x0002:word16] : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_625: (in 0x0000 : word16)
  Class: Eq_625
  DataType: word16
  OrigDataType: word16
T_626: (in sp_585 + 0x0000 : word16)
  Class: Eq_626
  DataType: word16
  OrigDataType: word16
T_627: (in Mem600[ss:sp_585 + 0x0000:word16] : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_628: (in 0x0002 : word16)
  Class: Eq_628
  DataType: word16
  OrigDataType: word16
T_629: (in sp_585 + 0x0002 : word16)
  Class: Eq_162
  DataType: word16
  OrigDataType: word16
T_630: (in (byte) dx_189 : byte)
  Class: Eq_630
  DataType: byte
  OrigDataType: byte
T_631: (in 0x10 : byte)
  Class: Eq_631
  DataType: byte
  OrigDataType: byte
T_632: (in (byte) dx_189 & 0x10 : byte)
  Class: Eq_632
  DataType: byte
  OrigDataType: byte
T_633: (in 0x00 : byte)
  Class: Eq_632
  DataType: byte
  OrigDataType: byte
T_634: (in ((byte) dx_189 & 0x10) == 0x00 : bool)
  Class: Eq_634
  DataType: bool
  OrigDataType: bool
T_635: (in di_360 : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_636: (in sp_326 - 0x000E : word16)
  Class: Eq_636
  DataType: word16
  OrigDataType: word16
T_637: (in Mem341[ss:sp_326 - 0x000E:word16] : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_638: (in si_362 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_639: (in 0x000C : word16)
  Class: Eq_639
  DataType: word16
  OrigDataType: word16
T_640: (in sp_326 - 0x000C : word16)
  Class: Eq_640
  DataType: word16
  OrigDataType: word16
T_641: (in Mem341[ss:sp_326 - 0x000C:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_642: (in bp_364 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_643: (in 0x000A : word16)
  Class: Eq_643
  DataType: word16
  OrigDataType: word16
T_644: (in sp_326 - 0x000A : word16)
  Class: Eq_644
  DataType: word16
  OrigDataType: word16
T_645: (in Mem341[ss:sp_326 - 0x000A:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_646: (in bx_367 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_647: (in 0x0006 : word16)
  Class: Eq_647
  DataType: word16
  OrigDataType: word16
T_648: (in sp_326 - 0x0006 : word16)
  Class: Eq_648
  DataType: word16
  OrigDataType: word16
T_649: (in Mem341[ss:sp_326 - 0x0006:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_650: (in dx_369 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_651: (in 0x0004 : word16)
  Class: Eq_651
  DataType: word16
  OrigDataType: word16
T_652: (in sp_326 - 0x0004 : word16)
  Class: Eq_652
  DataType: word16
  OrigDataType: word16
T_653: (in Mem341[ss:sp_326 - 0x0004:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_654: (in cx_372 : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_655: (in 0x0002 : word16)
  Class: Eq_655
  DataType: word16
  OrigDataType: word16
T_656: (in sp_326 - 0x0002 : word16)
  Class: Eq_656
  DataType: word16
  OrigDataType: word16
T_657: (in Mem341[ss:sp_326 - 0x0002:word16] : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_658: (in 0x0000 : word16)
  Class: Eq_658
  DataType: word16
  OrigDataType: word16
T_659: (in sp_326 + 0x0000 : word16)
  Class: Eq_659
  DataType: word16
  OrigDataType: word16
T_660: (in Mem341[ss:sp_326 + 0x0000:word16] : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_661: (in 0x0000 : word16)
  Class: Eq_661
  DataType: word16
  OrigDataType: word16
T_662: (in sp_326 + 0x0000 : word16)
  Class: Eq_662
  DataType: word16
  OrigDataType: word16
T_663: (in Mem377[ss:sp_326 + 0x0000:word16] : word16)
  Class: Eq_182
  DataType: word16
  OrigDataType: word16
T_664: (in 0x0002 : word16)
  Class: Eq_664
  DataType: word16
  OrigDataType: word16
T_665: (in sp_326 - 0x0002 : word16)
  Class: Eq_665
  DataType: word16
  OrigDataType: word16
T_666: (in Mem379[ss:sp_326 - 0x0002:word16] : word16)
  Class: Eq_185
  DataType: word16
  OrigDataType: word16
T_667: (in 0x0004 : word16)
  Class: Eq_667
  DataType: word16
  OrigDataType: word16
T_668: (in sp_326 - 0x0004 : word16)
  Class: Eq_668
  DataType: word16
  OrigDataType: word16
T_669: (in Mem381[ss:sp_326 - 0x0004:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_670: (in 0x0006 : word16)
  Class: Eq_670
  DataType: word16
  OrigDataType: word16
T_671: (in sp_326 - 0x0006 : word16)
  Class: Eq_671
  DataType: word16
  OrigDataType: word16
T_672: (in Mem383[ss:sp_326 - 0x0006:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_673: (in 0x0008 : word16)
  Class: Eq_673
  DataType: word16
  OrigDataType: word16
T_674: (in sp_326 - 0x0008 : word16)
  Class: Eq_541
  DataType: word16
  OrigDataType: word16
T_675: (in sp_326 - 0x0008 : word16)
  Class: Eq_675
  DataType: word16
  OrigDataType: word16
T_676: (in Mem385[ss:sp_326 - 0x0008:word16] : word16)
  Class: Eq_541
  DataType: word16
  OrigDataType: word16
T_677: (in 0x000A : word16)
  Class: Eq_677
  DataType: word16
  OrigDataType: word16
T_678: (in sp_326 - 0x000A : word16)
  Class: Eq_678
  DataType: word16
  OrigDataType: word16
T_679: (in Mem387[ss:sp_326 - 0x000A:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_680: (in 0x000C : word16)
  Class: Eq_680
  DataType: word16
  OrigDataType: word16
T_681: (in sp_326 - 0x000C : word16)
  Class: Eq_681
  DataType: word16
  OrigDataType: word16
T_682: (in Mem389[ss:sp_326 - 0x000C:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_683: (in 0x000E : word16)
  Class: Eq_683
  DataType: word16
  OrigDataType: word16
T_684: (in sp_326 - 0x000E : word16)
  Class: Eq_684
  DataType: word16
  OrigDataType: word16
T_685: (in Mem391[ss:sp_326 - 0x000E:word16] : word16)
  Class: Eq_180
  DataType: word16
  OrigDataType: word16
T_686: (in 0x0010 : word16)
  Class: Eq_686
  DataType: word16
  OrigDataType: word16
T_687: (in sp_326 - 0x0010 : word16)
  Class: Eq_687
  DataType: word16
  OrigDataType: word16
T_688: (in Mem393[ss:sp_326 - 0x0010:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_689: (in 0x0012 : word16)
  Class: Eq_689
  DataType: word16
  OrigDataType: word16
T_690: (in sp_326 - 0x0012 : word16)
  Class: Eq_690
  DataType: word16
  OrigDataType: word16
T_691: (in Mem395[ss:sp_326 - 0x0012:word16] : word16)
  Class: Eq_553
  DataType: word16
  OrigDataType: word16
T_692: (in 0x0014 : word16)
  Class: Eq_692
  DataType: word16
  OrigDataType: word16
T_693: (in sp_326 - 0x0014 : word16)
  Class: Eq_693
  DataType: word16
  OrigDataType: word16
T_694: (in Mem397[ss:sp_326 - 0x0014:word16] : word16)
  Class: Eq_553
  DataType: word16
  OrigDataType: word16
T_695: (in ds_398 : selector)
  Class: Eq_553
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_696: (in sp_326 - 0x0014 : word16)
  Class: Eq_696
  DataType: word16
  OrigDataType: word16
T_697: (in Mem397[ss:sp_326 - 0x0014:selector] : selector)
  Class: Eq_553
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_698: (in __syscall : ptr32)
  Class: Eq_698
  DataType: (ptr (fn T_700 (T_699)))
  OrigDataType: (ptr (fn T_700 (T_699)))
T_699: (in 0x10 : byte)
  Class: Eq_699
  DataType: byte
  OrigDataType: byte
T_700: (in __syscall(0x10) : void)
  Class: Eq_700
  DataType: void
  OrigDataType: void
T_701: (in sp_399 : word16)
  Class: Eq_701
  DataType: (memptr T_21 (struct 0002 (0 T_725 t0000)))
  OrigDataType: (memptr T_21 (struct 0002 (0 T_725 t0000)))
T_702: (in 0x0012 : word16)
  Class: Eq_702
  DataType: word16
  OrigDataType: word16
T_703: (in sp_326 - 0x0012 : word16)
  Class: Eq_701
  DataType: word16
  OrigDataType: word16
T_704: (in di_400 : word16)
  Class: Eq_704
  DataType: (memptr T_695 (struct 0001 (0 T_806 t0000)))
  OrigDataType: (memptr T_695 (struct 0001 (0 T_806 t0000)))
T_705: (in 0x0000 : word16)
  Class: Eq_704
  DataType: word16
  OrigDataType: word16
T_706: (in si_404 : word16)
  Class: Eq_706
  DataType: (memptr T_695 (struct 0001 (0 T_792 t0000)))
  OrigDataType: (memptr T_695 (struct 0001 (0 T_792 t0000)))
T_707: (in 0x091F : word16)
  Class: Eq_706
  DataType: word16
  OrigDataType: word16
T_708: (in di_564 : word16)
  Class: Eq_708
  DataType: (memptr T_553 (struct 0002 (0 T_713 t0000)))
  OrigDataType: (memptr T_553 (struct 0002 (0 T_713 t0000)))
T_709: (in 0x0000 : word16)
  Class: Eq_708
  DataType: word16
  OrigDataType: word16
T_710: (in 0x0000 : word16)
  Class: Eq_710
  DataType: word16
  OrigDataType: word16
T_711: (in 0x0000 : word16)
  Class: Eq_711
  DataType: word16
  OrigDataType: word16
T_712: (in di_564 + 0x0000 : word16)
  Class: Eq_712
  DataType: word16
  OrigDataType: word16
T_713: (in Mem578[ax_345:di_564 + 0x0000:word16] : word16)
  Class: Eq_710
  DataType: word16
  OrigDataType: word16
T_714: (in 0x0002 : word16)
  Class: Eq_714
  DataType: word16
  OrigDataType: word16
T_715: (in di_564 + 0x0002 : word16)
  Class: Eq_708
  DataType: word16
  OrigDataType: word16
T_716: (in 0x0001 : word16)
  Class: Eq_716
  DataType: word16
  OrigDataType: word16
T_717: (in cx_351 - 0x0001 : word16)
  Class: Eq_558
  DataType: word16
  OrigDataType: word16
T_718: (in 0x0000 : word16)
  Class: Eq_558
  DataType: word16
  OrigDataType: word16
T_719: (in cx_351 == 0x0000 : bool)
  Class: Eq_719
  DataType: bool
  OrigDataType: bool
T_720: (in sp_529 : word16)
  Class: Eq_720
  DataType: (memptr T_21 (struct (0 T_725 t0000) (2 T_738 t0002) (6 T_741 t0006) (A T_744 t000A) (C T_747 t000C) (E T_750 t000E)))
  OrigDataType: (memptr T_21 (struct (0 T_725 t0000) (2 T_738 t0002) (6 T_741 t0006) (A T_744 t000A) (C T_747 t000C) (E T_750 t000E)))
T_721: (in 0x0002 : word16)
  Class: Eq_721
  DataType: word16
  OrigDataType: word16
T_722: (in sp_399 + 0x0002 : word16)
  Class: Eq_720
  DataType: word16
  OrigDataType: word16
T_723: (in 0x0000 : word16)
  Class: Eq_723
  DataType: word16
  OrigDataType: word16
T_724: (in sp_399 + 0x0000 : word16)
  Class: Eq_724
  DataType: word16
  OrigDataType: word16
T_725: (in Mem397[ss:sp_399 + 0x0000:selector] : selector)
  Class: Eq_725
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_726: (in 0x0000 : word16)
  Class: Eq_726
  DataType: word16
  OrigDataType: word16
T_727: (in sp_529 + 0x0000 : word16)
  Class: Eq_727
  DataType: word16
  OrigDataType: word16
T_728: (in Mem533[ss:sp_529 + 0x0000:word16] : word16)
  Class: Eq_725
  DataType: word16
  OrigDataType: word16
T_729: (in fn0C00_030F : ptr32)
  Class: Eq_729
  DataType: (ptr (fn T_735 (T_734)))
  OrigDataType: (ptr (fn T_735 (T_734)))
T_730: (in signature of fn0C00_030F : void)
  Class: Eq_729
  DataType: 
  OrigDataType: 
T_731: (in ds : selector)
  Class: Eq_725
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_732: (in 0x0000 : word16)
  Class: Eq_732
  DataType: word16
  OrigDataType: word16
T_733: (in sp_529 + 0x0000 : word16)
  Class: Eq_733
  DataType: word16
  OrigDataType: word16
T_734: (in Mem533[ss:sp_529 + 0x0000:selector] : selector)
  Class: Eq_725
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_735: (in fn0C00_030F(Mem533[ss:sp_529 + 0x0000:selector]) : void)
  Class: Eq_735
  DataType: void
  OrigDataType: void
T_736: (in 0x0002 : word16)
  Class: Eq_736
  DataType: word16
  OrigDataType: word16
T_737: (in sp_529 + 0x0002 : word16)
  Class: Eq_737
  DataType: word16
  OrigDataType: word16
T_738: (in Mem533[ss:sp_529 + 0x0002:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_739: (in 0x0006 : word16)
  Class: Eq_739
  DataType: word16
  OrigDataType: word16
T_740: (in sp_529 + 0x0006 : word16)
  Class: Eq_740
  DataType: word16
  OrigDataType: word16
T_741: (in Mem533[ss:sp_529 + 0x0006:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_742: (in 0x000A : word16)
  Class: Eq_742
  DataType: word16
  OrigDataType: word16
T_743: (in sp_529 + 0x000A : word16)
  Class: Eq_743
  DataType: word16
  OrigDataType: word16
T_744: (in Mem533[ss:sp_529 + 0x000A:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_745: (in 0x000C : word16)
  Class: Eq_745
  DataType: word16
  OrigDataType: word16
T_746: (in sp_529 + 0x000C : word16)
  Class: Eq_746
  DataType: word16
  OrigDataType: word16
T_747: (in Mem533[ss:sp_529 + 0x000C:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_748: (in 0x000E : word16)
  Class: Eq_748
  DataType: word16
  OrigDataType: word16
T_749: (in sp_529 + 0x000E : word16)
  Class: Eq_749
  DataType: word16
  OrigDataType: word16
T_750: (in Mem533[ss:sp_529 + 0x000E:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_751: (in 0x0012 : word16)
  Class: Eq_751
  DataType: word16
  OrigDataType: word16
T_752: (in sp_529 + 0x0012 : word16)
  Class: Eq_75
  DataType: word16
  OrigDataType: word16
T_753: (in __inb : ptr32)
  Class: Eq_753
  DataType: (ptr (fn T_755 (T_754)))
  OrigDataType: (ptr (fn T_755 (T_754)))
T_754: (in 0x60 : byte)
  Class: Eq_754
  DataType: byte
  OrigDataType: byte
T_755: (in __inb(0x60) : byte)
  Class: Eq_755
  DataType: byte
  OrigDataType: byte
T_756: (in (int16) __inb(0x60) : int16)
  Class: Eq_756
  DataType: int16
  OrigDataType: int16
T_757: (in 0x0001 : word16)
  Class: Eq_756
  DataType: word16
  OrigDataType: word16
T_758: (in (int16) __inb(0x60) == 0x0001 : bool)
  Class: Eq_758
  DataType: bool
  OrigDataType: bool
T_759: (in al_423 : byte)
  Class: Eq_759
  DataType: int8
  OrigDataType: int8
T_760: (in 0x00 : byte)
  Class: Eq_759
  DataType: int8
  OrigDataType: int8
T_761: (in al_423 >= 0x00 : bool)
  Class: Eq_761
  DataType: bool
  OrigDataType: bool
T_762: (in sp_439 : word16)
  Class: Eq_762
  DataType: (memptr T_21 (struct (FFFFFFFE T_770 tFFFFFFFE) (0 T_767 t0000)))
  OrigDataType: (memptr T_21 (struct (FFFFFFFE T_770 tFFFFFFFE) (0 T_767 t0000)))
T_763: (in 0x0002 : word16)
  Class: Eq_763
  DataType: word16
  OrigDataType: word16
T_764: (in sp_399 - 0x0002 : word16)
  Class: Eq_762
  DataType: word16
  OrigDataType: word16
T_765: (in 0x0000 : word16)
  Class: Eq_765
  DataType: word16
  OrigDataType: word16
T_766: (in sp_439 + 0x0000 : word16)
  Class: Eq_766
  DataType: word16
  OrigDataType: word16
T_767: (in Mem440[ss:sp_439 + 0x0000:word16] : word16)
  Class: Eq_706
  DataType: word16
  OrigDataType: word16
T_768: (in 0x0002 : word16)
  Class: Eq_768
  DataType: word16
  OrigDataType: word16
T_769: (in sp_439 - 0x0002 : word16)
  Class: Eq_769
  DataType: word16
  OrigDataType: word16
T_770: (in Mem442[ss:sp_439 - 0x0002:word16] : word16)
  Class: Eq_704
  DataType: word16
  OrigDataType: word16
T_771: (in sp_441 : word16)
  Class: Eq_771
  DataType: word16
  OrigDataType: word16
T_772: (in sp_439 - 0x0002 : word16)
  Class: Eq_771
  DataType: word16
  OrigDataType: word16
T_773: (in si_444 : word16)
  Class: Eq_773
  DataType: (memptr T_695 (struct 0001 (0 T_883 t0000)))
  OrigDataType: (memptr T_695 (struct 0001 (0 T_883 t0000)))
T_774: (in ax_420 : word16)
  Class: Eq_774
  DataType: int16
  OrigDataType: int16
T_775: (in 0x0004 : word16)
  Class: Eq_775
  DataType: word16
  OrigDataType: word16
T_776: (in ax_420 << 0x0004 : word16)
  Class: Eq_776
  DataType: ui16
  OrigDataType: ui16
T_777: (in (ax_420 << 0x0004) + bp_364 : word16)
  Class: Eq_773
  DataType: word16
  OrigDataType: word16
T_778: (in dl_448 : byte)
  Class: Eq_778
  DataType: bcu8
  OrigDataType: bcu8
T_779: (in 0x10 : byte)
  Class: Eq_778
  DataType: byte
  OrigDataType: byte
T_780: (in ax_430 : word16)
  Class: Eq_780
  DataType: word16
  OrigDataType: word16
T_781: (in -ax_420 : word16)
  Class: Eq_780
  DataType: int16
  OrigDataType: int16
T_782: (in 0x0004 : word16)
  Class: Eq_782
  DataType: word16
  OrigDataType: word16
T_783: (in ax_430 << 0x0004 : word16)
  Class: Eq_783
  DataType: ui16
  OrigDataType: ui16
T_784: (in ax_430 << 0x0004 : word16)
  Class: Eq_784
  DataType: ui16
  OrigDataType: ui16
T_785: (in SLICE(ax_430 << 0x0004, byte, 8) : byte)
  Class: Eq_785
  DataType: byte
  OrigDataType: byte
T_786: (in 0x04 : byte)
  Class: Eq_786
  DataType: byte
  OrigDataType: byte
T_787: (in SLICE(ax_430 << 0x0004, byte, 8) << 0x04 : word16)
  Class: Eq_787
  DataType: ui16
  OrigDataType: ui16
T_788: (in DPB(ax_430 << 0x0004, SLICE(ax_430 << 0x0004, byte, 8) << 0x04, 8, 8) : word16)
  Class: Eq_788
  DataType: word16
  OrigDataType: word16
T_789: (in di_400 + DPB(ax_430 << 0x0004, SLICE(ax_430 << 0x0004, byte, 8) << 0x04, 8, 8) : word16)
  Class: Eq_704
  DataType: word16
  OrigDataType: word16
T_790: (in 0x0000 : word16)
  Class: Eq_790
  DataType: word16
  OrigDataType: word16
T_791: (in si_404 + 0x0000 : word16)
  Class: Eq_791
  DataType: word16
  OrigDataType: word16
T_792: (in Mem397[ds_398:si_404 + 0x0000:byte] : byte)
  Class: Eq_792
  DataType: byte
  OrigDataType: byte
T_793: (in (int16) Mem397[ds_398:si_404 + 0x0000:byte] : int16)
  Class: Eq_774
  DataType: int16
  OrigDataType: int16
T_794: (in 0x0001 : word16)
  Class: Eq_794
  DataType: word16
  OrigDataType: word16
T_795: (in si_404 + 0x0001 : word16)
  Class: Eq_706
  DataType: word16
  OrigDataType: word16
T_796: (in (byte) ax_420 : byte)
  Class: Eq_759
  DataType: byte
  OrigDataType: byte
T_797: (in 0x00 : byte)
  Class: Eq_759
  DataType: byte
  OrigDataType: byte
T_798: (in al_423 == 0x00 : bool)
  Class: Eq_798
  DataType: bool
  OrigDataType: bool
T_799: (in ax_477 : word16)
  Class: Eq_799
  DataType: word16
  OrigDataType: word16
T_800: (in al_468 : byte)
  Class: Eq_800
  DataType: byte
  OrigDataType: byte
T_801: (in (int16) al_468 : int16)
  Class: Eq_799
  DataType: int16
  OrigDataType: int16
T_802: (in ah_478 : byte)
  Class: Eq_802
  DataType: byte
  OrigDataType: byte
T_803: (in SLICE(ax_477, byte, 8) : byte)
  Class: Eq_802
  DataType: byte
  OrigDataType: byte
T_804: (in 0x0000 : word16)
  Class: Eq_804
  DataType: word16
  OrigDataType: word16
T_805: (in di_400 + 0x0000 : word16)
  Class: Eq_805
  DataType: word16
  OrigDataType: word16
T_806: (in Mem467[ds_398:di_400 + 0x0000:byte] : byte)
  Class: Eq_806
  DataType: byte
  OrigDataType: byte
T_807: (in 0xBF : byte)
  Class: Eq_807
  DataType: byte
  OrigDataType: byte
T_808: (in ah_478 & 0xBF : byte)
  Class: Eq_808
  DataType: byte
  OrigDataType: byte
T_809: (in Mem467[ds_398:di_400 + 0x0000:byte] | ah_478 & 0xBF : byte)
  Class: Eq_806
  DataType: byte
  OrigDataType: byte
T_810: (in 0x0000 : word16)
  Class: Eq_810
  DataType: word16
  OrigDataType: word16
T_811: (in di_400 + 0x0000 : word16)
  Class: Eq_811
  DataType: word16
  OrigDataType: word16
T_812: (in Mem482[ds_398:di_400 + 0x0000:byte] : byte)
  Class: Eq_806
  DataType: byte
  OrigDataType: byte
T_813: (in di_484 : word16)
  Class: Eq_813
  DataType: (memptr T_695 (struct (0 T_818 t0000) (1 T_826 t0001) (FF T_837 t00FF)))
  OrigDataType: (memptr T_695 (struct (0 T_818 t0000) (1 T_826 t0001) (FF T_837 t00FF)))
T_814: (in 0x0001 : word16)
  Class: Eq_814
  DataType: word16
  OrigDataType: word16
T_815: (in di_400 + 0x0001 : word16)
  Class: Eq_813
  DataType: word16
  OrigDataType: word16
T_816: (in 0x0000 : word16)
  Class: Eq_816
  DataType: word16
  OrigDataType: word16
T_817: (in di_484 + 0x0000 : word16)
  Class: Eq_817
  DataType: word16
  OrigDataType: word16
T_818: (in Mem482[ds_398:di_484 + 0x0000:byte] : byte)
  Class: Eq_818
  DataType: byte
  OrigDataType: byte
T_819: (in ah_478 & 0xBF : byte)
  Class: Eq_819
  DataType: byte
  OrigDataType: byte
T_820: (in Mem482[ds_398:di_484 + 0x0000:byte] | ah_478 & 0xBF : byte)
  Class: Eq_818
  DataType: byte
  OrigDataType: byte
T_821: (in 0x0000 : word16)
  Class: Eq_821
  DataType: word16
  OrigDataType: word16
T_822: (in di_484 + 0x0000 : word16)
  Class: Eq_822
  DataType: word16
  OrigDataType: word16
T_823: (in Mem486[ds_398:di_484 + 0x0000:byte] : byte)
  Class: Eq_818
  DataType: byte
  OrigDataType: byte
T_824: (in 0x0001 : word16)
  Class: Eq_824
  DataType: word16
  OrigDataType: word16
T_825: (in di_484 + 0x0001 : word16)
  Class: Eq_825
  DataType: word16
  OrigDataType: word16
T_826: (in Mem486[ds_398:di_484 + 0x0001:byte] : byte)
  Class: Eq_826
  DataType: byte
  OrigDataType: byte
T_827: (in ah_478 & 0xBF : byte)
  Class: Eq_827
  DataType: byte
  OrigDataType: byte
T_828: (in Mem486[ds_398:di_484 + 0x0001:byte] | ah_478 & 0xBF : byte)
  Class: Eq_826
  DataType: byte
  OrigDataType: byte
T_829: (in di_484 + 0x0001 : word16)
  Class: Eq_829
  DataType: word16
  OrigDataType: word16
T_830: (in Mem491[ds_398:di_484 + 0x0001:byte] : byte)
  Class: Eq_826
  DataType: byte
  OrigDataType: byte
T_831: (in ah_478 & 0xBF : byte)
  Class: Eq_831
  DataType: byte
  OrigDataType: byte
T_832: (in 0xAF : byte)
  Class: Eq_832
  DataType: byte
  OrigDataType: byte
T_833: (in ah_478 & 0xBF & 0xAF : byte)
  Class: Eq_833
  DataType: byte
  OrigDataType: byte
T_834: (in DPB(bx_367, ah_478 & 0xBF & 0xAF, 8, 8) : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_835: (in 0x00FF : word16)
  Class: Eq_835
  DataType: word16
  OrigDataType: word16
T_836: (in di_484 + 0x00FF : word16)
  Class: Eq_836
  DataType: word16
  OrigDataType: word16
T_837: (in Mem491[ds_398:di_484 + 0x00FF:word16] : word16)
  Class: Eq_837
  DataType: word16
  OrigDataType: word16
T_838: (in Mem491[ds_398:di_484 + 0x00FF:word16] | bx_367 : word16)
  Class: Eq_837
  DataType: word16
  OrigDataType: word16
T_839: (in 0x00FF : word16)
  Class: Eq_839
  DataType: word16
  OrigDataType: word16
T_840: (in di_484 + 0x00FF : word16)
  Class: Eq_840
  DataType: word16
  OrigDataType: word16
T_841: (in Mem498[ds_398:di_484 + 0x00FF:word16] : word16)
  Class: Eq_837
  DataType: word16
  OrigDataType: word16
T_842: (in ax_480 : word16)
  Class: Eq_842
  DataType: word16
  OrigDataType: word16
T_843: (in ah_478 & 0xBF : byte)
  Class: Eq_843
  DataType: byte
  OrigDataType: byte
T_844: (in DPB(ax_477, ah_478 & 0xBF, 8, 8) : word16)
  Class: Eq_842
  DataType: word16
  OrigDataType: word16
T_845: (in di_484 + 0x0001 : word16)
  Class: Eq_704
  DataType: word16
  OrigDataType: word16
T_846: (in 0x0001 : word16)
  Class: Eq_846
  DataType: word16
  OrigDataType: word16
T_847: (in ax_480 << 0x0001 : word16)
  Class: Eq_847
  DataType: ui16
  OrigDataType: ui16
T_848: (in (byte) (ax_480 << 0x0001) : byte)
  Class: Eq_800
  DataType: byte
  OrigDataType: byte
T_849: (in ax_480 << 0x0001 : word16)
  Class: Eq_849
  DataType: ui16
  OrigDataType: ui16
T_850: (in 0x0000 : word16)
  Class: Eq_849
  DataType: word16
  OrigDataType: word16
T_851: (in ax_480 << 0x0001 != 0x0000 : bool)
  Class: Eq_851
  DataType: bool
  OrigDataType: bool
T_852: (in di_505 : word16)
  Class: Eq_704
  DataType: word16
  OrigDataType: word16
T_853: (in sp_466 : word16)
  Class: Eq_853
  DataType: (memptr T_21 (struct (0 T_704 t0000) (2 T_892 t0002) (4 T_888 t0004)))
  OrigDataType: (memptr T_21 (struct (0 T_704 t0000) (2 T_892 t0002) (4 T_888 t0004)))
T_854: (in 0x0000 : word16)
  Class: Eq_854
  DataType: word16
  OrigDataType: word16
T_855: (in sp_466 + 0x0000 : word16)
  Class: Eq_855
  DataType: word16
  OrigDataType: word16
T_856: (in Mem498[ss:sp_466 + 0x0000:word16] : word16)
  Class: Eq_704
  DataType: word16
  OrigDataType: word16
T_857: (in 0x0002 : word16)
  Class: Eq_857
  DataType: word16
  OrigDataType: word16
T_858: (in sp_466 + 0x0002 : word16)
  Class: Eq_771
  DataType: word16
  OrigDataType: word16
T_859: (in 0x0101 : word16)
  Class: Eq_859
  DataType: word16
  OrigDataType: word16
T_860: (in di_505 + 0x0101 : word16)
  Class: Eq_704
  DataType: word16
  OrigDataType: word16
T_861: (in 0x09 : byte)
  Class: Eq_778
  DataType: bcu8
  OrigDataType: bcu8
T_862: (in dl_448 <u 0x09 : bool)
  Class: Eq_862
  DataType: bool
  OrigDataType: bool
T_863: (in 0x01 : byte)
  Class: Eq_863
  DataType: byte
  OrigDataType: byte
T_864: (in dl_448 - 0x01 : byte)
  Class: Eq_778
  DataType: byte
  OrigDataType: byte
T_865: (in 0x00 : byte)
  Class: Eq_778
  DataType: byte
  OrigDataType: byte
T_866: (in dl_448 != 0x00 : bool)
  Class: Eq_866
  DataType: bool
  OrigDataType: bool
T_867: (in 0x00FF : word16)
  Class: Eq_867
  DataType: word16
  OrigDataType: word16
T_868: (in di_505 + 0x00FF : word16)
  Class: Eq_704
  DataType: word16
  OrigDataType: word16
T_869: (in ds_187 : selector)
  Class: Eq_9
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_870: (in fn0C00_090C : ptr32)
  Class: Eq_870
  DataType: (ptr (fn T_872 ()))
  OrigDataType: (ptr (fn T_872 ()))
T_871: (in signature of fn0C00_090C : void)
  Class: Eq_870
  DataType: 
  OrigDataType: 
T_872: (in fn0C00_090C() : selector)
  Class: Eq_9
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_873: (in bios_video_set_mode : ptr32)
  Class: Eq_50
  DataType: (ptr (fn T_875 (T_874)))
  OrigDataType: (ptr (fn T_875 (T_874)))
T_874: (in 0x03 : byte)
  Class: Eq_52
  DataType: byte
  OrigDataType: byte
T_875: (in bios_video_set_mode(0x03) : void)
  Class: Eq_875
  DataType: void
  OrigDataType: void
T_876: (in 0x0002 : word16)
  Class: Eq_876
  DataType: word16
  OrigDataType: word16
T_877: (in sp_441 - 0x0002 : word16)
  Class: Eq_853
  DataType: word16
  OrigDataType: word16
T_878: (in 0x0000 : word16)
  Class: Eq_878
  DataType: word16
  OrigDataType: word16
T_879: (in sp_466 + 0x0000 : word16)
  Class: Eq_879
  DataType: word16
  OrigDataType: word16
T_880: (in Mem467[ss:sp_466 + 0x0000:word16] : word16)
  Class: Eq_704
  DataType: word16
  OrigDataType: word16
T_881: (in 0x0000 : word16)
  Class: Eq_881
  DataType: word16
  OrigDataType: word16
T_882: (in si_444 + 0x0000 : word16)
  Class: Eq_882
  DataType: word16
  OrigDataType: word16
T_883: (in Mem467[ds_398:si_444 + 0x0000:byte] : byte)
  Class: Eq_800
  DataType: byte
  OrigDataType: byte
T_884: (in 0x0001 : word16)
  Class: Eq_884
  DataType: word16
  OrigDataType: word16
T_885: (in si_444 + 0x0001 : word16)
  Class: Eq_773
  DataType: word16
  OrigDataType: word16
T_886: (in 0x0004 : word16)
  Class: Eq_886
  DataType: word16
  OrigDataType: word16
T_887: (in sp_466 + 0x0004 : word16)
  Class: Eq_887
  DataType: word16
  OrigDataType: word16
T_888: (in Mem498[ss:sp_466 + 0x0004:word16] : word16)
  Class: Eq_706
  DataType: word16
  OrigDataType: word16
T_889: (in 0x0006 : word16)
  Class: Eq_889
  DataType: word16
  OrigDataType: word16
T_890: (in sp_466 + 0x0006 : word16)
  Class: Eq_701
  DataType: word16
  OrigDataType: word16
T_891: (in sp_466 + 0x0002 : word16)
  Class: Eq_891
  DataType: word16
  OrigDataType: word16
T_892: (in Mem498[ss:sp_466 + 0x0002:word16] : word16)
  Class: Eq_892
  DataType: word16
  OrigDataType: word16
T_893: (in 0x0010 : word16)
  Class: Eq_893
  DataType: word16
  OrigDataType: word16
T_894: (in Mem498[ss:sp_466 + 0x0002:word16] + 0x0010 : word16)
  Class: Eq_704
  DataType: word16
  OrigDataType: word16
T_895: (in fn0C00_0715 : ptr32)
  Class: Eq_55
  DataType: (ptr (fn T_896 (T_869)))
  OrigDataType: (ptr (fn T_896 (T_869)))
T_896: (in fn0C00_0715(ds_187) : void)
  Class: Eq_896
  DataType: void
  OrigDataType: void
T_897: (in al_837 != 0x05 : bool)
  Class: Eq_897
  DataType: bool
  OrigDataType: bool
T_898: (in 0x0000 : word16)
  Class: Eq_898
  DataType: word16
  OrigDataType: word16
T_899: (in sp_108 + 0x0000 : word16)
  Class: Eq_899
  DataType: word16
  OrigDataType: word16
T_900: (in Mem836[ss:sp_108 + 0x0000:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_901: (in 0x0921 : word16)
  Class: Eq_901
  DataType: (memptr T_118 (struct (0 T_902 t0000)))
  OrigDataType: (memptr T_118 (struct (0 T_902 t0000)))
T_902: (in Mem836[ds_114:0x0921:byte] : byte)
  Class: Eq_171
  DataType: byte
  OrigDataType: byte
T_903: (in DPB(Mem836[ss:sp_108 + 0x0000:word16], Mem836[ds_114:0x0921:byte], 0, 8) : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_904: (in 0x0000 : word16)
  Class: Eq_904
  DataType: word16
  OrigDataType: word16
T_905: (in sp_108 + 0x0000 : word16)
  Class: Eq_905
  DataType: word16
  OrigDataType: word16
T_906: (in Mem984[ss:sp_108 + 0x0000:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_907: (in 0x07 : byte)
  Class: Eq_146
  DataType: bcu8
  OrigDataType: bcu8
T_908: (in al_837 >=u 0x07 : bool)
  Class: Eq_908
  DataType: bool
  OrigDataType: bool
T_909: (in al_986 : byte)
  Class: Eq_171
  DataType: byte
  OrigDataType: byte
T_910: (in 0x0921 : word16)
  Class: Eq_910
  DataType: (memptr T_118 (struct (0 T_911 t0000)))
  OrigDataType: (memptr T_118 (struct (0 T_911 t0000)))
T_911: (in Mem836[ds_114:0x0921:byte] : byte)
  Class: Eq_171
  DataType: byte
  OrigDataType: byte
T_912: (in ax_987 : word16)
  Class: Eq_912
  DataType: word16
  OrigDataType: word16
T_913: (in (word16) al_986 : word16)
  Class: Eq_912
  DataType: word16
  OrigDataType: word16
T_914: (in 0x0922 : word16)
  Class: Eq_914
  DataType: word16
  OrigDataType: word16
T_915: (in ax_987 + 0x0922 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_916: (in 0x0004 : word16)
  Class: Eq_916
  DataType: word16
  OrigDataType: word16
T_917: (in sp_108 - 0x0004 : word16)
  Class: Eq_917
  DataType: word16
  OrigDataType: word16
T_918: (in Mem992[ss:sp_108 - 0x0004:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_919: (in ax_987 + 0x0922 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_920: (in 0x0006 : word16)
  Class: Eq_920
  DataType: word16
  OrigDataType: word16
T_921: (in sp_108 - 0x0006 : word16)
  Class: Eq_921
  DataType: word16
  OrigDataType: word16
T_922: (in Mem994[ss:sp_108 - 0x0006:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_923: (in 0x0008 : word16)
  Class: Eq_923
  DataType: word16
  OrigDataType: word16
T_924: (in sp_108 - 0x0008 : word16)
  Class: Eq_924
  DataType: word16
  OrigDataType: word16
T_925: (in Mem996[ss:sp_108 - 0x0008:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_926: (in 0x000A : word16)
  Class: Eq_926
  DataType: word16
  OrigDataType: word16
T_927: (in sp_108 - 0x000A : word16)
  Class: Eq_927
  DataType: word16
  OrigDataType: word16
T_928: (in Mem998[ss:sp_108 - 0x000A:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_929: (in 0x000C : word16)
  Class: Eq_929
  DataType: word16
  OrigDataType: word16
T_930: (in sp_108 - 0x000C : word16)
  Class: Eq_930
  DataType: word16
  OrigDataType: word16
T_931: (in Mem1000[ss:sp_108 - 0x000C:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_932: (in 0x000E : word16)
  Class: Eq_932
  DataType: word16
  OrigDataType: word16
T_933: (in sp_108 - 0x000E : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_934: (in sp_108 - 0x000E : word16)
  Class: Eq_934
  DataType: word16
  OrigDataType: word16
T_935: (in Mem1002[ss:sp_108 - 0x000E:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_936: (in 0x0010 : word16)
  Class: Eq_936
  DataType: word16
  OrigDataType: word16
T_937: (in sp_108 - 0x0010 : word16)
  Class: Eq_937
  DataType: word16
  OrigDataType: word16
T_938: (in Mem1004[ss:sp_108 - 0x0010:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_939: (in 0x0922 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_940: (in 0x0012 : word16)
  Class: Eq_940
  DataType: word16
  OrigDataType: word16
T_941: (in sp_108 - 0x0012 : word16)
  Class: Eq_941
  DataType: word16
  OrigDataType: word16
T_942: (in Mem1006[ss:sp_108 - 0x0012:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_943: (in 0x0014 : word16)
  Class: Eq_943
  DataType: word16
  OrigDataType: word16
T_944: (in sp_108 - 0x0014 : word16)
  Class: Eq_944
  DataType: word16
  OrigDataType: word16
T_945: (in Mem1008[ss:sp_108 - 0x0014:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_946: (in 0x0922 : word16)
  Class: Eq_946
  DataType: word16
  OrigDataType: word16
T_947: (in SEQ(cs, 0x0922) : ptr32)
  Class: Eq_947
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_948: (in 0x0004 : word16)
  Class: Eq_948
  DataType: word16
  OrigDataType: word16
T_949: (in sp_108 - 0x0004 : word16)
  Class: Eq_949
  DataType: word16
  OrigDataType: word16
T_950: (in Mem1036[ss:sp_108 - 0x0004:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_951: (in 0x0006 : word16)
  Class: Eq_951
  DataType: word16
  OrigDataType: word16
T_952: (in sp_108 - 0x0006 : word16)
  Class: Eq_952
  DataType: word16
  OrigDataType: word16
T_953: (in Mem1038[ss:sp_108 - 0x0006:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_954: (in 0x0008 : word16)
  Class: Eq_954
  DataType: word16
  OrigDataType: word16
T_955: (in sp_108 - 0x0008 : word16)
  Class: Eq_955
  DataType: word16
  OrigDataType: word16
T_956: (in Mem1040[ss:sp_108 - 0x0008:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_957: (in 0x000A : word16)
  Class: Eq_957
  DataType: word16
  OrigDataType: word16
T_958: (in sp_108 - 0x000A : word16)
  Class: Eq_958
  DataType: word16
  OrigDataType: word16
T_959: (in Mem1042[ss:sp_108 - 0x000A:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_960: (in 0x000C : word16)
  Class: Eq_960
  DataType: word16
  OrigDataType: word16
T_961: (in sp_108 - 0x000C : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_962: (in sp_108 - 0x000C : word16)
  Class: Eq_962
  DataType: word16
  OrigDataType: word16
T_963: (in Mem1044[ss:sp_108 - 0x000C:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_964: (in 0x000E : word16)
  Class: Eq_964
  DataType: word16
  OrigDataType: word16
T_965: (in sp_108 - 0x000E : word16)
  Class: Eq_965
  DataType: word16
  OrigDataType: word16
T_966: (in Mem1046[ss:sp_108 - 0x000E:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_967: (in 0x0921 : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_968: (in 0x0010 : word16)
  Class: Eq_968
  DataType: word16
  OrigDataType: word16
T_969: (in sp_108 - 0x0010 : word16)
  Class: Eq_969
  DataType: word16
  OrigDataType: word16
T_970: (in Mem1048[ss:sp_108 - 0x0010:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_971: (in 0x0012 : word16)
  Class: Eq_971
  DataType: word16
  OrigDataType: word16
T_972: (in sp_108 - 0x0012 : word16)
  Class: Eq_972
  DataType: word16
  OrigDataType: word16
T_973: (in Mem1050[ss:sp_108 - 0x0012:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_974: (in 0x0014 : word16)
  Class: Eq_974
  DataType: word16
  OrigDataType: word16
T_975: (in sp_108 - 0x0014 : word16)
  Class: Eq_975
  DataType: word16
  OrigDataType: word16
T_976: (in Mem1052[ss:sp_108 - 0x0014:word16] : word16)
  Class: Eq_16
  DataType: word16
  OrigDataType: word16
T_977: (in ax_1056 : word16)
  Class: Eq_977
  DataType: (ptr (struct (0 (arr T_2352 2) a0000)))
  OrigDataType: (ptr (struct (0 (arr T_2352 2) a0000)))
T_978: (in SLICE(cs, byte, 8) : byte)
  Class: Eq_978
  DataType: byte
  OrigDataType: byte
T_979: (in 0x30 : byte)
  Class: Eq_979
  DataType: byte
  OrigDataType: byte
T_980: (in SLICE(cs, byte, 8) + 0x30 : byte)
  Class: Eq_980
  DataType: byte
  OrigDataType: byte
T_981: (in DPB(cs, SLICE(cs, byte, 8) + 0x30, 8, 8) : word16)
  Class: Eq_977
  DataType: word16
  OrigDataType: word16
T_982: (in si_1058 : word16)
  Class: Eq_982
  DataType: (memptr T_977 (struct 0001 (0 T_986 t0000)))
  OrigDataType: (memptr T_977 (struct 0001 (0 T_986 t0000)))
T_983: (in 0x0000 : word16)
  Class: Eq_982
  DataType: word16
  OrigDataType: word16
T_984: (in 0x0000 : word16)
  Class: Eq_984
  DataType: word16
  OrigDataType: word16
T_985: (in si_1058 + 0x0000 : word16)
  Class: Eq_985
  DataType: word16
  OrigDataType: word16
T_986: (in Mem1052[ax_1056:si_1058 + 0x0000:word16] : word16)
  Class: Eq_986
  DataType: word16
  OrigDataType: word16
T_987: (in ~Mem1052[ax_1056:si_1058 + 0x0000:word16] : word16)
  Class: Eq_986
  DataType: word16
  OrigDataType: word16
T_988: (in 0x0000 : word16)
  Class: Eq_988
  DataType: word16
  OrigDataType: word16
T_989: (in si_1058 + 0x0000 : word16)
  Class: Eq_989
  DataType: word16
  OrigDataType: word16
T_990: (in Mem1063[ax_1056:si_1058 + 0x0000:word16] : word16)
  Class: Eq_986
  DataType: word16
  OrigDataType: word16
T_991: (in si_1064 : word16)
  Class: Eq_991
  DataType: word16
  OrigDataType: word16
T_992: (in 0x0001 : word16)
  Class: Eq_992
  DataType: word16
  OrigDataType: word16
T_993: (in si_1058 + 0x0001 : word16)
  Class: Eq_991
  DataType: word16
  OrigDataType: word16
T_994: (in 0x0001 : word16)
  Class: Eq_994
  DataType: word16
  OrigDataType: word16
T_995: (in si_1064 + 0x0001 : word16)
  Class: Eq_982
  DataType: word16
  OrigDataType: word16
T_996: (in 0x0001 : word16)
  Class: Eq_991
  DataType: word16
  OrigDataType: word16
T_997: (in si_1064 != 0x0001 : bool)
  Class: Eq_997
  DataType: bool
  OrigDataType: bool
T_998: (in si_11 : word16)
  Class: Eq_998
  DataType: (memptr T_731 (struct 0004 (0 T_1012 t0000)))
  OrigDataType: (memptr T_731 (struct 0004 (0 T_1012 t0000)))
T_999: (in 0x1C00 : word16)
  Class: Eq_998
  DataType: word16
  OrigDataType: word16
T_1000: (in cx_13 : word16)
  Class: Eq_1000
  DataType: word16
  OrigDataType: word16
T_1001: (in 0x00C7 : word16)
  Class: Eq_1000
  DataType: word16
  OrigDataType: word16
T_1002: (in di_15 : word16)
  Class: Eq_1002
  DataType: (memptr T_1013 (struct 0004 (0 T_1016 t0000)))
  OrigDataType: (memptr T_1013 (struct 0004 (0 T_1016 t0000)))
T_1003: (in 0x0020 : word16)
  Class: Eq_1002
  DataType: word16
  OrigDataType: word16
T_1004: (in 0x0040 : word16)
  Class: Eq_1004
  DataType: word16
  OrigDataType: word16
T_1005: (in di_15 + 0x0040 : word16)
  Class: Eq_1002
  DataType: word16
  OrigDataType: word16
T_1006: (in 0x0001 : word16)
  Class: Eq_1006
  DataType: word16
  OrigDataType: word16
T_1007: (in cx_13 - 0x0001 : word16)
  Class: Eq_1000
  DataType: word16
  OrigDataType: word16
T_1008: (in 0x0000 : word16)
  Class: Eq_1000
  DataType: word16
  OrigDataType: word16
T_1009: (in cx_13 != 0x0000 : bool)
  Class: Eq_1009
  DataType: bool
  OrigDataType: bool
T_1010: (in 0x0000 : word16)
  Class: Eq_1010
  DataType: word16
  OrigDataType: word16
T_1011: (in si_11 + 0x0000 : word16)
  Class: Eq_1011
  DataType: word16
  OrigDataType: word16
T_1012: (in Mem0[ds:si_11 + 0x0000:word32] : word32)
  Class: Eq_1012
  DataType: word32
  OrigDataType: word32
T_1013: (in 0xA000 : selector)
  Class: Eq_1013
  DataType: (ptr (segment))
  OrigDataType: (ptr (segment))
T_1014: (in 0x0000 : word16)
  Class: Eq_1014
  DataType: word16
  OrigDataType: word16
T_1015: (in di_15 + 0x0000 : word16)
  Class: Eq_1015
  DataType: word16
  OrigDataType: word16
T_1016: (in Mem38[0xA000:di_15 + 0x0000:word32] : word32)
  Class: Eq_1012
  DataType: word32
  OrigDataType: word32
T_1017: (in 0x0004 : word16)
  Class: Eq_1017
  DataType: word16
  OrigDataType: word16
T_1018: (in si_11 + 0x0004 : word16)
  Class: Eq_998
  DataType: word16
  OrigDataType: word16
T_1019: (in 0x0004 : word16)
  Class: Eq_1019
  DataType: word16
  OrigDataType: word16
T_1020: (in di_15 + 0x0004 : word16)
  Class: Eq_1002
  DataType: word16
  OrigDataType: word16
T_1021: (in cx_27 : word16)
  Class: Eq_1021
  DataType: word16
  OrigDataType: word16
T_1022: (in 0x0001 : word16)
  Class: Eq_1022
  DataType: word16
  OrigDataType: word16
T_1023: (in cx_27 - 0x0001 : word16)
  Class: Eq_1021
  DataType: word16
  OrigDataType: word16
T_1024: (in 0x0000 : word16)
  Class: Eq_1021
  DataType: word16
  OrigDataType: word16
T_1025: (in cx_27 == 0x0000 : bool)
  Class: Eq_1025
  DataType: bool
  OrigDataType: bool
T_1026: (in 0x0040 : word16)
  Class: Eq_1021
  DataType: word16
  OrigDataType: word16
T_1027: (in ax : word16)
  Class: Eq_1027
  DataType: word16
  OrigDataType: word16
T_1028: (in cx_2 : word16)
  Class: Eq_1028
  DataType: word16
  OrigDataType: word16
T_1029: (in 0x0000 : word16)
  Class: Eq_1028
  DataType: word16
  OrigDataType: word16
T_1030: (in di_3 : word16)
  Class: Eq_1030
  DataType: word16
  OrigDataType: word16
T_1031: (in 0x0000 : word16)
  Class: Eq_1030
  DataType: word16
  OrigDataType: word16
T_1032: (in dx_14 : word16)
  Class: Eq_1032
  DataType: word16
  OrigDataType: word16
T_1033: (in (byte) cx_2 : byte)
  Class: Eq_1033
  DataType: byte
  OrigDataType: byte
T_1034: (in SLICE(cx_2, byte, 8) : byte)
  Class: Eq_1034
  DataType: byte
  OrigDataType: byte
T_1035: (in (byte) cx_2 + SLICE(cx_2, byte, 8) : byte)
  Class: Eq_1035
  DataType: byte
  OrigDataType: byte
T_1036: (in DPB(cx_2, (byte) cx_2 + SLICE(cx_2, byte, 8), 0, 8) : word16)
  Class: Eq_1036
  DataType: word16
  OrigDataType: word16
T_1037: (in 0x0001 : word16)
  Class: Eq_1037
  DataType: word16
  OrigDataType: word16
T_1038: (in DPB(cx_2, (byte) cx_2 + SLICE(cx_2, byte, 8), 0, 8) << 0x0001 : word16)
  Class: Eq_1038
  DataType: ui16
  OrigDataType: ui16
T_1039: (in (DPB(cx_2, (byte) cx_2 + SLICE(cx_2, byte, 8), 0, 8) << 0x0001) - cx_2 : word16)
  Class: Eq_1032
  DataType: word16
  OrigDataType: word16
T_1040: (in dh_16 : byte)
  Class: Eq_1040
  DataType: int8
  OrigDataType: int8
T_1041: (in SLICE(dx_14, byte, 8) : byte)
  Class: Eq_1040
  DataType: byte
  OrigDataType: byte
T_1042: (in dl_15 : byte)
  Class: Eq_1042
  DataType: int8
  OrigDataType: int8
T_1043: (in (byte) dx_14 : byte)
  Class: Eq_1042
  DataType: byte
  OrigDataType: byte
T_1044: (in bx_23 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_1045: (in dh_16 *s dh_16 : int16)
  Class: Eq_1045
  DataType: int16
  OrigDataType: int16
T_1046: (in dl_15 *s dl_15 : int16)
  Class: Eq_1046
  DataType: int16
  OrigDataType: int16
T_1047: (in dh_16 *s dh_16 + dl_15 *s dl_15 : word16)
  Class: Eq_26
  DataType: word16
  OrigDataType: word16
T_1048: (in *bxOut : word16)
  Class: Eq_26
  DataType: 
  OrigDataType: 
T_1049: (in al_25 : byte)
  Class: Eq_1049
  DataType: 
  OrigDataType: 
T_1050: (in dl_26 : byte)
  Class: Eq_1050
  DataType: 
  OrigDataType: 
T_1051: (in fn0C00_037B : ptr32)
  Class: Eq_1051
  DataType: 
  OrigDataType: 
T_1052: (in signature of fn0C00_037B : void)
  Class: Eq_1051
  DataType: 
  OrigDataType: 
T_1053: (in bx : word16)
  Class: Eq_26
  DataType: 
  OrigDataType: 
T_1054: (in alOut : ptr16)
  Class: Eq_1054
  DataType: 
  OrigDataType: 
T_1055: (in dlOut : ptr16)
  Class: Eq_1055
  DataType: 
  OrigDataType: 
T_1056: (in out al_25 : ptr16)
  Class: Eq_1054
  DataType: 
  OrigDataType: 
T_1057: (in out dl_26 : ptr16)
  Class: Eq_1055
  DataType: 
  OrigDataType: 
T_1058: (in fn0C00_037B(bx_23, out al_25, out dl_26) : word16)
  Class: Eq_1058
  DataType: 
  OrigDataType: 
T_1059: (in ax_29 : word16)
  Class: Eq_1059
  DataType: 
  OrigDataType: 
T_1060: (in al_25 ^ dl_26 : byte)
  Class: Eq_1060
  DataType: 
  OrigDataType: 
T_1061: (in (int16) (al_25 ^ dl_26) : int16)
  Class: Eq_1059
  DataType: 
  OrigDataType: 
T_1062: (in ax_33 : word16)
  Class: Eq_1062
  DataType: 
  OrigDataType: 
T_1063: (in (byte) ax_29 : byte)
  Class: Eq_1063
  DataType: 
  OrigDataType: 
T_1064: (in SLICE(ax_29, byte, 8) : byte)
  Class: Eq_1064
  DataType: 
  OrigDataType: 
T_1065: (in (byte) ax_29 ^ SLICE(ax_29, byte, 8) : byte)
  Class: Eq_1065
  DataType: 
  OrigDataType: 
T_1066: (in DPB(ax_29, (byte) ax_29 ^ SLICE(ax_29, byte, 8), 0, 8) : word16)
  Class: Eq_1062
  DataType: 
  OrigDataType: 
T_1067: (in 0x0001 : word16)
  Class: Eq_1067
  DataType: 
  OrigDataType: 
T_1068: (in ax_33 + 0x0001 : word16)
  Class: Eq_1068
  DataType: 
  OrigDataType: 
T_1069: (in (byte) (ax_33 + 0x0001) : byte)
  Class: Eq_1069
  DataType: 
  OrigDataType: 
T_1070: (in 0x0000 : word16)
  Class: Eq_1070
  DataType: 
  OrigDataType: 
T_1071: (in di_3 + 0x0000 : word16)
  Class: Eq_1071
  DataType: 
  OrigDataType: 
T_1072: (in Mem39[es:di_3 + 0x0000:byte] : byte)
  Class: Eq_1069
  DataType: 
  OrigDataType: 
T_1073: (in 0x0001 : word16)
  Class: Eq_1073
  DataType: 
  OrigDataType: 
T_1074: (in di_3 + 0x0001 : word16)
  Class: Eq_1030
  DataType: 
  OrigDataType: 
T_1075: (in 0x0001 : word16)
  Class: Eq_1075
  DataType: 
  OrigDataType: 
T_1076: (in cx_2 - 0x0001 : word16)
  Class: Eq_1028
  DataType: 
  OrigDataType: 
T_1077: (in 0x0000 : word16)
  Class: Eq_1028
  DataType: 
  OrigDataType: 
T_1078: (in cx_2 != 0x0000 : bool)
  Class: Eq_1078
  DataType: 
  OrigDataType: 
T_1079: (in ax_33 + 0x0001 : word16)
  Class: Eq_1079
  DataType: 
  OrigDataType: 
T_1080: (in ax : word16)
  Class: Eq_1080
  DataType: 
  OrigDataType: 
T_1081: (in cx_16 : word16)
  Class: Eq_1081
  DataType: 
  OrigDataType: 
T_1082: (in 0x0200 : word16)
  Class: Eq_1081
  DataType: 
  OrigDataType: 
T_1083: (in si_15 : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1084: (in 0x0000 : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1085: (in bx_11 : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1086: (in 0x7FFF : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1087: (in di_12 : word16)
  Class: Eq_1087
  DataType: 
  OrigDataType: 
T_1088: (in 0x0B26 : word16)
  Class: Eq_1087
  DataType: 
  OrigDataType: 
T_1089: (in cs : selector)
  Class: Eq_1089
  DataType: 
  OrigDataType: 
T_1090: (in 0x0000 : word16)
  Class: Eq_1090
  DataType: 
  OrigDataType: 
T_1091: (in di_12 + 0x0000 : word16)
  Class: Eq_1091
  DataType: 
  OrigDataType: 
T_1092: (in Mem18[cs:di_12 + 0x0000:word16] : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1093: (in 0x0002 : word16)
  Class: Eq_1093
  DataType: 
  OrigDataType: 
T_1094: (in di_12 + 0x0002 : word16)
  Class: Eq_1087
  DataType: 
  OrigDataType: 
T_1095: (in bp_21 : word16)
  Class: Eq_1095
  DataType: 
  OrigDataType: 
T_1096: (in ax_23 : word16)
  Class: Eq_1096
  DataType: 
  OrigDataType: 
T_1097: (in fn0C00_03E0 : ptr32)
  Class: Eq_1097
  DataType: 
  OrigDataType: 
T_1098: (in signature of fn0C00_03E0 : void)
  Class: Eq_1097
  DataType: 
  OrigDataType: 
T_1099: (in bx : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1100: (in si : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1101: (in bxOut : ptr16)
  Class: Eq_1101
  DataType: 
  OrigDataType: 
T_1102: (in bpOut : ptr16)
  Class: Eq_1102
  DataType: 
  OrigDataType: 
T_1103: (in siOut : ptr16)
  Class: Eq_1103
  DataType: 
  OrigDataType: 
T_1104: (in out bx_11 : ptr16)
  Class: Eq_1101
  DataType: 
  OrigDataType: 
T_1105: (in out bp_21 : ptr16)
  Class: Eq_1102
  DataType: 
  OrigDataType: 
T_1106: (in out si_15 : ptr16)
  Class: Eq_1103
  DataType: 
  OrigDataType: 
T_1107: (in fn0C00_03E0(bx_11, si_15, out bx_11, out bp_21, out si_15) : word16)
  Class: Eq_1096
  DataType: 
  OrigDataType: 
T_1108: (in 0x0001 : word16)
  Class: Eq_1108
  DataType: 
  OrigDataType: 
T_1109: (in cx_16 - 0x0001 : word16)
  Class: Eq_1081
  DataType: 
  OrigDataType: 
T_1110: (in 0x0000 : word16)
  Class: Eq_1081
  DataType: 
  OrigDataType: 
T_1111: (in cx_16 != 0x0000 : bool)
  Class: Eq_1111
  DataType: 
  OrigDataType: 
T_1112: (in bp : word16)
  Class: Eq_1112
  DataType: 
  OrigDataType: 
T_1113: (in ax_8 : word16)
  Class: Eq_1113
  DataType: 
  OrigDataType: 
T_1114: (in ax - cx : word16)
  Class: Eq_1113
  DataType: 
  OrigDataType: 
T_1115: (in __ror : ptr32)
  Class: Eq_1115
  DataType: 
  OrigDataType: 
T_1116: (in SLICE(ax_8, byte, 8) : byte)
  Class: Eq_1116
  DataType: 
  OrigDataType: 
T_1117: (in (byte) ax_8 : byte)
  Class: Eq_1117
  DataType: 
  OrigDataType: 
T_1118: (in SLICE(ax_8, byte, 8) ^ (byte) ax_8 : byte)
  Class: Eq_1118
  DataType: 
  OrigDataType: 
T_1119: (in DPB(ax_8, SLICE(ax_8, byte, 8) ^ (byte) ax_8, 8, 8) : word16)
  Class: Eq_1119
  DataType: 
  OrigDataType: 
T_1120: (in 0x03 : byte)
  Class: Eq_1120
  DataType: 
  OrigDataType: 
T_1121: (in __ror(DPB(ax_8, SLICE(ax_8, byte, 8) ^ (byte) ax_8, 8, 8), 0x03) : word16)
  Class: Eq_27
  DataType: 
  OrigDataType: 
T_1122: (in 0x0000 : word16)
  Class: Eq_1122
  DataType: 
  OrigDataType: 
T_1123: (in di + 0x0000 : word16)
  Class: Eq_1123
  DataType: 
  OrigDataType: 
T_1124: (in Mem19[es:di + 0x0000:word16] : word16)
  Class: Eq_27
  DataType: 
  OrigDataType: 
T_1125: (in 0x0002 : word16)
  Class: Eq_1125
  DataType: 
  OrigDataType: 
T_1126: (in di + 0x0002 : word16)
  Class: Eq_43
  DataType: 
  OrigDataType: 
T_1127: (in 0x0001 : word16)
  Class: Eq_1127
  DataType: 
  OrigDataType: 
T_1128: (in cx - 0x0001 : word16)
  Class: Eq_41
  DataType: 
  OrigDataType: 
T_1129: (in 0x0000 : word16)
  Class: Eq_41
  DataType: 
  OrigDataType: 
T_1130: (in cx != 0x0000 : bool)
  Class: Eq_1130
  DataType: 
  OrigDataType: 
T_1131: (in al_24 : byte)
  Class: Eq_1131
  DataType: 
  OrigDataType: 
T_1132: (in dl_25 : byte)
  Class: Eq_1132
  DataType: 
  OrigDataType: 
T_1133: (in fn0C00_037B : ptr32)
  Class: Eq_1051
  DataType: 
  OrigDataType: 
T_1134: (in out al_24 : ptr16)
  Class: Eq_1054
  DataType: 
  OrigDataType: 
T_1135: (in out dl_25 : ptr16)
  Class: Eq_1055
  DataType: 
  OrigDataType: 
T_1136: (in fn0C00_037B(bx, out al_24, out dl_25) : word16)
  Class: Eq_1136
  DataType: 
  OrigDataType: 
T_1137: (in al_30 : byte)
  Class: Eq_1137
  DataType: 
  OrigDataType: 
T_1138: (in dl_31 : byte)
  Class: Eq_1138
  DataType: 
  OrigDataType: 
T_1139: (in fn0C00_037B : ptr32)
  Class: Eq_1051
  DataType: 
  OrigDataType: 
T_1140: (in out al_30 : ptr16)
  Class: Eq_1054
  DataType: 
  OrigDataType: 
T_1141: (in out dl_31 : ptr16)
  Class: Eq_1055
  DataType: 
  OrigDataType: 
T_1142: (in fn0C00_037B(bx, out al_30, out dl_31) : word16)
  Class: Eq_1142
  DataType: 
  OrigDataType: 
T_1143: (in bp : word16)
  Class: Eq_1143
  DataType: 
  OrigDataType: 
T_1144: (in cx_12 : word16)
  Class: Eq_1144
  DataType: 
  OrigDataType: 
T_1145: (in 0x0007 : word16)
  Class: Eq_1144
  DataType: 
  OrigDataType: 
T_1146: (in bp_10 : word16)
  Class: Eq_1146
  DataType: 
  OrigDataType: 
T_1147: (in 0x0001 : word16)
  Class: Eq_1146
  DataType: 
  OrigDataType: 
T_1148: (in bp_31 : word16)
  Class: Eq_1148
  DataType: 
  OrigDataType: 
T_1149: (in ax_18 : word16)
  Class: Eq_1149
  DataType: 
  OrigDataType: 
T_1150: (in bp_10 + ax_18 : word16)
  Class: Eq_1148
  DataType: 
  OrigDataType: 
T_1151: (in dl_29 : byte)
  Class: Eq_1151
  DataType: 
  OrigDataType: 
T_1152: (in dx : word16)
  Class: Eq_1152
  DataType: 
  OrigDataType: 
T_1153: (in (byte) dx : byte)
  Class: Eq_1153
  DataType: 
  OrigDataType: 
T_1154: (in *dlOut : byte)
  Class: Eq_1153
  DataType: 
  OrigDataType: 
T_1155: (in 0x0001 : word16)
  Class: Eq_1155
  DataType: 
  OrigDataType: 
T_1156: (in bp_31 >> 0x0001 : word16)
  Class: Eq_1146
  DataType: 
  OrigDataType: 
T_1157: (in 0x0001 : word16)
  Class: Eq_1157
  DataType: 
  OrigDataType: 
T_1158: (in cx_12 - 0x0001 : word16)
  Class: Eq_1144
  DataType: 
  OrigDataType: 
T_1159: (in 0x0000 : word16)
  Class: Eq_1144
  DataType: 
  OrigDataType: 
T_1160: (in cx_12 != 0x0000 : bool)
  Class: Eq_1160
  DataType: 
  OrigDataType: 
T_1161: (in dx_ax_17 : int32)
  Class: Eq_1161
  DataType: 
  OrigDataType: 
T_1162: (in dx_ax_17 % bp_10 : uint16)
  Class: Eq_1162
  DataType: 
  OrigDataType: 
T_1163: (in SEQ(dx_ax_17 % bp_10, ax_18) : int32)
  Class: Eq_1163
  DataType: 
  OrigDataType: 
T_1164: (in SEQ(dx_ax_17 % bp_10, ax_18) /u bp_10 : uint16)
  Class: Eq_1149
  DataType: 
  OrigDataType: 
T_1165: (in al_43 : byte)
  Class: Eq_1165
  DataType: 
  OrigDataType: 
T_1166: (in (byte) ax_18 : byte)
  Class: Eq_1166
  DataType: 
  OrigDataType: 
T_1167: (in *alOut : byte)
  Class: Eq_1166
  DataType: 
  OrigDataType: 
T_1168: (in (int32) bx : int32)
  Class: Eq_1161
  DataType: 
  OrigDataType: 
T_1169: (in (word16) dx_ax_17 : word16)
  Class: Eq_1149
  DataType: 
  OrigDataType: 
T_1170: (in al_20 : byte)
  Class: Eq_1170
  DataType: 
  OrigDataType: 
T_1171: (in (byte) dx_ax_17 : byte)
  Class: Eq_1171
  DataType: 
  OrigDataType: 
T_1172: (in *alOut : byte)
  Class: Eq_1171
  DataType: 
  OrigDataType: 
T_1173: (in 0x0000 : word16)
  Class: Eq_1146
  DataType: 
  OrigDataType: 
T_1174: (in bp_10 == 0x0000 : bool)
  Class: Eq_1174
  DataType: 
  OrigDataType: 
T_1175: (in bp_31 >> 0x0001 : word16)
  Class: Eq_1175
  DataType: 
  OrigDataType: 
T_1176: (in sp_1 : word16)
  Class: Eq_1176
  DataType: 
  OrigDataType: 
T_1177: (in fp : ptr16)
  Class: Eq_1176
  DataType: 
  OrigDataType: 
T_1178: (in si_2 : word16)
  Class: Eq_1178
  DataType: 
  OrigDataType: 
T_1179: (in 0x0B14 : word16)
  Class: Eq_1178
  DataType: 
  OrigDataType: 
T_1180: (in di_3 : word16)
  Class: Eq_1180
  DataType: 
  OrigDataType: 
T_1181: (in 0x2F26 : word16)
  Class: Eq_1180
  DataType: 
  OrigDataType: 
T_1182: (in sp_9 : word16)
  Class: Eq_1182
  DataType: 
  OrigDataType: 
T_1183: (in 0x0002 : word16)
  Class: Eq_1183
  DataType: 
  OrigDataType: 
T_1184: (in sp_1 - 0x0002 : word16)
  Class: Eq_1182
  DataType: 
  OrigDataType: 
T_1185: (in ss : selector)
  Class: Eq_1185
  DataType: 
  OrigDataType: 
T_1186: (in 0x0000 : word16)
  Class: Eq_1186
  DataType: 
  OrigDataType: 
T_1187: (in sp_9 + 0x0000 : word16)
  Class: Eq_1187
  DataType: 
  OrigDataType: 
T_1188: (in Mem10[ss:sp_9 + 0x0000:word16] : word16)
  Class: Eq_216
  DataType: 
  OrigDataType: 
T_1189: (in si_14 : word16)
  Class: Eq_1189
  DataType: 
  OrigDataType: 
T_1190: (in 0x0002 : word16)
  Class: Eq_1190
  DataType: 
  OrigDataType: 
T_1191: (in si_2 + 0x0002 : word16)
  Class: Eq_1189
  DataType: 
  OrigDataType: 
T_1192: (in ax_13 : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1193: (in 0x0000 : word16)
  Class: Eq_1193
  DataType: 
  OrigDataType: 
T_1194: (in si_2 + 0x0000 : word16)
  Class: Eq_1194
  DataType: 
  OrigDataType: 
T_1195: (in Mem10[ds:si_2 + 0x0000:word16] : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1196: (in ax_16 : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1197: (in 0x0000 : word16)
  Class: Eq_1197
  DataType: 
  OrigDataType: 
T_1198: (in si_14 + 0x0000 : word16)
  Class: Eq_1198
  DataType: 
  OrigDataType: 
T_1199: (in Mem10[ds:si_14 + 0x0000:word16] : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1200: (in ax_19 : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1201: (in 0x0002 : word16)
  Class: Eq_1201
  DataType: 
  OrigDataType: 
T_1202: (in si_14 + 0x0002 : word16)
  Class: Eq_1202
  DataType: 
  OrigDataType: 
T_1203: (in Mem10[ds:si_14 + 0x0002:word16] : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1204: (in 0x0004 : word16)
  Class: Eq_1204
  DataType: 
  OrigDataType: 
T_1205: (in si_14 + 0x0004 : word16)
  Class: Eq_1205
  DataType: 
  OrigDataType: 
T_1206: (in 0x0002 : word16)
  Class: Eq_1206
  DataType: 
  OrigDataType: 
T_1207: (in sp_9 - 0x0002 : word16)
  Class: Eq_1207
  DataType: 
  OrigDataType: 
T_1208: (in Mem22[ss:sp_9 - 0x0002:word16] : word16)
  Class: Eq_1205
  DataType: 
  OrigDataType: 
T_1209: (in 0x0004 : word16)
  Class: Eq_1209
  DataType: 
  OrigDataType: 
T_1210: (in sp_9 - 0x0004 : word16)
  Class: Eq_1210
  DataType: 
  OrigDataType: 
T_1211: (in Mem25[ss:sp_9 - 0x0004:word16] : word16)
  Class: Eq_1180
  DataType: 
  OrigDataType: 
T_1212: (in di_27 : word16)
  Class: Eq_1212
  DataType: 
  OrigDataType: 
T_1213: (in si_28 : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1214: (in fn0C00_03CA : ptr32)
  Class: Eq_1214
  DataType: 
  OrigDataType: 
T_1215: (in signature of fn0C00_03CA : void)
  Class: Eq_1214
  DataType: 
  OrigDataType: 
T_1216: (in bx : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1217: (in si : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1218: (in di : word16)
  Class: Eq_1212
  DataType: 
  OrigDataType: 
T_1219: (in ds : selector)
  Class: Eq_16
  DataType: 
  OrigDataType: 
T_1220: (in diOut : ptr16)
  Class: Eq_1220
  DataType: 
  OrigDataType: 
T_1221: (in 0x8408 : word16)
  Class: Eq_1212
  DataType: 
  OrigDataType: 
T_1222: (in out di_27 : ptr16)
  Class: Eq_1220
  DataType: 
  OrigDataType: 
T_1223: (in fn0C00_03CA(ax_13, ax_19, 0x8408, ds, out di_27) : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1224: (in di_33 : word16)
  Class: Eq_1212
  DataType: 
  OrigDataType: 
T_1225: (in si_34 : word16)
  Class: Eq_1225
  DataType: 
  OrigDataType: 
T_1226: (in fn0C00_03CA : ptr32)
  Class: Eq_1214
  DataType: 
  OrigDataType: 
T_1227: (in out di_33 : ptr16)
  Class: Eq_1220
  DataType: 
  OrigDataType: 
T_1228: (in fn0C00_03CA(si_28, ax_13, di_27, ds, out di_33) : word16)
  Class: Eq_1225
  DataType: 
  OrigDataType: 
T_1229: (in di_39 : word16)
  Class: Eq_1229
  DataType: 
  OrigDataType: 
T_1230: (in si_40 : word16)
  Class: Eq_1230
  DataType: 
  OrigDataType: 
T_1231: (in fn0C00_03CA : ptr32)
  Class: Eq_1214
  DataType: 
  OrigDataType: 
T_1232: (in out di_39 : ptr16)
  Class: Eq_1220
  DataType: 
  OrigDataType: 
T_1233: (in fn0C00_03CA(si_28, ax_16, di_33, ds, out di_39) : word16)
  Class: Eq_1230
  DataType: 
  OrigDataType: 
T_1234: (in di_42 : word16)
  Class: Eq_1234
  DataType: 
  OrigDataType: 
T_1235: (in 0x000A : word16)
  Class: Eq_1235
  DataType: 
  OrigDataType: 
T_1236: (in sp_9 - 0x000A : word16)
  Class: Eq_1236
  DataType: 
  OrigDataType: 
T_1237: (in Mem25[ss:sp_9 - 0x000A:word16] : word16)
  Class: Eq_1234
  DataType: 
  OrigDataType: 
T_1238: (in SLICE(si_34, byte, 8) : byte)
  Class: Eq_1238
  DataType: 
  OrigDataType: 
T_1239: (in 0x80 : byte)
  Class: Eq_1239
  DataType: 
  OrigDataType: 
T_1240: (in SLICE(si_34, byte, 8) + 0x80 : byte)
  Class: Eq_1240
  DataType: 
  OrigDataType: 
T_1241: (in DPB(si_34, SLICE(si_34, byte, 8) + 0x80, 8, 8) : word16)
  Class: Eq_1241
  DataType: 
  OrigDataType: 
T_1242: (in 0x0000 : word16)
  Class: Eq_1242
  DataType: 
  OrigDataType: 
T_1243: (in di_42 + 0x0000 : word16)
  Class: Eq_1243
  DataType: 
  OrigDataType: 
T_1244: (in Mem48[es:di_42 + 0x0000:word16] : word16)
  Class: Eq_1241
  DataType: 
  OrigDataType: 
T_1245: (in ax_54 : word16)
  Class: Eq_1245
  DataType: 
  OrigDataType: 
T_1246: (in SLICE(si_40, byte, 8) : byte)
  Class: Eq_1246
  DataType: 
  OrigDataType: 
T_1247: (in 0x80 : byte)
  Class: Eq_1247
  DataType: 
  OrigDataType: 
T_1248: (in SLICE(si_40, byte, 8) + 0x80 : byte)
  Class: Eq_1248
  DataType: 
  OrigDataType: 
T_1249: (in DPB(si_40, SLICE(si_40, byte, 8) + 0x80, 8, 8) : word16)
  Class: Eq_1245
  DataType: 
  OrigDataType: 
T_1250: (in 0x0002 : word16)
  Class: Eq_1250
  DataType: 
  OrigDataType: 
T_1251: (in di_42 + 0x0002 : word16)
  Class: Eq_1251
  DataType: 
  OrigDataType: 
T_1252: (in Mem56[es:di_42 + 0x0002:word16] : word16)
  Class: Eq_1245
  DataType: 
  OrigDataType: 
T_1253: (in 0x0004 : word16)
  Class: Eq_1253
  DataType: 
  OrigDataType: 
T_1254: (in di_42 + 0x0004 : word16)
  Class: Eq_1254
  DataType: 
  OrigDataType: 
T_1255: (in Mem58[es:di_42 + 0x0004:word16] : word16)
  Class: Eq_1245
  DataType: 
  OrigDataType: 
T_1256: (in cx_62 : word16)
  Class: Eq_1256
  DataType: 
  OrigDataType: 
T_1257: (in 0x0006 : word16)
  Class: Eq_1257
  DataType: 
  OrigDataType: 
T_1258: (in sp_9 - 0x0006 : word16)
  Class: Eq_1258
  DataType: 
  OrigDataType: 
T_1259: (in Mem58[ss:sp_9 - 0x0006:word16] : word16)
  Class: Eq_1256
  DataType: 
  OrigDataType: 
T_1260: (in 0x0006 : word16)
  Class: Eq_1260
  DataType: 
  OrigDataType: 
T_1261: (in di_42 + 0x0006 : word16)
  Class: Eq_1180
  DataType: 
  OrigDataType: 
T_1262: (in 0x0008 : word16)
  Class: Eq_1262
  DataType: 
  OrigDataType: 
T_1263: (in sp_9 - 0x0008 : word16)
  Class: Eq_1263
  DataType: 
  OrigDataType: 
T_1264: (in Mem58[ss:sp_9 - 0x0008:word16] : word16)
  Class: Eq_1178
  DataType: 
  OrigDataType: 
T_1265: (in 0x0004 : word16)
  Class: Eq_1265
  DataType: 
  OrigDataType: 
T_1266: (in sp_9 - 0x0004 : word16)
  Class: Eq_1176
  DataType: 
  OrigDataType: 
T_1267: (in 0x0001 : word16)
  Class: Eq_1267
  DataType: 
  OrigDataType: 
T_1268: (in cx_62 - 0x0001 : word16)
  Class: Eq_216
  DataType: 
  OrigDataType: 
T_1269: (in 0x0001 : word16)
  Class: Eq_1256
  DataType: 
  OrigDataType: 
T_1270: (in cx_62 != 0x0001 : bool)
  Class: Eq_1270
  DataType: 
  OrigDataType: 
T_1271: (in bx_8 : word16)
  Class: Eq_1271
  DataType: 
  OrigDataType: 
T_1272: (in 0x0000 : word16)
  Class: Eq_1272
  DataType: 
  OrigDataType: 
T_1273: (in di + 0x0000 : word16)
  Class: Eq_1273
  DataType: 
  OrigDataType: 
T_1274: (in Mem0[ds:di + 0x0000:byte] : byte)
  Class: Eq_1274
  DataType: 
  OrigDataType: 
T_1275: (in (word16) Mem0[ds:di + 0x0000:byte] : word16)
  Class: Eq_1271
  DataType: 
  OrigDataType: 
T_1276: (in 0x0BA6 : word16)
  Class: Eq_1276
  DataType: 
  OrigDataType: 
T_1277: (in SEQ(ds, 0x0BA6) : ptr32)
  Class: Eq_1277
  DataType: 
  OrigDataType: 
T_1278: (in 0x0002 : word16)
  Class: Eq_1278
  DataType: 
  OrigDataType: 
T_1279: (in bx_8 * 0x0002 : word16)
  Class: Eq_1279
  DataType: 
  OrigDataType: 
T_1280: (in SEQ(ds, 0x0BA6)[bx_8 * 0x0002] : word16)
  Class: Eq_1280
  DataType: 
  OrigDataType: 
T_1281: (in 0x03F0 : word16)
  Class: Eq_1281
  DataType: 
  OrigDataType: 
T_1282: (in Mem12[ds:0x03F0:word16] : word16)
  Class: Eq_1280
  DataType: 
  OrigDataType: 
T_1283: (in 0x0B26 : word16)
  Class: Eq_1283
  DataType: 
  OrigDataType: 
T_1284: (in SEQ(ds, 0x0B26) : ptr32)
  Class: Eq_1284
  DataType: 
  OrigDataType: 
T_1285: (in 0x0002 : word16)
  Class: Eq_1285
  DataType: 
  OrigDataType: 
T_1286: (in bx_8 * 0x0002 : word16)
  Class: Eq_1286
  DataType: 
  OrigDataType: 
T_1287: (in SEQ(ds, 0x0B26)[bx_8 * 0x0002] : word16)
  Class: Eq_1287
  DataType: 
  OrigDataType: 
T_1288: (in 0x03F7 : word16)
  Class: Eq_1288
  DataType: 
  OrigDataType: 
T_1289: (in Mem14[ds:0x03F7:word16] : word16)
  Class: Eq_1287
  DataType: 
  OrigDataType: 
T_1290: (in di_17 : word16)
  Class: Eq_1290
  DataType: 
  OrigDataType: 
T_1291: (in 0x0001 : word16)
  Class: Eq_1291
  DataType: 
  OrigDataType: 
T_1292: (in di + 0x0001 : word16)
  Class: Eq_1292
  DataType: 
  OrigDataType: 
T_1293: (in *diOut : word16)
  Class: Eq_1292
  DataType: 
  OrigDataType: 
T_1294: (in bx_20 : word16)
  Class: Eq_1294
  DataType: 
  OrigDataType: 
T_1295: (in bp_21 : word16)
  Class: Eq_1295
  DataType: 
  OrigDataType: 
T_1296: (in si_22 : word16)
  Class: Eq_1296
  DataType: 
  OrigDataType: 
T_1297: (in fn0C00_03E0 : ptr32)
  Class: Eq_1097
  DataType: 
  OrigDataType: 
T_1298: (in out bx_20 : ptr16)
  Class: Eq_1101
  DataType: 
  OrigDataType: 
T_1299: (in out bp_21 : ptr16)
  Class: Eq_1102
  DataType: 
  OrigDataType: 
T_1300: (in out si_22 : ptr16)
  Class: Eq_1103
  DataType: 
  OrigDataType: 
T_1301: (in fn0C00_03E0(bx, si, out bx_20, out bp_21, out si_22) : word16)
  Class: Eq_1301
  DataType: 
  OrigDataType: 
T_1302: (in ax : word16)
  Class: Eq_1302
  DataType: 
  OrigDataType: 
T_1303: (in dx_4 : word16)
  Class: Eq_1303
  DataType: 
  OrigDataType: 
T_1304: (in bx_5 : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1305: (in bp_6 : word16)
  Class: Eq_1305
  DataType: 
  OrigDataType: 
T_1306: (in fn0C00_03EF : ptr32)
  Class: Eq_1306
  DataType: 
  OrigDataType: 
T_1307: (in signature of fn0C00_03EF : void)
  Class: Eq_1306
  DataType: 
  OrigDataType: 
T_1308: (in bx : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1309: (in si : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1310: (in dxOut : ptr16)
  Class: Eq_1310
  DataType: 
  OrigDataType: 
T_1311: (in bxOut : ptr16)
  Class: Eq_1311
  DataType: 
  OrigDataType: 
T_1312: (in bpOut : ptr16)
  Class: Eq_1312
  DataType: 
  OrigDataType: 
T_1313: (in out dx_4 : ptr16)
  Class: Eq_1310
  DataType: 
  OrigDataType: 
T_1314: (in out bx_5 : ptr16)
  Class: Eq_1311
  DataType: 
  OrigDataType: 
T_1315: (in out bp_6 : ptr16)
  Class: Eq_1312
  DataType: 
  OrigDataType: 
T_1316: (in fn0C00_03EF(bx, si, out dx_4, out bx_5, out bp_6) : word16)
  Class: Eq_1316
  DataType: 
  OrigDataType: 
T_1317: (in bp_16 : word16)
  Class: Eq_1317
  DataType: 
  OrigDataType: 
T_1318: (in bp_14 : word16)
  Class: Eq_1318
  DataType: 
  OrigDataType: 
T_1319: (in dx_12 : word16)
  Class: Eq_1319
  DataType: 
  OrigDataType: 
T_1320: (in bp_14 - dx_12 : word16)
  Class: Eq_1317
  DataType: 
  OrigDataType: 
T_1321: (in *bpOut : word16)
  Class: Eq_1317
  DataType: 
  OrigDataType: 
T_1322: (in bx_18 : word16)
  Class: Eq_1322
  DataType: 
  OrigDataType: 
T_1323: (in *bxOut : word16)
  Class: Eq_1317
  DataType: 
  OrigDataType: 
T_1324: (in si_19 : word16)
  Class: Eq_1324
  DataType: 
  OrigDataType: 
T_1325: (in bp_6 + dx_4 : word16)
  Class: Eq_1325
  DataType: 
  OrigDataType: 
T_1326: (in *siOut : word16)
  Class: Eq_1325
  DataType: 
  OrigDataType: 
T_1327: (in bx_13 : word16)
  Class: Eq_1327
  DataType: 
  OrigDataType: 
T_1328: (in fn0C00_03EF : ptr32)
  Class: Eq_1306
  DataType: 
  OrigDataType: 
T_1329: (in out dx_12 : ptr16)
  Class: Eq_1310
  DataType: 
  OrigDataType: 
T_1330: (in out bx_13 : ptr16)
  Class: Eq_1311
  DataType: 
  OrigDataType: 
T_1331: (in out bp_14 : ptr16)
  Class: Eq_1312
  DataType: 
  OrigDataType: 
T_1332: (in fn0C00_03EF(bx_5, si, out dx_12, out bx_13, out bp_14) : word16)
  Class: Eq_1332
  DataType: 
  OrigDataType: 
T_1333: (in ax : word16)
  Class: Eq_1333
  DataType: 
  OrigDataType: 
T_1334: (in bx_13 : word16)
  Class: Eq_1334
  DataType: 
  OrigDataType: 
T_1335: (in *bxOut : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1336: (in bp_15 : word16)
  Class: Eq_1336
  DataType: 
  OrigDataType: 
T_1337: (in 0x7FF5 : word16)
  Class: Eq_1337
  DataType: 
  OrigDataType: 
T_1338: (in si *s 0x7FF5 : int32)
  Class: Eq_1338
  DataType: 
  OrigDataType: 
T_1339: (in SLICE(si *s 0x7FF5, word16, 16) : word16)
  Class: Eq_1339
  DataType: 
  OrigDataType: 
T_1340: (in 0x0002 : word16)
  Class: Eq_1340
  DataType: 
  OrigDataType: 
T_1341: (in SLICE(si *s 0x7FF5, word16, 16) * 0x0002 : word16)
  Class: Eq_1341
  DataType: 
  OrigDataType: 
T_1342: (in *bpOut : word16)
  Class: Eq_1341
  DataType: 
  OrigDataType: 
T_1343: (in dx_16 : word16)
  Class: Eq_1343
  DataType: 
  OrigDataType: 
T_1344: (in 0x0324 : word16)
  Class: Eq_1344
  DataType: 
  OrigDataType: 
T_1345: (in bx *s 0x0324 : int32)
  Class: Eq_1345
  DataType: 
  OrigDataType: 
T_1346: (in SLICE(bx *s 0x0324, word16, 16) : word16)
  Class: Eq_1346
  DataType: 
  OrigDataType: 
T_1347: (in 0x0002 : word16)
  Class: Eq_1347
  DataType: 
  OrigDataType: 
T_1348: (in SLICE(bx *s 0x0324, word16, 16) * 0x0002 : word16)
  Class: Eq_1348
  DataType: 
  OrigDataType: 
T_1349: (in *dxOut : word16)
  Class: Eq_1348
  DataType: 
  OrigDataType: 
T_1350: (in bx *s 0x0324 : int32)
  Class: Eq_1350
  DataType: 
  OrigDataType: 
T_1351: (in (word16) (bx *s 0x0324) : word16)
  Class: Eq_1351
  DataType: 
  OrigDataType: 
T_1352: (in sp_1 : word16)
  Class: Eq_1352
  DataType: 
  OrigDataType: 
T_1353: (in fp : ptr16)
  Class: Eq_1352
  DataType: 
  OrigDataType: 
T_1354: (in si_19 : word16)
  Class: Eq_1354
  DataType: 
  OrigDataType: 
T_1355: (in 0x2F26 : word16)
  Class: Eq_1354
  DataType: 
  OrigDataType: 
T_1356: (in di_20 : word16)
  Class: Eq_1356
  DataType: 
  OrigDataType: 
T_1357: (in 0x0459 : word16)
  Class: Eq_1356
  DataType: 
  OrigDataType: 
T_1358: (in cx_22 : word16)
  Class: Eq_1358
  DataType: 
  OrigDataType: 
T_1359: (in 0x0004 : word16)
  Class: Eq_1358
  DataType: 
  OrigDataType: 
T_1360: (in 0x0000 : word16)
  Class: Eq_1360
  DataType: 
  OrigDataType: 
T_1361: (in si_19 + 0x0000 : word16)
  Class: Eq_1361
  DataType: 
  OrigDataType: 
T_1362: (in Mem0[ds:si_19 + 0x0000:word16] : word16)
  Class: Eq_1362
  DataType: 
  OrigDataType: 
T_1363: (in 0x0000 : word16)
  Class: Eq_1363
  DataType: 
  OrigDataType: 
T_1364: (in di_20 + 0x0000 : word16)
  Class: Eq_1364
  DataType: 
  OrigDataType: 
T_1365: (in Mem11[es:di_20 + 0x0000:word16] : word16)
  Class: Eq_1362
  DataType: 
  OrigDataType: 
T_1366: (in si_13 : word16)
  Class: Eq_1366
  DataType: 
  OrigDataType: 
T_1367: (in 0x0002 : word16)
  Class: Eq_1367
  DataType: 
  OrigDataType: 
T_1368: (in si_19 + 0x0002 : word16)
  Class: Eq_1366
  DataType: 
  OrigDataType: 
T_1369: (in di_14 : word16)
  Class: Eq_1369
  DataType: 
  OrigDataType: 
T_1370: (in 0x0002 : word16)
  Class: Eq_1370
  DataType: 
  OrigDataType: 
T_1371: (in di_20 + 0x0002 : word16)
  Class: Eq_1369
  DataType: 
  OrigDataType: 
T_1372: (in 0x0000 : word16)
  Class: Eq_1372
  DataType: 
  OrigDataType: 
T_1373: (in si_13 + 0x0000 : word16)
  Class: Eq_1373
  DataType: 
  OrigDataType: 
T_1374: (in Mem11[ds:si_13 + 0x0000:word16] : word16)
  Class: Eq_1374
  DataType: 
  OrigDataType: 
T_1375: (in 0x0000 : word16)
  Class: Eq_1375
  DataType: 
  OrigDataType: 
T_1376: (in di_14 + 0x0000 : word16)
  Class: Eq_1376
  DataType: 
  OrigDataType: 
T_1377: (in Mem16[es:di_14 + 0x0000:word16] : word16)
  Class: Eq_1374
  DataType: 
  OrigDataType: 
T_1378: (in 0x0006 : word16)
  Class: Eq_1378
  DataType: 
  OrigDataType: 
T_1379: (in si_13 + 0x0006 : word16)
  Class: Eq_1354
  DataType: 
  OrigDataType: 
T_1380: (in 0x0006 : word16)
  Class: Eq_1380
  DataType: 
  OrigDataType: 
T_1381: (in di_14 + 0x0006 : word16)
  Class: Eq_1356
  DataType: 
  OrigDataType: 
T_1382: (in 0x0001 : word16)
  Class: Eq_1382
  DataType: 
  OrigDataType: 
T_1383: (in cx_22 - 0x0001 : word16)
  Class: Eq_1358
  DataType: 
  OrigDataType: 
T_1384: (in 0x0000 : word16)
  Class: Eq_1358
  DataType: 
  OrigDataType: 
T_1385: (in cx_22 != 0x0000 : bool)
  Class: Eq_1385
  DataType: 
  OrigDataType: 
T_1386: (in bx_23 : word16)
  Class: Eq_1386
  DataType: 
  OrigDataType: 
T_1387: (in 0x0459 : word16)
  Class: Eq_1387
  DataType: 
  OrigDataType: 
T_1388: (in Mem16[ds:0x0459:word16] : word16)
  Class: Eq_1386
  DataType: 
  OrigDataType: 
T_1389: (in si_25 : word16)
  Class: Eq_1389
  DataType: 
  OrigDataType: 
T_1390: (in 0x045B : word16)
  Class: Eq_1390
  DataType: 
  OrigDataType: 
T_1391: (in Mem16[ds:0x045B:word16] : word16)
  Class: Eq_1389
  DataType: 
  OrigDataType: 
T_1392: (in di_26 : word16)
  Class: Eq_1392
  DataType: 
  OrigDataType: 
T_1393: (in 0x2B26 : word16)
  Class: Eq_1392
  DataType: 
  OrigDataType: 
T_1394: (in cx_27 : word16)
  Class: Eq_1394
  DataType: 
  OrigDataType: 
T_1395: (in 0x07D0 : word16)
  Class: Eq_1394
  DataType: 
  OrigDataType: 
T_1396: (in sp_33 : word16)
  Class: Eq_1352
  DataType: 
  OrigDataType: 
T_1397: (in 0x0002 : word16)
  Class: Eq_1397
  DataType: 
  OrigDataType: 
T_1398: (in sp_1 - 0x0002 : word16)
  Class: Eq_1352
  DataType: 
  OrigDataType: 
T_1399: (in ss : selector)
  Class: Eq_1399
  DataType: 
  OrigDataType: 
T_1400: (in 0x0000 : word16)
  Class: Eq_1400
  DataType: 
  OrigDataType: 
T_1401: (in sp_33 + 0x0000 : word16)
  Class: Eq_1401
  DataType: 
  OrigDataType: 
T_1402: (in Mem34[ss:sp_33 + 0x0000:word16] : word16)
  Class: Eq_1392
  DataType: 
  OrigDataType: 
T_1403: (in di_38 : word16)
  Class: Eq_1212
  DataType: 
  OrigDataType: 
T_1404: (in 0x0000 : word16)
  Class: Eq_1404
  DataType: 
  OrigDataType: 
T_1405: (in di_26 + 0x0000 : word16)
  Class: Eq_1405
  DataType: 
  OrigDataType: 
T_1406: (in Mem34[ds:di_26 + 0x0000:word16] : word16)
  Class: Eq_1406
  DataType: 
  OrigDataType: 
T_1407: (in 0x0018 : word16)
  Class: Eq_1407
  DataType: 
  OrigDataType: 
T_1408: (in Mem34[ds:di_26 + 0x0000:word16] & 0x0018 : word16)
  Class: Eq_1408
  DataType: 
  OrigDataType: 
T_1409: (in 0x0457 : word16)
  Class: Eq_1409
  DataType: 
  OrigDataType: 
T_1410: (in (Mem34[ds:di_26 + 0x0000:word16] & 0x0018) + 0x0457 : word16)
  Class: Eq_1212
  DataType: 
  OrigDataType: 
T_1411: (in 0x0002 : word16)
  Class: Eq_1411
  DataType: 
  OrigDataType: 
T_1412: (in sp_33 - 0x0002 : word16)
  Class: Eq_1412
  DataType: 
  OrigDataType: 
T_1413: (in Mem40[ss:sp_33 - 0x0002:word16] : word16)
  Class: Eq_1389
  DataType: 
  OrigDataType: 
T_1414: (in si_41 : word16)
  Class: Eq_1414
  DataType: 
  OrigDataType: 
T_1415: (in 0x0002 : word16)
  Class: Eq_1415
  DataType: 
  OrigDataType: 
T_1416: (in di_38 + 0x0002 : word16)
  Class: Eq_1416
  DataType: 
  OrigDataType: 
T_1417: (in Mem40[ds:di_38 + 0x0002:word16] : word16)
  Class: Eq_1417
  DataType: 
  OrigDataType: 
T_1418: (in si_25 - Mem40[ds:di_38 + 0x0002:word16] : word16)
  Class: Eq_1414
  DataType: 
  OrigDataType: 
T_1419: (in 0x0004 : word16)
  Class: Eq_1419
  DataType: 
  OrigDataType: 
T_1420: (in sp_33 - 0x0004 : word16)
  Class: Eq_1420
  DataType: 
  OrigDataType: 
T_1421: (in Mem44[ss:sp_33 - 0x0004:word16] : word16)
  Class: Eq_1386
  DataType: 
  OrigDataType: 
T_1422: (in bx_45 : word16)
  Class: Eq_1422
  DataType: 
  OrigDataType: 
T_1423: (in 0x0004 : word16)
  Class: Eq_1423
  DataType: 
  OrigDataType: 
T_1424: (in di_38 + 0x0004 : word16)
  Class: Eq_1424
  DataType: 
  OrigDataType: 
T_1425: (in Mem44[ds:di_38 + 0x0004:word16] : word16)
  Class: Eq_1425
  DataType: 
  OrigDataType: 
T_1426: (in bx_23 - Mem44[ds:di_38 + 0x0004:word16] : word16)
  Class: Eq_1422
  DataType: 
  OrigDataType: 
T_1427: (in di_48 : word16)
  Class: Eq_1427
  DataType: 
  OrigDataType: 
T_1428: (in si_49 : word16)
  Class: Eq_1428
  DataType: 
  OrigDataType: 
T_1429: (in fn0C00_03CA : ptr32)
  Class: Eq_1214
  DataType: 
  OrigDataType: 
T_1430: (in 0x0001 : word16)
  Class: Eq_1430
  DataType: 
  OrigDataType: 
T_1431: (in bx_45 >> 0x0001 : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1432: (in 0x0001 : word16)
  Class: Eq_1432
  DataType: 
  OrigDataType: 
T_1433: (in si_41 >> 0x0001 : word16)
  Class: Eq_1083
  DataType: 
  OrigDataType: 
T_1434: (in out di_48 : ptr16)
  Class: Eq_1220
  DataType: 
  OrigDataType: 
T_1435: (in fn0C00_03CA(bx_45 >> 0x0001, si_41 >> 0x0001, di_38, ds, out di_48) : word16)
  Class: Eq_1428
  DataType: 
  OrigDataType: 
T_1436: (in bx_45 >> 0x0001 : word16)
  Class: Eq_1436
  DataType: 
  OrigDataType: 
T_1437: (in 0x0006 : word16)
  Class: Eq_1437
  DataType: 
  OrigDataType: 
T_1438: (in sp_33 - 0x0006 : word16)
  Class: Eq_1438
  DataType: 
  OrigDataType: 
T_1439: (in Mem44[ss:sp_33 - 0x0006:word16] : word16)
  Class: Eq_1439
  DataType: 
  OrigDataType: 
T_1440: (in (bx_45 >> 0x0001) + Mem44[ss:sp_33 - 0x0006:word16] : word16)
  Class: Eq_1386
  DataType: 
  OrigDataType: 
T_1441: (in 0x0004 : word16)
  Class: Eq_1441
  DataType: 
  OrigDataType: 
T_1442: (in sp_33 - 0x0004 : word16)
  Class: Eq_1442
  DataType: 
  OrigDataType: 
T_1443: (in Mem44[ss:sp_33 - 0x0004:word16] : word16)
  Class: Eq_1443
  DataType: 
  OrigDataType: 
T_1444: (in si_49 + Mem44[ss:sp_33 - 0x0004:word16] : word16)
  Class: Eq_1389
  DataType: 
  OrigDataType: 
T_1445: (in 0x7F : byte)
  Class: Eq_1445
  DataType: 
  OrigDataType: 
T_1446: (in 0x0000 : word16)
  Class: Eq_1446
  DataType: 
  OrigDataType: 
T_1447: (in si_25 + 0x0000 : word16)
  Class: Eq_1447
  DataType: 
  OrigDataType: 
T_1448: (in Mem62[es:si_25 + 0x0000:byte] : byte)
  Class: Eq_1445
  DataType: 
  OrigDataType: 
T_1449: (in 0x7F : byte)
  Class: Eq_1449
  DataType: 
  OrigDataType: 
T_1450: (in 0x0001 : word16)
  Class: Eq_1450
  DataType: 
  OrigDataType: 
T_1451: (in si_25 + 0x0001 : word16)
  Class: Eq_1451
  DataType: 
  OrigDataType: 
T_1452: (in Mem64[es:si_25 + 0x0001:byte] : byte)
  Class: Eq_1449
  DataType: 
  OrigDataType: 
T_1453: (in 0x70 : byte)
  Class: Eq_1453
  DataType: 
  OrigDataType: 
T_1454: (in 0x0002 : word16)
  Class: Eq_1454
  DataType: 
  OrigDataType: 
T_1455: (in si_25 + 0x0002 : word16)
  Class: Eq_1455
  DataType: 
  OrigDataType: 
T_1456: (in Mem67[es:si_25 + 0x0002:byte] : byte)
  Class: Eq_1453
  DataType: 
  OrigDataType: 
T_1457: (in 0x0002 : word16)
  Class: Eq_1457
  DataType: 
  OrigDataType: 
T_1458: (in sp_33 - 0x0002 : word16)
  Class: Eq_1458
  DataType: 
  OrigDataType: 
T_1459: (in Mem67[ss:sp_33 - 0x0002:word16] : word16)
  Class: Eq_1459
  DataType: 
  OrigDataType: 
T_1460: (in 0x0001 : word16)
  Class: Eq_1460
  DataType: 
  OrigDataType: 
T_1461: (in Mem67[ss:sp_33 - 0x0002:word16] + 0x0001 : word16)
  Class: Eq_1392
  DataType: 
  OrigDataType: 
T_1462: (in 0x0001 : word16)
  Class: Eq_1462
  DataType: 
  OrigDataType: 
T_1463: (in cx_27 - 0x0001 : word16)
  Class: Eq_1394
  DataType: 
  OrigDataType: 
T_1464: (in 0x0000 : word16)
  Class: Eq_1394
  DataType: 
  OrigDataType: 
T_1465: (in cx_27 != 0x0000 : bool)
  Class: Eq_1465
  DataType: 
  OrigDataType: 
T_1466: (in di : word16)
  Class: Eq_1466
  DataType: 
  OrigDataType: 
T_1467: (in 0x0000 : word16)
  Class: Eq_1466
  DataType: 
  OrigDataType: 
T_1468: (in di == 0x0000 : bool)
  Class: Eq_1468
  DataType: 
  OrigDataType: 
T_1469: (in fn0C00_04A6 : ptr32)
  Class: Eq_1469
  DataType: 
  OrigDataType: 
T_1470: (in signature of fn0C00_04A6 : void)
  Class: Eq_1469
  DataType: 
  OrigDataType: 
T_1471: (in ax : word16)
  Class: Eq_1471
  DataType: 
  OrigDataType: 
T_1472: (in cx : word16)
  Class: Eq_1472
  DataType: 
  OrigDataType: 
T_1473: (in dx : word16)
  Class: Eq_1472
  DataType: 
  OrigDataType: 
T_1474: (in bx : word16)
  Class: Eq_1472
  DataType: 
  OrigDataType: 
T_1475: (in es : selector)
  Class: Eq_1475
  DataType: 
  OrigDataType: 
T_1476: (in ax : word16)
  Class: Eq_1471
  DataType: 
  OrigDataType: 
T_1477: (in wArg04 : word16)
  Class: Eq_1472
  DataType: 
  OrigDataType: 
T_1478: (in wArg02 : word16)
  Class: Eq_1472
  DataType: 
  OrigDataType: 
T_1479: (in wArg06 : word16)
  Class: Eq_1472
  DataType: 
  OrigDataType: 
T_1480: (in es : selector)
  Class: Eq_1475
  DataType: 
  OrigDataType: 
T_1481: (in fn0C00_04A6(ax, wArg04, wArg02, wArg06, es) : void)
  Class: Eq_1481
  DataType: 
  OrigDataType: 
T_1482: (in cx_29 : word16)
  Class: Eq_1482
  DataType: 
  OrigDataType: 
T_1483: (in dx_30 : word16)
  Class: Eq_1483
  DataType: 
  OrigDataType: 
T_1484: (in fn0C00_0480 : ptr32)
  Class: Eq_1484
  DataType: 
  OrigDataType: 
T_1485: (in signature of fn0C00_0480 : void)
  Class: Eq_1484
  DataType: 
  OrigDataType: 
T_1486: (in ax : word16)
  Class: Eq_1471
  DataType: 
  OrigDataType: 
T_1487: (in cx : word16)
  Class: Eq_1472
  DataType: 
  OrigDataType: 
T_1488: (in dx : word16)
  Class: Eq_1472
  DataType: 
  OrigDataType: 
T_1489: (in bx : word16)
  Class: Eq_1472
  DataType: 
  OrigDataType: 
T_1490: (in di : word16)
  Class: Eq_1466
  DataType: 
  OrigDataType: 
T_1491: (in es : selector)
  Class: Eq_1475
  DataType: 
  OrigDataType: 
T_1492: (in cxOut : ptr16)
  Class: Eq_1492
  DataType: 
  OrigDataType: 
T_1493: (in dxOut : ptr16)
  Class: Eq_1493
  DataType: 
  OrigDataType: 
T_1494: (in out cx_29 : ptr16)
  Class: Eq_1492
  DataType: 
  OrigDataType: 
T_1495: (in out dx_30 : ptr16)
  Class: Eq_1493
  DataType: 
  OrigDataType: 
T_1496: (in fn0C00_0480(ax, wArg04, wArg02, wArg06, di, es, out cx_29, out dx_30) : word16)
  Class: Eq_1496
  DataType: 
  OrigDataType: 
T_1497: (in di : word16)
  Class: Eq_1466
  DataType: 
  OrigDataType: 
T_1498: (in 0x0000 : word16)
  Class: Eq_1466
  DataType: 
  OrigDataType: 
T_1499: (in di == 0x0000 : bool)
  Class: Eq_1499
  DataType: 
  OrigDataType: 
T_1500: (in fn0C00_04A6 : ptr32)
  Class: Eq_1469
  DataType: 
  OrigDataType: 
T_1501: (in ax : word16)
  Class: Eq_1471
  DataType: 
  OrigDataType: 
T_1502: (in cx : word16)
  Class: Eq_1472
  DataType: 
  OrigDataType: 
T_1503: (in dx : word16)
  Class: Eq_1472
  DataType: 
  OrigDataType: 
T_1504: (in bx : word16)
  Class: Eq_1472
  DataType: 
  OrigDataType: 
T_1505: (in es : selector)
  Class: Eq_1475
  DataType: 
  OrigDataType: 
T_1506: (in fn0C00_04A6(ax, cx, dx, bx, es) : void)
  Class: Eq_1506
  DataType: 
  OrigDataType: 
T_1507: (in cx_14 : word16)
  Class: Eq_1472
  DataType: 
  OrigDataType: 
T_1508: (in dx_15 : word16)
  Class: Eq_1472
  DataType: 
  OrigDataType: 
T_1509: (in ax_16 : word16)
  Class: Eq_1471
  DataType: 
  OrigDataType: 
T_1510: (in fn0C00_0480 : ptr32)
  Class: Eq_1484
  DataType: 
  OrigDataType: 
T_1511: (in out cx_14 : ptr16)
  Class: Eq_1492
  DataType: 
  OrigDataType: 
T_1512: (in out dx_15 : ptr16)
  Class: Eq_1493
  DataType: 
  OrigDataType: 
T_1513: (in fn0C00_0480(ax, cx, dx, bx, di, es, out cx_14, out dx_15) : word16)
  Class: Eq_1471
  DataType: 
  OrigDataType: 
T_1514: (in cx_17 : word16)
  Class: Eq_1514
  DataType: 
  OrigDataType: 
T_1515: (in dx_18 : word16)
  Class: Eq_1515
  DataType: 
  OrigDataType: 
T_1516: (in fn0C00_0480 : ptr32)
  Class: Eq_1484
  DataType: 
  OrigDataType: 
T_1517: (in out cx_17 : ptr16)
  Class: Eq_1492
  DataType: 
  OrigDataType: 
T_1518: (in out dx_18 : ptr16)
  Class: Eq_1493
  DataType: 
  OrigDataType: 
T_1519: (in fn0C00_0480(ax_16, cx_14, dx_15, bx, di, es, out cx_17, out dx_18) : word16)
  Class: Eq_1519
  DataType: 
  OrigDataType: 
T_1520: (in 0x0003 : word16)
  Class: Eq_1520
  DataType: 
  OrigDataType: 
T_1521: (in di - 0x0003 : word16)
  Class: Eq_1521
  DataType: 
  OrigDataType: 
T_1522: (in cond(di - 0x0003) : byte)
  Class: Eq_1522
  DataType: 
  OrigDataType: 
T_1523: (in SCZO : byte)
  Class: Eq_1522
  DataType: 
  OrigDataType: 
T_1524: (in C : byte)
  Class: Eq_1522
  DataType: 
  OrigDataType: 
T_1525: (in Test(ULT,C) : bool)
  Class: Eq_1525
  DataType: 
  OrigDataType: 
T_1526: (in v6 : word16)
  Class: Eq_1472
  DataType: 
  OrigDataType: 
T_1527: (in (byte) dx : byte)
  Class: Eq_1527
  DataType: 
  OrigDataType: 
T_1528: (in dl : byte)
  Class: Eq_1527
  DataType: 
  OrigDataType: 
T_1529: (in SLICE(dx, byte, 8) : byte)
  Class: Eq_1529
  DataType: 
  OrigDataType: 
T_1530: (in dh : byte)
  Class: Eq_1529
  DataType: 
  OrigDataType: 
T_1531: (in 0x0002 : word16)
  Class: Eq_1531
  DataType: 
  OrigDataType: 
T_1532: (in bp : word16)
  Class: Eq_1531
  DataType: 
  OrigDataType: 
T_1533: (in fp : ptr16)
  Class: Eq_1533
  DataType: 
  OrigDataType: 
T_1534: (in 0x0002 : word16)
  Class: Eq_1534
  DataType: 
  OrigDataType: 
T_1535: (in fp - 0x0002 : word16)
  Class: Eq_1535
  DataType: 
  OrigDataType: 
T_1536: (in sp : word16)
  Class: Eq_1535
  DataType: 
  OrigDataType: 
T_1537: (in wLoc02 : word16)
  Class: Eq_1471
  DataType: 
  OrigDataType: 
T_1538: (in 0x0004 : word16)
  Class: Eq_1538
  DataType: 
  OrigDataType: 
T_1539: (in fp - 0x0004 : word16)
  Class: Eq_1535
  DataType: 
  OrigDataType: 
T_1540: (in wLoc04 : word16)
  Class: Eq_1472
  DataType: 
  OrigDataType: 
T_1541: (in 0x0006 : word16)
  Class: Eq_1541
  DataType: 
  OrigDataType: 
T_1542: (in fp - 0x0006 : word16)
  Class: Eq_1535
  DataType: 
  OrigDataType: 
T_1543: (in wLoc06 : word16)
  Class: Eq_1472
  DataType: 
  OrigDataType: 
T_1544: (in 0x0008 : word16)
  Class: Eq_1544
  DataType: 
  OrigDataType: 
T_1545: (in fp - 0x0008 : word16)
  Class: Eq_1535
  DataType: 
  OrigDataType: 
T_1546: (in wLoc08 : word16)
  Class: Eq_1472
  DataType: 
  OrigDataType: 
T_1547: (in 0x000A : word16)
  Class: Eq_1547
  DataType: 
  OrigDataType: 
T_1548: (in fp - 0x000A : word16)
  Class: Eq_1535
  DataType: 
  OrigDataType: 
T_1549: (in fp - 0x000A : word16)
  Class: Eq_1549
  DataType: 
  OrigDataType: 
T_1550: (in wLoc0A : word16)
  Class: Eq_1549
  DataType: 
  OrigDataType: 
T_1551: (in 0x000C : word16)
  Class: Eq_1551
  DataType: 
  OrigDataType: 
T_1552: (in fp - 0x000C : word16)
  Class: Eq_1535
  DataType: 
  OrigDataType: 
T_1553: (in wLoc0C : word16)
  Class: Eq_1531
  DataType: 
  OrigDataType: 
T_1554: (in 0x000E : word16)
  Class: Eq_1554
  DataType: 
  OrigDataType: 
T_1555: (in fp - 0x000E : word16)
  Class: Eq_1535
  DataType: 
  OrigDataType: 
T_1556: (in si : word16)
  Class: Eq_1556
  DataType: 
  OrigDataType: 
T_1557: (in wLoc0E : word16)
  Class: Eq_1556
  DataType: 
  OrigDataType: 
T_1558: (in 0x0010 : word16)
  Class: Eq_1558
  DataType: 
  OrigDataType: 
T_1559: (in fp - 0x0010 : word16)
  Class: Eq_1535
  DataType: 
  OrigDataType: 
T_1560: (in wLoc10 : word16)
  Class: Eq_1466
  DataType: 
  OrigDataType: 
T_1561: (in 0x0012 : word16)
  Class: Eq_1561
  DataType: 
  OrigDataType: 
T_1562: (in fp - 0x0012 : word16)
  Class: Eq_1535
  DataType: 
  OrigDataType: 
T_1563: (in wLoc12 : word16)
  Class: Eq_1472
  DataType: 
  OrigDataType: 
T_1564: (in 0x0014 : word16)
  Class: Eq_1564
  DataType: 
  OrigDataType: 
T_1565: (in fp - 0x0014 : word16)
  Class: Eq_1535
  DataType: 
  OrigDataType: 
T_1566: (in wLoc14 : word16)
  Class: Eq_1472
  DataType: 
  OrigDataType: 
T_1567: (in cl : byte)
  Class: Eq_1567
  DataType: 
  OrigDataType: 
T_1568: (in dl + cl : byte)
  Class: Eq_1527
  DataType: 
  OrigDataType: 
T_1569: (in cond(dl) : byte)
  Class: Eq_1522
  DataType: 
  OrigDataType: 
T_1570: (in 0x02 : byte)
  Class: Eq_1570
  DataType: 
  OrigDataType: 
T_1571: (in dl & 0x02 : byte)
  Class: Eq_1571
  DataType: 
  OrigDataType: 
T_1572: (in 0x00 : byte)
  Class: Eq_1571
  DataType: 
  OrigDataType: 
T_1573: (in (dl & 0x02) != 0x00 : bool)
  Class: Eq_1573
  DataType: 
  OrigDataType: 
T_1574: (in v16 : bool)
  Class: Eq_1573
  DataType: 
  OrigDataType: 
T_1575: (in __rcr : ptr32)
  Class: Eq_1575
  DataType: 
  OrigDataType: 
T_1576: (in 0x01 : byte)
  Class: Eq_1576
  DataType: 
  OrigDataType: 
T_1577: (in __rcr(dl, 0x01, C) : byte)
  Class: Eq_1527
  DataType: 
  OrigDataType: 
T_1578: (in ch : byte)
  Class: Eq_1578
  DataType: 
  OrigDataType: 
T_1579: (in dh + ch : byte)
  Class: Eq_1529
  DataType: 
  OrigDataType: 
T_1580: (in cond(dh) : byte)
  Class: Eq_1522
  DataType: 
  OrigDataType: 
T_1581: (in 0x02 : byte)
  Class: Eq_1581
  DataType: 
  OrigDataType: 
T_1582: (in dh & 0x02 : byte)
  Class: Eq_1582
  DataType: 
  OrigDataType: 
T_1583: (in 0x00 : byte)
  Class: Eq_1582
  DataType: 
  OrigDataType: 
T_1584: (in (dh & 0x02) != 0x00 : bool)
  Class: Eq_1522
  DataType: 
  OrigDataType: 
T_1585: (in v19 : bool)
  Class: Eq_1522
  DataType: 
  OrigDataType: 
T_1586: (in __rcr : ptr32)
  Class: Eq_1586
  DataType: 
  OrigDataType: 
T_1587: (in 0x01 : byte)
  Class: Eq_1587
  DataType: 
  OrigDataType: 
T_1588: (in __rcr(dh, 0x01, C) : byte)
  Class: Eq_1529
  DataType: 
  OrigDataType: 
T_1589: (in 0x0012 : word16)
  Class: Eq_1589
  DataType: 
  OrigDataType: 
T_1590: (in fp - 0x0012 : word16)
  Class: Eq_1535
  DataType: 
  OrigDataType: 
T_1591: (in 0x0010 : word16)
  Class: Eq_1591
  DataType: 
  OrigDataType: 
T_1592: (in fp - 0x0010 : word16)
  Class: Eq_1535
  DataType: 
  OrigDataType: 
T_1593: (in 0x0001 : word16)
  Class: Eq_1593
  DataType: 
  OrigDataType: 
T_1594: (in di - 0x0001 : word16)
  Class: Eq_1466
  DataType: 
  OrigDataType: 
T_1595: (in cond(di) : byte)
  Class: Eq_1595
  DataType: 
  OrigDataType: 
T_1596: (in SZO : byte)
  Class: Eq_1595
  DataType: 
  OrigDataType: 
T_1597: (in fn0C00_047C : ptr32)
  Class: Eq_1597
  DataType: 
  OrigDataType: 
T_1598: (in signature of fn0C00_047C : void)
  Class: Eq_1597
  DataType: 
  OrigDataType: 
T_1599: (in fn0C00_047C(ax, cx, dx, bx, di, es) : void)
  Class: Eq_1599
  DataType: 
  OrigDataType: 
T_1600: (in 0x000E : word16)
  Class: Eq_1600
  DataType: 
  OrigDataType: 
T_1601: (in fp - 0x000E : word16)
  Class: Eq_1533
  DataType: 
  OrigDataType: 
T_1602: (in sp : word16)
  Class: Eq_1533
  DataType: 
  OrigDataType: 
T_1603: (in si : word16)
  Class: Eq_1556
  DataType: 
  OrigDataType: 
T_1604: (in 0x000C : word16)
  Class: Eq_1604
  DataType: 
  OrigDataType: 
T_1605: (in fp - 0x000C : word16)
  Class: Eq_1533
  DataType: 
  OrigDataType: 
T_1606: (in bp : word16)
  Class: Eq_1531
  DataType: 
  OrigDataType: 
T_1607: (in 0x000A : word16)
  Class: Eq_1607
  DataType: 
  OrigDataType: 
T_1608: (in fp - 0x000A : word16)
  Class: Eq_1533
  DataType: 
  OrigDataType: 
T_1609: (in 0x0008 : word16)
  Class: Eq_1609
  DataType: 
  OrigDataType: 
T_1610: (in fp - 0x0008 : word16)
  Class: Eq_1533
  DataType: 
  OrigDataType: 
T_1611: (in bx : word16)
  Class: Eq_1472
  DataType: 
  OrigDataType: 
T_1612: (in 0x0006 : word16)
  Class: Eq_1612
  DataType: 
  OrigDataType: 
T_1613: (in fp - 0x0006 : word16)
  Class: Eq_1533
  DataType: 
  OrigDataType: 
T_1614: (in dx : word16)
  Class: Eq_1472
  DataType: 
  OrigDataType: 
T_1615: (in 0x0004 : word16)
  Class: Eq_1615
  DataType: 
  OrigDataType: 
T_1616: (in fp - 0x0004 : word16)
  Class: Eq_1533
  DataType: 
  OrigDataType: 
T_1617: (in cx : word16)
  Class: Eq_1472
  DataType: 
  OrigDataType: 
T_1618: (in 0x0002 : word16)
  Class: Eq_1618
  DataType: 
  OrigDataType: 
T_1619: (in fp - 0x0002 : word16)
  Class: Eq_1533
  DataType: 
  OrigDataType: 
T_1620: (in v24 : word16)
  Class: Eq_1472
  DataType: 
  OrigDataType: 
T_1621: (in 0x0001 : word16)
  Class: Eq_1621
  DataType: 
  OrigDataType: 
T_1622: (in ax + 0x0001 : word16)
  Class: Eq_1471
  DataType: 
  OrigDataType: 
T_1623: (in ah : byte)
  Class: Eq_1623
  DataType: 
  OrigDataType: 
T_1624: (in v25 : word16)
  Class: Eq_1623
  DataType: 
  OrigDataType: 
T_1625: (in al : byte)
  Class: Eq_1623
  DataType: 
  OrigDataType: 
T_1626: (in 0x0001 : word16)
  Class: Eq_1626
  DataType: 
  OrigDataType: 
T_1627: (in bp - 0x0001 : word16)
  Class: Eq_1531
  DataType: 
  OrigDataType: 
T_1628: (in cond(bp) : byte)
  Class: Eq_1628
  DataType: 
  OrigDataType: 
T_1629: (in SZO : byte)
  Class: Eq_1628
  DataType: 
  OrigDataType: 
T_1630: (in Z : byte)
  Class: Eq_1630
  DataType: 
  OrigDataType: 
T_1631: (in Test(NE,Z) : bool)
  Class: Eq_1631
  DataType: 
  OrigDataType: 
T_1632: (in bx <u cx : bool)
  Class: Eq_1632
  DataType: 
  OrigDataType: 
T_1633: (in SLICE(bx, byte, 8) : byte)
  Class: Eq_1633
  DataType: 
  OrigDataType: 
T_1634: (in ch : byte)
  Class: Eq_1633
  DataType: 
  OrigDataType: 
T_1635: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_1635
  DataType: 
  OrigDataType: 
T_1636: (in bh : byte)
  Class: Eq_1635
  DataType: 
  OrigDataType: 
T_1637: (in (byte) cx : byte)
  Class: Eq_1637
  DataType: 
  OrigDataType: 
T_1638: (in bl : byte)
  Class: Eq_1637
  DataType: 
  OrigDataType: 
T_1639: (in bx <u dx : bool)
  Class: Eq_1639
  DataType: 
  OrigDataType: 
T_1640: (in SLICE(bx, byte, 8) : byte)
  Class: Eq_1640
  DataType: 
  OrigDataType: 
T_1641: (in dh : byte)
  Class: Eq_1640
  DataType: 
  OrigDataType: 
T_1642: (in SLICE(dx, byte, 8) : byte)
  Class: Eq_1635
  DataType: 
  OrigDataType: 
T_1643: (in (byte) dx : byte)
  Class: Eq_1637
  DataType: 
  OrigDataType: 
T_1644: (in cx <u dx : bool)
  Class: Eq_1644
  DataType: 
  OrigDataType: 
T_1645: (in dx_40 : word16)
  Class: Eq_1645
  DataType: 
  OrigDataType: 
T_1646: (in 0x01 : byte)
  Class: Eq_1646
  DataType: 
  OrigDataType: 
T_1647: (in dh + 0x01 : byte)
  Class: Eq_1647
  DataType: 
  OrigDataType: 
T_1648: (in DPB(dx, dh + 0x01, 8, 8) : word16)
  Class: Eq_1645
  DataType: 
  OrigDataType: 
T_1649: (in cx_38 : word16)
  Class: Eq_1649
  DataType: 
  OrigDataType: 
T_1650: (in 0x01 : byte)
  Class: Eq_1650
  DataType: 
  OrigDataType: 
T_1651: (in ch + 0x01 : byte)
  Class: Eq_1651
  DataType: 
  OrigDataType: 
T_1652: (in DPB(cx, ch + 0x01, 8, 8) : word16)
  Class: Eq_1649
  DataType: 
  OrigDataType: 
T_1653: (in ch_47 : byte)
  Class: Eq_1653
  DataType: 
  OrigDataType: 
T_1654: (in dh_48 : byte)
  Class: Eq_1654
  DataType: 
  OrigDataType: 
T_1655: (in ax_49 : word16)
  Class: Eq_1655
  DataType: 
  OrigDataType: 
T_1656: (in fn0C00_0527 : ptr32)
  Class: Eq_1656
  DataType: 
  OrigDataType: 
T_1657: (in signature of fn0C00_0527 : void)
  Class: Eq_1656
  DataType: 
  OrigDataType: 
T_1658: (in al : byte)
  Class: Eq_1658
  DataType: 
  OrigDataType: 
T_1659: (in ah : byte)
  Class: Eq_1659
  DataType: 
  OrigDataType: 
T_1660: (in chOut : ptr16)
  Class: Eq_1660
  DataType: 
  OrigDataType: 
T_1661: (in dhOut : ptr16)
  Class: Eq_1661
  DataType: 
  OrigDataType: 
T_1662: (in (byte) dx_40 : byte)
  Class: Eq_1662
  DataType: 
  OrigDataType: 
T_1663: (in (byte) dx_40 - bl : byte)
  Class: Eq_1658
  DataType: 
  OrigDataType: 
T_1664: (in SLICE(dx_40, byte, 8) : byte)
  Class: Eq_1664
  DataType: 
  OrigDataType: 
T_1665: (in SLICE(dx_40, byte, 8) - bh : byte)
  Class: Eq_1659
  DataType: 
  OrigDataType: 
T_1666: (in out ch_47 : ptr16)
  Class: Eq_1660
  DataType: 
  OrigDataType: 
T_1667: (in out dh_48 : ptr16)
  Class: Eq_1661
  DataType: 
  OrigDataType: 
T_1668: (in fn0C00_0527((byte) dx_40 - bl, SLICE(dx_40, byte, 8) - bh, out ch_47, out dh_48) : word16)
  Class: Eq_1655
  DataType: 
  OrigDataType: 
T_1669: (in ch_62 : byte)
  Class: Eq_1635
  DataType: 
  OrigDataType: 
T_1670: (in dh_63 : byte)
  Class: Eq_1670
  DataType: 
  OrigDataType: 
T_1671: (in ax_64 : word16)
  Class: Eq_1671
  DataType: 
  OrigDataType: 
T_1672: (in fn0C00_0527 : ptr32)
  Class: Eq_1656
  DataType: 
  OrigDataType: 
T_1673: (in (byte) cx_38 : byte)
  Class: Eq_1673
  DataType: 
  OrigDataType: 
T_1674: (in (byte) cx_38 - bl : byte)
  Class: Eq_1658
  DataType: 
  OrigDataType: 
T_1675: (in SLICE(cx_38, byte, 8) : byte)
  Class: Eq_1675
  DataType: 
  OrigDataType: 
T_1676: (in SLICE(cx_38, byte, 8) - bh : byte)
  Class: Eq_1659
  DataType: 
  OrigDataType: 
T_1677: (in out ch_62 : ptr16)
  Class: Eq_1660
  DataType: 
  OrigDataType: 
T_1678: (in out dh_63 : ptr16)
  Class: Eq_1661
  DataType: 
  OrigDataType: 
T_1679: (in fn0C00_0527((byte) cx_38 - bl, SLICE(cx_38, byte, 8) - bh, out ch_62, out dh_63) : word16)
  Class: Eq_1671
  DataType: 
  OrigDataType: 
T_1680: (in cl_75 : byte)
  Class: Eq_1680
  DataType: 
  OrigDataType: 
T_1681: (in ch_76 : byte)
  Class: Eq_1681
  DataType: 
  OrigDataType: 
T_1682: (in si_77 : word16)
  Class: Eq_1682
  DataType: 
  OrigDataType: 
T_1683: (in fn0C00_04FE : ptr32)
  Class: Eq_1683
  DataType: 
  OrigDataType: 
T_1684: (in signature of fn0C00_04FE : void)
  Class: Eq_1683
  DataType: 
  OrigDataType: 
T_1685: (in bp : word16)
  Class: Eq_1671
  DataType: 
  OrigDataType: 
T_1686: (in si : word16)
  Class: Eq_1682
  DataType: 
  OrigDataType: 
T_1687: (in di : word16)
  Class: Eq_1655
  DataType: 
  OrigDataType: 
T_1688: (in al : byte)
  Class: Eq_1688
  DataType: 
  OrigDataType: 
T_1689: (in ah : byte)
  Class: Eq_1635
  DataType: 
  OrigDataType: 
T_1690: (in dh : byte)
  Class: Eq_1637
  DataType: 
  OrigDataType: 
T_1691: (in bh : byte)
  Class: Eq_1635
  DataType: 
  OrigDataType: 
T_1692: (in es : selector)
  Class: Eq_1475
  DataType: 
  OrigDataType: 
T_1693: (in clOut : ptr16)
  Class: Eq_1693
  DataType: 
  OrigDataType: 
T_1694: (in chOut : ptr16)
  Class: Eq_1694
  DataType: 
  OrigDataType: 
T_1695: (in 0x00 : byte)
  Class: Eq_1695
  DataType: 
  OrigDataType: 
T_1696: (in DPB(dx_40, 0x00, 0, 8) : word16)
  Class: Eq_1682
  DataType: 
  OrigDataType: 
T_1697: (in (byte) ax : byte)
  Class: Eq_1688
  DataType: 
  OrigDataType: 
T_1698: (in out cl_75 : ptr16)
  Class: Eq_1693
  DataType: 
  OrigDataType: 
T_1699: (in out ch_76 : ptr16)
  Class: Eq_1694
  DataType: 
  OrigDataType: 
T_1700: (in fn0C00_04FE(ax_64, DPB(dx_40, 0x00, 0, 8), ax_49, (byte) ax, ch_62, bl, bh, es, out cl_75, out ch_76) : word16)
  Class: Eq_1682
  DataType: 
  OrigDataType: 
T_1701: (in ax_82 : word16)
  Class: Eq_1701
  DataType: 
  OrigDataType: 
T_1702: (in SLICE(dx_40, byte, 8) : byte)
  Class: Eq_1702
  DataType: 
  OrigDataType: 
T_1703: (in DPB(ax, SLICE(dx_40, byte, 8), 8, 8) : word16)
  Class: Eq_1701
  DataType: 
  OrigDataType: 
T_1704: (in ch_91 : byte)
  Class: Eq_1704
  DataType: 
  OrigDataType: 
T_1705: (in dh_92 : byte)
  Class: Eq_1637
  DataType: 
  OrigDataType: 
T_1706: (in ax_93 : word16)
  Class: Eq_1671
  DataType: 
  OrigDataType: 
T_1707: (in fn0C00_0527 : ptr32)
  Class: Eq_1656
  DataType: 
  OrigDataType: 
T_1708: (in (byte) dx_40 : byte)
  Class: Eq_1708
  DataType: 
  OrigDataType: 
T_1709: (in (byte) dx_40 - cl_75 : byte)
  Class: Eq_1658
  DataType: 
  OrigDataType: 
T_1710: (in SLICE(dx_40, byte, 8) : byte)
  Class: Eq_1710
  DataType: 
  OrigDataType: 
T_1711: (in SLICE(dx_40, byte, 8) - ch_76 : byte)
  Class: Eq_1659
  DataType: 
  OrigDataType: 
T_1712: (in out ch_91 : ptr16)
  Class: Eq_1660
  DataType: 
  OrigDataType: 
T_1713: (in out dh_92 : ptr16)
  Class: Eq_1661
  DataType: 
  OrigDataType: 
T_1714: (in fn0C00_0527((byte) dx_40 - cl_75, SLICE(dx_40, byte, 8) - ch_76, out ch_91, out dh_92) : word16)
  Class: Eq_1671
  DataType: 
  OrigDataType: 
T_1715: (in ah_96 : byte)
  Class: Eq_1635
  DataType: 
  OrigDataType: 
T_1716: (in SLICE(ax_82, byte, 8) : byte)
  Class: Eq_1635
  DataType: 
  OrigDataType: 
T_1717: (in al_97 : byte)
  Class: Eq_1688
  DataType: 
  OrigDataType: 
T_1718: (in (byte) ax_82 : byte)
  Class: Eq_1688
  DataType: 
  OrigDataType: 
T_1719: (in bh_100 : byte)
  Class: Eq_1635
  DataType: 
  OrigDataType: 
T_1720: (in SLICE(cx_38, byte, 8) : byte)
  Class: Eq_1635
  DataType: 
  OrigDataType: 
T_1721: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_1640
  DataType: 
  OrigDataType: 
T_1722: (in SLICE(dx, byte, 8) : byte)
  Class: Eq_1633
  DataType: 
  OrigDataType: 
T_1723: (in cl_101 : byte)
  Class: Eq_1723
  DataType: 
  OrigDataType: 
T_1724: (in ch_102 : byte)
  Class: Eq_1724
  DataType: 
  OrigDataType: 
T_1725: (in fn0C00_04FE : ptr32)
  Class: Eq_1683
  DataType: 
  OrigDataType: 
T_1726: (in out cl_101 : ptr16)
  Class: Eq_1693
  DataType: 
  OrigDataType: 
T_1727: (in out ch_102 : ptr16)
  Class: Eq_1694
  DataType: 
  OrigDataType: 
T_1728: (in fn0C00_04FE(ax_93, si_77, ax_49, al_97, ah_96, dh_92, bh_100, es, out cl_101, out ch_102) : word16)
  Class: Eq_1728
  DataType: 
  OrigDataType: 
T_1729: (in ch_89 : byte)
  Class: Eq_1729
  DataType: 
  OrigDataType: 
T_1730: (in cx : word16)
  Class: Eq_1730
  DataType: 
  OrigDataType: 
T_1731: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_1731
  DataType: 
  OrigDataType: 
T_1732: (in *chOut : byte)
  Class: Eq_1731
  DataType: 
  OrigDataType: 
T_1733: (in cl_90 : byte)
  Class: Eq_1733
  DataType: 
  OrigDataType: 
T_1734: (in (byte) cx : byte)
  Class: Eq_1734
  DataType: 
  OrigDataType: 
T_1735: (in *clOut : byte)
  Class: Eq_1734
  DataType: 
  OrigDataType: 
T_1736: (in dx : word16)
  Class: Eq_1736
  DataType: 
  OrigDataType: 
T_1737: (in dx + di : word16)
  Class: Eq_1736
  DataType: 
  OrigDataType: 
T_1738: (in si + bp : word16)
  Class: Eq_1682
  DataType: 
  OrigDataType: 
T_1739: (in dh_37 : byte)
  Class: Eq_1739
  DataType: 
  OrigDataType: 
T_1740: (in SLICE(dx, byte, 8) : byte)
  Class: Eq_1739
  DataType: 
  OrigDataType: 
T_1741: (in ch_45 : byte)
  Class: Eq_1741
  DataType: 
  OrigDataType: 
T_1742: (in SLICE(si, byte, 8) : byte)
  Class: Eq_1742
  DataType: 
  OrigDataType: 
T_1743: (in SLICE(si, byte, 8) - dh_37 : byte)
  Class: Eq_1741
  DataType: 
  OrigDataType: 
T_1744: (in cx_46 : word16)
  Class: Eq_1744
  DataType: 
  OrigDataType: 
T_1745: (in DPB(si, ch_45, 8, 8) : word16)
  Class: Eq_1744
  DataType: 
  OrigDataType: 
T_1746: (in 0x00 : byte)
  Class: Eq_1741
  DataType: 
  OrigDataType: 
T_1747: (in ch_45 >=u 0x00 : bool)
  Class: Eq_1747
  DataType: 
  OrigDataType: 
T_1748: (in bx_55 : word16)
  Class: Eq_1748
  DataType: 
  OrigDataType: 
T_1749: (in bx : word16)
  Class: Eq_1749
  DataType: 
  OrigDataType: 
T_1750: (in DPB(bx, dh_37, 0, 8) : word16)
  Class: Eq_1748
  DataType: 
  OrigDataType: 
T_1751: (in di_58 : word16)
  Class: Eq_1748
  DataType: 
  OrigDataType: 
T_1752: (in cx_62 : word16)
  Class: Eq_1752
  DataType: 
  OrigDataType: 
T_1753: (in 0x00 : byte)
  Class: Eq_1753
  DataType: 
  OrigDataType: 
T_1754: (in DPB(cx_46, 0x00, 8, 8) : word16)
  Class: Eq_1754
  DataType: 
  OrigDataType: 
T_1755: (in 0x0001 : word16)
  Class: Eq_1755
  DataType: 
  OrigDataType: 
T_1756: (in DPB(cx_46, 0x00, 8, 8) + 0x0001 : word16)
  Class: Eq_1752
  DataType: 
  OrigDataType: 
T_1757: (in -cx_46 : word16)
  Class: Eq_1744
  DataType: 
  OrigDataType: 
T_1758: (in 0x01 : byte)
  Class: Eq_1758
  DataType: 
  OrigDataType: 
T_1759: (in bh + 0x01 : byte)
  Class: Eq_1635
  DataType: 
  OrigDataType: 
T_1760: (in DPB(bx_55, bh, 8, 8) : word16)
  Class: Eq_1749
  DataType: 
  OrigDataType: 
T_1761: (in 0x0000 : word16)
  Class: Eq_1761
  DataType: 
  OrigDataType: 
T_1762: (in di_58 + 0x0000 : word16)
  Class: Eq_1762
  DataType: 
  OrigDataType: 
T_1763: (in Mem71[es:di_58 + 0x0000:byte] : byte)
  Class: Eq_1688
  DataType: 
  OrigDataType: 
T_1764: (in 0x0001 : word16)
  Class: Eq_1764
  DataType: 
  OrigDataType: 
T_1765: (in di_58 + 0x0001 : word16)
  Class: Eq_1748
  DataType: 
  OrigDataType: 
T_1766: (in 0x0001 : word16)
  Class: Eq_1766
  DataType: 
  OrigDataType: 
T_1767: (in cx_62 - 0x0001 : word16)
  Class: Eq_1752
  DataType: 
  OrigDataType: 
T_1768: (in 0x0000 : word16)
  Class: Eq_1752
  DataType: 
  OrigDataType: 
T_1769: (in cx_62 == 0x0000 : bool)
  Class: Eq_1769
  DataType: 
  OrigDataType: 
T_1770: (in bh == ah : bool)
  Class: Eq_1770
  DataType: 
  OrigDataType: 
T_1771: (in ax : word16)
  Class: Eq_1771
  DataType: 
  OrigDataType: 
T_1772: (in dx_ax_17 : int32)
  Class: Eq_1772
  DataType: 
  OrigDataType: 
T_1773: (in 0x00 : byte)
  Class: Eq_1773
  DataType: 
  OrigDataType: 
T_1774: (in DPB(ax, 0x00, 0, 8) : word16)
  Class: Eq_1774
  DataType: 
  OrigDataType: 
T_1775: (in (int32) DPB(ax, 0x00, 0, 8) : int32)
  Class: Eq_1772
  DataType: 
  OrigDataType: 
T_1776: (in cx_16 : word16)
  Class: Eq_1776
  DataType: 
  OrigDataType: 
T_1777: (in cx : word16)
  Class: Eq_1777
  DataType: 
  OrigDataType: 
T_1778: (in 0x00 : byte)
  Class: Eq_1778
  DataType: 
  OrigDataType: 
T_1779: (in DPB(cx, 0x00, 8, 8) : word16)
  Class: Eq_1776
  DataType: 
  OrigDataType: 
T_1780: (in ax_21 : word16)
  Class: Eq_1780
  DataType: 
  OrigDataType: 
T_1781: (in (word16) dx_ax_17 : word16)
  Class: Eq_1780
  DataType: 
  OrigDataType: 
T_1782: (in 0x0000 : word16)
  Class: Eq_1776
  DataType: 
  OrigDataType: 
T_1783: (in cx_16 == 0x0000 : bool)
  Class: Eq_1783
  DataType: 
  OrigDataType: 
T_1784: (in dh_30 : byte)
  Class: Eq_1784
  DataType: 
  OrigDataType: 
T_1785: (in dx : word16)
  Class: Eq_1785
  DataType: 
  OrigDataType: 
T_1786: (in SLICE(dx, byte, 8) : byte)
  Class: Eq_1786
  DataType: 
  OrigDataType: 
T_1787: (in *dhOut : byte)
  Class: Eq_1786
  DataType: 
  OrigDataType: 
T_1788: (in ch_33 : byte)
  Class: Eq_1788
  DataType: 
  OrigDataType: 
T_1789: (in SLICE(cx, byte, 8) : byte)
  Class: Eq_1789
  DataType: 
  OrigDataType: 
T_1790: (in *chOut : byte)
  Class: Eq_1789
  DataType: 
  OrigDataType: 
T_1791: (in dx_ax_17 % cx_16 : int16)
  Class: Eq_1791
  DataType: 
  OrigDataType: 
T_1792: (in SEQ(dx_ax_17 % cx_16, ax_21) : int32)
  Class: Eq_1792
  DataType: 
  OrigDataType: 
T_1793: (in SEQ(dx_ax_17 % cx_16, ax_21) / cx_16 : int16)
  Class: Eq_1780
  DataType: 
  OrigDataType: 
T_1794: (in 0x01FE : word16)
  Class: Eq_1794
  DataType: 
  OrigDataType: 
T_1795: (in bx & 0x01FE : word16)
  Class: Eq_1795
  DataType: 
  OrigDataType: 
T_1796: (in 0x0B26 : word16)
  Class: Eq_1796
  DataType: 
  OrigDataType: 
T_1797: (in (bx & 0x01FE) + 0x0B26 : word16)
  Class: Eq_1797
  DataType: 
  OrigDataType: 
T_1798: (in Mem0[ds:(bx & 0x01FE) + 0x0B26:word16] : word16)
  Class: Eq_1798
  DataType: 
  OrigDataType: 
T_1799: (in 0x058B : word16)
  Class: Eq_1799
  DataType: 
  OrigDataType: 
T_1800: (in Mem8[ds:0x058B:word16] : word16)
  Class: Eq_1798
  DataType: 
  OrigDataType: 
T_1801: (in bx_9 : word16)
  Class: Eq_1801
  DataType: 
  OrigDataType: 
T_1802: (in bx & 0x01FE : word16)
  Class: Eq_1802
  DataType: 
  OrigDataType: 
T_1803: (in 0x0080 : word16)
  Class: Eq_1803
  DataType: 
  OrigDataType: 
T_1804: (in (bx & 0x01FE) + 0x0080 : word16)
  Class: Eq_1801
  DataType: 
  OrigDataType: 
T_1805: (in 0x01FE : word16)
  Class: Eq_1805
  DataType: 
  OrigDataType: 
T_1806: (in bx_9 & 0x01FE : word16)
  Class: Eq_1806
  DataType: 
  OrigDataType: 
T_1807: (in 0x0B26 : word16)
  Class: Eq_1807
  DataType: 
  OrigDataType: 
T_1808: (in (bx_9 & 0x01FE) + 0x0B26 : word16)
  Class: Eq_1808
  DataType: 
  OrigDataType: 
T_1809: (in Mem8[ds:(bx_9 & 0x01FE) + 0x0B26:word16] : word16)
  Class: Eq_1809
  DataType: 
  OrigDataType: 
T_1810: (in 0x05A2 : word16)
  Class: Eq_1810
  DataType: 
  OrigDataType: 
T_1811: (in Mem12[ds:0x05A2:word16] : word16)
  Class: Eq_1809
  DataType: 
  OrigDataType: 
T_1812: (in bx_13 : word16)
  Class: Eq_1812
  DataType: 
  OrigDataType: 
T_1813: (in bx_9 & 0x01FE : word16)
  Class: Eq_1813
  DataType: 
  OrigDataType: 
T_1814: (in 0x0030 : word16)
  Class: Eq_1814
  DataType: 
  OrigDataType: 
T_1815: (in (bx_9 & 0x01FE) + 0x0030 : word16)
  Class: Eq_1812
  DataType: 
  OrigDataType: 
T_1816: (in 0x01FE : word16)
  Class: Eq_1816
  DataType: 
  OrigDataType: 
T_1817: (in bx_13 & 0x01FE : word16)
  Class: Eq_1817
  DataType: 
  OrigDataType: 
T_1818: (in 0x0B26 : word16)
  Class: Eq_1818
  DataType: 
  OrigDataType: 
T_1819: (in (bx_13 & 0x01FE) + 0x0B26 : word16)
  Class: Eq_1819
  DataType: 
  OrigDataType: 
T_1820: (in Mem12[ds:(bx_13 & 0x01FE) + 0x0B26:word16] : word16)
  Class: Eq_1820
  DataType: 
  OrigDataType: 
T_1821: (in 0x05BA : word16)
  Class: Eq_1821
  DataType: 
  OrigDataType: 
T_1822: (in Mem16[ds:0x05BA:word16] : word16)
  Class: Eq_1820
  DataType: 
  OrigDataType: 
T_1823: (in bx_17 : word16)
  Class: Eq_1823
  DataType: 
  OrigDataType: 
T_1824: (in bx_13 & 0x01FE : word16)
  Class: Eq_1824
  DataType: 
  OrigDataType: 
T_1825: (in 0x0080 : word16)
  Class: Eq_1825
  DataType: 
  OrigDataType: 
T_1826: (in (bx_13 & 0x01FE) + 0x0080 : word16)
  Class: Eq_1823
  DataType: 
  OrigDataType: 
T_1827: (in 0x01FE : word16)
  Class: Eq_1827
  DataType: 
  OrigDataType: 
T_1828: (in bx_17 & 0x01FE : word16)
  Class: Eq_1828
  DataType: 
  OrigDataType: 
T_1829: (in 0x0B26 : word16)
  Class: Eq_1829
  DataType: 
  OrigDataType: 
T_1830: (in (bx_17 & 0x01FE) + 0x0B26 : word16)
  Class: Eq_1830
  DataType: 
  OrigDataType: 
T_1831: (in Mem16[ds:(bx_17 & 0x01FE) + 0x0B26:word16] : word16)
  Class: Eq_1831
  DataType: 
  OrigDataType: 
T_1832: (in 0x05D1 : word16)
  Class: Eq_1832
  DataType: 
  OrigDataType: 
T_1833: (in Mem20[ds:0x05D1:word16] : word16)
  Class: Eq_1831
  DataType: 
  OrigDataType: 
T_1834: (in bx_18 : word16)
  Class: Eq_1834
  DataType: 
  OrigDataType: 
T_1835: (in bx_17 & 0x01FE : word16)
  Class: Eq_1834
  DataType: 
  OrigDataType: 
T_1836: (in cx_21 : word16)
  Class: Eq_1836
  DataType: 
  OrigDataType: 
T_1837: (in 0x0180 : word16)
  Class: Eq_1836
  DataType: 
  OrigDataType: 
T_1838: (in esi_163 : word32)
  Class: Eq_1838
  DataType: 
  OrigDataType: 
T_1839: (in 0x00000008 : word32)
  Class: Eq_1838
  DataType: 
  OrigDataType: 
T_1840: (in si_162 : word16)
  Class: Eq_1840
  DataType: 
  OrigDataType: 
T_1841: (in 0x0008 : word16)
  Class: Eq_1840
  DataType: 
  OrigDataType: 
T_1842: (in 0x0000 : word16)
  Class: Eq_1842
  DataType: 
  OrigDataType: 
T_1843: (in 0x0000 : word16)
  Class: Eq_1843
  DataType: 
  OrigDataType: 
T_1844: (in di + 0x0000 : word16)
  Class: Eq_1844
  DataType: 
  OrigDataType: 
T_1845: (in Mem39[es:di + 0x0000:word16] : word16)
  Class: Eq_1842
  DataType: 
  OrigDataType: 
T_1846: (in 0x0002 : word16)
  Class: Eq_1846
  DataType: 
  OrigDataType: 
T_1847: (in di + 0x0002 : word16)
  Class: Eq_594
  DataType: 
  OrigDataType: 
T_1848: (in 0x0001 : word16)
  Class: Eq_1848
  DataType: 
  OrigDataType: 
T_1849: (in cx_21 - 0x0001 : word16)
  Class: Eq_1836
  DataType: 
  OrigDataType: 
T_1850: (in 0x0000 : word16)
  Class: Eq_1836
  DataType: 
  OrigDataType: 
T_1851: (in cx_21 == 0x0000 : bool)
  Class: Eq_1851
  DataType: 
  OrigDataType: 
T_1852: (in 0x0000 : word16)
  Class: Eq_1852
  DataType: 
  OrigDataType: 
T_1853: (in bx_18 + 0x0000 : word16)
  Class: Eq_1853
  DataType: 
  OrigDataType: 
T_1854: (in Mem119[fs:bx_18 + 0x0000:byte] : byte)
  Class: Eq_1854
  DataType: 
  OrigDataType: 
T_1855: (in 0x0000 : word16)
  Class: Eq_1855
  DataType: 
  OrigDataType: 
T_1856: (in di + 0x0000 : word16)
  Class: Eq_1856
  DataType: 
  OrigDataType: 
T_1857: (in Mem156[es:di + 0x0000:byte] : byte)
  Class: Eq_1854
  DataType: 
  OrigDataType: 
T_1858: (in 0x0001 : word16)
  Class: Eq_1858
  DataType: 
  OrigDataType: 
T_1859: (in di + 0x0001 : word16)
  Class: Eq_594
  DataType: 
  OrigDataType: 
T_1860: (in bp_126 : word16)
  Class: Eq_1860
  DataType: 
  OrigDataType: 
T_1861: (in 0x0001 : word16)
  Class: Eq_1861
  DataType: 
  OrigDataType: 
T_1862: (in bp_126 - 0x0001 : word16)
  Class: Eq_1860
  DataType: 
  OrigDataType: 
T_1863: (in 0x0000 : word16)
  Class: Eq_1860
  DataType: 
  OrigDataType: 
T_1864: (in bp_126 != 0x0000 : bool)
  Class: Eq_1864
  DataType: 
  OrigDataType: 
T_1865: (in si_57 : word16)
  Class: Eq_1840
  DataType: 
  OrigDataType: 
T_1866: (in DPB(esi_163, si_57, 0, 16) : word32)
  Class: Eq_1838
  DataType: 
  OrigDataType: 
T_1867: (in 0x0084 : word16)
  Class: Eq_1840
  DataType: 
  OrigDataType: 
T_1868: (in si_57 == 0x0084 : bool)
  Class: Eq_1868
  DataType: 
  OrigDataType: 
T_1869: (in 0x0001 : word16)
  Class: Eq_1869
  DataType: 
  OrigDataType: 
T_1870: (in si_162 + 0x0001 : word16)
  Class: Eq_1840
  DataType: 
  OrigDataType: 
T_1871: (in esi_58 : word32)
  Class: Eq_1871
  DataType: 
  OrigDataType: 
T_1872: (in DPB(esi_163, si_57, 0, 16) : word32)
  Class: Eq_1871
  DataType: 
  OrigDataType: 
T_1873: (in eax_66 : word32)
  Class: Eq_1873
  DataType: 
  OrigDataType: 
T_1874: (in 0x000000001DCD6500 : word64)
  Class: Eq_1874
  DataType: 
  OrigDataType: 
T_1875: (in 0x000000001DCD6500 % esi_58 : int32)
  Class: Eq_1875
  DataType: 
  OrigDataType: 
T_1876: (in 0x1DCD6500 : word32)
  Class: Eq_1876
  DataType: 
  OrigDataType: 
T_1877: (in SEQ(0x000000001DCD6500 % esi_58, 0x1DCD6500) : word64)
  Class: Eq_1877
  DataType: 
  OrigDataType: 
T_1878: (in SEQ(0x000000001DCD6500 % esi_58, 0x1DCD6500) / esi_58 : int32)
  Class: Eq_1873
  DataType: 
  OrigDataType: 
T_1879: (in __shrd : ptr32)
  Class: Eq_1879
  DataType: 
  OrigDataType: 
T_1880: (in 0 : int32)
  Class: Eq_1880
  DataType: 
  OrigDataType: 
T_1881: (in 0 : int32)
  Class: Eq_1881
  DataType: 
  OrigDataType: 
T_1882: (in eax_66 *s 0 : int64)
  Class: Eq_1882
  DataType: 
  OrigDataType: 
T_1883: (in SLICE(eax_66 *s 0, word32, 32) : word32)
  Class: Eq_1883
  DataType: 
  OrigDataType: 
T_1884: (in 0x18 : byte)
  Class: Eq_1884
  DataType: 
  OrigDataType: 
T_1885: (in __shrd(0, SLICE(eax_66 *s 0, word32, 32), 0x18) : word32)
  Class: Eq_1885
  DataType: 
  OrigDataType: 
T_1886: (in __shrd : ptr32)
  Class: Eq_1886
  DataType: 
  OrigDataType: 
T_1887: (in 0 : int32)
  Class: Eq_1887
  DataType: 
  OrigDataType: 
T_1888: (in 0 : int32)
  Class: Eq_1888
  DataType: 
  OrigDataType: 
T_1889: (in eax_66 *s 0 : int64)
  Class: Eq_1889
  DataType: 
  OrigDataType: 
T_1890: (in SLICE(eax_66 *s 0, word32, 32) : word32)
  Class: Eq_1890
  DataType: 
  OrigDataType: 
T_1891: (in 0x18 : byte)
  Class: Eq_1891
  DataType: 
  OrigDataType: 
T_1892: (in __shrd(0, SLICE(eax_66 *s 0, word32, 32), 0x18) : word32)
  Class: Eq_1892
  DataType: 
  OrigDataType: 
T_1893: (in (word16) __shrd(0, SLICE(eax_66 *s 0, word32, 32), 0x18) : word16)
  Class: Eq_1893
  DataType: 
  OrigDataType: 
T_1894: (in SLICE((word16) __shrd(0, SLICE(eax_66 *s 0, word32, 32), 0x18), byte, 8) : byte)
  Class: Eq_1894
  DataType: 
  OrigDataType: 
T_1895: (in DPB(bx_18, SLICE((word16) __shrd(0, SLICE(eax_66 *s 0, word32, 32), 0x18), byte, 8), 8, 8) : word16)
  Class: Eq_1834
  DataType: 
  OrigDataType: 
T_1896: (in eax_103 : word32)
  Class: Eq_1896
  DataType: 
  OrigDataType: 
T_1897: (in __shrd : ptr32)
  Class: Eq_1897
  DataType: 
  OrigDataType: 
T_1898: (in 0 : int32)
  Class: Eq_1898
  DataType: 
  OrigDataType: 
T_1899: (in 0 : int32)
  Class: Eq_1899
  DataType: 
  OrigDataType: 
T_1900: (in eax_66 *s 0 : int64)
  Class: Eq_1900
  DataType: 
  OrigDataType: 
T_1901: (in SLICE(eax_66 *s 0, word32, 32) : word32)
  Class: Eq_1901
  DataType: 
  OrigDataType: 
T_1902: (in 0x18 : byte)
  Class: Eq_1902
  DataType: 
  OrigDataType: 
T_1903: (in __shrd(0, SLICE(eax_66 *s 0, word32, 32), 0x18) : word32)
  Class: Eq_1896
  DataType: 
  OrigDataType: 
T_1904: (in (word16) eax_103 : word16)
  Class: Eq_1904
  DataType: 
  OrigDataType: 
T_1905: (in 0x05ED : word16)
  Class: Eq_1905
  DataType: 
  OrigDataType: 
T_1906: (in Mem105[ds:0x05ED:word16] : word16)
  Class: Eq_1904
  DataType: 
  OrigDataType: 
T_1907: (in 0x00000010 : word32)
  Class: Eq_1907
  DataType: 
  OrigDataType: 
T_1908: (in eax_103 >>u 0x00000010 : word32)
  Class: Eq_1908
  DataType: 
  OrigDataType: 
T_1909: (in (byte) (eax_103 >>u 0x00000010) : byte)
  Class: Eq_1909
  DataType: 
  OrigDataType: 
T_1910: (in 0x05F1 : word16)
  Class: Eq_1910
  DataType: 
  OrigDataType: 
T_1911: (in Mem108[ds:0x05F1:byte] : byte)
  Class: Eq_1909
  DataType: 
  OrigDataType: 
T_1912: (in eax_113 : word32)
  Class: Eq_1912
  DataType: 
  OrigDataType: 
T_1913: (in __shrd : ptr32)
  Class: Eq_1913
  DataType: 
  OrigDataType: 
T_1914: (in 0 : int32)
  Class: Eq_1914
  DataType: 
  OrigDataType: 
T_1915: (in 0 : int32)
  Class: Eq_1915
  DataType: 
  OrigDataType: 
T_1916: (in eax_66 *s 0 : int64)
  Class: Eq_1916
  DataType: 
  OrigDataType: 
T_1917: (in SLICE(eax_66 *s 0, word32, 32) : word32)
  Class: Eq_1917
  DataType: 
  OrigDataType: 
T_1918: (in 0x18 : byte)
  Class: Eq_1918
  DataType: 
  OrigDataType: 
T_1919: (in __shrd(0, SLICE(eax_66 *s 0, word32, 32), 0x18) : word32)
  Class: Eq_1912
  DataType: 
  OrigDataType: 
T_1920: (in (word16) eax_113 : word16)
  Class: Eq_1920
  DataType: 
  OrigDataType: 
T_1921: (in 0x05F4 : word16)
  Class: Eq_1921
  DataType: 
  OrigDataType: 
T_1922: (in Mem115[ds:0x05F4:word16] : word16)
  Class: Eq_1920
  DataType: 
  OrigDataType: 
T_1923: (in 0x00000010 : word32)
  Class: Eq_1923
  DataType: 
  OrigDataType: 
T_1924: (in eax_113 >>u 0x00000010 : word32)
  Class: Eq_1924
  DataType: 
  OrigDataType: 
T_1925: (in (byte) (eax_113 >>u 0x00000010) : byte)
  Class: Eq_1925
  DataType: 
  OrigDataType: 
T_1926: (in 0x05F8 : word16)
  Class: Eq_1926
  DataType: 
  OrigDataType: 
T_1927: (in Mem119[ds:0x05F8:byte] : byte)
  Class: Eq_1925
  DataType: 
  OrigDataType: 
T_1928: (in 0x0100 : word16)
  Class: Eq_1860
  DataType: 
  OrigDataType: 
T_1929: (in ds : selector)
  Class: Eq_1929
  DataType: 
  OrigDataType: 
T_1930: (in ax_35 : word16)
  Class: Eq_1475
  DataType: 
  OrigDataType: 
T_1931: (in cs : selector)
  Class: Eq_1931
  DataType: 
  OrigDataType: 
T_1932: (in SLICE(cs, byte, 8) : byte)
  Class: Eq_1932
  DataType: 
  OrigDataType: 
T_1933: (in 0x10 : byte)
  Class: Eq_1933
  DataType: 
  OrigDataType: 
T_1934: (in SLICE(cs, byte, 8) + 0x10 : byte)
  Class: Eq_1934
  DataType: 
  OrigDataType: 
T_1935: (in DPB(cs, SLICE(cs, byte, 8) + 0x10, 8, 8) : word16)
  Class: Eq_1475
  DataType: 
  OrigDataType: 
T_1936: (in sp_116 : word16)
  Class: Eq_1936
  DataType: 
  OrigDataType: 
T_1937: (in fp : ptr16)
  Class: Eq_1937
  DataType: 
  OrigDataType: 
T_1938: (in 0x0014 : word16)
  Class: Eq_1938
  DataType: 
  OrigDataType: 
T_1939: (in fp - 0x0014 : word16)
  Class: Eq_1936
  DataType: 
  OrigDataType: 
T_1940: (in di_100 : word16)
  Class: Eq_1940
  DataType: 
  OrigDataType: 
T_1941: (in 0x0000 : word16)
  Class: Eq_1940
  DataType: 
  OrigDataType: 
T_1942: (in cx_117 : word16)
  Class: Eq_1942
  DataType: 
  OrigDataType: 
T_1943: (in 0x0100 : word16)
  Class: Eq_1942
  DataType: 
  OrigDataType: 
T_1944: (in cl_118 : byte)
  Class: Eq_1944
  DataType: 
  OrigDataType: 
T_1945: (in 0x00 : byte)
  Class: Eq_1944
  DataType: 
  OrigDataType: 
T_1946: (in bx_107 : word16)
  Class: Eq_1946
  DataType: 
  OrigDataType: 
T_1947: (in 0xFE77 : word16)
  Class: Eq_1946
  DataType: 
  OrigDataType: 
T_1948: (in si_102 : word16)
  Class: Eq_1948
  DataType: 
  OrigDataType: 
T_1949: (in 0x0B26 : word16)
  Class: Eq_1948
  DataType: 
  OrigDataType: 
T_1950: (in si_64 : word16)
  Class: Eq_1950
  DataType: 
  OrigDataType: 
T_1951: (in 0x0002 : word16)
  Class: Eq_1951
  DataType: 
  OrigDataType: 
T_1952: (in si_102 + 0x0002 : word16)
  Class: Eq_1950
  DataType: 
  OrigDataType: 
T_1953: (in ax_62 : word16)
  Class: Eq_1953
  DataType: 
  OrigDataType: 
T_1954: (in 0x0000 : word16)
  Class: Eq_1954
  DataType: 
  OrigDataType: 
T_1955: (in si_102 + 0x0000 : word16)
  Class: Eq_1955
  DataType: 
  OrigDataType: 
T_1956: (in Mem0[cs:si_102 + 0x0000:word16] : word16)
  Class: Eq_1953
  DataType: 
  OrigDataType: 
T_1957: (in bx_67 : word16)
  Class: Eq_1957
  DataType: 
  OrigDataType: 
T_1958: (in 0x007F : word16)
  Class: Eq_1958
  DataType: 
  OrigDataType: 
T_1959: (in si_64 + 0x007F : word16)
  Class: Eq_1959
  DataType: 
  OrigDataType: 
T_1960: (in Mem0[cs:si_64 + 0x007F:byte] : byte)
  Class: Eq_1960
  DataType: 
  OrigDataType: 
T_1961: (in DPB(bx_107, Mem0[cs:si_64 + 0x007F:byte], 8, 8) : word16)
  Class: Eq_1957
  DataType: 
  OrigDataType: 
T_1962: (in sp_70 : word16)
  Class: Eq_1962
  DataType: 
  OrigDataType: 
T_1963: (in 0x0002 : word16)
  Class: Eq_1963
  DataType: 
  OrigDataType: 
T_1964: (in sp_116 - 0x0002 : word16)
  Class: Eq_1962
  DataType: 
  OrigDataType: 
T_1965: (in ss : selector)
  Class: Eq_1965
  DataType: 
  OrigDataType: 
T_1966: (in 0x0000 : word16)
  Class: Eq_1966
  DataType: 
  OrigDataType: 
T_1967: (in sp_70 + 0x0000 : word16)
  Class: Eq_1967
  DataType: 
  OrigDataType: 
T_1968: (in Mem71[ss:sp_70 + 0x0000:word16] : word16)
  Class: Eq_1953
  DataType: 
  OrigDataType: 
T_1969: (in 0x0002 : word16)
  Class: Eq_1969
  DataType: 
  OrigDataType: 
T_1970: (in sp_70 - 0x0002 : word16)
  Class: Eq_1970
  DataType: 
  OrigDataType: 
T_1971: (in Mem74[ss:sp_70 - 0x0002:word16] : word16)
  Class: Eq_1942
  DataType: 
  OrigDataType: 
T_1972: (in 0x0004 : word16)
  Class: Eq_1972
  DataType: 
  OrigDataType: 
T_1973: (in sp_70 - 0x0004 : word16)
  Class: Eq_1973
  DataType: 
  OrigDataType: 
T_1974: (in Mem76[ss:sp_70 - 0x0004:word16] : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_1975: (in 0x8080 : word16)
  Class: Eq_1975
  DataType: 
  OrigDataType: 
T_1976: (in bx_67 + 0x8080 : word16)
  Class: Eq_1976
  DataType: 
  OrigDataType: 
T_1977: (in 0x0006 : word16)
  Class: Eq_1977
  DataType: 
  OrigDataType: 
T_1978: (in sp_70 - 0x0006 : word16)
  Class: Eq_1978
  DataType: 
  OrigDataType: 
T_1979: (in Mem78[ss:sp_70 - 0x0006:word16] : word16)
  Class: Eq_1976
  DataType: 
  OrigDataType: 
T_1980: (in 0x0008 : word16)
  Class: Eq_1980
  DataType: 
  OrigDataType: 
T_1981: (in sp_70 - 0x0008 : word16)
  Class: Eq_1981
  DataType: 
  OrigDataType: 
T_1982: (in sp_70 - 0x0008 : word16)
  Class: Eq_1982
  DataType: 
  OrigDataType: 
T_1983: (in Mem80[ss:sp_70 - 0x0008:word16] : word16)
  Class: Eq_1981
  DataType: 
  OrigDataType: 
T_1984: (in 0x000A : word16)
  Class: Eq_1984
  DataType: 
  OrigDataType: 
T_1985: (in sp_70 - 0x000A : word16)
  Class: Eq_1985
  DataType: 
  OrigDataType: 
T_1986: (in Mem82[ss:sp_70 - 0x000A:word16] : word16)
  Class: Eq_1946
  DataType: 
  OrigDataType: 
T_1987: (in 0x000C : word16)
  Class: Eq_1987
  DataType: 
  OrigDataType: 
T_1988: (in sp_70 - 0x000C : word16)
  Class: Eq_1988
  DataType: 
  OrigDataType: 
T_1989: (in Mem84[ss:sp_70 - 0x000C:word16] : word16)
  Class: Eq_1950
  DataType: 
  OrigDataType: 
T_1990: (in 0x000E : word16)
  Class: Eq_1990
  DataType: 
  OrigDataType: 
T_1991: (in sp_70 - 0x000E : word16)
  Class: Eq_1991
  DataType: 
  OrigDataType: 
T_1992: (in Mem86[ss:sp_70 - 0x000E:word16] : word16)
  Class: Eq_1940
  DataType: 
  OrigDataType: 
T_1993: (in bx_67 + 0x8080 : word16)
  Class: Eq_1993
  DataType: 
  OrigDataType: 
T_1994: (in 0x0010 : word16)
  Class: Eq_1994
  DataType: 
  OrigDataType: 
T_1995: (in sp_70 - 0x0010 : word16)
  Class: Eq_1995
  DataType: 
  OrigDataType: 
T_1996: (in Mem92[ss:sp_70 - 0x0010:word16] : word16)
  Class: Eq_1993
  DataType: 
  OrigDataType: 
T_1997: (in 0x0012 : word16)
  Class: Eq_1997
  DataType: 
  OrigDataType: 
T_1998: (in sp_70 - 0x0012 : word16)
  Class: Eq_1998
  DataType: 
  OrigDataType: 
T_1999: (in Mem94[ss:sp_70 - 0x0012:word16] : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_2000: (in 0x8080 : word16)
  Class: Eq_2000
  DataType: 
  OrigDataType: 
T_2001: (in 0x0014 : word16)
  Class: Eq_2001
  DataType: 
  OrigDataType: 
T_2002: (in sp_70 - 0x0014 : word16)
  Class: Eq_2002
  DataType: 
  OrigDataType: 
T_2003: (in Mem96[ss:sp_70 - 0x0014:word16] : word16)
  Class: Eq_2000
  DataType: 
  OrigDataType: 
T_2004: (in fn0C00_0477 : ptr32)
  Class: Eq_2004
  DataType: 
  OrigDataType: 
T_2005: (in signature of fn0C00_0477 : void)
  Class: Eq_2004
  DataType: 
  OrigDataType: 
T_2006: (in wArg00 : word16)
  Class: Eq_3
  DataType: 
  OrigDataType: 
T_2007: (in wArg02 : word16)
  Class: Eq_2007
  DataType: 
  OrigDataType: 
T_2008: (in wArg04 : word16)
  Class: Eq_2008
  DataType: 
  OrigDataType: 
T_2009: (in wArg06 : word16)
  Class: Eq_2009
  DataType: 
  OrigDataType: 
T_2010: (in DPB(ax_62, cl_118, 0, 8) : word16)
  Class: Eq_1471
  DataType: 
  OrigDataType: 
T_2011: (in 0x0001 : word16)
  Class: Eq_1466
  DataType: 
  OrigDataType: 
T_2012: (in wArg00 : word16)
  Class: Eq_2007
  DataType: 
  OrigDataType: 
T_2013: (in wArg02 : word16)
  Class: Eq_2008
  DataType: 
  OrigDataType: 
T_2014: (in wArg04 : word16)
  Class: Eq_2009
  DataType: 
  OrigDataType: 
T_2015: (in fn0C00_0477(DPB(ax_62, cl_118, 0, 8), 0x0001, ax_35, ax, wArg00, wArg02, wArg04) : void)
  Class: Eq_2015
  DataType: 
  OrigDataType: 
T_2016: (in cx_113 : word16)
  Class: Eq_2016
  DataType: 
  OrigDataType: 
T_2017: (in 0x0008 : word16)
  Class: Eq_2017
  DataType: 
  OrigDataType: 
T_2018: (in sp_70 - 0x0008 : word16)
  Class: Eq_2018
  DataType: 
  OrigDataType: 
T_2019: (in Mem96[ss:sp_70 - 0x0008:word16] : word16)
  Class: Eq_2016
  DataType: 
  OrigDataType: 
T_2020: (in sp_70 - 0x0014 : word16)
  Class: Eq_2020
  DataType: 
  OrigDataType: 
T_2021: (in Mem96[ss:sp_70 - 0x0014:word16] : word16)
  Class: Eq_1940
  DataType: 
  OrigDataType: 
T_2022: (in 0x0012 : word16)
  Class: Eq_2022
  DataType: 
  OrigDataType: 
T_2023: (in sp_70 - 0x0012 : word16)
  Class: Eq_2023
  DataType: 
  OrigDataType: 
T_2024: (in Mem96[ss:sp_70 - 0x0012:word16] : word16)
  Class: Eq_1948
  DataType: 
  OrigDataType: 
T_2025: (in 0x0010 : word16)
  Class: Eq_2025
  DataType: 
  OrigDataType: 
T_2026: (in sp_70 - 0x0010 : word16)
  Class: Eq_2026
  DataType: 
  OrigDataType: 
T_2027: (in Mem96[ss:sp_70 - 0x0010:word16] : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_2028: (in 0x000C : word16)
  Class: Eq_2028
  DataType: 
  OrigDataType: 
T_2029: (in sp_70 - 0x000C : word16)
  Class: Eq_2029
  DataType: 
  OrigDataType: 
T_2030: (in Mem96[ss:sp_70 - 0x000C:word16] : word16)
  Class: Eq_1946
  DataType: 
  OrigDataType: 
T_2031: (in 0x0004 : word16)
  Class: Eq_2031
  DataType: 
  OrigDataType: 
T_2032: (in sp_70 - 0x0004 : word16)
  Class: Eq_1936
  DataType: 
  OrigDataType: 
T_2033: (in 0x0001 : word16)
  Class: Eq_2033
  DataType: 
  OrigDataType: 
T_2034: (in cx_113 - 0x0001 : word16)
  Class: Eq_1942
  DataType: 
  OrigDataType: 
T_2035: (in cx_113 - 0x0001 : word16)
  Class: Eq_2035
  DataType: 
  OrigDataType: 
T_2036: (in (byte) (cx_113 - 0x0001) : byte)
  Class: Eq_1944
  DataType: 
  OrigDataType: 
T_2037: (in ch_119 : byte)
  Class: Eq_2037
  DataType: 
  OrigDataType: 
T_2038: (in cx_113 - 0x0001 : word16)
  Class: Eq_2038
  DataType: 
  OrigDataType: 
T_2039: (in SLICE(cx_113 - 0x0001, byte, 8) : byte)
  Class: Eq_2037
  DataType: 
  OrigDataType: 
T_2040: (in 0x0001 : word16)
  Class: Eq_2016
  DataType: 
  OrigDataType: 
T_2041: (in cx_113 != 0x0001 : bool)
  Class: Eq_2041
  DataType: 
  OrigDataType: 
T_2042: (in 0x0006 : word16)
  Class: Eq_2042
  DataType: 
  OrigDataType: 
T_2043: (in sp_70 - 0x0006 : word16)
  Class: Eq_2043
  DataType: 
  OrigDataType: 
T_2044: (in Mem121[ss:sp_70 - 0x0006:word16] : word16)
  Class: Eq_1475
  DataType: 
  OrigDataType: 
T_2045: (in ds_122 : selector)
  Class: Eq_2045
  DataType: 
  OrigDataType: 
T_2046: (in sp_70 - 0x0006 : word16)
  Class: Eq_2046
  DataType: 
  OrigDataType: 
T_2047: (in Mem121[ss:sp_70 - 0x0006:selector] : selector)
  Class: Eq_2045
  DataType: 
  OrigDataType: 
T_2048: (in ax_127 : word16)
  Class: Eq_2048
  DataType: 
  OrigDataType: 
T_2049: (in SLICE(cs, byte, 8) : byte)
  Class: Eq_2049
  DataType: 
  OrigDataType: 
T_2050: (in 0x40 : byte)
  Class: Eq_2050
  DataType: 
  OrigDataType: 
T_2051: (in SLICE(cs, byte, 8) + 0x40 : byte)
  Class: Eq_2051
  DataType: 
  OrigDataType: 
T_2052: (in DPB(cs, SLICE(cs, byte, 8) + 0x40, 8, 8) : word16)
  Class: Eq_2048
  DataType: 
  OrigDataType: 
T_2053: (in si_130 : word16)
  Class: Eq_2053
  DataType: 
  OrigDataType: 
T_2054: (in 0x4040 : word16)
  Class: Eq_2053
  DataType: 
  OrigDataType: 
T_2055: (in 0x0000 : word16)
  Class: Eq_2055
  DataType: 
  OrigDataType: 
T_2056: (in si_130 + 0x0000 : word16)
  Class: Eq_2056
  DataType: 
  OrigDataType: 
T_2057: (in Mem121[ds_122:si_130 + 0x0000:byte] : byte)
  Class: Eq_2057
  DataType: 
  OrigDataType: 
T_2058: (in 0x0000 : word16)
  Class: Eq_2058
  DataType: 
  OrigDataType: 
T_2059: (in di_100 + 0x0000 : word16)
  Class: Eq_2059
  DataType: 
  OrigDataType: 
T_2060: (in Mem159[ax_127:di_100 + 0x0000:byte] : byte)
  Class: Eq_2057
  DataType: 
  OrigDataType: 
T_2061: (in di_161 : word16)
  Class: Eq_2061
  DataType: 
  OrigDataType: 
T_2062: (in 0x0001 : word16)
  Class: Eq_2062
  DataType: 
  OrigDataType: 
T_2063: (in di_100 + 0x0001 : word16)
  Class: Eq_2061
  DataType: 
  OrigDataType: 
T_2064: (in (byte) bp : byte)
  Class: Eq_2064
  DataType: 
  OrigDataType: 
T_2065: (in 0x0000 : word16)
  Class: Eq_2065
  DataType: 
  OrigDataType: 
T_2066: (in di_161 + 0x0000 : word16)
  Class: Eq_2066
  DataType: 
  OrigDataType: 
T_2067: (in Mem162[ax_127:di_161 + 0x0000:byte] : byte)
  Class: Eq_2064
  DataType: 
  OrigDataType: 
T_2068: (in ch_164 : byte)
  Class: Eq_2068
  DataType: 
  OrigDataType: 
T_2069: (in 0x01 : byte)
  Class: Eq_2069
  DataType: 
  OrigDataType: 
T_2070: (in ch_119 - 0x01 : byte)
  Class: Eq_2068
  DataType: 
  OrigDataType: 
T_2071: (in 0x0001 : word16)
  Class: Eq_2071
  DataType: 
  OrigDataType: 
T_2072: (in si_130 + 0x0001 : word16)
  Class: Eq_2053
  DataType: 
  OrigDataType: 
T_2073: (in 0x0001 : word16)
  Class: Eq_2073
  DataType: 
  OrigDataType: 
T_2074: (in di_161 + 0x0001 : word16)
  Class: Eq_1940
  DataType: 
  OrigDataType: 
T_2075: (in DPB(cx_117, ch_164, 8, 8) : word16)
  Class: Eq_1942
  DataType: 
  OrigDataType: 
T_2076: (in 0x00 : byte)
  Class: Eq_2068
  DataType: 
  OrigDataType: 
T_2077: (in ch_164 == 0x00 : bool)
  Class: Eq_2077
  DataType: 
  OrigDataType: 
T_2078: (in bx_146 : word16)
  Class: Eq_26
  DataType: 
  OrigDataType: 
T_2079: (in 0x0000 : word16)
  Class: Eq_26
  DataType: 
  OrigDataType: 
T_2080: (in bx_146 < 0x0000 : bool)
  Class: Eq_2080
  DataType: 
  OrigDataType: 
T_2081: (in al_226 : byte)
  Class: Eq_2081
  DataType: 
  OrigDataType: 
T_2082: (in dl_227 : byte)
  Class: Eq_2082
  DataType: 
  OrigDataType: 
T_2083: (in fn0C00_037B : ptr32)
  Class: Eq_1051
  DataType: 
  OrigDataType: 
T_2084: (in out al_226 : ptr16)
  Class: Eq_1054
  DataType: 
  OrigDataType: 
T_2085: (in out dl_227 : ptr16)
  Class: Eq_1055
  DataType: 
  OrigDataType: 
T_2086: (in fn0C00_037B(bx_146, out al_226, out dl_227) : word16)
  Class: Eq_2
  DataType: 
  OrigDataType: 
T_2087: (in 0x0080 : word16)
  Class: Eq_2087
  DataType: 
  OrigDataType: 
T_2088: (in si_130 + 0x0080 : word16)
  Class: Eq_2053
  DataType: 
  OrigDataType: 
T_2089: (in 0x01 : byte)
  Class: Eq_2089
  DataType: 
  OrigDataType: 
T_2090: (in cl_118 & 0x01 : byte)
  Class: Eq_2090
  DataType: 
  OrigDataType: 
T_2091: (in 0x00 : byte)
  Class: Eq_2090
  DataType: 
  OrigDataType: 
T_2092: (in (cl_118 & 0x01) == 0x00 : bool)
  Class: Eq_2092
  DataType: 
  OrigDataType: 
T_2093: (in 0x01 : byte)
  Class: Eq_2093
  DataType: 
  OrigDataType: 
T_2094: (in ch_164 - 0x01 : byte)
  Class: Eq_2037
  DataType: 
  OrigDataType: 
T_2095: (in ch_164 - 0x01 : byte)
  Class: Eq_2095
  DataType: 
  OrigDataType: 
T_2096: (in DPB(cx_117, ch_164 - 0x01, 8, 8) : word16)
  Class: Eq_1942
  DataType: 
  OrigDataType: 
T_2097: (in 0x01 : byte)
  Class: Eq_2068
  DataType: 
  OrigDataType: 
T_2098: (in ch_164 != 0x01 : bool)
  Class: Eq_2098
  DataType: 
  OrigDataType: 
T_2099: (in al_140 : byte)
  Class: Eq_2099
  DataType: 
  OrigDataType: 
T_2100: (in 0x80 : byte)
  Class: Eq_2100
  DataType: 
  OrigDataType: 
T_2101: (in cl_118 - 0x80 : byte)
  Class: Eq_2099
  DataType: 
  OrigDataType: 
T_2102: (in al_144 : byte)
  Class: Eq_2102
  DataType: 
  OrigDataType: 
T_2103: (in 0x80 : byte)
  Class: Eq_2103
  DataType: 
  OrigDataType: 
T_2104: (in ch_119 - 0x80 : byte)
  Class: Eq_2102
  DataType: 
  OrigDataType: 
T_2105: (in al_140 *s al_140 : int16)
  Class: Eq_2105
  DataType: 
  OrigDataType: 
T_2106: (in al_144 *s al_144 : int16)
  Class: Eq_2106
  DataType: 
  OrigDataType: 
T_2107: (in al_140 *s al_140 + al_144 *s al_144 : word16)
  Class: Eq_26
  DataType: 
  OrigDataType: 
T_2108: (in 0x0000 : word16)
  Class: Eq_26
  DataType: 
  OrigDataType: 
T_2109: (in bx_146 == 0x0000 : bool)
  Class: Eq_2109
  DataType: 
  OrigDataType: 
T_2110: (in 0x0001 : word16)
  Class: Eq_2110
  DataType: 
  OrigDataType: 
T_2111: (in cx_117 - 0x0001 : word16)
  Class: Eq_1942
  DataType: 
  OrigDataType: 
T_2112: (in (byte) cx_117 : byte)
  Class: Eq_1944
  DataType: 
  OrigDataType: 
T_2113: (in SLICE(cx_117, byte, 8) : byte)
  Class: Eq_2037
  DataType: 
  OrigDataType: 
T_2114: (in 0x0000 : word16)
  Class: Eq_1942
  DataType: 
  OrigDataType: 
T_2115: (in cx_117 != 0x0000 : bool)
  Class: Eq_2115
  DataType: 
  OrigDataType: 
T_2116: (in 0x0080 : word16)
  Class: Eq_2116
  DataType: 
  OrigDataType: 
T_2117: (in si_130 - 0x0080 : word16)
  Class: Eq_2053
  DataType: 
  OrigDataType: 
T_2118: (in ax_182 : word16)
  Class: Eq_2118
  DataType: 
  OrigDataType: 
T_2119: (in SLICE(cs, byte, 8) : byte)
  Class: Eq_2119
  DataType: 
  OrigDataType: 
T_2120: (in 0x50 : byte)
  Class: Eq_2120
  DataType: 
  OrigDataType: 
T_2121: (in SLICE(cs, byte, 8) + 0x50 : byte)
  Class: Eq_2121
  DataType: 
  OrigDataType: 
T_2122: (in DPB(cs, SLICE(cs, byte, 8) + 0x50, 8, 8) : word16)
  Class: Eq_2118
  DataType: 
  OrigDataType: 
T_2123: (in cx_189 : word16)
  Class: Eq_2123
  DataType: 
  OrigDataType: 
T_2124: (in 0x8000 : word16)
  Class: Eq_2123
  DataType: 
  OrigDataType: 
T_2125: (in 0x0002 : word16)
  Class: Eq_2125
  DataType: 
  OrigDataType: 
T_2126: (in sp_70 - 0x0002 : word16)
  Class: Eq_2126
  DataType: 
  OrigDataType: 
T_2127: (in Mem162[ss:sp_70 - 0x0002:selector] : selector)
  Class: Eq_2127
  DataType: 
  OrigDataType: 
T_2128: (in 0x0000 : word16)
  Class: Eq_2128
  DataType: 
  OrigDataType: 
T_2129: (in 0x0000 : word16)
  Class: Eq_2129
  DataType: 
  OrigDataType: 
T_2130: (in di_100 + 0x0000 : word16)
  Class: Eq_2130
  DataType: 
  OrigDataType: 
T_2131: (in Mem196[ax_182:di_100 + 0x0000:word16] : word16)
  Class: Eq_2128
  DataType: 
  OrigDataType: 
T_2132: (in 0x0002 : word16)
  Class: Eq_2132
  DataType: 
  OrigDataType: 
T_2133: (in di_100 + 0x0002 : word16)
  Class: Eq_1940
  DataType: 
  OrigDataType: 
T_2134: (in 0x0001 : word16)
  Class: Eq_2134
  DataType: 
  OrigDataType: 
T_2135: (in cx_189 - 0x0001 : word16)
  Class: Eq_2123
  DataType: 
  OrigDataType: 
T_2136: (in 0x0000 : word16)
  Class: Eq_2123
  DataType: 
  OrigDataType: 
T_2137: (in cx_189 == 0x0000 : bool)
  Class: Eq_2137
  DataType: 
  OrigDataType: 
T_2138: (in ah_33 : byte)
  Class: Eq_2138
  DataType: 
  OrigDataType: 
T_2139: (in cs : selector)
  Class: Eq_2139
  DataType: 
  OrigDataType: 
T_2140: (in SLICE(cs, byte, 8) : byte)
  Class: Eq_2138
  DataType: 
  OrigDataType: 
T_2141: (in ax_35 : word16)
  Class: Eq_2141
  DataType: 
  OrigDataType: 
T_2142: (in 0x30 : byte)
  Class: Eq_2142
  DataType: 
  OrigDataType: 
T_2143: (in ah_33 + 0x30 : byte)
  Class: Eq_2143
  DataType: 
  OrigDataType: 
T_2144: (in DPB(cs, ah_33 + 0x30, 8, 8) : word16)
  Class: Eq_2141
  DataType: 
  OrigDataType: 
T_2145: (in ax_38 : word16)
  Class: Eq_2145
  DataType: 
  OrigDataType: 
T_2146: (in 0x50 : byte)
  Class: Eq_2146
  DataType: 
  OrigDataType: 
T_2147: (in ah_33 + 0x50 : byte)
  Class: Eq_2147
  DataType: 
  OrigDataType: 
T_2148: (in DPB(cs, ah_33 + 0x50, 8, 8) : selector)
  Class: Eq_2145
  DataType: 
  OrigDataType: 
T_2149: (in di_113 : word16)
  Class: Eq_2149
  DataType: 
  OrigDataType: 
T_2150: (in 0x0000 : word16)
  Class: Eq_2149
  DataType: 
  OrigDataType: 
T_2151: (in cx_41 : word16)
  Class: Eq_2151
  DataType: 
  OrigDataType: 
T_2152: (in 0x0300 : word16)
  Class: Eq_2151
  DataType: 
  OrigDataType: 
T_2153: (in bx_100 : word16)
  Class: Eq_2153
  DataType: 
  OrigDataType: 
T_2154: (in 0x7FFF : word16)
  Class: Eq_2153
  DataType: 
  OrigDataType: 
T_2155: (in bp_106 : word16)
  Class: Eq_2155
  DataType: 
  OrigDataType: 
T_2156: (in 0x0001 : word16)
  Class: Eq_2155
  DataType: 
  OrigDataType: 
T_2157: (in 0x0000 : word16)
  Class: Eq_2157
  DataType: 
  OrigDataType: 
T_2158: (in 0x0000 : word16)
  Class: Eq_2158
  DataType: 
  OrigDataType: 
T_2159: (in di_113 + 0x0000 : word16)
  Class: Eq_2159
  DataType: 
  OrigDataType: 
T_2160: (in Mem50[ax_38:di_113 + 0x0000:word16] : word16)
  Class: Eq_2157
  DataType: 
  OrigDataType: 
T_2161: (in 0x0002 : word16)
  Class: Eq_2161
  DataType: 
  OrigDataType: 
T_2162: (in di_113 + 0x0002 : word16)
  Class: Eq_2149
  DataType: 
  OrigDataType: 
T_2163: (in 0x0001 : word16)
  Class: Eq_2163
  DataType: 
  OrigDataType: 
T_2164: (in cx_41 - 0x0001 : word16)
  Class: Eq_2151
  DataType: 
  OrigDataType: 
T_2165: (in 0x0000 : word16)
  Class: Eq_2151
  DataType: 
  OrigDataType: 
T_2166: (in cx_41 == 0x0000 : bool)
  Class: Eq_2166
  DataType: 
  OrigDataType: 
T_2167: (in cx_86 : word16)
  Class: Eq_2167
  DataType: 
  OrigDataType: 
T_2168: (in 0x0080 : word16)
  Class: Eq_2167
  DataType: 
  OrigDataType: 
T_2169: (in ch_87 : byte)
  Class: Eq_2169
  DataType: 
  OrigDataType: 
T_2170: (in 0x00 : byte)
  Class: Eq_2169
  DataType: 
  OrigDataType: 
T_2171: (in bx_78 : word16)
  Class: Eq_2171
  DataType: 
  OrigDataType: 
T_2172: (in 0xFF00 : word16)
  Class: Eq_2172
  DataType: 
  OrigDataType: 
T_2173: (in bx_78 - 0xFF00 : word16)
  Class: Eq_2171
  DataType: 
  OrigDataType: 
T_2174: (in si_195 : word16)
  Class: Eq_2171
  DataType: 
  OrigDataType: 
T_2175: (in bx_70 : word16)
  Class: Eq_2153
  DataType: 
  OrigDataType: 
T_2176: (in si_103 : word16)
  Class: Eq_2176
  DataType: 
  OrigDataType: 
T_2177: (in 0x0000 : word16)
  Class: Eq_2176
  DataType: 
  OrigDataType: 
T_2178: (in 0x0001 : word16)
  Class: Eq_2178
  DataType: 
  OrigDataType: 
T_2179: (in bp_106 - 0x0001 : word16)
  Class: Eq_2155
  DataType: 
  OrigDataType: 
T_2180: (in 0x0000 : word16)
  Class: Eq_2155
  DataType: 
  OrigDataType: 
T_2181: (in bp_106 != 0x0000 : bool)
  Class: Eq_2181
  DataType: 
  OrigDataType: 
T_2182: (in 0x0000 : word16)
  Class: Eq_2182
  DataType: 
  OrigDataType: 
T_2183: (in si_195 + 0x0000 : word16)
  Class: Eq_2183
  DataType: 
  OrigDataType: 
T_2184: (in Mem72[ax_35:si_195 + 0x0000:word16] : word16)
  Class: Eq_2184
  DataType: 
  OrigDataType: 
T_2185: (in 0x0000 : word16)
  Class: Eq_2185
  DataType: 
  OrigDataType: 
T_2186: (in di_113 + 0x0000 : word16)
  Class: Eq_2186
  DataType: 
  OrigDataType: 
T_2187: (in Mem94[ax_38:di_113 + 0x0000:word16] : word16)
  Class: Eq_2184
  DataType: 
  OrigDataType: 
T_2188: (in 0x0001 : word16)
  Class: Eq_2188
  DataType: 
  OrigDataType: 
T_2189: (in cx_86 - 0x0001 : word16)
  Class: Eq_2167
  DataType: 
  OrigDataType: 
T_2190: (in 0x0002 : word16)
  Class: Eq_2190
  DataType: 
  OrigDataType: 
T_2191: (in si_195 + 0x0002 : word16)
  Class: Eq_2171
  DataType: 
  OrigDataType: 
T_2192: (in 0x0002 : word16)
  Class: Eq_2192
  DataType: 
  OrigDataType: 
T_2193: (in di_113 + 0x0002 : word16)
  Class: Eq_2149
  DataType: 
  OrigDataType: 
T_2194: (in SLICE(cx_86, byte, 8) : byte)
  Class: Eq_2169
  DataType: 
  OrigDataType: 
T_2195: (in 0x0000 : word16)
  Class: Eq_2167
  DataType: 
  OrigDataType: 
T_2196: (in cx_86 == 0x0000 : bool)
  Class: Eq_2196
  DataType: 
  OrigDataType: 
T_2197: (in 0x0000 : word16)
  Class: Eq_2197
  DataType: 
  OrigDataType: 
T_2198: (in ss : selector)
  Class: Eq_2198
  DataType: 
  OrigDataType: 
T_2199: (in fp : ptr16)
  Class: Eq_2199
  DataType: 
  OrigDataType: 
T_2200: (in 0x0016 : word16)
  Class: Eq_2200
  DataType: 
  OrigDataType: 
T_2201: (in fp - 0x0016 : word16)
  Class: Eq_2201
  DataType: 
  OrigDataType: 
T_2202: (in Mem72[ss:fp - 0x0016:word16] : word16)
  Class: Eq_2197
  DataType: 
  OrigDataType: 
T_2203: (in 0x0005 : word16)
  Class: Eq_2203
  DataType: 
  OrigDataType: 
T_2204: (in bx_100 >> 0x0005 : word16)
  Class: Eq_2204
  DataType: 
  OrigDataType: 
T_2205: (in bx_100 - (bx_100 >> 0x0005) : word16)
  Class: Eq_2153
  DataType: 
  OrigDataType: 
T_2206: (in 0x0002 : word16)
  Class: Eq_2206
  DataType: 
  OrigDataType: 
T_2207: (in bx_70 * 0x0002 : word16)
  Class: Eq_2207
  DataType: 
  OrigDataType: 
T_2208: (in 0x00 : byte)
  Class: Eq_2208
  DataType: 
  OrigDataType: 
T_2209: (in DPB(bx_70 * 0x0002, 0x00, 0, 8) : word16)
  Class: Eq_2171
  DataType: 
  OrigDataType: 
T_2210: (in 0xFEFF : word16)
  Class: Eq_2171
  DataType: 
  OrigDataType: 
T_2211: (in bx_78 <u 0xFEFF : bool)
  Class: Eq_2211
  DataType: 
  OrigDataType: 
T_2212: (in cx_110 : word16)
  Class: Eq_2212
  DataType: 
  OrigDataType: 
T_2213: (in 0x01 : byte)
  Class: Eq_2213
  DataType: 
  OrigDataType: 
T_2214: (in ch_87 + 0x01 : byte)
  Class: Eq_2214
  DataType: 
  OrigDataType: 
T_2215: (in DPB(cx_86, ch_87 + 0x01, 8, 8) : word16)
  Class: Eq_2212
  DataType: 
  OrigDataType: 
T_2216: (in cx_121 : word16)
  Class: Eq_2216
  DataType: 
  OrigDataType: 
T_2217: (in 0xF800 : word16)
  Class: Eq_2217
  DataType: 
  OrigDataType: 
T_2218: (in 0xF800 - di_113 : word16)
  Class: Eq_2216
  DataType: 
  OrigDataType: 
T_2219: (in 0x0000 : word16)
  Class: Eq_2216
  DataType: 
  OrigDataType: 
T_2220: (in cx_121 <u 0x0000 : bool)
  Class: Eq_2220
  DataType: 
  OrigDataType: 
T_2221: (in 0xC0C0 : word16)
  Class: Eq_2221
  DataType: 
  OrigDataType: 
T_2222: (in 0x0000 : word16)
  Class: Eq_2222
  DataType: 
  OrigDataType: 
T_2223: (in di_113 + 0x0000 : word16)
  Class: Eq_2223
  DataType: 
  OrigDataType: 
T_2224: (in Mem116[ax_38:di_113 + 0x0000:word16] : word16)
  Class: Eq_2221
  DataType: 
  OrigDataType: 
T_2225: (in 0x0002 : word16)
  Class: Eq_2225
  DataType: 
  OrigDataType: 
T_2226: (in di_113 + 0x0002 : word16)
  Class: Eq_2149
  DataType: 
  OrigDataType: 
T_2227: (in 0x0001 : word16)
  Class: Eq_2227
  DataType: 
  OrigDataType: 
T_2228: (in cx_110 - 0x0001 : word16)
  Class: Eq_2212
  DataType: 
  OrigDataType: 
T_2229: (in 0x0000 : word16)
  Class: Eq_2212
  DataType: 
  OrigDataType: 
T_2230: (in cx_110 == 0x0000 : bool)
  Class: Eq_2230
  DataType: 
  OrigDataType: 
T_2231: (in 0x0016 : word16)
  Class: Eq_2231
  DataType: 
  OrigDataType: 
T_2232: (in fp - 0x0016 : word16)
  Class: Eq_2232
  DataType: 
  OrigDataType: 
T_2233: (in Mem128[ss:fp - 0x0016:word16] : word16)
  Class: Eq_2145
  DataType: 
  OrigDataType: 
T_2234: (in ah_132 : byte)
  Class: Eq_2234
  DataType: 
  OrigDataType: 
T_2235: (in SLICE(cs, byte, 8) : byte)
  Class: Eq_2234
  DataType: 
  OrigDataType: 
T_2236: (in ax_134 : word16)
  Class: Eq_2236
  DataType: 
  OrigDataType: 
T_2237: (in 0x10 : byte)
  Class: Eq_2237
  DataType: 
  OrigDataType: 
T_2238: (in ah_132 + 0x10 : byte)
  Class: Eq_2238
  DataType: 
  OrigDataType: 
T_2239: (in DPB(cs, ah_132 + 0x10, 8, 8) : word16)
  Class: Eq_2236
  DataType: 
  OrigDataType: 
T_2240: (in ax_137 : word16)
  Class: Eq_2240
  DataType: 
  OrigDataType: 
T_2241: (in 0x40 : byte)
  Class: Eq_2241
  DataType: 
  OrigDataType: 
T_2242: (in ah_132 + 0x40 : byte)
  Class: Eq_2242
  DataType: 
  OrigDataType: 
T_2243: (in DPB(cs, ah_132 + 0x40, 8, 8) : selector)
  Class: Eq_2240
  DataType: 
  OrigDataType: 
T_2244: (in bx_139 : word16)
  Class: Eq_2244
  DataType: 
  OrigDataType: 
T_2245: (in 0x0000 : word16)
  Class: Eq_2244
  DataType: 
  OrigDataType: 
T_2246: (in di_143 : word16)
  Class: Eq_2246
  DataType: 
  OrigDataType: 
T_2247: (in 0xFFFE : word16)
  Class: Eq_2246
  DataType: 
  OrigDataType: 
T_2248: (in cx_183 : word16)
  Class: Eq_2248
  DataType: 
  OrigDataType: 
T_2249: (in 0x0001 : word16)
  Class: Eq_2249
  DataType: 
  OrigDataType: 
T_2250: (in cx_121 >>u 0x0001 : word16)
  Class: Eq_2248
  DataType: 
  OrigDataType: 
T_2251: (in 0x0000 : word16)
  Class: Eq_2251
  DataType: 
  OrigDataType: 
T_2252: (in 0x0000 : word16)
  Class: Eq_2252
  DataType: 
  OrigDataType: 
T_2253: (in di_113 + 0x0000 : word16)
  Class: Eq_2253
  DataType: 
  OrigDataType: 
T_2254: (in Mem191[ax_38:di_113 + 0x0000:word16] : word16)
  Class: Eq_2251
  DataType: 
  OrigDataType: 
T_2255: (in 0x0002 : word16)
  Class: Eq_2255
  DataType: 
  OrigDataType: 
T_2256: (in di_113 + 0x0002 : word16)
  Class: Eq_2149
  DataType: 
  OrigDataType: 
T_2257: (in 0x0001 : word16)
  Class: Eq_2257
  DataType: 
  OrigDataType: 
T_2258: (in cx_183 - 0x0001 : word16)
  Class: Eq_2248
  DataType: 
  OrigDataType: 
T_2259: (in 0x0000 : word16)
  Class: Eq_2248
  DataType: 
  OrigDataType: 
T_2260: (in cx_183 == 0x0000 : bool)
  Class: Eq_2260
  DataType: 
  OrigDataType: 
T_2261: (in 0x0000 : selector)
  Class: Eq_2261
  DataType: 
  OrigDataType: 
T_2262: (in 0x0000 : word16)
  Class: Eq_2262
  DataType: 
  OrigDataType: 
T_2263: (in si_103 + 0x0000 : word16)
  Class: Eq_2263
  DataType: 
  OrigDataType: 
T_2264: (in Mem128[0x0000:si_103 + 0x0000:word16] : word16)
  Class: Eq_2264
  DataType: 
  OrigDataType: 
T_2265: (in 0x0000 : word16)
  Class: Eq_2265
  DataType: 
  OrigDataType: 
T_2266: (in di_143 + 0x0000 : word16)
  Class: Eq_2266
  DataType: 
  OrigDataType: 
T_2267: (in Mem148[ax_134:di_143 + 0x0000:word16] : word16)
  Class: Eq_2264
  DataType: 
  OrigDataType: 
T_2268: (in esi_151 : word32)
  Class: Eq_2268
  DataType: 
  OrigDataType: 
T_2269: (in 0x0000 : word16)
  Class: Eq_2269
  DataType: 
  OrigDataType: 
T_2270: (in bx_139 + 0x0000 : word16)
  Class: Eq_2270
  DataType: 
  OrigDataType: 
T_2271: (in Mem148[ax_137:bx_139 + 0x0000:word32] : word32)
  Class: Eq_2268
  DataType: 
  OrigDataType: 
T_2272: (in si_152 : word16)
  Class: Eq_2272
  DataType: 
  OrigDataType: 
T_2273: (in (word16) esi_151 : word16)
  Class: Eq_2272
  DataType: 
  OrigDataType: 
T_2274: (in di_150 : word16)
  Class: Eq_2274
  DataType: 
  OrigDataType: 
T_2275: (in 0x0002 : word16)
  Class: Eq_2275
  DataType: 
  OrigDataType: 
T_2276: (in di_143 + 0x0002 : word16)
  Class: Eq_2274
  DataType: 
  OrigDataType: 
T_2277: (in 0x0000 : word16)
  Class: Eq_2277
  DataType: 
  OrigDataType: 
T_2278: (in si_152 + 0x0000 : word16)
  Class: Eq_2278
  DataType: 
  OrigDataType: 
T_2279: (in Mem148[0x0000:si_152 + 0x0000:word16] : word16)
  Class: Eq_2279
  DataType: 
  OrigDataType: 
T_2280: (in 0x0000 : word16)
  Class: Eq_2280
  DataType: 
  OrigDataType: 
T_2281: (in di_150 + 0x0000 : word16)
  Class: Eq_2281
  DataType: 
  OrigDataType: 
T_2282: (in Mem154[ax_134:di_150 + 0x0000:word16] : word16)
  Class: Eq_2279
  DataType: 
  OrigDataType: 
T_2283: (in 0x0002 : word16)
  Class: Eq_2283
  DataType: 
  OrigDataType: 
T_2284: (in di_150 + 0x0002 : word16)
  Class: Eq_2246
  DataType: 
  OrigDataType: 
T_2285: (in 0x0002 : word16)
  Class: Eq_2285
  DataType: 
  OrigDataType: 
T_2286: (in si_152 + 0x0002 : word16)
  Class: Eq_2286
  DataType: 
  OrigDataType: 
T_2287: (in DPB(esi_151, si_152 + 0x0002, 0, 16) : word32)
  Class: Eq_2287
  DataType: 
  OrigDataType: 
T_2288: (in 0x00000010 : word32)
  Class: Eq_2288
  DataType: 
  OrigDataType: 
T_2289: (in DPB(esi_151, si_152 + 0x0002, 0, 16) >>u 0x00000010 : word32)
  Class: Eq_2289
  DataType: 
  OrigDataType: 
T_2290: (in (word16) (DPB(esi_151, si_152 + 0x0002, 0, 16) >>u 0x00000010) : word16)
  Class: Eq_2176
  DataType: 
  OrigDataType: 
T_2291: (in 0x0004 : word16)
  Class: Eq_2291
  DataType: 
  OrigDataType: 
T_2292: (in bx_139 + 0x0004 : word16)
  Class: Eq_2244
  DataType: 
  OrigDataType: 
T_2293: (in 0x0000 : word16)
  Class: Eq_2244
  DataType: 
  OrigDataType: 
T_2294: (in bx_139 != 0x0000 : bool)
  Class: Eq_2294
  DataType: 
  OrigDataType: 
T_2295: (in cs : selector)
  Class: Eq_2295
  DataType: 
  OrigDataType: 
T_2296: (in 0x07CD : word16)
  Class: Eq_2296
  DataType: 
  OrigDataType: 
T_2297: (in SEQ(cs, 0x07CD) : ptr32)
  Class: Eq_2297
  DataType: 
  OrigDataType: 
T_2298: (in true : bool)
  Class: Eq_2298
  DataType: 
  OrigDataType: 
T_2299: (in 0x07CD : word16)
  Class: Eq_2299
  DataType: 
  OrigDataType: 
T_2300: (in SEQ(cs, 0x07CD) : ptr32)
  Class: Eq_2300
  DataType: 
  OrigDataType: 
T_2301: (in 0x07CD : word16)
  Class: Eq_2301
  DataType: 
  OrigDataType: 
T_2302: (in SEQ(cs, 0x07CD) : ptr32)
  Class: Eq_2302
  DataType: 
  OrigDataType: 
T_2303: (in 0x07CD : word16)
  Class: Eq_2303
  DataType: 
  OrigDataType: 
T_2304: (in SEQ(cs, 0x07CD) : ptr32)
  Class: Eq_2304
  DataType: 
  OrigDataType: 
T_2305: (in 0x07CD : word16)
  Class: Eq_2305
  DataType: 
  OrigDataType: 
T_2306: (in SEQ(cs, 0x07CD) : ptr32)
  Class: Eq_2306
  DataType: 
  OrigDataType: 
T_2307: (in true : bool)
  Class: Eq_2307
  DataType: 
  OrigDataType: 
T_2308: (in msdos_terminate_program : ptr32)
  Class: Eq_2308
  DataType: 
  OrigDataType: 
T_2309: (in signature of msdos_terminate_program : void)
  Class: Eq_2308
  DataType: 
  OrigDataType: 
T_2310: (in msdos_terminate_program() : void)
  Class: Eq_2310
  DataType: 
  OrigDataType: 
T_2311: (in __cli : ptr32)
  Class: Eq_2311
  DataType: 
  OrigDataType: 
T_2312: (in __cli() : void)
  Class: Eq_2312
  DataType: 
  OrigDataType: 
T_2313: (in __outb : ptr32)
  Class: Eq_2313
  DataType: 
  OrigDataType: 
T_2314: (in 0x43 : byte)
  Class: Eq_2314
  DataType: 
  OrigDataType: 
T_2315: (in 0x36 : byte)
  Class: Eq_2315
  DataType: 
  OrigDataType: 
T_2316: (in __outb(0x43, 0x36) : void)
  Class: Eq_2316
  DataType: 
  OrigDataType: 
T_2317: (in __outb : ptr32)
  Class: Eq_2317
  DataType: 
  OrigDataType: 
T_2318: (in 0x40 : byte)
  Class: Eq_2318
  DataType: 
  OrigDataType: 
T_2319: (in 0x00 : byte)
  Class: Eq_2319
  DataType: 
  OrigDataType: 
T_2320: (in __outb(0x40, 0x00) : void)
  Class: Eq_2320
  DataType: 
  OrigDataType: 
T_2321: (in __outb : ptr32)
  Class: Eq_2321
  DataType: 
  OrigDataType: 
T_2322: (in 0x40 : byte)
  Class: Eq_2322
  DataType: 
  OrigDataType: 
T_2323: (in ah : byte)
  Class: Eq_2323
  DataType: 
  OrigDataType: 
T_2324: (in __outb(0x40, ah) : void)
  Class: Eq_2324
  DataType: 
  OrigDataType: 
T_2325: (in msdos_set_interrupt_vector : ptr32)
  Class: Eq_2325
  DataType: 
  OrigDataType: 
T_2326: (in signature of msdos_set_interrupt_vector : void)
  Class: Eq_2325
  DataType: 
  OrigDataType: 
T_2327: (in al : byte)
  Class: Eq_2327
  DataType: 
  OrigDataType: 
T_2328: (in ds_dx : word32)
  Class: Eq_2328
  DataType: 
  OrigDataType: 
T_2329: (in 0x08 : byte)
  Class: Eq_2327
  DataType: 
  OrigDataType: 
T_2330: (in ds_dx : word32)
  Class: Eq_2328
  DataType: 
  OrigDataType: 
T_2331: (in msdos_set_interrupt_vector(0x08, ds_dx) : void)
  Class: Eq_2331
  DataType: 
  OrigDataType: 
T_2332: (in ds : selector)
  Class: Eq_2332
  DataType: 
  OrigDataType: 
T_2333: (in ds_dx_8 : ptr32)
  Class: Eq_2333
  DataType: 
  OrigDataType: 
T_2334: (in cs : selector)
  Class: Eq_2334
  DataType: 
  OrigDataType: 
T_2335: (in 0x0907 : word16)
  Class: Eq_2335
  DataType: 
  OrigDataType: 
T_2336: (in Mem0[cs:0x0907:segptr32] : segptr32)
  Class: Eq_2333
  DataType: 
  OrigDataType: 
T_2337: (in ds_9 : selector)
  Class: Eq_2337
  DataType: 
  OrigDataType: 
T_2338: (in SLICE(ds_dx_8, selector, 16) : selector)
  Class: Eq_2337
  DataType: 
  OrigDataType: 
T_2339: (in fn0C00_0852 : ptr32)
  Class: Eq_2339
  DataType: 
  OrigDataType: 
T_2340: (in signature of fn0C00_0852 : void)
  Class: Eq_2339
  DataType: 
  OrigDataType: 
T_2341: (in dx : word16)
  Class: Eq_2341
  DataType: 
  OrigDataType: 
T_2342: (in ds : selector)
  Class: Eq_2337
  DataType: 
  OrigDataType: 
T_2343: (in (word16) ds_dx_8 : word16)
  Class: Eq_2341
  DataType: 
  OrigDataType: 
T_2344: (in 0x00 : byte)
  Class: Eq_2323
  DataType: 
  OrigDataType: 
T_2345: (in fn0C00_0852((word16) ds_dx_8, 0x00, ds_9) : void)
  Class: Eq_2345
  DataType: 
  OrigDataType: 
T_2346: (in bios_video_set_mode : ptr32)
  Class: Eq_50
  DataType: 
  OrigDataType: 
T_2347: (in 0x03 : byte)
  Class: Eq_52
  DataType: 
  OrigDataType: 
T_2348: (in bios_video_set_mode(0x03) : void)
  Class: Eq_2348
  DataType: 
  OrigDataType: 
T_2349:
  Class: Eq_2349
  DataType: 
  OrigDataType: (struct 0004 (0 T_325 t0000))
T_2350:
  Class: Eq_2350
  DataType: 
  OrigDataType: (struct 0001 (0 T_352 t0000))
T_2351:
  Class: Eq_2351
  DataType: 
  OrigDataType: (struct 0002 (0 T_713 t0000))
T_2352:
  Class: Eq_2352
  DataType: 
  OrigDataType: (struct 0001 (0 T_986 t0000))
T_2353:
  Class: Eq_2352
  DataType: 
  OrigDataType: (struct 0001 (0 T_990 t0000))
*/
