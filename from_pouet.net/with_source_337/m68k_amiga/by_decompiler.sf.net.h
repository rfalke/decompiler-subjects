// subject.h
// Generated on TIMESTAMP by decompiling from_pouet.net/with_source_337/m68k_amiga/subject.exe
// using Decompiler version VERSION

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (4 word32 dw0004) (1146 int32 dw1146) (114A int32 dw114A) (114E ptr32 ptr114E) (1152 word32 dw1152) (1156 word16 w1156) (1158 word32 dw1158))
	globals_t (in globals : (ptr (struct "Globals")))
Eq_5: (fn void ())
	T_5 (in fn000010BE : ptr32)
	T_6 (in signature of fn000010BE : void)
Eq_9: (fn word32 ())
	T_9 (in fn000010DA : ptr32)
	T_10 (in signature of fn000010DA : void)
Eq_21: (fn word32 ())
	T_21 (in fn00001092 : ptr32)
	T_22 (in signature of fn00001092 : void)
	T_35 (in fn00001092 : ptr32)
	T_68 (in fn00001092 : ptr32)
	T_70 (in fn00001092 : ptr32)
	T_105 (in fn00001092 : ptr32)
	T_119 (in fn00001092 : ptr32)
Eq_44: (struct "Eq_44" (4 word32 dw0004))
	T_44 (in 0000115C : ptr32)
Eq_51: (fn void ())
	T_51 (in fn000012F4 : ptr32)
	T_52 (in signature of fn000012F4 : void)
Eq_54: (fn void ())
	T_54 (in fn00001316 : ptr32)
	T_55 (in signature of fn00001316 : void)
// Type Variables ////////////
globals_t: (in globals : (ptr (struct "Globals")))
  Class: Eq_1
  DataType: (ptr Eq_1)
  OrigDataType: (ptr (struct "Globals"))
T_2: (in fp : ptr32)
  Class: Eq_2
  DataType: ptr32
  OrigDataType: ptr32
T_3: (in 0000114E : ptr32)
  Class: Eq_3
  DataType: (ptr ptr32)
  OrigDataType: (ptr (struct (0 T_4 t0000)))
T_4: (in Mem3[0x0000114E:word32] : word32)
  Class: Eq_2
  DataType: ptr32
  OrigDataType: word32
T_5: (in fn000010BE : ptr32)
  Class: Eq_5
  DataType: (ptr Eq_5)
  OrigDataType: (ptr (fn T_7 ()))
T_6: (in signature of fn000010BE : void)
  Class: Eq_5
  DataType: (ptr Eq_5)
  OrigDataType: 
T_7: (in fn000010BE() : void)
  Class: Eq_7
  DataType: void
  OrigDataType: void
T_8: (in d0_5 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_9: (in fn000010DA : ptr32)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: (ptr (fn T_11 ()))
T_10: (in signature of fn000010DA : void)
  Class: Eq_9
  DataType: (ptr Eq_9)
  OrigDataType: 
T_11: (in fn000010DA() : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_12: (in a6_9 : int32)
  Class: Eq_12
  DataType: int32
  OrigDataType: word32
T_13: (in 00001146 : ptr32)
  Class: Eq_13
  DataType: (ptr int32)
  OrigDataType: (ptr (struct (0 T_14 t0000)))
T_14: (in Mem3[0x00001146:word32] : word32)
  Class: Eq_12
  DataType: int32
  OrigDataType: word32
T_15: (in -612 : int32)
  Class: Eq_15
  DataType: int32
  OrigDataType: int32
T_16: (in a6_9 + -612 : word32)
  Class: Eq_16
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_17: (in 00001152 : ptr32)
  Class: Eq_17
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_18 t0000)))
T_18: (in Mem25[0x00001152:word32] : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_19: (in 0x00000000 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_20: (in d0_5 == 0x00000000 : bool)
  Class: Eq_20
  DataType: bool
  OrigDataType: bool
T_21: (in fn00001092 : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_23 ()))
T_22: (in signature of fn00001092 : void)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: 
T_23: (in fn00001092() : word32)
  Class: Eq_23
  DataType: word32
  OrigDataType: word32
T_24: (in a6_52 : int32)
  Class: Eq_24
  DataType: int32
  OrigDataType: word32
T_25: (in 0000114A : ptr32)
  Class: Eq_25
  DataType: (ptr int32)
  OrigDataType: (ptr (struct (0 T_26 t0000)))
T_26: (in Mem25[0x0000114A:word32] : word32)
  Class: Eq_24
  DataType: int32
  OrigDataType: word32
T_27: (in -918 : int32)
  Class: Eq_27
  DataType: int32
  OrigDataType: int32
T_28: (in a6_52 + -918 : word32)
  Class: Eq_28
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_29: (in 0x00000280 : word32)
  Class: Eq_29
  DataType: word32
  OrigDataType: word32
T_30: (in 00001158 : ptr32)
  Class: Eq_30
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_31 t0000)))
T_31: (in Mem54[0x00001158:word32] : word32)
  Class: Eq_29
  DataType: word32
  OrigDataType: word32
T_32: (in 0x00000280 : word32)
  Class: Eq_32
  DataType: word32
  OrigDataType: word32
T_33: (in 0x00000000 : word32)
  Class: Eq_32
  DataType: word32
  OrigDataType: word32
T_34: (in 0x00000280 == 0x00000000 : bool)
  Class: Eq_34
  DataType: bool
  OrigDataType: bool
T_35: (in fn00001092 : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_36 ()))
T_36: (in fn00001092() : word32)
  Class: Eq_23
  DataType: word32
  OrigDataType: word32
T_37: (in a6_60 : int32)
  Class: Eq_24
  DataType: int32
  OrigDataType: word32
T_38: (in 0000114A : ptr32)
  Class: Eq_38
  DataType: (ptr int32)
  OrigDataType: (ptr (struct (0 T_39 t0000)))
T_39: (in Mem54[0x0000114A:word32] : word32)
  Class: Eq_24
  DataType: int32
  OrigDataType: word32
T_40: (in -198 : int32)
  Class: Eq_40
  DataType: int32
  OrigDataType: int32
T_41: (in a6_60 + -198 : word32)
  Class: Eq_41
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_42: (in 00001158 : ptr32)
  Class: Eq_42
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_43 t0000)))
T_43: (in Mem54[0x00001158:word32] : word32)
  Class: Eq_29
  DataType: word32
  OrigDataType: word32
T_44: (in 0000115C : ptr32)
  Class: Eq_44
  DataType: (ptr Eq_44)
  OrigDataType: (ptr (struct (4 T_47 t0004)))
T_45: (in 4 : int32)
  Class: Eq_45
  DataType: int32
  OrigDataType: int32
T_46: (in 0x0000115C + 4 : word32)
  Class: Eq_46
  DataType: word32
  OrigDataType: word32
T_47: (in Mem63[0x0000115C + 4:word32] : word32)
  Class: Eq_29
  DataType: word32
  OrigDataType: word32
T_48: (in 0x0000 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_49: (in 0x00001156 : word32)
  Class: Eq_49
  DataType: (ptr word16)
  OrigDataType: (ptr (struct (0 T_50 t0000)))
T_50: (in Mem64[0x00001156:word16] : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_51: (in fn000012F4 : ptr32)
  Class: Eq_51
  DataType: (ptr Eq_51)
  OrigDataType: (ptr (fn T_53 ()))
T_52: (in signature of fn000012F4 : void)
  Class: Eq_51
  DataType: (ptr Eq_51)
  OrigDataType: 
T_53: (in fn000012F4() : void)
  Class: Eq_53
  DataType: void
  OrigDataType: void
T_54: (in fn00001316 : ptr32)
  Class: Eq_54
  DataType: (ptr Eq_54)
  OrigDataType: (ptr (fn T_56 ()))
T_55: (in signature of fn00001316 : void)
  Class: Eq_54
  DataType: (ptr Eq_54)
  OrigDataType: 
T_56: (in fn00001316() : void)
  Class: Eq_56
  DataType: void
  OrigDataType: void
T_57: (in 00001156 : ptr32)
  Class: Eq_57
  DataType: (ptr word16)
  OrigDataType: (ptr (struct (0 T_48 t0000)))
T_58: (in Mem64[0x00001156:word16] : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_59: (in 0x0001 : word16)
  Class: Eq_59
  DataType: word16
  OrigDataType: word16
T_60: (in globals->w1156 + 0x0001 : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_61: (in Mem70[0x00001156:word16] : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_62: (in 00001156 : ptr32)
  Class: Eq_62
  DataType: (ptr word16)
  OrigDataType: (ptr (struct (0 T_63 t0000)))
T_63: (in Mem70[0x00001156:word16] : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_64: (in 0x000A : word16)
  Class: Eq_64
  DataType: word16
  OrigDataType: word16
T_65: (in globals->w1156 - 0x000A : word16)
  Class: Eq_65
  DataType: int16
  OrigDataType: int16
T_66: (in 0x0000 : word16)
  Class: Eq_65
  DataType: int16
  OrigDataType: int16
T_67: (in globals->w1156 - 0x000A < 0x0000 : bool)
  Class: Eq_67
  DataType: bool
  OrigDataType: bool
T_68: (in fn00001092 : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_69 ()))
T_69: (in fn00001092() : word32)
  Class: Eq_23
  DataType: word32
  OrigDataType: word32
T_70: (in fn00001092 : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_71 ()))
T_71: (in fn00001092() : word32)
  Class: Eq_23
  DataType: word32
  OrigDataType: word32
T_72: (in d0 : word32)
  Class: Eq_72
  DataType: word32
  OrigDataType: word32
T_73: (in a0_3 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_74: (in 00001152 : ptr32)
  Class: Eq_74
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_75 t0000)))
T_75: (in Mem0[0x00001152:word32] : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_76: (in 0x00000000 : word32)
  Class: Eq_8
  DataType: word32
  OrigDataType: word32
T_77: (in a0_3 == 0x00000000 : bool)
  Class: Eq_77
  DataType: bool
  OrigDataType: bool
T_78: (in a0_10 : word32)
  Class: Eq_29
  DataType: word32
  OrigDataType: word32
T_79: (in 00001158 : ptr32)
  Class: Eq_79
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_80 t0000)))
T_80: (in Mem0[0x00001158:word32] : word32)
  Class: Eq_29
  DataType: word32
  OrigDataType: word32
T_81: (in 0x00000000 : word32)
  Class: Eq_29
  DataType: word32
  OrigDataType: word32
T_82: (in a0_10 == 0x00000000 : bool)
  Class: Eq_82
  DataType: bool
  OrigDataType: bool
T_83: (in a6_21 : int32)
  Class: Eq_12
  DataType: int32
  OrigDataType: word32
T_84: (in 00001146 : ptr32)
  Class: Eq_84
  DataType: (ptr int32)
  OrigDataType: (ptr (struct (0 T_85 t0000)))
T_85: (in Mem0[0x00001146:word32] : word32)
  Class: Eq_12
  DataType: int32
  OrigDataType: word32
T_86: (in -66 : int32)
  Class: Eq_86
  DataType: int32
  OrigDataType: int32
T_87: (in a6_21 + -66 : word32)
  Class: Eq_87
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_88: (in 0 : int32)
  Class: Eq_88
  DataType: int32
  OrigDataType: int32
T_89: (in a6_20 : int32)
  Class: Eq_24
  DataType: int32
  OrigDataType: word32
T_90: (in 0000114A : ptr32)
  Class: Eq_90
  DataType: (ptr int32)
  OrigDataType: (ptr (struct (0 T_91 t0000)))
T_91: (in Mem0[0x0000114A:word32] : word32)
  Class: Eq_24
  DataType: int32
  OrigDataType: word32
T_92: (in -924 : int32)
  Class: Eq_92
  DataType: int32
  OrigDataType: int32
T_93: (in a6_20 + -924 : word32)
  Class: Eq_93
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_94: (in a6_6 : word32)
  Class: Eq_94
  DataType: word32
  OrigDataType: word32
T_95: (in 00000004 : ptr32)
  Class: Eq_95
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_96 t0000)))
T_96: (in Mem0[0x00000004:word32] : word32)
  Class: Eq_94
  DataType: word32
  OrigDataType: word32
T_97: (in -552 : int32)
  Class: Eq_97
  DataType: int32
  OrigDataType: int32
T_98: (in a6_6 + -552 : word32)
  Class: Eq_98
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_99: (in 0 : int32)
  Class: Eq_24
  DataType: int32
  OrigDataType: int32
T_100: (in 0000114A : ptr32)
  Class: Eq_100
  DataType: (ptr int32)
  OrigDataType: (ptr (struct (0 T_101 t0000)))
T_101: (in Mem13[0x0000114A:word32] : word32)
  Class: Eq_24
  DataType: int32
  OrigDataType: word32
T_102: (in 0 : int32)
  Class: Eq_102
  DataType: int32
  OrigDataType: int32
T_103: (in 0 : int32)
  Class: Eq_102
  DataType: int32
  OrigDataType: int32
T_104: (in 0 == 0 : bool)
  Class: Eq_104
  DataType: bool
  OrigDataType: bool
T_105: (in fn00001092 : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_106 ()))
T_106: (in fn00001092() : word32)
  Class: Eq_23
  DataType: word32
  OrigDataType: word32
T_107: (in d0 : word32)
  Class: Eq_107
  DataType: word32
  OrigDataType: word32
T_108: (in a6_6 : word32)
  Class: Eq_94
  DataType: word32
  OrigDataType: word32
T_109: (in 00000004 : ptr32)
  Class: Eq_109
  DataType: (ptr word32)
  OrigDataType: (ptr (struct (0 T_110 t0000)))
T_110: (in Mem0[0x00000004:word32] : word32)
  Class: Eq_94
  DataType: word32
  OrigDataType: word32
T_111: (in -552 : int32)
  Class: Eq_111
  DataType: int32
  OrigDataType: int32
T_112: (in a6_6 + -552 : word32)
  Class: Eq_112
  DataType: (ptr code)
  OrigDataType: (ptr code)
T_113: (in 39 : int32)
  Class: Eq_12
  DataType: int32
  OrigDataType: int32
T_114: (in 00001146 : ptr32)
  Class: Eq_114
  DataType: (ptr int32)
  OrigDataType: (ptr (struct (0 T_115 t0000)))
T_115: (in Mem13[0x00001146:word32] : word32)
  Class: Eq_12
  DataType: int32
  OrigDataType: word32
T_116: (in 39 : int32)
  Class: Eq_116
  DataType: int32
  OrigDataType: int32
T_117: (in 0 : int32)
  Class: Eq_116
  DataType: int32
  OrigDataType: int32
T_118: (in 39 == 0 : bool)
  Class: Eq_118
  DataType: bool
  OrigDataType: bool
T_119: (in fn00001092 : ptr32)
  Class: Eq_21
  DataType: (ptr Eq_21)
  OrigDataType: (ptr (fn T_120 ()))
T_120: (in fn00001092() : word32)
  Class: Eq_23
  DataType: word32
  OrigDataType: word32
T_121: (in 39 : int32)
  Class: Eq_121
  DataType: int32
  OrigDataType: int32
T_122: (in d0_5 : word32)
  Class: Eq_122
  DataType: word32
  OrigDataType: word32
T_123: (in 0x00000280 : word32)
  Class: Eq_123
  DataType: word32
  OrigDataType: word32
T_124: (in 00001156 : ptr32)
  Class: Eq_124
  DataType: (ptr word16)
  OrigDataType: (ptr (struct (0 T_125 t0000)))
T_125: (in Mem0[0x00001156:word16] : word16)
  Class: Eq_48
  DataType: word16
  OrigDataType: word16
T_126: (in DPB(0x00000280, globals->w1156, 0, 16) : word32)
  Class: Eq_122
  DataType: word32
  OrigDataType: word32
T_127: (in d0_7 : word32)
  Class: Eq_127
  DataType: word32
  OrigDataType: word32
T_128: (in (word16) d0_5 : word16)
  Class: Eq_128
  DataType: word16
  OrigDataType: word16
T_129: (in 0x0001 : word16)
  Class: Eq_129
  DataType: word16
  OrigDataType: word16
T_130: (in (word16) d0_5 + 0x0001 : word16)
  Class: Eq_130
  DataType: word16
  OrigDataType: word16
T_131: (in DPB(d0_5, (word16) d0_5 + 0x0001, 0, 16) : word32)
  Class: Eq_127
  DataType: word32
  OrigDataType: word32
T_132: (in a0_2 : ptr32)
  Class: Eq_132
  DataType: ptr32
  OrigDataType: word32
T_133: (in 00001340 : ptr32)
  Class: Eq_132
  DataType: ptr32
  OrigDataType: ptr32
T_134: (in d1_9 : word32)
  Class: Eq_134
  DataType: word32
  OrigDataType: word32
T_135: (in 0x00000001 : word32)
  Class: Eq_135
  DataType: word32
  OrigDataType: word32
T_136: (in (word16) d0_7 : word16)
  Class: Eq_136
  DataType: word16
  OrigDataType: word16
T_137: (in DPB(0x00000001, (word16) d0_7, 0, 16) : word32)
  Class: Eq_134
  DataType: word32
  OrigDataType: word32
T_138: (in a0_14 : (ptr byte))
  Class: Eq_138
  DataType: (ptr byte)
  OrigDataType: (ptr (struct (0 T_152 t0000)))
T_139: (in (word16) a0_2 : word16)
  Class: Eq_139
  DataType: word16
  OrigDataType: word16
T_140: (in (word16) d0_7 : word16)
  Class: Eq_140
  DataType: word16
  OrigDataType: word16
T_141: (in 0x0005 : word16)
  Class: Eq_141
  DataType: word16
  OrigDataType: word16
T_142: (in (word16) d0_7 << 0x0005 : word16)
  Class: Eq_142
  DataType: ui16
  OrigDataType: ui16
T_143: (in DPB(d0_5, (word16) d0_7 << 0x0005, 0, 16) : word32)
  Class: Eq_143
  DataType: word32
  OrigDataType: word32
T_144: (in (word16) DPB(d0_5, (word16) d0_7 << 0x0005, 0, 16) : word16)
  Class: Eq_144
  DataType: word16
  OrigDataType: word16
T_145: (in (word16) a0_2 + (word16) DPB(d0_5, (word16) d0_7 << 0x0005, 0, 16) : word16)
  Class: Eq_145
  DataType: word16
  OrigDataType: word16
T_146: (in DPB(a0_2, (word16) a0_2 + (word16) DPB(d0_5, (word16) d0_7 << 0x0005, 0, 16), 0, 16) : word32)
  Class: Eq_138
  DataType: (ptr byte)
  OrigDataType: word32
T_147: (in d2_15 : word32)
  Class: Eq_147
  DataType: word32
  OrigDataType: word32
T_148: (in 0x000001DF : word32)
  Class: Eq_147
  DataType: word32
  OrigDataType: word32
T_149: (in (byte) d1_9 : byte)
  Class: Eq_149
  DataType: byte
  OrigDataType: byte
T_150: (in 0x00000000 : word32)
  Class: Eq_150
  DataType: word32
  OrigDataType: word32
T_151: (in a0_14 + 0x00000000 : word32)
  Class: Eq_151
  DataType: word32
  OrigDataType: word32
T_152: (in Mem20[a0_14 + 0x00000000:byte] : byte)
  Class: Eq_149
  DataType: byte
  OrigDataType: byte
T_153: (in (word16) a0_14 : word16)
  Class: Eq_153
  DataType: word16
  OrigDataType: word16
T_154: (in 0x0280 : word16)
  Class: Eq_154
  DataType: word16
  OrigDataType: word16
T_155: (in (word16) a0_14 + 0x0280 : word16)
  Class: Eq_155
  DataType: word16
  OrigDataType: word16
T_156: (in DPB(a0_14, (word16) a0_14 + 0x0280, 0, 16) : word32)
  Class: Eq_138
  DataType: (ptr byte)
  OrigDataType: word32
T_157: (in 0x00000001 : word32)
  Class: Eq_157
  DataType: word32
  OrigDataType: word32
T_158: (in d2_15 - 0x00000001 : word32)
  Class: Eq_147
  DataType: word32
  OrigDataType: word32
T_159: (in 0xFFFFFFFF : word32)
  Class: Eq_147
  DataType: word32
  OrigDataType: word32
T_160: (in d2_15 != 0xFFFFFFFF : bool)
  Class: Eq_160
  DataType: bool
  OrigDataType: bool
T_161: (in a6_12 : int32)
  Class: Eq_24
  DataType: int32
  OrigDataType: word32
T_162: (in 0000114A : ptr32)
  Class: Eq_162
  DataType: (ptr int32)
  OrigDataType: (ptr (struct (0 T_163 t0000)))
T_163: (in Mem0[0x0000114A:word32] : word32)
  Class: Eq_24
  DataType: int32
  OrigDataType: word32
T_164: (in -786 : int32)
  Class: Eq_164
  DataType: int32
  OrigDataType: int32
T_165: (in a6_12 + -786 : word32)
  Class: Eq_165
  DataType: (ptr code)
  OrigDataType: (ptr code)
*/
typedef struct Globals {
	word32 dw0004;	// 4
	int32 dw1146;	// 1146
	int32 dw114A;	// 114A
	ptr32 ptr114E;	// 114E
	word32 dw1152;	// 1152
	word16 w1156;	// 1156
	word32 dw1158;	// 1158
} Eq_1;

typedef void (Eq_5)();

typedef word32 (Eq_9)();

typedef word32 (Eq_21)();

typedef struct Eq_44 {
	word32 dw0004;	// 4
} Eq_44;

typedef void (Eq_51)();

typedef void (Eq_54)();

